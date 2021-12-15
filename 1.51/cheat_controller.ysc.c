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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = 1;
	iLocal_47 = 1;
	iLocal_48 = 1;
	iLocal_49 = 1;
	iLocal_50 = 1;
	iLocal_51 = 1;
	iLocal_52 = 1;
	iLocal_53 = 1;
	iLocal_54 = 1;
	iLocal_55 = 1;
	iLocal_56 = 1;
	iLocal_57 = 1;
	iLocal_58 = 1;
	iLocal_59 = 1;
	iLocal_60 = 1;
	iLocal_61 = 1;
	iLocal_62 = 1;
	iLocal_63 = 1;
	iLocal_64 = 1;
	iLocal_65 = 1;
	iLocal_66 = 1;
	iLocal_67 = 1131912276;
	iLocal_73 = 300000;
	fLocal_78 = 1f;
	if (unk_0x2EBF608FFE6CA406(34))
	{
		func_113();
	}
	Global_31016 = 0;
	Global_31015 = 0;
	Global_31017 = 0;
	Global_31018 = 0;
	Global_31020 = 0;
	Global_31019 = 0;
	func_112();
	while (true)
	{
		func_2();
		if (((unk_0x8CD06866876216F2() && func_1(unk_0xD803B885F5E47A62(), 1, 1)) && !Global_1574201) && Global_30768 == 0)
		{
			func_113();
		}
		wait(0);
	}
}

int func_1(int iParam0, bool bParam1, bool bParam2)
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

void func_2()
{
	func_88();
	func_68();
	func_22();
	func_3(iLocal_67);
}

void func_3(int iParam0)
{
	switch (iLocal_46)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (unk_0x7C2B4C53942076F8())
			{
				func_21("CHEAT_VEHICLE_SPAWN_DENIED");
				iLocal_46 = 1;
			}
			else
			{
				func_20(iParam0);
			}
			break;
		
		case 4:
			func_4(iParam0);
			break;
		
		default:
			break;
	}
}

void func_4(int iParam0)
{
	bVar4 = false;
	if (unk_0xB87F6CF6E5628C67(iParam0))
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (unk_0xC844350D5D58C99A(iLocal_68))
			{
				if (!unk_0x437347B10A200C4B(iLocal_68, 0))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_68, 0))
					{
						vVar0 = { unk_0x68F4C0EC296D3901(iLocal_68, 1) };
						fVar3 = unk_0xD9522BA9E27E1349(iLocal_68);
						unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vVar0.x, vVar0.y, (vVar0.z + 4f), 1, 0, 0, 1);
						bVar4 = true;
					}
				}
				unk_0xA954465BA6FDEFE2(&iLocal_68);
			}
			if (!bVar4)
			{
				if (iParam0 == 970356638 || iParam0 == -2122757008)
				{
					vVar0 = { unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), -1,5f, 3,5f, 1f) };
				}
				else if (iParam0 == 788747387)
				{
					vVar0 = { unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), 0f, 6f, 2f) };
				}
				else
				{
					vVar0 = { unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), 0f, 3,5f, 1f) };
				}
				fVar3 = (unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()) + 90f);
			}
			if (func_18(iParam0, vVar0, fVar3))
			{
				iLocal_68 = unk_0x122AAB0B1D6F55AD(iParam0, vVar0, fVar3, 0, 1, 0);
				unk_0xB9FD7450C0DAB575(iLocal_68, 1084227584);
				unk_0x71199B01895C6202(iParam0);
				unk_0x046C362CF15F1935(&iLocal_68);
				func_16(sLocal_70);
				func_5(20);
			}
			else
			{
				unk_0x71199B01895C6202(iParam0);
				func_21("CHEAT_VEHICLE_SPAWN_DENIED");
			}
			iLocal_46 = 1;
		}
	}
}

void func_5(int iParam0)
{
	if (!func_15(14) && !func_14(""))
	{
		unk_0x5D96D8530B3D0904(&Global_31017, iParam0);
		Global_31020 = 1;
		func_6();
	}
}

void func_6()
{
	iVar0 = func_8();
	switch (iVar0)
	{
		case 0:
			func_7(-275504265, 1);
			break;
		
		case 1:
			func_7(1703569986, 1);
			break;
		
		case 2:
			func_7(-768138252, 1);
			break;
	}
}

void func_7(int iParam0, int iParam1)
{
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 1);
}

int func_8()
{
	func_9();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_9()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_12(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_11(unk_0x16F2683693E537C9());
			if (func_10(iVar0) && (!func_15(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_10(Global_111638.f_2358.f_539.f_4321))
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

bool func_10(int iParam0)
{
	return iParam0 < 3;
}

int func_11(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_12(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_12(int iParam0)
{
	if (func_10(iParam0))
	{
		return func_13(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_13(int iParam0)
{
	return Global_1798[iParam0];
}

int func_14(char* sParam0)
{
	if (iLocal_94 != 0)
	{
		if (func_15(14) && unk_0x0F1CCD77290EE12F())
		{
			if (unk_0x7F8A39872A07D2CE(sParam0, "CHEAT_SUPER_JUMP") && unk_0x7C2B4C53942076F8())
			{
				return 0;
			}
			if ((unk_0x7F8A39872A07D2CE(sParam0, "CHEAT_GRAVITY_MOON") && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0)) && unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

bool func_15(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_16(char* sParam0)
{
	if (func_14(""))
	{
	}
	else
	{
		unk_0x1E64CE678ED5F61E("CHEAT_ACTIVATED");
		unk_0x6B012227B3921E18(sParam0);
		func_17(unk_0x47AFB2993A42BD03(0, 1));
		unk_0x0B6E55535B9A2D0C(sParam0);
	}
}

void func_17(int iParam0)
{
	iLocal_80[iLocal_91] = iParam0;
	iLocal_91++;
	if (iLocal_91 >= 10)
	{
		iLocal_91 = 0;
	}
}

int func_18(int iParam0, vector3 vParam1, float fParam4)
{
	unk_0xA6B02C1DB14DDA13(iParam0, &vVar28, &vVar31);
	vVar34.x = (unk_0x755FF954DAE327E1((vVar31.x - vVar28.x)) / 2f);
	vVar34.y = (unk_0x755FF954DAE327E1((vVar31.y - vVar28.y)) / 2f);
	vVar34.z = (unk_0x755FF954DAE327E1((vVar31.z - vVar28.z)) / 2f);
	vVar0[0] = { vParam1 };
	vVar0[1] = { unk_0x8A5E176FF719A014(vParam1, fParam4, -vVar34.x, -vVar34.y, -vVar34.z) };
	vVar0[2] = { unk_0x8A5E176FF719A014(vParam1, fParam4, vVar34.x, -vVar34.y, -vVar34.z) };
	vVar0[3] = { unk_0x8A5E176FF719A014(vParam1, fParam4, vVar34.x, vVar34.y, -vVar34.z) };
	vVar0[4] = { unk_0x8A5E176FF719A014(vParam1, fParam4, -vVar34.x, vVar34.y, -vVar34.z) };
	vVar0[5] = { unk_0x8A5E176FF719A014(vParam1, fParam4, -vVar34.x, -vVar34.y, vVar34.z) };
	vVar0[6] = { unk_0x8A5E176FF719A014(vParam1, fParam4, vVar34.x, -vVar34.y, vVar34.z) };
	vVar0[7] = { unk_0x8A5E176FF719A014(vParam1, fParam4, vVar34.x, vVar34.y, vVar34.z) };
	vVar0[8] = { unk_0x8A5E176FF719A014(vParam1, fParam4, -vVar34.x, vVar34.y, vVar34.z) };
	if (!unk_0xD1BF3090E1F8300E(vParam1))
	{
		return 0;
	}
	uVar50 = unk_0xBEFB16071735D54D(func_19(unk_0xD803B885F5E47A62()) + Vector(1f, 0f, 0f), vParam1, 87, unk_0x16F2683693E537C9(), 0);
	unk_0x1EC301670B54C6DE(uVar50, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar44 = unk_0xBEFB16071735D54D(vVar0[1], vVar0[3], 87, unk_0x16F2683693E537C9(), 0);
	unk_0x1EC301670B54C6DE(uVar44, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar45 = unk_0xBEFB16071735D54D(vVar0[2], vVar0[4], 87, unk_0x16F2683693E537C9(), 0);
	unk_0x1EC301670B54C6DE(uVar45, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar46 = unk_0xBEFB16071735D54D(vVar0[5], vVar0[7], 87, unk_0x16F2683693E537C9(), 0);
	unk_0x1EC301670B54C6DE(uVar46, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar47 = unk_0xBEFB16071735D54D(vVar0[6], vVar0[8], 87, unk_0x16F2683693E537C9(), 0);
	unk_0x1EC301670B54C6DE(uVar47, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar48 = unk_0xBEFB16071735D54D(vVar0[1], vVar0[8], 87, unk_0x16F2683693E537C9(), 0);
	unk_0x1EC301670B54C6DE(uVar48, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar49 = unk_0xBEFB16071735D54D(vVar0[2], vVar0[7], 87, unk_0x16F2683693E537C9(), 0);
	unk_0x1EC301670B54C6DE(uVar49, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	return 1;
}

Vector3 func_19(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0);
}

void func_20(int iParam0)
{
	if (unk_0x3FC14104C3FD24D5(iParam0))
	{
		unk_0x523BCC9DC80CD82F(iParam0);
		if (unk_0xB87F6CF6E5628C67(iParam0))
		{
			iLocal_46 = 4;
		}
	}
}

void func_21(char* sParam0)
{
	if (!func_15(14))
	{
		unk_0x1E64CE678ED5F61E("CHEAT_DENIED");
		unk_0x6B012227B3921E18(sParam0);
		func_17(unk_0x47AFB2993A42BD03(0, 1));
	}
}

void func_22()
{
	func_65();
	func_64();
	func_45();
	func_44();
	func_43();
	func_39();
	func_36();
	func_32();
	func_23();
}

void func_23()
{
	switch (iLocal_66)
	{
		case 1:
			break;
		
		case 4:
			func_31(19, 1);
			func_30();
			break;
		
		case 5:
			if ((((!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || func_28()) || func_27(23)) || func_27(21)) || func_27(19))
			{
				iLocal_66 = 9;
				return;
			}
			func_25();
			break;
		
		case 9:
			func_24("CHEAT_AIM_SLOW_MO");
			func_31(19, 0);
			unk_0x9A82EEAF6CA12AEE(1f);
			iLocal_77 = 0;
			iLocal_66 = 1;
			break;
		
		default:
			break;
	}
}

void func_24(char* sParam0)
{
	if (func_14(sParam0))
	{
	}
	else
	{
		unk_0x1E64CE678ED5F61E("CHEAT_DEACTIVATED");
		unk_0x6B012227B3921E18(sParam0);
		func_17(unk_0x47AFB2993A42BD03(0, 1));
	}
}

void func_25()
{
	if (unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()))
	{
		if (unk_0x06F8112AA79C53D9(2, 25))
		{
			if (func_26(unk_0x16F2683693E537C9()) != -1569615261 && func_26(unk_0x16F2683693E537C9()) != 966099553)
			{
				unk_0x9A82EEAF6CA12AEE(fLocal_78);
			}
			else
			{
				unk_0x9A82EEAF6CA12AEE(1f);
			}
		}
		else
		{
			unk_0x9A82EEAF6CA12AEE(1f);
		}
	}
}

int func_26(int iParam0)
{
	unk_0xCAE036C45E7FC720(iParam0, &uVar0, 1);
	return uVar0;
}

int func_27(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_31015, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_28()
{
	if (((((((func_15(0) || func_15(11)) || func_15(4)) || func_15(9)) || func_15(10)) || func_15(3)) || func_15(2)) || func_29(35))
	{
		return 1;
	}
	return 0;
}

int func_29(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

void func_30()
{
	iLocal_77++;
	if (iLocal_77 > 3)
	{
		iLocal_77 = 0;
		iLocal_66 = 9;
		return;
	}
	switch (iLocal_77)
	{
		case 1:
			func_16("CHEAT_AIM_SLOW_MO1");
			fLocal_78 = 0,6f;
			break;
		
		case 2:
			func_16("CHEAT_AIM_SLOW_MO2");
			fLocal_78 = 0,4f;
			break;
		
		case 3:
			func_16("CHEAT_AIM_SLOW_MO3");
			fLocal_78 = 0,2f;
			break;
		
		default:
			break;
	}
	iLocal_66 = 5;
}

void func_31(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&Global_31016, iParam0);
		func_5(iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_31016, iParam0);
	}
}

void func_32()
{
	switch (iLocal_63)
	{
		case 1:
			break;
		
		case 4:
			func_31(16, 1);
			func_35();
			break;
		
		case 5:
			unk_0x38C3A68D7861DCFD(2, 37, 1);
			unk_0x38C3A68D7861DCFD(2, 19, 1);
			if ((((((((!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || func_28()) || func_34()) || func_33(1)) || unk_0xD245978525608929(2, 37)) || unk_0xD245978525608929(2, 19)) || func_27(23)) || func_27(21)) || func_27(16))
			{
				iLocal_63 = 9;
			}
			break;
		
		case 9:
			unk_0x38C3A68D7861DCFD(2, 37, 1);
			unk_0x38C3A68D7861DCFD(2, 19, 1);
			func_24("CHEAT_SLOW_MO");
			func_31(16, 0);
			iLocal_76 = 0;
			unk_0x9A82EEAF6CA12AEE(1f);
			iLocal_63 = 1;
			break;
		
		default:
			break;
	}
}

bool func_33(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

int func_34()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

void func_35()
{
	iLocal_76++;
	if (iLocal_76 > 3)
	{
		iLocal_63 = 9;
		return;
	}
	switch (iLocal_76)
	{
		case 1:
			func_16("CHEAT_SLOW_MO1");
			unk_0x9A82EEAF6CA12AEE(0,6f);
			break;
		
		case 2:
			func_16("CHEAT_SLOW_MO2");
			unk_0x9A82EEAF6CA12AEE(0,4f);
			break;
		
		case 3:
			func_16("CHEAT_SLOW_MO3");
			unk_0x9A82EEAF6CA12AEE(0,2f);
			break;
		
		default:
			break;
	}
	iLocal_63 = 5;
}

void func_36()
{
	switch (iLocal_64)
	{
		case 1:
			break;
		
		case 2:
			func_31(17, 1);
			unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), true);
			unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 1);
			unk_0xAA6B3A4292417750(unk_0x16F2683693E537C9(), 1, 1, 1, 1, 1, 0, 0, 0);
			unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), -72657034, 1, 0, 1);
			vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
			fVar3 = unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9());
			unk_0xE82754C349C7B581(vVar0, &fVar4, 0, 0);
			fVar4 = (fVar4 + 500f);
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vVar0.x, vVar0.y, fVar4, 1, 0, 0, 1);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), fVar3);
			iLocal_72 = unk_0x1C0640BA9A7327B3();
			unk_0x53491B90E4FD0E56(0);
			iLocal_64 = 3;
			break;
		
		case 3:
			if (func_38(1000, iLocal_72))
			{
				unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), false);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
				iLocal_72 = unk_0x1C0640BA9A7327B3();
				iLocal_64 = 4;
			}
			break;
		
		case 4:
			if (func_38(1000, iLocal_72))
			{
				unk_0x38C3A68D7861DCFD(0, 144, 1);
				unk_0x38C3A68D7861DCFD(0, 149, 1);
				if (func_8() == 0)
				{
					unk_0x64F9F278AB9DCA2C(unk_0x16F2683693E537C9(), 9, 0, 0, 0);
				}
				else
				{
					unk_0x64F9F278AB9DCA2C(unk_0x16F2683693E537C9(), 8, 0, 0, 0);
				}
				unk_0x82E51BCA72537B6C(250);
				iLocal_72 = unk_0x1C0640BA9A7327B3();
				func_16("CHEAT_SKYFALL");
				unk_0xB975E4541DDAB1F5(2);
				iLocal_64 = 5;
			}
			break;
		
		case 5:
			if ((((!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || func_28()) || func_27(23)) || func_27(21)) || func_27(17))
			{
				iLocal_64 = 9;
				break;
			}
			unk_0x38C3A68D7861DCFD(0, 144, 1);
			unk_0x3584F71E5CA29322(2);
			if (unk_0x6438374572DE9B51(unk_0x16F2683693E537C9()))
			{
				unk_0xDFC6BA855748EB10(unk_0x16F2683693E537C9(), 1, 0f, 200f, 2,5f, 0f, 0f, 0f, 0, 1, 0, 0, 0, 1);
				if (unk_0xE608C809F9416F00(unk_0x16F2683693E537C9()))
				{
					iLocal_64 = 9;
				}
			}
			else
			{
				iLocal_64 = 9;
			}
			break;
		
		case 9:
			func_37();
			func_24("CHEAT_SKYFALL");
			func_31(17, 0);
			iLocal_64 = 1;
			break;
		
		default:
			break;
	}
}

void func_37()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x650567883F5E3136(unk_0x16F2683693E537C9(), -72657034);
	}
	if (iLocal_62 != 5)
	{
		unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 0);
		unk_0xAA6B3A4292417750(unk_0x16F2683693E537C9(), 0, 0, 0, 0, 0, 0, 0, 0);
	}
	unk_0xB975E4541DDAB1F5(0);
}

int func_38(int iParam0, int iParam1)
{
	iVar0 = unk_0x1C0640BA9A7327B3();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_39()
{
	switch (iLocal_62)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_INVINCIBILITY");
			func_31(15, 1);
			iLocal_62 = 5;
			iLocal_74 = unk_0x1C0640BA9A7327B3();
			unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 1);
			unk_0xAA6B3A4292417750(unk_0x16F2683693E537C9(), 1, 1, 1, 1, 1, 0, 0, 0);
			break;
		
		case 5:
			if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iLocal_62 = 9;
				return;
			}
			vVar0 = { func_19(unk_0xD803B885F5E47A62()) };
			if (((((func_28() || func_34()) || func_27(23)) || func_27(21)) || func_27(15)) || vVar0.z <= -170f)
			{
				iLocal_62 = 9;
				return;
			}
			iLocal_75 = (unk_0x1C0640BA9A7327B3() - iLocal_74);
			if (unk_0x8A22C4C08282BF26(1779901043) == 0)
			{
				func_40((iLocal_73 - iLocal_75), "CHEAT_INV", 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			if (iLocal_75 >= (iLocal_73 - 1000))
			{
				iLocal_62 = 9;
				return;
			}
			unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 1);
			unk_0xAA6B3A4292417750(unk_0x16F2683693E537C9(), 1, 1, 1, 1, 1, 0, 0, 0);
			unk_0x650A82E2676F6E87();
			break;
		
		case 9:
			func_24("CHEAT_INVINCIBILITY_OFF");
			func_31(15, 0);
			iLocal_62 = 1;
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 0);
				unk_0xAA6B3A4292417750(unk_0x16F2683693E537C9(), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		default:
			break;
	}
}

void func_40(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_42(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_41(7, iVar0);
		Global_1378678.f_4562[iVar0] = iParam0;
		StringCopy(&(Global_1378678.f_4562.f_11[iVar0]), sParam1, 64);
		Global_1378678.f_4562.f_172[iVar0] = iParam2;
		Global_1378678.f_4562.f_216[iVar0] = iParam3;
		Global_1378678.f_4562.f_183[iVar0] = iParam4;
		Global_1378678.f_4562.f_194[iVar0] = iParam5;
		Global_1378678.f_4562.f_249[iVar0] = iParam6;
		Global_1378678.f_4562.f_260[iVar0] = iParam7;
		Global_1378678.f_4562.f_205[iVar0] = iParam8;
		Global_1378678.f_4562.f_314[iVar0] = iParam9;
		Global_1378678.f_4562.f_325[iVar0] = iParam10;
		Global_1378678.f_4562.f_357[iVar0] = iParam11;
		Global_1378678.f_4562.f_238[iVar0] = iParam12;
		Global_1378678.f_4562.f_271[iVar0] = iParam13;
		Global_1378678.f_4562.f_368[iVar0] = iParam14;
		Global_1378678.f_4562.f_379[iVar0] = iParam15;
		Global_1378678.f_4562.f_390[iVar0] = iParam16;
		Global_1378678.f_4562.f_227[iVar0] = iParam17;
	}
}

void func_41(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_42(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1378678.f_6293[iParam0], iParam1);
}

void func_43()
{
	switch (iLocal_59)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_FLAMING_BULLETS");
			func_31(12, 1);
			iLocal_59 = 5;
			break;
		
		case 5:
			if (((!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || func_27(23)) || func_27(21)) || func_27(12))
			{
				iLocal_59 = 9;
				return;
			}
			if (func_28())
			{
				iLocal_59 = 9;
				return;
			}
			unk_0xC8C28562DFB895D8(unk_0xD803B885F5E47A62());
			break;
		
		case 9:
			func_24("CHEAT_FLAMING_BULLETS");
			func_31(12, 0);
			iLocal_59 = 1;
			break;
		
		default:
			break;
	}
}

void func_44()
{
	switch (iLocal_60)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_EXPLOSIVE_MELEE");
			func_31(13, 1);
			iLocal_60 = 5;
			break;
		
		case 5:
			if ((((!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || func_27(23)) || func_27(21)) || func_27(13)) || func_28())
			{
				iLocal_60 = 9;
				return;
			}
			unk_0xD623CCF4F86276D0(unk_0xD803B885F5E47A62());
			break;
		
		case 9:
			func_24("CHEAT_EXPLOSIVE_MELEE");
			func_31(13, 0);
			iLocal_60 = 1;
			break;
		
		default:
			break;
	}
}

void func_45()
{
	switch (iLocal_65)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_DRUNK");
			func_31(18, 1);
			func_60(unk_0x16F2683693E537C9());
			func_58(30000, 1050253722, 1065353216, 0);
			iLocal_65 = 5;
			break;
		
		case 5:
			if ((((func_28() || !unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62())) || func_27(23)) || func_27(21)) || func_27(18))
			{
				iLocal_65 = 9;
			}
			break;
		
		case 9:
			func_24("CHEAT_DRUNK");
			func_31(18, 0);
			func_49(unk_0x16F2683693E537C9());
			func_48(1000);
			iLocal_65 = 1;
			break;
		
		case 10:
			func_46(1);
			func_31(18, 0);
			iLocal_65 = 1;
			break;
		
		default:
			break;
	}
}

void func_46(bool bParam0)
{
	unk_0x36629DB72EBCB78C(0f);
	unk_0x58478905E1A5347E(0f);
	unk_0xA480BA3CD1C5E797(0f);
	unk_0x051C254DA616D646(1);
	unk_0xE788E9364E3EB9B1(0f);
	unk_0x7E7993893F7C203D(1);
	unk_0x435B8A00821D00E7(0);
	if (unk_0x562F77A7F33D2E46("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0x8910D3D58E0132B8("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0xEA6BC48857E0AC4C(&Global_42574))
	{
		if (unk_0x562F77A7F33D2E46(&Global_42574))
		{
			unk_0x8910D3D58E0132B8(&Global_42574);
		}
	}
	if (unk_0x9F4FE516EAACCFC5(Global_42563))
	{
		if (unk_0xB3FFA20AEA3A2D9C(Global_42563))
		{
			unk_0x97271F6489B78F2D(Global_42563, 0f);
			unk_0x10486C0590CF176C(Global_42563, 1);
		}
	}
	if (unk_0xF45FDB21A0F137CB())
	{
		unk_0xC1B8EFD8630D086B(0);
	}
	if (bParam0)
	{
		if (unk_0xE0FCC099E413CCBA() != -1 || unk_0x21AA848387F2A52A() != -1)
		{
			unk_0x225CFE81EA219E44();
		}
		else if (unk_0x991B1F0980C62628())
		{
			unk_0x225CFE81EA219E44();
		}
	}
	Global_42569 = 0f;
	StringCopy(&Global_42570, "", 16);
	StringCopy(&Global_42574, "", 64);
	StringCopy(&Global_42590, "", 16);
	func_47();
}

void func_47()
{
	Global_42562 = 0;
	Global_42563 = 0;
	Global_42564 = 0;
	Global_42565 = 30000;
	Global_42566 = 0f;
	Global_42568 = 0f;
	Global_42567 = 0f;
	Global_42569 = 0f;
	StringCopy(&Global_42570, "", 16);
}

void func_48(int iParam0)
{
	if (!Global_42562)
	{
		return;
	}
	iVar0 = unk_0x1C0640BA9A7327B3();
	Global_42564 = (iVar0 + iParam0);
	Global_42565 = iParam0;
}

void func_49(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return;
	}
	iVar0 = func_57(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_42383[iVar0];
		func_52(1, iVar1, 1);
		return;
	}
	iVar2 = func_51(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_50(iVar2);
}

void func_50(int iParam0)
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

int func_51(int iParam0)
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

void func_52(int iParam0, int iParam1, int iParam2)
{
	func_53(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_53(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_55(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_54();
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

int func_54()
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

int func_55(int iParam0, int iParam1, int iParam2)
{
	if (func_56(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_56(int iParam0, int iParam1, int iParam2)
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

int func_57(int iParam0)
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

void func_58(int iParam0, float fParam1, float fParam2, int iParam3)
{
	func_59(-1, iParam0, fParam1, fParam2, iParam3, 1);
}

void func_59(int iParam0, var uParam1, float fParam2, float fParam3, var uParam4, bool bParam5)
{
	if (Global_3)
	{
		return;
	}
	if (Global_42562)
	{
		return;
	}
	if (!bParam5)
	{
		if (iParam0 < 0)
		{
			return;
		}
	}
	if (fParam2 < 0f || fParam2 > 5f)
	{
		return;
	}
	if (!unk_0x174D27C2C2F899E5())
	{
		unk_0x0525F87A0751EA62("DRUNK_SHAKE", fParam3);
	}
	if (!unk_0xD5B49A7E47E6726F())
	{
		unk_0xF5AC1996BA944009("DRUNK_SHAKE", (fParam3 * Global_42561));
	}
	if (unk_0x9F4FE516EAACCFC5(uParam4))
	{
		unk_0x91F5B0244AAE6222(uParam4, "DRUNK_SHAKE", fParam3);
		Global_42563 = uParam4;
	}
	else
	{
		Global_42563 = 0;
	}
	Global_42562 = 1;
	iVar0 = unk_0x1C0640BA9A7327B3();
	Global_42564 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_42564 = -1;
		}
	}
	Global_42565 = uParam1;
	Global_42566 = fParam2;
	Global_42568 = fParam3;
	Global_42567 = fParam3;
}

int func_60(int iParam0)
{
	return func_61(iParam0, -1, 1);
}

int func_61(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	iVar0 = func_63(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_51(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_62();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_42357[iVar2] = 0;
	Global_42357[iVar2].f_1 = iParam0;
	Global_42357[iVar2].f_2 = iParam1;
	Global_42357[iVar2].f_3 = iParam1;
	Global_42357[iVar2].f_4 = 0;
	if (iParam0 == unk_0x16F2683693E537C9())
	{
		Global_42594 = 1;
	}
	Global_42355++;
	return 1;
}

int func_62()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_42357[iVar0] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_63(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42383[iVar0].f_1)
		{
			return Global_42383[iVar0];
		}
		iVar0++;
	}
	return -1;
}

void func_64()
{
	switch (iLocal_58)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_BANG_BANG");
			func_31(11, 1);
			iLocal_58 = 5;
			break;
		
		case 5:
			if (((!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || func_27(23)) || func_27(21)) || func_27(11))
			{
				iLocal_58 = 9;
				return;
			}
			if (func_28())
			{
				iLocal_58 = 9;
				return;
			}
			unk_0xBD4A8D0C5E43A6AE(unk_0xD803B885F5E47A62());
			break;
		
		case 9:
			func_24("CHEAT_BANG_BANG");
			func_31(11, 0);
			iLocal_58 = 1;
			break;
		
		default:
			break;
	}
}

void func_65()
{
	switch (iLocal_61)
	{
		case 1:
			break;
		
		case 4:
			func_5(14);
			func_31(14, 1);
			func_67();
			break;
		
		case 5:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if ((((((!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || func_28()) || func_27(23)) || func_27(21)) || func_27(14)) || func_66(17)) || unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
				{
					iLocal_61 = 9;
				}
			}
			else
			{
				iLocal_61 = 9;
			}
			break;
		
		case 9:
			func_24("CHEAT_GRAVITY_MOON");
			func_31(14, 0);
			unk_0x7725C98D1438380E(0);
			iLocal_79 = 0;
			iLocal_61 = 1;
			break;
		
		default:
			break;
	}
}

int func_66(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_31016, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_67()
{
	iLocal_79++;
	if (iLocal_79 > 1)
	{
		iLocal_61 = 9;
		return;
	}
	switch (iLocal_79)
	{
		case 1:
			func_16("CHEAT_GRAVITY_MOON");
			unk_0x7725C98D1438380E(1);
			break;
		
		default:
			break;
	}
	iLocal_61 = 5;
}

void func_68()
{
	func_87();
	func_81();
	func_80();
	func_79();
	func_78();
	func_77();
	func_76();
	func_74();
	func_73();
	func_72();
	func_69();
}

void func_69()
{
	if (iLocal_57 == 4)
	{
		iLocal_57 = 1;
		if ((func_27(23) || func_27(22)) || func_27(10))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			func_16("CHEAT_GIVE_PARACHUTE");
			unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), -72657034, 1, 1, 1);
			func_5(10);
		}
	}
}

int func_70()
{
	if (iLocal_93)
	{
		iLocal_93 = 0;
		return 0;
	}
	if (func_71(0))
	{
		return 1;
	}
	return 0;
}

int func_71(int iParam0)
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

void func_72()
{
	if (iLocal_56 == 4)
	{
		iLocal_56 = 1;
		if ((func_27(23) || func_27(22)) || func_27(9))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (unk_0x02A813E6E0380440() == 0)
			{
				func_21("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0x179932739160BA96(unk_0xD803B885F5E47A62());
			if (iVar0 > 0)
			{
				func_16("CHEAT_WANTED_DOWN");
				unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), (iVar0 - 1), 0);
				func_5(9);
			}
			else
			{
				func_21("CHEAT_WANTED_DOWN_DENIED");
			}
		}
	}
}

void func_73()
{
	if (iLocal_55 == 4)
	{
		iLocal_55 = 1;
		if ((func_27(23) || func_27(22)) || func_27(8))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (unk_0x02A813E6E0380440() == 0)
			{
				func_21("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0x179932739160BA96(unk_0xD803B885F5E47A62());
			if (iVar0 < unk_0x02A813E6E0380440())
			{
				unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), iVar0 + 1, 0);
				unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
				func_16("CHEAT_WANTED_UP");
				func_5(8);
			}
			else
			{
				func_21("CHEAT_WANTED_UP_DENIED");
			}
		}
	}
}

void func_74()
{
	if (iLocal_54 == 4)
	{
		iLocal_54 = 1;
		if ((((((func_27(23) || func_27(22)) || func_27(7)) || func_15(9)) || func_15(10)) || !unk_0x7819CAEB55F9D232(func_75())) || !unk_0x6C5A65751EF69450(unk_0xD803B885F5E47A62(), 0))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x94FD98915D03BAC2(unk_0xD803B885F5E47A62(), 1, 0);
			func_16("CHEAT_SPECIAL_ABILITY");
			func_5(7);
		}
	}
}

int func_75()
{
	return unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9());
}

void func_76()
{
	if (iLocal_53 == 4)
	{
		iLocal_53 = 1;
		if ((((func_27(23) || func_27(22)) || func_27(6)) || func_15(9)) || func_15(10))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			func_16("CHEAT_HEALTH_ARMOR");
			func_5(6);
			unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), unk_0xC08489BCA49ECCA8(unk_0x16F2683693E537C9()), 0);
			unk_0x64511D24D4201743(unk_0x16F2683693E537C9(), (unk_0x31AE1423DA1D599B(unk_0xD803B885F5E47A62()) - unk_0x34460709B9A5160B(unk_0x16F2683693E537C9())));
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (!unk_0x437347B10A200C4B(iVar0, 0))
					{
						unk_0x51B954DAB1BCAF73(iVar0);
					}
				}
			}
		}
	}
}

void func_77()
{
	if (iLocal_52 == 4)
	{
		iLocal_52 = 1;
		if ((func_27(23) || func_27(22)) || func_27(5))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		func_5(5);
		switch (iLocal_71)
		{
			case 0:
				iLocal_71 = 1;
			
			case 1:
				unk_0xB8D67B901BB44E97("EXTRASUNNY");
				unk_0x96D521DDDB9AD218();
				func_16("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY");
				iLocal_71 = 2;
				break;
			
			case 2:
				unk_0xB8D67B901BB44E97("CLEAR");
				unk_0x96D521DDDB9AD218();
				func_16("CHEAT_ADVANCE_WEATHER_CLEAR");
				iLocal_71 = 3;
				break;
			
			case 3:
				unk_0xB8D67B901BB44E97("CLOUDS");
				unk_0x96D521DDDB9AD218();
				func_16("CHEAT_ADVANCE_WEATHER_CLOUDY");
				iLocal_71 = 4;
				break;
			
			case 4:
				unk_0xB8D67B901BB44E97("SMOG");
				unk_0x96D521DDDB9AD218();
				func_16("CHEAT_ADVANCE_WEATHER_SMOGGY");
				iLocal_71 = 6;
				break;
			
			case 6:
				unk_0xB8D67B901BB44E97("OVERCAST");
				unk_0x96D521DDDB9AD218();
				func_16("CHEAT_ADVANCE_WEATHER_OVERCAST");
				iLocal_71 = 7;
				break;
			
			case 7:
				unk_0xB8D67B901BB44E97("RAIN");
				unk_0x96D521DDDB9AD218();
				func_16("CHEAT_ADVANCE_WEATHER_RAIN");
				func_31(5, 1);
				iLocal_71 = 8;
				break;
			
			case 8:
				unk_0xB8D67B901BB44E97("THUNDER");
				unk_0x96D521DDDB9AD218();
				func_16("CHEAT_ADVANCE_WEATHER_THUNDER");
				iLocal_71 = 9;
				break;
			
			case 9:
				unk_0xB8D67B901BB44E97("CLEARING");
				unk_0x96D521DDDB9AD218();
				func_16("CHEAT_ADVANCE_WEATHER_CLEARING");
				iLocal_71 = 11;
				break;
			
			case 11:
				unk_0xB8D67B901BB44E97("XMAS");
				unk_0x96D521DDDB9AD218();
				func_16("CHEAT_ADVANCE_WEATHER_SNOW");
				iLocal_71 = 0;
				break;
			
			default:
				break;
			}
	}
}

void func_78()
{
	if (iLocal_51 == 4)
	{
		iLocal_51 = 1;
		if ((func_27(23) || func_27(22)) || func_27(4))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		func_16("CHEAT_GIVE_WEAPONS");
		func_5(4);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x8B25B8DC6068152D(unk_0x16F2683693E537C9(), -1716189206, -1, 0);
			unk_0x8B25B8DC6068152D(unk_0x16F2683693E537C9(), 736523883, 300, 0);
			unk_0x8B25B8DC6068152D(unk_0x16F2683693E537C9(), -1074790547, 300, 1);
			unk_0x8B25B8DC6068152D(unk_0x16F2683693E537C9(), 487013001, 150, 0);
			unk_0x8B25B8DC6068152D(unk_0x16F2683693E537C9(), 100416529, 30, 0);
			unk_0x8B25B8DC6068152D(unk_0x16F2683693E537C9(), -1813897027, 5, 0);
			unk_0x8B25B8DC6068152D(unk_0x16F2683693E537C9(), -1312131151, 5, 0);
		}
	}
}

void func_79()
{
	switch (iLocal_50)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_FAST_SWIM");
			func_31(3, 1);
			iLocal_50 = 5;
			break;
		
		case 5:
			if (((!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || func_27(23)) || func_27(22)) || func_27(3))
			{
				iLocal_50 = 9;
			}
			else
			{
				unk_0xB48034DF832D2A0D(unk_0xD803B885F5E47A62(), 1,49f);
				unk_0x650A82E2676F6E87();
			}
			break;
		
		case 9:
			unk_0xB48034DF832D2A0D(unk_0xD803B885F5E47A62(), 1f);
			func_24("CHEAT_FAST_SWIM");
			func_31(3, 0);
			iLocal_50 = 1;
			break;
		
		default:
			break;
	}
}

void func_80()
{
	switch (iLocal_49)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_FAST_RUN");
			func_31(2, 1);
			iLocal_49 = 5;
			break;
		
		case 5:
			if ((((!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) || func_27(23)) || func_27(22)) || func_27(2))
			{
				iLocal_49 = 9;
			}
			else
			{
				if (unk_0x093C93CCF7F0ECDB(unk_0x16F2683693E537C9()) || (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()) && !unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())))
				{
					unk_0xA18F227A9855B50D(unk_0xD803B885F5E47A62(), 1,49f);
				}
				else
				{
					unk_0xA18F227A9855B50D(unk_0xD803B885F5E47A62(), 1f);
				}
				unk_0x650A82E2676F6E87();
			}
			break;
		
		case 9:
			unk_0xA18F227A9855B50D(unk_0xD803B885F5E47A62(), 1f);
			func_24("CHEAT_FAST_RUN");
			func_31(2, 0);
			iLocal_49 = 1;
			break;
		
		default:
			break;
	}
}

void func_81()
{
	switch (iLocal_48)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_SLIDEY_CARS");
			func_31(1, 1);
			iLocal_48 = 5;
			break;
		
		case 5:
			if (((!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || func_27(23)) || func_27(22)) || func_27(1))
			{
				iLocal_48 = 9;
			}
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
				if (!unk_0x437347B10A200C4B(iVar0, 0))
				{
					if (unk_0xA30B8362589C124A(iVar0, -1, 0) == unk_0x16F2683693E537C9())
					{
						if (iLocal_69 == 0)
						{
							iLocal_69 = iVar0;
							if (!unk_0x437347B10A200C4B(iLocal_69, 0))
							{
								if (func_82(1))
								{
									unk_0xE4AEDA3B8753EC4C(iLocal_69, 1);
								}
								else
								{
									iLocal_69 = 0;
								}
							}
						}
						else if (iLocal_69 != iVar0)
						{
							if (!unk_0x437347B10A200C4B(iLocal_69, 0))
							{
								unk_0xE4AEDA3B8753EC4C(iLocal_69, 0);
							}
							iLocal_69 = 0;
						}
					}
				}
			}
			break;
		
		case 9:
			func_24("CHEAT_SLIDEY_CARS");
			iLocal_48 = 10;
			break;
		
		case 10:
			if (!unk_0x437347B10A200C4B(iLocal_69, 0))
			{
				unk_0xE4AEDA3B8753EC4C(iLocal_69, 0);
				iLocal_69 = 0;
			}
			func_31(1, 0);
			iLocal_48 = 1;
			break;
		
		default:
			break;
	}
}

int func_82(int iParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		iVar0 = unk_0x728870EB733D12A1();
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			if (unk_0xDF1306B443CD3D15(iVar0, 0))
			{
				iVar1 = unk_0x134B62B726CEC8E6(iVar0);
				iVar2 = func_8();
				if (iParam0 & 1 != 0)
				{
					if (!unk_0x8E39AC3C76C8AA58(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 2 != 0)
				{
					if (!unk_0x7D8B2A8F9EA82DB7(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 4 != 0)
				{
					if (!unk_0xAFB8495D36825275(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 8 != 0)
				{
					if (!unk_0xA7082C42B8809BF2(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 16 != 0)
				{
					if (unk_0xF653B9B22DA806A9(iVar0, "door_dside_r") != -1 || unk_0xF653B9B22DA806A9(iVar0, "door_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 32 != 0)
				{
					if (unk_0xF653B9B22DA806A9(iVar0, "door_dside_r") == -1 || unk_0xF653B9B22DA806A9(iVar0, "door_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 64 != 0)
				{
					if (unk_0x7D8B2A8F9EA82DB7(iVar1))
					{
						if (unk_0xF653B9B22DA806A9(iVar0, "seat_r") == -1)
						{
							return 0;
						}
					}
					else if (unk_0xF653B9B22DA806A9(iVar0, "seat_dside_r") != -1 || unk_0xF653B9B22DA806A9(iVar0, "seat_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 128 != 0)
				{
					if (unk_0xF653B9B22DA806A9(iVar0, "seat_dside_r") == -1 || unk_0xF653B9B22DA806A9(iVar0, "seat_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 256 != 0)
				{
					if (!func_10(iVar2))
					{
						return 0;
					}
					if (func_85(iVar2, 0) != iVar1)
					{
						return 0;
					}
				}
				if (iParam0 & 512 != 0)
				{
					if (!unk_0x8E39AC3C76C8AA58(iVar1) && !unk_0x7D8B2A8F9EA82DB7(iVar1))
					{
						return 0;
					}
					if (unk_0x56E1CD81AE700E98(iVar0))
					{
						return 0;
					}
					sVar4 = unk_0xA712FAE854841798(iVar0, &uVar3);
					if (!unk_0xEA6BC48857E0AC4C(sVar4))
					{
						if (unk_0x12AB0310C2281427(sVar4) == unk_0x12AB0310C2281427("taxiService"))
						{
							return 0;
						}
					}
					if (func_83(iVar0, iVar2, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_83(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_84(iParam1, iVar0, &sVar1, &iVar9))
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

int func_84(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_85(int iParam0, int iParam1)
{
	if (func_10(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_86(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_86(int iParam0, var uParam1, int iParam2)
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

void func_87()
{
	switch (iLocal_47)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_SUPER_JUMP");
			func_31(0, 1);
			iLocal_47 = 5;
			break;
		
		case 5:
			if ((((!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || func_27(23)) || func_27(22)) || func_27(0)) || unk_0x7C2B4C53942076F8())
			{
				iLocal_47 = 9;
				return;
			}
			unk_0xD709F94D8B847F15(unk_0xD803B885F5E47A62());
			unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 217, 1);
			break;
		
		case 9:
			func_24("CHEAT_SUPER_JUMP");
			func_31(0, 0);
			iLocal_47 = 1;
			break;
		
		default:
			break;
	}
}

void func_88()
{
	if ((func_111() || iLocal_94 != 0) || func_15(14))
	{
		unk_0x38C3A68D7861DCFD(2, 243, 1);
	}
	func_110();
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return;
	}
	if (unk_0x946BFA82EB988C81(unk_0x16F2683693E537C9()))
	{
		return;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		return;
	}
	if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
	{
		return;
	}
	if (func_34() || unk_0x991B1F0980C62628())
	{
		return;
	}
	if (func_109())
	{
		if (!iLocal_92)
		{
			func_108();
			iLocal_92 = 1;
		}
		return;
	}
	iLocal_92 = 0;
	iLocal_93 = 0;
	if ((func_107(988027572, 12) || unk_0x0DF446069AE45B92(-1817861517)) || func_106(20, 788747387))
	{
		func_103(788747387, "CHEAT_SPAWN_VEH1");
	}
	if ((func_107(-1134279030, 11) || unk_0x0DF446069AE45B92(-16646146)) || func_106(20, 1131912276))
	{
		func_103(1131912276, "CHEAT_SPAWN_VEH2");
	}
	if ((func_107(971352167, 10) || unk_0x0DF446069AE45B92(1984183057)) || func_106(20, 1147287684))
	{
		func_103(1147287684, "CHEAT_SPAWN_VEH3");
	}
	if ((func_107(-269863225, 10) || unk_0x0DF446069AE45B92(1063483177)) || func_106(20, -1045541610))
	{
		func_103(-1045541610, "CHEAT_SPAWN_VEH4");
	}
	if ((func_107(458579068, 12) || unk_0x0DF446069AE45B92(-1933452175)) || func_106(20, 970356638))
	{
		func_103(970356638, "CHEAT_SPAWN_VEH5");
	}
	if ((func_107(-666513193, 12) || unk_0x0DF446069AE45B92(798856618)) || func_106(20, -909201658))
	{
		func_103(-909201658, "CHEAT_SPAWN_VEH6");
	}
	if ((func_107(-1245984749, 10) || unk_0x0DF446069AE45B92(-1934452204)) || func_106(20, -1934452204))
	{
		func_103(-1934452204, "CHEAT_SPAWN_VEH7");
	}
	if ((func_107(2076774618, 12) || unk_0x0DF446069AE45B92(-1397462844)) || func_106(20, 788045382))
	{
		func_103(788045382, "CHEAT_SPAWN_VEH8");
	}
	if ((func_107(855685457, 9) || unk_0x0DF446069AE45B92(-395911602)) || func_106(20, -1961627517))
	{
		func_103(-1961627517, "CHEAT_SPAWN_VEH9");
	}
	if ((func_107(-591395876, 12) || unk_0x0DF446069AE45B92(1905542004)) || func_106(20, -2122757008))
	{
		func_103(-2122757008, "CHEAT_SPAWN_VEH10");
	}
	if ((func_107(-1399217582, 10) || unk_0x0DF446069AE45B92(-103938205)) || func_106(20, 1917016601))
	{
		func_103(1917016601, "CHEAT_SPAWN_VEH11");
	}
	if (func_102())
	{
		if ((func_107(-375917581, 10) || unk_0x0DF446069AE45B92(-845441152)) || func_106(20, -901163259))
		{
			func_103(-901163259, "CHEAT_SPAWN_VEH12");
		}
		if ((func_107(-2124307881, 10) || unk_0x0DF446069AE45B92(-364179859)) || func_106(20, -326143852))
		{
			func_103(-326143852, "CHEAT_SPAWN_VEH13");
		}
		if ((func_107(1028964594, 9) || unk_0x0DF446069AE45B92(308960446)) || func_106(20, -1066334226))
		{
			func_103(-1066334226, "CHEAT_SPAWN_VEH14");
		}
	}
	if ((func_107(-393416581, 11) || unk_0x0DF446069AE45B92(1005004086)) || func_106(0, 0))
	{
		func_101();
	}
	if ((func_107(-296509791, 8) || unk_0x0DF446069AE45B92(-870083261)) || func_106(1, 0))
	{
		func_100();
	}
	if ((func_107(1120820643, 7) || unk_0x0DF446069AE45B92(353159322)) || func_106(2, 0))
	{
		func_99();
	}
	if ((func_107(-421458016, 9) || unk_0x0DF446069AE45B92(1213130756)) || func_106(3, 0))
	{
		func_98();
	}
	if ((func_107(372390926, 12) || unk_0x0DF446069AE45B92(2096954439)) || func_106(4, 0))
	{
		iLocal_51 = 4;
	}
	if ((func_107(606506837, 8) || unk_0x0DF446069AE45B92(-1554487097)) || func_106(5, 0))
	{
		iLocal_52 = 4;
	}
	if ((func_107(453014206, 12) || unk_0x0DF446069AE45B92(-103376513)) || func_106(6, 0))
	{
		iLocal_53 = 4;
	}
	if ((func_107(1773187142, 9) || unk_0x0DF446069AE45B92(-1421821692)) || func_106(7, 0))
	{
		iLocal_54 = 4;
	}
	if ((func_107(1173296014, 10) || unk_0x0DF446069AE45B92(1909141499)) || func_106(8, 0))
	{
		iLocal_55 = 4;
	}
	if ((func_107(-381269753, 10) || unk_0x0DF446069AE45B92(98905412)) || func_106(9, 0))
	{
		iLocal_56 = 4;
	}
	if ((func_107(-2023988698, 11) || unk_0x0DF446069AE45B92(1035089201)) || func_106(10, 0))
	{
		iLocal_57 = 4;
	}
	if ((func_107(-835863906, 12) || unk_0x0DF446069AE45B92(-1764239395)) || func_106(11, 0))
	{
		func_97();
	}
	if ((func_107(1958387485, 12) || unk_0x0DF446069AE45B92(-1024744253)) || func_106(12, 0))
	{
		func_96();
	}
	if ((func_107(-903985180, 9) || unk_0x0DF446069AE45B92(1751751409)) || func_106(13, 0))
	{
		func_95();
	}
	if ((func_107(2087642905, 9) || unk_0x0DF446069AE45B92(-1731432653)) || func_106(14, 0))
	{
		func_94();
	}
	if ((func_107(1257820019, 10) || unk_0x0DF446069AE45B92(-1747121892)) || func_106(15, 0))
	{
		func_93();
	}
	if ((func_107(1540206179, 7) || unk_0x0DF446069AE45B92(-957571621)) || func_106(16, 0))
	{
		func_92();
	}
	if ((func_107(115565392, 16) || unk_0x0DF446069AE45B92(-1772724790)) || func_106(17, 0))
	{
		func_91();
	}
	if ((func_107(-1276513277, 8) || unk_0x0DF446069AE45B92(-221148750)) || func_106(18, 0))
	{
		func_90();
	}
	if ((func_107(2040433593, 9) || unk_0x0DF446069AE45B92(304794100)) || func_106(19, 0))
	{
		func_89();
	}
}

void func_89()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(16))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_63 != 1)
	{
		func_21("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_66 = 4;
	}
}

void func_90()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_65 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_65 = 1;
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(18))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_65 = 1;
		return;
	}
	if (iLocal_65 == 1)
	{
		iLocal_65 = 4;
	}
	else if (iLocal_65 == 5)
	{
		iLocal_65 = 9;
	}
}

void func_91()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (unk_0x7C2B4C53942076F8())
	{
		func_21("CHEAT_NOT_HERE");
		return;
	}
	if (iLocal_64 != 1)
	{
		func_21("CHEAT_ALREADY_ACTIVE");
		return;
	}
	if (((((func_27(23) || func_27(21)) || func_27(17)) || func_66(0)) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0)) || !unk_0x19C7D1907D1DDDAB())
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if ((unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0)) || unk_0x8A22C4C08282BF26(1397812868) > 0)
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	iLocal_64 = 2;
}

void func_92()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(16))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_66 != 1)
	{
		func_21("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_63 = 4;
	}
}

void func_93()
{
	vVar0 = { func_19(unk_0xD803B885F5E47A62()) };
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (((func_27(23) || func_27(21)) || func_27(15)) || vVar0.z <= -170f)
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_62 == 1)
	{
		iLocal_62 = 4;
	}
	else if (iLocal_62 == 5)
	{
		iLocal_62 = 9;
	}
}

void func_94()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if ((((func_27(23) || func_27(21)) || func_27(14)) || func_66(17)) || unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	iLocal_61 = 4;
}

void func_95()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_60 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_60 = 1;
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(13))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_60 = 1;
		return;
	}
	if (iLocal_60 == 1)
	{
		iLocal_60 = 4;
	}
	else if (iLocal_60 == 5)
	{
		iLocal_60 = 9;
	}
}

void func_96()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_59 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_59 = 1;
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(12))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_59 = 1;
		return;
	}
	if (iLocal_59 == 1)
	{
		iLocal_59 = 4;
	}
	else if (iLocal_59 == 5)
	{
		iLocal_59 = 9;
	}
}

void func_97()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_58 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_58 = 1;
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(11))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_58 = 1;
		return;
	}
	if (iLocal_58 == 1)
	{
		iLocal_58 = 4;
	}
	else if (iLocal_58 == 5)
	{
		iLocal_58 = 9;
	}
}

void func_98()
{
	if ((((func_27(23) || func_27(22)) || func_27(3)) || func_15(9)) || func_15(10))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_50 == 1)
	{
		iLocal_50 = 4;
	}
	else if (iLocal_50 == 5)
	{
		iLocal_50 = 9;
	}
}

void func_99()
{
	if ((((func_27(23) || func_27(22)) || func_27(2)) || func_15(9)) || func_15(10))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_49 == 1)
	{
		iLocal_49 = 4;
	}
	else if (iLocal_49 == 5)
	{
		iLocal_49 = 9;
	}
}

void func_100()
{
	if ((func_27(23) || func_27(22)) || func_27(1))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_48 == 1)
	{
		iLocal_48 = 4;
	}
	else if (iLocal_48 == 5)
	{
		iLocal_48 = 9;
	}
}

void func_101()
{
	if (((func_27(23) || func_27(22)) || func_27(0)) || unk_0x7C2B4C53942076F8())
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_47 == 1)
	{
		iLocal_47 = 4;
	}
	else if (iLocal_47 == 5)
	{
		iLocal_47 = 9;
	}
}

int func_102()
{
	if (unk_0x61D9362D70D2DD56())
	{
		if (unk_0x999A3BFD3E9B5D2C())
		{
			if (unk_0x5CD8D2FE4603C900())
			{
				unk_0x6FB46C25CCB7E6D5(1571103992, &uVar0, -1);
				unk_0x5D96D8530B3D0904(&uVar0, 2);
				unk_0x5D96D8530B3D0904(&uVar0, 4);
				unk_0x5D96D8530B3D0904(&uVar0, 6);
				unk_0x5D96D8530B3D0904(&Global_25, 2);
				unk_0x5D96D8530B3D0904(&Global_25, 4);
				unk_0x5D96D8530B3D0904(&Global_25, 6);
				unk_0xCDC520E5E48E63D9(1571103992, uVar0, 1);
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

void func_103(int iParam0, char* sParam1)
{
	if (iLocal_46 == 1)
	{
		if (((((func_15(9) || unk_0x8A22C4C08282BF26(254743818) > 0) || unk_0x8A22C4C08282BF26(1006206925) > 0) || func_27(23)) || func_27(22)) || func_27(20))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (!func_104(iParam0))
		{
			func_21("CHEAT_VEHICLE_LOCKED_DENIED");
			return;
		}
		iLocal_67 = iParam0;
		sLocal_70 = sParam1;
		iLocal_46 = 2;
	}
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case -901163259:
			if (func_105(66, 0) == 0)
			{
				return 0;
			}
			break;
		
		case -326143852:
			if (func_105(64, 0) == 0)
			{
				return 0;
			}
			break;
		
		case -1066334226:
			if (func_105(63, 0) == 0)
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_105(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_32744[iParam0], iParam1);
}

int func_106(int iParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_31018, iParam0))
	{
		if (iParam1 != 0)
		{
			if (iParam1 == Global_31019)
			{
				unk_0x0674E58A79778E99(&Global_31018, iParam0);
				iLocal_93 = 1;
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			unk_0x0674E58A79778E99(&Global_31018, iParam0);
			iLocal_93 = 1;
			return 1;
		}
	}
	return 0;
}

int func_107(int iParam0, int iParam1)
{
	if (!func_15(14))
	{
		return unk_0x20FAB06548D9F59B(iParam0, iParam1);
	}
	return 0;
}

void func_108()
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_80[iVar0] != -1)
		{
			unk_0xD59AE843FA2C6B40(iLocal_80[iVar0]);
			iLocal_80[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_109()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return 0;
	}
	return 1;
}

void func_110()
{
	if (func_15(14) || (!unk_0x0F1CCD77290EE12F() && iLocal_94 != 0))
	{
		iLocal_94 = unk_0x1C0640BA9A7327B3();
	}
	if (iLocal_94 != 0)
	{
		if (!func_15(14))
		{
			if ((unk_0x1C0640BA9A7327B3() - iLocal_94) > 1000)
			{
				iLocal_94 = 0;
			}
		}
	}
}

int func_111()
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

void func_112()
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_80[iVar0] = -1;
		iVar0++;
	}
	iLocal_92 = 0;
	iLocal_91 = 0;
}

void func_113()
{
	unk_0x2CBCAE34E452D495(0);
	if (iLocal_64 == 5)
	{
		func_37();
	}
	if (iLocal_65 == 5)
	{
		func_46(1);
	}
	if (iLocal_63 == 5 || iLocal_66 == 5)
	{
		unk_0x9A82EEAF6CA12AEE(1f);
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (iLocal_62 == 5)
		{
			unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 0);
			unk_0xAA6B3A4292417750(unk_0x16F2683693E537C9(), 0, 0, 0, 0, 0, 0, 0, 0);
		}
		unk_0xA18F227A9855B50D(unk_0xD803B885F5E47A62(), 1f);
		unk_0xB48034DF832D2A0D(unk_0xD803B885F5E47A62(), 1f);
	}
	unk_0x7725C98D1438380E(0);
	Global_31016 = 0;
	Global_31015 = 0;
	Global_31017 = 0;
	Global_31018 = 0;
	Global_31020 = 0;
	Global_31019 = 0;
	unk_0x10FAF14A60A0DBE1();
}

