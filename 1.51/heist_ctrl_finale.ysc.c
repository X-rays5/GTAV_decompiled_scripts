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
	fLocal_21 = 0f;
	fLocal_25 = -0,0375f;
	fLocal_26 = 0,17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_36 = 202;
	iLocal_37 = 201;
	iLocal_38 = 24;
	iLocal_39 = 202;
	iLocal_40 = 25;
	sLocal_42 = "";
	iLocal_44 = -1;
	iLocal_45 = -1;
	iLocal_46 = -1;
	iLocal_48 = -1;
	iLocal_49 = -1;
	iLocal_180 = -1;
	if (unk_0x2EBF608FFE6CA406(82))
	{
		func_412();
	}
	func_411(2);
	func_399(&(Local_182.f_1), func_410(Global_94773[8], Global_94773[9]));
	func_398(&Local_182, 4);
	func_397(4, 0, 1);
	func_396(0);
	while (!func_395(3))
	{
		if (!Global_76891 && !func_394(14))
		{
			func_380(&Local_182, 10f, 18f);
			func_378(&Local_182);
			func_220();
			func_152();
			if (func_150(0) || unk_0xEAE0D21A50E6C7F4(Local_182.f_449, 2))
			{
				func_68(&Local_182);
				func_5(&Local_182);
				func_4(&Local_182);
			}
		}
		if (unk_0x8A22C4C08282BF26(-618416399) > 0 || unk_0x8A22C4C08282BF26(-924773780) > 0)
		{
			func_3();
		}
		if (func_395(34))
		{
			if (!func_2(0))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_120[4], 9))
				{
					func_397(4, 9, 1);
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_120[4], 9))
			{
				func_397(4, 9, 0);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_120[4], 9))
		{
			func_397(4, 9, 0);
		}
		wait(0);
	}
	func_1(2);
	func_412();
}

int func_1(int iParam0)
{
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[iVar0], iVar1))
	{
		unk_0x0674E58A79778E99(&(Global_111638.f_9080.f_99.f_219[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

bool func_2(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

void func_3()
{
	if (Global_76882)
	{
		return;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return;
	}
	iVar0 = round((1f + (1000f * timestep())));
	Global_94964.f_8 = (Global_94964.f_8 + iVar0);
}

void func_4(var uParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_94752, *uParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 1))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_449), 15);
			unk_0x5D96D8530B3D0904(&(uParam0->f_449), 16);
			unk_0x5D96D8530B3D0904(&(uParam0->f_449), 14);
			unk_0x0674E58A79778E99(&Global_94752, *uParam0);
		}
	}
}

void func_5(var uParam0)
{
	iVar0 = func_66(func_67(*uParam0));
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return;
	}
	iVar1 = iVar0;
	if ((iVar1 != uParam0->f_464 && !(iVar1 == 2 && uParam0->f_464 == 4)) && !((*uParam0 == 1 && iVar1 == 3) && uParam0->f_464 == 4))
	{
		if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 2))
		{
			func_6(uParam0, iVar1, 0);
		}
		else
		{
			uParam0->f_464 = iVar1;
		}
	}
}

void func_6(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 != uParam0->f_464)
	{
		if (uParam0->f_680 == 0)
		{
			func_65(uParam0);
			uParam0->f_464 = iParam1;
			func_7(uParam0, iParam1, iParam2);
		}
	}
}

void func_7(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			func_64(uParam0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_449), 5);
			unk_0x0674E58A79778E99(&(uParam0->f_449), 4);
			break;
		
		case 1:
			func_64(uParam0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_449), 5);
			unk_0x0674E58A79778E99(&(uParam0->f_449), 4);
			uParam0->f_452 = -1;
			break;
		
		case 2:
			func_36(uParam0, uParam0->f_417, iParam2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_449), 5);
			unk_0x0674E58A79778E99(&(uParam0->f_449), 4);
			uParam0->f_457 = unk_0x1C0640BA9A7327B3();
			break;
		
		case 3:
			func_18(uParam0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_449), 5);
			unk_0x0674E58A79778E99(&(uParam0->f_449), 4);
			unk_0x5D96D8530B3D0904(&(uParam0->f_449), 9);
			uParam0->f_457 = unk_0x1C0640BA9A7327B3();
			break;
		
		case 4:
			func_14(&(uParam0->f_1.f_108[0]), 1);
			func_14(&(uParam0->f_1.f_108[1]), 1);
			Global_111638.f_1.f_6[*uParam0] = 1;
			unk_0xA37A90C62806D848(0);
			func_12(uParam0, 0);
			func_64(uParam0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_449), 5);
			unk_0x5D96D8530B3D0904(&(uParam0->f_449), 4);
			uParam0->f_457 = unk_0x1C0640BA9A7327B3();
			break;
	}
	func_8(uParam0);
}

void func_8(var uParam0)
{
	sVar0 = unk_0xE32F7AC5E6DF304A(2, 13, true);
	sVar1 = unk_0xE32F7AC5E6DF304A(2, 11, true);
	sVar2 = unk_0xF59058FCB716F903(0, 32, true);
	sVar3 = unk_0xE32F7AC5E6DF304A(0, 1, true);
	sVar4 = unk_0xF59058FCB716F903(2, 201, true);
	sVar5 = unk_0xF59058FCB716F903(2, 202, true);
	if (unk_0x91E3F625EF57450D(2))
	{
		sVar0 = unk_0xE32F7AC5E6DF304A(2, 6, true);
		sVar1 = unk_0xE32F7AC5E6DF304A(2, 7, true);
		sVar2 = unk_0xE32F7AC5E6DF304A(0, 29, true);
	}
	bVar6 = func_11(1, *uParam0);
	unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_MAX_WIDTH");
	unk_0x7C19E5E4784BD7CF(0,6f);
	unk_0x7E60D21B163E9D56();
	switch (uParam0->f_464)
	{
		case 0:
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 2))
			{
				if (bVar6)
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(1);
					func_10(sVar2);
					func_9("PB_H_ZOOM");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0);
					func_10(sVar3);
					func_9("PB_H_LOOK");
					unk_0x7E60D21B163E9D56();
				}
				else
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(2);
					func_10(sVar2);
					func_9("PB_H_ZOOM");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(1);
					func_10(sVar3);
					func_9("PB_H_LOOK");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0);
					func_10(sVar5);
					func_9("PB_H_EXIT");
					unk_0x7E60D21B163E9D56();
				}
				unk_0x7E60C62A7CE58FC8(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x1200CC973A2399C8(false);
				unk_0x7E60D21B163E9D56();
			}
			break;
		
		case 1:
			unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x1200CC973A2399C8(false);
			unk_0x7E60D21B163E9D56();
			break;
		
		case 2:
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 2))
			{
				unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
				unk_0x7E60D21B163E9D56();
				if (*uParam0 == 2)
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(2);
					func_10(sVar0);
					func_9("PB_H_SELCT");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(1);
					func_10(sVar3);
					func_9("PB_H_LOOK");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0);
					func_10(sVar4);
					func_9("PB_H_TRIG");
					unk_0x7E60D21B163E9D56();
				}
				else
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(3);
					func_10(sVar0);
					func_9("PB_H_SELCT");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(2);
					func_10(sVar3);
					func_9("PB_H_LOOK");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(1);
					func_10(sVar5);
					func_9("PB_H_UNDO");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0);
					func_10(sVar4);
					func_9("PB_H_TRIG");
					unk_0x7E60D21B163E9D56();
				}
				unk_0x7E60C62A7CE58FC8(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x1200CC973A2399C8(false);
				unk_0x7E60D21B163E9D56();
			}
			break;
		
		case 3:
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 2))
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 9))
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(1);
					func_10(sVar1);
					func_9("PB_H_SELCT");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0);
					func_10(sVar3);
					func_9("PB_H_LOOK");
					unk_0x7E60D21B163E9D56();
				}
				else
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(2);
					func_10(sVar1);
					func_9("PB_H_SELCT");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(1);
					func_10(sVar3);
					func_9("PB_H_LOOK");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0);
					func_10(sVar4);
					func_9("PB_H_TRIG");
					unk_0x7E60D21B163E9D56();
				}
				unk_0x7E60C62A7CE58FC8(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x1200CC973A2399C8(false);
				unk_0x7E60D21B163E9D56();
			}
			break;
		
		case 4:
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 2))
			{
				unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(3);
				func_10(sVar2);
				func_9("PB_H_ZOOM");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(2);
				func_10(sVar3);
				func_9("PB_H_LOOK");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(1);
				func_10(sVar5);
				func_9("PB_H_UNDO");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(0);
				func_10(sVar4);
				func_9("PB_H_CONF");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x1200CC973A2399C8(false);
				unk_0x7E60D21B163E9D56();
			}
			break;
	}
}

void func_9(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_10(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

bool func_11(int iParam0, int iParam1)
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

void func_12(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_449), 18);
		if (((!func_13(&(uParam0->f_1.f_20[0])) && !func_13(&(uParam0->f_1.f_20[1]))) && !func_13(&(uParam0->f_1.f_108[0]))) && !func_13(&(uParam0->f_1.f_108[1])))
		{
			unk_0xA37A90C62806D848(0);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_449), 18);
	}
}

bool func_13(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_14(char* sParam0, int iParam1)
{
	if (Global_110278 && iParam1)
	{
		if (func_13(sParam0) && !unk_0x79BBCD5833294FD5())
		{
			unk_0xA37A90C62806D848(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (unk_0x7F8A39872A07D2CE(sParam0, &(Global_111638.f_20405[iVar0])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_111638.f_20405.f_145 - 2))
			{
				func_17(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_16((Global_111638.f_20405.f_145 - 1));
			Global_111638.f_20405.f_145 = (Global_111638.f_20405.f_145 - 1);
			func_15();
			return;
		}
		iVar0++;
	}
}

void func_15()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_111638.f_20405.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0].f_11, 0))
		{
			if (Global_111638.f_20405[iVar0].f_12 > Global_111638.f_20405.f_146[0])
			{
				Global_111638.f_20405.f_146[0] = Global_111638.f_20405[iVar0].f_12;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0].f_11, 1))
		{
			if (Global_111638.f_20405[iVar0].f_12 > Global_111638.f_20405.f_146[1])
			{
				Global_111638.f_20405.f_146[1] = Global_111638.f_20405[iVar0].f_12;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0].f_11, 2))
		{
			if (Global_111638.f_20405[iVar0].f_12 > Global_111638.f_20405.f_146[2])
			{
				Global_111638.f_20405.f_146[2] = Global_111638.f_20405[iVar0].f_12;
			}
		}
		iVar0++;
	}
}

void func_16(int iParam0)
{
	StringCopy(&(Global_111638.f_20405[iParam0]), "", 16);
	StringCopy(&(Global_111638.f_20405[iParam0].f_4), "", 16);
	Global_111638.f_20405[iParam0].f_8 = 0;
	Global_111638.f_20405[iParam0].f_9 = 0;
	Global_111638.f_20405[iParam0].f_11 = 0;
	Global_111638.f_20405[iParam0].f_10 = -1;
	Global_111638.f_20405[iParam0].f_12 = 0;
	Global_111638.f_20405[iParam0].f_13 = 0;
	Global_111638.f_20405[iParam0].f_14 = 0;
	Global_111638.f_20405[iParam0].f_15 = 0;
}

void func_17(int iParam0, int iParam1)
{
	Global_111638.f_20405[iParam0] = { Global_111638.f_20405[iParam1] };
	Global_111638.f_20405[iParam0].f_4 = { Global_111638.f_20405[iParam1].f_4 };
	Global_111638.f_20405[iParam0].f_8 = Global_111638.f_20405[iParam1].f_8;
	Global_111638.f_20405[iParam0].f_10 = Global_111638.f_20405[iParam1].f_10;
	Global_111638.f_20405[iParam0].f_9 = Global_111638.f_20405[iParam1].f_9;
	Global_111638.f_20405[iParam0].f_11 = Global_111638.f_20405[iParam1].f_11;
	Global_111638.f_20405[iParam0].f_12 = Global_111638.f_20405[iParam1].f_12;
	Global_111638.f_20405[iParam0].f_13 = Global_111638.f_20405[iParam1].f_13;
	Global_111638.f_20405[iParam0].f_14 = Global_111638.f_20405[iParam1].f_14;
	Global_111638.f_20405[iParam0].f_15 = Global_111638.f_20405[iParam1].f_15;
}

void func_18(var uParam0)
{
	func_35(uParam0);
	func_32(uParam0);
	unk_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
	unk_0x3CAEA85DA607305E(uParam0->f_415);
	unk_0x7E60D21B163E9D56();
	iVar0 = func_66(func_31(*uParam0));
	if (iVar0 != 0)
	{
		if (iVar0 == func_30(*uParam0, 0))
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(8);
			unk_0x7E60D21B163E9D56();
		}
		else if (iVar0 == func_30(*uParam0, 1))
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(9);
			unk_0x7E60D21B163E9D56();
		}
	}
	Var1 = (uParam0->f_1.f_16 + uParam0->f_1.f_18);
	Var1.f_1 = (uParam0->f_1.f_16.f_1 + uParam0->f_1.f_18.f_1);
	func_26(uParam0, &Var1, uParam0->f_1.f_10);
	func_24(uParam0, 1, 1);
	func_12(uParam0, 0);
	func_19(uParam0);
}

void func_19(var uParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 7))
	{
		if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 18))
		{
			switch (uParam0->f_464)
			{
				case 3:
					if (!Global_111638.f_1[*uParam0])
					{
						if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_20[0]), ""))
						{
							func_22(&(uParam0->f_1.f_20[0]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_20[1]), ""))
						{
							func_22(&(uParam0->f_1.f_20[1]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_111638.f_1[*uParam0] = 1;
					}
					else if (func_21() && !unk_0xFEBC1E4EC9E001F0())
					{
						if (((!unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 11) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 10)) && !func_20()) && uParam0->f_483 == 0)
						{
							unk_0xB6A2CAEFEE28197D("PB_H_CHOICE");
							unk_0xBAB71DDCAEBC7FDD(0, 1, false, -1);
						}
					}
					break;
				
				case 2:
					if (!Global_111638.f_1.f_6[*uParam0])
					{
						if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_108[0]), ""))
						{
							func_22(&(uParam0->f_1.f_108[0]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_108[1]), ""))
						{
							func_22(&(uParam0->f_1.f_108[1]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_111638.f_1.f_6[*uParam0] = 1;
					}
					else if (func_21() && !unk_0xFEBC1E4EC9E001F0())
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 10))
						{
							if ((!func_13("PB_H_GUNM") && !func_13("PB_H_HACK")) && !func_13("PB_H_DRIV"))
							{
								iVar0 = func_66(func_31(*uParam0));
								if (uParam0->f_417 < 5)
								{
									if (((!unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 11) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 10)) && !func_20()) && uParam0->f_483 == 0)
									{
										switch (Global_94773[iVar0].f_1[uParam0->f_417])
										{
											case 1:
												unk_0xB6A2CAEFEE28197D("PB_H_GUNM");
												unk_0xBAB71DDCAEBC7FDD(0, 1, false, -1);
												break;
											
											case 2:
												unk_0xB6A2CAEFEE28197D("PB_H_HACK");
												unk_0xBAB71DDCAEBC7FDD(0, 1, false, -1);
												break;
											
											case 3:
												unk_0xB6A2CAEFEE28197D("PB_H_DRIV");
												unk_0xBAB71DDCAEBC7FDD(0, 1, false, -1);
												break;
											}
										}
									}
								}
							}
					}
					break;
				}
			}
	}
}

int func_20()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

int func_21()
{
	if (Global_111638.f_20405.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

void func_22(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_23(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_23(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	if (unk_0x7F8A39872A07D2CE(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (unk_0x7F8A39872A07D2CE(&(Global_111638.f_20405[iVar0]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111638.f_20405.f_145 < 9)
	{
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145]), sParam0, 16);
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145].f_4), sParam1, 16);
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_8 = (unk_0x1C0640BA9A7327B3() + iParam3);
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_9 = iParam5;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_11 = iParam6;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_12 = uParam2;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_13 = iParam7;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_14 = iParam8;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145].f_10 = ((unk_0x1C0640BA9A7327B3() + iParam3) + iParam4);
		}
		else
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145].f_10 = -1;
		}
		Global_111638.f_20405.f_145++;
		func_15();
	}
}

void func_24(var uParam0, int iParam1, int iParam2)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1.f_303, iParam1))
	{
		if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_280[iParam1]), ""))
		{
			func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[iParam1], iParam2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_1.f_303), iParam1);
		}
	}
}

void func_25(var uParam0, struct<2> Param1, struct<2> Param3, int iParam5)
{
	if (uParam0->f_483 == 3)
	{
		return;
	}
	if (!unk_0xEA6BC48857E0AC4C(&Param3))
	{
		uParam0->f_467[uParam0->f_483] = { Param1 };
		uParam0->f_467[uParam0->f_483].f_2 = { Param3 };
		uParam0->f_467[uParam0->f_483].f_4 = iParam5;
		uParam0->f_483++;
	}
}

void func_26(var uParam0, var uParam1, float fParam2)
{
	uParam0->f_411 = *uParam1;
	uParam0->f_411.f_1 = uParam1->f_1;
	uParam0->f_454 = unk_0x1C0640BA9A7327B3() + 1000;
	vVar0 = { func_28(uParam0, &(uParam0->f_411)) };
	func_27(&(uParam0->f_649), vVar0, fParam2);
}

void func_27(var uParam0, vector3 vParam1, float fParam4)
{
	uParam0->f_11 = { vParam1 };
	if (fParam4 != -1f)
	{
		uParam0->f_7 = fParam4;
	}
}

Vector3 func_28(var uParam0, var uParam1)
{
	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_29(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0,5f));
	fVar5 = (-fVar1 * (fVar3 - 0,5f));
	fVar6 = uParam0->f_404;
	vVar7 = { uParam0->f_401 };
	vVar7 = { vVar7 + Vector(fVar5, (fVar4 * cos((90f - fVar6))), (fVar4 * sin((90f - fVar6)))) };
	fVar10 = fVar4;
	fVar11 = unk_0x10FCEF75D66B7A3B((fVar10 / uParam0->f_1.f_8));
	fVar12 = (uParam0->f_401.f_2 - uParam0->f_649.f_1.f_2);
	fVar13 = (vVar7.z - uParam0->f_649.f_1.f_2);
	fVar14 = (fVar13 - fVar12);
	fVar15 = unk_0x10FCEF75D66B7A3B((fVar14 / uParam0->f_1.f_8));
	fVar16 = ((fVar11 * 3f) / 18f);
	return (fVar15 * 0,95f), fVar16, (-fVar11 * 0,85f);
}

void func_29(var uParam0, var uParam1, var uParam2, var uParam3)
{
	iVar0 = uParam0->f_1.f_2;
	iVar1 = uParam0->f_1.f_3;
	if (*uParam1 < 0 || *uParam1 > iVar0)
	{
		return;
	}
	if (uParam1->f_1 < 0 || uParam1->f_1 > iVar1)
	{
		return;
	}
	*uParam2 = (to_float(*uParam1) / to_float(iVar0));
	*uParam3 = (to_float(uParam1->f_1) / to_float(iVar1));
}

int func_30(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				default:
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 5;
					break;
				
				default:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 6;
					break;
				
				case 1:
					return 7;
					break;
				
				default:
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 8;
					break;
				
				case 1:
					return 9;
					break;
				
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_31(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = 7;
			break;
		
		case 1:
			iVar0 = 8;
			break;
		
		case 2:
			iVar0 = 9;
			break;
		
		case 3:
			iVar0 = 10;
			break;
		
		case 4:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

void func_32(var uParam0)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_413, "CREATE_VIEW");
	unk_0x3CAEA85DA607305E(uParam0->f_415);
	unk_0x3CAEA85DA607305E(1);
	unk_0x7C19E5E4784BD7CF(to_float(uParam0->f_1.f_16));
	unk_0x7C19E5E4784BD7CF(to_float(uParam0->f_1.f_16.f_1));
	unk_0x7E60D21B163E9D56();
	func_34(uParam0);
	switch (*uParam0)
	{
		case 0:
			unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(uParam0->f_415);
			unk_0x3CAEA85DA607305E(0);
			unk_0x3CAEA85DA607305E(2);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(uParam0->f_415);
			unk_0x3CAEA85DA607305E(1);
			unk_0x3CAEA85DA607305E(1);
			unk_0x7E60D21B163E9D56();
			break;
		
		case 1:
			unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(uParam0->f_415);
			unk_0x3CAEA85DA607305E(0);
			unk_0x3CAEA85DA607305E(3);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(uParam0->f_415);
			unk_0x3CAEA85DA607305E(1);
			unk_0x3CAEA85DA607305E(4);
			unk_0x7E60D21B163E9D56();
			break;
		
		case 3:
			unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(uParam0->f_415);
			unk_0x3CAEA85DA607305E(0);
			unk_0x3CAEA85DA607305E(6);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(uParam0->f_415);
			unk_0x3CAEA85DA607305E(1);
			unk_0x3CAEA85DA607305E(7);
			unk_0x7E60D21B163E9D56();
			break;
		
		case 4:
			unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(uParam0->f_415);
			unk_0x3CAEA85DA607305E(0);
			unk_0x3CAEA85DA607305E(8);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(uParam0->f_415);
			unk_0x3CAEA85DA607305E(1);
			unk_0x3CAEA85DA607305E(9);
			unk_0x7E60D21B163E9D56();
			break;
	}
	unk_0x7E60C62A7CE58FC8(uParam0->f_413, "DISPLAY_VIEW");
	unk_0x3CAEA85DA607305E(uParam0->f_415);
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_VIEW");
	unk_0x3CAEA85DA607305E(uParam0->f_415);
	unk_0x1200CC973A2399C8(func_33(*uParam0, uParam0->f_1.f_29));
	unk_0x7E60D21B163E9D56();
	iVar0 = func_66(func_31(*uParam0));
	if (iVar0 != 0)
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
		unk_0x3CAEA85DA607305E(uParam0->f_415);
		unk_0x7E60D21B163E9D56();
		if (iVar0 == func_30(*uParam0, 0))
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(8);
			unk_0x7E60D21B163E9D56();
		}
		else if (iVar0 == func_30(*uParam0, 1))
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(9);
			unk_0x7E60D21B163E9D56();
		}
		unk_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
		unk_0x3CAEA85DA607305E(99);
		unk_0x7E60D21B163E9D56();
	}
}

bool func_33(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_120[iParam0], iParam1);
}

void func_34(var uParam0)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_LABELS");
	func_9("H_CRW_NAME");
	func_9("H_CRW_TYPE");
	func_9("H_CRW_SKILLS");
	switch (*uParam0)
	{
		case 0:
			func_9("H_LBL_JWL");
			break;
		
		case 1:
			func_9("H_LBL_DOC");
			break;
		
		case 2:
			func_9("H_LBL_RUR");
			break;
		
		case 3:
			func_9("H_LBL_AGN");
			break;
		
		case 4:
			func_9("H_LBL_FA");
			func_9("H_LBL_FB");
			break;
	}
	if (*uParam0 != 1)
	{
		func_9("H_LBL_CRW");
	}
	func_9("H_LBL_TODO");
	if (*uParam0 != 2)
	{
		func_9("H_LBL_APP");
	}
	switch (*uParam0)
	{
		case 0:
			func_9("H_LBL_J1");
			func_9("H_LBL_J2");
			func_9("H_LBL_J3");
			func_9("H_LBL_J4");
			func_9("HC_J_IMPACT");
			func_9("HC_J_STEALTH");
			break;
		
		case 1:
			func_9("HC_D_BLOW_UP");
			func_9("HC_D_DEEP_SEA");
			break;
		
		case 2:
			func_9("H_LBL_R1");
			func_9("H_LBL_R2");
			func_9("H_LBL_R3");
			func_9("H_LBL_R4");
			func_9("H_LBL_R5");
			func_9("H_LBL_R6");
			func_9("H_LBL_R7");
			func_9("H_LBL_R8");
			func_9("H_LBL_R9");
			func_9("H_LBL_R10");
			func_9("H_LBL_R11");
			func_9("H_LBL_R12");
			break;
		
		case 3:
			func_9("H_LBL_A1");
			func_9("H_LBL_A2");
			func_9("H_LBL_A3");
			func_9("H_LBL_A4");
			func_9("H_LBL_A5");
			func_9("HC_A_FIRETRUCK");
			func_9("HC_A_HELICOPTER");
			break;
		
		case 4:
			func_9("H_LBL_F1");
			func_9("H_LBL_F2");
			func_9("H_LBL_F3");
			func_9("H_LBL_F4");
			func_9("H_LBL_F5");
			func_9("HC_F_TRAFFCONT");
			func_9("HC_F_HELI");
			break;
	}
	unk_0x7E60D21B163E9D56();
}

void func_35(var uParam0)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	unk_0x3CAEA85DA607305E(uParam0->f_415);
	unk_0x7E60D21B163E9D56();
}

void func_36(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_1.f_96)
	{
		return;
	}
	func_24(uParam0, 2, 1);
	iVar0 = func_66(func_31(*uParam0));
	iVar1 = Global_94773[iVar0].f_1[iParam1];
	switch (iVar1)
	{
		case 1:
			func_63(uParam0, iVar0, 1);
			break;
		
		case 2:
			func_63(uParam0, iVar0, 3);
			break;
		
		case 3:
			func_63(uParam0, iVar0, 2);
			break;
	}
	func_62(uParam0, uParam0->f_417);
	func_37(uParam0, uParam0->f_417);
	uParam0->f_450 = iParam1;
	unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_VIEW");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x1200CC973A2399C8(true);
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x7E60D21B163E9D56();
	func_26(uParam0, &(uParam0->f_1.f_97[iParam1]), uParam0->f_1.f_10);
	if (iParam2 != 0)
	{
		iVar2 = 0;
		while (uParam0->f_418[iVar2] != iParam2)
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(9);
			unk_0x7E60D21B163E9D56();
			iVar2++;
			if (iVar2 > 7)
			{
				return;
			}
		}
	}
	func_12(uParam0, 0);
	func_19(uParam0);
}

void func_37(var uParam0, int iParam1)
{
	iVar0 = func_31(*uParam0);
	iVar1 = func_66(iVar0);
	iVar2 = Global_94773[iVar1].f_1[iParam1];
	unk_0x7E60C62A7CE58FC8(uParam0->f_413, "CREATE_VIEW");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(0);
	unk_0x7C19E5E4784BD7CF(to_float(uParam0->f_1.f_97[iParam1]));
	unk_0x7C19E5E4784BD7CF(to_float(uParam0->f_1.f_97[iParam1].f_1));
	unk_0x7E60D21B163E9D56();
	func_34(uParam0);
	iVar3 = 0;
	if (Global_111638.f_1.f_12[iVar1][iParam1] != 0)
	{
		iVar4 = Global_111638.f_1.f_12[iVar1][iParam1];
		func_42(uParam0->f_413, iVar4, iParam1, iVar3, iVar4);
	}
	else
	{
		iVar5 = 0;
		while (iVar5 < 14)
		{
			iVar6 = iVar5;
			if (func_41(iVar6) == iVar2)
			{
				if (func_40(iVar6))
				{
					if (!func_39(iVar6))
					{
						if (!func_38(uParam0, iVar6))
						{
							if (!(iVar6 == 11 && *uParam0 == 3))
							{
								func_42(uParam0->f_413, iVar6, iParam1, iVar3, iVar5);
								uParam0->f_418[iVar3] = iVar6;
								iVar3++;
							}
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (Global_111638.f_1.f_12[iVar1][iParam1] != 0)
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_VIEW");
		unk_0x3CAEA85DA607305E(iParam1);
		unk_0x1200CC973A2399C8(true);
		unk_0x7E60D21B163E9D56();
	}
	else
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_VIEW");
		unk_0x3CAEA85DA607305E(iParam1);
		unk_0x1200CC973A2399C8(false);
		unk_0x7E60D21B163E9D56();
	}
	unk_0x7E60C62A7CE58FC8(uParam0->f_413, "DISPLAY_VIEW");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x7E60D21B163E9D56();
}

int func_38(var uParam0, int iParam1)
{
	iVar0 = func_66(func_31(*uParam0));
	iVar1 = 0;
	while (iVar1 < uParam0->f_417)
	{
		if (Global_111638.f_1.f_12[iVar0][iVar1] == iParam1)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

bool func_39(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_118, iParam0);
}

bool func_40(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_116, iParam0);
}

int func_41(int iParam0)
{
	return Global_94619[iParam0];
}

void func_42(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x3CAEA85DA607305E(iParam3);
	unk_0x3CAEA85DA607305E(iParam4);
	func_9(func_60(iParam1));
	func_9(func_59(iParam1));
	switch (func_41(iParam1))
	{
		case 1:
			func_9(func_58(0));
			unk_0x3CAEA85DA607305E(func_55(iParam1, 0));
			func_9(func_58(1));
			unk_0x3CAEA85DA607305E(func_55(iParam1, 1));
			func_9(func_58(2));
			unk_0x3CAEA85DA607305E(func_55(iParam1, 2));
			func_9(func_58(3));
			unk_0x3CAEA85DA607305E(func_55(iParam1, 3));
			break;
		
		case 2:
			func_9(func_54(0));
			unk_0x3CAEA85DA607305E(func_51(iParam1, 0));
			func_9(func_54(1));
			unk_0x3CAEA85DA607305E(func_51(iParam1, 1));
			func_9(func_54(2));
			unk_0x3CAEA85DA607305E(func_51(iParam1, 2));
			break;
		
		case 3:
			func_9(func_49(0));
			unk_0x3CAEA85DA607305E(func_44(iParam1, 0));
			func_9(func_49(1));
			unk_0x3CAEA85DA607305E(func_44(iParam1, 1));
			func_9(func_49(2));
			unk_0x3CAEA85DA607305E(func_44(iParam1, 2));
			break;
	}
	func_9("H_CRW_CUT");
	unk_0x3CAEA85DA607305E(func_43(iParam1));
	unk_0x7E60D21B163E9D56();
}

var func_43(int iParam0)
{
	return Global_94619[iParam0].f_1;
}

int func_44(int iParam0, int iParam1)
{
	return round(((to_float(func_46(iParam0, iParam1)) / to_float(func_45(iParam1))) * 100f));
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 100;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
	}
	return 0;
}

int func_46(int iParam0, int iParam1)
{
	if (func_41(iParam0) != 3)
	{
		return -1;
	}
	return func_47(iParam0, iParam1);
}

int func_47(int iParam0, int iParam1)
{
	return func_48(iParam1, Global_111638.f_1.f_73[iParam0].f_1, Global_111638.f_1.f_73[iParam0].f_2);
}

int func_48(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return shift_right(iParam1, (15 * iParam0)) & 32767;
			break;
		
		case 2:
		case 3:
			return shift_right(iParam2, (15 * (iParam0 - 2))) & 32767;
			break;
	}
	return -1;
}

char* func_49(int iParam0)
{
	return func_50(3, iParam0);
}

char* func_50(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_G1";
					break;
				
				case 1:
					return "HC_STA_G2";
					break;
				
				case 2:
					return "HC_STA_G3";
					break;
				
				case 3:
					return "HC_STA_G4";
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_H1";
					break;
				
				case 1:
					return "HC_STA_H2";
					break;
				
				case 2:
					return "HC_STA_H3";
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_D1";
					break;
				
				case 1:
					return "HC_STA_D2";
					break;
				
				case 2:
					return "HC_STA_D3";
					break;
			}
			break;
	}
	return "ERROR!";
}

int func_51(int iParam0, int iParam1)
{
	return round(((to_float(func_53(iParam0, iParam1)) / to_float(func_52(iParam1))) * 100f));
}

int func_52(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 100;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
	}
	return 0;
}

int func_53(int iParam0, int iParam1)
{
	if (func_41(iParam0) != 2)
	{
		return -1;
	}
	return func_47(iParam0, iParam1);
}

char* func_54(int iParam0)
{
	return func_50(2, iParam0);
}

int func_55(int iParam0, int iParam1)
{
	return round(((to_float(func_57(iParam0, iParam1)) / to_float(func_56(iParam1))) * 100f));
}

int func_56(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1000;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
		
		case 3:
			return 100;
			break;
	}
	return 0;
}

int func_57(int iParam0, int iParam1)
{
	if (func_41(iParam0) != 1)
	{
		return -1;
	}
	return func_47(iParam0, iParam1);
}

char* func_58(int iParam0)
{
	return func_50(1, iParam0);
}

char* func_59(int iParam0)
{
	switch (Global_94619[iParam0])
	{
		case 1:
			return "HC_TYPE_G";
			break;
		
		case 2:
			return "HC_TYPE_H";
			break;
		
		case 3:
			return "HC_TYPE_D";
			break;
	}
	return "ERROR!";
}

char* func_60(int iParam0)
{
	return func_61(iParam0);
}

char* func_61(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HC_N_GUS";
			break;
		
		case 2:
			return "HC_N_KAR";
			break;
		
		case 10:
			return "HC_N_PAC";
			break;
		
		case 11:
			return "HC_N_CHE";
			break;
		
		case 3:
			return "HC_N_HUG";
			break;
		
		case 4:
			return "HC_N_NOR";
			break;
		
		case 5:
			return "HC_N_DAR";
			break;
		
		case 6:
			return "HC_N_PAI";
			break;
		
		case 7:
			return "HC_N_CHR";
			break;
		
		case 12:
			return "HC_N_RIC";
			break;
		
		case 8:
			return "HC_N_EDD";
			break;
		
		case 13:
			return "HC_N_TAL";
			break;
		
		case 9:
			return "HC_N_KRM";
			break;
	}
	return "ERROR!";
}

void func_62(var uParam0, int iParam1)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x7E60D21B163E9D56();
}

void func_63(var uParam0, int iParam1, int iParam2)
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_94773[iParam1].f_18, iParam2))
	{
		if (!unk_0x7F8A39872A07D2CE(&(Global_94773[iParam1].f_7[iParam2]), ""))
		{
			func_25(uParam0, uParam0->f_1.f_276, Global_94773[iParam1].f_7[iParam2], 1);
			unk_0x5D96D8530B3D0904(&(Global_94773[iParam1].f_18), iParam2);
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (unk_0x7F8A39872A07D2CE(&(Global_94773[iParam1].f_7[iParam2]), &(Global_94773[iVar0].f_7[iParam2])))
				{
					unk_0x5D96D8530B3D0904(&(Global_94773[iVar0].f_18), iParam2);
				}
				iVar0++;
			}
		}
	}
}

void func_64(var uParam0)
{
	func_26(uParam0, &(uParam0->f_1.f_12), 45f);
	unk_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
	unk_0x3CAEA85DA607305E(99);
	unk_0x7E60D21B163E9D56();
	func_19(uParam0);
}

void func_65(var uParam0)
{
	switch (uParam0->f_464)
	{
		case 1:
		case 2:
		case 3:
			unk_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
			unk_0x3CAEA85DA607305E(99);
			unk_0x7E60D21B163E9D56();
			break;
	}
	unk_0xA37A90C62806D848(0);
}

int func_66(int iParam0)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_205[iParam0];
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
			break;
		
		case 1:
			return 3;
			break;
		
		case 2:
			return 4;
			break;
		
		case 3:
			return 5;
			break;
		
		case 4:
			return 6;
			break;
	}
	return -1;
}

void func_68(var uParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 1))
	{
		func_69(uParam0);
	}
}

void func_69(var uParam0)
{
	bVar0 = false;
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 2))
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (!func_149(0))
			{
				if (func_140(8))
				{
					if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), uParam0->f_401) < 4f)
					{
						vVar1 = { uParam0->f_401 - unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
						fVar4 = unk_0xE7D606C557C86100(vVar1.x, vVar1.y);
						fVar5 = unk_0x755FF954DAE327E1((uParam0->f_404 - fVar4));
						if (fVar5 <= 70f)
						{
							bVar0 = true;
						}
						else
						{
							fVar6 = uParam0->f_404;
							if (fVar6 > 180f)
							{
								fVar6 = (fVar6 - 360f);
							}
							else if (fVar6 < -180f)
							{
								fVar6 = (fVar6 + 360f);
							}
							if ((fVar6 - fVar4) < fVar5)
							{
								fVar5 = unk_0x755FF954DAE327E1((fVar6 - fVar4));
							}
							if (fVar5 <= 70f)
							{
								bVar0 = true;
							}
							else
							{
								if (fVar4 > 180f)
								{
									fVar4 = (fVar4 - 360f);
								}
								else if (fVar4 < -180f)
								{
									fVar4 = (fVar4 + 360f);
								}
								if ((uParam0->f_404 - fVar4) < fVar5)
								{
									fVar5 = unk_0x755FF954DAE327E1((uParam0->f_404 - fVar4));
								}
								if (fVar5 <= 70f)
								{
									bVar0 = true;
								}
								else
								{
									if ((fVar6 - fVar4) < fVar5)
									{
										fVar5 = unk_0x755FF954DAE327E1((fVar6 - fVar4));
									}
									if (fVar5 <= 70f)
									{
										bVar0 = true;
									}
								}
							}
						}
					}
				}
			}
		}
		if (bVar0)
		{
			if (uParam0->f_451 == -1)
			{
				func_139(&(uParam0->f_451), 3, "PB_H_ENT", 0, 0, 0, 0);
			}
			else if (func_138(uParam0->f_451, 1))
			{
				func_136(&(uParam0->f_451));
				func_122(uParam0);
			}
		}
		else if (uParam0->f_451 != -1)
		{
			func_136(&(uParam0->f_451));
		}
	}
	else
	{
		bVar7 = func_11(1, *uParam0);
		func_80(uParam0);
		if (((!bVar7 && uParam0->f_453 > 15) && (unk_0xBFC0798A6E3417F9(2, iLocal_36) || unk_0xBFC0798A6E3417F9(2, 238))) || unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 8))
		{
			unk_0x0674E58A79778E99(&(uParam0->f_449), 8);
			func_70(uParam0, 0);
		}
	}
}

void func_70(var uParam0, bool bParam1)
{
	uParam0->f_453 = 0;
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), false);
		if (!bParam1)
		{
			vVar0 = { uParam0->f_401 };
			vVar0 = { vVar0 + Vector(0f, (1f * cos((180f - uParam0->f_404))), (1f * sin((180f - uParam0->f_404)))) };
			unk_0xE82754C349C7B581(vVar0, &(vVar0.f_2), 0, 0);
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vVar0, 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), uParam0->f_404);
			unk_0x2FB9A57162E54BAB(0f);
			unk_0xEF6276132B396452(0f, 1065353216);
			unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), -1871534317, false, 0, 0);
			unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 1, 0);
		}
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 134);
	}
	unk_0xBFE31971E49FA500(true);
	func_73(0);
	func_72();
	unk_0x17D339215F817B98();
	unk_0xA5E3ADAAA4CD5D6C(17);
	unk_0x911B98CDC647AC76(0);
	func_71(&(uParam0->f_649), 0, 1);
	func_14(&(uParam0->f_1.f_20[0]), 1);
	func_14(&(uParam0->f_1.f_20[1]), 1);
	func_14(&(uParam0->f_1.f_108[0]), 1);
	func_14(&(uParam0->f_1.f_108[1]), 1);
	unk_0xA37A90C62806D848(1);
	while (unk_0xFEBC1E4EC9E001F0())
	{
		unk_0xA37A90C62806D848(1);
		wait(0);
	}
	iVar3 = unk_0xFBD08BECC9B87937(uParam0->f_401);
	if (iVar3 != 0)
	{
		unk_0x25BB71BA267FE042(iVar3);
	}
	unk_0x5372553242EA2414();
	func_65(uParam0);
	unk_0x0674E58A79778E99(&(uParam0->f_449), 7);
	unk_0x0674E58A79778E99(&(uParam0->f_449), 2);
	Global_94751 = 0;
}

void func_71(var uParam0, int iParam1, bool bParam2)
{
	if (unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		if (bParam2)
		{
			unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, iParam1, 0);
		}
		if (unk_0xFBB4F23D534EB790(*uParam0))
		{
			unk_0xE3BB8E05FCEB3FBE(*uParam0, false);
		}
		unk_0x9A8DDC7C522F5BF5(*uParam0, iParam1);
	}
	if (uParam0->f_23)
	{
		unk_0xF737A3AD8873CE16();
		uParam0->f_23 = 0;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	uParam0->f_22 = 0;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0f;
	uParam0->f_18 = 0f;
}

void func_72()
{
	Global_22211.f_5 = 0;
}

void func_73(bool bParam0)
{
	if (bParam0)
	{
		func_79();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			unk_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_149(0))
		{
			func_74(0);
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

void func_74(int iParam0)
{
	if (func_78())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_77())
		{
			func_76(1, 1);
		}
		else
		{
			func_76(0, 0);
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
	if (!func_75())
	{
		Global_19486.f_1 = 3;
	}
}

int func_75()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_76(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_149(0))
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

bool func_77()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_78()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_79()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_80(var uParam0)
{
	sVar0 = unk_0xE32F7AC5E6DF304A(0, 1, true);
	if (!unk_0x7F8A39872A07D2CE(sVar0, uParam0->f_466))
	{
		func_8(uParam0);
	}
	uParam0->f_466 = sVar0;
	func_120();
	func_110(uParam0);
	func_88(uParam0);
	if (uParam0->f_464 == 1)
	{
		func_85(uParam0);
	}
	if (func_21())
	{
		func_19(uParam0);
	}
	bVar1 = uParam0->f_454 > unk_0x1C0640BA9A7327B3();
	func_81(&(uParam0->f_649), unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 4), (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 5) && !bVar1), 1, 0, 1045220557, 1, 1065353216, 0);
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 7))
	{
		if ((!unk_0x22A8E52414415B76() && unk_0x0F1CCD77290EE12F()) && !unk_0x798A3F1296751F46())
		{
			if (uParam0->f_464 != 1)
			{
				if (uParam0->f_464 == 0 || (((!unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 11) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 10)) && !func_20()) && uParam0->f_483 == 0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 18) || uParam0->f_464 == 2)
					{
						unk_0x6567AE843FADBA94(uParam0->f_414, 255, 255, 255, 0, 0);
					}
				}
			}
		}
	}
	unk_0xBFE31971E49FA500(false);
	unk_0x3584F71E5CA29322(2);
	unk_0x3584F71E5CA29322(1);
	unk_0x3584F71E5CA29322(8);
	unk_0x3584F71E5CA29322(7);
	unk_0x3584F71E5CA29322(3);
	unk_0xB8E3919889462ACD();
	unk_0xD02CE72B4B66DC29(82, 66);
	unk_0x744B56EE9DE7B57F(17, 0,612f, 0,818f);
	unk_0xD59EF13BB60323B9();
	if (!unk_0x22A8E52414415B76())
	{
		unk_0x558EC149EB2BC0A2(2, 201);
	}
	unk_0x558EC149EB2BC0A2(2, 202);
	unk_0x558EC149EB2BC0A2(2, 188);
	unk_0x558EC149EB2BC0A2(2, 187);
	unk_0x558EC149EB2BC0A2(2, 189);
	unk_0x558EC149EB2BC0A2(2, 190);
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 7))
	{
		if (!unk_0x22A8E52414415B76())
		{
			vVar2 = { uParam0->f_401 };
			vVar2 = { vVar2 + Vector(0,5f, (2,9f * cos((180f - uParam0->f_404))), (2,9f * sin((180f - uParam0->f_404)))) };
			unk_0xE82754C349C7B581(vVar2, &(vVar2.f_2), 0, 0);
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 134);
			unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
			unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), true);
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vVar2, 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), uParam0->f_404);
			unk_0x5D96D8530B3D0904(&(uParam0->f_449), 7);
		}
	}
}

void func_81(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)
{
	unk_0xA2E3EDD0E119882F(2);
	func_84(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (unk_0x89DF0B812BA6383B())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (unk_0x91E3F625EF57450D(2))
	{
		fVar5 = unk_0x659FAE9DBE6F38F5(2, 239);
		fVar6 = unk_0x659FAE9DBE6F38F5(2, 240);
		fVar7 = (fVar5 - uParam0->f_29);
		fVar8 = (fVar6 - uParam0->f_30);
		uParam0->f_29 = fVar5;
		uParam0->f_30 = fVar6;
		if (bParam4)
		{
			iVar0[2] = -round(((fVar7 * fParam5) * 127f));
			iVar0[3] = -round(((fVar8 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = round(((unk_0x659FAE9DBE6F38F5(2, 290) * fParam5) * 127f));
			iVar0[3] = round(((unk_0x659FAE9DBE6F38F5(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_83((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_83((iVar0[3] + uParam0->f_25), -127, 127);
	}
	if (uParam0->f_24 == iVar0[2] && uParam0->f_25 == iVar0[3])
	{
		if (uParam0->f_27 < unk_0x1C0640BA9A7327B3())
		{
			uParam0->f_24 = 0;
			uParam0->f_25 = 0;
			if (unk_0x91E3F625EF57450D(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				uParam0->f_28 = 1;
			}
		}
	}
	else
	{
		uParam0->f_24 = iVar0[2];
		uParam0->f_25 = iVar0[3];
		uParam0->f_27 = unk_0x1C0640BA9A7327B3() + 4000;
		uParam0->f_28 = 0;
	}
	if (bParam2)
	{
		uParam0->f_8.f_2 = (-(to_float(iVar0[2]) / 127f) * IntToFloat(uParam0->f_20));
		uParam0->f_8.f_1 = ((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_22)) / IntToFloat(uParam0->f_20));
		uParam0->f_8 = (-(to_float(iVar0[3]) / 127f) * IntToFloat(uParam0->f_21));
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_24 = 0;
		uParam0->f_25 = 0;
	}
	fVar9 = (30f * timestep());
	vVar10 = { uParam0->f_8 + uParam0->f_11 };
	if ((unk_0x91E3F625EF57450D(2) && bParam2) && !uParam0->f_28)
	{
		uParam0->f_14 = vVar10.x;
		uParam0->f_14.f_1 = vVar10.y;
		uParam0->f_14.f_2 = vVar10.z;
	}
	else
	{
		uParam0->f_14 = (uParam0->f_14 + func_82(((((vVar10.x - uParam0->f_14) * 0,05f) * fVar9) * fParam7), -3f, 3f));
		uParam0->f_14.f_1 = (uParam0->f_14.f_1 + func_82(((((vVar10.y - uParam0->f_14.f_1) * 0,05f) * fVar9) * fParam7), -3f, 3f));
		uParam0->f_14.f_2 = (uParam0->f_14.f_2 + func_82(((((vVar10.z - uParam0->f_14.f_2) * 0,05f) * fVar9) * fParam7), -3f, 3f));
	}
	if (uParam0->f_26)
	{
		uParam0->f_14 = func_82(uParam0->f_14, to_float(-uParam0->f_21), to_float(uParam0->f_21));
		uParam0->f_14.f_1 = func_82(uParam0->f_14.f_1, to_float(-uParam0->f_22), to_float(uParam0->f_22));
		uParam0->f_14.f_2 = func_82(uParam0->f_14.f_2, to_float(-uParam0->f_20), to_float(uParam0->f_20));
	}
	if (unk_0x91E3F625EF57450D(0) && bParam1)
	{
		if (uParam0->f_28)
		{
			uParam0->f_17 = uParam0->f_7;
		}
	}
	else
	{
		uParam0->f_17 = uParam0->f_7;
	}
	if (bParam1)
	{
		if (unk_0x91E3F625EF57450D(0))
		{
			iVar13 = 40;
			iVar14 = 41;
			if (bParam6)
			{
				iVar13 = 241;
				iVar14 = 242;
			}
			if (unk_0xD245978525608929(0, iVar13))
			{
				uParam0->f_17 = (uParam0->f_17 - 5f);
				uParam0->f_27 = unk_0x1C0640BA9A7327B3() + 4000;
				uParam0->f_28 = 0;
			}
			else if (unk_0xD245978525608929(0, iVar14))
			{
				uParam0->f_17 = (uParam0->f_17 + 5f);
				uParam0->f_27 = unk_0x1C0640BA9A7327B3() + 4000;
				uParam0->f_28 = 0;
			}
			if (bParam3)
			{
				uParam0->f_17 = func_82(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), uParam0->f_7);
			}
			else
			{
				uParam0->f_17 = func_82(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), (uParam0->f_7 + uParam0->f_19));
			}
		}
		else if (bParam8)
		{
			iVar0[1] = unk_0x0DED1C1B8250FA57(2, 207);
			iVar0[3] = unk_0x0DED1C1B8250FA57(2, 208);
			if (bParam3)
			{
				if (to_float(iVar0[3]) > 127f)
				{
					uParam0->f_17 = (uParam0->f_17 - IntToFloat(round(((to_float(iVar0[3]) / 128f) * (uParam0->f_19 / 2f)))));
				}
			}
			else
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(round(((to_float(iVar0[1]) / 128f) * uParam0->f_19))));
				uParam0->f_17 = (uParam0->f_17 - IntToFloat(round(((to_float(iVar0[3]) / 128f) * uParam0->f_19))));
			}
		}
		else if (bParam3)
		{
			if (to_float(iVar0[1]) < 0f)
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(round(((to_float(iVar0[1]) / 128f) * uParam0->f_19))));
			}
		}
		else
		{
			uParam0->f_17 = (uParam0->f_17 + IntToFloat(round(((to_float(iVar0[1]) / 128f) * uParam0->f_19))));
		}
	}
	uParam0->f_18 = (uParam0->f_18 + (((uParam0->f_17 - uParam0->f_18) * 0,06f) * fVar9));
	unk_0x86F44313DFA8F00C(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, 0, 1, 1, 2);
	if (unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		if (unk_0xFBB4F23D534EB790(*uParam0))
		{
			if (unk_0x9CF8D5C7090408A2(*uParam0))
			{
				unk_0x9501364A300048C6();
			}
		}
	}
}

float func_82(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_83(int iParam0, int iParam1, int iParam2)
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

void func_84(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = floor((unk_0x659FAE9DBE6F38F5(2, 218) * 127f));
	*uParam1 = floor((unk_0x659FAE9DBE6F38F5(2, 219) * 127f));
	*uParam2 = floor((unk_0x659FAE9DBE6F38F5(2, 220) * 127f));
	*uParam3 = floor((unk_0x659FAE9DBE6F38F5(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0x718E6F84AA2510BB(2, 218))
		{
			*uParam0 = floor((unk_0x8A6BC5D9CAEACD0F(2, 218) * 127f));
		}
		if (!unk_0x718E6F84AA2510BB(2, 219))
		{
			*uParam1 = floor((unk_0x8A6BC5D9CAEACD0F(2, 219) * 127f));
		}
		if (!unk_0x718E6F84AA2510BB(2, 220))
		{
			*uParam2 = floor((unk_0x8A6BC5D9CAEACD0F(2, 220) * 127f));
		}
		if (!unk_0x718E6F84AA2510BB(2, 221))
		{
			*uParam3 = floor((unk_0x8A6BC5D9CAEACD0F(2, 221) * 127f));
		}
	}
	if (unk_0x91E3F625EF57450D(2))
	{
		if (bParam5)
		{
			if (unk_0x89DF0B812BA6383B())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0x8EB1E94243F14479())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_85(var uParam0)
{
	if (!func_11(3, *uParam0))
	{
		if (uParam0->f_483 == 0 && uParam0->f_455 > 3)
		{
			if (uParam0->f_452 == -1)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 19))
				{
					uParam0->f_452 = unk_0x1C0640BA9A7327B3() + 500;
				}
				else
				{
					uParam0->f_452 = unk_0x1C0640BA9A7327B3();
				}
			}
			else if (unk_0x1C0640BA9A7327B3() > uParam0->f_452)
			{
				bVar0 = false;
				iVar1 = 0;
				while (iVar1 < uParam0->f_1.f_369)
				{
					if (!bVar0)
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1.f_303, iVar1 + 4))
						{
							func_87(uParam0, iVar1);
							if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1.f_370, iVar1))
							{
								unk_0x5D96D8530B3D0904(&(uParam0->f_449), 19);
							}
							else
							{
								unk_0x0674E58A79778E99(&(uParam0->f_449), 19);
							}
							bVar0 = true;
						}
					}
					iVar1++;
				}
				if (!bVar0)
				{
					func_86(3, *uParam0, 1);
				}
			}
		}
	}
}

void func_86(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 11 || iParam0 == -1)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	bVar0 = unk_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[iParam0], iParam1);
	if (bVar0 == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_111638.f_9080.f_99.f_219[iParam0]), iParam1);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_111638.f_9080.f_99.f_219[iParam0]), iParam1);
	}
}

void func_87(var uParam0, int iParam1)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
	unk_0x3CAEA85DA607305E(99);
	unk_0x7E60D21B163E9D56();
	func_26(uParam0, &(uParam0->f_1.f_371[iParam1]), uParam0->f_1.f_11);
	func_24(uParam0, iParam1 + 4, 1);
	uParam0->f_452 = -1;
}

void func_88(var uParam0)
{
	if ((!func_20() && unk_0x0F1CCD77290EE12F()) && !unk_0x22A8E52414415B76())
	{
		if (uParam0->f_483 > 0)
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 13))
			{
				if (func_89(&(uParam0->f_484), &(uParam0->f_467[0]), &(uParam0->f_467[0].f_2), 4, 0, 0, 0))
				{
					uParam0->f_455 = 0;
					if (uParam0->f_467[0].f_4)
					{
						unk_0x0674E58A79778E99(&(uParam0->f_449), 11);
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(uParam0->f_449), 11);
					}
					iVar0 = 0;
					while (iVar0 < 2)
					{
						uParam0->f_467[iVar0] = { uParam0->f_467[iVar0 + 1] };
						uParam0->f_467[iVar0].f_2 = { uParam0->f_467[iVar0 + 1].f_2 };
						uParam0->f_467[iVar0].f_4 = uParam0->f_467[iVar0 + 1].f_4;
						iVar0++;
					}
					uParam0->f_483 = (uParam0->f_483 - 1);
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 2)
				{
					uParam0->f_467[iVar1] = { uParam0->f_467[iVar1 + 1] };
					uParam0->f_467[iVar1].f_2 = { uParam0->f_467[iVar1 + 1].f_2 };
					uParam0->f_467[iVar1].f_4 = uParam0->f_467[iVar1 + 1].f_4;
					iVar1++;
				}
				uParam0->f_483 = (uParam0->f_483 - 1);
				unk_0x0674E58A79778E99(&(uParam0->f_449), 13);
				unk_0x0674E58A79778E99(&(uParam0->f_449), 11);
			}
		}
		else
		{
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 11))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_449), 11);
			}
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 13))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_449), 13);
			}
			uParam0->f_455++;
		}
	}
}

bool func_89(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_109(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_90(sParam2, iParam3, 0);
}

int func_90(char* sParam0, int iParam1, bool bParam2)
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
					func_108();
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
		if (func_107(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_106();
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
				func_99();
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
				if (func_98())
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
			if (func_75())
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
			func_97();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_96();
		func_91();
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
		func_108();
	}
	return 0;
}

void func_91()
{
	if (!func_92())
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

int func_92()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_95())
	{
		return 0;
	}
	if (func_93(unk_0xD803B885F5E47A62()))
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

bool func_93(int iParam0)
{
	return func_94(iParam0, 20);
}

bool func_94(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_95()
{
	return -1;
}

void func_96()
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

void func_97()
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

int func_98()
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

void func_99()
{
	if (func_394(14))
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
		Global_19486 = func_100();
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

int func_100()
{
	func_101();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_101()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_104(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_103(unk_0x16F2683693E537C9());
			if (func_102(iVar0) && (!func_394(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_102(Global_111638.f_2358.f_539.f_4321))
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

bool func_102(int iParam0)
{
	return iParam0 < 3;
}

int func_103(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_104(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_104(int iParam0)
{
	if (func_102(iParam0))
	{
		return func_105(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_105(int iParam0)
{
	return Global_1798[iParam0];
}

void func_106()
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

bool func_107(int iParam0, int iParam1)
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

void func_108()
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

void func_109(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_110(var uParam0)
{
	uParam0->f_453++;
	if (unk_0xB8E3620B82AD47D7(2))
	{
		func_8(uParam0);
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 11))
	{
		if ((unk_0xBFC0798A6E3417F9(2, iLocal_37) || unk_0xBFC0798A6E3417F9(2, iLocal_39)) || (unk_0x91E3F625EF57450D(2) && (unk_0xBFC0798A6E3417F9(2, iLocal_38) || unk_0xBFC0798A6E3417F9(2, iLocal_40))))
		{
			func_118();
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 12))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_449), 13);
				unk_0x0674E58A79778E99(&(uParam0->f_449), 11);
				unk_0x0674E58A79778E99(&(uParam0->f_449), 10);
			}
			unk_0x0674E58A79778E99(&(uParam0->f_449), 12);
		}
	}
	func_84(&(uParam0->f_458[0]), &(uParam0->f_458[1]), &(uParam0->f_458[2]), &(uParam0->f_458[3]), 0, 0);
	if (unk_0x91E3F625EF57450D(2))
	{
		uParam0->f_458[2] = (uParam0->f_458[2] / 10);
		uParam0->f_458[3] = (uParam0->f_458[3] / 10);
		uParam0->f_458[2] = func_83((uParam0->f_458[2] + uParam0->f_649.f_24), -127, 127);
		uParam0->f_458[3] = func_83((uParam0->f_458[3] + uParam0->f_649.f_25), -127, 127);
	}
	uParam0->f_649.f_24 = uParam0->f_458[2];
	uParam0->f_649.f_25 = uParam0->f_458[3];
	if (unk_0x89DF0B812BA6383B())
	{
		uParam0->f_458[3] = -uParam0->f_458[3];
	}
	if (uParam0->f_454 > unk_0x1C0640BA9A7327B3())
	{
		uParam0->f_458[2] = 0;
		uParam0->f_458[3] = 0;
	}
	if (uParam0->f_464 == 0 || uParam0->f_464 == 4)
	{
		if (uParam0->f_453 > 15)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_449), 4);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam0->f_449), 4);
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 10))
	{
		if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 11))
		{
			if ((unk_0x1C0640BA9A7327B3() - uParam0->f_456) > 200)
			{
				if ((uParam0->f_464 == 2 || uParam0->f_464 == 3) || uParam0->f_464 == 4)
				{
					if ((unk_0x1C0640BA9A7327B3() - uParam0->f_457) > 25000)
					{
						func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[3], 1);
						uParam0->f_457 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0, 8000));
					}
				}
				if (uParam0->f_464 == 2)
				{
					if ((((uParam0->f_458[1] < -85 || uParam0->f_458[0] < -85) || unk_0x06F8112AA79C53D9(2, 188)) || unk_0x06F8112AA79C53D9(2, 189)) || (unk_0x91E3F625EF57450D(2) && unk_0xD245978525608929(2, 241)))
					{
						unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_INPUT_EVENT");
						unk_0x3CAEA85DA607305E(8);
						unk_0x7E60D21B163E9D56();
						unk_0x7E60C62A7CE58FC8(uParam0->f_413, "GET_CURRENT_SELECTION");
						uParam0->f_682 = unk_0x7A8BB56B212464AC();
						uParam0->f_456 = unk_0x1C0640BA9A7327B3();
						uParam0->f_457 = uParam0->f_456;
					}
					else if ((((uParam0->f_458[1] > 85 || uParam0->f_458[0] > 85) || unk_0x06F8112AA79C53D9(2, 187)) || unk_0x06F8112AA79C53D9(2, 190)) || (unk_0x91E3F625EF57450D(2) && unk_0xD245978525608929(0, 242)))
					{
						unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_INPUT_EVENT");
						unk_0x3CAEA85DA607305E(9);
						unk_0x7E60D21B163E9D56();
						unk_0x7E60C62A7CE58FC8(uParam0->f_413, "GET_CURRENT_SELECTION");
						uParam0->f_682 = unk_0x7A8BB56B212464AC();
						uParam0->f_456 = unk_0x1C0640BA9A7327B3();
						uParam0->f_457 = uParam0->f_456;
					}
				}
				if (uParam0->f_464 == 3)
				{
					if ((uParam0->f_458[1] < -85 || unk_0x06F8112AA79C53D9(2, 188)) || (unk_0x91E3F625EF57450D(2) && unk_0xD245978525608929(0, 40)))
					{
						unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_INPUT_EVENT");
						unk_0x3CAEA85DA607305E(8);
						unk_0x7E60D21B163E9D56();
						if (uParam0->f_416 != 0)
						{
							unk_0x4D7F4CC43D4D0DE3(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
						}
						uParam0->f_416 = 0;
						if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 9))
						{
							unk_0x0674E58A79778E99(&(uParam0->f_449), 9);
							func_8(uParam0);
						}
						uParam0->f_456 = unk_0x1C0640BA9A7327B3();
						uParam0->f_457 = uParam0->f_456;
					}
					else if ((uParam0->f_458[1] > 85 || unk_0x06F8112AA79C53D9(2, 187)) || (unk_0x91E3F625EF57450D(2) && unk_0xD245978525608929(0, 41)))
					{
						unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_INPUT_EVENT");
						unk_0x3CAEA85DA607305E(9);
						unk_0x7E60D21B163E9D56();
						if (uParam0->f_416 != 1)
						{
							unk_0x4D7F4CC43D4D0DE3(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
						}
						uParam0->f_416 = 1;
						if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 9))
						{
							unk_0x0674E58A79778E99(&(uParam0->f_449), 9);
							func_8(uParam0);
						}
						uParam0->f_456 = unk_0x1C0640BA9A7327B3();
						uParam0->f_457 = uParam0->f_456;
					}
				}
				if (!func_20() || unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 13))
				{
					if (unk_0xBFC0798A6E3417F9(2, iLocal_37) || (unk_0x91E3F625EF57450D(2) && unk_0xBFC0798A6E3417F9(2, iLocal_38)))
					{
						switch (uParam0->f_464)
						{
							case 3:
								if (!func_20())
								{
									if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 9))
									{
										uParam0->f_456 = unk_0x1C0640BA9A7327B3();
										iVar0 = func_31(*uParam0);
										if (iVar0 != -1)
										{
											unk_0x7E60C62A7CE58FC8(uParam0->f_413, "GET_CURRENT_SELECTION");
											uParam0->f_680 = unk_0x7A8BB56B212464AC();
											func_12(uParam0, 1);
											func_14(&(uParam0->f_1.f_20[0]), 1);
											func_14(&(uParam0->f_1.f_20[1]), 1);
											Global_111638.f_1[*uParam0] = 1;
											unk_0xA37A90C62806D848(0);
										}
									}
								}
								break;
							
							case 2:
								if (!func_11(4, *uParam0))
								{
									iVar0 = func_31(*uParam0);
									iVar1 = func_66(iVar0);
									if (uParam0->f_450 < Global_94773[iVar1])
									{
										unk_0x7E60C62A7CE58FC8(uParam0->f_413, "GET_CURRENT_SELECTION");
										uParam0->f_681 = unk_0x7A8BB56B212464AC();
										func_12(uParam0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									func_86(4, *uParam0, 1);
									if (!func_2(0))
									{
										func_116(*uParam0);
									}
								}
								else
								{
									func_86(5, *uParam0, 1);
								}
								unk_0x4D7F4CC43D4D0DE3(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iVar0 = func_31(*uParam0);
								iVar1 = func_66(iVar0);
								iVar2 = 0;
								while (iVar2 < Global_94773[iVar1])
								{
									if (Global_111638.f_1.f_12[iVar1][iVar2] == 0 || func_41(Global_111638.f_1.f_12[iVar1][iVar2]) != Global_94773[iVar1].f_1[iVar2])
									{
										bVar4 = false;
										iVar5 = 0;
										while (iVar5 < 14)
										{
											if (!bVar4)
											{
												bVar4 = true;
												iVar3 = iVar5;
												if (iVar3 != 0)
												{
													if (Global_94619[iVar3] != Global_94773[iVar1].f_1[iVar2])
													{
														bVar4 = false;
													}
													if (!unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_116, iVar3))
													{
														bVar4 = false;
													}
													if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_118, iVar3))
													{
														bVar4 = false;
													}
													if (iVar3 == 11 && *uParam0 == 3)
													{
														bVar4 = false;
													}
													if (func_38(uParam0, iVar3))
													{
														bVar4 = false;
													}
												}
												else
												{
													bVar4 = false;
												}
											}
											iVar5++;
										}
										Global_111638.f_1.f_12[iVar1][iVar2] = iVar3;
									}
									iVar2++;
								}
								func_12(uParam0, 1);
								func_63(uParam0, iVar1, 4);
								break;
						}
						uParam0->f_427 = 0;
					}
					if (unk_0xBFC0798A6E3417F9(2, iLocal_39) || (unk_0x91E3F625EF57450D(2) && unk_0xBFC0798A6E3417F9(2, iLocal_40)))
					{
						switch (uParam0->f_464)
						{
							case 2:
								iVar0 = func_31(*uParam0);
								iVar1 = func_66(iVar0);
								if (uParam0->f_450 > 0)
								{
									func_12(uParam0, 1);
									uParam0->f_450 = (uParam0->f_450 - 1);
									uParam0->f_417 = uParam0->f_450;
									iVar6 = Global_111638.f_1.f_12[iVar1][uParam0->f_450];
									Global_111638.f_1.f_12[iVar1][uParam0->f_450] = 0;
									uParam0->f_465 = Global_94773[iVar1].f_1[uParam0->f_450];
									func_36(uParam0, uParam0->f_450, iVar6);
									unk_0x4D7F4CC43D4D0DE3(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
									uParam0->f_427 = 0;
									uParam0->f_456 = unk_0x1C0640BA9A7327B3();
								}
								else if (!func_395(0))
								{
									if (*uParam0 != 2)
									{
										iVar7 = 0;
										while (iVar7 < uParam0->f_1.f_96)
										{
											unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
											unk_0x3CAEA85DA607305E(iVar7);
											unk_0x7E60D21B163E9D56();
											unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
											unk_0x3CAEA85DA607305E(iVar7);
											unk_0x1200CC973A2399C8(true);
											unk_0x7E60D21B163E9D56();
											iVar7++;
										}
										unk_0x4D7F4CC43D4D0DE3(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
										iVar7 = 0;
										while (iVar7 < 2)
										{
											if (uParam0->f_1.f_30[iVar7] != 13)
											{
												func_397(*uParam0, uParam0->f_1.f_30[iVar7], 0);
											}
											iVar7++;
										}
										uParam0->f_427 = 0;
										func_12(uParam0, 1);
										uParam0->f_456 = unk_0x1C0640BA9A7327B3();
										uParam0->f_465 = 0;
										func_115(0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									iVar0 = func_31(*uParam0);
									iVar1 = func_66(iVar0);
									uParam0->f_450 = (uParam0->f_450 - 1);
									uParam0->f_417 = uParam0->f_450;
									iVar8 = Global_111638.f_1.f_12[iVar1][uParam0->f_450];
									Global_111638.f_1.f_12[iVar1][uParam0->f_450] = 0;
									uParam0->f_465 = Global_94773[iVar1].f_1[uParam0->f_450];
									func_6(uParam0, 2, iVar8);
								}
								else
								{
									iVar9 = 0;
									while (iVar9 < 2)
									{
										if (uParam0->f_1.f_30[iVar9] != 13)
										{
											func_397(*uParam0, uParam0->f_1.f_30[iVar9], 0);
										}
										iVar9++;
									}
									func_114(8, 0);
									func_86(5, 1, 0);
									uParam0->f_427 = 0;
									func_12(uParam0, 1);
									uParam0->f_456 = unk_0x1C0640BA9A7327B3();
									func_6(uParam0, 3, 0);
								}
								unk_0x4D7F4CC43D4D0DE3(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
								break;
							}
						}
					}
				}
		}
	}
	else if (uParam0->f_455 > 5)
	{
		iVar0 = func_31(*uParam0);
		iVar1 = func_66(iVar0);
		if (uParam0->f_450 >= Global_94773[iVar1] || (*uParam0 == 1 && uParam0->f_450 > uParam0->f_415))
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
			unk_0x3CAEA85DA607305E(99);
			unk_0x3CAEA85DA607305E(-1);
			unk_0x7E60D21B163E9D56();
			func_24(uParam0, 0, 1);
			func_6(uParam0, 4, 0);
		}
		else
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 17))
			{
				iVar10 = Global_111638.f_1.f_12[iVar1][uParam0->f_450];
				Global_111638.f_1.f_12[iVar1][uParam0->f_450] = 0;
				uParam0->f_465 = Global_94773[iVar1].f_1[uParam0->f_450];
				func_36(uParam0, uParam0->f_450, iVar10);
			}
			unk_0x0674E58A79778E99(&(uParam0->f_449), 17);
		}
		uParam0->f_457 = unk_0x1C0640BA9A7327B3();
		unk_0x0674E58A79778E99(&(uParam0->f_449), 10);
	}
	else if (unk_0xFEBC1E4EC9E001F0())
	{
		if (((!func_13(&(uParam0->f_1.f_108[0])) && !func_13(&(uParam0->f_1.f_108[1]))) && !func_13(&(uParam0->f_1.f_20[0]))) && !func_13(&(uParam0->f_1.f_20[1])))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
	if (uParam0->f_680 != 0)
	{
		if (unk_0xC95D7AEEDEF4946B(uParam0->f_680))
		{
			iVar11 = unk_0xA52833FE33F41C53(uParam0->f_680);
			iVar1 = func_30(*uParam0, iVar11);
			iVar0 = func_31(*uParam0);
			func_114(iVar0, iVar1);
			if (!func_2(0))
			{
				func_113(*uParam0);
			}
			unk_0x4D7F4CC43D4D0DE3(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_63(uParam0, iVar1, 0);
			if (uParam0->f_1.f_30[iVar11] != 13)
			{
				func_397(*uParam0, uParam0->f_1.f_30[iVar11], 1);
			}
			iVar12 = 0;
			while (iVar12 < uParam0->f_1.f_96)
			{
				func_62(uParam0, iVar12);
				if (iVar12 < Global_94773[iVar1])
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_VIEW");
					unk_0x3CAEA85DA607305E(iVar12);
					unk_0x1200CC973A2399C8(true);
					unk_0x7E60D21B163E9D56();
				}
				else
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_VIEW");
					unk_0x3CAEA85DA607305E(iVar12);
					unk_0x1200CC973A2399C8(false);
					unk_0x7E60D21B163E9D56();
				}
				iVar12++;
			}
			if (*uParam0 != 1)
			{
				func_86(5, *uParam0, 1);
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_449), 10);
				uParam0->f_450++;
			}
			unk_0xA37A90C62806D848(0);
			uParam0->f_680 = 0;
		}
	}
	if (uParam0->f_681 != 0)
	{
		if (unk_0xC95D7AEEDEF4946B(uParam0->f_681))
		{
			iVar13 = unk_0xA52833FE33F41C53(uParam0->f_681);
			iVar0 = func_31(*uParam0);
			iVar1 = func_66(iVar0);
			Global_111638.f_1.f_12[iVar1][uParam0->f_450] = uParam0->f_418[iVar13];
			iVar14 = Global_111638.f_1.f_12[iVar1][uParam0->f_450];
			unk_0x7E60C62A7CE58FC8(uParam0->f_413, "UPDATE_DATA_SLOT");
			unk_0x3CAEA85DA607305E(uParam0->f_450);
			unk_0x3CAEA85DA607305E(iVar13);
			unk_0x3CAEA85DA607305E(iVar14);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
			unk_0x3CAEA85DA607305E(99);
			unk_0x7E60D21B163E9D56();
			unk_0x4D7F4CC43D4D0DE3(-1, "PERSON_SELECT", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
			unk_0x0674E58A79778E99(&(uParam0->f_449), 17);
			func_112(uParam0, iVar14);
			uParam0->f_450++;
			uParam0->f_417 = uParam0->f_450;
			uParam0->f_456 = unk_0x1C0640BA9A7327B3();
			uParam0->f_457 = uParam0->f_456;
			unk_0x5D96D8530B3D0904(&(uParam0->f_449), 10);
			if (!func_13(&(uParam0->f_1.f_108[0])) && !func_13(&(uParam0->f_1.f_108[1])))
			{
				unk_0xA37A90C62806D848(0);
			}
			uParam0->f_681 = 0;
		}
	}
	if (uParam0->f_682 != 0)
	{
		if (unk_0xC95D7AEEDEF4946B(uParam0->f_682))
		{
			iVar15 = unk_0xA52833FE33F41C53(uParam0->f_682);
			if (iVar15 != -1)
			{
				iVar16 = uParam0->f_418[iVar15];
				if (iVar16 != uParam0->f_427)
				{
					unk_0x4D7F4CC43D4D0DE3(-1, "PERSON_SCROLL", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
				}
				uParam0->f_427 = iVar16;
			}
			uParam0->f_682 = 0;
		}
	}
	if (uParam0->f_427 != 0)
	{
		func_111(uParam0, uParam0->f_427);
	}
}

void func_111(var uParam0, int iParam1)
{
	if (!func_20())
	{
		if (uParam0->f_483 == 0)
		{
			switch (iParam1)
			{
				case 10:
					if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_119, 14))
					{
						if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_304[14]), ""))
						{
							unk_0x5D96D8530B3D0904(&(uParam0->f_449), 10);
							unk_0x5D96D8530B3D0904(&(uParam0->f_449), 17);
							func_25(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[14], 1);
							unk_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 14);
							unk_0x5D96D8530B3D0904(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				
				case 13:
					if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_119, 16))
					{
						if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_304[16]), ""))
						{
							unk_0x5D96D8530B3D0904(&(uParam0->f_449), 10);
							unk_0x5D96D8530B3D0904(&(uParam0->f_449), 17);
							func_25(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[16], 1);
							unk_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 16);
							unk_0x5D96D8530B3D0904(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				
				case 12:
					if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_119, 15))
					{
						if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_304[15]), ""))
						{
							unk_0x5D96D8530B3D0904(&(uParam0->f_449), 10);
							unk_0x5D96D8530B3D0904(&(uParam0->f_449), 17);
							func_25(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[15], 1);
							unk_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 15);
							unk_0x5D96D8530B3D0904(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				
				case 11:
					if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_119, 17))
					{
						if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_304[17]), ""))
						{
							unk_0x5D96D8530B3D0904(&(uParam0->f_449), 10);
							unk_0x5D96D8530B3D0904(&(uParam0->f_449), 17);
							func_25(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[17], 1);
							unk_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 17);
							unk_0x5D96D8530B3D0904(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				}
			}
	}
}

void func_112(var uParam0, int iParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_463, iParam1))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_119, iParam1))
		{
			if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_304[iParam1]), ""))
			{
				func_25(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[iParam1], 1);
				unk_0x5D96D8530B3D0904(&(Global_111638.f_1.f_119), iParam1);
			}
		}
		else
		{
			switch (*uParam0)
			{
				case 2:
					switch (iParam1)
					{
						case 1:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 0))
							{
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18], 1);
							}
							break;
						
						case 10:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 1))
							{
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18], 1);
							}
							break;
					}
					break;
				
				case 3:
					switch (iParam1)
					{
						case 12:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 3))
							{
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24], 1);
							}
							break;
						
						case 9:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 6))
							{
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26], 1);
							}
							break;
						
						case 1:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 0))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 7))
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21], 1);
								}
								else
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18], 1);
								}
							}
							else if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 7))
							{
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19], 1);
							}
							break;
						
						case 10:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 1))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 8))
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21], 1);
								}
								else
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18], 1);
								}
							}
							else if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 8))
							{
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19], 1);
							}
							break;
						
						case 6:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 4))
							{
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18], 1);
							}
							break;
						
						case 7:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 2))
							{
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18], 1);
							}
							break;
						
						case 8:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 5))
							{
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18], 1);
							}
							break;
					}
					break;
				
				case 4:
					switch (iParam1)
					{
						case 12:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 15))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 3))
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[25], 1);
								}
								else
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24], 1);
								}
							}
							break;
						
						case 7:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 2))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 14))
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[30], 1);
								}
								else
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[28], 1);
								}
							}
							else if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 14))
							{
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[29], 1);
							}
							break;
						
						case 9:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 18))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 6))
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[27], 1);
								}
								else
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26], 1);
								}
							}
							break;
						
						case 4:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 17))
							{
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31], 1);
							}
							break;
						
						case 5:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 12))
							{
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31], 1);
							}
							break;
						
						case 1:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 10))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 0))
								{
									if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 7))
									{
										func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23], 1);
									}
									else
									{
										func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22], 1);
									}
								}
								else
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20], 1);
								}
							}
							break;
						
						case 10:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 11))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 1))
								{
									if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 8))
									{
										func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23], 1);
									}
									else
									{
										func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22], 1);
									}
								}
								else
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20], 1);
								}
							}
							break;
						
						case 3:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 13))
							{
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20], 1);
							}
							break;
						
						case 6:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 19))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 4))
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22], 1);
								}
								else
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20], 1);
								}
							}
							break;
						
						case 8:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 16))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 5))
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22], 1);
								}
								else
								{
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20], 1);
								}
							}
							break;
						
						case 13:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 20))
							{
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20], 1);
							}
							break;
					}
					break;
				}
		}
		unk_0x5D96D8530B3D0904(&(uParam0->f_463), iParam1);
	}
}

void func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_111638.f_9080.f_99.f_205[7];
			if (iVar0 == 1)
			{
				unk_0xD8B681091EBE4064(754126632, 1, 1);
			}
			else
			{
				unk_0xD8B681091EBE4064(754126632, 0, 1);
			}
			break;
		
		case 1:
			iVar0 = Global_111638.f_9080.f_99.f_205[8];
			if (iVar0 == 3)
			{
				unk_0xD8B681091EBE4064(1830949400, 1, 1);
			}
			else
			{
				unk_0xD8B681091EBE4064(1830949400, 0, 1);
			}
			break;
		
		case 3:
			iVar0 = Global_111638.f_9080.f_99.f_205[10];
			if (iVar0 == 6)
			{
				unk_0xD8B681091EBE4064(-560772645, 1, 1);
			}
			else
			{
				unk_0xD8B681091EBE4064(-560772645, 0, 1);
			}
			break;
		
		case 4:
			iVar0 = Global_111638.f_9080.f_99.f_205[11];
			if (iVar0 == 8)
			{
				unk_0xD8B681091EBE4064(1347594056, 1, 1);
			}
			else
			{
				unk_0xD8B681091EBE4064(1347594056, 0, 1);
			}
			break;
	}
}

void func_114(int iParam0, int iParam1)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return;
	}
	if (Global_111638.f_9080.f_99.f_205[iParam0] == iParam1)
	{
		return;
	}
	Global_111638.f_9080.f_99.f_205[iParam0] = iParam1;
}

void func_115(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_111638.f_9080.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_111638.f_9080.f_99.f_58[iParam0] = iParam1;
}

void func_116(int iParam0)
{
	func_117(iParam0);
	switch (iParam0)
	{
		case 0:
			iVar1 = Global_111638.f_9080.f_99.f_205[7];
			iVar0 = 0;
			while (iVar0 < Global_94773[iVar1])
			{
				switch (Global_111638.f_1.f_12[iVar1][iVar0])
				{
					case 1:
						unk_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 0);
						break;
					
					case 10:
						unk_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 1);
						unk_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 14);
						break;
					
					case 7:
						unk_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 2);
						break;
					
					case 12:
						unk_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 3);
						unk_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 15);
						break;
					
					case 6:
						unk_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 4);
						break;
					
					case 8:
						unk_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 5);
						break;
					
					case 9:
						unk_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 6);
						break;
				}
				unk_0x5D96D8530B3D0904(&(Global_111638.f_1.f_119), Global_111638.f_1.f_12[iVar1][iVar0]);
				iVar0++;
			}
			break;
		
		case 2:
			iVar1 = Global_111638.f_9080.f_99.f_205[9];
			iVar0 = 0;
			while (iVar0 < Global_94773[iVar1])
			{
				switch (Global_111638.f_1.f_12[iVar1][iVar0])
				{
					case 1:
						unk_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 7);
						break;
					
					case 10:
						unk_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 8);
						unk_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 14);
						break;
					
					case 11:
						unk_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 9);
						unk_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 17);
						break;
				}
				unk_0x5D96D8530B3D0904(&(Global_111638.f_1.f_119), Global_111638.f_1.f_12[iVar1][iVar0]);
				iVar0++;
			}
			break;
		
		case 3:
			iVar1 = Global_111638.f_9080.f_99.f_205[10];
			iVar0 = 0;
			while (iVar0 < Global_94773[iVar1])
			{
				switch (Global_111638.f_1.f_12[iVar1][iVar0])
				{
					case 1:
						unk_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 10);
						break;
					
					case 10:
						unk_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 11);
						unk_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 14);
						break;
					
					case 5:
						unk_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 12);
						break;
					
					case 3:
						unk_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 13);
						break;
					
					case 4:
						unk_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 17);
						break;
					
					case 7:
						unk_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 14);
						break;
					
					case 12:
						unk_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 15);
						unk_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 15);
						break;
					
					case 6:
						unk_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 19);
						break;
					
					case 8:
						unk_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 16);
						break;
					
					case 9:
						unk_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 18);
						break;
					
					case 13:
						unk_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 20);
						unk_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 16);
						break;
				}
				unk_0x5D96D8530B3D0904(&(Global_111638.f_1.f_119), Global_111638.f_1.f_12[iVar1][iVar0]);
				iVar0++;
			}
			break;
	}
}

void func_117(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			unk_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 0);
			unk_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 1);
			unk_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 2);
			unk_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 3);
			unk_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 4);
			unk_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 5);
			unk_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 6);
			break;
		
		case 2:
			unk_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 7);
			unk_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 8);
			unk_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 9);
			break;
		
		case 3:
			unk_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 10);
			unk_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 11);
			unk_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 12);
			unk_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 13);
			unk_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 14);
			unk_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 15);
			unk_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 16);
			unk_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 17);
			unk_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 18);
			unk_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 19);
			unk_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 20);
			break;
	}
}

void func_118()
{
	Global_19671 = 0;
	func_119();
}

void func_119()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_120()
{
	unk_0xC2127C0F64D6A3B9();
	func_121();
}

void func_121()
{
	Global_22211.f_134 = 1;
}

void func_122(var uParam0)
{
	uParam0->f_453 = 0;
	uParam0->f_463 = 0;
	unk_0x5D96D8530B3D0904(&(uParam0->f_449), 9);
	func_12(uParam0, 0);
	if (!unk_0x22A8E52414415B76())
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (Global_42596 == 1)
			{
				func_127(unk_0x16F2683693E537C9());
			}
			vVar0 = { uParam0->f_401 };
			vVar0 = { vVar0 + Vector(0,5f, (2,9f * cos((180f - uParam0->f_404))), (2,9f * sin((180f - uParam0->f_404)))) };
			unk_0xE82754C349C7B581(vVar0, &(vVar0.f_2), 0, 0);
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 134);
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vVar0, 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), uParam0->f_404);
			unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
			unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), true);
		}
		unk_0x5D96D8530B3D0904(&(uParam0->f_449), 7);
	}
	unk_0xBFE31971E49FA500(false);
	func_73(1);
	func_126();
	unk_0x56FCE5C6DA4AA600();
	unk_0x536F1BE96C726C4B(uParam0->f_401, 5f, 1, 1, 0, false);
	unk_0xD7AD2803AD9697F7(uParam0->f_401, 5f);
	unk_0x911B98CDC647AC76(1);
	unk_0xD02CE72B4B66DC29(82, 66);
	unk_0x744B56EE9DE7B57F(17, 0,612f, 0,818f);
	unk_0xD59EF13BB60323B9();
	func_125(&(uParam0->f_649), uParam0->f_405, uParam0->f_408, 45f, 18, 13, 3, uParam0->f_1.f_9, 0, 0, -1082130432, 0);
	iVar3 = unk_0xFBD08BECC9B87937(uParam0->f_401);
	if (iVar3 != 0)
	{
		unk_0x0007C2367F4F23F3(iVar3);
	}
	unk_0xB8842F7C7761A196(&(Global_94690[uParam0->f_1.f_1].f_7));
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x445BDC28669C33B9(unk_0xB1C09B89AED111A5(unk_0x16F2683693E537C9()));
	}
	func_124(0);
	func_123();
	unk_0x9CBC55A05A07FC47(0);
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_414, "TOGGLE_MOUSE_BUTTONS");
		unk_0x1200CC973A2399C8(false);
		unk_0x7E60D21B163E9D56();
	}
	uParam0->f_466 = unk_0xE32F7AC5E6DF304A(2, 10, true);
	unk_0x5D96D8530B3D0904(&(uParam0->f_449), 2);
	Global_94751 = 1;
	func_7(uParam0, uParam0->f_464, 0);
}

void func_123()
{
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		func_16(iVar0);
		iVar0++;
	}
	Global_111638.f_20405.f_145 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_111638.f_20405.f_146[iVar0] = 0;
		iVar0++;
	}
	if (unk_0xFEBC1E4EC9E001F0())
	{
		unk_0xA37A90C62806D848(1);
	}
}

void func_124(bool bParam0)
{
	if (!bParam0)
	{
		Global_110280 = unk_0x1C0640BA9A7327B3() + 250;
	}
	Global_110277 = bParam0;
}

void func_125(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, int iParam8, int iParam9, int iParam10, var uParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam4 };
	uParam0->f_7 = fParam7;
	uParam0->f_20 = iParam8;
	uParam0->f_21 = iParam9;
	uParam0->f_22 = iParam10;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam7;
	uParam0->f_18 = fParam7;
	uParam0->f_23 = iParam12;
	uParam0->f_19 = uParam11;
	*uParam0 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", false);
	unk_0xE3BB8E05FCEB3FBE(*uParam0, true);
	unk_0x86F44313DFA8F00C(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam15)
	{
		unk_0x91F5B0244AAE6222(*uParam0, "HAND_SHAKE", 0,19f);
	}
	unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
	if (fParam14 > 0f)
	{
		unk_0xDC3CC6D1845B0567(*uParam0, fParam14);
	}
	if (uParam0->f_23)
	{
		unk_0x3B05E4399DC8490C(iParam13);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_126()
{
	Global_22211.f_5 = 1;
}

void func_127(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return;
	}
	iVar0 = func_135(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_42383[iVar0];
		func_130(1, iVar1, 1);
		return;
	}
	iVar2 = func_129(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_128(iVar2);
}

void func_128(int iParam0)
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

int func_129(int iParam0)
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

void func_130(int iParam0, int iParam1, int iParam2)
{
	func_131(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_133(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_132();
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

int func_132()
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

int func_133(int iParam0, int iParam1, int iParam2)
{
	if (func_134(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_134(int iParam0, int iParam1, int iParam2)
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

int func_135(int iParam0)
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

void func_136(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_137(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0])
		{
			Global_42151[iVar0].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_137(int iParam0)
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

int func_138(int iParam0, bool bParam1)
{
	iVar0 = func_137(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 0;
	}
	if (func_149(0))
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

void func_139(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (unk_0x8A22C4C08282BF26(1974937116) < 1)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*uParam0 == -1)
		{
			func_136(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
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
			*uParam0 = Global_42151[iVar0].f_1;
			return;
		}
		iVar0++;
	}
}

int func_140(int iParam0)
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_100();
				if (!func_102(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_148()) || Global_110685) || Global_30770) || func_147()) || func_107(8, -1)) || func_146()) || func_145()) || func_144()) || func_143()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1) || func_148()) || Global_30770) || func_147()) || func_107(8, -1)) || func_144()) || func_146()) || func_145()) || func_143()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_148()) || Global_110685) || Global_30770) || func_147()) || func_107(8, -1)) || func_144()) || func_146()) || func_145()) || func_143()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_148()) || Global_110685) || Global_30770) || func_147()) || func_107(8, -1)) || func_146()) || func_145()) || func_143()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_148() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0) || func_107(8, -1)) || func_143()) || func_142()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_107(8, -1) || func_146()) || func_145()) || func_142()) || func_141())
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
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_148()) || Global_30770) || func_147()) || func_107(8, -1)) || func_145()) || func_144()) || func_143()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || func_148()) || func_145()) || Global_110685) || Global_30770) || func_147()) || Global_42596) || func_107(8, -1)) || func_144()) || func_142()) || func_143()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_148()) || Global_110685) || Global_30770) || func_147()) || func_107(8, -1)) || func_144()) || func_142()) || func_146()) || func_145()) || func_143())
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

var func_141()
{
	return Global_98783.f_1;
}

int func_142()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666].f_15, 13);
	}
	return 0;
}

int func_143()
{
	if (unk_0x8A22C4C08282BF26(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

int func_144()
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

bool func_145()
{
	return Global_98796.f_346 > 0;
}

bool func_146()
{
	return Global_98796.f_345 > 0;
}

var func_147()
{
	return Global_1312877;
}

int func_148()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_149(int iParam0)
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

bool func_150(int iParam0)
{
	return func_151(iParam0, Global_41431);
}

int func_151(int iParam0, int iParam1)
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

void func_152()
{
	if (func_395(25))
	{
		iVar0 = func_66(func_31(4));
		if (iVar0 != iLocal_49)
		{
			unk_0x5C8D148FC238F38A();
			switch (iVar0)
			{
				case 8:
					sLocal_42 = "BS_2A_INT";
					break;
				
				case 9:
					sLocal_42 = "BS_2B_INT";
					break;
			}
			iLocal_49 = iVar0;
		}
		if (iLocal_49 != -1)
		{
			unk_0xAE1670DD12E839C3(sLocal_42, 8);
		}
		if (unk_0x75EECC9B0572F772())
		{
			unk_0xA2888AACD3C45CCA("LESTER", 1, 0, 0, 0);
		}
	}
	if (func_395(26))
	{
		if (func_395(25))
		{
			if (unk_0xA0F4292EA950943D(sLocal_42))
			{
				if (!func_2(0))
				{
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
					{
						unk_0x29E8331978B73E7F(iLocal_130, "Michael", 0, 225514697, 0);
					}
				}
				else if (!unk_0x437347B10A200C4B(iLocal_130, 0))
				{
					unk_0x29E8331978B73E7F(iLocal_130, "Michael", 0, 225514697, 0);
				}
				if (!unk_0x437347B10A200C4B(iLocal_133, 0))
				{
					unk_0x29E8331978B73E7F(iLocal_133, "Lester", 0, 1302784073, 0);
				}
				if (!unk_0x437347B10A200C4B(iLocal_131, 0))
				{
					unk_0x29E8331978B73E7F(iLocal_131, "Franklin", 0, -1692214353, 0);
				}
				if (!unk_0x437347B10A200C4B(iLocal_132, 0))
				{
					unk_0x29E8331978B73E7F(iLocal_132, "Trevor", 0, -1686040670, 0);
				}
				func_73(1);
				func_124(1);
				func_211(1, 1, 1, 0, 0, 0);
				iVar1 = 0;
				while (iVar1 < func_210(4))
				{
					if (func_208(4, iVar1) == 12)
					{
						func_194(-837794877);
					}
					iVar1++;
				}
				if (bLocal_47)
				{
					iVar2 = 0;
				}
				else
				{
					iVar2 = 256;
				}
				unk_0x4C902758BEA97C68(iVar2);
				if (func_2(0))
				{
					unk_0xFCA2A436FD40C153(0, 0, 0, 0);
				}
				func_115(25, 0);
				iLocal_44 = unk_0x1C0640BA9A7327B3();
			}
		}
		else if (unk_0x22A8E52414415B76())
		{
			iLocal_44 = iLocal_44;
			func_120();
			if (unk_0x3148AE92ED70DC30("LESTER", 0))
			{
				if (unk_0xC844350D5D58C99A(iLocal_133))
				{
					unk_0xEBA53F35D0085654(&iLocal_133);
				}
			}
			if (unk_0x3148AE92ED70DC30("MICHAEL", 0))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_130))
				{
					unk_0xBD453909DC26A85D(iLocal_130, -668482597, false, 1, 0);
					if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
					{
						unk_0x5A9FF5F994E904B8(unk_0xD803B885F5E47A62(), 1f, 2000, 0, 1, 0);
					}
				}
				func_193(0);
			}
			if (unk_0x3148AE92ED70DC30("FRANKLIN", 0))
			{
				if (unk_0xC844350D5D58C99A(iLocal_131))
				{
					unk_0xEBA53F35D0085654(&iLocal_131);
				}
			}
			if (unk_0x3148AE92ED70DC30("TREVOR", 0))
			{
				if (unk_0xC844350D5D58C99A(iLocal_132))
				{
					unk_0xEBA53F35D0085654(&iLocal_132);
				}
			}
			if (unk_0xEABED1927EFB48CA(1))
			{
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(0f, 1065353216);
			}
		}
		else if (iLocal_45 == -1 && !func_2(0))
		{
			iLocal_45 = unk_0x1C0640BA9A7327B3() + 3500;
		}
		else if (unk_0x1C0640BA9A7327B3() > iLocal_45 || func_2(0))
		{
			if (func_2(0))
			{
				unk_0x53491B90E4FD0E56(0);
			}
			else
			{
				Global_61512 = 0;
				Global_98783 = 0;
				func_192();
			}
			func_73(0);
			func_211(0, 1, 1, 0, 0, 0);
			func_191();
			func_189(&(Global_111638.f_2358.f_539), 77);
			func_161(&(Global_111638.f_2358.f_539), 77);
			func_160(&iLocal_46);
			unk_0x0674E58A79778E99(&iLocal_43, 3);
			func_115(26, 0);
			unk_0x2952D66A502EA873(iLocal_179, 0);
			if (iLocal_180 != -1)
			{
				if (unk_0x49083FDB78AC0509(iLocal_180))
				{
					unk_0xDDABC98CFF1A4C60(iLocal_180);
				}
			}
			unk_0xEFED0CD6E25037B9();
			unk_0x17E8C6920A1E386F(Local_182.f_1.f_394 - Local_182.f_1.f_397, Local_182.f_1.f_394 + Local_182.f_1.f_397, true, 0);
			unk_0x34D79252800B23FF(5);
			func_153(4, 0);
		}
	}
	else if (!func_395(25))
	{
		if (unk_0xA0F4292EA950943D(sLocal_42))
		{
			unk_0x5C8D148FC238F38A();
		}
	}
}

void func_153(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		iVar1 = iVar0;
		if (func_40(iVar1) || func_39(iVar1))
		{
			if (!(iVar1 == 11 && iParam0 == 3))
			{
				switch (iVar1)
				{
					case 1:
						func_157(4, 1);
						break;
					
					case 4:
						func_157(8, 1);
						break;
					
					case 6:
						func_157(10, 1);
						break;
					
					case 7:
						func_157(1, 1);
						break;
					
					case 8:
						func_157(3, 1);
						break;
					
					case 9:
						func_157(6, 1);
						break;
					
					case 10:
						func_157(9, 1);
						break;
					
					case 12:
						func_157(11, 1);
						break;
					
					case 13:
						func_157(12, 1);
						break;
					
					case 11:
						if (func_156(91))
						{
							func_157(0, 1);
						}
						break;
					
					case 5:
						if (func_156(91))
						{
							func_157(2, 1);
						}
						break;
					
					case 3:
						if (func_156(67))
						{
							func_157(5, 1);
						}
						break;
					
					case 2:
						if (func_156(77))
						{
							func_157(7, 1);
						}
						break;
					}
				}
		}
		iVar0++;
	}
	if (!func_40(10) && unk_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[4], 0))
	{
		func_157(9, 1);
	}
	if (!func_40(13) && unk_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[16], 0))
	{
		func_157(12, 1);
	}
	if (!func_40(12))
	{
		if (iParam0 == 4)
		{
			func_157(11, 1);
		}
	}
	if (!bParam1)
	{
		if (!func_155(69))
		{
			func_22("DI_HLP_HST", 2, 0, 20000, 10000, 7, 0, 209, 0);
		}
		func_154("DI_FEED_HST");
	}
}

void func_154(char* sParam0)
{
	unk_0x1E64CE678ED5F61E("");
	unk_0x49E52B24E5A757B3("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

int func_155(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_20405.f_150[iVar1], iVar0);
	}
	return 0;
}

int func_156(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_330[iParam0];
}

void func_157(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!func_159(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_26429.f_1), iVar0);
			if (!bParam1)
			{
				func_154(func_158(iParam0));
			}
		}
	}
}

char* func_158(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CM_HSTCHE";
			break;
		
		case 1:
			return "CM_HSTCHR";
			break;
		
		case 2:
			return "CM_HSTDAR";
			break;
		
		case 3:
			return "CM_HSTEDD";
			break;
		
		case 4:
			return "CM_HSTGUS";
			break;
		
		case 5:
			return "CM_HSTHUG";
			break;
		
		case 6:
			return "CM_HSTKRM";
			break;
		
		case 7:
			return "CM_HSTKAR";
			break;
		
		case 8:
			return "CM_HSTNOR";
			break;
		
		case 9:
			return "CM_HSTPAC";
			break;
		
		case 10:
			return "CM_HSTPAI";
			break;
		
		case 11:
			return "CM_HSTRIC";
			break;
		
		case 12:
			return "CM_HSTTAL";
			break;
	}
	return "ERROR!";
}

int func_159(int iParam0)
{
	if (iParam0 != -1 && iParam0 != 13)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_26429.f_1, iParam0);
	}
	return 0;
}

void func_160(int iParam0)
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

void func_161(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 17:
			func_162(uParam0, 0, 12);
			break;
		
		case 19:
			func_162(uParam0, 1, 13);
			break;
		
		case 29:
			func_162(uParam0, 1, 14);
			break;
		
		case 30:
			func_162(uParam0, 2, 15);
			func_162(uParam0, 1, 29);
			break;
		
		case 32:
			func_162(uParam0, 1, 16);
			func_162(uParam0, 0, 17);
			break;
		
		case 39:
			func_162(uParam0, 0, 21);
			func_162(uParam0, 1, 20);
			break;
		
		case 31:
			func_162(uParam0, 0, 18);
			break;
		
		case 20:
			func_162(uParam0, 2, 22);
			break;
		
		case 66:
			func_162(uParam0, 1, 23);
			break;
		
		case 68:
			func_162(uParam0, 1, 24);
			break;
		
		case 70:
			func_162(uParam0, 1, 67);
			break;
		
		case 8:
			func_162(uParam0, 1, 25);
			func_162(uParam0, 2, 26);
			break;
		
		case 67:
			func_162(uParam0, 1, 27);
			break;
		
		case 9:
			func_162(uParam0, 2, 28);
			break;
		
		case 38:
			func_162(uParam0, 2, 30);
			func_162(uParam0, 1, 19);
			break;
		
		case 83:
			func_162(uParam0, 2, 33);
			break;
		
		case 45:
			func_162(uParam0, 1, 35);
			break;
		
		case 64:
			func_162(uParam0, 0, 36);
			func_162(uParam0, 1, 37);
			break;
		
		case 91:
			func_162(uParam0, 0, 41);
			break;
		
		case 42:
			func_162(uParam0, 0, 58);
			Global_98148[0] = 0;
			func_162(uParam0, 2, 59);
			Global_98148[2] = 0;
			break;
		
		case 41:
			func_162(uParam0, 1, 42);
			func_162(uParam0, 2, 42);
			break;
		
		case 15:
			func_162(uParam0, 0, 46);
			func_162(uParam0, 1, 47);
			break;
		
		case 16:
			func_162(uParam0, 0, 48);
			break;
		
		case 48:
			func_162(uParam0, 1, 50);
			func_162(uParam0, 2, 51);
			break;
		
		case 74:
			func_162(uParam0, 0, 52);
			func_162(uParam0, 1, 66);
			break;
		
		case 76:
			func_162(uParam0, 1, 53);
			func_162(uParam0, 2, 54);
			func_162(uParam0, 0, 62);
			break;
		
		case 75:
			func_162(uParam0, 0, 61);
			func_162(uParam0, 1, 31);
			break;
		
		case 69:
			func_162(uParam0, 1, 63);
			break;
		
		case 84:
			func_162(uParam0, 0, 68);
			func_162(uParam0, 2, 69);
			break;
		
		case 85:
			func_162(uParam0, 0, 64);
			func_162(uParam0, 2, 65);
			break;
		
		case 93:
			func_162(uParam0, 1, 38);
			func_162(uParam0, 2, 39);
			break;
		
		case 11:
			func_162(uParam0, 2, 55);
			break;
		
		case 77:
			func_162(uParam0, 1, 56);
			func_162(uParam0, 2, 57);
			break;
		
		default:
			break;
	}
}

int func_162(var uParam0, int iParam1, int iParam2)
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[0], 9))
	{
		iVar0 = Global_111638.f_18528[iParam1];
		if (iVar0 == 11)
		{
			return 0;
		}
		if ((iVar0 == 8 || iVar0 == 9) || iVar0 == 10)
		{
			return 0;
		}
	}
	Global_111638.f_18528[iParam1] = iParam2;
	uParam0->f_2296[iParam1] = func_178();
	if (!func_177(iParam2, &(uParam0->f_2300[iParam1]), &(uParam0->f_2310[iParam1])))
	{
		return 0;
	}
	if (!func_176(uParam0->f_2300[iParam1], 0f, 0f, 0f, 0))
	{
		if (!func_176(Global_97183[iParam2], 0f, 0f, 0f, 0))
		{
			Var1.f_11 = 12;
			Var1.f_31 = 49;
			Var1.f_81 = 2;
			if (func_163(iParam1, iParam2, &Var1, &uVar99, &uVar102, &uVar103, &uVar106))
			{
				Global_98148[iParam1] = { Var1 };
			}
		}
	}
	uParam0->f_2314[iParam1] = 0;
	uParam0->f_2318[iParam1] = { 0f, 0f, 0f };
	uParam0->f_2328[iParam1] = 0;
	return 1;
}

int func_163(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	uParam2->f_3 = 1000;
	uParam2->f_1 = 0;
	uParam2->f_84 = 255;
	uParam2->f_85 = 255;
	uParam2->f_86 = 255;
	switch (iParam1)
	{
		case 5:
			*uParam2 = { Global_98148[iParam0] };
			if (Global_98443[iParam0] != 2)
			{
				if (unk_0x0399732A9EBC368E(Global_98451[iParam0], -829,7478f, 192,117f, 76,73248f, -827,1384f, 153,8595f, 59,96172f, 33,25f, 0, true))
				{
					if (Global_98443[iParam0] == 1)
					{
						*uParam3 = { Global_98451[iParam0] - Global_111638.f_2358.f_539.f_2300[iParam0] };
						*uParam4 = (Global_98461[iParam0] - Global_111638.f_2358.f_539.f_2310[iParam0]);
						if (vmag2(*uParam3) > (5f * 5f))
						{
							*uParam3 = { 0f, 0f, 0f };
							*uParam4 = 0f;
							return 0;
						}
					}
				}
				*uParam3 = { Global_98451[iParam0] - Global_111638.f_2358.f_539.f_2300[iParam0] };
				*uParam4 = (Global_98461[iParam0] - Global_111638.f_2358.f_539.f_2310[iParam0]);
				if (vmag2(*uParam3) < (0,5f * 0,5f))
				{
					*uParam3 = { *uParam3 * Vector(1,5f, 1,5f, 1,5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 6:
			*uParam2 = { Global_98148[iParam0] };
			if (Global_98443[iParam0] != 2)
			{
				*uParam3 = { Global_98451[iParam0] - Global_111638.f_2358.f_539.f_2300[iParam0] };
				*uParam4 = (Global_98461[iParam0] - Global_111638.f_2358.f_539.f_2310[iParam0]);
				if (vmag2(*uParam3) < (0,5f * 0,5f))
				{
					*uParam3 = { *uParam3 * Vector(1,5f, 1,5f, 1,5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 7:
			*uParam2 = { Global_98148[iParam0] };
			if (Global_98443[iParam0] != 2)
			{
				*uParam3 = { Global_98451[iParam0] - Global_111638.f_2358.f_539.f_2300[iParam0] };
				*uParam4 = (Global_98461[iParam0] - Global_111638.f_2358.f_539.f_2310[iParam0]);
				if (vmag2(*uParam3) < (0,5f * 0,5f))
				{
					*uParam3 = { *uParam3 * Vector(1,5f, 1,5f, 1,5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 11:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { 37,43f, -23,81f, 0f };
			*uParam4 = 127f;
			return 1;
			break;
		
		case 8:
			uParam2->f_97 = 0;
			*uParam2 = 914654722;
			*uParam3 = { Vector(28,826f, -1277,56f, -90,961f) - Vector(28,3203f, -1324,195f, -90,0089f) };
			*uParam4 = (1,27f - 194,1887f);
			return 1;
			break;
		
		case 9:
			return func_163(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 10:
			return func_163(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 13:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 14:
			func_165(iParam0, uParam2, 2);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 15:
			uParam2->f_97 = 0;
			*uParam2 = 744705981;
			uParam2->f_5 = 34;
			uParam2->f_6 = 34;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 55:
			uParam2->f_97 = 0;
			*uParam2 = 914654722;
			*uParam3 = { Vector(4,8006f, -2965,499f, 782,1644f) - Vector(4,0205f, -2975,341f, 798,4536f) };
			*uParam4 = (246,1684f - 90f);
			return 1;
			break;
		
		case 56:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		
		case 57:
			uParam2->f_97 = 0;
			*uParam2 = -377465520;
			*uParam3 = { Vector(28,764f, -1431,464f, 66,028f) - Vector(28,2954f, -1351,52f, 37,5988f) };
			*uParam4 = (141,28f - 90,0339f);
			return 1;
			break;
		
		case 12:
			uParam2->f_97 = 0;
			*uParam2 = -956048545;
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 16:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 17:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 18:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 19:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 20:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 23:
			return func_163(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 24:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 67:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 21,6401f, 38,5601f, 1,9708f };
			*uParam4 = -84f;
			return 1;
			break;
		
		case 58:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 59:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 60:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 22:
			uParam2->f_97 = 0;
			*uParam2 = -2137348917;
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		
		case 74:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 38:
			func_165(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 41:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { -2,72f, 0,45f, 1f };
			*uParam4 = -137f;
			return 1;
			break;
		
		case 25:
			uParam2->f_97 = 0;
			*uParam2 = -344943009;
			*uParam3 = { Vector(29,17f, -1417,047f, 54,081f) - Vector(28,2915f, -1464,68f, 72,2278f) };
			*uParam4 = (0,72f - 156,8827f);
			return 1;
			break;
		
		case 27:
			uParam2->f_97 = 0;
			*uParam2 = 1221512915;
			*uParam3 = { Vector(24,9f, -938,8f, 792,3f) - Vector(24,2312f, -906f, 763f) };
			*uParam4 = (2,23f - 7,2736f);
			return 1;
			break;
		
		case 26:
			uParam2->f_97 = 0;
			*uParam2 = 1830407356;
			*uParam3 = { Vector(28,701f, -1090,07f, 306,036f) - Vector(28,3684f, -1120,786f, 257,9167f) };
			*uParam4 = (-1f - 97,2736f);
			return 1;
			break;
		
		case 40:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16,5182f, -8,5576f, -2,3291f };
			*uParam4 = 174,24f;
			return 1;
			break;
		
		case 28:
			uParam2->f_97 = 0;
			*uParam2 = 353883353;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 234:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16,5182f, -8,5576f, -2,3291f };
			*uParam4 = 174,24f;
			return 1;
			break;
		
		case 75:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 2,5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 76:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 2,5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 42:
			uParam2->f_97 = 0;
			*uParam2 = 914654722;
			*uParam3 = { Vector(4,8006f, -2965,499f, 782,1644f) - Vector(4,0205f, -2975,341f, 798,4536f) };
			*uParam4 = (246,1684f - 90f);
			return 1;
			break;
		
		case 43:
			uParam2->f_97 = 0;
			*uParam2 = 914654722;
			*uParam3 = { Vector(5,4446f, -2912,043f, 659,5297f) - Vector(5,0589f, -2916,479f, 709,0244f) };
			*uParam4 = (247,4806f - 355,326f);
			return 1;
			break;
		
		case 44:
			uParam2->f_97 = 0;
			*uParam2 = -599568815;
			*uParam3 = { Vector(5,1176f, -2936,843f, 656,9753f) - Vector(5,1337f, -2917,325f, 643,5248f) };
			*uParam4 = (253,776f - 334,1068f);
			return 1;
			break;
		
		case 45:
			uParam2->f_97 = 0;
			*uParam2 = -784816453;
			*uParam3 = { Vector(5,681f, -2769,795f, 593,033f) - Vector(5,0558f, -2819,085f, 594,4415f) };
			*uParam4 = (2,62f - 299,0519f);
			return 1;
			break;
		
		case 47:
			uParam2->f_97 = 0;
			*uParam2 = 2006918058;
			uParam2->f_5 = 0;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			StringCopy(&(uParam2->f_27), "22LJK483", 16);
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 49:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { -1,5f, 35f, 3f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 48:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 3,8721f, -5,9568f, 0f };
			*uParam4 = (164,2466f - 180f);
			return 1;
			break;
		
		case 50:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 51:
			uParam2->f_97 = 0;
			*uParam2 = -1961627517;
			*uParam3 = { Vector(28,1755f, -550,2679f, -1170,72f) - Vector(30,2361f, -526,9999f, -1257,5f) };
			*uParam4 = (310,4708f - 220,9554f);
			return 1;
			break;
		
		case 52:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12,5f;
			return 1;
			break;
		
		case 66:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12,5f;
			return 1;
			break;
		
		case 61:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 62:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 63:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { -2,9117f, -15,0499f, -0,3468f };
			*uParam4 = -139,9751f;
			return 1;
			break;
		
		case 64:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 69:
			uParam2->f_97 = 0;
			*uParam2 = -1450650718;
			*uParam3 = { Vector(36,5734f, -85,1799f, -737,1358f) - Vector(54f, 111f, -852f) };
			*uParam4 = (64,1848f - 180f);
			return 1;
			break;
		
		case 65:
		case 54:
			uParam2->f_97 = 0;
			*uParam2 = 1949211328;
			uParam2->f_5 = 40;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			uParam2->f_89 = 1;
			if (iParam1 == 54)
			{
				*uParam3 = { 5,5414f, -6,6035f, 1,0473f };
				*uParam4 = -83,2547f;
			}
			if (iParam1 == 65)
			{
				*uParam3 = { 5,7209f, -12,3958f, 1,0746f };
				*uParam4 = -152,2593f;
			}
			return 1;
			break;
		
		case 112:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f };
			*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
			return 1;
			break;
		
		case 113:
			if (func_163(iParam0, 112, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f };
				*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
				return 1;
			}
			break;
		
		case 118:
			uParam2->f_97 = 0;
			*uParam2 = -186537451;
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 1f, 12,5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 119:
			if (func_163(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 5f, 20f, 0f };
				*uParam6 = 5f;
				return 1;
			}
			break;
		
		case 120:
			if (func_163(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 30f, 0f };
				*uParam6 = 8f;
				return 1;
			}
			break;
		
		case 173:
			uParam2->f_97 = 0;
			*uParam2 = 448402357;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0,1f;
			*uParam5 = { 0,1f, 0,1f, 0,1f };
			*uParam6 = 0,1f;
			return 1;
			break;
		
		case 114:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1,9002f, 1,205f, -0,3537f };
			*uParam4 = -180f;
			return 1;
			break;
		
		case 105:
			func_165(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0,1f, 0f };
			*uParam6 = 0,5f;
			return 1;
			break;
		
		case 106:
			return func_163(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 107:
			return func_163(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 98:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0,1f;
			*uParam5 = { 0,1f, 0,1f, 0,1f };
			*uParam6 = 0,1f;
			return 1;
			break;
		
		case 99:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0f;
			return 1;
			break;
		
		case 100:
			return func_163(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 101:
			return func_163(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 102:
			return func_163(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 123:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { 3,2267f, 1,0966f, -0,354f };
			*uParam4 = -31,73f;
			return 1;
			break;
		
		case 125:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { -13,7322f, 1,8783f, 1,0593f };
			*uParam4 = 55,3652f;
			return 1;
			break;
		
		case 133:
			uParam2->f_97 = 0;
			*uParam2 = 290013743;
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			uParam2->f_11[0] = 0;
			uParam2->f_11[1] = 0;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 0;
			uParam2->f_11[4] = 0;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 89:
		case 90:
		case 127:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0,1f;
			return 1;
			break;
		
		case 91:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { 15,4538f, -8,711f, 5,79f };
			*uParam4 = 2,4942f;
			return 1;
			break;
		
		case 93:
			if (func_163(iParam0, 91, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -8,1f, -9,01f, 0,4439f };
				*uParam4 = 94,03f;
				return 1;
			}
			break;
		
		case 121:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { 18,8468f, 40,7721f, 0f };
			*uParam4 = -116,3936f;
			return 1;
			break;
		
		case 115:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(43,517f, -33,7052f, -531,6035f) - Vector(45,6141f, -21,87f, -511,73f) };
			*uParam4 = ((177,259f - 180f) - 69f);
			return 1;
			break;
		
		case 116:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { 1,7826f, 12,2098f, -0,6964f };
			*uParam4 = -96,0001f;
			return 1;
			break;
		
		case 117:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { 11,8705f, -1,4684f, -1,6487f };
			*uParam4 = -125,8331f;
			return 1;
			break;
		
		case 94:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { -13,1578f, 16,3962f, 0,6396f };
			*uParam4 = -177f;
			return 1;
			break;
		
		case 96:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { -21,0518f, 0,5037f, 0,4091f };
			*uParam4 = -83,1262f;
			return 1;
			break;
		
		case 108:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { 10,8971f, 2,0809f, -0,7983f };
			*uParam4 = -150,9417f;
			return 1;
			break;
		
		case 109:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { 79,9901f, -52,83f, -0,3533f };
			*uParam4 = 44,7231f;
			return 1;
			break;
		
		case 135:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f };
			*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
			return 1;
			break;
		
		case 136:
			if (func_163(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f };
				*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
				return 1;
			}
			break;
		
		case 137:
			if (func_163(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f };
				*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
				return 1;
			}
			break;
		
		case 138:
			if (func_163(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f };
				*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
				return 1;
			}
			break;
		
		case 139:
			if (func_163(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 2,4845f, 2,3286f, -0,383f };
				*uParam4 = -31,4884f;
				return 1;
			}
			break;
		
		case 140:
			if (func_163(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 141:
			if (func_163(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 40f, 0f };
				*uParam6 = 12,5f;
				return 1;
			}
			break;
		
		case 142:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 143:
			if (func_163(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 144:
			if (func_163(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 145:
			if (func_163(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 146:
			if (func_163(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 147:
			if (func_163(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 7,5f;
				return 1;
			}
			break;
		
		case 148:
			if (func_163(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 149:
			if (func_163(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 151:
			if (func_163(iParam0, 94, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -13,2213f, 16,331f, 0f };
				*uParam4 = 6f;
				return 1;
			}
			break;
		
		case 162:
			if (func_163(iParam0, 115, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 10,3876f, -10,3585f, -1,2183f };
				*uParam4 = 8,6726f;
				return 1;
			}
			break;
		
		case 158:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { 1,0793f, 15,631f, 1,1744f };
			*uParam4 = 2,52f;
			return 1;
			break;
		
		case 166:
			return func_163(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 170:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0,1f;
			*uParam5 = { 0,1f, 0,1f, 0,1f };
			*uParam6 = 0,1f;
			return 1;
			break;
		
		case 171:
			return func_163(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 172:
			return func_163(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 208:
			func_165(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0,1f, 0f };
			*uParam6 = 0,5f;
			return 1;
			break;
		
		case 209:
			return func_163(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 210:
			return func_163(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 211:
			func_164(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam3 = { -2,19f, -1,23f, 0f };
			*uParam4 = 90f;
			return 1;
			break;
		
		case 212:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { -1,3547f, 2,1615f, -0,3723f };
			*uParam4 = 177,8041f;
			return 1;
			break;
		
		case 213:
			if (func_163(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4,2075f, 1,0943f, 0f };
				*uParam4 = 15,82f;
				return 1;
			}
			break;
		
		case 214:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { 2,291f, 1,0879f, 0,0635f };
			*uParam4 = 177,798f;
			return 1;
			break;
		
		case 215:
			uParam2->f_97 = 0;
			*uParam2 = -956048545;
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { -0,9714f, 1,6112f, -0,2773f };
			*uParam4 = -7,0583f;
			*uParam5 = { Vector(183,8081f, 578,5989f, 174,7651f) - Vector(176,086f, 551,7596f, 10,9694f) };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 196:
			uParam2->f_97 = 0;
			*uParam2 = -956048545;
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { Vector(29,4846f, -1457,915f, -17,4132f) - Vector(31,1932f, -1441,182f, -14,8689f) };
			*uParam4 = (89,0026f - -1,5f);
			*uParam5 = { Vector(33,6125f, -1563,461f, -147,0307f) - Vector(31,1932f, -1441,182f, -14,8689f) };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 221:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(43,5168f, -33,5909f, -531,4f) - Vector(45,2617f, -28,54f, -521,13f) };
			*uParam4 = (357,1407f - 84,96f);
			return 1;
			break;
		
		case 216:
			if (func_163(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -2,1752f, -2,3781f, 0f };
				*uParam4 = -68,4f;
				return 1;
			}
			break;
		
		case 217:
			if (func_163(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -3,9761f, 0,2542f, 0f };
				*uParam4 = -70,5273f;
				return 1;
			}
			break;
		
		case 232:
		case 233:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { Vector(28,225f, -1015,11f, -70,4456f) - Vector(27,5447f, -1019,235f, -78,4023f) };
			*uParam4 = (162,098f - 109,0206f);
			return 1;
			break;
		
		case 192:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(3,403f, -1531,113f, -1190,017f) - Vector(4,7514f, -1573,632f, -1174,458f) };
			*uParam4 = (302,182f - 105,981f);
			return 1;
			break;
		
		case 193:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(3,403f, -1531,113f, -1190,017f) - Vector(4,3599f, -1573,692f, -1175,298f) };
			*uParam4 = (302,182f - 172,9187f);
			return 1;
			break;
		
		case 194:
			if (func_163(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 12,74f, 3,26f, 0f };
				*uParam4 = 95,217f;
				return 1;
			}
			break;
		
		case 195:
			if (func_163(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -1,34f, 7,684f, 0f };
				*uParam4 = 173,52f;
				return 1;
			}
			break;
		
		case 200:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,4055f, -1607,568f, 44,4802f) - Vector(((28,2858f - 0,5f) + 1,5f), -1607,286f, 2,8895f) };
			*uParam4 = (318,2674f - (310,879f - 180f));
			return 1;
			break;
		
		case 201:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,1773f, -1592,787f, 3,6009f) - Vector(29,2903f, -1607,286f, 2,8895f) };
			*uParam4 = (322,6286f - 130,879f);
			return 1;
			break;
		
		case 202:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { 91,3579f, 18,1788f, -0,1911f };
			*uParam4 = -90,3475f;
			return 1;
			break;
		
		case 222:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { 12,5073f, -3,4625f, -0,3702f };
			*uParam4 = 14,3405f;
			return 1;
			break;
		
		case 223:
			if (func_163(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 21,87f, -10,5f, 0f };
				*uParam4 = -104,76f;
				return 1;
			}
			break;
		
		case 224:
			return func_163(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 226:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,7f, -1356,9f, 24,6f) - Vector(29,3437f, -1351,412f, 28,986f) };
			*uParam4 = ((270,1767f - 160f) - 180f);
			return 1;
			break;
		
		case 227:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { -19,8544f, -10,4863f, -0,0334f };
			*uParam4 = -120,12f;
			return 1;
			break;
		
		case 228:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { 21,5897f, -6,8544f, 0,6015f };
			*uParam4 = -141f;
			return 1;
			break;
		
		case 229:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { -7,6041f, 0,1369f, 0,5812f };
			*uParam4 = -145,769f;
			return 1;
			break;
		
		case 230:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { -1,6f, 7,6802f, 0,6947f };
			*uParam4 = -50,99f;
			return 1;
			break;
		
		case 238:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 22,322f, -6,2034f, 0f };
			*uParam4 = 73,071f;
			return 1;
			break;
		
		case 250:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1,2901f, -5,5798f, -0,0357f };
			*uParam4 = 160,56f;
			return 1;
			break;
		
		case 251:
			if (func_163(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4,0739f, 7,7692f, -0,2984f };
				*uParam4 = -48,9552f;
				return 1;
			}
			break;
		
		case 252:
			if (func_163(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -5,778f, -4,2397f, 0,9091f };
				*uParam4 = -12,9418f;
				return 1;
			}
			break;
		
		case 253:
			if (func_163(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 0,6968f, 1,1033f, 0,912f };
				*uParam4 = 90f;
				return 1;
			}
			break;
		
		case 281:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0,6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 282:
			if (func_163(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 283:
			if (func_163(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 284:
			if (func_163(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				uParam2->f_97 = 0;
				*uParam2 = 55628203;
				uParam2->f_91 = 0;
				return 1;
			}
			break;
		
		case 275:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0,6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 276:
			return func_163(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 277:
			return func_163(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 280:
			if (!Global_3)
			{
				uParam2->f_97 = 0;
				*uParam2 = 290013743;
				uParam2->f_11[0] = 0;
				uParam2->f_11[1] = 0;
				uParam2->f_11[2] = 1;
				uParam2->f_11[3] = 0;
				uParam2->f_11[4] = 0;
				uParam2->f_11[5] = 1;
				uParam2->f_11[6] = 1;
				uParam2->f_11[7] = 1;
				uParam2->f_11[8] = 1;
			}
			else
			{
				uParam2->f_97 = 0;
				*uParam2 = 1033245328;
			}
			*uParam3 = { Vector(-0,6187f, -1440,421f, 2779,759f) - Vector(0,3109f, -1453,731f, 2789,845f) };
			uParam3->f_2 = (uParam3->f_2 + 0,5f);
			*uParam4 = (340,0835f - 4,44f);
			*uParam3 = { Vector(-0,7f, 16,55f, -3,3962f) + Vector(0,5f, 0,5f, -0,5f) };
			*uParam4 = (23,6441f + 90f);
			*uParam3 = { -4,0164f, 19,9594f, 0f };
			*uParam4 = 113,6465f;
			*uParam3 = { *uParam3 * Vector(1,1f, 1,1f, 1,1f) };
			return 1;
			break;
		
		case 247:
			uParam2->f_97 = 0;
			*uParam2 = 788045382;
			*uParam3 = { 9,8707f, 13,0084f, 0f };
			*uParam4 = ((-114f - 43f) + 133f);
			return 1;
			break;
		
		case 288:
			uParam2->f_97 = 0;
			*uParam2 = -810318068;
			*uParam3 = { -7,7078f, 23,9099f, 1,7307f };
			*uParam4 = 24,3187f;
			return 1;
			break;
		
		case 309:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { -4,5662f, -3,2485f, (0,9455f - 1,7f) };
			*uParam4 = -138,6056f;
			return 1;
			break;
		
		case 305:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(33,8797f, 3597,047f, 1399,662f) - Vector(37,9419f, 3602,284f, 1394,208f) };
			*uParam4 = (315,9865f - 122,5269f);
			return 1;
			break;
		
		case 310:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { 10,5999f, 3,3997f, 1,0212f };
			*uParam4 = -50,3062f;
			return 1;
			break;
		
		case 255:
			uParam2->f_97 = 0;
			*uParam2 = 627094268;
			*uParam3 = { -13,2279f, -7,5348f, 0f };
			*uParam4 = 4,32f;
			return 1;
			break;
		
		case 265:
			uParam2->f_97 = 0;
			*uParam2 = 1131912276;
			*uParam3 = { 11,9596f, 0,345f, -1,0016f };
			*uParam4 = -42,4225f;
			return 1;
			break;
		
		case 285:
			uParam2->f_97 = 0;
			*uParam2 = -1745203402;
			*uParam3 = { 3,424f, 7,6462f, 0,8227f };
			*uParam4 = -150f;
			return 1;
			break;
		
		case 256:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(7,1164f, -1094,205f, -1243,65f) - Vector(7,1f, -1105,15f, -1242,68f) };
			*uParam4 = (14,0848f - 120f);
			return 1;
			break;
		
		case 257:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(6,8143f, -930,5448f, -1672,535f) - Vector(6,479f, -974,7168f, -1667,148f) };
			*uParam4 = (144,9416f - 171,253f);
			return 1;
			break;
		
		case 258:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(30,3025f, 6276,12f, -267,5488f) - Vector(30,5054f, 6250,9f, -301,4778f) };
			*uParam4 = (130,9896f - 10,247f);
			return 1;
			break;
		
		case 314:
			uParam2->f_97 = 0;
			*uParam2 = -644710429;
			*uParam5 = { 0f, 150f, 20f };
			*uParam6 = 30f;
			return 1;
			break;
	}
	switch (iParam1)
	{
		case 110:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(32,5629f, -387,5143f, -147,166f) - Global_97183[iParam1] };
			*uParam4 = (341,4322f - 133f);
			return 1;
			break;
		
		case 111:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(24,4283f, -689,1462f, -1306,782f) - Global_97183[iParam1] };
			*uParam4 = (214,6826f - 33f);
			return 1;
			break;
		
		case 153:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(79,3324f, 254,0631f, -708,9244f) - Global_97183[iParam1] };
			*uParam4 = (115,2022f - -176,25f);
			return 1;
			break;
		
		case 154:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(79,3324f, 254,0631f, -708,9244f) - Global_97183[iParam1] };
			*uParam4 = (115,2022f - -147,192f);
			return 1;
			break;
		
		case 165:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(35,0054f, -441,1681f, -1100,878f) - Global_97183[iParam1] };
			*uParam4 = (297,5568f - -144,622f);
			return 1;
			break;
		
		case 159:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(36,3852f, -199,5354f, -825,3141f) - Global_97183[iParam1] };
			*uParam4 = (29,4869f - -62,5f);
			return 1;
			break;
		
		case 160:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(36,2086f, -144,1027f, -730,8218f) - Global_97183[iParam1] };
			*uParam4 = (28,532f - 119f);
			return 1;
			break;
		
		case 167:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(31,7307f, -523,2257f, -1144,174f) - Global_97183[iParam1] };
			*uParam4 = (299,2956f - -22,32f);
			return 1;
			break;
		
		case 152:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(60,9436f, 314,6989f, -1421,8f) - Global_97183[iParam1] };
			*uParam4 = (335,4134f - 72f);
			return 1;
			break;
		
		case 157:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(79,469f, 255,3143f, -706,187f) - Global_97183[iParam1] };
			*uParam4 = (117,3069f - 37,27f);
			return 1;
			break;
		
		case 225:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,7165f, -1677,734f, 185,4888f) - Global_97183[iParam1] };
			*uParam4 = (54,2538f - -83,8f);
			return 1;
			break;
		
		case 218:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,3218f, -1405,159f, -17,556f) - Global_97183[iParam1] };
			*uParam4 = (91,3098f - -70,4124f);
			return 1;
			break;
		
		case 219:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(30,2611f, -1492,151f, -219,3172f) - Global_97183[iParam1] };
			*uParam4 = (139,2572f - -12f);
			return 1;
			break;
		
		case 220:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(25,3018f, -1811,693f, -22,6138f) - Global_97183[iParam1] };
			*uParam4 = (141,0423f - -117,356f);
			return 1;
			break;
		
		case 206:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(208,5337f, 773,6719f, 164,1308f) - Global_97183[iParam1] };
			*uParam4 = (136,3104f - -36f);
			return 1;
			break;
		
		case 207:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(108,9995f, 396,924f, -263,3745f) - Global_97183[iParam1] };
			*uParam4 = (284,4611f - -95,588f);
			return 1;
			break;
		
		case 274:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(139,5782f, 2030,446f, -1883,836f) - Global_97183[iParam1] };
			*uParam4 = (340,5746f - 9f);
			return 1;
			break;
		
		case 312:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(10,0296f, 6560,557f, -200,684f) - Global_97183[iParam1] };
			*uParam4 = (134,5505f - 110,5931f);
			return 1;
			break;
		
		case 271:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(6,4647f, -1083,751f, -1278,023f) - Global_97183[iParam1] };
			*uParam4 = (115,8919f - 26,3597f);
			return 1;
			break;
		
		case 248:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(102,4417f, 164,5124f, 325,8113f) - Global_97183[iParam1] };
			*uParam4 = (68,4108f - 10,77f);
			return 1;
			break;
		
		case 242:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(56,616f, -122,9896f, -1622,22f) - Global_97183[iParam1] };
			*uParam4 = (210,8653f - 13,7207f);
			return 1;
			break;
		
		case 254:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(53,0019f, -213,7796f, 172,442f) - Global_97183[iParam1] };
			*uParam4 = (250,3032f - -40f);
			return 1;
			break;
		
		case 287:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(17,3426f, -836,0328f, -887,9977f) - Global_97183[iParam1] };
			*uParam4 = (270,8607f - -81f);
			return 1;
			break;
		
		case 286:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(4,8359f, -1182,704f, -1264,218f) - Global_97183[iParam1] };
			*uParam4 = (298,4328f - -150f);
			return 1;
			break;
		
		case 239:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(104,8218f, 289,0073f, -80,4564f) - Global_97183[iParam1] };
			*uParam4 = (247,6446f - -122f);
			return 1;
			break;
		
		case 243:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,2762f, -1477,282f, 434,9171f) - Global_97183[iParam1] };
			*uParam4 = (228,6353f - 18f);
			return 1;
			break;
		
		case 244:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,2762f, -1477,282f, 434,9171f) - Global_97183[iParam1] };
			*uParam4 = (228,6353f - -51f);
			return 1;
			break;
		
		case 249:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(103,1881f, 177,7729f, 288,977f) - Global_97183[iParam1] };
			*uParam4 = (68,9831f - (138f - 180f));
			return 1;
			break;
		
		case 273:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(32,7794f, -432,4635f, -161,4589f) - Global_97183[iParam1] };
			*uParam4 = (340,0368f - -153f);
			return 1;
			break;
		
		case 92:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(202,1143f, 828,3607f, -806,8813f) - Global_97183[iParam1] };
			*uParam4 = (101,1612f - -54,347f);
			return 1;
			break;
		
		case 103:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(12,0174f, -1108,081f, -1724,72f) - Global_97183[iParam1] };
			*uParam4 = (319,8931f - 143,4931f);
			return 1;
			break;
		
		case 109:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(10,2248f, -628,4899f, -1859,505f) - Global_97183[iParam1] };
			*uParam4 = (229,0784f - 99f);
			return 1;
			break;
		
		case 81:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(53,1469f, 90,4242f, -1393,442f) - Global_97183[iParam1] };
			*uParam4 = (123,1782f - -45f);
			return 1;
			break;
		
		case 95:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(101,921f, 186,1865f, 370,5876f) - Global_97183[iParam1] };
			*uParam4 = (159,7861f - 70f);
			return 1;
			break;
		
		case 97:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(45,9871f, -188,5636f, -1391,156f) - Global_97183[iParam1] };
			*uParam4 = (36,5172f - -45f);
			return 1;
			break;
		
		case 134:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(46,0567f, 3076,742f, 2001,918f) - Global_97183[iParam1] };
			*uParam4 = (328,101f - -33,128f);
			return 1;
			break;
		
		case 88:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(60,9442f, 314,7191f, -1421,821f) - Global_97183[iParam1] };
			*uParam4 = (336,5938f - -132f);
			return 1;
			break;
		
		case 306:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(37,4888f, 5643,726f, -569,3535f) - Global_97183[iParam1] };
			*uParam4 = (296,1685f - unk_0xE7D606C557C86100(7,4998f, -7,4995f));
			return 1;
			break;
		
		case 307:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(47,4526f, 4717,728f, -1555,593f) - Global_97183[iParam1] };
			*uParam4 = (236,223f - unk_0xE7D606C557C86100(-10,6345f, -0,7246f));
			return 1;
			break;
		
		case 308:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(22,7549f, 4629,148f, -1553,861f) - Global_97183[iParam1] };
			*uParam4 = (332,7842f - unk_0xE7D606C557C86100(3,4271f, 13,6787f));
			return 1;
			break;
		
		case 278:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(35,9161f, -1009,745f, 631,8275f) - Global_97183[iParam1] };
			*uParam4 = (98,8128f - -33,77f);
			return 1;
			break;
		
		case 279:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(234,6825f, 900,8749f, -111,9033f) - Global_97183[iParam1] };
			*uParam4 = (6,1087f - 155,68f);
			return 1;
			break;
		
		case 240:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(33,5351f, 3636,151f, 1546,323f) - Global_97183[iParam1] };
			*uParam4 = (298,4009f - -4,124f);
			return 1;
			break;
		
		case 241:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(30,512f, 6439,667f, -179,4242f) - Global_97183[iParam1] };
			*uParam4 = (225,5593f - 108f);
			return 1;
			break;
		
		case 264:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,2977f, -1390,545f, 486,7419f) - Global_97183[iParam1] };
			*uParam4 = (178,298f - -90f);
			return 1;
			break;
		
		case 266:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(10,5662f, 143,2342f, -3052,895f) - Global_97183[iParam1] };
			*uParam4 = (85,3429f - 68,8227f);
			return 1;
			break;
		
		case 267:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(39,9155f, 4934,08f, 2202,375f) - Global_97183[iParam1] };
			*uParam4 = (314,2654f - 56,2037f);
			return 1;
			break;
		
		case 269:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,149f, -782,0952f, 401,2502f) - Global_97183[iParam1] };
			*uParam4 = (179,9905f - -106,6605f);
			return 1;
			break;
		
		case 246:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(3,3919f, -1534,507f, -1195,256f) - Global_97183[iParam1] };
			*uParam4 = (305,8221f - -165f);
			return 1;
			break;
		
		case 263:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(12,8792f, -1241,213f, -573,3765f) - Global_97183[iParam1] };
			*uParam4 = (316,9941f - -171f);
			return 1;
			break;
		
		case 259:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(4,0002f, -1298,539f, -724,429f) - Global_97183[iParam1] };
			*uParam4 = (230,5715f - -32,488f);
			return 1;
			break;
		
		case 260:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(61,203f, 250,8387f, -1309,114f) - Global_97183[iParam1] };
			*uParam4 = (10,7756f - -29,093f);
			return 1;
			break;
		
		case 261:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(79,764f, 60,3233f, 917,6678f) - Global_97183[iParam1] };
			*uParam4 = (148,021f - 229,6085f);
			return 1;
			break;
		
		case 270:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { Vector(350f, 8588f, 2919f) - Global_97183[iParam1] };
			*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
			return 1;
			break;
		
		case 289:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { -48,5171f, 28,4211f, 3,0057f };
			*uParam4 = -1,3831f;
			return 1;
			break;
	}
	return 0;
}

void func_164(int iParam0, var uParam1, int iParam2)
{
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -1008861746;
			if (Global_111638.f_9080.f_99.f_58[128] && !Global_111638.f_9080.f_99.f_58[131])
			{
				iVar0 = -1883869285;
			}
			switch (iVar0)
			{
				case -1008861746:
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case -1883869285:
					*uParam1 = iVar0;
					uParam1->f_2 = 14,9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = -1435919434;
			switch (iVar0)
			{
				case -1435919434:
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_111638.f_9080.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = 736902334;
			}
			else if (iParam2 == 2)
			{
				iVar0 = -2140431165;
			}
			else if (Global_111638.f_9080.f_99.f_58[118])
			{
				iVar0 = -2140431165;
			}
			else
			{
				iVar0 = 736902334;
			}
			switch (iVar0)
			{
				case -2140431165:
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case 736902334:
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_165(int iParam0, var uParam1, int iParam2)
{
	if (Global_98148[iParam0] == 0)
	{
		func_164(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (Global_98148[iParam0] == -150975354)
	{
		func_164(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (func_175(iParam0))
	{
		func_164(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0xA7082C42B8809BF2(Global_98148[iParam0]))
	{
		func_164(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0xC41A9202669A24C4(Global_98148[iParam0]))
	{
		func_164(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0xAFB8495D36825275(Global_98148[iParam0]))
	{
		func_164(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0xA7D7011F9888A365(Global_98148[iParam0]))
	{
		func_164(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 == 1)
	{
		if (!unk_0x8E39AC3C76C8AA58(Global_98148[iParam0]))
		{
			func_164(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	else if (iParam2 == 2)
	{
		if (!unk_0x7D8B2A8F9EA82DB7(Global_98148[iParam0]))
		{
			func_164(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	if (!func_166(Global_98148[iParam0], 0))
	{
		func_164(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 != 0)
	{
		func_164(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		if (Global_98148[iParam0] != *uParam1)
		{
			*uParam1 = { Global_98148[iParam0] };
			uParam1->f_91 = 0;
			return 0;
		}
	}
	else
	{
		func_164(iParam0, uParam1, 1);
		uParam1->f_91 = 1;
		if (Global_98148[iParam0] == *uParam1)
		{
			func_164(iParam0, uParam1, 1);
			uParam1->f_91 = 1;
			return 1;
		}
		func_164(iParam0, uParam1, 2);
		uParam1->f_91 = 2;
		if (Global_98148[iParam0] == *uParam1)
		{
			func_164(iParam0, uParam1, 2);
			uParam1->f_91 = 2;
			return 1;
		}
		*uParam1 = { Global_98148[iParam0] };
		uParam1->f_91 = 0;
		return 0;
	}
	func_164(iParam0, uParam1, iParam2);
	uParam1->f_91 = iParam2;
	return 1;
}

int func_166(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x4DAC2AD66FE0E696(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == -915704871 && !unk_0x8CD06866876216F2()) || (iParam0 == 237764926 && !unk_0x8CD06866876216F2())) || (iParam0 == 349315417 && !unk_0x8CD06866876216F2())) || iParam0 == -613725916) || (iParam0 == -401643538 && !unk_0x8CD06866876216F2()))
	{
		if (!func_174())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x6C7B93D0F54679BE())
		{
			if (unk_0x5A7C1EDE951FBE20(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x232048AB4B0E0259(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == -150975354)
	{
		if ((((!func_173() && !func_172()) && !func_171()) && !func_170()) && !func_174())
		{
			return 0;
		}
	}
	if ((iParam0 == 37348240 || iParam0 == 11251904) || iParam0 == 544021352)
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_171())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_169(iParam0))
		{
			return 0;
		}
	}
	if (!func_167(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_167(int iParam0)
{
	if (!func_168())
	{
		return 1;
	}
	unk_0xC02A8E2FDF7A5FB8(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case -827162039:
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case 989294410:
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case 941494461:
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case -1649536104:
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case 1180875963:
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case 682434785:
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case -1912017790:
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case -1590337689:
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x437ABF4F514F6471(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_168()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

int func_169(int iParam0)
{
	if (Global_2513258)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xDD0E7998AE8AD485();
	if (iParam0 == -602287871)
	{
		if ((!Global_262145.f_6599 && !Global_262145.f_12922) && iVar1 < Global_262145.f_12923)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -2039755226)
	{
		if (!Global_262145.f_14222 && iVar1 < Global_262145.f_14234)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 16646064 || iParam0 == -899509638)
	{
		if (!Global_262145.f_14218 && iVar1 < Global_262145.f_14230)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223258115)
	{
		if (!Global_262145.f_14219 && iVar1 < Global_262145.f_14231)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1797613329)
	{
		if (!Global_262145.f_14220 && iVar1 < Global_262145.f_14232)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1126264336)
	{
		if (!Global_262145.f_14221 && iVar1 < Global_262145.f_14233)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1119641113)
	{
		if (!Global_262145.f_14223 && iVar1 < Global_262145.f_14235)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 2123327359)
	{
		if (!Global_262145.f_14224 && iVar1 < Global_262145.f_14227)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1757836725)
	{
		if (!Global_262145.f_14225 && iVar1 < Global_262145.f_14228)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1829802492)
	{
		if (!Global_262145.f_14226 && iVar1 < Global_262145.f_14229)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 86520421)
	{
		if (!Global_262145.f_16853 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1549126457)
	{
		if (!Global_262145.f_16848 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 390201602)
	{
		if (!Global_262145.f_16852 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 683047626)
	{
		if (!Global_262145.f_16851 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1232836011)
	{
		if (!Global_262145.f_16845 && iVar1 < Global_262145.f_16810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -777172681)
	{
		if (!Global_262145.f_16846 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 101905590)
	{
		if (!Global_262145.f_16849 && iVar1 < Global_262145.f_16814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -663299102)
	{
		if (!Global_262145.f_16850 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1887331236)
	{
		if (!Global_262145.f_16847 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 741090084)
	{
		if (!Global_262145.f_16855 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2103821244)
	{
		if (!Global_262145.f_16856 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1071380347)
	{
		if (!Global_262145.f_16844 && iVar1 < Global_262145.f_16809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2067820283)
	{
		if (!Global_262145.f_16843 && iVar1 < Global_262145.f_16808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 819197656)
	{
		if (!Global_262145.f_16842 && iVar1 < Global_262145.f_16807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 482197771)
	{
		if (!Global_262145.f_16854 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -401643538)
	{
		if (!Global_262145.f_16857 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 349315417)
	{
		if (!Global_262145.f_16858 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -915704871)
	{
		if (!Global_262145.f_16859 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 237764926)
	{
		if (!Global_262145.f_16860 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 822018448)
	{
		if (!Global_262145.f_17007 && iVar1 < Global_262145.f_17029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1606187161)
	{
		if (!Global_262145.f_17008 && iVar1 < Global_262145.f_17030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1009268949)
	{
		if (!Global_262145.f_17009 && iVar1 < Global_262145.f_17031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2035069708)
	{
		if (!Global_262145.f_17010 && iVar1 < Global_262145.f_17032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2115793025)
	{
		if (!Global_262145.f_17011 && iVar1 < Global_262145.f_17033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -570033273)
	{
		if (!Global_262145.f_17012 && iVar1 < Global_262145.f_17034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -255678177)
	{
		if (!Global_262145.f_17014 && iVar1 < Global_262145.f_17035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -609625092)
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -405626514)
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 6774487)
	{
		if (!Global_262145.f_17017 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -674927303)
	{
		if (!Global_262145.f_17018 && iVar1 < Global_262145.f_17039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1404136503)
	{
		if (!Global_262145.f_17019 && iVar1 < Global_262145.f_17040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -440768424)
	{
		if (!Global_262145.f_17020 && iVar1 < Global_262145.f_17041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1558399629)
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_17048)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1026149675)
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_17044)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -618617997)
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_17045)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1289178744)
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_17046)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1842748181)
	{
		if (!Global_262145.f_17013 && iVar1 < Global_262145.f_17047)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2140431165)
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_17049)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1491277511)
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_17042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523428744)
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_17043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1873600305)
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_17050)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 989294410)
	{
		if (!Global_262145.f_18659 && iVar1 < Global_262145.f_18756)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 941494461)
	{
		if (!Global_262145.f_18660 && iVar1 < Global_262145.f_18757)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -827162039)
	{
		if (!Global_262145.f_18661 && iVar1 < Global_262145.f_18758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -312295511)
	{
		if (!Global_262145.f_18662 && iVar1 < Global_262145.f_18759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1649536104)
	{
		if (!Global_262145.f_18663 && iVar1 < Global_262145.f_18760)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1180875963)
	{
		if (!Global_262145.f_18664 && iVar1 < Global_262145.f_18761)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 682434785)
	{
		if (!Global_262145.f_18665 && iVar1 < Global_262145.f_18762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1912017790)
	{
		if (!Global_262145.f_18666 && iVar1 < Global_262145.f_18763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1590337689)
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1045541610)
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2022483795)
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -239841468)
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1790834270)
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 196747873)
	{
		if (!Global_262145.f_18672 && iVar1 < Global_262145.f_18769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -566387422)
	{
		if (!Global_262145.f_18673 && iVar1 < Global_262145.f_18770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 627535535)
	{
		if (!Global_262145.f_18674 && iVar1 < Global_262145.f_18771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -757735410)
	{
		if (!Global_262145.f_18675 && iVar1 < Global_262145.f_18772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2048333973)
	{
		if (!Global_262145.f_18676 && iVar1 < Global_262145.f_18773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -482719877)
	{
		if (!Global_262145.f_18677 && iVar1 < Global_262145.f_18774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1034187331)
	{
		if (!Global_262145.f_18678 && iVar1 < Global_262145.f_18775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1093792632)
	{
		if (!Global_262145.f_18679 && iVar1 < Global_262145.f_18776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1758137366)
	{
		if (!Global_262145.f_18680 && iVar1 < Global_262145.f_18777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1886268224)
	{
		if (!Global_262145.f_18681 && iVar1 < Global_262145.f_18778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1074745671)
	{
		if (!Global_262145.f_18682 && iVar1 < Global_262145.f_18779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 272929391)
	{
		if (!Global_262145.f_18683 && iVar1 < Global_262145.f_18780)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_262145.f_19740 && iVar1 < Global_262145.f_19736)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_262145.f_19741 && iVar1 < Global_262145.f_19737)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_262145.f_19742 && iVar1 < Global_262145.f_19738)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_262145.f_19743 && iVar1 < Global_262145.f_19739)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_262145.f_20619 && iVar1 < Global_262145.f_20627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_262145.f_20620 && iVar1 < Global_262145.f_20628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_262145.f_20621 && iVar1 < Global_262145.f_20629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_262145.f_20622 && iVar1 < Global_262145.f_20630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_262145.f_20623 && iVar1 < Global_262145.f_20631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_262145.f_20624 && iVar1 < Global_262145.f_20632)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_262145.f_21396 && iVar1 < Global_262145.f_21416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_262145.f_21408 && iVar1 < Global_262145.f_21428)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_262145.f_21399 && iVar1 < Global_262145.f_21419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_262145.f_21409 && iVar1 < Global_262145.f_21429)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_262145.f_21397 && iVar1 < Global_262145.f_21417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_262145.f_21413 && iVar1 < Global_262145.f_21433)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_262145.f_21411 && iVar1 < Global_262145.f_21431)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_262145.f_21412 && iVar1 < Global_262145.f_21432)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_262145.f_21407 && iVar1 < Global_262145.f_21427)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_262145.f_21414 && iVar1 < Global_262145.f_21434)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_262145.f_21410 && iVar1 < Global_262145.f_21430)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_262145.f_21406 && iVar1 < Global_262145.f_21426)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_262145.f_21398 && iVar1 < Global_262145.f_21418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_262145.f_21400 && iVar1 < Global_262145.f_21420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_262145.f_21401 && iVar1 < Global_262145.f_21421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_262145.f_21402 && iVar1 < Global_262145.f_21422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_262145.f_21403 && iVar1 < Global_262145.f_21423)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_262145.f_21404 && iVar1 < Global_262145.f_21424)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_262145.f_21405 && iVar1 < Global_262145.f_21425)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_262145.f_22357 && iVar1 < Global_262145.f_22385)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_262145.f_22358 && iVar1 < Global_262145.f_22386)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_262145.f_22359 && iVar1 < Global_262145.f_22387)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_262145.f_22360 && iVar1 < Global_262145.f_22388)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_262145.f_22361 && iVar1 < Global_262145.f_22389)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_262145.f_22362 && iVar1 < Global_262145.f_22390)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_262145.f_22363 && iVar1 < Global_262145.f_22391)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_262145.f_22364 && iVar1 < Global_262145.f_22392)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_262145.f_22365 && iVar1 < Global_262145.f_22393)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_262145.f_22366 && iVar1 < Global_262145.f_22394)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_262145.f_22367 && iVar1 < Global_262145.f_22395)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_262145.f_22368 && iVar1 < Global_262145.f_22396)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_262145.f_22369 && iVar1 < Global_262145.f_22397)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_262145.f_22373 && iVar1 < Global_262145.f_22401)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_262145.f_22374 && iVar1 < Global_262145.f_22402)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_262145.f_22375 && iVar1 < Global_262145.f_22403)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_262145.f_22376 && iVar1 < Global_262145.f_22404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_262145.f_22377 && iVar1 < Global_262145.f_22405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_262145.f_22378 && iVar1 < Global_262145.f_22406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_262145.f_22379 && iVar1 < Global_262145.f_22407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_262145.f_22380 && iVar1 < Global_262145.f_22408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_262145.f_22381 && iVar1 < Global_262145.f_22409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_262145.f_22382 && iVar1 < Global_262145.f_22410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_262145.f_22383 && iVar1 < Global_262145.f_22411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_262145.f_22384 && iVar1 < Global_262145.f_22412)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_262145.f_23573 && iVar1 < Global_262145.f_23589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_262145.f_23574 && iVar1 < Global_262145.f_23590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_262145.f_23578 && iVar1 < Global_262145.f_23594)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_262145.f_23581 && iVar1 < Global_262145.f_23597)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_262145.f_23586 && iVar1 < Global_262145.f_23602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_262145.f_23580 && iVar1 < Global_262145.f_23596)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_262145.f_23572 && iVar1 < Global_262145.f_23588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_262145.f_23579 && iVar1 < Global_262145.f_23595)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_262145.f_23585 && iVar1 < Global_262145.f_23601)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_262145.f_23584 && iVar1 < Global_262145.f_23600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_262145.f_23575 && iVar1 < Global_262145.f_23591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_262145.f_23577 && iVar1 < Global_262145.f_23593)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_262145.f_23587 && iVar1 < Global_262145.f_23603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_262145.f_23583 && iVar1 < Global_262145.f_23599)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_262145.f_23576 && iVar1 < Global_262145.f_23592)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_262145.f_23582 && iVar1 < Global_262145.f_23598)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1988428699)
	{
		if (!Global_262145.f_23663 && iVar1 < Global_262145.f_23650)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 345756458)
	{
		if (!Global_262145.f_23664 && iVar1 < Global_262145.f_23651)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1945374990)
	{
		if (!Global_262145.f_23669 && iVar1 < Global_262145.f_23656)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1653666139)
	{
		if (!Global_262145.f_23668 && iVar1 < Global_262145.f_23655)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 500482303)
	{
		if (!Global_262145.f_23666 && iVar1 < Global_262145.f_23653)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2044532910)
	{
		if (!Global_262145.f_23672 && iVar1 < Global_262145.f_23659)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -638562243)
	{
		if (!Global_262145.f_23674 && iVar1 < Global_262145.f_23661)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1692272545)
	{
		if (!Global_262145.f_23675 && iVar1 < Global_262145.f_23662)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2069146067)
	{
		if (!Global_262145.f_23673 && iVar1 < Global_262145.f_23660)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -420911112)
	{
		if (!Global_262145.f_23665 && iVar1 < Global_262145.f_23652)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 321186144)
	{
		if (!Global_262145.f_23667 && iVar1 < Global_262145.f_23654)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -54332285)
	{
		if (!Global_262145.f_23671 && iVar1 < Global_262145.f_23658)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -307958377)
	{
		if (!Global_262145.f_23670 && iVar1 < Global_262145.f_23657)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1721676810)
	{
	}
	else if (iParam0 == -801550069)
	{
	}
	else if (iParam0 == 679453769)
	{
	}
	else if (iParam0 == 1909700336)
	{
	}
	else if (iParam0 == 2139203625)
	{
	}
	else if (iParam0 == -1890996696)
	{
	}
	else if (iParam0 == 2038858402)
	{
	}
	else if (iParam0 == -1146969353)
	{
	}
	else if (iParam0 == 1542143200)
	{
	}
	else if (iParam0 == -579747861)
	{
	}
	else if (iParam0 == 444994115)
	{
	}
	else if (iParam0 == 1637620610)
	{
	}
	else if (iParam0 == -755532233)
	{
	}
	else if (iParam0 == 540101442)
	{
	}
	else if (iParam0 == -1106120762)
	{
	}
	else if (iParam0 == -1478704292)
	{
	}
	else if (iParam0 == -2096690334)
	{
	}
	else if (iParam0 == 1591739866)
	{
		if (!Global_262145.f_25978 && iVar1 < Global_262145.f_25980)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1168952148)
	{
		if (!Global_262145.f_24991 && iVar1 < Global_262145.f_24984)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1566607184)
	{
		if (!Global_262145.f_24992 && iVar1 < Global_262145.f_24985)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -331467772)
	{
		if (!Global_262145.f_24993 && iVar1 < Global_262145.f_24986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1279262537)
	{
		if (!Global_262145.f_24994 && iVar1 < Global_262145.f_24987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -49115651)
	{
		if (!Global_262145.f_25979 && iVar1 < Global_262145.f_25981)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456744817)
	{
		if (!Global_262145.f_24995 && iVar1 < Global_262145.f_24988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -507495760)
	{
		if (!Global_262145.f_24996 && iVar1 < Global_262145.f_24989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -286046740)
	{
		if (!Global_262145.f_24997 && iVar1 < Global_262145.f_24990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1044193113)
	{
		if (!Global_262145.f_25002 && iVar1 < Global_262145.f_25023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 686471183)
	{
		if (!Global_262145.f_25003 && iVar1 < Global_262145.f_25024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -941272559)
	{
		if (!Global_262145.f_25004 && iVar1 < Global_262145.f_25025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1829436850)
	{
		if (!Global_262145.f_25005 && iVar1 < Global_262145.f_25026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -682108547)
	{
		if (!Global_262145.f_25006 && iVar1 < Global_262145.f_25027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 722226637)
	{
		if (!Global_262145.f_25007 && iVar1 < Global_262145.f_25028)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1854776567)
	{
		if (!Global_262145.f_25008 && iVar1 < Global_262145.f_25029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1862507111)
	{
		if (!Global_262145.f_25009 && iVar1 < Global_262145.f_25030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -882629065)
	{
		if (!Global_262145.f_25010 && iVar1 < Global_262145.f_25031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -362150785)
	{
		if (!Global_262145.f_25011 && iVar1 < Global_262145.f_25032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 310284501)
	{
		if (!Global_262145.f_25012 && iVar1 < Global_262145.f_25033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 916547552)
	{
		if (!Global_262145.f_25013 && iVar1 < Global_262145.f_25034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1804415708)
	{
		if (!Global_262145.f_25014 && iVar1 < Global_262145.f_25035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1934384720)
	{
		if (!Global_262145.f_25015 && iVar1 < Global_262145.f_25036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1349095620)
	{
		if (!Global_262145.f_25016 && iVar1 < Global_262145.f_25037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -208911803)
	{
		if (!Global_262145.f_25017 && iVar1 < Global_262145.f_25038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -324618589)
	{
		if (!Global_262145.f_25018 && iVar1 < Global_262145.f_25039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -664141241)
	{
		if (!Global_262145.f_25019 && iVar1 < Global_262145.f_25040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1323778901)
	{
		if (!Global_262145.f_25020 && iVar1 < Global_262145.f_25041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1620126302)
	{
		if (!Global_262145.f_25021 && iVar1 < Global_262145.f_25042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -447711397)
	{
		if (!Global_262145.f_25022 && iVar1 < Global_262145.f_25043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1118611807)
	{
		if (!Global_262145.f_27821 && iVar1 < Global_262145.f_27842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 409049982)
	{
		if (!Global_262145.f_27822 && iVar1 < Global_262145.f_27843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1756021720)
	{
		if (!Global_262145.f_27823 && iVar1 < Global_262145.f_27844)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2031587082)
	{
		if (!Global_262145.f_27824 && iVar1 < Global_262145.f_27845)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1693751655)
	{
		if (!Global_262145.f_27825 && iVar1 < Global_262145.f_27846)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 987469656)
	{
		if (!Global_262145.f_27826 && iVar1 < Global_262145.f_27847)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 872704284)
	{
		if (!Global_262145.f_27827 && iVar1 < Global_262145.f_27848)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 408825843)
	{
		if (!Global_262145.f_27828 && iVar1 < Global_262145.f_27849)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 740289177)
	{
		if (!Global_262145.f_27829 && iVar1 < Global_262145.f_27850)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -834353991)
	{
		if (!Global_262145.f_27830 && iVar1 < Global_262145.f_27851)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 301304410)
	{
		if (!Global_262145.f_27831 && iVar1 < Global_262145.f_27852)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 960812448)
	{
		if (!Global_262145.f_27832 && iVar1 < Global_262145.f_27853)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1284356689)
	{
		if (!Global_262145.f_27833 && iVar1 < Global_262145.f_27854)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 394110044)
	{
		if (!Global_262145.f_27834 && iVar1 < Global_262145.f_27855)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1938952078)
	{
		if (!Global_262145.f_27835 && iVar1 < Global_262145.f_27856)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -907477130)
	{
		if (!Global_262145.f_27836 && iVar1 < Global_262145.f_27857)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1987130134)
	{
		if (!Global_262145.f_27837 && iVar1 < Global_262145.f_27858)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1747439474)
	{
		if (!Global_262145.f_27838 && iVar1 < Global_262145.f_27859)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1254331310)
	{
		if (!Global_262145.f_27839 && iVar1 < Global_262145.f_27860)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 469291905)
	{
		if (!Global_262145.f_27840 && iVar1 < Global_262145.f_27861)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -48031959)
	{
		if (!Global_262145.f_27841 && iVar1 < Global_262145.f_27862)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 340154634)
	{
		if ((!Global_262145.f_27864 && iVar1 < Global_262145.f_27865) && !Global_262145.f_27819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1960756985)
	{
		if ((!Global_262145.f_27867 && iVar1 < Global_262145.f_27868) && !Global_262145.f_27820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1132721664)
	{
		if (!Global_262145.f_27872 && iVar1 < Global_262145.f_27875)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 83136452)
	{
		if (!Global_262145.f_27873 && iVar1 < Global_262145.f_27876)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456336509)
	{
		if (!Global_262145.f_27874 && iVar1 < Global_262145.f_27877)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2122646867)
	{
		if (!Global_262145.f_28874 && iVar1 < Global_262145.f_28539)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2098954619)
	{
		if (!Global_262145.f_28525 && iVar1 < Global_262145.f_28546)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2134119907)
	{
		if (!Global_262145.f_28526 && iVar1 < Global_262145.f_28532)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 67753863)
	{
		if (!Global_262145.f_28872 && iVar1 < Global_262145.f_28540)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1107404867)
	{
		if (!Global_262145.f_28873 && iVar1 < Global_262145.f_28541)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -913589546)
	{
		if (!Global_262145.f_28519 && iVar1 < Global_262145.f_28538)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -631322662)
	{
		if (!Global_262145.f_28520 && iVar1 < Global_262145.f_28547)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -838099166)
	{
		if (!Global_262145.f_28521 && iVar1 < Global_262145.f_28537)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1810806490)
	{
		if (!Global_262145.f_28522 && iVar1 < Global_262145.f_28535)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1358197432)
	{
		if (!Global_262145.f_28868 && iVar1 < Global_262145.f_28542)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1492612435)
	{
		if (!Global_262145.f_28869 && iVar1 < Global_262145.f_28543)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181339704)
	{
		if (!Global_262145.f_28870 && iVar1 < Global_262145.f_28544)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1728685474)
	{
		if (!Global_262145.f_28871 && iVar1 < Global_262145.f_28545)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1717532765)
	{
		if (!Global_262145.f_28523 && iVar1 < Global_262145.f_28534)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1802742206)
	{
		if (!Global_262145.f_28524 && iVar1 < Global_262145.f_28536)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_170()
{
	return 0;
}

int func_171()
{
	return 1;
}

int func_172()
{
	return 1;
}

int func_173()
{
	if (unk_0xC146D5FBD23C6954(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_174()
{
	if (unk_0x61D9362D70D2DD56())
	{
		if (unk_0x999A3BFD3E9B5D2C())
		{
			if (unk_0x5CD8D2FE4603C900())
			{
				unk_0x6FB46C25CCB7E6D5(1571103992, &iVar0, -1);
				unk_0x5D96D8530B3D0904(&iVar0, 2);
				unk_0x5D96D8530B3D0904(&iVar0, 4);
				unk_0x5D96D8530B3D0904(&iVar0, 6);
				unk_0x5D96D8530B3D0904(&Global_25, 2);
				unk_0x5D96D8530B3D0904(&Global_25, 4);
				unk_0x5D96D8530B3D0904(&Global_25, 6);
				unk_0xCDC520E5E48E63D9(1571103992, iVar0, 1);
				if (unk_0xE0DC536BD2AC0301())
				{
					iVar0 = unk_0x0A4C9A3D51EAE31F(866);
					unk_0x5D96D8530B3D0904(&iVar0, 0);
					unk_0x9F2BE984EBF8A0F4(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150472 == 2)
	{
		return 1;
	}
	else if (Global_150472 == 3)
	{
		return 0;
	}
	if (unk_0xE0DC536BD2AC0301())
	{
		if (unk_0xEAE0D21A50E6C7F4(unk_0x0A4C9A3D51EAE31F(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_175(int iParam0)
{
	if (Global_98148[iParam0] == -150975354 || Global_98148[iParam0] == -613725916)
	{
		return 1;
	}
	if (Global_98148[iParam0] == 771711535 || Global_98148[iParam0] == -1066334226)
	{
		return 1;
	}
	if (Global_98148[iParam0] == 1030400667)
	{
		return 1;
	}
	if (Global_98148[iParam0] == 569305213)
	{
		return 1;
	}
	if (Global_98148[iParam0] == -1807623979)
	{
		return 1;
	}
	if (Global_98148[iParam0] == -907477130 || Global_98148[iParam0] == -1647941228)
	{
		return 1;
	}
	if (Global_98148[iParam0] == -1291952903 && !Global_111638.f_9080.f_330[8])
	{
		return 1;
	}
	if (Global_98148[iParam0] == -1311154784 && !Global_111638.f_9080.f_330[8])
	{
		return 1;
	}
	if (Global_98148[iParam0] == -34623805 && !Global_111638.f_9080.f_330[8])
	{
		return 1;
	}
	if (Global_98148[iParam0] == 758895617 && !Global_111638.f_9080.f_330[9])
	{
		return 1;
	}
	if (Global_98148[iParam0] == 353883353 && !Global_111638.f_9080.f_330[9])
	{
		return 1;
	}
	if (Global_98148[iParam0] == 1051415893 && !Global_111638.f_9080.f_330[10])
	{
		return 1;
	}
	if (Global_98148[iParam0] == -433375717 && !Global_111638.f_9080.f_330[11])
	{
		return 1;
	}
	if (Global_98148[iParam0] == 1938952078)
	{
		return 1;
	}
	if (Global_98148[iParam0] == 444583674)
	{
		return 1;
	}
	if (Global_98148[iParam0] == -433375717)
	{
		return 1;
	}
	if (Global_98148[iParam0] == -2137348917)
	{
		return 1;
	}
	if (((Global_98148[iParam0] == -1800170043 && !Global_111638.f_9080.f_330[80]) && !Global_111638.f_9080.f_330[81]) && !Global_111638.f_9080.f_330[82])
	{
		return 1;
	}
	return 0;
}

bool func_176(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_177(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115,1569f, -1286,684f, 28,2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90,0089f, -1324,195f, 28,3203f };
			*fParam2 = 194,1887f;
			return 1;
			break;
		
		case 9:
			return func_177(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_177(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807,2979f, -48,4004f, 36,8173f };
			*fParam2 = 201,6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432,34f, -1887,383f, 70,5768f };
			*fParam2 = 350,0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666,204f, 1967,25f, 143,3213f };
			*fParam2 = 0,7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440,22f, -127,02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135,055f, -1759,64f, 27,8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687,6992f, -1744,03f, 28,3624f };
			*fParam2 = 267,1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56,5117f, -744,6122f, 43,1356f };
			*fParam2 = 340,0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506,485f, -1884,967f, 24,764f };
			*fParam2 = 22,9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555,958f, 953,6136f, 77,2063f };
			*fParam2 = 152,8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220,72f, -64,4177f, 68,2922f };
			*fParam2 = (250,4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048,07f, 3840,84f, 34,2238f };
			*fParam2 = 119,603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464,22f, -1592,98f, 38,73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744,79f + 0,0186f), (-465,86f - 0,0114f), 36,6399f };
			*fParam2 = 51,7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508,1f, 173,6278f };
			*fParam2 = 151,2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72,2278f, -1464,68f, 28,2915f };
			*fParam2 = 156,8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24,2312f };
			*fParam2 = 7,2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257,9167f, -1120,786f, 28,3684f };
			*fParam2 = 97,2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422,5858f, -978,6332f, 69,7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294,8521f, 882,9366f, 197,8527f };
			*fParam2 = 162,693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771,802f, 794,4316f, 138,4211f };
			*fParam2 = 128,9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495,595f, -1848,821f, 70,2075f };
			*fParam2 = 32,2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897,554f, 4032,241f, 50,1419f };
			*fParam2 = 192,8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725,8f, 33,0673f };
			*fParam2 = -3,7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4,0205f, -2975,341f, 798,4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709,0244f, -2916,479f, 5,0589f };
			*fParam2 = 355,326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643,5248f, -2917,325f, 5,1337f };
			*fParam2 = 334,1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595,2742f, -2819,183f, 5,0559f };
			*fParam2 = 46,8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314,4171f, 965,207f, 208,4024f };
			*fParam2 = 165,9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321,537f, 4975,455f, 25,9097f };
			*fParam2 = 221,228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111,1318f, 6316,479f, 30,4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731,3261f, 106,68f, 54,7169f };
			*fParam2 = 98,9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257,5f, -526,9999f, 30,2361f };
			*fParam2 = 220,9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736,9869f, -2050,678f, 28,2718f };
			*fParam2 = 83,9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262,5499f, -2540,15f, 4,8433f };
			*fParam2 = -64,1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315,7789f, 6201,355f, 30,4322f };
			*fParam2 = 127,7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118,0988f, -1264,916f, 32,3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37,5988f, -1351,52f, 28,2954f };
			*fParam2 = 90,0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558,2693f, 261,1167f, 82,07f };
			*fParam2 = 84,6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196,9999f, 507,9999f, 132,477f };
			*fParam2 = 99,6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312,01f, -1645,87f, 51,2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818,7374f, 6,4824f, 41,2432f };
			*fParam2 = 211,8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091,258f, 4714,852f, 40,1936f };
			*fParam2 = 136,0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762,59f, 3247,212f, 40,735f };
			*fParam2 = 27,0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764,013f, 3252,902f, 40,735f };
			*fParam2 = 27,0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

var func_178()
{
	func_188(&uVar0, unk_0x4460E481B9E33ADA());
	func_187(&uVar0, unk_0x8D199E381D262EEF());
	func_186(&uVar0, unk_0xD8A54335F18763BA());
	func_181(&uVar0, unk_0x972A296334C9D57B());
	func_180(&uVar0, unk_0x118229AD063C3C1D());
	func_179(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_179(var uParam0, int iParam1)
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

void func_180(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_181(var uParam0, int iParam1)
{
	iVar0 = func_185(*uParam0);
	iVar1 = func_183(*uParam0);
	if (iParam1 < 1 || iParam1 > func_182(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_182(int iParam0, int iParam1)
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

var func_183(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_184(unk_0xEAE0D21A50E6C7F4(iParam0, 31), -1, 1)) + 2011;
}

int func_184(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_185(var uParam0)
{
	return uParam0 & 15;
}

void func_186(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_187(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_188(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

void func_189(var uParam0, int iParam1)
{
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_111638.f_18528[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[0], 9))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_177(Global_111638.f_18528[iVar0], &vVar2, &fVar5))
			{
				Global_111638.f_18528[iVar0] = 318;
				func_190(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_96134[iVar0] = { 0f, 0f, 0f };
				Global_96134[iVar0].f_9 = 0f;
				Global_96134[iVar0].f_12 = 0f;
				Global_96134[iVar0].f_3 = { 0f, 0f, 0f };
				Global_96134[iVar0].f_10 = 0f;
				Global_96134[iVar0].f_13 = 0f;
				Global_96134[iVar0].f_6 = { 0f, 0f, 0f };
				Global_96134[iVar0].f_11 = 0f;
				Global_96134[iVar0].f_14 = 0f;
				Global_96134[iVar0].f_17 = { 0f, 0f, 0f };
				Global_96134[iVar0].f_26 = 0f;
				Global_96134[iVar0].f_20 = { 0f, 0f, 0f };
				Global_96134[iVar0].f_27 = 0f;
				Global_96134[iVar0].f_23 = { 0f, 0f, 0f };
				Global_96134[iVar0].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_190(var uParam0)
{
	*uParam0 = -15;
}

void func_191()
{
	Global_110662 = 0;
}

int func_192()
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_98783.f_8)
	{
		if (Global_98783.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98783.f_10 > 1)
	{
		return 0;
	}
	Global_98783.f_10++;
	return 1;
}

void func_193(int iParam0)
{
	Global_75441.f_138 = iParam0;
}

int func_194(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_136)
	{
		if (Global_111638.f_7683[iVar0] == iParam0)
		{
			if (Global_41978 != iVar0)
			{
				func_207(iVar0);
				func_199(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_198)
	{
		if (Global_111638.f_7683.f_137[iVar0] == iParam0)
		{
			func_199(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_650)
	{
		if (Global_111638.f_7683.f_199[iVar0] == iParam0)
		{
			func_198(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_764)
	{
		if (Global_111638.f_7683.f_651[iVar0] == iParam0)
		{
			func_196(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_866)
	{
		if (Global_111638.f_7683.f_765[iVar0] == iParam0)
		{
			func_195(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_195(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_111638.f_7683.f_866)
	{
		return;
	}
	if (Global_111638.f_7683.f_866 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_111638.f_7683.f_866 - 2))
		{
			Global_111638.f_7683.f_765[iVar0] = { Global_111638.f_7683.f_765[iVar0 + 1] };
			iVar0++;
		}
	}
	if (Global_111638.f_7683.f_866 > 0)
	{
		Global_111638.f_7683.f_765[(Global_111638.f_7683.f_866 - 1)] = { Var1 };
		Global_111638.f_7683.f_866 = (Global_111638.f_7683.f_866 - 1);
	}
}

void func_196(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_111638.f_7683.f_764)
	{
		return;
	}
	if (Global_111638.f_7683.f_764 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_111638.f_7683.f_764 - 2))
		{
			Global_111638.f_7683.f_651[iVar0] = { Global_111638.f_7683.f_651[iVar0 + 1] };
			iVar0++;
		}
	}
	if (Global_111638.f_7683.f_764 > 0)
	{
		Global_111638.f_7683.f_651[(Global_111638.f_7683.f_764 - 1)] = { Var1 };
		Global_111638.f_7683.f_764 = (Global_111638.f_7683.f_764 - 1);
	}
	func_197(0);
	func_197(1);
	func_197(2);
}

void func_197(int iParam0)
{
	iVar1 = 0;
	if (!func_102(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_136)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7683[iVar0].f_2, iParam0))
		{
			if (Global_111638.f_7683[iVar0].f_3 > iVar1)
			{
				iVar1 = Global_111638.f_7683[iVar0].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_111638.f_7683.f_764)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7683.f_651[iVar2].f_2, iParam0))
		{
			if (Global_111638.f_7683.f_651[iVar2].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_111638.f_7683.f_919[iParam0] = iVar1;
}

void func_198(int iParam0)
{
	iVar15 = 0;
	while (iVar15 < Global_111638.f_7683.f_650)
	{
		if (Global_111638.f_7683.f_199[iVar15] == iParam0)
		{
			iVar16 = iVar15;
			while (iVar16 <= (Global_111638.f_7683.f_650 - 2))
			{
				Global_111638.f_7683.f_199[iVar16] = { Global_111638.f_7683.f_199[iVar16 + 1] };
				iVar16++;
			}
			Global_111638.f_7683.f_199[(Global_111638.f_7683.f_650 - 1)] = { Var0 };
			Global_111638.f_7683.f_650 = (Global_111638.f_7683.f_650 - 1);
			return;
		}
		iVar15++;
	}
}

void func_199(int iParam0)
{
	iVar15 = 0;
	while (iVar15 < Global_111638.f_7683.f_198)
	{
		if (Global_111638.f_7683.f_137[iVar15] == iParam0)
		{
			func_200(Global_111638.f_7683.f_137[iVar15].f_6);
			iVar16 = iVar15;
			while (iVar16 <= (Global_111638.f_7683.f_198 - 2))
			{
				Global_111638.f_7683.f_137[iVar16] = { Global_111638.f_7683.f_137[iVar16 + 1] };
				iVar16++;
			}
			Global_111638.f_7683.f_137[(Global_111638.f_7683.f_198 - 1)] = { Var0 };
			Global_111638.f_7683.f_198 = (Global_111638.f_7683.f_198 - 1);
			return;
		}
		iVar15++;
	}
}

int func_200(int iParam0)
{
	if (Global_117[iParam0].f_8 != 150)
	{
		if (func_206(iParam0, Global_19486) == 1)
		{
			func_205(iParam0, Global_19486, 0);
			if (func_204(iParam0, Global_19486) == 0)
			{
				iVar0 = Global_19486;
				func_201(iParam0, iVar0);
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_201(int iParam0, int iParam1)
{
	if (Global_117[iParam0].f_8 != 150)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_203(iParam0, iVar0, 0);
			func_202(iParam0, iVar0, 0);
		}
	}
}

void func_202(int iParam0, int iParam1, int iParam2)
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

void func_203(int iParam0, int iParam1, int iParam2)
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

int func_204(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0].f_24[iParam1];
}

void func_205(int iParam0, int iParam1, int iParam2)
{
	Global_1798[iParam0].f_19[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0].f_19[iParam1] = iParam2;
	}
}

int func_206(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0].f_19[iParam1];
}

void func_207(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_111638.f_7683.f_136)
	{
		return;
	}
	iVar1 = Global_111638.f_7683[iParam0].f_2;
	if (Global_111638.f_7683.f_136 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_111638.f_7683.f_136 - 2))
		{
			Global_111638.f_7683[iVar0] = { Global_111638.f_7683[iVar0 + 1] };
			iVar0++;
		}
	}
	if (Global_111638.f_7683.f_136 > 0)
	{
		Global_111638.f_7683[(Global_111638.f_7683.f_136 - 1)] = { Var2 };
		Global_111638.f_7683.f_136 = (Global_111638.f_7683.f_136 - 1);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xEAE0D21A50E6C7F4(iVar1, iVar0))
		{
			func_197(iVar0);
		}
		iVar0++;
	}
}

int func_208(int iParam0, int iParam1)
{
	iVar0 = func_66(func_209(iParam0));
	if (iVar0 < 0)
	{
		return 15;
	}
	if (iVar0 >= 10)
	{
		return 15;
	}
	return Global_111638.f_1.f_12[iVar0][iParam1];
}

int func_209(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 10;
			break;
		
		case 4:
			return 11;
			break;
	}
	return -1;
}

int func_210(int iParam0)
{
	iVar0 = func_66(func_209(iParam0));
	return Global_94773[iVar0];
}

void func_211(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_219(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_75())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_218(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_219(0);
		unk_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_218(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_216(unk_0xD803B885F5E47A62())) && !func_213(unk_0xD803B885F5E47A62(), 0)) && !func_212()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_216(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_212()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 14);
}

bool func_213(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_214(-1, 0) == 8;
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

int func_214(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_215();
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

int func_215()
{
	return Global_1312745;
}

int func_216(int iParam0)
{
	if (func_213(iParam0, 0))
	{
		return 1;
	}
	if (func_217())
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

bool func_217()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_218(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_219(int iParam0)
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

void func_220()
{
	if (func_395(24))
	{
		if (!func_2(0))
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_43, 3))
			{
				if (func_156(77))
				{
					if (func_150(0))
					{
						if (func_376(&iLocal_46, 0, 0, 0, 0) == 1)
						{
							unk_0x5D96D8530B3D0904(&iLocal_43, 3);
							func_375();
							iLocal_179 = unk_0x7D6CA5F52B3748BF(Local_182.f_1.f_394 - Local_182.f_1.f_397, Local_182.f_1.f_394 + Local_182.f_1.f_397, 0, 1, 1, 1);
							iLocal_180 = unk_0x544B74C043CE9948(Local_182.f_1.f_394, Local_182.f_1.f_397 * Vector(1,5f, 1,5f, 1,5f), 0f, 0, 7);
							unk_0x10F3BFFADF2CE3DA(Local_182.f_1.f_394 - Local_182.f_1.f_397, Local_182.f_1.f_394 + Local_182.f_1.f_397);
							unk_0x17E8C6920A1E386F(Local_182.f_1.f_394 - Local_182.f_1.f_397, Local_182.f_1.f_394 + Local_182.f_1.f_397, false, 0);
							if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
							{
								unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
								unk_0x34D79252800B23FF(0);
							}
						}
					}
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_43, 3))
			{
				if (unk_0xA0F4292EA950943D("BS_2A_2B_INT"))
				{
					if (!unk_0x22A8E52414415B76())
					{
						func_371();
						if (unk_0xC844350D5D58C99A(Global_95241.f_9[0]))
						{
							iLocal_133 = Global_95241.f_9[0];
							unk_0x73270B3C9CC833FD(iLocal_133, false, 1);
							unk_0xEBA53F35D0085654(&iLocal_133);
							unk_0x29E8331978B73E7F(iLocal_133, "LESTER", 2, 1302784073, 0);
						}
						else
						{
							unk_0x29E8331978B73E7F(iLocal_133, "LESTER", 2, 1302784073, 0);
						}
						if (unk_0xC844350D5D58C99A(Global_95241.f_28[0]))
						{
							iLocal_134 = Global_95241.f_28[0];
							unk_0x73270B3C9CC833FD(iLocal_134, false, 1);
							if (unk_0xBDEB2DEEF1D23A18(iLocal_134))
							{
								unk_0x15AFB6CBDE990FB6(iLocal_134, 1, 1);
							}
							unk_0x29E8331978B73E7F(iLocal_134, "WALKINGSTICK_LESTER", 1, 1302784073, 0);
						}
						switch (func_100())
						{
							case 0:
								iLocal_130 = unk_0x16F2683693E537C9();
								unk_0x29E8331978B73E7F(iLocal_130, "MICHAEL", 0, 225514697, 0);
								unk_0x29E8331978B73E7F(iLocal_131, "FRANKLIN", 2, -1692214353, 0);
								unk_0x29E8331978B73E7F(iLocal_132, "TREVOR", 2, -1686040670, 0);
								break;
							
							case 1:
								iLocal_131 = unk_0x16F2683693E537C9();
								unk_0x29E8331978B73E7F(iLocal_130, "MICHAEL", 2, 225514697, 0);
								unk_0x29E8331978B73E7F(iLocal_131, "FRANKLIN", 0, -1692214353, 0);
								unk_0x29E8331978B73E7F(iLocal_132, "TREVOR", 2, -1686040670, 0);
								unk_0x5D96D8530B3D0904(&iLocal_43, 4);
								break;
							
							case 2:
								iLocal_132 = unk_0x16F2683693E537C9();
								unk_0x29E8331978B73E7F(iLocal_130, "MICHAEL", 2, 225514697, 0);
								unk_0x29E8331978B73E7F(iLocal_131, "FRANKLIN", 2, -1692214353, 0);
								unk_0x29E8331978B73E7F(iLocal_132, "TREVOR", 0, -1686040670, 0);
								unk_0x5D96D8530B3D0904(&iLocal_43, 4);
								break;
						}
						unk_0x523BCC9DC80CD82F(225514697);
						func_73(1);
						func_211(1, 1, 1, 0, 0, 0);
						func_370(77);
						unk_0x3124890FDA752DE4(95,19f, -1293,499f, 28,2672f, 1,5f, 867556671, 0);
						func_369(&(Local_182.f_484), 0, 0, "MICHAEL", 1, 1);
						func_369(&(Local_182.f_484), 1, 0, "FRANKLIN", 1, 1);
						func_369(&(Local_182.f_484), 2, 0, "TREVOR", 1, 1);
						func_369(&(Local_182.f_484), 3, 0, "LESTER", 1, 1);
						if (func_100() == 0)
						{
							bLocal_47 = true;
						}
						else
						{
							bLocal_47 = false;
						}
						unk_0x4C902758BEA97C68(2048);
					}
					else
					{
						func_120();
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_43, 6))
						{
							unk_0x536F1BE96C726C4B(124,0681f, -1294,762f, 28,2695f, 1,5f, 0, 0, 0, false);
							unk_0x5D96D8530B3D0904(&iLocal_43, 6);
						}
						switch (iLocal_181)
						{
							case 0:
								func_368(1, 0);
								func_368(2, 0);
								if (!unk_0x437347B10A200C4B(iLocal_128, 0))
								{
									if (func_367(iLocal_128, 0, 0))
									{
										iLocal_181 = 2;
									}
								}
								else if (unk_0xC844350D5D58C99A(iLocal_128))
								{
									unk_0xA954465BA6FDEFE2(&iLocal_128);
								}
								if (iLocal_181 != 2)
								{
									unk_0x523BCC9DC80CD82F(-1008861746);
									iLocal_181 = 1;
								}
								break;
							
							case 1:
								if (unk_0xB87F6CF6E5628C67(-1008861746))
								{
									func_368(0, 0);
									func_359(133,9532f, -1311,404f, 28,08922f, 127,847f, -1315,542f, 32,11665f, 3,3f, 124,97f, -1321,87f, 28f, 37,74f, func_366(), 1, 0, 1, 0, 0);
									func_317(&iLocal_129, 0, 130,56f, -1313,66f, 28,74f, 124,66f, 0, 0);
									unk_0xB9FD7450C0DAB575(iLocal_129, 1084227584);
									unk_0x71199B01895C6202(-1008861746);
									func_290(iLocal_129, 0f, 0f, 0f, 0f, 24, 0);
									iLocal_181 = 2;
								}
								break;
						}
						if (unk_0x3148AE92ED70DC30("MICHAEL", 225514697))
						{
							if (!unk_0x437347B10A200C4B(unk_0x6450C2A9FBA3C3BF("MICHAEL", 0), 0))
							{
								iLocal_130 = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("MICHAEL", 0));
								unk_0x4E885A246A9D983A(iLocal_130, 208, true);
								unk_0x4E885A246A9D983A(iLocal_130, 118, false);
								unk_0x4E885A246A9D983A(iLocal_130, 213, false);
								unk_0x11AD11297DC58CC7(iLocal_130, true);
								unk_0xA47B46945FF6DE74(iLocal_130, 96,46f, -1291,44f, 28,2688f, 1, false, 0, 1);
								unk_0xD8F6A53F4799FAFE(iLocal_130, 299,3742f);
								func_369(&(Local_182.f_484), 0, iLocal_130, "MICHAEL", 1, 1);
								if (unk_0xEAE0D21A50E6C7F4(iLocal_43, 4))
								{
									iLocal_135[0] = iLocal_130;
									func_285(&iLocal_135, 0);
									func_224(&iLocal_135, 0, 0, 0);
								}
							}
						}
						if (unk_0x3148AE92ED70DC30("FRANKLIN", -1692214353))
						{
							if (!unk_0x437347B10A200C4B(unk_0x6450C2A9FBA3C3BF("FRANKLIN", 0), 0))
							{
								iLocal_131 = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("FRANKLIN", 0));
								unk_0x4E885A246A9D983A(iLocal_131, 208, true);
								unk_0x4E885A246A9D983A(iLocal_131, 118, false);
								unk_0x4E885A246A9D983A(iLocal_131, 213, false);
								unk_0x11AD11297DC58CC7(iLocal_131, true);
								unk_0xA47B46945FF6DE74(iLocal_131, 97,116f, -1288,588f, 28,2688f, 1, false, 0, 1);
								unk_0xD8F6A53F4799FAFE(iLocal_131, 246,1162f);
								func_369(&(Local_182.f_484), 1, iLocal_131, "FRANKLIN", 1, 1);
							}
						}
						if (unk_0x3148AE92ED70DC30("TREVOR", -1686040670))
						{
							if (!unk_0x437347B10A200C4B(unk_0x6450C2A9FBA3C3BF("TREVOR", 0), 0))
							{
								iLocal_132 = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("TREVOR", 0));
								unk_0x4E885A246A9D983A(iLocal_132, 208, true);
								unk_0x4E885A246A9D983A(iLocal_132, 118, false);
								unk_0x4E885A246A9D983A(iLocal_132, 213, false);
								unk_0x11AD11297DC58CC7(iLocal_132, true);
								unk_0xA47B46945FF6DE74(iLocal_132, 99,1774f, -1292,069f, 28,2688f, 1, false, 0, 1);
								unk_0xD8F6A53F4799FAFE(iLocal_132, 20,8497f);
								func_369(&(Local_182.f_484), 2, iLocal_132, "TREVOR", 1, 1);
							}
						}
						if (unk_0x3148AE92ED70DC30("LESTER", 1302784073))
						{
							if (!unk_0x437347B10A200C4B(unk_0x6450C2A9FBA3C3BF("LESTER", 0), 0))
							{
								iLocal_133 = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("LESTER", 0));
								unk_0x4E885A246A9D983A(iLocal_133, 208, true);
								unk_0x4E885A246A9D983A(iLocal_133, 118, false);
								unk_0x4E885A246A9D983A(iLocal_133, 213, false);
								unk_0x11AD11297DC58CC7(iLocal_133, true);
								unk_0xA47B46945FF6DE74(iLocal_133, 96,2331f, -1289,744f, 28,2688f, 1, false, 0, 1);
								unk_0xD8F6A53F4799FAFE(iLocal_133, 223,2882f);
								func_369(&(Local_182.f_484), 3, iLocal_133, "LESTER", 1, 1);
							}
						}
						if (unk_0xEABED1927EFB48CA(0))
						{
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_43, 2))
							{
								func_223();
								unk_0x5D96D8530B3D0904(&iLocal_43, 2);
							}
							if (iLocal_181 == 1)
							{
								unk_0x71199B01895C6202(-1008861746);
							}
							unk_0x77ADAEFF81EAE1E4(95,19f, -1293,499f, 28,2672f, 1,5f, 867556671, false);
							func_115(24, 0);
						}
					}
				}
			}
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iLocal_43, 3))
		{
			if (func_150(0))
			{
				if (func_376(&iLocal_46, 0, 0, 0, 0) == 1)
				{
					unk_0x5D96D8530B3D0904(&iLocal_43, 3);
				}
			}
		}
		else
		{
			func_369(&(Local_182.f_484), 0, 0, "MICHAEL", 1, 1);
			func_369(&(Local_182.f_484), 1, 0, "FRANKLIN", 1, 1);
			func_369(&(Local_182.f_484), 2, 0, "TREVOR", 1, 1);
			func_369(&(Local_182.f_484), 3, 0, "LESTER", 1, 1);
			func_223();
			func_115(24, 0);
		}
	}
	else if (func_156(77) || func_2(0))
	{
		if (unk_0xA0F4292EA950943D("BS_2A_2B_INT"))
		{
			unk_0x5C8D148FC238F38A();
		}
		if (iLocal_48 != -1)
		{
			func_221(&iLocal_48);
		}
	}
}

void func_221(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (Global_76619 == *iParam0)
	{
		func_222(*iParam0, 0);
	}
	if (Global_76618 == *iParam0)
	{
		Global_76618 = -1;
	}
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0 && iVar1 < Global_76615)
	{
		if (Global_76604[iVar1] == *iParam0)
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		return;
	}
	iVar2 = iVar1;
	while (iVar2 <= (Global_76615 - 2))
	{
		Global_76604[iVar2] = Global_76604[iVar2 + 1];
		Global_76604[iVar2].f_1 = Global_76604[iVar2 + 1].f_1;
		iVar2++;
	}
	Global_76604[(Global_76615 - 1)] = -1;
	Global_76604[(Global_76615 - 1)].f_1 = 3;
	Global_76615 = (Global_76615 - 1);
	Global_76616 = 1;
	Global_76617 = unk_0xF4CCC8CB6DE7F1AE();
	*iParam0 = -1;
}

void func_222(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (Global_76618 == iParam0)
		{
			Global_76619 = iParam0;
		}
	}
	else if (Global_76619 == iParam0)
	{
		Global_76619 = -1;
	}
}

void func_223()
{
	func_86(1, 4, 1);
	func_86(2, 4, 1);
	func_378(&Local_182);
	func_68(&Local_182);
}

int func_224(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!iParam0->f_39)
	{
		if (iParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if ((!unk_0xEB6A8945D1AC98A1((*iParam0)[iParam0->f_7]) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && (*iParam0)[iParam0->f_7] != unk_0x16F2683693E537C9())
	{
		if (!bParam2)
		{
			if ((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) && !unk_0x4E861BC5B1EDA7BD(unk_0x16F2683693E537C9())) && !unk_0x81A5359F25512A04(unk_0x16F2683693E537C9()))
			{
				unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
			}
			else
			{
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			}
			if ((unk_0x869EFD0BC0868856((*iParam0)[iParam0->f_7]) && !unk_0x4E861BC5B1EDA7BD((*iParam0)[iParam0->f_7])) && !unk_0x81A5359F25512A04((*iParam0)[iParam0->f_7]))
			{
				unk_0x327AAEE25F323797((*iParam0)[iParam0->f_7]);
			}
			else
			{
				unk_0xA3BF0AA5A2608191((*iParam0)[iParam0->f_7]);
			}
		}
		iVar0 = unk_0x16F2683693E537C9();
		iVar1 = func_100();
		if (!iParam0->f_23)
		{
			func_272(iVar0, 0);
		}
		func_270(iVar1, &iVar0);
		unk_0x4E885A246A9D983A(iVar0, 32, true);
		unk_0x4E885A246A9D983A(iVar0, 250, true);
		iVar2 = func_269(iParam0->f_7);
		func_272((*iParam0)[iParam0->f_7], 0);
		fVar3 = (((to_float(unk_0x7F6DC62EA9922664((*iParam0)[iParam0->f_7])) - 100f) / (to_float(unk_0x65BC0B7172CA52DD((*iParam0)[iParam0->f_7])) - 100f)) * 100f);
		switch (func_103(unk_0x16F2683693E537C9()))
		{
			case 0:
				if (unk_0xED4934AFB6EC6451("BulletTime"))
				{
					unk_0x9A1335ECD7BD117F("BulletTime");
				}
				if (unk_0xED4934AFB6EC6451("BulletTimeOut"))
				{
					unk_0x9A1335ECD7BD117F("BulletTimeOut");
				}
				break;
			
			case 1:
				if (unk_0xED4934AFB6EC6451("DrivingFocus"))
				{
					unk_0x9A1335ECD7BD117F("DrivingFocus");
				}
				if (unk_0xED4934AFB6EC6451("DrivingFocusOut"))
				{
					unk_0x9A1335ECD7BD117F("DrivingFocusOut");
				}
				break;
			
			case 2:
				if (unk_0xED4934AFB6EC6451("REDMIST"))
				{
					unk_0x9A1335ECD7BD117F("REDMIST");
				}
				if (unk_0xED4934AFB6EC6451("REDMISTOut"))
				{
					unk_0x9A1335ECD7BD117F("REDMISTOut");
				}
				break;
		}
		if (func_102(func_100()))
		{
			if (unk_0x3114787DB5A129EF(unk_0xD803B885F5E47A62(), 0))
			{
				unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
			}
		}
		unk_0xA9B99C3482AC0D20(unk_0xD803B885F5E47A62(), (*iParam0)[iParam0->f_7], bParam2, 0);
		unk_0x3584F71E5CA29322(3);
		unk_0x3584F71E5CA29322(13);
		if (iParam3 & 1 != 0)
		{
			unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 210, false);
		}
		if (func_268(0) || func_268(3))
		{
			if (Global_22211.f_13)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_89496[iVar4].f_1, 2))
					{
						iVar5 = Global_89496[iVar4];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_89532[Global_76891.f_109[iVar5]]), 64);
						unk_0x9505C13496579D28(unk_0x12AB0310C2281427(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_22211.f_13 = 0;
		iParam0->f_5 = func_267(iVar1);
		if (iParam0->f_5 == 4)
		{
			iParam0->f_5 = 3;
		}
		(*iParam0)[iParam0->f_5] = iVar0;
		(*iParam0)[iParam0->f_7] = 0;
		iParam0->f_6 = func_267(iVar2);
		iParam0->f_7 = 4;
		iVar22 = unk_0x16F2683693E537C9();
		unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), true, 0);
		func_266(iVar22);
		unk_0x1160BAA065E2C9E5(iVar22, 0, 0);
		if (fVar3 < 25f && !unk_0xBADF5264209B7544(unk_0x16F2683693E537C9()))
		{
			unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), round((((25f / 100f) * (to_float(unk_0x65BC0B7172CA52DD(unk_0x16F2683693E537C9())) - 100f)) + 100f)), 0);
		}
		if (bParam1)
		{
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				unk_0x4A4806F9D471E491(iVar0, true, 0);
				func_266(iVar0);
				unk_0x1160BAA065E2C9E5(iVar0, 0, 0);
				unk_0x6E8BDA9057564534(iVar0, 0, 0);
			}
		}
		else if (unk_0xC844350D5D58C99A(iVar0))
		{
			sVar24 = unk_0xA712FAE854841798(iVar0, &uVar23);
			if (!unk_0x2EBF5002C6B6A06C(sVar24))
			{
				if (!unk_0x7F8A39872A07D2CE(sVar24, unk_0xBB0808A181D4745C()))
				{
					unk_0x73270B3C9CC833FD(iVar0, false, 1);
				}
				unk_0xEBA53F35D0085654(&iVar0);
			}
		}
		Global_96026 = 1;
		func_264(unk_0x16F2683693E537C9());
		func_263();
		func_262(iVar2);
		func_253();
		func_248(iVar2);
		func_231(func_246(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 145, 0));
		unk_0x324CFDE7809E2EC2(unk_0xD803B885F5E47A62());
		unk_0x7980D72D61BEF4D5(unk_0x16F2683693E537C9(), false);
		unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 1);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x27E404AD7AC8083F(unk_0xD803B885F5E47A62(), func_395(67));
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0xE21702DBF1967A40(unk_0xD803B885F5E47A62(), func_395(68));
		}
		func_228(iVar2, &iVar22);
		if (((func_394(0) || func_394(3)) || func_394(2)) || func_394(4))
		{
			unk_0x4E885A246A9D983A(iVar22, 32, false);
			unk_0x4E885A246A9D983A(iVar22, 250, false);
		}
		else
		{
			unk_0x4E885A246A9D983A(iVar22, 32, true);
			unk_0x4E885A246A9D983A(iVar22, 250, true);
		}
		if (!func_227())
		{
			func_225();
		}
		Global_95663 = 0;
		return 1;
	}
	else
	{
		if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
		}
		if (unk_0xEB6A8945D1AC98A1((*iParam0)[iParam0->f_7]))
		{
		}
		if (unk_0x16F2683693E537C9() == (*iParam0)[iParam0->f_7])
		{
		}
	}
	return 0;
}

void func_225()
{
	if (Global_96056)
	{
		func_101();
		unk_0x9BF51DDC898CF6FE(func_226(Global_111638.f_2358.f_539.f_4321));
	}
	else
	{
		unk_0x9BF51DDC898CF6FE("");
	}
}

char* func_226(var uParam0)
{
	uParam0 = uParam0;
	return "";
}

bool func_227()
{
	return Global_22209;
}

void func_228(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_229(4, *iParam1);
			func_229(7, *iParam1);
			func_229(8, *iParam1);
			func_229(11, *iParam1);
			break;
		
		case 1:
			if (Global_111638.f_9080.f_330[2])
			{
				func_229(4, *iParam1);
			}
			func_229(7, *iParam1);
			func_229(8, *iParam1);
			func_229(11, *iParam1);
			if (Global_111638.f_9080.f_99.f_58[126])
			{
				func_229(12, *iParam1);
			}
			break;
		
		case 2:
			if (Global_111638.f_9080.f_330[20])
			{
				func_229(4, *iParam1);
			}
			func_229(7, *iParam1);
			func_229(8, *iParam1);
			func_229(11, *iParam1);
			break;
	}
}

void func_229(int iParam0, int iParam1)
{
	if (!unk_0xC844350D5D58C99A(iParam1))
	{
		return;
	}
	if (func_230(iParam0, iParam1))
	{
		return;
	}
	if (Global_40554[iParam0].f_24 < 5)
	{
		Global_40554[iParam0].f_25[Global_40554[iParam0].f_24] = iParam1;
		Global_40554[iParam0].f_24++;
	}
	else
	{
		bVar2 = false;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = Global_40554[iParam0].f_25[iVar0];
			if (!unk_0xC844350D5D58C99A(iVar1) || unk_0xEB6A8945D1AC98A1(iVar1))
			{
				Global_40554[iParam0].f_25[iVar0] = iParam1;
				bVar2 = true;
				iVar0 = 6;
			}
			iVar0++;
		}
		if (!bVar2)
		{
		}
	}
}

int func_230(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_40554[iParam0].f_24)
	{
		if (iParam1 == Global_40554[iParam0].f_25[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_231(int iParam0)
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			unk_0x5D96D8530B3D0904(&(Global_37218[(38 / 32)]), (38 % 32));
			func_232(38, 0);
			unk_0x5D96D8530B3D0904(&(Global_37218[(41 / 32)]), (41 % 32));
			func_232(41, 0);
			unk_0x5D96D8530B3D0904(&(Global_37218[(43 / 32)]), (43 % 32));
			func_232(43, 0);
			unk_0x5D96D8530B3D0904(&(Global_37218[(42 / 32)]), (42 % 32));
			func_232(42, 0);
			unk_0x5D96D8530B3D0904(&(Global_37218[(44 / 32)]), (44 % 32));
			func_232(44, 0);
			break;
		
		case 1:
			unk_0x5D96D8530B3D0904(&(Global_37218[(51 / 32)]), (51 % 32));
			func_232(51, 0);
			break;
		
		case 2:
			unk_0x5D96D8530B3D0904(&(Global_37218[(51 / 32)]), (51 % 32));
			func_232(51, 0);
			break;
		
		case 3:
			unk_0x5D96D8530B3D0904(&(Global_37218[(53 / 32)]), (53 % 32));
			func_232(53, 0);
			break;
		
		case 4:
			unk_0x5D96D8530B3D0904(&(Global_37218[(81 / 32)]), (81 % 32));
			func_232(81, 0);
			unk_0x5D96D8530B3D0904(&(Global_37218[(82 / 32)]), (82 % 32));
			func_232(82, 0);
			break;
		
		case 5:
			unk_0x5D96D8530B3D0904(&(Global_37218[(47 / 32)]), (47 % 32));
			func_232(47, 0);
			unk_0x5D96D8530B3D0904(&(Global_37218[(50 / 32)]), (50 % 32));
			func_232(50, 0);
			break;
		
		case 6:
			unk_0x5D96D8530B3D0904(&(Global_37218[(50 / 32)]), (50 % 32));
			func_232(50, 0);
			break;
	}
}

void func_232(int iParam0, int iParam1)
{
	if (iParam0 != 226)
	{
		if (Global_76622)
		{
			iVar0 = Global_2439138.f_75[iParam0];
		}
		else
		{
			iVar0 = Global_111638.f_7256[iParam0];
		}
		if (iVar0 != iParam1 || unk_0xEAE0D21A50E6C7F4(Global_37218[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				unk_0x5D96D8530B3D0904(&(Global_37227[(iParam0 / 32)]), (iParam0 % 32));
				Global_37690[iParam0] = iParam1;
			}
			else if (Global_76622)
			{
				Global_2439138.f_75[iParam0] = iParam1;
			}
			else
			{
				Global_111638.f_7256[iParam0] = iParam1;
			}
			unk_0x5D96D8530B3D0904(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
			func_234(iParam0);
			if (unk_0xEAE0D21A50E6C7F4(Global_37218[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_233(iParam0);
			}
		}
	}
}

void func_233(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_38161.f_228[(iParam0 / 32)], (iParam0 % 23)))
	{
		unk_0x5D96D8530B3D0904(&(Global_38161.f_228[(iParam0 / 32)]), (iParam0 % 23));
		Global_38161[Global_38161.f_227] = iParam0;
		Global_38161.f_227++;
	}
}

void func_234(int iParam0)
{
	if (!func_243())
	{
		return;
	}
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return;
	}
	Var0 = { func_242(iParam0) };
	if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 2))
	{
		func_239(iParam0, &Var0);
	}
	if (!unk_0x76395FF5E8D5E643(Var0.f_5))
	{
		if (unk_0x22A8E52414415B76())
		{
			return;
		}
	}
	bVar7 = false;
	bVar8 = false;
	fVar10 = unk_0x0EB28750412C3A5A(Var0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), true);
	if ((unk_0xEAE0D21A50E6C7F4(Global_37227[(iParam0 / 32)], (iParam0 % 32)) && Global_37690[iParam0] == 2) && fVar10 > 210f)
	{
		unk_0x0674E58A79778E99(&(Global_37227[(iParam0 / 32)]), (iParam0 % 32));
		Global_37236[iParam0] = 0;
	}
	if (unk_0x8A22C4C08282BF26(1832807115) == 0)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_37463[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar10 < 25f)
			{
				if (Global_98796.f_343 == 0)
				{
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
					{
						Global_98796.f_343 = unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9());
					}
				}
				iVar11 = Global_98796.f_343;
				iVar12 = unk_0xFBD08BECC9B87937(Var0);
				if (iVar11 == iVar12 && iVar11 != 0)
				{
					unk_0x5D96D8530B3D0904(&(Global_37227[(iParam0 / 32)]), (iParam0 % 32));
					Global_37690[iParam0] = 3;
					unk_0x5D96D8530B3D0904(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			unk_0x0674E58A79778E99(&(Global_37463[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_37227[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar9 = Global_37690[iParam0];
	}
	else if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 0))
	{
		if (Global_111638.f_9080)
		{
			iVar9 = func_236(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (func_394(14))
		{
			iVar9 = 0;
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 1) && unk_0x8A22C4C08282BF26(92439941) == 0)
	{
		if (func_235())
		{
			iVar9 = 0;
		}
		else
		{
			iVar9 = 1;
		}
	}
	else
	{
		iVar9 = Global_111638.f_7256[iParam0];
	}
	if (Global_37917[iParam0] != iVar9)
	{
		bVar7 = true;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_37218[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_37227[(iParam0 / 32)], (iParam0 % 32)) || (Global_37236[iParam0] == 0 && Global_37690[iParam0] != 2))
		{
			bVar7 = true;
		}
	}
	if (bVar7)
	{
		if (!Global_37217)
		{
		}
		else
		{
			if (!unk_0x76395FF5E8D5E643(Var0.f_5))
			{
				unk_0x8010B3127F058F0F(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar9)
			{
				case 1:
					if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 3))
					{
						bVar13 = true;
					}
					else if (fVar10 > 3f || unk_0x755FF954DAE327E1(unk_0x9CED8DAD53D1A397(Var0.f_5)) <= 0,015f)
					{
						iVar14 = unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9());
						iVar15 = unk_0xFBD08BECC9B87937(Var0);
						if (iVar14 != iVar15 || iVar14 == 0)
						{
							bVar13 = true;
						}
					}
					if (bVar13)
					{
						if (Var0.f_6 != 0f)
						{
							unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0, 0);
						}
						unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, 0, 1);
						bVar8 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0, 1);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, 0, 0, 1);
					bVar8 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				}
		}
		if (bVar8)
		{
			unk_0x0674E58A79778E99(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
			Global_37917[iParam0] = iVar9;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_37227[(iParam0 / 32)], (iParam0 % 32)) && Global_37690[iParam0] != 2)
	{
		unk_0x5D96D8530B3D0904(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
		func_233(iParam0);
		if (Global_37236[iParam0] < 2)
		{
			Global_37236[iParam0]++;
		}
	}
}

int func_235()
{
	if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
	{
		return 0;
	}
	switch (func_100())
	{
		case 0:
			if (Global_111638.f_9080.f_99.f_58[65])
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_111638.f_9080.f_99.f_58[66])
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_111638.f_9080.f_99.f_58[65])
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_236(int iParam0)
{
	iVar0 = func_100();
	if (func_237(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (iVar0 == 1)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[5], 0) || unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[6], 0))
			{
				return 0;
			}
		}
		if (func_102(iVar0))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_93771[5], iVar0))
			{
				return 0;
			}
		}
	}
	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (iVar0 == 0)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[0], 0))
				{
					return 0;
				}
			}
			if (func_102(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_93771[0], iVar0))
				{
					if (iParam0 != 40)
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
			}
			break;
		
		case 47:
		case 48:
		case 49:
			if (iVar0 == 1)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[5], 0))
				{
					return 0;
				}
			}
			if (func_102(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_93771[5], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 50:
			if (iVar0 == 1)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[6], 0))
				{
					return 0;
				}
			}
			if (func_102(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_93771[6], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 51:
		case 52:
			if (iVar0 == 2)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[2], 0))
				{
					return 0;
				}
				if (func_102(iVar0))
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_93771[2], iVar0))
					{
						return 0;
					}
				}
			}
			else if (iVar0 == 0)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[1], 0))
				{
					return 0;
				}
				if (func_102(iVar0))
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_93771[1], iVar0))
					{
						return 0;
					}
				}
			}
			break;
		
		case 53:
			if (iVar0 == 2)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[3], 0))
				{
					return 0;
				}
			}
			if (func_102(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_93771[3], iVar0))
				{
					return 0;
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

int func_237(int iParam0)
{
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
			{
				iVar0 = unk_0x134B62B726CEC8E6(func_238(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 1)));
				switch (iVar0)
				{
					case 516990260:
					case -845961253:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

int func_238(int iParam0)
{
	return iParam0;
}

void func_239(int iParam0, var uParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_178();
	iVar1 = func_241(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_240(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_111638.f_7256[iParam0] = 0;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_240(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_111638.f_7256[iParam0] = 0;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_240(iParam0))
			{
				if ((unk_0x8A22C4C08282BF26(1139079984) == 0 && unk_0x8A22C4C08282BF26(478649282) == 0) && !Global_111638.f_9080.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_111638.f_7256[iParam0] = 0;
							unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_111638.f_9080.f_99.f_58[4])
				{
					Global_111638.f_7256[iParam0] = 0;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else if (Global_111638.f_9080.f_99.f_58[4])
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			else if (unk_0x8A22C4C08282BF26(1139079984) == 0 && unk_0x8A22C4C08282BF26(478649282) == 0)
			{
				if (iVar1 >= 21)
				{
					if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), *uParam1) >= 18f)
					{
						Global_111638.f_7256[iParam0] = 1;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
					}
				}
				else if (iVar1 < 7)
				{
					if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), *uParam1) >= 18f)
					{
						Global_111638.f_7256[iParam0] = 1;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_240(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_111638.f_7256[iParam0] = 0;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), *uParam1) >= 40f)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 9)
			{
				if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), *uParam1) >= 40f)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_240(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_240(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(-1802680602) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else if (unk_0x8A22C4C08282BF26(-1802680602) > 0)
			{
				Global_111638.f_7256[iParam0] = 0;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 158:
		case 159:
			if (unk_0x8A22C4C08282BF26(Global_89532[70].f_6) == 0)
			{
				if (!func_240(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 160:
		case 161:
			if (unk_0x8A22C4C08282BF26(1723330028) == 0)
			{
				if (!func_240(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_240(iParam0) && unk_0x8A22C4C08282BF26(Global_89532[26].f_6) == 0)
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			else
			{
				return;
			}
			break;
		
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_240(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_89532[43].f_6) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_240(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_240(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_89532[93].f_6) > 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_240(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_240(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_89532[8].f_6) == 0 && unk_0x8A22C4C08282BF26(Global_89532[10].f_6) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_240(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_89532[47].f_6) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (unk_0x8A22C4C08282BF26(Global_89532[70].f_6) == 0)
			{
				if (!func_240(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (unk_0x8A22C4C08282BF26(Global_89532[48].f_6) == 0)
			{
				if (!func_240(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 99:
		case 100:
			if (unk_0x8A22C4C08282BF26(Global_89532[39].f_6) == 0)
			{
				if (!func_240(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_240(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_240(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_240(iParam0))
			{
				Global_111638.f_7256[iParam0] = 0;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
	}
}

bool func_240(int iParam0)
{
	Var0 = { func_242(iParam0) };
	iVar7 = unk_0x51D3DB30DC0C68AD(Var0.f_5);
	return ((iVar7 == 1 || iVar7 == 4) || iVar7 == 2);
}

int func_241(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

struct<7> func_242(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = -1844444717;
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 1804701345;
			break;
		
		case 1:
			Var0.f_3 = -1844444717;
			Var0 = { -1287,857f, -1115,742f, 7,1401f };
			Var0.f_5 = 1403601067;
			break;
		
		case 2:
			Var0.f_3 = -1844444717;
			Var0 = { 1932,952f, 3725,154f, 32,9944f };
			Var0.f_5 = -2031139496;
			break;
		
		case 3:
			Var0.f_3 = -1844444717;
			Var0 = { 1207,873f, -470,063f, 66,358f };
			Var0.f_5 = 1796834809;
			break;
		
		case 4:
			Var0.f_3 = -1844444717;
			Var0 = { -29,8692f, -148,1571f, 57,2265f };
			Var0.f_5 = 96153298;
			break;
		
		case 5:
			Var0.f_3 = -1844444717;
			Var0 = { -280,7851f, 6232,782f, 31,8455f };
			Var0.f_5 = -281080954;
			break;
		
		case 6:
			Var0.f_3 = -1663512092;
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823,2001f, -187,0831f, 37,819f };
			Var0.f_5 = 183249434;
			break;
		
		case 7:
			Var0.f_3 = 145369505;
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822,4442f, -188,3924f, 37,819f };
			Var0.f_5 = 758345384;
			break;
		
		case 8:
			Var0.f_3 = 868499217;
			Var0 = { 82,3186f, -1392,752f, 29,5261f };
			Var0.f_5 = -1069262641;
			break;
		
		case 9:
			Var0.f_3 = -1148826190;
			Var0 = { 82,3186f, -1390,476f, 29,5261f };
			Var0.f_5 = 1968521986;
			break;
		
		case 10:
			Var0.f_3 = 868499217;
			Var0 = { 1686,983f, 4821,741f, 42,2131f };
			Var0.f_5 = -2143706301;
			break;
		
		case 11:
			Var0.f_3 = -1148826190;
			Var0 = { 1687,282f, 4819,484f, 42,2131f };
			Var0.f_5 = -1403421822;
			break;
		
		case 12:
			Var0.f_3 = 868499217;
			Var0 = { 418,637f, -806,457f, 29,6396f };
			Var0.f_5 = -1950137670;
			break;
		
		case 13:
			Var0.f_3 = -1148826190;
			Var0 = { 418,637f, -808,733f, 29,6396f };
			Var0.f_5 = 1226259807;
			break;
		
		case 14:
			Var0.f_3 = 868499217;
			Var0 = { -1096,661f, 2705,446f, 19,2578f };
			Var0.f_5 = 1090833557;
			break;
		
		case 15:
			Var0.f_3 = -1148826190;
			Var0 = { -1094,965f, 2706,964f, 19,2578f };
			Var0.f_5 = 897332612;
			break;
		
		case 16:
			Var0.f_3 = 868499217;
			Var0 = { 1196,825f, 2703,221f, 38,3726f };
			Var0.f_5 = 1095946640;
			break;
		
		case 17:
			Var0.f_3 = -1148826190;
			Var0 = { 1199,101f, 2703,221f, 38,3726f };
			Var0.f_5 = 801975945;
			break;
		
		case 18:
			Var0.f_3 = 868499217;
			Var0 = { -818,7642f, -1079,544f, 11,4781f };
			Var0.f_5 = -167996547;
			break;
		
		case 19:
			Var0.f_3 = -1148826190;
			Var0 = { -816,7932f, -1078,406f, 11,4781f };
			Var0.f_5 = -1935818563;
			break;
		
		case 20:
			Var0.f_3 = 868499217;
			Var0 = { -0,0564f, 6517,461f, 32,0278f };
			Var0.f_5 = 1891185217;
			break;
		
		case 21:
			Var0.f_3 = -1148826190;
			Var0 = { -1,7253f, 6515,914f, 32,0278f };
			Var0.f_5 = 1236591681;
			break;
		
		case 22:
			Var0.f_3 = 1780022985;
			Var0 = { -1201,435f, -776,8566f, 17,9918f };
			Var0.f_5 = 1980808685;
			break;
		
		case 23:
			Var0.f_3 = 1780022985;
			Var0 = { 617,2458f, 2751,022f, 42,7578f };
			Var0.f_5 = 1352749757;
			break;
		
		case 24:
			Var0.f_3 = 1780022985;
			Var0 = { 127,8201f, -211,8274f, 55,2275f };
			Var0.f_5 = -566554453;
			break;
		
		case 25:
			Var0.f_3 = 1780022985;
			Var0 = { -3167,75f, 1055,536f, 21,5329f };
			Var0.f_5 = 1284749450;
			break;
		
		case 26:
			Var0.f_3 = -1922281023;
			Var0 = { -716,6754f, -155,42f, 37,6749f };
			Var0.f_5 = 261851994;
			break;
		
		case 27:
			Var0.f_3 = -1922281023;
			Var0 = { -715,6154f, -157,2561f, 37,6749f };
			Var0.f_5 = 217646625;
			break;
		
		case 28:
			Var0.f_3 = -1922281023;
			Var0 = { -157,0924f, -306,4413f, 39,994f };
			Var0.f_5 = 1801139578;
			break;
		
		case 29:
			Var0.f_3 = -1922281023;
			Var0 = { -156,4022f, -304,4366f, 39,994f };
			Var0.f_5 = -2123275866;
			break;
		
		case 30:
			Var0.f_3 = -1922281023;
			Var0 = { -1454,782f, -231,7927f, 50,0565f };
			Var0.f_5 = 1312689981;
			break;
		
		case 31:
			Var0.f_3 = -1922281023;
			Var0 = { -1456,201f, -233,3682f, 50,0565f };
			Var0.f_5 = -595055661;
			break;
		
		case 32:
			Var0.f_3 = 543652229;
			Var0 = { 321,81f, 178,36f, 103,68f };
			Var0.f_5 = -265260897;
			break;
		
		case 33:
			Var0.f_3 = -1212951353;
			Var0 = { 1859,89f, 3749,79f, 33,18f };
			Var0.f_5 = -1284867488;
			break;
		
		case 34:
			Var0.f_3 = -1212951353;
			Var0 = { -289,1752f, 6199,112f, 31,637f };
			Var0.f_5 = 302307081;
			break;
		
		case 35:
			Var0.f_3 = 543652229;
			Var0 = { -1155,454f, -1424,008f, 5,0461f };
			Var0.f_5 = -681886015;
			break;
		
		case 36:
			Var0.f_3 = 543652229;
			Var0 = { 1321,286f, -1650,597f, 52,3663f };
			Var0.f_5 = -2086556500;
			break;
		
		case 37:
			Var0.f_3 = 543652229;
			Var0 = { -3167,789f, 1074,767f, 20,9209f };
			Var0.f_5 = -1496386696;
			break;
		
		case 38:
			Var0.f_3 = 159994461;
			Var0 = { -817f, 179f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = -1686014385;
			Var0 = { -816f, 178f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = 30769481;
			Var0 = { -815f, 186f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6,5f;
			break;
		
		case 41:
			Var0.f_3 = -1454760130;
			Var0 = { -797f, 177f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = 1245831483;
			Var0 = { -795f, 178f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = -1454760130;
			Var0 = { -793f, 181f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = 1245831483;
			Var0 = { -794f, 183f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = -1568354151;
			Var0 = { -849f, 179f, 70f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = 1019527301;
			Var0 = { -802,7333f, 167,5041f, 77,5824f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = 520341586;
			Var0 = { -14f, -1441f, 31f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = 1413743677;
			Var0 = { -15f, -1427f, 31f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = 703855057;
			Var0 = { -25,28f, -1431,06f, 30,84f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = 308207762;
			Var0 = { 7,52f, 539,53f, 176,18f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = 132154435;
			Var0 = { 1973f, 3815f, 34f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = 1736361794;
			break;
		
		case 52:
			Var0.f_3 = 67910261;
			Var0 = { 1972,787f, 3824,554f, 32,5831f };
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		
		case 53:
			Var0.f_3 = -607040053;
			Var0 = { -1150f, -1521f, 11f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = -550347177;
			Var0 = { -1145,9f, -1991,14f, 14,18f };
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		
		case 55:
			Var0.f_3 = 270330101;
			Var0 = { 723,12f, -1088,83f, 23,28f };
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		
		case 56:
			Var0.f_3 = -550347177;
			Var0 = { -356,09f, -134,77f, 40,01f };
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		
		case 57:
			Var0.f_3 = -822900180;
			Var0 = { 108,8502f, 6617,876f, 32,673f };
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		
		case 58:
			Var0.f_3 = -822900180;
			Var0 = { 114,3206f, 6623,226f, 32,7161f };
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		
		case 59:
			Var0.f_3 = -822900180;
			Var0 = { 1182,305f, 2645,242f, 38,807f };
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		
		case 60:
			Var0.f_3 = -822900180;
			Var0 = { 1174,654f, 2645,242f, 38,6826f };
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		
		case 225:
			Var0.f_3 = -427498890;
			Var0 = { -205,7007f, -1310,692f, 30,2957f };
			Var0.f_5 = -288764223;
			Var0.f_6 = 25f;
			break;
		
		case 61:
			Var0.f_3 = 486670049;
			Var0 = { -107,5401f, -9,0258f, 70,6696f };
			Var0.f_5 = -252283844;
			break;
		
		case 62:
			Var0.f_3 = 245182344;
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = -826072862;
			break;
		
		case 63:
			Var0.f_3 = -681066206;
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 763780711;
			break;
		
		case 64:
			Var0.f_3 = 551491569;
			Var0 = { 709,9813f, -963,5311f, 30,5453f };
			Var0.f_5 = -874851305;
			break;
		
		case 65:
			Var0.f_3 = 933053701;
			Var0 = { 709,9894f, -960,6675f, 30,5453f };
			Var0.f_5 = -1480820165;
			break;
		
		case 66:
			Var0.f_3 = 426403179;
			Var0 = { 707,8046f, -962,4564f, 30,5453f };
			Var0.f_5 = 949391213;
			break;
		
		case 67:
			Var0.f_3 = -1212951353;
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 212192855;
			break;
		
		case 68:
			Var0.f_3 = -1212951353;
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = -126474752;
			break;
		
		case 69:
			Var0.f_3 = 1173348778;
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 1765671336;
			break;
		
		case 70:
			Var0.f_3 = -1428622127;
			Var0 = { 1083,547f, -1975,435f, 31,6222f };
			Var0.f_5 = 792295685;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = -1428622127;
			Var0 = { 1065,237f, -2006,079f, 32,2329f };
			Var0.f_5 = 563273144;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = -1428622127;
			Var0 = { 1085,307f, -2018,561f, 41,6289f };
			Var0.f_5 = -726993043;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 73:
			Var0.f_3 = -353187150;
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 178228075;
			break;
		
		case 74:
			Var0.f_3 = -1666470363;
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 1852297978;
			break;
		
		case 75:
			Var0.f_3 = 1145337974;
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = -565026078;
			break;
		
		case 76:
			Var0.f_3 = -1647153464;
			Var0 = { 1271,89f, -1707,57f, 53,79f };
			Var0.f_5 = 1646172266;
			break;
		
		case 77:
			Var0.f_3 = -1647153464;
			Var0 = { 1270,77f, -1708,1f, 53,75f };
			Var0.f_5 = 204467342;
			break;
		
		case 78:
			Var0.f_3 = -2069558801;
			Var0 = { -127,5f, -1456,18f, 37,94f };
			Var0.f_5 = 2047070410;
			break;
		
		case 79:
			Var0.f_3 = -190780785;
			Var0 = { 483,56f, -1316,08f, 32,18f };
			Var0.f_5 = 1417775309;
			break;
		
		case 80:
			Var0.f_3 = -664582244;
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = -106474626;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 81:
			Var0.f_3 = -1116041313;
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 1840510598;
			break;
		
		case 82:
			Var0.f_3 = 668467214;
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 1382825971;
			break;
		
		case 83:
			Var0.f_3 = -1306074314;
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 232536303;
			break;
		
		case 84:
			Var0.f_3 = -1375589668;
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 1267246609;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = -1375589668;
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		
		case 86:
			Var0.f_3 = -1032171637;
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 2077901353;
			break;
		
		case 87:
			Var0.f_3 = -52575179;
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = -2102079126;
			break;
		
		case 88:
			Var0.f_3 = 338220432;
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = -1905793212;
			break;
		
		case 89:
			Var0.f_3 = 1075555701;
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = -1797032505;
			break;
		
		case 90:
			Var0.f_3 = -1032171637;
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = -62235167;
			break;
		
		case 91:
			Var0.f_3 = -52575179;
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = -1727188163;
			break;
		
		case 92:
			Var0.f_3 = -1032171637;
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = -562748873;
			break;
		
		case 93:
			Var0.f_3 = -52575179;
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 1976429759;
			break;
		
		case 94:
			Var0.f_3 = -1652821467;
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 1341041543;
			break;
		
		case 95:
			Var0.f_3 = 1013329911;
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = -1631467220;
			break;
		
		case 96:
			Var0.f_3 = -502195954;
			Var0 = { -1104,66f, -1638,48f, 4,68f };
			Var0.f_5 = -1788473129;
			break;
		
		case 97:
			Var0.f_3 = -2051651622;
			Var0 = { -31,72f, -1101,85f, 26,57f };
			Var0.f_5 = -1831288286;
			break;
		
		case 98:
			Var0.f_3 = 464151082;
			Var0 = { 134,4f, -2204,1f, 7,52f };
			Var0.f_5 = 963876966;
			break;
		
		case 99:
			Var0.f_3 = -1081024910;
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 1773088812;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = -1081024910;
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = 1099436502;
			Var0 = { -608,73f, -1610,32f, 27,16f };
			Var0.f_5 = -1811763714;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = -1627599682;
			Var0 = { -611,32f, -1610,09f, 27,16f };
			Var0.f_5 = 1608500665;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = 1099436502;
			Var0 = { -592,94f, -1631,58f, 27,16f };
			Var0.f_5 = -1456048340;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = -1627599682;
			Var0 = { -592,71f, -1628,99f, 27,16f };
			Var0.f_5 = 943854909;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 105:
			Var0.f_3 = 1173348778;
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = -89065356;
			break;
		
		case 106:
			Var0.f_3 = 479144380;
			Var0 = { 1988,353f, 3054,411f, 47,3204f };
			Var0.f_5 = -925491840;
			break;
		
		case 107:
			Var0.f_3 = -2045308299;
			Var0 = { -700,17f, 47,31f, 44,3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 108:
			Var0.f_3 = -42303174;
			Var0 = { -697,94f, 48,35f, 44,3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 109:
			Var0.f_3 = -1230442770;
			Var0 = { 241,3574f, 361,0488f, 105,8963f };
			Var0.f_5 = 1538555582;
			break;
		
		case 110:
			Var0.f_3 = 913904359;
			Var0 = { -689,11f, 506,97f, 110,64f };
			Var0.f_5 = -961994186;
			break;
		
		case 111:
			Var0.f_3 = -495720969;
			Var0 = { -1055,96f, -236,43f, 44,17f };
			Var0.f_5 = -1772472848;
			break;
		
		case 112:
			Var0.f_3 = 668467214;
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = -46374650;
			break;
		
		case 113:
			Var0.f_3 = 1342464176;
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = -358302761;
			break;
		
		case 114:
			Var0.f_3 = 1436076651;
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = -1237936041;
			break;
		
		case 115:
			Var0.f_3 = 1413743677;
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 1487374207;
			break;
		
		case 116:
			Var0.f_3 = -815851463;
			Var0 = { 23,34f, -1897,6f, 23,05f };
			Var0.f_5 = -199126299;
			break;
		
		case 117:
			Var0.f_3 = -684382235;
			Var0 = { 524,2f, 3081,14f, 41,16f };
			Var0.f_5 = -897071863;
			break;
		
		case 118:
			Var0.f_3 = 1378348636;
			Var0 = { -1910,58f, -576,01f, 19,25f };
			Var0.f_5 = -864465775;
			break;
		
		case 119:
			Var0.f_3 = -2076287065;
			Var0 = { -720,39f, 256,86f, 80,29f };
			Var0.f_5 = -208439480;
			break;
		
		case 120:
			Var0.f_3 = -374527357;
			Var0 = { -718,42f, 257,79f, 80,29f };
			Var0.f_5 = -1001088805;
			break;
		
		case 121:
			Var0.f_3 = -1517873911;
			Var0 = { 106,38f, -742,7f, 46,18f };
			Var0.f_5 = 756894459;
			break;
		
		case 122:
			Var0.f_3 = -90456267;
			Var0 = { 105,76f, -746,65f, 46,18f };
			Var0.f_5 = 476981677;
			break;
		
		case 123:
			Var0.f_3 = -1207991715;
			Var0 = { -2343,53f, 3265,37f, 32,96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 124:
			Var0.f_3 = -1207991715;
			Var0 = { -2342,23f, 3267,62f, 32,96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 125:
			Var0.f_3 = -566611162;
			Var0 = { -1041,933f, -2748,167f, 22,0308f };
			Var0.f_5 = 169965357;
			break;
		
		case 126:
			Var0.f_3 = -551602996;
			Var0 = { -1044,841f, -2746,489f, 22,0308f };
			Var0.f_5 = 311232516;
			break;
		
		case 128:
			Var0.f_3 = 1104171198;
			Var0 = { -1045,12f, -232,004f, 39,4379f };
			Var0.f_5 = -1563127729;
			break;
		
		case 129:
			Var0.f_3 = -1425071302;
			Var0 = { -1046,516f, -229,3581f, 39,4379f };
			Var0.f_5 = 759145763;
			break;
		
		case 130:
			Var0.f_3 = -1679881977;
			Var0 = { -1083,62f, -260,4167f, 38,1867f };
			Var0.f_5 = -84399179;
			break;
		
		case 131:
			Var0.f_3 = -1045015371;
			Var0 = { -1080,974f, -259,0204f, 38,1867f };
			Var0.f_5 = -461898059;
			break;
		
		case 127:
			Var0.f_3 = -1033001619;
			Var0 = { -1042,57f, -240,6f, 38,11f };
			Var0.f_5 = 1259065971;
			break;
		
		case 132:
			Var0.f_3 = -1023447729;
			Var0 = { 1385,258f, -2079,949f, 52,7638f };
			Var0.f_5 = -884051216;
			break;
		
		case 133:
			Var0.f_3 = 73386408;
			Var0 = { 1656,57f, 4849,66f, 42,35f };
			Var0.f_5 = 243782214;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = -1152174184;
			Var0 = { 1656,25f, 4852,24f, 42,35f };
			Var0.f_5 = 714115627;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = -1184516519;
			Var0 = { -1051,402f, -474,6847f, 36,6199f };
			Var0.f_5 = 1668106976;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 1);
			break;
		
		case 136:
			Var0.f_3 = -1184516519;
			Var0 = { -1049,285f, -476,6376f, 36,7584f };
			Var0.f_5 = 1382347031;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 1);
			break;
		
		case 137:
			Var0.f_3 = 1230099731;
			Var0 = { -1210,957f, -580,8765f, 27,2373f };
			Var0.f_5 = -966790948;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 1);
			break;
		
		case 138:
			Var0.f_3 = 1230099731;
			Var0 = { -1212,445f, -578,4401f, 27,2373f };
			Var0.f_5 = -2068750132;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 1);
			break;
		
		case 139:
			Var0.f_3 = 993120320;
			Var0 = { -565,1712f, 276,6259f, 83,2863f };
			Var0.f_5 = -1716533184;
			break;
		
		case 140:
			Var0.f_3 = 993120320;
			Var0 = { -561,2863f, 293,5043f, 87,7771f };
			Var0.f_5 = 2146505927;
			break;
		
		case 141:
			Var0.f_3 = 1425919976;
			Var0 = { -631,96f, -236,33f, 38,21f };
			Var0.f_5 = 1874948872;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = 9467943;
			Var0 = { -630,43f, -238,44f, 38,21f };
			Var0.f_5 = -1965020851;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = -1743257725;
			Var0 = { 231,62f, 216,23f, 106,4f };
			Var0.f_5 = 1951546856;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = -1743257725;
			Var0 = { 232,72f, 213,88f, 106,4f };
			Var0.f_5 = -431382051;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = 110411286;
			Var0 = { 258,32f, 203,84f, 106,43f };
			Var0.f_5 = -293975210;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = 110411286;
			Var0 = { 260,76f, 202,95f, 106,43f };
			Var0.f_5 = -785215289;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = -222270721;
			Var0 = { 256,31f, 220,66f, 106,43f };
			Var0.f_5 = -366143778;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = 1956494919;
			Var0 = { 266,36f, 217,57f, 110,43f };
			Var0.f_5 = 440819155;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 149:
			Var0.f_3 = -1501157055;
			Var0 = { -442,66f, 6015,222f, 31,8663f };
			Var0.f_5 = -588495243;
			break;
		
		case 150:
			Var0.f_3 = -1501157055;
			Var0 = { -444,4985f, 6017,06f, 31,8663f };
			Var0.f_5 = 1815504139;
			break;
		
		case 151:
			Var0.f_3 = -1765048490;
			Var0 = { 1855,685f, 3683,93f, 34,5928f };
			Var0.f_5 = 1344911780;
			break;
		
		case 152:
			Var0.f_3 = -403433025;
			Var0 = { -1223,35f, -172,41f, 39,98f };
			Var0.f_5 = -320891223;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = 1308911070;
			Var0 = { -1220,93f, -173,68f, 39,98f };
			Var0.f_5 = 1511747875;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = -403433025;
			Var0 = { -1211,99f, -190,57f, 39,98f };
			Var0.f_5 = -1517722103;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = 1308911070;
			Var0 = { -1213,26f, -192,98f, 39,98f };
			Var0.f_5 = -1093199712;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = -403433025;
			Var0 = { -1217,77f, -201,54f, 39,98f };
			Var0.f_5 = 1902048492;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = 1308911070;
			Var0 = { -1219,04f, -203,95f, 39,98f };
			Var0.f_5 = -444768985;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = -582278602;
			Var0 = { 2514,32f, -317,34f, 93,32f };
			Var0.f_5 = 404057594;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = 1343686600;
			Var0 = { 2512,42f, -319,26f, 93,32f };
			Var0.f_5 = -1417472813;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = -26664553;
			Var0 = { 2333,23f, 2574,97f, 47,03f };
			Var0.f_5 = -1376084479;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = 914592203;
			Var0 = { 2329,65f, 2576,64f, 47,03f };
			Var0.f_5 = 457472151;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 162:
			Var0.f_3 = 97297972;
			Var0 = { 16,1279f, -1114,605f, 29,9469f };
			Var0.f_5 = 1071759151;
			break;
		
		case 163:
			Var0.f_3 = -8873588;
			Var0 = { 18,572f, -1115,495f, 29,9469f };
			Var0.f_5 = -2119023917;
			break;
		
		case 165:
			Var0.f_3 = 97297972;
			Var0 = { 1698,176f, 3751,506f, 34,8553f };
			Var0.f_5 = -1488490473;
			break;
		
		case 166:
			Var0.f_3 = -8873588;
			Var0 = { 1699,937f, 3753,42f, 34,8553f };
			Var0.f_5 = -511187813;
			break;
		
		case 167:
			Var0.f_3 = 97297972;
			Var0 = { 244,7274f, -44,0791f, 70,91f };
			Var0.f_5 = -248569395;
			break;
		
		case 168:
			Var0.f_3 = -8873588;
			Var0 = { 243,8379f, -46,5232f, 70,91f };
			Var0.f_5 = 989443413;
			break;
		
		case 169:
			Var0.f_3 = 97297972;
			Var0 = { 845,3624f, -1024,539f, 28,3448f };
			Var0.f_5 = 2022251829;
			break;
		
		case 170:
			Var0.f_3 = -8873588;
			Var0 = { 842,7684f, -1024,539f, 23,3448f };
			Var0.f_5 = 649820567;
			break;
		
		case 171:
			Var0.f_3 = 97297972;
			Var0 = { -326,1122f, 6075,27f, 31,6047f };
			Var0.f_5 = 537455378;
			break;
		
		case 172:
			Var0.f_3 = -8873588;
			Var0 = { -324,273f, 6077,109f, 31,6047f };
			Var0.f_5 = 1121431731;
			break;
		
		case 173:
			Var0.f_3 = 97297972;
			Var0 = { -665,2424f, -944,3256f, 21,9792f };
			Var0.f_5 = -1437380438;
			break;
		
		case 174:
			Var0.f_3 = -8873588;
			Var0 = { -662,6414f, -944,3256f, 21,9792f };
			Var0.f_5 = -946336965;
			break;
		
		case 175:
			Var0.f_3 = 97297972;
			Var0 = { -1313,826f, -389,1259f, 36,8457f };
			Var0.f_5 = 1893144650;
			break;
		
		case 176:
			Var0.f_3 = -8873588;
			Var0 = { -1314,465f, -391,6472f, 36,8457f };
			Var0.f_5 = 435841678;
			break;
		
		case 177:
			Var0.f_3 = 97297972;
			Var0 = { -1114,009f, 2689,77f, 18,7041f };
			Var0.f_5 = 948508314;
			break;
		
		case 178:
			Var0.f_3 = -8873588;
			Var0 = { -1112,071f, 2691,505f, 18,7041f };
			Var0.f_5 = -1796714665;
			break;
		
		case 179:
			Var0.f_3 = 97297972;
			Var0 = { -3164,845f, 1081,392f, 20,9887f };
			Var0.f_5 = -1155247245;
			break;
		
		case 180:
			Var0.f_3 = -8873588;
			Var0 = { -3163,812f, 1083,778f, 20,9887f };
			Var0.f_5 = 782482084;
			break;
		
		case 181:
			Var0.f_3 = 97297972;
			Var0 = { 2570,905f, 303,3556f, 108,8848f };
			Var0.f_5 = -1194470801;
			break;
		
		case 182:
			Var0.f_3 = -8873588;
			Var0 = { 2568,304f, 303,3556f, 108,8848f };
			Var0.f_5 = -2129698061;
			break;
		
		case 183:
			Var0.f_3 = 97297972;
			Var0 = { 813,1779f, -2148,27f, 29,7689f };
			Var0.f_5 = 1071759151;
			break;
		
		case 184:
			Var0.f_3 = -8873588;
			Var0 = { 810,5769f, -2148,27f, 29,7689f };
			Var0.f_5 = -2119023917;
			break;
		
		case 164:
			Var0.f_3 = 452874391;
			Var0 = { 6,8179f, -1098,209f, 29,9469f };
			Var0.f_5 = 1487704245;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = 452874391;
			Var0 = { 827,5342f, -2160,493f, 29,7688f };
			Var0.f_5 = 1529812051;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		
		case 186:
			Var0.f_3 = 546378757;
			Var0 = { -1107,01f, 289,38f, 64,76f };
			Var0.f_5 = 904342475;
			break;
		
		case 187:
			Var0.f_3 = -1249591818;
			Var0 = { -1101,62f, 290,36f, 64,76f };
			Var0.f_5 = -795418380;
			break;
		
		case 188:
			Var0.f_3 = 546378757;
			Var0 = { -1138,64f, 300,82f, 67,18f };
			Var0.f_5 = -1502457334;
			break;
		
		case 189:
			Var0.f_3 = -1249591818;
			Var0 = { -1137,05f, 295,59f, 67,18f };
			Var0.f_5 = -1994188940;
			break;
		
		case 190:
			Var0.f_3 = 1878909644;
			Var0 = { -2053,16f, 3239,49f, 30,5f };
			Var0.f_5 = -621770121;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = 1709395619;
			Var0 = { -2054,39f, 3237,23f, 30,5f };
			Var0.f_5 = 1018580481;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 192:
			Var0.f_3 = -1184592117;
			Var0 = { -108,91f, 6469,11f, 31,91f };
			Var0.f_5 = 421926217;
			break;
		
		case 193:
			Var0.f_3 = -1156020871;
			Var0 = { -182,91f, 6168,37f, 32,14f };
			Var0.f_5 = -1331552374;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = 2059227086;
			Var0 = { -59,89f, -1092,95f, 26,88f };
			Var0.f_5 = -293141277;
			break;
		
		case 197:
			Var0.f_3 = 1417577297;
			Var0 = { -60,55f, -1094,75f, 26,89f };
			Var0.f_5 = 506750037;
			break;
		
		case 194:
			Var0.f_3 = 2059227086;
			Var0 = { -39,13f, -1108,22f, 26,72f };
			Var0.f_5 = 1496005418;
			break;
		
		case 195:
			Var0.f_3 = 1417577297;
			Var0 = { -37,33f, -1108,87f, 26,72f };
			Var0.f_5 = -1863079210;
			break;
		
		case 198:
			Var0.f_3 = -1428622127;
			Var0 = { 1943,73f, 3803,63f, 32,31f };
			Var0.f_5 = -2018911784;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = 73386408;
			Var0 = { 316,39f, -276,49f, 54,52f };
			Var0.f_5 = -93934272;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = -1152174184;
			Var0 = { 313,96f, -275,6f, 54,52f };
			Var0.f_5 = 667682830;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = 73386408;
			Var0 = { -2965,71f, 484,22f, 16,05f };
			Var0.f_5 = 1876735830;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = -1152174184;
			Var0 = { -2965,82f, 481,63f, 16,05f };
			Var0.f_5 = -2112857171;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = 1755793225;
			Var0 = { 962,1f, -2183,83f, 31,06f };
			Var0.f_5 = 2046930518;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = 239858268;
			Var0 = { 961,79f, -2187,08f, 31,06f };
			Var0.f_5 = 1208502884;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = 1742849246;
			Var0 = { 2508,43f, -336,63f, 115,76f };
			Var0.f_5 = 1986432421;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = -44475594;
			Var0 = { -2255,19f, 322,26f, 184,93f };
			Var0.f_5 = -722798986;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = 1183182250;
			Var0 = { -2254,06f, 319,7f, 184,93f };
			Var0.f_5 = 204301578;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = -44475594;
			Var0 = { -2301,13f, 336,91f, 184,93f };
			Var0.f_5 = -320140460;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = 1183182250;
			Var0 = { -2298,57f, 338,05f, 184,93f };
			Var0.f_5 = 65222916;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = -44475594;
			Var0 = { -2222,32f, 305,86f, 184,93f };
			Var0.f_5 = -920027322;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = 1183182250;
			Var0 = { -2221,19f, 303,3f, 184,93f };
			Var0.f_5 = -58432001;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = -44475594;
			Var0 = { -2280,6f, 265,43f, 184,93f };
			Var0.f_5 = -2007378629;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = 1183182250;
			Var0 = { -2278,04f, 266,57f, 184,93f };
			Var0.f_5 = 418772613;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = -982531572;
			Var0 = { 778,31f, -1867,49f, 30,66f };
			Var0.f_5 = 1679064921;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = -1049302886;
			Var0 = { -721,35f, 91,01f, 56,68f };
			Var0.f_5 = 412198396;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = 1653418708;
			Var0 = { -728,84f, 88,64f, 56,68f };
			Var0.f_5 = -1053755588;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = 650392296;
			Var0 = { -2287,62f, 363,9f, 174,93f };
			Var0.f_5 = -53446139;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = -267139712;
			Var0 = { -2289,78f, 362,91f, 174,93f };
			Var0.f_5 = 1333960556;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = 650392296;
			Var0 = { -2289,86f, 362,88f, 174,93f };
			Var0.f_5 = -41786493;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = -267139712;
			Var0 = { -2292,01f, 361,89f, 174,93f };
			Var0.f_5 = 1750120734;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 223:
			Var0.f_3 = 1127922797;
			Var0 = { 1803,94f, 3929,01f, 33,72f };
			Var0.f_5 = 1661506222;
			break;
		
		case 203:
			Var0.f_3 = 73386408;
			Var0 = { -348,81f, -47,26f, 49,39f };
			Var0.f_5 = -2116116146;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = -1152174184;
			Var0 = { -351,26f, -46,41f, 49,39f };
			Var0.f_5 = -74083138;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = -1468417022;
			Var0 = { 962,9084f, -2105,814f, 34,6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

int func_243()
{
	if ((func_245() == -1 || func_245() == 999) && !func_244() == 0)
	{
		return 1;
	}
	return 0;
}

int func_244()
{
	return Global_30769;
}

int func_245()
{
	return Global_30768;
}

int func_246(vector3 vParam0, int iParam3, int iParam4)
{
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_93782[iVar0].f_7 != 263)
		{
			if (Global_93782[iVar0].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_247(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0x0EB28750412C3A5A(vParam0, Global_93782[iVar0].f_3, true);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_247(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[iParam0], 0);
}

void func_248(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_249(iParam0, iVar0);
		iVar0++;
	}
}

void func_249(int iParam0, int iParam1)
{
	if (((iParam0 != 0 || iParam0 != 1) || iParam0 != 2) || iParam0 != 3)
	{
		return;
	}
	func_252(iParam0, iParam1, &iVar2, &iVar3);
	if (unk_0x8CD06866876216F2())
	{
		iVar0 = func_250(iVar3, -1, 0);
	}
	else
	{
		unk_0x6FB46C25CCB7E6D5(iVar2, &iVar0, -1);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = (0,8f + (0,4f * (to_float(iVar0) / 100f)));
			unk_0xF7599E37AEBF26E7(unk_0xD803B885F5E47A62(), fVar1, 1);
			break;
		
		case 7:
			if (unk_0x8A22C4C08282BF26(-110852562) != 0 || unk_0x8A22C4C08282BF26(56357151) != 0)
			{
				Global_96027 = 1;
			}
			else
			{
				fVar1 = (1f - (to_float(iVar0) / 100f));
				unk_0x0FFE8B6DB75A4C39(unk_0xD803B885F5E47A62(), fVar1);
				unk_0xE78BAF6C6D97879A(unk_0xD803B885F5E47A62(), fVar1);
				unk_0xEE195B25E889FD63(unk_0xD803B885F5E47A62(), fVar1);
			}
			break;
	}
}

int func_250(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_251(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_251(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_215();
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

void func_252(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 1322098561;
					break;
				
				case 1:
					*uParam2 = 583576226;
					break;
				
				case 3:
					*uParam2 = 1939246781;
					break;
				
				case 2:
					*uParam2 = -1872025703;
					break;
				
				case 4:
					*uParam2 = 297038448;
					break;
				
				case 5:
					*uParam2 = 2024531174;
					break;
				
				case 6:
					*uParam2 = -1266079991;
					break;
				
				case 7:
					*uParam2 = 577288081;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 1372388259;
					break;
				
				case 1:
					*uParam2 = 626982837;
					break;
				
				case 3:
					*uParam2 = 1815853850;
					break;
				
				case 2:
					*uParam2 = -1205308189;
					break;
				
				case 4:
					*uParam2 = 2111310536;
					break;
				
				case 5:
					*uParam2 = -376705475;
					break;
				
				case 6:
					*uParam2 = -886696809;
					break;
				
				case 7:
					*uParam2 = -412283869;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 95446082;
					break;
				
				case 1:
					*uParam2 = 2105689774;
					break;
				
				case 3:
					*uParam2 = 2123663283;
					break;
				
				case 2:
					*uParam2 = 1327096153;
					break;
				
				case 4:
					*uParam2 = 1810848047;
					break;
				
				case 5:
					*uParam2 = 2010093328;
					break;
				
				case 6:
					*uParam2 = 708474090;
					break;
				
				case 7:
					*uParam2 = -801407253;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

void func_253()
{
	if ((unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) || !func_102(func_100())) || !func_259())
	{
		return;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_255(unk_0x16F2683693E537C9(), &Var0, 1, -1);
	func_254(1306, Var0[0], -1, 1);
	func_254(1307, Var0[1], -1, 1);
	func_254(1308, Var0[2], -1, 1);
	func_254(1309, Var0[3], -1, 1);
	func_254(1310, Var0[4], -1, 1);
	func_254(1311, Var0[5], -1, 1);
	func_254(1312, Var0[6], -1, 1);
	func_254(1313, Var0[7], -1, 1);
	func_254(1314, Var0[8], -1, 1);
	func_254(1315, Var0[9], -1, 1);
	func_254(1316, Var0[10], -1, 1);
	func_254(1317, Var0[11], -1, 1);
	func_254(1318, Var0.f_13[0], -1, 1);
	func_254(1319, Var0.f_13[1], -1, 1);
	func_254(1320, Var0.f_13[2], -1, 1);
	func_254(1321, Var0.f_13[3], -1, 1);
	func_254(1322, Var0.f_13[4], -1, 1);
	func_254(1323, Var0.f_13[5], -1, 1);
	func_254(1324, Var0.f_13[6], -1, 1);
	func_254(1325, Var0.f_13[7], -1, 1);
	func_254(1326, Var0.f_13[8], -1, 1);
	func_254(1327, Var0.f_13[9], -1, 1);
	func_254(1328, Var0.f_13[10], -1, 1);
	func_254(1329, Var0.f_13[11], -1, 1);
	func_254(1330, Var0.f_26[0], -1, 1);
	func_254(1331, Var0.f_26[1], -1, 1);
	func_254(1332, Var0.f_26[2], -1, 1);
	func_254(1333, Var0.f_26[3], -1, 1);
	func_254(1334, Var0.f_26[4], -1, 1);
	func_254(1335, Var0.f_26[5], -1, 1);
	func_254(1336, Var0.f_26[6], -1, 1);
	func_254(1337, Var0.f_26[7], -1, 1);
	func_254(1338, Var0.f_26[8], -1, 1);
	func_254(1339, Var0.f_26[9], -1, 1);
	func_254(1340, Var0.f_26[10], -1, 1);
	func_254(1341, Var0.f_26[11], -1, 1);
	func_254(1342, Var0.f_39[0], -1, 1);
	func_254(1343, Var0.f_39[1], -1, 1);
	func_254(1344, Var0.f_39[2], -1, 1);
	func_254(1345, Var0.f_39[3], -1, 1);
	func_254(1346, Var0.f_39[4], -1, 1);
	func_254(1347, Var0.f_39[5], -1, 1);
	func_254(1348, Var0.f_39[6], -1, 1);
	func_254(1349, Var0.f_39[7], -1, 1);
	func_254(1350, Var0.f_39[8], -1, 1);
	func_254(1351, Var0.f_49[0], -1, 1);
	func_254(1352, Var0.f_49[1], -1, 1);
	func_254(1353, Var0.f_49[2], -1, 1);
	func_254(1354, Var0.f_49[3], -1, 1);
	func_254(1355, Var0.f_49[4], -1, 1);
	func_254(1356, Var0.f_49[5], -1, 1);
	func_254(1357, Var0.f_49[6], -1, 1);
	func_254(1358, Var0.f_49[7], -1, 1);
	func_254(1359, Var0.f_49[8], -1, 1);
	func_254(1360, func_100(), -1, 1);
	unk_0xD8B681091EBE4064(-1373240669, 1, 1);
	Global_111638.f_2358.f_539.f_4315 = 1;
}

var func_254(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_215();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x6D63D77257071BC5((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x6D63D77257071BC5((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x6D63D77257071BC5((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x6D63D77257071BC5((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x6D63D77257071BC5((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x6D63D77257071BC5((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x6D63D77257071BC5((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x6D63D77257071BC5((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x6D63D77257071BC5((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x6D63D77257071BC5((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x6D63D77257071BC5((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x6D63D77257071BC5((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x6D63D77257071BC5((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x6D63D77257071BC5((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0x6D63D77257071BC5((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0x6D63D77257071BC5((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0x6D63D77257071BC5((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - unk_0x6D63D77257071BC5((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - unk_0x6D63D77257071BC5((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - unk_0x6D63D77257071BC5((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 28483), 0, 1, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - unk_0x6D63D77257071BC5((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x6D63D77257071BC5((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x6D63D77257071BC5((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xB8E1F940D68B4FA6(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

void func_255(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_103(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_258(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_257(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_102(iVar0))
		{
			uParam1->f_59 = Global_111638.f_2358.f_539[iVar0].f_59;
			uParam1->f_60 = Global_111638.f_2358.f_539[iVar0].f_60;
			uParam1->f_61 = Global_111638.f_2358.f_539[iVar0].f_61;
			uParam1->f_62 = Global_111638.f_2358.f_539[iVar0].f_62;
			uParam1->f_63 = Global_111638.f_2358.f_539[iVar0].f_63;
			uParam1->f_64 = Global_111638.f_2358.f_539[iVar0].f_64;
		}
		else if (unk_0x8CD06866876216F2() && unk_0x134B62B726CEC8E6(iParam0) == unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			if (func_256(161, iParam3))
			{
				uParam1->f_59 = func_250(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_250(752, iParam3, 0);
			}
			uParam1->f_60 = func_250(753, iParam3, 0);
			uParam1->f_61 = func_250(754, iParam3, 0);
		}
		if (unk_0x8CD06866876216F2() && iParam0 == unk_0x16F2683693E537C9())
		{
			if (func_256(161, iParam3))
			{
				uParam1->f_59 = func_250(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_250(752, iParam3, 0);
			}
		}
	}
}

int func_256(int iParam0, var uParam1)
{
	uVar0 = Global_2583656[iParam0][func_251(uParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_257(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	iVar0 = func_103(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x98F1B512A2CC07C5(iParam0, iParam1);
		*uParam3 = unk_0x22286A85EDEAEC56(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0xDCCE25EA1C1D1F76(iParam0) && unk_0x6BE6D34EA3F561AC(iParam0) != -1)
				{
					*uParam2 = unk_0x6BE6D34EA3F561AC(iParam0);
					*uParam3 = unk_0x7E1F0AD2CE37D34C(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_258(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	iVar0 = func_103(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x36C584991B4C183F(iParam0, iParam1);
		*uParam3 = unk_0xDADA8E1DD0D0D9D9(iParam0, iParam1);
		*uParam4 = unk_0xAA973E78065E07A0(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_259()
{
	if (func_261() && func_260(0))
	{
		return 1;
	}
	return 0;
}

var func_260(int iParam0)
{
	return Global_1312374[iParam0];
}

var func_261()
{
	return func_260(func_215() + 1);
}

void func_262(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			unk_0x0E2400AB9174FA81(255, 1166638144, 1862763509);
			unk_0x0E2400AB9174FA81(2, 1862763509, -1865950624);
			unk_0x0E2400AB9174FA81(255, -1865950624, 1862763509);
			unk_0x0E2400AB9174FA81(1, Global_93747, 1862763509);
			unk_0x0E2400AB9174FA81(1, 1862763509, Global_93747);
			unk_0x0E2400AB9174FA81(1, Global_93748, 1862763509);
			unk_0x0E2400AB9174FA81(1, 1862763509, Global_93748);
			unk_0x0E2400AB9174FA81(1, Global_93749, 1862763509);
			unk_0x0E2400AB9174FA81(1, 1862763509, Global_93749);
			break;
		
		case 1:
			unk_0x0E2400AB9174FA81(1, 1166638144, 1862763509);
			unk_0x0E2400AB9174FA81(2, 1862763509, -1865950624);
			unk_0x0E2400AB9174FA81(255, -1865950624, 1862763509);
			unk_0x0E2400AB9174FA81(1, Global_93747, 1862763509);
			unk_0x0E2400AB9174FA81(1, 1862763509, Global_93747);
			unk_0x0E2400AB9174FA81(1, Global_93748, 1862763509);
			unk_0x0E2400AB9174FA81(1, 1862763509, Global_93748);
			unk_0x0E2400AB9174FA81(1, Global_93749, 1862763509);
			unk_0x0E2400AB9174FA81(1, 1862763509, Global_93749);
			break;
		
		case 2:
			unk_0x0E2400AB9174FA81(255, 1166638144, 1862763509);
			unk_0x0E2400AB9174FA81(5, 1862763509, -1865950624);
			unk_0x0E2400AB9174FA81(5, -1865950624, 1862763509);
			unk_0x0E2400AB9174FA81(1, Global_93747, 1862763509);
			unk_0x0E2400AB9174FA81(1, 1862763509, Global_93747);
			unk_0x0E2400AB9174FA81(1, Global_93748, 1862763509);
			unk_0x0E2400AB9174FA81(1, 1862763509, Global_93748);
			unk_0x0E2400AB9174FA81(1, Global_93749, 1862763509);
			unk_0x0E2400AB9174FA81(1, 1862763509, Global_93749);
			break;
		
		default:
			break;
	}
}

void func_263()
{
	func_101();
	iVar0 = unk_0x023428EEA3027652();
	if (unk_0xE4EDC4B0E92C078B(iVar0))
	{
		iVar1 = Global_111638.f_2358.f_539.f_4321;
		if (func_394(14))
		{
			iVar1 = func_103(unk_0x16F2683693E537C9());
		}
		if (iVar1 == 0)
		{
			unk_0xDC5B2F9D0CCE3A10(iVar0, "BLIP_MICHAEL");
		}
		else if (iVar1 == 1)
		{
			unk_0xDC5B2F9D0CCE3A10(iVar0, "BLIP_FRANKLIN");
		}
		else if (iVar1 == 2)
		{
			unk_0xDC5B2F9D0CCE3A10(iVar0, "BLIP_TREV");
		}
		else
		{
			unk_0xDC5B2F9D0CCE3A10(iVar0, "BLIP_PLAYER");
		}
	}
}

void func_264(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 44)
	{
		iVar2 = func_265(iVar0);
		if (iVar2 != 0)
		{
			iVar3 = unk_0x3F0B5EEC37A0EDD3(iParam0, iVar2);
			if ((iVar3 != 0 && iVar3 != -1569615261) && iVar3 != 966099553)
			{
				if (unk_0xD2AEDBB0268DF71A(iParam0, iVar3) == -1)
				{
					if (unk_0x9AEFFB8166364079(iParam0, iVar3, &uVar1))
					{
						unk_0xDAB3108F02A4255A(iParam0, 0, iVar3);
					}
				}
			}
		}
		iVar0++;
	}
	iVar5 = unk_0x037F36BEA9A47381();
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		if (unk_0x6532540B34EE6273(iVar4, &Var6))
		{
			iVar3 = Var6.f_1;
			if (unk_0xD2AEDBB0268DF71A(iParam0, iVar3) == -1)
			{
				if (unk_0x9AEFFB8166364079(iParam0, iVar3, &uVar1))
				{
					unk_0xDAB3108F02A4255A(iParam0, 0, iVar3);
				}
			}
		}
		iVar4++;
	}
}

int func_265(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_266(int iParam0)
{
	iVar0 = func_103(iParam0);
	if (func_102(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam0 == unk_0x16F2683693E537C9() && unk_0x65BC0B7172CA52DD(iParam0) == 200)
		{
			unk_0x093A734E5AEA758F(iParam0, round((IntToFloat(unk_0x65BC0B7172CA52DD(iParam0)) * Global_262145.f_106)));
		}
		if (Global_111638.f_2358.f_539.f_290[iVar0] <= 0f)
		{
			Global_111638.f_2358.f_539.f_290[iVar0] = 100f;
		}
		else if (Global_111638.f_2358.f_539.f_290[iVar0] <= 10f)
		{
			Global_111638.f_2358.f_539.f_290[iVar0] = 10f;
		}
		unk_0xD458AC1C1D29C3B4(iParam0, round((((Global_111638.f_2358.f_539.f_290[iVar0] / 100f) * (to_float(unk_0x65BC0B7172CA52DD(iParam0)) - 100f)) + 100f)), 0);
	}
}

int func_267(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

int func_268(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_150(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_269(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	return 145;
}

void func_270(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_271(4, *iParam1, 0);
			func_271(7, *iParam1, 0);
			func_271(8, *iParam1, 0);
			func_271(11, *iParam1, 0);
			break;
		
		case 1:
			func_271(4, *iParam1, 0);
			func_271(7, *iParam1, 0);
			func_271(8, *iParam1, 0);
			func_271(11, *iParam1, 0);
			if (Global_111638.f_9080.f_99.f_58[126])
			{
				func_271(12, *iParam1, 0);
			}
			break;
		
		case 2:
			func_271(4, *iParam1, 0);
			func_271(7, *iParam1, 0);
			func_271(8, *iParam1, 0);
			func_271(11, *iParam1, 0);
			break;
	}
}

void func_271(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0xC844350D5D58C99A(iParam1))
		{
			return;
		}
	}
	if (Global_40554[iParam0].f_24 == 0)
	{
		return;
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_40554[iParam0].f_24)
	{
		if (bVar1)
		{
			Global_40554[iParam0].f_25[(iVar0 - 1)] = Global_40554[iParam0].f_25[iVar0];
			Global_40554[iParam0].f_25[iVar0] = 0;
		}
		else if (iParam1 == Global_40554[iParam0].f_25[iVar0])
		{
			Global_40554[iParam0].f_25[iVar0] = 0;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_40554[iParam0].f_24 = (Global_40554[iParam0].f_24 - 1);
	}
}

void func_272(int iParam0, bool bParam1)
{
	func_284(iParam0);
	func_278(iParam0, bParam1);
	func_277(iParam0);
	func_276(iParam0);
	func_275(iParam0);
	func_274(iParam0);
	func_273(iParam0);
}

void func_273(int iParam0)
{
	iVar0 = func_103(iParam0);
	if (func_102(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam0 == unk_0x16F2683693E537C9())
		{
			Global_111638.f_2358.f_539.f_2328[iVar0] = unk_0x179932739160BA96(unk_0xD803B885F5E47A62());
		}
	}
}

void func_274(int iParam0)
{
	iVar0 = func_103(iParam0);
	if (func_102(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_111638.f_2358.f_539.f_2318[iVar0] = { unk_0x56E9E0FD5ACCD35D(iParam0) };
	}
}

void func_275(int iParam0)
{
	iVar0 = func_103(iParam0);
	if (func_102(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x991B1F0980C62628() && unk_0x19EC8D83154D7CC1() != 3)
		{
			if (unk_0x00A15D69BCAA5267() == 8)
			{
				return;
			}
		}
		Global_111638.f_2358.f_539.f_2300[iVar0] = { unk_0x68F4C0EC296D3901(iParam0, true) };
		Global_111638.f_2358.f_539.f_2310[iVar0] = unk_0xD9522BA9E27E1349(iParam0);
		Global_111638.f_2358.f_539.f_2314[iVar0] = unk_0xB0A50BC6EDB99CA9(iParam0);
		if (Global_111638.f_2358.f_539.f_2300[iVar0] >= 8000f)
		{
			Global_111638.f_2358.f_539.f_2300[iVar0] = 7500f;
		}
		else if (Global_111638.f_2358.f_539.f_2300[iVar0] <= -8000f)
		{
			Global_111638.f_2358.f_539.f_2300[iVar0] = -7500f;
		}
		if (Global_111638.f_2358.f_539.f_2300[iVar0].f_1 >= 8000f)
		{
			Global_111638.f_2358.f_539.f_2300[iVar0].f_1 = 7500f;
		}
		else if (Global_111638.f_2358.f_539.f_2300[iVar0].f_1 <= -8000f)
		{
			Global_111638.f_2358.f_539.f_2300[iVar0].f_1 = -7500f;
		}
		if (Global_111638.f_2358.f_539.f_2300[iVar0].f_2 >= 2500f)
		{
			Global_111638.f_2358.f_539.f_2300[iVar0].f_2 = 2000f;
		}
	}
}

void func_276(int iParam0)
{
	iVar0 = func_103(iParam0);
	if (func_102(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_111638.f_2358.f_539.f_294[iVar0] = unk_0x34460709B9A5160B(iParam0);
	}
}

void func_277(int iParam0)
{
	iVar0 = func_103(iParam0);
	if (func_102(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_111638.f_2358.f_539.f_290[iVar0] = (((to_float(unk_0x7F6DC62EA9922664(iParam0)) - 100f) / (to_float(unk_0x65BC0B7172CA52DD(iParam0)) - 100f)) * 100f);
	}
}

void func_278(int iParam0, bool bParam1)
{
	iVar0 = func_103(iParam0);
	if (func_102(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam0 == unk_0x16F2683693E537C9())
		{
			func_279(iParam0, &(Global_111638.f_2358.f_539.f_298[iVar0]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_111638.f_2358.f_539.f_1730[iVar2][iVar0] = unk_0x923C832C9AB56966(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xFA91242148B28E7D();
					if (Global_111638.f_2358.f_539.f_1730[iVar2][iVar0] == iVar1)
					{
						Global_111638.f_2358.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x812D6591566D640E(unk_0xD803B885F5E47A62(), &iVar3);
			if (iVar0 == 0)
			{
				unk_0xCDC520E5E48E63D9(-922941372, iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0xCDC520E5E48E63D9(-753526687, iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0xCDC520E5E48E63D9(-502936933, iVar3, 1);
			}
		}
	}
}

void func_279(int iParam0, var uParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			uParam1[iVar0]->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_265(iVar0);
			if (iVar3 != 0)
			{
				Var4 = unk_0x3F0B5EEC37A0EDD3(iParam0, func_265(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != -1569615261)
				{
					Var4.f_1 = unk_0xD2AEDBB0268DF71A(iParam0, Var4);
					if (Var4 == -72657034)
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x7DD9FDEA5DFB355E(iParam0, Var4);
					Var4.f_4 = unk_0x7F1C58A86289ED1A(iParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!unk_0x9AEFFB8166364079(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1[iVar0]->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_282(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xAFB8387ED2D7213E(iParam0, Var4, iVar2))
						{
							unk_0x5D96D8530B3D0904(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_282(Var4, iVar1);
					}
				}
				*uParam1[iVar0] = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0].f_1 = 0;
			iVar0++;
		}
		iVar10 = unk_0x4160B65AE085B5A9();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((unk_0x310836EE7129BA33(iVar9, &Var11) && !func_281(Var11.f_1)) && iVar72 < 51)
			{
				if (!unk_0x232048AB4B0E0259(Var11))
				{
					Var4 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0xD2AEDBB0268DF71A(iParam0, Var4);
					if (unk_0x440C646F2F11A2A1(iParam0, Var4, 0))
					{
						Var4.f_3 = unk_0x7DD9FDEA5DFB355E(iParam0, Var4);
						Var4.f_4 = unk_0x7F1C58A86289ED1A(iParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x9AEFFB8166364079(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72].f_1 = Var4.f_1;
					iVar73 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0xAD2A7A6DFF55841B(iVar9))
					{
						if (unk_0x31D5E073B6F93CDC(iVar9, iVar1, &Var50))
						{
							if (!func_280(Var50.f_3))
							{
								if (unk_0xAFB8387ED2D7213E(iParam0, Var4, Var50.f_3))
								{
									unk_0x5D96D8530B3D0904(&(Var4.f_2), iVar73);
								}
								iVar73++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!unk_0x440C646F2F11A2A1(iParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

int func_280(int iParam0)
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

int func_281(int iParam0)
{
	if (unk_0x8CD06866876216F2())
	{
	}
	else
	{
		switch (iParam0)
		{
			case -1716589765:
			case -1654528753:
			case -270015777:
				return 0;
				break;
			
			case -102323637:
			case -1076751822:
			case 1627465347:
				return 0;
				break;
			
			case -771403250:
			case -1063057011:
				return 0;
				break;
			
			case 2132975508:
				return 0;
				break;
			
			case -1834847097:
			case 137902532:
				return 0;
				break;
			
			case 2138347493:
			case -1466123874:
				return 0;
				break;
			
			case 984333226:
			case -952879014:
				return 0;
				break;
			
			case 1672152130:
			case -1420407917:
				return 0;
				break;
			
			case 171789620:
			case -656458692:
			case -598887786:
				return 0;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case 1198879012:
			case -800287667:
			case 126349499:
			case -499989876:
			case -1951375401:
			case -538741184:
			case -1045183535:
			case -275439685:
			case 1649403952:
			case 317205821:
			case -1121678507:
			case 125959754:
			case -853065399:
			case -1169823560:
			case -1810795771:
			case 419712736:
			case -1746263880:
			case 1198256469:
			case -1238556825:
			case -1355376991:
			case -1853920116:
			case 727643628:
				return 1;
				break;
			}
	}
	return 0;
}

int func_282(int iParam0, int iParam1)
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
				iVar1 = func_283(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0xA942498EEAA3EEAD(iVar1))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar1, iVar2, &Var43))
						{
							if (!func_280(Var43.f_3))
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

int func_283(int iParam0, var uParam1)
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

void func_284(int iParam0)
{
	iVar0 = func_103(iParam0);
	if (func_102(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_111638.f_2358.f_539.f_2296[iVar0] = func_178();
	}
}

int func_285(int iParam0, int iParam1)
{
	if (!iParam0->f_39)
	{
		iParam0->f_7 = 4;
		iParam0->f_39 = 1;
	}
	if ((iParam1 != 0 && iParam1 != 2) && iParam1 != 1)
	{
	}
	else
	{
		bVar0 = iParam0->f_34[iParam1] == 2;
		if (func_267(func_100()) != iParam1 || bVar0)
		{
			bVar1 = false;
			if ((bVar0 || iParam0->f_24[iParam1] != 0) || ((func_289(iParam1) && func_286(iParam1)) && !iParam0->f_18[iParam1]))
			{
				if (!iParam0->f_23)
				{
					if (!unk_0xEB6A8945D1AC98A1((*iParam0)[iParam1]) || bVar0)
					{
						if (iParam0->f_34[iParam1] != 1 && iParam0->f_34[iParam1] != 3)
						{
							bVar1 = true;
						}
					}
				}
				else if ((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && (unk_0x8CD06866876216F2() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)) && !unk_0xEAE0D21A50E6C7F4(Global_96222.f_47, iParam1))
				{
					bVar1 = true;
				}
			}
			else if (!((unk_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_2[27], 1) && !Global_3) && !func_2(0)))
			{
				if (iParam0->f_23)
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				iParam0->f_7 = iParam1;
				return 1;
			}
		}
	}
	iParam0->f_39 = 0;
	return 0;
}

int func_286(int iParam0)
{
	if (Global_111638.f_9080 || Global_3)
	{
		if (!Global_76622 || (Global_76622 && iParam0 != func_267(func_288())))
		{
			if (!func_287(func_269(iParam0)))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_287(int iParam0)
{
	if (func_102(iParam0))
	{
		if ((Global_111638.f_9080 || Global_3) || func_2(0))
		{
			return Global_111638.f_2358.f_539.f_2348[iParam0];
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_288()
{
	return Global_111638.f_2358.f_539.f_4323;
}

int func_289(int iParam0)
{
	if ((Global_111638.f_9080 || Global_3) || func_2(0))
	{
		if (!Global_76622 || (Global_76622 && iParam0 != func_267(func_288())))
		{
			if (((iParam0 == 0 && !func_395(115)) || (iParam0 == 1 && !func_395(116))) || (iParam0 == 2 && !func_395(117)))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_290(int iParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0xC844350D5D58C99A(Global_75441.f_484[25]) && unk_0xDF1306B443CD3D15(Global_75441.f_484[25], 0))
			{
				if (Global_75441.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x56E1CD81AE700E98(iParam0) || unk_0x134B62B726CEC8E6(iParam0) == -713569950) || unk_0x134B62B726CEC8E6(iParam0) == 1941029835)
			{
				return;
			}
		}
		func_316(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_311(iParam0, &Var0);
		if (func_176(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { unk_0x68F4C0EC296D3901(iParam0, true) };
			fParam4 = unk_0xD9522BA9E27E1349(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) != 241912366)
			{
				Global_76429 = unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C());
			}
		}
		func_304(iParam5, &Var0, vParam1, fParam4, func_310(iParam0));
		func_291(iParam5, iParam0, 0);
	}
}

void func_291(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_302(&(Global_75441.f_555[0]), iParam0))
	{
		return;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_75441.f_555[0].f_9, 12) && !unk_0xEAE0D21A50E6C7F4(Global_75441.f_555[0].f_9, 10))
	{
		if (Global_75441.f_555[0].f_4 != unk_0x134B62B726CEC8E6(iParam1))
		{
			return;
		}
	}
	if (Global_76348 != -1 && Global_76348 != iParam0)
	{
		return;
	}
	if (unk_0xC844350D5D58C99A(iParam1))
	{
		if (unk_0xDF1306B443CD3D15(iParam1, 0))
		{
			if (!unk_0xAF6690C489CC6203(iParam1))
			{
				unk_0x73270B3C9CC833FD(iParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_111638.f_32744.f_4801 = func_178();
			}
			if (iParam1 != Global_75441.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_301(iParam0);
					if ((unk_0xC844350D5D58C99A(iVar0) && unk_0xDF1306B443CD3D15(iVar0, 0)) && iParam1 != iVar0)
					{
						func_292(iVar0, 145);
					}
				}
				Global_76347 = iParam1;
				Global_76348 = iParam0;
				Global_76349 = iParam2;
			}
		}
	}
}

void func_292(int iParam0, int iParam1)
{
	if (!func_293(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xA30B8362589C124A(iParam0, -1, 0);
		if (!unk_0xC844350D5D58C99A(iVar0))
		{
			iVar0 = unk_0xB0326EA5AFB4EFA7(iParam0, -1);
		}
		if (unk_0xC844350D5D58C99A(iVar0) && !unk_0xEB6A8945D1AC98A1(iVar0))
		{
			if (unk_0x134B62B726CEC8E6(iVar0) == 225514697)
			{
				iParam1 = 0;
			}
			else if (unk_0x134B62B726CEC8E6(iVar0) == -1692214353)
			{
				iParam1 = 1;
			}
			else if (unk_0x134B62B726CEC8E6(iVar0) == -1686040670)
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_111638.f_2358.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x134B62B726CEC8E6(iParam0) == Global_111638.f_32744.f_5038[iVar1][iVar2].f_66)
			{
				if (!unk_0xEA6BC48857E0AC4C(&(Global_111638.f_32744.f_5038[iVar1][iVar2].f_1)))
				{
					if (unk_0x7F8A39872A07D2CE(unk_0x7888A5D2621AAF2D(iParam0), &(Global_111638.f_32744.f_5038[iVar1][iVar2].f_1)))
					{
						Global_111638.f_32744.f_5038[iVar1][iVar2].f_66 = 0;
						Global_111638.f_32744.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x134B62B726CEC8E6(iParam0) == Global_111638.f_32744.f_5600[iVar1].f_66)
		{
			if (!unk_0xEA6BC48857E0AC4C(&(Global_111638.f_32744.f_5600[iVar1].f_1)))
			{
				if (unk_0x7F8A39872A07D2CE(unk_0x7888A5D2621AAF2D(iParam0), &(Global_111638.f_32744.f_5600[iVar1].f_1)))
				{
					Global_111638.f_32744.f_5600[iVar1].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_111638.f_32744.f_5590 = iParam1;
	Global_76346 = iParam0;
	Global_111638.f_32744.f_5588 = 1;
	func_311(iParam0, &(Global_111638.f_32744.f_5510));
}

int func_293(int iParam0)
{
	if ((((((((((!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0)) || func_299(iParam0, 0, 0)) || func_299(iParam0, 1, 0)) || func_299(iParam0, 2, 0)) || func_310(iParam0) != 145) || func_298(iParam0)) || func_297(iParam0)) || func_296(iParam0)) || func_295(iParam0)) || !func_294(unk_0x134B62B726CEC8E6(iParam0)))
	{
		if (func_297(iParam0))
		{
		}
		if (func_297(iParam0))
		{
		}
		if (func_299(iParam0, 0, 0))
		{
		}
		if (func_299(iParam0, 1, 0))
		{
		}
		if (func_299(iParam0, 2, 0))
		{
		}
		if (func_310(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_294(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_166(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xA7082C42B8809BF2(iParam0) || unk_0xC41A9202669A24C4(iParam0)) || unk_0xAFB8495D36825275(iParam0)) || unk_0xA7D7011F9888A365(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case -713569950:
		case -1961627517:
		case -823509173:
		case -1207431159:
		case 782665360:
		case -1476447243:
		case 1074326203:
		case 1353720154:
		case -845979911:
		case -1323100960:
		case -442313018:
		case 1283517198:
		case -2072933068:
		case -1098802077:
		case 1941029835:
		case 1938952078:
		case -2007026063:
		case 1917016601:
		case 2053223216:
		case 524108981:
		case 850991848:
		case 1518533038:
		case -2140210194:
		case -2137348917:
		case 2112052861:
		case -2076478498:
		case 1886712733:
		case 444583674:
		case 48339065:
		case -1006919392:
		case -2130482718:
		case -784816453:
		case 475220373:
		case -1705304628:
		case -1700801569:
		case -947761570:
		case 1876516712:
		case 1951180813:
		case -1987130134:
		case -233098306:
		case 121658888:
		case -120287622:
		case 904750859:
		case -1050465301:
		case 2046537925:
		case -1627000575:
		case 1912215274:
		case -1973172295:
		case -34623805:
		case -1536924937:
		case -1779120616:
		case 456714581:
		case -956048545:
		case 771711535:
		case -1066334226:
		case -845961253:
			return 0;
			break;
	}
	return 1;
}

int func_295(int iParam0)
{
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	sVar1 = unk_0x7888A5D2621AAF2D(iParam0);
	if (iVar0 == -810318068 && unk_0x7F8A39872A07D2CE(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_166(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_296(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xC844350D5D58C99A(Global_96105[iVar0]))
		{
			if (Global_96105[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_297(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xC844350D5D58C99A(Global_96075[iVar0]) && unk_0xDF1306B443CD3D15(Global_96075[iVar0], 0))
			{
				if (Global_96075[iVar0] == iParam0 && unk_0x134B62B726CEC8E6(Global_96075[iVar0]) == unk_0x134B62B726CEC8E6(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_298(int iParam0)
{
	if (unk_0xC844350D5D58C99A(Global_75441.f_484[24]))
	{
		if (iParam0 == Global_75441.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xC844350D5D58C99A(Global_75441.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_75441.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_299(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_300(iParam1, iVar0, &sVar1, &iVar9))
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

int func_300(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_301(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_75441.f_139[iParam0];
}

int func_302(var uParam0, int iParam1)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831,8538f, 172,1154f, 69,9058f };
			uParam0->f_3 = 157,5705f;
			uParam0->f_4 = func_303(0, 1);
			uParam0->f_12 = 0;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970,943f, 3801,684f, 31,1396f };
			uParam0->f_3 = 301,3964f;
			uParam0->f_4 = func_303(0, 1);
			uParam0->f_12 = 0;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22,6297f, -1439,137f, 29,6549f };
			uParam0->f_3 = 180,0808f;
			uParam0->f_4 = func_303(1, 1);
			uParam0->f_12 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22,5229f, -1434,699f, 29,6552f };
			uParam0->f_3 = 141,6114f;
			uParam0->f_4 = func_303(1, 2);
			uParam0->f_12 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10,9281f, 545,669f, 174,7951f };
			uParam0->f_3 = 61,392f;
			uParam0->f_4 = func_303(1, 1);
			uParam0->f_12 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6,1093f, 544,9742f, 174,2835f };
			uParam0->f_3 = 92,1548f;
			uParam0->f_4 = func_303(1, 2);
			uParam0->f_12 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981,416f, 3808,131f, 31,1384f };
			uParam0->f_3 = 117,2557f;
			uParam0->f_4 = func_303(2, 1);
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158,488f, -1529,367f, 3,8995f };
			uParam0->f_3 = 35,7505f;
			uParam0->f_4 = func_303(2, 1);
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148,2868f, -1270,569f, 28,2252f };
			uParam0->f_3 = 208,4685f;
			uParam0->f_4 = func_303(2, 1);
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459,509f, -1380,45f, 78,3259f };
			uParam0->f_3 = 99,6211f;
			uParam0->f_4 = -186537451;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518,947f, -1387,865f, -0,5134f };
			uParam0->f_3 = 98,3867f;
			uParam0->f_4 = -1030275036;
			iVar0 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353,0926f, 3577,593f, 32,351f };
			uParam0->f_3 = 16,6205f;
			uParam0->f_4 = 970356638;
			iVar0 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652,004f, -3142,348f, 12,9921f };
			uParam0->f_3 = 329,1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271,649f, -3380,685f, 12,9451f };
			uParam0->f_3 = 329,5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735,586f, 3294,531f, 40,1651f };
			uParam0->f_3 = 194,9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846,27f, -1363,19f, 0,22f };
			uParam0->f_3 = 108,78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849,47f, -1354,99f, 0,24f };
			uParam0->f_3 = 109,84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852,47f, -1346,2f, 0,21f };
			uParam0->f_3 = 108,76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745,857f, -1433,904f, 4,0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756,2952f, -1441,609f, 2,9184f };
			uParam0->f_18 = { -738,0606f, -1423,068f, 8,2835f };
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761,8486f, -1453,829f, 4,0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772,8158f, -1459,957f, 3,2894f };
			uParam0->f_18 = { -754,3353f, -1440,836f, 8,3334f };
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769,3f, 3244f, 41,1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196,2794f, -1020,479f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199,8872f, -1020,048f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203,6006f, -1019,776f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 11);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723,2515f, -632,0496f, 27,1484f };
			uParam0->f_3 = 12,9316f;
			uParam0->f_4 = -1008861746;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 11);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51,23f, 3111,9f, 24,95f };
			uParam0->f_3 = 46,78f;
			uParam0->f_4 = 356391690;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55,7984f, -1096,586f, 25,4223f };
			uParam0->f_3 = 308,0596f;
			uParam0->f_4 = 850565707;
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 9);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892,93f, 3192,37f, 11,66f };
			uParam0->f_3 = -132,35f;
			uParam0->f_4 = -1673356438;
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 9);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744,308f, 3270,673f, 40,2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = 1394036463;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751,44f, 3322,643f, 42,1855f };
			uParam0->f_3 = 268,134f;
			uParam0->f_4 = 771711535;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377,104f, -2076,2f, 52f };
			uParam0->f_3 = 37,5f;
			uParam0->f_4 = -1323100960;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380,42f, -2072,77f, 51,7607f };
			uParam0->f_3 = 37,5f;
			uParam0->f_4 = 1917016601;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359,389f, 3618,441f, 33,8907f };
			uParam0->f_3 = 108,2337f;
			uParam0->f_4 = -823509173;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693,1154f, -1018,155f, 21,6387f };
			uParam0->f_3 = 177,6454f;
			uParam0->f_4 = 1938952078;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73,6963f, 495,124f, 143,5226f };
			uParam0->f_3 = 155,5994f;
			uParam0->f_4 = 338562499;
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67,6314f, 891,8266f, 234,5348f };
			uParam0->f_3 = 294,993f;
			uParam0->f_4 = 384071873;
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533,9048f, -169,2469f, 53,7005f };
			uParam0->f_3 = 1,2998f;
			uParam0->f_4 = 1531094468;
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726,8914f, -408,6952f, 34,0416f };
			uParam0->f_3 = 267,7392f;
			uParam0->f_4 = 1123216662;
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321,519f, 261,3993f, 61,5709f };
			uParam0->f_3 = 350,7697f;
			uParam0->f_4 = -1670998136;
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267,999f, 451,6463f, 93,7071f };
			uParam0->f_3 = 48,9311f;
			uParam0->f_4 = -1670998136;
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062,076f, -226,7637f, 37,157f };
			uParam0->f_3 = 234,2767f;
			uParam0->f_4 = -1670998136;
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68,16914f, -1558,958f, 29,46904f };
			uParam0->f_3 = 49,90575f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589,4399f, 2736,708f, 42,03316f };
			uParam0->f_3 = -175,7105f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488,774f, -344,5721f, 34,36356f };
			uParam0->f_3 = 82,4042f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288,8808f, -585,4728f, 43,15428f };
			uParam0->f_3 = -20,80707f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304,8294f, -1383,674f, 31,67744f };
			uParam0->f_3 = -41,11603f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126,194f, -1481,486f, 34,7016f };
			uParam0->f_3 = -91,43369f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598,36f, 5252,84f, 0f };
			uParam0->f_3 = 28,14f;
			uParam0->f_4 = 771711535;
			uParam0->f_13 = 308;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602,62f, 5260,37f, 0,86f };
			uParam0->f_3 = 25,32f;
			uParam0->f_4 = 1033245328;
			uParam0->f_13 = 404;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116,571f, 4763,279f, 40,1596f };
			uParam0->f_3 = 198,723f;
			uParam0->f_4 = 1126868326;
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133,21f, 120,2f, 80,9f };
			uParam0->f_3 = 134,4f;
			if (func_174())
			{
				uParam0->f_4 = -613725916;
			}
			else
			{
				uParam0->f_4 = -150975354;
			}
			uParam0->f_13 = 401;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806,31f, -2679,65f, 13,9f };
			uParam0->f_3 = 150,54f;
			if (func_174())
			{
				uParam0->f_4 = -613725916;
			}
			else
			{
				uParam0->f_4 = -150975354;
			}
			uParam0->f_13 = 401;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985,85f, 3828,96f, 31,98f };
			uParam0->f_3 = -16,58f;
			uParam0->f_4 = -1269889662;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870,75f, 4464,67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = -1066334226;
			uParam0->f_13 = 308;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257,729f, -2564,474f, 41,717f };
			uParam0->f_3 = 284,5561f;
			uParam0->f_4 = -326143852;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643,2823f, 3014,152f, 42,2733f };
			uParam0->f_3 = 128,0554f;
			uParam0->f_4 = -326143852;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38,9368f, 850,8677f, 196,3f };
			uParam0->f_3 = 311,6813f;
			uParam0->f_4 = -901163259;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333,875f, 4262,226f, 30,78f };
			uParam0->f_3 = 262,5293f;
			uParam0->f_4 = -901163259;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_111638.f_32744.f_69[uParam0->f_14].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == 165154707 || uParam0->f_4 == 1824333165) || uParam0->f_4 == 621481054) || uParam0->f_4 == -1214505995) || uParam0->f_4 == 1981688531) || uParam0->f_4 == -1214293858)
			{
				*uParam0 = { 1678,8f, 3229,6f, 41,8f };
				uParam0->f_3 = 106,0906f;
			}
		}
		if (!func_176(Global_111638.f_32744.f_1864[uParam0->f_14], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_32744.f_1864[uParam0->f_14] };
		}
		if (Global_111638.f_32744.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_111638.f_32744.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 19))
	{
		if (!func_176(Global_111638.f_2358.f_539.f_3588[1][uParam0->f_12], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[1][uParam0->f_12] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[1][uParam0->f_12];
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 20))
	{
		if (!func_176(Global_111638.f_2358.f_539.f_3588[0][uParam0->f_12], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[0][uParam0->f_12] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[0][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_303(int iParam0, int iParam1)
{
	if (func_102(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_164(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_304(int iParam0, var uParam1, vector3 vParam2, float fParam5, int iParam6)
{
	if (func_302(&(Global_75441.f_555[0]), iParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_75441.f_555[0].f_9, 10))
		{
			func_309(iParam0);
			func_308(uParam1, &(Global_111638.f_32744.f_69[Global_75441.f_555[0].f_14]));
			if (unk_0xEAE0D21A50E6C7F4(Global_75441.f_555[0].f_9, 11))
			{
				Global_111638.f_32744.f_1864[Global_75441.f_555[0].f_14] = { vParam2 };
				Global_111638.f_32744.f_1934[Global_75441.f_555[0].f_14] = fParam5;
			}
			else
			{
				Global_111638.f_32744.f_1864[Global_75441.f_555[0].f_14] = { 0f, 0f, 0f };
				Global_111638.f_32744.f_1934[Global_75441.f_555[0].f_14] = -1f;
			}
			Global_111638.f_32744.f_1958[Global_75441.f_555[0].f_14] = iParam6 + 1;
			func_305(iParam0, 1);
		}
	}
}

void func_305(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_307(iParam0, 0))
		{
			func_306(iParam0, 1, 0);
			func_306(iParam0, 2, 0);
			func_306(iParam0, 3, 0);
			func_306(iParam0, 4, 0);
			func_306(iParam0, 0, 1);
			Global_75441[iParam0] = 1;
		}
	}
	else
	{
		func_306(iParam0, 0, 0);
	}
}

void func_306(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_111638.f_32744[iParam0]), iParam1);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_111638.f_32744[iParam0]), iParam1);
	}
}

bool func_307(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_32744[iParam0], iParam1);
}

void func_308(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_309(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_302(&(Global_75441.f_555[0]), iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_75441.f_139[iParam0]))
		{
			unk_0x73270B3C9CC833FD(Global_75441.f_139[iParam0], true, 1);
			unk_0x046C362CF15F1935(&(Global_75441.f_139[iParam0]));
			Global_75441.f_139[iParam0] = 0;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_75441.f_555[0].f_9, 13))
		{
			func_305(iParam0, 0);
		}
	}
}

int func_310(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 145;
	}
	if (!unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			if (Global_96075[iVar0] == iParam0)
			{
				return Global_96085[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_311(int iParam0, var uParam1)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		func_315(uParam1);
		uParam1->f_66 = unk_0x134B62B726CEC8E6(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x7888A5D2621AAF2D(iParam0), 16);
		*uParam1 = unk_0x4EB64970EC291A00(iParam0);
		unk_0x9412F17E127D9759(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xD00EA977553939A7(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x4D842A28A29F18F6(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x214BEAD64D777E8F(iParam0);
		uParam1->f_67 = unk_0xF22DC2D0CA24A151(iParam0);
		uParam1->f_69 = unk_0x8EF9B42D5496EC5A(iParam0);
		uParam1->f_70 = unk_0x9C7B8DC16535B879(iParam0);
		unk_0xCCBAB59EE36FFC71(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0xE04A80C505823410(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x812A93B166D97C60(iParam0, 2))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_77), 28);
		}
		if (unk_0x812A93B166D97C60(iParam0, 3))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_77), 29);
		}
		if (unk_0x812A93B166D97C60(iParam0, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_77), 30);
		}
		if (unk_0x812A93B166D97C60(iParam0, 1))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_314(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x587993B327460A82(iParam0, 0))
		{
			uParam1->f_68 = unk_0x74A7D92E3874B5C7(iParam0);
		}
		if (unk_0xC41A9202669A24C4(uParam1->f_66))
		{
			if (unk_0x20D5F312838C1136(iParam0))
			{
				switch (unk_0x38E830634323E0D5(iParam0))
				{
					case 3:
					case 0:
						unk_0x0674E58A79778E99(&(uParam1->f_77), 23);
						unk_0x5D96D8530B3D0904(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0x0674E58A79778E99(&(uParam1->f_77), 23);
						unk_0x0674E58A79778E99(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x5D96D8530B3D0904(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x616632A7E7824A9A(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_77), 9);
		}
		if (unk_0xF566283DA9533594(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_77), 10);
		}
		if (unk_0xC97B0E5C744424FD(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_77), 13);
			unk_0x3139754D4D5C3AC3(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xE23BB5249C074C85(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_77), 12);
		}
		func_313(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xDD62D560CFE11A27(iParam0, iVar0 + 1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_312(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x92C2290AA46758D3(iParam0, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam1->f_77), 11);
		}
		if (unk_0x30F813723591D02E(iParam0, "IgnoredByQuickSave") && unk_0xB2C7CF65CF9B897C(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam1->f_77), 27);
		}
	}
}

int func_312(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_313(int iParam0, var uParam1, var uParam2)
{
	if (!unk_0xDF1306B443CD3D15(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x40B3F576B41FA183(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0xB97ED2A4B56844DE(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0xB97ED2A4B56844DE(*iParam0, iVar1))
			{
				switch (unk_0x3C076D736FE6B7A6(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x0ECB5CA5140957AD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x3A5601978F787E51(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x3A5601978F787E51(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_314(int iParam0)
{
	switch (iParam0)
	{
		case -1775728740:
		case -998177792:
			return 1;
		
		default:
	}
	return 0;
}

void func_315(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_316(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_309(iParam0);
	func_305(iParam0, 0);
}

int func_317(int iParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, int iParam7)
{
	if (func_102(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 49;
		Var5.f_81 = 2;
		func_164(iParam1, &Var5, iParam7);
		if (Var5 == 0)
		{
			return 1;
		}
		if (unk_0xC844350D5D58C99A(*iParam0))
		{
			if (unk_0x134B62B726CEC8E6(*iParam0) != Var5)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_111638.f_2358.f_539.f_4316) && Global_111638.f_9080.f_99.f_58[131])
		{
			Global_111638.f_2358.f_539.f_2407[0][iParam1] = 0;
		}
		if (Global_111638.f_2358.f_539.f_2407[0][iParam1] == Var5)
		{
			unk_0x523BCC9DC80CD82F(Global_111638.f_2358.f_539.f_2407[0][iParam1]);
			if (unk_0xB87F6CF6E5628C67(Global_111638.f_2358.f_539.f_2407[0][iParam1]))
			{
				*iParam0 = unk_0x122AAB0B1D6F55AD(Global_111638.f_2358.f_539.f_2407[0][iParam1], vParam2, iParam5, 0, 0, 0);
				unk_0xB9FD7450C0DAB575(*iParam0, 1084227584);
				unk_0x316958DDB94DF3FC(*iParam0, 0);
				unk_0x626D5ADA3EFAE431(*iParam0, 0);
				unk_0x44A200C9B6E1CEA6(*iParam0, true);
				unk_0xD458AC1C1D29C3B4(*iParam0, 1250, 0);
				unk_0x5DAB50E08C3C504A(*iParam0, 1250f);
				unk_0xDC544F7DF5E5164D(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0xC002508A277213DE(*iParam0, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_5, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_6);
				unk_0x58A0C35FA7CA6162(*iParam0, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_7, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_8);
				unk_0xCCD53AC1B5D5E456(*iParam0, Var5.f_2);
				iVar103 = 0;
				while (iVar103 < 12)
				{
					unk_0xD3421E391490133B(*iParam0, iVar103 + 1, !Global_111638.f_2358.f_539.f_2407[0][iParam1].f_11[iVar103]);
					iVar103++;
				}
				if (Global_111638.f_2358.f_539.f_2407[0][iParam1].f_24)
				{
					unk_0xDE00FFD6DD02A48E(*iParam0, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_24);
				}
				if (func_358(&uVar1, &iVar0))
				{
					unk_0x55A3C4ED4728EA42(*iParam0, &uVar1);
					unk_0xA22B35B584F0580A(*iParam0, iVar0);
				}
				else
				{
					unk_0x55A3C4ED4728EA42(*iParam0, &(Global_111638.f_2358.f_539.f_2407[0][iParam1].f_27));
					if (Global_111638.f_2358.f_539.f_2407[0][iParam1].f_26 >= 0 && Global_111638.f_2358.f_539.f_2407[0][iParam1].f_26 < unk_0xBCB9B04D4DA658DF())
					{
						unk_0xA22B35B584F0580A(*iParam0, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_26);
					}
				}
				unk_0x9F0DB8A295EA8513(*iParam0, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_84, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_85, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_86);
				unk_0xA22F71BBC8173C39(*iParam0, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_88);
				unk_0x8BF0BEF985EB6D43(*iParam0, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_87);
				unk_0x85654A532F20966B(*iParam0, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_93, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_94, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_95);
				unk_0x7726E33AC3B60544(*iParam0, 2, unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[0][iParam1].f_92, 28));
				unk_0x7726E33AC3B60544(*iParam0, 3, unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[0][iParam1].f_92, 29));
				unk_0x7726E33AC3B60544(*iParam0, 0, unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[0][iParam1].f_92, 30));
				unk_0x7726E33AC3B60544(*iParam0, 1, unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[0][iParam1].f_92, 31));
				if (unk_0x579935D850368851(*iParam0) > 1 && Global_111638.f_2358.f_539.f_2407[0][iParam1].f_89 >= 0)
				{
					unk_0x446EA2500F021666(*iParam0, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_89);
				}
				if (Global_111638.f_2358.f_539.f_2407[0][iParam1].f_90 > -1)
				{
					if (!unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(*iParam0)))
					{
						if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(*iParam0)))
						{
							if (Global_111638.f_2358.f_539.f_2407[0][iParam1].f_90 == 6)
							{
								unk_0x920DACD685EA4957(*iParam0, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_90);
							}
						}
						else
						{
							unk_0x920DACD685EA4957(*iParam0, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_90);
						}
					}
				}
				func_354(iParam0, &(Global_111638.f_2358.f_539.f_2407[0][iParam1].f_31), &(Global_111638.f_2358.f_539.f_2407[0][iParam1].f_81));
				unk_0x0947AEED9914905B(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x134B62B726CEC8E6(*iParam0) == -1435919434)
					{
						func_352(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x71199B01895C6202(Global_111638.f_2358.f_539.f_2407[0][iParam1]);
				}
				func_351(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_111638.f_2358.f_539.f_2407[1][iParam1] == Var5)
		{
			unk_0x523BCC9DC80CD82F(Global_111638.f_2358.f_539.f_2407[1][iParam1]);
			if (unk_0xB87F6CF6E5628C67(Global_111638.f_2358.f_539.f_2407[1][iParam1]))
			{
				*iParam0 = unk_0x122AAB0B1D6F55AD(Global_111638.f_2358.f_539.f_2407[1][iParam1], vParam2, iParam5, 0, 0, 0);
				unk_0xB9FD7450C0DAB575(*iParam0, 1084227584);
				unk_0x316958DDB94DF3FC(*iParam0, 0);
				unk_0x626D5ADA3EFAE431(*iParam0, 0);
				unk_0x44A200C9B6E1CEA6(*iParam0, true);
				unk_0xD458AC1C1D29C3B4(*iParam0, 1250, 0);
				unk_0x5DAB50E08C3C504A(*iParam0, 1250f);
				unk_0xDC544F7DF5E5164D(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0xC002508A277213DE(*iParam0, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_5, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_6);
				unk_0x58A0C35FA7CA6162(*iParam0, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_7, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_8);
				unk_0xCCD53AC1B5D5E456(*iParam0, Var5.f_2);
				iVar104 = 0;
				while (iVar104 < 12)
				{
					unk_0xD3421E391490133B(*iParam0, iVar104 + 1, !Global_111638.f_2358.f_539.f_2407[1][iParam1].f_11[iVar104]);
					iVar104++;
				}
				if (Global_111638.f_2358.f_539.f_2407[1][iParam1].f_24)
				{
					unk_0xDE00FFD6DD02A48E(*iParam0, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_24);
				}
				if (func_358(&uVar1, &iVar0))
				{
					unk_0x55A3C4ED4728EA42(*iParam0, &uVar1);
					unk_0xA22B35B584F0580A(*iParam0, iVar0);
				}
				else
				{
					unk_0x55A3C4ED4728EA42(*iParam0, &(Global_111638.f_2358.f_539.f_2407[1][iParam1].f_27));
					if (Global_111638.f_2358.f_539.f_2407[1][iParam1].f_26 >= 0 && Global_111638.f_2358.f_539.f_2407[1][iParam1].f_26 < unk_0xBCB9B04D4DA658DF())
					{
						unk_0xA22B35B584F0580A(*iParam0, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_26);
					}
				}
				unk_0x9F0DB8A295EA8513(*iParam0, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_84, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_85, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_86);
				unk_0xA22F71BBC8173C39(*iParam0, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_88);
				unk_0x8BF0BEF985EB6D43(*iParam0, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_87);
				unk_0x85654A532F20966B(*iParam0, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_93, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_94, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_95);
				unk_0x7726E33AC3B60544(*iParam0, 2, unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[1][iParam1].f_92, 28));
				unk_0x7726E33AC3B60544(*iParam0, 3, unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[1][iParam1].f_92, 29));
				unk_0x7726E33AC3B60544(*iParam0, 0, unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[1][iParam1].f_92, 30));
				unk_0x7726E33AC3B60544(*iParam0, 1, unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[1][iParam1].f_92, 31));
				if (unk_0x579935D850368851(*iParam0) > 1 && Global_111638.f_2358.f_539.f_2407[1][iParam1].f_89 >= 0)
				{
					unk_0x446EA2500F021666(*iParam0, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_89);
				}
				if (Global_111638.f_2358.f_539.f_2407[1][iParam1].f_90 > -1)
				{
					if (!unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(*iParam0)))
					{
						if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(*iParam0)))
						{
							if (Global_111638.f_2358.f_539.f_2407[1][iParam1].f_90 == 6)
							{
								unk_0x920DACD685EA4957(*iParam0, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_90);
							}
						}
						else
						{
							unk_0x920DACD685EA4957(*iParam0, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_90);
						}
					}
				}
				func_354(iParam0, &(Global_111638.f_2358.f_539.f_2407[1][iParam1].f_31), &(Global_111638.f_2358.f_539.f_2407[1][iParam1].f_81));
				unk_0x0947AEED9914905B(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x134B62B726CEC8E6(*iParam0) == -1435919434)
					{
						func_352(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x71199B01895C6202(Global_111638.f_2358.f_539.f_2407[1][iParam1]);
				}
				func_351(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0x523BCC9DC80CD82F(Var5);
			if (unk_0xB87F6CF6E5628C67(Var5))
			{
				bVar105 = true;
				*iParam0 = unk_0x122AAB0B1D6F55AD(Var5, vParam2, iParam5, 1, 1, 0);
				unk_0xB9FD7450C0DAB575(*iParam0, 1084227584);
				unk_0x316958DDB94DF3FC(*iParam0, 0);
				unk_0x626D5ADA3EFAE431(*iParam0, 0);
				unk_0x44A200C9B6E1CEA6(*iParam0, true);
				StringCopy(&cVar106, unk_0x7888A5D2621AAF2D(*iParam0), 16);
				unk_0xD458AC1C1D29C3B4(*iParam0, 1250, 0);
				unk_0x5DAB50E08C3C504A(*iParam0, 1250f);
				unk_0xDC544F7DF5E5164D(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0xC002508A277213DE(*iParam0, Var5.f_5, Var5.f_6);
				unk_0x58A0C35FA7CA6162(*iParam0, Var5.f_7, Var5.f_8);
				unk_0xCCD53AC1B5D5E456(*iParam0, Var5.f_2);
				iVar110 = 0;
				while (iVar110 < 12)
				{
					unk_0xD3421E391490133B(*iParam0, iVar110 + 1, !Var5.f_11[iVar110]);
					iVar110++;
				}
				if (Var5.f_24)
				{
					unk_0xDE00FFD6DD02A48E(*iParam0, Var5.f_24);
				}
				if (func_358(&uVar1, &iVar0))
				{
					unk_0x55A3C4ED4728EA42(*iParam0, &uVar1);
					unk_0xA22B35B584F0580A(*iParam0, iVar0);
				}
				else
				{
					unk_0x55A3C4ED4728EA42(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < unk_0xBCB9B04D4DA658DF())
					{
						unk_0xA22B35B584F0580A(*iParam0, Var5.f_26);
					}
				}
				unk_0x9F0DB8A295EA8513(*iParam0, Var5.f_84, Var5.f_85, Var5.f_86);
				unk_0xA22F71BBC8173C39(*iParam0, Var5.f_88);
				unk_0x8BF0BEF985EB6D43(*iParam0, Var5.f_87);
				unk_0x85654A532F20966B(*iParam0, Var5.f_93, Var5.f_94, Var5.f_95);
				unk_0x7726E33AC3B60544(*iParam0, 2, unk_0xEAE0D21A50E6C7F4(Var5.f_92, 28));
				unk_0x7726E33AC3B60544(*iParam0, 3, unk_0xEAE0D21A50E6C7F4(Var5.f_92, 29));
				unk_0x7726E33AC3B60544(*iParam0, 0, unk_0xEAE0D21A50E6C7F4(Var5.f_92, 30));
				unk_0x7726E33AC3B60544(*iParam0, 1, unk_0xEAE0D21A50E6C7F4(Var5.f_92, 31));
				if (unk_0x579935D850368851(*iParam0) > 1 && Var5.f_89 >= 0)
				{
					unk_0x446EA2500F021666(*iParam0, Var5.f_89);
				}
				if (Var5.f_90 > -1)
				{
					if (!unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(*iParam0)))
					{
						if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(*iParam0)))
						{
							if (Var5.f_90 == 6)
							{
								unk_0x920DACD685EA4957(*iParam0, Var5.f_90);
							}
						}
						else
						{
							unk_0x920DACD685EA4957(*iParam0, Var5.f_90);
						}
					}
				}
				func_354(iParam0, &(Var5.f_31), &(Var5.f_81));
				unk_0x0947AEED9914905B(*iParam0, Var5.f_96);
				if (iParam1 == 1)
				{
					if (unk_0x134B62B726CEC8E6(*iParam0) == -2140431165 && !Global_111638.f_9080.f_99.f_58[118])
					{
						unk_0x55A3C4ED4728EA42(*iParam0, &cVar106);
						bVar105 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (unk_0x134B62B726CEC8E6(*iParam0) == -1435919434)
					{
						func_352(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_111638.f_2358.f_539.f_4316) && Global_111638.f_9080.f_99.f_58[131]) && unk_0x134B62B726CEC8E6(*iParam0) == -1008861746)
				{
					unk_0xEE6A1776A67F70C1(*iParam0, 6, 1, false);
					unk_0xEE6A1776A67F70C1(*iParam0, 14, 7, false);
					unk_0xEE6A1776A67F70C1(*iParam0, 11, 2, false);
					unk_0xEE6A1776A67F70C1(*iParam0, 2, 3, false);
					unk_0xEE6A1776A67F70C1(*iParam0, 7, 5, false);
					unk_0xEE6A1776A67F70C1(*iParam0, 0, 0, false);
					unk_0xEE6A1776A67F70C1(*iParam0, 3, 3, false);
					unk_0xEE6A1776A67F70C1(*iParam0, 13, 1, false);
					unk_0xEE6A1776A67F70C1(*iParam0, 4, 3, false);
					unk_0xEE6A1776A67F70C1(*iParam0, 12, 2, false);
					unk_0x73BEC6F1685574E6(*iParam0, 22, true);
					unk_0x920DACD685EA4957(*iParam0, 2);
					unk_0xEE6A1776A67F70C1(*iParam0, 23, 11, false);
					unk_0x8BF0BEF985EB6D43(*iParam0, 2);
					Global_111638.f_2358.f_539.f_4316 = 1;
					func_318(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					unk_0x71199B01895C6202(Var5);
				}
				if (bVar105)
				{
					func_351(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_318(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if ((func_102(iParam0) && unk_0xC844350D5D58C99A(*iParam1)) && unk_0xDF1306B443CD3D15(*iParam1, 0))
	{
		if (iParam2 > Global_111638.f_2358.f_539.f_2407)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_292(*iParam1, iParam0);
		}
		if (unk_0x40B3F576B41FA183(*iParam1) != 0)
		{
			unk_0xF95FF0A179413A39(*iParam1, 0);
		}
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0] = unk_0x134B62B726CEC8E6(*iParam1);
		if (unk_0x565509D116400807(*iParam1, &iVar1))
		{
			Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_1 = unk_0x134B62B726CEC8E6(iVar1);
		}
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_2 = unk_0xA471721ED5268046(*iParam1);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_3 = unk_0x7F6DC62EA9922664(*iParam1);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_11[0] = unk_0xDD62D560CFE11A27(*iParam1, 1);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_11[1] = unk_0xDD62D560CFE11A27(*iParam1, 2);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_11[2] = unk_0xDD62D560CFE11A27(*iParam1, 3);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_11[3] = unk_0xDD62D560CFE11A27(*iParam1, 4);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_11[4] = unk_0xDD62D560CFE11A27(*iParam1, 5);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_11[5] = unk_0xDD62D560CFE11A27(*iParam1, 6);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_11[6] = unk_0xDD62D560CFE11A27(*iParam1, 7);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_11[7] = unk_0xDD62D560CFE11A27(*iParam1, 8);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_11[8] = unk_0xDD62D560CFE11A27(*iParam1, 9);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_11[9] = unk_0xDD62D560CFE11A27(*iParam1, 10);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_11[10] = unk_0xDD62D560CFE11A27(*iParam1, 11);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_11[11] = unk_0xDD62D560CFE11A27(*iParam1, 12);
		if (unk_0x587993B327460A82(*iParam1, 0))
		{
			iVar2 = unk_0x74A7D92E3874B5C7(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_24 = 1;
			}
			else
			{
				Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_24 = 0;
			}
		}
		else
		{
			Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_24 = 0;
		}
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_25 = unk_0xFC21F7E0F4D92523();
		StringCopy(&(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_27), unk_0x7888A5D2621AAF2D(*iParam1), 16);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_26 = unk_0x4EB64970EC291A00(*iParam1);
		unk_0x9412F17E127D9759(*iParam1, &(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_5), &(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_6));
		unk_0xD00EA977553939A7(*iParam1, &(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_7), &(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_8));
		unk_0x4D842A28A29F18F6(*iParam1, &(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_84), &(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_85), &(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_86));
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_88 = unk_0x616632A7E7824A9A(*iParam1);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_87 = unk_0x214BEAD64D777E8F(*iParam1);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_89 = unk_0xF22DC2D0CA24A151(*iParam1);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_90 = unk_0x8EF9B42D5496EC5A(*iParam1);
		unk_0xE04A80C505823410(*iParam1, &(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_93), &(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_94), &(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_95));
		if (unk_0x812A93B166D97C60(*iParam1, 2))
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_92), 28);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_92), 28);
		}
		if (unk_0x812A93B166D97C60(*iParam1, 3))
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_92), 29);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_92), 29);
		}
		if (unk_0x812A93B166D97C60(*iParam1, 0))
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_92), 30);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_92), 30);
		}
		if (unk_0x812A93B166D97C60(*iParam1, 1))
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_92), 31);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_92), 31);
		}
		Global_111638.f_2358.f_539.f_4317[iParam0] = 10;
		if (unk_0x67303E186EA6C9A0(*iParam1) >= 0 && func_322(*iParam1, 0, &uVar0))
		{
			func_313(iParam1, &(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_31), &(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_81));
			if (bParam3)
			{
				Global_111638.f_20113[iParam0].f_40 = 1;
				Global_111638.f_20113[iParam0] = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0];
				Global_111638.f_20113[iParam0].f_3 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_87;
				Global_111638.f_20113[iParam0].f_4 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_84;
				Global_111638.f_20113[iParam0].f_5 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_85;
				Global_111638.f_20113[iParam0].f_6 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_86;
				Global_111638.f_20113[iParam0].f_10 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_90;
				Global_111638.f_20113[iParam0].f_16 = !Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_88;
				Global_111638.f_20113[iParam0].f_19 = { Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_27 };
				Global_111638.f_20113[iParam0].f_23 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_26;
				Global_111638.f_20113[iParam0].f_7 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_31[11];
				Global_111638.f_20113[iParam0].f_8 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_31[12];
				Global_111638.f_20113[iParam0].f_9 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_31[23];
				Global_111638.f_20113[iParam0].f_11 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_31[4];
				Global_111638.f_20113[iParam0].f_12 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_31[15];
				Global_111638.f_20113[iParam0].f_13 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_31[16];
				Global_111638.f_20113[iParam0].f_14 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_31[14];
				Global_111638.f_20113[iParam0].f_15 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_31[22];
				Global_111638.f_20113[iParam0].f_18 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_31[20];
				Global_111638.f_20113[iParam0].f_17 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_31[18];
				Global_111638.f_20113[iParam0].f_24 = unk_0x461CAC843A21E4B6(*iParam1, 11) + 1;
				Global_111638.f_20113[iParam0].f_25 = unk_0x461CAC843A21E4B6(*iParam1, 12) + 1;
				Global_111638.f_20113[iParam0].f_26 = unk_0x461CAC843A21E4B6(*iParam1, 4) + 1;
				Global_111638.f_20113[iParam0].f_27 = unk_0x461CAC843A21E4B6(*iParam1, 23) + 1;
				Global_111638.f_20113[iParam0].f_28 = unk_0x461CAC843A21E4B6(*iParam1, 14) + 1;
				Global_111638.f_20113[iParam0].f_29 = unk_0x461CAC843A21E4B6(*iParam1, 16) + 1;
				Global_111638.f_20113[iParam0].f_30 = unk_0x461CAC843A21E4B6(*iParam1, 15) + 1;
				Global_111638.f_20113[iParam0].f_32 = unk_0xBB3F1A6E0A9B6511(*iParam1);
				Global_111638.f_20113[iParam0].f_33[0] = unk_0xC34A9D742FC099DC(*iParam1);
				Global_111638.f_20113[iParam0].f_33[1] = unk_0xEE936CC771514B50(*iParam1, 14, 0);
				Global_111638.f_20113[iParam0].f_33[2] = unk_0xEE936CC771514B50(*iParam1, 14, 1);
				Global_111638.f_20113[iParam0].f_33[3] = unk_0xEE936CC771514B50(*iParam1, 14, 2);
				Global_111638.f_20113[iParam0].f_33[4] = unk_0xEE936CC771514B50(*iParam1, 14, 3);
				Global_111638.f_20113[iParam0].f_39 = unk_0xFF4012C9B4D4F728(*iParam1);
				Global_111638.f_20113[iParam0].f_31 = func_321(*iParam1);
				Global_111638.f_20113[iParam0].f_33[0] = unk_0x80A2B6C1AD8E56D5(*iParam1);
				unk_0xF3400BB226B5BB56(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_319(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_5, Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_7, iVar3, 1, &(Global_111638.f_20113[iParam0].f_1));
				unk_0xB0010FD150C8A58B(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_319(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_6, -1, iVar3, 0, &(Global_111638.f_20113[iParam0].f_2));
			}
		}
	}
}

int func_319(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	iVar0 = 0;
	while (func_320(iVar0, &sVar2, &iVar1, &iVar6, &iVar7))
	{
		if ((iParam0 == iVar6 && (!bParam3 || iParam1 == iVar7)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

bool func_320(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

float func_321(int iParam0)
{
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if ((unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0)) && unk_0x67303E186EA6C9A0(iParam0) >= 0)
	{
		if (unk_0xFF4012C9B4D4F728(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0xFF4012C9B4D4F728(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0xFF4012C9B4D4F728(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0xFF4012C9B4D4F728(iParam0) == 0)
		{
			if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (to_float(iVar5) / to_float(iVar4));
	return fVar6;
}

int func_322(int iParam0, bool bParam1, var uParam2)
{
	*uParam2 = 0;
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	if (!unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x4DAC2AD66FE0E696(unk_0x134B62B726CEC8E6(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	if ((!func_349(iVar0, bParam1, uParam2) && !func_348(unk_0xD803B885F5E47A62())) && !func_331(iParam0))
	{
		return 0;
	}
	if (func_348(unk_0xD803B885F5E47A62()))
	{
		if (func_330(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bVar1 = false;
	if (func_329(unk_0xD803B885F5E47A62()) && (unk_0xAFB8495D36825275(iVar0) || unk_0xC41A9202669A24C4(iVar0)))
	{
		bVar1 = true;
	}
	if (((unk_0x56E1CD81AE700E98(iParam0) && !func_327(iParam0)) && !bVar1) && !(func_326(unk_0x134B62B726CEC8E6(iParam0)) && func_323(unk_0xD803B885F5E47A62())))
	{
		switch (unk_0x134B62B726CEC8E6(iParam0))
		{
			case -801550069:
			case 679453769:
			case 1909700336:
			case 1721676810:
			case 840387324:
			case -715746948:
				*uParam2 = 16;
				break;
			
			default:
				*uParam2 = 2;
				break;
		}
		return 0;
	}
	if (!unk_0x8CD06866876216F2())
	{
		if ((func_296(iParam0) && unk_0x134B62B726CEC8E6(iParam0) != 873639469) && unk_0x134B62B726CEC8E6(iParam0) != -1177863319)
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_323(int iParam0)
{
	if (iParam0 != func_95())
	{
		if (func_325(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_324(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_324(int iParam0)
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

int func_325(int iParam0, bool bParam1, bool bParam2)
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

int func_326(int iParam0)
{
	if (((iParam0 == 1945374990 || iParam0 == 1653666139) || iParam0 == 219613597) || iParam0 == -1988428699)
	{
		return 1;
	}
	return 0;
}

int func_327(int iParam0)
{
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case -32236122:
		case 177270108:
		case 387748548:
		case 1502869817:
		case -1881846085:
		case 668439077:
		case -1146969353:
		case 1542143200:
		case -579747861:
		case -1694081890:
		case -2042350822:
			return 1;
			break;
		
		case -801550069:
		case 679453769:
		case 1909700336:
		case 1721676810:
		case 840387324:
		case -715746948:
			if (func_328(unk_0xD803B885F5E47A62()))
			{
				return 1;
			}
			break;
		
		case -1254331310:
		case -907477130:
			return 1;
	}
	return 0;
}

int func_328(int iParam0)
{
	if (iParam0 != func_95())
	{
		if (func_325(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_324(Global_2425662[iParam0].f_310.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_329(int iParam0)
{
	if (iParam0 != func_95())
	{
		if (func_325(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_324(Global_2425662[iParam0].f_310.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_330(int iParam0)
{
	switch (iParam0)
	{
		case -2118308144:
		case 1489874736:
		case -1693015116:
		case -692292317:
		case -1435527158:
			return 1;
			break;
	}
	return 0;
}

int func_331(int iParam0)
{
	if (func_347(unk_0xD803B885F5E47A62()) || func_346(unk_0xD803B885F5E47A62()))
	{
		if (func_332(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_332(int iParam0)
{
	if ((!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0)) || unk_0x437347B10A200C4B(iParam0, 0))
	{
		return 0;
	}
	if (func_335(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x30F813723591D02E(iParam0, "Player_Vehicle"))
	{
		if (unk_0x1E2DFB0EF4BB4566(iParam0, "Player_Vehicle") == unk_0xE86C2816EDC6CAF0(unk_0xD803B885F5E47A62()))
		{
			if (func_333(iParam0))
			{
				return 1;
			}
			switch (unk_0x134B62B726CEC8E6(iParam0))
			{
				case 159274291:
				case 433954513:
				case 1483171323:
				case 886810209:
				case 1561920505:
				case -410205223:
				case 903794909:
				case -391595372:
				case 1254014755:
				case 1416466158:
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_333(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		return 0;
	}
	if (func_334(unk_0x134B62B726CEC8E6(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_334(int iParam0)
{
	switch (iParam0)
	{
		case 562680400:
		case 1897744184:
		case -32236122:
		case 884483972:
		case -1210451983:
		case 1356124575:
		case -1924433270:
		case -1242608589:
		case -212993243:
		case 2044532910:
		case -638562243:
			return 1;
			break;
	}
	return 0;
}

int func_335(int iParam0, bool bParam1)
{
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case -2096818938:
		case -1860900134:
			if (func_337(unk_0x134B62B726CEC8E6(iParam0), 0))
			{
				if (Global_2537071.f_301 == iParam0)
				{
					return 1;
				}
				else if (func_336(iParam0) != -1 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_336(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2439138.f_628[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_337(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (func_345(iParam0, 0))
		{
			return 1;
		}
	}
	switch (iParam0)
	{
		case -2119578145:
		case -682211828:
		case 349605904:
		case 525509695:
		case -1150599089:
		case 523724515:
			return func_344();
			break;
		
		case -1685021548:
			if (Global_262145.f_14219)
			{
				return func_343();
			}
			break;
		
		case 464687292:
		case 1531094468:
		case 1762279763:
			if (Global_262145.f_14220)
			{
				return func_343();
			}
			break;
		
		case 16646064:
			if (Global_262145.f_14218)
			{
				return func_343();
			}
			break;
		
		case -310465116:
			if (Global_262145.f_14221)
			{
				return func_343();
			}
			break;
		
		case 729783779:
			if (Global_262145.f_14223)
			{
				return func_343();
			}
			break;
		
		case 970598228:
		case -1041692462:
			return func_342();
			break;
		
		case -1045541610:
			if (Global_262145.f_18669)
			{
				return func_341();
			}
			break;
		
		case -239841468:
			if (Global_262145.f_18671)
			{
				return func_341();
			}
			break;
		
		case 627535535:
			if (Global_262145.f_18675)
			{
				return func_341();
			}
			break;
		
		case -566387422:
			if (Global_262145.f_18672)
			{
				return func_341();
			}
			break;
		
		case 1034187331:
			if (Global_262145.f_18679)
			{
				return func_341();
			}
			break;
		
		case -2048333973:
			if (Global_262145.f_18677)
			{
				return func_341();
			}
			break;
		
		case 1886268224:
			if (Global_262145.f_18682)
			{
				return func_341();
			}
			break;
		
		case -2096818938:
			if (Global_262145.f_20625)
			{
				return func_340();
			}
			break;
		
		case -1860900134:
			if (Global_262145.f_20626)
			{
				return func_340();
			}
			break;
		
		case -667151410:
		case -589178377:
			return func_339();
			break;
		
		case 75131841:
			if (func_339() || func_338())
			{
				return 1;
			}
			break;
		
		case -2096690334:
			return func_339();
			break;
		
		case 931280609:
			return func_339();
			break;
		
		case 741090084:
			return func_339();
			break;
		
		case 80636076:
			return func_339();
			break;
		
		case -915704871:
			return func_339();
			break;
		
		case 444994115:
			return func_339();
			break;
		
		case 1637620610:
			return func_339();
			break;
		
		case -755532233:
			return func_339();
			break;
		
		case -27326686:
			return func_339();
			break;
		
		case -1812949672:
			return func_339();
			break;
		
		case -1374500452:
			return func_339();
			break;
		
		case 1009171724:
		case 2139203625:
		case 668439077:
		case -2061049099:
		case 628003514:
		case 1721676810:
		case -1146969353:
		case -801550069:
		case -688189648:
		case 540101442:
		case -1924800695:
		case -1890996696:
		case -1694081890:
		case 373261600:
		case 1537277726:
		case 840387324:
		case 1542143200:
		case 679453769:
		case -1375060657:
		case -1106120762:
		case -1744505657:
		case 2038858402:
		case -2042350822:
		case 1742022738:
		case 1239571361:
		case -715746948:
		case -579747861:
		case 1909700336:
		case -1293924613:
		case -1478704292:
			return func_339();
			break;
		
		case 1026149675:
			if (Global_262145.f_28524)
			{
				return func_338();
			}
			break;
		
		case 722226637:
			if (Global_262145.f_28874)
			{
				return func_338();
			}
			break;
		
		case -2124201592:
			if (Global_262145.f_28523)
			{
				return func_338();
			}
			break;
		
		case 1830407356:
			if (Global_262145.f_28873)
			{
				return func_338();
			}
			break;
		
		case 1871995513:
			if (Global_262145.f_28872)
			{
				return func_338();
			}
			break;
	}
	return 0;
}

bool func_338()
{
	return unk_0xC146D5FBD23C6954(1815791016);
}

bool func_339()
{
	return unk_0xC146D5FBD23C6954(1927191088);
}

bool func_340()
{
	return unk_0xC146D5FBD23C6954(2067165443);
}

bool func_341()
{
	return unk_0xC146D5FBD23C6954(-957277403);
}

bool func_342()
{
	return unk_0xC146D5FBD23C6954(210122941);
}

bool func_343()
{
	return unk_0xC146D5FBD23C6954(-1894522408);
}

bool func_344()
{
	return unk_0xC146D5FBD23C6954(1630677557);
}

int func_345(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1790546981:
		case -1013450936:
		case -1361687965:
		case 1896491931:
		case -2040426790:
		case 2006667053:
			return 1;
			break;
		
		case 223258115:
			if (!Global_262145.f_14219)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -1797613329:
			if (!Global_262145.f_14220)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -899509638:
			if (!Global_262145.f_14218)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -1126264336:
			if (!Global_262145.f_14221)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1119641113:
			if (!Global_262145.f_14223)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -2039755226:
			if (!Global_262145.f_14222)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -295689028:
		case 633712403:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -2022483795:
			if (Global_262145.f_18669)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1790834270:
			if (Global_262145.f_18671)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -757735410:
			if (Global_262145.f_18675)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 196747873:
			if (Global_262145.f_18672)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1093792632:
			if (Global_262145.f_18679)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -482719877:
			if (Global_262145.f_18677)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1074745671:
			if (Global_262145.f_18682)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1356124575:
			if (Global_262145.f_20625)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -1924433270:
			if (Global_262145.f_20626)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -2061049099:
		case 373261600:
		case 1742022738:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 628003514:
		case 1537277726:
		case 1239571361:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1009171724:
		case -1924800695:
		case -1744505657:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -27326686:
		case -1812949672:
		case -1374500452:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1721676810:
		case 840387324:
		case -715746948:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -688189648:
		case -1375060657:
		case -1293924613:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 668439077:
		case -1694081890:
		case -2042350822:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1802742206:
		case -2122646867:
		case 67753863:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1717532765:
		case 1107404867:
		case -913589546:
			return 1;
			break;
	}
	return 0;
}

int func_346(int iParam0)
{
	if (iParam0 != func_95())
	{
		if (func_325(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_95())
			{
				return func_324(Global_2425662[iParam0].f_310.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_347(int iParam0)
{
	if (iParam0 != func_95())
	{
		if (func_325(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_95())
			{
				return func_324(Global_2425662[iParam0].f_310.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_348(int iParam0)
{
	if (iParam0 != func_95())
	{
		if (func_325(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_324(Global_2425662[iParam0].f_310.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_349(int iParam0, bool bParam1, var uParam2)
{
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == 2046537925 || iParam0 == -1536924937) || iParam0 == -1779120616) || iParam0 == -1627000575) || iParam0 == 1912215274) || iParam0 == -1973172295) || iParam0 == 1127131465) || iParam0 == -1647941228) || iParam0 == 353883353) || iParam0 == -34623805) || iParam0 == 456714581) || iParam0 == -1205689942) || iParam0 == -1683328900) || iParam0 == 741586030) || iParam0 == 1922257928)
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == 1171614426 || iParam0 == 1938952078) || iParam0 == -956048545) || iParam0 == 469291905) || iParam0 == -845979911) || iParam0 == 1682114128) || iParam0 == 1283517198) || iParam0 == 1560980623)
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == -1346687836 || iParam0 == -1776615689) || iParam0 == -810318068) || iParam0 == 728614474)
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == -186537451 || iParam0 == 1131912276) || iParam0 == 448402357) || iParam0 == -836512833)
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == 1147287684 || iParam0 == 1491375716) || iParam0 == -537896628) || iParam0 == 321739290) || iParam0 == 1127861609) || iParam0 == -1233807380) || iParam0 == -400295096) || iParam0 == 1641462412) || iParam0 == -2076478498) || iParam0 == 1783355638) || iParam0 == -2033222435) || iParam0 == -884690486) || iParam0 == -1961627517) || iParam0 == 2072156101) || iParam0 == 1739845664) || iParam0 == 2053223216) || iParam0 == 2112052861) || iParam0 == 771711535) || iParam0 == -1241712818) || iParam0 == 534258863)
	{
		*uParam2 = 2;
		return 0;
	}
	bVar0 = false;
	if (func_329(unk_0xD803B885F5E47A62()) && (unk_0xAFB8495D36825275(iParam0) || unk_0xC41A9202669A24C4(iParam0)))
	{
		bVar0 = true;
	}
	if ((((((((((((!unk_0x8E39AC3C76C8AA58(iParam0) && !unk_0x7D8B2A8F9EA82DB7(iParam0)) && iParam0 != -2128233223) && iParam0 != -48031959) && iParam0 != -1269889662) && iParam0 != -440768424) && iParam0 != -1590337689) && iParam0 != 6774487) && iParam0 != 1502869817) && iParam0 != -1881846085) && iParam0 != 916547552) && iParam0 != 301304410) && !bVar0)
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == -845961253)
	{
		*uParam2 = 2;
		return 0;
	}
	if ((iParam0 == -1860900134 || iParam0 == -2096818938) || iParam0 == -114627507)
	{
		*uParam2 = 2;
		return 0;
	}
	if (unk_0x8CD06866876216F2())
	{
		if (func_350(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x8CD06866876216F2())
	{
		if (iParam0 == -1860900134 || iParam0 == 2071877360)
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_350(int iParam0)
{
	switch (iParam0)
	{
		case -1323100960:
		case -442313018:
		case 1491375716:
			return 1;
			break;
	}
	return 0;
}

void func_351(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			Global_96075[iVar0] = iParam0;
			Global_96085[iVar0] = iParam1;
			Global_96095[iVar0] = unk_0x134B62B726CEC8E6(iParam0);
			if (unk_0x8E39AC3C76C8AA58(Global_96095[iVar0]))
			{
				Global_96123[iParam1][0] = -1;
			}
			else
			{
				Global_96123[iParam1][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_352(var uParam0)
{
	if (!func_353(*uParam0))
	{
		unk_0xD3421E391490133B(*uParam0, 5, !Global_111638.f_9080.f_99.f_58[119]);
	}
}

bool func_353(int iParam0)
{
	return unk_0xDD62D560CFE11A27(iParam0, 5);
}

int func_354(var uParam0, var uParam1, var uParam2)
{
	if (!unk_0xDF1306B443CD3D15(*uParam0, 0))
	{
		return 0;
	}
	if (unk_0x40B3F576B41FA183(*uParam0) == 0)
	{
		return 0;
	}
	unk_0xF95FF0A179413A39(*uParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0x73BEC6F1685574E6(*uParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0x73BEC6F1685574E6(*uParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0x0CAC3E53DC3F794F(*uParam0, 255);
				}
				else
				{
					unk_0x0CAC3E53DC3F794F(*uParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0x73BEC6F1685574E6(*uParam0, iVar1, false);
			}
		}
		else if (unk_0x0ECB5CA5140957AD(*uParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x7AFDC9F56E7BB635(*uParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0xEE6A1776A67F70C1(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0xEE6A1776A67F70C1(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0xEE6A1776A67F70C1(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_345(unk_0x134B62B726CEC8E6(*uParam0), 1) && unk_0x0ECB5CA5140957AD(*uParam0, 24) != func_357(*uParam0, ((*uParam1)[38] - 1)))
	{
		unk_0xEE6A1776A67F70C1(*uParam0, 24, func_357(*uParam0, ((*uParam1)[38] - 1)), false);
	}
	func_356(uParam0);
	if (func_355(*uParam0))
	{
		unk_0xD5A0214B20BCBAD8(*uParam0, 1);
		unk_0x44A200C9B6E1CEA6(*uParam0, true);
	}
	return 1;
}

int func_355(int iParam0)
{
	if ((unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0)) && unk_0x40B3F576B41FA183(iParam0) > 0)
	{
		unk_0xF95FF0A179413A39(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x0ECB5CA5140957AD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0xAE6250B518DF3C3B(iParam0, iVar1, unk_0x0ECB5CA5140957AD(iParam0, iVar1)), 16);
				iVar2 = unk_0x12AB0310C2281427(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x12AB0310C2281427("MNU_CAGE") || iVar2 == unk_0x12AB0310C2281427("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_356(var uParam0)
{
	switch (unk_0x134B62B726CEC8E6(*uParam0))
	{
		case -1700874274:
			if (unk_0x0ECB5CA5140957AD(*uParam0, 4) == 0)
			{
				unk_0xEE6A1776A67F70C1(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0x7AFDC9F56E7BB635(*uParam0, 13);
			}
			break;
	}
}

int func_357(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		switch (unk_0x134B62B726CEC8E6(iParam0))
		{
			case -1797613329:
				switch (iParam1)
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
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case -2039755226:
				return 3;
				break;
		}
		iVar0 = unk_0x461CAC843A21E4B6(iParam0, 38);
		iVar1 = unk_0x461CAC843A21E4B6(iParam0, 24);
		fVar2 = (to_float(iParam1 + 1) / to_float(iVar0));
		iVar3 = (floor((to_float(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_358(var uParam0, int iParam1)
{
	if (unk_0x8CD06866876216F2())
	{
	}
	else if (Global_111638.f_20113.f_261)
	{
		*uParam0 = { Global_111638.f_20113.f_267 };
		*iParam1 = Global_111638.f_20113.f_271;
		return 1;
	}
	return 0;
}

void func_359(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, float fParam10, vector3 vParam11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	func_360(vParam0, vParam3, fParam6, vParam7, fParam10, vParam11, bParam14, bParam15, bParam16, bParam17, bParam18);
}

void func_360(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, float fParam10, vector3 vParam11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
				func_365(iVar0);
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
					if (func_362(iVar0, vParam0, vParam3, fParam6))
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
				if (func_299(iVar0, func_100(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_361(vParam11))
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

int func_361(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_362(int iParam0, vector3 vParam1, vector3 vParam4, float fParam7)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		vParam1.z = vParam4.z;
		vVar0 = { func_364(vParam1 - vParam4) };
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
		if (((((((((((((((func_363(vVar18[0], vVar18[1], vVar6, vVar9) || func_363(vVar18[0], vVar18[1], vVar9, vVar15)) || func_363(vVar18[0], vVar18[1], vVar12, vVar15)) || func_363(vVar18[0], vVar18[1], vVar6, vVar12)) || func_363(vVar18[1], vVar18[3], vVar6, vVar9)) || func_363(vVar18[1], vVar18[3], vVar9, vVar15)) || func_363(vVar18[1], vVar18[3], vVar12, vVar15)) || func_363(vVar18[1], vVar18[3], vVar6, vVar12)) || func_363(vVar18[3], vVar18[2], vVar6, vVar9)) || func_363(vVar18[3], vVar18[2], vVar9, vVar15)) || func_363(vVar18[3], vVar18[2], vVar12, vVar15)) || func_363(vVar18[3], vVar18[2], vVar6, vVar12)) || func_363(vVar18[2], vVar18[0], vVar6, vVar9)) || func_363(vVar18[2], vVar18[0], vVar9, vVar15)) || func_363(vVar18[2], vVar18[0], vVar12, vVar15)) || func_363(vVar18[2], vVar18[0], vVar6, vVar12))
		{
			return 1;
		}
	}
	return 0;
}

int func_363(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
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

Vector3 func_364(vector3 vParam0)
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

void func_365(int iParam0)
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

Vector3 func_366()
{
	return 2,55f, 5,665f, 2,55f;
}

int func_367(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	if (!unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			if (Global_96075[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_96085[iVar0])
				{
					if (iParam2 == 0 || unk_0x134B62B726CEC8E6(iParam0) == func_303(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_368(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			if (iParam0 == 145 || Global_96085[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x134B62B726CEC8E6(Global_96075[iVar0]) == func_303(iParam0, iParam1))
				{
					if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_96075[iVar0], 0))
					{
						unk_0x73270B3C9CC833FD(Global_96075[iVar0], false, 1);
						unk_0xA954465BA6FDEFE2(&(Global_96075[iVar0]));
						Global_96085[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_369(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_370(int iParam0)
{
	if (Global_95666 != -1)
	{
		if (iParam0 == Global_95666)
		{
			Global_95670 = 1;
			return;
		}
	}
}

void func_371()
{
	iVar0 = func_103(unk_0x16F2683693E537C9());
	func_372(unk_0x16F2683693E537C9(), &(Global_98148[iVar0]), &(Global_98451[iVar0]), &(Global_98461[iVar0]), &(Global_98443[iVar0]), &(Global_4270058[iVar0]));
}

void func_372(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	iVar0 = 0;
	iVar1 = 0;
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			if (unk_0x405E212DDE472467(iParam0, 0))
			{
				iVar1 = unk_0x6937EA2286828455(iParam0, 0);
				*uParam4 = 2;
			}
			else
			{
				iVar2 = func_103(iParam0);
				if (!unk_0x437347B10A200C4B(Global_98447[iVar2], 0))
				{
					if (unk_0xBBA8A868118C90ED(Global_98447[iVar2], -1, 0))
					{
						vVar3 = { unk_0x68F4C0EC296D3901(iParam0, true) };
						vVar6 = { unk_0x68F4C0EC296D3901(Global_98447[iVar2], true) };
						if (unk_0x134B62B726CEC8E6(Global_98447[iVar2]) == -1214293858)
						{
							if (vdist(vVar3, vVar6) < 10f)
							{
								*uParam4 = 2;
								iVar1 = Global_98447[iVar2];
								iVar0 = 1;
							}
						}
					}
				}
			}
		}
	}
	func_373(iParam0, iVar1, uParam1, uParam2, uParam3, uParam4, uParam5, iVar0);
}

void func_373(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7)
{
	uParam2->f_97 = 0;
	iVar0 = 145;
	if (!unk_0x437347B10A200C4B(iParam0, 0) && !unk_0x437347B10A200C4B(iParam1, 0))
	{
		iVar0 = func_103(iParam0);
		if (iVar0 > 3)
		{
			if (unk_0x8CD06866876216F2())
			{
			}
			return;
		}
		if (unk_0x30F813723591D02E(iParam1, "GetawayVehicleValid"))
		{
			if (unk_0xB2C7CF65CF9B897C(iParam1, "GetawayVehicleValid"))
			{
				if ((Global_111638.f_9080.f_99.f_58[45] || Global_111638.f_9080.f_99.f_58[12]) || Global_111638.f_9080.f_99.f_58[34])
				{
					*uParam5 = 0;
					Global_98447[iVar0] = 0;
					return;
				}
			}
		}
		if (unk_0xC42A92762C58E1B9(iParam0, iParam1, 0) || iParam7)
		{
			*uParam5 = 2;
			Global_98447[iVar0] = iParam1;
		}
		else if (unk_0x405E212DDE472467(iParam0, 0))
		{
			iParam1 = unk_0x6937EA2286828455(iParam0, 0);
			*uParam5 = 2;
			Global_98447[iVar0] = iParam1;
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 68)
			{
				if (iParam1 == Global_75441.f_139[iVar1])
				{
					*uParam5 = 0;
					Global_98447[iVar0] = 0;
					return;
				}
				iVar1++;
			}
			if (!unk_0x437347B10A200C4B(Global_98447[iVar0], 0))
			{
				if (!func_299(Global_98447[iVar0], iVar0, 0) || unk_0xC42A92762C58E1B9(iParam0, Global_98447[iVar0], 0))
				{
					vVar2 = { unk_0x68F4C0EC296D3901(iParam0, true) };
					vVar5 = { unk_0x68F4C0EC296D3901(Global_98447[iVar0], true) };
					if (func_374(iParam0, Global_98447[iVar0], 0))
					{
						if (vdist2(vVar2, vVar5) < 22500f)
						{
							*uParam3 = { vVar5 };
							*uParam4 = unk_0xD9522BA9E27E1349(Global_98447[iVar0]);
							*uParam5 = 1;
							Global_98447[iVar0] = iParam1;
							if (vdist2(vVar2, vVar5) < (1,5f * 1,5f))
							{
							}
						}
					}
				}
				else
				{
					*uParam5 = 0;
					Global_98447[iVar0] = 0;
				}
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iParam1))
	{
		*uParam2 = unk_0x134B62B726CEC8E6(iParam1);
		if (unk_0x565509D116400807(iParam1, &iVar9))
		{
			uParam2->f_1 = unk_0x134B62B726CEC8E6(iVar9);
		}
		uParam2->f_2 = unk_0xA471721ED5268046(iParam1);
		uParam2->f_3 = unk_0x7F6DC62EA9922664(iParam1);
		uParam2->f_4 = unk_0x418D2B281455AA64(iParam1);
		if (uParam2->f_4 > -1)
		{
			uParam2->f_9 = 1;
			uParam2->f_5 = -1;
			uParam2->f_6 = -1;
		}
		else
		{
			uParam2->f_9 = 0;
			unk_0x9412F17E127D9759(iParam1, &(uParam2->f_5), &(uParam2->f_6));
		}
		if (!unk_0xA7082C42B8809BF2(*uParam2))
		{
			uParam2->f_10 = 1;
			unk_0xD00EA977553939A7(iParam1, &(uParam2->f_7), &(uParam2->f_8));
		}
		else
		{
			uParam2->f_10 = 0;
			uParam2->f_7 = -1;
			uParam2->f_8 = -1;
		}
		StringCopy(&(uParam2->f_27), unk_0x7888A5D2621AAF2D(iParam1), 16);
		uParam2->f_26 = unk_0x4EB64970EC291A00(iParam1);
		uParam2->f_88 = unk_0x616632A7E7824A9A(iParam1);
		unk_0x4D842A28A29F18F6(iParam1, &(uParam2->f_84), &(uParam2->f_85), &(uParam2->f_86));
		uParam2->f_87 = unk_0x214BEAD64D777E8F(iParam1);
		unk_0xE04A80C505823410(iParam1, &(uParam2->f_93), &(uParam2->f_94), &(uParam2->f_95));
		if (unk_0x812A93B166D97C60(iParam1, 2))
		{
			unk_0x5D96D8530B3D0904(&(uParam2->f_92), 28);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam2->f_92), 28);
		}
		if (unk_0x812A93B166D97C60(iParam1, 3))
		{
			unk_0x5D96D8530B3D0904(&(uParam2->f_92), 29);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam2->f_92), 29);
		}
		if (unk_0x812A93B166D97C60(iParam1, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam2->f_92), 30);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam2->f_92), 30);
		}
		if (unk_0x812A93B166D97C60(iParam1, 1))
		{
			unk_0x5D96D8530B3D0904(&(uParam2->f_92), 31);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam2->f_92), 31);
		}
		uParam2->f_89 = unk_0xF22DC2D0CA24A151(iParam1);
		uParam2->f_90 = unk_0x8EF9B42D5496EC5A(iParam1);
		iVar8 = 0;
		while (iVar8 < 12)
		{
			uParam2->f_11[iVar8] = unk_0xDD62D560CFE11A27(iParam1, iVar8 + 1);
			iVar8++;
		}
		if (unk_0x587993B327460A82(iParam1, 0))
		{
			iVar10 = unk_0x74A7D92E3874B5C7(iParam1);
			if (iVar10 == 0 || iVar10 == 5)
			{
				uParam2->f_24 = 1;
			}
			else
			{
				uParam2->f_24 = 0;
			}
		}
		else
		{
			uParam2->f_24 = 0;
		}
		if (iParam0 == unk_0x16F2683693E537C9())
		{
			uParam2->f_25 = unk_0xFC21F7E0F4D92523();
		}
		func_313(&iParam1, &(uParam2->f_31), &(uParam2->f_81));
		uParam2->f_96 = unk_0x800653D55FA8A604(iParam1);
		uParam2->f_97 = func_297(iParam1);
		*uParam6 = -1;
		switch (iVar0)
		{
			case 0:
				if (Global_111638.f_32744.f_69[0].f_66 == unk_0x134B62B726CEC8E6(iParam1))
				{
					*uParam6 = 12;
				}
				break;
			
			case 1:
				if (Global_111638.f_32744.f_69[1].f_66 == unk_0x134B62B726CEC8E6(iParam1))
				{
					*uParam6 = 13;
				}
				break;
			
			case 2:
				if (Global_111638.f_32744.f_69[2].f_66 == unk_0x134B62B726CEC8E6(iParam1))
				{
					*uParam6 = 14;
				}
				break;
		}
	}
	else
	{
		*uParam5 = 0;
		*uParam3 = { 0f, 0f, 0f };
		*uParam4 = 0f;
		*uParam2 = 0;
		uParam2->f_1 = 0;
		uParam2->f_2 = 0f;
		uParam2->f_3 = 0;
		uParam2->f_4 = 0;
		uParam2->f_5 = 0;
		uParam2->f_6 = 0;
		uParam2->f_7 = 0;
		uParam2->f_8 = 0;
		uParam2->f_9 = 0;
		uParam2->f_10 = 0;
		iVar8 = 0;
		while (iVar8 < uParam2->f_11)
		{
			uParam2->f_11[iVar8] = 0;
			iVar8++;
		}
		uParam2->f_24 = 0;
		uParam2->f_25 = 0;
		*uParam5 = 0;
		*uParam6 = -1;
		uParam2->f_96 = 0f;
	}
}

int func_374(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xC42A92762C58E1B9(iParam0, iParam1, iParam2))
	{
		iVar0 = unk_0x134B62B726CEC8E6(iParam1);
		if (unk_0xA7082C42B8809BF2(iVar0) || (iVar0 == 771711535 || iVar0 == -1066334226))
		{
			if (unk_0x70EED0761B82965E(iParam1))
			{
				return 0;
			}
			return 1;
		}
		if ((unk_0xC41A9202669A24C4(iVar0) || unk_0xAFB8495D36825275(iVar0)) || iVar0 == -150975354)
		{
			if (unk_0xE934758D273C899A(iParam1))
			{
				return 0;
			}
			return 1;
		}
		return 1;
	}
	return 0;
}

void func_375()
{
	Global_98783 = 1;
}

int func_376(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_268(0))
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
		if (!func_150(iParam2))
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
			func_377(iParam0, iParam4);
		}
	}
	return 2;
}

void func_377(var uParam0, int iParam1)
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

void func_378(var uParam0)
{
	if (func_11(2, *uParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 1))
		{
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 2))
			{
				func_70(uParam0, func_379(*uParam0));
				func_86(2, *uParam0, 0);
			}
			else
			{
				func_122(uParam0);
				func_86(2, *uParam0, 0);
			}
		}
	}
}

int func_379(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_395(18);
			break;
		
		case 1:
			return func_395(22);
			break;
		
		case 2:
			return func_395(40);
			break;
		
		case 3:
			return func_395(8);
			break;
		
		case 4:
			return func_395(26);
			break;
		
		default:
			break;
	}
	return 0;
}

void func_380(var uParam0, float fParam1, float fParam2)
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		fVar0 = vdist2(uParam0->f_401, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true));
		if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 1))
		{
			func_391(uParam0);
		}
		else if (fVar0 < (fParam1 * fParam1) || unk_0xEAE0D21A50E6C7F4(Global_94753, *uParam0))
		{
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 0))
			{
				if (func_390(uParam0))
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_94753, *uParam0))
					{
						if (unk_0xEAE0D21A50E6C7F4(Global_94755, *uParam0))
						{
							func_385(uParam0);
						}
					}
					else
					{
						func_385(uParam0);
					}
				}
			}
			else
			{
				func_384(uParam0);
			}
		}
		if (fVar0 > (fParam2 * fParam2) && !unk_0xEAE0D21A50E6C7F4(Global_94753, *uParam0))
		{
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 0))
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 1))
				{
					func_382(uParam0);
				}
				func_381(uParam0);
			}
		}
	}
}

void func_381(var uParam0)
{
	unk_0x42740B44BA8D7B43("HEIST_BULLETIN_BOARD");
	unk_0x71199B01895C6202(932342438);
	unk_0x71199B01895C6202(-975272128);
	unk_0x71199B01895C6202(-735763507);
	if (uParam0->f_413 != 0)
	{
		unk_0xE17FDF9E3068281B(&(uParam0->f_413));
	}
	if (uParam0->f_414 != 0)
	{
		unk_0xE17FDF9E3068281B(&(uParam0->f_414));
	}
	unk_0x11CCD0ACA866C6C5(5, false);
	unk_0x0674E58A79778E99(&Global_94754, *uParam0);
	unk_0x0674E58A79778E99(&(uParam0->f_449), 0);
}

void func_382(var uParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 1))
	{
		if (!unk_0x22A8E52414415B76())
		{
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 2))
			{
				func_70(uParam0, 0);
			}
		}
		func_383(uParam0);
		unk_0x0674E58A79778E99(&(uParam0->f_449), 1);
		unk_0x0674E58A79778E99(&Global_94753, *uParam0);
	}
}

void func_383(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_33)
	{
		if (unk_0xC844350D5D58C99A(uParam0->f_428[iVar0]))
		{
			unk_0xF690C84DADBB3551(&(uParam0->f_428[iVar0]));
		}
		iVar0++;
	}
}

void func_384(var uParam0)
{
	if (!unk_0x1D6041CB88128065())
	{
		return;
	}
	unk_0xD7992BEF7A9D109E(&(uParam0->f_1.f_272), 5);
	unk_0xAE317D00A5A55DF6("HEIST_BULLETIN_BOARD", false, -1);
	if (*uParam0 != 1)
	{
		unk_0x523BCC9DC80CD82F(932342438);
		unk_0x523BCC9DC80CD82F(-975272128);
		unk_0x523BCC9DC80CD82F(-735763507);
	}
	uParam0->f_413 = unk_0x5275223F099DEF26(&(uParam0->f_1.f_268));
	uParam0->f_414 = unk_0x5275223F099DEF26("INSTRUCTIONAL_BUTTONS");
	unk_0x5D96D8530B3D0904(&Global_94752, *uParam0);
	unk_0x5D96D8530B3D0904(&(uParam0->f_449), 0);
}

void func_385(var uParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 1))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_96)
		{
			func_37(uParam0, iVar0);
			iVar0++;
		}
		func_34(uParam0);
		func_32(uParam0);
		func_389(uParam0);
		func_388(uParam0);
		func_386(uParam0);
		unk_0x5D96D8530B3D0904(&(uParam0->f_449), 1);
	}
}

void func_386(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_33)
	{
		if (func_33(*uParam0, uParam0->f_1.f_75[iVar0]))
		{
			switch ((iVar0 % 3))
			{
				case 0:
					iVar1 = 932342438;
					break;
				
				case 1:
					iVar1 = -975272128;
					break;
				
				case 2:
					iVar1 = -735763507;
					break;
			}
			fVar2 = (to_float((unk_0x09AC81E49EA267F7(0, 65535) - 32767)) / 4000f);
			fVar3 = (to_float((unk_0x09AC81E49EA267F7(0, 65535) - 32767)) / 4000f);
			vVar4 = { func_387(uParam0, &(uParam0->f_1.f_34[iVar0])) };
			uParam0->f_428[iVar0] = unk_0x7707E48765093646(iVar1, vVar4, 1, true, false);
			unk_0xC023D1C4BF532815(uParam0->f_428[iVar0], fVar2, 0f, (uParam0->f_404 + fVar3), 2, 1);
			unk_0x73270B3C9CC833FD(uParam0->f_428[iVar0], true, 0);
			unk_0xE121AE1BBF90E186(uParam0->f_428[iVar0], true);
			unk_0x20641932E5104B25(uParam0->f_428[iVar0], false, 0);
			unk_0x08543B8F6DBE0B08(uParam0->f_428[iVar0], 0);
			unk_0x1E9649458B15960F(uParam0->f_428[iVar0], true);
		}
		iVar0++;
	}
	unk_0x0674E58A79778E99(&Global_94755, *uParam0);
}

Vector3 func_387(var uParam0, var uParam1)
{
	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_29(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0,5f));
	fVar5 = (-fVar1 * (fVar3 - 0,5f));
	fVar6 = uParam0->f_404;
	vVar7 = { uParam0->f_401 };
	vVar7 = { vVar7 + Vector(fVar5, (fVar4 * cos((90f - fVar6))), (fVar4 * sin((90f - fVar6)))) };
	return vVar7;
}

void func_388(var uParam0)
{
	iVar1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_117)
	{
		iVar2 = uParam0->f_1.f_186[iVar0];
		bVar3 = unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_120[iVar1], iVar2);
		if (uParam0->f_1.f_141[iVar0] == 0 && uParam0->f_1.f_141[iVar0].f_1 == 0)
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_HEIST_ASSET");
			unk_0x3CAEA85DA607305E(uParam0->f_1.f_118[iVar0]);
			unk_0x1200CC973A2399C8(bVar3);
			unk_0x7E60D21B163E9D56();
		}
		else
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_HEIST_ASSET");
			unk_0x3CAEA85DA607305E(uParam0->f_1.f_118[iVar0]);
			unk_0x1200CC973A2399C8(bVar3);
			unk_0x3CAEA85DA607305E(0);
			unk_0x7C19E5E4784BD7CF(to_float(uParam0->f_1.f_141[iVar0]));
			unk_0x7C19E5E4784BD7CF(to_float(uParam0->f_1.f_141[iVar0].f_1));
			unk_0x7E60D21B163E9D56();
		}
		iVar0++;
	}
}

void func_389(var uParam0)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_413, "CREATE_VIEW");
	unk_0x3CAEA85DA607305E(uParam0->f_415 + 1);
	unk_0x3CAEA85DA607305E(2);
	unk_0x7C19E5E4784BD7CF(to_float(uParam0->f_1.f_14));
	unk_0x7C19E5E4784BD7CF(to_float(uParam0->f_1.f_14.f_1));
	unk_0x7E60D21B163E9D56();
	iVar0 = *uParam0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < uParam0->f_1.f_209)
	{
		if (func_33(iVar0, uParam0->f_1.f_248[iVar2]))
		{
			iVar3 = 0;
			if (func_33(iVar0, uParam0->f_1.f_258[iVar2]))
			{
				iVar3 = 1;
			}
			unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(uParam0->f_415 + 1);
			unk_0x3CAEA85DA607305E(iVar1);
			unk_0x3CAEA85DA607305E(iVar3);
			func_9(&(uParam0->f_1.f_211[iVar2]));
			unk_0x7E60D21B163E9D56();
			iVar1++;
		}
		iVar2++;
	}
	unk_0x7E60C62A7CE58FC8(uParam0->f_413, "DISPLAY_VIEW");
	unk_0x3CAEA85DA607305E(uParam0->f_415 + 1);
	unk_0x7E60D21B163E9D56();
	if (func_33(*uParam0, uParam0->f_1.f_210))
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_VIEW");
		unk_0x3CAEA85DA607305E(uParam0->f_415 + 1);
		unk_0x1200CC973A2399C8(true);
		unk_0x7E60D21B163E9D56();
	}
	else
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_VIEW");
		unk_0x3CAEA85DA607305E(uParam0->f_415 + 1);
		unk_0x1200CC973A2399C8(false);
		unk_0x7E60D21B163E9D56();
	}
}

int func_390(var uParam0)
{
	if (!unk_0x83D8570832F172A7(uParam0->f_413))
	{
		return 0;
	}
	if (!unk_0x83D8570832F172A7(uParam0->f_414))
	{
		return 0;
	}
	if (!unk_0x67C1D9E5B91B2E37(5))
	{
		return 0;
	}
	if (unk_0x1D6041CB88128065())
	{
		if (!unk_0xAE317D00A5A55DF6("HEIST_BULLETIN_BOARD", false, -1))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (*uParam0 != 1)
	{
		if ((!unk_0xB87F6CF6E5628C67(932342438) || !unk_0xB87F6CF6E5628C67(-975272128)) || !unk_0xB87F6CF6E5628C67(-735763507))
		{
			return 0;
		}
	}
	unk_0x5D96D8530B3D0904(&Global_94754, *uParam0);
	return 1;
}

void func_391(var uParam0)
{
	if (func_33(*uParam0, 0))
	{
		func_392(uParam0);
		fVar0 = (-uParam0->f_1.f_4 * 0,5f);
		fVar1 = (uParam0->f_1.f_5 * 0,5f);
		unk_0x0103165890FA9E7F(uParam0->f_413, uParam0->f_401 + Vector(fVar1, (fVar0 * cos((90f - uParam0->f_404))), (fVar0 * sin((90f - uParam0->f_404)))), 180f, 0f, uParam0->f_404, 1f, 1f, 1f, uParam0->f_1.f_6, uParam0->f_1.f_7, 1f, 2);
	}
}

void func_392(var uParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_94752, *uParam0))
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_449), 16);
		unk_0x5D96D8530B3D0904(&(uParam0->f_449), 15);
		unk_0x5D96D8530B3D0904(&(uParam0->f_449), 14);
		unk_0x0674E58A79778E99(&Global_94752, *uParam0);
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 16))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_117)
		{
			iVar1 = uParam0->f_1.f_186[iVar0];
			bVar2 = func_33(*uParam0, iVar1);
			unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_HEIST_ASSET");
			unk_0x3CAEA85DA607305E(uParam0->f_1.f_118[iVar0]);
			unk_0x1200CC973A2399C8(bVar2);
			unk_0x3CAEA85DA607305E(0);
			unk_0x7E60D21B163E9D56();
			iVar0++;
		}
		unk_0x0674E58A79778E99(&(uParam0->f_449), 16);
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 15))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_33)
		{
			if (func_33(*uParam0, uParam0->f_1.f_75[iVar0]))
			{
				if (!unk_0xC844350D5D58C99A(uParam0->f_428[iVar0]))
				{
					switch ((iVar0 % 3))
					{
						case 0:
							iVar3 = 932342438;
							break;
						
						case 1:
							iVar3 = -975272128;
							break;
						
						case 2:
							iVar3 = -735763507;
							break;
					}
					fVar4 = (to_float((unk_0x09AC81E49EA267F7(0, 65535) - 32767)) / 4000f);
					fVar5 = (to_float((unk_0x09AC81E49EA267F7(0, 65535) - 32767)) / 4000f);
					vVar6 = { func_387(uParam0, &(uParam0->f_1.f_34[iVar0])) };
					uParam0->f_428[iVar0] = unk_0x7707E48765093646(iVar3, vVar6, 1, true, false);
					unk_0xC023D1C4BF532815(uParam0->f_428[iVar0], fVar4, 0f, (uParam0->f_404 + fVar5), 2, 1);
					unk_0x73270B3C9CC833FD(uParam0->f_428[iVar0], true, 0);
					unk_0xE121AE1BBF90E186(uParam0->f_428[iVar0], true);
					unk_0x20641932E5104B25(uParam0->f_428[iVar0], false, 0);
					unk_0x08543B8F6DBE0B08(uParam0->f_428[iVar0], 0);
					unk_0x1E9649458B15960F(uParam0->f_428[iVar0], true);
				}
			}
			else if (!unk_0xC844350D5D58C99A(uParam0->f_428[iVar0]))
			{
				unk_0xF690C84DADBB3551(&(uParam0->f_428[iVar0]));
			}
			iVar0++;
		}
		unk_0x0674E58A79778E99(&(uParam0->f_449), 15);
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 14))
	{
		func_393(uParam0);
		func_34(uParam0);
		func_389(uParam0);
		unk_0x0674E58A79778E99(&(uParam0->f_449), 14);
	}
}

void func_393(var uParam0)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	unk_0x3CAEA85DA607305E(uParam0->f_415 + 1);
	unk_0x7E60D21B163E9D56();
}

bool func_394(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_395(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

void func_396(bool bParam0)
{
	if (bParam0)
	{
		Global_110660 = 0;
	}
	else
	{
		Global_110660 = 1;
	}
}

void func_397(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_111638.f_1.f_120[iParam0]), iParam1);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_111638.f_1.f_120[iParam0]), iParam1);
	}
	unk_0x5D96D8530B3D0904(&Global_94752, iParam0);
}

void func_398(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	vVar0 = { Global_94690[uParam0->f_1.f_1].f_3 };
	fVar3 = Global_94690[uParam0->f_1.f_1].f_6;
	uParam0->f_401 = { vVar0 };
	uParam0->f_404 = fVar3;
	uParam0->f_405 = { vVar0 + Vector(0f, (-uParam0->f_1.f_8 * cos((360f - fVar3))), (-uParam0->f_1.f_8 * sin((360f - fVar3)))) };
	uParam0->f_408 = { -0,85f, 0f, fVar3 };
	unk_0x5D96D8530B3D0904(&(uParam0->f_449), 4);
	uParam0->f_415 = uParam0->f_1.f_96;
	uParam0->f_416 = -1;
	unk_0x0674E58A79778E99(&(uParam0->f_449), 0);
	unk_0x0674E58A79778E99(&(uParam0->f_449), 1);
	unk_0x0674E58A79778E99(&(uParam0->f_449), 2);
	uParam0->f_464 = 0;
	uParam0->f_451 = -1;
}

void func_399(var uParam0, var uParam1)
{
	func_409(uParam0, 0, "HEIST_FINALE", "BOARD6", "FHFAUD", "CRWAUD", 1, 1, 3, 4, uParam1, 96,47825f, -1292,353f, 29,76875f, 5f, 5,5f, 6f);
	func_408(uParam0, 1500, 540, 3,45f, 1,34f, 3,18f, 1,79f, 2,58f, 747, 260, 620, 442, 490, 445, 360, 438, 230, 440, 100, 435, 872, 398, 20, 40, 1150, 415);
	func_407(uParam0, 18f, 17f, 19f);
	func_406(uParam0, "", "", "", "", "FHP16", "", "FHP17", "FHP19");
	func_405(uParam0, 1, "CRW_GM", "");
	func_405(uParam0, 2, "CRW_KA", "");
	func_405(uParam0, 3, "CRW_HW", "");
	func_405(uParam0, 4, "CRW_NR", "");
	func_405(uParam0, 5, "CRW_DJ", "");
	func_405(uParam0, 6, "CRW_PH", "");
	func_405(uParam0, 7, "CRW_CF", "");
	func_405(uParam0, 8, "CRW_ET", "");
	func_405(uParam0, 9, "CRW_KD", "");
	func_405(uParam0, 10, "CRW_PM", "CRM_PM");
	func_405(uParam0, 11, "", "CRM_CH");
	func_405(uParam0, 12, "CRW_RL", "CRM_RL");
	func_405(uParam0, 13, "CRW_TM", "CRM_TM");
	func_404(uParam0, 24, "FHP18");
	func_404(uParam0, 25, "FHP18b");
	func_404(uParam0, 28, "FHP18c");
	func_404(uParam0, 29, "FHP18d");
	func_404(uParam0, 30, "FHP18e");
	func_404(uParam0, 26, "FHP18f");
	func_404(uParam0, 27, "FHP18g");
	func_404(uParam0, 31, "FHP18h");
	func_404(uParam0, 22, "FHP18i");
	func_404(uParam0, 23, "FHP18j");
	func_404(uParam0, 20, "FHP18k");
	func_403(uParam0, 0, 1, 0, 0);
	func_403(uParam0, 1, 1, 0, 0);
	func_403(uParam0, 2, 1, 0, 0);
	func_403(uParam0, 3, 1, 0, 0);
	func_403(uParam0, 4, 1, 0, 0);
	func_403(uParam0, 5, 1, 0, 0);
	func_403(uParam0, 6, 1, 0, 0);
	func_403(uParam0, 7, 1, 0, 0);
	func_403(uParam0, 8, 1, 0, 0);
	func_403(uParam0, 9, 1, 0, 0);
	func_403(uParam0, 10, 1, 0, 0);
	func_403(uParam0, 11, 1, 0, 0);
	func_403(uParam0, 12, 1, 0, 0);
	func_403(uParam0, 13, 1, 0, 0);
	func_403(uParam0, 14, 1, 0, 0);
	func_403(uParam0, 15, 1, 0, 0);
	func_403(uParam0, 16, 1, 0, 0);
	func_403(uParam0, 17, 1, 0, 0);
	func_403(uParam0, 18, 1, 0, 0);
	func_403(uParam0, 19, 1, 0, 0);
	func_403(uParam0, 20, 1, 0, 0);
	func_403(uParam0, 21, 1, 0, 0);
	func_402(uParam0, 0, 0, "H_TD_RES");
	func_402(uParam0, 0, 0, "H_TD_FLY");
	func_402(uParam0, 0, 2, "H_TD_PLAN");
	func_402(uParam0, 0, 10, "H_TD_CREW");
	func_402(uParam0, 3, 5, "H_TD_STNG");
	func_402(uParam0, 3, 6, "H_TD_CARS");
	func_402(uParam0, 4, 7, "H_TD_DRIL");
	func_402(uParam0, 4, 8, "H_TD_TRAI");
	func_402(uParam0, 4, 9, "H_TD_GETA");
	func_401(uParam0, 1, 142, 72);
	func_401(uParam0, 1, 134, 244);
	func_401(uParam0, 1, 262, 54);
	func_401(uParam0, 1, 334, 206);
	func_401(uParam0, 1, 547, 65);
	func_401(uParam0, 1, 550, 200);
	func_401(uParam0, 1, 453, 54);
	func_401(uParam0, 1, 492, 242);
	func_401(uParam0, 1, 731, 179);
	func_401(uParam0, 1, 685, 81);
	func_401(uParam0, 1, 828, 79);
	func_401(uParam0, 1, 982, 167);
	func_401(uParam0, 1, 1155, 70);
	func_401(uParam0, 1, 1293, 60);
	func_401(uParam0, 1, 1254, 191);
	func_401(uParam0, 1, 1433, 84);
	func_401(uParam0, 1, 1469, 172);
	func_401(uParam0, 1, 952, 367);
	func_401(uParam0, 1, 967, 469);
	func_401(uParam0, 1, 1246, 374);
	func_400(uParam0, 1, "FHP9", 777, 165, 1);
	func_400(uParam0, 1, "FHP10", 970, 179, 1);
	func_400(uParam0, 1, "FHP11", 1210, 184, 1);
	func_400(uParam0, 1, "FHP12", 537, 168, 0);
	func_400(uParam0, 1, "FHP13", 579, 229, 1);
	func_400(uParam0, 1, "FHP14", 355, 228, 1);
	func_400(uParam0, 1, "FHP15", 350, 117, 1);
}

void func_400(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (uParam0->f_369 < 7)
	{
		StringCopy(&Var0, sParam2, 8);
		uParam0->f_386[uParam0->f_369] = iParam1;
		uParam0->f_371[uParam0->f_369] = iParam3;
		uParam0->f_371[uParam0->f_369].f_1 = iParam4;
		uParam0->f_280[uParam0->f_369 + 4] = { Var0 };
		if (bParam5)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_370), uParam0->f_369);
		}
		uParam0->f_369++;
	}
}

void func_401(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (uParam0->f_33 < 20)
	{
		uParam0->f_75[uParam0->f_33] = iParam1;
		uParam0->f_34[uParam0->f_33] = iParam2;
		uParam0->f_34[uParam0->f_33].f_1 = iParam3;
		uParam0->f_33++;
	}
}

void func_402(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	if (uParam0->f_209 < 9)
	{
		StringCopy(&Var0, sParam3, 32);
		uParam0->f_248[uParam0->f_209] = iParam1;
		uParam0->f_258[uParam0->f_209] = iParam2;
		MemCopy(&(uParam0->f_211[uParam0->f_209]), {Var0}, 4);
		uParam0->f_209++;
	}
}

void func_403(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (uParam0->f_117 < 22)
	{
		uParam0->f_118[uParam0->f_117] = iParam1;
		uParam0->f_186[uParam0->f_117] = iParam2;
		uParam0->f_141[uParam0->f_117] = iParam3;
		uParam0->f_141[uParam0->f_117].f_1 = iParam4;
		uParam0->f_117++;
	}
}

void func_404(var uParam0, int iParam1, char* sParam2)
{
	StringCopy(&Var0, sParam2, 8);
	if (unk_0x7F8A39872A07D2CE(sParam2, ""))
	{
		return;
	}
	uParam0->f_304[iParam1] = { Var0 };
}

void func_405(var uParam0, int iParam1, char* sParam2, char* sParam3)
{
	StringCopy(&Var0, sParam2, 8);
	StringCopy(&Var2, sParam3, 8);
	uParam0->f_304[iParam1] = { Var0 };
	if (!unk_0x7F8A39872A07D2CE(sParam3, ""))
	{
		switch (iParam1)
		{
			case 10:
				uParam0->f_304[14] = { Var2 };
				break;
			
			case 13:
				uParam0->f_304[16] = { Var2 };
				break;
			
			case 12:
				uParam0->f_304[15] = { Var2 };
				break;
			
			case 11:
				uParam0->f_304[17] = { Var2 };
				break;
			
			default:
				break;
			}
	}
}

void func_406(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8)
{
	StringCopy(&Var0, sParam1, 16);
	StringCopy(&Var4, sParam2, 16);
	StringCopy(&Var8, sParam3, 16);
	StringCopy(&Var12, sParam4, 16);
	StringCopy(&Var16, sParam5, 8);
	StringCopy(&Var18, sParam6, 8);
	StringCopy(&Var20, sParam7, 8);
	StringCopy(&Var22, sParam8, 8);
	uParam0->f_20[0] = { Var0 };
	uParam0->f_20[1] = { Var4 };
	uParam0->f_108[0] = { Var8 };
	uParam0->f_108[1] = { Var12 };
	uParam0->f_280[1] = { Var16 };
	uParam0->f_280[2] = { Var18 };
	uParam0->f_280[0] = { Var20 };
	uParam0->f_280[3] = { Var22 };
}

void func_407(var uParam0, float fParam1, float fParam2, float fParam3)
{
	uParam0->f_9 = fParam1;
	uParam0->f_10 = fParam2;
	uParam0->f_11 = fParam3;
}

void func_408(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = fParam3;
	uParam0->f_5 = fParam4;
	uParam0->f_6 = fParam5;
	uParam0->f_7 = fParam6;
	uParam0->f_8 = fParam7;
	uParam0->f_12 = iParam8;
	uParam0->f_12.f_1 = iParam9;
	uParam0->f_97[0] = iParam10;
	uParam0->f_97[0].f_1 = iParam11;
	uParam0->f_97[1] = iParam12;
	uParam0->f_97[1].f_1 = iParam13;
	uParam0->f_97[2] = iParam14;
	uParam0->f_97[2].f_1 = iParam15;
	uParam0->f_97[3] = iParam16;
	uParam0->f_97[3].f_1 = iParam17;
	uParam0->f_97[4] = iParam18;
	uParam0->f_97[4].f_1 = iParam19;
	uParam0->f_16 = iParam20;
	uParam0->f_16.f_1 = iParam21;
	uParam0->f_18 = iParam22;
	uParam0->f_18.f_1 = iParam23;
	uParam0->f_14 = iParam24;
	uParam0->f_14.f_1 = iParam25;
}

void func_409(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, vector3 vParam11, vector3 vParam14)
{
	uParam0->f_1 = iParam1;
	StringCopy(&(uParam0->f_268), sParam2, 16);
	StringCopy(&(uParam0->f_272), sParam3, 16);
	StringCopy(&(uParam0->f_276), sParam4, 8);
	StringCopy(&(uParam0->f_278), sParam5, 8);
	uParam0->f_29 = iParam6;
	uParam0->f_30[0] = iParam8;
	uParam0->f_30[1] = iParam9;
	uParam0->f_210 = iParam7;
	uParam0->f_96 = uParam10;
	uParam0->f_394 = { vParam11 };
	uParam0->f_397 = { vParam14 };
}

int func_410(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_411(int iParam0)
{
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0x5D96D8530B3D0904(&(Global_111638.f_9080.f_99.f_219[iVar0]), iVar1);
	return 1;
}

void func_412()
{
	while (!func_413(&Local_182))
	{
		wait(0);
	}
	func_115(24, 0);
	func_115(25, 0);
	func_115(26, 0);
	func_86(1, 4, 0);
	func_86(2, 4, 0);
	unk_0x2952D66A502EA873(iLocal_179, 0);
	if (iLocal_180 != -1)
	{
		if (unk_0x49083FDB78AC0509(iLocal_180))
		{
			unk_0xDDABC98CFF1A4C60(iLocal_180);
		}
	}
	unk_0xEFED0CD6E25037B9();
	unk_0x17E8C6920A1E386F(Local_182.f_1.f_394 - Local_182.f_1.f_397, Local_182.f_1.f_394 + Local_182.f_1.f_397, true, 0);
	unk_0x34D79252800B23FF(5);
	if (iLocal_48 != -1)
	{
		func_221(&iLocal_48);
	}
	unk_0x5C8D148FC238F38A();
	if (iLocal_46 != -1)
	{
		func_160(&iLocal_46);
	}
	unk_0x10FAF14A60A0DBE1();
}

int func_413(var uParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 1))
	{
		func_382(uParam0);
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 0))
	{
		func_381(uParam0);
	}
	return 1;
}

