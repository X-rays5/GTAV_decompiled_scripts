void __EntryFunction__()
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0,001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0,0375f;
	fLocal_27 = 0,17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_67 = ((0,05f + 0,275f) - 0,01f);
	if (unk_0x2EBF608FFE6CA406(99))
	{
		func_131();
	}
	bLocal_339 = bScriptParam_0;
	func_130(&uLocal_343, 4);
	if (bLocal_339)
	{
		unk_0x37AD2AB54480FA6A(32, 0, -1);
		func_127(0, -1, 0);
		unk_0x0BEC04ECA8485A3A(2);
		unk_0x9752E7BAEABA939E(&Local_238, 4);
		unk_0x35B62793EAE9ADDF(&vLocal_242, 97);
		unk_0x256D93AFAE851A7A(0);
		vLocal_242[unk_0x57270EE11514DC67()].f_1 = 10;
		if (unk_0xBFF81ED3B99522C7())
		{
		}
	}
	iVar0 = 1;
	func_126(&uLocal_343, -1613485779);
	func_123(&uLocal_343);
	unk_0xB2AF08FECE4571EC(unk_0xA30EC016B12C03E4());
	unk_0x745CE398A4B0A3C6(130,8067f, -1299,166f, 28,2327f, 2f, 0);
	unk_0x745CE398A4B0A3C6(128,1264f, -1299,691f, 28,23271f, 2f, 0);
	iLocal_341 = unk_0x7D6CA5F52B3748BF(Vector(28,23271f, -1299,691f, 128,1264f) - Vector(2f, 1f, 1f), Vector(28,23271f, -1299,691f, 128,1264f) + Vector(2f, 1f, 1f), 0, 1, 1, 1);
	func_122(0);
	while (true)
	{
		func_119(&uLocal_343);
		if (bLocal_339)
		{
			if (func_108() || func_106(unk_0xD803B885F5E47A62()))
			{
				func_131();
			}
			if ((unk_0xF4CCC8CB6DE7F1AE() % 10) == 0)
			{
				func_105();
				func_104();
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_69))
		{
			func_122(unk_0x437347B10A200C4B(iLocal_69, 0));
			if (unk_0x437347B10A200C4B(iLocal_69, 0))
			{
				if (unk_0xE4EDC4B0E92C078B(iLocal_342))
				{
					unk_0x142CC44DB769B57E(&iLocal_342);
				}
			}
			if (unk_0xB87D13D0C064E9D1(iLocal_69, unk_0x16F2683693E537C9(), 1))
			{
				bLocal_340 = true;
			}
		}
		else
		{
			func_122(1);
		}
		if (iVar0 && func_103() > 1)
		{
			iVar0 = 0;
			func_97(&uLocal_343, -1613485779, 1);
		}
		switch (func_103())
		{
			case 0:
				func_96(1);
				break;
			
			case 1:
				if (func_94())
				{
					func_96(2);
				}
				break;
			
			case 2:
				if (bLocal_339)
				{
					func_93();
				}
				func_35();
				if (func_32())
				{
					if (func_21())
					{
						func_96(3);
					}
				}
				break;
			
			case 3:
				func_6();
				break;
		}
		if (Global_110662)
		{
		}
		if (func_3() || (Global_110662 && !func_1()))
		{
			func_131();
		}
		wait(0);
	}
}

bool func_1()
{
	return func_2(Global_110663, 128);
}

bool func_2(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_3()
{
	if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		return 1;
	}
	if (!bLocal_339)
	{
		return unk_0x8A22C4C08282BF26(156990570) == 0;
	}
	if (func_4(unk_0xD803B885F5E47A62()) == 185 && Global_2537071.f_4577 == 2)
	{
		return 1;
	}
	return vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), 114,64f, -1290,34f, 29,68f) > 14400f;
}

int func_4(int iParam0)
{
	if (func_5(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_5(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_6()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_69))
	{
		return;
	}
	unk_0xCAE036C45E7FC720(iLocal_69, &iVar0, 1);
	if (((func_20() && unk_0x4734A6196B611C3B(iLocal_69, unk_0x16F2683693E537C9())) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1)) && iVar0 != 453432689)
	{
		func_18(16);
		func_21();
	}
	if (func_17(unk_0x16F2683693E537C9()) && func_15(32, -1))
	{
		func_10(1);
	}
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		func_8(56);
	}
	if (bLocal_339)
	{
		iVar2 = 0;
		if (unk_0xBFF81ED3B99522C7())
		{
			iVar1 = 0;
			while (iVar1 < 32)
			{
				if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
				{
					if (func_15(32, iVar1))
					{
						iVar2 = 1;
					}
				}
				iVar1++;
			}
			if (iVar2 == 0)
			{
				func_96(2);
				func_10(0);
			}
		}
		if (func_15(8, -1) || func_15(16, -1))
		{
			if ((!unk_0x168558745A6AC21E(iLocal_69) && func_15(16, -1)) && unk_0xF649DD3BF44195C7(iLocal_69, unk_0x16F2683693E537C9(), 17))
			{
				func_7();
			}
			else if (!unk_0x4734A6196B611C3B(iLocal_69, 0))
			{
				func_21();
			}
		}
	}
	else if (!unk_0x4734A6196B611C3B(iLocal_69, unk_0x16F2683693E537C9()))
	{
		func_21();
	}
}

void func_7()
{
	if (bLocal_339)
	{
		if (!unk_0xAFE0D3608EDA7039(iLocal_69))
		{
			unk_0x0C8A454B494DAA0D(iLocal_69);
			return;
		}
	}
	unk_0x2C4A1A0F54A166E8(iLocal_69, unk_0x16F2683693E537C9(), -1, 0);
}

void func_8(int iParam0)
{
	func_9(&uLocal_72, iParam0);
	if (bLocal_339)
	{
		func_9(&(vLocal_242[unk_0x57270EE11514DC67()]), iParam0);
	}
}

void func_9(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_10(bool bParam0)
{
	if (bParam0)
	{
		func_13(&Global_110663, 4);
	}
	else
	{
		func_11(&Global_110663, 4);
	}
}

void func_11(var uParam0, int iParam1)
{
	func_12(uParam0, iParam1);
}

void func_12(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_13(var uParam0, int iParam1)
{
	func_14(uParam0, iParam1);
}

void func_14(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_15(int iParam0, int iParam1)
{
	if (bLocal_339 && iParam1 >= 0)
	{
		return func_16(vLocal_242[iParam1], iParam0);
	}
	return func_16(uLocal_72, iParam0);
}

bool func_16(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

bool func_17(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	if (unk_0x437347B10A200C4B(iParam0, 0))
	{
	}
	return unk_0x4D570FEF9D230CE7(iParam0) == Global_150304;
}

void func_18(int iParam0)
{
	func_19(&uLocal_72, iParam0);
	if (bLocal_339)
	{
		func_19(&(vLocal_242[unk_0x57270EE11514DC67()]), iParam0);
	}
}

void func_19(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_20()
{
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return 0;
	}
	unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 1);
	if ((((iVar0 == 0 || iVar0 == -1569615261) || iVar0 == -1833087301) || iVar0 == -72657034) || iVar0 == 966099553)
	{
		return 0;
	}
	return 1;
}

int func_21()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_69) || unk_0xFEAA79CCC9861C2B(iLocal_69))
	{
		return 1;
	}
	if (Global_1312418.f_6 || unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		return 0;
	}
	if ((func_24() && func_22()) && !bLocal_340)
	{
		return 0;
	}
	if (bLocal_339)
	{
		if (!unk_0xAFE0D3608EDA7039(iLocal_69))
		{
			unk_0x0C8A454B494DAA0D(iLocal_69);
			return 0;
		}
	}
	if (func_15(16, -1))
	{
		unk_0x262EF6C6306BEA6C(iLocal_69, 453432689, -1, false, true);
		unk_0x5745EA6329A91E29(iLocal_69, 453432689, true);
		unk_0x6C3AE6E278DB3D0E(iLocal_69, unk_0x16F2683693E537C9(), 0, 16);
	}
	else if (func_15(8, -1))
	{
		unk_0xE3A2D2E900FEFBE7(iLocal_69, 1);
		unk_0x5745EA6329A91E29(iLocal_69, -1569615261, true);
		unk_0xE69C5AEBE90D20B1(iLocal_69, false);
		unk_0x6C3AE6E278DB3D0E(iLocal_69, unk_0x16F2683693E537C9(), 0, 16);
	}
	else if (!(func_20() && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1)))
	{
		unk_0xE3A2D2E900FEFBE7(iLocal_69, 1);
		unk_0x5745EA6329A91E29(iLocal_69, -1569615261, true);
		unk_0xE69C5AEBE90D20B1(iLocal_69, false);
		unk_0x6C3AE6E278DB3D0E(iLocal_69, unk_0x16F2683693E537C9(), 0, 16);
		func_18(8);
	}
	else
	{
		unk_0x262EF6C6306BEA6C(iLocal_69, 453432689, -1, false, true);
		unk_0x5745EA6329A91E29(iLocal_69, 453432689, true);
		unk_0x6C3AE6E278DB3D0E(iLocal_69, unk_0x16F2683693E537C9(), 0, 16);
		func_18(16);
	}
	func_18(32);
	if (!unk_0xE4EDC4B0E92C078B(iLocal_342))
	{
		iLocal_342 = unk_0x5C3B41825F6AC5A0(iLocal_69);
		unk_0x61755AC17D8F538E(iLocal_342, 1);
		unk_0x516E63E474722206(iLocal_342, 0,7f);
	}
	return 1;
}

bool func_22()
{
	return func_23(4);
}

bool func_23(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[iParam0], 0);
}

int func_24()
{
	if (func_25() == 2)
	{
		return 1;
	}
	return 0;
}

int func_25()
{
	func_26();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_26()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_30(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_29(unk_0x16F2683693E537C9());
			if (func_28(iVar0) && (!func_27(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_28(Global_111638.f_2358.f_539.f_4321))
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
	return Global_41431 == iParam0;
}

bool func_28(int iParam0)
{
	return iParam0 < 3;
}

int func_29(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_30(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_30(int iParam0)
{
	if (func_28(iParam0))
	{
		return func_31(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_31(int iParam0)
{
	return Global_1798[iParam0];
}

int func_32()
{
	bVar0 = false;
	bVar1 = false;
	if (unk_0xEB6A8945D1AC98A1(iLocal_69))
	{
		return 0;
	}
	if (Global_1312418.f_6)
	{
		return 0;
	}
	if (unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), iLocal_69))
	{
		bVar1 = true;
	}
	else if (func_20())
	{
		if (unk_0x292E02BF8ABF889C(unk_0xA30EC016B12C03E4(), iLocal_69) || unk_0xD3AB958FFC730661(unk_0xA30EC016B12C03E4(), iLocal_69))
		{
			bVar0 = true;
		}
	}
	else if (unk_0xB87D13D0C064E9D1(iLocal_69, unk_0x16F2683693E537C9(), 1))
	{
		bVar1 = true;
	}
	if (!(func_22() && func_25() == 2))
	{
		if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_69))
			{
				if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_69, 10f, 10f, 10f, 0, 1, 0))
				{
					bVar0 = true;
					return 1;
				}
				else if (unk_0xF649DD3BF44195C7(iLocal_69, unk_0x16F2683693E537C9(), 17))
				{
					bVar0 = true;
					return 1;
				}
			}
		}
		vVar2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
		vVar5 = { unk_0x68F4C0EC296D3901(iLocal_69, true) };
		fVar8 = vdist2(vVar2, vVar5);
		if (fVar8 > (15f * 15f))
		{
			return 0;
		}
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && fVar8 < (5f * 5f))
		{
			if (unk_0xE608C809F9416F00(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 126,32f, -1298,68f, 28,37f, 129,29f, -1296,8f, 30,39f, 3f, 0, true, 0))
			{
				func_18(8);
				return 1;
			}
		}
		if (vVar2.z > 32f)
		{
			return 0;
		}
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) >= 3)
		{
			return 1;
		}
		if (unk_0x1A069ED4E9BDE50A(unk_0xD803B885F5E47A62()))
		{
			if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
			{
				bVar1 = true;
			}
			else if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
			{
				bVar0 = true;
			}
			else
			{
				unk_0xB2AF08FECE4571EC(unk_0xA30EC016B12C03E4());
			}
		}
		if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iLocal_69))
		{
			fVar9 = vdist2(func_34(), vVar5);
			if (fVar9 > 0,7f)
			{
				bVar1 = true;
			}
			if (vVar5.z < 29f)
			{
				bVar1 = true;
			}
		}
		if (func_33())
		{
			return 1;
		}
	}
	if (bVar1)
	{
		func_18(8);
	}
	if (bVar0)
	{
		func_18(16);
	}
	return (func_15(8, -1) || func_15(16, -1));
}

bool func_33()
{
	return func_2(Global_110663, 4);
}

Vector3 func_34()
{
	return 130,56f, -1298,85f, 29,24f;
}

void func_35()
{
	if (unk_0x437347B10A200C4B(iLocal_69, 0))
	{
		return;
	}
	if (unk_0xEB6A8945D1AC98A1(iLocal_69))
	{
		return;
	}
	if (unk_0x4734A6196B611C3B(iLocal_69, 0))
	{
		return;
	}
	unk_0xCAE036C45E7FC720(iLocal_69, &iVar0, 1);
	iVar1 = 1;
	if (bLocal_339)
	{
		if (!unk_0xAFE0D3608EDA7039(iLocal_69))
		{
			iVar1 = 0;
		}
	}
	if (iVar0 != -1569615261 && iVar1)
	{
		unk_0x5745EA6329A91E29(iLocal_69, -1569615261, false);
		unk_0xE3A2D2E900FEFBE7(iLocal_69, 1);
	}
	if (!func_15(4, -1))
	{
		if (func_17(unk_0x16F2683693E537C9()))
		{
			func_18(4);
		}
	}
	if (func_92())
	{
		func_18(4);
	}
	bVar2 = false;
	bVar3 = vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 129,6385f, -1300,051f, 28,2327f) < (1,5f * 1,5f);
	if (bLocal_339)
	{
		if (!unk_0xEB6A8945D1AC98A1(func_91()))
		{
			if (!unk_0xC7E2E6167C09468B(iLocal_69, func_91()))
			{
				unk_0x0C8C0C840C2D1AD2(iLocal_69, func_91(), -1, 4, 4);
			}
		}
	}
	else if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iLocal_69, true)) < (10f * 10f))
	{
		unk_0x0C8C0C840C2D1AD2(iLocal_69, unk_0x16F2683693E537C9(), 2500, 0, 2);
	}
	if ((!func_15(2, -1) && !func_15(4, -1)) || ((!func_15(64, -1) && func_90()) && bVar3))
	{
		if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_69, 5f, 5f, 2,5f, 0, 1, 1))
		{
			if (func_88())
			{
				func_86();
				if (func_90())
				{
					func_69(&uLocal_73, "SCAUD", "SC_BOUNCE_W", func_85(), 0, 0, 0);
					func_18(64);
					bVar2 = true;
				}
				if (func_65() && !bVar2)
				{
					func_69(&uLocal_73, "SCAUD", "SC_BOUNCE_C", func_85(), 0, 0, 0);
					bVar2 = true;
				}
				if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar4, 1) && !bVar2)
				{
					if (func_64(iVar4))
					{
						func_69(&uLocal_73, "SCAUD", "SC_BOUNCE_G", func_85(), 0, 0, 0);
						bVar2 = true;
					}
				}
				if (func_58() && !bVar2)
				{
					func_55("BOUNCER_COMMENTS_ON_UNDERWEAR");
					bVar2 = true;
				}
				if ((func_25() == 2 && func_22()) && !bVar2)
				{
					func_55("BOUNCER_GREET_TREVOR_OWNS");
					bVar2 = true;
				}
				if (!bVar2)
				{
					if (func_53(0))
					{
						func_55("BOUNCER_GREET_PLAYER_NEUTRAL");
					}
					else if (func_48(0))
					{
						if (func_25() == 0)
						{
							func_55("BOUNCER_GREET_MICHAEL_LIKE");
						}
						else if (func_25() == 1)
						{
							func_55("BOUNCER_GREET_FRANKLIN_LIKE");
						}
						else if (func_25() == 2)
						{
							func_55("BOUNCER_GREET_TREVOR_LIKE");
						}
						else
						{
							func_55("BOUNCER_GREET_PLAYER_NEUTRAL");
						}
					}
					else
					{
						func_55("BOUNCER_GREET_PLAYER_NEUTRAL");
					}
				}
				func_18(2);
			}
		}
	}
	func_36();
}

void func_36()
{
	if (!unk_0xC844350D5D58C99A(iLocal_69))
	{
		return;
	}
	if (bLocal_339)
	{
		if (!unk_0xAFE0D3608EDA7039(iLocal_69))
		{
			return;
		}
	}
	if (!func_43(&uLocal_343))
	{
		return;
	}
	vVar1 = { func_34() };
	fVar4 = func_42();
	if (vdist(unk_0x68F4C0EC296D3901(iLocal_69, true), vVar1) > 2f && unk_0xD1960163A3042274(iLocal_69, 713668775) != 1)
	{
		func_41(0);
	}
	switch (func_40())
	{
		case 0:
			if (vdist(unk_0x68F4C0EC296D3901(iLocal_69, true), vVar1) > 0,3f)
			{
				unk_0x96167B03C5A77156(iLocal_69, vVar1, 1f, -1, 0,1f, 512, fVar4);
			}
			func_41(1);
			break;
		
		case 1:
			if (unk_0xD1960163A3042274(iLocal_69, 713668775) != 1)
			{
				if (unk_0x755FF954DAE327E1((fVar4 - unk_0xD9522BA9E27E1349(iLocal_69))) > 1f)
				{
					unk_0xE655C47E46F9A7E4(iLocal_69, fVar4, 0);
				}
				func_41(2);
			}
			break;
		
		case 2:
			if (unk_0xD1960163A3042274(iLocal_69, 1920390111) != 1)
			{
				unk_0xC6EB89C59F2AF6B8(iLocal_69, func_39(0), func_38(0), 8f, -8f, -1, 2, 0, 0, 0, 0);
				func_41(3);
			}
			break;
		
		case 3:
			if (unk_0xB4ECF989E2C1DAC8(iLocal_69, func_39(0), func_38(0), 3))
			{
				if (unk_0x8CA9406E01C7EE58(iLocal_69, func_39(0), func_38(0)) > 0,985f)
				{
					iVar0 = unk_0x09AC81E49EA267F7(1, 4);
					unk_0xC6EB89C59F2AF6B8(iLocal_69, func_39(iVar0), func_38(iVar0), 8f, -8f, -1, 2, 0, 0, 0, 0);
					func_41(4);
				}
			}
			else
			{
				unk_0xC6EB89C59F2AF6B8(iLocal_69, func_39(0), func_38(0), 8f, -8f, -1, 2, 0, 0, 0, 0);
			}
			break;
		
		case 4:
			iVar0 = func_37(iLocal_69);
			if (iVar0 > -1)
			{
				if (unk_0xB4ECF989E2C1DAC8(iLocal_69, func_39(iVar0), func_38(iVar0), 3))
				{
					if (unk_0x8CA9406E01C7EE58(iLocal_69, func_39(iVar0), func_38(iVar0)) > 0,985f)
					{
						func_41(2);
					}
				}
			}
			else
			{
				func_41(2);
			}
			break;
		
		case 9:
			break;
	}
}

int func_37(int iParam0)
{
	if (unk_0xB4ECF989E2C1DAC8(iParam0, func_39(0), func_38(0), 3))
	{
		return 0;
	}
	if (unk_0xB4ECF989E2C1DAC8(iParam0, func_39(1), func_38(1), 3))
	{
		return 1;
	}
	if (unk_0xB4ECF989E2C1DAC8(iParam0, func_39(2), func_38(2), 3))
	{
		return 2;
	}
	if (unk_0xB4ECF989E2C1DAC8(iParam0, func_39(3), func_38(3), 3))
	{
		return 3;
	}
	return -1;
}

char* func_38(int iParam0)
{
	if (iParam0 == 0)
	{
		return "base";
	}
	if (iParam0 == 1)
	{
		return "idle_a";
	}
	if (iParam0 == 2)
	{
		return "idle_b";
	}
	return "idle_c";
}

char* func_39(int iParam0)
{
	if (iParam0 == 0)
	{
		return "mini@strip_club@idles@bouncer@base";
	}
	if (iParam0 == 1)
	{
		return "mini@strip_club@idles@bouncer@idle_a";
	}
	if (iParam0 == 2)
	{
		return "mini@strip_club@idles@bouncer@idle_b";
	}
	return "mini@strip_club@idles@bouncer@idle_c";
}

int func_40()
{
	if (bLocal_339)
	{
		return Local_238.f_1;
	}
	return uLocal_71;
}

void func_41(int iParam0)
{
	uLocal_71 = iParam0;
	if (bLocal_339)
	{
		vLocal_242[unk_0x57270EE11514DC67()].f_1 = iParam0;
	}
}

float func_42()
{
	return 200,48f;
}

bool func_43(var uParam0)
{
	return func_44(uParam0);
}

int func_44(var uParam0)
{
	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], 30))
		{
			if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], 29))
			{
				return 0;
			}
			if (!func_45(uParam0[iVar0]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_45(var uParam0)
{
	return func_46(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_46(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0, 30))
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0, 29))
		{
			switch (func_47(iParam0))
			{
				case 0:
					return unk_0xB87F6CF6E5628C67(iParam2);
					break;
				
				case 1:
					return unk_0xB4AE0788C1587752(sParam1);
					break;
				
				case 2:
					return unk_0x59F02DA2266A744C(sParam1);
					break;
				
				case 3:
					return unk_0x27117E2CDD4D67C3(sParam1);
					break;
				
				case 4:
					return unk_0x3DDA6C6A285628E4(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0x1C2E18E9C63BEB77(sParam1);
					break;
				
				case 6:
					return unk_0xAE317D00A5A55DF6(sParam1, unk_0xEAE0D21A50E6C7F4(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x64EF15C5E09BAD76(iParam2);
					break;
				
				case 8:
					return unk_0x67C1D9E5B91B2E37(iParam2);
					break;
				
				case 9:
					return unk_0x25F7A4D42AF2AB93();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_47(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_48(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = 65;
			break;
	}
	if (func_49(iParam0) >= iVar0)
	{
		return 1;
	}
	return 0;
}

int func_49(int iParam0)
{
	return Global_111638.f_243[func_50()][iParam0];
}

int func_50()
{
	iVar0 = func_25();
	switch (iVar0)
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
		
		default:
			switch (func_51(-1))
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				case 2:
					return 5;
					break;
				
				case 3:
					return 6;
					break;
				
				case 4:
					return 7;
					break;
				
				default:
					break;
			}
			break;
	}
	return 3;
}

int func_51(int iParam0)
{
	iVar0 = iParam0;
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

var func_52()
{
	return Global_1312745;
}

int func_53(int iParam0)
{
	if (func_49(iParam0) <= func_54(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_54(int iParam0)
{
	if (iParam0 == 0)
	{
		return 35;
	}
	return 35;
}

void func_55(char* sParam0)
{
	bVar0 = true;
	if (bLocal_339)
	{
		bVar0 = unk_0xAFE0D3608EDA7039(iLocal_69);
	}
	if (bVar0)
	{
		func_56(iLocal_69, sParam0, 6);
	}
}

void func_56(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_57(iParam2), 1);
}

int func_57(int iParam0)
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

int func_58()
{
	return func_59(unk_0x16F2683693E537C9());
	return 0;
}

int func_59(int iParam0)
{
	iVar1 = unk_0x134B62B726CEC8E6(iParam0);
	iVar0 = func_61(iParam0, 4);
	return func_60(iVar1, 4, iVar0);
}

int func_60(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 225514697)
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 72 && iParam2 <= 79)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 169 || (iParam2 >= 92 && iParam2 <= 96))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == -1692214353)
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 72 && iParam2 <= 77)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 260)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == -1686040670)
	{
		if (iParam1 == 4)
		{
			if ((iParam2 >= 81 && iParam2 <= 90) || (iParam2 >= 94 && iParam2 <= 103))
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 96)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_61(int iParam0, int iParam1)
{
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0xEB6A8945D1AC98A1(iParam0))
	{
		return -99;
	}
	iVar0 = func_63(iParam1);
	iVar1 = unk_0x36C584991B4C183F(iParam0, iVar0);
	iVar2 = unk_0xDADA8E1DD0D0D9D9(iParam0, iVar0);
	return func_62(iParam0, iVar1, iVar2, iParam1);
}

int func_62(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_63(iParam3);
	iVar1 = unk_0xD2C792E5A65B6BF1(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0x0F84621831DD8D8A(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

int func_63(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_64(int iParam0)
{
	iVar0 = unk_0x654E7ACE881E41FE(iParam0);
	if (((((((iVar0 == 416676503 || iVar0 == -957766203) || iVar0 == 970310034) || iVar0 == 1159398588) || iVar0 == 860033945) || iVar0 == -1212426201) || iVar0 == -1569042529) || iVar0 == 88899580)
	{
		return 1;
	}
	return 0;
}

int func_65()
{
	if (func_68())
	{
		if ((!unk_0xC844350D5D58C99A(func_67()) && !func_66()) && !func_92())
		{
			return 1;
		}
	}
	return 0;
}

int func_66()
{
	if (unk_0x8A22C4C08282BF26(-1196127390) > 0)
	{
		return 1;
	}
	return 0;
}

var func_67()
{
	return Global_94576;
}

int func_68()
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	return 1;
}

int func_69(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_84(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_70(sParam2, iParam3, 0);
}

int func_70(char* sParam0, int iParam1, bool bParam2)
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
					func_83();
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
		if (func_82(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_81();
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
				func_80();
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
				if (func_79())
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
			if (func_78())
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
			func_77();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_76();
		func_71();
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
		func_83();
	}
	return 0;
}

void func_71()
{
	if (!func_72())
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

int func_72()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_75())
	{
		return 0;
	}
	if (func_73(unk_0xD803B885F5E47A62()))
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

bool func_73(int iParam0)
{
	return func_74(iParam0, 20);
}

bool func_74(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_75()
{
	return -1;
}

void func_76()
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

void func_77()
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

int func_78()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_79()
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

void func_80()
{
	if (func_27(14))
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

void func_81()
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

bool func_82(int iParam0, int iParam1)
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

void func_83()
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

void func_84(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_85()
{
	return 3;
}

void func_86()
{
	if (!unk_0x437347B10A200C4B(iLocal_69, 0))
	{
		func_87(&uLocal_73, 4, iLocal_69, "BOUNCER", 0, 1);
	}
}

void func_87(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_88()
{
	if (func_89() || Global_20805 != 0)
	{
		return 0;
	}
	return 1;
}

int func_89()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

bool func_90()
{
	return func_2(Global_110663, 16);
}

int func_91()
{
	if (unk_0x81A93C8315C28F58(Local_238.f_3))
	{
		return unk_0x9539D44F3E4492F6(unk_0x4B2BFE4A3BC248ED(Local_238.f_3));
	}
	return 0;
}

int func_92()
{
	if (unk_0x8A22C4C08282BF26(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

void func_93()
{
	if (unk_0xBFF81ED3B99522C7())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
			{
				if (vLocal_242[iVar0].f_1 != 10)
				{
					Local_238.f_1 = vLocal_242[iVar0].f_1;
				}
				if (func_15(32, iVar0))
				{
					func_96(3);
				}
			}
			iVar0++;
		}
		vLocal_242[unk_0x57270EE11514DC67()].f_1 = 10;
		if (unk_0xC844350D5D58C99A(iLocal_69))
		{
			Local_238.f_2 = unk_0x7D3E8C4CDBD80BDF(iLocal_69);
		}
	}
	else
	{
		if (vLocal_242[unk_0x57270EE11514DC67()].f_1 == Local_238.f_1)
		{
			vLocal_242[unk_0x57270EE11514DC67()].f_1 = 10;
		}
		if (unk_0xE5DBF9B6126856CA(Local_238.f_2))
		{
			iLocal_69 = unk_0x940C1429253D3B1B(unk_0x44E9652BD88FE1B9(Local_238.f_2));
		}
	}
}

int func_94()
{
	if (bLocal_339)
	{
		if (func_4(unk_0xD803B885F5E47A62()) == 185 && Global_2537071.f_4577 == 2)
		{
			return 0;
		}
		if (!unk_0xBFF81ED3B99522C7())
		{
			return 0;
		}
		if (!unk_0xA3FA8B6D2780D661(1))
		{
			return 0;
		}
		if (unk_0xE5DBF9B6126856CA(Local_238.f_2))
		{
			iLocal_69 = unk_0x940C1429253D3B1B(unk_0x44E9652BD88FE1B9(Local_238.f_2));
			return 1;
		}
	}
	if (!func_1())
	{
		if (!func_92() && !unk_0x991B1F0980C62628())
		{
			if (unk_0x8E28E832BEAC3DCE(func_34(), 1f) && vdist2(func_34(), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true)) < (30f * 30f))
			{
				return 0;
			}
		}
	}
	if (func_44(&uLocal_343))
	{
		iLocal_69 = unk_0x36F2404464202779(26, -1613485779, func_34() - Vector(1f, 0f, 0f), func_42(), 1, true);
		func_95(1);
		unk_0x262EF6C6306BEA6C(iLocal_69, 453432689, -1, false, true);
		unk_0x11AD11297DC58CC7(iLocal_69, true);
		unk_0xFADC0A217229F6B5(iLocal_69, true);
		return 1;
	}
	return 0;
}

void func_95(bool bParam0)
{
	if (bParam0)
	{
		func_13(&Global_110663, 64);
	}
	else
	{
		func_11(&Global_110663, 64);
	}
}

void func_96(int iParam0)
{
	uLocal_70 = iParam0;
	if (bLocal_339)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			Local_238 = iParam0;
		}
	}
}

void func_97(var uParam0, int iParam1, bool bParam2)
{
	func_98(uParam0, 0, iParam1, "NULL", bParam2);
}

void func_98(var uParam0, int iParam1, int iParam2, char* sParam3, bool bParam4)
{
	iVar0 = 0;
	bVar1 = false;
	while (!bVar1 && iVar0 < 15)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], 30))
		{
			if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], iParam1))
			{
				if (iParam2 != -1)
				{
					if (uParam0[iVar0]->f_1 == iParam2)
					{
						bVar1 = true;
					}
				}
				if (!bVar1)
				{
					if (iParam1 != 4)
					{
						if (!unk_0x7F8A39872A07D2CE(sParam3, "NULL"))
						{
							if (unk_0x7F8A39872A07D2CE(&(uParam0[iVar0]->f_2), sParam3))
							{
								bVar1 = true;
							}
						}
					}
				}
				if (!bVar1)
				{
					if (iParam1 == 9)
					{
						bVar1 = true;
					}
				}
			}
		}
		if (!bVar1)
		{
			iVar0++;
		}
	}
	if (!bVar1)
	{
		return;
	}
	if (bParam4)
	{
		func_101(uParam0[iVar0]);
	}
	bVar2 = false;
	while (!bVar2 && iVar0 < 14)
	{
		iVar0++;
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], 30))
		{
			func_100(uParam0[iVar0], uParam0[(iVar0 - 1)]);
		}
		else
		{
			func_99(uParam0[(iVar0 - 1)]);
			bVar2 = true;
		}
	}
	if (!bVar2)
	{
		func_99(uParam0[iVar0]);
	}
}

void func_99(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_100(var uParam0, var uParam1)
{
	*uParam1 = *uParam0;
	uParam1->f_1 = uParam0->f_1;
	uParam1->f_2 = { uParam0->f_2 };
}

void func_101(var uParam0)
{
	func_102(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_102(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0, 30))
	{
		switch (func_47(iParam0))
		{
			case 0:
				unk_0x71199B01895C6202(iParam2);
				break;
			
			case 1:
				unk_0x8D17794CE3273D70(sParam1);
				break;
			
			case 2:
				unk_0x413168EF79E35C7B(sParam1);
				break;
			
			case 3:
				unk_0xF5A41F3D3B38EFE3(sParam1);
				break;
			
			case 4:
				unk_0xDB8844D4B7C60440(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x2F3540C2227116A3(sParam1);
				break;
			
			case 6:
				unk_0x8C26F31DFF77D124();
				break;
			
			case 7:
				unk_0xB60B60856BF98DCE(iParam2);
				break;
			
			case 8:
				unk_0x11CCD0ACA866C6C5(iParam2, unk_0xEAE0D21A50E6C7F4(iParam0, 26));
				break;
			
			case 9:
				unk_0x29D7581AEF4440C2();
				break;
			
			default:
				break;
		}
	}
}

int func_103()
{
	if (bLocal_339)
	{
		if (Local_238 <= 1 || func_44(&uLocal_343))
		{
			return Local_238;
		}
		else
		{
			return 0;
		}
	}
	return uLocal_70;
}

void func_104()
{
	if (unk_0xBFF81ED3B99522C7())
	{
		iVar1 = -1;
		fVar2 = 999999f;
		iVar0 = 0;
		while (iVar0 < vLocal_242.x)
		{
			if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
			{
				if (vLocal_242[iVar0].f_2 > -0,5f)
				{
					if (vLocal_242[iVar0].f_2 < fVar2)
					{
						fVar2 = vLocal_242[iVar0].f_2;
						iVar1 = iVar0;
					}
				}
			}
			iVar0++;
		}
		if (iVar1 > -1)
		{
			Local_238.f_3 = unk_0xF4FB3A22FC4991C8(iVar1);
		}
		else
		{
			Local_238.f_3 = 0;
		}
	}
}

void func_105()
{
	if ((!unk_0xEB6A8945D1AC98A1(iLocal_69) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && !func_17(unk_0x16F2683693E537C9()))
	{
		vLocal_242[unk_0x57270EE11514DC67()].f_2 = vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iLocal_69, true));
	}
	else
	{
		vLocal_242[unk_0x57270EE11514DC67()].f_2 = -1f;
	}
}

int func_106(int iParam0)
{
	switch (func_107())
	{
		case 0:
			if (Global_1590535[iParam0] == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_107()
{
	return Global_30768;
}

int func_108()
{
	func_115(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_114())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_113())
	{
		return 1;
	}
	if (func_112(159))
	{
		if (!func_111())
		{
			return 1;
		}
	}
	if (func_112(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_109() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_109()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_109()
{
	switch (func_107())
	{
		case 0:
			return func_110();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_110()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

bool func_111()
{
	return Global_2450632.f_598;
}

int func_112(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_113()
{
	return Global_2460680;
}

bool func_114()
{
	return Global_2450632.f_593;
}

void func_115(var uParam0)
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
					func_116(iVar0);
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

void func_116(int iParam0)
{
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_118(vVar0.y, 1, 1))
		{
			iVar3 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar3))
			{
				if (unk_0x405E212DDE472467(iVar3, 0))
				{
					iVar4 = unk_0x6937EA2286828455(iVar3, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar4, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_117(iVar4, &bVar5))
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

int func_117(int iParam0, var uParam1)
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

int func_118(int iParam0, bool bParam1, bool bParam2)
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

void func_119(var uParam0)
{
	if (uParam0->f_271)
	{
		if ((unk_0xF4CCC8CB6DE7F1AE() >= (uParam0->f_272 + uParam0->f_273) || unk_0xEAE0D21A50E6C7F4(Global_98744.f_20, 2)) || unk_0xEAE0D21A50E6C7F4(Global_98744.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], 30))
				{
					if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], 29))
					{
						func_120(uParam0[iVar0]);
						uParam0->f_272 = unk_0xF4CCC8CB6DE7F1AE();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_120(int iParam0)
{
	func_121(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_121(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(*iParam0, 30))
	{
		switch (func_47(*iParam0))
		{
			case 0:
				unk_0x523BCC9DC80CD82F(iParam2);
				break;
			
			case 1:
				unk_0x3F423BF5B8125A50(sParam1);
				break;
			
			case 2:
				unk_0x4E09E67A27F104A7(sParam1);
				break;
			
			case 3:
				unk_0x0D3BE1DE0262A012(sParam1, unk_0xEAE0D21A50E6C7F4(*iParam0, 28));
				break;
			
			case 4:
				unk_0x36187931D29E5BBE(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x29398344B9E5B8A7(sParam1);
				break;
			
			case 6:
				unk_0xAE317D00A5A55DF6(sParam1, unk_0xEAE0D21A50E6C7F4(*iParam0, 27), -1);
				break;
			
			case 7:
				unk_0x8CFFBE74CB5C864A(iParam2);
				break;
			
			case 8:
				unk_0xD7992BEF7A9D109E(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x9E5E60D8C63FD9D1();
				break;
			
			default:
				break;
		}
		unk_0x5D96D8530B3D0904(iParam0, 29);
	}
}

void func_122(bool bParam0)
{
	if (bParam0)
	{
		func_13(&Global_110663, 8);
	}
	else
	{
		func_11(&Global_110663, 8);
	}
}

void func_123(var uParam0)
{
	func_124(uParam0, func_39(0));
	func_124(uParam0, func_39(1));
	func_124(uParam0, func_39(2));
	func_124(uParam0, func_39(3));
}

void func_124(var uParam0, char* sParam1)
{
	func_125(uParam0, 1, -1, sParam1, 0);
}

void func_125(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], 30))
		{
			if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], iParam1))
			{
				if (iParam2 != -1)
				{
					if (uParam0[iVar0]->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!unk_0x7F8A39872A07D2CE(sParam3, "NULL"))
					{
						if (unk_0x7F8A39872A07D2CE(&(uParam0[iVar0]->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_271)
	{
		uParam0->f_271 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], 30))
		{
			StringCopy(&(uParam0[iVar0]->f_2), sParam3, 64);
			uParam0[iVar0]->f_1 = iParam2;
			(*uParam0)[iVar0] = iParam4;
			unk_0x5D96D8530B3D0904(uParam0[iVar0], iParam1);
			unk_0x5D96D8530B3D0904(uParam0[iVar0], 30);
			return;
		}
		iVar0++;
	}
}

void func_126(var uParam0, int iParam1)
{
	func_125(uParam0, 0, iParam1, "NULL", 0);
}

int func_127(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_129();
			}
			else
			{
				return 0;
			}
		}
		if (!func_128())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_129();
					}
					else
					{
						return 0;
					}
				}
				if (func_114())
				{
					if (!bParam2)
					{
						func_129();
					}
					else
					{
						return 0;
					}
				}
				if (func_112(157))
				{
					if (!bParam2)
					{
						func_129();
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
					func_129();
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
				func_129();
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
			func_129();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_128()
{
	return Global_1312854;
}

void func_129()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_130(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_273 = iParam1;
	}
}

void func_131()
{
	unk_0x71199B01895C6202(-1613485779);
	if (unk_0xC844350D5D58C99A(iLocal_69))
	{
		if (unk_0xAF6690C489CC6203(iLocal_69) && func_135())
		{
			unk_0x6DAD7906B73F064D(&iLocal_69);
		}
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_342))
	{
		unk_0x142CC44DB769B57E(&iLocal_342);
	}
	func_95(0);
	func_134(0);
	unk_0x2952D66A502EA873(iLocal_341, 0);
	func_132(&uLocal_343, 0);
	unk_0x10FAF14A60A0DBE1();
}

void func_132(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		func_133(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_99(uParam0[iVar0]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}

void func_133(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], 30))
		{
			func_101(uParam0[iVar0]);
		}
		iVar0++;
	}
	uParam0->f_271 = 1;
}

void func_134(bool bParam0)
{
	if (bParam0)
	{
		func_13(&Global_110663, 128);
	}
	else
	{
		func_11(&Global_110663, 128);
	}
}

bool func_135()
{
	if (!bLocal_339)
	{
		return 1;
	}
	return (unk_0xAFE0D3608EDA7039(iLocal_69) && unk_0x88D20249AE06D0D5("sclub_front_bouncer", -1, 0) == 1);
}

