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
	fLocal_62 = ((0,05f + 0,275f) - 0,01f);
	func_401(ScriptParam_0);
	while (true)
	{
		func_400();
		if (func_389() || !func_388(unk_0xD803B885F5E47A62(), 0, 1))
		{
			func_386();
		}
		switch (func_385(unk_0x57270EE11514DC67()))
		{
			case 0:
				if (func_384() == 2)
				{
					vLocal_112[unk_0x57270EE11514DC67()].f_1 = 2;
				}
				else if (func_384() == 6)
				{
					vLocal_112[unk_0x57270EE11514DC67()].f_1 = 5;
				}
				break;
			
			case 2:
				if (func_384() == 2)
				{
					func_377();
					func_54();
				}
				else if (func_384() == 6)
				{
					vLocal_112[unk_0x57270EE11514DC67()].f_1 = 5;
				}
				if (((func_51(unk_0xD803B885F5E47A62(), 1, 0) || func_48(unk_0xD803B885F5E47A62())) || unk_0xEAE0D21A50E6C7F4(iLocal_211, 8)) || unk_0xEAE0D21A50E6C7F4(iLocal_211, 16))
				{
					vLocal_112[unk_0x57270EE11514DC67()].f_1 = 6;
				}
				break;
			
			case 5:
				func_47(&(Local_73.f_19));
				if (func_46(&(Local_73.f_19)))
				{
					vLocal_112[unk_0x57270EE11514DC67()].f_1 = 6;
				}
				break;
			
			case 3:
				vLocal_112[unk_0x57270EE11514DC67()].f_1 = 6;
			
			case 6:
				func_386();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_384())
			{
				case 0:
					func_45(&(Local_73.f_17), 0, 0);
					Local_73.f_1 = 2;
					break;
				
				case 2:
					func_41();
					func_39();
					func_3();
					if (func_1())
					{
						Local_73.f_1 = 6;
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
	return unk_0xEAE0D21A50E6C7F4(Local_73, 6);
}

void func_3()
{
	if (unk_0xBFF81ED3B99522C7())
	{
		switch (Local_73.f_2)
		{
			case 0:
				if (!unk_0xEAE0D21A50E6C7F4(Local_73, 10))
				{
					if (func_38(&(Local_73.f_17), 300000, 0))
					{
						unk_0x5D96D8530B3D0904(&Local_73, 10);
					}
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_73, 10))
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_73, 0))
					{
						Local_73.f_5 = func_37();
						Local_73.f_2 = 1;
						Local_73.f_4 = 0;
					}
				}
				break;
			
			case 1:
				if (func_6())
				{
					unk_0x5D96D8530B3D0904(&Local_73, 3);
					unk_0x0674E58A79778E99(&Local_73, 13);
					func_45(&(Local_73.f_21), 0, 0);
					Local_73.f_2 = 2;
				}
				break;
			
			case 2:
				if (unk_0xEAE0D21A50E6C7F4(Local_73, 4))
				{
					func_4(Local_73.f_5);
					Local_73.f_2 = 7;
				}
				break;
			
			case 7:
				func_4(Local_73.f_5);
				break;
			}
	}
}

void func_4(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_5(&(Local_73.f_9[0]));
			func_5(&(Local_73.f_12[0]));
			break;
	}
}

void func_5(var uParam0)
{
	if (unk_0xE5DBF9B6126856CA(*uParam0))
	{
		iVar0 = unk_0xA5FBBC2F619A4DE2(*uParam0);
		unk_0x82692E8F6A0D7A22(&iVar0);
	}
}

int func_6()
{
	if (Local_73.f_5 == 0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_73, 1))
		{
			iLocal_219 = 0;
			iLocal_220 = unk_0x09AC81E49EA267F7(0, 5);
			iLocal_97 = 0;
			Local_73.f_3 = -1;
			Local_73.f_4 = 0;
			unk_0x5D96D8530B3D0904(&Local_73, 1);
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_73, 2))
		{
			if (func_36())
			{
				unk_0x5D96D8530B3D0904(&Local_73, 2);
			}
		}
		else if (func_7())
		{
			return 1;
		}
	}
	return 0;
}

int func_7()
{
	iVar0 = func_35();
	iVar1 = func_34();
	if (!unk_0xE5DBF9B6126856CA(Local_73.f_12[0]))
	{
		if (Local_73.f_15 == 0)
		{
			unk_0x28E5F00F131890E3(1);
			Local_73.f_15 = 1;
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_73, 13))
		{
			if (unk_0xE75B31D140F2F10B(1))
			{
				if (unk_0xA3FA8B6D2780D661(1))
				{
					if (func_33(1, 1, 1))
					{
						if (func_27(1, 1, 1))
						{
							unk_0x5D96D8530B3D0904(&Local_73, 13);
						}
					}
				}
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_73, 13))
		{
			if (func_26(iVar1))
			{
				if (func_26(iVar0))
				{
					if (func_14(&vVar2, &iVar5))
					{
						if (func_11(&(Local_73.f_12[0]), iVar1, vVar2, iVar5, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							unk_0x7980D72D61BEF4D5(unk_0xB177666FAB6F4417(Local_73.f_12[0]), true);
							if (unk_0xF1D385D359D58F72("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0xB7E567188872123E(unk_0xB177666FAB6F4417(Local_73.f_12[0]), "Not_Allow_As_Saved_Veh", 1);
							}
							Local_73.f_15 = 1;
						}
					}
				}
			}
		}
	}
	if (unk_0xE5DBF9B6126856CA(Local_73.f_12[0]))
	{
		if (!unk_0xE5DBF9B6126856CA(Local_73.f_9[0]))
		{
			if (Local_73.f_16 == 0)
			{
				unk_0x0BEC04ECA8485A3A(1);
				Local_73.f_16 = 1;
			}
			if (unk_0xA3FA8B6D2780D661(1))
			{
				if (func_26(iVar0))
				{
					if (func_9(Local_73.f_12[0]))
					{
						if (unk_0x526BC32A660C89E6(Local_73.f_12[0]))
						{
							if (func_8(&(Local_73.f_9[0]), Local_73.f_12[0], 26, iVar0, -1, 1, 1, 1))
							{
								unk_0x7980D72D61BEF4D5(unk_0x1B50683925F00106(Local_73.f_9[0]), true);
								unk_0xE2F0767314863BD8(unk_0x1B50683925F00106(Local_73.f_9[0]), 1, 0);
								unk_0x11AD11297DC58CC7(unk_0x1B50683925F00106(Local_73.f_9[0]), 1);
								unk_0x6DF7BF67E86AAE86(unk_0x1B50683925F00106(Local_73.f_9[0]), Global_1575003);
								unk_0xE2F0767314863BD8(unk_0x1B50683925F00106(Local_73.f_9[0]), 1, 0);
								unk_0xD458AC1C1D29C3B4(unk_0x1B50683925F00106(Local_73.f_9[0]), round((200f * Global_262145.f_154)), 0);
								Local_73.f_16 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (!unk_0xE5DBF9B6126856CA(Local_73.f_9[0]) || !unk_0xE5DBF9B6126856CA(Local_73.f_12[0]))
	{
		return 0;
	}
	return 1;
}

int func_8(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!unk_0xA3FA8B6D2780D661(1))
	{
		return 0;
	}
	if (!unk_0xE9F78D191AD5EDBA(iParam1))
	{
		return 0;
	}
	if (!unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(iParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xE8C9CB886096272A(unk_0x852A19533F896693(unk_0xB177666FAB6F4417(iParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		unk_0x120A395B0ECB8EA5(unk_0x1B50683925F00106(*uParam0), bParam7);
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

int func_9(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		return !func_10(unk_0xB177666FAB6F4417(iParam0));
	}
	return 0;
}

int func_10(int iParam0)
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

int func_11(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
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
				unk_0x271603AF9C0C7EB3(iVar1, true);
			}
			unk_0x120A395B0ECB8EA5(iVar1, bParam10);
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
			func_12(vParam2, iParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_12(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_13(unk_0xD803B885F5E47A62(), vParam0, iParam4) > -1)
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

int func_13(int iParam0, vector3 vParam1, int iParam4)
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

int func_14(var uParam0, var uParam1)
{
	if (!func_25(*uParam0, 0f, 0f, 0f, 0))
	{
		return 1;
	}
	switch (iLocal_220)
	{
		case 0:
			if (unk_0xEAE0D21A50E6C7F4(Local_73.f_4, iLocal_220))
			{
				vVar0 = { -1232,842f, -1095,003f, 2,2331f };
				vVar3 = { -1226,248f, -1089,819f, 10,1513f };
				vVar6 = { func_24(0, 0) };
				fVar9 = 19,7853f;
			}
			break;
		
		case 1:
			if (unk_0xEAE0D21A50E6C7F4(Local_73.f_4, iLocal_220))
			{
				vVar0 = { -622,0966f, 250,3288f, 75,7075f };
				vVar3 = { -614,8635f, 255,2288f, 88,7755f };
				vVar6 = { func_24(0, 1) };
				fVar9 = 266,4686f;
			}
			break;
		
		case 2:
			if (unk_0xEAE0D21A50E6C7F4(Local_73.f_4, iLocal_220))
			{
				vVar0 = { 794,4784f, -2034,339f, 25,2469f };
				vVar3 = { 798,8026f, -2026,004f, 33,2793f };
				vVar6 = { func_24(0, 2) };
				fVar9 = 355,9428f;
			}
			break;
		
		case 3:
			if (unk_0xEAE0D21A50E6C7F4(Local_73.f_4, iLocal_220))
			{
				vVar0 = { -1623,919f, 1249,831f, 135,2495f };
				vVar3 = { -1621,554f, 1257,98f, 145,2376f };
				vVar6 = { func_24(0, 3) };
				fVar9 = 353,7463f;
			}
			break;
		
		case 4:
			if (unk_0xEAE0D21A50E6C7F4(Local_73.f_4, iLocal_220))
			{
				vVar0 = { 1118,077f, 1875,035f, 60,3776f };
				vVar3 = { 1127,638f, 1883,083f, 70,1053f };
				vVar6 = { func_24(0, 4) };
				fVar9 = 201,3967f;
			}
			break;
	}
	if (iLocal_220 < 5)
	{
		if (!func_25(vVar0, 0f, 0f, 0f, 0))
		{
			if (Local_73.f_3 == -1)
			{
				Local_73.f_3 = unk_0x198D598261EEA7EA(vVar0, vVar3);
			}
			else if (unk_0x23002DD5E7B94FD7(Local_73.f_3))
			{
				if (unk_0x9E6C7E283363593B(Local_73.f_3))
				{
					if (!unk_0x6FE31D882B028E10(Local_73.f_3))
					{
						if (!func_15(vVar6, 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
						{
							*uParam0 = { vVar6 };
							*uParam1 = fVar9;
							unk_0xBD63401BCCEC233B(Local_73.f_3);
							return 1;
						}
						else
						{
							iLocal_220++;
							unk_0xBD63401BCCEC233B(Local_73.f_3);
							Local_73.f_3 = -1;
						}
					}
					else
					{
						iLocal_220++;
						unk_0xBD63401BCCEC233B(Local_73.f_3);
						Local_73.f_3 = -1;
					}
				}
			}
		}
		else
		{
			iLocal_220++;
		}
	}
	else
	{
		iLocal_220 = 0;
	}
	return 0;
}

int func_15(vector3 vParam0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	if (iParam4 && !bParam7)
	{
		if (func_388(unk_0xD803B885F5E47A62(), 1, 1))
		{
			if (!unk_0x757EF87A33649210())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x0EB28750412C3A5A(func_20(unk_0xD803B885F5E47A62()), vParam0, 1) <= (fVar2 + fParam3))
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
		if (func_388(iVar1, 1, 1))
		{
			if (!func_17(iVar1, 0) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if ((func_16(iVar1) || !bParam10) && !Global_2425662[iVar1].f_259)
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
								if (unk_0x0EB28750412C3A5A(func_20(iVar1), vParam0, 1) <= (fVar2 + fParam3))
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
							if (unk_0x0EB28750412C3A5A(func_20(iVar1), vParam0, 1) <= (fVar2 + fParam3))
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

int func_16(int iParam0)
{
	if (unk_0x62FA787159F264AC(unk_0x9539D44F3E4492F6(iParam0)) || Global_2425662[iParam0].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_17(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_18(-1, 0) == 8;
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

int func_18(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_19()
{
	return Global_1312745;
}

Vector3 func_20(int iParam0)
{
	iVar0 = iParam0;
	if ((func_23() && Global_1590535[iVar0].f_847) && !func_22(Global_1590535[iVar0].f_848))
	{
		return Global_1590535[iVar0].f_848;
	}
	return func_21(iParam0);
}

Vector3 func_21(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0);
}

int func_22(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_23()
{
	return Global_2450632.f_17;
}

Vector3 func_24(int iParam0, int iParam1)
{
	vVar0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				vVar0 = { -1228,99f, -1092,231f, 7,0465f };
			}
			else if (iParam1 == 1)
			{
				vVar0 = { -618,6293f, 252,6611f, 80,5897f };
			}
			else if (iParam1 == 2)
			{
				vVar0 = { 796,6768f, -2029,602f, 28,1346f };
			}
			else if (iParam1 == 3)
			{
				vVar0 = { -1622,881f, 1253,516f, 139,6713f };
			}
			else if (iParam1 == 4)
			{
				vVar0 = { 1123,27f, 1878,917f, 65,7957f };
			}
			break;
	}
	return vVar0;
}

bool func_25(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_26(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

bool func_27(int iParam0, bool bParam1, bool bParam2)
{
	return func_28(0, iParam0, 1, bParam1, bParam2);
}

int func_28(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_1389296, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_32(iParam0) - func_31(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_31(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_32(iParam0) - func_30(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_31(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_32(iParam0) - func_31(iParam0, 1));
		}
		if (!bParam4 && Global_1590535[unk_0xD803B885F5E47A62()] != 3)
		{
			iVar1 = (iVar1 - func_29(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389296.f_1;
			break;
		
		case 1:
			return Global_1389296.f_2;
			break;
		
		case 2:
			return Global_1389296.f_3;
			break;
	}
	return 0;
}

int func_31(int iParam0, bool bParam1)
{
	iVar0 = unk_0xD803B885F5E47A62();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_2425662[iVar0].f_209;
			}
			else
			{
				return unk_0x9BFC2168CB5FCF68(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_2425662[iVar0].f_210;
			}
			else
			{
				return unk_0x11225ACFD0C1477E(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_2425662[iVar0].f_211;
			}
			else
			{
				return unk_0xBF3DE18643F54472(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_32(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389304;
			break;
		
		case 1:
			return Global_1389305;
			break;
		
		case 2:
			return Global_1389306;
			break;
	}
	return 0;
}

bool func_33(int iParam0, bool bParam1, bool bParam2)
{
	return func_28(1, iParam0, 1, bParam1, bParam2);
}

int func_34()
{
	return 2006918058;
}

int func_35()
{
	return -1589423867;
}

int func_36()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_73, 1))
	{
		if (iLocal_97 >= vLocal_112.x)
		{
			if (iLocal_219 < 5)
			{
				iLocal_219++;
			}
			iLocal_97 = 0;
		}
		if (iLocal_97 == 0)
		{
			unk_0x5D96D8530B3D0904(&iLocal_211, 1);
		}
		if (iLocal_219 < 5)
		{
			iVar9 = iLocal_97;
			if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar9)))
			{
				iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar9));
				if (func_388(iVar0, 1, 1))
				{
					iVar1 = unk_0x9539D44F3E4492F6(iVar0);
					if (unk_0xEAE0D21A50E6C7F4(iLocal_211, 1))
					{
						vVar2 = { func_24(Local_73.f_5, iLocal_219) };
						vVar5 = { unk_0x68F4C0EC296D3901(iVar1, 0) };
						fVar8 = unk_0x0EB28750412C3A5A(vVar2, vVar5, 1);
						if (fVar8 < 300f)
						{
							unk_0x0674E58A79778E99(&iLocal_211, 1);
						}
					}
				}
			}
			iLocal_97++;
			if (iLocal_97 == vLocal_112.x)
			{
				if (unk_0xEAE0D21A50E6C7F4(iLocal_211, 1))
				{
					unk_0x5D96D8530B3D0904(&(Local_73.f_4), iLocal_219);
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_37()
{
	return 0;
}

int func_38(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_45(uParam0, bParam2, 0);
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

void func_39()
{
	if (unk_0xBFF81ED3B99522C7())
	{
		switch (Local_73.f_6)
		{
			case 0:
				if (unk_0xE5DBF9B6126856CA(Local_73.f_9[0]) && unk_0xE5DBF9B6126856CA(Local_73.f_12[0]))
				{
					Local_73.f_6 = 1;
				}
				break;
			
			case 1:
				if (unk_0xE5DBF9B6126856CA(Local_73.f_9[0]))
				{
					if (!func_40(Local_73.f_9[0]))
					{
						if (unk_0xE5DBF9B6126856CA(Local_73.f_12[0]))
						{
							if (func_9(Local_73.f_12[0]))
							{
								if (unk_0x82CCEAB29E9451DD(unk_0x1B50683925F00106(Local_73.f_9[0]), unk_0xB177666FAB6F4417(Local_73.f_12[0])))
								{
									if (unk_0xEAE0D21A50E6C7F4(Local_73, 7))
									{
										unk_0x5D96D8530B3D0904(&Local_73, 9);
										Local_73.f_6 = 2;
									}
									else if (unk_0xEAE0D21A50E6C7F4(Local_73, 14))
									{
										unk_0x5D96D8530B3D0904(&Local_73, 9);
										Local_73.f_6 = 2;
									}
									else if (unk_0xEAE0D21A50E6C7F4(Local_73, 19))
									{
										Local_73.f_6 = 3;
									}
								}
								else
								{
									Local_73.f_6 = 4;
								}
							}
							else
							{
								Local_73.f_6 = 3;
							}
						}
					}
				}
				break;
			
			case 2:
				if (unk_0xE5DBF9B6126856CA(Local_73.f_9[0]))
				{
					if (!func_40(Local_73.f_9[0]))
					{
						if (!unk_0x0E0E6175453415CB(unk_0x1B50683925F00106(Local_73.f_9[0])))
						{
							Local_73.f_6 = 4;
						}
						else if (unk_0xE5DBF9B6126856CA(Local_73.f_12[0]))
						{
							if (!func_9(Local_73.f_12[0]))
							{
								Local_73.f_6 = 3;
							}
							else if (unk_0xEAE0D21A50E6C7F4(Local_73, 19))
							{
								Local_73.f_6 = 3;
							}
						}
					}
				}
				break;
			
			case 3:
				if (unk_0xE5DBF9B6126856CA(Local_73.f_9[0]))
				{
					if (!func_40(Local_73.f_9[0]))
					{
						if (!unk_0x405E212DDE472467(unk_0x1B50683925F00106(Local_73.f_9[0]), 0))
						{
							Local_73.f_6 = 4;
						}
					}
				}
				break;
			
			case 4:
				break;
			}
	}
}

int func_40(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		return unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(iParam0));
	}
	return 1;
}

void func_41()
{
	if (unk_0xBFF81ED3B99522C7())
	{
		if (iLocal_96 >= vLocal_112.x)
		{
			iLocal_96 = 0;
			iLocal_218 = 0;
			unk_0x0674E58A79778E99(&iLocal_211, 0);
			unk_0x5D96D8530B3D0904(&iLocal_211, 5);
			unk_0x0674E58A79778E99(&Local_73, 5);
			unk_0x0674E58A79778E99(&Local_73, 17);
			unk_0x0674E58A79778E99(&iLocal_211, 14);
			unk_0x0674E58A79778E99(&iLocal_211, 19);
			if (!unk_0xEAE0D21A50E6C7F4(Local_73, 16))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_73, 18))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_73, 4))
					{
						unk_0x5D96D8530B3D0904(&Local_73, 16);
					}
				}
			}
			if (func_44(&(Local_73.f_21)))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_73, 12))
				{
					if (func_38(&(Local_73.f_21), 360000, 0))
					{
						unk_0x5D96D8530B3D0904(&Local_73, 12);
					}
					if (!unk_0xEAE0D21A50E6C7F4(Local_73, 15))
					{
						if (func_38(&(Local_73.f_21), 240000, 0))
						{
							unk_0x5D96D8530B3D0904(&Local_73, 15);
						}
					}
				}
				else
				{
					unk_0x5D96D8530B3D0904(&iLocal_211, 9);
				}
			}
		}
		iVar0 = iLocal_96;
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			iVar3 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
			iVar2 = iVar3;
			if (unk_0xEAE0D21A50E6C7F4(iLocal_211, 5))
			{
				if (vLocal_112[iVar0].f_2 < 7)
				{
					unk_0x0674E58A79778E99(&iLocal_211, 5);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73, 0))
			{
				if (unk_0xEAE0D21A50E6C7F4(vLocal_112[iVar0], 0))
				{
					iLocal_218++;
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(vLocal_112[iVar0], 2))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_73, 17))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_7, iVar2))
					{
						if (vLocal_112[iVar0].f_2 > 4)
						{
							unk_0x5D96D8530B3D0904(&(Local_73.f_7), iVar2);
							unk_0x5D96D8530B3D0904(&Local_73, 17);
						}
					}
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_73, 5))
				{
					unk_0x5D96D8530B3D0904(&Local_73, 5);
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_73, 4))
				{
					if (unk_0xEAE0D21A50E6C7F4(vLocal_112[iVar0], 1))
					{
						Local_73.f_8 = iVar3;
						unk_0x5D96D8530B3D0904(&Local_73, 4);
						unk_0x0674E58A79778E99(&iLocal_211, 15);
						unk_0x0674E58A79778E99(&Local_73, 18);
					}
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_73, 4))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_73, 18))
					{
						if (unk_0xEAE0D21A50E6C7F4(vLocal_112[iVar0], 7))
						{
							unk_0x5D96D8530B3D0904(&Local_73, 18);
						}
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(iLocal_211, 9))
				{
					if (unk_0xEAE0D21A50E6C7F4(vLocal_112[iVar0], 5))
					{
						unk_0x0674E58A79778E99(&iLocal_211, 9);
					}
				}
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_211, 14))
				{
					if (unk_0xEAE0D21A50E6C7F4(vLocal_112[iVar0], 6))
					{
						unk_0x5D96D8530B3D0904(&iLocal_211, 14);
					}
				}
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_211, 20))
				{
					if (unk_0xEAE0D21A50E6C7F4(vLocal_112[iVar0], 8))
					{
						unk_0x5D96D8530B3D0904(&iLocal_211, 20);
					}
				}
			}
		}
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
			{
				func_43(iVar1);
			}
			iVar1++;
		}
		iLocal_96++;
		if (iLocal_96 >= vLocal_112.x)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_73, 16))
			{
				if (unk_0xE5DBF9B6126856CA(Local_73.f_9[0]))
				{
					if (func_40(Local_73.f_9[0]))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_73, 4))
						{
							if (unk_0xEAE0D21A50E6C7F4(iLocal_211, 15))
							{
								if (!func_44(&uLocal_216))
								{
									func_45(&uLocal_216, 0, 0);
								}
								else if (func_38(&uLocal_216, 2000, 0))
								{
									unk_0x5D96D8530B3D0904(&Local_73, 16);
								}
							}
						}
					}
				}
			}
			unk_0x5D96D8530B3D0904(&iLocal_211, 0);
			if (!unk_0xEAE0D21A50E6C7F4(Local_73, 0))
			{
				if (iLocal_218 >= 1)
				{
					unk_0x5D96D8530B3D0904(&Local_73, 0);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73, 14))
			{
				if (unk_0xEAE0D21A50E6C7F4(iLocal_211, 14))
				{
					unk_0x5D96D8530B3D0904(&Local_73, 14);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73, 19))
			{
				if (unk_0xEAE0D21A50E6C7F4(iLocal_211, 20))
				{
					unk_0x5D96D8530B3D0904(&Local_73, 19);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73, 6))
			{
				if (unk_0xEAE0D21A50E6C7F4(iLocal_211, 5))
				{
					if (Local_73.f_2 > 1 && Local_73.f_2 <= 7)
					{
						unk_0x5D96D8530B3D0904(&Local_73, 6);
					}
					else if (unk_0xEAE0D21A50E6C7F4(Local_73, 10))
					{
						unk_0x5D96D8530B3D0904(&Local_73, 6);
					}
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_73, 17))
			{
				unk_0x0674E58A79778E99(&Local_73, 17);
				unk_0x0674E58A79778E99(&Local_73, 15);
				unk_0x0674E58A79778E99(&Local_73, 12);
				func_42(&(Local_73.f_21));
				func_45(&(Local_73.f_21), 0, 0);
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73, 11))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_73, 12))
				{
					if (unk_0xEAE0D21A50E6C7F4(iLocal_211, 9))
					{
						unk_0x5D96D8530B3D0904(&Local_73, 11);
					}
				}
			}
		}
	}
}

void func_42(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_43(int iParam0)
{
	if (unk_0xBFF81ED3B99522C7())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_73, 7))
		{
			if (unk_0xEAE0D21A50E6C7F4(vLocal_112[iParam0], 3))
			{
				unk_0x5D96D8530B3D0904(&Local_73, 7);
			}
		}
	}
}

bool func_44(var uParam0)
{
	return uParam0->f_1;
}

void func_45(var uParam0, bool bParam1, bool bParam2)
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

int func_46(var uParam0)
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

void func_47(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			func_45(uParam0, 0, 0);
		}
	}
}

int func_48(int iParam0)
{
	if (func_50(iParam0))
	{
		if (!func_49(iParam0, 11))
		{
			return 1;
		}
	}
	return 0;
}

bool func_49(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_208, iParam1);
}

int func_50(int iParam0)
{
	if (Global_2425662[iParam0].f_208 == 0)
	{
		return 0;
	}
	return 1;
}

int func_51(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_52(iParam0))
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

bool func_52(int iParam0)
{
	return func_53(iParam0);
}

bool func_53(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_13.f_1, 0);
}

void func_54()
{
	func_368();
	func_365();
	if (unk_0xEAE0D21A50E6C7F4(Local_73, 10))
	{
		if (vLocal_112[unk_0x57270EE11514DC67()].f_2 < 6)
		{
			vLocal_112[unk_0x57270EE11514DC67()].f_2 = 6;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_73, 4))
	{
		if (vLocal_112[unk_0x57270EE11514DC67()].f_2 <= 6)
		{
			vLocal_112[unk_0x57270EE11514DC67()].f_2 = 6;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_73, 16))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_73, 4))
		{
			if (vLocal_112[unk_0x57270EE11514DC67()].f_2 <= 6)
			{
				vLocal_112[unk_0x57270EE11514DC67()].f_2 = 6;
				Local_98.f_2 = -1585178949;
				func_363(Local_98, func_364(1));
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_73, 11))
	{
		if (vLocal_112[unk_0x57270EE11514DC67()].f_2 <= 6)
		{
			vLocal_112[unk_0x57270EE11514DC67()].f_2 = 6;
			Local_98.f_2 = -1585178949;
			func_363(Local_98, func_364(1));
		}
	}
	if (vLocal_112[unk_0x57270EE11514DC67()].f_2 > 0)
	{
		if (vLocal_112[unk_0x57270EE11514DC67()].f_2 < 6)
		{
			if ((((func_51(unk_0xD803B885F5E47A62(), 1, 0) || func_362()) || func_361() > 0) || func_49(unk_0xD803B885F5E47A62(), 1)) || func_360())
			{
				vLocal_112[unk_0x57270EE11514DC67()].f_2 = 6;
			}
		}
	}
	if (vLocal_112[unk_0x57270EE11514DC67()].f_2 > 0)
	{
		if (vLocal_112[unk_0x57270EE11514DC67()].f_2 < 6)
		{
			if (func_358(unk_0xD803B885F5E47A62()))
			{
				vLocal_112[unk_0x57270EE11514DC67()].f_2 = 6;
			}
		}
	}
	switch (vLocal_112[unk_0x57270EE11514DC67()].f_2)
	{
		case 0:
			if (unk_0xEAE0D21A50E6C7F4(vLocal_112[unk_0x57270EE11514DC67()], 0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_73, 3))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_73, 15))
					{
						unk_0x5D96D8530B3D0904(&(vLocal_112[unk_0x57270EE11514DC67()]), 2);
						func_357(11, 1);
						vLocal_112[unk_0x57270EE11514DC67()].f_2 = 3;
					}
					else
					{
						vLocal_112[unk_0x57270EE11514DC67()].f_2 = 6;
						unk_0x5D96D8530B3D0904(&iLocal_211, 16);
					}
				}
			}
			break;
		
		case 3:
			if (func_356(Local_73.f_5))
			{
				func_355(Local_73.f_5);
				vLocal_112[unk_0x57270EE11514DC67()].f_2 = 4;
			}
			break;
		
		case 4:
			if (!func_354())
			{
				if (func_231())
				{
					vLocal_112[unk_0x57270EE11514DC67()].f_2 = 5;
					func_229(88, 1);
					func_228();
				}
				else if (unk_0xEAE0D21A50E6C7F4(iLocal_211, 8))
				{
					vLocal_112[unk_0x57270EE11514DC67()].f_2 = 6;
				}
			}
			else if (func_219())
			{
				vLocal_112[unk_0x57270EE11514DC67()].f_2 = 5;
			}
			else
			{
				if (unk_0xEAE0D21A50E6C7F4(iLocal_211, 8))
				{
					vLocal_112[unk_0x57270EE11514DC67()].f_2 = 6;
				}
				if (unk_0xEAE0D21A50E6C7F4(Local_73, 15))
				{
					func_206(12, 116);
					vLocal_112[unk_0x57270EE11514DC67()].f_2 = 6;
					unk_0x5D96D8530B3D0904(&iLocal_211, 16);
				}
			}
			break;
		
		case 5:
			if (Local_73.f_5 == 0)
			{
				func_63();
			}
			break;
		
		case 6:
			vLocal_112[unk_0x57270EE11514DC67()] = 0;
			unk_0x0674E58A79778E99(&iLocal_211, 3);
			unk_0x0674E58A79778E99(&iLocal_211, 4);
			iLocal_210 = 0;
			func_206(12, 116);
			if (unk_0xE4EDC4B0E92C078B(Global_1661975))
			{
				unk_0x142CC44DB769B57E(&Global_1661975);
			}
			func_62(&Local_223);
			func_55();
			func_357(11, 0);
			vLocal_112[unk_0x57270EE11514DC67()].f_2 = 7;
			break;
		
		case 7:
			if (Local_73.f_2 == 0 && !unk_0xEAE0D21A50E6C7F4(Local_73, 10))
			{
				vLocal_112[unk_0x57270EE11514DC67()].f_2 = 0;
			}
			break;
	}
}

void func_55()
{
	if (!func_61())
	{
		return;
	}
	if (!unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_1312585.f_9)
	{
		return;
	}
	func_56();
}

void func_56()
{
	func_58();
	func_57(0);
}

void func_57(bool bParam0)
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

void func_58()
{
	if (!func_60())
	{
	}
	if (func_61())
	{
		unk_0x400C0D66EFD08603(&(Global_1312585.f_12));
		func_59();
		unk_0x35F2C6537D10DAEB();
	}
}

void func_59()
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

int func_60()
{
	if (!func_61())
	{
		return 0;
	}
	unk_0x18B60B994182620C(&(Global_1312585.f_12));
	func_59();
	return unk_0xB165082A56EE6E7F();
}

int func_61()
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

void func_62(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x142CC44DB769B57E(iParam0);
		bVar0 = true;
	}
	if (unk_0xE4EDC4B0E92C078B(iParam0->f_1))
	{
		unk_0x142CC44DB769B57E(&(iParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xC844350D5D58C99A(iParam0->f_7))
	{
		if (!unk_0x437347B10A200C4B(iParam0->f_7, 0))
		{
			if (unk_0x3C583F939C836C5C(iParam0->f_7))
			{
				unk_0xA29E145196B9739D(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

void func_63()
{
	if (unk_0xE5DBF9B6126856CA(Local_73.f_9[0]))
	{
		if (!func_40(Local_73.f_9[0]))
		{
			if (unk_0xE4EDC4B0E92C078B(Global_1661975))
			{
				if (func_204() || func_203())
				{
					unk_0x9D7CDDB4B55142AF(Global_1661975, 0);
				}
				else
				{
					unk_0x9D7CDDB4B55142AF(Global_1661975, 4);
				}
			}
			else
			{
				Global_1661975 = unk_0x5C3B41825F6AC5A0(unk_0x1B50683925F00106(Local_73.f_9[0]));
				unk_0x61755AC17D8F538E(Global_1661975, 1);
				unk_0x516E63E474722206(Global_1661975, 0f);
			}
			if (unk_0xE4EDC4B0E92C078B(Local_223))
			{
				if (func_204() || func_203())
				{
					unk_0x9D7CDDB4B55142AF(Local_223, 0);
				}
				else
				{
					unk_0x9D7CDDB4B55142AF(Local_223, 4);
				}
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_211, 10))
				{
					unk_0xDC5B2F9D0CCE3A10(Local_223, "FM_GDM_BLP");
					unk_0x5D96D8530B3D0904(&iLocal_211, 10);
				}
			}
			if (unk_0xE4EDC4B0E92C078B(Local_223.f_1))
			{
				if (func_204() || func_203())
				{
					unk_0x9D7CDDB4B55142AF(Local_223.f_1, 0);
				}
				else
				{
					unk_0x9D7CDDB4B55142AF(Local_223.f_1, 4);
				}
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_211, 12))
				{
					unk_0xDC5B2F9D0CCE3A10(Local_223.f_1, "FM_GDM_BLP");
					unk_0x5D96D8530B3D0904(&iLocal_211, 12);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_211, 6))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_2359302, 7) && !func_186(unk_0xD803B885F5E47A62(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
				{
					if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
					{
						if (!func_204())
						{
							func_180("FM_GDM_KIL", 0);
						}
						unk_0x5D96D8530B3D0904(&iLocal_211, 6);
					}
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_2359302, 7))
			{
				func_55();
				unk_0x0674E58A79778E99(&iLocal_211, 6);
			}
			else if (func_179())
			{
				func_55();
				unk_0x0674E58A79778E99(&iLocal_211, 6);
			}
			else if (func_186(unk_0xD803B885F5E47A62(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
			{
				func_55();
				unk_0x0674E58A79778E99(&iLocal_211, 6);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(iLocal_211, 6))
		{
			func_55();
			unk_0x0674E58A79778E99(&iLocal_211, 6);
		}
		if (!unk_0xEAE0D21A50E6C7F4(vLocal_112[unk_0x57270EE11514DC67()], 1))
		{
			iVar1 = unk_0x39DDAA68EF6A6BF4(Local_73.f_9[0], &uVar0);
			if (iVar1 == unk_0xD803B885F5E47A62())
			{
				unk_0x5D96D8530B3D0904(&(vLocal_112[unk_0x57270EE11514DC67()]), 1);
				iVar2 = func_176(func_178(unk_0xD803B885F5E47A62(), 1), 1);
				if (iVar2 > 100)
				{
					iVar2 = 100;
				}
				iVar3 = iVar2 * 20;
				iVar3 = round((Global_262145.f_4229 * IntToFloat(iVar3)));
				func_133(2, "XPT_KAIE", -1859646258, 2131309714, iVar3, 1, -1, 0);
				if (Global_262145.f_2423 != 0f)
				{
					iVar4 = round(Global_262145.f_2423);
				}
				else
				{
					iVar4 = 2000;
				}
				if (Global_262145.f_2419 != 0f)
				{
					iVar5 = round(Global_262145.f_2419);
				}
				else
				{
					iVar5 = 8000;
				}
				if (iVar4 >= 100)
				{
					iVar6 = (iVar4 / 100);
				}
				if (iVar5 >= 100)
				{
					iVar7 = (iVar5 / 100);
				}
				iVar8 = unk_0x09AC81E49EA267F7(iVar6, iVar7 + 1) * 100;
				iVar8 = func_132(iVar8, 1);
				if (iVar8 > iVar5)
				{
					iVar8 = iVar5;
				}
				func_79(&iVar8, 1);
				if (func_78())
				{
					if (iVar8 > 0)
					{
						func_66(-352356931, iVar8, &iVar9, 0, 0, 0);
						Global_4263954[iVar9] = -1146479277;
					}
				}
				else
				{
					unk_0xDF9A19F19D39D17D(iVar8, -1146479277);
				}
				func_65(5, iVar8);
			}
			else if (iVar1 != func_64())
			{
				if (unk_0x40B8C182D63932FC(iVar1))
				{
					if (!unk_0xEAE0D21A50E6C7F4(vLocal_112[unk_0x57270EE11514DC67()], 7))
					{
						if (!unk_0xFB75B0F82CA525F6(iVar1))
						{
							unk_0x5D96D8530B3D0904(&(vLocal_112[unk_0x57270EE11514DC67()]), 7);
						}
					}
				}
			}
		}
	}
}

int func_64()
{
	return -1;
}

void func_65(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23489 == 0 || Global_262145.f_23489 == 1)
		{
			if (!unk_0x0EFF6B4415DAF4A1() || Global_262145.f_23489 == 1)
			{
				Global_2537071.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6584)
				{
					iParam1 = Global_262145.f_6584;
				}
				Global_2537071.f_284 = iParam1;
				Global_2537071.f_285 = 0;
			}
		}
	}
}

void func_66(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_78())
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
				func_67(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_67(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_67(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_67(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_67(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bVar0 = false;
	if (!func_78())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_19()) || unk_0xDD2EE1F5DA6A6AB0())
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
			*uParam0 = func_74(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_73(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_68(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_68(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62()].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_69(iParam0);
	}
}

void func_69(int iParam0)
{
	bVar0 = false;
	if (!func_78())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_72(iParam0))
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
		func_70(&(Global_4263954[iParam0]));
	}
}

void func_70(var uParam0)
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
	func_71(&(uParam0->f_14));
	func_71(&(uParam0->f_14.f_13));
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

void func_71(var uParam0)
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

int func_72(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_5 == 1;
	}
	return 0;
}

void func_73(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_74(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0].f_66.f_2 == 0)
		{
			if (!func_78())
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
				func_75(Global_4263954[iVar0], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_75(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	iVar36 = func_77(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_76();
		unk_0xFB061A86A7AC749F(1, &vVar0, 36, iVar36);
	}
}

void func_76()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_77(int iParam0)
{
	if (iParam0 != -1)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_78()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

void func_79(int iParam0, int iParam1)
{
	if (*iParam0 > 0)
	{
		if (!func_131())
		{
			if (func_130(0))
			{
				if (!func_126(0))
				{
					if (unk_0x40B8C182D63932FC(func_125()))
					{
						if (func_124() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_124());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_122(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_84("GB_BCUT_TICK1", func_125(), iVar0, 0, 0, 1);
						}
						func_83(20);
						func_80(func_125(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_80(int iParam0, int iParam1, int iParam2)
{
	if (func_388(iParam0, 0, 1))
	{
		Var0 = -1294585740;
		Var0.f_1 = unk_0xD803B885F5E47A62();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_82(iParam0);
		func_81(&(Var0.f_6), &(Var0.f_7));
		unk_0xFB061A86A7AC749F(1, &Var0, 8, func_77(iParam0));
	}
}

void func_81(var uParam0, var uParam1)
{
	*uParam0 = Global_1650640.f_9;
	*uParam1 = Global_1650640.f_10;
}

var func_82(int iParam0)
{
	return Global_1628237[iParam0].f_533;
}

void func_83(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x5D96D8530B3D0904(&(Global_2537071.f_5124.f_7[iVar0]), iVar1);
}

int func_84(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	iVar0 = -1;
	if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		if (unk_0xEA6BC48857E0AC4C(&Var1))
		{
		}
		unk_0x1E64CE678ED5F61E(sParam0);
		unk_0x3A820E495A7BA3E5(func_91(iParam1, -2, 1, 0, 0));
		unk_0xD06AC7C87A34A6AD(func_89(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x3A820E495A7BA3E5(iParam3);
		}
		unk_0x6D99DF8263D35CE5(iParam2);
		iVar0 = unk_0x47AFB2993A42BD03(0, 1);
		func_85(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_85(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	if ((!func_88() || !unk_0xA14BB9332558B949()) || !func_17(unk_0xD803B885F5E47A62(), 0))
	{
		return;
	}
	iVar0 = func_86(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1670846.f_5[iVar0] = iParam0;
		Global_1670846.f_5[iVar0].f_1 = iParam2;
		StringCopy(&(Global_1670846.f_5[iVar0].f_8), sParam1, 16);
		Global_1670846.f_5[iVar0].f_2[0] = iParam4;
		Global_1670846.f_5[iVar0].f_2[1] = iParam5;
		Global_1670846.f_5[iVar0].f_2[2] = iParam6;
		Global_1670846.f_5[iVar0].f_7 = iParam7;
		Global_1670846.f_5[iVar0].f_6 = iParam8;
		StringCopy(&(Global_1670846.f_5[iVar0].f_12), sParam3, 64);
		StringCopy(&(Global_1670846.f_5[iVar0].f_28[0]), sParam9, 24);
		StringCopy(&(Global_1670846.f_5[iVar0].f_28[1]), sParam10, 24);
		StringCopy(&(Global_1670846.f_5[iVar0].f_28[2]), sParam11, 24);
	}
}

int func_86(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0].f_1)
		{
			func_87(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1670846++;
	if (Global_1670846 > 5)
	{
		Global_1670846 = 5;
		return Global_1670846;
	}
	return (Global_1670846 - 1);
}

void func_87(int iParam0)
{
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0] = { Global_1670846.f_5[(iVar0 - 1)] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_88()
{
	return unk_0xC146D5FBD23C6954(-1762644250);
}

var func_89(char* sParam0)
{
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_90(&cVar0);
}

var func_90(char[4] cParam0)
{
	return cParam0;
}

int func_91(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_358(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x08067D4957B73C02(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_190067[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_358(unk_0xD803B885F5E47A62()) || (func_121() && func_120())) && !unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 31)) && !bParam4)
	{
		iVar1 = func_119();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x34BFC6F0CB887BC2(iVar1))
			{
				if (unk_0x83FACCC48B68F9D1(iVar1) != -1)
				{
					if (func_388(unk_0x83FACCC48B68F9D1(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
						{
							if (Global_4456448.f_190067[iParam1] != -1)
							{
								return func_117(iParam1, iParam0, 0);
							}
							else
							{
								return func_104(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_104(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
			{
				if (Global_4456448.f_190067[iParam1] != -1)
				{
					return func_117(iParam1, iParam0, 0);
				}
				else
				{
					return func_92(0, -1, 0);
				}
			}
			else
			{
				return func_92(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
	{
		if (Global_4456448.f_190067[iParam1] != -1)
		{
			return func_117(iParam1, iParam0, 0);
		}
		else
		{
			return func_104(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_104(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_92(bool bParam0, int iParam1, bool bParam2)
{
	return func_93(unk_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_93(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (!unk_0x40B8C182D63932FC(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x08067D4957B73C02(iParam0);
	if ((func_103() || (func_102() && func_100())) && Global_1388109.f_1)
	{
		if (bParam1)
		{
			return func_99(iParam2, iVar0);
		}
		else
		{
			return func_99(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_98(iVar0, iParam2, 0) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_97(1);
				}
				else
				{
					return func_97(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 20))
			{
				return func_94(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_94(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_97(1);
	}
	return func_97(0);
}

int func_94(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iVar0 = func_96(iParam0, iParam1, iParam3);
	if (func_95(Global_4456448.f_194990, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_95(int iParam0, bool bParam1)
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

int func_96(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_98(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_97(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_98(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 0);
				
				case 1:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 1);
				
				case 2:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 2);
				
				case 3:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 4);
				
				case 1:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 5);
				
				case 2:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 6);
				
				case 3:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 8);
				
				case 1:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 9);
				
				case 2:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 10);
				
				case 3:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 12);
				
				case 1:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 13);
				
				case 2:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 14);
				
				case 3:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_99(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_96(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_100()
{
	if (func_101())
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 4);
}

bool func_101()
{
	return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_226020, 12);
}

bool func_102()
{
	if (unk_0xA14BB9332558B949())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 0);
	}
	return ((unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 0) || Global_1653478) && unk_0x8A22C4C08282BF26(-1518439287) > 0);
}

int func_103()
{
	if (func_101() && unk_0xA14BB9332558B949())
	{
		return 1;
	}
	return 0;
}

int func_104(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (iParam2 == -2)
	{
		iVar0 = unk_0x08067D4957B73C02(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590535[unk_0xD803B885F5E47A62()] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590535[iVar2] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_113())
			{
				iVar3 = func_109(iParam0);
				if (!iVar3 == -1)
				{
					return func_107(iVar3);
				}
			}
			if ((func_106(iParam1, iParam0, iVar0, 0) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)) || ((func_98(unk_0x08067D4957B73C02(iParam1), unk_0x08067D4957B73C02(iParam0), 0) && unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 23)) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)))
			{
				return func_97(1);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26))
			{
				return func_105(1);
			}
			else
			{
				return func_93(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574410 || Global_1574401) || Global_1590535[iParam0] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574410 == 1 && Global_1574420 == 0))
			{
				return func_97(1);
			}
			else
			{
				return func_93(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574405 && Global_1573902.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_109(iParam0);
	if (!iVar4 == -1)
	{
		return func_107(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_105(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_106(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x08067D4957B73C02(iParam0) == -1 && unk_0x08067D4957B73C02(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x08067D4957B73C02(iParam0) == unk_0x08067D4957B73C02(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x08067D4957B73C02(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x08067D4957B73C02(iParam0) == iParam2;
	}
	return unk_0x08067D4957B73C02(iParam0) == iParam2;
}

int func_107(int iParam0)
{
	if (iParam0 > -1)
	{
		iVar0 = func_108(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_108(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0].f_1;
}

int func_109(int iParam0)
{
	if (!iParam0 == func_64())
	{
		if (func_111(iParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_110(iParam0)];
		}
	}
	return -1;
}

int func_110(int iParam0)
{
	if (iParam0 != func_64())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_64();
}

bool func_111(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_112(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0].f_11 != func_64();
}

int func_112(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (Global_1628237[iParam0].f_11 != func_64())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

int func_113()
{
	if (((func_116() || func_115()) || func_23()) || func_114())
	{
		return 1;
	}
	return 0;
}

var func_114()
{
	return Global_2450632.f_19;
}

var func_115()
{
	return Global_2450632.f_16;
}

var func_116()
{
	return Global_2450632.f_15;
}

int func_117(int iParam0, int iParam1, bool bParam2)
{
	iVar1 = Global_969031.f_14[iParam0];
	if (func_113())
	{
		iVar2 = func_109(iParam1);
		if (!iVar2 == -1)
		{
			return func_107(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_271[iParam0].f_6513[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_64())
	{
		if (Global_4456448.f_190067[iParam0] != -1 && Global_4456448.f_190067[iParam0] <= 4)
		{
			if (Global_4456448.f_190067[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_190067[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_190067[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_190067[iParam0] == 4)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_190067[iParam0];
			}
		}
		else
		{
			iVar0 = func_93(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_21, 13))
		{
			iVar0 = func_118(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26) && !func_98(iParam0, unk_0x08067D4957B73C02(iParam1), 0))
		{
			iVar0 = func_105(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_233007;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_233008;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_233009;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_233010;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_119()
{
	return Global_2359302.f_2;
}

bool func_120()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 4);
}

bool func_121()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 14);
}

void func_122(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar1 = func_123(1);
	}
	else
	{
		iVar1 = func_123(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_123(bool bParam0)
{
	if (bParam0)
	{
		return round((0,05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_124()
{
	return Global_262145.f_12389;
}

int func_125()
{
	return Global_1628237[unk_0xD803B885F5E47A62()].f_11;
}

bool func_126(bool bParam0)
{
	return func_127(unk_0xD803B885F5E47A62(), bParam0);
}

int func_127(int iParam0, bool bParam1)
{
	return func_128(iParam0, bParam1, 1);
}

int func_128(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == func_64())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_129(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628237[iParam0].f_11;
	if (iVar0 != func_64() && Global_1628237[iVar0].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_129(int iParam0, int iParam1)
{
	if (iParam0 != func_64())
	{
		if (Global_1628237[iParam0].f_11 != func_64())
		{
			if (Global_1628237[iParam0].f_11 == iParam0 && Global_1628237[iParam0].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_130(bool bParam0)
{
	return func_111(unk_0xD803B885F5E47A62(), bParam0);
}

bool func_131()
{
	return func_112(unk_0xD803B885F5E47A62());
}

int func_132(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (to_float(iParam0) * Global_262145);
				iParam0 = round(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

var func_133(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_134(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_134(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	uVar0 = func_135(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_135(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	if (func_175(unk_0xD803B885F5E47A62()) || func_174(unk_0xD803B885F5E47A62()))
	{
		if (Global_262145.f_9635 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9635;
		}
	}
	else if (func_172() || func_168(unk_0xD803B885F5E47A62()))
	{
		if (Global_262145.f_22774 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22774;
		}
	}
	else if (Global_262145.f_6635 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6635;
	}
	if (func_167(sParam2))
	{
	}
	if (func_166())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_164(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_163(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_161(0, &iVar1);
					break;
				
				case 3:
					func_161(1, &iVar1);
					break;
				
				case 1:
					func_158(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1686714)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_155(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_146((func_154(unk_0xD803B885F5E47A62()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x189A6F4108CDFDD6(iVar1, iParam8, iParam9);
				if (Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_2 != -1)
				{
					func_155(1165, iVar1, -1);
				}
				func_140(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_136((func_138(unk_0xD803B885F5E47A62()) + iVar1));
			}
			else
			{
				func_136((func_138(unk_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_136(int iParam0)
{
	if (func_166())
	{
		Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_5 = iParam0;
		func_137(-1804740956, iParam0);
	}
}

void func_137(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
	}
}

int func_138(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_388(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return func_139(-1804740956);
			}
			else
			{
				return Global_1590535[iParam0].f_211.f_5;
			}
		}
		else
		{
			return func_139(-1804740956);
		}
	}
	return 0;
}

int func_139(int iParam0)
{
	iVar0 = iParam0;
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_140(int iParam0)
{
	Var0 = { func_145(unk_0xD803B885F5E47A62()) };
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar13 = func_143(func_144(&Var0));
			if (iVar13 == 0)
			{
				func_142(&Global_1387915, iParam0);
				func_141(-1446982891, Global_1387915);
			}
			else if (iVar13 == 1)
			{
				func_142(&Global_1387916, iParam0);
				func_141(-1676857426, Global_1387916);
			}
			else if (iVar13 == 2)
			{
				func_142(&Global_1387917, iParam0);
				func_141(1280806976, Global_1387917);
			}
			else if (iVar13 == 3)
			{
				func_142(&Global_1387918, iParam0);
				func_141(-1096682281, Global_1387918);
			}
			else if (iVar13 == 4)
			{
				func_142(&Global_1387919, iParam0);
				func_141(1894078811, Global_1387919);
			}
		}
	}
}

void func_141(int iParam0, int iParam1)
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

void func_142(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_143(int iParam0)
{
	if (iParam0 == Global_1387910)
	{
		return 0;
	}
	else if (iParam0 == Global_1387911)
	{
		return 1;
	}
	else if (iParam0 == Global_1387912)
	{
		return 2;
	}
	else if (iParam0 == Global_1387913)
	{
		return 3;
	}
	else if (iParam0 == Global_1387914)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_144(var uParam0)
{
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(uParam0))
		{
			return Global_2460605;
		}
	}
	return Global_2460605;
}

struct<13> func_145(int iParam0)
{
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

void func_146(int iParam0, int iParam1, int iParam2)
{
	if (func_166())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388060[func_153(-1)])
				{
					unk_0x189A6F4108CDFDD6(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388060[func_153(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x189A6F4108CDFDD6(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x189A6F4108CDFDD6(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_152(unk_0xD803B885F5E47A62()))
		{
			Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_1 = iParam0;
			Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_6 = func_176(iParam0, 1);
		}
		func_151(639, iParam0, -1, 1);
		func_150(640, func_176(iParam0, 1), -1, 1, 0);
		Global_1388060[func_153(-1)] = iParam0;
		func_147(-1109644434, 7, 0);
	}
}

void func_147(int iParam0, int iParam1, int iParam2)
{
	if (func_149(iParam1, iParam2))
	{
		iVar0 = func_148();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_148()
{
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2460557[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_149(int iParam0, var uParam1)
{
	if (Global_1312865)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312877) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_150(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_153(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

void func_151(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = Global_2548434[iParam0][func_153(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_153(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_153(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_153(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_153(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_153(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_153(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_153(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_153(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_153(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_153(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_153(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_153(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_153(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_153(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_153(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_153(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_153(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_153(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_153(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_153(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_153(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_153(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_153(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_153(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0][func_153(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1][func_153(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2][func_153(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3][func_153(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_153(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_153(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_153(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_153(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_153(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_153(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0][func_153(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1][func_153(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2][func_153(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3][func_153(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4][func_153(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0][func_153(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1][func_153(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2][func_153(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3][func_153(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4][func_153(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0][func_153(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1][func_153(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2][func_153(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3][func_153(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4][func_153(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5][func_153(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4][func_153(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_153(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_153(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_153(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_153(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_153(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_153(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_153(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6][func_153(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5][func_153(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7][func_153(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6][func_153(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8][func_153(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7][func_153(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9][func_153(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8][func_153(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10][func_153(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9][func_153(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11][func_153(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10][func_153(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12][func_153(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11][func_153(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13][func_153(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12][func_153(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14][func_153(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13][func_153(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15][func_153(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14][func_153(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16][func_153(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15][func_153(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17][func_153(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16][func_153(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17][func_153(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18][func_153(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19][func_153(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20][func_153(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_153(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_153(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_153(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_153(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_153(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_153(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_153(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_153(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_153(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_153(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_153(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_153(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_153(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_153(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21][func_153(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23][func_153(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22][func_153(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24][func_153(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23][func_153(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_152(int iParam0)
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

int func_153(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

int func_154(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_1388060[func_153(-1)];
			}
			else if (func_152(iParam0))
			{
				return Global_1590535[iParam0].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_153(-1)];
	}
	return 0;
}

void func_155(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_157(iParam0, func_153(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_156(iParam0))
	{
		func_150(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_151(iParam0, iVar0, iParam2, 1);
	}
}

int func_156(int iParam0)
{
	if (Global_1387909)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8726:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8728:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8730:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8732:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8731:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 10016:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
			case 8534:
			case 8975:
			case 8977:
			case 8978:
			case 8980:
				return 1;
				break;
			}
	}
	return 0;
}

int func_157(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_153(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_158(int iParam0)
{
	iVar1 = unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62());
	iVar0 = 0;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		iVar4 = unk_0xF4FB3A22FC4991C8(iVar0);
		if (unk_0x81A93C8315C28F58(iVar4))
		{
			iVar5 = unk_0x4B2BFE4A3BC248ED(iVar4);
			if (unk_0x08067D4957B73C02(iVar5) != -1)
			{
				if (unk_0x08067D4957B73C02(iVar5) == iVar1 || func_98(unk_0x08067D4957B73C02(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xD803B885F5E47A62())
					{
						if (func_160(unk_0xD803B885F5E47A62(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = round((func_159(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_159(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_159(int iParam0, int iParam1)
{
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_160(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_145(iParam0) };
		Global_2513231 = { func_145(iParam1) };
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

void func_161(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x54EABC0DD106045B())
		{
			iVar3 = iVar0;
			if (unk_0x81A93C8315C28F58(iVar3))
			{
				iVar4 = unk_0x4B2BFE4A3BC248ED(iVar3);
				if (func_388(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_160(unk_0xD803B885F5E47A62(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_388(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xD803B885F5E47A62())
				{
					if (func_162(unk_0xD803B885F5E47A62(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_160(unk_0xD803B885F5E47A62(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = round((func_159(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_159(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_162(int iParam0, int iParam1)
{
	return vdist(func_21(iParam0), func_21(iParam1));
	return 0f;
}

int func_163(int iParam0)
{
	if (unk_0xA0501A3E65437842() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_159(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_164(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x51D1D19912234EA0(iParam0) > func_154(unk_0xD803B885F5E47A62()))
		{
			iParam0 = -func_154(unk_0xD803B885F5E47A62());
		}
	}
	if (func_165(8000, 0, 0) > 0)
	{
		if (func_165(8000, 0, 0) < (iParam0 + func_154(unk_0xD803B885F5E47A62())))
		{
			iParam0 = (func_165(8000, 0, 0) - func_154(unk_0xD803B885F5E47A62()));
		}
	}
	return iParam0;
}

int func_165(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_291133[iParam0];
}

int func_166()
{
	return 1;
}

int func_167(char* sParam0)
{
	if (unk_0x2EBF5002C6B6A06C(sParam0))
	{
		return 1;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "") || unk_0x7F8A39872A07D2CE(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_168(int iParam0)
{
	return func_169(func_170(iParam0));
}

int func_169(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_170(int iParam0)
{
	if (func_171(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_171(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_172()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_23();
	}
	return func_173(Global_4456448.f_194990);
}

int func_173(int iParam0)
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

bool func_174(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 2;
}

bool func_175(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 7;
}

int func_176(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_177(iParam0, 0);
}

int func_177(int iParam0, int iParam1)
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

int func_178(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_154(iParam0);
}

bool func_179()
{
	return Global_73825;
}

void func_180(char* sParam0, bool bParam1)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	if (unk_0x7724E025FD444F45(sParam0) > 23)
	{
		return;
	}
	if (func_184(sParam0))
	{
		return;
	}
	func_56();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_1312585.f_9 = unk_0x12AB0310C2281427(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_183();
	func_182(bParam1);
	func_181();
}

void func_181()
{
	unk_0x5D96D8530B3D0904(&(Global_1312585.f_59), 1);
}

void func_182(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_1312585.f_59), 0);
		return;
	}
	unk_0x0674E58A79778E99(&(Global_1312585.f_59), 0);
}

void func_183()
{
	Global_1312585.f_10 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 86400000);
	Global_1312585.f_11 = unk_0x2B6E0A53779D29EA();
}

bool func_184(char* sParam0)
{
	if (!func_61())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_185(sParam0);
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_1312585.f_12));
}

bool func_185(char* sParam0)
{
	if (!func_61())
	{
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_1312585.f_16));
}

int func_186(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_202(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_201(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_200(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_199(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_198(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_197(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_196(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_195(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_194(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_193(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_192(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_191(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_190(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_189(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_187(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_187(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_388(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_188(Global_2425662[iParam0].f_310.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_188(int iParam0)
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

int func_189(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_388(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_188(Global_2425662[iParam0].f_310.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_190(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_388(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_188(Global_2425662[iParam0].f_310.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_191(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_388(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_188(Global_2425662[iParam0].f_310.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_192(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_388(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_188(Global_2425662[iParam0].f_310.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_193(int iParam0, bool bParam1)
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
	if (iParam0 != func_64())
	{
		if (func_388(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_64())
			{
				return func_188(Global_2425662[iParam0].f_310.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_194(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_388(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_188(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_195(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_388(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_188(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_196(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_388(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_64())
			{
				return func_188(Global_2425662[iParam0].f_310.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_197(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_388(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_188(Global_2425662[iParam0].f_310.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_198(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_388(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_188(Global_2425662[iParam0].f_310.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_199(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_388(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_188(Global_2425662[iParam0].f_310.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_200(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_388(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_188(Global_2425662[iParam0].f_310.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_201(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_388(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_188(Global_2425662[iParam0].f_310.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_202(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_388(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_188(Global_2425662[iParam0].f_310.f_5) == 0;
			}
		}
	}
	return 0;
}

var func_203()
{
	return Global_2416079.f_1812;
}

int func_204()
{
	if (func_205(18))
	{
		return 1;
	}
	if (func_205(0))
	{
		return 1;
	}
	return 0;
}

bool func_205(int iParam0)
{
	iVar0 = func_157(2480, -1, 0);
	return unk_0xEAE0D21A50E6C7F4(iVar0, iParam0);
}

void func_206(int iParam0, int iParam1)
{
	iVar0 = func_218(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (!iParam1 == Global_2394180[iVar0].f_8)
	{
		return;
	}
	if (!Global_2394180[iVar0].f_4 && Global_2394180[iVar0])
	{
		Global_2394180[iVar0].f_4 = 1;
		func_210();
	}
	func_207(iVar0);
}

void func_207(int iParam0)
{
	if (iParam0 >= Global_1387741)
	{
		return;
	}
	if (Global_2394180[iParam0].f_26 != -1)
	{
		unk_0xD59AE843FA2C6B40(Global_2394180[iParam0].f_26);
	}
	iVar0 = iParam0;
	iVar1 = iVar0 + 1;
	while (iVar1 < Global_1387741)
	{
		Global_2394180[iVar0] = { Global_2394180[iVar1] };
		Global_2394180[iVar0] = { Global_2394180[iVar1] };
		iVar0++;
		iVar1++;
	}
	func_209(iVar0);
	Global_1387741 = (Global_1387741 - 1);
	if (Global_1387712)
	{
		if (Global_1387710 > 0)
		{
			func_208();
		}
	}
}

void func_208()
{
	Global_1387712 = 0;
}

void func_209(int iParam0)
{
	Global_2394180[iParam0] = 0;
	Global_2394180[iParam0].f_2 = 0;
	Global_2394180[iParam0].f_3 = 0;
	Global_2394180[iParam0].f_4 = 0;
	Global_2394180[iParam0].f_5 = func_64();
	Global_2394180[iParam0].f_6 = 145;
	Global_2394180[iParam0].f_7 = 1;
	Global_2394180[iParam0].f_8 = -1;
	Global_2394180[iParam0].f_9 = -1;
	StringCopy(&(Global_2394180[iParam0].f_10), "", 64);
	Global_2394180[iParam0].f_26 = -1;
	StringCopy(&(Global_2394180[iParam0].f_27), "", 32);
	Global_2394180[iParam0].f_35 = -1;
	Global_2394180[iParam0].f_36 = -1;
	Global_2394180[iParam0].f_37 = 0;
	Global_2394180[iParam0].f_39 = 0;
	Global_2394180[iParam0].f_40 = -1;
	Global_2394180[iParam0].f_41 = 0;
	Global_2394180[iParam0].f_42 = 0;
	Global_2394180[iParam0].f_43 = 0;
	Global_2394180[iParam0].f_45 = 0;
	if (unk_0x8CD06866876216F2())
	{
		Global_2394180[iParam0].f_38 = unk_0x2B6E0A53779D29EA();
	}
}

void func_210()
{
	Global_21868 = (Global_21868 - 1);
	if (Global_21868 < 0)
	{
		func_217("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_211();
}

void func_211()
{
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_216(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_212(1);
			func_216(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_212(int iParam0)
{
	Global_21873 = 0;
	Global_7961 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_7925[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_215(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1].f_11)
				{
					if (iVar0 == Global_7363[iVar1].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_7357, 3))
								{
									iVar2 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19668 = 0;
								}
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_214(&(Global_7363[iVar1]));
								unk_0x3CAEA85DA607305E(iVar2);
								unk_0x7E60D21B163E9D56();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_213(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
							}
							Global_7925[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1].f_11)
				{
					if (iVar0 == Global_7363[iVar1].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111638.f_14136[iVar3].f_24 != 0)
									{
										if (Global_111638.f_14136[iVar3].f_28 == 0)
										{
											if (Global_111638.f_14136[iVar3].f_99[Global_19486] == 1)
											{
												Global_21873++;
											}
										}
									}
									iVar3++;
								}
								func_213(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(Global_21873), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76622)
								{
									iVar4 = 0;
									iVar4 = Global_4268499;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268500[iVar5].f_24 != 0)
										{
											if (Global_4268500[iVar5].f_28 == 0)
											{
												if (Global_4268500[iVar5].f_99[Global_19486] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_213(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(iVar4), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19486)
									{
										case 0:
											iVar6 = Global_42607;
											break;
										
										case 1:
											iVar6 = Global_42608;
											break;
										
										case 2:
											iVar6 = Global_42609;
											break;
										
										default:
											break;
									}
									func_213(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(iVar6), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_213(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_214(&(Global_7363[iVar1]));
								unk_0x3CAEA85DA607305E(Global_7362);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_7357, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_214(&(Global_7363[iVar1]));
								unk_0x3CAEA85DA607305E(iVar7);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_7357, 3))
								{
									iVar8 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19668 = 0;
								}
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_214(&(Global_7363[iVar1]));
								unk_0x3CAEA85DA607305E(iVar8);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 8)
							{
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_214(&(Global_7363[iVar1]));
								unk_0x3CAEA85DA607305E(42);
								unk_0x7E60D21B163E9D56();
							}
							else if ((iVar1 == 23 && unk_0x7F8A39872A07D2CE(&(Global_7363[iVar1]), "CELL_BENWEB")) && unk_0xEAE0D21A50E6C7F4(Global_7357, 6))
							{
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_214(&(Global_7363[iVar1]));
								unk_0x3CAEA85DA607305E(42);
								unk_0x7E60D21B163E9D56();
							}
							else if (Global_7363[iVar1].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_213(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(iVar9), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else
							{
								func_213(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(0), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							Global_7925[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_213(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	unk_0x3CAEA85DA607305E(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam6));
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam7))
	{
		func_214(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_214(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_214(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_214(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_214(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_214(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

bool func_215(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_216(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	unk_0x3CAEA85DA607305E(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam6));
	}
	unk_0x7E60D21B163E9D56();
}

void func_217(char* sParam0)
{
	if (Global_21868 != 0)
	{
		if (!unk_0xEA6BC48857E0AC4C(sParam0))
		{
		}
		Global_21868 = 0;
	}
}

int func_218(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1387741)
	{
		if (!Global_2394180[iVar0].f_7)
		{
			if (Global_2394180[iVar0].f_6 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_219()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_211, 17))
	{
		func_221(12, 116, "", 1, 0, 1, 0);
		unk_0x5D96D8530B3D0904(&iLocal_211, 17);
	}
	else if (!unk_0xEAE0D21A50E6C7F4(iLocal_211, 18))
	{
		if (func_220(12, 116))
		{
			unk_0x5D96D8530B3D0904(&iLocal_211, 18);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_220(int iParam0, int iParam1)
{
	iVar0 = func_218(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!iParam1 == Global_2394180[iVar0].f_8)
	{
		return 0;
	}
	if (!Global_2394180[iVar0].f_2)
	{
		return 0;
	}
	func_207(iVar0);
	Global_2395345 = unk_0x1C0640BA9A7327B3() + 1500;
	return 1;
}

void func_221(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	iVar0 = func_218(iParam0);
	if (bParam5)
	{
		if (iVar0 != -1)
		{
			func_207(iVar0);
		}
	}
	iVar1 = iParam0;
	bVar2 = false;
	StringCopy(&Var3, "", 32);
	func_222(iParam1, iVar1, bVar2, sParam2, &Var3, iParam3, -1, -1, -1, iParam4, iParam6);
}

void func_222(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4, var uParam5, int iParam6, int iParam7, int iParam8, var uParam9, var uParam10)
{
	iVar0 = func_64();
	iVar1 = 145;
	if (bParam2)
	{
		iVar0 = unk_0x117658E336116132(iParam1);
	}
	else
	{
		iVar1 = iParam1;
	}
	if (bParam2)
	{
		if (func_227())
		{
			return;
		}
	}
	iVar2 = Global_1387741;
	if (iVar2 >= 12)
	{
		iVar2 = (iVar2 - 1);
	}
	iVar3 = (iVar2 - 1);
	while (iVar3 >= 0)
	{
		Global_2394180[iVar2] = { Global_2394180[iVar3] };
		iVar2 = (iVar2 - 1);
		iVar3 = (iVar3 - 1);
	}
	Global_1387741++;
	if (Global_1387741 > 12)
	{
		Global_1387741 = 12;
	}
	iVar4 = 0;
	if (Global_2394180[1].f_1)
	{
		Global_2394180[0] = { Global_2394180[1] };
		Global_2394180[1] = { Var5 };
		iVar4 = 1;
	}
	if (iVar4 == 0)
	{
		Global_2394180[iVar4].f_1 = uParam10;
	}
	else
	{
		Global_2394180[iVar4].f_1 = 0;
	}
	Global_2394180[iVar4] = 0;
	Global_2394180[iVar4].f_2 = 0;
	Global_2394180[iVar4].f_3 = 0;
	Global_2394180[iVar4].f_4 = 0;
	Global_2394180[iVar4].f_5 = iVar0;
	Global_2394180[iVar4].f_6 = iVar1;
	Global_2394180[iVar4].f_7 = bParam2;
	Global_2394180[iVar4].f_8 = iParam0;
	Global_2394180[iVar4].f_9 = -1;
	StringCopy(&(Global_2394180[iVar4].f_10), sParam3, 64);
	Global_2394180[iVar4].f_26 = -1;
	StringCopy(&(Global_2394180[iVar4].f_27), sParam4, 32);
	Global_2394180[iVar4].f_35 = iParam6;
	Global_2394180[iVar4].f_36 = iParam7;
	Global_2394180[iVar4].f_37 = 0;
	Global_2394180[iVar4].f_38 = unk_0x2B6E0A53779D29EA();
	Global_2394180[iVar4].f_39 = uParam5;
	Global_2394180[iVar4].f_40 = Global_2395344;
	Global_2394180[iVar4].f_44 = iParam8;
	Global_2394180[iVar4].f_45 = uParam9;
	if (iParam0 == 123 || iParam0 == 234)
	{
		Global_2394180[iVar4].f_9 = func_224();
	}
	Global_2395344++;
	func_223();
	Global_2394180[iVar4].f_41 = 0;
	Global_2394180[iVar4].f_42 = 0;
	Global_2394180[iVar4].f_43 = 0;
	if (unk_0xDC30EF462887322E())
	{
		if (bParam2)
		{
			bVar51 = true;
			if (bVar51)
			{
				Var52 = { func_145(iVar0) };
				iVar65 = unk_0xCB1A6FC304A3D66F(&Var52);
				if (iVar65 != -1)
				{
					Global_2394180[iVar4].f_41 = iVar65;
					Global_2394180[iVar4].f_42 = 1;
					Global_2394180[iVar4].f_43 = 0;
				}
			}
		}
	}
}

void func_223()
{
	Global_1387714 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 30000);
}

int func_224()
{
	StringCopy(&cVar0, "", 24);
	cVar0 = { func_226() };
	if (unk_0xEA6BC48857E0AC4C(&cVar0) || unk_0x7F8A39872A07D2CE(".", &cVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = 0;
	iVar6 = 0;
	while (iVar6 < 7)
	{
		switch (iVar6)
		{
			case 0:
				StringCopy(&cVar0, func_225(53, -1), 24);
				break;
			
			case 1:
				StringCopy(&cVar0, func_225(54, -1), 24);
				break;
			
			case 2:
				StringCopy(&cVar0, func_225(55, -1), 24);
				break;
			
			case 3:
				StringCopy(&cVar0, func_225(56, -1), 24);
				break;
			
			case 4:
				StringCopy(&cVar0, func_225(57, -1), 24);
				break;
			
			case 5:
				StringCopy(&cVar0, func_225(58, -1), 24);
				break;
			
			case 6:
				StringCopy(&cVar0, func_225(59, -1), 24);
				break;
			
			default:
				StringCopy(&cVar0, "", 24);
				break;
		}
		if (!unk_0xEA6BC48857E0AC4C(&cVar0) && !unk_0x7F8A39872A07D2CE(".", &cVar0))
		{
			iVar7++;
		}
		iVar6++;
	}
	if (iVar7 == 0)
	{
		return -1;
	}
	iVar8 = func_157(9533, -1, 0);
	iVar9 = 0;
	iVar6 = 0;
	while (iVar6 < iVar7)
	{
		iVar9 = iVar6 * 3;
		if (iVar9 != -1)
		{
			if (!unk_0xEAE0D21A50E6C7F4(iVar8, iVar9))
			{
				return 7;
			}
		}
		iVar6++;
	}
	return 1;
}

char* func_225(int iParam0, int iParam1)
{
	uVar0 = Global_2584899[iParam0][func_153(iParam1)];
	return unk_0xD3B92504E570C221(uVar0, -1);
}

struct<6> func_226()
{
	if (unk_0xEA6BC48857E0AC4C(&(Global_1668055.f_10)))
	{
		iVar7 = func_157(9534, -1, 0);
		if (iVar7 == 0)
		{
			StringCopy(&Var0, ".", 24);
		}
		else
		{
			iVar6 = 0;
			while (iVar6 < 1218)
			{
				if ((Global_794709.f_4[iVar6].f_65 == 0 && Global_794709.f_4[iVar6].f_68 == 1) && unk_0xEAE0D21A50E6C7F4(Global_794709.f_4[iVar6].f_76, 13))
				{
					if (Global_794709.f_107189[iVar6].f_1 == iVar7)
					{
						Var0 = { Global_794709.f_123037[Global_794709.f_107189[iVar6].f_10] };
						iVar6 = 1218;
					}
				}
				iVar6++;
			}
			if (unk_0xEA6BC48857E0AC4C(&Var0))
			{
			}
		}
		Global_1668055.f_10 = { Var0 };
		return Var0;
	}
	return Global_1668055.f_10;
}

bool func_227()
{
	return Global_1312837 == 10;
}

void func_228()
{
	iVar0 = Global_1388048[func_153(-1)];
	unk_0x5D96D8530B3D0904(&iVar0, 8);
	func_151(1303, iVar0, -1, 1);
}

void func_229(int iParam0, bool bParam1)
{
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2097152[func_230()].f_6174.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_230()].f_6174.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_230()].f_6174.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_230()].f_6174.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_230()].f_6174.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_230()].f_6174.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_230()].f_6174.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_230()].f_6174.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_230()].f_6174.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_230()].f_6174.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_230()].f_6174.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_230()].f_6174.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_230()].f_6174.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_230()].f_6174.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_230()].f_6174.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_230()].f_6174.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_230()].f_6174.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_230()].f_6174.f_30 = iVar0;
			break;
	}
}

int func_230()
{
	iVar0 = 0;
	return iVar0;
}

int func_231()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_211, 4))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_211, 8) || (unk_0xEAE0D21A50E6C7F4(iLocal_211, 8) && func_38(&uLocal_214, 600000, 0)))
		{
			if (func_237(Local_73.f_5))
			{
				unk_0x5D96D8530B3D0904(&iLocal_211, 4);
				unk_0x0674E58A79778E99(&iLocal_211, 8);
			}
		}
	}
	else if (!func_236())
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_211, 19))
		{
			if (func_235())
			{
				unk_0x5D96D8530B3D0904(&iLocal_211, 19);
			}
			else if (!func_234() && !func_232())
			{
				unk_0x5D96D8530B3D0904(&iLocal_211, 8);
				unk_0x0674E58A79778E99(&iLocal_211, 4);
				func_45(&uLocal_214, 0, 0);
				iLocal_210 = 0;
			}
		}
		else if (!func_232())
		{
			if (func_234())
			{
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&iLocal_211, 8);
		unk_0x0674E58A79778E99(&iLocal_211, 4);
		func_45(&uLocal_214, 0, 0);
		iLocal_210 = 0;
	}
	return 0;
}

bool func_232()
{
	return func_233();
}

bool func_233()
{
	return Global_1370527.f_40 == 3;
}

bool func_234()
{
	return Global_1370527.f_57.f_1;
}

int func_235()
{
	if (Global_20805 == 4)
	{
		if (unk_0x1EE04CEA36EF313B())
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

int func_236()
{
	if (Global_21821)
	{
		return 1;
	}
	return 0;
}

int func_237(int iParam0)
{
	switch (iLocal_210)
	{
		case 0:
			if (func_347(0, 1, 1, 1))
			{
				if (!func_346(12, -1))
				{
					func_338(iParam0);
					iLocal_210++;
				}
			}
			break;
		
		case 1:
			iVar0 = func_337(iParam0);
			func_336(iParam0);
			if (func_238(&uLocal_231, iVar0, "FM_1AU", sLocal_396, 0, 0))
			{
				unk_0x0674E58A79778E99(&iLocal_211, 11);
				iLocal_210++;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_238(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	if (func_334())
	{
		return 0;
	}
	if (func_333())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_239(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_239(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	if (unk_0xEA6BC48857E0AC4C(sParam2))
	{
		return 0;
	}
	if (unk_0x7724E025FD444F45(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam3))
	{
		return 0;
	}
	if (unk_0x7724E025FD444F45(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C());
	iVar1 = func_332(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xEA6BC48857E0AC4C(sParam7))
	{
		iVar2 = unk_0x12AB0310C2281427(sParam7);
	}
	if (func_331(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_326(iParam6))
	{
		return 0;
	}
	if (func_323(iVar0, iVar1, iVar2))
	{
		if (func_322())
		{
			return 0;
		}
		func_321();
		return func_246(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_245(iParam4))
	{
		return 0;
	}
	func_240(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_240(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1370527.f_40.f_1 = iParam0;
	Global_1370527.f_40.f_2 = iParam1;
	Global_1370527.f_40.f_3 = iParam2;
	StringCopy(&(Global_1370527.f_40.f_4), sParam3, 16);
	Global_1370527.f_40.f_8 = iParam4;
	Global_1370527.f_40.f_9 = iParam5;
	Global_1370527.f_40.f_14 = iParam6;
	func_241(iParam4);
	func_321();
	Global_1370527.f_40.f_13 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 7000);
}

void func_241(int iParam0)
{
	if (func_244(iParam0))
	{
		func_243();
		return;
	}
	func_242();
}

void func_242()
{
	Global_1370527.f_40.f_10 = 0;
}

void func_243()
{
	Global_1370527.f_40.f_10 = 1;
}

int func_244(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_245(int iParam0)
{
	return iParam0 > Global_1370527.f_40.f_8;
}

int func_246(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	func_320();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_317(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_314(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_317(uParam0, sParam3, sParam4);
		}
		return func_297(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_296(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_284(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_283(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_247(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_247(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	func_282();
	bVar0 = true;
	if (func_249(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_248(120000);
		return 1;
	}
	return 0;
}

void func_248(int iParam0)
{
	Global_1370527.f_40.f_11 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), iParam0);
	Global_1370527.f_40.f_12 = 1;
}

int func_249(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	iVar0 = func_64();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x6E524813889AECF8(iVar0);
		iVar1 = func_276(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x4925CBEE5D8BE14B(unk_0x2B6E0A53779D29EA(), Global_1370527.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_275(sParam5, bParam6, &iVar3);
	uVar5 = func_273(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		iVar6++;
		if (!unk_0xEA6BC48857E0AC4C(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x7F8A39872A07D2CE(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0xEAE0D21A50E6C7F4(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xEA6BC48857E0AC4C(sVar2))
	{
		bVar12 = func_272(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_253(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0))
	{
		func_252();
	}
	func_282();
	func_251();
	func_250();
	return 1;
}

void func_250()
{
	Global_1370527.f_57 = 0;
	Global_1370527.f_57.f_1 = 0;
}

void func_251()
{
	Global_1370527.f_40 = 3;
}

void func_252()
{
	unk_0x5D96D8530B3D0904(&Global_7356, 8);
}

int func_253(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_254(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			unk_0x5D96D8530B3D0904(&Global_4269765, 0);
		}
		return 1;
	}
	return 0;
}

int func_254(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	if (iParam13 > 99)
	{
	}
	if (unk_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_265();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19486 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19486 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19486 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (unk_0xBADF5264209B7544(unk_0x16F2683693E537C9()))
			{
				return 0;
			}
		}
		if (Global_4269750 == 1)
		{
			return 0;
		}
		if (unk_0x8A22C4C08282BF26(-1870099198) > 0)
		{
			return 0;
		}
		if (unk_0x8A22C4C08282BF26(-1346140115) > 0)
		{
			return 0;
		}
	}
	if (func_264() == 0)
	{
		func_262();
		return 0;
	}
	func_261(Global_4269749);
	StringCopy(&(Global_4268500[Global_4269749]), sParam1, 64);
	Global_4268500[Global_4269749].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4268500[Global_4269749].f_24 = iParam2;
	}
	Global_4268500[Global_4269749].f_25 = iParam7;
	Global_4268500[Global_4269749].f_26 = uParam8;
	Global_4268500[Global_4269749].f_29 = uParam9;
	Global_4268500[Global_4269749].f_30 = uParam12;
	Global_4268500[Global_4269749].f_31 = uParam11;
	Global_4268500[Global_4269749].f_28 = 0;
	Global_4268500[Global_4269749].f_32 = iParam3;
	StringCopy(&(Global_4268500[Global_4269749].f_33), sParam4, 64);
	Global_4268500[Global_4269749].f_49 = iParam6;
	StringCopy(&(Global_4268500[Global_4269749].f_50), sParam5, 64);
	Global_4268500[Global_4269749].f_66 = iParam13;
	StringCopy(&(Global_4268500[Global_4269749].f_67), sParam14, 64);
	StringCopy(&(Global_4268500[Global_4269749].f_83), sParam15, 64);
	func_265();
	switch (iParam16)
	{
		case 3:
			Global_4268500[Global_4269749].f_99[Global_19486] = 1;
			break;
		
		case 0:
			Global_4268500[Global_4269749].f_99[0] = 1;
			break;
		
		case 2:
			Global_4268500[Global_4269749].f_99[2] = 1;
			break;
		
		case 1:
			Global_4268500[Global_4269749].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_19486)
		{
			case 0:
				func_260(0);
				break;
			
			case 1:
				func_260(1);
				break;
			
			case 2:
				func_260(2);
				break;
			
			case 3:
				func_260(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4269750 = 1;
				break;
			
			case 0:
				Global_4269750 = 1;
				break;
			
			case 2:
				Global_4269750 = 1;
				break;
			
			case 1:
				Global_4269750 = 1;
				break;
			}
	}
	Global_21874[Global_4269749] = 0;
	if (bParam10)
	{
		func_265();
		if (Global_19429)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19486)
			{
				case 0:
					StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8161[Global_19486][0].f_259 == 1)
		{
			if (!func_259())
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_216(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_212(1);
			func_216(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
	func_255(uParam0, sParam1);
	return 1;
}

void func_255(var uParam0, char* sParam1)
{
	if (!func_256())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(uParam0, -1180597171, unk_0x12AB0310C2281427(sParam1), 0);
}

int func_256()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_64())
	{
		return 0;
	}
	if (func_257(unk_0xD803B885F5E47A62()))
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

bool func_257(int iParam0)
{
	return func_258(iParam0, 20);
}

bool func_258(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

bool func_259()
{
	return Global_1312877;
}

void func_260(int iParam0)
{
	uVar0 = Global_111638.f_14046[iParam0].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_261(int iParam0)
{
	iVar0 = unk_0x4460E481B9E33ADA();
	iVar1 = unk_0x8D199E381D262EEF();
	iVar2 = unk_0xD8A54335F18763BA();
	iVar3 = unk_0x972A296334C9D57B();
	uVar4 = unk_0x118229AD063C3C1D() + 1;
	iVar5 = unk_0x1A61A218F5C5EB02();
	Global_4268500[iParam0].f_18 = iVar0;
	Global_4268500[iParam0].f_18.f_1 = iVar1;
	Global_4268500[iParam0].f_18.f_2 = iVar2;
	Global_4268500[iParam0].f_18.f_3 = iVar3;
	Global_4268500[iParam0].f_18.f_4 = uVar4;
	Global_4268500[iParam0].f_18.f_5 = iVar5;
}

void func_262()
{
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4269749 = 11;
	Global_4268500[Global_4269749].f_18 = -1;
	Global_4268500[Global_4269749].f_18.f_1 = 0;
	Global_4268500[Global_4269749].f_18.f_2 = 0;
	Global_4268500[Global_4269749].f_18.f_3 = 0;
	Global_4268500[Global_4269749].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_263(Global_4268500[iVar2].f_18, Global_4268500[Global_4269749].f_18))
		{
			Global_4269749 = iVar2;
		}
		iVar2++;
	}
	Global_4268500[Global_4269749].f_24 = 1;
}

int func_263(struct<6> Param0, struct<6> Param6)
{
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_264()
{
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4268500[iVar2].f_24 == 0)
		{
			Global_4269749 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4269749 = 11;
	Global_4268500[Global_4269749].f_18 = -1;
	Global_4268500[Global_4269749].f_18.f_1 = 0;
	Global_4268500[Global_4269749].f_18.f_2 = 0;
	Global_4268500[Global_4269749].f_18.f_3 = 0;
	Global_4268500[Global_4269749].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4268500[iVar2].f_24 == 0 || Global_4268500[iVar2].f_24 == 1)
		{
			if (!func_263(Global_4268500[iVar2].f_18, Global_4268500[Global_4269749].f_18))
			{
				Global_4269749 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4269749 == 11)
	{
		return 0;
	}
	Global_4268500[Global_4269749].f_99[0] = 0;
	Global_4268500[Global_4269749].f_99[1] = 0;
	Global_4268500[Global_4269749].f_99[2] = 0;
	return 1;
}

void func_265()
{
	if (func_215(14))
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
		Global_19486 = func_266();
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

var func_266()
{
	func_267();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_267()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_270(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_269(unk_0x16F2683693E537C9());
			if (func_268(iVar0) && (!func_215(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_268(Global_111638.f_2358.f_539.f_4321))
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

bool func_268(int iParam0)
{
	return iParam0 < 3;
}

int func_269(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_270(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_270(int iParam0)
{
	if (func_268(iParam0))
	{
		return func_271(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_271(int iParam0)
{
	return Global_1798[iParam0];
}

int func_272(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_254(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8063 = iParam10;
			unk_0x5D96D8530B3D0904(&Global_4269765, 0);
		}
		return 1;
	}
	return 0;
}

int func_273(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_274(2, iParam1);
	return iParam0;
}

void func_274(int iParam0, var uParam1)
{
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_275(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return sLocal_18;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_274(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x19C9F30A7697B43C(sParam0);
}

int func_276(int iParam0)
{
	iVar0 = func_279(iParam0);
	if (iVar0 == -1)
	{
		func_277(iParam0, 1);
		return 0;
	}
	Global_1389078[iVar0].f_4 = 1;
	return Global_1389078[iVar0].f_2;
}

void func_277(int iParam0, bool bParam1)
{
	if (!func_388(iParam0, 0, 1))
	{
		return;
	}
	if (func_279(iParam0) != -1)
	{
		return;
	}
	if (Global_1389241)
	{
		if (iParam0 == Global_1389241.f_1)
		{
			return;
		}
	}
	if (func_278(iParam0))
	{
		return;
	}
	if (Global_1389279 >= 32)
	{
		return;
	}
	Global_1389246[Global_1389279] = iParam0;
	Global_1389279++;
	if (bParam1)
	{
	}
}

int func_278(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389279)
	{
		if (Global_1389246[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_279(int iParam0)
{
	if (!func_388(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389239 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389239)
	{
		if (Global_1389078[iVar0].f_1 == iParam0)
		{
			if (unk_0x0E66AEE1894BB411(Global_1389078[iVar0].f_2) && unk_0x0A53A8B5FA0B3F4D(Global_1389078[iVar0].f_2))
			{
				return iVar0;
			}
			func_280(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_280(int iParam0)
{
	if (iParam0 >= Global_1389239)
	{
		return;
	}
	if (unk_0x0E66AEE1894BB411(Global_1389078[iParam0].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389078[iParam0].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x5283D58F79627134(Global_1389078[iParam0].f_2), 64);
			unk_0x0DA3CF6693AF3C9C(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0xC48867F0C23C5A64(Global_1389078[iParam0].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1389239)
	{
		Global_1389078[iVar32] = { Global_1389078[iVar33] };
		iVar32++;
		iVar33++;
	}
	func_281(&(Global_1389078[iVar32]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_281(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_64();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x8CD06866876216F2())
	{
		uParam0->f_3 = unk_0x2B6E0A53779D29EA();
	}
}

void func_282()
{
	Global_1370527.f_40.f_9 = 4;
}

int func_283(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	func_282();
	bVar0 = false;
	return func_249(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_284(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bVar0 = false;
	return func_285(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_285(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	iVar0 = func_64();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x6E524813889AECF8(iVar0);
		iVar1 = func_276(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x4925CBEE5D8BE14B(unk_0x2B6E0A53779D29EA(), Global_1370527.f_40.f_13))
			{
				return 0;
			}
		}
		Global_21866 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_275(sParam5, bParam6, &iVar3);
	uVar5 = func_273(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		iVar6++;
		if (!unk_0xEA6BC48857E0AC4C(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x7F8A39872A07D2CE(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0xEAE0D21A50E6C7F4(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xEA6BC48857E0AC4C(sVar2))
	{
		bVar12 = func_295(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_287(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0))
	{
		func_252();
	}
	func_286();
	func_251();
	func_250();
	return 1;
}

void func_286()
{
	Global_1370527.f_40.f_9 = 3;
}

int func_287(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	unk_0x0674E58A79778E99(&Global_7356, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_289(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			Global_7966[3] = { func_288(iParam0) };
			Global_8043 = iParam0;
			unk_0x5D96D8530B3D0904(&Global_7356, 1);
			unk_0x5D96D8530B3D0904(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_288(int iParam0)
{
	return Global_1798[iParam0].f_3;
}

int func_289(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	if (iParam13 > 99)
	{
	}
	if (unk_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_265();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19486 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19486 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19486 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (unk_0xBADF5264209B7544(unk_0x16F2683693E537C9()))
			{
				return 0;
			}
		}
		if (Global_111638.f_14046[Global_19486].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x8A22C4C08282BF26(-757906387) > 0)
		{
			return 0;
		}
		if (unk_0x8A22C4C08282BF26(-757906387) > 0)
		{
			return 0;
		}
	}
	if (func_294() == 0)
	{
		func_292();
		return 0;
	}
	func_291(Global_21872);
	StringCopy(&(Global_111638.f_14136[Global_21872]), sParam1, 64);
	Global_111638.f_14136[Global_21872].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_111638.f_14136[Global_21872].f_24 = iParam2;
	}
	Global_111638.f_14136[Global_21872].f_25 = iParam7;
	Global_111638.f_14136[Global_21872].f_26 = uParam8;
	Global_111638.f_14136[Global_21872].f_29 = uParam9;
	Global_111638.f_14136[Global_21872].f_30 = uParam12;
	Global_111638.f_14136[Global_21872].f_31 = uParam11;
	Global_111638.f_14136[Global_21872].f_28 = 0;
	Global_111638.f_14136[Global_21872].f_32 = iParam3;
	StringCopy(&(Global_111638.f_14136[Global_21872].f_33), sParam4, 64);
	Global_111638.f_14136[Global_21872].f_49 = iParam6;
	StringCopy(&(Global_111638.f_14136[Global_21872].f_50), sParam5, 64);
	Global_111638.f_14136[Global_21872].f_66 = iParam13;
	StringCopy(&(Global_111638.f_14136[Global_21872].f_67), sParam14, 64);
	StringCopy(&(Global_111638.f_14136[Global_21872].f_83), sParam15, 64);
	if (unk_0xEAE0D21A50E6C7F4(Global_7356, 10))
	{
		Global_111638.f_14136[Global_21872].f_99[0] = 1;
		Global_111638.f_14136[Global_21872].f_99[1] = 1;
		Global_111638.f_14136[Global_21872].f_99[2] = 1;
		Global_8062 = 4;
		func_260(0);
		func_260(2);
		func_260(1);
	}
	else
	{
		func_265();
		switch (iParam16)
		{
			case 3:
				Global_111638.f_14136[Global_21872].f_99[Global_19486] = 1;
				break;
			
			case 0:
				Global_111638.f_14136[Global_21872].f_99[0] = 1;
				break;
			
			case 2:
				Global_111638.f_14136[Global_21872].f_99[2] = 1;
				break;
			
			case 1:
				Global_111638.f_14136[Global_21872].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19486)
			{
				case 0:
					func_260(0);
					Global_8062 = 0;
					break;
				
				case 1:
					func_260(1);
					Global_8062 = 1;
					break;
				
				case 2:
					func_260(2);
					Global_8062 = 2;
					break;
				
				case 3:
					func_260(3);
					Global_8062 = 3;
					break;
				
				default:
					Global_8062 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_7356, 10))
		{
			Global_111638.f_14046[0].f_17 = 1;
			Global_111638.f_14046[1].f_17 = 1;
			Global_111638.f_14046[2].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_111638.f_14046[Global_19486].f_17 = 1;
					break;
				
				case 0:
					Global_111638.f_14046[0].f_17 = 1;
					break;
				
				case 2:
					Global_111638.f_14046[2].f_17 = 1;
					break;
				
				case 1:
					Global_111638.f_14046[1].f_17 = 1;
					break;
				}
			}
	}
	Global_21874[Global_21872] = 0;
	if (bParam10)
	{
		func_265();
		if (Global_19429)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19486)
			{
				case 0:
					StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8161[Global_19486][0].f_259 == 1)
		{
			if (!func_259())
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_216(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_212(1);
			func_216(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
	func_290(uParam0, sParam1);
	return 1;
}

void func_290(var uParam0, char* sParam1)
{
	if (!func_256())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(uParam0, 1654525105, unk_0x12AB0310C2281427(sParam1), 0);
}

void func_291(int iParam0)
{
	iVar0 = unk_0x4460E481B9E33ADA();
	iVar1 = unk_0x8D199E381D262EEF();
	iVar2 = unk_0xD8A54335F18763BA();
	iVar3 = unk_0x972A296334C9D57B();
	uVar4 = unk_0x118229AD063C3C1D() + 1;
	iVar5 = unk_0x1A61A218F5C5EB02();
	Global_111638.f_14136[iParam0].f_18 = iVar0;
	Global_111638.f_14136[iParam0].f_18.f_1 = iVar1;
	Global_111638.f_14136[iParam0].f_18.f_2 = iVar2;
	Global_111638.f_14136[iParam0].f_18.f_3 = iVar3;
	Global_111638.f_14136[iParam0].f_18.f_4 = uVar4;
	Global_111638.f_14136[iParam0].f_18.f_5 = iVar5;
}

void func_292()
{
	if (Global_76622)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111638.f_14136[Global_21872].f_18 = -1;
	Global_111638.f_14136[Global_21872].f_18.f_1 = 0;
	Global_111638.f_14136[Global_21872].f_18.f_2 = 0;
	Global_111638.f_14136[Global_21872].f_18.f_3 = 0;
	Global_111638.f_14136[Global_21872].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_293(Global_111638.f_14136[iVar2].f_18, Global_111638.f_14136[Global_21872].f_18))
		{
			Global_21872 = iVar2;
		}
		iVar2++;
	}
	Global_111638.f_14136[Global_21872].f_24 = 1;
}

int func_293(struct<6> Param0, struct<6> Param6)
{
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_294()
{
	if (Global_76622)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_111638.f_14136[iVar2].f_24 == 0)
		{
			Global_21872 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111638.f_14136[Global_21872].f_18 = -1;
	Global_111638.f_14136[Global_21872].f_18.f_1 = 0;
	Global_111638.f_14136[Global_21872].f_18.f_2 = 0;
	Global_111638.f_14136[Global_21872].f_18.f_3 = 0;
	Global_111638.f_14136[Global_21872].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_111638.f_14136[iVar2].f_24 == 0 || Global_111638.f_14136[iVar2].f_24 == 1)
		{
			if (!func_293(Global_111638.f_14136[iVar2].f_18, Global_111638.f_14136[Global_21872].f_18))
			{
				Global_21872 = iVar2;
			}
		}
		if (Global_111638.f_14136[iVar2].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_21872 == 34)
	{
		return 0;
	}
	Global_111638.f_14136[Global_21872].f_99[0] = 0;
	Global_111638.f_14136[Global_21872].f_99[1] = 0;
	Global_111638.f_14136[Global_21872].f_99[2] = 0;
	return 1;
}

int func_295(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	unk_0x0674E58A79778E99(&Global_7356, 10);
	iVar0 = 3;
	if (func_289(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8063 = iParam10;
			Global_7966[3] = { func_288(iParam0) };
			Global_8043 = iParam0;
			StringCopy(&Global_8044, sParam5, 64);
			unk_0x5D96D8530B3D0904(&Global_7356, 1);
			unk_0x5D96D8530B3D0904(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

int func_296(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
	}
	if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
	{
		return 0;
	}
	func_286();
	bVar0 = true;
	if (func_285(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_248(120000);
		return 1;
	}
	return 0;
}

int func_297(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 4))
	{
		bVar0 = func_313(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_303(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam4, 3))
		{
			func_302(1);
		}
		if (unk_0xEAE0D21A50E6C7F4(iParam4, 5))
		{
			func_301(1);
		}
		func_300();
		func_251();
		func_299();
		func_298();
		return 1;
	}
	return 0;
}

void func_298()
{
	Global_2546572 = 0;
}

void func_299()
{
	Global_1370527.f_57 = 1;
	Global_1370527.f_57.f_1 = 0;
}

void func_300()
{
	Global_1370527.f_40.f_9 = 1;
}

void func_301(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x5D96D8530B3D0904(&Global_7358, 0);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_7358, 0);
	}
}

void func_302(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x5D96D8530B3D0904(&Global_7356, 20);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_7356, 20);
	}
}

int func_303(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_312(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
	return func_304(sParam3, iParam4, bParam7);
}

int func_304(char* sParam0, int iParam1, bool bParam2)
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
					func_311();
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
		if (func_346(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_310();
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
				func_265();
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
				if (func_309())
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
			if (func_308())
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
			func_307();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_306();
		func_305();
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
		func_311();
	}
	return 0;
}

void func_305()
{
	if (!func_256())
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

void func_306()
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

void func_307()
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

int func_308()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_309()
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

void func_310()
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

void func_311()
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

void func_312(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
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

int func_313(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_312(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_20853 = 1;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
	return func_304(sParam3, iParam4, bParam7);
}

int func_314(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
	}
	if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
	{
		return 0;
	}
	if (func_316(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_315();
		func_300();
		func_251();
		func_299();
		func_298();
		return 1;
	}
	return 0;
}

void func_315()
{
	Global_21823 = 0;
}

bool func_316(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_312(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 1;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 1;
	Global_20859 = 0;
	StringCopy(&Global_20953, sParam5, 24);
	Global_2621441 = 0;
	return func_304(sParam3, iParam4, bParam8);
}

int func_317(var uParam0, char* sParam1, char* sParam2)
{
	if (func_319(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_318();
		func_251();
		func_299();
		return 1;
	}
	return 0;
}

void func_318()
{
	Global_1370527.f_40.f_9 = 2;
}

bool func_319(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_312(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_304(sParam2, iParam3, 0);
}

void func_320()
{
	Global_1370527.f_55 = Global_1370527.f_40.f_1;
	Global_1370527.f_55.f_1 = Global_1370527.f_40.f_10;
}

void func_321()
{
	Global_1370527.f_40 = 1;
}

bool func_322()
{
	return Global_1370527.f_40 == 1;
}

int func_323(int iParam0, int iParam1, int iParam2)
{
	if (!func_324(iParam0))
	{
		return 0;
	}
	if (Global_1370527.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1370527.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_324(int iParam0)
{
	if (!func_325())
	{
		return 0;
	}
	if (!Global_1370527.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_325()
{
	if (Global_1370527.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_326(int iParam0)
{
	if (func_330())
	{
		return 0;
	}
	if (func_233())
	{
		return 0;
	}
	if (func_329(0))
	{
		return 0;
	}
	if (Global_1312467.f_18 != 0)
	{
		return 0;
	}
	if (Global_1662006 || func_328())
	{
		return 0;
	}
	if (!unk_0xEAE0D21A50E6C7F4(iParam0, 6))
	{
		if (func_327())
		{
			return 0;
		}
	}
	return 1;
}

bool func_327()
{
	return unk_0x4925CBEE5D8BE14B(unk_0x2B6E0A53779D29EA(), Global_1387714);
}

int func_328()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

int func_329(int iParam0)
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

bool func_330()
{
	return func_308();
}

int func_331(int iParam0, int iParam1, int iParam2)
{
	if (!func_233())
	{
		return 0;
	}
	return func_323(iParam0, iParam1, iParam2);
}

int func_332(char* sParam0, char* sParam1)
{
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x12AB0310C2281427(&cVar0);
}

bool func_333()
{
	return Global_2543673.f_1;
}

int func_334()
{
	if (Global_1370715.f_2)
	{
		return 1;
	}
	return func_335();
}

bool func_335()
{
	return func_330();
}

void func_336(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_211, 11))
	{
		switch (iParam0)
		{
			case 0:
				sLocal_396 = "FMA_KIL1";
				unk_0x5D96D8530B3D0904(&iLocal_211, 11);
				break;
			}
	}
}

int func_337(int iParam0)
{
	iVar0 = 144;
	switch (iParam0)
	{
		case 0:
			iVar0 = 12;
			break;
	}
	return iVar0;
}

void func_338(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_340(12, 3, 0);
			func_339(&uLocal_231, 1, 0, "Lester", 0, 1);
			break;
	}
}

void func_339(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_340(int iParam0, int iParam1, bool bParam2)
{
	Global_8042 = iParam0;
	if (Global_117[iParam0].f_8 != 150)
	{
		func_265();
		if (iParam1 == 4)
		{
			func_345(iParam0, 0, 1);
			func_345(iParam0, 1, 1);
			func_345(iParam0, 2, 1);
			func_344(iParam0, 0, 1);
			func_344(iParam0, 1, 1);
			func_344(iParam0, 2, 1);
		}
		else
		{
			if (func_343(iParam0, iParam1) == 1 && func_342(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_345(iParam0, iVar0, 1);
			func_344(iParam0, iVar0, 1);
		}
		if (bParam2)
		{
			if (!Global_76622)
			{
				if (iParam1 != 4)
				{
					if (Global_19486 != iParam1)
					{
						Global_8015[iParam1] = { func_288(iParam0) };
						Global_8032[iParam1] = 1;
						Global_8037[iParam1] = iParam0;
					}
					else if (iParam0 == Global_19486)
					{
					}
					else
					{
						Global_7966[1] = { func_288(iParam0) };
						Global_7966[1].f_5 = iParam1;
						func_341();
					}
				}
				else
				{
					Global_7966[1] = { func_288(iParam0) };
					Global_7966[1].f_5 = iParam1;
					func_341();
				}
			}
			else
			{
				Global_7966[1] = { func_288(iParam0) };
				Global_7966[1].f_5 = iParam1;
				func_341();
			}
		}
	}
}

void func_341()
{
	StringCopy(&cVar0, unk_0x19C9F30A7697B43C(&(Global_1798[Global_8042].f_7)), 64);
	if (Global_8061 == 0)
	{
		unk_0x1E64CE678ED5F61E("");
		StringCopy(&cVar16, unk_0x19C9F30A7697B43C(&(Global_7966[1])), 64);
		sVar32 = unk_0x19C9F30A7697B43C("CELL_253");
		unk_0x1AEA174B291A9906(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x1E64CE678ED5F61E("CELL_255");
		unk_0x6B012227B3921E18(&(Global_7966[1]));
		unk_0x1AEA174B291A9906(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x0674E58A79778E99(&Global_7356, 0);
}

int func_342(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0].f_24[iParam1];
}

int func_343(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0].f_12[iParam1];
}

void func_344(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0].f_24[iParam1] = iParam2;
	}
}

void func_345(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0].f_12[iParam1] = iParam2;
	}
}

bool func_346(int iParam0, int iParam1)
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

int func_347(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xFEBC1E4EC9E001F0())
	{
		return 0;
	}
	if (func_353())
	{
		return 0;
	}
	if (!unk_0x0F1CCD77290EE12F())
	{
		return 0;
	}
	if (func_352())
	{
		return 0;
	}
	if (func_362())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_51(unk_0xD803B885F5E47A62(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_50(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	if (func_351())
	{
		return 0;
	}
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return 0;
	}
	if (unk_0x798A3F1296751F46())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	if (Global_1574184)
	{
		return 0;
	}
	if (func_350())
	{
		return 0;
	}
	if (func_349())
	{
		return 0;
	}
	if (func_360())
	{
		return 0;
	}
	if (Global_73825)
	{
		return 0;
	}
	if (Global_2547056)
	{
		return 0;
	}
	if (func_348(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	return 1;
}

int func_348(int iParam0)
{
	if (!unk_0x8CD06866876216F2())
	{
		return 0;
	}
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return Global_2513889;
	}
	else
	{
		iVar0 = unk_0x9539D44F3E4492F6(iParam0);
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			iVar1 = unk_0x134B62B726CEC8E6(iVar0);
			if (iVar1 == 1885233650 || iVar1 == -1667301416)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_349()
{
	return Global_2450632.f_591;
}

bool func_350()
{
	return Global_2450632.f_744;
}

bool func_351()
{
	return Global_2439138.f_3047.f_578;
}

bool func_352()
{
	return unk_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

int func_353()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

int func_354()
{
	iVar0 = Global_1388048[func_153(-1)];
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 8))
	{
		return 1;
	}
	return 0;
}

void func_355(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0xE5DBF9B6126856CA(Local_73.f_12[0]))
			{
				Global_2439138.f_3766.f_1[0] = unk_0xB177666FAB6F4417(Local_73.f_12[0]);
			}
			if (unk_0xE5DBF9B6126856CA(Local_73.f_9[0]))
			{
				Global_2439138.f_3766.f_4[0] = unk_0x1B50683925F00106(Local_73.f_9[0]);
			}
			break;
	}
}

int func_356(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0xE5DBF9B6126856CA(Local_73.f_12[0]) && unk_0xE5DBF9B6126856CA(Local_73.f_9[0]))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_357(int iParam0, bool bParam1)
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

int func_358(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_359())
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

bool func_359()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

bool func_360()
{
	return Global_1590535[unk_0xD803B885F5E47A62()].f_196 != 0;
}

int func_361()
{
	return Global_1590535[unk_0xD803B885F5E47A62()].f_197;
}

bool func_362()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 0);
}

void func_363(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0 = 1975453628;
	Param0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam14 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Param0, 14, iParam14);
	}
}

int func_364(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
		{
			iVar2 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar1));
			if (func_388(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_365()
{
	if (vLocal_112[unk_0x57270EE11514DC67()].f_2 >= 5 && vLocal_112[unk_0x57270EE11514DC67()].f_2 < 6)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_73, 4))
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_211, 3))
			{
				if (func_388(Local_73.f_8, 0, 1))
				{
					func_366("FM_TGDM_KIL", Local_73.f_8, 0, 0, 0, 1, 0);
				}
				unk_0x5D96D8530B3D0904(&iLocal_211, 3);
			}
		}
	}
}

int func_366(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	iVar0 = -1;
	iVar1 = unk_0x08067D4957B73C02(iParam1);
	if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0x6E524813889AECF8(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0x6E524813889AECF8(iParam1), 64);
		}
		if (unk_0xEA6BC48857E0AC4C(&Var2))
		{
		}
		unk_0x1E64CE678ED5F61E(sParam0);
		if ((iVar1 != -1 && unk_0xA14BB9332558B949()) && iVar1 < 4)
		{
			if (Global_4456448.f_190067[iVar1] != -1)
			{
				unk_0x3A820E495A7BA3E5(func_117(iVar1, iParam1, 0));
			}
			else
			{
				unk_0x3A820E495A7BA3E5(func_91(iParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			unk_0x3A820E495A7BA3E5(func_91(iParam1, -2, 1, 0, 0));
		}
		unk_0xD06AC7C87A34A6AD(func_89(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0x47AFB2993A42BD03(0, 1);
		}
		else
		{
			Global_2513218 = { func_145(iParam1) };
			if (unk_0xD9DA83C40D038174(&Global_2513148, 35, &Global_2513218))
			{
				iVar18 = 0;
				if (unk_0x7F8A39872A07D2CE(&(Global_2513148.f_22), "Leader") && Global_2513148.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2513148.f_21 > 0)
				{
					iVar19 = 0;
				}
				else
				{
					iVar19 = 1;
				}
				if (bParam5)
				{
					if (bParam6)
					{
						Var2 = { func_367(&Var2) };
					}
					iVar0 = unk_0x0D020422A92A2236(iVar19, unk_0x95A6C443DD6B08B2(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, iVar18, 0, Global_2513148, &Var2, Global_1314034, Global_1314035, Global_1314036);
				}
				else
				{
					iVar0 = unk_0xDCEBC63DB246F9AE(iVar19, unk_0x95A6C443DD6B08B2(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, iVar18, 0, Global_2513148, Global_1314034, Global_1314035, Global_1314036);
				}
			}
			else
			{
				iVar0 = unk_0x47AFB2993A42BD03(0, 1);
			}
		}
		func_85(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_367(char* sParam0)
{
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_368()
{
	iVar0 = unk_0x57270EE11514DC67();
	if (iLocal_221 != Local_73.f_15)
	{
		iLocal_221 = Local_73.f_15;
		unk_0x28E5F00F131890E3(iLocal_221);
	}
	if (iLocal_222 != Local_73.f_16)
	{
		iLocal_222 = Local_73.f_16;
		unk_0x0BEC04ECA8485A3A(iLocal_222);
	}
	if (func_388(unk_0xD803B885F5E47A62(), 0, 1))
	{
		if (!unk_0xEAE0D21A50E6C7F4(vLocal_112[iVar0], 0))
		{
			if (vLocal_112[unk_0x57270EE11514DC67()].f_2 == 0)
			{
				if (func_361() == 0)
				{
					unk_0x5D96D8530B3D0904(&(vLocal_112[iVar0]), 0);
				}
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(vLocal_112[iVar0], 0))
		{
			if ((func_51(unk_0xD803B885F5E47A62(), 1, 0) || func_48(unk_0xD803B885F5E47A62())) || func_361() > 0)
			{
				func_42(&uLocal_212);
				unk_0x0674E58A79778E99(&(vLocal_112[iVar0]), 0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_211, 7))
					{
						unk_0x5D96D8530B3D0904(&iLocal_211, 7);
						func_376();
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(iLocal_211, 7))
				{
					unk_0x0674E58A79778E99(&iLocal_211, 7);
					if (!func_49(unk_0xD803B885F5E47A62(), 0))
					{
						func_374();
					}
				}
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(vLocal_112[iVar0], 3))
		{
			if (vLocal_112[unk_0x57270EE11514DC67()].f_2 > 3 && vLocal_112[unk_0x57270EE11514DC67()].f_2 < 6)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_2439138.f_3766, 1))
				{
					unk_0x5D96D8530B3D0904(&(vLocal_112[iVar0]), 3);
				}
			}
		}
		if (vLocal_112[unk_0x57270EE11514DC67()].f_2 > 3)
		{
			if (!unk_0xEAE0D21A50E6C7F4(vLocal_112[unk_0x57270EE11514DC67()], 5))
			{
				if (func_373(Local_73.f_5))
				{
					unk_0x5D96D8530B3D0904(&(vLocal_112[unk_0x57270EE11514DC67()]), 5);
				}
			}
			else if (!func_373(Local_73.f_5))
			{
				unk_0x0674E58A79778E99(&(vLocal_112[unk_0x57270EE11514DC67()]), 5);
			}
			if (!unk_0xEAE0D21A50E6C7F4(vLocal_112[unk_0x57270EE11514DC67()], 6))
			{
				if (func_370(Local_73.f_5))
				{
					unk_0x5D96D8530B3D0904(&(vLocal_112[unk_0x57270EE11514DC67()]), 6);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(vLocal_112[unk_0x57270EE11514DC67()], 8))
			{
				if (func_369())
				{
					unk_0x5D96D8530B3D0904(&(vLocal_112[unk_0x57270EE11514DC67()]), 8);
				}
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_211, 13))
		{
			if (unk_0xE5DBF9B6126856CA(Local_73.f_9[0]))
			{
				if (!func_40(Local_73.f_9[0]))
				{
					unk_0xE2F0767314863BD8(unk_0x1B50683925F00106(Local_73.f_9[0]), 1, 0);
					unk_0x5D96D8530B3D0904(&iLocal_211, 13);
				}
			}
		}
	}
}

int func_369()
{
	if (unk_0xE5DBF9B6126856CA(Local_73.f_12[0]))
	{
		if (func_9(Local_73.f_12[0]))
		{
			if (unk_0x7B5606C651AB51B5(unk_0xB177666FAB6F4417(Local_73.f_12[0]), 0, 7000) || unk_0x7B5606C651AB51B5(unk_0xB177666FAB6F4417(Local_73.f_12[0]), 1, 40000))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_370(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0xE5DBF9B6126856CA(Local_73.f_9[0]))
			{
				if (!func_40(Local_73.f_9[0]))
				{
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (func_371(unk_0x1B50683925F00106(Local_73.f_9[0])))
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_371(int iParam0)
{
	if (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	if (func_372())
	{
		if (unk_0x38AF5DD0BDDE9545(unk_0xD803B885F5E47A62(), &iVar0))
		{
			if (unk_0xEC560E589DF8370E(iVar0))
			{
				iVar1 = unk_0x940C1429253D3B1B(iVar0);
				if (unk_0xC844350D5D58C99A(iVar1))
				{
					if (!unk_0x437347B10A200C4B(iVar1, 0))
					{
						if (unk_0x405E212DDE472467(iVar1, 0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_372()
{
	return Global_1574404;
}

int func_373(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0xE5DBF9B6126856CA(Local_73.f_9[0]))
			{
				if (!func_40(Local_73.f_9[0]))
				{
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(unk_0x1B50683925F00106(Local_73.f_9[0]), 1)) < 40000f)
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

void func_374()
{
	if (!Global_1312575)
	{
		return;
	}
	func_375();
}

void func_375()
{
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
}

void func_376()
{
	Global_1312575 = 1;
	StringCopy(&(Global_1312575.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_1312575.f_9 = unk_0x12AB0310C2281427(&(Global_1312575.f_1));
}

void func_377()
{
	switch (Local_73.f_6)
	{
		case 1:
			if (unk_0xBFF81ED3B99522C7())
			{
				if (unk_0xE5DBF9B6126856CA(Local_73.f_12[0]))
				{
					if (func_9(Local_73.f_12[0]))
					{
						if (!func_40(Local_73.f_9[0]))
						{
							if (unk_0x82CCEAB29E9451DD(unk_0x1B50683925F00106(Local_73.f_9[0]), unk_0xB177666FAB6F4417(Local_73.f_12[0])))
							{
								if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_9[0]), -258271821) != 1 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_9[0]), -258271821) != 0)
								{
									unk_0xE072601B4380E9DF(unk_0x1B50683925F00106(Local_73.f_9[0]), unk_0xB177666FAB6F4417(Local_73.f_12[0]), 20f, 786603);
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (unk_0xBFF81ED3B99522C7())
			{
				if (unk_0xE5DBF9B6126856CA(Local_73.f_12[0]))
				{
					if (unk_0xE5DBF9B6126856CA(Local_73.f_9[0]))
					{
						if (func_9(Local_73.f_12[0]))
						{
							if (!func_40(Local_73.f_9[0]))
							{
								if (unk_0x82CCEAB29E9451DD(unk_0x1B50683925F00106(Local_73.f_9[0]), unk_0xB177666FAB6F4417(Local_73.f_12[0])))
								{
									if ((unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_9[0]), -258271821) != 1 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_9[0]), -258271821) != 0) || unk_0xEAE0D21A50E6C7F4(Local_73, 9))
									{
										unk_0xE072601B4380E9DF(unk_0x1B50683925F00106(Local_73.f_9[0]), unk_0xB177666FAB6F4417(Local_73.f_12[0]), 30f, 786469);
										if (unk_0xEAE0D21A50E6C7F4(Local_73, 9))
										{
											unk_0x0674E58A79778E99(&Local_73, 9);
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (unk_0xE5DBF9B6126856CA(Local_73.f_9[0]))
			{
				if (!func_40(Local_73.f_9[0]))
				{
					if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_9[0]), -828834893) != 1 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_9[0]), -828834893) != 0)
					{
						if (func_381(Local_73.f_9[0]))
						{
							if (unk_0x526BC32A660C89E6(Local_73.f_9[0]))
							{
								unk_0x75CDA8644CD3B5F5(unk_0x1B50683925F00106(Local_73.f_9[0]), 0, 0);
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (unk_0xE5DBF9B6126856CA(Local_73.f_9[0]))
			{
				if (!func_40(Local_73.f_9[0]))
				{
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_9[0]), 1805844857) != 1 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_9[0]), 1805844857) != 0)
						{
							if (func_381(Local_73.f_9[0]))
							{
								if (unk_0x526BC32A660C89E6(Local_73.f_9[0]))
								{
									unk_0xF3268524E9BE6D6E(unk_0x1B50683925F00106(Local_73.f_9[0]), unk_0x16F2683693E537C9(), 500f, -1, 0, 1);
								}
							}
						}
					}
				}
			}
			break;
	}
	if (unk_0xE5DBF9B6126856CA(Local_73.f_9[0]))
	{
		if ((vLocal_112[unk_0x57270EE11514DC67()].f_2 >= 5 && vLocal_112[unk_0x57270EE11514DC67()].f_2 < 6) && !func_186(unk_0xD803B885F5E47A62(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
		{
			func_378(Local_73.f_9[0], &Local_223, -1082130432, 0, 1, 0, 0, -1, -1, 1);
		}
		else
		{
			func_62(&Local_223);
		}
	}
}

void func_378(int iParam0, int iParam1, float fParam2, bool bParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		if (func_380())
		{
			Global_2439138 = unk_0xD803B885F5E47A62();
		}
		if (bParam3)
		{
			func_379(unk_0x1B50683925F00106(iParam0), iParam1, 1, Global_2439138, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_379(unk_0x1B50683925F00106(iParam0), iParam1, -1, Global_2439138, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0xE4EDC4B0E92C078B(*iParam1))
	{
		func_62(iParam1);
	}
}

int func_379(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xA30EC016B12C03E4();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (!unk_0x3C583F939C836C5C(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0xA29E145196B9739D(iParam0, 1);
			}
			else
			{
				unk_0xE23B4401F4442A7E(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x03E7282D82C7B3B6(iParam0, iParam2);
			unk_0xF8BE15A7B963DB56(iParam0, fParam6);
			if (unk_0xE4EDC4B0E92C078B(*uParam1))
			{
				unk_0x2A065371C9D96655(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0xFABCB9076292E3BA(iParam0, iParam9);
		}
		unk_0xF947FFD8DA795A7F(iParam0, iParam4);
		unk_0xB46A36D2F28E60DE(iParam0, iParam5);
		*uParam1 = unk_0x380B922C6BB1F223(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xE4EDC4B0E92C078B(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x61755AC17D8F538E(*uParam1, iParam8);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam7))
				{
					unk_0x64399B11CDD5A727("STRING");
					if (bParam10)
					{
						unk_0xD06AC7C87A34A6AD(sParam7);
					}
					else
					{
						unk_0x6B012227B3921E18(sParam7);
					}
					unk_0x4FA118D51B4F2476(*uParam1);
				}
				unk_0x2A065371C9D96655(*uParam1, 7);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_6, 2))
		{
			if (unk_0xE4EDC4B0E92C078B(*uParam1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x405E212DDE472467(iParam0, 0))
		{
			uParam1->f_1 = unk_0x498C79575FE5BBCE(iParam0);
			if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_6, 3))
			{
				if (unk_0xE4EDC4B0E92C078B(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x61755AC17D8F538E(uParam1->f_1, iParam8);
					}
					if (!unk_0xEA6BC48857E0AC4C(sParam7))
					{
						unk_0x64399B11CDD5A727("STRING");
						if (bParam10)
						{
							unk_0xD06AC7C87A34A6AD(sParam7);
						}
						else
						{
							unk_0x6B012227B3921E18(sParam7);
						}
						unk_0x4FA118D51B4F2476(uParam1->f_1);
					}
					unk_0x2A065371C9D96655(uParam1->f_1, 7);
					unk_0x5D96D8530B3D0904(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0xE4EDC4B0E92C078B(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0x0674E58A79778E99(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0xE4EDC4B0E92C078B(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x0674E58A79778E99(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_380()
{
	return Global_1312854;
}

int func_381(int iParam0)
{
	if (unk_0x83F012E6200426DB(iParam0))
	{
		return 1;
	}
	if (func_382(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_382(int iParam0)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return 0;
	}
	if (!unk_0xE5DBF9B6126856CA(iParam0))
	{
		return 0;
	}
	if (func_383(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_383(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		unk_0x8D30F6387EE75385(iParam0);
		return unk_0x526BC32A660C89E6(iParam0);
	}
	return 0;
}

int func_384()
{
	return Local_73.f_1;
}

int func_385(int iParam0)
{
	return vLocal_112[iParam0].f_1;
}

void func_386()
{
	func_55();
	func_357(11, 0);
	func_206(12, 116);
	unk_0x0674E58A79778E99(&(Global_2439138.f_3766), 0);
	unk_0x0674E58A79778E99(&(Global_2439138.f_3766), 1);
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0x57270EE11514DC67() > -1)
		{
			vLocal_112[unk_0x57270EE11514DC67()] = 0;
		}
	}
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			if (unk_0x23002DD5E7B94FD7(Local_73.f_3))
			{
				unk_0xBD63401BCCEC233B(Local_73.f_3);
			}
			Local_73.f_3 = -1;
		}
	}
	if (unk_0xE4EDC4B0E92C078B(Global_1661975))
	{
		unk_0x142CC44DB769B57E(&Global_1661975);
	}
	unk_0x0674E58A79778E99(&iLocal_211, 3);
	unk_0x0674E58A79778E99(&iLocal_211, 4);
	iLocal_210 = 0;
	if (unk_0xE4EDC4B0E92C078B(Local_223))
	{
		unk_0x142CC44DB769B57E(&Local_223);
	}
	func_387();
}

void func_387()
{
	unk_0x10FAF14A60A0DBE1();
}

int func_388(int iParam0, bool bParam1, bool bParam2)
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

int func_389()
{
	func_397(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_396())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_395())
	{
		return 1;
	}
	if (func_394(159))
	{
		if (!func_393())
		{
			return 1;
		}
	}
	if (func_394(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_390() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_390()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_390()
{
	switch (func_392())
	{
		case 0:
			return func_391();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_391()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_392()
{
	return Global_30768;
}

bool func_393()
{
	return Global_2450632.f_598;
}

int func_394(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_395()
{
	return Global_2460680;
}

bool func_396()
{
	return Global_2450632.f_593;
}

void func_397(var uParam0)
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
					func_398(iVar0);
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

void func_398(int iParam0)
{
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_388(vVar0.y, 1, 1))
		{
			iVar3 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar3))
			{
				if (unk_0x405E212DDE472467(iVar3, 0))
				{
					iVar4 = unk_0x6937EA2286828455(iVar3, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar4, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_399(iVar4, &bVar5))
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

int func_399(int iParam0, var uParam1)
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

void func_400()
{
	wait(0);
}

void func_401(struct<21> Param0)
{
	func_404(func_405(Param0), Param0);
	func_403(0, -1, 0);
	unk_0x9752E7BAEABA939E(&Local_73, 23);
	unk_0x35B62793EAE9ADDF(&vLocal_112, 97);
	unk_0x256D93AFAE851A7A(0);
	if (!func_402())
	{
		func_386();
	}
	unk_0x5D96D8530B3D0904(&(Global_2439138.f_3766), 0);
	unk_0x0674E58A79778E99(&(Global_2439138.f_3766), 1);
}

int func_402()
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
		if (func_396())
		{
			return 0;
		}
		if (func_394(157))
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

int func_403(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_387();
			}
			else
			{
				return 0;
			}
		}
		if (!func_380())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_387();
					}
					else
					{
						return 0;
					}
				}
				if (func_396())
				{
					if (!bParam2)
					{
						func_387();
					}
					else
					{
						return 0;
					}
				}
				if (func_394(157))
				{
					if (!bParam2)
					{
						func_387();
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
					func_387();
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
				func_387();
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
			func_387();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_404(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_387();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

int func_405(int iParam0)
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

