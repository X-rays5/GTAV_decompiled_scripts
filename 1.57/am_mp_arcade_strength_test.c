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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = -1;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	int iLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 32;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	struct<182> Local_164 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 400, 0, 9, 1112014848, 1112014848, 1112014848, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 1069547520, 1069547520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<18> ScriptParam_0 = { 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0x02BFF15CAA701972())
	{
		func_736(ScriptParam_0);
	}
	else
	{
		func_730(ScriptParam_0);
	}
	while (true)
	{
		func_729();
		if (func_720())
		{
			func_730(ScriptParam_0);
		}
		if (func_712())
		{
			func_730(ScriptParam_0);
		}
		func_2(ScriptParam_0);
		if (unk_0x443E2CA72E118E64())
		{
			func_1();
		}
	}
}

void func_1()
{
}

void func_2(struct<18> Param0)
{
	switch (Local_164.f_181)
	{
		case 0:
			func_704();
			break;
		
		case 1:
			func_162(Param0);
			break;
		
		case 2:
			func_60(Param0);
			break;
	}
	func_58();
	func_56();
	func_51(Param0);
	func_47();
	func_46();
	func_12(Param0);
	func_3(0);
}

void func_3(bool bParam0)
{
	int iVar0;
	float fVar1;
	
	if (!Local_164.f_25.f_8)
	{
		return;
	}
	if (bParam0)
	{
		if (!Local_164.f_25.f_10)
		{
			Local_164.f_25.f_10 = 1;
			Local_164.f_25.f_17 = { unk_0x0D9118860A976DFD(Local_164.f_25.f_34) };
			Local_164.f_25.f_23 = { unk_0x864557F89941B870(Local_164.f_25.f_34, 2) };
			Local_164.f_25.f_3 = unk_0x004B4DE459D9277C(Local_164.f_25.f_34);
			func_10(&(Local_164.f_25.f_23.f_2));
			Local_164.f_25.f_20 = { Local_164.f_25.f_11 };
			Local_164.f_25.f_26 = { Local_164.f_25.f_14 };
			Local_164.f_25.f_4 = Local_164.f_25.f_5;
			Local_164.f_25.f_33 = unk_0x5FBE5EA201067B5E(unk_0x551F46B3C7DFB654(), 2000);
			Local_164.f_25.f_2 = 4;
		}
	}
	else if (Local_164.f_25.f_10)
	{
		iVar0 = unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Local_164.f_25.f_33));
		fVar1 = (1f - (SYSTEM::TO_FLOAT(iVar0) / 2000f));
		func_6(&(Local_164.f_25.f_34), fVar1);
		unk_0xDF23DCD7A3E1B7A5(Local_164.f_25.f_7);
		unk_0x3A13FD2813C8251F(Local_164.f_25.f_6, 1065353216);
		unk_0xB034D63F2AC698FB(Local_164.f_25.f_6, Local_164.f_25.f_6, 1065353216);
		if (fVar1 >= 0.98f)
		{
			Local_164.f_25.f_2 = 9;
			Local_164.f_25.f_10 = 0;
			unk_0x09F9466B03D29D2D(0, 0, 3000, 1, 0, 0);
			func_5();
			if (func_4(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x0B24C180BAC225CA(unk_0x7D2B9E6A64637269()) != 255)
				{
					unk_0x93500360FCCB65F3(unk_0x7D2B9E6A64637269(), 255, 0);
				}
			}
		}
		else if (fVar1 >= 0.65f && fVar1 < 0.98f)
		{
			if (func_4(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x0B24C180BAC225CA(unk_0x7D2B9E6A64637269()) != 0)
				{
					unk_0x93500360FCCB65F3(unk_0x7D2B9E6A64637269(), 0, 0);
				}
			}
		}
	}
}

int func_4(int iParam0)
{
	if (unk_0x419E13582192CFEA(iParam0))
	{
		if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_5()
{
	if (unk_0x0E8572B08CEB6A11(Local_164.f_25.f_34))
	{
		if (unk_0x2671671BBCC6AD9F(Local_164.f_25.f_34))
		{
			unk_0x6FA8221C9D2ECB46(Local_164.f_25.f_34, 0);
		}
		unk_0xFE1DEC9C5734D0C0(Local_164.f_25.f_34, 0);
	}
}

void func_6(var uParam0, float fParam1)
{
	if (unk_0x0E8572B08CEB6A11(*uParam0))
	{
		unk_0x7508AE96782B0441(*uParam0, func_9(Local_164.f_25.f_17, Local_164.f_25.f_20, fParam1, Local_164.f_25.f_2));
		unk_0xBD833AA6EB59C81B(*uParam0, func_9(Local_164.f_25.f_23, Local_164.f_25.f_26, fParam1, Local_164.f_25.f_2), 2);
		unk_0xEF20E9A7B745D17A(*uParam0, func_7(Local_164.f_25.f_3, Local_164.f_25.f_4, fParam1, Local_164.f_25.f_2));
	}
}

float func_7(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	
	switch (iParam3)
	{
		case 1:
		case 6:
			fParam2 = SYSTEM::POW(fParam2, 2f);
			break;
		
		case 2:
		case 7:
			fParam2 = (1f - SYSTEM::POW((1f - fParam2), 2f));
			break;
		
		case 3:
		case 8:
			fParam2 = ((-SYSTEM::COS(func_8((3.141593f * fParam2))) / 2f) + 0.5f);
			break;
		
		case 4:
		case 9:
			fParam2 = (SYSTEM::POW(fParam2, 2f) * (3f - (2f * fParam2)));
			break;
	}
	switch (iParam3)
	{
		case 0:
			fVar0 = (fParam0 + (fParam2 * (fParam1 - fParam0)));
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
			fVar0 = func_7(fParam0, fParam1, fParam2, 0);
			break;
		
		case 5:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			fVar0 = func_7(fParam0, fParam1, fParam2, 5);
			break;
	}
	return fVar0;
}

float func_8(float fParam0)
{
	return (fParam0 * 57.29578f);
}

Vector3 func_9(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7)
{
	struct<3> Var0;
	
	Var0.x = func_7(Param0.x, Param3.x, fParam6, iParam7);
	Var0.f_1 = func_7(Param0.f_1, Param3.f_1, fParam6, iParam7);
	Var0.f_2 = func_7(Param0.f_2, Param3.f_2, fParam6, iParam7);
	return Var0;
}

void func_10(var uParam0)
{
	*uParam0 = func_11(*uParam0);
	if (*uParam0 < 0f)
	{
		*uParam0 = (*uParam0 + 360f);
	}
}

float func_11(float fParam0)
{
	while (fParam0 > 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	while (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

void func_12(struct<18> Param0)
{
	switch (Local_164.f_179)
	{
		case 0:
			func_43();
			func_42(1);
			break;
		
		case 1:
			if (func_35())
			{
				func_42(2);
			}
			break;
		
		case 2:
			if (func_33())
			{
				func_42(3);
			}
			break;
		
		case 3:
			if (func_32())
			{
				func_42(8);
			}
			break;
		
		case 4:
			func_30();
			func_42(8);
			break;
		
		case 5:
			func_29();
			func_42(8);
			break;
		
		case 6:
			func_27();
			func_42(8);
			break;
		
		case 7:
			if (func_23(Param0))
			{
				func_42(8);
			}
			break;
		
		case 8:
			func_19();
			break;
	}
	func_13();
}

void func_13()
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	switch (Local_164.f_142.f_13)
	{
		case 0:
			if (Local_164.f_142.f_2 > 0)
			{
				func_18(SYSTEM::ROUND((Local_164.f_142.f_6 * 1000f)), 1);
				if (unk_0x42CE89CF8FB079E5(unk_0x551F46B3C7DFB654(), Local_164.f_142.f_10))
				{
					iVar2 = unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Local_164.f_142.f_10));
					fVar1 = (1.5f - Local_164.f_142.f_3);
					fVar0 = (fVar1 - ((SYSTEM::TO_FLOAT(iVar2) / (Local_164.f_142.f_6 * 1000f)) * fVar1));
					Local_164.f_142.f_4 = (1.5f - fVar0);
				}
				else
				{
					Local_164.f_142.f_8 = 0;
					Local_164.f_142.f_4 = Local_164.f_142.f_3;
					func_17(1);
				}
			}
			break;
		
		case 1:
			if (func_15(&(Local_164.f_142.f_11), SYSTEM::ROUND((Local_164.f_142.f_5 * 1000f)), 0))
			{
				func_14(&(Local_164.f_142.f_11));
				func_17(2);
			}
			break;
		
		case 2:
			func_18(SYSTEM::ROUND((Local_164.f_142.f_7 * 1000f)), 0);
			if (unk_0x42CE89CF8FB079E5(unk_0x551F46B3C7DFB654(), Local_164.f_142.f_10))
			{
				iVar2 = unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Local_164.f_142.f_10));
				fVar1 = (1.5f - Local_164.f_142.f_3);
				fVar0 = ((SYSTEM::TO_FLOAT(iVar2) / (Local_164.f_142.f_7 * 1000f)) * fVar1);
				Local_164.f_142.f_4 = (1.5f - fVar0);
			}
			else
			{
				Local_164.f_142.f_8 = 0;
				Local_164.f_142.f_4 = 1.5f;
				Local_164.f_142.f_3 = 1.5f;
				Local_164.f_142.f_2 = 0;
				func_17(0);
			}
			break;
	}
}

void func_14(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_15(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_16(uParam0, bParam2, 0);
	if (unk_0x02BFF15CAA701972() && !bParam2)
	{
		if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0xDFB7BFA6482FEE1E(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_16(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x02BFF15CAA701972() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x551F46B3C7DFB654();
			}
			else
			{
				*uParam0 = unk_0xCB3024ED32EBF9EC();
			}
		}
		else
		{
			*uParam0 = unk_0xDFB7BFA6482FEE1E();
		}
		uParam0->f_1 = 1;
	}
}

void func_17(int iParam0)
{
	if (Local_164.f_142.f_13 != iParam0)
	{
		Local_164.f_142.f_13 = iParam0;
	}
}

void func_18(int iParam0, bool bParam1)
{
	if (!Local_164.f_142.f_8)
	{
		Local_164.f_142.f_8 = 1;
		Local_164.f_142.f_10 = unk_0x5FBE5EA201067B5E(unk_0x551F46B3C7DFB654(), iParam0);
		if (bParam1)
		{
			Local_164.f_142.f_3 = ((((0.5909f - 1.4101f) * SYSTEM::TO_FLOAT(Local_164.f_142.f_2)) / SYSTEM::TO_FLOAT(1100)) + 1.4101f);
			if (Local_164.f_142.f_2 == 1100)
			{
				Local_164.f_142.f_3 = (Local_164.f_142.f_3 - 0.0909f);
			}
		}
	}
}

void func_19()
{
	func_21(1);
	func_20();
}

void func_20()
{
	unk_0x27DA7E2B98AB7899(Local_164.f_142);
	unk_0x0F33095580A670CE(4);
	unk_0x51D19921B47902B3(1);
	unk_0x80B2E30CC8B794C0(0.5f, Local_164.f_142.f_4, 1f, 1f, 255, 0, 0, 255, 0);
	unk_0x27DA7E2B98AB7899(unk_0xA05F91D121569413());
}

void func_21(bool bParam0)
{
	unk_0x27DA7E2B98AB7899(Local_164.f_142.f_1);
	unk_0x0F33095580A670CE(4);
	unk_0x51D19921B47902B3(1);
	unk_0xB79FC8FB1129255F(func_22(), "SCORE_DISPLAY_AXE_OF_FURY", 0.5f, 0.5f, 1f, 1f, 0f, 255, 255, 255, 255);
	if (bParam0)
	{
		unk_0x43D93129BD1AD792(Local_164.f_142.f_9, 0.4f, 0.375f, 0.525f, 0.575f, 255, 255, 255, 255, 0);
	}
	unk_0x27DA7E2B98AB7899(unk_0xA05F91D121569413());
}

char* func_22()
{
	return "ArcadeUI_Axe_of_Fury";
}

int func_23(struct<18> Param0)
{
	func_20();
	func_21(Local_164.f_165.f_2);
	func_26(Param0, Local_164.f_165.f_3);
	if (func_15(&(Local_164.f_165.f_5), 500, 0))
	{
		func_25(&(Local_164.f_165.f_5), 0, 0);
		Local_164.f_165.f_3 = !Local_164.f_165.f_3;
		Local_164.f_165.f_2 = !Local_164.f_165.f_2;
		Local_164.f_165.f_1++;
		if (!Local_164.f_165.f_2)
		{
			func_24(&(Local_164.f_142.f_9), Local_164.f_165);
		}
		if (Local_164.f_165.f_1 > 6)
		{
			func_14(&(Local_164.f_165.f_5));
			Local_164.f_165.f_3 = 1;
			Local_164.f_165.f_2 = 1;
			Local_164.f_165.f_1 = 0;
			func_26(Param0, 0);
			return 1;
		}
	}
	return 0;
}

void func_24(var uParam0, var uParam1)
{
	unk_0x704F8697BB515627(*uParam0, "SET_INSTANT_HIGH_SCORE");
	unk_0x9E3D03981E2E9AD9(uParam1);
	unk_0x392841D58D2EED1D();
}

void func_25(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x02BFF15CAA701972() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x551F46B3C7DFB654();
		}
		else
		{
			*uParam0 = unk_0xCB3024ED32EBF9EC();
		}
	}
	else
	{
		*uParam0 = unk_0xDFB7BFA6482FEE1E();
	}
	uParam0->f_1 = 1;
}

void func_26(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, bool bParam18)
{
	if ((bParam18 && unk_0x234B68AC2E35ED5A(Local_164.f_1, 25)) || (!bParam18 && !unk_0x234B68AC2E35ED5A(Local_164.f_1, 25)))
	{
		return;
	}
	if (!unk_0x419E13582192CFEA(Param0.f_2[1]) || !unk_0x419E13582192CFEA(Param0.f_2[2]))
	{
		return;
	}
	if (bParam18)
	{
		unk_0xC5CAF559D14B1D18(unk_0xD6E677FAD7521410(Param0.f_2[1], 1), 3f, unk_0x6471F4759775FCA4(Param0.f_2[1]), 0);
		unk_0xD2FBB949CDCF79AB(unk_0xD6E677FAD7521410(Param0.f_2[2], 1), 3f, unk_0x6471F4759775FCA4(Param0.f_2[2]), 1);
		if (!unk_0x234B68AC2E35ED5A(Local_164.f_1, 25))
		{
			unk_0x191DDA30577F440A(&(Local_164.f_1), 25);
		}
	}
	else
	{
		unk_0xC5CAF559D14B1D18(unk_0xD6E677FAD7521410(Param0.f_2[2], 1), 3f, unk_0x6471F4759775FCA4(Param0.f_2[2]), 0);
		unk_0xD2FBB949CDCF79AB(unk_0xD6E677FAD7521410(Param0.f_2[1], 1), 3f, unk_0x6471F4759775FCA4(Param0.f_2[1]), 1);
		if (unk_0x234B68AC2E35ED5A(Local_164.f_1, 25))
		{
			unk_0xC664C0067EEAB8D1(&(Local_164.f_1), 25);
		}
	}
}

void func_27()
{
	func_28(&(Local_164.f_142.f_9), Local_164.f_142.f_2, Local_164.f_142.f_6, Local_164.f_142.f_5, Local_164.f_142.f_7);
	func_19();
}

void func_28(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	unk_0x704F8697BB515627(*uParam0, "SET_SCORE");
	unk_0x9E3D03981E2E9AD9(iParam1);
	unk_0x82D42F43BE26EB72(fParam2);
	unk_0x82D42F43BE26EB72(fParam3);
	unk_0x82D42F43BE26EB72(fParam4);
	unk_0x392841D58D2EED1D();
}

void func_29()
{
	func_28(&(Local_164.f_142.f_9), 0, 5f, 1f, 5f);
	func_19();
}

void func_30()
{
	func_31(&(Local_164.f_142.f_9), 5000);
	func_19();
}

void func_31(var uParam0, int iParam1)
{
	unk_0x704F8697BB515627(*uParam0, "SET_INSTANT_SCORE");
	unk_0x9E3D03981E2E9AD9(iParam1);
	unk_0x392841D58D2EED1D();
}

int func_32()
{
	if (Local_164.f_165 != -1)
	{
		func_24(&(Local_164.f_142.f_9), Local_164.f_165);
		func_31(&(Local_164.f_142.f_9), 0);
		return 1;
	}
	func_19();
	return 0;
}

bool func_33()
{
	unk_0xA08F3C300F9E3468(func_22(), 0);
	Local_164.f_142.f_9 = unk_0x42AA2CCF0B61DCD8(func_34());
	return (unk_0xDAE4BC89A198A6AF(Local_164.f_142.f_9) && unk_0xAD9D75DD073BF477(func_22()));
}

char* func_34()
{
	return "STRENGTH_TEST_SCORE";
}

int func_35()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_37(func_41(iVar0), func_40(iVar0)))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 2)
	{
		Local_164.f_142 = func_36(func_41(1));
		Local_164.f_142.f_1 = func_36(func_41(0));
		return 1;
	}
	return 0;
}

int func_36(char* sParam0)
{
	if (!unk_0xAB6A270F84A8781E(uParam0))
	{
		return unk_0xC7D18C6E194A37FF(sParam0);
	}
	return -1;
}

bool func_37(var uParam0, int iParam1)
{
	return (func_39(uParam0) && func_38(iParam1));
}

int func_38(int iParam0)
{
	if (iParam0 != 0)
	{
		if (!unk_0xAF18C5D546F1B022(iParam0))
		{
			unk_0x78CA761D4F0B65D9(iParam0);
		}
		return 1;
	}
	return 0;
}

int func_39(char* sParam0)
{
	if (!unk_0xAB6A270F84A8781E(uParam0))
	{
		if (!unk_0x041B9511CD0AC7F4(sParam0))
		{
			unk_0xDEAC76DD3EF26CF5(sParam0, 0);
		}
		return 1;
	}
	return 0;
}

int func_40(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("sum_prop_arcade_strength_01a");
			break;
		
		case 1:
			iVar0 = joaat("sum_prop_arcade_str_bar_01a");
			break;
	}
	return iVar0;
}

char* func_41(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "arc_strenght_01a";
			break;
		
		case 1:
			sVar0 = "arc_strenght_02a";
			break;
	}
	return sVar0;
}

void func_42(int iParam0)
{
	if (Local_164.f_179 != iParam0)
	{
		Local_164.f_179 = iParam0;
	}
}

void func_43()
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = func_44(1);
	if (iVar0 == 0)
	{
		return;
	}
	Var1 = 1379393620;
	Var1.f_1 = unk_0x1146A9AE09CE2B14();
	unk_0xA5C82A39FF8ED272(1, &Var1, 2, iVar0);
}

var func_44(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x5E72DF7B8C03AA05())
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar1)))
		{
			iVar2 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iVar1));
			if (func_45(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x1146A9AE09CE2B14() || iParam0)
				{
					unk_0x191DDA30577F440A(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_45(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x8CFC2F41A749E236(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xCAD1755E530A6012(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2441237.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_46()
{
	if (unk_0x234B68AC2E35ED5A(Local_164.f_1, 30))
	{
		if (func_4(unk_0xD56332194D622ECE(Local_164.f_175)) && unk_0x32E225D6BB070AFA(unk_0xD56332194D622ECE(Local_164.f_175)))
		{
			unk_0xC664C0067EEAB8D1(&(Local_164.f_1), 30);
			unk_0x191DDA30577F440A(&(Local_164.f_2), 6);
			unk_0xD0A831CA83D07846(unk_0xD56332194D622ECE(Local_164.f_175), Local_164.f_175.f_1, Local_164.f_175.f_2);
			if (unk_0x1146A9AE09CE2B14() == Local_164.f_175)
			{
				unk_0x191DDA30577F440A(&(Local_164.f_2), 0);
			}
		}
	}
}

void func_47()
{
	float fVar0;
	struct<3> Var1;
	
	if (unk_0x234B68AC2E35ED5A(Local_164.f_2, 8))
	{
		if ((((Local_164.f_175 == unk_0x1146A9AE09CE2B14() || Local_164.f_175 == func_50()) || !func_4(unk_0xD56332194D622ECE(Local_164.f_175))) || !unk_0xFCC26BA7572E9F1F(Local_164.f_175)) || !func_49(Local_164.f_175))
		{
			unk_0xC664C0067EEAB8D1(&(Local_164.f_2), 8);
			return;
		}
		if (func_4(unk_0x7D2B9E6A64637269()) && func_4(unk_0xD56332194D622ECE(Local_164.f_175)))
		{
			if (!func_49(unk_0x1146A9AE09CE2B14()) && func_48(unk_0xD56332194D622ECE(Local_164.f_175), unk_0x7D2B9E6A64637269(), 1) < 2.2f)
			{
				fVar0 = -(2.2f + 1f);
				Var1 = { unk_0x9E695CE384C77EF0(unk_0xD56332194D622ECE(Local_164.f_175), 0f, fVar0, 0f) };
				unk_0x28A5BAF912B4E14D(unk_0x7D2B9E6A64637269(), Var1, 1f, 7000, 1193033728, 1056964608);
				unk_0xC664C0067EEAB8D1(&(Local_164.f_2), 8);
			}
		}
	}
}

float func_48(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 0) };
	}
	if (!unk_0xE50EB54E0F21BED0(iParam1, 0))
	{
		Var3 = { unk_0xD6E677FAD7521410(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xD6E677FAD7521410(iParam1, 0) };
	}
	return unk_0x0BABEFEA577FCFA4(Var0, Var3, iParam2);
}

int func_49(int iParam0)
{
	if (iParam0 != func_50())
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_429, 0);
	}
	return 0;
}

int func_50()
{
	return -1;
}

void func_51(struct<18> Param0)
{
	if (unk_0x234B68AC2E35ED5A(Local_164.f_2, 6))
	{
		if ((Local_164.f_175 != func_50() && func_4(unk_0xD56332194D622ECE(Local_164.f_175))) && unk_0xFCC26BA7572E9F1F(Local_164.f_175))
		{
			unk_0x7979149EE8FE954D(unk_0xD56332194D622ECE(Local_164.f_175), 2.2f);
		}
		else if (Local_164.f_175 != func_50())
		{
			if (!unk_0xA6BE8F025C6B653F(Param0.f_2[0]))
			{
				unk_0x13F856602366FE17(Param0.f_2[0]);
			}
			else
			{
				func_55(Param0);
				func_53(Param0);
				func_52();
				func_42(8);
				Local_164.f_175 = func_50();
				unk_0xC664C0067EEAB8D1(&(Local_164.f_2), 6);
			}
		}
	}
}

void func_52()
{
	func_31(&(Local_164.f_142.f_9), 0);
	func_19();
}

void func_53(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	struct<103> Var0;
	struct<3> Var117;
	struct<3> Var120;
	
	if ((unk_0x419E13582192CFEA(Param0.f_1) && unk_0x419E13582192CFEA(Param0.f_2[0])) && unk_0xA6BE8F025C6B653F(Param0.f_2[0]))
	{
		Var0.f_1 = 14;
		Var0.f_16 = 14;
		Var0.f_59 = 14;
		Var0.f_102 = 14;
		func_54(14, &Var0);
		Var0.f_59[0 /*3*/].f_2 = unk_0xA8D713A937F31250(Local_164);
		Var117 = { unk_0x9E695CE384C77EF0(Param0.f_1, Var0.f_16[0 /*3*/]) };
		Var120 = { Var0.f_59[0 /*3*/] };
		unk_0xDB8D6815E13996A9(Param0.f_2[0], Var117, 0, 0, 1);
		unk_0xBDDCDEC7B6205897(Param0.f_2[0], Var120, 2, 1);
	}
}

void func_54(int iParam0, var uParam1)
{
	*uParam1 = 4;
	uParam1->f_1[0] = 0;
	uParam1->f_16[0 /*3*/] = { 0.005f, -0.2f, 0.985f };
	uParam1->f_59[0 /*3*/] = { 0f, 180f, 0f };
	uParam1->f_102[0] = joaat("sum_prop_arcade_strength_ham_01a");
	uParam1->f_1[1] = 0;
	uParam1->f_16[1 /*3*/] = { 0f, 0f, 0f };
	uParam1->f_59[1 /*3*/] = { 0f, 0f, 0f };
	uParam1->f_102[1] = joaat("sum_prop_arcade_str_lighton");
	uParam1->f_1[2] = 0;
	uParam1->f_16[2 /*3*/] = { 0f, 0f, 0f };
	uParam1->f_59[2 /*3*/] = { 0f, 0f, 0f };
	uParam1->f_102[2] = joaat("sum_prop_arcade_str_lightoff");
	uParam1->f_1[3] = 0;
	uParam1->f_16[3 /*3*/] = { 0f, 0f, 0f };
	uParam1->f_59[3 /*3*/] = { 0f, 0f, 0f };
	uParam1->f_102[3] = joaat("sum_prop_arcade_str_bar_01a");
}

int func_55(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	struct<103> Var0;
	
	if ((unk_0x419E13582192CFEA(Param0.f_1) && unk_0x419E13582192CFEA(Param0.f_2[0])) && unk_0xA6BE8F025C6B653F(Param0.f_2[0]))
	{
		if (unk_0xD79E16EA1337F8F9(Param0.f_2[0]))
		{
			Var0.f_1 = 14;
			Var0.f_16 = 14;
			Var0.f_59 = 14;
			Var0.f_102 = 14;
			func_54(14, &Var0);
			unk_0x3211C35423263392(Param0.f_2[0], 1, 1);
			unk_0xDB8D6815E13996A9(Param0.f_2[0], unk_0x9E695CE384C77EF0(Param0.f_1, Var0.f_16[0 /*3*/]), 0, 0, 1);
			Var0.f_59[0 /*3*/].f_2 = unk_0xA8D713A937F31250(Local_164);
			unk_0xBDDCDEC7B6205897(Param0.f_2[0], Var0.f_59[0 /*3*/], 2, 1);
			return 1;
		}
	}
	return 0;
}

void func_56()
{
	if (Local_164.f_165.f_4)
	{
		if (func_15(&(Local_164.f_165.f_7), 4000, 0))
		{
			func_57(Local_164.f_165);
			func_14(&(Local_164.f_165.f_7));
			Local_164.f_165.f_4 = 0;
		}
	}
}

void func_57(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_44(1);
	if (iVar0 == 0)
	{
		return;
	}
	Var1.x = 1818136972;
	Var1.f_1 = unk_0x1146A9AE09CE2B14();
	Var1.f_2 = uParam0;
	unk_0xA5C82A39FF8ED272(1, &Var1, 3, iVar0);
}

void func_58()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x1131A9F5A725F45A(1))
	{
		iVar1 = unk_0x5F0847A02025CAB5(1, iVar0);
		switch (iVar1)
		{
			case 174:
				unk_0x53858F1E03A88AE1(1, iVar0, &iVar2, 2);
				switch (iVar2)
				{
					case -1841849912:
						if (Global_1394274.f_801)
						{
							return;
						}
						func_59(iVar2, iVar0);
						break;
					
					case -647000111:
						if (Global_1394274.f_802)
						{
							return;
						}
						func_59(iVar2, iVar0);
						break;
					
					case -640601436:
						if (Global_1394274.f_804)
						{
							return;
						}
						func_59(iVar2, iVar0);
						break;
					
					case 1547610320:
						if (Global_1394274.f_806)
						{
							return;
						}
						func_59(iVar2, iVar0);
						break;
					
					case -695499408:
						if (Global_1394274.f_807)
						{
							return;
						}
						func_59(iVar2, iVar0);
						break;
					
					case 1514601602:
						if (Global_1394274.f_808)
						{
							return;
						}
						func_59(iVar2, iVar0);
						break;
					
					case 1631858659:
						if (Global_1394274.f_809)
						{
							return;
						}
						func_59(iVar2, iVar0);
						break;
				}
				break;
		}
		iVar0++;
	}
}

void func_59(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	struct<4> Var4;
	struct<3> Var8;
	struct<6> Var11;
	struct<5> Var17;
	struct<2> Var22;
	
	switch (iParam0)
	{
		case -1841849912:
			if (unk_0x53858F1E03A88AE1(1, iParam1, &Var0, 2))
			{
				if (unk_0xFCC26BA7572E9F1F(Var0.f_1))
				{
					func_42(4);
				}
			}
			break;
		
		case -647000111:
			if (unk_0x53858F1E03A88AE1(1, iParam1, &Var2, 2))
			{
				if (unk_0xFCC26BA7572E9F1F(Var2.f_1))
				{
					func_42(5);
				}
			}
			break;
		
		case -640601436:
			if (unk_0x53858F1E03A88AE1(1, iParam1, &Var4, 4))
			{
				if (unk_0xFCC26BA7572E9F1F(Var4.f_1))
				{
					if (Local_164.f_165 != Var4.f_2)
					{
						Local_164.f_165 = Var4.f_2;
						if (Var4.f_3)
						{
							func_24(&(Local_164.f_142.f_9), Local_164.f_165);
						}
					}
				}
			}
			break;
		
		case 1547610320:
			if (unk_0x53858F1E03A88AE1(1, iParam1, &Var8, 3))
			{
				if (unk_0xFCC26BA7572E9F1F(Var8.f_1))
				{
					Local_164.f_165 = Var8.f_2;
					func_42(7);
				}
			}
			break;
		
		case -695499408:
			if (unk_0x53858F1E03A88AE1(1, iParam1, &Var11, 6))
			{
				if (unk_0xFCC26BA7572E9F1F(Var11.f_1))
				{
					Local_164.f_142.f_2 = Var11.f_2;
					Local_164.f_142.f_5 = Var11.f_3;
					Local_164.f_142.f_6 = Var11.f_4;
					Local_164.f_142.f_7 = Var11.f_5;
					func_42(6);
				}
			}
			break;
		
		case 1514601602:
			if (unk_0x53858F1E03A88AE1(1, iParam1, &Var17, 5))
			{
				if (unk_0xFCC26BA7572E9F1F(Var17.f_1))
				{
					Local_164.f_175 = Var17.f_2;
					Local_164.f_175.f_1 = Var17.f_3;
					Local_164.f_175.f_2 = Var17.f_4;
					unk_0x191DDA30577F440A(&(Local_164.f_1), 30);
					unk_0x191DDA30577F440A(&(Local_164.f_2), 8);
				}
			}
			break;
		
		case 1631858659:
			if (unk_0x53858F1E03A88AE1(1, iParam1, &Var22, 2))
			{
				if (unk_0xFCC26BA7572E9F1F(Var22.f_1))
				{
					unk_0xC664C0067EEAB8D1(&(Local_164.f_2), 6);
				}
			}
			break;
	}
}

void func_60(struct<18> Param0)
{
	func_90();
	func_85();
	Local_164.f_3 = Local_164.f_156;
	func_84("End_Game", &(Local_164.f_20), 1);
	func_62();
	if (!Local_164.f_25.f_8)
	{
		func_5();
	}
	unk_0x191DDA30577F440A(&(Local_164.f_1), 5);
	func_16(&(Local_164.f_60.f_2), 0, 0);
	func_53(Param0);
	func_61(&(Local_164.f_181), 0);
}

void func_61(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
	}
}

void func_62()
{
	func_83(0);
	func_82(0);
	func_81();
	func_69();
	func_68();
	func_66();
	func_64();
	func_63();
}

void func_63()
{
	struct<10> Var0;
	struct<37> Var10;
	struct<5> Var47;
	struct<9> Var52;
	
	Var0.f_1 = 1065353216;
	Var10.f_3.f_2 = 14;
	Var10.f_36 = -1;
	Var47 = -1;
	Var47.f_1 = -1;
	Var47.f_2 = -1;
	Var47.f_3 = -1;
	Local_164.f_10 = { Var0 };
	Local_164.f_105 = { Var10 };
	Local_164.f_20 = { Var47 };
	Local_164.f_156 = { Var52 };
	Local_164.f_1 = 0;
	func_14(&(Local_164.f_8));
}

void func_64()
{
	if ((((((func_65("ARC_CAB_TRI_STRET") || func_65("ARC_CAB_TRI_RSTRET")) || func_65("ARC_CAB_AOF_POW")) || func_65("ARC_CAB_AOF_POW_ALT")) || func_65("ARC_CAB_AOF_MLTPLR")) || func_65("ARC_CAB_AOF_MLTPLR_ALT")) || func_65("ARC_CAB_AOF_HUD_POW"))
	{
		unk_0x66AE54CE92457FEE(1);
	}
}

bool func_65(char* sParam0)
{
	unk_0x4A4799828818A508(sParam0);
	return unk_0x0222F263F70347A8(0);
}

void func_66()
{
	func_67(&(Local_164.f_20.f_3));
	func_67(&(Local_164.f_20.f_1));
	func_67(&(Local_164.f_20.f_2));
}

void func_67(var uParam0)
{
	if (*uParam0 != -1)
	{
		unk_0x791B4C3811D53DFA(*uParam0);
		unk_0xBAB6F7501A822416(*uParam0);
		*uParam0 = -1;
	}
}

void func_68()
{
	func_14(&(Local_164.f_156.f_5));
}

void func_69()
{
	var uVar0;
	
	uVar0 = func_70();
	unk_0x88718F88EB6B8FD5(uVar0);
}

char* func_70()
{
	char* sVar0;
	
	sVar0 = "clipset@anim_heist@arcade@strength@male";
	if (func_79() && func_71(unk_0x7D2B9E6A64637269()))
	{
		sVar0 = "clipset@anim_heist@arcade@strength@female";
	}
	return sVar0;
}

int func_71(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x6471F4759775FCA4(iParam0);
	iVar2 = -1;
	iVar3 = -1;
	if (iVar0 == joaat("mp_f_freemode_01"))
	{
		iVar1 = func_77(iParam0, 6);
		if (iVar1 >= 256)
		{
			iVar2 = func_73(iVar0, iVar1, 6, 4);
			iVar3 = func_72(iVar2);
		}
		if (((((((((((((iVar1 >= 0 && iVar1 <= 15) || (iVar1 >= 96 && iVar1 <= 111)) || (iVar1 >= 112 && iVar1 <= 127)) || (iVar1 >= 128 && iVar1 <= 143)) || (iVar1 >= 192 && iVar1 <= 207)) || (iVar1 >= 224 && iVar1 <= 239)) || iVar3 == 0) || iVar3 == 6) || iVar3 == 7) || iVar3 == 8) || iVar3 == 12) || iVar3 == 14) || (iVar2 != -1 && unk_0x01758128AAB0BA8F(iVar2, joaat("HIGH_HEELS"), 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_72(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_73(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	struct<2> Var19;
	int iVar36;
	int iVar37;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x71794FDA9361403E(&Var0);
		iVar17 = (iParam1 - func_76(iParam0));
		if (iVar17 < 0)
		{
			return -1;
		}
		iVar18 = unk_0x44C4C2E7417F5E29(iParam3, 8, -1, 1, -1, -1);
		if (iVar18 <= iVar17)
		{
			return -1;
		}
		unk_0x9404A07A08FA1D0F(iVar17, &Var0);
		return Var0.f_1;
	}
	else
	{
		unk_0xFE9B2B065B8931FE(&Var19);
		iVar36 = (iParam1 - func_74(iParam0, func_75(iParam2)));
		if (iVar36 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_77181.f_26[iParam2] && iParam1 == Global_77181[iParam2]) && Global_77181.f_13[iParam2] != 0)
		{
			return Global_77181.f_13[iParam2];
		}
		iVar37 = unk_0x44C4C2E7417F5E29(iParam3, 8, -1, 0, -1, func_75(iParam2));
		if (iVar37 <= iVar36)
		{
			return -1;
		}
		unk_0xDF9AB3C346705246(iVar36, &Var19);
		Global_77181.f_13[iParam2] = Var19.f_1;
		Global_77181[iParam2] = iParam1;
		Global_77181.f_26[iParam2] = iParam0;
		return Var19.f_1;
	}
	return -1;
}

int func_74(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_75(int iParam0)
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

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_77(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0xECEC7528A52B4EE8(iParam0))
	{
		return -99;
	}
	uVar0 = func_75(iParam1);
	iVar1 = unk_0x094C1D2DFE050D6E(iParam0, uVar0);
	iVar2 = unk_0x288277F22D527487(iParam0, iVar0);
	return func_78(iParam0, iVar1, iVar2, iParam1);
}

int func_78(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	uVar0 = func_75(iParam3);
	iVar1 = unk_0x1AAA5445D3C56366(uParam0, uVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0x1887979EFA1D3BF6(uParam0, uVar0, iVar3);
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

bool func_79()
{
	return func_80(unk_0x1146A9AE09CE2B14());
}

int func_80(int iParam0)
{
	if (unk_0x6471F4759775FCA4(unk_0xD56332194D622ECE(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

void func_81()
{
	if (unk_0xDAE4BC89A198A6AF(Local_164.f_10.f_9))
	{
		unk_0x3D9BC07C93913E04(&(Local_164.f_10.f_9));
	}
}

void func_82(bool bParam0)
{
	if (bParam0)
	{
		if (Local_164.f_10.f_5 != 1)
		{
			Local_164.f_10.f_5 = 1;
		}
	}
	else if (Local_164.f_10.f_5 != 0)
	{
		Local_164.f_10.f_5 = 0;
	}
}

void func_83(bool bParam0)
{
	if (bParam0)
	{
		if (Local_164.f_10.f_4 != 1)
		{
			Local_164.f_10.f_4 = 1;
		}
	}
	else if (Local_164.f_10.f_4 != 0)
	{
		Local_164.f_10.f_4 = 0;
	}
}

void func_84(char* sParam0, var uParam1, int iParam2)
{
	if (!unk_0xAB6A270F84A8781E(sParam0))
	{
		if (*uParam1 == -1)
		{
			*uParam1 = unk_0x5AD02BBC63E31E46();
		}
		unk_0x791B4C3811D53DFA(*uParam1);
		unk_0x4569EA65F1B056ED(*uParam1, sParam0, Local_164.f_5, "sum20_am_Axe_of_Fury_sounds", iParam2, 0, 0);
	}
}

void func_85()
{
	struct<11> Var0;
	
	Var0.f_7 = Local_164.f_156;
	Var0 = 550530467;
	Var0.f_2 = 1;
	Var0.f_6 = unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Local_164.f_8));
	Var0.f_9 = 0;
	if (Local_164.f_156.f_3)
	{
		Var0.f_9 = 1;
	}
	else if (Local_164.f_156.f_4)
	{
		Var0.f_9 = 2;
		Var0.f_8 = func_89(19);
	}
	if (unk_0x1146A9AE09CE2B14() != func_50())
	{
		if (func_88(unk_0x1146A9AE09CE2B14()))
		{
			Var0.f_10 = 589001948;
		}
		else if (func_86(unk_0x1146A9AE09CE2B14()))
		{
			Var0.f_10 = 2003554330;
		}
		else
		{
			Var0.f_10 = 0;
		}
	}
	else
	{
		Var0.f_10 = 0;
	}
	unk_0x0243B92F54E119C8(&Var0);
}

int func_86(int iParam0)
{
	if (iParam0 != func_50())
	{
		if (func_45(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_87(Global_2426865[iParam0 /*449*/].f_319.f_6) == 17;
			}
		}
	}
	return 0;
}

int func_87(int iParam0)
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
		case joaat("mpsv_lp0_31"):
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
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
		case 150:
		case 152:
		case 151:
		case 149:
			return 21;
			break;
		
		case 153:
			return 22;
			break;
	}
	return -1;
}

int func_88(int iParam0)
{
	if (iParam0 != func_50())
	{
		if (func_45(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_87(Global_2426865[iParam0 /*449*/].f_319.f_6) == 21;
			}
		}
	}
	return 0;
}

int func_89(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -703892462;
			break;
		
		case 1:
			return 1615447518;
			break;
		
		case 2:
			return 173771160;
			break;
		
		case 3:
			return 431769125;
			break;
		
		case 4:
			return 723174211;
			break;
		
		case 5:
			return 288339047;
			break;
		
		case 6:
			return -1039576625;
			break;
		
		case 7:
			return 1042904036;
			break;
		
		case 8:
			return -1840229420;
			break;
		
		case 9:
			return -829266285;
			break;
		
		case 10:
			return -1914774207;
			break;
		
		case 11:
			return -1252122020;
			break;
		
		case 12:
			return 1515220030;
			break;
		
		case 13:
			return 2147211779;
			break;
		
		case 14:
			return -806766396;
			break;
		
		case 15:
			return 494551723;
			break;
		
		case 16:
			return -503001745;
			break;
		
		case 17:
			return -1884371432;
			break;
		
		case 18:
			return -1978999845;
			break;
		
		case 19:
			return 924161209;
			break;
		
		case 20:
			return 1228857712;
			break;
	}
	return 0;
}

void func_90()
{
	int iVar0;
	
	if (Local_164.f_156 == 1100)
	{
		if (!func_161(93, -1))
		{
			func_160(93, 1, -1);
			func_159(28254, 1, -1, 1);
			func_156(44);
			func_155(1);
			func_98(0, unk_0x7D2B9E6A64637269(), "", -1827353931, -1441430505, 800, 1, -1, 0, 0, 0);
			func_155(0);
			Local_164.f_156.f_3 = 1;
		}
		iVar0 = func_95(28084, -1, -1) + 1;
		if (iVar0 == 11)
		{
			func_93(28084, iVar0, -1, 1);
			if (!func_161(94, -1))
			{
				func_160(94, 1, -1);
				func_92(1);
				func_159(28255, 1, -1, 1);
				func_156(45);
				func_156(46);
				func_91("ARD_CAB_AOF_TROP1", -1);
				func_155(1);
				func_98(0, unk_0x7D2B9E6A64637269(), "", -1827353931, -1441430505, 800, 1, -1, 0, 0, 0);
				func_155(0);
				Local_164.f_156.f_4 = 1;
			}
		}
		else if (iVar0 < 11)
		{
			func_93(28084, iVar0, -1, 1);
		}
	}
}

void func_91(char* sParam0, int iParam1)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 0, 1, iParam1);
}

void func_92(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_395.f_3, 3))
		{
			unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_395.f_3), 3);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_395.f_3, 3))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_395.f_3), 3);
	}
}

var func_93(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_94();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x5A0258255BDE2FB1((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x5A0258255BDE2FB1((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x5A0258255BDE2FB1((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x5A0258255BDE2FB1((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x83F92F0DDD94A22D((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x5A0258255BDE2FB1((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x83F92F0DDD94A22D((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x5A0258255BDE2FB1((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x5A0258255BDE2FB1((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x5A0258255BDE2FB1((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x5A0258255BDE2FB1((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x5A0258255BDE2FB1((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x5A0258255BDE2FB1((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x5A0258255BDE2FB1((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x5A0258255BDE2FB1((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x5A0258255BDE2FB1((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0x5A0258255BDE2FB1((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0x5A0258255BDE2FB1((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0x5A0258255BDE2FB1((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - unk_0x5A0258255BDE2FB1((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - unk_0x5A0258255BDE2FB1((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - unk_0x5A0258255BDE2FB1((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 28483), 0, 1, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - unk_0x5A0258255BDE2FB1((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 30483), 0, 1, iParam2, "_HISLANDPSTAT_INT");
		iVar1 = ((iParam0 - 30483) - unk_0x5A0258255BDE2FB1((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 30707), 0, 1, iParam2, "_TUNERPSTAT_INT");
		iVar1 = ((iParam0 - 30707) - unk_0x5A0258255BDE2FB1((iParam0 - 30707)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x5A0258255BDE2FB1((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x5A0258255BDE2FB1((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xD99D30290D6BDAC2(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_94()
{
	return Global_1312763;
}

int func_95(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_94();
	}
	iVar0 = 0;
	iVar1 = func_97(iParam0, iParam1);
	uVar2 = func_96(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x167E0AAAC47615D0(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_96(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x5A0258255BDE2FB1((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x5A0258255BDE2FB1((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x5A0258255BDE2FB1((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x5A0258255BDE2FB1((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x5A0258255BDE2FB1((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x5A0258255BDE2FB1((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x5A0258255BDE2FB1((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x5A0258255BDE2FB1((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x5A0258255BDE2FB1((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x5A0258255BDE2FB1((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x5A0258255BDE2FB1((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x5A0258255BDE2FB1((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x5A0258255BDE2FB1((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x5A0258255BDE2FB1((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x5A0258255BDE2FB1((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x5A0258255BDE2FB1((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0x5A0258255BDE2FB1((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0x5A0258255BDE2FB1((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0x5A0258255BDE2FB1((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - unk_0x5A0258255BDE2FB1((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - unk_0x5A0258255BDE2FB1((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - unk_0x5A0258255BDE2FB1((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - unk_0x5A0258255BDE2FB1((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = ((iParam0 - 30483) - unk_0x5A0258255BDE2FB1((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar0 = ((iParam0 - 30707) - unk_0x5A0258255BDE2FB1((iParam0 - 30707)) * 8) * 8;
	}
	return iVar0;
}

int func_97(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_94();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x83F92F0DDD94A22D((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x83F92F0DDD94A22D((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 30483), 0, 1, iParam1, "_HISLANDPSTAT_INT");
	}
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 30707), 0, 1, iParam1, "_TUNERPSTAT_INT");
	}
	return iVar0;
}

int func_98(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_108(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x419E13582192CFEA(iParam1))
		{
			if (unk_0xA2CCAAC7F5CA3F49(iParam1))
			{
				uVar1 = unk_0xFAA5505029C4B5A6(iParam1);
				func_104(unk_0x885F3A431ECE75E3(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_99(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_99(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_102(iParam0, 1) };
	if (iParam0 == func_101(unk_0x7D2B9E6A64637269()))
	{
		func_100(1);
	}
	func_104(Var0, iParam1, 0, sParam2, iParam3);
}

void func_100(int iParam0)
{
	Global_2441237.f_2009 = iParam0;
}

int func_101(var uParam0)
{
	return uParam0;
}

Vector3 func_102(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0xB90EB35E662F9812())
	{
		Var3 = { unk_0x25D8B90D7AB16D2F(2) };
	}
	if (iParam0 == func_103(unk_0x7D2B9E6A64637269()) && unk_0x5F95E51ABC3FC59A(unk_0x264EE27FDED1DCA1()) == 4)
	{
		Var0 = { unk_0x9E695CE384C77EF0(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		fVar6 = unk_0xA8D713A937F31250(iParam0);
		if (unk_0x5F95E51ABC3FC59A(unk_0x264EE27FDED1DCA1()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0xC78A38E5FBC66080(unk_0x6471F4759775FCA4(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x26C2ACB261895E70(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_103(var uParam0)
{
	return uParam0;
}

void func_104(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2441237.f_1408[iVar0 /*30*/].f_6 == 0 || Global_2441237.f_1408[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2441237.f_1408[iVar1 /*30*/] = { Param0 };
			Global_2441237.f_1408[iVar1 /*30*/].f_6 = 1;
			Global_2441237.f_1408[iVar1 /*30*/].f_4 = func_107(Global_2441237.f_1408[iVar1 /*30*/], &Global_1312335, &Global_1312336);
			Global_2441237.f_1408[iVar1 /*30*/].f_7 = unk_0x551F46B3C7DFB654();
			Global_2441237.f_1408[iVar1 /*30*/].f_3 = iParam3;
			Global_2441237.f_1408[iVar1 /*30*/].f_8 = iParam4;
			Global_2441237.f_1408[iVar1 /*30*/].f_9 = func_106();
			Global_2441237.f_1408[iVar1 /*30*/].f_10 = func_105();
			StringCopy(&(Global_2441237.f_1408[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2441237.f_1408[iVar1 /*30*/].f_26 = unk_0x5FBE5EA201067B5E(unk_0x551F46B3C7DFB654(), iParam6);
		}
	}
}

int func_105()
{
	if (Global_2441237.f_2009)
	{
		Global_2441237.f_2009 = 0;
		return 1;
	}
	Global_2441237.f_2009 = 0;
	return 0;
}

var func_106()
{
	var uVar0;
	
	uVar0 = Global_2441237.f_2011;
	Global_2441237.f_2011 = 1;
	return uVar0;
}

float func_107(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x0BABEFEA577FCFA4(unk_0xEE77BC5A16EEF2B4(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_108(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_109(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_109(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_154(unk_0x1146A9AE09CE2B14()) || func_153(unk_0x1146A9AE09CE2B14()))
	{
		if (Global_262145.f_9807 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9807;
		}
	}
	else if (func_150() || func_146(unk_0x1146A9AE09CE2B14()))
	{
		if (Global_262145.f_22962 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22962;
		}
	}
	else if (Global_262145.f_6806 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6806;
	}
	if (func_145(uParam2))
	{
	}
	if (func_144())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_142(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_141(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_138(0, &iVar1);
					break;
				
				case 3:
					func_138(1, &iVar1);
					break;
				
				case 1:
					func_134(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1694735)
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
			func_131(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_120((func_130(unk_0x1146A9AE09CE2B14()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xDD217DE18BBC8E71(iVar1, iParam8, iParam9);
				if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_2 != -1)
				{
					func_131(1166, iVar1, -1);
				}
				func_114(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_110((func_112(unk_0x1146A9AE09CE2B14()) + iVar1));
			}
			else
			{
				func_110((func_112(unk_0x1146A9AE09CE2B14()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_110(int iParam0)
{
	if (func_144())
	{
		Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_205.f_5 = iParam0;
		func_111(joaat("mpply_globalxp"), iParam0);
	}
}

void func_111(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, uParam1, 1);
	}
}

int func_112(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_45(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x1146A9AE09CE2B14())
			{
				return func_113(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590908[iParam0 /*874*/].f_205.f_5;
			}
		}
		else
		{
			return func_113(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_113(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xD885BEFA31A18D47(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_114(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_119(unk_0x1146A9AE09CE2B14()) };
	if (unk_0x29712F962253A7EB())
	{
		if (unk_0xDA1611E46AAEA71B(&Var0))
		{
			iVar13 = func_117(func_118(&Var0));
			if (iVar13 == 0)
			{
				func_116(&Global_1390382, iParam0);
				func_115(joaat("mpply_crew_local_xp_0"), Global_1390382);
			}
			else if (iVar13 == 1)
			{
				func_116(&Global_1390383, iParam0);
				func_115(joaat("mpply_crew_local_xp_1"), Global_1390383);
			}
			else if (iVar13 == 2)
			{
				func_116(&Global_1390384, iParam0);
				func_115(joaat("mpply_crew_local_xp_2"), Global_1390384);
			}
			else if (iVar13 == 3)
			{
				func_116(&Global_1390385, iParam0);
				func_115(joaat("mpply_crew_local_xp_3"), Global_1390385);
			}
			else if (iVar13 == 4)
			{
				func_116(&Global_1390386, iParam0);
				func_115(joaat("mpply_crew_local_xp_4"), Global_1390386);
			}
		}
	}
}

void func_115(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1390377 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1390379 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1390379 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1390380 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1390381 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1390382 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1390383 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1390384 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1390385 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1390386 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1390387 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1390388 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1390389 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1390390 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1390391 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1390392 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1390393 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_116(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_117(int iParam0)
{
	if (iParam0 == Global_1390377)
	{
		return 0;
	}
	else if (iParam0 == Global_1390378)
	{
		return 1;
	}
	else if (iParam0 == Global_1390379)
	{
		return 2;
	}
	else if (iParam0 == Global_1390380)
	{
		return 3;
	}
	else if (iParam0 == Global_1390381)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_118(var uParam0)
{
	if (unk_0x29712F962253A7EB())
	{
		if (unk_0xDA1611E46AAEA71B(uParam0))
		{
			return Global_2463440;
		}
	}
	return Global_2463440;
}

struct<13> func_119(int iParam0)
{
	struct<13> Var0;
	
	unk_0x483D665D1287B547(iParam0, &Var0, 13);
	return Var0;
}

void func_120(int iParam0, int iParam1, int iParam2)
{
	if (func_144())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9775 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1390527[func_129(-1)])
				{
					unk_0xDD217DE18BBC8E71(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1390527[func_129(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9774 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xDD217DE18BBC8E71(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9774 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xDD217DE18BBC8E71(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_128(unk_0x1146A9AE09CE2B14()))
		{
			Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_205.f_1 = iParam0;
			Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_205.f_6 = func_126(iParam0, 1);
		}
		func_125(640, iParam0, -1, 1);
		func_124(641, func_126(iParam0, 1), -1, 1, 0);
		Global_1390527[func_129(-1)] = iParam0;
		func_121(-1109644434, 7, 0);
	}
}

void func_121(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_123(iParam1, iParam2))
	{
		iVar0 = func_122();
		Global_2463392[iVar0] = iParam1;
		Global_2463403[iVar0] = iParam0;
	}
}

int func_122()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2463392[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_123(int iParam0, var uParam1)
{
	if (Global_1312890)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312902) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_124(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_129(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
}

void func_125(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2555716[iParam0 /*3*/][func_129(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1390455[func_129(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1390461[func_129(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1390467[func_129(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1390473[func_129(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1390479[func_129(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1390425[func_129(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1390431[func_129(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1390437[func_129(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1390443[func_129(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1390449[func_129(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1390395[func_129(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1390401[func_129(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1390407[func_129(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1390413[func_129(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1390419[func_129(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1390485[func_129(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1390491[func_129(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1390497[func_129(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1390503[func_129(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1390509[func_129(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1390515[func_129(iParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1390521[func_129(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1390527[func_129(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1390533[func_129(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2595335[0 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2595335[1 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2595335[2 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2595335[3 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2595490[func_129(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1390539[func_129(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1390545[func_129(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1390551[func_129(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1390557[func_129(iParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1390563[func_129(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1390569[func_129(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2595411[0 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2595411[1 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2595411[2 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2595411[3 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2595411[4 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2595493[0 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2595493[1 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2595493[2 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2595493[3 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2595493[4 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2595509[0 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2595509[1 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2595509[2 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2595509[3 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2595509[4 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2595411[5 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2595335[4 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2595525[func_129(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2595534[func_129(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2595528[func_129(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2595537[func_129(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2595531[func_129(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2595540[func_129(iParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2595543[func_129(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2595411[6 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2595335[5 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2595411[7 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2595335[6 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2595411[8 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2595335[7 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2595411[9 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2595335[8 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2595411[10 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2595335[9 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2595411[11 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2595335[10 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2595411[12 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2595335[11 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2595411[13 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2595335[12 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2595411[14 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2595335[13 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2595411[15 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2595335[14 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2595411[16 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2595335[15 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2595411[17 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2595335[16 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2595335[17 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2595335[18 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2595335[19 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2595335[20 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2595546[func_129(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2595549[func_129(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2595552[func_129(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2595555[func_129(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2595558[func_129(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2595561[func_129(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2595564[func_129(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2595567[func_129(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2595570[func_129(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2595573[func_129(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2595576[func_129(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2595579[func_129(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2595582[func_129(iParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2595585[func_129(iParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2595335[21 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2595411[23 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2595335[22 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2595411[24 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2595335[23 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2595335[24 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_126(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_127(iParam0, 0);
}

int func_127(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
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
		if (Global_293361[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_293361[iVar3] < iParam0)
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
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_128(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x234B68AC2E35ED5A(Global_2441237.f_1, iParam0);
	}
	return 1;
}

int func_129(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_94();
		if (iVar1 > -1)
		{
			Global_2555428 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2555428 = 1;
		}
	}
	return iVar0;
}

int func_130(int iParam0)
{
	if (Global_1312485.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x1146A9AE09CE2B14())
			{
				return Global_1390527[func_129(-1)];
			}
			else if (func_128(iParam0))
			{
				return Global_1590908[iParam0 /*874*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1390527[func_129(-1)];
	}
	return 0;
}

void func_131(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_133(iParam0, func_129(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_132(iParam0))
	{
		func_124(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_125(iParam0, iVar0, iParam2, 1);
	}
}

int func_132(int iParam0)
{
	if (Global_1390376)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8728:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8730:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8732:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8734:
			case 1304:
			case 7235:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8733:
			case 9537:
			case 1237:
			case 1878:
			case 2269:
			case 2931:
			case 3060:
			case 10441:
			case 3055:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3234:
			case 3236:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3229:
			case 3223:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3691:
			case 3232:
			case 3231:
			case 4022:
			case 4021:
			case 4025:
			case 4024:
			case 4028:
			case 4027:
			case 4031:
			case 4030:
			case 6112:
			case 6111:
			case 6170:
			case 6169:
			case 6535:
			case 6534:
			case 6548:
			case 6547:
			case 6561:
			case 6560:
			case 6564:
			case 6563:
			case 6567:
			case 6566:
			case 7285:
			case 7287:
			case 7289:
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
			case 8295:
			case 8296:
			case 8904:
			case 8012:
			case 8536:
			case 8979:
			case 8981:
			case 8982:
			case 8984:
			case 9623:
				return 1;
				break;
			}
	}
	return 0;
}

int func_133(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2555716[iParam0 /*3*/][func_129(iParam1)];
		if (unk_0xD885BEFA31A18D47(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_134(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14());
	iVar0 = 0;
	while (iVar0 < unk_0x5E72DF7B8C03AA05())
	{
		iVar4 = unk_0x6750311806FF130A(iVar0);
		if (unk_0xF46EDF82CA845956(iVar4))
		{
			iVar5 = unk_0x539ED6DF32477DE0(iVar4);
			if (unk_0x7C3E030BC3ED6671(iVar5) != -1)
			{
				if (unk_0x7C3E030BC3ED6671(iVar5) == iVar1 || func_137(unk_0x7C3E030BC3ED6671(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x1146A9AE09CE2B14())
					{
						if (func_136(unk_0x1146A9AE09CE2B14(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_135(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_135(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_135(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_136(int iParam0, int iParam1)
{
	if (unk_0x29712F962253A7EB())
	{
		Global_2518253 = { func_119(iParam0) };
		Global_2518266 = { func_119(iParam1) };
		if (unk_0xDA1611E46AAEA71B(&Global_2518253))
		{
			if (unk_0xDA1611E46AAEA71B(&Global_2518266))
			{
				unk_0xEDDAF8F99F371228(&Global_2518183, 35, &Global_2518253);
				unk_0xEDDAF8F99F371228(&Global_2518218, 35, &Global_2518266);
				if (Global_2518183 == Global_2518218)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_137(int iParam0, int iParam1, int iParam2)
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
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 0);
				
				case 1:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 1);
				
				case 2:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 2);
				
				case 3:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 4);
				
				case 1:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 5);
				
				case 2:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 6);
				
				case 3:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 8);
				
				case 1:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 9);
				
				case 2:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 10);
				
				case 3:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 12);
				
				case 1:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 13);
				
				case 2:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 14);
				
				case 3:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_138(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x5E72DF7B8C03AA05())
		{
			iVar3 = iVar0;
			if (unk_0xF46EDF82CA845956(iVar3))
			{
				iVar4 = unk_0x539ED6DF32477DE0(iVar3);
				if (func_45(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x1146A9AE09CE2B14())
					{
						iVar1++;
						if (func_136(unk_0x1146A9AE09CE2B14(), iVar4))
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
			if (func_45(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x1146A9AE09CE2B14())
				{
					if (func_139(unk_0x1146A9AE09CE2B14(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_136(unk_0x1146A9AE09CE2B14(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_135(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_135(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_139(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_140(iParam0), func_140(iParam1));
	return 0f;
}

Vector3 func_140(int iParam0)
{
	return unk_0xD6E677FAD7521410(unk_0xD56332194D622ECE(uParam0), 0);
}

int func_141(int iParam0)
{
	int iVar0;
	
	if (unk_0xB4A6144FE4FF5B78() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_135(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_142(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x909F156FC4077611(iParam0) > func_130(unk_0x1146A9AE09CE2B14()))
		{
			iParam0 = -func_130(unk_0x1146A9AE09CE2B14());
		}
	}
	if (func_143(8000, 0, 0) > 0)
	{
		if (func_143(8000, 0, 0) < (iParam0 + func_130(unk_0x1146A9AE09CE2B14())))
		{
			iParam0 = (func_143(8000, 0, 0) - func_130(unk_0x1146A9AE09CE2B14()));
		}
	}
	return iParam0;
}

int func_143(int iParam0, bool bParam1, int iParam2)
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
	return Global_293361[iParam0];
}

int func_144()
{
	return 1;
}

int func_145(char* sParam0)
{
	if (unk_0x4030103C8B148AFC(uParam0))
	{
		return 1;
	}
	else if (unk_0xDA654EB115F9FF7D(uParam0, "") || unk_0xDA654EB115F9FF7D(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_146(int iParam0)
{
	return func_147(func_148(iParam0));
}

int func_147(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_148(int iParam0)
{
	if (func_149(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_33;
	}
	return -1;
}

int func_149(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_33 != -1 || (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_150()
{
	if (unk_0xE45310E861787FC2())
	{
		return func_152();
	}
	return func_151(Global_4456448.f_85535);
}

int func_151(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5011[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_152()
{
	return Global_2453009.f_19;
}

bool func_153(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 2;
}

bool func_154(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 7;
}

void func_155(int iParam0)
{
	Global_2554342.f_985 = iParam0;
}

void func_156(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_157(0);
			break;
		
		case 1:
			func_157(1);
			break;
		
		case 2:
			func_157(2);
			break;
		
		case 3:
			func_157(5);
			break;
		
		case 4:
			func_157(7);
			break;
		
		case 5:
			func_157(8);
			break;
		
		case 9:
			func_157(14);
			break;
		
		case 6:
			func_157(9);
			break;
		
		case 7:
			func_157(10);
			break;
		
		case 8:
			func_157(11);
			break;
		
		case 10:
			func_157(15);
			break;
		
		case 11:
			func_157(16);
			break;
		
		case 12:
			func_157(17);
			break;
		
		case 13:
			func_157(18);
			break;
		
		case 14:
			func_157(19);
			break;
		
		case 15:
			func_157(20);
			break;
		
		case 20:
			func_157(22);
			break;
		
		case 21:
			func_157(23);
			break;
		
		case 22:
			func_157(24);
			break;
		
		case 23:
			func_157(25);
			break;
		
		case 24:
			func_157(26);
			break;
		
		case 25:
			func_157(27);
			break;
		
		case 26:
			func_157(28);
			break;
		
		case 27:
			func_157(29);
			break;
		
		case 28:
			func_157(30);
			break;
		
		case 29:
			func_157(43);
			break;
		
		case 30:
			func_157(44);
			break;
		
		case 31:
			func_157(45);
			break;
		
		case 32:
			func_157(46);
			break;
		
		case 33:
			func_157(47);
			break;
		
		case 34:
			func_157(48);
			break;
		
		case 35:
			func_157(49);
			break;
		
		case 36:
			func_157(50);
			break;
		
		case 37:
			func_157(51);
			break;
		
		case 38:
			func_157(52);
			break;
		
		case 16:
			func_157(53);
			break;
		
		case 17:
			func_157(54);
			break;
		
		case 18:
			func_157(55);
			break;
		
		case 19:
			func_157(56);
			break;
		
		case 39:
			func_157(61);
			break;
		
		case 40:
			func_157(65);
			break;
		
		case 41:
			func_157(66);
			break;
		
		case 43:
			func_157(64);
			break;
		
		case 42:
			func_157(63);
			break;
		
		case 44:
			func_157(67);
			break;
		
		case 45:
			func_157(68);
			break;
		
		case 46:
			func_157(69);
			break;
		
		case 47:
			func_157(72);
			break;
		
		case 48:
			func_157(76);
			break;
		
		case 49:
			func_157(74);
			break;
		
		case 50:
			func_157(75);
			break;
		
		case 51:
			func_157(73);
			break;
	}
}

void func_157(int iParam0)
{
	int iVar0;
	
	if (!func_158(iParam0))
	{
		iVar0 = iParam0;
		if (iVar0 > 31)
		{
			if (iVar0 <= 63)
			{
				iVar0 = (iVar0 - 32);
				unk_0x191DDA30577F440A(&(Global_2544210.f_6697), iVar0);
			}
			else if (iVar0 <= 95)
			{
				iVar0 = (iVar0 - 64);
				unk_0x191DDA30577F440A(&(Global_2544210.f_6698), iVar0);
			}
		}
		else
		{
			unk_0x191DDA30577F440A(&(Global_2544210.f_6696), iVar0);
		}
	}
}

bool func_158(var uParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = uParam0;
	uVar1 = Global_2544210.f_6696;
	if (iVar0 > 31)
	{
		if (iVar0 <= 63)
		{
			uVar1 = Global_2544210.f_6697;
			iVar0 = (iVar0 - 32);
		}
		else if (iVar0 <= 95)
		{
			uVar1 = Global_2544210.f_6698;
			iVar0 = (iVar0 - 64);
		}
	}
	return unk_0x234B68AC2E35ED5A(uVar1, iVar0);
}

int func_159(int iParam0, int iParam1, int iParam2, int iParam3)
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
	var uVar26;
	
	if (iParam2 == -1)
	{
		iParam2 = func_94();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xACDC64E5D157EC08((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x5002208C5710DBEB((iParam0 - 0)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xACDC64E5D157EC08((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x5002208C5710DBEB((iParam0 - 192)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xACDC64E5D157EC08((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x5002208C5710DBEB((iParam0 - 513)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xACDC64E5D157EC08((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x5002208C5710DBEB((iParam0 - 705)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x20CEBFA2EEC4CA42((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x5002208C5710DBEB((iParam0 - 3111)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x20CEBFA2EEC4CA42((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x5002208C5710DBEB((iParam0 - 2919)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x783924BA309D8E09((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x5002208C5710DBEB((iParam0 - 4207)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x783924BA309D8E09((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x5002208C5710DBEB((iParam0 - 4335)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x783924BA309D8E09((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x5002208C5710DBEB((iParam0 - 6029)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x783924BA309D8E09((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x5002208C5710DBEB((iParam0 - 7385)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x783924BA309D8E09((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x5002208C5710DBEB((iParam0 - 7321)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x783924BA309D8E09((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x5002208C5710DBEB((iParam0 - 9361)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x783924BA309D8E09((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x5002208C5710DBEB((iParam0 - 15369)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x783924BA309D8E09((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x5002208C5710DBEB((iParam0 - 15562)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x783924BA309D8E09((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x5002208C5710DBEB((iParam0 - 15946)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x783924BA309D8E09((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x5002208C5710DBEB((iParam0 - 18098)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = unk_0x783924BA309D8E09((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x5002208C5710DBEB((iParam0 - 22066)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = unk_0x783924BA309D8E09((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x5002208C5710DBEB((iParam0 - 24962)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		uVar20 = unk_0x783924BA309D8E09((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x5002208C5710DBEB((iParam0 - 26810)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		uVar21 = unk_0x783924BA309D8E09((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x5002208C5710DBEB((iParam0 - 28098)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		uVar22 = unk_0x783924BA309D8E09((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x5002208C5710DBEB((iParam0 - 28355)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		uVar23 = unk_0x783924BA309D8E09((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x5002208C5710DBEB((iParam0 - 30227)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		uVar24 = unk_0x783924BA309D8E09((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x5002208C5710DBEB((iParam0 - 30355)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar24, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		uVar25 = unk_0x783924BA309D8E09((iParam0 - 30515), 0, 1, iParam2, "_HISLANDPSTAT_BOOL");
		iVar1 = ((iParam0 - 30515) - unk_0x5002208C5710DBEB((iParam0 - 30515)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar25, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		uVar26 = unk_0x783924BA309D8E09((iParam0 - 31707), 0, 1, iParam2, "_TUNERPSTAT_BOOL");
		iVar1 = ((iParam0 - 31707) - unk_0x5002208C5710DBEB((iParam0 - 31707)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar26, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_160(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = Global_2594789[iParam0 /*3*/][func_129(iParam2)];
	unk_0x6ACB137CE7852248(uVar0, iParam1, 1);
}

int func_161(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2594789[iParam0 /*3*/][func_129(iParam1)];
	if (unk_0xEB399571DCA129A9(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_162(struct<18> Param0)
{
	switch (Local_164.f_178)
	{
		case 0:
			func_700();
			func_699(1);
			break;
		
		case 1:
			if (func_694(Param0))
			{
				func_699(2);
			}
			break;
		
		case 2:
			if (func_240(Param0))
			{
				func_699(3);
			}
			break;
		
		case 3:
			if (func_228())
			{
				if (Local_164.f_10 <= 0.05f)
				{
					func_699(5);
				}
				else
				{
					func_699(4);
				}
			}
			break;
		
		case 4:
			if (func_222())
			{
				func_699(5);
			}
			break;
		
		case 5:
			if (func_191(Param0))
			{
				func_61(&(Local_164.f_181), 2);
			}
			break;
	}
	func_181();
	func_176();
	func_174(0);
	func_163();
}

void func_163()
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	
	if (!unk_0x234B68AC2E35ED5A(Local_164.f_1, 23))
	{
		return;
	}
	if (!unk_0x234B68AC2E35ED5A(Local_164.f_1, 24))
	{
		unk_0x191DDA30577F440A(&(Local_164.f_1), 24);
		Local_164.f_25.f_17 = { unk_0x0D9118860A976DFD(Local_164.f_25.f_34) };
		Local_164.f_25.f_23 = { unk_0x864557F89941B870(Local_164.f_25.f_34, 2) };
		Local_164.f_25.f_3 = unk_0x004B4DE459D9277C(Local_164.f_25.f_34);
		func_10(&(Local_164.f_25.f_23.f_2));
		fVar0 = ((Local_164.f_10.f_2 / SYSTEM::TO_FLOAT(50)) * SYSTEM::TO_FLOAT(4));
		fVar1 = func_173(SYSTEM::FLOOR(fVar0));
		fVar0 = (fVar0 + fVar1);
		if (fVar0 > (SYSTEM::TO_FLOAT(4) + 0.99f))
		{
			fVar0 = (SYSTEM::TO_FLOAT(4) + 0.99f);
		}
		iVar2 = SYSTEM::FLOOR(fVar0);
		fVar3 = (fVar0 - SYSTEM::TO_FLOAT(iVar2));
		func_170(func_172(iVar2), fVar3, &(Local_164.f_25.f_20), &(Local_164.f_25.f_26), &(Local_164.f_25.f_4), 1);
		Local_164.f_25.f_1 = (func_169(iVar2) + Local_164.f_156.f_1);
		Local_164.f_25.f_33 = unk_0x5FBE5EA201067B5E(unk_0x551F46B3C7DFB654(), Local_164.f_25.f_1);
	}
	if (unk_0x42CE89CF8FB079E5(unk_0x551F46B3C7DFB654(), Local_164.f_25.f_33))
	{
		iVar4 = unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Local_164.f_25.f_33));
		fVar5 = (1f - (SYSTEM::TO_FLOAT(iVar4) / IntToFloat(Local_164.f_25.f_1)));
		func_6(&(Local_164.f_25.f_34), fVar5);
		func_164(&(Local_164.f_25.f_34), Local_164.f_105.f_2, 0, 0);
	}
}

void func_164(var uParam0, float fParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	char* sVar1;
	
	if (!unk_0x0E8572B08CEB6A11(*uParam0))
	{
		return;
	}
	fVar0 = 0.01f;
	sVar1 = "SMALL_EXPLOSION_SHAKE";
	if (bParam3)
	{
		fVar0 = 0.15f;
		sVar1 = "SMALL_EXPLOSION_SHAKE";
		fParam1 = func_168(SYSTEM::TO_FLOAT(Local_164.f_156), 0f, SYSTEM::TO_FLOAT(1100));
	}
	if (bParam2)
	{
		unk_0x9C9EC7CC88D050FA(*uParam0, sVar1, func_167(0f, fVar0, fParam1));
		func_14(&(Local_164.f_25.f_29));
	}
	else if (!func_166(&(Local_164.f_25.f_29)))
	{
		func_16(&(Local_164.f_25.f_29), 0, 0);
		Local_164.f_25 = func_165(116, 916, fParam1);
	}
	else if (func_15(&(Local_164.f_25.f_29), Local_164.f_25, 0))
	{
		func_14(&(Local_164.f_25.f_29));
		unk_0x9C9EC7CC88D050FA(*uParam0, sVar1, func_167(0f, fVar0, fParam1));
	}
}

int func_165(int iParam0, int iParam1, float fParam2)
{
	return SYSTEM::ROUND((((1f - fParam2) * IntToFloat(iParam0)) + (fParam2 * IntToFloat(iParam1))));
}

bool func_166(var uParam0)
{
	return uParam0->f_1;
}

float func_167(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_168(float fParam0, float fParam1, float fParam2)
{
	return ((fParam0 - fParam1) / (fParam2 - fParam1));
}

int func_169(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 2000;
			break;
		
		case 1:
			iVar0 = 2250;
			break;
		
		case 2:
			iVar0 = 2500;
			break;
		
		case 3:
			iVar0 = 2750;
			break;
		
		case 4:
			iVar0 = 3250;
			break;
		
		case 5:
			iVar0 = 3250;
			break;
	}
	return iVar0;
}

void func_170(int iParam0, float fParam1, var uParam2, var uParam3, var uParam4, bool bParam5)
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	float fVar8;
	struct<3> Var9;
	struct<3> Var12;
	int iVar15;
	
	iVar7 = iParam0;
	iVar15 = func_172(iParam0 + 1);
	func_171(iVar7, &Var1, &Var4, &fVar0, bParam5);
	func_171(iVar15, &Var9, &Var12, &fVar8, bParam5);
	*uParam4 = func_7(fVar0, fVar8, fParam1, Local_164.f_25.f_2);
	*uParam2 = { func_9(Var1, Var9, fParam1, Local_164.f_25.f_2) };
	*uParam3 = { func_9(Var4, Var12, fParam1, Local_164.f_25.f_2) };
}

void func_171(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1.6f, -2.18f, 0.88f };
			*uParam2 = { 13.28f, 0f, 40.58f };
			*uParam3 = 50f;
			break;
		
		case 1:
			*uParam1 = { 1.6f, -2.18f, 0.88f };
			*uParam2 = { 15.38f, 0f, 44.08f };
			*uParam3 = 45f;
			break;
		
		case 2:
			*uParam1 = { 1.6f, -2.18f, 1.08f };
			*uParam2 = { 14.4f, 0f, 51.53f };
			*uParam3 = 40f;
			break;
		
		case 3:
			*uParam1 = { 1.6f, -2.18f, 1.08f };
			*uParam2 = { 10.8f, 0f, 51.12f };
			*uParam3 = 38f;
			break;
		
		case 4:
			*uParam1 = { 1.6f, -2.18f, 1.18f };
			*uParam2 = { 7.94f, 5.02f, 48.31f };
			*uParam3 = 35f;
			break;
		
		case 5:
			*uParam1 = { 1.4f, -2f, 1.18f };
			*uParam2 = { 10.8f, 8.32f, 49.92f };
			*uParam3 = 32f;
			break;
	}
	if (bParam4)
	{
		*uParam1 = { unk_0x9E695CE384C77EF0(Local_164, *uParam1) };
		uParam2->f_2 = (uParam2->f_2 + unk_0xA8D713A937F31250(Local_164));
	}
}

int func_172(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
		
		case 3:
			iVar0 = 3;
			break;
		
		case 4:
			iVar0 = 4;
			break;
		
		case 5:
			iVar0 = 5;
			break;
	}
	return iVar0;
}

float func_173(int iParam0)
{
	float fVar0;
	
	fVar0 = 0.4f;
	switch (iParam0)
	{
		case 0:
			fVar0 = 0.4f;
			break;
		
		case 1:
			fVar0 = 0.75f;
			break;
		
		case 2:
			fVar0 = 1f;
			break;
		
		case 3:
			fVar0 = 1.25f;
			break;
		
		case 4:
			fVar0 = 1.5f;
			break;
		
		case 5:
			fVar0 = 1.5f;
			break;
	}
	return fVar0;
}

void func_174(bool bParam0)
{
	if (!Local_164.f_25.f_8)
	{
		return;
	}
	if (bParam0)
	{
		if (!func_166(&(Local_164.f_25.f_31)))
		{
			func_16(&(Local_164.f_25.f_31), 0, 0);
			Local_164.f_25.f_9 = 1;
			if (func_4(unk_0x7D2B9E6A64637269()))
			{
				unk_0x93500360FCCB65F3(unk_0x7D2B9E6A64637269(), 0, 0);
			}
		}
	}
	else if (Local_164.f_25.f_9)
	{
		if (func_175(Local_164.f_25.f_31, 225, 0))
		{
			func_14(&(Local_164.f_25.f_31));
			Local_164.f_25.f_9 = 0;
			if (func_4(unk_0x7D2B9E6A64637269()))
			{
				unk_0x93500360FCCB65F3(unk_0x7D2B9E6A64637269(), 255, 0);
			}
		}
	}
}

int func_175(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!func_166(&uParam0))
	{
		return 0;
	}
	if (iParam2 == -1)
	{
		return 1;
	}
	if (unk_0x02BFF15CAA701972() && !bParam3)
	{
		if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), uParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0xDFB7BFA6482FEE1E(), uParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

void func_176()
{
	func_180();
	func_179();
	func_177();
	unk_0xD6003E90FFFD0FC5(0);
	unk_0x2EA77AAC984722FF();
}

void func_177()
{
	if (func_178())
	{
		if (unk_0x2322DD4FBF5E4E2F())
		{
			unk_0x203739B163D4D88E(2, 201);
		}
		else
		{
			unk_0x203739B163D4D88E(2, 202);
		}
	}
	else
	{
		unk_0x203739B163D4D88E(2, 201);
	}
}

int func_178()
{
	return 0;
}

void func_179()
{
	Global_22531.f_6 = 1;
}

void func_180()
{
	Global_2544210.f_4598 = 0;
}

void func_181()
{
	if (!Local_164.f_10.f_4)
	{
		return;
	}
	if (Local_164.f_10.f_5 && !unk_0xA300BD5F71A8C704())
	{
		if (func_190())
		{
			func_189();
			Local_164.f_10.f_2 = (Local_164.f_10.f_2 + 2.3f);
			if (Local_164.f_10.f_2 >= SYSTEM::TO_FLOAT(50))
			{
				Local_164.f_10.f_2 = SYSTEM::TO_FLOAT(50);
			}
			unk_0xC664C0067EEAB8D1(&(Local_164.f_1), 1);
			unk_0xC664C0067EEAB8D1(&(Local_164.f_1), 0);
			func_164(&(Local_164.f_25.f_34), Local_164.f_105.f_2, 1, 0);
			func_84("Button_Mash_Hit", &(Local_164.f_20), 1);
		}
		else
		{
			func_184();
			func_164(&(Local_164.f_25.f_34), Local_164.f_105.f_2, 0, 0);
		}
	}
	Local_164.f_10 = func_168(Local_164.f_10.f_2, 0f, SYSTEM::TO_FLOAT(50));
	func_183(Local_164.f_10);
	func_182(Local_164.f_10.f_4);
}

void func_182(bool bParam0)
{
	if (bParam0)
	{
		unk_0x0F33095580A670CE(4);
		unk_0x51D19921B47902B3(1);
		unk_0x44EF5678D6916481(Local_164.f_10.f_9, 255, 255, 255, 255, 0);
		unk_0x27DA7E2B98AB7899(unk_0xA05F91D121569413());
	}
}

void func_183(float fParam0)
{
	unk_0x704F8697BB515627(Local_164.f_10.f_9, "SET_METER_FILL_VALUE");
	unk_0x82D42F43BE26EB72(uParam0);
	unk_0x392841D58D2EED1D();
}

void func_184()
{
	func_188(Local_164.f_10.f_2);
	if (func_185(SYSTEM::ROUND(func_187()), Local_164.f_10.f_3, 1))
	{
		unk_0xC664C0067EEAB8D1(&(Local_164.f_1), 1);
		Local_164.f_10.f_2 = 0f;
	}
}

int func_185(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	
	func_186(iParam0);
	if (unk_0x42CE89CF8FB079E5(unk_0x551F46B3C7DFB654(), Local_164.f_10.f_8))
	{
		iVar0 = unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Local_164.f_10.f_8));
		fVar1 = ((SYSTEM::TO_FLOAT(iVar0) / IntToFloat(iParam0)) * fParam1);
		if (fParam1 < Local_164.f_10.f_2)
		{
			fVar1 = (fParam1 - ((SYSTEM::TO_FLOAT(iVar0) / IntToFloat(iParam0)) * fParam1));
		}
		Local_164.f_10.f_2 = fVar1;
	}
	else
	{
		if (bParam2)
		{
			Local_164.f_10.f_2 = fParam1;
		}
		unk_0xC664C0067EEAB8D1(&(Local_164.f_1), 0);
		return 1;
	}
	return 0;
}

void func_186(int iParam0)
{
	if (!unk_0x234B68AC2E35ED5A(Local_164.f_1, 0))
	{
		unk_0x191DDA30577F440A(&(Local_164.f_1), 0);
		Local_164.f_10.f_8 = unk_0x5FBE5EA201067B5E(unk_0x551F46B3C7DFB654(), uParam0);
	}
}

float func_187()
{
	float fVar0;
	
	fVar0 = ((Local_164.f_10.f_3 / SYSTEM::TO_FLOAT(50)) * 100f);
	return ((SYSTEM::TO_FLOAT(5000) / 100f) * fVar0);
}

void func_188(var uParam0)
{
	if (!unk_0x234B68AC2E35ED5A(Local_164.f_1, 1))
	{
		unk_0x191DDA30577F440A(&(Local_164.f_1), 1);
		Local_164.f_10.f_3 = uParam0;
	}
}

void func_189()
{
	unk_0x704F8697BB515627(Local_164.f_10.f_9, "FLASH_BUTTON");
	unk_0x392841D58D2EED1D();
}

int func_190()
{
	if (func_178())
	{
		if (unk_0x2322DD4FBF5E4E2F())
		{
			return unk_0x86AF801D34E482FF(2, 201);
		}
		else
		{
			return unk_0x86AF801D34E482FF(2, 202);
		}
	}
	else
	{
		return unk_0x86AF801D34E482FF(2, 201);
	}
	return 0;
}

int func_191(struct<18> Param0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<16> Var6;
	
	if (!unk_0x234B68AC2E35ED5A(Local_164.f_1, 29))
	{
		if (func_15(&(Local_164.f_10.f_6), 250, 0))
		{
			func_14(&(Local_164.f_10.f_6));
			unk_0x191DDA30577F440A(&(Local_164.f_1), 29);
		}
		return 0;
	}
	if (!unk_0x234B68AC2E35ED5A(Local_164.f_1, 31))
	{
		fVar0 = (1100f - func_221(1100f, 0f, 100f, 0f, Local_164.f_156.f_2));
		unk_0xC664C0067EEAB8D1(&(Local_164.f_1), 23);
		unk_0xC664C0067EEAB8D1(&(Local_164.f_1), 24);
		Local_164.f_156 = SYSTEM::ROUND(fVar0);
		if (unk_0x32E225D6BB070AFA(unk_0x7D2B9E6A64637269()))
		{
			if (unk_0x9AC63BDB9DDAB5FD(unk_0x7D2B9E6A64637269()))
			{
				unk_0x9D6719338AAFFE00(unk_0x7D2B9E6A64637269(), func_220(Local_164.f_156));
				func_67(&(Local_164.f_20.f_2));
				Local_164.f_25.f_17 = { unk_0x0D9118860A976DFD(Local_164.f_25.f_34) };
				Local_164.f_25.f_23 = { unk_0x864557F89941B870(Local_164.f_25.f_34, 2) };
				Local_164.f_25.f_3 = unk_0x004B4DE459D9277C(Local_164.f_25.f_34);
				func_10(&(Local_164.f_25.f_23.f_2));
				func_171(0, &(Local_164.f_25.f_20), &(Local_164.f_25.f_26), &(Local_164.f_25.f_4), 1);
				Local_164.f_105 = unk_0xDFB7BFA6482FEE1E();
				Local_164.f_105.f_1 = SYSTEM::FLOOR((unk_0x57213F964A9AED0A(func_219(), func_218(Local_164.f_156)) * 1000f));
				Local_164.f_105.f_36 = func_217(Local_164.f_156);
				func_215(Local_164.f_105.f_36);
				unk_0x191DDA30577F440A(&(Local_164.f_1), 31);
				func_214();
			}
		}
	}
	if (func_213(0.99f))
	{
		func_212(1);
		unk_0xC664C0067EEAB8D1(&(Local_164.f_1), 20);
		unk_0xC664C0067EEAB8D1(&(Local_164.f_1), 26);
		unk_0xC664C0067EEAB8D1(&(Local_164.f_1), 29);
		unk_0xC664C0067EEAB8D1(&(Local_164.f_1), 31);
		unk_0xC664C0067EEAB8D1(&(Local_164.f_2), 7);
		func_211();
		return 1;
	}
	else if (func_213(func_210(Local_164.f_105.f_36)))
	{
		func_55(Param0);
		if (!unk_0x234B68AC2E35ED5A(Local_164.f_2, 7))
		{
			unk_0x191DDA30577F440A(&(Local_164.f_2), 7);
			if (Local_164.f_25.f_8)
			{
				func_3(1);
			}
			else
			{
				unk_0xDF23DCD7A3E1B7A5(0f);
				unk_0x3A13FD2813C8251F(-10f, 1065353216);
				func_209(&(Local_164.f_25.f_34), 0);
				unk_0x09F9466B03D29D2D(0, 1, 2000, 1, 0, 0);
			}
		}
	}
	else if (func_213((func_208(Local_164.f_105.f_36) + 0.02f)))
	{
		if (!unk_0x234B68AC2E35ED5A(Local_164.f_1, 9))
		{
			unk_0x191DDA30577F440A(&(Local_164.f_1), 9);
			func_84(func_207(Local_164.f_156), &(Local_164.f_20), 1);
			func_206();
		}
	}
	else if (func_213(func_208(Local_164.f_105.f_36)))
	{
		if (!unk_0x234B68AC2E35ED5A(Local_164.f_1, 2))
		{
			unk_0x191DDA30577F440A(&(Local_164.f_1), 2);
			func_203(Local_164.f_156, func_205(Local_164.f_105.f_36), func_204(), func_205(Local_164.f_105.f_36));
			func_16(&(Local_164.f_165.f_5), 0, 0);
			func_84(func_202(Local_164.f_156), &(Local_164.f_20), 1);
			func_164(&(Local_164.f_25.f_34), Local_164.f_105.f_2, 1, 1);
			fVar1 = func_221(150f, 0f, SYSTEM::TO_FLOAT(1100), 0f, SYSTEM::TO_FLOAT(Local_164.f_156));
			fVar2 = func_221(400f, 250f, SYSTEM::TO_FLOAT(1100), 0f, SYSTEM::TO_FLOAT(Local_164.f_156));
			unk_0x8543AEC08F877EE9(0, (SYSTEM::ROUND(400f) - SYSTEM::ROUND(fVar2)), (SYSTEM::ROUND(150f) - SYSTEM::ROUND(fVar1)));
		}
	}
	else if (func_213((func_208(Local_164.f_105.f_36) - 0.11f)))
	{
		if (Local_164.f_10 > 0.05f)
		{
			fVar3 = (func_208(Local_164.f_105.f_36) - 0.11f);
			fVar4 = (func_208(Local_164.f_105.f_36) - 0.001f);
			fVar5 = func_168(func_201(), fVar3, fVar4);
			func_6(&(Local_164.f_25.f_34), fVar5);
		}
	}
	if (func_175(Local_164.f_165.f_5, 1100, 0))
	{
		func_14(&(Local_164.f_165.f_5));
		if (Local_164.f_156 > Local_164.f_165 || Local_164.f_156 == 1100)
		{
			if (!unk_0x234B68AC2E35ED5A(Local_164.f_1, 26))
			{
				if (Local_164.f_165.f_9 != unk_0xC3F1DAC7D0C05D0F("AM_MP_ARCADE", Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_7, 0))
				{
					Local_164.f_165.f_4 = 1;
				}
				func_200(Local_164.f_156);
				unk_0x191DDA30577F440A(&(Local_164.f_1), 26);
			}
		}
		Var6 = { func_199(Local_164.f_156) };
		if (Local_164.f_156 == 1100)
		{
			StringCopy(&Var6, "STRENGTH_RING_BELL", 64);
		}
		func_192(Var6, 1);
	}
	return 0;
}

void func_192(char[64] cParam0, bool bParam16)
{
	Local_164.f_60 = func_198(unk_0x1146A9AE09CE2B14());
	if (Local_164.f_60 == -1 && Local_164.f_60.f_1 != -1)
	{
		Local_164.f_60 = Local_164.f_60.f_1;
	}
	Local_164.f_60.f_6.f_36 = 14;
	Local_164.f_60.f_6.f_35 = Local_164.f_60;
	Local_164.f_60.f_6 = { cParam0 };
	Local_164.f_60.f_6.f_33 = 0;
	Local_164.f_60.f_6.f_34 = 3;
	func_193(&(Local_164.f_60.f_6), bParam16);
}

void func_193(var uParam0, bool bParam1)
{
	struct<39> Var0;
	bool bVar39;
	int iVar40;
	
	Var0 = 1210822955;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = { *uParam0 };
	Var0.f_34 = uParam0->f_34;
	Var0.f_37 = bParam1;
	Var0.f_35 = uParam0->f_35;
	Var0.f_36 = uParam0->f_36;
	Var0.f_38 = uParam0->f_33;
	if (!func_166(&(uParam0->f_37)))
	{
		func_16(&(uParam0->f_37), 0, 0);
	}
	bVar39 = true;
	if (unk_0xDA654EB115F9FF7D(&(uParam0->f_16), &(Var0.f_2)))
	{
		if (func_166(&(uParam0->f_37)) && !func_15(&(uParam0->f_37), 1000, 0))
		{
			bVar39 = false;
		}
		else
		{
			func_14(&(uParam0->f_37));
		}
	}
	else
	{
		uParam0->f_16 = { Var0.f_2 };
		func_14(&(uParam0->f_37));
	}
	uParam0->f_32 = 0;
	if (bVar39)
	{
		iVar40 = func_197(unk_0x1146A9AE09CE2B14());
		if (bParam1)
		{
			iVar40 = func_194(1, 1);
		}
		if (iVar40 != 0)
		{
			uParam0->f_32 = 1;
			unk_0xA5C82A39FF8ED272(1, &Var0, 39, iVar40);
		}
	}
}

var func_194(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xC502CD39B4994F3A(iVar1);
		if (func_45(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x1146A9AE09CE2B14() || iParam0)
			{
				if (bParam1)
				{
					unk_0x191DDA30577F440A(&uVar0, iVar1);
				}
				else if (!func_195(iVar2, 0))
				{
					unk_0x191DDA30577F440A(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_195(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		bVar0 = func_196(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590908[iParam0 /*874*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x8CFC2F41A749E236(iParam0))
		{
			bVar0 = unk_0x7C3E030BC3ED6671(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_196(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_94();
	}
	if (Global_1312882[iVar1] == 1)
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

var func_197(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0x191DDA30577F440A(&uVar0, iParam0);
	}
	return uVar0;
}

int func_198(int iParam0)
{
	if (iParam0 != func_50())
	{
		return Global_2426865[iParam0 /*449*/].f_429.f_1;
	}
	return -1;
}

struct<16> func_199(int iParam0)
{
	struct<16> Var0;
	
	if (iParam0 >= 1000 && iParam0 <= 1100)
	{
		StringCopy(&Var0, "STRENGTH_SCORE_1000_1100", 64);
	}
	else if (iParam0 >= 700 && iParam0 <= 999)
	{
		StringCopy(&Var0, "STRENGTH_SCORE_700_999", 64);
	}
	else if (iParam0 >= 500 && iParam0 <= 699)
	{
		StringCopy(&Var0, "STRENGTH_SCORE_500_699", 64);
	}
	else if (iParam0 >= 300 && iParam0 <= 499)
	{
		StringCopy(&Var0, "STRENGTH_SCORE_300_499", 64);
	}
	else if (iParam0 >= 100 && iParam0 <= 299)
	{
		StringCopy(&Var0, "STRENGTH_SCORE_100_299", 64);
	}
	else if (iParam0 >= 1 && iParam0 <= 99)
	{
		StringCopy(&Var0, "STRENGTH_SCORE_0_99", 64);
	}
	else if (iParam0 == 0)
	{
		StringCopy(&Var0, "STRENGTH_SCORE_0", 64);
	}
	return Var0;
}

void func_200(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_44(1);
	if (iVar0 == 0)
	{
		return;
	}
	Var1.x = 1547610320;
	Var1.f_1 = unk_0x1146A9AE09CE2B14();
	Var1.f_2 = uParam0;
	unk_0xA5C82A39FF8ED272(1, &Var1, 3, iVar0);
}

float func_201()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = (unk_0xDFB7BFA6482FEE1E() - Local_164.f_105);
	iVar1 = (Local_164.f_105.f_1 - iVar0);
	fVar2 = ((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(Local_164.f_105.f_1)) * 100f);
	fVar3 = (100f - fVar2);
	return (fVar3 / 100f);
}

char* func_202(int iParam0)
{
	int iVar0;
	char* sVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = 0;
	sVar1 = "";
	fVar2 = SYSTEM::TO_FLOAT(iParam0);
	fVar3 = (SYSTEM::TO_FLOAT(1100) / SYSTEM::TO_FLOAT(3));
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (fVar2 > (fVar3 * SYSTEM::TO_FLOAT(iVar0)) && fVar2 <= (fVar3 * SYSTEM::TO_FLOAT(iVar0 + 1)))
		{
		}
		else
		{
			iVar0++;
		}
	}
	if (iParam0 == 0)
	{
		iVar0 = 0;
	}
	switch (iVar0)
	{
		case 0:
			sVar1 = "Hit_00";
			break;
		
		case 1:
			sVar1 = "Hit_01";
			break;
		
		case 2:
			sVar1 = "Hit_02";
			break;
	}
	return sVar1;
}

void func_203(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = func_44(1);
	if (iVar0 == 0)
	{
		return;
	}
	Var1 = -695499408;
	Var1.f_1 = unk_0x1146A9AE09CE2B14();
	Var1.f_2 = uParam0;
	Var1.f_3 = uParam2;
	Var1.f_4 = uParam1;
	Var1.f_5 = uParam3;
	unk_0xA5C82A39FF8ED272(1, &Var1, 6, iVar0);
}

float func_204()
{
	if (Local_164.f_156 > Local_164.f_165 || Local_164.f_156 == 1100)
	{
		return 3.35f;
	}
	return 2f;
}

float func_205(int iParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	switch (iParam0)
	{
		case 77:
			fVar0 = 0.5f;
			break;
		
		case 76:
			fVar0 = 0.7f;
			break;
		
		case 75:
			fVar0 = 0.9f;
			break;
		
		case 74:
			fVar0 = 1.1f;
			break;
	}
	return fVar0;
}

void func_206()
{
	unk_0x704F8697BB515627(Local_164.f_10.f_9, "HIDE");
	unk_0x392841D58D2EED1D();
}

char* func_207(int iParam0)
{
	int iVar0;
	char* sVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = 0;
	sVar1 = "";
	fVar2 = SYSTEM::TO_FLOAT(iParam0);
	fVar3 = (SYSTEM::TO_FLOAT(1100) / SYSTEM::TO_FLOAT(5));
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (fVar2 >= (fVar3 * SYSTEM::TO_FLOAT(iVar0)) && fVar2 < (fVar3 * SYSTEM::TO_FLOAT(iVar0 + 1)))
		{
		}
		else
		{
			iVar0++;
		}
	}
	if (iParam0 == 1100)
	{
		iVar0 = 5;
	}
	switch (iVar0)
	{
		case 0:
			sVar1 = "Result_00";
			break;
		
		case 1:
			sVar1 = "Result_01";
			break;
		
		case 2:
			sVar1 = "Result_02";
			break;
		
		case 3:
			sVar1 = "Result_03";
			break;
		
		case 4:
			sVar1 = "Result_04";
			break;
		
		case 5:
			sVar1 = "Result_05";
			break;
	}
	return sVar1;
}

float func_208(int iParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	switch (iParam0)
	{
		case 77:
			fVar0 = 0.233f;
			break;
		
		case 76:
			fVar0 = 0.225f;
			break;
		
		case 75:
			fVar0 = 0.178f;
			break;
		
		case 74:
			fVar0 = 0.187f;
			break;
	}
	return fVar0;
}

void func_209(var uParam0, int iParam1)
{
	if (unk_0x0E8572B08CEB6A11(*uParam0))
	{
		unk_0x6FA8221C9D2ECB46(*uParam0, iParam1);
	}
}

float func_210(int iParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	switch (iParam0)
	{
		case 77:
			fVar0 = 0.683f;
			break;
		
		case 76:
			fVar0 = 0.701f;
			break;
		
		case 75:
			fVar0 = 0.775f;
			break;
		
		case 74:
			fVar0 = 0.681f;
			break;
	}
	return fVar0;
}

void func_211()
{
	if (func_4(unk_0x7D2B9E6A64637269()))
	{
		unk_0xA2C015B68CE01357(unk_0x7D2B9E6A64637269(), false);
		unk_0x9FF2677053B4F2A9(unk_0x7D2B9E6A64637269(), 0);
	}
	if (unk_0x32E225D6BB070AFA(unk_0x7D2B9E6A64637269()))
	{
		unk_0xFA03406E21D86D40(unk_0x7D2B9E6A64637269(), 0);
	}
}

void func_212(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_429, 3))
		{
			unk_0x191DDA30577F440A(&(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_429), 3);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_429, 3))
	{
		unk_0xC664C0067EEAB8D1(&(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_429), 3);
	}
}

bool func_213(float fParam0)
{
	return func_201() >= fParam0;
}

void func_214()
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = func_44(1);
	if (iVar0 == 0)
	{
		return;
	}
	Var1 = 1631858659;
	Var1.f_1 = unk_0x1146A9AE09CE2B14();
	unk_0xA5C82A39FF8ED272(1, &Var1, 2, iVar0);
}

void func_215(int iParam0)
{
	char* sVar0;
	
	sVar0 = func_216(iParam0);
	if (!unk_0xAB6A270F84A8781E(sVar0))
	{
		if (!unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), &(Global_1710057.f_47), sVar0, 3))
		{
			unk_0x4063423DD6B86995(unk_0x7D2B9E6A64637269(), sVar0, &(Global_1710057.f_47));
		}
	}
}

char* func_216(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "ENTER_FACIAL";
			break;
		
		case 11:
			sVar0 = "EXIT_FACIAL";
			break;
		
		case 70:
			sVar0 = "STAGE_1_LOOP_FACIAL";
			break;
		
		case 71:
			sVar0 = "STAGE_2_LOOP_FACIAL";
			break;
		
		case 72:
			sVar0 = "STAGE_3_LOOP_FACIAL";
			break;
		
		case 73:
			sVar0 = "STAGE_4_LOOP_FACIAL";
			break;
		
		case 74:
			sVar0 = "RESULT_BAD_FACIAL";
			break;
		
		case 75:
			sVar0 = "RESULT_AVERAGE_FACIAL";
			break;
		
		case 76:
			sVar0 = "RESULT_GOOD_FACIAL";
			break;
		
		case 77:
			sVar0 = "RESULT_PERFECT_FACIAL";
			break;
	}
	return sVar0;
}

int func_217(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 > 825)
	{
		iVar0 = 77;
	}
	else if (iParam0 > 550 && iParam0 <= 825)
	{
		iVar0 = 76;
	}
	else if (iParam0 > 275 && iParam0 <= 550)
	{
		iVar0 = 75;
	}
	else if (iParam0 <= 275)
	{
		iVar0 = 74;
	}
	return iVar0;
}

char* func_218(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	if (iParam0 > 825)
	{
		sVar0 = "RESULT_PERFECT";
	}
	else if (iParam0 > 550 && iParam0 <= 825)
	{
		sVar0 = "RESULT_GOOD";
	}
	else if (iParam0 > 275 && iParam0 <= 550)
	{
		sVar0 = "RESULT_AVERAGE";
	}
	else if (iParam0 <= 275)
	{
		sVar0 = "RESULT_BAD";
	}
	return sVar0;
}

char* func_219()
{
	char* sVar0;
	
	sVar0 = "ANIM_HEIST@ARCADE@STRENGTH@MALE@";
	if (func_79() && func_71(unk_0x7D2B9E6A64637269()))
	{
		sVar0 = "ANIM_HEIST@ARCADE@STRENGTH@FEMALE@";
	}
	return sVar0;
}

char* func_220(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	if (iParam0 > 825)
	{
		sVar0 = "PerfectResult";
	}
	else if (iParam0 > 550 && iParam0 <= 825)
	{
		sVar0 = "GoodResult";
	}
	else if (iParam0 > 275 && iParam0 <= 550)
	{
		sVar0 = "AverageResult";
	}
	else if (iParam0 <= 275)
	{
		sVar0 = "BadResult";
	}
	return sVar0;
}

float func_221(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	return (((fParam0 - fParam1) * (fParam2 - fParam4)) / (fParam2 - fParam3));
}

int func_222()
{
	if (!unk_0x234B68AC2E35ED5A(Local_164.f_1, 28))
	{
		unk_0x191DDA30577F440A(&(Local_164.f_1), 28);
		func_67(&(Local_164.f_20.f_2));
	}
	if (func_15(&(Local_164.f_156.f_5), Local_164.f_156.f_1, 0))
	{
		if (!unk_0x234B68AC2E35ED5A(Local_164.f_1, 22))
		{
			unk_0x191DDA30577F440A(&(Local_164.f_1), 22);
			func_84("Bar_Drop", &(Local_164.f_20.f_3), 1);
		}
		if (func_190() || func_225(func_227()))
		{
			unk_0xC664C0067EEAB8D1(&(Local_164.f_1), 1);
			unk_0xC664C0067EEAB8D1(&(Local_164.f_1), 0);
			unk_0xC664C0067EEAB8D1(&(Local_164.f_1), 22);
			unk_0xC664C0067EEAB8D1(&(Local_164.f_1), 28);
			func_14(&(Local_164.f_156.f_5));
			if (func_65("ARC_CAB_AOF_MLTPLR") || func_65("ARC_CAB_AOF_MLTPLR_ALT"))
			{
				unk_0x66AE54CE92457FEE(1);
			}
			if (Local_164.f_10.f_1 != 0f)
			{
				func_224();
				Local_164.f_156.f_2 = (Local_164.f_156.f_2 * func_223(Local_164.f_10, Local_164.f_10.f_1));
			}
			return 1;
		}
	}
	return 0;
}

float func_223(float fParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar0 = func_221(0.3f, 0f, 0f, 1f, fParam0);
	fVar1 = func_221(0.55f, 0f, 0f, 1f, fParam0);
	fVar2 = func_221(0.551f, 0f, 0f, 1f, fParam0);
	fVar3 = func_221(0.85f, 0f, 0f, 1f, fParam0);
	fVar4 = func_221(0.15f, 0f, 0f, 1f, fParam0);
	fVar5 = func_221(0.299f, 0f, 0f, 1f, fParam0);
	if (fParam1 >= fVar0 && fParam1 <= fVar1)
	{
		return 2f;
	}
	else if (fParam1 >= fVar2 && fParam1 <= fVar3)
	{
		return (func_221(1f, 0f, fVar3, fVar2, fParam1) + 1f);
	}
	else if (fParam1 >= fVar4 && fParam1 <= fVar5)
	{
		return (func_221(0f, 1f, fVar5, fVar4, fParam1) + 1f);
	}
	return 1f;
}

void func_224()
{
	unk_0x704F8697BB515627(Local_164.f_10.f_9, "FLASH_METER");
	unk_0x392841D58D2EED1D();
}

int func_225(int iParam0)
{
	int iVar0;
	
	func_186(iParam0);
	if (unk_0x42CE89CF8FB079E5(unk_0x551F46B3C7DFB654(), Local_164.f_10.f_8))
	{
		iVar0 = unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Local_164.f_10.f_8));
		Local_164.f_10.f_1 = (SYSTEM::TO_FLOAT(iVar0) / IntToFloat(iParam0));
		func_226(Local_164.f_10.f_1);
	}
	else
	{
		Local_164.f_10.f_1 = 0f;
		func_226(Local_164.f_10.f_1);
		unk_0xC664C0067EEAB8D1(&(Local_164.f_1), 0);
		return 1;
	}
	return 0;
}

void func_226(float fParam0)
{
	unk_0x704F8697BB515627(Local_164.f_10.f_9, "SET_METER_BAR_VALUE");
	unk_0x82D42F43BE26EB72(uParam0);
	unk_0x392841D58D2EED1D();
}

int func_227()
{
	return SYSTEM::ROUND(func_221(SYSTEM::TO_FLOAT(900), SYSTEM::TO_FLOAT(500), SYSTEM::TO_FLOAT(50), 0f, Local_164.f_10.f_2)) + 500;
}

int func_228()
{
	float fVar0;
	struct<16> Var1;
	
	fVar0 = (Local_164.f_10.f_2 / SYSTEM::TO_FLOAT(50));
	if (fVar0 <= 0f)
	{
		fVar0 = 0.01f;
	}
	if (!unk_0x234B68AC2E35ED5A(Local_164.f_1, 21))
	{
		unk_0x191DDA30577F440A(&(Local_164.f_1), 21);
		func_84("Start_Mashing", &(Local_164.f_20.f_3), 1);
	}
	func_239(fVar0);
	func_238(Local_164.f_105.f_2, fVar0);
	func_237(fVar0);
	if (Local_164.f_10.f_2 == SYSTEM::TO_FLOAT(50))
	{
		if (!unk_0x234B68AC2E35ED5A(Local_164.f_1, 3))
		{
			unk_0x191DDA30577F440A(&(Local_164.f_1), 3);
		}
	}
	if (!unk_0x234B68AC2E35ED5A(Local_164.f_1, 7))
	{
		unk_0x191DDA30577F440A(&(Local_164.f_1), 7);
		func_84("Power_Level_Loop", &(Local_164.f_20.f_2), 1);
	}
	else
	{
		func_236("Power_Level", Local_164.f_20.f_2, fVar0);
	}
	func_233(&(Local_164.f_20.f_1));
	if (func_15(&(Local_164.f_156.f_5), 5000, 0))
	{
		func_82(0);
		if (func_65("ARC_CAB_AOF_POW") || func_65("ARC_CAB_AOF_POW_ALT"))
		{
			unk_0x66AE54CE92457FEE(1);
		}
		if (func_178())
		{
			if (unk_0x2322DD4FBF5E4E2F())
			{
				if (!func_65("ARC_CAB_AOF_MLTPLR") && Local_164.f_10 > 0.05f)
				{
					func_232(1);
					func_231("ARC_CAB_AOF_MLTPLR");
				}
			}
			else if (!func_65("ARC_CAB_AOF_MLTPLR_ALT") && Local_164.f_10 > 0.05f)
			{
				func_232(1);
				func_231("ARC_CAB_AOF_MLTPLR_ALT");
			}
		}
		else if (!func_65("ARC_CAB_AOF_MLTPLR") && Local_164.f_10 > 0.05f)
		{
			func_232(1);
			func_231("ARC_CAB_AOF_MLTPLR");
		}
		if (!unk_0x234B68AC2E35ED5A(Local_164.f_1, 27))
		{
			unk_0x191DDA30577F440A(&(Local_164.f_1), 27);
			func_230(0);
		}
		if (!unk_0x234B68AC2E35ED5A(Local_164.f_1, 4))
		{
			unk_0x191DDA30577F440A(&(Local_164.f_1), 4);
			if (Local_164.f_10.f_2 > SYSTEM::TO_FLOAT((50 - SYSTEM::FLOOR(2.3f))) && unk_0x234B68AC2E35ED5A(Local_164.f_1, 3))
			{
				Local_164.f_10.f_2 = SYSTEM::TO_FLOAT(50);
			}
		}
		if (!unk_0x234B68AC2E35ED5A(Local_164.f_1, 18))
		{
			unk_0x191DDA30577F440A(&(Local_164.f_1), 18);
			func_16(&(Local_164.f_156.f_7), 0, 0);
		}
		if (Local_164.f_10 > 0.05f && !unk_0x234B68AC2E35ED5A(Local_164.f_1, 23))
		{
			unk_0x191DDA30577F440A(&(Local_164.f_1), 23);
		}
		if (func_229(Local_164.f_105.f_2, (fVar0 - 0.08f), (fVar0 + 0.08f)) || func_175(Local_164.f_156.f_7, 5000, 0))
		{
			func_14(&(Local_164.f_156.f_5));
			func_14(&(Local_164.f_156.f_7));
			unk_0xC664C0067EEAB8D1(&(Local_164.f_1), 18);
			unk_0xC664C0067EEAB8D1(&(Local_164.f_1), 1);
			unk_0xC664C0067EEAB8D1(&(Local_164.f_1), 0);
			Local_164.f_156.f_2 = Local_164.f_10.f_2;
			unk_0xC664C0067EEAB8D1(&(Local_164.f_1), 21);
			unk_0xC664C0067EEAB8D1(&(Local_164.f_1), 3);
			unk_0xC664C0067EEAB8D1(&(Local_164.f_1), 4);
			unk_0xC664C0067EEAB8D1(&(Local_164.f_1), 27);
			return 1;
		}
	}
	else if (func_15(&(Local_164.f_156.f_5), 1500, 0))
	{
		if (!unk_0x234B68AC2E35ED5A(Local_164.f_1, 6))
		{
			unk_0x191DDA30577F440A(&(Local_164.f_1), 6);
			StringCopy(&Var1, "STRENGTH_HYPE", 64);
			func_192(Var1, 1);
		}
	}
	return 0;
}

bool func_229(float fParam0, float fParam1, float fParam2)
{
	return (fParam0 >= fParam1 && fParam0 < fParam2);
}

void func_230(int iParam0)
{
	unk_0x704F8697BB515627(Local_164.f_10.f_9, "SET_BUTTON_VISIBLE");
	unk_0x9D7453DF8B7E9E0B(iParam0);
	unk_0x392841D58D2EED1D();
}

void func_231(char* sParam0)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 1, 1, -1);
}

void func_232(int iParam0)
{
	unk_0x704F8697BB515627(Local_164.f_10.f_9, "SET_METER_BAR_ICON_VISIBLE");
	unk_0x9D7453DF8B7E9E0B(iParam0);
	unk_0x392841D58D2EED1D();
}

void func_233(var uParam0)
{
	float fVar0;
	
	fVar0 = (SYSTEM::TO_FLOAT(50) / 9f);
	if (Local_164.f_10.f_2 >= (fVar0 * IntToFloat(Local_164.f_20.f_4 + 1)) && !unk_0x234B68AC2E35ED5A(Local_164.f_1, func_235(Local_164.f_20.f_4)))
	{
		func_84(func_234(Local_164.f_20.f_4), uParam0, 1);
		unk_0x191DDA30577F440A(&(Local_164.f_1), func_235(Local_164.f_20.f_4));
		Local_164.f_20.f_4++;
		if (Local_164.f_20.f_4 > (SYSTEM::ROUND(9f) - 1))
		{
			Local_164.f_20.f_4 = (SYSTEM::ROUND(9f) - 1);
		}
	}
	else if (Local_164.f_10.f_2 < (fVar0 * IntToFloat(Local_164.f_20.f_4)) && unk_0x234B68AC2E35ED5A(Local_164.f_1, func_235((Local_164.f_20.f_4 - 1))))
	{
		Local_164.f_20.f_4 = (Local_164.f_20.f_4 - 1);
		if (Local_164.f_20.f_4 < 0)
		{
			Local_164.f_20.f_4 = 0;
		}
		func_84(func_234(Local_164.f_20.f_4), uParam0, 1);
		unk_0xC664C0067EEAB8D1(&(Local_164.f_1), func_235(Local_164.f_20.f_4));
	}
}

char* func_234(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "Stage_00";
			break;
		
		case 1:
			sVar0 = "Stage_01";
			break;
		
		case 2:
			sVar0 = "Stage_02";
			break;
		
		case 3:
			sVar0 = "Stage_03";
			break;
		
		case 4:
			sVar0 = "Stage_04";
			break;
		
		case 5:
			sVar0 = "Stage_05";
			break;
		
		case 6:
			sVar0 = "Stage_06";
			break;
		
		case 7:
			sVar0 = "Stage_07";
			break;
	}
	return sVar0;
}

int func_235(int iParam0)
{
	int iVar0;
	
	iVar0 = 10;
	switch (iParam0)
	{
		case 0:
			iVar0 = 10;
			break;
		
		case 1:
			iVar0 = 11;
			break;
		
		case 2:
			iVar0 = 12;
			break;
		
		case 3:
			iVar0 = 13;
			break;
		
		case 4:
			iVar0 = 14;
			break;
		
		case 5:
			iVar0 = 15;
			break;
		
		case 6:
			iVar0 = 16;
			break;
		
		case 7:
			iVar0 = 17;
			break;
	}
	return iVar0;
}

void func_236(char* sParam0, var uParam1, float fParam2)
{
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return;
	}
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	else if (fParam2 > 1f)
	{
		fParam2 = 1f;
	}
	unk_0xB76EE71E771BDAA1(uParam1, sParam0, fParam2);
}

void func_237(float fParam0)
{
	if (fParam0 >= 0.75f)
	{
		if (!unk_0x234B68AC2E35ED5A(Local_164.f_2, 5))
		{
			unk_0x191DDA30577F440A(&(Local_164.f_2), 5);
			unk_0xC664C0067EEAB8D1(&(Local_164.f_2), 2);
			unk_0xC664C0067EEAB8D1(&(Local_164.f_2), 3);
			unk_0xC664C0067EEAB8D1(&(Local_164.f_2), 4);
			func_215(73);
		}
	}
	else if (fParam0 >= 0.5f && fParam0 < 0.75f)
	{
		if (!unk_0x234B68AC2E35ED5A(Local_164.f_2, 4))
		{
			unk_0x191DDA30577F440A(&(Local_164.f_2), 4);
			unk_0xC664C0067EEAB8D1(&(Local_164.f_2), 2);
			unk_0xC664C0067EEAB8D1(&(Local_164.f_2), 3);
			unk_0xC664C0067EEAB8D1(&(Local_164.f_2), 5);
			func_215(72);
		}
	}
	else if (fParam0 >= 0.25f && fParam0 < 0.5f)
	{
		if (!unk_0x234B68AC2E35ED5A(Local_164.f_2, 3))
		{
			unk_0x191DDA30577F440A(&(Local_164.f_2), 3);
			unk_0xC664C0067EEAB8D1(&(Local_164.f_2), 2);
			unk_0xC664C0067EEAB8D1(&(Local_164.f_2), 4);
			unk_0xC664C0067EEAB8D1(&(Local_164.f_2), 5);
			func_215(71);
		}
	}
	else if (fParam0 < 0.25f)
	{
		if (!unk_0x234B68AC2E35ED5A(Local_164.f_2, 2))
		{
			unk_0x191DDA30577F440A(&(Local_164.f_2), 2);
			unk_0xC664C0067EEAB8D1(&(Local_164.f_2), 3);
			unk_0xC664C0067EEAB8D1(&(Local_164.f_2), 4);
			unk_0xC664C0067EEAB8D1(&(Local_164.f_2), 5);
			func_215(70);
		}
	}
}

void func_238(float fParam0, float fParam1)
{
	if (unk_0x234B68AC2E35ED5A(Local_164.f_1, 23))
	{
		return;
	}
	if (!unk_0x234B68AC2E35ED5A(Local_164.f_1, 19))
	{
		unk_0x191DDA30577F440A(&(Local_164.f_1), 19);
		func_171(0, &(Local_164.f_25.f_17), &(Local_164.f_25.f_23), &(Local_164.f_25.f_3), 1);
		func_171(4, &(Local_164.f_25.f_20), &(Local_164.f_25.f_26), &(Local_164.f_25.f_4), 1);
	}
	if (fParam0 <= 0.01f && fParam1 == 0.01f)
	{
		fParam0 = 0f;
	}
	func_6(&(Local_164.f_25.f_34), fParam0);
}

void func_239(float fParam0)
{
	if (Local_164.f_105.f_2 <= 0.01f && fParam0 == 0.01f)
	{
		Local_164.f_105.f_2 = 0f;
	}
	else if (Local_164.f_105.f_2 < fParam0)
	{
		Local_164.f_105.f_2 = (Local_164.f_105.f_2 + 0.003f);
	}
	else if (Local_164.f_105.f_2 > fParam0)
	{
		Local_164.f_105.f_2 = (Local_164.f_105.f_2 - 0.003f);
	}
	if (unk_0x32E225D6BB070AFA(unk_0x7D2B9E6A64637269()))
	{
		unk_0x3AB1EF8B99970B6D(unk_0x7D2B9E6A64637269(), "Weight", Local_164.f_105.f_2);
	}
}

int func_240(struct<18> Param0)
{
	struct<3> Var0[2];
	var uVar7;
	struct<3> Var8;
	struct<3> Var11;
	struct<10> Var14;
	
	if (!unk_0x32E225D6BB070AFA(unk_0x7D2B9E6A64637269()))
	{
		func_253(14, &Var0);
		uVar7 = func_219();
		Var8 = { 0f, 0f, unk_0xA8D713A937F31250(Local_164) };
		Var11 = { unk_0x9E695CE384C77EF0(Local_164, Var0[0 /*3*/]) };
		Var14.f_6 = -1082130432;
		Var14.f_9 = -1082130432;
		Var14 = func_252();
		Var14.f_1 = func_251();
		unk_0x5A375779AFEF3491(unk_0x7D2B9E6A64637269(), "Heist_Arcade_Strength_Hammer", &Var14, Var11, Var8, 2, 0.5f, 0, uVar7, 4);
		unk_0x4063423DD6B86995(unk_0x7D2B9E6A64637269(), func_216(0), uVar7);
		unk_0xA2C015B68CE01357(unk_0x7D2B9E6A64637269(), true);
		unk_0x9FF2677053B4F2A9(unk_0x7D2B9E6A64637269(), 1);
		if (unk_0x419E13582192CFEA(Param0.f_2[0]) && unk_0xA6BE8F025C6B653F(Param0.f_2[0]))
		{
			unk_0xA2C015B68CE01357(Param0.f_2[0], true);
		}
		unk_0xE37EB80DFB0D31FB(unk_0x7D2B9E6A64637269(), 0, 1);
		Local_164.f_105 = unk_0xDFB7BFA6482FEE1E();
		Local_164.f_105.f_1 = SYSTEM::FLOOR((unk_0x57213F964A9AED0A(func_219(), "ENTER") * 1000f));
	}
	else
	{
		if (!unk_0x234B68AC2E35ED5A(Local_164.f_2, 1))
		{
			unk_0x191DDA30577F440A(&(Local_164.f_2), 1);
			unk_0xFA03406E21D86D40(unk_0x7D2B9E6A64637269(), 1);
		}
		if (unk_0x234B68AC2E35ED5A(Local_164.f_2, 0))
		{
			if (unk_0x9AC63BDB9DDAB5FD(unk_0x7D2B9E6A64637269()))
			{
				unk_0x9D6719338AAFFE00(unk_0x7D2B9E6A64637269(), "EnterFinish");
				unk_0x3AB1EF8B99970B6D(unk_0x7D2B9E6A64637269(), "Weight", 0.01f);
				func_215(70);
				func_82(1);
				func_250();
				func_16(&(Local_164.f_156.f_5), 0, 0);
				unk_0xC664C0067EEAB8D1(&(Local_164.f_2), 0);
				unk_0xC664C0067EEAB8D1(&(Local_164.f_2), 1);
				return 1;
			}
			if (func_213(0.26f))
			{
				if (func_249(Param0))
				{
					if (func_65("ARC_CAB_TRI_STRET"))
					{
						unk_0x66AE54CE92457FEE(1);
					}
					func_83(1);
					func_246(func_248(0.19f), 0.5f);
					func_182(1);
					func_245();
					func_226(Local_164.f_10.f_1);
					func_244(1);
					func_243(unk_0x0D901EFDFD7EF9D5(2));
					func_230(1);
					func_242();
					func_241();
				}
			}
		}
	}
	return 0;
}

void func_241()
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = func_44(1);
	if (iVar0 == 0)
	{
		return;
	}
	Var1 = -1841849912;
	Var1.f_1 = unk_0x1146A9AE09CE2B14();
	unk_0xA5C82A39FF8ED272(1, &Var1, 2, iVar0);
}

void func_242()
{
	if (func_178())
	{
		if (unk_0x2322DD4FBF5E4E2F())
		{
			func_231("ARC_CAB_AOF_POW");
		}
		else
		{
			func_231("ARC_CAB_AOF_POW_ALT");
		}
	}
	else
	{
		func_231("ARC_CAB_AOF_POW");
	}
}

void func_243(int iParam0)
{
	unk_0x704F8697BB515627(Local_164.f_10.f_9, "SET_IS_KEYBOARD_CONTROL");
	unk_0x9D7453DF8B7E9E0B(uParam0);
	unk_0x392841D58D2EED1D();
}

void func_244(int iParam0)
{
	unk_0x704F8697BB515627(Local_164.f_10.f_9, "SET_METER_BAR_LINE_VISIBLE");
	unk_0x9D7453DF8B7E9E0B(iParam0);
	unk_0x392841D58D2EED1D();
}

void func_245()
{
	unk_0x704F8697BB515627(Local_164.f_10.f_9, "SHOW");
	unk_0x392841D58D2EED1D();
}

void func_246(float fParam0, float fParam1)
{
	func_247(&uParam0);
	func_247(&fParam1);
	unk_0x704F8697BB515627(Local_164.f_10.f_9, "SET_SCREEN_POSITION");
	unk_0x82D42F43BE26EB72(uParam0);
	unk_0x82D42F43BE26EB72(fParam1);
	unk_0x392841D58D2EED1D();
}

void func_247(var uParam0)
{
	if (*uParam0 < 0f)
	{
		*uParam0 = 0f;
	}
	else if (*uParam0 > 1f)
	{
		*uParam0 = 1f;
	}
}

float func_248(float fParam0)
{
	fParam0 = (fParam0 * (1.777778f / unk_0x451E904FC8FB5C54(0)));
	return fParam0;
}

int func_249(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	if (unk_0x419E13582192CFEA(Param0.f_2[0]))
	{
		if (!unk_0xD79E16EA1337F8F9(Param0.f_2[0]))
		{
			unk_0xB10D331AF5A4D8F3(Param0.f_2[0], 1);
			unk_0x0F1058706D5A58B4(Param0.f_2[0], unk_0x7D2B9E6A64637269(), unk_0xA79DFB802C09F5F5(unk_0x7D2B9E6A64637269(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			unk_0xE37EB80DFB0D31FB(unk_0x7D2B9E6A64637269(), 0, 1);
			return 1;
		}
	}
	return 0;
}

void func_250()
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = func_44(1);
	if (iVar0 == 0)
	{
		return;
	}
	Var1 = -647000111;
	Var1.f_1 = unk_0x1146A9AE09CE2B14();
	unk_0xA5C82A39FF8ED272(1, &Var1, 2, iVar0);
}

int func_251()
{
	return joaat("DEFAULT");
}

int func_252()
{
	int iVar0;
	
	iVar0 = 345141950;
	if (func_79() && func_71(unk_0x7D2B9E6A64637269()))
	{
		iVar0 = 762993224;
	}
	return iVar0;
}

void func_253(int iParam0, var uParam1)
{
	struct<2> Var0;
	
	func_254(iParam0, &Var0, 2);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Call_Loc(Var0.f_1);
}

void func_254(int iParam0, var uParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 5:
		case 3:
		case 4:
		case 2:
		case 6:
		case 7:
		case 8:
		case 10:
		case 9:
		case 17:
		case 18:
		case 19:
		case 15:
		case 16:
			func_315(uParam1, iParam2);
			break;
		
		case 12:
			func_300(uParam1, iParam2);
			break;
		
		case 11:
			func_285(uParam1, iParam2);
			break;
		
		case 13:
			func_269(uParam1, iParam2);
			break;
		
		case 14:
			func_255(uParam1, iParam2);
			break;
	}
}

void func_255(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			uParam0->f_2 = 37978;
			break;
		
		case 1:
			*uParam0 = 37949;
			break;
		
		case 2:
			uParam0->f_1 = 37927;
			break;
		
		case 3:
			uParam0->f_3 = 37877;
			break;
		
		case 4:
			uParam0->f_4 = 37608;
			break;
		
		case 5:
			uParam0->f_5 = 37599;
			break;
		
		case 6:
			uParam0->f_6 = 37590;
			break;
		
		case 7:
			uParam0->f_7 = 37581;
			break;
		
		case 8:
			uParam0->f_8 = 37573;
			break;
		
		case 9:
			uParam0->f_9 = 37534;
			break;
		
		case 10:
			uParam0->f_10 = 4803;
			break;
		
		case 11:
			uParam0->f_11 = 37523;
			break;
		
		case 12:
			uParam0->f_12 = 37515;
			break;
		
		case 13:
			uParam0->f_13 = 37507;
			break;
	}
}

void func_256(var uParam0, var uParam1, var uParam2)
{
}

void func_257(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
}

Vector3 func_258(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return 0f, 0f, 0f;
}

void func_259(var uParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		StringCopy(sParam2, "", 64);
	}
	else
	{
		StringCopy(sParam2, "axe_of_fury", 64);
	}
	StringCopy(sParam1, "dlc_sum20_am_cabinet_attract_sounds", 64);
}

void func_260(var uParam0, var uParam1)
{
}

int func_261(var uParam0, var uParam1, var uParam2)
{
	return 0;
}

int func_262(var uParam0)
{
	return 0;
}

int func_263(var uParam0)
{
	return 1;
}

void func_264(var uParam0, int iParam1, int iParam2, var uParam3)
{
	if (func_79() && func_71(unk_0x7D2B9E6A64637269()))
	{
		StringCopy(&(Global_1710057.f_47), "ANIM_HEIST@ARCADE@STRENGTH@FEMALE@", 64);
		StringCopy(&(uParam3->f_17), "ANIM_HEIST@ARCADE@STRENGTH@FEMALE@", 64);
	}
	else
	{
		StringCopy(&(Global_1710057.f_47), "ANIM_HEIST@ARCADE@STRENGTH@MALE@", 64);
		StringCopy(&(uParam3->f_17), "ANIM_HEIST@ARCADE@STRENGTH@MALE@", 64);
	}
	switch (iParam1)
	{
		case 0:
			uParam3->f_1 = "ENTER";
			break;
		
		case 1:
			uParam3->f_1 = "IDLE";
			break;
		
		case 11:
			uParam3->f_1 = "EXIT";
			break;
		
		case 70:
			uParam3->f_1 = "STAGE_1_LOOP";
			break;
		
		case 71:
			uParam3->f_1 = "STAGE_2_LOOP";
			break;
		
		case 72:
			uParam3->f_1 = "STAGE_3_LOOP";
			break;
		
		case 73:
			uParam3->f_1 = "STAGE_4_LOOP";
			break;
		
		case 74:
			uParam3->f_1 = "RESULT_BAD";
			break;
		
		case 75:
			uParam3->f_1 = "RESULT_AVERAGE";
			break;
		
		case 76:
			uParam3->f_1 = "RESULT_GOOD";
			break;
		
		case 77:
			uParam3->f_1 = "RESULT_PERFECT";
			break;
	}
}

void func_265(var uParam0, var uParam1)
{
	if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_9 == unk_0x1146A9AE09CE2B14())
	{
		uParam1->f_355 = "ARC_CAB_TRI_STRET";
	}
	else
	{
		uParam1->f_355 = "ARC_CAB_TRI_RSTRET";
	}
}

void func_266(var uParam0, var uParam1)
{
	*(uParam1[0 /*3*/]) = { 0f, -0.55f, 0f };
}

void func_267(var uParam0, var uParam1)
{
	uParam1->f_745 = joaat("sum_prop_arcade_strength_01a");
	StringCopy(&(uParam1->f_339), "dlc_ch_strength_test_gameplay_scene", 64);
}

int func_268(var uParam0, char* sParam1, bool bParam2)
{
	if (bParam2)
	{
		return 0;
	}
	StringCopy(sParam1, "AM_MP_ARCADE_STRENGTH_TEST", 64);
	return 1;
}

void func_269(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			uParam0->f_2 = 39327;
			break;
		
		case 1:
			*uParam0 = 39298;
			break;
		
		case 2:
			uParam0->f_1 = 39254;
			break;
		
		case 3:
			uParam0->f_3 = 39202;
			break;
		
		case 4:
			uParam0->f_4 = 38401;
			break;
		
		case 5:
			uParam0->f_5 = 38392;
			break;
		
		case 6:
			uParam0->f_6 = 38383;
			break;
		
		case 7:
			uParam0->f_7 = 38374;
			break;
		
		case 8:
			uParam0->f_8 = 38366;
			break;
		
		case 9:
			uParam0->f_9 = 38326;
			break;
		
		case 10:
			uParam0->f_10 = 38314;
			break;
		
		case 11:
			uParam0->f_11 = 38272;
			break;
		
		case 12:
			uParam0->f_12 = 38264;
			break;
		
		case 13:
			uParam0->f_13 = 38256;
			break;
	}
}

void func_270(var uParam0, var uParam1, var uParam2)
{
}

void func_271(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
}

Vector3 func_272(var uParam0, var uParam1, int iParam2, var uParam3)
{
	switch (iParam2)
	{
		case 0:
			return 0f, 0f, 0f;
		
		case 1:
			return 0f, 0f, 0f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_273(var uParam0, var uParam1)
{
	*uParam1 = 0;
}

void func_274(var uParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		StringCopy(sParam2, "professor_love_playing", 64);
	}
	else
	{
		StringCopy(sParam2, "professor_love", 64);
	}
	StringCopy(sParam1, "dlc_ch_am_cabinet_attract_sounds", 64);
}

void func_275(var uParam0, var uParam1)
{
}

int func_276(var uParam0, var uParam1, var uParam2)
{
	return 0;
}

int func_277(var uParam0)
{
	return 1;
}

int func_278(var uParam0)
{
	return 0;
}

void func_279(var uParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = unk_0xC502CD39B4994F3A(func_280());
	if (!func_79())
	{
		switch (iParam2)
		{
			case 0:
				if ((iVar0 != func_50() && !func_80(iVar0)) && !unk_0x234B68AC2E35ED5A(Global_2426865[iVar0 /*449*/].f_429, 2))
				{
					StringCopy(&(uParam3->f_17), "ANIM_HEIST@ARCADE@LOVE@FEMALE@LEFT@", 64);
					unk_0x191DDA30577F440A(&(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_429), 2);
				}
				else
				{
					StringCopy(&(uParam3->f_17), "ANIM_HEIST@ARCADE@LOVE@MALE@LEFT@", 64);
				}
				break;
			
			default:
				if ((iVar0 != func_50() && !func_80(iVar0)) && !unk_0x234B68AC2E35ED5A(Global_2426865[iVar0 /*449*/].f_429, 2))
				{
					StringCopy(&(uParam3->f_17), "ANIM_HEIST@ARCADE@LOVE@FEMALE@RIGHT@", 64);
				}
				else
				{
					StringCopy(&(uParam3->f_17), "ANIM_HEIST@ARCADE@LOVE@MALE@RIGHT@", 64);
				}
				break;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 0:
				if ((iVar0 != func_50() && func_80(iVar0)) && !unk_0x234B68AC2E35ED5A(Global_2426865[iVar0 /*449*/].f_429, 2))
				{
					StringCopy(&(uParam3->f_17), "ANIM_HEIST@ARCADE@LOVE@MALE@LEFT@", 64);
					unk_0x191DDA30577F440A(&(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_429), 2);
				}
				else
				{
					StringCopy(&(uParam3->f_17), "ANIM_HEIST@ARCADE@LOVE@FEMALE@LEFT@", 64);
				}
				break;
			
			default:
				if ((iVar0 != func_50() && func_80(iVar0)) && !unk_0x234B68AC2E35ED5A(Global_2426865[iVar0 /*449*/].f_429, 2))
				{
					StringCopy(&(uParam3->f_17), "ANIM_HEIST@ARCADE@LOVE@MALE@RIGHT@", 64);
					unk_0x191DDA30577F440A(&(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_429), 2);
				}
				else
				{
					StringCopy(&(uParam3->f_17), "ANIM_HEIST@ARCADE@LOVE@FEMALE@RIGHT@", 64);
				}
				break;
			}
	}
	switch (iParam1)
	{
		case 0:
			uParam3->f_1 = "enter";
			break;
		
		case 1:
			uParam3->f_1 = "idle";
			break;
		
		case 11:
			uParam3->f_1 = "exit";
			break;
		
		case 55:
			uParam3->f_1 = "average_better";
			break;
		
		case 56:
			uParam3->f_1 = "average_worse";
			break;
		
		case 57:
			uParam3->f_1 = "bad_better";
			break;
		
		case 58:
			uParam3->f_1 = "bad_worse";
			break;
		
		case 59:
			uParam3->f_1 = "friendzoned_perfect";
			break;
		
		case 60:
			uParam3->f_1 = "friendzoned_worst";
			break;
		
		case 61:
			uParam3->f_1 = "good_better";
			break;
		
		case 62:
			uParam3->f_1 = "good_worse";
			break;
		
		case 63:
			uParam3->f_1 = "mutual_bad";
			break;
		
		case 64:
			uParam3->f_1 = "mutual_average";
			break;
		
		case 65:
			uParam3->f_1 = "mutual_good";
			break;
		
		case 66:
			uParam3->f_1 = "mutual_perfect";
			break;
		
		case 67:
			uParam3->f_1 = "mutual_worst";
			break;
		
		case 68:
			uParam3->f_1 = "perfect_better";
			break;
		
		case 69:
			uParam3->f_1 = "worst_worse";
			break;
	}
}

int func_280()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = func_198(unk_0x1146A9AE09CE2B14());
	if (iVar1 != -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar2 = iVar0;
			if (unk_0x8CFC2F41A749E236(iVar2) && iVar2 != unk_0x1146A9AE09CE2B14())
			{
				if (unk_0xFCC26BA7572E9F1F(iVar2))
				{
					if (func_198(iVar2) == iVar1)
					{
						return iVar0;
					}
				}
			}
			iVar0++;
		}
	}
	return -1;
}

void func_281(var uParam0, var uParam1)
{
	if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_9 == unk_0x1146A9AE09CE2B14())
	{
		uParam1->f_355 = "ARC_CAB_TRI_LOVM";
	}
	else
	{
		uParam1->f_355 = "ARC_CAB_TRI_RLOVM";
	}
}

void func_282(var uParam0, var uParam1)
{
	*(uParam1[0 /*3*/]) = { -0.4f, -0.5f, 0f };
	*(uParam1[1 /*3*/]) = { 0.4f, -0.5f, 0f };
}

void func_283(var uParam0, var uParam1)
{
	uParam1->f_745 = joaat("ch_prop_arcade_love_01a");
	StringCopy(&(uParam1->f_339), "dlc_ch_professor_love_gameplay_scene", 64);
}

int func_284(var uParam0, char* sParam1, bool bParam2)
{
	if (bParam2)
	{
		return 0;
	}
	StringCopy(sParam1, "AM_MP_ARCADE_LOVE_METER", 64);
	return 1;
}

void func_285(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			uParam0->f_2 = 40006;
			break;
		
		case 1:
			*uParam0 = 39977;
			break;
		
		case 2:
			uParam0->f_1 = 39955;
			break;
		
		case 3:
			uParam0->f_3 = 39903;
			break;
		
		case 4:
			uParam0->f_4 = 39687;
			break;
		
		case 5:
			uParam0->f_5 = 39678;
			break;
		
		case 6:
			uParam0->f_6 = 39669;
			break;
		
		case 7:
			uParam0->f_7 = 39660;
			break;
		
		case 8:
			uParam0->f_8 = 39652;
			break;
		
		case 9:
			uParam0->f_9 = 39644;
			break;
		
		case 10:
			uParam0->f_10 = 39632;
			break;
		
		case 11:
			uParam0->f_11 = 39621;
			break;
		
		case 12:
			uParam0->f_12 = 39613;
			break;
		
		case 13:
			uParam0->f_13 = 39605;
			break;
	}
}

void func_286(var uParam0, var uParam1, var uParam2)
{
}

void func_287(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
}

Vector3 func_288(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return 0f, 0f, 0f;
}

void func_289(var uParam0, var uParam1)
{
	*uParam1 = 0;
}

void func_290(var uParam0, var uParam1, var uParam2, var uParam3)
{
}

void func_291(var uParam0, var uParam1)
{
}

int func_292(var uParam0, var uParam1, var uParam2)
{
	return 0;
}

int func_293(var uParam0)
{
	return 0;
}

int func_294(var uParam0)
{
	return 0;
}

void func_295(var uParam0, int iParam1, var uParam2, var uParam3)
{
	if (!func_79())
	{
		StringCopy(&(uParam3->f_17), "anim_heist@arcade@fortune@male@", 64);
	}
	else
	{
		StringCopy(&(uParam3->f_17), "anim_heist@arcade@fortune@female@", 64);
	}
	switch (iParam1)
	{
		case 0:
			uParam3->f_1 = "start_game";
			break;
		
		case 1:
			uParam3->f_1 = "idle";
			break;
		
		case 11:
			uParam3->f_1 = "exit";
			break;
		
		case 21:
			uParam3->f_1 = "reaction_amused";
			break;
		
		case 22:
			uParam3->f_1 = "reaction_angry";
			break;
		
		case 23:
			uParam3->f_1 = "reaction_confused";
			break;
		
		case 24:
			uParam3->f_1 = "reaction_disgusted";
			break;
		
		case 25:
			uParam3->f_1 = "reaction_insulted";
			break;
		
		case 26:
			uParam3->f_1 = "reaction_pondering";
			break;
		
		case 27:
			uParam3->f_1 = "reaction_surprised";
			break;
	}
}

void func_296(var uParam0, var uParam1)
{
	if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_9 == unk_0x1146A9AE09CE2B14())
	{
		uParam1->f_355 = "ARC_CAB_TRI_FORT";
	}
	else
	{
		uParam1->f_355 = "ARC_CAB_TRI_RFORT";
	}
}

void func_297(var uParam0, var uParam1)
{
	*(uParam1[0 /*3*/]) = { 0f, -0.5f, 0f };
}

void func_298(var uParam0, var uParam1)
{
	uParam1->f_745 = joaat("ch_prop_arcade_fortune_01a");
	StringCopy(&(uParam1->f_339), "dlc_ch_nazar_speaks_gameplay_scene", 64);
}

int func_299(var uParam0, char* sParam1, bool bParam2)
{
	if (bParam2)
	{
		return 0;
	}
	StringCopy(sParam1, "AM_MP_ARCADE_FORTUNE_TELLER", 64);
	return 1;
}

void func_300(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			uParam0->f_2 = 41292;
			break;
		
		case 1:
			*uParam0 = 41263;
			break;
		
		case 2:
			uParam0->f_1 = 41241;
			break;
		
		case 3:
			uParam0->f_3 = 41189;
			break;
		
		case 4:
			uParam0->f_4 = 40915;
			break;
		
		case 5:
			uParam0->f_5 = 40906;
			break;
		
		case 6:
			uParam0->f_6 = 40897;
			break;
		
		case 7:
			uParam0->f_7 = 40888;
			break;
		
		case 8:
			uParam0->f_8 = 40880;
			break;
		
		case 9:
			uParam0->f_9 = 40840;
			break;
		
		case 10:
			uParam0->f_10 = 40311;
			break;
		
		case 11:
			uParam0->f_11 = 40300;
			break;
		
		case 12:
			uParam0->f_12 = 40292;
			break;
		
		case 13:
			uParam0->f_13 = 40284;
			break;
	}
}

void func_301(var uParam0, var uParam1, var uParam2)
{
}

void func_302(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
}

Vector3 func_303(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return 0f, 0f, 0f;
}

void func_304(var uParam0, var uParam1)
{
	*uParam1 = 14;
	uParam1->f_16[0 /*3*/] = { -0.29f, -0.097f, 1.723f };
	uParam1->f_102[0] = joaat("ch_prop_arcade_claw_01a_r2");
	uParam1->f_16[1 /*3*/] = { 0.004f, -0.1f, 1.785f };
	uParam1->f_102[1] = joaat("ch_prop_arcade_claw_01a_r1");
	uParam1->f_16[2 /*3*/] = { -0.29f, -0.097f, 1.68f };
	uParam1->f_102[2] = joaat("ch_prop_arcade_claw_01a_c_d");
	uParam1->f_16[3 /*3*/] = { -0.29f, -0.097f, 1.68f };
	uParam1->f_102[3] = joaat("ch_prop_arcade_claw_01a_c");
	uParam1->f_16[4 /*3*/] = { 0.02f, -0.01f, 1.01f };
	uParam1->f_102[4] = joaat("ch_prop_arcade_claw_plush_01a");
	uParam1->f_16[5 /*3*/] = { 0.24f, -0.04f, 1.01f };
	uParam1->f_102[5] = joaat("ch_prop_arcade_claw_plush_02a");
	uParam1->f_16[6 /*3*/] = { 0.29f, 0.19f, 1.01f };
	uParam1->f_102[6] = joaat("ch_prop_arcade_claw_plush_03a");
	uParam1->f_16[7 /*3*/] = { 0.06f, 0.2f, 1.01f };
	uParam1->f_102[7] = joaat("ch_prop_arcade_claw_plush_04a");
	uParam1->f_16[8 /*3*/] = { -0.24f, 0.25f, 1.02f };
	uParam1->f_102[8] = joaat("ch_prop_arcade_claw_plush_05a");
	uParam1->f_16[9 /*3*/] = { -0.25f, 0.55f, 1.01f };
	uParam1->f_102[9] = joaat("ch_prop_arcade_claw_plush_06a");
	uParam1->f_16[10 /*3*/] = { 0.01f, 0.55f, 1.04f };
	uParam1->f_102[10] = joaat("ch_prop_princess_robo_plush_07a");
	uParam1->f_16[11 /*3*/] = { 0.3f, 0.55f, 1.025f };
	uParam1->f_102[11] = joaat("ch_prop_shiny_wasabi_plush_08a");
	uParam1->f_16[12 /*3*/] = { 0.2f, 0.37f, 1.01f };
	uParam1->f_102[12] = joaat("ch_prop_master_09a");
	uParam1->f_16[13 /*3*/] = { -0.06f, 0.37f, 1.01f };
	uParam1->f_102[13] = joaat("ch_prop_arcade_claw_plush_04a");
}

void func_305(var uParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		StringCopy(sParam2, "claw_crane_playing", 64);
	}
	else
	{
		StringCopy(sParam2, "claw_crane", 64);
	}
	StringCopy(sParam1, "dlc_ch_am_cabinet_attract_sounds", 64);
}

void func_306(var uParam0, var uParam1)
{
}

int func_307(var uParam0, var uParam1, var uParam2)
{
	return 0;
}

int func_308(var uParam0)
{
	return 0;
}

int func_309(var uParam0)
{
	return 0;
}

void func_310(var uParam0, int iParam1, var uParam2, var uParam3)
{
	if (!func_79())
	{
		StringCopy(&(uParam3->f_17), "anim_heist@arcade@claw@male@", 64);
	}
	else
	{
		StringCopy(&(uParam3->f_17), "anim_heist@arcade@claw@female@", 64);
	}
	*uParam3 = 1;
	switch (iParam1)
	{
		case 0:
			uParam3->f_1 = "idle_to_game";
			break;
		
		case 1:
			uParam3->f_1 = "game";
			break;
		
		case 11:
			uParam3->f_1 = "exit_game";
			break;
		
		case 12:
			uParam3->f_1 = "grab_prize";
			break;
		
		case 13:
			uParam3->f_1 = "miss";
			break;
		
		case 14:
			uParam3->f_1 = "near_miss";
			break;
		
		case 15:
			uParam3->f_1 = "press_grab";
			break;
		
		case 16:
			uParam3->f_1 = "press_right";
			break;
		
		case 17:
			uParam3->f_1 = "press_up";
			break;
		
		case 18:
			uParam3->f_1 = "win_loop";
			break;
		
		case 20:
			uParam3->f_1 = "win";
			uParam3->f_2[2] = "prop_claw_win";
			if (Global_1710057.f_45 != -1)
			{
				uParam3->f_2[Global_1710057.f_45] = "prop_prize_win";
			}
			break;
	}
}

void func_311(var uParam0, var uParam1)
{
	if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_9 == unk_0x1146A9AE09CE2B14())
	{
		uParam1->f_355 = "ARC_CAB_TRI_CLAWC";
	}
	else
	{
		uParam1->f_355 = "ARC_CAB_TRI_RCLAWC";
	}
}

void func_312(var uParam0, var uParam1)
{
	*(uParam1[0 /*3*/]) = { 0f, -0.5f, 0f };
}

void func_313(var uParam0, var uParam1)
{
	uParam1->f_745 = joaat("ch_prop_arcade_claw_01a");
	StringCopy(&(uParam1->f_339), "dlc_ch_claw_machine_gameplay_scene", 64);
}

int func_314(var uParam0, char* sParam1, bool bParam2)
{
	if (bParam2)
	{
		return 0;
	}
	StringCopy(sParam1, "AM_MP_ARCADE_CLAW_CRANE", 64);
	return 1;
}

void func_315(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			uParam0->f_2 = 422464;
			break;
		
		case 1:
			*uParam0 = 421915;
			break;
		
		case 2:
			uParam0->f_1 = 421674;
			break;
		
		case 3:
			uParam0->f_3 = 421121;
			break;
		
		case 4:
			uParam0->f_4 = 417483;
			break;
		
		case 5:
			uParam0->f_5 = 417474;
			break;
		
		case 6:
			uParam0->f_6 = 417360;
			break;
		
		case 7:
			uParam0->f_7 = 407732;
			break;
		
		case 8:
			uParam0->f_8 = 44027;
			break;
		
		case 9:
			uParam0->f_9 = 43483;
			break;
		
		case 10:
			uParam0->f_10 = 42658;
			break;
		
		case 11:
			uParam0->f_11 = 42455;
			break;
		
		case 12:
			uParam0->f_12 = 41968;
			break;
		
		case 13:
			uParam0->f_13 = 41570;
			break;
	}
}

void func_316(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("ch_prop_arcade_race_01a_screen_p1");
					break;
				
				case 1:
					*uParam2 = joaat("ch_prop_arcade_race_01a_screen_p2");
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("ch_prop_arcade_race_01b_screen_p1");
					break;
				
				case 1:
					*uParam2 = joaat("ch_prop_arcade_race_01b_screen_p2");
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("ch_prop_arcade_race_02a_screen_p1");
					break;
				
				case 1:
					*uParam2 = joaat("ch_prop_arcade_race_02a_screen_p2");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("ch_prop_arcade_gun_01a_screen_p1");
					break;
				
				case 1:
					*uParam2 = joaat("ch_prop_arcade_gun_01a_screen_p2");
					break;
			}
			break;
		
		case 6:
			*uParam2 = joaat("ch_prop_arc_dege_01a_screen_uv");
			break;
		
		case 7:
			*uParam2 = joaat("ch_prop_arc_monkey_01a_screen_uv");
			break;
		
		case 8:
			*uParam2 = joaat("ch_prop_arc_pene_01a_screen_uv");
			break;
		
		case 0:
			*uParam2 = joaat("ch_prop_arcade_space_01a_scrn_uv");
			break;
		
		case 9:
			*uParam2 = joaat("ch_prop_arcade_invade_01a_scrn_uv");
			break;
		
		case 10:
			*uParam2 = joaat("ch_prop_arcade_street_01a_scrn_uv");
			break;
		
		case 2:
			*uParam2 = joaat("ch_prop_arcade_wizard_01a_scrn_uv");
			break;
		
		case 15:
			*uParam2 = joaat("sum_prop_arcade_qub3d_01a_scrn_uv");
			break;
		
		case 16:
			switch (iParam1)
			{
				case 0:
					*uParam2 = -1777094198;
					break;
				
				case 1:
					*uParam2 = -1948738220;
					break;
			}
	}
}

void func_317(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 17:
			StringCopy(sParam1, "ARC_START_M_T1", 64);
			(*uParam2)[0] = "ARC_START_M_I1";
			unk_0x191DDA30577F440A(&(uParam4->f_18), 0);
			(*uParam2)[1] = "ARC_START_M_I2";
			unk_0x191DDA30577F440A(&(uParam4->f_18), 1);
			uParam4->f_7 = 2;
			break;
		
		case 18:
			StringCopy(sParam1, "ARC_START_M_T2", 64);
			(*uParam2)[0] = "ARC_START_M_I3";
			if (!func_321(&sVar0))
			{
				unk_0x191DDA30577F440A(&(uParam4->f_18), 0);
			}
			(*uParam2)[1] = "ARC_START_M_I4";
			if (!func_318(&sVar0))
			{
				unk_0x191DDA30577F440A(&(uParam4->f_18), 1);
			}
			uParam4->f_7 = 2;
			break;
	}
}

int func_318(char* sParam0)
{
	if (!func_45(unk_0x1146A9AE09CE2B14(), 1, 1))
	{
		return 1;
	}
	if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_9 == func_50())
	{
		return 1;
	}
	if (!func_320(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_9) || func_319(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_9) != 1)
	{
		StringCopy(sParam0, "ARC_START_M_D5", 64);
		return 1;
	}
	return 0;
}

int func_319(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1707876[iParam0 /*68*/].f_18.f_4;
	}
	return 0;
}

int func_320(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_1707876[iParam0 /*68*/].f_18.f_1, 6);
	}
	return 0;
}

int func_321(char* sParam0)
{
	if (!func_45(unk_0x1146A9AE09CE2B14(), 1, 1))
	{
		return 1;
	}
	if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_9 == func_50())
	{
		return 1;
	}
	if (!func_322(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_9) || func_319(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_9) != 2)
	{
		StringCopy(sParam0, "ARC_START_M_D4", 64);
		return 1;
	}
	return 0;
}

int func_322(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_1707876[iParam0 /*68*/].f_18.f_1, 7);
	}
	return 0;
}

Vector3 func_323(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam2)
			{
				case 0:
					return 0f, 0f, 0f;
				
				case 1:
					switch (iParam1)
					{
						case 0:
						case 11:
							if (!bParam3)
							{
								return 0f, 0f, 0f;
							}
							else
							{
								return 1.242f, 0f, 0f;
							}
							break;
						
						default:
							return 1.242f, 0f, 0f;
							break;
					}
					break;
			}
			break;
		
		case 3:
		case 4:
			switch (iParam2)
			{
				case 0:
					return 0f, 0f, 0f;
				
				case 1:
					if (((iParam1 != 0 && iParam1 != 37) && iParam1 != 11) || bParam3)
					{
						return 1.34f, 0f, 0f;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_324(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			*uParam1 = 3;
			uParam1->f_1[0] = 0;
			uParam1->f_16[0 /*3*/] = { -0.498f, 0.13f, 0.786f };
			uParam1->f_59[0 /*3*/] = { -75f, 0f, 0f };
			uParam1->f_102[0] = joaat("ch_prop_arcade_wpngun_01a");
			uParam1->f_1[1] = 1;
			uParam1->f_16[1 /*3*/] = { 0.498f, 0.13f, 0.786f };
			uParam1->f_59[1 /*3*/] = { -75f, 0f, 0f };
			uParam1->f_102[1] = joaat("ch_prop_arcade_wpngun_01a");
			uParam1->f_16[2 /*3*/] = { 0f, 0f, 0f };
			uParam1->f_59[2 /*3*/] = { 0f, 0f, 0f };
			uParam1->f_102[2] = joaat("ch_prop_arcade_gun_bird_01a");
			break;
		
		case 16:
			*uParam1 = 2;
			uParam1->f_1[0] = 0;
			uParam1->f_16[0 /*3*/] = { -0.498f, 0.13f, 0.786f };
			uParam1->f_59[0 /*3*/] = { -75f, 0f, 0f };
			uParam1->f_102[0] = 679470914;
			uParam1->f_1[1] = 1;
			uParam1->f_16[1 /*3*/] = { 0.498f, 0.13f, 0.786f };
			uParam1->f_59[1 /*3*/] = { -75f, 0f, 0f };
			uParam1->f_102[1] = 679470914;
			break;
		
		case 5:
			*uParam1 = 2;
			uParam1->f_1[0] = 0;
			uParam1->f_16[0 /*3*/] = { -0.621f, -0.064f, 0.168f };
			uParam1->f_59[0 /*3*/] = { 0f, 0f, 0f };
			uParam1->f_102[0] = joaat("ch_prop_arcade_race_bike_02a");
			uParam1->f_1[1] = 1;
			uParam1->f_16[1 /*3*/] = { 0.621f, -0.064f, 0.168f };
			uParam1->f_59[1 /*3*/] = { 0f, 0f, 0f };
			uParam1->f_102[1] = joaat("ch_prop_arcade_race_bike_02a");
			break;
		
		case 3:
			*uParam1 = 2;
			uParam1->f_16[0 /*3*/] = { -0.667f, -0.179f, 0.266f };
			uParam1->f_59[0 /*3*/] = { 0f, 0f, 0f };
			uParam1->f_102[0] = joaat("ch_prop_arcade_race_car_01a");
			uParam1->f_16[1 /*3*/] = { 0.667f, -0.179f, 0.266f };
			uParam1->f_59[1 /*3*/] = { 0f, 0f, 0f };
			uParam1->f_102[1] = joaat("ch_prop_arcade_race_car_01b");
			break;
		
		case 4:
			*uParam1 = 2;
			uParam1->f_16[0 /*3*/] = { -0.667f, -0.179f, 0.266f };
			uParam1->f_59[0 /*3*/] = { 0f, 0f, 0f };
			uParam1->f_102[0] = joaat("ch_prop_arcade_race_truck_01a");
			uParam1->f_16[1 /*3*/] = { 0.667f, -0.179f, 0.266f };
			uParam1->f_59[1 /*3*/] = { 0f, 0f, 0f };
			uParam1->f_102[1] = joaat("ch_prop_arcade_race_truck_01b");
			break;
		
		case 17:
			*uParam1 = 2;
			uParam1->f_16[0 /*3*/] = { 0f, 0.2f, 0.1f };
			uParam1->f_59[0 /*3*/] = { 0f, 0f, 0f };
			uParam1->f_102[0] = joaat("ch_prop_ch_usb_drive01x");
			uParam1->f_16[1 /*3*/] = { 0f, 0.2f, 0.2f };
			uParam1->f_59[1 /*3*/] = { 0f, 0f, 0f };
			uParam1->f_102[1] = joaat("prop_phone_ing");
			break;
		
		case 18:
			*uParam1 = 1;
			uParam1->f_16[0 /*3*/] = { 1.7f, -0.18f, 0f };
			uParam1->f_59[0 /*3*/] = { 0f, 0f, 0f };
			uParam1->f_102[0] = joaat("ch_prop_fingerprint_scanner_01a");
			break;
		
		default:
			*uParam1 = 0;
			break;
	}
}

void func_325(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 9:
			if (bParam3)
			{
				StringCopy(sParam2, "invade_persuade_playing", 64);
			}
			else
			{
				StringCopy(sParam2, "invade_persuade", 64);
			}
			StringCopy(sParam1, "dlc_ch_am_cabinet_attract_sounds", 64);
			break;
		
		case 10:
			if (bParam3)
			{
				StringCopy(sParam2, "gang_wars_playing", 64);
			}
			else
			{
				StringCopy(sParam2, "gang_wars", 64);
			}
			StringCopy(sParam1, "dlc_ch_am_cabinet_attract_sounds", 64);
			break;
		
		case 0:
			if (bParam3)
			{
				StringCopy(sParam2, "space_monkey_playing", 64);
			}
			else
			{
				StringCopy(sParam2, "space_monkey", 64);
			}
			StringCopy(sParam1, "dlc_ch_am_cabinet_attract_sounds", 64);
			break;
		
		case 1:
			if (bParam3)
			{
				StringCopy(sParam2, "badlands_revenge_playing", 64);
			}
			else
			{
				StringCopy(sParam2, "badlands_revenge", 64);
			}
			StringCopy(sParam1, "dlc_ch_am_cabinet_attract_sounds", 64);
			break;
		
		case 5:
			if (bParam3)
			{
				StringCopy(sParam2, "rc_bike_playing", 64);
			}
			else
			{
				StringCopy(sParam2, "rc_bike", 64);
			}
			StringCopy(sParam1, "dlc_ch_am_cabinet_attract_sounds", 64);
			break;
		
		case 4:
			if (bParam3)
			{
				StringCopy(sParam2, "rc_truck_playing", 64);
			}
			else
			{
				StringCopy(sParam2, "rc_truck", 64);
			}
			StringCopy(sParam1, "dlc_ch_am_cabinet_attract_sounds", 64);
			break;
		
		case 3:
			if (bParam3)
			{
				StringCopy(sParam2, "rc_car_playing", 64);
			}
			else
			{
				StringCopy(sParam2, "rc_car", 64);
			}
			StringCopy(sParam1, "dlc_ch_am_cabinet_attract_sounds", 64);
			break;
		
		case 2:
			if (bParam3)
			{
				StringCopy(sParam2, "wizards_ruin_playing", 64);
			}
			else
			{
				StringCopy(sParam2, "wizards_ruin", 64);
			}
			StringCopy(sParam1, "dlc_ch_am_cabinet_attract_sounds", 64);
			break;
		
		case 6:
			if (bParam3)
			{
				StringCopy(sParam2, "dg_defender_playing", 64);
			}
			else
			{
				StringCopy(sParam2, "dg_defender", 64);
			}
			StringCopy(sParam1, "dlc_ch_am_cabinet_attract_sounds", 64);
			break;
		
		case 7:
			if (bParam3)
			{
				StringCopy(sParam2, "dg_monkey_playing", 64);
			}
			else
			{
				StringCopy(sParam2, "dg_monkey", 64);
			}
			StringCopy(sParam1, "dlc_ch_am_cabinet_attract_sounds", 64);
			break;
		
		case 8:
			if (bParam3)
			{
				StringCopy(sParam2, "dg_penetrator_playing", 64);
			}
			else
			{
				StringCopy(sParam2, "dg_penetrator", 64);
			}
			StringCopy(sParam1, "dlc_ch_am_cabinet_attract_sounds", 64);
			break;
		
		case 15:
			if (bParam3)
			{
				StringCopy(sParam2, "", 64);
			}
			else
			{
				StringCopy(sParam2, "qub3d", 64);
			}
			StringCopy(sParam1, "dlc_sum20_am_cabinet_attract_sounds", 64);
			break;
		
		case 16:
			if (bParam3)
			{
				StringCopy(sParam2, "camhedz_playing", 64);
			}
			else
			{
				StringCopy(sParam2, "camhedz", 64);
			}
			StringCopy(sParam1, "dlc_tuner_am_cabinet_attract_sounds", 64);
	}
}

void func_326(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 9:
			func_649(iParam0, uParam1);
			break;
		
		case 10:
			func_644(iParam0, uParam1);
			break;
		
		case 18:
			func_331(uParam1);
			break;
		
		case 3:
		case 4:
		case 5:
			func_327(uParam1, iParam0);
			break;
	}
}

void func_327(var uParam0, int iParam1)
{
	if (uParam0->f_523 == 38)
	{
		if (func_330(uParam0->f_523) && func_329(iParam1, uParam0->f_523))
		{
			uParam0->f_523.f_3 = 0;
			uParam0->f_523.f_4 = 0;
			uParam0->f_523.f_6 = 8f;
			uParam0->f_523.f_7 = -8f;
			func_328(&(uParam0->f_523), 11);
		}
	}
}

void func_328(var uParam0, int iParam1)
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	int iVar10;
	
	Var0.f_5 = 1073741824;
	Var0.f_6 = -1073741824;
	Var0 = 458618622;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = iParam1;
	Var0.f_3 = uParam0->f_3;
	Var0.f_4 = uParam0->f_4;
	Var0.f_5 = uParam0->f_6;
	Var0.f_6 = uParam0->f_7;
	Var0.f_7 = uParam0->f_8;
	bVar8 = false;
	if (iParam1 == 11)
	{
		if (unk_0x234B68AC2E35ED5A(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_429, 1))
		{
			unk_0xC664C0067EEAB8D1(&(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_429), 1);
			bVar8 = true;
		}
	}
	uParam0->f_5 = 0;
	if (!func_166(&(uParam0->f_1)))
	{
		func_16(&(uParam0->f_1), 0, 0);
	}
	bVar9 = true;
	if (*uParam0 == iParam1 && !bVar8)
	{
		if (func_166(&(uParam0->f_1)) && !func_15(&(uParam0->f_1), 1000, 0))
		{
			bVar9 = false;
		}
		else
		{
			func_14(&(uParam0->f_1));
		}
	}
	else
	{
		*uParam0 = iParam1;
		func_14(&(uParam0->f_1));
	}
	if (bVar9)
	{
		iVar10 = func_197(unk_0x1146A9AE09CE2B14());
		if (iVar10 != -1)
		{
			unk_0xA5C82A39FF8ED272(1, &Var0, 8, iVar10);
			uParam0->f_5 = 1;
		}
	}
}

int func_329(int iParam0, int iParam1)
{
	struct<3> Var0;
	float fVar33;
	var uVar34;
	
	Var0.f_2 = 14;
	if (iParam0 != -1)
	{
		func_688(iParam0, iParam1, 0, &Var0);
		if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			if (!unk_0xAB6A270F84A8781E(Var0.f_1) && !unk_0xAB6A270F84A8781E(&(Global_1710057.f_47)))
			{
				if (unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), &(Global_1710057.f_47), Var0.f_1, 3))
				{
					fVar33 = 0.96f;
					uVar34 = unk_0x51FB94D5F3D17E35(Global_1710057.f_1);
					if (unk_0xEEC203A73BC92E7E(uVar34))
					{
						if (unk_0x0BC8768247440B3A(iVar34) >= fVar33 || unk_0x0E497F28E1A4E3F6(unk_0x7D2B9E6A64637269(), -1424880317))
						{
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
		}
	}
	return 0;
}

int func_330(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	int iVar34;
	
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		iVar0 = func_198(unk_0x1146A9AE09CE2B14());
		if (iVar0 > -1)
		{
			Var1.f_2 = 14;
			iVar34 = Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_429.f_3;
			if (iVar34 != -1)
			{
				func_688(iVar34, iParam0, Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_429.f_2, &Var1);
				if (!unk_0xAB6A270F84A8781E(Var1.f_1) && !unk_0xAB6A270F84A8781E(&(Global_1710057.f_47)))
				{
					return unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), &(Global_1710057.f_47), Var1.f_1, 3);
				}
			}
		}
	}
	return 0;
}

void func_331(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	int iVar19;
	
	iVar0 = func_198(unk_0x1146A9AE09CE2B14());
	iVar1 = Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_429.f_2;
	bVar2 = false;
	if (func_321(&sVar3))
	{
		bVar2 = true;
	}
	func_643(&(uParam0->f_583), bVar2, 4, 1056964608, 0);
	iVar19 = uParam0->f_746[iVar0];
	if (iVar0 > -1)
	{
		switch (uParam0->f_583.f_8)
		{
			case 0:
				func_642(&(uParam0->f_583), joaat("hei_p_m_bag_var22_arm_s"));
				func_641(&(uParam0->f_583));
				if (bVar2)
				{
					func_640(1);
				}
				else
				{
					func_640(0);
				}
				uParam0->f_583.f_8 = 1;
				break;
			
			case 1:
				if (func_639(&(uParam0->f_583), joaat("hei_p_m_bag_var22_arm_s")))
				{
					uParam0->f_583.f_8 = 2;
				}
				break;
			
			case 2:
				if (unk_0x32E225D6BB070AFA(unk_0x7D2B9E6A64637269()))
				{
					unk_0x7979149EE8FE954D(unk_0x7D2B9E6A64637269(), 0.54f);
				}
				if (iVar1 == 1)
				{
					iVar19 = uParam0->f_912[iVar0 /*15*/][0];
				}
				func_332(&(uParam0->f_583), &(uParam0->f_1528), &(uParam0->f_583.f_9), iVar19, unk_0xDD0E57E73E5C4BF6(), -1, iVar0, 0, joaat("hei_p_m_bag_var22_arm_s"), 2);
				break;
		}
		if (unk_0x234B68AC2E35ED5A(uParam0->f_583, 1) || unk_0x234B68AC2E35ED5A(uParam0->f_583, 15))
		{
			unk_0xAA87C426DC96454A(unk_0x7D2B9E6A64637269());
			uParam0->f_583.f_8 = 3;
			func_328(&(uParam0->f_523), 11);
		}
	}
	else
	{
		func_328(&(uParam0->f_523), 11);
	}
}

void func_332(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	var uVar3;
	var uVar4;
	struct<2> Var5;
	struct<3> Var7;
	struct<3> Var10;
	struct<12> Var13;
	float fVar27;
	var uVar28;
	int iVar29;
	int iVar30;
	
	unk_0x366E7F593105797F(0, 1, 1);
	unk_0x366E7F593105797F(0, 2, 1);
	unk_0x366E7F593105797F(0, 26, 1);
	unk_0x366E7F593105797F(0, 47, 1);
	iVar0 = unk_0x7D2B9E6A64637269();
	bVar1 = unk_0x443E2CA72E118E64();
	uVar3 = func_638();
	uVar4 = func_637();
	if (unk_0x234B68AC2E35ED5A(*uParam0, 8))
	{
		Var7 = { func_636() };
		Var10 = { unk_0x9E695CE384C77EF0(iParam3, Var7) };
	}
	else
	{
		Var7 = { func_635() };
		Var10 = { unk_0x9E695CE384C77EF0(iParam3, Var7) };
	}
	switch (uParam0->f_2)
	{
		case 0:
			func_641(uParam0);
			if (bParam7)
			{
				if (!unk_0x234B68AC2E35ED5A(*uParam0, 19))
				{
					uParam0->f_7 = 0;
					Var5 = { func_633(uParam0, -1) };
					uParam0->f_14 = Var5;
				}
			}
			else if (!unk_0x234B68AC2E35ED5A(*uParam0, 5))
			{
				Var5 = { func_633(uParam0, -1) };
				uParam0->f_14 = Var5;
			}
			unk_0xC664C0067EEAB8D1(uParam0, 5);
			unk_0xC664C0067EEAB8D1(uParam0, 19);
			func_632(uParam0, iParam4);
			uParam0->f_2 = 1;
			break;
		
		case 1:
			if ((func_628(uParam0, uParam1, iVar0, bVar1, 1) && func_627(uParam0, uParam1, iVar0, bVar1, 1, bParam7, iParam8)) && func_625(uParam0, uParam1, iParam3, iVar0, bVar1, unk_0xD6E677FAD7521410(iParam3, 1), unk_0x4BB6BF4A85268A22(iParam3, 2) + Vector(0f, 0f, 0f)))
			{
				uParam0->f_2 = 2;
			}
			break;
		
		case 2:
			fVar2 = unk_0xA8D713A937F31250(iParam3);
			Var13.f_6 = -1082130432;
			Var13.f_9 = -1082130432;
			if (!bParam7)
			{
				Var13.f_10 = "No_Bag";
				Var13.f_11 = 1;
			}
			if (unk_0x234B68AC2E35ED5A(*uParam0, 8))
			{
				Var13 = 1328920460;
				unk_0x5A375779AFEF3491(iVar0, "Heist3_minigame_drill_vault", &Var13, Var10, 0f, 0f, fVar2, 2, 0.5f, 0, uVar4, 4);
			}
			else
			{
				Var13 = -1853844820;
				unk_0x5A375779AFEF3491(iVar0, "Heist3_minigame_drill_vault", &Var13, Var10, 0f, 0f, fVar2, 2, 0.5f, 0, uVar3, 4);
			}
			unk_0xA2C015B68CE01357(iVar0, true);
			unk_0x9FF2677053B4F2A9(iVar0, 1);
			if (unk_0x32E225D6BB070AFA(iVar0))
			{
				unk_0xFA03406E21D86D40(iVar0, 1);
				func_624(&(uParam0->f_5));
				unk_0xE37EB80DFB0D31FB(iVar0, 0, 1);
				uParam0->f_5 = unk_0x88A92D91AB021F3F(Var10, 0f, 0f, fVar2, 2, 1, 0, 1065353216, 0, 1065353216);
				if (bParam7)
				{
					unk_0xA2C015B68CE01357(unk_0xBD11ACD80727BD31((*uParam1)[1]), true);
					if (unk_0x234B68AC2E35ED5A(*uParam0, 8))
					{
						unk_0x6ACFF9B807C63BBA(unk_0xBD11ACD80727BD31((*uParam1)[1]), uParam0->f_5, uVar4, "bag_intro", 1000f, -1.5f, 265);
						unk_0x5D66B6490FC7E937(uParam0->f_5, uVar4, "intro_cam");
					}
					else
					{
						unk_0x6ACFF9B807C63BBA(unk_0xBD11ACD80727BD31((*uParam1)[1]), uParam0->f_5, uVar3, "bag_intro", 1000f, -1.5f, 265);
						unk_0x5D66B6490FC7E937(uParam0->f_5, uVar3, "intro_cam");
					}
				}
				else if (unk_0x234B68AC2E35ED5A(*uParam0, 8))
				{
					unk_0x5D66B6490FC7E937(uParam0->f_5, uVar4, "intro_nobag_cam");
				}
				else
				{
					unk_0x5D66B6490FC7E937(uParam0->f_5, uVar3, "intro_nobag_cam");
				}
				unk_0x8E5F00DE1F5A879B(uParam0->f_5);
				unk_0x20F6F12F2945E30E(uParam0->f_5);
				if (bParam7)
				{
					if (!unk_0xDC89C3FDCADCA32F(unk_0xBD11ACD80727BD31((*uParam1)[1])))
					{
						func_623();
						unk_0x4603196EEEA2355C(unk_0xBD11ACD80727BD31((*uParam1)[1]), true, 0);
					}
				}
				unk_0x4603196EEEA2355C(unk_0xBD11ACD80727BD31((*uParam1)[0]), false, 0);
				uParam0->f_2 = 3;
			}
			break;
		
		case 3:
			if (!((unk_0x6C2F471E0CF8D4CF() && unk_0x70729B766882A4DF()) && unk_0x123480158F10FA67()))
			{
				unk_0xEFD424FDD55A6EC7(15);
			}
			unk_0xAF98B1BA240CE3DB();
			unk_0xD8A14DD983454D11();
			unk_0xAA464864BA733E26(unk_0xD6E677FAD7521410(iVar0, 1), 3f, 1);
			unk_0x2FF622571073AA69(iVar0, joaat("weapon_unarmed"), 1);
			unk_0x347C46AF4CDBDFF9(iVar0, 0, 0, 1, 0);
			if (bParam7)
			{
				func_623();
			}
			uParam0->f_2 = 4;
			break;
		
		case 4:
			unk_0xAF98B1BA240CE3DB();
			unk_0xD8A14DD983454D11();
			if (bParam7)
			{
				if (unk_0xEEC203A73BC92E7E(unk_0x51FB94D5F3D17E35(uParam0->f_5)))
				{
					if (!unk_0xDC89C3FDCADCA32F(unk_0xBD11ACD80727BD31((*uParam1)[1])) && unk_0x9038A2103B9BFD38(iVar0))
					{
						unk_0x4603196EEEA2355C(unk_0xBD11ACD80727BD31((*uParam1)[1]), true, 0);
					}
					if (unk_0x0BC8768247440B3A(unk_0x51FB94D5F3D17E35(uParam0->f_5)) >= 0.36f)
					{
						unk_0x4603196EEEA2355C(unk_0xBD11ACD80727BD31((*uParam1)[0]), true, 0);
					}
				}
			}
			else if (unk_0xEEC203A73BC92E7E(unk_0x51FB94D5F3D17E35(uParam0->f_5)))
			{
				if (unk_0x0BC8768247440B3A(unk_0x51FB94D5F3D17E35(uParam0->f_5)) >= 0.16f)
				{
					unk_0x4603196EEEA2355C(unk_0xBD11ACD80727BD31((*uParam1)[0]), true, 0);
				}
			}
			if (unk_0x32E225D6BB070AFA(iVar0) && unk_0x9982FE3B4C236AFB(iVar0, "IntroFinished"))
			{
				if (unk_0x32E225D6BB070AFA(iVar0) && unk_0x9AC63BDB9DDAB5FD(iVar0))
				{
					if (unk_0x9D6719338AAFFE00(iVar0, "Cutting"))
					{
						if (bParam7)
						{
							if (!unk_0xDC89C3FDCADCA32F(unk_0xBD11ACD80727BD31((*uParam1)[1])))
							{
								func_623();
								unk_0x4603196EEEA2355C(unk_0xBD11ACD80727BD31((*uParam1)[1]), true, 0);
							}
						}
						unk_0x4603196EEEA2355C(unk_0xBD11ACD80727BD31((*uParam1)[0]), true, 0);
						unk_0x3DF4E172AD7D16AF(uParam0->f_5);
						uParam0->f_5 = -1;
						if (bParam7)
						{
							func_622(uParam0, uParam1, iVar0);
						}
						func_621(uParam0, iVar0);
						if (unk_0x234B68AC2E35ED5A(*uParam0, 8))
						{
							unk_0x73AF76B5B436689C("MC_LASER_3", 1);
						}
						else
						{
							unk_0x73AF76B5B436689C("MC_DRILL_3", 1);
						}
						uParam0->f_3 = unk_0x5AD02BBC63E31E46();
						if (unk_0x234B68AC2E35ED5A(*uParam0, 8))
						{
							unk_0xE2D24A37AFCF27BF(-1, "laser_power_up", iVar0, "dlc_ch_heist_finale_laser_drill_sounds", 1, 20);
							if (uParam0->f_3 == -1)
							{
								unk_0xE2D24A37AFCF27BF(uParam0->f_3, "laser_drill", iVar0, "dlc_ch_heist_finale_laser_drill_sounds", 1, 0);
								unk_0xB76EE71E771BDAA1(uParam0->f_3, "DrillState", 0f);
								unk_0xB76EE71E771BDAA1(uParam0->f_3, "DrillHeat", 0f);
							}
						}
						uParam0->f_2 = 5;
					}
				}
			}
			unk_0xEFD424FDD55A6EC7(15);
			break;
		
		case 5:
			func_620(uParam0);
			unk_0xC664C0067EEAB8D1(uParam0, 0);
			Var5 = { func_633(uParam0, -1) };
			uParam0->f_33 = uParam0->f_12;
			uParam0->f_13 = (uParam0->f_13 - ((0.4f + (0.2f * (1f - uParam0->f_12))) * SYSTEM::TIMESTEP()));
			uParam0->f_12 = (uParam0->f_12 * (1f + (uParam0->f_13 * 0.5f)));
			uParam0->f_25 = (uParam0->f_25 + ((uParam0->f_10 - uParam0->f_25) * 0.5f));
			func_619(uParam0, Var5);
			if (unk_0x32E225D6BB070AFA(iVar0))
			{
				fVar27 = (uParam0->f_22 + uParam0->f_23);
				if (fVar27 > 0.9999f)
				{
					fVar27 = 0.9999f;
				}
				unk_0x3AB1EF8B99970B6D(iVar0, "z_axis", fVar27);
				unk_0x3AB1EF8B99970B6D(iVar0, "drill_force", (1f - uParam0->f_24));
			}
			if (unk_0xB7D6400C89373777((*uParam1)[3]))
			{
				uVar28 = unk_0xBD11ACD80727BD31((*uParam1)[3]);
				if (uParam0->f_14 > 0.08f)
				{
					unk_0x4603196EEEA2355C(uVar28, true, 0);
				}
			}
			func_616(uParam0, uParam1, iParam6, iParam4);
			if (unk_0x234B68AC2E35ED5A(*uParam0, 8))
			{
				if (uParam0->f_17 > 1f)
				{
					uParam0->f_17 = 1f;
				}
			}
			else if (uParam0->f_17 > 0.98f)
			{
				uParam0->f_17 = 0.98f;
			}
			if (unk_0x234B68AC2E35ED5A(*uParam0, 8))
			{
				func_615(uParam0, Var5);
			}
			else
			{
				func_614(uParam0, Var5);
			}
			func_611(uParam0);
			func_610(uParam0);
			func_608(uParam0);
			func_607(uParam0, Var5);
			func_606(uParam0, uParam1);
			if (uParam0->f_14 >= Var5.f_1 && uParam0->f_7 == uParam0->f_37)
			{
				if (!unk_0x234B68AC2E35ED5A(*uParam0, 13))
				{
					uParam0->f_14 = 0.99f;
					if ((unk_0xDFB7BFA6482FEE1E() - uParam0->f_6) > 500)
					{
						unk_0x191DDA30577F440A(uParam0, 13);
					}
				}
			}
			else
			{
				uParam0->f_6 = unk_0xDFB7BFA6482FEE1E();
			}
			if (uParam0->f_13 > 1f)
			{
				uParam0->f_13 = 1f;
			}
			if (uParam0->f_13 < 0f)
			{
				uParam0->f_13 = 0f;
			}
			if (uParam0->f_12 > 1f)
			{
				uParam0->f_12 = 1f;
			}
			if (uParam0->f_25 > uParam0->f_14)
			{
				uParam0->f_25 = uParam0->f_14;
			}
			if (uParam0->f_25 > 1f)
			{
				uParam0->f_25 = 1f;
			}
			if (uParam0->f_14 > 1f)
			{
				uParam0->f_14 = 1f;
			}
			if (uParam0->f_16 < 0f)
			{
				uParam0->f_16 = 0f;
			}
			if (uParam0->f_19 > 1f)
			{
				uParam0->f_19 = 1f;
			}
			func_605(uParam0);
			if (!unk_0x234B68AC2E35ED5A(*uParam0, 8))
			{
				func_604(uParam1, uParam0->f_33);
			}
			func_603(uParam0, iVar0);
			if (unk_0x234B68AC2E35ED5A(*uParam0, 8))
			{
				unk_0x73AF76B5B436689C("MC_LASER_3", 1);
			}
			else
			{
				unk_0x73AF76B5B436689C("MC_DRILL_3", 1);
			}
			if (unk_0x234B68AC2E35ED5A(*uParam0, 8))
			{
				func_602(uParam0);
			}
			else
			{
				func_600(uParam0);
			}
			if (func_599(uParam0, iVar0))
			{
				iVar29 = func_596(iParam4);
				if (!unk_0x234B68AC2E35ED5A(Global_1703318[iVar29], 2))
				{
					if (unk_0x234B68AC2E35ED5A(*uParam0, 8))
					{
						func_595(iVar29, iParam6, (*uParam1)[0], 0, 1);
					}
					else
					{
						func_595(iVar29, iParam6, (*uParam1)[0], 0, 0);
					}
				}
				func_592(uParam0, uParam1, uParam2, iParam3, iVar0, Var10, bParam7);
				if (unk_0x234B68AC2E35ED5A(*uParam0, 8))
				{
					unk_0xE2D24A37AFCF27BF(-1, "laser_power_down", iVar0, "dlc_ch_heist_finale_laser_drill_sounds", 1, 20);
				}
				else if (!unk_0x964C4D363AF812CB(uParam0->f_3))
				{
					unk_0x791B4C3811D53DFA(uParam0->f_3);
				}
				if (bParam7)
				{
					func_590(iVar0, iParam9);
					unk_0x191DDA30577F440A(uParam0, 14);
				}
				else
				{
					unk_0x191DDA30577F440A(uParam0, 14);
				}
				uParam0->f_2 = 7;
				return;
			}
			if (func_589(uParam0))
			{
				if (unk_0x32E225D6BB070AFA(iVar0) && unk_0x9AC63BDB9DDAB5FD(iVar0))
				{
					if (unk_0x9D6719338AAFFE00(iVar0, "LeftFailure"))
					{
						if (uParam0->f_3 != -1)
						{
							unk_0xB76EE71E771BDAA1(uParam0->f_3, "DrillState", 0f);
						}
						unk_0x64F37BCA46003D43(iVar0, "Cutting");
						if (unk_0x234B68AC2E35ED5A(*uParam0, 8))
						{
							uParam0->f_4 = unk_0x5AD02BBC63E31E46();
							unk_0xE2D24A37AFCF27BF(uParam0->f_4, "laser_overheat", iVar0, "dlc_ch_heist_finale_laser_drill_sounds", 1, 20);
						}
						else
						{
							unk_0xE2D24A37AFCF27BF(-1, "Drill_Jam", iVar0, "DLC_HEIST_FLEECA_SOUNDSET", 1, 20);
							if (!unk_0x964C4D363AF812CB(uParam0->f_3))
							{
								unk_0x791B4C3811D53DFA(uParam0->f_3);
							}
						}
						unk_0x191DDA30577F440A(uParam0, 12);
						uParam0->f_33 = 1f;
						if (bParam7)
						{
							func_588(uParam0, uParam1);
						}
						uParam0->f_2 = 99;
						return;
					}
				}
			}
			if (func_563(uParam0, iVar0, iParam4))
			{
				iVar30 = func_596(iParam4);
				if (!unk_0x234B68AC2E35ED5A(Global_1703318[iVar30], 2))
				{
					if (unk_0x234B68AC2E35ED5A(*uParam0, 8))
					{
						func_595(iVar30, iParam6, (*uParam1)[0], 0, 1);
					}
					else
					{
						func_595(iVar30, iParam6, (*uParam1)[0], 0, 0);
					}
				}
				if (unk_0x234B68AC2E35ED5A(*uParam0, 16) && iParam5 <= 1)
				{
					func_562(uParam0, uParam1, uParam2, iVar0, iParam4, iParam9, bParam7);
					uParam0->f_2 = 8;
					return;
				}
				else
				{
					func_592(uParam0, uParam1, uParam2, iParam3, iVar0, Var10, bParam7);
					if (unk_0x234B68AC2E35ED5A(*uParam0, 8))
					{
						if (uParam0->f_3 != -1)
						{
							unk_0x791B4C3811D53DFA(uParam0->f_3);
							unk_0xBAB6F7501A822416(uParam0->f_3);
							uParam0->f_3 = -1;
						}
						unk_0xE2D24A37AFCF27BF(-1, "laser_power_down", iVar0, "dlc_ch_heist_finale_laser_drill_sounds", 1, 20);
					}
					uParam0->f_2 = 7;
					return;
				}
			}
			if (uParam0->f_19 >= 0.99f)
			{
				func_561(uParam0);
				return;
			}
			if (!unk_0x32E225D6BB070AFA(iVar0))
			{
				func_560(uParam1);
				*uParam2 = unk_0xDFB7BFA6482FEE1E();
				uParam0->f_2 = 100;
				return;
			}
			break;
		
		case 7:
			unk_0xAF98B1BA240CE3DB();
			unk_0xD8A14DD983454D11();
			if (!((unk_0x6C2F471E0CF8D4CF() && unk_0x70729B766882A4DF()) && unk_0x123480158F10FA67()))
			{
				unk_0xEFD424FDD55A6EC7(15);
			}
			if (unk_0x0E8572B08CEB6A11(uParam0->f_39))
			{
				unk_0xFE1DEC9C5734D0C0(uParam0->f_39, 0);
				unk_0x09F9466B03D29D2D(0, 0, 3000, 1, 0, 0);
			}
			func_559(uParam0, iParam4);
			uParam0->f_33 = (uParam0->f_33 * 0.75f);
			if (uParam0->f_33 > 1f)
			{
				uParam0->f_33 = 1f;
			}
			else if (uParam0->f_33 < 0f)
			{
				uParam0->f_33 = 0f;
			}
			if (!unk_0x234B68AC2E35ED5A(*uParam0, 8))
			{
				func_604(uParam1, uParam0->f_33);
				if (uParam0->f_3 != -1)
				{
					unk_0x791B4C3811D53DFA(uParam0->f_3);
					unk_0xBAB6F7501A822416(uParam0->f_3);
					uParam0->f_3 = -1;
				}
			}
			else
			{
				func_603(uParam0, iVar0);
			}
			if (unk_0xEEC203A73BC92E7E(unk_0x51FB94D5F3D17E35(uParam0->f_5)))
			{
				if (unk_0x0BC8768247440B3A(unk_0x51FB94D5F3D17E35(uParam0->f_5)) >= 0.38f)
				{
					func_560(uParam1);
				}
			}
			if (bParam7)
			{
				func_590(iVar0, iParam9);
			}
			if (bParam7)
			{
				if ((unk_0xEEC203A73BC92E7E(unk_0x51FB94D5F3D17E35(uParam0->f_5)) && unk_0x0BC8768247440B3A(unk_0x51FB94D5F3D17E35(uParam0->f_5)) >= 0.8f) || func_558(*uParam2, 11000))
				{
					func_337(iVar0, iParam9);
				}
			}
			if ((unk_0xEEC203A73BC92E7E(unk_0x51FB94D5F3D17E35(uParam0->f_5)) && unk_0x0BC8768247440B3A(unk_0x51FB94D5F3D17E35(uParam0->f_5)) >= 0.9f) || func_558(*uParam2, 12000))
			{
				if (bParam7)
				{
					func_337(iVar0, iParam9);
				}
				unk_0x97D6BA3D63E00279();
				unk_0xDF23DCD7A3E1B7A5(0f);
				unk_0x3A13FD2813C8251F(0f, 1065353216);
				*uParam2 = unk_0xDFB7BFA6482FEE1E();
				uParam0->f_2 = 8;
			}
			break;
		
		case 8:
			if (unk_0x234B68AC2E35ED5A(*uParam0, 14))
			{
				unk_0x191DDA30577F440A(uParam0, 15);
				func_336(uParam0);
			}
			else
			{
				unk_0x191DDA30577F440A(uParam0, 1);
			}
			if (unk_0x32E225D6BB070AFA(iVar0))
			{
				unk_0xFA03406E21D86D40(iVar0, 0);
			}
			unk_0xC9E2A193C0DDFC43(uParam0->f_40, "RESET");
			func_559(uParam0, iParam4);
			func_560(uParam1);
			func_334(uParam1);
			if (unk_0x0E8572B08CEB6A11(uParam0->f_39))
			{
				unk_0xFE1DEC9C5734D0C0(uParam0->f_39, 0);
				unk_0x09F9466B03D29D2D(0, 0, 3000, 1, 0, 0);
			}
			unk_0x97D6BA3D63E00279();
			func_640(2);
			if (uParam0->f_3 != -1)
			{
				unk_0x791B4C3811D53DFA(uParam0->f_3);
				unk_0xBAB6F7501A822416(uParam0->f_3);
				uParam0->f_3 = -1;
			}
			if (uParam0->f_4 != -1)
			{
				if (!unk_0x964C4D363AF812CB(uParam0->f_4))
				{
					unk_0x791B4C3811D53DFA(uParam0->f_4);
				}
				unk_0xBAB6F7501A822416(uParam0->f_4);
				uParam0->f_4 = -1;
			}
			if (unk_0x234B68AC2E35ED5A(*uParam0, 8))
			{
				unk_0x315DA2F7337A8638("DLC_HEIST3\HEIST_FINALE_LASER_DRILL");
			}
			else
			{
				unk_0x315DA2F7337A8638("DLC_MPHEIST\HEIST_FLEECA_DRILL");
				unk_0x315DA2F7337A8638("DLC_MPHEIST\HEIST_FLEECA_DRILL_2");
			}
			unk_0x3D9BC07C93913E04(&(uParam0->f_40));
			func_333(uParam0, iParam4);
			func_624(&(uParam0->f_5));
			unk_0xA2C015B68CE01357(iVar0, false);
			unk_0x16D66F11FE644901(iVar0);
			unk_0xE37EB80DFB0D31FB(iVar0, 0, 0);
			if (unk_0x234B68AC2E35ED5A(*uParam0, 1))
			{
				unk_0xFBF1F1BE9D437D22(iVar0, unk_0x9E695CE384C77EF0(iVar0, 4f, 0f, 0f), 0);
			}
			if (uParam0->f_5 != -1)
			{
				if (unk_0xEEC203A73BC92E7E(unk_0x51FB94D5F3D17E35(uParam0->f_5)))
				{
					unk_0x3DF4E172AD7D16AF(uParam0->f_5);
				}
				uParam0->f_5 = -1;
			}
			uParam0->f_2 = 0;
			break;
		
		case 99:
			func_605(uParam0);
			uParam0->f_22 = 0f;
			func_620(uParam0);
			uParam0->f_25 = (uParam0->f_25 + ((uParam0->f_10 - uParam0->f_25) * 0.5f));
			if (uParam0->f_25 > uParam0->f_14)
			{
				uParam0->f_25 = uParam0->f_14;
			}
			if (uParam0->f_4 != -1)
			{
				if (unk_0x234B68AC2E35ED5A(*uParam0, 8))
				{
					unk_0xB76EE71E771BDAA1(uParam0->f_4, "DrillHeat", uParam0->f_19);
				}
			}
			if (unk_0x32E225D6BB070AFA(iVar0))
			{
				unk_0x3AB1EF8B99970B6D(iVar0, "z_axis", (uParam0->f_22 + uParam0->f_23));
			}
			if (unk_0x234B68AC2E35ED5A(*uParam0, 8))
			{
				func_602(uParam0);
				unk_0x73AF76B5B436689C("MC_LASER_4", 1);
			}
			else
			{
				func_600(uParam0);
				unk_0x73AF76B5B436689C("MC_DRILL_4", 1);
			}
			func_611(uParam0);
			func_559(uParam0, iParam4);
			uParam0->f_33 = (uParam0->f_33 * 0.85f);
			if (!unk_0x234B68AC2E35ED5A(*uParam0, 8))
			{
				func_604(uParam1, uParam0->f_33);
			}
			if (unk_0x32E225D6BB070AFA(iVar0) || func_558(*uParam2, 6000))
			{
				if (unk_0x9982FE3B4C236AFB(iVar0, "LeftFailFinish"))
				{
					if (unk_0x32E225D6BB070AFA(iVar0) && unk_0x9AC63BDB9DDAB5FD(iVar0))
					{
						if (unk_0x9D6719338AAFFE00(iVar0, "Cutting"))
						{
							unk_0xC664C0067EEAB8D1(uParam0, 2);
							if (bParam7)
							{
								func_622(uParam0, uParam1, iVar0);
							}
							uParam0->f_2 = 5;
						}
					}
				}
			}
			break;
		
		case 100:
			unk_0xAF98B1BA240CE3DB();
			unk_0xD8A14DD983454D11();
			if (bParam7)
			{
				func_337(iVar0, iParam9);
			}
			*uParam2 = unk_0xDFB7BFA6482FEE1E();
			uParam0->f_2 = 8;
			break;
	}
}

void func_333(var uParam0, int iParam1)
{
	if (unk_0x3640D836D145B814())
	{
		if (unk_0x234B68AC2E35ED5A(Global_1703318[iParam1], 4))
		{
			unk_0xBD9F36815B9331DB();
			unk_0xC664C0067EEAB8D1(&(Global_1703318[iParam1]), 4);
		}
	}
}

void func_334(var uParam0)
{
	var uVar0;
	
	if (unk_0xB7D6400C89373777((*uParam0)[1]))
	{
		uVar0 = unk_0xBD11ACD80727BD31((*uParam0)[1]);
		if (unk_0xB364346471C3B028((*uParam0)[1]))
		{
			unk_0x04F4D55F2C0C756D(&uVar0);
		}
		else
		{
			func_335(uParam0[1]);
		}
		if (func_86(unk_0x1146A9AE09CE2B14()))
		{
			unk_0x3402985954953C67((unk_0x5E85B9A5E6984D7D(0, 1) - 1));
		}
		else
		{
			unk_0x71E63FA8638D90D9((unk_0x5E85B9A5E6984D7D(0, 0) - 1));
		}
	}
}

void func_335(var uParam0)
{
	var uVar0;
	
	if (unk_0x159BC3DDA80D71AC(*uParam0))
	{
		uVar0 = unk_0xD93F965CFAC1D06A(*uParam0);
		unk_0x75E3AAA7D01DEDC8(&uVar0);
	}
}

void func_336(var uParam0)
{
	unk_0x191DDA30577F440A(uParam0, 5);
}

void func_337(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 2;
	if (func_557(1))
	{
		iVar0 = iParam1;
	}
	func_338(iParam0, iVar0, -1);
}

void func_338(int iParam0, int iParam1, int iParam2)
{
	struct<37> Var0;
	int iVar50;
	int iVar51;
	
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 9;
	Var0.f_36 = 9;
	Var0.f_46 = 3;
	iVar50 = -1;
	if (iParam2 == -1)
	{
		iParam2 = unk_0xCB567ED25393C1DF(iParam0);
	}
	iVar51 = 0;
	while (iVar51 < 12)
	{
		Var0[iVar51] = -1;
		Var0.f_13[iVar51] = -1;
		iVar51++;
	}
	iVar51 = 0;
	while (iVar51 < Var0.f_26)
	{
		Var0.f_26[iVar51] = -1;
		Var0.f_36[iVar51] = -1;
		iVar51++;
	}
	iVar51 = 0;
	while (iVar51 < Var0.f_46)
	{
		Var0.f_46[iVar51] = -1;
		iVar51++;
	}
	if (func_555(iParam0, &Var0, iParam1, &iVar50))
	{
		if ((iParam1 == 1 || iParam1 == 4) || iParam1 == 3)
		{
			func_430(iParam0);
			func_414(iParam0, &Var0, iParam2);
		}
		if (iParam1 == 11)
		{
			if (iVar50 != -1)
			{
				if (func_413(iVar50) == 22)
				{
					Var0.f_26[2] = -1;
				}
				else if (func_413(iVar50) == 8)
				{
					Var0.f_26[1] = -1;
					Var0.f_26[2] = -1;
				}
				else
				{
					Var0.f_26[1] = -1;
					Var0.f_26[2] = -1;
					Var0.f_26[0] = -1;
				}
				if (unk_0x6471F4759775FCA4(iParam0) == joaat("mp_f_freemode_01"))
				{
					if (func_339(unk_0x6471F4759775FCA4(iParam0), 7, func_340(iParam0, 7, -1), -1))
					{
						Var0[7] = 0;
						Var0.f_13[7] = 0;
					}
				}
			}
			func_414(iParam0, &Var0, iParam2);
		}
		else if (iParam1 == 3)
		{
			unk_0xFBC0D0806444F2EF(unk_0xCB567ED25393C1DF(iParam0), 100f);
		}
		iVar51 = 0;
		while (iVar51 < 12)
		{
			if (Var0[iVar51] != -1)
			{
				unk_0x4170FE884DF7426D(iParam0, iVar51, Var0[iVar51], Var0.f_13[iVar51], 0);
			}
			iVar51++;
		}
		iVar51 = 0;
		while (iVar51 < Var0.f_26)
		{
			if (Var0.f_26[iVar51] != -1 && Var0.f_26[iVar51] != 255)
			{
				unk_0xC8749D706BBF16E1(iParam0, iVar51, Var0.f_26[iVar51], Var0.f_36[iVar51], true);
			}
			iVar51++;
		}
	}
}

int func_339(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_73(iParam0, iParam2, 14, 3);
						}
						if (unk_0x01758128AAB0BA8F(iParam3, joaat("EAR_PIECE"), 1) || unk_0x01758128AAB0BA8F(iParam3, joaat("EARRING"), 1))
						{
							return 1;
						}
					}
					break;
				
				case 7:
					if (iParam2 >= 92)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_73(iParam0, iParam2, 7, 3);
						}
						if (unk_0x01758128AAB0BA8F(iParam3, joaat("EARRING"), 0))
						{
							return 1;
						}
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 7:
					if (iParam2 >= 1 && iParam2 <= 12)
					{
						return 1;
					}
					if (iParam2 >= 55)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_73(iParam0, iParam2, 7, 4);
						}
						if (unk_0x01758128AAB0BA8F(iParam3, joaat("EARRING"), 0))
						{
							return 1;
						}
					}
					break;
				
				case 14:
					if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_73(iParam0, iParam2, 14, 4);
						}
						if (unk_0x01758128AAB0BA8F(iParam3, joaat("EAR_PIECE"), 1) || unk_0x01758128AAB0BA8F(iParam3, joaat("EARRING"), 1))
						{
							return 1;
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_340(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_346(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_346(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_341(iParam0, iParam2);
			}
		}
		else
		{
			return func_77(iParam0, iParam1);
		}
	}
	return -99;
}

int func_341(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xECEC7528A52B4EE8(iParam0))
	{
		return -99;
	}
	iVar0 = unk_0x228A4ED518554B3F(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_345(iParam1);
	}
	iVar1 = unk_0x64F7E3FF8F40315D(iParam0, iParam1);
	return func_342(iParam0, iVar0, iVar1, iParam1);
}

int func_342(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_345(iParam3);
	}
	iVar0 = unk_0x6471F4759775FCA4(iParam0);
	iVar1 = unk_0x6F6F7115068877E4(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_344(unk_0x6471F4759775FCA4(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_344(unk_0x6471F4759775FCA4(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0xED24814ADAB539B1(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0x1A46D74ECB10E7F8(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_343(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_345(iParam3);
}

int func_343(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6471F4759775FCA4(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_344(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x44C4C2E7417F5E29(iParam3, 8, -1, 1, -1, -1);
		iVar0 = unk_0xBCEF29BBAC16D038(iParam1);
		if (iVar0 != -1)
		{
			return (func_76(iParam0) + iVar0);
		}
	}
	else
	{
		unk_0x44C4C2E7417F5E29(iParam3, 8, -1, 0, -1, func_75(iParam2));
		iVar1 = unk_0x5BBDCA451CB08E45(iParam1);
		if (iVar1 != -1)
		{
			return (func_74(iParam0, func_75(iParam2)) + iVar1);
		}
	}
	return -99;
}

int func_345(int iParam0)
{
	switch (iParam0)
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
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

int func_346(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar25;
	int iVar35;
	var uVar36;
	int iVar46;
	int iVar47;
	var uVar48;
	var uVar49;
	int iVar50;
	struct<5> Var51;
	var uVar68;
	
	if (unk_0xECEC7528A52B4EE8(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x6471F4759775FCA4(iParam0);
	Global_77059[1 /*14*/] = { func_362(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2621444;
	uVar3 = Global_2621445;
	if (!unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { func_358(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				
				case 1:
					iVar4 = 4;
					break;
				
				case 2:
					iVar4 = 6;
					break;
				
				case 3:
					iVar4 = 7;
					break;
				
				case 4:
					iVar4 = 8;
					break;
				
				case 5:
					iVar4 = 11;
					break;
				
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_346(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2621444 = uVar2;
					Global_2621445 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar25 = { func_355(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_346(iParam0, 14, uVar25[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_77059[2 /*14*/] = { func_362(iVar0, 14, iVar6, -1) };
									if (Global_77059[2 /*14*/].f_12 == iVar5)
									{
										if (func_346(iParam0, 14, iVar6))
										{
											if (!func_350(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_77059[2 /*14*/])))
											{
												Global_2621444 = uVar2;
												Global_2621445 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = func_77(iParam0, iVar4);
						Global_77059[2 /*14*/] = { func_362(iVar0, iVar4, iVar1, -1) };
						if (!func_350(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_77059[2 /*14*/])))
						{
							Global_2621444 = uVar2;
							Global_2621445 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if ((uVar8[10] != 0 && uVar8[10] != joaat("0")) && uVar8.f_16)
		{
			if (func_133(1759, Global_77056, 0) != uVar8[10])
			{
				Global_2621444 = uVar2;
				Global_2621445 = uVar3;
				return 0;
			}
		}
		Global_2621444 = uVar2;
		Global_2621445 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar36 = { func_355(iVar0, iParam2) };
		iVar35 = 0;
		while (iVar35 <= 8)
		{
			if (!func_346(iParam0, 14, uVar36[iVar35]))
			{
				return 0;
			}
			iVar35++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0x228A4ED518554B3F(iParam0, Global_77059[1 /*14*/].f_12) == Global_77059[1 /*14*/].f_3 && (unk_0x64F7E3FF8F40315D(iParam0, Global_77059[1 /*14*/].f_12) == Global_77059[1 /*14*/].f_4 || Global_77059[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
		if (((Global_77059[1 /*14*/].f_12 == 0 && unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 6)) && unk_0x01758128AAB0BA8F(Global_2621444, joaat("HELMET"), 1)) && unk_0x9673CDADA8C3A4D1(Global_2621444) > 0)
		{
			iVar50 = unk_0x9673CDADA8C3A4D1(Global_2621444);
			iVar46 = 0;
			while (iVar46 < iVar50)
			{
				unk_0x2C86987E2C1DF572(Global_2621444, iVar46, &iVar47, &uVar48, &uVar49);
				if (iVar47 != 0 && iVar47 != joaat("0"))
				{
					unk_0x71794FDA9361403E(&Var51);
					unk_0x092B9A2C8F9C705E(iVar47, &Var51);
					if (Var51.f_3 == unk_0x228A4ED518554B3F(iParam0, Global_77059[1 /*14*/].f_12) && Var51.f_4 == unk_0x64F7E3FF8F40315D(iParam0, Global_77059[1 /*14*/].f_12))
					{
						return 1;
					}
				}
				iVar46++;
			}
		}
	}
	else
	{
		if (Global_77059[1 /*14*/].f_3 == unk_0x094C1D2DFE050D6E(iParam0, func_75(iParam1)) && Global_77059[1 /*14*/].f_4 == unk_0x288277F22D527487(iParam0, func_75(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_77058++;
			if (Global_77058 == 1)
			{
				if (func_349(iVar0, 11, func_77(iParam0, 11), -1))
				{
					if (func_348(iVar0, 4, iParam2, &uVar68))
					{
						return func_346(iParam0, 4, uVar68);
					}
				}
				else if (func_347(iVar0, 4, iParam2, &uVar68))
				{
					return func_346(iParam0, 4, uVar68);
				}
			}
			Global_77058 = (Global_77058 - 1);
		}
	}
	return 0;
}

int func_347(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_73(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0xBEEBC440559223F7(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0xE5694002E250F2D1(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (!unk_0x01758128AAB0BA8F(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_344(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_348(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_73(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0xBEEBC440559223F7(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0xE5694002E250F2D1(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (unk_0x01758128AAB0BA8F(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_344(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_349(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_73(iParam0, iParam2, 11, 4);
						}
						return unk_0x01758128AAB0BA8F(iParam3, joaat("DRESS"), 0);
					}
					break;
			}
			break;
	}
	return 0;
}

int func_350(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar10;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_355(iParam0, (*uParam4)[13]) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (uVar0[iVar10] == iParam3)
			{
				return 1;
			}
			iVar10++;
		}
	}
	if (func_354(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_353(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_352(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_351(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_353(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_352(iParam0, iParam2, iParam3, -1))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
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
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_351(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_353(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_352(iParam0, iParam2, iParam3, -1))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_351(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_351(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_73(iParam0, iParam2, 14, 3);
						}
						return (unk_0x01758128AAB0BA8F(iParam3, joaat("HAT"), 1) || unk_0x01758128AAB0BA8F(func_73(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_73(iParam0, iParam2, 1, 3);
						}
						return (unk_0x01758128AAB0BA8F(iParam3, joaat("HAT"), 0) || unk_0x01758128AAB0BA8F(func_73(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_73(iParam0, iParam2, 14, 4);
						}
						return (unk_0x01758128AAB0BA8F(iParam3, joaat("HAT"), 1) || unk_0x01758128AAB0BA8F(func_73(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_73(iParam0, iParam2, 1, 4);
						}
						return (unk_0x01758128AAB0BA8F(iParam3, joaat("HAT"), 0) || unk_0x01758128AAB0BA8F(func_73(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_352(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_73(iParam0, iParam2, 1, 3);
					}
					if (unk_0x01758128AAB0BA8F(iParam3, joaat("HAT"), 0) || unk_0x01758128AAB0BA8F(iParam3, joaat("HAIR_SHRINK"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_73(iParam0, iParam2, 1, 4);
					}
					if (unk_0x01758128AAB0BA8F(iParam3, joaat("HAT"), 0) || unk_0x01758128AAB0BA8F(iParam3, joaat("HAIR_SHRINK"), 0))
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

int func_353(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_73(iParam0, iParam2, 14, 3);
					}
					return unk_0x01758128AAB0BA8F(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_73(iParam0, iParam2, 14, 4);
					}
					return unk_0x01758128AAB0BA8F(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_354(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

struct<10> func_355(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_357(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_357(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_357(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_357(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_357(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_357(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_357(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_357(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_357(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_357(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_357(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_356(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_357(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_357(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_357(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_357(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_357(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_357(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_357(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_357(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_357(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_357(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_356(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_357(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_357(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_357(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_357(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_357(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_357(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_357(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_357(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_357(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_357(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_356(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_357(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_357(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_357(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_357(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_357(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_357(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_357(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_357(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_357(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_357(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_357(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_357(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_357(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_357(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_357(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_357(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_357(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_357(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_357(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_357(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_357(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_357(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_357(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_357(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_357(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_357(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_356(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_357(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_357(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_357(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_357(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_357(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_357(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_357(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_357(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_357(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_357(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_357(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_357(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_357(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_357(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_357(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_357(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_357(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_357(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_357(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_357(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_357(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_357(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_357(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_357(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_357(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_356(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_356(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	struct<3> Var16;
	int iVar19;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		unk_0x03178B32FA4F2AC2(iParam2, &Var1);
		if (!unk_0xD1ABD511D9C326A3(Var1))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (unk_0x637C66DB5E571C4D(Var1.f_1, iVar19, &Var16) && Var16.f_2 != -1)
				{
					if ((Var16.x != 0 && Var16.x != -1) && Var16.x != joaat("0"))
					{
						(*iParam0)[Var16.f_2] = func_344(iParam1, Var16.x, 14, iVar0);
					}
					else if (Var16.f_1 != -1)
					{
						(*iParam0)[Var16.f_2] = Var16.f_1;
					}
				}
				iVar19++;
			}
		}
	}
}

void func_357(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<17> func_358(int iParam0, int iParam1)
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_112293.f_9083.f_99.f_58[120])
					{
						func_361(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_361(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_361(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_361(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_361(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_361(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_361(&Var1, -99, -99, Global_112293.f_2361.f_539.f_196[0], Global_112293.f_2361.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_361(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_361(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_361(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_361(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_361(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_361(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_361(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_361(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_361(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_361(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_361(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_361(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_361(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_361(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_361(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_361(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_361(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_361(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_361(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_361(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_361(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_361(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_361(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_361(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_361(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_361(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_361(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_361(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_361(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_361(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_361(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_361(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_361(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_361(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_361(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_361(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_361(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_361(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_361(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_361(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_361(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_361(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_361(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_361(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_361(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_361(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_361(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_359(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_361(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_361(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_361(&Var1, -99, -99, Global_112293.f_2361.f_539.f_196[1], Global_112293.f_2361.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_361(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_361(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_361(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_361(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_361(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_361(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_361(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_361(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_361(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_361(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_361(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_361(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_361(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_361(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_361(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_361(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_361(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_361(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_361(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_361(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_361(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_361(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_361(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_361(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_361(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_361(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_361(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_361(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_361(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_361(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_361(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_361(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_361(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_361(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_361(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_361(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_361(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_361(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_361(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_361(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_361(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_361(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_361(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_361(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_359(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_361(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_361(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_361(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_361(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_361(&Var1, -99, -99, Global_112293.f_2361.f_539.f_196[2], Global_112293.f_2361.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_361(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_361(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_361(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_361(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_361(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_361(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_361(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_361(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_361(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_361(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_361(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_361(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_361(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_361(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_361(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_361(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_361(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_361(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_361(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_361(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_361(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_361(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_361(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_361(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_361(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_361(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_361(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_361(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_361(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_361(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_361(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_361(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_361(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_361(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_361(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_361(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_361(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_361(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_361(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_361(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_361(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_361(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_361(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_359(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_361(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_361(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_361(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_361(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_361(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_361(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_361(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_361(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_361(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_361(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_361(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_361(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_361(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_361(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_361(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_361(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_361(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_361(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_361(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_361(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_361(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_361(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_361(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_361(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_361(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_361(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_359(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_361(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_361(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_361(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_361(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_361(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_361(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_361(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_361(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_361(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_361(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_361(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_361(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_361(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_361(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_361(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_361(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_361(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_361(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_361(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_361(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_361(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_361(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_361(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_361(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_361(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_361(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_361(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_361(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_359(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_359(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<3> Var16;
	struct<2> Var19;
	int iVar36;
	
	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	unk_0xE619DE4F72F76E79(iVar0, 0);
	unk_0x4ECDF1AC3EC9ADF1((iParam2 - iParam3), &Var1);
	if (!unk_0xD1ABD511D9C326A3(Var1))
	{
		iVar36 = 0;
		while (iVar36 < Var1.f_4)
		{
			if (unk_0x04E5165F663D7983(Var1.f_1, iVar36, &Var16))
			{
				if ((Var16.x != 0 && Var16.x != -1) && Var16.x != joaat("0"))
				{
					if (Var16.f_2 == 10)
					{
						unk_0xFE9B2B065B8931FE(&Var19);
						unk_0x3BA50B117757EA3E(Var16.x, &Var19);
						if (Var16.x != Var19.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (Var16.f_2 == 10 && uParam0->f_16)
					{
						(*uParam0)[func_360(Var16.f_2)] = Var16.x;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_360(Var16.f_2)] = func_344(iParam1, Var16.x, func_360(Var16.f_2), iVar0);
					}
				}
				else if (Var16.f_1 != -1)
				{
					(*uParam0)[func_360(Var16.f_2)] = Var16.f_1;
				}
			}
			iVar36++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

int func_360(int iParam0)
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

void func_361(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

struct<14> func_362(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_412();
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		func_396(iParam1, iParam2, iParam3);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		func_363(iParam1, iParam2, iParam3);
	}
	return Global_77059[0 /*14*/];
}

void func_363(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 2:
			func_395(iParam1, iParam2);
			break;
		
		case 11:
			func_394(iParam1, iParam2);
			break;
		
		case 8:
			func_386(iParam1, iParam2);
			break;
		
		case 9:
			func_385(iParam1, iParam2);
			break;
		
		case 3:
			func_384(iParam1, iParam2);
			break;
		
		case 4:
			func_383(iParam1, iParam2);
			break;
		
		case 6:
			func_382(iParam1, iParam2);
			break;
		
		case 1:
			func_381(iParam1, iParam2);
			break;
		
		case 7:
			func_380(iParam1, iParam2);
			break;
		
		case 10:
			func_379(iParam1, iParam2);
			break;
		
		case 14:
			func_378(iParam1, iParam2);
			break;
		
		case 12:
			func_377(iParam1, iParam2);
			break;
		
		case 5:
			func_376(iParam1, iParam2);
			break;
		
		case 0:
			func_374(iParam1, iParam2);
			break;
		
		case 13:
			func_364(iParam1);
			break;
	}
}

void func_364(int iParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	switch (iParam0)
	{
		case 31:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			break;
	}
	func_365(&(Global_77059[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_365(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	var uVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_373(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x15173FB88ABC94F9(sParam3) != unk_0x15173FB88ABC94F9("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0x191DDA30577F440A(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0x191DDA30577F440A(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0x191DDA30577F440A(&(uParam0->f_6), 5);
		}
		unk_0x191DDA30577F440A(&(uParam0->f_6), 1);
		unk_0x191DDA30577F440A(&(uParam0->f_6), 2);
		unk_0x191DDA30577F440A(&(uParam0->f_6), 6);
		if (func_372(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x01758128AAB0BA8F(Global_2621444, joaat("REBREATHER"), 0))
			{
				unk_0x191DDA30577F440A(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_370(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xC664C0067EEAB8D1(&(uParam0->f_6), 2);
			}
			if (!func_370(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x191DDA30577F440A(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_370(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xC664C0067EEAB8D1(&(uParam0->f_6), 2);
			}
			if (!func_370(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x191DDA30577F440A(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_370(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xC664C0067EEAB8D1(&(uParam0->f_6), 2);
			}
			if (!func_370(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x191DDA30577F440A(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0x191DDA30577F440A(&(uParam0->f_6), 0);
		unk_0x191DDA30577F440A(&(uParam0->f_6), 5);
		if (func_369(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0x191DDA30577F440A(&(uParam0->f_6), 1);
		}
		if (func_369(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0x191DDA30577F440A(&(uParam0->f_6), 2);
		}
		if (!func_369(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0x191DDA30577F440A(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0x191DDA30577F440A(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_372(14))
			{
				return;
			}
			uVar0 = func_133(func_368(iParam1, uParam0->f_2), Global_77056, 0);
			if (unk_0x234B68AC2E35ED5A(uVar0, uParam0->f_1))
			{
				unk_0x191DDA30577F440A(&(uParam0->f_6), 1);
			}
			iVar0 = func_133(func_367(iParam1, uParam0->f_2), Global_77056, 0);
			if (unk_0x234B68AC2E35ED5A(iVar0, uParam0->f_1))
			{
				unk_0x191DDA30577F440A(&(uParam0->f_6), 2);
			}
			if (func_366(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_133(iVar1, Global_77056, 0);
				if (!unk_0x234B68AC2E35ED5A(iVar0, uParam0->f_1))
				{
					unk_0x191DDA30577F440A(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0x191DDA30577F440A(&(uParam0->f_6), 1);
			unk_0x191DDA30577F440A(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0x191DDA30577F440A(&(uParam0->f_6), 1);
			unk_0x191DDA30577F440A(&(uParam0->f_6), 2);
		}
	}
}

bool func_366(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 979;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
				
				case 3:
					*uParam2 = 1430;
					break;
				
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 9:
					*uParam2 = 1439;
					break;
				
				case 10:
					*uParam2 = 1441;
					break;
				
				case 1:
					*uParam2 = 1012;
					break;
				
				case 7:
					*uParam2 = 1442;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
				
				case 12:
					*uParam2 = 1031;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
				
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 9:
					*uParam2 = 1440;
					break;
				
				case 7:
					*uParam2 = 1443;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 982;
					break;
				
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 7:
					*uParam2 = 1444;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
				
				case 6:
					*uParam2 = 1008;
					break;
				
				case 8:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 992;
					break;
				
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
				
				case 6:
					*uParam2 = 1009;
					break;
				
				case 8:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 993;
					break;
				
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
				
				case 6:
					*uParam2 = 1010;
					break;
				
				case 8:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 994;
					break;
				
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1003;
					break;
				
				case 6:
					*uParam2 = 1011;
					break;
				
				case 8:
					*uParam2 = 1438;
					break;
				
				case 11:
					*uParam2 = 995;
					break;
				
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1030;
					break;
			}
			break;
	}
	return *uParam2 != 979;
}

int func_367(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 928;
					break;
				
				case 3:
					return 1415;
					break;
				
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 9:
					return 1424;
					break;
				
				case 10:
					return 1426;
					break;
				
				case 1:
					return 960;
					break;
				
				case 7:
					return 1427;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
				
				case 12:
					return 979;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 929;
					break;
				
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 9:
					return 1425;
					break;
				
				case 7:
					return 1428;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 930;
					break;
				
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 7:
					return 1429;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 948;
					break;
				
				case 6:
					return 956;
					break;
				
				case 8:
					return 1420;
					break;
				
				case 11:
					return 940;
					break;
				
				case 14:
					return 972;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 949;
					break;
				
				case 6:
					return 957;
					break;
				
				case 8:
					return 1421;
					break;
				
				case 11:
					return 941;
					break;
				
				case 14:
					return 973;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 950;
					break;
				
				case 6:
					return 958;
					break;
				
				case 8:
					return 1422;
					break;
				
				case 11:
					return 942;
					break;
				
				case 14:
					return 974;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 951;
					break;
				
				case 6:
					return 959;
					break;
				
				case 8:
					return 1423;
					break;
				
				case 11:
					return 943;
					break;
				
				case 14:
					return 975;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 978;
					break;
			}
			break;
	}
	return 936;
}

int func_368(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 876;
					break;
				
				case 3:
					return 1400;
					break;
				
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 9:
					return 1409;
					break;
				
				case 10:
					return 1411;
					break;
				
				case 1:
					return 908;
					break;
				
				case 7:
					return 1412;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
				
				case 12:
					return 927;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 877;
					break;
				
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 9:
					return 1410;
					break;
				
				case 7:
					return 1413;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 878;
					break;
				
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 7:
					return 1414;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 896;
					break;
				
				case 6:
					return 904;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 11:
					return 888;
					break;
				
				case 14:
					return 920;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 897;
					break;
				
				case 6:
					return 905;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 11:
					return 889;
					break;
				
				case 14:
					return 921;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 898;
					break;
				
				case 6:
					return 906;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 890;
					break;
				
				case 14:
					return 922;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 899;
					break;
				
				case 6:
					return 907;
					break;
				
				case 8:
					return 1408;
					break;
				
				case 11:
					return 891;
					break;
				
				case 14:
					return 923;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 926;
					break;
			}
			break;
	}
	return 884;
}

int func_369(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_370(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_77056;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_371(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		uVar3 = func_133(iVar2, iVar0, 0);
		return unk_0x234B68AC2E35ED5A(uVar3, iVar1);
	}
	return 0;
}

bool func_371(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 12074;
	if ((bParam4 && Global_4269693) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
						*uParam2 = 936;
						*uParam3 = 0;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
						*uParam2 = 936;
						*uParam3 = 1;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
						*uParam2 = 936;
						*uParam3 = 2;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
						*uParam2 = 936;
						*uParam3 = 3;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
						*uParam2 = 936;
						*uParam3 = 4;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
						*uParam2 = 936;
						*uParam3 = 5;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
						*uParam2 = 936;
						*uParam3 = 7;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
						*uParam2 = 936;
						*uParam3 = 8;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
						*uParam2 = 936;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4269693)
		{
			iVar0 = unk_0x374867C10614D333(iParam0);
		}
		else
		{
			iVar0 = unk_0x281588E106E4EDA3(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0x374867C10614D333(iParam0);
	}
	else
	{
		iVar0 = unk_0x281588E106E4EDA3(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1761;
					break;
				
				case 1:
					*uParam2 = 1762;
					break;
				
				case 2:
					*uParam2 = 1763;
					break;
				
				case 3:
					*uParam2 = 1764;
					break;
				
				case 4:
					*uParam2 = 1765;
					break;
				
				case 5:
					*uParam2 = 1766;
					break;
				
				case 6:
					*uParam2 = 1773;
					break;
				
				case 7:
					*uParam2 = 1774;
					break;
				
				case 8:
					*uParam2 = 1775;
					break;
				
				case 9:
					*uParam2 = 1776;
					break;
				
				case 10:
					*uParam2 = 1777;
					break;
				
				case 11:
					*uParam2 = 1778;
					break;
				
				case 12:
					*uParam2 = 1779;
					break;
				
				case 13:
					*uParam2 = 1787;
					break;
				
				case 14:
					*uParam2 = 1788;
					break;
				
				case 15:
					*uParam2 = 1889;
					break;
				
				case 16:
					*uParam2 = 1890;
					break;
				
				case 17:
					*uParam2 = 1921;
					break;
				
				case 18:
					*uParam2 = 1935;
					break;
				
				case 19:
					*uParam2 = 1936;
					break;
				
				case 20:
					*uParam2 = 1937;
					break;
				
				case 21:
					*uParam2 = 1938;
					break;
				
				case 22:
					*uParam2 = 1939;
					break;
				
				case 23:
					*uParam2 = 2043;
					break;
				
				case 24:
					*uParam2 = 2044;
					break;
				
				case 25:
					*uParam2 = 2070;
					break;
				
				case 26:
					*uParam2 = 2071;
					break;
				
				case 27:
					*uParam2 = 2072;
					break;
				
				case 28:
					*uParam2 = 2073;
					break;
				
				case 29:
					*uParam2 = 2074;
					break;
				
				case 30:
					*uParam2 = 2075;
					break;
				
				case 31:
					*uParam2 = 2076;
					break;
				
				case 32:
					*uParam2 = 2077;
					break;
				
				case 33:
					*uParam2 = 2078;
					break;
				
				case 34:
					*uParam2 = 2079;
					break;
				
				case 35:
					*uParam2 = 2326;
					break;
				
				case 36:
					*uParam2 = 2327;
					break;
				
				case 37:
					*uParam2 = 2391;
					break;
				
				case 38:
					*uParam2 = 2392;
					break;
				
				case 39:
					*uParam2 = 2393;
					break;
				
				case 40:
					*uParam2 = 2394;
					break;
				
				case 41:
					*uParam2 = 2453;
					break;
				
				case 42:
					*uParam2 = 2454;
					break;
				
				case 43:
					*uParam2 = 2455;
					break;
				
				case 44:
					*uParam2 = 2456;
					break;
				
				case 45:
					*uParam2 = 2457;
					break;
				
				case 46:
					*uParam2 = 2458;
					break;
				
				case 47:
					*uParam2 = 2459;
					break;
				
				case 48:
					*uParam2 = 2460;
					break;
				
				case 49:
					*uParam2 = 2461;
					break;
				
				case 50:
					*uParam2 = 2462;
					break;
				
				case 51:
					*uParam2 = 2591;
					break;
				
				case 52:
					*uParam2 = 2592;
					break;
				
				case 53:
					*uParam2 = 2593;
					break;
				
				case 54:
					*uParam2 = 2594;
					break;
				
				case 55:
					*uParam2 = 2595;
					break;
				
				case 56:
					*uParam2 = 2596;
					break;
				
				case 57:
					*uParam2 = 2597;
					break;
				
				case 58:
					*uParam2 = 2598;
					break;
				
				case 59:
					*uParam2 = 2599;
					break;
				
				case 60:
					*uParam2 = 2600;
					break;
				
				case 61:
					*uParam2 = 2601;
					break;
				
				case 62:
					*uParam2 = 3198;
					break;
				
				case 63:
					*uParam2 = 3199;
					break;
				
				case 64:
					*uParam2 = 3200;
					break;
				
				case 65:
					*uParam2 = 3201;
					break;
				
				case 66:
					*uParam2 = 3202;
					break;
				
				case 67:
					*uParam2 = 3203;
					break;
				
				case 68:
					*uParam2 = 3671;
					break;
				
				case 69:
					*uParam2 = 3672;
					break;
				
				case 70:
					*uParam2 = 3673;
					break;
				
				case 71:
					*uParam2 = 3674;
					break;
				
				case 72:
					*uParam2 = 3675;
					break;
				
				case 73:
					*uParam2 = 3676;
					break;
				
				case 74:
					*uParam2 = 3677;
					break;
				
				case 75:
					*uParam2 = 3678;
					break;
				
				case 76:
					*uParam2 = 3679;
					break;
				
				case 77:
					*uParam2 = 3680;
					break;
				
				case 78:
					*uParam2 = 3794;
					break;
				
				case joaat("mpsv_lp0_31"):
					*uParam2 = 3795;
					break;
				
				case 80:
					*uParam2 = 3796;
					break;
				
				case 81:
					*uParam2 = 3797;
					break;
				
				case 82:
					*uParam2 = 3798;
					break;
				
				case 83:
					*uParam2 = 3799;
					break;
				
				case 84:
					*uParam2 = 3800;
					break;
				
				case 85:
					*uParam2 = 3801;
					break;
				
				case 86:
					*uParam2 = 3904;
					break;
				
				case 87:
					*uParam2 = 3905;
					break;
				
				case 88:
					*uParam2 = 3906;
					break;
				
				case 89:
					*uParam2 = 5339;
					break;
				
				case 90:
					*uParam2 = 5340;
					break;
				
				case 91:
					*uParam2 = 5341;
					break;
				
				case 92:
					*uParam2 = 5342;
					break;
				
				case 93:
					*uParam2 = 5343;
					break;
				
				case 94:
					*uParam2 = 5344;
					break;
				
				case 95:
					*uParam2 = 5345;
					break;
				
				case 96:
					*uParam2 = 5346;
					break;
				
				case 97:
					*uParam2 = 5347;
					break;
				
				case 98:
					*uParam2 = 5348;
					break;
				
				case 99:
					*uParam2 = 5349;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5350;
					break;
				
				case 101:
					*uParam2 = 5396;
					break;
				
				case 102:
					*uParam2 = 5397;
					break;
				
				case 103:
					*uParam2 = 5398;
					break;
				
				case 104:
					*uParam2 = 5399;
					break;
				
				case 105:
					*uParam2 = 5400;
					break;
				
				case 106:
					*uParam2 = 5401;
					break;
				
				case 107:
					*uParam2 = 5402;
					break;
				
				case 108:
					*uParam2 = 5403;
					break;
				
				case 109:
					*uParam2 = 5404;
					break;
				
				case 110:
					*uParam2 = 5405;
					break;
				
				case 111:
					*uParam2 = 5406;
					break;
				
				case 112:
					*uParam2 = 5407;
					break;
				
				case 113:
					*uParam2 = 5408;
					break;
				
				case 114:
					*uParam2 = 5409;
					break;
				
				case 115:
					*uParam2 = 5410;
					break;
				
				case 116:
					*uParam2 = 5411;
					break;
				
				case 117:
					*uParam2 = 5412;
					break;
				
				case 118:
					*uParam2 = 5413;
					break;
				
				case 119:
					*uParam2 = 5414;
					break;
				
				case 120:
					*uParam2 = 5415;
					break;
				
				case 121:
					*uParam2 = 5416;
					break;
				
				case 122:
					*uParam2 = 5417;
					break;
				
				case 123:
					*uParam2 = 5418;
					break;
				
				case 124:
					*uParam2 = 6124;
					break;
				
				case 125:
					*uParam2 = 6125;
					break;
				
				case 126:
					*uParam2 = 6126;
					break;
				
				case 127:
					*uParam2 = 6127;
					break;
				
				case 128:
					*uParam2 = 6128;
					break;
				
				case 129:
					*uParam2 = 6129;
					break;
				
				case 130:
					*uParam2 = 6130;
					break;
				
				case 131:
					*uParam2 = 6131;
					break;
				
				case 132:
					*uParam2 = 6132;
					break;
				
				case 133:
					*uParam2 = 6133;
					break;
				
				case 134:
					*uParam2 = 6134;
					break;
				
				case 135:
					*uParam2 = 6135;
					break;
				
				case 136:
					*uParam2 = 6136;
					break;
				
				case 137:
					*uParam2 = 6137;
					break;
				
				case 138:
					*uParam2 = 6138;
					break;
				
				case 139:
					*uParam2 = 6437;
					break;
				
				case 140:
					*uParam2 = 6438;
					break;
				
				case 141:
					*uParam2 = 6439;
					break;
				
				case 142:
					*uParam2 = 6440;
					break;
				
				case 143:
					*uParam2 = 6441;
					break;
				
				case 144:
					*uParam2 = 6442;
					break;
				
				case 145:
					*uParam2 = 6443;
					break;
				
				case 146:
					*uParam2 = 6444;
					break;
				
				case 147:
					*uParam2 = 6445;
					break;
				
				case 148:
					*uParam2 = 6446;
					break;
				
				case 149:
					*uParam2 = 6447;
					break;
				
				case 150:
					*uParam2 = 6448;
					break;
				
				case 151:
					*uParam2 = 6449;
					break;
				
				case 152:
					*uParam2 = 6450;
					break;
				
				case 153:
					*uParam2 = 6451;
					break;
				
				case 154:
					*uParam2 = 7268;
					break;
				
				case 155:
					*uParam2 = 7269;
					break;
				
				case 156:
					*uParam2 = 7270;
					break;
				
				case 157:
					*uParam2 = 7271;
					break;
				
				case 158:
					*uParam2 = 7272;
					break;
				
				case 159:
					*uParam2 = 7273;
					break;
				
				case 160:
					*uParam2 = 7274;
					break;
				
				case 161:
					*uParam2 = 7881;
					break;
				
				case 162:
					*uParam2 = 7882;
					break;
				
				case 163:
					*uParam2 = 7883;
					break;
				
				case 164:
					*uParam2 = 7884;
					break;
				
				case 165:
					*uParam2 = 7885;
					break;
				
				case 166:
					*uParam2 = 7886;
					break;
				
				case 167:
					*uParam2 = 7887;
					break;
				
				case 168:
					*uParam2 = 7888;
					break;
				
				case 169:
					*uParam2 = 7889;
					break;
				
				case 170:
					*uParam2 = 7890;
					break;
				
				case 171:
					*uParam2 = 7891;
					break;
				
				case 172:
					*uParam2 = 7892;
					break;
				
				case 173:
					*uParam2 = 7893;
					break;
				
				case 174:
					*uParam2 = 7894;
					break;
				
				case 175:
					*uParam2 = 7895;
					break;
				
				case 176:
					*uParam2 = 8301;
					break;
				
				case 177:
					*uParam2 = 8302;
					break;
				
				case 178:
					*uParam2 = 8303;
					break;
				
				case 179:
					*uParam2 = 8304;
					break;
				
				case 180:
					*uParam2 = 8305;
					break;
				
				case 181:
					*uParam2 = 8306;
					break;
				
				case 182:
					*uParam2 = 8307;
					break;
				
				case 183:
					*uParam2 = 8308;
					break;
				
				case 184:
					*uParam2 = 8309;
					break;
				
				case 185:
					*uParam2 = 8310;
					break;
				
				case 186:
					*uParam2 = 8311;
					break;
				
				case 187:
					*uParam2 = 8312;
					break;
				
				case 188:
					*uParam2 = 8313;
					break;
				
				case 189:
					*uParam2 = 8314;
					break;
				
				case 190:
					*uParam2 = 8315;
					break;
				
				case 191:
					*uParam2 = 8316;
					break;
				
				case 192:
					*uParam2 = 8317;
					break;
				
				case 193:
					*uParam2 = 8318;
					break;
				
				case 194:
					*uParam2 = 8319;
					break;
				
				case 195:
					*uParam2 = 8320;
					break;
				
				case 196:
					*uParam2 = 8321;
					break;
				
				case 197:
					*uParam2 = 8322;
					break;
				
				case 198:
					*uParam2 = 8323;
					break;
				
				case 199:
					*uParam2 = 8324;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8325;
					break;
				
				case 201:
					*uParam2 = 8940;
					break;
				
				case 202:
					*uParam2 = 8941;
					break;
				
				case 203:
					*uParam2 = 8942;
					break;
				
				case 204:
					*uParam2 = 8943;
					break;
				
				case 205:
					*uParam2 = 8944;
					break;
				
				case 206:
					*uParam2 = 9423;
					break;
				
				case 207:
					*uParam2 = 9424;
					break;
				
				case 208:
					*uParam2 = 9425;
					break;
				
				case 209:
					*uParam2 = 9426;
					break;
				
				case 210:
					*uParam2 = 9427;
					break;
				
				case 211:
					*uParam2 = 9428;
					break;
				
				case 212:
					*uParam2 = 9429;
					break;
				
				case 213:
					*uParam2 = 9430;
					break;
				
				case 214:
					*uParam2 = 9431;
					break;
				
				case 215:
					*uParam2 = 9432;
					break;
				
				case 216:
					*uParam2 = 9433;
					break;
				
				case 217:
					*uParam2 = 9434;
					break;
				
				case 218:
					*uParam2 = 9435;
					break;
				
				case 219:
					*uParam2 = 9436;
					break;
				
				case 220:
					*uParam2 = 9437;
					break;
				
				case 221:
					*uParam2 = 9438;
					break;
				
				case 222:
					*uParam2 = 9439;
					break;
				
				case 223:
					*uParam2 = 9440;
					break;
				
				case 224:
					*uParam2 = 9441;
					break;
				
				case 225:
					*uParam2 = 9442;
					break;
				
				case 226:
					*uParam2 = 9443;
					break;
				
				case 227:
					*uParam2 = 9444;
					break;
				
				case 228:
					*uParam2 = 9445;
					break;
				
				case 229:
					*uParam2 = 9446;
					break;
				
				case 230:
					*uParam2 = 9447;
					break;
			}
			break;
		
		case 2:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1767;
					break;
				
				case 1:
					*uParam2 = 1768;
					break;
				
				case 2:
					*uParam2 = 1769;
					break;
				
				case 3:
					*uParam2 = 1770;
					break;
				
				case 4:
					*uParam2 = 1771;
					break;
				
				case 5:
					*uParam2 = 1772;
					break;
				
				case 6:
					*uParam2 = 1780;
					break;
				
				case 7:
					*uParam2 = 1781;
					break;
				
				case 8:
					*uParam2 = 1782;
					break;
				
				case 9:
					*uParam2 = 1783;
					break;
				
				case 10:
					*uParam2 = 1784;
					break;
				
				case 11:
					*uParam2 = 1785;
					break;
				
				case 12:
					*uParam2 = 1786;
					break;
				
				case 13:
					*uParam2 = 1789;
					break;
				
				case 14:
					*uParam2 = 1790;
					break;
				
				case 15:
					*uParam2 = 1891;
					break;
				
				case 16:
					*uParam2 = 1892;
					break;
				
				case 17:
					*uParam2 = 1922;
					break;
				
				case 18:
					*uParam2 = 1940;
					break;
				
				case 19:
					*uParam2 = 1941;
					break;
				
				case 20:
					*uParam2 = 1942;
					break;
				
				case 21:
					*uParam2 = 1943;
					break;
				
				case 22:
					*uParam2 = 1944;
					break;
				
				case 23:
					*uParam2 = 2045;
					break;
				
				case 24:
					*uParam2 = 2046;
					break;
				
				case 25:
					*uParam2 = 2080;
					break;
				
				case 26:
					*uParam2 = 2081;
					break;
				
				case 27:
					*uParam2 = 2082;
					break;
				
				case 28:
					*uParam2 = 2083;
					break;
				
				case 29:
					*uParam2 = 2084;
					break;
				
				case 30:
					*uParam2 = 2085;
					break;
				
				case 31:
					*uParam2 = 2086;
					break;
				
				case 32:
					*uParam2 = 2087;
					break;
				
				case 33:
					*uParam2 = 2088;
					break;
				
				case 34:
					*uParam2 = 2089;
					break;
				
				case 35:
					*uParam2 = 2328;
					break;
				
				case 36:
					*uParam2 = 2329;
					break;
				
				case 37:
					*uParam2 = 2395;
					break;
				
				case 38:
					*uParam2 = 2396;
					break;
				
				case 39:
					*uParam2 = 2397;
					break;
				
				case 40:
					*uParam2 = 2398;
					break;
				
				case 41:
					*uParam2 = 2463;
					break;
				
				case 42:
					*uParam2 = 2464;
					break;
				
				case 43:
					*uParam2 = 2465;
					break;
				
				case 44:
					*uParam2 = 2466;
					break;
				
				case 45:
					*uParam2 = 2467;
					break;
				
				case 46:
					*uParam2 = 2468;
					break;
				
				case 47:
					*uParam2 = 2469;
					break;
				
				case 48:
					*uParam2 = 2470;
					break;
				
				case 49:
					*uParam2 = 2471;
					break;
				
				case 50:
					*uParam2 = 2472;
					break;
				
				case 51:
					*uParam2 = 2602;
					break;
				
				case 52:
					*uParam2 = 2603;
					break;
				
				case 53:
					*uParam2 = 2604;
					break;
				
				case 54:
					*uParam2 = 2605;
					break;
				
				case 55:
					*uParam2 = 2606;
					break;
				
				case 56:
					*uParam2 = 2607;
					break;
				
				case 57:
					*uParam2 = 2608;
					break;
				
				case 58:
					*uParam2 = 2609;
					break;
				
				case 59:
					*uParam2 = 2610;
					break;
				
				case 60:
					*uParam2 = 2611;
					break;
				
				case 61:
					*uParam2 = 2612;
					break;
				
				case 62:
					*uParam2 = 3204;
					break;
				
				case 63:
					*uParam2 = 3205;
					break;
				
				case 64:
					*uParam2 = 3206;
					break;
				
				case 65:
					*uParam2 = 3207;
					break;
				
				case 66:
					*uParam2 = 3208;
					break;
				
				case 67:
					*uParam2 = 3209;
					break;
				
				case 68:
					*uParam2 = 3681;
					break;
				
				case 69:
					*uParam2 = 3682;
					break;
				
				case 70:
					*uParam2 = 3683;
					break;
				
				case 71:
					*uParam2 = 3684;
					break;
				
				case 72:
					*uParam2 = 3685;
					break;
				
				case 73:
					*uParam2 = 3686;
					break;
				
				case 74:
					*uParam2 = 3687;
					break;
				
				case 75:
					*uParam2 = 3688;
					break;
				
				case 76:
					*uParam2 = 3689;
					break;
				
				case 77:
					*uParam2 = 3690;
					break;
				
				case 78:
					*uParam2 = 3802;
					break;
				
				case joaat("mpsv_lp0_31"):
					*uParam2 = 3803;
					break;
				
				case 80:
					*uParam2 = 3804;
					break;
				
				case 81:
					*uParam2 = 3805;
					break;
				
				case 82:
					*uParam2 = 3806;
					break;
				
				case 83:
					*uParam2 = 3807;
					break;
				
				case 84:
					*uParam2 = 3808;
					break;
				
				case 85:
					*uParam2 = 3809;
					break;
				
				case 86:
					*uParam2 = 3907;
					break;
				
				case 87:
					*uParam2 = 3908;
					break;
				
				case 88:
					*uParam2 = 3909;
					break;
				
				case 89:
					*uParam2 = 5351;
					break;
				
				case 90:
					*uParam2 = 5352;
					break;
				
				case 91:
					*uParam2 = 5353;
					break;
				
				case 92:
					*uParam2 = 5354;
					break;
				
				case 93:
					*uParam2 = 5355;
					break;
				
				case 94:
					*uParam2 = 5356;
					break;
				
				case 95:
					*uParam2 = 5357;
					break;
				
				case 96:
					*uParam2 = 5358;
					break;
				
				case 97:
					*uParam2 = 5359;
					break;
				
				case 98:
					*uParam2 = 5360;
					break;
				
				case 99:
					*uParam2 = 5361;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5362;
					break;
				
				case 101:
					*uParam2 = 5419;
					break;
				
				case 102:
					*uParam2 = 5420;
					break;
				
				case 103:
					*uParam2 = 5421;
					break;
				
				case 104:
					*uParam2 = 5422;
					break;
				
				case 105:
					*uParam2 = 5423;
					break;
				
				case 106:
					*uParam2 = 5424;
					break;
				
				case 107:
					*uParam2 = 5425;
					break;
				
				case 108:
					*uParam2 = 5426;
					break;
				
				case 109:
					*uParam2 = 5427;
					break;
				
				case 110:
					*uParam2 = 5428;
					break;
				
				case 111:
					*uParam2 = 5429;
					break;
				
				case 112:
					*uParam2 = 5430;
					break;
				
				case 113:
					*uParam2 = 5431;
					break;
				
				case 114:
					*uParam2 = 5432;
					break;
				
				case 115:
					*uParam2 = 5433;
					break;
				
				case 116:
					*uParam2 = 5434;
					break;
				
				case 117:
					*uParam2 = 5435;
					break;
				
				case 118:
					*uParam2 = 5436;
					break;
				
				case 119:
					*uParam2 = 5437;
					break;
				
				case 120:
					*uParam2 = 5438;
					break;
				
				case 121:
					*uParam2 = 5439;
					break;
				
				case 122:
					*uParam2 = 5440;
					break;
				
				case 123:
					*uParam2 = 5441;
					break;
				
				case 124:
					*uParam2 = 6139;
					break;
				
				case 125:
					*uParam2 = 6140;
					break;
				
				case 126:
					*uParam2 = 6141;
					break;
				
				case 127:
					*uParam2 = 6142;
					break;
				
				case 128:
					*uParam2 = 6143;
					break;
				
				case 129:
					*uParam2 = 6144;
					break;
				
				case 130:
					*uParam2 = 6145;
					break;
				
				case 131:
					*uParam2 = 6146;
					break;
				
				case 132:
					*uParam2 = 6147;
					break;
				
				case 133:
					*uParam2 = 6148;
					break;
				
				case 134:
					*uParam2 = 6149;
					break;
				
				case 135:
					*uParam2 = 6150;
					break;
				
				case 136:
					*uParam2 = 6151;
					break;
				
				case 137:
					*uParam2 = 6152;
					break;
				
				case 138:
					*uParam2 = 6153;
					break;
				
				case 139:
					*uParam2 = 6452;
					break;
				
				case 140:
					*uParam2 = 6453;
					break;
				
				case 141:
					*uParam2 = 6454;
					break;
				
				case 142:
					*uParam2 = 6455;
					break;
				
				case 143:
					*uParam2 = 6456;
					break;
				
				case 144:
					*uParam2 = 6457;
					break;
				
				case 145:
					*uParam2 = 6458;
					break;
				
				case 146:
					*uParam2 = 6459;
					break;
				
				case 147:
					*uParam2 = 6460;
					break;
				
				case 148:
					*uParam2 = 6461;
					break;
				
				case 149:
					*uParam2 = 6462;
					break;
				
				case 150:
					*uParam2 = 6463;
					break;
				
				case 151:
					*uParam2 = 6464;
					break;
				
				case 152:
					*uParam2 = 6465;
					break;
				
				case 153:
					*uParam2 = 6466;
					break;
				
				case 154:
					*uParam2 = 7275;
					break;
				
				case 155:
					*uParam2 = 7276;
					break;
				
				case 156:
					*uParam2 = 7277;
					break;
				
				case 157:
					*uParam2 = 7278;
					break;
				
				case 158:
					*uParam2 = 7279;
					break;
				
				case 159:
					*uParam2 = 7280;
					break;
				
				case 160:
					*uParam2 = 7281;
					break;
				
				case 161:
					*uParam2 = 7896;
					break;
				
				case 162:
					*uParam2 = 7897;
					break;
				
				case 163:
					*uParam2 = 7898;
					break;
				
				case 164:
					*uParam2 = 7899;
					break;
				
				case 165:
					*uParam2 = 7900;
					break;
				
				case 166:
					*uParam2 = 7901;
					break;
				
				case 167:
					*uParam2 = 7902;
					break;
				
				case 168:
					*uParam2 = 7903;
					break;
				
				case 169:
					*uParam2 = 7904;
					break;
				
				case 170:
					*uParam2 = 7905;
					break;
				
				case 171:
					*uParam2 = 7906;
					break;
				
				case 172:
					*uParam2 = 7907;
					break;
				
				case 173:
					*uParam2 = 7908;
					break;
				
				case 174:
					*uParam2 = 7909;
					break;
				
				case 175:
					*uParam2 = 7910;
					break;
				
				case 176:
					*uParam2 = 8326;
					break;
				
				case 177:
					*uParam2 = 8327;
					break;
				
				case 178:
					*uParam2 = 8328;
					break;
				
				case 179:
					*uParam2 = 8329;
					break;
				
				case 180:
					*uParam2 = 8330;
					break;
				
				case 181:
					*uParam2 = 8331;
					break;
				
				case 182:
					*uParam2 = 8332;
					break;
				
				case 183:
					*uParam2 = 8333;
					break;
				
				case 184:
					*uParam2 = 8334;
					break;
				
				case 185:
					*uParam2 = 8335;
					break;
				
				case 186:
					*uParam2 = 8336;
					break;
				
				case 187:
					*uParam2 = 8337;
					break;
				
				case 188:
					*uParam2 = 8338;
					break;
				
				case 189:
					*uParam2 = 8339;
					break;
				
				case 190:
					*uParam2 = 8340;
					break;
				
				case 191:
					*uParam2 = 8341;
					break;
				
				case 192:
					*uParam2 = 8342;
					break;
				
				case 193:
					*uParam2 = 8343;
					break;
				
				case 194:
					*uParam2 = 8344;
					break;
				
				case 195:
					*uParam2 = 8345;
					break;
				
				case 196:
					*uParam2 = 8346;
					break;
				
				case 197:
					*uParam2 = 8347;
					break;
				
				case 198:
					*uParam2 = 8348;
					break;
				
				case 199:
					*uParam2 = 8349;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8350;
					break;
				
				case 201:
					*uParam2 = 8945;
					break;
				
				case 202:
					*uParam2 = 8946;
					break;
				
				case 203:
					*uParam2 = 8947;
					break;
				
				case 204:
					*uParam2 = 8948;
					break;
				
				case 205:
					*uParam2 = 8949;
					break;
				
				case 206:
					*uParam2 = 9448;
					break;
				
				case 207:
					*uParam2 = 9449;
					break;
				
				case 208:
					*uParam2 = 9450;
					break;
				
				case 209:
					*uParam2 = 9451;
					break;
				
				case 210:
					*uParam2 = 9452;
					break;
				
				case 211:
					*uParam2 = 9453;
					break;
				
				case 212:
					*uParam2 = 9454;
					break;
				
				case 213:
					*uParam2 = 9455;
					break;
				
				case 214:
					*uParam2 = 9456;
					break;
				
				case 215:
					*uParam2 = 9457;
					break;
				
				case 216:
					*uParam2 = 9458;
					break;
				
				case 217:
					*uParam2 = 9459;
					break;
				
				case 218:
					*uParam2 = 9460;
					break;
				
				case 219:
					*uParam2 = 9461;
					break;
				
				case 220:
					*uParam2 = 9462;
					break;
				
				case 221:
					*uParam2 = 9463;
					break;
				
				case 222:
					*uParam2 = 9464;
					break;
				
				case 223:
					*uParam2 = 9465;
					break;
				
				case 224:
					*uParam2 = 9466;
					break;
				
				case 225:
					*uParam2 = 9467;
					break;
				
				case 226:
					*uParam2 = 9468;
					break;
				
				case 227:
					*uParam2 = 9469;
					break;
				
				case 228:
					*uParam2 = 9470;
					break;
				
				case 229:
					*uParam2 = 9471;
					break;
				
				case 230:
					*uParam2 = 9472;
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 12074;
}

bool func_372(int iParam0)
{
	return Global_42009 == iParam0;
}

int func_373(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
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
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_374(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	Global_77059[0 /*14*/].f_5 = 4;
	func_375(iVar0, iParam0, 0, iParam1);
}

void func_375(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	struct<10> Var19;
	int iVar36;
	int iVar37;
	int iVar38;
	struct<10> Var39;
	int iVar56;
	int iVar57;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	uVar1 = Global_77059[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar17 = (iParam1 - iParam2);
		if (iVar17 >= 0)
		{
			iVar18 = unk_0xE619DE4F72F76E79(uVar1, 0);
			if (iVar18 > iVar17)
			{
				unk_0x4ECDF1AC3EC9ADF1(iVar17, &Var2);
				Global_2621444 = Var2.f_1;
				Global_2621445 = Var2;
				func_365(&(Global_77059[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_365(&(Global_77059[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0x71794FDA9361403E(&Var19);
		iVar37 = (iParam1 - iParam2);
		if (iVar37 >= 0)
		{
			iVar38 = unk_0x44C4C2E7417F5E29(iVar1, 8, -1, 1, -1, -1);
			if (iVar38 > iVar37)
			{
				unk_0x9404A07A08FA1D0F(iVar37, &Var19);
				if (Var19.f_6 == 0)
				{
					iVar36 = 9;
				}
				else if (Var19.f_6 == 1)
				{
					iVar36 = 10;
				}
				else if (Var19.f_6 == 2)
				{
					iVar36 = 2;
				}
				else if (Var19.f_6 == 3)
				{
					iVar36 = 3;
				}
				else if (Var19.f_6 == 4)
				{
					iVar36 = 4;
				}
				else if (Var19.f_6 == 5)
				{
					iVar36 = 5;
				}
				else if (Var19.f_6 == 6)
				{
					iVar36 = 6;
				}
				else if (Var19.f_6 == 7)
				{
					iVar36 = 7;
				}
				else if (Var19.f_6 == 8)
				{
					iVar36 = 8;
				}
				else
				{
					iVar36 = -1;
				}
				Global_2621444 = Var19.f_1;
				Global_2621445 = Var19;
				func_365(&(Global_77059[0 /*14*/]), iParam0, iParam1, &(Var19.f_9), Var19.f_3, Var19.f_4, Var19.f_5, unk_0x01758128AAB0BA8F(Var19.f_1, joaat("OUTFIT_ONLY"), 0), iVar36, 2, Var19.f_1 != 0);
				return;
			}
		}
	}
	else
	{
		unk_0xFE9B2B065B8931FE(&Var39);
		if (iParam3 != -1 && Global_77229)
		{
			unk_0x3BA50B117757EA3E(iParam3, &Var39);
			Global_2621444 = Var39.f_1;
			Global_2621445 = Var39;
			func_365(&(Global_77059[0 /*14*/]), iParam0, iParam1, &(Var39.f_9), Var39.f_3, Var39.f_4, Var39.f_5, unk_0x01758128AAB0BA8F(Var39.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var39.f_1 != 0);
			return;
		}
		iVar56 = (iParam1 - iParam2);
		if (iVar56 >= 0)
		{
			iVar57 = unk_0x44C4C2E7417F5E29(iVar1, 8, -1, 0, -1, func_75(iParam0));
			if (iVar57 > iVar56)
			{
				unk_0xDF9AB3C346705246(iVar56, &Var39);
				Global_2621444 = Var39.f_1;
				Global_2621445 = Var39;
				func_365(&(Global_77059[0 /*14*/]), iParam0, iParam1, &(Var39.f_9), Var39.f_3, Var39.f_4, Var39.f_5, unk_0x01758128AAB0BA8F(Var39.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var39.f_1 != 0);
				return;
			}
		}
	}
}

void func_376(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		default:
			Global_77059[0 /*14*/].f_5 = 4;
			func_375(iVar10, iParam0, 9, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_365(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_377(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S1", 16);
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S2", 16);
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S3", 16);
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S4", 16);
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S5", 16);
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S6", 16);
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S7", 16);
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S8", 16);
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P1", 16);
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P2", 16);
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P3", 16);
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P4", 16);
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P5", 16);
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P6", 16);
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P7", 16);
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P8", 16);
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P9", 16);
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P10", 16);
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B1", 16);
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B2", 16);
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B3", 16);
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B4", 16);
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B5", 16);
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B6", 16);
			break;
		
		case 25:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B7", 16);
			break;
		
		case 26:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B8", 16);
			break;
		
		case 27:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B9", 16);
			break;
		
		default:
			Global_77059[0 /*14*/].f_5 = 4;
			func_375(iVar10, iParam0, 28, iParam1);
			return;
			break;
	}
	func_365(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_378(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0)
	{
		case 0:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 235;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMF_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMF_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 5000;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMF_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMF_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMF_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMF_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMF_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMF_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMF_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMF_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMF_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMF_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMF_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMF_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMF_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMF_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 120;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 400;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 375;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 325;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 255;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMF_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 360;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMF_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMF_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 3970;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMF_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMF_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1355;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMF_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMF_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMF_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMF_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 230;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMF_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMF_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 515;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMF_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 545;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMF_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMF_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMF_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMF_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 1440;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMF_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMF_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMF_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMF_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMF_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMF_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMF_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMF_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMF_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMF_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMF_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMF_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "HT_FMF_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 50;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMF_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMF_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 575;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMF_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 605;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMF_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMF_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMF_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMF_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMF_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMF_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMF_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMF_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 285;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 2125;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 295;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 855;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1615;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 1130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 165;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMF_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMF_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMF_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 110;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMF_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 145;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMF_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 105;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMF_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 105;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMF_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 115;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMF_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 115;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 390;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 395;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 425;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 600;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 590;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 555;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMF_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 1060;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMF_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 1400;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMF_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 1315;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMF_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 1230;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMF_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 1145;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMF_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 8450;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMF_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 675;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMF_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 8750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMF_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 975;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMF_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMF_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 865;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMF_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 890;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMF_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 730;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMF_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 650;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMF_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 645;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMF_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 755;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMF_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 13850;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMF_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 2900;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMF_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 2895;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMF_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 12500;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMF_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 15000;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMF_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 14750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMF_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 13150;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMF_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 2925;
			iVar8 = 0;
			iVar11 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 163:
			StringCopy(&Var2, "CLO_EXF_G_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "CLO_EXF_G_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "CLO_EXF_G_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 160;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMF_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMF_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMF_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMF_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMF_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMF_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMF_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 174:
			StringCopy(&Var2, "CLO_EXF_G_1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 970;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "CLO_EXF_G_1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 585;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "CLO_EXF_G_1_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMF_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMF_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMF_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMF_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMF_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 595;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "G_FMF_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 160;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "G_FMF_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 545;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "G_FMF_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 590;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "CLO_EXF_G_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 1125;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "CLO_EXF_G_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 740;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "CLO_EXF_G_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 805;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMF_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 6250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMF_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 4065;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMF_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 3585;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMF_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 4075;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMF_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 4935;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "G_FMF_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "G_FMF_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 5600;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "G_FMF_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 4790;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "CLO_EXF_G_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "CLO_EXF_G_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "CLO_EXF_G_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 2245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 210;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 1205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "G_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "G_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 2215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "G_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "CLO_EXF_G_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 2835;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "CLO_EXF_G_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 2450;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "CLO_EXF_G_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 2515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "G_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "G_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "G_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMF_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMF_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMF_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMF_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 5000;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMF_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMF_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMF_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMF_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMF_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMF_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMF_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 229:
			StringCopy(&Var2, "CLO_EXF_G_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 2820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "CLO_EXF_G_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 2435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "CLO_EXF_G_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 2500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMF_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 4815;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMF_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 4795;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "G_FMF_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 4305;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "G_FMF_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 4305;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "G_FMF_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 4965;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "G_FMF_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 480;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMF_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 465;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMF_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 4320;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "CLO_EXF_G_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 2390;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "CLO_EXF_G_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 2005;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "CLO_EXF_G_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 2070;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 243:
			StringCopy(&Var2, "G_FMF_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMF_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 245:
			StringCopy(&Var2, "G_FMF_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 246:
			StringCopy(&Var2, "G_FMF_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 247:
			StringCopy(&Var2, "G_FMF_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMF_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMF_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMF_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 251:
			StringCopy(&Var2, "CLO_EXF_G_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "CLO_EXF_G_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "CLO_EXF_G_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMF_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 70;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMF_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "G_FMF_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "G_FMF_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 570;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "G_FMF_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 525;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMF_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMF_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMF_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "CLO_EXF_G_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "CLO_EXF_G_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "CLO_EXF_G_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMF_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 4065;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMF_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "G_FMF_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "G_FMF_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 4275;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "G_FMF_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMF_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMF_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMF_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 273:
			StringCopy(&Var2, "CLO_EXF_G_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 274:
			StringCopy(&Var2, "CLO_EXF_G_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 275:
			StringCopy(&Var2, "CLO_EXF_G_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 276:
			StringCopy(&Var2, "G_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 3660;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 4165;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 3670;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 3620;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 3610;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 4140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 286:
			StringCopy(&Var2, "G_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 287:
			StringCopy(&Var2, "G_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 288:
			StringCopy(&Var2, "G_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 297:
			StringCopy(&Var2, "G_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 298:
			StringCopy(&Var2, "G_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 299:
			StringCopy(&Var2, "G_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMF_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMF_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMF_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMF_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMF_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMF_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMF_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMF_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 308:
			StringCopy(&Var2, "CLO_EXF_G_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 1490;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "CLO_EXF_G_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 1105;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "CLO_EXF_G_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 1170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 316:
			StringCopy(&Var2, "G_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 317:
			StringCopy(&Var2, "G_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 318:
			StringCopy(&Var2, "G_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 825;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMF_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMF_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
	}
	if (iVar11 == 1)
	{
		iVar12 = (iParam0 - 10);
		if (iVar12 >= 0 && iVar12 < 121)
		{
			if (iVar12 > 8)
			{
				iVar12 = (iVar12 - 1);
			}
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2044[iVar12]) * Global_293291.f_26));
		}
	}
	else if (iVar11 == 2)
	{
		iVar13 = (iParam0 - 131);
		if (iVar13 >= 0 && iVar13 < 24)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2165[iVar13]) * Global_293291.f_27));
		}
	}
	else if (iVar11 == 3)
	{
		iVar14 = (iParam0 - 155);
		if (iVar14 >= 0 && iVar14 < 128)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2190[iVar14]) * Global_293291.f_56));
		}
	}
	else if (iVar11 == 4)
	{
		iVar15 = (iParam0 - 319);
		if (iVar15 >= 0 && iVar15 < 10)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2319[iVar15]) * Global_293291.f_28));
		}
	}
	if (iParam0 >= 327)
	{
		Global_77059[0 /*14*/].f_5 = 4;
		func_375(iVar10, iParam0, 327, iParam1);
		if (Global_77059[0 /*14*/].f_7 > 0)
		{
			if (unk_0x01758128AAB0BA8F(Global_2621444, joaat("HAT"), 1))
			{
				Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_26));
			}
			else if (unk_0x01758128AAB0BA8F(Global_2621444, joaat("GLASSES"), 1))
			{
				Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_56));
			}
			else if (unk_0x01758128AAB0BA8F(Global_2621444, joaat("WATCH"), 1))
			{
				Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_28));
			}
		}
	}
	else
	{
		func_365(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_379(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_77059[0 /*14*/].f_5 = 4;
			func_375(iVar10, iParam0, 6, iParam1);
			return;
			break;
	}
	func_365(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_380(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			if (Global_262145.f_4141 != -1)
			{
				iVar1 = Global_262145.f_4141;
			}
			else
			{
				iVar1 = 310;
			}
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			if (Global_262145.f_4142 != -1)
			{
				iVar1 = Global_262145.f_4142;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			if (Global_262145.f_4143 != -1)
			{
				iVar1 = Global_262145.f_4143;
			}
			else
			{
				iVar1 = 145;
			}
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			if (Global_262145.f_4144 != -1)
			{
				iVar1 = Global_262145.f_4144;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			if (Global_262145.f_4145 != -1)
			{
				iVar1 = Global_262145.f_4145;
			}
			else
			{
				iVar1 = 265;
			}
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			if (Global_262145.f_4146 != -1)
			{
				iVar1 = Global_262145.f_4146;
			}
			else
			{
				iVar1 = 280;
			}
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			if (Global_262145.f_4147 != -1)
			{
				iVar1 = Global_262145.f_4147;
			}
			else
			{
				iVar1 = 295;
			}
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			if (Global_262145.f_4148 != -1)
			{
				iVar1 = Global_262145.f_4148;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			if (Global_262145.f_4149 != -1)
			{
				iVar1 = Global_262145.f_4149;
			}
			else
			{
				iVar1 = 85;
			}
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			if (Global_262145.f_4150 != -1)
			{
				iVar1 = Global_262145.f_4150;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			if (Global_262145.f_4151 != -1)
			{
				iVar1 = Global_262145.f_4151;
			}
			else
			{
				iVar1 = 105;
			}
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			if (Global_262145.f_4152 != -1)
			{
				iVar1 = Global_262145.f_4152;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			if (Global_262145.f_4153 != -1)
			{
				iVar1 = Global_262145.f_4153;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			if (Global_262145.f_4154 != -1)
			{
				iVar1 = Global_262145.f_4154;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			if (Global_262145.f_4155 != -1)
			{
				iVar1 = Global_262145.f_4155;
			}
			else
			{
				iVar1 = 30;
			}
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			if (Global_262145.f_4156 != -1)
			{
				iVar1 = Global_262145.f_4156;
			}
			else
			{
				iVar1 = 40;
			}
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			if (Global_262145.f_4157 != -1)
			{
				iVar1 = Global_262145.f_4157;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 18:
			iVar6 = 3;
			iVar7 = 5;
			if (Global_262145.f_4158 != -1)
			{
				iVar1 = Global_262145.f_4158;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 2;
			if (Global_262145.f_4159 != -1)
			{
				iVar1 = Global_262145.f_4159;
			}
			else
			{
				iVar1 = 355;
			}
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 3;
			if (Global_262145.f_4160 != -1)
			{
				iVar1 = Global_262145.f_4160;
			}
			else
			{
				iVar1 = 370;
			}
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 4;
			if (Global_262145.f_4161 != -1)
			{
				iVar1 = Global_262145.f_4161;
			}
			else
			{
				iVar1 = 110;
			}
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 5;
			if (Global_262145.f_4162 != -1)
			{
				iVar1 = Global_262145.f_4162;
			}
			else
			{
				iVar1 = 160;
			}
			break;
		
		case 31:
			iVar6 = 6;
			iVar7 = 0;
			if (Global_262145.f_4163 != -1)
			{
				iVar1 = Global_262145.f_4163;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 1;
			if (Global_262145.f_4164 != -1)
			{
				iVar1 = Global_262145.f_4164;
			}
			else
			{
				iVar1 = 190;
			}
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 2;
			if (Global_262145.f_4165 != -1)
			{
				iVar1 = Global_262145.f_4165;
			}
			else
			{
				iVar1 = 235;
			}
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 3;
			if (Global_262145.f_4166 != -1)
			{
				iVar1 = Global_262145.f_4166;
			}
			else
			{
				iVar1 = 220;
			}
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 4;
			if (Global_262145.f_4167 != -1)
			{
				iVar1 = Global_262145.f_4167;
			}
			else
			{
				iVar1 = 250;
			}
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 5;
			if (Global_262145.f_4168 != -1)
			{
				iVar1 = Global_262145.f_4168;
			}
			else
			{
				iVar1 = 205;
			}
			break;
		
		case 37:
			iVar6 = 7;
			iVar7 = 0;
			if (Global_262145.f_4169 != -1)
			{
				iVar1 = Global_262145.f_4169;
			}
			else
			{
				iVar1 = 445;
			}
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 1;
			if (Global_262145.f_4170 != -1)
			{
				iVar1 = Global_262145.f_4170;
			}
			else
			{
				iVar1 = 175;
			}
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar6 = 9;
			iVar7 = 0;
			if (Global_262145.f_4171 != -1)
			{
				iVar1 = Global_262145.f_4171;
			}
			else
			{
				iVar1 = 340;
			}
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		default:
			Global_77059[0 /*14*/].f_5 = 4;
			func_375(iVar10, iParam0, 55, iParam1);
			if (Global_77059[0 /*14*/].f_7 > 0)
			{
				Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_58));
			}
			return;
			break;
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_293291.f_58));
	StringCopy(&Var2, "T_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_365(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_381(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_77059[0 /*14*/].f_5 = 4;
			func_375(iVar10, iParam0, 26, iParam1);
			if (Global_77059[0 /*14*/].f_7 > 0)
			{
				Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_29));
			}
			return;
			break;
	}
	StringCopy(&Var2, "M_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = (iParam0 - 1);
	if (iVar11 >= 0 && iVar11 < 26)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2017[iVar11]) * Global_293291.f_29));
	}
	func_365(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_382(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 1765;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 760;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 760;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 765;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 85;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 90;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 95;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 100;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 60;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 1255;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 1050;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 1895;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 185;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 190;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 115;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 415;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 105;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3530;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2610;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 1295;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 120;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 160;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 160;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 145;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 105;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 115;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 150;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 540;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 120;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 460;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 415;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 135;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 140;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 160;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 1025;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 1560;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 145;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 120;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 365;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 2395;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 3675;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 320;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 3875;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2050;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 375;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2105;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 345;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 380;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 340;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 385;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 4135;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 370;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 375;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 385;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 365;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 325;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 325;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 370;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 400;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 365;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 410;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 4125;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 4365;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 5365;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 6225;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 3755;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 405;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 4115;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 2240;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 3850;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 3110;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 1950;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 455;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 405;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 410;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 415;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 4425;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 65;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 85;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 75;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 360;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 175;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 675;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 400;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 340;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 195;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 165;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 1040;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 100;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 205;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 200;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 100;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 1420;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 445;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 435;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 420;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 425;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 435;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 425;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 430;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 3215;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 3320;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 440;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 440;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 450;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 450;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 1255;
			break;
		
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 750;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 165;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 460;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 195;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 210;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 215;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 220;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 455;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 175;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 790;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 175;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 190;
			break;
	}
	StringCopy(&Var2, "F_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1760[iVar11]) * Global_293291.f_25));
	}
	if (iParam0 >= 256)
	{
		Global_77059[0 /*14*/].f_5 = 4;
		func_375(iVar10, iParam0, 256, iParam1);
		if (Global_77059[0 /*14*/].f_7 > 0)
		{
			Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_25));
		}
	}
	else
	{
		func_365(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_383(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 270;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 450;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 4875;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 1760;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 1090;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 2465;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 305;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 290;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 410;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 255;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 255;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 405;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 5000;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 4480;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 4335;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 375;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 265;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 275;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 280;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 300;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 265;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 255;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 250;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 260;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 250;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 225;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 230;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 650;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 425;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 345;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 110;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 250;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 110;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 525;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 535;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 130;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 140;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 520;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 215;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 220;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 225;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 215;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 630;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 250;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 260;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 200;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 225;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 230;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 725;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 650;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 230;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 230;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 280;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 330;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 320;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 315;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 530;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 890;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 440;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 455;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 295;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 155;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 150;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 950;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 580;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 200;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 665;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 780;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 615;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 250;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 435;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 485;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 380;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 1295;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 1135;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 1425;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1645;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1925;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 2250;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 365;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 360;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 2245;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 2170;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 275;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 300;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 145;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 155;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 155;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 510;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 165;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 465;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 250;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 110;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 470;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 480;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 155;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 275;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 395;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 285;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 560;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 595;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 295;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 230;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 215;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 270;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 295;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 215;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 290;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 230;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 230;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 350;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 335;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "L_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1246[iVar11]) * Global_293291.f_23));
	}
	if (iParam0 >= 256)
	{
		Global_77059[0 /*14*/].f_5 = 4;
		func_375(iVar10, iParam0, 256, iParam1);
		if (Global_77059[0 /*14*/].f_7 > 0)
		{
			Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_23));
		}
	}
	else
	{
		func_365(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_384(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 15;
			iVar7 = 0;
			break;
	}
	if (iParam0 >= 16)
	{
		Global_77059[0 /*14*/].f_5 = 4;
		func_375(iVar10, iParam0, 16, iParam1);
		return;
	}
	func_365(&(Global_77059[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_385(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 11:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 21:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 23:
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 26:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 27:
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 28:
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 29:
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 31:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 32:
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 33:
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 34:
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 4;
			break;
	}
	if (iParam0 >= 36)
	{
		Global_77059[0 /*14*/].f_5 = 4;
		func_375(iVar10, iParam0, 36, iParam1);
		return;
	}
	func_365(&(Global_77059[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_386(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 125;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 125;
			break;
		
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 33:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMF_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMF_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMF_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMF_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMF_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMF_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 40;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[77]));
			break;
		
		case 48:
			StringCopy(&Var2, "U_FMF_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 40;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[78]));
			break;
		
		case 49:
			StringCopy(&Var2, "U_FMF_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "U_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[80]));
			break;
		
		case 51:
			StringCopy(&Var2, "U_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[81]));
			break;
		
		case 52:
			StringCopy(&Var2, "U_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "U_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "U_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "U_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "U_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "U_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 375;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[87]));
			break;
		
		case 58:
			StringCopy(&Var2, "U_FMF_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "U_FMF_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 90;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[89]));
			break;
		
		case 60:
			StringCopy(&Var2, "U_FMF_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "U_FMF_5_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "U_FMF_5_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "U_FMF_5_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "U_FMF_5_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "U_FMF_5_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 67:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 68:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 69:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 70:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "U_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 90;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[176]));
			break;
		
		case 72:
			StringCopy(&Var2, "U_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 95;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[177]));
			break;
		
		case 73:
			StringCopy(&Var2, "U_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 95;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[178]));
			break;
		
		case 74:
			StringCopy(&Var2, "U_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "U_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "U_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "U_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "U_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "U_FMF_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMF_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMF_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 150;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[186]));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMF_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 65;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[187]));
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMF_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMF_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMF_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMF_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 145;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[191]));
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 1560;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[199]));
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMF_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 195;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[200]));
			break;
		
		case 96:
			StringCopy(&Var2, "U_FMF_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 200;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[201]));
			break;
		
		case 97:
			StringCopy(&Var2, "U_FMF_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "U_FMF_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "U_FMF_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 100:
			StringCopy(&Var2, "U_FMF_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "U_FMF_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "U_FMF_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "U_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 975;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[208]));
			break;
		
		case 104:
			StringCopy(&Var2, "U_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 2670;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[209]));
			break;
		
		case 105:
			StringCopy(&Var2, "U_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 480;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[210]));
			break;
		
		case 106:
			StringCopy(&Var2, "U_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 400;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[211]));
			break;
		
		case 107:
			StringCopy(&Var2, "U_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 2500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[212]));
			break;
		
		case 108:
			StringCopy(&Var2, "U_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2060;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[213]));
			break;
		
		case 109:
			StringCopy(&Var2, "U_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2620;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[214]));
			break;
		
		case 110:
			StringCopy(&Var2, "U_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 475;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[215]));
			break;
		
		case 111:
			StringCopy(&Var2, "U_FMF_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 490;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[216]));
			break;
		
		case 112:
			StringCopy(&Var2, "U_FMF_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2280;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[217]));
			break;
		
		case 113:
			StringCopy(&Var2, "U_FMF_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 485;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[218]));
			break;
		
		case 114:
			StringCopy(&Var2, "U_FMF_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 2390;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[219]));
			break;
		
		case 115:
			StringCopy(&Var2, "U_FMF_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 2610;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[220]));
			break;
		
		case 116:
			StringCopy(&Var2, "U_FMF_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1450;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[221]));
			break;
		
		case 117:
			StringCopy(&Var2, "U_FMF_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 2720;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[222]));
			break;
		
		case 118:
			StringCopy(&Var2, "U_FMF_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 4995;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[223]));
			break;
		
		case 119:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 120:
			StringCopy(&Var2, "U_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 325;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[240]));
			break;
		
		case 121:
			StringCopy(&Var2, "U_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 122:
			StringCopy(&Var2, "U_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 123:
			StringCopy(&Var2, "U_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[243]));
			break;
		
		case 124:
			StringCopy(&Var2, "U_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 125:
			StringCopy(&Var2, "U_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 126:
			StringCopy(&Var2, "U_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 127:
			StringCopy(&Var2, "U_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 128:
			StringCopy(&Var2, "U_FMF_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMF_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMF_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 450;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[250]));
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMF_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 465;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[251]));
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMF_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMF_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMF_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMF_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		default:
			Global_77059[0 /*14*/].f_5 = 4;
			func_375(iVar10, iParam0, 136, iParam1);
			if (Global_77059[0 /*14*/].f_7 > 0)
			{
				Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_24));
			}
			return;
			break;
	}
	if (iParam0 == 4 || iParam0 == 20)
	{
		if (func_387(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2980));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(40) * Global_262145.f_1503[4]));
		}
	}
	else if (iParam0 == 7 || iParam0 == 23)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(450) * Global_262145.f_2979));
	}
	else if (iParam0 == 9 || iParam0 == 25)
	{
		if (func_387(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_262145.f_2978));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(40) * Global_262145.f_1503[9]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 16)
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[iVar11]));
		}
	}
	else if (iParam0 >= 16 && iParam0 < 32)
	{
		iVar12 = (iParam0 - 16);
		if (iVar12 >= 0 && iVar12 < 256)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[iVar12]));
		}
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_293291.f_24));
	func_365(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

bool func_387(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (func_390(iParam0) == 12074)
	{
		return 0;
	}
	uVar0 = func_389(iParam0, iParam1);
	iVar1 = iParam0;
	return unk_0x234B68AC2E35ED5A(uVar0, func_388(iVar1));
}

int func_388(int iParam0)
{
	return (iParam0 % 32);
}

var func_389(var uParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_133(func_390(uParam0), iParam1, 0);
	return uVar0;
}

int func_390(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_393(iVar0);
	if ((func_392() == 0 || func_391() == 0) || (func_392() == 999 && func_391() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1039;
				break;
			
			case 1:
				return 1040;
				break;
			
			case 2:
				return 1041;
				break;
			
			case 3:
				return 1042;
				break;
			
			case 4:
				return 1043;
				break;
			
			case 5:
				return 1503;
				break;
			
			case 6:
				return 1758;
				break;
			
			case 7:
				return 1952;
				break;
			
			case 8:
				return 1953;
				break;
			
			case 9:
				return 1954;
				break;
			
			case 10:
				return 1955;
				break;
			
			case 11:
				return 1956;
				break;
			
			case 12:
				return 1957;
				break;
			
			case 13:
				return 2424;
				break;
			
			case 14:
				return 2444;
				break;
			
			case 15:
				return 2447;
				break;
			
			case 16:
				return 2450;
				break;
			
			case 17:
				return 2613;
				break;
			
			case 18:
				return 2616;
				break;
			
			case 19:
				return 2619;
				break;
			
			case 20:
				return 3785;
				break;
			
			case 21:
				return 3788;
				break;
			
			case 22:
				return 3863;
				break;
			
			case 23:
				return 3866;
				break;
			
			case 24:
				return 3869;
				break;
			
			case 25:
				return 3872;
				break;
			
			case 26:
				return 5363;
				break;
			
			case 27:
				return 5366;
				break;
			
			case 28:
				return 5468;
				break;
			
			case 29:
				return 5471;
				break;
			
			case 30:
				return 6430;
				break;
			
			case 31:
				return 6433;
				break;
			
			case 32:
				return 7254;
				break;
			
			case 33:
				return 7257;
				break;
			
			case 34:
				return 7260;
				break;
			
			case 35:
				return 7969;
				break;
			
			case 36:
				return 7972;
				break;
			
			case 37:
				return 7975;
				break;
			
			case 38:
				return 7978;
				break;
			
			case 39:
				return 8500;
				break;
			
			case 40:
				return 8503;
				break;
			
			case 41:
				return 8506;
				break;
			
			case 42:
				return 8509;
				break;
			
			case 43:
				return 8905;
				break;
			
			case 44:
				return 8908;
				break;
			
			case 45:
				return 8911;
				break;
		}
	}
	return 12074;
}

int func_391()
{
	return Global_31346;
}

int func_392()
{
	return Global_31345;
}

int func_393(int iParam0)
{
	return (iParam0 / 32);
}

void func_394(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 125;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 230;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 355;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5000;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2725;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3265;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 3625;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 4220;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 310;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 60;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 295;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 80;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 2250;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 275;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 445;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 470;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 95;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 360;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 100;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 60;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 295;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 460;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 1980;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 2110;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 95;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 40;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 375;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 90;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 900;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1000;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1050;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1000;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2975;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 1100;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 1825;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 1750;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 1075;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 2805;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 2250;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 525;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 110;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 130;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 560;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 295;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 975;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 160;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 100;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 1700;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 380;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 95;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 90;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 85;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 150;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 145;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 1560;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 195;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 200;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 975;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 2670;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 480;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 400;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2060;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2620;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 475;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 490;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2280;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 485;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 2390;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 2610;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1450;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 2720;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 4995;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 385;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 345;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 430;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 375;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 375;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 360;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 325;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 340;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 435;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 300;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 315;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 415;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 420;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 325;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 450;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 465;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "U_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 == 4)
	{
		if (func_387(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2980) * Global_293291.f_24));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(40) * Global_262145.f_1503[4]) * Global_293291.f_24));
		}
	}
	else if (iParam0 == 7)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(450) * Global_262145.f_2979) * Global_293291.f_24));
	}
	else if (iParam0 == 9)
	{
		if (func_387(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(500) * Global_262145.f_2978) * Global_293291.f_24));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(40) * Global_262145.f_1503[9]) * Global_293291.f_24));
		}
	}
	else
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[iVar11]) * Global_293291.f_24));
		}
	}
	if (iParam0 >= 256)
	{
		Global_77059[0 /*14*/].f_5 = 4;
		func_375(iVar10, iParam0, 256, iParam1);
		if (Global_77059[0 /*14*/].f_7 > 0)
		{
			Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_24));
		}
	}
	else
	{
		func_365(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_395(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[0]));
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[1]));
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 495;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[2]));
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 490;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[3]));
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 485;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[4]));
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 480;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[5]));
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 440;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[6]));
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 435;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[7]));
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 430;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[8]));
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 425;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[9]));
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 420;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[10]));
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 190;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[11]));
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 185;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[12]));
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 180;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[13]));
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 175;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[14]));
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 170;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[15]));
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 295;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[16]));
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 290;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[17]));
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 285;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[18]));
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 280;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[19]));
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 275;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[20]));
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 2000;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[21]));
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1995;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[22]));
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1990;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[23]));
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1985;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[24]));
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1980;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[25]));
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 1150;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[26]));
			break;
		
		case 31:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1145;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[27]));
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1140;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[28]));
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1135;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[29]));
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1130;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[30]));
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 550;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[31]));
			break;
		
		case 36:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 545;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[32]));
			break;
		
		case 37:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 540;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[33]));
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 535;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[34]));
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 530;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[35]));
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 41:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 580;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[36]));
			break;
		
		case 42:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 575;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[37]));
			break;
		
		case 43:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 570;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[38]));
			break;
		
		case 44:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 565;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[39]));
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 560;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[40]));
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 47:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 1100;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[41]));
			break;
		
		case 48:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 1095;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[42]));
			break;
		
		case 49:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 1090;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[43]));
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 1085;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[44]));
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 1080;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[45]));
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 53:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 520;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[46]));
			break;
		
		case 54:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 515;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[47]));
			break;
		
		case 55:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 510;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[48]));
			break;
		
		case 56:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 505;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[49]));
			break;
		
		case 57:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[50]));
			break;
		
		case 58:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 59:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 60:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 395;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[51]));
			break;
		
		case 61:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 390;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[52]));
			break;
		
		case 62:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 385;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[53]));
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 380;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[54]));
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 375;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[55]));
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 67:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 1050;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[56]));
			break;
		
		case 68:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 1045;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[57]));
			break;
		
		case 69:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 1040;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[58]));
			break;
		
		case 70:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 1035;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[59]));
			break;
		
		case 71:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 1030;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[60]));
			break;
		
		case 72:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 73:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 1200;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[61]));
			break;
		
		case 74:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1195;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[62]));
			break;
		
		case 75:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 1190;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[63]));
			break;
		
		case 76:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 1185;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[64]));
			break;
		
		case 77:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1180;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[65]));
			break;
		
		case 78:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 475;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[66]));
			break;
		
		case 80:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 470;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[67]));
			break;
		
		case 81:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 465;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[68]));
			break;
		
		case 82:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 460;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[69]));
			break;
		
		case 83:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 455;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[70]));
			break;
		
		case 84:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 85:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 950;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[71]));
			break;
		
		case 86:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 945;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[72]));
			break;
		
		case 87:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 940;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[73]));
			break;
		
		case 88:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 935;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[74]));
			break;
		
		case 89:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 930;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[75]));
			break;
		
		case 90:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 91:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		default:
			Global_77059[0 /*14*/].f_5 = 4;
			func_375(iVar10, iParam0, 92, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_365(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_396(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 2:
			func_411(iParam1, iParam2);
			break;
		
		case 11:
			func_410(iParam1, iParam2);
			break;
		
		case 8:
			func_409(iParam1, iParam2);
			break;
		
		case 9:
			func_408(iParam1, iParam2);
			break;
		
		case 3:
			func_407(iParam1, iParam2);
			break;
		
		case 4:
			func_406(iParam1, iParam2);
			break;
		
		case 6:
			func_405(iParam1, iParam2);
			break;
		
		case 1:
			func_404(iParam1, iParam2);
			break;
		
		case 7:
			func_403(iParam1, iParam2);
			break;
		
		case 10:
			func_402(iParam1, iParam2);
			break;
		
		case 14:
			func_401(iParam1, iParam2);
			break;
		
		case 12:
			func_400(iParam1, iParam2);
			break;
		
		case 5:
			func_399(iParam1, iParam2);
			break;
		
		case 0:
			func_398(iParam1, iParam2);
			break;
		
		case 13:
			func_397(iParam1);
			break;
	}
}

void func_397(int iParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	switch (iParam0)
	{
		case 31:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			break;
	}
	func_365(&(Global_77059[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_398(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	Global_77059[0 /*14*/].f_5 = 3;
	func_375(iVar0, iParam0, 0, iParam1);
}

void func_399(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		default:
			Global_77059[0 /*14*/].f_5 = 3;
			func_375(iVar10, iParam0, 9, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_365(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_400(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S1", 16);
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S2", 16);
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S3", 16);
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S4", 16);
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S5", 16);
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S6", 16);
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S7", 16);
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S8", 16);
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S9", 16);
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P1", 16);
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P2", 16);
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P3", 16);
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P4", 16);
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P5", 16);
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P6", 16);
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P7", 16);
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P8", 16);
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B1", 16);
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B2", 16);
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B3", 16);
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B4", 16);
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B5", 16);
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B6", 16);
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B7", 16);
			break;
		
		case 25:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B8", 16);
			break;
		
		default:
			Global_77059[0 /*14*/].f_5 = 3;
			func_375(iVar10, iParam0, 26, iParam1);
			return;
			break;
	}
	func_365(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_401(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0)
	{
		case 0:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 235;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMM_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMM_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMM_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 320;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMM_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMM_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 245;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMM_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMM_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMM_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 415;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMM_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 315;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMM_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMM_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMM_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMM_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMM_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMM_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 265;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 570;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 560;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMM_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 260;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMM_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 215;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMM_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 430;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMM_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMM_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 200;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMM_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMM_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMM_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 165;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "HT_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 100;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMM_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMM_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMM_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMM_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMM_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMM_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMM_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMM_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 1715;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 3900;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 1550;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 4250;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 4460;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 4970;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 290;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 305;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 4170;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 335;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 4940;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 275;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 5000;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 3620;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMM_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMM_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMM_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMM_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMM_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMM_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMM_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 350;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMM_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 365;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMM_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 380;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMM_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMM_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMM_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 600;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMM_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 590;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMM_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 395;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMM_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 555;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMM_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 1060;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMM_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 1400;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMM_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 1315;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMM_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 1230;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMM_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 1145;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMM_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 8450;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMM_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 675;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMM_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 8750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMM_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 975;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMM_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMM_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 865;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMM_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 890;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMM_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 730;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMM_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 650;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMM_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 645;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMM_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 755;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMM_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 13850;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMM_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 2900;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMM_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 2895;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMM_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 12500;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMM_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 15000;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMM_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 14750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMM_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 13150;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMM_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 2925;
			iVar8 = 0;
			iVar11 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 163:
			StringCopy(&Var2, "G_FMM_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "G_FMM_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "G_FMM_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMM_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMM_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMM_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMM_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMM_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 174:
			StringCopy(&Var2, "G_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "G_FMM_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "G_FMM_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 380;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMM_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMM_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMM_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMM_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMM_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 390;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "CLO_EXM_G_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 950;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "CLO_EXM_G_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 565;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "CLO_EXM_G_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 630;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "G_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 70;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "G_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "G_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 95;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "CLO_EXM_G_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "CLO_EXM_G_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 265;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "CLO_EXM_G_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 330;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "G_FMM_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "G_FMM_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "G_FMM_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 210;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMM_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMM_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMM_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMM_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMM_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "CLO_EXM_G_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "CLO_EXM_G_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 610;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "CLO_EXM_G_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 675;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "G_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 4050;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "G_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 4060;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "G_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 215:
			StringCopy(&Var2, "CLO_EXM_G_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 1760;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 216:
			StringCopy(&Var2, "CLO_EXM_G_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 1375;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 217:
			StringCopy(&Var2, "CLO_EXM_G_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 1440;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMM_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMM_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMM_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "G_FMM_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "G_FMM_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "G_FMM_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 1445;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMM_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 530;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMM_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "CLO_EXM_G_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 1170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "CLO_EXM_G_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 785;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "CLO_EXM_G_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 850;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 237:
			StringCopy(&Var2, "G_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 4260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 4310;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 4130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "G_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "G_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "G_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "G_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "CLO_EXM_G_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1885;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "CLO_EXM_G_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 1500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "CLO_EXM_G_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 1565;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "G_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "G_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "G_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 4290;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 4150;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 4295;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "CLO_EXM_G_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "CLO_EXM_G_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "CLO_EXM_G_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 6240;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 4955;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 5590;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "G_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 4920;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "G_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 4990;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "G_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 4780;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 4775;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 4800;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "CLO_EXM_G_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 2835;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "CLO_EXM_G_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 2450;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "CLO_EXM_G_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 2515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMM_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMM_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMM_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 273:
			StringCopy(&Var2, "G_FMM_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 274:
			StringCopy(&Var2, "G_FMM_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 275:
			StringCopy(&Var2, "G_FMM_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMM_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 385;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 310;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 3655;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 4055;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 3595;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 3605;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 3645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 320;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 286:
			StringCopy(&Var2, "CLO_EXM_G_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 2820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 287:
			StringCopy(&Var2, "CLO_EXM_G_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 2435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 288:
			StringCopy(&Var2, "CLO_EXM_G_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 2500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 230;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1605;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 2230;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2070;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 1690;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 297:
			StringCopy(&Var2, "CLO_EXM_G_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 2715;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 298:
			StringCopy(&Var2, "CLO_EXM_G_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2330;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 299:
			StringCopy(&Var2, "CLO_EXM_G_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 2395;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMM_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMM_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMM_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMM_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMM_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMM_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMM_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMM_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 308:
			StringCopy(&Var2, "G_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "G_FMM_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "G_FMM_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMM_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 95;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMM_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMM_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMM_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 485;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMM_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 545;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 316:
			StringCopy(&Var2, "CLO_EXM_G_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 317:
			StringCopy(&Var2, "CLO_EXM_G_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 318:
			StringCopy(&Var2, "CLO_EXM_G_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 695;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
	}
	if (iVar11 == 1)
	{
		iVar12 = (iParam0 - 10);
		if (iVar12 >= 0 && iVar12 < 121)
		{
			if (iVar12 > 8)
			{
				iVar12 = (iVar12 - 1);
			}
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_955[iVar12]) * Global_293291.f_18));
		}
	}
	else if (iVar11 == 2)
	{
		iVar13 = (iParam0 - 131);
		if (iVar13 >= 0 && iVar13 < 24)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1076[iVar13]) * Global_293291.f_19));
		}
	}
	else if (iVar11 == 3)
	{
		iVar14 = (iParam0 - 155);
		if (iVar14 >= 0 && iVar14 < 128)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1101[iVar14]) * Global_293291.f_20));
		}
	}
	else if (iVar11 == 4)
	{
		iVar15 = (iParam0 - 319);
		if (iVar15 >= 0 && iVar15 < 15)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1230[iVar15]) * Global_293291.f_21));
		}
	}
	if (iParam0 >= 327)
	{
		Global_77059[0 /*14*/].f_5 = 3;
		func_375(iVar10, iParam0, 327, iParam1);
		if (Global_77059[0 /*14*/].f_7 > 0)
		{
			if (unk_0x01758128AAB0BA8F(Global_2621444, joaat("HAT"), 1))
			{
				Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_18));
			}
			else if (unk_0x01758128AAB0BA8F(Global_2621444, joaat("GLASSES"), 1))
			{
				Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_20));
			}
			else if (unk_0x01758128AAB0BA8F(Global_2621444, joaat("WATCH"), 1))
			{
				Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_21));
			}
		}
	}
	else
	{
		func_365(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_402(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 6:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_77059[0 /*14*/].f_5 = 3;
			func_375(iVar10, iParam0, 7, iParam1);
			return;
			break;
	}
	func_365(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_403(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 4:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 4;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 31:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 39:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 40:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 41:
			iVar6 = 10;
			iVar7 = 0;
			if (Global_262145.f_4172 != -1)
			{
				iVar1 = Global_262145.f_4172;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 42:
			iVar6 = 10;
			iVar7 = 1;
			if (Global_262145.f_4173 != -1)
			{
				iVar1 = Global_262145.f_4173;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 43:
			iVar6 = 10;
			iVar7 = 2;
			if (Global_262145.f_4174 != -1)
			{
				iVar1 = Global_262145.f_4174;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 44:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 50:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 55:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 56:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 57:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 58:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 59:
			iVar6 = 11;
			iVar7 = 2;
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
			}
			else
			{
				iVar1 = 725;
			}
			break;
		
		case 60:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 61:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 62:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 67:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 12;
			iVar7 = 0;
			if (Global_262145.f_4175 != -1)
			{
				iVar1 = Global_262145.f_4175;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 74:
			iVar6 = 12;
			iVar7 = 1;
			if (Global_262145.f_4176 != -1)
			{
				iVar1 = Global_262145.f_4176;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 75:
			iVar6 = 12;
			iVar7 = 2;
			if (Global_262145.f_4177 != -1)
			{
				iVar1 = Global_262145.f_4177;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 76:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 81:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 82:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 90:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 91:
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		default:
			Global_77059[0 /*14*/].f_5 = 3;
			func_375(iVar10, iParam0, 92, iParam1);
			if (Global_77059[0 /*14*/].f_7 > 0)
			{
				Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_57));
			}
			return;
			break;
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_293291.f_57));
	StringCopy(&Var2, "T_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_365(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_404(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_77059[0 /*14*/].f_5 = 3;
			func_375(iVar10, iParam0, 26, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "M_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = (iParam0 - 1);
	if (iVar11 >= 0 && iVar11 < 26)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_928[iVar11]) * Global_293291.f_22));
	}
	func_365(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_405(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 300;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 285;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 190;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 165;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 480;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 155;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 350;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 290;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 165;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 165;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 170;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 155;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 165;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 165;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 160;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 205;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 560;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 275;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 290;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 300;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 360;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 270;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 355;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 310;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 350;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 305;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 280;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 320;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 65;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 65;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 165;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 165;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 185;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 175;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 185;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 460;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 185;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 190;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 165;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 165;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 185;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 175;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 235;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 445;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 185;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 190;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 175;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 215;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 225;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 230;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 235;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 225;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 225;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 230;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 235;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 215;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 425;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 245;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 225;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 135;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 130;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 140;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 95;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 105;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 115;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 115;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 115;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 500;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 440;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 1090;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 600;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 1865;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 490;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 470;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 1795;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 1830;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 455;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 455;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 2110;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 380;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 1655;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 415;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 730;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 445;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 425;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 410;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 480;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 485;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 480;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 395;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 495;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 2090;
			break;
		
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 450;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 685;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 365;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 465;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 405;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 400;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 440;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 385;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 435;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 375;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 390;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 475;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 430;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 490;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 490;
			break;
		
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 615;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 315;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 415;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 425;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 435;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 445;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 640;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 460;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 465;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 745;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 845;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 1420;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 475;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 470;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 1000;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 690;
			break;
	}
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_671[iVar11]) * Global_293291.f_17));
	}
	StringCopy(&Var2, "F_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 >= 256)
	{
		Global_77059[0 /*14*/].f_5 = 3;
		func_375(iVar10, iParam0, 256, iParam1);
		if (Global_77059[0 /*14*/].f_7 > 0)
		{
			Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_17));
		}
	}
	else
	{
		func_365(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_406(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 335;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 460;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 455;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 470;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 650;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 385;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 455;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 2150;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 375;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 2190;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 295;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 2240;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 465;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 1740;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 1415;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 325;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 345;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 355;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 395;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 315;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 275;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 265;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 305;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 255;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 235;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 245;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 1865;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 450;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 415;
			break;
		
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 100;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 65;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 100;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 65;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 90;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 225;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 205;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 215;
			break;
		
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 490;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 485;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 2500;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 485;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 100;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 80;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 80;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 95;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 440;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 380;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 80;
			break;
		
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 140;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 255;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 325;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 110;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 345;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 745;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 120;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 130;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 140;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 660;
			break;
		
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 150;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 75;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 90;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 145;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 155;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 255;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 165;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1150;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1150;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 1210;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 1125;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 1135;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 1145;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 1145;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 845;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 480;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 475;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 220;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 65;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 460;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 475;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 470;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 100;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 100;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 95;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 105;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 295;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 250;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 285;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 275;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 105;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 100;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 95;
			break;
	}
	StringCopy(&Var2, "L_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_176[iVar11]) * Global_293291.f_15));
	}
	if (iParam0 >= 256)
	{
		Global_77059[0 /*14*/].f_5 = 3;
		func_375(iVar10, iParam0, 256, iParam1);
		if (Global_77059[0 /*14*/].f_7 > 0)
		{
			Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_15));
		}
	}
	else
	{
		func_365(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_407(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		default:
			Global_77059[0 /*14*/].f_5 = 3;
			func_375(iVar10, iParam0, 16, iParam1);
			return;
			break;
	}
	func_365(&(Global_77059[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_408(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 11:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 21:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 23:
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 26:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 27:
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 28:
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 29:
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 31:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 32:
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 33:
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 34:
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 36:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 37:
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 38:
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 39:
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 40:
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 41:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 42:
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 43:
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 44:
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		case 45:
			iVar6 = 9;
			iVar7 = 4;
			break;
		
		default:
			Global_77059[0 /*14*/].f_5 = 3;
			func_375(iVar10, iParam0, 46, iParam1);
			return;
			break;
	}
	func_365(&(Global_77059[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_409(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMM_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMM_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMM_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMM_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 315;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMM_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMM_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMM_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMM_1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 205;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMM_1_11", 16);
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMM_1_12", 16);
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar6 = 1;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMM_1_14", 16);
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 170;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMM_1_15", 16);
			iVar6 = 1;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			StringCopy(&Var2, "U_FMM_0_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 33:
			StringCopy(&Var2, "U_FMM_0_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMM_0_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMM_0_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMM_0_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMM_0_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMM_0_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMM_0_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMM_0_11", 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "SP_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 49:
			StringCopy(&Var2, "SP_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 50:
			StringCopy(&Var2, "SP_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 51:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 58:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 60:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			StringCopy(&Var2, "SP_FMM_3_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 65:
			StringCopy(&Var2, "SP_FMM_3_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 66:
			StringCopy(&Var2, "SP_FMM_3_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 67:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 80;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[80]));
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[81]));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[82]));
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 50;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[87]));
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMM_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMM_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMM_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMM_5_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMM_5_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMM_5_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMM_5_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMM_5_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			StringCopy(&Var2, "SP_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			if (Global_262145.f_4202 != -1)
			{
				iVar1 = Global_262145.f_4202;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 97:
			StringCopy(&Var2, "SP_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 98:
			StringCopy(&Var2, "SP_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			if (Global_262145.f_4180 != -1)
			{
				iVar1 = Global_262145.f_4180;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 99:
			StringCopy(&Var2, "SP_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 100:
			StringCopy(&Var2, "SP_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 101:
			StringCopy(&Var2, "SP_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			if (Global_262145.f_4196 != -1)
			{
				iVar1 = Global_262145.f_4196;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 102:
			StringCopy(&Var2, "SP_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 103:
			StringCopy(&Var2, "SP_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 104:
			StringCopy(&Var2, "SP_FMM_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 105:
			StringCopy(&Var2, "SP_FMM_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 106:
			StringCopy(&Var2, "SP_FMM_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 107:
			StringCopy(&Var2, "SP_FMM_6_11", 16);
			iVar6 = 6;
			iVar7 = 11;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 108:
			StringCopy(&Var2, "SP_FMM_6_12", 16);
			iVar6 = 6;
			iVar7 = 12;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 109:
			StringCopy(&Var2, "SP_FMM_6_13", 16);
			iVar6 = 6;
			iVar7 = 13;
			if (Global_262145.f_4182 != -1)
			{
				iVar1 = Global_262145.f_4182;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 110:
			StringCopy(&Var2, "SP_FMM_6_14", 16);
			iVar6 = 6;
			iVar7 = 14;
			if (Global_262145.f_4197 != -1)
			{
				iVar1 = Global_262145.f_4197;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 111:
			StringCopy(&Var2, "SP_FMM_6_15", 16);
			iVar6 = 6;
			iVar7 = 15;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 112:
			StringCopy(&Var2, "SP_FMM_6_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			if (Global_262145.f_4202 != -1)
			{
				iVar1 = Global_262145.f_4202;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 113:
			StringCopy(&Var2, "SP_FMM_6_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 114:
			StringCopy(&Var2, "SP_FMM_6_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			if (Global_262145.f_4180 != -1)
			{
				iVar1 = Global_262145.f_4180;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 115:
			StringCopy(&Var2, "SP_FMM_6_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 116:
			StringCopy(&Var2, "SP_FMM_6_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 117:
			StringCopy(&Var2, "SP_FMM_6_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			if (Global_262145.f_4196 != -1)
			{
				iVar1 = Global_262145.f_4196;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 118:
			StringCopy(&Var2, "SP_FMM_6_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 119:
			StringCopy(&Var2, "SP_FMM_6_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 120:
			StringCopy(&Var2, "SP_FMM_6_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 121:
			StringCopy(&Var2, "SP_FMM_6_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 122:
			StringCopy(&Var2, "SP_FMM_6_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 123:
			StringCopy(&Var2, "SP_FMM_6_11", 16);
			iVar6 = 7;
			iVar7 = 11;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 124:
			StringCopy(&Var2, "SP_FMM_6_12", 16);
			iVar6 = 7;
			iVar7 = 12;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 125:
			StringCopy(&Var2, "SP_FMM_6_13", 16);
			iVar6 = 7;
			iVar7 = 13;
			if (Global_262145.f_4182 != -1)
			{
				iVar1 = Global_262145.f_4182;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 126:
			StringCopy(&Var2, "SP_FMM_6_14", 16);
			iVar6 = 7;
			iVar7 = 14;
			if (Global_262145.f_4197 != -1)
			{
				iVar1 = Global_262145.f_4197;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 127:
			StringCopy(&Var2, "SP_FMM_6_15", 16);
			iVar6 = 7;
			iVar7 = 15;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 435;
			}
			break;
	}
	switch (iParam0)
	{
		case 128:
			StringCopy(&Var2, "U_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 136:
			StringCopy(&Var2, "U_FMM_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 137:
			StringCopy(&Var2, "U_FMM_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 138:
			StringCopy(&Var2, "U_FMM_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 139:
			StringCopy(&Var2, "U_FMM_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 140:
			StringCopy(&Var2, "U_FMM_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 141:
			StringCopy(&Var2, "U_FMM_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 142:
			StringCopy(&Var2, "U_FMM_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 143:
			StringCopy(&Var2, "U_FMM_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 144:
			StringCopy(&Var2, "U_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 145:
			StringCopy(&Var2, "U_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 340;
			break;
		
		case 146:
			StringCopy(&Var2, "U_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 335;
			break;
		
		case 147:
			StringCopy(&Var2, "U_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 148:
			StringCopy(&Var2, "U_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 345;
			break;
		
		case 149:
			StringCopy(&Var2, "U_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 550;
			break;
		
		case 150:
			StringCopy(&Var2, "U_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 151:
			StringCopy(&Var2, "U_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 152:
			StringCopy(&Var2, "U_FMM_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 153:
			StringCopy(&Var2, "U_FMM_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 154:
			StringCopy(&Var2, "U_FMM_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 545;
			break;
		
		case 155:
			StringCopy(&Var2, "U_FMM_9_11", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 156:
			StringCopy(&Var2, "U_FMM_9_12", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 315;
			break;
		
		case 157:
			StringCopy(&Var2, "U_FMM_9_13", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 520;
			break;
		
		case 158:
			StringCopy(&Var2, "U_FMM_9_14", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 159:
			StringCopy(&Var2, "U_FMM_9_15", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 160:
			StringCopy(&Var2, "SP_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			if (Global_262145.f_4202 != -1)
			{
				iVar1 = Global_262145.f_4202;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 161:
			StringCopy(&Var2, "SP_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 162:
			StringCopy(&Var2, "SP_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 163:
			StringCopy(&Var2, "SP_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 164:
			StringCopy(&Var2, "SP_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 165:
			StringCopy(&Var2, "SP_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			if (Global_262145.f_4196 != -1)
			{
				iVar1 = Global_262145.f_4196;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 166:
			StringCopy(&Var2, "SP_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			if (Global_262145.f_4185 != -1)
			{
				iVar1 = Global_262145.f_4185;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 167:
			StringCopy(&Var2, "SP_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 168:
			StringCopy(&Var2, "SP_FMM_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 169:
			StringCopy(&Var2, "SP_FMM_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 170:
			StringCopy(&Var2, "SP_FMM_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 171:
			StringCopy(&Var2, "SP_FMM_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 172:
			StringCopy(&Var2, "SP_FMM_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			if (Global_262145.f_4183 != -1)
			{
				iVar1 = Global_262145.f_4183;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 173:
			StringCopy(&Var2, "SP_FMM_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			if (Global_262145.f_4198 != -1)
			{
				iVar1 = Global_262145.f_4198;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 174:
			StringCopy(&Var2, "SP_FMM_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 175:
			StringCopy(&Var2, "SP_FMM_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 460;
			}
			break;
		
		case 176:
			StringCopy(&Var2, "SP_FMM_10_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			if (Global_262145.f_4202 != -1)
			{
				iVar1 = Global_262145.f_4202;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 177:
			StringCopy(&Var2, "SP_FMM_10_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 178:
			StringCopy(&Var2, "SP_FMM_10_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 179:
			StringCopy(&Var2, "SP_FMM_10_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 180:
			StringCopy(&Var2, "SP_FMM_10_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 181:
			StringCopy(&Var2, "SP_FMM_10_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			if (Global_262145.f_4196 != -1)
			{
				iVar1 = Global_262145.f_4196;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 182:
			StringCopy(&Var2, "SP_FMM_10_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			if (Global_262145.f_4185 != -1)
			{
				iVar1 = Global_262145.f_4185;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 183:
			StringCopy(&Var2, "SP_FMM_10_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 184:
			StringCopy(&Var2, "SP_FMM_10_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 185:
			StringCopy(&Var2, "SP_FMM_10_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 186:
			StringCopy(&Var2, "SP_FMM_10_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 187:
			StringCopy(&Var2, "SP_FMM_10_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 188:
			StringCopy(&Var2, "SP_FMM_10_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			if (Global_262145.f_4183 != -1)
			{
				iVar1 = Global_262145.f_4183;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 189:
			StringCopy(&Var2, "SP_FMM_10_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			if (Global_262145.f_4198 != -1)
			{
				iVar1 = Global_262145.f_4198;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 190:
			StringCopy(&Var2, "SP_FMM_10_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 191:
			StringCopy(&Var2, "SP_FMM_10_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 460;
			}
			break;
	}
	switch (iParam0)
	{
		case 192:
			StringCopy(&Var2, "U_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 193:
			StringCopy(&Var2, "U_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 194:
			StringCopy(&Var2, "U_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 695;
			break;
		
		case 195:
			StringCopy(&Var2, "U_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 196:
			StringCopy(&Var2, "U_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 197:
			StringCopy(&Var2, "U_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 198:
			StringCopy(&Var2, "U_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 199:
			StringCopy(&Var2, "U_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 450;
			break;
		
		case 200:
			StringCopy(&Var2, "U_FMM_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 201:
			StringCopy(&Var2, "U_FMM_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 202:
			StringCopy(&Var2, "U_FMM_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 1060;
			break;
		
		case 203:
			StringCopy(&Var2, "U_FMM_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 1040;
			break;
		
		case 204:
			StringCopy(&Var2, "U_FMM_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 205:
			StringCopy(&Var2, "U_FMM_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 206:
			StringCopy(&Var2, "U_FMM_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 207:
			StringCopy(&Var2, "U_FMM_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 208:
			StringCopy(&Var2, "U_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 209:
			StringCopy(&Var2, "U_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 210:
			StringCopy(&Var2, "U_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 680;
			break;
		
		case 211:
			StringCopy(&Var2, "U_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 212:
			StringCopy(&Var2, "U_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "U_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 214:
			StringCopy(&Var2, "U_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "U_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "U_FMM_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "U_FMM_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "U_FMM_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "U_FMM_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "U_FMM_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "U_FMM_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1065;
			break;
		
		case 222:
			StringCopy(&Var2, "U_FMM_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "U_FMM_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			StringCopy(&Var2, "U_FMM_1_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[16]));
			break;
		
		case 225:
			StringCopy(&Var2, "U_FMM_1_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 60;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[17]));
			break;
		
		case 226:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "U_FMM_1_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 40;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[19]));
			break;
		
		case 228:
			StringCopy(&Var2, "U_FMM_1_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 315;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[20]));
			break;
		
		case 229:
			StringCopy(&Var2, "U_FMM_1_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 215;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[21]));
			break;
		
		case 230:
			StringCopy(&Var2, "U_FMM_1_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 265;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[22]));
			break;
		
		case 231:
			StringCopy(&Var2, "U_FMM_1_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[23]));
			break;
		
		case 232:
			StringCopy(&Var2, "U_FMM_1_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 205;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[24]));
			break;
		
		case 233:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 234:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 235:
			StringCopy(&Var2, "U_FMM_1_11", 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 60;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[27]));
			break;
		
		case 236:
			StringCopy(&Var2, "U_FMM_1_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 55;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[28]));
			break;
		
		case 237:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 238:
			StringCopy(&Var2, "U_FMM_1_14", 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 170;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[30]));
			break;
		
		case 239:
			StringCopy(&Var2, "U_FMM_1_15", 16);
			iVar6 = 14;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 240:
			StringCopy(&Var2, "U_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 0;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[32]));
			break;
	}
	if (iParam0 == 23 || iParam0 == 231)
	{
		if (func_387(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2980));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(45) * Global_262145.f_433[23]));
		}
	}
	else if (iParam0 == 17 || iParam0 == 225)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(450) * Global_262145.f_2979));
	}
	else if (iParam0 == 28 || iParam0 == 236)
	{
		if (func_387(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_262145.f_2978));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(55) * Global_262145.f_433[28]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 32)
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[iVar11]));
		}
	}
	else if (iParam0 >= 32 && iParam0 < 48)
	{
		iVar12 = (iParam0 - 32);
		if (iVar12 >= 0 && iVar12 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[iVar12]));
		}
	}
	else if (iParam0 >= 128 && iParam0 < 160)
	{
		iVar13 = (iParam0 - 160) + 124;
		if (iVar13 >= 0 && iVar13 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[iVar13]));
		}
	}
	else if (iParam0 >= 192 && iParam0 < 224)
	{
		iVar14 = (iParam0 - 160) + 188;
		if (iVar14 >= 0 && iVar14 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[iVar14]));
		}
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_293291.f_16));
	if (iParam0 >= 241)
	{
		Global_77059[0 /*14*/].f_5 = 3;
		func_375(iVar10, iParam0, 241, iParam1);
		if (Global_77059[0 /*14*/].f_7 > 0)
		{
			Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_16));
		}
	}
	else
	{
		func_365(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_410(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 315;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 205;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 170;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 160;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 205;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 110;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 115;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 115;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 150;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 150;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 115;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 140;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 125;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 115;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 150;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 275;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 460;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 260;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 2520;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 350;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 3125;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 80;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 45;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 2485;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 2945;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 3080;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 2990;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 3750;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 515;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 530;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 2810;
			break;
		
		case 108:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 109:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 155;
			break;
		
		case 110:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 320;
			break;
		
		case 111:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 140;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 145;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 150;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 140;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 135;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 130;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 130;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 145;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 740;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 790;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 130;
			break;
	}
	switch (iParam0)
	{
		case 124:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 125:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 128:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 141:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 340;
			break;
		
		case 142:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 335;
			break;
		
		case 143:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 345;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 550;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 545;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 315;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 520;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 156:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 505;
			break;
		
		case 157:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 470;
			break;
		
		case 158:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 475;
			break;
		
		case 159:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 173:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 360;
			break;
		
		case 174:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 2450;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 188:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 189:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 190:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 695;
			break;
		
		case 191:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 450;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 1060;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 1040;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 205:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 206:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 680;
			break;
		
		case 207:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 208:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1065;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 220:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 221:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 222:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 440;
			break;
		
		case 223:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 445;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 440;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 325;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 435;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 440;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 325;
			break;
		
		case 236:
			iVar6 = 15;
			iVar7 = 0;
			break;
	}
	StringCopy(&Var2, "U_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 == 23)
	{
		if (func_387(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2980) * Global_293291.f_16));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(45) * Global_262145.f_433[23]) * Global_293291.f_16));
		}
	}
	else if (iParam0 == 17)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(450) * Global_262145.f_2979) * Global_293291.f_16));
	}
	else if (iParam0 == 28)
	{
		if (func_387(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(500) * Global_262145.f_2978) * Global_293291.f_16));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(55) * Global_262145.f_433[28]) * Global_293291.f_16));
		}
	}
	else
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 237)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[iVar11]) * Global_293291.f_16));
		}
	}
	if (iParam0 >= 237)
	{
		Global_77059[0 /*14*/].f_5 = 3;
		func_375(iVar10, iParam0, 237, iParam1);
		if (Global_77059[0 /*14*/].f_7 > 0)
		{
			Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_16));
		}
	}
	else
	{
		func_365(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_411(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[0]));
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 190;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[1]));
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 185;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[2]));
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 180;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[3]));
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 175;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[4]));
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 170;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[5]));
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 580;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[6]));
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 575;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[7]));
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 570;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[8]));
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 565;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[9]));
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 560;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[10]));
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 1100;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[11]));
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 1095;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[12]));
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 1090;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[13]));
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 1085;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[14]));
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 1080;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[15]));
			break;
		
		case 18:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 520;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[16]));
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 515;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[17]));
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 510;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[18]));
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 505;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[19]));
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[20]));
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 25:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 295;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[21]));
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 290;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[22]));
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 285;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[23]));
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 280;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[24]));
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 275;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[25]));
			break;
		
		case 31:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 950;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[26]));
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 945;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[27]));
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 940;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[28]));
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 935;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[29]));
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 930;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[30]));
			break;
		
		case 37:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 440;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[31]));
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 435;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[32]));
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 430;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[33]));
			break;
		
		case 41:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 425;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[34]));
			break;
		
		case 42:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 420;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[35]));
			break;
		
		case 43:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 44:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1150;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[36]));
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 1145;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[37]));
			break;
		
		case 47:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 1140;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[38]));
			break;
		
		case 48:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1135;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[39]));
			break;
		
		case 49:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1130;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[40]));
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 395;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[41]));
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 390;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[42]));
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 385;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[43]));
			break;
		
		case 53:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 380;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[44]));
			break;
		
		case 54:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 375;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[45]));
			break;
		
		case 55:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 56:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 57:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[46]));
			break;
		
		case 58:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 495;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[47]));
			break;
		
		case 59:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 490;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[48]));
			break;
		
		case 60:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 485;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[49]));
			break;
		
		case 61:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 480;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[50]));
			break;
		
		case 62:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 1050;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[51]));
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 1045;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[52]));
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 1040;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[53]));
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 1035;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[54]));
			break;
		
		case 67:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 1030;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[55]));
			break;
		
		case 68:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 69:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 550;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[56]));
			break;
		
		case 70:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 545;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[57]));
			break;
		
		case 71:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 540;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[58]));
			break;
		
		case 72:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 535;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[59]));
			break;
		
		case 73:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 530;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[60]));
			break;
		
		case 74:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 1200;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[61]));
			break;
		
		case 75:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1195;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[62]));
			break;
		
		case 76:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 1190;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[63]));
			break;
		
		case 77:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 1185;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[64]));
			break;
		
		case 78:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1180;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[65]));
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 80:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 2000;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[66]));
			break;
		
		case 81:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 1995;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[67]));
			break;
		
		case 82:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 1990;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[68]));
			break;
		
		case 83:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 1985;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[69]));
			break;
		
		case 84:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 1980;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[70]));
			break;
		
		case 85:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 475;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[71]));
			break;
		
		case 86:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 470;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[72]));
			break;
		
		case 87:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 465;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[73]));
			break;
		
		case 88:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 460;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[74]));
			break;
		
		case 89:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 455;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2533[75]));
			break;
		
		case 90:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		default:
			Global_77059[0 /*14*/].f_5 = 3;
			func_375(iVar10, iParam0, 91, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_365(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_412()
{
	Global_77059[0 /*14*/].f_1 = -1;
	Global_77059[0 /*14*/].f_2 = -1;
	Global_77059[0 /*14*/].f_5 = -1;
	Global_77059[0 /*14*/].f_3 = -1;
	Global_77059[0 /*14*/].f_4 = -1;
	Global_77059[0 /*14*/].f_7 = 0;
	Global_77059[0 /*14*/].f_6 = 0;
	Global_77059[0 /*14*/].f_13 = -1;
	Global_77059[0 /*14*/].f_12 = 0;
	Global_77059[0 /*14*/] = 0;
	StringCopy(&(Global_77059[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_413(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 0;
		
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
		
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
			return 2;
		
		case 34:
		case 35:
		case 36:
		case 37:
			return 3;
		
		case 38:
		case 39:
		case 40:
		case 41:
			return 4;
		
		case 42:
		case 43:
		case 44:
		case 45:
			return 5;
		
		case 46:
		case 47:
		case 48:
		case 49:
			return 6;
		
		case 50:
			return 7;
		
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
			return 8;
		
		case 60:
		case 61:
		case 62:
		case 63:
			return 9;
		
		case 64:
		case 65:
		case 66:
		case 67:
			return 10;
		
		case 68:
		case 69:
		case 70:
		case 71:
			return 11;
		
		case 72:
		case 73:
		case 74:
		case 75:
			return 12;
		
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
			return 13;
		
		case 80:
		case 81:
		case 82:
		case 83:
			return 14;
		
		case 84:
		case 85:
		case 86:
		case 87:
			return 15;
		
		case 88:
		case 89:
		case 90:
		case 91:
			return 16;
		
		case 92:
		case 93:
		case 94:
		case 95:
			return 17;
		
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
			return 18;
		
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
		case 113:
			return 19;
		
		case 114:
		case 115:
		case 116:
		case 117:
			return 20;
		
		case 118:
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
			return 21;
		
		case 124:
		case 125:
		case 126:
		case 127:
			return 22;
		
		case 128:
		case 129:
		case 130:
		case 131:
			return 23;
		
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
			return 24;
		
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
			return 25;
		
		case 144:
		case 145:
		case 146:
		case 147:
			return 26;
		
		case 148:
		case 149:
		case 150:
		case 151:
			return 27;
		
		case 152:
		case 153:
		case 154:
		case 155:
			return 28;
		
		case 156:
		case 157:
		case 158:
		case 159:
			return 29;
		
		case 160:
		case 161:
		case 162:
		case 163:
			return 30;
		
		default:
	}
	switch (iVar0)
	{
		case 164:
		case 165:
			return 31;
		
		case 166:
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
		case 172:
		case 173:
		case 174:
			return 32;
		
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 181:
		case 182:
		case 183:
		case 184:
			return 33;
		
		case 185:
		case 186:
		case 187:
		case 188:
		case 189:
		case 190:
			return 34;
		
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
			return 35;
		
		case 199:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
			return 36;
		
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
			return 37;
		
		case 211:
		case 212:
		case 213:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
			return 38;
		
		case 220:
		case 221:
		case 222:
		case 223:
		case 224:
		case 225:
		case 226:
		case 227:
			return 39;
		
		case 228:
		case 229:
		case 230:
		case 231:
		case 232:
		case 233:
		case 234:
		case 235:
			return 40;
		
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
			return 41;
		
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
			return 42;
		
		case 250:
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
			return 43;
		
		case 258:
		case 259:
		case 260:
		case 261:
		case 262:
		case 263:
		case 264:
		case 265:
			return 44;
		
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 271:
			return 45;
		
		case 272:
		case 273:
		case 274:
		case 275:
		case 276:
		case 277:
			return 46;
		
		case 278:
		case 279:
		case 280:
		case 281:
		case 282:
		case 283:
		case 284:
		case 285:
			return 47;
		
		case 286:
		case 287:
		case 288:
		case 289:
		case 290:
		case 291:
			return 48;
		
		case 292:
		case 293:
		case 294:
		case 295:
			return 49;
		
		case 296:
		case 297:
		case 298:
		case 299:
			return 50;
		
		case 300:
		case 301:
		case 302:
		case 303:
		case 304:
		case 305:
		case 306:
		case 307:
			return 51;
		
		case 308:
		case 309:
		case 310:
		case 311:
		case 312:
		case 313:
		case 314:
		case 315:
			return 52;
		
		case 316:
		case 317:
		case 318:
		case 319:
		case 320:
		case 321:
		case 322:
		case 323:
			return 53;
		
		case 324:
		case 325:
		case 326:
		case 327:
		case 328:
		case 329:
		case 330:
		case 331:
			return 54;
		
		default:
	}
	return -1;
}

void func_414(int iParam0, var uParam1, int iParam2)
{
	struct<8> Var0;
	int iVar10;
	
	if (iParam2 == -1)
	{
		iParam2 = unk_0xCB567ED25393C1DF(iParam0);
		if (iParam2 != -1)
		{
		}
	}
	if ((*uParam1)[1] > 0 && unk_0x01758128AAB0BA8F(unk_0xF94D55021DC59203(iParam0, 1, (*uParam1)[1], uParam1->f_13[1]), joaat("SHRINK_HEAD"), 0))
	{
		unk_0x062D667A62314213(iParam0, &Var0);
		if (unk_0x6471F4759775FCA4(iParam0) == joaat("mp_m_freemode_01"))
		{
			unk_0x759AC27BF6C1426E(iParam0, 0, 0, 0, Var0.f_3, Var0.f_4, Var0.f_5, 0f, Var0.f_7, 0f, false);
		}
		else if (unk_0x6471F4759775FCA4(iParam0) == joaat("mp_f_freemode_01"))
		{
			unk_0x759AC27BF6C1426E(iParam0, 21, 0, 0, Var0.f_3, Var0.f_4, Var0.f_5, 0f, Var0.f_7, 0f, false);
		}
		iVar10 = 0;
		while (iVar10 < 20)
		{
			unk_0xD8F926AF2B16BC6E(iParam0, iVar10, 0f);
			iVar10++;
		}
	}
	else if (iParam2 != -1 && unk_0xC502CD39B4994F3A(iParam2) != unk_0x1146A9AE09CE2B14())
	{
		if (unk_0x3B807F9BB6C23353(unk_0xC502CD39B4994F3A(iParam2)) && unk_0xA6BE8F025C6B653F(iParam0))
		{
			unk_0x66EE05995A4D4A82(iParam0, unk_0xC502CD39B4994F3A(iParam2));
		}
	}
	else
	{
		func_415(iParam0, -1);
	}
}

void func_415(int iParam0, int iParam1)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	bool bVar19;
	int iVar20;
	
	if (!unk_0x313CC23B5525839F(iParam0))
	{
	}
	unk_0x062D667A62314213(iParam0, &Var0);
	iVar10 = func_133(2097, iParam1, 0);
	iVar11 = func_133(2098, iParam1, 0);
	iVar12 = func_133(2099, iParam1, 0);
	iVar13 = func_133(2100, iParam1, 0);
	iVar14 = func_133(2101, iParam1, 0);
	iVar15 = func_133(2102, iParam1, 0);
	fVar16 = func_429(134, iParam1);
	fVar17 = func_429(135, iParam1);
	fVar18 = func_429(136, iParam1);
	bVar19 = func_428(160, iParam1);
	if (((((((((Var0 != iVar10 || Var0.f_1 != iVar11) || Var0.f_2 != iVar12) || Var0.f_3 != iVar13) || Var0.f_4 != iVar14) || Var0.f_5 != iVar15) || Var0.f_6 != fVar16) || Var0.f_7 != fVar17) || Var0.f_8 != fVar18) || Var0.f_9 != bVar19)
	{
		unk_0x759AC27BF6C1426E(iParam0, iVar10, iVar11, iVar12, iVar13, iVar14, iVar15, fVar16, fVar17, fVar18, bVar19);
		iVar20 = func_133(2103, iParam1, 0);
		if (iVar20 > 0)
		{
			func_416(iParam0, iParam1, 0);
		}
	}
}

void func_416(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	var uVar15;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar1 = iVar0;
		iVar2 = func_427(iVar1);
		if (!bParam2)
		{
			fVar3 = func_429(iVar2, iParam1);
		}
		else
		{
			fVar3 = func_426(iVar2, iParam1);
		}
		unk_0xD8F926AF2B16BC6E(iParam0, iVar1, fVar3);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 13)
	{
		iVar5 = func_425(iVar4);
		iVar6 = func_424(iVar5);
		iVar7 = func_423(iVar5);
		if (iVar6 != -1 && iVar7 != -1)
		{
			if (!bParam2)
			{
				iVar10 = func_95(iVar6, iParam1, -1);
				uVar11 = func_429(iVar7, iParam1);
			}
			else
			{
				iVar10 = func_422(iVar6, iParam1);
				uVar11 = func_426(iVar7, iParam1);
			}
			unk_0xB7EDA69A6A5C7562(iParam0, iVar5, iVar10, uVar11);
			iVar8 = func_421(iVar5);
			iVar9 = func_420(iVar5);
			if (iVar8 != -1)
			{
				if (!bParam2)
				{
					iVar13 = func_133(iVar8, iParam1, 0);
					iVar14 = func_133(iVar9, iParam1, 0);
				}
				else
				{
					iVar13 = func_419(iVar8, iParam1);
					iVar14 = func_419(iVar9, iParam1);
				}
				func_418(iVar13, &uVar12, &uVar15);
				unk_0x76DCBBAB09EC9564(iParam0, iVar5, uVar15, uVar12, iVar14);
			}
		}
		iVar4++;
	}
	func_417(&iParam0, iParam1, bParam2);
}

void func_417(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	
	if (!bParam2)
	{
		fVar0 = func_429(157, iParam1);
	}
	else
	{
		fVar0 = func_426(157, iParam1);
	}
	if (*iParam0 == unk_0x7D2B9E6A64637269())
	{
	}
	unk_0xC10C84A8F8D6A4BB(*iParam0, SYSTEM::ROUND(fVar0));
}

void func_418(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	*uParam1 = SYSTEM::SHIFT_RIGHT(iParam0, 16);
	iVar0 = iParam0 & 65535;
	*uParam2 = iVar0;
}

int func_419(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2555716[iParam0 /*3*/][func_129(iParam1)];
	if (unk_0xFC832BB48EA293B3(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0;
}

int func_420(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2161;
		
		case 1:
			return 2162;
		
		case 5:
			return 2163;
		
		case 8:
			return 2164;
		
		case 10:
			return 2159;
		
		default:
	}
	return -1;
}

int func_421(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2154;
		
		case 1:
			return 2155;
		
		case 5:
			return 2156;
		
		case 8:
			return 2157;
		
		case 10:
			return 2158;
		
		default:
	}
	return -1;
}

int func_422(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_94();
	}
	iVar1 = 0;
	iVar2 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar1 = unk_0x7DAFCA3E4EC9113B((iParam0 - 384), 0, 1, iParam1);
		iVar2 = ((iParam0 - 384) - unk_0x5A0258255BDE2FB1((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar1 = unk_0x7DAFCA3E4EC9113B((iParam0 - 457), 1, 1, iParam1);
		iVar2 = ((iParam0 - 457) - unk_0x5A0258255BDE2FB1((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar1 = unk_0x7DAFCA3E4EC9113B((iParam0 - 1281), 0, 0, 0);
		iVar2 = ((iParam0 - 1281) - unk_0x5A0258255BDE2FB1((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar1 = unk_0x7DAFCA3E4EC9113B((iParam0 - 1305), 1, 0, 0);
		iVar2 = ((iParam0 - 1305) - unk_0x5A0258255BDE2FB1((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar1 = unk_0x83F92F0DDD94A22D((iParam0 - 1393), 0, 1, iParam1);
		iVar2 = ((iParam0 - 1393) - unk_0x5A0258255BDE2FB1((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar1 = unk_0x83F92F0DDD94A22D((iParam0 - 1361), 0, 0, 0);
		iVar2 = ((iParam0 - 1361) - unk_0x5A0258255BDE2FB1((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
		iVar2 = ((iParam0 - 3879) - unk_0x5A0258255BDE2FB1((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 4143), 0, 0, 0, "_MP_NGPSTAT_INT");
		iVar2 = ((iParam0 - 4143) - unk_0x5A0258255BDE2FB1((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 4399), 0, 1, iParam1, "_MP_LRPSTAT_INT");
		iVar2 = ((iParam0 - 4399) - unk_0x5A0258255BDE2FB1((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 6413), 0, 1, iParam1, "_MP_APAPSTAT_INT");
		iVar2 = ((iParam0 - 6413) - unk_0x5A0258255BDE2FB1((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 7262), 0, 1, iParam1, "_MP_LR2PSTAT_INT");
		iVar2 = ((iParam0 - 7262) - unk_0x5A0258255BDE2FB1((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 7681), 0, 1, iParam1, "_MP_BIKEPSTAT_INT");
		iVar2 = ((iParam0 - 7681) - unk_0x5A0258255BDE2FB1((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 9553), 0, 1, iParam1, "_MP_IMPEXPPSTAT_INT");
		iVar2 = ((iParam0 - 9553) - unk_0x5A0258255BDE2FB1((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 15265), 0, 1, iParam1, "_MP_GUNRPSTAT_INT");
		iVar2 = ((iParam0 - 15265) - unk_0x5A0258255BDE2FB1((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7641) - unk_0x5A0258255BDE2FB1((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 7313), 0, 0, 0, "_MP_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7313) - unk_0x5A0258255BDE2FB1((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
		iVar2 = ((iParam0 - 16010) - unk_0x5A0258255BDE2FB1((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
		iVar2 = ((iParam0 - 18162) - unk_0x5A0258255BDE2FB1((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
		iVar2 = ((iParam0 - 19018) - unk_0x5A0258255BDE2FB1((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
		iVar2 = ((iParam0 - 22194) - unk_0x5A0258255BDE2FB1((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
		iVar2 = ((iParam0 - 25538) - unk_0x5A0258255BDE2FB1((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
		iVar2 = ((iParam0 - 27258) - unk_0x5A0258255BDE2FB1((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
		iVar2 = ((iParam0 - 28483) - unk_0x5A0258255BDE2FB1((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 30483), 0, 1, iParam1, "_HISLANDPSTAT_INT");
		iVar2 = ((iParam0 - 30483) - unk_0x5A0258255BDE2FB1((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar1 = unk_0x6B2DB28D6D5448A2((iParam0 - 30707), 0, 1, iParam1, "_TUNERPSTAT_INT");
		iVar2 = ((iParam0 - 30707) - unk_0x5A0258255BDE2FB1((iParam0 - 30707)) * 8) * 8;
	}
	if (!unk_0x7419FA8584FCEA12(iVar1, &iVar0, iVar2, 8))
	{
		iVar0 = 0;
	}
	if (iParam0 == 384)
	{
	}
	return iVar0;
}

int func_423(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 90;
		
		case 7:
			return 93;
		
		case 0:
			return 87;
		
		case 6:
			return 92;
		
		case 2:
			return 89;
		
		case 1:
			return 88;
		
		case 4:
			return 91;
		
		case 8:
			return 158;
		
		case 9:
			return 159;
		
		case 5:
			return 160;
		
		case 10:
			return 163;
		
		case 11:
			return 161;
		
		case 12:
			return 162;
		
		default:
	}
	return -1;
}

int func_424(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 450;
		
		case 7:
			return 453;
		
		case 0:
			return 447;
		
		case 6:
			return 452;
		
		case 2:
			return 449;
		
		case 1:
			return 448;
		
		case 4:
			return 451;
		
		case 8:
			return 3940;
		
		case 9:
			return 3941;
		
		case 5:
			return 3942;
		
		case 10:
			return 3943;
		
		case 11:
			return 3944;
		
		case 12:
			return 3945;
		
		default:
	}
	return -1;
}

int func_425(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
		
		case 1:
			return 3;
		
		case 2:
			return 9;
		
		case 3:
			return 6;
		
		case 4:
			return 0;
		
		case 5:
			return 4;
		
		case 6:
			return 5;
		
		case 7:
			return 2;
		
		case 8:
			return 1;
		
		case 9:
			return 8;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		default:
	}
	return -1;
}

float func_426(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2591939[iParam0 /*3*/][func_129(iParam1)];
	if (unk_0xB35FEF5CE3334BE4(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0f;
}

int func_427(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 137;
		
		case 1:
			return 138;
		
		case 2:
			return 139;
		
		case 3:
			return 140;
		
		case 4:
			return 141;
		
		case 5:
			return 142;
		
		case 6:
			return 143;
		
		case 7:
			return 144;
		
		case 8:
			return 145;
		
		case 9:
			return 146;
		
		case 10:
			return 147;
		
		case 11:
			return 148;
		
		case 12:
			return 149;
		
		case 13:
			return 150;
		
		case 14:
			return 151;
		
		case 15:
			return 152;
		
		case 16:
			return 153;
		
		case 17:
			return 154;
		
		case 18:
			return 155;
		
		case 19:
			return 156;
		
		default:
	}
	return -1;
}

int func_428(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2592627[iParam0 /*3*/][func_129(iParam1)];
	if (unk_0xEB399571DCA129A9(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

float func_429(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2591939[iParam0 /*3*/][func_129(iParam1)];
	if (unk_0xFB03099134FEF45C(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

void func_430(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 76)
	{
		if (func_549(iParam0, iVar0, -1))
		{
			if (((((((((iVar0 == 0 || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 8) || iVar0 == 10) || iVar0 == 11)
			{
				func_431(iParam0, iVar0, -1, -1);
			}
		}
		iVar0++;
	}
}

void func_431(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = unk_0xCB567ED25393C1DF(iParam0);
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		Global_77129[iVar1] = -1;
		Global_77129.f_13[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_77129.f_26)
	{
		Global_77129.f_26[iVar1] = -1;
		Global_77129.f_36[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_77129.f_46)
	{
		Global_77129.f_46[iVar1] = -1;
		iVar1++;
	}
	bVar2 = false;
	if (func_555(iParam0, &Global_77129, iParam1, &iParam3))
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (Global_77129[iVar1] != -1)
			{
				if (unk_0x094C1D2DFE050D6E(iParam0, iVar1) == Global_77129[iVar1] && unk_0x288277F22D527487(iParam0, iVar1) == Global_77129.f_13[iVar1])
				{
					if (iVar1 == 2)
					{
						bVar0 = true;
					}
					if (iVar1 == 1)
					{
						bVar2 = true;
					}
					unk_0x4170FE884DF7426D(iParam0, iVar1, 0, 0, 0);
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < Global_77129.f_26)
		{
			if (Global_77129.f_26[iVar1] != -1 && Global_77129.f_26[iVar1] != 255)
			{
				if (unk_0x228A4ED518554B3F(iParam0, iVar1) == Global_77129.f_26[iVar1] && unk_0x64F7E3FF8F40315D(iParam0, iVar1) == Global_77129.f_36[iVar1])
				{
					unk_0x7EDC239EB46006D5(iParam0, iVar1);
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			if (!func_548())
			{
				if (func_428(161, -1))
				{
					func_437(iParam0, 2, func_133(2053, Global_77056, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_437(iParam0, 2, func_133(753, Global_77056, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
		if (iParam1 == 4)
		{
			if (bVar2)
			{
				if (iParam2 != -1 && iParam2 != unk_0x1146A9AE09CE2B14())
				{
					if (unk_0x3B807F9BB6C23353(unk_0xC502CD39B4994F3A(iParam2)))
					{
						unk_0x66EE05995A4D4A82(iParam0, unk_0xC502CD39B4994F3A(iParam2));
					}
				}
				else
				{
					func_415(iParam0, -1);
				}
			}
			func_436(0);
			func_432(1, 2);
		}
	}
}

void func_432(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = iParam0 != true;
	bVar1 = iParam1 != 2;
	if (bVar0 == 1)
	{
		bVar2 = false;
		if (!iParam0 == 3)
		{
			if (unk_0xB9F59A3A63341AEA())
			{
				unk_0x5E9616802197B066(Global_1668616);
				Global_1668616 = -1f;
				unk_0xB2D4457D10260C59(false);
				bVar2 = true;
			}
			unk_0x595B9EE1AA7788C8(bVar0);
			unk_0x191DDA30577F440A(&(Global_1662247[unk_0x1146A9AE09CE2B14() /*199*/].f_198), 0);
		}
		else
		{
			if (unk_0xB99476938BE4BE43() || unk_0xCC9187BE146DCE4F())
			{
				unk_0x595B9EE1AA7788C8(false);
				bVar2 = true;
			}
			unk_0xB2D4457D10260C59(bVar0);
			Global_1668616 = unk_0x7FC329B0A31E8E89();
			unk_0x5E9616802197B066(0.5f);
			unk_0x191DDA30577F440A(&(Global_1662247[unk_0x1146A9AE09CE2B14() /*199*/].f_198), 2);
		}
		if (iParam1 == 1 || bVar1)
		{
			if (Global_1668617 == -1)
			{
				Global_1668617 = unk_0x5AD02BBC63E31E46();
			}
			if (!Global_1668617 == -1 && unk_0x964C4D363AF812CB(Global_1668617))
			{
				if (iParam1 == 1)
				{
					if (!bVar2)
					{
						unk_0x9B0169E27978C1A2(Global_1668617, "On", "GTAO_Vision_Modes_SoundSet", 0);
					}
					else
					{
						unk_0x9B0169E27978C1A2(Global_1668617, "Switch", "GTAO_Vision_Modes_SoundSet", 0);
					}
				}
				else if (bVar1)
				{
					if (!bVar2)
					{
						unk_0x9B0169E27978C1A2(Global_1668617, "On", "GTAO_Vision_Modes_SoundSet", 1);
					}
					else
					{
						unk_0x9B0169E27978C1A2(Global_1668617, "Switch", "GTAO_Vision_Modes_SoundSet", 1);
					}
				}
			}
		}
	}
	else
	{
		if (unk_0xB99476938BE4BE43() || unk_0xCC9187BE146DCE4F())
		{
			unk_0x595B9EE1AA7788C8(bVar0);
			unk_0xC664C0067EEAB8D1(&(Global_1662247[unk_0x1146A9AE09CE2B14() /*199*/].f_198), 0);
		}
		if (unk_0xB9F59A3A63341AEA())
		{
			unk_0x5E9616802197B066(Global_1668616);
			Global_1668616 = -1f;
			unk_0xB2D4457D10260C59(bVar0);
			unk_0xC664C0067EEAB8D1(&(Global_1662247[unk_0x1146A9AE09CE2B14() /*199*/].f_198), 2);
		}
		if (iParam1 == 1 || bVar1)
		{
			if (Global_1668617 == -1)
			{
				Global_1668617 = unk_0x5AD02BBC63E31E46();
			}
			if (!Global_1668617 == -1 && unk_0x964C4D363AF812CB(Global_1668617))
			{
				if (iParam1 == 1)
				{
					unk_0x9B0169E27978C1A2(Global_1668617, "Off", "GTAO_Vision_Modes_SoundSet", 0);
				}
				else if (bVar1)
				{
					unk_0x9B0169E27978C1A2(Global_1668617, "Off", "GTAO_Vision_Modes_SoundSet", 1);
				}
			}
		}
	}
	func_433(!bVar0);
}

void func_433(bool bParam0)
{
	func_434(336, bParam0, -1, 1);
}

void func_434(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_435())
	{
		iVar0 = Global_2592627[iParam0 /*3*/][func_129(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x6ACB137CE7852248(iVar0, uParam1, iParam3);
		}
	}
}

int func_435()
{
	return 1;
	return 0;
}

void func_436(bool bParam0)
{
	if (Global_4270080 != bParam0)
	{
		Global_4270080 = bParam0;
		if (bParam0)
		{
			StringCopy(&Global_4270081, unk_0x471C98FD94C0A5FD(), 64);
		}
		else
		{
			StringCopy(&Global_4270081, "", 64);
		}
	}
}

int func_437(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar32;
	var uVar42;
	int iVar59;
	var uVar60;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	var uVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	int iVar117;
	int iVar118;
	var uVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	int iVar124;
	int iVar125;
	int iVar126;
	int iVar127;
	int iVar128;
	int iVar129;
	int iVar130;
	var uVar131;
	int iVar132;
	int iVar133;
	int iVar134;
	int iVar135;
	int iVar136;
	
	if (!unk_0x02BFF15CAA701972())
	{
		if ((Global_1312835 != 4 && Global_1312835 != 5) && Global_1312835 != 7)
		{
			return 0;
		}
	}
	if (unk_0xECEC7528A52B4EE8(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == unk_0x7D2B9E6A64637269() && Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_231 == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == -1)
	{
		iParam10 = Global_77056;
	}
	Global_77057++;
	iVar5 = unk_0x6471F4759775FCA4(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_77059[1 /*14*/] = { func_362(iVar5, iParam1, iParam2, -1) };
		if (!func_547(iParam3))
		{
			Global_77057 = (Global_77057 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_77057 > 1)
		{
		}
		else
		{
			func_544(iVar5, iParam1, iParam2, 1);
		}
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		unk_0xA7E55BCB7431698B(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_77102 };
		}
		else
		{
			uVar15 = { func_358(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar15.f_16)
				{
					Global_77059[1 /*14*/] = { func_362(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						unk_0x4170FE884DF7426D(iParam0, func_75(iVar0), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, unk_0xEE2FD6984DD352B8(iParam0, func_75(iVar0)));
					}
					else
					{
						unk_0x4170FE884DF7426D(iParam0, func_75(iVar0), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, iParam4);
					}
					if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 1))
					{
						func_544(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_77059[1 /*14*/] = { func_362(iVar5, iVar0, uVar15[iVar0], -1) };
					if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar32 = 9;
							if (iParam5 == 1)
							{
								uVar32 = { Global_77119 };
							}
							else
							{
								uVar32 = { func_355(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_77059[1 /*14*/] = { func_362(iVar5, 14, uVar32[iVar1], -1) };
								func_543(iParam0, Global_77059[1 /*14*/].f_12, Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4);
								if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 1))
								{
									func_544(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == -1)
								{
									unk_0x4170FE884DF7426D(iParam0, func_75(iVar0), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, unk_0xEE2FD6984DD352B8(iParam0, func_75(iVar0)));
								}
								else
								{
									unk_0x4170FE884DF7426D(iParam0, func_75(iVar0), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_437(iParam0, iVar0, uVar15[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 1))
							{
								func_544(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_77059[1 /*14*/] = { func_362(iVar5, iVar0, func_340(iParam0, iVar0, -1), -1) };
				if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 3))
				{
					uVar42 = { func_358(iVar5, 0) };
					func_437(iParam0, iVar0, uVar42[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		unk_0x4170FE884DF7426D(iParam0, 1, unk_0x094C1D2DFE050D6E(iParam0, 1), unk_0x288277F22D527487(iParam0, 1), 0);
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar59 = func_542();
			if (iVar59 != -1)
			{
				func_540(iVar59, 0, iParam10);
			}
			func_535(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar60 = { func_355(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_77059[1 /*14*/] = { func_362(iVar5, 14, uVar60[iVar1], -1) };
			func_543(iParam0, Global_77059[1 /*14*/].f_12, Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4);
			if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 1))
			{
				func_544(iVar5, 14, uVar60[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_77057 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_533(iParam0, iVar5, 14, uVar60[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_437(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_543(iParam0, Global_77059[1 /*14*/].f_12, Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4);
		if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 1))
		{
			func_544(iVar5, iParam1, iParam2, 1);
		}
		if (Global_77059[1 /*14*/].f_12 == 0)
		{
			if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 6) && unk_0x01758128AAB0BA8F(Global_2621444, joaat("SHRINK_HAIR"), 1))
			{
			}
			else
			{
				iVar70 = unk_0xF94D55021DC59203(iParam0, 1, unk_0x094C1D2DFE050D6E(iParam0, 1), unk_0x288277F22D527487(iParam0, 1));
				if (unk_0x01758128AAB0BA8F(iVar70, joaat("HAIR_SHRINK"), 0))
				{
					func_437(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					Global_77059[1 /*14*/] = { func_362(iVar5, iParam1, iParam2, -1) };
				}
			}
		}
		if (Global_77059[1 /*14*/].f_12 == 0)
		{
			func_526(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_77057 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_533(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_437(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_533(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_437(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar71 = func_75(iParam1);
		if (unk_0x094C1D2DFE050D6E(iParam0, iVar71) != Global_77059[1 /*14*/].f_3 || unk_0x288277F22D527487(iParam0, iVar71) != Global_77059[1 /*14*/].f_4)
		{
			iVar72 = unk_0xF94D55021DC59203(iParam0, 8, unk_0x094C1D2DFE050D6E(iParam0, 8), unk_0x288277F22D527487(iParam0, 8));
			iVar73 = unk_0xF94D55021DC59203(iParam0, 7, unk_0x094C1D2DFE050D6E(iParam0, 7), unk_0x288277F22D527487(iParam0, 7));
			if (((iParam1 == 11 && unk_0x01758128AAB0BA8F(iVar73, 307252627, 0)) || (iParam1 == 8 && unk_0x01758128AAB0BA8F(iVar73, 1552218390, 0))) || (iParam1 == 4 && unk_0x01758128AAB0BA8F(iVar73, -2095729091, 0)))
			{
				unk_0x4170FE884DF7426D(iParam0, 7, 0, 0, unk_0xEE2FD6984DD352B8(iParam0, 7));
			}
			if ((iParam1 == 11 && unk_0x01758128AAB0BA8F(iVar72, 307252627, 0)) || (iParam1 == 4 && unk_0x01758128AAB0BA8F(iVar72, -2095729091, 0)))
			{
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					unk_0x4170FE884DF7426D(iParam0, 8, 15, 0, unk_0xEE2FD6984DD352B8(iParam0, 8));
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					unk_0x4170FE884DF7426D(iParam0, 8, 2, 0, unk_0xEE2FD6984DD352B8(iParam0, 8));
				}
			}
		}
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar74 = -1;
				if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 6) && unk_0x01758128AAB0BA8F(Global_2621444, joaat("CREW_COL"), 11))
				{
					unk_0x21F9691A2B528C26(iParam0, Global_1314059, Global_1314060, Global_1314061, 0);
					unk_0x21F9691A2B528C26(iParam0, Global_1314059, Global_1314060, Global_1314061, 1);
					unk_0x21F9691A2B528C26(iParam0, Global_1314059, Global_1314060, Global_1314061, 2);
					unk_0x21F9691A2B528C26(iParam0, Global_1314059, Global_1314060, Global_1314061, 3);
				}
				iVar75 = func_77(iParam0, 11);
				iVar76 = func_77(iParam0, 8);
				iVar77 = func_77(iParam0, 4);
				iVar8 = unk_0xF94D55021DC59203(iParam0, 8, unk_0x094C1D2DFE050D6E(iParam0, 8), unk_0x288277F22D527487(iParam0, 8));
				if (unk_0x01758128AAB0BA8F(iVar8, joaat("OVER_JACKET"), 8))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar74 = func_73(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar74 = func_73(iVar5, iParam2, 11, 4);
					}
					if ((((((unk_0x01758128AAB0BA8F(iVar74, joaat("SILK_ROBE"), 0) || unk_0x01758128AAB0BA8F(iVar74, joaat("SILK_PYJAMAS"), 0)) || unk_0x01758128AAB0BA8F(iVar74, joaat("SMOKING_JACKET"), 0)) || unk_0x01758128AAB0BA8F(iVar74, -826135203, 0)) || unk_0x01758128AAB0BA8F(iVar74, joaat("MORPH_SUIT"), 0)) || unk_0x01758128AAB0BA8F(iVar74, joaat("GORKA_SUIT"), 0)) || unk_0x01758128AAB0BA8F(iVar74, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar9 = func_77(iParam0, 8);
					}
				}
				iVar78 = unk_0xF94D55021DC59203(iParam0, 3, unk_0x094C1D2DFE050D6E(iParam0, 3), 0);
				if (unk_0x01758128AAB0BA8F(iVar78, joaat("GLOVES"), 0))
				{
					iVar79 = func_525(iVar5, iVar76, iVar75, iVar77);
					if (iVar79 == -99)
					{
						iVar79 = func_533(iParam0, iVar5, 11, iVar75, 3, 0);
					}
					switch (iVar78)
					{
						case joaat("DLC_MP_VAL_F_UPPR0_0"):
						case joaat("DLC_MP_VAL_F_UPPR0_1"):
						case joaat("DLC_MP_VAL_F_UPPR0_2"):
						case joaat("DLC_MP_VAL_F_UPPR0_3"):
						case joaat("DLC_MP_VAL_F_UPPR0_4"):
						case joaat("DLC_MP_VAL_F_UPPR0_5"):
							iVar79 = 11;
							iVar74 = func_73(iVar5, iParam2, 11, 4);
							if (!unk_0x01758128AAB0BA8F(iVar74, joaat("DRESS"), 0))
							{
								iVar79 = -99;
							}
							break;
					}
					if (iVar79 != -99)
					{
						iVar80 = 0;
						while (iVar80 < 18)
						{
							if (func_524(iVar5, iVar79, iVar80) == iVar78)
							{
								iVar11 = iVar80;
								iVar12 = unk_0x288277F22D527487(iParam0, 3);
							}
							iVar80++;
						}
					}
				}
				iVar74 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && unk_0x01758128AAB0BA8F(func_73(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar75 = func_77(iParam0, 11);
					if (iVar75 >= 256)
					{
						iVar74 = func_73(iVar5, iVar75, 11, 4);
					}
					if (iVar75 >= 256 && unk_0x01758128AAB0BA8F(iVar74, joaat("VEST_SHIRT"), 0))
					{
						iVar81 = func_522(iVar5, iVar75, iParam2, unk_0x288277F22D527487(iParam0, 11));
						if (iVar81 != -99)
						{
							func_437(iParam0, 8, iVar81, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_77059[1 /*14*/] = { func_362(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (func_521(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						if (iVar75 >= 237)
						{
							iVar74 = func_73(iVar5, iVar75, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						if (iVar75 >= 256)
						{
							iVar74 = func_73(iVar5, iVar75, 11, 4);
						}
					}
					iVar9 = -99;
					if (!func_521(iVar5, iVar75, -1))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar75 >= 256) && (unk_0x01758128AAB0BA8F(iVar74, joaat("VEST"), 0) || unk_0x01758128AAB0BA8F(iVar74, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar75 >= 256) && ((((((((unk_0x01758128AAB0BA8F(iVar74, joaat("HEIST_DRAW_5"), 0) || unk_0x01758128AAB0BA8F(iVar74, joaat("HEIST_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar74, joaat("HEIST_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar74, joaat("HEIST_DRAW_11"), 0)) || unk_0x01758128AAB0BA8F(iVar74, joaat("HEIST_DRAW_12"), 0)) || unk_0x01758128AAB0BA8F(iVar74, -872449705, 0)) || unk_0x01758128AAB0BA8F(iVar74, joaat("APART_DRAW_9"), 0)) || unk_0x01758128AAB0BA8F(iVar74, joaat("STUNT_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar74, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar82 = func_520(iParam0, iParam2);
							iVar83 = func_522(iVar5, iVar75, iParam2, unk_0x288277F22D527487(iParam0, 11));
							if (iVar83 != -99)
							{
								func_437(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_77059[1 /*14*/] = { func_362(iVar5, iParam1, iParam2, -1) };
								iVar9 = -99;
							}
							else if (iVar82 != -99 && (iParam0 == unk_0x7D2B9E6A64637269() || iParam0 == Global_4269998))
							{
								func_437(iParam0, 8, iVar82, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_77059[1 /*14*/] = { func_362(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar84 = func_519(iVar5, 11, -1);
									Global_77059[1 /*14*/] = { func_362(iVar5, 11, iVar84, -1) };
									iVar83 = func_522(iVar5, iVar84, iParam2, Global_77059[1 /*14*/].f_4);
									iVar85 = func_73(iVar5, iParam2, 11, 3);
									if ((iVar83 == -99 || unk_0x01758128AAB0BA8F(iVar85, joaat("BIKER_VEST"), 0)) || unk_0x01758128AAB0BA8F(iVar85, 1170568373, 0))
									{
										iVar83 = 240;
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (unk_0x01758128AAB0BA8F(func_73(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar83 = 120;
									}
									else
									{
										iVar83 = 48;
									}
								}
								func_437(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_77059[1 /*14*/] = { func_362(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_77059[1 /*14*/] = { func_362(iVar5, 11, iVar75, -1) };
						iVar86 = Global_77059[1 /*14*/].f_3;
						Global_77059[1 /*14*/] = { func_362(iVar5, 11, iParam2, -1) };
						iVar87 = Global_77059[1 /*14*/].f_3;
						if (iVar86 != iVar87)
						{
							iVar89 = func_520(iParam0, iParam2);
							Global_77059[1 /*14*/] = { func_362(iVar5, 8, iVar76, -1) };
							iVar88 = Global_77059[1 /*14*/].f_4;
							iVar90 = func_518(iVar5, iVar76, iVar88);
							if (iVar89 != -99 && (iParam0 == unk_0x7D2B9E6A64637269() || iParam0 == Global_4269998))
							{
								iVar91 = iVar89;
							}
							else if (iVar90 == -99)
							{
								iVar91 = iVar76;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar92 = func_73(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || func_72(iVar92) == 6) || unk_0x01758128AAB0BA8F(iVar92, joaat("BIKER_VEST"), 0))
									{
										iVar90 = func_519(iVar5, 11, -1);
										Global_77059[1 /*14*/] = { func_362(iVar5, 11, iVar90, -1) };
										iVar91 = func_522(iVar5, iVar90, iParam2, Global_77059[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("mp_f_freemode_01") && ((iVar76 == 32 || iVar76 == 33) || iVar76 == 119))
								{
									if (!unk_0x01758128AAB0BA8F(func_73(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar90 = func_519(iVar5, 11, -1);
										Global_77059[1 /*14*/] = { func_362(iVar5, 11, iVar90, -1) };
										iVar91 = func_522(iVar5, iVar90, iParam2, Global_77059[1 /*14*/].f_4);
									}
								}
								iVar93 = -1;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar93 = func_73(iVar5, iVar76, 8, 3);
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									iVar93 = func_73(iVar5, iVar76, 8, 4);
								}
								if (unk_0x01758128AAB0BA8F(iVar93, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar90 = func_519(iVar5, 11, -1);
									Global_77059[1 /*14*/] = { func_362(iVar5, 11, iVar90, -1) };
									iVar91 = func_522(iVar5, iVar90, iParam2, Global_77059[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar91 = func_522(iVar5, iVar90, iParam2, iVar88);
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if (unk_0x01758128AAB0BA8F(func_73(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!func_517(iVar5, func_77(iParam0, 4), iVar90))
										{
											iVar91 = 240;
										}
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (unk_0x01758128AAB0BA8F(func_73(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!func_517(iVar5, func_77(iParam0, 4), iVar90))
										{
											iVar91 = 48;
										}
									}
								}
							}
							if (iVar91 != -99)
							{
								func_437(iParam0, 8, iVar91, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
								iVar90 = func_519(iVar5, 11, -1);
								Global_77059[1 /*14*/] = { func_362(iVar5, 11, iVar90, -1) };
								iVar91 = func_522(iVar5, iVar90, iParam2, Global_77059[1 /*14*/].f_4);
								if (iVar91 == -99)
								{
									iVar91 = 240;
								}
								func_437(iParam0, 8, iVar91, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_437(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_77059[1 /*14*/] = { func_362(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				func_514(iVar5, iParam2);
				if (!bParam13)
				{
					unk_0x4170FE884DF7426D(iParam0, 10, 0, 0, unk_0xEE2FD6984DD352B8(iParam0, 10));
				}
			}
			func_535(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_525(iVar5, func_340(iParam0, 8, -1), iParam2, func_340(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = func_133(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = func_133(2160, iParam10, 0);
				}
				unk_0x5288BB5843D19DAD(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				if (iParam2 != -99)
				{
					iVar94 = -99;
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar94 = func_512(iParam2);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar94 = func_510(iParam2);
					}
					if (iVar94 != -99 && iParam2 != iVar94)
					{
						iParam2 = iVar94;
					}
				}
				func_462(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar95 = unk_0xF94D55021DC59203(iParam0, 3, unk_0x094C1D2DFE050D6E(iParam0, 3), 0);
			if (unk_0x01758128AAB0BA8F(iVar95, joaat("GLOVES"), 0))
			{
				iVar96 = func_77(iParam0, 11);
				iVar97 = func_77(iParam0, 4);
				iVar98 = func_525(iVar5, iParam2, iVar96, iVar97);
				if (iVar98 == -99)
				{
					iVar98 = func_533(iParam0, iVar5, 11, iVar96, 3, 0);
				}
				switch (iVar95)
				{
					case joaat("DLC_MP_VAL_F_UPPR0_0"):
					case joaat("DLC_MP_VAL_F_UPPR0_1"):
					case joaat("DLC_MP_VAL_F_UPPR0_2"):
					case joaat("DLC_MP_VAL_F_UPPR0_3"):
					case joaat("DLC_MP_VAL_F_UPPR0_4"):
					case joaat("DLC_MP_VAL_F_UPPR0_5"):
						iVar98 = 11;
						iVar99 = func_73(iVar5, iParam2, 11, 4);
						if (!unk_0x01758128AAB0BA8F(iVar99, joaat("DRESS"), 0))
						{
							iVar98 = -99;
						}
						break;
				}
				if (iVar98 != -99)
				{
					iVar100 = 0;
					while (iVar100 < 18)
					{
						if (func_524(iVar5, iVar98, iVar100) == iVar95)
						{
							iVar11 = iVar100;
							iVar12 = unk_0x288277F22D527487(iParam0, 3);
						}
						iVar100++;
					}
				}
			}
			func_535(iParam0, iParam1, iParam2, iParam6, 0);
			iVar101 = func_77(iParam0, 11);
			if (func_521(iVar5, iVar101, -1))
			{
				iVar102 = func_518(iVar5, iParam2, Global_77059[1 /*14*/].f_4);
				func_514(iVar5, iVar102);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_525(iVar5, iParam2, func_77(iParam0, 11), func_77(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar103 = func_77(iParam0, 7);
				if (!func_459(iVar5, iVar103, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					unk_0x4170FE884DF7426D(iParam0, func_75(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && unk_0x01758128AAB0BA8F(Global_2621444, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && unk_0x01758128AAB0BA8F(Global_2621444, joaat("SHRINK_HEAD"), 0)))
			{
				iVar104 = func_133(2100, iParam10, 0);
				iVar105 = func_133(2101, iParam10, 0);
				iVar106 = func_133(2102, iParam10, 0);
				uVar107 = func_429(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					unk_0x759AC27BF6C1426E(iParam0, 0, 0, 0, iVar104, iVar105, iVar106, 0f, uVar107, 0f, false);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					unk_0x759AC27BF6C1426E(iParam0, 21, 0, 0, iVar104, iVar105, iVar106, 0f, fVar107, 0f, false);
				}
				iVar108 = 0;
				while (iVar108 < 20)
				{
					unk_0xD8F926AF2B16BC6E(iParam0, iVar108, 0f);
					iVar108++;
				}
			}
			else
			{
				func_415(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar109 = func_77(iParam0, 11);
			iVar110 = func_77(iParam0, 8);
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x01758128AAB0BA8F(func_73(iVar5, iVar109, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!func_517(iVar5, iParam2, func_518(iVar5, iVar110, 0)))
					{
						func_437(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_77059[1 /*14*/] = { func_362(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				if (unk_0x01758128AAB0BA8F(func_73(iVar5, iVar109, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!func_517(iVar5, iParam2, func_518(iVar5, iVar110, 0)))
					{
						func_437(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_77059[1 /*14*/] = { func_362(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_525(iVar5, func_77(iParam0, 8), func_77(iParam0, 11), iParam2);
			}
			iVar111 = unk_0xF94D55021DC59203(iParam0, 3, unk_0x094C1D2DFE050D6E(iParam0, 3), 0);
			if (unk_0x01758128AAB0BA8F(iVar111, joaat("GLOVES"), 0))
			{
				iVar112 = func_525(iVar5, iVar110, iVar109, iParam2);
				if (iVar112 == -99)
				{
					iVar112 = func_533(iParam0, iVar5, 11, iVar109, 3, 0);
				}
				switch (iVar111)
				{
					case joaat("DLC_MP_VAL_F_UPPR0_0"):
					case joaat("DLC_MP_VAL_F_UPPR0_1"):
					case joaat("DLC_MP_VAL_F_UPPR0_2"):
					case joaat("DLC_MP_VAL_F_UPPR0_3"):
					case joaat("DLC_MP_VAL_F_UPPR0_4"):
					case joaat("DLC_MP_VAL_F_UPPR0_5"):
						iVar112 = 11;
						iVar113 = func_73(iVar5, iParam2, 11, 4);
						if (!unk_0x01758128AAB0BA8F(iVar113, joaat("DRESS"), 0))
						{
							iVar112 = -99;
						}
						break;
				}
				if (iVar112 != -99)
				{
					iVar114 = 0;
					while (iVar114 < 18)
					{
						if (func_524(iVar5, iVar112, iVar114) == iVar111)
						{
							iVar11 = iVar114;
							iVar12 = unk_0x288277F22D527487(iParam0, 3);
						}
						iVar114++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			unk_0x4170FE884DF7426D(iParam0, func_75(iParam1), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, unk_0xEE2FD6984DD352B8(iParam0, func_75(iParam1)));
		}
		else
		{
			unk_0x4170FE884DF7426D(iParam0, func_75(iParam1), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_77057 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_533(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_437(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
						if (iVar2 == 3)
						{
							switch (Global_2621444)
							{
								case joaat("DLC_MP_VAL_F_UPPR0_0"):
								case joaat("DLC_MP_VAL_F_UPPR0_1"):
								case joaat("DLC_MP_VAL_F_UPPR0_2"):
								case joaat("DLC_MP_VAL_F_UPPR0_3"):
								case joaat("DLC_MP_VAL_F_UPPR0_4"):
								case joaat("DLC_MP_VAL_F_UPPR0_5"):
									iVar11 = -1;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != -99)
							{
								iVar6 = func_525(iVar5, iVar3, func_77(iParam0, 11), func_77(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = func_533(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_437(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (func_458(iParam0))
				{
					iVar115 = func_456(iParam0, iVar5, iParam1, iParam2);
					if (iVar115 > 0)
					{
						iVar115 = (iVar115 + unk_0x288277F22D527487(iParam0, 9));
						if (!func_346(iParam0, 9, iVar115))
						{
							func_437(iParam0, 9, iVar115, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_437(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar8 = unk_0xF94D55021DC59203(iParam0, 8, unk_0x094C1D2DFE050D6E(iParam0, 8), unk_0x288277F22D527487(iParam0, 8));
					if (unk_0x01758128AAB0BA8F(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_437(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar116 = func_133(2042, -1, 0);
				if (unk_0x094C1D2DFE050D6E(iParam0, 5) != 0)
				{
					unk_0x4170FE884DF7426D(iParam0, 5, func_450(iParam0, iVar116), func_449(iParam0, iVar116), func_448(iParam0, iVar116));
				}
				if (iParam0 == unk_0x7D2B9E6A64637269())
				{
					unk_0x36BDFFB529ECB71F(unk_0x1146A9AE09CE2B14(), 5, func_450(unk_0x7D2B9E6A64637269(), iVar116), func_449(unk_0x7D2B9E6A64637269(), iVar116), 0);
					unk_0x2CD796D9868722DB(unk_0x1146A9AE09CE2B14(), func_448(unk_0x7D2B9E6A64637269(), iVar116));
					func_447(unk_0x1146A9AE09CE2B14(), iVar116);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 92) || (iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 55))
				{
					if (unk_0x01758128AAB0BA8F(Global_2621444, joaat("BIG_CHAIN"), 0))
					{
						func_437(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar117 = func_340(iParam0, 4, -1);
					iVar118 = iParam2;
				}
				else
				{
					iVar117 = iParam2;
					iVar118 = func_340(iParam0, 11, -1);
				}
				if (func_349(iVar5, 11, iVar118, -1))
				{
					if (!func_446(iVar5, 4, iVar117, -1))
					{
						if (func_348(iVar5, 4, iVar117, &uVar119))
						{
							func_437(iParam0, 4, uVar119, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (func_446(iVar5, 4, iVar117, -1))
				{
					if (func_347(iVar5, 4, iVar117, &uVar119))
					{
						func_437(iParam0, 4, uVar119, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar120 = unk_0x094C1D2DFE050D6E(iParam0, 6);
				iVar121 = unk_0x288277F22D527487(iParam0, 6);
				iVar122 = unk_0xF94D55021DC59203(iParam0, 6, iVar120, iVar121);
				iVar123 = unk_0x094C1D2DFE050D6E(iParam0, 4);
				iVar124 = unk_0x288277F22D527487(iParam0, 4);
				iVar125 = unk_0xF94D55021DC59203(iParam0, 4, iVar123, iVar124);
				iVar126 = func_77(iParam0, 4);
				iVar127 = func_77(iParam0, 6);
				if (func_445(iVar5, iVar122))
				{
					if (unk_0x01758128AAB0BA8F(iVar122, joaat("ALT_FEET"), 0) != func_444(iVar5, iVar126, iVar122))
					{
						iVar128 = unk_0xBEEBC440559223F7(iVar122);
						iVar129 = 0;
						while (iVar129 < iVar128)
						{
							unk_0xE5694002E250F2D1(iVar122, iVar129, &iVar130, &uVar131, &iVar132);
							if (iVar132 == 6)
							{
								if (iVar130 != 0 && iVar130 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar127 = func_344(iVar5, iVar130, 6, 3);
										iVar122 = iVar130;
										func_437(iParam0, 6, iVar127, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar127 = func_344(iVar5, iVar130, 6, 4);
										iVar122 = iVar130;
										func_437(iParam0, 6, iVar127, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar129 = iVar128 + 1;
								}
							}
							iVar129++;
						}
					}
					else if (unk_0x01758128AAB0BA8F(iVar125, joaat("ALT_LEGS"), 0) != func_443(iVar5, iVar127, iVar125))
					{
						iVar128 = unk_0xBEEBC440559223F7(iVar125);
						iVar129 = 0;
						while (iVar129 < iVar128)
						{
							unk_0xE5694002E250F2D1(iVar125, iVar129, &iVar130, &uVar131, &iVar132);
							if (iVar132 == 4)
							{
								if (iVar130 != 0 && iVar130 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar126 = func_344(iVar5, iVar130, 4, 3);
										iVar125 = iVar130;
										func_437(iParam0, 4, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar126 = func_344(iVar5, iVar130, 4, 4);
										iVar125 = iVar130;
										func_437(iParam0, 4, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar129 = iVar128 + 1;
								}
							}
							iVar129++;
						}
					}
				}
				if (func_445(iVar5, iVar125))
				{
					if (unk_0x01758128AAB0BA8F(iVar125, joaat("ALT_LEGS"), 0) != func_443(iVar5, iVar127, iVar125))
					{
						iVar128 = unk_0xBEEBC440559223F7(iVar125);
						iVar129 = 0;
						while (iVar129 < iVar128)
						{
							unk_0xE5694002E250F2D1(iVar125, iVar129, &iVar130, &uVar131, &iVar132);
							if (iVar132 == 4)
							{
								if (iVar130 != 0 && iVar130 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar126 = func_344(iVar5, iVar130, 4, 3);
										iVar125 = iVar130;
										func_437(iParam0, 4, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar126 = func_344(iVar5, iVar130, 4, 4);
										iVar125 = iVar130;
										func_437(iParam0, 4, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar129 = iVar128 + 1;
								}
							}
							iVar129++;
						}
					}
					else if (unk_0x01758128AAB0BA8F(iVar122, joaat("ALT_FEET"), 0) != func_444(iVar5, iVar126, iVar122))
					{
						iVar128 = unk_0xBEEBC440559223F7(iVar122);
						iVar129 = 0;
						while (iVar129 < iVar128)
						{
							unk_0xE5694002E250F2D1(iVar122, iVar129, &iVar130, &uVar131, &iVar132);
							if (iVar132 == 6)
							{
								if (iVar130 != 0 && iVar130 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar127 = func_344(iVar5, iVar130, 6, 3);
										iVar122 = iVar130;
										func_437(iParam0, 6, iVar127, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar127 = func_344(iVar5, iVar130, 6, 4);
										iVar122 = iVar130;
										func_437(iParam0, 6, iVar127, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar129 = iVar128 + 1;
								}
							}
							iVar129++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_526(iParam0);
				iVar133 = unk_0x094C1D2DFE050D6E(iParam0, 1);
				iVar134 = unk_0x288277F22D527487(iParam0, 1);
				iVar135 = unk_0xF94D55021DC59203(iParam0, 1, iVar133, iVar134);
				if (unk_0x01758128AAB0BA8F(iVar135, joaat("FORCE_PROP"), 0))
				{
					iVar3 = func_533(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_437(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = func_533(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_437(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_438(iParam0, &uVar4))
		{
			func_437(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_437(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar9 != -99)
	{
		func_437(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_437(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar11 != -1)
	{
		iVar136 = func_524(iVar5, func_340(iParam0, 3, -1), iVar11);
		if (iVar136 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = func_344(iVar5, iVar136, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = func_344(iVar5, iVar136, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 = (iVar10 + iVar12);
				func_437(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_77057 = (Global_77057 - 1);
	return 1;
}

int func_438(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_340(unk_0x7D2B9E6A64637269(), 2, -1);
	if (func_133(754, Global_77056, 0) != -99 && func_440())
	{
		if (func_439() == 4)
		{
			return 1;
		}
		if (func_133(754, Global_77056, 0) == 0 && func_133(755, Global_77056, 0) == 0)
		{
			if (func_428(161, Global_77056))
			{
				if (func_133(2053, Global_77056, 0) == 0)
				{
					return 0;
				}
			}
			else if (func_133(753, Global_77056, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = func_133(754, Global_77056, 0);
		iVar1 = func_133(755, Global_77056, 0);
		if (!func_346(iParam0, iVar1, iVar0))
		{
			if (func_428(161, Global_77056))
			{
				*uParam1 = func_133(2053, Global_77056, 0);
			}
			else
			{
				*uParam1 = func_133(753, Global_77056, 0);
			}
			func_124(754, -99, Global_77056, 1, 0);
			func_124(755, 2, Global_77056, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_439()
{
	return Global_1312835;
}

int func_440()
{
	if (func_442() && func_441(0))
	{
		return 1;
	}
	return 0;
}

var func_441(int iParam0)
{
	return Global_1312392[iParam0];
}

var func_442()
{
	return func_441(func_94() + 1);
}

int func_443(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_73(iParam0, iParam1, 6, 3);
			}
			if (unk_0x01758128AAB0BA8F(iParam2, 1137160120, 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (unk_0x01758128AAB0BA8F(iVar0, joaat("COWBOY_BOOTS"), 0))
			{
				if ((unk_0x01758128AAB0BA8F(iParam2, joaat("GUN_DRAW_0"), 0) || unk_0x01758128AAB0BA8F(iParam2, joaat("GUN_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iParam2, joaat("GORKA_SUIT"), 0))
				{
					return 0;
				}
			}
			if (unk_0x01758128AAB0BA8F(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				if ((((((((((unk_0x01758128AAB0BA8F(iVar0, joaat("PILOT_SUIT"), 0) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("APART_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("APART_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("COWBOY_BOOTS"), 0))
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_73(iParam0, iParam1, 6, 4);
			}
			if (unk_0x01758128AAB0BA8F(iParam2, 1137160120, 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (unk_0x01758128AAB0BA8F(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				if (((((((((unk_0x01758128AAB0BA8F(iVar0, joaat("PILOT_SUIT"), 0) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("APART_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_8"), 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
	return 0;
}

int func_444(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_73(iParam0, iParam1, 4, 3);
				iVar1 = func_72(iVar0);
			}
			if (unk_0x01758128AAB0BA8F(iParam2, joaat("COWBOY_BOOTS"), 0) || unk_0x01758128AAB0BA8F(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				iVar2 = 1;
				if (((((((((((((((((((((((iParam1 >= 32 && iParam1 <= 47) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 224 && iParam1 <= 239)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar1 == 2) || iVar1 == 4) || iVar1 == 6) || iVar1 == 11) || iVar1 == 12) || iVar1 == 14) || iVar1 == 15) || unk_0x01758128AAB0BA8F(iVar0, joaat("SILK_ROBE"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("SKINNY"), 0)) || (unk_0x01758128AAB0BA8F(iVar0, joaat("GUN_DRAW_0"), 0) && !unk_0x01758128AAB0BA8F(iParam2, joaat("COWBOY_BOOTS"), 0))) || (unk_0x01758128AAB0BA8F(iVar0, joaat("GUN_DRAW_1"), 0) && !unk_0x01758128AAB0BA8F(iParam2, joaat("COWBOY_BOOTS"), 0))) || (unk_0x01758128AAB0BA8F(iVar0, joaat("GORKA_SUIT"), 0) && !unk_0x01758128AAB0BA8F(iParam2, joaat("COWBOY_BOOTS"), 0)))
				{
					iVar2 = 0;
				}
				switch (iVar0)
				{
					case joaat("DLC_MP_VAL_M_LEGS1_0"):
					case joaat("DLC_MP_BEACH_M_LOWR0_0"):
					case joaat("DLC_MP_BEACH_M_LOWR0_1"):
					case joaat("DLC_MP_BEACH_M_LOWR0_2"):
					case joaat("DLC_MP_BEACH_M_LOWR0_3"):
					case joaat("DLC_MP_BEACH_M_LOWR0_4"):
					case joaat("DLC_MP_BEACH_M_LOWR0_5"):
					case joaat("DLC_MP_BEACH_M_LOWR0_6"):
					case joaat("DLC_MP_BEACH_M_LOWR0_7"):
					case joaat("DLC_MP_BEACH_M_LOWR0_8"):
					case joaat("DLC_MP_BEACH_M_LOWR0_9"):
					case joaat("DLC_MP_BEACH_M_LOWR0_10"):
					case joaat("DLC_MP_BEACH_M_LOWR0_11"):
					case joaat("DLC_MP_BEACH_M_LOWR1_0"):
					case joaat("DLC_MP_BEACH_M_LOWR1_1"):
					case joaat("DLC_MP_BEACH_M_LOWR1_2"):
					case joaat("DLC_MP_BEACH_M_LOWR1_3"):
					case joaat("DLC_MP_BEACH_M_LOWR1_4"):
					case joaat("DLC_MP_BEACH_M_LOWR1_5"):
					case joaat("DLC_MP_BEACH_M_LOWR1_6"):
					case joaat("DLC_MP_BEACH_M_LOWR1_7"):
					case joaat("DLC_MP_BEACH_M_LOWR1_8"):
					case joaat("DLC_MP_BEACH_M_LOWR1_9"):
					case joaat("DLC_MP_BEACH_M_LOWR1_10"):
					case joaat("DLC_MP_BEACH_M_LOWR2_0"):
					case joaat("DLC_MP_BEACH_M_LOWR2_1"):
					case joaat("DLC_MP_BEACH_M_LOWR2_2"):
					case joaat("DLC_MP_BEACH_M_LOWR2_3"):
					case joaat("DLC_MP_BEACH_M_LOWR2_4"):
					case joaat("DLC_MP_BEACH_M_LOWR2_5"):
					case joaat("DLC_MP_BEACH_M_LOWR2_6"):
					case joaat("DLC_MP_BEACH_M_LOWR2_7"):
					case joaat("DLC_MP_BEACH_M_LOWR2_8"):
					case joaat("DLC_MP_BEACH_M_LOWR2_9"):
					case joaat("DLC_MP_BEACH_M_LOWR2_10"):
					case joaat("DLC_MP_BEACH_M_LOWR2_11"):
					case 629180074:
					case 859251223:
					case 1610316715:
					case 901392169:
					case -92983136:
					case 1346362420:
					case 485782942:
					case 312004063:
					case 6695290:
					case 1724446270:
					case -448105673:
					case -611098679:
					case -1111088081:
					case -1406369540:
					case -1912159043:
					case 2076516410:
					case 1919618438:
					case 45227112:
					case -2129094253:
					case -421370587:
					case -675363106:
					case joaat("DLC_MP_VWD_M_LEGS_2_0"):
					case joaat("DLC_MP_VWD_M_LEGS_2_1"):
					case joaat("DLC_MP_VWD_M_LEGS_2_2"):
					case joaat("DLC_MP_VWD_M_LEGS_2_3"):
					case joaat("DLC_MP_VWD_M_LEGS_2_4"):
					case joaat("DLC_MP_VWD_M_LEGS_2_5"):
					case joaat("DLC_MP_VWD_M_LEGS_2_6"):
					case joaat("DLC_MP_VWD_M_LEGS_2_7"):
					case joaat("DLC_MP_VWD_M_LEGS_2_8"):
					case joaat("DLC_MP_VWD_M_LEGS_2_9"):
					case joaat("DLC_MP_VWD_M_LEGS_2_10"):
						iVar2 = 0;
						break;
				}
				if (((unk_0x01758128AAB0BA8F(iParam2, joaat("SMUG_DRAW_0"), 0) || unk_0x01758128AAB0BA8F(iParam2, joaat("SMUG_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iParam2, joaat("BATTLE_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iParam2, joaat("BATTLE_DRAW_2"), 0))
				{
					if ((((((unk_0x01758128AAB0BA8F(iVar0, joaat("GUN_DRAW_0"), 0) || unk_0x01758128AAB0BA8F(iVar0, joaat("GUN_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("GORKA_SUIT"), 0))
					{
						iVar2 = 1;
					}
				}
				if (unk_0x01758128AAB0BA8F(iVar0, 1137160120, 0))
				{
					if (unk_0x01758128AAB0BA8F(iParam2, -2005216901, 0))
					{
						iVar2 = 0;
					}
					else
					{
						iVar2 = 1;
					}
				}
				return iVar2;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_73(iParam0, iParam1, 4, 4);
				iVar1 = func_72(iVar0);
			}
			if (unk_0x01758128AAB0BA8F(iParam2, joaat("COWBOY_BOOTS"), 0) || unk_0x01758128AAB0BA8F(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar0, 1137160120, 0))
				{
					if (unk_0x01758128AAB0BA8F(iParam2, -2005216901, 0))
					{
						return 0;
					}
				}
				if ((unk_0x01758128AAB0BA8F(iVar0, joaat("GUN_DRAW_0"), 0) || unk_0x01758128AAB0BA8F(iVar0, joaat("GUN_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("GORKA_SUIT"), 0))
				{
					if ((((unk_0x01758128AAB0BA8F(iParam2, joaat("COWBOY_BOOTS"), 0) || unk_0x01758128AAB0BA8F(iParam2, joaat("BIKER_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iParam2, joaat("BIKER_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iParam2, joaat("SMUG_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iParam2, joaat("SMUG_DRAW_1"), 0))
					{
						return 1;
					}
					return 0;
				}
				if (((((((((((((((((((((((((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 96 && iParam1 <= 111)) || iVar1 == 1) || iVar1 == 3) || iVar1 == 6) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_9"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_10"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW2_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("APART_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("APART_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("APART_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("APART_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar0, -430330349, 0)) || unk_0x01758128AAB0BA8F(iVar0, -1103045158, 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("APART_DRAW_12"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW2_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("STUNT_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("DUNGAREES"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("H3_DRAW_5"), 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_445(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (unk_0x01758128AAB0BA8F(iParam1, joaat("COWBOY_BOOTS"), 0) || unk_0x01758128AAB0BA8F(iParam1, joaat("HAS_ALT_VERSION"), 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (unk_0x01758128AAB0BA8F(iParam1, joaat("COWBOY_BOOTS"), 0) || unk_0x01758128AAB0BA8F(iParam1, joaat("HAS_ALT_VERSION"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_446(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_73(iParam0, iParam2, 4, 4);
						}
						if (unk_0x01758128AAB0BA8F(iParam3, joaat("DRESS_LEGS"), 0))
						{
							return 1;
						}
					}
					break;
			}
			break;
	}
	return 0;
}

void func_447(int iParam0, int iParam1)
{
	if (iParam1 > 61)
	{
		unk_0x4169D62225D118AD(iParam0, joaat("vw_p_para_bag_vine_s"));
	}
	else if (iParam1 > 51)
	{
		unk_0x4169D62225D118AD(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else if (iParam1 > 46)
	{
		unk_0x4169D62225D118AD(iParam0, joaat("p_para_bag_xmas_s"));
	}
	else if (iParam1 > 26)
	{
		unk_0x4169D62225D118AD(iParam0, joaat("lts_p_para_bag_lts_s"));
	}
	else if (iParam1 > 0)
	{
		unk_0x4169D62225D118AD(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else
	{
		unk_0x42B4D8C7E389E8B7(iParam0);
	}
}

int func_448(int iParam0, int iParam1)
{
	return 0;
}

int func_449(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return 0;
			break;
		
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
			return 9;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 11;
			break;
		
		case 13:
			return 12;
			break;
		
		case 14:
			return 13;
			break;
		
		case 15:
			return 14;
			break;
		
		case 16:
			return 15;
			break;
		
		case 17:
			return 16;
			break;
		
		case 18:
			return 17;
			break;
		
		case 19:
			return 18;
			break;
		
		case 20:
			return 19;
			break;
		
		case 21:
			return 20;
			break;
		
		case 22:
			return 21;
			break;
		
		case 23:
			return 22;
			break;
		
		case 24:
			return 23;
			break;
		
		case 25:
			return 24;
			break;
		
		case 26:
			return 25;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 2;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 4;
			break;
		
		case 32:
			return 5;
			break;
		
		case 33:
			return 6;
			break;
		
		case 34:
			return 7;
			break;
		
		case 35:
			return 8;
			break;
		
		case 36:
			return 9;
			break;
		
		case 37:
			return 10;
			break;
		
		case 38:
			return 11;
			break;
		
		case 39:
			return 12;
			break;
		
		case 40:
			return 13;
			break;
		
		case 41:
			return 14;
			break;
		
		case 42:
			return 15;
			break;
		
		case 43:
			return 16;
			break;
		
		case 44:
			return 17;
			break;
		
		case 45:
			return 18;
			break;
		
		case 46:
			return 19;
			break;
		
		case 47:
			return 0;
			break;
		
		case 48:
			return 1;
			break;
		
		case 49:
			return 2;
			break;
		
		case 50:
			return 3;
			break;
		
		case 51:
			return 4;
			break;
		
		case 52:
			return 0;
			break;
		
		case 53:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 2;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 4;
			break;
		
		case 58:
			return 5;
			break;
		
		case 59:
			return 6;
			break;
		
		case 60:
			return 7;
			break;
		
		case 61:
			return 8;
			break;
		
		case 62:
			return 0;
			break;
		
		case 63:
			return 1;
			break;
		
		case 64:
			return 0;
			break;
		
		case 65:
			return 1;
			break;
		
		case 66:
			return 2;
			break;
	}
	return 0;
}

var func_450(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0x094C1D2DFE050D6E(iParam0, 8);
	iVar1 = unk_0x094C1D2DFE050D6E(iParam0, 11);
	iVar2 = unk_0x094C1D2DFE050D6E(iParam0, 4);
	bVar3 = unk_0x094C1D2DFE050D6E(iParam0, 9) != false;
	iVar4 = unk_0xF94D55021DC59203(iParam0, 8, iVar0, unk_0x288277F22D527487(iParam0, 8));
	iVar5 = unk_0xF94D55021DC59203(iParam0, 11, iVar1, unk_0x288277F22D527487(iParam0, 11));
	iVar6 = unk_0xF94D55021DC59203(iParam0, 4, iVar2, unk_0x288277F22D527487(iParam0, 4));
	if (((((((bVar3 != Global_77220 || iParam1 != Global_77221) || iVar4 != Global_77222) || iVar5 != Global_77223) || iVar6 != Global_77224) || iVar0 != Global_77225) || iVar1 != Global_77226) || iVar2 != Global_77227)
	{
		Global_77220 = bVar3;
		Global_77221 = iParam1;
		Global_77222 = iVar4;
		Global_77223 = iVar5;
		Global_77224 = iVar6;
		Global_77225 = iVar0;
		Global_77226 = iVar1;
		Global_77227 = iVar2;
		Global_77228 = func_451(iParam0, iParam1);
	}
	return Global_77228;
}

int func_451(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = unk_0x094C1D2DFE050D6E(iParam0, 11);
	if (unk_0x094C1D2DFE050D6E(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x6471F4759775FCA4(iParam0);
	iVar3 = unk_0xF94D55021DC59203(iParam0, 8, unk_0x094C1D2DFE050D6E(iParam0, 8), unk_0x288277F22D527487(iParam0, 8));
	if (unk_0x01758128AAB0BA8F(iVar3, joaat("OVER_JACKET"), 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_2"), 8) || unk_0x01758128AAB0BA8F(iVar3, 1293534210, 8))
			{
				return func_455(iParam0, iParam1, 1);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_3"), 8) || unk_0x01758128AAB0BA8F(iVar3, 1072212384, 8))
			{
				return func_455(iParam0, iParam1, 10);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_4"), 8))
			{
				return func_455(iParam0, iParam1, 10);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_5"), 8))
			{
				return func_455(iParam0, iParam1, 10);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_6"), 8))
			{
				return func_455(iParam0, iParam1, 10);
			}
		}
		else
		{
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_2"), 8))
			{
				return func_455(iParam0, iParam1, 6);
			}
			if ((unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_3"), 8) || unk_0x01758128AAB0BA8F(iVar3, 1072212384, 8)) || unk_0x01758128AAB0BA8F(iVar3, 1293534210, 8))
			{
				return func_455(iParam0, iParam1, 7);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_4"), 8))
			{
				return func_455(iParam0, iParam1, 10);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_5"), 8))
			{
				return func_455(iParam0, iParam1, 10);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_6"), 8))
			{
				return func_455(iParam0, iParam1, 10);
			}
		}
		return func_455(iParam0, iParam1, 9);
	}
	if (func_454(iParam0))
	{
		if (bVar1)
		{
			return func_455(iParam0, iParam1, 7);
		}
		else
		{
			return func_455(iParam0, iParam1, 1);
		}
	}
	if (iVar0 > 15)
	{
		iVar4 = unk_0xF94D55021DC59203(iParam0, 11, iVar0, unk_0x288277F22D527487(iParam0, 11));
		if (unk_0x01758128AAB0BA8F(iVar4, joaat("HIPSTER_DRESS"), 0))
		{
			if (bVar1)
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("DRESS"), 0))
		{
			if (bVar1)
			{
				return func_455(iParam0, iParam1, 5);
			}
			else
			{
				return func_455(iParam0, iParam1, 5);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("PILOT_SUIT"), 0))
		{
			return func_455(iParam0, iParam1, 8);
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("COMBAT_GEAR"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 7);
				}
				else
				{
					return func_455(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("HOODED_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 7);
				}
				else
				{
					return func_455(iParam0, iParam1, 1);
				}
			}
			else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_5"), 0))
			{
				return func_455(iParam0, iParam1, 10);
			}
			else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_32"), 0))
			{
				return func_455(iParam0, iParam1, 10);
			}
			else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_33"), 0))
			{
				return func_455(iParam0, iParam1, 10);
			}
			else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_30"), 0))
			{
				return func_455(iParam0, iParam1, 10);
			}
			else if (bVar1)
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_COAT"), 0) && !unk_0x01758128AAB0BA8F(iVar4, joaat("X17_DRAW_3"), 0))
		{
			iVar5 = func_453(iVar4, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar5)
				{
					case 0:
						return func_455(iParam0, iParam1, 1);
						break;
					
					case 2:
						return func_455(iParam0, iParam1, 8);
						break;
					
					default:
						iVar0 = func_72(iVar4);
						break;
				}
			}
			else
			{
				switch (iVar5)
				{
					case 2:
						return func_455(iParam0, iParam1, 6);
						break;
					
					default:
						iVar0 = func_72(iVar4);
						break;
					}
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_BOMB"), 0))
		{
			if (unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_DRAW_4"), 0))
			{
				return func_455(iParam0, iParam1, 2);
			}
			else
			{
				return func_455(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_GEAR"), 0))
		{
			iVar6 = func_452(iVar4, 0);
			switch (iVar6)
			{
				case 4:
					return func_455(iParam0, iParam1, 7);
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_455(iParam0, iParam1, 7);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_455(iParam0, iParam1, 7);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_455(iParam0, iParam1, 7);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_455(iParam0, iParam1, 7);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_455(iParam0, iParam1, 9);
					}
					else
					{
						return func_455(iParam0, iParam1, 7);
					}
					break;
				
				case 13:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_455(iParam0, iParam1, 9);
					}
					else
					{
						return func_455(iParam0, iParam1, 9);
					}
					break;
				
				case 14:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_455(iParam0, iParam1, 9);
					}
					break;
				
				default:
					iVar0 = func_72(iVar4);
					break;
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("XMAS2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 7);
				}
				else
				{
					return func_455(iParam0, iParam1, 2);
				}
			}
			else if (bVar1)
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 1);
			}
			else
			{
				return func_455(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 1);
			}
			else if (bVar1)
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 2);
			}
			else
			{
				return func_455(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 2);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 1);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 8);
			}
			else
			{
				return func_455(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_7"), 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("JAN_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 2);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_8"), 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("JAN_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x01758128AAB0BA8F(iVar4, joaat("AIR_DRAW_3"), 0))
				{
					return func_455(iParam0, iParam1, 10);
				}
				else
				{
					return func_455(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 1);
			}
		}
		else if ((unk_0x01758128AAB0BA8F(iVar4, -1086258388, 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_SWEAT"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_SWEAT"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 7);
				}
				else
				{
					return func_455(iParam0, iParam1, 5);
				}
			}
			else if (bVar1)
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 8);
			}
			else if (bVar1)
			{
				return func_455(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 7);
				}
				else
				{
					return func_455(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_455(iParam0, iParam1, 9);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 6);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 7);
				}
				else
				{
					return func_455(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 2);
			}
			else
			{
				return func_455(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 2);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 9);
				}
				else
				{
					return func_455(iParam0, iParam1, 1);
				}
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 7);
				}
				else
				{
					return func_455(iParam0, iParam1, 5);
				}
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 7);
				}
				else
				{
					return func_455(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 7);
				}
				else
				{
					return func_455(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 7);
				}
				else
				{
					return func_455(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 7);
				}
				else
				{
					return func_455(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_455(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, -102825006, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 7);
				}
				else
				{
					return func_455(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_455(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 7);
				}
				else
				{
					return func_455(iParam0, iParam1, 6);
				}
			}
			else
			{
				return func_455(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 7);
				}
				else
				{
					return func_455(iParam0, iParam1, 2);
				}
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_455(iParam0, iParam1, 5);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 7);
				}
				else
				{
					return func_455(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_455(iParam0, iParam1, 9);
			}
			else
			{
				return func_455(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_22"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 7);
				}
				else
				{
					return func_455(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 9);
			}
			else
			{
				return func_455(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_0"), 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("AIR_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_455(iParam0, iParam1, 9);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 9);
			}
			else if (bVar1)
			{
				return func_455(iParam0, iParam1, 10);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_455(iParam0, iParam1, 9);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 2);
			}
			else
			{
				return func_455(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 2);
			}
			else
			{
				return func_455(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 9);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 9);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 2);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 9);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 9);
			}
			else
			{
				return func_455(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 9);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 9);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 9);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 9);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 9);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 9);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 9);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 9);
			}
			else
			{
				return func_455(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 2);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 9);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_455(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_455(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_455(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 10);
			}
			else
			{
				return func_455(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 10);
			}
			else
			{
				return func_455(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 10);
			}
			else
			{
				return func_455(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 9);
			}
			else
			{
				return func_455(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 9);
			}
			else
			{
				return func_455(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("GUN_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_455(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("GUN_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_455(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("GUN_DRAW_23"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_455(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("GUN_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_455(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("SMUG_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_455(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("AIR_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("X17_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 10);
			}
			else
			{
				return func_455(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("X17_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 10);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("X17_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_455(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("X17_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 10);
			}
			else
			{
				return func_455(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("ASSAULT_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 0);
			}
			else
			{
				return func_455(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (unk_0x01758128AAB0BA8F(iVar4, joaat("ARENA_DRAW_14"), 0))
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return func_455(iParam0, iParam1, 10);
				}
				else
				{
					return func_455(iParam0, iParam1, 10);
				}
			}
			else if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 1);
			}
			else
			{
				return func_455(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("ARENA_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 10);
			}
			else
			{
				return func_455(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("ARENA_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 10);
			}
			else
			{
				return func_455(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 9);
			}
			else
			{
				return func_455(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 10);
			}
			else
			{
				return func_455(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 9);
			}
			else
			{
				return func_455(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 3);
			}
			else
			{
				return func_455(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 10);
			}
			else
			{
				return func_455(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("ARENA_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 1);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 10);
			}
			else
			{
				return func_455(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 9);
			}
			else
			{
				return func_455(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 9);
			}
			else
			{
				return func_455(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("ARENA_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 10);
			}
			else
			{
				return func_455(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_455(iParam0, iParam1, 7);
			}
			else
			{
				return func_455(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("SMOKING_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_455(iParam0, iParam1, 2);
			}
			else
			{
				return func_455(iParam0, iParam1, 7);
			}
		}
		else if ((unk_0x01758128AAB0BA8F(iVar4, joaat("SILK_PYJAMAS"), 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("SILK_ROBE"), 0)) || unk_0x01758128AAB0BA8F(iVar4, -826135203, 0))
		{
			return func_455(iParam0, iParam1, 6);
		}
		else
		{
			iVar7 = iVar0;
			iVar0 = func_72(iVar4);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 1);
				}
				else
				{
					return func_455(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 1);
				}
				else
				{
					return func_455(iParam0, iParam1, 0);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 6);
				}
				else
				{
					return func_455(iParam0, iParam1, 6);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 2);
				}
				else
				{
					return func_455(iParam0, iParam1, 2);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 2);
				}
				else
				{
					return func_455(iParam0, iParam1, 2);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 1);
				}
				else
				{
					return func_455(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 1);
				}
				else
				{
					return func_455(iParam0, iParam1, 1);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 2);
				}
				else
				{
					return func_455(iParam0, iParam1, 2);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 7);
				}
				else
				{
					return func_455(iParam0, iParam1, 0);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 1);
				}
				else
				{
					return func_455(iParam0, iParam1, 0);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 2);
				}
				else
				{
					return func_455(iParam0, iParam1, 2);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 7);
				}
				else
				{
					return func_455(iParam0, iParam1, 1);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 1);
				}
				else
				{
					return func_455(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 6);
				}
				else
				{
					return func_455(iParam0, iParam1, 1);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 5);
				}
				else
				{
					return func_455(iParam0, iParam1, 5);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 1);
				}
				else
				{
					return func_455(iParam0, iParam1, 4);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 1);
				}
				else
				{
					return func_455(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 6);
				}
				else
				{
					return func_455(iParam0, iParam1, 6);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 3);
				}
				else
				{
					return func_455(iParam0, iParam1, 2);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 5);
				}
				else
				{
					return func_455(iParam0, iParam1, 4);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 1);
				}
				else
				{
					return func_455(iParam0, iParam1, 0);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 1);
				}
				else
				{
					return func_455(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 6);
				}
				else
				{
					return func_455(iParam0, iParam1, 6);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 6);
				}
				else
				{
					return func_455(iParam0, iParam1, 6);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 6);
				}
				else
				{
					return func_455(iParam0, iParam1, 6);
				}
				break;
			
			case 9:
				return func_455(iParam0, iParam1, 1);
				break;
			
			case 10:
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 6);
				}
				else
				{
					return func_455(iParam0, iParam1, 6);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 1);
				}
				else
				{
					return func_455(iParam0, iParam1, 0);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 1);
				}
				else
				{
					return func_455(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 1);
				}
				else
				{
					return func_455(iParam0, iParam1, 0);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 7);
				}
				else
				{
					return func_455(iParam0, iParam1, 3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_455(iParam0, iParam1, 1);
				}
				else
				{
					return func_455(iParam0, iParam1, 0);
				}
				break;
			}
	}
	return func_455(iParam0, iParam1, 0);
	return 0;
}

int func_452(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_453(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_454(int iParam0)
{
	if (unk_0x01758128AAB0BA8F(unk_0xF94D55021DC59203(iParam0, 4, unk_0x094C1D2DFE050D6E(iParam0, 4), unk_0x288277F22D527487(iParam0, 4)), joaat("DUNGAREES"), 0))
	{
		return 1;
	}
	return 0;
}

int func_455(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 2;
					break;
				
				case 2:
					return 3;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 6;
					break;
				
				case 6:
					return 7;
					break;
				
				case 7:
					return 8;
					break;
				
				case 8:
					return 19;
					break;
				
				case 9:
					return 48;
					break;
				
				case 10:
					return 62;
					break;
			}
			break;
		
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
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
			switch (iParam2)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 11;
					break;
				
				case 2:
					return 12;
					break;
				
				case 3:
					return 13;
					break;
				
				case 4:
					return 14;
					break;
				
				case 5:
					return 15;
					break;
				
				case 6:
					return 16;
					break;
				
				case 7:
					return 17;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 49;
					break;
				
				case 10:
					return 64;
					break;
			}
			break;
		
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
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			switch (iParam2)
			{
				case 0:
					return 21;
					break;
				
				case 1:
					return 22;
					break;
				
				case 2:
					return 23;
					break;
				
				case 3:
					return 24;
					break;
				
				case 4:
					return 25;
					break;
				
				case 5:
					return 26;
					break;
				
				case 6:
					return 27;
					break;
				
				case 7:
					return 28;
					break;
				
				case 8:
					return 29;
					break;
				
				case 9:
					return 50;
					break;
				
				case 10:
					return 65;
					break;
			}
			break;
		
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
			switch (iParam2)
			{
				case 0:
					return 31;
					break;
				
				case 1:
					return 32;
					break;
				
				case 2:
					return 33;
					break;
				
				case 3:
					return 34;
					break;
				
				case 4:
					return 35;
					break;
				
				case 5:
					return 36;
					break;
				
				case 6:
					return 37;
					break;
				
				case 7:
					return 38;
					break;
				
				case 8:
					return 39;
					break;
				
				case 9:
					return 51;
					break;
				
				case 10:
					return 66;
					break;
			}
			break;
		
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
			switch (iParam2)
			{
				case 0:
					return 52;
					break;
				
				case 1:
					return 53;
					break;
				
				case 2:
					return 54;
					break;
				
				case 3:
					return 55;
					break;
				
				case 4:
					return 56;
					break;
				
				case 5:
					return 57;
					break;
				
				case 6:
					return 58;
					break;
				
				case 7:
					return 59;
					break;
				
				case 8:
					return 60;
					break;
				
				case 9:
					return 61;
					break;
				
				case 10:
					return 69;
					break;
			}
			break;
		
		case 62:
		case 63:
			switch (iParam2)
			{
				case 0:
					return 70;
					break;
				
				case 1:
					return 71;
					break;
				
				case 2:
					return 72;
					break;
				
				case 3:
					return 73;
					break;
				
				case 4:
					return 74;
					break;
				
				case 5:
					return 75;
					break;
				
				case 6:
					return 76;
					break;
				
				case 7:
					return 77;
					break;
				
				case 8:
					return 78;
					break;
				
				case 9:
					return 79;
					break;
				
				case 10:
					return 80;
					break;
			}
			break;
		
		case 64:
		case 65:
		case 66:
			switch (iParam2)
			{
				case 0:
					return 89;
					break;
				
				case 1:
					return 90;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 92;
					break;
				
				case 4:
					return 93;
					break;
				
				case 5:
					return 94;
					break;
				
				case 6:
					return 95;
					break;
				
				case 7:
					return 96;
					break;
				
				case 8:
					return 97;
					break;
				
				case 9:
					return 98;
					break;
				
				case 10:
					return 99;
					break;
			}
			break;
	}
	return 0;
}

int func_456(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (func_454(iParam0))
	{
		return -99;
	}
	if (func_457(iParam0))
	{
		return -99;
	}
	if (iParam2 == 11)
	{
		if (iParam1 == joaat("mp_m_freemode_01"))
		{
			if (((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 188 && iParam3 <= 203))
			{
				return 1;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 108 && iParam3 <= 123))
			{
				return 11;
			}
			else if (iParam3 >= 96 && iParam3 <= 107)
			{
				return 41;
			}
			else if (iParam3 >= 156 && iParam3 <= 171)
			{
				return 36;
			}
			else if (iParam3 >= 172 && iParam3 <= 187)
			{
				return 31;
			}
			else if (iParam3 >= 204 && iParam3 <= 219)
			{
				return 16;
			}
			else if ((iParam3 >= 220 && iParam3 <= 235) || (iParam3 >= 124 && iParam3 <= 139))
			{
				return 26;
			}
			else if (iParam3 == 236)
			{
				return 21;
			}
			else if (iParam3 >= 237)
			{
				iVar0 = func_73(iParam1, iParam3, 11, 3);
				if (iVar0 != -1)
				{
					iVar1 = unk_0xBEEBC440559223F7(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						unk_0xE5694002E250F2D1(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 9)
						{
							if (iVar3 != 0 && iVar3 != joaat("0"))
							{
								return func_344(iParam1, iVar3, 9, 3);
							}
							else
							{
								return uVar4;
							}
						}
						iVar2++;
					}
				}
				return -99;
			}
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			if ((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255))
			{
				return 1;
			}
			else if (((iParam3 >= 16 && iParam3 <= 31) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 128 && iParam3 <= 143))
			{
				return 16;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (iParam3 >= 48 && iParam3 <= 63)
			{
				return 11;
			}
			else if ((iParam3 >= 96 && iParam3 <= 111) || (iParam3 >= 160 && iParam3 <= 175))
			{
				return 21;
			}
			else if (iParam3 >= 224 && iParam3 <= 239)
			{
				return 26;
			}
			else if (iParam3 >= 144 && iParam3 <= 159)
			{
				return 0;
			}
			else if (iParam3 >= 80 && iParam3 <= 95)
			{
				return 31;
			}
			else if (iParam3 >= 256)
			{
				iVar6 = func_73(iParam1, iParam3, 11, 4);
				if (iVar6 != -1)
				{
					iVar7 = unk_0xBEEBC440559223F7(iVar6);
					iVar8 = 0;
					while (iVar8 < iVar7)
					{
						unk_0xE5694002E250F2D1(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
						if (iVar11 == 9)
						{
							if (iVar9 != 0 && iVar9 != joaat("0"))
							{
								return func_344(iParam1, iVar9, 9, 4);
							}
							else
							{
								return uVar10;
							}
						}
						iVar8++;
					}
				}
				return -99;
			}
		}
	}
	return -99;
}

int func_457(int iParam0)
{
	if (unk_0x01758128AAB0BA8F(unk_0xF94D55021DC59203(iParam0, 8, unk_0x094C1D2DFE050D6E(iParam0, 8), unk_0x288277F22D527487(iParam0, 8)), joaat("X17_DRAW_6"), 0))
	{
		return 1;
	}
	return 0;
}

int func_458(int iParam0)
{
	int iVar0;
	
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		iVar0 = unk_0x6471F4759775FCA4(iParam0);
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			if (unk_0x094C1D2DFE050D6E(iParam0, 9) != 0)
			{
				return 1;
			}
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			if (unk_0x094C1D2DFE050D6E(iParam0, 9) != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_459(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<7> Var21;
	int iVar38;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar1 = -1;
		iVar2 = -1;
		if (Global_4269710 == iParam1)
		{
			iVar2 = Global_4269709;
			iVar1 = Global_4269708;
		}
		else if (iParam1 >= 92)
		{
			iVar2 = func_73(iParam0, iParam1, 7, 3);
			iVar1 = func_72(iVar2);
			Global_4269710 = iParam1;
			Global_4269709 = iVar2;
			Global_4269708 = iVar1;
		}
		iVar3 = -1;
		iVar4 = -1;
		if (Global_4269713 == iParam3)
		{
			iVar4 = Global_4269712;
			iVar3 = Global_4269711;
		}
		else if (iParam3 >= 237)
		{
			iVar4 = func_73(iParam0, iParam3, 11, 3);
			iVar3 = func_72(iVar4);
			Global_4269713 = iParam3;
			Global_4269712 = iVar4;
			Global_4269711 = iVar3;
		}
		iVar5 = -1;
		iVar6 = -1;
		if (Global_4269716 == iParam4)
		{
			iVar6 = Global_4269715;
			iVar5 = Global_4269714;
		}
		else if (iParam4 >= 241)
		{
			iVar6 = func_73(iParam0, iParam4, 8, 3);
			iVar5 = func_72(iVar6);
			Global_4269716 = iParam4;
			Global_4269715 = iVar6;
			Global_4269714 = iVar5;
		}
		iVar7 = -1;
		iVar8 = -1;
		if (Global_4269719 == iParam10)
		{
			iVar8 = Global_4269718;
			iVar7 = Global_4269717;
		}
		else if (iParam10 >= 26)
		{
			iVar8 = func_73(iParam0, iParam10, 1, 3);
			iVar7 = func_72(iVar8);
			Global_4269719 = iParam10;
			Global_4269718 = iVar8;
			Global_4269717 = iVar7;
		}
		if (iParam3 != -99)
		{
			if ((unk_0x01758128AAB0BA8F(iVar4, joaat("MORPH_SUIT"), 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("SCUBA_GEAR"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("GORKA_SUIT"), 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam10 != -99)
		{
			if (unk_0x01758128AAB0BA8F(iVar8, joaat("HEADSCARF"), 0) && !unk_0x01758128AAB0BA8F(iVar8, joaat("SMUG_DRAW_6"), 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (unk_0x01758128AAB0BA8F(iVar2, 1930035188, 0))
		{
			if (func_521(iParam0, iParam3, -1))
			{
				return 0;
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x01758128AAB0BA8F(iVar4, joaat("PILOT_SUIT"), 0))
			{
				if (iParam1 != 0 && !(iVar2 != -1 && unk_0x01758128AAB0BA8F(iVar2, joaat("PILOT_SUIT"), 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x01758128AAB0BA8F(iVar2, joaat("EPSILON_CHAIN_ALT"), 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar4, joaat("ARENA_DRAW_0"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (unk_0x01758128AAB0BA8F(iVar2, joaat("EPSILON_CHAIN"), 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar4, joaat("ARENA_DRAW_0"), 0))
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (unk_0x01758128AAB0BA8F(iVar2, joaat("EPSILON_CHAIN_ALT"), 0))
			{
				if (iParam4 == 240)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x01758128AAB0BA8F(iVar2, 91564168, 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar4, 91564168, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (unk_0x01758128AAB0BA8F(iVar2, 91564168, 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar6, 91564168, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (unk_0x01758128AAB0BA8F(iVar2, -120244486, 0))
		{
			if (iParam9 != -99)
			{
				iVar9 = -1;
				if (iParam9 >= 327)
				{
					iVar9 = func_73(iParam0, iParam9, 14, 3);
				}
				if (((iParam9 >= 27 && iParam9 <= 34) || (iParam9 >= 75 && iParam9 <= 82)) || (iParam9 >= 107 && iParam9 <= 114))
				{
					return 0;
				}
				switch (iVar9)
				{
					case 1411612772:
					case 1399488226:
					case 1103092621:
					case 798340921:
					case 495850282:
					case -1972900644:
					case 2016102499:
					case 1719477511:
					case 288210625:
					case -882756821:
					case -1242625979:
					case -1358792084:
					case joaat("DLC_MP_EXEC_M_PHEAD_1_0"):
					case joaat("DLC_MP_BEACH_M_HEAD0_0"):
					case joaat("DLC_MP_BEACH_M_HEAD0_1"):
					case joaat("DLC_MP_BEACH_M_HEAD0_2"):
					case joaat("DLC_MP_BEACH_M_HEAD0_3"):
					case joaat("DLC_MP_BEACH_M_HEAD0_4"):
					case joaat("DLC_MP_BEACH_M_HEAD0_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_8"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_9"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_10"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_11"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_12"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_13"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_14"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_15"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_16"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_17"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_18"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_19"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_20"):
					case joaat("DLC_MP_GR_M_PHEAD_7_0"):
					case joaat("DLC_MP_GR_M_PHEAD_7_1"):
					case joaat("DLC_MP_GR_M_PHEAD_7_2"):
					case joaat("DLC_MP_GR_M_PHEAD_7_3"):
					case joaat("DLC_MP_GR_M_PHEAD_7_4"):
					case joaat("DLC_MP_GR_M_PHEAD_7_5"):
					case joaat("DLC_MP_GR_M_PHEAD_7_6"):
					case joaat("DLC_MP_GR_M_PHEAD_7_7"):
					case joaat("DLC_MP_GR_M_PHEAD_7_8"):
					case joaat("DLC_MP_GR_M_PHEAD_7_9"):
					case joaat("DLC_MP_GR_M_PHEAD_7_10"):
						return 0;
						break;
					}
			}
			if (iParam10 != -99)
			{
				if (unk_0x01758128AAB0BA8F(iVar8, joaat("HEADSCARF"), 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && unk_0x01758128AAB0BA8F(iVar2, joaat("SCARF"), 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar2, joaat("JACKET_SCARF"), 0))
				{
					if (((((((((((((((((((((((((((((((((((((((((unk_0x01758128AAB0BA8F(iVar4, joaat("BLOCK_SCARFS"), 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE2_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE2_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("SMOKING_JACKET"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("SILK_ROBE"), 0)) || unk_0x01758128AAB0BA8F(iVar4, -826135203, 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("JAN_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("JAN_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_24"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_14"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_15"), 0)) || unk_0x01758128AAB0BA8F(iVar4, -102825006, 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_19"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_20"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_9"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("AIR_DRAW_0"), 0))
					{
						return 0;
					}
					else if (func_461(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BLOCK_SCARFS"), 0))
				{
					return 0;
				}
				else if (func_461(iParam0, iParam3))
				{
					return 0;
				}
				else if (unk_0x01758128AAB0BA8F(iVar2, -120244486, 0))
				{
					if (((((((((((((iParam3 >= 188 && iParam3 <= 203) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 12) || iVar3 == 14) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_10"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("AIR_DRAW_0"), 0))
					{
						return 0;
					}
				}
				if (iParam10 != -99)
				{
					if (unk_0x01758128AAB0BA8F(iVar8, joaat("HEADSCARF"), 0))
					{
						return 0;
					}
				}
			}
			if (iVar2 != -1 && unk_0x01758128AAB0BA8F(iVar2, joaat("LUXE_SCARF"), 0))
			{
				if (((unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_DRAW_0"), 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE2_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE2_DRAW_1"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if ((iVar2 != -1 && unk_0x01758128AAB0BA8F(iVar2, joaat("SCARF"), 0)) || (iVar2 != -1 && unk_0x01758128AAB0BA8F(iVar2, joaat("BIG_CHAIN"), 0)))
		{
			if (iParam11 != -99)
			{
				iVar10 = -1;
				if (iParam11 >= 256)
				{
					iVar10 = func_73(iParam0, iParam11, 4, 3);
				}
				if (unk_0x01758128AAB0BA8F(iVar10, joaat("DUNGAREES"), 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && unk_0x01758128AAB0BA8F(iVar2, joaat("BEAD_NECKLACE"), 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar4, joaat("SWEAT_VEST"), 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_20"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && unk_0x01758128AAB0BA8F(iVar2, joaat("CHAIN"), 0))
		{
			if (iParam3 != -99)
			{
				if (unk_0x01758128AAB0BA8F(iVar2, joaat("BIG_CHAIN"), 0))
				{
					if ((iParam3 >= 96 && iParam3 <= 107) || iVar3 == 6)
					{
						return 0;
					}
				}
				if (iParam3 == 236)
				{
					if (unk_0x01758128AAB0BA8F(iVar2, joaat("ALT_CHAIN"), 0))
					{
						return 0;
					}
				}
				else if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || unk_0x01758128AAB0BA8F(iVar4, joaat("BLOCK_CHAINS"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("TUX_JACKET"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("PILOT_SUIT"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("COMBAT_TOP"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("XMAS2_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar4, -1086258388, 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("SCRUFFY_JACKET"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_9"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_10"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_12"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_13"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_14"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_15"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_16"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE2_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("SILK_ROBE"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("SILK_PYJAMAS"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("SMOKING_JACKET"), 0)) || unk_0x01758128AAB0BA8F(iVar4, -826135203, 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("JAN_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("JAN_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_15"), 0)) || unk_0x01758128AAB0BA8F(iVar4, -102825006, 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_19"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_20"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_21"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("JACKET_ONLY"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("AIR_DRAW_0"), 0))
				{
					return 0;
				}
				else if (!unk_0x01758128AAB0BA8F(iVar2, joaat("ALT_CHAIN"), 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 12) || iVar5 == 13) || unk_0x01758128AAB0BA8F(iVar6, joaat("TUX_VEST"), 0)) || unk_0x01758128AAB0BA8F(iVar6, joaat("BLOCK_CHAINS"), 0)) || unk_0x01758128AAB0BA8F(iVar6, joaat("STUNT_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar6, joaat("STUNT_DRAW_2"), 0))
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && unk_0x01758128AAB0BA8F(iVar2, joaat("BIG_CHAIN"), 0))
		{
			if (iParam8 != -99)
			{
				return 0;
			}
		}
		if (iVar2 != -1 && unk_0x01758128AAB0BA8F(iVar2, joaat("PILOT_SUIT"), 0))
		{
			if (iParam9 >= 327 && unk_0x01758128AAB0BA8F(func_73(iParam0, iParam9, 14, 3), joaat("PILOT_SUIT"), 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && unk_0x01758128AAB0BA8F(func_73(iParam0, iParam9, 14, 3), joaat("PILOT_SUIT"), 1)) && iParam1 != 0)
		{
			return 0;
		}
		if (iVar2 != -1 && unk_0x01758128AAB0BA8F(iVar2, -1119006951, 0))
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((((iParam3 >= 140 && iParam3 <= 155) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 9) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_BOMB"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_BOMB"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("JAN_BOMB"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("PILOT_SUIT"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("COMBAT_TOP"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_12"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_14"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_BOMB"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_20"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_14"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_25"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("GUN_DRAW_14"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("AIR_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("SMUG_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("ASSAULT_DRAW_0"), 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 144 && iParam4 <= 159)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 176 && iParam4 <= 191)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 9) || iVar5 == 10) || iVar5 == 11) || iVar5 == 12) || iVar5 == 13) || unk_0x01758128AAB0BA8F(iVar6, joaat("ALLOW_TIES"), 0)) || unk_0x01758128AAB0BA8F(iVar6, joaat("VEST_SHIRT"), 0)) || unk_0x01758128AAB0BA8F(iVar6, joaat("TUX_VEST"), 0)) || unk_0x01758128AAB0BA8F(iVar6, joaat("CLOSED_COLLAR"), 0)) || unk_0x01758128AAB0BA8F(iVar6, joaat("OPEN_COLLAR"), 0)) || unk_0x01758128AAB0BA8F(iVar6, joaat("TUX_SHIRT"), 0))
				{
					return 0;
				}
			}
		}
		if ((iParam1 >= 1 && iParam1 <= 3) || iVar1 == 1)
		{
			if (iParam5 != -99)
			{
				if (iParam5 != 15)
				{
					return 0;
				}
			}
			if (iParam3 != -99)
			{
				if (iParam3 != 236)
				{
					return 0;
				}
			}
			if (iVar4 != -1 && unk_0x01758128AAB0BA8F(iVar4, joaat("OUTFIT_CHECKS"), 0))
			{
				return 0;
			}
		}
		else if ((iParam1 >= 4 && iParam1 <= 6) || iVar1 == 2)
		{
			if (iParam3 != -99)
			{
				if ((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((iParam4 >= 0 && iParam4 <= 15) || (iParam4 >= 16 && iParam4 <= 31)) || (iParam4 >= 32 && iParam4 <= 47)) || (iParam4 >= 80 && iParam4 <= 95)) || (iParam4 >= 128 && iParam4 <= 143)) || iParam4 == 240) || iVar5 == 0) || iVar5 == 1) || iVar5 == 2) || iVar5 == 5) || iVar5 == 8) || iVar5 == 15)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 10 && iParam1 <= 25) || iVar1 == 4)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 172 && iParam3 <= 187)) || (iParam3 >= 204 && iParam3 <= 219)) || iParam3 == 236) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8) || iVar3 == 9) || iVar3 == 11) || iVar3 == 13) || iVar3 == 15)
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 32 && iParam1 <= 37) || iVar1 == 6)
		{
			if (iParam3 != -99)
			{
				if ((((iParam3 >= 96 && iParam3 <= 107) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 6) || iVar3 == 10)
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x01758128AAB0BA8F(iVar2, joaat("HIGH_ROLLER_TIE"), 0))
		{
			if (iParam4 != -99)
			{
				if (unk_0x01758128AAB0BA8F(iVar6, joaat("HIGH_ROLLER_SHIRT"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (((((iParam1 >= 41 && iParam1 <= 56) || (iParam1 >= 73 && iParam1 <= 88)) || iVar1 == 10) || iVar1 == 12) || (iVar2 != -1 && unk_0x01758128AAB0BA8F(iVar2, joaat("TIE"), 0)))
		{
			if (iParam3 != -99)
			{
				if (((iParam3 >= 204 && iParam3 <= 219) || func_521(iParam0, iParam3, -1)) || iVar3 == 13)
				{
					if (((unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_4"), 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_14"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_21"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("SWEAT_VEST"), 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((iParam4 >= 160 && iParam4 <= 175) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && unk_0x01758128AAB0BA8F(iVar6, joaat("ALLOW_TIES"), 0))) || (iVar6 != -1 && unk_0x01758128AAB0BA8F(iVar6, joaat("TUX_SHIRT"), 0)))
				{
					if (unk_0x01758128AAB0BA8F(iVar6, joaat("HIGH_ROLLER_SHIRT"), 0))
					{
						return 0;
					}
				}
				else
				{
					iVar0 = func_77(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_72(func_73(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((iParam4 >= 176 && iParam4 <= 191) || iVar5 == 11)
						{
							return 1;
						}
					}
					return 0;
				}
			}
		}
		else if ((iParam1 >= 57 && iParam1 <= 72) || iVar1 == 11)
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 204 && iParam3 <= 219) || (iParam3 >= 172 && iParam3 <= 187)) || func_521(iParam0, iParam3, -1)) || iVar3 == 13) || iVar3 == 11)
				{
					if ((unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_4"), 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_14"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("SWEAT_VEST"), 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && unk_0x01758128AAB0BA8F(iVar6, joaat("ALLOW_TIES"), 0))) || (iVar6 != -1 && unk_0x01758128AAB0BA8F(iVar6, joaat("VEST_SHIRT"), 0))) || (iVar6 != -1 && unk_0x01758128AAB0BA8F(iVar6, joaat("TUX_VEST"), 0))) || (iVar6 != -1 && unk_0x01758128AAB0BA8F(iVar6, joaat("TUX_SHIRT"), 0))) || unk_0x01758128AAB0BA8F(iVar6, joaat("CUFFED_SHIRT"), 0)) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_0")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_1")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_2")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_3")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_4"))
				{
					if (unk_0x01758128AAB0BA8F(iVar6, joaat("HIGH_ROLLER_SHIRT"), 0))
					{
						return 0;
					}
				}
				else
				{
					iVar0 = func_77(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_72(func_73(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!unk_0x01758128AAB0BA8F(iVar6, joaat("SWEAT_VEST"), 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x01758128AAB0BA8F(iVar2, joaat("VEST_TIE"), 0))
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11) || iVar4 == -27166014) || iVar4 == -273228435) || iVar4 == -2118057713) || iVar4 == -1809078812) || iVar4 == -1522415600) || iVar4 == -1212584705) || iVar4 == -886664231) || iVar4 == -646500230) || iVar4 == -290891042) || iVar4 == 15400801) || iVar4 == -485413449) || iVar4 == -254359230) || unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE2_DRAW_0"), 0)) || iVar4 == joaat("DLC_MP_BUSI_M_JBIB4_0")) || iVar4 == joaat("DLC_MP_BUSI_M_JBIB4_1")) || iVar4 == joaat("DLC_MP_BUSI_M_JBIB4_2")) || iVar4 == joaat("DLC_MP_VAL_M_JBIB0_0")) || iVar4 == joaat("DLC_MP_VAL_M_JBIB0_1")) || iVar4 == joaat("DLC_MP_VAL_M_JBIB0_2")) || iVar4 == joaat("DLC_MP_VAL_M_JBIB0_3"))
				{
					if (!unk_0x01758128AAB0BA8F(iVar4, joaat("SWEAT_VEST"), 0))
					{
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
			else if (iParam4 != -99)
			{
				if (((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || iVar5 == 4) || iVar5 == 6) || (iVar6 != -1 && unk_0x01758128AAB0BA8F(iVar6, joaat("VEST_SHIRT"), 0))) || unk_0x01758128AAB0BA8F(iVar6, joaat("CUFFED_SHIRT"), 0)) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_0")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_1")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_2")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_3")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_4"))
				{
					if (unk_0x01758128AAB0BA8F(iVar6, joaat("HIGH_ROLLER_SHIRT"), 0))
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!unk_0x01758128AAB0BA8F(iVar6, joaat("SWEAT_VEST"), 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x01758128AAB0BA8F(iVar2, joaat("TUX_TIE"), 0))
		{
			if (iParam3 != -99)
			{
				if (iVar4 != -1 && unk_0x01758128AAB0BA8F(iVar4, joaat("TUX_JACKET"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iVar6 != -1 && unk_0x01758128AAB0BA8F(iVar6, joaat("TUX_VEST"), 0)) && unk_0x01758128AAB0BA8F(iVar2, joaat("TUX_TIE_ALT"), 0)) || (((iVar6 != -1 && unk_0x01758128AAB0BA8F(iVar6, joaat("TUX_SHIRT"), 0)) && !unk_0x01758128AAB0BA8F(iVar2, joaat("TUX_TIE_ALT"), 0)) && !unk_0x01758128AAB0BA8F(iVar6, joaat("HIGH_ROLLER_SHIRT"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x01758128AAB0BA8F(iVar2, joaat("LOOSE_BOWTIE"), 0))
		{
			if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_0")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_1")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_2")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_3")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_4")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_0")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_1")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_2")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_3")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_4")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_5")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_6")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_7")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_8")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_9")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_10")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_11")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_12")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_13")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_14")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_15")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_0_0")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_0_1")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_0")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_1")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_2")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_3")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_4")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_5")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_6")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_7")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_8")) || iVar6 == joaat("DLC_MP_BIKER_M_SPECIAL_9_0")) || iVar6 == joaat("DLC_MP_BIKER_M_SPECIAL_9_1")) || unk_0x01758128AAB0BA8F(iVar6, joaat("HEIST_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar6, joaat("DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar6, joaat("DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar6, joaat("DRAW_11"), 0))
				{
					if (!unk_0x01758128AAB0BA8F(iVar6, joaat("SWEAT_VEST"), 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10)
						{
							if (!unk_0x01758128AAB0BA8F(iVar6, joaat("SWEAT_VEST"), 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x01758128AAB0BA8F(iVar2, joaat("LOOSE_TIE"), 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 4) || iVar3 == 10) || unk_0x01758128AAB0BA8F(iVar4, joaat("OPEN_JACKET"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((iParam4 >= 176 && iParam4 <= 191) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_0")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_1")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_2")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_3")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_4")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_0")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_1")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_2")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_3")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_4")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_5")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_6")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_7")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_8")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_9")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_10")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_11")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_12")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_13")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_14")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_15")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_0_0")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_0_1")) || iVar6 == joaat("DLC_MP_BIKER_M_SPECIAL_9_0")) || iVar6 == joaat("DLC_MP_BIKER_M_SPECIAL_9_1")) || unk_0x01758128AAB0BA8F(iVar6, joaat("HEIST_DRAW_5"), 0))
				{
					if (!unk_0x01758128AAB0BA8F(iVar6, joaat("SWEAT_VEST"), 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((iParam4 >= 160 && iParam4 <= 175) || iVar5 == 10)
						{
							if (!unk_0x01758128AAB0BA8F(iVar6, joaat("SWEAT_VEST"), 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x01758128AAB0BA8F(iVar2, joaat("SLACK_TIE"), 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 188 && iParam3 <= 203)) || iVar3 == 12) || iVar3 == 4) || unk_0x01758128AAB0BA8F(iVar4, joaat("OPEN_JACKET"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iParam4 >= 192 && iParam4 <= 207) || func_460(iVar6)) || (iVar6 != -1 && unk_0x01758128AAB0BA8F(iVar6, joaat("DRAW_12"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x01758128AAB0BA8F(iVar2, joaat("SCARF"), 0))
		{
			if (iParam3 != -99)
			{
				if ((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11)
				{
					return 0;
				}
				else if ((iVar4 != -1 && unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_4"), 0)) || (iVar4 != -1 && unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_DRAW_16"), 0)))
				{
					return 0;
				}
				else if (iVar4 != -1 && unk_0x01758128AAB0BA8F(iVar4, joaat("PILOT_SUIT"), 0))
				{
					return 0;
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam10 != -99)
			{
				if (unk_0x01758128AAB0BA8F(iVar8, joaat("HEADSCARF"), 0))
				{
					return 0;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar11 = -1;
		iVar12 = -1;
		if (Global_4269710 == iParam1)
		{
			iVar12 = Global_4269709;
			iVar11 = Global_4269708;
		}
		else if (iParam1 >= 55)
		{
			iVar12 = func_73(iParam0, iParam1, 7, 4);
			iVar11 = func_72(iVar12);
			Global_4269710 = iParam1;
			Global_4269709 = iVar12;
			Global_4269708 = iVar11;
		}
		iVar13 = -1;
		iVar14 = -1;
		if (Global_4269713 == iParam3)
		{
			iVar14 = Global_4269712;
			iVar13 = Global_4269711;
		}
		else if (iParam3 >= 256)
		{
			iVar14 = func_73(iParam0, iParam3, 11, 4);
			iVar13 = func_72(iVar14);
			Global_4269713 = iParam3;
			Global_4269712 = iVar14;
			Global_4269711 = iVar13;
		}
		iVar15 = -1;
		iVar16 = -1;
		if (Global_4269716 == iParam4)
		{
			iVar16 = Global_4269715;
			iVar15 = Global_4269714;
		}
		else if (iParam4 >= 136)
		{
			iVar16 = func_73(iParam0, iParam4, 8, 4);
			iVar15 = func_72(iVar16);
			Global_4269716 = iParam4;
			Global_4269715 = iVar16;
			Global_4269714 = iVar15;
		}
		iVar17 = -1;
		iVar18 = -1;
		if (Global_4269719 == iParam10)
		{
			iVar18 = Global_4269718;
			iVar17 = Global_4269717;
		}
		else if (iParam10 >= 26)
		{
			iVar18 = func_73(iParam0, iParam10, 1, 4);
			iVar17 = func_72(iVar18);
			Global_4269719 = iParam10;
			Global_4269718 = iVar18;
			Global_4269717 = iVar17;
		}
		iVar19 = -1;
		if (iParam9 >= 327)
		{
			iVar19 = func_73(iParam0, iParam9, 14, 4);
		}
		if (iParam3 != -99)
		{
			if (((unk_0x01758128AAB0BA8F(iVar14, joaat("MORPH_SUIT"), 0) || unk_0x01758128AAB0BA8F(iVar14, joaat("SCUBA_GEAR"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("CAT_SUIT"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("GORKA_SUIT"), 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam10 != -99)
		{
			if (unk_0x01758128AAB0BA8F(iVar18, joaat("HEADSCARF"), 0) && !unk_0x01758128AAB0BA8F(iVar18, joaat("SMUG_DRAW_6"), 0))
			{
				if (((((((iParam1 == 0 || (iParam1 >= 13 && iParam1 <= 18)) || iVar11 == 3) || (iVar12 != -1 && unk_0x01758128AAB0BA8F(iVar12, joaat("CUFF"), 0))) || (iParam1 >= 19 && iParam1 <= 24)) || iVar11 == 4) || (iParam1 >= 25 && iParam1 <= 30)) || iVar11 == 5)
				{
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x01758128AAB0BA8F(iVar18, joaat("HEADSCARF"), 0))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar11 == 1) || iVar11 == 2) || (iVar12 != -1 && unk_0x01758128AAB0BA8F(iVar12, joaat("EARRING"), 0)))
				{
					return 0;
				}
			}
		}
		if (unk_0x01758128AAB0BA8F(iVar12, 1930035188, 0))
		{
			if (func_521(iParam0, iParam3, -1))
			{
				return 0;
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x01758128AAB0BA8F(iVar14, joaat("PILOT_SUIT"), 0))
			{
				if (iParam1 != 0 && !(iVar12 != -1 && unk_0x01758128AAB0BA8F(iVar12, joaat("PILOT_SUIT"), 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x01758128AAB0BA8F(iVar12, joaat("EPSILON_CHAIN_ALT"), 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar14, joaat("ARENA_DRAW_0"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (unk_0x01758128AAB0BA8F(iVar12, joaat("EPSILON_CHAIN"), 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar14, joaat("ARENA_DRAW_0"), 0))
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (unk_0x01758128AAB0BA8F(iVar12, joaat("EPSILON_CHAIN_ALT"), 0))
			{
				if (iParam4 == 66)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x01758128AAB0BA8F(iVar12, 91564168, 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar14, 91564168, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (unk_0x01758128AAB0BA8F(iVar12, 91564168, 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar16, 91564168, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if ((iVar12 == joaat("DLC_MP_APA_F_TEETH_0_0") || iVar12 == 653911448) || iVar12 == -1519558015)
		{
			if (iParam9 != -99)
			{
				switch (iVar19)
				{
					case 1446628467:
					case -1938048778:
					case 2041418586:
					case -1342898200:
					case 2026483804:
					case -1977527541:
					case -1670449242:
					case -1385031204:
					case -1088111295:
					case -1530918836:
					case -1221415631:
					case -629869643:
					case joaat("DLC_MP_EXEC_F_PHEAD_1_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_8"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_9"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_10"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_11"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_12"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_13"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_14"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_15"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_16"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_17"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_18"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_19"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_20"):
					case joaat("DLC_MP_GR_F_PHEAD_7_0"):
					case joaat("DLC_MP_GR_F_PHEAD_7_1"):
					case joaat("DLC_MP_GR_F_PHEAD_7_2"):
					case joaat("DLC_MP_GR_F_PHEAD_7_3"):
					case joaat("DLC_MP_GR_F_PHEAD_7_4"):
					case joaat("DLC_MP_GR_F_PHEAD_7_5"):
					case joaat("DLC_MP_GR_F_PHEAD_7_6"):
					case joaat("DLC_MP_GR_F_PHEAD_7_7"):
					case joaat("DLC_MP_GR_F_PHEAD_7_8"):
					case joaat("DLC_MP_GR_F_PHEAD_7_9"):
					case joaat("DLC_MP_GR_F_PHEAD_7_10"):
						return 0;
						break;
					}
			}
			if (iParam10 != -99)
			{
				if (unk_0x01758128AAB0BA8F(iVar18, joaat("HEADSCARF"), 0))
				{
					return 0;
				}
			}
			if (unk_0x01758128AAB0BA8F(iVar16, joaat("OVER_JACKET"), 0))
			{
				return 0;
			}
		}
		if (iParam3 != -99)
		{
			if (iVar12 != -1 && unk_0x01758128AAB0BA8F(iVar12, joaat("SCARF"), 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar12, joaat("JACKET_SCARF"), 0))
				{
					if ((((((((((((((((unk_0x01758128AAB0BA8F(iVar14, joaat("BLOCK_SCARFS"), 0) || unk_0x01758128AAB0BA8F(iVar14, joaat("SMOKING_JACKET"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("SILK_ROBE"), 0)) || unk_0x01758128AAB0BA8F(iVar14, -826135203, 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_15"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_18"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_20"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_24"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_9"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("AIR_DRAW_0"), 0))
					{
						return 0;
					}
					else if (func_461(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (func_461(iParam0, iParam3) || unk_0x01758128AAB0BA8F(iVar14, joaat("BLOCK_SCARFS"), 0))
				{
					return 0;
				}
				if (iParam10 != -99)
				{
					if (unk_0x01758128AAB0BA8F(iVar18, joaat("HEADSCARF"), 0))
					{
						return 0;
					}
				}
			}
			if (iVar12 != -1 && unk_0x01758128AAB0BA8F(iVar12, joaat("LUXE_SCARF"), 0))
			{
				if ((((unk_0x01758128AAB0BA8F(iVar14, joaat("LUXE_DRAW_0"), 0) || unk_0x01758128AAB0BA8F(iVar14, joaat("LUXE_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LUXE_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LUXE2_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LUXE2_DRAW_1"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iVar12 != -1 && unk_0x01758128AAB0BA8F(iVar12, joaat("SCARF"), 0))
		{
			if (unk_0x01758128AAB0BA8F(iVar16, joaat("BLOCK_SCARFS"), 0))
			{
				return 0;
			}
		}
		else if (iVar12 != -1 && unk_0x01758128AAB0BA8F(iVar12, joaat("CHAIN"), 0))
		{
			if (unk_0x01758128AAB0BA8F(iVar16, joaat("BLOCK_CHAINS"), 0))
			{
				return 0;
			}
		}
		if (iVar12 != -1 && unk_0x01758128AAB0BA8F(iVar12, joaat("PILOT_SUIT"), 0))
		{
			if (iParam9 >= 327 && unk_0x01758128AAB0BA8F(func_73(iParam0, iParam9, 14, 4), joaat("PILOT_SUIT"), 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && unk_0x01758128AAB0BA8F(func_73(iParam0, iParam9, 14, 4), joaat("PILOT_SUIT"), 1)) && iParam1 != 0)
		{
			return 0;
		}
		if ((((iVar12 != -1 && unk_0x01758128AAB0BA8F(iVar12, joaat("SCARF"), 0)) || (iVar12 != -1 && unk_0x01758128AAB0BA8F(iVar12, joaat("BIG_CHAIN"), 0))) || (iParam1 >= 43 && iParam1 <= 48)) || iVar11 == 8)
		{
			if (iParam11 != -99)
			{
				iVar20 = -1;
				if (iParam11 >= 256)
				{
					iVar20 = func_73(iParam0, iParam11, 4, 4);
				}
				if (unk_0x01758128AAB0BA8F(iVar20, joaat("DUNGAREES"), 0))
				{
					return 0;
				}
			}
		}
		if (iVar12 != -1 && (unk_0x01758128AAB0BA8F(iVar12, joaat("TIE"), 0) || unk_0x01758128AAB0BA8F(iVar12, joaat("BOWTIE"), 0)))
		{
			if (iParam2 == 11)
			{
				if ((((((((((((unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_5"), 0) || unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_11"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_12"), 0)) || unk_0x01758128AAB0BA8F(iVar14, -872449705, 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_10"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_12"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_25"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_9"), 0)) || (iParam3 >= 112 && iParam3 <= 127)) || iVar13 == 7)
				{
				}
				else if ((unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_9"), 0) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_11"), 0)) || unk_0x01758128AAB0BA8F(iVar14, 144417099, 0))
				{
					if (unk_0x01758128AAB0BA8F(iVar12, joaat("BOWTIE"), 0))
					{
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
			else if (iParam2 == 8)
			{
				if (unk_0x01758128AAB0BA8F(iVar16, joaat("OPEN_COLLAR"), 0) || unk_0x01758128AAB0BA8F(iVar16, joaat("CLOSED_COLLAR"), 0))
				{
					if (unk_0x01758128AAB0BA8F(iVar12, joaat("TIE"), 0))
					{
						if (unk_0x01758128AAB0BA8F(iVar16, joaat("HEIST_DRAW_8"), 0) || unk_0x01758128AAB0BA8F(iVar16, joaat("HEIST_DRAW_9"), 0))
						{
							if (unk_0x01758128AAB0BA8F(iVar12, joaat("ALT_TIE"), 0))
							{
							}
							else
							{
								return 0;
							}
						}
						else if (unk_0x01758128AAB0BA8F(iVar12, joaat("ALT_TIE"), 0))
						{
							return 0;
						}
					}
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam9 != -99)
		{
			if ((iVar19 != -1 && unk_0x01758128AAB0BA8F(iVar19, joaat("EARRING"), 1)) || (iVar19 != -1 && unk_0x01758128AAB0BA8F(iVar19, joaat("BLOCK_EARRINGS"), 1)))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar11 == 1) || iVar11 == 2) || (iVar12 != -1 && unk_0x01758128AAB0BA8F(iVar12, joaat("EARRING"), 0)))
				{
					return 0;
				}
			}
		}
		if (unk_0x01758128AAB0BA8F(iVar12, 1930035188, 0))
		{
			if (unk_0x01758128AAB0BA8F(iVar14, joaat("DRESS"), 0))
			{
				return 1;
			}
		}
		if (iVar12 != -1 && unk_0x01758128AAB0BA8F(iVar12, joaat("CHAIN"), 0))
		{
			if (iParam3 != -99)
			{
				if (((((((unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_5"), 0) || unk_0x01758128AAB0BA8F(iVar14, -102825006, 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_18"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_20"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_24"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("BLOCK_CHAINS"), 0))
				{
					return 0;
				}
				else if (func_521(iParam0, iParam3, -1))
				{
				}
				else if ((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 176 && iParam3 <= 191)) || iVar13 == 2) || iVar13 == 11) || unk_0x01758128AAB0BA8F(iVar14, joaat("TAILS_JACKET"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LUXE_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LUXE2_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar14, -430330349, 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_21"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("EXEC_DRAW_14"), 0)) || iVar14 == joaat("DLC_MP_IND_F_JBIB_1_0")) || iVar14 == joaat("DLC_MP_IND_F_JBIB_1_1")) || unk_0x01758128AAB0BA8F(iVar14, joaat("SMUG_DRAW_5"), 0))
				{
					if (!unk_0x01758128AAB0BA8F(iVar12, joaat("ALT_CHAIN"), 0))
					{
						return 0;
					}
				}
				else if ((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || unk_0x01758128AAB0BA8F(iVar14, joaat("DRESS"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("VEST_SHIRT"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("VEST"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("PILOT_SUIT"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("COMBAT_TOP"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("COMBAT_SWEAT"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("XMAS2_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar14, -1086258388, 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_9"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_10"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_13"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_14"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_15"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("SILK_ROBE"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("SILK_PYJAMAS"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("SMOKING_JACKET"), 0)) || unk_0x01758128AAB0BA8F(iVar14, -826135203, 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_9"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar14, -1103045158, 0)) || unk_0x01758128AAB0BA8F(iVar14, -102825006, 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_20"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_24"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("AIR_DRAW_0"), 0))
				{
					return 0;
				}
				else if (unk_0x01758128AAB0BA8F(iVar12, joaat("ALT_CHAIN"), 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam4 >= 71 && iParam4 <= 86) || iVar15 == 11) || unk_0x01758128AAB0BA8F(iVar16, joaat("OFF_SHOULDER_ACCS"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("HEIST_DRAW_12"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LUXE_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LUXE_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LUXE_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LUXE_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LUXE_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LUXE_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LUXE_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LUXE_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LUXE_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LUXE_DRAW_9"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LUXE_DRAW_10"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LUXE_DRAW_11"), 0)) || iVar16 == joaat("DLC_MP_HEIST_F_SPECIAL_12_0")) || iVar16 == joaat("DLC_MP_HEIST_F_SPECIAL_12_1")) || iVar16 == joaat("DLC_MP_HIPS_F_ACCS3_0")) || iVar16 == joaat("DLC_MP_HIPS_F_ACCS3_1")) || iVar16 == joaat("DLC_MP_HIPS_F_ACCS3_2")) || iVar16 == joaat("DLC_MP_HIPS_F_ACCS3_3")) || iVar16 == joaat("DLC_MP_VAL_F_ACCS0_0")) || iVar16 == joaat("DLC_MP_VAL_F_ACCS0_1")) || iVar16 == joaat("DLC_MP_VAL_F_ACCS0_2")) || iVar16 == joaat("DLC_MP_VAL_F_ACCS1_0")) || iVar16 == joaat("DLC_MP_VAL_F_ACCS1_1")) || iVar16 == joaat("DLC_MP_VAL_F_ACCS1_2")) || unk_0x01758128AAB0BA8F(iVar16, joaat("LOW_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LOW_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LOW_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LOW_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LOW_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LOW_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LOW_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LOW2_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LOW2_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LOW2_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LOW2_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LOW2_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("LOW2_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("APART_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("APART_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("EXEC_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("EXEC_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("EXEC_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("EXEC_DRAW_17"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("STUNT_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("STUNT_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("STUNT_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("STUNT_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("BIKER_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("BIKER_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("BIKER_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("BIKER_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("BIKER_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("BIKER_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("BIKER_DRAW_33"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("SMUG_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("BLOCK_CHAINS"), 0))
				{
					if (!unk_0x01758128AAB0BA8F(iVar12, joaat("ALT_CHAIN"), 0))
					{
						return 0;
					}
				}
				else if (((((((unk_0x01758128AAB0BA8F(iVar16, joaat("VEST_SHIRT"), 0) || unk_0x01758128AAB0BA8F(iVar16, joaat("HEIST_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("HEIST_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("HEIST_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("HEIST_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("HEIST_DRAW_9"), 0)) || unk_0x01758128AAB0BA8F(iVar16, 1353777856, 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("APART_DRAW_1"), 0))
				{
					return 0;
				}
				else if (func_518(iParam0, iParam4, 0) != -99)
				{
					if (unk_0x01758128AAB0BA8F(iVar12, joaat("ALT_CHAIN"), 0))
					{
						return 0;
					}
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar12 != -1 && unk_0x01758128AAB0BA8F(iVar12, joaat("BEAD_NECKLACE"), 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_21"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (((iParam1 >= 13 && iParam1 <= 18) || iVar11 == 3) || (iVar12 != -1 && unk_0x01758128AAB0BA8F(iVar12, joaat("CUFF"), 0)))
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("COMBAT_GEAR"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("LONG_SLEEVE"), 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && unk_0x01758128AAB0BA8F(func_73(iParam0, iParam4, 8, 4), joaat("LONG_SLEEVE"), 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x01758128AAB0BA8F(iVar19, joaat("CUFF"), 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 19 && iParam1 <= 24) || iVar11 == 4)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("COMBAT_GEAR"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("LONG_SLEEVE"), 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && unk_0x01758128AAB0BA8F(func_73(iParam0, iParam4, 8, 4), joaat("LONG_SLEEVE"), 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x01758128AAB0BA8F(iVar19, joaat("CUFF"), 1))
				{
					unk_0x092B9A2C8F9C705E(iVar19, &Var21);
					if (Var21.f_6 == 7)
					{
						return 0;
					}
				}
			}
		}
		else if ((iParam1 >= 25 && iParam1 <= 30) || iVar11 == 5)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("COMBAT_GEAR"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("LONG_SLEEVE"), 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && unk_0x01758128AAB0BA8F(func_73(iParam0, iParam4, 8, 4), joaat("LONG_SLEEVE"), 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x01758128AAB0BA8F(iVar19, joaat("CUFF"), 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 31 && iParam1 <= 36) || iVar11 == 6)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("VEST_SHIRT"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("COMBAT_GEAR"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_GEAR"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_3"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("LUXE_SWEAT"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("LUXE_DRAW_4"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("LOW_SWEAT"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("LOW_DRAW_0"), 0))) || unk_0x01758128AAB0BA8F(iVar14, joaat("SILK_ROBE"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("SILK_PYJAMAS"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("SMOKING_JACKET"), 0)) || unk_0x01758128AAB0BA8F(iVar14, -826135203, 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_9"), 0)) || unk_0x01758128AAB0BA8F(iVar14, -430330349, 0)) || unk_0x01758128AAB0BA8F(iVar14, -102825006, 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_18"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_20"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_21"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_24"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("EXEC_DRAW_14"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("BIKER_DRAW_14"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("BIKER_DRAW_15"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("BIKER_DRAW_16"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("MORPH_SUIT"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("AIR_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("ASSAULT_DRAW_0"), 0))
				{
					return 0;
				}
			}
		}
		else if (((iParam1 >= 37 && iParam1 <= 42) || iVar11 == 7) || (iParam1 >= 55 && unk_0x01758128AAB0BA8F(iVar12, joaat("LONG_NECKLACE"), 0)))
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 48 && iParam3 <= 63)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 2) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("COMBAT_GEAR"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_GEAR"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("HEIST_DRAW_3"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("DRAW_0"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("LUXE_SWEAT"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("LUXE_DRAW_4"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("LOW_SWEAT"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("LOW_DRAW_0"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("LOW_DRAW_3"), 0))) || unk_0x01758128AAB0BA8F(iVar14, joaat("SILK_ROBE"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("SILK_PYJAMAS"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("SMOKING_JACKET"), 0)) || unk_0x01758128AAB0BA8F(iVar14, -826135203, 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("VEST_SHIRT"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_9"), 0)) || unk_0x01758128AAB0BA8F(iVar14, -430330349, 0)) || unk_0x01758128AAB0BA8F(iVar14, -102825006, 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_18"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_20"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_21"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("APART_DRAW_24"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("EXEC_DRAW_14"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("STUNT_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("BIKER_DRAW_19"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("AIR_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar14, joaat("BLOCK_CHAINS"), 0))
				{
					return 0;
				}
				else if (((((((((((iParam3 >= 112 && iParam3 <= 127) || (iParam3 >= 160 && iParam3 <= 175)) || (iParam3 >= 192 && iParam3 <= 207)) || iVar13 == 7) || iVar13 == 10) || iVar13 == 12) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("LONG_SLEEVE"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("VEST"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("COMBAT_GEAR"), 0))) || unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_7"), 0))
				{
					if (iParam1 >= 55 && unk_0x01758128AAB0BA8F(iVar12, joaat("LONG_NECKLACE"), 0))
					{
						return 0;
					}
				}
			}
			else if (iParam4 != -99)
			{
				if (unk_0x01758128AAB0BA8F(iVar16, joaat("VEST_SHIRT"), 0))
				{
					if (unk_0x01758128AAB0BA8F(iVar12, joaat("LONG_NECKLACE"), 0))
					{
						return 0;
					}
				}
				else if (((unk_0x01758128AAB0BA8F(iVar16, joaat("STUNT_DRAW_1"), 0) || unk_0x01758128AAB0BA8F(iVar16, joaat("STUNT_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("STUNT_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("STUNT_DRAW_4"), 0))
				{
					return 0;
				}
				else if ((unk_0x01758128AAB0BA8F(iVar16, joaat("ALT_SPECIAL_4"), 0) || unk_0x01758128AAB0BA8F(iVar16, joaat("ALT_SPECIAL_5"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("ALT_SPECIAL_6"), 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x01758128AAB0BA8F(iVar19, joaat("CUFF"), 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 43 && iParam1 <= 48) || iVar11 == 8)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar13 == 0) || iVar13 == 2) || iVar13 == 4) || iVar13 == 5) || iVar13 == 9) || iVar13 == 11) || iVar13 == 12) || iVar13 == 13) || iVar13 == 15) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("VEST"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("DRESS"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("LUXE_SWEAT"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("LOW_SWEAT"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 49 && iParam1 <= 54) || iVar11 == 9)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar13 == 0) || iVar13 == 4) || iVar13 == 5) || iVar13 == 11) || iVar13 == 12) || iVar13 == 13) || iVar13 == 15) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("VEST"), 0))) || (iParam3 >= 256 && unk_0x01758128AAB0BA8F(iVar14, joaat("DRESS"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (unk_0x01758128AAB0BA8F(iVar16, joaat("SWEAT_VEST"), 0) || unk_0x01758128AAB0BA8F(iVar16, joaat("BASIC_VEST"), 0))
				{
					return 0;
				}
				else if (((unk_0x01758128AAB0BA8F(iVar16, joaat("STUNT_DRAW_1"), 0) || unk_0x01758128AAB0BA8F(iVar16, joaat("STUNT_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("STUNT_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar16, joaat("STUNT_DRAW_4"), 0))
				{
					return 0;
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam10 != -99)
			{
				if (unk_0x01758128AAB0BA8F(iVar18, joaat("HEADSCARF"), 0))
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 55 && unk_0x01758128AAB0BA8F(iVar12, joaat("HIGH_ROLLER_TIE"), 0))
		{
			if (iParam4 != -99)
			{
				if (unk_0x01758128AAB0BA8F(iVar16, joaat("HIGH_ROLLER_SHIRT"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 55 && unk_0x01758128AAB0BA8F(iVar12, joaat("BRACES"), 0))
		{
			if (iParam3 != -99)
			{
				if (iVar14 != -1 && unk_0x01758128AAB0BA8F(iVar14, joaat("LOW2_DRAW_7"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (iParam11 != -99)
			{
				iVar38 = -1;
				if (iParam11 >= 256)
				{
					iVar38 = func_73(iParam0, iParam11, 4, 4);
				}
				if (unk_0x01758128AAB0BA8F(iVar38, joaat("HIGH_WAIST"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_460(int iParam0)
{
	if (iParam0 != -1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_BUSI_M_ACCS4_0"):
		case joaat("DLC_MP_BUSI_M_ACCS5_0"):
		case joaat("DLC_MP_BUSI_M_ACCS4_1"):
		case joaat("DLC_MP_BUSI_M_ACCS5_1"):
		case joaat("DLC_MP_BUSI_M_ACCS4_2"):
		case joaat("DLC_MP_BUSI_M_ACCS5_2"):
		case joaat("DLC_MP_BUSI_M_ACCS4_3"):
		case joaat("DLC_MP_BUSI_M_ACCS5_3"):
		case joaat("DLC_MP_BUSI_M_ACCS4_4"):
		case joaat("DLC_MP_BUSI_M_ACCS5_4"):
		case joaat("DLC_MP_BUSI_M_ACCS4_5"):
		case joaat("DLC_MP_BUSI_M_ACCS5_5"):
		case joaat("DLC_MP_BUSI_M_ACCS4_6"):
		case joaat("DLC_MP_BUSI_M_ACCS5_6"):
		case joaat("DLC_MP_BUSI_M_ACCS4_7"):
		case joaat("DLC_MP_BUSI_M_ACCS5_7"):
		case joaat("DLC_MP_BUSI_M_ACCS4_8"):
		case joaat("DLC_MP_BUSI_M_ACCS5_8"):
		case joaat("DLC_MP_BUSI_M_ACCS4_9"):
		case joaat("DLC_MP_BUSI_M_ACCS5_9"):
		case joaat("DLC_MP_BUSI_M_ACCS4_10"):
		case joaat("DLC_MP_BUSI_M_ACCS5_10"):
		case joaat("DLC_MP_BUSI_M_ACCS4_11"):
		case joaat("DLC_MP_BUSI_M_ACCS5_11"):
		case joaat("DLC_MP_BUSI_M_ACCS4_12"):
		case joaat("DLC_MP_BUSI_M_ACCS5_12"):
		case joaat("DLC_MP_BUSI_M_ACCS4_13"):
		case joaat("DLC_MP_BUSI_M_ACCS5_13"):
		case joaat("DLC_MP_BUSI_M_ACCS4_14"):
		case joaat("DLC_MP_BUSI_M_ACCS5_14"):
		case joaat("DLC_MP_BUSI_M_ACCS4_15"):
		case joaat("DLC_MP_BUSI_M_ACCS5_15"):
			return 1;
			break;
	}
	return 0;
}

int func_461(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar0 = func_73(iParam0, iParam1, 11, 3);
		if (iVar0 != -1)
		{
			if (((((((((((((((((((((((((((((((unk_0x01758128AAB0BA8F(iVar0, joaat("LOW_DRAW_0"), 0) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("SMOKING_JACKET"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("SILK_ROBE"), 0)) || unk_0x01758128AAB0BA8F(iVar0, -826135203, 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("JAN_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("JAN_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW2_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW2_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW2_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW2_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW2_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW2_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW2_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("APART_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("APART_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("APART_DRAW_14"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("STUNT_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("STUNT_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("STUNT_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("STUNT_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("STUNT_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("STUNT_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("STUNT_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("AIR_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("USE_JACKET_SCARF"), 0))
			{
				return 1;
			}
		}
		if (iVar0 != -1)
		{
			if (unk_0x01758128AAB0BA8F(iVar0, joaat("SILK_PYJAMAS"), 0))
			{
				return 1;
			}
		}
		return func_521(iParam0, iParam1, -1);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar1 = func_73(iParam0, iParam1, 11, 4);
		iVar2 = -1;
		if (iVar1 != -1)
		{
			iVar2 = func_72(iVar1);
		}
		if (((((((((((((((((((((((((((((((((((((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 48 && iParam1 < 64)) || (iParam1 >= 96 && iParam1 < 112)) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144)) || (iParam1 >= 144 && iParam1 < 160)) || (iParam1 >= 160 && iParam1 < 176)) || (iParam1 >= 224 && iParam1 < 240)) || iVar2 == 1) || iVar2 == 3) || iVar2 == 6) || iVar2 == 7) || iVar2 == 8) || iVar2 == 9) || iVar2 == 10) || iVar2 == 14) || unk_0x01758128AAB0BA8F(iVar1, joaat("JACKET"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("COMBAT_TOP"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("HEIST_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("HEIST_DRAW_9"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("SMOKING_JACKET"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("SILK_ROBE"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("SILK_PYJAMAS"), 0)) || unk_0x01758128AAB0BA8F(iVar1, -826135203, 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("LOW2_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar1, -102825006, 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("APART_DRAW_18"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("APART_DRAW_20"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("APART_DRAW_24"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("STUNT_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("STUNT_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("STUNT_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("STUNT_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("STUNT_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("STUNT_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("STUNT_DRAW_8"), 0)) || unk_0x01758128AAB0BA8F(iVar1, joaat("AIR_DRAW_0"), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_462(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x6471F4759775FCA4(iParam0);
	func_509(unk_0x15173FB88ABC94F9("hairOverlay"), iParam0);
	iVar1 = func_508(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_77056;
		}
		func_540(iVar1, 1, iParam2);
	}
	func_463(iParam0, bParam3, 0, -1);
}

void func_463(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	struct<9> Var1;
	int iVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<8> Var21;
	int iVar36;
	
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		iVar0 = Global_77056;
		unk_0xACFB6D8CB325EF49(iParam0);
		iVar14 = func_507(iParam0);
		bVar15 = func_502(iParam0, 0);
		bVar16 = func_494(iParam0);
		bVar17 = func_493(iParam0, iParam3);
		if (bParam1)
		{
			bVar16 = true;
		}
		if (bParam2)
		{
			bVar16 = false;
		}
		iVar18 = 0;
		while (iVar18 < 127)
		{
			if (func_490(iVar18, iVar0))
			{
				if (func_483(&Var1, iVar18, iVar14, iParam0, -1))
				{
					if (func_480(iParam0, &Var1, iVar18, Var1.f_4, Var1.f_8, bVar15, bVar16, bParam1, bVar17))
					{
						unk_0xFA02DDD2134428AC(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar18++;
		}
		if (func_490(123, iVar0))
		{
			if (unk_0x3FCD41FDB4395083(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				unk_0xFA02DDD2134428AC(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar20 = unk_0x534A9B3C6415526C(iVar14);
		iVar19 = 0;
		while (iVar19 < iVar20)
		{
			if (unk_0x37A11A039E429460(iVar14, iVar19, &Var21))
			{
				if (!unk_0xD1ABD511D9C326A3(Var21))
				{
					iVar36 = (129 + iVar19);
					if (func_490(iVar36, iVar0))
					{
						if (func_480(iParam0, &(Var21.f_7), iVar36, Var21.f_2, Var21.f_6, bVar15, bVar16, bParam1, bVar17))
						{
							if (!func_465(Var21.f_2, Var21.f_3, iVar36))
							{
								unk_0xFA02DDD2134428AC(iParam0, Var21.f_2, Var21.f_3);
								func_464(iParam0, Var21.f_2, Var21.f_3);
							}
						}
					}
				}
			}
			iVar19++;
		}
	}
}

void func_464(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case -1970774728:
			switch (iParam2)
			{
				case -129339642:
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, 1959383570);
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, -543063956);
					break;
				
				case 887263619:
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, -543063956);
					break;
				
				case -598443208:
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, -1160700813);
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, -543063956);
					break;
				
				case -619123295:
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, -543063956);
					break;
				
				case -2139930425:
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, -543063956);
					break;
				
				case 991513037:
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, 847416951);
					break;
				
				case -675149090:
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, 847416951);
					break;
				
				case 2021781367:
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, -1625184579);
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, 1294359428);
					break;
				
				case -436866133:
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, 1294359428);
					break;
				
				case 457275657:
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, 429414924);
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, 1294359428);
					break;
				
				case -250832592:
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, 1294359428);
					break;
				
				case -798760789:
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, 1294359428);
					break;
				
				case -1634791241:
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, -2021672848);
					break;
				
				case -1227437948:
					unk_0xFA02DDD2134428AC(iParam0, -1970774728, -2021672848);
					break;
			}
			break;
		
		case -1368357453:
			switch (iParam2)
			{
				case 901985554:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, -125935718);
					break;
				
				case -1199174880:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, -1060131742);
					break;
				
				case 1450237635:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, -1305394591);
					break;
				
				case -389741205:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, 667969632);
					break;
				
				case -141257402:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, -1359014181);
					break;
				
				case 153754618:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, 2081465940);
					break;
				
				case 659374865:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, -465054321);
					break;
				
				case -13136248:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, 775081672);
					break;
				
				case -1132960710:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, 106529549);
					break;
				
				case 1993003331:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, -914124698);
					break;
				
				case -625419875:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, 621839126);
					break;
				
				case -774542024:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, 1907053018);
					break;
				
				case 888079344:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, 1813906196);
					break;
				
				case -700883358:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, 773995069);
					break;
				
				case -13127060:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, 1207511209);
					break;
				
				case -1825878923:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, -1417506982);
					break;
				
				case -308681510:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, -952353610);
					break;
				
				case -2032106950:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, 595710974);
					break;
				
				case 921664999:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, -1317513903);
					break;
				
				case 1700345329:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, 1607579128);
					break;
				
				case -46539229:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, 90277989);
					break;
				
				case 552527284:
					unk_0xFA02DDD2134428AC(iParam0, -1368357453, 1999546193);
					break;
			}
			break;
		
		case joaat("mpVinewood_overlays"):
			switch (iParam2)
			{
				case joaat("CasinoTop_M_0"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_000_M"));
					break;
				
				case joaat("CasinoTop_M_1"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_M"));
					break;
				
				case joaat("CasinoTop_M_2"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_M"));
					break;
				
				case joaat("CasinoTop_M_3"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_M"));
					break;
				
				case joaat("CasinoTop_M_4"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_M"));
					break;
				
				case joaat("CasinoTop_M_5"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_M"));
					break;
				
				case joaat("CasinoTop_M_6"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_M"));
					break;
				
				case joaat("CasinoTop_M_7"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_004_M"));
					break;
				
				case joaat("CasinoTop_M_8"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_005_M"));
					break;
				
				case joaat("CasinoTop_M_9"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_M"));
					break;
				
				case joaat("CasinoTop_M_10"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_M"));
					break;
				
				case joaat("CasinoTop_M_11"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_007_M"));
					break;
				
				case joaat("CasinoTop_M_12"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_008_M"));
					break;
				
				case joaat("CasinoTop_M_13"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_009_M"));
					break;
				
				case joaat("CasinoTop_M_14"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_010_M"));
					break;
				
				case joaat("CasinoTop_M_15"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_011_M"));
					break;
				
				case joaat("CasinoTop_M_16"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_012_M"));
					break;
				
				case joaat("CasinoTop_M_17"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_013_M"));
					break;
				
				case joaat("CasinoTop_M_18"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_014_M"));
					break;
				
				case joaat("CasinoTop_M_19"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_015_M"));
					break;
				
				case joaat("CasinoTop_M_20"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_016_M"));
					break;
				
				case joaat("CasinoTop_M_21"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_M"));
					break;
				
				case joaat("CasinoTop_M_22"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_M"));
					break;
				
				case joaat("CasinoTop_M_23"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_018_M"));
					break;
				
				case joaat("CasinoTop_M_24"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_M"));
					break;
				
				case joaat("CasinoTop_M_25"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_M"));
					break;
				
				case joaat("CasinoTop_M_26"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_020_M"));
					break;
				
				case joaat("CasinoTop_M_27"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_M"));
					break;
				
				case joaat("CasinoTop_M_28"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_M"));
					break;
				
				case joaat("CasinoTop_M_29"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_M"));
					break;
				
				case joaat("CasinoTop_M_30"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_M"));
					break;
				
				case joaat("CasinoTop_M_31"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_M"));
					break;
				
				case joaat("CasinoTop_M_32"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_M"));
					break;
				
				case joaat("CasinoTop_M_33"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_M"));
					break;
				
				case joaat("CasinoTop_M_34"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_M"));
					break;
				
				case joaat("CasinoTop_M_35"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_M"));
					break;
				
				case joaat("CasinoTop_M_36"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_M"));
					break;
				
				case joaat("CasinoTop_M_37"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_M"));
					break;
				
				case joaat("CasinoTop_M_38"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_M"));
					break;
				
				case joaat("CasinoTop_M_39"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_M"));
					break;
				
				case joaat("CasinoTop_M_40"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_M"));
					break;
				
				case joaat("CasinoTop_M_41"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_M"));
					break;
				
				case joaat("CasinoTop_M_42"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_M"));
					break;
				
				case joaat("CasinoTop_M_43"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_M"));
					break;
				
				case joaat("CasinoTop_M_44"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_M"));
					break;
			}
			switch (iParam2)
			{
				case joaat("CasinoTop_F_0"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_000_F"));
					break;
				
				case joaat("CasinoTop_F_1"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_F"));
					break;
				
				case joaat("CasinoTop_F_2"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_F"));
					break;
				
				case joaat("CasinoTop_F_3"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_F"));
					break;
				
				case joaat("CasinoTop_F_4"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_F"));
					break;
				
				case joaat("CasinoTop_F_5"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_F"));
					break;
				
				case joaat("CasinoTop_F_6"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_F"));
					break;
				
				case joaat("CasinoTop_F_7"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_004_F"));
					break;
				
				case joaat("CasinoTop_F_8"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_005_F"));
					break;
				
				case joaat("CasinoTop_F_9"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_F"));
					break;
				
				case joaat("CasinoTop_F_10"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_F"));
					break;
				
				case joaat("CasinoTop_F_11"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_007_F"));
					break;
				
				case joaat("CasinoTop_F_12"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_008_F"));
					break;
				
				case joaat("CasinoTop_F_13"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_009_F"));
					break;
				
				case joaat("CasinoTop_F_14"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_010_F"));
					break;
				
				case joaat("CasinoTop_F_15"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_011_F"));
					break;
				
				case joaat("CasinoTop_F_16"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_012_F"));
					break;
				
				case joaat("CasinoTop_F_17"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_013_F"));
					break;
				
				case joaat("CasinoTop_F_18"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_014_F"));
					break;
				
				case joaat("CasinoTop_F_19"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_015_F"));
					break;
				
				case joaat("CasinoTop_F_20"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_016_F"));
					break;
				
				case joaat("CasinoTop_F_21"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_F"));
					break;
				
				case joaat("CasinoTop_F_22"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_F"));
					break;
				
				case joaat("CasinoTop_F_23"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_018_F"));
					break;
				
				case joaat("CasinoTop_F_24"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_F"));
					break;
				
				case joaat("CasinoTop_F_25"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_F"));
					break;
				
				case joaat("CasinoTop_F_26"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_020_F"));
					break;
				
				case joaat("CasinoTop_F_27"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_F"));
					break;
				
				case joaat("CasinoTop_F_28"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_F"));
					break;
				
				case joaat("CasinoTop_F_29"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_F"));
					break;
				
				case joaat("CasinoTop_F_30"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_F"));
					break;
				
				case joaat("CasinoTop_F_31"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_F"));
					break;
				
				case joaat("CasinoTop_F_32"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_F"));
					break;
				
				case joaat("CasinoTop_F_33"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_F"));
					break;
				
				case joaat("CasinoTop_F_34"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_F"));
					break;
				
				case joaat("CasinoTop_F_35"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_F"));
					break;
				
				case joaat("CasinoTop_F_36"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_F"));
					break;
				
				case joaat("CasinoTop_F_37"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_F"));
					break;
				
				case joaat("CasinoTop_F_38"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_F"));
					break;
				
				case joaat("CasinoTop_F_39"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_F"));
					break;
				
				case joaat("CasinoTop_F_40"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_F"));
					break;
				
				case joaat("CasinoTop_F_41"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_F"));
					break;
				
				case joaat("CasinoTop_F_42"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_F"));
					break;
				
				case joaat("CasinoTop_F_43"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_F"));
					break;
				
				case joaat("CasinoTop_F_44"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_F"));
					break;
			}
			break;
		
		case joaat("mpBattle_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Battle_Clothing_000_M"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpBattle_overlays"), joaat("MP_Battle_Clothing_001_M"));
					break;
			}
			switch (iParam2)
			{
				case joaat("MP_Battle_Clothing_000_F"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpBattle_overlays"), joaat("MP_Battle_Clothing_001_F"));
					break;
			}
			break;
		
		case joaat("mpSmuggler_overlays"):
			switch (iParam2)
			{
				case joaat("M_TankTop_Smug_5_3_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_000_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_17_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_001_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_10_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_002_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_11_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_003_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_12_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_004_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_13_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_005_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_20_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_006_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_21_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_007_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_23_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_008_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_22_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_009_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_5_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_010_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_18_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_011_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_0_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_012_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_3_b"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_013_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_25_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_014_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_7_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_015_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_4_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_016_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_1_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_017_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_9_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_018_M"));
					break;
			}
			switch (iParam2)
			{
				case joaat("F_TankTop_Smug_5_3_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_000_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_17_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_001_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_10_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_002_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_11_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_003_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_12_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_004_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_13_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_005_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_20_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_006_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_21_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_007_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_23_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_008_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_22_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_009_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_5_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_010_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_18_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_011_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_0_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_012_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_3_b"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_013_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_25_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_014_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_7_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_015_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_4_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_016_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_1_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_017_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_9_a"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_018_F"));
					break;
			}
			break;
		
		case joaat("mpGunrunning_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Gunrunning_Award_020_M_ALT"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpGunrunning_overlays"), joaat("MP_Gunrunning_Award_020_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_020_F_ALT"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpGunrunning_overlays"), joaat("MP_Gunrunning_Award_020_F"));
					break;
			}
			break;
		
		case joaat("mpExecutive_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Securoserv_000_Mb"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpExecutive_overlays"), joaat("MP_Securoserv_000_M"));
					break;
				
				case joaat("MP_Securoserv_000_Fb"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpExecutive_overlays"), joaat("MP_Securoserv_000_F"));
					break;
			}
			break;
		
		case joaat("mpHeist_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Elite_M_Tshirt_1"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpHeist_overlays"), joaat("MP_Elite_M_Tshirt_2"));
					break;
				
				case joaat("MP_Elite_F_Tshirt_1"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpHeist_overlays"), joaat("MP_Elite_F_Tshirt_2"));
					break;
			}
			break;
		
		case joaat("mpLuxe2_overlays"):
			switch (iParam2)
			{
				case joaat("MP_LUXE_TAT_029_M"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_030_M"));
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_031_M"));
					break;
				
				case joaat("MP_LUXE_TAT_029_F"):
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_030_F"));
					unk_0xFA02DDD2134428AC(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_031_F"));
					break;
			}
			break;
	}
}

int func_465(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	switch (iParam0)
	{
		case -1970774728:
			switch (iParam1)
			{
				case -129339642:
				case 2021781367:
					if (func_479(116, -1) >= func_478(116, 5, 9) || func_475(31760, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -129339642);
					break;
				
				case 887263619:
				case -436866133:
					if (func_161(123, -1) || func_475(31761, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 887263619);
					break;
				
				case -598443208:
				case 457275657:
					if (func_161(124, -1) || func_475(31762, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -598443208);
					break;
				
				case -619123295:
				case -250832592:
					if (func_161(125, -1) || func_475(31763, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -619123295);
					break;
				
				case -2139930425:
				case -798760789:
					if (func_161(126, -1) || func_475(31764, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -2139930425);
					break;
				
				case 991513037:
				case -1634791241:
					if (func_475(31768, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 991513037);
					break;
				
				case -675149090:
				case -1227437948:
					if (func_475(31769, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -675149090);
					break;
				
				case -1686814509:
				case -1408179706:
					if (func_475(31770, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -1686814509);
					break;
				
				case 2138708412:
				case -1894139601:
					if (func_475(31771, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 2138708412);
					break;
				
				case 205793848:
				case -786254870:
					if (func_475(31772, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 205793848);
					break;
				
				case 1325175663:
				case -773154515:
					if (func_475(31773, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 1325175663);
					break;
				
				case -368088972:
				case 1778247767:
					if (func_475(31774, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -368088972);
					break;
				
				case -1771053026:
				case -648092145:
					if (func_475(31775, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -1771053026);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -1368357453:
			switch (iParam1)
			{
				case 156407004:
				case 992344178:
					if (func_475(30533, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 156407004);
					break;
				
				case 850137272:
				case 530639494:
					if (func_475(30534, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 850137272);
					break;
				
				case -907859154:
				case 1472939772:
					if (func_475(30535, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -907859154);
					break;
				
				case -475744483:
				case 1057844725:
					if (func_475(30536, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -475744483);
					break;
				
				case -47667242:
				case 1810957693:
					if (func_475(30537, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -47667242);
					break;
				
				case -409012879:
				case 1261157513:
					if (func_475(30538, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -409012879);
					break;
				
				case 1327735228:
				case 1864065459:
					if (func_475(30539, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 1327735228);
					break;
				
				case -187858220:
				case -1644702422:
					if (func_475(30540, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -187858220);
					break;
				
				case 1452108911:
				case -1603076035:
					if (func_475(30541, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 1452108911);
					break;
				
				case -1932584643:
				case -310682988:
					if (func_475(30542, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -1932584643);
					break;
				
				case -252057754:
				case 2103214089:
					if (func_475(30543, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -252057754);
					break;
				
				case 116007471:
				case 2133791411:
					if (func_475(30544, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 116007471);
					break;
				
				case -463212372:
				case 70168645:
					if (func_475(30545, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -463212372);
					break;
				
				case -1171053658:
				case -669229192:
					if (func_475(30546, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -1171053658);
					break;
				
				case -990049180:
				case 620186715:
					if (func_475(30547, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -990049180);
					break;
				
				case -1617127026:
				case 519116877:
					if (func_475(30548, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -1617127026);
					break;
				
				case 1770910373:
				case -1586273681:
					if (func_475(30549, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 1770910373);
					break;
				
				case -2143701887:
				case -72045715:
					if (func_475(30550, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -2143701887);
					break;
				
				case 1999836107:
				case 1105733954:
					if (func_475(30551, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 1999836107);
					break;
				
				case 417383307:
				case -1733868774:
					if (func_475(30552, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 417383307);
					break;
				
				case -2136840722:
				case 75001248:
					if (func_475(30553, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -2136840722);
					break;
				
				case -83336071:
				case -351320953:
					if (func_475(30554, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -83336071);
					break;
				
				case -1391222343:
				case -1824952815:
					if (func_475(30555, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -1391222343);
					break;
				
				case -1715443581:
				case -548539487:
					if (func_475(30556, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -1715443581);
					break;
				
				case 1673024230:
				case -925164242:
					if (func_475(30557, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 1673024230);
					break;
				
				case -1832442562:
				case 887187828:
					if (func_475(30524, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -1832442562);
					break;
				
				case 2086548996:
				case 249518856:
					if (func_475(30525, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 2086548996);
					break;
				
				case 1006203940:
				case -1491875241:
					if (func_475(30526, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 1006203940);
					break;
				
				case -1032809603:
				case 1114248050:
					if (func_475(30527, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -1032809603);
					break;
				
				case 1054867669:
				case 335686386:
					if (func_475(30528, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 1054867669);
					break;
				
				case -1911088924:
				case -773349244:
					if (func_475(30529, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -1911088924);
					break;
				
				case 983574619:
				case -1153521254:
					if (func_475(30530, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 983574619);
					break;
				
				case 2119361460:
				case 449125530:
					if (func_475(30531, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 2119361460);
					break;
				
				case 596636884:
				case -1089524784:
					if (func_475(30532, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 596636884);
					break;
				
				case 1510632880:
				case -594316604:
					if (func_475(30570, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 1510632880);
					break;
				
				case 1912778271:
				case 1362488454:
					if (func_475(30571, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 1912778271);
					break;
				
				case 686668863:
				case -304462319:
					if (func_475(30568, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 686668863);
					break;
				
				case 235066951:
				case 1884986113:
					if (func_475(30569, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 235066951);
					break;
				
				case -389741205:
				case -13127060:
					if (func_475(30634, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -389741205);
					break;
				
				case -141257402:
				case -1825878923:
					if (func_475(30635, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -141257402);
					break;
				
				case -1976007910:
				case -389955533:
					if (func_475(30636, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -1976007910);
					break;
				
				case -371038609:
				case -485599033:
					if (func_475(30637, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -371038609);
					break;
				
				case 153754618:
				case -308681510:
					if (func_475(30703, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 153754618);
					break;
				
				case 659374865:
				case -2032106950:
					if (func_475(30704, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 659374865);
					break;
				
				case -13136248:
				case 921664999:
					if (func_475(30700, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -13136248);
					break;
				
				case -1132960710:
				case 1700345329:
					if (func_475(30701, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -1132960710);
					break;
				
				case 1993003331:
				case -46539229:
					if (func_475(30702, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 1993003331);
					break;
				
				case -625419875:
				case 552527284:
					if (func_475(30699, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -625419875);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -368118722:
			switch (iParam1)
			{
				case -1265443416:
				case 676807987:
					if (func_475(30260, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -1265443416);
					break;
				
				case 1888753218:
				case 272160153:
					if (func_475(30261, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 1888753218);
					break;
				
				case -552467991:
				case 1593344440:
					if (func_475(30262, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -552467991);
					break;
				
				case -1655919948:
				case 546222390:
					if (func_475(30263, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -1655919948);
					break;
				
				case -917106601:
				case 1983375900:
					if (func_475(30264, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -917106601);
					break;
				
				case 1595446967:
				case -620589387:
					if (func_475(30265, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 1595446967);
					break;
				
				case -530593323:
				case 383923929:
					if (func_475(30266, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -530593323);
					break;
				
				case 561619447:
				case -1703406594:
					if (func_475(30267, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 561619447);
					break;
				
				case -1913656173:
				case -398286533:
					if (func_475(30268, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -1913656173);
					break;
				
				case -1766901922:
				case -80478106:
					if (func_475(30269, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -1766901922);
					break;
				
				case 2091781849:
				case 1835331655:
					if (func_475(30270, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 2091781849);
					break;
				
				case 1824588341:
				case -1650596870:
					if (func_475(30271, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 1824588341);
					break;
				
				case 242597641:
				case 1231926496:
					if (func_475(30272, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 242597641);
					break;
				
				case 566785691:
				case -1506181253:
					if (func_475(30273, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 566785691);
					break;
				
				case -2091312957:
				case -1737145605:
					if (func_475(30274, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -2091312957);
					break;
				
				case -2079214831:
				case 1673851512:
					if (func_475(30275, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -2079214831);
					break;
				
				case 1359156274:
				case 1023339598:
					if (func_475(30276, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 1359156274);
					break;
				
				case 1904247246:
				case -163738770:
					if (func_475(30277, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 1904247246);
					break;
				
				case -1351518396:
				case 1863218823:
					if (func_475(30278, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -1351518396);
					break;
				
				case -797874817:
				case 333966447:
					if (func_475(30279, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -797874817);
					break;
				
				case -385507297:
				case 1412626052:
					if (func_475(30280, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -385507297);
					break;
				
				case 2011910758:
				case -39100956:
					if (func_475(30281, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 2011910758);
					break;
				
				case -1953985443:
				case 1631533003:
					if (func_475(30282, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -1953985443);
					break;
				
				case -1124222352:
				case 1493430918:
					if (func_475(30283, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -1124222352);
					break;
				
				case -1806994767:
				case -196693334:
					if (func_475(30284, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -1806994767);
					break;
				
				case -1445761968:
				case 553507495:
					if (func_475(30285, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -1445761968);
					break;
				
				case -89186417:
				case 2003474700:
					if (func_475(30286, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -89186417);
					break;
				
				case -308083083:
				case 1121792228:
					if (func_475(30287, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -308083083);
					break;
				
				case 667714507:
				case -1424651669:
					if (func_475(30288, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 667714507);
					break;
				
				case -1610210252:
				case -1454164346:
					if (func_475(30289, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -1610210252);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -368118722:
			switch (iParam1)
			{
				case -417116499:
				case -779574408:
					if (func_475(28255, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -417116499);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -368118722:
			switch (iParam1)
			{
				case 1246110729:
				case -1361908447:
					if (func_161(89, -1) || func_475(30254, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 1246110729);
					break;
				
				case 461575135:
				case 1250161120:
					if (func_161(90, -1) || func_475(30255, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == 461575135);
					break;
				
				case -386163163:
				case 1288201657:
					if (func_161(92, -1) || func_475(30256, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -386163163);
					break;
				
				case -1414541879:
				case 111412152:
					if ((((func_161(89, -1) && func_161(90, -1)) && func_161(92, -1)) && func_161(91, -1)) || func_475(30257, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == -1414541879);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_001_F"):
				case joaat("mpHeist3_Tee_001_M"):
					if (func_161(78, -1) || func_475(28199, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_001_M"));
					break;
				
				case joaat("mpHeist3_Tee_000_F"):
				case joaat("mpHeist3_Tee_000_M"):
					if (((func_161(77, -1) && func_161(78, -1)) && func_479(92, -1) >= func_478(92, 5, 9)) || func_475(28200, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_000_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_007_F"):
				case joaat("mpHeist3_Tee_008_F"):
				case joaat("mpHeist3_Tee_009_F"):
				case joaat("mpHeist3_Tee_007_M"):
				case joaat("mpHeist3_Tee_008_M"):
				case joaat("mpHeist3_Tee_009_M"):
					if (((func_479(93, -1) >= func_478(93, 5, 9) && func_161(79, -1)) && func_161(80, -1)) || func_475(28204, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, ((iParam1 == joaat("mpHeist3_Tee_007_M") || iParam1 == joaat("mpHeist3_Tee_008_M")) || iParam1 == joaat("mpHeist3_Tee_009_M")));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_004_F"):
				case joaat("mpHeist3_Tee_004_M"):
					if (func_161(81, -1) || func_475(28206, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_004_M"));
					break;
				
				case joaat("mpHeist3_Tee_005_F"):
				case joaat("mpHeist3_Tee_005_M"):
					if (func_479(94, -1) >= func_478(94, 5, 9) || func_475(28207, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_005_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_006_F"):
				case joaat("mpHeist3_Tee_006_M"):
					if (((func_161(84, -1) && func_161(85, -1)) && func_479(97, -1) >= func_478(97, 5, 9)) || func_475(28212, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_006_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_002_F"):
				case joaat("mpHeist3_Tee_002_M"):
					if (func_475(28249, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_002_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_013_F"):
				case joaat("mpHeist3_Tee_013_M"):
					if (func_475(28183, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_013_M"));
					break;
				
				case joaat("mpHeist3_Tee_014_F"):
				case joaat("mpHeist3_Tee_014_M"):
					if (func_475(28182, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_014_M"));
					break;
				
				case joaat("mpHeist3_Tee_015_F"):
				case joaat("mpHeist3_Tee_015_M"):
					if (func_475(28184, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_015_M"));
					break;
				
				case joaat("mpHeist3_Tee_016_F"):
				case joaat("mpHeist3_Tee_016_M"):
					if (func_475(28181, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_016_M"));
					break;
				
				case joaat("mpHeist3_Tee_017_F"):
				case joaat("mpHeist3_Tee_017_M"):
					if (func_475(28178, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_017_M"));
					break;
				
				case joaat("mpHeist3_Tee_018_F"):
				case joaat("mpHeist3_Tee_018_M"):
					if (func_475(28177, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_018_M"));
					break;
				
				case joaat("mpHeist3_Tee_019_F"):
				case joaat("mpHeist3_Tee_019_M"):
					if (func_475(28176, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_019_M"));
					break;
				
				case joaat("mpHeist3_Tee_020_F"):
				case joaat("mpHeist3_Tee_020_M"):
					if (func_475(28180, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_020_M"));
					break;
				
				case joaat("mpHeist3_Tee_021_F"):
				case joaat("mpHeist3_Tee_021_M"):
					if (func_475(28179, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_021_M"));
					break;
				
				case joaat("mpHeist3_Tee_022_F"):
				case joaat("mpHeist3_Tee_022_M"):
					if (((((((((func_475(28176, -1, -1) && func_475(28177, -1, -1)) && func_475(28178, -1, -1)) && func_475(28179, -1, -1)) && func_475(28180, -1, -1)) && func_475(28181, -1, -1)) && func_475(28182, -1, -1)) && func_475(28183, -1, -1)) && func_475(28184, -1, -1)) || func_475(28221, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_022_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_023_F"):
				case joaat("mpHeist3_Tee_023_M"):
					if (func_475(28191, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_023_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_011_F"):
				case joaat("mpHeist3_Tee_011_M"):
					if (func_475(28190, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_011_M"));
					break;
				
				case joaat("mpHeist3_Tee_012_F"):
				case joaat("mpHeist3_Tee_012_M"):
					if (func_475(28189, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_012_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_003_F"):
				case joaat("mpHeist3_Tee_003_M"):
					if (func_468(0, 1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_003_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_010_F"):
				case joaat("mpHeist3_Tee_010_M"):
					if ((((((((((((((((((func_161(77, -1) && func_161(78, -1)) && func_479(92, -1) >= func_478(92, 5, 9)) && func_479(93, -1) >= func_478(93, 5, 9)) && func_161(79, -1)) && func_161(80, -1)) && func_161(81, -1)) && func_479(94, -1) >= func_478(94, 5, 9)) && func_479(95, -1) >= func_478(95, 5, 9)) && func_161(82, -1)) && func_161(83, -1)) && func_479(96, -1) >= func_478(96, 5, 9)) && func_161(84, -1)) && func_161(85, -1)) && func_479(97, -1) >= func_478(97, 5, 9)) && func_161(86, -1)) && func_161(87, -1)) && func_161(88, -1)) || func_475(28222, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_010_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpVinewood_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Vinewood_Tat_023_M"):
				case joaat("MP_Vinewood_Tat_023_F"):
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Vinewood_Tat_023_M"));
					break;
				
				case joaat("MP_Vinewood_Tat_030_M"):
				case joaat("MP_Vinewood_Tat_030_F"):
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Vinewood_Tat_030_M"));
					break;
				
				case joaat("CasinoTop_M_21"):
				case joaat("CasinoTop_F_21"):
					if (func_475(27109, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_21"));
					break;
				
				case joaat("CasinoTop_M_23"):
				case joaat("CasinoTop_F_23"):
					if (func_475(27110, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_23"));
					break;
				
				case joaat("CasinoTop_M_2"):
				case joaat("CasinoTop_F_2"):
					if (func_475(27111, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_2"));
					break;
				
				case joaat("CasinoTop_M_4"):
				case joaat("CasinoTop_F_4"):
					if (func_475(27112, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_4"));
					break;
				
				case joaat("CasinoTop_M_6"):
				case joaat("CasinoTop_F_6"):
					if (func_475(27113, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_6"));
					break;
				
				case joaat("CasinoTop_M_10"):
				case joaat("CasinoTop_F_10"):
					if (func_475(27114, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_10"));
					break;
				
				case joaat("CasinoTop_M_22"):
				case joaat("CasinoTop_F_22"):
					if (func_475(27115, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_22"));
					break;
			}
			break;
		
		case joaat("mpChristmas2018_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Christmas2018_Tee_000_M"):
				case joaat("MP_Christmas2018_Tee_000_F"):
					if (func_475(25032, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_000_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_001_M"):
				case joaat("MP_Christmas2018_Tee_001_F"):
					if (func_475(25033, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_001_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_002_M"):
				case joaat("MP_Christmas2018_Tee_002_F"):
					if (func_475(25034, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_002_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_003_M"):
				case joaat("MP_Christmas2018_Tee_003_F"):
					if (func_475(25035, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_003_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_004_M"):
				case joaat("MP_Christmas2018_Tee_004_F"):
					if (func_475(25036, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_004_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_005_M"):
				case joaat("MP_Christmas2018_Tee_005_F"):
					if (func_475(25037, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_005_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_006_M"):
				case joaat("MP_Christmas2018_Tee_006_F"):
					if (func_475(25038, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_006_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_007_M"):
				case joaat("MP_Christmas2018_Tee_007_F"):
					if (func_475(25039, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_007_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_008_M"):
				case joaat("MP_Christmas2018_Tee_008_F"):
					if (func_475(25040, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_008_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_009_M"):
				case joaat("MP_Christmas2018_Tee_009_F"):
					if (func_475(25041, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_009_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_010_M"):
				case joaat("MP_Christmas2018_Tee_010_F"):
					if (func_475(25042, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_010_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_011_M"):
				case joaat("MP_Christmas2018_Tee_011_F"):
					if (func_475(25043, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_011_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_012_M"):
				case joaat("MP_Christmas2018_Tee_012_F"):
					if (func_475(25044, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_012_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_013_M"):
				case joaat("MP_Christmas2018_Tee_013_F"):
					if (func_475(25045, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_013_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_014_M"):
				case joaat("MP_Christmas2018_Tee_014_F"):
					if (func_475(25046, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_014_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_015_M"):
				case joaat("MP_Christmas2018_Tee_015_F"):
					if (func_475(25047, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_015_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_016_M"):
				case joaat("MP_Christmas2018_Tee_016_F"):
					if (func_475(25048, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_016_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_017_M"):
				case joaat("MP_Christmas2018_Tee_017_F"):
					if (func_475(25049, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_017_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_018_M"):
				case joaat("MP_Christmas2018_Tee_018_F"):
					if (func_475(25050, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_018_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_019_M"):
				case joaat("MP_Christmas2018_Tee_019_F"):
					if (func_475(25051, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_019_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_020_M"):
				case joaat("MP_Christmas2018_Tee_020_F"):
					if (func_475(25052, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_020_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_021_M"):
				case joaat("MP_Christmas2018_Tee_021_F"):
					if (func_475(25053, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_021_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_022_M"):
				case joaat("MP_Christmas2018_Tee_022_F"):
					if (func_475(25054, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_022_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_023_M"):
				case joaat("MP_Christmas2018_Tee_023_F"):
					if (func_475(25055, -1, -1))
					{
						return 0;
					}
					if (func_475(27077, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_023_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_024_M"):
				case joaat("MP_Christmas2018_Tee_024_F"):
					if (func_475(25056, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_024_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_025_M"):
				case joaat("MP_Christmas2018_Tee_025_F"):
					if (func_475(25057, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_025_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_026_M"):
				case joaat("MP_Christmas2018_Tee_026_F"):
					if (func_475(25058, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_026_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_027_M"):
				case joaat("MP_Christmas2018_Tee_027_F"):
					if (func_475(25059, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_027_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_028_M"):
				case joaat("MP_Christmas2018_Tee_028_F"):
					if (func_475(25060, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_028_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_029_M"):
				case joaat("MP_Christmas2018_Tee_029_F"):
					if (func_475(25061, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_029_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_030_M"):
				case joaat("MP_Christmas2018_Tee_030_F"):
					if (func_475(25062, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_030_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_031_M"):
				case joaat("MP_Christmas2018_Tee_031_F"):
					if (func_475(25063, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_031_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_032_M"):
				case joaat("MP_Christmas2018_Tee_032_F"):
					if (func_475(25064, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_032_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_033_M"):
				case joaat("MP_Christmas2018_Tee_033_F"):
					if (func_475(25065, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_033_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_034_M"):
				case joaat("MP_Christmas2018_Tee_034_F"):
					if (func_475(25066, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_034_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_035_M"):
				case joaat("MP_Christmas2018_Tee_035_F"):
					if (func_475(25067, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_035_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_036_M"):
				case joaat("MP_Christmas2018_Tee_036_F"):
					if (func_475(25068, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_036_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_037_M"):
				case joaat("MP_Christmas2018_Tee_037_F"):
					if (func_475(25069, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_037_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_038_M"):
				case joaat("MP_Christmas2018_Tee_038_F"):
					if (func_475(25070, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_038_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_039_M"):
				case joaat("MP_Christmas2018_Tee_039_F"):
					if (func_475(25071, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_039_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_040_M"):
				case joaat("MP_Christmas2018_Tee_040_F"):
					if (func_475(25072, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_040_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_041_M"):
				case joaat("MP_Christmas2018_Tee_041_F"):
					if (func_475(25073, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_041_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_042_M"):
				case joaat("MP_Christmas2018_Tee_042_F"):
					if (func_475(25074, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_042_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_043_M"):
				case joaat("MP_Christmas2018_Tee_043_F"):
					if (func_475(25075, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_043_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_044_M"):
				case joaat("MP_Christmas2018_Tee_044_F"):
					if (func_475(25076, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_044_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_045_M"):
				case joaat("MP_Christmas2018_Tee_045_F"):
					if (func_475(25077, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_045_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_046_M"):
				case joaat("MP_Christmas2018_Tee_046_F"):
					if (func_475(25078, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_046_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_047_M"):
				case joaat("MP_Christmas2018_Tee_047_F"):
					if (func_475(25079, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_047_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_048_M"):
				case joaat("MP_Christmas2018_Tee_048_F"):
					if (func_475(25080, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_048_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_049_M"):
				case joaat("MP_Christmas2018_Tee_049_F"):
					if (func_475(25081, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_049_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_050_M"):
				case joaat("MP_Christmas2018_Tee_050_F"):
					if (func_475(25082, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_050_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_051_M"):
				case joaat("MP_Christmas2018_Tee_051_F"):
					if (func_475(25083, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_051_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_052_M"):
				case joaat("MP_Christmas2018_Tee_052_F"):
					if (func_475(25084, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_052_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_053_M"):
				case joaat("MP_Christmas2018_Tee_053_F"):
					if (func_475(25085, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_053_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_054_M"):
				case joaat("MP_Christmas2018_Tee_054_F"):
					if (func_475(25086, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_054_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_055_M"):
				case joaat("MP_Christmas2018_Tee_055_F"):
					if (func_475(25087, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_055_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_056_M"):
				case joaat("MP_Christmas2018_Tee_056_F"):
					if (func_475(25088, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_056_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_057_M"):
				case joaat("MP_Christmas2018_Tee_057_F"):
					if (func_475(25089, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_057_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_058_M"):
				case joaat("MP_Christmas2018_Tee_058_F"):
					if (func_475(25090, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_058_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_059_M"):
				case joaat("MP_Christmas2018_Tee_059_F"):
					if (func_475(25091, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_059_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_060_M"):
				case joaat("MP_Christmas2018_Tee_060_F"):
					if (func_475(25092, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_060_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_061_M"):
				case joaat("MP_Christmas2018_Tee_061_F"):
					if (func_475(25093, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_061_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_062_M"):
				case joaat("MP_Christmas2018_Tee_062_F"):
					if (func_475(25094, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_062_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_063_M"):
				case joaat("MP_Christmas2018_Tee_063_F"):
					if (func_475(25095, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_063_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_064_M"):
				case joaat("MP_Christmas2018_Tee_064_F"):
					if (func_475(25096, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_064_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_065_M"):
				case joaat("MP_Christmas2018_Tee_065_F"):
					if (func_475(25097, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_065_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_066_M"):
				case joaat("MP_Christmas2018_Tee_066_F"):
					if (func_475(25098, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_066_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_067_M"):
				case joaat("MP_Christmas2018_Tee_067_F"):
					if (func_475(25099, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_067_M"));
					break;
				
				case joaat("MP_Christmas2018_Tat_000_M"):
				case joaat("MP_Christmas2018_Tat_000_F"):
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tat_000_M"));
					break;
			}
			break;
		
		case joaat("mpBattle_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Battle_Clothing_000_M"):
				case joaat("MP_Battle_Clothing_000_F"):
					if (func_475(22108, -1, -1) || func_475(25006, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_000_M"));
					break;
				
				case joaat("MP_Battle_Clothing_002_M"):
				case joaat("MP_Battle_Clothing_002_F"):
					if (func_475(9481, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_002_M"));
					break;
				
				case joaat("MP_Battle_Clothing_003_M"):
				case joaat("MP_Battle_Clothing_003_F"):
					if (func_475(9470, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_003_M"));
					break;
				
				case joaat("MP_Battle_Clothing_004_M"):
				case joaat("MP_Battle_Clothing_004_F"):
					if (func_475(9475, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_004_M"));
					break;
				
				case joaat("MP_Battle_Clothing_005_M"):
				case joaat("MP_Battle_Clothing_005_F"):
					if (func_475(9472, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_005_M"));
					break;
				
				case joaat("MP_Battle_Clothing_006_M"):
				case joaat("MP_Battle_Clothing_006_F"):
					if (func_475(9465, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_006_M"));
					break;
				
				case joaat("MP_Battle_Clothing_007_M"):
				case joaat("MP_Battle_Clothing_007_F"):
					if (func_475(9463, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_007_M"));
					break;
				
				case joaat("MP_Battle_Clothing_008_M"):
				case joaat("MP_Battle_Clothing_008_F"):
					if (func_475(9464, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_008_M"));
					break;
				
				case joaat("MP_Battle_Clothing_009_M"):
				case joaat("MP_Battle_Clothing_009_F"):
					if (func_475(9468, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_009_M"));
					break;
				
				case joaat("MP_Battle_Clothing_010_M"):
				case joaat("MP_Battle_Clothing_010_F"):
					if (func_475(9469, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_010_M"));
					break;
				
				case joaat("MP_Battle_Clothing_011_M"):
				case joaat("MP_Battle_Clothing_011_F"):
					if (func_475(9479, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_011_M"));
					break;
				
				case joaat("MP_Battle_Clothing_012_M"):
				case joaat("MP_Battle_Clothing_012_F"):
					if (func_475(9473, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_012_M"));
					break;
				
				case joaat("MP_Battle_Clothing_013_M"):
				case joaat("MP_Battle_Clothing_013_F"):
					if (func_475(9480, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_013_M"));
					break;
				
				case joaat("MP_Battle_Clothing_014_M"):
				case joaat("MP_Battle_Clothing_014_F"):
					if (func_475(9476, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_014_M"));
					break;
				
				case joaat("MP_Battle_Clothing_015_M"):
				case joaat("MP_Battle_Clothing_015_F"):
					if (func_475(9477, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_015_M"));
					break;
				
				case joaat("MP_Battle_Clothing_016_M"):
				case joaat("MP_Battle_Clothing_016_F"):
					if (func_475(9471, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_016_M"));
					break;
				
				case joaat("MP_Battle_Clothing_017_M"):
				case joaat("MP_Battle_Clothing_017_F"):
					if (func_475(9474, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_017_M"));
					break;
				
				case joaat("MP_Battle_Clothing_018_M"):
				case joaat("MP_Battle_Clothing_018_F"):
					if (func_475(9467, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_018_M"));
					break;
				
				case joaat("MP_Battle_Clothing_019_M"):
				case joaat("MP_Battle_Clothing_019_F"):
					if (func_475(9478, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_019_M"));
					break;
				
				case joaat("MP_Battle_Clothing_020_M"):
				case joaat("MP_Battle_Clothing_020_F"):
					if (func_475(9462, -1, -1))
					{
						return 0;
					}
					if (iParam1 == joaat("MP_Battle_Clothing_020_M"))
					{
						if (func_475(27085, -1, -1))
						{
							return 0;
						}
					}
					else if (func_475(27084, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_020_M"));
					break;
				
				case joaat("MP_Battle_Clothing_021_M"):
				case joaat("MP_Battle_Clothing_021_F"):
					if (func_475(9466, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_021_M"));
					break;
				
				case joaat("MP_Battle_Clothing_022_M"):
				case joaat("MP_Battle_Clothing_022_F"):
					if (func_475(22126, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_022_M"));
					break;
				
				case joaat("MP_Battle_Clothing_023_M"):
				case joaat("MP_Battle_Clothing_023_F"):
					if (func_475(22127, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_023_M"));
					break;
				
				case joaat("MP_Battle_Clothing_024_M"):
				case joaat("MP_Battle_Clothing_024_F"):
					if (func_475(22128, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_024_M"));
					break;
				
				case joaat("MP_Battle_Clothing_025_M"):
				case joaat("MP_Battle_Clothing_025_F"):
					if (func_475(22124, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_025_M"));
					break;
				
				case joaat("MP_Battle_Clothing_026_M"):
				case joaat("MP_Battle_Clothing_026_F"):
					if (func_475(22130, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_026_M"));
					break;
				
				case joaat("MP_Battle_Clothing_027_M"):
				case joaat("MP_Battle_Clothing_027_F"):
					if (func_475(22125, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_027_M"));
					break;
				
				case joaat("MP_Battle_Clothing_028_M"):
				case joaat("MP_Battle_Clothing_028_F"):
					if (func_475(22129, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_028_M"));
					break;
				
				case joaat("MP_Battle_Clothing_029_M"):
				case joaat("MP_Battle_Clothing_029_F"):
					if (func_475(22131, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_029_M"));
					break;
				
				case joaat("MP_Battle_Clothing_030_M"):
				case joaat("MP_Battle_Clothing_030_F"):
					if (func_475(22132, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_030_M"));
					break;
			}
			switch (iParam1)
			{
				case joaat("MP_Battle_Clothing_031_M"):
				case joaat("MP_Battle_Clothing_031_F"):
					if (func_475(22147, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_031_M"));
					break;
				
				case joaat("MP_Battle_Clothing_032_M"):
				case joaat("MP_Battle_Clothing_032_F"):
					if (func_475(22148, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_032_M"));
					break;
				
				case joaat("MP_Battle_Clothing_033_M"):
				case joaat("MP_Battle_Clothing_033_F"):
					if (func_475(22149, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_033_M"));
					break;
				
				case joaat("MP_Battle_Clothing_034_M"):
				case joaat("MP_Battle_Clothing_034_F"):
					if (func_475(22150, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_034_M"));
					break;
				
				case joaat("MP_Battle_Clothing_035_M"):
				case joaat("MP_Battle_Clothing_035_F"):
					if (func_475(22151, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_035_M"));
					break;
				
				case joaat("MP_Battle_Clothing_036_M"):
				case joaat("MP_Battle_Clothing_036_F"):
					if (func_475(22152, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_036_M"));
					break;
				
				case joaat("MP_Battle_Clothing_037_M"):
				case joaat("MP_Battle_Clothing_037_F"):
					if (func_475(22153, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_037_M"));
					break;
				
				case joaat("MP_Battle_Clothing_038_M"):
				case joaat("MP_Battle_Clothing_038_F"):
					if (func_475(22154, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_038_M"));
					break;
				
				case joaat("MP_Battle_Clothing_039_M"):
				case joaat("MP_Battle_Clothing_039_F"):
					if (func_475(22155, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_039_M"));
					break;
				
				case joaat("MP_Battle_Clothing_040_M"):
				case joaat("MP_Battle_Clothing_040_F"):
					if (func_475(22156, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_040_M"));
					break;
				
				case joaat("MP_Battle_Clothing_041_M"):
				case joaat("MP_Battle_Clothing_041_F"):
					if (func_475(22157, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_041_M"));
					break;
				
				case joaat("MP_Battle_Clothing_042_M"):
				case joaat("MP_Battle_Clothing_042_F"):
					if (func_475(22158, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_042_M"));
					break;
				
				case joaat("MP_Battle_Clothing_043_M"):
				case joaat("MP_Battle_Clothing_043_F"):
					if (func_475(22159, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_043_M"));
					break;
				
				case joaat("MP_Battle_Clothing_044_M"):
				case joaat("MP_Battle_Clothing_044_F"):
					if (func_475(22160, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_044_M"));
					break;
				
				case joaat("MP_Battle_Clothing_045_M"):
				case joaat("MP_Battle_Clothing_045_F"):
					if (func_475(22161, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_045_M"));
					break;
				
				case joaat("MP_Battle_Clothing_046_M"):
				case joaat("MP_Battle_Clothing_046_F"):
					if (func_475(22162, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_046_M"));
					break;
				
				case joaat("MP_Battle_Clothing_047_M"):
				case joaat("MP_Battle_Clothing_047_F"):
					if (func_475(22163, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_047_M"));
					break;
				
				case joaat("MP_Battle_Clothing_048_M"):
				case joaat("MP_Battle_Clothing_048_F"):
					if (func_475(22164, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_048_M"));
					break;
				
				case joaat("MP_Battle_Clothing_049_M"):
				case joaat("MP_Battle_Clothing_049_F"):
					if (func_475(22165, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_049_M"));
					break;
				
				case joaat("MP_Battle_Clothing_050_M"):
				case joaat("MP_Battle_Clothing_050_F"):
					if (func_475(22166, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_050_M"));
					break;
				
				case joaat("MP_Battle_Clothing_051_M"):
				case joaat("MP_Battle_Clothing_051_F"):
					if (func_475(22167, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_051_M"));
					break;
				
				case joaat("MP_Battle_Clothing_052_M"):
				case joaat("MP_Battle_Clothing_052_F"):
					if (func_475(22168, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_052_M"));
					break;
				
				case joaat("MP_Battle_Clothing_053_M"):
				case joaat("MP_Battle_Clothing_053_F"):
					if (func_475(22169, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_053_M"));
					break;
				
				case joaat("MP_Battle_Clothing_054_M"):
				case joaat("MP_Battle_Clothing_054_F"):
					if (func_475(22170, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_054_M"));
					break;
				
				case joaat("MP_Battle_Clothing_055_M"):
				case joaat("MP_Battle_Clothing_055_F"):
					if (func_475(22171, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_055_M"));
					break;
				
				case joaat("MP_Battle_Clothing_056_M"):
				case joaat("MP_Battle_Clothing_056_F"):
					if (func_475(22172, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_056_M"));
					break;
				
				case joaat("MP_Battle_Clothing_057_M"):
				case joaat("MP_Battle_Clothing_057_F"):
					if (func_475(22173, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_057_M"));
					break;
				
				case joaat("MP_Battle_Clothing_058_M"):
				case joaat("MP_Battle_Clothing_058_F"):
					if (func_475(22174, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_058_M"));
					break;
				
				case joaat("MP_Battle_Clothing_059_M"):
				case joaat("MP_Battle_Clothing_059_F"):
					if (func_475(22175, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_059_M"));
					break;
				
				case joaat("MP_Battle_Clothing_060_M"):
				case joaat("MP_Battle_Clothing_060_F"):
					if (func_475(22176, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_060_M"));
					break;
				
				case joaat("MP_Battle_Clothing_061_M"):
				case joaat("MP_Battle_Clothing_061_F"):
					if (func_475(22177, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_061_M"));
					break;
				
				case joaat("MP_Battle_Clothing_062_M"):
				case joaat("MP_Battle_Clothing_062_F"):
					if (func_475(22178, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_062_M"));
					break;
			}
			break;
		
		case joaat("mpGunrunning_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Gunrunning_Award_019_M"):
				case joaat("MP_Gunrunning_Award_025_F"):
					if (func_475(15426, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_019_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_020_M"):
				case joaat("MP_Gunrunning_Award_020_F"):
					if (func_475(15422, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_020_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_020_M_ALT"):
				case joaat("MP_Gunrunning_Award_020_F_ALT"):
					if (func_475(15423, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_020_M_ALT"));
					break;
				
				case joaat("MP_Gunrunning_Award_021_M"):
				case joaat("MP_Gunrunning_Award_021_F"):
					if (func_475(15421, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_021_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_022_M"):
				case joaat("MP_Gunrunning_Award_026_F"):
					if (func_475(15427, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_022_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_023_M"):
				case joaat("MP_Gunrunning_Award_023_F"):
					if (func_475(15419, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_023_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_024_M"):
				case joaat("MP_Gunrunning_Award_024_F"):
					if (func_475(15420, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_024_M"));
					break;
			}
			switch (iParam1)
			{
				case joaat("MP_Gunrunning_Award_000_M"):
				case joaat("MP_Gunrunning_Award_000_F"):
					if (func_475(15394, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_000_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_001_M"):
				case joaat("MP_Gunrunning_Award_001_F"):
					if (func_428(209, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_001_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_002_M"):
				case joaat("MP_Gunrunning_Award_002_F"):
					if (func_475(15406, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_002_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_003_M"):
				case joaat("MP_Gunrunning_Award_003_F"):
					if (func_475(15395, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_003_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_004_M"):
				case joaat("MP_Gunrunning_Award_004_F"):
					if (func_428(209, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_004_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_005_M"):
				case joaat("MP_Gunrunning_Award_005_F"):
					if (func_475(15410, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_005_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_006_M"):
				case joaat("MP_Gunrunning_Award_006_F"):
					if (func_475(15407, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_006_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_007_M"):
				case joaat("MP_Gunrunning_Award_007_F"):
					if (func_428(209, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_007_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_008_M"):
				case joaat("MP_Gunrunning_Award_008_F"):
					if (func_428(209, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_008_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_009_M"):
				case joaat("MP_Gunrunning_Award_009_F"):
					if (func_475(15414, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_009_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_010_M"):
				case joaat("MP_Gunrunning_Award_010_F"):
					if (func_475(15415, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_010_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_011_M"):
				case joaat("MP_Gunrunning_Award_011_F"):
					if (func_475(15399, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_011_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_012_M"):
				case joaat("MP_Gunrunning_Award_012_F"):
					if (func_475(15404, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_012_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_013_M"):
				case joaat("MP_Gunrunning_Award_013_F"):
					if (func_428(209, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_013_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_014_M"):
				case joaat("MP_Gunrunning_Award_014_F"):
					if (func_475(15392, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_014_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_015_M"):
				case joaat("MP_Gunrunning_Award_015_F"):
					if (func_475(15390, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_015_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_016_M"):
				case joaat("MP_Gunrunning_Award_016_F"):
					if (func_475(15402, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_016_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_017_M"):
				case joaat("MP_Gunrunning_Award_017_F"):
					if (func_475(15416, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_017_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_018_M"):
				case joaat("MP_Gunrunning_Award_018_F"):
					if (func_428(209, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_018_M"));
					break;
			}
			break;
		
		case joaat("mpBiker_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Biker_Tee_022_M"):
				case joaat("MP_Biker_Tee_022_F"):
					if (func_475(9366, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_022_M"));
					break;
				
				case joaat("MP_Biker_Tee_023_M"):
				case joaat("MP_Biker_Tee_023_F"):
					if (func_475(9367, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_023_M"));
					break;
				
				case joaat("MP_Biker_Tee_024_M"):
				case joaat("MP_Biker_Tee_024_F"):
					if (func_475(9369, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_024_M"));
					break;
				
				case joaat("MP_Biker_Tee_025_M"):
				case joaat("MP_Biker_Tee_025_F"):
					if (func_475(9368, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_025_M"));
					break;
				
				case joaat("MP_Biker_Tee_047_M"):
				case joaat("MP_Biker_Tee_047_F"):
					if (func_475(9365, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_047_M"));
					break;
				
				case joaat("MP_Biker_Tee_048_M"):
				case joaat("MP_Biker_Tee_048_F"):
					if (func_475(9364, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_048_M"));
					break;
				
				case joaat("MP_Biker_Tee_049_M"):
				case joaat("MP_Biker_Tee_049_F"):
					if (func_475(27078, -1, -1))
					{
						return 0;
					}
					if (func_475(9363, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_049_M"));
					break;
				
				case joaat("MP_Biker_Tee_050_M"):
				case joaat("MP_Biker_Tee_050_F"):
					if (func_475(9362, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_050_M"));
					break;
				
				case joaat("MP_Biker_Tee_051_M"):
				case joaat("MP_Biker_Tee_051_F"):
					if (func_475(9370, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_051_M"));
					break;
				
				case joaat("MP_Biker_Tee_052_M"):
				case joaat("MP_Biker_Tee_052_F"):
					if (func_475(9371, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_052_M"));
					break;
				
				case joaat("MP_Biker_Tee_053_M"):
				case joaat("MP_Biker_Tee_053_F"):
					if (func_475(9372, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_053_M"));
					break;
				
				case joaat("MP_Biker_Tee_054_M"):
				case joaat("MP_Biker_Tee_054_F"):
					if (func_475(9373, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_054_M"));
					break;
				
				case joaat("MP_Biker_Tee_055_M"):
				case joaat("MP_Biker_Tee_055_F"):
					if (func_475(9374, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_055_M"));
					break;
				
				case joaat("MP_Biker_Award_000_M"):
				case joaat("MP_Biker_Award_000_F"):
					if (func_475(9384, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Biker_Award_000_M"));
					break;
				
				case joaat("MP_Biker_Award_001_M"):
				case joaat("MP_Biker_Award_001_F"):
					if (func_475(9385, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_Biker_Award_001_M"));
					break;
			}
			break;
		
		case joaat("mpExecutive_overlays"):
			switch (iParam1)
			{
				case joaat("MP_exec_prizes_015_M"):
				case joaat("MP_exec_prizes_015_F"):
					if (func_475(7551, -1, -1) || func_133(3791, -1, 0) >= Global_262145.f_16487)
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_015_M"));
					break;
				
				case joaat("MP_exec_prizes_000_M"):
				case joaat("MP_exec_prizes_000_F"):
					if (func_475(7467, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_000_M"));
					break;
				
				case joaat("MP_exec_prizes_001_M"):
				case joaat("MP_exec_prizes_001_F"):
					if (func_475(7468, -1, -1))
					{
						return 0;
					}
					if (iParam1 == joaat("MP_exec_prizes_001_M"))
					{
						if (func_475(27083, -1, -1))
						{
							return 0;
						}
					}
					else if (func_475(27086, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_001_M"));
					break;
				
				case joaat("MP_exec_prizes_002_M"):
				case joaat("MP_exec_prizes_002_F"):
					if (func_475(7469, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_002_M"));
					break;
				
				case joaat("MP_exec_prizes_003_M"):
				case joaat("MP_exec_prizes_003_F"):
					if (func_475(7470, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_003_M"));
					break;
				
				case joaat("MP_exec_prizes_004_M"):
				case joaat("MP_exec_prizes_004_F"):
					if (func_475(7471, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_004_M"));
					break;
				
				case joaat("MP_exec_prizes_005_M"):
				case joaat("MP_exec_prizes_005_F"):
					if (func_475(7472, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_005_M"));
					break;
				
				case joaat("MP_exec_prizes_006_M"):
				case joaat("MP_exec_prizes_006_F"):
					if (func_475(7473, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_006_M"));
					break;
				
				case joaat("MP_exec_prizes_007_M"):
				case joaat("MP_exec_prizes_007_F"):
					if (func_475(7474, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_007_M"));
					break;
				
				case joaat("MP_exec_prizes_008_M"):
				case joaat("MP_exec_prizes_008_F"):
					if (func_475(7475, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_008_M"));
					break;
				
				case joaat("MP_exec_prizes_009_M"):
				case joaat("MP_exec_prizes_009_F"):
					if (func_475(7476, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_009_M"));
					break;
				
				case joaat("MP_exec_prizes_010_M"):
				case joaat("MP_exec_prizes_010_F"):
					if (func_475(7477, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_010_M"));
					break;
				
				case joaat("MP_exec_prizes_011_M"):
				case joaat("MP_exec_prizes_011_F"):
					if (func_475(7478, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_011_M"));
					break;
				
				case joaat("MP_exec_prizes_012_M"):
				case joaat("MP_exec_prizes_012_F"):
					if (func_475(7479, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_012_M"));
					break;
				
				case joaat("MP_exec_prizes_013_M"):
				case joaat("MP_exec_prizes_013_F"):
					if (func_475(7480, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_013_M"));
					break;
				
				case joaat("MP_exec_prizes_014_M"):
				case joaat("MP_exec_prizes_014_F"):
					if (func_475(7481, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_014_M"));
					break;
			}
			break;
		
		case joaat("mpHalloween_overlays"):
			switch (iParam1)
			{
				case joaat("HW_Tee_000_F"):
				case joaat("HW_Tee_000_M"):
					if (func_475(4260, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("HW_Tee_000_M"));
					break;
				
				case joaat("HW_Tee_001_F"):
				case joaat("HW_Tee_001_M"):
					if (func_475(4257, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("HW_Tee_001_M"));
					break;
				
				case joaat("HW_Tee_002_F"):
				case joaat("HW_Tee_002_M"):
					if (func_475(4269, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("HW_Tee_002_M"));
					break;
				
				case joaat("HW_Tee_003_F"):
				case joaat("HW_Tee_003_M"):
					if (func_475(4261, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("HW_Tee_003_M"));
					break;
				
				case joaat("HW_Tee_004_F"):
				case joaat("HW_Tee_004_M"):
					if (func_475(4259, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("HW_Tee_004_M"));
					break;
				
				case joaat("HW_Tee_005_F"):
				case joaat("HW_Tee_005_M"):
					if (func_475(4268, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("HW_Tee_005_M"));
					break;
				
				case joaat("HW_Tee_006_F"):
				case joaat("HW_Tee_006_M"):
					if (func_475(4265, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("HW_Tee_006_M"));
					break;
				
				case joaat("HW_Tee_007_F"):
				case joaat("HW_Tee_007_M"):
					if (func_475(4258, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("HW_Tee_007_M"));
					break;
				
				case joaat("HW_Tee_008_F"):
				case joaat("HW_Tee_008_M"):
					if (func_475(4264, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("HW_Tee_008_M"));
					break;
				
				case joaat("HW_Tee_009_F"):
				case joaat("HW_Tee_009_M"):
					if (func_475(4267, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("HW_Tee_009_M"));
					break;
				
				case joaat("HW_Tee_010_F"):
				case joaat("HW_Tee_010_M"):
					if (func_475(4262, -1, -1))
					{
						return 0;
					}
					if (func_475(27079, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("HW_Tee_010_M"));
					break;
				
				case joaat("HW_Tee_011_F"):
				case joaat("HW_Tee_011_M"):
					if (func_475(4263, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("HW_Tee_011_M"));
					break;
				
				case joaat("HW_Tee_012_F"):
				case joaat("HW_Tee_012_M"):
					if (func_475(4266, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("HW_Tee_012_M"));
					break;
			}
			break;
		
		case joaat("mpLowrider_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Bennys_000_M"):
				case joaat("MP_Bennys_001_M"):
					if (func_133(2933, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == joaat("MP_Bennys_001_M"))
					{
						if (func_475(27068, -1, -1))
						{
							return 0;
						}
					}
					return !func_471(iParam2, iParam1, 1);
					break;
				
				case joaat("MP_Bennys_000_F"):
				case joaat("MP_Bennys_001_F"):
					if (func_133(2933, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == joaat("MP_Bennys_001_F"))
					{
						if (func_475(27068, -1, -1))
						{
							return 0;
						}
					}
					return !func_471(iParam2, iParam1, 0);
					break;
			}
			break;
		
		case joaat("mpxmas_604490_overlays"):
			switch (iParam1)
			{
				case joaat("MP_IHeartLC_000_M"):
				case joaat("MP_IHeartLC_001_F"):
					if (func_475(113, -1, -1))
					{
						return 0;
					}
					return !func_471(iParam2, iParam1, iParam1 == joaat("MP_IHeartLC_000_M"));
					break;
			}
			break;
		
		case joaat("mpHeist_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Award_M_Tshirt_004"):
				case joaat("MP_Award_M_Tshirt_005"):
				case joaat("MP_Award_M_Tshirt_006"):
				case joaat("MP_Award_M_Tshirt_007"):
				case joaat("MP_Award_M_Tshirt_008"):
				case joaat("MP_Award_M_Tshirt_009"):
				case joaat("MP_Award_M_Tshirt_010"):
				case joaat("MP_Award_M_Tshirt_011"):
				case joaat("MP_Award_M_Tshirt_012"):
				case joaat("MP_Award_M_Tshirt_013"):
					if (iParam1 == joaat("MP_Award_M_Tshirt_004"))
					{
						if (func_475(27082, -1, -1))
						{
							return 0;
						}
						if (func_475(3770, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_005"))
					{
						if (func_475(3771, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_006"))
					{
						if (func_475(3772, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_007"))
					{
						if (func_475(3773, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_008"))
					{
						if (func_475(3774, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_009"))
					{
						if (func_475(3775, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_010"))
					{
						if (func_475(3776, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_011"))
					{
						if (func_475(3777, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_012"))
					{
						if (func_475(3778, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_013"))
					{
						if (func_475(3779, -1, -1) || func_475(27084, -1, -1))
						{
							return 0;
						}
					}
					return !func_471(iParam2, iParam1, 1);
					break;
				
				case joaat("MP_Award_F_Tshirt_004"):
				case joaat("MP_Award_F_Tshirt_005"):
				case joaat("MP_Award_F_Tshirt_006"):
				case joaat("MP_Award_F_Tshirt_007"):
				case joaat("MP_Award_F_Tshirt_008"):
				case joaat("MP_Award_F_Tshirt_009"):
				case joaat("MP_Award_F_Tshirt_010"):
				case joaat("MP_Award_F_Tshirt_011"):
				case joaat("MP_Award_F_Tshirt_012"):
				case joaat("MP_Award_F_Tshirt_013"):
					if (iParam1 == joaat("MP_Award_F_Tshirt_004"))
					{
						if (func_475(3770, -1, -1))
						{
							return 0;
						}
						if (func_475(27082, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_005"))
					{
						if (func_475(3771, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_006"))
					{
						if (func_475(3772, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_007"))
					{
						if (func_475(3773, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_008"))
					{
						if (func_475(3774, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_009"))
					{
						if (func_475(3775, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_010"))
					{
						if (func_475(3776, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_011"))
					{
						if (func_475(3777, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_012"))
					{
						if (func_475(3778, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_013"))
					{
						if (func_475(3779, -1, -1) || func_475(27083, -1, -1))
						{
							return 0;
						}
					}
					return !func_471(iParam2, iParam1, 0);
					break;
				
				case joaat("MP_Elite_M_Tshirt"):
				case joaat("MP_Elite_M_Tshirt_1"):
				case joaat("MP_Elite_F_Tshirt"):
				case joaat("MP_Elite_F_Tshirt_1"):
					if ((((func_475(3765, -1, -1) && func_475(3766, -1, -1)) && func_475(3767, -1, -1)) && func_475(3768, -1, -1)) && func_475(3769, -1, -1))
					{
						return 0;
					}
					return 1;
					break;
			}
			break;
		
		case joaat("mpIndependence_overlays"):
			switch (iParam1)
			{
				case joaat("FM_Ind_M_Award_000"):
				case joaat("FM_Ind_F_Award_000"):
					return !func_475(3593, -1, -1);
					break;
			}
			if (!Global_262145.f_7965 && !func_471(iParam2, iParam1, 0))
			{
				return 1;
			}
			break;
		
		case joaat("mpHipster_overlays"):
			switch (iParam1)
			{
				case 1443536758:
				case 1333229624:
				case -1665422117:
				case 1100930183:
				case -1595008258:
				case 94055115:
				case -627896761:
				case 1873477305:
					return 1;
					break;
				
				case 196632624:
				case -1644428107:
				case 1108198688:
				case 810099095:
					return 1;
					break;
				
				case 300677115:
				case 262692161:
				case -1684141219:
				case 390655118:
				case -479442624:
				case -542924311:
				case 1696910411:
				case -1259058037:
					return 1;
					break;
				
				case 1980445908:
				case -1882429354:
				case -1235341889:
				case -1544517404:
					return 1;
					break;
				
				case joaat("FM_Hip_M_Retro_010"):
				case joaat("FM_Hip_F_Retro_010"):
					return (!func_428(152, -1) && !func_475(9440, -1, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_003"):
				case joaat("FM_Hip_F_Retro_003"):
					return (!func_428(151, -1) && !func_475(9430, -1, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_000"):
				case joaat("FM_Hip_F_Retro_000"):
					return (!func_387(iParam2, -1) && !func_475(9426, -1, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_001"):
				case joaat("FM_Hip_F_Retro_001"):
					return (!func_387(iParam2, -1) && !func_475(9427, -1, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_002"):
				case joaat("FM_Hip_F_Retro_002"):
					return (!func_387(iParam2, -1) && !func_475(9428, -1, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_004"):
				case joaat("FM_Hip_F_Retro_004"):
					return (!func_387(iParam2, -1) && !func_475(9431, -1, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_005"):
				case joaat("FM_Hip_F_Retro_005"):
					return (!func_387(iParam2, -1) && !func_475(9432, -1, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_006"):
				case joaat("FM_Hip_F_Retro_006"):
					return (!func_387(iParam2, -1) && !func_475(9433, -1, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_007"):
				case joaat("FM_Hip_F_Retro_007"):
					return (!func_387(iParam2, -1) && !func_475(9439, -1, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_008"):
				case joaat("FM_Hip_F_Retro_008"):
					return (!func_387(iParam2, -1) && !func_475(9434, -1, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_009"):
				case joaat("FM_Hip_F_Retro_009"):
					return (!func_387(iParam2, -1) && !func_475(9435, -1, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_011"):
				case joaat("FM_Hip_F_Retro_011"):
					return (!func_387(iParam2, -1) && !func_475(9436, -1, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_012"):
				case joaat("FM_Hip_F_Retro_012"):
					return (!func_387(iParam2, -1) && !func_475(9429, -1, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_013"):
				case joaat("FM_Hip_F_Retro_013"):
					return (!func_387(iParam2, -1) && !func_475(9437, -1, -1));
					break;
				
				case joaat("FM_Rstar_M_Tshirt_000"):
				case joaat("FM_Rstar_M_Tshirt_001"):
				case joaat("FM_Rstar_M_Tshirt_002"):
				case joaat("FM_Rstar_F_Tshirt_000"):
				case joaat("FM_Rstar_F_Tshirt_001"):
				case joaat("FM_Rstar_F_Tshirt_002"):
					return !func_467();
					break;
			}
			break;
		
		case 1766910957:
			if ((!Global_262145.f_6770 && !func_387(iParam2, -1)) && !Global_262145.f_11737)
			{
				return 1;
			}
			break;
		
		case joaat("mpPilot_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Fli_M_Tshirt_000"):
				case joaat("MP_Fli_F_Tshirt_000"):
					return !func_475(3608, -1, -1);
					break;
			}
			break;
		
		case joaat("mpLTS_overlays"):
			switch (iParam1)
			{
				case joaat("FM_LTS_M_Tshirt_000"):
				case joaat("FM_LTS_F_Tshirt_000"):
					return (!func_475(3615, -1, -1) && !func_475(9438, -1, -1));
					break;
			}
			break;
		
		case joaat("mpLuxe_overlays"):
			if (iParam1 == joaat("MP_LUXE_VDG_006_F"))
			{
				return 1;
			}
			switch (iParam1)
			{
				case joaat("MP_FAKE_DIS_000_M"):
				case joaat("MP_FAKE_DIS_000_F"):
					return !func_475(3783, -1, -1);
					break;
				
				case joaat("MP_FAKE_DIS_001_M"):
				case joaat("MP_FAKE_DIS_001_F"):
					return !func_475(3784, -1, -1);
					break;
				
				case joaat("MP_FAKE_DS_000_M"):
				case joaat("MP_FAKE_DS_000_F"):
					return !func_475(3785, -1, -1);
					break;
				
				case joaat("MP_FAKE_ENEMA_000_M"):
				case joaat("MP_FAKE_ENEMA_000_F"):
					return !func_475(3786, -1, -1);
					break;
				
				case joaat("MP_FAKE_LB_000_M"):
				case joaat("MP_FAKE_LB_000_F"):
					return !func_475(3787, -1, -1);
					break;
				
				case joaat("MP_FAKE_LC_000_M"):
				case joaat("MP_FAKE_LC_000_F"):
					return !func_475(3788, -1, -1);
					break;
				
				case joaat("MP_FAKE_SC_000_M"):
				case joaat("MP_FAKE_SC_000_F"):
					if (func_475(27081, -1, -1))
					{
						return 0;
					}
					return !func_475(3789, -1, -1);
					break;
				
				case joaat("MP_FAKE_Vap_000_M"):
				case joaat("MP_FAKE_Vap_000_F"):
					return !func_475(3790, -1, -1);
					break;
				
				case joaat("MP_FAKE_Per_000_M"):
				case joaat("MP_FAKE_Per_000_F"):
					return !func_475(3791, -1, -1);
					break;
				
				case joaat("MP_FAKE_SN_000_M"):
				case joaat("MP_FAKE_SN_000_F"):
					return !func_475(3792, -1, -1);
					break;
				
				case joaat("MP_FILM_000_F"):
				case joaat("MP_FILM_000_M"):
					if (iParam1 == joaat("MP_FILM_000_F"))
					{
						iVar0 = func_133(2444, -1, 0);
						if (unk_0x234B68AC2E35ED5A(iVar0, 0))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_000_M"))
					{
						iVar1 = func_133(2424, -1, 0);
						if (unk_0x234B68AC2E35ED5A(iVar1, 18))
						{
							return 0;
						}
					}
					return !func_475(3793, -1, -1);
					break;
				
				case joaat("MP_FILM_001_F"):
				case joaat("MP_FILM_001_M"):
					if (iParam1 == joaat("MP_FILM_001_F"))
					{
						iVar2 = func_133(2444, -1, 0);
						if (unk_0x234B68AC2E35ED5A(iVar2, 1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_001_M"))
					{
						iVar3 = func_133(2424, -1, 0);
						if (unk_0x234B68AC2E35ED5A(iVar3, 19))
						{
							return 0;
						}
					}
					return !func_475(3794, -1, -1);
					break;
				
				case joaat("MP_FILM_002_F"):
				case joaat("MP_FILM_002_M"):
					if (iParam1 == joaat("MP_FILM_002_F"))
					{
						iVar4 = func_133(2444, -1, 0);
						if (unk_0x234B68AC2E35ED5A(iVar4, 2))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_002_M"))
					{
						iVar5 = func_133(2424, -1, 0);
						if (unk_0x234B68AC2E35ED5A(iVar5, 20))
						{
							return 0;
						}
					}
					return !func_475(3795, -1, -1);
					break;
				
				case joaat("MP_FILM_003_F"):
				case joaat("MP_FILM_003_M"):
					if (iParam1 == joaat("MP_FILM_003_F"))
					{
						iVar6 = func_133(2444, -1, 0);
						if (unk_0x234B68AC2E35ED5A(iVar6, 3))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_003_M"))
					{
						iVar7 = func_133(2424, -1, 0);
						if (unk_0x234B68AC2E35ED5A(iVar7, 21))
						{
							return 0;
						}
					}
					return !func_475(3796, -1, -1);
					break;
				
				case joaat("MP_FILM_004_F"):
				case joaat("MP_FILM_004_M"):
					if (iParam1 == joaat("MP_FILM_004_F"))
					{
						iVar8 = func_133(2444, -1, 0);
						if (unk_0x234B68AC2E35ED5A(iVar8, 4))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_004_M"))
					{
						iVar9 = func_133(2424, -1, 0);
						if (unk_0x234B68AC2E35ED5A(iVar9, 22))
						{
							return 0;
						}
					}
					return !func_475(3797, -1, -1);
					break;
				
				case joaat("MP_FILM_005_F"):
				case joaat("MP_FILM_005_M"):
					if (iParam1 == joaat("MP_FILM_005_F"))
					{
						iVar10 = func_133(2444, -1, 0);
						if (unk_0x234B68AC2E35ED5A(iVar10, 5))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_005_M"))
					{
						iVar11 = func_133(2424, -1, 0);
						if (unk_0x234B68AC2E35ED5A(iVar11, 23))
						{
							return 0;
						}
					}
					return !func_475(3798, -1, -1);
					break;
				
				case joaat("MP_FILM_006_F"):
				case joaat("MP_FILM_006_M"):
					if (iParam1 == joaat("MP_FILM_006_F"))
					{
						iVar12 = func_133(2444, -1, 0);
						if (unk_0x234B68AC2E35ED5A(iVar12, 6))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_006_M"))
					{
						iVar13 = func_133(2424, -1, 0);
						if (unk_0x234B68AC2E35ED5A(iVar13, 24))
						{
							return 0;
						}
					}
					return !func_475(3799, -1, -1);
					break;
				
				case joaat("MP_FILM_007_F"):
				case joaat("MP_FILM_007_M"):
					if (iParam1 == joaat("MP_FILM_007_F"))
					{
						iVar14 = func_133(2444, -1, 0);
						if (unk_0x234B68AC2E35ED5A(iVar14, 7))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_007_M"))
					{
						iVar15 = func_133(2424, -1, 0);
						if (unk_0x234B68AC2E35ED5A(iVar15, 25))
						{
							return 0;
						}
					}
					return !func_475(3800, -1, -1);
					break;
				
				case joaat("MP_FILM_008_F"):
				case joaat("MP_FILM_008_M"):
					if (iParam1 == joaat("MP_FILM_008_F"))
					{
						iVar16 = func_133(2444, -1, 0);
						if (unk_0x234B68AC2E35ED5A(iVar16, 8))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_008_M"))
					{
						iVar17 = func_133(2424, -1, 0);
						if (unk_0x234B68AC2E35ED5A(iVar17, 26))
						{
							return 0;
						}
					}
					return !func_475(3801, -1, -1);
					break;
				
				case joaat("MP_FILM_009_F"):
				case joaat("MP_FILM_009_M"):
					if (iParam1 == joaat("MP_FILM_009_F"))
					{
						iVar18 = func_133(2444, -1, 0);
						if (unk_0x234B68AC2E35ED5A(iVar18, 9))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_009_M"))
					{
						iVar19 = func_133(2424, -1, 0);
						if (unk_0x234B68AC2E35ED5A(iVar19, 27))
						{
							return 0;
						}
					}
					return !func_475(3802, -1, -1);
					break;
			}
			break;
		
		case joaat("mpLuxe2_overlays"):
			switch (iParam1)
			{
				case joaat("MP_LUXE_TAT_030_M"):
				case joaat("MP_LUXE_TAT_031_M"):
					return 1;
					break;
				
				case joaat("MP_LUXE_TAT_030_F"):
				case joaat("MP_LUXE_TAT_031_F"):
					return 1;
					break;
			}
			break;
		
		case joaat("multiplayer_overlays"):
			switch (iParam1)
			{
				case joaat("MP_FM_OGA_000_m"):
				case joaat("MP_FM_OGA_001_m"):
				case joaat("MP_FM_OGA_002_m"):
				case joaat("MP_FM_OGA_003_m"):
				case joaat("MP_FM_OGA_000_f"):
				case joaat("MP_FM_OGA_001_f"):
				case joaat("MP_FM_OGA_002_f"):
				case joaat("MP_FM_OGA_003_f"):
					return !func_466();
					break;
			}
			break;
	}
	return 0;
}

int func_466()
{
	var uVar0;
	
	if (unk_0xB2EC8B4970766623())
	{
		if (unk_0x1D0F0A8090E1551E())
		{
			if (unk_0x722D5CFE95568B02())
			{
				unk_0xD885BEFA31A18D47(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x191DDA30577F440A(&uVar0, 2);
				unk_0x191DDA30577F440A(&uVar0, 4);
				unk_0x191DDA30577F440A(&uVar0, 6);
				unk_0x191DDA30577F440A(&Global_25, 2);
				unk_0x191DDA30577F440A(&Global_25, 4);
				unk_0x191DDA30577F440A(&Global_25, 6);
				unk_0xAC4FD27671081628(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xF7701A907195ED86())
				{
					iVar0 = unk_0xC82CD1DB42480082(866);
					unk_0x191DDA30577F440A(&iVar0, 0);
					unk_0x0E32F508F8A14DE9(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_151130 == 2)
	{
		return 1;
	}
	else if (Global_151130 == 3)
	{
		return 0;
	}
	if (unk_0xF7701A907195ED86())
	{
		if (unk_0x234B68AC2E35ED5A(unk_0xC82CD1DB42480082(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_467()
{
	return unk_0x14FA206D9CE730A9(-1762644250);
}

int func_468(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (20 - 1);
	if (bParam1)
	{
		iVar0 = 13;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = iVar1;
		if (!func_470(iVar2) || iParam0)
		{
			if (!func_469(unk_0x1146A9AE09CE2B14(), iVar2, 0))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_469(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 != func_50())
	{
		iVar0 = iParam1;
		switch (iParam2)
		{
			case 0:
				break;
			}
	}