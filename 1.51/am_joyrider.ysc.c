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
	iLocal_175 = 20;
	if (unk_0x8CD06866876216F2() && func_71(unk_0xD803B885F5E47A62(), 0, 1))
	{
		func_64(ScriptParam_0);
	}
	else
	{
		func_60();
	}
	while (true)
	{
		func_59();
		if (func_48() || func_44(9))
		{
			func_60();
		}
		if (unk_0x09BE1E6DF7B80B43())
		{
			func_60();
		}
		switch (func_43(unk_0x57270EE11514DC67()))
		{
			case 0:
				if (func_42() == 1)
				{
					func_41();
					vLocal_73[unk_0x57270EE11514DC67()] = 1;
				}
				else if (func_42() == 4)
				{
					vLocal_73[unk_0x57270EE11514DC67()] = 3;
				}
				break;
			
			case 1:
				if (func_42() == 1)
				{
					func_39();
				}
				else if (func_42() == 4)
				{
					vLocal_73[unk_0x57270EE11514DC67()] = 3;
				}
				break;
			
			case 3:
				func_37(&(Local_61.f_10));
				if (func_36(&(Local_61.f_10)))
				{
					vLocal_73[unk_0x57270EE11514DC67()] = 4;
				}
				break;
			
			case 2:
				vLocal_73[unk_0x57270EE11514DC67()] = 4;
			
			case 4:
				func_60();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_42())
			{
				case 0:
					if (func_35())
					{
						if (func_8())
						{
							Local_61 = 1;
						}
					}
					break;
				
				case 1:
					func_7();
					func_6();
					if (func_1())
					{
						Local_61 = 4;
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
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Local_61.f_9 == 0)
	{
		if (!func_4(Local_61.f_2))
		{
			return 1;
		}
		else if (func_3(Local_61.f_3))
		{
			return 1;
		}
		else
		{
			if (iLocal_178 == 1)
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_61.f_1, 0))
				{
					return 1;
				}
			}
			if (!unk_0xC42A92762C58E1B9(unk_0x1B50683925F00106(Local_61.f_3), unk_0xB177666FAB6F4417(Local_61.f_2), 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_3(var uParam0)
{
	if (unk_0xE9F78D191AD5EDBA(uParam0))
	{
		return unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(uParam0));
	}
	return 1;
}

int func_4(var uParam0)
{
	if (unk_0xE9F78D191AD5EDBA(uParam0))
	{
		return !func_5(unk_0xB177666FAB6F4417(uParam0));
	}
	return 0;
}

int func_5(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0x437347B10A200C4B(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_6()
{
	switch (Local_61.f_9)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_7()
{
	if (iLocal_177 == 0)
	{
		iLocal_178 = 0;
		unk_0x5D96D8530B3D0904(&(Local_61.f_1), 0);
	}
	if (func_4(Local_61.f_2))
	{
		iVar0 = 1;
	}
	if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iLocal_177)))
	{
		iVar1 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_177));
		iVar2 = unk_0x9539D44F3E4492F6(iVar1);
		if (func_71(iVar1, 1, 1))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_61.f_1, 0))
			{
				if (iVar0 == 1)
				{
					if (unk_0x12DE711B1C681E9E(iVar2, unk_0xB177666FAB6F4417(Local_61.f_2), 250f, 250f, 250f, 0, 1, 0))
					{
						unk_0x0674E58A79778E99(&(Local_61.f_1), 0);
					}
				}
				else
				{
					unk_0x0674E58A79778E99(&(Local_61.f_1), 0);
				}
			}
		}
	}
	iLocal_177++;
	if (iLocal_177 == unk_0x54EABC0DD106045B())
	{
		iLocal_177 = 0;
		iLocal_178 = 1;
	}
}

int func_8()
{
	if (unk_0x2358623ECCDB11B3(1, 1, 0, 0))
	{
		if (func_34(Local_61.f_4) && func_34(Local_61.f_5))
		{
			if (func_12() && func_9())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_9()
{
	if ((!unk_0xE9F78D191AD5EDBA(Local_61.f_3) && func_34(Local_61.f_5)) && unk_0xE9F78D191AD5EDBA(Local_61.f_2))
	{
		if (func_4(Local_61.f_2))
		{
			if (func_11(&(Local_61.f_3), Local_61.f_2, 22, Local_61.f_5, -1, 1, 1, 1))
			{
				unk_0xC743BD39A24D0583(unk_0x1B50683925F00106(Local_61.f_3), 0);
				if (func_10())
				{
					unk_0x6DF7BF67E86AAE86(unk_0x1B50683925F00106(Local_61.f_3), Global_1575002);
				}
				else
				{
					unk_0x6DF7BF67E86AAE86(unk_0x1B50683925F00106(Local_61.f_3), Global_1575005);
				}
				unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_61.f_3), 1);
				if (func_10())
				{
					iVar0 = unk_0x09AC81E49EA267F7(0, 10);
					if (iVar0 < 5)
					{
						unk_0x8B25B8DC6068152D(unk_0x1B50683925F00106(Local_61.f_3), 453432689, 25000, func_10());
					}
					else if (iVar0 > 6)
					{
						unk_0x8B25B8DC6068152D(unk_0x1B50683925F00106(Local_61.f_3), 324215364, 25000, func_10());
					}
					else
					{
						unk_0x8B25B8DC6068152D(unk_0x1B50683925F00106(Local_61.f_3), 487013001, 25000, func_10());
					}
				}
				iVar0 = unk_0x09AC81E49EA267F7(0, 10);
				if (iVar0 == 0 || iVar0 == 1)
				{
					unk_0x083F03A847B640E9(unk_0x1B50683925F00106(Local_61.f_3), 0);
				}
				else if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 4)
				{
					unk_0x083F03A847B640E9(unk_0x1B50683925F00106(Local_61.f_3), 2);
				}
				else
				{
					unk_0x083F03A847B640E9(unk_0x1B50683925F00106(Local_61.f_3), 1);
				}
				iVar0 = unk_0x09AC81E49EA267F7(0, 4);
				if (iVar0 == 0)
				{
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_61.f_3), 5, 1);
				}
				else if (iVar0 == 1)
				{
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_61.f_3), 17, 1);
				}
				else if (iVar0 == 2)
				{
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_61.f_3), 13, 1);
				}
				if (func_10())
				{
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_61.f_3), 20, 1);
				}
				if (func_10())
				{
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_61.f_3), 2, 1);
				}
				iVar0 = unk_0x09AC81E49EA267F7(0, 4);
				if (iVar0 == 0)
				{
					unk_0x3CC33E4E9CE523F4(unk_0x1B50683925F00106(Local_61.f_3), 2);
				}
				else if (iVar0 == 1)
				{
					unk_0x3CC33E4E9CE523F4(unk_0x1B50683925F00106(Local_61.f_3), 1);
				}
				else if (iVar0 == 2)
				{
					unk_0x3CC33E4E9CE523F4(unk_0x1B50683925F00106(Local_61.f_3), 3);
				}
				unk_0x5B318B6EBD0A7F3E(unk_0x1B50683925F00106(Local_61.f_3), 1);
				unk_0x579B0182884711E5(unk_0x1B50683925F00106(Local_61.f_3), 1);
				unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_61.f_3), 29, true);
				unk_0x545E1397F38D9D5A(unk_0x1B50683925F00106(Local_61.f_3), 3);
				unk_0xD458AC1C1D29C3B4(unk_0x1B50683925F00106(Local_61.f_3), round((200f * Global_262145.f_154)), 0);
				unk_0x0218D9089D75EFEE(unk_0xB177666FAB6F4417(Local_61.f_2), 1);
				unk_0xDC2C59BD0989562B(unk_0xB177666FAB6F4417(Local_61.f_2), 1);
				func_41();
				unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_61.f_3), uLocal_171);
				unk_0x71199B01895C6202(Local_61.f_5);
			}
		}
	}
	if (!unk_0xE9F78D191AD5EDBA(Local_61.f_3))
	{
		return 0;
	}
	return 1;
}

int func_10()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_11(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xA3FA8B6D2780D661(1))
	{
		return 0;
	}
	if (!unk_0xE9F78D191AD5EDBA(uParam1))
	{
		return 0;
	}
	if (!unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xE8C9CB886096272A(unk_0x852A19533F896693(unk_0xB177666FAB6F4417(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		unk_0x120A395B0ECB8EA5(unk_0x1B50683925F00106(*uParam0), iParam7);
		if (unk_0xECE0BE5313FD8BDA(unk_0x1B50683925F00106(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xF4F945BB00F6E31C(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_12()
{
	if (!unk_0xE9F78D191AD5EDBA(Local_61.f_2))
	{
		if (func_34(Local_61.f_4))
		{
			if (func_16(&vVar0, &iVar3))
			{
				if (func_13(&(Local_61.f_2), Local_61.f_4, vVar0, iVar3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					unk_0x56FDC9ADE35F7DB0(unk_0xB177666FAB6F4417(Local_61.f_2), true, 1, 0);
					unk_0x71A357CDEB34742E(unk_0xB177666FAB6F4417(Local_61.f_2), 1);
					unk_0x750A9DEB80D6992C(unk_0xB177666FAB6F4417(Local_61.f_2), true);
					unk_0x2E1E5367A885F9B7(unk_0xB177666FAB6F4417(Local_61.f_2), "JOYRIDER_GROUP", 0f);
					unk_0x71199B01895C6202(Local_61.f_4);
				}
			}
		}
	}
	if (!unk_0xE9F78D191AD5EDBA(Local_61.f_2))
	{
		return 0;
	}
	return 1;
}

int func_13(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	if (!unk_0x468C1AC3ABF95C57(iParam1))
	{
		return 0;
	}
	if (!unk_0xE75B31D140F2F10B(1))
	{
		return 0;
	}
	fVar0 = 1,5f;
	if (iParam1 == -32878452)
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		unk_0x28F5E4DA506AC0CA(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = unk_0x122AAB0B1D6F55AD(iParam1, vParam2, iParam5, iParam7, iParam6, iParam14);
	if (unk_0xC844350D5D58C99A(iVar1))
	{
		*uParam0 = unk_0xFBA927257CA38E95(iVar1);
		Global_2537071.f_6516 = iVar1;
		if (unk_0xE9F78D191AD5EDBA(*uParam0))
		{
			if (bParam15)
			{
				unk_0x271603AF9C0C7EB3(iVar1, 1);
			}
			unk_0x120A395B0ECB8EA5(iVar1, iParam10);
			if (unk_0xECE0BE5313FD8BDA(iVar1))
			{
				if (bParam8)
				{
					unk_0xF4F945BB00F6E31C(*uParam0, 1);
				}
				else
				{
					unk_0xF4F945BB00F6E31C(*uParam0, 0);
				}
				if (bParam13)
				{
					unk_0x7F379C0A8EB2F4D0(*uParam0, unk_0xD803B885F5E47A62(), 1);
				}
			}
			unk_0x750A9DEB80D6992C(iVar1, bParam9);
			unk_0x8E44A2B22BBBAFE4(iVar1, 1);
			if (bParam12)
			{
				unk_0x4CC3459AE123CD76(iVar1);
				unk_0xF50D17A63556B8D4(iVar1, 5, 5, 1f);
			}
			func_14(vParam2, iParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_14(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_15(unk_0xD803B885F5E47A62(), vParam0, iParam4) > -1)
	{
		if ((Global_2405072.f_2912[1].f_5 == iParam5 && Global_2405072.f_2912[1].f_4 == iParam4) && vdist(Global_2405072.f_2912[1], vParam0) < 0,5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405072.f_2912[iVar0] = { Global_2405072.f_2912[iVar0 + 1] };
			}
			iVar0++;
		}
		Global_2405072.f_2912[1] = { vParam0 };
		Global_2405072.f_2912[1].f_3 = iParam3;
		Global_2405072.f_2912[1].f_4 = iParam4;
		Global_2405072.f_2912[1].f_5 = iParam5;
	}
}

int func_15(int iParam0, vector3 vParam1, int iParam4)
{
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417897.f_461[iVar0][iVar1].f_4 == iParam4)
			{
				vVar2 = { vParam1 };
				if (unk_0x755FF954DAE327E1((Global_2417897.f_461[iVar0][iVar1].f_2 - vVar2.z)) < 2f)
				{
					vVar2.z = Global_2417897.f_461[iVar0][iVar1].f_2;
				}
				if (vdist(Global_2417897.f_461[iVar0][iVar1], vVar2) < 0,5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

bool func_16(var uParam0, float fParam1)
{
	if (!bVar0)
	{
		if (unk_0x8F91E660145F47FF(&(Local_61.f_6), uParam0, &uVar2, 0f, 180f, 40f, 0, 1, 1))
		{
			unk_0x4A13F7D4B1E239A0(*uParam0, 1, uParam0, fParam1, &iVar1, 4, 1077936128, 0);
			if (iVar1 >= 1 || unk_0x20EED0F7126363D7(*uParam0) == -289320599)
			{
				if (unk_0x0EB28750412C3A5A(-1367,557f, -3220,598f, 12,9448f, Local_61.f_6, 1) >= 600f && unk_0x0EB28750412C3A5A(750f, -3200f, 6f, Local_61.f_6, 1) >= 700f)
				{
					if (unk_0x0EB28750412C3A5A(func_33(unk_0xD803B885F5E47A62()), *uParam0, 1) <= (250f - 50f))
					{
						if (iLocal_176 <= 5)
						{
							if (func_17(*uParam0, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
							{
								bVar0 = true;
							}
						}
						else
						{
							Local_61 = 4;
						}
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		iLocal_175 += 4;
		if (iLocal_175 >= 80)
		{
			iLocal_175 = 20;
			iLocal_176++;
		}
	}
	return bVar0;
}

int func_17(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2405072.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x558ADED8B93EA0F6(vParam0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xEA19D5D9230DBB67(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam4) || unk_0xEA19D5D9230DBB67(vParam0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x9DD97B5335E52CB9(vParam0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam13)
	{
		if (unk_0xA4F4A1E4DDB4728B(vParam0, 2,5f) > 0)
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (fParam14 > 0f)
	{
		if (func_26(vParam0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_18(vParam0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405072.f_2++;
	return 1;
}

int func_18(vector3 vParam0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	if (iParam4 && !bParam7)
	{
		if (func_71(unk_0xD803B885F5E47A62(), 1, 1))
		{
			if (!unk_0x757EF87A33649210())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x0EB28750412C3A5A(func_23(unk_0xD803B885F5E47A62()), vParam0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x8E28E832BEAC3DCE(vParam0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_71(iVar1, 1, 1))
		{
			if (!func_20(iVar1, 0) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if ((func_19(iVar1) || !bParam10) && !Global_2425662[iVar1].f_259)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x08067D4957B73C02(iVar1) == -1)
							{
								if (unk_0x08067D4957B73C02(iVar1) == unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x08067D4957B73C02(iVar1) != unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))) || unk_0x08067D4957B73C02(iVar1) == -1)
							{
								if (unk_0x0EB28750412C3A5A(func_23(iVar1), vParam0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x08067D4957B73C02(iVar1) != iParam8 || unk_0x08067D4957B73C02(iVar1) == -1)
						{
							if (unk_0x0EB28750412C3A5A(func_23(iVar1), vParam0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_19(int iParam0)
{
	if (unk_0x62FA787159F264AC(unk_0x9539D44F3E4492F6(iParam0)) || Global_2425662[iParam0].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_20(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_21(-1, 0) == 8;
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

int func_21(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_22();
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

int func_22()
{
	return Global_1312745;
}

Vector3 func_23(int iParam0)
{
	iVar0 = iParam0;
	if ((func_25() && Global_1590535[iVar0].f_847) && !func_24(Global_1590535[iVar0].f_848))
	{
		return Global_1590535[iVar0].f_848;
	}
	return func_33(iParam0);
}

int func_24(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_25()
{
	return Global_2450632.f_17;
}

int func_26(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xD803B885F5E47A62() != iVar1) || iParam8 == 0)
		{
			if (func_71(iVar1, bParam4, bParam5))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam7 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_19(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1 && uParam9) && bParam6) && func_27(iVar1))
							{
							}
							else if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
							{
								if (unk_0x0EB28750412C3A5A(func_33(iVar1), vParam0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_27(int iParam0)
{
	if (func_32(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	Global_2513218 = { func_31(iParam0) };
	if (unk_0x04A104F429E6CBB0(&Global_2513218))
	{
		return 1;
	}
	if (func_28(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0, int iParam1)
{
	iVar0 = func_30(iParam0);
	if (!iVar0 == func_29())
	{
		if (iVar0 == func_30(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_29()
{
	return -1;
}

int func_30(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_29();
}

struct<13> func_31(int iParam0)
{
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

int func_32(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_31(iParam0) };
		Global_2513231 = { func_31(iParam1) };
		if (unk_0xF2EC2A39FF9E838D(&Global_2513218))
		{
			if (unk_0xF2EC2A39FF9E838D(&Global_2513231))
			{
				unk_0xD9DA83C40D038174(&Global_2513148, 35, &Global_2513218);
				unk_0xD9DA83C40D038174(&Global_2513183, 35, &Global_2513231);
				if (Global_2513148 == Global_2513183)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_33(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0);
}

bool func_34(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

bool func_35()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_170, 1))
	{
		if (unk_0x4490D017C57827E9(func_33(unk_0xD803B885F5E47A62()), iLocal_174, &(Local_61.f_6), 4, 3f, 0f))
		{
			unk_0x5D96D8530B3D0904(&iLocal_170, 1);
		}
		else
		{
			iLocal_174++;
		}
	}
	return unk_0xEAE0D21A50E6C7F4(iLocal_170, 1);
}

int func_36(var uParam0)
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

void func_37(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			func_38(uParam0, 0, 0);
		}
	}
}

void func_38(var uParam0, bool bParam1, bool bParam2)
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

void func_39()
{
	switch (vLocal_73[unk_0x57270EE11514DC67()].f_2)
	{
		case 0:
			func_41();
			func_40();
			if (Local_61.f_9 > 0)
			{
				vLocal_73[unk_0x57270EE11514DC67()].f_2 = 1;
			}
			break;
		
		case 1:
			func_60();
			break;
	}
}

void func_40()
{
	if (!unk_0xEAE0D21A50E6C7F4(vLocal_73[unk_0x57270EE11514DC67()].f_1, 0))
	{
		if (func_4(Local_61.f_2) && !func_3(Local_61.f_3))
		{
			iVar0 = unk_0x7F6DC62EA9922664(unk_0xB177666FAB6F4417(Local_61.f_2));
			fVar1 = unk_0x9C66D99E63E8E24C(unk_0xB177666FAB6F4417(Local_61.f_2));
			if (iVar0 < 200)
			{
				func_41();
				unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_61.f_3), uLocal_173);
				unk_0x5D96D8530B3D0904(&(vLocal_73[unk_0x57270EE11514DC67()].f_1), 0);
			}
			else if (fVar1 < 3f)
			{
				if ((((unk_0x377BE9A1BF38C7CE(unk_0xB177666FAB6F4417(Local_61.f_2)) || unk_0x7B5606C651AB51B5(unk_0xB177666FAB6F4417(Local_61.f_2), 3, 10000)) || unk_0x7B5606C651AB51B5(unk_0xB177666FAB6F4417(Local_61.f_2), 1, 10000)) || unk_0x7B5606C651AB51B5(unk_0xB177666FAB6F4417(Local_61.f_2), 0, 10000)) || unk_0x7B5606C651AB51B5(unk_0xB177666FAB6F4417(Local_61.f_2), 2, 10000))
				{
					func_41();
					unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_61.f_3), uLocal_172);
					unk_0x5D96D8530B3D0904(&(vLocal_73[unk_0x57270EE11514DC67()].f_1), 0);
				}
			}
		}
	}
}

void func_41()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_170, 0))
	{
		if (func_4(Local_61.f_2))
		{
			unk_0xDD353D0E9C789D0E(&uLocal_171);
			unk_0x132B85BCE016BCA0(0, unk_0xB177666FAB6F4417(Local_61.f_2), Local_61.f_6, 14, 30f, 786468, 15f, 1f, 0);
			unk_0xE072601B4380E9DF(0, unk_0xB177666FAB6F4417(Local_61.f_2), 30f, 786468);
			unk_0x75ABDC5F81978924(uLocal_171);
			unk_0xDD353D0E9C789D0E(&uLocal_172);
			unk_0x75CDA8644CD3B5F5(0, 0, 1);
			unk_0x75ABDC5F81978924(uLocal_172);
			unk_0xDD353D0E9C789D0E(&uLocal_173);
			unk_0x132B85BCE016BCA0(0, unk_0xB177666FAB6F4417(Local_61.f_2), Local_61.f_6, 5, 30f, 786468, 99999f, 1f, 0);
			unk_0x75CDA8644CD3B5F5(0, 0, 1);
			unk_0x75ABDC5F81978924(uLocal_173);
			unk_0x5D96D8530B3D0904(&iLocal_170, 0);
		}
	}
}

int func_42()
{
	return Local_61;
}

int func_43(int iParam0)
{
	return vLocal_73[iParam0];
}

bool func_44(int iParam0)
{
	return !func_45(iParam0);
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_6660)
			{
				return 0;
			}
			if (func_47(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 0) || unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6661)
			{
				return 0;
			}
			if (func_47(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 0) || unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6662)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6663)
			{
				return 0;
			}
			if (func_47(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 0) || unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_46(4))
			{
				return 0;
			}
			if (func_47(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 0) || unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_46(4))
			{
				return 0;
			}
			if (func_47(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 0) || unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_46(4))
			{
				return 0;
			}
			if (func_47(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 0) || unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_46(4))
			{
				return 0;
			}
			if (func_47(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 0) || unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_46(4))
			{
				return 0;
			}
			if (func_47(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_46(4))
			{
				return 0;
			}
			if (func_47(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_46(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_71(unk_0x117658E336116132(iVar0), 0, 1))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_2425662[iVar0].f_208, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_47(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_208, iParam1);
}

int func_48()
{
	func_56(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_55())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_54())
	{
		return 1;
	}
	if (func_53(159))
	{
		if (!func_52())
		{
			return 1;
		}
	}
	if (func_53(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_49() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_49()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_49()
{
	switch (func_51())
	{
		case 0:
			return func_50();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_50()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_51()
{
	return Global_30768;
}

bool func_52()
{
	return Global_2450632.f_598;
}

int func_53(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_54()
{
	return Global_2460680;
}

bool func_55()
{
	return Global_2450632.f_593;
}

void func_56(var uParam0)
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
					func_57(iVar0);
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

void func_57(int iParam0)
{
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_71(vVar0.y, 1, 1))
		{
			iVar3 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar3))
			{
				if (unk_0x405E212DDE472467(iVar3, 0))
				{
					iVar4 = unk_0x6937EA2286828455(iVar3, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar4, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_58(iVar4, &bVar5))
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

int func_58(int iParam0, var uParam1)
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

void func_59()
{
	wait(0);
}

void func_60()
{
	func_63();
	if (func_42() == 4 && Local_61.f_4 != 0)
	{
		unk_0xAB8E2DDC7AF955E0(Local_61.f_4, 0);
	}
	if (func_4(Local_61.f_2))
	{
		unk_0x06FF977AA95DCCE3(unk_0xB177666FAB6F4417(Local_61.f_2), 0f);
	}
	unk_0x8910D3D58E0132B8("JOYRIDER_RADIO_SCENE");
	func_62(9, 0);
	func_61();
}

void func_61()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_62(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_2425662[unk_0xD803B885F5E47A62()].f_208, iParam0))
		{
			unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62()].f_208), iParam0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_2425662[unk_0xD803B885F5E47A62()].f_208, iParam0))
	{
		unk_0x0674E58A79778E99(&(Global_2425662[unk_0xD803B885F5E47A62()].f_208), iParam0);
	}
}

void func_63()
{
	unk_0xF82EA857DA10E0CD(&uLocal_171);
}

void func_64(struct<21> Param0)
{
	func_69(func_70(Param0), Param0);
	unk_0x0BEC04ECA8485A3A(1);
	unk_0x28E5F00F131890E3(1);
	func_67(0, -1, 0);
	unk_0x9752E7BAEABA939E(&Local_61, 12);
	unk_0x35B62793EAE9ADDF(&vLocal_73, 97);
	if (!func_66())
	{
		func_60();
	}
	if (unk_0x8CD06866876216F2())
	{
		unk_0x256D93AFAE851A7A(0);
		if (unk_0xBFF81ED3B99522C7())
		{
			if (Global_2537071.f_4386 == 0)
			{
				iVar0 = unk_0x09AC81E49EA267F7(0, 7);
				switch (iVar0)
				{
					case 0:
						Local_61.f_4 = -2098947590;
						break;
					
					case 1:
						Local_61.f_4 = -1291952903;
						break;
					
					case 2:
						Local_61.f_4 = -1995326987;
						break;
					
					case 3:
						Local_61.f_4 = -433375717;
						break;
					
					case 4:
						Local_61.f_4 = 330661258;
						break;
					
					case 5:
						Local_61.f_4 = 1123216662;
						break;
					
					case 6:
						Local_61.f_4 = 418536135;
						break;
				}
			}
			else
			{
				Local_61.f_4 = Global_2537071.f_4386;
				Global_2537071.f_4386 = 0;
			}
			unk_0xAB8E2DDC7AF955E0(Local_61.f_4, 1);
			Local_61.f_5 = func_65(1);
		}
		func_62(9, 1);
		unk_0x8BC9595FD2792B5D("JOYRIDER_RADIO_SCENE");
		vLocal_73[unk_0x57270EE11514DC67()] = 0;
	}
	else
	{
		func_60();
	}
}

int func_65(bool bParam0)
{
	iVar0 = unk_0x09AC81E49EA267F7(0, 32);
	if (bParam0)
	{
		switch (iVar0)
		{
			case 0:
				return -106498753;
			
			case 1:
				return 1423699487;
			
			case 2:
				return 1068876755;
			
			case 3:
				return 2120901815;
			
			case 4:
				return 803106487;
			
			case 5:
				return 131961260;
			
			case 6:
				return 1822107721;
			
			case 7:
				return 2064532783;
			
			case 8:
				return 1746653202;
			
			case 9:
				return -1029146878;
			
			case 10:
				return 2114544056;
			
			case 11:
				return 2010389054;
			
			case 12:
				return -1760377969;
			
			case 13:
				return 1328415626;
			
			case 14:
				return -640198516;
			
			case 15:
				return -1342520604;
			
			case 16:
				return 1768677545;
			
			case 17:
				return 32417469;
			
			case 18:
				return 1750583735;
			
			case 19:
				return -1620232223;
			
			case 20:
				return -1948675910;
			
			case 21:
				return 891398354;
			
			case 22:
				return -178150202;
			
			case 23:
				return -781039234;
			
			case 24:
				return 1077785853;
			
			case 25:
				return -1806291497;
			
			case 26:
				return 1641152947;
			
			case 27:
				return 115168927;
			
			case 28:
				return -573920724;
			
			case 29:
				return -782401935;
			
			case 30:
				return 193817059;
			
			case 31:
				return -1302522190;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return -1106743555;
			
			case 1:
				return -1606864033;
			
			case 2:
				return 808859815;
			
			case 3:
				return 1090617681;
			
			case 4:
				return 379310561;
			
			case 5:
				return 1004114196;
			
			case 6:
				return 532905404;
			
			case 7:
				return 1699403886;
			
			case 8:
				return -1656894598;
			
			case 9:
				return 1674107025;
			
			case 10:
				return 951767867;
			
			case 11:
				return 1388848350;
			
			case 12:
				return 1090617681;
			
			case 13:
				return -569505431;
			
			case 14:
				return -1332260293;
			
			case 15:
				return 1951946145;
			
			case 16:
				return -215821512;
			
			case 17:
				return -840346158;
			
			case 18:
				return 1224306523;
			
			case 19:
				return -1935621530;
			
			case 20:
				return -1004861906;
			
			case 21:
				return -625565461;
			
			case 22:
				return 933092024;
			
			case 23:
				return -85696186;
			
			case 24:
				return 1426880966;
			
			case 25:
				return 1446741360;
			
			case 26:
				return -2109222095;
			
			case 27:
				return 2111372120;
			
			case 28:
				return 1165780219;
			
			case 29:
				return -614546432;
			
			case 30:
				return 1755064960;
			
			case 31:
				return 813893651;
			
			default:
		}
	}
	return -1106743555;
}

int func_66()
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
		if (func_55())
		{
			return 0;
		}
		if (func_53(157))
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

int func_67(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_61();
			}
			else
			{
				return 0;
			}
		}
		if (!func_68())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_61();
					}
					else
					{
						return 0;
					}
				}
				if (func_55())
				{
					if (!bParam2)
					{
						func_61();
					}
					else
					{
						return 0;
					}
				}
				if (func_53(157))
				{
					if (!bParam2)
					{
						func_61();
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
					func_61();
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
				func_61();
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
			func_61();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_68()
{
	return Global_1312854;
}

void func_69(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_61();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

int func_70(int iParam0)
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

