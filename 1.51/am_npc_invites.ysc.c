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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0,0375f;
	fLocal_34 = 0,17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_60 = ((0,05f + 0,275f) - 0,01f);
	iLocal_192 = -1;
	iLocal_910 = -1;
	func_368(ScriptParam_0);
	while (true)
	{
		func_367();
		if (func_357())
		{
			func_348();
		}
		switch (func_347(unk_0x57270EE11514DC67()))
		{
			case 0:
				if (func_346() == 2)
				{
					func_345();
					uLocal_598 = Local_177.f_7;
					vLocal_603[unk_0x57270EE11514DC67()].f_1 = 2;
				}
				else if (func_346() == 6)
				{
					vLocal_603[unk_0x57270EE11514DC67()].f_1 = 5;
				}
				break;
			
			case 2:
				if (func_346() == 2)
				{
					func_14();
				}
				else if (func_346() == 6)
				{
					vLocal_603[unk_0x57270EE11514DC67()].f_1 = 5;
				}
				break;
			
			case 5:
				func_13(&(Local_177.f_12));
				if (func_12(&(Local_177.f_12)))
				{
					vLocal_603[unk_0x57270EE11514DC67()].f_1 = 6;
				}
				break;
			
			case 3:
				vLocal_603[unk_0x57270EE11514DC67()].f_1 = 6;
			
			case 6:
				func_348();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_346())
			{
				case 0:
					Local_177.f_2 = 2;
					break;
				
				case 2:
					func_3();
					if (func_1())
					{
						Local_177.f_2 = 6;
					}
					break;
				
				case 6:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

bool func_2()
{
	return unk_0xEAE0D21A50E6C7F4(Local_177, 0);
}

void func_3()
{
	if (unk_0xBFF81ED3B99522C7())
	{
		if (iLocal_191 >= vLocal_603.x)
		{
			iLocal_191 = 0;
			iLocal_706 = 0;
			iLocal_192 = -1;
			unk_0x0674E58A79778E99(&iLocal_705, 0);
			unk_0x0674E58A79778E99(&iLocal_705, 1);
			unk_0x0674E58A79778E99(&iLocal_705, 3);
			unk_0x0674E58A79778E99(&iLocal_705, 4);
			unk_0x0674E58A79778E99(&iLocal_705, 5);
			if (!func_11(&uLocal_599) || func_10(&uLocal_599, 5000, 0))
			{
				unk_0x5D96D8530B3D0904(&iLocal_705, 2);
			}
		}
		iVar0 = iLocal_191;
		if (func_10(&(Local_177.f_8), 20000, 0))
		{
			if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
			{
				iVar2 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
				if (func_9(iVar2, 0, 1))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_177, 5))
					{
						if (!func_6(iVar2, 1, 0))
						{
							if (unk_0xEAE0D21A50E6C7F4(vLocal_603[iVar0], 2))
							{
								if (!unk_0xEAE0D21A50E6C7F4(vLocal_603[iVar0], 3))
								{
									iLocal_706++;
									if (Local_177.f_5 != iVar0)
									{
										if (iLocal_192 == -1)
										{
											if (!unk_0xEAE0D21A50E6C7F4(iLocal_705, 1))
											{
												unk_0x5D96D8530B3D0904(&iLocal_705, 1);
											}
											if (!unk_0xEAE0D21A50E6C7F4(iLocal_705, 3))
											{
												if (!unk_0xEAE0D21A50E6C7F4(vLocal_603[iVar0], 0))
												{
													unk_0x5D96D8530B3D0904(&iLocal_705, 3);
												}
											}
											if (!unk_0xEAE0D21A50E6C7F4(iLocal_705, 4))
											{
												if (!unk_0xEAE0D21A50E6C7F4(vLocal_603[iVar0], 1))
												{
													unk_0x5D96D8530B3D0904(&iLocal_705, 4);
												}
											}
											iLocal_192 = iVar0;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(iLocal_705, 2))
		{
			if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
			{
				iVar2 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
				if (func_9(iVar2, 0, 1))
				{
				}
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1714, 1))
		{
			if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
			{
				iVar2 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
				if (func_9(iVar2, 0, 1))
				{
					iVar1 = iVar2;
					if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1715, iVar1))
					{
						if (!func_11(&(Local_177.f_10)))
						{
							func_5(&(Local_177.f_10), 0, 0);
						}
						else if (func_10(&(Local_177.f_10), 10000, 0))
						{
							if (!unk_0xEAE0D21A50E6C7F4(vLocal_603[iVar0], 0))
							{
								unk_0x5D96D8530B3D0904(&iLocal_705, 3);
							}
							if (!unk_0xEAE0D21A50E6C7F4(vLocal_603[iVar0], 1))
							{
								unk_0x5D96D8530B3D0904(&iLocal_705, 4);
							}
							unk_0x0674E58A79778E99(&(Global_2537071.f_1714), 1);
							unk_0x5D96D8530B3D0904(&iLocal_705, 5);
							func_4(&(Local_177.f_10));
						}
					}
				}
			}
		}
		iLocal_191++;
		if (iLocal_191 >= vLocal_603.x)
		{
			unk_0x5D96D8530B3D0904(&iLocal_705, 0);
			if (unk_0xEAE0D21A50E6C7F4(iLocal_705, 2))
			{
				unk_0x0674E58A79778E99(&iLocal_705, 2);
				func_4(&uLocal_599);
				func_5(&uLocal_599, 0, 0);
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_177, 5))
			{
				if (unk_0xEAE0D21A50E6C7F4(iLocal_705, 1) || unk_0xEAE0D21A50E6C7F4(iLocal_705, 5))
				{
					if (iLocal_706 >= 1 || unk_0xEAE0D21A50E6C7F4(iLocal_705, 5))
					{
						unk_0x5D96D8530B3D0904(&Local_177, 5);
						if (unk_0xEAE0D21A50E6C7F4(iLocal_705, 3))
						{
							unk_0x5D96D8530B3D0904(&Local_177, 7);
						}
						if (unk_0xEAE0D21A50E6C7F4(iLocal_705, 4))
						{
							unk_0x5D96D8530B3D0904(&Local_177, 8);
						}
						if (iLocal_192 > -1)
						{
							Local_177.f_5 = iLocal_192;
							if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Local_177.f_5)))
							{
							}
						}
						if (unk_0xEAE0D21A50E6C7F4(iLocal_705, 5))
						{
							unk_0x5D96D8530B3D0904(&Local_177, 9);
						}
						unk_0x0674E58A79778E99(&uLocal_704, 0);
					}
				}
			}
		}
	}
}

void func_4(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_5(var uParam0, bool bParam1, bool bParam2)
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

int func_6(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_7(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[iParam0] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_7(int iParam0)
{
	return func_8(iParam0);
}

bool func_8(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_13.f_1, 0);
}

int func_9(int iParam0, bool bParam1, bool bParam2)
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

int func_10(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_5(uParam0, bParam2, 0);
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

bool func_11(var uParam0)
{
	return uParam0->f_1;
}

int func_12(var uParam0)
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

void func_13(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			func_5(uParam0, 0, 0);
		}
	}
}

void func_14()
{
	func_15();
	switch (vLocal_603[unk_0x57270EE11514DC67()].f_2)
	{
		case 0:
			break;
	}
}

void func_15()
{
	iVar0 = unk_0x57270EE11514DC67();
	iVar1 = 0;
	if (func_9(unk_0xD803B885F5E47A62(), 0, 1))
	{
		if (!func_6(unk_0xD803B885F5E47A62(), 1, 0) && func_344() == 0)
		{
			if (!unk_0xEAE0D21A50E6C7F4(vLocal_603[iVar0], 2))
			{
				if (!func_11(&uLocal_700))
				{
					func_5(&uLocal_700, 0, 0);
				}
				else if (func_10(&uLocal_700, 570000, 0))
				{
					unk_0x5D96D8530B3D0904(&(vLocal_603[iVar0]), 2);
				}
			}
		}
		else
		{
			if (unk_0xEAE0D21A50E6C7F4(vLocal_603[iVar0], 2))
			{
				func_4(&uLocal_700);
				unk_0x0674E58A79778E99(&(vLocal_603[iVar0]), 2);
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1729, 24))
			{
				unk_0x0674E58A79778E99(&(Global_2537071.f_1729), 24);
			}
		}
		if (!func_11(&uLocal_702) || func_10(&uLocal_702, 600000, 0))
		{
			func_345();
			func_4(&uLocal_702);
			func_5(&uLocal_702, 0, 0);
		}
		if (!unk_0xEAE0D21A50E6C7F4(vLocal_603[iVar0], 3))
		{
			if (func_343())
			{
				unk_0x5D96D8530B3D0904(&(vLocal_603[iVar0]), 3);
			}
		}
		else if (!func_343())
		{
			unk_0x0674E58A79778E99(&(vLocal_603[iVar0]), 3);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1714, 2))
	{
		func_314(86, &iLocal_708, 0);
		if (func_298(86, &iLocal_707, &uLocal_709, &(Global_2537071.f_1730), 2))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1730, 2))
			{
				iVar1 = func_294(17);
				if (iVar1 > 0)
				{
					if (unk_0x7A7BDE279347E517(iVar1, false, true, 0, -1, 0))
					{
						if (func_293())
						{
							func_282(1948102096, iVar1, &uVar2, 0, 1, 0);
						}
						else
						{
							func_280(-iVar1, 1, 1, 0f);
							unk_0x8A174305CB36B1A5(iVar1, false, true);
						}
					}
				}
			}
			func_278(97, 1);
			iLocal_707 = 0;
			func_4(&uLocal_709);
			unk_0x0674E58A79778E99(&(Global_2537071.f_1714), 2);
		}
	}
	else if (iLocal_708 != 0)
	{
		iLocal_708 = 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1714, 3))
	{
		func_314(18, &iLocal_712, 0);
		if (func_298(18, &iLocal_711, &uLocal_713, &(Global_2537071.f_1730), 8))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1730, 8))
			{
				iVar1 = func_294(18);
				if (iVar1 > 0)
				{
					if (unk_0x7A7BDE279347E517(iVar1, false, true, 0, -1, 0))
					{
						if (func_293())
						{
							func_282(1948102096, iVar1, &uVar3, 0, 1, 0);
						}
						else
						{
							func_280(-iVar1, 1, 1, 0f);
							unk_0x8A174305CB36B1A5(iVar1, false, true);
						}
					}
				}
			}
			func_278(99, 1);
			iLocal_711 = 0;
			func_4(&uLocal_713);
			unk_0x0674E58A79778E99(&(Global_2537071.f_1714), 3);
		}
	}
	else if (iLocal_712 != 0)
	{
		iLocal_712 = 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1714, 0))
	{
		func_314(12, &iLocal_729, 0);
		if (func_298(12, &iLocal_728, &uLocal_601, &(Global_2537071.f_1729), 24))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1729, 24))
			{
				iVar1 = func_294(15);
				if (iVar1 > 0)
				{
					if (unk_0x7A7BDE279347E517(iVar1, false, true, 0, -1, 0))
					{
						if (func_293())
						{
							func_282(1948102096, iVar1, &uVar4, 0, 1, 0);
						}
						else
						{
							func_280(-iVar1, 1, 1, 0f);
							unk_0x8A174305CB36B1A5(iVar1, false, true);
						}
					}
				}
			}
			func_278(88, 1);
			iLocal_728 = 0;
			func_4(&uLocal_601);
			unk_0x0674E58A79778E99(&(Global_2537071.f_1714), 0);
		}
	}
	else if (iLocal_729 != 0)
	{
		iLocal_729 = 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1714, 6))
	{
		func_314(12, &uLocal_724, 1);
		if (func_266(12, &iLocal_723, &uLocal_725, &Global_1662149, 9))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_1662149, 9))
			{
				iVar1 = func_294(36);
				if (unk_0x7A7BDE279347E517(iVar1, false, true, 0, -1, 0))
				{
					if (iVar1 > 0)
					{
						if (func_293())
						{
							func_282(1948102096, iVar1, &uVar5, 0, 1, 0);
						}
						else
						{
							func_280(-iVar1, 1, 1, 0f);
							unk_0x8A174305CB36B1A5(iVar1, false, true);
						}
					}
				}
			}
			iLocal_723 = 0;
			func_4(&uLocal_725);
			unk_0x0674E58A79778E99(&(Global_2537071.f_1714), 6);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1714, 4))
	{
		func_314(31, &iLocal_716, 0);
		if (func_298(31, &iLocal_715, &uLocal_717, &(Global_2537071.f_1730), 9))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1730, 9))
			{
				iVar1 = func_294(19);
				if (iVar1 > 0)
				{
					if (unk_0x7A7BDE279347E517(iVar1, false, true, 0, -1, 0))
					{
						if (func_293())
						{
							func_282(1948102096, iVar1, &uVar6, 0, 1, 0);
						}
						else
						{
							func_280(-iVar1, 1, 1, 0f);
							unk_0x8A174305CB36B1A5(iVar1, false, true);
						}
					}
				}
			}
			func_278(100, 1);
			iLocal_715 = 0;
			func_4(&uLocal_717);
			unk_0x0674E58A79778E99(&(Global_2537071.f_1714), 4);
		}
	}
	else if (iLocal_716 != 0)
	{
		iLocal_716 = 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1714, 5))
	{
		func_314(20, &iLocal_720, 0);
		if (func_298(20, &iLocal_719, &uLocal_721, &(Global_2537071.f_1731), 18))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1731, 18))
			{
				iVar1 = func_294(21);
				if (iVar1 > 0)
				{
					if (unk_0x7A7BDE279347E517(iVar1, false, true, 0, -1, 0))
					{
						if (func_293())
						{
							func_282(1948102096, iVar1, &uVar7, 0, 1, 0);
						}
						else
						{
							func_280(-iVar1, 1, 1, 0f);
							unk_0x8A174305CB36B1A5(iVar1, false, true);
						}
					}
				}
			}
			func_278(106, 1);
			iLocal_719 = 0;
			func_4(&uLocal_721);
			unk_0x0674E58A79778E99(&(Global_2537071.f_1714), 5);
		}
	}
	else if (iLocal_720 != 0)
	{
		iLocal_720 = 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1714, 7))
	{
		if (func_16(&bVar8))
		{
			if (!bVar8)
			{
				iVar1 = func_294(64);
				if (iVar1 > 0)
				{
					if (unk_0x7A7BDE279347E517(iVar1, false, true, 0, -1, 0))
					{
						if (func_293())
						{
							func_282(1948102096, iVar1, &uVar9, 0, 1, 0);
						}
						else
						{
							func_280(-iVar1, 1, 1, 0f);
							unk_0x8A174305CB36B1A5(iVar1, false, true);
						}
					}
				}
			}
			unk_0x0674E58A79778E99(&(Global_2537071.f_1714), 7);
		}
	}
	else if (iLocal_720 != 0)
	{
		iLocal_720 = 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1714, 1))
	{
		if (!unk_0xBFF81ED3B99522C7())
		{
			unk_0x0674E58A79778E99(&(Global_2537071.f_1714), 1);
		}
	}
}

int func_16(var uParam0)
{
	switch (iLocal_909)
	{
		case 0:
			if (!func_11(&uLocal_921))
			{
				func_5(&uLocal_921, 0, 0);
			}
			else if (func_10(&uLocal_921, 10000, 0))
			{
				func_4(&uLocal_921);
				iLocal_909++;
			}
			break;
		
		case 1:
			iLocal_910 = func_263(func_264(func_265()));
			if (iLocal_910 != -1)
			{
				iLocal_909++;
			}
			else
			{
				*uParam0 = 1;
				iLocal_909 = 0;
				return 1;
			}
			break;
		
		case 2:
			Local_911 = { func_260(iLocal_910) };
			if (func_259(&Local_911))
			{
				iLocal_909++;
			}
			else
			{
				*uParam0 = 1;
				iLocal_909 = 0;
				return 1;
			}
			break;
		
		case 3:
			func_17(&Local_911, 1, 0, 0, 1);
			iLocal_909 = 4;
			break;
		
		case 4:
			Var0.f_1 = -1;
			Var0.f_2 = -1;
			Var0.f_9 = -1;
			Local_911 = { Var0 };
			*uParam0 = 0;
			iLocal_909 = 0;
			return 1;
			break;
	}
	return 0;
}

void func_17(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 5;
	vVar1 = { func_258(uParam0) };
	Var4 = { func_243(uParam0) };
	Var34 = { func_226(uParam0) };
	Var39 = { func_203(uParam0) };
	iVar70 = func_174(iVar0, vVar1, Var4, Var34, Var39, *uParam0);
	if (iVar70 == -1)
	{
		return;
	}
	func_64(uParam0->f_3, 1);
	if (!bParam1)
	{
		return;
	}
	uVar71 = func_63(*uParam0);
	iVar72 = func_62(uParam0);
	iVar73 = func_54(uParam0);
	Var74 = { func_53(uParam0, 0) };
	StringCopy(&cVar90, "", 64);
	iVar106 = 16777215;
	if (bParam4)
	{
		iVar106 = func_51(uParam0);
	}
	func_20(uVar71, iVar72, vVar1, uParam0->f_2, iVar73, &Var74, &cVar90, uParam0->f_3, bParam3, iVar106, 0);
	if (bParam2)
	{
		Var107 = { func_18(iVar73) };
		StringCopy(&cVar111, unk_0x19C9F30A7697B43C(&Var107), 32);
		unk_0x888C9EC0E35B2A9E(&cVar111);
	}
}

struct<4> func_18(int iParam0)
{
	return func_19(iParam0);
}

struct<4> func_19(int iParam0)
{
	return Global_1798[iParam0].f_3;
}

void func_20(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, char* sParam7, char* sParam8, struct<6> Param9, bool bParam15, int iParam16, int iParam17)
{
	if (iParam6 == 145)
	{
		return;
	}
	if (!bParam15)
	{
		if (!func_50())
		{
			return;
		}
	}
	if (!func_49(sParam7, sParam8))
	{
		return;
	}
	bVar0 = true;
	iVar1 = func_48(iParam6, sParam7, bVar0);
	if (iVar1 != -1)
	{
		bVar2 = false;
		func_45(iVar1, bVar2);
	}
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_9 = -1;
	func_44(&Var3);
	if (func_42(&Param9, &Var3, 0))
	{
		iVar13 = func_40(&Var3);
		uVar14 = func_36(&Var3);
	}
	iVar15 = iParam6;
	bVar16 = false;
	bVar17 = false;
	iVar18 = 0;
	iVar19 = 0;
	iVar20 = 0;
	iVar21 = 0;
	iVar22 = 0;
	iVar23 = 0;
	func_21(uParam0, iParam1, vParam2, iParam5, iVar15, bVar16, sParam7, sParam8, Param9, iVar13, iParam16, bParam15, bVar17, iVar18, iVar19, iVar20, iVar21, iVar22, iVar23, uVar14, iParam17);
}

void func_21(var uParam0, var uParam1, vector3 vParam2, int iParam5, int iParam6, bool bParam7, char* sParam8, char* sParam9, char[24] cParam10, int iParam16, var uParam17, bool bParam18, bool bParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, var uParam26, var uParam27)
{
	iVar0 = func_35();
	iVar1 = 145;
	if (bParam7)
	{
		iVar0 = unk_0x117658E336116132(iParam6);
	}
	else
	{
		iVar1 = iParam6;
	}
	if (bParam7)
	{
		if (func_34())
		{
			func_31(iVar0, 1, 0, 0);
			return;
		}
	}
	iVar2 = Global_1387711;
	if (iVar2 >= 12)
	{
		iVar2 = (iVar2 - 1);
	}
	iVar3 = (iVar2 - 1);
	while (iVar3 >= 0)
	{
		Global_2392006[iVar2] = { Global_2392006[iVar3] };
		iVar2 = (iVar2 - 1);
		iVar3 = (iVar3 - 1);
	}
	Global_1387711++;
	if (Global_1387711 > 12)
	{
		Global_1387711 = 12;
	}
	iVar4 = 0;
	Global_2392006[iVar4] = 0;
	Global_2392006[iVar4].f_2 = 0;
	Global_2392006[iVar4].f_4 = 0;
	Global_2392006[iVar4].f_5 = bParam18;
	Global_2392006[iVar4].f_6 = { vParam2 };
	Global_2392006[iVar4].f_9 = iVar0;
	Global_2392006[iVar4].f_10 = iVar1;
	Global_2392006[iVar4].f_11 = bParam7;
	Global_2392006[iVar4].f_12 = iParam5;
	Global_2392006[iVar4].f_13 = uParam0;
	Global_2392006[iVar4].f_14 = uParam1;
	Global_2392006[iVar4].f_62 = iParam16;
	Global_2392006[iVar4].f_63 = uParam26;
	Global_2392006[iVar4].f_75 = uParam27;
	Global_2392006[iVar4].f_15 = func_30(iParam5, &cParam10);
	Global_2392006[iVar4].f_16 = 0;
	Global_2392006[iVar4].f_16.f_1 = 0;
	Global_2392006[iVar4].f_16.f_2 = 0;
	Global_2392006[iVar4].f_19 = 1;
	Global_2392006[iVar4].f_20 = 0;
	StringCopy(&(Global_2392006[iVar4].f_21), sParam8, 64);
	StringCopy(&(Global_2392006[iVar4].f_37), sParam9, 64);
	Global_2392006[iVar4].f_53 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 5000);
	Global_2392006[iVar4].f_54 = -1;
	Global_2392006[iVar4].f_55 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 30000);
	Global_2392006[iVar4].f_56 = { cParam10 };
	Global_2392006[iVar4].f_64 = uParam17;
	Global_2392006[iVar4].f_68 = iParam20;
	Global_2392006[iVar4].f_69 = iParam21;
	Global_2392006[iVar4].f_71 = iParam22;
	Global_2392006[iVar4].f_74 = iParam24;
	Global_2392006[iVar4].f_81 = iParam25;
	Global_2392006[iVar4].f_3 = func_26(iVar4);
	Global_2392006[iVar4].f_72 = iParam23;
	Global_2392006[iVar4].f_76 = func_25(iVar0);
	Global_2392006[iVar4].f_77 = 0;
	if (Global_2392006[iVar4].f_5)
	{
		Global_2392006[iVar4].f_73 = 0;
	}
	else
	{
		Global_2392006[iVar4].f_73 = Global_2395344;
	}
	Global_2395344++;
	Global_2392006[iVar4].f_70 = -1;
	if (bParam7)
	{
		if (func_7(iVar0))
		{
			if (func_24(iVar0))
			{
				Global_2392006[iVar4].f_70 = Global_1590535[iVar0].f_99.f_36;
			}
		}
	}
	if (iParam5 == 40)
	{
		Global_2392006[iVar4].f_19 = 0;
	}
	if (!bParam7)
	{
		if (!unk_0xEA6BC48857E0AC4C(&(Global_2392006[iVar4].f_37)))
		{
			Global_2392006[iVar4].f_19 = 0;
		}
	}
	if (bParam7)
	{
		if (Global_2392006[iVar4].f_13 == 0)
		{
			if (Global_2392006[iVar4].f_14 == 1)
			{
				if (!unk_0xEA6BC48857E0AC4C(&(Global_2392006[iVar4].f_37)))
				{
					if (unk_0x7F8A39872A07D2CE(&(Global_2392006[iVar4].f_37), "[HEIST PREP CUTSCENE]"))
					{
						Global_2392006[iVar4].f_19 = 0;
						Global_2392006[iVar4].f_20 = 1;
					}
				}
			}
		}
	}
	func_23();
	if (bParam19)
	{
		Global_2392006[iVar4].f_65 = 1;
		Global_2392006[iVar4].f_66 = 0;
		Global_2392006[iVar4].f_67 = 0;
	}
	else
	{
		Global_2392006[iVar4].f_65 = 0;
		Global_2392006[iVar4].f_66 = 0;
		Global_2392006[iVar4].f_67 = 1;
	}
	Global_2392006[iVar4].f_78 = 0;
	Global_2392006[iVar4].f_79 = 0;
	Global_2392006[iVar4].f_80 = 0;
	if (unk_0xDC30EF462887322E())
	{
		if (bParam7)
		{
			bVar5 = true;
			if (bVar5)
			{
				Var6 = { func_22(iVar0) };
				iVar19 = unk_0xCB1A6FC304A3D66F(&Var6);
				if (iVar19 != -1)
				{
					Global_2392006[iVar4].f_78 = iVar19;
					Global_2392006[iVar4].f_79 = 1;
					Global_2392006[iVar4].f_80 = 0;
				}
			}
		}
	}
}

struct<13> func_22(int iParam0)
{
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

void func_23()
{
	Global_1387714 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 30000);
}

bool func_24(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_13.f_1, 1);
}

int func_25(int iParam0)
{
	if (iParam0 == func_35())
	{
		return 0;
	}
	if (!func_9(iParam0, 0, 1))
	{
		return 0;
	}
	Var0 = { func_22(iParam0) };
	if (!unk_0x04A104F429E6CBB0(&Var0))
	{
		return 0;
	}
	if (func_7(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_26(int iParam0)
{
	if (Global_1387711 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_1387711)
	{
		if (!func_29(iVar0))
		{
			if (iVar0 != iParam0)
			{
				if (((Global_2392006[iVar0].f_13 == Global_2392006[iParam0].f_13 && Global_2392006[iVar0].f_12 == Global_2392006[iParam0].f_12) && func_28(Global_2392006[iVar0].f_6, Global_2392006[iParam0].f_6, 1056964608, 0)) && unk_0x7F8A39872A07D2CE(&(Global_2392006[iVar0].f_56), &(Global_2392006[iParam0].f_56)))
				{
					bVar1 = false;
					if (!bVar1)
					{
						if (func_27(iParam0) && !func_27(iVar0))
						{
							bVar1 = true;
						}
					}
					if ((Global_2392006[iParam0].f_11 && Global_2392006[iVar0].f_11) || (!Global_2392006[iParam0].f_11 && !Global_2392006[iVar0].f_11))
					{
						if (bVar1)
						{
							Global_2392006[iVar0].f_3 = 1;
						}
						else
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_27(int iParam0)
{
	return Global_2392006[iParam0].f_2;
}

int func_28(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_29(int iParam0)
{
	return Global_2392006[iParam0].f_3;
}

int func_30(int iParam0, char* sParam1)
{
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return -1;
	}
	iVar0 = 0;
	switch (iParam0)
	{
		case 63:
			iVar0 = 0;
			while (iVar0 < 1218)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_794709.f_4[iVar0].f_76, 13))
				{
					if (unk_0x7F8A39872A07D2CE(&(Global_794709.f_4[iVar0]), sParam1))
					{
						return Global_794709.f_4[iVar0].f_54;
					}
				}
				iVar0++;
			}
			break;
		
		case 62:
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_917806.f_604[iVar0].f_76, 13))
				{
					if (unk_0x7F8A39872A07D2CE(&(Global_917806.f_604[iVar0]), sParam1))
					{
						return Global_917806.f_604[iVar0].f_54;
					}
				}
				iVar0++;
			}
			break;
		
		case 40:
			return 0;
		
		default:
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				iVar0 = 0;
				while (iVar0 < 62)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_939452.f_5[iVar0].f_76, 13))
					{
						if (unk_0x7F8A39872A07D2CE(&(Global_939452.f_5[iVar0]), sParam1))
						{
							return Global_939452.f_5[iVar0].f_54;
						}
					}
					iVar0++;
				}
			}
			break;
	}
	return 0;
}

void func_31(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_9(iParam0, 0, 1))
	{
		return;
	}
	vVar0.x = -1444317046;
	vVar0.y = unk_0xD803B885F5E47A62();
	unk_0xB6D2E6F743DD2459(&Var23, 13);
	vVar0.f_2 = { Var23 };
	if (bParam1)
	{
		iVar36 = 0;
		unk_0x5D96D8530B3D0904(&iVar36, 6);
		vVar0.f_2.f_13 = iVar36;
		vVar0.f_2.f_19 = 0;
		vVar0.f_2.f_20 = 0;
	}
	if (bParam2)
	{
		iVar37 = 0;
		unk_0x5D96D8530B3D0904(&iVar37, 0);
		vVar0.f_2.f_13 = iVar37;
		vVar0.f_2.f_19 = 1;
		vVar0.f_2.f_20 = 0;
	}
	if (bParam3)
	{
		iVar38 = 0;
		unk_0x5D96D8530B3D0904(&iVar38, 0);
		vVar0.f_2.f_13 = iVar38;
		vVar0.f_2.f_19 = 1;
		vVar0.f_2.f_20 = 1;
	}
	vVar0.f_2.f_14 = func_33(unk_0xD803B885F5E47A62());
	StringCopy(&(vVar0.f_2.f_15), "", 16);
	unk_0xFB061A86A7AC749F(1, &vVar0, 23, func_32(iParam0));
}

var func_32(int iParam0)
{
	if (iParam0 != -1)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_33(int iParam0)
{
	return Global_1590535[iParam0].f_211.f_6;
}

bool func_34()
{
	return Global_1312837 == 10;
}

int func_35()
{
	return -1;
}

int func_36(var uParam0)
{
	iVar0 = 0;
	iVar1 = func_37(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1].f_80;
		
		case 62:
			return iVar0;
		
		default:
	}
	return iVar0;
}

int func_37(var uParam0)
{
	if (unk_0xEA6BC48857E0AC4C(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_39(uParam0->f_1))
	{
		if (func_38(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (unk_0xEAE0D21A50E6C7F4(Global_794709.f_4[uParam0->f_1].f_76, 13))
			{
				if (unk_0x7F8A39872A07D2CE(&(Global_794709.f_4[uParam0->f_1]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Global_794709.f_4[uParam0->f_1].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1218)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_794709.f_4[iVar0].f_76, 13))
				{
					if (unk_0x7F8A39872A07D2CE(&(Global_794709.f_4[iVar0]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (unk_0xEAE0D21A50E6C7F4(Global_917806.f_604[uParam0->f_1].f_76, 13))
			{
				if (unk_0x7F8A39872A07D2CE(&(Global_917806.f_604[uParam0->f_1]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Global_917806.f_604[uParam0->f_1].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_917806.f_604[iVar0].f_76, 13))
				{
					if (unk_0x7F8A39872A07D2CE(&(Global_917806.f_604[iVar0]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_939452.f_5[uParam0->f_1].f_76, 13))
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_939452.f_5[uParam0->f_1]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_939452.f_5[uParam0->f_1].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_939452.f_5[iVar0].f_76, 13))
			{
				if (unk_0x7F8A39872A07D2CE(&(Global_939452.f_5[iVar0]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_38(var uParam0)
{
	if (Global_2398103)
	{
		if (unk_0x7F8A39872A07D2CE(&(Global_2398103.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_39(int iParam0)
{
	return iParam0 == 9999;
}

int func_40(var uParam0)
{
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_37(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_41(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar13;
		
		default:
	}
	return iVar13;
}

struct<13> func_41(var uParam0)
{
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_37(uParam0);
	if (iVar13 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_107189[iVar13];
		
		case 62:
			return Global_917806.f_9405[iVar13];
		
		default:
	}
	return Var0;
}

int func_42(char* sParam0, var uParam1, bool bParam2)
{
	if (!unk_0x8CD06866876216F2())
	{
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = 1218;
	if (!bParam2)
	{
		iVar2 = 1200;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_794709.f_4[iVar0].f_76, 13))
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_794709.f_4[iVar0]), sParam0))
			{
				iVar1 = Global_794709.f_4[iVar0].f_65;
				*uParam1 = func_43(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 63;
				uParam1->f_3 = { Global_794709.f_4[iVar0] };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 100)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_917806.f_604[iVar0].f_76, 13))
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_917806.f_604[iVar0]), sParam0))
			{
				iVar1 = Global_917806.f_604[iVar0].f_65;
				*uParam1 = func_43(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 62;
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 62)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_939452.f_5[iVar0].f_76, 13))
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_939452.f_5[iVar0]), sParam0))
			{
				iVar1 = Global_939452.f_5[iVar0].f_65;
				*uParam1 = func_43(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = unk_0xD803B885F5E47A62();
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_43(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 148;
		
		case 14:
			return 149;
		
		case 122:
			return 153;
		
		case 11:
			return 150;
		
		case 13:
			return 151;
		
		case 12:
			return 152;
		
		case 8:
			return 155;
		
		case 1:
			return 156;
		
		case 5:
			return 154;
		
		case 6:
			return 157;
		
		case 3:
			return 160;
		
		case 0:
			return 158;
		
		case 2:
			return 159;
		
		case 148:
			return 49;
		
		case 151:
			return 52;
		
		case 152:
			return 53;
		
		case 157:
			return 54;
		
		case 153:
			return 55;
		
		case 154:
			return 56;
		
		case 155:
			return 57;
		
		case 159:
			return 58;
		
		case 162:
			return 51;
		
		case 142:
			return 60;
		
		case 160:
			return 62;
		
		case 164:
			return 63;
		
		case 163:
			return 64;
		
		case 166:
			return 65;
		
		case 167:
			return 66;
		
		case 168:
			return 67;
		
		case 169:
			return 68;
		
		case 170:
			return 69;
		
		case 171:
			return 70;
		
		case 172:
			return 71;
		
		case 173:
			return 72;
		
		case 178:
			return 73;
		
		case 188:
			return 74;
		
		case 214:
			return 75;
		
		case 215:
			return 76;
		
		case 216:
			return 77;
		
		case 217:
			return 78;
		
		case 218:
			return 79;
		
		case 219:
			return 80;
		
		case 220:
			return 81;
		
		case 221:
			return 82;
		
		case 179:
			return 84;
		
		case 189:
			return 83;
		
		case 180:
			return 85;
		
		case 182:
			return 87;
		
		case 183:
			return 88;
		
		case 185:
			return 89;
		
		case 186:
			return 90;
		
		case 190:
			return 91;
		
		case 191:
			return 92;
		
		case 192:
			return 93;
		
		case 193:
			return 94;
		
		case 205:
			return 102;
		
		case 194:
			return 95;
		
		case 197:
			return 96;
		
		case 198:
			return 97;
		
		case 195:
			return 98;
		
		case 199:
			return 99;
		
		case 200:
			return 100;
		
		case 201:
			return 101;
		
		case 207:
			return 103;
		
		case 208:
			return 104;
		
		case 209:
			return 105;
		
		case 210:
			return 106;
		
		case 225:
			return 107;
		
		case 226:
			return 108;
		
		case 227:
			return 109;
		
		case 229:
			return 110;
		
		case 230:
			return 111;
		
		case 233:
			return 113;
		
		case 237:
			return 115;
		
		case 238:
			return 116;
		
		case 249:
			return 123;
		
		case 239:
			return 117;
		
		case 240:
			return 118;
		
		case 241:
			return 119;
		
		case 242:
			return 120;
		
		case 244:
			return 121;
		
		case 248:
			return 122;
		
		case 250:
			return 124;
		
		case 243:
			return 125;
		
		case 158:
			return 126;
		
		case 181:
			return 86;
		
		case 24:
			return 128;
		
		case 26:
			return 129;
		
		default:
	}
	return 0;
}

void func_44(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	StringCopy(&(uParam0->f_3), "", 24);
	uParam0->f_9 = -1;
}

void func_45(int iParam0, bool bParam1)
{
	if (iParam0 >= Global_1387711)
	{
		return;
	}
	if (bParam1)
	{
		if (func_27(iParam0))
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				if (Global_2392006[iParam0].f_11)
				{
					if (unk_0x1C0640BA9A7327B3() > Global_2395292[iVar0].f_2 || Global_2395292[iVar0].f_2 == 0)
					{
						if (Global_2392006[iParam0].f_2)
						{
							Global_2395292[iVar0] = Global_2392006[iParam0].f_9;
							Global_2395292[iVar0].f_1 = unk_0x12AB0310C2281427(&(Global_2392006[iParam0].f_56));
							Global_2395292[iVar0].f_2 = unk_0x1C0640BA9A7327B3() + 30000;
							iVar0 = 12;
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (Global_2392006[iParam0].f_54 != -1)
	{
		unk_0xD59AE843FA2C6B40(Global_2392006[iParam0].f_54);
	}
	if (!Global_2392006[iParam0].f_19)
	{
		if (Global_2392006[iParam0].f_15 != 0)
		{
			unk_0x295B8300CE227536(Global_2392006[iParam0].f_15);
		}
	}
	iVar1 = iParam0;
	iVar2 = iVar1 + 1;
	while (iVar2 < Global_1387711)
	{
		Global_2392006[iVar1] = { Global_2392006[iVar2] };
		iVar1++;
		iVar2++;
	}
	func_47(iVar1);
	Global_1387711 = (Global_1387711 - 1);
	if (Global_1387712)
	{
		if (Global_1387710 > 0)
		{
			func_46();
		}
	}
}

void func_46()
{
	Global_1387712 = 0;
}

void func_47(int iParam0)
{
	Global_2392006[iParam0] = 0;
	Global_2392006[iParam0].f_2 = 0;
	Global_2392006[iParam0].f_3 = 0;
	Global_2392006[iParam0].f_4 = 0;
	Global_2392006[iParam0].f_5 = 0;
	Global_2392006[iParam0].f_6 = { 0f, 0f, 0f };
	Global_2392006[iParam0].f_9 = func_35();
	Global_2392006[iParam0].f_10 = 145;
	Global_2392006[iParam0].f_11 = 1;
	Global_2392006[iParam0].f_12 = 0;
	Global_2392006[iParam0].f_13 = -1;
	Global_2392006[iParam0].f_14 = -1;
	Global_2392006[iParam0].f_15 = 0;
	Global_2392006[iParam0].f_16 = 0;
	Global_2392006[iParam0].f_16.f_1 = 0;
	Global_2392006[iParam0].f_16.f_2 = 0;
	Global_2392006[iParam0].f_19 = 0;
	Global_2392006[iParam0].f_20 = 0;
	StringCopy(&(Global_2392006[iParam0].f_21), "", 64);
	StringCopy(&(Global_2392006[iParam0].f_37), "", 64);
	Global_2392006[iParam0].f_54 = -1;
	Global_2392006[iParam0].f_64 = 16777215;
	Global_2392006[iParam0].f_65 = 0;
	Global_2392006[iParam0].f_66 = 0;
	Global_2392006[iParam0].f_67 = 0;
	Global_2392006[iParam0].f_68 = 0;
	Global_2392006[iParam0].f_69 = 0;
	Global_2392006[iParam0].f_70 = -1;
	Global_2392006[iParam0].f_71 = 0;
	Global_2392006[iParam0].f_72 = 0;
	Global_2392006[iParam0].f_73 = -1;
	Global_2392006[iParam0].f_74 = 0;
	Global_2392006[iParam0].f_76 = 0;
	Global_2392006[iParam0].f_77 = 0;
	Global_2392006[iParam0].f_78 = 0;
	Global_2392006[iParam0].f_79 = 0;
	Global_2392006[iParam0].f_80 = 0;
	Global_2392006[iParam0].f_81 = 0;
	if (unk_0x8CD06866876216F2())
	{
		Global_2392006[iParam0].f_53 = unk_0x2B6E0A53779D29EA();
		Global_2392006[iParam0].f_55 = unk_0x2B6E0A53779D29EA();
	}
}

int func_48(int iParam0, char* sParam1, bool bParam2)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1387711)
	{
		if (!Global_2392006[iVar0].f_11)
		{
			if (Global_2392006[iVar0].f_10 == iParam0)
			{
				if (!bParam2)
				{
					return iVar0;
				}
				if (unk_0xEA6BC48857E0AC4C(sParam1))
				{
					return iVar0;
				}
				if (unk_0x7F8A39872A07D2CE(sParam1, &(Global_2392006[iVar0].f_21)))
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_49(char* sParam0, char* sParam1)
{
	if (!unk_0xEA6BC48857E0AC4C(sParam0))
	{
		if (unk_0x7724E025FD444F45(sParam0) > 63)
		{
			return 0;
		}
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam1))
	{
		if (unk_0x7724E025FD444F45(sParam1) > 63)
		{
			return 0;
		}
	}
	return 1;
}

bool func_50()
{
	return Global_1310987.f_4;
}

int func_51(var uParam0)
{
	iVar0 = 16777215;
	if (func_52(uParam0))
	{
		return Global_2395346.f_356[uParam0->f_9].f_10.f_62;
	}
	if (func_39(uParam0->f_1))
	{
		if (func_38(uParam0))
		{
			return Global_2398103.f_1.f_62;
		}
		return iVar0;
	}
	iVar1 = func_37(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			if (Global_794709.f_4[iVar1].f_78 & 16777215 == 0)
			{
				Global_794709.f_4[iVar1].f_78 = 16777215;
			}
			return Global_794709.f_4[iVar1].f_78;
		
		case 62:
			if (Global_917806.f_604[iVar1].f_78 & 16777215 == 0)
			{
				Global_917806.f_604[iVar1].f_78 = 16777215;
			}
			return Global_917806.f_604[iVar1].f_78;
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_52(var uParam0)
{
	iVar0 = uParam0->f_9;
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!Global_2395346.f_356[iVar0])
	{
		return 0;
	}
	if (!unk_0x7F8A39872A07D2CE(&(Global_2395346.f_356[iVar0].f_10), &(uParam0->f_3)))
	{
		return 0;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_2395346.f_356[iVar0].f_5, 3))
	{
		return 0;
	}
	return 1;
}

struct<16> func_53(var uParam0, bool bParam1)
{
	StringCopy(&Var0, "UNKNOWN", 64);
	if (bParam1)
	{
		StringCopy(&Var0, "", 64);
	}
	if (!bParam1)
	{
		if (func_52(uParam0))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1311772.f_1[uParam0->f_9], 0))
			{
				return Global_2398237[uParam0->f_9];
			}
			return Global_2395346.f_356[uParam0->f_9].f_10.f_12;
		}
	}
	if (func_39(uParam0->f_1))
	{
		if (func_38(uParam0))
		{
			return Global_2398103.f_1.f_12;
		}
		return Var0;
	}
	iVar16 = func_37(uParam0);
	if (iVar16 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar16].f_22;
		
		case 62:
			return Global_917806.f_604[iVar16].f_22;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		return Global_939452.f_5[iVar16].f_22;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

int func_54(var uParam0)
{
	iVar0 = func_55(uParam0);
	if (iVar0 == 0)
	{
		return 145;
	}
	iVar1 = iVar0;
	return iVar1;
}

int func_55(var uParam0)
{
	iVar0 = func_61(uParam0);
	return func_56(iVar0);
}

int func_56(int iParam0)
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
	iVar0 = func_57(iParam0);
	if (iVar0 == 145)
	{
		return 0;
	}
	return iVar0;
}

int func_57(int iParam0)
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
		iVar1 = func_59(iVar0);
		if (iParam0 == func_58(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return 145;
}

int func_58(int iParam0)
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

int func_59(int iParam0)
{
	iVar0 = iParam0;
	uVar1 = func_60(iVar0);
	return uVar1;
}

int func_60(int iParam0)
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

int func_61(var uParam0)
{
	iVar0 = 0;
	if (func_52(uParam0))
	{
		return Global_2395346.f_356[uParam0->f_9].f_10.f_61;
	}
	if (func_39(uParam0->f_1))
	{
		if (func_38(uParam0))
		{
			return Global_2398103.f_1.f_61;
		}
		return iVar0;
	}
	iVar1 = func_37(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1].f_75;
		
		case 62:
			return Global_917806.f_604[iVar1].f_75;
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		return Global_939452.f_5[iVar1].f_75;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_62(var uParam0)
{
	iVar0 = -1;
	if (func_52(uParam0))
	{
		return Global_2395346.f_356[uParam0->f_9].f_10.f_55;
	}
	if (func_39(uParam0->f_1))
	{
		if (func_38(uParam0))
		{
			return Global_2398103.f_1.f_55;
		}
		return iVar0;
	}
	iVar1 = func_37(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1].f_68;
		
		case 62:
			return Global_917806.f_604[iVar1].f_68;
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		return Global_939452.f_5[iVar1].f_68;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_63(int iParam0)
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

void func_64(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	if (unk_0xEA6BC48857E0AC4C(&uParam0))
	{
		return;
	}
	iVar0 = 0;
	iVar1 = unk_0x12AB0310C2281427(&uParam0);
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (Global_2359721[iVar0].f_25 == iVar1)
		{
			func_65(iVar0, bParam6);
			return;
		}
		iVar0++;
	}
}

void func_65(int iParam0, bool bParam1)
{
	if (func_173(iParam0))
	{
		if (bParam1)
		{
			func_172(iParam0);
		}
		else
		{
			func_171(iParam0);
		}
		func_68(iParam0);
	}
	func_66(iParam0);
}

void func_66(int iParam0)
{
	if (func_67(iParam0))
	{
		Global_1310987.f_14 = 1;
		return;
	}
	unk_0x5D96D8530B3D0904(&(Global_2359721[iParam0].f_13), 16);
	Global_1310987.f_14 = 1;
}

bool func_67(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359721[iParam0].f_13, 16);
}

void func_68(int iParam0)
{
	if (func_170() == 999 || func_170() == -1)
	{
		return;
	}
	Var0 = { func_169(iParam0) };
	bVar10 = func_173(iParam0);
	bVar11 = func_168(iParam0);
	bVar12 = func_160(Var0, bVar11);
	if (!bVar12)
	{
		bVar13 = true;
		if (bVar13)
		{
			if (Global_1310987.f_1 < func_157(&Var0))
			{
				bVar12 = true;
			}
		}
	}
	bVar14 = false;
	if (func_156(iParam0))
	{
		if (func_144(&Var0))
		{
			bVar14 = true;
		}
	}
	if (bVar12)
	{
		if (bVar14)
		{
			bVar12 = false;
		}
	}
	bVar15 = false;
	if (!bVar12)
	{
		if (!func_143(iParam0))
		{
			bVar15 = false;
			if (bVar14)
			{
				bVar15 = true;
			}
			if (!bVar15)
			{
				bVar12 = true;
			}
		}
	}
	if (func_142(iParam0))
	{
		if (bVar12)
		{
			bVar12 = false;
		}
		else if (func_141(iParam0))
		{
			func_140(iParam0);
			func_137(iParam0);
		}
	}
	if (func_136(iParam0))
	{
		if (!func_135(iParam0))
		{
			bVar12 = true;
		}
	}
	if (func_127())
	{
		if (Global_2359396 > 0)
		{
			if (!func_126(iParam0))
			{
				bVar12 = true;
			}
		}
	}
	if (func_125(iParam0))
	{
		if (((func_124(unk_0xD803B885F5E47A62()) || func_123(iParam0)) || func_118()) || func_110())
		{
			if (!bVar12)
			{
				bVar12 = true;
			}
		}
	}
	if (bVar10 == bVar12)
	{
		return;
	}
	if (bVar12)
	{
		func_109(iParam0);
		func_108(iParam0, 1);
		return;
	}
	func_107(iParam0);
	if (func_100())
	{
		func_69(iParam0, 0, 1);
	}
}

void func_69(int iParam0, bool bParam1, int iParam2)
{
	if (!bParam1)
	{
		if (func_99(iParam0))
		{
			return;
		}
	}
	if (func_173(iParam0))
	{
		return;
	}
	if (Global_2391045)
	{
		if (!func_97(iParam0))
		{
			return;
		}
	}
	if (func_96(iParam0))
	{
		return;
	}
	if (func_94(iParam0))
	{
		return;
	}
	if (!func_93(iParam0))
	{
		return;
	}
	if (func_92(iParam0))
	{
		bVar0 = true;
		if (bVar0)
		{
			return;
		}
	}
	if (func_91(iParam0) || func_90(iParam0))
	{
		return;
	}
	if (func_127())
	{
		if (Global_2359396 > 0)
		{
			if (!func_126(iParam0))
			{
				return;
			}
		}
	}
	iVar1 = func_89(iParam0);
	if (unk_0x67FE5316ADC6D059(iVar1) != 0)
	{
		return;
	}
	if (!func_88())
	{
		if (func_87(iParam0))
		{
			unk_0x9D7CDDB4B55142AF(iVar1, 5);
		}
		else
		{
			unk_0x9D7CDDB4B55142AF(iVar1, 4);
		}
	}
	if ((func_86(iParam0) || func_82(iParam0)) && (!func_80(unk_0xD803B885F5E47A62(), 1) || func_79()))
	{
		unk_0x6ABCCE651368DB93(iVar1, false);
	}
	else
	{
		unk_0x6ABCCE651368DB93(iVar1, true);
	}
	if (func_78(iParam0))
	{
		Var2 = { func_169(iParam0) };
		bVar12 = func_168(iParam0);
		bVar13 = func_160(Var2, bVar12);
		if (!bVar13)
		{
			func_75(iParam0);
			func_74(iParam0);
		}
	}
	if (func_73(iParam0))
	{
		unk_0xE20923FF0A82B068(iVar1, 1);
	}
	func_70(iParam0);
}

void func_70(int iParam0)
{
	if (Global_1310980 && Global_1310981)
	{
		return;
	}
	iVar0 = func_72(iParam0);
	iVar1 = func_71(iParam0);
	if (!Global_1310980)
	{
		if (iVar1 == 62 && iVar0 == 159)
		{
			Global_1310980 = 1;
		}
	}
	if (!Global_1310981)
	{
		if (iVar1 == 62 && iVar0 == 156)
		{
			Global_1310981 = 1;
		}
	}
}

var func_71(int iParam0)
{
	return Global_2359721[iParam0].f_15.f_2;
}

var func_72(int iParam0)
{
	return Global_2359721[iParam0].f_15;
}

bool func_73(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359721[iParam0].f_13, 11);
}

void func_74(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_2359721[iParam0].f_13), 0);
}

void func_75(int iParam0)
{
	if (!Global_2359653)
	{
		return;
	}
	iVar0 = 0;
	vVar1 = { 0f, 0f, 0f };
	if (func_9(unk_0xD803B885F5E47A62(), 0, 1))
	{
		vVar1 = { func_77(unk_0xD803B885F5E47A62()) };
	}
	iVar4 = func_89(iParam0);
	if (iVar4 == 0)
	{
		return;
	}
	iVar5 = func_72(iParam0);
	if (iVar5 == 0)
	{
		return;
	}
	vVar6 = { func_76(iParam0) };
	fVar9 = unk_0x0EB28750412C3A5A(vVar1, vVar6, true);
	iVar10 = 0;
	fVar11 = 0f;
	iVar12 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2359653.f_2[iVar0].f_2 == 0)
		{
			if (iVar10 < 3)
			{
				Global_2359653.f_2[iVar0] = iVar5;
				Global_2359653.f_2[iVar0].f_1 = fVar9;
				Global_2359653.f_2[iVar0].f_2 = iVar4;
				return;
			}
			if (fVar9 < fVar11)
			{
				Global_2359653.f_2[iVar12] = iVar5;
				Global_2359653.f_2[iVar12].f_1 = fVar9;
				Global_2359653.f_2[iVar12].f_2 = iVar4;
			}
			return;
		}
		if (Global_2359653.f_2[iVar0] == iVar5)
		{
			if (Global_2359653.f_2[iVar0].f_2 == iVar4)
			{
				return;
			}
			if (Global_2359653.f_2[iVar0].f_1 > fVar11)
			{
				fVar11 = Global_2359653.f_2[iVar0].f_1;
				iVar12 = iVar0;
			}
			iVar10++;
		}
		iVar0++;
	}
	if (iVar10 == 0)
	{
		return;
	}
	if (fVar9 < fVar11)
	{
		Global_2359653.f_2[iVar12] = iVar5;
		Global_2359653.f_2[iVar12].f_1 = fVar9;
		Global_2359653.f_2[iVar12].f_2 = iVar4;
	}
}

Vector3 func_76(int iParam0)
{
	return Global_2359721[iParam0].f_3;
}

Vector3 func_77(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), false);
}

bool func_78(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359721[iParam0].f_13, 0);
}

var func_79()
{
	return Global_2450632.f_640;
}

bool func_80(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_81(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0].f_11 != func_35();
}

int func_81(int iParam0)
{
	if (iParam0 != func_35())
	{
		if (Global_1628237[iParam0].f_11 != func_35())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

int func_82(int iParam0)
{
	iVar0 = func_85(iParam0);
	if (iVar0 == 6)
	{
		return 0;
	}
	iVar1 = func_83(iParam0, iVar0);
	if (iVar1 == -1)
	{
		return 0;
	}
	return 1;
}

int func_83(int iParam0, int iParam1)
{
	iVar0 = func_84(iParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (Global_2390946[iParam1].f_1[iVar1] == iVar0)
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

int func_84(int iParam0)
{
	return Global_2359721[iParam0];
}

int func_85(int iParam0)
{
	iVar0 = func_72(iParam0);
	switch (iVar0)
	{
		case 158:
			return 0;
		
		case 156:
			return 1;
		
		case 159:
			return 2;
		
		case 160:
			return 3;
		
		case 155:
			return 4;
		
		default:
	}
	return 6;
}

bool func_86(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359721[iParam0].f_12, 21);
}

bool func_87(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359721[iParam0].f_12, 5);
}

bool func_88()
{
	return Global_2416079.f_1812;
}

var func_89(int iParam0)
{
	return Global_2359721[iParam0].f_11;
}

bool func_90(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359721[iParam0].f_13, 25);
}

bool func_91(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359721[iParam0].f_13, 24);
}

bool func_92(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359721[iParam0].f_13, 22);
}

int func_93(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_2359721[iParam0].f_12, 8))
	{
		return 0;
	}
	return 1;
}

int func_94(int iParam0)
{
	if (func_95(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_95(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359721[iParam0].f_13, 15);
}

bool func_96(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359721[iParam0].f_13, 5);
}

int func_97(int iParam0)
{
	Var0 = { func_169(iParam0) };
	if (func_98(&Var0))
	{
		return 1;
	}
	return 0;
}

bool func_98(var uParam0)
{
	if (*uParam0 != 158)
	{
		return 0;
	}
	return func_62(uParam0) == 8;
}

bool func_99(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359721[iParam0].f_12, 4);
}

int func_100()
{
	if (func_106())
	{
		return 0;
	}
	if (func_105())
	{
		return 0;
	}
	if (func_104())
	{
		return 0;
	}
	if (func_7(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_101(unk_0xD803B885F5E47A62(), 0))
	{
		return 0;
	}
	if (func_127())
	{
		if (Global_2359396 <= 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_101(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_102(-1, 0) == 8;
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

int func_102(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_103();
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

int func_103()
{
	return Global_1312745;
}

bool func_104()
{
	return Global_1310987.f_8;
}

bool func_105()
{
	return Global_1311716[0] > 0;
}

bool func_106()
{
	return Global_1310987.f_26;
}

void func_107(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_2359721[iParam0].f_13), 6);
}

void func_108(int iParam0, int iParam1)
{
	iVar0 = func_89(iParam0);
	unk_0x9D7CDDB4B55142AF(iVar0, 0);
}

void func_109(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_2359721[iParam0].f_13), 6);
}

int func_110()
{
	if (func_117(unk_0xD803B885F5E47A62(), 0) || func_114(unk_0xD803B885F5E47A62(), 0))
	{
		if (func_113(unk_0xD803B885F5E47A62()) || func_111(unk_0xD803B885F5E47A62()))
		{
			return 1;
		}
	}
	return 0;
}

bool func_111(int iParam0)
{
	return func_112(iParam0, 20);
}

bool func_112(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_113(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_112(iParam0, 9);
	}
	return 0;
}

int func_114(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 && func_115(Global_1628237[iParam0].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1)
	{
		if (func_115(Global_1628237[iParam0].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_116(iParam0, 0);
	return 0;
}

int func_116(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_117(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_118()
{
	if (((func_122(unk_0xD803B885F5E47A62()) == 129 || func_122(unk_0xD803B885F5E47A62()) == 136) || func_121(unk_0xD803B885F5E47A62(), 21)) || func_121(unk_0xD803B885F5E47A62(), 25))
	{
		return 1;
	}
	if (unk_0x8A22C4C08282BF26(-1462376372) > 0 || unk_0x8A22C4C08282BF26(-1613203680) > 0)
	{
		if (func_120(unk_0xD803B885F5E47A62()) || func_119(unk_0xD803B885F5E47A62()))
		{
			return 1;
		}
	}
	return 0;
}

int func_119(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1628237[iVar0].f_1, 7);
	}
	return 0;
}

int func_120(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1628237[iVar0].f_1, 0);
	}
	return 0;
}

bool func_121(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_208, iParam1);
}

int func_122(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0];
	}
	return -1;
}

bool func_123(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359721[iParam0].f_13, 26);
}

int func_124(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0] != -1;
	}
	return 0;
}

bool func_125(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359721[iParam0].f_12, 11);
}

bool func_126(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359721[iParam0].f_12, 19);
}

int func_127()
{
	if (func_121(unk_0xD803B885F5E47A62(), 8))
	{
		return 1;
	}
	if (func_121(unk_0xD803B885F5E47A62(), 10))
	{
		return 1;
	}
	if (func_121(unk_0xD803B885F5E47A62(), 12))
	{
		return 1;
	}
	if (func_121(unk_0xD803B885F5E47A62(), 14))
	{
		return 1;
	}
	if (func_121(unk_0xD803B885F5E47A62(), 13))
	{
		return 1;
	}
	if (func_134())
	{
		return 1;
	}
	if (func_133())
	{
		return 1;
	}
	if (!func_132() && !func_131())
	{
		if (!func_130())
		{
			if (!func_128())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_128()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1731, 7))
	{
		return 1;
	}
	iVar0 = Global_1388048[func_129(-1)];
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 6))
	{
		unk_0x5D96D8530B3D0904(&(Global_2537071.f_1731), 7);
		return 1;
	}
	if (func_132())
	{
		return 1;
	}
	if (func_131())
	{
		return 1;
	}
	return 0;
}

int func_129(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_103();
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

bool func_130()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_142, 2);
}

bool func_131()
{
	return Global_1312865;
}

bool func_132()
{
	return Global_1312867;
}

int func_133()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1731, 28) && !unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1731, 29))
	{
		return 1;
	}
	return 0;
}

bool func_134()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1732, 3);
}

bool func_135(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359721[iParam0].f_13, 14);
}

bool func_136(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359721[iParam0].f_12, 14);
}

void func_137(int iParam0)
{
	if (func_139(iParam0))
	{
		return;
	}
	if (func_138(iParam0))
	{
		return;
	}
	unk_0x0674E58A79778E99(&(Global_2359721[iParam0].f_13), 7);
}

bool func_138(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359721[iParam0].f_13, 8);
}

bool func_139(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359721[iParam0].f_13, 9);
}

void func_140(int iParam0)
{
	if (func_139(iParam0))
	{
		return;
	}
	unk_0x0674E58A79778E99(&(Global_2359721[iParam0].f_13), 8);
}

bool func_141(int iParam0)
{
	return Global_2359721[iParam0].f_6.f_4 == 16777215;
}

bool func_142(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359721[iParam0].f_13, 7);
}

bool func_143(int iParam0)
{
	iVar0 = unk_0xD8A54335F18763BA();
	return unk_0xEAE0D21A50E6C7F4(Global_2359721[iParam0].f_6.f_4, iVar0);
}

int func_144(var uParam0)
{
	iVar0 = 0;
	Var1.f_1 = -1;
	Var1.f_2 = -1;
	Var1.f_9 = -1;
	bVar11 = func_153(*uParam0, uParam0->f_1);
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!func_151(iVar0))
		{
			Var1 = { func_150(iVar0) };
			if (Var1 == *uParam0)
			{
				if (bVar11 == func_153(Var1, Var1.f_1))
				{
					if (bVar11)
					{
						if (unk_0x7F8A39872A07D2CE(&(Var1.f_3), &(uParam0->f_3)))
						{
							return func_145(func_149(iVar0));
						}
					}
					else if (Var1.f_1 == uParam0->f_1)
					{
						return func_145(func_149(iVar0));
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_145(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_147(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (func_146(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_146(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2423058[iParam0].f_40, 2);
}

int func_147(int iParam0)
{
	iVar0 = 0;
	Var1.f_1 = -1;
	Var1.f_2 = -1;
	Var1.f_9 = -1;
	Var1.f_16 = -1;
	Var1.f_19 = -1;
	Var1.f_20 = -1;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!func_151(iVar0))
		{
			Var1 = { func_148(iVar0) };
			if (iParam0 == Var1.f_17)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

struct<21> func_148(int iParam0)
{
	return Global_2423058[iParam0].f_3;
}

int func_149(int iParam0)
{
	return Global_2423058[iParam0].f_3.f_17;
}

struct<10> func_150(int iParam0)
{
	return Global_2423058[iParam0].f_3;
}

bool func_151(int iParam0)
{
	return func_152(iParam0);
}

bool func_152(int iParam0)
{
	return Global_2423058[iParam0] == 5;
}

bool func_153(int iParam0, int iParam1)
{
	return func_154(3, iParam0, iParam1);
}

bool func_154(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_155(iParam1, iParam2);
	if (iVar0 == -1)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1371148[iVar0], iParam0);
}

int func_155(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = 0;
	}
	else if (iParam1 < 0)
	{
		return Global_1371930[iParam0].f_2;
	}
	else if (iParam1 >= Global_1371930[iParam0].f_1)
	{
		return Global_1371930[iParam0].f_2;
	}
	return (Global_1371930[iParam0].f_2 + iParam1);
}

bool func_156(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359721[iParam0].f_12, 16);
}

int func_157(var uParam0)
{
	if (func_153(*uParam0, uParam0->f_1))
	{
		return func_159(uParam0);
	}
	return func_158(*uParam0);
}

int func_158(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 5;
		
		default:
	}
	return 0;
}

int func_159(var uParam0)
{
	iVar0 = 0;
	if (func_52(uParam0))
	{
		return Global_2395346.f_356[uParam0->f_9].f_10.f_57;
	}
	if (func_39(uParam0->f_1))
	{
		if (func_38(uParam0))
		{
			return Global_2398103.f_1.f_57;
		}
		return iVar0;
	}
	iVar1 = func_37(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1].f_70;
		
		case 62:
			return Global_917806.f_604[iVar1].f_70;
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		return Global_939452.f_5[iVar1].f_70;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_160(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10)
{
	iVar0 = uParam0;
	if (func_170() == 0)
	{
		iVar1 = func_63(iVar0);
		if (iVar1 == -1)
		{
			return 0;
		}
		if (func_161(iVar1, bParam10, 0))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

bool func_161(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_262145.f_7686 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_163(unk_0xD803B885F5E47A62(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4718 == 1)
		{
			return 1;
		}
	}
	if (func_132() || func_131())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_162())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1574637[iVar1], iVar0);
}

int func_162()
{
	if (Global_1312448)
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1731, 23))
	{
		return 1;
	}
	if (func_132())
	{
		return 1;
	}
	if (func_131())
	{
		return 1;
	}
	iVar0 = Global_1388048[func_129(-1)];
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 7))
	{
		unk_0x5D96D8530B3D0904(&(Global_2537071.f_1731), 23);
		return 1;
	}
	return 0;
}

bool func_163(int iParam0, int iParam1)
{
	if (!func_166())
	{
		return 0;
	}
	if (func_165())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_164(iParam1);
	iVar1 = uVar0;
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_730, iVar1);
}

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		case 157:
			return 32;
		
		default:
	}
	return 1;
}

bool func_165()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_146, 3);
}

int func_166()
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_132())
	{
		return 1;
	}
	if (func_131())
	{
		return 1;
	}
	return func_167(120, -1);
}

int func_167(int iParam0, int iParam1)
{
	uVar0 = Global_2583656[iParam0][func_129(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_168(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359721[iParam0].f_12, 18);
}

struct<10> func_169(int iParam0)
{
	return Global_2359721[iParam0].f_15;
}

int func_170()
{
	return Global_30768;
}

void func_171(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_2359721[iParam0].f_13), 7);
}

void func_172(int iParam0)
{
	func_171(iParam0);
	unk_0x5D96D8530B3D0904(&(Global_2359721[iParam0].f_13), 8);
}

bool func_173(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359721[iParam0].f_13, 6);
}

int func_174(int iParam0, vector3 vParam1, struct<30> Param4, struct<5> Param34, struct<31> Param39, struct<10> Param70)
{
	if (Param39.f_14)
	{
		if (unk_0xA14BB9332558B949())
		{
			return -1;
		}
	}
	if (Param70 == 157)
	{
		if (Global_2404282 != 0)
		{
			if (!unk_0xEA6BC48857E0AC4C(&(Param70.f_3)))
			{
				if (Global_2404282 == unk_0x12AB0310C2281427(&(Param70.f_3)))
				{
					bVar0 = true;
					if (!unk_0xEAE0D21A50E6C7F4(Param34.f_4, unk_0xD8A54335F18763BA()))
					{
						bVar0 = false;
					}
					iVar1 = 0;
					if (bVar0)
					{
						iVar1 = 0;
						while (iVar1 < 32)
						{
							if (bVar0)
							{
								if (Global_2424150.f_309[iVar1] != -1)
								{
									if (unk_0x12AB0310C2281427(&(Global_2424150.f_309[iVar1].f_1)) == Global_2404282)
									{
										bVar0 = false;
									}
								}
							}
							iVar1++;
						}
					}
					if (bVar0)
					{
						iVar1 = 0;
						while (iVar1 < 32)
						{
							if (bVar0)
							{
								if (!unk_0xEA6BC48857E0AC4C(&(Global_2424150.f_309.f_226[iVar1])))
								{
									if (unk_0x12AB0310C2281427(&(Global_2424150.f_309.f_226[iVar1])) == Global_2404282)
									{
										bVar0 = false;
									}
								}
							}
							iVar1++;
						}
					}
					if (bVar0)
					{
						return -1;
					}
					else
					{
						Global_2404282 = 0;
					}
				}
			}
		}
	}
	iVar2 = -1;
	iVar3 = func_202(iParam0, vParam1, Param70);
	if (iVar3 != -1)
	{
		if (Param70.f_1 == 9999)
		{
			if (Global_2359721[iVar3].f_15.f_1 != 9999 && !func_201(iVar3))
			{
				iVar2 = func_84(iVar3);
				return iVar2;
			}
		}
		if (Global_2359721[iVar3].f_15.f_1 == 9999 && Param70.f_1 == 9999)
		{
			iVar2 = func_84(iVar3);
			return iVar2;
		}
		if (Global_2359721[iVar3].f_15.f_1 == 9999 && Param39.f_18)
		{
			iVar2 = func_84(iVar3);
			return iVar2;
		}
		if (func_200(iVar3))
		{
			func_199(iVar3);
		}
		if (Global_2359721[iVar3].f_15.f_1 == 9999 || Param70.f_1 == 9999)
		{
			Global_2359721[iVar3].f_15.f_2 = Param70.f_2;
		}
		if (func_198(iVar3))
		{
			if (!Param39.f_2)
			{
				unk_0x0674E58A79778E99(&(Global_2359721[iVar3].f_12), 1);
			}
		}
		if (func_197(iVar3))
		{
			if (!Param39.f_3)
			{
				unk_0x0674E58A79778E99(&(Global_2359721[iVar3].f_12), 2);
			}
		}
		if (func_201(iVar3))
		{
			if (!Param39.f_18)
			{
				unk_0x0674E58A79778E99(&(Global_2359721[iVar3].f_12), 17);
			}
		}
		if (Param70.f_1 == 9999)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_2359721[iVar3].f_12, 1))
			{
				unk_0x5D96D8530B3D0904(&(Global_2359721[iVar3].f_12), 1);
			}
		}
		if (Param70.f_1 == 9999)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_2359721[iVar3].f_12, 6))
			{
				unk_0x5D96D8530B3D0904(&(Global_2359721[iVar3].f_12), 6);
			}
		}
		if (func_196(iVar3) == 9999 && Param70.f_1 != 9999)
		{
			if (Param39.f_9)
			{
				unk_0x5D96D8530B3D0904(&(Global_2359721[iVar3].f_12), 6);
			}
			else
			{
				unk_0x0674E58A79778E99(&(Global_2359721[iVar3].f_12), 6);
			}
		}
		if (Global_2359721[iVar3].f_15.f_2 != Param70.f_2)
		{
			if ((func_196(iVar3) != 9999 && Param70.f_1 != 9999) && !Param39.f_18)
			{
				if (Param70.f_2 == 63)
				{
					Global_2359721[iVar3].f_15.f_2 = Param70.f_2;
					Global_2359721[iVar3].f_15.f_1 = Param70.f_1;
				}
				else if (Param70.f_2 == 62)
				{
					if (Global_2359721[iVar3].f_15.f_2 == 63)
					{
					}
					else
					{
						Global_2359721[iVar3].f_15.f_2 = Param70.f_2;
						Global_2359721[iVar3].f_15.f_1 = Param70.f_1;
					}
				}
				else if (Param70.f_2 < 32)
				{
				}
			}
		}
		if (Global_2359721[iVar3].f_15.f_2 == Param70.f_2)
		{
			if (func_196(iVar3) != Param70.f_1)
			{
				bVar4 = true;
				if (func_196(iVar3) == 9999 && Param39.f_18)
				{
					bVar4 = false;
				}
				if (bVar4)
				{
					Global_2359721[iVar3].f_15.f_1 = Param70.f_1;
				}
			}
		}
		if (Param39.f_8)
		{
			unk_0x5D96D8530B3D0904(&(Global_2359721[iVar3].f_13), 11);
		}
		iVar2 = func_84(iVar3);
		return iVar2;
	}
	if (Param70 == 0)
	{
		return -1;
	}
	if (iParam0 == 10)
	{
		iParam0 = 5;
	}
	if (Param34.f_2 < 0,5f)
	{
		return -1;
	}
	if (Global_1311741 >= 1200)
	{
		return -1;
	}
	iVar5 = Global_1311741;
	func_194(iVar5);
	Global_2359721[iVar5].f_1 = 0;
	Global_2359721[iVar5].f_2 = iParam0;
	Global_2359721[iVar5].f_3 = { vParam1 };
	Global_2359721[iVar5].f_6 = { Param34 };
	Global_2359721[iVar5].f_15 = { Param70 };
	if (unk_0xEA6BC48857E0AC4C(&(Global_2359721[iVar5].f_15.f_3)))
	{
		Global_2359721[iVar5].f_25 = 0;
	}
	else
	{
		Global_2359721[iVar5].f_25 = unk_0x12AB0310C2281427(&(Global_2359721[iVar5].f_15.f_3));
	}
	Global_2359721[iVar5].f_11 = func_185(Param4, vParam1, 0);
	if (Global_2359721[iVar5].f_11 == 0)
	{
		func_194(iVar5);
		return -1;
	}
	bVar6 = Param39.f_19;
	if (func_160(Param70, bVar6) && func_183(Param70))
	{
		func_182(iVar5);
	}
	else
	{
		func_74(iVar5);
	}
	func_181(iVar5, Param39);
	iVar2 = func_180();
	Global_2359721[iVar5] = iVar2;
	if (Param39.f_14)
	{
		func_179(iVar2, vParam1, &Param39);
	}
	if (Global_1311716[5] > 0)
	{
		Global_1311716[5].f_2++;
		Global_1311716[5]++;
	}
	else
	{
		Global_1311716[5] = 1;
		Global_1311716[5].f_1 = iVar5;
		Global_1311716[5].f_2 = iVar5;
		Global_1311716[5].f_3 = iVar5;
	}
	Global_1311741++;
	if (func_178())
	{
		Var7 = { func_177() };
		if (!unk_0xEA6BC48857E0AC4C(&Var7))
		{
			if (unk_0x7F8A39872A07D2CE(&Var7, &(Param70.f_3)))
			{
				if (func_173(iVar5))
				{
					func_171(iVar5);
					func_68(iVar5);
				}
				func_175(iVar5);
			}
		}
	}
	return iVar2;
}

void func_175(int iParam0)
{
	if (func_135(iParam0))
	{
		func_176(iParam0);
		return;
	}
	unk_0x5D96D8530B3D0904(&(Global_2359721[iParam0].f_13), 14);
	func_176(iParam0);
}

void func_176(int iParam0)
{
	uVar0 = Global_2359721[iParam0].f_25;
	Global_2391023.f_7 = uVar0;
	Global_2391023.f_8 = (unk_0x1C0640BA9A7327B3() + 300000);
}

struct<6> func_177()
{
	return Global_2450632.f_759;
}

bool func_178()
{
	return Global_2450632.f_592;
}

void func_179(int iParam0, vector3 vParam1, var uParam4)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 85)
	{
		if (Global_1311025[iVar0] == -1)
		{
			Global_1311025[iVar0] = iParam0;
			Global_1311025[iVar0].f_1 = { uParam4->f_24 };
			Global_1311025[iVar0].f_4 = { uParam4->f_27 };
			Global_1311025[iVar0].f_7 = uParam4->f_30;
			Global_2359397[iVar0] = { vParam1 };
			Global_1311706++;
			return;
		}
		iVar0++;
	}
}

int func_180()
{
	uVar0 = Global_1310987;
	Global_1310987++;
	return uVar0;
}

void func_181(int iParam0, struct<24> Param1, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	if (Param1.f_1)
	{
		unk_0x5D96D8530B3D0904(&(Global_2359721[iParam0].f_12), 3);
	}
	if (Param1.f_2)
	{
		unk_0x5D96D8530B3D0904(&(Global_2359721[iParam0].f_12), 1);
	}
	if (Param1.f_3)
	{
		unk_0x5D96D8530B3D0904(&(Global_2359721[iParam0].f_12), 2);
	}
	if (Param1.f_4)
	{
		unk_0x5D96D8530B3D0904(&(Global_2359721[iParam0].f_12), 15);
	}
	if (Param1.f_5)
	{
		unk_0x5D96D8530B3D0904(&(Global_2359721[iParam0].f_12), 0);
	}
	if (Param1.f_6)
	{
		unk_0x5D96D8530B3D0904(&(Global_2359721[iParam0].f_12), 4);
	}
	if (Param1.f_7)
	{
		unk_0x5D96D8530B3D0904(&(Global_2359721[iParam0].f_12), 5);
	}
	if (Param1.f_8)
	{
		unk_0x5D96D8530B3D0904(&(Global_2359721[iParam0].f_13), 11);
	}
	if (Param1.f_9)
	{
		unk_0x5D96D8530B3D0904(&(Global_2359721[iParam0].f_12), 6);
	}
	if (Param1.f_10)
	{
		unk_0x5D96D8530B3D0904(&(Global_2359721[iParam0].f_12), 7);
	}
	if (Param1.f_11)
	{
		unk_0x5D96D8530B3D0904(&(Global_2359721[iParam0].f_12), 8);
	}
	if (Param1.f_12)
	{
		unk_0x5D96D8530B3D0904(&(Global_2359721[iParam0].f_12), 9);
	}
	if (Param1.f_13)
	{
		unk_0x5D96D8530B3D0904(&(Global_2359721[iParam0].f_12), 10);
	}
	if (Param1.f_14)
	{
		unk_0x5D96D8530B3D0904(&(Global_2359721[iParam0].f_12), 11);
	}
	if (Param1.f_15)
	{
		unk_0x5D96D8530B3D0904(&(Global_2359721[iParam0].f_12), 16);
	}
	if (Param1.f_16)
	{
		unk_0x5D96D8530B3D0904(&(Global_2359721[iParam0].f_12), 13);
	}
	if (Param1.f_17)
	{
		unk_0x5D96D8530B3D0904(&(Global_2359721[iParam0].f_12), 14);
	}
	if (Param1.f_19)
	{
		unk_0x5D96D8530B3D0904(&(Global_2359721[iParam0].f_12), 18);
	}
	if (Param1.f_18)
	{
		unk_0x5D96D8530B3D0904(&(Global_2359721[iParam0].f_12), 17);
	}
	if (Param1.f_20)
	{
		unk_0x5D96D8530B3D0904(&(Global_2359721[iParam0].f_12), 22);
	}
	if (Param1.f_21)
	{
		if (!Param1.f_20)
		{
		}
		else
		{
			unk_0x5D96D8530B3D0904(&(Global_2359721[iParam0].f_12), 23);
		}
	}
	if (Param1.f_22)
	{
		if (!Param1.f_20)
		{
		}
		else
		{
			unk_0x5D96D8530B3D0904(&(Global_2359721[iParam0].f_12), 24);
		}
	}
	if (Param1.f_23)
	{
		unk_0x5D96D8530B3D0904(&(Global_2359721[iParam0].f_12), 25);
	}
	Global_2359721[iParam0].f_14 = Param1;
	unk_0x5D96D8530B3D0904(&(Global_2359721[iParam0].f_13), 6);
}

void func_182(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_2359721[iParam0].f_13), 0);
}

int func_183(int iParam0)
{
	if (func_170() == 0)
	{
		iVar0 = func_63(iParam0);
		if (iVar0 == -1)
		{
			return 0;
		}
		return func_184(iVar0);
	}
	return 0;
}

int func_184(int iParam0)
{
	switch (iParam0)
	{
		case 23:
		case 27:
		case 12:
		case 122:
		case 11:
		case 14:
		case 15:
		case 8:
		case 3:
		case 6:
			return 1;
			break;
	}
	return 0;
}

int func_185(struct<30> Param0, vector3 vParam30, bool bParam33)
{
	if (!func_193(Param0))
	{
		return 0;
	}
	vVar0 = { vParam30 };
	if (!func_28(Param0.f_27, 0f, 0f, 0f, 1056964608, 0))
	{
		vVar0 = { Param0.f_27 };
	}
	iVar3 = 0;
	if (bParam33)
	{
		iVar3 = unk_0x3F3860E60C44719E(vVar0, 80f);
	}
	else
	{
		iVar3 = unk_0x6CC513A908911CF0(vVar0);
	}
	if (iVar3 == 0)
	{
		return 0;
	}
	if (!bParam33)
	{
		unk_0x516E63E474722206(iVar3, 1f);
		unk_0xBC8E0A7390523199(iVar3, Param0.f_1);
	}
	if (bParam33)
	{
		unk_0x7F010F50CE03A8AF(iVar3, 120);
	}
	unk_0xF2D30B8ACAF12A39(iVar3, false);
	if ((((((((Param0.f_1 == 445 || Param0.f_1 == 447) || Param0.f_1 == 448) || Param0.f_1 == 449) || Param0.f_1 == 450) || Param0.f_1 == 451) || Param0.f_1 == 452) || Param0.f_1 == 453) || Param0.f_1 == 454)
	{
		if (!func_192(1))
		{
			unk_0x6ABCCE651368DB93(iVar3, false);
		}
		unk_0x2A065371C9D96655(iVar3, 10);
		unk_0x0EC848EFF66DF45A(iVar3, 10000);
		unk_0xDC5B2F9D0CCE3A10(iVar3, "FMMC_RSTAR_MSL");
		iVar4 = (func_187(0) - 1);
		if (iVar4 >= 0 && iVar4 <= 7)
		{
			if (func_186(0, iVar4) == Param0.f_1)
			{
				Global_1661976 = iVar3;
			}
		}
	}
	else
	{
		unk_0x6ABCCE651368DB93(iVar3, Param0);
		unk_0x2A065371C9D96655(iVar3, Param0.f_25);
	}
	unk_0x61755AC17D8F538E(iVar3, Param0.f_24);
	unk_0x81232862B3277CAA(iVar3, Param0.f_26);
	unk_0xE20923FF0A82B068(iVar3, 0);
	if (!unk_0xEA6BC48857E0AC4C(&(Param0.f_2)))
	{
		unk_0x64399B11CDD5A727(&(Param0.f_2));
		if (!unk_0xEA6BC48857E0AC4C(&(Param0.f_8)))
		{
			unk_0xD06AC7C87A34A6AD(&(Param0.f_8));
		}
		unk_0x4FA118D51B4F2476(iVar3);
	}
	unk_0x9D7CDDB4B55142AF(iVar3, 0);
	return iVar3;
}

int func_186(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 447;
				
				case 1:
					return 448;
				
				case 2:
					return 449;
				
				case 3:
					return 450;
				
				case 4:
					return 451;
				
				case 5:
					return 452;
				
				case 6:
					return 453;
				
				case 7:
					return 454;
				
				default:
			}
			return 445;
		
		default:
	}
	return 445;
}

int func_187(int iParam0)
{
	if (Global_1671743[iParam0] == -1)
	{
		iVar0 = func_190(func_191(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_188(iParam0, 0);
			iVar0 = 0;
		}
		Global_1671743[iParam0] = iVar0;
	}
	return Global_1671743[iParam0];
}

void func_188(int iParam0, int iParam1)
{
	Global_1671743[iParam0] = iParam1;
	func_189(func_191(iParam0), iParam1, -1, 1, 0);
}

void func_189(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_129(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_190(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_129(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9978;
		
		default:
	}
	return 9978;
}

bool func_192(bool bParam0)
{
	return func_80(unk_0xD803B885F5E47A62(), bParam0);
}

int func_193(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29)
{
	if (Param0.f_1 == -1)
	{
		return 0;
	}
	return 1;
}

void func_194(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(Global_2359721[iParam0].f_11))
	{
		unk_0x142CC44DB769B57E(&(Global_2359721[iParam0].f_11));
	}
	Var0 = -1;
	Var0.f_2 = 10;
	Var0.f_6.f_4 = 16777215;
	Var0.f_14 = 3;
	Var0.f_15.f_1 = -1;
	Var0.f_15.f_2 = -1;
	Var0.f_15.f_9 = -1;
	Global_2359721[iParam0] = { Var0 };
	Global_2359721[iParam0].f_3 = { 0f, 0f, 0f };
	func_195(&(Global_2359721[iParam0].f_6));
	func_44(&(Global_2359721[iParam0].f_15));
}

void func_195(var uParam0)
{
	Var0.f_4 = 16777215;
	*uParam0 = { Var0 };
}

int func_196(int iParam0)
{
	return Global_2359721[iParam0].f_15.f_1;
}

bool func_197(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359721[iParam0].f_12, 2);
}

bool func_198(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359721[iParam0].f_12, 1);
}

void func_199(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_2359721[iParam0].f_13), 4);
}

bool func_200(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359721[iParam0].f_13, 4);
}

bool func_201(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359721[iParam0].f_12, 17);
}

int func_202(int iParam0, vector3 vParam1, struct<4> Param4, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0xEA6BC48857E0AC4C(&(Param4.f_3)))
	{
		iVar1 = unk_0x12AB0310C2281427(&(Param4.f_3));
	}
	if (iVar1 != 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_1311741)
		{
			if (!func_96(iVar0))
			{
				if (Global_2359721[iVar0].f_25 == iVar1)
				{
					if (unk_0x7F8A39872A07D2CE(&(Global_2359721[iVar0].f_15.f_3), &(Param4.f_3)))
					{
						if (Param4.f_1 == 9999)
						{
							return iVar0;
						}
						else
						{
							if (Global_2359721[iVar0].f_15.f_1 == 9999)
							{
								return iVar0;
							}
							return iVar0;
						}
					}
				}
			}
			iVar0++;
		}
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (!func_96(iVar0))
		{
			if ((Global_2359721[iVar0].f_2 == iParam0 && Global_2359721[iVar0].f_15 == Param4) && Global_2359721[iVar0].f_15.f_1 == Param4.f_1)
			{
				if (func_28(Global_2359721[iVar0].f_3, vParam1, 1056964608, 0))
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

struct<31> func_203(var uParam0)
{
	Var0 = 3;
	func_225(&Var0);
	func_204(uParam0, &Var0);
	Var0.f_2 = 1;
	Var0.f_9 = 1;
	return Var0;
}

void func_204(var uParam0, var uParam1)
{
	*uParam1 = func_224(uParam0);
	uParam1->f_10 = 1;
	uParam1->f_7 = func_221(uParam0);
	uParam1->f_11 = func_218(uParam0);
	uParam1->f_12 = func_217(uParam0);
	uParam1->f_16 = func_216(uParam0);
	uParam1->f_13 = func_215(uParam0);
	uParam1->f_4 = func_214(uParam0);
	uParam1->f_17 = func_209(uParam0);
	uParam1->f_15 = func_208(uParam0);
	uParam1->f_19 = func_206(uParam0);
	func_205(uParam0, uParam1);
}

void func_205(var uParam0, var uParam1)
{
	switch (*uParam0)
	{
		case 157:
			break;
		
		default:
			return;
	}
	if (*uParam0 == 157)
	{
		iVar0 = func_62(uParam0);
		if (iVar0 < 0 || iVar0 >= Global_958841.f_684)
		{
			return;
		}
		vVar1 = { Global_958841[iVar0] };
		vVar4 = { Global_958841.f_256[iVar0] };
		fVar7 = Global_958841.f_512[iVar0];
		vVar8 = { 0f, 0f, 0f };
		fVar11 = 0,1f;
		fVar12 = -0,1f;
		if (((func_28(vVar1, vVar8, 1056964608, 0) || func_28(vVar4, vVar8, 1056964608, 0)) || func_28(vVar1, vVar4, fVar11, 0)) || (fVar7 > fVar12 && fVar7 < fVar11))
		{
			return;
		}
		uParam1->f_14 = 1;
		uParam1->f_24 = { vVar1 };
		uParam1->f_27 = { vVar4 };
		uParam1->f_30 = fVar7;
		return;
	}
}

int func_206(var uParam0)
{
	switch (*uParam0)
	{
		case 160:
			return func_207(uParam0);
		
		default:
	}
	return 0;
}

int func_207(var uParam0)
{
	iVar0 = 0;
	if (func_52(uParam0))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2395346.f_356[uParam0->f_9].f_10.f_63, 9);
	}
	if (func_39(uParam0->f_1))
	{
		if (func_38(uParam0))
		{
			return unk_0xEAE0D21A50E6C7F4(Global_2398103.f_1.f_63, 9);
		}
		return iVar0;
	}
	iVar1 = func_37(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return unk_0xEAE0D21A50E6C7F4(Global_794709.f_4[iVar1].f_76, 9);
		
		case 62:
			return unk_0xEAE0D21A50E6C7F4(Global_917806.f_604[iVar1].f_76, 9);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_208(var uParam0)
{
	switch (*uParam0)
	{
		case 157:
			return 1;
		
		default:
	}
	return 0;
}

int func_209(var uParam0)
{
	if (func_210(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_210(var uParam0)
{
	iVar0 = 0;
	if (func_52(uParam0))
	{
		return func_211(uParam0);
	}
	if (func_39(uParam0->f_1))
	{
		if (func_38(uParam0))
		{
			return func_211(uParam0);
		}
		return iVar0;
	}
	iVar1 = func_37(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return func_211(uParam0);
		
		case 62:
			return func_211(uParam0);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_211(var uParam0)
{
	if ((func_54(uParam0) != 145 && !func_213(uParam0)) && !func_212(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_212(var uParam0)
{
	if (*uParam0 != 158)
	{
		return 0;
	}
	return func_62(uParam0) == 7;
}

bool func_213(var uParam0)
{
	if (*uParam0 != 158)
	{
		return 0;
	}
	return func_62(uParam0) == 1;
}

int func_214(var uParam0)
{
	switch (*uParam0)
	{
		case 157:
			return 1;
		
		default:
	}
	return 0;
}

int func_215(var uParam0)
{
	switch (*uParam0)
	{
		case 157:
			return 1;
		
		default:
	}
	return 0;
}

int func_216(var uParam0)
{
	if (func_210(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_217(var uParam0)
{
	if (func_210(uParam0) || *uParam0 == 157)
	{
		return 1;
	}
	return 0;
}

int func_218(var uParam0)
{
	if ((func_210(uParam0) || func_220(uParam0)) || func_219(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_219(var uParam0)
{
	iVar0 = 0;
	if (func_52(uParam0))
	{
		return func_212(uParam0);
	}
	if (func_39(uParam0->f_1))
	{
		if (func_38(uParam0))
		{
			return func_212(uParam0);
		}
		return iVar0;
	}
	iVar1 = func_37(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return func_212(uParam0);
		
		case 62:
			return func_212(uParam0);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_220(var uParam0)
{
	iVar0 = 0;
	if (func_52(uParam0))
	{
		return func_213(uParam0);
	}
	if (func_39(uParam0->f_1))
	{
		if (func_38(uParam0))
		{
			return func_213(uParam0);
		}
		return iVar0;
	}
	iVar1 = func_37(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			if (func_213(uParam0))
			{
				if (Global_794709.f_4[iVar1].f_75 == 0)
				{
					Global_794709.f_4[iVar1].f_75 = 12;
				}
				return 1;
			}
			return 0;
		
		case 62:
			return func_213(uParam0);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_221(var uParam0)
{
	if (func_222(uParam0) || *uParam0 == 157)
	{
		return 1;
	}
	return 0;
}

int func_222(var uParam0)
{
	iVar0 = 0;
	if (func_52(uParam0))
	{
		return func_223(uParam0);
	}
	if (func_39(uParam0->f_1))
	{
		if (func_38(uParam0))
		{
			return func_223(uParam0);
		}
		return iVar0;
	}
	iVar1 = func_37(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return func_223(uParam0);
		
		case 62:
			return func_223(uParam0);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

bool func_223(var uParam0)
{
	if (*uParam0 != 158)
	{
		return 0;
	}
	return func_62(uParam0) == 3;
}

int func_224(var uParam0)
{
	switch (*uParam0)
	{
		case 157:
			return 3;
		
		default:
	}
	return 0;
}

void func_225(var uParam0)
{
	Var0 = 3;
	*uParam0 = { Var0 };
	uParam0->f_24 = { 0f, 0f, 0f };
	uParam0->f_27 = { 0f, 0f, 0f };
}

struct<5> func_226(var uParam0)
{
	Var0.f_4 = 16777215;
	func_242(&Var0);
	iVar5 = 3;
	iVar6 = 3;
	iVar7 = 0;
	fVar8 = 0f;
	iVar9 = 16777215;
	func_227(uParam0, &iVar5, &iVar6, &iVar7, &fVar8, &iVar9);
	Var0 = iVar5;
	Var0.f_1 = iVar6;
	Var0.f_2 = fVar8;
	Var0.f_3 = iVar7;
	Var0.f_4 = iVar9;
	return Var0;
}

void func_227(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5)
{
	switch (*uParam0)
	{
		case 148:
			*iParam3 = 1;
			break;
		
		case 149:
			*iParam3 = 4;
			break;
		
		case 153:
			*iParam3 = 22;
			break;
		
		case 150:
			*iParam3 = 8;
			break;
		
		case 151:
			*iParam3 = 14;
			break;
		
		case 152:
			*iParam3 = 16;
			break;
		
		case 155:
			*iParam3 = 2;
			break;
		
		case 156:
			*iParam3 = func_241(uParam0);
			break;
		
		case 157:
			*iParam3 = 7;
			break;
		
		case 158:
			*iParam3 = func_236(uParam0);
			break;
		
		case 159:
			*iParam3 = func_235(uParam0);
			break;
		
		case 160:
			*iParam3 = 15;
			break;
		
		default:
			*iParam3 = 0;
			break;
	}
	bVar0 = func_234(uParam0);
	*iParam1 = func_233(uParam0->f_2, bVar0);
	*iParam2 = func_232(uParam0->f_2, bVar0);
	*fParam4 = func_229(uParam0);
	*iParam5 = func_228(uParam0);
}

int func_228(var uParam0)
{
	if ((func_210(uParam0) || func_220(uParam0)) || func_219(uParam0))
	{
		return 16777215;
	}
	return func_51(uParam0);
}

float func_229(var uParam0)
{
	if ((func_220(uParam0) || func_219(uParam0)) || func_231(func_40(uParam0)))
	{
		return 1,4f;
	}
	return func_230(*uParam0);
}

float func_230(int iParam0)
{
	switch (iParam0)
	{
		case 151:
		case 149:
		case 148:
		case 153:
			return 1,4f;
		
		default:
	}
	return 2,6f;
}

int func_231(int iParam0)
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

int func_232(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 40:
			return iLocal_7;
		
		case 63:
			return iLocal_8;
		
		case 62:
			return iLocal_9;
		
		default:
	}
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		if (bParam1)
		{
			return Global_2359390;
		}
		return iLocal_10;
	}
	else if (iParam0 < 32)
	{
		return iLocal_11;
	}
	return 3;
}

int func_233(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 40:
			return iLocal_2;
		
		case 63:
			return iLocal_3;
		
		case 62:
			return iLocal_4;
		
		default:
	}
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		if (bParam1)
		{
			return Global_2359389;
		}
		return iLocal_5;
	}
	else if (iParam0 < 32)
	{
		return iLocal_6;
	}
	return 3;
}

int func_234(var uParam0)
{
	iVar0 = 0;
	if (func_39(uParam0->f_1))
	{
		if (func_38(uParam0))
		{
			return iVar0;
		}
		return iVar0;
	}
	iVar1 = func_37(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return iVar0;
		
		case 62:
			return iVar0;
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_939452.f_5[iVar1].f_76, 16);
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_235(var uParam0)
{
	iVar0 = func_62(uParam0);
	switch (iVar0)
	{
		case 0:
		case 1:
		case 6:
		case 7:
			return 12;
		
		case 18:
		case 19:
			return 36;
		
		case 10:
		case 11:
			return 20;
		
		case 12:
		case 13:
			return 19;
		
		case 2:
		case 3:
			return 11;
		
		case 4:
		case 5:
			return 10;
		
		case 20:
		case 21:
		case 22:
		case 23:
			return 38;
		
		case 24:
		case 25:
			return 43;
		
		default:
	}
	return 13;
}

int func_236(var uParam0)
{
	if (func_239(uParam0))
	{
		return 23;
	}
	if (func_237(uParam0))
	{
		return 21;
	}
	return 3;
}

int func_237(var uParam0)
{
	iVar0 = 0;
	if (func_52(uParam0))
	{
		return func_238(uParam0);
	}
	if (func_39(uParam0->f_1))
	{
		if (func_38(uParam0))
		{
			return func_238(uParam0);
		}
		return iVar0;
	}
	iVar1 = func_37(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return func_238(uParam0);
		
		case 62:
			return func_238(uParam0);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		return func_238(uParam0);
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

bool func_238(var uParam0)
{
	if (*uParam0 != 158)
	{
		return 0;
	}
	return func_62(uParam0) == 6;
}

int func_239(var uParam0)
{
	iVar0 = 0;
	if (func_52(uParam0))
	{
		return func_240(uParam0);
	}
	if (func_39(uParam0->f_1))
	{
		if (func_38(uParam0))
		{
			return func_240(uParam0);
		}
		return iVar0;
	}
	iVar1 = func_37(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return func_240(uParam0);
		
		case 62:
			return func_240(uParam0);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		if (Global_1312867)
		{
			return func_240(uParam0);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_939452.f_5[iVar1].f_76, 7);
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

bool func_240(var uParam0)
{
	if (*uParam0 != 158)
	{
		return 0;
	}
	return func_62(uParam0) == 5;
}

int func_241(var uParam0)
{
	iVar0 = func_62(uParam0);
	switch (iVar0)
	{
		case 0:
			return 5;
		
		case 1:
			return 18;
		
		case 2:
			return 17;
		
		case 3:
			return 41;
		
		case 4:
			return 42;
		
		default:
	}
	return 5;
}

void func_242(var uParam0)
{
	func_195(uParam0);
}

struct<30> func_243(var uParam0)
{
	Var0 = 1;
	Var0.f_1 = -1;
	Var0.f_25 = 5;
	func_257(&Var0);
	iVar30 = 17;
	iVar31 = 1;
	StringCopy(&Var32, "", 24);
	StringCopy(&Var38, "", 64);
	iVar54 = 4;
	iVar55 = 0;
	iVar56 = 1;
	iVar57 = 0;
	func_245(uParam0, &iVar30, &iVar31, &Var32, &Var38, &iVar54, &iVar55, &iVar57);
	if (iVar57 || func_244(*uParam0, uParam0->f_1))
	{
		iVar56 = 0;
	}
	Var0 = iVar56;
	Var0.f_1 = iVar30;
	Var0.f_2 = { Var32 };
	Var0.f_8 = { Var38 };
	Var0.f_25 = iVar31;
	Var0.f_24 = iVar54;
	Var0.f_26 = iVar55;
	return Var0;
}

bool func_244(int iParam0, int iParam1)
{
	return func_154(5, iParam0, iParam1);
}

void func_245(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	*iParam1 = 17;
	*iParam2 = 1;
	StringCopy(sParam3, "", 24);
	StringCopy(sParam4, "", 64);
	*iParam5 = 40;
	*iParam6 = 0;
	bVar0 = false;
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		if (func_234(uParam0))
		{
			bVar0 = true;
		}
	}
	switch (uParam0->f_2)
	{
		case 40:
			*iParam5 = 4;
			break;
		
		case 63:
			*iParam5 = 3;
			break;
		
		case 62:
			*iParam5 = 3;
			break;
		
		default:
			if (uParam0->f_2 == unk_0xD803B885F5E47A62())
			{
				if (func_234(uParam0))
				{
					*iParam5 = 5;
				}
				else
				{
					*iParam5 = 4;
				}
			}
			else if (uParam0->f_2 < 32)
			{
				*iParam5 = 5;
			}
			break;
	}
	switch (*uParam0)
	{
		case 148:
			*iParam1 = 311;
			*iParam2 = 1;
			return;
		
		case 155:
			if (uParam0->f_2 == 63)
			{
				*iParam1 = 94;
				*iParam2 = 2;
				StringCopy(sParam3, "FMMC_RSTAR_BJ", 24);
				*iParam6 = 1;
			}
			else if (uParam0->f_2 == 62)
			{
				*iParam1 = 94;
				*iParam2 = 2;
				StringCopy(sParam3, "FMMC_RSTAR_BJ", 24);
				*iParam6 = 1;
			}
			else if (uParam0->f_2 < 32)
			{
				*iParam1 = 94;
				*iParam2 = 3;
				*iParam6 = 1;
				if (bVar0)
				{
					StringCopy(sParam3, "FMMC_BM_BASE", 24);
				}
				else
				{
					StringCopy(sParam3, "FMMC_PL_BASE", 24);
					StringCopy(sParam4, func_253(uParam0), 64);
				}
			}
			return;
		
		case 149:
			*iParam1 = 103;
			*iParam2 = 1;
			return;
		
		case 153:
			*iParam1 = 90;
			*iParam2 = 1;
			StringCopy(sParam3, "HUD_MG_PILOT", 24);
			return;
		
		case 156:
			*iParam1 = func_252(func_62(uParam0));
			if (uParam0->f_2 == 63)
			{
				*iParam2 = 2;
				*sParam3 = { func_251(func_62(uParam0), 1, 0) };
				*iParam6 = 1;
			}
			else if (uParam0->f_2 == 62)
			{
				*iParam2 = 2;
				*sParam3 = { func_251(func_62(uParam0), 1, 0) };
				*iParam6 = 1;
			}
			else if (uParam0->f_2 < 32)
			{
				*iParam2 = 3;
				*sParam3 = { func_251(func_62(uParam0), 0, bVar0) };
				StringCopy(sParam4, func_253(uParam0), 64);
				*iParam6 = 1;
			}
			return;
		
		case 157:
			*iParam5 = 1;
			if (uParam0->f_2 == 63)
			{
				*iParam1 = 406;
				*iParam2 = 2;
				StringCopy(sParam3, "FMMC_RSTAR_GA", 24);
				*iParam6 = 1;
			}
			else if (uParam0->f_2 == 62)
			{
				*iParam1 = 406;
				*iParam2 = 2;
				StringCopy(sParam3, "FMMC_RSTAR_GA", 24);
				*iParam6 = 1;
			}
			else if (uParam0->f_2 < 32)
			{
				*iParam1 = 406;
				*iParam2 = 3;
				*iParam6 = 1;
				if (bVar0)
				{
					StringCopy(sParam3, "FMMC_BM_GH", 24);
				}
				else
				{
					StringCopy(sParam3, "FMMC_PL_GH", 24);
					StringCopy(sParam4, func_253(uParam0), 64);
				}
			}
			return;
		
		case 150:
			*iParam1 = 109;
			*iParam2 = 1;
			return;
		
		case 158:
			*iParam1 = func_250(func_62(uParam0), 0);
			if (uParam0->f_2 == 63)
			{
				if (func_62(uParam0) == 8)
				{
					*iParam1 = func_249(unk_0x12AB0310C2281427(&(uParam0->f_3)), *iParam1);
					*iParam5 = 60;
					*iParam2 = 2;
					*iParam7 = 1;
				}
				else
				{
					*iParam2 = 2;
				}
				*sParam3 = { func_248(func_62(uParam0), 1, 0, 0) };
				*iParam6 = 1;
			}
			else if (uParam0->f_2 == 62)
			{
				*iParam2 = 2;
				*sParam3 = { func_248(func_62(uParam0), 1, 0, 0) };
				*iParam6 = 1;
			}
			else if (uParam0->f_2 < 32)
			{
				*iParam2 = 3;
				*iParam6 = 1;
				StringCopy(sParam4, func_253(uParam0), 64);
				*sParam3 = { func_248(func_62(uParam0), 0, bVar0, 0) };
			}
			return;
		
		case 159:
			*iParam1 = func_247(func_62(uParam0));
			if (uParam0->f_2 == 63)
			{
				*iParam2 = 2;
				*sParam3 = { func_246(func_62(uParam0), 1, 0) };
				*iParam6 = 1;
			}
			else if (uParam0->f_2 == 62)
			{
				*iParam2 = 2;
				*sParam3 = { func_246(func_62(uParam0), 1, 0) };
				*iParam6 = 1;
			}
			else if (uParam0->f_2 < 32)
			{
				*iParam2 = 3;
				*sParam3 = { func_246(func_62(uParam0), 0, bVar0) };
				StringCopy(sParam4, func_253(uParam0), 64);
				*iParam6 = 1;
			}
			return;
		
		case 151:
			*iParam1 = 119;
			*iParam2 = 1;
			return;
		
		case 160:
			if (uParam0->f_2 == 63)
			{
				*iParam1 = 305;
				*iParam2 = 2;
				StringCopy(sParam3, "FMMC_RSTAR_HM", 24);
				*iParam6 = 1;
			}
			else if (uParam0->f_2 == 62)
			{
				*iParam1 = 305;
				*iParam2 = 2;
				StringCopy(sParam3, "FMMC_RSTAR_HM", 24);
				*iParam6 = 1;
			}
			else if (uParam0->f_2 < 32)
			{
				*iParam1 = 305;
				*iParam2 = 3;
				*iParam6 = 1;
				if (bVar0)
				{
					StringCopy(sParam3, "FMMC_BM_HM", 24);
				}
				else
				{
					StringCopy(sParam3, "FMMC_PL_HM", 24);
					StringCopy(sParam4, func_253(uParam0), 64);
				}
			}
			return;
		
		case 152:
			*iParam1 = 122;
			*iParam2 = 1;
			return;
		
		default:
	}
}

struct<6> func_246(int iParam0, bool bParam1, bool bParam2)
{
	StringCopy(&Var0, "", 24);
	switch (iParam0)
	{
		case 0:
		case 1:
			if (bParam2)
			{
				StringCopy(&Var0, "FMMC_BM_LR", 24);
				return Var0;
			}
			if (bParam1)
			{
				StringCopy(&Var0, "FMMC_RSTAR_LR", 24);
				return Var0;
			}
			StringCopy(&Var0, "FMMC_PL_LR", 24);
			return Var0;
		
		case 10:
		case 11:
			if (bParam2)
			{
				StringCopy(&Var0, "FMMC_BM_OFR", 24);
				return Var0;
			}
			if (bParam1)
			{
				StringCopy(&Var0, "FMMC_RSTAR_OFR", 24);
				return Var0;
			}
			StringCopy(&Var0, "FMMC_PL_OFR", 24);
			return Var0;
		
		case 12:
		case 13:
			if (bParam2)
			{
				StringCopy(&Var0, "FMMC_BM_BR", 24);
				return Var0;
			}
			if (bParam1)
			{
				StringCopy(&Var0, "FMMC_RSTAR_BR", 24);
				return Var0;
			}
			StringCopy(&Var0, "FMMC_PL_BR", 24);
			return Var0;
		
		case 6:
		case 7:
			if (bParam2)
			{
				StringCopy(&Var0, "FMMC_BM_SR", 24);
				return Var0;
			}
			if (bParam1)
			{
				StringCopy(&Var0, "FMMC_RSTAR_STR", 24);
				return Var0;
			}
			StringCopy(&Var0, "FMMC_PL_SR", 24);
			return Var0;
		
		case 18:
		case 19:
			if (bParam2)
			{
				StringCopy(&Var0, "FMMC_BM_TAR", 24);
				return Var0;
			}
			if (bParam1)
			{
				StringCopy(&Var0, "FMMC_RSTAR_TAR", 24);
				return Var0;
			}
			StringCopy(&Var0, "FMMC_PL_TAR", 24);
			return Var0;
		
		case 2:
		case 3:
			if (bParam2)
			{
				StringCopy(&Var0, "FMMC_BM_WR", 24);
				return Var0;
			}
			if (bParam1)
			{
				StringCopy(&Var0, "FMMC_RSTAR_WR", 24);
				return Var0;
			}
			StringCopy(&Var0, "FMMC_PL_WR", 24);
			return Var0;
		
		case 4:
		case 5:
			if (bParam2)
			{
				StringCopy(&Var0, "FMMC_BM_AR", 24);
				return Var0;
			}
			if (bParam1)
			{
				StringCopy(&Var0, "FMMC_RSTAR_AR", 24);
				return Var0;
			}
			StringCopy(&Var0, "FMMC_PL_AR", 24);
			return Var0;
		
		case 20:
		case 21:
		case 22:
		case 23:
			if (bParam2)
			{
				StringCopy(&Var0, "FMMC_BM_AW", 24);
				return Var0;
			}
			if (bParam1)
			{
				StringCopy(&Var0, "FMMC_RSTARAWR", 24);
				return Var0;
			}
			StringCopy(&Var0, "FMMC_PL_AW", 24);
			return Var0;
		
		case 24:
		case 25:
			if (bParam2)
			{
				StringCopy(&Var0, "FMMC_BM_OW", 24);
				return Var0;
			}
			if (bParam1)
			{
				StringCopy(&Var0, "FMMC_RSTAR_OW", 24);
				return Var0;
			}
			StringCopy(&Var0, "FMMC_PL_OW", 24);
			return Var0;
		
		default:
	}
	StringCopy(&Var0, "FMMC_RSTAR_LR", 24);
	return Var0;
}

int func_247(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 315;
		
		case 6:
		case 7:
			return 435;
		
		case 18:
		case 19:
			return 610;
		
		case 10:
		case 11:
			return 379;
		
		case 12:
		case 13:
			return 376;
		
		case 2:
		case 3:
			return 316;
		
		case 4:
		case 5:
			return 314;
		
		case 20:
		case 21:
		case 22:
		case 23:
			return 644;
		
		case 24:
		case 25:
			return 726;
		
		default:
	}
	return 309;
}

struct<6> func_248(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	StringCopy(&Var0, "", 24);
	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "FMMC_RSTAR_MHST", 24);
			return Var0;
		
		case 7:
			StringCopy(&Var0, "FMMC_RSTAR_HP", 24);
			return Var0;
		
		case 5:
			if (bParam2)
			{
				StringCopy(&Var0, "FMMC_BM_LTS", 24);
				return Var0;
			}
			if (bParam1)
			{
				StringCopy(&Var0, "FMMC_RSTAR_MLTS", 24);
				return Var0;
			}
			StringCopy(&Var0, "FMMC_PL_LTS", 24);
			return Var0;
		
		case 6:
			if (bParam2)
			{
				StringCopy(&Var0, "FMMC_BM_CTF", 24);
				return Var0;
			}
			if (bParam1)
			{
				StringCopy(&Var0, "FMMC_RSTAR_MCTF", 24);
				return Var0;
			}
			StringCopy(&Var0, "FMMC_PL_CTF", 24);
			return Var0;
		
		case 8:
			if (iParam3 == 0)
			{
				StringCopy(&Var0, "FMMC_RSTAR_MSL", 24);
			}
			else
			{
				StringCopy(&Var0, "FMMC_RSTAR_MS", 24);
			}
			return Var0;
		
		case 129:
			StringCopy(&Var0, "FMMC_RSTAR_MSA", 24);
			return Var0;
		
		case 2:
		case 3:
		case 0:
		case 4:
		case 9:
			if (bParam2)
			{
				StringCopy(&Var0, "FMMC_BM_MISS", 24);
			}
			else
			{
				StringCopy(&Var0, "FMMC_RSTAR_MS", 24);
			}
			return Var0;
		
		default:
	}
	StringCopy(&Var0, "FMMC_RSTAR_MS", 24);
	return Var0;
}

int func_249(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == Global_262145.f_9027[iVar0] || iParam0 == unk_0x12AB0310C2281427(&(Global_794709.f_4[Global_794709.f_123024[0][iVar0]])))
		{
			return func_186(0, iVar0);
		}
		iVar0++;
	}
	return uParam1;
}

int func_250(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return 59;
		
		case 7:
			return 59;
		
		case 5:
			return 409;
		
		case 6:
			return 408;
		
		case 2:
		case 3:
		case 0:
		case 4:
		case 9:
		case 129:
			return 304;
		
		case 8:
			if (iParam1 == 0)
			{
				return 445;
			}
			else
			{
				return 304;
			}
			break;
	}
	return 304;
}

struct<6> func_251(int iParam0, bool bParam1, bool bParam2)
{
	StringCopy(&Var0, "", 24);
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				StringCopy(&Var0, "FMMC_BM_DM", 24);
				return Var0;
			}
			if (bParam1)
			{
				StringCopy(&Var0, "FMMC_RSTAR_DM", 24);
				return Var0;
			}
			StringCopy(&Var0, "FMMC_PL_DM", 24);
			return Var0;
		
		case 1:
			if (bParam2)
			{
				StringCopy(&Var0, "FMMC_BM_TDM", 24);
				return Var0;
			}
			if (bParam1)
			{
				StringCopy(&Var0, "FMMC_RSTAR_TDM", 24);
				return Var0;
			}
			StringCopy(&Var0, "FMMC_PL_TDM", 24);
			return Var0;
		
		case 2:
			if (bParam2)
			{
				StringCopy(&Var0, "FMMC_BM_VDM", 24);
				return Var0;
			}
			if (bParam1)
			{
				StringCopy(&Var0, "FMMC_RSTAR_VDM", 24);
				return Var0;
			}
			StringCopy(&Var0, "FMMC_PL_VDM", 24);
			return Var0;
		
		case 3:
			if (bParam2)
			{
				StringCopy(&Var0, "FMMC_BM_KOTH", 24);
				return Var0;
			}
			if (bParam1)
			{
				StringCopy(&Var0, "FMMC_RSTAR_KOTH", 24);
				return Var0;
			}
			StringCopy(&Var0, "FMMC_PL_KOTH", 24);
			return Var0;
		
		case 4:
			if (bParam2)
			{
				StringCopy(&Var0, "FMMC_BM_TKOTH", 24);
				return Var0;
			}
			if (bParam1)
			{
				StringCopy(&Var0, "FMMC_RSTR_TKOTH", 24);
				return Var0;
			}
			StringCopy(&Var0, "FMMC_PL_TKOTH", 24);
			return Var0;
		
		default:
	}
	StringCopy(&Var0, "FMMC_RSTAR_DM", 24);
	return Var0;
}

int func_252(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 310;
		
		case 1:
			return 378;
		
		case 2:
			return 380;
		
		case 3:
			return 674;
		
		case 4:
			return 675;
		
		default:
	}
	return 310;
}

char* func_253(var uParam0)
{
	if (func_256(uParam0->f_2))
	{
		return unk_0x19C9F30A7697B43C("FM_LOC_ROCKS");
	}
	if (uParam0->f_2 < 32 && !func_39(uParam0->f_1))
	{
		iVar0 = unk_0x117658E336116132(uParam0->f_2);
		if (func_9(iVar0, 0, 1))
		{
			return unk_0x6E524813889AECF8(iVar0);
		}
	}
	MemCopy(&uVar1, {func_255(uParam0)}, 6);
	sVar7 = "";
	if (unk_0xEA6BC48857E0AC4C(&uVar1))
	{
		sVar7 = " ";
	}
	else
	{
		sVar7 = func_254(&uVar1);
	}
	return sVar7;
}

var func_254(var uParam0)
{
	return uParam0;
}

struct<16> func_255(var uParam0)
{
	StringCopy(&Var0, "[UNKNOWN]", 64);
	if (func_52(uParam0))
	{
		MemCopy(&Var0, {Global_2395346.f_356[uParam0->f_9].f_10.f_6}, 16);
		return Var0;
	}
	if (func_39(uParam0->f_1))
	{
		if (func_38(uParam0))
		{
			MemCopy(&Var0, {Global_2398103.f_1.f_6}, 16);
			return Var0;
		}
		return Var0;
	}
	iVar16 = func_37(uParam0);
	if (iVar16 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar16].f_6;
		
		case 62:
			MemCopy(&Var0, {Global_917806.f_3[iVar16]}, 16);
			return Var0;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		return Global_939452.f_5[iVar16].f_6;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

int func_256(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 62:
		case 61:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

void func_257(var uParam0)
{
	Var0 = 1;
	Var0.f_1 = -1;
	Var0.f_25 = 5;
	*uParam0 = { Var0 };
	StringCopy(&(uParam0->f_2), "", 24);
	StringCopy(&(uParam0->f_8), "", 64);
	uParam0->f_27 = { 0f, 0f, 0f };
}

Vector3 func_258(var uParam0)
{
	vVar0 = { 0f, 0f, 0f };
	if (func_52(uParam0))
	{
		return Global_2395346.f_356[uParam0->f_9].f_10.f_44;
	}
	if (func_39(uParam0->f_1))
	{
		if (func_38(uParam0))
		{
			return Global_2398103.f_1.f_44;
		}
		return vVar0;
	}
	iVar3 = func_37(uParam0);
	if (iVar3 == -1)
	{
		return vVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar3].f_56;
		
		case 62:
			return Global_917806.f_604[iVar3].f_56;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		return Global_939452.f_5[iVar3].f_56;
	}
	else if (uParam0->f_2 < 32)
	{
		return vVar0;
	}
	return vVar0;
}

int func_259(var uParam0)
{
	iVar0 = func_37(uParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return 1;
}

struct<10> func_260(int iParam0)
{
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_9 = -1;
	func_44(&Var0);
	iVar10 = Global_2398938[iParam0].f_4;
	iVar11 = Global_2398938[iParam0].f_5;
	iVar12 = func_262(iVar10, iVar11);
	Var0 = func_43(iVar12);
	Var0.f_1 = iVar11;
	Var0.f_2 = iVar10;
	Var0.f_3 = { func_261(iVar10, iVar11) };
	return Var0;
}

struct<6> func_261(int iParam0, int iParam1)
{
	StringCopy(&Var0, "UNKNOWN", 24);
	if (func_39(iParam1))
	{
		if (Global_2398103)
		{
			return Global_2398103.f_1;
		}
		return Var0;
	}
	switch (iParam0)
	{
		case 63:
			Var0 = { Global_794709.f_4[iParam1] };
			return Var0;
		
		case 62:
			Var0 = { Global_917806.f_604[iParam1] };
			return Var0;
		
		default:
	}
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return Global_939452.f_5[iParam1];
	}
	else if (iParam0 < 32)
	{
		return Var0;
	}
	return Var0;
}

int func_262(int iParam0, int iParam1)
{
	if (func_39(iParam1))
	{
		if (Global_2398103)
		{
			return Global_2398103.f_1.f_53;
		}
		return 256;
	}
	switch (iParam0)
	{
		case 63:
			return Global_794709.f_4[iParam1].f_65;
		
		case 62:
			return Global_917806.f_604[iParam1].f_65;
		
		default:
	}
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return Global_939452.f_5[iParam1].f_65;
	}
	else if (iParam0 < 32)
	{
		return 256;
	}
	return 256;
}

int func_263(int iParam0)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 500)
	{
		if (Global_2398938[iVar1].f_3 == iParam0)
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_264(int iParam0)
{
	return Global_262145.f_28460[iParam0];
}

int func_265()
{
	return func_190(8971, -1, 0);
}

int func_266(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (iVar0 == iVar0)
	{
	}
	if (iParam0 == iParam0)
	{
	}
	switch (*uParam1)
	{
		case 0:
			if (!func_11(uParam2))
			{
				func_5(uParam2, 0, 0);
			}
			else if (func_10(uParam2, 10000, 0))
			{
				iLocal_727 = -1;
				*uParam1++;
				unk_0x0674E58A79778E99(iParam3, iParam4);
			}
			break;
		
		case 1:
			iVar0 = func_33(unk_0xD803B885F5E47A62());
			iLocal_727 = Global_2537071.f_1716;
			if (iLocal_727 != -1)
			{
				func_267(iLocal_727);
				*uParam1++;
			}
			else
			{
				unk_0x5D96D8530B3D0904(iParam3, iParam4);
				*uParam1 = 99;
			}
			break;
		
		case 99:
			return 1;
			break;
	}
	return 0;
}

void func_267(int iParam0)
{
	if (Global_2404634 <= iParam0)
	{
		return;
	}
	if (func_277() != 0 && func_277() != 1)
	{
		return;
	}
	Global_2405043 = func_271(Global_2404283[iParam0].f_12);
	Global_2405044 = 0;
	func_270(Global_2404283[iParam0].f_12);
	func_269(2, 0);
	if (unk_0xEAE0D21A50E6C7F4(Global_2405032, 19))
	{
		unk_0x0674E58A79778E99(&Global_2405032, 19);
		func_268();
	}
}

void func_268()
{
	Global_2405045.f_2 = 0;
	Global_2405045.f_3 = 0;
}

void func_269(int iParam0, int iParam1)
{
	Global_2404635 = iParam0;
	if (iParam0 != 0)
	{
		if (iParam1 != 0)
		{
		}
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = 120000;
	}
	Global_2404635.f_18 = iParam1;
}

void func_270(var uParam0)
{
	Global_2404635.f_2 = uParam0;
}

int func_271(int iParam0)
{
	if (func_276(iParam0))
	{
		return 0;
	}
	if (func_275(iParam0))
	{
		return 1;
	}
	if (func_274(iParam0))
	{
		return 2;
	}
	if (func_273(iParam0))
	{
		return 3;
	}
	if (func_272(iParam0))
	{
		return 4;
	}
	return -1;
}

bool func_272(int iParam0)
{
	return iParam0 == Global_262145.f_8610;
}

bool func_273(int iParam0)
{
	return iParam0 == Global_262145.f_8604;
}

bool func_274(int iParam0)
{
	return iParam0 == Global_262145.f_8598;
}

bool func_275(int iParam0)
{
	return iParam0 == Global_262145.f_8591;
}

bool func_276(int iParam0)
{
	return iParam0 == Global_262145.f_8586;
}

int func_277()
{
	return Global_2404635;
}

void func_278(int iParam0, bool bParam1)
{
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2097152[func_279()].f_6174.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_279()].f_6174.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_279()].f_6174.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_279()].f_6174.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_279()].f_6174.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_279()].f_6174.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_279()].f_6174.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_279()].f_6174.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_279()].f_6174.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_279()].f_6174.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_279()].f_6174.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_279()].f_6174.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_279()].f_6174.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_279()].f_6174.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_279()].f_6174.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_279()].f_6174.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_279()].f_6174.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_279()].f_6174.f_30 = iVar0;
			break;
	}
}

int func_279()
{
	iVar0 = 0;
	return iVar0;
}

void func_280(int iParam0, int iParam1, int iParam2, float fParam3)
{
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = floor((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_4 = iVar1;
	Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_3 = (Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_281(iVar1, 0);
	}
}

void func_281(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_282(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_293())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27584)
			{
				func_283(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_283(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
			if (iParam1 > 0 || Global_262145.f_27584)
			{
				func_283(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
			func_283(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_283(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bVar0 = false;
	if (!func_293())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_103()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263954[iVar2].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x98212517C34835B2(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x80C74F9931DCF063(iVar4))
		{
			*uParam0 = func_290(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263954[*uParam0].f_66.f_8 = 1;
					Global_4263954[*uParam0].f_66.f_12 = 1;
				}
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264535 = 1;
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_289(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_284(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_284(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62()].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_285(iParam0);
	}
}

void func_285(int iParam0)
{
	bVar0 = false;
	if (!func_293())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_288(iParam0))
		{
			if (!bVar0)
			{
				unk_0x7B4DDB71AD8E7B73();
			}
		}
		else if (!bVar0)
		{
			unk_0xA6EF5385F39BAC90(Global_4263954[iParam0].f_66);
		}
		func_286(&(Global_4263954[iParam0]));
	}
}

void func_286(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_287(&(uParam0->f_14));
	func_287(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_287(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_288(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_5 == 1;
	}
	return 0;
}

void func_289(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_290(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0].f_66.f_2 == 0)
		{
			if (!func_293())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263954[iVar0].f_66.f_2 = 1;
			Global_4263954[iVar0].f_66.f_1 = iParam5;
			Global_4263954[iVar0].f_66.f_3 = iParam1;
			Global_4263954[iVar0].f_66.f_4 = iParam2;
			Global_4263954[iVar0].f_66.f_7 = iParam3;
			Global_4263954[iVar0].f_66.f_5 = 0;
			Global_4263954[iVar0].f_66 = iParam0;
			Global_4263954[iVar0].f_66.f_6 = iParam4;
			Global_4263954[iVar0].f_66.f_11 = uParam8;
			Global_4263954[iVar0].f_66.f_10 = iParam7;
			Global_4263954[iVar0].f_66.f_13 = iParam9;
			Global_4263954[iVar0].f_66.f_12 = 0;
			Global_4263954[iVar0].f_66.f_14 = unk_0xF4CCC8CB6DE7F1AE();
			Global_4263954[iVar0].f_66.f_18 = 0;
			Global_4264521 = 0;
			if (bParam6)
			{
				Global_4263954[iVar0].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_291(Global_4263954[iVar0], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_291(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	if (iParam85 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = 285918879;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.f_2 = { Param0.f_66 };
	vVar0.f_2.f_33 = iParam85;
	iVar36 = func_32(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_292();
		unk_0xFB061A86A7AC749F(1, &vVar0, 36, iVar36);
	}
}

void func_292()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

int func_293()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

int func_294(int iParam0)
{
	iVar0 = 0;
	if (func_297(iParam0) >= 0)
	{
		iVar0 = func_297(iParam0);
	}
	else
	{
		iVar0 = func_295(iParam0);
	}
	return iVar0;
}

int func_295(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000;
			break;
		
		case 10:
			return 5000;
			break;
		
		case 11:
			return 8000;
			break;
		
		case 8:
			return 1000;
			break;
		
		case 0:
			return 500;
			break;
		
		case 9:
			return 250;
			break;
		
		case 13:
			return 1000;
			break;
		
		case 12:
			return 7500;
			break;
		
		case 2:
			return 1000;
			break;
		
		case 14:
			return 500;
			break;
		
		case 20:
			if (func_296())
			{
				return 0;
			}
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 1)
			{
				return 200;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 2)
			{
				return 400;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 3)
			{
				return 600;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 4)
			{
				return 800;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 5)
			{
				return 1000;
			}
			break;
		
		case 6:
			return 500;
			break;
		
		case 22:
			return 200;
			break;
		
		case 23:
			return 400;
			break;
		
		case 24:
			return 700;
			break;
		
		case 25:
			return 100;
			break;
		
		case 26:
			return 1000;
			break;
		
		case 57:
			return 700;
			break;
		
		case 35:
			return 5000;
			break;
		
		case 15:
			return 0;
			break;
		
		case 17:
			return 0;
			break;
		
		case 18:
			return 0;
			break;
		
		case 19:
			return 0;
			break;
		
		case 21:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 39:
			return 200;
			break;
		
		case 40:
			return 1000;
		
		case 41:
			return 750;
		
		case 42:
			return 0;
	}
	return 0;
}

bool func_296()
{
	return unk_0xEAE0D21A50E6C7F4(func_190(6424, -1, 0), 19);
}

int func_297(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_6645;
			break;
		
		case 10:
			return Global_262145.f_4118;
			break;
		
		case 11:
			return Global_262145.f_4119;
			break;
		
		case 8:
			return Global_262145.f_4116;
			break;
		
		case 0:
			return Global_262145.f_4102;
			break;
		
		case 9:
			return Global_262145.f_4117;
			break;
		
		case 13:
			return Global_262145.f_4121;
			break;
		
		case 12:
			return Global_262145.f_4120;
			break;
		
		case 2:
			return Global_262145.f_4112;
			break;
		
		case 14:
			return Global_262145.f_4122;
			break;
		
		case 20:
			if (func_296())
			{
				return 0;
			}
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 1)
			{
				return Global_262145.f_6652;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 2)
			{
				return Global_262145.f_6653;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 3)
			{
				return Global_262145.f_6654;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 4)
			{
				return Global_262145.f_6655;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 5)
			{
				return Global_262145.f_6656;
			}
			break;
		
		case 6:
			return Global_262145.f_4115;
			break;
		
		case 22:
			return Global_262145.f_4128;
			break;
		
		case 23:
			return Global_262145.f_4129;
			break;
		
		case 24:
			return Global_262145.f_4130;
			break;
		
		case 25:
			return Global_262145.f_4131;
			break;
		
		case 26:
			return Global_262145.f_4132;
			break;
		
		case 35:
			return Global_262145.f_7221;
			break;
		
		case 15:
			return Global_262145.f_6646;
			break;
		
		case 17:
			return Global_262145.f_6646;
			break;
		
		case 18:
			return Global_262145.f_6646;
			break;
		
		case 19:
			return Global_262145.f_6646;
			break;
		
		case 21:
			return Global_262145.f_6646;
			break;
		
		case 36:
			return Global_262145.f_7688;
			break;
		
		case 39:
			return -1;
			break;
		
		case 40:
			return Global_262145.f_12884;
			break;
		
		case 41:
			return Global_262145.f_12885;
			break;
		
		case 42:
			return Global_262145.f_12886;
			break;
		
		case 43:
			return Global_262145.f_15429;
			break;
		
		case 44:
			return Global_262145.f_15431;
			break;
		
		case 57:
			return Global_262145.f_4130;
			break;
		
		case 58:
			return Global_262145.f_24998;
			break;
		
		case 62:
			return Global_262145.f_24999;
			break;
		
		case 63:
			return Global_262145.f_28457;
			break;
		
		case 64:
			return Global_262145.f_6646;
			break;
	}
	return 0;
}

int func_298(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam1)
	{
		case 0:
			if (!func_11(uParam2))
			{
				func_5(uParam2, 0, 0);
			}
			else if (func_10(uParam2, 10000, 0))
			{
				*uParam1++;
				unk_0x0674E58A79778E99(iParam3, iParam4);
			}
			break;
		
		case 1:
			iVar0 = func_33(unk_0xD803B885F5E47A62());
			iLocal_733 = func_299(iParam0, iVar0, 0, 1);
			if (iLocal_733 != -1)
			{
				*uParam1++;
			}
			else
			{
				unk_0x5D96D8530B3D0904(iParam3, iParam4);
				*uParam1 = 99;
			}
			break;
		
		case 2:
			Local_734 = { func_260(iLocal_733) };
			if (func_259(&Local_734))
			{
				*uParam1++;
			}
			else
			{
				unk_0x5D96D8530B3D0904(iParam3, iParam4);
				*uParam1 = 99;
			}
			break;
		
		case 3:
			func_17(&Local_734, 1, 0, 0, 1);
			*uParam1 = 99;
			break;
		
		case 99:
			return 1;
			break;
	}
	return 0;
}

int func_299(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iVar0 = -1;
	iVar1 = 2;
	iVar0 = func_300(iParam0, iParam1, iVar1, bParam2, iParam3);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	iVar1 = 1;
	iVar0 = func_300(iParam0, iParam1, iVar1, bParam2, iParam3);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	iVar1 = 0;
	iVar0 = func_300(iParam0, iParam1, iVar1, bParam2, iParam3);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	return -1;
}

int func_300(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam4 < 1)
	{
		iParam4 = 1;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 500)
	{
		if (func_311(iVar0, iParam0, iParam1, iParam2))
		{
			iVar2[iVar1] = iVar0;
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		return -1;
	}
	iVar503 = 0;
	iVar504 = 0;
	if (iParam2 == 2)
	{
		iVar505 = iVar1;
		iVar506 = -1;
		iVar507 = -1;
		iVar508 = 16777215;
		bVar509 = false;
		iVar510 = 0;
		iVar511 = 35;
		StringCopy(&Var512, "", 24);
		iVar504 = 0;
		while (iVar504 < iVar505)
		{
			iVar506 = Global_2398938[iVar2[iVar504]].f_4;
			iVar507 = Global_2398938[iVar2[iVar504]].f_5;
			bVar509 = Global_2398938[iVar2[iVar504]].f_7;
			iVar511 = Global_2398938[iVar2[iVar504]];
			iVar508 = Global_2398938[iVar2[iVar504]].f_6;
			Var512 = { func_261(iVar506, iVar507) };
			if (func_310(iVar508) && func_309(iVar508))
			{
				iVar510 = 1;
			}
			if (((((!bVar509 && !func_308(&Var512)) && !func_307(iVar511)) && !func_306(iVar511)) && iVar510) && func_304(Global_2398938[iVar2[iVar504]].f_3))
			{
				iVar2[iVar503] = iVar2[iVar504];
				iVar503++;
			}
			iVar504++;
		}
		iVar1 = iVar503;
	}
	if (iParam2 == 1)
	{
		iVar518 = iVar1;
		iVar519 = 16777215;
		iVar520 = 0;
		bVar521 = false;
		iVar522 = 35;
		iVar504 = 0;
		while (iVar504 < iVar518)
		{
			if (Global_2398938[iVar2[iVar504]].f_4 == 63)
			{
				bVar521 = unk_0xEAE0D21A50E6C7F4(Global_794709.f_4[Global_2398938[iVar2[iVar504]].f_5].f_76, 14);
			}
			iVar519 = Global_2398938[iVar2[iVar504]].f_6;
			iVar522 = Global_2398938[iVar2[iVar504]];
			if (func_310(iVar519) && func_309(iVar519))
			{
				iVar520 = 1;
			}
			if ((((!bVar521 && !func_307(iVar522)) && !func_306(iVar522)) && iVar520) && func_304(Global_2398938[iVar2[iVar504]].f_3))
			{
				iVar2[iVar503] = iVar2[iVar504];
				iVar503++;
			}
			iVar504++;
		}
		iVar1 = iVar503;
	}
	if (iParam2 == 0)
	{
		iVar523 = iVar1;
		iVar524 = 16777215;
		iVar525 = 0;
		bVar526 = false;
		iVar527 = 0;
		iVar528 = 35;
		iVar504 = 0;
		while (iVar504 < iVar523)
		{
			bVar526 = Global_2398938[iVar2[iVar504]].f_8;
			iVar527 = Global_2398938[iVar2[iVar504]].f_7;
			iVar524 = Global_2398938[iVar2[iVar504]].f_6;
			iVar528 = Global_2398938[iVar2[iVar504]];
			if (func_310(iVar524) && func_309(iVar524))
			{
				iVar525 = 1;
			}
			if (((((iVar527 && !bVar526) && !func_307(iVar528)) && !func_306(iVar528)) && iVar525) && func_304(Global_2398938[iVar2[iVar504]].f_3))
			{
				iVar2[iVar503] = iVar2[iVar504];
				iVar503++;
			}
			iVar504++;
		}
		iVar1 = iVar503;
	}
	if (iVar1 == 0)
	{
		return -1;
	}
	bVar529 = bParam3;
	fVar530 = 88888,8f;
	fVar531 = 20000f;
	fVar532 = 12000f;
	fVar533 = 0f;
	vVar534 = { 0f, 0f, 0f };
	iVar537 = 35;
	iVar0 = 0;
	while (iVar0 < 500)
	{
		fVar538[iVar0] = fVar530;
		iVar0++;
	}
	vVar1039 = { 0f, 0f, 0f };
	if (func_9(unk_0xD803B885F5E47A62(), 0, 1))
	{
		vVar1039 = { func_77(unk_0xD803B885F5E47A62()) };
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			vVar534 = { func_303(iVar2[iVar0]) };
			iVar537 = Global_2398938[iVar2[iVar0]];
			if (!func_28(vVar534, 0f, 0f, 0f, 1056964608, 0))
			{
				fVar533 = unk_0x0EB28750412C3A5A(vVar534, vVar1039, true);
				if (func_302(iVar537))
				{
					fVar533 = (fVar533 + fVar531);
				}
			}
			else
			{
				fVar533 = 99999,9f;
			}
			fVar538[iVar0] = fVar533;
			iVar0++;
		}
	}
	else
	{
		bVar529 = false;
		if (bParam3)
		{
		}
	}
	iVar1139 = 0;
	iVar1140 = func_35();
	iVar1141 = 0;
	iVar1142 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1140 = unk_0x117658E336116132(iVar0);
		if (iVar1140 != unk_0xD803B885F5E47A62())
		{
			if (func_9(iVar1140, 0, 1))
			{
				iVar1141 = 0;
				while (iVar1141 < 3)
				{
					iVar1142 = func_301(iVar1140, iVar1141);
					if (iVar1142 != 0)
					{
						iVar1042[iVar1139] = iVar1142;
						iVar1139++;
					}
					iVar1141++;
				}
			}
		}
		iVar0++;
	}
	bVar1143 = false;
	iVar1141 = 0;
	while (iVar1141 < iVar1139)
	{
		bVar1143 = true;
		iVar0 = 0;
		while (bVar1143)
		{
			if (iVar1042[iVar1141] == Global_2398938[iVar2[iVar0]].f_2)
			{
				bVar1143 = false;
				fVar538[iVar0] = (fVar538[iVar0] + fVar532);
			}
			if (bVar1143)
			{
				iVar0++;
				if (iVar0 >= iVar1)
				{
					bVar1143 = false;
				}
			}
		}
		iVar1141++;
	}
	fVar1144 = 0f;
	iVar1145 = 0;
	if (bVar529)
	{
		bVar1146 = true;
		while (bVar1146)
		{
			bVar1146 = false;
			iVar503 = 0;
			iVar504 = iVar503 + 1;
			while (iVar504 < iVar1)
			{
				if (fVar538[iVar504] < fVar538[iVar503])
				{
					bVar1146 = true;
					fVar1144 = fVar538[iVar503];
					iVar1145 = iVar2[iVar503];
					fVar538[iVar503] = fVar538[iVar504];
					iVar2[iVar503] = iVar2[iVar504];
					fVar538[iVar504] = fVar1144;
					iVar2[iVar504] = iVar1145;
				}
				iVar504++;
				iVar503++;
			}
		}
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar0++;
		}
	}
	iVar1147 = 0;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (fVar538[iVar0] < fVar532)
		{
			iVar1147++;
		}
		iVar0++;
	}
	iVar1148 = 0;
	iVar1149 = 0;
	if (iVar1 > 1)
	{
		iVar1149 = iVar1;
		if (bVar529)
		{
			if (iParam4 < iVar1149)
			{
				iVar1149 = iParam4;
			}
			if (iVar1147 > 0 && iVar1147 < iVar1149)
			{
				iVar1149 = iVar1147;
			}
		}
		iVar1148 = unk_0x09AC81E49EA267F7(0, iVar1149);
	}
	return iVar2[iVar1148];
}

int func_301(int iParam0, int iParam1)
{
	if (!func_9(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_2425662[iParam0].f_83.f_14.f_14[iParam1];
}

int func_302(int iParam0)
{
	if (iParam0 == 35)
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2404026[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_303(int iParam0)
{
	Var0 = { func_260(iParam0) };
	return func_258(&Var0);
}

int func_304(int iParam0)
{
	if (func_305(iParam0) || func_231(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_305(int iParam0)
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

int func_306(int iParam0)
{
	switch (Global_2404635)
	{
		case 0:
		case 1:
		case 10:
		case 11:
		case 12:
			return 0;
		
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			break;
		
		default:
			return 0;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 3:
		case 4:
		case 5:
			return 0;
		
		case 2:
		case 6:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

bool func_307(int iParam0)
{
	if (iParam0 == 35)
	{
		return 0;
	}
	return iParam0 == Global_2404070;
}

int func_308(char* sParam0)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2404026[iVar0] != 35)
		{
			if (unk_0x7F8A39872A07D2CE(sParam0, &(Global_2404026[iVar0].f_1.f_3)))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_309(int iParam0)
{
	iVar0 = unk_0xD8A54335F18763BA();
	iVar0++;
	if (iVar0 >= 24)
	{
		iVar0 = 0;
	}
	return unk_0xEAE0D21A50E6C7F4(iParam0, iVar0);
}

bool func_310(int iParam0)
{
	iVar0 = unk_0xD8A54335F18763BA();
	return unk_0xEAE0D21A50E6C7F4(iParam0, iVar0);
}

int func_311(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 >= Global_1311858)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = iParam2;
	switch (iParam3)
	{
		case 2:
			if (Global_2403939 > iParam2)
			{
				return 0;
			}
			iVar0 = Global_2403939;
			break;
		
		case 1:
			iVar0 = 0;
			iVar1 = (Global_2403939 - 1);
			if (iVar0 > iVar1)
			{
				return 0;
			}
			break;
		
		case 0:
			iVar0 = 0;
			break;
		
		default:
			return 0;
	}
	bVar2 = false;
	if (iParam1 != 145)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		if (func_313(iParam0) != iParam1)
		{
			return 0;
		}
	}
	iVar3 = func_312(iParam0);
	if (iVar3 < iVar0)
	{
		return 0;
	}
	if (iVar3 > iVar1)
	{
		return 0;
	}
	return 1;
}

var func_312(int iParam0)
{
	return Global_2398938[iParam0].f_1;
}

int func_313(int iParam0)
{
	return func_60(Global_2398938[iParam0]);
}

int func_314(int iParam0, var uParam1, bool bParam2)
{
	switch (*uParam1)
	{
		case 0:
			func_341(iParam0);
			*uParam1++;
			break;
		
		case 1:
			if (!bParam2)
			{
				iVar4 = func_33(unk_0xD803B885F5E47A62());
				iLocal_733 = func_299(iParam0, iVar4, 0, 1);
				if (iLocal_733 != -1)
				{
					*uParam1 = 2;
				}
				else
				{
					*uParam1 = 50;
				}
			}
			else if (func_337(iParam0))
			{
				*uParam1 = 2;
			}
			else
			{
				*uParam1 = 50;
			}
			break;
		
		case 2:
			Var0 = { func_336(iParam0, bParam2) };
			if (func_316(&uLocal_744, "CT_AUD", &Var0, 12, 0, 0, 0))
			{
				*uParam1 = 99;
			}
			break;
		
		case 50:
			Var0 = { func_315(iParam0) };
			if (func_316(&uLocal_744, "CT_AUD", &Var0, 12, 0, 0, 0))
			{
				*uParam1 = 99;
			}
			break;
		
		case 99:
			return 1;
			break;
	}
	return 0;
}

struct<4> func_315(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			StringCopy(&Var0, "MPCT_Jobno", 16);
			break;
		
		case 86:
			StringCopy(&Var0, "MPCT_GJobno", 16);
			break;
		
		case 18:
			StringCopy(&Var0, "MPCT_SJobno", 16);
			break;
		
		case 31:
			StringCopy(&Var0, "MPCT_MJobno", 16);
			break;
		
		case 20:
			StringCopy(&Var0, "MPCT_RJobno", 16);
			break;
	}
	return Var0;
}

bool func_316(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_335(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_317(sParam2, iParam3, 0);
}

int func_317(char* sParam0, int iParam1, bool bParam2)
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
					func_334();
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
		if (func_333(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_332();
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
				func_324();
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
				if (func_323())
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
			if (func_322())
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
			func_321();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_320();
		func_318();
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
		func_334();
	}
	return 0;
}

void func_318()
{
	if (!func_319())
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

int func_319()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_35())
	{
		return 0;
	}
	if (func_111(unk_0xD803B885F5E47A62()))
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

void func_320()
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

void func_321()
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

int func_322()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_323()
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

void func_324()
{
	if (func_331(14))
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
		Global_19486 = func_325();
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

var func_325()
{
	func_326();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_326()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_329(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_328(unk_0x16F2683693E537C9());
			if (func_327(iVar0) && (!func_331(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_327(Global_111638.f_2358.f_539.f_4321))
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

bool func_327(int iParam0)
{
	return iParam0 < 3;
}

int func_328(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_329(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_329(int iParam0)
{
	if (func_327(iParam0))
	{
		return func_330(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_330(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_331(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_332()
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

bool func_333(int iParam0, int iParam1)
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

void func_334()
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

void func_335(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

struct<4> func_336(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 12:
			if (!bParam1)
			{
				StringCopy(&Var0, "MPCT_Job", 16);
			}
			else
			{
				StringCopy(&Var0, "MPCT_Lconf", 16);
			}
			break;
		
		case 86:
			StringCopy(&Var0, "MPCT_GJob", 16);
			break;
		
		case 18:
			StringCopy(&Var0, "MPCT_SJob", 16);
			break;
		
		case 31:
			StringCopy(&Var0, "MPCT_MJob", 16);
			break;
		
		case 20:
			StringCopy(&Var0, "MPCT_RJob", 16);
			break;
	}
	return Var0;
}

bool func_337(int iParam0)
{
	uVar0 = func_33(unk_0xD803B885F5E47A62());
	return func_338(iParam0, uVar0) != -1;
}

int func_338(int iParam0, var uParam1)
{
	iVar26 = 0;
	iVar27 = func_339(iParam0, uParam1, &uVar0, &iVar26);
	if (iVar27 == 0)
	{
		return -1;
	}
	iVar28 = unk_0x09AC81E49EA267F7(0, iVar27);
	return uVar0[iVar28];
}

int func_339(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		(*uParam2)[iVar0] = -1;
		iVar0++;
	}
	*iParam3 = 0;
	if (Global_2404634 == 0)
	{
		return 0;
	}
	if (Global_2404635 != 0 && Global_2404635 != 1)
	{
		return 0;
	}
	if (iParam0 != 12)
	{
		return 0;
	}
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_2404634)
	{
		if (Global_2404283[iVar0].f_13)
		{
			(*uParam2)[iVar1] = iVar0;
			if (!func_340(iVar0))
			{
				unk_0x5D96D8530B3D0904(iParam3, iVar1);
			}
			else
			{
				unk_0x0674E58A79778E99(iParam3, iVar1);
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar2 = iVar1;
	if (iVar2 > 1)
	{
		iVar3 = 0;
		iVar4 = 0;
		iVar5 = 0;
		iVar6 = 0;
		bVar7 = false;
		iVar1 = 0;
		bVar8 = true;
		iVar3 = 0;
		while (iVar3 < 5)
		{
			iVar5 = iVar1;
			iVar4 = -1;
			switch (iVar3)
			{
				case 0:
					iVar4 = Global_262145.f_8586;
					break;
				
				case 1:
					iVar4 = Global_262145.f_8591;
					break;
				
				case 2:
					iVar4 = Global_262145.f_8598;
					break;
				
				case 3:
					iVar4 = Global_262145.f_8604;
					break;
				
				case 4:
					iVar4 = Global_262145.f_8610;
					break;
			}
			bVar8 = true;
			if (iVar5 >= iVar2 || iVar4 == -1)
			{
				bVar8 = false;
			}
			while (bVar8)
			{
				if ((*uParam2)[iVar5] != -1)
				{
					if (iVar4 == Global_2404283[(*uParam2)[iVar5]].f_12)
					{
						if (iVar5 != iVar1)
						{
							iVar6 = (*uParam2)[iVar1];
							(*uParam2)[iVar1] = (*uParam2)[iVar5];
							(*uParam2)[iVar5] = iVar6;
							bVar7 = unk_0xEAE0D21A50E6C7F4(*iParam3, iVar1);
							if (unk_0xEAE0D21A50E6C7F4(*iParam3, iVar5))
							{
								unk_0x5D96D8530B3D0904(iParam3, iVar1);
							}
							else
							{
								unk_0x0674E58A79778E99(iParam3, iVar1);
							}
							if (bVar7)
							{
								unk_0x5D96D8530B3D0904(iParam3, iVar5);
							}
							else
							{
								unk_0x0674E58A79778E99(iParam3, iVar5);
							}
						}
						iVar1++;
						bVar8 = false;
					}
				}
				if (bVar8)
				{
					iVar5++;
					if (iVar5 >= iVar2)
					{
						bVar8 = false;
					}
				}
			}
			iVar3++;
		}
	}
	return iVar2;
}

int func_340(int iParam0)
{
	iVar0 = Global_2404283[iParam0].f_12;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_2405025[iVar1] == iVar0)
		{
			if (unk_0x1C0640BA9A7327B3() > Global_2405025[iVar1].f_1)
			{
				Global_2405025[iVar1].f_1 = 0;
				Global_2405025[iVar1] = 0;
			}
			else
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_341(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			func_342(&uLocal_744, 3, 0, "Lester", 0, 1);
			break;
		
		case 86:
			func_342(&uLocal_744, 3, 0, "Gerald", 0, 1);
			break;
		
		case 18:
			func_342(&uLocal_744, 3, 0, "Simeon", 0, 1);
			break;
		
		case 31:
			func_342(&uLocal_744, 3, 0, "Martin", 0, 1);
			break;
		
		case 20:
			func_342(&uLocal_744, 2, 0, "NervousRon", 0, 1);
			break;
	}
}

void func_342(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

bool func_343()
{
	return unk_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

int func_344()
{
	return Global_1590535[unk_0xD803B885F5E47A62()].f_197;
}

void func_345()
{
	if (!unk_0xEAE0D21A50E6C7F4(vLocal_603[unk_0x57270EE11514DC67()], 0))
	{
		if (func_161(8, 0, 0))
		{
			unk_0x5D96D8530B3D0904(&(vLocal_603[unk_0x57270EE11514DC67()]), 0);
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(vLocal_603[unk_0x57270EE11514DC67()], 1))
	{
		if (func_161(3, 0, 0))
		{
			unk_0x5D96D8530B3D0904(&(vLocal_603[unk_0x57270EE11514DC67()]), 1);
		}
	}
}

int func_346()
{
	return Local_177.f_2;
}

int func_347(int iParam0)
{
	return vLocal_603[iParam0].f_1;
}

void func_348()
{
	func_350();
	func_349();
}

void func_349()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_350()
{
	if (!func_356())
	{
		return;
	}
	if (!unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_1312585.f_9)
	{
		return;
	}
	func_351();
}

void func_351()
{
	func_353();
	func_352(0);
}

void func_352(bool bParam0)
{
	bVar0 = unk_0x8CD06866876216F2();
	Global_1312585 = 20;
	StringCopy(&(Global_1312585.f_1), "", 32);
	Global_1312585.f_9 = 0;
	if (bVar0)
	{
		Global_1312585.f_10 = unk_0x2B6E0A53779D29EA();
		Global_1312585.f_11 = unk_0x2B6E0A53779D29EA();
	}
	StringCopy(&(Global_1312585.f_12), "", 16);
	StringCopy(&(Global_1312585.f_16), "", 64);
	StringCopy(&(Global_1312585.f_32), "", 64);
	Global_1312585.f_52 = 0;
	Global_1312585.f_53 = 0;
	Global_1312585.f_54 = 0;
	Global_1312585.f_55 = -1;
	Global_1312585.f_56 = 0;
	Global_1312585.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_353()
{
	if (!func_355())
	{
	}
	if (func_356())
	{
		unk_0x400C0D66EFD08603(&(Global_1312585.f_12));
		func_354();
		unk_0x35F2C6537D10DAEB();
	}
}

void func_354()
{
	switch (Global_1312585)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x6D99DF8263D35CE5(Global_1312585.f_52);
			return;
		
		case 2:
			unk_0x6D99DF8263D35CE5(Global_1312585.f_52);
			unk_0x6D99DF8263D35CE5(Global_1312585.f_53);
			return;
		
		case 3:
			unk_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		
		case 4:
			unk_0x6B012227B3921E18(&(Global_1312585.f_16));
			unk_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		
		case 5:
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			return;
		
		case 6:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			return;
		
		case 7:
			unk_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		
		case 8:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		
		case 9:
			unk_0x0D45A7AB73600CFA(&(Global_1312585.f_16));
			return;
		
		case 10:
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_32));
			return;
		
		case 12:
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			unk_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		
		case 13:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0x6B012227B3921E18(&(Global_1312585.f_16));
			unk_0x3A820E495A7BA3E5(Global_1312585.f_57);
			unk_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		
		case 11:
			unk_0x0D45A7AB73600CFA(&(Global_1312585.f_16));
			return;
		
		case 14:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		
		case 15:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			unk_0x3A820E495A7BA3E5(Global_1312585.f_57);
			unk_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		
		case 17:
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_32));
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0x6B012227B3921E18(&(Global_1312585.f_48));
			return;
		
		case 16:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			return;
		
		case 19:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		
		case 18:
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0x6B012227B3921E18(&(Global_1312585.f_48));
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_32));
			return;
		
		default:
	}
}

int func_355()
{
	if (!func_356())
	{
		return 0;
	}
	unk_0x18B60B994182620C(&(Global_1312585.f_12));
	func_354();
	return unk_0xB165082A56EE6E7F();
}

int func_356()
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

int func_357()
{
	func_364(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_363())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_362())
	{
		return 1;
	}
	if (func_361(159))
	{
		if (!func_360())
		{
			return 1;
		}
	}
	if (func_361(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_358() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_358()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_358()
{
	switch (func_170())
	{
		case 0:
			return func_359();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_359()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

bool func_360()
{
	return Global_2450632.f_598;
}

int func_361(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_362()
{
	return Global_2460680;
}

bool func_363()
{
	return Global_2450632.f_593;
}

void func_364(var uParam0)
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
					func_365(iVar0);
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

void func_365(int iParam0)
{
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_9(vVar0.y, 1, 1))
		{
			iVar3 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar3))
			{
				if (unk_0x405E212DDE472467(iVar3, 0))
				{
					iVar4 = unk_0x6937EA2286828455(iVar3, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar4, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_366(iVar4, &bVar5))
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

int func_366(int iParam0, var uParam1)
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

void func_367()
{
	wait(0);
}

void func_368(struct<21> Param0)
{
	func_372(func_373(Param0), Param0);
	func_370(0, -1, 0);
	unk_0x9752E7BAEABA939E(&Local_177, 14);
	unk_0x35B62793EAE9ADDF(&vLocal_603, 97);
	unk_0x256D93AFAE851A7A(0);
	if (!func_369())
	{
		func_348();
	}
}

int func_369()
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
		if (func_363())
		{
			return 0;
		}
		if (func_361(157))
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

int func_370(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_349();
			}
			else
			{
				return 0;
			}
		}
		if (!func_371())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_349();
					}
					else
					{
						return 0;
					}
				}
				if (func_363())
				{
					if (!bParam2)
					{
						func_349();
					}
					else
					{
						return 0;
					}
				}
				if (func_361(157))
				{
					if (!bParam2)
					{
						func_349();
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
					func_349();
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
				func_349();
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
			func_349();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_371()
{
	return Global_1312854;
}

void func_372(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_349();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

int func_373(int iParam0)
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

