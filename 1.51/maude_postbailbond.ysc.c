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
	iLocal_85 = -1;
	iLocal_86 = -1;
	if (unk_0x2EBF608FFE6CA406(19))
	{
		func_56();
	}
	if (!func_52())
	{
		func_56();
	}
	if (!func_51(iLocal_82))
	{
		func_56();
	}
	else
	{
		func_50();
		iLocal_83 = unk_0x1C0640BA9A7327B3();
		iLocal_85 = func_49();
		iLocal_84 = 0;
		func_48(1, &uLocal_88);
	}
	while (true)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (!func_51(iLocal_82))
			{
				func_56();
			}
			vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
			vVar3 = { unk_0x68F4C0EC296D3901(iLocal_82, true) };
			if (vdist2(vVar0, vVar3) >= (100f * 100f))
			{
				func_56();
			}
			switch (iLocal_87)
			{
				case 0:
					func_43(vVar3, vVar0, 18000, 1101004800);
					if (func_25(&iLocal_82, 0))
					{
						func_24();
						func_16(0);
						func_12(vVar3, vVar0);
						unk_0x3F423BF5B8125A50(func_11());
						iLocal_87 = 1;
					}
					break;
				
				case 1:
					if (func_5(&iLocal_82, &iLocal_79, &iLocal_86))
					{
						iLocal_87 = 2;
					}
					break;
				
				case 2:
					if (!func_4(iLocal_82, 1805844857) && !unk_0xE9FDA1035CFEA94F(iLocal_82))
					{
						if (!unk_0xB4ECF989E2C1DAC8(iLocal_82, func_11(), func_3(), 3))
						{
							func_1();
						}
					}
					else
					{
						func_56();
					}
					break;
				}
		}
		wait(0);
	}
}

void func_1()
{
	if (func_51(iLocal_82))
	{
		func_2(&iLocal_82);
		unk_0xF3268524E9BE6D6E(iLocal_82, unk_0x16F2683693E537C9(), 10000f, -1, 0, 0);
		unk_0xFADC0A217229F6B5(iLocal_82, true);
	}
}

void func_2(int iParam0)
{
	if (func_51(*iParam0))
	{
		unk_0xBAFED2F6486F771A(*iParam0, 2, false);
		unk_0xBAFED2F6486F771A(*iParam0, 64, false);
		unk_0xBAFED2F6486F771A(*iParam0, 128, false);
		unk_0xBAFED2F6486F771A(*iParam0, 8, false);
		unk_0xBAFED2F6486F771A(*iParam0, 1, false);
		unk_0xBAFED2F6486F771A(*iParam0, 32, false);
		unk_0xAFF39FB306F8E232(*iParam0, 5, false);
		unk_0xAFF39FB306F8E232(*iParam0, 17, true);
		unk_0x4E885A246A9D983A(*iParam0, 118, true);
	}
}

char* func_3()
{
	return "female_Flee_Table_Left_Maude";
}

int func_4(int iParam0, int iParam1)
{
	if (func_51(iParam0))
	{
		if (unk_0xD1960163A3042274(iParam0, iParam1) == 1 || unk_0xD1960163A3042274(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_5(int iParam0, int iParam1, int iParam2)
{
	if (func_51(*iParam0))
	{
		if (unk_0xB4ECF989E2C1DAC8(*iParam0, func_10(), func_9(), 3))
		{
			if (!unk_0x869EFD0BC0868856(*iParam0) || unk_0xA48EBBEA418ADC94(*iParam0))
			{
				unk_0x3F423BF5B8125A50(func_11());
				if (unk_0xB4AE0788C1587752(func_11()))
				{
					*iParam2 = unk_0xE9744DB7B8CA6965(2727,4f, 4145,56f, 43,68f, 0f, 0f, -92,17f, 2);
					unk_0xC90224D9E95E5E3A(*iParam2, false);
					unk_0xEFC3DF9D33E248D8(*iParam2, false);
					if (func_4(*iParam0, 1785177548))
					{
						unk_0x1BF8B16C32704027(*iParam0, -1000f, 1);
					}
					unk_0x915804B434753CBD(*iParam0, *iParam2, func_11(), func_3(), 1000f, -4f, 4626, 0, 1148846080, 0);
					unk_0xF895E10BF4C72645(*iParam0, 0, 0);
					if (func_8(*iParam1))
					{
						if (unk_0xB4ECF989E2C1DAC8(*iParam1, func_10(), func_7(), 3))
						{
							unk_0x1BF8B16C32704027(*iParam1, -16f, 0);
						}
						iVar0 = 0;
						iVar0 += 16;
						iVar0 += 64;
						iVar0 += 512;
						iVar0 += 4096;
						unk_0xE14EC663EED44AD5(*iParam1, *iParam2, func_6(), func_11(), 16f, -4f, iVar0, 1148846080);
					}
					return 1;
				}
			}
			else
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

char* func_6()
{
	return "Female_Flee_Table_Left_Maude_Chair";
}

char* func_7()
{
	return "base_chair";
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

char* func_9()
{
	return "base";
}

char* func_10()
{
	return "special_ped@maude@base";
}

char* func_11()
{
	return "special_ped@maude@exit_flee";
}

void func_12(vector3 vParam0, vector3 vParam3)
{
	if (func_51(iLocal_82))
	{
		if (!unk_0x65636D4556D82155(iLocal_82))
		{
			if (vdist2(vParam3, vParam0) < (35f * 35f))
			{
				func_13(&iLocal_82, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 3);
			}
		}
	}
}

void func_13(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (func_51(*iParam0))
	{
		bVar0 = unk_0x9645CD1B04C4BFD3(*iParam0);
		if (bVar0)
		{
			unk_0x33CE5A9E32EA10B2(*iParam0, false);
		}
		func_14(*iParam0, sParam1, sParam2, iParam3);
		if (bVar0)
		{
			unk_0x33CE5A9E32EA10B2(*iParam0, true);
		}
	}
}

void func_14(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xEB0A515D699A7E90(iParam0, sParam1, sParam2, func_15(iParam3), 0);
}

int func_15(int iParam0)
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

void func_16(bool bParam0)
{
	if (func_23())
	{
		Var0 = { func_22() };
		sVar6 = func_21();
		if (unk_0x7F8A39872A07D2CE(&Var0, sVar6))
		{
			if (bParam0)
			{
				func_19();
			}
			else
			{
				func_17();
			}
		}
	}
}

void func_17()
{
	Global_19671 = 0;
	func_18();
}

void func_18()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_19()
{
	Global_19671 = 0;
	func_20();
}

void func_20()
{
	if (unk_0x25037C66EB32B076())
	{
		unk_0x8BD0DC8EEFDC56D8();
		Global_21816 = 0;
		unk_0x5CEB4DB888A62073(true);
		Global_20805 = 6;
		return;
	}
}

char* func_21()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_24981, 3))
	{
		return "BB4_loiter";
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_24981, 2))
	{
		return "BB3_loiter";
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_24981, 1))
	{
		return "BB2_loiter";
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_24981, 0))
	{
		return "BB1_loiter";
	}
	return "MAUDE_loiter";
}

struct<6> func_22()
{
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

int func_23()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

void func_24()
{
	if (unk_0xC844350D5D58C99A(iLocal_81))
	{
		unk_0x1E9649458B15960F(iLocal_81, false);
	}
	if (unk_0xC844350D5D58C99A(iLocal_80))
	{
		unk_0x1E9649458B15960F(iLocal_80, false);
	}
}

int func_25(int iParam0, bool bParam1)
{
	if (func_51(*iParam0))
	{
		if ((unk_0x688A90832774AB83(*iParam0) || unk_0xE147126C9AD09A60(*iParam0)) || unk_0xD24FAF25ADC00F44(*iParam0))
		{
			return 1;
		}
		if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
		{
			if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), *iParam0))
			{
				return 1;
			}
			if (unk_0xC844350D5D58C99A(iLocal_79))
			{
				if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iLocal_79))
				{
					return 1;
				}
			}
			if (unk_0xC844350D5D58C99A(iLocal_80))
			{
				if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iLocal_80))
				{
					return 1;
				}
			}
			if (unk_0xC844350D5D58C99A(iLocal_81))
			{
				if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iLocal_81))
				{
					return 1;
				}
			}
		}
		if (unk_0xFA4CE147B4D9AEE0(*iParam0, 61))
		{
			return 1;
		}
		if (unk_0x869EFD0BC0868856(*iParam0))
		{
			if (unk_0x12DE711B1C681E9E(*iParam0, unk_0x16F2683693E537C9(), 3f, 3f, 3f, 0, 1, 0))
			{
				return 1;
			}
		}
		if (unk_0xFA4CE147B4D9AEE0(*iParam0, 51))
		{
			return 1;
		}
		if (func_33(*iParam0, 1126825984))
		{
			return 1;
		}
		if (func_26(*iParam0, 1, 0, 0, 0))
		{
			return 1;
		}
		if (unk_0x681F21BF9F7B449B(-1, unk_0x68F4C0EC296D3901(*iParam0, true), 15f))
		{
			return 1;
		}
		if (unk_0xFA4CE147B4D9AEE0(*iParam0, 73))
		{
			return 1;
		}
		if (bParam1)
		{
			if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_26(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1,86f;
		fVar1 = 1,86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_8(unk_0x16F2683693E537C9()) && func_8(iParam0))
	{
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar2, 1);
		if (iVar2 == 883325847)
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_32(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_27(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x52AE17073D025311(unk_0x16F2683693E537C9()))
			{
				if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
				{
					if (unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(iParam0, true), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1,86f;
					fVar1 = 1,86f;
				}
				if (func_32(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_27(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_27(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	vVar0 = { unk_0x68F4C0EC296D3901(iParam0, true) };
	vVar3 = { vVar0 };
	vVar0.x = (vVar0.x - fParam1);
	vVar0.y = (vVar0.y - fParam1);
	vVar0.z = (vVar0.z - fParam1);
	vVar3.x = (vVar3.x + fParam1);
	vVar3.y = (vVar3.y + fParam1);
	vVar3.z = (vVar3.z + fParam1);
	if (bParam2)
	{
		if (((unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, true), -1813897027, fParam1, 1) || unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, true), 615608432, fParam1, 1)) || unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, true), -37975472, fParam1, 1)) || unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, true), 741814745, 5f, 1))
		{
			if (bParam3)
			{
				if (func_28(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_28(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x723EE7F83DF1497D(vVar0, vVar3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_28(int iParam0, float fParam1)
{
	if ((((unk_0x68E45B0EC23881A7(iParam0, -1813897027, fParam1, &vVar1, &uVar0, 0) || unk_0x68E45B0EC23881A7(iParam0, -37975472, fParam1, &vVar1, &uVar0, 0)) || unk_0x68E45B0EC23881A7(iParam0, -1600701090, fParam1, &vVar1, &uVar0, 0)) || unk_0x68E45B0EC23881A7(iParam0, 741814745, fParam1, &vVar1, &uVar0, 0)) || unk_0x68E45B0EC23881A7(iParam0, 615608432, fParam1, &vVar1, &uVar0, 0))
	{
		if (func_29(iParam0, vVar1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_29(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	vVar0 = { func_31(vParam1 - unk_0x68F4C0EC296D3901(iParam0, true)) };
	if (fParam4 < 0,1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		vVar3 = { unk_0x08D89CE2E20AE305(iParam0) };
	}
	else
	{
		vVar3 = { func_31(unk_0x64430C979F516F7A(iParam0, 31086, 0f, 5f, 0f) - unk_0x64430C979F516F7A(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_30(vVar3, vVar0);
	if (fVar6 <= cos((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_30(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_31(vector3 vParam0)
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

int func_32(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
		{
			if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(iParam0, true), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0, float fParam1)
{
	if (func_8(unk_0x16F2683693E537C9()) && func_8(iParam0))
	{
		if (func_42(iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
		{
			if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_34(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_34(int iParam0, float fParam1)
{
	return func_35(iParam0, unk_0x16F2683693E537C9(), fParam1, 1, 250, 7);
}

bool func_35(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	iVar4 = func_41(iParam0, iParam1);
	if (!func_8(iParam0) || !func_8(iParam1))
	{
		if (iVar4 != -1)
		{
			func_40(&(Local_37[iVar4]));
		}
		return 0;
	}
	if (!func_39(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_38();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_37[iVar4].f_1 = iParam0;
		Local_37[iVar4].f_2 = iParam1;
	}
	vVar1 = { unk_0x64430C979F516F7A(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_36(&(Local_37[iVar4]), vVar1, iParam1, &(Local_37[iVar4].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x1C0640BA9A7327B3() - Local_37[iVar4].f_3) < iParam4);
}

int func_36(var uParam0, vector3 vParam1, int iParam4, var uParam5, int iParam6, int iParam7)
{
	iVar7 = 0;
	if (!func_8(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		vVar1 = { func_37(iParam4, iParam7) };
		*uParam0 = unk_0xCD02F8660C47B801(vParam1, vVar1 + vVar1 - vParam1 * Vector(0,1f, 0,1f, 0,1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0x1EC301670B54C6DE(*uParam0, &uVar0, &vVar1, &uVar4, &iVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0xEC560E589DF8370E(iVar7))
	{
		func_8(iVar7);
		if (unk_0x940C1429253D3B1B(iVar7) == iParam4)
		{
			if (bLocal_78)
			{
				unk_0xBA5BBB3ADDA49094(vParam1, unk_0x68F4C0EC296D3901(iParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x1C0640BA9A7327B3();
			return 1;
		}
		return 0;
	}
	if (unk_0xE2F1E99DD161A861(iVar7))
	{
		func_8(iVar7);
		if (unk_0x405E212DDE472467(iParam4, 0))
		{
			if (unk_0x96A5FE5834B81CE7(iVar7) == unk_0x6937EA2286828455(iParam4, 0))
			{
				if (bLocal_78)
				{
					unk_0xBA5BBB3ADDA49094(vParam1, unk_0x68F4C0EC296D3901(iParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x1C0640BA9A7327B3();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_37(int iParam0, int iParam1)
{
	if (iParam1 == 7)
	{
		iVar0 = unk_0x09AC81E49EA267F7(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0x68F4C0EC296D3901(iParam0, true);
	}
	else if (iParam1 == 1)
	{
		return unk_0x64430C979F516F7A(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x64430C979F516F7A(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x64430C979F516F7A(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x64430C979F516F7A(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x64430C979F516F7A(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x64430C979F516F7A(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0x68F4C0EC296D3901(iParam0, true);
}

int func_38()
{
	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if ((Local_37[iVar0] == 0 && Local_37[iVar0].f_1 == 0) && Local_37[iVar0].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_39(int iParam0, int iParam1, float fParam2, int iParam3)
{
	vVar0 = { func_31(unk_0x68F4C0EC296D3901(iParam1, true) - unk_0x68F4C0EC296D3901(iParam0, true)) };
	if (fParam2 < 0,1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar3 = { unk_0x08D89CE2E20AE305(iParam0) };
	}
	else
	{
		vVar3 = { func_31(unk_0x64430C979F516F7A(iParam0, 31086, 0f, 5f, 0f) - unk_0x64430C979F516F7A(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_30(vVar3, vVar0);
	if (fVar6 <= cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

void func_40(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_41(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if (Local_37[iVar0].f_1 == iParam0 && Local_37[iVar0].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_42(int iParam0)
{
	if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 6))
	{
		return 1;
	}
	return 0;
}

int func_43(vector3 vParam0, vector3 vParam3, int iParam6, float fParam7)
{
	if (iLocal_84 < iLocal_85)
	{
		if (!func_23())
		{
			if (vdist2(vParam3, vParam0) < (fParam7 * fParam7))
			{
				if (unk_0x1C0640BA9A7327B3() - iLocal_83) > (iParam6 + unk_0x09AC81E49EA267F7(0, 2000))
				{
					uVar0 = 16;
					func_47(&uVar0, 3, iLocal_82, "MAUDE", 0, 1);
					cVar165 = func_46();
					sVar166 = func_21();
					func_44(&uVar0, cVar165, sVar166, 7, 0, 0);
					iLocal_83 = unk_0x1C0640BA9A7327B3();
					iLocal_84++;
					return 1;
				}
			}
		}
		else
		{
			iLocal_83 = unk_0x1C0640BA9A7327B3();
		}
	}
	return 0;
}

void func_44(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_45(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0x5D96D8530B3D0904(&Global_19671, 0);
	Global_20808 = iParam3;
	StringCopy(&Global_20795, sParam2, 24);
}

void func_45(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

char* func_46()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_24981, 3))
	{
		return "BB4AUD";
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_24981, 2))
	{
		return "BB3AUD";
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_24981, 1))
	{
		return "BB2AUD";
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_24981, 0))
	{
		return "BB1AUD";
	}
	return "MAUDEAU";
}

void func_47(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_48(bool bParam0, var uParam1)
{
	vVar0 = { 2711,198f, 4134,425f, 32,90168f };
	vVar3 = { 2739,981f, 4155,221f, 50,28859f };
	if (bParam0)
	{
		*uParam1 = unk_0x7D6CA5F52B3748BF(vVar0, vVar3, 0, 1, 1, 1);
		unk_0x10F3BFFADF2CE3DA(vVar0, vVar3);
		unk_0xE342F209E49C5314(vVar0, vVar3, false, 1);
		unk_0x21688103CC7F9B19(vVar0, vVar3, 0);
		unk_0xF858EFDE1871B5F2(2697,222f, 4119,894f, 42,79107f, 2746,04f, 4162,974f, 43,62732f, false, 1);
		unk_0x536F1BE96C726C4B(2728,333f, 4144,778f, 43,29292f, 7,5f, 1, 0, 0, false);
	}
	else
	{
		unk_0x2952D66A502EA873(*uParam1, 0);
		unk_0xEFED0CD6E25037B9();
		unk_0xE342F209E49C5314(vVar0, vVar3, true, 1);
		unk_0xF5894FEB702E7E76(2697,222f, 4119,894f, 42,79107f, 2746,04f, 4162,974f, 43,62732f, true);
	}
}

int func_49()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_24981, 3))
	{
		return 4;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_24981, 2))
	{
		return 4;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_24981, 1))
	{
		return 4;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_24981, 0))
	{
		return 3;
	}
	return 4;
}

void func_50()
{
	if (func_51(iLocal_82))
	{
		if (!unk_0xAF6690C489CC6203(iLocal_82))
		{
			unk_0x73270B3C9CC833FD(iLocal_82, true, 0);
		}
		unk_0x11AD11297DC58CC7(iLocal_82, true);
		unk_0x6D80F1AEBA734886(iLocal_82, 0);
		unk_0x25C5402CC10F76CD(iLocal_82, false);
		unk_0x6DF7BF67E86AAE86(iLocal_82, 1862763509);
		unk_0x8685456FA9090367(iLocal_82, 0);
		unk_0xBB46CD6FAFB19C92(iLocal_82, 0);
		unk_0x4E885A246A9D983A(iLocal_82, 118, false);
		vVar0 = { 2728,33f, 4145,6f, 43,89f };
		if (unk_0xBF75E4DF4C367CD9(vVar0, 10f, -380698483, 0))
		{
			iLocal_80 = unk_0x4B72871A3BE7B474(vVar0, 10f, -380698483, 1, 0, 1);
			if (func_8(iLocal_80))
			{
				unk_0xA47B46945FF6DE74(iLocal_80, 2727,4f, 4145,56f, 43,68f, 1, false, 0, 1);
				unk_0xD8F6A53F4799FAFE(iLocal_80, -92,17f);
				unk_0x1E9649458B15960F(iLocal_80, true);
			}
		}
		if (unk_0xBF75E4DF4C367CD9(vVar0, 10f, 1385417869, 0))
		{
			iLocal_81 = unk_0x4B72871A3BE7B474(vVar0, 10f, 1385417869, 0, 0, 1);
			if (func_8(iLocal_81))
			{
				if (!unk_0xAF6690C489CC6203(iLocal_81))
				{
					unk_0x73270B3C9CC833FD(iLocal_81, true, 0);
				}
				unk_0xA47B46945FF6DE74(iLocal_81, 2727,686f, 4145,715f, 44,08f, 1, false, 0, 1);
				unk_0xD8F6A53F4799FAFE(iLocal_81, 71f);
				unk_0x1E9649458B15960F(iLocal_81, true);
			}
		}
		if (unk_0xBF75E4DF4C367CD9(vVar0, 10f, -741944541, 0))
		{
			iLocal_79 = unk_0x4B72871A3BE7B474(vVar0, 10f, -741944541, 0, 0, 1);
			if (func_8(iLocal_79))
			{
				if (!unk_0xAF6690C489CC6203(iLocal_79))
				{
					unk_0x73270B3C9CC833FD(iLocal_79, true, 0);
				}
				unk_0xA47B46945FF6DE74(iLocal_79, 2728,35f, 4145,59f, 43,3f, 1, false, 0, 1);
				unk_0xD8F6A53F4799FAFE(iLocal_79, -91,28f);
			}
		}
	}
}

int func_51(int iParam0)
{
	if (func_8(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_52()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		iVar0 = unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar2, -1);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (func_51(uVar2[iVar1]))
			{
				if (unk_0x134B62B726CEC8E6(uVar2[iVar1]) == func_53(62))
				{
					iLocal_82 = uVar2[iVar1];
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_53(int iParam0)
{
	if (!func_55(iParam0))
	{
		return func_54(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_54(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_55(int iParam0)
{
	return iParam0 < 3;
}

void func_56()
{
	func_48(0, &uLocal_88);
	if (func_8(iLocal_81))
	{
		unk_0x1E9649458B15960F(iLocal_81, false);
	}
	func_58(&iLocal_81, 0);
	if (func_8(iLocal_80))
	{
		unk_0x1E9649458B15960F(iLocal_80, false);
	}
	func_58(&iLocal_80, 0);
	if (func_8(iLocal_79))
	{
		unk_0x1E9649458B15960F(iLocal_79, false);
		if (unk_0xB4ECF989E2C1DAC8(iLocal_79, "special_ped@maude@base", "base_chair", 3))
		{
			unk_0x7720CBBC7DD82563(iLocal_79, "base_chair", "special_ped@maude@base", -1000f);
			unk_0x1BF8B16C32704027(iLocal_79, -1000f, 1);
		}
		else if (unk_0xB4ECF989E2C1DAC8(iLocal_79, func_11(), "Female_Flee_Table_Left_Maude_Chair", 3))
		{
			unk_0x7720CBBC7DD82563(iLocal_79, "Female_Flee_Table_Left_Maude_Chair", func_11(), -1000f);
			unk_0x1BF8B16C32704027(iLocal_79, -1000f, 1);
		}
	}
	func_58(&iLocal_79, 0);
	if (func_51(iLocal_82))
	{
		unk_0xFADC0A217229F6B5(iLocal_82, true);
		unk_0x4E885A246A9D983A(iLocal_82, 118, true);
	}
	func_57(&iLocal_82, 1, 0, 1);
	unk_0x8D17794CE3273D70(func_11());
	unk_0x10FAF14A60A0DBE1();
}

void func_57(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(*iParam0))
		{
			unk_0xE8832A9E16A57A1F(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				unk_0x8FB4E06C94958F84(*iParam0);
			}
			unk_0xFADC0A217229F6B5(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				unk_0x11AD11297DC58CC7(*iParam0, false);
			}
		}
		unk_0x6DAD7906B73F064D(iParam0);
	}
}

void func_58(int iParam0, bool bParam1)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (unk_0xBDEB2DEEF1D23A18(*iParam0))
		{
			unk_0x15AFB6CBDE990FB6(*iParam0, 1, true);
		}
		if (!bParam1)
		{
			unk_0xEEEE2E5FA6F78DF0(iParam0);
		}
		else
		{
			unk_0xAA2AE6161CB0D2DC(*iParam0);
		}
	}
}

