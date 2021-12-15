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
	unk_0xB57F88F0123F4C38();
	while (true)
	{
		wait(0);
		bLocal_247 = false;
		bVar0 = func_386();
		Global_2394836.f_3 = 0;
		Global_2395284 = 0;
		if (func_385())
		{
			bLocal_247 = true;
			Var1 = { Global_2394836.f_4 };
			MemCopy(&cVar11, {Var1.f_3}, 8);
			iVar19 = func_384(Global_2394836.f_4);
			iVar20 = unk_0xD803B885F5E47A62();
			bVar21 = Global_2394836.f_14;
			if (bVar21)
			{
				cVar11 = { Global_2394836.f_15 };
			}
			if (Global_2394836.f_25)
			{
				func_383(&Local_64, 1, 1);
				unk_0x0674E58A79778E99(&(Global_1590535[iVar20].f_39.f_18), 2);
				unk_0x0674E58A79778E99(&(Global_1590535[iVar20].f_39.f_18), 1);
				unk_0x0674E58A79778E99(&(Global_1590535[iVar20].f_39.f_18), 3);
				func_382();
				func_381();
				Global_2394836.f_25 = 0;
			}
			if (!unk_0x8CD06866876216F2())
			{
				func_380();
			}
			else if (!func_118(&Local_64, &cVar11, &(Global_1590535[iVar20].f_39.f_18), iVar19, 0, 0, 1, 0, 1, bVar21, 0, 1, 0, 1))
			{
				Global_2394836.f_23 = 0;
				Global_2394836.f_27 = -1;
				if (bVar0)
				{
					func_383(&Local_64, 1, 1);
					unk_0xBEE2C6416AC0EB98();
					func_117();
					Global_2394836.f_23 = 1;
					Global_2394836.f_24 = 0;
					if (Global_2394836.f_27 < 0)
					{
						Global_2394836.f_27 = 0;
					}
					else
					{
						Global_2394836.f_27++;
						if (Global_2394836.f_27 >= 10)
						{
							func_380();
							Global_2394836.f_25 = 1;
						}
					}
				}
			}
			else if (Local_64)
			{
				Global_2394836.f_23 = 1;
				Global_2394836.f_24 = 1;
				if (Global_2394836.f_27 < 0)
				{
					Global_2394836.f_27 = 0;
				}
				else
				{
					Global_2394836.f_27++;
					if (Global_2394836.f_27 >= 10)
					{
						func_380();
					}
				}
			}
			else
			{
				Global_2394836.f_26++;
				if (Global_2394836.f_26 >= 3)
				{
					Global_2394836.f_23 = 1;
					Global_2394836.f_24 = 0;
					if (Global_2394836.f_27 < 0)
					{
						Global_2394836.f_27 = 0;
					}
					else
					{
						Global_2394836.f_27++;
						if (Global_2394836.f_27 >= 10)
						{
							func_380();
							Global_2394836.f_25 = 1;
						}
					}
				}
				else
				{
					Global_2394836.f_25 = 1;
				}
			}
		}
		if (func_116())
		{
			bLocal_247 = true;
			MemCopy(&cVar22, {Global_2394836.f_4.f_3}, 8);
			if (Global_2394836.f_23)
			{
				func_380();
			}
			else
			{
				if (Global_2394836.f_25)
				{
					func_383(&Local_64, 1, 1);
					Global_2394836.f_25 = 0;
				}
				iVar30 = 0;
				if (!func_112(&Local_64, &cVar22, &Local_158, &iVar30))
				{
					Global_2394836.f_23 = 0;
					Global_2394836.f_27 = -1;
				}
				else if (Local_64)
				{
					Global_2394836.f_23 = 1;
					Global_2394836.f_24 = 1;
					Global_2394836.f_28 = Local_158.f_65;
					Global_2394836.f_29 = Local_158.f_68;
					Global_2394836.f_30 = { Local_158.f_22 };
					Global_2394836.f_46 = { Local_158.f_38 };
					Global_2450632.f_5 = iVar30;
					Global_2450632.f_6 = iVar30;
					Global_2398783 = { Local_158 };
				}
				else
				{
					Global_2394836.f_23 = 1;
					Global_2394836.f_24 = 0;
				}
			}
		}
		if (func_111())
		{
			bLocal_247 = true;
			if (Global_2394836.f_23)
			{
				func_380();
			}
			else
			{
				if (Global_2394836.f_25)
				{
					func_383(&Local_64, 1, 1);
					Global_2394836.f_25 = 0;
				}
				iVar31 = Local_64.f_4;
				if (!func_5(&Local_64))
				{
					Global_2395284 = 1;
					if (iVar31 != Local_64.f_4)
					{
						if (Local_64.f_4 == 4)
						{
							iLocal_246 = (unk_0x1C0640BA9A7327B3() + 50000);
						}
					}
					bVar32 = false;
					if (Local_64.f_4 == 4)
					{
						if (unk_0x1C0640BA9A7327B3() > iLocal_246)
						{
							Global_2394836.f_23 = 1;
							Global_2394836.f_24 = 0;
							bVar32 = true;
						}
					}
					if (!bVar32)
					{
						Global_2394836.f_23 = 0;
						Global_2394836.f_27 = -1;
					}
				}
				else if (Local_64)
				{
					Global_2394836.f_23 = 1;
					Global_2394836.f_24 = 1;
				}
				else
				{
					Global_2394836.f_23 = 1;
					Global_2394836.f_24 = 0;
				}
			}
		}
		if (!bLocal_247)
		{
			if (func_4(unk_0xD803B885F5E47A62()) || func_3(unk_0xD803B885F5E47A62()))
			{
				if (!func_1(unk_0xD803B885F5E47A62(), 1, 0))
				{
					unk_0x10FAF14A60A0DBE1();
				}
			}
		}
	}
}

int func_1(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_2())
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

int func_2()
{
	return -1;
}

bool func_3(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 7;
}

bool func_4(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 2;
}

int func_5(bool bParam0)
{
	if (!func_110())
	{
		if (func_107())
		{
			return 1;
		}
	}
	switch (bParam0->f_4)
	{
		case 0:
			if (func_106())
			{
				return 0;
			}
			if (func_105())
			{
				return 0;
			}
			func_104();
			func_103();
			func_102();
			if (func_110())
			{
				unk_0x71939E9C5DD93A34(1);
			}
			else
			{
				unk_0x71939E9C5DD93A34(0);
			}
			bParam0->f_13 = Global_2395283;
			bParam0->f_9 = 1200;
			if (bParam0->f_13 == 0)
			{
				return 1;
			}
			func_101(bParam0, 24);
			break;
		
		case 24:
			if (func_99(bParam0->f_13))
			{
				func_383(bParam0, 1, 1);
				*bParam0 = 1;
				return 1;
			}
			else
			{
				func_101(bParam0, 1);
			}
			break;
		
		case 1:
			if (unk_0xAC3ADFB01FABE31B(&Global_2394898, bParam0->f_13, 1, func_98(0)))
			{
				func_101(bParam0, 2);
			}
			break;
		
		case 2:
			if (unk_0x00528CBC2478166A())
			{
				if (unk_0x2D6B689DC548F438())
				{
					*bParam0 = 0;
				}
				else
				{
					func_383(bParam0, 1, 1);
					bParam0->f_41 = unk_0xA68C484CB8CFE012();
					*bParam0 = 0;
					return 1;
				}
				if (unk_0xAFE0F18038B8A4C0() > 0)
				{
					func_101(bParam0, 4);
				}
				else
				{
					func_383(bParam0, 1, 1);
					*bParam0 = 0;
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0xE21CB52ABC852258())
			{
				func_103();
				*bParam0 = 0;
				return 1;
			}
			if (bParam0->f_9 >= (1200 + bParam0->f_13))
			{
				func_383(bParam0, 1, 1);
				*bParam0 = 1;
				return 1;
			}
			else
			{
				bParam0->f_7 = 0;
				while (bParam0->f_7 < bParam0->f_13)
				{
					if (bParam0->f_9 < 1218)
					{
						if (unk_0xB45EDD00181AF3F2() != 0)
						{
							unk_0xEADC638FF742BE01();
						}
						if (unk_0x45A4029B43848D4B(bParam0->f_7))
						{
							func_6(bParam0, 1);
						}
						else if (bParam0->f_8 > 200)
						{
							func_103();
							bParam0->f_7++;
							bParam0->f_8 = 0;
						}
					}
					bParam0->f_7++;
				}
			}
			break;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	iVar0 = unk_0xB45EDD00181AF3F2();
	iVar1 = unk_0x6D954AF55D3925DB(iVar0, "mission");
	iVar2 = unk_0x6D954AF55D3925DB(iVar1, "gen");
	if (func_110())
	{
		if (func_97(unk_0x774936D1A30C902C(bParam0->f_7)))
		{
			if (unk_0xB45EDD00181AF3F2() != 0)
			{
				unk_0xEADC638FF742BE01();
			}
			return;
		}
	}
	if ((unk_0x8A83B52A17A321DB(iVar2, "type") == 0 && unk_0x8A83B52A17A321DB(iVar2, "subtype") == 7) && bParam0->f_9 < 1200)
	{
		if (unk_0xB45EDD00181AF3F2() != 0)
		{
			unk_0xEADC638FF742BE01();
		}
		return;
	}
	if (Global_262145.f_7721)
	{
		if (unk_0x8A83B52A17A321DB(iVar2, "type") == 0)
		{
			if (unk_0x8A83B52A17A321DB(iVar2, "subtype") == 1 || unk_0x8A83B52A17A321DB(iVar2, "subtype") == 7)
			{
				if (unk_0xB45EDD00181AF3F2() != 0)
				{
					unk_0xEADC638FF742BE01();
				}
				return;
			}
			iVar3 = unk_0x8A83B52A17A321DB(iVar2, "optbs");
			if (unk_0xEAE0D21A50E6C7F4(iVar3, 4) || unk_0xEAE0D21A50E6C7F4(iVar3, 12))
			{
				if (unk_0xB45EDD00181AF3F2() != 0)
				{
					unk_0xEADC638FF742BE01();
				}
				return;
			}
		}
	}
	if (bParam0->f_9 == 0 && bParam1 == 0)
	{
		func_96();
		Global_794709.f_2 = 0;
		Global_794709.f_123068 = 0;
		func_95();
		iVar4 = 0;
		while (iVar4 < 13)
		{
			Global_794709.f_123083[iVar4] = 0;
			Global_794709.f_123069[iVar4] = 0;
			iVar4++;
		}
		if (func_92())
		{
			func_91(1);
			func_91(0);
			func_89(1);
		}
	}
	Var5.f_65 = -1;
	Var5.f_66 = -1;
	Var5.f_67 = 2;
	Global_794709.f_4[bParam0->f_9] = { Var5 };
	if (!func_110())
	{
		Global_794709.f_107189[bParam0->f_9].f_5 = unk_0xE0D583A72B7859EA(bParam0->f_7, 0);
		Global_794709.f_4[bParam0->f_9].f_67 = func_88(bParam0->f_7);
		Global_794709.f_4[bParam0->f_9].f_66 = unk_0xE0D583A72B7859EA(bParam0->f_7, Global_794709.f_4[bParam0->f_9].f_67);
		Global_794709.f_107189[bParam0->f_9].f_6 = unk_0x4446517B2720C2F9(bParam0->f_7);
	}
	Global_794709.f_4[bParam0->f_9].f_56 = { func_87(iVar2) };
	if (unk_0xAE496C664AE89A9C(iVar2, "optbs") == 2)
	{
		Global_794709.f_4[bParam0->f_9].f_76 = unk_0x8A83B52A17A321DB(iVar2, "optbs");
	}
	unk_0x0674E58A79778E99(&(Global_794709.f_4[bParam0->f_9].f_76), 15);
	unk_0x0674E58A79778E99(&(Global_794709.f_4[bParam0->f_9].f_76), 18);
	unk_0x0674E58A79778E99(&(Global_794709.f_4[bParam0->f_9].f_76), 19);
	unk_0x0674E58A79778E99(&(Global_794709.f_4[bParam0->f_9].f_76), 29);
	unk_0x0674E58A79778E99(&(Global_794709.f_4[bParam0->f_9].f_76), 28);
	Global_794709.f_4[bParam0->f_9].f_59 = { func_86(iVar2, "cam") };
	Global_794709.f_4[bParam0->f_9].f_62 = { func_85(iVar2) };
	if (!func_110())
	{
		if (unk_0xCEA7093049ECDD91(unk_0x4446517B2720C2F9(bParam0->f_7)))
		{
			Global_794709.f_4[bParam0->f_9].f_54 = unk_0x051ABD838C3CAF26(bParam0->f_7);
		}
		else
		{
			Global_794709.f_4[bParam0->f_9].f_54 = -1;
		}
	}
	if (unk_0xAE496C664AE89A9C(iVar2, "mgrk") == 2)
	{
		Global_794709.f_107189[bParam0->f_9].f_8 = unk_0x8A83B52A17A321DB(iVar2, "mgrk");
	}
	if (unk_0xAE496C664AE89A9C(iVar2, "mght") == 2)
	{
		Global_794709.f_107189[bParam0->f_9].f_9 = unk_0x8A83B52A17A321DB(iVar2, "mght");
	}
	Global_794709.f_107189[bParam0->f_9].f_11 = unk_0x8A83B52A17A321DB(iVar2, "cncmbs");
	Global_794709.f_4[bParam0->f_9].f_69 = unk_0x8A83B52A17A321DB(iVar2, "min");
	Global_794709.f_4[bParam0->f_9].f_71 = unk_0x8A83B52A17A321DB(iVar2, "num");
	if (Global_794709.f_4[bParam0->f_9].f_71 == -1)
	{
		Global_794709.f_4[bParam0->f_9].f_71 = func_84();
	}
	StringCopy(&(Global_794709.f_4[bParam0->f_9].f_22), unk_0x91259F92C05E1E44(bParam0->f_7), 64);
	Global_794709.f_4[bParam0->f_9].f_65 = unk_0x8A83B52A17A321DB(iVar2, "type");
	if (func_110())
	{
		StringCopy(&(Global_794709.f_4[bParam0->f_9].f_6), func_83(), 64);
	}
	else
	{
		StringCopy(&(Global_794709.f_4[bParam0->f_9].f_6), unk_0xA89E31B6D809E76E(bParam0->f_7), 64);
	}
	Global_794709.f_4[bParam0->f_9].f_70 = unk_0x8A83B52A17A321DB(iVar2, "rank");
	Global_794709.f_107189[bParam0->f_9] = unk_0x8A83B52A17A321DB(iVar2, "tnum");
	if (!func_110())
	{
		Global_794709.f_4[bParam0->f_9].f_73 = func_82(unk_0x43F3160CD7399127(bParam0->f_7, 0), unk_0xE4D3676AD065E454(bParam0->f_7, 0));
		Global_794709.f_107189[bParam0->f_9].f_4 = unk_0xE4D3676AD065E454(bParam0->f_7, 0);
	}
	Global_794709.f_4[bParam0->f_9].f_75 = unk_0x8A83B52A17A321DB(iVar2, "charcon");
	Global_794709.f_4[bParam0->f_9].f_78 = unk_0x8A83B52A17A321DB(iVar2, "ltm");
	StringCopy(&(Global_794709.f_4[bParam0->f_9]), unk_0x774936D1A30C902C(bParam0->f_7), 24);
	iVar93 = unk_0x12AB0310C2281427(&(Global_794709.f_4[bParam0->f_9]));
	Global_794709.f_107189[bParam0->f_9].f_3 = iVar93;
	if (Global_794709.f_4[bParam0->f_9].f_65 == 6 && !bParam1)
	{
		if (Global_958841.f_684 < 85)
		{
			Global_794709.f_4[bParam0->f_9].f_68 = Global_958841.f_684;
			Global_958841[Global_958841.f_684] = { func_86(iVar2, "area") };
			if (unk_0xAE496C664AE89A9C(iVar2, "rad") == 2)
			{
				Global_958841.f_512[Global_958841.f_684] = to_float(unk_0x8A83B52A17A321DB(iVar2, "rad"));
			}
			else
			{
				Global_958841.f_512[Global_958841.f_684] = unk_0xB37C1AC7E8A75F3C(iVar2, "rad");
			}
			Global_958841.f_256[Global_958841.f_684] = { Global_794709.f_4[bParam0->f_9].f_56 };
			Global_958841.f_598[Global_958841.f_684] = iVar93;
			Global_794709.f_4[bParam0->f_9].f_56 = { Global_794709.f_4[bParam0->f_9].f_59 };
			Global_958841.f_684++;
		}
	}
	else
	{
		Global_794709.f_4[bParam0->f_9].f_68 = unk_0x8A83B52A17A321DB(iVar2, "subtype");
		Global_794709.f_4[bParam0->f_9].f_80 = unk_0x8A83B52A17A321DB(iVar2, "adverm");
	}
	func_81(Global_794709.f_4[bParam0->f_9].f_65, &(Global_794709.f_4[bParam0->f_9].f_71), &(Global_794709.f_4[bParam0->f_9].f_69));
	if (func_110())
	{
		if (unk_0x7F8A39872A07D2CE(unk_0x774936D1A30C902C(bParam0->f_7), "lUo6JFfliE-ZQ_8gd90ZxQ"))
		{
			Global_794709.f_4[bParam0->f_9].f_56 = { 897,5109f, -2340,599f, 29,4461f };
		}
	}
	unk_0x5D96D8530B3D0904(&(Global_794709.f_4[bParam0->f_9].f_76), 13);
	if (!func_110())
	{
		Global_794709.f_107189[bParam0->f_9].f_1 = unk_0x12AB0310C2281427(unk_0x017764C9FA977AFF(bParam0->f_7));
	}
	Global_794709.f_107189[bParam0->f_9].f_2 = func_80(Global_794709.f_107189[bParam0->f_9].f_1, 1);
	if (func_79(Global_794709.f_107189[bParam0->f_9].f_1))
	{
		if (Global_794709.f_4[bParam0->f_9].f_75 == 0)
		{
			Global_794709.f_4[bParam0->f_9].f_75 = 1;
		}
	}
	bVar94 = func_78(Global_794709.f_107189[bParam0->f_9].f_1);
	iVar95 = func_77(Global_794709.f_107189[bParam0->f_9].f_1);
	if (iVar95 != -1)
	{
		Global_1694088[iVar95] = bParam0->f_9;
	}
	if ((Global_794709.f_4[bParam0->f_9].f_65 < 13 && !bParam1) && !bVar94)
	{
		if (Global_794709.f_4[bParam0->f_9].f_70 <= 1000)
		{
			Global_794709.f_123069[Global_794709.f_4[bParam0->f_9].f_65]++;
			if (func_76(bParam0->f_9))
			{
				Global_794709.f_123069[7]++;
			}
			else if (func_75(bParam0->f_9))
			{
				Global_794709.f_123069[4]++;
			}
			else if (func_74(bParam0->f_9))
			{
				Global_794709.f_123069[10]++;
			}
			else if (func_73(bParam0->f_9))
			{
				Global_794709.f_123069[12]++;
			}
		}
	}
	if (unk_0xB45EDD00181AF3F2() != 0)
	{
		unk_0xEADC638FF742BE01();
	}
	if (!func_110())
	{
		if (bVar94)
		{
			Global_794709.f_4[bParam0->f_9].f_69 = Global_794709.f_4[bParam0->f_9].f_71;
		}
		if ((Global_794709.f_123068 < 5 && Global_794709.f_4[bParam0->f_9].f_65 == 0) && Global_794709.f_4[bParam0->f_9].f_68 == 1)
		{
			Global_794709.f_107189[bParam0->f_9].f_10 = Global_794709.f_123068;
			StringCopy(&(Global_794709.f_123037[Global_794709.f_123068]), unk_0x017764C9FA977AFF(bParam0->f_7), 24);
			Global_794709.f_123068++;
		}
		func_58(Global_794709.f_107189[bParam0->f_9].f_1, &(Global_794709.f_4[bParam0->f_9].f_76), &(Global_794709.f_4[bParam0->f_9].f_77), Global_794709.f_4[bParam0->f_9].f_80);
		func_54(Global_794709.f_107189[bParam0->f_9].f_1, bParam0->f_9);
		if (bParam1)
		{
			if (unk_0xE528A25150C0D360(bParam0->f_7))
			{
				unk_0x5D96D8530B3D0904(&(Global_794709.f_4[bParam0->f_9].f_76), 14);
			}
		}
		else if (!bVar94)
		{
			if (func_32(Global_794709.f_107189[bParam0->f_9].f_1, Global_794709.f_4[bParam0->f_9].f_80))
			{
				Global_794709.f_123069[11]++;
			}
			if (unk_0xE528A25150C0D360(bParam0->f_7))
			{
				unk_0x5D96D8530B3D0904(&(Global_794709.f_4[bParam0->f_9].f_76), 14);
				if (unk_0xEAE0D21A50E6C7F4(Global_794709.f_4[bParam0->f_9].f_76, 1) || Global_794709.f_4[bParam0->f_9].f_68 == 2)
				{
					Global_794709.f_123069[9]++;
				}
				if (Global_794709.f_4[bParam0->f_9].f_70 <= 1000)
				{
					if (Global_794709.f_4[bParam0->f_9].f_65 < 13)
					{
						Global_794709.f_123083[Global_794709.f_4[bParam0->f_9].f_65]++;
					}
				}
				Global_794709.f_107189[bParam0->f_9].f_7 = unk_0xAE62FF8AF8C8C8FC(bParam0->f_7);
			}
		}
	}
	if (!bParam1 && !bVar94)
	{
		if (func_92())
		{
			func_30(Global_794709.f_4[bParam0->f_9].f_65, Global_794709.f_4[bParam0->f_9].f_68, unk_0xEAE0D21A50E6C7F4(Global_794709.f_4[bParam0->f_9].f_76, 14), Global_794709.f_4[bParam0->f_9].f_70, 0);
			func_28(Global_794709.f_4[bParam0->f_9].f_65, Global_794709.f_4[bParam0->f_9].f_68, Global_794709.f_4[bParam0->f_9].f_70, 0);
			func_26(Global_794709.f_4[bParam0->f_9].f_65, Global_794709.f_4[bParam0->f_9].f_68, Global_794709.f_4[bParam0->f_9].f_75, Global_794709.f_4[bParam0->f_9].f_70, unk_0xEAE0D21A50E6C7F4(Global_794709.f_4[bParam0->f_9].f_76, 14));
			func_7(Global_794709.f_4[bParam0->f_9].f_65, Global_794709.f_4[bParam0->f_9].f_68, Global_794709.f_4[bParam0->f_9].f_75, Global_794709.f_4[bParam0->f_9].f_70);
		}
	}
	if (Global_794709.f_4[bParam0->f_9].f_65 == 6)
	{
		Global_959526[0]++;
	}
	bParam0->f_9++;
	Global_794709.f_2++;
	if (unk_0xB45EDD00181AF3F2() != 0)
	{
		unk_0xEADC638FF742BE01();
	}
}

void func_7(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_14(iParam0, iParam1, iParam2, &iVar0, iParam3))
	{
		return;
	}
	iVar1 = func_13(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	func_8(iVar1, 1);
}

void func_8(int iParam0, int iParam1)
{
	iVar0 = func_12(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_11(iParam0))
	{
		func_10(iParam0, iVar0);
	}
	else
	{
		func_9(iParam0, iVar0);
	}
}

void func_9(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case 406381289:
			Global_1387910 = iParam1;
			break;
		
		case 1669900865:
			Global_1387912 = iParam1;
			break;
		
		case 54164875:
			Global_1387912 = iParam1;
			break;
		
		case -842450336:
			Global_1387913 = iParam1;
			break;
		
		case -1576871964:
			Global_1387914 = iParam1;
			break;
		
		case -1446982891:
			Global_1387915 = iParam1;
			break;
		
		case -1676857426:
			Global_1387916 = iParam1;
			break;
		
		case 1280806976:
			Global_1387917 = iParam1;
			break;
		
		case -1096682281:
			Global_1387918 = iParam1;
			break;
		
		case 1894078811:
			Global_1387919 = iParam1;
			break;
		
		case -1566025259:
			Global_1387920 = iParam1;
			break;
		
		case -621080327:
			Global_1387921 = iParam1;
			break;
		
		case 1021002722:
			Global_1387922 = iParam1;
			break;
		
		case -1670771646:
			Global_1387923 = iParam1;
			break;
		
		case -1992420464:
			Global_1387924 = iParam1;
			break;
		
		case -386175531:
			Global_1387925 = iParam1;
			break;
		
		case -203536263:
			Global_1387926 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_10(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
	}
}

int func_11(int iParam0)
{
	if (Global_1387909)
	{
		switch (iParam0)
		{
			case 406381289:
			case 1669900865:
			case 54164875:
			case -842450336:
			case -1576871964:
			case -1446982891:
			case -1676857426:
			case 1280806976:
			case -1096682281:
			case 1894078811:
			case -1566025259:
			case -621080327:
			case 1021002722:
			case -1670771646:
			case -1992420464:
			case -386175531:
			case -203536263:
				return 1;
				break;
			}
	}
	return 0;
}

int func_12(var uParam0)
{
	iVar0 = uParam0;
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_13(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 937091411;
		
		case 19:
			return 1242858950;
		
		case 86:
			return 533508407;
		
		case 20:
			return 839013794;
		
		case 31:
			return 118554556;
		
		case 2:
			return 361602233;
		
		case 18:
			return -895154459;
		
		default:
	}
	return -1;
}

int func_14(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	if (iParam0 != 0)
	{
		return 0;
	}
	if (iParam1 != 2)
	{
		return 0;
	}
	if (func_20(unk_0xD803B885F5E47A62()) < iParam4)
	{
		return 0;
	}
	iVar0 = func_15(iParam2);
	*uParam3 = 145;
	if (iVar0 != 0)
	{
		*uParam3 = iVar0;
	}
	if (*uParam3 == 145)
	{
		return 0;
	}
	return 1;
}

int func_15(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam0 > 0 && iParam0 <= 200)
	{
		if (iParam0 > 90)
		{
			return 0;
		}
		switch (iParam0)
		{
			case 10:
				return 12;
			
			case 17:
				return 19;
			
			case 18:
				return 20;
			
			case 28:
				return 31;
			
			case 75:
				return 12;
			
			default:
		}
		return iParam0;
	}
	iVar0 = func_16(iParam0);
	if (iVar0 == 145)
	{
		return 0;
	}
	return iVar0;
}

int func_16(int iParam0)
{
	if (iParam0 == 0)
	{
		return 145;
	}
	iVar0 = 0;
	iVar1 = 145;
	iVar0 = 0;
	while (iVar0 < 34)
	{
		iVar1 = func_18(iVar0);
		if (iParam0 == func_17(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return 145;
}

int func_17(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 131908481;
		
		case 19:
			return -366822323;
		
		case 12:
			return -1917614010;
		
		case 31:
			return -328739832;
		
		case 20:
			return -1984782235;
		
		case 18:
			return -2105450473;
		
		case 2:
			return 657970604;
		
		case 76:
			return 612082356;
		
		case 22:
			return 676712040;
		
		case 53:
			return 1603401902;
		
		case 34:
			return 1526580161;
		
		case 152:
			return 1388694673;
		
		case 85:
			return -874891575;
		
		case 84:
			return 1085494823;
		
		case 0:
			return 1435709240;
		
		case 1:
			return 1153582740;
		
		case 153:
			return 1548197805;
		
		case 151:
			return 1252576609;
		
		case 14:
			return 356144869;
		
		case 15:
			return 1518150745;
		
		case 24:
			return 2110802340;
		
		case 30:
			return -1309242723;
		
		case 46:
			return 1528098484;
		
		case 47:
			return -1084633958;
		
		case 54:
			return -42959138;
		
		case 51:
			return 1922837891;
		
		case 60:
			return 1604857004;
		
		case 62:
			return 451094880;
		
		case 66:
			return 1028278171;
		
		case 69:
			return -1120398581;
		
		case 154:
			return -1034857696;
		
		case 82:
			return -867869163;
		
		case 157:
			return -979045660;
		
		case 79:
			return 1909041158;
		
		case 145:
			return 0;
		
		default:
	}
	return 0;
}

int func_18(int iParam0)
{
	iVar0 = iParam0;
	uVar1 = func_19(iVar0);
	return uVar1;
}

int func_19(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 86;
		
		case 1:
			return 19;
		
		case 2:
			return 12;
		
		case 3:
			return 31;
		
		case 4:
			return 20;
		
		case 5:
			return 18;
		
		case 6:
			return 2;
		
		case 7:
			return 76;
		
		case 8:
			return 22;
		
		case 9:
			return 53;
		
		case 10:
			return 34;
		
		case 11:
			return 152;
		
		case 12:
			return 85;
		
		case 13:
			return 84;
		
		case 14:
			return 0;
		
		case 15:
			return 1;
		
		case 16:
			return 153;
		
		case 17:
			return 151;
		
		case 18:
			return 14;
		
		case 19:
			return 15;
		
		case 20:
			return 24;
		
		case 21:
			return 30;
		
		case 22:
			return 46;
		
		case 23:
			return 47;
		
		case 24:
			return 54;
		
		case 25:
			return 51;
		
		case 26:
			return 60;
		
		case 27:
			return 62;
		
		case 28:
			return 66;
		
		case 29:
			return 69;
		
		case 30:
			return 154;
		
		case 31:
			return 82;
		
		case 32:
			return 157;
		
		case 33:
			return 79;
		
		default:
	}
	return 19;
}

int func_20(int iParam0)
{
	iVar0 = func_22(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_21(iVar0, 0);
}

int func_21(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_291133[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_291133[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((to_float(iVar1) - to_float(iVar2)) / 2f) + to_float(iVar2));
		iVar3 = round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_22(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_1388060[func_24(-1)];
			}
			else if (func_23(iParam0))
			{
				return Global_1590535[iParam0].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_24(-1)];
	}
	return 0;
}

int func_23(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2439138.f_1, iParam0);
	}
	return 1;
}

int func_24(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_25();
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

int func_25()
{
	return Global_1312745;
}

void func_26(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!bParam4)
	{
		return;
	}
	if (!func_14(iParam0, iParam1, iParam2, &iVar0, iParam3))
	{
		return;
	}
	iVar1 = func_27(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	func_8(iVar1, 1);
}

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1924923522;
		
		case 19:
			return 1405764259;
		
		case 86:
			return 1905294895;
		
		case 20:
			return 1061525914;
		
		case 31:
			return 1306572496;
		
		case 2:
			return -890228503;
		
		case 18:
			return 679799833;
		
		default:
	}
	return -1;
}

void func_28(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_92())
	{
		if (iParam0 == 0)
		{
			if (((iParam1 != 6 && iParam1 != 5) && iParam1 != 4) && iParam1 != 9)
			{
				if (func_20(unk_0xD803B885F5E47A62()) < iParam2)
				{
					return;
				}
			}
		}
		iVar0 = func_29(iParam0, iParam1, bParam3);
		if (iVar0 == -1)
		{
			return;
		}
		func_8(iVar0, 1);
	}
}

int func_29(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 2:
			if (bParam2)
			{
				return -143516224;
			}
			else
			{
				return -1099789324;
			}
			break;
		
		case 1:
			if (bParam2)
			{
				return -2038150999;
			}
			else
			{
				return -559295439;
			}
			break;
		
		case 8:
			if (bParam2)
			{
				return 258386037;
			}
			else
			{
				return 1282228944;
			}
			break;
		
		case 3:
			if (bParam2)
			{
				return -1462161517;
			}
			else
			{
				return -223755332;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
					if (bParam2)
					{
						return 994825103;
					}
					else
					{
						return 253234741;
					}
					break;
				
				case 5:
					if (bParam2)
					{
						return -711951330;
					}
					else
					{
						return 771588403;
					}
					break;
				
				case 4:
					if (bParam2)
					{
						return -96670911;
					}
					else
					{
						return -1148527662;
					}
					break;
				
				case 1:
					if (bParam2)
					{
						return -708118870;
					}
					else
					{
						return 978181703;
					}
					break;
				
				case 7:
					if (bParam2)
					{
						return 348170426;
					}
					else
					{
						return 937781072;
					}
					break;
			}
			if (bParam2)
			{
				return -773168478;
			}
			else
			{
				return 1736420749;
			}
			break;
	}
	return -1;
}

void func_30(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_92())
	{
		return;
	}
	if (!bParam2)
	{
		return;
	}
	if (iParam0 == 0)
	{
		if (((iParam1 != 6 && iParam1 != 5) && iParam1 != 4) && iParam1 != 9)
		{
			if (func_20(unk_0xD803B885F5E47A62()) < iParam3)
			{
				return;
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (iParam3 >= 9999)
		{
			return;
		}
	}
	iVar0 = func_31(iParam0, iParam1, bParam4);
	if (iVar0 == -1)
	{
		return;
	}
	func_8(iVar0, 1);
}

int func_31(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 2:
			if (bParam2)
			{
				return -466058941;
			}
			else
			{
				return 1888646001;
			}
			break;
		
		case 1:
			if (bParam2)
			{
				return -459859885;
			}
			else
			{
				return -925148069;
			}
			break;
		
		case 8:
			if (bParam2)
			{
				return 1831615637;
			}
			else
			{
				return 886884741;
			}
			break;
		
		case 3:
			if (bParam2)
			{
				return 1274468322;
			}
			else
			{
				return 780952369;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
					if (bParam2)
					{
						return -442626823;
					}
					else
					{
						return 332371336;
					}
					break;
				
				case 5:
					if (bParam2)
					{
						return 310009137;
					}
					else
					{
						return -313835496;
					}
					break;
				
				case 4:
					if (bParam2)
					{
						return 1445350080;
					}
					else
					{
						return 935697470;
					}
					break;
				
				case 1:
					if (bParam2)
					{
						return -548839670;
					}
					else
					{
						return -1776238337;
					}
					break;
				
				case 7:
					if (bParam2)
					{
						return -1054420012;
					}
					else
					{
						return 280555198;
					}
					break;
			}
			if (bParam2)
			{
				return -1560832267;
			}
			else
			{
				return 1033306085;
			}
			break;
	}
	return -1;
}

int func_32(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		return 1;
	}
	if ((((((((((((((((((((func_53(iParam0) || func_52(iParam0)) || func_51(iParam0)) || func_50(iParam0, 1)) || func_49(iParam0)) || func_48(iParam0)) || func_47(iParam0)) || func_46(iParam0)) || func_45(iParam0)) || func_44(iParam0)) || func_43(iParam0)) || func_42(iParam0)) || func_41(iParam0)) || func_40(iParam0)) || func_39(iParam0)) || func_38(iParam0)) || func_37(iParam0)) || func_36(iParam0)) || func_35(iParam0)) || func_34(iParam1)) || func_33(iParam1))
	{
		return 1;
	}
	return 0;
}

bool func_33(int iParam0)
{
	return iParam0 == 65;
}

bool func_34(int iParam0)
{
	return iParam0 == 57;
}

int func_35(int iParam0)
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

int func_36(int iParam0)
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

int func_37(int iParam0)
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

int func_38(int iParam0)
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

int func_39(int iParam0)
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

int func_40(int iParam0)
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

int func_41(int iParam0)
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

int func_42(int iParam0)
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

int func_43(int iParam0)
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

int func_44(int iParam0)
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

int func_45(int iParam0)
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

int func_46(int iParam0)
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

int func_47(int iParam0)
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

int func_48(int iParam0)
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

int func_49(int iParam0)
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

int func_50(int iParam0, bool bParam1)
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

int func_51(int iParam0)
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

int func_52(int iParam0)
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

int func_53(int iParam0)
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

void func_54(int iParam0, int iParam1)
{
	if (iParam1 >= 1200)
	{
		return;
	}
	if (iParam0 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == Global_262145.f_9027[iVar0])
		{
			Global_794709.f_123024[0][iVar0] = iParam1;
			Global_794709.f_4[iParam1].f_56 = { func_57(0, iVar0) };
			Global_794709.f_4[iParam1].f_59 = { func_56(0, iVar0) };
			Global_794709.f_4[iParam1].f_62 = { func_55(0, iVar0) };
			Global_794709.f_107189[iParam1].f_12 = 0;
			Global_794709.f_4[iParam1].f_68 = 8;
			Global_794709.f_4[iParam1].f_75 = 0;
			Global_794709.f_4[iParam1].f_78 = 16777215;
			Global_794709.f_4[iParam1].f_73 = -1;
			if (Global_794709.f_123024[0].f_9 <= iVar0)
			{
				Global_794709.f_123024[0].f_9 = iVar0 + 1;
			}
		}
		else if (iParam0 == Global_262145.f_9036[iVar0])
		{
			Global_794709.f_107189[iParam1].f_12 = 0;
			Global_794709.f_4[iParam1].f_68 = 8;
			Global_794709.f_4[iParam1].f_75 = 0;
			Global_794709.f_4[iParam1].f_78 = 16777215;
			Global_794709.f_4[iParam1].f_73 = -1;
		}
		iVar0++;
	}
}

Vector3 func_55(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -15,6168f, 0,1008f, -149,8604f;
				
				case 1:
					return 3,5927f, 0,1008f, 156,3615f;
				
				case 2:
					return 3,4157f, 0,112f, 16,4938f;
				
				case 3:
					return 5,3856f, 0f, 112,9827f;
				
				case 4:
					return 4,2705f, 0f, 19,1749f;
				
				case 5:
					return -5,2724f, 0f, 42,8827f;
				
				case 6:
					return 12,4243f, 0f, 57,4707f;
				
				case 7:
					return -15,6168f, 0,1008f, -149,8604f;
				
				default:
			}
			return 2,8273f, 0f, 0,0625f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_56(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -209,1766f, -1305,476f, 34,7404f;
				
				case 1:
					return -1601,532f, -1039,506f, 17,2286f;
				
				case 2:
					return -8,6889f, -1727,83f, 30,3896f;
				
				case 3:
					return 1997,496f, 3054,69f, 54,605f;
				
				case 4:
					return 967,5151f, -1735,46f, 32,0426f;
				
				case 5:
					return 779,6009f, -1424,604f, 32,9774f;
				
				case 6:
					return -331,129f, -1492,046f, 30,3228f;
				
				case 7:
					return -209,1766f, -1305,476f, 34,7404f;
				
				default:
			}
			return -61,784f, -1538,702f, 43,8935f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_57(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -210,4709f, -1306,318f, 30,336f;
				
				case 1:
					return -1598,327f, -1040,538f, 12,0183f;
				
				case 2:
					return -21,2711f, -1732,453f, 28,304f;
				
				case 3:
					return 1992,482f, 3058,078f, 46,0576f;
				
				case 4:
					return 960,3523f, -1745,844f, 30,2208f;
				
				case 5:
					return 775,7347f, -1367,343f, 25,5669f;
				
				case 6:
					return -321,3307f, -1495,598f, 29,6536f;
				
				case 7:
					return -210,4709f, -1306,318f, 30,336f;
				
				default:
			}
			return -210,4709f, -1306,318f, 30,336f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_58(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_53(iParam0))
	{
		unk_0x5D96D8530B3D0904(iParam1, 15);
	}
	else if (func_52(iParam0))
	{
		unk_0x5D96D8530B3D0904(iParam1, 18);
	}
	else if (func_51(iParam0))
	{
		unk_0x5D96D8530B3D0904(iParam1, 19);
	}
	else if (func_49(iParam0))
	{
		unk_0x5D96D8530B3D0904(iParam1, 29);
	}
	else if (func_50(iParam0, 1))
	{
		unk_0x5D96D8530B3D0904(iParam1, 28);
	}
	else if (func_48(iParam0))
	{
		unk_0x5D96D8530B3D0904(iParam2, 0);
	}
	else if (func_47(iParam0))
	{
		unk_0x5D96D8530B3D0904(iParam2, 1);
	}
	else if (func_46(iParam0))
	{
		unk_0x5D96D8530B3D0904(iParam2, 2);
	}
	else if (func_45(iParam0))
	{
		unk_0x5D96D8530B3D0904(iParam2, 3);
	}
	else if (func_44(iParam0))
	{
		unk_0x5D96D8530B3D0904(iParam2, 4);
	}
	else if (func_43(iParam0))
	{
		unk_0x5D96D8530B3D0904(iParam2, 5);
	}
	else if (func_42(iParam0))
	{
		unk_0x5D96D8530B3D0904(iParam2, 6);
	}
	else if (func_41(iParam0))
	{
		unk_0x5D96D8530B3D0904(iParam2, 7);
	}
	else if (func_40(iParam0))
	{
		unk_0x5D96D8530B3D0904(iParam2, 8);
	}
	else if (func_39(iParam0))
	{
		unk_0x5D96D8530B3D0904(iParam2, 9);
	}
	else if (func_35(iParam0))
	{
		unk_0x5D96D8530B3D0904(iParam2, 10);
	}
	else if (func_38(iParam0))
	{
		unk_0x5D96D8530B3D0904(iParam2, 11);
	}
	else if (func_37(iParam0))
	{
		unk_0x5D96D8530B3D0904(iParam2, 12);
	}
	else if (func_72(iParam3))
	{
		unk_0x5D96D8530B3D0904(iParam2, 13);
	}
	else if (func_36(iParam0))
	{
		unk_0x5D96D8530B3D0904(iParam2, 14);
	}
	else if (func_71(iParam0))
	{
		unk_0x5D96D8530B3D0904(iParam2, 22);
	}
	else if (func_70(iParam3))
	{
		unk_0x5D96D8530B3D0904(iParam2, 16);
	}
	else if (func_69(iParam3))
	{
		unk_0x5D96D8530B3D0904(iParam2, 17);
	}
	else if (func_68(iParam3))
	{
		unk_0x5D96D8530B3D0904(iParam2, 20);
	}
	else if (func_67(iParam3))
	{
		unk_0x5D96D8530B3D0904(iParam2, 21);
	}
	else if (func_71(iParam3))
	{
		unk_0x5D96D8530B3D0904(iParam2, 22);
	}
	else if (func_66(iParam3))
	{
		unk_0x5D96D8530B3D0904(iParam2, 23);
	}
	else if (func_65(iParam3))
	{
		unk_0x5D96D8530B3D0904(iParam2, 24);
	}
	else if (func_64(iParam3))
	{
		unk_0x5D96D8530B3D0904(iParam2, 25);
	}
	else if (func_63(iParam3))
	{
		unk_0x5D96D8530B3D0904(iParam2, 26);
	}
	else if (func_62(iParam3))
	{
		unk_0x5D96D8530B3D0904(iParam2, 27);
	}
	else if (func_61(iParam3))
	{
		unk_0x5D96D8530B3D0904(iParam2, 28);
	}
	else if (func_60(iParam3))
	{
		unk_0x5D96D8530B3D0904(iParam2, 29);
	}
	else if (func_59(iParam3))
	{
		unk_0x5D96D8530B3D0904(iParam2, 30);
	}
}

bool func_59(int iParam0)
{
	return iParam0 == 17;
}

bool func_60(int iParam0)
{
	return iParam0 == 16;
}

bool func_61(int iParam0)
{
	return iParam0 == 15;
}

bool func_62(int iParam0)
{
	return iParam0 == 14;
}

bool func_63(int iParam0)
{
	return iParam0 == 13;
}

bool func_64(int iParam0)
{
	return iParam0 == 12;
}

bool func_65(int iParam0)
{
	return iParam0 == 11;
}

bool func_66(int iParam0)
{
	return iParam0 == 9;
}

bool func_67(int iParam0)
{
	return (iParam0 == 1 || iParam0 == 67);
}

bool func_68(int iParam0)
{
	return iParam0 == 6;
}

bool func_69(int iParam0)
{
	return iParam0 == 4;
}

bool func_70(int iParam0)
{
	return iParam0 == 2;
}

bool func_71(int iParam0)
{
	return iParam0 == 8;
}

bool func_72(int iParam0)
{
	return iParam0 == 3;
}

bool func_73(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_794709.f_4[iParam0].f_76, 24);
}

bool func_74(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_794709.f_4[iParam0].f_76, 3);
}

bool func_75(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_794709.f_4[iParam0].f_76, 10);
}

bool func_76(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_794709.f_4[iParam0].f_76, 7);
}

int func_77(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5008[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_78(int iParam0)
{
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 14)
		{
			if (Global_262145.f_6446[iVar1] == 2)
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

int func_79(int iParam0)
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

int func_80(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 14)
		{
			if (((Global_262145.f_6446[iVar1] == 202 || Global_262145.f_6446[iVar1] == 203) || Global_262145.f_6446[iVar1] == 204) || (iParam1 && ((((((((Global_262145.f_6446[iVar1] == 224 || Global_262145.f_6446[iVar1] == 223) || Global_262145.f_6446[iVar1] == 232) || Global_262145.f_6446[iVar1] == 245) || Global_262145.f_6446[iVar1] == 246) || Global_262145.f_6446[iVar1] == 251) || Global_262145.f_6446[iVar1] == 252) || Global_262145.f_6446[iVar1] == 253) || Global_262145.f_6446[iVar1] == 161)))
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_5922[iVar1])
				{
					if (iParam0 == Global_262145.f_5032[iVar1][iVar0])
					{
						return iVar1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

void func_81(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 == 1)
	{
		if (*uParam2 < 2)
		{
			*uParam2 = 2;
		}
	}
	else if (*uParam2 < 1)
	{
		*uParam2 = 1;
	}
	if (*uParam1 < *uParam2)
	{
		*uParam1 = *uParam2;
	}
}

int func_82(float fParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return -1;
	}
	iVar0 = round((fParam0 * 100f));
	if (iVar0 < 0)
	{
		iVar0 = -1;
	}
	return iVar0;
}

char* func_83()
{
	return unk_0x19C9F30A7697B43C("CREATOR_RSC");
}

int func_84()
{
	if (Global_2457997)
	{
		return 32;
	}
	return (32 - Global_2457998);
}

Vector3 func_85(int iParam0)
{
	if (unk_0xAE496C664AE89A9C(iParam0, "camp") == 3)
	{
		vVar0.x = unk_0xB37C1AC7E8A75F3C(iParam0, "camp");
	}
	else if (unk_0xAE496C664AE89A9C(iParam0, "camp") == 2)
	{
		vVar0.x = to_float(unk_0x8A83B52A17A321DB(iParam0, "camp"));
	}
	if (unk_0xAE496C664AE89A9C(iParam0, "camh") == 3)
	{
		vVar0.z = unk_0xB37C1AC7E8A75F3C(iParam0, "camh");
	}
	else if (unk_0xAE496C664AE89A9C(iParam0, "camh") == 2)
	{
		vVar0.z = to_float(unk_0x8A83B52A17A321DB(iParam0, "camh"));
	}
	return vVar0;
}

Vector3 func_86(int iParam0, char* sParam1)
{
	if (unk_0xAE496C664AE89A9C(iParam0, sParam1) == 5)
	{
		vVar0 = { unk_0xC0F58A082935B6E1(iParam0, sParam1) };
	}
	else if (unk_0xAE496C664AE89A9C(iParam0, sParam1) == 6)
	{
		iVar3 = unk_0x6D954AF55D3925DB(iParam0, sParam1);
		if (unk_0xAE496C664AE89A9C(iVar3, "x") == 2)
		{
			vVar0.x = to_float(unk_0x8A83B52A17A321DB(iVar3, "x"));
		}
		else
		{
			vVar0.x = unk_0xB37C1AC7E8A75F3C(iVar3, "x");
		}
		if (unk_0xAE496C664AE89A9C(iVar3, "y") == 2)
		{
			vVar0.y = to_float(unk_0x8A83B52A17A321DB(iVar3, "y"));
		}
		else
		{
			vVar0.y = unk_0xB37C1AC7E8A75F3C(iVar3, "y");
		}
		if (unk_0xAE496C664AE89A9C(iVar3, "z") == 2)
		{
			vVar0.z = to_float(unk_0x8A83B52A17A321DB(iVar3, "z"));
		}
		else
		{
			vVar0.z = unk_0xB37C1AC7E8A75F3C(iVar3, "z");
		}
	}
	return vVar0;
}

Vector3 func_87(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { func_86(iParam0, "start") };
	if (unk_0x0399732A9EBC368E(vVar0, -2233,327f, 2436,134f, -14,65155f, -2229,56f, 2399,576f, 11,99761f, 24f, 0, true))
	{
		vVar0 = { -2303,54f, 2428,09f, 2,02f };
	}
	if (unk_0x0399732A9EBC368E(vVar0, 603,6218f, 5573,046f, 694,484f, 594,2379f, 5542,792f, 727,479f, 33,5f, 0, true))
	{
		vVar0 = { 502,6f, 5537,06f, 777,05f };
	}
	return vVar0;
}

int func_88(int iParam0)
{
	if (unk_0x6F7C7A05A427EB08(iParam0))
	{
		return 2;
	}
	else if (unk_0x8A51F317C12B42E8(iParam0))
	{
		return 1;
	}
	return 1;
}

void func_89(bool bParam0)
{
	func_90(1494295860, bParam0);
}

void func_90(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD8B681091EBE4064(iVar0, bParam1, 1);
	}
}

void func_91(bool bParam0)
{
	if (!func_92())
	{
		return;
	}
	if (bParam0)
	{
		func_10(1888646001, 0);
		func_10(-925148069, 0);
		func_10(886884741, 0);
		func_10(780952369, 0);
		func_10(332371336, 0);
		func_10(-313835496, 0);
		func_10(935697470, 0);
		func_10(1033306085, 0);
		func_10(280555198, 0);
		func_10(-1776238337, 0);
		func_10(-1099789324, 0);
		func_10(-559295439, 0);
		func_10(1282228944, 0);
		func_10(-223755332, 0);
		func_10(771588403, 0);
		func_10(253234741, 0);
		func_10(-1148527662, 0);
		func_10(1736420749, 0);
		func_10(937781072, 0);
		func_10(978181703, 0);
		func_10(1924923522, 0);
		func_10(1405764259, 0);
		func_10(1905294895, 0);
		func_10(1061525914, 0);
		func_10(1306572496, 0);
		func_10(-890228503, 0);
		func_10(679799833, 0);
		func_10(937091411, 0);
		func_10(1242858950, 0);
		func_10(533508407, 0);
		func_10(839013794, 0);
		func_10(118554556, 0);
		func_10(361602233, 0);
		func_10(-895154459, 0);
	}
	else
	{
		func_10(-466058941, 0);
		func_10(-459859885, 0);
		func_10(1831615637, 0);
		func_10(1274468322, 0);
		func_10(-442626823, 0);
		func_10(310009137, 0);
		func_10(1445350080, 0);
		func_10(-1560832267, 0);
		func_10(-1054420012, 0);
		func_10(-548839670, 0);
		func_10(-143516224, 0);
		func_10(-2038150999, 0);
		func_10(258386037, 0);
		func_10(-1462161517, 0);
		func_10(-711951330, 0);
		func_10(994825103, 0);
		func_10(-96670911, 0);
		func_10(-773168478, 0);
		func_10(348170426, 0);
		func_10(-708118870, 0);
	}
}

int func_92()
{
	if (func_94() && func_93(0))
	{
		return 1;
	}
	return 0;
}

var func_93(int iParam0)
{
	return Global_1312374[iParam0];
}

var func_94()
{
	return func_93(func_25() + 1);
}

void func_95()
{
	Global_958841.f_684 = 0;
	iVar0 = 0;
	while (iVar0 <= 84)
	{
		Global_958841[iVar0] = { 0f, 0f, 0f };
		Global_958841.f_256[iVar0] = { 0f, 0f, 0f };
		Global_958841.f_512[iVar0] = 0f;
		iVar0++;
	}
}

void func_96()
{
	iVar1 = 0;
	while (iVar1 < 1)
	{
		Global_794709.f_123024[iVar0].f_9 = 0;
		iVar0 = 0;
		while (iVar0 < 8)
		{
			Global_794709.f_123024[iVar1][iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
}

int func_97(char* sParam0)
{
	if ((((((((((((((((unk_0x7F8A39872A07D2CE(sParam0, "QwBYuaosIk-ZB9sAs4T6vQ") || unk_0x7F8A39872A07D2CE(sParam0, "O8SUrTkPW0G7NVh-c95lPQ")) || unk_0x7F8A39872A07D2CE(sParam0, "Cdgvsa-E8katW71P6VWhQg")) || unk_0x7F8A39872A07D2CE(sParam0, "W3U0oyo5okGvED-f7CPzhg")) || unk_0x7F8A39872A07D2CE(sParam0, "7CpnaZYqMEKxxbW2rbp33A")) || unk_0x7F8A39872A07D2CE(sParam0, "d_cLbuKs0kyVu6VWc3tfQg")) || unk_0x7F8A39872A07D2CE(sParam0, "hCC18F4SuU254v5vlgPRmA")) || unk_0x7F8A39872A07D2CE(sParam0, "tSm64WIuK0yqti6Po8oQCg")) || unk_0x7F8A39872A07D2CE(sParam0, "5mwusUtO5E6AVvnUrgFZcg")) || unk_0x7F8A39872A07D2CE(sParam0, "_dFdLIICm0OaNP3ewdkmqA")) || unk_0x7F8A39872A07D2CE(sParam0, "cfWCTF0bH0W0JmM3kP3TPg")) || unk_0x7F8A39872A07D2CE(sParam0, "JVlkjgsbUk6pHcrN43FPgQ")) || unk_0x7F8A39872A07D2CE(sParam0, "AdOvPsvI30yZ6h9HpjzcwA")) || unk_0x7F8A39872A07D2CE(sParam0, "te4f3O-vVUOkF3YAbnzD2A")) || unk_0x7F8A39872A07D2CE(sParam0, "8jRfzi-oHEGHiJEQLkbZ_w")) || unk_0x7F8A39872A07D2CE(sParam0, "gYOgjaTS7EedRGFuBasioQ")) || unk_0x7F8A39872A07D2CE(sParam0, "OGuQ53X7G0qx-jteU3gBkg"))
	{
		return 1;
	}
	return 0;
}

char* func_98(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "gta5mission";
		
		case 1:
			return "playlist";
		
		case 2:
			return "lifeinvaderpost";
		
		case 3:
			return "photo";
		
		case 4:
			return "challenge";
		
		default:
	}
	return "gta5mission";
}

int func_99(int iParam0)
{
	if (Global_262145.f_3768 == 1)
	{
		return 0;
	}
	if (Global_786550 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		iVar67 = 0;
		iVar1 = 0;
		while (iVar1 < Global_786550)
		{
			if (iVar1 < 35)
			{
				if (iVar67 == 0)
				{
					if (Global_786550.f_3082[iVar1].f_1 == unk_0x12AB0310C2281427(&(Global_2394898[iVar0])))
					{
						iVar67 = 1;
						iVar2[iVar0] = iVar1;
					}
				}
			}
			iVar1++;
		}
		if (iVar67 == 0)
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		Global_794709.f_4[(1200 + iVar0)] = { Global_786550.f_1[iVar2[iVar0]] };
		Global_794709.f_107189[(1200 + iVar0)] = { Global_786550.f_3082[iVar2[iVar0]] };
		iVar1 = 0;
		while (iVar1 < 8)
		{
			Global_1662512.f_111[iVar0].f_44[iVar1] = { Global_786550.f_3538[iVar2[iVar0]][iVar1] };
			iVar1++;
		}
		iVar0++;
	}
	func_100(1);
	return 1;
}

void func_100(int iParam0)
{
	Global_1662512.f_1784 = iParam0;
}

void func_101(bool bParam0, int iParam1)
{
	bParam0->f_4 = iParam1;
}

void func_102()
{
	Var0.f_65 = -1;
	Var0.f_66 = -1;
	Var0.f_67 = 2;
	iVar88 = 1200;
	while (iVar88 <= 1217)
	{
		Global_794709.f_4[iVar88] = { Var0 };
		iVar88++;
	}
}

void func_103()
{
	if (unk_0xB45EDD00181AF3F2() != 0)
	{
		unk_0xEADC638FF742BE01();
	}
}

void func_104()
{
	if (func_110())
	{
		unk_0x4739D3E2B190C50A();
	}
	else
	{
		unk_0x025C4CF41AEFDEC7();
	}
}

bool func_105()
{
	return Global_2458936.f_4;
}

int func_106()
{
	if (unk_0xEB22E23C5DDDD376())
	{
		return 1;
	}
	else if (unk_0xAE6F4A4A47122354())
	{
		return 1;
	}
	else if (unk_0xC49C081F809590D9())
	{
		return 1;
	}
	return 0;
}

int func_107()
{
	if (!func_108())
	{
		return 1;
	}
	return 0;
}

int func_108()
{
	if (func_109())
	{
		return 0;
	}
	if (unk_0xE6725CC0C55B6CA1() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_109()
{
	return Global_2461181;
}

bool func_110()
{
	return Global_1573282.f_4;
}

bool func_111()
{
	return Global_2394836.f_2;
}

int func_112(bool bParam0, char* sParam1, char* sParam2, int iParam3)
{
	switch (bParam0->f_4)
	{
		case 0:
			*bParam0 = 0;
			if (func_106())
			{
				return 0;
			}
			func_104();
			func_103();
			if (func_110())
			{
				*bParam0 = 0;
				return 1;
			}
			else
			{
				unk_0x71939E9C5DD93A34(0);
			}
			func_101(bParam0, 1);
			break;
		
		case 1:
			if (unk_0x532097D906222538(sParam1, func_98(0)))
			{
				func_101(bParam0, 3);
			}
			break;
		
		case 3:
			if (unk_0x00528CBC2478166A())
			{
				bParam0->f_41 = unk_0xA68C484CB8CFE012();
				if (unk_0x2D6B689DC548F438())
				{
				}
				else
				{
					func_383(bParam0, 1, 1);
					bParam0->f_41 = unk_0xA68C484CB8CFE012();
					*bParam0 = 0;
					return 1;
				}
				if (unk_0xAFE0F18038B8A4C0() > 0)
				{
					if (unk_0x45A4029B43848D4B(0))
					{
						func_113(sParam2, 0, iParam3);
						func_383(bParam0, 1, 1);
						*bParam0 = 1;
						return 1;
					}
				}
				else
				{
					func_383(bParam0, 1, 1);
					*bParam0 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_113(char* sParam0, int iParam1, var uParam2)
{
	iVar0 = unk_0xB45EDD00181AF3F2();
	iVar1 = unk_0x6D954AF55D3925DB(iVar0, "mission");
	iVar2 = unk_0x6D954AF55D3925DB(iVar1, "gen");
	StringCopy(sParam0, unk_0x774936D1A30C902C(iParam1), 24);
	StringCopy(&(sParam0->f_6), unk_0xA89E31B6D809E76E(iParam1), 64);
	StringCopy(&(sParam0->f_22), unk_0x91259F92C05E1E44(iParam1), 64);
	sParam0->f_56 = { func_87(iVar2) };
	sParam0->f_59 = { func_86(iVar2, "cam") };
	sParam0->f_62 = { func_85(iVar2) };
	sParam0->f_65 = unk_0x8A83B52A17A321DB(iVar2, "type");
	sParam0->f_68 = unk_0x8A83B52A17A321DB(iVar2, "subtype");
	sParam0->f_80 = unk_0x8A83B52A17A321DB(iVar2, "adverm");
	sParam0->f_79 = unk_0x8A83B52A17A321DB(iVar2, "testcomplete");
	sParam0->f_69 = unk_0x8A83B52A17A321DB(iVar2, "min");
	sParam0->f_70 = unk_0x8A83B52A17A321DB(iVar2, "rank");
	sParam0->f_71 = unk_0x8A83B52A17A321DB(iVar2, "num");
	sParam0->f_73 = func_82(unk_0x43F3160CD7399127(iParam1, 0), unk_0xE4D3676AD065E454(iParam1, 0));
	sParam0->f_74 = 0;
	sParam0->f_75 = unk_0x8A83B52A17A321DB(iVar2, "charcon");
	*uParam2 = unk_0x12AB0310C2281427(unk_0x017764C9FA977AFF(0));
	if (func_115(*uParam2))
	{
		sParam0->f_68 = 8;
	}
	if (func_114() != 2)
	{
		if (sParam0->f_71 > Global_262145.f_4578)
		{
			sParam0->f_71 = Global_262145.f_4578;
		}
		if (sParam0->f_69 > Global_262145.f_4578)
		{
			sParam0->f_69 = Global_262145.f_4578;
		}
	}
	if (!func_110())
	{
		iVar3 = unk_0x4446517B2720C2F9(iParam1);
		if (unk_0xCEA7093049ECDD91(iVar3))
		{
			sParam0->f_54 = unk_0x051ABD838C3CAF26(iParam1);
		}
		else
		{
			sParam0->f_54 = -1;
		}
	}
	if (unk_0xAE496C664AE89A9C(iVar2, "ltm") == 2)
	{
		sParam0->f_78 = unk_0x8A83B52A17A321DB(iVar2, "ltm");
	}
	unk_0x5D96D8530B3D0904(&(sParam0->f_76), 13);
	func_103();
}

int func_114()
{
	return Global_30768;
}

int func_115(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == Global_262145.f_9027[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_116()
{
	return Global_2394836.f_1;
}

void func_117()
{
	Global_2458936.f_8 = 0;
	Global_2458936.f_7 = 0;
}

int func_118(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if ((iParam3 > 10 && iParam3 <= 15) || iParam3 == 122)
	{
		*uParam0 = 1;
		unk_0x5D96D8530B3D0904(iParam2, 3);
		if (!unk_0xEAE0D21A50E6C7F4(*iParam2, 2))
		{
		}
		unk_0x5D96D8530B3D0904(iParam2, 2);
		return 1;
	}
	if ((func_379() && func_378()) || func_377())
	{
		if (!unk_0xEAE0D21A50E6C7F4(*iParam2, 2))
		{
		}
		unk_0x5D96D8530B3D0904(iParam2, 2);
		unk_0x5D96D8530B3D0904(iParam2, 1);
		unk_0x5D96D8530B3D0904(iParam2, 3);
		*uParam0 = 1;
		return 1;
	}
	if (iParam7 == 1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(*iParam2, 3))
		{
			unk_0x5D96D8530B3D0904(iParam2, 3);
		}
		return 1;
	}
	if (bParam4)
	{
		if (!func_376())
		{
			return 0;
		}
	}
	uParam0->f_15 = 0;
	if (bParam8)
	{
		if (func_375())
		{
			if (unk_0xEAE0D21A50E6C7F4(*iParam2, 2))
			{
				unk_0x5D96D8530B3D0904(iParam2, 3);
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam6)
	{
		if (func_105())
		{
			return 0;
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(*iParam2, 2))
	{
		if (!unk_0xEAE0D21A50E6C7F4(*iParam2, 1))
		{
			if (!bParam12)
			{
				func_331(1, 1, bParam11, 1);
			}
			unk_0x5D96D8530B3D0904(iParam2, 1);
			func_383(uParam0, 1, 1);
			*uParam0 = 0;
		}
		if (func_136(uParam0, sParam1, 0, 1, 0, iParam5, 0, 0, 1, bParam9, bParam10, bParam11, 0, bParam12, bParam13))
		{
			if (((func_135(1) || Global_4456448 == 31) || Global_4456448 == 6) || Global_4456448 == 4)
			{
				if (func_134(Global_4456448.f_194990))
				{
					Global_4456448.f_244 = { func_133() };
				}
				if (func_132(Global_4456448.f_194990))
				{
					Global_4456448.f_244 = { func_131() };
				}
				if (Global_4456448.f_206 < 1)
				{
					Global_4456448.f_206 = 1;
				}
				if (Global_4456448.f_205 < 1)
				{
					Global_4456448.f_205 = 1;
				}
				if (!func_130())
				{
					func_129();
				}
			}
			else if (Global_4456448 == 1)
			{
				Global_1388135.f_4 = 99;
				Global_1388135.f_6 = Global_4456448.f_229;
				Global_1388135.f_7 = Global_4456448.f_116794;
				Global_1388135.f_9 = Global_4456448.f_78235;
				Global_1388135.f_11 = Global_4456448.f_230;
				Global_1388135.f_12 = Global_4456448.f_232;
				Global_1388135.f_13 = Global_4456448.f_234;
				Global_1388135.f_14 = Global_4456448.f_233;
				Global_1388135.f_16 = Global_4456448.f_203;
				Global_1388135.f_5 = Global_4456448.f_226;
				Global_1388135.f_10 = Global_4456448.f_240;
			}
			else if (func_128())
			{
				Global_4194340.f_7 = 9901;
				Global_4194340.f_8 = Global_4456448.f_75704 + 1;
				if (func_127(Global_4456448.f_64859))
				{
					Global_4456448.f_64859 = { Global_4456448.f_244 };
				}
			}
			unk_0x5D96D8530B3D0904(iParam2, 2);
			unk_0x0674E58A79778E99(iParam2, 1);
			unk_0x5D96D8530B3D0904(iParam2, 3);
			if (*uParam0)
			{
				func_126();
				func_125();
				if (func_124())
				{
					func_121(Global_4456448.f_201);
				}
				Global_4456448.f_197274 = 1;
			}
			else
			{
				func_381();
			}
			if (!func_120())
			{
				func_119();
			}
			return 1;
		}
		else
		{
			uParam0->f_15 = 1;
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(iParam2, 3);
		if (Global_4456448.f_197274)
		{
			*uParam0 = 1;
		}
		return 1;
	}
	return 0;
}

void func_119()
{
	Global_2450632.f_39.f_57 = 1;
}

int func_120()
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (!unk_0xEA6BC48857E0AC4C(&(Global_4456448.f_195308[iVar1])))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_121(int iParam0)
{
	if (!func_123())
	{
		unk_0xE9DB536F03010B01(2);
		unk_0x5E7F827E162FA9EB(1);
		if (iParam0 == 0)
		{
			iParam0 = 32;
		}
		unk_0xD753646C49AE9176((iParam0 / 2));
		func_122();
	}
}

void func_122()
{
	unk_0x5D96D8530B3D0904(&(Global_2450632.f_2), 3);
}

bool func_123()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 3);
}

bool func_124()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2451426.f_1.f_2809, 8);
}

void func_125()
{
	unk_0x5D96D8530B3D0904(&Global_2450632, 4);
}

void func_126()
{
	unk_0x5D96D8530B3D0904(&Global_2450632, 28);
}

int func_127(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_128()
{
	if (Global_4456448 == 2 || Global_4456448 == 8)
	{
		return 1;
	}
	return 0;
}

void func_129()
{
	Global_1653538.f_5 = 0;
	Global_1653538.f_11 = -1;
}

int func_130()
{
	iVar0 = 0;
	while (iVar0 < Global_4456448.f_206)
	{
		iVar1 = 0;
		while (iVar1 < Global_4456448.f_206)
		{
			if (Global_4456448.f_213[iVar0] != Global_4456448.f_213[iVar1])
			{
				return 0;
			}
			else if (Global_4456448.f_208[iVar0] != Global_4456448.f_208[iVar1])
			{
				return 0;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 1;
}

Vector3 func_131()
{
	return 2713,297f, -369,5003f, -55,7809f;
}

int func_132(int iParam0)
{
	if ((Global_262145.f_5798[0] == iParam0 || Global_262145.f_5798[6] == iParam0) || Global_262145.f_5798[13] == iParam0)
	{
		return 1;
	}
	return 0;
}

Vector3 func_133()
{
	return 349,7179f, 4870,692f, -61,4014f;
}

int func_134(int iParam0)
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

int func_135(bool bParam0)
{
	if (!bParam0)
	{
		return Global_4456448 == 0;
	}
	if ((((((Global_4456448 == 0 || Global_4456448 == 4) || Global_4456448 == 6) || Global_4456448 == 3) || Global_4456448 == 31) || Global_4456448.f_2 == 6) || Global_4456448.f_2 == 5)
	{
		return 1;
	}
	return 0;
}

int func_136(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, var uParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	if (uParam0->f_26 == 0)
	{
		if (func_105() && uParam0->f_4 == 0)
		{
			return 0;
		}
	}
	if (!func_110() || (iParam2 != 0 && iParam2 != 1))
	{
		if (func_107())
		{
			*uParam0 = 0;
			return 1;
		}
	}
	switch (uParam0->f_4)
	{
		case 0:
			*uParam0 = 0;
			uParam0->f_1 = 0;
			uParam0->f_28 = 0;
			uParam0->f_24 = func_330(1);
			uParam0->f_25 = func_328(1);
			if (func_106())
			{
				return 0;
			}
			func_104();
			func_103();
			if (func_110() || bParam9)
			{
				unk_0x71939E9C5DD93A34(1);
			}
			else
			{
				unk_0x71939E9C5DD93A34(0);
			}
			func_326();
			if (bParam4)
			{
				func_101(uParam0, 11);
			}
			else
			{
				func_101(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_110() || bParam9)
			{
				if (unk_0x50ECE62E635F281F(sParam1))
				{
					if (iParam2 == 0)
					{
						Global_4456448.f_197286 = 1;
						if (!bParam9)
						{
							StringCopy(&(Global_4456448.f_195277), sParam1, 24);
						}
						func_178(-1, 1, 0, 0);
						uParam0->f_8 = 0;
						func_101(uParam0, 9);
						*uParam0 = 1;
						func_117();
						return 1;
					}
					else if (iParam2 == 1)
					{
						if (uParam0->f_16)
						{
							StringCopy(&(Global_961130.f_42), sParam1, 24);
							Global_1590535[unk_0xD803B885F5E47A62()].f_19 = { Global_961130.f_12 };
							func_177(&iVar1, &uVar0, &Global_961130);
							if (Global_961130.f_65 == 0)
							{
								func_383(uParam0, 1, 1);
								*uParam0 = 0;
								uParam0->f_28 = 1;
								func_103();
								func_117();
								return 1;
							}
							uParam0->f_8 = 0;
						}
						else
						{
							StringCopy(&(Global_959568.f_42), sParam1, 24);
							Global_1590535[unk_0xD803B885F5E47A62()].f_19 = { Global_959568.f_12 };
							func_177(&iVar1, &uVar0, &Global_959568);
							uParam0->f_8 = 0;
							if (Global_959568.f_65 == 0)
							{
								func_383(uParam0, 1, 1);
								*uParam0 = 0;
								uParam0->f_28 = 1;
								func_103();
								func_117();
								return 1;
							}
						}
						func_103();
						unk_0x4739D3E2B190C50A();
						unk_0x71939E9C5DD93A34(1);
						func_176(uParam0);
						func_101(uParam0, 13);
					}
					else
					{
						*uParam0 = 0;
						func_117();
						return 1;
					}
				}
				else
				{
					*uParam0 = 0;
					func_117();
					func_103();
					return 1;
				}
			}
			else if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam2 == 0)
			{
				uParam0->f_5 = _0x7FD2990AF016795E(func_98(iParam2), sParam1, 0, uParam0->f_21, uParam0->f_22);
				unk_0x30BA055E0A2CBC5B(uParam0->f_5);
				func_101(uParam0, 4);
			}
			else if (bParam10)
			{
				if (unk_0x3236383D85F86FDE(sParam1, 1, func_98(iParam2)))
				{
					func_101(uParam0, 3);
				}
			}
			else if (unk_0x532097D906222538(sParam1, func_98(iParam2)))
			{
				func_101(uParam0, 3);
			}
			break;
		
		case 3:
			if (unk_0x00528CBC2478166A())
			{
				uParam0->f_41 = unk_0xA68C484CB8CFE012();
				if (unk_0x2D6B689DC548F438())
				{
				}
				else
				{
					func_383(uParam0, 1, 1);
					uParam0->f_41 = unk_0xA68C484CB8CFE012();
					*uParam0 = 0;
					func_117();
					return 1;
				}
				if (unk_0xAFE0F18038B8A4C0() > 0)
				{
					if (!bParam12 && !func_174(uParam0->f_24, uParam0->f_25, unk_0xA89E31B6D809E76E(0), unk_0x8D667CFC7C564F4F(0)))
					{
						func_383(uParam0, 1, 1);
						*uParam0 = 0;
						uParam0->f_27 = 1;
						func_117();
						return 1;
					}
					if (iParam2 == 0)
					{
						uParam0->f_5 = _0x171DF6A0C07FB3DC(0, 0);
						unk_0x30BA055E0A2CBC5B(uParam0->f_5);
						func_101(uParam0, 4);
					}
					else if (iParam2 == 1)
					{
						if (unk_0x45A4029B43848D4B(0))
						{
							if (uParam0->f_16)
							{
								StringCopy(&(Global_961130.f_12), unk_0x91259F92C05E1E44(0), 64);
								StringCopy(&(Global_961130.f_36), unk_0x774936D1A30C902C(0), 24);
								Global_961130.f_71 = unk_0x8D667CFC7C564F4F(0);
								StringCopy(&(Global_961130.f_42), sParam1, 24);
								Global_1590535[unk_0xD803B885F5E47A62()].f_19 = { Global_961130.f_12 };
								func_177(&iVar1, &uVar0, &Global_961130);
								if (Global_961130.f_65 == 0)
								{
									func_383(uParam0, 1, 1);
									*uParam0 = 0;
									uParam0->f_28 = 1;
									func_103();
									func_117();
									return 1;
								}
								uParam0->f_8 = 0;
							}
							else
							{
								StringCopy(&(Global_959568.f_12), unk_0x91259F92C05E1E44(0), 64);
								StringCopy(&(Global_959568.f_36), unk_0x774936D1A30C902C(0), 24);
								Global_959568.f_71 = unk_0x8D667CFC7C564F4F(0);
								StringCopy(&(Global_959568.f_42), sParam1, 24);
								Global_1590535[unk_0xD803B885F5E47A62()].f_19 = { Global_959568.f_12 };
								func_177(&iVar1, &uVar0, &Global_959568);
								uParam0->f_8 = 0;
							}
							func_103();
							func_101(uParam0, 10);
						}
						else
						{
							func_383(uParam0, 1, 1);
							*uParam0 = 0;
							func_117();
							return 1;
						}
					}
					else if (iParam2 == 4)
					{
						if (unk_0x45A4029B43848D4B(0))
						{
							if (uParam0->f_16)
							{
								func_172(&iVar1, &uVar0, &Global_961130, iParam6);
								if (iParam6 == 1)
								{
									func_383(uParam0, 1, 1);
									*uParam0 = 1;
									func_117();
									return 1;
								}
								StringCopy(&(Global_961130.f_12), unk_0x91259F92C05E1E44(0), 64);
								StringCopy(&(Global_961130.f_36), unk_0x774936D1A30C902C(0), 24);
								StringCopy(&(Global_961130.f_42), sParam1, 24);
								Global_1590535[unk_0xD803B885F5E47A62()].f_19 = { Global_961130.f_12 };
								uParam0->f_8 = 0;
							}
							else
							{
								func_172(&iVar1, &uVar0, &Global_959568, iParam6);
								if (iParam6 == 1)
								{
									func_383(uParam0, 1, 1);
									*uParam0 = 1;
									func_117();
									return 1;
								}
								StringCopy(&(Global_959568.f_12), unk_0x91259F92C05E1E44(0), 64);
								StringCopy(&(Global_959568.f_36), unk_0x774936D1A30C902C(0), 24);
								StringCopy(&(Global_959568.f_42), sParam1, 24);
								Global_1590535[unk_0xD803B885F5E47A62()].f_19 = { Global_959568.f_12 };
								uParam0->f_8 = 0;
							}
							func_103();
							func_101(uParam0, 10);
						}
						else
						{
							func_383(uParam0, 1, 1);
							*uParam0 = 0;
							func_117();
							return 1;
						}
					}
				}
				else
				{
					func_383(uParam0, 1, 1);
					*uParam0 = 0;
					func_117();
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0x479E68F5B14F40D5(uParam0->f_5))
			{
				if (uParam0->f_2)
				{
					uParam0->f_2 = 0;
					unk_0xBBCE9616B024A2BF();
				}
				if (unk_0x7539ED2C70977AC9(uParam0->f_5))
				{
					func_101(uParam0, 6);
				}
				else if (uParam0->f_22 != 1)
				{
					uParam0->f_22 = 1;
					uParam0->f_3 = 1;
					func_101(uParam0, 0);
					return 0;
				}
				else
				{
					func_383(uParam0, 1, 1);
					*uParam0 = 0;
					func_117();
					return 1;
				}
			}
			else if (func_171() || func_170() == 4)
			{
				if (uParam0->f_2 == 0)
				{
					uParam0->f_2 = 1;
					unk_0xFCC7D1ED80D1900C("FMMC_DOWNLOAD");
					unk_0x9A681BEC95A1B92E(5);
				}
			}
			break;
		
		case 6:
			if ((bParam13 && !func_169()) && !bParam14)
			{
				return 0;
			}
			if (unk_0x44250A51F3EE65CF(uParam0->f_5))
			{
				if (unk_0x0237D07544B74BC2(uParam0->f_5))
				{
					if (bParam3)
					{
						if (bParam13)
						{
							func_331(1, 1, bParam11, 1);
						}
						if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam2 == 0)
						{
							Global_4456448.f_197286 = 1;
							Global_4456448.f_197270 = 1;
							StringCopy(&(Global_4456448.f_194966), "", 64);
							StringCopy(&(Global_4456448.f_195013), "", 24);
							StringCopy(&(Global_4456448.f_194991), "RockStar", 24);
							if (bParam10)
							{
								StringCopy(&(Global_4456448.f_195277), sParam1, 24);
							}
							uParam0->f_35 = uParam0->f_22;
						}
						else
						{
							Global_4456448.f_194990 = unk_0x12AB0310C2281427(unk_0x017764C9FA977AFF(0));
							StringCopy(&(Global_4456448.f_195013), unk_0xA89E31B6D809E76E(0), 24);
							Global_4456448.f_197286 = unk_0x8D667CFC7C564F4F(0);
							if (Global_4456448.f_197286 == 1 || Global_4456448.f_197286 == 2)
							{
								StringCopy(&(Global_4456448.f_194991), "RockStar", 24);
							}
							else
							{
								StringCopy(&(Global_4456448.f_194991), unk_0xA89E31B6D809E76E(0), 24);
							}
							if ((Global_4456448.f_197286 == 0 || Global_4456448.f_197286 == 3) && unk_0x2341F602FFA84F44(0))
							{
								StringCopy(&(Global_4456448.f_194966), unk_0x6E524813889AECF8(unk_0xD803B885F5E47A62()), 64);
							}
							else if ((unk_0xDC30EF462887322E() && (Global_4456448.f_197286 == 0 || Global_4456448.f_197286 == 3)) && func_168(&iVar33, &(Global_4456448.f_195013)))
							{
								StringCopy(&(Global_4456448.f_194966), unk_0x6E524813889AECF8(iVar33), 64);
							}
							else
							{
								StringCopy(&(Global_4456448.f_194966), unk_0x1E3B76FA4E867850(0), 64);
							}
							Global_4456448.f_195284 = unk_0xE4D3676AD065E454(0, 0);
							Global_4456448.f_197272 = unk_0x2AB612EEF51CB6CB(0);
							uParam0->f_23 = func_88(0);
							Global_4456448.f_227322 = uParam0->f_23;
							if (bParam10)
							{
								StringCopy(&(Global_4456448.f_195277), unk_0x774936D1A30C902C(0), 24);
							}
							if (Global_4456448.f_197286 == 0 || Global_4456448.f_197286 == 3)
							{
								if ((unk_0xFA8ABA77FFC590DF(0, &uVar4) && unk_0x83F946529771616E(&uVar4, 13)) && unk_0x04A104F429E6CBB0(&uVar4))
								{
									Var17 = { Global_4456448.f_194966 };
									func_167(1, Var17);
								}
								else
								{
									func_167(0, Var17);
								}
							}
							else
							{
								func_167(0, Var17);
							}
							Global_4456448.f_8 = func_82(unk_0x43F3160CD7399127(0, 0), unk_0xE4D3676AD065E454(0, 0));
							if (unk_0xE528A25150C0D360(uParam0->f_7))
							{
								Global_4456448.f_197271 = unk_0xAE62FF8AF8C8C8FC(0);
								Global_4456448.f_197273 = 1;
							}
							else
							{
								Global_4456448.f_197271 = 0;
								Global_4456448.f_197273 = 0;
							}
							Global_4456448.f_197270 = unk_0x5D7BAE42EBB5F14B(0);
							uParam0->f_35 = unk_0x4446517B2720C2F9(0);
							if (!func_110())
							{
								if (unk_0xCEA7093049ECDD91(uParam0->f_35))
								{
									uParam0->f_31 = unk_0x051ABD838C3CAF26(0);
								}
								else
								{
									uParam0->f_31 = -1;
								}
							}
							Global_4456448.f_195283 = uParam0->f_31;
							Global_2451426.f_4303.f_3 = unk_0x387B886B0D9005A2(0, 0);
							Global_2451426.f_4303.f_2 = unk_0x14C6E9443A847E5E(0, 0);
							if (Global_4456448.f_197286 == 1 || Global_4456448.f_197286 == 2)
							{
								StringCopy(&(Global_4456448.f_194966), func_83(), 64);
							}
						}
						if (!bParam10)
						{
							StringCopy(&(Global_4456448.f_195277), sParam1, 24);
						}
						uParam0->f_32 = 0;
						if (!func_110())
						{
							func_178(uParam0->f_35, bParam11, (bParam13 || bParam14), uParam0->f_32);
							if (func_134(Global_4456448.f_194990))
							{
								Global_4456448.f_244 = { func_133() };
							}
							if (func_132(Global_4456448.f_194990))
							{
								Global_4456448.f_244 = { func_131() };
							}
							if (Global_4456448.f_197286 == 0 && (func_165() || func_163()))
							{
								func_383(uParam0, 1, 1);
								uParam0->f_42.f_3 = 0;
								*uParam0 = 0;
								uParam0->f_1 = 1;
								func_117();
								return 1;
							}
							else if (bParam13 || bParam14)
							{
								func_101(uParam0, 5);
								return 0;
							}
						}
						else
						{
							func_178(-1, bParam11, 0, 0);
						}
						if (func_159(uParam0, iParam2, bParam13, bParam9))
						{
							return 1;
						}
					}
					else
					{
						iVar1 = unk_0xB45EDD00181AF3F2();
						iVar2 = unk_0x6D954AF55D3925DB(iVar1, "mission");
						iVar3 = unk_0x6D954AF55D3925DB(iVar2, "gen");
						StringCopy(&(Global_2439138.f_3756), unk_0x91259F92C05E1E44(0), 32);
						Global_2439138.f_3756.f_8 = unk_0x8A83B52A17A321DB(iVar3, "type");
						uParam0->f_17 = unk_0xE528A25150C0D360(0);
						*uParam0 = 1;
						func_117();
						unk_0x428E47C1F6B4216E(uParam0->f_5);
						func_103();
						return 1;
					}
					unk_0x428E47C1F6B4216E(uParam0->f_5);
					func_103();
				}
				else if (iParam2 == 0)
				{
					func_383(uParam0, 1, 1);
					uParam0->f_42.f_3 = 0;
					*uParam0 = 0;
					uParam0->f_1 = 1;
					func_117();
					return 1;
				}
				else
				{
					uParam0->f_8++;
					if (uParam0->f_8 > 1000)
					{
						func_383(uParam0, 1, 1);
						uParam0->f_42.f_3 = 0;
						*uParam0 = 0;
						func_117();
						return 1;
					}
				}
			}
			break;
		
		case 5:
			func_178(uParam0->f_35, bParam11, (bParam13 || bParam14), uParam0->f_32);
			if (uParam0->f_32 >= 6)
			{
				if (func_159(uParam0, iParam2, (bParam13 || bParam14), bParam9))
				{
					return 1;
				}
			}
			uParam0->f_32++;
			break;
		
		case 9:
			if (func_157(uParam0, 0, bParam3, 0))
			{
				func_101(uParam0, 0);
				func_103();
				if ((((func_151(Global_4456448.f_194990) && func_135(1)) && !bParam9) && !unk_0xEA6BC48857E0AC4C(&(Global_4456448.f_195308[0]))) && (func_171() || (func_146() && !func_145())))
				{
					uParam0->f_8 = 0;
					func_101(uParam0, 19);
					return 0;
				}
				if ((uParam5 || bParam7) && !bParam13)
				{
					if (bParam7 || uParam5)
					{
						uParam0->f_23 = func_88(0);
						uParam0->f_21 = unk_0xE0D583A72B7859EA(0, uParam0->f_23);
					}
					func_144(&(uParam0->f_42), 0);
					func_101(uParam0, 18);
				}
				else
				{
					uParam0->f_42.f_3 = 1;
					func_383(uParam0, 1, 0);
					func_117();
					return 1;
				}
			}
			break;
		
		case 19:
			if (unk_0x3236383D85F86FDE(&(Global_4456448.f_195308[0]), 1, func_98(iParam2)))
			{
				func_101(uParam0, 21);
			}
			break;
		
		case 21:
			if (unk_0x00528CBC2478166A())
			{
				uParam0->f_41 = unk_0xA68C484CB8CFE012();
				if (unk_0x2D6B689DC548F438())
				{
				}
				else
				{
					func_383(uParam0, 1, 1);
					uParam0->f_41 = unk_0xA68C484CB8CFE012();
					*uParam0 = 0;
					func_117();
					return 1;
				}
				if (unk_0xAFE0F18038B8A4C0() > 0)
				{
					uParam0->f_5 = _0x171DF6A0C07FB3DC(0, 0);
					unk_0x30BA055E0A2CBC5B(uParam0->f_5);
					func_101(uParam0, 22);
				}
				else
				{
					func_383(uParam0, 1, 1);
					*uParam0 = 0;
					func_117();
					return 1;
				}
			}
			break;
		
		case 22:
			if (unk_0x479E68F5B14F40D5(uParam0->f_5))
			{
				if (unk_0x7539ED2C70977AC9(uParam0->f_5))
				{
					func_101(uParam0, 23);
				}
				else if (uParam0->f_22 != 1)
				{
					uParam0->f_22 = 1;
					uParam0->f_3 = 1;
					func_101(uParam0, 0);
					return 0;
				}
				else
				{
					func_383(uParam0, 1, 1);
					*uParam0 = 0;
					func_117();
					return 1;
				}
			}
			break;
		
		case 23:
			if (unk_0x44250A51F3EE65CF(uParam0->f_5))
			{
				if (unk_0x0237D07544B74BC2(uParam0->f_5))
				{
					func_141();
					func_383(uParam0, 1, 0);
					Global_1651354 = 1;
					func_117();
					*uParam0 = 1;
					return 1;
				}
				else
				{
					func_383(uParam0, 1, 1);
					uParam0->f_42.f_3 = 0;
					*uParam0 = 0;
					uParam0->f_1 = 1;
					func_117();
					return 1;
				}
			}
			break;
		
		case 18:
			if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_7, 0))
			{
				if (bParam7)
				{
					if (func_140(&(uParam0->f_42), sParam1, uParam0->f_21, uParam0->f_23))
					{
						func_383(uParam0, 1, 0);
						uParam0->f_42.f_3 = 1;
						uParam0->f_42.f_1 = 0;
						func_117();
						return 1;
					}
				}
				else
				{
					StringCopy(&(uParam0->f_42.f_4), sParam1, 64);
					uParam0->f_42.f_3 = 1;
					func_383(uParam0, 1, 0);
					func_117();
					return 1;
				}
			}
			else
			{
				uParam0->f_42.f_3 = 1;
				func_383(uParam0, 1, 1);
				func_117();
				return 1;
			}
			break;
		
		case 10:
			if (func_157(uParam0, 0, bParam3, iParam2))
			{
				func_103();
				func_101(uParam0, 11);
			}
			break;
		
		case 11:
			if (uParam0->f_16)
			{
				if (unk_0xC31CA5A496559C94(&(Global_961130.f_1177), Global_961130.f_65, func_98(0)))
				{
					func_101(uParam0, 12);
				}
			}
			else if (unk_0xC31CA5A496559C94(&(Global_959568.f_1177), Global_959568.f_65, func_98(0)))
			{
				func_101(uParam0, 12);
			}
			break;
		
		case 12:
			if (unk_0x00528CBC2478166A())
			{
				if (unk_0x2D6B689DC548F438())
				{
				}
				else
				{
					func_383(uParam0, 1, 1);
					uParam0->f_41 = unk_0xA68C484CB8CFE012();
					*uParam0 = 0;
					func_117();
					return 1;
				}
				if (unk_0xAFE0F18038B8A4C0() > 0)
				{
					if (uParam0->f_16)
					{
						Global_961130.f_65 = unk_0xAFE0F18038B8A4C0();
					}
					else
					{
						Global_959568.f_65 = unk_0xAFE0F18038B8A4C0();
					}
					uParam0->f_8 = 0;
					func_383(uParam0, 0, bParam8);
					func_176(uParam0);
					func_101(uParam0, 13);
				}
				else
				{
					func_383(uParam0, 1, 1);
					*uParam0 = 0;
					func_117();
					uParam0->f_28 = 1;
					return 1;
				}
			}
			break;
		
		case 13:
			if (func_110())
			{
				if (uParam0->f_16)
				{
					uParam0->f_9 = 0;
					while (uParam0->f_9 <= (Global_961130.f_65 - 1))
					{
						if (unk_0x50ECE62E635F281F(&(Global_961130.f_1177[uParam0->f_9])))
						{
							func_139(uParam0, &Global_961130);
							unk_0x4739D3E2B190C50A();
						}
						uParam0->f_9++;
					}
					func_117();
					return 1;
				}
				else
				{
					uParam0->f_9 = 0;
					while (uParam0->f_9 <= (Global_959568.f_65 - 1))
					{
						if (unk_0x50ECE62E635F281F(&(Global_959568.f_1177[uParam0->f_9])))
						{
							func_139(uParam0, &Global_959568);
							unk_0x4739D3E2B190C50A();
						}
						uParam0->f_9++;
					}
					func_117();
					return 1;
				}
			}
			else if (uParam0->f_16)
			{
				if (func_138(uParam0, &Global_961130))
				{
					func_137(uParam0, &Global_961130);
					if (uParam0->f_27)
					{
						func_383(uParam0, 1, bParam8);
						*uParam0 = 0;
						uParam0->f_27 = 1;
						uParam0->f_30 = 0;
						func_117();
						return 1;
					}
					else if (uParam0->f_30 == 1)
					{
						func_383(uParam0, 1, bParam8);
						*uParam0 = 0;
						uParam0->f_27 = 0;
						func_117();
						uParam0->f_30 = 1;
						return 1;
					}
					else
					{
						func_101(uParam0, 17);
						*uParam0 = 1;
					}
				}
			}
			else if (func_138(uParam0, &Global_959568))
			{
				func_137(uParam0, &Global_959568);
				if (uParam0->f_27)
				{
					func_383(uParam0, 1, 1);
					*uParam0 = 0;
					uParam0->f_27 = 1;
					uParam0->f_30 = 0;
					func_117();
					return 1;
				}
				else if (uParam0->f_30 == 1)
				{
					func_383(uParam0, 1, bParam8);
					*uParam0 = 0;
					uParam0->f_27 = 0;
					uParam0->f_30 = 1;
					func_117();
					return 1;
				}
				else
				{
					func_101(uParam0, 17);
					*uParam0 = 1;
				}
			}
			break;
		
		case 17:
			func_101(uParam0, 0);
			func_103();
			func_383(uParam0, 1, bParam8);
			*uParam0 = 1;
			func_117();
			return 1;
			break;
	}
	return 0;
}

void func_137(var uParam0, var uParam1)
{
	uParam0->f_30 = 0;
	if (uParam1->f_6 > uParam1->f_7)
	{
		uParam0->f_30 = 1;
	}
}

int func_138(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= (uParam1->f_65 - 1))
	{
		if (unk_0x45A4029B43848D4B(uParam0->f_7))
		{
			if (!func_174(uParam0->f_24, uParam0->f_25, unk_0xA89E31B6D809E76E(0), unk_0x8D667CFC7C564F4F(0)))
			{
				uParam0->f_27 = 1;
				return 1;
			}
			func_139(uParam0, uParam1);
			uParam0->f_9++;
		}
		else
		{
			uParam0->f_8++;
		}
		if (uParam0->f_8 > 200)
		{
			func_103();
			uParam0->f_7++;
			uParam0->f_8 = 0;
		}
		if (uParam0->f_9 >= 31)
		{
			return 1;
		}
		if (uParam0->f_7 >= uParam1->f_65)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_139(var uParam0, var uParam1)
{
	iVar0 = unk_0xB45EDD00181AF3F2();
	iVar1 = unk_0x6D954AF55D3925DB(iVar0, "mission");
	iVar2 = unk_0x6D954AF55D3925DB(iVar1, "gen");
	uParam1->f_72[uParam0->f_9].f_45 = { func_87(iVar2) };
	if (func_110())
	{
		StringCopy(&(uParam1->f_72[uParam0->f_9].f_12), unk_0x6F58F8DD6B54A28D(iVar2, "nm"), 64);
	}
	else
	{
		StringCopy(&(uParam1->f_72[uParam0->f_9].f_12), unk_0x91259F92C05E1E44(uParam0->f_7), 64);
	}
	if (!func_110())
	{
		uParam1->f_72[uParam0->f_9].f_44 = unk_0x051ABD838C3CAF26(uParam0->f_7);
	}
	uParam1->f_72[uParam0->f_9].f_68 = unk_0x8D667CFC7C564F4F(uParam0->f_7);
	uParam1->f_72[uParam0->f_9].f_56 = unk_0x8A83B52A17A321DB(iVar2, "min");
	uParam1->f_72[uParam0->f_9].f_59 = unk_0x8A83B52A17A321DB(iVar2, "tnum");
	uParam1->f_72[uParam0->f_9].f_60 = unk_0x8A83B52A17A321DB(iVar2, "num");
	uParam1->f_72[uParam0->f_9].f_54 = unk_0x8A83B52A17A321DB(iVar2, "type");
	uParam1->f_72[uParam0->f_9].f_55 = unk_0x8A83B52A17A321DB(iVar2, "subtype");
	uParam1->f_72[uParam0->f_9].f_48 = { func_86(iVar2, "cam") };
	uParam1->f_72[uParam0->f_9].f_51 = { func_85(iVar2) };
	uParam1->f_72[uParam0->f_9].f_66 = unk_0x8A83B52A17A321DB(iVar2, "adverm");
	uParam1->f_72[uParam0->f_9].f_57 = func_88(uParam0->f_7);
	StringCopy(&(uParam1->f_72[uParam0->f_9].f_6), unk_0x1E3B76FA4E867850(uParam0->f_7), 24);
	if (!func_110())
	{
		uParam1->f_72[uParam0->f_9].f_61 = func_82(unk_0x43F3160CD7399127(uParam0->f_7, 0), unk_0xE4D3676AD065E454(uParam0->f_7, 0));
	}
	if (func_114() != 2)
	{
		if (uParam1->f_72[uParam0->f_9].f_60 > Global_262145.f_4578)
		{
			uParam1->f_72[uParam0->f_9].f_60 = Global_262145.f_4578;
		}
		if (uParam1->f_72[uParam0->f_9].f_56 > Global_262145.f_4578)
		{
			uParam1->f_72[uParam0->f_9].f_56 = Global_262145.f_4578;
		}
	}
	uParam1->f_72[uParam0->f_9].f_58 = unk_0x8A83B52A17A321DB(iVar2, "rank");
	func_81(uParam1->f_72[uParam0->f_9].f_54, &(uParam1->f_72[uParam0->f_9].f_60), &(uParam1->f_72[uParam0->f_9].f_56));
	if (uParam1->f_6 < uParam1->f_72[uParam0->f_9].f_56)
	{
		uParam1->f_6 = uParam1->f_72[uParam0->f_9].f_56;
	}
	if (uParam1->f_7 > uParam1->f_72[uParam0->f_9].f_60 || uParam1->f_7 == 0)
	{
		uParam1->f_7 = uParam1->f_72[uParam0->f_9].f_60;
	}
	uParam1->f_72[uParam0->f_9].f_67 = 1;
	unk_0x5D96D8530B3D0904(&(uParam1->f_72[uParam0->f_9].f_64), 13);
	StringCopy(&(uParam1->f_72[uParam0->f_9]), unk_0x774936D1A30C902C(uParam0->f_9), 24);
	uParam0->f_8 = 0;
	uParam0->f_7++;
	if (unk_0xB45EDD00181AF3F2() != 0)
	{
		unk_0xEADC638FF742BE01();
	}
	if (!func_110())
	{
		StringCopy(&(uParam1->f_1177[uParam0->f_9]), unk_0x774936D1A30C902C(uParam0->f_9), 24);
		if (unk_0xE528A25150C0D360(uParam0->f_9))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_72[uParam0->f_9].f_64), 14);
			if (unk_0xB45EDD00181AF3F2() != 0)
			{
				unk_0xEADC638FF742BE01();
			}
		}
	}
}

int func_140(var uParam0, char* sParam1, var uParam2, var uParam3)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (*uParam0 != 0)
			{
				unk_0xC69F77C7452478DF(*uParam0);
			}
			unk_0x8D97729ED865299C();
			uParam0->f_1 = 1;
			break;
		
		case 1:
			if (unk_0x9981592FCB4C157B(sParam1, uParam3, uParam2, 0))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 2:
			switch (unk_0xC75168D84C7845CF(unk_0x7B9EB832BFA43A99(0, uParam3)))
			{
				case 1:
					return 0;
				
				case 0:
					uParam0->f_3 = 1;
					return 1;
				
				case 2:
					uParam0->f_2++;
					if (uParam0->f_2 > 200)
					{
						if (*uParam0 != 0)
						{
							unk_0xC69F77C7452478DF(*uParam0);
							*uParam0 = 0;
						}
						uParam0->f_3 = 0;
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

void func_141()
{
	iVar0 = unk_0xB45EDD00181AF3F2();
	iVar1 = unk_0x6D954AF55D3925DB(iVar0, "mission");
	iVar2 = unk_0x6D954AF55D3925DB(iVar1, "endcon");
	iVar3 = unk_0x6D954AF55D3925DB(iVar1, "ene");
	iVar4 = unk_0x8A83B52A17A321DB(iVar3, "no");
	iVar5 = unk_0x7619952D26DF7783(iVar3, "loc");
	iVar6 = unk_0x6D954AF55D3925DB(iVar1, "goto");
	iVar7 = unk_0x8A83B52A17A321DB(iVar6, "no");
	iVar8 = unk_0x6D954AF55D3925DB(iVar1, "veh");
	iVar9 = unk_0x8A83B52A17A321DB(iVar8, "no");
	iVar10 = unk_0x7619952D26DF7783(iVar8, "loc");
	iVar11 = unk_0x6D954AF55D3925DB(iVar1, "obj");
	iVar12 = unk_0x8A83B52A17A321DB(iVar11, "no");
	iVar13 = unk_0x7619952D26DF7783(iVar11, "loc");
	iVar14 = 0;
	while (iVar14 <= (Global_4456448.f_206 - 1))
	{
		if (iVar14 < 4)
		{
			Global_1651354.f_1[iVar14] = unk_0xE082EE0DCA9466C4(unk_0x7619952D26DF7783(iVar2, "nrl"), iVar14);
			StringCopy(&cVar16, "txt", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			iVar20[iVar14] = unk_0x7619952D26DF7783(iVar2, &cVar16);
			StringCopy(&cVar16, "irbs", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			iVar25[iVar14] = unk_0x7619952D26DF7783(iVar2, &cVar16);
			StringCopy(&cVar16, "irbs2", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			iVar30[iVar14] = unk_0x7619952D26DF7783(iVar2, &cVar16);
			iVar15 = 0;
			while (iVar15 <= (Global_1651354.f_1[iVar14] - 1))
			{
				Global_1651354.f_6[iVar14][iVar15] = unk_0xE082EE0DCA9466C4(iVar25[iVar14], iVar15);
				Global_1651354.f_79[iVar14][iVar15] = unk_0xE082EE0DCA9466C4(iVar30[iVar14], iVar15);
				if (iVar20[iVar14] != 0)
				{
					StringCopy(&(Global_1651354.f_152[iVar14][iVar15]), unk_0x3E4982E6ACD879AE(iVar20[iVar14], iVar15), 64);
				}
				else
				{
					StringCopy(&(Global_1651354.f_152[iVar14][iVar15]), "", 64);
				}
				iVar15++;
			}
		}
		iVar14++;
	}
	Var101 = 8;
	Var101.f_1 = 10;
	Var101.f_1.f_11 = 10;
	Var101.f_1.f_11.f_11 = 10;
	Var101.f_1.f_11.f_11.f_11 = 10;
	Var101.f_1.f_11.f_11.f_11.f_11 = 10;
	Var101.f_1.f_11.f_11.f_11.f_11.f_11 = 10;
	Var101.f_1.f_11.f_11.f_11.f_11.f_11.f_11 = 10;
	Var101.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 10;
	iVar80 = 0;
	while (iVar80 <= (Global_4456448.f_206 - 1))
	{
		iVar91 = 0;
		iVar81 = 0;
		iVar190 = 0;
		iVar192 = 0;
		iVar14 = 0;
		while (iVar14 < 8)
		{
			iVar92[iVar14] = -1;
			iVar82[iVar14] = 0;
			iVar191 = 0;
			while (iVar191 < 10)
			{
				Var101[iVar14][iVar191] = 0;
				iVar191++;
			}
			iVar14++;
		}
		iVar14 = 0;
		while (iVar14 < Global_1651354.f_1[iVar80])
		{
			if ((!unk_0xEAE0D21A50E6C7F4(Global_1651354.f_6[iVar80][iVar14], 11) && !unk_0xEAE0D21A50E6C7F4(Global_1651354.f_79[iVar80][iVar14], 21)) && iVar81 < 8)
			{
				iVar92[iVar81] = iVar14;
				iVar81++;
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		iVar60[iVar80] = unk_0x7619952D26DF7783(iVar8, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		iVar65[iVar80] = unk_0x7619952D26DF7783(iVar8, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar9)
		{
			iVar15 = unk_0xE082EE0DCA9466C4(iVar60[iVar80], iVar14);
			iVar193 = unk_0xE082EE0DCA9466C4(iVar65[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0xEAE0D21A50E6C7F4(Global_1651354.f_6[iVar80][iVar193], 11)) && !unk_0xEAE0D21A50E6C7F4(Global_1651354.f_79[iVar80][iVar193], 21))
			{
				iVar91 = func_143(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1664445.f_407[iVar91].f_125[iVar80][iVar82[iVar91]] = { unk_0x6403E33233A20F75(iVar10, iVar14) };
					Global_1664445.f_407[iVar91].f_250[iVar80][iVar82[iVar91]] = 1;
					Global_1664445.f_407[iVar91][iVar80][iVar82[iVar91]] = { func_142(iVar15, 1) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		iVar70[iVar80] = unk_0x7619952D26DF7783(iVar11, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		iVar75[iVar80] = unk_0x7619952D26DF7783(iVar11, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar12)
		{
			iVar15 = unk_0xE082EE0DCA9466C4(iVar70[iVar80], iVar14);
			iVar193 = unk_0xE082EE0DCA9466C4(iVar75[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0xEAE0D21A50E6C7F4(Global_1651354.f_6[iVar80][iVar193], 11)) && !unk_0xEAE0D21A50E6C7F4(Global_1651354.f_79[iVar80][iVar193], 21))
			{
				iVar91 = func_143(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1664445.f_407[iVar91].f_125[iVar80][iVar82[iVar91]] = { unk_0x6403E33233A20F75(iVar13, iVar14) };
					Global_1664445.f_407[iVar91].f_250[iVar80][iVar82[iVar91]] = 1;
					Global_1664445.f_407[iVar91][iVar80][iVar82[iVar91]] = { func_142(iVar15, 3) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rl", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		iVar45[iVar80] = unk_0x7619952D26DF7783(iVar6, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		iVar50[iVar80] = unk_0x7619952D26DF7783(iVar6, &cVar16);
		StringCopy(&cVar16, "loc", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		iVar55[iVar80] = unk_0x7619952D26DF7783(iVar6, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar7)
		{
			iVar193 = unk_0xE082EE0DCA9466C4(iVar50[iVar80], iVar14);
			iVar15 = unk_0xE082EE0DCA9466C4(iVar45[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0xEAE0D21A50E6C7F4(Global_1651354.f_6[iVar80][iVar193], 11)) && !unk_0xEAE0D21A50E6C7F4(Global_1651354.f_79[iVar80][iVar193], 21))
			{
				iVar91 = func_143(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1664445.f_407[iVar91].f_125[iVar80][iVar82[iVar91]] = { unk_0x6403E33233A20F75(iVar55[iVar80], iVar14) };
					Global_1664445.f_407[iVar91].f_250[iVar80][iVar82[iVar91]] = 1;
					Global_1664445.f_407[iVar91][iVar80][iVar82[iVar91]] = { func_142(iVar15, 4) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		iVar35[iVar80] = unk_0x7619952D26DF7783(iVar3, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		iVar40[iVar80] = unk_0x7619952D26DF7783(iVar3, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar4)
		{
			iVar193 = unk_0xE082EE0DCA9466C4(iVar40[iVar80], iVar14);
			iVar15 = unk_0xE082EE0DCA9466C4(iVar35[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0xEAE0D21A50E6C7F4(Global_1651354.f_6[iVar80][iVar193], 11)) && !unk_0xEAE0D21A50E6C7F4(Global_1651354.f_79[iVar80][iVar193], 21))
			{
				iVar91 = func_143(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					iVar190 = iVar82[iVar91];
					iVar192 = 0;
					iVar191 = 0;
					while (iVar191 < 10)
					{
						if (iVar192 == 0 && Global_1664445.f_407[iVar91].f_250[iVar80][iVar191] == 2)
						{
							iVar190 = iVar191;
							iVar192 = 1;
						}
						iVar191++;
					}
					if (iVar192 == 0)
					{
						iVar82[iVar91]++;
					}
					vVar194 = { unk_0x6403E33233A20F75(iVar5, iVar14) };
					Global_1664445.f_407[iVar91].f_125[iVar80][iVar190] = vVar194.x;
					Global_1664445.f_407[iVar91].f_125[iVar80][iVar190].f_1 = vVar194.y;
					Var101[iVar91][iVar190]++;
					Global_1664445.f_407[iVar91].f_250[iVar80][iVar190] = 2;
					Global_1664445.f_407[iVar91][iVar80][iVar190] = { func_142(iVar15, 2) };
				}
			}
			iVar14++;
		}
		iVar14 = 0;
		while (iVar14 < 8)
		{
			iVar191 = 0;
			while (iVar191 < 10)
			{
				if (Global_1664445.f_407[iVar14].f_250[iVar80][iVar191] == 2)
				{
					Global_1664445.f_407[iVar14].f_125[iVar80][iVar191] = (Global_1664445.f_407[iVar14].f_125[iVar80][iVar191] / IntToFloat(Var101[iVar14][iVar191]));
					Global_1664445.f_407[iVar14].f_125[iVar80][iVar191].f_1 = (Global_1664445.f_407[iVar14].f_125[iVar80][iVar191].f_1 / IntToFloat(Var101[iVar14][iVar191]));
				}
				iVar191++;
			}
			iVar14++;
		}
		iVar80++;
	}
	if (unk_0xB45EDD00181AF3F2() != 0)
	{
		unk_0xEADC638FF742BE01();
	}
}

Vector3 func_142(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 == 1 || iParam1 == 2)
			{
				vVar0.x = 70;
				vVar0.y = 70;
				vVar0.z = 255;
			}
			else if (iParam1 == 3)
			{
				vVar0.x = 70;
				vVar0.y = 255;
				vVar0.z = 70;
			}
			break;
		
		case 2:
			vVar0.x = 255;
			vVar0.y = 70;
			vVar0.z = 70;
			break;
		
		case 3:
			if (iParam1 == 1 || iParam1 == 2)
			{
				vVar0.x = 70;
				vVar0.y = 70;
				vVar0.z = 255;
			}
			else if (iParam1 == 3)
			{
				vVar0.x = 70;
				vVar0.y = 255;
				vVar0.z = 70;
			}
			break;
		
		case 4:
			if (iParam1 == 1 || iParam1 == 2)
			{
				vVar0.x = 70;
				vVar0.y = 70;
				vVar0.z = 255;
			}
			else if (iParam1 == 3)
			{
				vVar0.x = 70;
				vVar0.y = 255;
				vVar0.z = 70;
			}
			else if (iParam1 == 4)
			{
				vVar0.x = 200;
				vVar0.y = 200;
				vVar0.z = 50;
			}
			break;
		
		case 5:
			vVar0.x = 200;
			vVar0.y = 200;
			vVar0.z = 50;
			break;
		
		case 11:
			if (iParam1 == 1 || iParam1 == 2)
			{
				vVar0.x = 70;
				vVar0.y = 70;
				vVar0.z = 255;
			}
			else if (iParam1 == 3)
			{
				vVar0.x = 70;
				vVar0.y = 255;
				vVar0.z = 70;
			}
			break;
		
		case 12:
			if (iParam1 == 1 || iParam1 == 2)
			{
				vVar0.x = 70;
				vVar0.y = 70;
				vVar0.z = 255;
			}
			else if (iParam1 == 3)
			{
				vVar0.x = 70;
				vVar0.y = 255;
				vVar0.z = 70;
			}
			break;
		
		case 13:
			vVar0.x = 70;
			vVar0.y = 255;
			vVar0.z = 70;
			break;
		
		default:
			vVar0.x = 255;
			vVar0.y = 255;
			vVar0.z = 255;
			break;
	}
	return vVar0;
}

int func_143(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 <= (iParam2 - 1))
	{
		if ((*iParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_144(var uParam0, bool bParam1)
{
	if (*uParam0 != 0)
	{
		unk_0xC69F77C7452478DF(*uParam0);
		*uParam0 = 0;
	}
	*uParam0 = uVar0;
	uParam0->f_1 = uVar1;
	uParam0->f_2 = uVar2;
	uParam0->f_3 = uVar3;
	MemCopy(&(uParam0->f_4), {Var4}, 16);
	if (bParam1)
	{
		MemCopy(&(uParam0->f_20), {Var10}, 16);
		uParam0->f_36 = { Var18 };
	}
}

bool func_145()
{
	return Global_2450632.f_619;
}

int func_146()
{
	if (((func_150() || func_149()) || func_148()) || func_147())
	{
		return 1;
	}
	return 0;
}

bool func_147()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632, 1);
}

bool func_148()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632, 2);
}

bool func_149()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632, 20);
}

var func_150()
{
	return Global_2450632.f_598;
}

int func_151(int iParam0)
{
	if ((((func_156(iParam0) || func_155(iParam0)) || func_154(iParam0)) || func_153(iParam0)) || func_152(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_152(int iParam0)
{
	return iParam0 == Global_262145.f_8610;
}

bool func_153(int iParam0)
{
	return iParam0 == Global_262145.f_8604;
}

bool func_154(int iParam0)
{
	return iParam0 == Global_262145.f_8598;
}

bool func_155(int iParam0)
{
	return iParam0 == Global_262145.f_8591;
}

bool func_156(int iParam0)
{
	return iParam0 == Global_262145.f_8586;
}

int func_157(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_107())
	{
		uParam0->f_19 = 0;
		return 1;
	}
	if (func_110())
	{
		return 1;
	}
	if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam3 == 0)
	{
		return 1;
	}
	switch (uParam0->f_19)
	{
		case 0:
			func_103();
			func_158();
			Global_1653498.f_5 = 0;
			uParam0->f_8 = 0;
			if (iParam3 == 1)
			{
				Global_1653523.f_5 = 0;
				Global_1653523.f_4 = 0;
				Global_1653523.f_1 = 0;
				Global_1653523.f_2 = 0;
				return 1;
			}
			else if (iParam3 == 4)
			{
				Global_1653523.f_5 = 0;
				uParam0->f_19 = 1;
				return 0;
			}
			if (uParam0->f_18 == 0 || uParam0->f_18 == 1)
			{
				uParam0->f_19 = 1;
			}
			else if (uParam0->f_18 == 2)
			{
				uParam0->f_19 = 2;
			}
			break;
		
		case 1:
			if (unk_0x0FE82B08AF602526(iParam1, 1))
			{
				if (iParam3 == 4)
				{
					iVar0 = unk_0xB45EDD00181AF3F2();
					Global_1653529 = unk_0x8A83B52A17A321DB(iVar0, "pt");
					Global_1653529.f_1 = unk_0x8A83B52A17A321DB(iVar0, "pu");
					Global_1653529.f_2 = unk_0x8A83B52A17A321DB(iVar0, "ft");
					Global_1653529.f_3 = unk_0x8A83B52A17A321DB(iVar0, "fu");
					Global_1653529.f_4 = unk_0x8A83B52A17A321DB(iVar0, "qt");
					Global_1653529.f_5 = unk_0x8A83B52A17A321DB(iVar0, "qu");
				}
				else
				{
					iVar0 = unk_0xB45EDD00181AF3F2();
					Global_1653498.f_10 = to_float(unk_0x8A83B52A17A321DB(iVar0, "dt"));
					Global_1653498.f_11 = to_float(unk_0x8A83B52A17A321DB(iVar0, "du"));
					Global_1653498.f_9 = (Global_1653498.f_10 / Global_1653498.f_11);
					Global_1653498.f_13 = to_float(unk_0x8A83B52A17A321DB(iVar0, "pt"));
					Global_1653498.f_14 = to_float(unk_0x8A83B52A17A321DB(iVar0, "pu"));
					Global_968151 = round(Global_1653498.f_14);
					Global_1653498.f_12 = (Global_1653498.f_13 / Global_1653498.f_14);
					Global_1653498.f_15 = to_float(unk_0x8A83B52A17A321DB(iVar0, "qt"));
					Global_1653498.f_17 = to_float(unk_0x8A83B52A17A321DB(iVar0, "qu"));
					Global_1653498.f_16 = (Global_1653498.f_15 / Global_1653498.f_17);
				}
				if (unk_0xB45EDD00181AF3F2() != 0)
				{
					unk_0xEADC638FF742BE01();
				}
				if (uParam0->f_18 == 0)
				{
					uParam0->f_19 = 2;
				}
				else
				{
					uParam0->f_19 = 0;
					return 1;
				}
			}
			else
			{
				uParam0->f_8++;
				if (uParam0->f_8 > 5)
				{
					uParam0->f_19 = 0;
					uParam0->f_8 = 0;
					return 1;
				}
			}
			break;
		
		case 2:
			if (unk_0xE528A25150C0D360(iParam1))
			{
				if (bParam2)
				{
					if (unk_0x44A3C8BEE2AB5FE4(iParam1))
					{
						iVar0 = unk_0xB45EDD00181AF3F2();
						if (iParam3 == 0)
						{
							Global_1653498 = unk_0x8A83B52A17A321DB(iVar0, "quit");
							Global_1653498.f_2 = unk_0x8A83B52A17A321DB(iVar0, "ply");
							Global_1653498.f_8 = unk_0x8A83B52A17A321DB(iVar0, "fl");
							if (Global_1653498.f_2 > 0)
							{
								Global_1653498.f_5 = 1;
							}
							unk_0xEADC638FF742BE01();
						}
						else if (iParam3 == 4)
						{
							Global_1653523.f_5 = unk_0xAF09C5F2B0AB2428(iVar0, "won");
							Global_1653523.f_4 = unk_0x8A83B52A17A321DB(iVar0, "ply");
							Global_1653523.f_1 = unk_0x8A83B52A17A321DB(iVar0, "quit");
							Global_1653523.f_2 = unk_0x8A83B52A17A321DB(iVar0, "fl");
						}
						uParam0->f_19 = 0;
						return 1;
					}
					else
					{
						uParam0->f_8++;
						if (uParam0->f_8 > 100)
						{
							uParam0->f_19 = 0;
							uParam0->f_8 = 0;
							return 1;
						}
					}
				}
				else
				{
					uParam0->f_17 = 1;
				}
			}
			else
			{
				uParam0->f_19 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_158()
{
	Global_1653498 = 0;
	Global_1653498.f_2 = 0;
	Global_1653498.f_8 = 0;
	Global_1653498.f_3 = 0;
	Global_1653498.f_6 = 0;
}

int func_159(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_162() && !bParam2)
	{
		if (uParam0->f_21 == -1 || uParam0->f_22 == -1)
		{
			if ((!func_110() && iParam1 == 0) && !bParam3)
			{
				if (Global_4456448.f_197286 == 0)
				{
					if (func_161())
					{
						func_383(uParam0, 1, 1);
						uParam0->f_42.f_3 = 0;
						*uParam0 = 0;
						func_117();
						unk_0x428E47C1F6B4216E(uParam0->f_5);
						func_103();
						return 1;
					}
				}
			}
		}
	}
	if (Global_4456448 == 0 && Global_4456448.f_2 == 6)
	{
		if ((uParam0->f_21 == -1 && uParam0->f_22 == -1) && !func_110())
		{
			if (!unk_0xCEA7093049ECDD91(unk_0x4446517B2720C2F9(0)))
			{
				Global_4456448.f_197268 = 1;
			}
		}
	}
	uParam0->f_8 = 0;
	if (bParam2)
	{
		func_160();
	}
	func_101(uParam0, 9);
	*uParam0 = 1;
	return 0;
}

void func_160()
{
	unk_0x5D96D8530B3D0904(&(Global_2450632.f_39.f_4), 7);
}

int func_161()
{
	if (((Global_4456448 != 2 && Global_4456448 != 0) && Global_4456448 != 1) && Global_4456448 != 3)
	{
		return 1;
	}
	if (Global_4456448 == 0)
	{
		if (Global_4456448.f_232883 != 0)
		{
			return 1;
		}
		if (Global_4456448.f_2 == 4)
		{
			return 1;
		}
		if (Global_4456448.f_2 != 5 && ((((Global_4456448.f_2 != 6 && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 20)) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 21)) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 22)) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 23)))
		{
			return 1;
		}
	}
	if (Global_4456448 == 2)
	{
		if (Global_4456448.f_75705 == 8 || Global_4456448.f_75705 == 9)
		{
			return 1;
		}
	}
	return 0;
}

bool func_162()
{
	return unk_0xC146D5FBD23C6954(-1762644250);
}

int func_163()
{
	if (Global_4456448.f_64387 || func_164())
	{
		return 1;
	}
	return 0;
}

int func_164()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if ((((((((((((Global_4456448.f_78156[iVar0] == 1961489851 || Global_4456448.f_78156[iVar0] == -1565687858) || Global_4456448.f_78156[iVar0] == -1894510521) || Global_4456448.f_78156[iVar0] == -943306241) || Global_4456448.f_78156[iVar0] == -1562909828) || Global_4456448.f_78156[iVar0] == 2097329273) || Global_4456448.f_78156[iVar0] == 338623111) || Global_4456448.f_78156[iVar0] == 1504341417) || Global_4456448.f_78156[iVar0] == -939452740) || Global_4456448.f_78156[iVar0] == -1529940538) || Global_4456448.f_78156[iVar0] == 1152304222) || Global_4456448.f_78156[iVar0] == 1030400667) || Global_4456448.f_78156[iVar0] == 868868440)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_165()
{
	if ((Global_4456448.f_244.f_2 < 0f || func_166(Global_4456448.f_244, 999, 2f)) || (Global_4456448.f_65986[0].f_2 < -2f && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_66499[0], 5)))
	{
		return 1;
	}
	return 0;
}

int func_166(vector3 vParam0, int iParam3, float fParam4)
{
	if (iParam3 != 999)
	{
		iVar21 = 0;
		while (iVar21 < 3)
		{
			if (Global_1049922[iParam3].f_146.f_57[iVar21].f_2 > Global_1049922[iParam3].f_146.f_57[iVar21].f_3.f_2)
			{
				vVar1[iVar21] = { Global_1049922[iParam3].f_146.f_57[iVar21] };
				vVar11[iVar21] = { Global_1049922[iParam3].f_146.f_57[iVar21].f_3 };
			}
			else
			{
				vVar1[iVar21] = { Global_1049922[iParam3].f_146.f_57[iVar21].f_3 };
				vVar11[iVar21] = { Global_1049922[iParam3].f_146.f_57[iVar21] };
			}
			vVar1[iVar21].f_2 = (vVar1[iVar21].f_2 + fParam4);
			vVar11[iVar21].f_2 = (vVar11[iVar21].f_2 - fParam4);
			iVar21++;
		}
		if (((Global_1049922[iParam3].f_146.f_57[0].f_6 != 0f && unk_0x0399732A9EBC368E(vParam0, vVar11[0], vVar1[0], Global_1049922[iParam3].f_146.f_57[0].f_6, 0, true)) || (Global_1049922[iParam3].f_146.f_57[1].f_6 != 0f && unk_0x0399732A9EBC368E(vParam0, vVar11[1], vVar1[1], Global_1049922[iParam3].f_146.f_57[1].f_6, 0, true))) || (Global_1049922[iParam3].f_146.f_57[2].f_6 != 0f && unk_0x0399732A9EBC368E(vParam0, vVar11[2], vVar1[2], Global_1049922[iParam3].f_146.f_57[2].f_6, 0, true)))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 1;
		while (iVar0 <= 7)
		{
			if (func_166(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_166(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_166(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_166(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_166(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_166(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_166(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_166(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_166(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_166(vParam0, 8, fParam4))
		{
			return 1;
		}
		if (func_166(vParam0, 17, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

void func_167(int iParam0, struct<16> Param1)
{
	if (iParam0 == 0)
	{
		StringCopy(&Global_2462979, "", 64);
	}
	else
	{
		Global_2462979 = { Param1 };
	}
	Global_2462978 = iParam0;
}

int func_168(var uParam0, char* sParam1)
{
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0;
	}
	unk_0x19E9DB708CD4C715(sParam1, &uVar0, 13);
	if (unk_0x83F946529771616E(&uVar0, 13) && unk_0x60F025D317CE2512(&uVar0))
	{
		*uParam0 = unk_0xE7A1FE6C75BB88BA(&uVar0);
		if (unk_0x40B8C182D63932FC(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_169()
{
	return Global_2450632.f_39.f_55;
}

int func_170()
{
	return Global_2461131;
}

bool func_171()
{
	return Global_1590535[unk_0xD803B885F5E47A62()].f_196 != 0;
}

void func_172(var uParam0, var uParam1, var uParam2, int iParam3)
{
	*uParam0 = unk_0xB45EDD00181AF3F2();
	iVar1 = unk_0x6D954AF55D3925DB(*uParam0, "data");
	iVar2 = unk_0x6D954AF55D3925DB(iVar1, "trg");
	*uParam1 = unk_0x7619952D26DF7783(iVar2, "list");
	if (iParam3 == 1)
	{
		if (unk_0xAE496C664AE89A9C(*uParam0, "open") == 1)
		{
			uParam2->f_11 = unk_0xAF09C5F2B0AB2428(iVar1, "open");
		}
		return;
	}
	uParam2->f_11 = unk_0xAF09C5F2B0AB2428(iVar1, "open");
	Var3 = { func_173(unk_0xA89E31B6D809E76E(0)) };
	unk_0xD9DA83C40D038174(&Var16, 35, &Var3);
	uParam2->f_48 = { Var16.f_1 };
	uParam2->f_64 = Var16;
	uParam2->f_4 = unk_0x8A83B52A17A321DB(iVar2, "scr");
	uParam2->f_5 = unk_0x8A83B52A17A321DB(iVar2, "time");
	uParam2->f_1 = unk_0x8A83B52A17A321DB(iVar1, "cash");
	uParam2->f_65 = unk_0x3C3D078CBB366B45(*uParam1);
	iVar0 = 0;
	while (iVar0 <= (uParam2->f_65 - 1))
	{
		uVar51[iVar0] = unk_0xAC7E36D102B92704(*uParam1, iVar0);
		StringCopy(&(uParam2->f_1177[iVar0]), unk_0x6F58F8DD6B54A28D(uVar51[iVar0], "cid"), 24);
		uParam2->f_72[iVar0].f_62 = unk_0x8A83B52A17A321DB(uVar51[iVar0], "scr");
		uParam2->f_72[iVar0].f_63 = unk_0x8A83B52A17A321DB(uVar51[iVar0], "time");
		iVar0++;
	}
}

struct<13> func_173(char* sParam0)
{
	unk_0x4DA27762188F26CD(sParam0, &Var0, 13);
	return Var0;
}

int func_174(int iParam0, bool bParam1, char* sParam2, int iParam3)
{
	if (((iParam3 == 1 || iParam3 == 2) || iParam3 == 3) || iParam3 == 4)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		Var0 = { func_173(sParam2) };
		Var13 = { func_175(unk_0xD803B885F5E47A62()) };
		if (bParam1)
		{
			if (unk_0x4F18738E5BDE9AC9(&Var13, &Var0))
			{
				return 1;
			}
			else if (!unk_0x04A104F429E6CBB0(&Var0))
			{
				return 0;
			}
		}
		else if (unk_0xDC30EF462887322E())
		{
			if (unk_0x4F18738E5BDE9AC9(&Var13, &Var0))
			{
				return 1;
			}
			else if (unk_0x53191C5224BE5D54(&Var0) && unk_0x5B9BB2932920F9CD(&Var0))
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
			Var13 = { func_175(unk_0xD803B885F5E47A62()) };
			if (!unk_0x4F18738E5BDE9AC9(&Var13, &Var0))
			{
				return 0;
			}
		}
	}
	return 1;
}

struct<13> func_175(int iParam0)
{
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

void func_176(var uParam0)
{
	if (uParam0->f_16)
	{
		Global_961130.f_6 = 0;
		Global_961130.f_7 = 32;
	}
	else
	{
		Global_959568.f_6 = 0;
		Global_959568.f_7 = 32;
	}
}

void func_177(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = unk_0xB45EDD00181AF3F2();
	if (*uParam0 == 0)
	{
	}
	*uParam1 = unk_0x7619952D26DF7783(*uParam0, "list");
	uParam2->f_10 = 1;
	uParam2->f_65 = unk_0x3C3D078CBB366B45(*uParam1);
	iVar0 = 0;
	while (iVar0 <= (uParam2->f_65 - 1))
	{
		uVar1[iVar0] = unk_0xAC7E36D102B92704(*uParam1, iVar0);
		StringCopy(&(uParam2->f_1177[iVar0]), unk_0x6F58F8DD6B54A28D(uVar1[iVar0], "cid"), 24);
		iVar0++;
	}
	uParam2->f_10 = unk_0xAF09C5F2B0AB2428(*uParam0, "h2h");
	uParam2->f_9 = unk_0xAF09C5F2B0AB2428(*uParam0, "ch");
	if (func_110())
	{
		StringCopy(&(uParam2->f_12), unk_0x6F58F8DD6B54A28D(*uParam0, "name"), 64);
	}
}

void func_178(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = unk_0xB45EDD00181AF3F2();
	iVar1 = unk_0x6D954AF55D3925DB(iVar0, "mission");
	iVar2 = unk_0x6D954AF55D3925DB(iVar1, "gen");
	iVar3 = unk_0x6D954AF55D3925DB(iVar1, "endcon");
	Global_4456448.f_197241 = unk_0x8A83B52A17A321DB(iVar0, "debugOnlyVersion");
	if (!bParam2 || iParam3 == 0)
	{
		func_291(iVar1, iParam0, bParam1);
		func_290(iVar1);
		func_289(&iVar3);
		func_288(&iVar3);
		func_287(&iVar3);
		func_286(&iVar3);
		func_285(&iVar3);
		func_283(&iVar3);
		func_281(&iVar3);
		func_280(&iVar3);
		func_279(&iVar3);
		func_278(&iVar3);
		func_277(&iVar3);
		func_275(&iVar3);
		if (bParam2)
		{
			return;
		}
	}
	if (func_135(1))
	{
		if (!bParam2 || iParam3 == 1)
		{
			if (func_273())
			{
				func_272(iVar1);
			}
			else
			{
				func_269(iVar1);
			}
			func_268(iVar1);
			func_267(iVar1);
			func_266(&iVar1);
			func_263(&iVar1);
			iVar4 = unk_0x6D954AF55D3925DB(iVar1, "tmD");
			func_262(&iVar4);
			if (bParam2)
			{
				return;
			}
		}
		if (!bParam2 || iParam3 == 2)
		{
			func_261(iVar1);
			func_260(iVar2);
			func_259(iVar1);
			if (bParam2)
			{
				return;
			}
		}
		if (!bParam2 || iParam3 == 3)
		{
			func_253(iVar1);
			func_252(iVar1);
			func_251(iVar1);
			func_250(iVar1);
			if (bParam2)
			{
				return;
			}
		}
	}
	else if (func_128())
	{
		func_243(iVar1);
		func_251(iVar1);
	}
	else if (func_242())
	{
		func_251(iVar1);
	}
	if (!bParam2 || iParam3 == 4)
	{
		func_239(iVar1);
		func_238(iVar1);
		func_236(iVar1);
		func_232(iVar1);
		func_231(iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (!bParam2 || iParam3 == 5)
	{
		func_227(iVar1);
		func_218(iVar1);
		func_212(iVar1);
		func_204(iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (Global_4456448 == 1)
	{
		func_268(iVar1);
		func_203(iVar1);
	}
	else if ((((Global_4456448 == 0 || Global_4456448.f_75705 == 8) || Global_4456448.f_75705 == 9) || Global_4456448 == 6) || func_202())
	{
		func_189(iVar1);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_17, 19))
	{
		func_188(iVar1);
	}
	unk_0x0674E58A79778E99(&(Global_4456448.f_4), 15);
	unk_0x0674E58A79778E99(&(Global_4456448.f_4), 18);
	unk_0x0674E58A79778E99(&(Global_4456448.f_4), 19);
	unk_0x0674E58A79778E99(&(Global_4456448.f_4), 29);
	unk_0x0674E58A79778E99(&(Global_4456448.f_4), 28);
	if (func_202() && func_187(Global_4456448.f_232883))
	{
		func_183(&iVar1);
	}
	if (func_78(Global_4456448.f_194990))
	{
		Global_4456448.f_202 = Global_4456448.f_201;
	}
	if ((!func_181(unk_0xD803B885F5E47A62()) && !func_180()) && !Global_1652616)
	{
		iVar5 = func_80(Global_4456448.f_194990, 1);
		if (iVar5 != -1)
		{
			if (Global_262145.f_4919[iVar5] != -1 && Global_262145.f_6446[iVar5] != 251)
			{
				Global_4456448.f_202 = Global_262145.f_4919[iVar5];
			}
			if (Global_262145.f_4868[iVar5] != -1 && Global_262145.f_6446[iVar5] != 251)
			{
				Global_4456448.f_201 = Global_262145.f_4868[iVar5];
			}
		}
	}
	if (func_53(Global_4456448.f_194990))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_4), 15);
	}
	else if (func_52(Global_4456448.f_194990))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_4), 18);
	}
	else if (func_51(Global_4456448.f_194990))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_4), 19);
	}
	else if (func_49(Global_4456448.f_194990))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_4), 29);
	}
	else if (func_50(Global_4456448.f_194990, 1))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_4), 28);
	}
	else if (func_48(Global_4456448.f_194990))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_5), 0);
	}
	else if (func_47(Global_4456448.f_194990))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_5), 1);
	}
	else if (func_46(Global_4456448.f_194990))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_5), 2);
	}
	else if (func_42(Global_4456448.f_194990))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_5), 6);
	}
	else if (func_41(Global_4456448.f_194990))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_5), 7);
	}
	else if (func_40(Global_4456448.f_194990))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_5), 8);
	}
	else if (func_39(Global_4456448.f_194990))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_5), 9);
	}
	else if (func_35(Global_4456448.f_194990))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_5), 10);
	}
	else if (func_38(Global_4456448.f_194990))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_5), 11);
	}
	else if (func_37(Global_4456448.f_194990))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_5), 12);
	}
	else if (func_72(Global_4456448.f_232883))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_5), 13);
	}
	else if (func_71(Global_4456448.f_232883))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_5), 22);
	}
	else if (func_36(Global_4456448.f_194990))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_5), 14);
	}
	else if (func_45(Global_4456448.f_194990))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_5), 3);
	}
	else if (func_44(Global_4456448.f_194990))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_5), 4);
	}
	else if (func_70(Global_4456448.f_232883))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_5), 16);
	}
	else if (func_69(Global_4456448.f_232883))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_5), 17);
	}
	else if (func_68(Global_4456448.f_232883))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_5), 20);
	}
	else if (func_67(Global_4456448.f_232883))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_5), 21);
	}
	else if (func_71(Global_4456448.f_232883))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_5), 22);
	}
	else if (func_43(Global_4456448.f_194990))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_5), 5);
	}
	else if (func_66(Global_4456448.f_232883))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_5), 23);
	}
	else if (func_62(Global_4456448.f_232883))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_5), 27);
	}
	else if (func_65(Global_4456448.f_232883))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_5), 24);
	}
	else if (func_63(Global_4456448.f_232883))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_5), 26);
	}
	else if (func_64(Global_4456448.f_232883))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_5), 25);
	}
	else if (func_61(Global_4456448.f_232883))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_5), 28);
	}
	else if (func_60(Global_4456448.f_232883))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_5), 29);
	}
	else if (func_59(Global_4456448.f_232883))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_5), 30);
	}
	else if (!func_273())
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_4), 27);
	}
	func_179(Global_4456448.f_194990);
}

void func_179(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == Global_262145.f_9027[iVar0] || iParam0 == Global_262145.f_9036[iVar0])
		{
			Global_4456448.f_244 = { func_57(0, iVar0) };
			Global_4456448.f_247 = { func_56(0, iVar0) };
			vVar1 = { func_55(0, iVar0) };
			Global_4456448.f_266 = vVar1.z;
			Global_4456448.f_1 = 0;
			Global_4456448.f_2 = 8;
			Global_4456448.f_197249 = 0;
			Global_4456448.f_197252 = 16777215;
		}
		iVar0++;
	}
}

bool func_180()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2451426.f_1.f_2809, 5);
}

bool func_181(int iParam0)
{
	return func_182(iParam0);
}

bool func_182(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_13.f_1, 0);
}

void func_183(int iParam0)
{
	iVar0 = unk_0x6D954AF55D3925DB(*iParam0, "surv");
	if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, "wave") == 2)
	{
		Global_4456448.f_234216 = unk_0x8A83B52A17A321DB(iVar0, "wave");
	}
	else
	{
		Global_4456448.f_234216 = 10;
	}
	if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, "wvtst") == 2)
	{
		Global_4456448.f_234216.f_2728 = unk_0x8A83B52A17A321DB(iVar0, "wvtst");
	}
	else
	{
		Global_4456448.f_234216.f_2728 = 0;
	}
	if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, "sbits") == 2)
	{
		Global_4456448.f_234216.f_2808 = unk_0x8A83B52A17A321DB(iVar0, "sbits");
	}
	else
	{
		Global_4456448.f_234216.f_2808 = 0;
	}
	iVar2 = 1;
	while (iVar2 <= Global_4456448.f_234216)
	{
		StringCopy(&cVar7, "wKil", 16);
		StringIntConCat(&cVar7, iVar2, 16);
		if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
		{
			Global_4456448.f_234216.f_1[iVar2] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
		}
		else
		{
			Global_4456448.f_234216.f_1[iVar2] = func_186(13, iVar2, 0);
		}
		StringCopy(&cVar7, "wveq", 16);
		StringIntConCat(&cVar7, iVar2, 16);
		if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
		{
			Global_4456448.f_234216.f_2729[iVar2] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
		}
		else
		{
			Global_4456448.f_234216.f_2729[iVar2] = func_186(17, iVar2, 0);
		}
		StringCopy(&cVar7, "wvss", 16);
		StringIntConCat(&cVar7, iVar2, 16);
		if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
		{
			Global_4456448.f_234216.f_2773[iVar2] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
		}
		else
		{
			Global_4456448.f_234216.f_2773[iVar2] = func_186(18, iVar2, 0);
		}
		StringCopy(&cVar7, "wdif", 16);
		StringIntConCat(&cVar7, iVar2, 16);
		if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
		{
			Global_4456448.f_234216.f_2751[iVar2] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
		}
		else
		{
			Global_4456448.f_234216.f_2751[iVar2] = func_186(19, iVar2, 0);
		}
		iVar3 = 0;
		while (iVar3 <= 2)
		{
			StringCopy(&cVar7, "sqd", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_234216.f_23[iVar2][iVar3] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_234216.f_23[iVar2][iVar3] = func_186(0, iVar2, iVar3);
			}
			StringCopy(&cVar7, "pps", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_234216.f_108[iVar2][iVar3] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_234216.f_108[iVar2][iVar3] = func_186(1, iVar2, iVar3);
			}
			StringCopy(&cVar7, "sqdH", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_234216.f_278[iVar2][iVar3] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_234216.f_278[iVar2][iVar3] = func_186(8, iVar2, iVar3);
			}
			StringCopy(&cVar7, "sqdA", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_234216.f_363[iVar2][iVar3] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_234216.f_363[iVar2][iVar3] = func_186(9, iVar2, iVar3);
			}
			StringCopy(&cVar7, "sqdAC", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_234216.f_448[iVar2][iVar3] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_234216.f_448[iVar2][iVar3] = func_186(10, iVar2, iVar3);
			}
			StringCopy(&cVar7, "sqdC", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_234216.f_533[iVar2][iVar3] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_234216.f_533[iVar2][iVar3] = func_186(12, iVar2, iVar3);
			}
			StringCopy(&cVar7, "sqdMN", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_234216.f_193[iVar2][iVar3] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_234216.f_193[iVar2][iVar3] = func_185(7, iVar2, iVar3);
			}
			StringCopy(&cVar7, "hvyN", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_234216.f_618[iVar2][iVar3] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_234216.f_618[iVar2][iVar3] = func_186(24, iVar2, iVar3);
			}
			StringCopy(&cVar7, "hvyH", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_234216.f_703[iVar2][iVar3] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_234216.f_703[iVar2][iVar3] = func_186(25, iVar2, iVar3);
			}
			StringCopy(&cVar7, "hvyA", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_234216.f_788[iVar2][iVar3] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_234216.f_788[iVar2][iVar3] = func_186(26, iVar2, iVar3);
			}
			StringCopy(&cVar7, "hvyMN", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_234216.f_873[iVar2][iVar3] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_234216.f_873[iVar2][iVar3] = func_185(27, iVar2, iVar3);
			}
			iVar3++;
		}
		StringCopy(&cVar7, "lVeh", 16);
		StringIntConCat(&cVar7, iVar2, 16);
		if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
		{
			Global_4456448.f_234216.f_958[iVar2] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
		}
		else
		{
			Global_4456448.f_234216.f_958[iVar2] = func_186(3, iVar2, 0);
		}
		iVar4 = 0;
		while (iVar4 <= 3)
		{
			StringCopy(&cVar7, "vped", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "v", 16);
			StringIntConCat(&cVar7, iVar4, 16);
			if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_234216.f_980[iVar2][iVar4] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_234216.f_980[iVar2][iVar4] = func_186(4, iVar2, iVar4);
			}
			StringCopy(&cVar7, "vmn", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "v", 16);
			StringIntConCat(&cVar7, iVar4, 16);
			if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_234216.f_1086[iVar2][iVar4] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_234216.f_1086[iVar2][iVar4] = func_185(5, iVar2, iVar4);
			}
			StringCopy(&cVar7, "vHP", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "v", 16);
			StringIntConCat(&cVar7, iVar4, 16);
			if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_234216.f_1192[iVar2][iVar4] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_234216.f_1192[iVar2][iVar4] = func_186(14, iVar2, iVar4);
			}
			StringCopy(&cVar7, "vC", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "v", 16);
			StringIntConCat(&cVar7, iVar4, 16);
			if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_234216.f_1298[iVar2][iVar4] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_234216.f_1298[iVar2][iVar4] = func_186(28, iVar2, iVar4);
			}
			iVar4++;
		}
		StringCopy(&cVar7, "sHeli", 16);
		StringIntConCat(&cVar7, iVar2, 16);
		if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
		{
			Global_4456448.f_234216.f_2440[iVar2] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
		}
		else
		{
			Global_4456448.f_234216.f_2440[iVar2] = func_186(6, iVar2, 0);
		}
		iVar5 = 0;
		while (iVar5 <= 2)
		{
			StringCopy(&cVar7, "airMN", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "a", 16);
			StringIntConCat(&cVar7, iVar5, 16);
			if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_234216.f_2462[iVar2][iVar5] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_234216.f_2462[iVar2][iVar5] = func_185(15, iVar2, iVar5);
			}
			StringCopy(&cVar7, "airH", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "a", 16);
			StringIntConCat(&cVar7, iVar5, 16);
			if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_234216.f_2547[iVar2][iVar5] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_234216.f_2547[iVar2][iVar5] = func_186(16, iVar2, iVar5);
			}
			StringCopy(&cVar7, "airC", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "a", 16);
			StringIntConCat(&cVar7, iVar5, 16);
			if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_234216.f_2632[iVar2][iVar5] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_234216.f_2632[iVar2][iVar5] = func_186(28, iVar2, iVar5);
			}
			iVar5++;
		}
		iVar6 = 0;
		while (iVar6 <= 3)
		{
			StringCopy(&cVar7, "wepTyp", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "w", 16);
			StringIntConCat(&cVar7, iVar6, 16);
			if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_234216.f_1404[iVar2][iVar6] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_234216.f_1404[iVar2][iVar6] = func_184(iVar2, iVar6);
			}
			StringCopy(&cVar7, "wepC", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "w", 16);
			StringIntConCat(&cVar7, iVar6, 16);
			if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_234216.f_1510[iVar2][iVar6] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_234216.f_1510[iVar2][iVar6] = func_186(20, iVar2, iVar6);
			}
			StringCopy(&cVar7, "wepT", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "w", 16);
			StringIntConCat(&cVar7, iVar6, 16);
			if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_234216.f_1616[iVar2][iVar6] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_234216.f_1616[iVar2][iVar6] = func_186(21, iVar2, iVar6);
			}
			iVar6++;
		}
		iVar6 = 0;
		while (iVar6 <= 9)
		{
			StringCopy(&cVar7, "ldWTyp", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "w", 16);
			StringIntConCat(&cVar7, iVar6, 16);
			if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_234216.f_1722[iVar2][iVar6] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
			}
			StringCopy(&cVar7, "ldWwepC", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "w", 16);
			StringIntConCat(&cVar7, iVar6, 16);
			if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_234216.f_1954[iVar2][iVar6] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
			}
			StringCopy(&cVar7, "ldWwepT", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "w", 16);
			StringIntConCat(&cVar7, iVar6, 16);
			if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_234216.f_2186[iVar2][iVar6] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
			}
			iVar6++;
		}
		if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, "swwon") == 2)
		{
			Global_4456448.f_234216.f_2418[iVar2] = unk_0x8A83B52A17A321DB(iVar0, "swwon");
		}
		else
		{
			Global_4456448.f_234216.f_2418[iVar2] = 0;
		}
		iVar2++;
	}
	StringCopy(&cVar7, "sqdMN", 16);
	StringIntConCat(&cVar7, 0, 16);
	StringConCat(&cVar7, "d", 16);
	StringIntConCat(&cVar7, 0, 16);
	if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
	{
		Global_4456448.f_234216.f_193[0][0] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
	}
	else
	{
		Global_4456448.f_234216.f_193[0][0] = func_185(7, 0, 0);
	}
	StringCopy(&cVar7, "vmn", 16);
	StringIntConCat(&cVar7, 0, 16);
	StringConCat(&cVar7, "v", 16);
	StringIntConCat(&cVar7, 0, 16);
	if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
	{
		Global_4456448.f_234216.f_1086[0][0] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
	}
	else
	{
		Global_4456448.f_234216.f_1086[0][0] = func_185(5, 0, 0);
	}
	StringCopy(&cVar7, "airMN", 16);
	StringIntConCat(&cVar7, 0, 16);
	StringConCat(&cVar7, "a", 16);
	StringIntConCat(&cVar7, 0, 16);
	if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
	{
		Global_4456448.f_234216.f_2462[0][0] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
	}
	else
	{
		Global_4456448.f_234216.f_2462[0][0] = func_185(15, 0, 0);
	}
	StringCopy(&cVar7, "hvyMN", 16);
	StringIntConCat(&cVar7, 0, 16);
	StringConCat(&cVar7, "d", 16);
	StringIntConCat(&cVar7, 0, 16);
	if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 2)
	{
		Global_4456448.f_234216.f_873[0][0] = unk_0x8A83B52A17A321DB(iVar0, &cVar7);
	}
	else
	{
		Global_4456448.f_234216.f_873[0][0] = func_185(27, 0, 0);
	}
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		StringCopy(&cVar7, "sbndsv", 16);
		StringIntConCat(&cVar7, iVar1, 16);
		if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, &cVar7) == 5)
		{
			Global_4456448.f_234216.f_2717[iVar1] = { unk_0xC0F58A082935B6E1(iVar0, &cVar7) };
		}
		else
		{
			Global_4456448.f_234216.f_2717[iVar1] = { 0f, 0f, 0f };
		}
		iVar1++;
	}
	if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, "sbndsr") == 3)
	{
		Global_4456448.f_234216.f_2724 = unk_0xB37C1AC7E8A75F3C(iVar0, "sbndsr");
	}
	else
	{
		Global_4456448.f_234216.f_2724 = 100f;
	}
	if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, "sbndsh") == 3)
	{
		Global_4456448.f_234216.f_2725 = unk_0xB37C1AC7E8A75F3C(iVar0, "sbndsh");
	}
	else
	{
		Global_4456448.f_234216.f_2725 = 0f;
	}
	if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, "sbndsbo") == 3)
	{
		Global_4456448.f_234216.f_2726 = unk_0xB37C1AC7E8A75F3C(iVar0, "sbndsbo");
	}
	else
	{
		Global_4456448.f_234216.f_2726 = 0f;
	}
	if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, "sbndst") == 2)
	{
		Global_4456448.f_234216.f_2727 = unk_0x8A83B52A17A321DB(iVar0, "sbndst");
	}
	else
	{
		Global_4456448.f_234216.f_2727 = 0;
	}
	if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, "wvalv") == 2)
	{
		Global_4456448.f_234216.f_2795 = unk_0x8A83B52A17A321DB(iVar0, "wvalv");
	}
	else
	{
		Global_4456448.f_234216.f_2795 = 360;
	}
	if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, "wvaav") == 2)
	{
		Global_4456448.f_234216.f_2796 = unk_0x8A83B52A17A321DB(iVar0, "wvaav");
	}
	else
	{
		Global_4456448.f_234216.f_2796 = 1200;
	}
	if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, "wvscb") == 2)
	{
		Global_4456448.f_234216.f_2798 = unk_0x8A83B52A17A321DB(iVar0, "wvscb");
	}
	else
	{
		Global_4456448.f_234216.f_2798 = 0;
	}
	if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, "wvpcb") == 2)
	{
		Global_4456448.f_234216.f_2799 = unk_0x8A83B52A17A321DB(iVar0, "wvpcb");
	}
	else
	{
		Global_4456448.f_234216.f_2799 = 0;
	}
	if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, "wvlvcb") == 2)
	{
		Global_4456448.f_234216.f_2802 = unk_0x8A83B52A17A321DB(iVar0, "wvlvcb");
	}
	else
	{
		Global_4456448.f_234216.f_2802 = 0;
	}
	if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, "wvlmcb") == 2)
	{
		Global_4456448.f_234216.f_2803 = unk_0x8A83B52A17A321DB(iVar0, "wvlmcb");
	}
	else
	{
		Global_4456448.f_234216.f_2803 = 0;
	}
	if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, "wvavcb") == 2)
	{
		Global_4456448.f_234216.f_2804 = unk_0x8A83B52A17A321DB(iVar0, "wvavcb");
	}
	else
	{
		Global_4456448.f_234216.f_2804 = 0;
	}
	if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, "wvamcb") == 2)
	{
		Global_4456448.f_234216.f_2805 = unk_0x8A83B52A17A321DB(iVar0, "wvamcb");
	}
	else
	{
		Global_4456448.f_234216.f_2805 = 0;
	}
	if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, "wvdcb") == 2)
	{
		Global_4456448.f_234216.f_2800 = unk_0x8A83B52A17A321DB(iVar0, "wvdcb");
	}
	else
	{
		Global_4456448.f_234216.f_2800 = 0;
	}
	if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, "wvpmcb") == 2)
	{
		Global_4456448.f_234216.f_2801 = unk_0x8A83B52A17A321DB(iVar0, "wvpmcb");
	}
	else
	{
		Global_4456448.f_234216.f_2801 = 0;
	}
	if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, "wvhcb") == 2)
	{
		Global_4456448.f_234216.f_2806 = unk_0x8A83B52A17A321DB(iVar0, "wvhcb");
	}
	else
	{
		Global_4456448.f_234216.f_2806 = 0;
	}
	if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, "wvhmcb") == 2)
	{
		Global_4456448.f_234216.f_2807 = unk_0x8A83B52A17A321DB(iVar0, "wvhmcb");
	}
	else
	{
		Global_4456448.f_234216.f_2807 = 0;
	}
	if (iVar0 != 0 && unk_0xAE496C664AE89A9C(iVar0, "wvhow") == 2)
	{
		Global_4456448.f_234216.f_2797 = unk_0x8A83B52A17A321DB(iVar0, "wvhow");
	}
	else
	{
		Global_4456448.f_234216.f_2797 = 0;
	}
}

int func_184(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 3:
					return 2144741730;
				
				default:
			}
			return 453432689;
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 453432689;
				
				case 2:
					return 736523883;
				
				case 3:
					return 2144741730;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return -494615257;
				
				case 1:
				case 2:
					return 736523883;
				
				case 3:
					return 2144741730;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return -494615257;
				
				case 1:
					return -1074790547;
				
				case 2:
					return 736523883;
				
				case 3:
					return 2144741730;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return -2084633992;
				
				case 1:
					return -1074790547;
				
				case 2:
					return -494615257;
				
				case 3:
					return 2144741730;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return -1660422300;
				
				case 1:
					return -1074790547;
				
				case 2:
					return -494615257;
				
				case 3:
					return 1119849093;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -1074790547;
				
				case 2:
					return -494615257;
				
				case 3:
					return 1119849093;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 2144741730;
				
				case 1:
				case 2:
					return -1074790547;
				
				case 3:
					return 1119849093;
				
				default:
			}
			break;
		
		case 9:
		case 10:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 2144741730;
				
				case 2:
					return 1119849093;
				
				case 3:
					return 1119849093;
				
				default:
			}
			break;
		
		default:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 2144741730;
				
				case 2:
					return 1119849093;
				
				case 3:
					return 1119849093;
				
				default:
			}
			break;
	}
	return 453432689;
}

int func_185(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam2)
			{
				case 0:
					switch (iParam1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 9:
							return -1189015600;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 3:
						case 6:
							return -1189015600;
						
						case 5:
						case 8:
						case 9:
							return 2006918058;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 6:
						case 8:
						case 9:
							return -810318068;
						
						default:
					}
					break;
			}
			return -1189015600;
			break;
		
		case 7:
			return 1330042375;
			break;
		
		case 15:
			return 745926877;
			break;
		
		case 27:
			return -1863364300;
			break;
	}
	return 0;
}

int func_186(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					switch (iParam1)
					{
						case 1:
						case 2:
							return 1;
						
						case 3:
						case 4:
						case 5:
							return 2;
						
						case 6:
						case 7:
						case 8:
							return 3;
						
						case 9:
						case 10:
							return 4;
						
						default:
					}
					return 4;
					break;
				
				case 1:
					switch (iParam1)
					{
						case 1:
						case 2:
							return 1;
						
						case 3:
						case 4:
						case 5:
							return 2;
						
						case 6:
						case 7:
						case 8:
							return 3;
						
						case 9:
						case 10:
							return 4;
						
						default:
					}
					return 4;
					break;
				
				case 2:
					switch (iParam1)
					{
						case 1:
							return 0;
						
						case 2:
							return 1;
						
						case 3:
							return 0;
						
						case 4:
						case 5:
							return 2;
						
						case 6:
							return 0;
						
						case 7:
						case 8:
							return 3;
						
						case 9:
						case 10:
							return 4;
						
						default:
					}
					return 4;
					break;
			}
			break;
		
		case 1:
			return 5;
			break;
		
		case 3:
			switch (iParam1)
			{
				case 3:
				case 5:
				case 6:
				case 8:
					return 2;
				
				default:
			}
			return 0;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 6:
				case 8:
				case 9:
					return 0;
				
				default:
			}
			return 1;
			break;
		
		case 4:
			return 2;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
					return 125;
				
				case 4:
				case 5:
				case 6:
					return 150;
				
				case 7:
				case 8:
				case 9:
				case 10:
					return 200;
				
				default:
			}
			return 200;
			break;
		
		case 9:
			switch (iParam1)
			{
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
					return 30;
				
				default:
			}
			return 20;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
					return 15;
				
				case 4:
				case 5:
				case 6:
					return 20;
				
				case 7:
				case 8:
				case 9:
					return 25;
				
				case 10:
					return 30;
				
				default:
			}
			return 30;
			break;
		
		case 12:
			switch (iParam1)
			{
				case 1:
					return 0;
				
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
					return 1;
				
				case 7:
				case 8:
				case 9:
				case 10:
					return 2;
				
				default:
			}
			return 2;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
					return 3;
				
				default:
			}
			return 4;
			break;
		
		case 14:
			return 1000;
			break;
		
		case 16:
			return 350;
			break;
		
		case 17:
			switch (iParam1)
			{
				case 1:
				case 2:
					return 0;
				
				case 3:
				case 4:
				case 5:
					return 1;
				
				case 6:
				case 7:
				case 8:
					return 2;
				
				case 9:
				case 10:
					return 3;
				
				default:
			}
			return 3;
			break;
		
		case 18:
			switch (iParam1)
			{
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 1;
				
				case 4:
				case 5:
					return 2;
				
				case 6:
					return 1;
				
				case 7:
				case 8:
				case 9:
				case 10:
					return 2;
				
				default:
			}
			return 2;
			break;
		
		case 19:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
					return 0;
				
				case 4:
				case 5:
				case 6:
					return 1;
				
				case 7:
				case 8:
				case 9:
					return 2;
				
				case 10:
					return 3;
				
				default:
			}
			return 3;
			break;
		
		case 20:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 3:
							return 2;
						
						default:
					}
					return 0;
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 0;
						
						case 2:
							return 2;
						
						case 3:
							return 2;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
						case 2:
							return 2;
						
						case 3:
							return 2;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
							return 3;
						
						case 2:
							return 2;
						
						case 3:
							return 2;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 3;
						
						case 2:
							return 1;
						
						case 3:
							return 2;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 2;
						
						case 1:
							return 3;
						
						case 2:
							return 1;
						
						case 3:
							return 5;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 3;
						
						case 2:
							return 1;
						
						case 3:
							return 5;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 2;
						
						case 1:
						case 2:
							return 3;
						
						case 3:
							return 5;
						
						default:
					}
					break;
				
				case 9:
				case 10:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 2;
						
						case 2:
							return 5;
						
						case 3:
							return 5;
						
						default:
					}
					break;
				
				default:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 2;
						
						case 2:
							return 5;
						
						case 3:
							return 5;
						
						default:
					}
					break;
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 3:
							return 25;
						
						default:
					}
					return 0;
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 0;
						
						case 2:
							return 23;
						
						case 3:
							return 25;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 16;
						
						case 1:
						case 2:
							return 23;
						
						case 3:
							return 25;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 16;
						
						case 1:
							return 33;
						
						case 2:
							return 23;
						
						case 3:
							return 25;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return 34;
						
						case 1:
							return 33;
						
						case 2:
							return 16;
						
						case 3:
							return 25;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 24;
						
						case 1:
							return 33;
						
						case 2:
							return 16;
						
						case 3:
							return 51;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 33;
						
						case 2:
							return 16;
						
						case 3:
							return 51;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 25;
						
						case 1:
						case 2:
							return 33;
						
						case 3:
							return 51;
						
						default:
					}
					break;
				
				case 9:
				case 10:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 25;
						
						case 2:
							return 51;
						
						case 3:
							return 51;
						
						default:
					}
					break;
				
				default:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 25;
						
						case 2:
							return 51;
						
						case 3:
							return 51;
						
						default:
					}
					break;
			}
			break;
		
		case 24:
			return 0;
			break;
		
		case 25:
			return 4;
			break;
		
		case 26:
			return 4;
			break;
		
		case 28:
			return -1;
			break;
	}
	return 0;
}

bool func_187(int iParam0)
{
	return iParam0 == 998;
}

void func_188(int iParam0)
{
	iVar1 = unk_0x6D954AF55D3925DB(iParam0, "fsp");
	iVar2 = unk_0x7619952D26DF7783(iVar1, "loc");
	iVar3 = unk_0x7619952D26DF7783(iVar1, "head");
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (iVar2 != 0 && unk_0x3E932F23D327A136(iVar2, iVar0) == 5)
		{
			Global_4456448.f_189766[iVar0] = { unk_0x6403E33233A20F75(iVar2, iVar0) };
			Global_4456448.f_189766[iVar0].f_3 = unk_0x73F91AA610E60211(iVar3, iVar0);
		}
		else
		{
			Global_4456448.f_189766[iVar0] = { 0f, 0f, 0f };
			Global_4456448.f_189766[iVar0].f_3 = 0f;
		}
		iVar0++;
	}
}

void func_189(int iParam0)
{
	iVar6 = unk_0x6D954AF55D3925DB(iParam0, "ene");
	Global_4456448.f_135142 = unk_0x8A83B52A17A321DB(iVar6, "no");
	if (unk_0xAE496C664AE89A9C(iVar6, "spcap") == 2 && unk_0x8A83B52A17A321DB(iVar6, "spcap") != 0)
	{
		Global_4456448.f_135144 = unk_0x8A83B52A17A321DB(iVar6, "spcap");
	}
	else
	{
		Global_4456448.f_135144 = 50;
	}
	Global_4456448.f_135146 = unk_0x8A83B52A17A321DB(iVar6, "time");
	Global_4456448.f_135147 = unk_0x8A83B52A17A321DB(iVar6, "pal");
	iVar7 = unk_0x7619952D26DF7783(iVar6, "loc");
	iVar8 = unk_0x7619952D26DF7783(iVar6, "head");
	iVar9 = unk_0x7619952D26DF7783(iVar6, "rng");
	iVar10 = unk_0x7619952D26DF7783(iVar6, "model");
	iVar11 = unk_0x7619952D26DF7783(iVar6, "gun");
	iVar12 = unk_0x7619952D26DF7783(iVar6, "skill");
	iVar13 = unk_0x7619952D26DF7783(iVar6, "rsp");
	if (Global_4456448 == 1)
	{
		iVar14[0] = unk_0x7619952D26DF7783(iVar6, "team");
	}
	iVar19 = unk_0x7619952D26DF7783(iVar6, "wep");
	iVar20 = unk_0x7619952D26DF7783(iVar6, "hlt");
	iVar21 = unk_0x7619952D26DF7783(iVar6, "prch");
	iVar22 = unk_0x7619952D26DF7783(iVar6, "lghlt");
	iVar23 = unk_0x7619952D26DF7783(iVar6, "veh");
	iVar24 = unk_0x7619952D26DF7783(iVar6, "foll");
	iVar25 = unk_0x7619952D26DF7783(iVar6, "iaim");
	iVar26 = unk_0x7619952D26DF7783(iVar6, "iaimt");
	iVar27 = unk_0x7619952D26DF7783(iVar6, "iaimr");
	iVar28 = unk_0x7619952D26DF7783(iVar6, "pcaDic");
	iVar29 = unk_0x7619952D26DF7783(iVar6, "pcaNme");
	iVar30 = unk_0x7619952D26DF7783(iVar6, "sanim");
	iVar31 = unk_0x7619952D26DF7783(iVar6, "sat");
	iVar32 = unk_0x7619952D26DF7783(iVar6, "saru");
	iVar33 = unk_0x7619952D26DF7783(iVar6, "sara");
	iVar34 = unk_0x7619952D26DF7783(iVar6, "satt");
	iVar35 = unk_0x7619952D26DF7783(iVar6, "pada");
	iVar36 = unk_0x7619952D26DF7783(iVar6, "pbrki");
	iVar37 = unk_0x7619952D26DF7783(iVar6, "pbrks");
	iVar38 = unk_0x7619952D26DF7783(iVar6, "whost");
	iVar39 = unk_0x7619952D26DF7783(iVar6, "flee");
	iVar40 = unk_0x7619952D26DF7783(iVar6, "frr");
	iVar41 = unk_0x7619952D26DF7783(iVar6, "pfrmr");
	iVar42 = unk_0x7619952D26DF7783(iVar6, "psnt");
	iVar43 = unk_0x7619952D26DF7783(iVar6, "psnei");
	iVar44 = unk_0x7619952D26DF7783(iVar6, "prorbs");
	iVar45 = unk_0x7619952D26DF7783(iVar6, "p2sp");
	iVar46 = unk_0x7619952D26DF7783(iVar6, "p2sh");
	iVar47 = unk_0x7619952D26DF7783(iVar6, "pOvSp");
	iVar48 = unk_0x7619952D26DF7783(iVar6, "pOvSpH");
	iVar49 = unk_0x7619952D26DF7783(iVar6, "accu");
	iVar50 = unk_0x7619952D26DF7783(iVar6, "lgacc");
	iVar51 = unk_0x7619952D26DF7783(iVar6, "cmsty");
	iVar52 = unk_0x7619952D26DF7783(iVar6, "pedbs");
	iVar53 = unk_0x7619952D26DF7783(iVar6, "pbstwo");
	iVar54 = unk_0x7619952D26DF7783(iVar6, "pbs3");
	iVar55 = unk_0x7619952D26DF7783(iVar6, "pbs4");
	iVar56 = unk_0x7619952D26DF7783(iVar6, "pbs5");
	iVar57 = unk_0x7619952D26DF7783(iVar6, "pbs6");
	iVar58 = unk_0x7619952D26DF7783(iVar6, "pbs7");
	iVar59 = unk_0x7619952D26DF7783(iVar6, "pbs8");
	iVar60 = unk_0x7619952D26DF7783(iVar6, "pbs9");
	iVar61 = unk_0x7619952D26DF7783(iVar6, "pbs10");
	iVar62 = unk_0x7619952D26DF7783(iVar6, "pbs11");
	iVar63 = unk_0x7619952D26DF7783(iVar6, "pbs12");
	iVar64 = unk_0x7619952D26DF7783(iVar6, "pbs13");
	iVar65 = unk_0x7619952D26DF7783(iVar6, "pbs14");
	iVar67 = unk_0x7619952D26DF7783(iVar6, "pcctva");
	iVar68 = unk_0x7619952D26DF7783(iVar6, "pexpra");
	iVar69 = unk_0x7619952D26DF7783(iVar6, "paot");
	iVar70 = unk_0x7619952D26DF7783(iVar6, "pfh");
	iVar71 = unk_0x7619952D26DF7783(iVar6, "pmfhat");
	iVar72 = unk_0x7619952D26DF7783(iVar6, "pgtho");
	iVar73 = unk_0x7619952D26DF7783(iVar6, "pgthoh");
	iVar74 = unk_0x7619952D26DF7783(iVar6, "fixpd1");
	iVar75 = unk_0x7619952D26DF7783(iVar6, "fixpd2");
	iVar76 = unk_0x7619952D26DF7783(iVar6, "fixpd3");
	iVar77 = unk_0x7619952D26DF7783(iVar6, "fixpd4");
	iVar78 = unk_0x7619952D26DF7783(iVar6, "pedbhd");
	iVar79 = unk_0x7619952D26DF7783(iVar6, "mcvasi");
	iVar80 = unk_0x7619952D26DF7783(iVar6, "cstp0");
	iVar81 = unk_0x7619952D26DF7783(iVar6, "cstp1");
	iVar82 = unk_0x7619952D26DF7783(iVar6, "cstp2");
	iVar83 = unk_0x7619952D26DF7783(iVar6, "mvov1r");
	iVar84 = unk_0x7619952D26DF7783(iVar6, "mvov1t");
	iVar85 = unk_0x7619952D26DF7783(iVar6, "mvov2r");
	iVar86 = unk_0x7619952D26DF7783(iVar6, "mvov2t");
	uVar370 = 1;
	Var457.f_10 = 4;
	Var457.f_15 = 4;
	Var457.f_20 = 4;
	if (func_135(1))
	{
		iVar3 = 0;
		while (iVar3 <= (Global_4456448.f_206 - 1))
		{
			if (iVar3 < 4)
			{
				StringCopy(&sVar4, "group", 8);
				StringIntConCat(&sVar4, iVar3, 8);
				iVar14[iVar3] = unk_0x7619952D26DF7783(iVar6, &sVar4);
				StringCopy(&sVar4, "rule", 8);
				StringIntConCat(&sVar4, iVar3, 8);
				iVar87[iVar3] = unk_0x7619952D26DF7783(iVar6, &sVar4);
				StringCopy(&sVar4, "pri", 8);
				StringIntConCat(&sVar4, iVar3, 8);
				iVar92[iVar3] = unk_0x7619952D26DF7783(iVar6, &sVar4);
				StringCopy(&sVar4, "agr", 8);
				StringIntConCat(&sVar4, iVar3, 8);
				iVar97[iVar3] = unk_0x7619952D26DF7783(iVar6, &sVar4);
				StringCopy(&sVar4, "pSTRWA", 8);
				StringIntConCat(&sVar4, iVar3, 8);
				iVar102[iVar3] = unk_0x7619952D26DF7783(iVar6, &sVar4);
				StringCopy(&sVar4, "tmflw", 8);
				StringIntConCat(&sVar4, iVar3, 8);
				iVar107[iVar3] = unk_0x7619952D26DF7783(iVar6, &sVar4);
				StringCopy(&sVar4, "jtop", 8);
				StringIntConCat(&sVar4, iVar3, 8);
				iVar112[iVar3] = unk_0x7619952D26DF7783(iVar6, &sVar4);
				StringCopy(&sVar4, "jtof", 8);
				StringIntConCat(&sVar4, iVar3, 8);
				iVar117[iVar3] = unk_0x7619952D26DF7783(iVar6, &sVar4);
				StringCopy(&sVar4, "cblfr", 8);
				StringIntConCat(&sVar4, iVar3, 8);
				iVar122[iVar3] = unk_0x7619952D26DF7783(iVar6, &sVar4);
				StringCopy(&sVar4, "cblto", 8);
				StringIntConCat(&sVar4, iVar3, 8);
				iVar127[iVar3] = unk_0x7619952D26DF7783(iVar6, &sVar4);
				StringCopy(&sVar4, "gtcpr", 8);
				StringIntConCat(&sVar4, iVar3, 8);
				iVar132[iVar3] = unk_0x7619952D26DF7783(iVar6, &sVar4);
				StringCopy(&sVar4, "pcrr", 8);
				StringIntConCat(&sVar4, iVar3, 8);
				iVar137[iVar3] = unk_0x7619952D26DF7783(iVar6, &sVar4);
				StringCopy(&sVar4, "pdria", 8);
				StringIntConCat(&sVar4, iVar3, 8);
				iVar142[iVar3] = unk_0x7619952D26DF7783(iVar6, &sVar4);
			}
			iVar3++;
		}
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			StringCopy(&sVar4, "awt", 8);
			StringIntConCat(&sVar4, iVar1, 8);
			iVar246[iVar1] = unk_0x7619952D26DF7783(iVar6, &sVar4);
			StringCopy(&sVar4, "awr", 8);
			StringIntConCat(&sVar4, iVar1, 8);
			iVar255[iVar1] = unk_0x7619952D26DF7783(iVar6, &sVar4);
			StringCopy(&sVar4, "awl", 8);
			StringIntConCat(&sVar4, iVar1, 8);
			iVar264[iVar1] = unk_0x7619952D26DF7783(iVar6, &sVar4);
			StringCopy(&sVar4, "awlr", 8);
			StringIntConCat(&sVar4, iVar1, 8);
			iVar273[iVar1] = unk_0x7619952D26DF7783(iVar6, &sVar4);
			StringCopy(&sVar4, "aht", 8);
			StringIntConCat(&sVar4, iVar1, 8);
			iVar291[iVar1] = unk_0x7619952D26DF7783(iVar6, &sVar4);
			StringCopy(&sVar4, "ags", 8);
			StringIntConCat(&sVar4, iVar1, 8);
			iVar282[iVar1] = unk_0x7619952D26DF7783(iVar6, &sVar4);
			StringCopy(&sVar4, "agrd", 8);
			StringIntConCat(&sVar4, iVar1, 8);
			iVar300[iVar1] = unk_0x7619952D26DF7783(iVar6, &sVar4);
			StringCopy(&sVar4, "agvr", 8);
			StringIntConCat(&sVar4, iVar1, 8);
			iVar309[iVar1] = unk_0x7619952D26DF7783(iVar6, &sVar4);
			StringCopy(&sVar4, "agvg", 8);
			StringIntConCat(&sVar4, iVar1, 8);
			iVar318[iVar1] = unk_0x7619952D26DF7783(iVar6, &sVar4);
			StringCopy(&sVar4, "achf", 8);
			StringIntConCat(&sVar4, iVar1, 8);
			iVar327[iVar1] = unk_0x7619952D26DF7783(iVar6, &sVar4);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			StringCopy(&sVar4, "pdwr1", 8);
			StringIntConCat(&sVar4, iVar1, 8);
			iVar336[iVar1] = unk_0x7619952D26DF7783(iVar6, &sVar4);
			StringCopy(&sVar4, "pdwr2", 8);
			StringIntConCat(&sVar4, iVar1, 8);
			iVar346[iVar1] = unk_0x7619952D26DF7783(iVar6, &sVar4);
			iVar1++;
		}
		iVar147 = unk_0x7619952D26DF7783(iVar6, "objt");
		iVar148 = unk_0x7619952D26DF7783(iVar6, "team");
		iVar149 = unk_0x7619952D26DF7783(iVar6, "spawn");
		iVar150 = unk_0x7619952D26DF7783(iVar6, "acts");
		iVar151 = unk_0x7619952D26DF7783(iVar6, "scrrq");
		iVar152 = unk_0x7619952D26DF7783(iVar6, "awysrl");
		iVar153 = unk_0x7619952D26DF7783(iVar6, "objt2");
		iVar154 = unk_0x7619952D26DF7783(iVar6, "team2");
		iVar155 = unk_0x7619952D26DF7783(iVar6, "spawn2");
		iVar156 = unk_0x7619952D26DF7783(iVar6, "acts2");
		iVar157 = unk_0x7619952D26DF7783(iVar6, "scrrq2");
		iVar158 = unk_0x7619952D26DF7783(iVar6, "awysrl2");
		iVar159 = unk_0x7619952D26DF7783(iVar6, "objt3");
		iVar160 = unk_0x7619952D26DF7783(iVar6, "team3");
		iVar161 = unk_0x7619952D26DF7783(iVar6, "spawn3");
		iVar162 = unk_0x7619952D26DF7783(iVar6, "acts3");
		iVar163 = unk_0x7619952D26DF7783(iVar6, "scrrq3");
		iVar164 = unk_0x7619952D26DF7783(iVar6, "awysrl3");
		iVar165 = unk_0x7619952D26DF7783(iVar6, "objt4");
		iVar166 = unk_0x7619952D26DF7783(iVar6, "team4");
		iVar167 = unk_0x7619952D26DF7783(iVar6, "spawn4");
		iVar168 = unk_0x7619952D26DF7783(iVar6, "acts4");
		iVar169 = unk_0x7619952D26DF7783(iVar6, "scrrq4");
		iVar170 = unk_0x7619952D26DF7783(iVar6, "awysr4");
		iVar171 = unk_0x7619952D26DF7783(iVar6, "act");
		iVar172 = unk_0x7619952D26DF7783(iVar6, "pper");
		iVar173 = unk_0x7619952D26DF7783(iVar6, "percr");
		iVar174 = unk_0x7619952D26DF7783(iVar6, "perca");
		iVar175 = unk_0x7619952D26DF7783(iVar6, "infr");
		iVar176 = unk_0x7619952D26DF7783(iVar6, "cca");
		iVar177 = unk_0x7619952D26DF7783(iVar6, "ccid");
		iVar178 = unk_0x7619952D26DF7783(iVar6, "gfr");
		iVar179 = unk_0x7619952D26DF7783(iVar6, "msr");
		iVar180 = unk_0x7619952D26DF7783(iVar6, "bnr");
		iVar181 = unk_0x7619952D26DF7783(iVar6, "phor");
		iVar182 = unk_0x7619952D26DF7783(iVar6, "folr");
		iVar184 = unk_0x7619952D26DF7783(iVar6, "pcvl");
		iVar185 = unk_0x7619952D26DF7783(iVar6, "pcvr");
		iVar183 = unk_0x7619952D26DF7783(iVar6, "pdfw");
		iVar189 = unk_0x7619952D26DF7783(iVar6, "pvdp1");
		iVar190 = unk_0x7619952D26DF7783(iVar6, "pvdp2");
		iVar186 = unk_0x7619952D26DF7783(iVar6, "paaw");
		iVar187 = unk_0x7619952D26DF7783(iVar6, "paav1");
		iVar188 = unk_0x7619952D26DF7783(iVar6, "paav2");
		iVar191 = unk_0x7619952D26DF7783(iVar6, "dt");
		iVar192 = unk_0x7619952D26DF7783(iVar6, "do");
		iVar222 = unk_0x7619952D26DF7783(iVar6, "dltd");
		iVar193 = unk_0x7619952D26DF7783(iVar6, "dtim");
		iVar194 = unk_0x7619952D26DF7783(iVar6, "dln");
		iVar195 = unk_0x7619952D26DF7783(iVar6, "pvsp");
		iVar223 = unk_0x7619952D26DF7783(iVar6, "drge");
		iVar224 = unk_0x7619952D26DF7783(iVar6, "agrot");
		iVar225 = unk_0x7619952D26DF7783(iVar6, "gtds");
		iVar226 = unk_0x7619952D26DF7783(iVar6, "pstat");
		iVar227 = unk_0x7619952D26DF7783(iVar6, "pstar");
		iVar228 = unk_0x7619952D26DF7783(iVar6, "dmv");
		iVar229 = unk_0x7619952D26DF7783(iVar6, "blkr");
		iVar230 = unk_0x7619952D26DF7783(iVar6, "let");
		iVar237 = unk_0x7619952D26DF7783(iVar6, "trpg");
		iVar231 = unk_0x7619952D26DF7783(iVar6, "escr");
		iVar232 = unk_0x7619952D26DF7783(iVar6, "pcoid");
		iVar233 = unk_0x7619952D26DF7783(iVar6, "esco");
		iVar234 = unk_0x7619952D26DF7783(iVar6, "actr");
		iVar235 = unk_0x7619952D26DF7783(iVar6, "spkds");
		iVar236 = unk_0x7619952D26DF7783(iVar6, "entdmr");
		iVar238 = unk_0x7619952D26DF7783(iVar6, "actv");
		iVar239 = unk_0x7619952D26DF7783(iVar6, "actv2");
		iVar240 = unk_0x7619952D26DF7783(iVar6, "actv3");
		iVar241 = unk_0x7619952D26DF7783(iVar6, "actv4");
		iVar242 = unk_0x7619952D26DF7783(iVar6, "actv5");
		iVar243 = unk_0x7619952D26DF7783(iVar6, "actv6");
		iVar244 = unk_0x7619952D26DF7783(iVar6, "actv7");
		iVar245 = unk_0x7619952D26DF7783(iVar6, "actv8");
		iVar356 = unk_0x7619952D26DF7783(iVar6, "pedct");
		iVar358 = unk_0x7619952D26DF7783(iVar6, "pdcra");
		iVar357 = unk_0x7619952D26DF7783(iVar6, "pedcr");
		iVar360 = unk_0x7619952D26DF7783(iVar6, "pedsrT");
		iVar361 = unk_0x7619952D26DF7783(iVar6, "pedsrR");
		iVar359 = unk_0x7619952D26DF7783(iVar6, "pedcv");
		iVar362 = unk_0x7619952D26DF7783(iVar6, "pedbc");
		iVar363 = unk_0x7619952D26DF7783(iVar6, "pdbps");
		iVar364 = unk_0x7619952D26DF7783(iVar6, "pdbso");
		iVar365 = unk_0x7619952D26DF7783(iVar6, "avrad");
		iVar372 = unk_0x7619952D26DF7783(iVar6, "pdtc");
		iVar444 = unk_0x7619952D26DF7783(iVar6, "pdsbr");
		iVar445 = unk_0x7619952D26DF7783(iVar6, "pdrols");
		iVar373 = unk_0x7619952D26DF7783(iVar6, "pedst");
		iVar374 = unk_0x7619952D26DF7783(iVar6, "gotor");
		iVar375 = unk_0x7619952D26DF7783(iVar6, "invbs");
		iVar376 = unk_0x7619952D26DF7783(iVar6, "gort");
		iVar377 = unk_0x7619952D26DF7783(iVar6, "gorr");
		iVar381 = unk_0x7619952D26DF7783(iVar6, "gorw");
		iVar378 = unk_0x7619952D26DF7783(iVar6, "cmvd");
		iVar382 = unk_0x7619952D26DF7783(iVar6, "csct");
		iVar383 = unk_0x7619952D26DF7783(iVar6, "cscr");
		iVar384 = unk_0x7619952D26DF7783(iVar6, "cscs");
		iVar385 = unk_0x7619952D26DF7783(iVar6, "cstnm");
		iVar386 = unk_0x7619952D26DF7783(iVar6, "pspdl");
		iVar387 = unk_0x7619952D26DF7783(iVar6, "psgr");
		iVar388 = unk_0x7619952D26DF7783(iVar6, "pssgr");
		iVar410 = unk_0x7619952D26DF7783(iVar6, "psctt");
		iVar411 = unk_0x7619952D26DF7783(iVar6, "pscto");
		iVar412 = unk_0x7619952D26DF7783(iVar6, "pscta");
		iVar413 = unk_0x7619952D26DF7783(iVar6, "psctac");
		iVar414 = unk_0x7619952D26DF7783(iVar6, "psctv");
		iVar415 = unk_0x7619952D26DF7783(iVar6, "pscth");
		iVar416 = unk_0x7619952D26DF7783(iVar6, "psctot");
		iVar417 = unk_0x7619952D26DF7783(iVar6, "psctoi");
		iVar418 = unk_0x7619952D26DF7783(iVar6, "pscatd");
		iVar419 = unk_0x7619952D26DF7783(iVar6, "pprtot");
		iVar420 = unk_0x7619952D26DF7783(iVar6, "pprtoi");
		iVar421 = unk_0x7619952D26DF7783(iVar6, "ppratd");
		iVar422 = unk_0x7619952D26DF7783(iVar6, "cutsc");
		iVar423 = unk_0x7619952D26DF7783(iVar6, "cutsh");
		iVar424 = unk_0x7619952D26DF7783(iVar6, "cstsc");
		iVar425 = unk_0x7619952D26DF7783(iVar6, "cstsh");
		iVar426 = unk_0x7619952D26DF7783(iVar6, "gtbsr");
		iVar427 = unk_0x7619952D26DF7783(iVar6, "gtbss");
		iVar428 = unk_0x7619952D26DF7783(iVar6, "nmaggg");
		iVar429 = unk_0x7619952D26DF7783(iVar6, "nmpass");
		iVar430 = unk_0x7619952D26DF7783(iVar6, "nmfail");
		iVar431 = unk_0x7619952D26DF7783(iVar6, "pmcp");
		iVar432 = unk_0x7619952D26DF7783(iVar6, "pmcf");
		iVar433 = unk_0x7619952D26DF7783(iVar6, "pmca");
		iVar196 = unk_0x7619952D26DF7783(iVar6, "pambv");
		iVar197 = unk_0x7619952D26DF7783(iVar6, "pwrpt");
		iVar198 = unk_0x7619952D26DF7783(iVar6, "pcash");
		iVar199 = unk_0x7619952D26DF7783(iVar6, "ptrdi");
		iVar200 = unk_0x7619952D26DF7783(iVar6, "pspov");
		iVar201 = unk_0x7619952D26DF7783(iVar6, "paccc");
		iVar202 = unk_0x7619952D26DF7783(iVar6, "pslp");
		iVar203 = unk_0x7619952D26DF7783(iVar6, "psor");
		iVar204 = unk_0x7619952D26DF7783(iVar6, "psort");
		iVar205 = unk_0x7619952D26DF7783(iVar6, "pspovr");
		iVar217 = unk_0x7619952D26DF7783(iVar6, "pspln");
		iVar216 = unk_0x7619952D26DF7783(iVar6, "pcara");
		iVar206 = unk_0x7619952D26DF7783(iVar6, "paagzn");
		iVar218 = unk_0x7619952D26DF7783(iVar6, "pior");
		iVar219 = unk_0x7619952D26DF7783(iVar6, "piort");
		iVar220 = unk_0x7619952D26DF7783(iVar6, "phbor");
		iVar221 = unk_0x7619952D26DF7783(iVar6, "phbort");
		iVar207 = unk_0x7619952D26DF7783(iVar6, "pfbr");
		iVar208 = unk_0x7619952D26DF7783(iVar6, "pfbd");
		iVar212 = unk_0x7619952D26DF7783(iVar6, "pBcor");
		iVar213 = unk_0x7619952D26DF7783(iVar6, "pLcor");
		iVar214 = unk_0x7619952D26DF7783(iVar6, "pCwhT");
		iVar215 = unk_0x7619952D26DF7783(iVar6, "pFVehS");
		iVar446 = unk_0x7619952D26DF7783(iVar6, "phffa");
		iVar209 = unk_0x7619952D26DF7783(iVar6, "vdamspok");
		iVar379 = unk_0x7619952D26DF7783(iVar6, "pdrlgrr");
		iVar380 = unk_0x7619952D26DF7783(iVar6, "pdrlgrt");
		iVar210 = unk_0x7619952D26DF7783(iVar6, "pznsp");
		iVar211 = unk_0x7619952D26DF7783(iVar6, "pznsp2");
		iVar447 = unk_0x7619952D26DF7783(iVar6, "pcdat");
		iVar448 = unk_0x7619952D26DF7783(iVar6, "pcdl2s");
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			StringCopy(&sVar4, "prstp", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&sVar4, iVar1, 8);
			}
			iVar434[iVar1] = unk_0x7619952D26DF7783(iVar6, &sVar4);
			StringCopy(&sVar4, "prsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&sVar4, iVar1, 8);
			}
			iVar439[iVar1] = unk_0x7619952D26DF7783(iVar6, &sVar4);
			iVar1++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_135142 - 1))
	{
		if (iVar0 < 80)
		{
			Global_4456448.f_135148[iVar0] = { unk_0x6403E33233A20F75(iVar7, iVar0) };
			Global_4456448.f_135148[iVar0].f_3 = unk_0x73F91AA610E60211(iVar8, iVar0);
			Global_4456448.f_135148[iVar0].f_4 = unk_0x73F91AA610E60211(iVar9, iVar0);
			if (Global_4456448.f_135148[iVar0].f_4 < 0,75f)
			{
				Global_4456448.f_135148[iVar0].f_4 = 0,75f;
			}
			iVar2 = unk_0xE082EE0DCA9466C4(iVar10, iVar0);
			if (iVar2 == 1558115333)
			{
				Global_4456448.f_135148[iVar0].f_19 = 1650288984;
			}
			else if (iVar2 == -1080659212)
			{
				Global_4456448.f_135148[iVar0].f_19 = -346957479;
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_19 = iVar2;
			}
			if (!func_128() && !func_201())
			{
				if (!unk_0x468C1AC3ABF95C57(Global_4456448.f_135148[iVar0].f_19))
				{
					Global_4456448.f_135148[iVar0].f_19 = 1581098148;
				}
			}
			iVar2 = unk_0xE082EE0DCA9466C4(iVar11, iVar0);
			Global_4456448.f_135148[iVar0].f_20 = iVar2;
			iVar2 = unk_0xE082EE0DCA9466C4(iVar12, iVar0);
			Global_4456448.f_135148[iVar0].f_21 = iVar2;
			if (Global_4456448 == 1)
			{
				Global_4456448.f_135148[iVar0].f_22[0] = unk_0xE082EE0DCA9466C4(iVar14[0], iVar0);
			}
			Global_4456448.f_135148[iVar0].f_61 = unk_0xE082EE0DCA9466C4(iVar24, iVar0);
			Global_4456448.f_135148[iVar0].f_41 = unk_0xE082EE0DCA9466C4(iVar19, iVar0);
			if (!func_200(Global_4456448.f_135148[iVar0].f_20))
			{
				Global_4456448.f_135148[iVar0].f_20 = 453432689;
			}
			Global_4456448.f_135148[iVar0].f_43 = unk_0xE082EE0DCA9466C4(iVar20, iVar0);
			if (iVar22 != 0 && unk_0x3E932F23D327A136(iVar22, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_44 = unk_0xE082EE0DCA9466C4(iVar22, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_44 = -1;
			}
			if (iVar21 != 0 && unk_0x3E932F23D327A136(iVar21, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_42 = unk_0xE082EE0DCA9466C4(iVar21, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_42 = 100;
			}
			Global_4456448.f_135148[iVar0].f_71 = unk_0xE082EE0DCA9466C4(iVar23, iVar0);
			Global_4456448.f_135148[iVar0].f_37 = unk_0xE082EE0DCA9466C4(iVar13, iVar0);
			Global_4456448.f_135148[iVar0].f_46 = unk_0xE082EE0DCA9466C4(iVar25, iVar0);
			Global_4456448.f_135148[iVar0].f_47 = unk_0xE082EE0DCA9466C4(iVar26, iVar0);
			Global_4456448.f_135148[iVar0].f_48 = unk_0xE082EE0DCA9466C4(iVar27, iVar0);
			if (iVar28 != 0 && unk_0x3E932F23D327A136(iVar28, iVar0) == 4)
			{
				StringCopy(&(Global_4456448.f_135148[iVar0].f_508), unk_0x3E4982E6ACD879AE(iVar28, iVar0), 64);
			}
			else
			{
				StringCopy(&(Global_4456448.f_135148[iVar0].f_508), "", 64);
			}
			if (iVar29 != 0 && unk_0x3E932F23D327A136(iVar29, iVar0) == 4)
			{
				StringCopy(&(Global_4456448.f_135148[iVar0].f_524), unk_0x3E4982E6ACD879AE(iVar29, iVar0), 64);
			}
			else
			{
				StringCopy(&(Global_4456448.f_135148[iVar0].f_524), "", 64);
			}
			Global_4456448.f_135148[iVar0].f_49 = unk_0xE082EE0DCA9466C4(iVar30, iVar0);
			Global_4456448.f_135148[iVar0].f_50 = unk_0xE082EE0DCA9466C4(iVar31, iVar0);
			Global_4456448.f_135148[iVar0].f_51 = unk_0xE082EE0DCA9466C4(iVar32, iVar0);
			Global_4456448.f_135148[iVar0].f_52 = unk_0x73F91AA610E60211(iVar33, iVar0);
			Global_4456448.f_135148[iVar0].f_53 = unk_0xE082EE0DCA9466C4(iVar34, iVar0);
			Global_4456448.f_135148[iVar0].f_445 = unk_0xE082EE0DCA9466C4(iVar35, iVar0);
			Global_4456448.f_135148[iVar0].f_54 = unk_0x73F91AA610E60211(iVar36, iVar0);
			Global_4456448.f_135148[iVar0].f_55 = unk_0x73F91AA610E60211(iVar37, iVar0);
			func_199("abtt", &(Global_4456448.f_135148[iVar0].f_56), &iVar6, &iVar455, iVar0, 0, -2340845);
			func_199("abttt", &(Global_4456448.f_135148[iVar0].f_57), &iVar6, &iVar456, iVar0, 0, -2340845);
			Global_4456448.f_135148[iVar0].f_60 = unk_0xE082EE0DCA9466C4(iVar38, iVar0);
			Global_4456448.f_135148[iVar0].f_58 = unk_0xE082EE0DCA9466C4(iVar39, iVar0);
			Global_4456448.f_135148[iVar0].f_5 = unk_0x73F91AA610E60211(iVar40, iVar0);
			if (((((iVar41 != 0 && iVar42 != 0) && iVar43 != 0) && unk_0x3E932F23D327A136(iVar41, iVar0) == 3) && unk_0x3E932F23D327A136(iVar42, iVar0) == 2) && unk_0x3E932F23D327A136(iVar43, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_6 = unk_0x73F91AA610E60211(iVar41, iVar0);
				Global_4456448.f_135148[iVar0].f_7 = unk_0xE082EE0DCA9466C4(iVar42, iVar0);
				Global_4456448.f_135148[iVar0].f_8 = unk_0xE082EE0DCA9466C4(iVar43, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_6 = 0f;
				Global_4456448.f_135148[iVar0].f_7 = 0;
				Global_4456448.f_135148[iVar0].f_8 = -1;
			}
			if (iVar44 != 0 && unk_0x3E932F23D327A136(iVar44, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_18 = unk_0xE082EE0DCA9466C4(iVar44, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_18 = 0;
			}
			if (((iVar45 != 0 && iVar46 != 0) && unk_0x3E932F23D327A136(iVar45, iVar0) == 5) && unk_0x3E932F23D327A136(iVar46, iVar0) == 3)
			{
				Global_4456448.f_135148[iVar0].f_9 = { unk_0x6403E33233A20F75(iVar45, iVar0) };
				Global_4456448.f_135148[iVar0].f_12 = unk_0x73F91AA610E60211(iVar46, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_9 = { 0f, 0f, 0f };
				Global_4456448.f_135148[iVar0].f_12 = 0f;
			}
			if (((iVar47 != 0 && iVar48 != 0) && unk_0x3E932F23D327A136(iVar47, iVar0) == 5) && unk_0x3E932F23D327A136(iVar48, iVar0) == 3)
			{
				Global_4456448.f_135148[iVar0].f_13 = { unk_0x6403E33233A20F75(iVar47, iVar0) };
				Global_4456448.f_135148[iVar0].f_16 = unk_0x73F91AA610E60211(iVar48, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_13 = { 0f, 0f, 0f };
				Global_4456448.f_135148[iVar0].f_16 = 0f;
			}
			Global_4456448.f_135148[iVar0].f_39 = unk_0xE082EE0DCA9466C4(iVar49, iVar0);
			if (iVar50 != 0 && unk_0x3E932F23D327A136(iVar50, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_40 = unk_0xE082EE0DCA9466C4(iVar50, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_40 = -1;
			}
			Global_4456448.f_135148[iVar0].f_59 = unk_0xE082EE0DCA9466C4(iVar51, iVar0);
			Global_4456448.f_135148[iVar0].f_290 = unk_0xE082EE0DCA9466C4(iVar52, iVar0);
			if (iVar53 != 0 && unk_0x3E932F23D327A136(iVar53, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_291 = unk_0xE082EE0DCA9466C4(iVar53, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_291 = 0;
			}
			if (iVar54 != 0 && unk_0x3E932F23D327A136(iVar54, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_292 = unk_0xE082EE0DCA9466C4(iVar54, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_292 = 0;
			}
			if (iVar55 != 0 && unk_0x3E932F23D327A136(iVar55, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_293 = unk_0xE082EE0DCA9466C4(iVar55, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_293 = 0;
			}
			if (iVar56 != 0 && unk_0x3E932F23D327A136(iVar56, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_294 = unk_0xE082EE0DCA9466C4(iVar56, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_294 = 0;
			}
			if (iVar57 != 0 && unk_0x3E932F23D327A136(iVar57, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_295 = unk_0xE082EE0DCA9466C4(iVar57, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_295 = 0;
			}
			if (iVar58 != 0 && unk_0x3E932F23D327A136(iVar58, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_296 = unk_0xE082EE0DCA9466C4(iVar58, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_296 = 0;
			}
			if (iVar59 != 0 && unk_0x3E932F23D327A136(iVar59, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_297 = unk_0xE082EE0DCA9466C4(iVar59, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_297 = 0;
			}
			if (iVar60 != 0 && unk_0x3E932F23D327A136(iVar60, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_298 = unk_0xE082EE0DCA9466C4(iVar60, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_298 = 0;
			}
			if (iVar61 != 0 && unk_0x3E932F23D327A136(iVar61, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_299 = unk_0xE082EE0DCA9466C4(iVar61, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_299 = 0;
			}
			if (iVar62 != 0 && unk_0x3E932F23D327A136(iVar62, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_300 = unk_0xE082EE0DCA9466C4(iVar62, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_300 = 0;
			}
			if (iVar63 != 0 && unk_0x3E932F23D327A136(iVar63, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_301 = unk_0xE082EE0DCA9466C4(iVar63, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_301 = 0;
			}
			if (iVar64 != 0 && unk_0x3E932F23D327A136(iVar64, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_302 = unk_0xE082EE0DCA9466C4(iVar64, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_302 = 0;
			}
			if (iVar65 != 0 && unk_0x3E932F23D327A136(iVar65, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_303 = unk_0xE082EE0DCA9466C4(iVar65, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_303 = 0;
			}
			func_199("pbs15", &(Global_4456448.f_135148[iVar0].f_304), &iVar6, &iVar66, iVar0, 0, -2340845);
			if (iVar67 != 0 && unk_0x3E932F23D327A136(iVar67, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_305 = unk_0xE082EE0DCA9466C4(iVar67, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_305 = 0;
			}
			if (iVar68 != 0 && unk_0x3E932F23D327A136(iVar68, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_507 = unk_0x73F91AA610E60211(iVar68, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_507 = 32f;
			}
			if (iVar69 != 0 && unk_0x3E932F23D327A136(iVar69, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_306 = unk_0xE082EE0DCA9466C4(iVar69, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_306 = -1;
			}
			if (iVar70 != 0 && unk_0x3E932F23D327A136(iVar70, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_307 = unk_0xE082EE0DCA9466C4(iVar70, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_307 = 0;
			}
			if (iVar74 != 0 && unk_0x3E932F23D327A136(iVar74, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_452 = unk_0xE082EE0DCA9466C4(iVar74, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_452 = -1;
			}
			if (iVar75 != 0 && unk_0x3E932F23D327A136(iVar75, iVar0) == 3)
			{
				Global_4456448.f_135148[iVar0].f_453 = unk_0x73F91AA610E60211(iVar75, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_453 = -1f;
			}
			if (iVar76 != 0 && unk_0x3E932F23D327A136(iVar76, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_454 = unk_0xE082EE0DCA9466C4(iVar76, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_454 = -1;
			}
			if (iVar77 != 0 && unk_0x3E932F23D327A136(iVar77, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_455 = unk_0xE082EE0DCA9466C4(iVar77, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_455 = -1;
			}
			if (iVar78 != 0 && unk_0x3E932F23D327A136(iVar78, iVar0) == 3)
			{
				Global_4456448.f_135148[iVar0].f_546.f_7 = unk_0x73F91AA610E60211(iVar78, iVar0);
			}
			else if (func_273())
			{
				Global_4456448.f_135148[iVar0].f_546.f_7 = 0f;
			}
			if (iVar79 != 0 && unk_0x3E932F23D327A136(iVar79, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_504 = unk_0xE082EE0DCA9466C4(iVar79, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_504 = -1;
			}
			if (iVar80 != 0 && unk_0x3E932F23D327A136(iVar80, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_456 = unk_0xE082EE0DCA9466C4(iVar80, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_456 = 0;
			}
			if (iVar81 != 0 && unk_0x3E932F23D327A136(iVar81, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_457 = unk_0xE082EE0DCA9466C4(iVar81, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_457 = -1;
			}
			if (iVar82 != 0 && unk_0x3E932F23D327A136(iVar82, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_458 = unk_0xE082EE0DCA9466C4(iVar82, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_458 = -1;
			}
			if (iVar83 != 0 && unk_0x3E932F23D327A136(iVar83, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_459 = unk_0xE082EE0DCA9466C4(iVar83, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_459 = -1;
			}
			if (iVar84 != 0 && unk_0x3E932F23D327A136(iVar84, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_460 = unk_0xE082EE0DCA9466C4(iVar84, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_460 = -1;
			}
			if (iVar85 != 0 && unk_0x3E932F23D327A136(iVar85, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_461 = unk_0xE082EE0DCA9466C4(iVar85, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_461 = -1;
			}
			if (iVar86 != 0 && unk_0x3E932F23D327A136(iVar86, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_462 = unk_0xE082EE0DCA9466C4(iVar86, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_462 = -1;
			}
			if (iVar71 != 0 && unk_0x3E932F23D327A136(iVar71, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_308 = unk_0xE082EE0DCA9466C4(iVar71, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_308 = -1;
			}
			if (iVar72 != 0 && unk_0x3E932F23D327A136(iVar72, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_442 = unk_0xE082EE0DCA9466C4(iVar72, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_442 = -1;
			}
			if (iVar73 != 0 && unk_0x3E932F23D327A136(iVar73, iVar0) == 2)
			{
				Global_4456448.f_135148[iVar0].f_443 = unk_0xE082EE0DCA9466C4(iVar73, iVar0);
			}
			else
			{
				Global_4456448.f_135148[iVar0].f_443 = -1;
			}
			if (func_135(1))
			{
				func_195(&Var457, &iVar6, &(Global_4456448.f_135148[iVar0].f_546), iVar0, 3);
				Global_4456448.f_135148[iVar0].f_72 = unk_0xE082EE0DCA9466C4(iVar147, iVar0);
				Global_4456448.f_135148[iVar0].f_73 = unk_0xE082EE0DCA9466C4(iVar148, iVar0);
				Global_4456448.f_135148[iVar0].f_74 = unk_0xE082EE0DCA9466C4(iVar149, iVar0);
				Global_4456448.f_135148[iVar0].f_100 = unk_0xE082EE0DCA9466C4(iVar150, iVar0);
				Global_4456448.f_135148[iVar0].f_101 = unk_0xE082EE0DCA9466C4(iVar151, iVar0);
				Global_4456448.f_135148[iVar0].f_102 = unk_0xE082EE0DCA9466C4(iVar152, iVar0);
				if (iVar153 != 0 && unk_0x3E932F23D327A136(iVar153, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_254 = unk_0xE082EE0DCA9466C4(iVar153, iVar0);
					Global_4456448.f_135148[iVar0].f_251 = unk_0xE082EE0DCA9466C4(iVar154, iVar0);
					Global_4456448.f_135148[iVar0].f_257 = unk_0xE082EE0DCA9466C4(iVar155, iVar0);
					Global_4456448.f_135148[iVar0].f_260 = unk_0xE082EE0DCA9466C4(iVar156, iVar0);
					Global_4456448.f_135148[iVar0].f_263 = unk_0xE082EE0DCA9466C4(iVar157, iVar0);
					Global_4456448.f_135148[iVar0].f_266 = unk_0xE082EE0DCA9466C4(iVar158, iVar0);
					Global_4456448.f_135148[iVar0].f_255 = unk_0xE082EE0DCA9466C4(iVar159, iVar0);
					Global_4456448.f_135148[iVar0].f_252 = unk_0xE082EE0DCA9466C4(iVar160, iVar0);
					Global_4456448.f_135148[iVar0].f_258 = unk_0xE082EE0DCA9466C4(iVar161, iVar0);
					Global_4456448.f_135148[iVar0].f_261 = unk_0xE082EE0DCA9466C4(iVar162, iVar0);
					Global_4456448.f_135148[iVar0].f_264 = unk_0xE082EE0DCA9466C4(iVar163, iVar0);
					Global_4456448.f_135148[iVar0].f_267 = unk_0xE082EE0DCA9466C4(iVar164, iVar0);
					Global_4456448.f_135148[iVar0].f_256 = unk_0xE082EE0DCA9466C4(iVar165, iVar0);
					Global_4456448.f_135148[iVar0].f_253 = unk_0xE082EE0DCA9466C4(iVar166, iVar0);
					Global_4456448.f_135148[iVar0].f_259 = unk_0xE082EE0DCA9466C4(iVar167, iVar0);
					Global_4456448.f_135148[iVar0].f_262 = unk_0xE082EE0DCA9466C4(iVar168, iVar0);
					Global_4456448.f_135148[iVar0].f_265 = unk_0xE082EE0DCA9466C4(iVar169, iVar0);
					Global_4456448.f_135148[iVar0].f_268 = unk_0xE082EE0DCA9466C4(iVar170, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_254 = -1;
					Global_4456448.f_135148[iVar0].f_251 = 0;
					Global_4456448.f_135148[iVar0].f_257 = 0;
					Global_4456448.f_135148[iVar0].f_260 = 0;
					Global_4456448.f_135148[iVar0].f_263 = 0;
					Global_4456448.f_135148[iVar0].f_266 = -1;
					Global_4456448.f_135148[iVar0].f_255 = -1;
					Global_4456448.f_135148[iVar0].f_252 = 0;
					Global_4456448.f_135148[iVar0].f_258 = 0;
					Global_4456448.f_135148[iVar0].f_261 = 0;
					Global_4456448.f_135148[iVar0].f_264 = 0;
					Global_4456448.f_135148[iVar0].f_267 = -1;
					Global_4456448.f_135148[iVar0].f_256 = -1;
					Global_4456448.f_135148[iVar0].f_253 = 0;
					Global_4456448.f_135148[iVar0].f_259 = 0;
					Global_4456448.f_135148[iVar0].f_262 = 0;
					Global_4456448.f_135148[iVar0].f_265 = 0;
					Global_4456448.f_135148[iVar0].f_268 = -1;
				}
				Global_4456448.f_135148[iVar0].f_99 = unk_0xE082EE0DCA9466C4(iVar171, iVar0);
				if (iVar172 != 0 && unk_0x3E932F23D327A136(iVar172, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_320 = unk_0xE082EE0DCA9466C4(iVar172, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_320 = 0;
				}
				if (iVar173 != 0 && unk_0x3E932F23D327A136(iVar173, iVar0) == 3)
				{
					Global_4456448.f_135148[iVar0].f_321 = unk_0x73F91AA610E60211(iVar173, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_321 = -1f;
				}
				if (iVar174 != 0 && unk_0x3E932F23D327A136(iVar174, iVar0) == 3)
				{
					Global_4456448.f_135148[iVar0].f_322 = unk_0x73F91AA610E60211(iVar174, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_322 = -1f;
				}
				if (iVar175 != 0 && unk_0x3E932F23D327A136(iVar175, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_323 = unk_0xE082EE0DCA9466C4(iVar175, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_323 = 250;
				}
				if (iVar176 != 0 && unk_0x3E932F23D327A136(iVar176, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_326 = unk_0xE082EE0DCA9466C4(iVar176, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_326 = 0;
				}
				if (iVar177 != 0 && unk_0x3E932F23D327A136(iVar177, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_327 = unk_0xE082EE0DCA9466C4(iVar177, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_327 = -1;
				}
				if (iVar178 != 0 && unk_0x3E932F23D327A136(iVar178, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_328 = unk_0xE082EE0DCA9466C4(iVar178, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_328 = 0;
				}
				if (iVar179 != 0 && unk_0x3E932F23D327A136(iVar179, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_324 = unk_0xE082EE0DCA9466C4(iVar179, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_324 = 0;
				}
				if (iVar180 != 0 && unk_0x3E932F23D327A136(iVar180, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_325 = unk_0xE082EE0DCA9466C4(iVar180, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_325 = -1;
				}
				if (iVar181 != 0 && unk_0x3E932F23D327A136(iVar181, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_393 = unk_0xE082EE0DCA9466C4(iVar181, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_393 = -1;
				}
				if (iVar182 != 0 && unk_0x3E932F23D327A136(iVar182, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_394 = unk_0xE082EE0DCA9466C4(iVar182, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_394 = -1;
				}
				if (iVar184 != 0 && unk_0x3E932F23D327A136(iVar184, iVar0) == 5)
				{
					Global_4456448.f_135148[iVar0].f_329 = { unk_0x6403E33233A20F75(iVar184, iVar0) };
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_329 = { 0f, 0f, 0f };
				}
				if (iVar185 != 0 && unk_0x3E932F23D327A136(iVar185, iVar0) == 5)
				{
					Global_4456448.f_135148[iVar0].f_332 = { unk_0x6403E33233A20F75(iVar185, iVar0) };
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_332 = { 0f, 0f, 0f };
				}
				if (((((iVar189 != 0 && iVar190 != 0) && iVar183 != 0) && unk_0x3E932F23D327A136(iVar189, iVar0) == 5) && unk_0x3E932F23D327A136(iVar190, iVar0) == 5) && unk_0x3E932F23D327A136(iVar183, iVar0) == 3)
				{
					Global_4456448.f_135148[iVar0].f_341 = { unk_0x6403E33233A20F75(iVar189, iVar0) };
					Global_4456448.f_135148[iVar0].f_344 = { unk_0x6403E33233A20F75(iVar190, iVar0) };
					Global_4456448.f_135148[iVar0].f_347 = unk_0x73F91AA610E60211(iVar183, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_341 = { 0f, 0f, 0f };
					Global_4456448.f_135148[iVar0].f_344 = { 0f, 0f, 0f };
					Global_4456448.f_135148[iVar0].f_347 = 1f;
				}
				if (((((iVar186 != 0 && iVar187 != 0) && iVar188 != 0) && unk_0x3E932F23D327A136(iVar186, iVar0) == 3) && unk_0x3E932F23D327A136(iVar187, iVar0) == 5) && unk_0x3E932F23D327A136(iVar188, iVar0) == 5)
				{
					Global_4456448.f_135148[iVar0].f_282 = unk_0x73F91AA610E60211(iVar186, iVar0);
					Global_4456448.f_135148[iVar0].f_276 = { unk_0x6403E33233A20F75(iVar187, iVar0) };
					Global_4456448.f_135148[iVar0].f_279 = { unk_0x6403E33233A20F75(iVar188, iVar0) };
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_282 = 0f;
					Global_4456448.f_135148[iVar0].f_276 = { 0f, 0f, 0f };
					Global_4456448.f_135148[iVar0].f_279 = { 0f, 0f, 0f };
				}
				if (iVar195 != 0 && unk_0x3E932F23D327A136(iVar195, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_366 = unk_0xE082EE0DCA9466C4(iVar195, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_366 = 0;
				}
				Global_4456448.f_135148[iVar0].f_337 = unk_0xE082EE0DCA9466C4(iVar191, iVar0);
				Global_4456448.f_135148[iVar0].f_336 = unk_0xE082EE0DCA9466C4(iVar192, iVar0);
				Global_4456448.f_135148[iVar0].f_338 = unk_0xE082EE0DCA9466C4(iVar193, iVar0);
				Global_4456448.f_135148[iVar0].f_339 = unk_0xE082EE0DCA9466C4(iVar194, iVar0);
				Global_4456448.f_135148[iVar0].f_340 = unk_0xE082EE0DCA9466C4(iVar223, iVar0);
				Global_4456448.f_135148[iVar0].f_434 = unk_0xE082EE0DCA9466C4(iVar222, iVar0);
				Global_4456448.f_135148[iVar0].f_348 = unk_0xE082EE0DCA9466C4(iVar224, iVar0);
				Global_4456448.f_135148[iVar0].f_283 = unk_0xE082EE0DCA9466C4(iVar225, iVar0);
				Global_4456448.f_135148[iVar0].f_38 = unk_0xE082EE0DCA9466C4(iVar228, iVar0);
				Global_4456448.f_135148[iVar0].f_17 = unk_0x73F91AA610E60211(iVar229, iVar0);
				Global_4456448.f_135148[iVar0].f_274 = unk_0xE082EE0DCA9466C4(iVar230, iVar0);
				Global_4456448.f_135148[iVar0].f_284 = unk_0xE082EE0DCA9466C4(iVar231, iVar0);
				Global_4456448.f_135148[iVar0].f_446 = unk_0xE082EE0DCA9466C4(iVar235, iVar0);
				Global_4456448.f_135148[iVar0].f_463 = unk_0xE082EE0DCA9466C4(iVar232, iVar0);
				if (iVar237 != 0 && unk_0x3E932F23D327A136(iVar237, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_540 = unk_0xE082EE0DCA9466C4(iVar237, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_540 = 0;
				}
				if (iVar236 != 0 && unk_0x3E932F23D327A136(iVar236, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_447 = unk_0xE082EE0DCA9466C4(iVar236, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_447 = 0;
				}
				if (iVar233 != 0 && unk_0x3E932F23D327A136(iVar233, iVar0) == 5)
				{
					Global_4456448.f_135148[iVar0].f_285 = { unk_0x6403E33233A20F75(iVar233, iVar0) };
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_285 = { 0f, 0f, 0f };
				}
				Global_4456448.f_135148[iVar0].f_275 = unk_0xE082EE0DCA9466C4(iVar234, iVar0);
				Global_4456448.f_135148[iVar0].f_103 = { unk_0x6403E33233A20F75(iVar238, iVar0) };
				if (iVar239 != 0 && unk_0x3E932F23D327A136(iVar239, iVar0) == 5)
				{
					Global_4456448.f_135148[iVar0].f_106[0] = { unk_0x6403E33233A20F75(iVar239, iVar0) };
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_106[0] = { 0f, 0f, 0f };
				}
				if (iVar240 != 0 && unk_0x3E932F23D327A136(iVar240, iVar0) == 5)
				{
					Global_4456448.f_135148[iVar0].f_106[1] = { unk_0x6403E33233A20F75(iVar240, iVar0) };
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_106[1] = { 0f, 0f, 0f };
				}
				if (iVar241 != 0 && unk_0x3E932F23D327A136(iVar241, iVar0) == 5)
				{
					Global_4456448.f_135148[iVar0].f_106[2] = { unk_0x6403E33233A20F75(iVar241, iVar0) };
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_106[2] = { 0f, 0f, 0f };
				}
				if (iVar242 != 0 && unk_0x3E932F23D327A136(iVar242, iVar0) == 5)
				{
					Global_4456448.f_135148[iVar0].f_106[3] = { unk_0x6403E33233A20F75(iVar242, iVar0) };
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_106[3] = { 0f, 0f, 0f };
				}
				if (iVar243 != 0 && unk_0x3E932F23D327A136(iVar243, iVar0) == 5)
				{
					Global_4456448.f_135148[iVar0].f_106[4] = { unk_0x6403E33233A20F75(iVar243, iVar0) };
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_106[4] = { 0f, 0f, 0f };
				}
				if (iVar244 != 0 && unk_0x3E932F23D327A136(iVar244, iVar0) == 5)
				{
					Global_4456448.f_135148[iVar0].f_106[5] = { unk_0x6403E33233A20F75(iVar244, iVar0) };
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_106[5] = { 0f, 0f, 0f };
				}
				if (iVar245 != 0 && unk_0x3E932F23D327A136(iVar245, iVar0) == 5)
				{
					Global_4456448.f_135148[iVar0].f_106[6] = { unk_0x6403E33233A20F75(iVar245, iVar0) };
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_106[6] = { 0f, 0f, 0f };
				}
				if (((iVar226 != 0 && iVar227 != 0) && unk_0x3E932F23D327A136(iVar226, iVar0) == 2) && unk_0x3E932F23D327A136(iVar227, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_288 = unk_0xE082EE0DCA9466C4(iVar226, iVar0);
					Global_4456448.f_135148[iVar0].f_289 = unk_0xE082EE0DCA9466C4(iVar227, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_288 = -1;
					Global_4456448.f_135148[iVar0].f_289 = -1;
				}
				iVar1 = 0;
				while (iVar1 <= 7)
				{
					if (iVar246[iVar1] != 0 && unk_0x3E932F23D327A136(iVar246[iVar1], iVar0) == 2)
					{
						Global_4456448.f_135148[iVar0].f_129[iVar1] = unk_0xE082EE0DCA9466C4(iVar246[iVar1], iVar0);
					}
					else
					{
						Global_4456448.f_135148[iVar0].f_129[iVar1] = 0;
					}
					if (iVar255[iVar1] != 0 && unk_0x3E932F23D327A136(iVar255[iVar1], iVar0) == 2)
					{
						Global_4456448.f_135148[iVar0].f_138[iVar1] = unk_0xE082EE0DCA9466C4(iVar255[iVar1], iVar0);
					}
					else
					{
						Global_4456448.f_135148[iVar0].f_138[iVar1] = -1;
					}
					if (((iVar264[iVar1] != 0 && iVar273[iVar1] != 0) && unk_0x3E932F23D327A136(iVar264[iVar1], iVar0) == 5) && unk_0x3E932F23D327A136(iVar273[iVar1], iVar0) == 2)
					{
						Global_4456448.f_135148[iVar0].f_147[iVar1] = { unk_0x6403E33233A20F75(iVar264[iVar1], iVar0) };
						Global_4456448.f_135148[iVar0].f_172[iVar1] = unk_0xE082EE0DCA9466C4(iVar273[iVar1], iVar0);
					}
					else
					{
						Global_4456448.f_135148[iVar0].f_147[iVar1] = { 0f, 0f, 0f };
						Global_4456448.f_135148[iVar0].f_172[iVar1] = 3;
					}
					if (iVar282[iVar1] != 0 && unk_0x3E932F23D327A136(iVar282[iVar1], iVar0) == 2)
					{
						Global_4456448.f_135148[iVar0].f_199[iVar1] = unk_0xE082EE0DCA9466C4(iVar282[iVar1], iVar0);
					}
					else
					{
						Global_4456448.f_135148[iVar0].f_199[iVar1] = -1;
					}
					if (iVar291[iVar1] != 0 && unk_0x3E932F23D327A136(iVar291[iVar1], iVar0) == 3)
					{
						Global_4456448.f_135148[iVar0].f_181[iVar1] = unk_0x73F91AA610E60211(iVar291[iVar1], iVar0);
					}
					else
					{
						Global_4456448.f_135148[iVar0].f_181[iVar1] = 0f;
					}
					if (iVar300[iVar1] != 0 && unk_0x3E932F23D327A136(iVar300[iVar1], iVar0) == 3)
					{
						Global_4456448.f_135148[iVar0].f_190[iVar1] = unk_0x73F91AA610E60211(iVar300[iVar1], iVar0);
					}
					else
					{
						Global_4456448.f_135148[iVar0].f_190[iVar1] = 0f;
					}
					if (iVar309[iVar1] != 0 && unk_0x3E932F23D327A136(iVar309[iVar1], iVar0) == 3)
					{
						Global_4456448.f_135148[iVar0].f_208[iVar1] = unk_0x73F91AA610E60211(iVar309[iVar1], iVar0);
					}
					else
					{
						Global_4456448.f_135148[iVar0].f_208[iVar1] = 0f;
					}
					if (iVar318[iVar1] != 0 && unk_0x3E932F23D327A136(iVar318[iVar1], iVar0) == 2)
					{
						Global_4456448.f_135148[iVar0].f_226[iVar1] = unk_0xE082EE0DCA9466C4(iVar318[iVar1], iVar0);
					}
					else
					{
						Global_4456448.f_135148[iVar0].f_226[iVar1] = -1;
					}
					if (iVar327[iVar1] != 0 && unk_0x3E932F23D327A136(iVar327[iVar1], iVar0) == 3)
					{
						Global_4456448.f_135148[iVar0].f_217[iVar1] = unk_0x73F91AA610E60211(iVar327[iVar1], iVar0);
					}
					else
					{
						Global_4456448.f_135148[iVar0].f_217[iVar1] = 0f;
					}
					iVar1++;
				}
				iVar1 = 0;
				while (iVar1 <= 8)
				{
					if (iVar336[iVar1] != 0 && unk_0x3E932F23D327A136(iVar336[iVar1], iVar0) == 5)
					{
						Global_4456448.f_135148[iVar0].f_464[iVar1] = { unk_0x6403E33233A20F75(iVar336[iVar1], iVar0) };
					}
					else
					{
						Global_4456448.f_135148[iVar0].f_464[iVar1] = { 0f, 0f, 0f };
					}
					if (iVar346[iVar1] != 0 && unk_0x3E932F23D327A136(iVar346[iVar1], iVar0) == 3)
					{
						Global_4456448.f_135148[iVar0].f_492[iVar1] = unk_0x73F91AA610E60211(iVar346[iVar1], iVar0);
					}
					else
					{
						Global_4456448.f_135148[iVar0].f_492[iVar1] = 0f;
					}
					iVar1++;
				}
				if (iVar357 != 0 && unk_0x3E932F23D327A136(iVar357, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_349 = unk_0xE082EE0DCA9466C4(iVar357, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_349 = -1;
				}
				if (iVar356 != 0 && unk_0x3E932F23D327A136(iVar356, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_350 = unk_0xE082EE0DCA9466C4(iVar356, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_350 = -1;
				}
				if (iVar360 != 0 && unk_0x3E932F23D327A136(iVar360, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_354 = unk_0xE082EE0DCA9466C4(iVar360, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_354 = -1;
				}
				if (iVar361 != 0 && unk_0x3E932F23D327A136(iVar361, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_353 = unk_0xE082EE0DCA9466C4(iVar361, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_353 = -1;
				}
				if (iVar359 != 0 && unk_0x3E932F23D327A136(iVar359, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_352 = unk_0xE082EE0DCA9466C4(iVar359, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_352 = -1;
				}
				if (iVar358 != 0 && unk_0x3E932F23D327A136(iVar358, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_351 = unk_0xE082EE0DCA9466C4(iVar358, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_351 = -1;
				}
				if (iVar373 != 0 && unk_0x3E932F23D327A136(iVar373, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_365 = unk_0xE082EE0DCA9466C4(iVar373, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_365 = -3;
				}
				if (iVar362 != 0 && unk_0x3E932F23D327A136(iVar362, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_546.f_2 = unk_0xE082EE0DCA9466C4(iVar362, iVar0);
				}
				else if (func_273())
				{
					Global_4456448.f_135148[iVar0].f_546.f_2 = 0;
				}
				if (iVar363 != 0 && unk_0x3E932F23D327A136(iVar363, iVar0) == 3)
				{
					Global_4456448.f_135148[iVar0].f_546.f_4 = unk_0x73F91AA610E60211(iVar363, iVar0);
				}
				else if (func_273())
				{
					Global_4456448.f_135148[iVar0].f_546.f_4 = 1f;
				}
				if (iVar364 != 0 && unk_0x3E932F23D327A136(iVar364, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_546.f_5 = unk_0xE082EE0DCA9466C4(iVar364, iVar0);
				}
				else if (func_273())
				{
					Global_4456448.f_135148[iVar0].f_546.f_5 = 0;
				}
				if (iVar372 != 0 && unk_0x3E932F23D327A136(iVar372, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_441 = unk_0xE082EE0DCA9466C4(iVar372, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_441 = 1;
				}
				if (iVar444 != 0 && unk_0x3E932F23D327A136(iVar444, iVar0) == 3)
				{
					Global_4456448.f_135148[iVar0].f_444 = unk_0x73F91AA610E60211(iVar444, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_444 = 0f;
				}
				if (iVar445 != 0 && unk_0x3E932F23D327A136(iVar445, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_449 = unk_0xE082EE0DCA9466C4(iVar445, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_449 = -1;
				}
				if (iVar447 != 0 && unk_0x3E932F23D327A136(iVar447, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_505 = unk_0xE082EE0DCA9466C4(iVar447, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_505 = 0;
				}
				if (iVar448 != 0 && unk_0x3E932F23D327A136(iVar448, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_506 = unk_0xE082EE0DCA9466C4(iVar448, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_506 = 0;
				}
				if (iVar365 != 0 && unk_0x3E932F23D327A136(iVar365, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_128 = unk_0xE082EE0DCA9466C4(iVar365, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_128 = 0;
				}
				if (iVar374 != 0 && unk_0x3E932F23D327A136(iVar374, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_62 = unk_0xE082EE0DCA9466C4(iVar374, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_62 = 0;
				}
				if (iVar375 != 0 && unk_0x3E932F23D327A136(iVar375, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_63 = unk_0xE082EE0DCA9466C4(iVar375, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_63 = 0;
				}
				if (iVar385 != 0 && unk_0x3E932F23D327A136(iVar385, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_249 = unk_0xE082EE0DCA9466C4(iVar385, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_249 = -1;
				}
				if (iVar386 != 0 && unk_0x3E932F23D327A136(iVar386, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_250 = unk_0xE082EE0DCA9466C4(iVar386, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_250 = 0;
				}
				if (iVar387 != 0 && unk_0x3E932F23D327A136(iVar387, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_75 = unk_0xE082EE0DCA9466C4(iVar387, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_75 = 0;
				}
				if (iVar388 != 0 && unk_0x3E932F23D327A136(iVar388, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_76 = unk_0xE082EE0DCA9466C4(iVar388, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_76 = 0;
				}
				iVar1 = 0;
				while (iVar1 <= 19)
				{
					StringCopy(&sVar4, "1pwb", 8);
					StringIntConCat(&sVar4, iVar1, 8);
					func_199(&sVar4, &(Global_4456448.f_135148[iVar0].f_77[iVar1]), &iVar6, &(uVar389[iVar1]), iVar0, 0, 0);
					iVar1++;
				}
				if (iVar196 != 0 && unk_0x3E932F23D327A136(iVar196, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_395 = unk_0xE082EE0DCA9466C4(iVar196, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_395 = -1;
				}
				if (iVar197 != 0 && unk_0x3E932F23D327A136(iVar197, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_401 = unk_0xE082EE0DCA9466C4(iVar197, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_401 = -1;
				}
				if (iVar198 != 0 && unk_0x3E932F23D327A136(iVar198, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_402 = unk_0xE082EE0DCA9466C4(iVar198, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_402 = -1;
				}
				if (iVar199 != 0 && unk_0x3E932F23D327A136(iVar199, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_403 = unk_0xE082EE0DCA9466C4(iVar199, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_403 = -1;
				}
				if (iVar200 != 0 && unk_0x3E932F23D327A136(iVar200, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_407 = unk_0xE082EE0DCA9466C4(iVar200, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_407 = -1;
				}
				if (iVar201 != 0 && unk_0x3E932F23D327A136(iVar201, iVar0) == 3)
				{
					Global_4456448.f_135148[iVar0].f_408 = unk_0x73F91AA610E60211(iVar201, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_408 = 0f;
				}
				if (iVar202 != 0 && unk_0x3E932F23D327A136(iVar202, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_404 = unk_0xE082EE0DCA9466C4(iVar202, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_404 = -1;
				}
				if (iVar203 != 0 && unk_0x3E932F23D327A136(iVar203, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_405 = unk_0xE082EE0DCA9466C4(iVar203, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_405 = -1;
				}
				if (iVar204 != 0 && unk_0x3E932F23D327A136(iVar204, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_406 = unk_0xE082EE0DCA9466C4(iVar204, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_406 = -1;
				}
				if (iVar206 != 0 && unk_0x3E932F23D327A136(iVar206, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_435 = unk_0xE082EE0DCA9466C4(iVar206, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_435 = -1;
				}
				if (iVar207 != 0 && unk_0x3E932F23D327A136(iVar207, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_436 = unk_0xE082EE0DCA9466C4(iVar207, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_436 = -1;
				}
				if (iVar208 != 0 && unk_0x3E932F23D327A136(iVar208, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_437 = unk_0xE082EE0DCA9466C4(iVar208, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_437 = 10;
				}
				if (iVar212 != 0 && unk_0x3E932F23D327A136(iVar212, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_438 = unk_0xE082EE0DCA9466C4(iVar212, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_438 = -1;
				}
				if (iVar213 != 0 && unk_0x3E932F23D327A136(iVar213, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_439 = unk_0xE082EE0DCA9466C4(iVar213, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_439 = -1;
				}
				if (iVar214 != 0 && unk_0x3E932F23D327A136(iVar214, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_440 = unk_0xE082EE0DCA9466C4(iVar214, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_440 = 0;
				}
				if (iVar209 != 0 && unk_0x3E932F23D327A136(iVar209, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_448 = unk_0xE082EE0DCA9466C4(iVar209, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_448 = 0;
				}
				if (iVar210 != 0 && unk_0x3E932F23D327A136(iVar210, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_502 = unk_0xE082EE0DCA9466C4(iVar210, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_502 = -1;
				}
				if (iVar211 != 0 && unk_0x3E932F23D327A136(iVar211, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_503 = unk_0xE082EE0DCA9466C4(iVar211, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_503 = 0;
				}
				if (iVar215 != 0 && unk_0x3E932F23D327A136(iVar215, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_98 = unk_0xE082EE0DCA9466C4(iVar215, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_98 = -1;
				}
				if (iVar446 != 0 && unk_0x3E932F23D327A136(iVar446, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_319 = unk_0xE082EE0DCA9466C4(iVar446, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_319 = -1;
				}
				if (iVar205 != 0 && unk_0x3E932F23D327A136(iVar205, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_409 = unk_0xE082EE0DCA9466C4(iVar205, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_409 = -1;
				}
				if (iVar216 != 0 && unk_0x3E932F23D327A136(iVar216, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_428 = unk_0xE082EE0DCA9466C4(iVar216, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_428 = 10;
				}
				if (iVar218 != 0 && unk_0x3E932F23D327A136(iVar218, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_430 = unk_0xE082EE0DCA9466C4(iVar218, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_430 = -1;
				}
				if (iVar219 != 0 && unk_0x3E932F23D327A136(iVar219, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_429 = unk_0xE082EE0DCA9466C4(iVar219, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_429 = 0;
				}
				if (iVar220 != 0 && unk_0x3E932F23D327A136(iVar220, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_432 = unk_0xE082EE0DCA9466C4(iVar220, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_432 = -1;
				}
				if (iVar221 != 0 && unk_0x3E932F23D327A136(iVar221, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_431 = unk_0xE082EE0DCA9466C4(iVar221, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_431 = 0;
				}
				if (iVar217 != 0 && unk_0x3E932F23D327A136(iVar217, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_433 = unk_0xE082EE0DCA9466C4(iVar217, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_433 = 0;
				}
				if (((((iVar410 != 0 && iVar411 != 0) && iVar412 != 0) && unk_0x3E932F23D327A136(iVar410, iVar0) == 2) && unk_0x3E932F23D327A136(iVar411, iVar0) == 2) && unk_0x3E932F23D327A136(iVar412, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_235 = unk_0xE082EE0DCA9466C4(iVar410, iVar0);
					Global_4456448.f_135148[iVar0].f_236 = unk_0xE082EE0DCA9466C4(iVar411, iVar0);
					Global_4456448.f_135148[iVar0].f_238 = unk_0xE082EE0DCA9466C4(iVar412, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_235 = -1;
					Global_4456448.f_135148[iVar0].f_236 = -1;
					Global_4456448.f_135148[iVar0].f_238 = 0;
				}
				if (((((iVar416 != 0 && iVar417 != 0) && iVar418 != 0) && unk_0x3E932F23D327A136(iVar416, iVar0) == 2) && unk_0x3E932F23D327A136(iVar417, iVar0) == 2) && unk_0x3E932F23D327A136(iVar418, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_243 = unk_0xE082EE0DCA9466C4(iVar416, iVar0);
					Global_4456448.f_135148[iVar0].f_244 = unk_0xE082EE0DCA9466C4(iVar417, iVar0);
					Global_4456448.f_135148[iVar0].f_245 = unk_0xE082EE0DCA9466C4(iVar418, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_243 = 0;
					Global_4456448.f_135148[iVar0].f_244 = -1;
					Global_4456448.f_135148[iVar0].f_245 = -1;
				}
				if (((((iVar419 != 0 && iVar420 != 0) && iVar421 != 0) && unk_0x3E932F23D327A136(iVar419, iVar0) == 2) && unk_0x3E932F23D327A136(iVar420, iVar0) == 2) && unk_0x3E932F23D327A136(iVar421, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_246 = unk_0xE082EE0DCA9466C4(iVar419, iVar0);
					Global_4456448.f_135148[iVar0].f_247 = unk_0xE082EE0DCA9466C4(iVar420, iVar0);
					Global_4456448.f_135148[iVar0].f_248 = unk_0xE082EE0DCA9466C4(iVar421, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_246 = 0;
					Global_4456448.f_135148[iVar0].f_247 = -1;
					Global_4456448.f_135148[iVar0].f_248 = -1;
				}
				if (iVar413 != 0 && unk_0x3E932F23D327A136(iVar413, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_237 = unk_0xE082EE0DCA9466C4(iVar413, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_237 = 0;
				}
				if (iVar414 != 0 && unk_0x3E932F23D327A136(iVar414, iVar0) == 5)
				{
					Global_4456448.f_135148[iVar0].f_239 = { unk_0x6403E33233A20F75(iVar414, iVar0) };
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_239 = { 0f, 0f, 0f };
				}
				if (iVar415 != 0 && unk_0x3E932F23D327A136(iVar415, iVar0) == 3)
				{
					Global_4456448.f_135148[iVar0].f_242 = unk_0x73F91AA610E60211(iVar415, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_242 = 0f;
				}
				if (iVar379 != 0 && unk_0x3E932F23D327A136(iVar379, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_450 = unk_0xE082EE0DCA9466C4(iVar379, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_450 = -1;
				}
				if (iVar380 != 0 && unk_0x3E932F23D327A136(iVar380, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_451 = unk_0xE082EE0DCA9466C4(iVar380, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_451 = -1;
				}
				if (iVar378 != 0 && unk_0x3E932F23D327A136(iVar378, iVar0) == 3)
				{
					Global_4456448.f_135148[iVar0].f_70 = unk_0x73F91AA610E60211(iVar378, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_70 = 0f;
				}
				if (((iVar376 != 0 && unk_0x3E932F23D327A136(iVar376, iVar0) == 2) && unk_0x3E932F23D327A136(iVar377, iVar0) == 2) && unk_0x3E932F23D327A136(iVar381, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_64 = unk_0xE082EE0DCA9466C4(iVar376, iVar0);
					Global_4456448.f_135148[iVar0].f_65 = unk_0xE082EE0DCA9466C4(iVar377, iVar0);
					Global_4456448.f_135148[iVar0].f_66 = unk_0xE082EE0DCA9466C4(iVar381, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_64 = -1;
					Global_4456448.f_135148[iVar0].f_65 = -1;
					Global_4456448.f_135148[iVar0].f_66 = 453432689;
				}
				if (((((iVar382 != 0 && unk_0x3E932F23D327A136(iVar382, iVar0) == 2) && iVar383 != 0) && unk_0x3E932F23D327A136(iVar383, iVar0) == 2) && iVar384 != 0) && unk_0x3E932F23D327A136(iVar384, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_67 = unk_0xE082EE0DCA9466C4(iVar382, iVar0);
					Global_4456448.f_135148[iVar0].f_68 = unk_0xE082EE0DCA9466C4(iVar383, iVar0);
					Global_4456448.f_135148[iVar0].f_69 = unk_0xE082EE0DCA9466C4(iVar384, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_67 = -1;
					Global_4456448.f_135148[iVar0].f_68 = -1;
					Global_4456448.f_135148[iVar0].f_69 = -1;
				}
				if (Global_4456448.f_2 != 6 && unk_0x3E932F23D327A136(iVar422, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_389 = unk_0xE082EE0DCA9466C4(iVar422, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_389 = -1;
				}
				if (iVar426 != 0 && unk_0x3E932F23D327A136(iVar426, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_377.f_6 = unk_0xE082EE0DCA9466C4(iVar426, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_377.f_6 = -1;
				}
				if (iVar427 != 0 && unk_0x3E932F23D327A136(iVar427, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_377.f_7 = unk_0xE082EE0DCA9466C4(iVar427, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_377.f_7 = -1;
				}
				if (iVar428 != 0 && unk_0x3E932F23D327A136(iVar428, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_377.f_2 = unk_0xE082EE0DCA9466C4(iVar428, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_377.f_2 = -1;
				}
				if (iVar429 != 0 && unk_0x3E932F23D327A136(iVar429, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_377 = unk_0xE082EE0DCA9466C4(iVar429, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_377 = -1;
				}
				if (iVar430 != 0 && unk_0x3E932F23D327A136(iVar430, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_377.f_1 = unk_0xE082EE0DCA9466C4(iVar430, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_377.f_1 = -1;
				}
				if (iVar431 != 0 && unk_0x3E932F23D327A136(iVar431, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_377.f_3 = unk_0xE082EE0DCA9466C4(iVar431, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_377.f_3 = -1;
				}
				if (iVar432 != 0 && unk_0x3E932F23D327A136(iVar432, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_377.f_4 = unk_0xE082EE0DCA9466C4(iVar432, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_377.f_4 = -1;
				}
				if (iVar433 != 0 && unk_0x3E932F23D327A136(iVar433, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_377.f_5 = unk_0xE082EE0DCA9466C4(iVar433, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_377.f_5 = -1;
				}
				if (Global_4456448.f_2 != 6 && unk_0x3E932F23D327A136(iVar423, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_390 = unk_0xE082EE0DCA9466C4(iVar423, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_390 = 0;
				}
				if (iVar424 != 0 && unk_0x3E932F23D327A136(iVar424, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_391 = unk_0xE082EE0DCA9466C4(iVar424, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_391 = -1;
				}
				if (iVar425 != 0 && unk_0x3E932F23D327A136(iVar425, iVar0) == 2)
				{
					Global_4456448.f_135148[iVar0].f_392 = unk_0xE082EE0DCA9466C4(iVar425, iVar0);
				}
				else
				{
					Global_4456448.f_135148[iVar0].f_392 = -1;
				}
				iVar1 = 0;
				while (iVar1 <= 3)
				{
					if (iVar434[iVar1] != 0 && unk_0x3E932F23D327A136(iVar434[iVar1], iVar0) == 5)
					{
						Global_4456448.f_135148[iVar0].f_410[iVar1] = { unk_0x6403E33233A20F75(iVar434[iVar1], iVar0) };
					}
					else
					{
						Global_4456448.f_135148[iVar0].f_410[iVar1] = { 0f, 0f, 0f };
					}
					if (iVar439[iVar1] != 0 && unk_0x3E932F23D327A136(iVar439[iVar1], iVar0) == 3)
					{
						Global_4456448.f_135148[iVar0].f_423[iVar1] = unk_0x73F91AA610E60211(iVar439[iVar1], iVar0);
					}
					else
					{
						Global_4456448.f_135148[iVar0].f_423[iVar1] = 0f;
					}
					iVar1++;
				}
				iVar3 = 0;
				while (iVar3 <= (Global_4456448.f_206 - 1))
				{
					if (iVar3 < 4)
					{
						Global_4456448.f_135148[iVar0].f_22[iVar3] = unk_0xE082EE0DCA9466C4(iVar14[iVar3], iVar0);
						Global_4456448.f_135148[iVar0].f_27[iVar3] = unk_0xE082EE0DCA9466C4(iVar87[iVar3], iVar0);
						Global_4456448.f_135148[iVar0].f_32[iVar3] = unk_0xE082EE0DCA9466C4(iVar92[iVar3], iVar0);
						if (Global_4456448.f_135148[iVar0].f_32[iVar3] == -1)
						{
							Global_4456448.f_135148[iVar0].f_32[iVar3] = 99999;
						}
						if (iVar97[iVar3] != 0 && unk_0x3E932F23D327A136(iVar97[iVar3], iVar0) == 2)
						{
							Global_4456448.f_135148[iVar0].f_309[iVar3] = unk_0xE082EE0DCA9466C4(iVar97[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_135148[iVar0].f_309[iVar3] = -1;
						}
						if (iVar102[iVar3] != 0 && unk_0x3E932F23D327A136(iVar102[iVar3], iVar0) == 2)
						{
							Global_4456448.f_135148[iVar0].f_314[iVar3] = unk_0xE082EE0DCA9466C4(iVar102[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_135148[iVar0].f_314[iVar3] = -1;
						}
						if (iVar107[iVar3] != 0 && unk_0x3E932F23D327A136(iVar107[iVar3], iVar0) == 2)
						{
							Global_4456448.f_135148[iVar0].f_269[iVar3] = unk_0xE082EE0DCA9466C4(iVar107[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_135148[iVar0].f_269[iVar3] = 0;
						}
						if (iVar112[iVar3] != 0 && unk_0x3E932F23D327A136(iVar112[iVar3], iVar0) == 2)
						{
							Global_4456448.f_135148[iVar0].f_367[iVar3] = unk_0xE082EE0DCA9466C4(iVar112[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_135148[iVar0].f_367[iVar3] = 0;
						}
						if (iVar117[iVar3] != 0 && unk_0x3E932F23D327A136(iVar117[iVar3], iVar0) == 2)
						{
							Global_4456448.f_135148[iVar0].f_372[iVar3] = unk_0xE082EE0DCA9466C4(iVar117[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_135148[iVar0].f_372[iVar3] = 0;
						}
						if (((iVar122[iVar3] != 0 && iVar127[iVar3] != 0) && unk_0x3E932F23D327A136(iVar122[iVar3], iVar0) == 2) && unk_0x3E932F23D327A136(iVar127[iVar3], iVar0) == 2)
						{
							Global_4456448.f_135148[iVar0].f_546.f_10[iVar3].f_1 = unk_0xE082EE0DCA9466C4(iVar122[iVar3], iVar0);
							Global_4456448.f_135148[iVar0].f_546.f_10[iVar3].f_2 = unk_0xE082EE0DCA9466C4(iVar127[iVar3], iVar0);
						}
						else if (func_273())
						{
							Global_4456448.f_135148[iVar0].f_546.f_10[iVar3].f_1 = -1;
							Global_4456448.f_135148[iVar0].f_546.f_10[iVar3].f_2 = -1;
						}
						if (iVar132[iVar3] != 0 && unk_0x3E932F23D327A136(iVar132[iVar3], iVar0) == 2)
						{
							Global_4456448.f_135148[iVar0].f_396[iVar3] = unk_0xE082EE0DCA9466C4(iVar132[iVar3], iVar0);
						}
						else if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_63905[iVar3][func_194(iVar0)], func_193(iVar0)))
						{
							Global_4456448.f_135148[iVar0].f_396[iVar3] = -1;
						}
						else
						{
							Global_4456448.f_135148[iVar0].f_396[iVar3] = -2;
						}
						if (iVar137[iVar3] != 0 && unk_0x3E932F23D327A136(iVar137[iVar3], iVar0) == 2)
						{
							Global_4456448.f_135148[iVar0].f_355[iVar3] = unk_0xE082EE0DCA9466C4(iVar137[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_135148[iVar0].f_355[iVar3] = 0;
						}
						if (iVar142[iVar3] != 0 && unk_0x3E932F23D327A136(iVar142[iVar3], iVar0) == 2)
						{
							Global_4456448.f_135148[iVar0].f_360[iVar3] = unk_0xE082EE0DCA9466C4(iVar142[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_135148[iVar0].f_360[iVar3] = -1;
						}
					}
					iVar3++;
				}
				func_199("omj1", &(Global_4456448.f_135148[iVar0].f_541.f_1), &iVar6, &iVar449, iVar0, -1, -2340845);
				func_199("omj2", &(Global_4456448.f_135148[iVar0].f_541.f_2), &iVar6, &iVar450, iVar0, -1, -2340845);
				func_199("omj3", &(Global_4456448.f_135148[iVar0].f_541), &iVar6, &iVar451, iVar0, -1, -2340845);
				func_199("omj4", &(Global_4456448.f_135148[iVar0].f_541.f_3), &iVar6, &iVar452, iVar0, 0, -2340845);
				func_199("omj5", &(Global_4456448.f_135148[iVar0].f_541.f_4), &iVar6, &iVar453, iVar0, 0, -2340845);
				func_199("rblF", &(Global_4456448.f_135148[iVar0].f_385), &iVar6, &iVar366, iVar0, -1, -2340845);
				func_199("rblN", &(Global_4456448.f_135148[iVar0].f_386), &iVar6, &iVar367, iVar0, -1, -2340845);
				func_199("rblH", &(Global_4456448.f_135148[iVar0].f_387), &iVar6, &iVar368, iVar0, -1, -2340845);
				func_199("pdtb", &(Global_4456448.f_135148[iVar0].f_335), &iVar6, &iVar369, iVar0, -1, -2340845);
				StringCopy(&sVar4, "sbhir", 8);
				if (iVar0 < 10)
				{
					StringIntConCat(&sVar4, 0, 8);
				}
				StringIntConCat(&sVar4, iVar0, 8);
				func_192(&sVar4, &(Global_4456448.f_135148[iVar0].f_388), &iVar6, &iVar454, iVar0, 0f, 0f);
				func_191("alvped", &(Global_4456448.f_135148[iVar0].f_569), 1, &iVar6, &uVar370, iVar0, 0, -2340845);
			}
		}
		iVar0++;
	}
	func_190(&iVar6);
}

void func_190(int iParam0)
{
	uVar0 = 1;
	iVar3 = 0;
	while (iVar3 <= 3)
	{
		StringCopy(&cVar8, "no", 16);
		StringIntConCat(&cVar8, iVar3, 16);
		Global_4456448.f_182501[iVar3] = unk_0x8A83B52A17A321DB(*iParam0, &cVar8);
		StringCopy(&cVar8, "loc", 16);
		StringIntConCat(&cVar8, iVar3, 16);
		iVar12 = unk_0x7619952D26DF7783(*iParam0, &cVar8);
		StringCopy(&cVar8, "head", 16);
		StringIntConCat(&cVar8, iVar3, 16);
		iVar13 = unk_0x7619952D26DF7783(*iParam0, &cVar8);
		StringCopy(&cVar8, "bit", 16);
		StringIntConCat(&cVar8, iVar3, 16);
		iVar14 = unk_0x7619952D26DF7783(*iParam0, &cVar8);
		StringCopy(&cVar8, "veh", 16);
		StringIntConCat(&cVar8, iVar3, 16);
		iVar15 = unk_0x7619952D26DF7783(*iParam0, &cVar8);
		StringCopy(&cVar8, "tars", 16);
		StringIntConCat(&cVar8, iVar3, 16);
		iVar16 = unk_0x7619952D26DF7783(*iParam0, &cVar8);
		StringCopy(&cVar8, "vfrs", 16);
		StringIntConCat(&cVar8, iVar3, 16);
		iVar17 = unk_0x7619952D26DF7783(*iParam0, &cVar8);
		StringCopy(&cVar8, "vfre", 16);
		StringIntConCat(&cVar8, iVar3, 16);
		iVar18 = unk_0x7619952D26DF7783(*iParam0, &cVar8);
		StringCopy(&cVar8, "ty", 16);
		StringIntConCat(&cVar8, iVar3, 16);
		iVar19 = unk_0x7619952D26DF7783(*iParam0, &cVar8);
		StringCopy(&cVar8, "as", 16);
		StringIntConCat(&cVar8, iVar3, 16);
		iVar20 = unk_0x7619952D26DF7783(*iParam0, &cVar8);
		StringCopy(&cVar8, "qu", 16);
		StringIntConCat(&cVar8, iVar3, 16);
		iVar21 = unk_0x7619952D26DF7783(*iParam0, &cVar8);
		StringCopy(&cVar8, "gg", 16);
		StringIntConCat(&cVar8, iVar3, 16);
		iVar22 = unk_0x7619952D26DF7783(*iParam0, &cVar8);
		StringCopy(&cVar8, "ar", 16);
		StringIntConCat(&cVar8, iVar3, 16);
		iVar23 = unk_0x7619952D26DF7783(*iParam0, &cVar8);
		StringCopy(&cVar8, "ttm", 16);
		StringIntConCat(&cVar8, iVar3, 16);
		iVar24 = unk_0x7619952D26DF7783(*iParam0, &cVar8);
		StringCopy(&cVar8, "tspr", 16);
		StringIntConCat(&cVar8, iVar3, 16);
		iVar25 = unk_0x7619952D26DF7783(*iParam0, &cVar8);
		StringCopy(&cVar8, "tsbt", 16);
		StringIntConCat(&cVar8, iVar3, 16);
		iVar26 = unk_0x7619952D26DF7783(*iParam0, &cVar8);
		StringCopy(&cVar8, "lcet", 16);
		StringIntConCat(&cVar8, iVar3, 16);
		iVar27 = unk_0x7619952D26DF7783(*iParam0, &cVar8);
		StringCopy(&cVar8, "lcid", 16);
		StringIntConCat(&cVar8, iVar3, 16);
		iVar28 = unk_0x7619952D26DF7783(*iParam0, &cVar8);
		iVar2 = 0;
		while (iVar2 <= (Global_4456448.f_182501[iVar3] - 1))
		{
			Global_4456448.f_183948[iVar3][iVar2] = { unk_0x6403E33233A20F75(iVar12, iVar2) };
			Global_4456448.f_183948[iVar3][iVar2].f_3 = unk_0x73F91AA610E60211(iVar13, iVar2);
			Global_4456448.f_183948[iVar3][iVar2].f_5 = unk_0xE082EE0DCA9466C4(iVar14, iVar2);
			if (iVar15 != 0 && unk_0x3E932F23D327A136(iVar15, iVar2) == 2)
			{
				Global_4456448.f_183948[iVar3][iVar2].f_7 = unk_0xE082EE0DCA9466C4(iVar15, iVar2);
			}
			else
			{
				Global_4456448.f_183948[iVar3][iVar2].f_7 = -1;
			}
			Global_4456448.f_183948[iVar3][iVar2].f_9 = unk_0xE082EE0DCA9466C4(iVar16, iVar2);
			if (iVar17 != 0 && unk_0x3E932F23D327A136(iVar17, iVar2) == 2)
			{
				Global_4456448.f_183948[iVar3][iVar2].f_10 = unk_0xE082EE0DCA9466C4(iVar17, iVar2);
			}
			else
			{
				Global_4456448.f_183948[iVar3][iVar2].f_10 = -1;
			}
			if (iVar18 != 0 && unk_0x3E932F23D327A136(iVar18, iVar2) == 2)
			{
				Global_4456448.f_183948[iVar3][iVar2].f_11 = unk_0xE082EE0DCA9466C4(iVar18, iVar2);
			}
			else
			{
				Global_4456448.f_183948[iVar3][iVar2].f_11 = -1;
			}
			Global_4456448.f_183948[iVar3][iVar2].f_12 = unk_0xE082EE0DCA9466C4(iVar19, iVar2);
			Global_4456448.f_183948[iVar3][iVar2].f_13 = unk_0xE082EE0DCA9466C4(iVar20, iVar2);
			Global_4456448.f_183948[iVar3][iVar2].f_14 = unk_0xE082EE0DCA9466C4(iVar21, iVar2);
			Global_4456448.f_183948[iVar3][iVar2].f_15 = unk_0xE082EE0DCA9466C4(iVar22, iVar2);
			Global_4456448.f_183948[iVar3][iVar2].f_16 = unk_0xE082EE0DCA9466C4(iVar23, iVar2);
			if (iVar24 != 0 && unk_0x3E932F23D327A136(iVar24, iVar2) == 2)
			{
				Global_4456448.f_183948[iVar3][iVar2].f_17 = unk_0xE082EE0DCA9466C4(iVar24, iVar2);
			}
			else
			{
				Global_4456448.f_183948[iVar3][iVar2].f_17 = -2;
			}
			if (iVar25 != 0 && unk_0x3E932F23D327A136(iVar25, iVar2) == 2)
			{
				Global_4456448.f_183948[iVar3][iVar2].f_18 = unk_0xE082EE0DCA9466C4(iVar25, iVar2);
			}
			else
			{
				Global_4456448.f_183948[iVar3][iVar2].f_18 = iVar3;
			}
			if (iVar26 != 0 && unk_0x3E932F23D327A136(iVar26, iVar2) == 2)
			{
				Global_4456448.f_183948[iVar3][iVar2].f_21 = unk_0xE082EE0DCA9466C4(iVar26, iVar2);
			}
			else
			{
				Global_4456448.f_183948[iVar3][iVar2].f_21 = 0;
			}
			if (iVar27 != 0 && unk_0x3E932F23D327A136(iVar27, iVar2) == 2)
			{
				Global_4456448.f_183948[iVar3][iVar2].f_19 = unk_0xE082EE0DCA9466C4(iVar27, iVar2);
			}
			else
			{
				Global_4456448.f_183948[iVar3][iVar2].f_19 = -1;
			}
			if (iVar28 != 0 && unk_0x3E932F23D327A136(iVar28, iVar2) == 2)
			{
				Global_4456448.f_183948[iVar3][iVar2].f_20 = unk_0xE082EE0DCA9466C4(iVar28, iVar2);
			}
			else
			{
				Global_4456448.f_183948[iVar3][iVar2].f_20 = -1;
			}
			StringCopy(&Var4, "alvtsp", 16);
			StringIntConCat(&Var4, iVar3, 16);
			func_191(&Var4, &(Global_4456448.f_183948[iVar3][iVar2].f_22), 1, iParam0, &uVar0, iVar2, 0, -2340845);
			iVar2++;
		}
		iVar3++;
	}
}

void func_191(char* sParam0, var uParam1, int iParam2, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	if (*iParam3 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (iParam2 - 1))
	{
		StringCopy(&cVar1, sParam0, 32);
		StringConCat(&cVar1, "_BS", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		if ((*uParam4)[iVar0] == 0)
		{
			(*uParam4)[iVar0] = unk_0x7619952D26DF7783(*iParam3, &cVar1);
		}
		if ((*uParam4)[iVar0] != 0 && unk_0x3E932F23D327A136((*uParam4)[iVar0], iParam5) == 2)
		{
			(*uParam1)[iVar0] = unk_0xE082EE0DCA9466C4((*uParam4)[iVar0], iParam5);
		}
		else if (func_273())
		{
			if (iParam7 != -2340845)
			{
				(*uParam1)[iVar0] = iParam7;
			}
		}
		else
		{
			(*uParam1)[iVar0] = iParam6;
		}
		iVar0++;
	}
}

void func_192(char* sParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5, float fParam6)
{
	if (*iParam2 == 0)
	{
		return;
	}
	if (*iParam3 == 0)
	{
		*iParam3 = unk_0x7619952D26DF7783(*iParam2, sParam0);
	}
	if (*iParam3 != 0 && unk_0x3E932F23D327A136(*iParam3, iParam4) == 3)
	{
		*uParam1 = unk_0x73F91AA610E60211(*iParam3, iParam4);
	}
	else if (func_273())
	{
		if (fParam6 != -2340846f)
		{
			*uParam1 = fParam6;
		}
	}
	else
	{
		*uParam1 = fParam5;
	}
}

int func_193(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_194(iParam0) * 31);
}

int func_194(int iParam0)
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return (iParam0 / 31);
}

void func_195(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	if (func_273())
	{
		return;
	}
	func_199("blpBS", uParam2, iParam1, iParam0, iParam3, func_198(iParam4 == 5, 1, 0), -2340845);
	func_199("blpS", &(uParam2->f_1), iParam1, &(iParam0->f_1), iParam3, 0, -2340845);
	func_199("blpC", &(uParam2->f_2), iParam1, &(iParam0->f_2), iParam3, 0, -2340845);
	func_199("blpA", &(uParam2->f_3), iParam1, &(iParam0->f_3), iParam3, 255, -2340845);
	func_192("blpSc", &(uParam2->f_4), iParam1, &(iParam0->f_4), iParam3, func_197(iParam4), -904994889);
	func_199("blpSp", &(uParam2->f_5), iParam1, &(iParam0->f_5), iParam3, 0, -2340845);
	func_192("blpR", &(uParam2->f_6), iParam1, &(iParam0->f_6), iParam3, 0f, -904994889);
	func_192("blpH", &(uParam2->f_7), iParam1, &(iParam0->f_7), iParam3, 0f, -904994889);
	func_199("blpP", &(uParam2->f_8), iParam1, &(iParam0->f_8), iParam3, 0, -2340845);
	func_199("blpNm", &(uParam2->f_9), iParam1, &(iParam0->f_9), iParam3, 0, -2340845);
	StringCopy(&sVar1, "", 8);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&sVar1, "bBS", 8);
		StringIntConCat(&sVar1, iVar0, 8);
		func_199(&sVar1, &(uParam2->f_10[iVar0]), iParam1, &(iParam0->f_10[iVar0]), iParam3, 0, -2340845);
		StringCopy(&sVar1, "bOSRT", 8);
		StringIntConCat(&sVar1, iVar0, 8);
		func_199(&sVar1, &(uParam2->f_10[iVar0].f_1), iParam1, &(iParam0->f_15[iVar0]), iParam3, -1, -2340845);
		StringCopy(&sVar1, "bORE", 8);
		StringIntConCat(&sVar1, iVar0, 8);
		func_199(&sVar1, &(uParam2->f_10[iVar0].f_2), iParam1, &(iParam0->f_20[iVar0]), iParam3, -1, -2340845);
		iVar0++;
	}
	func_196(iParam4, iParam3);
}

void func_196(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
			if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_124065[iParam1].f_73, 15))
			{
				unk_0x5D96D8530B3D0904(&(Global_4456448.f_124065[iParam1].f_102), 8);
				unk_0x0674E58A79778E99(&(Global_4456448.f_124065[iParam1].f_73), 15);
			}
			break;
		
		case 7:
			if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_116800[iParam1].f_8, 15))
			{
				unk_0x5D96D8530B3D0904(&(Global_4456448.f_116800[iParam1].f_93), 8);
				unk_0x0674E58A79778E99(&(Global_4456448.f_116800[iParam1].f_8), 15);
			}
			break;
		
		case 3:
			if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_135148[iParam1].f_290, 7))
			{
				unk_0x5D96D8530B3D0904(&(Global_4456448.f_135148[iParam1].f_546), 8);
				unk_0x0674E58A79778E99(&(Global_4456448.f_135148[iParam1].f_290), 7);
			}
			break;
		
		case 6:
			if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_70744[iParam1].f_74, 0))
			{
				unk_0x5D96D8530B3D0904(&(Global_4456448.f_70744[iParam1].f_20), 8);
				unk_0x0674E58A79778E99(&(Global_4456448.f_70744[iParam1].f_74), 0);
			}
			break;
		
		case 5:
			if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_113490[iParam1].f_18, 10))
			{
				unk_0x0674E58A79778E99(&(Global_4456448.f_113490[iParam1].f_40), 8);
				unk_0x0674E58A79778E99(&(Global_4456448.f_113490[iParam1].f_18), 10);
			}
			break;
	}
}

float func_197(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1,2f;
		
		case 7:
			return 1,2f;
		
		case 1:
			return 0,8f;
		
		case 3:
			return 0,7f;
		
		case 2:
			return 0,8f;
		
		default:
	}
	return 1f;
}

int func_198(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_199(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (*iParam2 == 0)
	{
		return;
	}
	if (*iParam3 == 0)
	{
		*iParam3 = unk_0x7619952D26DF7783(*iParam2, sParam0);
	}
	if (*iParam3 != 0 && unk_0x3E932F23D327A136(*iParam3, iParam4) == 2)
	{
		*iParam1 = unk_0xE082EE0DCA9466C4(*iParam3, iParam4);
	}
	else if (func_273())
	{
		if (iParam6 != -2340845)
		{
			*iParam1 = iParam6;
		}
	}
	else
	{
		*iParam1 = iParam5;
	}
}

int func_200(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((iParam0 == 453432689 || iParam0 == 324215364) || iParam0 == 736523883) || iParam0 == -1074790547) || iParam0 == -1357824103) || iParam0 == -1660422300) || iParam0 == 2144741730) || iParam0 == 487013001) || iParam0 == 2017895192) || iParam0 == 100416529) || iParam0 == 205991906) || iParam0 == -1568386805) || iParam0 == -1312131151) || iParam0 == 1119849093) || iParam0 == -1716189206) || iParam0 == -1786099057) || iParam0 == -1569615261) || iParam0 == -619010992) || iParam0 == -1813897027) || iParam0 == 741814745) || iParam0 == 615608432) || iParam0 == -1169823560) || iParam0 == -2084633992) || iParam0 == -2067956739) || iParam0 == 1317494643) || iParam0 == 419712736) || iParam0 == -1063057011) || iParam0 == 2132975508) || iParam0 == 984333226) || iParam0 == -1654528753) || iParam0 == -494615257) || iParam0 == -270015777) || iParam0 == 171789620) || iParam0 == -1768145561) || iParam0 == -1075685676)
	{
		return 1;
	}
	return 0;
}

int func_201()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

bool func_202()
{
	return Global_4456448 == 3;
}

void func_203(int iParam0)
{
	iVar1 = unk_0x6D954AF55D3925DB(iParam0, "ene");
	Global_4456448.f_182500 = unk_0x8A83B52A17A321DB(iVar1, "no");
	Global_4456448.f_78155 = unk_0x8A83B52A17A321DB(iVar1, "veh");
	iVar2 = unk_0x7619952D26DF7783(iVar1, "loc");
	iVar3 = unk_0x7619952D26DF7783(iVar1, "head");
	iVar4 = unk_0x7619952D26DF7783(iVar1, "team");
	iVar5 = unk_0x7619952D26DF7783(iVar1, "dmSPTR");
	if (Global_4456448.f_182500 > 60)
	{
		Global_4456448.f_182500 = 60;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_182500 - 1))
	{
		if (iVar0 < 60)
		{
			Global_4456448.f_182507[iVar0] = { unk_0x6403E33233A20F75(iVar2, iVar0) };
			Global_4456448.f_182507[iVar0].f_3 = unk_0x73F91AA610E60211(iVar3, iVar0);
			Global_4456448.f_182507[iVar0].f_4 = unk_0xE082EE0DCA9466C4(iVar4, iVar0);
			Global_4456448.f_182507[iVar0].f_18 = unk_0xE082EE0DCA9466C4(iVar5, iVar0);
		}
		iVar0++;
	}
	func_190(&iVar1);
}

void func_204(int iParam0)
{
	iVar5 = unk_0x6D954AF55D3925DB(iParam0, "dprop");
	Global_4456448.f_113488 = func_211(unk_0x8A83B52A17A321DB(iVar5, "no"), 0, 200);
	iVar6 = unk_0x7619952D26DF7783(iVar5, "loc");
	iVar7 = unk_0x7619952D26DF7783(iVar5, "vRot");
	iVar8 = unk_0x7619952D26DF7783(iVar5, "head");
	iVar9 = unk_0x7619952D26DF7783(iVar5, "model");
	iVar10 = unk_0x7619952D26DF7783(iVar5, "asst");
	iVar11 = unk_0x7619952D26DF7783(iVar5, "asso");
	iVar12 = unk_0x7619952D26DF7783(iVar5, "asss");
	iVar13 = unk_0x7619952D26DF7783(iVar5, "pasc");
	iVar14 = unk_0x7619952D26DF7783(iVar5, "asst2");
	iVar15 = unk_0x7619952D26DF7783(iVar5, "asso2");
	iVar16 = unk_0x7619952D26DF7783(iVar5, "asss2");
	iVar17 = unk_0x7619952D26DF7783(iVar5, "pasc2");
	iVar18 = unk_0x7619952D26DF7783(iVar5, "asst3");
	iVar19 = unk_0x7619952D26DF7783(iVar5, "asso3");
	iVar20 = unk_0x7619952D26DF7783(iVar5, "asss3");
	iVar21 = unk_0x7619952D26DF7783(iVar5, "pasc3");
	iVar22 = unk_0x7619952D26DF7783(iVar5, "asst4");
	iVar23 = unk_0x7619952D26DF7783(iVar5, "asso4");
	iVar24 = unk_0x7619952D26DF7783(iVar5, "asss4");
	iVar25 = unk_0x7619952D26DF7783(iVar5, "pasc4");
	iVar26 = unk_0x7619952D26DF7783(iVar5, "prpct");
	iVar27 = unk_0x7619952D26DF7783(iVar5, "prpcr");
	iVar28 = unk_0x7619952D26DF7783(iVar5, "prcra");
	iVar29 = unk_0x7619952D26DF7783(iVar5, "prpbs");
	iVar30 = unk_0x7619952D26DF7783(iVar5, "prpkt");
	iVar31 = unk_0x7619952D26DF7783(iVar5, "dprorc");
	iVar32 = unk_0x7619952D26DF7783(iVar5, "prpdclr");
	iVar33 = unk_0x7619952D26DF7783(iVar5, "dptrpx");
	iVar34 = unk_0x7619952D26DF7783(iVar5, "dpsl");
	iVar35 = unk_0x7619952D26DF7783(iVar5, "dpcl");
	iVar36 = unk_0x7619952D26DF7783(iVar5, "dptrRS");
	iVar37 = unk_0x7619952D26DF7783(iVar5, "dyipho");
	iVar38 = unk_0x7619952D26DF7783(iVar5, "dyipbtt");
	iVar39 = unk_0x7619952D26DF7783(iVar5, "dcoid");
	iVar40 = unk_0x7619952D26DF7783(iVar5, "dynrpil");
	iVar41 = unk_0x7619952D26DF7783(iVar5, "dynblov");
	iVar42 = unk_0x7619952D26DF7783(iVar5, "dynblcl");
	iVar43 = unk_0x7619952D26DF7783(iVar5, "dynblrn");
	iVar44 = unk_0x7619952D26DF7783(iVar5, "dynblhd");
	iVar45 = unk_0x7619952D26DF7783(iVar5, "dynblsc");
	iVar46 = unk_0x7619952D26DF7783(iVar5, "dynblpr");
	iVar47 = unk_0x7619952D26DF7783(iVar5, "dprpbtf");
	iVar48 = unk_0x7619952D26DF7783(iVar5, "dprpsgg");
	iVar49 = unk_0x7619952D26DF7783(iVar5, "dprpssg");
	iVar71 = unk_0x7619952D26DF7783(iVar5, "dElec_BS");
	iVar72 = unk_0x7619952D26DF7783(iVar5, "dElec_TDT");
	iVar73 = unk_0x7619952D26DF7783(iVar5, "dynctbs");
	iVar74 = unk_0x7619952D26DF7783(iVar5, "dyncta");
	iVar75 = unk_0x7619952D26DF7783(iVar5, "dyncts");
	iVar76 = unk_0x7619952D26DF7783(iVar5, "dyncwt");
	iVar77 = unk_0x7619952D26DF7783(iVar5, "dyncvr");
	iVar78 = unk_0x7619952D26DF7783(iVar5, "dyncvw");
	iVar79 = unk_0x7619952D26DF7783(iVar5, "dyncsr");
	iVar80 = unk_0x7619952D26DF7783(iVar5, "dyncsht");
	iVar81 = unk_0x7619952D26DF7783(iVar5, "dyncbht");
	uVar82 = 1;
	Var84.f_10 = 4;
	Var84.f_15 = 4;
	Var84.f_20 = 4;
	if (Global_4456448.f_113488 > 32)
	{
		Global_4456448.f_113488 = 32;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_113488 - 1))
	{
		Global_4456448.f_113490[iVar0] = { unk_0x6403E33233A20F75(iVar6, iVar0) };
		Global_4456448.f_113490[iVar0].f_3 = { unk_0x6403E33233A20F75(iVar7, iVar0) };
		Global_4456448.f_113490[iVar0].f_6 = unk_0x73F91AA610E60211(iVar8, iVar0);
		Global_4456448.f_113490[iVar0].f_8 = -1;
		iVar1 = unk_0xE082EE0DCA9466C4(iVar9, iVar0);
		Global_4456448.f_113490[iVar0].f_7 = func_209(iVar1);
		if (!unk_0x468C1AC3ABF95C57(Global_4456448.f_113490[iVar0].f_7))
		{
			Global_4456448.f_113490[iVar0].f_7 = -1344435013;
		}
		if (iVar29 != 0 && unk_0x3E932F23D327A136(iVar29, iVar0) == 2)
		{
			Global_4456448.f_113490[iVar0].f_18 = unk_0xE082EE0DCA9466C4(iVar29, iVar0);
		}
		else
		{
			Global_4456448.f_113490[iVar0].f_18 = 0;
		}
		Global_4456448.f_113490[iVar0].f_40 = 1;
		func_195(&Var84, &iVar5, &(Global_4456448.f_113490[iVar0].f_40), iVar0, 5);
		Global_4456448.f_113490[iVar0].f_12 = unk_0xE082EE0DCA9466C4(iVar10, iVar0);
		Global_4456448.f_113490[iVar0].f_11 = unk_0xE082EE0DCA9466C4(iVar11, iVar0);
		Global_4456448.f_113490[iVar0].f_13 = unk_0xE082EE0DCA9466C4(iVar12, iVar0);
		if (Global_4456448.f_113490[iVar0].f_13 == -1)
		{
			Global_4456448.f_113490[iVar0].f_13 = 0;
		}
		if (iVar14 != 0 && unk_0x3E932F23D327A136(iVar14, iVar0) == 2)
		{
			Global_4456448.f_113490[iVar0].f_19 = unk_0xE082EE0DCA9466C4(iVar14, iVar0);
			Global_4456448.f_113490[iVar0].f_22 = unk_0xE082EE0DCA9466C4(iVar15, iVar0);
			Global_4456448.f_113490[iVar0].f_25 = unk_0xE082EE0DCA9466C4(iVar16, iVar0);
			Global_4456448.f_113490[iVar0].f_20 = unk_0xE082EE0DCA9466C4(iVar18, iVar0);
			Global_4456448.f_113490[iVar0].f_23 = unk_0xE082EE0DCA9466C4(iVar19, iVar0);
			Global_4456448.f_113490[iVar0].f_26 = unk_0xE082EE0DCA9466C4(iVar20, iVar0);
			Global_4456448.f_113490[iVar0].f_21 = unk_0xE082EE0DCA9466C4(iVar22, iVar0);
			Global_4456448.f_113490[iVar0].f_24 = unk_0xE082EE0DCA9466C4(iVar23, iVar0);
			Global_4456448.f_113490[iVar0].f_27 = unk_0xE082EE0DCA9466C4(iVar24, iVar0);
		}
		else
		{
			Global_4456448.f_113490[iVar0].f_22 = -1;
			Global_4456448.f_113490[iVar0].f_19 = 0;
			Global_4456448.f_113490[iVar0].f_25 = 0;
			Global_4456448.f_113490[iVar0].f_23 = -1;
			Global_4456448.f_113490[iVar0].f_20 = 0;
			Global_4456448.f_113490[iVar0].f_26 = 0;
			Global_4456448.f_113490[iVar0].f_24 = -1;
			Global_4456448.f_113490[iVar0].f_21 = 0;
			Global_4456448.f_113490[iVar0].f_27 = 0;
		}
		if (iVar13 != 0 && unk_0x3E932F23D327A136(iVar13, iVar0) == 2)
		{
			Global_4456448.f_113490[iVar0].f_14 = unk_0xE082EE0DCA9466C4(iVar13, iVar0);
			Global_4456448.f_113490[iVar0].f_28 = unk_0xE082EE0DCA9466C4(iVar17, iVar0);
			Global_4456448.f_113490[iVar0].f_29 = unk_0xE082EE0DCA9466C4(iVar21, iVar0);
			Global_4456448.f_113490[iVar0].f_30 = unk_0xE082EE0DCA9466C4(iVar25, iVar0);
		}
		else
		{
			Global_4456448.f_113490[iVar0].f_14 = 0;
			Global_4456448.f_113490[iVar0].f_28 = 0;
			Global_4456448.f_113490[iVar0].f_29 = 0;
			Global_4456448.f_113490[iVar0].f_30 = 0;
		}
		if (iVar27 != 0 && unk_0x3E932F23D327A136(iVar27, iVar0) == 2)
		{
			Global_4456448.f_113490[iVar0].f_15 = unk_0xE082EE0DCA9466C4(iVar27, iVar0);
		}
		else
		{
			Global_4456448.f_113490[iVar0].f_15 = -1;
		}
		if (iVar26 != 0 && unk_0x3E932F23D327A136(iVar26, iVar0) == 2)
		{
			Global_4456448.f_113490[iVar0].f_16 = unk_0xE082EE0DCA9466C4(iVar26, iVar0);
		}
		else
		{
			Global_4456448.f_113490[iVar0].f_16 = -1;
		}
		if (iVar28 != 0 && unk_0x3E932F23D327A136(iVar28, iVar0) == 2)
		{
			Global_4456448.f_113490[iVar0].f_17 = unk_0xE082EE0DCA9466C4(iVar28, iVar0);
		}
		else
		{
			Global_4456448.f_113490[iVar0].f_17 = -1;
		}
		if (iVar31 != 0 && unk_0x3E932F23D327A136(iVar31, iVar0) == 2)
		{
			Global_4456448.f_113490[iVar0].f_31 = unk_0xE082EE0DCA9466C4(iVar31, iVar0);
		}
		else
		{
			Global_4456448.f_113490[iVar0].f_31 = 0;
		}
		if (iVar30 != 0 && unk_0x3E932F23D327A136(iVar30, iVar0) == 2)
		{
			Global_4456448.f_113490[iVar0].f_9 = unk_0xE082EE0DCA9466C4(iVar30, iVar0);
		}
		else
		{
			Global_4456448.f_113490[iVar0].f_9 = 0;
		}
		if (iVar32 != 0 && unk_0x3E932F23D327A136(iVar32, iVar0) == 2)
		{
			Global_4456448.f_113490[iVar0].f_10 = unk_0xE082EE0DCA9466C4(iVar32, iVar0);
		}
		else
		{
			Global_4456448.f_113490[iVar0].f_10 = 1;
		}
		if (iVar33 != 0 && unk_0x3E932F23D327A136(iVar33, iVar0) == 3)
		{
			Global_4456448.f_113490[iVar0].f_32 = unk_0x73F91AA610E60211(iVar33, iVar0);
		}
		else
		{
			Global_4456448.f_113490[iVar0].f_32 = 2f;
		}
		if (iVar36 != 0 && unk_0x3E932F23D327A136(iVar36, iVar0) == 2)
		{
			Global_4456448.f_113490[iVar0].f_35 = unk_0xE082EE0DCA9466C4(iVar36, iVar0);
		}
		else
		{
			Global_4456448.f_113490[iVar0].f_35 = -1;
		}
		if (iVar34 != 0 && unk_0x3E932F23D327A136(iVar34, iVar0) == 2)
		{
			Global_4456448.f_113490[iVar0].f_33 = unk_0xE082EE0DCA9466C4(iVar34, iVar0);
		}
		else
		{
			Global_4456448.f_113490[iVar0].f_33 = 0;
		}
		if (iVar35 != 0 && unk_0x3E932F23D327A136(iVar35, iVar0) == 2)
		{
			Global_4456448.f_113490[iVar0].f_34 = unk_0xE082EE0DCA9466C4(iVar35, iVar0);
		}
		else
		{
			Global_4456448.f_113490[iVar0].f_34 = 0;
		}
		if (iVar35 != 0 && unk_0x3E932F23D327A136(iVar35, iVar0) == 2)
		{
			Global_4456448.f_113490[iVar0].f_34 = unk_0xE082EE0DCA9466C4(iVar35, iVar0);
		}
		else
		{
			Global_4456448.f_113490[iVar0].f_34 = 0;
		}
		if (iVar37 != 0 && unk_0x3E932F23D327A136(iVar37, iVar0) == 2)
		{
			Global_4456448.f_113490[iVar0].f_36 = unk_0xE082EE0DCA9466C4(iVar37, iVar0);
		}
		else
		{
			Global_4456448.f_113490[iVar0].f_36 = 0;
		}
		if (iVar38 != 0 && unk_0x3E932F23D327A136(iVar38, iVar0) == 2)
		{
			Global_4456448.f_113490[iVar0].f_37 = unk_0xE082EE0DCA9466C4(iVar38, iVar0);
		}
		else
		{
			Global_4456448.f_113490[iVar0].f_37 = 0;
		}
		if (iVar39 != 0 && unk_0x3E932F23D327A136(iVar39, iVar0) == 2)
		{
			Global_4456448.f_113490[iVar0].f_38 = unk_0xE082EE0DCA9466C4(iVar39, iVar0);
		}
		else
		{
			Global_4456448.f_113490[iVar0].f_38 = 0;
		}
		if (iVar40 != 0 && unk_0x3E932F23D327A136(iVar40, iVar0) == 2)
		{
			Global_4456448.f_113490[iVar0].f_39 = unk_0xE082EE0DCA9466C4(iVar40, iVar0);
		}
		else
		{
			Global_4456448.f_113490[iVar0].f_39 = -1;
		}
		if (iVar41 != 0 && unk_0x3E932F23D327A136(iVar41, iVar0) == 2)
		{
			Global_4456448.f_113490[iVar0].f_40.f_5 = unk_0xE082EE0DCA9466C4(iVar41, iVar0);
		}
		else if (func_273())
		{
			Global_4456448.f_113490[iVar0].f_40.f_5 = 0;
		}
		if (iVar42 != 0 && unk_0x3E932F23D327A136(iVar42, iVar0) == 2)
		{
			Global_4456448.f_113490[iVar0].f_40.f_2 = unk_0xE082EE0DCA9466C4(iVar42, iVar0);
		}
		else if (func_273())
		{
			Global_4456448.f_113490[iVar0].f_40.f_2 = 0;
		}
		if (iVar43 != 0)
		{
			if (unk_0x3E932F23D327A136(iVar43, iVar0) == 2)
			{
				Global_4456448.f_113490[iVar0].f_40.f_6 = to_float(unk_0xE082EE0DCA9466C4(iVar43, iVar0));
			}
			else
			{
				Global_4456448.f_113490[iVar0].f_40.f_6 = unk_0x73F91AA610E60211(iVar43, iVar0);
			}
		}
		else if (func_273())
		{
			Global_4456448.f_113490[iVar0].f_40.f_6 = 0f;
		}
		if (iVar44 != 0 && unk_0x3E932F23D327A136(iVar44, iVar0) == 3)
		{
			Global_4456448.f_113490[iVar0].f_40.f_7 = unk_0x73F91AA610E60211(iVar44, iVar0);
		}
		else if (func_273())
		{
			Global_4456448.f_113490[iVar0].f_40.f_7 = 0f;
		}
		if (iVar45 != 0 && unk_0x3E932F23D327A136(iVar45, iVar0) == 3)
		{
			Global_4456448.f_113490[iVar0].f_40.f_4 = unk_0x73F91AA610E60211(iVar45, iVar0);
		}
		else if (func_273())
		{
			Global_4456448.f_113490[iVar0].f_40.f_4 = 1f;
		}
		if (iVar46 != 0 && unk_0x3E932F23D327A136(iVar46, iVar0) == 2)
		{
			Global_4456448.f_113490[iVar0].f_40.f_8 = unk_0xE082EE0DCA9466C4(iVar46, iVar0);
		}
		else if (func_273())
		{
			Global_4456448.f_113490[iVar0].f_40.f_8 = 0;
		}
		if (iVar47 != 0 && unk_0x3E932F23D327A136(iVar47, iVar0) == 2)
		{
			Global_4456448.f_113490[iVar0].f_74 = unk_0xE082EE0DCA9466C4(iVar47, iVar0);
		}
		else
		{
			Global_4456448.f_113490[iVar0].f_74 = 0;
		}
		if (iVar48 != 0 && unk_0x3E932F23D327A136(iVar48, iVar0) == 2)
		{
			Global_4456448.f_113490[iVar0].f_75 = unk_0xE082EE0DCA9466C4(iVar48, iVar0);
		}
		else
		{
			Global_4456448.f_113490[iVar0].f_75 = 0;
		}
		if (iVar49 != 0 && unk_0x3E932F23D327A136(iVar49, iVar0) == 2)
		{
			Global_4456448.f_113490[iVar0].f_76 = unk_0xE082EE0DCA9466C4(iVar49, iVar0);
		}
		else
		{
			Global_4456448.f_113490[iVar0].f_76 = 0;
		}
		iVar2 = 0;
		while (iVar2 <= 19)
		{
			StringCopy(&sVar3, "1dpwb", 8);
			StringIntConCat(&sVar3, iVar2, 8);
			func_199(&sVar3, &(Global_4456448.f_113490[iVar0].f_77[iVar2]), &iVar5, &(uVar50[iVar2]), iVar0, 0, 0);
			iVar2++;
		}
		func_208(&(Global_4456448.f_113490[iVar0].f_63), iVar0, &iVar71, &iVar72);
		func_207(&(Global_4456448.f_113490[iVar0].f_63.f_2), iVar0, &iVar73, &iVar74, &iVar75, &iVar76, &iVar77, &iVar78, &iVar79, &iVar80, &iVar81);
		func_191("alvdpr", &(Global_4456448.f_113490[iVar0].f_98), 1, &iVar5, &uVar82, iVar0, 0, -2340845);
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_113490[iVar0].f_18, 6))
		{
			if (Global_4456448.f_113490[iVar0].f_7 == 1306601124)
			{
				Global_4456448.f_113490[iVar0].f_7 = -1233322078;
			}
		}
		iVar0++;
	}
	iVar109 = iVar0;
	if ((func_206() || Global_4456448 == 1) && !func_205())
	{
		iVar0 = 0;
		while (iVar0 <= (Global_4456448.f_78239 - 1))
		{
			Global_4456448.f_113490[iVar109] = { Global_4456448.f_78242[iVar0] };
			Global_4456448.f_113490[iVar109].f_3 = { Global_4456448.f_78242[iVar0].f_4 };
			Global_4456448.f_113490[iVar109].f_6 = Global_4456448.f_78242[iVar0].f_3;
			Global_4456448.f_113490[iVar109].f_8 = iVar0;
			Global_4456448.f_113490[iVar109].f_7 = -699955605;
			iVar110 = 0;
			while (iVar110 <= 3)
			{
				Global_4456448.f_78242[iVar109].f_16[iVar110] = 0;
				Global_4456448.f_78242[iVar109].f_21[iVar110] = 99999;
				iVar110++;
			}
			Global_4456448.f_113489++;
			Global_4456448.f_113488++;
			iVar109++;
			iVar0++;
		}
	}
}

bool func_205()
{
	if (unk_0xA14BB9332558B949())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 0);
	}
	return ((unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 0) || Global_1653478) && unk_0x8A22C4C08282BF26(-1518439287) > 0);
}

int func_206()
{
	if (Global_4456448 == 0 && Global_4456448.f_2 == 5)
	{
		return 1;
	}
	return 0;
}

void func_207(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1077936128;
	Var0.f_4 = 1082130432;
	Var0.f_5 = 1077936128;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	*uParam0 = { Var0 };
	if (*iParam2 != 0 && unk_0x3E932F23D327A136(*iParam2, iParam1) == 2)
	{
		*uParam0 = unk_0xE082EE0DCA9466C4(*iParam2, iParam1);
	}
	if (*iParam3 != 0 && unk_0x3E932F23D327A136(*iParam3, iParam1) == 3)
	{
		uParam0->f_1 = unk_0x73F91AA610E60211(*iParam3, iParam1);
	}
	if (*iParam4 != 0 && unk_0x3E932F23D327A136(*iParam4, iParam1) == 3)
	{
		uParam0->f_2 = unk_0x73F91AA610E60211(*iParam4, iParam1);
	}
	if (*iParam5 != 0 && unk_0x3E932F23D327A136(*iParam5, iParam1) == 3)
	{
		uParam0->f_3 = unk_0x73F91AA610E60211(*iParam5, iParam1);
	}
	if (*iParam6 != 0 && unk_0x3E932F23D327A136(*iParam6, iParam1) == 3)
	{
		uParam0->f_4 = unk_0x73F91AA610E60211(*iParam6, iParam1);
	}
	if (*iParam7 != 0 && unk_0x3E932F23D327A136(*iParam7, iParam1) == 3)
	{
		uParam0->f_5 = unk_0x73F91AA610E60211(*iParam7, iParam1);
	}
	if (*iParam8 != 0 && unk_0x3E932F23D327A136(*iParam8, iParam1) == 2)
	{
		uParam0->f_6 = unk_0xE082EE0DCA9466C4(*iParam8, iParam1);
	}
	if (*iParam9 != 0 && unk_0x3E932F23D327A136(*iParam9, iParam1) == 2)
	{
		uParam0->f_7 = unk_0xE082EE0DCA9466C4(*iParam9, iParam1);
	}
	if (*iParam10 != 0 && unk_0x3E932F23D327A136(*iParam10, iParam1) == 2)
	{
		uParam0->f_8 = unk_0xE082EE0DCA9466C4(*iParam10, iParam1);
	}
}

void func_208(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (*iParam2 != 0 && unk_0x3E932F23D327A136(*iParam2, iParam1) == 2)
	{
		*uParam0 = unk_0xE082EE0DCA9466C4(*iParam2, iParam1);
	}
	if (*iParam3 != 0 && unk_0x3E932F23D327A136(*iParam3, iParam1) == 2)
	{
		uParam0->f_1 = unk_0xE082EE0DCA9466C4(*iParam3, iParam1);
	}
}

int func_209(int iParam0)
{
	if (iParam0 == 1688773919)
	{
		return 1334699559;
	}
	if (iParam0 == -1234220885)
	{
		return -1350687226;
	}
	if (iParam0 == -930747176)
	{
		return -1572271204;
	}
	if (iParam0 == -1698655922)
	{
		return 335572745;
	}
	if (iParam0 == -1992528326)
	{
		return -155700103;
	}
	if (iParam0 == 509852852)
	{
		return 1051213133;
	}
	else if (iParam0 == 1212630005)
	{
		return -1359996601;
	}
	else if (iParam0 == -1135198622)
	{
		return -1061569318;
	}
	else if (iParam0 == 55777251)
	{
		return 1290523964;
	}
	else if (iParam0 == 662880068)
	{
		return 662880068;
	}
	else if (iParam0 == -1658282356)
	{
		return -1658282356;
	}
	if (iParam0 == 740207417)
	{
		return -802638361;
	}
	if (iParam0 == 273101167)
	{
		return 576435563;
	}
	if (iParam0 == -1059778192)
	{
		return 2009522536;
	}
	if (iParam0 == -1401479836)
	{
		return 341369303;
	}
	if ((unk_0x33A494591F2C1975() || unk_0xDC30EF462887322E()) || unk_0x0EFF6B4415DAF4A1())
	{
		if (iParam0 == -56302774)
		{
			return 887112569;
		}
		if (iParam0 == -1924165356)
		{
			return -593160806;
		}
		if (iParam0 == 1837927001)
		{
			return 1566353027;
		}
		if (iParam0 == -960602868)
		{
			return 11906616;
		}
		if (iParam0 == -72825120)
		{
			return -1705943745;
		}
		if (iParam0 == -713058190)
		{
			return -1656246279;
		}
	}
	else if (unk_0xA3F916BCE430ED26() || unk_0xBA301E03A078FA59())
	{
		if (iParam0 == 887112569)
		{
			return -56302774;
		}
		if (iParam0 == -593160806)
		{
			return -1924165356;
		}
		if (iParam0 == 1566353027)
		{
			return 1837927001;
		}
		if (iParam0 == 11906616)
		{
			return -960602868;
		}
		if (iParam0 == -1705943745)
		{
			return -72825120;
		}
		if (iParam0 == -1656246279)
		{
			return -713058190;
		}
	}
	func_210(&iParam0);
	return iParam0;
}

void func_210(int iParam0)
{
	if (*iParam0 == -1861812544)
	{
		*iParam0 = -1321831897;
	}
	else if (*iParam0 == -1851129850)
	{
		*iParam0 = -1551903046;
	}
	else if (*iParam0 == -1533303319)
	{
		*iParam0 = 1065258673;
	}
	else if (*iParam0 == -1186607299)
	{
		*iParam0 = 700605237;
	}
	else if (*iParam0 == -943821778)
	{
		*iParam0 = 471123930;
	}
	else if (*iParam0 == -1868489442)
	{
		*iParam0 = -1741076558;
	}
	else if (*iParam0 == 1308353333)
	{
		*iParam0 = -2024008538;
	}
	else if (*iParam0 == 1456915955)
	{
		*iParam0 = -890849815;
	}
	else if (*iParam0 == 1907350248)
	{
		*iParam0 = 1718413987;
	}
	else if (*iParam0 == 599363249)
	{
		*iParam0 = -1767460037;
	}
	else if (*iParam0 == 92066360)
	{
		*iParam0 = -222893230;
	}
	else if (*iParam0 == 828910094)
	{
		*iParam0 = -452636689;
	}
	else if (*iParam0 == 357986795)
	{
		*iParam0 = -2002118854;
	}
	else if (*iParam0 == -1652280004)
	{
		*iParam0 = 1083566403;
	}
	else if (*iParam0 == -1805969005)
	{
		*iParam0 = -1286676244;
	}
	else if (*iParam0 == 337086132)
	{
		*iParam0 = -409974974;
	}
	else if (*iParam0 == -19979547)
	{
		*iParam0 = 1025189064;
	}
	else if (*iParam0 == -1862711501)
	{
		*iParam0 = -1268640936;
	}
	else if (*iParam0 == 1372569558)
	{
		*iParam0 = -1645808307;
	}
	else if (*iParam0 == -1994641814)
	{
		*iParam0 = 1759775560;
	}
	else if (*iParam0 == 261612790)
	{
		*iParam0 = 1299320654;
	}
	else if (*iParam0 == -894411992)
	{
		*iParam0 = 1622422994;
	}
	else if (*iParam0 == 2075999603)
	{
		*iParam0 = -1326492089;
	}
	else if (*iParam0 == 1881752441)
	{
		*iParam0 = -1978941539;
	}
	else if (*iParam0 == -24901620)
	{
		*iParam0 = -495879211;
	}
	else if (*iParam0 == 262055884)
	{
		*iParam0 = 1525351980;
	}
	else if (*iParam0 == -677595155)
	{
		*iParam0 = 200009775;
	}
	else if (*iParam0 == 320802763)
	{
		*iParam0 = 1193068161;
	}
	else if (*iParam0 == 82867054)
	{
		*iParam0 = -608407618;
	}
	else if (*iParam0 == -147296475)
	{
		*iParam0 = 305931241;
	}
	else if (*iParam0 == 1993724063)
	{
		*iParam0 = 1009535984;
	}
	else if (*iParam0 == -1707006199)
	{
		*iParam0 = -849453683;
	}
	else if (*iParam0 == -322856868)
	{
		*iParam0 = 763427978;
	}
	else if (*iParam0 == 810174293)
	{
		*iParam0 = -1330654238;
	}
	else if (*iParam0 == -764155579)
	{
		*iParam0 = 1273598603;
	}
	else if (*iParam0 == -1016370941)
	{
		*iParam0 = -1987748241;
	}
	else if (*iParam0 == 1007762428)
	{
		*iParam0 = 1150626313;
	}
	else if (*iParam0 == -810402164)
	{
		*iParam0 = 237666878;
	}
	else if (*iParam0 == 1054513951)
	{
		*iParam0 = -610251599;
	}
	else if (*iParam0 == -1927050814)
	{
		*iParam0 = -290348651;
	}
	else if (*iParam0 == -471725193)
	{
		*iParam0 = 878002757;
	}
	else if (*iParam0 == -155668237)
	{
		*iParam0 = -645122215;
	}
	else if (*iParam0 == -724464858)
	{
		*iParam0 = 1234670647;
	}
	else if (*iParam0 == 2228859)
	{
		*iParam0 = 994062682;
	}
	else if (*iParam0 == 1802255136)
	{
		*iParam0 = -253263027;
	}
	else if (*iParam0 == -214062967)
	{
		*iParam0 = -155900879;
	}
	else if (*iParam0 == 631255219)
	{
		*iParam0 = 1432191448;
	}
	else if (*iParam0 == 1069667067)
	{
		*iParam0 = 2093615710;
	}
	else if (*iParam0 == 1900578634)
	{
		*iParam0 = -144319441;
	}
	else if (*iParam0 == 1484108471)
	{
		*iParam0 = -406550969;
	}
	else if (*iParam0 == 921491744)
	{
		*iParam0 = -1143189734;
	}
	else if (*iParam0 == -1818585231)
	{
		*iParam0 = -879484487;
	}
	else if (*iParam0 == -210764767)
	{
		*iParam0 = 1004376788;
	}
	else if (*iParam0 == 1211651983)
	{
		*iParam0 = 945042998;
	}
	else if (*iParam0 == -1974539354)
	{
		*iParam0 = 1986115955;
	}
	else if (*iParam0 == -832013963)
	{
		*iParam0 = -763220256;
	}
	else if (*iParam0 == 118315381)
	{
		*iParam0 = 345079398;
	}
	else if (*iParam0 == -8734659)
	{
		*iParam0 = -1234669519;
	}
	else if (*iParam0 == 2067905173)
	{
		*iParam0 = 1778873429;
	}
	else if (*iParam0 == -334932667)
	{
		*iParam0 = -800541451;
	}
	else if (*iParam0 == 2070963532)
	{
		*iParam0 = -147533446;
	}
	else if (*iParam0 == -687271813)
	{
		*iParam0 = 416662405;
	}
	else if (*iParam0 == 696455424)
	{
		*iParam0 = 2003536401;
	}
	else if (*iParam0 == -425898182)
	{
		*iParam0 = -1456099950;
	}
	else if (*iParam0 == -458535644)
	{
		*iParam0 = -354047108;
	}
	else if (*iParam0 == -937127205)
	{
		*iParam0 = -1621683992;
	}
	else if (*iParam0 == 1470014629)
	{
		*iParam0 = -414572043;
	}
	else if (*iParam0 == -1878093276)
	{
		*iParam0 = 1943154303;
	}
	else if (*iParam0 == 479937070)
	{
		*iParam0 = 1540592111;
	}
	else if (*iParam0 == 913119601)
	{
		*iParam0 = 713606805;
	}
	else if (*iParam0 == 912618411)
	{
		*iParam0 = 1143941287;
	}
	else if (*iParam0 == -695492201)
	{
		*iParam0 = 576435563;
	}
	else if (*iParam0 == 1477685997)
	{
		*iParam0 = 2009522536;
	}
	else if (*iParam0 == -1233037607)
	{
		*iParam0 = 341369303;
	}
	else if (*iParam0 == -1020580875)
	{
		*iParam0 = 1618436909;
	}
}

int func_211(int iParam0, int iParam1, int iParam2)
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

void func_212(int iParam0)
{
	iVar6 = unk_0x6D954AF55D3925DB(iParam0, "prop");
	Global_4456448.f_91960 = unk_0x8A83B52A17A321DB(iVar6, "no");
	iVar7 = unk_0x7619952D26DF7783(iVar6, "loc");
	iVar8 = unk_0x7619952D26DF7783(iVar6, "vRot");
	iVar9 = unk_0x7619952D26DF7783(iVar6, "head");
	iVar10 = unk_0x7619952D26DF7783(iVar6, "model");
	iVar11 = unk_0x7619952D26DF7783(iVar6, "asst");
	iVar12 = unk_0x7619952D26DF7783(iVar6, "asso");
	iVar13 = unk_0x7619952D26DF7783(iVar6, "asss");
	iVar14 = unk_0x7619952D26DF7783(iVar6, "pasc");
	iVar15 = unk_0x7619952D26DF7783(iVar6, "asst2");
	iVar16 = unk_0x7619952D26DF7783(iVar6, "asso2");
	iVar17 = unk_0x7619952D26DF7783(iVar6, "asss2");
	iVar18 = unk_0x7619952D26DF7783(iVar6, "pasc2");
	iVar19 = unk_0x7619952D26DF7783(iVar6, "asst3");
	iVar20 = unk_0x7619952D26DF7783(iVar6, "asso3");
	iVar21 = unk_0x7619952D26DF7783(iVar6, "asss3");
	iVar22 = unk_0x7619952D26DF7783(iVar6, "pasc3");
	iVar23 = unk_0x7619952D26DF7783(iVar6, "asst4");
	iVar24 = unk_0x7619952D26DF7783(iVar6, "asso4");
	iVar25 = unk_0x7619952D26DF7783(iVar6, "asss4");
	iVar26 = unk_0x7619952D26DF7783(iVar6, "pasc4");
	iVar27 = unk_0x7619952D26DF7783(iVar6, "bpbid");
	iVar28 = unk_0x7619952D26DF7783(iVar6, "bpbip");
	iVar29 = unk_0x7619952D26DF7783(iVar6, "bpbpt");
	iVar30 = unk_0x7619952D26DF7783(iVar6, "fcuat");
	iVar31 = unk_0x7619952D26DF7783(iVar6, "prpclcr");
	iVar32 = unk_0x7619952D26DF7783(iVar6, "prpclc");
	iVar33 = unk_0x7619952D26DF7783(iVar6, "aldel");
	iVar34 = unk_0x7619952D26DF7783(iVar6, "alsnd");
	iVar35 = unk_0x7619952D26DF7783(iVar6, "alteam");
	iVar36 = unk_0x7619952D26DF7783(iVar6, "flvfx");
	iVar37 = unk_0x7619952D26DF7783(iVar6, "flcl");
	iVar38 = unk_0x7619952D26DF7783(iVar6, "prpcl");
	iVar39 = unk_0x7619952D26DF7783(iVar6, "prplod");
	iVar40 = unk_0x7619952D26DF7783(iVar6, "prpatn");
	iVar41 = unk_0x7619952D26DF7783(iVar6, "prpasn");
	iVar42 = unk_0x7619952D26DF7783(iVar6, "prpclr");
	iVar43 = unk_0x7619952D26DF7783(iVar6, "prptsp");
	iVar44 = unk_0x7619952D26DF7783(iVar6, "prptds");
	iVar45 = unk_0x7619952D26DF7783(iVar6, "prpsba");
	iVar46 = unk_0x7619952D26DF7783(iVar6, "sndid");
	iVar47 = unk_0x7619952D26DF7783(iVar6, "sndtri");
	iVar48 = unk_0x7619952D26DF7783(iVar6, "sndlmt");
	iVar49 = unk_0x7619952D26DF7783(iVar6, "prpsnpp");
	iVar50 = unk_0x7619952D26DF7783(iVar6, "prpct");
	iVar51 = unk_0x7619952D26DF7783(iVar6, "prpcr");
	iVar52 = unk_0x7619952D26DF7783(iVar6, "prpbs2");
	iVar53 = unk_0x7619952D26DF7783(iVar6, "prcra");
	iVar54 = unk_0x7619952D26DF7783(iVar6, "prpbs");
	iVar55 = unk_0x7619952D26DF7783(iVar6, "prers");
	iVar56 = unk_0x7619952D26DF7783(iVar6, "ptfxtr");
	iVar57 = unk_0x7619952D26DF7783(iVar6, "ptfxst");
	iVar58 = unk_0x7619952D26DF7783(iVar6, "prrorc");
	iVar59 = unk_0x7619952D26DF7783(iVar6, "updatez");
	iVar60 = unk_0x7619952D26DF7783(iVar6, "updtime");
	iVar61 = unk_0x7619952D26DF7783(iVar6, "upddel");
	iVar62 = unk_0x7619952D26DF7783(iVar6, "pLODDist");
	iVar63 = unk_0x7619952D26DF7783(iVar6, "fwTPos");
	iVar64 = unk_0x7619952D26DF7783(iVar6, "fwTSize");
	iVar65 = unk_0x7619952D26DF7783(iVar6, "fwTeam");
	iVar66 = unk_0x7619952D26DF7783(iVar6, "TrTAct");
	iVar67 = unk_0x7619952D26DF7783(iVar6, "TrPPD");
	iVar68 = unk_0x7619952D26DF7783(iVar6, "prpdypil");
	iVar69 = unk_0x7619952D26DF7783(iVar6, "TTPH");
	iVar70 = unk_0x7619952D26DF7783(iVar6, "cusprpMn");
	iVar71 = unk_0x7619952D26DF7783(iVar6, "prppi");
	iVar72 = unk_0x7619952D26DF7783(iVar6, "prpsbt");
	iVar73 = unk_0x7619952D26DF7783(iVar6, "prpsgg");
	iVar74 = unk_0x7619952D26DF7783(iVar6, "prpssg");
	uVar96 = 1;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		StringCopy(&sVar4, "prpsdp", 8);
		StringIntConCat(&sVar4, iVar2, 8);
		iVar98[iVar2] = unk_0x7619952D26DF7783(iVar6, &sVar4);
		iVar2++;
	}
	iVar103 = unk_0x7619952D26DF7783(iVar6, "pdip");
	if (Global_4456448.f_91960 > 200)
	{
		Global_4456448.f_91960 = 200;
	}
	if (iVar70 != 0)
	{
		iVar2 = 0;
		while (iVar2 <= (unk_0x3C3D078CBB366B45(iVar70) - 1))
		{
			if (unk_0x3E932F23D327A136(iVar70, iVar2) == 2)
			{
				Global_4456448.f_233973[iVar2] = unk_0xE082EE0DCA9466C4(iVar70, iVar2);
				if (unk_0x468C1AC3ABF95C57(Global_4456448.f_233973[iVar2]))
				{
					Global_4456448.f_233994++;
				}
				else
				{
					Global_4456448.f_233973[iVar2] = 0;
				}
			}
			else
			{
				Global_4456448.f_233973[iVar2] = 0;
			}
			iVar2++;
		}
	}
	iVar104 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_91960 - 1))
	{
		Global_4456448.f_91961[iVar0] = { unk_0x6403E33233A20F75(iVar7, iVar0) };
		Global_4456448.f_91961[iVar0].f_3 = { unk_0x6403E33233A20F75(iVar8, iVar0) };
		Global_4456448.f_91961[iVar0].f_6 = unk_0x73F91AA610E60211(iVar9, iVar0);
		iVar1 = unk_0xE082EE0DCA9466C4(iVar10, iVar0);
		Global_4456448.f_91961[iVar0].f_7 = func_209(iVar1);
		if (Global_4456448.f_91961[iVar0].f_7 == -1170462683)
		{
			iVar104++;
			if (iVar104 > 15)
			{
				Global_4456448.f_91961[iVar0].f_7 = 1125864094;
			}
		}
		if (!unk_0x468C1AC3ABF95C57(Global_4456448.f_91961[iVar0].f_7))
		{
			Global_4456448.f_91961[iVar0].f_7 = 779917859;
		}
		if (Global_4456448.f_91961[iVar0].f_7 == 1494272245)
		{
			Global_4456448.f_91961[iVar0].f_7 = 1792175224;
		}
		if ((((!func_162() && Global_4456448.f_197286 == 0) && unk_0x468C1AC3ABF95C57(Global_4456448.f_91961[iVar0].f_7)) && !Global_262145.f_18803) && !func_217())
		{
			if (func_216(Global_4456448.f_91961[iVar0].f_7))
			{
				Global_4456448.f_91961[iVar0].f_7 = 779917859;
			}
		}
		if (!func_215() && func_214(Global_4456448.f_91961[iVar0].f_7))
		{
			Global_4456448.f_91961[iVar0].f_7 = 779917859;
		}
		Global_4456448.f_91961[iVar0].f_9 = unk_0xE082EE0DCA9466C4(iVar11, iVar0);
		Global_4456448.f_91961[iVar0].f_8 = unk_0xE082EE0DCA9466C4(iVar12, iVar0);
		Global_4456448.f_91961[iVar0].f_10 = unk_0xE082EE0DCA9466C4(iVar13, iVar0);
		if (Global_4456448.f_91961[iVar0].f_10 == -1)
		{
			Global_4456448.f_91961[iVar0].f_10 = 0;
		}
		if (iVar27 != 0 && unk_0x3E932F23D327A136(iVar27, iVar0) == 1)
		{
			Global_4456448.f_91961[iVar0].f_56 = unk_0x6A09C1EE250C8CE7(iVar27, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_56 = 0;
		}
		if (iVar28 != 0 && unk_0x3E932F23D327A136(iVar28, iVar0) == 1)
		{
			Global_4456448.f_91961[iVar0].f_57 = unk_0x6A09C1EE250C8CE7(iVar28, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_57 = 0;
		}
		if (iVar29 != 0 && unk_0x3E932F23D327A136(iVar29, iVar0) == 2)
		{
			Global_4456448.f_91961[iVar0].f_58 = unk_0xE082EE0DCA9466C4(iVar29, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_58 = 0;
		}
		Global_4456448.f_91961[iVar0].f_59 = unk_0xE082EE0DCA9466C4(iVar30, iVar0);
		Global_4456448.f_91961[iVar0].f_69 = unk_0xE082EE0DCA9466C4(iVar31, iVar0);
		if (iVar32 != 0 && unk_0x3E932F23D327A136(iVar32, iVar0) == 2)
		{
			Global_4456448.f_91961[iVar0].f_70 = unk_0xE082EE0DCA9466C4(iVar32, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_70 = -1;
		}
		if (iVar15 != 0 && unk_0x3E932F23D327A136(iVar15, iVar0) == 2)
		{
			Global_4456448.f_91961[iVar0].f_39 = unk_0xE082EE0DCA9466C4(iVar15, iVar0);
			Global_4456448.f_91961[iVar0].f_42 = unk_0xE082EE0DCA9466C4(iVar16, iVar0);
			Global_4456448.f_91961[iVar0].f_45 = unk_0xE082EE0DCA9466C4(iVar17, iVar0);
			Global_4456448.f_91961[iVar0].f_40 = unk_0xE082EE0DCA9466C4(iVar19, iVar0);
			Global_4456448.f_91961[iVar0].f_43 = unk_0xE082EE0DCA9466C4(iVar20, iVar0);
			Global_4456448.f_91961[iVar0].f_46 = unk_0xE082EE0DCA9466C4(iVar21, iVar0);
			Global_4456448.f_91961[iVar0].f_41 = unk_0xE082EE0DCA9466C4(iVar23, iVar0);
			Global_4456448.f_91961[iVar0].f_44 = unk_0xE082EE0DCA9466C4(iVar24, iVar0);
			Global_4456448.f_91961[iVar0].f_47 = unk_0xE082EE0DCA9466C4(iVar25, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_42 = -1;
			Global_4456448.f_91961[iVar0].f_39 = 0;
			Global_4456448.f_91961[iVar0].f_45 = 0;
			Global_4456448.f_91961[iVar0].f_43 = -1;
			Global_4456448.f_91961[iVar0].f_40 = 0;
			Global_4456448.f_91961[iVar0].f_46 = 0;
			Global_4456448.f_91961[iVar0].f_44 = -1;
			Global_4456448.f_91961[iVar0].f_41 = 0;
			Global_4456448.f_91961[iVar0].f_47 = 0;
		}
		if (iVar14 != 0 && unk_0x3E932F23D327A136(iVar14, iVar0) == 2)
		{
			Global_4456448.f_91961[iVar0].f_11 = unk_0xE082EE0DCA9466C4(iVar14, iVar0);
			Global_4456448.f_91961[iVar0].f_48 = unk_0xE082EE0DCA9466C4(iVar18, iVar0);
			Global_4456448.f_91961[iVar0].f_49 = unk_0xE082EE0DCA9466C4(iVar22, iVar0);
			Global_4456448.f_91961[iVar0].f_50 = unk_0xE082EE0DCA9466C4(iVar26, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_11 = 0;
			Global_4456448.f_91961[iVar0].f_48 = 0;
			Global_4456448.f_91961[iVar0].f_49 = 0;
			Global_4456448.f_91961[iVar0].f_50 = 0;
		}
		Global_4456448.f_91961[iVar0].f_12 = unk_0xE082EE0DCA9466C4(iVar33, iVar0);
		if (Global_4456448.f_91961[iVar0].f_7 != -1611832715)
		{
			if (Global_4456448.f_91961[iVar0].f_12 > 0 && Global_4456448.f_91961[iVar0].f_12 < 1000)
			{
				Global_4456448.f_91961[iVar0].f_12 = func_213(Global_4456448.f_91961[iVar0].f_12);
			}
		}
		Global_4456448.f_91961[iVar0].f_13 = unk_0xE082EE0DCA9466C4(iVar34, iVar0);
		Global_4456448.f_91961[iVar0].f_14 = unk_0xE082EE0DCA9466C4(iVar35, iVar0);
		Global_4456448.f_91961[iVar0].f_15 = unk_0xE082EE0DCA9466C4(iVar36, iVar0);
		Global_4456448.f_91961[iVar0].f_16 = unk_0xE082EE0DCA9466C4(iVar37, iVar0);
		Global_4456448.f_91961[iVar0].f_17 = unk_0xE082EE0DCA9466C4(iVar38, iVar0);
		Global_4456448.f_91961[iVar0].f_34 = unk_0x73F91AA610E60211(iVar43, iVar0);
		Global_4456448.f_91961[iVar0].f_35 = unk_0x73F91AA610E60211(iVar44, iVar0);
		Global_4456448.f_91961[iVar0].f_36 = unk_0xE082EE0DCA9466C4(iVar45, iVar0);
		Global_4456448.f_91961[iVar0].f_60 = unk_0xE082EE0DCA9466C4(iVar46, iVar0);
		Global_4456448.f_91961[iVar0].f_61 = unk_0xE082EE0DCA9466C4(iVar47, iVar0);
		Global_4456448.f_91961[iVar0].f_63 = unk_0xE082EE0DCA9466C4(iVar48, iVar0);
		if (iVar39 != 0 && unk_0x3E932F23D327A136(iVar39, iVar0) == 2)
		{
			Global_4456448.f_91961[iVar0].f_24 = unk_0xE082EE0DCA9466C4(iVar39, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_24 = -1;
		}
		if (iVar40 != 0 && unk_0x3E932F23D327A136(iVar40, iVar0) == 2)
		{
			Global_4456448.f_91961[iVar0].f_25 = unk_0xE082EE0DCA9466C4(iVar40, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_25 = 0;
		}
		if (iVar41 != 0 && unk_0x3E932F23D327A136(iVar41, iVar0) == 2)
		{
			Global_4456448.f_91961[iVar0].f_26 = unk_0xE082EE0DCA9466C4(iVar41, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_26 = 0;
		}
		if (iVar42 != 0 && unk_0x3E932F23D327A136(iVar42, iVar0) == 2)
		{
			Global_4456448.f_91961[iVar0].f_27 = unk_0xE082EE0DCA9466C4(iVar42, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_27 = 1;
		}
		if (iVar43 != 0 && unk_0x3E932F23D327A136(iVar43, iVar0) == 3)
		{
			Global_4456448.f_91961[iVar0].f_34 = unk_0x73F91AA610E60211(iVar43, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_34 = 0f;
		}
		if (iVar44 != 0 && unk_0x3E932F23D327A136(iVar44, iVar0) == 3)
		{
			Global_4456448.f_91961[iVar0].f_35 = unk_0x73F91AA610E60211(iVar44, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_35 = 0,4f;
		}
		if (unk_0xE082EE0DCA9466C4(iVar45, iVar0) > 5)
		{
			if (unk_0xE082EE0DCA9466C4(iVar45, iVar0) == 15)
			{
				Global_4456448.f_91961[iVar0].f_36 = 1;
			}
			if (unk_0xE082EE0DCA9466C4(iVar45, iVar0) == 25)
			{
				Global_4456448.f_91961[iVar0].f_36 = 2;
			}
			if (unk_0xE082EE0DCA9466C4(iVar45, iVar0) == 35)
			{
				Global_4456448.f_91961[iVar0].f_36 = 3;
			}
			if (unk_0xE082EE0DCA9466C4(iVar45, iVar0) == 45)
			{
				Global_4456448.f_91961[iVar0].f_36 = 4;
			}
			if (unk_0xE082EE0DCA9466C4(iVar45, iVar0) == 55)
			{
				Global_4456448.f_91961[iVar0].f_36 = 5;
			}
			if (unk_0xE082EE0DCA9466C4(iVar45, iVar0) == 16)
			{
				Global_4456448.f_91961[iVar0].f_36 = 3;
			}
			if (unk_0xE082EE0DCA9466C4(iVar45, iVar0) == 30)
			{
				Global_4456448.f_91961[iVar0].f_36 = 2;
			}
			if (unk_0xE082EE0DCA9466C4(iVar45, iVar0) == 44)
			{
				Global_4456448.f_91961[iVar0].f_36 = 1;
			}
		}
		else if (iVar45 != 0 && unk_0x3E932F23D327A136(iVar45, iVar0) == 2)
		{
			Global_4456448.f_91961[iVar0].f_36 = unk_0xE082EE0DCA9466C4(iVar45, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_36 = 2;
		}
		if (iVar46 != 0 && unk_0x3E932F23D327A136(iVar46, iVar0) == 2)
		{
			Global_4456448.f_91961[iVar0].f_60 = unk_0xE082EE0DCA9466C4(iVar46, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_60 = 0;
		}
		if (iVar47 != 0 && unk_0x3E932F23D327A136(iVar47, iVar0) == 2)
		{
			Global_4456448.f_91961[iVar0].f_61 = unk_0xE082EE0DCA9466C4(iVar47, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_61 = 0;
		}
		if (iVar48 != 0 && unk_0x3E932F23D327A136(iVar48, iVar0) == 2)
		{
			Global_4456448.f_91961[iVar0].f_63 = unk_0xE082EE0DCA9466C4(iVar48, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_63 = 0;
		}
		if (iVar49 != 0 && unk_0x3E932F23D327A136(iVar49, iVar0) == 2)
		{
			Global_4456448.f_91961[iVar0].f_28 = unk_0xE082EE0DCA9466C4(iVar49, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_28 = 0;
		}
		if (iVar56 != 0 && unk_0x3E932F23D327A136(iVar56, iVar0) == 3)
		{
			Global_4456448.f_91961[iVar0].f_37 = unk_0x73F91AA610E60211(iVar56, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_37 = 0f;
		}
		if (iVar51 != 0 && unk_0x3E932F23D327A136(iVar51, iVar0) == 2)
		{
			Global_4456448.f_91961[iVar0].f_18 = unk_0xE082EE0DCA9466C4(iVar51, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_18 = -1;
		}
		if (iVar50 != 0 && unk_0x3E932F23D327A136(iVar50, iVar0) == 2)
		{
			Global_4456448.f_91961[iVar0].f_19 = unk_0xE082EE0DCA9466C4(iVar50, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_19 = -1;
		}
		if (iVar53 != 0 && unk_0x3E932F23D327A136(iVar53, iVar0) == 2)
		{
			Global_4456448.f_91961[iVar0].f_20 = unk_0xE082EE0DCA9466C4(iVar53, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_20 = -1;
		}
		Global_4456448.f_91961[iVar0].f_21 = unk_0xE082EE0DCA9466C4(iVar54, iVar0);
		Global_4456448.f_91961[iVar0].f_22 = unk_0xE082EE0DCA9466C4(iVar52, iVar0);
		if (iVar57 != 0 && unk_0x3E932F23D327A136(iVar57, iVar0) == 2)
		{
			Global_4456448.f_91961[iVar0].f_38 = unk_0xE082EE0DCA9466C4(iVar57, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_38 = 0;
		}
		if (iVar58 != 0 && unk_0x3E932F23D327A136(iVar58, iVar0) == 2)
		{
			Global_4456448.f_91961[iVar0].f_67 = unk_0xE082EE0DCA9466C4(iVar58, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_67 = 0;
		}
		Global_4456448.f_91961[iVar0].f_23 = unk_0xE082EE0DCA9466C4(iVar55, iVar0);
		if (iVar59 != 0 && unk_0x3E932F23D327A136(iVar59, iVar0) == 3)
		{
			Global_4456448.f_91961[iVar0].f_52 = unk_0x73F91AA610E60211(iVar59, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_52 = -1f;
		}
		if (iVar60 != 0 && unk_0x3E932F23D327A136(iVar60, iVar0) == 2)
		{
			Global_4456448.f_91961[iVar0].f_53 = unk_0xE082EE0DCA9466C4(iVar60, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_53 = 0;
		}
		if (iVar61 != 0 && unk_0x3E932F23D327A136(iVar61, iVar0) == 2)
		{
			Global_4456448.f_91961[iVar0].f_54 = unk_0xE082EE0DCA9466C4(iVar61, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_54 = 0;
		}
		if (iVar62 != 0 && unk_0x3E932F23D327A136(iVar62, iVar0) == 2)
		{
			Global_4456448.f_91961[iVar0].f_55 = unk_0xE082EE0DCA9466C4(iVar62, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_55 = 0;
		}
		if (iVar63 != 0 && unk_0x3E932F23D327A136(iVar63, iVar0) == 5)
		{
			Global_4456448.f_91961[iVar0].f_71 = { unk_0x6403E33233A20F75(iVar63, iVar0) };
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_71 = { 0f, 0f, 0f };
		}
		if (iVar64 != 0 && unk_0x3E932F23D327A136(iVar64, iVar0) == 3)
		{
			Global_4456448.f_91961[iVar0].f_74 = unk_0x73F91AA610E60211(iVar64, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_74 = 0f;
		}
		if (iVar65 != 0 && unk_0x3E932F23D327A136(iVar65, iVar0) == 2)
		{
			Global_4456448.f_91961[iVar0].f_75 = unk_0xE082EE0DCA9466C4(iVar65, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_75 = 0;
		}
		if (iVar66 != 0 && unk_0x3E932F23D327A136(iVar66, iVar0) == 2)
		{
			Global_4456448.f_91961[iVar0].f_76 = unk_0xE082EE0DCA9466C4(iVar66, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_76 = -1;
		}
		if (iVar67 != 0 && unk_0x3E932F23D327A136(iVar67, iVar0) == 3)
		{
			Global_4456448.f_91961[iVar0].f_77 = unk_0x73F91AA610E60211(iVar67, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_77 = 0f;
		}
		if (iVar69 != 0 && unk_0x3E932F23D327A136(iVar69, iVar0) == 3)
		{
			Global_4456448.f_91961[iVar0].f_78 = unk_0x73F91AA610E60211(iVar69, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_78 = 0f;
		}
		if (iVar68 != 0 && unk_0x3E932F23D327A136(iVar68, iVar0) == 2)
		{
			Global_4456448.f_91961[iVar0].f_79 = unk_0xE082EE0DCA9466C4(iVar68, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_79 = -1;
		}
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			if (iVar98[iVar2] != 0 && unk_0x3E932F23D327A136(iVar98[iVar2], iVar0) == 2)
			{
				Global_4456448.f_91961[iVar0].f_29[iVar2] = unk_0xE082EE0DCA9466C4(iVar98[iVar2], iVar0);
			}
			else
			{
				Global_4456448.f_91961[iVar0].f_29[iVar2] = -1;
			}
			iVar2++;
		}
		Global_4456448.f_91961[iVar0].f_66 = unk_0xE082EE0DCA9466C4(iVar103, iVar0);
		if (iVar71 != 0 && unk_0x3E932F23D327A136(iVar71, iVar0) == 2)
		{
			Global_4456448.f_91961[iVar0].f_80 = unk_0xE082EE0DCA9466C4(iVar71, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_80 = -1;
		}
		if (iVar72 != 0 && unk_0x3E932F23D327A136(iVar72, iVar0) == 2)
		{
			Global_4456448.f_91961[iVar0].f_81 = unk_0xE082EE0DCA9466C4(iVar72, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_81 = 0;
		}
		if (iVar73 != 0 && unk_0x3E932F23D327A136(iVar73, iVar0) == 2)
		{
			Global_4456448.f_91961[iVar0].f_82 = unk_0xE082EE0DCA9466C4(iVar73, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_82 = 0;
		}
		if (iVar74 != 0 && unk_0x3E932F23D327A136(iVar74, iVar0) == 2)
		{
			Global_4456448.f_91961[iVar0].f_83 = unk_0xE082EE0DCA9466C4(iVar74, iVar0);
		}
		else
		{
			Global_4456448.f_91961[iVar0].f_83 = 0;
		}
		iVar3 = 0;
		while (iVar3 <= 19)
		{
			StringCopy(&sVar4, "1rwb", 8);
			StringIntConCat(&sVar4, iVar3, 8);
			func_199(&sVar4, &(Global_4456448.f_91961[iVar0].f_84[iVar3]), &iVar6, &(uVar75[iVar3]), iVar0, 0, 0);
			iVar3++;
		}
		func_191("alvprop", &(Global_4456448.f_91961[iVar0].f_105), 1, &iVar6, &uVar96, iVar0, 0, -2340845);
		iVar0++;
	}
}

int func_213(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 5000;
		
		case 2:
			return 10000;
		
		case 3:
			return 20000;
		
		case 4:
			return 30000;
		
		case 5:
			return 45000;
		
		case 6:
			return 60000;
		
		default:
	}
	return 0;
}

int func_214(int iParam0)
{
	if (((iParam0 == -1320743420 || iParam0 == -1456099950) || iParam0 == 830641441) || iParam0 == 713606805)
	{
		return 1;
	}
	return 0;
}

bool func_215()
{
	return Global_4456448 == 2;
}

int func_216(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == 267648181 || iParam0 == -1485006268) || iParam0 == -877963371) || iParam0 == 145818549) || iParam0 == 160663734) || iParam0 == -350795026) || iParam0 == -1901227524) || iParam0 == 1813008354) || iParam0 == 279288106) || iParam0 == -1630952580) || iParam0 == 439340726) || iParam0 == -1913970053) || iParam0 == -1239742687) || iParam0 == 1753330262) || iParam0 == -1600413027) || iParam0 == 1408345510) || iParam0 == 1226543098) || iParam0 == 2001562717) || iParam0 == 834288467) || iParam0 == 10819938) || iParam0 == 370845653) || iParam0 == 778004626) || iParam0 == 1378673294) || iParam0 == 1572208841) || iParam0 == -2071229766) || iParam0 == 301970060) || iParam0 == 1088428993) || iParam0 == -2002895309) || iParam0 == 769923921) || iParam0 == -1941093436) || iParam0 == 1644490552) || iParam0 == 1228163930) || iParam0 == -82704061) || iParam0 == -893826075) || iParam0 == -1906772306) || iParam0 == 1325339411) || iParam0 == 1729911864) || iParam0 == 1060029110) || iParam0 == -1999188639) || iParam0 == 2057223314) || iParam0 == 1257886169) || iParam0 == 1925170211) || iParam0 == -1611832715) || iParam0 == -1305574636) || iParam0 == -1937495485) || iParam0 == 869398406) || iParam0 == -170277480) || iParam0 == -1267801772) || iParam0 == -1876506235) || iParam0 == -711724000) || iParam0 == -1747937636) || iParam0 == 866201454) || iParam0 == 642960345) || iParam0 == -898971071) || iParam0 == 118340176) || iParam0 == 661161633) || iParam0 == 1908860740) || iParam0 == 2095169631) || iParam0 == -549235179) || iParam0 == -502202673) || iParam0 == 1723871309) || iParam0 == 630616933) || iParam0 == -1670377315) || iParam0 == 228356856) || iParam0 == 497099277) || iParam0 == 794936718) || iParam0 == 1116990450) || iParam0 == 1430330160) || iParam0 == 1736425389) || iParam0 == -2104487973) || iParam0 == 93927950) || iParam0 == 446151074) || iParam0 == 970414739) || iParam0 == -1187930949) || iParam0 == -278591439) || iParam0 == -403635899) || iParam0 == 443999472) || iParam0 == -840425311) || iParam0 == -490398359) || iParam0 == 1171791475) || iParam0 == -1592077865) || iParam0 == -1494923144) || iParam0 == -863733544) || iParam0 == -955159266) || iParam0 == -1673979170) || iParam0 == 34120519) || iParam0 == 949702051) || iParam0 == -1835862541) || iParam0 == -1604087404) || iParam0 == -1251067775) || iParam0 == -2025890780) || iParam0 == 170995043) || iParam0 == -126973474) || iParam0 == 1726113796) || iParam0 == 890176606) || iParam0 == 249707472) || iParam0 == -1737968014) || iParam0 == -986153641) || iParam0 == 1171954070) || iParam0 == 726001049) || iParam0 == -239044249) || iParam0 == -556906753) || iParam0 == -2063295939) || iParam0 == -758434067) || iParam0 == 346059280) || iParam0 == -613679208) || iParam0 == 620582592) || iParam0 == 1464908646) || iParam0 == 85342060) || iParam0 == -215444591) || iParam0 == 483832101) || iParam0 == -176168332) || iParam0 == 930976262) || iParam0 == 1721462849) || iParam0 == 1677872320) || iParam0 == 320088805) || iParam0 == 708828172) || iParam0 == 950795200) || iParam0 == -1260656854) || iParam0 == -1875404158) || iParam0 == -864804458) || iParam0 == -1302470386) || iParam0 == 1518201148) || iParam0 == 384852939) || iParam0 == 145606470) || iParam0 == 117169896) || iParam0 == -1479958115) || iParam0 == -797462923) || iParam0 == -1222840593) || iParam0 == -82066709) || iParam0 == -79943355) || iParam0 == -1601827676) || iParam0 == 1228139077) || iParam0 == -167276853) || iParam0 == -2003082453) || iParam0 == 2086345420) || iParam0 == -180282443) || iParam0 == 1137700900) || iParam0 == -685641702) || iParam0 == -1375953456) || iParam0 == 588352126) || iParam0 == -320283514) || iParam0 == -999358909) || iParam0 == -433831507) || iParam0 == 1781931203) || iParam0 == 1008841074) || iParam0 == -2008585441) || iParam0 == 750871581) || iParam0 == 2053081365) || iParam0 == -1380307642) || iParam0 == 1652902381) || iParam0 == -1609352586) || iParam0 == 1439850907) || iParam0 == -1400977746) || iParam0 == -1747937636) || iParam0 == 830641441) || iParam0 == -1320743420) || iParam0 == -1321831897) || iParam0 == -1551903046) || iParam0 == 1065258673) || iParam0 == 700605237) || iParam0 == 471123930) || iParam0 == 576435563) || iParam0 == 2009522536) || iParam0 == 341369303) || iParam0 == 1618436909) || iParam0 == 290077334) || iParam0 == -1423791356) || iParam0 == 729375392) || iParam0 == -1869469406) || iParam0 == -1550455353) || iParam0 == 693540832) || iParam0 == 1675934186) || iParam0 == -1355977550) || iParam0 == 1875109344)
	{
		return 1;
	}
	return 0;
}

int func_217()
{
	if (Global_4456448.f_197286 == 1 || Global_4456448.f_197286 == 2)
	{
		return 1;
	}
	return 0;
}

void func_218(int iParam0)
{
	iVar6 = unk_0x6D954AF55D3925DB(iParam0, "veh");
	Global_4456448.f_124061 = unk_0x8A83B52A17A321DB(iVar6, "no");
	Global_4456448.f_124062 = unk_0x8A83B52A17A321DB(iVar6, "time");
	Global_4456448.f_124063 = unk_0x8A83B52A17A321DB(iVar6, "pal");
	iVar7 = unk_0x6D954AF55D3925DB(iParam0, "vhrls");
	if (iVar7 != 0)
	{
		iVar3 = 0;
		while (iVar3 <= (Global_4456448.f_206 - 1))
		{
			iVar0 = 0;
			while (iVar0 <= (Global_4456448.f_271[iVar3].f_59 - 1))
			{
				StringCopy(&sVar4, "vhr", 8);
				StringIntConCat(&sVar4, iVar0, 8);
				StringIntConCat(&sVar4, iVar3, 8);
				Global_4456448.f_134791[iVar0][iVar3] = unk_0x8A83B52A17A321DB(iVar7, &sVar4);
				StringCopy(&sVar4, "vrs", 8);
				StringIntConCat(&sVar4, iVar0, 8);
				StringIntConCat(&sVar4, iVar3, 8);
				Global_4456448.f_63215[iVar0][iVar3] = unk_0x8A83B52A17A321DB(iVar7, &sVar4);
				StringCopy(&sVar4, "rkt", 8);
				StringIntConCat(&sVar4, iVar0, 8);
				StringIntConCat(&sVar4, iVar3, 8);
				if (unk_0xAE496C664AE89A9C(iVar7, &sVar4) == 2)
				{
					Global_4456448.f_63301[iVar0][iVar3] = unk_0x8A83B52A17A321DB(iVar7, &sVar4);
				}
				else
				{
					Global_4456448.f_63301[iVar0][iVar3] = 0;
				}
				StringCopy(&sVar4, "bst", 8);
				StringIntConCat(&sVar4, iVar0, 8);
				StringIntConCat(&sVar4, iVar3, 8);
				if (unk_0xAE496C664AE89A9C(iVar7, &sVar4) == 2)
				{
					Global_4456448.f_63387[iVar0][iVar3] = unk_0x8A83B52A17A321DB(iVar7, &sVar4);
				}
				else
				{
					Global_4456448.f_63387[iVar0][iVar3] = 0;
				}
				StringCopy(&sVar4, "rpr", 8);
				StringIntConCat(&sVar4, iVar0, 8);
				StringIntConCat(&sVar4, iVar3, 8);
				if (unk_0xAE496C664AE89A9C(iVar7, &sVar4) == 2)
				{
					Global_4456448.f_63473[iVar0][iVar3] = unk_0x8A83B52A17A321DB(iVar7, &sVar4);
				}
				else
				{
					Global_4456448.f_63473[iVar0][iVar3] = 0;
				}
				StringCopy(&sVar4, "spk", 8);
				StringIntConCat(&sVar4, iVar0, 8);
				StringIntConCat(&sVar4, iVar3, 8);
				if (unk_0xAE496C664AE89A9C(iVar7, &sVar4) == 2)
				{
					Global_4456448.f_63559[iVar0][iVar3] = unk_0x8A83B52A17A321DB(iVar7, &sVar4);
				}
				else
				{
					Global_4456448.f_63559[iVar0][iVar3] = 0;
				}
				StringCopy(&sVar4, "tmr", 8);
				StringIntConCat(&sVar4, iVar0, 8);
				StringIntConCat(&sVar4, iVar3, 8);
				if (unk_0xAE496C664AE89A9C(iVar7, &sVar4) == 2)
				{
					Global_4456448.f_63645[iVar0][iVar3] = unk_0x8A83B52A17A321DB(iVar7, &sVar4);
				}
				else
				{
					Global_4456448.f_63645[iVar0][iVar3] = 1500;
				}
				StringCopy(&sVar4, "bsd", 8);
				StringIntConCat(&sVar4, iVar0, 8);
				StringIntConCat(&sVar4, iVar3, 8);
				if (unk_0xAE496C664AE89A9C(iVar7, &sVar4) == 2)
				{
					Global_4456448.f_63731[iVar0][iVar3] = unk_0x8A83B52A17A321DB(iVar7, &sVar4);
				}
				else
				{
					Global_4456448.f_63731[iVar0][iVar3] = 1400;
				}
				StringCopy(&sVar4, "bss", 8);
				StringIntConCat(&sVar4, iVar0, 8);
				StringIntConCat(&sVar4, iVar3, 8);
				if (unk_0xAE496C664AE89A9C(iVar7, &sVar4) == 2)
				{
					Global_4456448.f_63817[iVar0][iVar3] = unk_0x8A83B52A17A321DB(iVar7, &sVar4);
				}
				else
				{
					Global_4456448.f_63817[iVar0][iVar3] = 35;
				}
				iVar0++;
			}
			iVar3++;
		}
	}
	iVar8 = unk_0x7619952D26DF7783(iVar6, "loc");
	iVar9 = unk_0x7619952D26DF7783(iVar6, "head");
	iVar17 = unk_0x7619952D26DF7783(iVar6, "model");
	iVar18 = unk_0x7619952D26DF7783(iVar6, "col");
	iVar19 = unk_0x7619952D26DF7783(iVar6, "rsp");
	uVar321 = 1;
	Var323.f_10 = 4;
	Var323.f_15 = 4;
	Var323.f_20 = 4;
	iVar41 = unk_0x7619952D26DF7783(iVar6, "rot");
	iVar42 = unk_0x7619952D26DF7783(iVar6, "liv");
	iVar55 = unk_0x7619952D26DF7783(iVar6, "vmodtur");
	iVar56 = unk_0x7619952D26DF7783(iVar6, "vmodarm");
	iVar57 = unk_0x7619952D26DF7783(iVar6, "vmodairc");
	iVar58 = unk_0x7619952D26DF7783(iVar6, "vmodBomb");
	iVar59 = unk_0x7619952D26DF7783(iVar6, "vmodspoil");
	iVar61 = unk_0x7619952D26DF7783(iVar6, "hlth");
	iVar78 = unk_0x7619952D26DF7783(iVar6, "drbs");
	iVar79 = unk_0x7619952D26DF7783(iVar6, "vbs2");
	iVar80 = unk_0x7619952D26DF7783(iVar6, "vbs3");
	iVar81 = unk_0x7619952D26DF7783(iVar6, "vbs4");
	iVar82 = unk_0x7619952D26DF7783(iVar6, "vbs5");
	iVar83 = unk_0x7619952D26DF7783(iVar6, "vbs6");
	iVar84 = unk_0x7619952D26DF7783(iVar6, "vbs7");
	iVar85 = unk_0x7619952D26DF7783(iVar6, "vbs8");
	if (func_135(1))
	{
		iVar10 = unk_0x7619952D26DF7783(iVar6, "vrr");
		iVar11 = unk_0x7619952D26DF7783(iVar6, "vrmr");
		iVar12 = unk_0x7619952D26DF7783(iVar6, "vsnt");
		iVar13 = unk_0x7619952D26DF7783(iVar6, "vsnei");
		iVar14 = unk_0x7619952D26DF7783(iVar6, "v2sp");
		iVar15 = unk_0x7619952D26DF7783(iVar6, "v2sh");
		iVar16 = unk_0x7619952D26DF7783(iVar6, "v2si");
		iVar20 = unk_0x7619952D26DF7783(iVar6, "objt");
		iVar21 = unk_0x7619952D26DF7783(iVar6, "team");
		iVar22 = unk_0x7619952D26DF7783(iVar6, "spwn");
		iVar23 = unk_0x7619952D26DF7783(iVar6, "spsrc");
		iVar24 = unk_0x7619952D26DF7783(iVar6, "spasr");
		iVar25 = unk_0x7619952D26DF7783(iVar6, "objt2");
		iVar26 = unk_0x7619952D26DF7783(iVar6, "team2");
		iVar27 = unk_0x7619952D26DF7783(iVar6, "spwn2");
		iVar28 = unk_0x7619952D26DF7783(iVar6, "spsrc2");
		iVar29 = unk_0x7619952D26DF7783(iVar6, "spasr2");
		iVar30 = unk_0x7619952D26DF7783(iVar6, "objt3");
		iVar31 = unk_0x7619952D26DF7783(iVar6, "team3");
		iVar32 = unk_0x7619952D26DF7783(iVar6, "spwn3");
		iVar33 = unk_0x7619952D26DF7783(iVar6, "spsrc3");
		iVar34 = unk_0x7619952D26DF7783(iVar6, "spasr3");
		iVar35 = unk_0x7619952D26DF7783(iVar6, "objt4");
		iVar36 = unk_0x7619952D26DF7783(iVar6, "team4");
		iVar37 = unk_0x7619952D26DF7783(iVar6, "spwn4");
		iVar38 = unk_0x7619952D26DF7783(iVar6, "spsrc4");
		iVar39 = unk_0x7619952D26DF7783(iVar6, "spasr4");
		Global_4456448.f_91959 = unk_0x8A83B52A17A321DB(iVar6, "nocr");
		iVar40 = unk_0x7619952D26DF7783(iVar6, "crgdm");
		iVar43 = unk_0x7619952D26DF7783(iVar6, "modps");
		iVar44 = unk_0x7619952D26DF7783(iVar6, "ncol");
		iVar45 = unk_0x7619952D26DF7783(iVar6, "enveff");
		iVar46 = unk_0x7619952D26DF7783(iVar6, "colc");
		iVar47 = unk_0x7619952D26DF7783(iVar6, "col2");
		iVar48 = unk_0x7619952D26DF7783(iVar6, "col3");
		iVar49 = unk_0x7619952D26DF7783(iVar6, "mcvasp");
		iVar50 = unk_0x7619952D26DF7783(iVar6, "vcoid");
		iVar51 = unk_0x7619952D26DF7783(iVar6, "vznsp");
		iVar52 = unk_0x7619952D26DF7783(iVar6, "vznsp2");
		iVar53 = unk_0x7619952D26DF7783(iVar6, "vradse");
		iVar54 = unk_0x7619952D26DF7783(iVar6, "vradsd");
		Global_4456448.f_124064 = unk_0x8A83B52A17A321DB(iVar6, "burst");
		iVar60 = unk_0x7619952D26DF7783(iVar6, "vsbft");
		iVar62 = unk_0x7619952D26DF7783(iVar6, "enghp");
		iVar63 = unk_0x7619952D26DF7783(iVar6, "hbir");
		iVar64 = unk_0x7619952D26DF7783(iVar6, "hbor");
		iVar65 = unk_0x7619952D26DF7783(iVar6, "ptrhp");
		iVar66 = unk_0x7619952D26DF7783(iVar6, "bdyhp");
		iVar67 = unk_0x7619952D26DF7783(iVar6, "hmrh");
		iVar68 = unk_0x7619952D26DF7783(iVar6, "htrh");
		iVar69 = unk_0x7619952D26DF7783(iVar6, "fdswm");
		iVar70 = unk_0x7619952D26DF7783(iVar6, "ior");
		iVar71 = unk_0x7619952D26DF7783(iVar6, "iort");
		iVar72 = unk_0x7619952D26DF7783(iVar6, "vddra");
		iVar73 = unk_0x7619952D26DF7783(iVar6, "vddta");
		iVar74 = unk_0x7619952D26DF7783(iVar6, "vddrl");
		iVar75 = unk_0x7619952D26DF7783(iVar6, "vddwda");
		iVar76 = unk_0x7619952D26DF7783(iVar6, "vdsor");
		iVar77 = unk_0x7619952D26DF7783(iVar6, "vdInter");
		iVar348 = 0;
		while (iVar348 <= 16)
		{
			StringCopy(&sVar4, "vbvrr", 8);
			StringIntConCat(&sVar4, iVar348, 8);
			iVar87[iVar348] = unk_0x7619952D26DF7783(iVar6, &sVar4);
			iVar348++;
		}
		iVar105 = unk_0x7619952D26DF7783(iVar6, "vebs");
		iVar106 = unk_0x7619952D26DF7783(iVar6, "vehct");
		iVar109 = unk_0x7619952D26DF7783(iVar6, "vhcra");
		iVar107 = unk_0x7619952D26DF7783(iVar6, "vehcr");
		iVar108 = unk_0x7619952D26DF7783(iVar6, "vehcv");
		iVar110 = unk_0x7619952D26DF7783(iVar6, "vehbc");
		iVar111 = unk_0x7619952D26DF7783(iVar6, "vehbr");
		iVar112 = unk_0x7619952D26DF7783(iVar6, "vehbso");
		iVar113 = unk_0x7619952D26DF7783(iVar6, "vehbs");
		iVar114 = unk_0x7619952D26DF7783(iVar6, "vehfbr");
		iVar115 = unk_0x7619952D26DF7783(iVar6, "vehfbd");
		iVar116 = unk_0x7619952D26DF7783(iVar6, "vehtc");
		iVar117 = unk_0x7619952D26DF7783(iVar6, "vehbrnrl");
		iVar118 = unk_0x7619952D26DF7783(iVar6, "vehbrntm");
		iVar119 = unk_0x7619952D26DF7783(iVar6, "vehbrnlf");
		iVar120 = unk_0x7619952D26DF7783(iVar6, "vehpotme");
		iVar121 = unk_0x7619952D26DF7783(iVar6, "vehdelind");
		iVar122 = unk_0x7619952D26DF7783(iVar6, "vehbtos");
		iVar123 = unk_0x7619952D26DF7783(iVar6, "vehwtci");
		iVar124 = unk_0x7619952D26DF7783(iVar6, "vehakwlrt");
		iVar125 = unk_0x7619952D26DF7783(iVar6, "vehrlgrpd");
		iVar126 = unk_0x7619952D26DF7783(iVar6, "vehbcsgc");
		iVar127 = unk_0x7619952D26DF7783(iVar6, "vehbcsgl");
		iVar128 = unk_0x7619952D26DF7783(iVar6, "vspdl");
		iVar129 = unk_0x7619952D26DF7783(iVar6, "vsgr");
		iVar130 = unk_0x7619952D26DF7783(iVar6, "vssgr");
		iVar152 = unk_0x7619952D26DF7783(iVar6, "vcnm");
		iVar153 = unk_0x7619952D26DF7783(iVar6, "vehap");
		iVar154 = unk_0x7619952D26DF7783(iVar6, "vehat");
		iVar155 = unk_0x7619952D26DF7783(iVar6, "vehdu");
		iVar156 = unk_0x7619952D26DF7783(iVar6, "vldt");
		iVar157 = unk_0x7619952D26DF7783(iVar6, "vldr");
		iVar158 = unk_0x7619952D26DF7783(iVar6, "cutsc");
		iVar159 = unk_0x7619952D26DF7783(iVar6, "cutsh");
		iVar161 = unk_0x7619952D26DF7783(iVar6, "gtbsr");
		iVar162 = unk_0x7619952D26DF7783(iVar6, "gtbss");
		iVar163 = unk_0x7619952D26DF7783(iVar6, "nmaggg");
		iVar164 = unk_0x7619952D26DF7783(iVar6, "nmpass");
		iVar165 = unk_0x7619952D26DF7783(iVar6, "nmfail");
		iVar166 = unk_0x7619952D26DF7783(iVar6, "vmcp");
		iVar167 = unk_0x7619952D26DF7783(iVar6, "vmcf");
		iVar168 = unk_0x7619952D26DF7783(iVar6, "vmca");
		iVar160 = unk_0x7619952D26DF7783(iVar6, "gotor");
		iVar285 = unk_0x7619952D26DF7783(iVar6, "vphrang");
		iVar286 = unk_0x7619952D26DF7783(iVar6, "vwpndmg");
		iVar287 = unk_0x7619952D26DF7783(iVar6, "vldv");
		iVar288 = unk_0x7619952D26DF7783(iVar6, "vtmhrn");
		iVar289 = unk_0x7619952D26DF7783(iVar6, "vdrpovr");
		iVar290 = unk_0x7619952D26DF7783(iVar6, "vdrprad");
		iVar291 = unk_0x7619952D26DF7783(iVar6, "vdrpvrad");
		iVar169 = unk_0x7619952D26DF7783(iVar6, "vcmi");
		iVar170 = unk_0x7619952D26DF7783(iVar6, "plvCmB");
		iVar171 = unk_0x7619952D26DF7783(iVar6, "plvCm0");
		iVar172 = unk_0x7619952D26DF7783(iVar6, "plvCm1");
		iVar173 = unk_0x7619952D26DF7783(iVar6, "plvCm2");
		iVar174 = unk_0x7619952D26DF7783(iVar6, "plvCm3");
		iVar175 = unk_0x7619952D26DF7783(iVar6, "plvCm4");
		iVar176 = unk_0x7619952D26DF7783(iVar6, "plvCm5");
		iVar177 = unk_0x7619952D26DF7783(iVar6, "plvCm6");
		iVar178 = unk_0x7619952D26DF7783(iVar6, "plvCm7");
		iVar179 = unk_0x7619952D26DF7783(iVar6, "plvCm8");
		iVar180 = unk_0x7619952D26DF7783(iVar6, "plvCm9");
		iVar181 = unk_0x7619952D26DF7783(iVar6, "plvCm10");
		iVar182 = unk_0x7619952D26DF7783(iVar6, "plvCm11");
		iVar183 = unk_0x7619952D26DF7783(iVar6, "plvCm12");
		iVar184 = unk_0x7619952D26DF7783(iVar6, "plvCm13");
		iVar185 = unk_0x7619952D26DF7783(iVar6, "plvCm14");
		iVar186 = unk_0x7619952D26DF7783(iVar6, "plvCm15");
		iVar187 = unk_0x7619952D26DF7783(iVar6, "plvCm16");
		iVar188 = unk_0x7619952D26DF7783(iVar6, "plvCm17");
		iVar189 = unk_0x7619952D26DF7783(iVar6, "plvCm18");
		iVar190 = unk_0x7619952D26DF7783(iVar6, "plvCm19");
		iVar191 = unk_0x7619952D26DF7783(iVar6, "plvCm20");
		iVar192 = unk_0x7619952D26DF7783(iVar6, "plvCm21");
		iVar193 = unk_0x7619952D26DF7783(iVar6, "plvCm22");
		iVar194 = unk_0x7619952D26DF7783(iVar6, "plvCm23");
		iVar195 = unk_0x7619952D26DF7783(iVar6, "plvCm24");
		iVar196 = unk_0x7619952D26DF7783(iVar6, "plvCm25");
		iVar197 = unk_0x7619952D26DF7783(iVar6, "plvCm26");
		iVar198 = unk_0x7619952D26DF7783(iVar6, "plvCm27");
		iVar199 = unk_0x7619952D26DF7783(iVar6, "plvCm28");
		iVar200 = unk_0x7619952D26DF7783(iVar6, "plvCm29");
		iVar201 = unk_0x7619952D26DF7783(iVar6, "plvCm30");
		iVar202 = unk_0x7619952D26DF7783(iVar6, "plvCm31");
		iVar203 = unk_0x7619952D26DF7783(iVar6, "plvCm32");
		iVar204 = unk_0x7619952D26DF7783(iVar6, "plvCm33");
		iVar205 = unk_0x7619952D26DF7783(iVar6, "plvCm34");
		iVar206 = unk_0x7619952D26DF7783(iVar6, "plvCm35");
		iVar207 = unk_0x7619952D26DF7783(iVar6, "plvCm36");
		iVar208 = unk_0x7619952D26DF7783(iVar6, "plvCm37");
		iVar292 = unk_0x7619952D26DF7783(iVar6, "vdvrfe");
		iVar293 = unk_0x7619952D26DF7783(iVar6, "vdeitc");
		iVar294 = unk_0x7619952D26DF7783(iVar6, "vdspn");
		iVar295 = unk_0x7619952D26DF7783(iVar6, "vdcbal");
		iVar296 = unk_0x7619952D26DF7783(iVar6, "vdcbdt");
		iVar297 = unk_0x7619952D26DF7783(iVar6, "vrhlor");
		iVar298 = unk_0x7619952D26DF7783(iVar6, "vddfs");
		iVar299 = unk_0x7619952D26DF7783(iVar6, "vrorc");
		iVar300 = unk_0x7619952D26DF7783(iVar6, "cbvest");
		iVar301 = unk_0x7619952D26DF7783(iVar6, "cbves");
		iVar302 = unk_0x7619952D26DF7783(iVar6, "hvcr");
		iVar303 = unk_0x7619952D26DF7783(iVar6, "cdtor");
		iVar304 = unk_0x7619952D26DF7783(iVar6, "cvd");
		iVar305 = unk_0x7619952D26DF7783(iVar6, "vifci");
		iVar306 = unk_0x7619952D26DF7783(iVar6, "viclv");
		iVar307 = unk_0x7619952D26DF7783(iVar6, "vtsr");
		iVar308 = unk_0x7619952D26DF7783(iVar6, "vtspr");
		iVar309 = unk_0x7619952D26DF7783(iVar6, "vwlot");
		iVar310 = unk_0x7619952D26DF7783(iVar6, "vstwd");
		iVar311 = unk_0x7619952D26DF7783(iVar6, "vbwcr");
		iVar312 = unk_0x7619952D26DF7783(iVar6, "vgavs");
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			StringCopy(&sVar4, "vrstp", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&sVar4, iVar1, 8);
			}
			iVar249[iVar1] = unk_0x7619952D26DF7783(iVar6, &sVar4);
			StringCopy(&sVar4, "frsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&sVar4, iVar1, 8);
			}
			iVar254[iVar1] = unk_0x7619952D26DF7783(iVar6, &sVar4);
			StringCopy(&sVar4, "irsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&sVar4, iVar1, 8);
			}
			iVar259[iVar1] = unk_0x7619952D26DF7783(iVar6, &sVar4);
			iVar1++;
		}
		iVar349 = 0;
		iVar349 = 0;
		while (iVar349 <= 8)
		{
			StringCopy(&sVar4, "vwrvv", 8);
			StringIntConCat(&sVar4, iVar349, 8);
			iVar264[iVar349] = unk_0x7619952D26DF7783(iVar6, &sVar4);
			StringCopy(&sVar4, "fwrvv", 8);
			StringIntConCat(&sVar4, iVar349, 8);
			iVar274[iVar349] = unk_0x7619952D26DF7783(iVar6, &sVar4);
			iVar349++;
		}
		iVar284 = unk_0x7619952D26DF7783(iVar6, "ubrkdb");
		iVar3 = 0;
		while (iVar3 <= (Global_4456448.f_206 - 1))
		{
			if (iVar3 < 4)
			{
				StringCopy(&sVar4, "rule", 8);
				StringIntConCat(&sVar4, iVar3, 8);
				iVar209[iVar3] = unk_0x7619952D26DF7783(iVar6, &sVar4);
				StringCopy(&sVar4, "pri", 8);
				StringIntConCat(&sVar4, iVar3, 8);
				iVar214[iVar3] = unk_0x7619952D26DF7783(iVar6, &sVar4);
				StringCopy(&sVar4, "tsp", 8);
				StringIntConCat(&sVar4, iVar3, 8);
				iVar219[iVar3] = unk_0x7619952D26DF7783(iVar6, &sVar4);
				StringCopy(&sVar4, "jtop", 8);
				StringIntConCat(&sVar4, iVar3, 8);
				iVar224[iVar3] = unk_0x7619952D26DF7783(iVar6, &sVar4);
				StringCopy(&sVar4, "jtof", 8);
				StringIntConCat(&sVar4, iVar3, 8);
				iVar229[iVar3] = unk_0x7619952D26DF7783(iVar6, &sVar4);
				StringCopy(&sVar4, "vcbf", 8);
				StringIntConCat(&sVar4, iVar3, 8);
				iVar234[iVar3] = unk_0x7619952D26DF7783(iVar6, &sVar4);
				StringCopy(&sVar4, "vcbt", 8);
				StringIntConCat(&sVar4, iVar3, 8);
				iVar239[iVar3] = unk_0x7619952D26DF7783(iVar6, &sVar4);
				StringCopy(&sVar4, "vcrr", 8);
				StringIntConCat(&sVar4, iVar3, 8);
				iVar244[iVar3] = unk_0x7619952D26DF7783(iVar6, &sVar4);
			}
			iVar3++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_124061 - 1))
	{
		if (iVar0 < 32)
		{
			Global_4456448.f_124065[iVar0] = { unk_0x6403E33233A20F75(iVar8, iVar0) };
			Global_4456448.f_124065[iVar0].f_3 = unk_0x73F91AA610E60211(iVar9, iVar0);
			func_195(&Var323, &iVar6, &(Global_4456448.f_124065[iVar0].f_102), iVar0, 4);
			if (iVar41 != 0 && unk_0x3E932F23D327A136(iVar41, iVar0) == 5)
			{
				Global_4456448.f_124065[iVar0].f_263 = { unk_0x6403E33233A20F75(iVar41, iVar0) };
			}
			else
			{
				Global_4456448.f_124065[iVar0].f_263 = { 0f, 0f, 0f };
			}
			iVar2 = unk_0xE082EE0DCA9466C4(iVar17, iVar0);
			Global_4456448.f_124065[iVar0].f_12 = iVar2;
			if (!func_128() && !func_202())
			{
				if (!unk_0x468C1AC3ABF95C57(Global_4456448.f_124065[iVar0].f_12) || func_220(Global_4456448.f_124065[iVar0].f_12))
				{
					Global_4456448.f_124065[iVar0].f_12 = -808831384;
				}
			}
			if (Global_4456448.f_124065[iVar0].f_12 == 1491277511 && !Global_262145.f_16998)
			{
				Global_4456448.f_124065[iVar0].f_12 = 1672195559;
			}
			Global_4456448.f_124065[iVar0].f_23 = unk_0xE082EE0DCA9466C4(iVar18, iVar0);
			Global_4456448.f_124065[iVar0].f_31 = unk_0xE082EE0DCA9466C4(iVar19, iVar0);
			if (iVar42 != 0 && unk_0x3E932F23D327A136(iVar42, iVar0) == 2)
			{
				Global_4456448.f_124065[iVar0].f_28 = unk_0xE082EE0DCA9466C4(iVar42, iVar0);
			}
			else
			{
				Global_4456448.f_124065[iVar0].f_28 = -1;
			}
			if (iVar55 != 0 && unk_0x3E932F23D327A136(iVar55, iVar0) == 2)
			{
				Global_4456448.f_124065[iVar0].f_229 = unk_0xE082EE0DCA9466C4(iVar55, iVar0);
			}
			else
			{
				Global_4456448.f_124065[iVar0].f_229 = -1;
			}
			if (iVar56 != 0 && unk_0x3E932F23D327A136(iVar56, iVar0) == 2)
			{
				Global_4456448.f_124065[iVar0].f_230 = unk_0xE082EE0DCA9466C4(iVar56, iVar0);
			}
			else
			{
				Global_4456448.f_124065[iVar0].f_230 = -1;
			}
			if (iVar57 != 0 && unk_0x3E932F23D327A136(iVar57, iVar0) == 2)
			{
				Global_4456448.f_124065[iVar0].f_231 = unk_0xE082EE0DCA9466C4(iVar57, iVar0);
			}
			else
			{
				Global_4456448.f_124065[iVar0].f_231 = -1;
			}
			if (iVar58 != 0 && unk_0x3E932F23D327A136(iVar58, iVar0) == 2)
			{
				Global_4456448.f_124065[iVar0].f_233 = unk_0xE082EE0DCA9466C4(iVar58, iVar0);
			}
			else
			{
				Global_4456448.f_124065[iVar0].f_233 = 0;
			}
			if (iVar59 != 0 && unk_0x3E932F23D327A136(iVar59, iVar0) == 2)
			{
				Global_4456448.f_124065[iVar0].f_234 = unk_0xE082EE0DCA9466C4(iVar59, iVar0);
			}
			else
			{
				Global_4456448.f_124065[iVar0].f_234 = 0;
			}
			Global_4456448.f_124065[iVar0].f_32 = unk_0xE082EE0DCA9466C4(iVar61, iVar0);
			if (Global_4456448.f_124065[iVar0].f_32 < 1)
			{
				Global_4456448.f_124065[iVar0].f_32 = 100;
			}
			Global_4456448.f_124065[iVar0].f_73 = unk_0xE082EE0DCA9466C4(iVar78, iVar0);
			Global_4456448.f_124065[iVar0].f_74 = unk_0xE082EE0DCA9466C4(iVar79, iVar0);
			if (iVar80 != 0 && unk_0x3E932F23D327A136(iVar80, iVar0) == 2)
			{
				Global_4456448.f_124065[iVar0].f_75 = unk_0xE082EE0DCA9466C4(iVar80, iVar0);
			}
			else
			{
				Global_4456448.f_124065[iVar0].f_75 = 0;
			}
			if (iVar81 != 0 && unk_0x3E932F23D327A136(iVar81, iVar0) == 2)
			{
				Global_4456448.f_124065[iVar0].f_76 = unk_0xE082EE0DCA9466C4(iVar81, iVar0);
			}
			else
			{
				Global_4456448.f_124065[iVar0].f_76 = 0;
			}
			if (iVar82 != 0 && unk_0x3E932F23D327A136(iVar82, iVar0) == 2)
			{
				Global_4456448.f_124065[iVar0].f_77 = unk_0xE082EE0DCA9466C4(iVar82, iVar0);
			}
			else
			{
				Global_4456448.f_124065[iVar0].f_77 = 0;
			}
			if (iVar83 != 0 && unk_0x3E932F23D327A136(iVar83, iVar0) == 2)
			{
				Global_4456448.f_124065[iVar0].f_78 = unk_0xE082EE0DCA9466C4(iVar83, iVar0);
			}
			else
			{
				Global_4456448.f_124065[iVar0].f_78 = 0;
			}
			if (iVar84 != 0 && unk_0x3E932F23D327A136(iVar84, iVar0) == 2)
			{
				Global_4456448.f_124065[iVar0].f_79 = unk_0xE082EE0DCA9466C4(iVar84, iVar0);
			}
			else
			{
				Global_4456448.f_124065[iVar0].f_79 = 0;
			}
			if (iVar85 != 0 && unk_0x3E932F23D327A136(iVar85, iVar0) == 2)
			{
				Global_4456448.f_124065[iVar0].f_80 = unk_0xE082EE0DCA9466C4(iVar85, iVar0);
			}
			else
			{
				Global_4456448.f_124065[iVar0].f_80 = 0;
			}
			func_199("vbs9", &(Global_4456448.f_124065[iVar0].f_81), &iVar6, &iVar86, iVar0, 0, 0);
			if (func_135(1))
			{
				if ((((iVar10 != 0 && unk_0x3E932F23D327A136(iVar10, iVar0) == 3) && unk_0x3E932F23D327A136(iVar11, iVar0) == 3) && unk_0x3E932F23D327A136(iVar12, iVar0) == 2) && unk_0x3E932F23D327A136(iVar13, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_4 = unk_0x73F91AA610E60211(iVar10, iVar0);
					Global_4456448.f_124065[iVar0].f_5 = unk_0x73F91AA610E60211(iVar11, iVar0);
					Global_4456448.f_124065[iVar0].f_6 = unk_0xE082EE0DCA9466C4(iVar12, iVar0);
					Global_4456448.f_124065[iVar0].f_7 = unk_0xE082EE0DCA9466C4(iVar13, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_4 = 100f;
					Global_4456448.f_124065[iVar0].f_5 = 0f;
					Global_4456448.f_124065[iVar0].f_6 = 0;
					Global_4456448.f_124065[iVar0].f_7 = -1;
				}
				if ((iVar14 != 0 && unk_0x3E932F23D327A136(iVar14, iVar0) == 5) && unk_0x3E932F23D327A136(iVar15, iVar0) == 3)
				{
					Global_4456448.f_124065[iVar0].f_8 = { unk_0x6403E33233A20F75(iVar14, iVar0) };
					Global_4456448.f_124065[iVar0].f_11 = unk_0x73F91AA610E60211(iVar15, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_8 = { 0f, 0f, 0f };
					Global_4456448.f_124065[iVar0].f_11 = 0f;
				}
				if (iVar16 != 0 && unk_0x3E932F23D327A136(iVar16, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_251 = unk_0xE082EE0DCA9466C4(iVar16, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_251 = -1;
				}
				Global_4456448.f_124065[iVar0].f_45 = unk_0xE082EE0DCA9466C4(iVar20, iVar0);
				Global_4456448.f_124065[iVar0].f_46 = unk_0xE082EE0DCA9466C4(iVar21, iVar0);
				Global_4456448.f_124065[iVar0].f_47 = unk_0xE082EE0DCA9466C4(iVar22, iVar0);
				Global_4456448.f_124065[iVar0].f_48 = unk_0xE082EE0DCA9466C4(iVar23, iVar0);
				Global_4456448.f_124065[iVar0].f_49 = unk_0xE082EE0DCA9466C4(iVar24, iVar0);
				if (iVar25 != 0 && unk_0x3E932F23D327A136(iVar25, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_139 = unk_0xE082EE0DCA9466C4(iVar25, iVar0);
					Global_4456448.f_124065[iVar0].f_136 = unk_0xE082EE0DCA9466C4(iVar26, iVar0);
					Global_4456448.f_124065[iVar0].f_142 = unk_0xE082EE0DCA9466C4(iVar27, iVar0);
					Global_4456448.f_124065[iVar0].f_145 = unk_0xE082EE0DCA9466C4(iVar28, iVar0);
					Global_4456448.f_124065[iVar0].f_146 = unk_0xE082EE0DCA9466C4(iVar29, iVar0);
					Global_4456448.f_124065[iVar0].f_140 = unk_0xE082EE0DCA9466C4(iVar30, iVar0);
					Global_4456448.f_124065[iVar0].f_137 = unk_0xE082EE0DCA9466C4(iVar31, iVar0);
					Global_4456448.f_124065[iVar0].f_143 = unk_0xE082EE0DCA9466C4(iVar32, iVar0);
					Global_4456448.f_124065[iVar0].f_147 = unk_0xE082EE0DCA9466C4(iVar33, iVar0);
					Global_4456448.f_124065[iVar0].f_148 = unk_0xE082EE0DCA9466C4(iVar34, iVar0);
					Global_4456448.f_124065[iVar0].f_141 = unk_0xE082EE0DCA9466C4(iVar35, iVar0);
					Global_4456448.f_124065[iVar0].f_138 = unk_0xE082EE0DCA9466C4(iVar36, iVar0);
					Global_4456448.f_124065[iVar0].f_144 = unk_0xE082EE0DCA9466C4(iVar37, iVar0);
					Global_4456448.f_124065[iVar0].f_149 = unk_0xE082EE0DCA9466C4(iVar38, iVar0);
					Global_4456448.f_124065[iVar0].f_150 = unk_0xE082EE0DCA9466C4(iVar39, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_139 = -1;
					Global_4456448.f_124065[iVar0].f_136 = 0;
					Global_4456448.f_124065[iVar0].f_142 = 0;
					Global_4456448.f_124065[iVar0].f_145 = 0;
					Global_4456448.f_124065[iVar0].f_146 = 0;
					Global_4456448.f_124065[iVar0].f_140 = -1;
					Global_4456448.f_124065[iVar0].f_137 = 0;
					Global_4456448.f_124065[iVar0].f_143 = 0;
					Global_4456448.f_124065[iVar0].f_147 = 0;
					Global_4456448.f_124065[iVar0].f_148 = 0;
					Global_4456448.f_124065[iVar0].f_141 = -1;
					Global_4456448.f_124065[iVar0].f_138 = 0;
					Global_4456448.f_124065[iVar0].f_144 = 0;
					Global_4456448.f_124065[iVar0].f_149 = 0;
					Global_4456448.f_124065[iVar0].f_150 = 0;
				}
				if (iVar44 != 0 && unk_0x3E932F23D327A136(iVar44, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_26 = unk_0xE082EE0DCA9466C4(iVar44, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_26 = -1;
				}
				if (iVar43 != 0 && unk_0x3E932F23D327A136(iVar43, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_29 = unk_0xE082EE0DCA9466C4(iVar43, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_29 = -1;
				}
				if (iVar45 != 0 && unk_0x3E932F23D327A136(iVar45, iVar0) == 3)
				{
					Global_4456448.f_124065[iVar0].f_30 = unk_0x73F91AA610E60211(iVar45, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_30 = -1f;
				}
				if (iVar60 != 0 && unk_0x3E932F23D327A136(iVar60, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_44 = unk_0xE082EE0DCA9466C4(iVar60, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_44 = 0;
				}
				if ((iVar62 != 0 && unk_0x3E932F23D327A136(iVar62, iVar0) == 3) && unk_0x73F91AA610E60211(iVar62, iVar0) > 0f)
				{
					Global_4456448.f_124065[iVar0].f_33 = unk_0x73F91AA610E60211(iVar62, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_33 = 1001f;
				}
				if ((iVar63 != 0 && unk_0x3E932F23D327A136(iVar63, iVar0) == 2) && unk_0xE082EE0DCA9466C4(iVar63, iVar0) > 0)
				{
					Global_4456448.f_124065[iVar0].f_34 = unk_0xE082EE0DCA9466C4(iVar63, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_34 = 0;
				}
				if ((iVar64 != 0 && unk_0x3E932F23D327A136(iVar64, iVar0) == 2) && unk_0xE082EE0DCA9466C4(iVar64, iVar0) > -1)
				{
					Global_4456448.f_124065[iVar0].f_35 = unk_0xE082EE0DCA9466C4(iVar64, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_35 = -1;
				}
				if ((iVar40 != 0 && unk_0x3E932F23D327A136(iVar40, iVar0) == 3) && unk_0x73F91AA610E60211(iVar40, iVar0) >= 0f)
				{
					Global_4456448.f_124065[iVar0].f_40 = unk_0x73F91AA610E60211(iVar40, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_40 = 1,5f;
				}
				if (iVar72 != 0 && unk_0x3E932F23D327A136(iVar72, iVar0) == 3)
				{
					Global_4456448.f_124065[iVar0].f_241 = unk_0x73F91AA610E60211(iVar72, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_241 = -1f;
				}
				if (iVar73 != 0 && unk_0x3E932F23D327A136(iVar73, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_242 = unk_0xE082EE0DCA9466C4(iVar73, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_242 = 0;
				}
				if (iVar74 != 0 && unk_0x3E932F23D327A136(iVar74, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_243 = unk_0xE082EE0DCA9466C4(iVar74, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_243 = -1;
				}
				if (iVar75 != 0 && unk_0x3E932F23D327A136(iVar75, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_244 = unk_0xE082EE0DCA9466C4(iVar75, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_244 = 0;
				}
				if (iVar76 != 0 && unk_0x3E932F23D327A136(iVar76, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_245 = unk_0xE082EE0DCA9466C4(iVar76, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_245 = -1;
				}
				if (iVar77 != 0 && unk_0x3E932F23D327A136(iVar77, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_250 = unk_0xE082EE0DCA9466C4(iVar77, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_250 = -1;
				}
				if ((iVar65 != 0 && unk_0x3E932F23D327A136(iVar65, iVar0) == 3) && unk_0x73F91AA610E60211(iVar65, iVar0) > 0f)
				{
					Global_4456448.f_124065[iVar0].f_36 = unk_0x73F91AA610E60211(iVar65, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_36 = 1001f;
				}
				if ((iVar66 != 0 && unk_0x3E932F23D327A136(iVar66, iVar0) == 3) && unk_0x73F91AA610E60211(iVar66, iVar0) > 0f)
				{
					Global_4456448.f_124065[iVar0].f_37 = unk_0x73F91AA610E60211(iVar66, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_37 = 1001f;
				}
				if ((iVar67 != 0 && unk_0x3E932F23D327A136(iVar67, iVar0) == 3) && unk_0x73F91AA610E60211(iVar67, iVar0) > 0f)
				{
					Global_4456448.f_124065[iVar0].f_38 = unk_0x73F91AA610E60211(iVar67, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_38 = 1001f;
				}
				if ((iVar68 != 0 && unk_0x3E932F23D327A136(iVar68, iVar0) == 3) && unk_0x73F91AA610E60211(iVar68, iVar0) > 0f)
				{
					Global_4456448.f_124065[iVar0].f_39 = unk_0x73F91AA610E60211(iVar68, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_39 = 1001f;
				}
				if ((iVar69 != 0 && unk_0x3E932F23D327A136(iVar69, iVar0) == 3) && unk_0x73F91AA610E60211(iVar69, iVar0) != 1f)
				{
					Global_4456448.f_124065[iVar0].f_240 = unk_0x73F91AA610E60211(iVar69, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_240 = 1f;
				}
				if (iVar70 != 0 && unk_0x3E932F23D327A136(iVar70, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_238 = unk_0xE082EE0DCA9466C4(iVar70, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_238 = -1;
				}
				if (iVar71 != 0 && unk_0x3E932F23D327A136(iVar71, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_239 = unk_0xE082EE0DCA9466C4(iVar71, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_239 = 0;
				}
				iVar350 = 0;
				while (iVar350 <= 16)
				{
					if (iVar87[iVar350] != 0 && unk_0x3E932F23D327A136(iVar87[iVar350], iVar0) == 2)
					{
						Global_4456448.f_124065[iVar0].f_84[iVar350] = unk_0xE082EE0DCA9466C4(iVar87[iVar350], iVar0);
					}
					else
					{
						Global_4456448.f_124065[iVar0].f_84[iVar350] = -2;
					}
					iVar350++;
				}
				if (iVar46 != 0 && unk_0x3E932F23D327A136(iVar46, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_27 = unk_0xE082EE0DCA9466C4(iVar46, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_27 = -1;
				}
				if (iVar47 != 0 && unk_0x3E932F23D327A136(iVar47, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_24 = unk_0xE082EE0DCA9466C4(iVar47, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_24 = -1;
				}
				if (iVar48 != 0 && unk_0x3E932F23D327A136(iVar48, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_25 = unk_0xE082EE0DCA9466C4(iVar48, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_25 = -1;
				}
				Global_4456448.f_124065[iVar0].f_183 = unk_0xE082EE0DCA9466C4(iVar105, iVar0);
				if (iVar49 != 0 && unk_0x3E932F23D327A136(iVar49, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_311 = unk_0xE082EE0DCA9466C4(iVar49, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_311 = -1;
				}
				if (iVar50 != 0 && unk_0x3E932F23D327A136(iVar50, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_312 = unk_0xE082EE0DCA9466C4(iVar50, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_312 = -1;
				}
				if (iVar51 != 0 && unk_0x3E932F23D327A136(iVar51, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_313 = unk_0xE082EE0DCA9466C4(iVar51, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_313 = -1;
				}
				if (iVar52 != 0 && unk_0x3E932F23D327A136(iVar52, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_314 = unk_0xE082EE0DCA9466C4(iVar52, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_314 = 0;
				}
				if (iVar53 != 0 && unk_0x3E932F23D327A136(iVar53, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_315 = unk_0xE082EE0DCA9466C4(iVar53, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_315 = 0;
				}
				if (iVar54 != 0 && unk_0x3E932F23D327A136(iVar54, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_316 = unk_0xE082EE0DCA9466C4(iVar54, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_316 = 0;
				}
				if (iVar107 != 0 && unk_0x3E932F23D327A136(iVar107, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_125 = unk_0xE082EE0DCA9466C4(iVar107, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_125 = -1;
				}
				if (iVar106 != 0 && unk_0x3E932F23D327A136(iVar106, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_126 = unk_0xE082EE0DCA9466C4(iVar106, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_126 = -1;
				}
				if (iVar109 != 0 && unk_0x3E932F23D327A136(iVar109, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_127 = unk_0xE082EE0DCA9466C4(iVar109, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_127 = -1;
				}
				if (iVar108 != 0 && unk_0x3E932F23D327A136(iVar108, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_128 = unk_0xE082EE0DCA9466C4(iVar108, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_128 = -1;
				}
				if (iVar128 != 0 && unk_0x3E932F23D327A136(iVar128, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_135 = unk_0xE082EE0DCA9466C4(iVar128, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_135 = 0;
				}
				if (iVar129 != 0 && unk_0x3E932F23D327A136(iVar129, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_50 = unk_0xE082EE0DCA9466C4(iVar129, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_50 = 0;
				}
				if (iVar130 != 0 && unk_0x3E932F23D327A136(iVar130, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_51 = unk_0xE082EE0DCA9466C4(iVar130, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_51 = 0;
				}
				iVar1 = 0;
				while (iVar1 <= 19)
				{
					StringCopy(&sVar4, "1vwb", 8);
					StringIntConCat(&sVar4, iVar1, 8);
					func_199(&sVar4, &(Global_4456448.f_124065[iVar0].f_52[iVar1]), &iVar6, &(uVar131[iVar1]), iVar0, 0, 0);
					iVar1++;
				}
				if (iVar152 != 0 && unk_0x3E932F23D327A136(iVar152, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_151 = unk_0xE082EE0DCA9466C4(iVar152, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_151 = -1;
				}
				if (iVar153 != 0 && unk_0x3E932F23D327A136(iVar153, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_152 = unk_0xE082EE0DCA9466C4(iVar153, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_152 = -1;
				}
				if (iVar154 != 0 && unk_0x3E932F23D327A136(iVar154, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_153 = unk_0xE082EE0DCA9466C4(iVar154, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_153 = 1;
				}
				if (iVar155 != 0 && unk_0x3E932F23D327A136(iVar155, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_172 = unk_0xE082EE0DCA9466C4(iVar155, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_172 = -1;
				}
				if (iVar156 != 0 && unk_0x3E932F23D327A136(iVar156, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_173 = unk_0xE082EE0DCA9466C4(iVar156, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_173 = -1;
				}
				if (iVar157 != 0 && unk_0x3E932F23D327A136(iVar157, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_174 = unk_0xE082EE0DCA9466C4(iVar157, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_174 = -1;
				}
				if (iVar110 != 0 && unk_0x3E932F23D327A136(iVar110, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_102.f_2 = unk_0xE082EE0DCA9466C4(iVar110, iVar0);
				}
				else if (func_273())
				{
					Global_4456448.f_124065[iVar0].f_102.f_2 = 0;
				}
				if (iVar111 != 0)
				{
					if (unk_0x3E932F23D327A136(iVar111, iVar0) == 2)
					{
						Global_4456448.f_124065[iVar0].f_102.f_6 = to_float(unk_0xE082EE0DCA9466C4(iVar111, iVar0));
					}
					else
					{
						Global_4456448.f_124065[iVar0].f_102.f_6 = unk_0x73F91AA610E60211(iVar111, iVar0);
					}
				}
				else if (func_273())
				{
					Global_4456448.f_124065[iVar0].f_102.f_6 = 0f;
				}
				if (iVar112 != 0 && unk_0x3E932F23D327A136(iVar112, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_102.f_5 = unk_0xE082EE0DCA9466C4(iVar112, iVar0);
				}
				else if (func_273())
				{
					Global_4456448.f_124065[iVar0].f_102.f_5 = 0;
				}
				if (iVar113 != 0 && unk_0x3E932F23D327A136(iVar113, iVar0) == 3)
				{
					Global_4456448.f_124065[iVar0].f_102.f_4 = unk_0x73F91AA610E60211(iVar113, iVar0);
				}
				else if (func_273())
				{
					Global_4456448.f_124065[iVar0].f_102.f_4 = 1,2f;
				}
				if (iVar114 != 0 && unk_0x3E932F23D327A136(iVar114, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_82 = unk_0xE082EE0DCA9466C4(iVar114, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_82 = -1;
				}
				if (iVar115 != 0 && unk_0x3E932F23D327A136(iVar115, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_83 = unk_0xE082EE0DCA9466C4(iVar115, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_83 = 10;
				}
				if (iVar116 != 0 && unk_0x3E932F23D327A136(iVar116, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_252 = unk_0xE082EE0DCA9466C4(iVar116, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_252 = 1;
				}
				if (iVar118 != 0 && unk_0x3E932F23D327A136(iVar118, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_254 = unk_0xE082EE0DCA9466C4(iVar118, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_254 = 0;
				}
				if (iVar117 != 0 && unk_0x3E932F23D327A136(iVar117, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_253 = unk_0xE082EE0DCA9466C4(iVar117, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_253 = 0;
				}
				if (iVar119 != 0 && unk_0x3E932F23D327A136(iVar119, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_255 = unk_0xE082EE0DCA9466C4(iVar119, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_255 = 60;
				}
				if (iVar120 != 0 && unk_0x3E932F23D327A136(iVar120, iVar0) == 3)
				{
					Global_4456448.f_124065[iVar0].f_256 = unk_0x73F91AA610E60211(iVar120, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_256 = 4,5f;
				}
				if (iVar169 != 0 && unk_0x3E932F23D327A136(iVar169, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_317 = unk_0xE082EE0DCA9466C4(iVar169, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_317 = -1;
				}
				if (Global_4456448.f_124065[iVar0].f_317 > -1)
				{
					iVar351 = Global_4456448.f_124065[iVar0].f_317;
					func_219(iVar0, &iVar170, &(Global_4456448.f_134877[iVar351]));
					func_219(iVar0, &iVar171, &(Global_4456448.f_134877[iVar351].f_1));
					func_219(iVar0, &iVar172, &(Global_4456448.f_134877[iVar351].f_2));
					func_219(iVar0, &iVar173, &(Global_4456448.f_134877[iVar351].f_3));
					func_219(iVar0, &iVar174, &(Global_4456448.f_134877[iVar351].f_4));
					func_219(iVar0, &iVar175, &(Global_4456448.f_134877[iVar351].f_5));
					func_219(iVar0, &iVar176, &(Global_4456448.f_134877[iVar351].f_6));
					func_219(iVar0, &iVar177, &(Global_4456448.f_134877[iVar351].f_7));
					func_219(iVar0, &iVar178, &(Global_4456448.f_134877[iVar351].f_8));
					func_219(iVar0, &iVar179, &(Global_4456448.f_134877[iVar351].f_9));
					func_219(iVar0, &iVar180, &(Global_4456448.f_134877[iVar351].f_10));
					func_219(iVar0, &iVar181, &(Global_4456448.f_134877[iVar351].f_11));
					func_219(iVar0, &iVar182, &(Global_4456448.f_134877[iVar351].f_12));
					func_219(iVar0, &iVar183, &(Global_4456448.f_134877[iVar351].f_13));
					func_219(iVar0, &iVar184, &(Global_4456448.f_134877[iVar351].f_14));
					func_219(iVar0, &iVar185, &(Global_4456448.f_134877[iVar351].f_15));
					func_219(iVar0, &iVar186, &(Global_4456448.f_134877[iVar351].f_16));
					func_219(iVar0, &iVar187, &(Global_4456448.f_134877[iVar351].f_17));
					func_219(iVar0, &iVar188, &(Global_4456448.f_134877[iVar351].f_18));
					func_219(iVar0, &iVar189, &(Global_4456448.f_134877[iVar351].f_19));
					func_219(iVar0, &iVar190, &(Global_4456448.f_134877[iVar351].f_20));
					func_219(iVar0, &iVar191, &(Global_4456448.f_134877[iVar351].f_21));
					func_219(iVar0, &iVar192, &(Global_4456448.f_134877[iVar351].f_22));
					func_219(iVar0, &iVar193, &(Global_4456448.f_134877[iVar351].f_23));
					func_219(iVar0, &iVar194, &(Global_4456448.f_134877[iVar351].f_24));
					func_219(iVar0, &iVar195, &(Global_4456448.f_134877[iVar351].f_25));
					func_219(iVar0, &iVar196, &(Global_4456448.f_134877[iVar351].f_26));
					func_219(iVar0, &iVar197, &(Global_4456448.f_134877[iVar351].f_27));
					func_219(iVar0, &iVar198, &(Global_4456448.f_134877[iVar351].f_28));
					func_219(iVar0, &iVar199, &(Global_4456448.f_134877[iVar351].f_29));
					func_219(iVar0, &iVar200, &(Global_4456448.f_134877[iVar351].f_30));
					func_219(iVar0, &iVar201, &(Global_4456448.f_134877[iVar351].f_31));
					func_219(iVar0, &iVar202, &(Global_4456448.f_134877[iVar351].f_32));
					func_219(iVar0, &iVar203, &(Global_4456448.f_134877[iVar351].f_33));
					func_219(iVar0, &iVar204, &(Global_4456448.f_134877[iVar351].f_34));
					func_219(iVar0, &iVar205, &(Global_4456448.f_134877[iVar351].f_35));
					func_219(iVar0, &iVar206, &(Global_4456448.f_134877[iVar351].f_36));
					func_219(iVar0, &iVar207, &(Global_4456448.f_134877[iVar351].f_37));
					func_219(iVar0, &iVar208, &(Global_4456448.f_134877[iVar351].f_38));
				}
				if (iVar121 != 0 && unk_0x3E932F23D327A136(iVar121, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_257 = unk_0xE082EE0DCA9466C4(iVar121, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_257 = -1;
				}
				if (iVar122 != 0 && unk_0x3E932F23D327A136(iVar122, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_258 = unk_0xE082EE0DCA9466C4(iVar122, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_258 = -1;
				}
				if (iVar123 != 0 && unk_0x3E932F23D327A136(iVar123, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_259 = unk_0xE082EE0DCA9466C4(iVar123, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_259 = -1;
				}
				if (iVar124 != 0 && unk_0x3E932F23D327A136(iVar124, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_260 = unk_0xE082EE0DCA9466C4(iVar124, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_260 = 0;
				}
				if (iVar126 != 0 && unk_0x3E932F23D327A136(iVar126, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_267 = unk_0xE082EE0DCA9466C4(iVar126, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_267 = -1;
				}
				if (iVar127 != 0 && unk_0x3E932F23D327A136(iVar127, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_268 = unk_0xE082EE0DCA9466C4(iVar127, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_268 = -1;
				}
				if (iVar125 != 0 && unk_0x3E932F23D327A136(iVar125, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_266 = unk_0xE082EE0DCA9466C4(iVar125, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_266 = 0;
				}
				if (iVar160 != 0 && unk_0x3E932F23D327A136(iVar160, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_43 = unk_0xE082EE0DCA9466C4(iVar160, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_43 = 0;
				}
				if (Global_4456448.f_2 != 6 && unk_0x3E932F23D327A136(iVar158, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_181 = unk_0xE082EE0DCA9466C4(iVar158, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_181 = -1;
				}
				if (Global_4456448.f_2 != 6 && unk_0x3E932F23D327A136(iVar159, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_182 = unk_0xE082EE0DCA9466C4(iVar159, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_182 = -1;
				}
				if (iVar163 != 0 && unk_0x3E932F23D327A136(iVar163, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_164.f_2 = unk_0xE082EE0DCA9466C4(iVar163, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_164.f_2 = -1;
				}
				if (iVar161 != 0 && unk_0x3E932F23D327A136(iVar161, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_164.f_6 = unk_0xE082EE0DCA9466C4(iVar161, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_164.f_6 = -1;
				}
				if (iVar162 != 0 && unk_0x3E932F23D327A136(iVar162, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_164.f_7 = unk_0xE082EE0DCA9466C4(iVar162, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_164.f_7 = -1;
				}
				if (iVar164 != 0 && unk_0x3E932F23D327A136(iVar164, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_164 = unk_0xE082EE0DCA9466C4(iVar164, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_164 = -1;
				}
				if (iVar165 != 0 && unk_0x3E932F23D327A136(iVar165, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_164.f_1 = unk_0xE082EE0DCA9466C4(iVar165, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_164.f_1 = -1;
				}
				if (iVar166 != 0 && unk_0x3E932F23D327A136(iVar166, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_164.f_3 = unk_0xE082EE0DCA9466C4(iVar166, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_164.f_3 = -1;
				}
				if (iVar167 != 0 && unk_0x3E932F23D327A136(iVar167, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_164.f_4 = unk_0xE082EE0DCA9466C4(iVar167, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_164.f_4 = -1;
				}
				if (iVar168 != 0 && unk_0x3E932F23D327A136(iVar168, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_164.f_5 = unk_0xE082EE0DCA9466C4(iVar168, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_164.f_5 = -1;
				}
				iVar1 = 0;
				while (iVar1 <= 3)
				{
					if (iVar249[iVar1] != 0 && unk_0x3E932F23D327A136(iVar249[iVar1], iVar0) == 5)
					{
						Global_4456448.f_124065[iVar0].f_185[iVar1] = { unk_0x6403E33233A20F75(iVar249[iVar1], iVar0) };
					}
					else
					{
						Global_4456448.f_124065[iVar0].f_185[iVar1] = { 0f, 0f, 0f };
					}
					if (iVar254[iVar1] != 0 && unk_0x3E932F23D327A136(iVar254[iVar1], iVar0) == 3)
					{
						Global_4456448.f_124065[iVar0].f_198[iVar1] = unk_0x73F91AA610E60211(iVar254[iVar1], iVar0);
					}
					else
					{
						Global_4456448.f_124065[iVar0].f_198[iVar1] = 0f;
					}
					if (iVar259[iVar1] != 0 && unk_0x3E932F23D327A136(iVar259[iVar1], iVar0) == 2)
					{
						Global_4456448.f_124065[iVar0].f_203[iVar1] = unk_0xE082EE0DCA9466C4(iVar259[iVar1], iVar0);
					}
					else
					{
						Global_4456448.f_124065[iVar0].f_203[iVar1] = -1;
					}
					iVar1++;
				}
				iVar352 = 0;
				iVar352 = 0;
				while (iVar352 <= 8)
				{
					if (iVar264[iVar352] != 0 && unk_0x3E932F23D327A136(iVar264[iVar352], iVar0) == 5)
					{
						Global_4456448.f_124065[iVar0].f_273[iVar352] = { unk_0x6403E33233A20F75(iVar264[iVar352], iVar0) };
					}
					else
					{
						Global_4456448.f_124065[iVar0].f_273[iVar352] = { 0f, 0f, 0f };
					}
					if (iVar274[iVar352] != 0 && unk_0x3E932F23D327A136(iVar274[iVar352], iVar0) == 3)
					{
						Global_4456448.f_124065[iVar0].f_301[iVar352] = unk_0x73F91AA610E60211(iVar274[iVar352], iVar0);
					}
					else
					{
						Global_4456448.f_124065[iVar0].f_301[iVar352] = 0f;
					}
					iVar352++;
				}
				if (iVar284 != 0 && unk_0x3E932F23D327A136(iVar284, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_184 = unk_0xE082EE0DCA9466C4(iVar284, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_184 = 0;
				}
				if (iVar285 != 0 && unk_0x3E932F23D327A136(iVar285, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_208 = unk_0xE082EE0DCA9466C4(iVar285, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_208 = -1;
				}
				if (iVar286 != 0 && unk_0x3E932F23D327A136(iVar286, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_219 = unk_0xE082EE0DCA9466C4(iVar286, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_219 = -1;
				}
				if (iVar287 != 0 && unk_0x3E932F23D327A136(iVar287, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_220 = unk_0xE082EE0DCA9466C4(iVar287, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_220 = -1;
				}
				if (iVar288 != 0 && unk_0x3E932F23D327A136(iVar288, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_213 = unk_0xE082EE0DCA9466C4(iVar288, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_213 = -1;
				}
				if (iVar289 != 0 && unk_0x3E932F23D327A136(iVar289, iVar0) == 5)
				{
					Global_4456448.f_124065[iVar0].f_214 = { unk_0x6403E33233A20F75(iVar289, iVar0) };
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_214 = { 0f, 0f, 0f };
				}
				if (iVar290 != 0 && unk_0x3E932F23D327A136(iVar290, iVar0) == 3)
				{
					Global_4456448.f_124065[iVar0].f_217 = unk_0x73F91AA610E60211(iVar290, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_217 = 0f;
				}
				if (iVar291 != 0 && unk_0x3E932F23D327A136(iVar291, iVar0) == 3)
				{
					Global_4456448.f_124065[iVar0].f_218 = unk_0x73F91AA610E60211(iVar291, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_218 = 0f;
				}
				if (iVar292 != 0 && unk_0x3E932F23D327A136(iVar292, iVar0) == 3)
				{
					Global_4456448.f_124065[iVar0].f_210 = unk_0x73F91AA610E60211(iVar292, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_210 = -1f;
				}
				if (iVar298 != 0 && unk_0x3E932F23D327A136(iVar298, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_211 = unk_0xE082EE0DCA9466C4(iVar298, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_211 = 10;
				}
				if (iVar300 != 0 && unk_0x3E932F23D327A136(iVar300, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_227 = unk_0xE082EE0DCA9466C4(iVar300, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_227 = 2;
				}
				if (iVar301 != 0 && unk_0x3E932F23D327A136(iVar301, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_228 = unk_0xE082EE0DCA9466C4(iVar301, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_228 = -1;
				}
				if (iVar302 != 0 && unk_0x3E932F23D327A136(iVar302, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_246 = unk_0xE082EE0DCA9466C4(iVar302, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_246 = -1;
				}
				if (iVar293 != 0 && unk_0x3E932F23D327A136(iVar293, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_209 = unk_0xE082EE0DCA9466C4(iVar293, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_209 = -1;
				}
				if (iVar294 != 0 && unk_0x3E932F23D327A136(iVar294, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_212 = unk_0xE082EE0DCA9466C4(iVar294, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_212 = 0;
				}
				if (iVar307 != 0 && unk_0x3E932F23D327A136(iVar307, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_261 = unk_0xE082EE0DCA9466C4(iVar307, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_261 = -1;
				}
				if (iVar308 != 0 && unk_0x3E932F23D327A136(iVar308, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_262 = unk_0xE082EE0DCA9466C4(iVar308, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_262 = 0;
				}
				if (iVar295 != 0 && unk_0x3E932F23D327A136(iVar295, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_41 = unk_0xE082EE0DCA9466C4(iVar295, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_41 = 0;
				}
				if (iVar296 != 0 && unk_0x3E932F23D327A136(iVar296, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_42 = unk_0xE082EE0DCA9466C4(iVar296, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_42 = 0;
				}
				if (iVar297 != 0 && unk_0x3E932F23D327A136(iVar297, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_225 = unk_0xE082EE0DCA9466C4(iVar297, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_225 = 0;
				}
				if (iVar299 != 0 && unk_0x3E932F23D327A136(iVar299, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_226 = unk_0xE082EE0DCA9466C4(iVar299, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_226 = 0;
				}
				if (iVar303 != 0 && unk_0x3E932F23D327A136(iVar303, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_247 = unk_0xE082EE0DCA9466C4(iVar303, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_247 = -1;
				}
				if (iVar304 != 0 && unk_0x3E932F23D327A136(iVar304, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_248 = unk_0xE082EE0DCA9466C4(iVar304, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_248 = 0;
				}
				if (iVar305 != 0 && unk_0x3E932F23D327A136(iVar305, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_249 = unk_0xE082EE0DCA9466C4(iVar305, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_249 = -1;
				}
				if (iVar306 != 0 && unk_0x3E932F23D327A136(iVar306, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_134 = unk_0xE082EE0DCA9466C4(iVar306, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_134 = -1;
				}
				if (iVar309 != 0 && unk_0x3E932F23D327A136(iVar309, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_269 = unk_0xE082EE0DCA9466C4(iVar309, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_269 = 0;
				}
				if (iVar310 != 0 && unk_0x3E932F23D327A136(iVar310, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_270 = unk_0xE082EE0DCA9466C4(iVar310, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_270 = 0;
				}
				if (iVar311 != 0 && unk_0x3E932F23D327A136(iVar311, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_271 = unk_0xE082EE0DCA9466C4(iVar311, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_271 = -1;
				}
				if (iVar312 != 0 && unk_0x3E932F23D327A136(iVar312, iVar0) == 2)
				{
					Global_4456448.f_124065[iVar0].f_272 = unk_0xE082EE0DCA9466C4(iVar312, iVar0);
				}
				else
				{
					Global_4456448.f_124065[iVar0].f_272 = -1;
				}
				iVar3 = 0;
				while (iVar3 <= (Global_4456448.f_206 - 1))
				{
					if (iVar3 < 4)
					{
						Global_4456448.f_124065[iVar0].f_13[iVar3] = unk_0xE082EE0DCA9466C4(iVar209[iVar3], iVar0);
						Global_4456448.f_124065[iVar0].f_18[iVar3] = unk_0xE082EE0DCA9466C4(iVar214[iVar3], iVar0);
						if (Global_4456448.f_124065[iVar0].f_18[iVar3] == -1)
						{
							Global_4456448.f_124065[iVar0].f_18[iVar3] = 99999;
						}
						if (iVar219[iVar3] != 0 && unk_0x3E932F23D327A136(iVar219[iVar3], iVar0) == 2)
						{
							Global_4456448.f_124065[iVar0].f_175[iVar3] = unk_0xE082EE0DCA9466C4(iVar219[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_124065[iVar0].f_175[iVar3] = 0;
						}
						if (iVar224[iVar3] != 0 && unk_0x3E932F23D327A136(iVar224[iVar3], iVar0) == 2)
						{
							Global_4456448.f_124065[iVar0].f_154[iVar3] = unk_0xE082EE0DCA9466C4(iVar224[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_124065[iVar0].f_154[iVar3] = 0;
						}
						if (iVar229[iVar3] != 0 && unk_0x3E932F23D327A136(iVar229[iVar3], iVar0) == 2)
						{
							Global_4456448.f_124065[iVar0].f_159[iVar3] = unk_0xE082EE0DCA9466C4(iVar229[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_124065[iVar0].f_159[iVar3] = 0;
						}
						if (iVar234[iVar3] != 0 && unk_0x3E932F23D327A136(iVar234[iVar3], iVar0) == 2)
						{
							Global_4456448.f_124065[iVar0].f_102.f_10[iVar3].f_1 = unk_0xE082EE0DCA9466C4(iVar234[iVar3], iVar0);
						}
						else if (func_273())
						{
							Global_4456448.f_124065[iVar0].f_102.f_10[iVar3].f_1 = -1;
						}
						if (iVar239[iVar3] != 0 && unk_0x3E932F23D327A136(iVar239[iVar3], iVar0) == 2)
						{
							Global_4456448.f_124065[iVar0].f_102.f_10[iVar3].f_2 = unk_0xE082EE0DCA9466C4(iVar239[iVar3], iVar0);
						}
						else if (func_273())
						{
							Global_4456448.f_124065[iVar0].f_102.f_10[iVar3].f_2 = -1;
						}
						if (iVar244[iVar3] != 0 && unk_0x3E932F23D327A136(iVar244[iVar3], iVar0) == 2)
						{
							Global_4456448.f_124065[iVar0].f_129[iVar3] = unk_0xE082EE0DCA9466C4(iVar244[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_124065[iVar0].f_129[iVar3] = 0;
						}
					}
					iVar3++;
				}
				func_199("omj1", &(Global_4456448.f_124065[iVar0].f_318.f_1), &iVar6, &iVar313, iVar0, -1, -2340845);
				func_199("omj2", &(Global_4456448.f_124065[iVar0].f_318.f_2), &iVar6, &iVar314, iVar0, -1, -2340845);
				func_199("omj3", &(Global_4456448.f_124065[iVar0].f_318), &iVar6, &iVar315, iVar0, -1, -2340845);
				func_199("omj4", &(Global_4456448.f_124065[iVar0].f_318.f_3), &iVar6, &iVar316, iVar0, 0, -2340845);
				func_199("omj5", &(Global_4456448.f_124065[iVar0].f_318.f_4), &iVar6, &iVar317, iVar0, 0, -2340845);
				func_199("vwbc", &(Global_4456448.f_124065[iVar0].f_235), &iVar6, &iVar318, iVar0, 3, -2340845);
				func_199("vwba", &(Global_4456448.f_124065[iVar0].f_236), &iVar6, &iVar319, iVar0, 3, -2340845);
				func_199("vwbr", &(Global_4456448.f_124065[iVar0].f_237), &iVar6, &iVar320, iVar0, 3000, -2340845);
				func_191("alvveh", &(Global_4456448.f_124065[iVar0].f_323), 1, &iVar6, &uVar321, iVar0, 0, -2340845);
			}
		}
		iVar0++;
	}
}

void func_219(int iParam0, int iParam1, var uParam2)
{
	iVar0 = Global_4456448.f_124065[iParam0].f_317;
	if (iVar0 < 0)
	{
		return;
	}
	if (*iParam1 != 0 && unk_0x3E932F23D327A136(*iParam1, iVar0) == 2)
	{
		*uParam2 = unk_0xE082EE0DCA9466C4(*iParam1, iVar0);
	}
	else
	{
		*uParam2 = -1;
	}
}

int func_220(int iParam0)
{
	if (((!func_217() && (!func_222(iParam0) || func_221(iParam0))) && !func_162()) && !Global_262145.f_18802)
	{
		return 1;
	}
	return 0;
}

int func_221(int iParam0)
{
	if (!func_162())
	{
		if ((((((((((((((((((((((((((((((((((iParam0 == -1255698084 || iParam0 == -1883002148) || iParam0 == -1241712818) || iParam0 == 630371791) || iParam0 == 833469436) || iParam0 == 121658888) || iParam0 == 444171386) || iParam0 == 1507916787) || iParam0 == 1830407356) || iParam0 == 464687292) || iParam0 == 2078290630) || iParam0 == 2068293287) || iParam0 == -831834716) || iParam0 == -114627507) || iParam0 == -827162039) || iParam0 == 777714999) || iParam0 == 368211810) || iParam0 == 1502869817) || iParam0 == 177270108) || iParam0 == 387748548) || iParam0 == -1066334226) || iParam0 == 456714581) || iParam0 == -1988428699) || iParam0 == -307958377) || iParam0 == -286046740) || iParam0 == 2025593404) || iParam0 == -1254331310) || iParam0 == 1739845664) || iParam0 == -1987130134) || iParam0 == -1346687836) || iParam0 == -907477130) || iParam0 == -119658072) || iParam0 == 1645267888) || iParam0 == -2045594037) || iParam0 == -311022263)
		{
			return 1;
		}
	}
	return 0;
}

int func_222(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 26)
	{
		if (func_223(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_223(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= func_226(iParam1))
	{
		if (iParam0 == func_224(iParam1, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_224(int iParam0, int iParam1)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1130810103;
					break;
				
				case 1:
					iVar0 = -1177863319;
					break;
				
				case 2:
					iVar0 = 841808271;
					break;
				
				case 3:
					iVar0 = -431692672;
					break;
				
				case 4:
					iVar0 = 1549126457;
					break;
				
				case 5:
					iVar0 = 931280609;
					break;
				
				case 6:
					iVar0 = -1450650718;
					break;
				
				case 7:
					iVar0 = 409049982;
					break;
				
				case 8:
					iVar0 = 1118611807;
					break;
				
				case 9:
					iVar0 = -2098954619;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 = -89291282;
					break;
				
				case 1:
					iVar0 = -624529134;
					break;
				
				case 2:
					iVar0 = -1122289213;
					break;
				
				case 3:
					iVar0 = 1348744438;
					break;
				
				case 4:
					iVar0 = 1581459400;
					break;
				
				case 5:
					iVar0 = -1930048799;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					iVar0 = -685276541;
					break;
				
				case 1:
					iVar0 = -1883002148;
					break;
				
				case 2:
					iVar0 = -1241712818;
					break;
				
				case 3:
					iVar0 = 1909141499;
					break;
				
				case 4:
					iVar0 = -14495224;
					break;
				
				case 5:
					iVar0 = 1123216662;
					break;
				
				case 6:
					iVar0 = -1255452397;
					break;
				
				case 7:
					iVar0 = 75131841;
					break;
				
				case 8:
					iVar0 = 1373123368;
					break;
				
				case 9:
					iVar0 = -1809822327;
					break;
				
				case 10:
					iVar0 = 2016857647;
					break;
				
				case 11:
					iVar0 = -1894894188;
					break;
				
				case 12:
					iVar0 = -1150599089;
					break;
				
				case 13:
					iVar0 = -2040426790;
					break;
				
				case 14:
					iVar0 = -1485523546;
					break;
				
				case 15:
					iVar0 = 1489967196;
					break;
				
				case 16:
					iVar0 = -888242983;
					break;
				
				case 17:
					iVar0 = 1922255844;
					break;
				
				case 18:
					iVar0 = 906642318;
					break;
				
				case 19:
					iVar0 = 704435172;
					break;
				
				case 20:
					iVar0 = -2030171296;
					break;
				
				case 21:
					iVar0 = -604842630;
					break;
				
				case 22:
					iVar0 = -114627507;
					break;
				
				case 23:
					iVar0 = 321186144;
					break;
				
				case 24:
					iVar0 = -1903012613;
					break;
				
				case 25:
					iVar0 = -913589546;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					iVar0 = 80636076;
					break;
				
				case 1:
					iVar0 = -1800170043;
					break;
				
				case 2:
					iVar0 = -2095439403;
					break;
				
				case 3:
					iVar0 = -1205801634;
					break;
				
				case 4:
					iVar0 = -589178377;
					break;
				
				case 5:
					iVar0 = 729783779;
					break;
				
				case 6:
					iVar0 = 833469436;
					break;
				
				case 7:
					iVar0 = -682211828;
					break;
				
				case 8:
					iVar0 = 523724515;
					break;
				
				case 9:
					iVar0 = 1507916787;
					break;
				
				case 10:
					iVar0 = -498054846;
					break;
				
				case 11:
					iVar0 = 784565758;
					break;
				
				case 12:
					iVar0 = 349605904;
					break;
				
				case 13:
					iVar0 = -2119578145;
					break;
				
				case 14:
					iVar0 = -1790546981;
					break;
				
				case 15:
					iVar0 = 1896491931;
					break;
				
				case 16:
					iVar0 = -1361687965;
					break;
				
				case 17:
					iVar0 = 2006667053;
					break;
				
				case 18:
					iVar0 = -1013450936;
					break;
				
				case 19:
					iVar0 = -326143852;
					break;
				
				case 20:
					iVar0 = 525509695;
					break;
				
				case 21:
					iVar0 = 2068293287;
					break;
				
				case 22:
					iVar0 = -1943285540;
					break;
				
				case 23:
					iVar0 = -2039755226;
					break;
				
				case 24:
					iVar0 = 1119641113;
					break;
				
				case 25:
					iVar0 = 16646064;
					break;
				
				case 26:
					iVar0 = -899509638;
					break;
				
				case 27:
					iVar0 = 223258115;
					break;
				
				case 28:
					iVar0 = -915704871;
					break;
				
				case 29:
					iVar0 = 349315417;
					break;
				
				case 30:
					iVar0 = 941494461;
					break;
				
				case 31:
					iVar0 = 777714999;
					break;
				
				case 32:
					iVar0 = 723973206;
					break;
				
				case 33:
					iVar0 = 1923400478;
					break;
				
				case 34:
					iVar0 = -401643538;
					break;
				
				case 35:
					iVar0 = 37348240;
					break;
				
				case 36:
					iVar0 = -1210451983;
					break;
				
				case 37:
					iVar0 = 1871995513;
					break;
				
				case 38:
					iVar0 = 15219735;
					break;
				
				case 39:
					iVar0 = 600450546;
					break;
				
				case 40:
					iVar0 = -1267543371;
					break;
				
				case 41:
					iVar0 = -986944621;
					break;
				
				case 42:
					iVar0 = -227741703;
					break;
				
				case 43:
					iVar0 = -1566607184;
					break;
				
				case 44:
					iVar0 = -2096690334;
					break;
				
				case 45:
					iVar0 = 1279262537;
					break;
				
				case 46:
					iVar0 = 1456744817;
					break;
				
				case 47:
					iVar0 = -49115651;
					break;
				
				case 48:
					iVar0 = 722226637;
					break;
				
				case 49:
					iVar0 = 1934384720;
					break;
				
				case 50:
					iVar0 = -1804415708;
					break;
				
				case 51:
					iVar0 = 1693751655;
					break;
				
				case 52:
					iVar0 = 2134119907;
					break;
				
				case 53:
					iVar0 = -2122646867;
					break;
				
				case 54:
					iVar0 = 1717532765;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1041692462;
					break;
				
				case 1:
					iVar0 = 108773431;
					break;
				
				case 2:
					iVar0 = -1461482751;
					break;
				
				case 3:
					iVar0 = 767087018;
					break;
				
				case 4:
					iVar0 = -1297672541;
					break;
				
				case 5:
					iVar0 = -142942670;
					break;
				
				case 6:
					iVar0 = -1089039904;
					break;
				
				case 7:
					iVar0 = -1106353882;
					break;
				
				case 8:
					iVar0 = -631760477;
					break;
				
				case 9:
					iVar0 = -1372848492;
					break;
				
				case 10:
					iVar0 = 410882957;
					break;
				
				case 11:
					iVar0 = 1102544804;
					break;
				
				case 12:
					iVar0 = 970598228;
					break;
				
				case 13:
					iVar0 = 1274868363;
					break;
				
				case 14:
					iVar0 = -1757836725;
					break;
				
				case 15:
					iVar0 = -777172681;
					break;
				
				case 16:
					iVar0 = 1887331236;
					break;
				
				case 17:
					iVar0 = 482197771;
					break;
				
				case 18:
					iVar0 = -1071380347;
					break;
				
				case 19:
					iVar0 = 237764926;
					break;
				
				case 20:
					iVar0 = -674927303;
					break;
				
				case 21:
					iVar0 = -566387422;
					break;
				
				case 22:
					iVar0 = 196747873;
					break;
				
				case 23:
					iVar0 = -2022483795;
					break;
				
				case 24:
					iVar0 = 1886268224;
					break;
				
				case 25:
					iVar0 = 1074745671;
					break;
				
				case 26:
					iVar0 = 719660200;
					break;
				
				case 27:
					iVar0 = 544021352;
					break;
				
				case 28:
					iVar0 = 1741861769;
					break;
				
				case 29:
					iVar0 = -1848994066;
					break;
				
				case 30:
					iVar0 = 867799010;
					break;
				
				case 31:
					iVar0 = -410205223;
					break;
				
				case 32:
					iVar0 = 1104234922;
					break;
				
				case 33:
					iVar0 = 661493923;
					break;
				
				case 34:
					iVar0 = -1529242755;
					break;
				
				case 35:
					iVar0 = -1259134696;
					break;
				
				case 36:
					iVar0 = 1909189272;
					break;
				
				case 37:
					iVar0 = 1115909093;
					break;
				
				case 38:
					iVar0 = 1561920505;
					break;
				
				case 39:
					iVar0 = -507495760;
					break;
				
				case 40:
					iVar0 = -331467772;
					break;
				
				case 41:
					iVar0 = 686471183;
					break;
				
				case 42:
					iVar0 = 1854776567;
					break;
				
				case 43:
					iVar0 = -1620126302;
					break;
				
				case 44:
					iVar0 = -941272559;
					break;
				
				case 45:
					iVar0 = -208911803;
					break;
				
				case 46:
					iVar0 = -447711397;
					break;
				
				case 47:
					iVar0 = -746882698;
					break;
				
				case 48:
					iVar0 = -1132721664;
					break;
				
				case 49:
					iVar0 = 987469656;
					break;
				
				case 50:
					iVar0 = 1456336509;
					break;
				
				case 51:
					iVar0 = -834353991;
					break;
				
				case 52:
					iVar0 = 872704284;
					break;
				
				case 53:
					iVar0 = -631322662;
					break;
				
				case 54:
					iVar0 = -1728685474;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2124201592;
					break;
				
				case 1:
					iVar0 = -2098947590;
					break;
				
				case 2:
					iVar0 = 1531094468;
					break;
				
				case 3:
					iVar0 = 117401876;
					break;
				
				case 4:
					iVar0 = 1078682497;
					break;
				
				case 5:
					iVar0 = 1011753235;
					break;
				
				case 6:
					iVar0 = 941800958;
					break;
				
				case 7:
					iVar0 = 1830407356;
					break;
				
				case 8:
					iVar0 = 464687292;
					break;
				
				case 9:
					iVar0 = -1566741232;
					break;
				
				case 10:
					iVar0 = -1660945322;
					break;
				
				case 11:
					iVar0 = -1797613329;
					break;
				
				case 12:
					iVar0 = -1558399629;
					break;
				
				case 13:
					iVar0 = -1405937764;
					break;
				
				case 14:
					iVar0 = -982130927;
					break;
				
				case 15:
					iVar0 = 223240013;
					break;
				
				case 16:
					iVar0 = 159274291;
					break;
				
				case 17:
					iVar0 = 1504306544;
					break;
				
				case 18:
					iVar0 = 1841130506;
					break;
				
				case 19:
					iVar0 = 2049897956;
					break;
				
				case 20:
					iVar0 = 903794909;
					break;
				
				case 21:
					iVar0 = -391595372;
					break;
				
				case 22:
					iVar0 = 886810209;
					break;
				
				case 23:
					iVar0 = -2079788230;
					break;
				
				case 24:
					iVar0 = 838982985;
					break;
				
				case 25:
					iVar0 = 1617472902;
					break;
				
				case 26:
					iVar0 = 1046206681;
					break;
				
				case 27:
					iVar0 = 1483171323;
					break;
				
				case 28:
					iVar0 = -988501280;
					break;
				
				case 29:
					iVar0 = -214906006;
					break;
				
				case 30:
					iVar0 = 500482303;
					break;
				
				case 31:
					iVar0 = 1862507111;
					break;
				
				case 32:
					iVar0 = 310284501;
					break;
				
				case 33:
					iVar0 = -882629065;
					break;
				
				case 34:
					iVar0 = 2031587082;
					break;
				
				case 35:
					iVar0 = -831834716;
					break;
				
				case 36:
					iVar0 = 1107404867;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1311154784;
					break;
				
				case 1:
					iVar0 = -1291952903;
					break;
				
				case 2:
					iVar0 = -1622444098;
					break;
				
				case 3:
					iVar0 = 408192225;
					break;
				
				case 4:
					iVar0 = -1403128555;
					break;
				
				case 5:
					iVar0 = 1987142870;
					break;
				
				case 6:
					iVar0 = 1663218586;
					break;
				
				case 7:
					iVar0 = 633712403;
					break;
				
				case 8:
					iVar0 = -295689028;
					break;
				
				case 9:
					iVar0 = 234062309;
					break;
				
				case 10:
					iVar0 = 1426219628;
					break;
				
				case 11:
					iVar0 = 2123327359;
					break;
				
				case 12:
					iVar0 = -1829802492;
					break;
				
				case 13:
					iVar0 = -1232836011;
					break;
				
				case 14:
					iVar0 = 2067820283;
					break;
				
				case 15:
					iVar0 = 819197656;
					break;
				
				case 16:
					iVar0 = 272929391;
					break;
				
				case 17:
					iVar0 = 1034187331;
					break;
				
				case 18:
					iVar0 = 1093792632;
					break;
				
				case 19:
					iVar0 = -1758137366;
					break;
				
				case 20:
					iVar0 = 989294410;
					break;
				
				case 21:
					iVar0 = -2048333973;
					break;
				
				case 22:
					iVar0 = -482719877;
					break;
				
				case 23:
					iVar0 = 1234311532;
					break;
				
				case 24:
					iVar0 = 1939284556;
					break;
				
				case 25:
					iVar0 = 917809321;
					break;
				
				case 26:
					iVar0 = -998177792;
					break;
				
				case 27:
					iVar0 = -1242608589;
					break;
				
				case 28:
					iVar0 = 1392481335;
					break;
				
				case 29:
					iVar0 = 1352136073;
					break;
				
				case 30:
					iVar0 = -313185164;
					break;
				
				case 31:
					iVar0 = 1031562256;
					break;
				
				case 32:
					iVar0 = -1134706562;
					break;
				
				case 33:
					iVar0 = -2120700196;
					break;
				
				case 34:
					iVar0 = -376434238;
					break;
				
				case 35:
					iVar0 = 1591739866;
					break;
				
				case 36:
					iVar0 = 1044193113;
					break;
				
				case 37:
					iVar0 = -682108547;
					break;
				
				case 38:
					iVar0 = -664141241;
					break;
				
				case 39:
					iVar0 = 1323778901;
					break;
				
				case 40:
					iVar0 = -324618589;
					break;
				
				case 41:
					iVar0 = 960812448;
					break;
				
				case 42:
					iVar0 = -1358197432;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					iVar0 = -808831384;
					break;
				
				case 1:
					iVar0 = 142944341;
					break;
				
				case 2:
					iVar0 = 850565707;
					break;
				
				case 3:
					iVar0 = -789894171;
					break;
				
				case 4:
					iVar0 = -1775728740;
					break;
				
				case 5:
					iVar0 = -808457413;
					break;
				
				case 6:
					iVar0 = 486987393;
					break;
				
				case 7:
					iVar0 = -1237253773;
					break;
				
				case 8:
					iVar0 = -1543762099;
					break;
				
				case 9:
					iVar0 = 1269098716;
					break;
				
				case 10:
					iVar0 = 1221512915;
					break;
				
				case 11:
					iVar0 = 914654722;
					break;
				
				case 12:
					iVar0 = 321739290;
					break;
				
				case 13:
					iVar0 = -1651067813;
					break;
				
				case 14:
					iVar0 = 1878062887;
					break;
				
				case 15:
					iVar0 = 634118882;
					break;
				
				case 16:
					iVar0 = 470404958;
					break;
				
				case 17:
					iVar0 = 666166960;
					break;
				
				case 18:
					iVar0 = 1203490606;
					break;
				
				case 19:
					iVar0 = -432008408;
					break;
				
				case 20:
					iVar0 = 683047626;
					break;
				
				case 21:
					iVar0 = -420911112;
					break;
				
				case 22:
					iVar0 = 1337041428;
					break;
				
				case 23:
					iVar0 = -1137532101;
					break;
				
				case 24:
					iVar0 = 884422927;
					break;
				
				case 25:
					iVar0 = -1168952148;
					break;
				
				case 26:
					iVar0 = -1829436850;
					break;
				
				case 27:
					iVar0 = 83136452;
					break;
				
				case 28:
					iVar0 = -838099166;
					break;
				
				case 29:
					iVar0 = -1810806490;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2128233223;
					break;
				
				case 1:
					iVar0 = -1435919434;
					break;
				
				case 2:
					iVar0 = -1661854193;
					break;
				
				case 3:
					iVar0 = 1126868326;
					break;
				
				case 4:
					iVar0 = -2064372143;
					break;
				
				case 5:
					iVar0 = -1207771834;
					break;
				
				case 6:
					iVar0 = -599568815;
					break;
				
				case 7:
					iVar0 = -667151410;
					break;
				
				case 8:
					iVar0 = -1189015600;
					break;
				
				case 9:
					iVar0 = -349601129;
					break;
				
				case 10:
					iVar0 = 92612664;
					break;
				
				case 11:
					iVar0 = -845961253;
					break;
				
				case 12:
					iVar0 = -2096818938;
					break;
				
				case 13:
					iVar0 = -1479664699;
					break;
				
				case 14:
					iVar0 = 1233534620;
					break;
				
				case 15:
					iVar0 = 101905590;
					break;
				
				case 16:
					iVar0 = -663299102;
					break;
				
				case 17:
					iVar0 = -2103821244;
					break;
				
				case 18:
					iVar0 = -440768424;
					break;
				
				case 19:
					iVar0 = -827162039;
					break;
				
				case 20:
					iVar0 = -312295511;
					break;
				
				case 21:
					iVar0 = 1180875963;
					break;
				
				case 22:
					iVar0 = -1590337689;
					break;
				
				case 23:
					iVar0 = 1897744184;
					break;
				
				case 24:
					iVar0 = -1924433270;
					break;
				
				case 25:
					iVar0 = 1356124575;
					break;
				
				case 26:
					iVar0 = 433954513;
					break;
				
				case 27:
					iVar0 = -1532697517;
					break;
				
				case 28:
					iVar0 = -121446169;
					break;
				
				case 29:
					iVar0 = 1254014755;
					break;
				
				case 30:
					iVar0 = -54332285;
					break;
				
				case 31:
					iVar0 = 2044532910;
					break;
				
				case 32:
					iVar0 = -808457413;
					break;
				
				case 33:
					iVar0 = -362150785;
					break;
				
				case 34:
					iVar0 = -1349095620;
					break;
				
				case 35:
					iVar0 = 1645267888;
					break;
				
				case 36:
					iVar0 = 408825843;
					break;
				
				case 37:
					iVar0 = -1756021720;
					break;
				
				case 38:
					iVar0 = 1284356689;
					break;
				
				case 39:
					iVar0 = 740289177;
					break;
				
				case 40:
					iVar0 = 67753863;
					break;
				
				case 41:
					iVar0 = -2045594037;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					iVar0 = -114291515;
					break;
				
				case 1:
					iVar0 = 2006142190;
					break;
				
				case 2:
					iVar0 = 55628203;
					break;
				
				case 3:
					iVar0 = 301427732;
					break;
				
				case 4:
					iVar0 = -634879114;
					break;
				
				case 5:
					iVar0 = 788045382;
					break;
				
				case 6:
					iVar0 = -140902153;
					break;
				
				case 7:
					iVar0 = 1836027715;
					break;
				
				case 8:
					iVar0 = 743478836;
					break;
				
				case 9:
					iVar0 = 1753414259;
					break;
				
				case 10:
					iVar0 = -159126838;
					break;
				
				case 11:
					iVar0 = 1265391242;
					break;
				
				case 12:
					iVar0 = 640818791;
					break;
				
				case 13:
					iVar0 = -1353081087;
					break;
				
				case 14:
					iVar0 = 1672195559;
					break;
				
				case 15:
					iVar0 = 86520421;
					break;
				
				case 16:
					iVar0 = 741090084;
					break;
				
				case 17:
					iVar0 = 390201602;
					break;
				
				case 18:
					iVar0 = -255678177;
					break;
				
				case 19:
					iVar0 = 822018448;
					break;
				
				case 20:
					iVar0 = 6774487;
					break;
				
				case 21:
					iVar0 = -570033273;
					break;
				
				case 22:
					iVar0 = -2115793025;
					break;
				
				case 23:
					iVar0 = -1606187161;
					break;
				
				case 24:
					iVar0 = -1009268949;
					break;
				
				case 25:
					iVar0 = -618617997;
					break;
				
				case 26:
					iVar0 = -1523428744;
					break;
				
				case 27:
					iVar0 = 1873600305;
					break;
				
				case 28:
					iVar0 = -2140431165;
					break;
				
				case 29:
					iVar0 = -1289178744;
					break;
				
				case 30:
					iVar0 = -1842748181;
					break;
				
				case 31:
					iVar0 = -1404136503;
					break;
				
				case 32:
					iVar0 = -609625092;
					break;
				
				case 33:
					iVar0 = -405626514;
					break;
				
				case 34:
					iVar0 = 2035069708;
					break;
				
				case 35:
					iVar0 = -239841468;
					break;
				
				case 36:
					iVar0 = 1790834270;
					break;
				
				case 37:
					iVar0 = 627535535;
					break;
				
				case 38:
					iVar0 = -757735410;
					break;
				
				case 39:
					iVar0 = 884483972;
					break;
				
				case 40:
					iVar0 = 1491277511;
					break;
				
				case 41:
					iVar0 = 916547552;
					break;
				
				case 42:
					iVar0 = 301304410;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1131912276;
					break;
				
				case 1:
					iVar0 = 448402357;
					break;
				
				case 2:
					iVar0 = 1127861609;
					break;
				
				case 3:
					iVar0 = -186537451;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					iVar0 = 782665360;
					break;
				
				case 1:
					iVar0 = -823509173;
					break;
				
				case 2:
					iVar0 = 1074326203;
					break;
				
				case 3:
					iVar0 = 630371791;
					break;
				
				case 4:
					iVar0 = -1207431159;
					break;
				
				case 5:
					iVar0 = -50547061;
					break;
				
				case 6:
					iVar0 = 1981688531;
					break;
				
				case 7:
					iVar0 = -1860900134;
					break;
				
				case 8:
					iVar0 = 2071877360;
					break;
				
				case 9:
					iVar0 = 562680400;
					break;
				
				case 10:
					iVar0 = -32236122;
					break;
				
				case 11:
					iVar0 = -692292317;
					break;
				
				case 12:
					iVar0 = -1435527158;
					break;
				
				case 13:
					iVar0 = 1489874736;
					break;
				
				case 14:
					iVar0 = -212993243;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1912215274;
					break;
				
				case 1:
					iVar0 = -34623805;
					break;
				
				case 2:
					iVar0 = -1205689942;
					break;
				
				case 3:
					iVar0 = 1127131465;
					break;
				
				case 4:
					iVar0 = -1647941228;
					break;
				
				case 5:
					iVar0 = -2007026063;
					break;
				
				case 6:
					iVar0 = 837858166;
					break;
				
				case 7:
					iVar0 = 788747387;
					break;
				
				case 8:
					iVar0 = 353883353;
					break;
				
				case 9:
					iVar0 = -488123221;
					break;
				
				case 10:
					iVar0 = 1922257928;
					break;
				
				case 11:
					iVar0 = -1693015116;
					break;
				
				case 12:
					iVar0 = 456714581;
					break;
				
				case 13:
					iVar0 = -1683328900;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1171614426;
					break;
				
				case 1:
					iVar0 = -713569950;
					break;
				
				case 2:
					iVar0 = -2072933068;
					break;
				
				case 3:
					iVar0 = 1938952078;
					break;
				
				case 4:
					iVar0 = 627094268;
					break;
				
				case 5:
					iVar0 = -1961627517;
					break;
				
				case 6:
					iVar0 = -956048545;
					break;
				
				case 7:
					iVar0 = 1917016601;
					break;
				
				case 8:
					iVar0 = -1255698084;
					break;
				
				case 9:
					iVar0 = 1682114128;
					break;
				
				case 10:
					iVar0 = -305727417;
					break;
				
				case 11:
					iVar0 = -1912017790;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1886712733;
					break;
				
				case 1:
					iVar0 = -2130482718;
					break;
				
				case 2:
					iVar0 = 444583674;
					break;
				
				case 3:
					iVar0 = -784816453;
					break;
				
				case 4:
					iVar0 = 48339065;
					break;
				
				case 5:
					iVar0 = -1705304628;
					break;
				
				case 6:
					iVar0 = -2107990196;
					break;
				
				case 7:
					iVar0 = 475220373;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1560980623;
					break;
				
				case 1:
					iVar0 = 1147287684;
					break;
				
				case 2:
					iVar0 = 1783355638;
					break;
				
				case 3:
					iVar0 = -2076478498;
					break;
				
				case 4:
					iVar0 = -1700801569;
					break;
				
				case 5:
					iVar0 = -845979911;
					break;
				
				case 6:
					iVar0 = 1491375716;
					break;
				
				case 7:
					iVar0 = -769147461;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 0:
					iVar0 = -16948145;
					break;
				
				case 1:
					iVar0 = 2053223216;
					break;
				
				case 2:
					iVar0 = -233098306;
					break;
				
				case 3:
					iVar0 = 121658888;
					break;
				
				case 4:
					iVar0 = 444171386;
					break;
				
				case 5:
					iVar0 = -1745203402;
					break;
				
				case 6:
					iVar0 = -310465116;
					break;
				
				case 7:
					iVar0 = 904750859;
					break;
				
				case 8:
					iVar0 = -2052737935;
					break;
				
				case 9:
					iVar0 = -810318068;
					break;
				
				case 10:
					iVar0 = 1747439474;
					break;
				
				case 11:
					iVar0 = 1951180813;
					break;
				
				case 12:
					iVar0 = 1876516712;
					break;
				
				case 13:
					iVar0 = -120287622;
					break;
				
				case 14:
					iVar0 = 699456151;
					break;
				
				case 15:
					iVar0 = 1488164764;
					break;
				
				case 16:
					iVar0 = 296357396;
					break;
				
				case 17:
					iVar0 = 1162065741;
					break;
				
				case 18:
					iVar0 = -1126264336;
					break;
				
				case 19:
					iVar0 = 1475773103;
					break;
				
				case 20:
					iVar0 = 1026149675;
					break;
				
				case 21:
					iVar0 = 682434785;
					break;
				
				case 22:
					iVar0 = 1945374990;
					break;
				
				case 23:
					iVar0 = 219613597;
					break;
				
				case 24:
					iVar0 = 1739845664;
					break;
				
				case 25:
					iVar0 = -1987130134;
					break;
				
				case 26:
					iVar0 = -1346687836;
					break;
				
				case 27:
					iVar0 = -907477130;
					break;
				
				case 28:
					iVar0 = -119658072;
					break;
				
				case 29:
					iVar0 = 1802742206;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1518533038;
					break;
				
				case 1:
					iVar0 = 1353720154;
					break;
				
				case 2:
					iVar0 = 569305213;
					break;
				
				case 3:
					iVar0 = -2137348917;
					break;
				
				case 4:
					iVar0 = -730904777;
					break;
				
				case 5:
					iVar0 = 1956216962;
					break;
				
				case 6:
					iVar0 = -877478386;
					break;
				
				case 7:
					iVar0 = -1352468814;
					break;
				
				case 8:
					iVar0 = -1649536104;
					break;
				
				case 9:
					iVar0 = 177270108;
					break;
				
				case 10:
					iVar0 = 387748548;
					break;
				
				case 11:
					iVar0 = -1881846085;
					break;
				
				case 12:
					iVar0 = 1502869817;
					break;
				
				case 13:
					iVar0 = 2112052861;
					break;
				
				case 14:
					iVar0 = 1653666139;
					break;
			}
			break;
		
		case 18:
			switch (iParam1)
			{
				case 0:
					iVar0 = 744705981;
					break;
				
				case 1:
					iVar0 = -1660661558;
					break;
				
				case 2:
					iVar0 = 1044954915;
					break;
				
				case 3:
					iVar0 = 1621617168;
					break;
				
				case 4:
					iVar0 = -339587598;
					break;
				
				case 5:
					iVar0 = -1600252419;
					break;
				
				case 6:
					iVar0 = -82626025;
					break;
				
				case 7:
					iVar0 = 1075432268;
					break;
				
				case 8:
					iVar0 = 710198397;
					break;
				
				case 9:
					iVar0 = -1671539132;
					break;
				
				case 10:
					iVar0 = 1543134283;
					break;
				
				case 11:
					iVar0 = -1845487887;
					break;
				
				case 12:
					iVar0 = 745926877;
					break;
				
				case 13:
					iVar0 = -1984275979;
					break;
				
				case 14:
					iVar0 = -42959138;
					break;
				
				case 15:
					iVar0 = 1181327175;
					break;
				
				case 16:
					iVar0 = -2118308144;
					break;
				
				case 17:
					iVar0 = -726768679;
					break;
				
				case 18:
					iVar0 = 2025593404;
					break;
			}
			break;
		
		case 19:
			switch (iParam1)
			{
				case 0:
					iVar0 = -644710429;
					break;
				
				case 1:
					iVar0 = 970356638;
					break;
				
				case 2:
					iVar0 = -1746576111;
					break;
				
				case 3:
					iVar0 = -1214505995;
					break;
				
				case 4:
					iVar0 = -2122757008;
					break;
				
				case 5:
					iVar0 = -1673356438;
					break;
				
				case 6:
					iVar0 = 1058115860;
					break;
				
				case 7:
					iVar0 = 1341619767;
					break;
				
				case 8:
					iVar0 = 165154707;
					break;
				
				case 9:
					iVar0 = 1077420264;
					break;
				
				case 10:
					iVar0 = -1214293858;
					break;
				
				case 11:
					iVar0 = -1295027632;
					break;
				
				case 12:
					iVar0 = 368211810;
					break;
				
				case 13:
					iVar0 = -901163259;
					break;
				
				case 14:
					iVar0 = -1763555241;
					break;
				
				case 15:
					iVar0 = -1523619738;
					break;
				
				case 16:
					iVar0 = 1043222410;
					break;
				
				case 17:
					iVar0 = -975345305;
					break;
				
				case 18:
					iVar0 = -1700874274;
					break;
				
				case 19:
					iVar0 = -32878452;
					break;
				
				case 20:
					iVar0 = -1007528109;
					break;
				
				case 21:
					iVar0 = -749299473;
					break;
				
				case 22:
					iVar0 = -392675425;
					break;
				
				case 23:
					iVar0 = 1036591958;
					break;
				
				case 24:
					iVar0 = 447548909;
					break;
				
				case 25:
					iVar0 = 1692272545;
					break;
			}
			break;
		
		case 20:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1281684762;
					break;
				
				case 1:
					iVar0 = 1824333165;
					break;
				
				case 2:
					iVar0 = 970385471;
					break;
				
				case 3:
					iVar0 = 1565978651;
					break;
				
				case 4:
					iVar0 = -1386191424;
					break;
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1033245328;
					break;
				
				case 1:
					iVar0 = 276773164;
					break;
				
				case 2:
					iVar0 = 509498602;
					break;
				
				case 3:
					iVar0 = -1043459709;
					break;
				
				case 4:
					iVar0 = -1030275036;
					break;
				
				case 5:
					iVar0 = 771711535;
					break;
				
				case 6:
					iVar0 = -1066334226;
					break;
				
				case 7:
					iVar0 = -282946103;
					break;
				
				case 8:
					iVar0 = 290013743;
					break;
				
				case 9:
					iVar0 = 231083307;
					break;
				
				case 10:
					iVar0 = 1070967343;
					break;
				
				case 11:
					iVar0 = -2100640717;
					break;
				
				case 12:
					iVar0 = -311022263;
					break;
			}
			break;
		
		case 22:
			switch (iParam1)
			{
				case 0:
					iVar0 = -422877666;
					break;
				
				case 1:
					iVar0 = -731262150;
					break;
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1590337689;
					break;
				
				case 1:
					iVar0 = 941494461;
					break;
				
				case 2:
					iVar0 = 989294410;
					break;
				
				case 3:
					iVar0 = 1180875963;
					break;
				
				case 4:
					iVar0 = -827162039;
					break;
				
				case 5:
					iVar0 = -312295511;
					break;
				
				case 6:
					iVar0 = -1649536104;
					break;
				
				case 7:
					iVar0 = 682434785;
					break;
				
				case 8:
					iVar0 = -1912017790;
					break;
				
				case 9:
					iVar0 = 884483972;
					break;
				
				case 10:
					iVar0 = -1242608589;
					break;
				
				case 11:
					iVar0 = 1483171323;
					break;
				
				case 12:
					iVar0 = 886810209;
					break;
				
				case 13:
					iVar0 = 1489874736;
					break;
				
				case 14:
					iVar0 = 345756458;
					break;
				
				case 15:
					iVar0 = 2069146067;
					break;
				
				case 16:
					iVar0 = -1988428699;
					break;
				
				case 17:
					iVar0 = -307958377;
					break;
				
				case 18:
					iVar0 = -638562243;
					break;
				
				case 19:
					iVar0 = -286046740;
					break;
			}
			break;
		
		case 24:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1210451983;
					break;
				
				case 1:
					iVar0 = 1897744184;
					break;
				
				case 2:
					iVar0 = -32236122;
					break;
				
				case 3:
					iVar0 = -1924433270;
					break;
				
				case 4:
					iVar0 = 1356124575;
					break;
				
				case 5:
					iVar0 = 562680400;
					break;
				
				case 6:
					iVar0 = 884483972;
					break;
				
				case 7:
					iVar0 = -1881846085;
					break;
				
				case 8:
					iVar0 = 1489874736;
					break;
				
				case 9:
					iVar0 = -1693015116;
					break;
				
				case 10:
					iVar0 = -1435527158;
					break;
				
				case 11:
					iVar0 = 1483171323;
					break;
				
				case 12:
					iVar0 = -212993243;
					break;
				
				case 13:
					iVar0 = -1763555241;
					break;
				
				case 14:
					iVar0 = -1984275979;
					break;
				
				case 15:
					iVar0 = -392675425;
					break;
				
				case 16:
					iVar0 = -1700874274;
					break;
				
				case 17:
					iVar0 = 1181327175;
					break;
				
				case 18:
					iVar0 = -644710429;
					break;
				
				case 19:
					iVar0 = -1386191424;
					break;
				
				case 20:
					iVar0 = -749299473;
					break;
				
				case 21:
					iVar0 = -975345305;
					break;
				
				case 22:
					iVar0 = 1565978651;
					break;
				
				case 23:
					iVar0 = 1036591958;
					break;
				
				case 24:
					iVar0 = -42959138;
					break;
				
				case 25:
					iVar0 = 1043222410;
					break;
				
				case 26:
					iVar0 = -32878452;
					break;
				
				case 27:
					iVar0 = 447548909;
					break;
				
				case 28:
					iVar0 = -2118308144;
					break;
				
				case 29:
					iVar0 = 433954513;
					break;
				
				case 30:
					iVar0 = 159274291;
					break;
				
				case 31:
					iVar0 = -1590337689;
					break;
				
				case 32:
					iVar0 = 941494461;
					break;
				
				case 33:
					iVar0 = 1180875963;
					break;
				
				case 34:
					iVar0 = 682434785;
					break;
				
				case 35:
					iVar0 = -1242608589;
					break;
				
				case 36:
					iVar0 = 886810209;
					break;
				
				case 37:
					iVar0 = -692292317;
					break;
				
				case 38:
					iVar0 = 1254014755;
					break;
				
				case 39:
					iVar0 = 2044532910;
					break;
				
				case 40:
					iVar0 = 2069146067;
					break;
				
				case 41:
					iVar0 = 1692272545;
					break;
				
				case 42:
					iVar0 = -638562243;
					break;
				
				case 43:
					iVar0 = 1945374990;
					break;
				
				case 44:
					iVar0 = 1653666139;
					break;
				
				case 45:
					iVar0 = 219613597;
					break;
				
				case 46:
					iVar0 = -726768679;
					break;
				
				case 47:
					iVar0 = 1416466158;
					break;
				
				case 48:
					iVar0 = 394110044;
					break;
				
				case 49:
					iVar0 = -1254331310;
					break;
			}
			break;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					return func_225(668439077);
				
				case 1:
					return func_225(2139203625);
				
				case 2:
					return func_225(-801550069);
				
				case 3:
					return func_225(-27326686);
				
				case 4:
					return func_225(-688189648);
				
				case 5:
					return func_225(1009171724);
				
				case 6:
					if (Global_1388230)
					{
						return 444994115;
					}
					return func_225(444994115);
				
				case 7:
					return func_225(628003514);
				
				case 8:
					return func_225(1721676810);
				
				case 9:
					return func_225(-1146969353);
				
				case 10:
					return func_225(-2061049099);
				
				case 11:
					return func_225(540101442);
				
				default:
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					iVar0 = 340154634;
					break;
				
				case 1:
					iVar0 = -1960756985;
					break;
				
				case 2:
					iVar0 = 1492612435;
					break;
				
				case 3:
					iVar0 = 1181339704;
					break;
			}
			break;
	}
	if (iVar0 == 0)
	{
	}
	return iVar0;
}

int func_225(int iParam0)
{
	switch (Global_4456448.f_226026)
	{
		case 1:
			switch (iParam0)
			{
				case 668439077:
				case -1694081890:
				case -2042350822:
					iVar0 = 668439077;
					break;
				
				case 2139203625:
				case -1890996696:
				case 2038858402:
					iVar0 = 2139203625;
					break;
				
				case -801550069:
				case 679453769:
				case 1909700336:
					iVar0 = -801550069;
					break;
				
				case -27326686:
				case -1812949672:
				case -1374500452:
					iVar0 = -27326686;
					break;
				
				case -688189648:
				case -1375060657:
				case -1293924613:
					iVar0 = -688189648;
					break;
				
				case 1009171724:
				case -1924800695:
				case -1744505657:
					iVar0 = 1009171724;
					break;
				
				case 444994115:
				case 1637620610:
				case -755532233:
					iVar0 = 444994115;
					break;
				
				case 628003514:
				case 1537277726:
				case 1239571361:
					iVar0 = 628003514;
					break;
				
				case 1721676810:
				case 840387324:
				case -715746948:
					iVar0 = 1721676810;
					break;
				
				case -1146969353:
				case 1542143200:
				case -579747861:
					iVar0 = -1146969353;
					break;
				
				case -2061049099:
				case 373261600:
				case 1742022738:
					iVar0 = -2061049099;
					break;
				
				case 540101442:
				case -1106120762:
				case -1478704292:
					iVar0 = 540101442;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 668439077:
				case -1694081890:
				case -2042350822:
					iVar0 = -1694081890;
					break;
				
				case 2139203625:
				case -1890996696:
				case 2038858402:
					iVar0 = -1890996696;
					break;
				
				case -801550069:
				case 679453769:
				case 1909700336:
					iVar0 = 679453769;
					break;
				
				case -27326686:
				case -1812949672:
				case -1374500452:
					iVar0 = -1812949672;
					break;
				
				case -688189648:
				case -1375060657:
				case -1293924613:
					iVar0 = -1375060657;
					break;
				
				case 1009171724:
				case -1924800695:
				case -1744505657:
					iVar0 = -1924800695;
					break;
				
				case 444994115:
				case 1637620610:
				case -755532233:
					iVar0 = 1637620610;
					break;
				
				case 628003514:
				case 1537277726:
				case 1239571361:
					iVar0 = 1537277726;
					break;
				
				case 1721676810:
				case 840387324:
				case -715746948:
					iVar0 = 840387324;
					break;
				
				case -1146969353:
				case 1542143200:
				case -579747861:
					iVar0 = 1542143200;
					break;
				
				case -2061049099:
				case 373261600:
				case 1742022738:
					iVar0 = 373261600;
					break;
				
				case 540101442:
				case -1106120762:
				case -1478704292:
					iVar0 = -1106120762;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 668439077:
				case -1694081890:
				case -2042350822:
					iVar0 = -2042350822;
					break;
				
				case 2139203625:
				case -1890996696:
				case 2038858402:
					iVar0 = 2038858402;
					break;
				
				case -801550069:
				case 679453769:
				case 1909700336:
					iVar0 = 1909700336;
					break;
				
				case -27326686:
				case -1812949672:
				case -1374500452:
					iVar0 = -1374500452;
					break;
				
				case -688189648:
				case -1375060657:
				case -1293924613:
					iVar0 = -1293924613;
					break;
				
				case 1009171724:
				case -1924800695:
				case -1744505657:
					iVar0 = -1744505657;
					break;
				
				case 444994115:
				case 1637620610:
				case -755532233:
					iVar0 = -755532233;
					break;
				
				case 628003514:
				case 1537277726:
				case 1239571361:
					iVar0 = 1239571361;
					break;
				
				case 1721676810:
				case 840387324:
				case -715746948:
					iVar0 = -715746948;
					break;
				
				case -1146969353:
				case 1542143200:
				case -579747861:
					iVar0 = -579747861;
					break;
				
				case -2061049099:
				case 373261600:
				case 1742022738:
					iVar0 = 1742022738;
					break;
				
				case 540101442:
				case -1106120762:
				case -1478704292:
					iVar0 = -1478704292;
					break;
			}
			break;
	}
	if (unk_0x468C1AC3ABF95C57(iVar0))
	{
		return iVar0;
	}
	return iParam0;
}

int func_226(int iParam0)
{
	if (Global_1694319[iParam0] != -1)
	{
		return Global_1694319[iParam0];
	}
	iVar0 = 0;
	while (iVar0 <= 56)
	{
		if (func_224(iParam0, iVar0) == 0)
		{
			Global_1694319[iParam0] = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

void func_227(int iParam0)
{
	iVar6 = unk_0x6D954AF55D3925DB(iParam0, "weap");
	Global_4456448.f_116791 = unk_0x8A83B52A17A321DB(iVar6, "no");
	if (Global_4456448 == 0)
	{
		if (Global_4456448.f_116791 > 60)
		{
			Global_4456448.f_116791 = 60;
		}
	}
	else if (Global_4456448.f_116791 > 60)
	{
		Global_4456448.f_116791 = 60;
	}
	Global_4456448.f_116793 = unk_0x8A83B52A17A321DB(iVar6, "time");
	Global_4456448.f_116794 = unk_0x8A83B52A17A321DB(iVar6, "pal");
	Global_4456448.f_231 = unk_0x8A83B52A17A321DB(iVar6, "blip");
	iVar7 = unk_0x7619952D26DF7783(iVar6, "loc");
	iVar8 = unk_0x7619952D26DF7783(iVar6, "head");
	iVar9 = unk_0x7619952D26DF7783(iVar6, "rotx");
	iVar10 = unk_0x7619952D26DF7783(iVar6, "roty");
	iVar11 = unk_0x7619952D26DF7783(iVar6, "type");
	iVar12 = unk_0x7619952D26DF7783(iVar6, "sub");
	iVar13 = unk_0x7619952D26DF7783(iVar6, "bits");
	iVar14 = unk_0x7619952D26DF7783(iVar6, "clip");
	iVar15 = unk_0x7619952D26DF7783(iVar6, "brest1");
	iVar16 = unk_0x7619952D26DF7783(iVar6, "brest2");
	iVar17 = unk_0x7619952D26DF7783(iVar6, "brest3");
	iVar18 = unk_0x7619952D26DF7783(iVar6, "brest4");
	iVar19 = unk_0x7619952D26DF7783(iVar6, "dmgmult");
	iVar20 = unk_0x7619952D26DF7783(iVar6, "rput");
	iVar21 = unk_0x7619952D26DF7783(iVar6, "wcoid");
	iVar22 = unk_0x7619952D26DF7783(iVar6, "vput");
	iVar23 = unk_0x7619952D26DF7783(iVar6, "vasst");
	iVar24 = unk_0x7619952D26DF7783(iVar6, "vasso");
	iVar25 = unk_0x7619952D26DF7783(iVar6, "vasss");
	iVar26 = unk_0x7619952D26DF7783(iVar6, "vasst2");
	iVar27 = unk_0x7619952D26DF7783(iVar6, "vasso2");
	iVar28 = unk_0x7619952D26DF7783(iVar6, "vasss2");
	iVar29 = unk_0x7619952D26DF7783(iVar6, "vasst3");
	iVar30 = unk_0x7619952D26DF7783(iVar6, "vasso3");
	iVar31 = unk_0x7619952D26DF7783(iVar6, "vasss3");
	iVar32 = unk_0x7619952D26DF7783(iVar6, "vasst4");
	iVar33 = unk_0x7619952D26DF7783(iVar6, "vasso4");
	iVar34 = unk_0x7619952D26DF7783(iVar6, "vasss4");
	iVar35 = unk_0x7619952D26DF7783(iVar6, "vclnr");
	iVar36 = unk_0x7619952D26DF7783(iVar6, "vclnt");
	iVar37 = unk_0x7619952D26DF7783(iVar6, "vclnrl");
	iVar38 = unk_0x7619952D26DF7783(iVar6, "ipdi");
	iVar39 = unk_0x7619952D26DF7783(iVar6, "iwati");
	iVar40 = unk_0x7619952D26DF7783(iVar6, "iptnp");
	iVar41 = unk_0x7619952D26DF7783(iVar6, "vbmbl");
	iVar42 = unk_0x7619952D26DF7783(iVar6, "vbmbm");
	iVar43 = unk_0x7619952D26DF7783(iVar6, "wspg");
	iVar44 = unk_0x7619952D26DF7783(iVar6, "wsspg");
	iVar66 = unk_0x7619952D26DF7783(iVar6, "wcpm");
	uVar68 = 1;
	Var70.f_10 = 4;
	Var70.f_15 = 4;
	Var70.f_20 = 4;
	Global_4456448.f_124060 = unk_0xAF09C5F2B0AB2428(iVar6, "randtyp");
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_116791 - 1))
	{
		if (iVar0 < 60)
		{
			Global_4456448.f_116800[iVar0] = { unk_0x6403E33233A20F75(iVar7, iVar0) };
			Global_4456448.f_116800[iVar0].f_3.f_2 = unk_0x73F91AA610E60211(iVar8, iVar0);
			Global_4456448.f_116800[iVar0].f_3 = unk_0x73F91AA610E60211(iVar9, iVar0);
			Global_4456448.f_116800[iVar0].f_3.f_1 = unk_0x73F91AA610E60211(iVar10, iVar0);
			iVar1 = unk_0xE082EE0DCA9466C4(iVar11, iVar0);
			Global_4456448.f_116800[iVar0].f_15 = iVar1;
			func_199("wtPreReq", &(Global_4456448.f_116800[iVar0].f_116), &iVar6, &iVar67, iVar0, -1, -2340845);
			func_195(&Var70, &iVar6, &(Global_4456448.f_116800[iVar0].f_93), iVar0, 7);
			if (Global_4456448.f_197286 == 0)
			{
				iVar95 = 0;
				while (iVar95 <= 59)
				{
					if (Global_4456448.f_116800[iVar95].f_15 == -48884066)
					{
						Global_4456448.f_116800[iVar95].f_15 = -105925489;
					}
					iVar95++;
				}
			}
			if (!func_230(Global_4456448.f_116800[iVar0].f_15))
			{
				if (Global_4456448.f_116800[iVar0].f_15 == 127042729)
				{
					Global_4456448.f_116800[iVar0].f_15 = -30788308;
				}
				else
				{
					Global_4456448.f_116800[iVar0].f_15 = -105925489;
				}
			}
			Global_4456448.f_116800[iVar0].f_6 = unk_0xE082EE0DCA9466C4(iVar12, iVar0);
			Global_4456448.f_116800[iVar0].f_8 = unk_0xE082EE0DCA9466C4(iVar13, iVar0);
			Global_4456448.f_116800[iVar0].f_7 = unk_0xE082EE0DCA9466C4(iVar14, iVar0);
			Global_4456448.f_116800[iVar0].f_23 = unk_0xE082EE0DCA9466C4(iVar20, iVar0);
			Global_4456448.f_116800[iVar0].f_24 = unk_0xE082EE0DCA9466C4(iVar22, iVar0);
			Global_4456448.f_116800[iVar0].f_44 = unk_0xE082EE0DCA9466C4(iVar41, iVar0);
			Global_4456448.f_116800[iVar0].f_45 = unk_0xE082EE0DCA9466C4(iVar42, iVar0);
			Global_4456448.f_116800[iVar0].f_46 = unk_0xE082EE0DCA9466C4(iVar43, iVar0);
			Global_4456448.f_116800[iVar0].f_47 = unk_0xE082EE0DCA9466C4(iVar44, iVar0);
			Global_4456448.f_116800[iVar0].f_41 = unk_0xE082EE0DCA9466C4(iVar38, iVar0);
			Global_4456448.f_116800[iVar0].f_42 = unk_0xE082EE0DCA9466C4(iVar39, iVar0);
			Global_4456448.f_116800[iVar0].f_43 = unk_0xE082EE0DCA9466C4(iVar40, iVar0);
			if (iVar15 != 0 && unk_0x3E932F23D327A136(iVar15, iVar0) == 1)
			{
				Global_4456448.f_116800[iVar0].f_10[0] = unk_0x6A09C1EE250C8CE7(iVar15, iVar0);
			}
			else
			{
				Global_4456448.f_116800[iVar0].f_10[0] = 0;
			}
			if (iVar16 != 0 && unk_0x3E932F23D327A136(iVar16, iVar0) == 1)
			{
				Global_4456448.f_116800[iVar0].f_10[1] = unk_0x6A09C1EE250C8CE7(iVar16, iVar0);
			}
			else
			{
				Global_4456448.f_116800[iVar0].f_10[1] = 0;
			}
			if (iVar17 != 0 && unk_0x3E932F23D327A136(iVar17, iVar0) == 1)
			{
				Global_4456448.f_116800[iVar0].f_10[2] = unk_0x6A09C1EE250C8CE7(iVar17, iVar0);
			}
			else
			{
				Global_4456448.f_116800[iVar0].f_10[2] = 0;
			}
			if (iVar18 != 0 && unk_0x3E932F23D327A136(iVar18, iVar0) == 1)
			{
				Global_4456448.f_116800[iVar0].f_10[3] = unk_0x6A09C1EE250C8CE7(iVar18, iVar0);
			}
			else
			{
				Global_4456448.f_116800[iVar0].f_10[3] = 0;
			}
			if (iVar19 != 0 && unk_0x3E932F23D327A136(iVar19, iVar0) == 3)
			{
				Global_4456448.f_116800[iVar0].f_9 = unk_0x73F91AA610E60211(iVar19, iVar0);
			}
			else
			{
				Global_4456448.f_116800[iVar0].f_9 = 1f;
			}
			if (iVar20 != 0 && unk_0x3E932F23D327A136(iVar20, iVar0) == 2)
			{
				Global_4456448.f_116800[iVar0].f_23 = unk_0xE082EE0DCA9466C4(iVar20, iVar0);
			}
			else
			{
				Global_4456448.f_116800[iVar0].f_23 = -1;
			}
			if (iVar21 != 0 && unk_0x3E932F23D327A136(iVar21, iVar0) == 2)
			{
				Global_4456448.f_116800[iVar0].f_92 = unk_0xE082EE0DCA9466C4(iVar21, iVar0);
			}
			else
			{
				Global_4456448.f_116800[iVar0].f_92 = -1;
			}
			if (iVar38 != 0 && unk_0x3E932F23D327A136(iVar38, iVar0) == 2)
			{
				Global_4456448.f_116800[iVar0].f_41 = unk_0xE082EE0DCA9466C4(iVar38, iVar0);
			}
			else
			{
				Global_4456448.f_116800[iVar0].f_41 = 0;
			}
			if (iVar22 != 0 && unk_0x3E932F23D327A136(iVar22, iVar0) == 2)
			{
				Global_4456448.f_116800[iVar0].f_24 = unk_0xE082EE0DCA9466C4(iVar22, iVar0);
			}
			else
			{
				Global_4456448.f_116800[iVar0].f_24 = -1;
			}
			if (iVar39 != 0 && unk_0x3E932F23D327A136(iVar39, iVar0) == 2)
			{
				Global_4456448.f_116800[iVar0].f_42 = unk_0xE082EE0DCA9466C4(iVar39, iVar0);
			}
			else
			{
				Global_4456448.f_116800[iVar0].f_42 = 0;
			}
			if (iVar39 != 0 && unk_0x3E932F23D327A136(iVar39, iVar0) == 2)
			{
				Global_4456448.f_116800[iVar0].f_43 = unk_0xE082EE0DCA9466C4(iVar40, iVar0);
			}
			else
			{
				Global_4456448.f_116800[iVar0].f_43 = 0;
			}
			if (iVar41 != 0 && unk_0x3E932F23D327A136(iVar41, iVar0) == 2)
			{
				Global_4456448.f_116800[iVar0].f_44 = unk_0xE082EE0DCA9466C4(iVar41, iVar0);
			}
			else
			{
				Global_4456448.f_116800[iVar0].f_44 = 0;
			}
			if (iVar42 != 0 && unk_0x3E932F23D327A136(iVar42, iVar0) == 2)
			{
				Global_4456448.f_116800[iVar0].f_45 = unk_0xE082EE0DCA9466C4(iVar42, iVar0);
			}
			else
			{
				Global_4456448.f_116800[iVar0].f_45 = 0;
			}
			if (iVar43 != 0 && unk_0x3E932F23D327A136(iVar43, iVar0) == 2)
			{
				Global_4456448.f_116800[iVar0].f_46 = unk_0xE082EE0DCA9466C4(iVar43, iVar0);
			}
			else
			{
				Global_4456448.f_116800[iVar0].f_46 = 0;
			}
			if (iVar44 != 0 && unk_0x3E932F23D327A136(iVar44, iVar0) == 2)
			{
				Global_4456448.f_116800[iVar0].f_47 = unk_0xE082EE0DCA9466C4(iVar44, iVar0);
			}
			else
			{
				Global_4456448.f_116800[iVar0].f_47 = 0;
			}
			iVar3 = 0;
			while (iVar3 <= 19)
			{
				StringCopy(&cVar4, "1wwb", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				func_199(&cVar4, &(Global_4456448.f_116800[iVar0].f_48[iVar3]), &iVar6, &(uVar45[iVar3]), iVar0, 0, 0);
				iVar3++;
			}
			if (func_135(1))
			{
				if (iVar37 != 0 && unk_0x3E932F23D327A136(iVar37, iVar0) == 2)
				{
					Global_4456448.f_116800[iVar0].f_29 = unk_0xE082EE0DCA9466C4(iVar37, iVar0);
				}
				else
				{
					Global_4456448.f_116800[iVar0].f_29 = -1;
				}
				if (iVar36 != 0 && unk_0x3E932F23D327A136(iVar36, iVar0) == 2)
				{
					Global_4456448.f_116800[iVar0].f_30 = unk_0xE082EE0DCA9466C4(iVar36, iVar0);
				}
				else
				{
					Global_4456448.f_116800[iVar0].f_30 = -1;
				}
				if (iVar35 != 0 && unk_0x3E932F23D327A136(iVar35, iVar0) == 2)
				{
					Global_4456448.f_116800[iVar0].f_31 = unk_0xE082EE0DCA9466C4(iVar35, iVar0);
				}
				else
				{
					Global_4456448.f_116800[iVar0].f_31 = 0;
				}
				Global_4456448.f_116800[iVar0].f_26 = unk_0xE082EE0DCA9466C4(iVar23, iVar0);
				Global_4456448.f_116800[iVar0].f_27 = unk_0xE082EE0DCA9466C4(iVar24, iVar0);
				Global_4456448.f_116800[iVar0].f_28 = unk_0xE082EE0DCA9466C4(iVar25, iVar0);
				if (Global_4456448.f_116800[iVar0].f_28 == -1)
				{
					Global_4456448.f_116800[iVar0].f_28 = 0;
				}
				if (iVar66 != 0 && unk_0x3E932F23D327A136(iVar66, iVar0) == 2)
				{
					Global_4456448.f_116800[iVar0].f_69 = unk_0xE082EE0DCA9466C4(iVar66, iVar0);
				}
				else
				{
					Global_4456448.f_116800[iVar0].f_69 = 0;
				}
				if (iVar27 != 0 && unk_0x3E932F23D327A136(iVar27, iVar0) == 2)
				{
					Global_4456448.f_116800[iVar0].f_35 = unk_0xE082EE0DCA9466C4(iVar26, iVar0);
					Global_4456448.f_116800[iVar0].f_32 = unk_0xE082EE0DCA9466C4(iVar27, iVar0);
					Global_4456448.f_116800[iVar0].f_38 = unk_0xE082EE0DCA9466C4(iVar28, iVar0);
					Global_4456448.f_116800[iVar0].f_36 = unk_0xE082EE0DCA9466C4(iVar29, iVar0);
					Global_4456448.f_116800[iVar0].f_33 = unk_0xE082EE0DCA9466C4(iVar30, iVar0);
					Global_4456448.f_116800[iVar0].f_39 = unk_0xE082EE0DCA9466C4(iVar31, iVar0);
					Global_4456448.f_116800[iVar0].f_37 = unk_0xE082EE0DCA9466C4(iVar32, iVar0);
					Global_4456448.f_116800[iVar0].f_34 = unk_0xE082EE0DCA9466C4(iVar33, iVar0);
					Global_4456448.f_116800[iVar0].f_40 = unk_0xE082EE0DCA9466C4(iVar34, iVar0);
				}
				else
				{
					Global_4456448.f_116800[iVar0].f_35 = -1;
					Global_4456448.f_116800[iVar0].f_32 = 0;
					Global_4456448.f_116800[iVar0].f_38 = 0;
					Global_4456448.f_116800[iVar0].f_36 = -1;
					Global_4456448.f_116800[iVar0].f_33 = 0;
					Global_4456448.f_116800[iVar0].f_39 = 0;
					Global_4456448.f_116800[iVar0].f_37 = -1;
					Global_4456448.f_116800[iVar0].f_34 = 0;
					Global_4456448.f_116800[iVar0].f_40 = 0;
				}
				func_191("alvwep", &(Global_4456448.f_116800[iVar0].f_117), 1, &iVar6, &uVar68, iVar0, 0, -2340845);
			}
			StringCopy(&cVar4, "comps", 8);
			StringIntConCat(&cVar4, iVar0, 8);
			iVar96 = unk_0x7619952D26DF7783(iVar6, &cVar4);
			iVar2 = 0;
			while (iVar2 <= 5)
			{
				if (iVar96 != 0 && unk_0x3E932F23D327A136(iVar96, iVar2) == 2)
				{
					Global_4456448.f_116800[iVar0].f_16[iVar2] = unk_0xE082EE0DCA9466C4(iVar96, iVar2);
				}
				else
				{
					Global_4456448.f_116800[iVar0].f_16[iVar2] = 0;
				}
				iVar2++;
			}
			StringCopy(&cVar4, "wtSOv", 8);
			StringIntConCat(&cVar4, iVar0, 8);
			iVar97 = unk_0x7619952D26DF7783(iVar6, &cVar4);
			iVar2 = 1;
			while (iVar2 <= 20)
			{
				if (iVar97 != 0 && unk_0x3E932F23D327A136(iVar97, (iVar2 - 1)) == 2)
				{
					iVar98 = unk_0xE082EE0DCA9466C4(iVar97, (iVar2 - 1));
					Global_4456448.f_116800[iVar0].f_70[iVar2] = iVar98;
					if (iVar98 != -1 && Global_4456448.f_116800[iVar0].f_70[iVar2] != 76)
					{
					}
				}
				else
				{
					Global_4456448.f_116800[iVar0].f_70[iVar2] = 76;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_4456448.f_26, 11))
	{
		func_228();
	}
}

void func_228()
{
	iVar0 = Global_4456448.f_116794;
	Global_4456448.f_116794 = func_229(iVar0);
	unk_0x5D96D8530B3D0904(&(Global_4456448.f_26), 11);
}

int func_229(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 453432689;
			break;
		
		case 1:
			return 1593441988;
			break;
		
		case 2:
			return 584646201;
			break;
		
		case 29:
			return -1076751822;
			break;
		
		case 30:
			return -771403250;
			break;
		
		case 37:
			return 137902532;
			break;
		
		case 35:
			return -1716589765;
			break;
		
		case 69:
			if (func_162())
			{
				return -1075685676;
			}
			break;
		
		case 75:
			if (func_162())
			{
				return -879347409;
			}
			break;
		
		case 3:
			return 487013001;
			break;
		
		case 4:
			return 2017895192;
			break;
		
		case 5:
			return -494615257;
			break;
		
		case 40:
			return 984333226;
			break;
		
		case 76:
			if (func_162())
			{
				return 1432025498;
			}
			break;
		
		case 6:
			return 324215364;
			break;
		
		case 7:
			return 736523883;
			break;
		
		case 8:
			return -1660422300;
			break;
		
		case 9:
			return 2144741730;
			break;
		
		case 31:
			return 1627465347;
			break;
		
		case 70:
			if (func_162())
			{
				return 2024373456;
			}
			break;
		
		case 71:
			if (func_162())
			{
				return -608341376;
			}
			break;
		
		case 10:
			return -1074790547;
			break;
		
		case 11:
			return -2084633992;
			break;
		
		case 12:
			return -1357824103;
			break;
		
		case 32:
			return -1063057011;
			break;
		
		case 33:
			return 2132975508;
			break;
		
		case 39:
			return -1466123874;
			break;
		
		case 72:
			if (func_162())
			{
				return 961495388;
			}
			break;
		
		case 73:
			if (func_162())
			{
				return -86904375;
			}
			break;
		
		case 77:
			if (func_162())
			{
				return -2066285827;
			}
			break;
		
		case 78:
			if (func_162())
			{
				return -1768145561;
			}
			break;
		
		case 13:
			return 100416529;
			break;
		
		case 14:
			return 205991906;
			break;
		
		case 41:
			return -952879014;
			break;
		
		case 79:
			if (func_162())
			{
				return 177293209;
			}
			break;
		
		case 15:
			return -1568386805;
			break;
		
		case 16:
			return -1312131151;
			break;
		
		case 17:
			return 1119849093;
			break;
		
		case 38:
			return 2138347493;
			break;
		
		case 43:
			return 1672152130;
			break;
		
		case 55:
			return 1834241177;
			break;
		
		case 18:
			return -1813897027;
			break;
		
		case 19:
			return 741814745;
			break;
		
		case 20:
			return -37975472;
			break;
		
		case 21:
			return 615608432;
			break;
		
		case 22:
			return 883325847;
			break;
		
		case 44:
			return -1420407917;
			break;
		
		case 23:
			return -1716189206;
			break;
		
		case 24:
			return 1737195953;
			break;
		
		case 25:
			return -1786099057;
			break;
		
		case 26:
			return -2067956739;
			break;
		
		case 27:
			return 1141786504;
			break;
		
		case 34:
			return -102323637;
			break;
		
		case 36:
			return -1834847097;
			break;
		
		case 28:
			return -1569615261;
			break;
		
		case 42:
			return 1198879012;
			break;
		
		case 45:
			return -656458692;
			break;
		
		case 46:
			return 171789620;
			break;
		
		case 47:
			return -598887786;
			break;
		
		case 53:
			return -102973651;
			break;
		
		case 48:
			return -581044007;
			break;
		
		case 51:
			return -619010992;
			break;
		
		case 54:
			return -270015777;
			break;
		
		case 49:
			return -275439685;
			break;
		
		case 50:
			return 1649403952;
			break;
		
		case 52:
			return -1951375401;
			break;
		
		case 56:
			return -1045183535;
			break;
		
		case 57:
			return -538741184;
			break;
		
		case 58:
			return 1627465347;
			break;
		
		case 59:
			return 317205821;
			break;
		
		case 60:
			return -1121678507;
			break;
		
		case 61:
			return 125959754;
			break;
		
		case 62:
			return -1169823560;
			break;
		
		case 63:
			return -1810795771;
			break;
		
		case 64:
			return -853065399;
			break;
		
		case 65:
			return 419712736;
			break;
		
		case 66:
			return -1654528753;
			break;
		
		case 67:
			return 1317494643;
			break;
		
		case 68:
			return -1746263880;
			break;
		
		case 80:
			if (func_162())
			{
				return 1785463520;
			}
			break;
		
		case 81:
			if (func_162())
			{
				return -2009644972;
			}
			break;
		
		case 82:
			if (func_162())
			{
				return -879347409;
			}
			break;
		
		case 83:
			if (func_162())
			{
				return 940833800;
			}
			break;
	}
	return 453432689;
}

int func_230(int iParam0)
{
	switch (iParam0)
	{
		case -1888453608:
		case 1274757841:
		case 483577702:
		case -31919185:
		case -831529621:
		case 1575005502:
		case 513448440:
		case 545862290:
		case 341217064:
		case 1897726628:
		case -562499202:
		case -512375144:
		case -105925489:
		case -1989692173:
		case 1817941018:
		case 996550793:
		case 496339155:
		case 978070226:
		case 1948018762:
		case -214137936:
		case -546236071:
		case 1491498856:
		case -1296747938:
		case -2050315855:
		case -1298986476:
		case 975696266:
		case -1456120371:
		case -1766583645:
		case -1835415205:
		case -30788308:
		case 1061513000:
		case 1765114797:
		case 779501861:
		case 1295434569:
		case 792114228:
		case 1577485217:
		case 483787975:
		case 2081529176:
		case 768803961:
		case -48884066:
		case -660082779:
		case -695202657:
		case -887893374:
		case -962731009:
		case 2017151059:
		case 663586612:
		case 1587637620:
		case 693539241:
		case -2115084258:
		case -2027042680:
		case -1997886297:
		case 1426343849:
		case -107080240:
		case -1541298894:
		case 544828034:
		case 292537574:
		case -457363514:
		case -564600653:
		case 2012476125:
			return 1;
		
		default:
	}
	switch (iParam0)
	{
		case -1070796507:
		case -2011516760:
		case -2071756841:
		case -228982343:
		case 610630637:
		case -1883407879:
		case -535568356:
		case -114341780:
		case -1892342586:
		case 2001257022:
		case 160266735:
		case -34700440:
		case 1125567497:
		case -1521817673:
		case -794112265:
		case -744254618:
		case -863291131:
		case -1200951717:
		case -864236261:
		case 772217690:
		case 1751145014:
		case -1491601256:
		case 1705498857:
		case 746606563:
		case -2066319660:
		case -1514616151:
		case 1104334678:
		case 1704231442:
		case 1852930709:
		case -1795552418:
		case -2136239332:
		case 837436873:
		case -405862452:
		case 1735599485:
		case 738282662:
		case 155886031:
		case -482507216:
		case -95310859:
		case 157823901:
		case -977852653:
		case -2124585240:
		case -1661912808:
		case -1074893765:
		case -336028321:
		case 1393009900:
		case 582047296:
		case 1983869217:
		case -1071729032:
		case 1649373715:
		case 1311775952:
		case -462548556:
		case -1118969278:
		case 1850631618:
		case -171582756:
		case -1965167499:
		case -1093374267:
		case 127042729:
		case 266812085:
		case -102572257:
		case -668632385:
		case -1112080475:
		case -40063266:
		case 2023061218:
		case -572254182:
		case 1632369836:
		case -1127890446:
		case -747492773:
		case -253098439:
		case -1352061783:
		case 155106086:
		case 158843122:
		case -451800215:
		case -2121850769:
		case -1109887812:
		case -1457529717:
		case -16088425:
		case 1234831722:
		case -282365040:
		case 1038697149:
		case 1835046764:
		case -1945122029:
		case 94531552:
		case 1572258186:
		case -1621765815:
		case 990867623:
		case -862936205:
		case -902939483:
		case -1140081444:
		case 1651898027:
			return 1;
		
		default:
	}
	return 0;
}

void func_231(int iParam0)
{
	if (unk_0x6D954AF55D3925DB(iParam0, "ptemp") == 0)
	{
		return;
	}
	iVar4 = unk_0x6D954AF55D3925DB(iParam0, "ptemp");
	Global_4456448.f_232831 = unk_0x8A83B52A17A321DB(iVar4, "no");
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_232831 - 1))
	{
		StringCopy(&cVar2, "pto", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		iVar5[iVar0] = unk_0x7619952D26DF7783(iVar4, &cVar2);
		StringCopy(&cVar2, "ptr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		iVar16[iVar0] = unk_0x7619952D26DF7783(iVar4, &cVar2);
		StringCopy(&cVar2, "ptm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		iVar27[iVar0] = unk_0x7619952D26DF7783(iVar4, &cVar2);
		StringCopy(&cVar2, "ptc", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		iVar38[iVar0] = unk_0x7619952D26DF7783(iVar4, &cVar2);
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (iVar5[iVar0] != 0 && unk_0x3E932F23D327A136(iVar5[iVar0], iVar1) == 5)
			{
				Global_4456448.f_230350[iVar0][iVar1] = { unk_0x6403E33233A20F75(iVar5[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_230350[iVar0][iVar1] = { 0f, 0f, 0f };
			}
			if (iVar16[iVar0] != 0 && unk_0x3E932F23D327A136(iVar16[iVar0], iVar1) == 5)
			{
				Global_4456448.f_230350[iVar0].f_91[iVar1] = { unk_0x6403E33233A20F75(iVar16[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_230350[iVar0].f_91[iVar1] = { 0f, 0f, 0f };
			}
			if (iVar27[iVar0] != 0 && unk_0x3E932F23D327A136(iVar27[iVar0], iVar1) == 2)
			{
				Global_4456448.f_230350[iVar0].f_182[iVar1] = unk_0xE082EE0DCA9466C4(iVar27[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_230350[iVar0].f_182[iVar1] = 0;
			}
			if (iVar38[iVar0] != 0 && unk_0x3E932F23D327A136(iVar38[iVar0], iVar1) == 2)
			{
				Global_4456448.f_230350[iVar0].f_213[iVar1] = unk_0xE082EE0DCA9466C4(iVar38[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_230350[iVar0].f_213[iVar1] = 0;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_232(int iParam0)
{
	iVar6 = unk_0x6D954AF55D3925DB(iParam0, "obj");
	Global_4456448.f_78239 = unk_0x8A83B52A17A321DB(iVar6, "no");
	Global_4456448.f_78240 = unk_0x8A83B52A17A321DB(iVar6, "pal");
	Global_4456448.f_78241 = unk_0x8A83B52A17A321DB(iVar6, "rtm");
	iVar7 = unk_0x7619952D26DF7783(iVar6, "loc");
	iVar8 = unk_0x7619952D26DF7783(iVar6, "head");
	iVar19 = unk_0x7619952D26DF7783(iVar6, "model");
	iVar20 = unk_0x7619952D26DF7783(iVar6, "ped");
	iVar21 = unk_0x7619952D26DF7783(iVar6, "rsp");
	iVar22 = unk_0x7619952D26DF7783(iVar6, "rot");
	iVar23 = unk_0x7619952D26DF7783(iVar6, "cont");
	iVar24 = unk_0x7619952D26DF7783(iVar6, "valu");
	iVar25 = unk_0x7619952D26DF7783(iVar6, "ammoforwep");
	iVar26 = unk_0x7619952D26DF7783(iVar6, "cpup");
	iVar27 = unk_0x7619952D26DF7783(iVar6, "cpupr");
	iVar28 = unk_0x7619952D26DF7783(iVar6, "cpupt");
	iVar29 = unk_0x7619952D26DF7783(iVar6, "bits");
	iVar30 = unk_0x7619952D26DF7783(iVar6, "bits2");
	iVar31 = unk_0x7619952D26DF7783(iVar6, "bits3");
	iVar32 = unk_0x7619952D26DF7783(iVar6, "bits4");
	iVar33 = unk_0x7619952D26DF7783(iVar6, "mcvo1");
	iVar34 = unk_0x7619952D26DF7783(iVar6, "mcvo2");
	iVar35 = unk_0x7619952D26DF7783(iVar6, "mcvbkt");
	iVar38 = unk_0x7619952D26DF7783(iVar6, "oijh");
	iVar39 = unk_0x7619952D26DF7783(iVar6, "oiet");
	iVar40 = unk_0x7619952D26DF7783(iVar6, "ospl");
	iVar41 = unk_0x7619952D26DF7783(iVar6, "dspn");
	iVar42 = unk_0x7619952D26DF7783(iVar6, "objcps");
	iVar43 = unk_0x7619952D26DF7783(iVar6, "objinv");
	iVar44 = unk_0x7619952D26DF7783(iVar6, "objCCO");
	iVar45 = unk_0x7619952D26DF7783(iVar6, "objbhd");
	iVar46 = unk_0x7619952D26DF7783(iVar6, "objbp");
	iVar47 = unk_0x7619952D26DF7783(iVar6, "objcash");
	iVar48 = unk_0x7619952D26DF7783(iVar6, "objpi");
	iVar49 = unk_0x7619952D26DF7783(iVar6, "objld1");
	iVar50 = unk_0x7619952D26DF7783(iVar6, "objld2");
	iVar51 = unk_0x7619952D26DF7783(iVar6, "objparq");
	iVar52 = unk_0x7619952D26DF7783(iVar6, "objNoO");
	iVar53 = unk_0x7619952D26DF7783(iVar6, "objNoOH");
	iVar54 = unk_0x7619952D26DF7783(iVar6, "objDoO");
	iVar55 = unk_0x7619952D26DF7783(iVar6, "objDoOH");
	iVar56 = unk_0x7619952D26DF7783(iVar6, "objDoOL");
	iVar57 = unk_0x7619952D26DF7783(iVar6, "objDoOLH");
	iVar58 = unk_0x7619952D26DF7783(iVar6, "objaro");
	uVar214 = 1;
	Var216.f_10 = 4;
	Var216.f_15 = 4;
	Var216.f_20 = 4;
	if (func_135(1) || func_205())
	{
		iVar9 = unk_0x7619952D26DF7783(iVar6, "obrr");
		iVar11 = unk_0x7619952D26DF7783(iVar6, "obrmr");
		iVar10 = unk_0x7619952D26DF7783(iVar6, "SMeR");
		iVar18 = unk_0x7619952D26DF7783(iVar6, "obder");
		iVar17 = unk_0x7619952D26DF7783(iVar6, "obso");
		iVar12 = unk_0x7619952D26DF7783(iVar6, "osnt");
		iVar13 = unk_0x7619952D26DF7783(iVar6, "osnei");
		iVar16 = unk_0x7619952D26DF7783(iVar6, "objbr");
		iVar14 = unk_0x7619952D26DF7783(iVar6, "o2sp");
		iVar15 = unk_0x7619952D26DF7783(iVar6, "o2sh");
		iVar36 = unk_0x7619952D26DF7783(iVar6, "mgbs");
		iVar37 = unk_0x7619952D26DF7783(iVar6, "mgDT");
		iVar59 = unk_0x7619952D26DF7783(iVar6, "objct");
		iVar60 = unk_0x7619952D26DF7783(iVar6, "team");
		iVar61 = unk_0x7619952D26DF7783(iVar6, "spwn");
		iVar62 = unk_0x7619952D26DF7783(iVar6, "oAsSc");
		iVar63 = unk_0x7619952D26DF7783(iVar6, "oAsAPR");
		iVar64 = unk_0x7619952D26DF7783(iVar6, "objct2");
		iVar65 = unk_0x7619952D26DF7783(iVar6, "team2");
		iVar66 = unk_0x7619952D26DF7783(iVar6, "spwn2");
		iVar67 = unk_0x7619952D26DF7783(iVar6, "o2AsSc");
		iVar68 = unk_0x7619952D26DF7783(iVar6, "o2AsAPR");
		iVar69 = unk_0x7619952D26DF7783(iVar6, "objct3");
		iVar70 = unk_0x7619952D26DF7783(iVar6, "team3");
		iVar71 = unk_0x7619952D26DF7783(iVar6, "spwn3");
		iVar72 = unk_0x7619952D26DF7783(iVar6, "o3AsSc");
		iVar73 = unk_0x7619952D26DF7783(iVar6, "o3AsAPR");
		iVar74 = unk_0x7619952D26DF7783(iVar6, "objct4");
		iVar75 = unk_0x7619952D26DF7783(iVar6, "team4");
		iVar76 = unk_0x7619952D26DF7783(iVar6, "spwn4");
		iVar77 = unk_0x7619952D26DF7783(iVar6, "o4AsSc");
		iVar78 = unk_0x7619952D26DF7783(iVar6, "o4AsAPR");
		iVar81 = unk_0x7619952D26DF7783(iVar6, "obb");
		iVar82 = unk_0x7619952D26DF7783(iVar6, "obbc");
		iVar83 = unk_0x7619952D26DF7783(iVar6, "obbs");
		iVar84 = unk_0x7619952D26DF7783(iVar6, "obtc");
		iVar85 = unk_0x7619952D26DF7783(iVar6, "oElec_BS");
		iVar86 = unk_0x7619952D26DF7783(iVar6, "oElec_TDT");
		iVar87 = unk_0x7619952D26DF7783(iVar6, "obtctbs");
		iVar89 = unk_0x7619952D26DF7783(iVar6, "obtcta");
		iVar88 = unk_0x7619952D26DF7783(iVar6, "obtcts");
		iVar90 = unk_0x7619952D26DF7783(iVar6, "obtcwt");
		iVar91 = unk_0x7619952D26DF7783(iVar6, "obtcvr");
		iVar92 = unk_0x7619952D26DF7783(iVar6, "obtcvw");
		iVar93 = unk_0x7619952D26DF7783(iVar6, "obtcsr");
		iVar94 = unk_0x7619952D26DF7783(iVar6, "obtcsht");
		iVar95 = unk_0x7619952D26DF7783(iVar6, "obtcbht");
		iVar96 = unk_0x7619952D26DF7783(iVar6, "orbcnno");
		iVar97 = unk_0x7619952D26DF7783(iVar6, "objhpovr");
		iVar98 = unk_0x7619952D26DF7783(iVar6, "objbtte");
		iVar99 = unk_0x7619952D26DF7783(iVar6, "objlkzn");
		iVar100 = unk_0x7619952D26DF7783(iVar6, "ocoid");
		iVar105 = unk_0x7619952D26DF7783(iVar6, "objtvi");
		iVar101 = unk_0x7619952D26DF7783(iVar6, "tl63vts");
		iVar102 = unk_0x7619952D26DF7783(iVar6, "objLOD");
		iVar103 = unk_0x7619952D26DF7783(iVar6, "iobjhbir");
		iVar104 = unk_0x7619952D26DF7783(iVar6, "iobjhbor");
		iVar106 = unk_0x7619952D26DF7783(iVar6, "oIntAnim");
		iVar107 = unk_0x7619952D26DF7783(iVar6, "oIntKPAR");
		iVar108 = unk_0x7619952D26DF7783(iVar6, "oIntPed");
		iVar110 = unk_0x7619952D26DF7783(iVar6, "objclt");
		iVar111 = unk_0x7619952D26DF7783(iVar6, "objcr");
		iVar112 = unk_0x7619952D26DF7783(iVar6, "obcra");
		iVar113 = unk_0x7619952D26DF7783(iVar6, "ospdl");
		iVar114 = unk_0x7619952D26DF7783(iVar6, "osgr");
		iVar115 = unk_0x7619952D26DF7783(iVar6, "ossgr");
		iVar137 = unk_0x7619952D26DF7783(iVar6, "objcnm");
		iVar138 = unk_0x7619952D26DF7783(iVar6, "ororc");
		iVar139 = unk_0x7619952D26DF7783(iVar6, "objap");
		iVar140 = unk_0x7619952D26DF7783(iVar6, "objapt");
		iVar141 = unk_0x7619952D26DF7783(iVar6, "obint");
		iVar142 = unk_0x7619952D26DF7783(iVar6, "obrom");
		iVar143 = unk_0x7619952D26DF7783(iVar6, "inco");
		iVar144 = unk_0x7619952D26DF7783(iVar6, "inhsh");
		iVar145 = unk_0x7619952D26DF7783(iVar6, "vehpu");
		iVar146 = unk_0x7619952D26DF7783(iVar6, "airpu");
		iVar147 = unk_0x7619952D26DF7783(iVar6, "gotor");
		iVar156 = unk_0x7619952D26DF7783(iVar6, "objatto");
		iVar187 = unk_0x7619952D26DF7783(iVar6, "objzns");
		iVar188 = unk_0x7619952D26DF7783(iVar6, "objzns2");
		iVar241 = 0;
		iVar241 = 0;
		while (iVar241 <= 8)
		{
			StringCopy(&sVar4, "owrvv", 8);
			StringIntConCat(&sVar4, iVar241, 8);
			iVar189[iVar241] = unk_0x7619952D26DF7783(iVar6, &sVar4);
			StringCopy(&sVar4, "forvv", 8);
			StringIntConCat(&sVar4, iVar241, 8);
			iVar199[iVar241] = unk_0x7619952D26DF7783(iVar6, &sVar4);
			iVar241++;
		}
		iVar148 = unk_0x7619952D26DF7783(iVar6, "gtbsr");
		iVar149 = unk_0x7619952D26DF7783(iVar6, "gtbss");
		iVar150 = unk_0x7619952D26DF7783(iVar6, "nmaggg");
		iVar151 = unk_0x7619952D26DF7783(iVar6, "nmpass");
		iVar152 = unk_0x7619952D26DF7783(iVar6, "nmfail");
		iVar153 = unk_0x7619952D26DF7783(iVar6, "omcp");
		iVar154 = unk_0x7619952D26DF7783(iVar6, "omcf");
		iVar155 = unk_0x7619952D26DF7783(iVar6, "omca");
		iVar2 = 0;
		while (iVar2 <= (Global_4456448.f_206 - 1))
		{
			if (iVar2 < 4)
			{
				StringCopy(&sVar4, "rule", 8);
				StringIntConCat(&sVar4, iVar2, 8);
				iVar157[iVar2] = unk_0x7619952D26DF7783(iVar6, &sVar4);
				StringCopy(&sVar4, "pri", 8);
				StringIntConCat(&sVar4, iVar2, 8);
				iVar162[iVar2] = unk_0x7619952D26DF7783(iVar6, &sVar4);
				StringCopy(&sVar4, "jtop", 8);
				StringIntConCat(&sVar4, iVar2, 8);
				iVar167[iVar2] = unk_0x7619952D26DF7783(iVar6, &sVar4);
				StringCopy(&sVar4, "jtof", 8);
				StringIntConCat(&sVar4, iVar2, 8);
				iVar172[iVar2] = unk_0x7619952D26DF7783(iVar6, &sVar4);
				StringCopy(&sVar4, "bosr", 8);
				StringIntConCat(&sVar4, iVar2, 8);
				iVar177[iVar2] = unk_0x7619952D26DF7783(iVar6, &sVar4);
				StringCopy(&sVar4, "boer", 8);
				StringIntConCat(&sVar4, iVar2, 8);
				iVar182[iVar2] = unk_0x7619952D26DF7783(iVar6, &sVar4);
			}
			iVar2++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_78239 - 1))
	{
		if (iVar0 < 32)
		{
			Global_4456448.f_78242[iVar0] = { unk_0x6403E33233A20F75(iVar7, iVar0) };
			Global_4456448.f_78242[iVar0].f_3 = unk_0x73F91AA610E60211(iVar8, iVar0);
			iVar1 = unk_0xE082EE0DCA9466C4(iVar19, iVar0);
			Global_4456448.f_78242[iVar0].f_15 = func_209(iVar1);
			if (Global_4456448.f_78242[iVar0].f_15 == -1842407088)
			{
				Global_4456448.f_78242[iVar0].f_15 = -1007354661;
			}
			if (Global_4456448.f_197286 == 0)
			{
				if (Global_4456448.f_78242[iVar0].f_15 == -1861623876)
				{
					Global_4456448.f_78242[iVar0].f_15 = 525896218;
				}
			}
			if (!unk_0x468C1AC3ABF95C57(Global_4456448.f_78242[iVar0].f_15))
			{
				Global_4456448.f_78242[iVar0].f_15 = 528555233;
			}
			if (Global_4456448.f_78242[iVar0].f_15 == 168901740)
			{
				Global_4456448.f_78242[iVar0].f_15 = -1007354661;
			}
			if (Global_4456448.f_78242[iVar0].f_15 == -1340405475)
			{
				Global_4456448.f_78242[iVar0].f_15 = -1842407088;
			}
			if (Global_4456448.f_78242[iVar0].f_15 == -249415613)
			{
				Global_4456448.f_78242[iVar0].f_15 = -739654066;
			}
			func_195(&Var216, &iVar6, &(Global_4456448.f_78242[iVar0].f_30), iVar0, 1);
			func_235(iVar0);
			Global_4456448.f_78242[iVar0].f_26 = unk_0xE082EE0DCA9466C4(iVar21, iVar0);
			Global_4456448.f_78242[iVar0].f_4 = { unk_0x6403E33233A20F75(iVar22, iVar0) };
			Global_4456448.f_78242[iVar0].f_53 = unk_0xE082EE0DCA9466C4(iVar20, iVar0);
			Global_4456448.f_78242[iVar0].f_89 = unk_0xE082EE0DCA9466C4(iVar23, iVar0);
			Global_4456448.f_78242[iVar0].f_90 = unk_0xE082EE0DCA9466C4(iVar24, iVar0);
			Global_4456448.f_78242[iVar0].f_91 = unk_0xE082EE0DCA9466C4(iVar25, iVar0);
			Global_4456448.f_78242[iVar0].f_92 = unk_0xE082EE0DCA9466C4(iVar26, iVar0);
			Global_4456448.f_78242[iVar0].f_93 = unk_0xE082EE0DCA9466C4(iVar28, iVar0);
			Global_4456448.f_78242[iVar0].f_94 = unk_0xE082EE0DCA9466C4(iVar27, iVar0);
			Global_4456448.f_78242[iVar0].f_83 = unk_0xE082EE0DCA9466C4(iVar29, iVar0);
			Global_4456448.f_78242[iVar0].f_84 = unk_0xE082EE0DCA9466C4(iVar30, iVar0);
			Global_4456448.f_78242[iVar0].f_85 = unk_0xE082EE0DCA9466C4(iVar31, iVar0);
			Global_4456448.f_78242[iVar0].f_86 = unk_0xE082EE0DCA9466C4(iVar32, iVar0);
			if (iVar33 != 0 && unk_0x3E932F23D327A136(iVar33, iVar0) == 2)
			{
				Global_4456448.f_78242[iVar0].f_206 = unk_0xE082EE0DCA9466C4(iVar33, iVar0);
			}
			else
			{
				Global_4456448.f_78242[iVar0].f_206 = -1;
			}
			if (iVar34 != 0 && unk_0x3E932F23D327A136(iVar34, iVar0) == 2)
			{
				Global_4456448.f_78242[iVar0].f_207 = unk_0xE082EE0DCA9466C4(iVar34, iVar0);
			}
			else
			{
				Global_4456448.f_78242[iVar0].f_207 = -1;
			}
			Global_4456448.f_78242[iVar0].f_208 = unk_0xE082EE0DCA9466C4(iVar35, iVar0);
			Global_4456448.f_78242[iVar0].f_156 = unk_0xE082EE0DCA9466C4(iVar39, iVar0);
			Global_4456448.f_78242[iVar0].f_163 = unk_0xE082EE0DCA9466C4(iVar38, iVar0);
			Global_4456448.f_78242[iVar0].f_157 = unk_0xE082EE0DCA9466C4(iVar40, iVar0);
			Global_4456448.f_78242[iVar0].f_158 = unk_0xE082EE0DCA9466C4(iVar41, iVar0);
			Global_4456448.f_78242[iVar0].f_159 = unk_0xE082EE0DCA9466C4(iVar42, iVar0);
			Global_4456448.f_78242[iVar0].f_160 = unk_0xE082EE0DCA9466C4(iVar43, iVar0);
			Global_4456448.f_78242[iVar0].f_30.f_7 = unk_0x73F91AA610E60211(iVar45, iVar0);
			Global_4456448.f_78242[iVar0].f_30.f_8 = unk_0xE082EE0DCA9466C4(iVar46, iVar0);
			Global_4456448.f_78242[iVar0].f_204 = unk_0xE082EE0DCA9466C4(iVar44, iVar0);
			Global_4456448.f_78242[iVar0].f_205 = unk_0xE082EE0DCA9466C4(iVar47, iVar0);
			Global_4456448.f_78242[iVar0].f_164 = unk_0x73F91AA610E60211(iVar58, iVar0);
			Global_4456448.f_78242[iVar0].f_209 = unk_0xE082EE0DCA9466C4(iVar48, iVar0);
			Global_4456448.f_78242[iVar0].f_210 = unk_0xE082EE0DCA9466C4(iVar49, iVar0);
			Global_4456448.f_78242[iVar0].f_211 = unk_0xE082EE0DCA9466C4(iVar50, iVar0);
			Global_4456448.f_78242[iVar0].f_212 = unk_0xE082EE0DCA9466C4(iVar51, iVar0);
			Global_4456448.f_78242[iVar0].f_213 = unk_0xE082EE0DCA9466C4(iVar52, iVar0);
			Global_4456448.f_78242[iVar0].f_214 = unk_0xE082EE0DCA9466C4(iVar53, iVar0);
			Global_4456448.f_78242[iVar0].f_215 = unk_0x73F91AA610E60211(iVar54, iVar0);
			Global_4456448.f_78242[iVar0].f_216 = unk_0x73F91AA610E60211(iVar55, iVar0);
			Global_4456448.f_78242[iVar0].f_217 = unk_0x73F91AA610E60211(iVar56, iVar0);
			Global_4456448.f_78242[iVar0].f_218 = unk_0x73F91AA610E60211(iVar57, iVar0);
			if (iVar187 != 0 && unk_0x3E932F23D327A136(iVar187, iVar0) == 2)
			{
				Global_4456448.f_78242[iVar0].f_219 = unk_0xE082EE0DCA9466C4(iVar187, iVar0);
			}
			else
			{
				Global_4456448.f_78242[iVar0].f_219 = -1;
			}
			if (iVar188 != 0 && unk_0x3E932F23D327A136(iVar188, iVar0) == 2)
			{
				Global_4456448.f_78242[iVar0].f_220 = unk_0xE082EE0DCA9466C4(iVar188, iVar0);
			}
			else
			{
				Global_4456448.f_78242[iVar0].f_220 = 0;
			}
			iVar242 = 0;
			iVar242 = 0;
			while (iVar242 <= 8)
			{
				if (iVar189[iVar242] != 0 && unk_0x3E932F23D327A136(iVar189[iVar242], iVar0) == 5)
				{
					Global_4456448.f_78242[iVar0].f_221[iVar242] = { unk_0x6403E33233A20F75(iVar189[iVar242], iVar0) };
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_221[iVar242] = { 0f, 0f, 0f };
				}
				if (iVar199[iVar242] != 0 && unk_0x3E932F23D327A136(iVar199[iVar242], iVar0) == 3)
				{
					Global_4456448.f_78242[iVar0].f_249[iVar242] = unk_0x73F91AA610E60211(iVar199[iVar242], iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_249[iVar242] = 0f;
				}
				iVar242++;
			}
			if (iVar146 != 0 && unk_0x3E932F23D327A136(iVar146, iVar0) == 2)
			{
				if (unk_0xE082EE0DCA9466C4(iVar146, iVar0) == 1)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Global_4456448.f_78242[iVar0].f_83, 4))
					{
						unk_0x5D96D8530B3D0904(&(Global_4456448.f_78242[iVar0].f_83), 4);
					}
				}
			}
			if (func_135(1) || func_205())
			{
				if ((((iVar9 != 0 && unk_0x3E932F23D327A136(iVar9, iVar0) == 3) && unk_0x3E932F23D327A136(iVar11, iVar0) == 3) && unk_0x3E932F23D327A136(iVar12, iVar0) == 2) && unk_0x3E932F23D327A136(iVar13, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_7 = unk_0x73F91AA610E60211(iVar9, iVar0);
					Global_4456448.f_78242[iVar0].f_8 = unk_0x73F91AA610E60211(iVar11, iVar0);
					Global_4456448.f_78242[iVar0].f_9 = unk_0xE082EE0DCA9466C4(iVar12, iVar0);
					Global_4456448.f_78242[iVar0].f_10 = unk_0xE082EE0DCA9466C4(iVar13, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_7 = 50f;
					Global_4456448.f_78242[iVar0].f_8 = 0f;
					Global_4456448.f_78242[iVar0].f_9 = 0;
					Global_4456448.f_78242[iVar0].f_10 = -1;
				}
				if (iVar10 != 0 && unk_0x3E932F23D327A136(iVar10, iVar0) == 3)
				{
					Global_4456448.f_78242[iVar0].f_176 = unk_0x73F91AA610E60211(iVar10, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_176 = 0f;
				}
				if (iVar18 != 0 && unk_0x3E932F23D327A136(iVar18, iVar0) == 3)
				{
					Global_4456448.f_78242[iVar0].f_179 = unk_0x73F91AA610E60211(iVar18, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_179 = 0f;
				}
				if (iVar17 != 0 && unk_0x3E932F23D327A136(iVar17, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_30.f_5 = unk_0xE082EE0DCA9466C4(iVar17, iVar0);
				}
				else if (func_273())
				{
					Global_4456448.f_78242[iVar0].f_30.f_5 = 0;
				}
				if (iVar16 != 0)
				{
					if (unk_0x3E932F23D327A136(iVar16, iVar0) == 2)
					{
						Global_4456448.f_78242[iVar0].f_30.f_6 = to_float(unk_0xE082EE0DCA9466C4(iVar16, iVar0));
					}
					else if (unk_0x3E932F23D327A136(iVar16, iVar0) == 3)
					{
						Global_4456448.f_78242[iVar0].f_30.f_6 = unk_0x73F91AA610E60211(iVar16, iVar0);
					}
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_30.f_6 = 0f;
				}
				if ((iVar14 != 0 && unk_0x3E932F23D327A136(iVar14, iVar0) == 5) && unk_0x3E932F23D327A136(iVar15, iVar0) == 3)
				{
					Global_4456448.f_78242[iVar0].f_11 = { unk_0x6403E33233A20F75(iVar14, iVar0) };
					Global_4456448.f_78242[iVar0].f_14 = unk_0x73F91AA610E60211(iVar15, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_11 = { 0f, 0f, 0f };
					Global_4456448.f_78242[iVar0].f_14 = 0f;
				}
				func_208(&(Global_4456448.f_78242[iVar0].f_165), iVar0, &iVar85, &iVar86);
				func_207(&(Global_4456448.f_78242[iVar0].f_165.f_2), iVar0, &iVar87, &iVar89, &iVar88, &iVar90, &iVar91, &iVar92, &iVar93, &iVar94, &iVar95);
				func_234(iVar0);
				if (iVar96 != 0 && unk_0x3E932F23D327A136(iVar96, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_177 = unk_0xE082EE0DCA9466C4(iVar96, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_177 = -1;
				}
				if (iVar97 != 0 && unk_0x3E932F23D327A136(iVar97, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_200 = unk_0xE082EE0DCA9466C4(iVar97, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_200 = -1;
				}
				if (iVar98 != 0 && unk_0x3E932F23D327A136(iVar98, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_201 = unk_0xE082EE0DCA9466C4(iVar98, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_201 = -1;
				}
				if (iVar99 != 0 && unk_0x3E932F23D327A136(iVar99, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_202 = unk_0xE082EE0DCA9466C4(iVar99, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_202 = -1;
				}
				if (iVar100 != 0 && unk_0x3E932F23D327A136(iVar100, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_203 = unk_0xE082EE0DCA9466C4(iVar100, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_203 = -1;
				}
				if (iVar101 != 0 && unk_0x3E932F23D327A136(iVar101, iVar0) == 4)
				{
					StringCopy(&(Global_4456448.f_78242[iVar0].f_183), unk_0x3E4982E6ACD879AE(iVar101, iVar0), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_78242[iVar0].f_183), "", 64);
				}
				if (iVar105 != 0 && unk_0x3E932F23D327A136(iVar105, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_199 = unk_0xE082EE0DCA9466C4(iVar105, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_199 = -1;
				}
				if (iVar102 != 0 && unk_0x3E932F23D327A136(iVar102, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_178 = unk_0xE082EE0DCA9466C4(iVar102, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_178 = -1;
				}
				if (iVar103 != 0 && unk_0x3E932F23D327A136(iVar103, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_28 = unk_0xE082EE0DCA9466C4(iVar103, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_28 = 0;
				}
				if (iVar104 != 0 && unk_0x3E932F23D327A136(iVar104, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_29 = unk_0xE082EE0DCA9466C4(iVar104, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_29 = 0;
				}
				if (iVar106 != 0 && unk_0x3E932F23D327A136(iVar106, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_99 = unk_0xE082EE0DCA9466C4(iVar106, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_99 = 0;
				}
				if (iVar107 != 0 && unk_0x3E932F23D327A136(iVar107, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_100 = unk_0xE082EE0DCA9466C4(iVar107, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_100 = -1;
				}
				if (iVar108 != 0 && unk_0x3E932F23D327A136(iVar108, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_102 = unk_0xE082EE0DCA9466C4(iVar108, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_102 = -1;
				}
				StringCopy(&(Global_4456448.f_78242[iVar0].f_103), func_233("objiPr", &iVar6, &iVar109, iVar0, "", ""), 16);
				Global_4456448.f_78242[iVar0].f_88 = unk_0xE082EE0DCA9466C4(iVar36, iVar0);
				if (iVar37 != 0 && unk_0x3E932F23D327A136(iVar37, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_101 = unk_0xE082EE0DCA9466C4(iVar37, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_101 = -1;
				}
				if (iVar156 != 0 && unk_0x3E932F23D327A136(iVar156, iVar0) == 5)
				{
					Global_4456448.f_78242[iVar0].f_180 = { unk_0x6403E33233A20F75(iVar156, iVar0) };
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_180 = { 0f, 0f, 0f };
				}
				Global_4456448.f_78242[iVar0].f_112 = unk_0xE082EE0DCA9466C4(iVar59, iVar0);
				Global_4456448.f_78242[iVar0].f_108 = unk_0xE082EE0DCA9466C4(iVar60, iVar0);
				Global_4456448.f_78242[iVar0].f_116 = unk_0xE082EE0DCA9466C4(iVar61, iVar0);
				Global_4456448.f_78242[iVar0].f_120 = unk_0xE082EE0DCA9466C4(iVar62, iVar0);
				Global_4456448.f_78242[iVar0].f_124 = unk_0xE082EE0DCA9466C4(iVar63, iVar0);
				if (iVar64 != 0 && unk_0x3E932F23D327A136(iVar64, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_113 = unk_0xE082EE0DCA9466C4(iVar64, iVar0);
					Global_4456448.f_78242[iVar0].f_109 = unk_0xE082EE0DCA9466C4(iVar65, iVar0);
					Global_4456448.f_78242[iVar0].f_117 = unk_0xE082EE0DCA9466C4(iVar66, iVar0);
					Global_4456448.f_78242[iVar0].f_121 = unk_0xE082EE0DCA9466C4(iVar67, iVar0);
					Global_4456448.f_78242[iVar0].f_125 = unk_0xE082EE0DCA9466C4(iVar68, iVar0);
					Global_4456448.f_78242[iVar0].f_114 = unk_0xE082EE0DCA9466C4(iVar69, iVar0);
					Global_4456448.f_78242[iVar0].f_110 = unk_0xE082EE0DCA9466C4(iVar70, iVar0);
					Global_4456448.f_78242[iVar0].f_118 = unk_0xE082EE0DCA9466C4(iVar71, iVar0);
					Global_4456448.f_78242[iVar0].f_122 = unk_0xE082EE0DCA9466C4(iVar72, iVar0);
					Global_4456448.f_78242[iVar0].f_126 = unk_0xE082EE0DCA9466C4(iVar73, iVar0);
					Global_4456448.f_78242[iVar0].f_115 = unk_0xE082EE0DCA9466C4(iVar74, iVar0);
					Global_4456448.f_78242[iVar0].f_111 = unk_0xE082EE0DCA9466C4(iVar75, iVar0);
					Global_4456448.f_78242[iVar0].f_119 = unk_0xE082EE0DCA9466C4(iVar76, iVar0);
					Global_4456448.f_78242[iVar0].f_123 = unk_0xE082EE0DCA9466C4(iVar77, iVar0);
					Global_4456448.f_78242[iVar0].f_127 = unk_0xE082EE0DCA9466C4(iVar78, iVar0);
				}
				func_199("hlt", &(Global_4456448.f_78242[iVar0].f_27), &iVar6, &iVar79, iVar0, 100, 0);
				Global_4456448.f_78242[iVar0].f_30.f_1 = unk_0xE082EE0DCA9466C4(iVar81, iVar0);
				Global_4456448.f_78242[iVar0].f_77 = unk_0xE082EE0DCA9466C4(iVar145, iVar0);
				func_199("objMinigame_", &(Global_4456448.f_78242[iVar0].f_87), &iVar6, &iVar80, iVar0, -1, -2340845);
				if (iVar82 != 0 && unk_0x3E932F23D327A136(iVar82, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_30.f_2 = unk_0xE082EE0DCA9466C4(iVar82, iVar0);
				}
				else if (func_273())
				{
					Global_4456448.f_78242[iVar0].f_30.f_2 = 0;
				}
				if (iVar83 != 0 && unk_0x3E932F23D327A136(iVar83, iVar0) == 3)
				{
					Global_4456448.f_78242[iVar0].f_30.f_4 = unk_0x73F91AA610E60211(iVar83, iVar0);
				}
				else if (func_273())
				{
					Global_4456448.f_78242[iVar0].f_30.f_4 = 0,8f;
				}
				if (iVar84 != 0 && unk_0x3E932F23D327A136(iVar84, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_161 = unk_0xE082EE0DCA9466C4(iVar84, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_161 = 1;
				}
				if (iVar111 != 0 && unk_0x3E932F23D327A136(iVar111, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_95 = unk_0xE082EE0DCA9466C4(iVar111, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_95 = -1;
				}
				if (iVar110 != 0 && unk_0x3E932F23D327A136(iVar110, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_96 = unk_0xE082EE0DCA9466C4(iVar110, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_96 = -1;
				}
				if (iVar112 != 0 && unk_0x3E932F23D327A136(iVar112, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_97 = unk_0xE082EE0DCA9466C4(iVar112, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_97 = -1;
				}
				if (iVar113 != 0 && unk_0x3E932F23D327A136(iVar113, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_107 = unk_0xE082EE0DCA9466C4(iVar113, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_107 = -1;
				}
				if (iVar114 != 0 && unk_0x3E932F23D327A136(iVar114, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_54 = unk_0xE082EE0DCA9466C4(iVar114, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_54 = 0;
				}
				if (iVar115 != 0 && unk_0x3E932F23D327A136(iVar115, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_55 = unk_0xE082EE0DCA9466C4(iVar115, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_55 = 0;
				}
				iVar3 = 0;
				while (iVar3 <= 19)
				{
					StringCopy(&sVar4, "1owb", 8);
					StringIntConCat(&sVar4, iVar3, 8);
					func_199(&sVar4, &(Global_4456448.f_78242[iVar0].f_56[iVar3]), &iVar6, &(uVar116[iVar3]), iVar0, 0, 0);
					iVar3++;
				}
				if (iVar137 != 0 && unk_0x3E932F23D327A136(iVar137, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_147 = unk_0xE082EE0DCA9466C4(iVar137, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_147 = -1;
				}
				if (iVar138 != 0 && unk_0x3E932F23D327A136(iVar138, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_162 = unk_0xE082EE0DCA9466C4(iVar138, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_162 = 0;
				}
				if (iVar139 != 0 && unk_0x3E932F23D327A136(iVar139, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_148 = unk_0xE082EE0DCA9466C4(iVar139, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_148 = -1;
				}
				if (iVar140 != 0 && unk_0x3E932F23D327A136(iVar140, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_149 = unk_0xE082EE0DCA9466C4(iVar140, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_149 = -1;
				}
				if (iVar141 != 0 && unk_0x3E932F23D327A136(iVar141, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_150 = unk_0xE082EE0DCA9466C4(iVar141, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_150 = -1;
				}
				if (iVar142 != 0 && unk_0x3E932F23D327A136(iVar142, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_151 = unk_0xE082EE0DCA9466C4(iVar142, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_151 = -1;
				}
				if ((iVar143 != 0 && unk_0x3E932F23D327A136(iVar143, iVar0) == 5) && unk_0x3E932F23D327A136(iVar144, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_152 = { unk_0x6403E33233A20F75(iVar143, iVar0) };
					Global_4456448.f_78242[iVar0].f_155 = unk_0xE082EE0DCA9466C4(iVar144, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_152 = { 0f, 0f, 0f };
					Global_4456448.f_78242[iVar0].f_155 = 0;
				}
				if (iVar147 != 0 && unk_0x3E932F23D327A136(iVar147, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_98 = unk_0xE082EE0DCA9466C4(iVar147, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_98 = 0;
				}
				if (iVar148 != 0 && unk_0x3E932F23D327A136(iVar148, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_138.f_6 = unk_0xE082EE0DCA9466C4(iVar148, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_138.f_6 = -1;
				}
				if (iVar149 != 0 && unk_0x3E932F23D327A136(iVar149, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_138.f_7 = unk_0xE082EE0DCA9466C4(iVar149, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_138.f_7 = -1;
				}
				if (iVar150 != 0 && unk_0x3E932F23D327A136(iVar150, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_138.f_2 = unk_0xE082EE0DCA9466C4(iVar150, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_138.f_2 = -1;
				}
				if (iVar151 != 0 && unk_0x3E932F23D327A136(iVar151, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_138 = unk_0xE082EE0DCA9466C4(iVar151, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_138 = -1;
				}
				if (iVar152 != 0 && unk_0x3E932F23D327A136(iVar152, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_138.f_1 = unk_0xE082EE0DCA9466C4(iVar152, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_138.f_1 = -1;
				}
				if (iVar153 != 0 && unk_0x3E932F23D327A136(iVar153, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_138.f_3 = unk_0xE082EE0DCA9466C4(iVar153, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_138.f_3 = -1;
				}
				if (iVar154 != 0 && unk_0x3E932F23D327A136(iVar154, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_138.f_4 = unk_0xE082EE0DCA9466C4(iVar154, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_138.f_4 = -1;
				}
				if (iVar155 != 0 && unk_0x3E932F23D327A136(iVar155, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_138.f_5 = unk_0xE082EE0DCA9466C4(iVar155, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_138.f_5 = -1;
				}
				if (iVar40 != 0 && unk_0x3E932F23D327A136(iVar40, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_157 = unk_0xE082EE0DCA9466C4(iVar40, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_157 = 0;
				}
				if (iVar41 != 0 && unk_0x3E932F23D327A136(iVar41, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_158 = unk_0xE082EE0DCA9466C4(iVar41, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_158 = 0;
				}
				if (iVar42 != 0 && unk_0x3E932F23D327A136(iVar42, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_159 = unk_0xE082EE0DCA9466C4(iVar42, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_159 = 0;
				}
				if (iVar43 != 0 && unk_0x3E932F23D327A136(iVar43, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_160 = unk_0xE082EE0DCA9466C4(iVar43, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_160 = 0;
				}
				if (iVar44 != 0 && unk_0x3E932F23D327A136(iVar44, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_204 = unk_0xE082EE0DCA9466C4(iVar44, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_204 = 0;
				}
				if (iVar47 != 0 && unk_0x3E932F23D327A136(iVar47, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_205 = unk_0xE082EE0DCA9466C4(iVar47, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_205 = 0;
				}
				if (iVar45 != 0 && unk_0x3E932F23D327A136(iVar45, iVar0) == 3)
				{
					Global_4456448.f_78242[iVar0].f_30.f_7 = unk_0x73F91AA610E60211(iVar45, iVar0);
				}
				else if (func_273())
				{
					Global_4456448.f_78242[iVar0].f_30.f_7 = 0f;
				}
				if (iVar46 != 0 && unk_0x3E932F23D327A136(iVar46, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_30.f_8 = unk_0xE082EE0DCA9466C4(iVar46, iVar0);
				}
				else if (func_273())
				{
					Global_4456448.f_78242[iVar0].f_30.f_8 = 0;
				}
				if (iVar48 != 0 && unk_0x3E932F23D327A136(iVar48, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_209 = unk_0xE082EE0DCA9466C4(iVar48, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_209 = -1;
				}
				if (iVar49 != 0 && unk_0x3E932F23D327A136(iVar49, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_210 = unk_0xE082EE0DCA9466C4(iVar49, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_210 = -1;
				}
				if (iVar50 != 0 && unk_0x3E932F23D327A136(iVar50, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_211 = unk_0xE082EE0DCA9466C4(iVar50, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_211 = -1;
				}
				if (iVar51 != 0 && unk_0x3E932F23D327A136(iVar51, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_212 = unk_0xE082EE0DCA9466C4(iVar51, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_212 = 4;
				}
				if (iVar52 != 0 && unk_0x3E932F23D327A136(iVar52, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_213 = unk_0xE082EE0DCA9466C4(iVar52, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_213 = 4;
				}
				if (iVar53 != 0 && unk_0x3E932F23D327A136(iVar53, iVar0) == 2)
				{
					Global_4456448.f_78242[iVar0].f_214 = unk_0xE082EE0DCA9466C4(iVar53, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_214 = 5;
				}
				if (iVar54 != 0 && unk_0x3E932F23D327A136(iVar54, iVar0) == 3)
				{
					Global_4456448.f_78242[iVar0].f_215 = unk_0x73F91AA610E60211(iVar54, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_215 = 0,5f;
				}
				if (iVar55 != 0 && unk_0x3E932F23D327A136(iVar55, iVar0) == 3)
				{
					Global_4456448.f_78242[iVar0].f_216 = unk_0x73F91AA610E60211(iVar55, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_216 = 0,5f;
				}
				if (iVar56 != 0 && unk_0x3E932F23D327A136(iVar56, iVar0) == 3)
				{
					Global_4456448.f_78242[iVar0].f_217 = unk_0x73F91AA610E60211(iVar56, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_217 = 0,5f;
				}
				if (iVar57 != 0 && unk_0x3E932F23D327A136(iVar57, iVar0) == 3)
				{
					Global_4456448.f_78242[iVar0].f_218 = unk_0x73F91AA610E60211(iVar57, iVar0);
				}
				else
				{
					Global_4456448.f_78242[iVar0].f_218 = 0,5f;
				}
				iVar2 = 0;
				while (iVar2 <= (Global_4456448.f_206 - 1))
				{
					if (iVar2 < 4)
					{
						Global_4456448.f_78242[iVar0].f_16[iVar2] = unk_0xE082EE0DCA9466C4(iVar157[iVar2], iVar0);
						Global_4456448.f_78242[iVar0].f_21[iVar2] = unk_0xE082EE0DCA9466C4(iVar162[iVar2], iVar0);
						if (Global_4456448.f_78242[iVar0].f_21[iVar2] == -1)
						{
							Global_4456448.f_78242[iVar0].f_21[iVar2] = 99999;
						}
						if (iVar167[iVar2] != 0 && unk_0x3E932F23D327A136(iVar167[iVar2], iVar0) == 2)
						{
							Global_4456448.f_78242[iVar0].f_128[iVar2] = unk_0xE082EE0DCA9466C4(iVar167[iVar2], iVar0);
						}
						else
						{
							Global_4456448.f_78242[iVar0].f_128[iVar2] = 0;
						}
						if (iVar172[iVar2] != 0 && unk_0x3E932F23D327A136(iVar172[iVar2], iVar0) == 2)
						{
							Global_4456448.f_78242[iVar0].f_133[iVar2] = unk_0xE082EE0DCA9466C4(iVar172[iVar2], iVar0);
						}
						else
						{
							Global_4456448.f_78242[iVar0].f_133[iVar2] = 0;
						}
						if (iVar177[iVar2] != 0 && unk_0x3E932F23D327A136(iVar177[iVar2], iVar0) == 2)
						{
							Global_4456448.f_78242[iVar0].f_30.f_10[iVar2].f_1 = unk_0xE082EE0DCA9466C4(iVar177[iVar2], iVar0);
						}
						else if (func_273())
						{
							Global_4456448.f_78242[iVar0].f_30.f_10[iVar2].f_1 = -1;
						}
						if (iVar182[iVar2] != 0 && unk_0x3E932F23D327A136(iVar182[iVar2], iVar0) == 2)
						{
							Global_4456448.f_78242[iVar0].f_30.f_10[iVar2].f_2 = unk_0xE082EE0DCA9466C4(iVar182[iVar2], iVar0);
						}
						else if (func_273())
						{
							Global_4456448.f_78242[iVar0].f_30.f_10[iVar2].f_2 = -1;
						}
					}
					iVar2++;
				}
			}
			func_199("omj1", &(Global_4456448.f_78242[iVar0].f_259.f_1), &iVar6, &iVar209, iVar0, -1, -2340845);
			func_199("omj2", &(Global_4456448.f_78242[iVar0].f_259.f_2), &iVar6, &iVar210, iVar0, -1, -2340845);
			func_199("omj3", &(Global_4456448.f_78242[iVar0].f_259), &iVar6, &iVar211, iVar0, -1, -2340845);
			func_199("omj4", &(Global_4456448.f_78242[iVar0].f_259.f_3), &iVar6, &iVar212, iVar0, 0, -2340845);
			func_199("omj5", &(Global_4456448.f_78242[iVar0].f_259.f_4), &iVar6, &iVar213, iVar0, 0, -2340845);
			func_191("alvobj", &(Global_4456448.f_78242[iVar0].f_264), 1, &iVar6, &uVar214, iVar0, 0, -2340845);
		}
		iVar0++;
	}
}

char* func_233(char* sParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5)
{
	if (*iParam1 == 0)
	{
		return "";
	}
	sVar0 = "";
	if (*iParam2 == 0)
	{
		*iParam2 = unk_0x7619952D26DF7783(*iParam1, sParam0);
	}
	if (*iParam2 != 0 && unk_0x3E932F23D327A136(*iParam2, iParam3) == 4)
	{
		sVar0 = unk_0x3E4982E6ACD879AE(*iParam2, iParam3);
	}
	else if (func_273())
	{
		if (!unk_0x7F8A39872A07D2CE(sParam5, "DEFAULT"))
		{
			sVar0 = sParam5;
		}
	}
	else if (!unk_0x7F8A39872A07D2CE(sParam4, "DEFAULT"))
	{
		sVar0 = sParam4;
	}
	return sVar0;
}

void func_234(int iParam0)
{
	if (Global_4456448.f_232884 >= 1)
	{
		return;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_78242[iParam0].f_84, 11))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_78242[iParam0].f_165.f_2), 0);
	}
	else
	{
		return;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_78242[iParam0].f_84, 12))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_78242[iParam0].f_165.f_2), 1);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_78242[iParam0].f_84, 13))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_78242[iParam0].f_165.f_2), 2);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_78242[iParam0].f_84, 14))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_78242[iParam0].f_165.f_2), 3);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_78242[iParam0].f_85, 5))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_78242[iParam0].f_165.f_2), 4);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_78242[iParam0].f_85, 12))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_78242[iParam0].f_165.f_2), 5);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_78242[iParam0].f_85, 17))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_78242[iParam0].f_165.f_2), 6);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_78242[iParam0].f_85, 15))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_78242[iParam0].f_165.f_2), 7);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_78242[iParam0].f_85, 14))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_78242[iParam0].f_165.f_2), 8);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_78242[iParam0].f_85, 16))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_78242[iParam0].f_165.f_2), 9);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_78242[iParam0].f_85, 18))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_78242[iParam0].f_165.f_2), 10);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_78242[iParam0].f_85, 19))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_78242[iParam0].f_165.f_2), 11);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_78242[iParam0].f_85, 20))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_78242[iParam0].f_165.f_2), 12);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_78242[iParam0].f_86, 1))
	{
		if (Global_4456448.f_78242[iParam0].f_15 == 1306601124)
		{
			Global_4456448.f_78242[iParam0].f_15 = -1233322078;
		}
	}
}

void func_235(int iParam0)
{
	if (func_273())
	{
		return;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_78242[iParam0].f_83, 17))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_78242[iParam0].f_30), 0);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_78242[iParam0].f_83, 29))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_78242[iParam0].f_30), 1);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_78242[iParam0].f_85, 4))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_78242[iParam0].f_30), 2);
	}
}

void func_236(int iParam0)
{
	iVar6 = unk_0x6D954AF55D3925DB(iParam0, "zone");
	Global_4456448.f_195285 = unk_0x8A83B52A17A321DB(iVar6, "no");
	iVar7 = unk_0x7619952D26DF7783(iVar6, "vto");
	iVar8 = unk_0x7619952D26DF7783(iVar6, "vld");
	iVar9 = unk_0x7619952D26DF7783(iVar6, "zntp");
	iVar20 = unk_0x7619952D26DF7783(iVar6, "znbs");
	iVar21 = unk_0x7619952D26DF7783(iVar6, "znwd");
	iVar22 = unk_0x7619952D26DF7783(iVar6, "znwvd");
	iVar23 = unk_0x7619952D26DF7783(iVar6, "znatp");
	iVar24 = unk_0x7619952D26DF7783(iVar6, "znwid");
	iVar25 = unk_0x7619952D26DF7783(iVar6, "znhei");
	iVar26 = unk_0x7619952D26DF7783(iVar6, "zndel");
	iVar27 = unk_0x7619952D26DF7783(iVar6, "zngTe");
	iVar28 = unk_0x7619952D26DF7783(iVar6, "zngPo");
	iVar29 = unk_0x7619952D26DF7783(iVar6, "ztm_t");
	iVar30 = unk_0x7619952D26DF7783(iVar6, "ztm_tn");
	iVar31 = unk_0x7619952D26DF7783(iVar6, "znscra1");
	iVar32 = unk_0x7619952D26DF7783(iVar6, "znscra2");
	iVar33 = unk_0x7619952D26DF7783(iVar6, "znscra3");
	iVar34 = unk_0x7619952D26DF7783(iVar6, "zneilnk");
	iVar35 = unk_0x7619952D26DF7783(iVar6, "znetlnk");
	iVar36 = unk_0x7619952D26DF7783(iVar6, "znebc");
	iVar37 = unk_0x7619952D26DF7783(iVar6, "zneba");
	uVar43 = 1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar2, "znpr", 16);
		StringIntConCat(&cVar2, iVar0, 16);
		iVar10[iVar0] = unk_0x7619952D26DF7783(iVar6, &cVar2);
		StringCopy(&cVar2, "znepr", 16);
		StringIntConCat(&cVar2, iVar0, 16);
		iVar15[iVar0] = unk_0x7619952D26DF7783(iVar6, &cVar2);
		iVar0++;
	}
	if (Global_4456448.f_195285 > 32)
	{
		Global_4456448.f_195285 = 32;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_195285 - 1))
	{
		Global_4456448.f_195397[iVar0][0] = { unk_0x6403E33233A20F75(iVar7, iVar0) };
		Global_4456448.f_195397[iVar0][1] = { unk_0x6403E33233A20F75(iVar8, iVar0) };
		Global_4456448.f_195397[iVar0].f_10 = unk_0xE082EE0DCA9466C4(iVar9, iVar0);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (iVar10[iVar1] != 0 && unk_0x3E932F23D327A136(iVar10[iVar1], iVar0) == 2)
			{
				Global_4456448.f_195397[iVar0].f_11[iVar1] = unk_0xE082EE0DCA9466C4(iVar10[iVar1], iVar0);
			}
			else
			{
				Global_4456448.f_195397[iVar0].f_11[iVar1] = -1;
			}
			if (iVar15[iVar1] != 0 && unk_0x3E932F23D327A136(iVar15[iVar1], iVar0) == 2)
			{
				Global_4456448.f_195397[iVar0].f_16[iVar1] = unk_0xE082EE0DCA9466C4(iVar15[iVar1], iVar0);
			}
			else
			{
				Global_4456448.f_195397[iVar0].f_16[iVar1] = 99999;
			}
			iVar1++;
		}
		if (iVar20 != 0 && unk_0x3E932F23D327A136(iVar20, iVar0) == 2)
		{
			Global_4456448.f_195397[iVar0].f_21 = unk_0xE082EE0DCA9466C4(iVar20, iVar0);
		}
		else
		{
			Global_4456448.f_195397[iVar0].f_21 = 0;
		}
		if (iVar21 != 0 && unk_0x3E932F23D327A136(iVar21, iVar0) == 3)
		{
			Global_4456448.f_195397[iVar0].f_23 = unk_0x73F91AA610E60211(iVar21, iVar0);
		}
		else
		{
			Global_4456448.f_195397[iVar0].f_23 = 0f;
		}
		if (iVar22 != 0 && unk_0x3E932F23D327A136(iVar22, iVar0) == 3)
		{
			Global_4456448.f_195397[iVar0].f_24 = unk_0x73F91AA610E60211(iVar22, iVar0);
		}
		else
		{
			Global_4456448.f_195397[iVar0].f_24 = 0f;
		}
		if (iVar23 != 0 && unk_0x3E932F23D327A136(iVar23, iVar0) == 2)
		{
			Global_4456448.f_195397[iVar0].f_9 = unk_0xE082EE0DCA9466C4(iVar23, iVar0);
		}
		else
		{
			Global_4456448.f_195397[iVar0].f_9 = 0;
		}
		if (iVar24 != 0 && unk_0x3E932F23D327A136(iVar24, iVar0) == 3)
		{
			Global_4456448.f_195397[iVar0].f_7 = unk_0x73F91AA610E60211(iVar24, iVar0);
		}
		else
		{
			Global_4456448.f_195397[iVar0].f_7 = 0f;
		}
		if (iVar25 != 0 && unk_0x3E932F23D327A136(iVar25, iVar0) == 3)
		{
			Global_4456448.f_195397[iVar0].f_8 = unk_0x73F91AA610E60211(iVar25, iVar0);
		}
		else
		{
			Global_4456448.f_195397[iVar0].f_8 = 0f;
		}
		if (iVar26 != 0 && unk_0x3E932F23D327A136(iVar26, iVar0) == 2)
		{
			Global_4456448.f_195397[iVar0].f_22 = unk_0xE082EE0DCA9466C4(iVar26, iVar0);
		}
		else
		{
			Global_4456448.f_195397[iVar0].f_22 = 0;
		}
		if (iVar27 != 0 && unk_0x3E932F23D327A136(iVar27, iVar0) == 2)
		{
			Global_4456448.f_195397[iVar0].f_25 = unk_0xE082EE0DCA9466C4(iVar27, iVar0);
		}
		else
		{
			Global_4456448.f_195397[iVar0].f_25 = 0;
		}
		if (iVar28 != 0 && unk_0x3E932F23D327A136(iVar28, iVar0) == 2)
		{
			Global_4456448.f_195397[iVar0].f_26 = unk_0xE082EE0DCA9466C4(iVar28, iVar0);
		}
		else
		{
			Global_4456448.f_195397[iVar0].f_26 = 2;
		}
		if (iVar29 != 0 && unk_0x3E932F23D327A136(iVar29, iVar0) == 2)
		{
			Global_4456448.f_195397[iVar0].f_28 = unk_0xE082EE0DCA9466C4(iVar29, iVar0);
		}
		else
		{
			Global_4456448.f_195397[iVar0].f_28 = 0;
		}
		if (iVar30 != 0 && unk_0x3E932F23D327A136(iVar30, iVar0) == 4)
		{
			StringCopy(&(Global_4456448.f_195397[iVar0].f_29), unk_0x3E4982E6ACD879AE(iVar30, iVar0), 16);
		}
		else
		{
			StringCopy(&(Global_4456448.f_195397[iVar0].f_29), "", 16);
		}
		if (iVar31 != 0 && unk_0x3E932F23D327A136(iVar31, iVar0) == 2)
		{
			Global_4456448.f_195397[iVar0].f_33 = unk_0xE082EE0DCA9466C4(iVar31, iVar0);
		}
		else
		{
			Global_4456448.f_195397[iVar0].f_33 = -1;
		}
		if (iVar32 != 0 && unk_0x3E932F23D327A136(iVar32, iVar0) == 2)
		{
			Global_4456448.f_195397[iVar0].f_34 = unk_0xE082EE0DCA9466C4(iVar32, iVar0);
		}
		else
		{
			Global_4456448.f_195397[iVar0].f_34 = 0;
		}
		if (iVar33 != 0 && unk_0x3E932F23D327A136(iVar33, iVar0) == 3)
		{
			Global_4456448.f_195397[iVar0].f_35 = unk_0x73F91AA610E60211(iVar33, iVar0);
		}
		else
		{
			Global_4456448.f_195397[iVar0].f_35 = 0f;
		}
		if (iVar34 != 0 && unk_0x3E932F23D327A136(iVar34, iVar0) == 2)
		{
			Global_4456448.f_195397[iVar0].f_36 = unk_0xE082EE0DCA9466C4(iVar34, iVar0);
		}
		else
		{
			Global_4456448.f_195397[iVar0].f_36 = 0;
		}
		if (iVar35 != 0 && unk_0x3E932F23D327A136(iVar35, iVar0) == 2)
		{
			Global_4456448.f_195397[iVar0].f_37 = unk_0xE082EE0DCA9466C4(iVar35, iVar0);
		}
		else
		{
			Global_4456448.f_195397[iVar0].f_37 = -1;
		}
		if (iVar36 != 0 && unk_0x3E932F23D327A136(iVar36, iVar0) == 2)
		{
			Global_4456448.f_195397[iVar0].f_40 = unk_0xE082EE0DCA9466C4(iVar36, iVar0);
		}
		else
		{
			Global_4456448.f_195397[iVar0].f_40 = 1;
		}
		if (iVar37 != 0 && unk_0x3E932F23D327A136(iVar37, iVar0) == 2)
		{
			Global_4456448.f_195397[iVar0].f_41 = unk_0xE082EE0DCA9466C4(iVar37, iVar0);
		}
		else
		{
			Global_4456448.f_195397[iVar0].f_41 = 120;
		}
		iVar48 = 0;
		while (iVar48 <= 1)
		{
			StringCopy(&cVar49, "ovrps", 16);
			StringIntConCat(&cVar49, iVar48, 16);
			iVar45[iVar48] = unk_0x7619952D26DF7783(iVar6, &cVar49);
			if (iVar45[iVar48] != 0 && unk_0x3E932F23D327A136(iVar45[iVar48], iVar0) == 5)
			{
				Global_4456448.f_195397[iVar0].f_43[iVar48] = { unk_0x6403E33233A20F75(iVar45[iVar48], iVar0) };
			}
			else
			{
				Global_4456448.f_195397[iVar0].f_43[iVar48] = { 0f, 0f, 0f };
			}
			iVar48++;
		}
		func_192("pznL", &(Global_4456448.f_195397[iVar0].f_50.f_3), &iVar6, &iVar38, iVar0, 20f, -904994889);
		func_192("pznH", &(Global_4456448.f_195397[iVar0].f_50.f_4), &iVar6, &iVar39, iVar0, 90f, -904994889);
		func_237("pznC", &(Global_4456448.f_195397[iVar0].f_50), &iVar6, &uVar40, iVar0, 0f, 0f, 0f, 0f, 0f, 0f);
		func_199("znSLS", &(Global_4456448.f_195397[iVar0].f_42), &iVar6, &iVar41, iVar0, -1, -1);
		func_199("znCAZ", &(Global_4456448.f_195397[iVar0].f_27), &iVar6, &iVar42, iVar0, -2, -1);
		func_191("alvzon", &(Global_4456448.f_195397[iVar0].f_55), 1, &iVar6, &uVar43, iVar0, 0, -2340845);
		iVar0++;
	}
}

void func_237(char* sParam0, var uParam1, int iParam2, var uParam3, int iParam4, vector3 vParam5, vector3 vParam8)
{
	if (*iParam2 == 0)
	{
		return;
	}
	if (*uParam3 == 0)
	{
		*uParam3 = unk_0x7619952D26DF7783(*iParam2, sParam0);
	}
	if (*uParam3 != 0 && unk_0x3E932F23D327A136(*uParam3, iParam4) == 5)
	{
		*uParam1 = { unk_0x6403E33233A20F75(*uParam3, iParam4) };
	}
	else if (func_273())
	{
		if (!func_127(vParam8))
		{
			*uParam1 = { vParam8 };
		}
	}
	else
	{
		*uParam1 = { vParam5 };
	}
}

void func_238(int iParam0)
{
	iVar1 = unk_0x6D954AF55D3925DB(iParam0, "usj");
	Global_4456448.f_194129 = unk_0x8A83B52A17A321DB(iVar1, "no");
	iVar2 = unk_0x7619952D26DF7783(iVar1, "vto");
	iVar3 = unk_0x7619952D26DF7783(iVar1, "vld");
	iVar4 = unk_0x7619952D26DF7783(iVar1, "vcm");
	if (Global_4456448.f_194129 > 10)
	{
		Global_4456448.f_194129 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_194129 - 1))
	{
		Global_4456448.f_194130[iVar0] = { unk_0x6403E33233A20F75(iVar2, iVar0) };
		Global_4456448.f_194130[iVar0].f_3 = { unk_0x6403E33233A20F75(iVar3, iVar0) };
		Global_4456448.f_194130[iVar0].f_6 = { unk_0x6403E33233A20F75(iVar4, iVar0) };
		iVar0++;
	}
}

void func_239(int iParam0)
{
	if (unk_0x6D954AF55D3925DB(iParam0, "ddtrig") == 0)
	{
		return;
	}
	iVar4 = unk_0x6D954AF55D3925DB(iParam0, "ddtrig");
	Global_4456448.f_207979 = unk_0x8A83B52A17A321DB(iVar4, "no");
	iVar5 = unk_0x7619952D26DF7783(iVar4, "id");
	iVar6 = unk_0x7619952D26DF7783(iVar4, "fid");
	iVar7 = unk_0x7619952D26DF7783(iVar4, "dtasht");
	iVar8 = unk_0x7619952D26DF7783(iVar4, "rule");
	iVar9 = unk_0x7619952D26DF7783(iVar4, "team");
	iVar10 = unk_0x7619952D26DF7783(iVar4, "pos");
	iVar11 = unk_0x7619952D26DF7783(iVar4, "rad");
	iVar12 = unk_0x7619952D26DF7783(iVar4, "tdel");
	iVar13 = unk_0x7619952D26DF7783(iVar4, "tpnt");
	iVar14 = unk_0x7619952D26DF7783(iVar4, "dtfe");
	iVar15 = unk_0x7619952D26DF7783(iVar4, "crkls");
	iVar16 = unk_0x7619952D26DF7783(iVar4, "spveh");
	iVar17 = unk_0x7619952D26DF7783(iVar4, "spveh2");
	iVar18 = unk_0x7619952D26DF7783(iVar4, "spveh3");
	iVar19 = unk_0x7619952D26DF7783(iVar4, "spveh4");
	iVar20 = unk_0x7619952D26DF7783(iVar4, "spveh5");
	iVar21 = unk_0x7619952D26DF7783(iVar4, "skprs");
	iVar22 = unk_0x7619952D26DF7783(iVar4, "fcsped");
	iVar23 = unk_0x7619952D26DF7783(iVar4, "prty");
	iVar24 = unk_0x7619952D26DF7783(iVar4, "dbs");
	iVar25 = unk_0x7619952D26DF7783(iVar4, "dbs2");
	iVar26 = unk_0x7619952D26DF7783(iVar4, "dbs3");
	iVar27 = unk_0x7619952D26DF7783(iVar4, "dbs4");
	iVar28 = unk_0x7619952D26DF7783(iVar4, "dbs5");
	iVar29 = unk_0x7619952D26DF7783(iVar4, "drole");
	iVar30 = unk_0x7619952D26DF7783(iVar4, "dspk");
	iVar31 = unk_0x7619952D26DF7783(iVar4, "dspk2");
	iVar32 = unk_0x7619952D26DF7783(iVar4, "dpcr");
	iVar33 = unk_0x7619952D26DF7783(iVar4, "dgck");
	iVar34 = unk_0x7619952D26DF7783(iVar4, "dgvh");
	iVar35 = unk_0x7619952D26DF7783(iVar4, "dgvlst");
	iVar36 = unk_0x7619952D26DF7783(iVar4, "dcoid");
	iVar37 = unk_0x7619952D26DF7783(iVar4, "dgpk");
	iVar38 = unk_0x7619952D26DF7783(iVar4, "dgwd");
	iVar39 = unk_0x7619952D26DF7783(iVar4, "dgmrlt");
	iVar40 = unk_0x7619952D26DF7783(iVar4, "panim");
	iVar41 = unk_0x7619952D26DF7783(iVar4, "blok");
	iVar42 = unk_0x7619952D26DF7783(iVar4, "root");
	iVar43 = unk_0x7619952D26DF7783(iVar4, "mgveh");
	iVar44 = unk_0x7619952D26DF7783(iVar4, "vehtg");
	iVar45 = unk_0x7619952D26DF7783(iVar4, "prerq");
	iVar46 = unk_0x7619952D26DF7783(iVar4, "vehdm");
	iVar47 = unk_0x7619952D26DF7783(iVar4, "vehpir");
	iVar53 = unk_0x7619952D26DF7783(iVar4, "dwsg");
	iVar54 = unk_0x7619952D26DF7783(iVar4, "vhmd");
	iVar55 = unk_0x7619952D26DF7783(iVar4, "pedtg");
	iVar56 = unk_0x7619952D26DF7783(iVar4, "peddm");
	iVar57 = unk_0x7619952D26DF7783(iVar4, "dtChar");
	iVar58 = unk_0x7619952D26DF7783(iVar4, "dtCCDs");
	iVar59 = unk_0x7619952D26DF7783(iVar4, "dtApp");
	iVar60 = unk_0x7619952D26DF7783(iVar4, "pdkrq");
	iVar61 = unk_0x7619952D26DF7783(iVar4, "pdkrc");
	iVar91 = unk_0x7619952D26DF7783(iVar4, "deet");
	iVar92 = unk_0x7619952D26DF7783(iVar4, "deei");
	iVar93 = unk_0x7619952D26DF7783(iVar4, "cgll");
	iVar94 = unk_0x7619952D26DF7783(iVar4, "cgul");
	iVar95 = unk_0x7619952D26DF7783(iVar4, "dtZnI");
	iVar96 = unk_0x7619952D26DF7783(iVar4, "dtZTtr");
	iVar97 = unk_0x7619952D26DF7783(iVar4, "drbl");
	iVar98 = unk_0x7619952D26DF7783(iVar4, "drblo");
	iVar99 = unk_0x7619952D26DF7783(iVar4, "docoid");
	iVar100 = unk_0x7619952D26DF7783(iVar4, "dlcoid");
	uVar101 = 1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar2, "trl", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		iVar48[iVar0] = unk_0x7619952D26DF7783(iVar4, &cVar2);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		StringCopy(&cVar2, "dtvr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		iVar62[iVar0] = unk_0x7619952D26DF7783(iVar4, &cVar2);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&cVar2, "dtbt", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		iVar87[iVar0] = unk_0x7619952D26DF7783(iVar4, &cVar2);
		iVar0++;
	}
	if (Global_4456448.f_207979 > 92)
	{
		Global_4456448.f_207979 = 92;
	}
	if (iVar9 != 0 && unk_0x3E932F23D327A136(iVar9, 0) == 2)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_4456448.f_207979 - 1))
		{
			if (iVar9 != 0 && unk_0x3E932F23D327A136(iVar9, iVar0) == 2)
			{
				func_240(&(Global_4456448.f_197289[iVar0]), iVar0);
				if (iVar6 != 0 && unk_0x3E932F23D327A136(iVar6, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_1 = unk_0xE082EE0DCA9466C4(iVar6, iVar0);
				}
				if (iVar5 != 0)
				{
					Global_4456448.f_197289[iVar0] = unk_0xE082EE0DCA9466C4(iVar5, iVar0);
				}
				if (iVar7 != 0 && unk_0x3E932F23D327A136(iVar7, iVar0) == 4)
				{
					StringCopy(&(Global_4456448.f_197289[iVar0].f_2), unk_0x3E4982E6ACD879AE(iVar7, iVar0), 16);
				}
				else
				{
					StringCopy(&(Global_4456448.f_197289[iVar0].f_2), "", 16);
				}
				if (iVar8 != 0)
				{
					Global_4456448.f_197289[iVar0].f_6 = unk_0xE082EE0DCA9466C4(iVar8, iVar0);
				}
				if (iVar9 != 0)
				{
					Global_4456448.f_197289[iVar0].f_7 = unk_0xE082EE0DCA9466C4(iVar9, iVar0);
				}
				if (iVar10 != 0)
				{
					Global_4456448.f_197289[iVar0].f_10 = { unk_0x6403E33233A20F75(iVar10, iVar0) };
				}
				if (iVar11 != 0)
				{
					Global_4456448.f_197289[iVar0].f_13 = unk_0x73F91AA610E60211(iVar11, iVar0);
				}
				if (iVar12 != 0)
				{
					Global_4456448.f_197289[iVar0].f_9 = unk_0xE082EE0DCA9466C4(iVar12, iVar0);
				}
				if (iVar13 != 0)
				{
					Global_4456448.f_197289[iVar0].f_19 = unk_0xE082EE0DCA9466C4(iVar13, iVar0);
				}
				if (iVar14 != 0)
				{
					Global_4456448.f_197289[iVar0].f_47 = unk_0xE082EE0DCA9466C4(iVar14, iVar0);
				}
				if (iVar23 != 0)
				{
					Global_4456448.f_197289[iVar0].f_20 = unk_0xE082EE0DCA9466C4(iVar23, iVar0);
				}
				if (iVar24 != 0)
				{
					Global_4456448.f_197289[iVar0].f_14 = unk_0xE082EE0DCA9466C4(iVar24, iVar0);
				}
				if (iVar25 != 0)
				{
					Global_4456448.f_197289[iVar0].f_15 = unk_0xE082EE0DCA9466C4(iVar25, iVar0);
				}
				if (iVar26 != 0 && unk_0x3E932F23D327A136(iVar26, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_16 = unk_0xE082EE0DCA9466C4(iVar26, iVar0);
				}
				else
				{
					Global_4456448.f_197289[iVar0].f_16 = 0;
				}
				if (iVar27 != 0 && unk_0x3E932F23D327A136(iVar27, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_17 = unk_0xE082EE0DCA9466C4(iVar27, iVar0);
				}
				else
				{
					Global_4456448.f_197289[iVar0].f_17 = 0;
				}
				if (iVar28 != 0 && unk_0x3E932F23D327A136(iVar28, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_18 = unk_0xE082EE0DCA9466C4(iVar28, iVar0);
				}
				else
				{
					Global_4456448.f_197289[iVar0].f_18 = 0;
				}
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 <= 23)
				{
					if (iVar62[iVar1] != 0 && unk_0x3E932F23D327A136(iVar62[iVar1], iVar0) == 2)
					{
						Global_4456448.f_197289[iVar0].f_80[iVar1] = unk_0xE082EE0DCA9466C4(iVar62[iVar1], iVar0);
					}
					iVar1++;
				}
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 <= 2)
				{
					if (iVar87[iVar1] != 0 && unk_0x3E932F23D327A136(iVar87[iVar1], iVar0) == 2)
					{
						Global_4456448.f_197289[iVar0].f_107[iVar1] = unk_0xE082EE0DCA9466C4(iVar87[iVar1], iVar0);
					}
					iVar1++;
				}
				if (iVar29 != 0 && unk_0x3E932F23D327A136(iVar29, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_8 = unk_0xE082EE0DCA9466C4(iVar29, iVar0);
				}
				else
				{
					Global_4456448.f_197289[iVar0].f_8 = 0;
				}
				if (iVar54 != 0 && unk_0x3E932F23D327A136(iVar54, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_77 = unk_0xE082EE0DCA9466C4(iVar54, iVar0);
				}
				else
				{
					Global_4456448.f_197289[iVar0].f_77 = 0;
				}
				if (iVar43 != 0 && unk_0x3E932F23D327A136(iVar43, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_24 = unk_0xE082EE0DCA9466C4(iVar43, iVar0);
				}
				if (iVar15 != 0 && unk_0x3E932F23D327A136(iVar15, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_29 = unk_0xE082EE0DCA9466C4(iVar15, iVar0);
				}
				if (iVar16 != 0 && unk_0x3E932F23D327A136(iVar16, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_36 = unk_0xE082EE0DCA9466C4(iVar16, iVar0);
				}
				if (iVar17 != 0 && unk_0x3E932F23D327A136(iVar17, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_37 = unk_0xE082EE0DCA9466C4(iVar17, iVar0);
				}
				if (iVar18 != 0 && unk_0x3E932F23D327A136(iVar18, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_38 = unk_0xE082EE0DCA9466C4(iVar18, iVar0);
				}
				if (iVar19 != 0 && unk_0x3E932F23D327A136(iVar19, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_39 = unk_0xE082EE0DCA9466C4(iVar19, iVar0);
				}
				if (iVar20 != 0 && unk_0x3E932F23D327A136(iVar20, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_40 = unk_0xE082EE0DCA9466C4(iVar20, iVar0);
				}
				if (iVar21 != 0 && unk_0x3E932F23D327A136(iVar21, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_41 = unk_0xE082EE0DCA9466C4(iVar21, iVar0);
				}
				if (iVar22 != 0 && unk_0x3E932F23D327A136(iVar22, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_30 = unk_0xE082EE0DCA9466C4(iVar22, iVar0);
				}
				if (iVar30 != 0 && unk_0x3E932F23D327A136(iVar30, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_21 = unk_0xE082EE0DCA9466C4(iVar30, iVar0);
				}
				if (iVar31 != 0 && unk_0x3E932F23D327A136(iVar31, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_22 = unk_0xE082EE0DCA9466C4(iVar31, iVar0);
				}
				if (iVar32 != 0 && unk_0x3E932F23D327A136(iVar32, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_42 = unk_0xE082EE0DCA9466C4(iVar32, iVar0);
				}
				if (iVar33 != 0 && unk_0x3E932F23D327A136(iVar33, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_43 = unk_0xE082EE0DCA9466C4(iVar33, iVar0);
				}
				if (iVar35 != 0 && unk_0x3E932F23D327A136(iVar35, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_44 = unk_0xE082EE0DCA9466C4(iVar35, iVar0);
				}
				if (iVar34 != 0 && unk_0x3E932F23D327A136(iVar34, iVar0) == 2)
				{
					iVar103 = unk_0xE082EE0DCA9466C4(iVar34, iVar0);
					if ((iVar103 >= 0 && iVar103 < 32) && Global_4456448.f_197289[iVar0].f_44 == 0)
					{
						unk_0x5D96D8530B3D0904(&(Global_4456448.f_197289[iVar0].f_44), iVar103);
					}
				}
				if (iVar37 != 0 && unk_0x3E932F23D327A136(iVar37, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_45 = unk_0xE082EE0DCA9466C4(iVar37, iVar0);
				}
				if (iVar38 != 0 && unk_0x3E932F23D327A136(iVar38, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_46 = unk_0xE082EE0DCA9466C4(iVar38, iVar0);
				}
				if (iVar40 != 0 && unk_0x3E932F23D327A136(iVar40, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_23 = unk_0xE082EE0DCA9466C4(iVar40, iVar0);
				}
				if (iVar44 != 0 && unk_0x3E932F23D327A136(iVar44, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_25 = unk_0xE082EE0DCA9466C4(iVar44, iVar0);
				}
				if (iVar47 != 0 && unk_0x3E932F23D327A136(iVar47, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_26 = unk_0xE082EE0DCA9466C4(iVar47, iVar0);
				}
				if (iVar45 != 0 && unk_0x3E932F23D327A136(iVar45, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_27 = unk_0xE082EE0DCA9466C4(iVar45, iVar0);
				}
				if (iVar46 != 0 && unk_0x3E932F23D327A136(iVar46, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_28 = unk_0xE082EE0DCA9466C4(iVar46, iVar0);
				}
				if (iVar55 != 0 && unk_0x3E932F23D327A136(iVar55, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_49 = unk_0xE082EE0DCA9466C4(iVar55, iVar0);
				}
				if (iVar56 != 0 && unk_0x3E932F23D327A136(iVar56, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_50 = unk_0xE082EE0DCA9466C4(iVar56, iVar0);
				}
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 <= 3)
				{
					if (iVar48[iVar1] != 0 && unk_0x3E932F23D327A136(iVar48[iVar1], iVar0) == 2)
					{
						Global_4456448.f_197289[iVar0].f_31[iVar1] = unk_0xE082EE0DCA9466C4(iVar48[iVar1], iVar0);
					}
					iVar1++;
				}
				if (iVar39 != 0 && unk_0x3E932F23D327A136(iVar39, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_48 = unk_0xE082EE0DCA9466C4(iVar39, iVar0);
				}
				if (iVar53 != 0 && unk_0x3E932F23D327A136(iVar53, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_76 = unk_0xE082EE0DCA9466C4(iVar53, iVar0);
				}
				else
				{
					Global_4456448.f_197289[iVar0].f_76 = 0;
				}
				if (iVar41 != 0)
				{
					StringCopy(&(Global_4456448.f_197289[iVar0].f_60), unk_0x3E4982E6ACD879AE(iVar41, iVar0), 24);
				}
				if (iVar42 != 0)
				{
					StringCopy(&(Global_4456448.f_197289[iVar0].f_66), unk_0x3E4982E6ACD879AE(iVar42, iVar0), 24);
				}
				if (iVar57 != 0 && unk_0x3E932F23D327A136(iVar57, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_79 = unk_0xE082EE0DCA9466C4(iVar57, iVar0);
				}
				else
				{
					Global_4456448.f_197289[iVar0].f_79 = -1;
				}
				if (iVar58 != 0 && unk_0x3E932F23D327A136(iVar58, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_51 = unk_0xE082EE0DCA9466C4(iVar58, iVar0);
				}
				else
				{
					Global_4456448.f_197289[iVar0].f_51 = 0;
				}
				if (iVar95 != 0 && unk_0x3E932F23D327A136(iVar95, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_56 = unk_0xE082EE0DCA9466C4(iVar95, iVar0);
				}
				else
				{
					Global_4456448.f_197289[iVar0].f_56 = -1;
				}
				if (iVar96 != 0 && unk_0x3E932F23D327A136(iVar96, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_57 = unk_0xE082EE0DCA9466C4(iVar96, iVar0);
				}
				else
				{
					Global_4456448.f_197289[iVar0].f_57 = -1;
				}
				if (iVar59 != 0)
				{
					StringCopy(&(Global_4456448.f_197289[iVar0].f_72), unk_0x3E4982E6ACD879AE(iVar59, iVar0), 4);
				}
				if (iVar60 != 0 && unk_0x3E932F23D327A136(iVar60, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_52 = unk_0xE082EE0DCA9466C4(iVar60, iVar0);
				}
				else
				{
					Global_4456448.f_197289[iVar0].f_52 = 0;
				}
				if (iVar61 != 0 && unk_0x3E932F23D327A136(iVar61, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_53 = unk_0xE082EE0DCA9466C4(iVar61, iVar0);
				}
				else
				{
					Global_4456448.f_197289[iVar0].f_53 = 0;
				}
				if (iVar91 != 0 && unk_0x3E932F23D327A136(iVar91, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_105 = unk_0xE082EE0DCA9466C4(iVar91, iVar0);
				}
				else
				{
					Global_4456448.f_197289[iVar0].f_105 = 0;
				}
				if (iVar92 != 0 && unk_0x3E932F23D327A136(iVar92, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_106 = unk_0xE082EE0DCA9466C4(iVar92, iVar0);
				}
				else
				{
					Global_4456448.f_197289[iVar0].f_106 = -1;
				}
				if (iVar93 != 0 && unk_0x3E932F23D327A136(iVar93, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_54 = unk_0xE082EE0DCA9466C4(iVar93, iVar0);
				}
				else
				{
					Global_4456448.f_197289[iVar0].f_54 = 0;
				}
				if (iVar94 != 0 && unk_0x3E932F23D327A136(iVar94, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_55 = unk_0xE082EE0DCA9466C4(iVar94, iVar0);
				}
				else
				{
					Global_4456448.f_197289[iVar0].f_55 = 0;
				}
				if (iVar97 != 0 && unk_0x3E932F23D327A136(iVar97, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_58 = unk_0xE082EE0DCA9466C4(iVar97, iVar0);
				}
				else
				{
					Global_4456448.f_197289[iVar0].f_58 = -1;
				}
				if (iVar98 != 0 && unk_0x3E932F23D327A136(iVar98, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_59 = unk_0xE082EE0DCA9466C4(iVar98, iVar0);
				}
				else
				{
					Global_4456448.f_197289[iVar0].f_59 = -1;
				}
				if (iVar36 != 0 && unk_0x3E932F23D327A136(iVar36, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_73 = unk_0xE082EE0DCA9466C4(iVar36, iVar0);
				}
				else
				{
					Global_4456448.f_197289[iVar0].f_73 = -1;
				}
				if (iVar99 != 0 && unk_0x3E932F23D327A136(iVar99, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_74 = unk_0xE082EE0DCA9466C4(iVar99, iVar0);
				}
				else
				{
					Global_4456448.f_197289[iVar0].f_74 = -1;
				}
				if (iVar100 != 0 && unk_0x3E932F23D327A136(iVar100, iVar0) == 2)
				{
					Global_4456448.f_197289[iVar0].f_75 = unk_0xE082EE0DCA9466C4(iVar100, iVar0);
				}
				else
				{
					Global_4456448.f_197289[iVar0].f_75 = -1;
				}
				func_191("alvdit", &(Global_4456448.f_197289[iVar0].f_111), 1, &iVar4, &uVar101, iVar0, 0, -2340845);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (Global_4456448.f_207979 - 1))
		{
			Global_4456448.f_197289[iVar0] = 0;
			StringCopy(&(Global_4456448.f_197289[iVar0].f_2), "", 16);
			Global_4456448.f_197289[iVar0].f_6 = -1;
			Global_4456448.f_197289[iVar0].f_7 = -1;
			Global_4456448.f_197289[iVar0].f_10 = { 0f, 0f, 0f };
			Global_4456448.f_197289[iVar0].f_13 = 3f;
			Global_4456448.f_197289[iVar0].f_9 = 0;
			Global_4456448.f_197289[iVar0].f_19 = -1;
			Global_4456448.f_197289[iVar0].f_29 = 0;
			Global_4456448.f_197289[iVar0].f_36 = -1;
			Global_4456448.f_197289[iVar0].f_37 = -1;
			Global_4456448.f_197289[iVar0].f_38 = -1;
			Global_4456448.f_197289[iVar0].f_39 = -1;
			Global_4456448.f_197289[iVar0].f_40 = -1;
			Global_4456448.f_197289[iVar0].f_41 = 0;
			Global_4456448.f_197289[iVar0].f_20 = 0;
			Global_4456448.f_197289[iVar0].f_14 = 0;
			Global_4456448.f_197289[iVar0].f_15 = 0;
			Global_4456448.f_197289[iVar0].f_16 = 0;
			Global_4456448.f_197289[iVar0].f_17 = 0;
			Global_4456448.f_197289[iVar0].f_18 = 0;
			Global_4456448.f_197289[iVar0].f_8 = 0;
			Global_4456448.f_197289[iVar0].f_21 = -1;
			Global_4456448.f_197289[iVar0].f_22 = -1;
			Global_4456448.f_197289[iVar0].f_23 = 0;
			StringCopy(&(Global_4456448.f_197289[iVar0].f_60), "", 24);
			StringCopy(&(Global_4456448.f_197289[iVar0].f_66), "", 24);
			Global_4456448.f_197289[iVar0].f_24 = -1;
			Global_4456448.f_197289[iVar0].f_25 = -1;
			Global_4456448.f_197289[iVar0].f_27 = -1;
			Global_4456448.f_197289[iVar0].f_28 = 0;
			Global_4456448.f_197289[iVar0].f_26 = -1;
			Global_4456448.f_197289[iVar0].f_76 = 0;
			Global_4456448.f_197289[iVar0].f_42 = 0;
			Global_4456448.f_197289[iVar0].f_43 = -1;
			Global_4456448.f_197289[iVar0].f_44 = 0;
			Global_4456448.f_197289[iVar0].f_45 = -1;
			Global_4456448.f_197289[iVar0].f_46 = 0;
			Global_4456448.f_197289[iVar0].f_48 = -1;
			Global_4456448.f_197289[iVar0].f_77 = 0;
			Global_4456448.f_197289[iVar0].f_49 = -1;
			Global_4456448.f_197289[iVar0].f_50 = 0;
			Global_4456448.f_197289[iVar0].f_79 = -1;
			StringCopy(&(Global_4456448.f_197289[iVar0].f_72), "", 4);
			Global_4456448.f_197289[iVar0].f_105 = 0;
			Global_4456448.f_197289[iVar0].f_106 = -1;
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 <= 23)
			{
				Global_4456448.f_197289[iVar0].f_80[iVar1] = 0;
				iVar1++;
			}
			iVar1 = 0;
			while (iVar1 <= 2)
			{
				Global_4456448.f_197289[iVar0].f_107[iVar1] = 0;
				iVar1++;
			}
			iVar0++;
		}
	}
	if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, "dtmp") == 2)
	{
		Global_4456448.f_207975[0] = unk_0x8A83B52A17A321DB(iParam0, "dtmp");
	}
	else
	{
		Global_4456448.f_207975[0] = 0;
	}
	if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, "dtmp2") == 2)
	{
		Global_4456448.f_207975[1] = unk_0x8A83B52A17A321DB(iParam0, "dtmp2");
	}
	else
	{
		Global_4456448.f_207975[1] = 0;
	}
	if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, "dtmp3") == 2)
	{
		Global_4456448.f_207975[2] = unk_0x8A83B52A17A321DB(iParam0, "dtmp3");
	}
	else
	{
		Global_4456448.f_207975[2] = 0;
	}
}

void func_240(var uParam0, int iParam1)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "", 16);
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = { 0f, 0f, 0f };
	uParam0->f_13 = 3f;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = -1;
	uParam0->f_20 = 0;
	uParam0->f_21 = -1;
	uParam0->f_22 = -1;
	uParam0->f_23 = 0;
	uParam0->f_24 = -1;
	uParam0->f_27 = -1;
	uParam0->f_25 = -1;
	uParam0->f_28 = 0;
	uParam0->f_26 = -1;
	uParam0->f_29 = 0;
	uParam0->f_36 = -1;
	uParam0->f_37 = -1;
	uParam0->f_38 = -1;
	uParam0->f_39 = -1;
	uParam0->f_40 = -1;
	uParam0->f_41 = 0;
	uParam0->f_30 = -1;
	uParam0->f_42 = 0;
	uParam0->f_43 = -1;
	uParam0->f_44 = 0;
	uParam0->f_45 = -1;
	uParam0->f_46 = 0;
	uParam0->f_47 = -1;
	uParam0->f_48 = -1;
	StringCopy(&(uParam0->f_60), "", 24);
	StringCopy(&(uParam0->f_66), "", 24);
	uParam0->f_77 = 0;
	uParam0->f_49 = -1;
	uParam0->f_50 = 0;
	uParam0->f_79 = -1;
	StringCopy(&(uParam0->f_72), "", 4);
	uParam0->f_51 = 0;
	uParam0->f_52 = 0;
	uParam0->f_53 = 0;
	uParam0->f_105 = 0;
	uParam0->f_106 = -1;
	uParam0->f_54 = 0;
	uParam0->f_55 = 0;
	uParam0->f_56 = -1;
	uParam0->f_57 = -1;
	uParam0->f_58 = -1;
	uParam0->f_59 = -1;
	uParam0->f_73 = -1;
	uParam0->f_74 = -1;
	uParam0->f_75 = -1;
	func_241(&(uParam0->f_111), 0);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		uParam0->f_31[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		uParam0->f_80[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		uParam0->f_107[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_76 = 0;
	if (iParam1 != -1)
	{
		unk_0x0674E58A79778E99(&(Global_4456448.f_207975[(iParam1 / 32)]), (iParam1 % 32));
	}
	if (unk_0xE4EDC4B0E92C078B(uParam0->f_78))
	{
		unk_0x142CC44DB769B57E(&(uParam0->f_78));
	}
}

void func_241(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(*uParam0)[iVar0] = iParam1;
		iVar0++;
	}
}

bool func_242()
{
	return Global_4456448 == 1;
}

void func_243(int iParam0)
{
	iVar2 = unk_0x6D954AF55D3925DB(iParam0, "race");
	Global_4456448.f_75702 = unk_0x8A83B52A17A321DB(iVar2, "chp");
	iVar3 = (Global_4456448.f_75702 - 1);
	Global_4456448.f_75704 = unk_0x8A83B52A17A321DB(iVar2, "lap");
	Global_4456448.f_75705 = unk_0x8A83B52A17A321DB(iVar2, "type");
	Global_4456448.f_75706 = unk_0x8A83B52A17A321DB(iVar2, "gtar");
	Global_4456448.f_78148 = unk_0xB37C1AC7E8A75F3C(iVar2, "head");
	Global_4456448.f_78149 = unk_0xB37C1AC7E8A75F3C(iVar2, "lrgs");
	Global_4456448.f_78150 = unk_0xB37C1AC7E8A75F3C(iVar2, "udgs");
	Global_4456448.f_78151 = unk_0xB37C1AC7E8A75F3C(iVar2, "gw");
	Global_4456448.f_78152 = unk_0xB37C1AC7E8A75F3C(iVar2, "gl");
	Global_4456448.f_78153 = unk_0x8A83B52A17A321DB(iVar2, "lanes");
	Global_4456448.f_64859 = { unk_0xC0F58A082935B6E1(iVar2, "grid") };
	Global_4456448.f_75708 = unk_0x8A83B52A17A321DB(iVar2, "icv");
	Global_4456448.f_2 = unk_0x8A83B52A17A321DB(iVar2, "subtype");
	Global_4456448.f_75710 = unk_0x8A83B52A17A321DB(iVar2, "tri1");
	Global_4456448.f_75711 = unk_0x8A83B52A17A321DB(iVar2, "tri2");
	Global_4456448.f_75712 = unk_0x8A83B52A17A321DB(iVar2, "clbs");
	Global_4456448.f_78147 = unk_0x8A83B52A17A321DB(iVar2, "ptp");
	Global_4456448.f_78145 = unk_0x8A83B52A17A321DB(iVar2, "strtg");
	Global_4456448.f_78146 = unk_0x8A83B52A17A321DB(iVar2, "rcdam");
	Global_4456448.f_70743 = unk_0xB37C1AC7E8A75F3C(iVar2, "rdis");
	Global_4456448.f_78142 = unk_0x8A83B52A17A321DB(iVar2, "gridty");
	Global_4456448.f_232918 = unk_0xAF09C5F2B0AB2428(iVar2, "iprem");
	Global_4456448.f_233096 = unk_0x8A83B52A17A321DB(iVar2, "bsted");
	Global_4456448.f_78143 = unk_0xAF09C5F2B0AB2428(iVar2, "stgrd");
	Global_4456448.f_234106 = unk_0x8A83B52A17A321DB(iVar2, "retl");
	func_249("rlmli", &(Global_4456448.f_234122), &iVar2, 1, -2340845);
	if (unk_0x8A83B52A17A321DB(iVar2, "cemx") != 0)
	{
		Global_4456448.f_234107 = unk_0x8A83B52A17A321DB(iVar2, "cemx");
	}
	else
	{
		Global_4456448.f_234107 = 12;
	}
	if (unk_0x8A83B52A17A321DB(iVar2, "cemn") != 0)
	{
		Global_4456448.f_234108 = unk_0x8A83B52A17A321DB(iVar2, "cemn");
	}
	else
	{
		Global_4456448.f_234108 = 3;
	}
	if (unk_0x8A83B52A17A321DB(iVar2, "bstol") != 0)
	{
		Global_4456448.f_233097 = unk_0x8A83B52A17A321DB(iVar2, "bstol");
	}
	else
	{
		Global_4456448.f_233097 = 1;
	}
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		StringCopy(&cVar4, "btfs", 16);
		StringIntConCat(&cVar4, iVar0, 16);
		Global_4456448.f_234109[iVar0] = unk_0x8A83B52A17A321DB(iVar2, &cVar4);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&cVar8, "icpht", 16);
		StringIntConCat(&cVar8, iVar0, 16);
		StringCopy(&(Global_4456448.f_70722[iVar0]), unk_0x6F58F8DD6B54A28D(iVar2, &cVar8), 24);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		StringCopy(&cVar12, "trbpf", 16);
		StringIntConCat(&cVar12, iVar0, 16);
		Global_4456448.f_233932[iVar0] = unk_0x8A83B52A17A321DB(iVar2, &cVar12);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&cVar16, "trbpc", 16);
		StringIntConCat(&cVar16, iVar0, 16);
		Global_4456448.f_233928[iVar0] = unk_0x8A83B52A17A321DB(iVar2, &cVar16);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar20 = 0;
		while (iVar20 < 3)
		{
			StringCopy(&cVar21, "trbps", 16);
			StringIntConCat(&cVar21, iVar0, 16);
			StringConCat(&cVar21, "d", 16);
			StringIntConCat(&cVar21, iVar20, 16);
			Global_4456448.f_233943[iVar0][iVar20] = unk_0x8A83B52A17A321DB(iVar2, &cVar21);
			iVar20++;
		}
		iVar0++;
	}
	if (Global_4456448.f_197286 == 0)
	{
		func_248();
	}
	iVar25 = unk_0x7619952D26DF7783(iVar2, "chh");
	iVar26 = unk_0x7619952D26DF7783(iVar2, "chs");
	iVar27 = unk_0x7619952D26DF7783(iVar2, "chs2");
	iVar28 = unk_0x7619952D26DF7783(iVar2, "chvs");
	iVar29 = unk_0x7619952D26DF7783(iVar2, "chpp");
	iVar30 = unk_0x7619952D26DF7783(iVar2, "chpps");
	iVar31 = unk_0x7619952D26DF7783(iVar2, "chl");
	iVar32 = unk_0x7619952D26DF7783(iVar2, "sndchk");
	iVar33 = unk_0x7619952D26DF7783(iVar2, "sndrsp");
	iVar34 = unk_0x7619952D26DF7783(iVar2, "cpwwt");
	iVar35 = unk_0x7619952D26DF7783(iVar2, "cppsst");
	iVar36 = unk_0x7619952D26DF7783(iVar2, "cpado");
	iVar37 = unk_0x7619952D26DF7783(iVar2, "cpados");
	iVar38 = unk_0x7619952D26DF7783(iVar2, "chttu");
	iVar39 = unk_0x7619952D26DF7783(iVar2, "chttl");
	iVar40 = unk_0x7619952D26DF7783(iVar2, "chttr");
	iVar41 = unk_0x7619952D26DF7783(iVar2, "cpbs1");
	iVar42 = unk_0x7619952D26DF7783(iVar2, "cpbs2");
	iVar43 = unk_0x7619952D26DF7783(iVar2, "cptfrm");
	iVar44 = unk_0x7619952D26DF7783(iVar2, "cptfrms");
	iVar45 = unk_0x7619952D26DF7783(iVar2, "chpso");
	iVar46 = unk_0x7619952D26DF7783(iVar2, "chpsos");
	iVar47 = unk_0x7619952D26DF7783(iVar2, "trfmvm");
	iVar48 = unk_0x7619952D26DF7783(iVar2, "chdlo");
	iVar49 = unk_0x7619952D26DF7783(iVar2, "chsto");
	iVar50 = unk_0x7619952D26DF7783(iVar2, "chdlos");
	iVar51 = unk_0x7619952D26DF7783(iVar2, "chstos");
	iVar52 = unk_0x7619952D26DF7783(iVar2, "rsp");
	iVar53 = unk_0x7619952D26DF7783(iVar2, "cdsblcu");
	iVar54 = unk_0x7619952D26DF7783(iVar2, "cpdss");
	iVar55 = unk_0x7619952D26DF7783(iVar2, "rndchk");
	iVar56 = unk_0x7619952D26DF7783(iVar2, "rndchks");
	iVar57 = unk_0x7619952D26DF7783(iVar2, "cpwtr");
	iVar58 = unk_0x7619952D26DF7783(iVar2, "cpwtrs");
	iVar59 = unk_0x7619952D26DF7783(iVar2, "cpair");
	if (Global_4456448.f_75705 == 24 || Global_4456448.f_75705 == 25)
	{
		func_246(iVar2);
	}
	if (Global_4456448.f_75705 == 8)
	{
		Global_4456448.f_75702 = 0;
		iVar0 = 0;
		while (iVar0 <= 101)
		{
			if (!func_127(unk_0x6403E33233A20F75(iVar31, iVar0)))
			{
				Global_4456448.f_75702++;
			}
			iVar0++;
		}
		iVar3 = Global_4456448.f_75702;
	}
	Global_4456448.f_70308 = unk_0x8A83B52A17A321DB(iVar2, "sgdo");
	iVar60 = 0;
	iVar0 = 0;
	while (iVar0 <= iVar3)
	{
		if (iVar0 < 102)
		{
			if (Global_4456448.f_75705 == 8)
			{
				iVar60 = func_245(iVar31, iVar60);
			}
			else
			{
				iVar60 = iVar0;
			}
			Global_4456448.f_65986[iVar0] = { unk_0x6403E33233A20F75(iVar31, iVar60) };
			Global_4456448.f_66293[iVar0] = unk_0x73F91AA610E60211(iVar25, iVar60);
			if (iVar26 != 0 && unk_0x3E932F23D327A136(iVar26, iVar60) == 3)
			{
				Global_4456448.f_69896[iVar0] = unk_0x73F91AA610E60211(iVar26, iVar60);
			}
			else
			{
				Global_4456448.f_69896[iVar0] = 1f;
			}
			if (iVar28 != 0 && unk_0x3E932F23D327A136(iVar28, iVar60) == 3)
			{
				Global_4456448.f_66602[iVar0] = unk_0x73F91AA610E60211(iVar28, iVar60);
			}
			else
			{
				Global_4456448.f_66602[iVar0] = 1f;
			}
			if (iVar27 != 0 && unk_0x3E932F23D327A136(iVar27, iVar60) == 3)
			{
				Global_4456448.f_69999[iVar0] = unk_0x73F91AA610E60211(iVar27, iVar60);
			}
			else
			{
				Global_4456448.f_69999[iVar0] = 1f;
			}
			if (iVar29 != 0 && unk_0x3E932F23D327A136(iVar29, iVar60) == 3)
			{
				Global_4456448.f_70102[iVar0] = unk_0x73F91AA610E60211(iVar29, iVar60);
			}
			else
			{
				Global_4456448.f_70102[iVar0] = 0f;
			}
			if (iVar30 != 0 && unk_0x3E932F23D327A136(iVar30, iVar60) == 3)
			{
				Global_4456448.f_70205[iVar0] = unk_0x73F91AA610E60211(iVar30, iVar60);
			}
			else
			{
				Global_4456448.f_70205[iVar0] = 0f;
			}
			if (iVar45 != 0 && unk_0x3E932F23D327A136(iVar45, iVar60) == 3)
			{
				Global_4456448.f_64863[iVar0].f_10 = unk_0x73F91AA610E60211(iVar45, iVar60);
			}
			else
			{
				Global_4456448.f_64863[iVar0].f_10 = 0f;
			}
			if (iVar46 != 0 && unk_0x3E932F23D327A136(iVar46, iVar60) == 3)
			{
				Global_4456448.f_66705[iVar0].f_10 = unk_0x73F91AA610E60211(iVar46, iVar60);
			}
			else
			{
				Global_4456448.f_66705[iVar0].f_10 = 0f;
			}
			if (iVar48 != 0 && unk_0x3E932F23D327A136(iVar48, iVar60) == 2)
			{
				Global_4456448.f_70309[iVar0] = unk_0xE082EE0DCA9466C4(iVar48, iVar60);
			}
			else
			{
				Global_4456448.f_70309[iVar0] = -1;
			}
			if (iVar49 != 0 && unk_0x3E932F23D327A136(iVar49, iVar60) == 2)
			{
				Global_4456448.f_70412[iVar0] = unk_0xE082EE0DCA9466C4(iVar49, iVar60);
			}
			else
			{
				Global_4456448.f_70412[iVar0] = -1;
			}
			if (iVar50 != 0 && unk_0x3E932F23D327A136(iVar50, iVar60) == 2)
			{
				Global_4456448.f_70515[iVar0] = unk_0xE082EE0DCA9466C4(iVar50, iVar60);
			}
			else
			{
				Global_4456448.f_70515[iVar0] = -1;
			}
			if (iVar51 != 0 && unk_0x3E932F23D327A136(iVar51, iVar60) == 2)
			{
				Global_4456448.f_70618[iVar0] = unk_0xE082EE0DCA9466C4(iVar51, iVar60);
			}
			else
			{
				Global_4456448.f_70618[iVar0] = -1;
			}
			if (Global_4456448.f_69896[iVar0] < 0,3f)
			{
				Global_4456448.f_69896[iVar0] = 0,3f;
			}
			if (Global_4456448.f_69999[iVar0] < 0,1f)
			{
				Global_4456448.f_69999[iVar0] = Global_4456448.f_69896[iVar0];
			}
			if (Global_4456448.f_69999[iVar0] < 0,3f)
			{
				Global_4456448.f_69999[iVar0] = 0,3f;
			}
			Global_4456448.f_67828[iVar0] = { unk_0x6403E33233A20F75(iVar32, iVar60) };
			Global_4456448.f_68135[iVar0] = unk_0x73F91AA610E60211(iVar33, iVar60);
			Global_4456448.f_68238[iVar0] = unk_0xE082EE0DCA9466C4(iVar34, iVar60);
			Global_4456448.f_68341[iVar0] = unk_0xE082EE0DCA9466C4(iVar35, iVar60);
			Global_4456448.f_68444[iVar0] = { unk_0x6403E33233A20F75(iVar36, iVar60) };
			Global_4456448.f_68751[iVar0] = { unk_0x6403E33233A20F75(iVar37, iVar60) };
			Global_4456448.f_69058[iVar0] = unk_0xE082EE0DCA9466C4(iVar38, iVar60);
			Global_4456448.f_69264[iVar0] = unk_0xE082EE0DCA9466C4(iVar40, iVar60);
			Global_4456448.f_69161[iVar0] = unk_0xE082EE0DCA9466C4(iVar39, iVar60);
			Global_4456448.f_66396[iVar0] = unk_0xE082EE0DCA9466C4(iVar41, iVar60);
			Global_4456448.f_66499[iVar0] = unk_0xE082EE0DCA9466C4(iVar42, iVar60);
			if (iVar43 != 0 && unk_0x3E932F23D327A136(iVar43, iVar60) == 2)
			{
				Global_4456448.f_69470[iVar0] = unk_0xE082EE0DCA9466C4(iVar43, iVar60);
			}
			else
			{
				Global_4456448.f_69470[iVar0] = -1;
			}
			if ((iVar44 != 0 && unk_0x3E932F23D327A136(iVar44, iVar60) == 2) && !func_127(Global_4456448.f_67828[iVar0]))
			{
				Global_4456448.f_69573[iVar0] = unk_0xE082EE0DCA9466C4(iVar44, iVar60);
			}
			else
			{
				Global_4456448.f_69573[iVar0] = -1;
			}
			if (!unk_0xEAE0D21A50E6C7F4(Global_4456448.f_66396[iVar0], 0))
			{
				if (iVar52 != 0 && unk_0x3E932F23D327A136(iVar52, iVar60) == 1)
				{
					func_244(&(Global_4456448.f_66396[iVar0]), 5, unk_0x6A09C1EE250C8CE7(iVar52, iVar60));
				}
				if (iVar53 != 0 && unk_0x3E932F23D327A136(iVar53, iVar60) == 1)
				{
					func_244(&(Global_4456448.f_66396[iVar0]), 3, unk_0x6A09C1EE250C8CE7(iVar53, iVar60));
				}
				if (iVar54 != 0 && unk_0x3E932F23D327A136(iVar54, iVar60) == 1)
				{
					func_244(&(Global_4456448.f_66396[iVar0]), 6, unk_0x6A09C1EE250C8CE7(iVar54, iVar60));
				}
				if (iVar55 != 0 && unk_0x3E932F23D327A136(iVar55, iVar60) == 1)
				{
					func_244(&(Global_4456448.f_66396[iVar0]), 1, unk_0x6A09C1EE250C8CE7(iVar55, iVar60));
				}
				if (iVar56 != 0 && unk_0x3E932F23D327A136(iVar56, iVar60) == 1)
				{
					func_244(&(Global_4456448.f_66396[iVar0]), 2, unk_0x6A09C1EE250C8CE7(iVar56, iVar60));
				}
				if (iVar57 != 0 && unk_0x3E932F23D327A136(iVar57, iVar60) == 1)
				{
					func_244(&(Global_4456448.f_66396[iVar0]), 7, unk_0x6A09C1EE250C8CE7(iVar57, iVar60));
				}
				if (iVar58 != 0 && unk_0x3E932F23D327A136(iVar58, iVar60) == 1)
				{
					func_244(&(Global_4456448.f_66396[iVar0]), 8, unk_0x6A09C1EE250C8CE7(iVar58, iVar60));
				}
				if (iVar59 != 0 && unk_0x3E932F23D327A136(iVar59, iVar60) == 1)
				{
					func_244(&(Global_4456448.f_66396[iVar0]), 9, unk_0x6A09C1EE250C8CE7(iVar59, iVar60));
				}
				unk_0x5D96D8530B3D0904(&(Global_4456448.f_66396[iVar0]), 0);
			}
			iVar60++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		Global_4456448.f_69676[iVar0] = unk_0xE082EE0DCA9466C4(iVar47, iVar0);
		iVar0++;
	}
	if (Global_4456448.f_69676[3] != 0)
	{
		if (Global_4456448.f_69676[1] == 0)
		{
			Global_4456448.f_69676[1] = 231083307;
		}
		if (Global_4456448.f_69676[2] == 0)
		{
			Global_4456448.f_69676[2] = -1214293858;
		}
	}
	iVar61 = unk_0x7619952D26DF7783(iVar2, "vta");
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_201 - 1))
	{
		if (iVar0 < 32)
		{
			iVar1 = unk_0xE082EE0DCA9466C4(iVar61, iVar0);
			Global_4456448.f_78156[iVar0] = iVar1;
		}
		iVar0++;
	}
	iVar62 = unk_0x7619952D26DF7783(iVar2, "aveh");
	iVar63[0] = unk_0x7619952D26DF7783(iVar2, "adlc");
	iVar63[1] = unk_0x7619952D26DF7783(iVar2, "adlc2");
	iVar0 = 0;
	while (iVar0 < 19)
	{
		iVar1 = unk_0xE082EE0DCA9466C4(iVar62, iVar0);
		Global_4456448.f_75713[iVar0] = iVar1;
		Global_4456448.f_75733[iVar0][0] = 0;
		Global_4456448.f_75733[iVar0][0] = unk_0xE082EE0DCA9466C4(iVar63[0], iVar0);
		Global_4456448.f_75733[iVar0][1] = 0;
		Global_4456448.f_75733[iVar0][1] = unk_0xE082EE0DCA9466C4(iVar63[1], iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&cVar76, "vspn", 8);
		StringIntConCat(&cVar76, iVar0, 8);
		iVar67[iVar0] = unk_0x7619952D26DF7783(iVar2, &cVar76);
		iVar75 = 0;
		while (iVar75 <= iVar3)
		{
			Global_4456448.f_64863[iVar75][iVar0] = { unk_0x6403E33233A20F75(iVar67[iVar0], iVar75) };
			iVar75++;
		}
		StringCopy(&cVar76, "vspns", 8);
		StringIntConCat(&cVar76, iVar0, 8);
		iVar71[iVar0] = unk_0x7619952D26DF7783(iVar2, &cVar76);
		iVar75 = 0;
		while (iVar75 <= iVar3)
		{
			if (iVar71[iVar0] != 0 && unk_0x3E932F23D327A136(iVar71[iVar0], iVar75) == 5)
			{
				Global_4456448.f_66705[iVar75][iVar0] = { unk_0x6403E33233A20F75(iVar71[iVar0], iVar75) };
			}
			else
			{
				Global_4456448.f_66705[iVar75][iVar0] = { 0f, 0f, 0f };
			}
			iVar75++;
		}
		iVar0++;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_75712, 15))
	{
		if (Global_4456448.f_75710 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_4456448.f_22), 24);
			unk_0x0674E58A79778E99(&(Global_4456448.f_22), 26);
			unk_0x5D96D8530B3D0904(&(Global_4456448.f_22), 25);
			Global_4456448.f_78155 = 1;
			unk_0x0674E58A79778E99(&(Global_4456448.f_75733[15][0]), 0);
			unk_0x5D96D8530B3D0904(&(Global_4456448.f_75733[15][0]), 1);
			Global_4456448.f_75710 = 0;
		}
		else if (Global_4456448.f_75710 == 2)
		{
			unk_0x0674E58A79778E99(&(Global_4456448.f_22), 25);
			unk_0x0674E58A79778E99(&(Global_4456448.f_22), 26);
			unk_0x5D96D8530B3D0904(&(Global_4456448.f_22), 24);
			Global_4456448.f_78155 = 2;
			unk_0x0674E58A79778E99(&(Global_4456448.f_75733[15][0]), 0);
			unk_0x5D96D8530B3D0904(&(Global_4456448.f_75733[15][0]), 2);
			Global_4456448.f_75710 = 0;
		}
	}
}

void func_244(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(iParam0, iParam1);
	}
	else
	{
		unk_0x0674E58A79778E99(iParam0, iParam1);
	}
}

int func_245(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	while (iVar0 <= 101)
	{
		if (!func_127(unk_0x6403E33233A20F75(iParam0, iVar0)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_246(int iParam0)
{
	func_247("owrtwh", &(Global_4456448.f_233098[0]), &iParam0, 1f, -904994889);
	func_247("owrtsh", &(Global_4456448.f_233102[0]), &iParam0, 1,2f, -904994889);
	func_247("owrtdh", &(Global_4456448.f_233106[0]), &iParam0, 0,8f, -904994889);
	func_247("owrtwm", &(Global_4456448.f_233098[1]), &iParam0, 1f, -904994889);
	func_247("owrtsm", &(Global_4456448.f_233102[1]), &iParam0, 1,7f, -904994889);
	func_247("owrtdm", &(Global_4456448.f_233106[1]), &iParam0, 0,45f, -904994889);
	func_247("owrtws", &(Global_4456448.f_233098[2]), &iParam0, 1f, -904994889);
	func_247("owrtss", &(Global_4456448.f_233102[2]), &iParam0, 2,2f, -904994889);
	func_247("owrtds", &(Global_4456448.f_233106[2]), &iParam0, 0,05f, -904994889);
	if (unk_0xB37C1AC7E8A75F3C(iParam0, "owrtrr") != 0f)
	{
		Global_4456448.f_233110 = unk_0xB37C1AC7E8A75F3C(iParam0, "owrtrr");
	}
	else
	{
		Global_4456448.f_233110 = 40f;
	}
}

void func_247(char* sParam0, var uParam1, int iParam2, float fParam3, float fParam4)
{
	if (*iParam2 == 0)
	{
		return;
	}
	if (unk_0xAE496C664AE89A9C(*iParam2, sParam0) == 3)
	{
		*uParam1 = unk_0xB37C1AC7E8A75F3C(*iParam2, sParam0);
	}
	else if (func_273())
	{
		if (fParam4 != -2340846f)
		{
			*uParam1 = fParam4;
		}
	}
	else
	{
		*uParam1 = fParam3;
	}
}

void func_248()
{
	Global_4456448.f_233932[0] = 50;
	Global_4456448.f_233932[1] = 30;
	Global_4456448.f_233932[2] = 20;
	Global_4456448.f_233928[0] = 3;
	Global_4456448.f_233928[1] = 2;
	Global_4456448.f_233928[2] = 1;
	Global_4456448.f_233943[0][0] = 7;
	Global_4456448.f_233943[0][1] = 8;
	Global_4456448.f_233943[0][2] = 9;
	Global_4456448.f_233943[1][0] = 5;
	Global_4456448.f_233943[1][1] = 6;
	Global_4456448.f_233943[1][2] = 7;
	Global_4456448.f_233943[2][0] = 3;
	Global_4456448.f_233943[2][1] = 4;
	Global_4456448.f_233943[2][2] = 5;
	Global_4456448.f_233943[3][0] = 1;
	Global_4456448.f_233943[3][1] = 2;
	Global_4456448.f_233943[3][2] = 3;
}

void func_249(char* sParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	if (*iParam2 == 0)
	{
		return;
	}
	if (unk_0xAE496C664AE89A9C(*iParam2, sParam0) == 2)
	{
		*uParam1 = unk_0x8A83B52A17A321DB(*iParam2, sParam0);
	}
	else if (func_273())
	{
		if (iParam4 != -2340845)
		{
			*uParam1 = iParam4;
		}
	}
	else
	{
		*uParam1 = iParam3;
	}
}

void func_250(int iParam0)
{
	if (unk_0x6D954AF55D3925DB(iParam0, "otzone") == 0)
	{
		return;
	}
	iVar1 = unk_0x6D954AF55D3925DB(iParam0, "otzone");
	iVar2 = unk_0x7619952D26DF7783(iVar1, "otvo");
	iVar3 = unk_0x7619952D26DF7783(iVar1, "otvt");
	iVar4 = unk_0x7619952D26DF7783(iVar1, "otbs");
	iVar5 = unk_0x7619952D26DF7783(iVar1, "otpg");
	iVar6 = unk_0x7619952D26DF7783(iVar1, "otrw");
	iVar7 = unk_0x7619952D26DF7783(iVar1, "otpl");
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "otz") == 2)
	{
		Global_4456448.f_233112 = unk_0x8A83B52A17A321DB(iVar1, "otz");
	}
	else
	{
		Global_4456448.f_233112 = 0;
	}
	if (Global_4456448.f_233112 > 30)
	{
		Global_4456448.f_233112 = 30;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_233112 - 1))
	{
		Global_4456448.f_233113[iVar0][0] = { unk_0x6403E33233A20F75(iVar2, iVar0) };
		Global_4456448.f_233113[iVar0][1] = { unk_0x6403E33233A20F75(iVar3, iVar0) };
		if (iVar4 != 0 && unk_0x3E932F23D327A136(iVar4, iVar0) == 2)
		{
			Global_4456448.f_233113[iVar0].f_7 = unk_0xE082EE0DCA9466C4(iVar4, iVar0);
		}
		else
		{
			Global_4456448.f_233113[iVar0].f_7 = 0;
		}
		if (iVar5 != 0 && unk_0x3E932F23D327A136(iVar5, iVar0) == 2)
		{
			Global_4456448.f_233113[iVar0].f_8 = unk_0xE082EE0DCA9466C4(iVar5, iVar0);
		}
		else
		{
			Global_4456448.f_233113[iVar0].f_8 = 0;
		}
		if (iVar6 != 0 && unk_0x3E932F23D327A136(iVar6, iVar0) == 3)
		{
			Global_4456448.f_233113[iVar0].f_10 = unk_0x73F91AA610E60211(iVar6, iVar0);
		}
		else if (unk_0x3E932F23D327A136(iVar6, iVar0) == 2)
		{
			Global_4456448.f_233113[iVar0].f_10 = to_float(unk_0xE082EE0DCA9466C4(iVar6, iVar0));
		}
		else
		{
			Global_4456448.f_233113[iVar0].f_10 = 0f;
		}
		if (iVar7 != 0 && unk_0x3E932F23D327A136(iVar7, iVar0) == 2)
		{
			Global_4456448.f_233113[iVar0].f_9 = unk_0xE082EE0DCA9466C4(iVar7, iVar0);
		}
		else
		{
			Global_4456448.f_233113[iVar0].f_9 = 0;
		}
		iVar0++;
	}
}

void func_251(int iParam0)
{
	if (unk_0x6D954AF55D3925DB(iParam0, "dhprop") == 0)
	{
		return;
	}
	iVar1 = unk_0x6D954AF55D3925DB(iParam0, "dhprop");
	Global_4456448.f_227321 = unk_0x8A83B52A17A321DB(iVar1, "no");
	iVar2 = unk_0x7619952D26DF7783(iVar1, "pos");
	iVar3 = unk_0x7619952D26DF7783(iVar1, "mn");
	iVar4 = unk_0x7619952D26DF7783(iVar1, "bits");
	if (Global_4456448.f_227321 > 40)
	{
		Global_4456448.f_227321 = 40;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_227321 - 1))
	{
		if (iVar2 != 0 && unk_0x3E932F23D327A136(iVar2, iVar0) == 5)
		{
			Global_4456448.f_227120[iVar0] = { unk_0x6403E33233A20F75(iVar2, iVar0) };
			Global_4456448.f_227120[iVar0].f_3 = unk_0xE082EE0DCA9466C4(iVar3, iVar0);
		}
		if (iVar4 != 0 && unk_0x3E932F23D327A136(iVar4, iVar0) == 2)
		{
			Global_4456448.f_227120[iVar0].f_4 = unk_0xE082EE0DCA9466C4(iVar4, iVar0);
		}
		else
		{
			Global_4456448.f_227120[iVar0].f_4 = 0;
			unk_0x5D96D8530B3D0904(&(Global_4456448.f_227120[iVar0].f_4), 0);
		}
		iVar0++;
	}
}

void func_252(int iParam0)
{
	if (unk_0x6D954AF55D3925DB(iParam0, "ddblip") == 0)
	{
		return;
	}
	iVar4 = unk_0x6D954AF55D3925DB(iParam0, "ddblip");
	Global_4456448.f_227119 = unk_0x8A83B52A17A321DB(iVar4, "no");
	iVar5 = unk_0x7619952D26DF7783(iVar4, "pos");
	iVar6 = unk_0x7619952D26DF7783(iVar4, "rule");
	iVar7 = unk_0x7619952D26DF7783(iVar4, "team");
	iVar8 = unk_0x7619952D26DF7783(iVar4, "type");
	iVar9 = unk_0x7619952D26DF7783(iVar4, "size");
	iVar10 = unk_0x7619952D26DF7783(iVar4, "veh");
	iVar11 = unk_0x7619952D26DF7783(iVar4, "clr");
	iVar12 = unk_0x7619952D26DF7783(iVar4, "spri");
	iVar13 = unk_0x7619952D26DF7783(iVar4, "bits");
	iVar14 = unk_0x7619952D26DF7783(iVar4, "entt");
	iVar15 = unk_0x7619952D26DF7783(iVar4, "enti");
	iVar16 = unk_0x7619952D26DF7783(iVar4, "dbnm");
	iVar17 = unk_0x7619952D26DF7783(iVar4, "sbr");
	iVar18 = unk_0x7619952D26DF7783(iVar4, "sbhr");
	iVar19 = unk_0x7619952D26DF7783(iVar4, "hbr");
	iVar20 = unk_0x7619952D26DF7783(iVar4, "frul");
	iVar21 = unk_0x7619952D26DF7783(iVar4, "trul");
	iVar22 = unk_0x7619952D26DF7783(iVar4, "dumsg");
	iVar23 = unk_0x7619952D26DF7783(iVar4, "dumssg");
	uVar45 = 1;
	Var47.f_10 = 4;
	Var47.f_15 = 4;
	Var47.f_20 = 4;
	if (Global_4456448.f_227119 > 10)
	{
		Global_4456448.f_227119 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_227119 - 1))
	{
		if (iVar5 != 0 && unk_0x3E932F23D327A136(iVar5, iVar0) == 5)
		{
			Global_4456448.f_226428[iVar0] = { unk_0x6403E33233A20F75(iVar5, iVar0) };
			func_195(&Var47, &iVar4, &(Global_4456448.f_226428[iVar0].f_44), iVar0, 8);
			Global_4456448.f_226428[iVar0].f_44.f_2 = unk_0xE082EE0DCA9466C4(iVar11, iVar0);
			Global_4456448.f_226428[iVar0].f_44.f_5 = unk_0xE082EE0DCA9466C4(iVar12, iVar0);
			Global_4456448.f_226428[iVar0].f_44.f_6 = unk_0x73F91AA610E60211(iVar17, iVar0);
			Global_4456448.f_226428[iVar0].f_44.f_7 = unk_0x73F91AA610E60211(iVar18, iVar0);
			Global_4456448.f_226428[iVar0].f_8 = unk_0xE082EE0DCA9466C4(iVar13, iVar0);
			Global_4456448.f_226428[iVar0].f_10 = unk_0xE082EE0DCA9466C4(iVar15, iVar0);
			Global_4456448.f_226428[iVar0].f_11 = unk_0x73F91AA610E60211(iVar19, iVar0);
		}
		if (iVar8 != 0 && unk_0x3E932F23D327A136(iVar8, iVar0) == 2)
		{
			Global_4456448.f_226428[iVar0].f_6 = unk_0xE082EE0DCA9466C4(iVar8, iVar0);
		}
		else
		{
			Global_4456448.f_226428[iVar0].f_6 = 0;
		}
		if (iVar9 != 0 && unk_0x3E932F23D327A136(iVar9, iVar0) == 2)
		{
			Global_4456448.f_226428[iVar0].f_5 = unk_0xE082EE0DCA9466C4(iVar9, iVar0);
		}
		else
		{
			Global_4456448.f_226428[iVar0].f_5 = 4;
		}
		if (iVar10 != 0 && unk_0x3E932F23D327A136(iVar10, iVar0) == 2)
		{
			Global_4456448.f_226428[iVar0].f_7 = unk_0xE082EE0DCA9466C4(iVar10, iVar0);
		}
		else
		{
			Global_4456448.f_226428[iVar0].f_7 = -1;
		}
		if (iVar16 != 0 && unk_0x3E932F23D327A136(iVar16, iVar0) == 4)
		{
			StringCopy(&(Global_4456448.f_226428[iVar0].f_35), unk_0x3E4982E6ACD879AE(iVar16, iVar0), 24);
		}
		else
		{
			StringCopy(&(Global_4456448.f_226428[iVar0].f_35), "", 24);
		}
		if (iVar6 != 0 && unk_0x3E932F23D327A136(iVar6, iVar0) == 2)
		{
			Global_4456448.f_226428[iVar0].f_3 = unk_0xE082EE0DCA9466C4(iVar6, iVar0);
		}
		else
		{
			Global_4456448.f_226428[iVar0].f_3 = -1;
		}
		if (iVar7 != 0 && unk_0x3E932F23D327A136(iVar7, iVar0) == 2)
		{
			Global_4456448.f_226428[iVar0].f_4 = unk_0xE082EE0DCA9466C4(iVar7, iVar0);
		}
		else
		{
			Global_4456448.f_226428[iVar0].f_4 = -1;
		}
		if (iVar14 != 0 && unk_0x3E932F23D327A136(iVar14, iVar0) == 2)
		{
			Global_4456448.f_226428[iVar0].f_9 = unk_0xE082EE0DCA9466C4(iVar14, iVar0);
		}
		else
		{
			Global_4456448.f_226428[iVar0].f_9 = -1;
		}
		if (iVar20 != 0 && unk_0x3E932F23D327A136(iVar20, iVar0) == 2)
		{
			Global_4456448.f_226428[iVar0].f_44.f_10[0].f_1 = unk_0xE082EE0DCA9466C4(iVar20, iVar0);
		}
		else if (func_273())
		{
			Global_4456448.f_226428[iVar0].f_44.f_10[0].f_1 = -1;
		}
		if (iVar21 != 0 && unk_0x3E932F23D327A136(iVar21, iVar0) == 2)
		{
			Global_4456448.f_226428[iVar0].f_44.f_10[0].f_2 = unk_0xE082EE0DCA9466C4(iVar21, iVar0);
		}
		else if (func_273())
		{
			Global_4456448.f_226428[iVar0].f_44.f_10[0].f_2 = -1;
		}
		if (iVar22 != 0 && unk_0x3E932F23D327A136(iVar22, iVar0) == 2)
		{
			Global_4456448.f_226428[iVar0].f_12 = unk_0xE082EE0DCA9466C4(iVar22, iVar0);
			if (Global_4456448.f_226428[iVar0].f_12 == -1)
			{
				Global_4456448.f_226428[iVar0].f_12 = 0;
			}
		}
		else
		{
			Global_4456448.f_226428[iVar0].f_12 = 0;
		}
		if (iVar23 != 0 && unk_0x3E932F23D327A136(iVar23, iVar0) == 2)
		{
			Global_4456448.f_226428[iVar0].f_13 = unk_0xE082EE0DCA9466C4(iVar23, iVar0);
			if (Global_4456448.f_226428[iVar0].f_13 == -1)
			{
				Global_4456448.f_226428[iVar0].f_13 = 0;
			}
		}
		else
		{
			Global_4456448.f_226428[iVar0].f_13 = 0;
		}
		iVar1 = 0;
		while (iVar1 <= 19)
		{
			StringCopy(&sVar2, "1dwb", 8);
			StringIntConCat(&sVar2, iVar1, 8);
			func_199(&sVar2, &(Global_4456448.f_226428[iVar0].f_14[iVar1]), &iVar4, &(uVar24[iVar1]), iVar0, 0, 0);
			iVar1++;
		}
		func_191("alvdum", &(Global_4456448.f_226428[iVar0].f_67), 1, &iVar4, &uVar45, iVar0, 0, -2340845);
		iVar0++;
	}
}

void func_253(int iParam0)
{
	if (unk_0x6D954AF55D3925DB(iParam0, "mocap") == 0)
	{
		return;
	}
	iVar5 = unk_0x6D954AF55D3925DB(iParam0, "mocap");
	iVar8 = unk_0x7619952D26DF7783(iVar5, "name");
	iVar9 = unk_0x7619952D26DF7783(iVar5, "bits");
	iVar10 = unk_0x7619952D26DF7783(iVar5, "bits2");
	iVar11 = unk_0x7619952D26DF7783(iVar5, "bits3");
	iVar12 = unk_0x7619952D26DF7783(iVar5, "timer");
	iVar13 = unk_0x7619952D26DF7783(iVar5, "rng");
	iVar14 = unk_0x7619952D26DF7783(iVar5, "ccp");
	iVar15 = unk_0x7619952D26DF7783(iVar5, "ccr");
	iVar16 = unk_0x7619952D26DF7783(iVar5, "ccs");
	iVar17 = unk_0x7619952D26DF7783(iVar5, "vhspz");
	iVar18 = unk_0x7619952D26DF7783(iVar5, "vrbsm");
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (iVar8 != 0 && unk_0x3E932F23D327A136(iVar8, iVar0) == 4)
		{
			StringCopy(&(Global_4456448.f_223128[iVar0]), unk_0x3E4982E6ACD879AE(iVar8, iVar0), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_223128[iVar0]), "", 64);
		}
		func_237("mocapPs", &(Global_4456448.f_223128[iVar0].f_19), &iVar5, &uVar6, iVar0, 0f, 0f, 0f, 0f, 0f, 0f);
		func_237("mocapRt", &(Global_4456448.f_223128[iVar0].f_22), &iVar5, &iVar7, iVar0, 0f, 0f, 0f, 0f, 0f, 0f);
		if (iVar7 != 0 && unk_0x3E932F23D327A136(iVar7, iVar0) == 5)
		{
			Global_4456448.f_223128[iVar0].f_22 = { unk_0x6403E33233A20F75(iVar7, iVar0) };
		}
		else
		{
			Global_4456448.f_223128[iVar0].f_22 = { 0f, 0f, 0f };
		}
		if (iVar9 != 0 && unk_0x3E932F23D327A136(iVar9, iVar0) == 2)
		{
			Global_4456448.f_223128[iVar0].f_16 = unk_0xE082EE0DCA9466C4(iVar9, iVar0);
		}
		else
		{
			Global_4456448.f_223128[iVar0].f_16 = 0;
		}
		if (iVar10 != 0 && unk_0x3E932F23D327A136(iVar10, iVar0) == 2)
		{
			Global_4456448.f_223128[iVar0].f_17 = unk_0xE082EE0DCA9466C4(iVar10, iVar0);
		}
		else
		{
			Global_4456448.f_223128[iVar0].f_17 = 0;
		}
		if (iVar11 != 0 && unk_0x3E932F23D327A136(iVar11, iVar0) == 2)
		{
			Global_4456448.f_223128[iVar0].f_18 = unk_0xE082EE0DCA9466C4(iVar11, iVar0);
		}
		else
		{
			Global_4456448.f_223128[iVar0].f_18 = 0;
		}
		if (iVar12 != 0 && unk_0x3E932F23D327A136(iVar12, iVar0) == 2)
		{
			Global_4456448.f_223128[iVar0].f_68 = unk_0xE082EE0DCA9466C4(iVar12, iVar0);
		}
		else
		{
			Global_4456448.f_223128[iVar0].f_68 = 0;
		}
		if (iVar13 != 0 && unk_0x3E932F23D327A136(iVar13, iVar0) == 2)
		{
			Global_4456448.f_223128[iVar0].f_69 = unk_0xE082EE0DCA9466C4(iVar13, iVar0);
		}
		else
		{
			Global_4456448.f_223128[iVar0].f_69 = 0;
		}
		if (iVar14 != 0 && unk_0x3E932F23D327A136(iVar14, iVar0) == 5)
		{
			Global_4456448.f_223128[iVar0].f_61 = { unk_0x6403E33233A20F75(iVar14, iVar0) };
		}
		else
		{
			Global_4456448.f_223128[iVar0].f_61 = { 0f, 0f, 0f };
		}
		if (iVar15 != 0 && unk_0x3E932F23D327A136(iVar15, iVar0) == 3)
		{
			Global_4456448.f_223128[iVar0].f_67 = unk_0x73F91AA610E60211(iVar15, iVar0);
		}
		else
		{
			Global_4456448.f_223128[iVar0].f_67 = 0f;
		}
		if (iVar16 != 0 && unk_0x3E932F23D327A136(iVar16, iVar0) == 5)
		{
			Global_4456448.f_223128[iVar0].f_64 = { unk_0x6403E33233A20F75(iVar16, iVar0) };
		}
		else
		{
			Global_4456448.f_223128[iVar0].f_64 = { 0f, 0f, 0f };
		}
		if (iVar17 != 0 && unk_0x3E932F23D327A136(iVar17, iVar0) == 3)
		{
			Global_4456448.f_223128[iVar0].f_70 = unk_0x73F91AA610E60211(iVar17, iVar0);
		}
		else
		{
			Global_4456448.f_223128[iVar0].f_70 = 6f;
		}
		if (iVar18 != 0 && unk_0x3E932F23D327A136(iVar18, iVar0) == 2)
		{
			Global_4456448.f_223128[iVar0].f_71 = unk_0xE082EE0DCA9466C4(iVar18, iVar0);
		}
		else
		{
			Global_4456448.f_223128[iVar0].f_71 = 0;
		}
		StringCopy(&cVar3, "pstr", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		iVar19[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "pend", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		iVar25[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "strh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		iVar31[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "endh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		iVar37[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "mcei", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar43[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "mcet", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar49[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "mceh", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar55[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "plrEW", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar61[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "pedEW", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar67[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		if (iVar61[iVar0] != 0 || iVar67[iVar0] != 0)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				func_258(&(Global_4456448.f_223128[iVar0].f_456[iVar2]), &(iVar61[iVar0]), iVar2);
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 <= 0)
			{
				func_256(&(Global_4456448.f_223128[iVar0].f_473[iVar2]), &(iVar67[iVar0]), iVar2);
				iVar2++;
			}
		}
		else
		{
			func_255(&(Global_4456448.f_223128[iVar0]), &iVar5, iVar0);
		}
		StringCopy(&cVar3, "plrInf", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar73[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			iVar79 = unk_0xAC7E36D102B92704(iVar73[iVar0], iVar2);
			func_254(iVar79, &(Global_4456448.f_223128[iVar0].f_72[iVar2]));
			iVar2++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (iVar19[iVar0] != 0 && unk_0x3E932F23D327A136(iVar19[iVar0], iVar1) == 5)
			{
				Global_4456448.f_223128[iVar0].f_25[iVar1] = { unk_0x6403E33233A20F75(iVar19[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_223128[iVar0].f_25[iVar1] = { 0f, 0f, 0f };
			}
			if (iVar25[iVar0] != 0 && unk_0x3E932F23D327A136(iVar25[iVar0], iVar1) == 5)
			{
				Global_4456448.f_223128[iVar0].f_38[iVar1] = { unk_0x6403E33233A20F75(iVar25[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_223128[iVar0].f_38[iVar1] = { 0f, 0f, 0f };
			}
			if (iVar31[iVar0] != 0 && unk_0x3E932F23D327A136(iVar31[iVar0], iVar1) == 3)
			{
				Global_4456448.f_223128[iVar0].f_51[iVar1] = unk_0x73F91AA610E60211(iVar31[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_223128[iVar0].f_51[iVar1] = 0f;
			}
			if (iVar37[iVar0] != 0 && unk_0x3E932F23D327A136(iVar37[iVar0], iVar1) == 3)
			{
				Global_4456448.f_223128[iVar0].f_56[iVar1] = unk_0x73F91AA610E60211(iVar37[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_223128[iVar0].f_56[iVar1] = 0f;
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (iVar43[iVar0] != 0 && unk_0x3E932F23D327A136(iVar43[iVar0], iVar1) == 2)
			{
				Global_4456448.f_223128[iVar0].f_125[iVar1].f_1 = unk_0xE082EE0DCA9466C4(iVar43[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_223128[iVar0].f_125[iVar1].f_1 = -1;
			}
			if (iVar49[iVar0] != 0 && unk_0x3E932F23D327A136(iVar49[iVar0], iVar1) == 2)
			{
				Global_4456448.f_223128[iVar0].f_125[iVar1] = unk_0xE082EE0DCA9466C4(iVar49[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_223128[iVar0].f_125[iVar1] = -1;
			}
			if (iVar55[iVar0] != 0 && unk_0x3E932F23D327A136(iVar55[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_4456448.f_223128[iVar0].f_125[iVar1].f_3), unk_0x3E4982E6ACD879AE(iVar55[iVar0], iVar1), 32);
			}
			else
			{
				StringCopy(&(Global_4456448.f_223128[iVar0].f_125[iVar1].f_3), "", 32);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_254(int iParam0, var uParam1)
{
	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = "plrPH";
	if (unk_0xAE496C664AE89A9C(iParam0, sVar0) == 7)
	{
		iVar1 = unk_0x7619952D26DF7783(iParam0, sVar0);
	}
	iVar2 = 0;
	while (iVar2 <= 1)
	{
		if (iVar1 != 0 && unk_0x3E932F23D327A136(iVar1, iVar2) == 4)
		{
			StringCopy(uParam1[iVar2], unk_0x3E4982E6ACD879AE(iVar1, iVar2), 24);
		}
		else
		{
			StringCopy(uParam1[iVar2], "", 24);
		}
		iVar2++;
	}
}

void func_255(var uParam0, int iParam1, int iParam2)
{
	iVar0 = -1;
	iVar1 = unk_0x7619952D26DF7783(*iParam1, "pcvid");
	if (iVar1 != 0 && unk_0x3E932F23D327A136(iVar1, iParam2) == 2)
	{
		iVar0 = unk_0xE082EE0DCA9466C4(iVar1, iParam2);
	}
	StringCopy(&cVar2, "pvpls", 8);
	if (iParam2 > 0)
	{
		StringIntConCat(&cVar2, iParam2, 8);
	}
	iVar4 = unk_0x7619952D26DF7783(*iParam1, &cVar2);
	iVar5 = 0;
	while (iVar5 <= 3)
	{
		uParam0->f_456[iVar5] = iVar0;
		if (iVar4 != 0 && unk_0x3E932F23D327A136(iVar4, iVar5) == 2)
		{
			uParam0->f_456[iVar5].f_2 = unk_0xE082EE0DCA9466C4(iVar4, iVar5);
		}
		else
		{
			uParam0->f_456[iVar5].f_2 = 0;
		}
		iVar5++;
	}
	StringCopy(&cVar2, "pvpds", 8);
	if (iParam2 > 0)
	{
		StringIntConCat(&cVar2, iParam2, 8);
	}
	iVar6 = unk_0x7619952D26DF7783(*iParam1, &cVar2);
	StringCopy(&cVar2, "pvpdi", 8);
	if (iParam2 > 0)
	{
		StringIntConCat(&cVar2, iParam2, 8);
	}
	iVar7 = unk_0x7619952D26DF7783(*iParam1, &cVar2);
	iVar5 = 0;
	while (iVar5 <= 0)
	{
		if (iVar7 != 0 && unk_0x3E932F23D327A136(iVar7, iVar5) == 2)
		{
			uParam0->f_473[iVar5] = unk_0xE082EE0DCA9466C4(iVar7, iVar5);
		}
		else
		{
			uParam0->f_473[iVar5] = 0;
		}
		uParam0->f_473[iVar5].f_1 = iVar0;
		if (iVar6 != 0 && unk_0x3E932F23D327A136(iVar6, iVar5) == 2)
		{
			uParam0->f_473[iVar5].f_1.f_2 = unk_0xE082EE0DCA9466C4(iVar6, iVar5);
		}
		else
		{
			uParam0->f_473[iVar5].f_1.f_2 = 0;
		}
		iVar5++;
	}
}

void func_256(var uParam0, var uParam1, int iParam2)
{
	if (unk_0x3E932F23D327A136(*uParam1, iParam2) != 6)
	{
		return;
	}
	iVar0 = unk_0xAC7E36D102B92704(*uParam1, iParam2);
	if (iVar0 == 0)
	{
	}
	StringCopy(&cVar1, "pedID", 8);
	if (unk_0xAE496C664AE89A9C(iVar0, &cVar1) == 2)
	{
		*uParam0 = unk_0x8A83B52A17A321DB(iVar0, &cVar1);
	}
	else
	{
		*uParam0 = -1;
	}
	func_257(&(uParam0->f_1), &iVar0);
}

void func_257(var uParam0, int iParam1)
{
	StringCopy(&cVar0, "vehId", 8);
	if (unk_0xAE496C664AE89A9C(*iParam1, &cVar0) == 2)
	{
		*uParam0 = unk_0x8A83B52A17A321DB(*iParam1, &cVar0);
	}
	else
	{
		*uParam0 = -1;
	}
	StringCopy(&cVar0, "vehIdS", 8);
	if (unk_0xAE496C664AE89A9C(*iParam1, &cVar0) == 2)
	{
		uParam0->f_1 = unk_0x8A83B52A17A321DB(*iParam1, &cVar0);
	}
	else
	{
		uParam0->f_1 = -1;
	}
	StringCopy(&cVar0, "vehSeat", 8);
	if (unk_0xAE496C664AE89A9C(*iParam1, &cVar0) == 2)
	{
		uParam0->f_2 = unk_0x8A83B52A17A321DB(*iParam1, &cVar0);
	}
	else
	{
		uParam0->f_2 = 0;
	}
	StringCopy(&cVar0, "bit1", 8);
	if (unk_0xAE496C664AE89A9C(*iParam1, &cVar0) == 2)
	{
		uParam0->f_3 = unk_0x8A83B52A17A321DB(*iParam1, &cVar0);
	}
	else
	{
		uParam0->f_3 = 0;
	}
}

void func_258(var uParam0, var uParam1, int iParam2)
{
	if (unk_0x3E932F23D327A136(*uParam1, iParam2) != 6)
	{
		return;
	}
	iVar0 = unk_0xAC7E36D102B92704(*uParam1, iParam2);
	if (iVar0 == 0)
	{
	}
	func_257(uParam0, &iVar0);
}

void func_259(int iParam0)
{
	if (unk_0x6D954AF55D3925DB(iParam0, "cuts") == 0)
	{
		return;
	}
	iVar5 = unk_0x6D954AF55D3925DB(iParam0, "cuts");
	iVar6 = unk_0x7619952D26DF7783(iVar5, "name");
	iVar7 = unk_0x7619952D26DF7783(iVar5, "bits");
	iVar8 = unk_0x7619952D26DF7783(iVar5, "bits2");
	iVar9 = unk_0x7619952D26DF7783(iVar5, "bits3");
	iVar10 = unk_0x7619952D26DF7783(iVar5, "shot");
	iVar11 = unk_0x7619952D26DF7783(iVar5, "anim");
	iVar12 = unk_0x7619952D26DF7783(iVar5, "midp");
	iVar13 = unk_0x7619952D26DF7783(iVar5, "rng");
	iVar366 = unk_0x7619952D26DF7783(iVar5, "train");
	iVar367 = unk_0x7619952D26DF7783(iVar5, "trahl");
	iVar368 = unk_0x7619952D26DF7783(iVar5, "traou");
	iVar369 = unk_0x7619952D26DF7783(iVar5, "trapo");
	iVar370 = unk_0x7619952D26DF7783(iVar5, "ccp");
	iVar371 = unk_0x7619952D26DF7783(iVar5, "ccr");
	iVar372 = unk_0x7619952D26DF7783(iVar5, "ccs");
	iVar373 = unk_0x7619952D26DF7783(iVar5, "clms");
	iVar374 = unk_0x7619952D26DF7783(iVar5, "clsp");
	iVar375 = unk_0x7619952D26DF7783(iVar5, "clzs");
	iVar376 = unk_0x7619952D26DF7783(iVar5, "clze");
	iVar377 = unk_0x7619952D26DF7783(iVar5, "cfbe");
	iVar378 = unk_0x7619952D26DF7783(iVar5, "vhspd");
	iVar401 = unk_0x7619952D26DF7783(iVar5, "sset");
	iVar402 = unk_0x7619952D26DF7783(iVar5, "ssvc");
	iVar403 = unk_0x7619952D26DF7783(iVar5, "ssfh");
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iVar6 != 0 && unk_0x3E932F23D327A136(iVar6, iVar0) == 4)
		{
			StringCopy(&(Global_4456448.f_208177[iVar0]), unk_0x3E4982E6ACD879AE(iVar6, iVar0), 16);
		}
		else
		{
			StringCopy(&(Global_4456448.f_208177[iVar0]), "", 16);
		}
		if (iVar7 != 0 && unk_0x3E932F23D327A136(iVar7, iVar0) == 2)
		{
			Global_4456448.f_208177[iVar0].f_4 = unk_0xE082EE0DCA9466C4(iVar7, iVar0);
		}
		else
		{
			Global_4456448.f_208177[iVar0].f_4 = 0;
		}
		if (iVar8 != 0 && unk_0x3E932F23D327A136(iVar8, iVar0) == 2)
		{
			Global_4456448.f_208177[iVar0].f_5 = unk_0xE082EE0DCA9466C4(iVar8, iVar0);
		}
		else
		{
			Global_4456448.f_208177[iVar0].f_5 = 0;
		}
		if (iVar9 != 0 && unk_0x3E932F23D327A136(iVar9, iVar0) == 2)
		{
			Global_4456448.f_208177[iVar0].f_6 = unk_0xE082EE0DCA9466C4(iVar9, iVar0);
		}
		else
		{
			Global_4456448.f_208177[iVar0].f_6 = 0;
		}
		if (Global_4456448.f_208177[iVar0].f_5 == Global_4456448.f_208177[iVar0].f_4)
		{
			iVar426 = unk_0x6D954AF55D3925DB(iParam0, "gen");
			if (unk_0xAE496C664AE89A9C(iVar426, "menubs19") == 0)
			{
				iVar427 = 0;
				iVar427 = 9;
				while (iVar427 <= 31)
				{
					unk_0x0674E58A79778E99(&(Global_4456448.f_208177[iVar0].f_5), iVar427);
					iVar427++;
				}
			}
		}
		if (iVar10 != 0 && unk_0x3E932F23D327A136(iVar10, iVar0) == 2)
		{
			Global_4456448.f_208177[iVar0].f_91 = unk_0xE082EE0DCA9466C4(iVar10, iVar0);
		}
		else
		{
			Global_4456448.f_208177[iVar0].f_91 = 0;
		}
		if (iVar11 != 0 && unk_0x3E932F23D327A136(iVar11, iVar0) == 2)
		{
			Global_4456448.f_208177[iVar0].f_90 = unk_0xE082EE0DCA9466C4(iVar11, iVar0);
			if (Global_4456448.f_208177[iVar0].f_90 >= 3)
			{
				Global_4456448.f_208177[iVar0].f_90 = 0;
			}
		}
		else
		{
			Global_4456448.f_208177[iVar0].f_90 = 0;
		}
		if (iVar12 != 0 && unk_0x3E932F23D327A136(iVar12, iVar0) == 2)
		{
			Global_4456448.f_208177[iVar0].f_92 = unk_0xE082EE0DCA9466C4(iVar12, iVar0);
		}
		else
		{
			Global_4456448.f_208177[iVar0].f_92 = 0;
		}
		if (iVar13 != 0 && unk_0x3E932F23D327A136(iVar13, iVar0) == 2)
		{
			Global_4456448.f_208177[iVar0].f_783 = unk_0xE082EE0DCA9466C4(iVar13, iVar0);
		}
		else
		{
			Global_4456448.f_208177[iVar0].f_783 = 0;
		}
		if (iVar370 != 0 && unk_0x3E932F23D327A136(iVar370, iVar0) == 5)
		{
			Global_4456448.f_208177[iVar0].f_776 = { unk_0x6403E33233A20F75(iVar370, iVar0) };
		}
		else
		{
			Global_4456448.f_208177[iVar0].f_776 = { 0f, 0f, 0f };
		}
		if (iVar371 != 0 && unk_0x3E932F23D327A136(iVar371, iVar0) == 3)
		{
			Global_4456448.f_208177[iVar0].f_779 = unk_0x73F91AA610E60211(iVar371, iVar0);
		}
		else
		{
			Global_4456448.f_208177[iVar0].f_779 = 0f;
		}
		if (iVar372 != 0 && unk_0x3E932F23D327A136(iVar372, iVar0) == 5)
		{
			Global_4456448.f_208177[iVar0].f_780 = { unk_0x6403E33233A20F75(iVar372, iVar0) };
		}
		else
		{
			Global_4456448.f_208177[iVar0].f_780 = { 0f, 0f, 0f };
		}
		if (iVar401 != 0 && unk_0x3E932F23D327A136(iVar401, iVar0) == 2)
		{
			Global_4456448.f_208177[iVar0].f_1489 = unk_0xE082EE0DCA9466C4(iVar401, iVar0);
		}
		else
		{
			Global_4456448.f_208177[iVar0].f_1489 = 0;
		}
		if (iVar402 != 0 && unk_0x3E932F23D327A136(iVar402, iVar0) == 5)
		{
			Global_4456448.f_208177[iVar0].f_1489.f_1 = { unk_0x6403E33233A20F75(iVar402, iVar0) };
		}
		else
		{
			Global_4456448.f_208177[iVar0].f_1489.f_1 = { 0f, 0f, 0f };
		}
		if (iVar403 != 0 && unk_0x3E932F23D327A136(iVar403, iVar0) == 3)
		{
			Global_4456448.f_208177[iVar0].f_1489.f_4 = unk_0x73F91AA610E60211(iVar403, iVar0);
		}
		else
		{
			Global_4456448.f_208177[iVar0].f_1489.f_4 = 0f;
		}
		if (iVar366 != 0 && unk_0x3E932F23D327A136(iVar366, iVar0) == 2)
		{
			Global_4456448.f_208177[iVar0].f_484 = unk_0xE082EE0DCA9466C4(iVar366, iVar0);
		}
		else
		{
			Global_4456448.f_208177[iVar0].f_484 = 0;
		}
		if (iVar367 != 0 && unk_0x3E932F23D327A136(iVar367, iVar0) == 2)
		{
			Global_4456448.f_208177[iVar0].f_486 = unk_0xE082EE0DCA9466C4(iVar367, iVar0);
		}
		else
		{
			Global_4456448.f_208177[iVar0].f_486 = 0;
		}
		if (iVar368 != 0 && unk_0x3E932F23D327A136(iVar368, iVar0) == 2)
		{
			Global_4456448.f_208177[iVar0].f_485 = unk_0xE082EE0DCA9466C4(iVar368, iVar0);
		}
		else
		{
			Global_4456448.f_208177[iVar0].f_485 = 0;
		}
		if (iVar369 != 0 && unk_0x3E932F23D327A136(iVar369, iVar0) == 5)
		{
			Global_4456448.f_208177[iVar0].f_487 = { unk_0x6403E33233A20F75(iVar369, iVar0) };
		}
		else
		{
			Global_4456448.f_208177[iVar0].f_487 = { 0f, 0f, 0f };
		}
		if (iVar373 != 0 && unk_0x3E932F23D327A136(iVar373, iVar0) == 2)
		{
			Global_4456448.f_208177[iVar0].f_1476 = unk_0xE082EE0DCA9466C4(iVar373, iVar0);
		}
		else
		{
			Global_4456448.f_208177[iVar0].f_1476 = -1;
		}
		if (iVar377 != 0 && unk_0x3E932F23D327A136(iVar377, iVar0) == 2)
		{
			Global_4456448.f_208177[iVar0].f_1494 = unk_0xE082EE0DCA9466C4(iVar377, iVar0);
		}
		else
		{
			Global_4456448.f_208177[iVar0].f_1494 = 0;
		}
		if (iVar374 != 0 && unk_0x3E932F23D327A136(iVar374, iVar0) == 3)
		{
			Global_4456448.f_208177[iVar0].f_1477 = unk_0x73F91AA610E60211(iVar374, iVar0);
		}
		else
		{
			Global_4456448.f_208177[iVar0].f_1477 = 1f;
		}
		if (iVar375 != 0 && unk_0x3E932F23D327A136(iVar375, iVar0) == 3)
		{
			Global_4456448.f_208177[iVar0].f_1478 = unk_0x73F91AA610E60211(iVar375, iVar0);
		}
		else
		{
			Global_4456448.f_208177[iVar0].f_1478 = 0f;
		}
		if (iVar376 != 0 && unk_0x3E932F23D327A136(iVar376, iVar0) == 3)
		{
			Global_4456448.f_208177[iVar0].f_1479 = unk_0x73F91AA610E60211(iVar376, iVar0);
		}
		else
		{
			Global_4456448.f_208177[iVar0].f_1479 = 0f;
		}
		if (iVar378 != 0 && unk_0x3E932F23D327A136(iVar378, iVar0) == 3)
		{
			Global_4456448.f_208177[iVar0].f_784 = unk_0x73F91AA610E60211(iVar378, iVar0);
		}
		else
		{
			Global_4456448.f_208177[iVar0].f_784 = 6f;
		}
		StringCopy(&cVar3, "int", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar14[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "rmin", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar25[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "rmax", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar36[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "ctp", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar47[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "sps", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar58[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "eps", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar69[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "srt", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar80[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "ert", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar91[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "sfv", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar102[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "efv", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar113[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "ati", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar234[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "ato", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar245[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "atr", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar256[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "ala", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar267[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "csp", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar278[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "csr", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar289[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "cwtp", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar322[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "ctpr", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar333[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "cdtp", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar344[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "cdsp", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar355[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "cssbs", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar146[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "skt", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar157[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "skm", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar168[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "eind", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar124[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "etyp", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar135[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "pstr", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		iVar190[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "pend", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		iVar201[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "strh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		iVar179[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "endh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		iVar212[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "svwi", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar223[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "camnm", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar300[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "locnm", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar311[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "plrSW", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar404[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "plrEW", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar415[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "spcm", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar379[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		StringCopy(&cVar3, "paos", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		iVar390[iVar0] = unk_0x7619952D26DF7783(iVar5, &cVar3);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (iVar190[iVar0] != 0 && unk_0x3E932F23D327A136(iVar190[iVar0], iVar1) == 5)
			{
				Global_4456448.f_208177[iVar0].f_7[iVar1] = { unk_0x6403E33233A20F75(iVar190[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_7[iVar1] = { 0f, 0f, 0f };
			}
			if (iVar201[iVar0] != 0 && unk_0x3E932F23D327A136(iVar201[iVar0], iVar1) == 5)
			{
				Global_4456448.f_208177[iVar0].f_20[iVar1] = { unk_0x6403E33233A20F75(iVar201[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_20[iVar1] = { 0f, 0f, 0f };
			}
			if (iVar179[iVar0] != 0 && unk_0x3E932F23D327A136(iVar179[iVar0], iVar1) == 3)
			{
				Global_4456448.f_208177[iVar0].f_33[iVar1] = unk_0x73F91AA610E60211(iVar179[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_33[iVar1] = 0f;
			}
			if (iVar212[iVar0] != 0 && unk_0x3E932F23D327A136(iVar212[iVar0], iVar1) == 3)
			{
				Global_4456448.f_208177[iVar0].f_38[iVar1] = unk_0x73F91AA610E60211(iVar212[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_38[iVar1] = 0f;
			}
			if (iVar223[iVar0] != 0 && unk_0x3E932F23D327A136(iVar223[iVar0], iVar1) == 2)
			{
				Global_4456448.f_208177[iVar0].f_43[iVar1] = unk_0xE082EE0DCA9466C4(iVar223[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_43[iVar1] = -1;
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 19)
		{
			if (iVar14[iVar0] != 0 && unk_0x3E932F23D327A136(iVar14[iVar0], iVar1) == 2)
			{
				Global_4456448.f_208177[iVar0].f_93[iVar1] = unk_0xE082EE0DCA9466C4(iVar14[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_93[iVar1] = 0;
			}
			if (iVar25[iVar0] != 0 && unk_0x3E932F23D327A136(iVar25[iVar0], iVar1) == 3)
			{
				Global_4456448.f_208177[iVar0].f_48[iVar1] = unk_0x73F91AA610E60211(iVar25[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_48[iVar1] = 0f;
			}
			if (iVar36[iVar0] != 0 && unk_0x3E932F23D327A136(iVar36[iVar0], iVar1) == 3)
			{
				Global_4456448.f_208177[iVar0].f_69[iVar1] = unk_0x73F91AA610E60211(iVar36[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_69[iVar1] = 0f;
			}
			if (iVar47[iVar0] != 0 && unk_0x3E932F23D327A136(iVar47[iVar0], iVar1) == 2)
			{
				Global_4456448.f_208177[iVar0].f_114[iVar1] = unk_0xE082EE0DCA9466C4(iVar47[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_114[iVar1] = 0;
			}
			if (iVar58[iVar0] != 0 && unk_0x3E932F23D327A136(iVar58[iVar0], iVar1) == 5)
			{
				Global_4456448.f_208177[iVar0].f_135[iVar1] = { unk_0x6403E33233A20F75(iVar58[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_135[iVar1] = { 0f, 0f, 0f };
			}
			if (iVar69[iVar0] != 0 && unk_0x3E932F23D327A136(iVar69[iVar0], iVar1) == 5)
			{
				Global_4456448.f_208177[iVar0].f_196[iVar1] = { unk_0x6403E33233A20F75(iVar69[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_196[iVar1] = { 0f, 0f, 0f };
			}
			if (iVar80[iVar0] != 0 && unk_0x3E932F23D327A136(iVar80[iVar0], iVar1) == 5)
			{
				Global_4456448.f_208177[iVar0].f_257[iVar1] = { unk_0x6403E33233A20F75(iVar80[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_257[iVar1] = { 0f, 0f, 0f };
			}
			if (iVar91[iVar0] != 0 && unk_0x3E932F23D327A136(iVar91[iVar0], iVar1) == 5)
			{
				Global_4456448.f_208177[iVar0].f_318[iVar1] = { unk_0x6403E33233A20F75(iVar91[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_318[iVar1] = { 0f, 0f, 0f };
			}
			if (iVar102[iVar0] != 0 && unk_0x3E932F23D327A136(iVar102[iVar0], iVar1) == 3)
			{
				Global_4456448.f_208177[iVar0].f_379[iVar1] = unk_0x73F91AA610E60211(iVar102[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_379[iVar1] = 0f;
			}
			if (iVar113[iVar0] != 0 && unk_0x3E932F23D327A136(iVar113[iVar0], iVar1) == 3)
			{
				Global_4456448.f_208177[iVar0].f_400[iVar1] = unk_0x73F91AA610E60211(iVar113[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_400[iVar1] = 0f;
			}
			if (iVar146[iVar0] != 0 && unk_0x3E932F23D327A136(iVar146[iVar0], iVar1) == 2)
			{
				Global_4456448.f_208177[iVar0].f_421[iVar1] = unk_0xE082EE0DCA9466C4(iVar146[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_421[iVar1] = 0;
			}
			if (iVar157[iVar0] != 0 && unk_0x3E932F23D327A136(iVar157[iVar0], iVar1) == 2)
			{
				Global_4456448.f_208177[iVar0].f_442[iVar1] = unk_0xE082EE0DCA9466C4(iVar157[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_442[iVar1] = 0;
			}
			if (iVar168[iVar0] != 0 && unk_0x3E932F23D327A136(iVar168[iVar0], iVar1) == 3)
			{
				Global_4456448.f_208177[iVar0].f_463[iVar1] = unk_0x73F91AA610E60211(iVar168[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_463[iVar1] = 0f;
			}
			if (iVar234[iVar0] != 0 && unk_0x3E932F23D327A136(iVar234[iVar0], iVar1) == 2)
			{
				Global_4456448.f_208177[iVar0].f_572[iVar1] = unk_0xE082EE0DCA9466C4(iVar234[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_572[iVar1] = 0;
			}
			if (iVar245[iVar0] != 0 && unk_0x3E932F23D327A136(iVar245[iVar0], iVar1) == 5)
			{
				Global_4456448.f_208177[iVar0].f_593[iVar1] = { unk_0x6403E33233A20F75(iVar245[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_593[iVar1] = { 0f, 0f, 0f };
			}
			if (iVar256[iVar0] != 0 && unk_0x3E932F23D327A136(iVar256[iVar0], iVar1) == 5)
			{
				Global_4456448.f_208177[iVar0].f_654[iVar1] = { unk_0x6403E33233A20F75(iVar256[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_654[iVar1] = { 0f, 0f, 0f };
			}
			if (iVar267[iVar0] != 0 && unk_0x3E932F23D327A136(iVar267[iVar0], iVar1) == 5)
			{
				Global_4456448.f_208177[iVar0].f_715[iVar1] = { unk_0x6403E33233A20F75(iVar267[iVar0], iVar1) };
				Global_4456448.f_227359[iVar1] = Global_4456448.f_208177[iVar0].f_715[iVar1];
				Global_4456448.f_227380[iVar1] = Global_4456448.f_208177[iVar0].f_715[iVar1].f_1;
				Global_4456448.f_227401[iVar1] = Global_4456448.f_208177[iVar0].f_715[iVar1].f_2;
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_715[iVar1] = { 0f, 0f, 0f };
			}
			if (iVar278[iVar0] != 0 && unk_0x3E932F23D327A136(iVar278[iVar0], iVar1) == 5)
			{
				Global_4456448.f_208177[iVar0].f_490[iVar1] = { unk_0x6403E33233A20F75(iVar278[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_490[iVar1] = { 0f, 0f, 0f };
			}
			if (iVar289[iVar0] != 0 && unk_0x3E932F23D327A136(iVar289[iVar0], iVar1) == 3)
			{
				Global_4456448.f_208177[iVar0].f_551[iVar1] = unk_0x73F91AA610E60211(iVar289[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_551[iVar1] = 0f;
			}
			if (iVar322[iVar0] != 0 && unk_0x3E932F23D327A136(iVar322[iVar0], iVar1) == 5)
			{
				Global_4456448.f_208177[iVar0].f_1312[iVar1] = { unk_0x6403E33233A20F75(iVar322[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_1312[iVar1] = { 0f, 0f, 0f };
			}
			if (iVar333[iVar0] != 0 && unk_0x3E932F23D327A136(iVar333[iVar0], iVar1) == 3)
			{
				Global_4456448.f_208177[iVar0].f_1373[iVar1] = unk_0x73F91AA610E60211(iVar333[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_1373[iVar1] = 0f;
			}
			if (iVar344[iVar0] != 0 && unk_0x3E932F23D327A136(iVar344[iVar0], iVar1) == 5)
			{
				Global_4456448.f_208177[iVar0].f_1394[iVar1] = { unk_0x6403E33233A20F75(iVar344[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_1394[iVar1] = { 0f, 0f, 0f };
			}
			if (iVar355[iVar0] != 0 && unk_0x3E932F23D327A136(iVar355[iVar0], iVar1) == 3)
			{
				Global_4456448.f_208177[iVar0].f_1455[iVar1] = unk_0x73F91AA610E60211(iVar355[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_1455[iVar1] = 0f;
			}
			if (iVar300[iVar0] != 0 && unk_0x3E932F23D327A136(iVar300[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_4456448.f_208177[iVar0].f_1150[iVar1]), unk_0x3E4982E6ACD879AE(iVar300[iVar0], iVar1), 16);
			}
			else
			{
				StringCopy(&(Global_4456448.f_208177[iVar0].f_1150[iVar1]), "", 16);
			}
			if (iVar311[iVar0] != 0 && unk_0x3E932F23D327A136(iVar311[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_4456448.f_208177[iVar0].f_1231[iVar1]), unk_0x3E4982E6ACD879AE(iVar311[iVar0], iVar1), 16);
			}
			else
			{
				StringCopy(&(Global_4456448.f_208177[iVar0].f_1231[iVar1]), "", 16);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (iVar124[iVar0] != 0 && unk_0x3E932F23D327A136(iVar124[iVar0], iVar1) == 2)
			{
				Global_4456448.f_208177[iVar0].f_785[iVar1].f_1 = unk_0xE082EE0DCA9466C4(iVar124[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_785[iVar1].f_1 = -1;
			}
			if (iVar135[iVar0] != 0 && unk_0x3E932F23D327A136(iVar135[iVar0], iVar1) == 2)
			{
				Global_4456448.f_208177[iVar0].f_785[iVar1] = unk_0xE082EE0DCA9466C4(iVar135[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_785[iVar1] = -1;
			}
			iVar1++;
		}
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			if (iVar379[iVar0] != 0 && unk_0x3E932F23D327A136(iVar379[iVar0], iVar2) == 2)
			{
				Global_4456448.f_208177[iVar0].f_1480[iVar2] = unk_0xE082EE0DCA9466C4(iVar379[iVar0], iVar2);
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_1480[iVar2] = 0;
			}
			if (iVar390[iVar0] != 0 && unk_0x3E932F23D327A136(iVar390[iVar0], iVar2) == 2)
			{
				Global_4456448.f_208177[iVar0].f_1480[iVar2].f_1 = unk_0xE082EE0DCA9466C4(iVar390[iVar0], iVar2);
			}
			else
			{
				Global_4456448.f_208177[iVar0].f_1480[iVar2].f_1 = -1;
			}
			func_258(&(Global_4456448.f_208177[iVar0].f_1116[iVar2]), &(iVar404[iVar0]), iVar2);
			func_258(&(Global_4456448.f_208177[iVar0].f_1133[iVar2]), &(iVar415[iVar0]), iVar2);
			iVar2++;
		}
		iVar0++;
	}
}

void func_260(int iParam0)
{
	if (unk_0x6D954AF55D3925DB(iParam0, "eoir") == 0 || unk_0x6D954AF55D3925DB(iParam0, "eoep") == 0)
	{
		return;
	}
	iVar8 = unk_0x7619952D26DF7783(iParam0, "eoid");
	iVar9 = unk_0x7619952D26DF7783(iParam0, "eoet");
	iVar10 = unk_0x6D954AF55D3925DB(iParam0, "eoir");
	iVar11 = unk_0x6D954AF55D3925DB(iParam0, "eoep");
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		if (iVar8 != 0 && unk_0x3E932F23D327A136(iVar8, iVar0) == 2)
		{
			Global_4456448.f_190103[iVar0] = unk_0xE082EE0DCA9466C4(iVar8, iVar0);
		}
		else
		{
			Global_4456448.f_190103[iVar0] = -1;
		}
		if (iVar9 != 0 && unk_0x3E932F23D327A136(iVar9, iVar0) == 2)
		{
			Global_4456448.f_190072[iVar0] = unk_0xE082EE0DCA9466C4(iVar9, iVar0);
		}
		else
		{
			Global_4456448.f_190072[iVar0] = -1;
		}
		iVar1 = 0;
		while (iVar1 <= 12)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				if (func_273())
				{
					StringCopy(&cVar4, "eor", 16);
					StringIntConCat(&cVar4, iVar0, 16);
					StringIntConCat(&cVar4, iVar1, 16);
					StringIntConCat(&cVar4, iVar2, 16);
				}
				else
				{
					StringCopy(&cVar4, "eor", 16);
					StringIntConCat(&cVar4, iVar0, 16);
					StringConCat(&cVar4, "_", 16);
					StringIntConCat(&cVar4, iVar1, 16);
					StringConCat(&cVar4, "_", 16);
					StringIntConCat(&cVar4, iVar2, 16);
				}
				if (unk_0xAE496C664AE89A9C(iVar10, &cVar4) == 2)
				{
					Global_4456448.f_190134[iVar0][iVar1][iVar2] = unk_0x8A83B52A17A321DB(iVar10, &cVar4);
				}
				else
				{
					Global_4456448.f_190134[iVar0][iVar1][iVar2] = -1;
				}
				if (func_273())
				{
					StringCopy(&cVar4, "eop", 16);
					StringIntConCat(&cVar4, iVar0, 16);
					StringIntConCat(&cVar4, iVar1, 16);
					StringIntConCat(&cVar4, iVar2, 16);
				}
				else
				{
					StringCopy(&cVar4, "eop", 16);
					StringIntConCat(&cVar4, iVar0, 16);
					StringConCat(&cVar4, "_", 16);
					StringIntConCat(&cVar4, iVar1, 16);
					StringConCat(&cVar4, "_", 16);
					StringIntConCat(&cVar4, iVar2, 16);
				}
				if (unk_0xAE496C664AE89A9C(iVar11, &cVar4) == 2)
				{
					Global_4456448.f_192115[iVar0][iVar1][iVar2] = unk_0x8A83B52A17A321DB(iVar11, &cVar4);
				}
				else
				{
					Global_4456448.f_190134[iVar0][iVar1][iVar2] = -1;
				}
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		iVar12 = Global_4456448.f_190103[iVar0];
		iVar13 = Global_4456448.f_190072[iVar0];
		if (iVar12 != -1 && iVar13 != -1)
		{
			iVar3 = 0;
			while (iVar3 <= 29)
			{
				if ((iVar3 != iVar0 && Global_4456448.f_190103[iVar3] == iVar12) && Global_4456448.f_190072[iVar3] == iVar13)
				{
					Global_4456448.f_190072[iVar3] = -1;
					Global_4456448.f_190103[iVar3] = -1;
					iVar1 = 0;
					while (iVar1 <= 12)
					{
						iVar2 = 0;
						while (iVar2 <= 3)
						{
							Global_4456448.f_190134[iVar3][iVar1][iVar2] = -1;
							Global_4456448.f_192115[iVar3][iVar1][iVar2] = -1;
							iVar2++;
						}
						iVar1++;
					}
				}
				iVar3++;
			}
		}
		iVar0++;
	}
}

void func_261(int iParam0)
{
	iVar4 = unk_0x6D954AF55D3925DB(iParam0, "kill");
	iVar5 = unk_0x7619952D26DF7783(iVar4, "no");
	iVar6 = unk_0x7619952D26DF7783(iVar4, "mcp");
	iVar7 = unk_0x7619952D26DF7783(iVar4, "mcf");
	iVar1 = 0;
	while (iVar1 <= (Global_4456448.f_206 - 1))
	{
		if (iVar1 < 4)
		{
			Global_4456448.f_75691[iVar1] = unk_0xE082EE0DCA9466C4(iVar5, iVar1);
			StringCopy(&cVar2, "rul", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			iVar8[iVar1] = unk_0x7619952D26DF7783(iVar4, &cVar2);
			StringCopy(&cVar2, "pri", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			iVar13[iVar1] = unk_0x7619952D26DF7783(iVar4, &cVar2);
			StringCopy(&cVar2, "lim", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			iVar18[iVar1] = unk_0x7619952D26DF7783(iVar4, &cVar2);
			StringCopy(&cVar2, "jtop", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			iVar23[iVar1] = unk_0x7619952D26DF7783(iVar4, &cVar2);
			StringCopy(&cVar2, "jtof", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			iVar28[iVar1] = unk_0x7619952D26DF7783(iVar4, &cVar2);
			iVar0 = 0;
			while (iVar0 <= (Global_4456448.f_75691[iVar1] - 1))
			{
				if (iVar0 < 17)
				{
					Global_4456448.f_75197[iVar0][iVar1] = unk_0xE082EE0DCA9466C4(iVar8[iVar1], iVar0);
					Global_4456448.f_75197[iVar0].f_5[iVar1] = unk_0xE082EE0DCA9466C4(iVar13[iVar1], iVar0);
					if (Global_4456448.f_75197[iVar0].f_5[iVar1] == -1)
					{
						Global_4456448.f_75197[iVar0].f_5[iVar1] = 99999;
					}
					Global_4456448.f_75197[iVar0].f_10[iVar1] = unk_0xE082EE0DCA9466C4(iVar18[iVar1], iVar0);
					if (iVar23[iVar1] != 0 && unk_0x3E932F23D327A136(iVar23[iVar1], iVar0) == 2)
					{
						Global_4456448.f_75197[iVar0].f_15[iVar1] = unk_0xE082EE0DCA9466C4(iVar23[iVar1], iVar0);
					}
					else
					{
						Global_4456448.f_75197[iVar0].f_15[iVar1] = 0;
					}
					if (iVar28[iVar1] != 0 && unk_0x3E932F23D327A136(iVar28[iVar1], iVar0) == 2)
					{
						Global_4456448.f_75197[iVar0].f_20[iVar1] = unk_0xE082EE0DCA9466C4(iVar28[iVar1], iVar0);
					}
					else
					{
						Global_4456448.f_75197[iVar0].f_20[iVar1] = 0;
					}
					if (iVar6 != 0 && unk_0x3E932F23D327A136(iVar6, iVar0) == 2)
					{
						Global_4456448.f_75197[iVar0].f_28 = unk_0xE082EE0DCA9466C4(iVar6, iVar0);
					}
					else
					{
						Global_4456448.f_75197[iVar0].f_28 = -1;
					}
					if (iVar7 != 0 && unk_0x3E932F23D327A136(iVar7, iVar0) == 2)
					{
						Global_4456448.f_75197[iVar0].f_27 = unk_0xE082EE0DCA9466C4(iVar7, iVar0);
					}
					else
					{
						Global_4456448.f_75197[iVar0].f_27 = -1;
					}
				}
				iVar0++;
			}
		}
		iVar1++;
	}
}

void func_262(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_206 - 1))
	{
		func_199("stinv", &(Global_4456448.f_239469[iVar0]), iParam0, &vVar1, iVar0, -1, -2340845);
		func_199("mminv", &(Global_4456448.f_239469[iVar0].f_1), iParam0, &(vVar1.f_1), iVar0, -1, -2340845);
		func_199("mm2inv", &(Global_4456448.f_239469[iVar0].f_2), iParam0, &(vVar1.f_2), iVar0, -1, -2340845);
		iVar0++;
	}
}

void func_263(int iParam0)
{
	iVar0 = unk_0x6D954AF55D3925DB(*iParam0, "invty");
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		func_264(&iVar0, &(Global_4456448.f_239102[iVar1]), iVar1);
		iVar1++;
	}
}

void func_264(int iParam0, var uParam1, int iParam2)
{
	if (func_273())
	{
		return;
	}
	Var0.f_2 = 5;
	Var0.f_8 = 5;
	Var0.f_14 = 5;
	Var0.f_20 = 5;
	Var0.f_26 = 5;
	Var0.f_26.f_1 = 6;
	Var0.f_26.f_1.f_7 = 6;
	Var0.f_26.f_1.f_7.f_7 = 6;
	Var0.f_26.f_1.f_7.f_7.f_7 = 6;
	Var0.f_26.f_1.f_7.f_7.f_7.f_7 = 6;
	func_199("wiSW", &(uParam1->f_56), iParam0, &Var0, iParam2, -1, -2340845);
	func_199("wiBS", &(uParam1->f_57), iParam0, &(Var0.f_1), iParam2, 0, -2340845);
	iVar66 = 0;
	while (iVar66 <= 4)
	{
		iVar71 = -1;
		func_265(&sVar67, "wiWp", iVar66, -1);
		func_199(&sVar67, &iVar71, iParam0, &(Var0.f_2[iVar66]), iParam2, -1, -2340845);
		(*uParam1)[iVar66] = iVar71;
		func_265(&sVar67, "wiAm", iVar66, -1);
		func_199(&sVar67, &(uParam1[iVar66]->f_1), iParam0, &(Var0.f_8[iVar66]), iParam2, -1, -2340845);
		func_265(&sVar67, "wiTnt", iVar66, -1);
		func_199(&sVar67, &(uParam1[iVar66]->f_2), iParam0, &(Var0.f_14[iVar66]), iParam2, -1, -2340845);
		func_265(&sVar67, "wiDM", iVar66, -1);
		func_192(&sVar67, &(uParam1[iVar66]->f_3), iParam0, &(Var0.f_20[iVar66]), iParam2, -1f, -904994889);
		iVar65 = 0;
		iVar65 = 0;
		while (iVar65 <= 5)
		{
			iVar71 = -1;
			func_265(&sVar67, "wiWpC", iVar66, iVar65);
			func_199(&sVar67, &iVar71, iParam0, &(Var0.f_26[iVar66][iVar65]), iParam2, -1, -2340845);
			uParam1[iVar66]->f_4[iVar65] = iVar71;
			iVar65++;
		}
		iVar66++;
	}
	func_199("wiPc", &(uParam1->f_58), iParam0, &(Var0.f_62), iParam2, 0, -2340845);
	func_199("wiPt", &(uParam1->f_58.f_1), iParam0, &(Var0.f_63), iParam2, -1, -2340845);
	func_199("wiPpt", &(uParam1->f_58.f_2), iParam0, &(Var0.f_64), iParam2, -1, -2340845);
}

void func_265(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	StringCopy(sParam0, sParam1, 16);
	StringIntConCat(sParam0, iParam2, 16);
	if (iParam3 != -1)
	{
		StringConCat(sParam0, "_", 16);
		StringIntConCat(sParam0, iParam3, 16);
	}
}

void func_266(int iParam0)
{
	iVar1 = unk_0x6D954AF55D3925DB(*iParam0, "interactables");
	func_249("intNum", &(Global_4456448.f_87021), &iVar1, 0, -2340845);
	Var2.f_2.f_10 = 4;
	Var2.f_2.f_15 = 4;
	Var2.f_2.f_20 = 4;
	Var2.f_40 = 4;
	Var2.f_52 = 1;
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_87021 - 1))
	{
		iVar56 = 0;
		func_199("int_mdl_", &iVar56, &iVar1, &Var2, iVar0, 0, -2340845);
		Global_4456448.f_87022[iVar0] = iVar56;
		func_199("int_ity_", &(Global_4456448.f_87022[iVar0].f_1), &iVar1, &(Var2.f_1), iVar0, 0, -2340845);
		func_195(&(Var2.f_2), &iVar1, &(Global_4456448.f_87022[iVar0].f_2), iVar0, 2);
		func_237("int_pos_", &(Global_4456448.f_87022[iVar0].f_25), &iVar1, &(Var2.f_27), iVar0, 0f, 0f, 0f, 0f, 0f, 0f);
		func_237("int_rot_", &(Global_4456448.f_87022[iVar0].f_28), &iVar1, &(Var2.f_28), iVar0, 0f, 0f, 0f, 0f, 0f, 0f);
		func_192("int_hdn_", &(Global_4456448.f_87022[iVar0].f_31), &iVar1, &(Var2.f_29), iVar0, 0f, -904994889);
		func_199("int_BS_", &(Global_4456448.f_87022[iVar0].f_32), &iVar1, &(Var2.f_30), iVar0, 0, -2340845);
		func_192("int_idst_", &(Global_4456448.f_87022[iVar0].f_33), &iVar1, &(Var2.f_31), iVar0, 2f, -904994889);
		func_199("int_hlth_", &(Global_4456448.f_87022[iVar0].f_35), &iVar1, &(Var2.f_32), iVar0, -1, -2340845);
		func_199("int_inpr_", &(Global_4456448.f_87022[iVar0].f_42), &iVar1, &(Var2.f_33), iVar0, 0, -2340845);
		func_199("int_prq_rq_", &(Global_4456448.f_87022[iVar0].f_34), &iVar1, &(Var2.f_34), iVar0, -1, -2340845);
		func_199("int_ass_st", &(Global_4456448.f_87022[iVar0].f_43), &iVar1, &(Var2.f_35), iVar0, -1, -2340845);
		func_199("int_ass_sr", &(Global_4456448.f_87022[iVar0].f_44), &iVar1, &(Var2.f_36), iVar0, -1, -2340845);
		func_199("int_ass_sl", &(Global_4456448.f_87022[iVar0].f_45), &iVar1, &(Var2.f_37), iVar0, 0, -2340845);
		func_199("int_ass_ct", &(Global_4456448.f_87022[iVar0].f_46), &iVar1, &(Var2.f_38), iVar0, -1, -2340845);
		func_199("int_ass_cr", &(Global_4456448.f_87022[iVar0].f_47), &iVar1, &(Var2.f_39), iVar0, -1, -2340845);
		iVar57 = 0;
		while (iVar57 <= 3)
		{
			StringCopy(&vVar58, "int_ass_bi", 24);
			StringIntConCat(&vVar58, iVar57, 24);
			func_199(&vVar58, &(Global_4456448.f_87022[iVar0].f_48[iVar57]), &iVar1, &(Var2.f_40[iVar57]), iVar0, 0, -2340845);
			iVar57++;
		}
		func_199("int_cn_BS_", &(Global_4456448.f_87022[iVar0].f_36.f_2), &iVar1, &(Var2.f_45), iVar0, 0, -2340845);
		func_199("int_cn_stD_", &(Global_4456448.f_87022[iVar0].f_36), &iVar1, &(Var2.f_45.f_1), iVar0, 0, -2340845);
		func_199("int_prq_cm_", &(Global_4456448.f_87022[iVar0].f_36.f_1), &iVar1, &(Var2.f_45.f_2), iVar0, -1, -2340845);
		func_199("int_cn_uD_", &(Global_4456448.f_87022[iVar0].f_36.f_4), &iVar1, &(Var2.f_45.f_4), iVar0, 0, -2340845);
		func_199("int_cn_lD_", &(Global_4456448.f_87022[iVar0].f_36.f_3), &iVar1, &(Var2.f_45.f_3), iVar0, 0, -2340845);
		func_199("int_cn_sDC_", &(Global_4456448.f_87022[iVar0].f_36.f_5), &iVar1, &(Var2.f_45.f_5), iVar0, 0, -2340845);
		func_199("int_iw_an_", &(Global_4456448.f_87022[iVar0].f_53), &iVar1, &(Var2.f_51), iVar0, 0, -2340845);
		func_191("alvint", &(Global_4456448.f_87022[iVar0].f_54), 1, &iVar1, &(Var2.f_52), iVar0, 0, -2340845);
		iVar0++;
	}
}

void func_267(int iParam0)
{
	iVar5 = unk_0x6D954AF55D3925DB(iParam0, "goto");
	Global_4456448.f_75697[0] = unk_0x8A83B52A17A321DB(iVar5, "no");
	Global_4456448.f_6 = unk_0x8A83B52A17A321DB(iVar5, "atrig");
	iVar1 = 0;
	while (iVar1 <= (Global_4456448.f_206 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&sVar3, "loc", 8);
			StringIntConCat(&sVar3, iVar1, 8);
			iVar6[iVar1] = unk_0x7619952D26DF7783(iVar5, &sVar3);
			StringCopy(&sVar3, "sz", 8);
			StringIntConCat(&sVar3, iVar1, 8);
			iVar11[iVar1] = unk_0x7619952D26DF7783(iVar5, &sVar3);
			StringCopy(&sVar3, "rl", 8);
			StringIntConCat(&sVar3, iVar1, 8);
			iVar16[iVar1] = unk_0x7619952D26DF7783(iVar5, &sVar3);
			StringCopy(&sVar3, "pri", 8);
			StringIntConCat(&sVar3, iVar1, 8);
			iVar21[iVar1] = unk_0x7619952D26DF7783(iVar5, &sVar3);
			StringCopy(&sVar3, "wtm", 8);
			StringIntConCat(&sVar3, iVar1, 8);
			iVar26[iVar1] = unk_0x7619952D26DF7783(iVar5, &sVar3);
			StringCopy(&sVar3, "gps", 8);
			StringIntConCat(&sVar3, iVar1, 8);
			iVar41[iVar1] = unk_0x7619952D26DF7783(iVar5, &sVar3);
			StringCopy(&sVar3, "smc", 8);
			StringIntConCat(&sVar3, iVar1, 8);
			iVar46[iVar1] = unk_0x7619952D26DF7783(iVar5, &sVar3);
			StringCopy(&sVar3, "lbs", 8);
			StringIntConCat(&sVar3, iVar1, 8);
			iVar51[iVar1] = unk_0x7619952D26DF7783(iVar5, &sVar3);
			StringCopy(&sVar3, "rcptp", 8);
			StringIntConCat(&sVar3, iVar1, 8);
			iVar61[iVar1] = unk_0x7619952D26DF7783(iVar5, &sVar3);
			StringCopy(&sVar3, "cmp", 8);
			StringIntConCat(&sVar3, iVar1, 8);
			iVar31[iVar1] = unk_0x7619952D26DF7783(iVar5, &sVar3);
			StringCopy(&sVar3, "air", 8);
			StringIntConCat(&sVar3, iVar1, 8);
			iVar36[iVar1] = unk_0x7619952D26DF7783(iVar5, &sVar3);
			StringCopy(&sVar3, "veh", 8);
			StringIntConCat(&sVar3, iVar1, 8);
			iVar66[iVar1] = unk_0x7619952D26DF7783(iVar5, &sVar3);
			StringCopy(&sVar3, "dir", 8);
			StringIntConCat(&sVar3, iVar1, 8);
			iVar56[iVar1] = unk_0x7619952D26DF7783(iVar5, &sVar3);
			StringCopy(&sVar3, "jtop", 8);
			StringIntConCat(&sVar3, iVar1, 8);
			iVar71[iVar1] = unk_0x7619952D26DF7783(iVar5, &sVar3);
			StringCopy(&sVar3, "jtof", 8);
			StringIntConCat(&sVar3, iVar1, 8);
			iVar76[iVar1] = unk_0x7619952D26DF7783(iVar5, &sVar3);
			iVar0 = 0;
			while (iVar0 <= (Global_4456448.f_75697[0] - 1))
			{
				Global_4456448.f_70744[iVar0].f_1[0] = { unk_0x6403E33233A20F75(iVar6[iVar1], iVar0) };
				Global_4456448.f_70744[iVar0].f_14[0] = unk_0x73F91AA610E60211(iVar11[iVar1], iVar0);
				Global_4456448.f_70744[iVar0].f_87[iVar1] = unk_0xE082EE0DCA9466C4(iVar16[iVar1], iVar0);
				Global_4456448.f_70744[iVar0].f_92[iVar1] = unk_0xE082EE0DCA9466C4(iVar21[iVar1], iVar0);
				if (Global_4456448.f_70744[iVar0].f_92[iVar1] == -1)
				{
					Global_4456448.f_70744[iVar0].f_92[iVar1] = 99999;
				}
				Global_4456448.f_70744[iVar0].f_97[iVar1] = unk_0xE082EE0DCA9466C4(iVar26[iVar1], iVar0);
				Global_4456448.f_70744[iVar0].f_69[iVar1] = unk_0x73F91AA610E60211(iVar61[iVar1], iVar0);
				Global_4456448.f_70744[iVar0].f_102[iVar1] = unk_0xE082EE0DCA9466C4(iVar31[iVar1], iVar0);
				Global_4456448.f_70744[iVar0].f_58[iVar1] = unk_0xE082EE0DCA9466C4(iVar36[iVar1], iVar0);
				Global_4456448.f_70744[iVar0].f_74 = unk_0xE082EE0DCA9466C4(iVar51[iVar1], iVar0);
				Global_4456448.f_70744[iVar0].f_53[0] = unk_0xE082EE0DCA9466C4(iVar41[iVar1], iVar0);
				Global_4456448.f_70744[iVar0].f_63[0] = unk_0xE082EE0DCA9466C4(iVar46[iVar1], iVar0);
				Global_4456448.f_70744[iVar0].f_127 = unk_0x73F91AA610E60211(iVar56[iVar1], iVar0);
				if (iVar66[iVar1] != 0 && unk_0x3E932F23D327A136(iVar66[iVar1], iVar0) == 2)
				{
					Global_4456448.f_70744[iVar0].f_82[iVar1] = unk_0xE082EE0DCA9466C4(iVar66[iVar1], iVar0);
				}
				else
				{
					Global_4456448.f_70744[iVar0].f_82[iVar1] = 0;
				}
				if (iVar71[iVar1] != 0 && unk_0x3E932F23D327A136(iVar71[iVar1], iVar0) == 2)
				{
					Global_4456448.f_70744[iVar0].f_107[iVar1] = unk_0xE082EE0DCA9466C4(iVar71[iVar1], iVar0);
				}
				else
				{
					Global_4456448.f_70744[iVar0].f_107[iVar1] = 0;
				}
				if (iVar76[iVar1] != 0 && unk_0x3E932F23D327A136(iVar76[iVar1], iVar0) == 2)
				{
					Global_4456448.f_70744[iVar0].f_112[iVar1] = unk_0xE082EE0DCA9466C4(iVar76[iVar1], iVar0);
				}
				else
				{
					Global_4456448.f_70744[iVar0].f_112[iVar1] = 0;
				}
				iVar0++;
			}
		}
		iVar1++;
	}
	iVar81 = unk_0x7619952D26DF7783(iVar5, "locbc");
	iVar82 = unk_0x7619952D26DF7783(iVar5, "loc2rd");
	iVar83 = unk_0x7619952D26DF7783(iVar5, "loclbr");
	iVar84 = unk_0x7619952D26DF7783(iVar5, "locbra");
	iVar85 = unk_0x7619952D26DF7783(iVar5, "locbhra");
	iVar86 = unk_0x7619952D26DF7783(iVar5, "locdir");
	iVar87 = unk_0x7619952D26DF7783(iVar5, "loctol");
	iVar88 = unk_0x7619952D26DF7783(iVar5, "lochgt");
	iVar89 = unk_0x7619952D26DF7783(iVar5, "locart");
	iVar90 = unk_0x7619952D26DF7783(iVar5, "locaa1");
	iVar91 = unk_0x7619952D26DF7783(iVar5, "locaa2");
	iVar92 = unk_0x7619952D26DF7783(iVar5, "locaaw");
	iVar93 = unk_0x7619952D26DF7783(iVar5, "locstd");
	iVar94 = unk_0x7619952D26DF7783(iVar5, "locstm");
	iVar95 = unk_0x7619952D26DF7783(iVar5, "lcbs2");
	iVar96 = unk_0x7619952D26DF7783(iVar5, "lcbs3");
	iVar97 = unk_0x7619952D26DF7783(iVar5, "procde");
	iVar98 = unk_0x7619952D26DF7783(iVar5, "lcfktm");
	iVar99 = unk_0x7619952D26DF7783(iVar5, "locid");
	iVar100 = unk_0x7619952D26DF7783(iVar5, "locti");
	iVar101 = unk_0x7619952D26DF7783(iVar5, "locgc");
	iVar102 = unk_0x7619952D26DF7783(iVar5, "loclto");
	iVar103 = unk_0x7619952D26DF7783(iVar5, "loctmw");
	iVar104 = unk_0x7619952D26DF7783(iVar5, "loctmt");
	iVar105 = unk_0x7619952D26DF7783(iVar5, "loctst");
	iVar106 = unk_0x7619952D26DF7783(iVar5, "locpro");
	iVar107 = unk_0x7619952D26DF7783(iVar5, "locpros");
	iVar108 = unk_0x7619952D26DF7783(iVar5, "locprot");
	iVar109 = unk_0x7619952D26DF7783(iVar5, "locdisa");
	iVar110 = unk_0x7619952D26DF7783(iVar5, "locloo");
	iVar111 = unk_0x7619952D26DF7783(iVar5, "loccors");
	iVar112 = unk_0x7619952D26DF7783(iVar5, "lochght");
	iVar113 = unk_0x7619952D26DF7783(iVar5, "locdpth");
	iVar114 = unk_0x7619952D26DF7783(iVar5, "localph");
	iVar115 = unk_0x7619952D26DF7783(iVar5, "loccosc");
	iVar116 = unk_0x7619952D26DF7783(iVar5, "locbso");
	iVar117 = unk_0x7619952D26DF7783(iVar5, "locspg");
	iVar118 = unk_0x7619952D26DF7783(iVar5, "locspsg");
	iVar140 = unk_0x7619952D26DF7783(iVar5, "locitb");
	iVar141 = unk_0x7619952D26DF7783(iVar5, "lmcve1");
	iVar142 = unk_0x7619952D26DF7783(iVar5, "lmcve2");
	iVar143 = unk_0x7619952D26DF7783(iVar5, "lpreq");
	iVar144 = unk_0x7619952D26DF7783(iVar5, "iorfll");
	iVar145 = unk_0x7619952D26DF7783(iVar5, "gtbsr");
	iVar146 = unk_0x7619952D26DF7783(iVar5, "gtbss");
	iVar147 = unk_0x7619952D26DF7783(iVar5, "nmaggg");
	iVar148 = unk_0x7619952D26DF7783(iVar5, "nmpass");
	iVar149 = unk_0x7619952D26DF7783(iVar5, "nmfail");
	iVar150 = unk_0x7619952D26DF7783(iVar5, "lmcp");
	iVar151 = unk_0x7619952D26DF7783(iVar5, "lmcf");
	iVar152 = unk_0x7619952D26DF7783(iVar5, "lmca");
	uVar174 = 1;
	Var176.f_10 = 4;
	Var176.f_15 = 4;
	Var176.f_20 = 4;
	iVar201 = 0;
	iVar201 = 0;
	while (iVar201 <= 8)
	{
		StringCopy(&sVar3, "lwrvv", 8);
		StringIntConCat(&sVar3, iVar201, 8);
		iVar153[iVar201] = unk_0x7619952D26DF7783(iVar5, &sVar3);
		StringCopy(&sVar3, "flrvv", 8);
		StringIntConCat(&sVar3, iVar201, 8);
		iVar163[iVar201] = unk_0x7619952D26DF7783(iVar5, &sVar3);
		iVar201++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_75697[0] - 1))
	{
		func_195(&Var176, &iVar5, &(Global_4456448.f_70744[iVar0].f_20), iVar0, 6);
		if (iVar81 != 0 && unk_0x3E932F23D327A136(iVar81, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_20.f_2 = unk_0xE082EE0DCA9466C4(iVar81, iVar0);
		}
		else if (func_273())
		{
			Global_4456448.f_70744[iVar0].f_20.f_2 = 0;
		}
		if (iVar82 != 0 && unk_0x3E932F23D327A136(iVar82, iVar0) == 3)
		{
			Global_4456448.f_70744[iVar0].f_19 = unk_0x73F91AA610E60211(iVar82, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_19 = 0f;
		}
		if (iVar83 != 0 && unk_0x3E932F23D327A136(iVar83, iVar0) == 3)
		{
			Global_4456448.f_70744[iVar0].f_20.f_4 = unk_0x73F91AA610E60211(iVar83, iVar0);
		}
		else if (func_273())
		{
			Global_4456448.f_70744[iVar0].f_20.f_4 = 1f;
		}
		if (iVar84 != 0 && unk_0x3E932F23D327A136(iVar84, iVar0) == 3)
		{
			Global_4456448.f_70744[iVar0].f_20.f_6 = unk_0x73F91AA610E60211(iVar84, iVar0);
		}
		else if (func_273())
		{
			Global_4456448.f_70744[iVar0].f_20.f_6 = -1f;
		}
		if (iVar85 != 0 && unk_0x3E932F23D327A136(iVar85, iVar0) == 3)
		{
			Global_4456448.f_70744[iVar0].f_20.f_7 = unk_0x73F91AA610E60211(iVar85, iVar0);
		}
		else if (func_273())
		{
			Global_4456448.f_70744[iVar0].f_20.f_7 = -1f;
		}
		if (iVar86 != 0 && unk_0x3E932F23D327A136(iVar86, iVar0) == 3)
		{
			Global_4456448.f_70744[iVar0].f_50 = unk_0x73F91AA610E60211(iVar86, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_50 = 0f;
		}
		if (iVar87 != 0 && unk_0x3E932F23D327A136(iVar87, iVar0) == 3)
		{
			Global_4456448.f_70744[iVar0].f_51 = unk_0x73F91AA610E60211(iVar87, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_51 = 0f;
		}
		if (iVar88 != 0 && unk_0x3E932F23D327A136(iVar88, iVar0) == 3)
		{
			Global_4456448.f_70744[iVar0].f_52 = unk_0x73F91AA610E60211(iVar88, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_52 = 0f;
		}
		if (iVar100 != 0 && unk_0x3E932F23D327A136(iVar100, iVar0) == 3)
		{
			Global_4456448.f_70744[iVar0].f_80 = unk_0x73F91AA610E60211(iVar100, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_80 = 0f;
		}
		if (iVar101 != 0 && unk_0x3E932F23D327A136(iVar101, iVar0) == 3)
		{
			Global_4456448.f_70744[iVar0].f_81 = unk_0x73F91AA610E60211(iVar101, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_81 = 0f;
		}
		if (iVar89 != 0 && unk_0x3E932F23D327A136(iVar89, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0] = unk_0xE082EE0DCA9466C4(iVar89, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0] = 0;
		}
		if (iVar93 != 0 && unk_0x3E932F23D327A136(iVar93, iVar0) == 3)
		{
			Global_4456448.f_70744[iVar0].f_126 = unk_0x73F91AA610E60211(iVar93, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_126 = 10,5f;
		}
		if (iVar112 != 0 && unk_0x3E932F23D327A136(iVar112, iVar0) == 3)
		{
			Global_4456448.f_70744[iVar0].f_128 = unk_0x73F91AA610E60211(iVar112, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_128 = 1f;
		}
		if (iVar113 != 0 && unk_0x3E932F23D327A136(iVar113, iVar0) == 3)
		{
			Global_4456448.f_70744[iVar0].f_129 = unk_0x73F91AA610E60211(iVar113, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_129 = 0f;
		}
		if (iVar114 != 0 && unk_0x3E932F23D327A136(iVar114, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_130 = unk_0xE082EE0DCA9466C4(iVar114, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_130 = -1;
		}
		if (iVar115 != 0 && unk_0x3E932F23D327A136(iVar115, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_131 = unk_0x73F91AA610E60211(iVar115, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_131 = 0f;
		}
		if (iVar94 != 0 && unk_0x3E932F23D327A136(iVar94, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_125 = unk_0xE082EE0DCA9466C4(iVar94, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_125 = 0;
		}
		if (iVar95 != 0 && unk_0x3E932F23D327A136(iVar95, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_75 = unk_0xE082EE0DCA9466C4(iVar95, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_75 = 0;
		}
		if (iVar96 != 0 && unk_0x3E932F23D327A136(iVar96, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_76 = unk_0xE082EE0DCA9466C4(iVar96, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_76 = 0;
		}
		if (iVar97 != 0 && unk_0x3E932F23D327A136(iVar97, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_77 = unk_0xE082EE0DCA9466C4(iVar97, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_77 = 0;
		}
		if (iVar98 != 0 && unk_0x3E932F23D327A136(iVar98, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_78 = unk_0xE082EE0DCA9466C4(iVar98, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_78 = -1;
		}
		if (iVar99 != 0 && unk_0x3E932F23D327A136(iVar99, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_79 = unk_0xE082EE0DCA9466C4(iVar99, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_79 = -1;
		}
		if (iVar110 != 0 && unk_0x3E932F23D327A136(iVar110, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_133 = unk_0xE082EE0DCA9466C4(iVar110, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_133 = 0;
		}
		if (iVar111 != 0 && unk_0x3E932F23D327A136(iVar111, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_68 = unk_0xE082EE0DCA9466C4(iVar111, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_68 = 0;
		}
		if (iVar102 != 0 && unk_0x3E932F23D327A136(iVar102, iVar0) == 3)
		{
			Global_4456448.f_70744[iVar0].f_134 = unk_0x73F91AA610E60211(iVar102, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_134 = 0f;
		}
		if (iVar103 != 0 && unk_0x3E932F23D327A136(iVar103, iVar0) == 3)
		{
			Global_4456448.f_70744[iVar0].f_135 = unk_0x73F91AA610E60211(iVar103, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_135 = 0f;
		}
		if (iVar104 != 0 && unk_0x3E932F23D327A136(iVar104, iVar0) == 3)
		{
			Global_4456448.f_70744[iVar0].f_136 = unk_0x73F91AA610E60211(iVar104, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_136 = 0f;
		}
		if (iVar105 != 0 && unk_0x3E932F23D327A136(iVar105, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_137 = unk_0xE082EE0DCA9466C4(iVar105, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_137 = -1;
		}
		if (iVar106 != 0 && unk_0x3E932F23D327A136(iVar106, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_139 = unk_0xE082EE0DCA9466C4(iVar106, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_139 = -1;
		}
		if (iVar107 != 0 && unk_0x3E932F23D327A136(iVar107, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_140 = unk_0xE082EE0DCA9466C4(iVar107, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_140 = -1;
		}
		if (iVar108 != 0 && unk_0x3E932F23D327A136(iVar108, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_141 = unk_0xE082EE0DCA9466C4(iVar108, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_141 = -1;
		}
		if (iVar109 != 0 && unk_0x3E932F23D327A136(iVar109, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_142 = unk_0xE082EE0DCA9466C4(iVar109, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_142 = 0;
		}
		if (iVar117 != 0 && unk_0x3E932F23D327A136(iVar117, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_143 = unk_0xE082EE0DCA9466C4(iVar117, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_143 = 0;
		}
		if (iVar118 != 0 && unk_0x3E932F23D327A136(iVar118, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_144 = unk_0xE082EE0DCA9466C4(iVar118, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_144 = 0;
		}
		iVar2 = 0;
		while (iVar2 <= 19)
		{
			StringCopy(&sVar3, "1lwb", 8);
			StringIntConCat(&sVar3, iVar2, 8);
			func_199(&sVar3, &(Global_4456448.f_70744[iVar0].f_145[iVar2]), &iVar5, &(uVar119[iVar2]), iVar0, 0, 0);
			iVar2++;
		}
		if (iVar140 != 0 && unk_0x3E932F23D327A136(iVar140, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_166 = unk_0xE082EE0DCA9466C4(iVar140, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_166 = 0;
		}
		if (iVar141 != 0 && unk_0x3E932F23D327A136(iVar141, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_167 = unk_0xE082EE0DCA9466C4(iVar141, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_167 = -1;
		}
		if (iVar142 != 0 && unk_0x3E932F23D327A136(iVar142, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_168 = unk_0xE082EE0DCA9466C4(iVar142, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_168 = -1;
		}
		if (iVar143 != 0 && unk_0x3E932F23D327A136(iVar143, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_169 = unk_0xE082EE0DCA9466C4(iVar143, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_169 = -1;
		}
		if (iVar144 != 0 && unk_0x3E932F23D327A136(iVar144, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_170 = unk_0xE082EE0DCA9466C4(iVar144, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_170 = 0;
		}
		if (iVar116 != 0 && unk_0x3E932F23D327A136(iVar116, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_132 = unk_0xE082EE0DCA9466C4(iVar116, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_132 = 0;
		}
		if (((iVar90 != 0 && unk_0x3E932F23D327A136(iVar90, iVar0) == 5) && unk_0x3E932F23D327A136(iVar91, iVar0) == 5) && unk_0x3E932F23D327A136(iVar92, iVar0) == 3)
		{
			Global_4456448.f_70744[iVar0].f_43 = { unk_0x6403E33233A20F75(iVar90, iVar0) };
			Global_4456448.f_70744[iVar0].f_46 = { unk_0x6403E33233A20F75(iVar91, iVar0) };
			Global_4456448.f_70744[iVar0].f_49 = unk_0x73F91AA610E60211(iVar92, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_43 = { 0f, 0f, 0f };
			Global_4456448.f_70744[iVar0].f_46 = { 0f, 0f, 0f };
			Global_4456448.f_70744[iVar0].f_49 = 1f;
		}
		if (iVar145 != 0 && unk_0x3E932F23D327A136(iVar145, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_117.f_6 = unk_0xE082EE0DCA9466C4(iVar145, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_117.f_6 = -1;
		}
		if (iVar146 != 0 && unk_0x3E932F23D327A136(iVar146, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_117.f_7 = unk_0xE082EE0DCA9466C4(iVar146, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_117.f_7 = -1;
		}
		if (iVar147 != 0 && unk_0x3E932F23D327A136(iVar147, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_117.f_2 = unk_0xE082EE0DCA9466C4(iVar147, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_117.f_2 = -1;
		}
		if (iVar148 != 0 && unk_0x3E932F23D327A136(iVar148, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_117 = unk_0xE082EE0DCA9466C4(iVar148, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_117 = -1;
		}
		if (iVar149 != 0 && unk_0x3E932F23D327A136(iVar149, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_117.f_1 = unk_0xE082EE0DCA9466C4(iVar149, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_117.f_1 = -1;
		}
		if (iVar150 != 0 && unk_0x3E932F23D327A136(iVar150, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_117.f_3 = unk_0xE082EE0DCA9466C4(iVar150, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_117.f_3 = -1;
		}
		if (iVar151 != 0 && unk_0x3E932F23D327A136(iVar151, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_117.f_4 = unk_0xE082EE0DCA9466C4(iVar151, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_117.f_4 = -1;
		}
		if (iVar152 != 0 && unk_0x3E932F23D327A136(iVar152, iVar0) == 2)
		{
			Global_4456448.f_70744[iVar0].f_117.f_5 = unk_0xE082EE0DCA9466C4(iVar152, iVar0);
		}
		else
		{
			Global_4456448.f_70744[iVar0].f_117.f_5 = -1;
		}
		iVar201 = 0;
		while (iVar201 <= 8)
		{
			if (iVar153[iVar201] != 0 && unk_0x3E932F23D327A136(iVar153[iVar201], iVar0) == 5)
			{
				Global_4456448.f_70744[iVar0].f_171[iVar201] = { unk_0x6403E33233A20F75(iVar153[iVar201], iVar0) };
			}
			else
			{
				Global_4456448.f_70744[iVar0].f_171[iVar201] = { 0f, 0f, 0f };
			}
			if (iVar163[iVar201] != 0 && unk_0x3E932F23D327A136(iVar163[iVar201], iVar0) == 3)
			{
				Global_4456448.f_70744[iVar0].f_199[iVar201] = unk_0x73F91AA610E60211(iVar163[iVar201], iVar0);
			}
			else
			{
				Global_4456448.f_70744[iVar0].f_199[iVar201] = 0f;
			}
			iVar201++;
		}
		func_199("lcPrRq", &(Global_4456448.f_70744[iVar0].f_209), &iVar5, &iVar173, iVar0, -1, -2340845);
		func_191("alvgot", &(Global_4456448.f_70744[iVar0].f_210), 1, &iVar5, &uVar174, iVar0, 0, -2340845);
		iVar0++;
	}
}

void func_268(int iParam0)
{
	if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, "cover") == 6)
	{
		iVar1 = unk_0x6D954AF55D3925DB(iParam0, "cover");
		Global_4456448.f_91817 = unk_0x8A83B52A17A321DB(iVar1, "no");
		iVar2 = unk_0x7619952D26DF7783(iVar1, "loc");
		iVar3 = unk_0x7619952D26DF7783(iVar1, "dir");
		iVar4 = unk_0x7619952D26DF7783(iVar1, "use");
		iVar5 = unk_0x7619952D26DF7783(iVar1, "high");
		iVar6 = unk_0x7619952D26DF7783(iVar1, "arc");
		iVar0 = 0;
		while (iVar0 <= (Global_4456448.f_91817 - 1))
		{
			Global_4456448.f_91818[iVar0] = { unk_0x6403E33233A20F75(iVar2, iVar0) };
			Global_4456448.f_91818[iVar0].f_3 = unk_0x73F91AA610E60211(iVar3, iVar0);
			Global_4456448.f_91818[iVar0].f_4 = unk_0xE082EE0DCA9466C4(iVar4, iVar0);
			Global_4456448.f_91818[iVar0].f_5 = unk_0xE082EE0DCA9466C4(iVar5, iVar0);
			Global_4456448.f_91818[iVar0].f_6 = unk_0xE082EE0DCA9466C4(iVar6, iVar0);
			iVar0++;
		}
	}
}

void func_269(int iParam0)
{
	iVar2 = unk_0x6D954AF55D3925DB(iParam0, "door");
	iVar3 = unk_0x7619952D26DF7783(iVar2, "loc");
	iVar4 = unk_0x7619952D26DF7783(iVar2, "model");
	uVar8 = 1;
	func_249("no", &(Global_4456448.f_90439), &iVar2, 0, -2340845);
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_90439 - 1))
	{
		Global_4456448.f_90440[iVar0] = { unk_0x6403E33233A20F75(iVar3, iVar0) };
		iVar1 = unk_0xE082EE0DCA9466C4(iVar4, iVar0);
		Global_4456448.f_90440[iVar0].f_3 = iVar1;
		func_199("dbs", &(Global_4456448.f_90440[iVar0].f_28), &iVar2, &iVar5, iVar0, 0, 0);
		func_199("dcoid", &(Global_4456448.f_90440[iVar0].f_30), &iVar2, &iVar6, iVar0, -1, -1);
		func_199("dle", &(Global_4456448.f_90440[iVar0].f_31), &iVar2, &iVar7, iVar0, -1, -1);
		iVar10 = 0;
		while (iVar10 <= 1)
		{
			func_271(iVar2, &(Global_4456448.f_90440[iVar0].f_6[iVar10]), iVar0, iVar10);
			iVar10++;
		}
		func_191("alvdoo", &(Global_4456448.f_90440[iVar0].f_41), 1, &iVar2, &uVar8, iVar0, 0, -2340845);
		func_270(iVar2, &(Global_4456448.f_90440[iVar0].f_25), iVar0);
		iVar0++;
	}
}

void func_270(int iParam0, var uParam1, int iParam2)
{
	StringCopy(&vVar3, "csTeam", 24);
	func_199(&vVar3, uParam1, &iParam0, &vVar0, iParam2, 0, -2340845);
	StringCopy(&vVar3, "csRuleBS", 24);
	func_199(&vVar3, &(uParam1->f_1), &iParam0, &(vVar0.f_1), iParam2, 0, -2340845);
	StringCopy(&vVar3, "csBS", 24);
	func_199(&vVar3, &(uParam1->f_2), &iParam0, &(vVar0.f_2), iParam2, 0, -2340845);
}

void func_271(int iParam0, var uParam1, int iParam2, int iParam3)
{
	StringCopy(&vVar7, "cnBS", 24);
	StringConCat(&vVar7, "_C", 24);
	StringIntConCat(&vVar7, iParam3, 24);
	func_199(&vVar7, uParam1, &iParam0, &Var0, iParam2, 0, -2340845);
	StringCopy(&vVar7, "opnRat", 24);
	StringConCat(&vVar7, "_C", 24);
	StringIntConCat(&vVar7, iParam3, 24);
	func_192(&vVar7, &(uParam1->f_2), &iParam0, &(Var0.f_1), iParam2, 0f, -904994889);
	StringCopy(&vVar7, "lckTy", 24);
	StringConCat(&vVar7, "_C", 24);
	StringIntConCat(&vVar7, iParam3, 24);
	func_199(&vVar7, &(uParam1->f_1), &iParam0, &(Var0.f_2), iParam2, 0, -2340845);
	StringCopy(&vVar7, "autoRt", 24);
	StringConCat(&vVar7, "_C", 24);
	StringIntConCat(&vVar7, iParam3, 24);
	func_192(&vVar7, &(uParam1->f_3), &iParam0, &(Var0.f_3), iParam2, -1f, -904994889);
	StringCopy(&vVar7, "autoDs", 24);
	StringConCat(&vVar7, "_C", 24);
	StringIntConCat(&vVar7, iParam3, 24);
	func_192(&vVar7, &(uParam1->f_4), &iParam0, &(Var0.f_4), iParam2, -1f, -904994889);
	StringCopy(&vVar7, "dLkTy", 24);
	StringConCat(&vVar7, "_C", 24);
	StringIntConCat(&vVar7, iParam3, 24);
	func_199(&vVar7, &uVar13, &iParam0, &(Var0.f_5), iParam2, 0, -2340845);
	uParam1->f_5 = uVar13;
	StringCopy(&vVar7, "dLkVc", 24);
	StringConCat(&vVar7, "_C", 24);
	StringIntConCat(&vVar7, iParam3, 24);
	func_237(&vVar7, &(uParam1->f_6), &iParam0, &(Var0.f_6), iParam2, 0f, 0f, 0f, 0f, 0f, 0f);
}

void func_272(int iParam0)
{
	iVar2 = unk_0x6D954AF55D3925DB(iParam0, "door");
	Global_4456448.f_90439 = unk_0x8A83B52A17A321DB(iVar2, "no");
	iVar3 = unk_0x7619952D26DF7783(iVar2, "loc");
	iVar4 = unk_0x7619952D26DF7783(iVar2, "fopen");
	iVar5 = unk_0x7619952D26DF7783(iVar2, "model");
	iVar6 = unk_0x7619952D26DF7783(iVar2, "lock");
	iVar7 = unk_0x7619952D26DF7783(iVar2, "swing");
	iVar8 = unk_0x7619952D26DF7783(iVar2, "udrle");
	iVar9 = unk_0x7619952D26DF7783(iVar2, "udtem");
	iVar10 = unk_0x7619952D26DF7783(iVar2, "udrat");
	iVar11 = unk_0x7619952D26DF7783(iVar2, "swingu");
	iVar12 = unk_0x7619952D26DF7783(iVar2, "audst");
	iVar13 = unk_0x7619952D26DF7783(iVar2, "aurt");
	iVar14 = unk_0x7619952D26DF7783(iVar2, "uaudst");
	iVar15 = unk_0x7619952D26DF7783(iVar2, "uaurt");
	iVar16 = unk_0x7619952D26DF7783(iVar2, "lfp");
	iVar17 = unk_0x7619952D26DF7783(iVar2, "dtime");
	iVar18 = unk_0x7619952D26DF7783(iVar2, "mid");
	iVar19 = unk_0x7619952D26DF7783(iVar2, "dbs");
	iVar20 = unk_0x7619952D26DF7783(iVar2, "dcoid");
	iVar21 = unk_0x7619952D26DF7783(iVar2, "fcz");
	iVar22 = unk_0x7619952D26DF7783(iVar2, "foz");
	iVar23 = unk_0x7619952D26DF7783(iVar2, "org");
	iVar24 = unk_0x7619952D26DF7783(iVar2, "dle");
	iVar25 = unk_0x7619952D26DF7783(iVar2, "dird");
	iVar26 = unk_0x7619952D26DF7783(iVar2, "dirdv");
	iVar27 = unk_0x7619952D26DF7783(iVar2, "dirud");
	iVar28 = unk_0x7619952D26DF7783(iVar2, "dirduv");
	iVar29 = unk_0x7619952D26DF7783(iVar2, "ORNLO");
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_90439 - 1))
	{
		if (iVar0 >= 32)
		{
		}
		else
		{
			Global_4456448.f_90440[iVar0] = { unk_0x6403E33233A20F75(iVar3, iVar0) };
			Global_4456448.f_90440[iVar0].f_6[0].f_2 = unk_0x73F91AA610E60211(iVar4, iVar0);
			Global_4456448.f_90440[iVar0].f_36 = unk_0x6A09C1EE250C8CE7(iVar6, iVar0);
			Global_4456448.f_90440[iVar0].f_37 = unk_0x6A09C1EE250C8CE7(iVar7, iVar0);
			Global_4456448.f_90440[iVar0].f_32 = unk_0xE082EE0DCA9466C4(iVar8, iVar0);
			Global_4456448.f_90440[iVar0].f_33 = unk_0xE082EE0DCA9466C4(iVar9, iVar0);
			Global_4456448.f_90440[iVar0].f_6[1].f_2 = unk_0x73F91AA610E60211(iVar10, iVar0);
			Global_4456448.f_90440[iVar0].f_34 = unk_0x6A09C1EE250C8CE7(iVar11, iVar0);
			Global_4456448.f_90440[iVar0].f_6[0].f_3 = unk_0x73F91AA610E60211(iVar13, iVar0);
			Global_4456448.f_90440[iVar0].f_6[0].f_4 = unk_0x73F91AA610E60211(iVar12, iVar0);
			Global_4456448.f_90440[iVar0].f_6[1].f_3 = unk_0x73F91AA610E60211(iVar15, iVar0);
			Global_4456448.f_90440[iVar0].f_6[1].f_4 = unk_0x73F91AA610E60211(iVar14, iVar0);
			Global_4456448.f_90440[iVar0].f_39 = unk_0x6A09C1EE250C8CE7(iVar16, iVar0);
			Global_4456448.f_90440[iVar0].f_28 = unk_0xE082EE0DCA9466C4(iVar19, iVar0);
			Global_4456448.f_90440[iVar0].f_30 = unk_0xE082EE0DCA9466C4(iVar20, iVar0);
			iVar1 = unk_0xE082EE0DCA9466C4(iVar5, iVar0);
			Global_4456448.f_90440[iVar0].f_3 = iVar1;
			if (iVar17 != 0 && unk_0x3E932F23D327A136(iVar17, iVar0) == 2)
			{
				Global_4456448.f_90440[iVar0].f_38 = unk_0xE082EE0DCA9466C4(iVar17, iVar0);
			}
			else
			{
				Global_4456448.f_90440[iVar0].f_38 = 0;
			}
			Global_4456448.f_90440[iVar0].f_35 = unk_0x6A09C1EE250C8CE7(iVar18, iVar0);
			if (iVar21 != 0 && unk_0x3E932F23D327A136(iVar21, iVar0) == 3)
			{
				Global_4456448.f_90440[iVar0].f_4 = unk_0x73F91AA610E60211(iVar21, iVar0);
			}
			else
			{
				Global_4456448.f_90440[iVar0].f_4 = 999999f;
			}
			if (iVar22 != 0 && unk_0x3E932F23D327A136(iVar22, iVar0) == 3)
			{
				Global_4456448.f_90440[iVar0].f_5 = unk_0x73F91AA610E60211(iVar22, iVar0);
			}
			else
			{
				Global_4456448.f_90440[iVar0].f_5 = 999999f;
			}
			if (iVar23 != 0 && unk_0x3E932F23D327A136(iVar23, iVar0) == 3)
			{
				Global_4456448.f_90440[iVar0].f_29 = unk_0x73F91AA610E60211(iVar23, iVar0);
			}
			else
			{
				Global_4456448.f_90440[iVar0].f_29 = 0f;
			}
			if (iVar25 != 0 && unk_0x3E932F23D327A136(iVar25, iVar0) == 2)
			{
				Global_4456448.f_90440[iVar0].f_6[0].f_5 = unk_0xE082EE0DCA9466C4(iVar25, iVar0);
			}
			else
			{
				Global_4456448.f_90440[iVar0].f_6[0].f_5 = 0;
			}
			if (iVar26 != 0 && unk_0x3E932F23D327A136(iVar26, iVar0) == 5)
			{
				Global_4456448.f_90440[iVar0].f_6[0].f_6 = { unk_0x6403E33233A20F75(iVar26, iVar0) };
			}
			else
			{
				Global_4456448.f_90440[iVar0].f_6[0].f_6 = { 0f, 0f, 0f };
			}
			if (iVar27 != 0 && unk_0x3E932F23D327A136(iVar27, iVar0) == 2)
			{
				Global_4456448.f_90440[iVar0].f_6[1].f_5 = unk_0xE082EE0DCA9466C4(iVar27, iVar0);
			}
			else
			{
				Global_4456448.f_90440[iVar0].f_6[1].f_5 = 3;
			}
			if (iVar28 != 0 && unk_0x3E932F23D327A136(iVar28, iVar0) == 5)
			{
				Global_4456448.f_90440[iVar0].f_6[1].f_6 = { unk_0x6403E33233A20F75(iVar28, iVar0) };
			}
			else
			{
				Global_4456448.f_90440[iVar0].f_6[1].f_6 = { 0f, 0f, 0f };
			}
			if (iVar29 != 0 && unk_0x3E932F23D327A136(iVar29, iVar0) == 3)
			{
				Global_4456448.f_90440[iVar0].f_40 = unk_0x73F91AA610E60211(iVar29, iVar0);
			}
			else
			{
				Global_4456448.f_90440[iVar0].f_40 = 0f;
			}
			if (iVar24 != 0 && unk_0x3E932F23D327A136(iVar24, iVar0) == 2)
			{
				Global_4456448.f_90440[iVar0].f_31 = unk_0xE082EE0DCA9466C4(iVar24, iVar0);
			}
			else
			{
				Global_4456448.f_90440[iVar0].f_31 = -1;
			}
			iVar0++;
		}
	}
}

int func_273()
{
	if (func_274(2))
	{
		return 0;
	}
	return 1;
}

bool func_274(int iParam0)
{
	return Global_4456448.f_232884 >= iParam0;
}

void func_275(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_206 - 1))
	{
		iVar6 = 0;
		iVar7 = 0;
		iVar8 = 0;
		iVar9 = 0;
		iVar10 = 0;
		iVar11 = 0;
		iVar12 = 0;
		iVar13 = 0;
		iVar14 = 0;
		iVar15 = 0;
		iVar16 = 0;
		iVar17 = 0;
		iVar18 = 0;
		iVar19 = 0;
		iVar20 = 0;
		iVar21 = 0;
		iVar22 = 0;
		iVar23 = 0;
		if (iVar0 < 4)
		{
			StringCopy(&Var2, "gbnum", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar7 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "gbngn", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar8 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "gblgn", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar9 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "gbcol", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar10 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "gbdel", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar11 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "gbmax", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar12 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "gbngm", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar13 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "gblgm", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar14 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "gbvhl", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar15 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "gbaie", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar6 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "gacc", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar16 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "gfld", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar17 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "gbat", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar18 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "gbv1", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar19 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "gbv2", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar20 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "gbaw", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar21 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "gbfnr", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar22 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			iVar1 = 0;
			while (iVar1 <= (Global_4456448.f_271[iVar0].f_59 - 1))
			{
				if (!func_276(&iVar7, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5529[iVar1] = unk_0xE082EE0DCA9466C4(iVar7, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5529[iVar1] = 0;
				}
				if (!func_276(&iVar8, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5813[iVar1] = unk_0xE082EE0DCA9466C4(iVar8, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5813[iVar1] = 0;
				}
				if (!func_276(&iVar9, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5849[iVar1] = unk_0xE082EE0DCA9466C4(iVar9, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5849[iVar1] = 0;
				}
				if (!func_276(&iVar10, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5565[iVar1] = unk_0xE082EE0DCA9466C4(iVar10, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5565[iVar1] = 0;
				}
				if (!func_276(&iVar11, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5547[iVar1] = unk_0xE082EE0DCA9466C4(iVar11, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5547[iVar1] = 0;
				}
				if (!func_276(&iVar12, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5705[iVar1] = unk_0xE082EE0DCA9466C4(iVar12, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5705[iVar1] = 0;
				}
				if (!func_276(&iVar13, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5831[iVar1] = unk_0xE082EE0DCA9466C4(iVar13, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5831[iVar1] = 0;
				}
				if (!func_276(&iVar14, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5867[iVar1] = unk_0xE082EE0DCA9466C4(iVar14, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5867[iVar1] = 0;
				}
				if (!func_276(&iVar6, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5795[iVar1] = unk_0xE082EE0DCA9466C4(iVar6, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5795[iVar1] = 0;
				}
				if (!func_276(&iVar15, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5723[iVar1] = unk_0xE082EE0DCA9466C4(iVar15, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5723[iVar1] = 100;
				}
				if (!func_276(&iVar16, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5759[iVar1] = unk_0xE082EE0DCA9466C4(iVar16, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5759[iVar1] = 0;
				}
				if (!func_276(&iVar17, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5777[iVar1] = unk_0xE082EE0DCA9466C4(iVar17, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5777[iVar1] = 0;
				}
				if (!func_276(&iVar18, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5741[iVar1] = unk_0xE082EE0DCA9466C4(iVar18, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5741[iVar1] = 0;
				}
				if (!func_276(&iVar19, 5, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5583[iVar1] = { unk_0x6403E33233A20F75(iVar19, iVar1) };
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5583[iVar1] = { 0f, 0f, 0f };
				}
				if (!func_276(&iVar20, 5, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5635[iVar1] = { unk_0x6403E33233A20F75(iVar20, iVar1) };
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5635[iVar1] = { 0f, 0f, 0f };
				}
				if (!func_276(&iVar21, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5687[iVar1] = unk_0x73F91AA610E60211(iVar21, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5687[iVar1] = 0f;
				}
				if (!func_276(&iVar22, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5885[iVar1] = unk_0x73F91AA610E60211(iVar22, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5885[iVar1] = -1f;
				}
				StringCopy(&Var2, "exprc", 16);
				StringIntConCat(&Var2, iVar0, 16);
				func_192(&Var2, &(Global_4456448.f_271[iVar0].f_1231[iVar1]), iParam0, &iVar23, iVar1, 0f, -904994889);
				iVar1++;
			}
		}
		iVar0++;
	}
}

int func_276(int iParam0, int iParam1, int iParam2)
{
	if (*iParam0 != 0)
	{
		if (unk_0x3E932F23D327A136(*iParam0, iParam2) == iParam1)
		{
			return 0;
		}
	}
	return 1;
}

void func_277(int iParam0)
{
	iVar173 = 0;
	while (iVar173 <= (Global_4456448.f_206 - 1))
	{
		if (iVar173 < 4)
		{
			iVar174 = 0;
			while (iVar174 <= 31)
			{
				StringCopy(&cVar176, "irlw", 16);
				StringIntConCat(&cVar176, iVar173, 16);
				StringConCat(&cVar176, "-", 16);
				StringIntConCat(&cVar176, iVar174, 16);
				iVar0[iVar174] = 0;
				iVar0[iVar174] = unk_0x7619952D26DF7783(*iParam0, &cVar176);
				iVar174++;
			}
			iVar174 = 0;
			while (iVar174 <= 79)
			{
				StringCopy(&cVar176, "pelw", 16);
				StringIntConCat(&cVar176, iVar173, 16);
				StringConCat(&cVar176, "-", 16);
				StringIntConCat(&cVar176, iVar174, 16);
				iVar33[iVar174] = 0;
				iVar33[iVar174] = unk_0x7619952D26DF7783(*iParam0, &cVar176);
				iVar174++;
			}
			iVar174 = 0;
			while (iVar174 <= 31)
			{
				StringCopy(&cVar176, "oblw", 16);
				StringIntConCat(&cVar176, iVar173, 16);
				StringConCat(&cVar176, "-", 16);
				StringIntConCat(&cVar176, iVar174, 16);
				iVar114[iVar174] = 0;
				iVar114[iVar174] = unk_0x7619952D26DF7783(*iParam0, &cVar176);
				iVar174++;
			}
			iVar174 = 0;
			while (iVar174 <= 19)
			{
				StringCopy(&cVar176, "lolw", 16);
				StringIntConCat(&cVar176, iVar173, 16);
				StringConCat(&cVar176, "-", 16);
				StringIntConCat(&cVar176, iVar174, 16);
				iVar147[iVar174] = 0;
				iVar147[iVar174] = unk_0x7619952D26DF7783(*iParam0, &cVar176);
				iVar174++;
			}
			iVar174 = 0;
			while (iVar174 <= 3)
			{
				StringCopy(&cVar176, "rcbs", 16);
				StringIntConCat(&cVar176, iVar173, 16);
				StringConCat(&cVar176, "-", 16);
				StringIntConCat(&cVar176, iVar174, 16);
				iVar168[iVar174] = 0;
				iVar168[iVar174] = unk_0x7619952D26DF7783(*iParam0, &cVar176);
				iVar174++;
			}
			iVar175 = 0;
			while (iVar175 <= (Global_4456448.f_271[iVar173].f_59 - 1))
			{
				iVar174 = 0;
				while (iVar174 <= 31)
				{
					if (iVar0[iVar174] != 0)
					{
						Global_4456448.f_271[iVar173].f_6689[iVar175][iVar174] = unk_0xE082EE0DCA9466C4(iVar0[iVar174], iVar175);
					}
					else
					{
						Global_4456448.f_271[iVar173].f_6689[iVar175][iVar174] = -1;
					}
					iVar174++;
				}
				iVar174 = 0;
				while (iVar174 <= 79)
				{
					if (iVar33[iVar174] != 0)
					{
						Global_4456448.f_271[iVar173].f_7251[iVar175][iVar174] = unk_0xE082EE0DCA9466C4(iVar33[iVar174], iVar175);
					}
					else
					{
						Global_4456448.f_271[iVar173].f_7251[iVar175][iVar174] = -1;
					}
					iVar174++;
				}
				iVar174 = 0;
				while (iVar174 <= 31)
				{
					if (iVar114[iVar174] != 0)
					{
						Global_4456448.f_271[iVar173].f_8629[iVar175][iVar174] = unk_0xE082EE0DCA9466C4(iVar114[iVar174], iVar175);
					}
					else
					{
						Global_4456448.f_271[iVar173].f_8629[iVar175][iVar174] = -1;
					}
					iVar174++;
				}
				iVar174 = 0;
				while (iVar174 <= 19)
				{
					if (iVar147[iVar174] != 0)
					{
						Global_4456448.f_271[iVar173].f_9191[iVar175][iVar174] = unk_0xE082EE0DCA9466C4(iVar147[iVar174], iVar175);
					}
					else
					{
						Global_4456448.f_271[iVar173].f_9191[iVar175][iVar174] = -1;
					}
					iVar174++;
				}
				iVar174 = 0;
				while (iVar174 <= 3)
				{
					if (iVar168[iVar174] != 0)
					{
						Global_4456448.f_271[iVar173].f_6585[iVar175][iVar174] = unk_0xE082EE0DCA9466C4(iVar168[iVar174], iVar175);
					}
					else
					{
						Global_4456448.f_271[iVar173].f_6585[iVar175][iVar174] = 0;
					}
					iVar174++;
				}
				iVar175++;
			}
		}
		iVar173++;
	}
}

void func_278(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_206 - 1))
	{
		if (iVar0 < 4)
		{
			iVar6 = 0;
			iVar7 = 0;
			iVar8 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar14 = 0;
			StringCopy(&cVar2, "mcstr", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar6 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "mcsrm", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar7 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "mcmp", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar10 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "aumx", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar8 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "mpaumx", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar9 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "mpaumxscr", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar11 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "mpagrom", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar12 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "filtlh", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar13 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "txt2", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar14 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			iVar1 = 0;
			while (iVar1 <= (Global_4456448.f_271[iVar0].f_59 - 1))
			{
				if (!func_276(&iVar6, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6189[iVar1] = unk_0xE082EE0DCA9466C4(iVar6, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6189[iVar1] = 0;
				}
				if (!func_276(&iVar7, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6261[iVar1] = unk_0xE082EE0DCA9466C4(iVar7, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6261[iVar1] = -1;
				}
				if (!func_276(&iVar8, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6225[iVar1] = unk_0xE082EE0DCA9466C4(iVar8, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6225[iVar1] = 0;
				}
				if (!func_276(&iVar11, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6279[iVar1] = unk_0xE082EE0DCA9466C4(iVar11, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6279[iVar1] = 0;
				}
				if (!func_276(&iVar12, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6297[iVar1] = unk_0xE082EE0DCA9466C4(iVar12, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6297[iVar1] = 0;
				}
				if (!func_276(&iVar9, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6243[iVar1] = unk_0xE082EE0DCA9466C4(iVar9, iVar1);
				}
				else if (Global_4456448.f_271[iVar0].f_6225[iVar1] != 0 && unk_0xEAE0D21A50E6C7F4(Global_4456448.f_271[iVar0].f_6369[iVar1], 8))
				{
					Global_4456448.f_271[iVar0].f_6243[iVar1] = Global_4456448.f_271[iVar0].f_6225[iVar1];
					Global_4456448.f_271[iVar0].f_6225[iVar1] = 0;
					unk_0x0674E58A79778E99(&(Global_4456448.f_271[iVar0].f_6369[iVar1]), 8);
				}
				if (!func_276(&iVar10, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6207[iVar1] = unk_0xE082EE0DCA9466C4(iVar10, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6207[iVar1] = 0;
				}
				if (!func_276(&iVar13, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6315[iVar1] = unk_0xE082EE0DCA9466C4(iVar13, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6315[iVar1] = 0;
				}
				if (!func_276(&iVar14, 4, iVar1))
				{
					StringCopy(&(Global_4456448.f_271[iVar0].f_10342[iVar1]), unk_0x3E4982E6ACD879AE(iVar14, iVar1), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_271[iVar0].f_10342[iVar1]), "", 64);
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_279(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_206 - 1))
	{
		if (iVar0 < 4)
		{
			iVar6 = 0;
			iVar7 = 0;
			iVar8 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar14 = 0;
			iVar15 = 0;
			iVar16 = 0;
			iVar17 = 0;
			iVar18 = 0;
			iVar19 = 0;
			iVar20 = 0;
			iVar21 = 0;
			StringCopy(&cVar2, "airset", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar6 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "airsid", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar7 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "airstv", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar8 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "airsod", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar9 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "airsodx", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar10 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "airssp", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar11 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "airola", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar12 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "airoha", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar13 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "airsr", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar14 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "airsft", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar15 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "airtyp", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar16 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "ivmst", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar17 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "ivmsa", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar18 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "ivmsac", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar19 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "ivmsb", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar20 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "ivmse", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar21 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			iVar1 = 0;
			while (iVar1 <= (Global_4456448.f_271[iVar0].f_59 - 1))
			{
				if (!func_276(&iVar6, 2, iVar1) && !func_276(&iVar7, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_14021[iVar1] = unk_0xE082EE0DCA9466C4(iVar6, iVar1);
					Global_4456448.f_271[iVar0].f_14021[iVar1].f_1 = unk_0xE082EE0DCA9466C4(iVar7, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_14021[iVar1] = 0;
					Global_4456448.f_271[iVar0].f_14021[iVar1].f_1 = -1;
				}
				if (!func_276(&iVar8, 5, iVar1))
				{
					Global_4456448.f_271[iVar0].f_14021[iVar1].f_2 = { unk_0x6403E33233A20F75(iVar8, iVar1) };
				}
				else
				{
					Global_4456448.f_271[iVar0].f_14021[iVar1].f_2 = { 0f, 0f, 0f };
				}
				if (!func_276(&iVar9, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_14021[iVar1].f_5 = unk_0xE082EE0DCA9466C4(iVar9, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_14021[iVar1].f_5 = 0;
				}
				if (!func_276(&iVar10, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_14021[iVar1].f_6 = unk_0xE082EE0DCA9466C4(iVar10, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_14021[iVar1].f_6 = 0;
				}
				if (!func_276(&iVar11, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_14021[iVar1].f_7 = unk_0xE082EE0DCA9466C4(iVar11, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_14021[iVar1].f_7 = 25;
				}
				if (!func_276(&iVar12, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_14021[iVar1].f_8 = unk_0xE082EE0DCA9466C4(iVar12, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_14021[iVar1].f_8 = 25;
				}
				if (!func_276(&iVar13, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_14021[iVar1].f_9 = unk_0xE082EE0DCA9466C4(iVar13, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_14021[iVar1].f_9 = 45;
				}
				if (!func_276(&iVar14, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_14021[iVar1].f_10 = unk_0xE082EE0DCA9466C4(iVar14, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_14021[iVar1].f_10 = 0;
				}
				if (!func_276(&iVar15, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_14021[iVar1].f_11 = unk_0xE082EE0DCA9466C4(iVar15, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_14021[iVar1].f_11 = 3500;
				}
				if (!func_276(&iVar16, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_14021[iVar1].f_12 = unk_0xE082EE0DCA9466C4(iVar16, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_14021[iVar1].f_12 = 0;
				}
				if (!func_276(&iVar17, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13823[iVar1] = unk_0xE082EE0DCA9466C4(iVar17, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13823[iVar1] = 0;
				}
				if (!func_276(&iVar18, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13841[iVar1] = unk_0xE082EE0DCA9466C4(iVar18, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13841[iVar1] = 0;
				}
				if (!func_276(&iVar19, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13859[iVar1] = unk_0xE082EE0DCA9466C4(iVar19, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13859[iVar1] = 0;
				}
				if (!func_276(&iVar20, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13877[iVar1] = unk_0xE082EE0DCA9466C4(iVar20, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13877[iVar1] = 0;
				}
				if (!func_276(&iVar21, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13895[iVar1] = unk_0xE082EE0DCA9466C4(iVar21, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13895[iVar1] = 0;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_280(int iParam0)
{
	if (func_128())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_206 - 1))
	{
		if (iVar0 < 4)
		{
			iVar31 = 0;
			iVar32 = 0;
			iVar33 = 0;
			iVar34 = 0;
			iVar35 = 0;
			iVar36 = 0;
			iVar37 = 0;
			iVar38 = 0;
			iVar39 = 0;
			iVar40 = 0;
			iVar41 = 0;
			iVar42 = 0;
			iVar43 = 0;
			iVar44 = 0;
			iVar45 = 0;
			iVar46 = 0;
			iVar47 = 0;
			iVar48 = 0;
			iVar49 = 0;
			iVar50 = 0;
			iVar51 = 0;
			iVar52 = 0;
			iVar53 = 0;
			iVar54 = 0;
			iVar55 = 0;
			StringCopy(&Var2, "irbs", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar31 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "irbs2", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar32 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "irbs3", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar33 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "irbs4", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar34 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "irbs5", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar35 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "irbs6", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar36 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "irbs7", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar37 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "irbs8", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar38 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "irbs9", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar39 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "irbs10", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar40 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "irbs11", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar41 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "irbs12", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar42 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "irbs13", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar43 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "irbs14", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar44 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "irlpst", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar45 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "iroamtr", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar46 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "bmmxh", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar48 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "bmspm", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar49 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "bmhrgn", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar54 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "bmsjd", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar50 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "bmhok", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar51 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "bmstd", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar52 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "bmmph", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar53 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "bmmdm", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar55 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			iVar56 = 0;
			while (iVar56 <= 19)
			{
				StringCopy(&Var2, "hlm", 16);
				StringIntConCat(&Var2, iVar0, 16);
				StringIntConCat(&Var2, iVar56, 16);
				iVar6[iVar56] = 0;
				iVar6[iVar56] = unk_0x7619952D26DF7783(*iParam0, &Var2);
				iVar56++;
			}
			iVar57 = 0;
			iVar57 = 0;
			while (iVar57 <= 2)
			{
				StringCopy(&Var2, "hppp", 16);
				StringIntConCat(&Var2, iVar0, 16);
				StringIntConCat(&Var2, iVar57, 16);
				iVar27[iVar57] = 0;
				iVar27[iVar57] = unk_0x7619952D26DF7783(*iParam0, &Var2);
				iVar57++;
			}
			iVar1 = 0;
			while (iVar1 <= (Global_4456448.f_271[iVar0].f_59 - 1))
			{
				if (!func_276(&iVar31, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6333[iVar1] = unk_0xE082EE0DCA9466C4(iVar31, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6333[iVar1] = 0;
				}
				if (!func_276(&iVar32, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6351[iVar1] = unk_0xE082EE0DCA9466C4(iVar32, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6351[iVar1] = 0;
				}
				if (!func_276(&iVar33, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6369[iVar1] = unk_0xE082EE0DCA9466C4(iVar33, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6369[iVar1] = 0;
				}
				if (!func_276(&iVar34, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6387[iVar1] = unk_0xE082EE0DCA9466C4(iVar34, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6387[iVar1] = 0;
				}
				if (!func_276(&iVar35, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6405[iVar1] = unk_0xE082EE0DCA9466C4(iVar35, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6405[iVar1] = 0;
				}
				if (!func_276(&iVar36, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6423[iVar1] = unk_0xE082EE0DCA9466C4(iVar36, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6423[iVar1] = 0;
				}
				if (!func_276(&iVar37, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6441[iVar1] = unk_0xE082EE0DCA9466C4(iVar37, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6441[iVar1] = 0;
				}
				if (!func_276(&iVar38, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6459[iVar1] = unk_0xE082EE0DCA9466C4(iVar38, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6459[iVar1] = 0;
				}
				if (!func_276(&iVar39, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6477[iVar1] = unk_0xE082EE0DCA9466C4(iVar39, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6477[iVar1] = 0;
				}
				if (!func_276(&iVar40, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6495[iVar1] = unk_0xE082EE0DCA9466C4(iVar40, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6495[iVar1] = 0;
				}
				if (!func_276(&iVar41, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6513[iVar1] = unk_0xE082EE0DCA9466C4(iVar41, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6513[iVar1] = 0;
				}
				if (!func_276(&iVar42, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6531[iVar1] = unk_0xE082EE0DCA9466C4(iVar42, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6531[iVar1] = 0;
				}
				if (!func_276(&iVar43, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6549[iVar1] = unk_0xE082EE0DCA9466C4(iVar43, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6549[iVar1] = 0;
				}
				if (!func_276(&iVar44, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6567[iVar1] = unk_0xE082EE0DCA9466C4(iVar44, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6567[iVar1] = 0;
				}
				if (!func_276(&iVar45, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6671[iVar1] = unk_0xE082EE0DCA9466C4(iVar45, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6671[iVar1] = -1;
				}
				if (!func_276(&iVar46, 4, iVar1))
				{
					StringCopy(&(Global_4456448.f_271[iVar0].f_14403[iVar1]), unk_0x3E4982E6ACD879AE(iVar46, iVar1), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_271[iVar0].f_14403[iVar1]), "", 64);
				}
				StringCopy(&Var2, "icsrln", 16);
				StringIntConCat(&Var2, iVar0, 16);
				StringCopy(&(Global_4456448.f_271[iVar0].f_14694[iVar1]), func_233(&Var2, iParam0, &iVar47, iVar1, "DEFAULT", "DEFAULT"), 64);
				if (!func_276(&iVar48, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4096[iVar1] = unk_0xE082EE0DCA9466C4(iVar48, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4096[iVar1] = 1000;
				}
				if (!func_276(&iVar49, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4096[iVar1].f_1 = unk_0x73F91AA610E60211(iVar49, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4096[iVar1].f_1 = 1,15f;
				}
				if (!func_276(&iVar54, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4096[iVar1].f_6 = unk_0x73F91AA610E60211(iVar54, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4096[iVar1].f_6 = 10f;
				}
				if (!func_276(&iVar50, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4096[iVar1].f_2 = unk_0xE082EE0DCA9466C4(iVar50, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4096[iVar1].f_2 = 25;
				}
				if (!func_276(&iVar51, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4096[iVar1].f_7 = unk_0xE082EE0DCA9466C4(iVar51, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4096[iVar1].f_7 = 0;
				}
				if (!func_276(&iVar52, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4096[iVar1].f_3 = unk_0xE082EE0DCA9466C4(iVar52, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4096[iVar1].f_3 = 1;
				}
				if (!func_276(&iVar55, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4096[iVar1].f_8 = unk_0xE082EE0DCA9466C4(iVar55, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4096[iVar1].f_8 = 100;
				}
				if (!func_276(&iVar53, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4096[iVar1].f_5 = unk_0xE082EE0DCA9466C4(iVar53, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4096[iVar1].f_5 = 25;
				}
				iVar58 = 0;
				iVar58 = 0;
				while (iVar58 <= 19)
				{
					if (iVar6[iVar58] != 0 && unk_0x3E932F23D327A136(iVar6[iVar58], iVar1) == 2)
					{
						Global_4456448.f_271[iVar0].f_4628[iVar1][iVar58] = unk_0xE082EE0DCA9466C4(iVar6[iVar58], iVar1);
					}
					else
					{
						Global_4456448.f_271[iVar0].f_4628[iVar1][iVar58] = 0;
					}
					iVar58++;
				}
				iVar57 = 0;
				while (iVar57 <= 2)
				{
					if (iVar27[iVar57] != 0 && unk_0x3E932F23D327A136(iVar27[iVar57], iVar1) == 2)
					{
						Global_4456448.f_271[iVar0].f_14967[iVar1][iVar57] = unk_0xE082EE0DCA9466C4(iVar27[iVar57], iVar1);
					}
					else
					{
						Global_4456448.f_271[iVar0].f_14967[iVar1][iVar57] = 0;
					}
					iVar57++;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_281(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_206 - 1))
	{
		if (iVar0 < 4)
		{
			iVar6 = 0;
			iVar7 = 0;
			iVar8 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar14 = 0;
			iVar15 = 0;
			iVar16 = 0;
			iVar17 = 0;
			iVar18 = 0;
			iVar19 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar23 = 0;
			iVar24 = 0;
			iVar25 = 0;
			iVar26 = 0;
			iVar27 = 0;
			iVar28 = 0;
			iVar29 = 0;
			iVar30 = 0;
			iVar31 = 0;
			iVar32 = 0;
			iVar33 = 0;
			iVar34 = 0;
			iVar35 = 0;
			iVar36 = 0;
			iVar37 = 0;
			iVar38 = 0;
			iVar39 = 0;
			iVar40 = 0;
			iVar41 = 0;
			iVar42 = 0;
			iVar43 = 0;
			iVar44 = 0;
			iVar45 = 0;
			iVar46 = 0;
			iVar47 = 0;
			iVar48 = 0;
			iVar49 = 0;
			iVar50 = 0;
			iVar51 = 0;
			iVar52 = 0;
			iVar53 = 0;
			iVar54 = 0;
			iVar55 = 0;
			iVar56 = 0;
			iVar57 = 0;
			iVar58 = 0;
			iVar59 = 0;
			iVar60 = 0;
			iVar61 = 0;
			iVar62 = 0;
			iVar63 = 0;
			iVar64 = 0;
			iVar65 = 0;
			iVar66 = 0;
			iVar67 = 0;
			iVar68 = 0;
			iVar69 = 0;
			iVar70 = 0;
			iVar71 = 0;
			iVar72 = 0;
			iVar73 = 0;
			iVar74 = 0;
			iVar75 = 0;
			iVar76 = 0;
			StringCopy(&Var2, "fleer", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar7 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "fleev", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar6 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "rloft", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar8 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "rloftv", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar9 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "minspd", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar10 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "mspdlp", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar11 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "mspdsv", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar12 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "pribt", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar13 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "bosth", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar14 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "bosti", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar15 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "vdor", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar16 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "mspdmx", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar17 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "prmg", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar18 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "traf", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar19 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "pden", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar20 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "dlor", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar21 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "fceStlth", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar22 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "mors", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar23 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "mdmr", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar24 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "mwdmr", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar25 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "vehdmro", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar29 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "vehdmri", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar30 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "remiveh", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar31 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "rtkpro", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar32 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "shdtxt", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar26 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "hitsnd", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar27 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "rdel", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar28 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "diagwf", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar33 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "diawfm", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar34 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "twpptd", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar35 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "mnvhhl", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar36 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "mnvhsi", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar37 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "mnvhsd", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar38 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "blolt", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar39 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "mxhth", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar40 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "cbmanr", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar41 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "rgnd", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar42 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "rgnr", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar43 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "rgnm", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar44 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "drnn", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar45 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "drnr1", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar46 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "drnr2", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar47 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "drnr3", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar48 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "drnr4", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar49 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "drnpl", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar50 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "drnp", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar51 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "drnv", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar52 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "drno", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar53 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "drnRt", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar54 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "drnmss", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar55 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "grtug", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar56 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "grwep", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar57 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "grclp", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar58 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "grkil", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar59 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "lbred", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar60 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "lbgre", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar61 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "lbblu", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar62 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "rltiA", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar63 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "rltiB", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar64 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "rltiC", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar65 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "rltiD", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar66 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			iVar1 = 0;
			while (iVar1 <= (Global_4456448.f_271[iVar0].f_59 - 1))
			{
				if (!func_276(&iVar6, 5, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4026[iVar1] = { unk_0x6403E33233A20F75(iVar6, iVar1) };
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4026[iVar1] = { 0f, 0f, 0f };
				}
				if (!func_276(&iVar7, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4078[iVar1] = unk_0x73F91AA610E60211(iVar7, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4078[iVar1] = 0f;
				}
				if (!func_276(&iVar8, 2, iVar1) && !func_282())
				{
					Global_4456448.f_271[iVar0].f_13386[iVar1] = unk_0xE082EE0DCA9466C4(iVar8, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13386[iVar1] = -1;
				}
				if (!func_276(&iVar9, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13404[iVar1] = unk_0xE082EE0DCA9466C4(iVar9, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13404[iVar1] = 0;
				}
				if (!func_276(&iVar10, 2, iVar1) && Global_4456448.f_2 != 6)
				{
					Global_4456448.f_271[iVar0].f_13422[iVar1] = unk_0xE082EE0DCA9466C4(iVar10, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13422[iVar1] = -1;
				}
				if (!func_276(&iVar11, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13440[iVar1] = unk_0xE082EE0DCA9466C4(iVar11, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13440[iVar1] = 0;
				}
				if (!func_276(&iVar12, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13476[iVar1] = unk_0xE082EE0DCA9466C4(iVar12, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13476[iVar1] = -1;
				}
				if (!func_276(&iVar13, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13656[iVar1] = unk_0xE082EE0DCA9466C4(iVar13, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13656[iVar1] = 0;
				}
				if (!func_276(&iVar14, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13674[iVar1] = unk_0xE082EE0DCA9466C4(iVar14, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13674[iVar1] = 0;
				}
				if (!func_276(&iVar15, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13692[iVar1] = unk_0xE082EE0DCA9466C4(iVar15, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13692[iVar1] = 0;
				}
				if (!func_276(&iVar16, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13710[iVar1] = unk_0xE082EE0DCA9466C4(iVar16, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13710[iVar1] = -1;
				}
				if (!func_276(&iVar17, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13458[iVar1] = unk_0xE082EE0DCA9466C4(iVar17, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13458[iVar1] = -1;
				}
				if (!func_276(&iVar18, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13494[iVar1] = unk_0xE082EE0DCA9466C4(iVar18, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13494[iVar1] = 0;
				}
				if (!func_276(&iVar19, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13548[iVar1] = unk_0xE082EE0DCA9466C4(iVar19, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13548[iVar1] = -1;
				}
				if (!func_276(&iVar20, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13566[iVar1] = unk_0xE082EE0DCA9466C4(iVar20, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13566[iVar1] = -1;
				}
				if (!func_276(&iVar21, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5158[iVar1] = unk_0xE082EE0DCA9466C4(iVar21, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5158[iVar1] = 0;
				}
				if (!func_276(&iVar22, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5194[iVar1] = unk_0xE082EE0DCA9466C4(iVar22, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5194[iVar1] = -1;
				}
				if (!func_276(&iVar23, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5176[iVar1] = unk_0xE082EE0DCA9466C4(iVar23, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5176[iVar1] = -1;
				}
				if (!func_276(&iVar24, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5212[iVar1] = unk_0xE082EE0DCA9466C4(iVar24, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5212[iVar1] = 10;
				}
				if (!func_276(&iVar25, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5230[iVar1] = unk_0xE082EE0DCA9466C4(iVar25, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5230[iVar1] = 10;
				}
				if (!func_276(&iVar29, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13967[iVar1] = unk_0xE082EE0DCA9466C4(iVar29, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13967[iVar1] = 10;
				}
				if (!func_276(&iVar30, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13985[iVar1] = unk_0xE082EE0DCA9466C4(iVar30, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13985[iVar1] = 10;
				}
				if (!func_276(&iVar31, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_9777[iVar1] = unk_0xE082EE0DCA9466C4(iVar31, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_9777[iVar1] = -1;
				}
				if (!func_276(&iVar32, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_14676[iVar1] = unk_0xE082EE0DCA9466C4(iVar32, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_14676[iVar1] = 0;
				}
				if (!func_276(&iVar26, 2, iVar1))
				{
					iVar77 = unk_0xE082EE0DCA9466C4(iVar26, iVar1);
					if (iVar77 > 0)
					{
						Global_4456448.f_271[iVar0].f_13512[iVar1] = iVar77;
					}
					else
					{
						Global_4456448.f_271[iVar0].f_13512[iVar1] = 0;
					}
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13512[iVar1] = 0;
				}
				if (!func_276(&iVar27, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13530[iVar1] = unk_0xE082EE0DCA9466C4(iVar27, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13530[iVar1] = 0;
				}
				if (!func_276(&iVar28, 2, iVar1))
				{
					if (unk_0xE082EE0DCA9466C4(iVar28, iVar1) > 1)
					{
						Global_4456448.f_271[iVar0].f_5306[iVar1] = unk_0xE082EE0DCA9466C4(iVar28, iVar1);
					}
					else
					{
						Global_4456448.f_271[iVar0].f_5306[iVar1] = 1;
					}
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5306[iVar1] = 1;
				}
				if (!func_276(&iVar33, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4996[iVar1] = unk_0xE082EE0DCA9466C4(iVar33, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4996[iVar1] = -1;
				}
				if (!func_276(&iVar34, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5014[iVar1] = unk_0xE082EE0DCA9466C4(iVar34, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5014[iVar1] = -1;
				}
				if (!func_276(&iVar35, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5086[iVar1] = unk_0xE082EE0DCA9466C4(iVar35, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5086[iVar1] = -1;
				}
				if (!func_276(&iVar36, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5032[iVar1] = unk_0xE082EE0DCA9466C4(iVar36, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5032[iVar1] = -1;
				}
				if (!func_276(&iVar37, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5050[iVar1] = unk_0xE082EE0DCA9466C4(iVar37, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5050[iVar1] = -1;
				}
				if (!func_276(&iVar38, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5068[iVar1] = unk_0xE082EE0DCA9466C4(iVar38, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5068[iVar1] = -1;
				}
				if (!func_276(&iVar39, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5104[iVar1] = unk_0xE082EE0DCA9466C4(iVar39, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5104[iVar1] = 4;
				}
				if (!func_276(&iVar40, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5122[iVar1] = unk_0xE082EE0DCA9466C4(iVar40, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5122[iVar1] = 0;
				}
				if (!func_276(&iVar41, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5140[iVar1] = unk_0xE082EE0DCA9466C4(iVar41, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5140[iVar1] = 0;
				}
				if (!func_276(&iVar42, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4455[iVar1] = unk_0x73F91AA610E60211(iVar42, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4455[iVar1] = 0f;
				}
				if (!func_276(&iVar43, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4455[iVar1].f_1 = unk_0xE082EE0DCA9466C4(iVar43, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4455[iVar1].f_1 = 1;
				}
				if (!func_276(&iVar44, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4455[iVar1].f_2 = unk_0xE082EE0DCA9466C4(iVar44, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4455[iVar1].f_2 = 50;
				}
				if (!func_276(&iVar45, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4250[iVar1] = unk_0x73F91AA610E60211(iVar45, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4250[iVar1] = 0f;
				}
				if (!func_276(&iVar46, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4250[iVar1].f_1[0] = unk_0x73F91AA610E60211(iVar46, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4250[iVar1].f_1[0] = 0f;
				}
				if (!func_276(&iVar47, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4250[iVar1].f_1[1] = unk_0x73F91AA610E60211(iVar47, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4250[iVar1].f_1[1] = 0f;
				}
				if (!func_276(&iVar48, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4250[iVar1].f_1[2] = unk_0x73F91AA610E60211(iVar48, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4250[iVar1].f_1[2] = 0f;
				}
				if (!func_276(&iVar49, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4250[iVar1].f_1[3] = unk_0x73F91AA610E60211(iVar49, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4250[iVar1].f_1[3] = 0f;
				}
				if (!func_276(&iVar50, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4250[iVar1].f_6 = unk_0x73F91AA610E60211(iVar50, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4250[iVar1].f_6 = 0f;
				}
				if (!func_276(&iVar51, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4250[iVar1].f_7 = unk_0x73F91AA610E60211(iVar51, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4250[iVar1].f_7 = 0f;
				}
				if (!func_276(&iVar52, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4250[iVar1].f_8 = unk_0x73F91AA610E60211(iVar52, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4250[iVar1].f_8 = 0f;
				}
				if (!func_276(&iVar55, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4250[iVar1].f_11 = unk_0xE082EE0DCA9466C4(iVar55, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4250[iVar1].f_11 = 0;
				}
				if (!func_276(&iVar53, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4250[iVar1].f_9 = unk_0x73F91AA610E60211(iVar53, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4250[iVar1].f_9 = 0f;
				}
				if (!func_276(&iVar54, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4250[iVar1].f_10 = unk_0x73F91AA610E60211(iVar54, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4250[iVar1].f_10 = 0f;
				}
				if (!func_276(&iVar56, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4507[iVar1] = unk_0xE082EE0DCA9466C4(iVar56, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4507[iVar1] = -1;
				}
				if (!func_276(&iVar57, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4507[iVar1].f_1 = unk_0xE082EE0DCA9466C4(iVar57, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4507[iVar1].f_1 = -1;
				}
				if (!func_276(&iVar58, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4507[iVar1].f_2 = unk_0xE082EE0DCA9466C4(iVar58, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4507[iVar1].f_2 = 0;
				}
				if (!func_276(&iVar59, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4507[iVar1].f_3 = unk_0xE082EE0DCA9466C4(iVar59, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4507[iVar1].f_3 = 0;
				}
				if (!func_276(&iVar60, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4576[iVar1] = unk_0xE082EE0DCA9466C4(iVar60, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4576[iVar1] = 0;
				}
				if (!func_276(&iVar62, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4576[iVar1].f_2 = unk_0xE082EE0DCA9466C4(iVar62, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4576[iVar1].f_2 = 0;
				}
				if (!func_276(&iVar61, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_4576[iVar1].f_1 = unk_0xE082EE0DCA9466C4(iVar61, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_4576[iVar1].f_1 = 0;
				}
				if (!func_276(&iVar63, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_14315[iVar1].f_1 = unk_0xE082EE0DCA9466C4(iVar63, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_14315[iVar1].f_1 = 0;
				}
				if (!func_276(&iVar64, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_14315[iVar1] = unk_0xE082EE0DCA9466C4(iVar64, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_14315[iVar1] = 0;
				}
				if (!func_276(&iVar65, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_14315[iVar1].f_3 = unk_0x73F91AA610E60211(iVar65, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_14315[iVar1].f_3 = 0f;
				}
				if (!func_276(&iVar66, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_14315[iVar1].f_2 = unk_0xE082EE0DCA9466C4(iVar66, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_14315[iVar1].f_2 = 0;
				}
				StringCopy(&Var2, "alti", 16);
				StringIntConCat(&Var2, iVar0, 16);
				func_199(&Var2, &(Global_4456448.f_271[iVar0].f_15036[iVar1]), iParam0, &iVar67, iVar1, 0, -2340845);
				StringCopy(&Var2, "altmin", 16);
				StringIntConCat(&Var2, iVar0, 16);
				func_199(&Var2, &(Global_4456448.f_271[iVar0].f_15036[iVar1].f_1), iParam0, &iVar68, iVar1, 0, -2340845);
				StringCopy(&Var2, "altthr", 16);
				StringIntConCat(&Var2, iVar0, 16);
				func_199(&Var2, &(Global_4456448.f_271[iVar0].f_15036[iVar1].f_2), iParam0, &iVar69, iVar1, 0, -2340845);
				StringCopy(&Var2, "altmax", 16);
				StringIntConCat(&Var2, iVar0, 16);
				func_199(&Var2, &(Global_4456448.f_271[iVar0].f_15036[iVar1].f_3), iParam0, &iVar70, iVar1, 0, -2340845);
				StringCopy(&Var2, "altipv", 16);
				StringIntConCat(&Var2, iVar0, 16);
				func_199(&Var2, &(Global_4456448.f_271[iVar0].f_15036[iVar1].f_4), iParam0, &iVar71, iVar1, -1, -2340845);
				StringCopy(&Var2, "altift", 16);
				StringIntConCat(&Var2, iVar0, 16);
				func_199(&Var2, &(Global_4456448.f_271[iVar0].f_15036[iVar1].f_5), iParam0, &iVar72, iVar1, -1, -2340845);
				StringCopy(&Var2, "alttmb", 16);
				StringIntConCat(&Var2, iVar0, 16);
				StringCopy(&(Global_4456448.f_271[iVar0].f_15036[iVar1].f_6), func_233(&Var2, iParam0, &iVar73, iVar1, "", ""), 64);
				StringCopy(&Var2, "alttcb", 16);
				StringIntConCat(&Var2, iVar0, 16);
				StringCopy(&(Global_4456448.f_271[iVar0].f_15036[iVar1].f_22), func_233(&Var2, iParam0, &iVar74, iVar1, "", ""), 64);
				StringCopy(&Var2, "altibt", 16);
				StringIntConCat(&Var2, iVar0, 16);
				func_199(&Var2, &(Global_4456448.f_271[iVar0].f_15036[iVar1].f_38), iParam0, &iVar75, iVar1, 0, -2340845);
				StringCopy(&Var2, "qgntt", 16);
				StringIntConCat(&Var2, iVar0, 16);
				func_199(&Var2, &(Global_4456448.f_271[iVar0].f_13638[iVar1]), iParam0, &iVar76, iVar1, 0, -2340845);
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_282()
{
	return (Global_4456448 == 0 && Global_4456448.f_2 == 6);
}

void func_283(int iParam0)
{
	Var7 = 2;
	Var7.f_3 = 2;
	Var7.f_3.f_1 = 2;
	Var7.f_3.f_1.f_3 = 2;
	Var7.f_10 = 2;
	Var7.f_13 = 2;
	Var7.f_16 = 2;
	Var7.f_19 = 2;
	Var7.f_22 = 2;
	Var7.f_25 = 2;
	Var7.f_28 = 2;
	Var7.f_31 = 2;
	Var7.f_34 = 2;
	Var7.f_37 = 2;
	Var7.f_40 = 2;
	Var7.f_43 = 2;
	Var7.f_46 = 2;
	Var7.f_49 = 2;
	Var7.f_52 = 2;
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_206 - 1))
	{
		if (iVar0 < 4)
		{
			iVar72 = 0;
			iVar73 = 0;
			iVar74 = 0;
			iVar75 = 0;
			iVar76 = 0;
			iVar77 = 0;
			iVar78 = 0;
			iVar79 = 0;
			iVar80 = 0;
			iVar81 = 0;
			iVar82 = 0;
			iVar83 = 0;
			iVar84 = 0;
			iVar85 = 0;
			iVar86 = 0;
			iVar87 = 0;
			iVar88 = 0;
			iVar89 = 0;
			iVar90 = 0;
			iVar91 = 0;
			iVar92 = 0;
			iVar93 = 0;
			iVar94 = 0;
			iVar95 = 0;
			iVar96 = 0;
			iVar97 = 0;
			iVar98 = 0;
			iVar99 = 0;
			iVar100 = 0;
			iVar101 = 0;
			iVar102 = 0;
			iVar103 = 0;
			Var104 = { Var7 };
			iVar159 = 0;
			iVar160 = 0;
			StringCopy(&cVar3, "itvsd", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar72 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "itved", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar73 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "invor", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar74 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "emonR", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar75 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "pDSaD", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar76 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "todh", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar89 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "todm", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar90 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "tods", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar91 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "todsh", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar92 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "armr", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar77 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "bsthr", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar78 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "mgdm", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar79 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "rorcp", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar80 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "rocok", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar81 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "rodp", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar82 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "rodpt", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar83 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "rotes", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar84 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "expRR", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar85 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "rolsw", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar86 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "roapa", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar87 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "sthpp", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar88 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "txt3", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar93 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "txt4", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar94 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "txt5", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar95 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "fail", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar96 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "bfm", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar101 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "wwm", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar97 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "vss", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar98 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "cwt", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar99 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "vhm", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar100 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "tsc", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar102 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "mcry", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar103 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "bdprt", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar159 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			StringCopy(&cVar3, "bdpst", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			iVar160 = unk_0x7619952D26DF7783(*iParam0, &cVar3);
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				StringCopy(&cVar3, "rlbs", 16);
				StringIntConCat(&cVar3, iVar0, 16);
				StringConCat(&cVar3, "-", 16);
				StringIntConCat(&cVar3, iVar2, 16);
				iVar62[iVar2] = 0;
				iVar62[iVar2] = unk_0x7619952D26DF7783(*iParam0, &cVar3);
				StringCopy(&cVar3, "rlnm", 16);
				StringIntConCat(&cVar3, iVar2, 16);
				iVar67[iVar2] = unk_0x7619952D26DF7783(*iParam0, &cVar3);
				iVar2++;
			}
			iVar1 = 0;
			while (iVar1 <= (Global_4456448.f_271[iVar0].f_59 - 1))
			{
				iVar161 = 0;
				while (iVar161 <= 1)
				{
					func_284(iVar161, iParam0, &Var104, &(Global_4456448.f_271[iVar0].f_1523[iVar1][iVar161]), iVar0, iVar1);
					iVar161++;
				}
				if (!func_276(&iVar72, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_869[iVar1] = unk_0xE082EE0DCA9466C4(iVar72, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_869[iVar1] = 5;
				}
				if (!func_276(&iVar73, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_887[iVar1] = unk_0xE082EE0DCA9466C4(iVar73, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_887[iVar1] = 20;
				}
				if (!func_276(&iVar74, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_1303[iVar1] = unk_0xE082EE0DCA9466C4(iVar74, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_1303[iVar1] = -1;
				}
				if (!func_276(&iVar75, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_1321[iVar1] = unk_0xE082EE0DCA9466C4(iVar75, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_1321[iVar1] = -1;
				}
				if (!func_276(&iVar76, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_1339[iVar1] = unk_0xE082EE0DCA9466C4(iVar76, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_1339[iVar1] = -1;
				}
				if (!func_276(&iVar77, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_1105[iVar1] = unk_0xE082EE0DCA9466C4(iVar77, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_1105[iVar1] = 0;
				}
				if (!func_276(&iVar78, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_1123[iVar1] = unk_0xE082EE0DCA9466C4(iVar78, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_1123[iVar1] = -1;
				}
				if (!func_276(&iVar79, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_1141[iVar1] = unk_0xE082EE0DCA9466C4(iVar79, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_1141[iVar1] = 100;
				}
				if (!func_276(&iVar80, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13751[iVar1] = unk_0xE082EE0DCA9466C4(iVar80, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13751[iVar1] = 0;
				}
				if (!func_276(&iVar81, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_14003[iVar1] = unk_0x73F91AA610E60211(iVar81, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_14003[iVar1] = 0f;
				}
				if (!func_276(&iVar82, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_1159[iVar1] = unk_0xE082EE0DCA9466C4(iVar82, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_1159[iVar1] = 0;
				}
				if (!func_276(&iVar83, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_1177[iVar1] = unk_0xE082EE0DCA9466C4(iVar83, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_1177[iVar1] = 0;
				}
				if (!func_276(&iVar84, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_1195[iVar1] = unk_0xE082EE0DCA9466C4(iVar84, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_1195[iVar1] = 0;
				}
				if (!func_276(&iVar85, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_1213[iVar1] = unk_0x73F91AA610E60211(iVar85, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_1213[iVar1] = 0f;
				}
				if (!func_276(&iVar86, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_1249[iVar1] = unk_0xE082EE0DCA9466C4(iVar86, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_1249[iVar1] = -1;
				}
				if (!func_276(&iVar87, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_1267[iVar1] = unk_0xE082EE0DCA9466C4(iVar87, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_1267[iVar1] = -1;
				}
				if (!func_276(&iVar88, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_1285[iVar1] = unk_0xE082EE0DCA9466C4(iVar88, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_1285[iVar1] = -2;
				}
				if (!func_276(&iVar89, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_1033[iVar1] = unk_0xE082EE0DCA9466C4(iVar89, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_1033[iVar1] = 12;
				}
				if (!func_276(&iVar90, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_1051[iVar1] = unk_0xE082EE0DCA9466C4(iVar90, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_1051[iVar1] = 0;
				}
				if (!func_276(&iVar91, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_1069[iVar1] = unk_0xE082EE0DCA9466C4(iVar91, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_1069[iVar1] = 0;
				}
				if (!func_276(&iVar92, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_1087[iVar1] = unk_0xE082EE0DCA9466C4(iVar92, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_1087[iVar1] = 0;
				}
				if (!func_206())
				{
					if (!func_276(&iVar93, 4, iVar1))
					{
						StringCopy(&(Global_4456448.f_271[iVar0].f_11161[iVar1]), unk_0x3E4982E6ACD879AE(iVar93, iVar1), 64);
					}
					else
					{
						StringCopy(&(Global_4456448.f_271[iVar0].f_11161[iVar1]), "", 64);
					}
					if (!func_276(&iVar94, 4, iVar1))
					{
						StringCopy(&(Global_4456448.f_271[iVar0].f_10615[iVar1]), unk_0x3E4982E6ACD879AE(iVar94, iVar1), 64);
					}
					else
					{
						StringCopy(&(Global_4456448.f_271[iVar0].f_10615[iVar1]), "", 64);
					}
					if (!func_276(&iVar95, 4, iVar1))
					{
						StringCopy(&(Global_4456448.f_271[iVar0].f_10888[iVar1]), unk_0x3E4982E6ACD879AE(iVar95, iVar1), 64);
					}
					else
					{
						StringCopy(&(Global_4456448.f_271[iVar0].f_10888[iVar1]), "", 64);
					}
				}
				if (!func_276(&iVar96, 4, iVar1))
				{
					StringCopy(&(Global_4456448.f_271[iVar0].f_11434[iVar1]), unk_0x3E4982E6ACD879AE(iVar96, iVar1), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_271[iVar0].f_11434[iVar1]), "", 64);
				}
				if (!func_276(&iVar101, 4, iVar1))
				{
					StringCopy(&(Global_4456448.f_271[iVar0].f_11707[iVar1]), unk_0x3E4982E6ACD879AE(iVar101, iVar1), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_271[iVar0].f_11707[iVar1]), "", 64);
				}
				if (!func_276(&iVar97, 4, iVar1))
				{
					StringCopy(&(Global_4456448.f_271[iVar0].f_11980[iVar1]), unk_0x3E4982E6ACD879AE(iVar97, iVar1), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_271[iVar0].f_11980[iVar1]), "", 64);
				}
				if (!func_276(&iVar98, 4, iVar1))
				{
					StringCopy(&(Global_4456448.f_271[iVar0].f_12253[iVar1]), unk_0x3E4982E6ACD879AE(iVar98, iVar1), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_271[iVar0].f_12253[iVar1]), "", 64);
				}
				if (!func_276(&iVar99, 4, iVar1))
				{
					StringCopy(&(Global_4456448.f_271[iVar0].f_12526[iVar1]), unk_0x3E4982E6ACD879AE(iVar99, iVar1), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_271[iVar0].f_12526[iVar1]), "", 64);
				}
				if (!func_276(&iVar100, 4, iVar1))
				{
					StringCopy(&(Global_4456448.f_271[iVar0].f_12799[iVar1]), unk_0x3E4982E6ACD879AE(iVar100, iVar1), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_271[iVar0].f_12799[iVar1]), "", 64);
				}
				if (!func_276(&iVar102, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5270[iVar1] = unk_0xE082EE0DCA9466C4(iVar102, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5270[iVar1] = 0;
				}
				if (!func_276(&iVar103, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5288[iVar1] = unk_0xE082EE0DCA9466C4(iVar103, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5288[iVar1] = 0;
				}
				if (!func_276(&iVar159, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_9571[iVar1] = unk_0xE082EE0DCA9466C4(iVar159, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_9571[iVar1] = Global_4456448.f_271[iVar0].f_4986;
				}
				if (!func_276(&iVar160, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_9589[iVar1] = unk_0xE082EE0DCA9466C4(iVar160, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_9589[iVar1] = Global_4456448.f_271[iVar0].f_5250;
				}
				iVar2 = 0;
				while (iVar2 <= 3)
				{
					if (iVar62[iVar2] != 0)
					{
						Global_4456448.f_271[iVar0].f_9607[iVar1][iVar2] = unk_0xE082EE0DCA9466C4(iVar62[iVar2], iVar1);
					}
					else
					{
						Global_4456448.f_271[iVar0].f_9607[iVar1][iVar2] = 0;
					}
					if (iVar67[iVar2] != 0)
					{
						StringCopy(&(Global_4456448.f_271[iVar0].f_9693[iVar2]), unk_0x3E4982E6ACD879AE(iVar67[iVar2], 0), 64);
					}
					else
					{
						StringCopy(&(Global_4456448.f_271[iVar0].f_9693[iVar2]), "", 64);
					}
					iVar2++;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_284(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	StringCopy(&Var0, "rbs", 32);
	StringIntConCat(&Var0, iParam0, 32);
	StringConCat(&Var0, "_typ", 32);
	StringIntConCat(&Var0, iParam4, 32);
	func_199(&Var0, uParam3, uParam1, uParam2[iParam0], iParam5, 0, -2340845);
	StringCopy(&Var0, "rbs", 32);
	StringIntConCat(&Var0, iParam0, 32);
	StringConCat(&Var0, "_zn", 32);
	StringIntConCat(&Var0, iParam4, 32);
	func_191(&Var0, &(uParam3->f_1), 2, uParam1, &(uParam2->f_3[iParam0]), iParam5, 0, -2340845);
	StringCopy(&Var0, "rbs", 32);
	StringIntConCat(&Var0, iParam0, 32);
	StringConCat(&Var0, "_time", 32);
	StringIntConCat(&Var0, iParam4, 32);
	func_199(&Var0, &(uParam3->f_4), uParam1, &(uParam2->f_10[iParam0]), iParam5, 60000, -2340845);
	StringCopy(&Var0, "rbs", 32);
	StringIntConCat(&Var0, iParam0, 32);
	StringConCat(&Var0, "_bs", 32);
	StringIntConCat(&Var0, iParam4, 32);
	func_199(&Var0, &(uParam3->f_8), uParam1, &(uParam2->f_13[iParam0]), iParam5, 0, -2340845);
	StringCopy(&Var0, "rbs", 32);
	StringIntConCat(&Var0, iParam0, 32);
	StringConCat(&Var0, "_wntd", 32);
	StringIntConCat(&Var0, iParam4, 32);
	func_199(&Var0, &(uParam3->f_7), uParam1, &(uParam2->f_16[iParam0]), iParam5, -1, -2340845);
	StringCopy(&Var0, "rbs", 32);
	StringIntConCat(&Var0, iParam0, 32);
	StringConCat(&Var0, "_igv", 32);
	StringIntConCat(&Var0, iParam4, 32);
	func_199(&Var0, &uVar8, uParam1, &(uParam2->f_19[iParam0]), iParam5, 0, -2340845);
	uParam3->f_5 = uVar8;
	StringCopy(&Var0, "rbs", 32);
	StringIntConCat(&Var0, iParam0, 32);
	StringConCat(&Var0, "_igwo", 32);
	StringIntConCat(&Var0, iParam4, 32);
	func_199(&Var0, &(uParam3->f_6), uParam1, &(uParam2->f_22[iParam0]), iParam5, -1, -2340845);
	StringCopy(&Var0, "rbs", 32);
	StringIntConCat(&Var0, iParam0, 32);
	StringConCat(&Var0, "_ifpc", 32);
	StringIntConCat(&Var0, iParam4, 32);
	func_199(&Var0, &(uParam3->f_9), uParam1, &(uParam2->f_25[iParam0]), iParam5, 0, -2340845);
	StringCopy(&Var0, "rbs", 32);
	StringIntConCat(&Var0, iParam0, 32);
	StringConCat(&Var0, "_lsg", 32);
	StringIntConCat(&Var0, iParam4, 32);
	func_199(&Var0, &(uParam3->f_10), uParam1, &(uParam2->f_28[iParam0]), iParam5, 0, -2340845);
	StringCopy(&Var0, "rbs", 32);
	StringIntConCat(&Var0, iParam0, 32);
	StringConCat(&Var0, "_ivl", 32);
	StringIntConCat(&Var0, iParam4, 32);
	func_199(&Var0, &uVar8, uParam1, &(uParam2->f_37[iParam0]), iParam5, 0, -2340845);
	uParam3->f_17 = uVar8;
	StringCopy(&Var0, "rbs", 32);
	StringIntConCat(&Var0, iParam0, 32);
	StringConCat(&Var0, "_bht", 32);
	StringIntConCat(&Var0, iParam4, 32);
	func_199(&Var0, &(uParam3->f_11), uParam1, &(uParam2->f_40[iParam0]), iParam5, 0, -2340845);
	StringCopy(&Var0, "rbs", 32);
	StringIntConCat(&Var0, iParam0, 32);
	StringConCat(&Var0, "_oav", 32);
	StringIntConCat(&Var0, iParam4, 32);
	func_199(&Var0, &uVar8, uParam1, &(uParam2->f_43[iParam0]), iParam5, 0, -2340845);
	uParam3->f_18 = uVar8;
	StringCopy(&Var0, "rbs", 32);
	StringIntConCat(&Var0, iParam0, 32);
	StringConCat(&Var0, "_mpib", 32);
	StringIntConCat(&Var0, iParam4, 32);
	func_199(&Var0, &(uParam3->f_12), uParam1, &(uParam2->f_46[iParam0]), iParam5, 0, -2340845);
	StringCopy(&Var0, "rbs", 32);
	StringIntConCat(&Var0, iParam0, 32);
	StringConCat(&Var0, "_vrac", 32);
	StringIntConCat(&Var0, iParam4, 32);
	func_199(&Var0, &(uParam3->f_13), uParam1, &(uParam2->f_49[iParam0]), iParam5, 0, -2340845);
}

void func_285(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_206 - 1))
	{
		if (iVar0 < 4)
		{
			iVar6 = 0;
			iVar7 = 0;
			iVar8 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar14 = 0;
			iVar15 = 0;
			iVar16 = 0;
			iVar17 = 0;
			iVar18 = 0;
			iVar19 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar23 = 0;
			iVar24 = 0;
			iVar25 = 0;
			iVar26 = 0;
			iVar27 = 0;
			iVar28 = 0;
			iVar29 = 0;
			iVar30 = 0;
			iVar31 = 0;
			iVar32 = 0;
			iVar33 = 0;
			iVar34 = 0;
			iVar35 = 0;
			iVar36 = 0;
			iVar37 = 0;
			iVar38 = 0;
			iVar39 = 0;
			iVar40 = 0;
			iVar41 = 0;
			iVar42 = 0;
			iVar43 = 0;
			iVar44 = 0;
			iVar45 = 0;
			iVar46 = 0;
			iVar47 = 0;
			iVar48 = 0;
			iVar49 = 0;
			iVar50 = 0;
			iVar51 = 0;
			iVar52 = 0;
			iVar53 = 0;
			iVar54 = 0;
			iVar55 = 0;
			iVar56 = 0;
			iVar57 = 0;
			iVar58 = 0;
			iVar59 = 0;
			StringCopy(&cVar2, "destv", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar6 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "destr", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar7 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "destv1", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar8 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "destv2", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar9 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "destw", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar10 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "outbt", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar11 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "outb", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar12 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "outr", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar13 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "outhv", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar17 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "outb1v", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar14 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "outb2v", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar15 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "outw", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar16 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "outwtg", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar18 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "outiwv", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar19 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "outiwo", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar21 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "outbs", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar22 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "outclo", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar24 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "outclr", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar25 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "outclp", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar26 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "outmm", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar23 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "outfp", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar27 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "outsg", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar28 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "outbh", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar29 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "outhc", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar33 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "outety", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar30 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "outeid", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar31 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "outilv", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar20 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "outonfv", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar32 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "bd2t", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar40 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "bd2v", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar41 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "bd2v1", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar42 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "bd2v2", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar43 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "bd2r", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar44 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "bd2w", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar45 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "out2wg", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar47 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "out2iv", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar48 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "out2io", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar50 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "out2bs", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar51 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "out2mm", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar52 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "out2fp", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar53 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "out2sg", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar54 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "out2bh", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar55 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "out2hc", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar59 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "out2et", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar56 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "out2id", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar57 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "out2hv", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar46 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "out2ilv", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar49 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "out2onfv", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar58 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "mpaib", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar34 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "mpaib2", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar35 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "vrach", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar36 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "vrach2", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar37 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "bundel", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar38 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "bundel2", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar39 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			iVar1 = 0;
			while (iVar1 <= (Global_4456448.f_271[iVar0].f_59 - 1))
			{
				if (!func_276(&iVar8, 5, iVar1))
				{
					Global_4456448.f_271[iVar0].f_3413[iVar1].f_16 = { unk_0x6403E33233A20F75(iVar8, iVar1) };
				}
				else
				{
					Global_4456448.f_271[iVar0].f_3413[iVar1].f_16 = { 0f, 0f, 0f };
				}
				if (!func_276(&iVar9, 5, iVar1))
				{
					Global_4456448.f_271[iVar0].f_3413[iVar1].f_19 = { unk_0x6403E33233A20F75(iVar9, iVar1) };
				}
				else
				{
					Global_4456448.f_271[iVar0].f_3413[iVar1].f_19 = { 0f, 0f, 0f };
				}
				if (!func_276(&iVar10, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_3413[iVar1].f_23 = unk_0x73F91AA610E60211(iVar10, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_3413[iVar1].f_23 = 0f;
				}
				if (!func_276(&iVar6, 5, iVar1))
				{
					Global_4456448.f_271[iVar0].f_3413[iVar1].f_13 = { unk_0x6403E33233A20F75(iVar6, iVar1) };
				}
				else
				{
					Global_4456448.f_271[iVar0].f_3413[iVar1].f_13 = { 0f, 0f, 0f };
				}
				if (!func_276(&iVar7, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_3413[iVar1].f_22 = unk_0x73F91AA610E60211(iVar7, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_3413[iVar1].f_22 = 0f;
				}
				if (!func_276(&iVar18, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_2 = unk_0xE082EE0DCA9466C4(iVar18, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_2 = -1;
				}
				if (!func_276(&iVar19, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1] = unk_0xE082EE0DCA9466C4(iVar19, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1] = 0;
				}
				if (!func_276(&iVar20, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_10 = unk_0xE082EE0DCA9466C4(iVar20, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_10 = 0;
				}
				if (!func_276(&iVar21, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_1 = unk_0xE082EE0DCA9466C4(iVar21, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_1 = -1;
				}
				if (!func_276(&iVar22, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_3 = unk_0xE082EE0DCA9466C4(iVar22, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_3 = 0;
				}
				if (!func_276(&iVar23, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_4 = unk_0xE082EE0DCA9466C4(iVar23, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_4 = 120;
				}
				if (!func_276(&iVar24, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_32 = unk_0x73F91AA610E60211(iVar24, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_32 = 5f;
				}
				if (!func_276(&iVar25, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_33 = unk_0x73F91AA610E60211(iVar25, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_33 = 10f;
				}
				if (!func_276(&iVar32, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_11 = unk_0xE082EE0DCA9466C4(iVar32, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_11 = 0;
				}
				if (!func_276(&iVar58, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_11 = unk_0xE082EE0DCA9466C4(iVar58, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_11 = 0;
				}
				if (!func_276(&iVar26, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_34 = unk_0x73F91AA610E60211(iVar26, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_34 = 30f;
				}
				if (!func_276(&iVar34, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_8 = unk_0xE082EE0DCA9466C4(iVar34, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_8 = 0;
				}
				if (!func_276(&iVar35, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_8 = unk_0xE082EE0DCA9466C4(iVar35, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_8 = 0;
				}
				if (!func_276(&iVar36, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_9 = unk_0xE082EE0DCA9466C4(iVar36, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_9 = 0;
				}
				if (!func_276(&iVar37, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_9 = unk_0xE082EE0DCA9466C4(iVar37, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_9 = 0;
				}
				if (!func_276(&iVar38, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_35 = unk_0xE082EE0DCA9466C4(iVar38, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_35 = 0;
				}
				if (!func_276(&iVar39, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_35 = unk_0xE082EE0DCA9466C4(iVar39, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_35 = 0;
				}
				if (!func_276(&iVar27, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_5 = unk_0xE082EE0DCA9466C4(iVar27, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_5 = 0;
				}
				if (!func_276(&iVar28, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_6 = unk_0xE082EE0DCA9466C4(iVar28, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_6 = 0;
				}
				if (!func_276(&iVar33, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_12 = unk_0xE082EE0DCA9466C4(iVar33, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_12 = 12;
				}
				if (!func_276(&iVar29, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_7 = unk_0xE082EE0DCA9466C4(iVar29, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_7 = 0;
				}
				if (!func_276(&iVar30, 2, iVar1) && !func_276(&iVar31, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_30 = unk_0xE082EE0DCA9466C4(iVar30, iVar1);
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_31 = unk_0xE082EE0DCA9466C4(iVar31, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_30 = 0;
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_31 = -1;
				}
				if (!func_276(&iVar47, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_2 = unk_0xE082EE0DCA9466C4(iVar47, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_2 = -1;
				}
				if (!func_276(&iVar48, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1] = unk_0xE082EE0DCA9466C4(iVar48, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1] = 0;
				}
				if (!func_276(&iVar49, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_10 = unk_0xE082EE0DCA9466C4(iVar49, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_10 = 0;
				}
				if (!func_276(&iVar50, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_1 = unk_0xE082EE0DCA9466C4(iVar50, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_1 = -1;
				}
				if (!func_276(&iVar51, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_3 = unk_0xE082EE0DCA9466C4(iVar51, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_3 = 0;
				}
				if (!func_276(&iVar52, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_4 = unk_0xE082EE0DCA9466C4(iVar52, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_4 = 120;
				}
				if (!func_276(&iVar53, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_5 = unk_0xE082EE0DCA9466C4(iVar53, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_5 = 0;
				}
				if (!func_276(&iVar54, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_6 = unk_0xE082EE0DCA9466C4(iVar54, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_6 = 0;
				}
				if (!func_276(&iVar59, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_12 = unk_0xE082EE0DCA9466C4(iVar59, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_12 = 12;
				}
				if (!func_276(&iVar55, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_7 = unk_0xE082EE0DCA9466C4(iVar55, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_7 = 0;
				}
				if (!func_276(&iVar56, 2, iVar1) && !func_276(&iVar57, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_30 = unk_0xE082EE0DCA9466C4(iVar56, iVar1);
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_31 = unk_0xE082EE0DCA9466C4(iVar57, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_30 = 0;
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_31 = -1;
				}
				if (!func_276(&iVar14, 5, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_16 = { unk_0x6403E33233A20F75(iVar14, iVar1) };
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_16 = { 0f, 0f, 0f };
				}
				if (!func_276(&iVar15, 5, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_19 = { unk_0x6403E33233A20F75(iVar15, iVar1) };
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_19 = { 0f, 0f, 0f };
				}
				if (!func_276(&iVar16, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_23 = unk_0x73F91AA610E60211(iVar16, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_23 = 0f;
				}
				if (!func_276(&iVar17, 5, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_26 = { unk_0x6403E33233A20F75(iVar17, iVar1) };
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_26 = { 0f, 0f, 0f };
				}
				if (!func_276(&iVar12, 5, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_13 = { unk_0x6403E33233A20F75(iVar12, iVar1) };
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_13 = { 0f, 0f, 0f };
				}
				if (!func_276(&iVar13, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_22 = unk_0x73F91AA610E60211(iVar13, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_22 = 0f;
				}
				if (!func_276(&iVar11, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2187[iVar1].f_29 = unk_0xE082EE0DCA9466C4(iVar11, iVar1);
				}
				if (!func_276(&iVar46, 5, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_26 = { unk_0x6403E33233A20F75(iVar46, iVar1) };
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_26 = { 0f, 0f, 0f };
				}
				if (!func_276(&iVar41, 5, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_13 = { unk_0x6403E33233A20F75(iVar41, iVar1) };
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_13 = { 0f, 0f, 0f };
				}
				if (!func_276(&iVar43, 5, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_16 = { unk_0x6403E33233A20F75(iVar43, iVar1) };
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_16 = { 0f, 0f, 0f };
				}
				if (!func_276(&iVar42, 5, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_19 = { unk_0x6403E33233A20F75(iVar42, iVar1) };
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_19 = { 0f, 0f, 0f };
				}
				if (!func_276(&iVar45, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_23 = unk_0x73F91AA610E60211(iVar45, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_23 = 0f;
				}
				if (!func_276(&iVar44, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_22 = unk_0x73F91AA610E60211(iVar44, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_22 = 0f;
				}
				if (!func_276(&iVar40, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_2800[iVar1].f_29 = unk_0xE082EE0DCA9466C4(iVar40, iVar1);
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_286(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_206 - 1))
	{
		if (iVar0 < 4)
		{
			iVar6 = 0;
			iVar7 = 0;
			iVar8 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar14 = 0;
			iVar15 = 0;
			iVar16 = 0;
			iVar17 = 0;
			iVar18 = 0;
			iVar19 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar23 = 0;
			iVar24 = 0;
			iVar25 = 0;
			iVar26 = 0;
			StringCopy(&cVar2, "sia", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar6 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "stiam", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar7 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "mmiam2", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar8 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "siat", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar9 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "stiamt", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar10 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "mmiam2t", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar11 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "sim", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar12 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "mmim", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar13 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "mmi2m", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar14 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "uacp1", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar15 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "uacp2", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar16 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			iVar27 = 0;
			while (iVar27 <= 121)
			{
				if (iVar6 != 0 && unk_0x3E932F23D327A136(iVar6, iVar27) == 2)
				{
					Global_4456448.f_271[iVar0].f_65[iVar27] = unk_0xE082EE0DCA9466C4(iVar6, iVar27);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_65[iVar27] = 0;
				}
				if (iVar7 != 0 && unk_0x3E932F23D327A136(iVar7, iVar27) == 2)
				{
					Global_4456448.f_271[iVar0].f_331[iVar27] = unk_0xE082EE0DCA9466C4(iVar7, iVar27);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_331[iVar27] = 0;
				}
				if (iVar8 != 0 && unk_0x3E932F23D327A136(iVar8, iVar27) == 2)
				{
					Global_4456448.f_271[iVar0].f_596[iVar27] = unk_0xE082EE0DCA9466C4(iVar8, iVar27);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_596[iVar27] = 0;
				}
				if (iVar12 != 0 && unk_0x3E932F23D327A136(iVar12, iVar27) == 3)
				{
					Global_4456448.f_271[iVar0].f_201[iVar27] = unk_0x73F91AA610E60211(iVar12, iVar27);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_201[iVar27] = 1f;
				}
				if (iVar13 != 0 && unk_0x3E932F23D327A136(iVar13, iVar27) == 3)
				{
					Global_4456448.f_271[iVar0].f_467[iVar27] = unk_0x73F91AA610E60211(iVar13, iVar27);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_467[iVar27] = 1f;
				}
				if (iVar14 != 0 && unk_0x3E932F23D327A136(iVar14, iVar27) == 3)
				{
					Global_4456448.f_271[iVar0].f_732[iVar27] = unk_0x73F91AA610E60211(iVar14, iVar27);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_732[iVar27] = 1f;
				}
				iVar27++;
			}
			iVar27 = 0;
			while (iVar27 <= 11)
			{
				if (iVar9 != 0 && unk_0x3E932F23D327A136(iVar9, iVar27) == 2)
				{
					Global_4456448.f_271[iVar0].f_188[iVar27] = unk_0xE082EE0DCA9466C4(iVar9, iVar27);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_188[iVar27] = 0;
				}
				if (iVar10 != 0 && unk_0x3E932F23D327A136(iVar10, iVar27) == 2)
				{
					Global_4456448.f_271[iVar0].f_454[iVar27] = unk_0xE082EE0DCA9466C4(iVar10, iVar27);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_454[iVar27] = 0;
				}
				if (iVar11 != 0 && unk_0x3E932F23D327A136(iVar11, iVar27) == 2)
				{
					Global_4456448.f_271[iVar0].f_719[iVar27] = unk_0xE082EE0DCA9466C4(iVar11, iVar27);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_719[iVar27] = 0;
				}
				iVar27++;
			}
			iVar28 = 0;
			while (iVar28 <= 3)
			{
				if (iVar15 != 0 && unk_0x3E932F23D327A136(iVar15, iVar28) == 2)
				{
					Global_4456448.f_271[iVar0].f_859[iVar28] = unk_0xE082EE0DCA9466C4(iVar15, iVar28);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_859[iVar28] = -1;
				}
				if (iVar16 != 0 && unk_0x3E932F23D327A136(iVar16, iVar28) == 2)
				{
					Global_4456448.f_271[iVar0].f_864[iVar28] = unk_0xE082EE0DCA9466C4(iVar16, iVar28);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_864[iVar28] = -1;
				}
				iVar28++;
			}
			StringCopy(&cVar2, "icmsk1", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar17 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "icmsk2", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar18 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "icmsk3", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar19 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "itpreqs", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar20 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "mnvms", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar21 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "ivms", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar22 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "ivmsh", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar23 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "isvmg", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar24 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "isvro", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar25 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			StringCopy(&cVar2, "isvhr", 16);
			StringIntConCat(&cVar2, iVar0, 16);
			iVar26 = unk_0x7619952D26DF7783(*iParam0, &cVar2);
			iVar1 = 0;
			while (iVar1 <= (Global_4456448.f_271[iVar0].f_59 - 1))
			{
				if (!func_276(&iVar17, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_14243[iVar1] = unk_0xE082EE0DCA9466C4(iVar17, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_14243[iVar1] = 0;
				}
				if (!func_276(&iVar18, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_14261[iVar1] = unk_0xE082EE0DCA9466C4(iVar18, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_14261[iVar1] = 0;
				}
				if (!func_276(&iVar19, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_14279[iVar1] = unk_0xE082EE0DCA9466C4(iVar19, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_14279[iVar1] = 0;
				}
				if (!func_276(&iVar20, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_14385[iVar1] = unk_0xE082EE0DCA9466C4(iVar20, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_14385[iVar1] = 0;
				}
				if (!func_276(&iVar21, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13769[iVar1] = unk_0xE082EE0DCA9466C4(iVar21, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13769[iVar1] = 0;
				}
				if (!func_276(&iVar22, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13787[iVar1] = unk_0xE082EE0DCA9466C4(iVar22, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13787[iVar1] = 0;
				}
				if (!func_276(&iVar23, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13805[iVar1] = unk_0xE082EE0DCA9466C4(iVar23, iVar1);
					if (Global_4456448.f_271[iVar0].f_13805[iVar1] == 0)
					{
						Global_4456448.f_271[iVar0].f_13805[iVar1] = -1;
					}
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13805[iVar1] = -1;
				}
				if (!func_276(&iVar24, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13913[iVar1] = unk_0xE082EE0DCA9466C4(iVar24, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13913[iVar1] = -1;
				}
				if (!func_276(&iVar25, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13931[iVar1] = unk_0xE082EE0DCA9466C4(iVar25, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13931[iVar1] = -1;
				}
				if (!func_276(&iVar26, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13949[iVar1] = unk_0xE082EE0DCA9466C4(iVar26, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13949[iVar1] = -1;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_287(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_206 - 1))
	{
		if (iVar0 < 4)
		{
			iVar13 = 0;
			iVar14 = 0;
			iVar15 = 0;
			iVar16 = 0;
			iVar17 = 0;
			iVar18 = 0;
			iVar19 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar23 = 0;
			iVar24 = 0;
			iVar25 = 0;
			iVar26 = 0;
			iVar27 = 0;
			iVar28 = 0;
			iVar29 = 0;
			iVar30 = 0;
			iVar31 = 0;
			iVar32 = 0;
			iVar33 = 0;
			iVar34 = 0;
			iVar35 = 0;
			iVar36 = 0;
			iVar37 = 0;
			iVar38 = 0;
			iVar39 = 0;
			iVar40 = 0;
			iVar41 = 0;
			iVar42 = 0;
			iVar43 = 0;
			iVar44 = 0;
			iVar45 = 0;
			iVar46 = 0;
			iVar47 = 0;
			iVar48 = 0;
			iVar49 = 0;
			iVar50 = 0;
			iVar51 = 0;
			iVar52 = 0;
			iVar53 = 0;
			iVar54 = 0;
			iVar55 = 0;
			iVar56 = 0;
			iVar57 = 0;
			iVar58 = 0;
			iVar59 = 0;
			iVar60 = 0;
			iVar61 = 0;
			iVar62 = 0;
			iVar63 = 0;
			iVar64 = 0;
			iVar65 = 0;
			iVar66 = 0;
			iVar67 = 0;
			iVar68 = 0;
			iVar69 = 0;
			iVar70 = 0;
			iVar71 = 0;
			iVar72 = 0;
			iVar73 = 0;
			iVar74 = 0;
			iVar75 = 0;
			StringCopy(&Var2, "tmt", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar13 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "sudtm", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar14 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "tms", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar15 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "txt", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar16 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "tak", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar17 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "cap", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar18 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "lnkdr", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar19 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "lnkdr2", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar20 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "hscr", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar21 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "rsiv", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar22 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "wprs", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar23 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "wfrc", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar25 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "wchg", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar24 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "fkwl", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar26 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "wlreq", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar27 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "mxwl", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar28 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "wdly", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar29 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "ttlc", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar30 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "swtod", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar31 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "swtok", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar32 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "fsdtmr", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar67 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "mpftmr", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar66 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "artlit", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar33 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "mrtl", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar34 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "bmbtm", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar35 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "gpsdp", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar36 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "dcont", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar37 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "critw", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar38 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "diswp", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar39 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "frndf", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar40 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "dsosui", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar41 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "dpos", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar42 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "txt1", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar43 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "dpos2", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar44 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "dpost", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar45 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "dotim", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar46 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "dov", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar47 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "dost", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar48 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "dops", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar49 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "dovd", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar50 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "pl2an", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar51 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "lvbs", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar52 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "ovwty", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar53 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "ovwid", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar54 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "wldbs", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar55 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "drpr", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar56 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "drph", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar57 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "gbtp", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar58 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "irfbs", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar59 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "plvrl", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar60 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "hdmfp", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar68 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "hddstra", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar69 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			bVar6 = false;
			bVar7 = false;
			bVar8 = false;
			bVar9 = false;
			bVar10 = false;
			bVar11 = false;
			bVar12 = false;
			StringCopy(&Var2, "opl0", 16);
			StringIntConCat(&Var2, iVar0, 16);
			if (unk_0xAE496C664AE89A9C(*iParam0, &Var2) == 7)
			{
				bVar6 = true;
				iVar61 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			}
			StringCopy(&Var2, "opl1", 16);
			StringIntConCat(&Var2, iVar0, 16);
			if (unk_0xAE496C664AE89A9C(*iParam0, &Var2) == 7)
			{
				bVar7 = true;
				iVar62 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			}
			StringCopy(&Var2, "opl2", 16);
			StringIntConCat(&Var2, iVar0, 16);
			if (unk_0xAE496C664AE89A9C(*iParam0, &Var2) == 7)
			{
				bVar8 = true;
				iVar63 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			}
			StringCopy(&Var2, "opl3", 16);
			StringIntConCat(&Var2, iVar0, 16);
			if (unk_0xAE496C664AE89A9C(*iParam0, &Var2) == 7)
			{
				bVar9 = true;
				iVar64 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			}
			StringCopy(&Var2, "oplbs", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar65 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "mpot0", 16);
			StringIntConCat(&Var2, iVar0, 16);
			if (unk_0xAE496C664AE89A9C(*iParam0, &Var2) == 7)
			{
				bVar10 = true;
				iVar70 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			}
			StringCopy(&Var2, "mpot1", 16);
			StringIntConCat(&Var2, iVar0, 16);
			if (unk_0xAE496C664AE89A9C(*iParam0, &Var2) == 7)
			{
				bVar11 = true;
				iVar71 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			}
			StringCopy(&Var2, "mpot2", 16);
			StringIntConCat(&Var2, iVar0, 16);
			if (unk_0xAE496C664AE89A9C(*iParam0, &Var2) == 7)
			{
				bVar12 = true;
				iVar72 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			}
			StringCopy(&Var2, "rnrbs", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar73 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "cojr", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar74 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			StringCopy(&Var2, "cojc", 16);
			StringIntConCat(&Var2, iVar0, 16);
			iVar75 = unk_0x7619952D26DF7783(*iParam0, &Var2);
			iVar76 = unk_0x7619952D26DF7783(*iParam0, "tlimt");
			iVar1 = 0;
			while (iVar1 <= (Global_4456448.f_271[iVar0].f_59 - 1))
			{
				if (!func_276(&iVar13, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_961[iVar1] = unk_0xE082EE0DCA9466C4(iVar13, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_961[iVar1] = 0;
				}
				if (!func_276(&iVar14, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_979[iVar1] = unk_0xE082EE0DCA9466C4(iVar14, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_979[iVar1] = 0;
				}
				if (!func_276(&iVar15, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5252[iVar1] = unk_0xE082EE0DCA9466C4(iVar15, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5252[iVar1] = 0;
				}
				StringCopy(&Var2, "tak", 16);
				StringIntConCat(&Var2, iVar0, 16);
				func_199(&Var2, &(Global_4456448.f_271[iVar0].f_5324[iVar1]), iParam0, &iVar17, iVar1, 0, 0);
				if (!func_276(&iVar18, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5342[iVar1] = unk_0xE082EE0DCA9466C4(iVar18, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5342[iVar1] = 0;
				}
				if (!func_276(&iVar16, 4, iVar1))
				{
					StringCopy(&(Global_4456448.f_271[iVar0].f_9796[iVar1]), unk_0x3E4982E6ACD879AE(iVar16, iVar1), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_271[iVar0].f_9796[iVar1]), "", 64);
				}
				if (!func_276(&iVar19, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_905[iVar1] = unk_0xE082EE0DCA9466C4(iVar19, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_905[iVar1] = 0;
				}
				if (!func_276(&iVar20, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_923[iVar1] = unk_0xE082EE0DCA9466C4(iVar20, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_923[iVar1] = 0;
				}
				if (Global_4456448.f_271[iVar0].f_923[iVar1] == 0)
				{
					Global_4456448.f_271[iVar0].f_923[iVar1] = -1;
				}
				if (!func_276(&iVar21, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_943[iVar1] = unk_0xE082EE0DCA9466C4(iVar21, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_943[iVar1] = 0;
				}
				if (!func_276(&iVar25, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5378[iVar1] = unk_0xE082EE0DCA9466C4(iVar25, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5378[iVar1] = 0;
				}
				if (!func_276(&iVar24, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5360[iVar1] = unk_0xE082EE0DCA9466C4(iVar24, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5360[iVar1] = 0;
				}
				if (!func_276(&iVar26, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5400[iVar1] = unk_0xE082EE0DCA9466C4(iVar26, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5400[iVar1] = 0;
				}
				if (!func_276(&iVar27, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5418[iVar1] = unk_0xE082EE0DCA9466C4(iVar27, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5418[iVar1] = -2;
				}
				if (!func_276(&iVar28, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5436[iVar1] = unk_0xE082EE0DCA9466C4(iVar28, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5436[iVar1] = 1;
				}
				if (!func_276(&iVar29, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5456[iVar1] = unk_0xE082EE0DCA9466C4(iVar29, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5456[iVar1] = 10000;
				}
				if (!func_276(&iVar30, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5492[iVar1] = unk_0xE082EE0DCA9466C4(iVar30, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5492[iVar1] = -1;
				}
				if (!func_276(&iVar22, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_1357[iVar1] = unk_0xE082EE0DCA9466C4(iVar22, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_1357[iVar1] = 0;
				}
				if (!func_276(&iVar23, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_1375[iVar1] = unk_0xE082EE0DCA9466C4(iVar23, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_1375[iVar1] = 0;
				}
				if (!func_276(&iVar40, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_1429[iVar1] = unk_0xE082EE0DCA9466C4(iVar40, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_1429[iVar1] = 0;
				}
				if (!func_276(&iVar41, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_1447[iVar1] = unk_0xE082EE0DCA9466C4(iVar41, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_1447[iVar1] = 0;
				}
				if (!func_276(&iVar31, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_1393[iVar1] = unk_0xE082EE0DCA9466C4(iVar31, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_1393[iVar1] = -1;
				}
				if (!func_276(&iVar32, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_1411[iVar1] = unk_0xE082EE0DCA9466C4(iVar32, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_1411[iVar1] = -1;
				}
				if (!func_276(&iVar34, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5474[iVar1] = unk_0xE082EE0DCA9466C4(iVar34, iVar1);
				}
				else if (iVar76 != 0)
				{
					Global_4456448.f_271[iVar0].f_5474[iVar1] = unk_0xE082EE0DCA9466C4(iVar76, iVar0);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5474[iVar1] = 0;
				}
				if (!func_276(&iVar33, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_1483[iVar1] = unk_0xE082EE0DCA9466C4(iVar33, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_1483[iVar1] = -1;
				}
				if (!func_276(&iVar67, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_1015[iVar1] = unk_0xE082EE0DCA9466C4(iVar67, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_1015[iVar1] = 0;
				}
				if (!func_276(&iVar66, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_997[iVar1] = unk_0xE082EE0DCA9466C4(iVar66, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_997[iVar1] = 0;
				}
				if (!func_276(&iVar35, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_1465[iVar1] = unk_0xE082EE0DCA9466C4(iVar35, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_1465[iVar1] = 0;
				}
				if (!func_276(&iVar36, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_1501[iVar1] = unk_0xE082EE0DCA9466C4(iVar36, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_1501[iVar1] = 0;
				}
				if (!func_276(&iVar37, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13332[iVar1] = unk_0xE082EE0DCA9466C4(iVar37, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13332[iVar1] = 0;
				}
				if (!func_276(&iVar38, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13350[iVar1] = unk_0xE082EE0DCA9466C4(iVar38, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13350[iVar1] = 0;
				}
				if (!func_276(&iVar39, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13368[iVar1] = unk_0xE082EE0DCA9466C4(iVar39, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13368[iVar1] = 0;
				}
				if (!func_276(&iVar42, 5, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5903[iVar1] = { unk_0x6403E33233A20F75(iVar42, iVar1) };
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5903[iVar1] = { 0f, 0f, 0f };
				}
				if (!func_206())
				{
					if (!func_276(&iVar43, 4, iVar1))
					{
						StringCopy(&(Global_4456448.f_271[iVar0].f_10069[iVar1]), unk_0x3E4982E6ACD879AE(iVar43, iVar1), 64);
					}
					else
					{
						StringCopy(&(Global_4456448.f_271[iVar0].f_10069[iVar1]), "", 64);
					}
				}
				if (!func_276(&iVar44, 5, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5955[iVar1] = { unk_0x6403E33233A20F75(iVar44, iVar1) };
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5955[iVar1] = { 0f, 0f, 0f };
				}
				if (!func_276(&iVar45, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6043[iVar1] = unk_0xE082EE0DCA9466C4(iVar45, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6043[iVar1] = 0;
				}
				if (func_282())
				{
					if (Global_4456448.f_271[iVar0].f_6043[iVar1] != 1)
					{
						Global_4456448.f_271[iVar0].f_6043[iVar1] = 6;
					}
				}
				if (!func_276(&iVar46, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6079[iVar1] = unk_0xE082EE0DCA9466C4(iVar46, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6079[iVar1] = 0;
				}
				if (!func_276(&iVar58, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_5510[iVar1] = unk_0xE082EE0DCA9466C4(iVar58, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_5510[iVar1] = 0;
				}
				if (!func_276(&iVar56, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6007[iVar1] = unk_0x73F91AA610E60211(iVar56, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6007[iVar1] = 0f;
				}
				if (!func_276(&iVar57, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6025[iVar1] = unk_0x73F91AA610E60211(iVar57, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6025[iVar1] = 0,001f;
				}
				if (!func_276(&iVar59, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_9549[iVar1] = unk_0xE082EE0DCA9466C4(iVar59, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_9549[iVar1] = 0;
				}
				if (!func_276(&iVar60, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_39[iVar1] = unk_0xE082EE0DCA9466C4(iVar60, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_39[iVar1] = -1;
				}
				if (bVar6)
				{
					Global_4456448.f_271[iVar0].f_13105[iVar1][0] = unk_0xE082EE0DCA9466C4(iVar61, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13105[iVar1][0] = -1;
				}
				if (bVar7)
				{
					Global_4456448.f_271[iVar0].f_13105[iVar1][1] = unk_0xE082EE0DCA9466C4(iVar62, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13105[iVar1][1] = -1;
				}
				if (bVar8)
				{
					Global_4456448.f_271[iVar0].f_13105[iVar1][2] = unk_0xE082EE0DCA9466C4(iVar63, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13105[iVar1][2] = -1;
				}
				if (bVar9)
				{
					Global_4456448.f_271[iVar0].f_13105[iVar1][3] = unk_0xE082EE0DCA9466C4(iVar64, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13105[iVar1][3] = -1;
				}
				if (bVar10)
				{
					Global_4456448.f_271[iVar0].f_13209[iVar1][0] = unk_0xE082EE0DCA9466C4(iVar70, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13209[iVar1][0] = -1;
				}
				if (bVar11)
				{
					Global_4456448.f_271[iVar0].f_13209[iVar1][1] = unk_0xE082EE0DCA9466C4(iVar71, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13209[iVar1][1] = -1;
				}
				if (bVar12)
				{
					Global_4456448.f_271[iVar0].f_13209[iVar1][2] = unk_0xE082EE0DCA9466C4(iVar72, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13209[iVar1][2] = -1;
				}
				if (!func_276(&iVar73, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13278[iVar1] = unk_0xE082EE0DCA9466C4(iVar73, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13278[iVar1] = 0;
				}
				if (!func_276(&iVar74, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13296[iVar1] = unk_0xE082EE0DCA9466C4(iVar74, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13296[iVar1] = -1;
				}
				if (!func_276(&iVar75, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13314[iVar1] = unk_0xE082EE0DCA9466C4(iVar75, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13314[iVar1] = 0;
				}
				iVar77 = Global_4456448.f_271[iVar0].f_59;
				while (iVar77 <= 31)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_271[iVar0].f_13278[iVar1], iVar77))
					{
						unk_0x0674E58A79778E99(&(Global_4456448.f_271[iVar0].f_13278[iVar1]), iVar77);
					}
					iVar77++;
				}
				if (!func_276(&iVar68, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13733[iVar1] = unk_0xE082EE0DCA9466C4(iVar68, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13733[iVar1] = 0;
				}
				if (!func_276(&iVar69, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_14297[iVar1] = unk_0xE082EE0DCA9466C4(iVar69, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_14297[iVar1] = 0;
				}
				if (!func_276(&iVar47, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6061[iVar1] = unk_0xE082EE0DCA9466C4(iVar47, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6061[iVar1] = -1;
				}
				if (!func_276(&iVar48, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6097[iVar1] = unk_0x73F91AA610E60211(iVar48, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6097[iVar1] = -1f;
				}
				if (!func_276(&iVar49, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6115[iVar1] = unk_0x73F91AA610E60211(iVar49, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6115[iVar1] = -1f;
				}
				if (!func_276(&iVar50, 3, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6133[iVar1] = unk_0x73F91AA610E60211(iVar50, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6133[iVar1] = 1f;
				}
				if (!func_276(&iVar51, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6171[iVar1] = unk_0xE082EE0DCA9466C4(iVar51, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6171[iVar1] = 0;
				}
				if (!func_276(&iVar52, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_6153[iVar1] = unk_0xE082EE0DCA9466C4(iVar52, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_6153[iVar1] = 0;
				}
				if (!func_276(&iVar53, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13584[iVar1] = unk_0xE082EE0DCA9466C4(iVar53, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13584[iVar1] = 0;
				}
				if (!func_276(&iVar54, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13602[iVar1] = unk_0xE082EE0DCA9466C4(iVar54, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13602[iVar1] = -1;
				}
				if (!func_276(&iVar55, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13620[iVar1] = unk_0xE082EE0DCA9466C4(iVar55, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13620[iVar1] = 0;
				}
				if (!func_276(&iVar65, 2, iVar1))
				{
					Global_4456448.f_271[iVar0].f_13191[iVar1] = unk_0xE082EE0DCA9466C4(iVar65, iVar1);
				}
				else
				{
					Global_4456448.f_271[iVar0].f_13191[iVar1] = 0;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_288(int iParam0)
{
	iVar2 = unk_0x7619952D26DF7783(*iParam0, "numpt");
	iVar3 = unk_0x7619952D26DF7783(*iParam0, "ptint");
	iVar4 = unk_0x7619952D26DF7783(*iParam0, "pptint");
	bVar6 = true;
	if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, "mnumpt") != 2)
	{
		bVar6 = false;
		iVar5 = unk_0x7619952D26DF7783(*iParam0, "mnumpt");
	}
	iVar7 = unk_0x7619952D26DF7783(*iParam0, "tcp");
	iVar8 = unk_0x7619952D26DF7783(*iParam0, "tcr");
	iVar9 = unk_0x7619952D26DF7783(*iParam0, "abits");
	iVar10 = unk_0x7619952D26DF7783(*iParam0, "sdobs");
	iVar11 = unk_0x7619952D26DF7783(*iParam0, "edobs");
	iVar12 = unk_0x7619952D26DF7783(*iParam0, "dogps");
	iVar13 = unk_0x7619952D26DF7783(*iParam0, "teamv");
	iVar14 = unk_0x7619952D26DF7783(*iParam0, "ireveh");
	iVar15 = unk_0x7619952D26DF7783(*iParam0, "teamrvc");
	iVar16 = unk_0x7619952D26DF7783(*iParam0, "teamrvbh");
	iVar17 = unk_0x7619952D26DF7783(*iParam0, "teamrvcs");
	iVar18 = unk_0x7619952D26DF7783(*iParam0, "teamrvp");
	iVar19 = unk_0x7619952D26DF7783(*iParam0, "mcvbs");
	iVar20 = unk_0x7619952D26DF7783(*iParam0, "mcobs");
	iVar21 = unk_0x7619952D26DF7783(*iParam0, "mcpbs");
	iVar22 = unk_0x7619952D26DF7783(*iParam0, "mcgbs");
	iVar23 = unk_0x7619952D26DF7783(*iParam0, "rpgbs");
	iVar24 = unk_0x7619952D26DF7783(*iParam0, "mcpbs1");
	iVar25 = unk_0x7619952D26DF7783(*iParam0, "mcpbs2");
	iVar26 = unk_0x7619952D26DF7783(*iParam0, "mcpbs3");
	iVar27 = unk_0x7619952D26DF7783(*iParam0, "mcgbs1");
	iVar28 = unk_0x7619952D26DF7783(*iParam0, "mcgbs2");
	iVar29 = unk_0x7619952D26DF7783(*iParam0, "mcgbs3");
	iVar30 = unk_0x7619952D26DF7783(*iParam0, "rpgbs1");
	iVar31 = unk_0x7619952D26DF7783(*iParam0, "rpgbs2");
	iVar32 = unk_0x7619952D26DF7783(*iParam0, "rpgbs3");
	iVar33 = unk_0x7619952D26DF7783(*iParam0, "inpts");
	iVar34 = unk_0x7619952D26DF7783(*iParam0, "ldsf1");
	iVar35 = unk_0x7619952D26DF7783(*iParam0, "ldsf2");
	iVar36 = 1;
	if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, "tehlh") == 7)
	{
		iVar37 = unk_0x7619952D26DF7783(*iParam0, "tehlh");
		iVar36 = 1;
	}
	else
	{
		iVar36 = 0;
	}
	iVar38 = unk_0x7619952D26DF7783(*iParam0, "tehrn");
	iVar39 = unk_0x7619952D26DF7783(*iParam0, "spsy1");
	iVar40 = unk_0x7619952D26DF7783(*iParam0, "spsy2");
	iVar41 = unk_0x7619952D26DF7783(*iParam0, "tenms");
	iVar42 = unk_0x7619952D26DF7783(*iParam0, "tmwntd");
	iVar43 = unk_0x7619952D26DF7783(*iParam0, "tmfrcwp");
	iVar44 = unk_0x7619952D26DF7783(*iParam0, "csttn");
	iVar45 = unk_0x7619952D26DF7783(*iParam0, "cstrn");
	iVar46 = unk_0x7619952D26DF7783(*iParam0, "nrl");
	iVar47 = unk_0x7619952D26DF7783(*iParam0, "tstrt");
	iVar48 = unk_0x7619952D26DF7783(*iParam0, "tstop");
	iVar49 = unk_0x7619952D26DF7783(*iParam0, "sms");
	iVar50 = unk_0x7619952D26DF7783(*iParam0, "tblpv1");
	iVar51 = unk_0x7619952D26DF7783(*iParam0, "tblpv2");
	iVar52 = unk_0x7619952D26DF7783(*iParam0, "tblpv3");
	iVar53 = unk_0x7619952D26DF7783(*iParam0, "tblpv4");
	iVar54 = unk_0x7619952D26DF7783(*iParam0, "thudv1");
	iVar55 = unk_0x7619952D26DF7783(*iParam0, "thudv2");
	iVar56 = unk_0x7619952D26DF7783(*iParam0, "thudv3");
	iVar57 = unk_0x7619952D26DF7783(*iParam0, "thudv4");
	iVar58 = unk_0x7619952D26DF7783(*iParam0, "thlb1");
	iVar59 = unk_0x7619952D26DF7783(*iParam0, "thlb2");
	iVar60 = unk_0x7619952D26DF7783(*iParam0, "thlb3");
	iVar61 = unk_0x7619952D26DF7783(*iParam0, "thlb4");
	iVar62 = unk_0x7619952D26DF7783(*iParam0, "rcst1q");
	iVar63 = unk_0x7619952D26DF7783(*iParam0, "rcst2q");
	iVar64 = unk_0x7619952D26DF7783(*iParam0, "rcst3q");
	iVar65 = unk_0x7619952D26DF7783(*iParam0, "rcst4q");
	iVar66 = unk_0x7619952D26DF7783(*iParam0, "tvmt");
	iVar67 = unk_0x7619952D26DF7783(*iParam0, "tvma");
	iVar68 = unk_0x7619952D26DF7783(*iParam0, "tvmac");
	iVar69 = unk_0x7619952D26DF7783(*iParam0, "tvmet");
	iVar70 = unk_0x7619952D26DF7783(*iParam0, "tvmBomb");
	iVar71 = unk_0x7619952D26DF7783(*iParam0, "tvmspoil");
	iVar72 = unk_0x7619952D26DF7783(*iParam0, "tvmCMO1");
	iVar73 = unk_0x7619952D26DF7783(*iParam0, "tvmCMO2");
	iVar0 = 0;
	while (iVar0 <= (unk_0x3C3D078CBB366B45(iVar49) - 1))
	{
		uVar74[iVar0] = unk_0xAC7E36D102B92704(iVar49, iVar0);
		Global_4456448.f_63966[iVar0] = unk_0x8A83B52A17A321DB(uVar74[iVar0], "team");
		Global_4456448.f_63966[iVar0].f_1 = unk_0x8A83B52A17A321DB(uVar74[iVar0], "smsdt");
		Global_4456448.f_63966[iVar0].f_2 = unk_0x8A83B52A17A321DB(uVar74[iVar0], "rule");
		Global_4456448.f_63966[iVar0].f_3 = unk_0x8A83B52A17A321DB(uVar74[iVar0], "time");
		func_249("smsc", &(Global_4456448.f_63966[iVar0].f_40), &(uVar74[iVar0]), -1, -1);
		func_249("smstl", &(Global_4456448.f_63966[iVar0].f_41), &(uVar74[iVar0]), 0, -2340845);
		iVar85 = 0;
		while (iVar85 <= 1)
		{
			StringCopy(&cVar86, "txt", 8);
			StringIntConCat(&cVar86, iVar85, 8);
			if (unk_0xAE496C664AE89A9C(uVar74[iVar0], &cVar86) == 4)
			{
				StringCopy(&(Global_4456448.f_63966[iVar0].f_6[iVar85]), unk_0x6F58F8DD6B54A28D(uVar74[iVar0], &cVar86), 64);
			}
			iVar85++;
		}
		Global_4456448.f_63966[iVar0].f_5 = unk_0x8A83B52A17A321DB(uVar74[iVar0], "delay");
		Global_4456448.f_63966[iVar0].f_39 = unk_0x8A83B52A17A321DB(uVar74[iVar0], "sndall");
		Global_4456448.f_63966[iVar0].f_4 = unk_0x8A83B52A17A321DB(uVar74[iVar0], "ptsreq");
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_206 - 1))
	{
		if (iVar0 < 4)
		{
			if (iVar13 != 0)
			{
				iVar1 = unk_0xE082EE0DCA9466C4(iVar13, iVar0);
				Global_4456448.f_78156[iVar0] = iVar1;
			}
			else
			{
				Global_4456448.f_78156[iVar0] = 0;
			}
			if (iVar14 != 0)
			{
				Global_4456448.f_63082[iVar0] = unk_0xE082EE0DCA9466C4(iVar14, iVar0);
			}
			else
			{
				Global_4456448.f_63082[iVar0] = -1;
			}
			if (iVar15 != 0)
			{
				Global_4456448.f_78204[iVar0] = unk_0xE082EE0DCA9466C4(iVar15, iVar0);
			}
			else
			{
				Global_4456448.f_78204[iVar0] = -1;
			}
			if (iVar16 != 0)
			{
				Global_4456448.f_78219[iVar0] = unk_0xE082EE0DCA9466C4(iVar16, iVar0);
			}
			else
			{
				Global_4456448.f_78219[iVar0] = 1001;
			}
			if (iVar17 != 0)
			{
				Global_4456448.f_78214[iVar0] = unk_0xE082EE0DCA9466C4(iVar17, iVar0);
			}
			else
			{
				Global_4456448.f_78214[iVar0] = -1;
			}
			if (iVar18 != 0)
			{
				Global_4456448.f_78199[iVar0] = unk_0xE082EE0DCA9466C4(iVar18, iVar0);
			}
			else
			{
				Global_4456448.f_78199[iVar0] = 0;
			}
			if (iVar2 != 0)
			{
				Global_4456448.f_208[iVar0] = unk_0xE082EE0DCA9466C4(iVar2, iVar0);
			}
			if (Global_4456448.f_208[iVar0] < 1)
			{
				Global_4456448.f_208[iVar0] = 1;
			}
			if (iVar3 != 0)
			{
				if ((func_70(Global_4456448.f_232883) && Global_262145.f_20714) && !Global_1652616)
				{
					Global_4456448.f_64849[iVar0] = 4;
				}
				else
				{
					Global_4456448.f_64849[iVar0] = unk_0xE082EE0DCA9466C4(iVar3, iVar0);
				}
			}
			else
			{
				Global_4456448.f_64849[iVar0] = -1;
			}
			if (iVar4 != 0)
			{
				if ((func_70(Global_4456448.f_232883) && Global_262145.f_20714) && !Global_1652616)
				{
					Global_4456448.f_64854[iVar0] = 1;
				}
				else
				{
					Global_4456448.f_64854[iVar0] = unk_0xE082EE0DCA9466C4(iVar4, iVar0);
				}
			}
			else
			{
				Global_4456448.f_64854[iVar0] = -1;
			}
			if (bVar6)
			{
				Global_4456448.f_213[iVar0] = 0;
			}
			else
			{
				if (iVar5 != 0)
				{
					Global_4456448.f_213[iVar0] = unk_0xE082EE0DCA9466C4(iVar5, iVar0);
				}
				if (Global_4456448.f_213[iVar0] < 0)
				{
					Global_4456448.f_213[iVar0] = 0;
				}
			}
			if (iVar7 != 0)
			{
				Global_4456448.f_271[iVar0].f_4 = { unk_0x6403E33233A20F75(iVar7, iVar0) };
			}
			if (iVar8 != 0)
			{
				Global_4456448.f_271[iVar0].f_7 = { unk_0x6403E33233A20F75(iVar8, iVar0) };
			}
			if (iVar9 != 0)
			{
				Global_4456448.f_271[iVar0].f_1519 = unk_0xE082EE0DCA9466C4(iVar9, iVar0);
			}
			if (iVar10 != 0)
			{
				Global_4456448.f_271[iVar0].f_1520 = unk_0xE082EE0DCA9466C4(iVar10, iVar0);
			}
			if (iVar11 != 0)
			{
				Global_4456448.f_271[iVar0].f_1521 = unk_0xE082EE0DCA9466C4(iVar11, iVar0);
			}
			if (iVar12 != 0)
			{
				Global_4456448.f_271[iVar0].f_1522 = unk_0xE082EE0DCA9466C4(iVar12, iVar0);
			}
			if ((iVar34 != 0 && unk_0x3E932F23D327A136(iVar34, iVar0) == 2) && iVar34 != 0)
			{
				Global_4456448.f_271[iVar0].f_941 = unk_0xE082EE0DCA9466C4(iVar34, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_941 = 0;
			}
			if ((iVar35 != 0 && unk_0x3E932F23D327A136(iVar35, iVar0) == 2) && iVar35 != 0)
			{
				Global_4456448.f_271[iVar0].f_942 = unk_0xE082EE0DCA9466C4(iVar35, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_942 = 0;
			}
			if (iVar19 != 0)
			{
				Global_4456448.f_63956[iVar0] = unk_0xE082EE0DCA9466C4(iVar19, iVar0);
			}
			if (iVar20 != 0 && unk_0x3E932F23D327A136(iVar20, iVar0) == 2)
			{
				Global_4456448.f_63961[iVar0] = unk_0xE082EE0DCA9466C4(iVar20, iVar0);
			}
			else
			{
				Global_4456448.f_63961[iVar0] = 0;
			}
			if (iVar21 != 0)
			{
				Global_4456448.f_63939[iVar0][0] = unk_0xE082EE0DCA9466C4(iVar21, iVar0);
			}
			if (iVar24 != 0)
			{
				Global_4456448.f_63939[iVar0][0] = unk_0xE082EE0DCA9466C4(iVar24, iVar0);
			}
			if (iVar25 != 0)
			{
				Global_4456448.f_63939[iVar0][1] = unk_0xE082EE0DCA9466C4(iVar25, iVar0);
			}
			if (iVar26 != 0)
			{
				Global_4456448.f_63939[iVar0][2] = unk_0xE082EE0DCA9466C4(iVar26, iVar0);
			}
			if (iVar22 != 0)
			{
				Global_4456448.f_63922[iVar0][0] = unk_0xE082EE0DCA9466C4(iVar22, iVar0);
			}
			if (iVar27 != 0)
			{
				Global_4456448.f_63922[iVar0][0] = unk_0xE082EE0DCA9466C4(iVar27, iVar0);
			}
			if (iVar28 != 0)
			{
				Global_4456448.f_63922[iVar0][1] = unk_0xE082EE0DCA9466C4(iVar28, iVar0);
			}
			if (iVar29 != 0)
			{
				Global_4456448.f_63922[iVar0][2] = unk_0xE082EE0DCA9466C4(iVar29, iVar0);
			}
			if (iVar23 != 0)
			{
				Global_4456448.f_63905[iVar0][0] = unk_0xE082EE0DCA9466C4(iVar23, iVar0);
			}
			if (iVar30 != 0)
			{
				Global_4456448.f_63905[iVar0][0] = unk_0xE082EE0DCA9466C4(iVar30, iVar0);
			}
			if (iVar31 != 0)
			{
				Global_4456448.f_63905[iVar0][1] = unk_0xE082EE0DCA9466C4(iVar31, iVar0);
			}
			if (iVar32 != 0)
			{
				Global_4456448.f_63905[iVar0][2] = unk_0xE082EE0DCA9466C4(iVar32, iVar0);
			}
			if (iVar33 != 0)
			{
				Global_4456448.f_63123[iVar0] = unk_0xE082EE0DCA9466C4(iVar33, iVar0);
			}
			if (iVar36 && iVar37 != 0)
			{
				Global_4456448.f_63155[iVar0] = unk_0xE082EE0DCA9466C4(iVar37, iVar0);
			}
			else
			{
				Global_4456448.f_63155[iVar0] = 3;
			}
			if (iVar38 != 0 && unk_0x3E932F23D327A136(iVar38, iVar0) == 2)
			{
				Global_4456448.f_63160[iVar0] = unk_0xE082EE0DCA9466C4(iVar38, iVar0);
			}
			if (iVar66 != 0 && unk_0x3E932F23D327A136(iVar66, iVar0) == 2)
			{
				Global_4456448.f_63175[iVar0] = unk_0xE082EE0DCA9466C4(iVar66, iVar0);
			}
			if (iVar67 != 0 && unk_0x3E932F23D327A136(iVar67, iVar0) == 2)
			{
				Global_4456448.f_63180[iVar0] = unk_0xE082EE0DCA9466C4(iVar67, iVar0);
			}
			if (iVar68 != 0 && unk_0x3E932F23D327A136(iVar68, iVar0) == 2)
			{
				Global_4456448.f_63185[iVar0] = unk_0xE082EE0DCA9466C4(iVar68, iVar0);
			}
			if (iVar69 != 0 && unk_0x3E932F23D327A136(iVar69, iVar0) == 2)
			{
				Global_4456448.f_63190[iVar0] = unk_0xE082EE0DCA9466C4(iVar69, iVar0);
			}
			if (iVar70 != 0 && unk_0x3E932F23D327A136(iVar70, iVar0) == 2)
			{
				Global_4456448.f_63205[iVar0] = unk_0xE082EE0DCA9466C4(iVar70, iVar0);
			}
			if (iVar71 != 0 && unk_0x3E932F23D327A136(iVar71, iVar0) == 2)
			{
				Global_4456448.f_63210[iVar0] = unk_0xE082EE0DCA9466C4(iVar71, iVar0);
			}
			if (iVar72 != 0 && unk_0x3E932F23D327A136(iVar72, iVar0) == 2)
			{
				Global_4456448.f_63195[iVar0] = unk_0xE082EE0DCA9466C4(iVar72, iVar0);
			}
			if (iVar73 != 0 && unk_0x3E932F23D327A136(iVar73, iVar0) == 2)
			{
				Global_4456448.f_63200[iVar0] = unk_0xE082EE0DCA9466C4(iVar73, iVar0);
			}
			if (iVar39 != 0)
			{
				StringCopy(&(Global_4456448.f_271[iVar0].f_13072[0]), unk_0x3E4982E6ACD879AE(iVar39, iVar0), 64);
			}
			if (iVar40 != 0)
			{
				StringCopy(&(Global_4456448.f_271[iVar0].f_13072[1]), unk_0x3E4982E6ACD879AE(iVar40, iVar0), 64);
			}
			if (iVar41 != 0)
			{
				Global_4456448.f_63128[iVar0] = unk_0xE082EE0DCA9466C4(iVar41, iVar0);
			}
			if (iVar42 != 0)
			{
				Global_4456448.f_63165[iVar0] = unk_0xE082EE0DCA9466C4(iVar42, iVar0);
			}
			if (iVar43 != 0)
			{
				Global_4456448.f_63170[iVar0] = unk_0xE082EE0DCA9466C4(iVar43, iVar0);
			}
			if (iVar44 != 0)
			{
				StringCopy(&(Global_4456448.f_63133[iVar0]), unk_0x3E4982E6ACD879AE(iVar44, iVar0), 16);
			}
			if (iVar45 != 0)
			{
				Global_4456448.f_63150[iVar0] = unk_0xE082EE0DCA9466C4(iVar45, iVar0);
			}
			if ((iVar47 != 0 && unk_0x3E932F23D327A136(iVar47, iVar0) == 2) && iVar47 != 0)
			{
				Global_4456448.f_207981[iVar0] = unk_0xE082EE0DCA9466C4(iVar47, iVar0);
			}
			if ((iVar48 != 0 && unk_0x3E932F23D327A136(iVar48, iVar0) == 2) && iVar48 != 0)
			{
				Global_4456448.f_207986[iVar0] = unk_0xE082EE0DCA9466C4(iVar48, iVar0);
			}
			if (iVar46 != 0)
			{
				Global_4456448.f_271[iVar0].f_59 = unk_0xE082EE0DCA9466C4(iVar46, iVar0);
			}
			if (iVar50 != 0 && unk_0x3E932F23D327A136(iVar50, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_9758 = unk_0xE082EE0DCA9466C4(iVar50, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_9758 = 0;
			}
			if (iVar51 != 0 && unk_0x3E932F23D327A136(iVar51, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_9759 = unk_0xE082EE0DCA9466C4(iVar51, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_9759 = 0;
			}
			if (iVar52 != 0 && unk_0x3E932F23D327A136(iVar52, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_9760 = unk_0xE082EE0DCA9466C4(iVar52, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_9760 = 0;
			}
			if (iVar53 != 0 && unk_0x3E932F23D327A136(iVar53, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_9761 = unk_0xE082EE0DCA9466C4(iVar53, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_9761 = 0;
			}
			if (iVar54 != 0 && unk_0x3E932F23D327A136(iVar54, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_9762 = unk_0xE082EE0DCA9466C4(iVar54, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_9762 = 0;
			}
			if (iVar55 != 0 && unk_0x3E932F23D327A136(iVar55, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_9763 = unk_0xE082EE0DCA9466C4(iVar55, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_9763 = 0;
			}
			if (iVar56 != 0 && unk_0x3E932F23D327A136(iVar56, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_9764 = unk_0xE082EE0DCA9466C4(iVar56, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_9764 = 0;
			}
			if (iVar57 != 0 && unk_0x3E932F23D327A136(iVar57, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_9765 = unk_0xE082EE0DCA9466C4(iVar57, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_9765 = 0;
			}
			if (iVar58 != 0 && unk_0x3E932F23D327A136(iVar58, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_9766 = unk_0xE082EE0DCA9466C4(iVar58, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_9766 = 0;
			}
			if (iVar59 != 0 && unk_0x3E932F23D327A136(iVar59, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_9767 = unk_0xE082EE0DCA9466C4(iVar59, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_9767 = 0;
			}
			if (iVar60 != 0 && unk_0x3E932F23D327A136(iVar60, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_9768 = unk_0xE082EE0DCA9466C4(iVar60, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_9768 = 0;
			}
			if (iVar61 != 0 && unk_0x3E932F23D327A136(iVar61, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_9769 = unk_0xE082EE0DCA9466C4(iVar61, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_9769 = 0;
			}
			if (iVar62 != 0 && unk_0x3E932F23D327A136(iVar62, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_9770 = unk_0xE082EE0DCA9466C4(iVar62, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_9770 = 0;
			}
			if (iVar63 != 0 && unk_0x3E932F23D327A136(iVar63, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_9771 = unk_0xE082EE0DCA9466C4(iVar63, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_9771 = 0;
			}
			if (iVar64 != 0 && unk_0x3E932F23D327A136(iVar64, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_9772 = unk_0xE082EE0DCA9466C4(iVar64, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_9772 = 0;
			}
			if (iVar65 != 0 && unk_0x3E932F23D327A136(iVar65, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_9773 = unk_0xE082EE0DCA9466C4(iVar65, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_9773 = 0;
			}
		}
		iVar0++;
	}
}

void func_289(int iParam0)
{
	iVar1 = unk_0x7619952D26DF7783(*iParam0, "stpos");
	iVar2 = unk_0x7619952D26DF7783(*iParam0, "delr");
	iVar3 = unk_0x7619952D26DF7783(*iParam0, "epos");
	iVar4 = unk_0x7619952D26DF7783(*iParam0, "endr");
	iVar5 = unk_0x7619952D26DF7783(*iParam0, "vareapos");
	iVar6 = unk_0x7619952D26DF7783(*iParam0, "arear");
	iVar7 = unk_0x7619952D26DF7783(*iParam0, "time");
	iVar8 = unk_0x7619952D26DF7783(*iParam0, "plkr");
	iVar9 = unk_0x7619952D26DF7783(*iParam0, "pekr");
	iVar10 = unk_0x7619952D26DF7783(*iParam0, "vhkr");
	iVar11 = unk_0x7619952D26DF7783(*iParam0, "obkr");
	iVar12 = unk_0x7619952D26DF7783(*iParam0, "dr");
	iVar13 = unk_0x7619952D26DF7783(*iParam0, "pedr");
	iVar14 = unk_0x7619952D26DF7783(*iParam0, "vedr");
	iVar15 = unk_0x7619952D26DF7783(*iParam0, "obdr");
	iVar16 = unk_0x7619952D26DF7783(*iParam0, "lwmbs");
	iVar17 = unk_0x7619952D26DF7783(*iParam0, "flmbs");
	iVar18 = unk_0x7619952D26DF7783(*iParam0, "vdoibs");
	iVar19 = unk_0x7619952D26DF7783(*iParam0, "vdohu");
	iVar20 = unk_0x7619952D26DF7783(*iParam0, "tmbts");
	iVar21 = unk_0x7619952D26DF7783(*iParam0, "tmbt2");
	iVar22 = unk_0x7619952D26DF7783(*iParam0, "tmbt3");
	iVar23 = unk_0x7619952D26DF7783(*iParam0, "tmbt4");
	iVar24 = unk_0x7619952D26DF7783(*iParam0, "swmbs");
	iVar25 = unk_0x7619952D26DF7783(*iParam0, "gbmbs");
	iVar26 = unk_0x7619952D26DF7783(*iParam0, "pcbd");
	iVar27 = unk_0x7619952D26DF7783(*iParam0, "lwbs");
	iVar28 = unk_0x7619952D26DF7783(*iParam0, "wodia");
	iVar29 = unk_0x7619952D26DF7783(*iParam0, "repcr");
	iVar30 = unk_0x7619952D26DF7783(*iParam0, "woabs");
	iVar31 = unk_0x7619952D26DF7783(*iParam0, "fwoabs");
	iVar32 = unk_0x7619952D26DF7783(*iParam0, "fail");
	iVar33 = unk_0x7619952D26DF7783(*iParam0, "vehrsp");
	iVar34 = unk_0x7619952D26DF7783(*iParam0, "rilmvbs");
	iVar35 = unk_0x7619952D26DF7783(*iParam0, "spit");
	iVar36 = unk_0x7619952D26DF7783(*iParam0, "pglr");
	iVar37 = unk_0x7619952D26DF7783(*iParam0, "nora");
	iVar38 = unk_0x7619952D26DF7783(*iParam0, "mtlr");
	iVar39 = unk_0x7619952D26DF7783(*iParam0, "mslr");
	iVar40 = unk_0x7619952D26DF7783(*iParam0, "mlpl");
	iVar41 = unk_0x7619952D26DF7783(*iParam0, "mlpd");
	iVar42 = unk_0x7619952D26DF7783(*iParam0, "mlpm");
	iVar43 = unk_0x7619952D26DF7783(*iParam0, "plyl");
	iVar44 = unk_0x7619952D26DF7783(*iParam0, "shd");
	iVar45 = unk_0x7619952D26DF7783(*iParam0, "spar");
	iVar46 = unk_0x7619952D26DF7783(*iParam0, "2spar");
	iVar47 = unk_0x7619952D26DF7783(*iParam0, "boud");
	iVar48 = unk_0x7619952D26DF7783(*iParam0, "bla");
	iVar49 = unk_0x7619952D26DF7783(*iParam0, "wla");
	iVar50 = unk_0x7619952D26DF7783(*iParam0, "patm");
	iVar51 = unk_0x7619952D26DF7783(*iParam0, "bnd2");
	iVar52 = unk_0x7619952D26DF7783(*iParam0, "bla2");
	iVar53 = unk_0x7619952D26DF7783(*iParam0, "wla2");
	iVar54 = unk_0x7619952D26DF7783(*iParam0, "pat2");
	iVar55 = unk_0x7619952D26DF7783(*iParam0, "inv");
	iVar56 = unk_0x7619952D26DF7783(*iParam0, "inv2");
	iVar57 = unk_0x7619952D26DF7783(*iParam0, "inv3");
	iVar58 = unk_0x7619952D26DF7783(*iParam0, "inv4");
	iVar59 = unk_0x7619952D26DF7783(*iParam0, "invsw");
	iVar60 = unk_0x7619952D26DF7783(*iParam0, "invtm");
	iVar61 = unk_0x7619952D26DF7783(*iParam0, "invrl");
	iVar62 = unk_0x7619952D26DF7783(*iParam0, "inv2tm");
	iVar63 = unk_0x7619952D26DF7783(*iParam0, "inv2rl");
	iVar64 = unk_0x7619952D26DF7783(*iParam0, "sinv");
	iVar65 = unk_0x7619952D26DF7783(*iParam0, "sinv2");
	iVar66 = unk_0x7619952D26DF7783(*iParam0, "sinv3");
	iVar67 = unk_0x7619952D26DF7783(*iParam0, "sinv4");
	iVar68 = unk_0x7619952D26DF7783(*iParam0, "minv");
	iVar69 = unk_0x7619952D26DF7783(*iParam0, "mmsw");
	iVar70 = unk_0x7619952D26DF7783(*iParam0, "mmsw2");
	iVar71 = unk_0x7619952D26DF7783(*iParam0, "minv2");
	iVar72 = unk_0x7619952D26DF7783(*iParam0, "minv3");
	iVar73 = unk_0x7619952D26DF7783(*iParam0, "minv4");
	iVar74 = unk_0x7619952D26DF7783(*iParam0, "ppk");
	iVar75 = unk_0x7619952D26DF7783(*iParam0, "mts");
	iVar76 = unk_0x7619952D26DF7783(*iParam0, "spwia");
	iVar77 = unk_0x7619952D26DF7783(*iParam0, "2spwia");
	iVar78 = unk_0x7619952D26DF7783(*iParam0, "pcl");
	iVar79 = unk_0x7619952D26DF7783(*iParam0, "ocl");
	iVar80 = unk_0x7619952D26DF7783(*iParam0, "arrt");
	iVar81 = unk_0x7619952D26DF7783(*iParam0, "thfa");
	iVar82 = unk_0x7619952D26DF7783(*iParam0, "ttca");
	iVar83 = unk_0x7619952D26DF7783(*iParam0, "sipis");
	iVar84 = unk_0x7619952D26DF7783(*iParam0, "sipiv");
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_206 - 1))
	{
		if (iVar0 < 4)
		{
			if (iVar1 != 0)
			{
				Global_4456448.f_271[iVar0] = { unk_0x6403E33233A20F75(iVar1, iVar0) };
			}
			if (iVar16 != 0)
			{
				Global_4456448.f_271[iVar0].f_5397 = unk_0xE082EE0DCA9466C4(iVar16, iVar0);
			}
			if (iVar17 != 0)
			{
				Global_4456448.f_271[iVar0].f_5454 = unk_0xE082EE0DCA9466C4(iVar17, iVar0);
			}
			if (iVar18 != 0)
			{
				Global_4456448.f_271[iVar0].f_6151 = unk_0xE082EE0DCA9466C4(iVar18, iVar0);
			}
			if (iVar19 != 0 && unk_0x3E932F23D327A136(iVar19, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_6152 = unk_0xE082EE0DCA9466C4(iVar19, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_6152 = 0;
			}
			if (iVar20 != 0)
			{
				Global_4456448.f_271[iVar0].f_9567 = unk_0xE082EE0DCA9466C4(iVar20, iVar0);
			}
			if (iVar21 != 0)
			{
				Global_4456448.f_271[iVar0].f_9568 = unk_0xE082EE0DCA9466C4(iVar21, iVar0);
			}
			if (iVar22 != 0)
			{
				Global_4456448.f_271[iVar0].f_9569 = unk_0xE082EE0DCA9466C4(iVar22, iVar0);
			}
			if (iVar23 != 0)
			{
				Global_4456448.f_271[iVar0].f_9570 = unk_0xE082EE0DCA9466C4(iVar23, iVar0);
			}
			if (iVar24 != 0)
			{
				Global_4456448.f_271[iVar0].f_5399 = unk_0xE082EE0DCA9466C4(iVar24, iVar0);
			}
			if (iVar25 != 0)
			{
				Global_4456448.f_271[iVar0].f_5528 = unk_0xE082EE0DCA9466C4(iVar25, iVar0);
			}
			if (iVar26 != 0)
			{
				Global_4456448.f_271[iVar0].f_9774 = unk_0xE082EE0DCA9466C4(iVar26, iVar0);
			}
			if (iVar27 != 0)
			{
				Global_4456448.f_271[iVar0].f_5396 = unk_0xE082EE0DCA9466C4(iVar27, iVar0);
			}
			if (iVar30 != 0)
			{
				Global_4456448.f_271[iVar0].f_5398 = unk_0xE082EE0DCA9466C4(iVar30, iVar0);
			}
			if (iVar28 != 0)
			{
				Global_4456448.f_271[iVar0].f_4994 = unk_0xE082EE0DCA9466C4(iVar28, iVar0);
			}
			if (iVar29 != 0)
			{
				Global_4456448.f_271[iVar0].f_4995 = unk_0xE082EE0DCA9466C4(iVar29, iVar0);
			}
			if (iVar31 != 0)
			{
				Global_4456448.f_271[iVar0].f_5455 = unk_0xE082EE0DCA9466C4(iVar31, iVar0);
			}
			if (iVar32 != 0)
			{
				Global_4456448.f_271[iVar0].f_9775 = unk_0xE082EE0DCA9466C4(iVar32, iVar0);
			}
			if (iVar33 != 0)
			{
				Global_4456448.f_271[iVar0].f_9776 = unk_0xE082EE0DCA9466C4(iVar33, iVar0);
			}
			if (iVar34 != 0 && unk_0x3E932F23D327A136(iVar34, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_9795 = unk_0xE082EE0DCA9466C4(iVar34, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_9795 = 0;
			}
			if (iVar35 != 0)
			{
				Global_4456448.f_271[iVar0].f_13728 = unk_0xE082EE0DCA9466C4(iVar35, iVar0);
			}
			if (iVar36 != 0)
			{
				Global_4456448.f_271[iVar0].f_13729 = unk_0xE082EE0DCA9466C4(iVar36, iVar0);
			}
			if (iVar37 != 0)
			{
				Global_4456448.f_271[iVar0].f_13730 = unk_0xE082EE0DCA9466C4(iVar37, iVar0);
			}
			if (iVar38 != 0)
			{
				Global_4456448.f_271[iVar0].f_32 = unk_0xE082EE0DCA9466C4(iVar38, iVar0);
			}
			if (iVar39 != 0)
			{
				Global_4456448.f_271[iVar0].f_33 = unk_0xE082EE0DCA9466C4(iVar39, iVar0);
			}
			if (iVar40 != 0 && unk_0x3E932F23D327A136(iVar40, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_34 = unk_0xE082EE0DCA9466C4(iVar40, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_34 = 0;
			}
			if (iVar41 != 0 && unk_0x3E932F23D327A136(iVar41, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_35 = unk_0xE082EE0DCA9466C4(iVar41, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_35 = 0;
			}
			if (iVar42 != 0 && unk_0x3E932F23D327A136(iVar42, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_36 = unk_0xE082EE0DCA9466C4(iVar42, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_36 = 0;
			}
			if (iVar43 != 0)
			{
				Global_4456448.f_271[iVar0].f_38 = unk_0xE082EE0DCA9466C4(iVar43, iVar0);
			}
			if (iVar45 != 0)
			{
				Global_4456448.f_271[iVar0].f_4989 = unk_0xE082EE0DCA9466C4(iVar45, iVar0);
			}
			if (iVar46 != 0)
			{
				Global_4456448.f_271[iVar0].f_4991 = unk_0xE082EE0DCA9466C4(iVar46, iVar0);
			}
			if (iVar47 != 0)
			{
				Global_4456448.f_271[iVar0].f_4988 = unk_0xE082EE0DCA9466C4(iVar47, iVar0);
			}
			if (iVar48 != 0)
			{
				Global_4456448.f_271[iVar0].f_4987 = unk_0xE082EE0DCA9466C4(iVar48, iVar0);
			}
			if ((iVar50 != 0 && unk_0x3E932F23D327A136(iVar50, iVar0) == 2) && iVar50 != 0)
			{
				Global_4456448.f_271[iVar0].f_4986 = unk_0xE082EE0DCA9466C4(iVar50, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_4986 = 60000;
			}
			if (iVar51 != 0 && unk_0x3E932F23D327A136(iVar51, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_5249 = unk_0xE082EE0DCA9466C4(iVar51, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_5249 = 0;
			}
			if (iVar52 != 0 && unk_0x3E932F23D327A136(iVar52, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_5248 = unk_0xE082EE0DCA9466C4(iVar52, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_5248 = 0;
			}
			if (iVar81 != 0 && unk_0x3E932F23D327A136(iVar81, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_13731 = unk_0xE082EE0DCA9466C4(iVar81, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_13731 = 0;
			}
			if (iVar82 != 0 && unk_0x3E932F23D327A136(iVar82, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_13732 = unk_0xE082EE0DCA9466C4(iVar82, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_13732 = -1;
			}
			if (iVar54 != 0 && unk_0x3E932F23D327A136(iVar54, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_5250 = unk_0xE082EE0DCA9466C4(iVar54, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_5250 = 60000;
			}
			if (iVar53 != 0 && unk_0x3E932F23D327A136(iVar53, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_5251 = unk_0xE082EE0DCA9466C4(iVar53, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_5251 = 0;
			}
			if (iVar55 != 0)
			{
				Global_4456448.f_271[iVar0].f_61 = unk_0xE082EE0DCA9466C4(iVar55, iVar0);
			}
			if (iVar56 != 0)
			{
				Global_4456448.f_271[iVar0].f_62 = unk_0xE082EE0DCA9466C4(iVar56, iVar0);
			}
			if (iVar57 != 0)
			{
				Global_4456448.f_271[iVar0].f_63 = unk_0xE082EE0DCA9466C4(iVar57, iVar0);
			}
			if (iVar58 != 0)
			{
				Global_4456448.f_271[iVar0].f_64 = unk_0xE082EE0DCA9466C4(iVar58, iVar0);
			}
			if (iVar59 != 0 && unk_0x3E932F23D327A136(iVar59, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_324 = unk_0xE082EE0DCA9466C4(iVar59, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_324 = -1;
			}
			if (iVar83 != 0 && unk_0x3E932F23D327A136(iVar83, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_857 = unk_0xE082EE0DCA9466C4(iVar83, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_857 = -1;
			}
			if (iVar84 != 0 && unk_0x3E932F23D327A136(iVar84, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_858 = unk_0xE082EE0DCA9466C4(iVar84, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_858 = -1;
			}
			if (iVar69 != 0 && unk_0x3E932F23D327A136(iVar69, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_325 = unk_0xE082EE0DCA9466C4(iVar69, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_325 = -1;
			}
			if (iVar70 != 0 && unk_0x3E932F23D327A136(iVar70, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_326 = unk_0xE082EE0DCA9466C4(iVar70, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_326 = -1;
			}
			if ((iVar60 != 0 && unk_0x3E932F23D327A136(iVar60, iVar0) == 2) && unk_0x3E932F23D327A136(iVar61, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_590 = unk_0xE082EE0DCA9466C4(iVar60, iVar0);
				Global_4456448.f_271[iVar0].f_591 = unk_0xE082EE0DCA9466C4(iVar61, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_590 = -1;
				Global_4456448.f_271[iVar0].f_591 = -1;
			}
			if (iVar64 != 0)
			{
				Global_4456448.f_271[iVar0].f_327 = unk_0xE082EE0DCA9466C4(iVar64, iVar0);
			}
			if (iVar65 != 0)
			{
				Global_4456448.f_271[iVar0].f_328 = unk_0xE082EE0DCA9466C4(iVar65, iVar0);
			}
			if (iVar66 != 0)
			{
				Global_4456448.f_271[iVar0].f_329 = unk_0xE082EE0DCA9466C4(iVar66, iVar0);
			}
			if (iVar67 != 0)
			{
				Global_4456448.f_271[iVar0].f_330 = unk_0xE082EE0DCA9466C4(iVar67, iVar0);
			}
			if ((iVar62 != 0 && unk_0x3E932F23D327A136(iVar62, iVar0) == 2) && unk_0x3E932F23D327A136(iVar63, iVar0) == 2)
			{
				Global_4456448.f_271[iVar0].f_855 = unk_0xE082EE0DCA9466C4(iVar62, iVar0);
				Global_4456448.f_271[iVar0].f_856 = unk_0xE082EE0DCA9466C4(iVar63, iVar0);
			}
			else
			{
				Global_4456448.f_271[iVar0].f_855 = -1;
				Global_4456448.f_271[iVar0].f_856 = -1;
			}
			if (iVar68 != 0)
			{
				Global_4456448.f_271[iVar0].f_592 = unk_0xE082EE0DCA9466C4(iVar68, iVar0);
			}
			if (iVar71 != 0)
			{
				Global_4456448.f_271[iVar0].f_593 = unk_0xE082EE0DCA9466C4(iVar71, iVar0);
			}
			if (iVar72 != 0)
			{
				Global_4456448.f_271[iVar0].f_594 = unk_0xE082EE0DCA9466C4(iVar72, iVar0);
			}
			if (iVar73 != 0)
			{
				Global_4456448.f_271[iVar0].f_595 = unk_0xE082EE0DCA9466C4(iVar73, iVar0);
			}
			if (iVar74 != 0)
			{
				Global_4456448.f_271[iVar0].f_57 = unk_0xE082EE0DCA9466C4(iVar74, iVar0);
			}
			if (iVar75 != 0)
			{
				Global_4456448.f_271[iVar0].f_58 = unk_0xE082EE0DCA9466C4(iVar75, iVar0);
			}
			if (iVar76 != 0)
			{
				Global_4456448.f_271[iVar0].f_4990 = unk_0xE082EE0DCA9466C4(iVar76, iVar0);
			}
			if (iVar77 != 0)
			{
				Global_4456448.f_271[iVar0].f_4992 = unk_0xE082EE0DCA9466C4(iVar77, iVar0);
			}
			if (iVar49 != 0)
			{
				Global_4456448.f_271[iVar0].f_4993 = unk_0xE082EE0DCA9466C4(iVar49, iVar0);
			}
			if (iVar44 != 0)
			{
				Global_4456448.f_271[iVar0].f_3 = unk_0x73F91AA610E60211(iVar44, iVar0);
			}
			if (iVar78 != 0)
			{
				Global_4456448.f_63072[iVar0] = unk_0xE082EE0DCA9466C4(iVar78, iVar0);
			}
			if (iVar79 != 0)
			{
				Global_4456448.f_63077[iVar0] = unk_0xE082EE0DCA9466C4(iVar79, iVar0);
			}
			if (iVar80 != 0)
			{
				Global_4456448.f_271[iVar0].f_37 = unk_0xE082EE0DCA9466C4(iVar80, iVar0);
			}
			if (iVar2 != 0)
			{
				Global_4456448.f_271[iVar0].f_14 = unk_0xE082EE0DCA9466C4(iVar2, iVar0);
			}
			if (iVar3 != 0)
			{
				Global_4456448.f_271[iVar0].f_15 = { unk_0x6403E33233A20F75(iVar3, iVar0) };
			}
			if (iVar4 != 0)
			{
				Global_4456448.f_271[iVar0].f_18 = unk_0xE082EE0DCA9466C4(iVar4, iVar0);
			}
			if (iVar5 != 0)
			{
				Global_4456448.f_271[iVar0].f_19 = { unk_0x6403E33233A20F75(iVar5, iVar0) };
			}
			if (iVar6 != 0)
			{
				Global_4456448.f_271[iVar0].f_22 = unk_0xE082EE0DCA9466C4(iVar6, iVar0);
			}
			if (iVar7 != 0)
			{
				Global_4456448.f_271[iVar0].f_23 = unk_0xE082EE0DCA9466C4(iVar7, iVar0);
			}
			if (iVar8 != 0)
			{
				Global_4456448.f_271[iVar0].f_24 = unk_0xE082EE0DCA9466C4(iVar8, iVar0);
			}
			if (iVar9 != 0)
			{
				Global_4456448.f_271[iVar0].f_25 = unk_0xE082EE0DCA9466C4(iVar9, iVar0);
			}
			if (iVar10 != 0)
			{
				Global_4456448.f_271[iVar0].f_26 = unk_0xE082EE0DCA9466C4(iVar10, iVar0);
			}
			if (iVar11 != 0)
			{
				Global_4456448.f_271[iVar0].f_27 = unk_0xE082EE0DCA9466C4(iVar11, iVar0);
			}
			if (iVar12 != 0)
			{
				Global_4456448.f_271[iVar0].f_28 = unk_0xE082EE0DCA9466C4(iVar12, iVar0);
			}
			if (iVar13 != 0)
			{
				Global_4456448.f_271[iVar0].f_29 = unk_0xE082EE0DCA9466C4(iVar13, iVar0);
			}
			if (iVar14 != 0)
			{
				Global_4456448.f_271[iVar0].f_30 = unk_0xE082EE0DCA9466C4(iVar14, iVar0);
			}
			if (iVar15 != 0)
			{
				Global_4456448.f_271[iVar0].f_31 = unk_0xE082EE0DCA9466C4(iVar15, iVar0);
			}
		}
		iVar0++;
	}
}

void func_290(int iParam0)
{
	iVar0 = unk_0x6D954AF55D3925DB(iParam0, "rule");
	Global_4456448.f_226 = unk_0x8A83B52A17A321DB(iVar0, "time");
	Global_4456448.f_229 = unk_0x8A83B52A17A321DB(iVar0, "score");
	Global_4456448.f_240 = unk_0x8A83B52A17A321DB(iVar0, "prule");
	Global_4456448.f_116792 = unk_0x8A83B52A17A321DB(iVar0, "ptyp");
	Global_4456448.f_230 = unk_0x8A83B52A17A321DB(iVar0, "blip");
	Global_4456448.f_232 = unk_0x8A83B52A17A321DB(iVar0, "tag");
	Global_4456448.f_233 = unk_0x8A83B52A17A321DB(iVar0, "voice");
	Global_4456448.f_234 = unk_0x8A83B52A17A321DB(iVar0, "radio");
	Global_4456448.f_235 = unk_0x8A83B52A17A321DB(iVar0, "aim");
	Global_4456448.f_78235 = unk_0x8A83B52A17A321DB(iVar0, "pol");
	Global_4456448.f_221 = unk_0x8A83B52A17A321DB(iVar0, "liv");
	Global_4456448.f_75707 = unk_0x8A83B52A17A321DB(iVar0, "traf");
	Global_4456448.f_197245 = unk_0x8A83B52A17A321DB(iVar0, "tod");
	Global_4456448.f_197229 = unk_0x8A83B52A17A321DB(iVar0, "weth");
	Global_4456448.f_197247 = unk_0x8A83B52A17A321DB(iVar0, "apeds");
	Global_4456448.f_197246 = unk_0x8A83B52A17A321DB(iVar0, "vehd");
	Global_4456448.f_238 = unk_0x8A83B52A17A321DB(iVar0, "vdm");
	Global_4456448.f_236 = unk_0x8A83B52A17A321DB(iVar0, "tdm");
	Global_4456448.f_63072[0] = unk_0x8A83B52A17A321DB(iVar0, "pcr");
	Global_4456448.f_63077[0] = unk_0x8A83B52A17A321DB(iVar0, "ocr");
}

void func_291(int iParam0, int iParam1, bool bParam2)
{
	iVar1 = unk_0x6D954AF55D3925DB(iParam0, "gen");
	Global_4456448 = unk_0x8A83B52A17A321DB(iVar1, "type");
	Global_4456448.f_9 = unk_0xAF09C5F2B0AB2428(iVar1, "ngjob");
	unk_0xEAE0D21A50E6C7F4(Global_4456448.f_7, 0);
	bVar2 = unk_0xAF09C5F2B0AB2428(iVar1, "photo");
	if (bVar2)
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_7), 0);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_4456448.f_7), 0);
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "ivm") == 2)
	{
		Global_4456448.f_78155 = unk_0x8A83B52A17A321DB(iVar1, "ivm");
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "fixcam") == 2)
	{
		Global_4456448.f_207994 = unk_0x8A83B52A17A321DB(iVar1, "fixcam");
	}
	else
	{
		Global_4456448.f_207994 = 0;
	}
	Global_4456448.f_4 = unk_0x8A83B52A17A321DB(iVar1, "optbs");
	Global_4456448.f_253 = { unk_0xC0F58A082935B6E1(iVar1, "camo") };
	Global_4456448.f_256 = { unk_0xC0F58A082935B6E1(iVar1, "camro") };
	Global_4456448.f_247 = { unk_0xC0F58A082935B6E1(iVar1, "cam") };
	Global_4456448.f_266 = unk_0xB37C1AC7E8A75F3C(iVar1, "camh");
	Global_4456448.f_259 = { unk_0xC0F58A082935B6E1(iVar1, "camf") };
	Global_4456448.f_262 = { unk_0xC0F58A082935B6E1(iVar1, "camfr") };
	Global_4456448.f_265 = unk_0xB37C1AC7E8A75F3C(iVar1, "camfv");
	Global_4456448.f_194965 = unk_0xB37C1AC7E8A75F3C(iVar1, "dmbds");
	Global_4456448.f_241 = { unk_0xC0F58A082935B6E1(iVar1, "phpo") };
	StringCopy(&(Global_4456448.f_195148[0]), unk_0x6F58F8DD6B54A28D(iVar1, "szTag"), 64);
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "chksfx") == 1)
	{
		Global_4456448.f_70721 = 1;
	}
	else
	{
		Global_4456448.f_70721 = 0;
	}
	StringCopy(&cVar5, "nrcid", 16);
	if (bParam2)
	{
		iVar3 = 0;
		while (iVar3 <= 5)
		{
			StringCopy(&cVar5, "nrcid", 16);
			StringIntConCat(&cVar5, iVar3, 16);
			StringCopy(&(Global_4456448.f_195308[iVar3]), unk_0x6F58F8DD6B54A28D(iVar1, &cVar5), 24);
			StringCopy(&cVar5, "nrmtt", 16);
			StringIntConCat(&cVar5, iVar3, 16);
			Global_4456448.f_195345[iVar3] = unk_0x8A83B52A17A321DB(iVar1, &cVar5);
			iVar3++;
		}
	}
	if (func_135(1))
	{
		Global_4456448.f_2 = unk_0x8A83B52A17A321DB(iVar1, "subtype");
		Global_4456448.f_207991 = unk_0x8A83B52A17A321DB(iVar1, "testcomplete");
		if (((Global_4456448.f_2 == 6 || Global_4456448.f_2 == 5) || Global_4456448.f_2 == 4) || Global_4456448.f_2 == 9)
		{
			if (unk_0xAE496C664AE89A9C(iVar1, "teamBal") == 2)
			{
				Global_4456448.f_207993 = unk_0x8A83B52A17A321DB(iVar1, "numRounds");
			}
			else
			{
				Global_4456448.f_207993 = 1;
			}
			if (Global_4456448.f_207993 < 1)
			{
				Global_4456448.f_207993 = 1;
			}
		}
		if (unk_0xAE496C664AE89A9C(iVar1, "teamBal") == 2)
		{
			Global_4456448.f_207995 = unk_0x8A83B52A17A321DB(iVar1, "teamBal");
		}
		else
		{
			Global_4456448.f_207995 = 5;
		}
	}
	else if (func_242())
	{
		Global_4456448.f_2 = unk_0x8A83B52A17A321DB(iVar1, "subtype");
	}
	Global_4456448.f_232883 = unk_0x8A83B52A17A321DB(iVar1, "adverm");
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "dlcrel") == 2)
	{
		Global_4456448.f_232884 = unk_0x8A83B52A17A321DB(iVar1, "dlcrel");
	}
	else
	{
		Global_4456448.f_232884 = -1;
	}
	Global_4456448.f_207992 = unk_0x8A83B52A17A321DB(iVar1, "testcomplete");
	Global_4456448.f_227 = unk_0x8A83B52A17A321DB(iVar1, "endtype");
	Global_4456448.f_11 = unk_0x8A83B52A17A321DB(iVar1, "menubs");
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "ovrpc") == 2)
	{
		Global_4456448.f_135145 = unk_0x8A83B52A17A321DB(iVar1, "ovrpc");
	}
	else
	{
		Global_4456448.f_135145 = -1;
	}
	Global_4456448.f_12 = unk_0x8A83B52A17A321DB(iVar1, "menubs2");
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "menubs3") == 2)
	{
		Global_4456448.f_13 = unk_0x8A83B52A17A321DB(iVar1, "menubs3");
	}
	else
	{
		Global_4456448.f_13 = 0;
	}
	Global_4456448.f_14 = unk_0x8A83B52A17A321DB(iVar1, "menubs4");
	Global_4456448.f_15 = unk_0x8A83B52A17A321DB(iVar1, "menubs5");
	Global_4456448.f_16 = unk_0x8A83B52A17A321DB(iVar1, "menubs6");
	Global_4456448.f_17 = unk_0x8A83B52A17A321DB(iVar1, "menubs7");
	Global_4456448.f_18 = unk_0x8A83B52A17A321DB(iVar1, "menubs8");
	Global_4456448.f_19 = unk_0x8A83B52A17A321DB(iVar1, "menubs9");
	Global_4456448.f_20 = unk_0x8A83B52A17A321DB(iVar1, "menubs10");
	Global_4456448.f_21 = unk_0x8A83B52A17A321DB(iVar1, "menubs11");
	Global_4456448.f_22 = unk_0x8A83B52A17A321DB(iVar1, "menubs12");
	Global_4456448.f_23 = unk_0x8A83B52A17A321DB(iVar1, "menubs13");
	Global_4456448.f_24 = unk_0x8A83B52A17A321DB(iVar1, "menubs14");
	Global_4456448.f_25 = unk_0x8A83B52A17A321DB(iVar1, "menubs15");
	Global_4456448.f_26 = unk_0x8A83B52A17A321DB(iVar1, "menubs16");
	Global_4456448.f_27 = unk_0x8A83B52A17A321DB(iVar1, "menubs17");
	Global_4456448.f_233972 = unk_0xAF09C5F2B0AB2428(iVar1, "alrtLocal");
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "menubs18") == 2)
	{
		Global_4456448.f_28 = unk_0x8A83B52A17A321DB(iVar1, "menubs18");
	}
	else
	{
		Global_4456448.f_28 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "menubs19") == 2)
	{
		Global_4456448.f_29 = unk_0x8A83B52A17A321DB(iVar1, "menubs19");
	}
	else
	{
		Global_4456448.f_29 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "menubs20") == 2)
	{
		Global_4456448.f_30 = unk_0x8A83B52A17A321DB(iVar1, "menubs20");
	}
	else
	{
		Global_4456448.f_30 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "menubs21") == 2)
	{
		Global_4456448.f_31 = unk_0x8A83B52A17A321DB(iVar1, "menubs21");
	}
	else
	{
		Global_4456448.f_31 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "menubs22") == 2)
	{
		Global_4456448.f_32 = unk_0x8A83B52A17A321DB(iVar1, "menubs22");
	}
	else
	{
		Global_4456448.f_32 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "menubs23") == 2)
	{
		Global_4456448.f_33 = unk_0x8A83B52A17A321DB(iVar1, "menubs23");
	}
	else
	{
		Global_4456448.f_33 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "menubs24") == 2)
	{
		Global_4456448.f_34 = unk_0x8A83B52A17A321DB(iVar1, "menubs24");
	}
	else
	{
		Global_4456448.f_34 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "menubs25") == 2)
	{
		Global_4456448.f_35 = unk_0x8A83B52A17A321DB(iVar1, "menubs25");
	}
	else
	{
		Global_4456448.f_35 = 0;
	}
	func_249("menubs26", &(Global_4456448.f_36), &iVar1, 0, -2340845);
	func_249("menubs27", &(Global_4456448.f_37), &iVar1, 0, -2340845);
	func_249("extintt", &iVar0, &iVar1, 0, -2340845);
	Global_4456448.f_200 = iVar0;
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "csittd") == 2)
	{
		Global_4456448.f_238793 = unk_0x8A83B52A17A321DB(iVar1, "csittd");
	}
	else
	{
		Global_4456448.f_238793 = -1;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "fiispr") == 3)
	{
		Global_4456448.f_197284 = unk_0xB37C1AC7E8A75F3C(iVar1, "fiispr");
	}
	else
	{
		Global_4456448.f_197284 = -0,1f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "cordmbs") == 2)
	{
		Global_4456448.f_234210 = unk_0x8A83B52A17A321DB(iVar1, "cordmbs");
	}
	else
	{
		Global_4456448.f_234210 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "iplyli") == 2)
	{
		Global_4456448.f_222 = unk_0x8A83B52A17A321DB(iVar1, "iplyli");
	}
	else
	{
		Global_4456448.f_222 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "ptbNBL") == 2)
	{
		Global_4456448.f_234159 = unk_0x8A83B52A17A321DB(iVar1, "ptbNBL");
	}
	else
	{
		Global_4456448.f_234159 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "ptbDrg") == 3)
	{
		Global_4456448.f_234160 = unk_0xB37C1AC7E8A75F3C(iVar1, "ptbDrg");
	}
	else
	{
		Global_4456448.f_234160 = 2f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "csts") == 3)
	{
		Global_4456448.f_234205 = unk_0xB37C1AC7E8A75F3C(iVar1, "csts");
	}
	else
	{
		Global_4456448.f_234205 = 1f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "rmlo") == 2)
	{
		Global_4456448.f_234206 = unk_0x8A83B52A17A321DB(iVar1, "rmlo");
	}
	else
	{
		Global_4456448.f_234206 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "mxlap") == 2)
	{
		Global_4456448.f_234207 = unk_0x8A83B52A17A321DB(iVar1, "mxlap");
	}
	else
	{
		Global_4456448.f_234207 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "aghd") == 3)
	{
		Global_4456448.f_234208 = unk_0xB37C1AC7E8A75F3C(iVar1, "aghd");
	}
	else
	{
		Global_4456448.f_234208 = 0f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "agt") == 2)
	{
		Global_4456448.f_234209 = unk_0x8A83B52A17A321DB(iVar1, "agt");
	}
	else
	{
		Global_4456448.f_234209 = 0;
	}
	func_324(&iVar1);
	func_322(&iVar1);
	func_321(&iVar1);
	iVar9 = 0;
	while (iVar9 <= 4)
	{
		StringCopy(&cVar10, "dmHTS", 24);
		StringIntConCat(&cVar10, iVar9, 24);
		if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, &cVar10) == 4)
		{
			StringCopy(&(Global_4456448.f_233489[iVar9]), unk_0x6F58F8DD6B54A28D(iVar1, &cVar10), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_233489[iVar9]), "", 64);
		}
		iVar16 = 0;
		while (iVar16 <= 3)
		{
			StringCopy(&cVar17, "dmHT", 24);
			StringIntConCat(&cVar17, iVar9, 24);
			StringIntConCat(&cVar17, iVar16, 24);
			if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, &cVar17) == 4)
			{
				StringCopy(&(Global_4456448.f_233570[iVar9][iVar16]), unk_0x6F58F8DD6B54A28D(iVar1, &cVar17), 64);
			}
			else
			{
				StringCopy(&(Global_4456448.f_233570[iVar9][iVar16]), "", 64);
			}
			iVar16++;
		}
		StringCopy(&cVar23, "dmHTD", 24);
		StringIntConCat(&cVar23, iVar9, 24);
		if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, &cVar23) == 2)
		{
			Global_4456448.f_233896[iVar9] = unk_0x8A83B52A17A321DB(iVar1, &cVar23);
		}
		else
		{
			Global_4456448.f_233896[iVar9] = -1;
		}
		iVar9++;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_22, 13))
	{
		if (unk_0xAE496C664AE89A9C(iVar1, "trstim") == 2)
		{
			Global_4456448.f_233018 = unk_0x8A83B52A17A321DB(iVar1, "trstim");
		}
		else
		{
			Global_4456448.f_233018 = 10;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, "trerad") == 3)
		{
			Global_4456448.f_233019 = unk_0xB37C1AC7E8A75F3C(iVar1, "trerad");
		}
		else
		{
			Global_4456448.f_233019 = 5f;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, "trsstim") == 2)
		{
			Global_4456448.f_233020 = unk_0x8A83B52A17A321DB(iVar1, "trsstim");
		}
		else
		{
			Global_4456448.f_233020 = 10;
		}
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "iopcd") == 2)
	{
		Global_4456448.f_232886 = unk_0x8A83B52A17A321DB(iVar1, "iopcd");
	}
	else
	{
		Global_4456448.f_232886 = -1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 31))
	{
	}
	Global_4456448.f_16 = unk_0x8A83B52A17A321DB(iVar1, "menubs6");
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_16, 16))
	{
	}
	iVar29 = 0;
	while (iVar29 <= 9)
	{
		StringCopy(&Var30, "missionString", 16);
		StringIntConCat(&Var30, iVar29, 16);
		StringCopy(&(Global_4456448.f_38[iVar29]), func_320(&Var30, &iVar1, "", ""), 64);
		iVar29++;
	}
	func_319(&iVar1);
	iVar34 = 0;
	while (iVar34 <= 1)
	{
		func_318(&iVar1, iVar34);
		iVar34++;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "rcvs") == 2)
	{
		Global_4456448.f_63903 = unk_0x8A83B52A17A321DB(iVar1, "rcvs");
	}
	else
	{
		Global_4456448.f_63903 = 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_18, 25))
	{
		Global_4456448.f_63903 = 1;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "hptfb") == 2)
	{
		Global_4456448.f_270 = unk_0x8A83B52A17A321DB(iVar1, "hptfb");
	}
	else
	{
		Global_4456448.f_270 = 0;
	}
	iVar39 = 0;
	while (iVar39 <= 4)
	{
		StringCopy(&cVar35, "specobjt", 16);
		StringIntConCat(&cVar35, iVar39, 16);
		if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, &cVar35) == 4)
		{
			StringCopy(&(Global_4456448.f_234025[iVar39]), unk_0x6F58F8DD6B54A28D(iVar1, &cVar35), 64);
		}
		else
		{
			IntToString(&(Global_4456448.f_234025[iVar39]), 0, 64);
		}
		iVar39++;
	}
	Global_4456448.f_234214 = unk_0xB37C1AC7E8A75F3C(iVar1, "turammo");
	Global_4456448.f_234215 = unk_0x8A83B52A17A321DB(iVar1, "turgudm");
	Global_4456448.f_78229 = unk_0x8A83B52A17A321DB(iVar1, "teamvbs");
	Global_4456448.f_199 = unk_0x8A83B52A17A321DB(iVar1, "cncmbs");
	Global_4456448.f_229397 = unk_0x8A83B52A17A321DB(iVar1, "todhr");
	Global_4456448.f_229398 = unk_0x8A83B52A17A321DB(iVar1, "todmn");
	Global_4456448.f_10 = unk_0x8A83B52A17A321DB(iVar1, "cmpts");
	Global_4456448.f_225 = unk_0x8A83B52A17A321DB(iVar1, "rank");
	Global_4456448.f_225 = unk_0x8A83B52A17A321DB(iVar1, "rank");
	Global_4456448.f_197249 = unk_0x8A83B52A17A321DB(iVar1, "charcon");
	Global_4456448.f_197249 = unk_0x8A83B52A17A321DB(iVar1, "char");
	Global_4456448.f_197250 = unk_0x8A83B52A17A321DB(iVar1, "xpr");
	Global_4456448.f_197251 = unk_0x8A83B52A17A321DB(iVar1, "cshr");
	Global_4456448.f_197255 = unk_0x8A83B52A17A321DB(iVar1, "ctsc");
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "istngc") == 2)
	{
		Global_4456448.f_238796 = unk_0x8A83B52A17A321DB(iVar1, "istngc");
	}
	else
	{
		Global_4456448.f_238796 = -1;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "ecsmn") == 4)
	{
		StringCopy(&(Global_4456448.f_225524), unk_0x6F58F8DD6B54A28D(iVar1, "ecsmn"), 64);
	}
	else
	{
		StringCopy(&(Global_4456448.f_225524), "", 64);
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "ecsbs") == 2)
	{
		Global_4456448.f_225524.f_16 = unk_0x8A83B52A17A321DB(iVar1, "ecsbs");
	}
	else
	{
		Global_4456448.f_225524.f_16 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "ecsbs2") == 2)
	{
		Global_4456448.f_225524.f_17 = unk_0x8A83B52A17A321DB(iVar1, "ecsbs2");
	}
	else
	{
		Global_4456448.f_225524.f_17 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "ecsbs3") == 2)
	{
		Global_4456448.f_225524.f_18 = unk_0x8A83B52A17A321DB(iVar1, "ecsbs3");
	}
	else
	{
		Global_4456448.f_225524.f_18 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "ecsrng") == 2)
	{
		Global_4456448.f_225524.f_69 = unk_0x8A83B52A17A321DB(iVar1, "ecsrng");
	}
	else
	{
		Global_4456448.f_225524.f_69 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "ecscp") == 5)
	{
		Global_4456448.f_225524.f_61 = { unk_0xC0F58A082935B6E1(iVar1, "ecscp") };
	}
	else
	{
		Global_4456448.f_225524.f_61 = { 0f, 0f, 0f };
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "ecscr") == 3)
	{
		Global_4456448.f_225524.f_67 = unk_0xB37C1AC7E8A75F3C(iVar1, "ecscr");
	}
	else
	{
		Global_4456448.f_225524.f_67 = 0f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "ecscs") == 5)
	{
		Global_4456448.f_225524.f_64 = { unk_0xC0F58A082935B6E1(iVar1, "ecscs") };
	}
	else
	{
		Global_4456448.f_225524.f_64 = { 0f, 0f, 0f };
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "vhspx") == 3)
	{
		Global_4456448.f_225524.f_70 = unk_0xB37C1AC7E8A75F3C(iVar1, "vhspx");
	}
	else
	{
		Global_4456448.f_225524.f_70 = 6f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "vrbs") == 2)
	{
		Global_4456448.f_225524.f_71 = unk_0x8A83B52A17A321DB(iVar1, "vrbs");
	}
	else
	{
		Global_4456448.f_225524.f_71 = 0;
	}
	iVar40 = 0;
	while (iVar40 <= 29)
	{
		StringCopy(&cVar41, "ecein", 8);
		StringIntConCat(&cVar41, iVar40, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_225524.f_125[iVar40].f_1 = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_225524.f_125[iVar40].f_1 = -1;
		}
		StringCopy(&cVar41, "ecetp", 8);
		StringIntConCat(&cVar41, iVar40, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_225524.f_125[iVar40] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_225524.f_125[iVar40] = -1;
		}
		StringCopy(&cVar41, "ecehn", 8);
		StringIntConCat(&cVar41, iVar40, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 4)
		{
			StringCopy(&(Global_4456448.f_225524.f_125[iVar40].f_3), unk_0x6F58F8DD6B54A28D(iVar1, &cVar41), 32);
		}
		else
		{
			StringCopy(&(Global_4456448.f_225524.f_125[iVar40].f_3), "", 32);
		}
		iVar40++;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "clbscr") == 2)
	{
		Global_4456448.f_227323 = unk_0x8A83B52A17A321DB(iVar1, "clbscr");
	}
	else
	{
		Global_4456448.f_227323 = -1;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "disar") == 2)
	{
		Global_4456448.f_227324 = unk_0x8A83B52A17A321DB(iVar1, "disar");
	}
	else
	{
		Global_4456448.f_227324 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "rlopt") == 2)
	{
		Global_4456448.f_226417 = unk_0x8A83B52A17A321DB(iVar1, "rlopt");
	}
	else
	{
		Global_4456448.f_226417 = 0;
	}
	iVar0 = unk_0x8A83B52A17A321DB(iVar1, "gpmn");
	Global_4456448.f_269 = iVar0;
	iVar43 = unk_0x8A83B52A17A321DB(iVar1, "musx");
	if (iVar43 != -1)
	{
		Global_4456448.f_197244 = iVar43;
	}
	else
	{
		Global_4456448.f_197244 = -1;
	}
	Global_4456448.f_197243 = unk_0x8A83B52A17A321DB(iVar1, "ausc");
	Global_4456448.f_202 = unk_0x8A83B52A17A321DB(iVar1, "minNu");
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "newausc") == 2)
	{
		Global_4456448.f_197242 = unk_0x8A83B52A17A321DB(iVar1, "newausc");
	}
	else
	{
		Global_4456448.f_197242 = -1;
	}
	Global_4456448.f_201 = unk_0x8A83B52A17A321DB(iVar1, "num");
	if (Global_4456448.f_201 == -1)
	{
		Global_4456448.f_201 = func_84();
	}
	Global_4456448.f_203 = unk_0x8A83B52A17A321DB(iVar1, "time");
	Global_4456448.f_244 = { func_87(iVar1) };
	StringCopy(&cVar44, "apart", 16);
	Global_4456448.f_226003 = { unk_0xC0F58A082935B6E1(iVar1, &cVar44) };
	Global_4456448.f_226017 = unk_0x8A83B52A17A321DB(iVar1, "apwbs");
	Global_4456448.f_226006 = unk_0x8A83B52A17A321DB(iVar1, "wrploc");
	Global_4456448.f_226025 = unk_0x8A83B52A17A321DB(iVar1, "twrst");
	Global_4456448.f_226018 = unk_0x8A83B52A17A321DB(iVar1, "iplop");
	Global_4456448.f_226019 = unk_0x8A83B52A17A321DB(iVar1, "intop");
	Global_4456448.f_226020 = unk_0x8A83B52A17A321DB(iVar1, "intop2");
	Global_4456448.f_226021 = unk_0x8A83B52A17A321DB(iVar1, "intop3");
	Global_4456448.f_226022 = unk_0x8A83B52A17A321DB(iVar1, "casCol");
	Global_4456448.f_226023 = unk_0x8A83B52A17A321DB(iVar1, "casPat");
	Global_4456448.f_226024 = unk_0x8A83B52A17A321DB(iVar1, "casArc");
	Global_4456448.f_226026 = unk_0x8A83B52A17A321DB(iVar1, "arnTh");
	Global_4456448.f_226026.f_1 = unk_0x8A83B52A17A321DB(iVar1, "arnTy");
	Global_4456448.f_226026.f_2 = unk_0x8A83B52A17A321DB(iVar1, "arnLi");
	Global_4456448.f_226026.f_29[0] = unk_0x8A83B52A17A321DB(iVar1, "arnBnA");
	Global_4456448.f_226026.f_29[1] = unk_0x8A83B52A17A321DB(iVar1, "arnBnB");
	Global_4456448.f_226026.f_29[2] = unk_0x8A83B52A17A321DB(iVar1, "arnBnC");
	Global_4456448.f_226026.f_29[3] = unk_0x8A83B52A17A321DB(iVar1, "arnBnD");
	Global_4456448.f_226026.f_34[0] = unk_0x8A83B52A17A321DB(iVar1, "arnCrA");
	Global_4456448.f_226026.f_34[1] = unk_0x8A83B52A17A321DB(iVar1, "arnCrB");
	Global_4456448.f_226026.f_34[2] = unk_0x8A83B52A17A321DB(iVar1, "arnCrC");
	Global_4456448.f_226026.f_34[3] = unk_0x8A83B52A17A321DB(iVar1, "arnCrD");
	Global_4456448.f_226026.f_3 = unk_0x8A83B52A17A321DB(iVar1, "arnRnL");
	iVar48 = 0;
	while (iVar48 <= 3)
	{
		StringCopy(&cVar49, "anf1BS", 16);
		StringIntConCat(&cVar49, iVar48, 16);
		Global_4456448.f_226026.f_4[iVar48] = unk_0x8A83B52A17A321DB(iVar1, &cVar49);
		StringCopy(&cVar49, "anf2BS", 16);
		StringIntConCat(&cVar49, iVar48, 16);
		Global_4456448.f_226026.f_9[iVar48] = unk_0x8A83B52A17A321DB(iVar1, &cVar49);
		StringCopy(&cVar49, "anf3BS", 16);
		StringIntConCat(&cVar49, iVar48, 16);
		Global_4456448.f_226026.f_14[iVar48] = unk_0x8A83B52A17A321DB(iVar1, &cVar49);
		StringCopy(&cVar49, "anf4BS", 16);
		StringIntConCat(&cVar49, iVar48, 16);
		Global_4456448.f_226026.f_19[iVar48] = unk_0x8A83B52A17A321DB(iVar1, &cVar49);
		StringCopy(&cVar49, "anfMBS", 16);
		StringIntConCat(&cVar49, iVar48, 16);
		Global_4456448.f_226026.f_24[iVar48] = unk_0x8A83B52A17A321DB(iVar1, &cVar49);
		iVar48++;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "arnVMN") == 2)
	{
		Global_4456448.f_226065 = unk_0x8A83B52A17A321DB(iVar1, "arnVMN");
	}
	else
	{
		Global_4456448.f_226065 = 5;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "copteam") == 2)
	{
		Global_4456448.f_78236 = unk_0x8A83B52A17A321DB(iVar1, "copteam");
	}
	else
	{
		Global_4456448.f_78236 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "pttl") == 4)
	{
		StringCopy(&(Global_4456448.f_195286), unk_0x6F58F8DD6B54A28D(iVar1, "pttl"), 64);
	}
	else
	{
		StringCopy(&(Global_4456448.f_195286), "", 64);
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "blmpmsg") == 4)
	{
		StringCopy(&(Global_4456448.f_233457), unk_0x6F58F8DD6B54A28D(iVar1, "blmpmsg"), 64);
	}
	else
	{
		StringCopy(&(Global_4456448.f_233457), "", 64);
	}
	iVar53 = 0;
	while (iVar53 <= 26)
	{
		StringCopy(&cVar41, "dmvft", 8);
		StringIntConCat(&cVar41, iVar53, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_76257[iVar53] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_76257[iVar53] = 0;
		}
		iVar53++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar54 = 0;
		while (iVar54 <= 1)
		{
			StringCopy(&cVar41, "t", 8);
			StringIntConCat(&cVar41, iVar0, 8);
			StringConCat(&cVar41, "fs", 8);
			StringIntConCat(&cVar41, iVar54, 8);
			if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 4)
			{
				StringCopy(&(Global_4456448.f_230002[iVar0][iVar54]), unk_0x6F58F8DD6B54A28D(iVar1, &cVar41), 64);
			}
			else
			{
				StringCopy(&(Global_4456448.f_230002[iVar0][iVar54]), "", 64);
			}
			iVar54++;
		}
		iVar54 = 0;
		while (iVar54 <= 26)
		{
			iVar55 = 0;
			while (iVar55 <= func_194(func_226(iVar54)))
			{
				StringCopy(&cVar41, "t", 8);
				StringIntConCat(&cVar41, iVar0, 8);
				StringConCat(&cVar41, "vl", 8);
				StringIntConCat(&cVar41, iVar54, 8);
				if (iVar55 > 0)
				{
					StringIntConCat(&cVar41, iVar55, 8);
				}
				if (iVar55 < 3)
				{
					if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
					{
						Global_4456448.f_75810[iVar0][iVar54][iVar55] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
					}
					else
					{
						Global_4456448.f_75810[iVar0][iVar54][iVar55] = 0;
					}
				}
				iVar55++;
			}
			iVar54++;
		}
		StringCopy(&cVar41, "t", 8);
		StringIntConCat(&cVar41, iVar0, 8);
		StringConCat(&cVar41, "dvl", 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_76247[iVar0] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_76247[iVar0] = 0;
		}
		StringCopy(&cVar41, "t", 8);
		StringIntConCat(&cVar41, iVar0, 8);
		StringConCat(&cVar41, "dv", 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_76252[iVar0] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_76252[iVar0] = 0;
		}
		iVar55 = 0;
		while (iVar55 <= 3)
		{
			iVar54 = 0;
			while (iVar54 <= 26)
			{
				iVar56 = 0;
				while (iVar56 <= 2)
				{
					StringCopy(&cVar35, "t", 16);
					StringIntConCat(&cVar35, iVar0, 16);
					StringIntConCat(&cVar35, iVar55, 16);
					StringConCat(&cVar35, "rv", 16);
					StringIntConCat(&cVar35, iVar54, 16);
					if (iVar56 > 0)
					{
						StringIntConCat(&cVar35, iVar56, 16);
					}
					if (unk_0xAE496C664AE89A9C(iVar1, &cVar35) == 2)
					{
						Global_4456448.f_76285[iVar0][iVar55][iVar54][iVar56] = unk_0x8A83B52A17A321DB(iVar1, &cVar35);
					}
					else
					{
						Global_4456448.f_76285[iVar0][iVar55][iVar54][iVar56] = 0;
					}
					iVar56++;
				}
				iVar54++;
			}
			StringCopy(&cVar41, "t", 8);
			StringIntConCat(&cVar41, iVar0, 8);
			StringIntConCat(&cVar41, iVar55, 8);
			StringConCat(&cVar41, "dvl", 8);
			if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
			{
				Global_4456448.f_78034[iVar0][iVar55] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
			}
			else
			{
				Global_4456448.f_78034[iVar0][iVar55] = 0;
			}
			StringCopy(&cVar41, "t", 8);
			StringIntConCat(&cVar41, iVar0, 8);
			StringIntConCat(&cVar41, iVar55, 8);
			StringConCat(&cVar41, "dv", 8);
			if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
			{
				Global_4456448.f_78055[iVar0][iVar55] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
			}
			else
			{
				Global_4456448.f_78055[iVar0][iVar55] = 0;
			}
			iVar55++;
		}
		iVar57 = 0;
		while (iVar57 < 27)
		{
			Global_1694319[iVar57] = -1;
			iVar58 = func_226(iVar57);
			while (iVar58 <= 31)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_75810[iVar0][iVar57][func_194(iVar58)], iVar58))
				{
					unk_0x0674E58A79778E99(&(Global_4456448.f_75810[iVar0][iVar57][func_194(iVar58)]), iVar58);
					if (Global_4456448.f_76247[iVar0] == iVar57 && Global_4456448.f_76252[iVar0] == iVar58)
					{
						Global_4456448.f_76247[iVar0] = 0;
						Global_4456448.f_76252[iVar0] = 0;
					}
				}
				iVar59 = 0;
				while (iVar59 < 4)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_76285[iVar0][iVar59][iVar57][func_194(iVar58)], iVar58))
					{
						unk_0x0674E58A79778E99(&(Global_4456448.f_76285[iVar0][iVar59][iVar57][func_194(iVar58)]), iVar58);
						if (Global_4456448.f_78034[iVar0][iVar59] == iVar57 && Global_4456448.f_78055[iVar0][iVar59] == iVar58)
						{
							Global_4456448.f_78034[iVar0][iVar59] = 0;
							Global_4456448.f_78055[iVar0][iVar59] = 0;
						}
					}
					iVar59++;
				}
				iVar58++;
			}
			iVar57++;
		}
		StringCopy(&cVar41, "dmaskg", 8);
		StringIntConCat(&cVar41, iVar0, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_197234[iVar0] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_197234[iVar0] = 0;
		}
		StringCopy(&cVar41, "ofovr", 8);
		StringIntConCat(&cVar41, iVar0, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_208172[iVar0] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_208172[iVar0] = -1;
		}
		StringCopy(&cVar41, "tmrfs", 8);
		StringIntConCat(&cVar41, iVar0, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 4)
		{
			StringCopy(&(Global_4456448.f_229937[iVar0]), unk_0x6F58F8DD6B54A28D(iVar1, &cVar41), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_229937[iVar0]), "", 64);
		}
		StringCopy(&cVar41, "tmtss", 8);
		StringIntConCat(&cVar41, iVar0, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 4)
		{
			StringCopy(&(Global_4456448.f_230135[iVar0]), unk_0x6F58F8DD6B54A28D(iVar1, &cVar41), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_230135[iVar0]), "", 64);
		}
		StringCopy(&cVar41, "tmrph", 8);
		StringIntConCat(&cVar41, iVar0, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 4)
		{
			StringCopy(&(Global_4456448.f_230200[iVar0]), unk_0x6F58F8DD6B54A28D(iVar1, &cVar41), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_230200[iVar0]), "", 64);
		}
		StringCopy(&cVar41, "tmtsr", 8);
		StringIntConCat(&cVar41, iVar0, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_230265[iVar0] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_230265[iVar0] = 0;
		}
		StringCopy(&cVar41, "pmscid", 8);
		StringIntConCat(&cVar41, iVar0, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_227325[iVar0] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_227325[iVar0] = -1;
		}
		StringCopy(&cVar41, "qran", 8);
		StringIntConCat(&cVar41, iVar0, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_197256[iVar0] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_197256[iVar0] = -1;
		}
		StringCopy(&cVar41, "cwtit", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar41, iVar0, 8);
		}
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 4)
		{
			StringCopy(&(Global_4456448.f_232844[iVar0]), unk_0x6F58F8DD6B54A28D(iVar1, &cVar41), 16);
		}
		else
		{
			StringCopy(&(Global_4456448.f_232844[iVar0]), "", 16);
		}
		StringCopy(&cVar41, "cwstr", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar41, iVar0, 8);
		}
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 4)
		{
			StringCopy(&(Global_4456448.f_232861[iVar0]), unk_0x6F58F8DD6B54A28D(iVar1, &cVar41), 16);
		}
		else
		{
			StringCopy(&(Global_4456448.f_232861[iVar0]), "", 16);
		}
		StringCopy(&cVar41, "cwspre", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar41, iVar0, 8);
		}
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_232878[iVar0] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_232878[iVar0] = -1;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_233006 = unk_0x8A83B52A17A321DB(iVar1, "twti");
		}
		else
		{
			Global_4456448.f_233006 = 0;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_233005 = unk_0x8A83B52A17A321DB(iVar1, "twpta");
		}
		else
		{
			Global_4456448.f_233005 = 0;
		}
		Global_4456448.f_233007 = unk_0x8A83B52A17A321DB(iVar1, "twct1");
		Global_4456448.f_233008 = unk_0x8A83B52A17A321DB(iVar1, "twct2");
		Global_4456448.f_233009 = unk_0x8A83B52A17A321DB(iVar1, "twct3");
		Global_4456448.f_233010 = unk_0x8A83B52A17A321DB(iVar1, "twct4");
		Global_4456448.f_233011 = unk_0x8A83B52A17A321DB(iVar1, "twcon");
		Global_4456448.f_233012 = unk_0x8A83B52A17A321DB(iVar1, "twcto");
		Global_4456448.f_233013 = unk_0x8A83B52A17A321DB(iVar1, "twcun");
		Global_4456448.f_233014 = unk_0x8A83B52A17A321DB(iVar1, "twcdi");
		Global_4456448.f_233015 = unk_0x8A83B52A17A321DB(iVar1, "svmrcvbr");
		Global_4456448.f_233016 = unk_0x8A83B52A17A321DB(iVar1, "wvmarc");
		Global_4456448.f_233448 = unk_0x8A83B52A17A321DB(iVar1, "wvmsbet");
		Global_4456448.f_233449 = unk_0x8A83B52A17A321DB(iVar1, "wvmsber");
		if (unk_0xAE496C664AE89A9C(iVar1, "wvmdsr") == 2)
		{
			Global_4456448.f_233456 = unk_0x8A83B52A17A321DB(iVar1, "wvmdsr");
		}
		else
		{
			Global_4456448.f_233456 = -1;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, "conbons") == 3)
		{
			Global_4456448.f_233903 = unk_0xB37C1AC7E8A75F3C(iVar1, "conbons");
		}
		else
		{
			Global_4456448.f_233903 = 0f;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, "conspd") == 3)
		{
			Global_4456448.f_233902 = unk_0xB37C1AC7E8A75F3C(iVar1, "conspd");
		}
		else
		{
			Global_4456448.f_233902 = 1f;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, "confot") == 2)
		{
			Global_4456448.f_233904 = unk_0x8A83B52A17A321DB(iVar1, "confot");
		}
		else
		{
			Global_4456448.f_233904 = 5000;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, "confont") == 2)
		{
			Global_4456448.f_233905 = unk_0x8A83B52A17A321DB(iVar1, "confont");
		}
		else
		{
			Global_4456448.f_233905 = 1000;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, "consd") == 2)
		{
			Global_4456448.f_233906 = unk_0x8A83B52A17A321DB(iVar1, "consd");
		}
		else
		{
			Global_4456448.f_233906 = 1000;
		}
		iVar3 = 0;
		while (iVar3 <= 3)
		{
			StringCopy(&cVar41, "kspt", 8);
			StringIntConCat(&cVar41, iVar3, 8);
			Global_4456448.f_233071[iVar3] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
			StringCopy(&cVar41, "kspr", 8);
			StringIntConCat(&cVar41, iVar3, 8);
			Global_4456448.f_233076[iVar3] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
			iVar3++;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_233912 = unk_0x8A83B52A17A321DB(iVar1, "hrdnt");
		}
		else
		{
			Global_4456448.f_233912 = 60000;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, "sdtick") == 3)
		{
			Global_4456448.f_233913 = unk_0xB37C1AC7E8A75F3C(iVar1, "sdtick");
		}
		else
		{
			Global_4456448.f_233913 = 0,5f;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, "sddmg") == 3)
		{
			Global_4456448.f_233915 = unk_0xB37C1AC7E8A75F3C(iVar1, "sddmg");
		}
		else
		{
			Global_4456448.f_233915 = 1f;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, "sdstp") == 3)
		{
			Global_4456448.f_233916 = unk_0xB37C1AC7E8A75F3C(iVar1, "sdstp");
		}
		else
		{
			Global_4456448.f_233916 = 50f;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, "sdmxp") == 3)
		{
			Global_4456448.f_233917 = unk_0xB37C1AC7E8A75F3C(iVar1, "sdmxp");
		}
		else
		{
			Global_4456448.f_233917 = 100f;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, "sddri") == 3)
		{
			Global_4456448.f_233914 = unk_0xB37C1AC7E8A75F3C(iVar1, "sddri");
		}
		else
		{
			Global_4456448.f_233914 = 1,5f;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, "sdrsc") == 3)
		{
			Global_4456448.f_233918 = unk_0xB37C1AC7E8A75F3C(iVar1, "sdrsc");
		}
		else
		{
			Global_4456448.f_233918 = 25f;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, "sdidd") == 3)
		{
			Global_4456448.f_233919 = unk_0xB37C1AC7E8A75F3C(iVar1, "sdidd");
		}
		else
		{
			Global_4456448.f_233919 = 1f;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, "GMt1r1") == 2)
		{
			Global_4456448.f_233920 = unk_0x8A83B52A17A321DB(iVar1, "GMt1r1");
		}
		else
		{
			Global_4456448.f_233920 = 0;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, "GMt2r1") == 2)
		{
			Global_4456448.f_233921 = unk_0x8A83B52A17A321DB(iVar1, "GMt2r1");
		}
		else
		{
			Global_4456448.f_233921 = 0;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, "GMt1r2") == 2)
		{
			Global_4456448.f_233922 = unk_0x8A83B52A17A321DB(iVar1, "GMt1r2");
		}
		else
		{
			Global_4456448.f_233922 = 0;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, "GMt2r2") == 2)
		{
			Global_4456448.f_233923 = unk_0x8A83B52A17A321DB(iVar1, "GMt2r2");
		}
		else
		{
			Global_4456448.f_233923 = 0;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, "GMsttm") == 2)
		{
			Global_4456448.f_233924 = unk_0x8A83B52A17A321DB(iVar1, "GMsttm");
		}
		else
		{
			Global_4456448.f_233924 = 0;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, "GMswrt") == 2)
		{
			Global_4456448.f_233925 = unk_0x8A83B52A17A321DB(iVar1, "GMswrt");
		}
		else
		{
			Global_4456448.f_233925 = 0;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, "tgtmcd") == 2)
		{
			Global_4456448.f_234212 = unk_0x8A83B52A17A321DB(iVar1, "tgtmcd");
		}
		else
		{
			Global_4456448.f_234212 = 30;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, "mjtr") == 2)
		{
			Global_4456448.f_234211 = unk_0x8A83B52A17A321DB(iVar1, "mjtr");
		}
		else
		{
			Global_4456448.f_234211 = 0;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, "hhdmdp") == 3)
		{
			Global_4456448.f_233926 = unk_0xB37C1AC7E8A75F3C(iVar1, "hhdmdp");
		}
		else
		{
			Global_4456448.f_233926 = 2,5f;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, "hhdmsp") == 2)
		{
			Global_4456448.f_233927 = unk_0x8A83B52A17A321DB(iVar1, "hhdmsp");
		}
		else
		{
			Global_4456448.f_233927 = 0;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_233022 = unk_0x8A83B52A17A321DB(iVar1, "pptl");
		}
		else
		{
			Global_4456448.f_233022 = 5;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_233021 = unk_0x8A83B52A17A321DB(iVar1, "ptltl");
		}
		else
		{
			Global_4456448.f_233021 = 0;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_233092 = unk_0x8A83B52A17A321DB(iVar1, "ptlem");
		}
		else
		{
			Global_4456448.f_233092 = -1;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_233017 = unk_0x8A83B52A17A321DB(iVar1, "trrt");
		}
		else
		{
			Global_4456448.f_233017 = 3;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_233093 = unk_0x8A83B52A17A321DB(iVar1, "tptb");
		}
		else
		{
			Global_4456448.f_233093 = 5000;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_233094 = unk_0x8A83B52A17A321DB(iVar1, "tprt");
		}
		else
		{
			Global_4456448.f_233094 = 2500;
		}
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_233095 = unk_0x8A83B52A17A321DB(iVar1, "ldpucd");
		}
		else
		{
			Global_4456448.f_233095 = 3000;
		}
		StringCopy(&cVar41, "rtveft", 8);
		StringIntConCat(&cVar41, iVar0, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_232911[iVar0] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_232911[iVar0] = 0;
		}
		StringCopy(&cVar41, "mrtr", 8);
		StringIntConCat(&cVar41, iVar0, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 3)
		{
			Global_4456448.f_233962[iVar0] = unk_0xB37C1AC7E8A75F3C(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_233962[iVar0] = 0f;
		}
		StringCopy(&cVar41, "frtr", 8);
		StringIntConCat(&cVar41, iVar0, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 3)
		{
			Global_4456448.f_233967[iVar0] = unk_0xB37C1AC7E8A75F3C(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_233967[iVar0] = 0f;
		}
		iVar0++;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "ctmrs") == 4)
	{
		Global_4456448.f_194817 = unk_0x8A83B52A17A321DB(iVar1, "nqrc");
	}
	else
	{
		Global_4456448.f_194817 = 0;
	}
	iVar60 = 0;
	while (iVar60 <= 15)
	{
		StringCopy(&cVar41, "qrcps", 8);
		StringIntConCat(&cVar41, iVar60, 8);
		if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 5)
		{
			Global_4456448.f_194818[iVar60] = { unk_0xC0F58A082935B6E1(iVar1, &cVar41) };
		}
		else
		{
			Global_4456448.f_194818[iVar60] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar41, "qrchd", 8);
		StringIntConCat(&cVar41, iVar60, 8);
		if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 3)
		{
			Global_4456448.f_194818[iVar60].f_3 = unk_0xB37C1AC7E8A75F3C(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_194818[iVar60].f_3 = 0f;
		}
		StringCopy(&cVar41, "qrcbs", 8);
		StringIntConCat(&cVar41, iVar60, 8);
		if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_194818[iVar60].f_4 = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_194818[iVar60].f_4 = 0;
		}
		StringCopy(&cVar41, "qrctm", 8);
		StringIntConCat(&cVar41, iVar60, 8);
		if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_194818[iVar60].f_5 = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_194818[iVar60].f_5 = 0;
		}
		StringCopy(&cVar41, "qrcck", 8);
		StringIntConCat(&cVar41, iVar60, 8);
		if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_194818[iVar60].f_6 = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_194818[iVar60].f_6 = 0;
		}
		StringCopy(&cVar41, "qrcsg", 8);
		StringIntConCat(&cVar41, iVar60, 8);
		if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_194818[iVar60].f_7 = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_194818[iVar60].f_7 = 0;
		}
		iVar60++;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "ctmrs") == 4)
	{
		StringCopy(&(Global_4456448.f_195302), unk_0x6F58F8DD6B54A28D(iVar1, "ctmrs"), 24);
	}
	else
	{
		StringCopy(&(Global_4456448.f_195302), "", 24);
	}
	iVar3 = 0;
	while (iVar3 < 6)
	{
		StringCopy(&cVar41, "avss", 8);
		StringIntConCat(&cVar41, iVar3, 8);
		Global_4456448.f_208082[iVar3][func_194(iVar3)] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		iVar4 = func_317(iVar3);
		while (iVar4 <= 31)
		{
			unk_0x0674E58A79778E99(&(Global_4456448.f_208082[iVar3][func_194(iVar3)]), iVar4);
			iVar4++;
		}
		iVar3++;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "vsclout") == 2)
	{
		Global_4456448.f_208101[0] = unk_0x8A83B52A17A321DB(iVar1, "vsclout");
	}
	else
	{
		Global_4456448.f_208101[0] = -1;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "vsthout") == 2)
	{
		Global_4456448.f_208101[1] = unk_0x8A83B52A17A321DB(iVar1, "vsthout");
	}
	else
	{
		Global_4456448.f_208101[1] = -1;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "vshwout") == 2)
	{
		Global_4456448.f_208101[3] = unk_0x8A83B52A17A321DB(iVar1, "vshwout");
	}
	else
	{
		Global_4456448.f_208101[3] = -1;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "vsenout") == 2)
	{
		Global_4456448.f_208101[2] = unk_0x8A83B52A17A321DB(iVar1, "vsenout");
	}
	else
	{
		Global_4456448.f_208101[2] = -1;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "vstgout") == 2)
	{
		Global_4456448.f_208101[4] = unk_0x8A83B52A17A321DB(iVar1, "vstgout");
	}
	else
	{
		Global_4456448.f_208101[4] = -1;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "vsbsout") == 2)
	{
		Global_4456448.f_208101[5] = unk_0x8A83B52A17A321DB(iVar1, "vsbsout");
	}
	else
	{
		Global_4456448.f_208101[5] = -1;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "alfutvs") == 2)
	{
		Global_4456448.f_208108 = unk_0x8A83B52A17A321DB(iVar1, "alfutvs");
	}
	else
	{
		Global_4456448.f_208108 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "vsdfstc") == 2)
	{
		Global_4456448.f_208109 = unk_0x8A83B52A17A321DB(iVar1, "vsdfstc");
	}
	else if (((!unk_0xEAE0D21A50E6C7F4(Global_4456448.f_12, 23) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_12, 24)) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_13, 31)) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_14, 8))
	{
		Global_4456448.f_208109 = -1;
	}
	else if (((!unk_0xEAE0D21A50E6C7F4(Global_4456448.f_12, 23) && unk_0xEAE0D21A50E6C7F4(Global_4456448.f_12, 24)) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_13, 31)) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_14, 8))
	{
		Global_4456448.f_208109 = 0;
	}
	else if (((unk_0xEAE0D21A50E6C7F4(Global_4456448.f_12, 23) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_12, 24)) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_13, 31)) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_14, 8))
	{
		Global_4456448.f_208109 = 1;
	}
	else if (((!unk_0xEAE0D21A50E6C7F4(Global_4456448.f_12, 23) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_12, 24)) && unk_0xEAE0D21A50E6C7F4(Global_4456448.f_13, 31)) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_14, 8))
	{
		Global_4456448.f_208109 = 2;
	}
	else if (((!unk_0xEAE0D21A50E6C7F4(Global_4456448.f_12, 23) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_12, 24)) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_13, 31)) && unk_0xEAE0D21A50E6C7F4(Global_4456448.f_14, 8))
	{
		Global_4456448.f_208109 = 3;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "dspteam") == 2)
	{
		Global_4456448.f_227350 = unk_0x8A83B52A17A321DB(iVar1, "dspteam");
	}
	else
	{
		Global_4456448.f_227350 = -1;
	}
	if (!func_110() && !func_316())
	{
		if (unk_0xCEA7093049ECDD91(iParam1))
		{
			StringCopy(&(Global_4456448.f_194997), unk_0x6F58F8DD6B54A28D(iVar1, "nm"), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_194997), func_315(), 64);
		}
		if (!func_314() && func_114() == 0)
		{
			if (func_308())
			{
				Global_4456448.f_194997 = { func_307() };
			}
		}
	}
	else
	{
		StringCopy(&(Global_4456448.f_194997), unk_0x6F58F8DD6B54A28D(iVar1, "nm"), 64);
	}
	Global_4456448.f_197287 = unk_0x8A83B52A17A321DB(iVar1, "mgrk");
	Global_4456448.f_197288 = unk_0x8A83B52A17A321DB(iVar1, "mght");
	StringCopy(&(Global_4456448.f_195019[0]), "", 64);
	StringCopy(&(Global_4456448.f_195019[1]), "", 64);
	StringCopy(&(Global_4456448.f_195019[2]), "", 64);
	StringCopy(&(Global_4456448.f_195019[3]), "", 64);
	StringCopy(&(Global_4456448.f_195019[4]), "", 64);
	StringCopy(&(Global_4456448.f_195019[5]), "", 64);
	StringCopy(&(Global_4456448.f_195019[6]), "", 64);
	StringCopy(&(Global_4456448.f_195019[7]), "", 64);
	iVar61 = unk_0x7619952D26DF7783(iVar1, "dec");
	iVar62 = unk_0x7724E025FD444F45(unk_0x3E4982E6ACD879AE(iVar61, 0));
	if (iParam1 == -1 || unk_0xCEA7093049ECDD91(iParam1))
	{
		if (iVar62 <= 63)
		{
			iVar3 = 0;
			while (iVar3 <= (unk_0x3C3D078CBB366B45(iVar61) - 1))
			{
				StringCopy(&(Global_4456448.f_195019[iVar3]), unk_0x3E4982E6ACD879AE(iVar61, iVar3), 64);
				iVar3++;
			}
		}
		else
		{
			sVar64 = unk_0x3E4982E6ACD879AE(iVar61, 0);
			iVar3 = 0;
			while (iVar3 <= 7)
			{
				if (iVar62 > (63 * iVar3))
				{
					if (iVar62 > (63 * iVar3) + 63)
					{
						iVar63 = (63 * iVar3) + 63;
					}
					else
					{
						iVar63 = iVar62;
					}
					StringCopy(&(Global_4456448.f_195019[iVar3]), unk_0xCFB8A25F37A74B68(sVar64, (63 * iVar3), iVar63), 64);
				}
				iVar3++;
			}
		}
	}
	else
	{
		StringCopy(&(Global_4456448.f_195019[0]), func_315(), 64);
	}
	if (unk_0xAE496C664AE89A9C(iVar1, "ricb") == 2)
	{
		Global_4456448.f_230291 = unk_0x8A83B52A17A321DB(iVar1, "ricb");
	}
	else
	{
		Global_4456448.f_230291 = 0;
	}
	if (unk_0xAE496C664AE89A9C(iVar1, "ripvh") == 2)
	{
		Global_4456448.f_230292 = unk_0x8A83B52A17A321DB(iVar1, "ripvh");
	}
	else
	{
		Global_4456448.f_230292 = 0;
	}
	Global_4456448.f_206 = unk_0x8A83B52A17A321DB(iVar1, "tnum");
	Global_4456448.f_207 = unk_0x8A83B52A17A321DB(iVar1, "mtnum");
	if (!func_306())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 14))
		{
			Global_4456448.f_205 = Global_4456448.f_206;
		}
		else if (unk_0xAE496C664AE89A9C(iVar1, "dtn") == 2)
		{
			Global_4456448.f_205 = unk_0x8A83B52A17A321DB(iVar1, "dtn");
		}
		else
		{
			Global_4456448.f_205 = Global_4456448.f_206;
		}
	}
	else
	{
		Global_4456448.f_205 = Global_4456448.f_206;
	}
	if (Global_4456448 == 0)
	{
		if (Global_2450632.f_569.f_11 != 0 && Global_4456448.f_206 != Global_2450632.f_569.f_11)
		{
			if (!Global_262145.f_4707 && func_62(Global_4456448.f_232883))
			{
				iVar65 = func_305();
				if (Global_2450632.f_569.f_11 < iVar65)
				{
					Global_2450632.f_569.f_11 = iVar65;
					if (unk_0xD803B885F5E47A62() != -1)
					{
						Global_1627020[unk_0xD803B885F5E47A62()] = Global_2450632.f_569.f_11;
					}
				}
			}
			Global_4456448.f_206 = Global_2450632.f_569.f_11;
			Global_4456448.f_205 = Global_4456448.f_206;
		}
		else if ((func_302() || func_300()) && func_299())
		{
			iVar66 = func_305();
			fVar67 = (to_float(iVar66) / to_float(Global_4456448.f_201));
			iVar68 = 0;
			if (Global_4456448.f_206 == 3)
			{
				if (fVar67 <= 0,66f)
				{
					Global_4456448.f_206 = 2;
					iVar68 = 1;
				}
			}
			else if (Global_4456448.f_206 == 4)
			{
				if (fVar67 <= 0,5f)
				{
					Global_4456448.f_206 = 2;
					iVar68 = 1;
				}
				else if (fVar67 <= 0,75f)
				{
					Global_4456448.f_206 = 3;
					iVar68 = 1;
				}
			}
			if (iVar68 && Global_1590535[unk_0xD803B885F5E47A62()].f_99.f_28 >= Global_4456448.f_206)
			{
				Global_1590535[unk_0xD803B885F5E47A62()].f_99.f_28 = func_297(Global_4456448.f_206);
			}
			if (Global_4456448.f_205 > Global_4456448.f_206)
			{
				Global_4456448.f_205 = Global_4456448.f_206;
			}
		}
	}
	func_295(&iVar1);
	func_294(iVar1);
	if (Global_4456448 == 1)
	{
		if (Global_4456448.f_206 > 4)
		{
			Global_4456448.f_206 = 4;
		}
	}
	else if (Global_4456448.f_206 > 4)
	{
		Global_4456448.f_206 = 4;
	}
	Global_4456448.f_182506 = unk_0x8A83B52A17A321DB(iVar1, "atmdm");
	Global_4456448.f_220 = unk_0x8A83B52A17A321DB(iVar1, "trel");
	Global_4456448.f_234008 = unk_0x8A83B52A17A321DB(iVar1, "tpas");
	Global_4456448.f_197252 = unk_0x8A83B52A17A321DB(iVar1, "ltm");
	Global_4456448.f_250 = { unk_0xC0F58A082935B6E1(iVar1, "vcpr") };
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "hstat") == 2)
	{
		Global_4456448.f_197222 = unk_0x8A83B52A17A321DB(iVar1, "hstat");
	}
	else
	{
		Global_4456448.f_197222 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "micobs") == 2)
	{
		Global_4456448.f_195352 = unk_0x8A83B52A17A321DB(iVar1, "micobs");
	}
	else
	{
		Global_4456448.f_195352 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "micopt") == 2)
	{
		Global_4456448.f_195353 = unk_0x8A83B52A17A321DB(iVar1, "micopt");
	}
	else
	{
		Global_4456448.f_195353 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "csgbs") == 2)
	{
		Global_4456448.f_195354 = unk_0x8A83B52A17A321DB(iVar1, "csgbs");
	}
	else
	{
		Global_4456448.f_195354 = 0;
	}
	iVar69 = 0;
	while (iVar69 <= 19)
	{
		StringCopy(&cVar41, "csgc", 8);
		StringIntConCat(&cVar41, iVar69, 8);
		if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_195355[iVar69] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_195355[iVar69] = 0;
		}
		StringCopy(&cVar41, "csgci", 8);
		StringIntConCat(&cVar41, iVar69, 8);
		if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_195376[iVar69] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_195376[iVar69] = -1;
		}
		iVar69++;
	}
	iVar69 = 0;
	while (iVar69 <= 19)
	{
		StringCopy(&cVar41, "rzpos", 8);
		StringIntConCat(&cVar41, iVar69, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 5)
		{
			Global_4456448.f_134995[iVar69] = { unk_0xC0F58A082935B6E1(iVar1, &cVar41) };
		}
		else
		{
			Global_4456448.f_134995[iVar69] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar41, "rzzon", 8);
		StringIntConCat(&cVar41, iVar69, 8);
		if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_135056[iVar69] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_135056[iVar69] = 0;
		}
		StringCopy(&cVar41, "rzobj", 8);
		StringIntConCat(&cVar41, iVar69, 8);
		if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_135077[iVar69] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_135077[iVar69] = -1;
		}
		StringCopy(&cVar41, "rzacc", 8);
		StringIntConCat(&cVar41, iVar69, 8);
		if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 3)
		{
			Global_4456448.f_135098[iVar69] = unk_0xB37C1AC7E8A75F3C(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_135098[iVar69] = 100f;
		}
		StringCopy(&cVar41, "rzcav", 8);
		StringIntConCat(&cVar41, iVar69, 8);
		if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_135120[iVar69] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_135120[iVar69] = -1;
		}
		iVar69++;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "rzhmb") == 2)
	{
		Global_4456448.f_135119 = unk_0x8A83B52A17A321DB(iVar1, "rzhmb");
	}
	else
	{
		Global_4456448.f_135119 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "numzr") == 2)
	{
		Global_4456448.f_135141 = unk_0x8A83B52A17A321DB(iVar1, "numzr");
	}
	else
	{
		Global_4456448.f_135141 = 0;
	}
	iVar70 = unk_0x6D954AF55D3925DB(iParam0, "ene");
	iVar71 = unk_0x8A83B52A17A321DB(iVar70, "no");
	iVar3 = 0;
	while (iVar3 < 6)
	{
		StringCopy(&cVar41, "hpped", 8);
		if (iVar3 > 0)
		{
			StringIntConCat(&cVar41, iVar3 + 1, 8);
		}
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2 && iVar71 > unk_0x8A83B52A17A321DB(iVar1, &cVar41))
		{
			Global_4456448.f_181664[iVar3] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_181664[iVar3] = -1;
		}
		iVar3++;
	}
	if (((iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "rsgmx") == 2) && unk_0xAE496C664AE89A9C(iVar1, "rsgnu") == 2) || unk_0xEAE0D21A50E6C7F4(Global_4456448.f_35, 19))
	{
		Global_4456448.f_181671 = unk_0x8A83B52A17A321DB(iVar1, "rsgmx");
		Global_4456448.f_181672 = unk_0x8A83B52A17A321DB(iVar1, "rsgnu");
		Global_4456448.f_181673 = unk_0x8A83B52A17A321DB(iVar1, "rsgbs");
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_35, 19))
		{
			Global_4456448.f_181671 = 19;
		}
		if (((Global_4456448.f_181671 > 0 && Global_4456448.f_181672 != 0) || Global_4456448.f_238430 != -1) || unk_0xEAE0D21A50E6C7F4(Global_4456448.f_35, 19))
		{
			iVar3 = 0;
			while (iVar3 <= (Global_4456448.f_181671 - 1))
			{
				if (iVar3 < 20)
				{
					StringCopy(&cVar41, "rsg", 8);
					StringIntConCat(&cVar41, iVar3, 8);
					MemCopy(&cVar72, {cVar41}, 4);
					StringConCat(&cVar72, "mx", 16);
					MemCopy(&cVar76, {cVar41}, 4);
					StringConCat(&cVar76, "nu", 16);
					if (unk_0xAE496C664AE89A9C(iVar1, &cVar72) == 2 && unk_0xAE496C664AE89A9C(iVar1, &cVar76) == 2)
					{
						Global_4456448.f_181695[iVar3] = unk_0x8A83B52A17A321DB(iVar1, &cVar72);
						Global_4456448.f_181716[iVar3] = unk_0x8A83B52A17A321DB(iVar1, &cVar76);
						MemCopy(&cVar72, {cVar41}, 4);
						StringConCat(&cVar72, "bs", 16);
						Global_4456448.f_181737[iVar3] = unk_0x8A83B52A17A321DB(iVar1, &cVar72);
					}
					MemCopy(&cVar72, {cVar41}, 4);
					StringConCat(&cVar72, "ee", 16);
					iVar0 = unk_0x8A83B52A17A321DB(iVar1, &cVar72);
					Global_4456448.f_181674[iVar3] = iVar0;
					iVar39 = 0;
					while (iVar39 <= 19)
					{
						MemCopy(&cVar72, {cVar41}, 4);
						StringConCat(&cVar72, "es", 16);
						StringIntConCat(&cVar72, iVar39, 16);
						iVar0 = unk_0x8A83B52A17A321DB(iVar1, &cVar72);
						Global_4456448.f_181758[iVar3][iVar39] = iVar0;
						iVar39++;
					}
				}
				iVar3++;
			}
		}
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "tshd") == 2)
	{
		Global_4456448.f_197275 = unk_0x8A83B52A17A321DB(iVar1, "tshd");
	}
	else
	{
		Global_4456448.f_197275 = -1;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "mrd") == 2)
	{
		Global_4456448.f_197276 = unk_0x8A83B52A17A321DB(iVar1, "mrd");
	}
	else
	{
		Global_4456448.f_197276 = 15;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "etim") == 3)
	{
		Global_4456448.f_197278 = unk_0xB37C1AC7E8A75F3C(iVar1, "etim");
	}
	else
	{
		Global_4456448.f_197278 = 2,5f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "evel") == 3)
	{
		Global_4456448.f_197279 = unk_0xB37C1AC7E8A75F3C(iVar1, "evel");
	}
	else
	{
		Global_4456448.f_197279 = 8f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "etimb") == 3)
	{
		Global_4456448.f_197280 = unk_0xB37C1AC7E8A75F3C(iVar1, "etimb");
	}
	else
	{
		Global_4456448.f_197280 = 2,5f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "evelb") == 3)
	{
		Global_4456448.f_197281 = unk_0xB37C1AC7E8A75F3C(iVar1, "evelb");
	}
	else
	{
		Global_4456448.f_197281 = 8f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "srct") == 2)
	{
		Global_4456448.f_197277 = unk_0x8A83B52A17A321DB(iVar1, "srct");
	}
	else
	{
		Global_4456448.f_197277 = -1;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "tptbd") == 2)
	{
		Global_4456448.f_197282 = unk_0x8A83B52A17A321DB(iVar1, "tptbd");
	}
	else
	{
		Global_4456448.f_197282 = -1;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "tptba") == 2)
	{
		Global_4456448.f_197283 = unk_0x8A83B52A17A321DB(iVar1, "tptba");
	}
	else
	{
		Global_4456448.f_197283 = -1;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "atspos") == 5)
	{
		Global_4456448.f_229455 = { unk_0xC0F58A082935B6E1(iVar1, "atspos") };
	}
	else
	{
		Global_4456448.f_229455 = { 0f, 0f, 0f };
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "atscmp") == 5)
	{
		Global_4456448.f_229449 = { unk_0xC0F58A082935B6E1(iVar1, "atscmp") };
	}
	else
	{
		Global_4456448.f_229449 = { 0f, 0f, 0f };
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "atscmr") == 5)
	{
		Global_4456448.f_229452 = { unk_0xC0F58A082935B6E1(iVar1, "atscmr") };
	}
	else
	{
		Global_4456448.f_229452 = { 0f, 0f, 0f };
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "atsfov") == 3)
	{
		Global_4456448.f_229458 = unk_0xB37C1AC7E8A75F3C(iVar1, "atsfov");
	}
	else
	{
		Global_4456448.f_229458 = 45f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "atshed") == 3)
	{
		Global_4456448.f_229459 = unk_0xB37C1AC7E8A75F3C(iVar1, "atshed");
	}
	else
	{
		Global_4456448.f_229459 = 0f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "atsveh") == 2)
	{
		Global_4456448.f_229460 = unk_0x8A83B52A17A321DB(iVar1, "atsveh");
	}
	else
	{
		Global_4456448.f_229460 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "hpdt1") == 2)
	{
		Global_4456448.f_197223[0] = unk_0x8A83B52A17A321DB(iVar1, "hpdt1");
	}
	else
	{
		Global_4456448.f_197223[0] = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "hpdt2") == 2)
	{
		Global_4456448.f_197223[1] = unk_0x8A83B52A17A321DB(iVar1, "hpdt2");
	}
	else
	{
		Global_4456448.f_197223[1] = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "vdt") == 2)
	{
		Global_4456448.f_197227 = unk_0x8A83B52A17A321DB(iVar1, "vdt");
	}
	else
	{
		Global_4456448.f_197227 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "hbrbs") == 2)
	{
		Global_4456448.f_227330 = unk_0x8A83B52A17A321DB(iVar1, "hbrbs");
	}
	else
	{
		Global_4456448.f_227330 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "hbrtt") == 2)
	{
		Global_4456448.f_227331 = unk_0x8A83B52A17A321DB(iVar1, "hbrtt");
	}
	else
	{
		Global_4456448.f_227331 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "hbrttm") == 2)
	{
		Global_4456448.f_227332 = unk_0x8A83B52A17A321DB(iVar1, "hbrttm");
	}
	else
	{
		Global_4456448.f_227332 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "hbrtrl") == 2)
	{
		Global_4456448.f_227333 = unk_0x8A83B52A17A321DB(iVar1, "hbrtrl");
	}
	else
	{
		Global_4456448.f_227333 = -1;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "hbrpdt") == 2)
	{
		Global_4456448.f_227335 = unk_0x8A83B52A17A321DB(iVar1, "hbrpdt");
	}
	else
	{
		Global_4456448.f_227335 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "hbrvdt") == 2)
	{
		Global_4456448.f_227337 = unk_0x8A83B52A17A321DB(iVar1, "hbrvdt");
	}
	else
	{
		Global_4456448.f_227337 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "hbrkt") == 2)
	{
		Global_4456448.f_227339 = unk_0x8A83B52A17A321DB(iVar1, "hbrkt");
	}
	else
	{
		Global_4456448.f_227339 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "hbrph") == 2)
	{
		Global_4456448.f_227342 = unk_0x8A83B52A17A321DB(iVar1, "hbrph");
	}
	else
	{
		Global_4456448.f_227342 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "hecam") == 2)
	{
		Global_4456448.f_227345 = unk_0x8A83B52A17A321DB(iVar1, "hecam");
	}
	else
	{
		Global_4456448.f_227345 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "hbhs") == 2)
	{
		Global_4456448.f_227343 = unk_0x8A83B52A17A321DB(iVar1, "hbhs");
	}
	else
	{
		Global_4456448.f_227343 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "hbht") == 2)
	{
		Global_4456448.f_227344 = unk_0x8A83B52A17A321DB(iVar1, "hbht");
	}
	else
	{
		Global_4456448.f_227344 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "sdrvm") == 2)
	{
		Global_4456448.f_230293 = unk_0x8A83B52A17A321DB(iVar1, "sdrvm");
	}
	else
	{
		Global_4456448.f_230293 = 10000;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "vstm") == 2)
	{
		Global_4456448.f_230294 = unk_0x8A83B52A17A321DB(iVar1, "vstm");
	}
	else
	{
		Global_4456448.f_230294 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "inumbnc") == 2)
	{
		Global_4456448.f_230308 = unk_0x8A83B52A17A321DB(iVar1, "inumbnc");
	}
	else
	{
		Global_4456448.f_230308 = 10000;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "mdmgm") == 3)
	{
		Global_4456448.f_230295 = unk_0xB37C1AC7E8A75F3C(iVar1, "mdmgm");
	}
	else
	{
		Global_4456448.f_230295 = 1f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "itsms") == 2)
	{
		Global_4456448.f_233056 = unk_0x8A83B52A17A321DB(iVar1, "itsms");
	}
	else
	{
		Global_4456448.f_233056 = 1;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "igls") == 2)
	{
		Global_4456448.f_233057 = unk_0x8A83B52A17A321DB(iVar1, "igls");
	}
	else
	{
		Global_4456448.f_233057 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "twdas") == 3)
	{
		Global_4456448.f_230296 = unk_0xB37C1AC7E8A75F3C(iVar1, "twdas");
	}
	else
	{
		Global_4456448.f_230296 = 0f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "vdt") == 2)
	{
		Global_4456448.f_232885 = unk_0x8A83B52A17A321DB(iVar1, "sphft");
	}
	else
	{
		Global_4456448.f_232885 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "sdsr") == 2)
	{
		Global_4456448.f_232843 = unk_0x8A83B52A17A321DB(iVar1, "sdsr");
	}
	else
	{
		Global_4456448.f_232843 = -1;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "cmxdftms") == 2)
	{
		Global_4456448.f_232908 = unk_0x8A83B52A17A321DB(iVar1, "cmxdftms");
	}
	else
	{
		Global_4456448.f_232908 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "crlaa") == 2)
	{
		Global_4456448.f_232910 = unk_0x8A83B52A17A321DB(iVar1, "crlaa");
	}
	else
	{
		Global_4456448.f_232910 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "cmxtliv") == 2)
	{
		Global_4456448.f_232922 = unk_0x8A83B52A17A321DB(iVar1, "cmxtliv");
	}
	else
	{
		Global_4456448.f_232922 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "cmxdctl") == 2)
	{
		Global_4456448.f_232923 = unk_0x8A83B52A17A321DB(iVar1, "cmxdctl");
	}
	else
	{
		Global_4456448.f_232923 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "cmxmctl") == 2)
	{
		Global_4456448.f_232924 = unk_0x8A83B52A17A321DB(iVar1, "cmxmctl");
	}
	else
	{
		Global_4456448.f_232924 = 0;
	}
	if ((((iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "hmmtt") == 2) && unk_0xAE496C664AE89A9C(iVar1, "hmmts") == 2) && unk_0xAE496C664AE89A9C(iVar1, "hmmte") == 2) && unk_0xAE496C664AE89A9C(iVar1, "hmmth") == 2)
	{
		Global_4456448.f_227346 = unk_0x8A83B52A17A321DB(iVar1, "hmmtt");
		Global_4456448.f_227347 = unk_0x8A83B52A17A321DB(iVar1, "hmmts");
		Global_4456448.f_227348 = unk_0x8A83B52A17A321DB(iVar1, "hmmte");
		Global_4456448.f_227349 = unk_0x8A83B52A17A321DB(iVar1, "hmmth");
	}
	else
	{
		Global_4456448.f_227346 = 0;
		Global_4456448.f_227347 = 0;
		Global_4456448.f_227348 = 0;
		Global_4456448.f_227349 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "tstrm") == 2)
	{
		Global_4456448.f_229396 = unk_0x8A83B52A17A321DB(iVar1, "tstrm");
	}
	else
	{
		Global_4456448.f_229396 = 0;
	}
	iVar3 = 0;
	while (iVar3 <= 35)
	{
		StringCopy(&cVar41, "dtspk", 8);
		StringIntConCat(&cVar41, iVar3, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 4)
		{
			StringCopy(&(Global_4456448.f_207686[iVar3]), unk_0x6F58F8DD6B54A28D(iVar1, &cVar41), 32);
		}
		else
		{
			StringCopy(&(Global_4456448.f_207686[iVar3]), "", 32);
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 <= 4)
	{
		StringCopy(&cVar41, "cspnm", 8);
		StringIntConCat(&cVar41, iVar3, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 4)
		{
			StringCopy(&(Global_4456448.f_181400[iVar3]), unk_0x6F58F8DD6B54A28D(iVar1, &cVar41), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_181400[iVar3]), "", 64);
		}
		StringCopy(&cVar41, "csvnm", 8);
		StringIntConCat(&cVar41, iVar3, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 4)
		{
			StringCopy(&(Global_4456448.f_181481[iVar3]), unk_0x6F58F8DD6B54A28D(iVar1, &cVar41), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_181481[iVar3]), "", 64);
		}
		StringCopy(&cVar41, "csonm", 8);
		StringIntConCat(&cVar41, iVar3, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 4)
		{
			StringCopy(&(Global_4456448.f_181562[iVar3]), unk_0x6F58F8DD6B54A28D(iVar1, &cVar41), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_181562[iVar3]), "", 64);
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 <= 19)
	{
		StringCopy(&cVar35, "otxsgo", 16);
		StringIntConCat(&cVar35, iVar3, 16);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar35) == 4)
		{
			StringCopy(&(Global_4456448.f_182179[iVar3]), unk_0x6F58F8DD6B54A28D(iVar1, &cVar35), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_182179[iVar3]), "", 64);
		}
		iVar3++;
	}
	iVar80 = 0;
	while (iVar80 <= 3)
	{
		iVar4 = 0;
		while (iVar4 <= 12)
		{
			StringCopy(&cVar41, "ofit", 8);
			StringIntConCat(&cVar41, iVar4 + 1, 8);
			StringIntConCat(&cVar41, iVar80, 8);
			if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
			{
				Global_4456448.f_208020[iVar80][iVar4] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
			}
			iVar4++;
		}
		StringCopy(&cVar41, "ofs1", 8);
		StringIntConCat(&cVar41, iVar80, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_208137[iVar80][0] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_208137[iVar80][0] = 0;
		}
		StringCopy(&cVar41, "ofs2", 8);
		StringIntConCat(&cVar41, iVar80, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_208137[iVar80][1] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_208137[iVar80][1] = 0;
		}
		StringCopy(&cVar41, "mask1", 8);
		StringIntConCat(&cVar41, iVar80, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_208159[iVar80][0] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_208159[iVar80][0] = 0;
		}
		StringCopy(&cVar35, "gear", 16);
		StringIntConCat(&cVar35, iVar80, 16);
		iVar4 = 0;
		while (iVar4 <= 2)
		{
			if (iVar4 > 0)
			{
				StringConCat(&cVar35, "h", 16);
				StringIntConCat(&cVar35, iVar4, 16);
			}
			if (unk_0xAE496C664AE89A9C(iVar1, &cVar35) == 2)
			{
				Global_4456448.f_208110[iVar80][iVar4] = unk_0x8A83B52A17A321DB(iVar1, &cVar35);
			}
			else
			{
				Global_4456448.f_208110[iVar80][iVar4] = 0;
			}
			iVar4++;
		}
		StringCopy(&cVar41, "geard", 8);
		StringIntConCat(&cVar41, iVar80, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_208127[iVar80] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_208127[iVar80] = -1;
		}
		StringCopy(&cVar41, "apwfr", 8);
		StringIntConCat(&cVar41, iVar80, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_226007[iVar80] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_226007[iVar80] = -1;
		}
		StringCopy(&cVar41, "apwlr", 8);
		StringIntConCat(&cVar41, iVar80, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_226012[iVar80] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_226012[iVar80] = -1;
		}
		StringCopy(&cVar41, "tcmin", 8);
		StringIntConCat(&cVar41, iVar80, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2 && !func_206())
		{
			Global_4456448.f_226391[iVar80] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_226391[iVar80] = 0;
		}
		iVar4 = 0;
		while (iVar4 <= 3)
		{
			StringCopy(&cVar41, "trcmn", 8);
			StringIntConCat(&cVar41, iVar4, 8);
			StringIntConCat(&cVar41, iVar80, 8);
			if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2 && !func_206())
			{
				Global_4456448.f_226396[iVar80][iVar4] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
			}
			else
			{
				Global_4456448.f_226396[iVar80][iVar4] = 0;
			}
			iVar4++;
		}
		StringCopy(&cVar41, "tmrsp", 8);
		StringIntConCat(&cVar41, iVar80, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_226418[iVar80] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_226418[iVar80] = 0;
		}
		StringCopy(&cVar41, "vifcit", 8);
		StringIntConCat(&cVar41, iVar80, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_233907[iVar80] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_233907[iVar80] = -1;
		}
		StringCopy(&cVar41, "tvpm", 8);
		StringIntConCat(&cVar41, iVar80, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_78230[iVar80] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_78230[iVar80] = -1;
		}
		StringCopy(&cVar41, "tvnc", 8);
		StringIntConCat(&cVar41, iVar80, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_78209[iVar80] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_78209[iVar80] = -1;
		}
		StringCopy(&cVar41, "tmrees", 8);
		StringIntConCat(&cVar41, iVar80, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 3)
		{
			Global_4456448.f_226423[iVar80] = unk_0xB37C1AC7E8A75F3C(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_226423[iVar80] = 1f;
		}
		StringCopy(&cVar41, "tmvhp", 8);
		StringIntConCat(&cVar41, iVar80, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_78189[iVar80] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_78189[iVar80] = 100;
		}
		StringCopy(&cVar41, "tmvds", 8);
		StringIntConCat(&cVar41, iVar80, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 3)
		{
			Global_4456448.f_78194[iVar80] = unk_0xB37C1AC7E8A75F3C(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_78194[iVar80] = 1f;
		}
		StringCopy(&cVar41, "tblty", 8);
		StringIntConCat(&cVar41, iVar80, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_78224[iVar80] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_78224[iVar80] = 0;
		}
		StringCopy(&cVar41, "pmpos", 8);
		StringIntConCat(&cVar41, iVar80, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 5)
		{
			Global_4456448.f_194096[iVar80] = { unk_0xC0F58A082935B6E1(iVar1, &cVar41) };
		}
		else
		{
			Global_4456448.f_194096[iVar80] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar41, "pmpoi", 8);
		StringIntConCat(&cVar41, iVar80, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 5)
		{
			Global_4456448.f_194109[iVar80] = { unk_0xC0F58A082935B6E1(iVar1, &cVar41) };
		}
		else
		{
			Global_4456448.f_194109[iVar80] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar41, "pmrad", 8);
		StringIntConCat(&cVar41, iVar80, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 3)
		{
			Global_4456448.f_194122[iVar80] = unk_0xB37C1AC7E8A75F3C(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_194122[iVar80] = 0f;
		}
		StringCopy(&cVar41, "dfofit", 8);
		StringIntConCat(&cVar41, iVar80, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_208077[iVar80] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_208077[iVar80] = -1;
		}
		StringCopy(&cVar41, "dfstyl", 8);
		StringIntConCat(&cVar41, iVar80, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_208154[iVar80] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_208154[iVar80] = -1;
		}
		StringCopy(&cVar41, "clrovr", 8);
		StringIntConCat(&cVar41, iVar80, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_190067[iVar80] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_190067[iVar80] = -1;
		}
		StringCopy(&cVar41, "tswpal", 8);
		StringIntConCat(&cVar41, iVar80, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_116795[iVar80] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_116795[iVar80] = -1;
		}
		iVar81 = 0;
		while (iVar81 <= 3)
		{
			StringCopy(&cVar41, "", 8);
			StringIntConCat(&cVar41, iVar81 + 1, 8);
			StringConCat(&cVar41, "cmrt", 8);
			StringIntConCat(&cVar41, iVar80, 8);
			if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
			{
				Global_4456448.f_181643[iVar81][iVar80] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
			}
			else
			{
				Global_4456448.f_181643[iVar81][iVar80] = 0;
			}
			StringCopy(&cVar35, "trstp", 16);
			StringIntConCat(&cVar35, iVar80, 16);
			if (iVar81 > 0)
			{
				StringIntConCat(&cVar35, iVar81, 16);
			}
			if (unk_0xAE496C664AE89A9C(iVar1, &cVar35) == 5)
			{
				Global_4456448.f_194221[iVar80][iVar81][0] = { unk_0xC0F58A082935B6E1(iVar1, &cVar35) };
			}
			else
			{
				Global_4456448.f_194221[iVar80][iVar81][0] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar35, "trstf", 16);
			StringIntConCat(&cVar35, iVar80, 16);
			if (iVar81 > 0)
			{
				StringIntConCat(&cVar35, iVar81, 16);
			}
			if (unk_0xAE496C664AE89A9C(iVar1, &cVar35) == 5)
			{
				Global_4456448.f_194519[iVar80][iVar81][0] = { unk_0xC0F58A082935B6E1(iVar1, &cVar35) };
			}
			else
			{
				Global_4456448.f_194519[iVar80][iVar81][0] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar35, "trsth", 16);
			StringIntConCat(&cVar35, iVar80, 16);
			if (iVar81 > 0)
			{
				StringIntConCat(&cVar35, iVar81, 16);
			}
			if (unk_0xAE496C664AE89A9C(iVar1, &cVar35) == 3)
			{
				Global_4456448.f_194434[iVar80][iVar81][0] = unk_0xB37C1AC7E8A75F3C(iVar1, &cVar35);
			}
			else
			{
				Global_4456448.f_194434[iVar80][iVar81][0] = 0f;
			}
			iVar82 = 0;
			while (iVar82 <= 3)
			{
				StringCopy(&cVar35, "trstp", 16);
				StringIntConCat(&cVar35, iVar80, 16);
				StringIntConCat(&cVar35, iVar81, 16);
				StringConCat(&cVar35, "n", 16);
				StringIntConCat(&cVar35, iVar82, 16);
				if (unk_0xAE496C664AE89A9C(iVar1, &cVar35) == 5)
				{
					Global_4456448.f_194221[iVar80][iVar81][iVar82] = { unk_0xC0F58A082935B6E1(iVar1, &cVar35) };
				}
				else
				{
					Global_4456448.f_194221[iVar80][iVar81][iVar82] = { 0f, 0f, 0f };
				}
				StringCopy(&cVar35, "trsth", 16);
				StringIntConCat(&cVar35, iVar80, 16);
				StringIntConCat(&cVar35, iVar81, 16);
				StringConCat(&cVar35, "n", 16);
				StringIntConCat(&cVar35, iVar82, 16);
				if (unk_0xAE496C664AE89A9C(iVar1, &cVar35) == 3)
				{
					Global_4456448.f_194434[iVar80][iVar81][iVar82] = unk_0xB37C1AC7E8A75F3C(iVar1, &cVar35);
				}
				else
				{
					Global_4456448.f_194434[iVar80][iVar81][iVar82] = 0f;
				}
				iVar82++;
			}
			StringCopy(&cVar41, "trsrl", 8);
			StringIntConCat(&cVar41, iVar80, 8);
			StringIntConCat(&cVar41, iVar81, 8);
			if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
			{
				Global_4456448.f_230270[iVar80][iVar81] = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
			}
			else
			{
				Global_4456448.f_230270[iVar80][iVar81] = 0;
			}
			iVar81++;
		}
		iVar83 = 0;
		while (iVar83 <= 3)
		{
			StringCopy(&cVar35, "iltt", 16);
			StringIntConCat(&cVar35, iVar80, 16);
			StringIntConCat(&cVar35, iVar83, 16);
			if (unk_0xAE496C664AE89A9C(iVar1, &cVar35) == 2)
			{
				Global_4456448.f_232887[iVar80][iVar83] = unk_0x8A83B52A17A321DB(iVar1, &cVar35);
			}
			else
			{
				Global_4456448.f_232887[iVar80][iVar83] = 0;
			}
			iVar83++;
		}
		iVar84 = 0;
		while (iVar84 <= 4)
		{
			iVar85 = 0;
			while (iVar85 <= 3)
			{
				StringCopy(&cVar35, "cpv", 16);
				StringIntConCat(&cVar35, iVar80, 16);
				StringConCat(&cVar35, "i", 16);
				StringIntConCat(&cVar35, iVar84, 16);
				StringConCat(&cVar35, "s", 16);
				StringIntConCat(&cVar35, iVar85, 16);
				if (unk_0xAE496C664AE89A9C(iVar1, &cVar35) == 5)
				{
					Global_4456448.f_229462[iVar80][iVar84][iVar85] = { unk_0xC0F58A082935B6E1(iVar1, &cVar35) };
				}
				else
				{
					Global_4456448.f_229462[iVar80][iVar84][iVar85] = { 0f, 0f, 0f };
				}
				StringCopy(&cVar35, "cph", 16);
				StringIntConCat(&cVar35, iVar80, 16);
				StringConCat(&cVar35, "i", 16);
				StringIntConCat(&cVar35, iVar84, 16);
				StringConCat(&cVar35, "s", 16);
				StringIntConCat(&cVar35, iVar85, 16);
				if (unk_0xAE496C664AE89A9C(iVar1, &cVar35) == 3)
				{
					Global_4456448.f_229727[iVar80][iVar84][iVar85] = unk_0xB37C1AC7E8A75F3C(iVar1, &cVar35);
				}
				else
				{
					Global_4456448.f_229727[iVar80][iVar84][iVar85] = -1f;
				}
				iVar85++;
			}
			iVar84++;
		}
		StringCopy(&cVar41, "tscpos", 8);
		if (iVar80 > 0)
		{
			StringIntConCat(&cVar41, iVar80, 8);
		}
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 5)
		{
			Global_4456448.f_229400[iVar80] = { unk_0xC0F58A082935B6E1(iVar1, &cVar41) };
		}
		else
		{
			Global_4456448.f_229400[iVar80] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar41, "tscrot", 8);
		if (iVar80 > 0)
		{
			StringIntConCat(&cVar41, iVar80, 8);
		}
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 5)
		{
			Global_4456448.f_229413[iVar80] = { unk_0xC0F58A082935B6E1(iVar1, &cVar41) };
		}
		else
		{
			Global_4456448.f_229413[iVar80] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar41, "tspos", 8);
		if (iVar80 > 0)
		{
			StringIntConCat(&cVar41, iVar80, 8);
		}
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 5)
		{
			Global_4456448.f_229426[iVar80] = { unk_0xC0F58A082935B6E1(iVar1, &cVar41) };
		}
		else
		{
			Global_4456448.f_229426[iVar80] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar41, "tscfov", 8);
		if (iVar80 > 0)
		{
			StringIntConCat(&cVar41, iVar80, 8);
		}
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 3)
		{
			Global_4456448.f_229439[iVar80] = unk_0xB37C1AC7E8A75F3C(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_229439[iVar80] = 45f;
		}
		StringCopy(&cVar41, "tshead", 8);
		if (iVar80 > 0)
		{
			StringIntConCat(&cVar41, iVar80, 8);
		}
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 3)
		{
			Global_4456448.f_229444[iVar80] = unk_0xB37C1AC7E8A75F3C(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_229444[iVar80] = 0f;
		}
		iVar80++;
	}
	iVar3 = 0;
	while (iVar3 <= 17)
	{
		StringCopy(&cVar41, "pnid", 8);
		StringIntConCat(&cVar41, iVar3, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 4)
		{
			StringCopy(&(Global_4456448.f_226066[iVar3]), unk_0x6F58F8DD6B54A28D(iVar1, &cVar41), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_226066[iVar3]), "", 64);
		}
		StringCopy(&cVar41, "pnlv", 8);
		StringIntConCat(&cVar41, iVar3, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2)
		{
			Global_4456448.f_226066[iVar3].f_16 = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_226066[iVar3].f_16 = 0;
		}
		StringCopy(&cVar41, "pnvr", 8);
		StringIntConCat(&cVar41, iVar3, 8);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar41) == 2 && !unk_0xEA6BC48857E0AC4C(&(Global_4456448.f_226066[iVar3])))
		{
			Global_4456448.f_226066[iVar3].f_17 = unk_0x8A83B52A17A321DB(iVar1, &cVar41);
		}
		else
		{
			Global_4456448.f_226066[iVar3].f_17 = -1;
		}
		iVar3++;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "cposr") == 3)
	{
		Global_4456448.f_230309 = unk_0xB37C1AC7E8A75F3C(iVar1, "cposr");
	}
	else
	{
		Global_4456448.f_230309 = 60f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "cporv") == 3)
	{
		Global_4456448.f_230312 = unk_0xB37C1AC7E8A75F3C(iVar1, "cporv");
	}
	else
	{
		Global_4456448.f_230312 = -1f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "bmbbp") == 2)
	{
		Global_4456448.f_230298 = unk_0x8A83B52A17A321DB(iVar1, "bmbbp");
	}
	else
	{
		Global_4456448.f_230298 = 2;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "bmber") == 2)
	{
		Global_4456448.f_230299 = unk_0x8A83B52A17A321DB(iVar1, "bmber");
	}
	else
	{
		Global_4456448.f_230299 = 2;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "bmbet") == 2)
	{
		Global_4456448.f_230300 = unk_0x8A83B52A17A321DB(iVar1, "bmbet");
	}
	else
	{
		Global_4456448.f_230300 = 3000;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "bmbsi") == 2)
	{
		Global_4456448.f_230301 = unk_0x8A83B52A17A321DB(iVar1, "bmbsi");
	}
	else
	{
		Global_4456448.f_230301 = 150;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "bmbdi") == 3)
	{
		Global_4456448.f_230302 = unk_0xB37C1AC7E8A75F3C(iVar1, "bmbdi");
	}
	else
	{
		Global_4456448.f_230302 = 3f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "bmbio") == 3)
	{
		Global_4456448.f_230303 = unk_0xB37C1AC7E8A75F3C(iVar1, "bmbio");
	}
	else
	{
		Global_4456448.f_230303 = 1f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "fvjhdt") == 2)
	{
		Global_4456448.f_230304 = unk_0x8A83B52A17A321DB(iVar1, "fvjhdt");
	}
	else
	{
		Global_4456448.f_230304 = 25;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "fvjhmd") == 2)
	{
		Global_4456448.f_230305 = unk_0x8A83B52A17A321DB(iVar1, "fvjhmd");
	}
	else
	{
		Global_4456448.f_230305 = 5;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "fvjfvd") == 2)
	{
		Global_4456448.f_230306 = unk_0x8A83B52A17A321DB(iVar1, "fvjfvd");
	}
	else
	{
		Global_4456448.f_230306 = 5;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "fvjfvc") == 2)
	{
		Global_4456448.f_230307 = unk_0x8A83B52A17A321DB(iVar1, "fvjfvc");
	}
	else
	{
		Global_4456448.f_230307 = 2;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "cpopr") == 3)
	{
		Global_4456448.f_230310 = unk_0xB37C1AC7E8A75F3C(iVar1, "cpopr");
	}
	else
	{
		Global_4456448.f_230310 = 5f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "cpohr") == 3)
	{
		Global_4456448.f_230311 = unk_0xB37C1AC7E8A75F3C(iVar1, "cpohr");
	}
	else
	{
		Global_4456448.f_230311 = 60f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "bevhtd") == 3)
	{
		Global_4456448.f_78076 = unk_0xB37C1AC7E8A75F3C(iVar1, "bevhtd");
	}
	else
	{
		Global_4456448.f_78076 = 0,075f;
	}
	iVar3 = 0;
	while (iVar3 <= 9)
	{
		StringCopy(&cVar35, "fsclv", 16);
		StringIntConCat(&cVar35, iVar3, 16);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar35) == 5)
		{
			Global_4456448.f_78079[iVar3] = { unk_0xC0F58A082935B6E1(iVar1, &cVar35) };
		}
		else
		{
			Global_4456448.f_78079[iVar3] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar35, "fsclr", 16);
		StringIntConCat(&cVar35, iVar3, 16);
		if (unk_0xAE496C664AE89A9C(iVar1, &cVar35) == 5)
		{
			Global_4456448.f_78110[iVar3] = { unk_0xC0F58A082935B6E1(iVar1, &cVar35) };
		}
		else
		{
			Global_4456448.f_78110[iVar3] = { 0f, 0f, 0f };
		}
		iVar3++;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "bevhdd") == 3)
	{
		Global_4456448.f_230311 = unk_0xB37C1AC7E8A75F3C(iVar1, "bevhdd");
	}
	else
	{
		Global_4456448.f_230311 = 0,075f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "ratc0") == 2)
	{
		Global_4456448.f_230313 = unk_0x8A83B52A17A321DB(iVar1, "ratc0");
	}
	else
	{
		Global_4456448.f_230313 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "ratc1") == 2)
	{
		Global_4456448.f_230314 = unk_0x8A83B52A17A321DB(iVar1, "ratc1");
	}
	else
	{
		Global_4456448.f_230314 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "ratc2") == 2)
	{
		Global_4456448.f_230315 = unk_0x8A83B52A17A321DB(iVar1, "ratc2");
	}
	else
	{
		Global_4456448.f_230315 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "ratc3") == 2)
	{
		Global_4456448.f_230316 = unk_0x8A83B52A17A321DB(iVar1, "ratc3");
	}
	else
	{
		Global_4456448.f_230316 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "ratc4") == 2)
	{
		Global_4456448.f_230317 = unk_0x8A83B52A17A321DB(iVar1, "ratc4");
	}
	else
	{
		Global_4456448.f_230317 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "ratc5") == 2)
	{
		Global_4456448.f_230318 = unk_0x8A83B52A17A321DB(iVar1, "ratc5");
	}
	else
	{
		Global_4456448.f_230318 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "ratc6") == 2)
	{
		Global_4456448.f_230319 = unk_0x8A83B52A17A321DB(iVar1, "ratc6");
	}
	else
	{
		Global_4456448.f_230319 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "ratc9") == 2)
	{
		Global_4456448.f_230323 = unk_0x8A83B52A17A321DB(iVar1, "ratc9");
	}
	else
	{
		Global_4456448.f_230323 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "ratc7") == 2)
	{
		Global_4456448.f_230321 = unk_0x8A83B52A17A321DB(iVar1, "ratc7");
	}
	else
	{
		Global_4456448.f_230321 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "ratc8") == 2)
	{
		Global_4456448.f_230322 = unk_0x8A83B52A17A321DB(iVar1, "ratc8");
	}
	else
	{
		Global_4456448.f_230322 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "ratcm") == 3)
	{
		Global_4456448.f_230320 = unk_0xB37C1AC7E8A75F3C(iVar1, "ratcm");
	}
	else
	{
		Global_4456448.f_230320 = -1f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "cdrt") == 3)
	{
		Global_4456448.f_230325 = unk_0xB37C1AC7E8A75F3C(iVar1, "cdrt");
	}
	else
	{
		Global_4456448.f_230325 = -1f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "csttl") == 4)
	{
		StringCopy(&(Global_4456448.f_230326), unk_0x6F58F8DD6B54A28D(iVar1, "csttl"), 16);
	}
	else
	{
		StringCopy(&(Global_4456448.f_230326), "", 16);
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "csstl") == 4)
	{
		StringCopy(&(Global_4456448.f_230330), unk_0x6F58F8DD6B54A28D(iVar1, "csstl"), 16);
	}
	else
	{
		StringCopy(&(Global_4456448.f_230330), "", 16);
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "csttl2") == 4)
	{
		StringCopy(&(Global_4456448.f_230334), unk_0x6F58F8DD6B54A28D(iVar1, "csttl2"), 16);
	}
	else
	{
		StringCopy(&(Global_4456448.f_230334), "", 16);
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "csstl2") == 4)
	{
		StringCopy(&(Global_4456448.f_230338), unk_0x6F58F8DD6B54A28D(iVar1, "csstl2"), 16);
	}
	else
	{
		StringCopy(&(Global_4456448.f_230338), "", 16);
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "csttl3") == 4)
	{
		StringCopy(&(Global_4456448.f_230342), unk_0x6F58F8DD6B54A28D(iVar1, "csttl3"), 16);
	}
	else
	{
		StringCopy(&(Global_4456448.f_230342), "", 16);
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "csstl3") == 4)
	{
		StringCopy(&(Global_4456448.f_230346), unk_0x6F58F8DD6B54A28D(iVar1, "csstl3"), 16);
	}
	else
	{
		StringCopy(&(Global_4456448.f_230346), "", 16);
	}
	func_293();
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "ssdsp") == 5)
	{
		Global_4456448.f_232836 = { unk_0xC0F58A082935B6E1(iVar1, "ssdsp") };
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "ssdsr") == 3)
	{
		Global_4456448.f_232839 = unk_0xB37C1AC7E8A75F3C(iVar1, "ssdsr");
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "ssder") == 3)
	{
		Global_4456448.f_232840 = unk_0xB37C1AC7E8A75F3C(iVar1, "ssder");
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "ssdst") == 2)
	{
		Global_4456448.f_232841 = unk_0x8A83B52A17A321DB(iVar1, "ssdst");
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "ssdtg") == 2)
	{
		Global_4456448.f_232842 = unk_0x8A83B52A17A321DB(iVar1, "ssdtg");
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "vwp0") == 2)
	{
		Global_4456448.f_233058 = unk_0x8A83B52A17A321DB(iVar1, "vwp0");
	}
	else
	{
		Global_4456448.f_233058 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "vwp1") == 2)
	{
		Global_4456448.f_233059 = unk_0x8A83B52A17A321DB(iVar1, "vwp1");
	}
	else
	{
		Global_4456448.f_233059 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "vwp2") == 2)
	{
		Global_4456448.f_233061 = unk_0x8A83B52A17A321DB(iVar1, "vwp2");
	}
	else
	{
		Global_4456448.f_233061 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "vwp3") == 2)
	{
		Global_4456448.f_233062 = unk_0x8A83B52A17A321DB(iVar1, "vwp3");
	}
	else
	{
		Global_4456448.f_233062 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "vwp4") == 2)
	{
		Global_4456448.f_233063 = unk_0x8A83B52A17A321DB(iVar1, "vwp4");
	}
	else
	{
		Global_4456448.f_233063 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "vwp5") == 2)
	{
		Global_4456448.f_233060 = unk_0x8A83B52A17A321DB(iVar1, "vwp5");
	}
	else
	{
		Global_4456448.f_233060 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "vwp15") == 2)
	{
		Global_4456448.f_233065 = unk_0x8A83B52A17A321DB(iVar1, "vwp15");
	}
	else
	{
		Global_4456448.f_233065 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "vwp16") == 2)
	{
		Global_4456448.f_233066 = unk_0x8A83B52A17A321DB(iVar1, "vwp16");
	}
	else
	{
		Global_4456448.f_233066 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "vwpbhd") == 2)
	{
		Global_4456448.f_233064 = unk_0x8A83B52A17A321DB(iVar1, "vwpbhd");
	}
	else
	{
		Global_4456448.f_233064 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "vwprbs") == 2)
	{
		Global_4456448.f_233070 = unk_0x8A83B52A17A321DB(iVar1, "vwprbs");
	}
	else
	{
		Global_4456448.f_233070 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "vwmgfr") == 2)
	{
		Global_4456448.f_233088 = unk_0x8A83B52A17A321DB(iVar1, "vwmgfr");
	}
	else
	{
		Global_4456448.f_233088 = 5;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "vwmgda") == 2)
	{
		Global_4456448.f_233089 = unk_0x8A83B52A17A321DB(iVar1, "vwmgda");
	}
	else
	{
		Global_4456448.f_233089 = 350;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "vwmgnb") == 2)
	{
		Global_4456448.f_233090 = unk_0x8A83B52A17A321DB(iVar1, "vwmgnb");
	}
	else
	{
		Global_4456448.f_233090 = 100;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "crttn") == 2)
	{
		Global_4456448.f_233091 = unk_0x8A83B52A17A321DB(iVar1, "crttn");
	}
	else
	{
		Global_4456448.f_233091 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "smoc") == 2)
	{
		Global_4456448.f_78078 = unk_0x8A83B52A17A321DB(iVar1, "smoc");
	}
	else
	{
		Global_4456448.f_78078 = -1;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "vrsp") == 2)
	{
		Global_4456448.f_233455 = unk_0x8A83B52A17A321DB(iVar1, "vrsp");
	}
	else
	{
		Global_4456448.f_233455 = -1;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "otrds") == 2)
	{
		Global_4456448.f_233444 = unk_0x8A83B52A17A321DB(iVar1, "otrds");
	}
	else
	{
		Global_4456448.f_233444 = -1;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "otsdr") == 2)
	{
		Global_4456448.f_233446 = unk_0x8A83B52A17A321DB(iVar1, "otsdr");
	}
	else
	{
		Global_4456448.f_233446 = -1;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "otrsc") == 2)
	{
		Global_4456448.f_233447 = unk_0x8A83B52A17A321DB(iVar1, "otrsc");
	}
	else
	{
		Global_4456448.f_233447 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "otrpc") == 2)
	{
		Global_4456448.f_233445 = unk_0x8A83B52A17A321DB(iVar1, "otrpc");
	}
	else
	{
		Global_4456448.f_233445 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "mocb1") == 2)
	{
		Global_4456448.f_233450 = unk_0x8A83B52A17A321DB(iVar1, "mocb1");
	}
	else
	{
		Global_4456448.f_233450 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "mocb2") == 2)
	{
		Global_4456448.f_233450.f_1 = unk_0x8A83B52A17A321DB(iVar1, "mocb2");
	}
	else
	{
		Global_4456448.f_233450.f_1 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "mocb3") == 2)
	{
		Global_4456448.f_233450.f_2 = unk_0x8A83B52A17A321DB(iVar1, "mocb3");
	}
	else
	{
		Global_4456448.f_233450.f_2 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "moccc") == 2)
	{
		Global_4456448.f_233450.f_3 = unk_0x8A83B52A17A321DB(iVar1, "moccc");
	}
	else
	{
		Global_4456448.f_233450.f_3 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "mocbs") == 2)
	{
		Global_4456448.f_233450.f_4 = unk_0x8A83B52A17A321DB(iVar1, "mocbs");
	}
	else
	{
		Global_4456448.f_233450.f_4 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "vwprbs") == 2)
	{
		Global_4456448.f_233070 = unk_0x8A83B52A17A321DB(iVar1, "vwprbs");
	}
	else
	{
		Global_4456448.f_233070 = 0;
	}
	Global_4456448.f_233081 = { unk_0xC0F58A082935B6E1(iVar1, "vtwsp") };
	Global_4456448.f_233084 = { unk_0xC0F58A082935B6E1(iVar1, "vtwsr") };
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "tsc3") == 3)
	{
		Global_4456448.f_233067 = unk_0xB37C1AC7E8A75F3C(iVar1, "tsc3");
	}
	else
	{
		Global_4456448.f_233067 = 0f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "tsc4") == 3)
	{
		Global_4456448.f_233068 = unk_0xB37C1AC7E8A75F3C(iVar1, "tsc4");
	}
	else
	{
		Global_4456448.f_233068 = 0f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "csstd") == 2)
	{
		Global_4456448.f_233069 = unk_0x8A83B52A17A321DB(iVar1, "csstd");
	}
	else
	{
		Global_4456448.f_233069 = -1;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "prpccd") == 2)
	{
		Global_4456448.f_233960 = unk_0x8A83B52A17A321DB(iVar1, "prpccd");
	}
	else
	{
		Global_4456448.f_233960 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "spwnptd") == 2)
	{
		Global_4456448.f_233961 = unk_0x8A83B52A17A321DB(iVar1, "spwnptd");
	}
	else
	{
		Global_4456448.f_233961 = 20;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "objsctt") == 2)
	{
		Global_4456448.f_234124 = unk_0x8A83B52A17A321DB(iVar1, "objsctt");
	}
	else
	{
		Global_4456448.f_234124 = 20;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "cctvde") == 2)
	{
		Global_4456448.f_78237 = unk_0x8A83B52A17A321DB(iVar1, "cctvde");
	}
	else
	{
		Global_4456448.f_78237 = 5000;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "cctvag") == 2)
	{
		Global_4456448.f_78238 = unk_0x8A83B52A17A321DB(iVar1, "cctvag");
	}
	else
	{
		Global_4456448.f_78238 = -1;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "spwnptd") == 2)
	{
		Global_4456448.f_233961 = unk_0x8A83B52A17A321DB(iVar1, "spwnptd");
	}
	else
	{
		Global_4456448.f_233961 = 20;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "sba") == 3)
	{
		Global_4456448.f_234007 = unk_0xB37C1AC7E8A75F3C(iVar1, "sba");
	}
	else
	{
		Global_4456448.f_234007 = 0,5f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "sccd") == 2)
	{
		Global_4456448.f_233995 = unk_0x8A83B52A17A321DB(iVar1, "sccd");
	}
	else
	{
		Global_4456448.f_233995 = 500;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "scmsf") == 3)
	{
		Global_4456448.f_234006 = unk_0xB37C1AC7E8A75F3C(iVar1, "scmsf");
	}
	else
	{
		Global_4456448.f_234006 = 0f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "schf") == 3)
	{
		Global_4456448.f_233996 = unk_0xB37C1AC7E8A75F3C(iVar1, "schf");
	}
	else
	{
		Global_4456448.f_233996 = 10f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "scmnhfs") == 3)
	{
		Global_4456448.f_233998 = unk_0xB37C1AC7E8A75F3C(iVar1, "scmnhfs");
	}
	else
	{
		Global_4456448.f_233998 = 1f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "scvf") == 3)
	{
		Global_4456448.f_233997 = unk_0xB37C1AC7E8A75F3C(iVar1, "scvf");
	}
	else
	{
		Global_4456448.f_233997 = 0,5f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "scmnvfs") == 3)
	{
		Global_4456448.f_233999 = unk_0xB37C1AC7E8A75F3C(iVar1, "scmnvfs");
	}
	else
	{
		Global_4456448.f_233999 = 0f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "scmxhf") == 3)
	{
		Global_4456448.f_234000 = unk_0xB37C1AC7E8A75F3C(iVar1, "scmxhf");
	}
	else
	{
		Global_4456448.f_234000 = 25f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "scmnhf") == 3)
	{
		Global_4456448.f_234001 = unk_0xB37C1AC7E8A75F3C(iVar1, "scmnhf");
	}
	else
	{
		Global_4456448.f_234001 = 15f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "scmxvf") == 3)
	{
		Global_4456448.f_234002 = unk_0xB37C1AC7E8A75F3C(iVar1, "scmxvf");
	}
	else
	{
		Global_4456448.f_234002 = 6f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "scmnvf") == 3)
	{
		Global_4456448.f_234003 = unk_0xB37C1AC7E8A75F3C(iVar1, "scmnvf");
	}
	else
	{
		Global_4456448.f_234003 = 4f;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "scd") == 2)
	{
		Global_4456448.f_234004 = unk_0x8A83B52A17A321DB(iVar1, "scd");
	}
	else
	{
		Global_4456448.f_234004 = 10;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "scmind") == 2)
	{
		Global_4456448.f_234005 = unk_0x8A83B52A17A321DB(iVar1, "scmind");
	}
	else
	{
		Global_4456448.f_234005 = 1;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "awpsobm") == 2)
	{
		Global_4456448.f_234123 = unk_0x8A83B52A17A321DB(iVar1, "awpsobm");
	}
	else
	{
		Global_4456448.f_234123 = 0;
	}
	iVar80 = 0;
	while (iVar80 <= 4)
	{
		StringCopy(&cVar35, "rmspco", 16);
		StringIntConCat(&cVar35, iVar80, 16);
		if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, &cVar35) == 5)
		{
			Global_4456448.f_234161[iVar80] = { unk_0xC0F58A082935B6E1(iVar1, &cVar35) };
		}
		else
		{
			Global_4456448.f_234161[iVar80] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar35, "rmspch", 16);
		StringIntConCat(&cVar35, iVar80, 16);
		if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, &cVar35) == 3)
		{
			Global_4456448.f_234177[iVar80] = unk_0xB37C1AC7E8A75F3C(iVar1, &cVar35);
		}
		else
		{
			Global_4456448.f_234177[iVar80] = 0f;
		}
		StringCopy(&cVar35, "rmspcc", 16);
		StringIntConCat(&cVar35, iVar80, 16);
		if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, &cVar35) == 5)
		{
			Global_4456448.f_234183[iVar80] = { unk_0xC0F58A082935B6E1(iVar1, &cVar35) };
		}
		else
		{
			Global_4456448.f_234183[iVar80] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar35, "rmspcr", 16);
		StringIntConCat(&cVar35, iVar80, 16);
		if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, &cVar35) == 3)
		{
			Global_4456448.f_234199[iVar80] = unk_0xB37C1AC7E8A75F3C(iVar1, &cVar35);
		}
		else
		{
			Global_4456448.f_234199[iVar80] = 0f;
		}
		iVar80++;
	}
	iVar3 = 0;
	while (iVar3 <= 1)
	{
		StringCopy(&cVar35, "cgsd", 16);
		StringIntConCat(&cVar35, iVar3, 16);
		StringConCat(&cVar35, "a", 16);
		if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, &cVar35) == 3)
		{
			Global_4456448.f_238797[iVar3] = unk_0xB37C1AC7E8A75F3C(iVar1, &cVar35);
		}
		else if (iVar3 == 0)
		{
			Global_4456448.f_238797[iVar3] = 1,25f;
		}
		else if (iVar3 == 1)
		{
			Global_4456448.f_238797[iVar3] = 1f;
		}
		iVar3++;
	}
	StringCopy(&cVar35, "cgslt", 16);
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, &cVar35) == 2)
	{
		Global_4456448.f_238800 = unk_0x8A83B52A17A321DB(iVar1, &cVar35);
	}
	else
	{
		Global_4456448.f_238800 = 10;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "cgmils") == 2)
	{
		Global_4456448.f_238801 = unk_0x8A83B52A17A321DB(iVar1, "cgmils");
	}
	else
	{
		Global_4456448.f_238801 = 6000;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "cgmals") == 2)
	{
		Global_4456448.f_238802 = unk_0x8A83B52A17A321DB(iVar1, "cgmals");
	}
	else
	{
		Global_4456448.f_238802 = 10000;
	}
	StringCopy(&cVar35, "pnEMPd", 16);
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, &cVar35) == 2)
	{
		Global_4456448.f_238794 = unk_0x8A83B52A17A321DB(iVar1, &cVar35);
	}
	else
	{
		Global_4456448.f_238794 = 60000;
	}
	StringCopy(&cVar35, "pnEMPp", 16);
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, &cVar35) == 2)
	{
		Global_4456448.f_238794.f_1 = unk_0x8A83B52A17A321DB(iVar1, &cVar35);
	}
	else
	{
		Global_4456448.f_238794.f_1 = 35;
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		StringCopy(&cVar35, "awtt", 16);
		StringIntConCat(&cVar35, iVar3, 16);
		if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, &cVar35) == 2)
		{
			Global_4456448.f_234125[iVar3] = unk_0x8A83B52A17A321DB(iVar1, &cVar35);
		}
		else
		{
			Global_4456448.f_234125[iVar3] = 6;
		}
		iVar3++;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "awtrc") == 2)
	{
		Global_4456448.f_234158 = unk_0x8A83B52A17A321DB(iVar1, "awtrc");
	}
	else
	{
		Global_4456448.f_234158 = 0;
	}
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "vwfdt") == 3)
	{
		Global_4456448.f_234213 = unk_0xB37C1AC7E8A75F3C(iVar1, "vwfdt");
	}
	else
	{
		Global_4456448.f_234213 = 2,5f;
	}
	func_292(iVar1);
	if (iVar1 != 0 && unk_0xAE496C664AE89A9C(iVar1, "pvsp") == 2)
	{
		Global_4456448.f_238803 = unk_0x8A83B52A17A321DB(iVar1, "pvsp");
	}
	else
	{
		Global_4456448.f_238803 = 0;
	}
	func_249("runAs", &(Global_4456448.f_228), &iVar1, 0, -2340845);
	func_249("ldbS", &(Global_4456448.f_238804), &iVar1, 0, -2340845);
}

void func_292(int iParam0)
{
	if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, "carbar1") == 3)
	{
		Global_4456448.f_238416 = unk_0xB37C1AC7E8A75F3C(iParam0, "carbar1");
	}
	if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, "carbar2") == 3)
	{
		Global_4456448.f_238416.f_1 = unk_0xB37C1AC7E8A75F3C(iParam0, "carbar2");
	}
	if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, "carbar3") == 3)
	{
		Global_4456448.f_238416.f_2 = unk_0xB37C1AC7E8A75F3C(iParam0, "carbar3");
	}
	if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, "carbar4") == 3)
	{
		Global_4456448.f_238416.f_3 = unk_0xB37C1AC7E8A75F3C(iParam0, "carbar4");
	}
	if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, "carbar5") == 3)
	{
		Global_4456448.f_238416.f_4 = unk_0xB37C1AC7E8A75F3C(iParam0, "carbar5");
	}
	if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, "carbar6") == 3)
	{
		Global_4456448.f_238416.f_5 = unk_0xB37C1AC7E8A75F3C(iParam0, "carbar6");
	}
	if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, "carbar7") == 3)
	{
		Global_4456448.f_238416.f_6 = unk_0xB37C1AC7E8A75F3C(iParam0, "carbar7");
	}
	if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, "carbar8") == 3)
	{
		Global_4456448.f_238416.f_7 = unk_0xB37C1AC7E8A75F3C(iParam0, "carbar8");
	}
	if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, "carbar9") == 3)
	{
		Global_4456448.f_238416.f_8 = unk_0xB37C1AC7E8A75F3C(iParam0, "carbar9");
	}
	StringCopy(&cVar1, "", 16);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar1, "carbar10", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, &cVar1) == 2)
		{
			Global_4456448.f_238416.f_9[iVar0] = unk_0x8A83B52A17A321DB(iParam0, &cVar1);
		}
		iVar0++;
	}
}

void func_293()
{
	Global_4456448.f_232836 = { 0f, 0f, 0f };
	Global_4456448.f_232839 = 30f;
	Global_4456448.f_232840 = 5f;
	Global_4456448.f_232841 = 30000;
	Global_4456448.f_232842 = 15000;
}

void func_294(int iParam0)
{
	StringCopy(&cVar0, "MCV_BS1", 16);
	if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, &cVar0) == 2)
	{
		Global_4456448.f_238430.f_1 = unk_0x8A83B52A17A321DB(iParam0, &cVar0);
	}
	StringCopy(&cVar0, "MCV_ESET", 16);
	if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, &cVar0) == 2)
	{
		Global_4456448.f_238430 = unk_0x8A83B52A17A321DB(iParam0, &cVar0);
	}
	iVar4 = 0;
	while (iVar4 <= 2)
	{
		StringCopy(&cVar0, "MCV_EHP", 16);
		StringIntConCat(&cVar0, iVar4, 16);
		if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, &cVar0) == 2)
		{
			Global_4456448.f_238430.f_2[iVar4] = unk_0x8A83B52A17A321DB(iParam0, &cVar0);
		}
		else
		{
			Global_4456448.f_238430.f_2[iVar4] = 0;
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 <= 5)
	{
		StringCopy(&cVar0, "MCV_EII", 16);
		StringIntConCat(&cVar0, iVar4, 16);
		if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, &cVar0) == 2)
		{
			Global_4456448.f_238430.f_6[iVar4] = unk_0x8A83B52A17A321DB(iParam0, &cVar0);
		}
		else
		{
			Global_4456448.f_238430.f_6[iVar4] = -1;
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 <= 15)
	{
		StringCopy(&cVar0, "MCV_EMN", 16);
		StringIntConCat(&cVar0, iVar4, 16);
		if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, &cVar0) == 2)
		{
			Global_4456448.f_238430.f_13[iVar4] = unk_0x8A83B52A17A321DB(iParam0, &cVar0);
		}
		else
		{
			Global_4456448.f_238430.f_13[iVar4] = 0;
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 <= 6)
	{
		iVar5 = 0;
		while (iVar5 <= 4)
		{
			StringCopy(&cVar0, "MCV_ESPW", 16);
			StringIntConCat(&cVar0, iVar4, 16);
			StringIntConCat(&cVar0, iVar5, 16);
			if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, &cVar0) == 2)
			{
				Global_4456448.f_238430.f_30[iVar4][iVar5] = unk_0x8A83B52A17A321DB(iParam0, &cVar0);
			}
			else
			{
				Global_4456448.f_238430.f_30[iVar4][iVar5] = -1;
			}
			iVar5++;
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		StringCopy(&cVar0, "MCV_TTE", 16);
		StringIntConCat(&cVar0, iVar4, 16);
		if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, &cVar0) == 2)
		{
			Global_4456448.f_238430.f_73[iVar4] = unk_0x8A83B52A17A321DB(iParam0, &cVar0);
		}
		else
		{
			Global_4456448.f_238430.f_73[iVar4] = 0;
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		StringCopy(&cVar0, "MCV_TRF", 16);
		StringIntConCat(&cVar0, iVar4, 16);
		if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, &cVar0) == 2)
		{
			Global_4456448.f_238430.f_78[iVar4] = unk_0x8A83B52A17A321DB(iParam0, &cVar0);
		}
		else
		{
			Global_4456448.f_238430.f_78[iVar4] = -1;
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		StringCopy(&cVar0, "MCV_TRT", 16);
		StringIntConCat(&cVar0, iVar4, 16);
		if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, &cVar0) == 2)
		{
			Global_4456448.f_238430.f_83[iVar4] = unk_0x8A83B52A17A321DB(iParam0, &cVar0);
		}
		else
		{
			Global_4456448.f_238430.f_83[iVar4] = -1;
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		StringCopy(&cVar0, "MCV_TZN", 16);
		StringIntConCat(&cVar0, iVar4, 16);
		if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, &cVar0) == 2)
		{
			Global_4456448.f_238430.f_88[iVar4] = unk_0x8A83B52A17A321DB(iParam0, &cVar0);
		}
		else
		{
			Global_4456448.f_238430.f_88[iVar4] = -1;
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		iVar5 = 0;
		while (iVar5 <= 4)
		{
			StringCopy(&cVar0, "MCV_TMS", 16);
			StringIntConCat(&cVar0, iVar4, 16);
			StringIntConCat(&cVar0, iVar5, 16);
			if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, &cVar0) == 2)
			{
				Global_4456448.f_238430.f_93[iVar4][iVar5] = unk_0x8A83B52A17A321DB(iParam0, &cVar0);
			}
			else
			{
				Global_4456448.f_238430.f_93[iVar4][iVar5] = 0;
			}
			iVar5++;
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		StringCopy(&cVar0, "MCV_OMS", 16);
		StringIntConCat(&cVar0, iVar4, 16);
		if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, &cVar0) == 2)
		{
			Global_4456448.f_238430.f_118[iVar4] = unk_0x8A83B52A17A321DB(iParam0, &cVar0);
		}
		else
		{
			Global_4456448.f_238430.f_118[iVar4] = 0;
		}
		StringCopy(&cVar0, "MCV_OMT", 16);
		StringIntConCat(&cVar0, iVar4, 16);
		if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, &cVar0) == 2)
		{
			Global_4456448.f_238430.f_118[iVar4].f_1 = unk_0x8A83B52A17A321DB(iParam0, &cVar0);
		}
		else
		{
			Global_4456448.f_238430.f_118[iVar4].f_1 = -1;
		}
		StringCopy(&cVar0, "MCV_OMST", 16);
		StringIntConCat(&cVar0, iVar4, 16);
		if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, &cVar0) == 2)
		{
			Global_4456448.f_238430.f_118[iVar4].f_2 = unk_0x8A83B52A17A321DB(iParam0, &cVar0);
		}
		else
		{
			Global_4456448.f_238430.f_118[iVar4].f_2 = -1;
		}
		iVar4++;
	}
	StringCopy(&cVar0, "MCV_JTE", 16);
	if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, &cVar0) == 2)
	{
		Global_4456448.f_238430.f_131 = unk_0x8A83B52A17A321DB(iParam0, &cVar0);
	}
	iVar4 = 0;
	while (iVar4 <= 2)
	{
		iVar5 = 0;
		while (iVar5 <= 3)
		{
			StringCopy(&cVar0, "MCV_JTP", 16);
			StringIntConCat(&cVar0, iVar4, 16);
			StringIntConCat(&cVar0, iVar5, 16);
			if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, &cVar0) == 2)
			{
				Global_4456448.f_238430.f_132[iVar4][iVar5] = unk_0x8A83B52A17A321DB(iParam0, &cVar0);
			}
			else
			{
				Global_4456448.f_238430.f_132[iVar4][iVar5] = 0;
			}
			StringCopy(&cVar0, "MCV_JTF", 16);
			StringIntConCat(&cVar0, iVar4, 16);
			StringIntConCat(&cVar0, iVar5, 16);
			if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, &cVar0) == 2)
			{
				Global_4456448.f_238430.f_148[iVar4][iVar5] = unk_0x8A83B52A17A321DB(iParam0, &cVar0);
			}
			else
			{
				Global_4456448.f_238430.f_148[iVar4][iVar5] = 0;
			}
			iVar5++;
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 <= 4)
	{
		StringCopy(&cVar0, "MCV_ECO", 16);
		StringIntConCat(&cVar0, iVar4, 16);
		if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, &cVar0) == 2)
		{
			Global_4456448.f_238430.f_164[iVar4] = unk_0x8A83B52A17A321DB(iParam0, &cVar0);
		}
		else
		{
			Global_4456448.f_238430.f_164[iVar4] = 0;
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 <= 11)
	{
		StringCopy(&cVar0, "MCV_POT", 16);
		StringIntConCat(&cVar0, iVar4, 16);
		if (iParam0 != 0 && unk_0xAE496C664AE89A9C(iParam0, &cVar0) == 4)
		{
			StringCopy(&(Global_4456448.f_238430.f_170[iVar4]), unk_0x6F58F8DD6B54A28D(iParam0, &cVar0), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_238430.f_170[iVar4]), "", 64);
		}
		iVar4++;
	}
}

void func_295(int iParam0)
{
	func_249("plvrscn", &uVar1, iParam0, 0, -2340845);
	Global_4456448.f_238807 = uVar1;
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		StringCopy(&Var2, "plvIn", 32);
		StringIntConCat(&Var2, iVar0, 32);
		func_249(&Var2, &(Global_4456448.f_238807.f_1[iVar0]), iParam0, 0, -2340845);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		StringCopy(&Var2, "plvFl", 32);
		StringIntConCat(&Var2, iVar0, 32);
		func_247(&Var2, &(Global_4456448.f_238807.f_52[iVar0]), iParam0, 0f, -904994889);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		StringCopy(&Var2, "plvVe", 32);
		StringIntConCat(&Var2, iVar0, 32);
		func_296(&Var2, &(Global_4456448.f_238807.f_103[iVar0]), iParam0, 0f, 0f, 0f, 0f, 0f, 0f);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		StringCopy(&Var2, "plvtl", 32);
		StringIntConCat(&Var2, iVar0, 32);
		StringCopy(&(Global_4456448.f_238807.f_134[iVar0]), func_320(&Var2, iParam0, "", ""), 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		StringCopy(&Var2, "altvg", 32);
		StringIntConCat(&Var2, iVar0, 32);
		func_249(&Var2, &(Global_4456448.f_238805[iVar0]), iParam0, 0, -2340845);
		iVar0++;
	}
}

void func_296(char* sParam0, var uParam1, int iParam2, vector3 vParam3, vector3 vParam6)
{
	if (*iParam2 == 0)
	{
		return;
	}
	if (unk_0xAE496C664AE89A9C(*iParam2, sParam0) == 5)
	{
		*uParam1 = { unk_0xC0F58A082935B6E1(*iParam2, sParam0) };
	}
	else if (func_273())
	{
		if (!func_127(vParam6))
		{
			*uParam1 = { vParam6 };
		}
	}
	else
	{
		*uParam1 = { vParam3 };
	}
}

int func_297(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = unk_0x117658E336116132(iVar0);
		if ((unk_0x40B8C182D63932FC(iVar5) && unk_0xFB75B0F82CA525F6(iVar5)) && iVar5 != unk_0xD803B885F5E47A62())
		{
			iVar2 = iVar5;
			if ((!func_298(iVar5) && Global_1590535[iVar2].f_211 != 8) && !unk_0xEAE0D21A50E6C7F4(Global_1590535[iVar2].f_39.f_18, 14))
			{
				if (Global_1590535[iVar2].f_99.f_28 != -1)
				{
					unk_0x5D96D8530B3D0904(&iVar1, Global_1590535[iVar2].f_99.f_28);
					if (Global_1590535[iVar2].f_99.f_28 >= iParam0 && iVar2 < unk_0xD803B885F5E47A62())
					{
						bVar4 = true;
					}
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iVar1, iVar0))
		{
			if (bVar4)
			{
				bVar4 = false;
			}
			else
			{
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_298(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_99.f_32, 5);
}

var func_299()
{
	return Global_1653538.f_3;
}

int func_300()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_301();
	}
	return func_134(Global_4456448.f_194990);
}

var func_301()
{
	return Global_2450632.f_17;
}

int func_302()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_304();
	}
	return func_303(Global_4456448.f_194990);
}

int func_303(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4990[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_304()
{
	return Global_2450632.f_15;
}

int func_305()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar0);
		if ((((unk_0x40B8C182D63932FC(iVar2) && unk_0xFB75B0F82CA525F6(iVar2)) && !func_298(iVar2)) && Global_1590535[iVar2].f_211 != 8) && !unk_0xEAE0D21A50E6C7F4(Global_1590535[iVar2].f_39.f_18, 14))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_306()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_569.f_1, 0);
}

struct<16> func_307()
{
	StringCopy(&Var0, unk_0x19C9F30A7697B43C("FMMC_CH_DN"), 64);
	if (Global_1696399 == 1)
	{
		StringCopy(&Var0, unk_0x19C9F30A7697B43C("FMMC_CH_SS"), 64);
	}
	else if (Global_1696399 == 2)
	{
		StringCopy(&Var0, unk_0x19C9F30A7697B43C("FMMC_CH_BC"), 64);
	}
	else if (Global_1696399 == 3)
	{
		StringCopy(&Var0, unk_0x19C9F30A7697B43C("FMMC_CH_AG"), 64);
	}
	return Var0;
}

int func_308()
{
	if (unk_0xA14BB9332558B949())
	{
		if ((func_313(Global_4456448.f_194990) || func_312(Global_4456448.f_194990)) || func_309(Global_4456448.f_194990))
		{
			return 1;
		}
	}
	return 0;
}

bool func_309(int iParam0)
{
	return func_310(iParam0, 3);
}

bool func_310(int iParam0, int iParam1)
{
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_262145.f_5798[iVar0] == iParam0)
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	return func_311(iVar1) == iParam1;
}

int func_311(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			return 1;
		
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			return 2;
		
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
			return 3;
		
		default:
	}
	return 0;
}

bool func_312(int iParam0)
{
	return func_310(iParam0, 2);
}

bool func_313(int iParam0)
{
	return func_310(iParam0, 1);
}

bool func_314()
{
	return Global_1312854;
}

char* func_315()
{
	return unk_0x19C9F30A7697B43C("CREATOR_NO_T");
}

bool func_316()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_142, 0);
}

int func_317(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 13;
		
		case 1:
			return 13;
		
		case 3:
			return 6;
		
		case 2:
			return 2;
		
		case 4:
			return 12;
		
		case 5:
			return 52;
		
		default:
	}
	return 0;
}

void func_318(int iParam0, int iParam1)
{
	if (*iParam0 == 0)
	{
		return;
	}
	Var0.f_16 = -1;
	Global_4456448.f_238365[iParam1] = { Var0 };
	StringCopy(&cVar24, "MYmi", 16);
	if (iParam1 > 0)
	{
		StringIntConCat(&cVar24, iParam1, 16);
	}
	if (unk_0xAE496C664AE89A9C(*iParam0, &cVar24) == 2)
	{
		Global_4456448.f_238365[iParam1].f_16 = unk_0x8A83B52A17A321DB(*iParam0, &cVar24);
	}
	StringCopy(&cVar24, "MYbs", 16);
	if (iParam1 > 0)
	{
		StringIntConCat(&cVar24, iParam1, 16);
	}
	if (unk_0xAE496C664AE89A9C(*iParam0, &cVar24) == 2)
	{
		Global_4456448.f_238365[iParam1].f_17 = unk_0x8A83B52A17A321DB(*iParam0, &cVar24);
	}
	StringCopy(&cVar24, "MYyn", 16);
	if (iParam1 > 0)
	{
		StringIntConCat(&cVar24, iParam1, 16);
	}
	if (unk_0xAE496C664AE89A9C(*iParam0, &cVar24) == 4)
	{
		StringCopy(&(Global_4456448.f_238365[iParam1]), unk_0x6F58F8DD6B54A28D(*iParam0, &cVar24), 64);
	}
	StringCopy(&cVar24, "MYai", 16);
	if (iParam1 > 0)
	{
		StringIntConCat(&cVar24, iParam1, 16);
	}
	if (unk_0xAE496C664AE89A9C(*iParam0, &cVar24) == 2)
	{
		Global_4456448.f_238365[iParam1].f_18 = unk_0x8A83B52A17A321DB(*iParam0, &cVar24);
	}
	StringCopy(&cVar24, "MYpi", 16);
	if (iParam1 > 0)
	{
		StringIntConCat(&cVar24, iParam1, 16);
	}
	if (unk_0xAE496C664AE89A9C(*iParam0, &cVar24) == 2)
	{
		Global_4456448.f_238365[iParam1].f_19 = unk_0x8A83B52A17A321DB(*iParam0, &cVar24);
	}
	StringCopy(&cVar24, "MYci", 16);
	if (iParam1 > 0)
	{
		StringIntConCat(&cVar24, iParam1, 16);
	}
	if (unk_0xAE496C664AE89A9C(*iParam0, &cVar24) == 2)
	{
		Global_4456448.f_238365[iParam1].f_20 = unk_0x8A83B52A17A321DB(*iParam0, &cVar24);
	}
	StringCopy(&cVar24, "MYli", 16);
	if (iParam1 > 0)
	{
		StringIntConCat(&cVar24, iParam1, 16);
	}
	if (unk_0xAE496C664AE89A9C(*iParam0, &cVar24) == 2)
	{
		Global_4456448.f_238365[iParam1].f_21 = unk_0x8A83B52A17A321DB(*iParam0, &cVar24);
	}
	StringCopy(&cVar24, "MYfi", 16);
	if (iParam1 > 0)
	{
		StringIntConCat(&cVar24, iParam1, 16);
	}
	if (unk_0xAE496C664AE89A9C(*iParam0, &cVar24) == 2)
	{
		Global_4456448.f_238365[iParam1].f_22 = unk_0x8A83B52A17A321DB(*iParam0, &cVar24);
	}
	StringCopy(&cVar24, "MYfl", 16);
	if (iParam1 > 0)
	{
		StringIntConCat(&cVar24, iParam1, 16);
	}
	if (unk_0xAE496C664AE89A9C(*iParam0, &cVar24) == 2)
	{
		Global_4456448.f_238365[iParam1].f_23 = unk_0x8A83B52A17A321DB(*iParam0, &cVar24);
	}
}

void func_319(int iParam0)
{
	if (*iParam0 == 0)
	{
		return;
	}
	Var0.f_2 = 5;
	Var0.f_2.f_1.f_1 = -1;
	Var0.f_2.f_1.f_13 = 1092616192;
	Var0.f_2.f_1.f_14 = 1092616192;
	Var0.f_2.f_1.f_15 = 1101004800;
	Var0.f_2.f_1.f_16 = 1077936128;
	Var0.f_2.f_1.f_17 = 1119092736;
	Var0.f_2.f_1.f_18 = 1077936128;
	Var0.f_2.f_1.f_19 = 1065353216;
	Var0.f_2.f_1.f_20.f_1 = -1;
	Var0.f_2.f_1.f_20.f_13 = 1092616192;
	Var0.f_2.f_1.f_20.f_14 = 1092616192;
	Var0.f_2.f_1.f_20.f_15 = 1101004800;
	Var0.f_2.f_1.f_20.f_16 = 1077936128;
	Var0.f_2.f_1.f_20.f_17 = 1119092736;
	Var0.f_2.f_1.f_20.f_18 = 1077936128;
	Var0.f_2.f_1.f_20.f_19 = 1065353216;
	Var0.f_2.f_1.f_20.f_20.f_1 = -1;
	Var0.f_2.f_1.f_20.f_20.f_13 = 1092616192;
	Var0.f_2.f_1.f_20.f_20.f_14 = 1092616192;
	Var0.f_2.f_1.f_20.f_20.f_15 = 1101004800;
	Var0.f_2.f_1.f_20.f_20.f_16 = 1077936128;
	Var0.f_2.f_1.f_20.f_20.f_17 = 1119092736;
	Var0.f_2.f_1.f_20.f_20.f_18 = 1077936128;
	Var0.f_2.f_1.f_20.f_20.f_19 = 1065353216;
	Var0.f_2.f_1.f_20.f_20.f_20.f_1 = -1;
	Var0.f_2.f_1.f_20.f_20.f_20.f_13 = 1092616192;
	Var0.f_2.f_1.f_20.f_20.f_20.f_14 = 1092616192;
	Var0.f_2.f_1.f_20.f_20.f_20.f_15 = 1101004800;
	Var0.f_2.f_1.f_20.f_20.f_20.f_16 = 1077936128;
	Var0.f_2.f_1.f_20.f_20.f_20.f_17 = 1119092736;
	Var0.f_2.f_1.f_20.f_20.f_20.f_18 = 1077936128;
	Var0.f_2.f_1.f_20.f_20.f_20.f_19 = 1065353216;
	Var0.f_2.f_1.f_20.f_20.f_20.f_20.f_1 = -1;
	Var0.f_2.f_1.f_20.f_20.f_20.f_20.f_13 = 1092616192;
	Var0.f_2.f_1.f_20.f_20.f_20.f_20.f_14 = 1092616192;
	Var0.f_2.f_1.f_20.f_20.f_20.f_20.f_15 = 1101004800;
	Var0.f_2.f_1.f_20.f_20.f_20.f_20.f_16 = 1077936128;
	Var0.f_2.f_1.f_20.f_20.f_20.f_20.f_17 = 1119092736;
	Var0.f_2.f_1.f_20.f_20.f_20.f_20.f_18 = 1077936128;
	Var0.f_2.f_1.f_20.f_20.f_20.f_20.f_19 = 1065353216;
	Var0.f_103.f_5 = 1117782016;
	Var0.f_103.f_6 = 2;
	Var0.f_103.f_13 = 1112014848;
	Global_4456448.f_237025 = { Var0 };
	if (unk_0xAE496C664AE89A9C(*iParam0, "KhBS") == 2)
	{
		Global_4456448.f_237025 = unk_0x8A83B52A17A321DB(*iParam0, "KhBS");
	}
	if (unk_0xAE496C664AE89A9C(*iParam0, "KhNha") == 2)
	{
		Global_4456448.f_237025.f_1 = unk_0x8A83B52A17A321DB(*iParam0, "KhNha");
	}
	iVar117 = 0;
	while (iVar117 <= 4)
	{
		StringCopy(&cVar118, "KhAC", 16);
		StringIntConCat(&cVar118, iVar117, 16);
		if (unk_0xAE496C664AE89A9C(*iParam0, &cVar118) == 5)
		{
			Global_4456448.f_237025.f_2[iVar117].f_4 = { unk_0xC0F58A082935B6E1(*iParam0, &cVar118) };
		}
		StringCopy(&cVar118, "KhAD", 16);
		StringIntConCat(&cVar118, iVar117, 16);
		if (unk_0xAE496C664AE89A9C(*iParam0, &cVar118) == 5)
		{
			Global_4456448.f_237025.f_2[iVar117].f_7 = { unk_0xC0F58A082935B6E1(*iParam0, &cVar118) };
		}
		StringCopy(&cVar118, "KhAU", 16);
		StringIntConCat(&cVar118, iVar117, 16);
		if (unk_0xAE496C664AE89A9C(*iParam0, &cVar118) == 5)
		{
			Global_4456448.f_237025.f_2[iVar117].f_10 = { unk_0xC0F58A082935B6E1(*iParam0, &cVar118) };
		}
		else
		{
			Global_4456448.f_237025.f_2[iVar117].f_10 = { 0f, 0f, 1f };
		}
		StringCopy(&cVar118, "KhAR", 16);
		StringIntConCat(&cVar118, iVar117, 16);
		if (unk_0xAE496C664AE89A9C(*iParam0, &cVar118) == 3)
		{
			Global_4456448.f_237025.f_2[iVar117].f_13 = unk_0xB37C1AC7E8A75F3C(*iParam0, &cVar118);
		}
		StringCopy(&cVar118, "KhTy", 16);
		StringIntConCat(&cVar118, iVar117, 16);
		if (unk_0xAE496C664AE89A9C(*iParam0, &cVar118) == 2)
		{
			Global_4456448.f_237025.f_2[iVar117] = unk_0x8A83B52A17A321DB(*iParam0, &cVar118);
		}
		StringCopy(&cVar118, "KhEn", 16);
		StringIntConCat(&cVar118, iVar117, 16);
		if (unk_0xAE496C664AE89A9C(*iParam0, &cVar118) == 2)
		{
			Global_4456448.f_237025.f_2[iVar117].f_1 = unk_0x8A83B52A17A321DB(*iParam0, &cVar118);
		}
		StringCopy(&cVar118, "KhBS", 16);
		StringIntConCat(&cVar118, iVar117, 16);
		if (unk_0xAE496C664AE89A9C(*iParam0, &cVar118) == 2)
		{
			Global_4456448.f_237025.f_2[iVar117].f_2 = unk_0x8A83B52A17A321DB(*iParam0, &cVar118);
		}
		StringCopy(&cVar118, "KhCt", 16);
		StringIntConCat(&cVar118, iVar117, 16);
		if (unk_0xAE496C664AE89A9C(*iParam0, &cVar118) == 3)
		{
			Global_4456448.f_237025.f_2[iVar117].f_18 = unk_0xB37C1AC7E8A75F3C(*iParam0, &cVar118);
		}
		StringCopy(&cVar118, "KhPt", 16);
		StringIntConCat(&cVar118, iVar117, 16);
		if (unk_0xAE496C664AE89A9C(*iParam0, &cVar118) == 3)
		{
			Global_4456448.f_237025.f_2[iVar117].f_19 = unk_0xB37C1AC7E8A75F3C(*iParam0, &cVar118);
		}
		StringCopy(&cVar118, "KhWd", 16);
		StringIntConCat(&cVar118, iVar117, 16);
		if (unk_0xAE496C664AE89A9C(*iParam0, &cVar118) == 3)
		{
			Global_4456448.f_237025.f_2[iVar117].f_14 = unk_0xB37C1AC7E8A75F3C(*iParam0, &cVar118);
		}
		StringCopy(&cVar118, "KhHe", 16);
		StringIntConCat(&cVar118, iVar117, 16);
		if (unk_0xAE496C664AE89A9C(*iParam0, &cVar118) == 3)
		{
			Global_4456448.f_237025.f_2[iVar117].f_16 = unk_0xB37C1AC7E8A75F3C(*iParam0, &cVar118);
		}
		StringCopy(&cVar118, "KhHd", 16);
		StringIntConCat(&cVar118, iVar117, 16);
		if (unk_0xAE496C664AE89A9C(*iParam0, &cVar118) == 3)
		{
			Global_4456448.f_237025.f_2[iVar117].f_17 = unk_0xB37C1AC7E8A75F3C(*iParam0, &cVar118);
		}
		StringCopy(&cVar118, "KhLn", 16);
		StringIntConCat(&cVar118, iVar117, 16);
		if (unk_0xAE496C664AE89A9C(*iParam0, &cVar118) == 3)
		{
			Global_4456448.f_237025.f_2[iVar117].f_15 = unk_0xB37C1AC7E8A75F3C(*iParam0, &cVar118);
		}
		StringCopy(&cVar118, "KhMnP", 16);
		StringIntConCat(&cVar118, iVar117, 16);
		if (unk_0xAE496C664AE89A9C(*iParam0, &cVar118) == 2)
		{
			Global_4456448.f_237025.f_2[iVar117].f_3 = unk_0x8A83B52A17A321DB(*iParam0, &cVar118);
		}
		iVar117++;
	}
	if (unk_0xAE496C664AE89A9C(*iParam0, "KhBoSh") == 2)
	{
		Global_4456448.f_237025.f_103 = unk_0x8A83B52A17A321DB(*iParam0, "KhBoSh");
	}
	if (unk_0xAE496C664AE89A9C(*iParam0, "KhBoS") == 2)
	{
		Global_4456448.f_237025.f_103.f_1 = unk_0x8A83B52A17A321DB(*iParam0, "KhBoS");
	}
	if (unk_0xAE496C664AE89A9C(*iParam0, "KhBoC") == 5)
	{
		Global_4456448.f_237025.f_103.f_2 = { unk_0xC0F58A082935B6E1(*iParam0, "KhBoC") };
	}
	if (unk_0xAE496C664AE89A9C(*iParam0, "KhBoR") == 3)
	{
		Global_4456448.f_237025.f_103.f_5 = unk_0xB37C1AC7E8A75F3C(*iParam0, "KhBoR");
	}
	if (unk_0xAE496C664AE89A9C(*iParam0, "KhBoP0") == 5)
	{
		Global_4456448.f_237025.f_103.f_6[0] = { unk_0xC0F58A082935B6E1(*iParam0, "KhBoP0") };
	}
	if (unk_0xAE496C664AE89A9C(*iParam0, "KhBoP1") == 5)
	{
		Global_4456448.f_237025.f_103.f_6[1] = { unk_0xC0F58A082935B6E1(*iParam0, "KhBoP1") };
	}
	if (unk_0xAE496C664AE89A9C(*iParam0, "KhBoH") == 3)
	{
		Global_4456448.f_237025.f_103.f_13 = unk_0xB37C1AC7E8A75F3C(*iParam0, "KhBoH");
	}
}

char* func_320(char* sParam0, int iParam1, char* sParam2, char* sParam3)
{
	if (*iParam1 == 0)
	{
		return "";
	}
	sVar0 = "";
	if (unk_0xAE496C664AE89A9C(*iParam1, sParam0) == 4)
	{
		sVar0 = unk_0x6F58F8DD6B54A28D(*iParam1, sParam0);
	}
	else if (func_273())
	{
		if (!unk_0x7F8A39872A07D2CE(sParam3, "DEFAULT"))
		{
			sVar0 = sParam3;
		}
	}
	else
	{
		sVar0 = sParam2;
	}
	return sVar0;
}

void func_321(int iParam0)
{
	uVar0 = 1;
	iVar2 = 0;
	while (iVar2 <= 7)
	{
		StringCopy(&cVar3, "w", 8);
		StringIntConCat(&cVar3, iVar2, 8);
		StringConCat(&cVar3, "A", 8);
		if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, &cVar3) == 5)
		{
			Global_4456448.f_237143[iVar2] = { unk_0xC0F58A082935B6E1(*iParam0, &cVar3) };
		}
		else
		{
			Global_4456448.f_237143[iVar2] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar3, "w", 8);
		StringIntConCat(&cVar3, iVar2, 8);
		StringConCat(&cVar3, "B", 8);
		if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, &cVar3) == 5)
		{
			Global_4456448.f_237143[iVar2].f_18 = { unk_0xC0F58A082935B6E1(*iParam0, &cVar3) };
		}
		else
		{
			Global_4456448.f_237143[iVar2].f_18 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar3, "w", 8);
		StringIntConCat(&cVar3, iVar2, 8);
		StringConCat(&cVar3, "C", 8);
		if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, &cVar3) == 3)
		{
			Global_4456448.f_237143[iVar2].f_36 = unk_0xB37C1AC7E8A75F3C(*iParam0, &cVar3);
		}
		else
		{
			Global_4456448.f_237143[iVar2].f_36 = 1,25f;
		}
		StringCopy(&cVar3, "w", 8);
		StringIntConCat(&cVar3, iVar2, 8);
		StringConCat(&cVar3, "E", 8);
		if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, &cVar3) == 2)
		{
			Global_4456448.f_237143[iVar2].f_47 = unk_0x8A83B52A17A321DB(*iParam0, &cVar3);
		}
		else
		{
			Global_4456448.f_237143[iVar2].f_47 = 0;
		}
		StringCopy(&cVar3, "w", 8);
		StringIntConCat(&cVar3, iVar2, 8);
		StringConCat(&cVar3, "H", 8);
		if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, &cVar3) == 3)
		{
			Global_4456448.f_237143[iVar2].f_3 = unk_0xB37C1AC7E8A75F3C(*iParam0, &cVar3);
		}
		else
		{
			Global_4456448.f_237143[iVar2].f_3 = 0f;
		}
		StringCopy(&cVar3, "w", 8);
		StringIntConCat(&cVar3, iVar2, 8);
		StringConCat(&cVar3, "I", 8);
		if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, &cVar3) == 3)
		{
			Global_4456448.f_237143[iVar2].f_21 = unk_0xB37C1AC7E8A75F3C(*iParam0, &cVar3);
		}
		else
		{
			Global_4456448.f_237143[iVar2].f_21 = 0f;
		}
		StringCopy(&cVar3, "w", 8);
		StringIntConCat(&cVar3, iVar2, 8);
		StringConCat(&cVar3, "J", 8);
		if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, &cVar3) == 2)
		{
			Global_4456448.f_237143[iVar2].f_48 = unk_0x8A83B52A17A321DB(*iParam0, &cVar3);
		}
		else
		{
			Global_4456448.f_237143[iVar2].f_48 = -1;
		}
		StringCopy(&cVar3, "w", 8);
		StringIntConCat(&cVar3, iVar2, 8);
		StringConCat(&cVar3, "K", 8);
		if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, &cVar3) == 5)
		{
			Global_4456448.f_237143[iVar2].f_49 = { unk_0xC0F58A082935B6E1(*iParam0, &cVar3) };
		}
		else
		{
			Global_4456448.f_237143[iVar2].f_49 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar3, "w", 8);
		StringIntConCat(&cVar3, iVar2, 8);
		StringConCat(&cVar3, "L", 8);
		if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, &cVar3) == 3)
		{
			Global_4456448.f_237143[iVar2].f_52 = unk_0xB37C1AC7E8A75F3C(*iParam0, &cVar3);
		}
		else
		{
			Global_4456448.f_237143[iVar2].f_52 = 0f;
		}
		StringCopy(&cVar3, "w", 8);
		StringIntConCat(&cVar3, iVar2, 8);
		StringConCat(&cVar3, "M", 8);
		if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, &cVar3) == 5)
		{
			Global_4456448.f_237143[iVar2].f_53 = { unk_0xC0F58A082935B6E1(*iParam0, &cVar3) };
		}
		else
		{
			Global_4456448.f_237143[iVar2].f_53 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar3, "w", 8);
		StringIntConCat(&cVar3, iVar2, 8);
		StringConCat(&cVar3, "N", 8);
		if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, &cVar3) == 5)
		{
			Global_4456448.f_237143[iVar2].f_56 = { unk_0xC0F58A082935B6E1(*iParam0, &cVar3) };
		}
		else
		{
			Global_4456448.f_237143[iVar2].f_56 = { 0f, 0f, 0f };
		}
		iVar5 = 0;
		while (iVar5 <= 3)
		{
			StringCopy(&cVar3, "w", 8);
			StringIntConCat(&cVar3, iVar2, 8);
			StringConCat(&cVar3, "F", 8);
			if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, &cVar3) == 2)
			{
				Global_4456448.f_237143[iVar2].f_37[iVar5] = unk_0x8A83B52A17A321DB(*iParam0, &cVar3);
			}
			else
			{
				Global_4456448.f_237143[iVar2].f_37[iVar5] = -1;
			}
			StringCopy(&cVar3, "w", 8);
			StringIntConCat(&cVar3, iVar2, 8);
			StringConCat(&cVar3, "G", 8);
			StringIntConCat(&cVar3, iVar5, 8);
			if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, &cVar3) == 2)
			{
				Global_4456448.f_237143[iVar2].f_42[iVar5] = unk_0x8A83B52A17A321DB(*iParam0, &cVar3);
			}
			else
			{
				Global_4456448.f_237143[iVar2].f_42[iVar5] = -1;
			}
			iVar5++;
		}
		StringCopy(&cVar3, "w", 8);
		StringIntConCat(&cVar3, iVar2, 8);
		StringConCat(&cVar3, "O", 8);
		if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, &cVar3) == 3)
		{
			Global_4456448.f_237143[iVar2].f_59 = unk_0xB37C1AC7E8A75F3C(*iParam0, &cVar3);
		}
		else
		{
			Global_4456448.f_237143[iVar2].f_59 = 65f;
		}
		iVar6 = 0;
		iVar6 = 0;
		while (iVar6 <= 2)
		{
			StringCopy(&cVar3, "w", 8);
			StringIntConCat(&cVar3, iVar2, 8);
			StringConCat(&cVar3, "P", 8);
			StringIntConCat(&cVar3, iVar6, 8);
			if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, &cVar3) == 5)
			{
				Global_4456448.f_237143[iVar2].f_4[iVar6] = { unk_0xC0F58A082935B6E1(*iParam0, &cVar3) };
			}
			else
			{
				Global_4456448.f_237143[iVar2].f_4[iVar6] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar3, "w", 8);
			StringIntConCat(&cVar3, iVar2, 8);
			StringConCat(&cVar3, "Q", 8);
			StringIntConCat(&cVar3, iVar6, 8);
			if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, &cVar3) == 3)
			{
				Global_4456448.f_237143[iVar2].f_14[iVar6] = unk_0xB37C1AC7E8A75F3C(*iParam0, &cVar3);
			}
			else
			{
				Global_4456448.f_237143[iVar2].f_14[iVar6] = 0f;
			}
			StringCopy(&cVar3, "w", 8);
			StringIntConCat(&cVar3, iVar2, 8);
			StringConCat(&cVar3, "R", 8);
			StringIntConCat(&cVar3, iVar6, 8);
			if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, &cVar3) == 5)
			{
				Global_4456448.f_237143[iVar2].f_22[iVar6] = { unk_0xC0F58A082935B6E1(*iParam0, &cVar3) };
			}
			else
			{
				Global_4456448.f_237143[iVar2].f_22[iVar6] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar3, "w", 8);
			StringIntConCat(&cVar3, iVar2, 8);
			StringConCat(&cVar3, "S", 8);
			StringIntConCat(&cVar3, iVar6, 8);
			if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, &cVar3) == 3)
			{
				Global_4456448.f_237143[iVar2].f_32[iVar6] = unk_0xB37C1AC7E8A75F3C(*iParam0, &cVar3);
			}
			else
			{
				Global_4456448.f_237143[iVar2].f_32[iVar6] = 0f;
			}
			iVar6++;
		}
		func_191("alvpor", &(Global_4456448.f_237143[iVar2].f_60), 1, iParam0, &uVar0, iVar2, 0, -2340845);
		iVar2++;
	}
}

void func_322(int iParam0)
{
	if (*iParam0 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		func_323(&cVar2, "lft", iVar0);
		StringConCat(&cVar2, "li", 8);
		if (unk_0xAE496C664AE89A9C(*iParam0, &cVar2) == 2)
		{
			Global_4456448.f_237640[iVar0] = unk_0x8A83B52A17A321DB(*iParam0, &cVar2);
		}
		else
		{
			Global_4456448.f_237640[iVar0] = -1;
		}
		func_323(&cVar2, "lft", iVar0);
		StringConCat(&cVar2, "aa0", 8);
		if (unk_0xAE496C664AE89A9C(*iParam0, &cVar2) == 5)
		{
			Global_4456448.f_237640[iVar0].f_1[0] = { unk_0xC0F58A082935B6E1(*iParam0, &cVar2) };
		}
		else
		{
			Global_4456448.f_237640[iVar0].f_1[0] = { 0f, 0f, 0f };
		}
		func_323(&cVar2, "lft", iVar0);
		StringConCat(&cVar2, "aa1", 8);
		if (unk_0xAE496C664AE89A9C(*iParam0, &cVar2) == 5)
		{
			Global_4456448.f_237640[iVar0].f_1[1] = { unk_0xC0F58A082935B6E1(*iParam0, &cVar2) };
		}
		else
		{
			Global_4456448.f_237640[iVar0].f_1[1] = { 0f, 0f, 0f };
		}
		func_323(&cVar2, "lft", iVar0);
		StringConCat(&cVar2, "aw", 8);
		if (unk_0xAE496C664AE89A9C(*iParam0, &cVar2) == 3)
		{
			Global_4456448.f_237640[iVar0].f_8 = unk_0xB37C1AC7E8A75F3C(*iParam0, &cVar2);
		}
		else
		{
			Global_4456448.f_237640[iVar0].f_8 = 0f;
		}
		func_323(&cVar2, "lft", iVar0);
		StringConCat(&cVar2, "cp", 8);
		if (unk_0xAE496C664AE89A9C(*iParam0, &cVar2) == 5)
		{
			Global_4456448.f_237640[iVar0].f_9 = { unk_0xC0F58A082935B6E1(*iParam0, &cVar2) };
			if (func_127(Global_4456448.f_237640[iVar0].f_9))
			{
				Global_4456448.f_237640[iVar0].f_9 = { Global_4456448.f_237640[iVar0].f_1[0] };
			}
		}
		else
		{
			Global_4456448.f_237640[iVar0].f_9 = { 0f, 0f, 0f };
		}
		func_323(&cVar2, "lft", iVar0);
		StringConCat(&cVar2, "cmr", 8);
		if (unk_0xAE496C664AE89A9C(*iParam0, &cVar2) == 5)
		{
			Global_4456448.f_237640[iVar0].f_30 = { unk_0xC0F58A082935B6E1(*iParam0, &cVar2) };
		}
		else
		{
			Global_4456448.f_237640[iVar0].f_30 = { 0f, 0f, 0f };
		}
		func_323(&cVar2, "lft", iVar0);
		StringConCat(&cVar2, "cmp", 8);
		if (unk_0xAE496C664AE89A9C(*iParam0, &cVar2) == 5)
		{
			Global_4456448.f_237640[iVar0].f_30.f_3 = { unk_0xC0F58A082935B6E1(*iParam0, &cVar2) };
		}
		else
		{
			Global_4456448.f_237640[iVar0].f_30.f_3 = { 0f, 0f, 0f };
		}
		func_323(&cVar2, "lft", iVar0);
		StringConCat(&cVar2, "cmf", 8);
		if (unk_0xAE496C664AE89A9C(*iParam0, &cVar2) == 3)
		{
			Global_4456448.f_237640[iVar0].f_30.f_6 = unk_0xB37C1AC7E8A75F3C(*iParam0, &cVar2);
		}
		else
		{
			Global_4456448.f_237640[iVar0].f_30.f_6 = 0f;
		}
		func_323(&cVar2, "lft", iVar0);
		StringConCat(&cVar2, "cmd", 8);
		if (unk_0xAE496C664AE89A9C(*iParam0, &cVar2) == 2)
		{
			Global_4456448.f_237640[iVar0].f_30.f_7 = unk_0x8A83B52A17A321DB(*iParam0, &cVar2);
		}
		else
		{
			Global_4456448.f_237640[iVar0].f_30.f_7 = 0;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			func_323(&cVar2, "lft", iVar0);
			StringConCat(&cVar2, "w", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			StringConCat(&cVar2, "p", 8);
			if (unk_0xAE496C664AE89A9C(*iParam0, &cVar2) == 5)
			{
				Global_4456448.f_237640[iVar0].f_12[iVar1] = { unk_0xC0F58A082935B6E1(*iParam0, &cVar2) };
			}
			else
			{
				Global_4456448.f_237640[iVar0].f_12[iVar1] = { 0f, 0f, 0f };
			}
			func_323(&cVar2, "lft", iVar0);
			StringConCat(&cVar2, "w", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			StringConCat(&cVar2, "h", 8);
			if (unk_0xAE496C664AE89A9C(*iParam0, &cVar2) == 3)
			{
				Global_4456448.f_237640[iVar0].f_25[iVar1] = unk_0xB37C1AC7E8A75F3C(*iParam0, &cVar2);
			}
			else
			{
				Global_4456448.f_237640[iVar0].f_25[iVar1] = 0f;
			}
			iVar1++;
		}
		func_323(&cVar2, "lft", iVar0);
		StringConCat(&cVar2, "t", 8);
		if (unk_0xAE496C664AE89A9C(*iParam0, &cVar2) == 2)
		{
			Global_4456448.f_237640[iVar0].f_38 = unk_0x8A83B52A17A321DB(*iParam0, &cVar2);
		}
		else
		{
			Global_4456448.f_237640[iVar0].f_38 = -1;
		}
		func_323(&cVar2, "lft", iVar0);
		StringConCat(&cVar2, "fr", 8);
		if (unk_0xAE496C664AE89A9C(*iParam0, &cVar2) == 2)
		{
			Global_4456448.f_237640[iVar0].f_39 = unk_0x8A83B52A17A321DB(*iParam0, &cVar2);
		}
		else
		{
			Global_4456448.f_237640[iVar0].f_39 = -1;
		}
		func_323(&cVar2, "lft", iVar0);
		StringConCat(&cVar2, "tr", 8);
		if (unk_0xAE496C664AE89A9C(*iParam0, &cVar2) == 2)
		{
			Global_4456448.f_237640[iVar0].f_40 = unk_0x8A83B52A17A321DB(*iParam0, &cVar2);
		}
		else
		{
			Global_4456448.f_237640[iVar0].f_40 = -1;
		}
		func_323(&cVar2, "lft", iVar0);
		StringConCat(&cVar2, "bs", 8);
		if (unk_0xAE496C664AE89A9C(*iParam0, &cVar2) == 2)
		{
			Global_4456448.f_237640[iVar0].f_41 = unk_0x8A83B52A17A321DB(*iParam0, &cVar2);
		}
		else
		{
			Global_4456448.f_237640[iVar0].f_41 = 0;
		}
		iVar0++;
	}
}

void func_323(char* sParam0, char* sParam1, int iParam2)
{
	StringCopy(sParam0, sParam1, 8);
	StringIntConCat(sParam0, iParam2, 8);
}

void func_324(int iParam0)
{
	uVar3 = 1;
	StringCopy(&cVar1, "px", 8);
	StringConCat(&cVar1, "num", 8);
	if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, &cVar1) == 2)
	{
		Global_4456448.f_237893 = unk_0x8A83B52A17A321DB(*iParam0, &cVar1);
	}
	else
	{
		Global_4456448.f_237893 = 0;
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&cVar1, "px", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "A", 8);
		if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, &cVar1) == 4)
		{
			StringCopy(&(Global_4456448.f_237894[iVar0]), unk_0x6F58F8DD6B54A28D(*iParam0, &cVar1), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_237894[iVar0]), "", 64);
		}
		StringCopy(&cVar1, "px", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "B", 8);
		if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, &cVar1) == 4)
		{
			StringCopy(&(Global_4456448.f_237894[iVar0].f_16), unk_0x6F58F8DD6B54A28D(*iParam0, &cVar1), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_237894[iVar0].f_16), "", 64);
		}
		StringCopy(&cVar1, "px", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "C", 8);
		if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, &cVar1) == 5)
		{
			Global_4456448.f_237894[iVar0].f_32 = { unk_0xC0F58A082935B6E1(*iParam0, &cVar1) };
		}
		else
		{
			Global_4456448.f_237894[iVar0].f_32 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar1, "px", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "D", 8);
		if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, &cVar1) == 5)
		{
			Global_4456448.f_237894[iVar0].f_35 = { unk_0xC0F58A082935B6E1(*iParam0, &cVar1) };
		}
		else
		{
			Global_4456448.f_237894[iVar0].f_35 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar1, "px", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "E", 8);
		if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, &cVar1) == 2)
		{
			Global_4456448.f_237894[iVar0].f_38 = unk_0x8A83B52A17A321DB(*iParam0, &cVar1);
		}
		else
		{
			Global_4456448.f_237894[iVar0].f_38 = 0;
		}
		StringCopy(&cVar1, "px", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "F", 8);
		if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, &cVar1) == 2)
		{
			Global_4456448.f_237894[iVar0].f_40 = unk_0x8A83B52A17A321DB(*iParam0, &cVar1);
		}
		else
		{
			Global_4456448.f_237894[iVar0].f_40 = -1;
		}
		StringCopy(&cVar1, "px", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "G", 8);
		if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, &cVar1) == 2)
		{
			Global_4456448.f_237894[iVar0].f_41 = unk_0x8A83B52A17A321DB(*iParam0, &cVar1);
		}
		else
		{
			Global_4456448.f_237894[iVar0].f_41 = -1;
		}
		StringCopy(&cVar1, "px", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "H", 8);
		if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, &cVar1) == 2)
		{
			Global_4456448.f_237894[iVar0].f_42 = unk_0x8A83B52A17A321DB(*iParam0, &cVar1);
		}
		else
		{
			Global_4456448.f_237894[iVar0].f_42 = 0;
		}
		StringCopy(&cVar1, "px", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "I", 8);
		if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, &cVar1) == 3)
		{
			Global_4456448.f_237894[iVar0].f_43 = unk_0xB37C1AC7E8A75F3C(*iParam0, &cVar1);
		}
		else
		{
			Global_4456448.f_237894[iVar0].f_43 = 1f;
		}
		StringCopy(&cVar1, "px", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "J", 8);
		if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, &cVar1) == 2)
		{
			Global_4456448.f_237894[iVar0].f_44 = unk_0x8A83B52A17A321DB(*iParam0, &cVar1);
		}
		else
		{
			Global_4456448.f_237894[iVar0].f_44 = -1;
		}
		StringCopy(&cVar1, "px", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "K", 8);
		if (*iParam0 != 0 && unk_0xAE496C664AE89A9C(*iParam0, &cVar1) == 2)
		{
			Global_4456448.f_237894[iVar0].f_39 = unk_0x8A83B52A17A321DB(*iParam0, &cVar1);
		}
		else
		{
			Global_4456448.f_237894[iVar0].f_39 = -1;
		}
		func_325("alvpfx", &(Global_4456448.f_237894[iVar0].f_45), 1, iParam0, &uVar3, iVar0);
		iVar0++;
	}
}

void func_325(char* sParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	if (*uParam3 == 0)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (iParam2 - 1))
	{
		StringCopy(&cVar1, sParam0, 32);
		StringConCat(&cVar1, "_BS", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		if ((*uParam4)[iVar0] == 0 || iParam5 == 0)
		{
			(*uParam4)[iVar0] = unk_0xE5C596332B81A4D4(*uParam3, &cVar1);
		}
		unk_0x79357A2292E7B406((*uParam4)[iVar0], (*uParam1)[iVar0]);
		iVar0++;
	}
}

void func_326()
{
	if (func_327())
	{
		Global_2458936.f_8 = 1;
	}
	Global_2458936.f_7 = 1;
}

bool func_327()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 11);
}

int func_328(int iParam0)
{
	if (unk_0xBA301E03A078FA59() || (unk_0x33A494591F2C1975() && iParam0 == 0))
	{
		if (unk_0x4DEB7B48DD0AABA4(1) == 0 || unk_0xB5E18209CA3E7DE6(1, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0x4DEB7B48DD0AABA4(1) == 0)
	{
		return 0;
	}
	if (func_329() == 0)
	{
		return 0;
	}
	return 1;
}

int func_329()
{
	if (unk_0xBA301E03A078FA59() && unk_0x8BB6DE13A9F3105E())
	{
		return 1;
	}
	if (unk_0xA3F916BCE430ED26() && unk_0x8BB6DE13A9F3105E())
	{
		return 1;
	}
	if ((unk_0x33A494591F2C1975() && unk_0x9AE561F9BC3F06D8() == 0) && unk_0x8BB6DE13A9F3105E())
	{
		return 1;
	}
	if (unk_0xDC30EF462887322E() && unk_0x8BB6DE13A9F3105E())
	{
		return 1;
	}
	if (unk_0x0EFF6B4415DAF4A1() && unk_0x8BB6DE13A9F3105E())
	{
		return 1;
	}
	return 0;
}

int func_330(int iParam0)
{
	if (unk_0xBA301E03A078FA59() || (unk_0x33A494591F2C1975() && iParam0 == 0))
	{
		if (unk_0x4DEB7B48DD0AABA4(0) == 0 || unk_0xB5E18209CA3E7DE6(0, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0x4DEB7B48DD0AABA4(0) == 0)
	{
		return 0;
	}
	if (func_329() == 0)
	{
		return 0;
	}
	return 1;
}

void func_331(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	Global_4456448.f_197271 = 0;
	if (bParam0)
	{
		if (((!func_171() || func_374() == 39) || func_374() == 42) || func_374() == 37)
		{
			Global_4456448.f_194990 = 0;
			Global_4456448.f_227322 = 2;
		}
		Global_4456448.f_135145 = -1;
		Global_4456448.f_11 = 0;
		Global_4456448.f_12 = 0;
		Global_4456448.f_13 = 0;
		Global_4456448.f_14 = 0;
		Global_4456448.f_15 = 0;
		Global_4456448.f_16 = 0;
		Global_4456448.f_17 = 0;
		Global_4456448.f_18 = 0;
		Global_4456448.f_19 = 0;
		Global_4456448.f_20 = 0;
		Global_4456448.f_21 = 0;
		Global_4456448.f_22 = 0;
		Global_4456448.f_23 = 0;
		Global_4456448.f_24 = 0;
		Global_4456448.f_25 = 0;
		Global_4456448.f_26 = 0;
		Global_4456448.f_27 = 0;
		Global_4456448.f_28 = 0;
		Global_4456448.f_29 = 0;
		Global_4456448.f_30 = 0;
		Global_4456448.f_31 = 0;
		Global_4456448.f_32 = 0;
		Global_4456448.f_33 = 0;
		Global_4456448.f_34 = 0;
		Global_4456448.f_35 = 0;
		Global_4456448.f_36 = 0;
		Global_4456448.f_37 = 0;
		func_241(&(Global_4456448.f_238805), 0);
		Global_4456448.f_238807 = 0;
		iVar0 = 0;
		while (iVar0 <= 49)
		{
			Global_4456448.f_238807.f_1[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 49)
		{
			Global_4456448.f_238807.f_52[iVar0] = 0f;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			Global_4456448.f_238807.f_103[iVar0] = { 0f, 0f, 0f };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			StringCopy(&(Global_4456448.f_238807.f_134[iVar0]), "", 64);
			iVar0++;
		}
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 <= 9)
		{
			StringCopy(&(Global_4456448.f_38[iVar4]), "", 64);
			iVar4++;
		}
		Global_4456448.f_200 = 0;
		Global_4456448.f_197284 = -0,1f;
		Global_4456448.f_238793 = -1;
		Global_4456448.f_234210 = 0;
		Global_4456448.f_222 = 0;
		Global_4456448.f_270 = 0;
		Global_4456448.f_63903 = 0;
		Global_4456448.f_226417 = 0;
		Global_4456448.f_10 = 0;
		Global_4456448.f_201 = 0;
		Global_4456448.f_227 = 0;
		Global_4456448.f_228 = 0;
		Global_4456448.f_203 = 0;
		Global_4456448.f_226 = 0;
		Global_4456448.f_229 = 0;
		Global_4456448.f_230 = 0;
		Global_4456448.f_232 = 0;
		Global_4456448.f_233 = 0;
		Global_4456448.f_234 = 0;
		Global_4456448.f_235 = 0;
		Global_4456448.f_205 = 0;
		Global_4456448.f_206 = 1;
		Global_4456448.f_6 = 0;
		Global_4456448.f_221 = 0;
		Global_4456448.f_233018 = 10;
		Global_4456448.f_233019 = 5f;
		Global_4456448.f_233020 = 10;
		Global_4456448.f_225 = 1;
		Global_4456448.f_202 = 0;
		Global_4456448.f_197249 = 0;
		Global_4456448.f_197251 = 0;
		Global_4456448.f_197250 = 0;
		Global_4456448.f_197248 = 0;
		Global_4456448.f_70721 = 0;
		Global_4456448.f_232886 = -1;
		Global_4456448.f_233920 = 0;
		Global_4456448.f_233921 = 0;
		Global_4456448.f_233922 = 0;
		Global_4456448.f_233923 = 0;
		Global_4456448.f_233924 = 0;
		Global_4456448.f_233925 = 1;
		Global_4456448.f_233926 = 2,5f;
		Global_4456448.f_233927 = 0;
		Global_4456448.f_238804 = 0;
		iVar3 = 0;
		while (iVar3 <= 7)
		{
			Global_4456448.f_237143[iVar3] = { 0f, 0f, 0f };
			Global_4456448.f_237143[iVar3].f_18 = { 0f, 0f, 0f };
			Global_4456448.f_237143[iVar3].f_3 = 0f;
			Global_4456448.f_237143[iVar3].f_21 = 0f;
			iVar5 = 0;
			while (iVar5 <= 2)
			{
				Global_4456448.f_237143[iVar3].f_4[iVar5] = { 0f, 0f, 0f };
				Global_4456448.f_237143[iVar3].f_14[iVar5] = 0f;
				Global_4456448.f_237143[iVar3].f_22[iVar5] = { 0f, 0f, 0f };
				Global_4456448.f_237143[iVar3].f_32[iVar5] = 0f;
				iVar5++;
			}
			Global_4456448.f_237143[iVar3].f_36 = 1f;
			Global_4456448.f_237143[iVar3].f_47 = 0;
			Global_4456448.f_237143[iVar3].f_48 = -1;
			Global_4456448.f_237143[iVar3].f_49 = { 0f, 0f, 0f };
			Global_4456448.f_237143[iVar3].f_52 = 0f;
			Global_4456448.f_237143[iVar3].f_59 = 65f;
			Global_4456448.f_237143[iVar3].f_53 = { 0f, 0f, 0f };
			Global_4456448.f_237143[iVar3].f_56 = { 0f, 0f, 0f };
			iVar6 = 0;
			while (iVar6 <= 3)
			{
				Global_4456448.f_237143[iVar3].f_37[iVar6] = -1;
				Global_4456448.f_237143[iVar3].f_42[iVar6] = -1;
				iVar6++;
			}
			func_241(&(Global_4456448.f_237143[iVar3].f_60), 0);
			iVar3++;
		}
		Global_4456448.f_237893 = 0;
		iVar3 = 0;
		while (iVar3 <= 9)
		{
			StringCopy(&(Global_4456448.f_237894[iVar3]), "", 64);
			StringCopy(&(Global_4456448.f_237894[iVar3].f_16), "", 64);
			Global_4456448.f_237894[iVar3].f_32 = { 0f, 0f, 0f };
			Global_4456448.f_237894[iVar3].f_35 = { 0f, 0f, 0f };
			Global_4456448.f_237894[iVar3].f_38 = 0;
			Global_4456448.f_237894[iVar3].f_39 = -1;
			Global_4456448.f_237894[iVar3].f_40 = -1;
			Global_4456448.f_237894[iVar3].f_41 = -1;
			Global_4456448.f_237894[iVar3].f_42 = 0;
			Global_4456448.f_237894[iVar3].f_43 = 1f;
			Global_4456448.f_237894[iVar3].f_44 = -1;
			func_241(&(Global_4456448.f_237894[iVar3].f_45), 0);
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 <= 5)
		{
			func_373(iVar3);
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 <= 4)
		{
			StringCopy(&(Global_4456448.f_234025[iVar3]), "", 64);
			iVar3++;
		}
		Global_4456448.f_234214 = 0f;
		Global_4456448.f_234215 = -1;
		Var7.f_2 = 5;
		Var7.f_2.f_1.f_1 = -1;
		Var7.f_2.f_1.f_13 = 1092616192;
		Var7.f_2.f_1.f_14 = 1092616192;
		Var7.f_2.f_1.f_15 = 1101004800;
		Var7.f_2.f_1.f_16 = 1077936128;
		Var7.f_2.f_1.f_17 = 1119092736;
		Var7.f_2.f_1.f_18 = 1077936128;
		Var7.f_2.f_1.f_19 = 1065353216;
		Var7.f_2.f_1.f_20.f_1 = -1;
		Var7.f_2.f_1.f_20.f_13 = 1092616192;
		Var7.f_2.f_1.f_20.f_14 = 1092616192;
		Var7.f_2.f_1.f_20.f_15 = 1101004800;
		Var7.f_2.f_1.f_20.f_16 = 1077936128;
		Var7.f_2.f_1.f_20.f_17 = 1119092736;
		Var7.f_2.f_1.f_20.f_18 = 1077936128;
		Var7.f_2.f_1.f_20.f_19 = 1065353216;
		Var7.f_2.f_1.f_20.f_20.f_1 = -1;
		Var7.f_2.f_1.f_20.f_20.f_13 = 1092616192;
		Var7.f_2.f_1.f_20.f_20.f_14 = 1092616192;
		Var7.f_2.f_1.f_20.f_20.f_15 = 1101004800;
		Var7.f_2.f_1.f_20.f_20.f_16 = 1077936128;
		Var7.f_2.f_1.f_20.f_20.f_17 = 1119092736;
		Var7.f_2.f_1.f_20.f_20.f_18 = 1077936128;
		Var7.f_2.f_1.f_20.f_20.f_19 = 1065353216;
		Var7.f_2.f_1.f_20.f_20.f_20.f_1 = -1;
		Var7.f_2.f_1.f_20.f_20.f_20.f_13 = 1092616192;
		Var7.f_2.f_1.f_20.f_20.f_20.f_14 = 1092616192;
		Var7.f_2.f_1.f_20.f_20.f_20.f_15 = 1101004800;
		Var7.f_2.f_1.f_20.f_20.f_20.f_16 = 1077936128;
		Var7.f_2.f_1.f_20.f_20.f_20.f_17 = 1119092736;
		Var7.f_2.f_1.f_20.f_20.f_20.f_18 = 1077936128;
		Var7.f_2.f_1.f_20.f_20.f_20.f_19 = 1065353216;
		Var7.f_2.f_1.f_20.f_20.f_20.f_20.f_1 = -1;
		Var7.f_2.f_1.f_20.f_20.f_20.f_20.f_13 = 1092616192;
		Var7.f_2.f_1.f_20.f_20.f_20.f_20.f_14 = 1092616192;
		Var7.f_2.f_1.f_20.f_20.f_20.f_20.f_15 = 1101004800;
		Var7.f_2.f_1.f_20.f_20.f_20.f_20.f_16 = 1077936128;
		Var7.f_2.f_1.f_20.f_20.f_20.f_20.f_17 = 1119092736;
		Var7.f_2.f_1.f_20.f_20.f_20.f_20.f_18 = 1077936128;
		Var7.f_2.f_1.f_20.f_20.f_20.f_20.f_19 = 1065353216;
		Var7.f_103.f_5 = 1117782016;
		Var7.f_103.f_6 = 2;
		Var7.f_103.f_13 = 1112014848;
		Global_4456448.f_237025 = { Var7 };
		if (bParam1)
		{
			Global_4456448.f_4 = 0;
			Global_4456448.f_5 = 0;
		}
		Global_4456448.f_238796 = -1;
		Global_4456448.f_3 = 0;
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			Global_4456448.f_63966[iVar0] = -1;
			Global_4456448.f_63966[iVar0].f_1 = -1;
			Global_4456448.f_63966[iVar0].f_2 = -1;
			Global_4456448.f_63966[iVar0].f_3 = 0;
			Global_4456448.f_63966[iVar0].f_5 = 0;
			Global_4456448.f_63966[iVar0].f_4 = -1;
			Global_4456448.f_63966[iVar0].f_40 = -1;
			Global_4456448.f_63966[iVar0].f_41 = 0;
			iVar3 = 0;
			while (iVar3 <= 1)
			{
				StringCopy(&(Global_4456448.f_63966[iVar0].f_6[iVar3]), "", 64);
				iVar3++;
			}
			Global_4456448.f_63966[iVar0].f_39 = 0;
			iVar0++;
		}
		Global_4456448.f_197252 = 0;
		Global_4456448.f_197253 = 0;
		Global_4456448.f_197254 = 0;
		Global_4456448.f_197244 = -1;
		Global_4456448.f_197243 = 0;
		Global_4456448.f_197242 = -1;
		Global_4456448.f_239 = 0;
		Global_4456448.f_247 = { 0f, 0f, 0f };
		Global_4456448.f_250 = { 0f, 0f, 0f };
		Global_4456448.f_253 = { 0f, 0f, 0f };
		Global_4456448.f_256 = { 0f, 0f, 0f };
		Global_4456448.f_259 = { 0f, 0f, 0f };
		Global_4456448.f_262 = { 0f, 0f, 0f };
		Global_4456448.f_265 = 0f;
		Global_4456448.f_266 = 0f;
		Global_4456448.f_194965 = 0f;
		Global_4456448.f_269 = 0;
		Global_4456448.f_197270 = 0;
		Global_4456448.f_232918 = 0;
		Global_4456448.f_233972 = 0;
		Global_4456448.f_227324 = 0;
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_4456448.f_75733[iVar0][0] = 0;
			Global_4456448.f_75733[iVar0][1] = 0;
			Global_4456448.f_75713[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4456448.f_233473), "", 64);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&(Global_4456448.f_233489[iVar0]), "", 64);
		iVar124 = 0;
		while (iVar124 <= 3)
		{
			StringCopy(&(Global_4456448.f_233570[iVar0][iVar124]), "", 64);
			iVar124++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&(Global_4456448.f_70722[iVar0]), "", 24);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_4456448.f_208082[iVar0][0] = 0;
		Global_4456448.f_208082[iVar0][1] = 0;
		Global_4456448.f_208101[iVar0] = -1;
		iVar0++;
	}
	Global_4456448.f_208108 = 0;
	Global_4456448.f_208109 = -1;
	Global_4456448.f_1 = -1;
	StringCopy(&(Global_4456448.f_195302), "", 24);
	iVar0 = 0;
	while (iVar0 <= 35)
	{
		StringCopy(&(Global_4456448.f_207686[iVar0]), "", 32);
		iVar0++;
	}
	Global_4456448.f_229396 = 0;
	Global_4456448.f_220 = 0;
	Global_4456448.f_241 = { 0f, 0f, 0f };
	Global_4456448.f_227323 = -1;
	StringCopy(&(Global_4456448.f_194997), "", 64);
	StringCopy(&(Global_4456448.f_195286), "", 64);
	StringCopy(&(Global_4456448.f_233457), "", 64);
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			StringCopy(&(Global_4456448.f_195308[iVar0]), "", 24);
			Global_4456448.f_195345[iVar0] = 0;
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_4456448.f_195019[iVar0]), "", 64);
		iVar0++;
	}
	func_372();
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		StringCopy(&(Global_4456448.f_63966[0].f_6[iVar0]), "", 64);
		iVar0++;
	}
	func_371();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_213[iVar0] = 0;
		Global_4456448.f_226391[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_4456448.f_226396[iVar0][iVar1] = 0;
			iVar1++;
		}
		Global_4456448.f_208[iVar0] = 1;
		Global_4456448.f_194096[iVar0] = { 0f, 0f, 0f };
		Global_4456448.f_194109[iVar0] = { 0f, 0f, 0f };
		Global_4456448.f_194122[iVar0] = 0f;
		Global_4456448.f_229400[iVar0] = { 0f, 0f, 0f };
		Global_4456448.f_229413[iVar0] = { 0f, 0f, 0f };
		Global_4456448.f_229426[iVar0] = { 0f, 0f, 0f };
		Global_4456448.f_229439[iVar0] = 45f;
		Global_4456448.f_229444[iVar0] = 0f;
		Global_4456448.f_190067[iVar0] = -1;
		Global_4456448.f_116795[iVar0] = -1;
		StringCopy(&(Global_4456448.f_230135[iVar0]), "", 64);
		StringCopy(&(Global_4456448.f_230200[iVar0]), "", 64);
		Global_4456448.f_230265[iVar0] = 0;
		StringCopy(&(Global_4456448.f_229937[iVar0]), "", 64);
		Global_4456448.f_208172[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&(Global_4456448.f_230002[iVar0][iVar1]), "", 64);
			iVar1++;
		}
		Global_4456448.f_64849[iVar0] = -1;
		Global_4456448.f_64854[iVar0] = -1;
		StringCopy(&(Global_4456448.f_232844[iVar0]), "", 16);
		StringCopy(&(Global_4456448.f_232861[iVar0]), "", 16);
		Global_4456448.f_232878[iVar0] = 0;
		Global_4456448.f_232911[iVar0] = 0;
		iVar0++;
	}
	Global_4456448.f_233006 = 0;
	Global_4456448.f_233005 = 0;
	Global_4456448.f_233007 = 0;
	Global_4456448.f_233008 = 1;
	Global_4456448.f_233009 = 2;
	Global_4456448.f_233010 = 3;
	Global_4456448.f_233011 = 4;
	Global_4456448.f_233012 = 6;
	Global_4456448.f_233013 = 7;
	Global_4456448.f_233014 = 9;
	Global_4456448.f_233015 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_233071[iVar0] = 0;
		Global_4456448.f_233076[iVar0] = 0;
		iVar0++;
	}
	Global_4456448.f_233022 = 5;
	Global_4456448.f_233021 = 0;
	Global_4456448.f_233017 = 3;
	Global_4456448.f_233912 = 60000;
	Global_4456448.f_233915 = 1f;
	Global_4456448.f_233913 = 0,5f;
	Global_4456448.f_233914 = 0,5f;
	Global_4456448.f_233916 = 50f;
	Global_4456448.f_233917 = 100f;
	Global_4456448.f_233093 = 5000;
	Global_4456448.f_233094 = 2500;
	Global_4456448.f_233095 = 3000;
	Global_4456448.f_229449 = { 0f, 0f, 0f };
	Global_4456448.f_229452 = { 0f, 0f, 0f };
	Global_4456448.f_229455 = { 0f, 0f, 0f };
	Global_4456448.f_229458 = 45f;
	Global_4456448.f_229459 = 0f;
	Global_4456448.f_229460 = 0;
	Global_4456448.f_230293 = 10000;
	Global_4456448.f_230294 = 0;
	Global_4456448.f_230308 = 1;
	Global_4456448.f_230295 = 1f;
	Global_4456448.f_233056 = 1;
	Global_4456448.f_233057 = 0;
	Global_4456448.f_230296 = 0f;
	Global_4456448.f_230309 = 60f;
	Global_4456448.f_230310 = 5f;
	Global_4456448.f_230311 = 60f;
	Global_4456448.f_230312 = -1f;
	Global_4456448.f_230298 = 2;
	Global_4456448.f_230299 = 2;
	Global_4456448.f_230300 = 3000;
	Global_4456448.f_230301 = 150;
	Global_4456448.f_230302 = 3f;
	Global_4456448.f_230303 = 1f;
	Global_4456448.f_230304 = 25;
	Global_4456448.f_230305 = 5;
	Global_4456448.f_230306 = 5;
	Global_4456448.f_230307 = 2000;
	Global_4456448.f_230325 = -1f;
	StringCopy(&(Global_4456448.f_230326), "", 16);
	StringCopy(&(Global_4456448.f_230330), "", 16);
	StringCopy(&(Global_4456448.f_230334), "", 16);
	StringCopy(&(Global_4456448.f_230338), "", 16);
	StringCopy(&(Global_4456448.f_230342), "", 16);
	StringCopy(&(Global_4456448.f_230346), "", 16);
	Global_4456448.f_78076 = 0,075f;
	Global_4456448.f_78077 = 0,075f;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_4456448.f_78079[iVar0] = { 0f, 0f, 0f };
		Global_4456448.f_78110[iVar0] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_4456448.f_230313 = 0;
	Global_4456448.f_230322 = 0;
	Global_4456448.f_230314 = 0;
	Global_4456448.f_230315 = 0;
	Global_4456448.f_230316 = 0;
	Global_4456448.f_230317 = 0;
	Global_4456448.f_230318 = 0;
	Global_4456448.f_230319 = 0;
	Global_4456448.f_230323 = 0;
	Global_4456448.f_230320 = -1f;
	Global_4456448.f_230321 = 0;
	Global_4456448.f_230324 = 0;
	Global_4456448.f_233091 = 0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&(Global_4456448.f_181400[iVar0]), "", 64);
		StringCopy(&(Global_4456448.f_181481[iVar0]), "", 64);
		StringCopy(&(Global_4456448.f_181562[iVar0]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		StringCopy(&(Global_4456448.f_182179[iVar0]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (func_370() - 1))
	{
		func_366(&(Global_4456448.f_208177[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_362(&(Global_4456448.f_223128[iVar0]));
		iVar0++;
	}
	func_362(&(Global_4456448.f_225524));
	iVar0 = 0;
	while (iVar0 <= 39)
	{
		func_361(&(Global_4456448.f_227120[iVar0]));
		iVar0++;
	}
	Global_4456448.f_227321 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_4456448.f_134995[iVar0] = { 0f, 0f, 0f };
		Global_4456448.f_135056[iVar0] = 0;
		Global_4456448.f_135077[iVar0] = -1;
		Global_4456448.f_135098[iVar0] = 100f;
		Global_4456448.f_135120[iVar0] = -1;
		iVar0++;
	}
	Global_4456448.f_135119 = 0;
	Global_4456448.f_135141 = 0;
	iVar0 = 0;
	while (iVar0 <= 91)
	{
		func_240(&(Global_4456448.f_197289[iVar0]), iVar0);
		iVar0++;
	}
	Global_4456448.f_207975[0] = 0;
	Global_4456448.f_207975[1] = 0;
	Global_4456448.f_207979 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_360(&(Global_4456448.f_226428[iVar0]));
		iVar0++;
	}
	Global_4456448.f_232883 = 0;
	if (bParam3)
	{
		Global_4456448.f_2 = 0;
	}
	Global_4456448.f_207992 = 0;
	Global_4456448.f_197222 = 0;
	Global_4456448.f_226417 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_197256[iVar0] = -1;
		Global_4456448.f_227325[iVar0] = -1;
		iVar0++;
	}
	Global_4456448.f_232885 = 0;
	Global_4456448.f_232843 = 0;
	Global_4456448.f_232908 = 0;
	Global_4456448.f_232910 = 0;
	Global_4456448.f_197287 = 0;
	Global_4456448.f_197288 = 0;
	Global_4456448.f_227358 = 0,5f;
	Global_4456448.f_207993 = 1;
	Global_4456448.f_207995 = 5;
	if (bParam3)
	{
		func_356(0);
	}
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_4456448.f_227359[iVar0] = 0f;
		Global_4456448.f_227380[iVar0] = 0f;
		Global_4456448.f_227401[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_78156[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_78204[iVar0] = -1;
		Global_4456448.f_78214[iVar0] = -1;
		Global_4456448.f_78219[iVar0] = 1001;
		iVar0++;
	}
	Global_1651354 = 0;
	Global_4456448.f_7 = 0;
	Global_4456448.f_197229 = 0;
	Global_4456448.f_63122 = 0;
	iVar0 = 0;
	while (iVar0 < Global_4456448.f_189766)
	{
		Global_4456448.f_189766[iVar0] = { 0f, 0f, 0f };
		Global_4456448.f_189766[iVar0].f_3 = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		func_355(&(Global_4456448.f_239102[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_354(iVar0);
		Global_4456448.f_63922[iVar0][0] = 0;
		Global_4456448.f_63922[iVar0][1] = 0;
		Global_4456448.f_63922[iVar0][2] = 0;
		Global_4456448.f_63905[iVar0][0] = 0;
		Global_4456448.f_63905[iVar0][1] = 0;
		Global_4456448.f_63905[iVar0][2] = 0;
		Global_4456448.f_63939[iVar0][0] = 0;
		Global_4456448.f_63939[iVar0][1] = 0;
		Global_4456448.f_63939[iVar0][2] = 0;
		Global_4456448.f_63956[iVar0] = 0;
		Global_4456448.f_63961[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 12)
		{
			Global_4456448.f_208020[iVar0][iVar1] = 0;
			iVar1++;
		}
		Global_4456448.f_208137[iVar0][0] = 0;
		Global_4456448.f_208137[iVar0][1] = 0;
		Global_4456448.f_208159[iVar0][0] = 0;
		Global_4456448.f_271[iVar0] = { 0f, 0f, 0f };
		Global_4456448.f_271[iVar0].f_4 = { 0f, 0f, 0f };
		Global_4456448.f_271[iVar0].f_7 = { 0f, 0f, 0f };
		Global_4456448.f_271[iVar0].f_11 = { 0f, 0f, 0f };
		Global_4456448.f_271[iVar0].f_14 = 0;
		Global_4456448.f_271[iVar0].f_15 = { 0f, 0f, 0f };
		Global_4456448.f_271[iVar0].f_18 = 0;
		Global_4456448.f_271[iVar0].f_19 = { 0f, 0f, 0f };
		Global_4456448.f_271[iVar0].f_22 = -1;
		Global_4456448.f_271[iVar0].f_23 = 0;
		Global_4456448.f_271[iVar0].f_38 = 0;
		Global_4456448.f_271[iVar0].f_24 = -1;
		Global_4456448.f_271[iVar0].f_25 = -1;
		Global_4456448.f_271[iVar0].f_26 = -1;
		Global_4456448.f_271[iVar0].f_27 = -1;
		Global_4456448.f_271[iVar0].f_28 = -1;
		Global_4456448.f_271[iVar0].f_29 = -1;
		Global_4456448.f_271[iVar0].f_30 = -1;
		Global_4456448.f_271[iVar0].f_31 = -1;
		Global_4456448.f_271[iVar0].f_32 = -1;
		Global_4456448.f_271[iVar0].f_33 = -1;
		Global_4456448.f_271[iVar0].f_34 = 0;
		Global_4456448.f_271[iVar0].f_35 = 0;
		Global_4456448.f_271[iVar0].f_36 = 0;
		Global_4456448.f_271[iVar0].f_59 = -1;
		Global_4456448.f_271[iVar0].f_5396 = 0;
		Global_4456448.f_271[iVar0].f_5398 = 0;
		Global_4456448.f_271[iVar0].f_5455 = 0;
		Global_4456448.f_271[iVar0].f_5528 = 0;
		Global_4456448.f_271[iVar0].f_9774 = 0;
		Global_4456448.f_271[iVar0].f_5397 = 0;
		Global_4456448.f_271[iVar0].f_5399 = 0;
		Global_4456448.f_271[iVar0].f_9775 = 0;
		Global_4456448.f_271[iVar0].f_61 = 0;
		Global_4456448.f_271[iVar0].f_62 = 0;
		Global_4456448.f_271[iVar0].f_63 = 0;
		Global_4456448.f_271[iVar0].f_64 = 0;
		Global_4456448.f_271[iVar0].f_327 = 0;
		Global_4456448.f_271[iVar0].f_328 = 0;
		Global_4456448.f_271[iVar0].f_329 = 0;
		Global_4456448.f_271[iVar0].f_592 = 0;
		Global_4456448.f_271[iVar0].f_593 = 0;
		Global_4456448.f_271[iVar0].f_594 = 0;
		Global_4456448.f_271[iVar0].f_9776 = 0;
		Global_4456448.f_271[iVar0].f_9795 = 0;
		Global_4456448.f_271[iVar0].f_57 = 0;
		Global_4456448.f_271[iVar0].f_58 = 0;
		Global_4456448.f_271[iVar0].f_4986 = 60000;
		Global_4456448.f_271[iVar0].f_5250 = 60000;
		Global_4456448.f_271[iVar0].f_6151 = 0;
		Global_4456448.f_271[iVar0].f_941 = 0;
		Global_4456448.f_271[iVar0].f_942 = 0;
		Global_4456448.f_271[iVar0].f_13728 = -1;
		Global_4456448.f_271[iVar0].f_13729 = -1;
		Global_4456448.f_271[iVar0].f_13730 = 1;
		Global_4456448.f_271[iVar0].f_13731 = 0;
		Global_4456448.f_271[iVar0].f_13732 = -1;
		Global_4456448.f_271[iVar0].f_857 = -1;
		Global_4456448.f_271[iVar0].f_858 = -1;
		Global_4456448.f_271[iVar0].f_4994 = 0;
		Global_4456448.f_271[iVar0].f_4995 = 0;
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_4456448.f_271[iVar0].f_4996[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_5014[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_5032[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_5050[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_5068[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_5104[iVar1] = 4;
			Global_4456448.f_271[iVar0].f_5122[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_5158[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_5194[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_5176[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_5212[iVar1] = 10;
			Global_4456448.f_271[iVar0].f_5230[iVar1] = 10;
			Global_4456448.f_271[iVar0].f_5140[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_5086[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_13967[iVar1] = 10;
			Global_4456448.f_271[iVar0].f_13985[iVar1] = 10;
			Global_4456448.f_271[iVar0].f_9777[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_14676[iVar1] = 0;
			iVar1++;
		}
		Global_4456448.f_63072[iVar0] = 0;
		Global_4456448.f_63077[iVar0] = 0;
		Global_4456448.f_63082[iVar0] = -1;
		Global_4456448.f_63128[iVar0] = 0;
		Global_4456448.f_63165[iVar0] = 1;
		Global_4456448.f_63170[iVar0] = -1;
		StringCopy(&(Global_4456448.f_63133[iVar0]), "", 16);
		Global_4456448.f_63155[iVar0] = 3;
		Global_4456448.f_63160[iVar0] = -1;
		Global_4456448.f_63175[iVar0] = -1;
		Global_4456448.f_63180[iVar0] = -1;
		Global_4456448.f_63185[iVar0] = -1;
		Global_4456448.f_63190[iVar0] = -1;
		Global_4456448.f_63205[iVar0] = 0;
		Global_4456448.f_63210[iVar0] = -1;
		Global_4456448.f_63123[iVar0] = 0;
		Global_4456448.f_63150[iVar0] = 0;
		Global_4456448.f_207981[iVar0] = 0;
		Global_4456448.f_207986[iVar0] = 0;
		Global_4456448.f_78189[iVar0] = 100;
		Global_4456448.f_78194[iVar0] = 1f;
		Global_4456448.f_78199[iVar0] = 0;
		Global_4456448.f_78224[iVar0] = 0;
		Global_4456448.f_271[iVar0].f_9567 = 0;
		Global_4456448.f_271[iVar0].f_9568 = 0;
		Global_4456448.f_271[iVar0].f_9569 = 0;
		Global_4456448.f_271[iVar0].f_9570 = 0;
		Global_1651354.f_1[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			Global_4456448.f_208110[iVar0][iVar1] = 0;
			iVar1++;
		}
		Global_4456448.f_208127[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				Global_4456448.f_194221[iVar0][iVar1][iVar2] = { 0f, 0f, 0f };
				Global_4456448.f_194434[iVar0][iVar1][iVar2] = 0f;
				Global_4456448.f_194519[iVar0][iVar1][iVar2] = { 0f, 0f, 0f };
				iVar2++;
			}
			Global_4456448.f_230270[iVar0][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 26)
		{
			Global_4456448.f_75810[iVar0][iVar1][0] = 0;
			Global_4456448.f_75810[iVar0][iVar1][1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_4456448.f_232887[iVar0][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 26)
		{
			Global_4456448.f_76285[iVar0][0][iVar1][0] = 0;
			Global_4456448.f_76285[iVar0][1][iVar1][0] = 0;
			Global_4456448.f_76285[iVar0][0][iVar1][1] = 0;
			Global_4456448.f_76285[iVar0][1][iVar1][1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				Global_4456448.f_229462[iVar0][iVar1][iVar2] = { 0f, 0f, 0f };
				Global_4456448.f_229727[iVar0][iVar1][iVar2] = 0f;
				iVar2++;
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 121)
		{
			Global_4456448.f_271[iVar0].f_65[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_331[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_596[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_201[iVar1] = 1f;
			Global_4456448.f_271[iVar0].f_467[iVar1] = 1f;
			Global_4456448.f_271[iVar0].f_732[iVar1] = 1f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 11)
		{
			Global_4456448.f_271[iVar0].f_188[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_454[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_719[iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_4456448.f_271[iVar0].f_859[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_864[iVar1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_4456448.f_64388[iVar1] = 0;
			Global_4456448.f_64388[iVar1].f_1 = { 0f, 0f, 0f };
			Global_4456448.f_64388[iVar1].f_4 = { 0f, 0f, 0f };
			Global_4456448.f_64388[iVar1].f_25 = 0f;
			Global_4456448.f_64388[iVar1].f_26 = 0;
			iVar2 = 0;
			while (iVar2 <= 4)
			{
				Global_4456448.f_64388[iVar1].f_7[iVar2] = 0;
				Global_4456448.f_64388[iVar1].f_13[iVar2] = 0;
				Global_4456448.f_64388[iVar1].f_19[iVar2] = 0;
				iVar2++;
			}
			Global_4456448.f_271[iVar0].f_6333[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_6351[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_6369[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_6387[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_6405[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_6423[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_6441[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_6459[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_6477[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_6495[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_6513[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_6531[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_6549[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_6567[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_6671[iVar1] = -1;
			iVar2 = 0;
			while (iVar2 <= 31)
			{
				Global_4456448.f_271[iVar0].f_6689[iVar1][iVar2] = -1;
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 <= 79)
			{
				Global_4456448.f_271[iVar0].f_7251[iVar1][iVar2] = -1;
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 <= 31)
			{
				Global_4456448.f_271[iVar0].f_8629[iVar1][iVar2] = -1;
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 <= 19)
			{
				Global_4456448.f_271[iVar0].f_9191[iVar1][iVar2] = -1;
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				Global_4456448.f_271[iVar0].f_6585[iVar1][iVar2] = 0;
				iVar2++;
			}
			StringCopy(&(Global_4456448.f_271[iVar0].f_14403[iVar1]), "", 64);
			StringCopy(&(Global_4456448.f_271[iVar0].f_14694[iVar1]), "", 64);
			Global_4456448.f_271[iVar0].f_14385[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_14315[iVar1].f_1 = 0;
			Global_4456448.f_271[iVar0].f_14315[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_14315[iVar1].f_3 = 0f;
			Global_4456448.f_271[iVar0].f_14315[iVar1].f_2 = 0;
			Global_4456448.f_271[iVar0].f_15036[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_15036[iVar1].f_1 = 0;
			Global_4456448.f_271[iVar0].f_15036[iVar1].f_2 = 0;
			Global_4456448.f_271[iVar0].f_15036[iVar1].f_3 = 0;
			Global_4456448.f_271[iVar0].f_15036[iVar1].f_4 = -1;
			Global_4456448.f_271[iVar0].f_15036[iVar1].f_5 = -1;
			StringCopy(&(Global_4456448.f_271[iVar0].f_15036[iVar1].f_6), "", 64);
			StringCopy(&(Global_4456448.f_271[iVar0].f_15036[iVar1].f_22), "", 64);
			Global_4456448.f_271[iVar0].f_15036[iVar1].f_38 = 0;
			Global_4456448.f_271[iVar0].f_9549[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_39[iVar1] = -1;
			Global_4456448.f_134791[iVar1][iVar0] = 0;
			Global_4456448.f_271[iVar0].f_9571[iVar1] = 60000;
			Global_4456448.f_271[iVar0].f_9589[iVar1] = 60000;
			Global_4456448.f_271[iVar0].f_14243[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_14261[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_14279[iVar1] = 0;
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				StringCopy(&(Global_4456448.f_271[iVar0].f_9693[iVar2]), "", 64);
				Global_4456448.f_271[iVar0].f_9607[iVar1][iVar2] = 0;
				iVar2++;
			}
			Global_4456448.f_63215[iVar1][iVar0] = -1;
			Global_4456448.f_63301[iVar1][iVar0] = 0;
			Global_4456448.f_63387[iVar1][iVar0] = 0;
			Global_4456448.f_63473[iVar1][iVar0] = 0;
			Global_4456448.f_63559[iVar1][iVar0] = 0;
			Global_4456448.f_63645[iVar1][iVar0] = 1500;
			Global_4456448.f_63731[iVar1][iVar0] = 1400;
			Global_4456448.f_63817[iVar1][iVar0] = 35;
			StringCopy(&(Global_1651354.f_152[iVar0][iVar1]), "", 64);
			Global_1651354.f_6[iVar0][iVar1] = 0;
			Global_4456448.f_271[iVar0].f_961[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_979[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_5252[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_5270[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_5288[iVar1] = 1;
			Global_4456448.f_271[iVar0].f_5360[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_5378[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_5456[iVar1] = 10000;
			Global_4456448.f_271[iVar0].f_5400[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_5418[iVar1] = -2;
			Global_4456448.f_271[iVar0].f_5436[iVar1] = 1;
			Global_4456448.f_271[iVar0].f_5492[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_5306[iVar1] = 1;
			Global_4456448.f_271[iVar0].f_5510[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_5529[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_5813[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_5849[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_5565[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_5547[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_5705[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_5831[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_5867[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_5759[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_5777[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_5723[iVar1] = 100;
			Global_4456448.f_271[iVar0].f_5583[iVar1] = { 0f, 0f, 0f };
			Global_4456448.f_271[iVar0].f_5635[iVar1] = { 0f, 0f, 0f };
			Global_4456448.f_271[iVar0].f_5687[iVar1] = 0f;
			Global_4456448.f_271[iVar0].f_5741[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_5795[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_5885[iVar1] = -1f;
			Global_4456448.f_271[iVar0].f_1393[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_1411[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_1429[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_1447[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_1483[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_997[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_1015[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_1465[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_1501[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_13332[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_13350[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_13368[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_13386[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_13404[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_13422[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_13440[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_13476[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_13656[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_13458[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_13494[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_13512[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_13530[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_13548[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_13638[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_13566[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_869[iVar1] = 5;
			Global_4456448.f_271[iVar0].f_887[iVar1] = 20;
			Global_4456448.f_271[iVar0].f_1303[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_6189[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_6207[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_6225[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_6243[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_6261[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_6279[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_6297[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_1357[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_1375[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_5324[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_5342[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_905[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_923[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_943[iVar1] = 0;
			StringCopy(&(Global_4456448.f_271[iVar0].f_9796[iVar1]), "", 64);
			StringCopy(&(Global_4456448.f_271[iVar0].f_10069[iVar1]), "", 64);
			StringCopy(&(Global_4456448.f_271[iVar0].f_10342[iVar1]), "", 64);
			StringCopy(&(Global_4456448.f_271[iVar0].f_11161[iVar1]), "", 64);
			StringCopy(&(Global_4456448.f_271[iVar0].f_10615[iVar1]), "", 64);
			StringCopy(&(Global_4456448.f_271[iVar0].f_10888[iVar1]), "", 64);
			StringCopy(&(Global_4456448.f_271[iVar0].f_13072[0]), "", 64);
			StringCopy(&(Global_4456448.f_271[iVar0].f_13072[1]), "", 64);
			StringCopy(&(Global_4456448.f_271[iVar0].f_11434[iVar1]), "", 64);
			StringCopy(&(Global_4456448.f_271[iVar0].f_11707[iVar1]), "", 64);
			StringCopy(&(Global_4456448.f_271[iVar0].f_11980[iVar1]), "", 64);
			StringCopy(&(Global_4456448.f_271[iVar0].f_12253[iVar1]), "", 64);
			StringCopy(&(Global_4456448.f_271[iVar0].f_12526[iVar1]), "", 64);
			StringCopy(&(Global_4456448.f_271[iVar0].f_12799[iVar1]), "", 64);
			Global_4456448.f_271[iVar0].f_6043[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_6079[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_6061[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_5903[iVar1] = { 0f, 0f, 0f };
			Global_4456448.f_271[iVar0].f_5955[iVar1] = { 0f, 0f, 0f };
			func_352(iVar0, iVar1);
			Global_4456448.f_271[iVar0].f_2187[iVar1].f_29 = 0;
			Global_4456448.f_271[iVar0].f_2187[iVar1].f_13 = { 0f, 0f, 0f };
			Global_4456448.f_271[iVar0].f_2187[iVar1].f_16 = { 0f, 0f, 0f };
			Global_4456448.f_271[iVar0].f_2187[iVar1].f_19 = { 0f, 0f, 0f };
			Global_4456448.f_271[iVar0].f_2187[iVar1].f_22 = 0f;
			Global_4456448.f_271[iVar0].f_2187[iVar1].f_23 = 0f;
			Global_4456448.f_271[iVar0].f_2187[iVar1].f_2 = -1;
			Global_4456448.f_271[iVar0].f_2187[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_2187[iVar1].f_10 = 0;
			Global_4456448.f_271[iVar0].f_2187[iVar1].f_26 = { 0f, 0f, 0f };
			Global_4456448.f_271[iVar0].f_2187[iVar1].f_1 = -1;
			Global_4456448.f_271[iVar0].f_2187[iVar1].f_3 = 0;
			Global_4456448.f_271[iVar0].f_2187[iVar1].f_30 = 0;
			Global_4456448.f_271[iVar0].f_2187[iVar1].f_31 = -1;
			Global_4456448.f_271[iVar0].f_2187[iVar1].f_4 = 120;
			Global_4456448.f_271[iVar0].f_2187[iVar1].f_6 = 0;
			Global_4456448.f_271[iVar0].f_2187[iVar1].f_7 = 0;
			Global_4456448.f_271[iVar0].f_2187[iVar1].f_11 = 0;
			Global_4456448.f_271[iVar0].f_2187[iVar1].f_12 = 12;
			Global_4456448.f_271[iVar0].f_2187[iVar1].f_8 = 0;
			Global_4456448.f_271[iVar0].f_2187[iVar1].f_9 = 0;
			Global_4456448.f_271[iVar0].f_2187[iVar1].f_35 = 0;
			Global_4456448.f_271[iVar0].f_2800[iVar1].f_29 = 0;
			Global_4456448.f_271[iVar0].f_2800[iVar1].f_13 = { 0f, 0f, 0f };
			Global_4456448.f_271[iVar0].f_2800[iVar1].f_16 = { 0f, 0f, 0f };
			Global_4456448.f_271[iVar0].f_2800[iVar1].f_19 = { 0f, 0f, 0f };
			Global_4456448.f_271[iVar0].f_2800[iVar1].f_22 = 0f;
			Global_4456448.f_271[iVar0].f_2800[iVar1].f_23 = 0f;
			Global_4456448.f_271[iVar0].f_2800[iVar1].f_2 = -1;
			Global_4456448.f_271[iVar0].f_2800[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_2800[iVar1].f_10 = 0;
			Global_4456448.f_271[iVar0].f_2800[iVar1].f_26 = { 0f, 0f, 0f };
			Global_4456448.f_271[iVar0].f_2800[iVar1].f_1 = -1;
			Global_4456448.f_271[iVar0].f_2800[iVar1].f_3 = 0;
			Global_4456448.f_271[iVar0].f_2800[iVar1].f_30 = 0;
			Global_4456448.f_271[iVar0].f_2800[iVar1].f_31 = -1;
			Global_4456448.f_271[iVar0].f_2800[iVar1].f_4 = 120;
			Global_4456448.f_271[iVar0].f_2800[iVar1].f_6 = 0;
			Global_4456448.f_271[iVar0].f_2800[iVar1].f_7 = 0;
			Global_4456448.f_271[iVar0].f_2800[iVar1].f_11 = 0;
			Global_4456448.f_271[iVar0].f_2800[iVar1].f_12 = 12;
			Global_4456448.f_271[iVar0].f_2800[iVar1].f_8 = 0;
			Global_4456448.f_271[iVar0].f_2800[iVar1].f_9 = 0;
			Global_4456448.f_271[iVar0].f_2800[iVar1].f_35 = 0;
			Global_4456448.f_271[iVar0].f_6007[iVar1] = 3f;
			Global_4456448.f_271[iVar0].f_6025[iVar1] = 0,001f;
			Global_4456448.f_271[iVar0].f_5474[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_6097[iVar1] = 10,5f;
			Global_4456448.f_271[iVar0].f_6115[iVar1] = 1f;
			Global_4456448.f_271[iVar0].f_6133[iVar1] = 1f;
			Global_4456448.f_271[iVar0].f_6315[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_14021[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_14021[iVar1].f_1 = -1;
			Global_4456448.f_271[iVar0].f_14021[iVar1].f_2 = { 0f, 0f, 0f };
			Global_4456448.f_271[iVar0].f_1033[iVar1] = 12;
			Global_4456448.f_271[iVar0].f_1051[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_1069[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_1087[iVar1] = 12;
			Global_4456448.f_271[iVar0].f_1105[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_1123[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_1141[iVar1] = 100;
			Global_4456448.f_271[iVar0].f_13751[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_14003[iVar1] = 0f;
			Global_4456448.f_271[iVar0].f_1159[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_1177[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_1195[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_1213[iVar1] = 0f;
			Global_4456448.f_271[iVar0].f_1231[iVar1] = 0f;
			Global_4456448.f_271[iVar0].f_1249[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_1267[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_13710[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_1285[iVar1] = -2;
			Global_4456448.f_271[iVar0].f_1321[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_1339[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_4096[iVar1] = 1000;
			Global_4456448.f_271[iVar0].f_4096[iVar1].f_1 = 1,15f;
			Global_4456448.f_271[iVar0].f_4096[iVar1].f_2 = 25;
			Global_4456448.f_271[iVar0].f_4096[iVar1].f_7 = 0;
			Global_4456448.f_271[iVar0].f_4096[iVar1].f_3 = 1;
			Global_4456448.f_271[iVar0].f_4096[iVar1].f_5 = 25;
			Global_4456448.f_271[iVar0].f_4096[iVar1].f_6 = 10f;
			Global_4456448.f_271[iVar0].f_4096[iVar1].f_8 = 100;
			Global_4456448.f_271[iVar0].f_4455[iVar1] = 0f;
			Global_4456448.f_271[iVar0].f_4455[iVar1].f_1 = 1;
			Global_4456448.f_271[iVar0].f_4455[iVar1].f_2 = 50;
			Global_4456448.f_271[iVar0].f_4250[iVar1] = 0f;
			Global_4456448.f_271[iVar0].f_4250[iVar1].f_1[0] = 0f;
			Global_4456448.f_271[iVar0].f_4250[iVar1].f_1[1] = 0f;
			Global_4456448.f_271[iVar0].f_4250[iVar1].f_1[2] = 0f;
			Global_4456448.f_271[iVar0].f_4250[iVar1].f_1[3] = 0f;
			Global_4456448.f_271[iVar0].f_4250[iVar1].f_6 = 0f;
			Global_4456448.f_271[iVar0].f_4250[iVar1].f_7 = 0f;
			Global_4456448.f_271[iVar0].f_4250[iVar1].f_8 = 0f;
			Global_4456448.f_271[iVar0].f_4250[iVar1].f_9 = 0f;
			Global_4456448.f_271[iVar0].f_4250[iVar1].f_10 = 0f;
			Global_4456448.f_271[iVar0].f_4250[iVar1].f_11 = 0;
			Global_4456448.f_271[iVar0].f_4576[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_4576[iVar1].f_1 = 0;
			Global_4456448.f_271[iVar0].f_4576[iVar1].f_2 = 0;
			Global_4456448.f_271[iVar0].f_14297[iVar1] = 0;
			iVar125 = 0;
			iVar125 = 0;
			while (iVar125 <= 19)
			{
				Global_4456448.f_271[iVar0].f_4628[iVar1][iVar125] = 0;
				iVar125++;
			}
			iVar126 = 0;
			iVar126 = 0;
			while (iVar126 <= 2)
			{
				Global_4456448.f_271[iVar0].f_14967[iVar1][iVar126] = 0;
				iVar126++;
			}
			Global_4456448.f_271[iVar0].f_13769[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_13787[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_13805[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_13823[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_13841[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_13859[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_13877[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_13895[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_13913[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_13931[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_13949[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_13105[iVar1][0] = -1;
			Global_4456448.f_271[iVar0].f_13105[iVar1][1] = -1;
			Global_4456448.f_271[iVar0].f_13105[iVar1][2] = -1;
			Global_4456448.f_271[iVar0].f_13105[iVar1][3] = -1;
			Global_4456448.f_271[iVar0].f_13191[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_13209[iVar1][0] = -1;
			Global_4456448.f_271[iVar0].f_13209[iVar1][1] = -1;
			Global_4456448.f_271[iVar0].f_13209[iVar1][2] = -1;
			Global_4456448.f_271[iVar0].f_13278[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_13296[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_13314[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_6153[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_13584[iVar1] = 0;
			Global_4456448.f_271[iVar0].f_13602[iVar1] = -1;
			Global_4456448.f_271[iVar0].f_13620[iVar1] = 0;
			func_351(&(Global_4456448.f_271[iVar0].f_4507[iVar1]));
			iVar1++;
		}
		Global_4456448.f_271[iVar0].f_4988 = 0;
		Global_4456448.f_271[iVar0].f_5249 = 0;
		Global_4456448.f_271[iVar0].f_4987 = 0;
		Global_4456448.f_271[iVar0].f_5248 = 0;
		Global_4456448.f_271[iVar0].f_4989 = 0;
		Global_4456448.f_271[iVar0].f_4990 = 0;
		Global_4456448.f_271[iVar0].f_4991 = 0;
		Global_4456448.f_271[iVar0].f_4992 = 0;
		Global_4456448.f_271[iVar0].f_4993 = 0;
		Global_4456448.f_271[iVar0].f_5251 = 0;
		Global_4456448.f_271[iVar0].f_1519 = 0;
		Global_4456448.f_271[iVar0].f_1520 = 0;
		Global_4456448.f_271[iVar0].f_590 = -1;
		Global_4456448.f_271[iVar0].f_591 = -1;
		Global_4456448.f_271[iVar0].f_855 = -1;
		Global_4456448.f_271[iVar0].f_856 = -1;
		Global_4456448.f_271[iVar0].f_9758 = 0;
		Global_4456448.f_271[iVar0].f_9759 = 0;
		Global_4456448.f_271[iVar0].f_9760 = 0;
		Global_4456448.f_271[iVar0].f_9761 = 0;
		Global_4456448.f_271[iVar0].f_9762 = 0;
		Global_4456448.f_271[iVar0].f_9763 = 0;
		Global_4456448.f_271[iVar0].f_9764 = 0;
		Global_4456448.f_271[iVar0].f_9765 = 0;
		Global_4456448.f_271[iVar0].f_9766 = 0;
		Global_4456448.f_271[iVar0].f_9767 = 0;
		Global_4456448.f_271[iVar0].f_9768 = 0;
		Global_4456448.f_271[iVar0].f_9769 = 0;
		Global_4456448.f_271[iVar0].f_9770 = 0;
		Global_4456448.f_271[iVar0].f_9771 = 0;
		Global_4456448.f_271[iVar0].f_9772 = 0;
		Global_4456448.f_271[iVar0].f_9773 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_4456448.f_181643[iVar1][iVar0] = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_4456448.f_181671 = 0;
	Global_4456448.f_181672 = 0;
	Global_4456448.f_181673 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_4456448.f_181674[iVar0] = 0;
		Global_4456448.f_181695[iVar0] = 0;
		Global_4456448.f_181716[iVar0] = 0;
		Global_4456448.f_181737[iVar0] = 0;
		iVar3 = 0;
		while (iVar3 <= 19)
		{
			Global_4456448.f_181758[iVar0][iVar3] = 0;
			iVar3++;
		}
		iVar0++;
	}
	Global_4456448.f_244 = { 0f, 0f, 0f };
	Global_4456448.f_64859 = { 0f, 0f, 0f };
	Global_4456448.f_267 = 0f;
	Global_4456448.f_226003 = { 0f, 0f, 0f };
	Global_4456448.f_232885 = 0;
	Global_4456448.f_232908 = 0;
	Global_4456448.f_197223[0] = 0;
	Global_4456448.f_197223[1] = 0;
	Global_4456448.f_197227 = 0;
	Global_4456448.f_197222 = 0;
	Global_4456448.f_227330 = 0;
	Global_4456448.f_227331 = 0;
	Global_4456448.f_227332 = 0;
	Global_4456448.f_227333 = 0;
	Global_4456448.f_227335 = 0;
	Global_4456448.f_227337 = 0;
	Global_4456448.f_227339 = 0;
	Global_4456448.f_227342 = 0;
	Global_4456448.f_227343 = 0;
	Global_4456448.f_227344 = 0;
	Global_4456448.f_227345 = 0;
	Global_4456448.f_227346 = 0;
	Global_4456448.f_227347 = 0;
	Global_4456448.f_227348 = 0;
	Global_4456448.f_227349 = 0;
	Global_4456448.f_227355 = -1;
	Global_4456448.f_227356 = -1;
	Global_4456448.f_227357 = 1,5f;
	Global_4456448.f_70741 = 0;
	Global_4456448.f_70742 = 0;
	iVar0 = 0;
	while (iVar0 <= 101)
	{
		Global_4456448.f_65986[iVar0] = { 0f, 0f, 0f };
		Global_4456448.f_67828[iVar0] = { 0f, 0f, 0f };
		Global_4456448.f_64863[iVar0][0] = { 0f, 0f, 0f };
		Global_4456448.f_64863[iVar0][1] = { 0f, 0f, 0f };
		Global_4456448.f_64863[iVar0][2] = { 0f, 0f, 0f };
		Global_4456448.f_66705[iVar0][0] = { 0f, 0f, 0f };
		Global_4456448.f_66705[iVar0][1] = { 0f, 0f, 0f };
		Global_4456448.f_66705[iVar0][2] = { 0f, 0f, 0f };
		Global_4456448.f_66293[iVar0] = 0f;
		Global_4456448.f_68135[iVar0] = 0f;
		Global_4456448.f_69896[iVar0] = 1f;
		Global_4456448.f_66602[iVar0] = 1f;
		Global_4456448.f_69999[iVar0] = 1f;
		Global_4456448.f_70102[iVar0] = 0f;
		Global_4456448.f_70205[iVar0] = 0f;
		Global_4456448.f_68238[iVar0] = -1;
		Global_4456448.f_68341[iVar0] = 0;
		Global_4456448.f_69690[iVar0] = 0f;
		Global_4456448.f_68444[iVar0] = { 0f, 0f, 0f };
		Global_4456448.f_68751[iVar0] = { 0f, 0f, 0f };
		Global_4456448.f_69058[iVar0] = -1;
		Global_4456448.f_69161[iVar0] = 0;
		Global_4456448.f_69264[iVar0] = 0;
		Global_4456448.f_66396[iVar0] = 0;
		Global_4456448.f_66499[iVar0] = 0;
		Global_4456448.f_69470[iVar0] = -1;
		Global_4456448.f_69573[iVar0] = -1;
		iVar0++;
	}
	Global_4456448.f_75702 = 0;
	if (bParam0)
	{
		Global_4456448.f_75704 = 0;
		Global_4456448.f_75712 = 0;
		Global_4456448.f_233096 = 0;
		Global_4456448.f_233097 = 1;
	}
	Global_4456448.f_233098[0] = 1f;
	Global_4456448.f_233102[0] = 1,2f;
	Global_4456448.f_233106[0] = 0,8f;
	Global_4456448.f_233098[1] = 1f;
	Global_4456448.f_233102[1] = 1,7f;
	Global_4456448.f_233106[1] = 0,45f;
	Global_4456448.f_233098[2] = 1f;
	Global_4456448.f_233102[2] = 2,2f;
	Global_4456448.f_233106[2] = 0,05f;
	Global_4456448.f_233110 = 40f;
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		Global_4456448.f_69676[iVar0] = 0;
		iVar0++;
	}
	Global_4456448.f_75710 = 0;
	Global_4456448.f_75711 = 0;
	Global_4456448.f_78148 = 0f;
	Global_4456448.f_91960 = 0;
	iVar0 = 0;
	while (iVar0 <= 199)
	{
		Global_4456448.f_91961[iVar0] = { 0f, 0f, 0f };
		Global_4456448.f_91961[iVar0].f_6 = 0f;
		Global_4456448.f_91961[iVar0].f_7 = 0;
		Global_4456448.f_91961[iVar0].f_9 = -1;
		Global_4456448.f_91961[iVar0].f_8 = -1;
		Global_4456448.f_91961[iVar0].f_10 = 1;
		Global_4456448.f_91961[iVar0].f_21 = 0;
		Global_4456448.f_91961[iVar0].f_22 = 0;
		Global_4456448.f_91961[iVar0].f_12 = 0;
		Global_4456448.f_91961[iVar0].f_13 = 0;
		Global_4456448.f_91961[iVar0].f_14 = -1;
		Global_4456448.f_91961[iVar0].f_15 = 0;
		Global_4456448.f_91961[iVar0].f_16 = -1;
		Global_4456448.f_91961[iVar0].f_17 = -1;
		Global_4456448.f_91961[iVar0].f_11 = 0;
		Global_4456448.f_91961[iVar0].f_48 = 0;
		Global_4456448.f_91961[iVar0].f_49 = 0;
		Global_4456448.f_91961[iVar0].f_50 = 0;
		Global_4456448.f_91961[iVar0].f_18 = -1;
		Global_4456448.f_91961[iVar0].f_19 = -1;
		Global_4456448.f_91961[iVar0].f_20 = -1;
		Global_4456448.f_91961[iVar0].f_23 = -1;
		Global_4456448.f_91961[iVar0].f_51 = -1;
		Global_4456448.f_91961[iVar0].f_24 = -1;
		Global_4456448.f_91961[iVar0].f_25 = 0;
		Global_4456448.f_91961[iVar0].f_26 = 0;
		Global_4456448.f_91961[iVar0].f_27 = 1;
		Global_4456448.f_91961[iVar0].f_37 = 10f;
		Global_4456448.f_91961[iVar0].f_38 = -1;
		Global_4456448.f_91961[iVar0].f_67 = 0;
		Global_4456448.f_91961[iVar0].f_68 = 1;
		Global_4456448.f_91961[iVar0].f_71 = { 0f, 0f, 0f };
		Global_4456448.f_91961[iVar0].f_74 = 0f;
		Global_4456448.f_91961[iVar0].f_75 = -1;
		Global_4456448.f_91961[iVar0].f_76 = -1;
		Global_4456448.f_91961[iVar0].f_77 = 0f;
		Global_4456448.f_91961[iVar0].f_78 = 0f;
		Global_4456448.f_91961[iVar0].f_79 = -1;
		Global_4456448.f_91961[iVar0].f_69 = 0;
		Global_4456448.f_91961[iVar0].f_70 = -1;
		Global_4456448.f_91961[iVar0].f_80 = -1;
		Global_4456448.f_91961[iVar0].f_81 = 0;
		Global_4456448.f_91961[iVar0].f_55 = 0;
		Global_4456448.f_91961[iVar0].f_82 = 0;
		Global_4456448.f_91961[iVar0].f_83 = 0;
		func_241(&(Global_4456448.f_91961[iVar0].f_105), 0);
		iVar3 = 0;
		while (iVar3 <= 19)
		{
			Global_4456448.f_91961[iVar0].f_84[iVar3] = 0;
			iVar3++;
		}
		iVar0++;
	}
	func_349();
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_347(&(Global_4456448.f_230350[iVar0]));
		iVar0++;
	}
	Global_4456448.f_232831 = 0;
	Global_4456448.f_113488 = 0;
	Global_4456448.f_113489 = 0;
	Var127.f_2.f_2 = 1065353216;
	Var127.f_2.f_3 = 1077936128;
	Var127.f_2.f_4 = 1082130432;
	Var127.f_2.f_5 = 1077936128;
	Var127.f_2.f_6 = -1;
	Var127.f_2.f_7 = -1;
	Var127.f_2.f_8 = -1;
	Global_4456448.f_116691.f_63 = { Var127 };
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_4456448.f_113490[iVar0] = { 0f, 0f, 0f };
		Global_4456448.f_113490[iVar0].f_6 = 0f;
		Global_4456448.f_113490[iVar0].f_7 = 0;
		Global_4456448.f_113490[iVar0].f_8 = -1;
		Global_4456448.f_113490[iVar0].f_12 = -1;
		Global_4456448.f_113490[iVar0].f_11 = -1;
		Global_4456448.f_113490[iVar0].f_13 = 1;
		Global_4456448.f_113490[iVar0].f_18 = 0;
		Global_4456448.f_113490[iVar0].f_31 = 0;
		Global_4456448.f_113490[iVar0].f_14 = 0;
		Global_4456448.f_113490[iVar0].f_28 = 0;
		Global_4456448.f_113490[iVar0].f_29 = 0;
		Global_4456448.f_113490[iVar0].f_30 = 0;
		Global_4456448.f_113490[iVar0].f_15 = -1;
		Global_4456448.f_113490[iVar0].f_16 = -1;
		Global_4456448.f_113490[iVar0].f_17 = -1;
		Global_4456448.f_113490[iVar0].f_9 = 0;
		Global_4456448.f_113490[iVar0].f_10 = 1;
		Global_4456448.f_113490[iVar0].f_34 = 0;
		Global_4456448.f_113490[iVar0].f_33 = 0;
		Global_4456448.f_113490[iVar0].f_36 = -1;
		Global_4456448.f_113490[iVar0].f_37 = -1;
		Global_4456448.f_113490[iVar0].f_38 = -1;
		Global_4456448.f_113490[iVar0].f_39 = -1;
		func_241(&(Global_4456448.f_113490[iVar0].f_98), 0);
		func_346(&(Global_4456448.f_113490[iVar0].f_40));
		Global_4456448.f_113490[iVar0].f_63 = { Var127 };
		Global_4456448.f_113490[iVar0].f_74 = 0;
		Global_4456448.f_113490[iVar0].f_75 = 0;
		Global_4456448.f_113490[iVar0].f_76 = 0;
		iVar3 = 0;
		while (iVar3 <= 19)
		{
			Global_4456448.f_113490[iVar0].f_77[iVar3] = 0;
			iVar3++;
		}
		iVar0++;
	}
	func_344();
	Global_4456448.f_90439 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_343(&(Global_4456448.f_90440[iVar0]));
		iVar0++;
	}
	Global_4456448.f_91817 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_4456448.f_91818[iVar0] = { 0f, 0f, 0f };
		Global_4456448.f_91818[iVar0].f_3 = 0f;
		Global_4456448.f_91818[iVar0].f_4 = 0;
		Global_4456448.f_91818[iVar0].f_5 = 0;
		Global_4456448.f_91818[iVar0].f_6 = 0;
		iVar0++;
	}
	if (bParam0)
	{
		Global_4456448.f_78149 = 3,5f;
		Global_4456448.f_78150 = 7f;
		Global_4456448.f_78151 = 0f;
		Global_4456448.f_78152 = 0f;
		Global_4456448.f_78143 = 0;
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			Global_4456448.f_78156[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_4456448.f_78204[iVar0] = -1;
			Global_4456448.f_78209[iVar0] = -1;
			Global_4456448.f_78214[iVar0] = -1;
			Global_4456448.f_78219[iVar0] = 1001;
			iVar0++;
		}
	}
	Global_4456448.f_197261 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_75691[iVar0] = 0;
		Global_4456448.f_208077[iVar0] = -1;
		Global_4456448.f_208154[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_4456448.f_75197[iVar1][iVar0] = 0;
			Global_4456448.f_75197[iVar1].f_5[iVar0] = 99999;
			Global_4456448.f_75197[iVar1].f_10[iVar0] = 0;
			Global_4456448.f_75197[iVar1].f_15[iVar0] = 0;
			Global_4456448.f_75197[iVar1].f_20[iVar0] = 0;
			iVar1++;
		}
		Global_4456448.f_226418[iVar0] = 0;
		Global_4456448.f_226423[iVar0] = 1f;
		Global_4456448.f_233907[iVar0] = -1;
		Global_4456448.f_78230[iVar0] = -1;
		iVar0++;
	}
	if (bParam0)
	{
		Global_4456448.f_78235 = 1;
	}
	Global_4456448.f_78237 = 5000;
	Global_4456448.f_78238 = -1;
	Global_4456448.f_78239 = 0;
	Global_4456448.f_78240 = 0;
	Global_4456448.f_78241 = 0;
	Global_4456448.f_86755.f_165 = { Var127 };
	Var138 = -1;
	Var138.f_1 = -1;
	Var138.f_2 = -1;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_4456448.f_78242[iVar0] = { 0f, 0f, 0f };
		Global_4456448.f_78242[iVar0].f_4 = { 0f, 0f, 0f };
		Global_4456448.f_78242[iVar0].f_3 = 0f;
		Global_4456448.f_78242[iVar0].f_7 = 50f;
		Global_4456448.f_78242[iVar0].f_8 = 0f;
		Global_4456448.f_78242[iVar0].f_9 = 0;
		Global_4456448.f_78242[iVar0].f_10 = -1;
		Global_4456448.f_78242[iVar0].f_11 = { 0f, 0f, 0f };
		Global_4456448.f_78242[iVar0].f_14 = 0f;
		Global_4456448.f_78242[iVar0].f_15 = 0;
		Global_4456448.f_78242[iVar0].f_26 = 0;
		func_346(&(Global_4456448.f_78242[iVar0].f_30));
		Global_4456448.f_78242[iVar0].f_30.f_4 = 0,8f;
		Global_4456448.f_78242[iVar0].f_53 = -1;
		Global_4456448.f_78242[iVar0].f_87 = -1;
		Global_4456448.f_78242[iVar0].f_88 = 0;
		Global_4456448.f_78242[iVar0].f_83 = 0;
		Global_4456448.f_78242[iVar0].f_84 = 0;
		Global_4456448.f_78242[iVar0].f_85 = 0;
		Global_4456448.f_78242[iVar0].f_86 = 0;
		Global_4456448.f_78242[iVar0].f_89 = 0;
		Global_4456448.f_78242[iVar0].f_90 = 0;
		Global_4456448.f_78242[iVar0].f_91 = 0;
		Global_4456448.f_78242[iVar0].f_92 = 0;
		Global_4456448.f_78242[iVar0].f_93 = 60;
		Global_4456448.f_78242[iVar0].f_94 = 0;
		Global_4456448.f_78242[iVar0].f_27 = 0;
		Global_4456448.f_78242[iVar0].f_28 = 0;
		Global_4456448.f_78242[iVar0].f_29 = -1;
		Global_4456448.f_78242[iVar0].f_206 = -1;
		Global_4456448.f_78242[iVar0].f_207 = -1;
		Global_4456448.f_78242[iVar0].f_208 = 0;
		Global_4456448.f_78242[iVar0].f_101 = -1;
		Global_4456448.f_78242[iVar0].f_99 = 0;
		Global_4456448.f_78242[iVar0].f_100 = -1;
		Global_4456448.f_78242[iVar0].f_102 = -1;
		StringCopy(&(Global_4456448.f_78242[iVar0].f_103), "", 16);
		Global_4456448.f_78242[iVar0].f_77 = 0;
		Global_4456448.f_78242[iVar0].f_162 = 0;
		Global_4456448.f_78242[iVar0].f_112 = -1;
		Global_4456448.f_78242[iVar0].f_108 = -1;
		Global_4456448.f_78242[iVar0].f_116 = 0;
		Global_4456448.f_78242[iVar0].f_120 = -1;
		Global_4456448.f_78242[iVar0].f_124 = -1;
		Global_4456448.f_78242[iVar0].f_113 = -1;
		Global_4456448.f_78242[iVar0].f_109 = -1;
		Global_4456448.f_78242[iVar0].f_117 = 0;
		Global_4456448.f_78242[iVar0].f_121 = -1;
		Global_4456448.f_78242[iVar0].f_125 = -1;
		Global_4456448.f_78242[iVar0].f_114 = -1;
		Global_4456448.f_78242[iVar0].f_110 = -1;
		Global_4456448.f_78242[iVar0].f_118 = 0;
		Global_4456448.f_78242[iVar0].f_122 = -1;
		Global_4456448.f_78242[iVar0].f_126 = -1;
		Global_4456448.f_78242[iVar0].f_115 = -1;
		Global_4456448.f_78242[iVar0].f_111 = -1;
		Global_4456448.f_78242[iVar0].f_119 = 0;
		Global_4456448.f_78242[iVar0].f_123 = -1;
		Global_4456448.f_78242[iVar0].f_127 = -1;
		Global_4456448.f_78242[iVar0].f_107 = 0;
		Global_4456448.f_78242[iVar0].f_54 = 0;
		Global_4456448.f_78242[iVar0].f_55 = 0;
		iVar3 = 0;
		while (iVar3 <= 19)
		{
			Global_4456448.f_78242[iVar0].f_56[iVar3] = 0;
			iVar3++;
		}
		Global_4456448.f_78242[iVar0].f_95 = -1;
		Global_4456448.f_78242[iVar0].f_96 = -1;
		Global_4456448.f_78242[iVar0].f_97 = -1;
		Global_4456448.f_78242[iVar0].f_150 = -1;
		Global_4456448.f_78242[iVar0].f_151 = -1;
		Global_4456448.f_78242[iVar0].f_152 = { 0f, 0f, 0f };
		Global_4456448.f_78242[iVar0].f_155 = 0;
		Global_4456448.f_78242[iVar0].f_148 = -1;
		Global_4456448.f_78242[iVar0].f_149 = -1;
		Global_4456448.f_78242[iVar0].f_156 = -1;
		Global_4456448.f_78242[iVar0].f_163 = 1000;
		Global_4456448.f_78242[iVar0].f_161 = 1;
		Global_4456448.f_78242[iVar0].f_165 = { Var127 };
		Global_4456448.f_78242[iVar0].f_176 = 5f;
		Global_4456448.f_78242[iVar0].f_179 = 0f;
		Global_4456448.f_78242[iVar0].f_164 = 0f;
		Global_4456448.f_78242[iVar0].f_177 = -1;
		Global_4456448.f_78242[iVar0].f_178 = -1;
		Global_4456448.f_78242[iVar0].f_180 = { 0f, 0f, 0f };
		StringCopy(&(Global_4456448.f_78242[iVar0].f_183), "", 64);
		Global_4456448.f_78242[iVar0].f_199 = -1;
		Global_4456448.f_78242[iVar0].f_200 = -1;
		Global_4456448.f_78242[iVar0].f_201 = -1;
		Global_4456448.f_78242[iVar0].f_202 = -1;
		Global_4456448.f_78242[iVar0].f_203 = -1;
		Global_4456448.f_78242[iVar0].f_204 = 0;
		Global_4456448.f_78242[iVar0].f_205 = 0;
		Global_4456448.f_78242[iVar0].f_209 = -1;
		Global_4456448.f_78242[iVar0].f_210 = -1;
		Global_4456448.f_78242[iVar0].f_211 = -1;
		Global_4456448.f_78242[iVar0].f_213 = 4;
		Global_4456448.f_78242[iVar0].f_214 = 4;
		Global_4456448.f_78242[iVar0].f_215 = 0,5f;
		Global_4456448.f_78242[iVar0].f_216 = 0,5f;
		Global_4456448.f_78242[iVar0].f_217 = 0,5f;
		Global_4456448.f_78242[iVar0].f_218 = 0,5f;
		Global_4456448.f_78242[iVar0].f_219 = -1;
		Global_4456448.f_78242[iVar0].f_220 = 0;
		Global_4456448.f_78242[iVar0].f_212 = 4;
		Global_4456448.f_78242[iVar0].f_259 = { Var138 };
		iVar143 = 0;
		iVar143 = 0;
		while (iVar143 <= 8)
		{
			Global_4456448.f_78242[iVar0].f_221[iVar143] = { 0f, 0f, 0f };
			Global_4456448.f_78242[iVar0].f_249[iVar143] = 0f;
			iVar143++;
		}
		func_342(&(Global_4456448.f_78242[iVar0].f_138));
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_4456448.f_78242[iVar0].f_16[iVar1] = 0;
			Global_4456448.f_78242[iVar0].f_21[iVar1] = 99999;
			Global_4456448.f_78242[iVar0].f_128[iVar1] = 0;
			Global_4456448.f_78242[iVar0].f_133[iVar1] = 0;
			iVar1++;
		}
		func_241(&(Global_4456448.f_78242[iVar0].f_264), 0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		StringCopy(&(Global_4456448.f_226066[iVar0]), "", 64);
		Global_4456448.f_226066[iVar0].f_16 = 0;
		Global_4456448.f_226066[iVar0].f_17 = -1;
		iVar0++;
	}
	Global_4456448.f_116791 = 0;
	Global_4456448.f_116792 = 0;
	if (bParam0)
	{
		if (func_135(1) && !func_206())
		{
			Global_4456448.f_116793 = -1;
		}
		else
		{
			Global_4456448.f_116793 = 0;
		}
	}
	Global_4456448.f_116794 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_4456448.f_116800[iVar0] = { 0f, 0f, 0f };
		Global_4456448.f_116800[iVar0].f_3 = { 0f, 0f, 0f };
		Global_4456448.f_116800[iVar0].f_15 = 76;
		Global_4456448.f_116800[iVar0].f_6 = 0;
		Global_4456448.f_116800[iVar0].f_7 = 0;
		Global_4456448.f_116800[iVar0].f_23 = -1;
		Global_4456448.f_116800[iVar0].f_24 = -1;
		Global_4456448.f_116800[iVar0].f_9 = 1f;
		Global_4456448.f_116800[iVar0].f_26 = -1;
		Global_4456448.f_116800[iVar0].f_27 = -1;
		Global_4456448.f_116800[iVar0].f_28 = 0;
		Global_4456448.f_116800[iVar0].f_35 = -1;
		Global_4456448.f_116800[iVar0].f_32 = -1;
		Global_4456448.f_116800[iVar0].f_38 = 0;
		Global_4456448.f_116800[iVar0].f_36 = -1;
		Global_4456448.f_116800[iVar0].f_33 = -1;
		Global_4456448.f_116800[iVar0].f_39 = 0;
		Global_4456448.f_116800[iVar0].f_37 = -1;
		Global_4456448.f_116800[iVar0].f_34 = -1;
		Global_4456448.f_116800[iVar0].f_40 = 0;
		Global_4456448.f_116800[iVar0].f_29 = -1;
		Global_4456448.f_116800[iVar0].f_30 = -1;
		Global_4456448.f_116800[iVar0].f_31 = 0;
		Global_4456448.f_116800[iVar0].f_41 = 0;
		Global_4456448.f_116800[iVar0].f_42 = 0;
		Global_4456448.f_116800[iVar0].f_43 = 0;
		Global_4456448.f_116800[iVar0].f_44 = 0;
		Global_4456448.f_116800[iVar0].f_45 = 0;
		Global_4456448.f_116800[iVar0].f_46 = 0;
		Global_4456448.f_116800[iVar0].f_47 = 0;
		iVar3 = 0;
		while (iVar3 <= 19)
		{
			Global_4456448.f_116800[iVar0].f_48[iVar3] = 0;
			iVar3++;
		}
		Global_4456448.f_116800[iVar0].f_69 = 0;
		Global_4456448.f_116800[iVar0].f_92 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_4456448.f_116800[iVar0].f_10[iVar1] = 0;
			iVar1++;
		}
		Global_4456448.f_116800[iVar0].f_116 = -1;
		func_346(&(Global_4456448.f_116800[iVar0].f_93));
		func_241(&(Global_4456448.f_116800[iVar0].f_117), 0);
		iVar0++;
	}
	func_340();
	Global_4456448.f_233450 = 0;
	Global_4456448.f_233450.f_1 = 0;
	Global_4456448.f_233450.f_2 = 0;
	Global_4456448.f_233450.f_3 = 0;
	Global_4456448.f_233450.f_4 = 0;
	func_339();
	Global_4456448.f_233444 = -1;
	Global_4456448.f_233445 = 0;
	Global_4456448.f_233447 = 0;
	Global_4456448.f_233446 = -1;
	Global_4456448.f_233455 = -1;
	Global_4456448.f_78078 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_4456448.f_181664[iVar0] = -1;
		iVar0++;
	}
	Global_4456448.f_197275 = -1;
	Global_4456448.f_197276 = 15;
	Global_4456448.f_197277 = -1;
	Global_4456448.f_197282 = -1;
	Global_4456448.f_197283 = 0;
	Global_4456448.f_197278 = 2,5f;
	Global_4456448.f_197279 = 8f;
	Global_4456448.f_197280 = 2,5f;
	Global_4456448.f_197281 = 8f;
	Global_4456448.f_124061 = 0;
	Global_4456448.f_91959 = 0;
	if (bParam0)
	{
		Global_4456448.f_78155 = -1;
		Global_4456448.f_75708 = -1;
	}
	Global_4456448.f_124062 = 0;
	Global_4456448.f_124063 = 0;
	Global_4456448.f_124064 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_338(&(Global_4456448.f_124065[iVar0]));
		iVar0++;
	}
	Var144.f_1 = -1;
	Var144.f_2 = -1;
	Var144.f_3 = -1;
	Var144.f_4 = -1;
	Var144.f_5 = -1;
	Var144.f_6 = -1;
	Var144.f_7 = -1;
	Var144.f_8 = -1;
	Var144.f_9 = -1;
	Var144.f_10 = -1;
	Var144.f_11 = -1;
	Var144.f_12 = -1;
	Var144.f_13 = -1;
	Var144.f_14 = -1;
	Var144.f_15 = -1;
	Var144.f_16 = -1;
	Var144.f_17 = -1;
	Var144.f_18 = -1;
	Var144.f_19 = -1;
	Var144.f_20 = -1;
	Var144.f_21 = -1;
	Var144.f_22 = -1;
	Var144.f_23 = -1;
	Var144.f_24 = -1;
	Var144.f_25 = -1;
	Var144.f_26 = -1;
	Var144.f_27 = -1;
	Var144.f_28 = -1;
	Var144.f_29 = -1;
	Var144.f_30 = -1;
	Var144.f_31 = -1;
	Var144.f_32 = -1;
	Var144.f_33 = -1;
	Var144.f_34 = -1;
	Var144.f_35 = -1;
	Var144.f_36 = -1;
	Var144.f_37 = -1;
	Var144.f_38 = -1;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_4456448.f_134877[iVar0] = { Var144 };
		iVar0++;
	}
	Global_4456448.f_194129 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_4456448.f_194130[iVar0] = { 0f, 0f, 0f };
		Global_4456448.f_194130[iVar0].f_3 = { 0f, 0f, 0f };
		Global_4456448.f_194130[iVar0].f_6 = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_4456448.f_182500 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_4456448.f_182507[iVar0] = { 0f, 0f, 0f };
		Global_4456448.f_182507[iVar0].f_3 = 0f;
		Global_4456448.f_182507[iVar0].f_4 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_4456448.f_194818[iVar0] = { 0f, 0f, 0f };
		Global_4456448.f_194818[iVar0].f_3 = 0f;
		Global_4456448.f_194818[iVar0].f_4 = 0;
		Global_4456448.f_194818[iVar0].f_5 = 0;
		Global_4456448.f_194818[iVar0].f_6 = 0;
		Global_4456448.f_194818[iVar0].f_7 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_182501[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 59)
		{
			Global_4456448.f_183948[iVar0][iVar1] = { 0f, 0f, 0f };
			Global_4456448.f_183948[iVar0][iVar1].f_3 = 0f;
			Global_4456448.f_183948[iVar0][iVar1].f_4 = 0;
			Global_4456448.f_183948[iVar0][iVar1].f_5 = 0;
			Global_4456448.f_183948[iVar0][iVar1].f_7 = -1;
			Global_4456448.f_183948[iVar0][iVar1].f_8 = 0;
			Global_4456448.f_183948[iVar0][iVar1].f_9 = -1;
			Global_4456448.f_183948[iVar0][iVar1].f_10 = -1;
			Global_4456448.f_183948[iVar0][iVar1].f_11 = -1;
			Global_4456448.f_183948[iVar0][iVar1].f_12 = 0;
			Global_4456448.f_183948[iVar0][iVar1].f_13 = 0;
			Global_4456448.f_183948[iVar0][iVar1].f_14 = 0;
			Global_4456448.f_183948[iVar0][iVar1].f_15 = 0;
			Global_4456448.f_183948[iVar0][iVar1].f_16 = 0;
			Global_4456448.f_183948[iVar0][iVar1].f_17 = -2;
			Global_4456448.f_183948[iVar0][iVar1].f_18 = 0;
			Global_4456448.f_183948[iVar0][iVar1].f_19 = -1;
			Global_4456448.f_183948[iVar0][iVar1].f_20 = -1;
			Global_4456448.f_183948[iVar0][iVar1].f_21 = 0;
			func_241(&(Global_4456448.f_183948[iVar0][iVar1].f_22), 0);
			iVar1++;
		}
		iVar0++;
	}
	Global_4456448.f_135142 = 0;
	Global_4456448.f_135146 = 0;
	Global_4456448.f_135147 = 0;
	Global_4456448.f_135144 = 50;
	iVar0 = 0;
	while (iVar0 <= 79)
	{
		func_337(&(Global_4456448.f_135148[iVar0]));
		iVar0++;
	}
	Global_4456448.f_182500 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_4456448.f_182507[iVar0] = { 0f, 0f, 0f };
		Global_4456448.f_182507[iVar0].f_3 = 0f;
		Global_4456448.f_182507[iVar0].f_4 = 0;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		Global_4456448.f_75697[iVar1] = 0;
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_4456448.f_70744[iVar0].f_74 = 0;
		Global_4456448.f_70744[iVar0].f_19 = 0f;
		Global_4456448.f_70744[iVar0].f_50 = 0f;
		Global_4456448.f_70744[iVar0].f_51 = 0f;
		Global_4456448.f_70744[iVar0].f_52 = 0f;
		Global_4456448.f_70744[iVar0].f_80 = 0f;
		Global_4456448.f_70744[iVar0].f_81 = 0f;
		Global_4456448.f_70744[iVar0] = 0;
		Global_4456448.f_70744[iVar0].f_43 = { 0f, 0f, 0f };
		Global_4456448.f_70744[iVar0].f_46 = { 0f, 0f, 0f };
		Global_4456448.f_70744[iVar0].f_49 = 1f;
		Global_4456448.f_70744[iVar0].f_126 = 10,5f;
		Global_4456448.f_70744[iVar0].f_128 = 1f;
		Global_4456448.f_70744[iVar0].f_129 = 0f;
		Global_4456448.f_70744[iVar0].f_130 = -1;
		Global_4456448.f_70744[iVar0].f_131 = 0f;
		Global_4456448.f_70744[iVar0].f_132 = 0;
		Global_4456448.f_70744[iVar0].f_125 = 0;
		Global_4456448.f_70744[iVar0].f_75 = 0;
		Global_4456448.f_70744[iVar0].f_76 = 0;
		Global_4456448.f_70744[iVar0].f_77 = 0;
		Global_4456448.f_70744[iVar0].f_78 = -1;
		Global_4456448.f_70744[iVar0].f_79 = -1;
		func_346(&(Global_4456448.f_70744[iVar0].f_20));
		Global_4456448.f_70744[iVar0].f_133 = -1;
		Global_4456448.f_70744[iVar0].f_134 = -1f;
		Global_4456448.f_70744[iVar0].f_135 = 0f;
		Global_4456448.f_70744[iVar0].f_136 = 0f;
		Global_4456448.f_70744[iVar0].f_137 = -1;
		Global_4456448.f_70744[iVar0].f_139 = -1;
		Global_4456448.f_70744[iVar0].f_140 = -1;
		Global_4456448.f_70744[iVar0].f_141 = -1;
		Global_4456448.f_70744[iVar0].f_142 = 0;
		Global_4456448.f_70744[iVar0].f_166 = 5;
		Global_4456448.f_70744[iVar0].f_167 = -1;
		Global_4456448.f_70744[iVar0].f_168 = -1;
		Global_4456448.f_70744[iVar0].f_169 = -1;
		Global_4456448.f_70744[iVar0].f_170 = 0;
		Global_4456448.f_70744[iVar0].f_143 = 0;
		Global_4456448.f_70744[iVar0].f_144 = 0;
		iVar3 = 0;
		while (iVar3 <= 19)
		{
			Global_4456448.f_70744[iVar0].f_145[iVar3] = 0;
			iVar3++;
		}
		Global_4456448.f_70744[iVar0].f_68 = 0;
		iVar183 = 0;
		iVar183 = 0;
		while (iVar183 <= 8)
		{
			Global_4456448.f_70744[iVar0].f_171[iVar183] = { 0f, 0f, 0f };
			Global_4456448.f_70744[iVar0].f_199[iVar183] = 0f;
			iVar183++;
		}
		func_342(&(Global_4456448.f_70744[iVar0].f_117));
		if (Global_4456448.f_70744[iVar0].f_138 != 0)
		{
			unk_0xE223EB8FE6F8CC15(Global_4456448.f_70744[iVar0].f_138);
			Global_4456448.f_70744[iVar0].f_138 = 0;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_4456448.f_70744[iVar0].f_1[iVar1] = { 0f, 0f, 0f };
			Global_4456448.f_70744[iVar0].f_14[iVar1] = 0f;
			Global_4456448.f_70744[iVar0].f_58[iVar1] = 0;
			Global_4456448.f_70744[iVar0].f_63[iVar1] = 0;
			Global_4456448.f_70744[iVar0].f_53[iVar1] = 0;
			Global_4456448.f_70744[iVar0].f_87[iVar1] = 0;
			Global_4456448.f_70744[iVar0].f_92[iVar1] = 99999;
			Global_4456448.f_70744[iVar0].f_97[iVar1] = 0;
			Global_4456448.f_70744[iVar0].f_102[iVar1] = 0;
			Global_4456448.f_70744[iVar0].f_82[iVar1] = 0;
			Global_4456448.f_70744[iVar0].f_107[iVar1] = 0;
			Global_4456448.f_70744[iVar0].f_112[iVar1] = 0;
			iVar1++;
		}
		Global_4456448.f_70744[iVar0].f_209 = -1;
		func_241(&(Global_4456448.f_70744[iVar0].f_210), 0);
		iVar0++;
	}
	Global_4456448.f_194127 = 0;
	Global_4456448.f_219 = 0;
	Global_4456448.f_229397 = 12;
	Global_4456448.f_229398 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_226007[iVar0] = -1;
		Global_4456448.f_226012[iVar0] = -1;
		iVar0++;
	}
	Global_4456448.f_78236 = 0;
	Global_4456448.f_227350 = -1;
	Global_4456448.f_226017 = 0;
	Global_4456448.f_226006 = 0;
	Global_4456448.f_226019 = 0;
	Global_4456448.f_226020 = 0;
	Global_4456448.f_226021 = 0;
	Global_4456448.f_226018 = 0;
	Global_4456448.f_226025 = 0;
	Global_4456448.f_226022 = 1;
	Global_4456448.f_226023 = 0;
	Global_4456448.f_226024 = 0;
	Global_4456448.f_226026 = 1;
	Global_4456448.f_226026.f_1 = 0;
	Global_4456448.f_226026.f_2 = 4;
	Global_4456448.f_226026.f_29[0] = 0;
	Global_4456448.f_226026.f_29[1] = 0;
	Global_4456448.f_226026.f_29[2] = 0;
	Global_4456448.f_226026.f_29[3] = 0;
	Global_4456448.f_226026.f_34[0] = 0;
	Global_4456448.f_226026.f_34[1] = 0;
	Global_4456448.f_226026.f_34[2] = 0;
	Global_4456448.f_226026.f_34[3] = 0;
	Global_4456448.f_226026.f_3 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_226026.f_4[iVar0] = 0;
		Global_4456448.f_226026.f_9[iVar0] = 0;
		Global_4456448.f_226026.f_14[iVar0] = 0;
		Global_4456448.f_226026.f_19[iVar0] = 0;
		Global_4456448.f_226026.f_24[iVar0] = 0;
		iVar0++;
	}
	Global_4456448.f_226065 = 5;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_197234[iVar0] = 0;
		Global_4456448.f_63195[iVar0] = 0;
		Global_4456448.f_63200[iVar0] = 0;
		Global_4456448.f_233962[iVar0] = 0f;
		iVar0++;
	}
	func_334();
	Global_4456448.f_232884 = -1;
	iVar184 = 0;
	while (iVar184 <= 29)
	{
		Global_4456448.f_190103[iVar184] = -1;
		Global_4456448.f_190072[iVar184] = -1;
		iVar185 = 0;
		while (iVar185 <= 12)
		{
			iVar186 = 0;
			while (iVar186 <= 3)
			{
				Global_4456448.f_190134[iVar184][iVar185][iVar186] = -1;
				Global_4456448.f_192115[iVar184][iVar185][iVar186] = -1;
				iVar186++;
			}
			iVar185++;
		}
		iVar184++;
	}
	Global_4456448.f_233070 = 0;
	Global_4456448.f_233081 = { 0f, 0f, 0f };
	Global_4456448.f_233084 = { 0f, 0f, 0f };
	Global_4456448.f_233960 = 0;
	Global_4456448.f_234124 = 0;
	Global_4456448.f_233961 = 20;
	Global_4456448.f_233995 = 500;
	Global_4456448.f_233996 = 10f;
	Global_4456448.f_233997 = 0,5f;
	Global_4456448.f_233998 = 1f;
	Global_4456448.f_233999 = 0f;
	Global_4456448.f_234000 = 25f;
	Global_4456448.f_234001 = 15f;
	Global_4456448.f_234002 = 6f;
	Global_4456448.f_234003 = 4f;
	Global_4456448.f_234004 = 10;
	Global_4456448.f_234005 = 1;
	Global_4456448.f_234006 = 0f;
	func_293();
	func_333(&(Global_4456448.f_238416));
	func_332(&(Global_4456448.f_238430));
	Global_4456448.f_234007 = 0,5f;
	Global_4456448.f_234123 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_4456448.f_234125[iVar0] = 6;
		iVar0++;
	}
	Global_4456448.f_234158 = 0;
	iVar186 = 0;
	while (iVar186 <= 4)
	{
		Global_4456448.f_234161[iVar186] = { 0f, 0f, 0f };
		Global_4456448.f_234177[iVar186] = 0f;
		Global_4456448.f_234183[iVar186] = { 0f, 0f, 0f };
		Global_4456448.f_234199[iVar186] = 0f;
		iVar186++;
	}
	Global_4456448.f_238797[0] = 1,25f;
	Global_4456448.f_238797[1] = 1f;
	Global_4456448.f_238800 = 10;
	Global_4456448.f_238801 = 6000;
	Global_4456448.f_238802 = 10000;
	Global_4456448.f_234206 = 0;
	Global_4456448.f_234207 = 0;
	Global_4456448.f_234208 = 0f;
	Global_4456448.f_234209 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		Global_4456448.f_234109[iVar0] = 0;
		iVar0++;
	}
	Global_4456448.f_234107 = 12;
	Global_4456448.f_234108 = 3;
	Global_4456448.f_234211 = 0;
	Global_4456448.f_234212 = 30;
	Global_4456448.f_234213 = 2,5f;
	Var187.f_2 = 5;
	Var187.f_2.f_1.f_1 = -1;
	Var187.f_2.f_1.f_13 = 1092616192;
	Var187.f_2.f_1.f_14 = 1092616192;
	Var187.f_2.f_1.f_15 = 1101004800;
	Var187.f_2.f_1.f_16 = 1077936128;
	Var187.f_2.f_1.f_17 = 1119092736;
	Var187.f_2.f_1.f_18 = 1077936128;
	Var187.f_2.f_1.f_19 = 1065353216;
	Var187.f_2.f_1.f_20.f_1 = -1;
	Var187.f_2.f_1.f_20.f_13 = 1092616192;
	Var187.f_2.f_1.f_20.f_14 = 1092616192;
	Var187.f_2.f_1.f_20.f_15 = 1101004800;
	Var187.f_2.f_1.f_20.f_16 = 1077936128;
	Var187.f_2.f_1.f_20.f_17 = 1119092736;
	Var187.f_2.f_1.f_20.f_18 = 1077936128;
	Var187.f_2.f_1.f_20.f_19 = 1065353216;
	Var187.f_2.f_1.f_20.f_20.f_1 = -1;
	Var187.f_2.f_1.f_20.f_20.f_13 = 1092616192;
	Var187.f_2.f_1.f_20.f_20.f_14 = 1092616192;
	Var187.f_2.f_1.f_20.f_20.f_15 = 1101004800;
	Var187.f_2.f_1.f_20.f_20.f_16 = 1077936128;
	Var187.f_2.f_1.f_20.f_20.f_17 = 1119092736;
	Var187.f_2.f_1.f_20.f_20.f_18 = 1077936128;
	Var187.f_2.f_1.f_20.f_20.f_19 = 1065353216;
	Var187.f_2.f_1.f_20.f_20.f_20.f_1 = -1;
	Var187.f_2.f_1.f_20.f_20.f_20.f_13 = 1092616192;
	Var187.f_2.f_1.f_20.f_20.f_20.f_14 = 1092616192;
	Var187.f_2.f_1.f_20.f_20.f_20.f_15 = 1101004800;
	Var187.f_2.f_1.f_20.f_20.f_20.f_16 = 1077936128;
	Var187.f_2.f_1.f_20.f_20.f_20.f_17 = 1119092736;
	Var187.f_2.f_1.f_20.f_20.f_20.f_18 = 1077936128;
	Var187.f_2.f_1.f_20.f_20.f_20.f_19 = 1065353216;
	Var187.f_2.f_1.f_20.f_20.f_20.f_20.f_1 = -1;
	Var187.f_2.f_1.f_20.f_20.f_20.f_20.f_13 = 1092616192;
	Var187.f_2.f_1.f_20.f_20.f_20.f_20.f_14 = 1092616192;
	Var187.f_2.f_1.f_20.f_20.f_20.f_20.f_15 = 1101004800;
	Var187.f_2.f_1.f_20.f_20.f_20.f_20.f_16 = 1077936128;
	Var187.f_2.f_1.f_20.f_20.f_20.f_20.f_17 = 1119092736;
	Var187.f_2.f_1.f_20.f_20.f_20.f_20.f_18 = 1077936128;
	Var187.f_2.f_1.f_20.f_20.f_20.f_20.f_19 = 1065353216;
	Var187.f_103.f_5 = 1117782016;
	Var187.f_103.f_6 = 2;
	Var187.f_103.f_13 = 1112014848;
	Global_4456448.f_237025 = { Var187 };
	Var304.f_16 = -1;
	iVar328 = 0;
	while (iVar328 <= 1)
	{
		Global_4456448.f_238365[iVar328] = { Var304 };
		iVar328++;
	}
	Global_4456448.f_238794 = 60000;
	Global_4456448.f_238794.f_1 = 35;
	Global_4456448.f_195352 = 0;
	Global_4456448.f_195353 = 0;
	Global_4456448.f_195354 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_4456448.f_195355[iVar0] = 0;
		Global_4456448.f_195376[iVar0] = -1;
		iVar0++;
	}
	Global_4456448.f_238803 = 0;
	Global_4456448.f_234122 = 1;
}

void func_332(var uParam0)
{
	uParam0->f_1 = 0;
	*uParam0 = -1;
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		uParam0->f_2[iVar1] = 0;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		uParam0->f_6[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 15)
	{
		uParam0->f_13[iVar1] = 0;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			uParam0->f_30[iVar1][iVar0] = -1;
			iVar0++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		uParam0->f_73[iVar1] = 0;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		uParam0->f_78[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		uParam0->f_83[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		uParam0->f_88[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			uParam0->f_93[iVar1][iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		uParam0->f_118[iVar1] = 0;
		uParam0->f_118[iVar1].f_1 = -1;
		uParam0->f_118[iVar1].f_2 = -1;
		iVar1++;
	}
	uParam0->f_131 = 0;
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_132[iVar1][iVar0] = 0;
			uParam0->f_148[iVar1][iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		uParam0->f_164[iVar1] = 0;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 11)
	{
		StringCopy(&(uParam0->f_170[iVar1]), "", 64);
		iVar1++;
	}
}

void func_333(var uParam0)
{
	Var0 = 1077936128;
	Var0.f_1 = 1116471296;
	Var0.f_2 = 1086324736;
	Var0.f_3 = 1077936128;
	Var0.f_4 = 1114636288;
	Var0.f_5 = 1084227584;
	Var0.f_6 = 1084227584;
	Var0.f_7 = 1089470464;
	Var0.f_8 = 1082130432;
	Var0.f_9 = 4;
	*uParam0 = { Var0 };
	iVar14 = 0;
	while (iVar14 <= 3)
	{
		Global_4456448.f_238416.f_9[iVar14] = -1;
		iVar14++;
	}
}

void func_334()
{
	Global_4456448.f_234216 = 10;
	Global_4456448.f_234216.f_2808 = 0;
	iVar0 = 1;
	while (iVar0 <= 20)
	{
		func_335(iVar0);
		Global_4456448.f_234216.f_2418[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Global_4456448.f_234216.f_2717[iVar0] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_4456448.f_234216.f_2724 = 100f;
	Global_4456448.f_234216.f_2727 = 0;
	Global_4456448.f_234216.f_2725 = 0f;
	Global_4456448.f_234216.f_2726 = 0f;
	Global_4456448.f_234216.f_2728 = 0;
	Global_4456448.f_234216.f_2795 = 360;
	Global_4456448.f_234216.f_2796 = 1200;
	Global_4456448.f_234216.f_2797 = 0;
	Global_4456448.f_234216.f_2798 = 0;
	Global_4456448.f_234216.f_2799 = 0;
	Global_4456448.f_234216.f_2802 = 0;
	Global_4456448.f_234216.f_2803 = 0;
	Global_4456448.f_234216.f_2804 = 0;
	Global_4456448.f_234216.f_2805 = 0;
	Global_4456448.f_234216.f_2806 = 0;
	Global_4456448.f_234216.f_2807 = 0;
	Global_4456448.f_234216.f_193[0][0] = func_185(7, 0, 0);
	Global_4456448.f_234216.f_1086[0][0] = func_185(5, 0, 0);
	Global_4456448.f_234216.f_2462[0][0] = func_185(15, 0, 0);
	Global_4456448.f_234216.f_873[0][0] = func_185(27, 0, 0);
}

void func_335(int iParam0)
{
	if (iParam0 >= 21)
	{
		return;
	}
	Global_4456448.f_234216.f_1[iParam0] = func_186(13, iParam0, iVar0);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_4456448.f_234216.f_23[iParam0][iVar0] = func_186(0, iParam0, iVar0);
		Global_4456448.f_234216.f_108[iParam0][iVar0] = func_186(1, iParam0, iVar0);
		Global_4456448.f_234216.f_278[iParam0][iVar0] = func_186(8, iParam0, iVar0);
		Global_4456448.f_234216.f_363[iParam0][iVar0] = func_186(9, iParam0, iVar0);
		Global_4456448.f_234216.f_448[iParam0][iVar0] = func_186(10, iParam0, iVar0);
		Global_4456448.f_234216.f_533[iParam0][iVar0] = func_186(12, iParam0, iVar0);
		Global_4456448.f_234216.f_193[iParam0][iVar0] = func_185(7, iParam0, iVar0);
		Global_4456448.f_234216.f_618[iParam0][iVar0] = func_186(24, iParam0, iVar0);
		Global_4456448.f_234216.f_703[iParam0][iVar0] = func_186(25, iParam0, iVar0);
		Global_4456448.f_234216.f_788[iParam0][iVar0] = func_186(26, iParam0, iVar0);
		Global_4456448.f_234216.f_873[iParam0][iVar0] = func_185(27, iParam0, iVar0);
		iVar0++;
	}
	Global_4456448.f_234216.f_958[iParam0] = func_186(3, iParam0, iVar0);
	Global_4456448.f_234216.f_2440[iParam0] = func_186(6, iParam0, iVar0);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_234216.f_980[iParam0][iVar0] = func_186(4, iParam0, iVar0);
		Global_4456448.f_234216.f_1086[iParam0][iVar0] = func_185(5, iParam0, iVar0);
		Global_4456448.f_234216.f_1192[iParam0][iVar0] = func_186(14, iParam0, iVar0);
		Global_4456448.f_234216.f_1298[iParam0][iVar0] = func_186(28, iParam0, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_4456448.f_234216.f_2462[iParam0][iVar0] = func_185(15, iParam0, iVar0);
		Global_4456448.f_234216.f_2547[iParam0][iVar0] = func_186(16, iParam0, iVar0);
		Global_4456448.f_234216.f_2632[iParam0][iVar0] = func_186(28, iParam0, iVar0);
		iVar0++;
	}
	Global_4456448.f_234216.f_2729[iParam0] = func_186(17, iParam0, iVar0);
	Global_4456448.f_234216.f_2773[iParam0] = func_186(18, iParam0, iVar0);
	Global_4456448.f_234216.f_2751[iParam0] = func_186(19, iParam0, iVar0);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_234216.f_1404[iParam0][iVar0] = func_184(iParam0, iVar0);
		Global_4456448.f_234216.f_1510[iParam0][iVar0] = func_186(20, iParam0, iVar0);
		Global_4456448.f_234216.f_1616[iParam0][iVar0] = func_186(21, iParam0, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_4456448.f_234216.f_1722[iParam0][iVar0] = unk_0xC8F59BA644FE00A5(func_336(iParam0, iVar0));
		Global_4456448.f_234216.f_1954[iParam0][iVar0] = 0;
		Global_4456448.f_234216.f_2186[iParam0][iVar0] = 0;
		iVar0++;
	}
	if (unk_0xEAE0D21A50E6C7F4(360, iParam0))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_234216.f_2795), iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_4456448.f_234216.f_2795), iParam0);
	}
	if (unk_0xEAE0D21A50E6C7F4(1200, iParam0))
	{
		unk_0x5D96D8530B3D0904(&(Global_4456448.f_234216.f_2796), iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_4456448.f_234216.f_2796), iParam0);
	}
	unk_0x0674E58A79778E99(&(Global_4456448.f_234216.f_2798), iParam0);
	unk_0x0674E58A79778E99(&(Global_4456448.f_234216.f_2799), iParam0);
	unk_0x0674E58A79778E99(&(Global_4456448.f_234216.f_2802), iParam0);
	unk_0x0674E58A79778E99(&(Global_4456448.f_234216.f_2803), iParam0);
	unk_0x0674E58A79778E99(&(Global_4456448.f_234216.f_2804), iParam0);
	unk_0x0674E58A79778E99(&(Global_4456448.f_234216.f_2805), iParam0);
	unk_0x0674E58A79778E99(&(Global_4456448.f_234216.f_2801), iParam0);
	unk_0x0674E58A79778E99(&(Global_4456448.f_234216.f_2800), iParam0);
	unk_0x0674E58A79778E99(&(Global_4456448.f_234216.f_2806), iParam0);
	unk_0x0674E58A79778E99(&(Global_4456448.f_234216.f_2807), iParam0);
	unk_0x0674E58A79778E99(&(Global_4456448.f_234216.f_2797), iParam0);
	unk_0x0674E58A79778E99(&(Global_4456448.f_234216.f_2728), iParam0);
	iVar1 = 0;
	while (iVar1 <= 59)
	{
		Global_4456448.f_116800[iVar1].f_70[iParam0] = 76;
		Global_4456448.f_123941.f_70[iParam0] = 76;
		iVar1++;
	}
}

int func_336(int iParam0, int iParam1)
{
	if (iParam1 > 6)
	{
		iParam1 = (iParam1 - 5);
	}
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 496339155;
					break;
				
				case 1:
					return -1989692173;
					break;
				
				case 2:
					return 496339155;
					break;
				
				case 3:
					return -1989692173;
					break;
				
				case 4:
					return 496339155;
					break;
				
				case 5:
					return -1989692173;
					break;
				
				case 6:
					return 496339155;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 496339155;
					break;
				
				case 1:
					return -214137936;
					break;
				
				case 2:
					return 496339155;
					break;
				
				case 3:
					return -214137936;
					break;
				
				case 4:
					return 496339155;
					break;
				
				case 5:
					return -214137936;
					break;
				
				case 6:
					return 496339155;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return -1298986476;
					break;
				
				case 1:
					return -1298986476;
					break;
				
				case 2:
					return -1298986476;
					break;
				
				case 3:
					return -1456120371;
					break;
				
				case 4:
					return -1298986476;
					break;
				
				case 5:
					return -1456120371;
					break;
				
				case 6:
					return -1298986476;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return -546236071;
					break;
				
				case 1:
					return -1296747938;
					break;
				
				case 2:
					return 1295434569;
					break;
				
				case 3:
					return -1296747938;
					break;
				
				case 4:
					return -546236071;
					break;
				
				case 5:
					return -1296747938;
					break;
				
				case 6:
					return -546236071;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return -1766583645;
					break;
				
				case 1:
					return -1296747938;
					break;
				
				case 2:
					return -1766583645;
					break;
				
				case 3:
					return -1296747938;
					break;
				
				case 4:
					return -1766583645;
					break;
				
				case 5:
					return -1296747938;
					break;
				
				case 6:
					return -1766583645;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return -1296747938;
					break;
				
				case 1:
					return 1765114797;
					break;
				
				case 2:
					return -1296747938;
					break;
				
				case 3:
					return 1577485217;
					break;
				
				case 4:
					return -1296747938;
					break;
				
				case 5:
					return 1577485217;
					break;
				
				case 6:
					return -1296747938;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return -1296747938;
					break;
				
				case 1:
					return 1765114797;
					break;
				
				case 2:
					return -1835415205;
					break;
				
				case 3:
					return 1295434569;
					break;
				
				case 4:
					return -546236071;
					break;
				
				case 5:
					return 1577485217;
					break;
				
				case 6:
					return -1296747938;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return -1296747938;
					break;
				
				case 1:
					return 779501861;
					break;
				
				case 2:
					return -1835415205;
					break;
				
				case 3:
					return 1577485217;
					break;
				
				case 4:
					return -546236071;
					break;
				
				case 5:
					return 2081529176;
					break;
				
				case 6:
					return -1296747938;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return -1296747938;
					break;
				
				case 1:
					return 779501861;
					break;
				
				case 2:
					return -1835415205;
					break;
				
				case 3:
					return 1577485217;
					break;
				
				case 4:
					return 792114228;
					break;
				
				case 5:
					return 2081529176;
					break;
				
				case 6:
					return -1296747938;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return -1296747938;
					break;
				
				case 1:
					return 779501861;
					break;
				
				case 2:
					return 792114228;
					break;
				
				case 3:
					return 1295434569;
					break;
				
				case 4:
					return 792114228;
					break;
				
				case 5:
					return 2081529176;
					break;
				
				case 6:
					return -1296747938;
					break;
			}
			break;
		
		default:
			switch (iParam1)
			{
				case 0:
					return -1296747938;
					break;
				
				case 1:
					return 779501861;
					break;
				
				case 2:
					return 792114228;
					break;
				
				case 3:
					return 1295434569;
					break;
				
				case 4:
					return 792114228;
					break;
				
				case 5:
					return 2081529176;
					break;
				
				case 6:
					return -1296747938;
					break;
			}
			break;
	}
	return 1295434569;
}

void func_337(var uParam0)
{
	uParam0->f_46 = 0;
	uParam0->f_60 = 0;
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0,75f;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	uParam0->f_37 = 0;
	uParam0->f_41 = 0;
	uParam0->f_43 = 0;
	uParam0->f_44 = -1;
	uParam0->f_42 = 100;
	uParam0->f_45 = 0f;
	uParam0->f_337 = -1;
	uParam0->f_336 = -1;
	uParam0->f_338 = 0;
	uParam0->f_339 = 0;
	uParam0->f_340 = 20;
	uParam0->f_348 = -1;
	uParam0->f_71 = -1;
	uParam0->f_58 = -1;
	uParam0->f_39 = 0;
	uParam0->f_40 = -1;
	uParam0->f_59 = 0;
	uParam0->f_290 = 0;
	uParam0->f_291 = 0;
	uParam0->f_292 = 0;
	uParam0->f_293 = 0;
	uParam0->f_294 = 0;
	uParam0->f_295 = 0;
	uParam0->f_296 = 0;
	uParam0->f_297 = 0;
	uParam0->f_298 = 0;
	uParam0->f_299 = 0;
	uParam0->f_300 = 0;
	uParam0->f_301 = 0;
	uParam0->f_302 = 0;
	uParam0->f_303 = 0;
	uParam0->f_304 = 0;
	uParam0->f_305 = 0;
	uParam0->f_507 = 32f;
	uParam0->f_306 = -1;
	uParam0->f_307 = 0;
	uParam0->f_308 = -1;
	uParam0->f_38 = 0;
	uParam0->f_17 = 0f;
	uParam0->f_5 = 50f;
	uParam0->f_442 = -101;
	uParam0->f_443 = -1;
	uParam0->f_452 = -1;
	uParam0->f_453 = -1f;
	uParam0->f_454 = -1;
	uParam0->f_455 = -1;
	uParam0->f_504 = -1;
	uParam0->f_456 = 0;
	uParam0->f_457 = -1;
	uParam0->f_458 = -1;
	uParam0->f_459 = -1;
	uParam0->f_460 = -1;
	uParam0->f_461 = -1;
	uParam0->f_462 = -1;
	uParam0->f_6 = 0f;
	uParam0->f_7 = 0;
	uParam0->f_18 = 0;
	uParam0->f_8 = -1;
	uParam0->f_9 = { 0f, 0f, 0f };
	uParam0->f_12 = 0f;
	uParam0->f_13 = { 0f, 0f, 0f };
	uParam0->f_16 = 0f;
	uParam0->f_274 = 0;
	uParam0->f_100 = 0;
	uParam0->f_260 = 0;
	uParam0->f_261 = 0;
	uParam0->f_262 = 0;
	uParam0->f_274 = 0;
	uParam0->f_284 = 0;
	uParam0->f_540 = 0;
	uParam0->f_463 = -1;
	uParam0->f_285 = { 0f, 0f, 0f };
	uParam0->f_275 = 0;
	uParam0->f_283 = -1;
	uParam0->f_449 = -1;
	uParam0->f_103 = { 0f, 0f, 0f };
	uParam0->f_72 = -1;
	uParam0->f_73 = -1;
	uParam0->f_99 = 0;
	uParam0->f_74 = 0;
	func_346(&(uParam0->f_546));
	uParam0->f_128 = 0;
	uParam0->f_320 = 0;
	uParam0->f_63 = 0;
	uParam0->f_323 = 250;
	uParam0->f_326 = 0;
	uParam0->f_327 = -1;
	uParam0->f_393 = -1;
	uParam0->f_328 = 0;
	uParam0->f_394 = 4;
	uParam0->f_335 = -1;
	uParam0->f_366 = 0;
	uParam0->f_446 = 0;
	uParam0->f_447 = 0;
	uParam0->f_101 = 0;
	uParam0->f_263 = 0;
	uParam0->f_264 = 0;
	uParam0->f_265 = 0;
	uParam0->f_450 = -1;
	uParam0->f_451 = -1;
	uParam0->f_385 = -1;
	uParam0->f_386 = -1;
	uParam0->f_387 = -1;
	uParam0->f_448 = 0;
	uParam0->f_102 = -1;
	uParam0->f_266 = -1;
	uParam0->f_267 = -1;
	uParam0->f_268 = -1;
	uParam0->f_243 = 0;
	uParam0->f_244 = -1;
	uParam0->f_245 = -1;
	uParam0->f_246 = 0;
	uParam0->f_247 = -1;
	uParam0->f_248 = -1;
	uParam0->f_349 = -1;
	uParam0->f_350 = -1;
	uParam0->f_353 = -1;
	uParam0->f_354 = -1;
	uParam0->f_351 = -1;
	uParam0->f_390 = -1;
	uParam0->f_389 = -1;
	uParam0->f_391 = -1;
	uParam0->f_392 = -1;
	uParam0->f_249 = -1;
	uParam0->f_250 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		uParam0->f_77[iVar1] = 0;
		iVar1++;
	}
	uParam0->f_441 = 1;
	uParam0->f_319 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_22[iVar0] = 0;
		uParam0->f_27[iVar0] = 2;
		uParam0->f_32[iVar0] = 99999;
		uParam0->f_309[iVar0] = -1;
		uParam0->f_314[iVar0] = -1;
		uParam0->f_367[iVar0] = 0;
		uParam0->f_372[iVar0] = 0;
		uParam0->f_396[iVar0] = -2;
		uParam0->f_269[iVar0] = 0;
		uParam0->f_355[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_181[0] = 0f;
	uParam0->f_190[0] = 0f;
	uParam0->f_208[0] = 0f;
	uParam0->f_129[0] = 0;
	uParam0->f_138[0] = -1;
	uParam0->f_147[0] = { 0f, 0f, 0f };
	uParam0->f_172[0] = 3;
	uParam0->f_199[0] = -1;
	uParam0->f_226[0] = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		uParam0->f_106[iVar0] = { 0f, 0f, 0f };
		uParam0->f_129[iVar0 + 1] = 0;
		uParam0->f_181[iVar0 + 1] = 0f;
		uParam0->f_190[iVar0 + 1] = 0f;
		uParam0->f_208[iVar0 + 1] = 0f;
		uParam0->f_138[iVar0 + 1] = -1;
		uParam0->f_147[iVar0 + 1] = { 0f, 0f, 0f };
		uParam0->f_172[iVar0 + 1] = 3;
		uParam0->f_199[iVar0 + 1] = -1;
		uParam0->f_226[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		uParam0->f_217[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_410[iVar0] = { 0f, 0f, 0f };
		uParam0->f_423[iVar0] = 0f;
		iVar0++;
	}
	uParam0->f_288 = -1;
	uParam0->f_289 = -1;
	uParam0->f_395 = -1;
	uParam0->f_401 = -1;
	uParam0->f_402 = -1;
	uParam0->f_403 = -1;
	uParam0->f_407 = -1;
	uParam0->f_408 = 0f;
	uParam0->f_404 = -1;
	uParam0->f_405 = -1;
	uParam0->f_406 = -1;
	uParam0->f_409 = -1;
	uParam0->f_435 = -1;
	uParam0->f_433 = 0;
	uParam0->f_434 = 0;
	uParam0->f_505 = 0;
	uParam0->f_506 = 0;
	StringCopy(&(uParam0->f_508), "", 64);
	StringCopy(&(uParam0->f_524), "", 64);
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		uParam0->f_464[iVar0] = { 0f, 0f, 0f };
		uParam0->f_492[iVar0] = 0f;
		iVar0++;
	}
	uParam0->f_502 = -1;
	uParam0->f_503 = 0;
	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	uParam0->f_541 = { Var2 };
	uParam0->f_388 = 0f;
	func_241(&(uParam0->f_569), 0);
	func_342(&(uParam0->f_377));
}

void func_338(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 50f;
	uParam0->f_5 = 0f;
	uParam0->f_6 = 0;
	uParam0->f_7 = -1;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = 0f;
	uParam0->f_12 = 0;
	uParam0->f_23 = -1;
	uParam0->f_24 = -1;
	uParam0->f_25 = -1;
	uParam0->f_27 = -1;
	uParam0->f_31 = 0;
	uParam0->f_32 = 100;
	uParam0->f_33 = 1001f;
	uParam0->f_34 = 0;
	uParam0->f_35 = -1;
	uParam0->f_36 = 1001f;
	uParam0->f_40 = 1,5f;
	uParam0->f_73 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	uParam0->f_77 = 0;
	uParam0->f_78 = 0;
	uParam0->f_79 = 0;
	uParam0->f_80 = 0;
	uParam0->f_81 = 0;
	uParam0->f_184 = 0;
	uParam0->f_28 = -1;
	uParam0->f_29 = -1;
	uParam0->f_30 = -1f;
	func_346(&(uParam0->f_102));
	uParam0->f_102.f_2 = 0;
	uParam0->f_102.f_4 = 1,2f;
	uParam0->f_102.f_5 = 0;
	uParam0->f_102.f_6 = 0f;
	uParam0->f_102.f_1 = 0;
	uParam0->f_82 = -1;
	uParam0->f_83 = 10;
	uParam0->f_250 = -1;
	uParam0->f_251 = -1;
	uParam0->f_252 = 1;
	uParam0->f_255 = 60;
	uParam0->f_256 = 4,5f;
	uParam0->f_257 = -1;
	uParam0->f_258 = -1;
	uParam0->f_260 = 0;
	uParam0->f_240 = 1f;
	uParam0->f_229 = -1;
	uParam0->f_230 = -1;
	uParam0->f_231 = -1;
	uParam0->f_233 = 0;
	uParam0->f_232 = 0;
	uParam0->f_45 = -1;
	uParam0->f_139 = -1;
	uParam0->f_140 = -1;
	uParam0->f_141 = -1;
	uParam0->f_46 = -1;
	uParam0->f_136 = -1;
	uParam0->f_137 = -1;
	uParam0->f_138 = -1;
	uParam0->f_47 = 0;
	uParam0->f_142 = 0;
	uParam0->f_143 = 0;
	uParam0->f_144 = 0;
	uParam0->f_125 = -1;
	uParam0->f_126 = -1;
	uParam0->f_128 = -1;
	uParam0->f_182 = -1;
	uParam0->f_181 = -1;
	uParam0->f_127 = -1;
	uParam0->f_135 = 0;
	uParam0->f_50 = 0;
	uParam0->f_51 = 0;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		uParam0->f_52[iVar1] = 0;
		iVar1++;
	}
	uParam0->f_208 = 0;
	uParam0->f_213 = -1;
	uParam0->f_214 = { 0f, 0f, 0f };
	uParam0->f_217 = 0f;
	uParam0->f_218 = 0f;
	uParam0->f_219 = -1;
	uParam0->f_220 = -1;
	uParam0->f_210 = -1f;
	uParam0->f_209 = -1;
	uParam0->f_212 = 0;
	uParam0->f_261 = -1;
	uParam0->f_262 = 0;
	uParam0->f_41 = 0;
	uParam0->f_42 = 5;
	uParam0->f_225 = -1;
	uParam0->f_211 = 10;
	uParam0->f_226 = 0;
	uParam0->f_227 = 2;
	uParam0->f_228 = -1;
	uParam0->f_241 = -1f;
	uParam0->f_242 = 0;
	uParam0->f_243 = -1;
	uParam0->f_244 = 0;
	uParam0->f_245 = -1;
	uParam0->f_246 = 10;
	uParam0->f_247 = -1;
	uParam0->f_248 = 0;
	uParam0->f_249 = -1;
	uParam0->f_37 = 1001f;
	uParam0->f_38 = 1001f;
	uParam0->f_44 = 0;
	uParam0->f_180 = 100f;
	uParam0->f_152 = -1;
	uParam0->f_153 = 1;
	uParam0->f_151 = -1;
	uParam0->f_172 = -1;
	uParam0->f_43 = 0;
	uParam0->f_238 = -1;
	uParam0->f_239 = 0;
	uParam0->f_235 = 3;
	uParam0->f_236 = 3;
	uParam0->f_237 = 3000;
	uParam0->f_174 = -1;
	uParam0->f_173 = -1;
	uParam0->f_183 = 0;
	uParam0->f_263 = { 0f, 0f, 0f };
	uParam0->f_266 = 0;
	uParam0->f_267 = -1;
	uParam0->f_268 = -1;
	uParam0->f_269 = 0;
	uParam0->f_270 = 0;
	uParam0->f_271 = -1;
	uParam0->f_272 = -1;
	func_342(&(uParam0->f_164));
	iVar0 = 0;
	while (iVar0 < 17)
	{
		uParam0->f_84[iVar0] = -2;
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 8)
	{
		uParam0->f_273[iVar2] = { 0f, 0f, 0f };
		uParam0->f_301[iVar2] = 0f;
		iVar2++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_185[iVar0] = { 0f, 0f, 0f };
		uParam0->f_198[iVar0] = 0f;
		uParam0->f_203[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_13[iVar0] = 0;
		uParam0->f_18[iVar0] = 99999;
		uParam0->f_175[iVar0] = 0;
		uParam0->f_154[iVar0] = 0;
		uParam0->f_159[iVar0] = 0;
		uParam0->f_102.f_10[iVar0].f_1 = -1;
		uParam0->f_102.f_10[iVar0].f_2 = -1;
		uParam0->f_129[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_134 = -1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_221[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_311 = -1;
	uParam0->f_312 = -1;
	uParam0->f_313 = -1;
	uParam0->f_314 = 0;
	uParam0->f_315 = 0;
	uParam0->f_316 = 0;
	func_241(&(uParam0->f_323), 0);
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	uParam0->f_318 = { Var3 };
}

void func_339()
{
	Global_4456448.f_233112 = 0;
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		Global_4456448.f_233113[iVar0][0] = { 0f, 0f, 0f };
		Global_4456448.f_233113[iVar0][1] = { 0f, 0f, 0f };
		Global_4456448.f_233113[iVar0].f_7 = 0;
		Global_4456448.f_233113[iVar0].f_8 = 0;
		Global_4456448.f_233113[iVar0].f_10 = 0f;
		Global_4456448.f_233113[iVar0].f_9 = 0;
		iVar0++;
	}
}

void func_340()
{
	Global_4456448.f_195285 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_341(&(Global_4456448.f_195397[iVar0]));
		iVar0++;
	}
}

void func_341(var uParam0)
{
	*uParam0[0] = { 0f, 0f, 0f };
	*uParam0[1] = { 0f, 0f, 0f };
	uParam0->f_10 = 0;
	uParam0->f_21 = 0;
	uParam0->f_23 = 0f;
	uParam0->f_24 = 0f;
	uParam0->f_22 = 0;
	uParam0->f_7 = 5f;
	uParam0->f_8 = 5f;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		uParam0->f_11[iVar0] = -1;
		uParam0->f_16[iVar0] = 99999;
		iVar0++;
	}
	uParam0->f_25 = 0;
	uParam0->f_26 = 2;
	uParam0->f_33 = -1;
	uParam0->f_34 = 0;
	uParam0->f_35 = 0f;
	uParam0->f_36 = 0;
	uParam0->f_37 = -1;
	uParam0->f_40 = 1;
	uParam0->f_41 = 120;
	uParam0->f_27 = -1;
	uParam0->f_28 = 0;
	StringCopy(&(uParam0->f_29), "", 16);
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		uParam0->f_43[iVar1] = { 0f, 0f, 0f };
		iVar1++;
	}
	uParam0->f_50.f_4 = 90f;
	uParam0->f_50.f_3 = 20f;
	uParam0->f_50 = { 0f, 0f, 0f };
	func_241(&(uParam0->f_55), 0);
}

void func_342(var uParam0)
{
	uParam0->f_1 = -1;
	*uParam0 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
}

void func_343(var uParam0)
{
	Var0.f_4 = 1232348144;
	Var0.f_5 = 1232348144;
	Var0.f_6 = 2;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_344()
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_345(&(Global_4456448.f_87022[iVar0]));
		iVar0++;
	}
	Global_4456448.f_87021 = 0;
}

void func_345(var uParam0)
{
	Var0.f_2.f_3 = 255;
	Var0.f_2.f_4 = 1065353216;
	Var0.f_2.f_9 = -1;
	Var0.f_2.f_10 = 4;
	Var0.f_33 = 1073741824;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36.f_1 = -1;
	Var0.f_43 = -1;
	Var0.f_46 = -1;
	Var0.f_48 = 4;
	Var0.f_54 = 1;
	*uParam0 = { Var0 };
}

void func_346(var uParam0)
{
	Var0.f_3 = 255;
	Var0.f_4 = 1065353216;
	Var0.f_9 = -1;
	Var0.f_10 = 4;
	*uParam0 = { Var0 };
	iVar23 = 0;
	while (iVar23 <= 3)
	{
		uParam0->f_10[iVar23].f_1 = -1;
		uParam0->f_10[iVar23].f_2 = -1;
		uParam0->f_10[iVar23] = 0;
		iVar23++;
	}
}

void func_347(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_348(uParam0, iVar0);
		iVar0++;
	}
}

void func_348(var uParam0, int iParam1)
{
	*uParam0[iParam1] = { 0f, 0f, 0f };
	uParam0->f_91[iParam1] = { 0f, 0f, 0f };
	uParam0->f_182[iParam1] = 0;
}

void func_349()
{
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		func_350(iVar0);
		iVar0++;
	}
	Global_4456448.f_233994 = 0;
}

void func_350(int iParam0)
{
	Global_4456448.f_233973[iParam0] = uVar0;
}

void func_351(var uParam0)
{
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_352(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		func_353(&(Global_4456448.f_271[iParam0].f_1523[iParam1][iVar0]));
		iVar0++;
	}
}

void func_353(var uParam0)
{
	Var0.f_1 = 2;
	Var0.f_4 = 10000;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	*uParam0 = { Var0 };
}

void func_354(int iParam0)
{
	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	Global_4456448.f_239469[iParam0] = { vVar0 };
}

void func_355(var uParam0)
{
	Var0 = 5;
	Var0.f_1.f_2 = -1;
	Var0.f_1.f_3 = 1065353216;
	Var0.f_1.f_4 = 6;
	Var0.f_1.f_11.f_2 = -1;
	Var0.f_1.f_11.f_3 = 1065353216;
	Var0.f_1.f_11.f_4 = 6;
	Var0.f_1.f_11.f_11.f_2 = -1;
	Var0.f_1.f_11.f_11.f_3 = 1065353216;
	Var0.f_1.f_11.f_11.f_4 = 6;
	Var0.f_1.f_11.f_11.f_11.f_2 = -1;
	Var0.f_1.f_11.f_11.f_11.f_3 = 1065353216;
	Var0.f_1.f_11.f_11.f_11.f_4 = 6;
	Var0.f_1.f_11.f_11.f_11.f_11.f_2 = -1;
	Var0.f_1.f_11.f_11.f_11.f_11.f_3 = 1065353216;
	Var0.f_1.f_11.f_11.f_11.f_11.f_4 = 6;
	Var0.f_56 = -1;
	Var0.f_58.f_1 = -1;
	Var0.f_58.f_2 = -1;
	*uParam0 = { Var0 };
}

void func_356(int iParam0)
{
	Global_4456448.f_75705 = iParam0;
	if (Global_4456448.f_75705 != 18 && Global_4456448.f_75705 != 19)
	{
		unk_0x0674E58A79778E99(&(Global_4456448.f_28), 18);
	}
	func_357((func_359() || func_358()));
}

void func_357(var uParam0)
{
	Global_4194304 = uParam0;
}

bool func_358()
{
	return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_226020, 12);
}

int func_359()
{
	if ((unk_0xEAE0D21A50E6C7F4(Global_4456448.f_28, 18) || Global_4456448.f_75705 == 18) || Global_4456448.f_75705 == 19)
	{
		return 1;
	}
	return 0;
}

void func_360(var uParam0)
{
	uParam0->f_4 = -1;
	uParam0->f_3 = -1;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0;
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0f;
	StringCopy(&(uParam0->f_35), "", 24);
	uParam0->f_44.f_10[0].f_1 = -1;
	uParam0->f_44.f_10[0].f_2 = -1;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
	func_241(&(uParam0->f_67), 0);
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		uParam0->f_14[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_41 = { 0f, 0f, 0f };
	func_346(&(uParam0->f_44));
}

void func_361(var uParam0)
{
	uParam0->f_3 = 0;
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_4 = 0;
}

void func_362(char* sParam0)
{
	StringCopy(sParam0, "", 64);
	sParam0->f_16 = 0;
	sParam0->f_17 = 0;
	sParam0->f_18 = 0;
	sParam0->f_19 = { 0f, 0f, 0f };
	sParam0->f_22 = { 0f, 0f, 0f };
	sParam0->f_61 = { 0f, 0f, 0f };
	sParam0->f_67 = 0f;
	sParam0->f_64 = { 0f, 0f, 0f };
	sParam0->f_68 = 0;
	sParam0->f_69 = 0;
	sParam0->f_70 = 6f;
	sParam0->f_71 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		sParam0->f_25[iVar0] = { 0f, 0f, 0f };
		sParam0->f_38[iVar0] = { 0f, 0f, 0f };
		sParam0->f_51[iVar0] = 0f;
		sParam0->f_56[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_365(&(sParam0->f_456[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		func_364(&(sParam0->f_473[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_363(&(sParam0->f_125[iVar0]));
		iVar0++;
	}
}

void func_363(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	StringCopy(&(uParam0->f_3), "", 32);
}

void func_364(var uParam0)
{
	*uParam0 = -1;
	func_365(&(uParam0->f_1));
}

void func_365(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_366(char* sParam0)
{
	StringCopy(sParam0, "", 16);
	sParam0->f_4 = 0;
	sParam0->f_5 = 0;
	sParam0->f_6 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		sParam0->f_7[iVar0] = { 0f, 0f, 0f };
		sParam0->f_20[iVar0] = { 0f, 0f, 0f };
		sParam0->f_33[iVar0] = 0f;
		sParam0->f_38[iVar0] = 0f;
		sParam0->f_43[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_369(&(sParam0->f_1480[iVar0]));
		func_365(&(sParam0->f_1116[iVar0]));
		func_365(&(sParam0->f_1133[iVar0]));
		iVar0++;
	}
	func_368(&(sParam0->f_1489));
	sParam0->f_91 = 0;
	sParam0->f_90 = 0;
	sParam0->f_92 = 0;
	sParam0->f_783 = 0;
	sParam0->f_784 = 6f;
	sParam0->f_484 = 0;
	sParam0->f_485 = 0;
	sParam0->f_486 = 0;
	sParam0->f_487 = { 0f, 0f, 0f };
	sParam0->f_776 = { 0f, 0f, 0f };
	sParam0->f_779 = 0f;
	sParam0->f_780 = { 0f, 0f, 0f };
	sParam0->f_1476 = -1;
	sParam0->f_1477 = 1f;
	sParam0->f_1478 = 0f;
	sParam0->f_1479 = 0f;
	sParam0->f_1494 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		func_367(sParam0, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_363(&(sParam0->f_785[iVar0]));
		iVar0++;
	}
}

void func_367(char* sParam0, int iParam1)
{
	if (iParam1 >= 0 && iParam1 < 20)
	{
		sParam0->f_93[iParam1] = 0;
		sParam0->f_48[iParam1] = 0f;
		sParam0->f_69[iParam1] = 0f;
		sParam0->f_114[iParam1] = 0;
		sParam0->f_135[iParam1] = { 0f, 0f, 0f };
		sParam0->f_196[iParam1] = { 0f, 0f, 0f };
		sParam0->f_257[iParam1] = { 0f, 0f, 0f };
		sParam0->f_318[iParam1] = { 0f, 0f, 0f };
		sParam0->f_379[iParam1] = 0f;
		sParam0->f_400[iParam1] = 0f;
		sParam0->f_421[iParam1] = 0;
		sParam0->f_442[iParam1] = -1;
		sParam0->f_463[iParam1] = 0f;
		sParam0->f_490[iParam1] = { 0f, 0f, 0f };
		sParam0->f_1312[iParam1] = { 0f, 0f, 0f };
		sParam0->f_1373[iParam1] = 0f;
		sParam0->f_1394[iParam1] = { 0f, 0f, 0f };
		sParam0->f_1455[iParam1] = 0f;
		sParam0->f_551[iParam1] = 0f;
		StringCopy(&(sParam0->f_1150[iParam1]), "", 16);
		StringCopy(&(sParam0->f_1231[iParam1]), "", 16);
	}
}

void func_368(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = 0f;
}

void func_369(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

int func_370()
{
	if (func_274(1))
	{
		return 10;
	}
	return 5;
}

void func_371()
{
	iVar0 = 0;
	while (iVar0 <= 26)
	{
		Global_4456448.f_76257[iVar0] = 0;
		iVar0++;
	}
}

void func_372()
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_4456448.f_195148[iVar0]), "", 64);
		iVar0++;
	}
}

void func_373(int iParam0)
{
	Global_4456448.f_237640[iParam0] = -1;
	Global_4456448.f_237640[iParam0].f_1[0] = { 0f, 0f, 0f };
	Global_4456448.f_237640[iParam0].f_1[1] = { 0f, 0f, 0f };
	Global_4456448.f_237640[iParam0].f_8 = 0f;
	Global_4456448.f_237640[iParam0].f_9 = { 0f, 0f, 0f };
	Global_4456448.f_237640[iParam0].f_30 = { 0f, 0f, 0f };
	Global_4456448.f_237640[iParam0].f_30.f_3 = { 0f, 0f, 0f };
	Global_4456448.f_237640[iParam0].f_30.f_6 = 0f;
	Global_4456448.f_237640[iParam0].f_30.f_7 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_237640[iParam0].f_12[iVar0] = { 0f, 0f, 0f };
		Global_4456448.f_237640[iParam0].f_25[iVar0] = 0f;
		iVar0++;
	}
	Global_4456448.f_237640[iParam0].f_38 = -1;
	Global_4456448.f_237640[iParam0].f_39 = -1;
	Global_4456448.f_237640[iParam0].f_40 = -1;
	Global_4456448.f_237640[iParam0].f_41 = 0;
}

int func_374()
{
	return Global_1590535[unk_0xD803B885F5E47A62()].f_196;
}

int func_375()
{
	if (unk_0x798A3F1296751F46())
	{
		if (Global_1312434)
		{
			return 1;
		}
	}
	else if (Global_1312434)
	{
		Global_1312434 = 0;
	}
	return 0;
}

bool func_376()
{
	return unk_0xEAE0D21A50E6C7F4(Global_959568.f_8, 0);
}

bool func_377()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632, 4);
}

bool func_378()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632, 28);
}

var func_379()
{
	return Global_2450632.f_592;
}

void func_380()
{
	Var0.f_4.f_1 = -1;
	Var0.f_4.f_2 = -1;
	Var0.f_4.f_9 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Global_2394836 = { Var0 };
	StringCopy(&(Global_2394836.f_30), "", 64);
	StringCopy(&(Global_2394836.f_46), "", 64);
	StringCopy(&(Global_2394836.f_15), "", 32);
}

void func_381()
{
	unk_0x0674E58A79778E99(&Global_2450632, 4);
}

void func_382()
{
	unk_0x0674E58A79778E99(&Global_2450632, 28);
}

void func_383(bool bParam0, bool bParam1, bool bParam2)
{
	bParam0->f_5 = 0;
	bParam0->f_6 = 0;
	bParam0->f_7 = 0;
	bParam0->f_8 = 0;
	bParam0->f_9 = 0;
	bParam0->f_12 = 0;
	bParam0->f_32 = 0;
	bParam0->f_13 = 0;
	bParam0->f_14 = 0;
	bParam0->f_15 = 0;
	bParam0->f_17 = 1;
	bParam0->f_17 = 1;
	bParam0->f_18 = 0;
	bParam0->f_19 = 0;
	bParam0->f_20 = 0;
	bParam0->f_21 = -1;
	bParam0->f_3 = 0;
	bParam0->f_28 = 0;
	bParam0->f_29 = 0;
	bParam0->f_30 = 0;
	Global_1573299[0] = 0;
	Global_1573299[1] = 0;
	bParam0->f_41 = 0;
	if (bParam2)
	{
		bParam0->f_42 = { Var0 };
	}
	if (bParam1)
	{
		func_101(bParam0, 0);
	}
}

int func_384(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return 15;
		
		case 155:
			return 8;
		
		case 149:
			return 14;
		
		case 153:
			return 122;
		
		case 156:
			return 1;
		
		case 154:
			return 5;
		
		case 157:
			return 6;
		
		case 150:
			return 11;
		
		case 158:
			return 0;
		
		case 159:
			return 2;
		
		case 151:
			return 13;
		
		case 160:
			return 3;
		
		case 152:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case 79:
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		default:
	}
	return 256;
}

bool func_385()
{
	return Global_2394836;
}

var func_386()
{
	return Global_2394836.f_3;
}

