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
	iLocal_42 = -1;
	iLocal_43 = -1;
	iLocal_44 = -1;
	iLocal_45 = -1;
	iLocal_126 = -1;
	if (unk_0x2EBF608FFE6CA406(82))
	{
		func_310();
	}
	func_309(5);
	func_298(&(Local_176.f_1), Global_94773[5]);
	func_297(&Local_176, 2);
	if (Global_111638.f_9080.f_99.f_205[9] != 5)
	{
		Global_111638.f_9080.f_99.f_205[9] = 5;
	}
	while (!func_296(5))
	{
		if (!Global_76891 && !func_295(14))
		{
			func_287();
			func_273(&Local_176, 32f, 35f);
			func_271(&Local_176);
			func_153();
			if (func_151(0) || unk_0xEAE0D21A50E6C7F4(Local_176.f_449, 2))
			{
				func_67(&Local_176);
				func_4(&Local_176);
				func_3(&Local_176);
			}
		}
		if (unk_0x8A22C4C08282BF26(896333358) > 0)
		{
			func_2();
		}
		wait(0);
	}
	func_1(5);
	func_310();
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

void func_2()
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

void func_3(var uParam0)
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

void func_4(var uParam0)
{
	iVar0 = func_65(func_66(*uParam0));
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return;
	}
	iVar1 = iVar0;
	if ((iVar1 != uParam0->f_464 && !(iVar1 == 2 && uParam0->f_464 == 4)) && !((*uParam0 == 1 && iVar1 == 3) && uParam0->f_464 == 4))
	{
		if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 2))
		{
			func_5(uParam0, iVar1, 0);
		}
		else
		{
			uParam0->f_464 = iVar1;
		}
	}
}

void func_5(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 != uParam0->f_464)
	{
		if (uParam0->f_680 == 0)
		{
			func_64(uParam0);
			uParam0->f_464 = iParam1;
			func_6(uParam0, iParam1, iParam2);
		}
	}
}

void func_6(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			func_63(uParam0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_449), 5);
			unk_0x0674E58A79778E99(&(uParam0->f_449), 4);
			break;
		
		case 1:
			func_63(uParam0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_449), 5);
			unk_0x0674E58A79778E99(&(uParam0->f_449), 4);
			uParam0->f_452 = -1;
			break;
		
		case 2:
			func_35(uParam0, uParam0->f_417, iParam2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_449), 5);
			unk_0x0674E58A79778E99(&(uParam0->f_449), 4);
			uParam0->f_457 = unk_0x1C0640BA9A7327B3();
			break;
		
		case 3:
			func_17(uParam0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_449), 5);
			unk_0x0674E58A79778E99(&(uParam0->f_449), 4);
			unk_0x5D96D8530B3D0904(&(uParam0->f_449), 9);
			uParam0->f_457 = unk_0x1C0640BA9A7327B3();
			break;
		
		case 4:
			func_13(&(uParam0->f_1.f_108[0]), 1);
			func_13(&(uParam0->f_1.f_108[1]), 1);
			Global_111638.f_1.f_6[*uParam0] = 1;
			unk_0xA37A90C62806D848(0);
			func_11(uParam0, 0);
			func_63(uParam0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_449), 5);
			unk_0x5D96D8530B3D0904(&(uParam0->f_449), 4);
			uParam0->f_457 = unk_0x1C0640BA9A7327B3();
			break;
	}
	func_7(uParam0);
}

void func_7(var uParam0)
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
	bVar6 = func_10(1, *uParam0);
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
					func_9(sVar2);
					func_8("PB_H_ZOOM");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0x7E60D21B163E9D56();
				}
				else
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(2);
					func_9(sVar2);
					func_8("PB_H_ZOOM");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(1);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0);
					func_9(sVar5);
					func_8("PB_H_EXIT");
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
					func_9(sVar0);
					func_8("PB_H_SELCT");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(1);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0);
					func_9(sVar4);
					func_8("PB_H_TRIG");
					unk_0x7E60D21B163E9D56();
				}
				else
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(3);
					func_9(sVar0);
					func_8("PB_H_SELCT");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(2);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(1);
					func_9(sVar5);
					func_8("PB_H_UNDO");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0);
					func_9(sVar4);
					func_8("PB_H_TRIG");
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
					func_9(sVar1);
					func_8("PB_H_SELCT");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0x7E60D21B163E9D56();
				}
				else
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(2);
					func_9(sVar1);
					func_8("PB_H_SELCT");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(1);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0);
					func_9(sVar4);
					func_8("PB_H_TRIG");
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
				func_9(sVar2);
				func_8("PB_H_ZOOM");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(2);
				func_9(sVar3);
				func_8("PB_H_LOOK");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(1);
				func_9(sVar5);
				func_8("PB_H_UNDO");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(0);
				func_9(sVar4);
				func_8("PB_H_CONF");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x1200CC973A2399C8(false);
				unk_0x7E60D21B163E9D56();
			}
			break;
	}
}

void func_8(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_9(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

bool func_10(int iParam0, int iParam1)
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

void func_11(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_449), 18);
		if (((!func_12(&(uParam0->f_1.f_20[0])) && !func_12(&(uParam0->f_1.f_20[1]))) && !func_12(&(uParam0->f_1.f_108[0]))) && !func_12(&(uParam0->f_1.f_108[1])))
		{
			unk_0xA37A90C62806D848(0);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_449), 18);
	}
}

bool func_12(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_13(char* sParam0, int iParam1)
{
	if (Global_110278 && iParam1)
	{
		if (func_12(sParam0) && !unk_0x79BBCD5833294FD5())
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
				func_16(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_15((Global_111638.f_20405.f_145 - 1));
			Global_111638.f_20405.f_145 = (Global_111638.f_20405.f_145 - 1);
			func_14();
			return;
		}
		iVar0++;
	}
}

void func_14()
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

void func_15(int iParam0)
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

void func_16(int iParam0, int iParam1)
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

void func_17(var uParam0)
{
	func_34(uParam0);
	func_31(uParam0);
	unk_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
	unk_0x3CAEA85DA607305E(uParam0->f_415);
	unk_0x7E60D21B163E9D56();
	iVar0 = func_65(func_30(*uParam0));
	if (iVar0 != 0)
	{
		if (iVar0 == func_29(*uParam0, 0))
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(8);
			unk_0x7E60D21B163E9D56();
		}
		else if (iVar0 == func_29(*uParam0, 1))
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(9);
			unk_0x7E60D21B163E9D56();
		}
	}
	Var1 = (uParam0->f_1.f_16 + uParam0->f_1.f_18);
	Var1.f_1 = (uParam0->f_1.f_16.f_1 + uParam0->f_1.f_18.f_1);
	func_25(uParam0, &Var1, uParam0->f_1.f_10);
	func_23(uParam0, 1, 1);
	func_11(uParam0, 0);
	func_18(uParam0);
}

void func_18(var uParam0)
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
							func_21(&(uParam0->f_1.f_20[0]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_20[1]), ""))
						{
							func_21(&(uParam0->f_1.f_20[1]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_111638.f_1[*uParam0] = 1;
					}
					else if (func_20() && !unk_0xFEBC1E4EC9E001F0())
					{
						if (((!unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 11) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 10)) && !func_19()) && uParam0->f_483 == 0)
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
							func_21(&(uParam0->f_1.f_108[0]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_108[1]), ""))
						{
							func_21(&(uParam0->f_1.f_108[1]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_111638.f_1.f_6[*uParam0] = 1;
					}
					else if (func_20() && !unk_0xFEBC1E4EC9E001F0())
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 10))
						{
							if ((!func_12("PB_H_GUNM") && !func_12("PB_H_HACK")) && !func_12("PB_H_DRIV"))
							{
								iVar0 = func_65(func_30(*uParam0));
								if (uParam0->f_417 < 5)
								{
									if (((!unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 11) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 10)) && !func_19()) && uParam0->f_483 == 0)
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

int func_19()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

int func_20()
{
	if (Global_111638.f_20405.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

void func_21(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_22(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_22(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_14();
	}
}

void func_23(var uParam0, int iParam1, int iParam2)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1.f_303, iParam1))
	{
		if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_280[iParam1]), ""))
		{
			func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[iParam1], iParam2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_1.f_303), iParam1);
		}
	}
}

void func_24(var uParam0, struct<2> Param1, struct<2> Param3, int iParam5)
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

void func_25(var uParam0, var uParam1, float fParam2)
{
	uParam0->f_411 = *uParam1;
	uParam0->f_411.f_1 = uParam1->f_1;
	uParam0->f_454 = unk_0x1C0640BA9A7327B3() + 1000;
	vVar0 = { func_27(uParam0, &(uParam0->f_411)) };
	func_26(&(uParam0->f_649), vVar0, fParam2);
}

void func_26(var uParam0, vector3 vParam1, float fParam4)
{
	uParam0->f_11 = { vParam1 };
	if (fParam4 != -1f)
	{
		uParam0->f_7 = fParam4;
	}
}

Vector3 func_27(var uParam0, var uParam1)
{
	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_28(uParam0, uParam1, &fVar2, &fVar3);
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

void func_28(var uParam0, var uParam1, var uParam2, var uParam3)
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

int func_29(int iParam0, int iParam1)
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

int func_30(int iParam0)
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

void func_31(var uParam0)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_413, "CREATE_VIEW");
	unk_0x3CAEA85DA607305E(uParam0->f_415);
	unk_0x3CAEA85DA607305E(1);
	unk_0x7C19E5E4784BD7CF(to_float(uParam0->f_1.f_16));
	unk_0x7C19E5E4784BD7CF(to_float(uParam0->f_1.f_16.f_1));
	unk_0x7E60D21B163E9D56();
	func_33(uParam0);
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
	unk_0x1200CC973A2399C8(func_32(*uParam0, uParam0->f_1.f_29));
	unk_0x7E60D21B163E9D56();
	iVar0 = func_65(func_30(*uParam0));
	if (iVar0 != 0)
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
		unk_0x3CAEA85DA607305E(uParam0->f_415);
		unk_0x7E60D21B163E9D56();
		if (iVar0 == func_29(*uParam0, 0))
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(8);
			unk_0x7E60D21B163E9D56();
		}
		else if (iVar0 == func_29(*uParam0, 1))
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

bool func_32(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_120[iParam0], iParam1);
}

void func_33(var uParam0)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_LABELS");
	func_8("H_CRW_NAME");
	func_8("H_CRW_TYPE");
	func_8("H_CRW_SKILLS");
	switch (*uParam0)
	{
		case 0:
			func_8("H_LBL_JWL");
			break;
		
		case 1:
			func_8("H_LBL_DOC");
			break;
		
		case 2:
			func_8("H_LBL_RUR");
			break;
		
		case 3:
			func_8("H_LBL_AGN");
			break;
		
		case 4:
			func_8("H_LBL_FA");
			func_8("H_LBL_FB");
			break;
	}
	if (*uParam0 != 1)
	{
		func_8("H_LBL_CRW");
	}
	func_8("H_LBL_TODO");
	if (*uParam0 != 2)
	{
		func_8("H_LBL_APP");
	}
	switch (*uParam0)
	{
		case 0:
			func_8("H_LBL_J1");
			func_8("H_LBL_J2");
			func_8("H_LBL_J3");
			func_8("H_LBL_J4");
			func_8("HC_J_IMPACT");
			func_8("HC_J_STEALTH");
			break;
		
		case 1:
			func_8("HC_D_BLOW_UP");
			func_8("HC_D_DEEP_SEA");
			break;
		
		case 2:
			func_8("H_LBL_R1");
			func_8("H_LBL_R2");
			func_8("H_LBL_R3");
			func_8("H_LBL_R4");
			func_8("H_LBL_R5");
			func_8("H_LBL_R6");
			func_8("H_LBL_R7");
			func_8("H_LBL_R8");
			func_8("H_LBL_R9");
			func_8("H_LBL_R10");
			func_8("H_LBL_R11");
			func_8("H_LBL_R12");
			break;
		
		case 3:
			func_8("H_LBL_A1");
			func_8("H_LBL_A2");
			func_8("H_LBL_A3");
			func_8("H_LBL_A4");
			func_8("H_LBL_A5");
			func_8("HC_A_FIRETRUCK");
			func_8("HC_A_HELICOPTER");
			break;
		
		case 4:
			func_8("H_LBL_F1");
			func_8("H_LBL_F2");
			func_8("H_LBL_F3");
			func_8("H_LBL_F4");
			func_8("H_LBL_F5");
			func_8("HC_F_TRAFFCONT");
			func_8("HC_F_HELI");
			break;
	}
	unk_0x7E60D21B163E9D56();
}

void func_34(var uParam0)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	unk_0x3CAEA85DA607305E(uParam0->f_415);
	unk_0x7E60D21B163E9D56();
}

void func_35(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_1.f_96)
	{
		return;
	}
	func_23(uParam0, 2, 1);
	iVar0 = func_65(func_30(*uParam0));
	iVar1 = Global_94773[iVar0].f_1[iParam1];
	switch (iVar1)
	{
		case 1:
			func_62(uParam0, iVar0, 1);
			break;
		
		case 2:
			func_62(uParam0, iVar0, 3);
			break;
		
		case 3:
			func_62(uParam0, iVar0, 2);
			break;
	}
	func_61(uParam0, uParam0->f_417);
	func_36(uParam0, uParam0->f_417);
	uParam0->f_450 = iParam1;
	unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_VIEW");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x1200CC973A2399C8(true);
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x7E60D21B163E9D56();
	func_25(uParam0, &(uParam0->f_1.f_97[iParam1]), uParam0->f_1.f_10);
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
	func_11(uParam0, 0);
	func_18(uParam0);
}

void func_36(var uParam0, int iParam1)
{
	iVar0 = func_30(*uParam0);
	iVar1 = func_65(iVar0);
	iVar2 = Global_94773[iVar1].f_1[iParam1];
	unk_0x7E60C62A7CE58FC8(uParam0->f_413, "CREATE_VIEW");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(0);
	unk_0x7C19E5E4784BD7CF(to_float(uParam0->f_1.f_97[iParam1]));
	unk_0x7C19E5E4784BD7CF(to_float(uParam0->f_1.f_97[iParam1].f_1));
	unk_0x7E60D21B163E9D56();
	func_33(uParam0);
	iVar3 = 0;
	if (Global_111638.f_1.f_12[iVar1][iParam1] != 0)
	{
		iVar4 = Global_111638.f_1.f_12[iVar1][iParam1];
		func_41(uParam0->f_413, iVar4, iParam1, iVar3, iVar4);
	}
	else
	{
		iVar5 = 0;
		while (iVar5 < 14)
		{
			iVar6 = iVar5;
			if (func_40(iVar6) == iVar2)
			{
				if (func_39(iVar6))
				{
					if (!func_38(iVar6))
					{
						if (!func_37(uParam0, iVar6))
						{
							if (!(iVar6 == 11 && *uParam0 == 3))
							{
								func_41(uParam0->f_413, iVar6, iParam1, iVar3, iVar5);
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

int func_37(var uParam0, int iParam1)
{
	iVar0 = func_65(func_30(*uParam0));
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

bool func_38(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_118, iParam0);
}

bool func_39(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_116, iParam0);
}

int func_40(int iParam0)
{
	return Global_94619[iParam0];
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x3CAEA85DA607305E(iParam3);
	unk_0x3CAEA85DA607305E(iParam4);
	func_8(func_59(iParam1));
	func_8(func_58(iParam1));
	switch (func_40(iParam1))
	{
		case 1:
			func_8(func_57(0));
			unk_0x3CAEA85DA607305E(func_54(iParam1, 0));
			func_8(func_57(1));
			unk_0x3CAEA85DA607305E(func_54(iParam1, 1));
			func_8(func_57(2));
			unk_0x3CAEA85DA607305E(func_54(iParam1, 2));
			func_8(func_57(3));
			unk_0x3CAEA85DA607305E(func_54(iParam1, 3));
			break;
		
		case 2:
			func_8(func_53(0));
			unk_0x3CAEA85DA607305E(func_50(iParam1, 0));
			func_8(func_53(1));
			unk_0x3CAEA85DA607305E(func_50(iParam1, 1));
			func_8(func_53(2));
			unk_0x3CAEA85DA607305E(func_50(iParam1, 2));
			break;
		
		case 3:
			func_8(func_48(0));
			unk_0x3CAEA85DA607305E(func_43(iParam1, 0));
			func_8(func_48(1));
			unk_0x3CAEA85DA607305E(func_43(iParam1, 1));
			func_8(func_48(2));
			unk_0x3CAEA85DA607305E(func_43(iParam1, 2));
			break;
	}
	func_8("H_CRW_CUT");
	unk_0x3CAEA85DA607305E(func_42(iParam1));
	unk_0x7E60D21B163E9D56();
}

var func_42(int iParam0)
{
	return Global_94619[iParam0].f_1;
}

int func_43(int iParam0, int iParam1)
{
	return round(((to_float(func_45(iParam0, iParam1)) / to_float(func_44(iParam1))) * 100f));
}

int func_44(int iParam0)
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

int func_45(int iParam0, int iParam1)
{
	if (func_40(iParam0) != 3)
	{
		return -1;
	}
	return func_46(iParam0, iParam1);
}

int func_46(int iParam0, int iParam1)
{
	return func_47(iParam1, Global_111638.f_1.f_73[iParam0].f_1, Global_111638.f_1.f_73[iParam0].f_2);
}

int func_47(int iParam0, int iParam1, int iParam2)
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

char* func_48(int iParam0)
{
	return func_49(3, iParam0);
}

char* func_49(int iParam0, int iParam1)
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

int func_50(int iParam0, int iParam1)
{
	return round(((to_float(func_52(iParam0, iParam1)) / to_float(func_51(iParam1))) * 100f));
}

int func_51(int iParam0)
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

int func_52(int iParam0, int iParam1)
{
	if (func_40(iParam0) != 2)
	{
		return -1;
	}
	return func_46(iParam0, iParam1);
}

char* func_53(int iParam0)
{
	return func_49(2, iParam0);
}

int func_54(int iParam0, int iParam1)
{
	return round(((to_float(func_56(iParam0, iParam1)) / to_float(func_55(iParam1))) * 100f));
}

int func_55(int iParam0)
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

int func_56(int iParam0, int iParam1)
{
	if (func_40(iParam0) != 1)
	{
		return -1;
	}
	return func_46(iParam0, iParam1);
}

char* func_57(int iParam0)
{
	return func_49(1, iParam0);
}

char* func_58(int iParam0)
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

char* func_59(int iParam0)
{
	return func_60(iParam0);
}

char* func_60(int iParam0)
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

void func_61(var uParam0, int iParam1)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x7E60D21B163E9D56();
}

void func_62(var uParam0, int iParam1, int iParam2)
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_94773[iParam1].f_18, iParam2))
	{
		if (!unk_0x7F8A39872A07D2CE(&(Global_94773[iParam1].f_7[iParam2]), ""))
		{
			func_24(uParam0, uParam0->f_1.f_276, Global_94773[iParam1].f_7[iParam2], 1);
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

void func_63(var uParam0)
{
	func_25(uParam0, &(uParam0->f_1.f_12), 45f);
	unk_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
	unk_0x3CAEA85DA607305E(99);
	unk_0x7E60D21B163E9D56();
	func_18(uParam0);
}

void func_64(var uParam0)
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

int func_65(int iParam0)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_205[iParam0];
}

int func_66(int iParam0)
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

void func_67(var uParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 1))
	{
		func_68(uParam0);
	}
}

void func_68(var uParam0)
{
	bVar0 = false;
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 2))
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (!func_150(0))
			{
				if (func_141(8))
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
				func_140(&(uParam0->f_451), 3, "PB_H_ENT", 0, 0, 0, 0);
			}
			else if (func_139(uParam0->f_451, 1))
			{
				func_137(&(uParam0->f_451));
				func_123(uParam0);
			}
		}
		else if (uParam0->f_451 != -1)
		{
			func_137(&(uParam0->f_451));
		}
	}
	else
	{
		bVar7 = func_10(1, *uParam0);
		func_79(uParam0);
		if (((!bVar7 && uParam0->f_453 > 15) && (unk_0xBFC0798A6E3417F9(2, iLocal_36) || unk_0xBFC0798A6E3417F9(2, 238))) || unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 8))
		{
			unk_0x0674E58A79778E99(&(uParam0->f_449), 8);
			func_69(uParam0, 0);
		}
	}
}

void func_69(var uParam0, bool bParam1)
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
	func_72(0);
	func_71();
	unk_0x17D339215F817B98();
	unk_0xA5E3ADAAA4CD5D6C(17);
	unk_0x911B98CDC647AC76(0);
	func_70(&(uParam0->f_649), 0, 1);
	func_13(&(uParam0->f_1.f_20[0]), 1);
	func_13(&(uParam0->f_1.f_20[1]), 1);
	func_13(&(uParam0->f_1.f_108[0]), 1);
	func_13(&(uParam0->f_1.f_108[1]), 1);
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
	func_64(uParam0);
	unk_0x0674E58A79778E99(&(uParam0->f_449), 7);
	unk_0x0674E58A79778E99(&(uParam0->f_449), 2);
	Global_94751 = 0;
}

void func_70(var uParam0, int iParam1, bool bParam2)
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

void func_71()
{
	Global_22211.f_5 = 0;
}

void func_72(bool bParam0)
{
	if (bParam0)
	{
		func_78();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			unk_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_150(0))
		{
			func_73(0);
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

void func_73(int iParam0)
{
	if (func_77())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_76())
		{
			func_75(1, 1);
		}
		else
		{
			func_75(0, 0);
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
	if (!func_74())
	{
		Global_19486.f_1 = 3;
	}
}

int func_74()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_75(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_150(0))
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

bool func_76()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_77()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_78()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_79(var uParam0)
{
	sVar0 = unk_0xE32F7AC5E6DF304A(0, 1, true);
	if (!unk_0x7F8A39872A07D2CE(sVar0, uParam0->f_466))
	{
		func_7(uParam0);
	}
	uParam0->f_466 = sVar0;
	func_121();
	func_109(uParam0);
	func_87(uParam0);
	if (uParam0->f_464 == 1)
	{
		func_84(uParam0);
	}
	if (func_20())
	{
		func_18(uParam0);
	}
	bVar1 = uParam0->f_454 > unk_0x1C0640BA9A7327B3();
	func_80(&(uParam0->f_649), unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 4), (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 5) && !bVar1), 1, 0, 1045220557, 1, 1065353216, 0);
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 7))
	{
		if ((!unk_0x22A8E52414415B76() && unk_0x0F1CCD77290EE12F()) && !unk_0x798A3F1296751F46())
		{
			if (uParam0->f_464 != 1)
			{
				if (uParam0->f_464 == 0 || (((!unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 11) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 10)) && !func_19()) && uParam0->f_483 == 0))
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

void func_80(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)
{
	unk_0xA2E3EDD0E119882F(2);
	func_83(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
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
		iVar0[2] = func_82((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_82((iVar0[3] + uParam0->f_25), -127, 127);
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
		uParam0->f_14 = (uParam0->f_14 + func_81(((((vVar10.x - uParam0->f_14) * 0,05f) * fVar9) * fParam7), -3f, 3f));
		uParam0->f_14.f_1 = (uParam0->f_14.f_1 + func_81(((((vVar10.y - uParam0->f_14.f_1) * 0,05f) * fVar9) * fParam7), -3f, 3f));
		uParam0->f_14.f_2 = (uParam0->f_14.f_2 + func_81(((((vVar10.z - uParam0->f_14.f_2) * 0,05f) * fVar9) * fParam7), -3f, 3f));
	}
	if (uParam0->f_26)
	{
		uParam0->f_14 = func_81(uParam0->f_14, to_float(-uParam0->f_21), to_float(uParam0->f_21));
		uParam0->f_14.f_1 = func_81(uParam0->f_14.f_1, to_float(-uParam0->f_22), to_float(uParam0->f_22));
		uParam0->f_14.f_2 = func_81(uParam0->f_14.f_2, to_float(-uParam0->f_20), to_float(uParam0->f_20));
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
				uParam0->f_17 = func_81(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), uParam0->f_7);
			}
			else
			{
				uParam0->f_17 = func_81(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), (uParam0->f_7 + uParam0->f_19));
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

float func_81(float fParam0, float fParam1, float fParam2)
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

int func_82(int iParam0, int iParam1, int iParam2)
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

void func_83(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
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

void func_84(var uParam0)
{
	if (!func_10(3, *uParam0))
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
							func_86(uParam0, iVar1);
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
					func_85(3, *uParam0, 1);
				}
			}
		}
	}
}

void func_85(int iParam0, int iParam1, bool bParam2)
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

void func_86(var uParam0, int iParam1)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
	unk_0x3CAEA85DA607305E(99);
	unk_0x7E60D21B163E9D56();
	func_25(uParam0, &(uParam0->f_1.f_371[iParam1]), uParam0->f_1.f_11);
	func_23(uParam0, iParam1 + 4, 1);
	uParam0->f_452 = -1;
}

void func_87(var uParam0)
{
	if ((!func_19() && unk_0x0F1CCD77290EE12F()) && !unk_0x22A8E52414415B76())
	{
		if (uParam0->f_483 > 0)
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 13))
			{
				if (func_88(&(uParam0->f_484), &(uParam0->f_467[0]), &(uParam0->f_467[0].f_2), 4, 0, 0, 0))
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

bool func_88(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_108(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_89(sParam2, iParam3, 0);
}

int func_89(char* sParam0, int iParam1, bool bParam2)
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
					func_107();
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
		if (func_106(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_105();
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
				func_98();
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
				if (func_97())
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
			if (func_74())
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
			func_96();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_95();
		func_90();
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
		func_107();
	}
	return 0;
}

void func_90()
{
	if (!func_91())
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

int func_91()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_94())
	{
		return 0;
	}
	if (func_92(unk_0xD803B885F5E47A62()))
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

bool func_92(int iParam0)
{
	return func_93(iParam0, 20);
}

bool func_93(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_94()
{
	return -1;
}

void func_95()
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

void func_96()
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

int func_97()
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

void func_98()
{
	if (func_295(14))
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
		Global_19486 = func_99();
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

int func_99()
{
	func_100();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_100()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_103(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_102(unk_0x16F2683693E537C9());
			if (func_101(iVar0) && (!func_295(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_101(Global_111638.f_2358.f_539.f_4321))
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

bool func_101(int iParam0)
{
	return iParam0 < 3;
}

int func_102(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_103(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_103(int iParam0)
{
	if (func_101(iParam0))
	{
		return func_104(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_104(int iParam0)
{
	return Global_1798[iParam0];
}

void func_105()
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

bool func_106(int iParam0, int iParam1)
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

void func_107()
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

void func_108(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_109(var uParam0)
{
	uParam0->f_453++;
	if (unk_0xB8E3620B82AD47D7(2))
	{
		func_7(uParam0);
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 11))
	{
		if ((unk_0xBFC0798A6E3417F9(2, iLocal_37) || unk_0xBFC0798A6E3417F9(2, iLocal_39)) || (unk_0x91E3F625EF57450D(2) && (unk_0xBFC0798A6E3417F9(2, iLocal_38) || unk_0xBFC0798A6E3417F9(2, iLocal_40))))
		{
			func_119();
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 12))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_449), 13);
				unk_0x0674E58A79778E99(&(uParam0->f_449), 11);
				unk_0x0674E58A79778E99(&(uParam0->f_449), 10);
			}
			unk_0x0674E58A79778E99(&(uParam0->f_449), 12);
		}
	}
	func_83(&(uParam0->f_458[0]), &(uParam0->f_458[1]), &(uParam0->f_458[2]), &(uParam0->f_458[3]), 0, 0);
	if (unk_0x91E3F625EF57450D(2))
	{
		uParam0->f_458[2] = (uParam0->f_458[2] / 10);
		uParam0->f_458[3] = (uParam0->f_458[3] / 10);
		uParam0->f_458[2] = func_82((uParam0->f_458[2] + uParam0->f_649.f_24), -127, 127);
		uParam0->f_458[3] = func_82((uParam0->f_458[3] + uParam0->f_649.f_25), -127, 127);
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
						func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[3], 1);
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
							func_7(uParam0);
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
							func_7(uParam0);
						}
						uParam0->f_456 = unk_0x1C0640BA9A7327B3();
						uParam0->f_457 = uParam0->f_456;
					}
				}
				if (!func_19() || unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 13))
				{
					if (unk_0xBFC0798A6E3417F9(2, iLocal_37) || (unk_0x91E3F625EF57450D(2) && unk_0xBFC0798A6E3417F9(2, iLocal_38)))
					{
						switch (uParam0->f_464)
						{
							case 3:
								if (!func_19())
								{
									if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 9))
									{
										uParam0->f_456 = unk_0x1C0640BA9A7327B3();
										iVar0 = func_30(*uParam0);
										if (iVar0 != -1)
										{
											unk_0x7E60C62A7CE58FC8(uParam0->f_413, "GET_CURRENT_SELECTION");
											uParam0->f_680 = unk_0x7A8BB56B212464AC();
											func_11(uParam0, 1);
											func_13(&(uParam0->f_1.f_20[0]), 1);
											func_13(&(uParam0->f_1.f_20[1]), 1);
											Global_111638.f_1[*uParam0] = 1;
											unk_0xA37A90C62806D848(0);
										}
									}
								}
								break;
							
							case 2:
								if (!func_10(4, *uParam0))
								{
									iVar0 = func_30(*uParam0);
									iVar1 = func_65(iVar0);
									if (uParam0->f_450 < Global_94773[iVar1])
									{
										unk_0x7E60C62A7CE58FC8(uParam0->f_413, "GET_CURRENT_SELECTION");
										uParam0->f_681 = unk_0x7A8BB56B212464AC();
										func_11(uParam0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									func_85(4, *uParam0, 1);
									if (!func_118(0))
									{
										func_116(*uParam0);
									}
								}
								else
								{
									func_85(5, *uParam0, 1);
								}
								unk_0x4D7F4CC43D4D0DE3(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iVar0 = func_30(*uParam0);
								iVar1 = func_65(iVar0);
								iVar2 = 0;
								while (iVar2 < Global_94773[iVar1])
								{
									if (Global_111638.f_1.f_12[iVar1][iVar2] == 0 || func_40(Global_111638.f_1.f_12[iVar1][iVar2]) != Global_94773[iVar1].f_1[iVar2])
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
													if (func_37(uParam0, iVar3))
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
								func_11(uParam0, 1);
								func_62(uParam0, iVar1, 4);
								break;
						}
						uParam0->f_427 = 0;
					}
					if (unk_0xBFC0798A6E3417F9(2, iLocal_39) || (unk_0x91E3F625EF57450D(2) && unk_0xBFC0798A6E3417F9(2, iLocal_40)))
					{
						switch (uParam0->f_464)
						{
							case 2:
								iVar0 = func_30(*uParam0);
								iVar1 = func_65(iVar0);
								if (uParam0->f_450 > 0)
								{
									func_11(uParam0, 1);
									uParam0->f_450 = (uParam0->f_450 - 1);
									uParam0->f_417 = uParam0->f_450;
									iVar6 = Global_111638.f_1.f_12[iVar1][uParam0->f_450];
									Global_111638.f_1.f_12[iVar1][uParam0->f_450] = 0;
									uParam0->f_465 = Global_94773[iVar1].f_1[uParam0->f_450];
									func_35(uParam0, uParam0->f_450, iVar6);
									unk_0x4D7F4CC43D4D0DE3(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
									uParam0->f_427 = 0;
									uParam0->f_456 = unk_0x1C0640BA9A7327B3();
								}
								else if (!func_296(0))
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
												func_115(*uParam0, uParam0->f_1.f_30[iVar7], 0);
											}
											iVar7++;
										}
										uParam0->f_427 = 0;
										func_11(uParam0, 1);
										uParam0->f_456 = unk_0x1C0640BA9A7327B3();
										uParam0->f_465 = 0;
										func_114(0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									iVar0 = func_30(*uParam0);
									iVar1 = func_65(iVar0);
									uParam0->f_450 = (uParam0->f_450 - 1);
									uParam0->f_417 = uParam0->f_450;
									iVar8 = Global_111638.f_1.f_12[iVar1][uParam0->f_450];
									Global_111638.f_1.f_12[iVar1][uParam0->f_450] = 0;
									uParam0->f_465 = Global_94773[iVar1].f_1[uParam0->f_450];
									func_5(uParam0, 2, iVar8);
								}
								else
								{
									iVar9 = 0;
									while (iVar9 < 2)
									{
										if (uParam0->f_1.f_30[iVar9] != 13)
										{
											func_115(*uParam0, uParam0->f_1.f_30[iVar9], 0);
										}
										iVar9++;
									}
									func_113(8, 0);
									func_85(5, 1, 0);
									uParam0->f_427 = 0;
									func_11(uParam0, 1);
									uParam0->f_456 = unk_0x1C0640BA9A7327B3();
									func_5(uParam0, 3, 0);
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
		iVar0 = func_30(*uParam0);
		iVar1 = func_65(iVar0);
		if (uParam0->f_450 >= Global_94773[iVar1] || (*uParam0 == 1 && uParam0->f_450 > uParam0->f_415))
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
			unk_0x3CAEA85DA607305E(99);
			unk_0x3CAEA85DA607305E(-1);
			unk_0x7E60D21B163E9D56();
			func_23(uParam0, 0, 1);
			func_5(uParam0, 4, 0);
		}
		else
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 17))
			{
				iVar10 = Global_111638.f_1.f_12[iVar1][uParam0->f_450];
				Global_111638.f_1.f_12[iVar1][uParam0->f_450] = 0;
				uParam0->f_465 = Global_94773[iVar1].f_1[uParam0->f_450];
				func_35(uParam0, uParam0->f_450, iVar10);
			}
			unk_0x0674E58A79778E99(&(uParam0->f_449), 17);
		}
		uParam0->f_457 = unk_0x1C0640BA9A7327B3();
		unk_0x0674E58A79778E99(&(uParam0->f_449), 10);
	}
	else if (unk_0xFEBC1E4EC9E001F0())
	{
		if (((!func_12(&(uParam0->f_1.f_108[0])) && !func_12(&(uParam0->f_1.f_108[1]))) && !func_12(&(uParam0->f_1.f_20[0]))) && !func_12(&(uParam0->f_1.f_20[1])))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
	if (uParam0->f_680 != 0)
	{
		if (unk_0xC95D7AEEDEF4946B(uParam0->f_680))
		{
			iVar11 = unk_0xA52833FE33F41C53(uParam0->f_680);
			iVar1 = func_29(*uParam0, iVar11);
			iVar0 = func_30(*uParam0);
			func_113(iVar0, iVar1);
			if (!func_118(0))
			{
				func_112(*uParam0);
			}
			unk_0x4D7F4CC43D4D0DE3(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_62(uParam0, iVar1, 0);
			if (uParam0->f_1.f_30[iVar11] != 13)
			{
				func_115(*uParam0, uParam0->f_1.f_30[iVar11], 1);
			}
			iVar12 = 0;
			while (iVar12 < uParam0->f_1.f_96)
			{
				func_61(uParam0, iVar12);
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
				func_85(5, *uParam0, 1);
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
			iVar0 = func_30(*uParam0);
			iVar1 = func_65(iVar0);
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
			func_111(uParam0, iVar14);
			uParam0->f_450++;
			uParam0->f_417 = uParam0->f_450;
			uParam0->f_456 = unk_0x1C0640BA9A7327B3();
			uParam0->f_457 = uParam0->f_456;
			unk_0x5D96D8530B3D0904(&(uParam0->f_449), 10);
			if (!func_12(&(uParam0->f_1.f_108[0])) && !func_12(&(uParam0->f_1.f_108[1])))
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
		func_110(uParam0, uParam0->f_427);
	}
}

void func_110(var uParam0, int iParam1)
{
	if (!func_19())
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
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[14], 1);
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
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[16], 1);
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
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[15], 1);
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
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[17], 1);
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

void func_111(var uParam0, int iParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_463, iParam1))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_119, iParam1))
		{
			if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_304[iParam1]), ""))
			{
				func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[iParam1], 1);
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
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18], 1);
							}
							break;
						
						case 10:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 1))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18], 1);
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
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24], 1);
							}
							break;
						
						case 9:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 6))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26], 1);
							}
							break;
						
						case 1:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 0))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 7))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18], 1);
								}
							}
							else if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 7))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19], 1);
							}
							break;
						
						case 10:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 1))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 8))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18], 1);
								}
							}
							else if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 8))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19], 1);
							}
							break;
						
						case 6:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 4))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18], 1);
							}
							break;
						
						case 7:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 2))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18], 1);
							}
							break;
						
						case 8:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 5))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18], 1);
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
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[25], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24], 1);
								}
							}
							break;
						
						case 7:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 2))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 14))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[30], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[28], 1);
								}
							}
							else if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 14))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[29], 1);
							}
							break;
						
						case 9:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 18))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 6))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[27], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26], 1);
								}
							}
							break;
						
						case 4:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 17))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31], 1);
							}
							break;
						
						case 5:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 12))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31], 1);
							}
							break;
						
						case 1:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 10))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 0))
								{
									if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 7))
									{
										func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23], 1);
									}
									else
									{
										func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22], 1);
									}
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20], 1);
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
										func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23], 1);
									}
									else
									{
										func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22], 1);
									}
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20], 1);
								}
							}
							break;
						
						case 3:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 13))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20], 1);
							}
							break;
						
						case 6:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 19))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 4))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20], 1);
								}
							}
							break;
						
						case 8:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 16))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 5))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20], 1);
								}
							}
							break;
						
						case 13:
							if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 20))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20], 1);
							}
							break;
					}
					break;
				}
		}
		unk_0x5D96D8530B3D0904(&(uParam0->f_463), iParam1);
	}
}

void func_112(int iParam0)
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

void func_113(int iParam0, int iParam1)
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

void func_114(int iParam0, int iParam1)
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

void func_115(int iParam0, int iParam1, bool bParam2)
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

bool func_118(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

void func_119()
{
	Global_19671 = 0;
	func_120();
}

void func_120()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_121()
{
	unk_0xC2127C0F64D6A3B9();
	func_122();
}

void func_122()
{
	Global_22211.f_134 = 1;
}

void func_123(var uParam0)
{
	uParam0->f_453 = 0;
	uParam0->f_463 = 0;
	unk_0x5D96D8530B3D0904(&(uParam0->f_449), 9);
	func_11(uParam0, 0);
	if (!unk_0x22A8E52414415B76())
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (Global_42596 == 1)
			{
				func_128(unk_0x16F2683693E537C9());
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
	func_72(1);
	func_127();
	unk_0x56FCE5C6DA4AA600();
	unk_0x536F1BE96C726C4B(uParam0->f_401, 5f, 1, 1, 0, false);
	unk_0xD7AD2803AD9697F7(uParam0->f_401, 5f);
	unk_0x911B98CDC647AC76(1);
	unk_0xD02CE72B4B66DC29(82, 66);
	unk_0x744B56EE9DE7B57F(17, 0,612f, 0,818f);
	unk_0xD59EF13BB60323B9();
	func_126(&(uParam0->f_649), uParam0->f_405, uParam0->f_408, 45f, 18, 13, 3, uParam0->f_1.f_9, 0, 0, -1082130432, 0);
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
	func_125(0);
	func_124();
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
	func_6(uParam0, uParam0->f_464, 0);
}

void func_124()
{
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		func_15(iVar0);
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

void func_125(bool bParam0)
{
	if (!bParam0)
	{
		Global_110280 = unk_0x1C0640BA9A7327B3() + 250;
	}
	Global_110277 = bParam0;
}

void func_126(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, int iParam8, int iParam9, int iParam10, var uParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
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

void func_127()
{
	Global_22211.f_5 = 1;
}

void func_128(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return;
	}
	iVar0 = func_136(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_42383[iVar0];
		func_131(1, iVar1, 1);
		return;
	}
	iVar2 = func_130(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_129(iVar2);
}

void func_129(int iParam0)
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

int func_130(int iParam0)
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

void func_131(int iParam0, int iParam1, int iParam2)
{
	func_132(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_132(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_134(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_133();
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

int func_133()
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

int func_134(int iParam0, int iParam1, int iParam2)
{
	if (func_135(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_135(int iParam0, int iParam1, int iParam2)
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

int func_136(int iParam0)
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

void func_137(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_138(*uParam0);
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

int func_138(int iParam0)
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

int func_139(int iParam0, bool bParam1)
{
	iVar0 = func_138(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 0;
	}
	if (func_150(0))
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

void func_140(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (unk_0x8A22C4C08282BF26(1974937116) < 1)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*uParam0 == -1)
		{
			func_137(uParam0);
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

int func_141(int iParam0)
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_99();
				if (!func_101(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_149()) || Global_110685) || Global_30770) || func_148()) || func_106(8, -1)) || func_147()) || func_146()) || func_145()) || func_144()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1) || func_149()) || Global_30770) || func_148()) || func_106(8, -1)) || func_145()) || func_147()) || func_146()) || func_144()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_149()) || Global_110685) || Global_30770) || func_148()) || func_106(8, -1)) || func_145()) || func_147()) || func_146()) || func_144()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_149()) || Global_110685) || Global_30770) || func_148()) || func_106(8, -1)) || func_147()) || func_146()) || func_144()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_149() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0) || func_106(8, -1)) || func_144()) || func_143()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_106(8, -1) || func_147()) || func_146()) || func_143()) || func_142())
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
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_149()) || Global_30770) || func_148()) || func_106(8, -1)) || func_146()) || func_145()) || func_144()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || func_149()) || func_146()) || Global_110685) || Global_30770) || func_148()) || Global_42596) || func_106(8, -1)) || func_145()) || func_143()) || func_144()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_149()) || Global_110685) || Global_30770) || func_148()) || func_106(8, -1)) || func_145()) || func_143()) || func_147()) || func_146()) || func_144())
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

var func_142()
{
	return Global_98783.f_1;
}

int func_143()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666].f_15, 13);
	}
	return 0;
}

int func_144()
{
	if (unk_0x8A22C4C08282BF26(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

int func_145()
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

bool func_146()
{
	return Global_98796.f_346 > 0;
}

bool func_147()
{
	return Global_98796.f_345 > 0;
}

var func_148()
{
	return Global_1312877;
}

int func_149()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_150(int iParam0)
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

bool func_151(int iParam0)
{
	return func_152(iParam0, Global_41431);
}

int func_152(int iParam0, int iParam1)
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

void func_153()
{
	if (func_296(39))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 10))
		{
			unk_0xAE1670DD12E839C3("RBHS_MSC_3_P3", 8);
			unk_0x523BCC9DC80CD82F(-1686040670);
			unk_0x3F423BF5B8125A50("MISSHEISTPALETOSCORE1LEADINOUT");
			unk_0x9E5E60D8C63FD9D1();
			unk_0x5D96D8530B3D0904(&iLocal_41, 10);
		}
		else if (unk_0x75EECC9B0572F772())
		{
			unk_0x7656EB524FEAB9B3("LESTER", 0, 0, 0, 0);
			unk_0x7656EB524FEAB9B3("LESTER", 2, 0, 0, 0);
			unk_0x7656EB524FEAB9B3("LESTER", 3, 0, 1, 0);
			unk_0x7656EB524FEAB9B3("LESTER", 4, 1, 1, 0);
			unk_0x7656EB524FEAB9B3("LESTER", 5, 0, 0, 0);
			unk_0x7656EB524FEAB9B3("LESTER", 7, 0, 0, 0);
			unk_0x7656EB524FEAB9B3("LESTER", 8, 1, 0, 0);
			unk_0xA2888AACD3C45CCA("LESTER", 1, 0, 0, 0);
		}
	}
	if (func_296(40))
	{
		if (func_296(39))
		{
			if (((unk_0x62A1F4500E8F07E0() && unk_0xB87F6CF6E5628C67(-1686040670)) && unk_0xB4AE0788C1587752("MISSHEISTPALETOSCORE1LEADINOUT")) && unk_0x25F7A4D42AF2AB93())
			{
				if (!unk_0x437347B10A200C4B(iLocal_128, 0))
				{
					unk_0x29E8331978B73E7F(iLocal_128, "LESTER", 1, 0, 0);
				}
				if (!unk_0x437347B10A200C4B(iLocal_129, 0))
				{
					unk_0x29E8331978B73E7F(iLocal_129, "MICHAEL", 0, 225514697, 0);
				}
				if (!unk_0x437347B10A200C4B(iLocal_132[2], 0))
				{
					unk_0x29E8331978B73E7F(iLocal_132[2], "TREVOR", 0, -1686040670, 0);
				}
				func_125(1);
				func_72(1);
				func_263(1, 1, 1, 0, 0, 0);
				iLocal_42 = -1;
				if (func_99() == 2)
				{
					bLocal_131 = true;
				}
				else
				{
					bLocal_131 = false;
				}
				unk_0x4C902758BEA97C68(2048);
				if (func_118(0))
				{
					unk_0xFCA2A436FD40C153(0, 0, 0, 0);
				}
				unk_0xAE317D00A5A55DF6("Taxi_vomit", false, -1);
				func_114(39, 0);
			}
		}
		else if (unk_0x22A8E52414415B76())
		{
			func_121();
			if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 18))
			{
				if (!unk_0x437347B10A200C4B(iLocal_129, 0))
				{
					unk_0x4A4806F9D471E491(iLocal_129, true, 0);
				}
				if (!unk_0x437347B10A200C4B(iLocal_128, 0))
				{
					unk_0x4A4806F9D471E491(iLocal_128, true, 0);
				}
				if (unk_0xC844350D5D58C99A(iLocal_132[2]))
				{
					unk_0x4A4806F9D471E491(iLocal_132[2], true, 0);
				}
				unk_0x0674E58A79778E99(&iLocal_41, 18);
			}
			if (!unk_0x9F4FE516EAACCFC5(iLocal_127))
			{
				iLocal_127 = unk_0xAE06CCC36C49929C(26379945, 1398,167f, 3605,438f, 39,6443f, -8,2882f, 0f, 126,8884f, 50f, 1, 2);
			}
			unk_0x2FB9A57162E54BAB(0f);
			unk_0xEF6276132B396452(0f, 1065353216);
			if (unk_0xC844350D5D58C99A(unk_0x6450C2A9FBA3C3BF("Trevor", 0)))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 7))
				{
					iLocal_132[2] = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("Trevor", 0));
					unk_0x5D96D8530B3D0904(&iLocal_41, 7);
				}
			}
			if (unk_0x3148AE92ED70DC30("Trevor", 0))
			{
				if (func_99() != 2)
				{
					if (func_258(&iLocal_132, 2))
					{
						func_196(&iLocal_132, 0, 0, 0);
					}
				}
				unk_0x71199B01895C6202(-1686040670);
				if (!func_118(0))
				{
					unk_0x8BC9595FD2792B5D("PS_1_TREVOR_PUKING");
					vVar0 = { 1391,81f, 3614,606f, 37,97f };
					unk_0xE82754C349C7B581(vVar0, &(vVar0.f_2), 0, 0);
					unk_0xDD353D0E9C789D0E(&uVar3);
					unk_0x3E8E48829F3C7624(0, "MISSHEISTPALETOSCORE1LEADINOUT", "TRV_PUKING_LEADOUT", 1396,911f, 3603,942f, 38,925f, 0f, 0f, 108f, 1000f, -4f, -1, 0, 0f, 2, 0);
					unk_0x75ABDC5F81978924(uVar3);
					unk_0x78ADC381772E3D54(unk_0x16F2683693E537C9(), uVar3);
					unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
					unk_0x5D96D8530B3D0904(&iLocal_41, 11);
					iLocal_130 = 0;
				}
				else
				{
					unk_0x0674E58A79778E99(&iLocal_41, 11);
					unk_0x0674E58A79778E99(&iLocal_41, 17);
				}
			}
			if (unk_0xEABED1927EFB48CA(1))
			{
				if (!func_118(0))
				{
					unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
				}
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
				if (unk_0xC844350D5D58C99A(iLocal_128))
				{
					unk_0xEBA53F35D0085654(&iLocal_128);
				}
				if (unk_0xC844350D5D58C99A(iLocal_129))
				{
					unk_0xEBA53F35D0085654(&iLocal_129);
				}
				func_195(15000);
				unk_0xF99F2927BEBB5EE7(6);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 11))
		{
			unk_0x38C3A68D7861DCFD(2, 19, 1);
			unk_0x38C3A68D7861DCFD(0, 28, 1);
			unk_0x38C3A68D7861DCFD(0, 29, 1);
			unk_0x38C3A68D7861DCFD(0, 171, 1);
			unk_0x38C3A68D7861DCFD(0, 36, 1);
			unk_0x38C3A68D7861DCFD(0, 37, 1);
			unk_0x38C3A68D7861DCFD(0, 44, 1);
			unk_0x38C3A68D7861DCFD(0, 45, 1);
			unk_0x38C3A68D7861DCFD(0, 55, 1);
			unk_0x38C3A68D7861DCFD(0, 21, 1);
			unk_0x38C3A68D7861DCFD(0, 23, 1);
			unk_0x38C3A68D7861DCFD(0, 24, 1);
			unk_0x38C3A68D7861DCFD(0, 22, 1);
			if (unk_0x6C3F127AAF415E69() == 4)
			{
				unk_0x38C3A68D7861DCFD(0, 31, 1);
				unk_0x38C3A68D7861DCFD(0, 30, 1);
				unk_0x38C3A68D7861DCFD(0, 2, 1);
				unk_0x38C3A68D7861DCFD(0, 1, 1);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(-56f, 1065353216);
			}
			unk_0x3FC8DBCC154CA56B();
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 12))
				{
					func_194(&(Local_176.f_484), 2, unk_0x16F2683693E537C9(), "TREVOR", 1, 1);
					if (func_88(&(Local_176.f_484), "RBS1AUD", "RBS1_VOMIT", 8, 0, 0, 0))
					{
						unk_0x5D96D8530B3D0904(&iLocal_41, 12);
					}
				}
				if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "MISSHEISTPALETOSCORE1LEADINOUT", "TRV_PUKING_LEADOUT", 3))
				{
					fVar4 = unk_0x8CA9406E01C7EE58(unk_0x16F2683693E537C9(), "MISSHEISTPALETOSCORE1LEADINOUT", "TRV_PUKING_LEADOUT");
					if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
					{
						unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
					}
					if (fVar4 < 1f && fVar4 >= 0f)
					{
						if (fVar4 > 0,092f && fVar4 < 0,184f)
						{
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 13))
							{
								if (iLocal_130 == 0)
								{
									iLocal_130 = unk_0xAD0C28B6B04D50A9("SCR_TREV_PUKE", unk_0x16F2683693E537C9(), 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1f, 0, 0, 0);
									unk_0x5D96D8530B3D0904(&iLocal_41, 13);
									if (!bLocal_131)
									{
										unk_0xAD0BE1C0ACB8B780(3);
									}
									unk_0xB3A1B75CB59FEB56(false, true, 1000, 1, 0, 0);
									if (unk_0x9F4FE516EAACCFC5(iLocal_127))
									{
										unk_0x9A8DDC7C522F5BF5(iLocal_127, 0);
									}
								}
							}
						}
						else if (fVar4 > 0,22f && fVar4 < 0,3f)
						{
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 14))
							{
								if (iLocal_130 == 0)
								{
									iLocal_130 = unk_0xAD0C28B6B04D50A9("SCR_TREV_PUKE", unk_0x16F2683693E537C9(), 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1f, 0, 0, 0);
									unk_0x5D96D8530B3D0904(&iLocal_41, 14);
								}
							}
						}
						else if (fVar4 > 0,34f && fVar4 < 0,36f)
						{
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 15))
							{
								if (iLocal_130 == 0)
								{
									iLocal_130 = unk_0xAD0C28B6B04D50A9("SCR_TREV_PUKE", unk_0x16F2683693E537C9(), 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1f, 0, 0, 0);
									unk_0x5D96D8530B3D0904(&iLocal_41, 15);
								}
							}
						}
						else if (fVar4 > 0,4222f && fVar4 < 0,516f)
						{
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 16))
							{
								if (iLocal_130 == 0)
								{
									iLocal_130 = unk_0xAD0C28B6B04D50A9("SCR_TREV_PUKE", unk_0x16F2683693E537C9(), 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1f, 0, 0, 0);
									unk_0x5D96D8530B3D0904(&iLocal_41, 16);
								}
							}
						}
						else if (unk_0x83A8177D302E1A7E(iLocal_130))
						{
							unk_0xF7E25143642732EA(iLocal_130, 0);
							iLocal_130 = 0;
						}
						if (fVar4 > 0,98f)
						{
							unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
							if (unk_0x6C3F127AAF415E69() == 4)
							{
								unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "MISSHEISTPALETOSCORE1LEADINOUT", "TRV_UPPERBODY_LeadOut_FPS", 4f, -1,5f, -1, 48, 0, 0, 0, 0);
							}
							else
							{
								unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "MISSHEISTPALETOSCORE1LEADINOUT", "TRV_UPPERBODY_LEADOUT", 4f, -1,5f, -1, 48, 0, 0, 0, 0);
							}
							if (unk_0x562F77A7F33D2E46("PS_1_TREVOR_PUKING"))
							{
								unk_0x8910D3D58E0132B8("PS_1_TREVOR_PUKING");
							}
						}
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 16))
				{
					unk_0x0674E58A79778E99(&iLocal_41, 11);
				}
			}
		}
		else if (iLocal_42 == -1)
		{
			func_263(0, 1, 1, 0, 0, 0);
			unk_0x8D17794CE3273D70("MISSHEISTPALETOSCORE1LEADINOUT");
			unk_0x29D7581AEF4440C2();
			if (func_118(0))
			{
				unk_0x53491B90E4FD0E56(0);
				iLocal_42 = 0;
			}
			else
			{
				iLocal_42 = unk_0x1C0640BA9A7327B3() + 1000;
			}
		}
		else if (unk_0x1C0640BA9A7327B3() > iLocal_42)
		{
			if (!func_118(0))
			{
				Global_61512 = 0;
				Global_98783 = 0;
				func_193();
			}
			func_72(0);
			func_191(&(Global_111638.f_2358.f_539), 91);
			func_163(&(Global_111638.f_2358.f_539), 91);
			if (unk_0xC844350D5D58C99A(iLocal_46))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_46, 0))
				{
					unk_0x2E81FA494A883541(iLocal_46, 0, true);
				}
			}
			func_162(&iLocal_44);
			unk_0x0674E58A79778E99(&iLocal_41, 1);
			unk_0x2952D66A502EA873(iLocal_125, 0);
			if (iLocal_126 != -1)
			{
				if (unk_0x49083FDB78AC0509(iLocal_126))
				{
					unk_0xDDABC98CFF1A4C60(iLocal_126);
				}
			}
			unk_0xEFED0CD6E25037B9();
			unk_0x17E8C6920A1E386F(Local_176.f_1.f_394 - Local_176.f_1.f_397, Local_176.f_1.f_394 + Local_176.f_1.f_397, true, 0);
			unk_0x34D79252800B23FF(5);
			func_155(2, 0);
			func_154(24);
			func_114(40, 0);
		}
	}
	else if (!func_296(39))
	{
		if (unk_0xA0F4292EA950943D("RBHS_MSC_3_P3"))
		{
			unk_0x5C8D148FC238F38A();
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "MISSHEISTPALETOSCORE1LEADINOUT", "TRV_UPPERBODY_LEADOUT", 3) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "MISSHEISTPALETOSCORE1LEADINOUT", "TRV_UPPERBODY_LeadOut_FPS", 3))
		{
			iLocal_43 = unk_0x1C0640BA9A7327B3() + 4000;
		}
	}
	if (unk_0x1C0640BA9A7327B3() < iLocal_43)
	{
		if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
		}
		unk_0x38C3A68D7861DCFD(2, 19, 1);
		unk_0x38C3A68D7861DCFD(0, 28, 1);
		unk_0x38C3A68D7861DCFD(0, 29, 1);
		unk_0x38C3A68D7861DCFD(0, 171, 1);
		unk_0x38C3A68D7861DCFD(0, 36, 1);
		unk_0x38C3A68D7861DCFD(0, 37, 1);
		unk_0x38C3A68D7861DCFD(0, 44, 1);
		unk_0x38C3A68D7861DCFD(0, 45, 1);
		unk_0x38C3A68D7861DCFD(0, 55, 1);
		unk_0x38C3A68D7861DCFD(0, 21, 1);
		unk_0x38C3A68D7861DCFD(0, 23, 1);
		unk_0x38C3A68D7861DCFD(0, 24, 1);
		unk_0x38C3A68D7861DCFD(0, 22, 1);
	}
}

void func_154(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	Global_75441[iParam0] = 0;
	Global_75441.f_69[iParam0] = 0;
}

void func_155(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		iVar1 = iVar0;
		if (func_39(iVar1) || func_38(iVar1))
		{
			if (!(iVar1 == 11 && iParam0 == 3))
			{
				switch (iVar1)
				{
					case 1:
						func_159(4, 1);
						break;
					
					case 4:
						func_159(8, 1);
						break;
					
					case 6:
						func_159(10, 1);
						break;
					
					case 7:
						func_159(1, 1);
						break;
					
					case 8:
						func_159(3, 1);
						break;
					
					case 9:
						func_159(6, 1);
						break;
					
					case 10:
						func_159(9, 1);
						break;
					
					case 12:
						func_159(11, 1);
						break;
					
					case 13:
						func_159(12, 1);
						break;
					
					case 11:
						if (func_158(91))
						{
							func_159(0, 1);
						}
						break;
					
					case 5:
						if (func_158(91))
						{
							func_159(2, 1);
						}
						break;
					
					case 3:
						if (func_158(67))
						{
							func_159(5, 1);
						}
						break;
					
					case 2:
						if (func_158(77))
						{
							func_159(7, 1);
						}
						break;
					}
				}
		}
		iVar0++;
	}
	if (!func_39(10) && unk_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[4], 0))
	{
		func_159(9, 1);
	}
	if (!func_39(13) && unk_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[16], 0))
	{
		func_159(12, 1);
	}
	if (!func_39(12))
	{
		if (iParam0 == 4)
		{
			func_159(11, 1);
		}
	}
	if (!bParam1)
	{
		if (!func_157(69))
		{
			func_21("DI_HLP_HST", 2, 0, 20000, 10000, 7, 0, 209, 0);
		}
		func_156("DI_FEED_HST");
	}
}

void func_156(char* sParam0)
{
	unk_0x1E64CE678ED5F61E("");
	unk_0x49E52B24E5A757B3("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

int func_157(int iParam0)
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

int func_158(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_330[iParam0];
}

void func_159(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!func_161(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_26429.f_1), iVar0);
			if (!bParam1)
			{
				func_156(func_160(iParam0));
			}
		}
	}
}

char* func_160(int iParam0)
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

int func_161(int iParam0)
{
	if (iParam0 != -1 && iParam0 != 13)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_26429.f_1, iParam0);
	}
	return 0;
}

void func_162(int iParam0)
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

void func_163(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 17:
			func_164(uParam0, 0, 12);
			break;
		
		case 19:
			func_164(uParam0, 1, 13);
			break;
		
		case 29:
			func_164(uParam0, 1, 14);
			break;
		
		case 30:
			func_164(uParam0, 2, 15);
			func_164(uParam0, 1, 29);
			break;
		
		case 32:
			func_164(uParam0, 1, 16);
			func_164(uParam0, 0, 17);
			break;
		
		case 39:
			func_164(uParam0, 0, 21);
			func_164(uParam0, 1, 20);
			break;
		
		case 31:
			func_164(uParam0, 0, 18);
			break;
		
		case 20:
			func_164(uParam0, 2, 22);
			break;
		
		case 66:
			func_164(uParam0, 1, 23);
			break;
		
		case 68:
			func_164(uParam0, 1, 24);
			break;
		
		case 70:
			func_164(uParam0, 1, 67);
			break;
		
		case 8:
			func_164(uParam0, 1, 25);
			func_164(uParam0, 2, 26);
			break;
		
		case 67:
			func_164(uParam0, 1, 27);
			break;
		
		case 9:
			func_164(uParam0, 2, 28);
			break;
		
		case 38:
			func_164(uParam0, 2, 30);
			func_164(uParam0, 1, 19);
			break;
		
		case 83:
			func_164(uParam0, 2, 33);
			break;
		
		case 45:
			func_164(uParam0, 1, 35);
			break;
		
		case 64:
			func_164(uParam0, 0, 36);
			func_164(uParam0, 1, 37);
			break;
		
		case 91:
			func_164(uParam0, 0, 41);
			break;
		
		case 42:
			func_164(uParam0, 0, 58);
			Global_98148[0] = 0;
			func_164(uParam0, 2, 59);
			Global_98148[2] = 0;
			break;
		
		case 41:
			func_164(uParam0, 1, 42);
			func_164(uParam0, 2, 42);
			break;
		
		case 15:
			func_164(uParam0, 0, 46);
			func_164(uParam0, 1, 47);
			break;
		
		case 16:
			func_164(uParam0, 0, 48);
			break;
		
		case 48:
			func_164(uParam0, 1, 50);
			func_164(uParam0, 2, 51);
			break;
		
		case 74:
			func_164(uParam0, 0, 52);
			func_164(uParam0, 1, 66);
			break;
		
		case 76:
			func_164(uParam0, 1, 53);
			func_164(uParam0, 2, 54);
			func_164(uParam0, 0, 62);
			break;
		
		case 75:
			func_164(uParam0, 0, 61);
			func_164(uParam0, 1, 31);
			break;
		
		case 69:
			func_164(uParam0, 1, 63);
			break;
		
		case 84:
			func_164(uParam0, 0, 68);
			func_164(uParam0, 2, 69);
			break;
		
		case 85:
			func_164(uParam0, 0, 64);
			func_164(uParam0, 2, 65);
			break;
		
		case 93:
			func_164(uParam0, 1, 38);
			func_164(uParam0, 2, 39);
			break;
		
		case 11:
			func_164(uParam0, 2, 55);
			break;
		
		case 77:
			func_164(uParam0, 1, 56);
			func_164(uParam0, 2, 57);
			break;
		
		default:
			break;
	}
}

int func_164(var uParam0, int iParam1, int iParam2)
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
	uParam0->f_2296[iParam1] = func_180();
	if (!func_179(iParam2, &(uParam0->f_2300[iParam1]), &(uParam0->f_2310[iParam1])))
	{
		return 0;
	}
	if (!func_178(uParam0->f_2300[iParam1], 0f, 0f, 0f, 0))
	{
		if (!func_178(Global_97183[iParam2], 0f, 0f, 0f, 0))
		{
			Var1.f_11 = 12;
			Var1.f_31 = 49;
			Var1.f_81 = 2;
			if (func_165(iParam1, iParam2, &Var1, &uVar99, &uVar102, &uVar103, &uVar106))
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

int func_165(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
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
			func_167(iParam0, uParam2, 0);
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
			return func_165(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 10:
			return func_165(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 13:
			func_167(iParam0, uParam2, 0);
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 14:
			func_167(iParam0, uParam2, 2);
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
			func_167(iParam0, uParam2, 0);
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
			func_167(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 17:
			func_167(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 18:
			func_167(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 19:
			func_167(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 20:
			func_167(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 23:
			return func_165(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 24:
			func_167(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 67:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 21,6401f, 38,5601f, 1,9708f };
			*uParam4 = -84f;
			return 1;
			break;
		
		case 58:
			func_167(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 59:
			func_167(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 60:
			func_167(iParam0, uParam2, 0);
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
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 38:
			func_167(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 41:
			func_167(iParam0, uParam2, 0);
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
			func_166(iParam0, uParam2, 1);
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
			func_166(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16,5182f, -8,5576f, -2,3291f };
			*uParam4 = 174,24f;
			return 1;
			break;
		
		case 75:
			func_167(iParam0, uParam2, 0);
			*uParam5 = { 2,5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 76:
			func_167(iParam0, uParam2, 0);
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
			func_167(iParam0, uParam2, 0);
			*uParam5 = { -1,5f, 35f, 3f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 48:
			func_166(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 3,8721f, -5,9568f, 0f };
			*uParam4 = (164,2466f - 180f);
			return 1;
			break;
		
		case 50:
			func_167(iParam0, uParam2, 0);
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
			func_167(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12,5f;
			return 1;
			break;
		
		case 66:
			func_167(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12,5f;
			return 1;
			break;
		
		case 61:
			func_167(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 62:
			func_167(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 63:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { -2,9117f, -15,0499f, -0,3468f };
			*uParam4 = -139,9751f;
			return 1;
			break;
		
		case 64:
			func_167(iParam0, uParam2, 0);
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
			func_166(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f };
			*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
			return 1;
			break;
		
		case 113:
			if (func_165(iParam0, 112, uParam2, uParam3, uParam4, uParam5, uParam6))
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
			if (func_165(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 5f, 20f, 0f };
				*uParam6 = 5f;
				return 1;
			}
			break;
		
		case 120:
			if (func_165(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
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
			func_166(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1,9002f, 1,205f, -0,3537f };
			*uParam4 = -180f;
			return 1;
			break;
		
		case 105:
			func_167(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0,1f, 0f };
			*uParam6 = 0,5f;
			return 1;
			break;
		
		case 106:
			return func_165(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 107:
			return func_165(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 98:
			func_166(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0,1f;
			*uParam5 = { 0,1f, 0,1f, 0,1f };
			*uParam6 = 0,1f;
			return 1;
			break;
		
		case 99:
			func_166(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0f;
			return 1;
			break;
		
		case 100:
			return func_165(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 101:
			return func_165(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 102:
			return func_165(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 123:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { 3,2267f, 1,0966f, -0,354f };
			*uParam4 = -31,73f;
			return 1;
			break;
		
		case 125:
			func_167(iParam0, uParam2, 0);
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
			func_166(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0,1f;
			return 1;
			break;
		
		case 91:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { 15,4538f, -8,711f, 5,79f };
			*uParam4 = 2,4942f;
			return 1;
			break;
		
		case 93:
			if (func_165(iParam0, 91, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -8,1f, -9,01f, 0,4439f };
				*uParam4 = 94,03f;
				return 1;
			}
			break;
		
		case 121:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { 18,8468f, 40,7721f, 0f };
			*uParam4 = -116,3936f;
			return 1;
			break;
		
		case 115:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(43,517f, -33,7052f, -531,6035f) - Vector(45,6141f, -21,87f, -511,73f) };
			*uParam4 = ((177,259f - 180f) - 69f);
			return 1;
			break;
		
		case 116:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { 1,7826f, 12,2098f, -0,6964f };
			*uParam4 = -96,0001f;
			return 1;
			break;
		
		case 117:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { 11,8705f, -1,4684f, -1,6487f };
			*uParam4 = -125,8331f;
			return 1;
			break;
		
		case 94:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { -13,1578f, 16,3962f, 0,6396f };
			*uParam4 = -177f;
			return 1;
			break;
		
		case 96:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { -21,0518f, 0,5037f, 0,4091f };
			*uParam4 = -83,1262f;
			return 1;
			break;
		
		case 108:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { 10,8971f, 2,0809f, -0,7983f };
			*uParam4 = -150,9417f;
			return 1;
			break;
		
		case 109:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { 79,9901f, -52,83f, -0,3533f };
			*uParam4 = 44,7231f;
			return 1;
			break;
		
		case 135:
			func_166(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f };
			*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
			return 1;
			break;
		
		case 136:
			if (func_165(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f };
				*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
				return 1;
			}
			break;
		
		case 137:
			if (func_165(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f };
				*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
				return 1;
			}
			break;
		
		case 138:
			if (func_165(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f };
				*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
				return 1;
			}
			break;
		
		case 139:
			if (func_165(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 2,4845f, 2,3286f, -0,383f };
				*uParam4 = -31,4884f;
				return 1;
			}
			break;
		
		case 140:
			if (func_165(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 141:
			if (func_165(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 40f, 0f };
				*uParam6 = 12,5f;
				return 1;
			}
			break;
		
		case 142:
			func_167(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 143:
			if (func_165(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 144:
			if (func_165(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 145:
			if (func_165(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 146:
			if (func_165(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 147:
			if (func_165(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 7,5f;
				return 1;
			}
			break;
		
		case 148:
			if (func_165(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 149:
			if (func_165(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 151:
			if (func_165(iParam0, 94, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -13,2213f, 16,331f, 0f };
				*uParam4 = 6f;
				return 1;
			}
			break;
		
		case 162:
			if (func_165(iParam0, 115, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 10,3876f, -10,3585f, -1,2183f };
				*uParam4 = 8,6726f;
				return 1;
			}
			break;
		
		case 158:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { 1,0793f, 15,631f, 1,1744f };
			*uParam4 = 2,52f;
			return 1;
			break;
		
		case 166:
			return func_165(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 170:
			func_166(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0,1f;
			*uParam5 = { 0,1f, 0,1f, 0,1f };
			*uParam6 = 0,1f;
			return 1;
			break;
		
		case 171:
			return func_165(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 172:
			return func_165(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 208:
			func_167(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0,1f, 0f };
			*uParam6 = 0,5f;
			return 1;
			break;
		
		case 209:
			return func_165(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 210:
			return func_165(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 211:
			func_166(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam3 = { -2,19f, -1,23f, 0f };
			*uParam4 = 90f;
			return 1;
			break;
		
		case 212:
			func_166(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { -1,3547f, 2,1615f, -0,3723f };
			*uParam4 = 177,8041f;
			return 1;
			break;
		
		case 213:
			if (func_165(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4,2075f, 1,0943f, 0f };
				*uParam4 = 15,82f;
				return 1;
			}
			break;
		
		case 214:
			func_166(iParam0, uParam2, 1);
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
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(43,5168f, -33,5909f, -531,4f) - Vector(45,2617f, -28,54f, -521,13f) };
			*uParam4 = (357,1407f - 84,96f);
			return 1;
			break;
		
		case 216:
			if (func_165(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -2,1752f, -2,3781f, 0f };
				*uParam4 = -68,4f;
				return 1;
			}
			break;
		
		case 217:
			if (func_165(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -3,9761f, 0,2542f, 0f };
				*uParam4 = -70,5273f;
				return 1;
			}
			break;
		
		case 232:
		case 233:
			func_166(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { Vector(28,225f, -1015,11f, -70,4456f) - Vector(27,5447f, -1019,235f, -78,4023f) };
			*uParam4 = (162,098f - 109,0206f);
			return 1;
			break;
		
		case 192:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(3,403f, -1531,113f, -1190,017f) - Vector(4,7514f, -1573,632f, -1174,458f) };
			*uParam4 = (302,182f - 105,981f);
			return 1;
			break;
		
		case 193:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(3,403f, -1531,113f, -1190,017f) - Vector(4,3599f, -1573,692f, -1175,298f) };
			*uParam4 = (302,182f - 172,9187f);
			return 1;
			break;
		
		case 194:
			if (func_165(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 12,74f, 3,26f, 0f };
				*uParam4 = 95,217f;
				return 1;
			}
			break;
		
		case 195:
			if (func_165(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -1,34f, 7,684f, 0f };
				*uParam4 = 173,52f;
				return 1;
			}
			break;
		
		case 200:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,4055f, -1607,568f, 44,4802f) - Vector(((28,2858f - 0,5f) + 1,5f), -1607,286f, 2,8895f) };
			*uParam4 = (318,2674f - (310,879f - 180f));
			return 1;
			break;
		
		case 201:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,1773f, -1592,787f, 3,6009f) - Vector(29,2903f, -1607,286f, 2,8895f) };
			*uParam4 = (322,6286f - 130,879f);
			return 1;
			break;
		
		case 202:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { 91,3579f, 18,1788f, -0,1911f };
			*uParam4 = -90,3475f;
			return 1;
			break;
		
		case 222:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { 12,5073f, -3,4625f, -0,3702f };
			*uParam4 = 14,3405f;
			return 1;
			break;
		
		case 223:
			if (func_165(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 21,87f, -10,5f, 0f };
				*uParam4 = -104,76f;
				return 1;
			}
			break;
		
		case 224:
			return func_165(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 226:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,7f, -1356,9f, 24,6f) - Vector(29,3437f, -1351,412f, 28,986f) };
			*uParam4 = ((270,1767f - 160f) - 180f);
			return 1;
			break;
		
		case 227:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { -19,8544f, -10,4863f, -0,0334f };
			*uParam4 = -120,12f;
			return 1;
			break;
		
		case 228:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { 21,5897f, -6,8544f, 0,6015f };
			*uParam4 = -141f;
			return 1;
			break;
		
		case 229:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { -7,6041f, 0,1369f, 0,5812f };
			*uParam4 = -145,769f;
			return 1;
			break;
		
		case 230:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { -1,6f, 7,6802f, 0,6947f };
			*uParam4 = -50,99f;
			return 1;
			break;
		
		case 238:
			func_166(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 22,322f, -6,2034f, 0f };
			*uParam4 = 73,071f;
			return 1;
			break;
		
		case 250:
			func_166(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1,2901f, -5,5798f, -0,0357f };
			*uParam4 = 160,56f;
			return 1;
			break;
		
		case 251:
			if (func_165(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4,0739f, 7,7692f, -0,2984f };
				*uParam4 = -48,9552f;
				return 1;
			}
			break;
		
		case 252:
			if (func_165(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -5,778f, -4,2397f, 0,9091f };
				*uParam4 = -12,9418f;
				return 1;
			}
			break;
		
		case 253:
			if (func_165(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 0,6968f, 1,1033f, 0,912f };
				*uParam4 = 90f;
				return 1;
			}
			break;
		
		case 281:
			func_166(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0,6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 282:
			if (func_165(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 283:
			if (func_165(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 284:
			if (func_165(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				uParam2->f_97 = 0;
				*uParam2 = 55628203;
				uParam2->f_91 = 0;
				return 1;
			}
			break;
		
		case 275:
			func_166(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0,6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 276:
			return func_165(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 277:
			return func_165(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
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
			func_167(iParam0, uParam2, 0);
			*uParam3 = { -4,5662f, -3,2485f, (0,9455f - 1,7f) };
			*uParam4 = -138,6056f;
			return 1;
			break;
		
		case 305:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(33,8797f, 3597,047f, 1399,662f) - Vector(37,9419f, 3602,284f, 1394,208f) };
			*uParam4 = (315,9865f - 122,5269f);
			return 1;
			break;
		
		case 310:
			func_167(iParam0, uParam2, 0);
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
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(7,1164f, -1094,205f, -1243,65f) - Vector(7,1f, -1105,15f, -1242,68f) };
			*uParam4 = (14,0848f - 120f);
			return 1;
			break;
		
		case 257:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(6,8143f, -930,5448f, -1672,535f) - Vector(6,479f, -974,7168f, -1667,148f) };
			*uParam4 = (144,9416f - 171,253f);
			return 1;
			break;
		
		case 258:
			func_167(iParam0, uParam2, 0);
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
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(32,5629f, -387,5143f, -147,166f) - Global_97183[iParam1] };
			*uParam4 = (341,4322f - 133f);
			return 1;
			break;
		
		case 111:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(24,4283f, -689,1462f, -1306,782f) - Global_97183[iParam1] };
			*uParam4 = (214,6826f - 33f);
			return 1;
			break;
		
		case 153:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(79,3324f, 254,0631f, -708,9244f) - Global_97183[iParam1] };
			*uParam4 = (115,2022f - -176,25f);
			return 1;
			break;
		
		case 154:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(79,3324f, 254,0631f, -708,9244f) - Global_97183[iParam1] };
			*uParam4 = (115,2022f - -147,192f);
			return 1;
			break;
		
		case 165:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(35,0054f, -441,1681f, -1100,878f) - Global_97183[iParam1] };
			*uParam4 = (297,5568f - -144,622f);
			return 1;
			break;
		
		case 159:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(36,3852f, -199,5354f, -825,3141f) - Global_97183[iParam1] };
			*uParam4 = (29,4869f - -62,5f);
			return 1;
			break;
		
		case 160:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(36,2086f, -144,1027f, -730,8218f) - Global_97183[iParam1] };
			*uParam4 = (28,532f - 119f);
			return 1;
			break;
		
		case 167:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(31,7307f, -523,2257f, -1144,174f) - Global_97183[iParam1] };
			*uParam4 = (299,2956f - -22,32f);
			return 1;
			break;
		
		case 152:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(60,9436f, 314,6989f, -1421,8f) - Global_97183[iParam1] };
			*uParam4 = (335,4134f - 72f);
			return 1;
			break;
		
		case 157:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(79,469f, 255,3143f, -706,187f) - Global_97183[iParam1] };
			*uParam4 = (117,3069f - 37,27f);
			return 1;
			break;
		
		case 225:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,7165f, -1677,734f, 185,4888f) - Global_97183[iParam1] };
			*uParam4 = (54,2538f - -83,8f);
			return 1;
			break;
		
		case 218:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,3218f, -1405,159f, -17,556f) - Global_97183[iParam1] };
			*uParam4 = (91,3098f - -70,4124f);
			return 1;
			break;
		
		case 219:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(30,2611f, -1492,151f, -219,3172f) - Global_97183[iParam1] };
			*uParam4 = (139,2572f - -12f);
			return 1;
			break;
		
		case 220:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(25,3018f, -1811,693f, -22,6138f) - Global_97183[iParam1] };
			*uParam4 = (141,0423f - -117,356f);
			return 1;
			break;
		
		case 206:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(208,5337f, 773,6719f, 164,1308f) - Global_97183[iParam1] };
			*uParam4 = (136,3104f - -36f);
			return 1;
			break;
		
		case 207:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(108,9995f, 396,924f, -263,3745f) - Global_97183[iParam1] };
			*uParam4 = (284,4611f - -95,588f);
			return 1;
			break;
		
		case 274:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(139,5782f, 2030,446f, -1883,836f) - Global_97183[iParam1] };
			*uParam4 = (340,5746f - 9f);
			return 1;
			break;
		
		case 312:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(10,0296f, 6560,557f, -200,684f) - Global_97183[iParam1] };
			*uParam4 = (134,5505f - 110,5931f);
			return 1;
			break;
		
		case 271:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(6,4647f, -1083,751f, -1278,023f) - Global_97183[iParam1] };
			*uParam4 = (115,8919f - 26,3597f);
			return 1;
			break;
		
		case 248:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(102,4417f, 164,5124f, 325,8113f) - Global_97183[iParam1] };
			*uParam4 = (68,4108f - 10,77f);
			return 1;
			break;
		
		case 242:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(56,616f, -122,9896f, -1622,22f) - Global_97183[iParam1] };
			*uParam4 = (210,8653f - 13,7207f);
			return 1;
			break;
		
		case 254:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(53,0019f, -213,7796f, 172,442f) - Global_97183[iParam1] };
			*uParam4 = (250,3032f - -40f);
			return 1;
			break;
		
		case 287:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(17,3426f, -836,0328f, -887,9977f) - Global_97183[iParam1] };
			*uParam4 = (270,8607f - -81f);
			return 1;
			break;
		
		case 286:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(4,8359f, -1182,704f, -1264,218f) - Global_97183[iParam1] };
			*uParam4 = (298,4328f - -150f);
			return 1;
			break;
		
		case 239:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(104,8218f, 289,0073f, -80,4564f) - Global_97183[iParam1] };
			*uParam4 = (247,6446f - -122f);
			return 1;
			break;
		
		case 243:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,2762f, -1477,282f, 434,9171f) - Global_97183[iParam1] };
			*uParam4 = (228,6353f - 18f);
			return 1;
			break;
		
		case 244:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,2762f, -1477,282f, 434,9171f) - Global_97183[iParam1] };
			*uParam4 = (228,6353f - -51f);
			return 1;
			break;
		
		case 249:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(103,1881f, 177,7729f, 288,977f) - Global_97183[iParam1] };
			*uParam4 = (68,9831f - (138f - 180f));
			return 1;
			break;
		
		case 273:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(32,7794f, -432,4635f, -161,4589f) - Global_97183[iParam1] };
			*uParam4 = (340,0368f - -153f);
			return 1;
			break;
		
		case 92:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(202,1143f, 828,3607f, -806,8813f) - Global_97183[iParam1] };
			*uParam4 = (101,1612f - -54,347f);
			return 1;
			break;
		
		case 103:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(12,0174f, -1108,081f, -1724,72f) - Global_97183[iParam1] };
			*uParam4 = (319,8931f - 143,4931f);
			return 1;
			break;
		
		case 109:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(10,2248f, -628,4899f, -1859,505f) - Global_97183[iParam1] };
			*uParam4 = (229,0784f - 99f);
			return 1;
			break;
		
		case 81:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(53,1469f, 90,4242f, -1393,442f) - Global_97183[iParam1] };
			*uParam4 = (123,1782f - -45f);
			return 1;
			break;
		
		case 95:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(101,921f, 186,1865f, 370,5876f) - Global_97183[iParam1] };
			*uParam4 = (159,7861f - 70f);
			return 1;
			break;
		
		case 97:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(45,9871f, -188,5636f, -1391,156f) - Global_97183[iParam1] };
			*uParam4 = (36,5172f - -45f);
			return 1;
			break;
		
		case 134:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(46,0567f, 3076,742f, 2001,918f) - Global_97183[iParam1] };
			*uParam4 = (328,101f - -33,128f);
			return 1;
			break;
		
		case 88:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(60,9442f, 314,7191f, -1421,821f) - Global_97183[iParam1] };
			*uParam4 = (336,5938f - -132f);
			return 1;
			break;
		
		case 306:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(37,4888f, 5643,726f, -569,3535f) - Global_97183[iParam1] };
			*uParam4 = (296,1685f - unk_0xE7D606C557C86100(7,4998f, -7,4995f));
			return 1;
			break;
		
		case 307:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(47,4526f, 4717,728f, -1555,593f) - Global_97183[iParam1] };
			*uParam4 = (236,223f - unk_0xE7D606C557C86100(-10,6345f, -0,7246f));
			return 1;
			break;
		
		case 308:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(22,7549f, 4629,148f, -1553,861f) - Global_97183[iParam1] };
			*uParam4 = (332,7842f - unk_0xE7D606C557C86100(3,4271f, 13,6787f));
			return 1;
			break;
		
		case 278:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(35,9161f, -1009,745f, 631,8275f) - Global_97183[iParam1] };
			*uParam4 = (98,8128f - -33,77f);
			return 1;
			break;
		
		case 279:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(234,6825f, 900,8749f, -111,9033f) - Global_97183[iParam1] };
			*uParam4 = (6,1087f - 155,68f);
			return 1;
			break;
		
		case 240:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(33,5351f, 3636,151f, 1546,323f) - Global_97183[iParam1] };
			*uParam4 = (298,4009f - -4,124f);
			return 1;
			break;
		
		case 241:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(30,512f, 6439,667f, -179,4242f) - Global_97183[iParam1] };
			*uParam4 = (225,5593f - 108f);
			return 1;
			break;
		
		case 264:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,2977f, -1390,545f, 486,7419f) - Global_97183[iParam1] };
			*uParam4 = (178,298f - -90f);
			return 1;
			break;
		
		case 266:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(10,5662f, 143,2342f, -3052,895f) - Global_97183[iParam1] };
			*uParam4 = (85,3429f - 68,8227f);
			return 1;
			break;
		
		case 267:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(39,9155f, 4934,08f, 2202,375f) - Global_97183[iParam1] };
			*uParam4 = (314,2654f - 56,2037f);
			return 1;
			break;
		
		case 269:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,149f, -782,0952f, 401,2502f) - Global_97183[iParam1] };
			*uParam4 = (179,9905f - -106,6605f);
			return 1;
			break;
		
		case 246:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(3,3919f, -1534,507f, -1195,256f) - Global_97183[iParam1] };
			*uParam4 = (305,8221f - -165f);
			return 1;
			break;
		
		case 263:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(12,8792f, -1241,213f, -573,3765f) - Global_97183[iParam1] };
			*uParam4 = (316,9941f - -171f);
			return 1;
			break;
		
		case 259:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(4,0002f, -1298,539f, -724,429f) - Global_97183[iParam1] };
			*uParam4 = (230,5715f - -32,488f);
			return 1;
			break;
		
		case 260:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(61,203f, 250,8387f, -1309,114f) - Global_97183[iParam1] };
			*uParam4 = (10,7756f - -29,093f);
			return 1;
			break;
		
		case 261:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(79,764f, 60,3233f, 917,6678f) - Global_97183[iParam1] };
			*uParam4 = (148,021f - 229,6085f);
			return 1;
			break;
		
		case 270:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { Vector(350f, 8588f, 2919f) - Global_97183[iParam1] };
			*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
			return 1;
			break;
		
		case 289:
			func_167(iParam0, uParam2, 0);
			*uParam3 = { -48,5171f, 28,4211f, 3,0057f };
			*uParam4 = -1,3831f;
			return 1;
			break;
	}
	return 0;
}

void func_166(int iParam0, var uParam1, int iParam2)
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

int func_167(int iParam0, var uParam1, int iParam2)
{
	if (Global_98148[iParam0] == 0)
	{
		func_166(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (Global_98148[iParam0] == -150975354)
	{
		func_166(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (func_177(iParam0))
	{
		func_166(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0xA7082C42B8809BF2(Global_98148[iParam0]))
	{
		func_166(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0xC41A9202669A24C4(Global_98148[iParam0]))
	{
		func_166(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0xAFB8495D36825275(Global_98148[iParam0]))
	{
		func_166(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0xA7D7011F9888A365(Global_98148[iParam0]))
	{
		func_166(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 == 1)
	{
		if (!unk_0x8E39AC3C76C8AA58(Global_98148[iParam0]))
		{
			func_166(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	else if (iParam2 == 2)
	{
		if (!unk_0x7D8B2A8F9EA82DB7(Global_98148[iParam0]))
		{
			func_166(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	if (!func_168(Global_98148[iParam0], 0))
	{
		func_166(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 != 0)
	{
		func_166(iParam0, uParam1, iParam2);
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
		func_166(iParam0, uParam1, 1);
		uParam1->f_91 = 1;
		if (Global_98148[iParam0] == *uParam1)
		{
			func_166(iParam0, uParam1, 1);
			uParam1->f_91 = 1;
			return 1;
		}
		func_166(iParam0, uParam1, 2);
		uParam1->f_91 = 2;
		if (Global_98148[iParam0] == *uParam1)
		{
			func_166(iParam0, uParam1, 2);
			uParam1->f_91 = 2;
			return 1;
		}
		*uParam1 = { Global_98148[iParam0] };
		uParam1->f_91 = 0;
		return 0;
	}
	func_166(iParam0, uParam1, iParam2);
	uParam1->f_91 = iParam2;
	return 1;
}

int func_168(int iParam0, bool bParam1)
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
		if (!func_176())
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
		if ((((!func_175() && !func_174()) && !func_173()) && !func_172()) && !func_176())
		{
			return 0;
		}
	}
	if ((iParam0 == 37348240 || iParam0 == 11251904) || iParam0 == 544021352)
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_173())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_171(iParam0))
		{
			return 0;
		}
	}
	if (!func_169(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_169(int iParam0)
{
	if (!func_170())
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

int func_170()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

int func_171(int iParam0)
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

int func_172()
{
	return 0;
}

int func_173()
{
	return 1;
}

int func_174()
{
	return 1;
}

int func_175()
{
	if (unk_0xC146D5FBD23C6954(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_176()
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

int func_177(int iParam0)
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

bool func_178(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_179(int iParam0, var uParam1, float fParam2)
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
			return func_179(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_179(8, uParam1, fParam2);
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

var func_180()
{
	func_190(&uVar0, unk_0x4460E481B9E33ADA());
	func_189(&uVar0, unk_0x8D199E381D262EEF());
	func_188(&uVar0, unk_0xD8A54335F18763BA());
	func_183(&uVar0, unk_0x972A296334C9D57B());
	func_182(&uVar0, unk_0x118229AD063C3C1D());
	func_181(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_181(var uParam0, int iParam1)
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

void func_182(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_183(var uParam0, int iParam1)
{
	iVar0 = func_187(*uParam0);
	iVar1 = func_185(*uParam0);
	if (iParam1 < 1 || iParam1 > func_184(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_184(int iParam0, int iParam1)
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

var func_185(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_186(unk_0xEAE0D21A50E6C7F4(iParam0, 31), -1, 1)) + 2011;
}

int func_186(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_187(var uParam0)
{
	return uParam0 & 15;
}

void func_188(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_189(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_190(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

void func_191(var uParam0, int iParam1)
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
			if (!func_179(Global_111638.f_18528[iVar0], &vVar2, &fVar5))
			{
				Global_111638.f_18528[iVar0] = 318;
				func_192(&(uParam0->f_2296[iVar0]));
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

void func_192(var uParam0)
{
	*uParam0 = -15;
}

int func_193()
{
	if (func_118(0))
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

void func_194(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_195(int iParam0)
{
	Global_41982 = (unk_0x1C0640BA9A7327B3() + iParam0);
}

int func_196(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		iVar1 = func_99();
		if (!iParam0->f_23)
		{
			func_245(iVar0, 0);
		}
		func_243(iVar1, &iVar0);
		unk_0x4E885A246A9D983A(iVar0, 32, true);
		unk_0x4E885A246A9D983A(iVar0, 250, true);
		iVar2 = func_242(iParam0->f_7);
		func_245((*iParam0)[iParam0->f_7], 0);
		fVar3 = (((to_float(unk_0x7F6DC62EA9922664((*iParam0)[iParam0->f_7])) - 100f) / (to_float(unk_0x65BC0B7172CA52DD((*iParam0)[iParam0->f_7])) - 100f)) * 100f);
		switch (func_102(unk_0x16F2683693E537C9()))
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
		if (func_101(func_99()))
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
		if (func_241(0) || func_241(3))
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
		iParam0->f_5 = func_240(iVar1);
		if (iParam0->f_5 == 4)
		{
			iParam0->f_5 = 3;
		}
		(*iParam0)[iParam0->f_5] = iVar0;
		(*iParam0)[iParam0->f_7] = 0;
		iParam0->f_6 = func_240(iVar2);
		iParam0->f_7 = 4;
		iVar22 = unk_0x16F2683693E537C9();
		unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), true, 0);
		func_239(iVar22);
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
				func_239(iVar0);
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
		func_237(unk_0x16F2683693E537C9());
		func_236();
		func_235(iVar2);
		func_226();
		func_220(iVar2);
		func_203(func_218(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 145, 0));
		unk_0x324CFDE7809E2EC2(unk_0xD803B885F5E47A62());
		unk_0x7980D72D61BEF4D5(unk_0x16F2683693E537C9(), false);
		unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 1);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x27E404AD7AC8083F(unk_0xD803B885F5E47A62(), func_296(67));
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0xE21702DBF1967A40(unk_0xD803B885F5E47A62(), func_296(68));
		}
		func_200(iVar2, &iVar22);
		if (((func_295(0) || func_295(3)) || func_295(2)) || func_295(4))
		{
			unk_0x4E885A246A9D983A(iVar22, 32, false);
			unk_0x4E885A246A9D983A(iVar22, 250, false);
		}
		else
		{
			unk_0x4E885A246A9D983A(iVar22, 32, true);
			unk_0x4E885A246A9D983A(iVar22, 250, true);
		}
		if (!func_199())
		{
			func_197();
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

void func_197()
{
	if (Global_96056)
	{
		func_100();
		unk_0x9BF51DDC898CF6FE(func_198(Global_111638.f_2358.f_539.f_4321));
	}
	else
	{
		unk_0x9BF51DDC898CF6FE("");
	}
}

char* func_198(var uParam0)
{
	uParam0 = uParam0;
	return "";
}

bool func_199()
{
	return Global_22209;
}

void func_200(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_201(4, *iParam1);
			func_201(7, *iParam1);
			func_201(8, *iParam1);
			func_201(11, *iParam1);
			break;
		
		case 1:
			if (Global_111638.f_9080.f_330[2])
			{
				func_201(4, *iParam1);
			}
			func_201(7, *iParam1);
			func_201(8, *iParam1);
			func_201(11, *iParam1);
			if (Global_111638.f_9080.f_99.f_58[126])
			{
				func_201(12, *iParam1);
			}
			break;
		
		case 2:
			if (Global_111638.f_9080.f_330[20])
			{
				func_201(4, *iParam1);
			}
			func_201(7, *iParam1);
			func_201(8, *iParam1);
			func_201(11, *iParam1);
			break;
	}
}

void func_201(int iParam0, int iParam1)
{
	if (!unk_0xC844350D5D58C99A(iParam1))
	{
		return;
	}
	if (func_202(iParam0, iParam1))
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

int func_202(int iParam0, int iParam1)
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

void func_203(int iParam0)
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			unk_0x5D96D8530B3D0904(&(Global_37218[(38 / 32)]), (38 % 32));
			func_204(38, 0);
			unk_0x5D96D8530B3D0904(&(Global_37218[(41 / 32)]), (41 % 32));
			func_204(41, 0);
			unk_0x5D96D8530B3D0904(&(Global_37218[(43 / 32)]), (43 % 32));
			func_204(43, 0);
			unk_0x5D96D8530B3D0904(&(Global_37218[(42 / 32)]), (42 % 32));
			func_204(42, 0);
			unk_0x5D96D8530B3D0904(&(Global_37218[(44 / 32)]), (44 % 32));
			func_204(44, 0);
			break;
		
		case 1:
			unk_0x5D96D8530B3D0904(&(Global_37218[(51 / 32)]), (51 % 32));
			func_204(51, 0);
			break;
		
		case 2:
			unk_0x5D96D8530B3D0904(&(Global_37218[(51 / 32)]), (51 % 32));
			func_204(51, 0);
			break;
		
		case 3:
			unk_0x5D96D8530B3D0904(&(Global_37218[(53 / 32)]), (53 % 32));
			func_204(53, 0);
			break;
		
		case 4:
			unk_0x5D96D8530B3D0904(&(Global_37218[(81 / 32)]), (81 % 32));
			func_204(81, 0);
			unk_0x5D96D8530B3D0904(&(Global_37218[(82 / 32)]), (82 % 32));
			func_204(82, 0);
			break;
		
		case 5:
			unk_0x5D96D8530B3D0904(&(Global_37218[(47 / 32)]), (47 % 32));
			func_204(47, 0);
			unk_0x5D96D8530B3D0904(&(Global_37218[(50 / 32)]), (50 % 32));
			func_204(50, 0);
			break;
		
		case 6:
			unk_0x5D96D8530B3D0904(&(Global_37218[(50 / 32)]), (50 % 32));
			func_204(50, 0);
			break;
	}
}

void func_204(int iParam0, int iParam1)
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
			func_206(iParam0);
			if (unk_0xEAE0D21A50E6C7F4(Global_37218[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_205(iParam0);
			}
		}
	}
}

void func_205(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_38161.f_228[(iParam0 / 32)], (iParam0 % 23)))
	{
		unk_0x5D96D8530B3D0904(&(Global_38161.f_228[(iParam0 / 32)]), (iParam0 % 23));
		Global_38161[Global_38161.f_227] = iParam0;
		Global_38161.f_227++;
	}
}

void func_206(int iParam0)
{
	if (!func_215())
	{
		return;
	}
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return;
	}
	Var0 = { func_214(iParam0) };
	if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 2))
	{
		func_211(iParam0, &Var0);
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
			iVar9 = func_208(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (func_295(14))
		{
			iVar9 = 0;
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 1) && unk_0x8A22C4C08282BF26(92439941) == 0)
	{
		if (func_207())
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
		func_205(iParam0);
		if (Global_37236[iParam0] < 2)
		{
			Global_37236[iParam0]++;
		}
	}
}

int func_207()
{
	if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
	{
		return 0;
	}
	switch (func_99())
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

int func_208(int iParam0)
{
	iVar0 = func_99();
	if (func_209(iParam0))
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
		if (func_101(iVar0))
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
			if (func_101(iVar0))
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
			if (func_101(iVar0))
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
			if (func_101(iVar0))
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
				if (func_101(iVar0))
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
				if (func_101(iVar0))
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
			if (func_101(iVar0))
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

int func_209(int iParam0)
{
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
			{
				iVar0 = unk_0x134B62B726CEC8E6(func_210(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 1)));
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

int func_210(int iParam0)
{
	return iParam0;
}

void func_211(int iParam0, var uParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_180();
	iVar1 = func_213(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_212(iParam0))
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
			if (func_212(iParam0))
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
			if (func_212(iParam0))
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
			if (func_212(iParam0))
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
			if (!func_212(iParam0))
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
			if (!func_212(iParam0))
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
				if (!func_212(iParam0))
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
				if (!func_212(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_212(iParam0) && unk_0x8A22C4C08282BF26(Global_89532[26].f_6) == 0)
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
			if (!func_212(iParam0))
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
			if (!func_212(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_212(iParam0))
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
			if (!func_212(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_212(iParam0))
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
			if (!func_212(iParam0))
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
				if (!func_212(iParam0))
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
				if (!func_212(iParam0))
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
				if (!func_212(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_212(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_212(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_212(iParam0))
			{
				Global_111638.f_7256[iParam0] = 0;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
	}
}

bool func_212(int iParam0)
{
	Var0 = { func_214(iParam0) };
	iVar7 = unk_0x51D3DB30DC0C68AD(Var0.f_5);
	return ((iVar7 == 1 || iVar7 == 4) || iVar7 == 2);
}

int func_213(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

struct<7> func_214(int iParam0)
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

int func_215()
{
	if ((func_217() == -1 || func_217() == 999) && !func_216() == 0)
	{
		return 1;
	}
	return 0;
}

int func_216()
{
	return Global_30769;
}

int func_217()
{
	return Global_30768;
}

int func_218(vector3 vParam0, int iParam3, int iParam4)
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
				if (func_219(iVar0) || iParam4 == 0)
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

bool func_219(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[iParam0], 0);
}

void func_220(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_221(iParam0, iVar0);
		iVar0++;
	}
}

void func_221(int iParam0, int iParam1)
{
	if (((iParam0 != 0 || iParam0 != 1) || iParam0 != 2) || iParam0 != 3)
	{
		return;
	}
	func_225(iParam0, iParam1, &iVar2, &iVar3);
	if (unk_0x8CD06866876216F2())
	{
		iVar0 = func_222(iVar3, -1, 0);
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

int func_222(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_223(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_223(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_224();
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

int func_224()
{
	return Global_1312745;
}

void func_225(int iParam0, int iParam1, var uParam2, var uParam3)
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

void func_226()
{
	if ((unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) || !func_101(func_99())) || !func_232())
	{
		return;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_228(unk_0x16F2683693E537C9(), &Var0, 1, -1);
	func_227(1306, Var0[0], -1, 1);
	func_227(1307, Var0[1], -1, 1);
	func_227(1308, Var0[2], -1, 1);
	func_227(1309, Var0[3], -1, 1);
	func_227(1310, Var0[4], -1, 1);
	func_227(1311, Var0[5], -1, 1);
	func_227(1312, Var0[6], -1, 1);
	func_227(1313, Var0[7], -1, 1);
	func_227(1314, Var0[8], -1, 1);
	func_227(1315, Var0[9], -1, 1);
	func_227(1316, Var0[10], -1, 1);
	func_227(1317, Var0[11], -1, 1);
	func_227(1318, Var0.f_13[0], -1, 1);
	func_227(1319, Var0.f_13[1], -1, 1);
	func_227(1320, Var0.f_13[2], -1, 1);
	func_227(1321, Var0.f_13[3], -1, 1);
	func_227(1322, Var0.f_13[4], -1, 1);
	func_227(1323, Var0.f_13[5], -1, 1);
	func_227(1324, Var0.f_13[6], -1, 1);
	func_227(1325, Var0.f_13[7], -1, 1);
	func_227(1326, Var0.f_13[8], -1, 1);
	func_227(1327, Var0.f_13[9], -1, 1);
	func_227(1328, Var0.f_13[10], -1, 1);
	func_227(1329, Var0.f_13[11], -1, 1);
	func_227(1330, Var0.f_26[0], -1, 1);
	func_227(1331, Var0.f_26[1], -1, 1);
	func_227(1332, Var0.f_26[2], -1, 1);
	func_227(1333, Var0.f_26[3], -1, 1);
	func_227(1334, Var0.f_26[4], -1, 1);
	func_227(1335, Var0.f_26[5], -1, 1);
	func_227(1336, Var0.f_26[6], -1, 1);
	func_227(1337, Var0.f_26[7], -1, 1);
	func_227(1338, Var0.f_26[8], -1, 1);
	func_227(1339, Var0.f_26[9], -1, 1);
	func_227(1340, Var0.f_26[10], -1, 1);
	func_227(1341, Var0.f_26[11], -1, 1);
	func_227(1342, Var0.f_39[0], -1, 1);
	func_227(1343, Var0.f_39[1], -1, 1);
	func_227(1344, Var0.f_39[2], -1, 1);
	func_227(1345, Var0.f_39[3], -1, 1);
	func_227(1346, Var0.f_39[4], -1, 1);
	func_227(1347, Var0.f_39[5], -1, 1);
	func_227(1348, Var0.f_39[6], -1, 1);
	func_227(1349, Var0.f_39[7], -1, 1);
	func_227(1350, Var0.f_39[8], -1, 1);
	func_227(1351, Var0.f_49[0], -1, 1);
	func_227(1352, Var0.f_49[1], -1, 1);
	func_227(1353, Var0.f_49[2], -1, 1);
	func_227(1354, Var0.f_49[3], -1, 1);
	func_227(1355, Var0.f_49[4], -1, 1);
	func_227(1356, Var0.f_49[5], -1, 1);
	func_227(1357, Var0.f_49[6], -1, 1);
	func_227(1358, Var0.f_49[7], -1, 1);
	func_227(1359, Var0.f_49[8], -1, 1);
	func_227(1360, func_99(), -1, 1);
	unk_0xD8B681091EBE4064(-1373240669, 1, 1);
	Global_111638.f_2358.f_539.f_4315 = 1;
}

var func_227(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_224();
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

void func_228(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_102(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_231(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_230(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_101(iVar0))
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
			if (func_229(161, iParam3))
			{
				uParam1->f_59 = func_222(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_222(752, iParam3, 0);
			}
			uParam1->f_60 = func_222(753, iParam3, 0);
			uParam1->f_61 = func_222(754, iParam3, 0);
		}
		if (unk_0x8CD06866876216F2() && iParam0 == unk_0x16F2683693E537C9())
		{
			if (func_229(161, iParam3))
			{
				uParam1->f_59 = func_222(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_222(752, iParam3, 0);
			}
		}
	}
}

int func_229(int iParam0, var uParam1)
{
	uVar0 = Global_2583656[iParam0][func_223(uParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_230(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	iVar0 = func_102(iParam0);
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

void func_231(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	iVar0 = func_102(iParam0);
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

int func_232()
{
	if (func_234() && func_233(0))
	{
		return 1;
	}
	return 0;
}

var func_233(int iParam0)
{
	return Global_1312374[iParam0];
}

var func_234()
{
	return func_233(func_224() + 1);
}

void func_235(int iParam0)
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

void func_236()
{
	func_100();
	iVar0 = unk_0x023428EEA3027652();
	if (unk_0xE4EDC4B0E92C078B(iVar0))
	{
		iVar1 = Global_111638.f_2358.f_539.f_4321;
		if (func_295(14))
		{
			iVar1 = func_102(unk_0x16F2683693E537C9());
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

void func_237(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 44)
	{
		iVar2 = func_238(iVar0);
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

int func_238(int iParam0)
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

void func_239(int iParam0)
{
	iVar0 = func_102(iParam0);
	if (func_101(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
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

int func_240(int iParam0)
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

int func_241(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_151(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_242(int iParam0)
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

void func_243(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_244(4, *iParam1, 0);
			func_244(7, *iParam1, 0);
			func_244(8, *iParam1, 0);
			func_244(11, *iParam1, 0);
			break;
		
		case 1:
			func_244(4, *iParam1, 0);
			func_244(7, *iParam1, 0);
			func_244(8, *iParam1, 0);
			func_244(11, *iParam1, 0);
			if (Global_111638.f_9080.f_99.f_58[126])
			{
				func_244(12, *iParam1, 0);
			}
			break;
		
		case 2:
			func_244(4, *iParam1, 0);
			func_244(7, *iParam1, 0);
			func_244(8, *iParam1, 0);
			func_244(11, *iParam1, 0);
			break;
	}
}

void func_244(int iParam0, int iParam1, bool bParam2)
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

void func_245(int iParam0, bool bParam1)
{
	func_257(iParam0);
	func_251(iParam0, bParam1);
	func_250(iParam0);
	func_249(iParam0);
	func_248(iParam0);
	func_247(iParam0);
	func_246(iParam0);
}

void func_246(int iParam0)
{
	iVar0 = func_102(iParam0);
	if (func_101(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam0 == unk_0x16F2683693E537C9())
		{
			Global_111638.f_2358.f_539.f_2328[iVar0] = unk_0x179932739160BA96(unk_0xD803B885F5E47A62());
		}
	}
}

void func_247(int iParam0)
{
	iVar0 = func_102(iParam0);
	if (func_101(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_111638.f_2358.f_539.f_2318[iVar0] = { unk_0x56E9E0FD5ACCD35D(iParam0) };
	}
}

void func_248(int iParam0)
{
	iVar0 = func_102(iParam0);
	if (func_101(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
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

void func_249(int iParam0)
{
	iVar0 = func_102(iParam0);
	if (func_101(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_111638.f_2358.f_539.f_294[iVar0] = unk_0x34460709B9A5160B(iParam0);
	}
}

void func_250(int iParam0)
{
	iVar0 = func_102(iParam0);
	if (func_101(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_111638.f_2358.f_539.f_290[iVar0] = (((to_float(unk_0x7F6DC62EA9922664(iParam0)) - 100f) / (to_float(unk_0x65BC0B7172CA52DD(iParam0)) - 100f)) * 100f);
	}
}

void func_251(int iParam0, bool bParam1)
{
	iVar0 = func_102(iParam0);
	if (func_101(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam0 == unk_0x16F2683693E537C9())
		{
			func_252(iParam0, &(Global_111638.f_2358.f_539.f_298[iVar0]));
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

void func_252(int iParam0, var uParam1)
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
			iVar3 = func_238(iVar0);
			if (iVar3 != 0)
			{
				Var4 = unk_0x3F0B5EEC37A0EDD3(iParam0, func_238(iVar0));
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
					iVar2 = func_255(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xAFB8387ED2D7213E(iParam0, Var4, iVar2))
						{
							unk_0x5D96D8530B3D0904(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_255(Var4, iVar1);
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
			if ((unk_0x310836EE7129BA33(iVar9, &Var11) && !func_254(Var11.f_1)) && iVar72 < 51)
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
							if (!func_253(Var50.f_3))
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

int func_253(int iParam0)
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

int func_254(int iParam0)
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

int func_255(int iParam0, int iParam1)
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
				iVar1 = func_256(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0xA942498EEAA3EEAD(iVar1))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar1, iVar2, &Var43))
						{
							if (!func_253(Var43.f_3))
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

int func_256(int iParam0, var uParam1)
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

void func_257(int iParam0)
{
	iVar0 = func_102(iParam0);
	if (func_101(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_111638.f_2358.f_539.f_2296[iVar0] = func_180();
	}
}

int func_258(int iParam0, int iParam1)
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
		if (func_240(func_99()) != iParam1 || bVar0)
		{
			bVar1 = false;
			if ((bVar0 || iParam0->f_24[iParam1] != 0) || ((func_262(iParam1) && func_259(iParam1)) && !iParam0->f_18[iParam1]))
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
			else if (!((unk_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_2[27], 1) && !Global_3) && !func_118(0)))
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

int func_259(int iParam0)
{
	if (Global_111638.f_9080 || Global_3)
	{
		if (!Global_76622 || (Global_76622 && iParam0 != func_240(func_261())))
		{
			if (!func_260(func_242(iParam0)))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_260(int iParam0)
{
	if (func_101(iParam0))
	{
		if ((Global_111638.f_9080 || Global_3) || func_118(0))
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

int func_261()
{
	return Global_111638.f_2358.f_539.f_4323;
}

int func_262(int iParam0)
{
	if ((Global_111638.f_9080 || Global_3) || func_118(0))
	{
		if (!Global_76622 || (Global_76622 && iParam0 != func_240(func_261())))
		{
			if (((iParam0 == 0 && !func_296(115)) || (iParam0 == 1 && !func_296(116))) || (iParam0 == 2 && !func_296(117)))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_263(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_270(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_74())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_269(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_270(0);
		unk_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_269(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_267(unk_0xD803B885F5E47A62())) && !func_265(unk_0xD803B885F5E47A62(), 0)) && !func_264()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_267(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_264()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 14);
}

bool func_265(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_266(-1, 0) == 8;
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

int func_266(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_224();
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

int func_267(int iParam0)
{
	if (func_265(iParam0, 0))
	{
		return 1;
	}
	if (func_268())
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

bool func_268()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_269(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_270(int iParam0)
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

void func_271(var uParam0)
{
	if (func_10(2, *uParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 1))
		{
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 2))
			{
				func_69(uParam0, func_272(*uParam0));
				func_85(2, *uParam0, 0);
			}
			else
			{
				func_123(uParam0);
				func_85(2, *uParam0, 0);
			}
		}
	}
}

int func_272(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_296(18);
			break;
		
		case 1:
			return func_296(22);
			break;
		
		case 2:
			return func_296(40);
			break;
		
		case 3:
			return func_296(8);
			break;
		
		case 4:
			return func_296(26);
			break;
		
		default:
			break;
	}
	return 0;
}

void func_273(var uParam0, float fParam1, float fParam2)
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		fVar0 = vdist2(uParam0->f_401, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true));
		if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 1))
		{
			func_284(uParam0);
		}
		else if (fVar0 < (fParam1 * fParam1) || unk_0xEAE0D21A50E6C7F4(Global_94753, *uParam0))
		{
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 0))
			{
				if (func_283(uParam0))
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_94753, *uParam0))
					{
						if (unk_0xEAE0D21A50E6C7F4(Global_94755, *uParam0))
						{
							func_278(uParam0);
						}
					}
					else
					{
						func_278(uParam0);
					}
				}
			}
			else
			{
				func_277(uParam0);
			}
		}
		if (fVar0 > (fParam2 * fParam2) && !unk_0xEAE0D21A50E6C7F4(Global_94753, *uParam0))
		{
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 0))
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 1))
				{
					func_275(uParam0);
				}
				func_274(uParam0);
			}
		}
	}
}

void func_274(var uParam0)
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

void func_275(var uParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 1))
	{
		if (!unk_0x22A8E52414415B76())
		{
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 2))
			{
				func_69(uParam0, 0);
			}
		}
		func_276(uParam0);
		unk_0x0674E58A79778E99(&(uParam0->f_449), 1);
		unk_0x0674E58A79778E99(&Global_94753, *uParam0);
	}
}

void func_276(var uParam0)
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

void func_277(var uParam0)
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

void func_278(var uParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 1))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_96)
		{
			func_36(uParam0, iVar0);
			iVar0++;
		}
		func_33(uParam0);
		func_31(uParam0);
		func_282(uParam0);
		func_281(uParam0);
		func_279(uParam0);
		unk_0x5D96D8530B3D0904(&(uParam0->f_449), 1);
	}
}

void func_279(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_33)
	{
		if (func_32(*uParam0, uParam0->f_1.f_75[iVar0]))
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
			vVar4 = { func_280(uParam0, &(uParam0->f_1.f_34[iVar0])) };
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

Vector3 func_280(var uParam0, var uParam1)
{
	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_28(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0,5f));
	fVar5 = (-fVar1 * (fVar3 - 0,5f));
	fVar6 = uParam0->f_404;
	vVar7 = { uParam0->f_401 };
	vVar7 = { vVar7 + Vector(fVar5, (fVar4 * cos((90f - fVar6))), (fVar4 * sin((90f - fVar6)))) };
	return vVar7;
}

void func_281(var uParam0)
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

void func_282(var uParam0)
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
		if (func_32(iVar0, uParam0->f_1.f_248[iVar2]))
		{
			iVar3 = 0;
			if (func_32(iVar0, uParam0->f_1.f_258[iVar2]))
			{
				iVar3 = 1;
			}
			unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(uParam0->f_415 + 1);
			unk_0x3CAEA85DA607305E(iVar1);
			unk_0x3CAEA85DA607305E(iVar3);
			func_8(&(uParam0->f_1.f_211[iVar2]));
			unk_0x7E60D21B163E9D56();
			iVar1++;
		}
		iVar2++;
	}
	unk_0x7E60C62A7CE58FC8(uParam0->f_413, "DISPLAY_VIEW");
	unk_0x3CAEA85DA607305E(uParam0->f_415 + 1);
	unk_0x7E60D21B163E9D56();
	if (func_32(*uParam0, uParam0->f_1.f_210))
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

int func_283(var uParam0)
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

void func_284(var uParam0)
{
	if (func_32(*uParam0, 0))
	{
		func_285(uParam0);
		fVar0 = (-uParam0->f_1.f_4 * 0,5f);
		fVar1 = (uParam0->f_1.f_5 * 0,5f);
		unk_0x0103165890FA9E7F(uParam0->f_413, uParam0->f_401 + Vector(fVar1, (fVar0 * cos((90f - uParam0->f_404))), (fVar0 * sin((90f - uParam0->f_404)))), 180f, 0f, uParam0->f_404, 1f, 1f, 1f, uParam0->f_1.f_6, uParam0->f_1.f_7, 1f, 2);
	}
}

void func_285(var uParam0)
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
			bVar2 = func_32(*uParam0, iVar1);
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
			if (func_32(*uParam0, uParam0->f_1.f_75[iVar0]))
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
					vVar6 = { func_280(uParam0, &(uParam0->f_1.f_34[iVar0])) };
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
		func_286(uParam0);
		func_33(uParam0);
		func_282(uParam0);
		unk_0x0674E58A79778E99(&(uParam0->f_449), 14);
	}
}

void func_286(var uParam0)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	unk_0x3CAEA85DA607305E(uParam0->f_415 + 1);
	unk_0x7E60D21B163E9D56();
}

void func_287()
{
	if (func_296(37) || func_296(38))
	{
		if (!func_118(0))
		{
			if (func_296(37))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 8))
				{
					if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 9))
					{
						unk_0x5C8D148FC238F38A();
						unk_0x0674E58A79778E99(&iLocal_41, 9);
					}
					unk_0x8E590B419F1E5182("RBHS_MCS_3", 5, 8);
					unk_0x5D96D8530B3D0904(&iLocal_41, 8);
				}
				if (unk_0x75EECC9B0572F772())
				{
					unk_0x7656EB524FEAB9B3("LESTER", 0, 0, 0, 0);
					unk_0x7656EB524FEAB9B3("LESTER", 2, 0, 0, 0);
					unk_0x7656EB524FEAB9B3("LESTER", 3, 0, 1, 0);
					unk_0x7656EB524FEAB9B3("LESTER", 4, 1, 1, 0);
					unk_0x7656EB524FEAB9B3("LESTER", 5, 0, 0, 0);
					unk_0x7656EB524FEAB9B3("LESTER", 7, 0, 0, 0);
					unk_0x7656EB524FEAB9B3("LESTER", 8, 1, 0, 0);
					unk_0xA2888AACD3C45CCA("LESTER", 1, 0, 0, 0);
				}
			}
			else
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 9))
				{
					if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 8))
					{
						unk_0x5C8D148FC238F38A();
						unk_0x0674E58A79778E99(&iLocal_41, 8);
					}
					unk_0x8E590B419F1E5182("RBHS_MCS_3", 6, 8);
					unk_0x5D96D8530B3D0904(&iLocal_41, 9);
				}
				if (unk_0x75EECC9B0572F772())
				{
					unk_0x7656EB524FEAB9B3("LESTER", 0, 0, 0, 0);
					unk_0x7656EB524FEAB9B3("LESTER", 2, 0, 0, 0);
					unk_0x7656EB524FEAB9B3("LESTER", 3, 0, 1, 0);
					unk_0x7656EB524FEAB9B3("LESTER", 4, 1, 1, 0);
					unk_0x7656EB524FEAB9B3("LESTER", 5, 0, 0, 0);
					unk_0x7656EB524FEAB9B3("LESTER", 7, 0, 0, 0);
					unk_0x7656EB524FEAB9B3("LESTER", 8, 1, 0, 0);
					unk_0xA2888AACD3C45CCA("LESTER", 1, 0, 0, 0);
				}
			}
			if (func_158(91))
			{
				if (func_151(0))
				{
					if (func_293(&iLocal_44, 0, 0, 0, 0) == 1)
					{
						func_292();
						iLocal_125 = unk_0x7D6CA5F52B3748BF(Local_176.f_1.f_394 - Local_176.f_1.f_397, Local_176.f_1.f_394 + Local_176.f_1.f_397, 0, 1, 1, 1);
						iLocal_126 = unk_0x544B74C043CE9948(Local_176.f_1.f_394, Local_176.f_1.f_397 * Vector(1,5f, 1,5f, 1,5f), 0f, 0, 7);
						unk_0x10F3BFFADF2CE3DA(Local_176.f_1.f_394 - Local_176.f_1.f_397, Local_176.f_1.f_394 + Local_176.f_1.f_397);
						unk_0x17E8C6920A1E386F(Local_176.f_1.f_394 - Local_176.f_1.f_397, Local_176.f_1.f_394 + Local_176.f_1.f_397, false, 0);
						if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
						{
							unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
							unk_0x34D79252800B23FF(0);
						}
						unk_0x5D96D8530B3D0904(&iLocal_41, 1);
					}
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 1))
			{
				if (func_291("RBHS_MCS_3"))
				{
					if (!unk_0x22A8E52414415B76())
					{
						func_72(1);
						func_263(1, 1, 1, 0, 0, 0);
						if (unk_0xC844350D5D58C99A(iLocal_46))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_46, 0))
							{
								unk_0x2E81FA494A883541(iLocal_46, 0, false);
							}
						}
						if (unk_0xC844350D5D58C99A(Global_95241.f_9[0]))
						{
							unk_0x73270B3C9CC833FD(Global_95241.f_9[0], true, 1);
							iLocal_128 = Global_95241.f_9[0];
							Global_95241.f_9[0] = 0;
						}
						if (func_99() == 0)
						{
							if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
							{
								unk_0x29E8331978B73E7F(unk_0x16F2683693E537C9(), "MICHAEL", 0, 225514697, 0);
							}
							if (unk_0xC844350D5D58C99A(iLocal_132[2]) && !unk_0x437347B10A200C4B(iLocal_132[2], 0))
							{
								unk_0x29E8331978B73E7F(iLocal_132[2], "TREVOR", 0, -1686040670, 0);
							}
							else
							{
								unk_0x29E8331978B73E7F(iLocal_132[2], "TREVOR", 2, -1686040670, 0);
								unk_0x5D96D8530B3D0904(&iLocal_41, 2);
							}
						}
						else if (func_99() == 2)
						{
							if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
							{
								unk_0x29E8331978B73E7F(unk_0x16F2683693E537C9(), "TREVOR", 0, -1686040670, 0);
							}
							if (unk_0xC844350D5D58C99A(iLocal_129) && !unk_0x437347B10A200C4B(iLocal_129, 0))
							{
								unk_0x29E8331978B73E7F(iLocal_129, "MICHAEL", 0, 225514697, 0);
							}
							else
							{
								unk_0x29E8331978B73E7F(iLocal_129, "MICHAEL", 2, 225514697, 0);
								unk_0x5D96D8530B3D0904(&iLocal_41, 3);
							}
						}
						func_194(&(Local_176.f_484), 0, 0, "MICHAEL", 1, 1);
						func_194(&(Local_176.f_484), 2, unk_0x16F2683693E537C9(), "TREVOR", 1, 1);
						func_194(&(Local_176.f_484), 3, 0, "LESTER", 1, 1);
						iLocal_42 = unk_0x1C0640BA9A7327B3();
						unk_0x4C902758BEA97C68(2048);
					}
					else
					{
						func_121();
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 19))
						{
							if (!unk_0x0F1CCD77290EE12F() && !unk_0x7BCE0E6DD4A1F749())
							{
								unk_0x82E51BCA72537B6C(500);
							}
							unk_0x5D96D8530B3D0904(&iLocal_41, 19);
						}
						if (unk_0xC844350D5D58C99A(Global_95241[0]))
						{
							unk_0x73270B3C9CC833FD(Global_95241[0], true, 1);
							unk_0xA954465BA6FDEFE2(&(Global_95241[0]));
						}
						if (unk_0xC844350D5D58C99A(Global_95241[1]))
						{
							unk_0x73270B3C9CC833FD(Global_95241[1], true, 1);
							unk_0xA954465BA6FDEFE2(&(Global_95241[1]));
						}
						if (unk_0xC844350D5D58C99A(iLocal_128))
						{
							unk_0xEBA53F35D0085654(&iLocal_128);
						}
						if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 2))
						{
							if (unk_0xC844350D5D58C99A(unk_0x6450C2A9FBA3C3BF("Trevor", -1686040670)))
							{
								iLocal_132[2] = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("Trevor", -1686040670));
								unk_0x0674E58A79778E99(&iLocal_41, 2);
							}
						}
						if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 3))
						{
							if (unk_0xC844350D5D58C99A(unk_0x6450C2A9FBA3C3BF("Michael", 225514697)))
							{
								iLocal_129 = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("Michael", 225514697));
								unk_0x0674E58A79778E99(&iLocal_41, 3);
							}
						}
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 4))
						{
							if ((unk_0x8F677B1F58B4741C() > 43160 && func_296(38)) || (unk_0x8F677B1F58B4741C() > 42740 && func_296(37)))
							{
								func_115(2, 0, 1);
								func_115(2, 1, 1);
								unk_0x5D96D8530B3D0904(&iLocal_41, 4);
							}
						}
						if (func_99() == 0)
						{
							if (unk_0x3148AE92ED70DC30("TREVOR", -1686040670))
							{
								if (!unk_0xC844350D5D58C99A(iLocal_132[2]))
								{
									iLocal_132[2] = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("Trevor", -1686040670));
									unk_0x0674E58A79778E99(&iLocal_41, 2);
								}
								if (!unk_0x437347B10A200C4B(iLocal_132[2], 0))
								{
									unk_0x11AD11297DC58CC7(iLocal_132[2], true);
									unk_0x4E885A246A9D983A(iLocal_132[2], 208, true);
									unk_0x4E885A246A9D983A(iLocal_132[2], 118, false);
									unk_0x4E885A246A9D983A(iLocal_132[2], 213, false);
								}
							}
						}
						else if (func_99() == 2)
						{
							if (unk_0x3148AE92ED70DC30("MICHAEL", 225514697))
							{
								if (!unk_0xC844350D5D58C99A(iLocal_129))
								{
									iLocal_129 = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("Michael", 225514697));
									unk_0x0674E58A79778E99(&iLocal_41, 3);
								}
								if (!unk_0x437347B10A200C4B(iLocal_129, 0))
								{
									unk_0x11AD11297DC58CC7(iLocal_129, true);
									unk_0x4E885A246A9D983A(iLocal_129, 208, true);
									unk_0x4E885A246A9D983A(iLocal_129, 118, false);
									unk_0x4E885A246A9D983A(iLocal_129, 213, false);
								}
							}
						}
						if (unk_0x3148AE92ED70DC30("LESTER", 0))
						{
							if (unk_0xC844350D5D58C99A(iLocal_128))
							{
								unk_0xA47B46945FF6DE74(iLocal_128, 1398,198f, 3605,6f, 37,9419f, 1, false, 0, 1);
								unk_0xD8F6A53F4799FAFE(iLocal_128, 194,2789f);
								unk_0xEBA53F35D0085654(&iLocal_128);
							}
						}
						if (unk_0xEABED1927EFB48CA(0))
						{
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 0))
							{
								func_290();
								unk_0x5D96D8530B3D0904(&iLocal_41, 0);
							}
							unk_0x536F1BE96C726C4B(1397,884f, 3594,627f, 33,9271f, 50f, 1, 0, 0, false);
							func_154(24);
							func_114(37, 0);
							func_114(38, 0);
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 4))
							{
								func_115(2, 0, 1);
								func_115(2, 1, 1);
								func_275(&Local_176);
								unk_0x5D96D8530B3D0904(&iLocal_41, 4);
							}
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 18))
							{
								if (!unk_0x437347B10A200C4B(iLocal_129, 0))
								{
									unk_0x4A4806F9D471E491(iLocal_129, false, 0);
								}
								if (!unk_0x437347B10A200C4B(iLocal_128, 0))
								{
									unk_0x4A4806F9D471E491(iLocal_128, false, 0);
								}
								if (unk_0xC844350D5D58C99A(iLocal_132[2]))
								{
									unk_0x4A4806F9D471E491(iLocal_132[2], false, 0);
								}
								unk_0x5D96D8530B3D0904(&iLocal_41, 18);
							}
						}
						if (unk_0xEAD40E09B5AA81FC())
						{
							unk_0x5D96D8530B3D0904(&iLocal_41, 20);
						}
						else if (!unk_0x0F1CCD77290EE12F() && !unk_0x7BCE0E6DD4A1F749())
						{
							unk_0x82E51BCA72537B6C(800);
						}
						if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 20))
						{
							if (unk_0x757EF87A33649210())
							{
								if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 0))
								{
									func_290();
									unk_0x5D96D8530B3D0904(&iLocal_41, 0);
								}
								if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 8))
								{
									unk_0x0674E58A79778E99(&iLocal_41, 8);
								}
								if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 9))
								{
									unk_0x0674E58A79778E99(&iLocal_41, 9);
								}
								func_114(37, 0);
								func_114(38, 0);
								if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 4))
								{
									func_115(2, 0, 1);
									func_115(2, 1, 1);
									unk_0x5D96D8530B3D0904(&iLocal_41, 4);
								}
							}
						}
					}
				}
			}
		}
		else
		{
			if (func_151(0))
			{
				if (func_293(&iLocal_44, 0, 0, 0, 0) == 1)
				{
					unk_0x5D96D8530B3D0904(&iLocal_41, 1);
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 1))
			{
				func_194(&(Local_176.f_484), 0, 0, "MICHAEL", 1, 1);
				func_194(&(Local_176.f_484), 2, unk_0x16F2683693E537C9(), "TREVOR", 1, 1);
				func_194(&(Local_176.f_484), 3, 0, "LESTER", 1, 1);
				func_290();
				func_114(37, 0);
				func_114(38, 0);
			}
		}
	}
	else
	{
		if (iLocal_45 != -1)
		{
			func_288(&iLocal_45);
		}
		if (unk_0xA0F4292EA950943D("RBHS_MCS_3"))
		{
			unk_0x5C8D148FC238F38A();
		}
		if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 8))
		{
			unk_0x0674E58A79778E99(&iLocal_41, 8);
		}
		if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 9))
		{
			unk_0x0674E58A79778E99(&iLocal_41, 9);
		}
	}
}

void func_288(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (Global_76619 == *iParam0)
	{
		func_289(*iParam0, 0);
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

void func_289(int iParam0, bool bParam1)
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

void func_290()
{
	func_85(1, 2, 1);
	func_85(2, 2, 1);
	func_271(&Local_176);
	func_67(&Local_176);
}

bool func_291(char* sParam0)
{
	bVar0 = unk_0xA0F4292EA950943D(sParam0);
	if (!Global_76621)
	{
		if (!bVar0)
		{
			Global_76621 = 1;
		}
	}
	return bVar0;
}

void func_292()
{
	Global_98783 = 1;
}

int func_293(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_241(0))
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
		if (!func_151(iParam2))
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
			func_294(iParam0, iParam4);
		}
	}
	return 2;
}

void func_294(var uParam0, int iParam1)
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

bool func_295(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_296(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

void func_297(var uParam0, int iParam1)
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

void func_298(var uParam0, var uParam1)
{
	func_308(uParam0, 2, "HEIST_PALETO", "BOARD3", "RHFAUD", "CRWAUD", 13, 1, 13, 13, uParam1, 1394,511f, 3607,037f, 36,94191f, 7,5f, 7,75f, 6,75f);
	func_307(uParam0, 750, 540, 2,03f, 1,3f, 3,35f, 1,88f, 1,85f, 375, 252, 150, 400, 0, 0, 0, 0, 0, 0, 0, 0, 620, 370, 0, 85, 695, 215);
	func_306(uParam0, 20f, 22f, 28f);
	func_305(uParam0, "", "", "", "", "", "RHP1", "RHP8", "RHFP11");
	func_304(uParam0, 1, "CRW_GM", "");
	func_304(uParam0, 4, "CRW_NR", "");
	func_304(uParam0, 5, "CRW_DJ", "");
	func_304(uParam0, 10, "CRW_PM", "CRM_PM");
	func_304(uParam0, 11, "", "CRM_CH");
	func_303(uParam0, 18, "RHP10B");
	func_302(uParam0, 0, 1, 0, 0);
	func_302(uParam0, 1, 1, 0, 0);
	func_302(uParam0, 2, 1, 0, 0);
	func_302(uParam0, 3, 1, 0, 0);
	func_302(uParam0, 4, 1, 0, 0);
	func_302(uParam0, 5, 1, 0, 0);
	func_302(uParam0, 6, 1, 0, 0);
	func_302(uParam0, 7, 1, 0, 0);
	func_302(uParam0, 8, 1, 0, 0);
	func_302(uParam0, 9, 1, 0, 0);
	func_302(uParam0, 10, 1, 0, 0);
	func_302(uParam0, 12, 1, 0, 0);
	func_302(uParam0, 14, 1, 0, 0);
	func_302(uParam0, 15, 1, 0, 0);
	func_302(uParam0, 16, 1, 0, 0);
	func_301(uParam0, 1, 1, "H_TD_TOWN");
	func_301(uParam0, 1, 1, "H_TD_ALAR");
	func_301(uParam0, 1, 1, "H_TD_COPS");
	func_301(uParam0, 1, 2, "H_TD_CREW");
	func_301(uParam0, 1, 3, "H_TD_MILI");
	func_300(uParam0, 1, 67, 78);
	func_300(uParam0, 1, 204, 61);
	func_300(uParam0, 1, 217, 256);
	func_300(uParam0, 1, 337, 24);
	func_300(uParam0, 1, 466, 32);
	func_300(uParam0, 1, 570, 20);
	func_300(uParam0, 1, 565, 150);
	func_300(uParam0, 1, 671, 184);
	func_300(uParam0, 1, 379, 311);
	func_300(uParam0, 1, 50, 192);
	func_299(uParam0, 1, "RHP5", 396, 232, 1);
	func_299(uParam0, 1, "RHP6", 175, 150, 1);
	func_299(uParam0, 1, "RHP7", 455, 85, 1);
}

void func_299(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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

void func_300(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (uParam0->f_33 < 20)
	{
		uParam0->f_75[uParam0->f_33] = iParam1;
		uParam0->f_34[uParam0->f_33] = iParam2;
		uParam0->f_34[uParam0->f_33].f_1 = iParam3;
		uParam0->f_33++;
	}
}

void func_301(var uParam0, int iParam1, int iParam2, char* sParam3)
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

void func_302(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_303(var uParam0, int iParam1, char* sParam2)
{
	StringCopy(&Var0, sParam2, 8);
	if (unk_0x7F8A39872A07D2CE(sParam2, ""))
	{
		return;
	}
	uParam0->f_304[iParam1] = { Var0 };
}

void func_304(var uParam0, int iParam1, char* sParam2, char* sParam3)
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

void func_305(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8)
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

void func_306(var uParam0, float fParam1, float fParam2, float fParam3)
{
	uParam0->f_9 = fParam1;
	uParam0->f_10 = fParam2;
	uParam0->f_11 = fParam3;
}

void func_307(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
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

void func_308(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, vector3 vParam11, vector3 vParam14)
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

int func_309(int iParam0)
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

void func_310()
{
	while (!func_311(&Local_176))
	{
		wait(0);
	}
	func_114(37, 0);
	func_114(38, 0);
	func_114(40, 0);
	func_114(39, 0);
	func_85(1, 2, 0);
	func_85(2, 2, 0);
	unk_0x2952D66A502EA873(iLocal_125, 0);
	if (iLocal_126 != -1)
	{
		if (unk_0x49083FDB78AC0509(iLocal_126))
		{
			unk_0xDDABC98CFF1A4C60(iLocal_126);
		}
	}
	unk_0xEFED0CD6E25037B9();
	unk_0x17E8C6920A1E386F(Local_176.f_1.f_394 - Local_176.f_1.f_397, Local_176.f_1.f_394 + Local_176.f_1.f_397, true, 0);
	unk_0x34D79252800B23FF(5);
	unk_0x5C8D148FC238F38A();
	if (iLocal_44 != -1)
	{
		func_162(&iLocal_44);
	}
	unk_0x10FAF14A60A0DBE1();
}

int func_311(var uParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 1))
	{
		func_275(uParam0);
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_449, 0))
	{
		func_274(uParam0);
	}
	return 1;
}

