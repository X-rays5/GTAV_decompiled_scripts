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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<858> Local_49 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 1092616192, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	struct<3> Local_922 = { 0, 0, 0 } ;
	struct<3> Local_925 = { 0, 0, 0 } ;
	int iLocal_928 = 0;
	var uLocal_929 = 0;
	int iLocal_930[2] = { 0, 0 };
	int iLocal_933 = 0;
	struct<5> Local_934 = { 0, 0, 0, 0, 0 } ;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 21;
	var uLocal_942 = 6;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	int iLocal_946 = 0;
	int iLocal_947 = 0;
	int iLocal_948 = 0;
	int iLocal_949 = 0;
	int iLocal_950 = 0;
	var uLocal_951[2] = { 0, 0 };
	int iLocal_954 = 0;
	int iLocal_955 = 0;
	int iScriptParam_0 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_48 = joaat("p_amb_phone_01");
	Local_922 = { 0f, 0f, 0f };
	Local_925 = { 0f, 0f, 0f };
	iLocal_928 = -1;
	iLocal_949 = joaat("s_m_m_autoshop_02");
	iLocal_950 = joaat("taxi");
	iLocal_954 = 1;
	if (unk_0xED06FD5709A59F02(35))
	{
		if (unk_0xEC7DB118B815F890() == 1)
		{
			func_1037(0);
		}
		else
		{
			func_1037(5);
		}
		func_1030();
	}
	func_1020();
	SYSTEM::WAIT(0);
	while (iLocal_954)
	{
		SYSTEM::WAIT(0);
		switch (Local_49)
		{
			case 0:
				func_1019(iScriptParam_0);
				if (Local_49.f_1 != 7)
				{
					func_1037(Local_49.f_1);
				}
				break;
			
			case 1:
				func_1009();
				if (Local_49.f_1 != 7)
				{
					func_1037(Local_49.f_1);
				}
				break;
			
			case 2:
				if (Local_49.f_2)
				{
					Local_49.f_2 = 0;
					func_1000();
				}
				func_928();
				if (Local_49.f_1 != 7)
				{
					func_1037(Local_49.f_1);
				}
				break;
			
			case 3:
				if (func_927())
				{
					func_916();
				}
				break;
			
			case 4:
				if (func_915())
				{
					func_913();
				}
				break;
			
			case 5:
				if (func_878())
				{
					func_916();
				}
				break;
			
			case 6:
				if (Local_49.f_2)
				{
					Local_49.f_2 = 0;
					func_872();
				}
				func_304();
				if (Local_49.f_1 != 7)
				{
					func_1037(Local_49.f_1);
				}
				break;
			
			case 7:
				if (func_4(1))
				{
					func_1();
				}
				break;
			
			case 8:
				if (func_4(0))
				{
					func_1();
				}
				break;
			
			default:
				break;
		}
	}
	func_1030();
}

void func_1()
{
	unk_0xB80B2936A29B2666();
	func_2();
	iLocal_954 = 0;
}

int func_2()
{
	if (func_3(0))
	{
		return 0;
	}
	if (Global_98994.f_8)
	{
		if (Global_98994.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98994.f_10 > 1)
	{
		return 0;
	}
	Global_98994.f_10++;
	return 1;
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

int func_4(bool bParam0)
{
	struct<151> Var0;
	int iVar154;
	
	if (unk_0xEE02AF6BC32C9B5C())
	{
		func_299();
		func_298(4);
		return 0;
	}
	else if (func_297())
	{
		if (func_296())
		{
			func_298(3);
			return 0;
		}
	}
	else if (!unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()) || unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		func_298(0);
		return 0;
	}
	else if ((func_293(6) && !func_292(6)) && !func_292(7))
	{
		func_298(1);
		return 0;
	}
	else
	{
		Var0 = 6;
		Var0.f_112 = 2;
		Var0.f_140 = 3;
		Var0.f_150 = 3;
		if (bParam0)
		{
			func_291(Local_49.f_644, &Var0);
		}
		else
		{
			func_290(Global_94782, &Var0);
		}
		if (func_74(&Var0, &(Local_49.f_650), &(Local_49.f_259), &(Local_49.f_257), &(Local_49.f_651), Local_49.f_56.f_7, Local_49.f_109.f_7, &(Local_49.f_649), Local_49.f_56.f_8, Local_49.f_109.f_8))
		{
			iVar154 = 0;
			while (iVar154 < 9)
			{
				if (func_73(iVar154) == 4 && func_72(iVar154) == 0)
				{
					func_71(iVar154);
				}
				iVar154++;
			}
			if (Local_49.f_56.f_1 != 145)
			{
				unk_0x7944D5715AE862AF(func_68(Local_49.f_56.f_1), 0);
			}
			if (Local_49.f_109.f_1 != 145)
			{
				unk_0x7944D5715AE862AF(func_68(Local_49.f_109.f_1), 0);
			}
			func_5(&(Local_49.f_3), 0, 1);
			func_5(&(Local_49.f_56), 0, 1);
			func_5(&(Local_49.f_109), 0, 1);
			return 1;
		}
	}
	return 0;
}

void func_5(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 != 0)
	{
		if (func_67(uParam0->f_1))
		{
			unk_0xD2459066EA58CE43(&Global_94806, uParam0->f_1);
		}
		func_65(uParam0);
		func_64(uParam0, 0);
		func_58(uParam0);
		if (unk_0x8F678487EEBD8CE4(uParam0->f_10))
		{
			unk_0x93370FA10F15BE44(&(uParam0->f_10));
		}
		if (unk_0x8F678487EEBD8CE4(uParam0->f_11))
		{
			unk_0x93370FA10F15BE44(&(uParam0->f_11));
		}
		if (unk_0xAE06B9E39EBDE049(uParam0->f_9))
		{
			if (unk_0x8E805E09B82CCE5F(uParam0->f_9))
			{
				unk_0x1F8106DB8796859F(uParam0->f_9, 1, 1);
			}
			unk_0x315F7D8C33F0AB37(&(uParam0->f_9));
		}
		func_56(uParam0);
		func_53(uParam0);
		if (uParam0->f_35 != 0)
		{
			unk_0x74528AC0906CBABE(uParam0->f_35);
		}
		if (uParam0->f_34 != 0)
		{
			unk_0x74528AC0906CBABE(uParam0->f_34);
		}
		if (uParam0->f_50)
		{
			func_52(uParam0->f_1);
		}
		if (func_67(uParam0->f_1) && (((iParam1 == 4 || iParam1 == 5) || iParam1 == 6) || iParam2))
		{
			func_49(uParam0, 2, 0);
		}
		else
		{
			func_49(uParam0, 1, 0);
		}
		func_48(uParam0->f_1, 1);
		func_47(uParam0);
		func_43(uParam0->f_1);
		if (iParam1 == 1)
		{
			if (unk_0xAE06B9E39EBDE049(uParam0->f_8) && unk_0x1D2A3118784C0272(uParam0->f_8, 0))
			{
				unk_0x03A2522C845CFAC6(&(uParam0->f_8));
			}
		}
		if (unk_0xAE06B9E39EBDE049(uParam0->f_7) && uParam0->f_7 != unk_0x9B0761B4C3EB8BC7())
		{
			if (iParam1 == 0 || iParam1 == 1)
			{
				unk_0x586DDC617E714637(&(uParam0->f_7));
			}
			else if (iParam1 == 2)
			{
				unk_0x2481907DEE6B85EA(&(uParam0->f_7));
			}
			else if (iParam1 == 4)
			{
				func_42(uParam0->f_7, uParam0->f_1);
			}
			else if (iParam1 == 5)
			{
				func_14(uParam0->f_7, uParam0->f_1, Global_94802);
			}
			else if (iParam1 == 6)
			{
				func_11(uParam0->f_7, uParam0->f_1);
			}
			else if (iParam1 == 3)
			{
			}
		}
		func_6(uParam0);
	}
}

void func_6(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 145;
	uParam0->f_2 = 25;
	StringCopy(&(uParam0->f_3), "", 16);
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	func_8(&(uParam0->f_15));
	uParam0->f_21 = { 0f, 0f, 0f };
	uParam0->f_24 = { 0f, 0f, 0f };
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	func_7(&(uParam0->f_29));
	uParam0->f_32 = 0;
	uParam0->f_34 = 0;
	uParam0->f_35 = 0;
	uParam0->f_36 = 0;
	uParam0->f_37 = 0;
	uParam0->f_38 = 0;
	uParam0->f_39 = 0;
	uParam0->f_40 = 0;
	uParam0->f_41 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 0;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
	uParam0->f_50 = 0;
	uParam0->f_51 = 0;
	uParam0->f_52 = 7;
}

void func_7(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_8(var uParam0)
{
	func_9(uParam0, 0f);
}

void func_9(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_10(unk_0xCE990E643CD9D0E5(*uParam0, 4)) - fParam1);
	unk_0xBE20AB8238688965(uParam0, 1);
	unk_0xD2459066EA58CE43(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_10(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(unk_0x578C4EF320340AF7());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x25DDB354A40FFCDB())
	{
		iVar2 = unk_0x6CAAB7E78B5D978A();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(unk_0x578C4EF320340AF7()) / 1000f);
}

void func_11(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (unk_0xFE6F151E15A69B3A(iParam0, func_13()))
		{
			unk_0x59478CBBF96AF7D1(iParam0);
		}
		unk_0xCBA6B2B569DCAFD8(iParam0, 1);
		iVar0 = unk_0x16BC17A8EDC701A2(iParam0, -1146898486);
		if (iVar0 != 1 && iVar0 != 0)
		{
			unk_0x9B94F6169B0DAEFD(iParam0);
			unk_0x30291E2E564E9B47(iParam0, 1193033728, 0);
		}
	}
	func_12(iParam0, iParam1, 5);
}

void func_12(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		unk_0x2481907DEE6B85EA(&iParam0);
	}
	else if (!func_67(iParam1))
	{
		unk_0x2481907DEE6B85EA(&iParam0);
	}
	else if (Global_76833)
	{
		unk_0x2481907DEE6B85EA(&iParam0);
	}
	else if (unk_0x7B70881748D166CD(joaat("friends_controller")) == 0)
	{
		unk_0x2481907DEE6B85EA(&iParam0);
	}
	else if (func_292(2))
	{
		unk_0x2481907DEE6B85EA(&iParam0);
	}
	else if ((Global_41631 == 6 || Global_41631 == 7) && Global_94781 < 22)
	{
		unk_0x2481907DEE6B85EA(&iParam0);
	}
	else
	{
		if (!unk_0x5AEB5DDFFAD43CA5(Global_94793[iParam1]))
		{
			unk_0x2481907DEE6B85EA(&iParam0);
		}
		Global_94793[iParam1] = iParam0;
		Global_94797[iParam1] = iParam2;
	}
}

var func_13()
{
	return unk_0x14A1FF4316FA17CB(unk_0x2639A2323BEA8CC6());
}

void func_14(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	var uVar8;
	var uVar9;
	var uVar10;
	
	if (!unk_0x5AEB5DDFFAD43CA5(uParam0))
	{
		if (unk_0xFE6F151E15A69B3A(iParam0, func_13()))
		{
			unk_0x59478CBBF96AF7D1(iParam0);
		}
		unk_0xCBA6B2B569DCAFD8(iParam0, 1);
		unk_0x9B94F6169B0DAEFD(iParam0);
		bVar0 = false;
		if (iParam2 == 44)
		{
			Var1 = { 1382.859f, -1706.069f, 62.8927f };
			bVar0 = true;
		}
		else if (iParam2 != -1)
		{
			iVar4 = Global_89743[iParam2 /*34*/].f_10;
			if (func_41(iVar4))
			{
				Var5 = { func_35(iVar4, func_36()) };
			}
			else
			{
				Var5 = { func_35(iVar4, 0) };
			}
			Var1 = { Var5 + func_34(unk_0x3E4D3CCC220BDFB1(iParam0, 1) - Var5) * Vector(50f, 50f, 50f) };
			if (func_15(Var1, &Var1, &uVar8, &uVar9, 1, 0, 1))
			{
				bVar0 = true;
			}
		}
		unk_0x9DC06E2A59C5AEBB(&uVar10);
		if (unk_0x47DBF174A0CB9D55(iParam0, 1))
		{
			unk_0x0AB756271BADC8DF(0, 0, 0);
		}
		unk_0xA785552633ED203B(0, unk_0x9B0761B4C3EB8BC7(), 2000, 3072, 2);
		unk_0xC67F9BF03C2472AB(0, unk_0x344C570D6F8700DF(800, 1200));
		if (bVar0)
		{
			unk_0x3C1B180EE30D36EF(0, Var1, 1f, -1, 0.25f, 5, 1193033728);
		}
		unk_0x30291E2E564E9B47(0, 1193033728, 0);
		unk_0x19F29730874AD6F1(uVar10);
		unk_0x9B6EC2CECE1010EF(iParam0, uVar10);
		unk_0x4F83FEE4454169D4(&uVar10);
	}
	func_12(iParam0, iParam1, 4);
}

int func_15(struct<3> Param0, var uParam3, var uParam4, var uParam5, int iParam6, int iParam7, bool bParam8)
{
	int iVar0;
	
	while (true)
	{
		if (unk_0x1485BFBB1EC6FE22(Param0, iParam6, uParam3, uParam4, uParam5, 1, 1077936128, 0))
		{
			if (func_16(*uParam3, 10f, 1f, 1f, 5f, iParam7, bParam8, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				return 1;
			}
		}
		iParam6++;
		iVar0++;
		if (iVar0 > 75)
		{
			*uParam3 = { Param0 };
			return 0;
		}
	}
	return 0;
}

int func_16(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2405074.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x160FF3CA76647557(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x11C93463B5150761(Param0.x, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x11C93463B5150761(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xF666C0F9CA439368(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (bParam13)
	{
		if (unk_0x7B4B68137DA4DF12(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (fParam14 > 0f)
	{
		if (func_27(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_17(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405074.f_2++;
	return 1;
}

int func_17(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_26(unk_0x460153A63B9477BC(), 1, 1))
		{
			if (!unk_0x03DB5C6AABF8DA46())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x272784C60C397DB6(func_22(unk_0x460153A63B9477BC()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x9A70B1BD2A5BA09C(Param0, fParam3))
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
		if (func_26(iVar1, 1, 1))
		{
			if (!func_19(iVar1, 0) && unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x460153A63B9477BC()))
				{
					if ((func_18(iVar1) || !bParam10) && !Global_2425869[iVar1 /*443*/].f_263)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x6CC163E30ECE0790(iVar1) == -1)
							{
								if (unk_0x6CC163E30ECE0790(iVar1) == unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x6CC163E30ECE0790(iVar1) != unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()))) || unk_0x6CC163E30ECE0790(iVar1) == -1)
							{
								if (unk_0x272784C60C397DB6(func_22(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0xC3BA5B8F1CF9CD22(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x6CC163E30ECE0790(iVar1) != iParam8 || unk_0x6CC163E30ECE0790(iVar1) == -1)
						{
							if (unk_0x272784C60C397DB6(func_22(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0xC3BA5B8F1CF9CD22(iVar1, Param0, fParam3))
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

int func_18(int iParam0)
{
	if (unk_0xEB7D4DA50142DE0A(unk_0x1FA7B77001D60F9D(iParam0)) || Global_2425869[iParam0 /*443*/].f_249)
	{
		return 1;
	}
	return 0;
}

bool func_19(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		bVar0 = func_20(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590682[iParam0 /*883*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x166E920FB00B2DBB(iParam0))
		{
			bVar0 = unk_0x6CC163E30ECE0790(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_20(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_21();
	}
	if (Global_1312876[iVar1] == 1)
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

int func_21()
{
	return Global_1312763;
}

Vector3 func_22(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_25() && Global_1590682[iVar0 /*883*/].f_854) && !func_24(Global_1590682[iVar0 /*883*/].f_855))
	{
		return Global_1590682[iVar0 /*883*/].f_855;
	}
	return func_23(iParam0);
}

Vector3 func_23(int iParam0)
{
	return unk_0x3E4D3CCC220BDFB1(unk_0x1FA7B77001D60F9D(iParam0), 0);
}

int func_24(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_25()
{
	return Global_2451787.f_18;
}

int func_26(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x166E920FB00B2DBB(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x5A228A6A51E757C8(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2440049.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_27(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x460153A63B9477BC() != iVar1) || iParam8 == 0)
		{
			if (func_26(iVar1, bParam4, bParam5))
			{
				if (unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1))
				{
					if (!bParam7 || (!unk_0x5AEB5DDFFAD43CA5(unk_0x1FA7B77001D60F9D(iVar1)) && func_18(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) != unk_0x6CC163E30ECE0790(iVar1))) || unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1)
						{
							if (((unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1 && uParam9) && bParam6) && func_28(iVar1))
							{
							}
							else if (unk_0xAE06B9E39EBDE049(unk_0x1FA7B77001D60F9D(iVar1)))
							{
								if (unk_0x272784C60C397DB6(func_23(iVar1), Param0, 1) < fParam3)
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

int func_28(int iParam0)
{
	if (func_33(unk_0x460153A63B9477BC(), iParam0))
	{
		return 1;
	}
	Global_2515173 = { func_32(iParam0) };
	if (unk_0x78A7795C9C51946D(&Global_2515173))
	{
		return 1;
	}
	if (func_29(unk_0x460153A63B9477BC(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_29(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_31(iParam0);
	if (!iVar0 == func_30())
	{
		if (iVar0 == func_31(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_30()
{
	return -1;
}

int func_31(int iParam0)
{
	if (iParam0 != func_30())
	{
		return Global_1630317[iParam0 /*595*/].f_11;
	}
	return func_30();
}

struct<13> func_32(var uParam0)
{
	struct<13> Var0;
	
	unk_0x2BDD80E79441BD36(uParam0, &Var0, 13);
	return Var0;
}

int func_33(int iParam0, var uParam1)
{
	if (unk_0xE2FBD13450B2DA21())
	{
		Global_2515173 = { func_32(iParam0) };
		Global_2515186 = { func_32(uParam1) };
		if (unk_0xBF9EC1ED7E386622(&Global_2515173))
		{
			if (unk_0xBF9EC1ED7E386622(&Global_2515186))
			{
				unk_0x192BD21E18525C69(&Global_2515103, 35, &Global_2515173);
				unk_0x192BD21E18525C69(&Global_2515138, 35, &Global_2515186);
				if (Global_2515103 == Global_2515138)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_34(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

Vector3 func_35(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0f, 0f, 0f;
	}
	return Global_31346[iVar0 /*23*/][iParam1 /*3*/];
}

int func_36()
{
	func_37();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_37()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_39(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_38(unk_0x9B0761B4C3EB8BC7());
			if (func_67(iVar0) && (!func_292(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_67(Global_111858.f_2359.f_539.f_4321))
				{
					Global_111858.f_2359.f_539.f_4322 = Global_111858.f_2359.f_539.f_4321;
				}
				Global_111858.f_2359.f_539.f_4323 = iVar0;
				Global_111858.f_2359.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111858.f_2359.f_539.f_4321 != 145)
			{
				Global_111858.f_2359.f_539.f_4323 = Global_111858.f_2359.f_539.f_4321;
			}
			return;
		}
	}
	Global_111858.f_2359.f_539.f_4321 = 145;
}

int func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_39(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_39(int iParam0)
{
	if (func_67(iParam0))
	{
		return func_40(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_40(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

bool func_41(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_31346[iVar0 /*23*/].f_11, 19);
}

void func_42(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x5AEB5DDFFAD43CA5(uParam0))
	{
		if (unk_0xFE6F151E15A69B3A(iParam0, func_13()))
		{
			unk_0x59478CBBF96AF7D1(iParam0);
		}
		unk_0xCBA6B2B569DCAFD8(iParam0, 1);
		iVar0 = unk_0x16BC17A8EDC701A2(iParam0, 1805844857);
		if (iVar0 != 1 && iVar0 != 0)
		{
			unk_0x9B94F6169B0DAEFD(iParam0);
			unk_0x8B18A80E8EB15510(iParam0, unk_0x9B0761B4C3EB8BC7(), 5000f, -1, 1, 0);
		}
	}
	func_12(iParam0, iParam1, 6);
}

int func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_45(iVar0, &iVar1, &iVar2);
		if (iVar1 == iParam0 || iVar2 == iParam0)
		{
			iVar4 = func_73(iVar0);
			if (iVar4 == 3 || iVar4 == 4)
			{
				func_44(iVar0, 0);
				iVar3 = 1;
			}
		}
		iVar0++;
	}
	return iVar3;
}

void func_44(int iParam0, int iParam1)
{
	if (iParam0 < 9)
	{
		Global_94811[iParam0 /*2*/] = iParam1;
		if (iParam1 == 0)
		{
			Global_94811[iParam0 /*2*/].f_1 = 0;
		}
	}
}

int func_45(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 != 9 && iParam0 != 10)
	{
		*uParam1 = func_46(Global_111858.f_18099.f_175[iParam0 /*19*/]);
		*uParam2 = func_46(Global_111858.f_18099.f_175[iParam0 /*19*/].f_1);
		return 1;
	}
	return 0;
}

int func_46(int iParam0)
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
			return 19;
			break;
		
		case 4:
			return 14;
			break;
		
		case 5:
			return 17;
			break;
	}
	return 145;
}

void func_47(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (uParam0->f_2 < 24)
		{
			if (uParam0->f_28 != 0)
			{
				unk_0x1E337EE68290597A(uParam0->f_28, 0);
				uParam0->f_28 = 0;
			}
		}
	}
}

void func_48(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				Global_93961[8] = 140;
				break;
			
			case 1:
				break;
			
			case 2:
				Global_93961[9] = 140;
				break;
			
			case 19:
				Global_93961[6] = 140;
				break;
			
			case 14:
				Global_93961[0] = 140;
				break;
			
			case 17:
				Global_93961[2] = 140;
				break;
			
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				if (Global_93961[8] == 140)
				{
					Global_93961[8] = 141;
				}
				break;
			
			case 1:
				break;
			
			case 2:
				if (Global_93961[9] == 140)
				{
					Global_93961[9] = 141;
				}
				break;
			
			case 19:
				if (Global_93961[6] == 140)
				{
					Global_93961[6] = 141;
				}
				break;
			
			case 14:
				if (Global_93961[0] == 140)
				{
					Global_93961[0] = 141;
				}
				break;
			
			case 17:
				if (Global_93961[2] == 140)
				{
					Global_93961[2] = 141;
				}
				break;
			
			default:
				break;
			}
	}
}

void func_49(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_50 || iParam2)
	{
		if (Local_49.f_3.f_1 != 145 && Local_49.f_3.f_1 != uParam0->f_1)
		{
			func_50(Local_49.f_3.f_1, uParam0->f_1, iParam1);
		}
		if (Local_49.f_56.f_50 && Local_49.f_56.f_1 != uParam0->f_1)
		{
			func_50(Local_49.f_56.f_1, uParam0->f_1, iParam1);
		}
		if (Local_49.f_109.f_50 && Local_49.f_109.f_1 != uParam0->f_1)
		{
			func_50(Local_49.f_109.f_1, uParam0->f_1, iParam1);
		}
	}
}

void func_50(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_68(iParam0);
	iVar1 = func_68(iParam1);
	iVar2 = func_51(iVar0, iVar1);
	if (iVar2 != 10)
	{
		func_8(&(Global_111858.f_18099.f_175[iVar2 /*19*/].f_5));
		Global_111858.f_18099.f_175[iVar2 /*19*/].f_8 = iParam2;
	}
}

int func_51(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			iVar0 = iParam1;
			iParam1 = iParam0;
			iParam0 = iVar0;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 10;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 8;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 6;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 10;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 7;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
	}
	return 10;
}

void func_52(int iParam0)
{
	if (((((iParam0 == 144 || iParam0 == 145) || iParam0 == 161) || iParam0 == 172) || iParam0 == 162) || iParam0 == 173)
	{
		return;
	}
	Global_42183[iParam0] = unk_0x578C4EF320340AF7() + 20000;
}

void func_53(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_7))
		{
			unk_0x389E871B0B67CCCC(uParam0->f_7, 1);
			unk_0x911BA6A7B46C75BA(uParam0->f_7, 0);
			unk_0x694113444F21E39F(uParam0->f_7, 32, true);
			unk_0x694113444F21E39F(uParam0->f_7, 107, false);
			if (unk_0xA9612D351EFBCEE5(func_13()) && unk_0xFE6F151E15A69B3A(uParam0->f_7, func_13()))
			{
				unk_0xB1B12B76553350D5(uParam0->f_7, func_13(), 0);
			}
			unk_0xDAE36360F0F8C1ED(uParam0->f_7, 0);
			if (uParam0->f_1 != 0)
			{
				if (func_55(4, uParam0->f_7))
				{
					func_54(4, uParam0->f_7, 0);
				}
			}
			if (uParam0->f_7 != unk_0x9B0761B4C3EB8BC7())
			{
				if (unk_0x7DA97DBB7F7D2DE5(uParam0->f_7))
				{
					unk_0x59478CBBF96AF7D1(uParam0->f_7);
				}
			}
		}
	}
}

void func_54(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	if (!bParam2)
	{
		if (!unk_0xAE06B9E39EBDE049(iParam1))
		{
			return;
		}
	}
	if (Global_40754[iParam0 /*31*/].f_24 == 0)
	{
		return;
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_40754[iParam0 /*31*/].f_24)
	{
		if (bVar1)
		{
			Global_40754[iParam0 /*31*/].f_25[(iVar0 - 1)] = Global_40754[iParam0 /*31*/].f_25[iVar0];
			Global_40754[iParam0 /*31*/].f_25[iVar0] = 0;
		}
		else if (iParam1 == Global_40754[iParam0 /*31*/].f_25[iVar0])
		{
			Global_40754[iParam0 /*31*/].f_25[iVar0] = 0;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_40754[iParam0 /*31*/].f_24 = (Global_40754[iParam0 /*31*/].f_24 - 1);
	}
}

int func_55(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_40754[iParam0 /*31*/].f_24)
	{
		if (iParam1 == Global_40754[iParam0 /*31*/].f_25[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_56(var uParam0)
{
	char* sVar0;
	
	if (func_57(uParam0, &sVar0))
	{
		unk_0x1082C25039B168F8(&sVar0);
	}
}

int func_57(var uParam0, char* sParam1)
{
	if (uParam0->f_1 == 0)
	{
		StringCopy(sParam1, "friends@frm@ig_1", 64);
		return 1;
	}
	else if (uParam0->f_1 == 1)
	{
		StringCopy(sParam1, "friends@frf@ig_1", 64);
		return 1;
	}
	else if (uParam0->f_1 == 2)
	{
		StringCopy(sParam1, "friends@frt@ig_1", 64);
		return 1;
	}
	else if (uParam0->f_1 == 19)
	{
		StringCopy(sParam1, "friends@frl@ig_1", 64);
		return 1;
	}
	else if (uParam0->f_1 == 14)
	{
		StringCopy(sParam1, "friends@frj@ig_1", 64);
		return 1;
	}
	else if (uParam0->f_1 == 17)
	{
		StringCopy(sParam1, "friends@fra@ig_1", 64);
		return 1;
	}
	return 0;
}

void func_58(var uParam0)
{
	if (unk_0x8F678487EEBD8CE4(uParam0->f_11))
	{
		unk_0x93370FA10F15BE44(&(uParam0->f_11));
	}
	if (unk_0x8F678487EEBD8CE4(uParam0->f_10))
	{
		unk_0x93370FA10F15BE44(&(uParam0->f_10));
	}
	if (uParam0->f_47 == 1)
	{
		if (unk_0x28BD5A3E7899F23D())
		{
			unk_0x8B4966914EE5EB9F(0);
		}
		unk_0x0C23023B6B6C6051(1);
		uParam0->f_47 = 0;
	}
	func_62("FR_HV_HORN", &(uParam0->f_3));
	func_62("FR_H_PKUP", &(uParam0->f_3));
	func_62("FR_H_WAIT", &(uParam0->f_3));
	func_62("FR_H_DROPOFF0", &(uParam0->f_3));
	func_62("FR_H_DROPOFF1", &(uParam0->f_3));
	func_62("FR_H_DROPOFF2", &(uParam0->f_3));
	func_61("FR_GETBACK", &(uParam0->f_3));
	func_59("FR_GETBACK2");
}

void func_59(char* sParam0)
{
	if (func_60(sParam0, 0, 0))
	{
		unk_0xB80B2936A29B2666();
	}
}

bool func_60(var uParam0, int iParam1, int iParam2)
{
	unk_0xCD7691F7F3015C57(uParam0);
	if (iParam1 == 1)
	{
		unk_0x6A826E35A3096ED0(iParam2);
	}
	return unk_0x5E0AC8AED85CE7CB();
}

void func_61(char* sParam0, var uParam1)
{
	if (func_60(sParam0, 1, uParam1))
	{
		unk_0xB80B2936A29B2666();
	}
}

void func_62(char* sParam0, var uParam1)
{
	if (func_63(sParam0, uParam1))
	{
		unk_0xD289B55B6AADBA10(1);
	}
}

bool func_63(char[4] cParam0, int iParam1)
{
	unk_0x69476B1CA6A9FF80(cParam0);
	unk_0x6A826E35A3096ED0(uParam1);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

void func_64(var uParam0, int iParam1)
{
	if (uParam0->f_47 || iParam1)
	{
		if (unk_0x28BD5A3E7899F23D())
		{
			unk_0x8B4966914EE5EB9F(0);
		}
		unk_0x0C23023B6B6C6051(1);
		uParam0->f_47 = 0;
	}
	func_62("FR_HV_HORN", &(uParam0->f_3));
}

void func_65(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (func_67(uParam0->f_1))
		{
			if (uParam0->f_45)
			{
				if ((Global_111858.f_18529[uParam0->f_1] == 2 || Global_111858.f_18529[uParam0->f_1] == 3) || Global_111858.f_18529[uParam0->f_1] == 4)
				{
					func_66(uParam0->f_1);
				}
				uParam0->f_45 = 0;
			}
		}
	}
}

void func_66(int iParam0)
{
	if ((Global_111858.f_18529[iParam0] != 2 && Global_111858.f_18529[iParam0] != 3) && Global_111858.f_18529[iParam0] != 4)
	{
		return;
	}
	Global_111858.f_18529[iParam0] = 318;
	Global_97066[iParam0 /*109*/].f_3 = 145;
	Global_97066[iParam0 /*109*/].f_2 = 318;
	Global_97066[iParam0 /*109*/].f_4 = { 0f, 0f, 0f };
	Global_97066[iParam0 /*109*/].f_7 = 0f;
}

bool func_67(int iParam0)
{
	return iParam0 < 3;
}

int func_68(int iParam0)
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < func_70())
	{
		return func_69(iParam0);
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == func_70())
	{
		return 6;
	}
	if (iParam0 == 173)
	{
		return 6;
	}
	return 6;
}

var func_69(int iParam0)
{
	return Global_1848[iParam0 /*29*/].f_11;
}

int func_70()
{
	if (Global_30968 == 0 || Global_30968 == 2)
	{
		return 172;
	}
	return 161;
}

void func_71(int iParam0)
{
	if (iParam0 < 9)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_111858.f_18099.f_175[iParam0 /*19*/].f_18, 0))
		{
			unk_0xBE20AB8238688965(&(Global_111858.f_18099.f_175[iParam0 /*19*/].f_18), 0);
		}
	}
}

int func_72(int iParam0)
{
	if (iParam0 < 9)
	{
		return Global_94811[iParam0 /*2*/].f_1;
	}
	return 0;
}

int func_73(int iParam0)
{
	if (iParam0 < 9)
	{
		return Global_94811[iParam0 /*2*/];
	}
	return -1;
}

int func_74(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, var uParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	struct<2> Var14;
	struct<2> Var17;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	struct<3> Var32;
	struct<3> Var35;
	struct<3> Var38;
	var uVar41;
	int iVar42;
	int iVar43;
	var uVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	struct<3> Var49;
	struct<3> Var52;
	
	iVar0 = 0;
	if (uParam0->f_124 < 2f)
	{
		if (*uParam3 >= 402)
		{
			iVar0 = 1;
		}
	}
	else if (*uParam3 >= 403 && SYSTEM::TIMERA() > SYSTEM::ROUND(((uParam0->f_124 - 2f) * 1000f)))
	{
		iVar0 = 1;
	}
	if (*uParam3 > 301 && *uParam3 < 900)
	{
		if (unk_0x03DB5C6AABF8DA46())
		{
			*uParam3 = 900;
		}
		else if (iVar0 == 0)
		{
			if (!unk_0x5B772EFCB84373BE())
			{
				if (func_288(1000))
				{
					unk_0x1D40553EDD51A1B8(500);
				}
			}
		}
	}
	if (*uParam3 > 0)
	{
		if (*uParam4 < unk_0x578C4EF320340AF7())
		{
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				if (func_286(unk_0x9B0761B4C3EB8BC7()))
				{
					func_278(unk_0x9B0761B4C3EB8BC7(), 5000);
				}
			}
			if (!unk_0x5AEB5DDFFAD43CA5(iParam5))
			{
				if (func_286(iParam5))
				{
					func_278(iParam5, 5000);
				}
			}
			if (!unk_0x5AEB5DDFFAD43CA5(iParam6))
			{
				if (func_286(iParam6))
				{
					func_278(iParam6, 5000);
				}
			}
			*uParam4 = unk_0x578C4EF320340AF7() + 5000;
		}
	}
	if (*uParam3 == 0)
	{
		func_160(uParam0->f_105, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1);
		unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), false, 0);
		func_159();
		*uParam7 = 0;
		SYSTEM::SETTIMERA(0);
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			if (func_286(unk_0x9B0761B4C3EB8BC7()))
			{
				func_278(unk_0x9B0761B4C3EB8BC7(), 6000);
			}
		}
		if (!unk_0x5AEB5DDFFAD43CA5(iParam5))
		{
			if (func_286(iParam5))
			{
				func_278(iParam5, 6000);
			}
		}
		if (!unk_0x5AEB5DDFFAD43CA5(iParam6))
		{
			if (func_286(iParam6))
			{
				func_278(iParam6, 6000);
			}
		}
		*uParam4 = unk_0x578C4EF320340AF7() + 5000;
		iVar1 = unk_0xA5D3CD332CD10EE9();
		if (unk_0xAE06B9E39EBDE049(iVar1))
		{
			unk_0x4F3C4F457D44BB0F(iVar1, 1, 1);
		}
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			unk_0xFD45D90342D2A0CD(500);
			*uParam3 = 101;
		}
		else
		{
			*uParam3 = 301;
		}
	}
	else if (*uParam3 == 101)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			unk_0x9B94F6169B0DAEFD(unk_0x9B0761B4C3EB8BC7());
			unk_0x9DC06E2A59C5AEBB(&uVar2);
			if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				unk_0x0AB756271BADC8DF(0, 0, 0);
			}
			else
			{
				unk_0x3C1B180EE30D36EF(0, uParam0->f_109, 1f, 20000, 0.25f, 0, 1193033728);
			}
			unk_0x19F29730874AD6F1(uVar2);
			unk_0x9B6EC2CECE1010EF(unk_0x9B0761B4C3EB8BC7(), uVar2);
			unk_0x4F83FEE4454169D4(&uVar2);
		}
		if (!unk_0x5AEB5DDFFAD43CA5(iParam5))
		{
			unk_0x9B94F6169B0DAEFD(unk_0x9B0761B4C3EB8BC7());
			unk_0x9DC06E2A59C5AEBB(&uVar2);
			if (unk_0x47DBF174A0CB9D55(iParam5, 0))
			{
				unk_0x0AB756271BADC8DF(0, 550, 0);
			}
			else
			{
				unk_0x3C1B180EE30D36EF(0, uParam0->f_112[0 /*3*/], 1f, 20000, 0.25f, 0, 1193033728);
			}
			unk_0x19F29730874AD6F1(uVar2);
			unk_0x9B6EC2CECE1010EF(iParam5, uVar2);
			unk_0x4F83FEE4454169D4(&uVar2);
		}
		if (!unk_0x5AEB5DDFFAD43CA5(iParam6))
		{
			unk_0x9B94F6169B0DAEFD(unk_0x9B0761B4C3EB8BC7());
			unk_0x9DC06E2A59C5AEBB(&uVar2);
			if (unk_0x47DBF174A0CB9D55(iParam6, 0))
			{
				unk_0x0AB756271BADC8DF(0, 800, 0);
			}
			else
			{
				unk_0x3C1B180EE30D36EF(0, uParam0->f_112[1 /*3*/], 1f, 20000, 0.25f, 0, 1193033728);
			}
			unk_0x19F29730874AD6F1(uVar2);
			unk_0x9B6EC2CECE1010EF(iParam6, uVar2);
			unk_0x4F83FEE4454169D4(&uVar2);
		}
		SYSTEM::SETTIMERA(0);
		*uParam3++;
	}
	else if (*uParam3 == 102)
	{
		if (SYSTEM::TIMERA() > 1500)
		{
			SYSTEM::SETTIMERA(0);
			*uParam3 = 301;
		}
	}
	else if (*uParam3 == 301)
	{
		iVar3 = unk_0xA5D3CD332CD10EE9();
		*uParam1 = func_158(uParam0, uParam7, iParam5, iParam6, iParam8, iParam9, iVar3);
		if (*uParam1 == 3)
		{
			if (!unk_0x80FF6C016CDB0FAF(*uParam7, 0))
			{
				if (SYSTEM::TIMERA() < 15000)
				{
					*uParam7 = func_157(uParam0->f_105, uParam0->f_108);
					if (!unk_0x80FF6C016CDB0FAF(*uParam7, 0))
					{
						return 0;
					}
				}
				else
				{
					*uParam1 = 0;
					*uParam7 = iVar3;
				}
			}
		}
		if (unk_0xAE06B9E39EBDE049(*uParam7))
		{
			if (!unk_0x1D2A3118784C0272(*uParam7, 0))
			{
				unk_0x4F3C4F457D44BB0F(*uParam7, 1, 0);
			}
		}
		if (*uParam1 != 1)
		{
			if (iParam8 != *uParam7)
			{
				if (unk_0xAE06B9E39EBDE049(iParam8))
				{
					unk_0x03A2522C845CFAC6(&iParam8);
				}
			}
		}
		if (*uParam1 != 2)
		{
			if (iParam9 != *uParam7)
			{
				if (unk_0xAE06B9E39EBDE049(iParam9))
				{
					unk_0x03A2522C845CFAC6(&iParam9);
				}
			}
		}
		if (*uParam1 != 0)
		{
			if (*uParam7 != iVar3)
			{
				if (unk_0xAE06B9E39EBDE049(iVar3))
				{
					func_155(iVar3, &(uParam0->f_135), 0);
				}
			}
		}
		if (*uParam1 == 2)
		{
			*uParam1 = 1;
		}
		Var4 = { uParam0->f_109 - Vector(50f, 150f, 150f) };
		Var7 = { uParam0->f_109 + Vector(50f, 150f, 150f) };
		unk_0xF27E737981AFB47D(uParam0->f_109, 150f, 0, 0, 0, 0, 0, 0);
		unk_0x773B9DEB93E81B2F(uParam0->f_109, 150f, 0);
		unk_0xCCF292009C6F1D61(Var4, Var7, 0, 0);
		unk_0x27E543EDE9AEA8F2(Var4, Var7, 0, 1);
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			unk_0x9B94F6169B0DAEFD(unk_0x9B0761B4C3EB8BC7());
			unk_0x44225B42FE388400(unk_0x9B0761B4C3EB8BC7(), 1);
			unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 240, true);
			if (func_286(iParam5))
			{
				func_278(unk_0x9B0761B4C3EB8BC7(), 20000);
			}
			if (func_154(iParam5))
			{
				unk_0x9B94F6169B0DAEFD(iParam5);
				unk_0x44225B42FE388400(iParam5, 1);
				unk_0x4E65320BC9AD521C(iParam5, 1);
				unk_0x694113444F21E39F(iParam5, 240, true);
				if (unk_0x7DA97DBB7F7D2DE5(iParam5))
				{
					unk_0x59478CBBF96AF7D1(iParam5);
				}
				if (func_286(iParam5))
				{
					func_278(iParam5, 20000);
				}
			}
			if (func_154(iParam6))
			{
				unk_0x9B94F6169B0DAEFD(iParam6);
				unk_0x44225B42FE388400(iParam6, 1);
				unk_0x4E65320BC9AD521C(iParam6, 1);
				unk_0x694113444F21E39F(iParam6, 240, true);
				if (unk_0x7DA97DBB7F7D2DE5(iParam6))
				{
					unk_0x59478CBBF96AF7D1(iParam6);
				}
				if (func_286(iParam6))
				{
					func_278(iParam6, 20000);
				}
			}
			unk_0x555EE41D7C7078E6(uParam0->f_109, 15f, 1, 0, 0, 0);
			Var10 = { uParam0->f_109 + Vector(1f, 0f, 0f) };
			unk_0xE5CC8E2D904E42CE(Var10, &(Var10.f_2), 0, 0);
			unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), Var10, 1, 0, 0, 1);
			func_153(unk_0x9B0761B4C3EB8BC7(), uParam0->f_112[0 /*3*/] + uParam0->f_112[1 /*3*/] * Vector(0.5f, 0.5f, 0.5f));
			if (func_154(iParam5))
			{
				Var10 = { uParam0->f_112[0 /*3*/] + Vector(1f, 0f, 0f) };
				unk_0xE5CC8E2D904E42CE(Var10, &(Var10.f_2), 0, 0);
				unk_0x2BB0EF9DE445EA13(iParam5);
				unk_0x03D382CB0B44E2FC(iParam5, Var10, 1, 0, 0, 1);
				func_153(iParam5, uParam0->f_109);
			}
			if (func_154(iParam6))
			{
				Var10 = { uParam0->f_112[1 /*3*/] + Vector(1f, 0f, 0f) };
				unk_0xE5CC8E2D904E42CE(Var10, &(Var10.f_2), 0, 0);
				unk_0x2BB0EF9DE445EA13(iParam6);
				unk_0x03D382CB0B44E2FC(iParam6, Var10, 1, 0, 0, 1);
				func_153(iParam6, uParam0->f_109);
			}
			if (unk_0xAE06B9E39EBDE049(*uParam7))
			{
				if (unk_0xA59F96B50B97E63C(*uParam7, 0))
				{
					unk_0x03A2522C845CFAC6(uParam7);
				}
				else
				{
					unk_0x555EE41D7C7078E6(uParam0->f_105, 15f, 1, 0, 0, 0);
					unk_0x03D382CB0B44E2FC(*uParam7, uParam0->f_105, 1, 0, 0, 1);
					unk_0xE922BAA80E8F9324(*uParam7, uParam0->f_108);
					if (*uParam1 == 1)
					{
						if (!func_152(*uParam7, uParam0->f_132))
						{
							unk_0xE922BAA80E8F9324(*uParam7, (uParam0->f_108 + 180f));
						}
					}
					unk_0xB11D151E210D4FAC(*uParam7, 1084227584);
					unk_0xFC34FFD7661206B7(*uParam7, 1);
				}
			}
			if (*uParam1 == 0)
			{
				if (*uParam7 == iVar3)
				{
					if (unk_0xAE06B9E39EBDE049(iVar3))
					{
						iVar13 = unk_0x36FE6D3220816ADA(iVar3);
						if (iVar13 != 0)
						{
							unk_0x140662B520844E45(iVar13, &Var14, &Var17);
							if (((Var17 > 2.5f || Var17.f_1 > 4f) || Var14 < -2.5f) || Var14.f_1 < -4f)
							{
								func_155(iVar3, &(uParam0->f_135), 1);
							}
						}
					}
				}
			}
			func_151(uParam0[0 /*15*/]);
			SYSTEM::SETTIMERA(-SYSTEM::ROUND((uParam0->f_123 * 1000f)));
			SYSTEM::SETTIMERB(0);
		}
		if (!unk_0x87F0CB19476706C3())
		{
			unk_0xFD45D90342D2A0CD(1000);
		}
		*uParam3++;
	}
	else if (*uParam3 == 302)
	{
		if (SYSTEM::TIMERA() > 0)
		{
			if (func_154(unk_0x9B0761B4C3EB8BC7()))
			{
				if (!func_150())
				{
					if (func_286(unk_0x9B0761B4C3EB8BC7()))
					{
						iVar20 = 60;
					}
					else if (func_154(iParam5) && func_154(iParam6))
					{
						iVar20 = 61;
					}
					else
					{
						iVar20 = 59;
					}
					iVar21 = iParam5;
					if (unk_0x5AEB5DDFFAD43CA5(iParam5))
					{
						iVar21 = iParam6;
					}
					if (func_154(iVar21))
					{
						if (func_128(unk_0x9B0761B4C3EB8BC7(), iVar21, iVar20, uParam2))
						{
							unk_0xA785552633ED203B(unk_0x9B0761B4C3EB8BC7(), iVar21, -1, 2048, 4);
							*uParam3++;
						}
					}
					else
					{
						*uParam3++;
					}
				}
			}
			else
			{
				*uParam3++;
			}
		}
	}
	else if (*uParam3 == 303)
	{
		if (!func_150())
		{
			if (SYSTEM::TIMERB() > SYSTEM::ROUND(((uParam0[0 /*15*/])->f_13 * 1000f)))
			{
				*uParam3++;
			}
		}
	}
	else if (*uParam3 == 304)
	{
		if ((unk_0x5AEB5DDFFAD43CA5(iParam5) || !unk_0x47DBF174A0CB9D55(iParam5, 0)) && (unk_0x5AEB5DDFFAD43CA5(iParam6) || !unk_0x47DBF174A0CB9D55(iParam6, 0)))
		{
			if (uParam0->f_127 && !unk_0x5AEB5DDFFAD43CA5(iParam6))
			{
				func_151(uParam0[2 /*15*/]);
			}
			else
			{
				func_151(uParam0[1 /*15*/]);
			}
			*uParam3++;
		}
	}
	else if (*uParam3 == 305)
	{
		if (func_154(unk_0x9B0761B4C3EB8BC7()) && func_154(iParam5))
		{
			iVar22 = func_127();
			iVar23 = func_124(iParam5);
			iVar24 = 50;
			if (iVar22 != 145 && iVar23 != 145)
			{
				iVar24 = func_123(iVar22, iVar23);
			}
			if (func_286(iParam5))
			{
				iVar25 = 65;
			}
			else if (iVar24 < 20)
			{
				iVar25 = 64;
			}
			else if (iVar24 < 40)
			{
				iVar25 = 63;
			}
			else
			{
				iVar25 = 62;
			}
			if (func_128(unk_0x9B0761B4C3EB8BC7(), iParam5, iVar25, uParam2))
			{
				*uParam3++;
			}
		}
		else
		{
			*uParam3++;
		}
	}
	else if (*uParam3 == 306)
	{
		if (!func_150())
		{
			if (uParam0->f_127 == 0 && !unk_0x5AEB5DDFFAD43CA5(iParam6))
			{
				func_151(uParam0[2 /*15*/]);
			}
			*uParam3++;
		}
	}
	else if (*uParam3 == 307)
	{
		if (func_154(unk_0x9B0761B4C3EB8BC7()) && func_154(iParam6))
		{
			iVar26 = func_127();
			iVar27 = func_124(iParam6);
			iVar28 = 50;
			if (iVar26 != 145 && iVar27 != 145)
			{
				iVar28 = func_123(iVar26, iVar27);
			}
			if (func_286(iParam6))
			{
				iVar29 = 65;
			}
			else if (iVar28 < 20)
			{
				iVar29 = 64;
			}
			else if (iVar28 < 40)
			{
				iVar29 = 63;
			}
			else
			{
				iVar29 = 62;
			}
			if (func_128(unk_0x9B0761B4C3EB8BC7(), iParam6, iVar29, uParam2))
			{
				*uParam3++;
			}
		}
		else
		{
			*uParam3++;
		}
	}
	else if (*uParam3 == 308)
	{
		if (!func_150())
		{
			*uParam3 = 401;
		}
	}
	else if (*uParam3 == 401)
	{
		if (func_154(unk_0x9B0761B4C3EB8BC7()))
		{
			if (*uParam1 != 1)
			{
				unk_0xE2348E4036041923(unk_0x9B0761B4C3EB8BC7());
			}
		}
		iVar30 = 1;
		iVar31 = 2;
		if (*uParam1 == 3 && unk_0x80FF6C016CDB0FAF(*uParam7, 0))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iParam5))
			{
				Var32 = { unk_0x2E6A35AC161797A7(*uParam7) };
				Var35 = { Var32.f_1, -Var32.x, 0f };
				Var38 = { unk_0x3E4D3CCC220BDFB1(iParam5, 1) - unk_0x3E4D3CCC220BDFB1(*uParam7, 1) };
				if (func_122(Var35, Var38) > 0f)
				{
					iVar30 = 2;
					iVar31 = 1;
				}
			}
			if (unk_0x36FE6D3220816ADA(*uParam7) != iLocal_950)
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iParam5))
				{
					iVar30 = -1;
				}
				else
				{
					iVar30 = iVar31;
					iVar31 = -1;
				}
			}
		}
		if (func_154(iParam5))
		{
			unk_0xE2348E4036041923(iParam5);
			unk_0x9B94F6169B0DAEFD(iParam5);
			if (*uParam1 == 1)
			{
				unk_0x3C1B180EE30D36EF(iParam5, uParam0->f_129, 1f, -1, 0.25f, 0, 1193033728);
			}
			else if (*uParam1 == 3 && unk_0x80FF6C016CDB0FAF(*uParam7, 0))
			{
				unk_0xC584E49FC3559A86(iParam5, *uParam7, 20000, iVar30, 1f, 1, 0);
			}
			else
			{
				unk_0x3C1B180EE30D36EF(iParam5, uParam0->f_119, 1f, -1, 0.25f, 0, 1193033728);
			}
		}
		if (func_154(iParam6))
		{
			unk_0xE2348E4036041923(iParam6);
			unk_0x9B94F6169B0DAEFD(iParam6);
			unk_0x9DC06E2A59C5AEBB(&uVar41);
			unk_0xC67F9BF03C2472AB(0, 500);
			if (*uParam1 == 1)
			{
				unk_0x3C1B180EE30D36EF(0, uParam0->f_129, 1f, -1, 0.25f, 0, 1193033728);
			}
			else if (*uParam1 == 3 && unk_0x80FF6C016CDB0FAF(*uParam7, 0))
			{
				unk_0xC584E49FC3559A86(0, *uParam7, 20000, iVar31, 1f, 1, 0);
			}
			else
			{
				unk_0x3C1B180EE30D36EF(0, uParam0->f_119, 1f, -1, 0.25f, 0, 1193033728);
			}
			unk_0x19F29730874AD6F1(uVar41);
			unk_0x9B6EC2CECE1010EF(iParam6, uVar41);
			unk_0x4F83FEE4454169D4(&uVar41);
		}
		*uParam3++;
	}
	else if (*uParam3 == 402)
	{
		if (SYSTEM::TIMERA() > 500)
		{
			if (*uParam1 != 1)
			{
				func_151(uParam0[3 /*15*/]);
			}
			else
			{
				func_151(uParam0[4 /*15*/]);
			}
			SYSTEM::SETTIMERA(0);
			if (*uParam1 != 1)
			{
				*uParam3++;
			}
			else
			{
				*uParam3 = 501;
			}
		}
	}
	else if (*uParam3 == 403)
	{
		if (uParam0->f_124 > 0.1f)
		{
			if (SYSTEM::TIMERA() > SYSTEM::ROUND((uParam0->f_124 * 1000f)))
			{
				*uParam3 = 900;
			}
		}
		else if (SYSTEM::TIMERA() > 10000)
		{
			if (!unk_0x5B772EFCB84373BE())
			{
				unk_0x1D40553EDD51A1B8(500);
			}
		}
		else if (SYSTEM::TIMERA() > 2500)
		{
			if (*uParam1 != 3)
			{
				if ((unk_0x5AEB5DDFFAD43CA5(iParam5) || !unk_0x910DFF8E55ABB8EC(iParam5, unk_0x9B0761B4C3EB8BC7(), 4f, 4f, 4f, 0, 1, 0)) && (unk_0x5AEB5DDFFAD43CA5(iParam6) || !unk_0x910DFF8E55ABB8EC(iParam6, unk_0x9B0761B4C3EB8BC7(), 4f, 4f, 4f, 0, 1, 0)))
				{
					*uParam3 = 900;
				}
				else if ((!unk_0x5AEB5DDFFAD43CA5(iParam5) && unk_0xC2169C00B643278B(iParam5, uParam0->f_119, 0.5f, 0.5f, 0.5f, 0, 1, 0)) || (!unk_0x5AEB5DDFFAD43CA5(iParam6) && unk_0xC2169C00B643278B(iParam6, uParam0->f_119, 0.5f, 0.5f, 0.5f, 0, 1, 0)))
				{
					*uParam3 = 900;
				}
			}
			else if (!unk_0x80FF6C016CDB0FAF(*uParam7, 0) || !unk_0x910DFF8E55ABB8EC(*uParam7, unk_0x9B0761B4C3EB8BC7(), 15f, 15f, 15f, 0, 1, 0))
			{
				*uParam3 = 900;
			}
			else if (unk_0x80FF6C016CDB0FAF(*uParam7, 0) && unk_0xC2169C00B643278B(*uParam7, uParam0->f_132, 1f, 1f, 1f, 0, 1, 0))
			{
				*uParam3 = 900;
			}
		}
		if (*uParam1 == 3 && unk_0x80FF6C016CDB0FAF(*uParam7, 0))
		{
			if ((unk_0x5AEB5DDFFAD43CA5(iParam5) || unk_0x47DBF174A0CB9D55(iParam5, 0)) && (unk_0x5AEB5DDFFAD43CA5(iParam6) || unk_0x47DBF174A0CB9D55(iParam6, 0)))
			{
				iVar42 = unk_0x10D3F7E169A49C44(*uParam7, -1, 0);
				if (!unk_0x5AEB5DDFFAD43CA5(iVar42))
				{
					if (!func_121(iVar42, -1817882002))
					{
						unk_0x9B94F6169B0DAEFD(iVar42);
						unk_0xDEFE57D3575A1A8A(iVar42, *uParam7, uParam0->f_132, 10f, 0, iLocal_950, 786603, 5f, 5f);
					}
				}
			}
		}
	}
	else if (*uParam3 == 501)
	{
		if (SYSTEM::TIMERA() > 10000)
		{
			SYSTEM::SETTIMERA(0);
			*uParam3++;
		}
		else if ((unk_0x5AEB5DDFFAD43CA5(iParam5) || !unk_0xA38BFCB05DBE439D(iParam5)) && (unk_0x5AEB5DDFFAD43CA5(iParam6) || !unk_0xA38BFCB05DBE439D(iParam6)))
		{
			SYSTEM::SETTIMERA(0);
			*uParam3++;
		}
	}
	else if (*uParam3 == 502)
	{
		if (SYSTEM::TIMERA() > SYSTEM::ROUND((uParam0->f_125 * 1000f)))
		{
			iVar43 = 0;
			if (!unk_0x5AEB5DDFFAD43CA5(iParam5))
			{
				unk_0x13A4BD6CC31F7B8F(iParam5, *uParam7, -1);
				if (!unk_0x5AEB5DDFFAD43CA5(iParam6))
				{
					unk_0x13A4BD6CC31F7B8F(iParam6, *uParam7, 0);
				}
				iVar43 = iParam5;
			}
			else if (!unk_0x5AEB5DDFFAD43CA5(iParam6))
			{
				unk_0x13A4BD6CC31F7B8F(iParam6, *uParam7, -1);
				iVar43 = iParam6;
			}
			if (!unk_0x5AEB5DDFFAD43CA5(iVar43))
			{
				unk_0x9B94F6169B0DAEFD(iVar43);
				unk_0x9DC06E2A59C5AEBB(&uVar44);
				unk_0xC67F9BF03C2472AB(0, 750);
				iVar45 = 786469 | 512;
				unk_0xDEFE57D3575A1A8A(0, *uParam7, uParam0->f_132, 10f, 0, unk_0x36FE6D3220816ADA(*uParam7), iVar45, 5f, 5f);
				unk_0x19F29730874AD6F1(uVar44);
				unk_0x9B6EC2CECE1010EF(iVar43, uVar44);
				unk_0x4F83FEE4454169D4(&uVar44);
			}
			SYSTEM::SETTIMERA(0);
			func_151(uParam0[5 /*15*/]);
			if (func_154(unk_0x9B0761B4C3EB8BC7()))
			{
				func_153(unk_0x9B0761B4C3EB8BC7(), uParam0->f_105);
			}
			*uParam3++;
		}
	}
	else if (*uParam3 == 503)
	{
		if (uParam0->f_126 > 0.1f)
		{
			if (SYSTEM::TIMERA() > SYSTEM::ROUND((uParam0->f_126 * 1000f)))
			{
				*uParam3 = 900;
			}
		}
		else if (SYSTEM::TIMERA() > 20000)
		{
			*uParam3 = 900;
		}
		else if (!unk_0x80FF6C016CDB0FAF(*uParam7, 0) || !unk_0xA38BFCB05DBE439D(*uParam7))
		{
			SYSTEM::SETTIMERA(0);
			*uParam3++;
		}
	}
	else if (*uParam3 == 504)
	{
		if (SYSTEM::TIMERA() > 2000)
		{
			*uParam3 = 900;
		}
	}
	else if (*uParam3 == 900)
	{
		if (*uParam1 != 1)
		{
			func_120(&(uParam0->f_91), uParam0->f_97);
		}
		else
		{
			func_120(&(uParam0->f_98), uParam0->f_104);
		}
		func_159();
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			unk_0x9B94F6169B0DAEFD(unk_0x9B0761B4C3EB8BC7());
			unk_0xE2348E4036041923(unk_0x9B0761B4C3EB8BC7());
		}
		if (unk_0xAE06B9E39EBDE049(*uParam7) && !unk_0xA59F96B50B97E63C(*uParam7, 0))
		{
			if (func_154(iParam5) && func_116(*uParam7, iParam5))
			{
				unk_0x5DC21979EC6C531F(*uParam7, 2);
			}
			if (func_154(Local_49.f_109.f_7) && func_116(*uParam7, iParam6))
			{
				unk_0x5DC21979EC6C531F(*uParam7, 2);
			}
		}
		if (func_154(iParam5))
		{
			iVar46 = func_124(iParam5);
			if (func_67(iVar46))
			{
				if ((unk_0x80FF6C016CDB0FAF(*uParam7, 0) && unk_0xE0B3BC41DDA88DF0(iParam5, *uParam7, 0)) && unk_0x10D3F7E169A49C44(*uParam7, -1, 0) == iParam5)
				{
					unk_0x03D382CB0B44E2FC(*uParam7, uParam0->f_140[2 /*3*/], 1, 0, 0, 1);
					unk_0xE922BAA80E8F9324(*uParam7, uParam0->f_150[2]);
					unk_0xB11D151E210D4FAC(*uParam7, 1084227584);
				}
				else
				{
					unk_0x03D382CB0B44E2FC(iParam5, uParam0->f_140[0 /*3*/] - Vector(1f, 0f, 0f), 1, 0, 0, 1);
					unk_0xE922BAA80E8F9324(iParam5, uParam0->f_150[0]);
				}
				func_91(iParam5, 0);
				func_84(iParam5, &(Global_98359[iVar46 /*98*/]), &(Global_98662[iVar46 /*3*/]), &(Global_98672[iVar46]), &(Global_98654[iVar46]), &(Global_4271317[iVar46]));
				Global_111858.f_18529[iVar46] = 318;
				if (Global_98654[iVar46] == 1)
				{
					Global_98654[iVar46] = 0;
				}
			}
			unk_0x586DDC617E714637(&iParam5);
		}
		if (func_154(iParam6))
		{
			iVar47 = func_124(iParam6);
			if (func_67(iVar47))
			{
				if ((unk_0x80FF6C016CDB0FAF(*uParam7, 0) && unk_0xE0B3BC41DDA88DF0(iParam6, *uParam7, 0)) && unk_0x10D3F7E169A49C44(*uParam7, -1, 0) == iParam6)
				{
					unk_0x03D382CB0B44E2FC(*uParam7, uParam0->f_140[2 /*3*/], 1, 0, 0, 1);
					unk_0xE922BAA80E8F9324(*uParam7, uParam0->f_150[2]);
					unk_0xB11D151E210D4FAC(*uParam7, 1084227584);
				}
				else
				{
					unk_0x03D382CB0B44E2FC(iParam6, uParam0->f_140[1 /*3*/] - Vector(1f, 0f, 0f), 1, 0, 0, 1);
					unk_0xE922BAA80E8F9324(iParam6, uParam0->f_150[1]);
				}
				func_91(iParam6, 0);
				func_84(iParam6, &(Global_98359[iVar47 /*98*/]), &(Global_98662[iVar47 /*3*/]), &(Global_98672[iVar47]), &(Global_98654[iVar47]), &(Global_4271317[iVar47]));
				Global_111858.f_18529[iVar47] = 318;
				if (Global_98654[iVar47] == 1)
				{
					Global_98654[iVar47] = 0;
				}
			}
			unk_0x586DDC617E714637(&iParam6);
		}
		if (unk_0xAE06B9E39EBDE049(*uParam7))
		{
			if (*uParam1 != 3)
			{
				if (*uParam1 == 1)
				{
					unk_0x03A2522C845CFAC6(uParam7);
				}
				else
				{
					unk_0xE730EAF558C97567(uParam7);
				}
			}
			else
			{
				if (!unk_0xA59F96B50B97E63C(*uParam7, 0))
				{
					iVar48 = unk_0x10D3F7E169A49C44(*uParam7, -1, 0);
					if (unk_0xAE06B9E39EBDE049(iVar48))
					{
						unk_0x586DDC617E714637(&iVar48);
					}
				}
				unk_0x03A2522C845CFAC6(uParam7);
			}
		}
		unk_0x74528AC0906CBABE(iLocal_950);
		unk_0x74528AC0906CBABE(iLocal_949);
		*uParam3++;
	}
	else if (*uParam3 == 901)
	{
		if (unk_0x03DB5C6AABF8DA46() && unk_0xA860C15A1C027CBB() == 4)
		{
			unk_0x3ED9330214992278(false, 0, 3000, 1, 0, 0);
		}
		else
		{
			unk_0x47012CDD5C524D7B(0, 0, 3, 0);
		}
		if (unk_0x40397A9A17EEC1C5(uLocal_951[0]))
		{
			unk_0xB8B0F7C8C1548C5B(uLocal_951[0], 0);
		}
		if (unk_0x40397A9A17EEC1C5(uLocal_951[1]))
		{
			unk_0xB8B0F7C8C1548C5B(uLocal_951[1], 0);
		}
		if (func_154(unk_0x9B0761B4C3EB8BC7()))
		{
			unk_0x44225B42FE388400(unk_0x9B0761B4C3EB8BC7(), 0);
			unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 240, false);
		}
		Var49 = { uParam0->f_109 - Vector(50f, 150f, 150f) };
		Var52 = { uParam0->f_109 + Vector(50f, 150f, 150f) };
		unk_0xDC1D6FC16DAFCB1B(Var49, Var52, 0);
		unk_0xC336C6497DDA81B4(Var49, Var52, 1);
		if (unk_0x03DB5C6AABF8DA46() || unk_0x5DA78AD6801A0523())
		{
			unk_0xFD45D90342D2A0CD(500);
		}
		func_75(0, 0, 1, 1);
		return 1;
	}
	return 0;
}

void func_75(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x2639A2323BEA8CC6();
	unk_0xD28B53FDA67841A1(iVar0, 0);
	unk_0xDDEDC06C88DA4E04(iVar0, bParam3, 0);
	func_77(0, 1, 0, 0, 0, 0, 0);
	if (iParam2 == 1)
	{
		unk_0x8CFF639CEFF5CF16(1);
		unk_0x644F1D0C5427A242(1);
	}
	unk_0xD289B55B6AADBA10(1);
	if (iParam0 == 1)
	{
		unk_0xD50CC9B03AAD56FF(0, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_43 != 0 && iLocal_43 != joaat("object")) && iLocal_43 != joaat("gadget_parachute"))
		{
			if (func_76(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0x15D88F65956DC2F6(unk_0x9B0761B4C3EB8BC7(), iLocal_43, 0))
				{
					unk_0x69C71C91F56D82B9(unk_0x9B0761B4C3EB8BC7(), iLocal_43, 0);
				}
			}
		}
	}
	if (func_154(unk_0x9B0761B4C3EB8BC7()))
	{
		unk_0x912105796D275F9C(unk_0x9B0761B4C3EB8BC7(), 0, 0);
	}
}

int func_76(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (!unk_0xA59F96B50B97E63C(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_77(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x967251943AD606D5(unk_0x460153A63B9477BC(), 0);
		unk_0xAF3D0236D181BE08(unk_0x460153A63B9477BC(), 1);
		unk_0x23F7D177F71818C3(unk_0x460153A63B9477BC(), 1);
		func_83(1);
		unk_0x86529CF5C6F9D6AE();
		unk_0x6D3823E5CADC313B();
		if (Global_19681.f_1 > 3 && !bParam6)
		{
			if (unk_0x6B12213471F330A3())
			{
				unk_0xBE4122AC23440E7D(0);
			}
			if (!func_82())
			{
				Global_19681.f_1 = 3;
			}
			Global_21005 = 5;
		}
		func_81(1, iParam3, iParam2, 0);
		Global_61723 = 1;
		Global_74033 = 1;
		Global_76831 = 1;
	}
	else
	{
		func_83(0);
		unk_0x51C14866CB8A57BF();
		Global_61723 = 0;
		if (bParam1)
		{
			unk_0x86A985A804621EB7();
		}
		unk_0xAF3D0236D181BE08(unk_0x460153A63B9477BC(), 0);
		unk_0x23F7D177F71818C3(unk_0x460153A63B9477BC(), 0);
		func_81(0, iParam3, iParam2, 0);
		if (unk_0x25DDB354A40FFCDB())
		{
			if (((((!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && !func_79(unk_0x460153A63B9477BC())) && !func_19(unk_0x460153A63B9477BC(), 0)) && !func_78()) && !bParam4) && !bParam5)
			{
				unk_0x0312E5501F93E5AB(unk_0x9B0761B4C3EB8BC7(), 0);
			}
		}
		else if (((!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && !func_79(unk_0x460153A63B9477BC())) && !bParam4) && !bParam5)
		{
			unk_0x0312E5501F93E5AB(unk_0x9B0761B4C3EB8BC7(), 0);
		}
		Global_76831 = 0;
	}
}

bool func_78()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_18, 14);
}

int func_79(int iParam0)
{
	if (func_19(iParam0, 0))
	{
		return 1;
	}
	if (func_80())
	{
		if (iParam0 == unk_0x460153A63B9477BC())
		{
			return 1;
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_80()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

int func_81(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xF8EDFF98A9C94C74())
	{
		if (unk_0x93914DE00496FC78() != iParam0 && uParam2)
		{
			unk_0x6D883C27212BF370(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_82()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_83(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xBE20AB8238688965(&Global_7551, 13);
	}
	else
	{
		unk_0xD2459066EA58CE43(&Global_7551, 13);
	}
}

void func_84(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	
	iVar0 = 0;
	iVar1 = 0;
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (!unk_0xA59F96B50B97E63C(iParam0, 0))
		{
			if (unk_0x47DBF174A0CB9D55(iParam0, 0))
			{
				iVar1 = unk_0xA5D5B1042E8F47BD(iParam0, 0);
				*uParam4 = 2;
			}
			else
			{
				iVar2 = func_38(iParam0);
				if (!unk_0xA59F96B50B97E63C(Global_98658[iVar2], 0))
				{
					if (unk_0xB064AF9925F5537B(Global_98658[iVar2], -1, 0))
					{
						Var3 = { unk_0x3E4D3CCC220BDFB1(iParam0, 1) };
						Var6 = { unk_0x3E4D3CCC220BDFB1(Global_98658[iVar2], 1) };
						if (unk_0x36FE6D3220816ADA(Global_98658[iVar2]) == joaat("luxor2"))
						{
							if (SYSTEM::VDIST(Var3, Var6) < 10f)
							{
								*uParam4 = 2;
								iVar1 = Global_98658[iVar2];
								iVar0 = 1;
							}
						}
					}
				}
			}
		}
	}
	func_85(iParam0, iVar1, uParam1, uParam2, uParam3, uParam4, uParam5, iVar0);
}

void func_85(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	int iVar8;
	int iVar9;
	int iVar10;
	
	uParam2->f_97 = 0;
	iVar0 = 145;
	if (!unk_0xA59F96B50B97E63C(iParam0, 0) && !unk_0xA59F96B50B97E63C(iParam1, 0))
	{
		iVar0 = func_38(iParam0);
		if (iVar0 > 3)
		{
			if (unk_0x25DDB354A40FFCDB())
			{
			}
			return;
		}
		if (unk_0x871819940BD2E434(iParam1, "GetawayVehicleValid"))
		{
			if (unk_0x84E72BB19D4FDE12(iParam1, "GetawayVehicleValid"))
			{
				if ((Global_111858.f_9081.f_99.f_58[45] || Global_111858.f_9081.f_99.f_58[12]) || Global_111858.f_9081.f_99.f_58[34])
				{
					*uParam5 = 0;
					Global_98658[iVar0] = 0;
					return;
				}
			}
		}
		if (unk_0xE0B3BC41DDA88DF0(iParam0, iParam1, 0) || iParam7)
		{
			*uParam5 = 2;
			Global_98658[iVar0] = iParam1;
		}
		else if (unk_0x47DBF174A0CB9D55(iParam0, 0))
		{
			iParam1 = unk_0xA5D5B1042E8F47BD(iParam0, 0);
			*uParam5 = 2;
			Global_98658[iVar0] = iParam1;
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 68)
			{
				if (iParam1 == Global_75654.f_139[iVar1])
				{
					*uParam5 = 0;
					Global_98658[iVar0] = 0;
					return;
				}
				iVar1++;
			}
			if (!unk_0xA59F96B50B97E63C(Global_98658[iVar0], 0))
			{
				if (!func_89(Global_98658[iVar0], iVar0, 0) || unk_0xE0B3BC41DDA88DF0(iParam0, Global_98658[iVar0], 0))
				{
					Var2 = { unk_0x3E4D3CCC220BDFB1(iParam0, 1) };
					Var5 = { unk_0x3E4D3CCC220BDFB1(Global_98658[iVar0], 1) };
					if (func_88(iParam0, Global_98658[iVar0], 0))
					{
						if (SYSTEM::VDIST2(Var2, Var5) < 22500f)
						{
							*uParam3 = { Var5 };
							*uParam4 = unk_0xEF7858F25585F853(Global_98658[iVar0]);
							*uParam5 = 1;
							Global_98658[iVar0] = iParam1;
							if (SYSTEM::VDIST2(Var2, Var5) < (1.5f * 1.5f))
							{
							}
						}
					}
				}
				else
				{
					*uParam5 = 0;
					Global_98658[iVar0] = 0;
				}
			}
		}
	}
	if (unk_0xAE06B9E39EBDE049(iParam1))
	{
		*uParam2 = unk_0x36FE6D3220816ADA(iParam1);
		if (unk_0xFF88B5221E8464D2(iParam1, &iVar9))
		{
			uParam2->f_1 = unk_0x36FE6D3220816ADA(iVar9);
		}
		uParam2->f_2 = unk_0x6FFF09CC7258818C(iParam1);
		uParam2->f_3 = unk_0x4F5F2FB7AE0EB7AB(iParam1);
		uParam2->f_4 = unk_0x471646C50694D676(iParam1);
		if (uParam2->f_4 > -1)
		{
			uParam2->f_9 = 1;
			uParam2->f_5 = -1;
			uParam2->f_6 = -1;
		}
		else
		{
			uParam2->f_9 = 0;
			unk_0x255499E0D27A1780(iParam1, &(uParam2->f_5), &(uParam2->f_6));
		}
		if (!unk_0x5874D60325749F00(*uParam2))
		{
			uParam2->f_10 = 1;
			unk_0x7E545979AF9FCA10(iParam1, &(uParam2->f_7), &(uParam2->f_8));
		}
		else
		{
			uParam2->f_10 = 0;
			uParam2->f_7 = -1;
			uParam2->f_8 = -1;
		}
		StringCopy(&(uParam2->f_27), unk_0x6984AA4EC2FF9734(iParam1), 16);
		uParam2->f_26 = unk_0x999BFF5D72C9701A(iParam1);
		uParam2->f_88 = unk_0x5EF4A66EF7630445(iParam1);
		unk_0xA681FAA57125DB66(iParam1, &(uParam2->f_84), &(uParam2->f_85), &(uParam2->f_86));
		uParam2->f_87 = unk_0xA3DDFC0A00C22ED3(iParam1);
		unk_0xEC53ED0C29BA8483(iParam1, &(uParam2->f_93), &(uParam2->f_94), &(uParam2->f_95));
		if (unk_0x8CC64DFDB61877EA(iParam1, 2))
		{
			unk_0xBE20AB8238688965(&(uParam2->f_92), 28);
		}
		else
		{
			unk_0xD2459066EA58CE43(&(uParam2->f_92), 28);
		}
		if (unk_0x8CC64DFDB61877EA(iParam1, 3))
		{
			unk_0xBE20AB8238688965(&(uParam2->f_92), 29);
		}
		else
		{
			unk_0xD2459066EA58CE43(&(uParam2->f_92), 29);
		}
		if (unk_0x8CC64DFDB61877EA(iParam1, 0))
		{
			unk_0xBE20AB8238688965(&(uParam2->f_92), 30);
		}
		else
		{
			unk_0xD2459066EA58CE43(&(uParam2->f_92), 30);
		}
		if (unk_0x8CC64DFDB61877EA(iParam1, 1))
		{
			unk_0xBE20AB8238688965(&(uParam2->f_92), 31);
		}
		else
		{
			unk_0xD2459066EA58CE43(&(uParam2->f_92), 31);
		}
		uParam2->f_89 = unk_0x16628A9DDE9875CC(iParam1);
		uParam2->f_90 = unk_0x74BE6BA308A7B62F(iParam1);
		iVar8 = 0;
		while (iVar8 < 12)
		{
			uParam2->f_11[iVar8] = unk_0xAACD889100BCBCFA(iParam1, iVar8 + 1);
			iVar8++;
		}
		if (unk_0xD501F7099396F726(iParam1, 0))
		{
			iVar10 = unk_0x4B3B9AC15296615C(iParam1);
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
		if (iParam0 == unk_0x9B0761B4C3EB8BC7())
		{
			uParam2->f_25 = unk_0x9301B13EC408DE79();
		}
		func_87(&iParam1, &(uParam2->f_31), &(uParam2->f_81));
		uParam2->f_96 = unk_0xA474399B1832D329(iParam1);
		uParam2->f_97 = func_86(iParam1);
		*uParam6 = -1;
		switch (iVar0)
		{
			case 0:
				if (Global_111858.f_32745.f_69[0 /*78*/].f_66 == unk_0x36FE6D3220816ADA(iParam1))
				{
					*uParam6 = 12;
				}
				break;
			
			case 1:
				if (Global_111858.f_32745.f_69[1 /*78*/].f_66 == unk_0x36FE6D3220816ADA(iParam1))
				{
					*uParam6 = 13;
				}
				break;
			
			case 2:
				if (Global_111858.f_32745.f_69[2 /*78*/].f_66 == unk_0x36FE6D3220816ADA(iParam1))
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

int func_86(int iParam0)
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(iParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xAE06B9E39EBDE049(Global_96286[iVar0]) && unk_0x80FF6C016CDB0FAF(Global_96286[iVar0], 0))
			{
				if (Global_96286[iVar0] == iParam0 && unk_0x36FE6D3220816ADA(Global_96286[iVar0]) == unk_0x36FE6D3220816ADA(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_87(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x80FF6C016CDB0FAF(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xC71761E30ACCF098(*iParam0) == 0)
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
			if (unk_0xC59714C8D4D5117D(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0xC59714C8D4D5117D(*iParam0, iVar1))
			{
				switch (unk_0x0523E2B914021FFF(*iParam0))
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
			(*uParam1)[iVar0] = unk_0x7F8B14CBFB9813E5(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x9CE7070F0EBF111F(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x9CE7070F0EBF111F(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_88(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (unk_0xE0B3BC41DDA88DF0(iParam0, iParam1, iParam2))
	{
		iVar0 = unk_0x36FE6D3220816ADA(iParam1);
		if (unk_0x5874D60325749F00(iVar0) || (iVar0 == joaat("submersible") || iVar0 == joaat("submersible2")))
		{
			if (unk_0xE72C9284B5143451(iParam1))
			{
				return 0;
			}
			return 1;
		}
		if ((unk_0xF9C3E2B9AA9E2294(iVar0) || unk_0x442D6659150AF4B3(iVar0)) || iVar0 == joaat("blimp"))
		{
			if (unk_0xA16974805191D19C(iParam1))
			{
				return 0;
			}
			return 1;
		}
		return 1;
	}
	return 0;
}

int func_89(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xAE06B9E39EBDE049(iParam0) || !unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_90(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xCE990E643CD9D0E5(Global_111858.f_7225[iVar9], 0))
		{
			if (unk_0x1362F9BE8812B12C(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_90(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_91(int iParam0, bool bParam1)
{
	func_104(iParam0);
	func_97(iParam0, bParam1);
	func_96(iParam0);
	func_95(iParam0);
	func_94(iParam0);
	func_93(iParam0);
	func_92(iParam0);
}

void func_92(int iParam0)
{
	int iVar0;
	
	iVar0 = func_38(iParam0);
	if (func_67(iVar0) && !unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (iParam0 == unk_0x9B0761B4C3EB8BC7())
		{
			Global_111858.f_2359.f_539.f_2328[iVar0] = unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC());
		}
	}
}

void func_93(int iParam0)
{
	int iVar0;
	
	iVar0 = func_38(iParam0);
	if (func_67(iVar0) && !unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		Global_111858.f_2359.f_539.f_2318[iVar0 /*3*/] = { unk_0x97C0B1E5FCD8E08A(iParam0) };
	}
}

void func_94(int iParam0)
{
	int iVar0;
	
	iVar0 = func_38(iParam0);
	if (func_67(iVar0) && !unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (unk_0x9CC4D06F5338CA6B() && unk_0xEE67CF13DD662F51() != 3)
		{
			if (unk_0x69222D599BA78994() == 8)
			{
				return;
			}
		}
		Global_111858.f_2359.f_539.f_2300[iVar0 /*3*/] = { unk_0x3E4D3CCC220BDFB1(iParam0, 1) };
		Global_111858.f_2359.f_539.f_2310[iVar0] = unk_0xEF7858F25585F853(iParam0);
		Global_111858.f_2359.f_539.f_2314[iVar0] = unk_0x3608BB1FB97A8C88(iParam0);
		if (Global_111858.f_2359.f_539.f_2300[iVar0 /*3*/] >= 8000f)
		{
			Global_111858.f_2359.f_539.f_2300[iVar0 /*3*/] = 7500f;
		}
		else if (Global_111858.f_2359.f_539.f_2300[iVar0 /*3*/] <= -8000f)
		{
			Global_111858.f_2359.f_539.f_2300[iVar0 /*3*/] = -7500f;
		}
		if (Global_111858.f_2359.f_539.f_2300[iVar0 /*3*/].f_1 >= 8000f)
		{
			Global_111858.f_2359.f_539.f_2300[iVar0 /*3*/].f_1 = 7500f;
		}
		else if (Global_111858.f_2359.f_539.f_2300[iVar0 /*3*/].f_1 <= -8000f)
		{
			Global_111858.f_2359.f_539.f_2300[iVar0 /*3*/].f_1 = -7500f;
		}
		if (Global_111858.f_2359.f_539.f_2300[iVar0 /*3*/].f_2 >= 2500f)
		{
			Global_111858.f_2359.f_539.f_2300[iVar0 /*3*/].f_2 = 2000f;
		}
	}
}

void func_95(int iParam0)
{
	int iVar0;
	
	iVar0 = func_38(iParam0);
	if (func_67(iVar0) && !unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		Global_111858.f_2359.f_539.f_294[iVar0] = unk_0x90F6D247913C41F9(iParam0);
	}
}

void func_96(int iParam0)
{
	int iVar0;
	
	iVar0 = func_38(iParam0);
	if (func_67(iVar0) && !unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		Global_111858.f_2359.f_539.f_290[iVar0] = (((SYSTEM::TO_FLOAT(unk_0x4F5F2FB7AE0EB7AB(iParam0)) - 100f) / (SYSTEM::TO_FLOAT(unk_0xB4BD22A5188A2545(iParam0)) - 100f)) * 100f);
	}
}

void func_97(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_38(iParam0);
	if (func_67(iVar0) && !unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (iParam0 == unk_0x9B0761B4C3EB8BC7())
		{
			func_98(iParam0, &(Global_111858.f_2359.f_539.f_298[iVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_111858.f_2359.f_539.f_1730[iVar2 /*4*/][iVar0] = unk_0x74D9DA32014F46E1(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x6229CCADB7BCDADA();
					if (Global_111858.f_2359.f_539.f_1730[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_111858.f_2359.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x80A60743EEF71865(unk_0x460153A63B9477BC(), &iVar3);
			if (iVar0 == 0)
			{
				STAT_SET_INT(joaat("SP0_PARACHUTE_CURRENT_TINT"), iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				STAT_SET_INT(joaat("SP1_PARACHUTE_CURRENT_TINT"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				STAT_SET_INT(joaat("SP2_PARACHUTE_CURRENT_TINT"), iVar3, 1);
			}
		}
	}
}

void func_98(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9;
	int iVar10;
	struct<2> Var11;
	struct<4> Var50;
	int iVar72;
	int iVar73;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_103(iVar0);
			if (iVar3 != 0)
			{
				Var4 = unk_0x285D770154CF7612(iParam0, func_103(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x35DEEA1DC27CF0A2(iParam0, Var4);
					if (Var4 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0xC524D460B9FE4A6A(iParam0, Var4);
					Var4.f_4 = unk_0xE5457310A14F8FFC(iParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!unk_0x0EBD989162AEAFA1(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_101(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0x0BCEF4D1482DACD2(iParam0, Var4, iVar2))
						{
							unk_0xBE20AB8238688965(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_101(Var4, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar10 = unk_0x705B1F36F9880DD4();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((unk_0xC517E2708E06CD75(iVar9, &Var11) && !func_100(Var11.f_1)) && iVar72 < 51)
			{
				if (!unk_0x14AC70FD8926649E(Var11))
				{
					Var4 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x35DEEA1DC27CF0A2(iParam0, Var4);
					if (unk_0x15D88F65956DC2F6(iParam0, Var4, 0))
					{
						Var4.f_3 = unk_0xC524D460B9FE4A6A(iParam0, Var4);
						Var4.f_4 = unk_0xE5457310A14F8FFC(iParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x0EBD989162AEAFA1(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72 /*5*/].f_1 = Var4.f_1;
					iVar73 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0xE57085BC4B6B2D60(iVar9))
					{
						if (unk_0xCCE94EFAFE5A3D71(iVar9, iVar1, &Var50))
						{
							if (!func_99(Var50.f_3))
							{
								if (unk_0x0BCEF4D1482DACD2(iParam0, Var4, Var50.f_3))
								{
									unk_0xBE20AB8238688965(&(Var4.f_2), iVar73);
								}
								iVar73++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!unk_0x15D88F65956DC2F6(iParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72 /*5*/] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

int func_99(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
			return 1;
			break;
	}
	return 0;
}

int func_100(int iParam0)
{
	if (unk_0x25DDB354A40FFCDB())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
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
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case joaat("WEAPON_AUTOSHOTGUN"):
			case joaat("WEAPON_MINISMG"):
			case joaat("WEAPON_COMPACTLAUNCHER"):
			case joaat("WEAPON_BATTLEAXE"):
			case joaat("WEAPON_PIPEBOMB"):
			case joaat("WEAPON_POOLCUE"):
			case joaat("WEAPON_WRENCH"):
			case joaat("WEAPON_DOUBLEACTION"):
			case joaat("WEAPON_RAYCARBINE"):
			case joaat("WEAPON_RAYMINIGUN"):
			case joaat("WEAPON_RAYPISTOL"):
			case joaat("WEAPON_NAVYREVOLVER"):
			case joaat("WEAPON_CERAMICPISTOL"):
			case 1470379660:
			case -1658906650:
			case 94989220:
				return 1;
				break;
			}
	}
	return 0;
}

int func_101(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var43;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("WEAPON_MINISMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_02");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_102(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x4C70B0C3D1E97438(iVar1))
					{
						if (unk_0xF4545E3991F419DA(iVar1, iVar2, &Var43))
						{
							if (!func_99(Var43.f_3))
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

int func_102(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x5D2674C71F97E2ED();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x53C7411361231D87(iVar0, uParam1))
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

int func_103(int iParam0)
{
	int iVar0;
	
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

void func_104(int iParam0)
{
	int iVar0;
	
	iVar0 = func_38(iParam0);
	if (func_67(iVar0) && !unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		Global_111858.f_2359.f_539.f_2296[iVar0] = func_105();
	}
}

int func_105()
{
	var uVar0;
	
	func_115(&uVar0, unk_0x1D3A3697182AD8B3());
	func_114(&uVar0, unk_0x81F2E25F8C019191());
	func_113(&uVar0, unk_0x1F596C965B00E290());
	func_108(&uVar0, unk_0x371CFD525753F70C());
	func_107(&uVar0, unk_0xF225116F449A5CC6());
	func_106(&uVar0, unk_0x2E48CFA70ABFC06A());
	return uVar0;
}

void func_106(int iParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_107(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 15);
	*iParam0 = (*iParam0 || iParam1);
}

void func_108(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_112(*iParam0);
	iVar1 = func_110(*iParam0);
	if (iParam1 < 1 || iParam1 > func_109(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 496);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_109(int iParam0, int iParam1)
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

int func_110(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_111(unk_0xCE990E643CD9D0E5(iParam0, 31), -1, 1)) + 2011;
}

int func_111(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_112(int iParam0)
{
	return iParam0 & 15;
}

void func_113(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 15872);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_114(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 1032192);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_115(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 66060288);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_116(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<82> Var3;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (!func_119(iParam0, 1))
		{
			iVar0 = unk_0x36FE6D3220816ADA(iParam0);
			iVar1 = func_124(iParam1);
			bVar2 = func_67(iVar1);
			if (iVar1 < func_70())
			{
				Var3.f_11 = 12;
				Var3.f_31 = 49;
				Var3.f_81 = 2;
				if (bVar2)
				{
					func_118(iVar1, &Var3, 1);
				}
				else
				{
					func_117(iVar1, &Var3, 1);
				}
				if (Var3 == iVar0)
				{
					if ((unk_0x97AFEF6099069369(Var3) || unk_0x72B9CC2155AEDF58(Var3)) || unk_0xF005CCA4263DF67F(unk_0x6984AA4EC2FF9734(iParam0), &(Var3.f_27)))
					{
						return 1;
					}
				}
				if (bVar2)
				{
					func_118(iVar1, &Var3, 2);
				}
				else
				{
					func_117(iVar1, &Var3, 2);
				}
				if (Var3 == iVar0)
				{
					if ((unk_0x97AFEF6099069369(Var3) || unk_0x72B9CC2155AEDF58(Var3)) || unk_0xF005CCA4263DF67F(unk_0x6984AA4EC2FF9734(iParam0), &(Var3.f_27)))
					{
						return 1;
					}
				}
				if (bVar2)
				{
					func_118(iVar1, &Var3, 3);
				}
				else
				{
					func_117(iVar1, &Var3, 3);
				}
				if (Var3 == iVar0)
				{
					if ((unk_0x97AFEF6099069369(Var3) || unk_0x72B9CC2155AEDF58(Var3)) || unk_0xF005CCA4263DF67F(unk_0x6984AA4EC2FF9734(iParam0), &(Var3.f_27)))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_117(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<98> Var1;
	
	Var1.f_11 = 12;
	Var1.f_31 = 49;
	Var1.f_81 = 2;
	Var1.f_88 = 1;
	Var1.f_84 = 255;
	Var1.f_85 = 255;
	Var1.f_86 = 255;
	Var1.f_3 = 1000;
	Var1.f_1 = 0;
	switch (iParam0)
	{
		case 14:
			if (iParam2 == 1)
			{
				iVar0 = joaat("issi2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("tribike");
			}
			else
			{
				iVar0 = joaat("tribike");
			}
			switch (iVar0)
			{
				case joaat("issi2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 88;
					Var1.f_6 = 7;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "P3RSEUS", 16);
					break;
				
				case joaat("tribike"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 15:
			if (iParam2 == 1)
			{
				iVar0 = joaat("issi2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("sanchez");
			}
			else
			{
				iVar0 = joaat("issi2");
			}
			switch (iVar0)
			{
				case joaat("issi2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 88;
					Var1.f_6 = 7;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "P3RSEUS", 16);
					break;
				
				case joaat("sanchez"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 17:
			if (iParam2 == 1)
			{
				iVar0 = joaat("sentinel2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("faggio2");
			}
			else
			{
				iVar0 = joaat("sentinel2");
			}
			switch (iVar0)
			{
				case joaat("sentinel2"):
					Var1 = iVar0;
					Var1.f_5 = 28;
					Var1.f_6 = 28;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "KRYST4L", 16);
					break;
				
				case joaat("faggio2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 19:
			if (iParam2 == 1)
			{
				iVar0 = joaat("speedo");
			}
			else if (iParam2 == 3)
			{
				iVar0 = joaat("emperor");
			}
			else
			{
				iVar0 = joaat("speedo");
			}
			switch (iVar0)
			{
				case joaat("speedo"):
					Var1 = iVar0;
					Var1.f_4 = 5;
					Var1.f_2 = 10f;
					Var1.f_9 = 1;
					StringCopy(&(Var1.f_27), "LAMAR G", 16);
					break;
				
				case joaat("emperor"):
					Var1 = iVar0;
					Var1.f_2 = 8f;
					Var1.f_5 = 62;
					Var1.f_6 = 21;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_10 = 1;
					StringCopy(&(Var1.f_27), "07KZF345", 16);
					break;
			}
			break;
		
		case 29:
			Var1 = joaat("adder");
			Var1.f_5 = 62;
			Var1.f_6 = 4;
			Var1.f_7 = 68;
			Var1.f_8 = 156;
			Var1.f_10 = 1;
			Var1.f_9 = 0;
			StringCopy(&(Var1.f_27), "N4M4ST3", 16);
			break;
		
		case 30:
			Var1 = joaat("oracle2");
			Var1.f_9 = 1;
			Var1.f_4 = 7;
			StringCopy(&(Var1.f_27), "81TDS937", 16);
			break;
		
		case 18:
		case 20:
		case 21:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 31:
		case 32:
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
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 39:
		case 40:
		case 46:
		case 47:
		case 65:
			if (iParam2 == 1)
			{
				iVar0 = joaat("asterope");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("sanchez");
			}
			else
			{
				iVar0 = joaat("asterope");
			}
			switch (iVar0)
			{
				case joaat("asterope"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
				
				case joaat("sanchez"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		default:
			break;
	}
	*iParam1 = { Var1 };
}

void func_118(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
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
			iVar0 = joaat("tailgater");
			if (Global_111858.f_9081.f_99.f_58[128] && !Global_111858.f_9081.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
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
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_111858.f_9081.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_111858.f_9081.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
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

int func_119(int iParam0, bool bParam1)
{
	if (Global_76833)
	{
		if (unk_0xAE06B9E39EBDE049(iParam0) && (!bParam1 || unk_0x80FF6C016CDB0FAF(iParam0, 0)))
		{
			if (unk_0x871819940BD2E434(iParam0, "Veh_Modded_By_Player"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_120(var uParam0, float fParam1)
{
	if (unk_0x40397A9A17EEC1C5(uLocal_951[0]))
	{
		unk_0xB8B0F7C8C1548C5B(uLocal_951[0], 0);
	}
	if (unk_0x40397A9A17EEC1C5(uLocal_951[1]))
	{
		unk_0xB8B0F7C8C1548C5B(uLocal_951[1], 0);
	}
	uLocal_951[0] = unk_0x68C2E3309DCAD71E("DEFAULT_SCRIPTED_CAMERA", 0);
	if (unk_0x40397A9A17EEC1C5(uLocal_951[0]))
	{
		unk_0x8A3898631CCEC253(uLocal_951[0], *uParam0);
		unk_0xBF92D2A60C7C686E(uLocal_951[0], uParam0->f_3, 2);
		unk_0xD64C2E5B5BA2D347(uLocal_951[0], fParam1);
		unk_0x856549C07003344B(uLocal_951[0], 1);
		unk_0x3ED9330214992278(true, 0, 3000, 1, 0, 0);
		return 1;
	}
	return 0;
}

int func_121(int iParam0, int iParam1)
{
	if (func_154(iParam0))
	{
		if (unk_0x16BC17A8EDC701A2(iParam0, iParam1) == 1 || unk_0x16BC17A8EDC701A2(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

float func_122(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return ((Param0 * Param3) + (Param0.f_1 * Param3.f_1));
}

int func_123(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_68(iParam0);
	iVar1 = func_68(iParam1);
	iVar2 = func_51(iVar0, iVar1);
	return Global_111858.f_18099.f_175[iVar2 /*19*/].f_17;
}

int func_124(int iParam0)
{
	int iVar0;
	
	iVar0 = func_38(iParam0);
	if (iVar0 == 145)
	{
		iVar0 = func_125(iParam0);
	}
	return iVar0;
}

int func_125(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar2 = (func_70() - 1);
		iVar0 = 3;
		while (iVar0 <= iVar2)
		{
			if (func_126(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_126(int iParam0)
{
	if (!func_67(iParam0))
	{
		return func_40(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_127()
{
	func_37();
	return Global_111858.f_2359.f_539.f_4321;
}

int func_128(int iParam0, int iParam1, int iParam2, var uParam3)
{
	char* sVar0;
	char[] cVar4[8];
	int iVar8;
	int iVar9;
	
	iVar8 = func_124(iParam0);
	iVar9 = func_124(iParam1);
	func_146(uParam3, iVar8, iParam0, 1);
	func_146(uParam3, iVar9, iParam1, 1);
	if (func_143(iVar8, iVar9, iParam2, &sVar0, &cVar4))
	{
		if (func_129(uParam3, &sVar0, &cVar4, 4, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_129(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_142(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21012 = 0;
	Global_21014 = 0;
	Global_21019 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 0;
	Global_2621441 = 0;
	return func_130(sParam2, iParam3, 0);
}

int func_130(char* sParam0, int iParam1, bool bParam2)
{
	Global_21006 = 0;
	if (Global_21005 == 0 || Global_21007 == 2)
	{
		if (Global_21005 != 0)
		{
			if (iParam1 > Global_21007)
			{
				if (Global_21012 == 0)
				{
					unk_0xBE4122AC23440E7D(0);
					Global_19681.f_1 = 3;
					Global_21005 = 0;
					Global_21006 = 1;
					Global_21058 = 0;
					Global_21001 = 0;
					Global_21002 = 0;
					Global_21016 = 0;
					Global_21015 = 0;
					Global_19680 = 0;
				}
				else
				{
					func_141();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x6A5CC4A2C9D9ED8D())
		{
			return 0;
		}
		if (func_140(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_139();
		Global_20294 = { Global_20459 };
		Global_21011 = Global_21012;
		Global_21018 = Global_21019;
		Global_2621442 = Global_2621441;
		Global_21020 = { Global_21036 };
		Global_21013 = Global_21014;
		Global_21995 = Global_21996;
		Global_22003 = { Global_22009 };
		Global_21997 = Global_21998;
		Global_21999 = Global_22000;
		Global_22001 = Global_22002;
		Global_20624.f_370 = Global_21994;
		Global_20624.f_368 = Global_21992;
		Global_20624.f_369 = Global_21993;
		Global_21001 = Global_21002;
		if (Global_21011)
		{
			unk_0xD2459066EA58CE43(&Global_7551, 20);
			unk_0xD2459066EA58CE43(&Global_7552, 17);
			unk_0xD2459066EA58CE43(&Global_7553, 0);
			if (bParam2)
			{
				func_138();
				if (Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19681.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19647 == 1)
			{
				return 0;
			}
			if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
			{
				if (unk_0x42A04E707DE50816(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (func_137())
				{
					return 0;
				}
				if (unk_0x7587087519CF4F83(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (unk_0xAACBFCE60AF94F2D(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (unk_0x02D1369035663875(unk_0x9B0761B4C3EB8BC7(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76833)
				{
					if (unk_0xE72C9284B5143451(unk_0x9B0761B4C3EB8BC7()))
					{
						return 0;
					}
					if (unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC()))
					{
						return 0;
					}
					if (unk_0x887D491E579FA61E(unk_0x9B0761B4C3EB8BC7()))
					{
						return 0;
					}
					if (unk_0x4C9EC9A10C274889(unk_0x460153A63B9477BC(), 0))
					{
						return 0;
					}
				}
			}
			if (func_82())
			{
				return 0;
			}
			else
			{
				switch (Global_19681.f_1)
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
				if (unk_0xCE990E643CD9D0E5(Global_7551, 9))
				{
					return 0;
				}
			}
			func_136();
			Global_21015 = bParam2;
		}
		Global_21007 = iParam1;
		StringCopy(&Global_20624, sParam0, 24);
		Global_19871 = 0;
		func_135();
		func_131();
		return 1;
	}
	if (Global_21005 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21007 || iParam1 == Global_21007)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_141();
	}
	return 0;
}

void func_131()
{
	if (!func_132())
	{
		return;
	}
	if (Global_21011)
	{
		MemCopy(&(Global_1703978.f_1), {Global_20624}, 4);
		Global_1703978 = Global_6866;
		Global_1703978.f_6 = Global_21015;
	}
}

int func_132()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (unk_0x460153A63B9477BC() == func_30())
	{
		return 0;
	}
	if (func_133(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xFC559366953F62B3())
	{
		return 0;
	}
	return 1;
}

bool func_133(int iParam0)
{
	return func_134(iParam0, 20);
}

bool func_134(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

void func_135()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19873[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xBE4122AC23440E7D(0);
	Global_21005 = 1;
}

void func_136()
{
	Global_21058 = Global_21057;
	Global_21052 = Global_21053;
	Global_21099 = { Global_21087 };
	Global_21105 = { Global_21093 };
	Global_21060 = Global_21059;
	Global_21129 = { Global_21111 };
	Global_21135 = { Global_21117 };
	Global_21141 = { Global_21123 };
	Global_21147 = { Global_21153 };
	Global_6866 = Global_6867;
	Global_6868 = Global_6869;
	Global_21016 = Global_21017;
	Global_21018 = Global_21019;
	Global_21020 = { Global_21036 };
	Global_21009 = Global_21010;
	Global_22021 = 0;
	Global_21054 = 0;
	Global_21055 = 0;
	unk_0xD2459066EA58CE43(&Global_7552, 16);
}

int func_137()
{
	int iVar0;
	int iVar1;
	
	if (Global_76833)
	{
		iVar0 = 0;
		unk_0x1386E5E658CE3032(unk_0x9B0761B4C3EB8BC7(), &iVar1, 1);
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5BFE1F305D18843B() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (unk_0xD15202C6B03220B8(unk_0x9B0761B4C3EB8BC7(), 78, 1))
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

void func_138()
{
	if (func_292(14))
	{
		if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[0 /*29*/])
			{
				Global_19681 = 0;
			}
			else if (unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[1 /*29*/])
			{
				Global_19681 = 1;
			}
			else if (unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[2 /*29*/])
			{
				Global_19681 = 2;
			}
			else
			{
				Global_19681 = 0;
			}
		}
	}
	else
	{
		Global_19681 = func_127();
		if (Global_19681 == 145)
		{
			Global_19681 = 3;
		}
		if (Global_76833)
		{
			Global_19681 = 3;
		}
		if (Global_19681 > 3)
		{
			Global_19681 = 3;
		}
	}
}

void func_139()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20294[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20294[iVar0 /*10*/].f_1), "", 24);
		Global_20294[iVar0 /*10*/].f_7 = 0;
		Global_20294[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20294.f_161 = -99;
	Global_20294.f_162 = { 0f, 0f, 0f };
}

bool func_140(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377236.f_203[iParam1];
			}
			break;
	}
	return unk_0xCE990E643CD9D0E5(Global_1377236.f_1048, iParam0);
}

void func_141()
{
	unk_0x62B2C9892E3E142D();
	Global_22016 = 0;
	if ((unk_0x6B12213471F330A3() || Global_19681.f_1 == 9) || Global_19680 == 1)
	{
		unk_0xBE4122AC23440E7D(0);
		Global_21005 = 6;
		Global_19681.f_1 = 3;
		return;
	}
	if (unk_0x6A5CC4A2C9D9ED8D())
	{
		unk_0xBE4122AC23440E7D(1);
		Global_21005 = 6;
		return;
	}
}

void func_142(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20459 = { *uParam0 };
	Global_6867 = iParam1;
	StringCopy(&Global_21075, sParam2, 24);
	Global_21994 = iParam5;
	if (iParam3 == 0)
	{
		Global_21992 = 1;
		Global_21990 = 0;
	}
	else
	{
		Global_21992 = 0;
		Global_21990 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21993 = 1;
		Global_21991 = 0;
	}
	else
	{
		Global_21993 = 0;
		Global_21991 = 1;
	}
}

int func_143(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_68(iParam0);
	iVar1 = func_68(iParam1);
	if (iVar0 == 7 || iVar1 == 7)
	{
		return 0;
	}
	*sParam4 = { func_144(iVar0, iVar1, 7, 1) };
	*sParam3 = { *sParam4 };
	StringConCat(sParam3, "AU", 16);
	StringConCat(sParam4, "_", 16);
	switch (iParam2)
	{
		case 0:
			StringConCat(sParam4, "PkOk", 16);
			break;
		
		case 1:
			StringConCat(sParam4, "PkLt", 16);
			break;
		
		case 2:
			StringConCat(sParam4, "PkFt", 16);
			break;
		
		case 3:
			StringConCat(sParam4, "PkFul", 16);
			break;
		
		case 4:
			StringConCat(sParam4, "PkOdd", 16);
			break;
		
		case 5:
			StringConCat(sParam4, "PkUDr", 16);
			break;
		
		case 6:
			StringConCat(sParam4, "GrOk", 16);
			break;
		
		case 7:
			StringConCat(sParam4, "GrIr", 16);
			break;
		
		case 8:
			StringConCat(sParam4, "GrVi", 16);
			break;
		
		case 9:
			StringConCat(sParam4, "GrPl", 16);
			break;
		
		case 10:
			StringConCat(sParam4, "GrUDr", 16);
			break;
		
		case 11:
			StringConCat(sParam4, "AmbH_ok", 16);
			break;
		
		case 12:
			StringConCat(sParam4, "AmbH_rc", 16);
			break;
		
		case 13:
			StringConCat(sParam4, "AmbH_ir", 16);
			break;
		
		case 14:
			StringConCat(sParam4, "AmbB_mi", 16);
			break;
		
		case 15:
			StringConCat(sParam4, "AmbB_ok", 16);
			break;
		
		case 16:
			StringConCat(sParam4, "AmbO_qu", 16);
			break;
		
		case 17:
			StringConCat(sParam4, "AmbO_Y1", 16);
			break;
		
		case 18:
			StringConCat(sParam4, "AmbO_Y2", 16);
			break;
		
		case 19:
			StringConCat(sParam4, "AmbO_N1", 16);
			break;
		
		case 20:
			StringConCat(sParam4, "AmbG_ok", 16);
			break;
		
		case 21:
			StringConCat(sParam4, "AmbG_ir", 16);
			break;
		
		case 22:
			StringConCat(sParam4, "AmbS1", 16);
			break;
		
		case 23:
			StringConCat(sParam4, "AmbS2", 16);
			break;
		
		case 24:
			StringConCat(sParam4, "AmbS3", 16);
			break;
		
		case 25:
			StringConCat(sParam4, "AmbS4_1", 16);
			break;
		
		case 26:
			StringConCat(sParam4, "AmbS4_2", 16);
			break;
		
		case 27:
			StringConCat(sParam4, "AmbS4_3", 16);
			break;
		
		case 28:
			StringConCat(sParam4, "AmbS4_4", 16);
			break;
		
		case 29:
			StringConCat(sParam4, "AmbS_ft", 16);
			break;
		
		case 30:
			StringConCat(sParam4, "AmbT1", 16);
			break;
		
		case 31:
			StringConCat(sParam4, "AmbT1_r", 16);
			break;
		
		case 32:
			StringConCat(sParam4, "AmbT2", 16);
			break;
		
		case 33:
			StringConCat(sParam4, "AmbT3", 16);
			break;
		
		case 34:
			StringConCat(sParam4, "AmbT4", 16);
			break;
		
		case 35:
			StringConCat(sParam4, "AmbP1a", 16);
			break;
		
		case 36:
			StringConCat(sParam4, "AmbP1b", 16);
			break;
		
		case 37:
			StringConCat(sParam4, "AmbP1c", 16);
			break;
		
		case 38:
			StringConCat(sParam4, "AmbP2", 16);
			break;
		
		case 39:
			StringConCat(sParam4, "VDrunk", 16);
			break;
		
		case 40:
			StringConCat(sParam4, "Satis", 16);
			break;
		
		case 41:
			StringConCat(sParam4, "Done", 16);
			break;
		
		case 42:
			StringConCat(sParam4, "ZnStory", 16);
			break;
		
		case 43:
			StringConCat(sParam4, "ZnSquad", 16);
			break;
		
		case 44:
			StringConCat(sParam4, "ZnDrunk", 16);
			break;
		
		case 45:
			StringConCat(sParam4, "ZnCncl", 16);
			break;
		
		case 46:
			StringConCat(sParam4, "ZnCnclD", 16);
			break;
		
		case 47:
			StringConCat(sParam4, "RjTime", 16);
			break;
		
		case 48:
			StringConCat(sParam4, "RjOk", 16);
			break;
		
		case 49:
			StringConCat(sParam4, "RjCrazy", 16);
			break;
		
		case 50:
			StringConCat(sParam4, "RjStuck", 16);
			break;
		
		case 51:
			StringConCat(sParam4, "SqStart", 16);
			break;
		
		case 52:
			StringConCat(sParam4, "SqPass", 16);
			break;
		
		case 53:
			StringConCat(sParam4, "NewH", 16);
			break;
		
		case 54:
			StringConCat(sParam4, "NewC", 16);
			break;
		
		case 55:
			StringConCat(sParam4, "NewT", 16);
			break;
		
		case 56:
			StringConCat(sParam4, "CinMlt", 16);
			break;
		
		case 57:
			StringConCat(sParam4, "CarDam", 16);
			break;
		
		case 58:
			StringConCat(sParam4, "PedDam", 16);
			break;
		
		case 59:
			StringConCat(sParam4, "DrpOp", 16);
			break;
		
		case 60:
			StringConCat(sParam4, "DrpOpDr", 16);
			break;
		
		case 61:
			StringConCat(sParam4, "DrpOpPl", 16);
			break;
		
		case 62:
			StringConCat(sParam4, "DrpA", 16);
			break;
		
		case 63:
			StringConCat(sParam4, "DrpB", 16);
			break;
		
		case 64:
			StringConCat(sParam4, "DrpC", 16);
			break;
		
		case 65:
			StringConCat(sParam4, "DrpDr", 16);
			break;
		
		case 66:
			StringConCat(sParam4, "DrpCar", 16);
			break;
		
		case 67:
			StringConCat(sParam4, "Death", 16);
			break;
		
		default:
			if (iParam2 != 69)
			{
			}
			return 0;
			break;
	}
	return 1;
}

struct<4> func_144(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	
	StringCopy(&Var0, "F", 16);
	if (iParam3 == 0)
	{
		StringConCat(&Var0, "p", 16);
		StringConCat(&Var0, func_145(iParam0), 16);
		StringConCat(&Var0, func_145(iParam1), 16);
	}
	else if (iParam3 == 1)
	{
		StringConCat(&Var0, "a", 16);
		StringConCat(&Var0, func_145(iParam0), 16);
		StringConCat(&Var0, func_145(iParam1), 16);
	}
	else if (iParam3 == 2)
	{
		StringConCat(&Var0, "c", 16);
		if (iParam2 < iParam1)
		{
			iVar4 = iParam1;
			iParam1 = iParam2;
			iParam2 = iVar4;
		}
		if (iParam1 < iParam0)
		{
			iVar5 = iParam0;
			iParam0 = iParam1;
			iParam1 = iVar5;
		}
		if (iParam2 < iParam1)
		{
			iVar6 = iParam1;
			iParam1 = iParam2;
			iParam2 = iVar6;
		}
		StringConCat(&Var0, func_145(iParam0), 16);
		StringConCat(&Var0, func_145(iParam1), 16);
		if (iParam2 != 7)
		{
			StringConCat(&Var0, func_145(iParam2), 16);
		}
	}
	else
	{
		StringConCat(&Var0, "x", 16);
		StringConCat(&Var0, func_145(iParam0), 16);
		StringConCat(&Var0, func_145(iParam1), 16);
		if (iParam2 != 7)
		{
			StringConCat(&Var0, func_145(iParam2), 16);
		}
	}
	return Var0;
}

char* func_145(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "M";
			break;
		
		case 1:
			return "F";
			break;
		
		case 2:
			return "T";
			break;
		
		case 3:
			return "L";
			break;
		
		case 4:
			return "J";
			break;
		
		case 5:
			return "A";
			break;
	}
	return "X";
}

void func_146(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<2> Var0;
	int iVar4;
	
	StringCopy(&Var0, func_149(iParam1), 16);
	iVar4 = func_148(iParam1);
	if (bParam3)
	{
	}
	func_147(uParam0, iVar4, iParam2, &Var0, 0, 1);
}

void func_147(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76833)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x83BBFE5E96C64FBA(iParam2, 0);
			}
			else
			{
				unk_0x83BBFE5E96C64FBA(iParam2, 1);
			}
		}
		if (!unk_0x5AEB5DDFFAD43CA5(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xE61672E3FEF081AC(iParam2, 0);
			}
			else
			{
				unk_0xE61672E3FEF081AC(iParam2, 1);
			}
		}
	}
}

int func_148(int iParam0)
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
		
		case 19:
			return 3;
			break;
		
		case 14:
			return 4;
			break;
		
		case 17:
			return 5;
			break;
	}
	return 9;
}

char* func_149(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MICHAEL";
			break;
		
		case 1:
			return "FRANKLIN";
			break;
		
		case 2:
			return "TREVOR";
			break;
		
		case 19:
			return "LAMAR";
			break;
		
		case 14:
			return "JIMMY";
			break;
		
		case 17:
			return "AMANDA";
			break;
	}
	return "invalid";
}

int func_150()
{
	if (Global_21005 != 0 || unk_0x6A5CC4A2C9D9ED8D())
	{
		return 1;
	}
	return 0;
}

int func_151(var uParam0)
{
	if (uParam0->f_14)
	{
		if (unk_0x40397A9A17EEC1C5(uLocal_951[0]))
		{
			unk_0xB8B0F7C8C1548C5B(uLocal_951[0], 0);
		}
		if (unk_0x40397A9A17EEC1C5(uLocal_951[1]))
		{
			unk_0xB8B0F7C8C1548C5B(uLocal_951[1], 0);
		}
		uLocal_951[0] = unk_0x68C2E3309DCAD71E("DEFAULT_SCRIPTED_CAMERA", 0);
		uLocal_951[1] = unk_0x68C2E3309DCAD71E("DEFAULT_SCRIPTED_CAMERA", 0);
		if (unk_0x40397A9A17EEC1C5(uLocal_951[0]) && unk_0x40397A9A17EEC1C5(uLocal_951[1]))
		{
			unk_0x8A3898631CCEC253(uLocal_951[0], *uParam0);
			unk_0xBF92D2A60C7C686E(uLocal_951[0], uParam0->f_3, 2);
			unk_0xD64C2E5B5BA2D347(uLocal_951[0], uParam0->f_12);
			unk_0x8A3898631CCEC253(uLocal_951[1], uParam0->f_6);
			unk_0xBF92D2A60C7C686E(uLocal_951[1], uParam0->f_6.f_3, 2);
			unk_0xD64C2E5B5BA2D347(uLocal_951[1], uParam0->f_12);
			unk_0x2311A669433389E8(uLocal_951[0], "HAND_SHAKE", 0.25f);
			unk_0x2311A669433389E8(uLocal_951[1], "HAND_SHAKE", 0.25f);
			if (uParam0->f_13 > 0.1f)
			{
				unk_0xF674D9B2033F5F86(uLocal_951[1], uLocal_951[0], SYSTEM::ROUND((uParam0->f_13 * 1000f)), 1, 1);
			}
			else
			{
				unk_0x856549C07003344B(uLocal_951[0], 1);
			}
			unk_0x3ED9330214992278(true, 0, 3000, 1, 0, 0);
			return 1;
		}
	}
	return 0;
}

int func_152(int iParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { Param1 - unk_0x3E4D3CCC220BDFB1(iParam0, 1) };
	Var3 = { unk_0x2E6A35AC161797A7(iParam0) };
	if (func_122(Var0, Var3) > 0f)
	{
		return 1;
	}
	return 0;
}

void func_153(int iParam0, struct<2> Param1, Vector3 vParam3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, 1) };
	fVar4 = (Param1 - Var0.x);
	fVar5 = (Param1.f_1 - Var0.f_1);
	if (fVar5 != 0f)
	{
		fVar3 = unk_0x8C91FF3D82E6FB27(fVar4, fVar5);
	}
	else if (fVar4 < 0f)
	{
		fVar3 = -90f;
	}
	else
	{
		fVar3 = 90f;
	}
	fVar3 = (fVar3 * -1f);
	unk_0xE922BAA80E8F9324(iParam0, fVar3);
}

int func_154(int iParam0)
{
	if (func_76(iParam0))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_155(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var4;
	struct<3> Var7;
	bool bVar10;
	
	if (unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		unk_0x03A2522C845CFAC6(&iParam0);
	}
	else
	{
		iVar0 = unk_0x36FE6D3220816ADA(iParam0);
		unk_0x140662B520844E45(iVar0, &Var1, &Var4);
		Var7 = { 0f, 0f, 0f };
		bVar10 = false;
		Var4 = (Var4 - 1.02f);
		Var1 = (Var1 + 1.02f);
		Var4.f_1 = (Var4.f_1 - 2.57f);
		Var1.f_1 = (Var1.f_1 + 2.61f);
		if (func_156(uParam1->f_4, 1) && (iParam2 || Var4 > 0f))
		{
			Var7.x = (Var7.x - Var4);
			bVar10 = true;
		}
		else if (func_156(uParam1->f_4, 2) && (iParam2 || Var1 < 0f))
		{
			Var7.x = (Var7.x - Var1);
			bVar10 = true;
		}
		if (func_156(uParam1->f_4, 4) && (iParam2 || Var1.f_1 < 0f))
		{
			Var7.f_1 = (Var7.f_1 - Var1.f_1);
			bVar10 = true;
		}
		else if (func_156(uParam1->f_4, 8) && (iParam2 || Var4.f_1 > 0f))
		{
			Var7.f_1 = (Var7.f_1 - Var4.f_1);
			bVar10 = true;
		}
		if (bVar10)
		{
			*uParam1 = { unk_0x1BAE5C94E38E44FE(*uParam1, uParam1->f_3, Var7) };
		}
		unk_0x03D382CB0B44E2FC(iParam0, *uParam1 + Vector(1f, 0f, 0f), 0, 0, 0, 1);
		unk_0xE922BAA80E8F9324(iParam0, uParam1->f_3);
		unk_0xB11D151E210D4FAC(iParam0, 1084227584);
		unk_0xFC34FFD7661206B7(iParam0, 1);
	}
}

bool func_156(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_157(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	unk_0x78FCB2E22C41B9D5(iLocal_949);
	unk_0x78FCB2E22C41B9D5(iLocal_950);
	if (unk_0x7D167B9A0CCDA347(iLocal_949) && unk_0x7D167B9A0CCDA347(iLocal_950))
	{
		unk_0x555EE41D7C7078E6(Param0, 6f, 1, 0, 0, 0);
		iVar0 = unk_0xCE4780E24AFDFBF9(iLocal_950, Param0, uParam3, 1, 1, 0);
		if (unk_0xAE06B9E39EBDE049(iVar0))
		{
			if (unk_0x80FF6C016CDB0FAF(iVar0, 0))
			{
				iVar1 = unk_0x6A7A2C83BD302BA4(iVar0, 4, iLocal_949, -1, 1, 1);
				if (!unk_0x5AEB5DDFFAD43CA5(iVar1))
				{
					unk_0x4E65320BC9AD521C(iVar1, 1);
					unk_0x74528AC0906CBABE(iLocal_949);
					unk_0x74528AC0906CBABE(iLocal_950);
					return iVar0;
				}
				else
				{
					unk_0x03A2522C845CFAC6(&iVar0);
				}
			}
			else
			{
				unk_0x03A2522C845CFAC6(&iVar0);
			}
		}
	}
	return 0;
}

int func_158(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = 0;
	if (uParam0->f_128 == 0 && (uParam0[5 /*15*/])->f_14 == 0)
	{
		*uParam1 = iParam6;
		iVar0 = 0;
	}
	else if ((func_154(iParam2) && unk_0x80FF6C016CDB0FAF(iParam4, 0)) && unk_0xC2169C00B643278B(iParam4, uParam0->f_105, 60f, 60f, 60f, 0, 1, 0))
	{
		*uParam1 = iParam4;
		if (uParam0->f_128)
		{
			iVar0 = 3;
		}
		else
		{
			iVar0 = 1;
		}
	}
	else if ((func_154(iParam3) && unk_0x80FF6C016CDB0FAF(iParam5, 0)) && unk_0xC2169C00B643278B(iParam5, uParam0->f_105, 60f, 60f, 60f, 0, 1, 0))
	{
		*uParam1 = iParam5;
		if (uParam0->f_128)
		{
			iVar0 = 3;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else if (uParam0->f_128)
	{
		*uParam1 = 0;
		iVar0 = 3;
	}
	else
	{
		*uParam1 = iParam6;
		iVar0 = 0;
	}
	return iVar0;
}

void func_159()
{
	Global_19871 = 0;
	func_141();
}

void func_160(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)
{
	int iVar0;
	
	iVar0 = unk_0x2639A2323BEA8CC6();
	if (unk_0x5A228A6A51E757C8(iVar0))
	{
		func_277(0);
		if (bParam9)
		{
			unk_0xB4AEEE4AF56F16D6(unk_0x2639A2323BEA8CC6(), 1);
		}
		if (bParam8)
		{
			switch (func_127())
			{
				case 0:
					if (func_276(unk_0x9B0761B4C3EB8BC7(), 8, 15))
					{
						func_162(unk_0x9B0761B4C3EB8BC7(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_276(unk_0x9B0761B4C3EB8BC7(), 9, 6))
					{
						func_162(unk_0x9B0761B4C3EB8BC7(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				
				case 1:
					if (func_276(unk_0x9B0761B4C3EB8BC7(), 8, 1) || func_276(unk_0x9B0761B4C3EB8BC7(), 8, 10))
					{
						func_162(unk_0x9B0761B4C3EB8BC7(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				
				case 2:
					if (func_276(unk_0x9B0761B4C3EB8BC7(), 8, 4))
					{
						func_162(unk_0x9B0761B4C3EB8BC7(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				}
		}
		if (iParam6 == 1)
		{
			unk_0x773B9DEB93E81B2F(func_23(unk_0x2639A2323BEA8CC6()), 50f, 0);
		}
		if (iParam7 == 1)
		{
			unk_0x4BAC0F0B99F7DCF9(Param0, 30f, 0);
		}
		if (bParam10)
		{
			unk_0xCFF81C0C8D63E62E(Param0, 30f);
		}
		unk_0x801B883D25479F23(Param0, 30f, 0);
		unk_0xCAD5C18968E57C30(iVar0, 0, 0);
		unk_0x4B86C627B5EABFBF(iVar0, 0);
		unk_0xD28B53FDA67841A1(iVar0, 1);
		if (bParam12)
		{
			unk_0x8CFF639CEFF5CF16(0);
			unk_0x644F1D0C5427A242(0);
		}
		unk_0xB80B2936A29B2666();
		if (iParam11 == 1)
		{
			unk_0xD289B55B6AADBA10(1);
		}
		if (iParam3 == 1)
		{
			unk_0xD50CC9B03AAD56FF(1, 0);
		}
		if (iParam4 == 1)
		{
			iLocal_43 = 0;
			if (func_76(unk_0x9B0761B4C3EB8BC7()))
			{
				iLocal_43 = unk_0x3DE0937410CB9D4C(unk_0x9B0761B4C3EB8BC7());
				unk_0x69C71C91F56D82B9(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			func_161(500, 0);
		}
	}
}

void func_161(int iParam0, bool bParam1)
{
	if (unk_0x03DB5C6AABF8DA46() || unk_0x5DA78AD6801A0523())
	{
		if (!unk_0x5B772EFCB84373BE())
		{
			unk_0xFD45D90342D2A0CD(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0x87F0CB19476706C3())
		{
			SYSTEM::WAIT(0);
		}
	}
}

int func_162(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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
	var uVar11;
	var uVar28;
	var uVar38;
	struct<14> Var55;
	var uVar69;
	
	if (unk_0x5AEB5DDFFAD43CA5(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_76645++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = unk_0x36FE6D3220816ADA(iParam0);
	if (iParam5 == 0)
	{
		Global_76647[1 /*14*/] = { func_212(iVar10, iParam1, iParam2, -1) };
		if (!func_211(iParam3))
		{
			Global_76645 = (Global_76645 - 1);
			return 0;
		}
		func_204(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_202(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = func_202(iParam0, 9);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = func_201(iParam0, 1);
			if (!func_200(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = func_201(iParam0, 0);
			if (!func_199(iVar10, 14, iVar8, -1) && !func_198(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_201(iParam0, 2);
			}
		}
		unk_0x6BD562D713BA3F70(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_76690 };
		}
		else
		{
			uVar11 = { func_194(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_76647[1 /*14*/] = { func_212(iVar10, iVar0, uVar11[iVar0], -1) };
				if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar28 = 9;
						if (iParam5 == 1)
						{
							uVar28 = { Global_76707 };
						}
						else
						{
							uVar28 = { func_191(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_76647[1 /*14*/] = { func_212(iVar10, 14, uVar28[iVar1], -1) };
							func_182(iParam0, Global_76647[1 /*14*/].f_12, Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4);
							func_204(14);
							if (Global_76645 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_174(iParam0, iVar10, 14, uVar28[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_162(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							func_173(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							unk_0x45F588C0DD767737(iParam0, func_172(iVar0), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, unk_0xABAC9462CD887571(iParam0, func_172(iVar0)));
						}
						else
						{
							unk_0x45F588C0DD767737(iParam0, func_172(iVar0), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, iParam4);
						}
						func_204(iVar0);
						if (Global_76645 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_174(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_162(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_76647[1 /*14*/] = { func_212(iVar10, iVar0, func_171(iParam0, iVar0, -1), -1) };
				if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_170(iParam0, iVar10, &iVar4, 1))
							{
								func_162(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar38 = { func_194(iVar10, 0) };
						func_162(iParam0, iVar0, uVar38[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var55 = { func_212(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (func_168(iVar10, iParam2, 8, iVar5, &uVar11, &Var55))
				{
					func_162(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_212(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (func_168(iVar10, iParam2, 9, iVar6, &uVar11, &Var55))
				{
					func_162(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_212(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (func_168(iVar10, iParam2, 14, iVar7, &uVar11, &Var55))
				{
					func_162(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_212(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (func_168(iVar10, iParam2, 14, iVar8, &uVar11, &Var55))
				{
					func_162(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_212(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (func_168(iVar10, iParam2, 14, iVar9, &uVar11, &Var55))
				{
					func_162(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar69 = { func_191(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_76647[1 /*14*/] = { func_212(iVar10, 14, uVar69[iVar1], -1) };
			func_182(iParam0, Global_76647[1 /*14*/].f_12, Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4);
			func_204(14);
			if (Global_76645 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_174(iParam0, iVar10, 14, uVar69[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_162(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_182(iParam0, Global_76647[1 /*14*/].f_12, Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4);
		func_204(iParam1);
		if (Global_76645 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_174(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_162(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			unk_0x45F588C0DD767737(iParam0, func_172(iParam1), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, unk_0xABAC9462CD887571(iParam0, func_172(iParam1)));
		}
		else
		{
			unk_0x45F588C0DD767737(iParam0, func_172(iParam1), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, iParam4);
		}
		if (Global_76645 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_174(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_162(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_165(iVar10, iParam1, iParam2);
		}
	}
	if (Global_76645 == 1)
	{
		if (func_170(iParam0, iVar10, &iVar4, 0))
		{
			func_162(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_163(iParam0, iVar10, &iVar4))
		{
			func_162(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_76645 = (Global_76645 - 1);
	return 1;
}

int func_163(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_164(iParam1);
	if (Global_111858.f_2359.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_276(iParam0, Global_111858.f_2359.f_539[iVar0 /*65*/].f_64, Global_111858.f_2359.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_111858.f_2359.f_539[iVar0 /*65*/].f_62;
			Global_111858.f_2359.f_539[iVar0 /*65*/].f_63 = -99;
			Global_111858.f_2359.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 0;
			break;
		
		case joaat("player_one"):
			return 1;
			break;
		
		case joaat("player_two"):
			return 2;
			break;
		
		default:
			break;
	}
	return 145;
}

void func_165(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		iVar0 = 5;
	}
	else if (iParam0 == joaat("player_one"))
	{
		iVar0 = 2;
	}
	else if (iParam0 == joaat("player_two"))
	{
		iVar0 = 4;
	}
	if (func_167(iParam0, 12, iVar0))
	{
		if (func_166(iParam0, iParam1, iParam2))
		{
			iVar1 = func_164(iParam0);
			if (iParam1 == 3)
			{
				Global_111858.f_2359.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_111858.f_2359.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

int func_166(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 47 && iParam2 <= 54)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 77 && iParam2 <= 84)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 14 && iParam2 <= 21)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 41 && iParam2 <= 56)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 18 && iParam2 <= 29)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 54 && iParam2 <= 69)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_167(int iParam0, int iParam1, int iParam2)
{
	Global_76647[1 /*14*/] = { func_212(iParam0, iParam1, iParam2, -1) };
	return unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 2);
}

int func_168(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
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
		uVar0 = { func_191(iParam0, (*uParam4)[13]) };
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
	if (func_169(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_200(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_199(iParam0, iParam2, iParam3, -1))
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
		else if (func_198(iParam0, iParam2, iParam3, -1))
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
		if (func_200(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_199(iParam0, iParam2, iParam3, -1))
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
		else if (func_198(iParam0, iParam2, iParam3, -1))
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
		if (func_200(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_199(iParam0, iParam2, iParam3, -1))
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
		else if (func_198(iParam0, iParam2, iParam3, -1))
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

int func_169(int iParam0, int iParam1, int iParam2)
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

int func_170(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_164(iParam1);
	if (Global_111858.f_2359.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_276(iParam0, Global_111858.f_2359.f_539[iVar0 /*65*/].f_61, Global_111858.f_2359.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_111858.f_2359.f_539[iVar0 /*65*/].f_59;
			Global_111858.f_2359.f_539[iVar0 /*65*/].f_60 = -99;
			Global_111858.f_2359.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_171(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_276(iParam0, iParam1, iVar0))
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
				if (func_276(iParam0, iParam1, iVar1))
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
				return func_201(iParam0, iParam2);
			}
		}
		else
		{
			return func_202(iParam0, iParam1);
		}
	}
	return -99;
}

int func_172(int iParam0)
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

int func_173(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7 || iParam2 == 23)
					{
						*iParam3 = 1;
					}
					break;
				
				case 9:
					if (iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14))
					{
						*iParam3 = 1;
					}
					break;
				
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 1;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 40 && iParam2 <= 41)) || iParam2 == 46)
					{
						*iParam3 = 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 2:
					if (iParam2 == 20)
					{
						*iParam3 = 20;
					}
					break;
				
				case 8:
					if (iParam2 == 4)
					{
						*iParam3 = 19;
					}
					break;
				
				case 9:
					if (iParam2 >= 5 && iParam2 <= 10)
					{
						*iParam3 = 19;
					}
					break;
				
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 19;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 19;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7)
					{
						*iParam3 = 2;
					}
					break;
				
				case 9:
					if ((iParam2 >= 9 && iParam2 <= 14) || (iParam2 >= 15 && iParam2 <= 16))
					{
						*iParam3 = 2;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 2;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 56 && iParam2 <= 57)) || iParam2 == 62)
					{
						*iParam3 = 2;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_164(iParam0);
		Global_111858.f_2359.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_111858.f_2359.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

int func_174(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = func_202(iParam0, 1);
				iVar0 = func_181(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = func_202(iParam0, 2);
				iVar0 = func_181(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_173(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_180(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_179(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									
									case 37:
										iVar0 = 17;
										break;
									
									case 38:
										iVar0 = 18;
										break;
									
									case 39:
										iVar0 = 18;
										break;
									
									case 40:
										iVar0 = 19;
										break;
									
									case 41:
										iVar0 = 19;
										break;
									
									case 42:
										iVar0 = 20;
										break;
									
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!func_178(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_178(iParam0, 3, 135, 150))
									{
										iVar0 = func_177(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									
									case 61:
										iVar0 = 3;
										break;
									
									case 16:
										iVar0 = 1;
										break;
									
									case 114:
										iVar0 = 15;
										break;
									
									case 115:
										iVar0 = 17;
										break;
									
									case 116:
										iVar0 = 16;
										break;
									
									case 117:
										iVar0 = 18;
										break;
									
									case 118:
										iVar0 = 20;
										break;
									
									case 119:
										iVar0 = 19;
										break;
									
									case 125:
										iVar0 = 21;
										break;
									
									case 120:
										iVar0 = 22;
										break;
									
									case 124:
										iVar0 = 23;
										break;
									
									case 126:
										iVar0 = 24;
										break;
									
									case 121:
										iVar0 = 25;
										break;
									
									case 127:
										iVar0 = 26;
										break;
									
									case 128:
										iVar0 = 27;
										break;
									
									case 85:
										iVar0 = 6;
										break;
									
									case 77:
										iVar0 = 7;
										break;
									
									case 78:
										iVar0 = 8;
										break;
									
									case joaat("MPSV_LP0_31"):
										iVar0 = 9;
										break;
									
									case 80:
										iVar0 = 10;
										break;
									
									case 81:
										iVar0 = 11;
										break;
									
									case 82:
										iVar0 = 12;
										break;
									
									case 83:
										iVar0 = 13;
										break;
									
									case 84:
										iVar0 = 14;
										break;
									
									case 21:
										iVar0 = 31;
										break;
									
									case 22:
										iVar0 = 30;
										break;
									
									case 23:
										iVar0 = 29;
										break;
									
									case 24:
										iVar0 = 28;
										break;
									
									case 25:
										iVar0 = 33;
										break;
									
									case 26:
										iVar0 = 35;
										break;
									
									case 27:
										iVar0 = 34;
										break;
									
									case 28:
										iVar0 = 32;
										break;
									
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			
			case joaat("player_one"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									
									case 90:
										iVar0 = 1;
										break;
									
									case 268:
										iVar0 = 3;
										break;
									
									case 269:
										iVar0 = 5;
										break;
									
									case 270:
										iVar0 = 4;
										break;
									
									case 271:
										iVar0 = 6;
										break;
									
									case 272:
										iVar0 = 8;
										break;
									
									case 273:
										iVar0 = 7;
										break;
									
									case 279:
										iVar0 = 9;
										break;
									
									case 274:
										iVar0 = 10;
										break;
									
									case 278:
										iVar0 = 11;
										break;
									
									case 280:
										iVar0 = 12;
										break;
									
									case 275:
										iVar0 = 13;
										break;
									
									case 281:
										iVar0 = 14;
										break;
									
									case 282:
										iVar0 = 15;
										break;
									
									case 107:
										iVar0 = 16;
										break;
									
									case 108:
										iVar0 = 17;
										break;
									
									case 109:
										iVar0 = 18;
										break;
									
									case 110:
										iVar0 = 19;
										break;
									
									case 111:
										iVar0 = 20;
										break;
									
									case 112:
										iVar0 = 21;
										break;
									
									case 113:
										iVar0 = 22;
										break;
									
									case 114:
										iVar0 = 23;
										break;
									
									case 115:
										iVar0 = 24;
										break;
									
									case 116:
										iVar0 = 25;
										break;
									
									case 117:
										iVar0 = 52;
										break;
									
									case 118:
										iVar0 = 27;
										break;
									
									case 119:
										iVar0 = 28;
										break;
									
									case 120:
										iVar0 = 29;
										break;
									
									case 121:
										iVar0 = 30;
										break;
									
									case 122:
										iVar0 = 31;
										break;
									
									case 296:
										iVar0 = 32;
										break;
									
									case 297:
										iVar0 = 33;
										break;
									
									case 298:
										iVar0 = 34;
										break;
									
									case 299:
										iVar0 = 35;
										break;
									
									case 300:
										iVar0 = 36;
										break;
									
									case 301:
										iVar0 = 37;
										break;
									
									case 302:
										iVar0 = 38;
										break;
									
									case 309:
										iVar0 = 39;
										break;
									
									case 310:
										iVar0 = 40;
										break;
									
									case 311:
										iVar0 = 41;
										break;
									
									case 312:
										iVar0 = 42;
										break;
									
									case 313:
										iVar0 = 43;
										break;
									
									case 314:
										iVar0 = 44;
										break;
									
									case 315:
										iVar0 = 45;
										break;
									
									case 316:
										iVar0 = 46;
										break;
									
									case 317:
										iVar0 = 51;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!func_178(iParam0, 3, 209, 222))
									{
										iVar0 = func_177(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!func_178(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_177(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_177(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_177(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_177(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!func_178(iParam0, 3, 176, 191) && !func_178(iParam0, 3, 227, 242))
									{
										iVar0 = func_177(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = func_202(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = func_202(iParam0, 11);
								iVar5 = func_176(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = func_202(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!func_175(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = func_202(iParam0, 8);
								iVar8 = func_202(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_176(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_176(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = func_202(iParam0, 11);
								iVar0 = func_176(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			
			case joaat("player_two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									
									case 81:
										iVar0 = 5;
										break;
									
									case 82:
										iVar0 = 6;
										break;
									
									case 83:
										iVar0 = 7;
										break;
									
									case 84:
										iVar0 = 10;
										break;
									
									case 85:
										iVar0 = 9;
										break;
									
									case 86:
										iVar0 = 8;
										break;
									
									case 92:
										iVar0 = 22;
										break;
									
									case 87:
										iVar0 = 23;
										break;
									
									case 91:
										iVar0 = 24;
										break;
									
									case 93:
										iVar0 = 25;
										break;
									
									case 88:
										iVar0 = 26;
										break;
									
									case 94:
										iVar0 = 27;
										break;
									
									case 120:
										iVar0 = 11;
										break;
									
									case 121:
										iVar0 = 13;
										break;
									
									case 122:
										iVar0 = 14;
										break;
									
									case 124:
										iVar0 = 12;
										break;
									
									case 126:
										iVar0 = 18;
										break;
									
									case 128:
										iVar0 = 17;
										break;
									
									case 130:
										iVar0 = 19;
										break;
									
									case 131:
										iVar0 = 16;
										break;
									
									case 134:
										iVar0 = 15;
										break;
									
									case 135:
										iVar0 = 20;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}

int func_175(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("player_zero"):
			break;
		
		case joaat("player_one"):
			*uParam4 = 0;
			if (iParam1 >= 27 && iParam1 <= 42)
			{
				if (iParam2 != -99)
				{
					if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
					{
					}
					else
					{
						if (iParam2 >= 42 && iParam2 <= 43)
						{
							if (iParam3 >= 176 && iParam3 <= 191)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (59 + iVar0);
							}
							else if (iParam3 >= 227 && iParam3 <= 242)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (43 + iVar0);
							}
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (((iParam3 >= 227 && iParam3 <= 242) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 243 && iParam3 <= 258))
					{
					}
					else
					{
						return 0;
					}
				}
			}
			else if (iParam1 >= 43 && iParam1 <= 58)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 43);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 227 && iParam3 <= 242)
					{
					}
					else
					{
						if (iParam3 >= 176 && iParam3 <= 191)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 43);
								*uParam4 = (59 + iVar0);
							}
						}
						return 0;
					}
				}
			}
			else if (iParam1 >= 59 && iParam1 <= 74)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 176 && iParam3 <= 191)
					{
					}
					else
					{
						if (iParam3 >= 227 && iParam3 <= 242)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 59);
								*uParam4 = (43 + iVar0);
							}
						}
						else if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 12)
			{
				if (iParam3 != 241)
				{
					return 0;
				}
			}
			break;
	}
	return 1;
}

int func_176(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam1 >= 243 && iParam1 <= 246)
	{
		if (iParam3 == 1)
		{
			return 1;
		}
		else
		{
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250)
	{
		if (iParam3 == 1)
		{
			return 2;
		}
		else
		{
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254)
	{
		if (iParam3 == 1)
		{
			return 3;
		}
		else
		{
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if ((iParam1 >= 176 && iParam1 <= 191) || (iParam1 >= 227 && iParam1 <= 242))
	{
		if (iParam2 >= 9 && iParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return iParam2;
			}
			else
			{
				iVar0 = (iParam2 - 9);
				iParam2 = (25 + iVar0);
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				iVar0 = (iParam2 - 25);
				iParam2 = (9 + iVar0);
				return iParam2;
			}
			else
			{
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42)
		{
			if (iParam3 == 1)
			{
				return 41;
			}
			else
			{
				return 42;
			}
		}
		else
		{
			if (iParam3 == 1)
			{
				iParam2 = func_177(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_177(iParam0, 11, 25, 40);
			}
			if (iParam2 == -99)
			{
				if (iParam3 == 1)
				{
					return 41;
				}
				else
				{
					return 42;
				}
			}
			else
			{
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 1);
			iParam2 = (5 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 5);
			iParam2 = (1 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 9);
			iParam2 = (25 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 25);
			iParam2 = (9 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42)
	{
		if (iParam3 == 1)
		{
			return 41;
		}
		else
		{
			return 42;
		}
	}
	return -99;
}

int func_177(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (func_167(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

int func_178(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_202(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return 1;
	}
	return 0;
}

int func_179(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			if ((((((((((((((((((iParam1 == 16 || iParam1 == 17) || iParam1 == 21) || iParam1 == 22) || iParam1 == 32) || (iParam1 >= 34 && iParam1 <= 39)) || (iParam1 >= 41 && iParam1 <= 45)) || iParam1 == 46) || (iParam1 >= 47 && iParam1 <= 54)) || (iParam1 >= 55 && iParam1 <= 70)) || (iParam1 >= 72 && iParam1 <= 79)) || iParam1 == 80) || (iParam1 >= 81 && iParam1 <= 83)) || (iParam1 >= 84 && iParam1 <= 87)) || iParam1 == 88) || (iParam1 >= 89 && iParam1 <= 91)) || iParam1 == 95) || (iParam1 >= 96 && iParam1 <= 111)) || iParam1 == 112)
			{
				*iParam2 = 6;
				return 1;
			}
			break;
		
		case joaat("player_one"):
			if ((((((iParam1 == 12 || (iParam1 >= 14 && iParam1 <= 21)) || iParam1 == 32) || iParam1 == 52) || (iParam1 >= 69 && iParam1 <= 70)) || iParam1 == 71) || (iParam1 >= 72 && iParam1 <= 77))
			{
				*iParam2 = 17;
				return 1;
			}
			break;
		
		case joaat("player_two"):
			if (((((((((((((((iParam1 == 4 || iParam1 == 5) || iParam1 == 6) || iParam1 == 7) || iParam1 == 14) || (iParam1 >= 18 && iParam1 <= 29)) || iParam1 == 31) || iParam1 == 32) || iParam1 == 33) || iParam1 == 34) || (iParam1 >= 35 && iParam1 <= 42)) || (iParam1 >= 43 && iParam1 <= 53)) || (iParam1 >= 54 && iParam1 <= 61)) || (iParam1 >= 71 && iParam1 <= 80)) || (iParam1 >= 81 && iParam1 <= 90)) || (iParam1 >= 94 && iParam1 <= 103))
			{
				*iParam2 = 8;
				return 1;
			}
			break;
	}
	return 0;
}

int func_180(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 38 && iParam2 <= 39)) || (iParam2 >= 40 && iParam2 <= 41)) || (iParam2 >= 42 && iParam2 <= 44))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 9:
					if (iParam2 >= 15 && iParam2 <= 16)
					{
						*iParam3 = 0;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 54 && iParam2 <= 55)) || (iParam2 >= 56 && iParam2 <= 57)) || (iParam2 >= 58 && iParam2 <= 60))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_164(iParam0);
		Global_111858.f_2359.f_539[iVar0 /*65*/].f_63 = iParam2;
		Global_111858.f_2359.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}
	return 0;
}

int func_181(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 1)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else if (iParam2 == 4)
				{
					return 5;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else if (iParam2 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if (iParam2 == 0)
				{
					return 0;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 >= 16 && iParam1 <= 17)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 5;
				}
			}
			else if (iParam1 == 18)
			{
				if (iParam2 == 0)
				{
					return 6;
				}
				else
				{
					return 7;
				}
			}
			else if (iParam1 == 19)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else
				{
					return 4;
				}
			}
			else if (iParam2 == 0)
			{
				return 1;
			}
			else
			{
				return 4;
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 2)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 == 3)
			{
				if (iParam2 == 0)
				{
					return 4;
				}
				else
				{
					return 6;
				}
			}
			else if (iParam1 == 8)
			{
				return 5;
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return -99;
}

void func_182(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam2 == -1)
	{
		unk_0x4FCABD4082A6C808(iParam0, iParam1);
		if (iParam1 == 0)
		{
			unk_0x694113444F21E39F(iParam0, 34, false);
			unk_0x694113444F21E39F(iParam0, 36, false);
		}
	}
	else
	{
		unk_0x78024EFD31A7FAD4(iParam0, iParam1, iParam2, iParam3, unk_0x25DDB354A40FFCDB());
		if (iParam1 == 0)
		{
			iVar0 = func_187(iParam0, iParam2, iParam3, iParam1);
			if (func_183(unk_0x36FE6D3220816ADA(iParam0), 14, iVar0, unk_0xEAF476EEF924D2C9(iParam0, 0, iParam2, iParam3)))
			{
				unk_0x694113444F21E39F(iParam0, 34, true);
				unk_0x694113444F21E39F(iParam0, 36, true);
			}
			else
			{
				unk_0x694113444F21E39F(iParam0, 34, false);
				unk_0x694113444F21E39F(iParam0, 36, false);
			}
		}
	}
}

int func_183(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_184(iParam0, iParam2, 14, 3);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x4D0432E34C5996D9(iParam3, joaat("HELMET"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_184(iParam0, iParam2, 14, 4);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x4D0432E34C5996D9(iParam3, joaat("HELMET"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_184(int iParam0, int iParam1, int iParam2, int iParam3)
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
		unk_0x8BC52CDFCD2A4534(&Var0);
		iVar17 = (iParam1 - func_186(iParam0));
		if (iVar17 < 0)
		{
			return -1;
		}
		iVar18 = unk_0x21A524CB091C80DE(iParam3, 7, -1, 1, -1, -1);
		if (iVar18 <= iVar17)
		{
			return -1;
		}
		unk_0xD2FB5DC35CA67C53(iVar17, &Var0);
		return Var0.f_1;
	}
	else
	{
		unk_0x1C2EE47D7054A42C(&Var19);
		iVar36 = (iParam1 - func_185(iParam0, func_172(iParam2)));
		if (iVar36 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_76769.f_26[iParam2] && iParam1 == Global_76769[iParam2]) && Global_76769.f_13[iParam2] != 0)
		{
			return Global_76769.f_13[iParam2];
		}
		iVar37 = unk_0x21A524CB091C80DE(iParam3, 7, -1, 0, -1, func_172(iParam2));
		if (iVar37 <= iVar36)
		{
			return -1;
		}
		unk_0x627AC3AC8991672C(iVar36, &Var19);
		Global_76769.f_13[iParam2] = Var19.f_1;
		Global_76769[iParam2] = iParam1;
		Global_76769.f_26[iParam2] = iParam0;
		return Var19.f_1;
	}
	return -1;
}

int func_185(int iParam0, int iParam1)
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

int func_186(int iParam0)
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

int func_187(int iParam0, int iParam1, int iParam2, int iParam3)
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
		return func_190(iParam3);
	}
	iVar0 = unk_0x36FE6D3220816ADA(iParam0);
	iVar1 = unk_0xEAF476EEF924D2C9(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_189(unk_0x36FE6D3220816ADA(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_189(unk_0x36FE6D3220816ADA(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0x99134D420E2DAA74(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0x2CB217E5FD6878E9(iParam0, iParam3, iVar4);
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
					iVar3 = (iVar3 + func_188(iParam0, iParam3));
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
	return func_190(iParam3);
}

int func_188(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x36FE6D3220816ADA(iParam0);
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

int func_189(int iParam0, int iParam1, int iParam2, int iParam3)
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
		unk_0x21A524CB091C80DE(iParam3, 7, -1, 1, -1, -1);
		iVar0 = unk_0x6CEBE002E58DEE97(iParam1);
		if (iVar0 != -1)
		{
			return (func_186(iParam0) + iVar0);
		}
	}
	else
	{
		unk_0x21A524CB091C80DE(iParam3, 7, -1, 0, -1, func_172(iParam2));
		iVar1 = unk_0x96E2929292A4DB77(iParam1);
		if (iVar1 != -1)
		{
			return (func_185(iParam0, func_172(iParam2)) + iVar1);
		}
	}
	return -99;
}

int func_190(int iParam0)
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

struct<10> func_191(int iParam0, int iParam1)
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
					func_193(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_193(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_193(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_193(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_193(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_193(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_193(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_193(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_193(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_193(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_193(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_192(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_193(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_193(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_193(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_193(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_193(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_193(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_193(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_193(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_193(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_193(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_192(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_193(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_193(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_193(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_193(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_193(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_193(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_193(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_193(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_193(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_193(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_192(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_193(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_193(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_193(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_193(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_193(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_193(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_193(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_193(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_193(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_193(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_193(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_193(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_193(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_193(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_193(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_193(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_193(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_193(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_193(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_193(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_193(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_193(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_193(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_193(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_193(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_193(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_192(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_193(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_193(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_193(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_193(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_193(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_193(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_193(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_193(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_193(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_193(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_193(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_193(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_193(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_193(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_193(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_193(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_193(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_193(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_193(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_193(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_193(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_193(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_193(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_193(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_193(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_192(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_192(int iParam0, int iParam1, int iParam2, int iParam3)
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
		unk_0x6208B91ED335678E(iParam2, &Var1);
		if (!unk_0x14AC70FD8926649E(Var1))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (unk_0xC35D62D0F96C6D07(Var1.f_1, iVar19, &Var16) && Var16.f_2 != -1)
				{
					if ((Var16.x != 0 && Var16.x != -1) && Var16.x != joaat("0"))
					{
						(*iParam0)[Var16.f_2] = func_189(iParam1, Var16.x, 14, iVar0);
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

void func_193(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

struct<17> func_194(int iParam0, int iParam1)
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
					if (Global_111858.f_9081.f_99.f_58[120])
					{
						func_197(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_197(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_197(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_197(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_197(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_197(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_197(&Var1, -99, -99, Global_111858.f_2359.f_539.f_196[0], Global_111858.f_2359.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_197(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_197(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_197(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_197(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_197(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_197(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_197(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_197(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_197(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_197(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_197(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_197(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_197(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_197(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_197(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_197(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_197(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_197(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_197(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_197(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_197(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_197(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_197(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_197(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_197(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_197(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_197(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_197(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_197(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_197(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_197(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_197(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_197(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_197(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_197(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_197(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_197(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_197(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_197(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_197(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_197(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_197(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_197(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_197(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_197(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_197(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_197(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_195(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_197(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_197(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_197(&Var1, -99, -99, Global_111858.f_2359.f_539.f_196[1], Global_111858.f_2359.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_197(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_197(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_197(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_197(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_197(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_197(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_197(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_197(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_197(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_197(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_197(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_197(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_197(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_197(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_197(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_197(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_197(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_197(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_197(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_197(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_197(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_197(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_197(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_197(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_197(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_197(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_197(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_197(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_197(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_197(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_197(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_197(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_197(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_197(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_197(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_197(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_197(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_197(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_197(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_197(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_197(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_197(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_197(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_197(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_195(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_197(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_197(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_197(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_197(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_197(&Var1, -99, -99, Global_111858.f_2359.f_539.f_196[2], Global_111858.f_2359.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_197(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_197(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_197(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_197(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_197(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_197(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_197(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_197(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_197(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_197(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_197(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_197(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_197(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_197(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_197(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_197(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_197(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_197(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_197(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_197(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_197(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_197(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_197(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_197(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_197(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_197(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_197(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_197(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_197(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_197(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_197(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_197(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_197(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_197(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_197(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_197(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_197(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_197(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_197(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_197(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_197(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_197(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_197(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_195(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_197(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_197(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_197(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_197(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_197(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_197(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_197(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_197(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_197(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_197(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_197(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_197(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_197(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_197(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_197(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_197(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_197(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_197(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_197(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_197(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_197(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_197(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_197(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_197(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_197(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_197(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_195(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_197(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_197(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_197(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_197(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_197(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_197(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_197(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_197(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_197(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_197(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_197(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_197(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_197(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_197(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_197(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_197(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_197(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_197(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_197(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_197(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_197(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_197(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_197(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_197(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_197(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_197(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_197(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_197(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_195(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_195(var uParam0, int iParam1, int iParam2, int iParam3)
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
	unk_0x04222560EC9A383D(iVar0, 0);
	unk_0xB11622B138AA8874((iParam2 - iParam3), &Var1);
	if (!unk_0x14AC70FD8926649E(Var1))
	{
		iVar36 = 0;
		while (iVar36 < Var1.f_4)
		{
			if (unk_0xCFA068E582501862(Var1.f_1, iVar36, &Var16))
			{
				if ((Var16.x != 0 && Var16.x != -1) && Var16.x != joaat("0"))
				{
					if (Var16.f_2 == 10)
					{
						unk_0x1C2EE47D7054A42C(&Var19);
						unk_0x2209D2FE26AA9212(Var16.x, &Var19);
						if (Var16.x != Var19.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (Var16.f_2 == 10 && uParam0->f_16)
					{
						(*uParam0)[func_196(Var16.f_2)] = Var16.x;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_196(Var16.f_2)] = func_189(iParam1, Var16.x, func_196(Var16.f_2), iVar0);
					}
				}
				else if (Var16.f_1 != -1)
				{
					(*uParam0)[func_196(Var16.f_2)] = Var16.f_1;
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

int func_196(int iParam0)
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

void func_197(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

int func_198(int iParam0, int iParam1, int iParam2, int iParam3)
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
							iParam3 = func_184(iParam0, iParam2, 14, 3);
						}
						return (unk_0x4D0432E34C5996D9(iParam3, joaat("HAT"), 1) || unk_0x4D0432E34C5996D9(func_184(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_184(iParam0, iParam2, 1, 3);
						}
						return (unk_0x4D0432E34C5996D9(iParam3, joaat("HAT"), 0) || unk_0x4D0432E34C5996D9(func_184(iParam0, iParam2, 1, 3), -1842686353, 0));
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
							iParam3 = func_184(iParam0, iParam2, 14, 4);
						}
						return (unk_0x4D0432E34C5996D9(iParam3, joaat("HAT"), 1) || unk_0x4D0432E34C5996D9(func_184(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_184(iParam0, iParam2, 1, 4);
						}
						return (unk_0x4D0432E34C5996D9(iParam3, joaat("HAT"), 0) || unk_0x4D0432E34C5996D9(func_184(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_199(int iParam0, int iParam1, int iParam2, int iParam3)
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
						iParam3 = func_184(iParam0, iParam2, 1, 3);
					}
					if (unk_0x4D0432E34C5996D9(iParam3, joaat("HAT"), 0) || unk_0x4D0432E34C5996D9(iParam3, joaat("HAIR_SHRINK"), 0))
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
						iParam3 = func_184(iParam0, iParam2, 1, 4);
					}
					if (unk_0x4D0432E34C5996D9(iParam3, joaat("HAT"), 0) || unk_0x4D0432E34C5996D9(iParam3, joaat("HAIR_SHRINK"), 0))
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

int func_200(int iParam0, int iParam1, int iParam2, int iParam3)
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
						iParam3 = func_184(iParam0, iParam2, 14, 3);
					}
					return unk_0x4D0432E34C5996D9(iParam3, joaat("GLASSES"), 1);
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
						iParam3 = func_184(iParam0, iParam2, 14, 4);
					}
					return unk_0x4D0432E34C5996D9(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_201(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		return -99;
	}
	iVar0 = unk_0xA98E0435012EAF07(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_190(iParam1);
	}
	iVar1 = unk_0x77A103B794FA7737(iParam0, iParam1);
	return func_187(iParam0, iVar0, iVar1, iParam1);
}

int func_202(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		return -99;
	}
	iVar0 = func_172(iParam1);
	iVar1 = unk_0x3FB4D40A857CEA77(iParam0, iVar0);
	iVar2 = unk_0x79AFA009D186C4FB(iParam0, iVar0);
	return func_203(iParam0, iVar1, iVar2, iParam1);
}

int func_203(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_172(iParam3);
	iVar1 = unk_0xD6A0115FA2F3F0EC(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0x7CF1CA3F6DB5685F(iParam0, iVar0, iVar3);
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

void func_204(int iParam0)
{
	if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 1) && !unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 6))
	{
		func_210(iParam0, Global_76647[1 /*14*/].f_5, Global_76647[1 /*14*/].f_2, 2, Global_76647[1 /*14*/].f_1, 1, 0);
	}
	if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 1) && unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_205(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_205(Global_2621444, 2, 1, 1, -1);
		}
		else
		{
			func_205(Global_2621444, 2, 1, 1, -1);
		}
	}
}

void func_205(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_76644;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_209(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_208(iVar2, iVar0, 0);
		unk_0xBE20AB8238688965(&iVar3, iVar1);
		func_206(iVar2, iVar3, iVar0, 1, 0);
	}
}

void func_206(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_207(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_207(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_21();
		if (iVar1 > -1)
		{
			Global_2551544 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2551544 = 1;
		}
	}
	return iVar0;
}

int func_208(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_207(iParam1)];
		if (unk_0xD2F202166691EDB2(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_209(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 11771;
	if ((bParam4 && Global_4268238) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
						*uParam2 = 935;
						*uParam3 = 0;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
						*uParam2 = 935;
						*uParam3 = 1;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
						*uParam2 = 935;
						*uParam3 = 2;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
						*uParam2 = 935;
						*uParam3 = 3;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
						*uParam2 = 935;
						*uParam3 = 4;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
						*uParam2 = 935;
						*uParam3 = 5;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
						*uParam2 = 935;
						*uParam3 = 7;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
						*uParam2 = 935;
						*uParam3 = 8;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
						*uParam2 = 935;
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
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 1023;
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
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 971;
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
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 1023;
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
		if (Global_4268238)
		{
			iVar0 = unk_0x52E48CCEEE1A6F7C(iParam0);
		}
		else
		{
			iVar0 = unk_0x9C343CBA5B2E3744(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0x52E48CCEEE1A6F7C(iParam0);
	}
	else
	{
		iVar0 = unk_0x9C343CBA5B2E3744(iParam0);
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
					*uParam2 = 1760;
					break;
				
				case 1:
					*uParam2 = 1761;
					break;
				
				case 2:
					*uParam2 = 1762;
					break;
				
				case 3:
					*uParam2 = 1763;
					break;
				
				case 4:
					*uParam2 = 1764;
					break;
				
				case 5:
					*uParam2 = 1765;
					break;
				
				case 6:
					*uParam2 = 1772;
					break;
				
				case 7:
					*uParam2 = 1773;
					break;
				
				case 8:
					*uParam2 = 1774;
					break;
				
				case 9:
					*uParam2 = 1775;
					break;
				
				case 10:
					*uParam2 = 1776;
					break;
				
				case 11:
					*uParam2 = 1777;
					break;
				
				case 12:
					*uParam2 = 1778;
					break;
				
				case 13:
					*uParam2 = 1786;
					break;
				
				case 14:
					*uParam2 = 1787;
					break;
				
				case 15:
					*uParam2 = 1888;
					break;
				
				case 16:
					*uParam2 = 1889;
					break;
				
				case 17:
					*uParam2 = 1920;
					break;
				
				case 18:
					*uParam2 = 1934;
					break;
				
				case 19:
					*uParam2 = 1935;
					break;
				
				case 20:
					*uParam2 = 1936;
					break;
				
				case 21:
					*uParam2 = 1937;
					break;
				
				case 22:
					*uParam2 = 1938;
					break;
				
				case 23:
					*uParam2 = 2042;
					break;
				
				case 24:
					*uParam2 = 2043;
					break;
				
				case 25:
					*uParam2 = 2069;
					break;
				
				case 26:
					*uParam2 = 2070;
					break;
				
				case 27:
					*uParam2 = 2071;
					break;
				
				case 28:
					*uParam2 = 2072;
					break;
				
				case 29:
					*uParam2 = 2073;
					break;
				
				case 30:
					*uParam2 = 2074;
					break;
				
				case 31:
					*uParam2 = 2075;
					break;
				
				case 32:
					*uParam2 = 2076;
					break;
				
				case 33:
					*uParam2 = 2077;
					break;
				
				case 34:
					*uParam2 = 2078;
					break;
				
				case 35:
					*uParam2 = 2325;
					break;
				
				case 36:
					*uParam2 = 2326;
					break;
				
				case 37:
					*uParam2 = 2390;
					break;
				
				case 38:
					*uParam2 = 2391;
					break;
				
				case 39:
					*uParam2 = 2392;
					break;
				
				case 40:
					*uParam2 = 2393;
					break;
				
				case 41:
					*uParam2 = 2452;
					break;
				
				case 42:
					*uParam2 = 2453;
					break;
				
				case 43:
					*uParam2 = 2454;
					break;
				
				case 44:
					*uParam2 = 2455;
					break;
				
				case 45:
					*uParam2 = 2456;
					break;
				
				case 46:
					*uParam2 = 2457;
					break;
				
				case 47:
					*uParam2 = 2458;
					break;
				
				case 48:
					*uParam2 = 2459;
					break;
				
				case 49:
					*uParam2 = 2460;
					break;
				
				case 50:
					*uParam2 = 2461;
					break;
				
				case 51:
					*uParam2 = 2590;
					break;
				
				case 52:
					*uParam2 = 2591;
					break;
				
				case 53:
					*uParam2 = 2592;
					break;
				
				case 54:
					*uParam2 = 2593;
					break;
				
				case 55:
					*uParam2 = 2594;
					break;
				
				case 56:
					*uParam2 = 2595;
					break;
				
				case 57:
					*uParam2 = 2596;
					break;
				
				case 58:
					*uParam2 = 2597;
					break;
				
				case 59:
					*uParam2 = 2598;
					break;
				
				case 60:
					*uParam2 = 2599;
					break;
				
				case 61:
					*uParam2 = 2600;
					break;
				
				case 62:
					*uParam2 = 3197;
					break;
				
				case 63:
					*uParam2 = 3198;
					break;
				
				case 64:
					*uParam2 = 3199;
					break;
				
				case 65:
					*uParam2 = 3200;
					break;
				
				case 66:
					*uParam2 = 3201;
					break;
				
				case 67:
					*uParam2 = 3202;
					break;
				
				case 68:
					*uParam2 = 3670;
					break;
				
				case 69:
					*uParam2 = 3671;
					break;
				
				case 70:
					*uParam2 = 3672;
					break;
				
				case 71:
					*uParam2 = 3673;
					break;
				
				case 72:
					*uParam2 = 3674;
					break;
				
				case 73:
					*uParam2 = 3675;
					break;
				
				case 74:
					*uParam2 = 3676;
					break;
				
				case 75:
					*uParam2 = 3677;
					break;
				
				case 76:
					*uParam2 = 3678;
					break;
				
				case 77:
					*uParam2 = 3679;
					break;
				
				case 78:
					*uParam2 = 3793;
					break;
				
				case joaat("MPSV_LP0_31"):
					*uParam2 = 3794;
					break;
				
				case 80:
					*uParam2 = 3795;
					break;
				
				case 81:
					*uParam2 = 3796;
					break;
				
				case 82:
					*uParam2 = 3797;
					break;
				
				case 83:
					*uParam2 = 3798;
					break;
				
				case 84:
					*uParam2 = 3799;
					break;
				
				case 85:
					*uParam2 = 3800;
					break;
				
				case 86:
					*uParam2 = 3903;
					break;
				
				case 87:
					*uParam2 = 3904;
					break;
				
				case 88:
					*uParam2 = 3905;
					break;
				
				case 89:
					*uParam2 = 5338;
					break;
				
				case 90:
					*uParam2 = 5339;
					break;
				
				case 91:
					*uParam2 = 5340;
					break;
				
				case 92:
					*uParam2 = 5341;
					break;
				
				case 93:
					*uParam2 = 5342;
					break;
				
				case 94:
					*uParam2 = 5343;
					break;
				
				case 95:
					*uParam2 = 5344;
					break;
				
				case 96:
					*uParam2 = 5345;
					break;
				
				case 97:
					*uParam2 = 5346;
					break;
				
				case 98:
					*uParam2 = 5347;
					break;
				
				case 99:
					*uParam2 = 5348;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5349;
					break;
				
				case 101:
					*uParam2 = 5395;
					break;
				
				case 102:
					*uParam2 = 5396;
					break;
				
				case 103:
					*uParam2 = 5397;
					break;
				
				case 104:
					*uParam2 = 5398;
					break;
				
				case 105:
					*uParam2 = 5399;
					break;
				
				case 106:
					*uParam2 = 5400;
					break;
				
				case 107:
					*uParam2 = 5401;
					break;
				
				case 108:
					*uParam2 = 5402;
					break;
				
				case 109:
					*uParam2 = 5403;
					break;
				
				case 110:
					*uParam2 = 5404;
					break;
				
				case 111:
					*uParam2 = 5405;
					break;
				
				case 112:
					*uParam2 = 5406;
					break;
				
				case 113:
					*uParam2 = 5407;
					break;
				
				case 114:
					*uParam2 = 5408;
					break;
				
				case 115:
					*uParam2 = 5409;
					break;
				
				case 116:
					*uParam2 = 5410;
					break;
				
				case 117:
					*uParam2 = 5411;
					break;
				
				case 118:
					*uParam2 = 5412;
					break;
				
				case 119:
					*uParam2 = 5413;
					break;
				
				case 120:
					*uParam2 = 5414;
					break;
				
				case 121:
					*uParam2 = 5415;
					break;
				
				case 122:
					*uParam2 = 5416;
					break;
				
				case 123:
					*uParam2 = 5417;
					break;
				
				case 124:
					*uParam2 = 6123;
					break;
				
				case 125:
					*uParam2 = 6124;
					break;
				
				case 126:
					*uParam2 = 6125;
					break;
				
				case 127:
					*uParam2 = 6126;
					break;
				
				case 128:
					*uParam2 = 6127;
					break;
				
				case 129:
					*uParam2 = 6128;
					break;
				
				case 130:
					*uParam2 = 6129;
					break;
				
				case 131:
					*uParam2 = 6130;
					break;
				
				case 132:
					*uParam2 = 6131;
					break;
				
				case 133:
					*uParam2 = 6132;
					break;
				
				case 134:
					*uParam2 = 6133;
					break;
				
				case 135:
					*uParam2 = 6134;
					break;
				
				case 136:
					*uParam2 = 6135;
					break;
				
				case 137:
					*uParam2 = 6136;
					break;
				
				case 138:
					*uParam2 = 6137;
					break;
				
				case 139:
					*uParam2 = 6436;
					break;
				
				case 140:
					*uParam2 = 6437;
					break;
				
				case 141:
					*uParam2 = 6438;
					break;
				
				case 142:
					*uParam2 = 6439;
					break;
				
				case 143:
					*uParam2 = 6440;
					break;
				
				case 144:
					*uParam2 = 6441;
					break;
				
				case 145:
					*uParam2 = 6442;
					break;
				
				case 146:
					*uParam2 = 6443;
					break;
				
				case 147:
					*uParam2 = 6444;
					break;
				
				case 148:
					*uParam2 = 6445;
					break;
				
				case 149:
					*uParam2 = 6446;
					break;
				
				case 150:
					*uParam2 = 6447;
					break;
				
				case 151:
					*uParam2 = 6448;
					break;
				
				case 152:
					*uParam2 = 6449;
					break;
				
				case 153:
					*uParam2 = 6450;
					break;
				
				case 154:
					*uParam2 = 7267;
					break;
				
				case 155:
					*uParam2 = 7268;
					break;
				
				case 156:
					*uParam2 = 7269;
					break;
				
				case 157:
					*uParam2 = 7270;
					break;
				
				case 158:
					*uParam2 = 7271;
					break;
				
				case 159:
					*uParam2 = 7272;
					break;
				
				case 160:
					*uParam2 = 7273;
					break;
				
				case 161:
					*uParam2 = 7880;
					break;
				
				case 162:
					*uParam2 = 7881;
					break;
				
				case 163:
					*uParam2 = 7882;
					break;
				
				case 164:
					*uParam2 = 7883;
					break;
				
				case 165:
					*uParam2 = 7884;
					break;
				
				case 166:
					*uParam2 = 7885;
					break;
				
				case 167:
					*uParam2 = 7886;
					break;
				
				case 168:
					*uParam2 = 7887;
					break;
				
				case 169:
					*uParam2 = 7888;
					break;
				
				case 170:
					*uParam2 = 7889;
					break;
				
				case 171:
					*uParam2 = 7890;
					break;
				
				case 172:
					*uParam2 = 7891;
					break;
				
				case 173:
					*uParam2 = 7892;
					break;
				
				case 174:
					*uParam2 = 7893;
					break;
				
				case 175:
					*uParam2 = 7894;
					break;
				
				case 176:
					*uParam2 = 8300;
					break;
				
				case 177:
					*uParam2 = 8301;
					break;
				
				case 178:
					*uParam2 = 8302;
					break;
				
				case 179:
					*uParam2 = 8303;
					break;
				
				case 180:
					*uParam2 = 8304;
					break;
				
				case 181:
					*uParam2 = 8305;
					break;
				
				case 182:
					*uParam2 = 8306;
					break;
				
				case 183:
					*uParam2 = 8307;
					break;
				
				case 184:
					*uParam2 = 8308;
					break;
				
				case 185:
					*uParam2 = 8309;
					break;
				
				case 186:
					*uParam2 = 8310;
					break;
				
				case 187:
					*uParam2 = 8311;
					break;
				
				case 188:
					*uParam2 = 8312;
					break;
				
				case 189:
					*uParam2 = 8313;
					break;
				
				case 190:
					*uParam2 = 8314;
					break;
				
				case 191:
					*uParam2 = 8315;
					break;
				
				case 192:
					*uParam2 = 8316;
					break;
				
				case 193:
					*uParam2 = 8317;
					break;
				
				case 194:
					*uParam2 = 8318;
					break;
				
				case 195:
					*uParam2 = 8319;
					break;
				
				case 196:
					*uParam2 = 8320;
					break;
				
				case 197:
					*uParam2 = 8321;
					break;
				
				case 198:
					*uParam2 = 8322;
					break;
				
				case 199:
					*uParam2 = 8323;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8324;
					break;
				
				case 201:
					*uParam2 = 8937;
					break;
				
				case 202:
					*uParam2 = 8938;
					break;
				
				case 203:
					*uParam2 = 8939;
					break;
				
				case 204:
					*uParam2 = 8940;
					break;
				
				case 205:
					*uParam2 = 8941;
					break;
				
				case 206:
					*uParam2 = 9420;
					break;
				
				case 207:
					*uParam2 = 9421;
					break;
				
				case 208:
					*uParam2 = 9422;
					break;
				
				case 209:
					*uParam2 = 9423;
					break;
				
				case 210:
					*uParam2 = 9424;
					break;
				
				case 211:
					*uParam2 = 9425;
					break;
				
				case 212:
					*uParam2 = 9426;
					break;
				
				case 213:
					*uParam2 = 9427;
					break;
				
				case 214:
					*uParam2 = 9428;
					break;
				
				case 215:
					*uParam2 = 9429;
					break;
				
				case 216:
					*uParam2 = 9430;
					break;
				
				case 217:
					*uParam2 = 9431;
					break;
				
				case 218:
					*uParam2 = 9432;
					break;
				
				case 219:
					*uParam2 = 9433;
					break;
				
				case 220:
					*uParam2 = 9434;
					break;
				
				case 221:
					*uParam2 = 9435;
					break;
				
				case 222:
					*uParam2 = 9436;
					break;
				
				case 223:
					*uParam2 = 9437;
					break;
				
				case 224:
					*uParam2 = 9438;
					break;
				
				case 225:
					*uParam2 = 9439;
					break;
				
				case 226:
					*uParam2 = 9440;
					break;
				
				case 227:
					*uParam2 = 9441;
					break;
				
				case 228:
					*uParam2 = 9442;
					break;
				
				case 229:
					*uParam2 = 9443;
					break;
				
				case 230:
					*uParam2 = 9444;
					break;
			}
			break;
		
		case 2:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1766;
					break;
				
				case 1:
					*uParam2 = 1767;
					break;
				
				case 2:
					*uParam2 = 1768;
					break;
				
				case 3:
					*uParam2 = 1769;
					break;
				
				case 4:
					*uParam2 = 1770;
					break;
				
				case 5:
					*uParam2 = 1771;
					break;
				
				case 6:
					*uParam2 = 1779;
					break;
				
				case 7:
					*uParam2 = 1780;
					break;
				
				case 8:
					*uParam2 = 1781;
					break;
				
				case 9:
					*uParam2 = 1782;
					break;
				
				case 10:
					*uParam2 = 1783;
					break;
				
				case 11:
					*uParam2 = 1784;
					break;
				
				case 12:
					*uParam2 = 1785;
					break;
				
				case 13:
					*uParam2 = 1788;
					break;
				
				case 14:
					*uParam2 = 1789;
					break;
				
				case 15:
					*uParam2 = 1890;
					break;
				
				case 16:
					*uParam2 = 1891;
					break;
				
				case 17:
					*uParam2 = 1921;
					break;
				
				case 18:
					*uParam2 = 1939;
					break;
				
				case 19:
					*uParam2 = 1940;
					break;
				
				case 20:
					*uParam2 = 1941;
					break;
				
				case 21:
					*uParam2 = 1942;
					break;
				
				case 22:
					*uParam2 = 1943;
					break;
				
				case 23:
					*uParam2 = 2044;
					break;
				
				case 24:
					*uParam2 = 2045;
					break;
				
				case 25:
					*uParam2 = 2079;
					break;
				
				case 26:
					*uParam2 = 2080;
					break;
				
				case 27:
					*uParam2 = 2081;
					break;
				
				case 28:
					*uParam2 = 2082;
					break;
				
				case 29:
					*uParam2 = 2083;
					break;
				
				case 30:
					*uParam2 = 2084;
					break;
				
				case 31:
					*uParam2 = 2085;
					break;
				
				case 32:
					*uParam2 = 2086;
					break;
				
				case 33:
					*uParam2 = 2087;
					break;
				
				case 34:
					*uParam2 = 2088;
					break;
				
				case 35:
					*uParam2 = 2327;
					break;
				
				case 36:
					*uParam2 = 2328;
					break;
				
				case 37:
					*uParam2 = 2394;
					break;
				
				case 38:
					*uParam2 = 2395;
					break;
				
				case 39:
					*uParam2 = 2396;
					break;
				
				case 40:
					*uParam2 = 2397;
					break;
				
				case 41:
					*uParam2 = 2462;
					break;
				
				case 42:
					*uParam2 = 2463;
					break;
				
				case 43:
					*uParam2 = 2464;
					break;
				
				case 44:
					*uParam2 = 2465;
					break;
				
				case 45:
					*uParam2 = 2466;
					break;
				
				case 46:
					*uParam2 = 2467;
					break;
				
				case 47:
					*uParam2 = 2468;
					break;
				
				case 48:
					*uParam2 = 2469;
					break;
				
				case 49:
					*uParam2 = 2470;
					break;
				
				case 50:
					*uParam2 = 2471;
					break;
				
				case 51:
					*uParam2 = 2601;
					break;
				
				case 52:
					*uParam2 = 2602;
					break;
				
				case 53:
					*uParam2 = 2603;
					break;
				
				case 54:
					*uParam2 = 2604;
					break;
				
				case 55:
					*uParam2 = 2605;
					break;
				
				case 56:
					*uParam2 = 2606;
					break;
				
				case 57:
					*uParam2 = 2607;
					break;
				
				case 58:
					*uParam2 = 2608;
					break;
				
				case 59:
					*uParam2 = 2609;
					break;
				
				case 60:
					*uParam2 = 2610;
					break;
				
				case 61:
					*uParam2 = 2611;
					break;
				
				case 62:
					*uParam2 = 3203;
					break;
				
				case 63:
					*uParam2 = 3204;
					break;
				
				case 64:
					*uParam2 = 3205;
					break;
				
				case 65:
					*uParam2 = 3206;
					break;
				
				case 66:
					*uParam2 = 3207;
					break;
				
				case 67:
					*uParam2 = 3208;
					break;
				
				case 68:
					*uParam2 = 3680;
					break;
				
				case 69:
					*uParam2 = 3681;
					break;
				
				case 70:
					*uParam2 = 3682;
					break;
				
				case 71:
					*uParam2 = 3683;
					break;
				
				case 72:
					*uParam2 = 3684;
					break;
				
				case 73:
					*uParam2 = 3685;
					break;
				
				case 74:
					*uParam2 = 3686;
					break;
				
				case 75:
					*uParam2 = 3687;
					break;
				
				case 76:
					*uParam2 = 3688;
					break;
				
				case 77:
					*uParam2 = 3689;
					break;
				
				case 78:
					*uParam2 = 3801;
					break;
				
				case joaat("MPSV_LP0_31"):
					*uParam2 = 3802;
					break;
				
				case 80:
					*uParam2 = 3803;
					break;
				
				case 81:
					*uParam2 = 3804;
					break;
				
				case 82:
					*uParam2 = 3805;
					break;
				
				case 83:
					*uParam2 = 3806;
					break;
				
				case 84:
					*uParam2 = 3807;
					break;
				
				case 85:
					*uParam2 = 3808;
					break;
				
				case 86:
					*uParam2 = 3906;
					break;
				
				case 87:
					*uParam2 = 3907;
					break;
				
				case 88:
					*uParam2 = 3908;
					break;
				
				case 89:
					*uParam2 = 5350;
					break;
				
				case 90:
					*uParam2 = 5351;
					break;
				
				case 91:
					*uParam2 = 5352;
					break;
				
				case 92:
					*uParam2 = 5353;
					break;
				
				case 93:
					*uParam2 = 5354;
					break;
				
				case 94:
					*uParam2 = 5355;
					break;
				
				case 95:
					*uParam2 = 5356;
					break;
				
				case 96:
					*uParam2 = 5357;
					break;
				
				case 97:
					*uParam2 = 5358;
					break;
				
				case 98:
					*uParam2 = 5359;
					break;
				
				case 99:
					*uParam2 = 5360;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5361;
					break;
				
				case 101:
					*uParam2 = 5418;
					break;
				
				case 102:
					*uParam2 = 5419;
					break;
				
				case 103:
					*uParam2 = 5420;
					break;
				
				case 104:
					*uParam2 = 5421;
					break;
				
				case 105:
					*uParam2 = 5422;
					break;
				
				case 106:
					*uParam2 = 5423;
					break;
				
				case 107:
					*uParam2 = 5424;
					break;
				
				case 108:
					*uParam2 = 5425;
					break;
				
				case 109:
					*uParam2 = 5426;
					break;
				
				case 110:
					*uParam2 = 5427;
					break;
				
				case 111:
					*uParam2 = 5428;
					break;
				
				case 112:
					*uParam2 = 5429;
					break;
				
				case 113:
					*uParam2 = 5430;
					break;
				
				case 114:
					*uParam2 = 5431;
					break;
				
				case 115:
					*uParam2 = 5432;
					break;
				
				case 116:
					*uParam2 = 5433;
					break;
				
				case 117:
					*uParam2 = 5434;
					break;
				
				case 118:
					*uParam2 = 5435;
					break;
				
				case 119:
					*uParam2 = 5436;
					break;
				
				case 120:
					*uParam2 = 5437;
					break;
				
				case 121:
					*uParam2 = 5438;
					break;
				
				case 122:
					*uParam2 = 5439;
					break;
				
				case 123:
					*uParam2 = 5440;
					break;
				
				case 124:
					*uParam2 = 6138;
					break;
				
				case 125:
					*uParam2 = 6139;
					break;
				
				case 126:
					*uParam2 = 6140;
					break;
				
				case 127:
					*uParam2 = 6141;
					break;
				
				case 128:
					*uParam2 = 6142;
					break;
				
				case 129:
					*uParam2 = 6143;
					break;
				
				case 130:
					*uParam2 = 6144;
					break;
				
				case 131:
					*uParam2 = 6145;
					break;
				
				case 132:
					*uParam2 = 6146;
					break;
				
				case 133:
					*uParam2 = 6147;
					break;
				
				case 134:
					*uParam2 = 6148;
					break;
				
				case 135:
					*uParam2 = 6149;
					break;
				
				case 136:
					*uParam2 = 6150;
					break;
				
				case 137:
					*uParam2 = 6151;
					break;
				
				case 138:
					*uParam2 = 6152;
					break;
				
				case 139:
					*uParam2 = 6451;
					break;
				
				case 140:
					*uParam2 = 6452;
					break;
				
				case 141:
					*uParam2 = 6453;
					break;
				
				case 142:
					*uParam2 = 6454;
					break;
				
				case 143:
					*uParam2 = 6455;
					break;
				
				case 144:
					*uParam2 = 6456;
					break;
				
				case 145:
					*uParam2 = 6457;
					break;
				
				case 146:
					*uParam2 = 6458;
					break;
				
				case 147:
					*uParam2 = 6459;
					break;
				
				case 148:
					*uParam2 = 6460;
					break;
				
				case 149:
					*uParam2 = 6461;
					break;
				
				case 150:
					*uParam2 = 6462;
					break;
				
				case 151:
					*uParam2 = 6463;
					break;
				
				case 152:
					*uParam2 = 6464;
					break;
				
				case 153:
					*uParam2 = 6465;
					break;
				
				case 154:
					*uParam2 = 7274;
					break;
				
				case 155:
					*uParam2 = 7275;
					break;
				
				case 156:
					*uParam2 = 7276;
					break;
				
				case 157:
					*uParam2 = 7277;
					break;
				
				case 158:
					*uParam2 = 7278;
					break;
				
				case 159:
					*uParam2 = 7279;
					break;
				
				case 160:
					*uParam2 = 7280;
					break;
				
				case 161:
					*uParam2 = 7895;
					break;
				
				case 162:
					*uParam2 = 7896;
					break;
				
				case 163:
					*uParam2 = 7897;
					break;
				
				case 164:
					*uParam2 = 7898;
					break;
				
				case 165:
					*uParam2 = 7899;
					break;
				
				case 166:
					*uParam2 = 7900;
					break;
				
				case 167:
					*uParam2 = 7901;
					break;
				
				case 168:
					*uParam2 = 7902;
					break;
				
				case 169:
					*uParam2 = 7903;
					break;
				
				case 170:
					*uParam2 = 7904;
					break;
				
				case 171:
					*uParam2 = 7905;
					break;
				
				case 172:
					*uParam2 = 7906;
					break;
				
				case 173:
					*uParam2 = 7907;
					break;
				
				case 174:
					*uParam2 = 7908;
					break;
				
				case 175:
					*uParam2 = 7909;
					break;
				
				case 176:
					*uParam2 = 8325;
					break;
				
				case 177:
					*uParam2 = 8326;
					break;
				
				case 178:
					*uParam2 = 8327;
					break;
				
				case 179:
					*uParam2 = 8328;
					break;
				
				case 180:
					*uParam2 = 8329;
					break;
				
				case 181:
					*uParam2 = 8330;
					break;
				
				case 182:
					*uParam2 = 8331;
					break;
				
				case 183:
					*uParam2 = 8332;
					break;
				
				case 184:
					*uParam2 = 8333;
					break;
				
				case 185:
					*uParam2 = 8334;
					break;
				
				case 186:
					*uParam2 = 8335;
					break;
				
				case 187:
					*uParam2 = 8336;
					break;
				
				case 188:
					*uParam2 = 8337;
					break;
				
				case 189:
					*uParam2 = 8338;
					break;
				
				case 190:
					*uParam2 = 8339;
					break;
				
				case 191:
					*uParam2 = 8340;
					break;
				
				case 192:
					*uParam2 = 8341;
					break;
				
				case 193:
					*uParam2 = 8342;
					break;
				
				case 194:
					*uParam2 = 8343;
					break;
				
				case 195:
					*uParam2 = 8344;
					break;
				
				case 196:
					*uParam2 = 8345;
					break;
				
				case 197:
					*uParam2 = 8346;
					break;
				
				case 198:
					*uParam2 = 8347;
					break;
				
				case 199:
					*uParam2 = 8348;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8349;
					break;
				
				case 201:
					*uParam2 = 8942;
					break;
				
				case 202:
					*uParam2 = 8943;
					break;
				
				case 203:
					*uParam2 = 8944;
					break;
				
				case 204:
					*uParam2 = 8945;
					break;
				
				case 205:
					*uParam2 = 8946;
					break;
				
				case 206:
					*uParam2 = 9445;
					break;
				
				case 207:
					*uParam2 = 9446;
					break;
				
				case 208:
					*uParam2 = 9447;
					break;
				
				case 209:
					*uParam2 = 9448;
					break;
				
				case 210:
					*uParam2 = 9449;
					break;
				
				case 211:
					*uParam2 = 9450;
					break;
				
				case 212:
					*uParam2 = 9451;
					break;
				
				case 213:
					*uParam2 = 9452;
					break;
				
				case 214:
					*uParam2 = 9453;
					break;
				
				case 215:
					*uParam2 = 9454;
					break;
				
				case 216:
					*uParam2 = 9455;
					break;
				
				case 217:
					*uParam2 = 9456;
					break;
				
				case 218:
					*uParam2 = 9457;
					break;
				
				case 219:
					*uParam2 = 9458;
					break;
				
				case 220:
					*uParam2 = 9459;
					break;
				
				case 221:
					*uParam2 = 9460;
					break;
				
				case 222:
					*uParam2 = 9461;
					break;
				
				case 223:
					*uParam2 = 9462;
					break;
				
				case 224:
					*uParam2 = 9463;
					break;
				
				case 225:
					*uParam2 = 9464;
					break;
				
				case 226:
					*uParam2 = 9465;
					break;
				
				case 227:
					*uParam2 = 9466;
					break;
				
				case 228:
					*uParam2 = 9467;
					break;
				
				case 229:
					*uParam2 = 9468;
					break;
				
				case 230:
					*uParam2 = 9469;
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 11771;
}

int func_210(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_211(int iParam0)
{
	if (!unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 1))
		{
			return 0;
		}
		if (!unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 2))
		{
			return 0;
		}
	}
	return 1;
}

struct<14> func_212(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_275();
	if (iParam0 == joaat("player_zero"))
	{
		func_257(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_238(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_213(iParam1, iParam2);
	}
	return Global_76647[0 /*14*/];
}

void func_213(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_237(iParam1);
			break;
		
		case 2:
			func_236(iParam1);
			break;
		
		case 3:
			func_233(iParam1);
			break;
		
		case 4:
			func_232(iParam1);
			break;
		
		case 6:
			func_231(iParam1);
			break;
		
		case 5:
			func_230(iParam1);
			break;
		
		case 8:
			func_229(iParam1);
			break;
		
		case 9:
			func_228(iParam1);
			break;
		
		case 10:
			func_227(iParam1);
			break;
		
		case 1:
			func_226(iParam1);
			break;
		
		case 7:
			func_225(iParam1);
			break;
		
		case 11:
			func_224(iParam1);
			break;
		
		case 12:
			func_223(iParam1);
			break;
		
		case 13:
			func_222(iParam1);
			break;
		
		case 14:
			func_214(iParam1);
			break;
	}
}

void func_214(int iParam0)
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
	iVar10 = 14;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 49;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 63;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar6 = 26;
			iVar7 = 10;
			iVar1 = 18;
			iVar8 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar6 = 26;
			iVar7 = 11;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar6 = 26;
			iVar7 = 12;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar6 = 26;
			iVar7 = 13;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar6 = 26;
			iVar7 = 14;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar6 = 26;
			iVar7 = 15;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_221(iVar10, iParam0, 155, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_215(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;
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
	uParam0->f_12 = func_220(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x856D5567211886A2(sParam3) != unk_0x856D5567211886A2("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0xBE20AB8238688965(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0xBE20AB8238688965(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0xBE20AB8238688965(&(uParam0->f_6), 5);
		}
		unk_0xBE20AB8238688965(&(uParam0->f_6), 1);
		unk_0xBE20AB8238688965(&(uParam0->f_6), 2);
		unk_0xBE20AB8238688965(&(uParam0->f_6), 6);
		if (func_292(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x4D0432E34C5996D9(Global_2621444, joaat("REBREATHER"), 0))
			{
				unk_0xBE20AB8238688965(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_219(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xD2459066EA58CE43(&(uParam0->f_6), 2);
			}
			if (!func_219(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xBE20AB8238688965(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_219(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xD2459066EA58CE43(&(uParam0->f_6), 2);
			}
			if (!func_219(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xBE20AB8238688965(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_219(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xD2459066EA58CE43(&(uParam0->f_6), 2);
			}
			if (!func_219(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xBE20AB8238688965(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0xBE20AB8238688965(&(uParam0->f_6), 0);
		unk_0xBE20AB8238688965(&(uParam0->f_6), 5);
		if (func_210(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0xBE20AB8238688965(&(uParam0->f_6), 1);
		}
		if (func_210(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0xBE20AB8238688965(&(uParam0->f_6), 2);
		}
		if (!func_210(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0xBE20AB8238688965(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0xBE20AB8238688965(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_292(14))
			{
				return;
			}
			iVar0 = func_208(func_218(iParam1, uParam0->f_2), Global_76644, 0);
			if (unk_0xCE990E643CD9D0E5(iVar0, uParam0->f_1))
			{
				unk_0xBE20AB8238688965(&(uParam0->f_6), 1);
			}
			iVar0 = func_208(func_217(iParam1, uParam0->f_2), Global_76644, 0);
			if (unk_0xCE990E643CD9D0E5(iVar0, uParam0->f_1))
			{
				unk_0xBE20AB8238688965(&(uParam0->f_6), 2);
			}
			if (func_216(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_208(iVar1, Global_76644, 0);
				if (!unk_0xCE990E643CD9D0E5(iVar0, uParam0->f_1))
				{
					unk_0xBE20AB8238688965(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0xBE20AB8238688965(&(uParam0->f_6), 1);
			unk_0xBE20AB8238688965(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0xBE20AB8238688965(&(uParam0->f_6), 1);
			unk_0xBE20AB8238688965(&(uParam0->f_6), 2);
		}
	}
}

bool func_216(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 978;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 979;
					break;
				
				case 3:
					*uParam2 = 1429;
					break;
				
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 9:
					*uParam2 = 1438;
					break;
				
				case 10:
					*uParam2 = 1440;
					break;
				
				case 1:
					*uParam2 = 1011;
					break;
				
				case 7:
					*uParam2 = 1441;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
				
				case 12:
					*uParam2 = 1030;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
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
				
				case 7:
					*uParam2 = 1442;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 2:
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
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 4:
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
		
		case 5:
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
		
		case 6:
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
		
		case 7:
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
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
	}
	return *uParam2 != 978;
}

int func_217(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 927;
					break;
				
				case 3:
					return 1414;
					break;
				
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 9:
					return 1423;
					break;
				
				case 10:
					return 1425;
					break;
				
				case 1:
					return 959;
					break;
				
				case 7:
					return 1426;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
				
				case 12:
					return 978;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 928;
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
				
				case 7:
					return 1427;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
			}
			break;
		
		case 2:
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
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 4:
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
		
		case 5:
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
		
		case 6:
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
		
		case 7:
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
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 975;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
	}
	return 935;
}

int func_218(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 875;
					break;
				
				case 3:
					return 1399;
					break;
				
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 9:
					return 1408;
					break;
				
				case 10:
					return 1410;
					break;
				
				case 1:
					return 907;
					break;
				
				case 7:
					return 1411;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
				
				case 12:
					return 926;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 876;
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
				
				case 7:
					return 1412;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
			}
			break;
		
		case 2:
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
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 4:
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
		
		case 5:
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
		
		case 6:
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
		
		case 7:
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
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 923;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
	}
	return 883;
}

int func_219(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_76644;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_209(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_208(iVar2, iVar0, 0);
		return unk_0xCE990E643CD9D0E5(iVar3, iVar1);
	}
	return 0;
}

int func_220(int iParam0)
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

void func_221(int iParam0, int iParam1, int iParam2, int iParam3)
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
	uVar1 = Global_76647[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar17 = (iParam1 - iParam2);
		if (iVar17 >= 0)
		{
			iVar18 = unk_0x04222560EC9A383D(uVar1, 0);
			if (iVar18 > iVar17)
			{
				unk_0xB11622B138AA8874(iVar17, &Var2);
				Global_2621444 = Var2.f_1;
				Global_2621445 = Var2;
				func_215(&(Global_76647[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_215(&(Global_76647[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0x8BC52CDFCD2A4534(&Var19);
		iVar37 = (iParam1 - iParam2);
		if (iVar37 >= 0)
		{
			iVar38 = unk_0x21A524CB091C80DE(iVar1, 7, -1, 1, -1, -1);
			if (iVar38 > iVar37)
			{
				unk_0xD2FB5DC35CA67C53(iVar37, &Var19);
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
				func_215(&(Global_76647[0 /*14*/]), iParam0, iParam1, &(Var19.f_9), Var19.f_3, Var19.f_4, Var19.f_5, unk_0x4D0432E34C5996D9(Var19.f_1, joaat("OUTFIT_ONLY"), 0), iVar36, 2, Var19.f_1 != 0);
				return;
			}
		}
	}
	else
	{
		unk_0x1C2EE47D7054A42C(&Var39);
		if (iParam3 != -1 && Global_76814)
		{
			unk_0x2209D2FE26AA9212(iParam3, &Var39);
			Global_2621444 = Var39.f_1;
			Global_2621445 = Var39;
			func_215(&(Global_76647[0 /*14*/]), iParam0, iParam1, &(Var39.f_9), Var39.f_3, Var39.f_4, Var39.f_5, unk_0x4D0432E34C5996D9(Var39.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var39.f_1 != 0);
			return;
		}
		iVar56 = (iParam1 - iParam2);
		if (iVar56 >= 0)
		{
			iVar57 = unk_0x21A524CB091C80DE(iVar1, 7, -1, 0, -1, func_172(iParam0));
			if (iVar57 > iVar56)
			{
				unk_0x627AC3AC8991672C(iVar56, &Var39);
				Global_2621444 = Var39.f_1;
				Global_2621445 = Var39;
				func_215(&(Global_76647[0 /*14*/]), iParam0, iParam1, &(Var39.f_9), Var39.f_3, Var39.f_4, Var39.f_5, unk_0x4D0432E34C5996D9(Var39.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var39.f_1 != 0);
				return;
			}
		}
	}
}

void func_222(int iParam0)
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
	iVar10 = 13;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_221(iVar10, iParam0, 9, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_223(int iParam0)
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
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_221(iVar10, iParam0, 48, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_224(int iParam0)
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
	iVar10 = 11;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_221(iVar10, iParam0, 1, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_225(int iParam0)
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
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_221(iVar10, iParam0, 1, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_226(int iParam0)
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
	iVar10 = 1;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_221(iVar10, iParam0, 6, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_227(int iParam0)
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
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		default:
			func_221(iVar10, iParam0, 33, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_228(int iParam0)
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
	iVar10 = 9;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_221(iVar10, iParam0, 17, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_229(int iParam0)
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
	iVar10 = 8;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_221(iVar10, iParam0, 18, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_230(int iParam0)
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
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_221(iVar10, iParam0, 7, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_231(int iParam0)
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
	iVar10 = 6;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_221(iVar10, iParam0, 84, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_232(int iParam0)
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
	iVar10 = 4;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 80;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		default:
			func_221(iVar10, iParam0, 104, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_233(int iParam0)
{
	if (iParam0 < 136)
	{
		func_235(iParam0);
	}
	else
	{
		func_234(iParam0);
	}
	if (Global_76647[0 /*14*/].f_2 == -1)
	{
		func_221(3, iParam0, 242, -1);
	}
}

void func_234(int iParam0)
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
	iVar10 = 3;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar6 = 25;
			iVar7 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar6 = 25;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar6 = 25;
			iVar7 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar6 = 25;
			iVar7 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar6 = 27;
			iVar7 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_235(int iParam0)
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
	iVar10 = 3;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_236(int iParam0)
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
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		default:
			func_221(iVar10, iParam0, 9, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_237(int iParam0)
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
	iVar10 = 0;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_221(iVar10, iParam0, 7, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_238(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_256(iParam1);
			break;
		
		case 2:
			func_255(iParam1);
			break;
		
		case 3:
			func_251(iParam1);
			break;
		
		case 4:
			func_250(iParam1);
			break;
		
		case 6:
			func_249(iParam1);
			break;
		
		case 5:
			func_248(iParam1);
			break;
		
		case 8:
			func_247(iParam1);
			break;
		
		case 9:
			func_246(iParam1);
			break;
		
		case 10:
			func_245(iParam1);
			break;
		
		case 1:
			func_244(iParam1);
			break;
		
		case 7:
			func_243(iParam1);
			break;
		
		case 11:
			func_242(iParam1);
			break;
		
		case 12:
			func_241(iParam1);
			break;
		
		case 13:
			func_240(iParam1);
			break;
		
		case 14:
			func_239(iParam1);
			break;
	}
}

void func_239(int iParam0)
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
	iVar10 = 14;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 4590;
			iVar8 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 4100;
			iVar8 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 3850;
			iVar8 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 1850;
			iVar8 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5250;
			iVar8 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 5050;
			iVar8 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 2500;
			iVar8 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 1950;
			iVar8 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 3900;
			iVar8 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 3550;
			iVar8 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 4500;
			iVar8 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2950;
			iVar8 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 130;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 112;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 118;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 125;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 139;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 198;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 200;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 208;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 160;
			iVar8 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 32;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 38;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 45;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 48;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_221(iVar10, iParam0, 175, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_240(int iParam0)
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
	iVar10 = 13;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_221(iVar10, iParam0, 9, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_241(int iParam0)
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
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_221(iVar10, iParam0, 47, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_242(int iParam0)
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
	iVar10 = 11;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_221(iVar10, iParam0, 63, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_243(int iParam0)
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
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_221(iVar10, iParam0, 1, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_244(int iParam0)
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
	iVar10 = 1;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_221(iVar10, iParam0, 5, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_245(int iParam0)
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
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		default:
			func_221(iVar10, iParam0, 53, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_246(int iParam0)
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
	iVar10 = 9;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_221(iVar10, iParam0, 12, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_247(int iParam0)
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
	iVar10 = 8;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		default:
			func_221(iVar10, iParam0, 77, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_248(int iParam0)
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
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_221(iVar10, iParam0, 7, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_249(int iParam0)
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
	iVar10 = 6;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_221(iVar10, iParam0, 134, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_250(int iParam0)
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
	iVar10 = 4;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar6 = 22;
			iVar7 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar6 = 22;
			iVar7 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_221(iVar10, iParam0, 117, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_251(int iParam0)
{
	if (iParam0 < 107)
	{
		func_254(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_253(iParam0);
	}
	else
	{
		func_252(iParam0);
	}
	if (Global_76647[0 /*14*/].f_2 == -1)
	{
		func_221(3, iParam0, 318, -1);
	}
}

void func_252(int iParam0)
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
	iVar10 = 3;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar9 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar6 = 29;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar6 = 29;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar6 = 29;
			iVar7 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar6 = 30;
			iVar7 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar6 = 30;
			iVar7 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar6 = 30;
			iVar7 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar6 = 30;
			iVar7 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar6 = 30;
			iVar7 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar6 = 31;
			iVar7 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar6 = 31;
			iVar7 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar6 = 31;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar6 = 31;
			iVar7 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar6 = 31;
			iVar7 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_253(int iParam0)
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
	iVar10 = 3;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 3100;
			iVar9 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 2800;
			iVar9 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 2500;
			iVar9 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3000;
			iVar9 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_254(int iParam0)
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
	iVar10 = 3;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 23;
			iVar9 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 26;
			iVar9 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 24;
			iVar9 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_255(int iParam0)
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
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_221(iVar10, iParam0, 21, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_256(int iParam0)
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
	iVar10 = 0;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		default:
			func_221(iVar10, iParam0, 10, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_257(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_274(iParam1);
			break;
		
		case 2:
			func_273(iParam1);
			break;
		
		case 3:
			func_270(iParam1);
			break;
		
		case 4:
			func_269(iParam1);
			break;
		
		case 6:
			func_268(iParam1);
			break;
		
		case 5:
			func_267(iParam1);
			break;
		
		case 8:
			func_266(iParam1);
			break;
		
		case 9:
			func_265(iParam1);
			break;
		
		case 10:
			func_264(iParam1);
			break;
		
		case 1:
			func_263(iParam1);
			break;
		
		case 7:
			func_262(iParam1);
			break;
		
		case 11:
			func_261(iParam1);
			break;
		
		case 12:
			func_260(iParam1);
			break;
		
		case 13:
			func_259(iParam1);
			break;
		
		case 14:
			func_258(iParam1);
			break;
	}
}

void func_258(int iParam0)
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
	iVar10 = 14;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 11;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 56;
			iVar8 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 70;
			iVar8 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 74;
			iVar8 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 78;
			iVar8 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 82;
			iVar8 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar8 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 235;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 250;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 275;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 280;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 295;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 179;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 225;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		default:
			func_221(iVar10, iParam0, 113, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_259(int iParam0)
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
	iVar10 = 13;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_221(iVar10, iParam0, 10, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_260(int iParam0)
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
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_221(iVar10, iParam0, 53, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_261(int iParam0)
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
	iVar10 = 11;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_221(iVar10, iParam0, 45, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_262(int iParam0)
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
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_221(iVar10, iParam0, 1, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_263(int iParam0)
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
	iVar10 = 1;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_221(iVar10, iParam0, 5, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_264(int iParam0)
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
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			break;
		
		default:
			func_221(iVar10, iParam0, 48, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_265(int iParam0)
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
	iVar10 = 9;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_221(iVar10, iParam0, 20, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_266(int iParam0)
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
	iVar10 = 8;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_221(iVar10, iParam0, 24, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_267(int iParam0)
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
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_221(iVar10, iParam0, 14, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_268(int iParam0)
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
	iVar10 = 6;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_221(iVar10, iParam0, 99, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_269(int iParam0)
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
	iVar10 = 4;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 29;
			iVar7 = 0;
			break;
		
		default:
			func_221(iVar10, iParam0, 113, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_270(int iParam0)
{
	if (iParam0 < 60)
	{
		func_272(iParam0);
	}
	else
	{
		func_271(iParam0);
	}
	if (Global_76647[0 /*14*/].f_2 == -1)
	{
		func_221(3, iParam0, 181, -1);
	}
}

void func_271(int iParam0)
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
	iVar10 = 3;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar6 = 21;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar6 = 21;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_272(int iParam0)
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
	iVar10 = 3;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_273(int iParam0)
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
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_221(iVar10, iParam0, 6, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_274(int iParam0)
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
	iVar10 = 0;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_221(iVar10, iParam0, 7, -1);
			return;
			break;
	}
	func_215(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_275()
{
	Global_76647[0 /*14*/].f_1 = -1;
	Global_76647[0 /*14*/].f_2 = -1;
	Global_76647[0 /*14*/].f_5 = -1;
	Global_76647[0 /*14*/].f_3 = -1;
	Global_76647[0 /*14*/].f_4 = -1;
	Global_76647[0 /*14*/].f_7 = 0;
	Global_76647[0 /*14*/].f_6 = 0;
	Global_76647[0 /*14*/].f_13 = -1;
	Global_76647[0 /*14*/].f_12 = 0;
	Global_76647[0 /*14*/] = 0;
	StringCopy(&(Global_76647[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_276(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar22;
	int iVar32;
	var uVar33;
	
	if (unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x36FE6D3220816ADA(iParam0);
	Global_76647[1 /*14*/] = { func_212(iVar0, iParam1, iParam2, -1) };
	if (!unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_194(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_276(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar22 = { func_191(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_276(iParam0, 14, uVar22[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_76647[2 /*14*/] = { func_212(iVar0, 14, iVar4, -1) };
									if (Global_76647[2 /*14*/].f_12 == iVar3)
									{
										if (func_276(iParam0, 14, iVar4))
										{
											if (!func_168(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_76647[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_202(iParam0, iVar2);
						Global_76647[2 /*14*/] = { func_212(iVar0, iVar2, iVar1, -1) };
						if (!func_168(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_76647[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar33 = { func_191(iVar0, iParam2) };
		iVar32 = 0;
		while (iVar32 <= 8)
		{
			if (!func_276(iParam0, 14, uVar33[iVar32]))
			{
				return 0;
			}
			iVar32++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0xA98E0435012EAF07(iParam0, Global_76647[1 /*14*/].f_12) == Global_76647[1 /*14*/].f_3 && (unk_0x77A103B794FA7737(iParam0, Global_76647[1 /*14*/].f_12) == Global_76647[1 /*14*/].f_4 || Global_76647[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_76647[1 /*14*/].f_3 == unk_0x3FB4D40A857CEA77(iParam0, func_172(iParam1)) && Global_76647[1 /*14*/].f_4 == unk_0x79AFA009D186C4FB(iParam0, func_172(iParam1)))
	{
		return 1;
	}
	return 0;
}

void func_277(bool bParam0)
{
	var uVar0;
	
	uVar0 = unk_0x2639A2323BEA8CC6();
	if (!unk_0x252C34B7867FDDFA(uVar0))
	{
		if (bParam0)
		{
		}
		unk_0xDDEDC06C88DA4E04(uVar0, bParam0, 16);
		unk_0xDDEDC06C88DA4E04(iVar0, bParam0, 32);
	}
	func_77(1, 1, 0, 0, 0, 0, 0);
}

void func_278(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	iVar0 = func_285(iParam0);
	iVar1 = -1;
	if (iVar0 == -1)
	{
		iVar1 = func_284(iParam0);
		if (!iVar1 == -1)
		{
			Global_42562[iVar1 /*5*/].f_3 = (Global_42562[iVar1 /*5*/].f_3 + iParam1);
			Global_42562[iVar1 /*5*/].f_2 = (Global_42562[iVar1 /*5*/].f_2 + iParam1);
		}
		return;
	}
	func_279(1, iVar0, 2, iParam1);
}

void func_279(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_280(iParam0, iParam1, iParam2, 0, iParam3, 1);
}

void func_280(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, int iParam5)
{
	int iVar0;
	
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
	if (func_282(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_281();
	if (iVar0 == -1)
	{
		return;
	}
	Global_42669[iVar0 /*6*/] = iParam0;
	Global_42669[iVar0 /*6*/].f_1 = iParam1;
	Global_42669[iVar0 /*6*/].f_2 = iParam2;
	Global_42669[iVar0 /*6*/].f_3 = iParam3;
	Global_42669[iVar0 /*6*/].f_4 = uParam4;
	Global_42669[iVar0 /*6*/].f_5 = iParam5;
}

int func_281()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42669[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_282(int iParam0, int iParam1, int iParam2)
{
	if (func_283(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_283(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_42669[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_42669[iVar0 /*6*/])
			{
				if (iParam1 == Global_42669[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_284(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_42562[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_285(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42588[iVar0 /*5*/].f_1)
		{
			return Global_42588[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_286(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_287(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_287(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_42588[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_42588[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_288(int iParam0)
{
	if (unk_0x87F0CB19476706C3())
	{
		if ((unk_0x578C4EF320340AF7() - Global_28) > iParam0)
		{
			Global_27 = unk_0x578C4EF320340AF7();
		}
		Global_28 = unk_0x578C4EF320340AF7();
		if ((unk_0x578C4EF320340AF7() - Global_27) > iParam0)
		{
			if (func_289())
			{
				Global_27 = unk_0x578C4EF320340AF7();
				return 1;
			}
		}
	}
	return 0;
}

int func_289()
{
	if (unk_0xF0C12886E5C1B20E())
	{
		return 0;
	}
	if (unk_0x1BD7199394D7F19A(0, 18) || unk_0x1BD7199394D7F19A(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_290(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 7:
			*(uParam1[0 /*15*/]) = { 405.9127f, -711.7676f, 31.2618f };
			(uParam1[0 /*15*/])->f_3 = { 19.919f, 0f, 90.3396f };
			(uParam1[0 /*15*/])->f_6 = { 405.4205f, -711.784f, 29.3979f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 5.5077f, 0f, 99.6259f };
			(uParam1[0 /*15*/])->f_12 = 50f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 398.0591f, -714.2009f, 29.6786f };
			(uParam1[1 /*15*/])->f_3 = { -2.2484f, 0.0024f, 51.3791f };
			(uParam1[1 /*15*/])->f_6 = { 397.969f, -714.1289f, 29.6741f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -2.2484f, 0.0024f, 51.174f };
			(uParam1[1 /*15*/])->f_12 = 38.1457f;
			(uParam1[1 /*15*/])->f_13 = 5.58f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { 398.3901f, -714.3004f, 29.7155f };
			(uParam1[2 /*15*/])->f_3 = { -1.9825f, -0.0437f, 50.2219f };
			(uParam1[2 /*15*/])->f_6 = { 398.3167f, -714.2393f, 29.7122f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -1.9825f, -0.0437f, 48.076f };
			(uParam1[2 /*15*/])->f_12 = 39.2093f;
			(uParam1[2 /*15*/])->f_13 = 13f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { 405.5188f, -709.9571f, 29.6613f };
			(uParam1[3 /*15*/])->f_3 = { -2.8617f, 0.0312f, 110.409f };
			(uParam1[3 /*15*/])->f_6 = { 405.8275f, -709.2303f, 29.6882f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -2.8617f, 0.0312f, 103.4981f };
			(uParam1[3 /*15*/])->f_12 = 38.1457f;
			(uParam1[3 /*15*/])->f_13 = 8.375f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 397.4691f, -712.0601f, 29.7563f };
			(uParam1[5 /*15*/])->f_3 = { -5.987f, -0.017f, 154.1207f };
			(uParam1[5 /*15*/])->f_6 = { 397.4691f, -712.0601f, 29.7563f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -5.987f, -0.017f, 154.1207f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 397.4691f, -712.0601f, 29.7563f };
			uParam1->f_91.f_3 = { -5.987f, -0.017f, 154.1207f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { 397.6112f, -710.4716f, 29.7051f };
			uParam1->f_98.f_3 = { 4.6835f, -0.3053f, 163.9312f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { 401.2501f, -709.6287f, 28.1688f };
			uParam1->f_108 = 0f;
			uParam1->f_109 = { 396.8529f, -713.7012f, 28.2854f };
			uParam1->f_112[0 /*3*/] = { 395.8499f, -711.9299f, 28.2849f };
			uParam1->f_112[1 /*3*/] = { 397.0676f, -712.2994f, 28.285f };
			uParam1->f_119 = { 396.5359f, -692.8924f, 28.2871f };
			uParam1->f_123 = 1.55f;
			uParam1->f_124 = 7.705f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 5.115f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 1;
			uParam1->f_129 = { 398.3131f, -708.6296f, 28.2844f };
			uParam1->f_132 = { 402.7359f, -689.6898f, 28.2549f };
			uParam1->f_135 = { 401.3918f, -718.0711f, 28.1762f };
			uParam1->f_135.f_3 = 0f;
			uParam1->f_135.f_4 = 10;
			uParam1->f_140[0 /*3*/] = { 390.1166f, -686.0222f, 28.27f };
			uParam1->f_150[0] = 94.1853f;
			uParam1->f_140[1 /*3*/] = { 444.7804f, -686.5525f, 27.5881f };
			uParam1->f_150[1] = 270.72f;
			uParam1->f_140[2 /*3*/] = { 382.391f, -671.3192f, 28.2481f };
			uParam1->f_150[2] = 57.3318f;
			return 1;
			break;
		
		case 8:
			*(uParam1[0 /*15*/]) = { -1405.148f, -195.824f, 50.5379f };
			(uParam1[0 /*15*/])->f_3 = { 15.4864f, 0f, 126.9167f };
			(uParam1[0 /*15*/])->f_6 = { -1405.472f, -195.2269f, 48.3459f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -6.4786f, 0f, 133.4543f };
			(uParam1[0 /*15*/])->f_12 = 43.8728f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -1414.142f, -200.2502f, 47.8477f };
			(uParam1[1 /*15*/])->f_3 = { -3.1055f, 0f, -105.8073f };
			(uParam1[1 /*15*/])->f_6 = { -1414.117f, -200.2495f, 47.8464f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -3.1055f, 0f, -105.1865f };
			(uParam1[1 /*15*/])->f_12 = 35.8476f;
			(uParam1[1 /*15*/])->f_13 = 8.425f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -1414.262f, -199.6994f, 47.8791f };
			(uParam1[2 /*15*/])->f_3 = { -3.8011f, 0f, -118.3642f };
			(uParam1[2 /*15*/])->f_6 = { -1414.096f, -199.7538f, 47.8676f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -3.8011f, 0f, -119.1302f };
			(uParam1[2 /*15*/])->f_12 = 35.8476f;
			(uParam1[2 /*15*/])->f_13 = 11.175f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -1410.383f, -193.2492f, 47.9417f };
			(uParam1[3 /*15*/])->f_3 = { -2.9923f, 0f, 176.5927f };
			(uParam1[3 /*15*/])->f_6 = { -1410.383f, -193.2492f, 47.9417f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -2.9923f, 0f, -172.945f };
			(uParam1[3 /*15*/])->f_12 = 40.3821f;
			(uParam1[3 /*15*/])->f_13 = 6.35f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -1411.703f, -200.2036f, 47.7778f };
			(uParam1[5 /*15*/])->f_3 = { -3.8893f, 0f, 130.3052f };
			(uParam1[5 /*15*/])->f_6 = { -1411.703f, -200.2036f, 47.7778f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -3.8893f, 0f, 130.3052f };
			(uParam1[5 /*15*/])->f_12 = 50.0049f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -1411.703f, -200.2036f, 47.7778f };
			uParam1->f_91.f_3 = { -3.8893f, 0f, 130.3052f };
			uParam1->f_97 = 50.0049f;
			uParam1->f_98 = { -1411.703f, -200.2036f, 47.7778f };
			uParam1->f_98.f_3 = { -3.8893f, 0f, 130.3052f };
			uParam1->f_104 = 50.0049f;
			uParam1->f_105 = { -1407.576f, -199.3733f, 46.0344f };
			uParam1->f_108 = 216.25f;
			uParam1->f_109 = { -1412.964f, -200.9753f, 46.2845f };
			uParam1->f_112[0 /*3*/] = { -1410.982f, -200.6391f, 46.2294f };
			uParam1->f_112[1 /*3*/] = { -1411.232f, -201.405f, 46.2381f };
			uParam1->f_119 = { -1427.788f, -187.1937f, 46.4753f };
			uParam1->f_123 = 1.75f;
			uParam1->f_124 = 9.84f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 1;
			uParam1->f_129 = { -1427.788f, -187.1937f, 46.4753f };
			uParam1->f_132 = { -1358.114f, -272.4378f, 41.4143f };
			uParam1->f_135 = { -1439.46f, -202.4132f, 46.6154f };
			uParam1->f_135.f_3 = 322.56f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { -1383.764f, -264.7188f, 41.9284f };
			uParam1->f_150[0] = 130.32f;
			uParam1->f_140[1 /*3*/] = { -1473.486f, -257.2262f, 48.9357f };
			uParam1->f_150[1] = 44.64f;
			uParam1->f_140[2 /*3*/] = { -1382.035f, -271.8694f, 41.9838f };
			uParam1->f_150[2] = 132.0433f;
			return 1;
			break;
		
		case 9:
			*(uParam1[0 /*15*/]) = { 290.8533f, 172.5629f, 105.446f };
			(uParam1[0 /*15*/])->f_3 = { 24.0829f, 0f, -19.9766f };
			(uParam1[0 /*15*/])->f_6 = { 290.8804f, 172.6505f, 105.1818f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -3.3518f, 0f, -17.3689f };
			(uParam1[0 /*15*/])->f_12 = 36.3239f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 298.6032f, 181.1218f, 104.7438f };
			(uParam1[1 /*15*/])->f_3 = { -3.2463f, 0f, 81.368f };
			(uParam1[1 /*15*/])->f_6 = { 298.5056f, 181.1366f, 104.7382f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -3.1642f, 0f, 81.8605f };
			(uParam1[1 /*15*/])->f_12 = 35.122f;
			(uParam1[1 /*15*/])->f_13 = 6.625f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { 298.311f, 180.892f, 104.7343f };
			(uParam1[2 /*15*/])->f_3 = { -3.3284f, 0f, 74.3088f };
			(uParam1[2 /*15*/])->f_6 = { 298.2302f, 180.9147f, 104.7294f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -2.3434f, 0f, 73.7343f };
			(uParam1[2 /*15*/])->f_12 = 35.122f;
			(uParam1[2 /*15*/])->f_13 = 10.175f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { 299.5133f, 174.0084f, 104.6379f };
			(uParam1[3 /*15*/])->f_3 = { 0.7548f, 0f, 40.582f };
			(uParam1[3 /*15*/])->f_6 = { 299.5133f, 174.0084f, 104.6379f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 0.7548f, 0f, 60.3641f };
			(uParam1[3 /*15*/])->f_12 = 42.6649f;
			(uParam1[3 /*15*/])->f_13 = 6.925f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 295.994f, 180.8288f, 104.8471f };
			(uParam1[5 /*15*/])->f_3 = { -9.6963f, 0f, -42.3682f };
			(uParam1[5 /*15*/])->f_6 = { 295.994f, 180.8288f, 104.8471f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -9.6963f, 0f, -42.3682f };
			(uParam1[5 /*15*/])->f_12 = 49.972f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 295.994f, 180.8288f, 104.8471f };
			uParam1->f_91.f_3 = { -9.6963f, 0f, -42.3682f };
			uParam1->f_97 = 49.972f;
			uParam1->f_98 = { 295.994f, 180.8288f, 104.8471f };
			uParam1->f_98.f_3 = { -9.6963f, 0f, -42.3682f };
			uParam1->f_104 = 49.972f;
			uParam1->f_105 = { 290.7559f, 177.1301f, 103.1523f };
			uParam1->f_108 = 74.52f;
			uParam1->f_109 = { 297.1597f, 181.7558f, 103.2131f };
			uParam1->f_112[0 /*3*/] = { 295.0739f, 181.1341f, 103.2455f };
			uParam1->f_112[1 /*3*/] = { 294.9557f, 182.0589f, 103.2534f };
			uParam1->f_119 = { 301.1894f, 190.1084f, 103.1125f };
			uParam1->f_123 = 1.65f;
			uParam1->f_124 = 11.1f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 1;
			uParam1->f_129 = { 301.1894f, 190.1084f, 103.1125f };
			uParam1->f_132 = { 153.4835f, 223.6109f, 105.7286f };
			uParam1->f_135 = { 280.205f, 152.9264f, 103.1841f };
			uParam1->f_135.f_3 = 248.76f;
			uParam1->f_135.f_4 = 5;
			uParam1->f_140[0 /*3*/] = { 227.2966f, 223.5158f, 104.5494f };
			uParam1->f_150[0] = 340.2f;
			uParam1->f_140[1 /*3*/] = { 196.4739f, 139.1099f, 100.2864f };
			uParam1->f_150[1] = 159.8148f;
			uParam1->f_140[2 /*3*/] = { 225.8337f, 237.2527f, 104.5132f };
			uParam1->f_150[2] = 337.7378f;
			return 1;
			break;
	}
	return 0;
}

int func_291(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			*(uParam1[0 /*15*/]) = { -826.7827f, 183.7083f, 72.275f };
			(uParam1[0 /*15*/])->f_3 = { 24.3451f, 0f, -121.7598f };
			(uParam1[0 /*15*/])->f_6 = { -826.7559f, 183.7018f, 71.8113f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 3.8335f, 0f, -148.4988f };
			(uParam1[0 /*15*/])->f_12 = 47.4693f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -826.2693f, 180.629f, 71.8522f };
			(uParam1[1 /*15*/])->f_3 = { 0.3385f, 0f, -125.3694f };
			(uParam1[1 /*15*/])->f_6 = { -826.1978f, 180.5609f, 71.8527f };
			(uParam1[1 /*15*/])->f_6.f_3 = { 0.3385f, 0f, -125.3694f };
			(uParam1[1 /*15*/])->f_12 = 32.278f;
			(uParam1[1 /*15*/])->f_13 = 2.6f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -825.2714f, 181.3561f, 71.8458f };
			(uParam1[2 /*15*/])->f_3 = { 0.3457f, 0f, -154.4318f };
			(uParam1[2 /*15*/])->f_6 = { -825.2325f, 181.2749f, 71.8464f };
			(uParam1[2 /*15*/])->f_6.f_3 = { 0.3457f, 0f, -154.4318f };
			(uParam1[2 /*15*/])->f_12 = 29.2584f;
			(uParam1[2 /*15*/])->f_13 = 3f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -823.177f, 180.3802f, 71.8216f };
			(uParam1[3 /*15*/])->f_3 = { -3.9551f, 0f, 122.8645f };
			(uParam1[3 /*15*/])->f_6 = { -823.3178f, 180.3653f, 71.8129f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -3.7621f, 0f, 116.8534f };
			(uParam1[3 /*15*/])->f_12 = 50f;
			(uParam1[3 /*15*/])->f_13 = 3f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -826.7559f, 183.7018f, 71.8113f };
			(uParam1[5 /*15*/])->f_3 = { 3.8335f, 0f, -148.4988f };
			(uParam1[5 /*15*/])->f_6 = { -826.7559f, 183.7018f, 71.8113f };
			(uParam1[5 /*15*/])->f_6.f_3 = { 3.8335f, 0f, -148.4988f };
			(uParam1[5 /*15*/])->f_12 = 47.4693f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -826.7559f, 183.7018f, 71.8113f };
			uParam1->f_91.f_3 = { 3.8335f, 0f, -148.4988f };
			uParam1->f_97 = 47.4693f;
			uParam1->f_98 = { -826.7559f, 183.7018f, 71.8113f };
			uParam1->f_98.f_3 = { 3.8335f, 0f, -148.4988f };
			uParam1->f_104 = 47.4693f;
			uParam1->f_105 = { -830.1575f, 175.3299f, 71.1486f };
			uParam1->f_108 = 335f;
			uParam1->f_109 = { -825.5045f, 179.6075f, 70.4304f };
			uParam1->f_112[0 /*3*/] = { -824.0706f, 179.5434f, 70.4812f };
			uParam1->f_112[1 /*3*/] = { -824.3851f, 178.7221f, 70.3815f };
			uParam1->f_119 = { -816.7786f, 178.2218f, 71.2278f };
			uParam1->f_123 = 3.03f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -816.7786f, 178.2218f, 71.2278f };
			uParam1->f_132 = { -816.7786f, 178.2218f, 71.2278f };
			uParam1->f_135 = { -857.8395f, 158.6697f, 64.0398f };
			uParam1->f_135.f_3 = 352.08f;
			uParam1->f_135.f_4 = 1;
			uParam1->f_140[0 /*3*/] = { -791.8809f, 155.0175f, 70.6749f };
			uParam1->f_150[0] = 189.9119f;
			uParam1->f_140[1 /*3*/] = { -795.0798f, 176.0365f, 72.835f };
			uParam1->f_150[1] = 186.5013f;
			return 1;
			break;
		
		case 2:
			*(uParam1[0 /*15*/]) = { 1988.662f, 3809.245f, 33.889f };
			(uParam1[0 /*15*/])->f_3 = { 2.3222f, 0f, 59.8915f };
			(uParam1[0 /*15*/])->f_6 = { 1988.41f, 3808.381f, 32.7818f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -3.5227f, 0f, 34.7012f };
			(uParam1[0 /*15*/])->f_12 = 41.7859f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 1999.131f, 3808.382f, 37.36f };
			(uParam1[1 /*15*/])->f_3 = { -19.3735f, 0f, 77.9903f };
			(uParam1[1 /*15*/])->f_6 = { 1999.131f, 3808.382f, 34.36f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -19.3735f, 0f, 77.9903f };
			(uParam1[1 /*15*/])->f_12 = 50f;
			(uParam1[1 /*15*/])->f_13 = 0f;
			(uParam1[1 /*15*/])->f_14 = 0;
			*(uParam1[2 /*15*/]) = { 1986.536f, 3808.712f, 32.7272f };
			(uParam1[2 /*15*/])->f_3 = { -4.2982f, 0.0419f, -15.1045f };
			(uParam1[2 /*15*/])->f_6 = { 1986.546f, 3808.747f, 32.7245f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -4.2982f, 0.0419f, -17.9532f };
			(uParam1[2 /*15*/])->f_12 = 27.6284f;
			(uParam1[2 /*15*/])->f_13 = 4f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { 1984.67f, 3817.902f, 32.6427f };
			(uParam1[3 /*15*/])->f_3 = { -1.1635f, 0.0008f, -168.368f };
			(uParam1[3 /*15*/])->f_6 = { 1984.887f, 3817.297f, 32.6298f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -1.1635f, 0.0008f, -168.368f };
			(uParam1[3 /*15*/])->f_12 = 39.0874f;
			(uParam1[3 /*15*/])->f_13 = 5f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 1985.8f, 3811.2f, 32.6f };
			(uParam1[5 /*15*/])->f_3 = { -3.2f, 0f, -172.8f };
			(uParam1[5 /*15*/])->f_6 = { 1985.8f, 3811.2f, 32.6f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -3.2f, 0f, -172.8f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 1985.8f, 3811.2f, 32.6f };
			uParam1->f_91.f_3 = { -3.2f, 0f, -172.8f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { 1985.8f, 3811.2f, 32.6f };
			uParam1->f_98.f_3 = { -3.2f, 0f, -172.8f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { 1984.545f, 3797.065f, 31.253f };
			uParam1->f_108 = 303.75f;
			uParam1->f_109 = { 1986.351f, 3809.745f, 31.1284f };
			uParam1->f_112[0 /*3*/] = { 1986.562f, 3811.748f, 31.1313f };
			uParam1->f_112[1 /*3*/] = { 1987.799f, 3811.082f, 31.0998f };
			uParam1->f_119 = { 1977.868f, 3815.664f, 32.7359f };
			uParam1->f_123 = 3.225f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 0;
			uParam1->f_128 = 0;
			uParam1->f_129 = { 1977.868f, 3815.664f, 32.7359f };
			uParam1->f_132 = { 1977.868f, 3815.664f, 32.7359f };
			uParam1->f_135 = { 1996.434f, 3822.849f, 31.1168f };
			uParam1->f_135.f_3 = 200.88f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { 1970.161f, 3832.697f, 31.0051f };
			uParam1->f_150[0] = 345.24f;
			uParam1->f_140[1 /*3*/] = { 1923.846f, 3793.484f, 31.3044f };
			uParam1->f_150[1] = 24.6026f;
			return 1;
			break;
		
		case 3:
			*(uParam1[0 /*15*/]) = { -15.8397f, -1454.149f, 32.0213f };
			(uParam1[0 /*15*/])->f_3 = { -0.6298f, 0.0085f, -9.3542f };
			(uParam1[0 /*15*/])->f_6 = { -15.0177f, -1455.3f, 31.1352f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -4.2034f, -0.0715f, -24.1621f };
			(uParam1[0 /*15*/])->f_12 = 38.6495f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -25.7417f, -1450.132f, 33.5422f };
			(uParam1[1 /*15*/])->f_3 = { -11.1198f, 0f, -123.8078f };
			(uParam1[1 /*15*/])->f_6 = { -25.7417f, -1450.132f, 30.5422f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -11.1198f, 0f, -123.8078f };
			(uParam1[1 /*15*/])->f_12 = 38.2875f;
			(uParam1[1 /*15*/])->f_13 = 0f;
			(uParam1[1 /*15*/])->f_14 = 0;
			*(uParam1[2 /*15*/]) = { -13.6389f, -1451.056f, 31.0825f };
			(uParam1[2 /*15*/])->f_3 = { -3.2369f, -0.029f, 176.9312f };
			(uParam1[2 /*15*/])->f_6 = { -25.7417f, -1450.132f, 30.5422f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -11.1198f, 0f, -123.8078f };
			(uParam1[2 /*15*/])->f_12 = 26.097f;
			(uParam1[2 /*15*/])->f_13 = 0f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -15.5813f, -1457.149f, 30.8433f };
			(uParam1[3 /*15*/])->f_3 = { -1.3844f, 0f, -15.1833f };
			(uParam1[3 /*15*/])->f_6 = { -15.6248f, -1457.021f, 30.8406f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -0.4872f, 0f, -12.8425f };
			(uParam1[3 /*15*/])->f_12 = 32.9661f;
			(uParam1[3 /*15*/])->f_13 = 4f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -14.4f, -1453.1f, 31f };
			(uParam1[5 /*15*/])->f_3 = { -3f, 0f, -144f };
			(uParam1[5 /*15*/])->f_6 = { -14.4f, -1453.1f, 31f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -3f, 0f, -144f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -14.4f, -1453.1f, 31f };
			uParam1->f_91.f_3 = { -3f, 0f, -144f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { -14.4f, -1453.1f, 31f };
			uParam1->f_98.f_3 = { -3f, 0f, -144f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { -5.0612f, -1456.55f, 29.4097f };
			uParam1->f_108 = 96.12f;
			uParam1->f_109 = { -13.8595f, -1454.332f, 29.5001f };
			uParam1->f_112[0 /*3*/] = { -14.2219f, -1452.365f, 29.5429f };
			uParam1->f_112[1 /*3*/] = { -13.2385f, -1452.184f, 29.548f };
			uParam1->f_119 = { -13.9595f, -1441.432f, 30.2797f };
			uParam1->f_123 = 3f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 0;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -13.9595f, -1441.432f, 30.2797f };
			uParam1->f_132 = { -13.9595f, -1441.432f, 30.2797f };
			uParam1->f_135 = { -31.3914f, -1468.314f, 30.0697f };
			uParam1->f_135.f_3 = 274.68f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { -14.3429f, -1423.344f, 29.7124f };
			uParam1->f_150[0] = 257.04f;
			uParam1->f_140[1 /*3*/] = { 9.0406f, -1416.897f, 28.3067f };
			uParam1->f_150[1] = 270.72f;
			uParam1->f_140[2 /*3*/] = { 0f, 0f, 0f };
			uParam1->f_150[2] = 0f;
			return 1;
			break;
		
		case 4:
			*(uParam1[0 /*15*/]) = { 21.2376f, 576.7308f, 185.7817f };
			(uParam1[0 /*15*/])->f_3 = { 1.9456f, 0.0255f, 179.1536f };
			(uParam1[0 /*15*/])->f_6 = { 21.2591f, 576.9102f, 183.7657f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -6.2299f, 0.0255f, 171.9914f };
			(uParam1[0 /*15*/])->f_12 = 39.704f;
			(uParam1[0 /*15*/])->f_13 = 6f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 12.3045f, 550.5663f, 176.4523f };
			(uParam1[1 /*15*/])->f_3 = { -4.0739f, 0f, 153.0748f };
			(uParam1[1 /*15*/])->f_6 = { 12.171f, 550.1313f, 176.4203f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -3.1393f, 0f, 151.833f };
			(uParam1[1 /*15*/])->f_12 = 31.4978f;
			(uParam1[1 /*15*/])->f_13 = 10f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -9.2007f, 554.8126f, 180.3407f };
			(uParam1[2 /*15*/])->f_3 = { -8.5854f, -0.0669f, -106.6038f };
			(uParam1[2 /*15*/])->f_6 = { -9.2007f, 554.8126f, 177.3407f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -8.5854f, -0.0669f, -106.6038f };
			(uParam1[2 /*15*/])->f_12 = 35.9812f;
			(uParam1[2 /*15*/])->f_13 = 0f;
			(uParam1[2 /*15*/])->f_14 = 0;
			*(uParam1[3 /*15*/]) = { 11.9662f, 545.9982f, 176.342f };
			(uParam1[3 /*15*/])->f_3 = { -4.2197f, 0.0086f, 36.2193f };
			(uParam1[3 /*15*/])->f_6 = { 11.9368f, 546.1504f, 176.3316f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -4.2197f, 0.0086f, 35.5229f };
			(uParam1[3 /*15*/])->f_12 = 50f;
			(uParam1[3 /*15*/])->f_13 = 4f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 21.2591f, 576.9102f, 183.7657f };
			(uParam1[5 /*15*/])->f_3 = { -6.2299f, 0.0255f, 171.9914f };
			(uParam1[5 /*15*/])->f_6 = { 21.2591f, 576.9102f, 183.7657f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -6.2299f, 0.0255f, 171.9914f };
			(uParam1[5 /*15*/])->f_12 = 39.704f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 21.2591f, 576.9102f, 183.7657f };
			uParam1->f_91.f_3 = { -6.2299f, 0.0255f, 171.9914f };
			uParam1->f_97 = 39.704f;
			uParam1->f_98 = { 21.2591f, 576.9102f, 183.7657f };
			uParam1->f_98.f_3 = { -6.2299f, 0.0255f, 171.9914f };
			uParam1->f_104 = 39.704f;
			uParam1->f_105 = { 16.4339f, 549.3853f, 175.3116f };
			uParam1->f_108 = 56.25f;
			uParam1->f_109 = { 10.8375f, 549.054f, 174.9718f };
			uParam1->f_112[0 /*3*/] = { 11.4257f, 547.3162f, 174.9038f };
			uParam1->f_112[1 /*3*/] = { 10.0769f, 547.0983f, 174.7723f };
			uParam1->f_119 = { 8.1316f, 539.2505f, 174.9739f };
			uParam1->f_123 = 3.025f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 0;
			uParam1->f_128 = 0;
			uParam1->f_129 = { 8.1316f, 539.2505f, 174.9739f };
			uParam1->f_132 = { 8.1316f, 539.2505f, 174.9739f };
			uParam1->f_135 = { 24.9549f, 566.2881f, 177.4016f };
			uParam1->f_135.f_3 = 110.16f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { 14.6234f, 526.126f, 173.6292f };
			uParam1->f_150[0] = 115.56f;
			uParam1->f_140[1 /*3*/] = { 11.0096f, 521.315f, 169.2275f };
			uParam1->f_150[1] = 197.1696f;
			uParam1->f_140[2 /*3*/] = { 0f, 0f, 0f };
			uParam1->f_150[2] = 0f;
			return 1;
			break;
		
		case 5:
			*(uParam1[0 /*15*/]) = { 1988.662f, 3809.245f, 33.889f };
			(uParam1[0 /*15*/])->f_3 = { 2.3222f, 0f, 59.8915f };
			(uParam1[0 /*15*/])->f_6 = { 1988.41f, 3808.381f, 32.7818f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -3.5227f, 0f, 34.7012f };
			(uParam1[0 /*15*/])->f_12 = 41.7859f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 1999.131f, 3808.382f, 37.36f };
			(uParam1[1 /*15*/])->f_3 = { -19.3735f, 0f, 77.9903f };
			(uParam1[1 /*15*/])->f_6 = { 1999.131f, 3808.382f, 34.36f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -19.3735f, 0f, 77.9903f };
			(uParam1[1 /*15*/])->f_12 = 50f;
			(uParam1[1 /*15*/])->f_13 = 0f;
			(uParam1[1 /*15*/])->f_14 = 0;
			*(uParam1[2 /*15*/]) = { 1986.536f, 3808.712f, 32.7272f };
			(uParam1[2 /*15*/])->f_3 = { -4.2982f, 0.0419f, -15.1045f };
			(uParam1[2 /*15*/])->f_6 = { 1986.546f, 3808.747f, 32.7245f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -4.2982f, 0.0419f, -17.9532f };
			(uParam1[2 /*15*/])->f_12 = 27.6284f;
			(uParam1[2 /*15*/])->f_13 = 4f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { 1984.67f, 3817.902f, 32.6427f };
			(uParam1[3 /*15*/])->f_3 = { -1.1635f, 0.0008f, -168.368f };
			(uParam1[3 /*15*/])->f_6 = { 1984.887f, 3817.297f, 32.6298f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -1.1635f, 0.0008f, -168.368f };
			(uParam1[3 /*15*/])->f_12 = 39.0874f;
			(uParam1[3 /*15*/])->f_13 = 5f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 1985.8f, 3811.2f, 32.6f };
			(uParam1[5 /*15*/])->f_3 = { -3.2f, 0f, -172.8f };
			(uParam1[5 /*15*/])->f_6 = { 1985.8f, 3811.2f, 32.6f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -3.2f, 0f, -172.8f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 1985.8f, 3811.2f, 32.6f };
			uParam1->f_91.f_3 = { -3.2f, 0f, -172.8f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { 21.2591f, 576.9102f, 183.7657f };
			uParam1->f_98.f_3 = { -6.2299f, 0.0255f, 171.9914f };
			uParam1->f_104 = 39.704f;
			uParam1->f_105 = { 1984.545f, 3797.065f, 31.253f };
			uParam1->f_108 = 303.75f;
			uParam1->f_109 = { 1986.351f, 3809.745f, 31.1284f };
			uParam1->f_112[0 /*3*/] = { 1986.562f, 3811.748f, 31.1313f };
			uParam1->f_112[1 /*3*/] = { 1987.799f, 3811.082f, 31.0998f };
			uParam1->f_119 = { 1977.868f, 3815.664f, 32.7359f };
			uParam1->f_123 = 3.225f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 0;
			uParam1->f_128 = 0;
			uParam1->f_129 = { 8.1316f, 539.2505f, 174.9739f };
			uParam1->f_132 = { 8.1316f, 539.2505f, 174.9739f };
			uParam1->f_135 = { 1996.434f, 3822.849f, 31.1168f };
			uParam1->f_135.f_3 = 200.88f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { 1970.161f, 3832.697f, 31.0051f };
			uParam1->f_150[0] = 345.24f;
			uParam1->f_140[1 /*3*/] = { 1923.846f, 3793.484f, 31.3044f };
			uParam1->f_150[1] = 24.6026f;
			return 1;
			break;
		
		case 6:
			*(uParam1[0 /*15*/]) = { -1189.419f, -1506.489f, 4.811f };
			(uParam1[0 /*15*/])->f_3 = { 4.0569f, 0f, -111.2564f };
			(uParam1[0 /*15*/])->f_6 = { -1189.142f, -1505.771f, 4.8109f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 4.1072f, 0.0399f, -111.7328f };
			(uParam1[0 /*15*/])->f_12 = 41.5362f;
			(uParam1[0 /*15*/])->f_13 = 5.55f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -1160.05f, -1514.512f, 4.7395f };
			(uParam1[1 /*15*/])->f_3 = { -2.2734f, 0.0031f, -127.6174f };
			(uParam1[1 /*15*/])->f_6 = { -1159.904f, -1514.625f, 4.7321f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -0.9723f, 0.0031f, -126.8698f };
			(uParam1[1 /*15*/])->f_12 = 26.7346f;
			(uParam1[1 /*15*/])->f_13 = 5.65f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -1159.954f, -1514.022f, 4.7491f };
			(uParam1[2 /*15*/])->f_3 = { -2.2734f, 0.0031f, -143.3719f };
			(uParam1[2 /*15*/])->f_6 = { -1159.839f, -1514.176f, 4.7415f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -2.2734f, 0.0031f, -144.9591f };
			(uParam1[2 /*15*/])->f_12 = 26.7346f;
			(uParam1[2 /*15*/])->f_13 = 10f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -1157.197f, -1524.042f, 4.3609f };
			(uParam1[3 /*15*/])->f_3 = { 2.9759f, 0f, 4.513f };
			(uParam1[3 /*15*/])->f_6 = { -1157.153f, -1523.628f, 4.3821f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 2.9759f, 0f, 4.513f };
			(uParam1[3 /*15*/])->f_12 = 26.7346f;
			(uParam1[3 /*15*/])->f_13 = 4f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -1156.8f, -1515.6f, 4.6f };
			(uParam1[5 /*15*/])->f_3 = { -2.9f, 0f, 94f };
			(uParam1[5 /*15*/])->f_6 = { -1156.8f, -1515.6f, 4.6f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -2.9f, 0f, 94f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -1156.8f, -1515.6f, 4.6f };
			uParam1->f_91.f_3 = { -2.9f, 0f, 94f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { -1156.8f, -1515.6f, 4.6f };
			uParam1->f_98.f_3 = { -2.9f, 0f, 94f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { -1168.042f, -1519.458f, 3.2867f };
			uParam1->f_108 = 306.25f;
			uParam1->f_109 = { -1158.243f, -1515.221f, 3.2073f };
			uParam1->f_112[0 /*3*/] = { -1157.554f, -1517.099f, 3.3741f };
			uParam1->f_112[1 /*3*/] = { -1158.492f, -1517.444f, 3.357f };
			uParam1->f_119 = { -1148.843f, -1521.801f, 3.4073f };
			uParam1->f_123 = 2.95f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -1148.843f, -1521.801f, 3.4073f };
			uParam1->f_132 = { -1148.843f, -1521.801f, 3.4073f };
			uParam1->f_135 = { -1176.761f, -1521.671f, 3.4037f };
			uParam1->f_135.f_3 = 301.68f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { -1148.9f, -1523.479f, 9.6331f };
			uParam1->f_150[0] = 34.92f;
			uParam1->f_140[1 /*3*/] = { -1134.435f, -1532.005f, 3.315f };
			uParam1->f_150[1] = 309.24f;
			uParam1->f_140[2 /*3*/] = { 0f, 0f, 0f };
			uParam1->f_150[2] = 0f;
			return 1;
			break;
		
		case 7:
			*(uParam1[0 /*15*/]) = { 129.8136f, -1313.469f, 29.9182f };
			(uParam1[0 /*15*/])->f_3 = { 21.2995f, -0.0209f, -12.3644f };
			(uParam1[0 /*15*/])->f_6 = { 129.8168f, -1313.456f, 29.3543f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 3.8903f, -0.0209f, -14.9554f };
			(uParam1[0 /*15*/])->f_12 = 36.2014f;
			(uParam1[0 /*15*/])->f_13 = 5.325f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 132.7778f, -1307.627f, 29.7443f };
			(uParam1[1 /*15*/])->f_3 = { -2.534f, 0.0048f, -0.6283f };
			(uParam1[1 /*15*/])->f_6 = { 132.7788f, -1307.527f, 29.7398f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -2.534f, 0.0048f, -0.6283f };
			(uParam1[1 /*15*/])->f_12 = 27.0556f;
			(uParam1[1 /*15*/])->f_13 = 5.1f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { 132.4454f, -1307.645f, 29.748f };
			(uParam1[2 /*15*/])->f_3 = { -3.058f, 0.0048f, -11.2444f };
			(uParam1[2 /*15*/])->f_6 = { 132.4589f, -1307.577f, 29.7443f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -2.534f, 0.0048f, -11.3535f };
			(uParam1[2 /*15*/])->f_12 = 27.0556f;
			(uParam1[2 /*15*/])->f_13 = 10.05f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { 129.1269f, -1301.723f, 29.4008f };
			(uParam1[3 /*15*/])->f_3 = { 0.316f, -0.0209f, -128.7821f };
			(uParam1[3 /*15*/])->f_6 = { 128.7942f, -1301.455f, 29.3985f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 0.316f, -0.0209f, -128.7821f };
			(uParam1[3 /*15*/])->f_12 = 40.468f;
			(uParam1[3 /*15*/])->f_13 = 10.725f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 132.8f, -1305.1f, 29.7f };
			(uParam1[5 /*15*/])->f_3 = { -6.6f, 0f, 177.3f };
			(uParam1[5 /*15*/])->f_6 = { 132.8f, -1305.1f, 29.7f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -6.6f, 0f, 177.3f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 132.8f, -1305.1f, 29.7f };
			uParam1->f_91.f_3 = { -6.6f, 0f, 177.3f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { 132.8f, -1305.1f, 29.7f };
			uParam1->f_98.f_3 = { -6.6f, 0f, 177.3f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { 133.1947f, -1312.149f, 28.1072f };
			uParam1->f_108 = 126.05f;
			uParam1->f_109 = { 133.0748f, -1306.509f, 28.133f };
			uParam1->f_112[0 /*3*/] = { 132.4439f, -1304.66f, 28.2045f };
			uParam1->f_112[1 /*3*/] = { 133.2145f, -1304.75f, 28.1905f };
			uParam1->f_119 = { 128.5787f, -1298.368f, 28.3026f };
			uParam1->f_123 = 2.925f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { 128.5787f, -1298.368f, 28.3026f };
			uParam1->f_132 = { 128.5787f, -1298.368f, 28.3026f };
			uParam1->f_135 = { 154.0517f, -1307.696f, 28.2026f };
			uParam1->f_135.f_3 = 149.04f;
			uParam1->f_135.f_4 = 10;
			uParam1->f_140[0 /*3*/] = { 95.7223f, -1313.171f, 28.294f };
			uParam1->f_150[0] = 83.16f;
			uParam1->f_140[1 /*3*/] = { 112.8357f, -1276.493f, 28.0221f };
			uParam1->f_150[1] = 99.36f;
			uParam1->f_140[2 /*3*/] = { 0f, 0f, 0f };
			uParam1->f_150[2] = 0f;
			return 1;
			break;
		
		case 8:
			*(uParam1[0 /*15*/]) = { 166.9471f, -1340.813f, 31.2908f };
			(uParam1[0 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[0 /*15*/])->f_6 = { 166.9471f, -1340.813f, 29.2908f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[0 /*15*/])->f_12 = 50f;
			(uParam1[0 /*15*/])->f_13 = 5.325f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 132.7778f, -1307.627f, 29.7443f };
			(uParam1[1 /*15*/])->f_3 = { -2.534f, 0.0048f, -0.6283f };
			(uParam1[1 /*15*/])->f_6 = { 132.7788f, -1307.527f, 29.7398f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -2.534f, 0.0048f, -0.6283f };
			(uParam1[1 /*15*/])->f_12 = 27.0556f;
			(uParam1[1 /*15*/])->f_13 = 5.1f;
			(uParam1[1 /*15*/])->f_14 = 0;
			*(uParam1[2 /*15*/]) = { 132.4454f, -1307.645f, 29.748f };
			(uParam1[2 /*15*/])->f_3 = { -3.058f, 0.0048f, -11.2444f };
			(uParam1[2 /*15*/])->f_6 = { 132.4589f, -1307.577f, 29.7443f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -2.534f, 0.0048f, -11.3535f };
			(uParam1[2 /*15*/])->f_12 = 27.0556f;
			(uParam1[2 /*15*/])->f_13 = 10.05f;
			(uParam1[2 /*15*/])->f_14 = 0;
			*(uParam1[3 /*15*/]) = { 129.1269f, -1301.723f, 29.4008f };
			(uParam1[3 /*15*/])->f_3 = { 0.316f, -0.0209f, -128.7821f };
			(uParam1[3 /*15*/])->f_6 = { 128.7942f, -1301.455f, 29.3985f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 0.316f, -0.0209f, -128.7821f };
			(uParam1[3 /*15*/])->f_12 = 40.468f;
			(uParam1[3 /*15*/])->f_13 = 10.725f;
			(uParam1[3 /*15*/])->f_14 = 0;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 166.9471f, -1340.813f, 31.2908f };
			(uParam1[5 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[5 /*15*/])->f_6 = { 166.9471f, -1340.813f, 31.2908f };
			(uParam1[5 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 166.9471f, -1340.813f, 31.2908f };
			uParam1->f_91.f_3 = { 0f, 0f, 0f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { 132.8f, -1305.1f, 29.7f };
			uParam1->f_98.f_3 = { -6.6f, 0f, 177.3f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { 176.9471f, -1340.813f, 28.2908f };
			uParam1->f_108 = 0f;
			uParam1->f_109 = { 176.9471f, -1340.813f, 28.2908f };
			uParam1->f_112[0 /*3*/] = { 177.5471f, -1340.513f, 28.2908f };
			uParam1->f_112[1 /*3*/] = { 177.5471f, -1341.113f, 28.2908f };
			uParam1->f_119 = { 181.9471f, -1340.813f, 28.2908f };
			uParam1->f_123 = 2.925f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { 128.5787f, -1298.368f, 28.3026f };
			uParam1->f_132 = { 128.5787f, -1298.368f, 28.3026f };
			uParam1->f_135 = { 154.0517f, -1307.696f, 28.2026f };
			uParam1->f_135.f_3 = 149.04f;
			uParam1->f_135.f_4 = 10;
			uParam1->f_140[0 /*3*/] = { 176.9471f, -1340.813f, 28.2908f };
			uParam1->f_150[0] = 0f;
			uParam1->f_140[1 /*3*/] = { 176.9471f, -1340.813f, 28.2908f };
			uParam1->f_150[1] = 0f;
			return 1;
			break;
		
		case 9:
			*(uParam1[0 /*15*/]) = { -56.3573f, -1460.427f, 34.1991f };
			(uParam1[0 /*15*/])->f_3 = { 8.1986f, 0f, 33.5765f };
			(uParam1[0 /*15*/])->f_6 = { -56.5558f, -1460.149f, 32.6568f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -4.0126f, 0f, 51.7138f };
			(uParam1[0 /*15*/])->f_12 = 50f;
			(uParam1[0 /*15*/])->f_13 = 6.3f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -57.7509f, -1459.455f, 32.518f };
			(uParam1[1 /*15*/])->f_3 = { -2.6848f, 0f, 75.5677f };
			(uParam1[1 /*15*/])->f_6 = { -57.7917f, -1459.445f, 32.516f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -2.4783f, 0f, 75.5677f };
			(uParam1[1 /*15*/])->f_12 = 26.9657f;
			(uParam1[1 /*15*/])->f_13 = 5.375f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -57.7837f, -1459.794f, 32.5223f };
			(uParam1[2 /*15*/])->f_3 = { -2.6848f, 0f, 58.9447f };
			(uParam1[2 /*15*/])->f_6 = { -57.8125f, -1459.687f, 32.5185f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -2.6848f, 0f, 58.169f };
			(uParam1[2 /*15*/])->f_12 = 26.9657f;
			(uParam1[2 /*15*/])->f_13 = 10.975f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -61.4802f, -1449.468f, 32.2744f };
			(uParam1[3 /*15*/])->f_3 = { 0.1485f, 0f, -174.2878f };
			(uParam1[3 /*15*/])->f_6 = { -61.4802f, -1449.468f, 32.2744f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 0.1485f, 0f, -177.7354f };
			(uParam1[3 /*15*/])->f_12 = 35.5635f;
			(uParam1[3 /*15*/])->f_13 = 4.175f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -58.6f, -1458.2f, 32.7f };
			(uParam1[5 /*15*/])->f_3 = { -9.2f, 0f, 149f };
			(uParam1[5 /*15*/])->f_6 = { -58.6f, -1458.2f, 32.7f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -9.2f, 0f, 149f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -58.6f, -1458.2f, 32.7f };
			uParam1->f_91.f_3 = { -9.2f, 0f, 149f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { -58.6f, -1458.2f, 32.7f };
			uParam1->f_98.f_3 = { -9.2f, 0f, 149f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { -62.9473f, -1462.459f, 30.9713f };
			uParam1->f_108 = 116.37f;
			uParam1->f_109 = { -59.0633f, -1459.54f, 30.9904f };
			uParam1->f_112[0 /*3*/] = { -60.5552f, -1458.208f, 31.0545f };
			uParam1->f_112[1 /*3*/] = { -59.8892f, -1457.462f, 31.0777f };
			uParam1->f_119 = { -67.2833f, -1451.74f, 30.994f };
			uParam1->f_123 = 3.55f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -67.2833f, -1451.74f, 30.994f };
			uParam1->f_132 = { -67.2833f, -1451.74f, 30.994f };
			uParam1->f_135 = { -46.4771f, -1460.511f, 30.8037f };
			uParam1->f_135.f_3 = 95.76f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { -68.4237f, -1436.754f, 31.1236f };
			uParam1->f_150[0] = 116.64f;
			uParam1->f_140[1 /*3*/] = { -74.2421f, -1420.867f, 28.3225f };
			uParam1->f_150[1] = 271.8f;
			uParam1->f_140[2 /*3*/] = { 0f, 0f, 0f };
			uParam1->f_150[2] = 0f;
			return 1;
			break;
		
		case 10:
			*(uParam1[0 /*15*/]) = { -10.932f, -117.3033f, 57.4867f };
			(uParam1[0 /*15*/])->f_3 = { 28.1405f, -0.0662f, 15.2927f };
			(uParam1[0 /*15*/])->f_6 = { -11.2653f, -117.2236f, 57.1882f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 0.5113f, -0.0662f, 30.565f };
			(uParam1[0 /*15*/])->f_12 = 49.9706f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -7.0757f, -120.2365f, 61.4475f };
			(uParam1[1 /*15*/])->f_3 = { -4.7436f, 0.1427f, 49.9124f };
			(uParam1[1 /*15*/])->f_6 = { -6.8992f, -120.3944f, 58.5944f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -4.7436f, 0.1427f, 49.9124f };
			(uParam1[1 /*15*/])->f_12 = 44.4311f;
			(uParam1[1 /*15*/])->f_13 = 0f;
			(uParam1[1 /*15*/])->f_14 = 0;
			*(uParam1[2 /*15*/]) = { -11.5998f, -116.8049f, 57.3232f };
			(uParam1[2 /*15*/])->f_3 = { -1.4412f, 0f, 19.334f };
			(uParam1[2 /*15*/])->f_6 = { -6.8992f, -120.3944f, 58.5944f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -4.7436f, 0.1427f, 49.9124f };
			(uParam1[2 /*15*/])->f_12 = 28.2808f;
			(uParam1[2 /*15*/])->f_13 = 0f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -20.2221f, -111.6242f, 57.1864f };
			(uParam1[3 /*15*/])->f_3 = { -1.4928f, 0f, -95.3855f };
			(uParam1[3 /*15*/])->f_6 = { -20.2221f, -111.6242f, 57.1864f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -1.4928f, 0f, -89.5594f };
			(uParam1[3 /*15*/])->f_12 = 42.4439f;
			(uParam1[3 /*15*/])->f_13 = 0f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { -12.2428f, -118.5385f, 57.0926f };
			(uParam1[4 /*15*/])->f_3 = { -2.338f, -0.0148f, -1.9302f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 49.9706f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -10.7f, -114.5f, 57.2f };
			(uParam1[5 /*15*/])->f_3 = { -0.7f, 0f, 115.2f };
			(uParam1[5 /*15*/])->f_6 = { -10.7f, -114.5f, 57.2f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -0.7f, 0f, 109.1433f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 4.575f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -10.7f, -114.5f, 57.2f };
			uParam1->f_91.f_3 = { -0.7f, 0f, 115.2f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { -13.0725f, -115.19f, 57.2984f };
			uParam1->f_98.f_3 = { -4.2214f, -0.8691f, -107.3625f };
			uParam1->f_104 = 49.9706f;
			uParam1->f_105 = { -18.5821f, -115.3713f, 55.7963f };
			uParam1->f_108 = 73.08f;
			uParam1->f_109 = { -11.6174f, -115.3955f, 55.781f };
			uParam1->f_112[0 /*3*/] = { -13.4109f, -114.6339f, 55.8221f };
			uParam1->f_112[1 /*3*/] = { -12.6469f, -114.0475f, 55.8117f };
			uParam1->f_119 = { -13.4678f, -109.2617f, 56.1351f };
			uParam1->f_123 = 2.675f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 6f;
			uParam1->f_127 = 0;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -16.8713f, -118.8766f, 55.8675f };
			uParam1->f_132 = { -97.4889f, -89.0346f, 56.5371f };
			uParam1->f_135 = { -1.682f, -108.0647f, 55.8574f };
			uParam1->f_135.f_3 = 160.56f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { -60.4338f, -88.276f, 56.7463f };
			uParam1->f_150[0] = 346.32f;
			uParam1->f_140[1 /*3*/] = { -29.7926f, -85.2089f, 56.2538f };
			uParam1->f_150[1] = 42.12f;
			uParam1->f_140[2 /*3*/] = { -64.4417f, -76.578f, 57.13f };
			uParam1->f_150[2] = 350.7988f;
			return 1;
			break;
		
		case 11:
			*(uParam1[0 /*15*/]) = { -599.6635f, -307.1347f, 35.5723f };
			(uParam1[0 /*15*/])->f_3 = { 6.6136f, 0.0661f, 14.4573f };
			(uParam1[0 /*15*/])->f_6 = { -599.6488f, -307.1032f, 35.4806f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 0.6974f, 0.0661f, -24.9427f };
			(uParam1[0 /*15*/])->f_12 = 45.1942f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -598.3406f, -305.7075f, 35.495f };
			(uParam1[1 /*15*/])->f_3 = { -1.8206f, 0f, -24.4412f };
			(uParam1[1 /*15*/])->f_6 = { -598.2725f, -305.5562f, 35.4897f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -1.2461f, 0f, -23.8667f };
			(uParam1[1 /*15*/])->f_12 = 27.1855f;
			(uParam1[1 /*15*/])->f_13 = 10.225f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -595.8862f, -335.8199f, 39.8311f };
			(uParam1[2 /*15*/])->f_3 = { -2.4437f, 0.0925f, 2.7068f };
			(uParam1[2 /*15*/])->f_6 = { -595.8862f, -335.8199f, 36.8311f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -2.4437f, 0.0925f, 2.7068f };
			(uParam1[2 /*15*/])->f_12 = 30.8234f;
			(uParam1[2 /*15*/])->f_13 = 0f;
			(uParam1[2 /*15*/])->f_14 = 0;
			*(uParam1[3 /*15*/]) = { -603.5041f, -298.5019f, 35.5324f };
			(uParam1[3 /*15*/])->f_3 = { -0.4957f, 0f, -127.7728f };
			(uParam1[3 /*15*/])->f_6 = { -603.7752f, -298.292f, 35.8069f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -0.4957f, 0f, -127.7728f };
			(uParam1[3 /*15*/])->f_12 = 37.7459f;
			(uParam1[3 /*15*/])->f_13 = 4.875f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { -589.7507f, -307.463f, 35.5272f };
			(uParam1[4 /*15*/])->f_3 = { -4.1072f, 0.0055f, 69.2885f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 24.1002f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -598.8f, -304.1f, 35.4f };
			(uParam1[5 /*15*/])->f_3 = { 0.3f, 0f, -105.1f };
			(uParam1[5 /*15*/])->f_6 = { -598.8f, -304.1f, 35.4f };
			(uParam1[5 /*15*/])->f_6.f_3 = { 0.3f, 0f, -118.5139f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 6.525f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -598.8f, -304.1f, 35.4f };
			uParam1->f_91.f_3 = { 0.3f, 0f, -105.1f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { -598.8f, -304.1f, 35.4f };
			uParam1->f_98.f_3 = { 0.3f, 0f, -118.5139f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { -591.6484f, -304.453f, 33.8604f };
			uParam1->f_108 = 122.04f;
			uParam1->f_109 = { -597.5052f, -304.8516f, 33.9584f };
			uParam1->f_112[0 /*3*/] = { -597.8029f, -303.0807f, 33.9633f };
			uParam1->f_112[1 /*3*/] = { -596.705f, -302.7705f, 33.9718f };
			uParam1->f_119 = { -604.737f, -293.2985f, 33.9548f };
			uParam1->f_123 = 2.925f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 8.37f;
			uParam1->f_127 = 0;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -591.2324f, -302.5901f, 33.9939f };
			uParam1->f_132 = { -612.3061f, -316.7069f, 33.7226f };
			uParam1->f_135 = { -585.7039f, -300.9887f, 33.9348f };
			uParam1->f_135.f_3 = 116.64f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { -623.0575f, -252.5577f, 37.6049f };
			uParam1->f_150[0] = 346.32f;
			uParam1->f_140[1 /*3*/] = { -585.6531f, -270.6682f, 34.6228f };
			uParam1->f_150[1] = 33.48f;
			uParam1->f_140[2 /*3*/] = { -649.7907f, -296.3604f, 34.3442f };
			uParam1->f_150[2] = 32.4f;
			return 1;
			break;
		
		case 12:
			*(uParam1[0 /*15*/]) = { -158.1838f, -175.1498f, 44.1235f };
			(uParam1[0 /*15*/])->f_3 = { -1.234f, 0f, -24.3748f };
			(uParam1[0 /*15*/])->f_6 = { -157.466f, -176.0162f, 44.1356f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -1.234f, 0f, -54.2213f };
			(uParam1[0 /*15*/])->f_12 = 38.9525f;
			(uParam1[0 /*15*/])->f_13 = 7.5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -162.7006f, -153.3978f, 45.8229f };
			(uParam1[1 /*15*/])->f_3 = { -4.6874f, 0.0837f, -166.4122f };
			(uParam1[1 /*15*/])->f_6 = { -162.7006f, -153.3978f, 42.8229f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -4.6874f, 0.0837f, -166.4122f };
			(uParam1[1 /*15*/])->f_12 = 30.9732f;
			(uParam1[1 /*15*/])->f_13 = 0f;
			(uParam1[1 /*15*/])->f_14 = 0;
			*(uParam1[2 /*15*/]) = { -162.7006f, -153.3978f, 45.8229f };
			(uParam1[2 /*15*/])->f_3 = { -4.6874f, 0.0837f, -166.4122f };
			(uParam1[2 /*15*/])->f_6 = { -162.7006f, -153.3978f, 42.8229f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -4.6874f, 0.0837f, -166.4122f };
			(uParam1[2 /*15*/])->f_12 = 30.9732f;
			(uParam1[2 /*15*/])->f_13 = 0f;
			(uParam1[2 /*15*/])->f_14 = 0;
			*(uParam1[3 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[3 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[3 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[3 /*15*/])->f_12 = 0f;
			(uParam1[3 /*15*/])->f_13 = 0f;
			(uParam1[3 /*15*/])->f_14 = 0;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -155.5f, -173.6f, 44.3f };
			(uParam1[5 /*15*/])->f_3 = { -5.3f, 0f, 176.7f };
			(uParam1[5 /*15*/])->f_6 = { -155.5f, -173.6f, 44.3f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -5.3f, 0f, 176.7f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -155.5f, -173.6f, 44.3f };
			uParam1->f_91.f_3 = { -5.3f, 0f, 176.7f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { -155.5f, -173.6f, 44.3f };
			uParam1->f_98.f_3 = { -5.3f, 0f, 176.7f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { -159.0514f, -179.6376f, 42.6038f };
			uParam1->f_108 = 340.79f;
			uParam1->f_109 = { -155.6107f, -175.4378f, 42.7616f };
			uParam1->f_112[0 /*3*/] = { -155.2113f, -173.4781f, 42.7592f };
			uParam1->f_112[1 /*3*/] = { -154.2314f, -173.6778f, 42.7592f };
			uParam1->f_119 = { -151.4107f, -167.0978f, 42.7614f };
			uParam1->f_123 = 2.675f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 5.985f;
			uParam1->f_127 = 0;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -157.8152f, -173.411f, 42.6205f };
			uParam1->f_132 = { -180.3291f, -85.6264f, 51.5502f };
			uParam1->f_135 = { -178.2606f, -176.797f, 42.6219f };
			uParam1->f_135.f_3 = 247.32f;
			uParam1->f_135.f_4 = 8;
			uParam1->f_140[0 /*3*/] = { -111.5168f, -176.4249f, 49.3869f };
			uParam1->f_150[0] = 337.9647f;
			uParam1->f_140[1 /*3*/] = { -146.1066f, -289.7199f, 40.319f };
			uParam1->f_150[1] = 162.6801f;
			uParam1->f_140[2 /*3*/] = { -184.0584f, -92.239f, 51.4793f };
			uParam1->f_150[2] = 339.5543f;
			return 1;
			break;
		
		case 13:
			*(uParam1[0 /*15*/]) = { 216.6692f, -50.2341f, 71.0802f };
			(uParam1[0 /*15*/])->f_3 = { 9.2136f, 0.0713f, 39.639f };
			(uParam1[0 /*15*/])->f_6 = { 215.4209f, -49.6516f, 69.8986f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -2.9289f, 0.0803f, 45.7664f };
			(uParam1[0 /*15*/])->f_12 = 24.7144f;
			(uParam1[0 /*15*/])->f_13 = 6.025f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 210.3946f, -45.6195f, 69.3571f };
			(uParam1[1 /*15*/])->f_3 = { 0.0814f, 0.0714f, 46.1003f };
			(uParam1[1 /*15*/])->f_6 = { 210.3504f, -45.577f, 69.3572f };
			(uParam1[1 /*15*/])->f_6.f_3 = { 0.0814f, 0.0714f, 46.1003f };
			(uParam1[1 /*15*/])->f_12 = 24.7144f;
			(uParam1[1 /*15*/])->f_13 = 5.9f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { 210.6824f, -46.2715f, 69.2401f };
			(uParam1[2 /*15*/])->f_3 = { -0.8841f, 0.0714f, 32.8208f };
			(uParam1[2 /*15*/])->f_6 = { 210.5762f, -46.1068f, 69.2371f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -0.8841f, 0.0714f, 31.8309f };
			(uParam1[2 /*15*/])->f_12 = 24.7144f;
			(uParam1[2 /*15*/])->f_13 = 11.2f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { 215.5824f, -47.3697f, 69.1787f };
			(uParam1[3 /*15*/])->f_3 = { 2.7258f, 0.0713f, 56.249f };
			(uParam1[3 /*15*/])->f_6 = { 215.5824f, -47.3697f, 69.1787f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 2.5404f, 0.0713f, 52.4503f };
			(uParam1[3 /*15*/])->f_12 = 33.9919f;
			(uParam1[3 /*15*/])->f_13 = 4.75f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 202.2701f, -56.2778f, 69.5264f };
			(uParam1[4 /*15*/])->f_3 = { -4.8356f, 0.0133f, -30.2715f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 24.7144f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 209.4f, -43.8f, 69.5f };
			(uParam1[5 /*15*/])->f_3 = { -6.8f, 0f, 164.6f };
			(uParam1[5 /*15*/])->f_6 = { 209.4f, -43.8f, 69.5f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -6.8f, 0f, 158.8225f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 5.625f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 209.4f, -43.8f, 69.5f };
			uParam1->f_91.f_3 = { -6.8f, 0f, 164.6f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { 209.4f, -43.8f, 69.5f };
			uParam1->f_98.f_3 = { -6.8f, 0f, 158.8225f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { 210.5713f, -51.1838f, 67.8538f };
			uParam1->f_108 = 70.71f;
			uParam1->f_109 = { 209.114f, -45.0546f, 67.9221f };
			uParam1->f_112[0 /*3*/] = { 208.0977f, -42.7594f, 67.8671f };
			uParam1->f_112[1 /*3*/] = { 209.2602f, -42.3165f, 67.9124f };
			uParam1->f_119 = { 201.3204f, -27.2177f, 68.9116f };
			uParam1->f_123 = 3.425f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 8.1f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { 201.3804f, -45.9723f, 67.6405f };
			uParam1->f_132 = { 169.5868f, -39.8977f, 67.1079f };
			uParam1->f_135 = { 220.3531f, -54.6546f, 68.0668f };
			uParam1->f_135.f_3 = 72.36f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { 142.2029f, -8.6707f, 66.601f };
			uParam1->f_150[0] = 341.28f;
			uParam1->f_140[1 /*3*/] = { 193.9097f, -0.0854f, 72.4415f };
			uParam1->f_150[1] = 63.36f;
			uParam1->f_140[2 /*3*/] = { 141.1481f, 4.3401f, 67.0326f };
			uParam1->f_150[2] = 340.2f;
			return 1;
			break;
		
		case 14:
			*(uParam1[0 /*15*/]) = { -190.1953f, -796.7072f, 31.3248f };
			(uParam1[0 /*15*/])->f_3 = { 5.1543f, -0.1219f, 2.2711f };
			(uParam1[0 /*15*/])->f_6 = { -190.1855f, -796.9056f, 31.3069f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -1.8464f, -0.1219f, 21.1543f };
			(uParam1[0 /*15*/])->f_12 = 37.4511f;
			(uParam1[0 /*15*/])->f_13 = 5.7f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -195.8433f, -782.9503f, 30.9256f };
			(uParam1[1 /*15*/])->f_3 = { -1.2833f, 0.0184f, 56.2469f };
			(uParam1[1 /*15*/])->f_6 = { -196.0999f, -782.7787f, 30.9187f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -1.2833f, 0.0184f, 56.2469f };
			(uParam1[1 /*15*/])->f_12 = 27.5662f;
			(uParam1[1 /*15*/])->f_13 = 11.4f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -174.1382f, -798.4118f, 34.3625f };
			(uParam1[2 /*15*/])->f_3 = { -4.1411f, 0.0443f, -50.839f };
			(uParam1[2 /*15*/])->f_6 = { -174.1382f, -798.4118f, 31.3625f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -4.1411f, 0.0443f, -50.839f };
			(uParam1[2 /*15*/])->f_12 = 45f;
			(uParam1[2 /*15*/])->f_13 = 0f;
			(uParam1[2 /*15*/])->f_14 = 0;
			*(uParam1[3 /*15*/]) = { -207.453f, -783.0007f, 30.6883f };
			(uParam1[3 /*15*/])->f_3 = { 0.9957f, -0.0267f, -64.616f };
			(uParam1[3 /*15*/])->f_6 = { -207.483f, -782.9033f, 30.6885f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 0.9957f, -0.0267f, -64.1235f };
			(uParam1[3 /*15*/])->f_12 = 39.0431f;
			(uParam1[3 /*15*/])->f_13 = 3.925f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { -199.962f, -783.7169f, 30.9963f };
			(uParam1[4 /*15*/])->f_3 = { -3.9471f, 0.0848f, -37.9213f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 27.5662f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -198.6f, -781.3f, 31f };
			(uParam1[5 /*15*/])->f_3 = { -3.1f, 0f, -86.6f };
			(uParam1[5 /*15*/])->f_6 = { -198.6f, -781.3f, 31f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -3.1f, 0f, -86.6f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -198.6f, -781.3f, 31f };
			uParam1->f_91.f_3 = { -3.1f, 0f, -86.6f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { -194.9262f, -780.7396f, 30.7532f };
			uParam1->f_98.f_3 = { -1.3809f, 0f, 100.1161f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { -162.74f, -789.3305f, 30.9774f };
			uParam1->f_108 = 154.8f;
			uParam1->f_109 = { -197.2339f, -781.257f, 29.454f };
			uParam1->f_112[0 /*3*/] = { -200.024f, -781.1829f, 29.454f };
			uParam1->f_112[1 /*3*/] = { -199.6951f, -780.3373f, 29.454f };
			uParam1->f_119 = { -208.5797f, -778.6299f, 29.3554f };
			uParam1->f_123 = 3.05f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0.2f;
			uParam1->f_126 = 5.175f;
			uParam1->f_127 = 0;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -193.8266f, -787.1005f, 29.454f };
			uParam1->f_132 = { -176.0065f, -830.4868f, 29.6752f };
			uParam1->f_135 = { -160.5266f, -783.0484f, 31.0433f };
			uParam1->f_135.f_3 = 164.52f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { -245.7672f, -772.6562f, 31.4945f };
			uParam1->f_150[0] = 340.2f;
			uParam1->f_140[1 /*3*/] = { -240.8987f, -803.7341f, 29.8505f };
			uParam1->f_150[1] = 78.12f;
			uParam1->f_140[2 /*3*/] = { -219.2494f, -869.4808f, 28.864f };
			uParam1->f_150[2] = 73.08f;
			return 1;
			break;
		
		case 15:
			*(uParam1[0 /*15*/]) = { -830.9531f, -1088.276f, 13.0086f };
			(uParam1[0 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[0 /*15*/])->f_6 = { -830.9531f, -1088.276f, 11.0086f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[0 /*15*/])->f_12 = 50f;
			(uParam1[0 /*15*/])->f_13 = 0f;
			(uParam1[0 /*15*/])->f_14 = 0;
			*(uParam1[1 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[1 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[1 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[1 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[1 /*15*/])->f_12 = 0f;
			(uParam1[1 /*15*/])->f_13 = 0f;
			(uParam1[1 /*15*/])->f_14 = 0;
			*(uParam1[2 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[2 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[2 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[2 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[2 /*15*/])->f_12 = 0f;
			(uParam1[2 /*15*/])->f_13 = 0f;
			(uParam1[2 /*15*/])->f_14 = 0;
			*(uParam1[3 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[3 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[3 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[3 /*15*/])->f_12 = 0f;
			(uParam1[3 /*15*/])->f_13 = 0f;
			(uParam1[3 /*15*/])->f_14 = 0;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -830.9531f, -1088.276f, 13.0086f };
			(uParam1[5 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[5 /*15*/])->f_6 = { -830.9531f, -1088.276f, 13.0086f };
			(uParam1[5 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -830.9531f, -1088.276f, 13.0086f };
			uParam1->f_91.f_3 = { 0f, 0f, 0f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { 0f, 0f, 0f };
			uParam1->f_98.f_3 = { 0f, 0f, 0f };
			uParam1->f_104 = 0f;
			uParam1->f_105 = { -820.9531f, -1088.276f, 10.0086f };
			uParam1->f_108 = 0f;
			uParam1->f_109 = { -820.9531f, -1088.276f, 10.0086f };
			uParam1->f_112[0 /*3*/] = { -820.3531f, -1087.976f, 10.0086f };
			uParam1->f_112[1 /*3*/] = { -820.3531f, -1088.576f, 10.0086f };
			uParam1->f_119 = { -815.9531f, -1088.276f, 10.0086f };
			uParam1->f_123 = 0f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 0;
			uParam1->f_128 = 0;
			uParam1->f_129 = { 0f, 0f, 0f };
			uParam1->f_132 = { 0f, 0f, 0f };
			uParam1->f_135 = { 0f, 0f, 0f };
			uParam1->f_135.f_3 = 0f;
			uParam1->f_135.f_4 = 0;
			uParam1->f_140[0 /*3*/] = { -820.9531f, -1088.276f, 10.0086f };
			uParam1->f_150[0] = 0f;
			uParam1->f_140[1 /*3*/] = { -820.9531f, -1088.276f, 10.0086f };
			uParam1->f_150[1] = 0f;
			uParam1->f_140[2 /*3*/] = { -64.4417f, -76.578f, 57.13f };
			uParam1->f_150[2] = 350.7988f;
			return 1;
			break;
		
		case 16:
			*(uParam1[0 /*15*/]) = { 231.1337f, -972.4833f, 30.5744f };
			(uParam1[0 /*15*/])->f_3 = { 16.554f, 0f, 19.9826f };
			(uParam1[0 /*15*/])->f_6 = { 231.1004f, -972.3924f, 30.3643f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 5.1901f, 0f, 18.1092f };
			(uParam1[0 /*15*/])->f_12 = 39.727f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 231.1243f, -960.4684f, 29.9486f };
			(uParam1[1 /*15*/])->f_3 = { -3.325f, 0.0034f, 44.3253f };
			(uParam1[1 /*15*/])->f_6 = { 231.0919f, -960.4258f, 29.9455f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -3.325f, 0.0034f, 44.3253f };
			(uParam1[1 /*15*/])->f_12 = 18.438f;
			(uParam1[1 /*15*/])->f_13 = 4.925f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { 231.1691f, -961.2233f, 29.9703f };
			(uParam1[2 /*15*/])->f_3 = { -1.486f, 0f, 33.1161f };
			(uParam1[2 /*15*/])->f_6 = { 231.019f, -960.993f, 29.9631f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -1.486f, 0f, 33.6074f };
			(uParam1[2 /*15*/])->f_12 = 18.8257f;
			(uParam1[2 /*15*/])->f_13 = 9.525f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { 201.2578f, -968.2456f, 31.4906f };
			(uParam1[3 /*15*/])->f_3 = { -3.687f, 0f, -68.9103f };
			(uParam1[3 /*15*/])->f_6 = { 201.1927f, -968.077f, 31.4906f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -3.687f, 0f, -68.9103f };
			(uParam1[3 /*15*/])->f_12 = 30.4755f;
			(uParam1[3 /*15*/])->f_13 = 4.95f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 242.8073f, -959.5851f, 29.7023f };
			(uParam1[4 /*15*/])->f_3 = { 0.2064f, 0.0551f, 93.2706f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 35.954f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 229.2498f, -959.5234f, 29.8773f };
			(uParam1[5 /*15*/])->f_3 = { -3.2186f, 0f, -71.4419f };
			(uParam1[5 /*15*/])->f_6 = { 229.2498f, -959.5234f, 29.8773f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -3.2186f, 0f, -75.0536f };
			(uParam1[5 /*15*/])->f_12 = 50.036f;
			(uParam1[5 /*15*/])->f_13 = 5.31f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 229.2498f, -959.5234f, 29.8773f };
			uParam1->f_91.f_3 = { -3.2186f, 0f, -71.4419f };
			uParam1->f_97 = 50.036f;
			uParam1->f_98 = { 229.2498f, -959.5234f, 29.8773f };
			uParam1->f_98.f_3 = { -3.2186f, 0f, -75.0536f };
			uParam1->f_104 = 50.036f;
			uParam1->f_105 = { 240.7464f, -951.9853f, 28.1878f };
			uParam1->f_108 = 158.97f;
			uParam1->f_109 = { 230.4242f, -959.2939f, 28.3431f };
			uParam1->f_112[0 /*3*/] = { 228.2315f, -958.0656f, 28.3444f };
			uParam1->f_112[1 /*3*/] = { 228.8929f, -957.1745f, 28.3397f };
			uParam1->f_119 = { 213.1038f, -944.3844f, 29.6918f };
			uParam1->f_123 = 2.505f;
			uParam1->f_124 = 4f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 7.635f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { 236.7469f, -954.621f, 28.2767f };
			uParam1->f_132 = { 229.3741f, -985.0717f, 28.207f };
			uParam1->f_135 = { 243.9274f, -942.5368f, 28.2134f };
			uParam1->f_135.f_3 = 160.56f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { 209.7067f, -912.3889f, 29.6919f };
			uParam1->f_150[0] = 325.08f;
			uParam1->f_140[1 /*3*/] = { 195.2277f, -985.6662f, 29.0919f };
			uParam1->f_150[1] = 108f;
			uParam1->f_140[2 /*3*/] = { 145.6692f, -1008.577f, 28.4015f };
			uParam1->f_150[2] = 74.2663f;
			return 1;
			break;
		
		case 17:
			*(uParam1[0 /*15*/]) = { 248.2705f, -1007.885f, 29.7324f };
			(uParam1[0 /*15*/])->f_3 = { 62.7218f, 0f, -110.9959f };
			(uParam1[0 /*15*/])->f_6 = { 248.4682f, -1007.96f, 29.724f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -2.253f, 0f, -107.2616f };
			(uParam1[0 /*15*/])->f_12 = 40.2691f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 229.6498f, -1017.933f, 34.3134f };
			(uParam1[1 /*15*/])->f_3 = { -8.7545f, -0.043f, -60.4954f };
			(uParam1[1 /*15*/])->f_6 = { 229.6498f, -1017.933f, 31.3134f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -8.7545f, -0.043f, -60.4954f };
			(uParam1[1 /*15*/])->f_12 = 36.2565f;
			(uParam1[1 /*15*/])->f_13 = 0f;
			(uParam1[1 /*15*/])->f_14 = 0;
			*(uParam1[2 /*15*/]) = { 229.6498f, -1017.933f, 34.3134f };
			(uParam1[2 /*15*/])->f_3 = { -8.7545f, -0.043f, -60.4954f };
			(uParam1[2 /*15*/])->f_6 = { 229.6498f, -1017.933f, 31.3134f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -8.7545f, -0.043f, -60.4954f };
			(uParam1[2 /*15*/])->f_12 = 36.2565f;
			(uParam1[2 /*15*/])->f_13 = 0f;
			(uParam1[2 /*15*/])->f_14 = 0;
			*(uParam1[3 /*15*/]) = { 245.8116f, -1013.307f, 29.7147f };
			(uParam1[3 /*15*/])->f_3 = { 1.2147f, 0f, -54.9007f };
			(uParam1[3 /*15*/])->f_6 = { 245.8373f, -1013.343f, 29.7147f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 1.2147f, 0f, -57.703f };
			(uParam1[3 /*15*/])->f_12 = 40.2691f;
			(uParam1[3 /*15*/])->f_13 = 3.75f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 244.272f, -1004.543f, 29.5566f };
			(uParam1[4 /*15*/])->f_3 = { -4.8904f, -0.4852f, -110.0739f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 45f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 250.6561f, -1009.151f, 29.8025f };
			(uParam1[5 /*15*/])->f_3 = { -5.4451f, 0f, 14.2227f };
			(uParam1[5 /*15*/])->f_6 = { 250.6561f, -1009.151f, 29.8025f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -5.4451f, 0f, 12.1978f };
			(uParam1[5 /*15*/])->f_12 = 49.9613f;
			(uParam1[5 /*15*/])->f_13 = 6.945f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 250.6561f, -1009.151f, 29.8025f };
			uParam1->f_91.f_3 = { -5.4451f, 0f, 14.2227f };
			uParam1->f_97 = 49.9613f;
			uParam1->f_98 = { 248.7408f, -1006.52f, 29.6853f };
			uParam1->f_98.f_3 = { -2.7843f, 0.0116f, -145.7124f };
			uParam1->f_104 = 49.9613f;
			uParam1->f_105 = { 247.4841f, -1004.881f, 28.1653f };
			uParam1->f_108 = 345.6f;
			uParam1->f_109 = { 250.0948f, -1007.888f, 28.272f };
			uParam1->f_112[0 /*3*/] = { 251.6908f, -1009.03f, 28.2721f };
			uParam1->f_112[1 /*3*/] = { 250.5304f, -1009.593f, 28.2708f };
			uParam1->f_119 = { 255.7346f, -1013.608f, 28.2705f };
			uParam1->f_123 = 2.505f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 8.1f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { 247.3293f, -1011.432f, 28.2669f };
			uParam1->f_132 = { 282.2794f, -906.4485f, 27.9033f };
			uParam1->f_135 = { 244.7239f, -1014.886f, 28.1332f };
			uParam1->f_135.f_3 = 348.48f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { 265.8661f, -1031.151f, 28.2119f };
			uParam1->f_150[0] = 218.52f;
			uParam1->f_140[1 /*3*/] = { 279.8312f, -962.0749f, 28.4125f };
			uParam1->f_150[1] = 266.76f;
			uParam1->f_140[2 /*3*/] = { 284.2156f, -955.7428f, 28.3454f };
			uParam1->f_150[2] = 267.5414f;
			return 1;
			break;
		
		case 18:
			*(uParam1[0 /*15*/]) = { -223.04f, -1494.461f, 32.1563f };
			(uParam1[0 /*15*/])->f_3 = { -2.3031f, 0.0137f, 170.1147f };
			(uParam1[0 /*15*/])->f_6 = { -222.5391f, -1494.285f, 32.1495f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -2.3031f, 0.0137f, -141.8289f };
			(uParam1[0 /*15*/])->f_12 = 33.267f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -216.6314f, -1498.653f, 31.918f };
			(uParam1[1 /*15*/])->f_3 = { -1.2591f, -0.0294f, -155.8858f };
			(uParam1[1 /*15*/])->f_6 = { -216.5979f, -1498.728f, 31.9162f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -1.2591f, -0.0294f, -157.2869f };
			(uParam1[1 /*15*/])->f_12 = 17.2517f;
			(uParam1[1 /*15*/])->f_13 = 0f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -216.0729f, -1498.936f, 31.8561f };
			(uParam1[2 /*15*/])->f_3 = { -1.2116f, 0.0137f, -167.8524f };
			(uParam1[2 /*15*/])->f_6 = { -216.035f, -1499.112f, 31.8523f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -1.2116f, 0.0137f, -169.2618f };
			(uParam1[2 /*15*/])->f_12 = 21.1725f;
			(uParam1[2 /*15*/])->f_13 = 10.4f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -215.1879f, -1494.078f, 31.6461f };
			(uParam1[3 /*15*/])->f_3 = { -0.3716f, 0.0137f, 167.1272f };
			(uParam1[3 /*15*/])->f_6 = { -215.4108f, -1494.492f, 31.6431f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -0.3716f, 0.0137f, 164.7599f };
			(uParam1[3 /*15*/])->f_12 = 34.7576f;
			(uParam1[3 /*15*/])->f_13 = 4.825f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { -214.1399f, -1497.863f, 31.5615f };
			(uParam1[4 /*15*/])->f_3 = { -1.6427f, 0.0712f, 174.9291f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 50f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -215.9396f, -1502.092f, 31.9881f };
			(uParam1[5 /*15*/])->f_3 = { -8.182f, 0.0137f, -39.2424f };
			(uParam1[5 /*15*/])->f_6 = { -215.9396f, -1502.092f, 31.9881f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -8.182f, 0.0137f, -42.089f };
			(uParam1[5 /*15*/])->f_12 = 50.0069f;
			(uParam1[5 /*15*/])->f_13 = 6.795f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -215.9396f, -1502.092f, 31.9881f };
			uParam1->f_91.f_3 = { -8.182f, 0.0137f, -39.2424f };
			uParam1->f_97 = 50.0069f;
			uParam1->f_98 = { -213.5682f, -1500.077f, 31.854f };
			uParam1->f_98.f_3 = { -2.4576f, 0.0837f, 111.3005f };
			uParam1->f_104 = 50.0069f;
			uParam1->f_105 = { -209.7381f, -1495.071f, 30.2667f };
			uParam1->f_108 = 141.48f;
			uParam1->f_109 = { -215.1646f, -1500.812f, 30.4305f };
			uParam1->f_112[0 /*3*/] = { -215.0512f, -1503.367f, 30.4623f };
			uParam1->f_112[1 /*3*/] = { -215.9888f, -1503.289f, 30.4622f };
			uParam1->f_119 = { -222.2676f, -1510.992f, 30.6938f };
			uParam1->f_123 = 2.505f;
			uParam1->f_124 = 4.175f;
			uParam1->f_125 = 0.54f;
			uParam1->f_126 = 9.69f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -206.9685f, -1494.614f, 30.4733f };
			uParam1->f_132 = { -162.9734f, -1508.385f, 32.3938f };
			uParam1->f_135 = { -224.7263f, -1488.164f, 30.3038f };
			uParam1->f_135.f_3 = 139.68f;
			uParam1->f_135.f_4 = 8;
			uParam1->f_140[0 /*3*/] = { -239.6648f, -1549.731f, 30.6344f };
			uParam1->f_150[0] = 136.44f;
			uParam1->f_140[1 /*3*/] = { -263.615f, -1540.688f, 30.6904f };
			uParam1->f_150[1] = 187.56f;
			uParam1->f_140[2 /*3*/] = { -144.4396f, -1549.473f, 33.4471f };
			uParam1->f_150[2] = 139.0999f;
			return 1;
			break;
		
		case 19:
			*(uParam1[0 /*15*/]) = { -1181.397f, -826.845f, 16.5792f };
			(uParam1[0 /*15*/])->f_3 = { 9.6959f, 0f, 47.2246f };
			(uParam1[0 /*15*/])->f_6 = { -1181.98f, -827.2338f, 14.7335f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 4.1175f, 0f, 52.9134f };
			(uParam1[0 /*15*/])->f_12 = 50f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -1184.33f, -826.4483f, 14.7437f };
			(uParam1[1 /*15*/])->f_3 = { -0.6489f, -0.0007f, 62.8269f };
			(uParam1[1 /*15*/])->f_6 = { -1184.571f, -826.3248f, 14.7407f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -0.1044f, -0.0007f, 62.8269f };
			(uParam1[1 /*15*/])->f_12 = 18.4352f;
			(uParam1[1 /*15*/])->f_13 = 5.55f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -1184.338f, -826.9095f, 14.7463f };
			(uParam1[2 /*15*/])->f_3 = { -0.6489f, -0.0007f, 50.098f };
			(uParam1[2 /*15*/])->f_6 = { -1184.433f, -826.8304f, 14.7449f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -0.6489f, -0.0007f, 48.6321f };
			(uParam1[2 /*15*/])->f_12 = 18.4352f;
			(uParam1[2 /*15*/])->f_13 = 11.425f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -1183.2f, -830.7167f, 14.5212f };
			(uParam1[3 /*15*/])->f_3 = { 1.0563f, 0f, 27.379f };
			(uParam1[3 /*15*/])->f_6 = { -1183.022f, -830.6245f, 14.5212f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 2.0449f, 0f, 26.6091f };
			(uParam1[3 /*15*/])->f_12 = 42.0117f;
			(uParam1[3 /*15*/])->f_13 = 5.2f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { -1188.466f, -824.3413f, 14.8546f };
			(uParam1[4 /*15*/])->f_3 = { 1.5615f, -0.1037f, -118.6105f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 53.386f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -1186.471f, -824.6526f, 14.8865f };
			(uParam1[5 /*15*/])->f_3 = { -3.8721f, 0f, 169.2043f };
			(uParam1[5 /*15*/])->f_6 = { -1186.471f, -824.6526f, 14.8865f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -3.8721f, 0f, 173.8093f };
			(uParam1[5 /*15*/])->f_12 = 49.9849f;
			(uParam1[5 /*15*/])->f_13 = 5.52f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -1186.471f, -824.6526f, 14.8865f };
			uParam1->f_91.f_3 = { -3.8721f, 0f, 169.2043f };
			uParam1->f_97 = 49.9849f;
			uParam1->f_98 = { -1186.429f, -827.6542f, 14.7835f };
			uParam1->f_98.f_3 = { -0.7502f, 0.0313f, -9.5858f };
			uParam1->f_104 = 49.9849f;
			uParam1->f_105 = { -1189.128f, -832.9972f, 13.2161f };
			uParam1->f_108 = 218.52f;
			uParam1->f_109 = { -1186.425f, -825.9056f, 13.3321f };
			uParam1->f_112[0 /*3*/] = { -1187.74f, -824.2661f, 13.3448f };
			uParam1->f_112[1 /*3*/] = { -1186.4f, -824.4038f, 13.3008f };
			uParam1->f_119 = { -1190.961f, -806.6936f, 17.0174f };
			uParam1->f_123 = 2.505f;
			uParam1->f_124 = 4f;
			uParam1->f_125 = 0.27f;
			uParam1->f_126 = 8.625f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -1192.524f, -834.0498f, 13.3085f };
			uParam1->f_132 = { -1131.694f, -912.2311f, 2.2148f };
			uParam1->f_135 = { -1196.721f, -872.5267f, 12.5092f };
			uParam1->f_135.f_3 = 299.52f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { -1265.435f, -727.5261f, 21.1402f };
			uParam1->f_150[0] = 25.92f;
			uParam1->f_140[1 /*3*/] = { -1222.269f, -784.6736f, 16.6973f };
			uParam1->f_150[1] = 30.96f;
			uParam1->f_140[2 /*3*/] = { -1140.77f, -935.9708f, 1.6022f };
			uParam1->f_150[2] = 125.0739f;
			return 1;
			break;
		
		case 20:
			*(uParam1[0 /*15*/]) = { -1400.438f, -585.9051f, 30.9432f };
			(uParam1[0 /*15*/])->f_3 = { 32.3305f, 0f, -105.6953f };
			(uParam1[0 /*15*/])->f_6 = { -1400.362f, -585.9331f, 30.9394f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -2.7052f, 0f, -110.3139f };
			(uParam1[0 /*15*/])->f_12 = 50f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -1397.601f, -589.7619f, 30.8651f };
			(uParam1[1 /*15*/])->f_3 = { -4.6041f, 0.0007f, -69.4751f };
			(uParam1[1 /*15*/])->f_6 = { -1397.428f, -589.6965f, 30.8501f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -4.6041f, 0.0007f, -69.4751f };
			(uParam1[1 /*15*/])->f_12 = 25.7248f;
			(uParam1[1 /*15*/])->f_13 = 5.075f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -1398.365f, -590.4213f, 30.7041f };
			(uParam1[2 /*15*/])->f_3 = { -1.8133f, 0.0007f, -54.5359f };
			(uParam1[2 /*15*/])->f_6 = { -1398.268f, -590.3511f, 30.7003f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -1.8133f, 0.0007f, -53.8792f };
			(uParam1[2 /*15*/])->f_12 = 25.7248f;
			(uParam1[2 /*15*/])->f_13 = 10.05f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -1392.434f, -584.4755f, 30.6697f };
			(uParam1[3 /*15*/])->f_3 = { -3.5396f, 0f, 147.9476f };
			(uParam1[3 /*15*/])->f_6 = { -1392.684f, -584.874f, 30.6406f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -2.1681f, 0f, 149.1801f };
			(uParam1[3 /*15*/])->f_12 = 32.1336f;
			(uParam1[3 /*15*/])->f_13 = 8.025f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -1395.967f, -590.8463f, 30.9775f };
			(uParam1[5 /*15*/])->f_3 = { -7.0494f, 0f, -16.7103f };
			(uParam1[5 /*15*/])->f_6 = { -1395.967f, -590.8463f, 30.9775f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -7.0494f, 0f, -2.2177f };
			(uParam1[5 /*15*/])->f_12 = 49.3689f;
			(uParam1[5 /*15*/])->f_13 = 4.785f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -1395.967f, -590.8463f, 30.9775f };
			uParam1->f_91.f_3 = { -7.0494f, 0f, -16.7103f };
			uParam1->f_97 = 49.3689f;
			uParam1->f_98 = { -1395.967f, -590.8463f, 30.9775f };
			uParam1->f_98.f_3 = { -7.0494f, 0f, -2.2177f };
			uParam1->f_104 = 49.3689f;
			uParam1->f_105 = { -1396.863f, -583.7726f, 29.2332f };
			uParam1->f_108 = 305.28f;
			uParam1->f_109 = { -1395.69f, -589.4706f, 29.2947f };
			uParam1->f_112[0 /*3*/] = { -1394.478f, -588.175f, 29.2765f };
			uParam1->f_112[1 /*3*/] = { -1395.249f, -586.9717f, 29.2791f };
			uParam1->f_119 = { -1387.374f, -586.2861f, 29.2117f };
			uParam1->f_123 = 2.505f;
			uParam1->f_124 = 4f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 8.16f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -1395.365f, -585.9979f, 29.2759f };
			uParam1->f_132 = { -1437.236f, -602.3437f, 29.7106f };
			uParam1->f_135 = { -1402.181f, -587.1375f, 29.2292f };
			uParam1->f_135.f_3 = 301.68f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { -1363.934f, -597.2744f, 28.115f };
			uParam1->f_150[0] = 212.4f;
			uParam1->f_140[1 /*3*/] = { -1317.086f, -534.9244f, 31.6545f };
			uParam1->f_150[1] = 284.04f;
			uParam1->f_140[2 /*3*/] = { -1521.922f, -692.8118f, 27.4762f };
			uParam1->f_150[2] = 232.8838f;
			return 1;
			break;
		
		case 21:
			*(uParam1[0 /*15*/]) = { -1366.922f, -398.731f, 41.0798f };
			(uParam1[0 /*15*/])->f_3 = { 17.4675f, -0.1845f, -77.0057f };
			(uParam1[0 /*15*/])->f_6 = { -1366.93f, -398.9865f, 40.0866f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -5.1001f, -0.1845f, -65.4537f };
			(uParam1[0 /*15*/])->f_12 = 30.8234f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -1345.72f, -386.2633f, 37.2103f };
			(uParam1[1 /*15*/])->f_3 = { -1.0508f, -0.1845f, -61.7459f };
			(uParam1[1 /*15*/])->f_6 = { -1345.581f, -386.1886f, 37.2074f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -1.0508f, -0.1845f, -61.7459f };
			(uParam1[1 /*15*/])->f_12 = 21.5932f;
			(uParam1[1 /*15*/])->f_13 = 6.925f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -1345.955f, -386.2108f, 37.2211f };
			(uParam1[2 /*15*/])->f_3 = { -3.4291f, -0.1845f, -72.0063f };
			(uParam1[2 /*15*/])->f_6 = { -1345.777f, -386.153f, 37.2099f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -3.185f, -0.1845f, -72.0063f };
			(uParam1[2 /*15*/])->f_12 = 21.5932f;
			(uParam1[2 /*15*/])->f_13 = 10.075f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -1337.814f, -390.8861f, 37.0116f };
			(uParam1[3 /*15*/])->f_3 = { -0.8397f, -0.1845f, 42.1048f };
			(uParam1[3 /*15*/])->f_6 = { -1338.064f, -391.1115f, 37.0105f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -0.8397f, -0.1845f, 42.1048f };
			(uParam1[3 /*15*/])->f_12 = 33.8628f;
			(uParam1[3 /*15*/])->f_13 = 10.375f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { -1347.607f, -384.3f, 37.2427f };
			(uParam1[4 /*15*/])->f_3 = { -5.1716f, -0.1784f, -101.7165f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 33.8628f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -1342.915f, -385.4987f, 37.2378f };
			(uParam1[5 /*15*/])->f_3 = { -3.0101f, -0.1845f, 62.5899f };
			(uParam1[5 /*15*/])->f_6 = { -1342.915f, -385.4987f, 37.2378f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -3.0101f, -0.1845f, 49.9371f };
			(uParam1[5 /*15*/])->f_12 = 49.9943f;
			(uParam1[5 /*15*/])->f_13 = 5.52f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -1342.915f, -385.4987f, 37.2378f };
			uParam1->f_91.f_3 = { -3.0101f, -0.1845f, 62.5899f };
			uParam1->f_97 = 49.9943f;
			uParam1->f_98 = { -1344.697f, -383.5359f, 37.1767f };
			uParam1->f_98.f_3 = { -7.7089f, -0.22f, -177.5366f };
			uParam1->f_104 = 49.9943f;
			uParam1->f_105 = { -1346.659f, -382.4048f, 35.755f };
			uParam1->f_108 = 304.2f;
			uParam1->f_109 = { -1344.319f, -385.1048f, 35.7534f };
			uParam1->f_112[0 /*3*/] = { -1342.346f, -384.7795f, 35.7455f };
			uParam1->f_112[1 /*3*/] = { -1342.183f, -385.7662f, 35.745f };
			uParam1->f_119 = { -1315.982f, -383.286f, 35.7237f };
			uParam1->f_123 = 2.505f;
			uParam1->f_124 = 4f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 5.685f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -1341.672f, -376.5873f, 35.7475f };
			uParam1->f_132 = { -1275.441f, -344.9638f, 35.6584f };
			uParam1->f_135 = { -1326.111f, -395.0894f, 35.4495f };
			uParam1->f_135.f_3 = 212.4f;
			uParam1->f_135.f_4 = 8;
			uParam1->f_140[0 /*3*/] = { -1300.443f, -383.3367f, 35.5787f };
			uParam1->f_150[0] = 208.44f;
			uParam1->f_140[1 /*3*/] = { -1331.939f, -325.6764f, 36.3622f };
			uParam1->f_150[1] = 29.88f;
			uParam1->f_140[2 /*3*/] = { -1293.166f, -383.7935f, 35.5591f };
			uParam1->f_150[2] = 207.2801f;
			return 1;
			break;
		
		case 22:
			*(uParam1[0 /*15*/]) = { -12.9499f, 6502.845f, 32.7873f };
			(uParam1[0 /*15*/])->f_3 = { 9.5209f, 0f, 28.9591f };
			(uParam1[0 /*15*/])->f_6 = { -12.9172f, 6502.981f, 32.0578f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -3.2163f, 0f, 28.4487f };
			(uParam1[0 /*15*/])->f_12 = 31.35f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -15.8414f, 6504.559f, 32.0731f };
			(uParam1[1 /*15*/])->f_3 = { -2.4909f, 0f, -79.5938f };
			(uParam1[1 /*15*/])->f_6 = { -15.719f, 6504.578f, 32.0677f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -2.4909f, 0f, -79.5938f };
			(uParam1[1 /*15*/])->f_12 = 26.7402f;
			(uParam1[1 /*15*/])->f_13 = 6.8f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -15.2964f, 6503.461f, 32.0741f };
			(uParam1[2 /*15*/])->f_3 = { -3.2163f, 0f, -40.2756f };
			(uParam1[2 /*15*/])->f_6 = { -15.2178f, 6503.554f, 32.0673f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -3.2163f, 0f, -40.2756f };
			(uParam1[2 /*15*/])->f_12 = 31.35f;
			(uParam1[2 /*15*/])->f_13 = 9.425f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -17.4111f, 6499.129f, 31.9122f };
			(uParam1[3 /*15*/])->f_3 = { -1.2605f, 0f, -35.0484f };
			(uParam1[3 /*15*/])->f_6 = { -17.3962f, 6499.245f, 31.9101f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -1.2605f, 0f, -38.0048f };
			(uParam1[3 /*15*/])->f_12 = 28.2785f;
			(uParam1[3 /*15*/])->f_13 = 10.825f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -13.457f, 6504.143f, 32.0189f };
			(uParam1[5 /*15*/])->f_3 = { -5.428f, 0f, 29.793f };
			(uParam1[5 /*15*/])->f_6 = { -13.457f, 6504.143f, 32.0189f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -5.428f, 0f, 25.0133f };
			(uParam1[5 /*15*/])->f_12 = 49.9863f;
			(uParam1[5 /*15*/])->f_13 = 5.1f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -13.457f, 6504.143f, 32.0189f };
			uParam1->f_91.f_3 = { -5.428f, 0f, 29.793f };
			uParam1->f_97 = 49.9863f;
			uParam1->f_98 = { -14.0094f, 6506.85f, 32.039f };
			uParam1->f_98.f_3 = { -7.8212f, 0f, 154.0325f };
			uParam1->f_104 = 49.9863f;
			uParam1->f_105 = { -14.8887f, 6510.313f, 30.2857f };
			uParam1->f_108 = 317.16f;
			uParam1->f_109 = { -14.6068f, 6505.243f, 30.5313f };
			uParam1->f_112[0 /*3*/] = { -13.406f, 6504.645f, 30.5605f };
			uParam1->f_112[1 /*3*/] = { -13.3913f, 6506.082f, 30.5421f };
			uParam1->f_119 = { -2.3765f, 6505.239f, 30.4432f };
			uParam1->f_123 = 2.505f;
			uParam1->f_124 = 4.125f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 7.32f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -14.5603f, 6510.57f, 30.2871f };
			uParam1->f_132 = { 21.5285f, 6548.239f, 30.2918f };
			uParam1->f_135 = { -22.4419f, 6502.546f, 30.2973f };
			uParam1->f_135.f_3 = 313.56f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { 0.2704f, 6440.619f, 30.4253f };
			uParam1->f_150[0] = 226.08f;
			uParam1->f_140[1 /*3*/] = { 42.3786f, 6499.078f, 30.4253f };
			uParam1->f_150[1] = 230.76f;
			uParam1->f_140[2 /*3*/] = { 85.8481f, 6593.306f, 30.4944f };
			uParam1->f_150[2] = 229.9428f;
			return 1;
			break;
		
		case 23:
			*(uParam1[0 /*15*/]) = { 1398.366f, 3589.792f, 35.7675f };
			(uParam1[0 /*15*/])->f_3 = { 16.1439f, 0f, 12.7999f };
			(uParam1[0 /*15*/])->f_6 = { 1398.386f, 3589.78f, 35.4151f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -3.1277f, 0f, 60.2753f };
			(uParam1[0 /*15*/])->f_12 = 41.4763f;
			(uParam1[0 /*15*/])->f_13 = 6.45f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 1393.177f, 3589.758f, 35.3621f };
			(uParam1[1 /*15*/])->f_3 = { -1.7755f, 0f, -47.7455f };
			(uParam1[1 /*15*/])->f_6 = { 1393.235f, 3589.811f, 35.3597f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -1.7755f, 0f, -47.7455f };
			(uParam1[1 /*15*/])->f_12 = 25.6712f;
			(uParam1[1 /*15*/])->f_13 = 5.925f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { 1393.233f, 3589.382f, 35.3779f };
			(uParam1[2 /*15*/])->f_3 = { -4.1375f, 0f, -43.9328f };
			(uParam1[2 /*15*/])->f_6 = { 1393.384f, 3589.538f, 35.3621f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -3.8599f, 0f, -43.0485f };
			(uParam1[2 /*15*/])->f_12 = 25.6712f;
			(uParam1[2 /*15*/])->f_13 = 10.675f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { 1401.436f, 3593.278f, 34.9226f };
			(uParam1[3 /*15*/])->f_3 = { 4.7665f, 0f, 89.9214f };
			(uParam1[3 /*15*/])->f_6 = { 1401.411f, 3593.278f, 34.9247f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 2.3666f, 0f, 93.3675f };
			(uParam1[3 /*15*/])->f_12 = 40.2577f;
			(uParam1[3 /*15*/])->f_13 = 7.025f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 1393.014f, 3590.391f, 35.3415f };
			(uParam1[5 /*15*/])->f_3 = { -3.6763f, 0f, -73.5766f };
			(uParam1[5 /*15*/])->f_6 = { 1393.014f, 3590.391f, 35.3415f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -3.6763f, 0f, -76.3552f };
			(uParam1[5 /*15*/])->f_12 = 49.9894f;
			(uParam1[5 /*15*/])->f_13 = 5.895f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 1393.014f, 3590.391f, 35.3415f };
			uParam1->f_91.f_3 = { -3.6763f, 0f, -73.5766f };
			uParam1->f_97 = 49.9894f;
			uParam1->f_98 = { 1395.981f, 3590.8f, 35.2591f };
			uParam1->f_98.f_3 = { -1.4534f, -0.0615f, 64.6092f };
			uParam1->f_104 = 49.9894f;
			uParam1->f_105 = { 1401.176f, 3591.584f, 33.9257f };
			uParam1->f_108 = 287.28f;
			uParam1->f_109 = { 1394.206f, 3591.311f, 33.8731f };
			uParam1->f_112[0 /*3*/] = { 1395.798f, 3592.12f, 33.885f };
			uParam1->f_112[1 /*3*/] = { 1395.861f, 3591.15f, 33.8331f };
			uParam1->f_119 = { 1394.218f, 3599.675f, 33.9149f };
			uParam1->f_123 = 3.505f;
			uParam1->f_124 = 4.125f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 8.205f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { 1398.347f, 3589.341f, 33.9425f };
			uParam1->f_132 = { 1489.784f, 3614.96f, 33.8271f };
			uParam1->f_135 = { 1382.274f, 3593.806f, 33.8937f };
			uParam1->f_135.f_3 = 12.96f;
			uParam1->f_135.f_4 = 5;
			uParam1->f_140[0 /*3*/] = { 1452.449f, 3638.907f, 33.6778f };
			uParam1->f_150[0] = 13.68f;
			uParam1->f_140[1 /*3*/] = { 1347.231f, 3612.064f, 33.876f };
			uParam1->f_150[1] = 28.8212f;
			uParam1->f_140[2 /*3*/] = { 1459.649f, 3651.67f, 33.5887f };
			uParam1->f_150[2] = 14.7733f;
			return 1;
			break;
	}
	return 0;
}

bool func_292(int iParam0)
{
	return Global_41631 == iParam0;
}

int func_293(int iParam0)
{
	if (Global_41631 == 15)
	{
		return 0;
	}
	if (func_294(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_294(int iParam0)
{
	return func_295(iParam0, Global_41631);
}

int func_295(int iParam0, int iParam1)
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

int func_296()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_98955 == 7 || Global_98955 == 8)
	{
		return 1;
	}
	return 0;
}

int func_297()
{
	if (((Global_98955 == 13 || Global_98955 == 10) || Global_98955 == 11) || Global_98955 == 12)
	{
		return 0;
	}
	return 1;
}

void func_298(int iParam0)
{
	Local_49.f_1 = iParam0;
}

void func_299()
{
	int iVar0;
	int iVar1;
	
	if (Local_49.f_258 != 0)
	{
		func_58(&(Local_49.f_3));
		func_58(&(Local_49.f_56));
		func_58(&(Local_49.f_109));
		if (unk_0x8F678487EEBD8CE4(Local_49.f_648))
		{
			unk_0x93370FA10F15BE44(&(Local_49.f_648));
		}
		if (func_303("FR_H_ACTIV1"))
		{
			unk_0xD289B55B6AADBA10(1);
		}
		if (func_303("FR_H_ACTIV2"))
		{
			unk_0xD289B55B6AADBA10(1);
		}
		if (Local_49.f_618)
		{
			iVar0 = 0;
			while (iVar0 < 22)
			{
				iVar1 = Global_94691[iVar0 /*2*/];
				if (func_302(iVar1))
				{
					func_301(iVar1, 0, 0);
				}
				iVar0++;
			}
			func_300(&(Local_49.f_631));
			Local_49.f_633 = 0;
		}
		Local_49.f_258 = 0;
	}
}

void func_300(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_301(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = unk_0xCE990E643CD9D0E5(Global_31346[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xCE990E643CD9D0E5(Global_31346[iVar0 /*23*/].f_11, 0))
	{
		unk_0xBE20AB8238688965(&(Global_31346[iVar0 /*23*/].f_11), 18);
		if (Global_31343 == 1)
		{
			Global_31344 = 1;
		}
		Global_31343 = 1;
	}
	if (bParam1)
	{
		unk_0xBE20AB8238688965(&(Global_31346[iVar0 /*23*/].f_11), 0);
		unk_0xBE20AB8238688965(&(Global_31346[iVar0 /*23*/].f_11), 15);
		unk_0xBE20AB8238688965(&(Global_31346[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_31346[iVar0 /*23*/].f_11), 0);
		unk_0xD2459066EA58CE43(&(Global_31346[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0xCE990E643CD9D0E5(Global_31346[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0x8F678487EEBD8CE4(Global_31346[iVar0 /*23*/].f_19))
		{
			unk_0x73CC8164D4BBE5DA(1);
			unk_0x93370FA10F15BE44(&(Global_31346[iVar0 /*23*/].f_19));
			unk_0x73CC8164D4BBE5DA(0);
		}
	}
}

bool func_302(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0x8F678487EEBD8CE4(Global_31346[iVar0 /*23*/].f_19);
}

bool func_303(char* sParam0)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

void func_304()
{
	func_871();
	if (unk_0xEE02AF6BC32C9B5C())
	{
		func_299();
		func_298(4);
		return;
	}
	else if (func_297())
	{
		if (func_296())
		{
			func_298(3);
		}
	}
	else if (!unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		func_299();
		func_298(0);
	}
	else if (((func_293(6) && !func_292(6)) && !func_292(7)) && !func_292(2))
	{
		func_299();
		func_868(0, 48, 0);
		func_298(1);
	}
	else if (func_867())
	{
		func_491();
		func_458();
		func_308(1);
		func_299();
		if (!func_307())
		{
			if (func_305())
			{
				func_298(6);
			}
		}
	}
}

int func_305()
{
	int iVar0;
	
	if (Local_49.f_56 != 0 || Local_49.f_109 != 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Local_49.f_162[iVar0 /*28*/].f_1 != 0 && Local_49.f_162[iVar0 /*28*/].f_1 != 11)
		{
			return 0;
		}
		iVar0++;
	}
	if (func_306(&(Local_49.f_703)) == 3 || Local_49.f_670 > 0)
	{
		return 0;
	}
	return 1;
}

int func_306(var uParam0)
{
	return *uParam0;
}

int func_307()
{
	int iVar0;
	
	if ((Local_49.f_56 != 0 && Local_49.f_56 < 7) || (Local_49.f_109 != 0 && Local_49.f_109 < 7))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((Local_49.f_162[iVar0 /*28*/].f_1 != 0 && Local_49.f_162[iVar0 /*28*/].f_1 != 11) && Local_49.f_162[iVar0 /*28*/].f_1 < 14)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_308(bool bParam0)
{
	func_389(&(Local_49.f_703), &(Local_49.f_737));
	func_384();
	func_381();
	func_312();
	if (bParam0)
	{
		func_309();
	}
}

void func_309()
{
	if (Global_111858.f_18099.f_408 == 0)
	{
		if (Local_49.f_162[0 /*28*/].f_1 == 3 || Local_49.f_162[0 /*28*/].f_1 == 7)
		{
			if (func_310("FR_H_BUDM_A"))
			{
				Global_111858.f_18099.f_408 = 1;
				return;
			}
		}
		else if (Local_49.f_162[1 /*28*/].f_1 == 3 || Local_49.f_162[1 /*28*/].f_1 == 7)
		{
			if (func_310("FR_H_BUDF_A"))
			{
				Global_111858.f_18099.f_408 = 1;
				return;
			}
		}
		else if (Local_49.f_162[2 /*28*/].f_1 == 3 || Local_49.f_162[2 /*28*/].f_1 == 7)
		{
			if (func_310("FR_H_BUDT_A"))
			{
				Global_111858.f_18099.f_408 = 1;
				return;
			}
		}
	}
	if (Global_111858.f_18099.f_409 == 0)
	{
		if (Local_49.f_857)
		{
			if (func_310("FR_H_BUD_SW"))
			{
				Global_111858.f_18099.f_409 = 1;
				return;
			}
		}
	}
	else if (unk_0xDABD547F0DF2906C())
	{
		if (unk_0x9CC4D06F5338CA6B())
		{
			if (func_303("FR_H_BUD_SW"))
			{
				unk_0xD289B55B6AADBA10(1);
			}
		}
	}
}

int func_310(char* sParam0)
{
	if (!unk_0x19D4274B54F9D9FA())
	{
		func_311(sParam0, -1);
		return 1;
	}
	return 0;
}

void func_311(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 0, 1, iParam1);
}

void func_312()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_127();
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Local_49.f_671[iVar1 /*6*/].f_1 != 6 && Local_49.f_671[iVar1 /*6*/] != iVar0)
		{
			if (!func_380(&(Local_49.f_671[iVar1 /*6*/].f_3)) || func_377(&(Local_49.f_671[iVar1 /*6*/].f_3), 0f))
			{
				if (!unk_0xAE06B9E39EBDE049(func_375(Local_49.f_671[iVar1 /*6*/])))
				{
					iVar2 = -1924990311;
					if (Local_49.f_671[iVar1 /*6*/].f_1 == 2)
					{
						iVar2 = func_374(func_68(Local_49.f_671[iVar1 /*6*/]));
					}
					if (iVar2 != -1)
					{
						func_313(iVar0, Local_49.f_671[iVar1 /*6*/], Local_49.f_671[iVar1 /*6*/].f_1, 1, Local_49.f_671[iVar1 /*6*/].f_2, iVar2, -1);
					}
					Local_49.f_671[iVar1 /*6*/].f_1 = 6;
					Local_49.f_702 = (Local_49.f_702 - 1);
				}
			}
		}
		iVar1++;
	}
}

int func_313(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char* sVar8;
	
	iVar0 = 3;
	iVar1 = func_68(iParam1);
	iVar2 = func_373(iParam0);
	iVar3 = 10000;
	if (iParam3 == 0)
	{
		if (func_371(iVar1, iParam2, -1, &iVar4, &iVar5))
		{
			if (iParam5 == -1)
			{
				return 0;
			}
			iVar6 = 0;
			if (((((iParam5 == 2091854273 || iParam5 == 328868333) || iParam5 == -1813399915) || iParam5 == 465306446) || iParam5 == -816460512) || iParam5 == -702667427)
			{
				iVar6 = 262144;
			}
			iVar7 = -1;
			if (iParam5 == 2091854273)
			{
				iVar7 = 24;
			}
			else if (iParam5 == 328868333)
			{
				iVar7 = 25;
			}
			else if (iParam5 == -1813399915)
			{
				iVar7 = 26;
			}
			else if (iParam5 == 465306446)
			{
				iVar7 = 27;
			}
			else if (iParam5 == -816460512)
			{
				iVar7 = 28;
			}
			else if (iParam5 == -702667427)
			{
				iVar7 = 29;
			}
			if (func_368(iParam5, iVar4, iVar5, iVar0, iVar2, iParam1, iVar3, 10000, iParam6, iParam4, iVar7, iVar6, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	else if (func_366(iVar1, iParam2, -1, &sVar8))
	{
		if (func_352(iParam1, &sVar8, 1, 0, 0, 0, 0, 1, 0, 1))
		{
			if (iParam4 != 0)
			{
				switch (iParam4)
				{
					case 202:
						func_351();
						break;
					
					case 203:
						func_350();
						break;
					
					case 204:
						func_349();
						break;
					
					case 205:
						func_348();
						break;
					
					case 206:
						func_314();
						break;
					}
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_314()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_127();
	iVar1 = func_347(iVar0);
	if (iVar1 > 10000)
	{
		func_315(iVar0, 129, 5000);
	}
	else if (iVar1 >= 10)
	{
		func_315(iVar0, 129, (iVar1 / 10));
	}
}

int func_315(int iParam0, int iParam1, int iParam2)
{
	if (func_346(iParam0) == 3)
	{
		return 0;
	}
	if (func_346(iParam0) == 4)
	{
		return 0;
	}
	return func_316(func_346(iParam0), 0, iParam1, iParam2, 0);
}

int func_316(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_345();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_344(99, 1);
					func_343(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 1:
					func_343(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 2:
					func_343(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_328(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_324(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_343(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 1:
							func_343(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 2:
							func_343(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_324(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_343(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 1:
							func_343(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 2:
							func_343(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_343(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 1:
							func_343(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 2:
							func_343(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_343(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 1:
							func_343(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 2:
							func_343(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x02406178CDC27728())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_343(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 1:
									func_343(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 2:
									func_343(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_343(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 1:
									func_343(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 2:
									func_343(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_324(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_343(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 1:
									func_343(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 2:
									func_343(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_343(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 1:
									func_343(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 2:
									func_343(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_323(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_344(95, iParam3);
					break;
				
				case 1:
					func_344(97, iParam3);
					break;
				
				case 2:
					func_344(96, iParam3);
					break;
			}
			func_344(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_319(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_319(iVar1);
	}
	iVar5 = (Global_58891[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58891[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58891[iVar2] = 2147483647;
				}
				else
				{
					Global_58891[iVar2] = (Global_58891[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_343(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 1:
					func_343(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 2:
					func_343(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_58891[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58891[iVar2];
			Global_58891[iVar2] = (Global_58891[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_111858.f_20560.f_233[iVar2 /*69*/].f_2[Global_111858.f_20560.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_111858.f_20560.f_233[iVar2 /*69*/].f_2[Global_111858.f_20560.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_111858.f_20560.f_233[iVar2 /*69*/].f_2[Global_111858.f_20560.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_111858.f_20560.f_233[iVar2 /*69*/]++;
		Global_111858.f_20560.f_233[iVar2 /*69*/].f_1++;
		if (Global_111858.f_20560.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_111858.f_20560.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_318(iParam0);
	if (Global_41631 == 15)
	{
		func_317(0);
	}
	return 1;
}

void func_317(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58899[iVar0 /*3*/][0] = Global_111858.f_20560[iVar0];
		Global_58899.f_31[iVar0 /*3*/][0] = Global_111858.f_20560.f_11[iVar0];
		Global_58899.f_62[iVar0 /*3*/][0] = Global_111858.f_20560.f_22[iVar0];
		Global_58899.f_93[iVar0 /*3*/][0] = Global_111858.f_20560.f_33[iVar0];
		Global_58899.f_124[iVar0 /*3*/][0] = Global_111858.f_20560.f_44[iVar0];
		Global_58899.f_155[iVar0 /*3*/][0] = Global_111858.f_20560.f_55[iVar0];
		Global_58899.f_186[iVar0 /*3*/][0] = Global_111858.f_20560.f_66[iVar0];
		Global_58899.f_217[iVar0 /*3*/][0] = Global_111858.f_20560.f_77[iVar0];
		Global_58899.f_248[iVar0 /*3*/][0] = Global_111858.f_20560.f_88[iVar0];
		if (!bParam0)
		{
			Global_58899[iVar0 /*3*/][1] = Global_111858.f_20560[iVar0];
			Global_58899.f_31[iVar0 /*3*/][1] = Global_111858.f_20560.f_11[iVar0];
			Global_58899.f_62[iVar0 /*3*/][1] = Global_111858.f_20560.f_22[iVar0];
			Global_58899.f_93[iVar0 /*3*/][1] = Global_111858.f_20560.f_33[iVar0];
			Global_58899.f_124[iVar0 /*3*/][1] = Global_111858.f_20560.f_44[iVar0];
			Global_58899.f_155[iVar0 /*3*/][1] = Global_111858.f_20560.f_55[iVar0];
			Global_58899.f_186[iVar0 /*3*/][1] = Global_111858.f_20560.f_66[iVar0];
			Global_58899.f_217[iVar0 /*3*/][1] = Global_111858.f_20560.f_77[iVar0];
			Global_58899.f_248[iVar0 /*3*/][1] = Global_111858.f_20560.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_318(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_58891[iParam0];
	switch (iParam0)
	{
		case 0:
			STAT_SET_INT(joaat("SP0_TOTAL_CASH"), iVar0, 1);
			break;
		
		case 1:
			STAT_SET_INT(joaat("SP1_TOTAL_CASH"), iVar0, 1);
			break;
		
		case 2:
			STAT_SET_INT(joaat("SP2_TOTAL_CASH"), iVar0, 1);
			break;
	}
}

void func_319(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_322(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_322(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_322(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_322(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_206(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_206(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_206(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_206(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_206(8274, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_206(8275, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x25DDB354A40FFCDB())
	{
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_20560.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xD2459066EA58CE43(&(Global_111858.f_20560.f_471), iParam0);
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_111858.f_20560.f_471, iParam0) || unk_0xCE990E643CD9D0E5(Global_2097152[func_321() /*10931*/].f_6175.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xD2459066EA58CE43(&(Global_111858.f_20560.f_471), iParam0);
		unk_0xD2459066EA58CE43(&(Global_2097152[func_321() /*10931*/].f_6175.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x5B8DD855EAFD33B5("COUP_RED");
		unk_0x6A826E35A3096ED0(func_320(iParam0));
		unk_0x39E1440587355CC1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_320(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_321()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_322(int iParam0, int iParam1, int iParam2, int iParam3)
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
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	
	if (iParam2 == -1)
	{
		iParam2 = func_21();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x43BE40E27DB6DC2E((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x12730A13C85FC896((iParam0 - 0)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x43BE40E27DB6DC2E((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x12730A13C85FC896((iParam0 - 192)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x43BE40E27DB6DC2E((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x12730A13C85FC896((iParam0 - 513)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x43BE40E27DB6DC2E((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x12730A13C85FC896((iParam0 - 705)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x840F9A9E6D216561((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x12730A13C85FC896((iParam0 - 3111)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x840F9A9E6D216561((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x12730A13C85FC896((iParam0 - 2919)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x12730A13C85FC896((iParam0 - 4207)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x12730A13C85FC896((iParam0 - 4335)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x4B2E4855CB2B4FAA((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x12730A13C85FC896((iParam0 - 6029)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x12730A13C85FC896((iParam0 - 7385)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x12730A13C85FC896((iParam0 - 7321)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x4B2E4855CB2B4FAA((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x12730A13C85FC896((iParam0 - 9361)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x12730A13C85FC896((iParam0 - 15369)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x12730A13C85FC896((iParam0 - 15562)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x12730A13C85FC896((iParam0 - 15946)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x4B2E4855CB2B4FAA((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x12730A13C85FC896((iParam0 - 18098)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x4B2E4855CB2B4FAA((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x12730A13C85FC896((iParam0 - 22066)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x4B2E4855CB2B4FAA((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x12730A13C85FC896((iParam0 - 24962)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x4B2E4855CB2B4FAA((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x12730A13C85FC896((iParam0 - 26810)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x12730A13C85FC896((iParam0 - 28098)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x12730A13C85FC896((iParam0 - 28355)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x12730A13C85FC896((iParam0 - 30227)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x12730A13C85FC896((iParam0 - 30355)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar24, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar25 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30515), 0, 1, iParam2, "_HISLANDPSTAT_BOOL");
		iVar1 = ((iParam0 - 30515) - unk_0x12730A13C85FC896((iParam0 - 30515)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar25, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_323(int iParam0)
{
	func_344(93, iParam0);
	func_344(29, iParam0);
	func_344(30, iParam0);
}

bool func_324(int iParam0)
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
	
	if (iParam0 == 8)
	{
		return func_325(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_325(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_325(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_325(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x5A002C4821A13338();
		iVar1 = func_208(8270, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x5A002C4821A13338();
		iVar3 = func_208(8271, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x5A002C4821A13338();
		iVar5 = func_208(8272, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x5A002C4821A13338();
		iVar7 = func_208(8273, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x5A002C4821A13338();
		iVar9 = func_208(8274, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x5A002C4821A13338();
		iVar11 = func_208(8275, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x25DDB354A40FFCDB())
	{
		return unk_0xCE990E643CD9D0E5(Global_111858.f_20560.f_471, iParam0);
	}
	return unk_0xCE990E643CD9D0E5(Global_2097152[func_321() /*10931*/].f_6175.f_10, iParam0);
}

int func_325(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_21();
	}
	iVar1 = func_327(iParam0, iParam1);
	uVar2 = func_326(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x9FD0AD883E4A7C1E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_326(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x12730A13C85FC896((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x12730A13C85FC896((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x12730A13C85FC896((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x12730A13C85FC896((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x12730A13C85FC896((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x12730A13C85FC896((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x12730A13C85FC896((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x12730A13C85FC896((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x12730A13C85FC896((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x12730A13C85FC896((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x12730A13C85FC896((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x12730A13C85FC896((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x12730A13C85FC896((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x12730A13C85FC896((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x12730A13C85FC896((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x12730A13C85FC896((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x12730A13C85FC896((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x12730A13C85FC896((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x12730A13C85FC896((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x12730A13C85FC896((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x12730A13C85FC896((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - unk_0x12730A13C85FC896((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - unk_0x12730A13C85FC896((iParam0 - 30355)) * 64);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = ((iParam0 - 30515) - unk_0x12730A13C85FC896((iParam0 - 30515)) * 64);
	}
	return iVar0;
}

int func_327(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_21();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x840F9A9E6D216561((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x840F9A9E6D216561((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30515), 0, 1, iParam1, "_HISLANDPSTAT_BOOL");
	}
	return iVar0;
}

int func_328(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x027BA2E902FAC118(27))
	{
		return 0;
	}
	if (unk_0xD2F202166691EDB2(joaat("SP0_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD2F202166691EDB2(joaat("SP1_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD2F202166691EDB2(joaat("SP2_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xD2F202166691EDB2(joaat("NUM_CASH_SPENT"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STAT_SET_INT(joaat("NUM_CASH_SPENT"), iVar1, 1);
		func_342(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_329(27, 1);
	return 1;
}

int func_329(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_330(iParam0, iParam1);
}

int func_330(int iParam0, int iParam1)
{
	if (func_292(14) && !func_341(iParam0))
	{
		return 0;
	}
	if (unk_0x027BA2E902FAC118(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31217 != 0 && !Global_76833)
	{
		return 0;
	}
	if (func_340(&Global_4271324))
	{
		if (func_338(&Global_4271324, iParam0))
		{
			return 0;
		}
		if (func_331(&Global_4271324, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x1C382E0E92F57545(iParam0))
		{
			return 0;
		}
		if (unk_0x027BA2E902FAC118(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_331(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x027BA2E902FAC118(iParam1))
	{
		return 0;
	}
	if (func_292(14) && !func_341(iParam1))
	{
		return 0;
	}
	if (func_338(uParam0, iParam1))
	{
		return 0;
	}
	if (func_337(uParam0) < 0f)
	{
		func_336(uParam0, 0);
	}
	func_334(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_332(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_332(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x027BA2E902FAC118(iParam1))
	{
		return 0;
	}
	if (func_292(14) && !func_341(iParam1))
	{
		return 0;
	}
	if (func_338(uParam0, iParam1))
	{
		return 0;
	}
	if (func_337(uParam0) < 0f)
	{
		func_336(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_333(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_333(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_334(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_335(uParam0, iVar0);
		iVar0++;
	}
	func_336(uParam0, (Global_4271323 - 0.5f));
}

void func_335(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_336(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_337(var uParam0)
{
	return uParam0->f_80;
}

bool func_338(var uParam0, int iParam1)
{
	return func_339(uParam0, iParam1) != -1;
}

int func_339(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_340(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_341(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

int func_342(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x76B47D2BF8F31200(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xD4563E24351CCDF9(iParam0, iParam1);
	}
	return 0;
}

void func_343(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD2F202166691EDB2(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STAT_SET_INT(iParam0, iVar0, 1);
}

void func_344(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57459[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x25DDB354A40FFCDB())
	{
		return;
	}
	if (Global_57459[iParam0 /*7*/])
	{
		unk_0xD2F202166691EDB2(Global_57459[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STAT_SET_INT(Global_57459[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_345()
{
	int iVar0;
	
	if (unk_0x011A67D2B195B6EB())
	{
		unk_0xD2F202166691EDB2(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58891[0] == iVar0)
		{
			Global_58891[0] = iVar0;
		}
		unk_0xD2F202166691EDB2(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58891[1] == iVar0)
		{
			Global_58891[1] = iVar0;
		}
		unk_0xD2F202166691EDB2(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58891[2] == iVar0)
		{
			Global_58891[2] = iVar0;
		}
	}
}

int func_346(int iParam0)
{
	return Global_1848[iParam0 /*29*/].f_17;
}

int func_347(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0xD2F202166691EDB2(joaat("SP0_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0xD2F202166691EDB2(joaat("SP1_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0xD2F202166691EDB2(joaat("SP2_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

void func_348()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_127();
	iVar1 = func_347(iVar0);
	if (iVar1 > 10000)
	{
		func_315(iVar0, 128, 5000);
	}
	else if (iVar1 >= 10)
	{
		func_315(iVar0, 128, (iVar1 / 10));
	}
}

void func_349()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_127();
	iVar1 = func_347(iVar0);
	if (iVar1 > 10000)
	{
		func_315(iVar0, 127, 5000);
	}
	else if (iVar1 >= 10)
	{
		func_315(iVar0, 127, (iVar1 / 10));
	}
}

void func_350()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_127();
	iVar1 = func_347(iVar0);
	if (iVar1 > 10000)
	{
		func_315(iVar0, 126, 5000);
	}
	else if (iVar1 >= 10)
	{
		func_315(iVar0, 126, (iVar1 / 10));
	}
}

void func_351()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_127();
	iVar1 = func_347(iVar0);
	if (iVar1 > 10000)
	{
		func_315(iVar0, 125, 5000);
	}
	else if (iVar1 >= 10)
	{
		func_315(iVar0, 125, (iVar1 / 10));
	}
}

int func_352(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xD2459066EA58CE43(&Global_7551, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_354(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8258 = iParam6;
			Global_8161[3 /*6*/] = { func_353(iParam0) };
			Global_8238 = iParam0;
			unk_0xBE20AB8238688965(&Global_7551, 1);
			unk_0xBE20AB8238688965(&Global_7551, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_353(int iParam0)
{
	return Global_1848[iParam0 /*29*/].f_3;
}

int func_354(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xF005CCA4263DF67F(sParam14, sParam15))
	{
	}
	func_138();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19681 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19681 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19681 == 1)
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
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
		{
			if (unk_0xE43E3F96A5D750CE(unk_0x9B0761B4C3EB8BC7()))
			{
				return 0;
			}
		}
		if (Global_111858.f_14047[Global_19681 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x7B70881748D166CD(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x7B70881748D166CD(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_365() == 0)
	{
		func_363();
		return 0;
	}
	func_362(Global_22072);
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/]), sParam1, 64);
	Global_111858.f_14137[Global_22072 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_111858.f_14137[Global_22072 /*104*/].f_24 = iParam2;
	}
	Global_111858.f_14137[Global_22072 /*104*/].f_25 = iParam7;
	Global_111858.f_14137[Global_22072 /*104*/].f_26 = uParam8;
	Global_111858.f_14137[Global_22072 /*104*/].f_29 = uParam9;
	Global_111858.f_14137[Global_22072 /*104*/].f_30 = uParam12;
	Global_111858.f_14137[Global_22072 /*104*/].f_31 = uParam11;
	Global_111858.f_14137[Global_22072 /*104*/].f_28 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/].f_33), sParam4, 64);
	Global_111858.f_14137[Global_22072 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/].f_50), sParam5, 64);
	Global_111858.f_14137[Global_22072 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/].f_83), sParam15, 64);
	if (unk_0xCE990E643CD9D0E5(Global_7551, 10))
	{
		Global_111858.f_14137[Global_22072 /*104*/].f_99[0] = 1;
		Global_111858.f_14137[Global_22072 /*104*/].f_99[1] = 1;
		Global_111858.f_14137[Global_22072 /*104*/].f_99[2] = 1;
		Global_8257 = 4;
		func_361(0);
		func_361(2);
		func_361(1);
	}
	else
	{
		func_138();
		switch (iParam16)
		{
			case 3:
				Global_111858.f_14137[Global_22072 /*104*/].f_99[Global_19681] = 1;
				break;
			
			case 0:
				Global_111858.f_14137[Global_22072 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_111858.f_14137[Global_22072 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_111858.f_14137[Global_22072 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19681)
			{
				case 0:
					func_361(0);
					Global_8257 = 0;
					break;
				
				case 1:
					func_361(1);
					Global_8257 = 1;
					break;
				
				case 2:
					func_361(2);
					Global_8257 = 2;
					break;
				
				case 3:
					func_361(3);
					Global_8257 = 3;
					break;
				
				default:
					Global_8257 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xCE990E643CD9D0E5(Global_7551, 10))
		{
			Global_111858.f_14047[0 /*20*/].f_17 = 1;
			Global_111858.f_14047[1 /*20*/].f_17 = 1;
			Global_111858.f_14047[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_111858.f_14047[Global_19681 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_111858.f_14047[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_111858.f_14047[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_111858.f_14047[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_22074[Global_22072] = 0;
	if (bParam10)
	{
		func_138();
		if (Global_19624)
		{
			StringCopy(&Global_19670, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19681)
			{
				case 0:
					StringCopy(&Global_19670, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19670, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19670, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19670, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_360())
			{
				unk_0xC4CC25B68A91D144(-1, "Text_Arrive_Tone", &Global_19670, 1);
			}
		}
	}
	if (!Global_19865)
	{
		if (Global_19681.f_1 == 6)
		{
			func_359(Global_19662, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_356(1);
			func_359(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19661), -1082130432, -1082130432, -1082130432);
		}
	}
	func_355(uParam0, sParam1);
	return 1;
}

void func_355(var uParam0, char* sParam1)
{
	if (!func_132())
	{
		return;
	}
	unk_0x1A2DCF21E22955B0(uParam0, 1654525105, unk_0x856D5567211886A2(sParam1), 0);
}

void func_356(int iParam0)
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
	
	Global_22073 = 0;
	Global_8156 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8120[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_292(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7558[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7558[iVar1 /*15*/].f_4)
					{
						if (Global_8120[iVar0] == 0)
						{
							Global_8084[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xCE990E643CD9D0E5(Global_7552, 3))
								{
									iVar2 = 42;
									Global_19868 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19868 = 0;
								}
								unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
								unk_0xAD291B8F75D737AD(1);
								unk_0xAD291B8F75D737AD(iVar0);
								unk_0xAD291B8F75D737AD(Global_7558[iVar1 /*15*/].f_10);
								unk_0xAD291B8F75D737AD(0);
								func_358(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(iVar2);
								unk_0xE1FDD153F5858534();
							}
							if (Global_2462245)
							{
								if (iVar1 == 14)
								{
									func_357(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8120[iVar0] = 1;
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
				if (iParam0 == Global_7558[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7558[iVar1 /*15*/].f_4)
					{
						if (Global_8120[iVar0] == 0)
						{
							Global_8084[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111858.f_14137[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_111858.f_14137[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_111858.f_14137[iVar3 /*104*/].f_99[Global_19681] == 1)
											{
												Global_22073++;
											}
										}
									}
									iVar3++;
								}
								func_357(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22073), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76833)
								{
									iVar4 = 0;
									iVar4 = Global_4269758;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4269759[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4269759[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4269759[iVar5 /*104*/].f_99[Global_19681] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_357(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19681)
									{
										case 0:
											iVar6 = Global_42812;
											break;
										
										case 1:
											iVar6 = Global_42813;
											break;
										
										case 2:
											iVar6 = Global_42814;
											break;
										
										default:
											break;
									}
									func_357(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_357(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
								unk_0xAD291B8F75D737AD(1);
								unk_0xAD291B8F75D737AD(iVar0);
								unk_0xAD291B8F75D737AD(Global_7558[iVar1 /*15*/].f_10);
								unk_0xAD291B8F75D737AD(0);
								func_358(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(Global_7557);
								unk_0xE1FDD153F5858534();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xCE990E643CD9D0E5(Global_7552, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
								unk_0xAD291B8F75D737AD(1);
								unk_0xAD291B8F75D737AD(iVar0);
								unk_0xAD291B8F75D737AD(Global_7558[iVar1 /*15*/].f_10);
								unk_0xAD291B8F75D737AD(0);
								func_358(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(iVar7);
								unk_0xE1FDD153F5858534();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xCE990E643CD9D0E5(Global_7552, 3))
								{
									iVar8 = 42;
									Global_19868 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19868 = 0;
								}
								unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
								unk_0xAD291B8F75D737AD(1);
								unk_0xAD291B8F75D737AD(iVar0);
								unk_0xAD291B8F75D737AD(Global_7558[iVar1 /*15*/].f_10);
								unk_0xAD291B8F75D737AD(0);
								func_358(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(iVar8);
								unk_0xE1FDD153F5858534();
							}
							else if (iVar1 == 8)
							{
								unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
								unk_0xAD291B8F75D737AD(1);
								unk_0xAD291B8F75D737AD(iVar0);
								unk_0xAD291B8F75D737AD(Global_7558[iVar1 /*15*/].f_10);
								unk_0xAD291B8F75D737AD(0);
								func_358(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(42);
								unk_0xE1FDD153F5858534();
							}
							else if ((iVar1 == 23 && unk_0xF005CCA4263DF67F(&(Global_7558[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xCE990E643CD9D0E5(Global_7552, 6))
							{
								unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
								unk_0xAD291B8F75D737AD(1);
								unk_0xAD291B8F75D737AD(iVar0);
								unk_0xAD291B8F75D737AD(Global_7558[iVar1 /*15*/].f_10);
								unk_0xAD291B8F75D737AD(0);
								func_358(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(42);
								unk_0xE1FDD153F5858534();
							}
							else if (Global_7558[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627252.f_1;
								func_357(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_357(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8120[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_357(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x830F007E19C63E14(uParam0, sParam1);
	unk_0xAD291B8F75D737AD(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xAD291B8F75D737AD(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xAD291B8F75D737AD(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xAD291B8F75D737AD(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xAD291B8F75D737AD(SYSTEM::ROUND(fParam6));
	}
	if (!unk_0x7BCC91F3C1CF24E8(uParam7))
	{
		func_358(sParam7);
	}
	if (!unk_0x7BCC91F3C1CF24E8(iParam8))
	{
		func_358(iParam8);
	}
	if (!unk_0x7BCC91F3C1CF24E8(iParam9))
	{
		func_358(iParam9);
	}
	if (!unk_0x7BCC91F3C1CF24E8(iParam10))
	{
		func_358(iParam10);
	}
	if (!unk_0x7BCC91F3C1CF24E8(iParam11))
	{
		func_358(iParam11);
	}
	unk_0xE1FDD153F5858534();
}

void func_358(var uParam0)
{
	unk_0xB23270F3D5E62FDE(uParam0);
	unk_0x2042E9CA4306F725();
}

void func_359(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x830F007E19C63E14(uParam0, sParam1);
	unk_0xAD291B8F75D737AD(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xAD291B8F75D737AD(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xAD291B8F75D737AD(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xAD291B8F75D737AD(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xAD291B8F75D737AD(SYSTEM::ROUND(fParam6));
	}
	unk_0xE1FDD153F5858534();
}

bool func_360()
{
	return Global_1312896;
}

void func_361(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_111858.f_14047[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_362(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x1D3A3697182AD8B3();
	uVar1 = unk_0x81F2E25F8C019191();
	uVar2 = unk_0x1F596C965B00E290();
	uVar3 = unk_0x371CFD525753F70C();
	uVar4 = unk_0xF225116F449A5CC6() + 1;
	uVar5 = unk_0x2E48CFA70ABFC06A();
	Global_111858.f_14137[iParam0 /*104*/].f_18 = uVar0;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_363()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76833)
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
	Global_22072 = 34;
	Global_111858.f_14137[Global_22072 /*104*/].f_18 = -1;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_1 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_2 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_3 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_364(Global_111858.f_14137[iVar2 /*104*/].f_18, Global_111858.f_14137[Global_22072 /*104*/].f_18))
		{
			Global_22072 = iVar2;
		}
		iVar2++;
	}
	Global_111858.f_14137[Global_22072 /*104*/].f_24 = 1;
}

int func_364(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
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

int func_365()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76833)
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
		if (Global_111858.f_14137[iVar2 /*104*/].f_24 == 0)
		{
			Global_22072 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_22072 = 34;
	Global_111858.f_14137[Global_22072 /*104*/].f_18 = -1;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_1 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_2 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_3 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_111858.f_14137[iVar2 /*104*/].f_24 == 0 || Global_111858.f_14137[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_364(Global_111858.f_14137[iVar2 /*104*/].f_18, Global_111858.f_14137[Global_22072 /*104*/].f_18))
			{
				Global_22072 = iVar2;
			}
		}
		if (Global_111858.f_14137[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_22072 == 34)
	{
		return 0;
	}
	Global_111858.f_14137[Global_22072 /*104*/].f_99[0] = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_99[1] = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_99[2] = 0;
	return 1;
}

int func_366(int iParam0, int iParam1, int iParam2, var uParam3)
{
	struct<4> Var0;
	struct<4> Var4[2];
	int iVar13;
	
	if (iParam1 >= 5)
	{
	}
	else
	{
		if (iParam2 >= 2 || iParam2 < -1)
		{
			iParam2 = -1;
		}
		StringCopy(&Var0, "FTX_", 16);
		StringConCat(&Var0, func_145(iParam0), 16);
		StringConCat(&Var0, "_", 16);
		switch (iParam1)
		{
			case 0:
				StringConCat(&Var0, "LOST", 16);
				break;
			
			case 1:
				StringConCat(&Var0, "LATE", 16);
				break;
			
			case 2:
				StringConCat(&Var0, "HOSP", 16);
				break;
			
			case 3:
				StringConCat(&Var0, "PDIED", 16);
				break;
			
			case 4:
				StringConCat(&Var0, "PBUST", 16);
				break;
			
			default:
				StringConCat(&Var0, "X", 16);
				StringIntConCat(&Var0, iParam1, 16);
				*uParam3 = { Var0 };
				return 0;
				break;
		}
		Var4[0 /*4*/] = { Var0 };
		StringConCat(&(Var4[0 /*4*/]), "a", 16);
		Var4[1 /*4*/] = { Var0 };
		StringConCat(&(Var4[1 /*4*/]), "b", 16);
		if (iParam2 == -1)
		{
			iVar13 = func_46(iParam0);
			if (func_367(&(Var4[0 /*4*/]), iVar13))
			{
				iParam2 = 1;
			}
			else if (func_367(&(Var4[1 /*4*/]), iVar13))
			{
				iParam2 = 0;
			}
			else
			{
				iParam2 = unk_0x344C570D6F8700DF(0, 2);
			}
		}
		*uParam3 = { Var4[iParam2 /*4*/] };
		return 1;
	}
	return 0;
}

int func_367(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam1 > 3)
	{
		return 0;
	}
	while (iVar0 < 35)
	{
		if (!unk_0x211E6DB3335430B4(&(Global_111858.f_14137[iVar0 /*104*/])))
		{
			if (unk_0xF005CCA4263DF67F(&(Global_111858.f_14137[iVar0 /*104*/]), uParam0))
			{
				if (Global_111858.f_14137[iVar0 /*104*/].f_99[iParam1])
				{
					iVar1 = 1;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_368(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<14> Var0;
	
	if (func_3(0))
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (iParam5 < 3)
	{
		if (unk_0xCE990E643CD9D0E5(iParam4, iParam5))
		{
			return 0;
		}
	}
	if (iParam4 < 1 || iParam4 > 7)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 83 || iParam2 == 83)
	{
		return 0;
	}
	if (Global_111858.f_7684.f_764 < 8)
	{
		Var0 = iParam0;
		Var0.f_3 = func_370(iParam3);
		Var0.f_4 = (unk_0x578C4EF320340AF7() + iParam6);
		Var0.f_5 = iParam7;
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam4;
		Var0.f_6 = iParam5;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_13 = iParam12;
		unk_0xD2459066EA58CE43(&(Var0.f_1), 0);
		Global_111858.f_7684.f_651[Global_111858.f_7684.f_764 /*14*/] = { Var0 };
		Global_111858.f_7684.f_764++;
		func_369(0);
		func_369(1);
		func_369(2);
		return 1;
	}
	return 0;
}

void func_369(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_67(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111858.f_7684.f_136)
	{
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_7684[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_111858.f_7684[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_111858.f_7684[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_111858.f_7684.f_764)
	{
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_7684.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_111858.f_7684.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_111858.f_7684.f_919[iParam0] = iVar1;
}

int func_370(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_371(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	struct<4> Var0[2];
	int iVar9;
	
	if (iParam1 >= 5)
	{
	}
	else
	{
		if (iParam2 >= 2 || iParam2 < -1)
		{
			iParam2 = -1;
		}
		switch (iParam0)
		{
			case 0:
				*uParam3 = 61;
				break;
			
			case 1:
				*uParam3 = 62;
				break;
			
			case 2:
				*uParam3 = 63;
				break;
			
			case 3:
				*uParam3 = 64;
				break;
			
			case 4:
				*uParam3 = 65;
				break;
			
			case 5:
				*uParam3 = 66;
				break;
		}
		if (iParam2 == -1)
		{
			if (func_366(iParam0, iParam1, 0, &(Var0[0 /*4*/])) && func_366(iParam0, iParam1, 1, &(Var0[1 /*4*/])))
			{
				iVar9 = func_46(iParam0);
				if (func_367(&(Var0[0 /*4*/]), iVar9))
				{
					iParam2 = 1;
				}
				else if (func_367(&(Var0[1 /*4*/]), iVar9))
				{
					iParam2 = 0;
				}
				else
				{
					iParam2 = unk_0x344C570D6F8700DF(0, 2);
				}
			}
			else
			{
				iParam2 = unk_0x344C570D6F8700DF(0, 2);
			}
		}
		*uParam4 = func_372(iParam1, iParam2);
		return 1;
	}
	return 0;
}

int func_372(int iParam0, int iParam1)
{
	if (iParam1 == 0 || iParam1 == 1)
	{
		switch (iParam0)
		{
			case 0:
				if (iParam1 == 0)
				{
					return 67;
				}
				else
				{
					return 68;
				}
				break;
			
			case 1:
				if (iParam1 == 0)
				{
					return 69;
				}
				else
				{
					return 70;
				}
				break;
			
			case 2:
				if (iParam1 == 0)
				{
					return 71;
				}
				else
				{
					return 72;
				}
				break;
			
			case 3:
				if (iParam1 == 0)
				{
					return 73;
				}
				else
				{
					return 74;
				}
				break;
			
			case 4:
				if (iParam1 == 0)
				{
					return 75;
				}
				else
				{
					return 76;
				}
				break;
			}
	}
	return 75;
}

int func_373(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_374(int iParam0)
{
	if (iParam0 == 0)
	{
		return 2091854273;
	}
	else if (iParam0 == 1)
	{
		return 328868333;
	}
	else if (iParam0 == 2)
	{
		return -1813399915;
	}
	else if (iParam0 == 3)
	{
		return 465306446;
	}
	else if (iParam0 == 4)
	{
		return -816460512;
	}
	else if (iParam0 == 5)
	{
		return -702667427;
	}
	return -1;
}

int func_375(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_67(iParam0))
	{
		iVar0 = func_376(iParam0);
		return Global_96433[iVar0];
	}
	else
	{
		iVar1 = func_68(iParam0);
		if (iVar1 != 7)
		{
			iVar2 = (iVar1 - 3);
			if (iVar2 < 3)
			{
				return Global_94789[iVar2];
			}
		}
	}
	return 0;
}

int func_376(int iParam0)
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

int func_377(var uParam0, float fParam1)
{
	if (func_380(uParam0))
	{
		if (func_378(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_378(var uParam0)
{
	if (func_380(uParam0))
	{
		if (func_379(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_10(unk_0xCE990E643CD9D0E5(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_379(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, 2);
}

bool func_380(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, 1);
}

void func_381()
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	
	if (Local_49.f_670 > 0)
	{
		if (!unk_0xDABD547F0DF2906C())
		{
			iVar0 = Local_49.f_654[0 /*3*/];
			iVar1 = func_68(Local_49.f_654[0 /*3*/]);
			if (iVar1 < 6)
			{
				Var2 = { func_353(iVar0) };
				switch (Local_49.f_654[0 /*3*/].f_1)
				{
					case 0:
						if (iVar1 != 5)
						{
							func_383("FR_X_INJ_1m", &Var2, -1);
						}
						else
						{
							func_383("FR_X_INJ_1f", &Var2, -1);
						}
						if (Local_49.f_654[0 /*3*/].f_2 != 0)
						{
							func_382(Local_49.f_654[0 /*3*/], 2, 1092616192, Local_49.f_654[0 /*3*/].f_2);
						}
						break;
					
					case 3:
						if (iVar1 != 5)
						{
							func_383("FR_X_FLEE_1m", &Var2, -1);
						}
						else
						{
							func_383("FR_X_FLEE_1f", &Var2, -1);
						}
						break;
					
					case 4:
						if (iVar1 != 5)
						{
							func_383("FR_X_ATAC_1m", &Var2, -1);
						}
						else
						{
							func_383("FR_X_ATAC_1f", &Var2, -1);
						}
						break;
					
					case 1:
						if (iVar1 != 5)
						{
							func_383("FR_X_LOST_1m", &Var2, -1);
						}
						else
						{
							func_383("FR_X_LOST_1f", &Var2, -1);
						}
						func_382(Local_49.f_654[0 /*3*/], 0, 1092616192, Local_49.f_654[0 /*3*/].f_2);
						break;
					
					case 2:
						func_383("FR_X_LATE", &Var2, -1);
						func_382(Local_49.f_654[0 /*3*/], 1, 1092616192, Local_49.f_654[0 /*3*/].f_2);
						break;
				}
			}
			Local_49.f_670 = (Local_49.f_670 - 1);
			iVar6 = 0;
			while (iVar6 < Local_49.f_670)
			{
				Local_49.f_654[iVar6 /*3*/] = { Local_49.f_654[iVar6 + 1 /*3*/] };
				iVar6++;
			}
		}
	}
}

int func_382(int iParam0, int iParam1, float fParam2, var uParam3)
{
	int iVar0;
	
	if (iParam0 >= 145)
	{
	}
	else if (iParam1 >= 5)
	{
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Local_49.f_671[iVar0 /*6*/].f_1 == 6)
			{
				Local_49.f_671[iVar0 /*6*/] = iParam0;
				Local_49.f_671[iVar0 /*6*/].f_1 = iParam1;
				Local_49.f_671[iVar0 /*6*/].f_2 = uParam3;
				func_9(&(Local_49.f_671[iVar0 /*6*/].f_3), -fParam2);
				Local_49.f_702++;
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

void func_383(char* sParam0, int iParam1, int iParam2)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x6A826E35A3096ED0(uParam1);
	unk_0x1A169149B3D18FCB(0, 0, 1, iParam2);
}

void func_384()
{
	if (func_388() != Local_49.f_56.f_7)
	{
		func_387(Local_49.f_56.f_7);
	}
	if (func_386() != Local_49.f_109.f_7)
	{
		func_385(Local_49.f_109.f_7);
	}
}

void func_385(int iParam0)
{
	Global_94788 = iParam0;
}

int func_386()
{
	return Global_94788;
}

void func_387(int iParam0)
{
	Global_94787 = iParam0;
}

int func_388()
{
	return Global_94787;
}

void func_389(var uParam0, var uParam1)
{
	char* sVar0;
	char[] cVar4[8];
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar8 = func_127();
	switch (*uParam0)
	{
		case 20:
			if (uParam0->f_3 != 20)
			{
				func_457(uParam0, uParam0->f_3, 145, 69);
			}
			break;
		
		case 0:
			if (uParam0->f_2 == 0)
			{
				if (!func_456(uParam1))
				{
					func_455(uParam1, 0);
				}
				else
				{
					uParam0->f_32 = func_451(0);
					if (func_143(iVar8, uParam0->f_32, func_450(), &sVar0, &cVar4))
					{
						func_449(uParam1, &sVar0, &cVar4);
					}
					uParam0->f_2++;
				}
			}
			else if (uParam0->f_2 == 1)
			{
				if (func_456(uParam1))
				{
					func_457(uParam0, 1, 145, 69);
				}
			}
			break;
		
		case 1:
			break;
		
		case 2:
			if (uParam0->f_2 == 0)
			{
				if (func_377(&(uParam0->f_4), 20f))
				{
					uParam0->f_2++;
				}
				else if (func_456(uParam1))
				{
					uParam0->f_32 = func_451(0);
					if (func_143(iVar8, uParam0->f_32, func_448(), &sVar0, &cVar4))
					{
						func_449(uParam1, &sVar0, &cVar4);
					}
					uParam0->f_2++;
				}
			}
			else if (uParam0->f_2 == 1)
			{
				if (func_456(uParam1))
				{
					func_447(uParam0);
				}
			}
			break;
		
		case 3:
			if (uParam0->f_32 == 145)
			{
				func_447(uParam0);
			}
			else if (uParam0->f_2 == 0)
			{
				if (func_456(uParam1))
				{
					if (func_143(iVar8, uParam0->f_32, uParam0->f_33, &sVar0, &cVar4))
					{
						func_449(uParam1, &sVar0, &cVar4);
					}
					uParam0->f_2++;
				}
			}
			else if (uParam0->f_2 == 1)
			{
				if (func_456(uParam1))
				{
					func_447(uParam0);
				}
			}
			break;
		
		case 4:
			if (unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) || !func_446())
			{
				func_447(uParam0);
			}
			else
			{
				func_445(uParam1, 1);
			}
			break;
		
		case 5:
			if (uParam0->f_2 == 0)
			{
				if (!func_456(uParam1))
				{
					func_455(uParam1, 1);
				}
				func_447(uParam0);
			}
			break;
		
		case 6:
			if (uParam0->f_2 == 0)
			{
				func_455(uParam1, 0);
				if (func_377(&(uParam0->f_7), -100f))
				{
					func_9(&(uParam0->f_7), -100f);
				}
				uParam0->f_2++;
			}
			else if (uParam0->f_2 == 1)
			{
				if (func_377(&(uParam0->f_4), 60f))
				{
					uParam0->f_2++;
				}
				else if (func_377(&(uParam0->f_4), 3f))
				{
					if (func_444(1))
					{
						if (func_456(uParam1))
						{
							if ((iVar8 == 2 && Local_49.f_56.f_1 == 19) && func_432(2, 19, 1, 2, func_441(), &sVar0, &cVar4, 1))
							{
								func_449(uParam1, &sVar0, &cVar4);
								uParam0->f_2++;
							}
							else if (func_432(iVar8, Local_49.f_56.f_1, Local_49.f_109.f_1, 2, func_441(), &sVar0, &cVar4, 1))
							{
								func_449(uParam1, &sVar0, &cVar4);
								uParam0->f_2++;
							}
							else
							{
								uParam0->f_32 = func_451(0);
								if (uParam0->f_32 == 145 || !func_143(iVar8, uParam0->f_32, 39, &sVar0, &cVar4))
								{
									uParam0->f_2++;
								}
								else
								{
									func_449(uParam1, &sVar0, &cVar4);
									uParam0->f_2++;
								}
							}
						}
					}
				}
			}
			else if (uParam0->f_2 == 2)
			{
				if (func_456(uParam1))
				{
					func_447(uParam0);
				}
			}
			break;
		
		case 7:
			if (!unk_0xCE990E643CD9D0E5(Global_94806, 3))
			{
				if (unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) || !func_446())
				{
					func_447(uParam0);
				}
			}
			else
			{
				func_445(uParam1, 1);
				if (func_377(&(uParam0->f_4), 0f))
				{
					if (!func_431(uParam1))
					{
						iVar9 = 0;
						if (func_430())
						{
							if (func_429(&(Local_49.f_56)))
							{
								iVar9 = Local_49.f_56.f_7;
							}
						}
						else if (func_429(&(Local_49.f_109)))
						{
							iVar9 = Local_49.f_109.f_7;
						}
						if (!unk_0x5AEB5DDFFAD43CA5(iVar9) && !unk_0xF282AA6FECA1EF23(iVar9))
						{
							func_427(iVar9, "ROBBERY_FRIEND_WITNESS", 3);
							if (unk_0xF282AA6FECA1EF23(iVar9))
							{
								func_9(&(uParam0->f_4), -5f);
							}
						}
					}
				}
			}
			break;
		
		case 8:
			if (uParam0->f_32 == 145)
			{
				func_447(uParam0);
			}
			else if (uParam0->f_2 == 0)
			{
				if (!func_456(uParam1))
				{
					func_455(uParam1, 0);
				}
				else
				{
					if (func_143(iVar8, uParam0->f_32, func_422(uParam0->f_32, &bVar10), &sVar0, &cVar4))
					{
						func_449(uParam1, &sVar0, &cVar4);
					}
					if (bVar10)
					{
						func_419(iVar8, uParam0->f_32, 3);
					}
					func_8(&(uParam0->f_4));
					uParam0->f_2++;
				}
			}
			else if (uParam0->f_2 == 1)
			{
				if (func_456(uParam1))
				{
					uParam0->f_2++;
				}
			}
			else if (uParam0->f_2 == 2)
			{
				if (func_377(&(uParam0->f_4), 20f) || unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					uParam0->f_2++;
				}
			}
			else if (uParam0->f_2 == 3)
			{
				if (func_377(&(uParam0->f_4), 30f) || !unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					uParam0->f_2++;
				}
				else if (unk_0xE0B3BC41DDA88DF0(func_375(uParam0->f_32), unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), 0))
				{
					if (func_456(uParam1))
					{
						if (func_143(iVar8, uParam0->f_32, func_418(uParam0->f_32), &sVar0, &cVar4))
						{
							func_449(uParam1, &sVar0, &cVar4);
						}
						uParam0->f_2++;
					}
				}
			}
			else if (uParam0->f_2 == 4)
			{
				if (func_456(uParam1))
				{
					func_447(uParam0);
				}
			}
			break;
		
		case 9:
			func_447(uParam0);
			break;
		
		case 10:
			if (uParam0->f_2 == 0)
			{
				if (func_417(Global_94782) != 4)
				{
					func_455(uParam1, 0);
					uParam0->f_2++;
				}
				else
				{
					uParam0->f_2 = 2;
				}
			}
			else if (uParam0->f_2 == 1)
			{
				if (func_377(&(uParam0->f_4), 30f))
				{
					uParam0->f_2++;
				}
				else if (func_377(&(uParam0->f_4), 0.5f))
				{
					if (func_456(uParam1))
					{
						if (((Global_94782 < 22 && Global_94691[Global_94782 /*2*/].f_1 == 1) && Local_49.f_3.f_1 == 0) && Local_49.f_56.f_1 == 17)
						{
							if (!unk_0x5AEB5DDFFAD43CA5(Local_49.f_56.f_7))
							{
								if (Global_94783 == 0)
								{
									func_427(Local_49.f_56.f_7, "FAC_LEAVE_TENNIS_WON", 3);
								}
								else if (Global_94783 == 3)
								{
									func_427(Local_49.f_56.f_7, "FAC_LEAVE_TENNIS_LOST", 3);
								}
								else if (Global_94783 == 2)
								{
									func_427(Local_49.f_56.f_7, "FAC_LEAVE_TENNIS_QUIT", 3);
								}
							}
							uParam0->f_2++;
						}
						else if (Global_94782 == 12)
						{
							uParam0->f_32 = func_451(1);
							if (uParam0->f_32 != 145)
							{
								if (func_416(iVar8, uParam0->f_32, Global_94782, Global_94783, func_286(unk_0x9B0761B4C3EB8BC7()), &sVar0, &cVar4))
								{
									func_449(uParam1, &sVar0, &cVar4);
								}
								uParam0->f_2++;
							}
						}
						else
						{
							uParam0->f_32 = func_451(0);
							if (func_416(iVar8, uParam0->f_32, Global_94782, Global_94783, func_286(unk_0x9B0761B4C3EB8BC7()), &sVar0, &cVar4))
							{
								func_449(uParam1, &sVar0, &cVar4);
							}
							uParam0->f_2++;
						}
					}
				}
			}
			else if (uParam0->f_2 == 2)
			{
				if (((Global_94782 < 22 && Global_94691[Global_94782 /*2*/].f_1 == 1) && Local_49.f_3.f_1 == 0) && Local_49.f_56.f_1 == 17)
				{
					if (unk_0x5AEB5DDFFAD43CA5(Local_49.f_56.f_7) || !unk_0xF282AA6FECA1EF23(Local_49.f_56.f_7))
					{
						func_8(&(uParam0->f_4));
						uParam0->f_2++;
					}
				}
				else if (func_456(uParam1))
				{
					func_8(&(uParam0->f_4));
					uParam0->f_2++;
				}
			}
			else if (uParam0->f_2 == 3)
			{
				if (func_377(&(uParam0->f_4), 1.5f))
				{
					if (func_414(1))
					{
						if (func_456(uParam1))
						{
							uParam0->f_32 = func_451(0);
							if (func_143(iVar8, uParam0->f_32, func_413(), &sVar0, &cVar4))
							{
								func_449(uParam1, &sVar0, &cVar4);
							}
							uParam0->f_2++;
						}
					}
				}
			}
			else if (uParam0->f_2 == 4)
			{
				if (func_456(uParam1))
				{
					func_447(uParam0);
				}
			}
			break;
		
		case 11:
			if (uParam0->f_32 == 145)
			{
				func_447(uParam0);
			}
			else if (uParam0->f_2 == 0)
			{
				func_445(uParam1, 0);
				iVar11 = func_375(uParam0->f_32);
				if (unk_0x5AEB5DDFFAD43CA5(iVar11) || !unk_0xCED6B5226244381C(iVar11))
				{
					if (func_456(uParam1))
					{
						if (func_143(iVar8, uParam0->f_32, uParam0->f_33, &sVar0, &cVar4))
						{
							func_449(uParam1, &sVar0, &cVar4);
						}
						uParam0->f_2++;
					}
				}
			}
			else if (uParam0->f_2 == 1)
			{
				if (func_456(uParam1))
				{
					func_447(uParam0);
				}
			}
			break;
		
		case 12:
			if (unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) || !unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0))
			{
				func_447(uParam0);
			}
			else
			{
				func_445(uParam1, 1);
				if (uParam0->f_2 == 0)
				{
					if (!func_431(uParam1))
					{
						iVar12 = 0;
						if (func_430())
						{
							if (func_429(&(Local_49.f_56)))
							{
								iVar12 = Local_49.f_56.f_7;
							}
						}
						else if (func_429(&(Local_49.f_109)))
						{
							iVar12 = Local_49.f_109.f_7;
						}
						if (!unk_0x5AEB5DDFFAD43CA5(iVar12) && !unk_0xF282AA6FECA1EF23(iVar12))
						{
							func_427(iVar12, "GET_WANTED_LEVEL", 3);
							if (unk_0xF282AA6FECA1EF23(iVar12))
							{
								uParam0->f_2++;
							}
						}
					}
				}
			}
			break;
		
		case 13:
			if (func_456(uParam1))
			{
				func_8(&(uParam0->f_10));
				func_412(uParam0);
				func_447(uParam0);
			}
			else if (((uParam0->f_28[0] != 145 && !func_411(uParam0->f_28[0])) || (uParam0->f_28[1] != 145 && !func_411(uParam0->f_28[1]))) || (uParam0->f_28[2] != 145 && !func_411(uParam0->f_28[2])))
			{
				func_455(uParam1, 0);
				func_8(&(uParam0->f_10));
				func_447(uParam0);
			}
			else
			{
				func_408(uParam0, uParam1);
			}
			break;
		
		case 14:
			if (uParam0->f_32 == 145)
			{
				func_447(uParam0);
			}
			else if (uParam0->f_2 == 0)
			{
				func_445(uParam1, 1);
				if (func_456(uParam1))
				{
					if (func_143(iVar8, uParam0->f_32, uParam0->f_33, &sVar0, &cVar4))
					{
						func_449(uParam1, &sVar0, &cVar4);
					}
					uParam0->f_2++;
				}
			}
			else if (uParam0->f_2 == 1)
			{
				if (func_456(uParam1))
				{
					func_447(uParam0);
				}
			}
			break;
		
		case 15:
			if (func_456(uParam1))
			{
				func_447(uParam0);
			}
			break;
		
		case 16:
			if (uParam0->f_2 == 0)
			{
				if (uParam0->f_13 == 0)
				{
					if (func_444(0))
					{
						if (func_377(&(uParam0->f_4), 5f))
						{
							if (func_456(uParam1))
							{
								uParam0->f_32 = func_451(0);
								if (func_432(iVar8, uParam0->f_32, 145, 1, func_441(), &sVar0, &cVar4, 1))
								{
									func_449(uParam1, &sVar0, &cVar4);
									uParam0->f_13 = 1;
									uParam0->f_2++;
								}
							}
						}
					}
				}
			}
			else if (uParam0->f_2 == 1)
			{
				if (func_456(uParam1))
				{
					uParam0->f_2 = 0;
				}
			}
			break;
		
		case 17:
			if (func_154(unk_0x9B0761B4C3EB8BC7()) && !func_286(unk_0x9B0761B4C3EB8BC7()))
			{
				if (func_456(uParam1))
				{
					if (func_407(uParam0, 120000))
					{
						if (!func_377(&(uParam0->f_4), 15f))
						{
							if (func_377(&(uParam0->f_4), 1.5f) && func_444(0))
							{
								if (func_457(uParam0, 13, 145, 69))
								{
									func_406(uParam1, &(uParam0->f_15), &(uParam0->f_19), &(uParam0->f_23));
									func_405(uParam0, uParam0->f_28[0], uParam0->f_28[1], uParam0->f_28[2]);
									func_9(&(uParam0->f_7), func_404(uParam0));
									func_412(uParam0);
								}
							}
						}
						else
						{
							func_412(uParam0);
						}
					}
					else
					{
						if (uParam0->f_14 == 0)
						{
							if (func_377(&(uParam0->f_4), 5f) && func_377(&(uParam0->f_7), 0f))
							{
								if (func_444(0))
								{
									if (func_432(iVar8, Local_49.f_56.f_1, Local_49.f_109.f_1, 0, func_441(), &sVar0, &cVar4, 1) && func_457(uParam0, 13, 145, 69))
									{
										func_449(uParam1, &sVar0, &cVar4);
										func_405(uParam0, iVar8, Local_49.f_56.f_1, Local_49.f_109.f_1);
										func_9(&(uParam0->f_7), func_404(uParam0));
										uParam0->f_14++;
									}
								}
							}
						}
						else if (uParam0->f_14 < 3)
						{
							if (func_377(&(uParam0->f_4), 5f) && func_377(&(uParam0->f_7), 0f))
							{
								if (func_444(0))
								{
									if (func_432(iVar8, Local_49.f_56.f_1, Local_49.f_109.f_1, 1, func_441(), &sVar0, &cVar4, 1) && func_457(uParam0, 13, 145, 69))
									{
										func_449(uParam1, &sVar0, &cVar4);
										func_405(uParam0, iVar8, Local_49.f_56.f_1, Local_49.f_109.f_1);
										func_9(&(uParam0->f_7), func_404(uParam0));
										uParam0->f_14++;
									}
								}
							}
						}
						if (func_377(&(uParam0->f_4), 3f))
						{
							if (func_414(1))
							{
								if (func_403(iVar8) != Local_49.f_624)
								{
									iVar13 = func_451(1);
									if (iVar13 != 145)
									{
										func_457(uParam0, 14, iVar13, 55);
									}
								}
								else if (func_402(iVar8) != Local_49.f_622)
								{
									iVar13 = func_451(1);
									if (iVar13 != 145)
									{
										func_457(uParam0, 14, iVar13, 53);
									}
								}
								else if (func_401(iVar8) != Local_49.f_623)
								{
									iVar13 = func_451(1);
									if (iVar13 != 145)
									{
										func_457(uParam0, 14, iVar13, 54);
									}
								}
								else if (func_377(&(uParam0->f_4), 10f))
								{
									if (uParam0->f_14 > 0)
									{
										if (!func_380(&(uParam0->f_10)) || func_377(&(uParam0->f_10), 20f))
										{
											iVar14 = Local_49.f_642;
											if (func_397(iVar14) || func_395(Local_49.f_3.f_1, Local_49.f_56.f_1, &iVar14))
											{
												iVar13 = func_451(0);
												if (iVar13 != 145 && iVar14 < 22)
												{
													if (func_394(iVar8, iVar13, iVar14, &sVar0, &cVar4) && func_457(uParam0, 15, 145, 69))
													{
														func_392(Local_49.f_3.f_1, Local_49.f_56.f_1, iVar14);
														func_449(uParam1, &sVar0, &cVar4);
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 18:
			break;
		
		default:
			break;
	}
	if (*uParam0 != 12)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			if (unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0))
			{
				func_457(uParam0, 12, 145, 69);
			}
		}
	}
	if (*uParam0 != 7)
	{
		if (unk_0xCE990E643CD9D0E5(Global_94806, 3))
		{
			func_457(uParam0, 7, 145, 69);
		}
	}
	if (*uParam0 != 4)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && func_446())
		{
			func_457(uParam0, 4, 145, 69);
		}
	}
	if ((((((*uParam0 != 16 && *uParam0 != 17) && *uParam0 != 8) && *uParam0 != 9) && *uParam0 != 10) && *uParam0 != 4) && *uParam0 != 20)
	{
		Local_49.f_623 = func_401(iVar8);
		Local_49.f_622 = func_402(iVar8);
		Local_49.f_624 = func_403(iVar8);
	}
	func_390(uParam1);
}

void func_390(var uParam0)
{
	switch (*uParam0)
	{
		case 1:
			if (!func_150())
			{
				if (func_129(&(Local_49.f_259), &(uParam0->f_1), &(uParam0->f_5), 3, 0, 0, 0))
				{
					*uParam0 = 3;
				}
			}
			break;
		
		case 2:
			if (!func_150())
			{
				if (func_391(&(Local_49.f_259), &(uParam0->f_1), &(uParam0->f_5), &(uParam0->f_9), 3, 0, 0))
				{
					*uParam0 = 3;
				}
			}
			break;
		
		case 3:
			if (!func_150())
			{
				*uParam0 = 0;
			}
			break;
	}
}

bool func_391(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_142(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21012 = 0;
	Global_21019 = 0;
	Global_21014 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 1;
	StringCopy(&Global_22009, sParam3, 24);
	Global_2621441 = 0;
	return func_130(sParam2, iParam4, 0);
}

void func_392(int iParam0, int iParam1, int iParam2)
{
	func_393(&(Local_49.f_634), Global_94691[iParam2 /*2*/].f_1);
	if (iParam1 == 14)
	{
		if (iParam2 < 22 && Global_94691[iParam2 /*2*/].f_1 == 5)
		{
			if (iParam0 == 0)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_18099.f_410), 5);
			}
			else if (iParam0 == 2)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_18099.f_410), 4);
			}
		}
	}
}

void func_393(var uParam0, int iParam1)
{
	if (iParam1 < 32)
	{
		unk_0xBE20AB8238688965(uParam0, iParam1);
	}
	else if (iParam1 < 64)
	{
		unk_0xBE20AB8238688965(&(uParam0->f_1), (iParam1 - 32));
	}
}

int func_394(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_68(iParam0);
	iVar1 = func_68(iParam1);
	if (iVar0 == 7 || iVar1 == 7)
	{
		return 0;
	}
	*sParam4 = { func_144(iVar0, iVar1, 7, 1) };
	*sParam3 = { *sParam4 };
	StringConCat(sParam3, "AU", 16);
	StringConCat(sParam4, "_Sg", 16);
	switch (Global_94691[iParam2 /*2*/].f_1)
	{
		case 4:
			StringConCat(sParam4, "Cin", 16);
			break;
		
		case 0:
			StringConCat(sParam4, "Glf", 16);
			break;
		
		case 2:
			StringConCat(sParam4, "Str", 16);
			break;
		
		case 1:
			StringConCat(sParam4, "Tns", 16);
			break;
		
		case 3:
			StringConCat(sParam4, "Drt", 16);
			break;
		
		case 5:
			StringConCat(sParam4, "Bar", 16);
			break;
		
		default:
			StringConCat(sParam4, "BAD", 16);
			return 0;
			break;
	}
	return 1;
}

int func_395(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	
	if (iParam1 == 14)
	{
		if ((iParam0 == 0 && !unk_0xCE990E643CD9D0E5(Global_111858.f_18099.f_410, 5)) || (iParam0 == 2 && !unk_0xCE990E643CD9D0E5(Global_111858.f_18099.f_410, 4)))
		{
			if (!func_396(&(Local_49.f_634), 5))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
				{
					iVar0 = 23;
					fVar1 = (100000f * 100000f);
					iVar2 = 0;
					while (iVar2 < 22)
					{
						if (Global_94691[iVar2 /*2*/].f_1 == 5)
						{
							fVar3 = SYSTEM::VDIST2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), func_35(Global_94691[iVar2 /*2*/], 0));
							if (fVar1 > fVar3)
							{
								fVar1 = fVar3;
								iVar0 = iVar2;
							}
						}
						iVar2++;
					}
					if (iVar0 != 23 && fVar1 < (400f * 400f))
					{
						*iParam2 = iVar0;
						return 1;
					}
				}
			}
		}
	}
	*iParam2 = 23;
	return 0;
}

int func_396(var uParam0, int iParam1)
{
	if (iParam1 < 32)
	{
		return unk_0xCE990E643CD9D0E5(*uParam0, iParam1);
	}
	if (iParam1 < 64)
	{
		return unk_0xCE990E643CD9D0E5(uParam0->f_1, (iParam1 - 32));
	}
	return 0;
}

int func_397(int iParam0)
{
	int iVar0;
	
	if (Local_49.f_642 < 22 && Local_49.f_642 != 16)
	{
		iVar0 = Global_94691[iParam0 /*2*/].f_1;
		if (func_396(&(Local_49.f_631), iVar0) && !func_396(&(Local_49.f_634), iVar0))
		{
			if (func_399(unk_0x9B0761B4C3EB8BC7(), func_400(iParam0), 175f) && func_398(unk_0x9B0761B4C3EB8BC7(), func_400(iParam0), 75f))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_398(int iParam0, struct<3> Param1, float fParam4)
{
	struct<3> Var0;
	
	Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, 1) };
	Var0.x = (Var0.x - Param1.x);
	Var0.f_1 = (Var0.f_1 - Param1.f_1);
	Var0.f_2 = (Var0.f_2 - Param1.f_2);
	return (((Var0.x * Var0.x) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) > (fParam4 * fParam4);
}

bool func_399(int iParam0, struct<3> Param1, float fParam4)
{
	struct<3> Var0;
	
	Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, 1) };
	Var0.x = (Var0.x - Param1.x);
	Var0.f_1 = (Var0.f_1 - Param1.f_1);
	Var0.f_2 = (Var0.f_2 - Param1.f_2);
	return (((Var0.x * Var0.x) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= (fParam4 * fParam4);
}

Vector3 func_400(int iParam0)
{
	return func_35(Global_94691[iParam0 /*2*/], 0);
}

int func_401(int iParam0)
{
	if (func_67(iParam0))
	{
		return Global_111858.f_2359.f_539.f_2336[iParam0];
	}
	return -15;
}

int func_402(int iParam0)
{
	if (func_67(iParam0))
	{
		return Global_111858.f_2359.f_539.f_2340[iParam0];
	}
	return -1;
}

int func_403(int iParam0)
{
	if (func_67(iParam0))
	{
		return Global_111858.f_2359.f_539.f_2344[iParam0];
	}
	return -1;
}

float func_404(var uParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = (2f + (SYSTEM::TO_FLOAT(uParam0->f_14) * 1.5f));
	fVar1 = (3f + (SYSTEM::TO_FLOAT(uParam0->f_14) * 1.5f));
	return unk_0x658086F2B3C5E4E4((fVar1 * -60f), (fVar0 * -60f));
}

void func_405(var uParam0, int iParam1, var uParam2, var uParam3)
{
	uParam0->f_28[0] = iParam1;
	uParam0->f_28[1] = uParam2;
	uParam0->f_28[2] = uParam3;
}

void func_406(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (*uParam0 == 0)
	{
		if (!func_150())
		{
			*uParam0 = 2;
			uParam0->f_1 = { *uParam1 };
			uParam0->f_5 = { *uParam2 };
			uParam0->f_9 = { *uParam3 };
		}
	}
}

int func_407(var uParam0, int iParam1)
{
	if (iParam1 < 0 || (unk_0x578C4EF320340AF7() - uParam0->f_27) < iParam1)
	{
		if (((((!unk_0x7BCC91F3C1CF24E8(&(uParam0->f_15)) && !unk_0xF005CCA4263DF67F(&(uParam0->f_15), "NULL")) && !unk_0x7BCC91F3C1CF24E8(&(uParam0->f_19))) && !unk_0xF005CCA4263DF67F(&(uParam0->f_19), "NULL")) && !unk_0x7BCC91F3C1CF24E8(&(uParam0->f_23))) && !unk_0xF005CCA4263DF67F(&(uParam0->f_23), "NULL"))
		{
			return 1;
		}
	}
	return 0;
}

void func_408(var uParam0, var uParam1)
{
	if (func_409(uParam1, &(uParam0->f_15), &(uParam0->f_19), &(uParam0->f_23)))
	{
		uParam0->f_27 = unk_0x578C4EF320340AF7();
	}
	else
	{
		StringCopy(&(uParam0->f_15), "", 16);
		StringCopy(&(uParam0->f_19), "", 16);
		StringCopy(&(uParam0->f_23), "", 16);
	}
}

int func_409(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (*uParam0 == 3)
	{
		if (unk_0x6A5CC4A2C9D9ED8D())
		{
			*uParam1 = { uParam0->f_1 };
			*uParam2 = { uParam0->f_5 };
			MemCopy(uParam3, {func_410()}, 4);
			return 1;
		}
	}
	return 0;
}

struct<6> func_410()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21005 == 4)
	{
		iVar6 = unk_0x68CB238A579603D3();
		iVar6 = (iVar6 + Global_22015);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0x3030AE9FCF1BC243(&(Global_19873[iVar7 /*6*/])))
			{
				return Global_19873[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0x3030AE9FCF1BC243(&(Global_19873[iVar8 /*6*/])))
					{
						return Global_19873[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_19873[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_411(int iParam0)
{
	if (iParam0 == func_127())
	{
		return 1;
	}
	else
	{
		if (Local_49.f_56.f_1 == iParam0)
		{
			if (Local_49.f_56 == 2)
			{
				return 1;
			}
		}
		if (Local_49.f_109.f_1 == iParam0)
		{
			if (Local_49.f_109 == 2)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_412(var uParam0)
{
	StringCopy(&(uParam0->f_15), "", 16);
	StringCopy(&(uParam0->f_19), "", 16);
	StringCopy(&(uParam0->f_23), "", 16);
}

int func_413()
{
	if (Local_49.f_640 == 1)
	{
		return 40;
	}
	else if (Local_49.f_641)
	{
		return 41;
	}
	return 69;
}

int func_414(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		return 0;
	}
	else if (iParam0 && unk_0x2F80DB5A41D045E6())
	{
		return 0;
	}
	else if (func_415())
	{
		return 0;
	}
	else
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1) };
		if (Local_49.f_56.f_50)
		{
			if ((Local_49.f_56 != 2 || !unk_0xC2169C00B643278B(Local_49.f_56.f_7, Var0, 25f, 25f, 25f, 0, 1, 0)) || unk_0xF83D0A2EC884A4DD(Local_49.f_56.f_7, 0))
			{
				return 0;
			}
		}
		if (Local_49.f_109.f_50)
		{
			if ((Local_49.f_109 != 2 || !unk_0xC2169C00B643278B(Local_49.f_109.f_7, Var0, 25f, 25f, 25f, 0, 1, 0)) || unk_0xF83D0A2EC884A4DD(Local_49.f_109.f_7, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_415()
{
	return Global_99007.f_352 > 0;
}

int func_416(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5, char* sParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_68(iParam0);
	iVar1 = func_68(iParam1);
	if (iVar0 == 7 || iVar1 == 7)
	{
		return 0;
	}
	*sParam6 = { func_144(iVar0, iVar1, 7, 1) };
	*sParam5 = { *sParam6 };
	StringConCat(sParam5, "AU", 16);
	iVar2 = Global_94691[iParam2 /*2*/].f_1;
	StringConCat(sParam6, "_", 16);
	switch (iVar2)
	{
		case 4:
			StringConCat(sParam6, "Cin", 16);
			break;
		
		case 5:
			StringConCat(sParam6, "Bar", 16);
			break;
		
		case 0:
			StringConCat(sParam6, "Glf", 16);
			break;
		
		case 2:
			StringConCat(sParam6, "Str", 16);
			break;
		
		case 1:
			StringConCat(sParam6, "Tns", 16);
			break;
		
		case 3:
			StringConCat(sParam6, "Drt", 16);
			break;
		
		default:
			StringConCat(sParam6, "BAD", 16);
			return 0;
			break;
	}
	if (bParam4 && (iVar2 != 0 && iVar2 != 1))
	{
		StringConCat(sParam6, "Dr", 16);
	}
	else
	{
		switch (iParam3)
		{
			case 0:
				StringConCat(sParam6, "Wn", 16);
				break;
			
			case 3:
				StringConCat(sParam6, "Ls", 16);
				break;
			
			case 4:
				StringConCat(sParam6, "Ls", 16);
				break;
			
			case 1:
				StringConCat(sParam6, "Ti", 16);
				break;
			
			case 2:
				StringConCat(sParam6, "Qt", 16);
				break;
			
			default:
				StringConCat(sParam6, "XX", 16);
				return 0;
				break;
			}
	}
	return 1;
}

int func_417(int iParam0)
{
	if (iParam0 < 22)
	{
		return Global_94691[iParam0 /*2*/].f_1;
	}
	return 8;
}

int func_418(int iParam0)
{
	int iVar0;
	
	iVar0 = func_123(func_127(), iParam0);
	if (((Local_49.f_56.f_1 == iParam0 && unk_0xAE06B9E39EBDE049(Local_49.f_56.f_8)) && unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), Local_49.f_56.f_8, 0)) && func_116(Local_49.f_56.f_8, Local_49.f_56.f_7))
	{
		return 10;
	}
	else if (((Local_49.f_109.f_1 == iParam0 && unk_0xAE06B9E39EBDE049(Local_49.f_109.f_8)) && unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), Local_49.f_109.f_8, 0)) && func_116(Local_49.f_56.f_8, Local_49.f_56.f_7))
	{
		return 10;
	}
	else if (Local_49.f_56 == 2 && Local_49.f_109 == 2)
	{
		return 9;
	}
	else if (iVar0 < 20)
	{
		return 8;
	}
	else if (iVar0 < 40)
	{
		return 7;
	}
	return 6;
}

void func_419(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 0:
			func_420(iParam0, iParam1, -1);
			break;
		
		case 5:
			func_420(iParam0, iParam1, -1);
			break;
		
		case 3:
			func_420(iParam0, iParam1, -2);
			break;
		
		case 4:
			func_420(iParam0, iParam1, -5);
			break;
		
		case 1:
			func_420(iParam0, iParam1, -5);
			break;
		
		case 2:
			func_420(iParam0, iParam1, -5);
			break;
		
		case 6:
			func_420(iParam0, iParam1, 5);
			break;
		
		case 7:
			func_420(iParam0, iParam1, 3);
			break;
		
		default:
			break;
	}
}

void func_420(int iParam0, int iParam1, int iParam2)
{
	func_421(iParam0, iParam1, (func_123(iParam0, iParam1) + iParam2));
}

void func_421(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_68(iParam0);
	iVar1 = func_68(iParam1);
	iVar2 = func_51(iVar0, iVar1);
	Global_111858.f_18099.f_175[iVar2 /*19*/].f_17 = iParam2;
	if (Global_111858.f_18099.f_175[iVar2 /*19*/].f_17 < 0)
	{
		Global_111858.f_18099.f_175[iVar2 /*19*/].f_17 = 0;
	}
	if (Global_111858.f_18099.f_175[iVar2 /*19*/].f_17 > 100)
	{
		Global_111858.f_18099.f_175[iVar2 /*19*/].f_17 = 100;
	}
}

int func_422(int iParam0, var uParam1)
{
	if (iParam0 == Local_49.f_56.f_1)
	{
		return func_423(&(Local_49.f_3), &(Local_49.f_56), uParam1);
	}
	else if (iParam0 == Local_49.f_109.f_1)
	{
		return func_423(&(Local_49.f_3), &(Local_49.f_109), uParam1);
	}
	return 69;
}

int func_423(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	*uParam2 = 0;
	if (uParam1->f_51)
	{
		return 69;
	}
	if ((!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) && func_380(&(uParam1->f_12))) && !func_377(&(uParam1->f_12), 8f))
	{
		return 5;
	}
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (!func_426(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0)))
		{
			return 3;
		}
	}
	if ((Local_49.f_653 == 0 && func_377(&(uParam1->f_15), (2f * 60f))) || (Local_49.f_653 == 1 && func_377(&(uParam1->f_15), (3.5f * 60f))))
	{
		*uParam2 = 1;
		return 1;
	}
	iVar0 = unk_0xA5D3CD332CD10EE9();
	if (!unk_0x80FF6C016CDB0FAF(iVar0, 0))
	{
		return 2;
	}
	if (!unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iVar0, 15f, 15f, 15f, 0, 1, 0) && !unk_0x910DFF8E55ABB8EC(uParam1->f_7, iVar0, 15f, 15f, 15f, 0, 1, 0))
	{
		return 2;
	}
	if ((((((unk_0x94BF5C4EB0D40E9E(unk_0x9B0761B4C3EB8BC7()) || unk_0xDF1110AC39C733FE(unk_0x9B0761B4C3EB8BC7())) || unk_0x07404C7FE024EC4F(unk_0x9B0761B4C3EB8BC7())) || unk_0xAABDC18B9F6EC79D(unk_0x9B0761B4C3EB8BC7())) || unk_0x653A331834B72BC0(unk_0x9B0761B4C3EB8BC7())) || func_424(unk_0x36FE6D3220816ADA(iVar0))) || unk_0x4F5F2FB7AE0EB7AB(iVar0) < 500)
	{
		if ((((uParam0->f_1 != 0 && uParam1->f_1 != 14) && !unk_0x94BF5C4EB0D40E9E(unk_0x9B0761B4C3EB8BC7())) && !unk_0xDF1110AC39C733FE(unk_0x9B0761B4C3EB8BC7())) && !unk_0xAABDC18B9F6EC79D(unk_0x9B0761B4C3EB8BC7()))
		{
			return 4;
		}
	}
	return 0;
}

int func_424(int iParam0)
{
	int iVar0;
	int iVar1[92];
	
	iVar1[0] = joaat("ambulance");
	iVar1[1] = joaat("benson");
	iVar1[2] = joaat("biff");
	iVar1[3] = joaat("bus");
	iVar1[4] = joaat("firetruk");
	iVar1[5] = joaat("forklift");
	iVar1[6] = joaat("mule");
	iVar1[7] = joaat("mule2");
	iVar1[8] = joaat("packer");
	iVar1[9] = joaat("phantom");
	iVar1[10] = joaat("police");
	iVar1[11] = joaat("stockade");
	iVar1[12] = joaat("squalo");
	iVar1[13] = joaat("maverick");
	iVar1[14] = joaat("polmav");
	iVar1[15] = joaat("airtug");
	iVar1[16] = joaat("fbi");
	iVar1[17] = joaat("annihilator");
	iVar1[18] = joaat("dinghy");
	iVar1[19] = joaat("police");
	iVar1[20] = joaat("ripley");
	iVar1[21] = joaat("trash");
	iVar1[22] = joaat("burrito");
	iVar1[23] = joaat("pony");
	iVar1[24] = joaat("speedo");
	iVar1[25] = joaat("marquis");
	iVar1[26] = joaat("sanchez");
	iVar1[27] = joaat("airtug");
	iVar1[28] = joaat("taco");
	iVar1[29] = joaat("barracks");
	iVar1[30] = joaat("romero");
	iVar1[31] = joaat("blazer");
	iVar1[32] = joaat("blazer2");
	iVar1[33] = 0;
	iVar1[34] = joaat("bodhi2");
	iVar1[35] = joaat("boxville2");
	iVar1[36] = joaat("bulldozer");
	iVar1[37] = joaat("caddy");
	iVar1[38] = joaat("caddy2");
	iVar1[39] = 0;
	iVar1[40] = joaat("camper");
	iVar1[41] = 0;
	iVar1[42] = joaat("tiptruck");
	iVar1[43] = joaat("tourbus");
	iVar1[44] = joaat("towtruck");
	iVar1[45] = joaat("towtruck2");
	iVar1[46] = joaat("tractor");
	iVar1[47] = joaat("tractor2");
	iVar1[48] = joaat("utillitruck");
	iVar1[49] = joaat("utillitruck2");
	iVar1[50] = joaat("utillitruck3");
	iVar1[51] = joaat("bfinjection");
	iVar1[52] = 0;
	iVar1[53] = joaat("dloader");
	iVar1[54] = joaat("docktug");
	iVar1[55] = joaat("dump");
	iVar1[56] = joaat("gburrito");
	iVar1[57] = joaat("handler");
	iVar1[58] = joaat("hauler");
	iVar1[59] = joaat("journey");
	iVar1[60] = joaat("lguard");
	iVar1[61] = 0;
	iVar1[62] = 0;
	iVar1[63] = 0;
	iVar1[64] = joaat("mixer");
	iVar1[65] = 0;
	iVar1[66] = joaat("rhino");
	iVar1[67] = joaat("cutter");
	iVar1[68] = joaat("pounder");
	iVar1[69] = joaat("tiptruck2");
	iVar1[70] = joaat("mixer2");
	iVar1[71] = joaat("tiptruck2");
	iVar1[72] = joaat("rubble");
	iVar1[73] = joaat("scrap");
	iVar1[74] = joaat("armytanker");
	iVar1[75] = joaat("barracks2");
	iVar1[76] = 0;
	iVar1[77] = joaat("airbus");
	iVar1[78] = joaat("coach");
	iVar1[79] = joaat("pbus");
	iVar1[80] = joaat("riot");
	iVar1[81] = 0;
	iVar1[82] = joaat("stockade3");
	iVar1[83] = joaat("flatbed");
	iVar1[84] = joaat("boxville");
	iVar1[85] = joaat("burrito2");
	iVar1[86] = joaat("burrito3");
	iVar1[87] = joaat("burrito4");
	iVar1[88] = joaat("rumpo");
	iVar1[89] = joaat("speedo2");
	iVar1[90] = 0;
	iVar1[91] = 0;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (iParam0 == iVar1[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	if ((((func_425(iParam0) || unk_0x97AFEF6099069369(iParam0)) || unk_0x5874D60325749F00(iParam0)) || unk_0x442D6659150AF4B3(iParam0)) || unk_0xF9C3E2B9AA9E2294(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_425(int iParam0)
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 1;
			break;
	}
	return 0;
}

int func_426(int iParam0)
{
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		if (unk_0xB064AF9925F5537B(iParam0, -1, 0))
		{
			return 1;
		}
		if (unk_0xB064AF9925F5537B(iParam0, 0, 0))
		{
			return 1;
		}
		if (unk_0xB064AF9925F5537B(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0xB064AF9925F5537B(iParam0, 2, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_427(int iParam0, char* sParam1, int iParam2)
{
	unk_0xFDCFA91E51EDB61F(iParam0, sParam1, func_428(iParam2), 1);
}

int func_428(int iParam0)
{
	int iVar0;
	
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

int func_429(var uParam0)
{
	if (func_154(unk_0x9B0761B4C3EB8BC7()) && func_154(uParam0->f_7))
	{
		if (uParam0->f_1 == func_127())
		{
			return 1;
		}
		if (*uParam0 == 2 || *uParam0 == 4)
		{
			if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), uParam0->f_7, 75f, 75f, 75f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_430()
{
	if (unk_0xCE990E643CD9D0E5(unk_0x344C570D6F8700DF(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_431(var uParam0)
{
	if (*uParam0 == 3)
	{
		if (func_150())
		{
			return 1;
		}
	}
	return 0;
}

int func_432(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_68(iParam0);
	iVar1 = func_68(iParam1);
	iVar2 = func_68(iParam2);
	if ((iVar0 == 7 || iVar1 == 7) || (iVar2 == 7 && iParam2 != 145))
	{
		return 0;
	}
	if (iVar2 == 7)
	{
		iVar5 = func_51(iVar0, iVar1);
		if (iVar5 >= 9)
		{
			return 0;
		}
		if (((iParam0 == 1 && iParam1 == 19) && func_440(137)) && iParam3 == 1)
		{
			if (func_439(&(Global_111858.f_18099.f_388), iParam3, &iVar3, &iVar4, iParam4))
			{
				if (bParam7)
				{
					func_434(&(Global_111858.f_18099.f_388), iParam3, iVar3);
				}
				iVar3 += 6;
			}
			else
			{
				return 0;
			}
		}
		else if (func_439(&(Global_111858.f_18099.f_175[iVar5 /*19*/].f_9), iParam3, &iVar3, &iVar4, iParam4))
		{
			if (bParam7)
			{
				func_434(&(Global_111858.f_18099.f_175[iVar5 /*19*/].f_9), iParam3, iVar3);
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar6 = func_433(iVar0, iVar1, iVar2);
		if (iVar6 >= 2)
		{
			return 0;
		}
		if (func_439(&(Global_111858.f_18099.f_347[iVar6 /*7*/]), iParam3, &iVar3, &iVar4, iParam4))
		{
			if (bParam7)
			{
				func_434(&(Global_111858.f_18099.f_347[iVar6 /*7*/]), iParam3, iVar3);
			}
		}
		else
		{
			return 0;
		}
	}
	*sParam6 = { func_144(iVar0, iVar1, iVar2, 2) };
	*sParam5 = { *sParam6 };
	StringConCat(sParam5, "AU", 16);
	StringConCat(sParam6, "_", 16);
	if (iVar3 == 0)
	{
		StringConCat(sParam6, "A", 16);
	}
	else if (iVar3 == 1)
	{
		StringConCat(sParam6, "B", 16);
	}
	else if (iVar3 == 2)
	{
		StringConCat(sParam6, "C", 16);
	}
	else if (iVar3 == 3)
	{
		StringConCat(sParam6, "D", 16);
	}
	else if (iVar3 == 4)
	{
		StringConCat(sParam6, "E", 16);
	}
	else if (iVar3 == 5)
	{
		StringConCat(sParam6, "F", 16);
	}
	else if (iVar3 == 6)
	{
		StringConCat(sParam6, "G", 16);
	}
	else if (iVar3 == 7)
	{
		StringConCat(sParam6, "H", 16);
	}
	else if (iVar3 == 8)
	{
		StringConCat(sParam6, "I", 16);
	}
	else if (iVar3 == 9)
	{
		StringConCat(sParam6, "J", 16);
	}
	else if (iVar3 == 10)
	{
		StringConCat(sParam6, "K", 16);
	}
	else if (iVar3 == 11)
	{
		StringConCat(sParam6, "L", 16);
	}
	else
	{
		StringConCat(sParam6, "X", 16);
		return 0;
	}
	if (iParam3 == 0)
	{
		StringConCat(sParam6, "F", 16);
	}
	else if (iParam3 == 1)
	{
		StringConCat(sParam6, "M", 16);
	}
	else if (iParam3 == 2)
	{
		StringConCat(sParam6, "D", 16);
	}
	else
	{
		StringConCat(sParam6, "X", 16);
		return 0;
	}
	StringIntConCat(sParam6, iVar4, 16);
	return 1;
}

int func_433(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 == iParam1 || iParam1 == iParam2) || iParam2 == iParam0)
	{
		return 3;
	}
	if (((iParam0 == 1 || iParam1 == 1) || iParam2 == 1) && ((iParam0 == 2 || iParam1 == 2) || iParam2 == 2))
	{
		if ((iParam0 == 0 || iParam1 == 0) || iParam2 == 0)
		{
			return 0;
		}
		if ((iParam0 == 3 || iParam1 == 3) || iParam2 == 3)
		{
			return 1;
		}
	}
	return 3;
}

void func_434(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	func_438((*uParam0)[iParam2], &iVar0, &iVar1, &iVar2);
	func_437((*uParam0)[iParam2], &iVar3, &iVar4, &iVar5);
	func_436((*uParam0)[iParam2], &iVar6);
	if (iParam1 == 0)
	{
		iVar0++;
		if (iVar0 > iVar3)
		{
			iVar0 = iVar3;
		}
	}
	else if (iParam1 == 1)
	{
		iVar1++;
		if (iVar1 > iVar4)
		{
			iVar1 = iVar4;
		}
	}
	else if (iParam1 == 2)
	{
		iVar2++;
		if (iVar2 > iVar5)
		{
			iVar2 = iVar5;
		}
	}
	func_435(uParam0[iParam2], iVar0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6);
}

void func_435(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	*uParam0 = 0;
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1 & 15, 28));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam2 & 15, 24));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam3 & 15, 20));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam4 & 15, 16));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam5 & 15, 12));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam6 & 15, 8));
	*uParam0 = (*uParam0 || iParam7 & 255);
}

void func_436(var uParam0, int iParam1)
{
	*iParam1 = uParam0 & 255;
}

void func_437(int iParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam1 = SYSTEM::SHIFT_RIGHT(iParam0, 16) & 15;
	*iParam2 = SYSTEM::SHIFT_RIGHT(iParam0, 12) & 15;
	*iParam3 = SYSTEM::SHIFT_RIGHT(iParam0, 8) & 15;
}

void func_438(int iParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam1 = SYSTEM::SHIFT_RIGHT(iParam0, 28) & 15;
	*iParam2 = SYSTEM::SHIFT_RIGHT(iParam0, 24) & 15;
	*iParam3 = SYSTEM::SHIFT_RIGHT(iParam0, 20) & 15;
}

int func_439(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	*iParam2 = 0;
	while (*iParam2 < 6)
	{
		iVar0 = 0;
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar4 = 0;
		iVar5 = 0;
		iVar6 = 0;
		func_436((*uParam0)[*iParam2], &iVar6);
		if (unk_0xCE990E643CD9D0E5(iParam4, iVar6))
		{
			func_438((*uParam0)[*iParam2], &iVar0, &iVar1, &iVar2);
			func_437((*uParam0)[*iParam2], &iVar3, &iVar4, &iVar5);
			if (iParam1 == 0)
			{
				if (iVar0 < iVar3)
				{
					*uParam3 = iVar0;
					return 1;
				}
			}
			else if (iParam1 == 1)
			{
				if (iVar1 < iVar4)
				{
					*uParam3 = iVar1;
					return 1;
				}
			}
			else if (iParam1 == 2)
			{
				if (iVar2 < iVar5)
				{
					*uParam3 = iVar2;
					return 1;
				}
			}
		}
		*iParam2++;
	}
	*iParam2 = 0;
	*uParam3 = 0;
	return 0;
}

int func_440(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111858.f_9081.f_99.f_58[iParam0];
}

int func_441()
{
	int iVar0;
	
	iVar0 = 0;
	unk_0xBE20AB8238688965(&iVar0, 1);
	if (Local_49.f_109 == 0)
	{
		unk_0xBE20AB8238688965(&iVar0, 2);
	}
	if (func_440(128))
	{
		unk_0xBE20AB8238688965(&iVar0, 4);
		if (!func_443(24))
		{
			unk_0xBE20AB8238688965(&iVar0, 21);
		}
	}
	else
	{
		unk_0xBE20AB8238688965(&iVar0, 3);
	}
	if (func_440(131))
	{
		unk_0xBE20AB8238688965(&iVar0, 6);
	}
	else
	{
		unk_0xBE20AB8238688965(&iVar0, 5);
	}
	if (func_440(137))
	{
		unk_0xBE20AB8238688965(&iVar0, 9);
	}
	else if (func_440(126))
	{
		unk_0xBE20AB8238688965(&iVar0, 8);
	}
	else
	{
		unk_0xBE20AB8238688965(&iVar0, 7);
	}
	if (func_440(137))
	{
		if (!func_440(135) && !func_440(136))
		{
			unk_0xBE20AB8238688965(&iVar0, 10);
		}
		if (func_440(135))
		{
			unk_0xBE20AB8238688965(&iVar0, 11);
		}
		else
		{
			unk_0xBE20AB8238688965(&iVar0, 13);
		}
		if (func_440(136))
		{
			unk_0xBE20AB8238688965(&iVar0, 12);
		}
		else
		{
			unk_0xBE20AB8238688965(&iVar0, 14);
		}
	}
	if (!func_443(20))
	{
		unk_0xBE20AB8238688965(&iVar0, 15);
	}
	if (!func_443(46))
	{
		unk_0xBE20AB8238688965(&iVar0, 16);
	}
	if (func_440(129) && !unk_0xCE990E643CD9D0E5(iVar0, 9))
	{
		unk_0xBE20AB8238688965(&iVar0, 17);
	}
	if (func_443(40) && !func_443(43))
	{
		unk_0xBE20AB8238688965(&iVar0, 18);
	}
	if (func_443(43) && !func_443(42))
	{
		unk_0xBE20AB8238688965(&iVar0, 19);
	}
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_442(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1)))
		{
			unk_0xBE20AB8238688965(&iVar0, 20);
		}
	}
	return iVar0;
}

int func_442(struct<2> Param0, Vector3 vParam2)
{
	if (Param0.f_1 < 400f)
	{
		if (Param0 < 1400f)
		{
			if (Param0 > -1900f)
			{
				if (Param0.f_1 > -3500f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_443(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111858.f_9081.f_330[iParam0 /*6*/];
}

int func_444(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	if (unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		return 0;
	}
	else if (iParam0 && unk_0x2F80DB5A41D045E6())
	{
		return 0;
	}
	else if (func_446())
	{
		return 0;
	}
	else if (Local_49.f_56.f_50 == 0 && Local_49.f_109.f_50 == 0)
	{
		return 0;
	}
	else
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1) };
		iVar3 = 0;
		if (unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar3 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
		}
		if (Local_49.f_56.f_50)
		{
			if (Local_49.f_56 != 2 || unk_0xF83D0A2EC884A4DD(Local_49.f_56.f_7, 0))
			{
				return 0;
			}
			else if (unk_0xAE06B9E39EBDE049(iVar3))
			{
				if (!unk_0xE0B3BC41DDA88DF0(Local_49.f_56.f_7, iVar3, 0))
				{
					return 0;
				}
			}
			else if (!unk_0xC2169C00B643278B(Local_49.f_56.f_7, Var0, 25f, 25f, 25f, 0, 1, 0))
			{
				return 0;
			}
		}
		if (Local_49.f_109.f_50)
		{
			if (Local_49.f_109 != 2 || unk_0xF83D0A2EC884A4DD(Local_49.f_109.f_7, 0))
			{
				return 0;
			}
			else if (unk_0xAE06B9E39EBDE049(iVar3))
			{
				if (!unk_0xE0B3BC41DDA88DF0(Local_49.f_109.f_7, iVar3, 0))
				{
					return 0;
				}
			}
			else if (!unk_0xC2169C00B643278B(Local_49.f_109.f_7, Var0, 25f, 25f, 25f, 0, 1, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_445(var uParam0, int iParam1)
{
	if (*uParam0 == 3)
	{
		unk_0xBE4122AC23440E7D(iParam1);
	}
	*uParam0 = 0;
}

bool func_446()
{
	return Global_99007.f_351 > 0;
}

void func_447(var uParam0)
{
	*uParam0 = 20;
	uParam0->f_1 = 8;
	uParam0->f_32 = 145;
	uParam0->f_33 = 69;
	uParam0->f_2 = 0;
}

int func_448()
{
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && func_286(unk_0x9B0761B4C3EB8BC7()))
	{
		return 46;
	}
	return 45;
}

void func_449(var uParam0, char* sParam1, char[4] cParam2)
{
	if (*uParam0 == 0)
	{
		if (!func_150())
		{
			*uParam0 = 1;
			uParam0->f_1 = { *sParam1 };
			uParam0->f_5 = { *cParam2 };
		}
	}
}

int func_450()
{
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && func_286(unk_0x9B0761B4C3EB8BC7()))
	{
		return 44;
	}
	return 42;
}

int func_451(int iParam0)
{
	var uVar0[5];
	int iVar6;
	int iVar7;
	
	iVar6 = 0;
	if (func_429(&(Local_49.f_56)))
	{
		if (iParam0 == 0 || func_454(&(Local_49.f_56)))
		{
			uVar0[iVar6] = Local_49.f_56.f_1;
			iVar6++;
		}
	}
	if (func_429(&(Local_49.f_109)))
	{
		if (iParam0 == 0 || func_454(&(Local_49.f_109)))
		{
			uVar0[iVar6] = Local_49.f_109.f_1;
			iVar6++;
		}
	}
	iVar7 = 0;
	while (iVar7 < 3)
	{
		if (func_453(&(Local_49.f_162[iVar7 /*28*/])))
		{
			if (iParam0 == 0 || func_452(&(Local_49.f_162[iVar7 /*28*/])))
			{
				uVar0[iVar6] = Local_49.f_162[iVar7 /*28*/];
				iVar6++;
			}
		}
		iVar7++;
	}
	if (iVar6 > 0)
	{
		return uVar0[unk_0x344C570D6F8700DF(0, iVar6)];
	}
	return 145;
}

int func_452(var uParam0)
{
	if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_3))
	{
		if (unk_0x518D695E2DBA9DB8(uParam0->f_3) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_453(var uParam0)
{
	if (func_154(unk_0x9B0761B4C3EB8BC7()) && func_154(uParam0->f_3))
	{
		if (*uParam0 == func_127())
		{
			return 1;
		}
		if (((uParam0->f_1 == 4 || uParam0->f_1 == 5) || uParam0->f_1 == 6) || uParam0->f_1 == 12)
		{
			if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), uParam0->f_3, 75f, 75f, 75f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_454(var uParam0)
{
	if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_7))
	{
		if (unk_0x518D695E2DBA9DB8(uParam0->f_7) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_455(var uParam0, int iParam1)
{
	unk_0xBE4122AC23440E7D(iParam1);
	*uParam0 = 0;
}

int func_456(var uParam0)
{
	if (*uParam0 == 0)
	{
		if (!func_150())
		{
			return 1;
		}
	}
	return 0;
}

int func_457(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 8;
	if (iParam1 == 0)
	{
		iVar0 = 0;
	}
	else if (iParam1 == 1)
	{
		iVar0 = 0;
	}
	else if (iParam1 == 2)
	{
		iVar0 = 0;
	}
	else if (iParam1 == 3)
	{
		iVar0 = 0;
	}
	else if (iParam1 == 4)
	{
		iVar0 = 1;
	}
	else if (iParam1 == 5)
	{
		iVar0 = 1;
	}
	else if (iParam1 == 6)
	{
		iVar0 = 2;
	}
	else if (iParam1 == 7)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 8)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 9)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 10)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 11)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 12)
	{
		iVar0 = 5;
	}
	else if (iParam1 == 13)
	{
		iVar0 = 6;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 7;
	}
	else if (iParam1 == 15)
	{
		iVar0 = 7;
	}
	else if (iParam1 == 16)
	{
		iVar0 = 8;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 8;
	}
	else if (iParam1 == 18)
	{
		iVar0 = 8;
	}
	bVar1 = iVar0 > uParam0->f_1;
	if (bVar1 == 0)
	{
		*uParam0 = iParam1;
		uParam0->f_1 = iVar0;
		uParam0->f_32 = iParam2;
		uParam0->f_33 = iParam3;
		uParam0->f_2 = 0;
		func_8(&(uParam0->f_4));
		return 1;
	}
	return 0;
}

void func_458()
{
	bool bVar0;
	
	func_470();
	bVar0 = false;
	if (!func_468())
	{
		if (Local_49.f_56 >= 7)
		{
			func_467(&(Local_49.f_56), &(Local_49.f_629));
			func_461(&(Local_49.f_56));
			bVar0 = true;
		}
		if (Local_49.f_109 >= 7)
		{
			func_467(&(Local_49.f_109), &(Local_49.f_630));
			func_461(&(Local_49.f_109));
			bVar0 = true;
		}
		if (bVar0)
		{
			func_459(1);
		}
	}
}

int func_459(bool bParam0)
{
	int iVar0;
	bool bVar1;
	struct<53> Var2;
	struct<53> Var55;
	struct<53> Var108;
	
	iVar0 = func_127();
	bVar1 = false;
	if (Local_49.f_56 != 0 && Local_49.f_56.f_1 == iVar0)
	{
		Var2 = { Local_49.f_3 };
		Local_49.f_3 = { Local_49.f_56 };
		Local_49.f_56 = { Var2 };
		bVar1 = true;
	}
	if (Local_49.f_109 != 0 && Local_49.f_109.f_1 == iVar0)
	{
		Var55 = { Local_49.f_3 };
		Local_49.f_3 = { Local_49.f_109 };
		Local_49.f_109 = { Var55 };
		bVar1 = true;
	}
	if (bParam0)
	{
		if (Local_49.f_56 == 0 && Local_49.f_109 != 0)
		{
			Var108 = { Local_49.f_56 };
			Local_49.f_56 = { Local_49.f_109 };
			Local_49.f_109 = { Var108 };
			bVar1 = true;
		}
	}
	func_460();
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_460()
{
	if (func_154(Local_49.f_3.f_7))
	{
		unk_0x694113444F21E39F(Local_49.f_3.f_7, 206, false);
	}
	if (func_154(Local_49.f_56.f_7))
	{
		unk_0x694113444F21E39F(Local_49.f_56.f_7, 206, false);
	}
	if (func_154(Local_49.f_109.f_7))
	{
		unk_0x694113444F21E39F(Local_49.f_109.f_7, 206, false);
	}
	if (func_154(Local_49.f_56.f_7) && Local_49.f_56.f_50)
	{
		if (!Local_49.f_109.f_50)
		{
			unk_0x694113444F21E39F(Local_49.f_56.f_7, 206, true);
			return Local_49.f_56.f_1;
		}
	}
	if (func_154(Local_49.f_109.f_7) && Local_49.f_109.f_50)
	{
		if (!Local_49.f_56.f_50)
		{
			unk_0x694113444F21E39F(Local_49.f_109.f_7, 206, true);
			return Local_49.f_56.f_1;
		}
	}
	return 145;
}

void func_461(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == 9)
	{
		iVar0 = func_68(uParam0->f_1);
		func_465(iVar0, func_374(iVar0));
		func_462(uParam0->f_1, 0, func_463(uParam0->f_7));
		func_5(uParam0, 2, 0);
	}
	else if (*uParam0 == 10)
	{
		func_462(uParam0->f_1, 2, 0);
		func_5(uParam0, 0, 0);
	}
	else if (*uParam0 == 11)
	{
		func_462(uParam0->f_1, 1, 0);
		func_5(uParam0, 0, 0);
	}
	else if (*uParam0 == 8)
	{
		func_5(uParam0, 5, 0);
	}
	else if (*uParam0 == 12)
	{
		func_462(uParam0->f_1, 3, 0);
		func_5(uParam0, 4, 0);
	}
	else if (*uParam0 == 13)
	{
		func_462(uParam0->f_1, 4, 0);
		func_5(uParam0, 4, 0);
	}
	else if (*uParam0 == 14)
	{
		func_5(uParam0, 6, 0);
	}
	else if (*uParam0 == 7)
	{
		func_5(uParam0, 6, 0);
	}
	else
	{
		func_5(uParam0, 6, 0);
	}
}

void func_462(var uParam0, int iParam1, int iParam2)
{
	if (Local_49.f_670 < 5)
	{
		Local_49.f_654[Local_49.f_670 /*3*/] = uParam0;
		Local_49.f_654[Local_49.f_670 /*3*/].f_1 = iParam1;
		Local_49.f_654[Local_49.f_670 /*3*/].f_2 = iParam2;
		Local_49.f_670++;
	}
}

int func_463(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, 0) };
		if (!unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()) || unk_0xCDF860E56BBCC6B4(iParam0, unk_0x9B0761B4C3EB8BC7(), 1))
		{
			switch (func_464(Var0, 1))
			{
				case 0:
					return 202;
					break;
				
				case 1:
					return 203;
					break;
				
				case 2:
					return 204;
					break;
				
				case 3:
					return 205;
					break;
				
				case 4:
					return 206;
					break;
			}
			return 202;
		}
	}
	return 0;
}

int func_464(struct<3> Param0, bool bParam3)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1E+07f;
	iVar3 = 5;
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		if (Global_94158[iVar0 /*9*/].f_7 != 263)
		{
			if (!bParam3 || unk_0xCE990E643CD9D0E5(Global_111858.f_7225.f_11[iVar0], 0))
			{
				fVar1 = unk_0x272784C60C397DB6(Param0, Global_94158[iVar0 /*9*/].f_3, 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

void func_465(int iParam0, int iParam1)
{
	if (iParam0 < 6)
	{
		func_8(&(Global_111858.f_18099.f_362[iParam0 /*3*/]));
		Global_111858.f_18099.f_381[iParam0] = iParam1;
		if (iParam1 != -1)
		{
			func_466(&(Global_111858.f_18099.f_362[iParam0 /*3*/]));
		}
	}
}

void func_466(var uParam0)
{
	if (func_380(uParam0))
	{
		if (!func_379(uParam0))
		{
			uParam0->f_2 = (func_10(unk_0xCE990E643CD9D0E5(*uParam0, 4)) - uParam0->f_1);
			unk_0xBE20AB8238688965(uParam0, 2);
		}
	}
}

void func_467(var uParam0, var uParam1)
{
	if (*uParam0 != 7)
	{
		*uParam1 = uParam0->f_1;
	}
}

int func_468()
{
	if (func_469())
	{
		return 1;
	}
	return 0;
}

int func_469()
{
	if (!unk_0x25DDB354A40FFCDB())
	{
		return Global_96433.f_44 == 1;
	}
	return 0;
}

void func_470()
{
	if ((Local_49.f_614 && Global_94801 != 4) && Global_94801 != 5)
	{
		if (func_489())
		{
			if ((Local_49.f_703 != 0 && Local_49.f_703 != 1) && Local_49.f_615 != Global_94802)
			{
				func_457(&(Local_49.f_703), 0, 145, 69);
				Local_49.f_615 = Global_94802;
			}
			if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				if (!unk_0x2F80DB5A41D045E6())
				{
					if (Local_49.f_703 != 0)
					{
						func_868(1, 48, 0);
					}
				}
			}
		}
		else if (Local_49.f_703 == 1)
		{
			if (Global_94801 != 3)
			{
				func_457(&(Local_49.f_703), 2, 145, 69);
			}
		}
	}
	if (Local_49.f_56 == 4)
	{
		if (func_488(&(Local_49.f_56)) && !unk_0x2F80DB5A41D045E6())
		{
			if (func_67(Local_49.f_56.f_1))
			{
				func_486(&(Local_49.f_56), 1, 48);
			}
			else
			{
				func_486(&(Local_49.f_56), 1, 49);
			}
		}
	}
	if (Local_49.f_109 == 4)
	{
		if (func_488(&(Local_49.f_109)) && !unk_0x2F80DB5A41D045E6())
		{
			if (func_67(Local_49.f_109.f_1))
			{
				func_486(&(Local_49.f_109), 1, 48);
			}
			else
			{
				func_486(&(Local_49.f_109), 1, 49);
			}
		}
	}
	if (func_484())
	{
		if (func_456(&(Local_49.f_737)) && (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) || unk_0x0D77CDCF403AEBD2(unk_0xF3A639BEE7AADF55(unk_0x9B0761B4C3EB8BC7())) < 0.5f))
		{
			func_472(1, 47);
		}
	}
	if (func_471(12))
	{
		func_472(1, 69);
	}
}

bool func_471(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_94810, iParam0);
}

void func_472(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_127();
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (iVar1 != iVar0)
		{
			func_473(&(Local_49.f_162[iVar1 /*28*/]), Global_94804, iParam0, iParam1);
		}
		iVar1++;
	}
}

int func_473(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	char* sVar1;
	bool bVar5;
	struct<3> Var6;
	int iVar9;
	struct<3> Var10;
	var uVar13;
	var uVar14;
	var uVar15;
	
	if (uParam0->f_1 != 0 && uParam0->f_1 < 14)
	{
		iVar0 = func_127();
		if (func_154(uParam0->f_3) && *uParam0 != iVar0)
		{
			if (func_453(uParam0))
			{
				if (iParam3 != 69)
				{
					if (iParam2 == 0)
					{
						if (func_483(*uParam0, iParam3, &sVar1))
						{
							func_482(uParam0->f_3, &sVar1, func_149(*uParam0), 4);
						}
					}
					else if (func_306(&(Local_49.f_703)) != 3)
					{
						func_457(&(Local_49.f_703), 3, *uParam0, iParam3);
					}
				}
			}
			bVar5 = false;
			if (iParam1 != -1)
			{
				iVar9 = Global_89743[iParam1 /*34*/].f_10;
				if (func_41(iVar9))
				{
					Var10 = { func_35(iVar9, func_36()) };
				}
				else
				{
					Var10 = { func_35(iVar9, 0) };
				}
				Var6 = { Var10 + func_34(unk_0x3E4D3CCC220BDFB1(uParam0->f_3, 1) - Var10) * Vector(50f, 50f, 50f) };
				if (func_15(Var6, &Var6, &uVar13, &uVar14, 1, 0, 1))
				{
					bVar5 = true;
				}
			}
			if (unk_0xFE6F151E15A69B3A(uParam0->f_3, func_13()))
			{
				unk_0x59478CBBF96AF7D1(uParam0->f_3);
			}
			unk_0x6AAFCA9C4D72022D(uParam0->f_3, "BlockFriendGrab", 1);
			unk_0xCBA6B2B569DCAFD8(uParam0->f_3, 1);
			unk_0x9DC06E2A59C5AEBB(&uVar15);
			if (unk_0x47DBF174A0CB9D55(uParam0->f_3, 1))
			{
				unk_0x0AB756271BADC8DF(0, 0, 0);
			}
			unk_0xA785552633ED203B(0, unk_0x9B0761B4C3EB8BC7(), 2000, 3072, 2);
			unk_0xC67F9BF03C2472AB(0, unk_0x344C570D6F8700DF(800, 1200));
			if (bVar5)
			{
				unk_0x3C1B180EE30D36EF(0, Var6, 1f, -1, 0.25f, 5, 1193033728);
			}
			unk_0x30291E2E564E9B47(0, 1193033728, 0);
			unk_0x19F29730874AD6F1(uVar15);
			unk_0x9B6EC2CECE1010EF(uParam0->f_3, uVar15);
			unk_0x4F83FEE4454169D4(&uVar15);
			func_474(uParam0, 2);
			return 1;
		}
		else
		{
			func_474(uParam0, 2);
			return 1;
		}
	}
	return 0;
}

void func_474(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		func_481(&(uParam0->f_4));
		func_480(uParam0);
		if (unk_0xAE06B9E39EBDE049(uParam0->f_3))
		{
			if (uParam0->f_1 == 12 && iParam1 != 3)
			{
				if (!unk_0xA59F96B50B97E63C(uParam0->f_3, 0))
				{
					if (!unk_0x1D2A3118784C0272(uParam0->f_3, 1))
					{
						unk_0x4F3C4F457D44BB0F(uParam0->f_3, 1, 1);
					}
				}
			}
			func_479(uParam0);
			if (uParam0->f_3 != unk_0x9B0761B4C3EB8BC7())
			{
				if (unk_0x7DA97DBB7F7D2DE5(uParam0->f_3))
				{
					unk_0x59478CBBF96AF7D1(uParam0->f_3);
				}
				if (iParam1 == 0)
				{
					unk_0x586DDC617E714637(&(uParam0->f_3));
				}
				else if (iParam1 == 2)
				{
					unk_0x2481907DEE6B85EA(&(uParam0->f_3));
				}
			}
		}
		func_477(uParam0);
		func_476(uParam0, &Global_94809);
		func_43(*uParam0);
		func_475(uParam0, *uParam0);
	}
}

void func_475(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1;
	func_7(&(uParam0->f_7));
	uParam0->f_10 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	uParam0->f_18 = 0;
	uParam0->f_17 = 0;
	uParam0->f_21 = 0;
	uParam0->f_22 = 145;
	uParam0->f_23 = 0;
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
}

void func_476(var uParam0, var uParam1)
{
	unk_0xD2459066EA58CE43(uParam1, *uParam0);
}

void func_477(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = *uParam0;
	if (unk_0xCE990E643CD9D0E5(Global_94808, iVar0))
	{
		unk_0xD2459066EA58CE43(&Global_94808, iVar0);
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (*uParam0 != iVar1 && func_478(&(Local_49.f_162[iVar1 /*28*/]), Global_94808))
			{
				func_50(*uParam0, iVar1, 1);
			}
			iVar1++;
		}
	}
}

bool func_478(var uParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(uParam1, *uParam0);
}

void func_479(var uParam0)
{
	if (func_154(uParam0->f_3))
	{
		unk_0xA5EAD2ACE2C8BBB2(uParam0->f_3, 0, 1);
		unk_0x44225B42FE388400(uParam0->f_3, 0);
		unk_0x73745F8F1D07995D(uParam0->f_3, 2);
		unk_0x389E871B0B67CCCC(uParam0->f_3, 1);
		unk_0x911BA6A7B46C75BA(uParam0->f_3, 0);
		unk_0x694113444F21E39F(uParam0->f_3, 107, false);
		unk_0x694113444F21E39F(uParam0->f_3, 206, false);
		unk_0x4E65320BC9AD521C(uParam0->f_3, 0);
		unk_0x2BE0D197755AB177(uParam0->f_3, 0, 0);
		if (unk_0x48238AD298F1A5F0(uParam0->f_3))
		{
			unk_0x912105796D275F9C(uParam0->f_3, 0, 0);
		}
	}
}

void func_480(var uParam0)
{
	float fVar0;
	
	if (func_154(uParam0->f_3))
	{
		if (unk_0x2A82FAC1E55962C6(uParam0->f_3) > SYSTEM::FLOOR(200f))
		{
			fVar0 = (SYSTEM::TO_FLOAT(unk_0x4F5F2FB7AE0EB7AB(uParam0->f_3)) * (200f / 400f));
			unk_0x16E50383DEE2A560(uParam0->f_3, SYSTEM::FLOOR(200f));
			unk_0x697DA7132EE43ABC(uParam0->f_3, SYSTEM::FLOOR(fVar0), 0);
		}
	}
}

void func_481(var uParam0)
{
	if (unk_0x8F678487EEBD8CE4(*uParam0))
	{
		unk_0x72BEFB9451782F60(*uParam0, 0);
		unk_0x93370FA10F15BE44(uParam0);
	}
}

void func_482(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x1A454EFB8BC73430(uParam0, sParam1, sParam2, func_428(iParam3), 0);
}

int func_483(int iParam0, int iParam1, char* sParam2)
{
	switch (iParam1)
	{
		case 48:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 1:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 2:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 19:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 14:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 17:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				default:
			}
			break;
		
		case 49:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 1:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 2:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 19:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 14:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 17:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				default:
			}
			break;
		
		case 51:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 1:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 2:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 19:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 14:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 17:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				default:
			}
			break;
		
		case 52:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 1:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 2:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 19:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 14:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 17:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				default:
			}
			break;
		
		default:
			StringCopy(sParam2, "FaFM_BVAA", 16);
			return 0;
			break;
	}
	StringCopy(sParam2, "FaFM_BVAA", 16);
	return 0;
}

int func_484()
{
	int iVar0;
	int iVar1;
	
	if (Global_94801 == 0)
	{
		if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) == 0)
		{
			iVar0 = func_127();
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (iVar1 != iVar0)
				{
					if (func_453(&(Local_49.f_162[iVar1 /*28*/])) && func_485(&(Local_49.f_162[iVar1 /*28*/])))
					{
						return 1;
					}
				}
				iVar1++;
			}
		}
	}
	return 0;
}

int func_485(var uParam0)
{
	if (func_377(&(uParam0->f_7), 300f))
	{
		return 1;
	}
	return 0;
}

int func_486(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	
	if (*uParam0 != 0 && *uParam0 < 7)
	{
		iVar0 = func_127();
		if (func_154(uParam0->f_7) && uParam0->f_1 != iVar0)
		{
			if (func_429(uParam0))
			{
				if (iParam2 != 69)
				{
					if (bParam1 == 0)
					{
						if (func_483(uParam0->f_1, iParam2, &sVar1))
						{
							func_482(uParam0->f_7, &sVar1, func_149(uParam0->f_1), 4);
						}
					}
					else if (func_306(&(Local_49.f_703)) != 3)
					{
						func_457(&(Local_49.f_703), 3, uParam0->f_1, iParam2);
					}
				}
			}
		}
		func_487(uParam0, 8);
		return 1;
	}
	return 0;
}

void func_487(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_488(var uParam0)
{
	var uVar0;
	
	if (unk_0x47DBF174A0CB9D55(uParam0->f_7, 0))
	{
		uVar0 = unk_0xA5D5B1042E8F47BD(uParam0->f_7, 0);
		if (unk_0xAE06B9E39EBDE049(uVar0))
		{
			if (!unk_0xFD7B900D58065E3B(iVar0))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iVar0, 0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_489()
{
	int iVar0;
	int iVar1;
	
	if (Global_94801 == 3 && func_156(Global_89743[Global_94802 /*34*/].f_11, func_373(func_127())))
	{
		if ((func_429(&(Local_49.f_56)) && func_490(Local_49.f_56.f_1, Global_94803)) || (func_429(&(Local_49.f_109)) && func_490(Local_49.f_109.f_1, Global_94803)))
		{
			return 1;
		}
		iVar0 = func_127();
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (iVar1 != iVar0)
			{
				if (func_453(&(Local_49.f_162[iVar1 /*28*/])) && func_490(iVar1, Global_94803))
				{
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

bool func_490(int iParam0, int iParam1)
{
	return !unk_0xCE990E643CD9D0E5(iParam1, func_68(iParam0));
}

void func_491()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_829(&(Local_49.f_162[iVar0 /*28*/]));
		iVar0++;
	}
	func_493(&(Local_49.f_3));
	func_493(&(Local_49.f_56));
	func_493(&(Local_49.f_109));
	func_492();
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		unk_0xBB7976F6FB9C9DD2(unk_0x9B0761B4C3EB8BC7());
		unk_0x1A92D12C72BE9803(unk_0x9B0761B4C3EB8BC7());
	}
	if (!unk_0x5AEB5DDFFAD43CA5(Local_49.f_56.f_7))
	{
		unk_0xBB7976F6FB9C9DD2(Local_49.f_56.f_7);
		unk_0x1A92D12C72BE9803(Local_49.f_56.f_7);
	}
	if (!unk_0x5AEB5DDFFAD43CA5(Local_49.f_109.f_7))
	{
		unk_0xBB7976F6FB9C9DD2(Local_49.f_109.f_7);
		unk_0x1A92D12C72BE9803(Local_49.f_109.f_7);
	}
}

void func_492()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 1))
	{
		iVar0 = unk_0xCE078AEFF5C495DE(unk_0x9B0761B4C3EB8BC7());
		if (unk_0x80FF6C016CDB0FAF(iVar0, 0))
		{
			iVar1 = unk_0x10D3F7E169A49C44(iVar0, 0, 0);
			if (!unk_0x5AEB5DDFFAD43CA5(iVar1))
			{
				if (iVar1 != unk_0x9B0761B4C3EB8BC7())
				{
					if (unk_0x1758275D343D5BA3(iVar1))
					{
						if (!unk_0x71CFA8031A5AE4FB(iVar1, unk_0x9B0761B4C3EB8BC7()))
						{
							unk_0xA785552633ED203B(iVar1, unk_0x9B0761B4C3EB8BC7(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_493(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char[] cVar8[8];
	char[] cVar12[8];
	
	if (*uParam0 == 0 || *uParam0 >= 7)
	{
		return;
	}
	bVar0 = false;
	if (unk_0xAE06B9E39EBDE049(uParam0->f_8))
	{
		if (!unk_0xA59F96B50B97E63C(uParam0->f_8, 0))
		{
			iVar1 = unk_0x4F5F2FB7AE0EB7AB(uParam0->f_8);
			if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), uParam0->f_8, 0))
			{
				if (iVar1 < (uParam0->f_38 - 50))
				{
					bVar0 = true;
				}
			}
			uParam0->f_38 = iVar1;
			unk_0xBB7976F6FB9C9DD2(uParam0->f_8);
			unk_0x1A92D12C72BE9803(uParam0->f_8);
		}
		else
		{
			if (uParam0->f_38 != -1)
			{
				bVar0 = true;
			}
			uParam0->f_38 = -1;
		}
	}
	if (func_67(uParam0->f_1))
	{
		unk_0xD2459066EA58CE43(&Global_94806, uParam0->f_1);
	}
	if (unk_0xAE06B9E39EBDE049(uParam0->f_7) && unk_0x5AEB5DDFFAD43CA5(uParam0->f_7))
	{
		if (uParam0->f_50)
		{
			func_419(Local_49.f_3.f_1, uParam0->f_1, 1);
		}
		if (func_67(uParam0->f_1))
		{
			func_65(uParam0);
			Global_111858.f_18529[uParam0->f_1] = 0;
		}
		func_828(1);
		func_487(uParam0, 9);
		return;
	}
	if (!unk_0xAE06B9E39EBDE049(uParam0->f_7))
	{
		if ((*uParam0 == 2 || *uParam0 == 3) || *uParam0 == 4)
		{
			func_487(uParam0, 7);
			return;
		}
	}
	if (unk_0xAE06B9E39EBDE049(uParam0->f_7) && uParam0->f_7 != unk_0x9B0761B4C3EB8BC7())
	{
		iVar2 = 0;
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			uVar3 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
			if (unk_0xAE06B9E39EBDE049(uVar3) && unk_0xE0B3BC41DDA88DF0(uParam0->f_7, iVar3, 0))
			{
				iVar2 = 1;
			}
		}
		if (iVar2 == 1)
		{
			uParam0->f_40 = 1;
		}
		else if (((!unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7()) && !unk_0xCED6B5226244381C(uParam0->f_7)) && !unk_0x96335C06FE469AF4(unk_0x9B0761B4C3EB8BC7())) && !unk_0x96335C06FE469AF4(uParam0->f_7))
		{
			uParam0->f_40 = 0;
		}
		iVar4 = unk_0x4F5F2FB7AE0EB7AB(uParam0->f_7);
		if (uParam0->f_40 == 0)
		{
			if (unk_0xCDF860E56BBCC6B4(uParam0->f_7, unk_0x9B0761B4C3EB8BC7(), 1))
			{
				if (iVar4 < (uParam0->f_41 - 10))
				{
					func_827(uParam0, 1);
				}
			}
		}
		uParam0->f_41 = iVar4;
	}
	if (*uParam0 != 4)
	{
		if (func_826())
		{
			if (uParam0->f_1 != func_127())
			{
				if (unk_0xAE06B9E39EBDE049(uParam0->f_7))
				{
					func_823(uParam0, 1, 0);
				}
			}
			return;
		}
	}
	if (*uParam0 == 1)
	{
		if (uParam0->f_2 == 25 || (unk_0xAE06B9E39EBDE049(uParam0->f_7) && func_398(uParam0->f_7, uParam0->f_24, 20f)))
		{
			func_8(&(uParam0->f_15));
		}
	}
	Global_42183[uParam0->f_1] = unk_0x578C4EF320340AF7() + 20000;
	if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_7))
	{
		unk_0x8342E6CB98CD545C(uParam0->f_7, 328, 1);
	}
	if (uParam0->f_1 != func_127())
	{
		if (*uParam0 == 1)
		{
			func_822(uParam0);
			if (!func_468())
			{
				if ((Local_49.f_653 == 0 && func_377(&(uParam0->f_15), (4f * 60f))) || (Local_49.f_653 == 1 && func_377(&(uParam0->f_15), (8f * 60f))))
				{
					if (!unk_0xAE06B9E39EBDE049(uParam0->f_7))
					{
						if (!uParam0->f_46)
						{
							func_50(Local_49.f_3.f_1, uParam0->f_1, 0);
							func_419(Local_49.f_3.f_1, uParam0->f_1, 4);
							func_487(uParam0, 10);
							return;
						}
					}
				}
				if (!uParam0->f_46)
				{
					if (func_821(uParam0->f_1))
					{
						if (unk_0xAE06B9E39EBDE049(uParam0->f_7))
						{
							func_818(&(Local_49.f_424), uParam0->f_1);
						}
						else if (func_810(&(Local_49.f_259), Local_49.f_3.f_1, uParam0->f_1))
						{
							uParam0->f_46 = 1;
							return;
						}
					}
				}
				else if (func_809())
				{
					uParam0->f_46 = 0;
					return;
				}
				else if (func_808())
				{
					func_50(Local_49.f_3.f_1, uParam0->f_1, 0);
					func_487(uParam0, 7);
					return;
				}
				if (!func_468())
				{
					if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_7))
					{
						if (uParam0->f_51 || func_803(uParam0))
						{
							func_800(uParam0);
							func_800(&(Local_49.f_3));
							return;
						}
						else if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), uParam0->f_7, 25f, 25f, 25f, 0, 1, 0))
						{
							if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) || unk_0x0D77CDCF403AEBD2(unk_0xF3A639BEE7AADF55(unk_0x9B0761B4C3EB8BC7())) < 10f)
							{
								if (uParam0->f_1 == 14 || uParam0->f_1 == 17)
								{
									if (func_799(uParam0, 0))
									{
										func_798(uParam0, 0);
										return;
									}
								}
								else if (func_799(uParam0, 1))
								{
									func_800(uParam0);
									func_800(&(Local_49.f_3));
									return;
								}
							}
						}
					}
				}
				if (func_398(unk_0x9B0761B4C3EB8BC7(), uParam0->f_24, 10f))
				{
					unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), uParam0->f_24, Global_19, 1, 1, 0);
				}
			}
			else
			{
				if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_7))
				{
					if (func_797())
					{
						if (unk_0x47DBF174A0CB9D55(uParam0->f_7, 0))
						{
							unk_0x6A8F948698B360B4(unk_0xA5D5B1042E8F47BD(uParam0->f_7, 0), 1);
						}
						else
						{
							unk_0x6A8F948698B360B4(uParam0->f_7, 1);
						}
					}
					else if (unk_0x47DBF174A0CB9D55(uParam0->f_7, 0))
					{
						unk_0x6A8F948698B360B4(unk_0xA5D5B1042E8F47BD(uParam0->f_7, 0), 0);
					}
					else
					{
						unk_0x6A8F948698B360B4(uParam0->f_7, 0);
					}
				}
				func_7(&(uParam0->f_29));
				uParam0->f_46 = 0;
			}
			if (unk_0xAE06B9E39EBDE049(uParam0->f_7))
			{
				if (!func_468())
				{
					func_823(uParam0, 0, 1);
				}
			}
			else if (!func_793(uParam0, func_797()))
			{
				func_513(uParam0);
			}
			if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_7))
			{
				func_506(uParam0);
			}
		}
		else if (*uParam0 == 2)
		{
			if (unk_0xAE06B9E39EBDE049(uParam0->f_9))
			{
				if (unk_0x8E805E09B82CCE5F(uParam0->f_9))
				{
					unk_0x1F8106DB8796859F(uParam0->f_9, 1, 1);
				}
				unk_0x315F7D8C33F0AB37(&(uParam0->f_9));
			}
			if (func_504(uParam0))
			{
				func_798(uParam0, 0);
			}
			else if (!unk_0xFE6F151E15A69B3A(uParam0->f_7, func_13()))
			{
				func_487(uParam0, 3);
			}
			else if (func_503(uParam0))
			{
				func_487(uParam0, 6);
			}
			else if (func_502(uParam0))
			{
				func_487(uParam0, 5);
				unk_0x59478CBBF96AF7D1(uParam0->f_7);
				unk_0x4E65320BC9AD521C(uParam0->f_7, 1);
				unk_0x9B94F6169B0DAEFD(uParam0->f_7);
			}
			else
			{
				if (func_67(uParam0->f_1))
				{
					unk_0xBE20AB8238688965(&Global_94806, uParam0->f_1);
				}
				unk_0xB1B12B76553350D5(uParam0->f_7, func_13(), 1);
				if (unk_0x47DBF174A0CB9D55(uParam0->f_7, 0))
				{
					iVar5 = unk_0xA5D5B1042E8F47BD(uParam0->f_7, 0);
					if ((unk_0xAE06B9E39EBDE049(iVar5) && func_501(&iVar5, 0)) && !unk_0x80FF6C016CDB0FAF(iVar5, 0))
					{
						if (!func_121(uParam0->f_7, -828834893))
						{
							unk_0x9B94F6169B0DAEFD(uParam0->f_7);
							unk_0x0AB756271BADC8DF(uParam0->f_7, 0, 0);
						}
					}
				}
				if (unk_0x578C4EF320340AF7() < uParam0->f_37)
				{
					if (!func_799(uParam0, 1))
					{
						if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), uParam0->f_7, 20f, 20f, 20f, 0, 1, 0))
						{
							unk_0x94D1A5176CE89859(uParam0->f_7, 1f);
						}
					}
				}
				if (unk_0x910DFF8E55ABB8EC(uParam0->f_7, unk_0x9B0761B4C3EB8BC7(), 30f, 30f, 30f, 0, 1, 0))
				{
					if (!func_121(uParam0->f_7, 150319005))
					{
						if (!unk_0x47DBF174A0CB9D55(uParam0->f_7, 0) || !unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), unk_0xA5D5B1042E8F47BD(uParam0->f_7, 0), 0))
						{
							unk_0xA785552633ED203B(uParam0->f_7, unk_0x9B0761B4C3EB8BC7(), 3000, 0, 2);
						}
					}
					if (!func_121(unk_0x9B0761B4C3EB8BC7(), 150319005))
					{
						if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) || !unk_0xE0B3BC41DDA88DF0(uParam0->f_7, unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), 0))
						{
							unk_0xA785552633ED203B(unk_0x9B0761B4C3EB8BC7(), uParam0->f_7, 3000, 0, 2);
						}
					}
				}
				if (bVar0)
				{
					if (func_67(uParam0->f_1))
					{
						if (Local_49.f_703 != 11)
						{
							func_457(&(Local_49.f_703), 11, uParam0->f_1, 57);
							uParam0->f_39 = unk_0x578C4EF320340AF7() + 18000;
						}
					}
				}
			}
		}
		else if (*uParam0 == 3)
		{
			if (unk_0xAE06B9E39EBDE049(uParam0->f_9))
			{
				if (unk_0x8E805E09B82CCE5F(uParam0->f_9))
				{
					unk_0x1F8106DB8796859F(uParam0->f_9, 1, 1);
				}
				unk_0x315F7D8C33F0AB37(&(uParam0->f_9));
			}
			if (!unk_0xFE6F151E15A69B3A(uParam0->f_7, func_13()))
			{
				if (!unk_0xCED6B5226244381C(uParam0->f_7))
				{
					if (func_497(&(Local_49.f_589), uParam0->f_7, 25f, 0))
					{
						unk_0xE19B69814D61BBA5(uParam0->f_7, func_13());
					}
				}
			}
			if (func_504(uParam0))
			{
				func_798(uParam0, 0);
			}
			else if (func_496(uParam0->f_7, unk_0x9B0761B4C3EB8BC7(), 200f))
			{
				func_487(uParam0, 11);
			}
			else if (func_503(uParam0))
			{
				func_487(uParam0, 6);
			}
			else if (func_502(uParam0))
			{
				func_487(uParam0, 5);
				unk_0x59478CBBF96AF7D1(uParam0->f_7);
				unk_0x4E65320BC9AD521C(uParam0->f_7, 1);
				unk_0x9B94F6169B0DAEFD(uParam0->f_7);
			}
			else if (unk_0xFE6F151E15A69B3A(uParam0->f_7, func_13()))
			{
				if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) || unk_0xE0B3BC41DDA88DF0(uParam0->f_7, unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), 0))
				{
					func_487(uParam0, 2);
				}
				else if (unk_0x47DBF174A0CB9D55(uParam0->f_7, 0))
				{
					iVar6 = unk_0xA5D5B1042E8F47BD(uParam0->f_7, 0);
					if ((unk_0xAE06B9E39EBDE049(iVar6) && func_501(&iVar6, 0)) && !unk_0x80FF6C016CDB0FAF(iVar6, 0))
					{
						if (!func_121(uParam0->f_7, -828834893))
						{
							unk_0x9B94F6169B0DAEFD(uParam0->f_7);
							unk_0x0AB756271BADC8DF(uParam0->f_7, 0, 0);
						}
					}
				}
			}
		}
		else if (*uParam0 == 4)
		{
			if (unk_0xAE06B9E39EBDE049(uParam0->f_9))
			{
				if (unk_0x8E805E09B82CCE5F(uParam0->f_9))
				{
					unk_0x1F8106DB8796859F(uParam0->f_9, 1, 1);
				}
				unk_0x315F7D8C33F0AB37(&(uParam0->f_9));
			}
			if (unk_0x47DBF174A0CB9D55(uParam0->f_7, 0))
			{
				iVar7 = unk_0xA5D5B1042E8F47BD(uParam0->f_7, 0);
				if ((unk_0xAE06B9E39EBDE049(iVar7) && func_501(&iVar7, 0)) && !unk_0x80FF6C016CDB0FAF(iVar7, 0))
				{
					if (!func_121(uParam0->f_7, -828834893))
					{
						unk_0x9B94F6169B0DAEFD(uParam0->f_7);
						unk_0x0AB756271BADC8DF(uParam0->f_7, 0, 0);
					}
				}
			}
			if (uParam0->f_36 == 0)
			{
				if (func_456(&(Local_49.f_737)) && func_143(func_127(), uParam0->f_1, 50, &cVar8, &cVar12))
				{
					if (func_129(&(Local_49.f_259), &cVar8, &cVar12, 4, 1, 0, 0))
					{
						uParam0->f_36 = 1;
					}
				}
			}
		}
		else if (*uParam0 == 6)
		{
			if (unk_0xAE06B9E39EBDE049(uParam0->f_9))
			{
				if (unk_0x8E805E09B82CCE5F(uParam0->f_9))
				{
					unk_0x1F8106DB8796859F(uParam0->f_9, 1, 1);
				}
				unk_0x315F7D8C33F0AB37(&(uParam0->f_9));
			}
			if (func_495(uParam0))
			{
				unk_0x9B94F6169B0DAEFD(uParam0->f_7);
				if (!unk_0xFE6F151E15A69B3A(uParam0->f_7, func_13()))
				{
					if (!unk_0xCED6B5226244381C(uParam0->f_7))
					{
						if (func_497(&(Local_49.f_589), uParam0->f_7, 25f, 0))
						{
							unk_0xE19B69814D61BBA5(uParam0->f_7, func_13());
						}
					}
				}
				if (unk_0xFE6F151E15A69B3A(uParam0->f_7, func_13()))
				{
					func_487(uParam0, 2);
				}
				else
				{
					func_487(uParam0, 3);
				}
			}
			else if (!func_121(uParam0->f_7, 63541484))
			{
				unk_0x9B94F6169B0DAEFD(uParam0->f_7);
				unk_0xC67F9BF03C2472AB(uParam0->f_7, -1);
			}
		}
		else if (*uParam0 == 5)
		{
			if (unk_0xAE06B9E39EBDE049(uParam0->f_9))
			{
				if (unk_0x8E805E09B82CCE5F(uParam0->f_9))
				{
					unk_0x1F8106DB8796859F(uParam0->f_9, 1, 1);
				}
				unk_0x315F7D8C33F0AB37(&(uParam0->f_9));
			}
			if (func_494(uParam0))
			{
				unk_0x9B94F6169B0DAEFD(uParam0->f_7);
				unk_0x8C67218467ADC0C5(uParam0->f_7);
				if (!unk_0xFE6F151E15A69B3A(uParam0->f_7, func_13()))
				{
					if (!unk_0xCED6B5226244381C(uParam0->f_7))
					{
						if (func_497(&(Local_49.f_589), uParam0->f_7, 25f, 0))
						{
							unk_0xE19B69814D61BBA5(uParam0->f_7, func_13());
						}
					}
				}
				if (unk_0xFE6F151E15A69B3A(uParam0->f_7, func_13()))
				{
					func_487(uParam0, 2);
				}
				else
				{
					func_487(uParam0, 3);
				}
			}
			else
			{
				if (!func_121(uParam0->f_7, 1226945658))
				{
					uParam0->f_42 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1) };
					if (unk_0xC2169C00B643278B(uParam0->f_7, uParam0->f_42, 20f, 20f, 20f, 0, 1, 0))
					{
						uParam0->f_42.f_2 = (uParam0->f_42.f_2 + 40f);
					}
					unk_0x9B94F6169B0DAEFD(uParam0->f_7);
					unk_0xB962A2894382623D(uParam0->f_7, uParam0->f_42);
					uParam0->f_33 = unk_0x578C4EF320340AF7() + 1000;
				}
				else if (uParam0->f_33 < unk_0x578C4EF320340AF7() || unk_0xC2169C00B643278B(uParam0->f_7, uParam0->f_42, 20f, 20f, 20f, 0, 1, 0))
				{
					uParam0->f_42 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1) };
					if (unk_0xC2169C00B643278B(uParam0->f_7, uParam0->f_42, 20f, 20f, 20f, 0, 1, 0))
					{
						uParam0->f_42.f_2 = (uParam0->f_42.f_2 + 40f);
					}
					unk_0xBBF28B6DD0C7A166(uParam0->f_7, uParam0->f_42);
					uParam0->f_33 = unk_0x578C4EF320340AF7() + 1000;
				}
				if (unk_0x5B5B4E37C1CCA675(uParam0->f_7) == 0)
				{
					unk_0x71D8088CD2CD9748(uParam0->f_7);
				}
			}
		}
	}
}

int func_494(var uParam0)
{
	if (!unk_0xA16974805191D19C(uParam0->f_7))
	{
		if (unk_0x5B5B4E37C1CCA675(uParam0->f_7) == -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_495(var uParam0)
{
	int iVar0;
	
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (!unk_0x47DBF174A0CB9D55(uParam0->f_7, 0))
		{
			return 1;
		}
		else
		{
			iVar0 = unk_0xA5D5B1042E8F47BD(uParam0->f_7, 0);
			if (unk_0xAE06B9E39EBDE049(iVar0))
			{
				if (!unk_0xA16974805191D19C(iVar0))
				{
					return 1;
				}
				else if (unk_0xF3A639BEE7AADF55(iVar0) < 5f && unk_0x586155E4A4CB828E(iVar0) < 30f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_496(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, 1) };
	Var3 = { unk_0x3E4D3CCC220BDFB1(iParam1, 1) };
	Var0.x = (Var0.x - Var3.x);
	Var0.f_1 = (Var0.f_1 - Var3.f_1);
	Var0.f_2 = (Var0.f_2 - Var3.f_2);
	return (((Var0.x * Var0.x) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) > (fParam2 * fParam2);
}

int func_497(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam1))
	{
		if (unk_0x6E0C5E7AAF8B6214(iParam1))
		{
			iVar0 = unk_0xA5D5B1042E8F47BD(iParam1, 0);
			if (!unk_0xA59F96B50B97E63C(iVar0, 0))
			{
				if (unk_0x80FF6C016CDB0FAF(iVar0, 0))
				{
					if (unk_0xACBCFA3095C5A434(unk_0x9B0761B4C3EB8BC7(), iVar0))
					{
						if (func_500(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0xB0919F8F7C8097BD(unk_0x9B0761B4C3EB8BC7());
				if (unk_0xAE06B9E39EBDE049(iVar0))
				{
					if (func_499(iVar0, uParam0, 0))
					{
						if (unk_0x80FF6C016CDB0FAF(iVar0, 0))
						{
							if (func_498(iVar0))
							{
								return 1;
							}
						}
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
	return 0;
}

int func_498(int iParam0)
{
	float fVar0;
	
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		fVar0 = unk_0xF3A639BEE7AADF55(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_499(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0xAE06B9E39EBDE049(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0x99E61B3887CC8E71(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0x98E7D24BEECF7A35(iParam0, 1))
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
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!unk_0x98E7D24BEECF7A35(iParam0, 1))
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
	return 0;
}

int func_500(var uParam0)
{
	int iVar0;
	
	if (unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
	{
		iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
		if (func_499(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_501(int iParam0, int iParam1)
{
	if (unk_0xAE06B9E39EBDE049(*iParam0))
	{
		if (!unk_0xA59F96B50B97E63C(*iParam0, 0) || iParam1)
		{
			if (unk_0xE72C9284B5143451(*iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_502(var uParam0)
{
	int iVar0;
	
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		iVar0 = unk_0x5B5B4E37C1CCA675(unk_0x9B0761B4C3EB8BC7());
		if ((iVar0 == 1 || iVar0 == 2) || iVar0 == 3)
		{
			if (unk_0xA16974805191D19C(uParam0->f_7))
			{
				if (!unk_0x47DBF174A0CB9D55(uParam0->f_7, 0))
				{
					if (unk_0x586155E4A4CB828E(uParam0->f_7) > 50f)
					{
						if (unk_0x15D88F65956DC2F6(uParam0->f_7, joaat("gadget_parachute"), 0))
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

int func_503(var uParam0)
{
	int iVar0;
	
	if (unk_0x47DBF174A0CB9D55(uParam0->f_7, 0))
	{
		iVar0 = unk_0xA5D5B1042E8F47BD(uParam0->f_7, 0);
		if (unk_0xAE06B9E39EBDE049(iVar0))
		{
			if (unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) || !unk_0xACBCFA3095C5A434(unk_0x9B0761B4C3EB8BC7(), iVar0))
			{
				if (unk_0x586155E4A4CB828E(iVar0) > 50f)
				{
					if (!unk_0x15D88F65956DC2F6(uParam0->f_7, joaat("gadget_parachute"), 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_504(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	
	if (*uParam0 != 0 && !unk_0x5AEB5DDFFAD43CA5(uParam0->f_7))
	{
		if (!func_505(uParam0))
		{
			if (unk_0xA26A1295C5145A11(uParam0->f_7))
			{
				return 1;
			}
			else if (uParam0->f_1 == 14 || uParam0->f_1 == 17)
			{
				if (unk_0xCE990E643CD9D0E5(Global_94806, 3))
				{
					return 1;
				}
				if (unk_0xA71AC4B230E98432(unk_0x9B0761B4C3EB8BC7(), 0, 2) && !unk_0xA71AC4B230E98432(unk_0x9B0761B4C3EB8BC7(), 0, 1))
				{
					return 1;
				}
				if (unk_0xA71AC4B230E98432(uParam0->f_7, 0, 2) && !unk_0xA71AC4B230E98432(uParam0->f_7, 0, 1))
				{
					return 1;
				}
				if (!unk_0x47DBF174A0CB9D55(uParam0->f_7, 0))
				{
					if (unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0))
					{
						Var0 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1) };
						Var3 = { Var0 - Vector(50f, 50f, 50f) };
						Var6 = { Var0 + Vector(50f, 50f, 50f) };
						if (unk_0x2975580CCA617F3B(Var3, Var6))
						{
							return 1;
						}
					}
				}
				if (unk_0x47DBF174A0CB9D55(uParam0->f_7, 0))
				{
					iVar9 = unk_0xA5D5B1042E8F47BD(uParam0->f_7, 0);
					if (unk_0xAE06B9E39EBDE049(iVar9))
					{
						if (unk_0xA59F96B50B97E63C(iVar9, 0) || unk_0x0922C2E075A5F18C(iVar9))
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

int func_505(var uParam0)
{
	int iVar0;
	
	if (unk_0x47DBF174A0CB9D55(uParam0->f_7, 0))
	{
		iVar0 = unk_0xA5D5B1042E8F47BD(uParam0->f_7, 0);
		if (unk_0xAE06B9E39EBDE049(iVar0))
		{
			if (unk_0x586155E4A4CB828E(iVar0) > 5f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_506(var uParam0)
{
	if (!unk_0xCED6B5226244381C(uParam0->f_7) && !unk_0x96335C06FE469AF4(uParam0->f_7))
	{
		if (unk_0x47DBF174A0CB9D55(uParam0->f_7, 0))
		{
			func_511(uParam0);
		}
		else if ((func_154(unk_0x9B0761B4C3EB8BC7()) && !unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0)) && func_510(unk_0x9B0761B4C3EB8BC7(), uParam0->f_7, 15f))
		{
			func_509(uParam0);
		}
		else
		{
			func_507(uParam0);
		}
	}
}

void func_507(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	char* sVar7;
	char* sVar23;
	
	if (func_398(uParam0->f_7, uParam0->f_21, 1.5f))
	{
		if (!func_121(uParam0->f_7, 713668775))
		{
			unk_0x3C1B180EE30D36EF(uParam0->f_7, uParam0->f_21, 2f, -1, 0.25f, 512, 1193033728);
		}
	}
	else
	{
		Var0 = { unk_0x2E6A35AC161797A7(uParam0->f_7) };
		Var3 = { func_34(uParam0->f_24 - uParam0->f_21) };
		fVar6 = 0f;
		if ((Var0.x != 0f || Var0.f_1 != 0f) && (Var3.x != 0f || Var3.f_1 != 0f))
		{
			fVar6 = unk_0xED4B54A984E6E361(Var0.x, Var0.f_1, Var3.x, Var3.f_1);
		}
		if (fVar6 > 20f || !func_822(uParam0))
		{
			if (!func_121(uParam0->f_7, 1464580341) && !func_121(uParam0->f_7, -2017877118))
			{
				unk_0xB53E642F4F50E7C0(uParam0->f_7, uParam0->f_24, 6000);
			}
		}
		else if (!func_121(uParam0->f_7, -2017877118))
		{
			func_57(uParam0, &sVar7);
			func_508(uParam0, &sVar23);
			if (uParam0->f_1 == 17)
			{
				unk_0x756D74A3EF0AB788(uParam0->f_7, &sVar7, &sVar23, 1.5f, -1.5f, -1, 1, 0, 0, 0, 0);
			}
			else
			{
				unk_0x756D74A3EF0AB788(uParam0->f_7, &sVar7, &sVar23, 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
			}
		}
	}
}

int func_508(var uParam0, char* sParam1)
{
	int iVar0;
	
	if (uParam0->f_1 == 0)
	{
		iVar0 = unk_0x344C570D6F8700DF(0, 3);
		if (iVar0 == 0)
		{
			StringCopy(sParam1, "impatient_idle_a", 64);
		}
		else if (iVar0 == 1)
		{
			StringCopy(sParam1, "impatient_idle_b", 64);
		}
		else
		{
			StringCopy(sParam1, "impatient_idle_c", 64);
		}
		return 1;
	}
	else if (uParam0->f_1 == 1)
	{
		iVar0 = unk_0x344C570D6F8700DF(0, 4);
		if (iVar0 == 0)
		{
			StringCopy(sParam1, "impatient_idle_a", 64);
		}
		else if (iVar0 == 1)
		{
			StringCopy(sParam1, "impatient_idle_b", 64);
		}
		else if (iVar0 == 2)
		{
			StringCopy(sParam1, "impatient_idle_c", 64);
		}
		else
		{
			StringCopy(sParam1, "impatient_idle_d", 64);
		}
		return 1;
	}
	else if (uParam0->f_1 == 2)
	{
		iVar0 = unk_0x344C570D6F8700DF(0, 3);
		if (iVar0 == 0)
		{
			StringCopy(sParam1, "trevor_impatient_wait_1", 64);
		}
		else if (iVar0 == 1)
		{
			StringCopy(sParam1, "trevor_impatient_wait_2", 64);
		}
		else if (iVar0 == 2)
		{
			StringCopy(sParam1, "trevor_impatient_wait_3", 64);
		}
		else
		{
			StringCopy(sParam1, "trevor_impatient_wait_4", 64);
		}
		return 1;
	}
	else if (uParam0->f_1 == 19)
	{
		iVar0 = unk_0x344C570D6F8700DF(0, 3);
		if (iVar0 == 0)
		{
			StringCopy(sParam1, "idle_a_lamar", 64);
		}
		else if (iVar0 == 1)
		{
			StringCopy(sParam1, "idle_b_lamar", 64);
		}
		else
		{
			StringCopy(sParam1, "idle_c_lamar", 64);
		}
		return 1;
	}
	else if (uParam0->f_1 == 14)
	{
		iVar0 = unk_0x344C570D6F8700DF(0, 4);
		if (iVar0 == 0)
		{
			StringCopy(sParam1, "idle_a", 64);
		}
		else if (iVar0 == 1)
		{
			StringCopy(sParam1, "idle_b", 64);
		}
		else if (iVar0 == 2)
		{
			StringCopy(sParam1, "idle_c", 64);
		}
		else
		{
			StringCopy(sParam1, "idle_d", 64);
		}
		return 1;
	}
	else if (uParam0->f_1 == 17)
	{
		iVar0 = unk_0x344C570D6F8700DF(0, 2);
		if (iVar0 == 0)
		{
			StringCopy(sParam1, "impatient_idle_a", 64);
		}
		else
		{
			StringCopy(sParam1, "impatient_idle_b", 64);
		}
		return 1;
	}
	return 0;
}

void func_509(var uParam0)
{
	if (!func_121(uParam0->f_7, 1227113341))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(Local_49.f_3.f_7))
		{
			unk_0xE021DCE1063D5DC2(uParam0->f_7, Local_49.f_3.f_7, -1, 5f, 1073741824, 1073741824, 0);
		}
	}
}

bool func_510(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, 1) };
	Var3 = { unk_0x3E4D3CCC220BDFB1(iParam1, 1) };
	Var0.x = (Var0.x - Var3.x);
	Var0.f_1 = (Var0.f_1 - Var3.f_1);
	Var0.f_2 = (Var0.f_2 - Var3.f_2);
	return (((Var0.x * Var0.x) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= (fParam2 * fParam2);
}

void func_511(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	func_8(&(uParam0->f_12));
	iVar0 = unk_0xA5D5B1042E8F47BD(uParam0->f_7, 0);
	Var1 = { Global_94256[uParam0->f_2 /*18*/].f_13 };
	fVar4 = func_512(uParam0->f_7, Var1, 1);
	iVar5 = 512 | 256 | 32 | 2;
	iVar6 = iVar5 | 524288 | 8 | 4 | 16;
	iVar7 = iVar5 | 1;
	fVar8 = 0f;
	if (unk_0xF3A639BEE7AADF55(uParam0->f_7) <= 1f)
	{
		if (!func_380(&(uParam0->f_29)))
		{
			func_8(&(uParam0->f_29));
		}
		else
		{
			fVar8 = func_378(&(uParam0->f_29));
		}
	}
	else
	{
		func_7(&(uParam0->f_29));
	}
	if ((fVar4 < 2f || (fVar4 < 15f && fVar8 > 1f)) || (fVar4 < 20f && fVar8 > 6f))
	{
		if (!func_121(uParam0->f_7, -828834893))
		{
			unk_0x9B94F6169B0DAEFD(uParam0->f_7);
			if (unk_0xAE06B9E39EBDE049(iVar0))
			{
				unk_0xC160551F55D6365A(iVar0, 0, 1, 0);
			}
			unk_0x0AB756271BADC8DF(uParam0->f_7, 0, 0);
		}
	}
	else if (fVar4 < 10f)
	{
		if (!func_121(uParam0->f_7, -1273030092) || uParam0->f_32 != 0)
		{
			unk_0x9B94F6169B0DAEFD(uParam0->f_7);
			unk_0x47107451B20C1093(uParam0->f_7, iVar0, Var1, 4, 10f, iVar7, 2f, 10f, 1);
			uParam0->f_32 = 0;
		}
	}
	else
	{
		if (!func_121(uParam0->f_7, -1273030092) || uParam0->f_32 != 1)
		{
			unk_0x9B94F6169B0DAEFD(uParam0->f_7);
			unk_0x47107451B20C1093(uParam0->f_7, iVar0, Var1, 4, 10f, iVar6, 2f, 20f, 1);
			uParam0->f_32 = 1;
		}
		if (fVar4 < 30f)
		{
			unk_0xB357921D1DFAA4F8(uParam0->f_7, 10f);
		}
		else
		{
			unk_0xB357921D1DFAA4F8(uParam0->f_7, 18f);
		}
	}
}

float func_512(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, 0) };
	}
	return unk_0x272784C60C397DB6(Var0, Param1, iParam4);
}

int func_513(var uParam0)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	bool bVar15;
	struct<82> Var16;
	bool bVar114;
	
	if (uParam0->f_2 != 25)
	{
		if (func_399(unk_0x9B0761B4C3EB8BC7(), uParam0->f_21, 30f))
		{
			Var0 = { Global_94256[uParam0->f_2 /*18*/].f_9 };
			fVar3 = Global_94256[uParam0->f_2 /*18*/].f_12;
			if ((Var0.x == 0f && Var0.f_1 == 0f) && Var0.f_2 == 0f)
			{
				Var4 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1) };
				if (unk_0xB4A07AE91EF58820(&Var4, &Var7, &Var10, 0f, 180f, 200f, false, 1, 0) && unk_0x272784C60C397DB6(Var4, Var7, 1) < 250f)
				{
					Var10 = { Var4 - Var7 };
					Var0 = { Var7 };
					fVar3 = unk_0x9075769DD4F148B7(Var10.x, Var10.f_1);
				}
			}
			if ((Var0.x != 0f || Var0.f_1 != 0f) || Var0.f_2 != 0f)
			{
				iVar14 = joaat("asea");
				bVar15 = false;
				Var16.f_11 = 12;
				Var16.f_31 = 49;
				Var16.f_81 = 2;
				if (uParam0->f_49)
				{
					if (((!func_67(uParam0->f_1) || Global_98654[uParam0->f_1] != 2) || Global_98359[uParam0->f_1 /*98*/] == 0) || func_424(Global_98359[uParam0->f_1 /*98*/]))
					{
						uParam0->f_49 = 0;
					}
				}
				if (uParam0->f_49)
				{
					iVar14 = Global_98359[uParam0->f_1 /*98*/];
					iVar13 = func_39(uParam0->f_1);
				}
				else if (func_67(uParam0->f_1))
				{
					func_118(uParam0->f_1, &Var16, 1);
					iVar14 = Var16;
					iVar13 = func_39(uParam0->f_1);
				}
				else if (uParam0->f_1 == 14)
				{
					func_117(uParam0->f_1, &Var16, 2);
					iVar14 = Var16;
					iVar13 = func_126(uParam0->f_1);
				}
				else
				{
					func_117(uParam0->f_1, &Var16, 1);
					iVar14 = Var16;
					iVar13 = func_126(uParam0->f_1);
				}
				if (iVar14 == 0)
				{
					iVar14 = joaat("asea");
				}
				unk_0x78FCB2E22C41B9D5(iVar13);
				unk_0x78FCB2E22C41B9D5(iVar14);
				if (unk_0x7D167B9A0CCDA347(iVar14) && unk_0x7D167B9A0CCDA347(iVar13))
				{
					if (func_67(uParam0->f_1))
					{
						bVar114 = false;
						if (uParam0->f_49)
						{
							bVar114 = func_792(&(uParam0->f_8), uParam0->f_1, Var0, fVar3, 1, &(Global_98359[uParam0->f_1 /*98*/]));
						}
						else
						{
							bVar114 = func_740(&(uParam0->f_8), uParam0->f_1, Var0, fVar3, 1, 1);
						}
						if (bVar114)
						{
							bVar15 = func_533(&(uParam0->f_7), uParam0->f_1, uParam0->f_8, -1, 1, 0, 0);
						}
					}
					else if (func_524(&(uParam0->f_8), uParam0->f_1, Var0, fVar3, 1, 1))
					{
						bVar15 = func_522(&(uParam0->f_7), uParam0->f_1, uParam0->f_8, -1, 1);
						if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_7) && uParam0->f_1 == 17)
						{
							func_516(uParam0->f_7, 83);
						}
					}
				}
				if (bVar15)
				{
					if (uParam0->f_49)
					{
					}
					if (unk_0xAE06B9E39EBDE049(uParam0->f_8) && !unk_0xA59F96B50B97E63C(uParam0->f_8, 0))
					{
						unk_0x03D382CB0B44E2FC(uParam0->f_8, Var0, 1, 0, 0, 1);
						unk_0xE922BAA80E8F9324(uParam0->f_8, fVar3);
						unk_0xB11D151E210D4FAC(uParam0->f_8, 1084227584);
					}
					func_514(uParam0, &(Local_49.f_259), 0);
					uParam0->f_48 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_514(var uParam0, var uParam1, bool bParam2)
{
	if (*uParam0 != 0 && *uParam0 < 7)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_7))
		{
			if (bParam2)
			{
				unk_0xBB7976F6FB9C9DD2(uParam0->f_7);
				unk_0x1A92D12C72BE9803(uParam0->f_7);
				if (!func_55(4, uParam0->f_7))
				{
					func_515(4, uParam0->f_7);
				}
				func_146(uParam1, uParam0->f_1, uParam0->f_7, 1);
				unk_0x694113444F21E39F(uParam0->f_7, 32, false);
			}
			else
			{
				unk_0xBB7976F6FB9C9DD2(uParam0->f_7);
				unk_0x1A92D12C72BE9803(uParam0->f_7);
				uParam0->f_41 = unk_0x4F5F2FB7AE0EB7AB(uParam0->f_7);
				if (!func_55(4, uParam0->f_7))
				{
					func_515(4, uParam0->f_7);
				}
				func_146(uParam1, uParam0->f_1, uParam0->f_7, 1);
				unk_0x0DC39BE87E4C5599(uParam0->f_7, 0);
				unk_0xD3D9D7C84656DAE5(uParam0->f_7, 1862763509);
				unk_0x6A4846EF125EA7E6(uParam0->f_7, 1);
				unk_0x7C47E49129337557(uParam0->f_7, 1);
				unk_0xC3817373506BDB8A(uParam0->f_7, 1);
				unk_0x88F7C275DBFB6FF4(uParam0->f_7, 1);
				unk_0xEDBD99D0CBB76A54(uParam0->f_7, 1);
				unk_0xDE7C7B8F0806F931(uParam0->f_7, 1);
				unk_0x3BCF7BA407B9A62B(uParam0->f_7, 1);
				unk_0x389E871B0B67CCCC(uParam0->f_7, 0);
				unk_0x911BA6A7B46C75BA(uParam0->f_7, 3);
				unk_0x694113444F21E39F(uParam0->f_7, 107, true);
				unk_0x694113444F21E39F(uParam0->f_7, 32, false);
				unk_0x2CE840C9FCC03A58(uParam0->f_7, 1);
				unk_0x694113444F21E39F(uParam0->f_7, 174, true);
				unk_0x694113444F21E39F(uParam0->f_7, 182, true);
				unk_0xEB3B17B6D0100376(uParam0->f_7, 0);
				unk_0xB1AC1F996633F5B4(uParam0->f_7, 0);
				if (unk_0x5353C71165061403(uParam0->f_7))
				{
					unk_0x042EA371AD4AE883(uParam0->f_7, 0, -1, 0);
				}
				if (uParam0->f_1 != 14 && uParam0->f_1 != 17)
				{
					if (!uParam0->f_50)
					{
						unk_0x4E65320BC9AD521C(uParam0->f_7, 1);
					}
					else
					{
						unk_0x4E65320BC9AD521C(uParam0->f_7, 0);
					}
					unk_0x694113444F21E39F(uParam0->f_7, 118, false);
					unk_0x6673CC701BC8E9C1(uParam0->f_7, 5, 1);
					unk_0x6673CC701BC8E9C1(uParam0->f_7, 17, 0);
					unk_0x6673CC701BC8E9C1(uParam0->f_7, 23, 1);
					unk_0x6673CC701BC8E9C1(uParam0->f_7, 30, 0);
					unk_0x6673CC701BC8E9C1(uParam0->f_7, 46, 1);
					unk_0x6673CC701BC8E9C1(uParam0->f_7, 4, 1);
					unk_0x6673CC701BC8E9C1(uParam0->f_7, 2, 1);
					unk_0x6673CC701BC8E9C1(uParam0->f_7, 0, 1);
					unk_0x6673CC701BC8E9C1(uParam0->f_7, 1, 1);
					unk_0x6673CC701BC8E9C1(uParam0->f_7, 3, 0);
					unk_0x6AC7395A8E313A46(uParam0->f_7, 2, 0);
					unk_0x6AC7395A8E313A46(uParam0->f_7, 512, 0);
					unk_0x6AC7395A8E313A46(uParam0->f_7, 1024, 1);
					unk_0x6AC7395A8E313A46(uParam0->f_7, 2048, 0);
					unk_0x6AC7395A8E313A46(uParam0->f_7, 16384, 0);
					unk_0x6AC7395A8E313A46(uParam0->f_7, 65536, 1);
					unk_0x6AC7395A8E313A46(uParam0->f_7, 131072, 1);
					unk_0x3EA9EB775DF15E76(uParam0->f_7, 2);
					unk_0x73745F8F1D07995D(uParam0->f_7, 2);
				}
				else
				{
					unk_0x4E65320BC9AD521C(uParam0->f_7, 1);
					unk_0x6673CC701BC8E9C1(uParam0->f_7, 5, 0);
					unk_0x6673CC701BC8E9C1(uParam0->f_7, 0, 0);
					unk_0x6AC7395A8E313A46(uParam0->f_7, 512, 1);
					unk_0x6AC7395A8E313A46(uParam0->f_7, 1, 0);
					unk_0x6AC7395A8E313A46(uParam0->f_7, 4, 1);
				}
			}
		}
	}
}

void func_515(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	if (!unk_0xAE06B9E39EBDE049(iParam1))
	{
		return;
	}
	if (func_55(iParam0, iParam1))
	{
		return;
	}
	if (Global_40754[iParam0 /*31*/].f_24 < 5)
	{
		Global_40754[iParam0 /*31*/].f_25[Global_40754[iParam0 /*31*/].f_24] = iParam1;
		Global_40754[iParam0 /*31*/].f_24++;
	}
	else
	{
		bVar2 = false;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			uVar1 = Global_40754[iParam0 /*31*/].f_25[iVar0];
			if (!unk_0xAE06B9E39EBDE049(uVar1) || unk_0x5AEB5DDFFAD43CA5(iVar1))
			{
				Global_40754[iParam0 /*31*/].f_25[iVar0] = iParam1;
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

void func_516(int iParam0, int iParam1)
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
	var uVar12;
	
	if (func_520(iParam1, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5, &iVar6, &iVar7, &iVar8, &iVar9, &iVar10, &iVar11, &uVar12))
	{
		func_518(iParam0, iVar0);
		func_518(iParam0, iVar1);
		func_518(iParam0, iVar2);
		func_518(iParam0, iVar3);
		func_518(iParam0, iVar4);
		func_518(iParam0, iVar5);
		func_518(iParam0, iVar6);
		func_518(iParam0, iVar7);
		func_518(iParam0, iVar8);
		func_518(iParam0, iVar9);
		func_518(iParam0, iVar10);
		func_518(iParam0, iVar11);
		if (func_517(uVar12, 1))
		{
			unk_0x6BD562D713BA3F70(iParam0);
		}
		if (func_517(uVar12, 2))
		{
			unk_0x6BD562D713BA3F70(iParam0);
			unk_0x78024EFD31A7FAD4(iParam0, 1, 0, 0, false);
		}
		if (func_517(uVar12, 4))
		{
			unk_0x6BD562D713BA3F70(iParam0);
			unk_0x78024EFD31A7FAD4(iParam0, 1, 1, 0, false);
		}
	}
}

bool func_517(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_518(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = 0;
	if (func_519(iParam1, &uVar4, &iVar0, &iVar1, &iVar2))
	{
		unk_0x45F588C0DD767737(iParam0, iVar0, iVar1, iVar2, iVar3);
	}
}

int func_519(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 1;
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 1:
			*uParam1 = 1;
			*iParam2 = 2;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 2:
			*uParam1 = 1;
			*iParam2 = 2;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 3:
			*uParam1 = 1;
			*iParam2 = 2;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 4:
			*uParam1 = 1;
			*iParam2 = 2;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 5:
			*uParam1 = 1;
			*iParam2 = 2;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		
		case 6:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 7:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 0;
			*iParam4 = 1;
			return 1;
			break;
		
		case 8:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 9:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 1;
			*iParam4 = 1;
			return 1;
			break;
		
		case 10:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 11:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 12:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		
		case 13:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 5;
			*iParam4 = 0;
			return 1;
			break;
		
		case 14:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 15:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 16:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 17:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 18:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		
		case 19:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 5;
			*iParam4 = 0;
			return 1;
			break;
		
		case 20:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 6;
			*iParam4 = 0;
			return 1;
			break;
		
		case 21:
			*uParam1 = 1;
			*iParam2 = 6;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 22:
			*uParam1 = 1;
			*iParam2 = 6;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 23:
			*uParam1 = 1;
			*iParam2 = 6;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 25:
			*uParam1 = 1;
			*iParam2 = 8;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 26:
			*uParam1 = 1;
			*iParam2 = 8;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 27:
			*uParam1 = 1;
			*iParam2 = 8;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 28:
			*uParam1 = 1;
			*iParam2 = 8;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 24:
			*uParam1 = 1;
			*iParam2 = 5;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 29:
			*uParam1 = 1;
			*iParam2 = 9;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 31:
			*uParam1 = 1;
			*iParam2 = 1;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 30:
			*uParam1 = 1;
			*iParam2 = 10;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 32:
			*uParam1 = 1;
			*iParam2 = 7;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 33:
			*uParam1 = 1;
			*iParam2 = 11;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
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
			*uParam1 = 1;
			*iParam2 = 12;
			return 0;
			break;
		
		case 44:
			*uParam1 = 2;
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 45:
			*uParam1 = 2;
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 1;
			return 1;
			break;
		
		case 46:
			*uParam1 = 2;
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 2;
			return 1;
			break;
		
		case 47:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 48:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 0;
			*iParam4 = 1;
			return 1;
			break;
		
		case 49:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 50:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 51:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 52:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		
		case 53:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 5;
			*iParam4 = 0;
			return 1;
			break;
		
		case 54:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 55:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 0;
			*iParam4 = 1;
			return 1;
			break;
		
		case 56:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 57:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 58:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 59:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		
		case 60:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 5;
			*iParam4 = 0;
			return 1;
			break;
		
		case 61:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 6;
			*iParam4 = 0;
			return 1;
			break;
		
		case 62:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 7;
			*iParam4 = 0;
			return 1;
			break;
		
		case 63:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 64:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 1;
			return 1;
			break;
		
		case 65:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 66:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 67:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 68:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		
		case 69:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 5;
			*iParam4 = 0;
			return 1;
			break;
		
		case 70:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 6;
			*iParam4 = 0;
			return 1;
			break;
		
		case 73:
			*uParam1 = 2;
			*iParam2 = 8;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 71:
			*uParam1 = 2;
			*iParam2 = 6;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 72:
			*uParam1 = 2;
			*iParam2 = 5;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 74:
			*uParam1 = 2;
			*iParam2 = 9;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 75:
			*uParam1 = 2;
			*iParam2 = 10;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 76:
			*uParam1 = 2;
			*iParam2 = 1;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 77:
			*uParam1 = 2;
			*iParam2 = 7;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 78:
			*uParam1 = 2;
			*iParam2 = 11;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case joaat("MPSV_LP0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
			*uParam1 = 2;
			*iParam2 = 12;
			return 0;
			break;
		
		case 89:
			*uParam1 = 0;
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 90:
			*uParam1 = 0;
			*iParam2 = 2;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 91:
			*uParam1 = 0;
			*iParam2 = 2;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 92:
			*uParam1 = 0;
			*iParam2 = 2;
			*iParam3 = 1;
			*iParam4 = 1;
			return 1;
			break;
		
		case 93:
			*uParam1 = 0;
			*iParam2 = 2;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 94:
			*uParam1 = 0;
			*iParam2 = 2;
			*iParam3 = 2;
			*iParam4 = 1;
			return 1;
			break;
		
		case 95:
			*uParam1 = 0;
			*iParam2 = 2;
			*iParam3 = 2;
			*iParam4 = 2;
			return 1;
			break;
		
		case 96:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 97:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 98:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 99:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 100:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		
		case 101:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 4;
			*iParam4 = 1;
			return 1;
			break;
		
		case 102:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 5;
			*iParam4 = 0;
			return 1;
			break;
		
		case 103:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 6;
			*iParam4 = 0;
			return 1;
			break;
		
		case 104:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 105:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 1;
			return 1;
			break;
		
		case 106:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 2;
			return 1;
			break;
		
		case 107:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 108:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 1;
			*iParam4 = 1;
			return 1;
			break;
		
		case 109:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 110:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 111:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 112:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 113:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 114:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 115:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		
		case 116:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 4;
			*iParam4 = 1;
			return 1;
			break;
		
		case 117:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 4;
			*iParam4 = 2;
			return 1;
			break;
		
		case 118:
			*uParam1 = 0;
			*iParam2 = 5;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 119:
			*uParam1 = 0;
			*iParam2 = 8;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 120:
			*uParam1 = 0;
			*iParam2 = 9;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 121:
			*uParam1 = 0;
			*iParam2 = 10;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 122:
			*uParam1 = 0;
			*iParam2 = 10;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 123:
			*uParam1 = 0;
			*iParam2 = 10;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 124:
			*uParam1 = 0;
			*iParam2 = 10;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 125:
			*uParam1 = 0;
			*iParam2 = 10;
			*iParam3 = 4;
			*iParam4 = 0;
			return 1;
			break;
		
		case 126:
			*uParam1 = 0;
			*iParam2 = 10;
			*iParam3 = 5;
			*iParam4 = 0;
			return 1;
			break;
		
		case 127:
			*uParam1 = 0;
			*iParam2 = 1;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 128:
			*uParam1 = 0;
			*iParam2 = 1;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 129:
			*uParam1 = 0;
			*iParam2 = 7;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 130:
			*uParam1 = 0;
			*iParam2 = 11;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
			*uParam1 = 0;
			*iParam2 = 12;
			return 0;
			break;
		
		case 136:
			*uParam1 = 13;
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 137:
			*uParam1 = 13;
			*iParam2 = 2;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 138:
			*uParam1 = 13;
			*iParam2 = 3;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 139:
			*uParam1 = 13;
			*iParam2 = 3;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 140:
			*uParam1 = 13;
			*iParam2 = 3;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 141:
			*uParam1 = 13;
			*iParam2 = 3;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 142:
			*uParam1 = 13;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 143:
			*uParam1 = 13;
			*iParam2 = 4;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 144:
			*uParam1 = 13;
			*iParam2 = 4;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 145:
			*uParam1 = 13;
			*iParam2 = 4;
			*iParam3 = 3;
			*iParam4 = 0;
			return 1;
			break;
		
		case 146:
			*uParam1 = 13;
			*iParam2 = 6;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 147:
			*uParam1 = 13;
			*iParam2 = 6;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 148:
			*uParam1 = 13;
			*iParam2 = 5;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 149:
			*uParam1 = 13;
			*iParam2 = 5;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 150:
			*uParam1 = 13;
			*iParam2 = 5;
			*iParam3 = 2;
			*iParam4 = 0;
			return 1;
			break;
		
		case 151:
			*uParam1 = 13;
			*iParam2 = 8;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 152:
			*uParam1 = 13;
			*iParam2 = 8;
			*iParam3 = 1;
			*iParam4 = 0;
			return 1;
			break;
		
		case 153:
			*uParam1 = 13;
			*iParam2 = 9;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 154:
			*uParam1 = 13;
			*iParam2 = 10;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 155:
			*uParam1 = 13;
			*iParam2 = 1;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 156:
			*uParam1 = 13;
			*iParam2 = 7;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 157:
			*uParam1 = 13;
			*iParam2 = 11;
			*iParam3 = 0;
			*iParam4 = 0;
			return 1;
			break;
		
		case 158:
		case 159:
		case 160:
		case 161:
			*uParam1 = 13;
			*iParam2 = 12;
			return 0;
			break;
	}
	*uParam1 = 16;
	*iParam2 = -1;
	*iParam3 = -1;
	*iParam4 = -1;
	return 0;
}

int func_520(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	switch (iParam0)
	{
		case 34:
			*uParam1 = 0;
			*uParam2 = 4;
			*uParam3 = 12;
			*uParam4 = 18;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_521(uParam13, 1);
			return 1;
			break;
		
		case 35:
			*uParam1 = 0;
			*uParam2 = 2;
			*uParam3 = 8;
			*uParam4 = 15;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 26;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_521(uParam13, 1);
			return 1;
			break;
		
		case 36:
			*uParam1 = 0;
			*uParam2 = 5;
			*uParam3 = 13;
			*uParam4 = 15;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_521(uParam13, 1);
			return 1;
			break;
		
		case 37:
			*uParam1 = 0;
			*uParam2 = 5;
			*uParam3 = 13;
			*uParam4 = 20;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_521(uParam13, 1);
			return 1;
			break;
		
		case 38:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 14;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_521(uParam13, 1);
			return 1;
			break;
		
		case 39:
			*uParam1 = 0;
			*uParam2 = 5;
			*uParam3 = 7;
			*uParam4 = 16;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_521(uParam13, 4);
			return 1;
			break;
		
		case 40:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 15;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 26;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_521(uParam13, 1);
			return 1;
			break;
		
		case 41:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 19;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 26;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_521(uParam13, 1);
			return 1;
			break;
		
		case 42:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 17;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_521(uParam13, 1);
			return 1;
			break;
		
		case 43:
			*uParam1 = 0;
			*uParam2 = 3;
			*uParam3 = 10;
			*uParam4 = 16;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_521(uParam13, 1);
			return 1;
			break;
		
		case joaat("MPSV_LP0_31"):
			*uParam1 = 44;
			*uParam2 = 53;
			*uParam3 = 56;
			*uParam4 = 65;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_521(uParam13, 1);
			return 1;
			break;
		
		case 80:
			*uParam1 = 44;
			*uParam2 = 47;
			*uParam3 = 54;
			*uParam4 = 63;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_521(uParam13, 1);
			return 1;
			break;
		
		case 81:
			*uParam1 = 44;
			*uParam2 = 48;
			*uParam3 = 55;
			*uParam4 = 64;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_521(uParam13, 1);
			return 1;
			break;
		
		case 82:
			*uParam1 = 45;
			*uParam2 = 52;
			*uParam3 = 60;
			*uParam4 = 69;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_521(uParam13, 2);
			return 1;
			break;
		
		case 83:
			*uParam1 = 45;
			*uParam2 = 52;
			*uParam3 = 60;
			*uParam4 = 69;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_521(uParam13, 1);
			return 1;
			break;
		
		case 84:
			*uParam1 = 46;
			*uParam2 = 51;
			*uParam3 = 62;
			*uParam4 = 66;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_521(uParam13, 4);
			return 1;
			break;
		
		case 85:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 58;
			*uParam4 = 67;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_521(uParam13, 1);
			return 1;
			break;
		
		case 86:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 56;
			*uParam4 = 65;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_521(uParam13, 1);
			return 1;
			break;
		
		case 87:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 61;
			*uParam4 = 70;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_521(uParam13, 2);
			return 1;
			break;
		
		case 88:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 57;
			*uParam4 = 66;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_521(uParam13, 1);
			return 1;
			break;
		
		case 131:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 96;
			*uParam4 = 104;
			*uParam5 = 111;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 121;
			*uParam10 = 127;
			*uParam11 = 129;
			*uParam12 = 130;
			func_521(uParam13, 1);
			return 1;
			break;
		
		case 132:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 102;
			*uParam4 = 110;
			*uParam5 = 115;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 123;
			*uParam10 = 128;
			*uParam11 = 129;
			*uParam12 = 130;
			func_521(uParam13, 1);
			return 1;
			break;
		
		case 133:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 97;
			*uParam4 = 105;
			*uParam5 = 114;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 122;
			*uParam10 = 127;
			*uParam11 = 129;
			*uParam12 = 130;
			func_521(uParam13, 1);
			return 1;
			break;
		
		case 134:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 96;
			*uParam4 = 104;
			*uParam5 = 114;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 121;
			*uParam10 = 127;
			*uParam11 = 129;
			*uParam12 = 130;
			func_521(uParam13, 1);
			return 1;
			break;
		
		case 135:
			*uParam1 = 89;
			*uParam2 = 95;
			*uParam3 = 101;
			*uParam4 = 108;
			*uParam5 = 116;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 126;
			*uParam10 = 128;
			*uParam11 = 129;
			*uParam12 = 130;
			func_521(uParam13, 1);
			return 1;
			break;
		
		case 158:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 138;
			*uParam4 = 142;
			*uParam5 = 146;
			*uParam6 = 148;
			*uParam7 = 151;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			func_521(uParam13, 1);
			return 1;
			break;
		
		case 159:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 138;
			*uParam4 = 142;
			*uParam5 = 146;
			*uParam6 = 148;
			*uParam7 = 152;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			func_521(uParam13, 1);
			return 1;
			break;
		
		case 160:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 141;
			*uParam4 = 145;
			*uParam5 = 147;
			*uParam6 = 150;
			*uParam7 = 152;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			func_521(uParam13, 1);
			return 1;
			break;
		
		case 161:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 140;
			*uParam4 = 144;
			*uParam5 = 147;
			*uParam6 = 148;
			*uParam7 = 152;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			func_521(uParam13, 1);
			return 1;
			break;
	}
	return 0;
}

void func_521(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_522(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_67(iParam1))
	{
		iVar0 = func_126(iParam1);
		unk_0x78FCB2E22C41B9D5(iVar0);
		if (unk_0x7D167B9A0CCDA347(iVar0))
		{
			if (unk_0xAE06B9E39EBDE049(*uParam0))
			{
				unk_0x586DDC617E714637(uParam0);
			}
			if (unk_0xAE06B9E39EBDE049(iParam2) && unk_0x80FF6C016CDB0FAF(iParam2, 0))
			{
				*uParam0 = unk_0x6A7A2C83BD302BA4(iParam2, 26, iVar0, iParam3, 0, 0);
				unk_0x6D2F52D05ED0E1F6(*uParam0);
				func_523(*uParam0, iParam1);
				if (bParam4)
				{
					unk_0x74528AC0906CBABE(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_523(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_94789[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_524(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6, int iParam7)
{
	struct<98> Var0;
	int iVar98;
	int iVar99;
	
	if (!func_67(iParam1))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_117(iParam1, &Var0, iParam7);
		if (unk_0xAE06B9E39EBDE049(*uParam0))
		{
			if (unk_0x36FE6D3220816ADA(*uParam0) != Var0)
			{
			}
			return 1;
		}
		if ((iParam1 == 17 && Global_111858.f_2359.f_539.f_3618[0 /*197*/][0 /*98*/] == Var0) || (iParam1 == 15 && Global_111858.f_2359.f_539.f_3618[0 /*197*/][1 /*98*/] == Var0))
		{
			if (iParam1 == 17)
			{
				iVar98 = 0;
			}
			else if (iParam1 == 15)
			{
				iVar98 = 1;
			}
			unk_0x78FCB2E22C41B9D5(Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/]);
			if (unk_0x7D167B9A0CCDA347(Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/]))
			{
				*uParam0 = unk_0xCE4780E24AFDFBF9(Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/], Param2, uParam5, 0, 0, 0);
				unk_0xB11D151E210D4FAC(*uParam0, 1084227584);
				unk_0x617A5A74E1FE26A7(*uParam0, 0);
				unk_0x29B700FB89C9DAC1(*uParam0, 0);
				unk_0x494ACC4552B7881B(*uParam0, 1);
				unk_0x697DA7132EE43ABC(*uParam0, 1250, 0);
				unk_0x0FC504FAF5EB94FB(*uParam0, 1250f);
				unk_0x4A9F6CA267EF14FE(*uParam0, 1250f);
				Var0.f_3 = 1250;
				unk_0x38633C69DE516059(*uParam0, Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/].f_5, Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/].f_6);
				unk_0x88FCE2696F59472E(*uParam0, Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/].f_7, Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/].f_8);
				unk_0x463F70A7E1EF1482(*uParam0, Var0.f_2);
				iVar99 = 0;
				while (iVar99 < 12)
				{
					unk_0xF242CEB863060ABC(*uParam0, iVar99 + 1, !Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/].f_11[iVar99]);
					iVar99++;
				}
				if (Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/].f_24)
				{
					if (unk_0xD501F7099396F726(*uParam0, 0))
					{
						if (Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/].f_24)
						{
							unk_0x8E02133B2800E7EB(*uParam0, 1);
						}
						else
						{
							unk_0xD7ABCA2B7FE975F3(*uParam0, 1);
						}
					}
				}
				unk_0xC29A9E1088D83B1B(*uParam0, &(Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/].f_27));
				if (Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/].f_26 >= 0 && Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/].f_26 < unk_0x2C8D182979CFA409())
				{
					unk_0xE704D9F37B4C2203(*uParam0, Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/].f_26);
				}
				unk_0x80AB5AFB575FF63B(*uParam0, Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/].f_84, Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/].f_85, Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/].f_86);
				unk_0x0E765FE8467F7839(*uParam0, Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/].f_88);
				unk_0x7E69FCE3F08F853A(*uParam0, Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/].f_87);
				unk_0x1EC0ADF14D3A546D(*uParam0, Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/].f_93, Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/].f_94, Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/].f_95);
				unk_0xC87500F291715C64(*uParam0, 2, unk_0xCE990E643CD9D0E5(Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/].f_92, 28));
				unk_0xC87500F291715C64(*uParam0, 3, unk_0xCE990E643CD9D0E5(Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/].f_92, 29));
				unk_0xC87500F291715C64(*uParam0, 0, unk_0xCE990E643CD9D0E5(Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/].f_92, 30));
				unk_0xC87500F291715C64(*uParam0, 1, unk_0xCE990E643CD9D0E5(Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/].f_92, 31));
				if (unk_0x1D3BB414B1AF67E6(*uParam0) > 1 && Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/].f_89 >= 0)
				{
					unk_0xA6595E9B6170C788(*uParam0, Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/].f_89);
				}
				if (Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/].f_90 > -1)
				{
					if (!unk_0x72B9CC2155AEDF58(unk_0x36FE6D3220816ADA(*uParam0)))
					{
						if (unk_0x97AFEF6099069369(unk_0x36FE6D3220816ADA(*uParam0)))
						{
							if (Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/].f_90 == 6)
							{
								unk_0x499726ABB88D627B(*uParam0, Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/].f_90);
							}
						}
						else
						{
							unk_0x499726ABB88D627B(*uParam0, Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/].f_90);
						}
					}
				}
				func_528(uParam0, &(Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/].f_31), &(Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/].f_81));
				unk_0x80E6F5AEA0C688D0(*uParam0, Var0.f_96);
				if (bParam6)
				{
					unk_0x74528AC0906CBABE(Global_111858.f_2359.f_539.f_3618[0 /*197*/][iVar98 /*98*/]);
				}
				func_527(*uParam0);
				return 1;
			}
		}
		else
		{
			unk_0x78FCB2E22C41B9D5(Var0);
			if (unk_0x7D167B9A0CCDA347(Var0))
			{
				*uParam0 = unk_0xCE4780E24AFDFBF9(Var0, Param2, uParam5, 0, 0, 0);
				unk_0xB11D151E210D4FAC(*uParam0, 1084227584);
				unk_0x617A5A74E1FE26A7(*uParam0, 0);
				unk_0x29B700FB89C9DAC1(*uParam0, 0);
				unk_0x494ACC4552B7881B(*uParam0, 1);
				func_525(uParam0, Var0);
				if (iParam1 == 17 || iParam1 == 15)
				{
					func_527(*uParam0);
				}
				if (bParam6)
				{
					unk_0x74528AC0906CBABE(Var0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_525(var uParam0, struct<98> Param1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (Param1.f_9)
	{
		unk_0x29897D845D2C290B(*uParam0, Param1.f_4);
	}
	else
	{
		unk_0x38633C69DE516059(*uParam0, Param1.f_5, Param1.f_6);
	}
	if (Param1.f_10)
	{
		unk_0x88FCE2696F59472E(*uParam0, Param1.f_7, Param1.f_8);
	}
	unk_0x463F70A7E1EF1482(*uParam0, Param1.f_2);
	unk_0x697DA7132EE43ABC(*uParam0, Param1.f_3, 0);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		unk_0xF242CEB863060ABC(*uParam0, iVar0 + 1, !Param1.f_11[iVar0]);
		iVar0++;
	}
	if (Param1.f_24)
	{
		if (unk_0xD501F7099396F726(*uParam0, 0))
		{
			unk_0x8E02133B2800E7EB(*uParam0, 1);
		}
	}
	if (func_526(&uVar2, &uVar1) && Param1.f_97)
	{
		unk_0xC29A9E1088D83B1B(*uParam0, &uVar2);
		unk_0xE704D9F37B4C2203(*uParam0, uVar1);
	}
	else if (!unk_0x7BCC91F3C1CF24E8(&(Param1.f_27)))
	{
		unk_0xC29A9E1088D83B1B(*uParam0, &(Param1.f_27));
		if (Param1.f_26 >= 0 && Param1.f_26 < unk_0x2C8D182979CFA409())
		{
			unk_0xE704D9F37B4C2203(*uParam0, Param1.f_26);
		}
	}
	unk_0x80AB5AFB575FF63B(*uParam0, Param1.f_84, Param1.f_85, Param1.f_86);
	unk_0x0E765FE8467F7839(*uParam0, Param1.f_88);
	unk_0x7E69FCE3F08F853A(*uParam0, Param1.f_87);
	unk_0x1EC0ADF14D3A546D(*uParam0, Param1.f_93, Param1.f_94, Param1.f_95);
	unk_0xC87500F291715C64(*uParam0, 2, unk_0xCE990E643CD9D0E5(Param1.f_92, 28));
	unk_0xC87500F291715C64(*uParam0, 3, unk_0xCE990E643CD9D0E5(Param1.f_92, 29));
	unk_0xC87500F291715C64(*uParam0, 0, unk_0xCE990E643CD9D0E5(Param1.f_92, 30));
	unk_0xC87500F291715C64(*uParam0, 1, unk_0xCE990E643CD9D0E5(Param1.f_92, 31));
	if (unk_0x1D3BB414B1AF67E6(*uParam0) > 1 && Param1.f_89 >= 0)
	{
		unk_0xA6595E9B6170C788(*uParam0, Param1.f_89);
	}
	if (Param1.f_90 > -1)
	{
		if (!unk_0x72B9CC2155AEDF58(unk_0x36FE6D3220816ADA(*uParam0)))
		{
			if (unk_0x97AFEF6099069369(unk_0x36FE6D3220816ADA(*uParam0)))
			{
				if (Param1.f_90 == 6)
				{
					unk_0x499726ABB88D627B(*uParam0, Param1.f_90);
				}
			}
			else
			{
				unk_0x499726ABB88D627B(*uParam0, Param1.f_90);
			}
		}
	}
	func_528(uParam0, &(Param1.f_31), &(Param1.f_81));
	unk_0x80E6F5AEA0C688D0(*uParam0, Param1.f_96);
}

int func_526(var uParam0, var uParam1)
{
	if (unk_0x25DDB354A40FFCDB())
	{
	}
	else if (Global_111858.f_20114.f_261)
	{
		*uParam0 = { Global_111858.f_20114.f_267 };
		*uParam1 = Global_111858.f_20114.f_271;
		return 1;
	}
	return 0;
}

void func_527(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xAE06B9E39EBDE049(Global_96316[iVar0]))
		{
			Global_96316[iVar0] = uParam0;
			iVar0 = 3;
		}
		if (iVar0 == 2)
		{
		}
		iVar0++;
	}
}

int func_528(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x80FF6C016CDB0FAF(*uParam0, 0))
	{
		return 0;
	}
	if (unk_0xC71761E30ACCF098(*uParam0) == 0)
	{
		return 0;
	}
	unk_0x249EEEE65626B20C(*uParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0x136FC3422AADC5DD(*uParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0x136FC3422AADC5DD(*uParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0xEA1AFD77A8446630(*uParam0, 255);
				}
				else
				{
					unk_0xEA1AFD77A8446630(*uParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0x136FC3422AADC5DD(*uParam0, iVar1, false);
			}
		}
		else if (unk_0x7F8B14CBFB9813E5(*uParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x4C1DD6A89EF34554(*uParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x8DFB45E7317A7ED7(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x8DFB45E7317A7ED7(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x8DFB45E7317A7ED7(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_532(unk_0x36FE6D3220816ADA(*uParam0), 1) && unk_0x7F8B14CBFB9813E5(*uParam0, 24) != func_531(*uParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x8DFB45E7317A7ED7(*uParam0, 24, func_531(*uParam0, ((*uParam1)[38] - 1)), false);
	}
	func_530(uParam0);
	if (func_529(*uParam0))
	{
		unk_0xAEBB7D261688301C(*uParam0, 1);
		unk_0x494ACC4552B7881B(*uParam0, 1);
	}
	return 1;
}

int func_529(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((unk_0xAE06B9E39EBDE049(uParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0)) && unk_0xC71761E30ACCF098(iParam0) > 0)
	{
		unk_0x249EEEE65626B20C(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x7F8B14CBFB9813E5(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x214B1F24249CD428(iParam0, iVar1, unk_0x7F8B14CBFB9813E5(iParam0, iVar1)), 32);
				iVar2 = unk_0x856D5567211886A2(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x856D5567211886A2("MNU_CAGE") || iVar2 == unk_0x856D5567211886A2("SABRE_CAG"))
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

void func_530(var uParam0)
{
	switch (unk_0x36FE6D3220816ADA(*uParam0))
	{
		case joaat("starling"):
			if (unk_0x7F8B14CBFB9813E5(*uParam0, 4) == 0)
			{
				unk_0x8DFB45E7317A7ED7(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0x4C1DD6A89EF34554(*uParam0, 13);
			}
			break;
	}
}

int func_531(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xAE06B9E39EBDE049(uParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		switch (unk_0x36FE6D3220816ADA(iParam0))
		{
			case joaat("tornado5"):
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
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0xAB92DA7B6007DAAA(iParam0, 38);
		iVar1 = unk_0xAB92DA7B6007DAAA(iParam0, 24);
		fVar2 = (SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(iVar0));
		iVar3 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) * fVar2)) - 1);
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

int func_532(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14227)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14228)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14226)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14229)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14231)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14230)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
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
		
		case joaat("diablous2"):
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
		
		case joaat("fcr2"):
			if (Global_262145.f_18683)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18680)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18687)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18685)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18690)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_20635)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_20636)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

int func_533(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	if (func_67(iParam1))
	{
		iVar0 = func_39(iParam1);
		unk_0x78FCB2E22C41B9D5(iVar0);
		if (unk_0x7D167B9A0CCDA347(iVar0))
		{
			if (unk_0xAE06B9E39EBDE049(*uParam0))
			{
				unk_0x586DDC617E714637(uParam0);
			}
			if (unk_0xAE06B9E39EBDE049(uParam2) && unk_0x80FF6C016CDB0FAF(iParam2, 0))
			{
				*uParam0 = unk_0x6A7A2C83BD302BA4(iParam2, 26, iVar0, iParam3, 1, 1);
				func_739(*uParam0, iParam1, bParam5);
				unk_0x60E0A015C7679945(*uParam0, 0, 0);
				func_732(*uParam0);
				func_721(*uParam0, 1, 0);
				func_720(*uParam0);
				func_717(*uParam0);
				func_535(*uParam0, bParam6);
				func_534(*uParam0);
				if (bParam4)
				{
					unk_0x74528AC0906CBABE(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_534(int iParam0)
{
	int iVar0;
	
	if (unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xAE06B9E39EBDE049(Global_96324[iVar0]) && Global_96324[iVar0] == iParam0)
		{
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xAE06B9E39EBDE049(Global_96324[iVar0]))
		{
			Global_96324[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
}

int func_535(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_38(iParam0);
	if (func_716(iVar0))
	{
		func_715(iVar0, 0);
		func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_539(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (func_537(iParam0))
		{
			func_715(iVar0, 0);
			func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_539(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_111858.f_9081.f_99.f_58[120] && !Global_111858.f_9081.f_99.f_58[122])
			{
				func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_111858.f_9081.f_99.f_58[121] = 1;
				return 1;
			}
			if (Global_111858.f_9081.f_99.f_58[123])
			{
				Global_111858.f_9081.f_99.f_58[123] = 0;
				if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
				{
					if (func_276(iParam0, 3, 169))
					{
						func_162(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_276(iParam0, 12, 6))
			{
				func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_276(iParam0, 12, 17))
			{
				if (!func_536(unk_0x36FE6D3220816ADA(iParam0), 12, 17))
				{
					func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_276(iParam0, 12, 20))
			{
				if (!func_536(unk_0x36FE6D3220816ADA(iParam0), 12, 20))
				{
					func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_276(iParam0, 12, 21))
			{
				if (!func_536(unk_0x36FE6D3220816ADA(iParam0), 12, 21))
				{
					func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_276(iParam0, 12, 22))
			{
				if (!func_536(unk_0x36FE6D3220816ADA(iParam0), 12, 22))
				{
					func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_276(iParam0, 12, 11))
			{
				func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_276(iParam0, 12, 10))
			{
				func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_276(iParam0, 12, 50))
			{
				func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_276(iParam0, 14, 59))
			{
				func_162(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_276(iParam0, 8, 22))
			{
				func_162(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_276(iParam0, 12, 14))
			{
				func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		
		case 1:
			if (func_276(iParam0, 12, 13))
			{
				if (!func_536(unk_0x36FE6D3220816ADA(iParam0), 12, 13))
				{
					func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_276(iParam0, 12, 14))
			{
				if (!func_536(unk_0x36FE6D3220816ADA(iParam0), 12, 14))
				{
					func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_276(iParam0, 12, 15))
			{
				if (!func_536(unk_0x36FE6D3220816ADA(iParam0), 12, 15))
				{
					func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_276(iParam0, 12, 4))
			{
				func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_276(iParam0, 12, 3))
			{
				func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_276(iParam0, 14, 82))
			{
				func_162(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_276(iParam0, 8, 76))
			{
				func_162(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_276(iParam0, 12, 1))
			{
				func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		
		case 2:
			if (func_276(iParam0, 12, 12))
			{
				func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_276(iParam0, 12, 15))
			{
				func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_276(iParam0, 3, 71))
				{
					func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_276(iParam0, 12, 17))
			{
				if (!func_536(unk_0x36FE6D3220816ADA(iParam0), 12, 17))
				{
					func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_276(iParam0, 12, 18))
			{
				if (!func_536(unk_0x36FE6D3220816ADA(iParam0), 12, 18))
				{
					func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_276(iParam0, 12, 19))
			{
				if (!func_536(unk_0x36FE6D3220816ADA(iParam0), 12, 19))
				{
					func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_276(iParam0, 12, 7))
			{
				func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_276(iParam0, 12, 6))
			{
				func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_276(iParam0, 14, 88))
			{
				func_162(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_276(iParam0, 8, 17))
			{
				func_162(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_276(iParam0, 12, 11))
			{
				func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_536(int iParam0, int iParam1, int iParam2)
{
	Global_76647[1 /*14*/] = { func_212(iParam0, iParam1, iParam2, -1) };
	return unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 1);
}

bool func_537(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x36FE6D3220816ADA(iParam0);
	iVar0 = func_202(iParam0, 4);
	return func_538(iVar1, 4, iVar0);
}

int func_538(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == joaat("player_zero"))
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
	else if (iParam0 == joaat("player_one"))
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
	else if (iParam0 == joaat("player_two"))
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

void func_539(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar67;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		iVar0 = func_38(iParam0);
		if (func_67(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_171(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					func_714(iVar0);
					func_550(iParam0, &(Global_111858.f_2359.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			func_546(iParam0, &Var2, 1, -1);
			Global_98680[iVar0 /*65*/] = { Var2 };
			if (iParam0 == unk_0x9B0761B4C3EB8BC7())
			{
				func_541();
			}
			if (unk_0x856D5567211886A2(unk_0x6C5C6B207AA78253()) != unk_0x856D5567211886A2("clothes_shop_sp") || (unk_0x7B70881748D166CD(joaat("lester1")) == 0 && unk_0x7B70881748D166CD(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!func_292(0) && !func_292(1)) && !func_292(2)) && !func_292(3)) && !func_292(4)) && !func_292(9)) && !func_292(10)))
				{
					Global_111858.f_2359.f_539[iVar0 /*65*/] = { Var2 };
					Global_111858.f_2359.f_539.f_2391[iVar0] = func_540(iParam0);
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_111858.f_2359.f_539.f_204[iVar67 /*4*/][iVar0] = func_202(iParam0, func_196(iVar67));
						iVar67++;
					}
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_111858.f_2359.f_539.f_204[iVar67 /*4*/][iVar0] = func_202(iParam0, func_196(iVar67));
						iVar67++;
					}
					if (iVar0 == 0)
					{
						if (Global_111858.f_9081.f_99.f_58[121])
						{
							Global_111858.f_9081.f_99.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

int func_540(int iParam0)
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
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar4 = iVar1;
		iVar3 = unk_0xD6A0115FA2F3F0EC(iParam0, iVar4);
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar0 = (iVar0 + unk_0x7CF1CA3F6DB5685F(iParam0, iVar4, iVar2));
			iVar2++;
		}
		iVar1++;
	}
	iVar5 = 0;
	while (iVar5 < 9)
	{
		iVar8 = iVar5;
		iVar7 = unk_0x99134D420E2DAA74(iParam0, iVar8);
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			iVar0 = (iVar0 + unk_0x2CB217E5FD6878E9(iParam0, iVar8, iVar6));
			iVar6++;
		}
		iVar5++;
	}
	return iVar0;
}

void func_541()
{
	struct<50> Var0;
	
	if ((unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) || !func_67(func_127())) || !func_543())
	{
		return;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_546(unk_0x9B0761B4C3EB8BC7(), &Var0, 1, -1);
	func_542(1306, Var0[0], -1, 1);
	func_542(1307, Var0[1], -1, 1);
	func_542(1308, Var0[2], -1, 1);
	func_542(1309, Var0[3], -1, 1);
	func_542(1310, Var0[4], -1, 1);
	func_542(1311, Var0[5], -1, 1);
	func_542(1312, Var0[6], -1, 1);
	func_542(1313, Var0[7], -1, 1);
	func_542(1314, Var0[8], -1, 1);
	func_542(1315, Var0[9], -1, 1);
	func_542(1316, Var0[10], -1, 1);
	func_542(1317, Var0[11], -1, 1);
	func_542(1318, Var0.f_13[0], -1, 1);
	func_542(1319, Var0.f_13[1], -1, 1);
	func_542(1320, Var0.f_13[2], -1, 1);
	func_542(1321, Var0.f_13[3], -1, 1);
	func_542(1322, Var0.f_13[4], -1, 1);
	func_542(1323, Var0.f_13[5], -1, 1);
	func_542(1324, Var0.f_13[6], -1, 1);
	func_542(1325, Var0.f_13[7], -1, 1);
	func_542(1326, Var0.f_13[8], -1, 1);
	func_542(1327, Var0.f_13[9], -1, 1);
	func_542(1328, Var0.f_13[10], -1, 1);
	func_542(1329, Var0.f_13[11], -1, 1);
	func_542(1330, Var0.f_26[0], -1, 1);
	func_542(1331, Var0.f_26[1], -1, 1);
	func_542(1332, Var0.f_26[2], -1, 1);
	func_542(1333, Var0.f_26[3], -1, 1);
	func_542(1334, Var0.f_26[4], -1, 1);
	func_542(1335, Var0.f_26[5], -1, 1);
	func_542(1336, Var0.f_26[6], -1, 1);
	func_542(1337, Var0.f_26[7], -1, 1);
	func_542(1338, Var0.f_26[8], -1, 1);
	func_542(1339, Var0.f_26[9], -1, 1);
	func_542(1340, Var0.f_26[10], -1, 1);
	func_542(1341, Var0.f_26[11], -1, 1);
	func_542(1342, Var0.f_39[0], -1, 1);
	func_542(1343, Var0.f_39[1], -1, 1);
	func_542(1344, Var0.f_39[2], -1, 1);
	func_542(1345, Var0.f_39[3], -1, 1);
	func_542(1346, Var0.f_39[4], -1, 1);
	func_542(1347, Var0.f_39[5], -1, 1);
	func_542(1348, Var0.f_39[6], -1, 1);
	func_542(1349, Var0.f_39[7], -1, 1);
	func_542(1350, Var0.f_39[8], -1, 1);
	func_542(1351, Var0.f_49[0], -1, 1);
	func_542(1352, Var0.f_49[1], -1, 1);
	func_542(1353, Var0.f_49[2], -1, 1);
	func_542(1354, Var0.f_49[3], -1, 1);
	func_542(1355, Var0.f_49[4], -1, 1);
	func_542(1356, Var0.f_49[5], -1, 1);
	func_542(1357, Var0.f_49[6], -1, 1);
	func_542(1358, Var0.f_49[7], -1, 1);
	func_542(1359, Var0.f_49[8], -1, 1);
	func_542(1360, func_127(), -1, 1);
	unk_0xBD9D9E72ABB288E4(joaat("CLO_STORED_INITIAL"), 1, 1);
	Global_111858.f_2359.f_539.f_4315 = 1;
}

var func_542(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_21();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x33259517529FA9DD((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x33259517529FA9DD((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 28483), 0, 1, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 30483), 0, 1, iParam2, "_HISLANDPSTAT_INT");
		iVar1 = ((iParam0 - 30483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x9972E0F3B8651981(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_543()
{
	if (func_545() && func_544(0))
	{
		return 1;
	}
	return 0;
}

var func_544(int iParam0)
{
	return Global_1312392[iParam0];
}

var func_545()
{
	return func_544(func_21() + 1);
}

void func_546(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		iVar0 = func_38(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_549(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_548(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_67(iVar0))
		{
			uParam1->f_59 = Global_111858.f_2359.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_111858.f_2359.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_111858.f_2359.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_111858.f_2359.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_111858.f_2359.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_111858.f_2359.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x25DDB354A40FFCDB() && unk_0x36FE6D3220816ADA(iParam0) == unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			if (func_547(161, iParam3))
			{
				uParam1->f_59 = func_208(2052, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_208(752, iParam3, 0);
			}
			uParam1->f_60 = func_208(753, iParam3, 0);
			uParam1->f_61 = func_208(754, iParam3, 0);
		}
		if (unk_0x25DDB354A40FFCDB() && iParam0 == unk_0x9B0761B4C3EB8BC7())
		{
			if (func_547(161, iParam3))
			{
				uParam1->f_59 = func_208(2052, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_208(752, iParam3, 0);
			}
		}
	}
}

int func_547(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2587834[iParam0 /*3*/][func_207(iParam1)];
	if (unk_0xB9112C701DE2A810(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_548(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_38(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xA98E0435012EAF07(iParam0, iParam1);
		*uParam3 = unk_0x77A103B794FA7737(iParam0, iParam1);
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
				if (unk_0x2489BECD123A725B(iParam0) && unk_0x36A2658DF0E6FA5B(iParam0) != -1)
				{
					*uParam2 = unk_0x36A2658DF0E6FA5B(iParam0);
					*uParam3 = unk_0x4D85ED5F576DB434(iParam0);
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

void func_549(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_38(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x3FB4D40A857CEA77(iParam0, iParam1);
		*uParam3 = unk_0x79AFA009D186C4FB(iParam0, iParam1);
		*uParam4 = unk_0xABAC9462CD887571(iParam0, iParam1);
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

void func_550(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<5> Var12;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0) || iParam5)
	{
		iVar0 = func_38(iParam0);
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				if (bParam4)
				{
					if (uParam1->f_13[iVar3] != 0 && uParam1->f_13[iVar3] >= unk_0xD6A0115FA2F3F0EC(iParam0, iVar3))
					{
						uParam1->f_13[iVar3] = 0;
					}
					if ((*uParam1)[iVar3] != 0 && (*uParam1)[iVar3] >= unk_0x7CF1CA3F6DB5685F(iParam0, iVar3, uParam1->f_13[iVar3]))
					{
						(*uParam1)[iVar3] = 0;
					}
				}
				unk_0x45F588C0DD767737(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (bParam4)
			{
				if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
				{
					if (uParam1->f_39[iVar3] >= unk_0x99134D420E2DAA74(iParam0, iVar3))
					{
						uParam1->f_39[iVar3] = -1;
					}
					else if (uParam1->f_49[iVar3] >= unk_0x2CB217E5FD6878E9(iParam0, iVar3, uParam1->f_39[iVar3]))
					{
						uParam1->f_49[iVar3] = 0;
					}
				}
			}
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				unk_0x78024EFD31A7FAD4(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
			}
			else
			{
				unk_0x4FCABD4082A6C808(iParam0, iVar3);
			}
			iVar3++;
		}
		if (func_67(iVar0))
		{
			Global_111858.f_2359.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_111858.f_2359.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_111858.f_2359.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_170(iParam0, iVar1, &iVar2, 0))
			{
				func_162(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_111858.f_2359.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_111858.f_2359.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_111858.f_2359.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_163(iParam0, iVar1, &iVar2))
			{
				func_162(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (unk_0x25DDB354A40FFCDB() && unk_0x36FE6D3220816ADA(iParam0) == unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			bVar4 = func_712(iParam0);
			func_206(753, uParam1->f_60, Global_76644, 1, 0);
			func_206(754, uParam1->f_61, Global_76644, 1, 0);
			iVar5 = func_203(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("mp_m_freemode_01"))
				{
					iVar6 = func_710(iVar5);
				}
				else if (iVar1 == joaat("mp_f_freemode_01"))
				{
					iVar6 = func_708(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_553(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_76644, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = func_203(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_553(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_76644, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = func_187(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_553(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_76644, bVar4, 0, 0);
			}
		}
		if (unk_0x25DDB354A40FFCDB() && iParam0 == unk_0x9B0761B4C3EB8BC7())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("mp_m_freemode_01"))
			{
				iVar9 = func_710(iVar9);
			}
			else
			{
				iVar9 = func_708(iVar9);
			}
			func_206(752, iVar9, Global_76644, 1, 0);
			func_206(2052, iVar9, Global_76644, 1, 0);
			func_551(161, 1, -1, 1);
		}
		if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
		{
			iVar10 = unk_0x21A69BE7599CD8B7(iParam0, 1, unk_0x3FB4D40A857CEA77(iParam0, 1), unk_0x79AFA009D186C4FB(iParam0, 1));
			iVar11 = unk_0xEAF476EEF924D2C9(iParam0, 1, unk_0xA98E0435012EAF07(iParam0, 1), unk_0x77A103B794FA7737(iParam0, 1));
			if (iVar10 == joaat("DLC_MP_ARENA_M_BERD_13_0") || iVar10 == joaat("DLC_MP_ARENA_F_BERD_13_0"))
			{
				if (!unk_0x4D0432E34C5996D9(iVar11, joaat("ARENA_DRAW_0"), 1))
				{
					unk_0x8BC52CDFCD2A4534(&Var12);
					if (iVar10 == joaat("DLC_MP_ARENA_M_BERD_13_0"))
					{
						unk_0xD2FB5DC35CA67C53(joaat("DLC_MP_ARENA_M_PEYES_0_0"), &Var12);
					}
					else
					{
						unk_0xD2FB5DC35CA67C53(joaat("DLC_MP_ARENA_F_PEYES_0_0"), &Var12);
					}
					unk_0x78024EFD31A7FAD4(iParam0, 1, Var12.f_3, Var12.f_4, false);
				}
			}
			else if (unk_0x4D0432E34C5996D9(iVar11, joaat("ARENA_DRAW_0"), 1))
			{
				unk_0x4FCABD4082A6C808(iParam0, 1);
			}
		}
	}
}

void func_551(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_552())
	{
		iVar0 = Global_2587834[iParam0 /*3*/][func_207(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xBD9D9E72ABB288E4(iVar0, iParam1, iParam3);
		}
	}
}

int func_552()
{
	return 1;
	return 0;
}

int func_553(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)
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
	
	if (!unk_0x25DDB354A40FFCDB())
	{
		if ((Global_1312829 != 4 && Global_1312829 != 5) && Global_1312829 != 7)
		{
			return 0;
		}
	}
	if (unk_0x5AEB5DDFFAD43CA5(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == unk_0x9B0761B4C3EB8BC7() && Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_226 == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == -1)
	{
		iParam10 = Global_76644;
	}
	Global_76645++;
	iVar5 = unk_0x36FE6D3220816ADA(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_76647[1 /*14*/] = { func_675(iVar5, iParam1, iParam2, -1) };
		if (!func_211(iParam3))
		{
			Global_76645 = (Global_76645 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_76645 > 1)
		{
		}
		else
		{
			func_673(iVar5, iParam1, iParam2, 1);
		}
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		unk_0x6BD562D713BA3F70(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_76690 };
		}
		else
		{
			uVar15 = { func_194(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar15.f_16)
				{
					Global_76647[1 /*14*/] = { func_675(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						unk_0x45F588C0DD767737(iParam0, func_172(iVar0), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, unk_0xABAC9462CD887571(iParam0, func_172(iVar0)));
					}
					else
					{
						unk_0x45F588C0DD767737(iParam0, func_172(iVar0), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, iParam4);
					}
					if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 1))
					{
						func_673(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_76647[1 /*14*/] = { func_675(iVar5, iVar0, uVar15[iVar0], -1) };
					if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar32 = 9;
							if (iParam5 == 1)
							{
								uVar32 = { Global_76707 };
							}
							else
							{
								uVar32 = { func_191(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_76647[1 /*14*/] = { func_675(iVar5, 14, uVar32[iVar1], -1) };
								func_182(iParam0, Global_76647[1 /*14*/].f_12, Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4);
								if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 1))
								{
									func_673(iVar5, iVar0, uVar15[iVar0], 1);
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
									unk_0x45F588C0DD767737(iParam0, func_172(iVar0), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, unk_0xABAC9462CD887571(iParam0, func_172(iVar0)));
								}
								else
								{
									unk_0x45F588C0DD767737(iParam0, func_172(iVar0), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_553(iParam0, iVar0, uVar15[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 1))
							{
								func_673(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_76647[1 /*14*/] = { func_675(iVar5, iVar0, func_672(iParam0, iVar0, -1), -1) };
				if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 3))
				{
					uVar42 = { func_194(iVar5, 0) };
					func_553(iParam0, iVar0, uVar42[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		unk_0x45F588C0DD767737(iParam0, 1, unk_0x3FB4D40A857CEA77(iParam0, 1), unk_0x79AFA009D186C4FB(iParam0, 1), 0);
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar59 = func_671();
			if (iVar59 != -1)
			{
				func_668(iVar59, 0, iParam10);
			}
			func_666(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar60 = { func_191(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_76647[1 /*14*/] = { func_675(iVar5, 14, uVar60[iVar1], -1) };
			func_182(iParam0, Global_76647[1 /*14*/].f_12, Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4);
			if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 1))
			{
				func_673(iVar5, 14, uVar60[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_76645 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_664(iParam0, iVar5, 14, uVar60[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_553(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		func_182(iParam0, Global_76647[1 /*14*/].f_12, Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4);
		if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 1))
		{
			func_673(iVar5, iParam1, iParam2, 1);
		}
		if (Global_76647[1 /*14*/].f_12 == 0)
		{
			if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 6) && unk_0x4D0432E34C5996D9(Global_2621444, joaat("SHRINK_HAIR"), 1))
			{
			}
			else
			{
				iVar70 = unk_0x21A69BE7599CD8B7(iParam0, 1, unk_0x3FB4D40A857CEA77(iParam0, 1), unk_0x79AFA009D186C4FB(iParam0, 1));
				if (unk_0x4D0432E34C5996D9(iVar70, joaat("HAIR_SHRINK"), 0))
				{
					func_553(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					Global_76647[1 /*14*/] = { func_675(iVar5, iParam1, iParam2, -1) };
				}
			}
		}
		if (Global_76647[1 /*14*/].f_12 == 0)
		{
			func_658(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_76645 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_664(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_553(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_664(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_553(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar71 = func_172(iParam1);
		if (unk_0x3FB4D40A857CEA77(iParam0, iVar71) != Global_76647[1 /*14*/].f_3 || unk_0x79AFA009D186C4FB(iParam0, iVar71) != Global_76647[1 /*14*/].f_4)
		{
			iVar72 = unk_0x21A69BE7599CD8B7(iParam0, 8, unk_0x3FB4D40A857CEA77(iParam0, 8), unk_0x79AFA009D186C4FB(iParam0, 8));
			iVar73 = unk_0x21A69BE7599CD8B7(iParam0, 7, unk_0x3FB4D40A857CEA77(iParam0, 7), unk_0x79AFA009D186C4FB(iParam0, 7));
			if (((iParam1 == 11 && unk_0x4D0432E34C5996D9(iVar73, 307252627, 0)) || (iParam1 == 8 && unk_0x4D0432E34C5996D9(iVar73, 1552218390, 0))) || (iParam1 == 4 && unk_0x4D0432E34C5996D9(iVar73, -2095729091, 0)))
			{
				unk_0x45F588C0DD767737(iParam0, 7, 0, 0, unk_0xABAC9462CD887571(iParam0, 7));
			}
			if ((iParam1 == 11 && unk_0x4D0432E34C5996D9(iVar72, 307252627, 0)) || (iParam1 == 4 && unk_0x4D0432E34C5996D9(iVar72, -2095729091, 0)))
			{
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					unk_0x45F588C0DD767737(iParam0, 8, 15, 0, unk_0xABAC9462CD887571(iParam0, 8));
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					unk_0x45F588C0DD767737(iParam0, 8, 2, 0, unk_0xABAC9462CD887571(iParam0, 8));
				}
			}
		}
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar74 = -1;
				if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 6) && unk_0x4D0432E34C5996D9(Global_2621444, joaat("CREW_COL"), 11))
				{
					unk_0xFCB85CEF67ADE0E2(iParam0, Global_1314053, Global_1314054, Global_1314055, 0);
					unk_0xFCB85CEF67ADE0E2(iParam0, Global_1314053, Global_1314054, Global_1314055, 1);
					unk_0xFCB85CEF67ADE0E2(iParam0, Global_1314053, Global_1314054, Global_1314055, 2);
					unk_0xFCB85CEF67ADE0E2(iParam0, Global_1314053, Global_1314054, Global_1314055, 3);
				}
				iVar75 = func_202(iParam0, 11);
				iVar76 = func_202(iParam0, 8);
				iVar77 = func_202(iParam0, 4);
				iVar8 = unk_0x21A69BE7599CD8B7(iParam0, 8, unk_0x3FB4D40A857CEA77(iParam0, 8), unk_0x79AFA009D186C4FB(iParam0, 8));
				if (unk_0x4D0432E34C5996D9(iVar8, joaat("OVER_JACKET"), 8))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar74 = func_184(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar74 = func_184(iVar5, iParam2, 11, 4);
					}
					if ((((((unk_0x4D0432E34C5996D9(iVar74, joaat("SILK_ROBE"), 0) || unk_0x4D0432E34C5996D9(iVar74, joaat("SILK_PYJAMAS"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("SMOKING_JACKET"), 0)) || unk_0x4D0432E34C5996D9(iVar74, -826135203, 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("MORPH_SUIT"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("GORKA_SUIT"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar9 = func_202(iParam0, 8);
					}
				}
				iVar78 = unk_0x21A69BE7599CD8B7(iParam0, 3, unk_0x3FB4D40A857CEA77(iParam0, 3), 0);
				if (unk_0x4D0432E34C5996D9(iVar78, joaat("GLOVES"), 0))
				{
					iVar79 = func_657(iVar5, iVar76, iVar75, iVar77);
					if (iVar79 == -99)
					{
						iVar79 = func_664(iParam0, iVar5, 11, iVar75, 3, 0);
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
							iVar74 = func_184(iVar5, iParam2, 11, 4);
							if (!unk_0x4D0432E34C5996D9(iVar74, joaat("DRESS"), 0))
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
							if (func_656(iVar5, iVar79, iVar80) == iVar78)
							{
								iVar11 = iVar80;
								iVar12 = unk_0x79AFA009D186C4FB(iParam0, 3);
							}
							iVar80++;
						}
					}
				}
				iVar74 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && unk_0x4D0432E34C5996D9(func_184(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar75 = func_202(iParam0, 11);
					if (iVar75 >= 256)
					{
						iVar74 = func_184(iVar5, iVar75, 11, 4);
					}
					if (iVar75 >= 256 && unk_0x4D0432E34C5996D9(iVar74, joaat("VEST_SHIRT"), 0))
					{
						iVar81 = func_654(iVar5, iVar75, iParam2, unk_0x79AFA009D186C4FB(iParam0, 11));
						if (iVar81 != -99)
						{
							func_553(iParam0, 8, iVar81, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_76647[1 /*14*/] = { func_675(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (func_653(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						if (iVar75 >= 237)
						{
							iVar74 = func_184(iVar5, iVar75, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						if (iVar75 >= 256)
						{
							iVar74 = func_184(iVar5, iVar75, 11, 4);
						}
					}
					iVar9 = -99;
					if (!func_653(iVar5, iVar75, -1))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar75 >= 256) && (unk_0x4D0432E34C5996D9(iVar74, joaat("VEST"), 0) || unk_0x4D0432E34C5996D9(iVar74, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar75 >= 256) && ((((((((unk_0x4D0432E34C5996D9(iVar74, joaat("HEIST_DRAW_5"), 0) || unk_0x4D0432E34C5996D9(iVar74, joaat("HEIST_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("HEIST_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("HEIST_DRAW_11"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("HEIST_DRAW_12"), 0)) || unk_0x4D0432E34C5996D9(iVar74, -872449705, 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("APART_DRAW_9"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("STUNT_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar82 = func_652(iParam0, iParam2);
							iVar83 = func_654(iVar5, iVar75, iParam2, unk_0x79AFA009D186C4FB(iParam0, 11));
							if (iVar83 != -99)
							{
								func_553(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_76647[1 /*14*/] = { func_675(iVar5, iParam1, iParam2, -1) };
								iVar9 = -99;
							}
							else if (iVar82 != -99 && (iParam0 == unk_0x9B0761B4C3EB8BC7() || iParam0 == Global_4268543))
							{
								func_553(iParam0, 8, iVar82, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_76647[1 /*14*/] = { func_675(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar84 = func_651(iVar5, 11, -1);
									Global_76647[1 /*14*/] = { func_675(iVar5, 11, iVar84, -1) };
									iVar83 = func_654(iVar5, iVar84, iParam2, Global_76647[1 /*14*/].f_4);
									iVar85 = func_184(iVar5, iParam2, 11, 3);
									if ((iVar83 == -99 || unk_0x4D0432E34C5996D9(iVar85, joaat("BIKER_VEST"), 0)) || unk_0x4D0432E34C5996D9(iVar85, 1170568373, 0))
									{
										iVar83 = 240;
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (unk_0x4D0432E34C5996D9(func_184(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar83 = 120;
									}
									else
									{
										iVar83 = 48;
									}
								}
								func_553(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_76647[1 /*14*/] = { func_675(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_76647[1 /*14*/] = { func_675(iVar5, 11, iVar75, -1) };
						iVar86 = Global_76647[1 /*14*/].f_3;
						Global_76647[1 /*14*/] = { func_675(iVar5, 11, iParam2, -1) };
						iVar87 = Global_76647[1 /*14*/].f_3;
						if (iVar86 != iVar87)
						{
							iVar89 = func_652(iParam0, iParam2);
							Global_76647[1 /*14*/] = { func_675(iVar5, 8, iVar76, -1) };
							iVar88 = Global_76647[1 /*14*/].f_4;
							iVar90 = func_650(iVar5, iVar76, iVar88);
							if (iVar89 != -99 && (iParam0 == unk_0x9B0761B4C3EB8BC7() || iParam0 == Global_4268543))
							{
								iVar91 = iVar89;
							}
							else if (iVar90 == -99)
							{
								iVar91 = iVar76;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar92 = func_184(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || func_649(iVar92) == 6) || unk_0x4D0432E34C5996D9(iVar92, joaat("BIKER_VEST"), 0))
									{
										iVar90 = func_651(iVar5, 11, -1);
										Global_76647[1 /*14*/] = { func_675(iVar5, 11, iVar90, -1) };
										iVar91 = func_654(iVar5, iVar90, iParam2, Global_76647[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("mp_f_freemode_01") && ((iVar76 == 32 || iVar76 == 33) || iVar76 == 119))
								{
									if (!unk_0x4D0432E34C5996D9(func_184(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar90 = func_651(iVar5, 11, -1);
										Global_76647[1 /*14*/] = { func_675(iVar5, 11, iVar90, -1) };
										iVar91 = func_654(iVar5, iVar90, iParam2, Global_76647[1 /*14*/].f_4);
									}
								}
								iVar93 = -1;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar93 = func_184(iVar5, iVar76, 8, 3);
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									iVar93 = func_184(iVar5, iVar76, 8, 4);
								}
								if (unk_0x4D0432E34C5996D9(iVar93, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar90 = func_651(iVar5, 11, -1);
									Global_76647[1 /*14*/] = { func_675(iVar5, 11, iVar90, -1) };
									iVar91 = func_654(iVar5, iVar90, iParam2, Global_76647[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar91 = func_654(iVar5, iVar90, iParam2, iVar88);
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if (unk_0x4D0432E34C5996D9(func_184(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!func_648(iVar5, func_202(iParam0, 4), iVar90))
										{
											iVar91 = 240;
										}
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (unk_0x4D0432E34C5996D9(func_184(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!func_648(iVar5, func_202(iParam0, 4), iVar90))
										{
											iVar91 = 48;
										}
									}
								}
							}
							if (iVar91 != -99)
							{
								func_553(iParam0, 8, iVar91, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
								iVar90 = func_651(iVar5, 11, -1);
								Global_76647[1 /*14*/] = { func_675(iVar5, 11, iVar90, -1) };
								iVar91 = func_654(iVar5, iVar90, iParam2, Global_76647[1 /*14*/].f_4);
								if (iVar91 == -99)
								{
									iVar91 = 240;
								}
								func_553(iParam0, 8, iVar91, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_553(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_76647[1 /*14*/] = { func_675(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				func_645(iVar5, iParam2);
				if (!bParam13)
				{
					unk_0x45F588C0DD767737(iParam0, 10, 0, 0, unk_0xABAC9462CD887571(iParam0, 10));
				}
			}
			func_666(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_657(iVar5, func_672(iParam0, 8, -1), iParam2, func_672(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = func_208(2152, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = func_208(2159, iParam10, 0);
				}
				unk_0x777697644ED166F1(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				if (iParam2 != -99)
				{
					iVar94 = -99;
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar94 = func_710(iParam2);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar94 = func_708(iParam2);
					}
					if (iVar94 != -99 && iParam2 != iVar94)
					{
						iParam2 = iVar94;
					}
				}
				func_596(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar95 = unk_0x21A69BE7599CD8B7(iParam0, 3, unk_0x3FB4D40A857CEA77(iParam0, 3), 0);
			if (unk_0x4D0432E34C5996D9(iVar95, joaat("GLOVES"), 0))
			{
				iVar96 = func_202(iParam0, 11);
				iVar97 = func_202(iParam0, 4);
				iVar98 = func_657(iVar5, iParam2, iVar96, iVar97);
				if (iVar98 == -99)
				{
					iVar98 = func_664(iParam0, iVar5, 11, iVar96, 3, 0);
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
						iVar99 = func_184(iVar5, iParam2, 11, 4);
						if (!unk_0x4D0432E34C5996D9(iVar99, joaat("DRESS"), 0))
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
						if (func_656(iVar5, iVar98, iVar100) == iVar95)
						{
							iVar11 = iVar100;
							iVar12 = unk_0x79AFA009D186C4FB(iParam0, 3);
						}
						iVar100++;
					}
				}
			}
			func_666(iParam0, iParam1, iParam2, iParam6, 0);
			iVar101 = func_202(iParam0, 11);
			if (func_653(iVar5, iVar101, -1))
			{
				iVar102 = func_650(iVar5, iParam2, Global_76647[1 /*14*/].f_4);
				func_645(iVar5, iVar102);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_657(iVar5, iParam2, func_202(iParam0, 11), func_202(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar103 = func_202(iParam0, 7);
				if (!func_593(iVar5, iVar103, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					unk_0x45F588C0DD767737(iParam0, func_172(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && unk_0x4D0432E34C5996D9(Global_2621444, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && unk_0x4D0432E34C5996D9(Global_2621444, joaat("SHRINK_HEAD"), 0)))
			{
				iVar104 = func_208(2099, iParam10, 0);
				iVar105 = func_208(2100, iParam10, 0);
				iVar106 = func_208(2101, iParam10, 0);
				uVar107 = func_592(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					unk_0x5B5751111E879A6F(iParam0, 0, 0, 0, iVar104, iVar105, iVar106, 0f, uVar107, 0f, false);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					unk_0x5B5751111E879A6F(iParam0, 21, 0, 0, iVar104, iVar105, iVar106, 0f, fVar107, 0f, false);
				}
				iVar108 = 0;
				while (iVar108 < 20)
				{
					unk_0x69D0D9BA8F4533D8(iParam0, iVar108, 0f);
					iVar108++;
				}
			}
			else
			{
				func_576(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar109 = func_202(iParam0, 11);
			iVar110 = func_202(iParam0, 8);
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x4D0432E34C5996D9(func_184(iVar5, iVar109, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!func_648(iVar5, iParam2, func_650(iVar5, iVar110, 0)))
					{
						func_553(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_76647[1 /*14*/] = { func_675(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				if (unk_0x4D0432E34C5996D9(func_184(iVar5, iVar109, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!func_648(iVar5, iParam2, func_650(iVar5, iVar110, 0)))
					{
						func_553(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_76647[1 /*14*/] = { func_675(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_657(iVar5, func_202(iParam0, 8), func_202(iParam0, 11), iParam2);
			}
			iVar111 = unk_0x21A69BE7599CD8B7(iParam0, 3, unk_0x3FB4D40A857CEA77(iParam0, 3), 0);
			if (unk_0x4D0432E34C5996D9(iVar111, joaat("GLOVES"), 0))
			{
				iVar112 = func_657(iVar5, iVar110, iVar109, iParam2);
				if (iVar112 == -99)
				{
					iVar112 = func_664(iParam0, iVar5, 11, iVar109, 3, 0);
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
						iVar113 = func_184(iVar5, iParam2, 11, 4);
						if (!unk_0x4D0432E34C5996D9(iVar113, joaat("DRESS"), 0))
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
						if (func_656(iVar5, iVar112, iVar114) == iVar111)
						{
							iVar11 = iVar114;
							iVar12 = unk_0x79AFA009D186C4FB(iParam0, 3);
						}
						iVar114++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			unk_0x45F588C0DD767737(iParam0, func_172(iParam1), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, unk_0xABAC9462CD887571(iParam0, func_172(iParam1)));
		}
		else
		{
			unk_0x45F588C0DD767737(iParam0, func_172(iParam1), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_76645 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_664(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_553(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_657(iVar5, iVar3, func_202(iParam0, 11), func_202(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = func_664(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_553(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (func_575(iParam0))
				{
					iVar115 = func_573(iParam0, iVar5, iParam1, iParam2);
					if (iVar115 > 0)
					{
						iVar115 = (iVar115 + unk_0x79AFA009D186C4FB(iParam0, 9));
						if (!func_572(iParam0, 9, iVar115))
						{
							func_553(iParam0, 9, iVar115, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_553(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar8 = unk_0x21A69BE7599CD8B7(iParam0, 8, unk_0x3FB4D40A857CEA77(iParam0, 8), unk_0x79AFA009D186C4FB(iParam0, 8));
					if (unk_0x4D0432E34C5996D9(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_553(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar116 = func_208(2041, -1, 0);
				if (unk_0x3FB4D40A857CEA77(iParam0, 5) != 0)
				{
					unk_0x45F588C0DD767737(iParam0, 5, func_566(iParam0, iVar116), func_565(iParam0, iVar116), func_564(iParam0, iVar116));
				}
				if (iParam0 == unk_0x9B0761B4C3EB8BC7())
				{
					unk_0xA853059BD252952D(unk_0x460153A63B9477BC(), 5, func_566(unk_0x9B0761B4C3EB8BC7(), iVar116), func_565(unk_0x9B0761B4C3EB8BC7(), iVar116), 0);
					unk_0x7A5A002019151CCC(unk_0x460153A63B9477BC(), func_564(unk_0x9B0761B4C3EB8BC7(), iVar116));
					func_563(unk_0x460153A63B9477BC(), iVar116);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 92) || (iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 55))
				{
					if (unk_0x4D0432E34C5996D9(Global_2621444, joaat("BIG_CHAIN"), 0))
					{
						func_553(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar117 = func_672(iParam0, 4, -1);
					iVar118 = iParam2;
				}
				else
				{
					iVar117 = iParam2;
					iVar118 = func_672(iParam0, 11, -1);
				}
				if (func_562(iVar5, 11, iVar118, -1))
				{
					if (!func_561(iVar5, 4, iVar117, -1))
					{
						if (func_560(iVar5, 4, iVar117, &uVar119))
						{
							func_553(iParam0, 4, uVar119, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (func_561(iVar5, 4, iVar117, -1))
				{
					if (func_559(iVar5, 4, iVar117, &uVar119))
					{
						func_553(iParam0, 4, uVar119, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar120 = unk_0x3FB4D40A857CEA77(iParam0, 6);
				iVar121 = unk_0x79AFA009D186C4FB(iParam0, 6);
				iVar122 = unk_0x21A69BE7599CD8B7(iParam0, 6, iVar120, iVar121);
				iVar123 = unk_0x3FB4D40A857CEA77(iParam0, 4);
				iVar124 = unk_0x79AFA009D186C4FB(iParam0, 4);
				iVar125 = unk_0x21A69BE7599CD8B7(iParam0, 4, iVar123, iVar124);
				iVar126 = func_202(iParam0, 4);
				iVar127 = func_202(iParam0, 6);
				if (func_558(iVar5, iVar122))
				{
					if (unk_0x4D0432E34C5996D9(iVar122, joaat("ALT_FEET"), 0) != func_557(iVar5, iVar126, iVar122))
					{
						iVar128 = unk_0x164989BEE998606B(iVar122);
						iVar129 = 0;
						while (iVar129 < iVar128)
						{
							unk_0x0CB8E5A136C709DC(iVar122, iVar129, &iVar130, &uVar131, &iVar132);
							if (iVar132 == 6)
							{
								if (iVar130 != 0 && iVar130 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar127 = func_189(iVar5, iVar130, 6, 3);
										iVar122 = iVar130;
										func_553(iParam0, 6, iVar127, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar127 = func_189(iVar5, iVar130, 6, 4);
										iVar122 = iVar130;
										func_553(iParam0, 6, iVar127, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar129 = iVar128 + 1;
								}
							}
							iVar129++;
						}
					}
					else if (unk_0x4D0432E34C5996D9(iVar125, joaat("ALT_LEGS"), 0) != func_556(iVar5, iVar127, iVar125))
					{
						iVar128 = unk_0x164989BEE998606B(iVar125);
						iVar129 = 0;
						while (iVar129 < iVar128)
						{
							unk_0x0CB8E5A136C709DC(iVar125, iVar129, &iVar130, &uVar131, &iVar132);
							if (iVar132 == 4)
							{
								if (iVar130 != 0 && iVar130 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar126 = func_189(iVar5, iVar130, 4, 3);
										iVar125 = iVar130;
										func_553(iParam0, 4, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar126 = func_189(iVar5, iVar130, 4, 4);
										iVar125 = iVar130;
										func_553(iParam0, 4, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar129 = iVar128 + 1;
								}
							}
							iVar129++;
						}
					}
				}
				if (func_558(iVar5, iVar125))
				{
					if (unk_0x4D0432E34C5996D9(iVar125, joaat("ALT_LEGS"), 0) != func_556(iVar5, iVar127, iVar125))
					{
						iVar128 = unk_0x164989BEE998606B(iVar125);
						iVar129 = 0;
						while (iVar129 < iVar128)
						{
							unk_0x0CB8E5A136C709DC(iVar125, iVar129, &iVar130, &uVar131, &iVar132);
							if (iVar132 == 4)
							{
								if (iVar130 != 0 && iVar130 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar126 = func_189(iVar5, iVar130, 4, 3);
										iVar125 = iVar130;
										func_553(iParam0, 4, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar126 = func_189(iVar5, iVar130, 4, 4);
										iVar125 = iVar130;
										func_553(iParam0, 4, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar129 = iVar128 + 1;
								}
							}
							iVar129++;
						}
					}
					else if (unk_0x4D0432E34C5996D9(iVar122, joaat("ALT_FEET"), 0) != func_557(iVar5, iVar126, iVar122))
					{
						iVar128 = unk_0x164989BEE998606B(iVar122);
						iVar129 = 0;
						while (iVar129 < iVar128)
						{
							unk_0x0CB8E5A136C709DC(iVar122, iVar129, &iVar130, &uVar131, &iVar132);
							if (iVar132 == 6)
							{
								if (iVar130 != 0 && iVar130 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar127 = func_189(iVar5, iVar130, 6, 3);
										iVar122 = iVar130;
										func_553(iParam0, 6, iVar127, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar127 = func_189(iVar5, iVar130, 6, 4);
										iVar122 = iVar130;
										func_553(iParam0, 6, iVar127, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_658(iParam0);
				iVar133 = unk_0x3FB4D40A857CEA77(iParam0, 1);
				iVar134 = unk_0x79AFA009D186C4FB(iParam0, 1);
				iVar135 = unk_0x21A69BE7599CD8B7(iParam0, 1, iVar133, iVar134);
				if (unk_0x4D0432E34C5996D9(iVar135, joaat("FORCE_PROP"), 0))
				{
					iVar3 = func_664(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_553(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = func_664(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_553(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_554(iParam0, &uVar4))
		{
			func_553(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_553(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar9 != -99)
	{
		func_553(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_553(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar11 != -1)
	{
		iVar136 = func_656(iVar5, func_672(iParam0, 3, -1), iVar11);
		if (iVar136 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = func_189(iVar5, iVar136, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = func_189(iVar5, iVar136, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 = (iVar10 + iVar12);
				func_553(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_76645 = (Global_76645 - 1);
	return 1;
}

int func_554(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_672(unk_0x9B0761B4C3EB8BC7(), 2, -1);
	if (func_208(753, Global_76644, 0) != -99 && func_543())
	{
		if (func_555() == 4)
		{
			return 1;
		}
		if (func_208(753, Global_76644, 0) == 0 && func_208(754, Global_76644, 0) == 0)
		{
			if (func_547(161, Global_76644))
			{
				if (func_208(2052, Global_76644, 0) == 0)
				{
					return 0;
				}
			}
			else if (func_208(752, Global_76644, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = func_208(753, Global_76644, 0);
		iVar1 = func_208(754, Global_76644, 0);
		if (!func_572(iParam0, iVar1, iVar0))
		{
			if (func_547(161, Global_76644))
			{
				*uParam1 = func_208(2052, Global_76644, 0);
			}
			else
			{
				*uParam1 = func_208(752, Global_76644, 0);
			}
			func_206(753, -99, Global_76644, 1, 0);
			func_206(754, 2, Global_76644, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_555()
{
	return Global_1312829;
}

int func_556(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_184(iParam0, iParam1, 6, 3);
			}
			if (unk_0x4D0432E34C5996D9(iParam2, 1137160120, 0))
			{
				if (unk_0x4D0432E34C5996D9(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (unk_0x4D0432E34C5996D9(iVar0, joaat("COWBOY_BOOTS"), 0))
			{
				if ((unk_0x4D0432E34C5996D9(iParam2, joaat("GUN_DRAW_0"), 0) || unk_0x4D0432E34C5996D9(iParam2, joaat("GUN_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iParam2, joaat("GORKA_SUIT"), 0))
				{
					return 0;
				}
			}
			if (unk_0x4D0432E34C5996D9(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				if ((((((((((unk_0x4D0432E34C5996D9(iVar0, joaat("PILOT_SUIT"), 0) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("APART_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("APART_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("COWBOY_BOOTS"), 0))
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_184(iParam0, iParam1, 6, 4);
			}
			if (unk_0x4D0432E34C5996D9(iParam2, 1137160120, 0))
			{
				if (unk_0x4D0432E34C5996D9(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (unk_0x4D0432E34C5996D9(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				if (((((((((unk_0x4D0432E34C5996D9(iVar0, joaat("PILOT_SUIT"), 0) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("APART_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_8"), 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
	return 0;
}

int func_557(int iParam0, int iParam1, int iParam2)
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
				iVar0 = func_184(iParam0, iParam1, 4, 3);
				iVar1 = func_649(iVar0);
			}
			if (unk_0x4D0432E34C5996D9(iParam2, joaat("COWBOY_BOOTS"), 0) || unk_0x4D0432E34C5996D9(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				iVar2 = 1;
				if (((((((((((((((((((((((iParam1 >= 32 && iParam1 <= 47) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 224 && iParam1 <= 239)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar1 == 2) || iVar1 == 4) || iVar1 == 6) || iVar1 == 11) || iVar1 == 12) || iVar1 == 14) || iVar1 == 15) || unk_0x4D0432E34C5996D9(iVar0, joaat("SILK_ROBE"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("SKINNY"), 0)) || (unk_0x4D0432E34C5996D9(iVar0, joaat("GUN_DRAW_0"), 0) && !unk_0x4D0432E34C5996D9(iParam2, joaat("COWBOY_BOOTS"), 0))) || (unk_0x4D0432E34C5996D9(iVar0, joaat("GUN_DRAW_1"), 0) && !unk_0x4D0432E34C5996D9(iParam2, joaat("COWBOY_BOOTS"), 0))) || (unk_0x4D0432E34C5996D9(iVar0, joaat("GORKA_SUIT"), 0) && !unk_0x4D0432E34C5996D9(iParam2, joaat("COWBOY_BOOTS"), 0)))
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
				if (((unk_0x4D0432E34C5996D9(iParam2, joaat("SMUG_DRAW_0"), 0) || unk_0x4D0432E34C5996D9(iParam2, joaat("SMUG_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iParam2, joaat("BATTLE_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iParam2, joaat("BATTLE_DRAW_2"), 0))
				{
					if ((((((unk_0x4D0432E34C5996D9(iVar0, joaat("GUN_DRAW_0"), 0) || unk_0x4D0432E34C5996D9(iVar0, joaat("GUN_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("GORKA_SUIT"), 0))
					{
						iVar2 = 1;
					}
				}
				if (unk_0x4D0432E34C5996D9(iVar0, 1137160120, 0))
				{
					if (unk_0x4D0432E34C5996D9(iParam2, -2005216901, 0))
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
				iVar0 = func_184(iParam0, iParam1, 4, 4);
				iVar1 = func_649(iVar0);
			}
			if (unk_0x4D0432E34C5996D9(iParam2, joaat("COWBOY_BOOTS"), 0) || unk_0x4D0432E34C5996D9(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				if (unk_0x4D0432E34C5996D9(iVar0, 1137160120, 0))
				{
					if (unk_0x4D0432E34C5996D9(iParam2, -2005216901, 0))
					{
						return 0;
					}
				}
				if ((unk_0x4D0432E34C5996D9(iVar0, joaat("GUN_DRAW_0"), 0) || unk_0x4D0432E34C5996D9(iVar0, joaat("GUN_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("GORKA_SUIT"), 0))
				{
					if ((((unk_0x4D0432E34C5996D9(iParam2, joaat("COWBOY_BOOTS"), 0) || unk_0x4D0432E34C5996D9(iParam2, joaat("BIKER_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iParam2, joaat("BIKER_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iParam2, joaat("SMUG_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iParam2, joaat("SMUG_DRAW_1"), 0))
					{
						return 1;
					}
					return 0;
				}
				if (((((((((((((((((((((((((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 96 && iParam1 <= 111)) || iVar1 == 1) || iVar1 == 3) || iVar1 == 6) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_9"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_10"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("LOW_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("LOW2_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("APART_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("APART_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("APART_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("APART_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar0, -430330349, 0)) || unk_0x4D0432E34C5996D9(iVar0, -1103045158, 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("APART_DRAW_12"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("LOW2_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("STUNT_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("DUNGAREES"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("H3_DRAW_5"), 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_558(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (unk_0x4D0432E34C5996D9(iParam1, joaat("COWBOY_BOOTS"), 0) || unk_0x4D0432E34C5996D9(iParam1, joaat("HAS_ALT_VERSION"), 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (unk_0x4D0432E34C5996D9(iParam1, joaat("COWBOY_BOOTS"), 0) || unk_0x4D0432E34C5996D9(iParam1, joaat("HAS_ALT_VERSION"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_559(int iParam0, int iParam1, int iParam2, var uParam3)
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
						iVar0 = func_184(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0x164989BEE998606B(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0x0CB8E5A136C709DC(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (!unk_0x4D0432E34C5996D9(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_189(iParam0, iVar3, iParam1, 4);
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

int func_560(int iParam0, int iParam1, int iParam2, var uParam3)
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
						iVar0 = func_184(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0x164989BEE998606B(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0x0CB8E5A136C709DC(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (unk_0x4D0432E34C5996D9(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_189(iParam0, iVar3, iParam1, 4);
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

int func_561(int iParam0, int iParam1, int iParam2, int iParam3)
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
							iParam3 = func_184(iParam0, iParam2, 4, 4);
						}
						if (unk_0x4D0432E34C5996D9(iParam3, joaat("DRESS_LEGS"), 0))
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

int func_562(int iParam0, int iParam1, int iParam2, int iParam3)
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
							iParam3 = func_184(iParam0, iParam2, 11, 4);
						}
						return unk_0x4D0432E34C5996D9(iParam3, joaat("DRESS"), 0);
					}
					break;
			}
			break;
	}
	return 0;
}

void func_563(int iParam0, int iParam1)
{
	if (iParam1 > 61)
	{
		unk_0x2335ABA3DB9BD0AC(iParam0, joaat("vw_p_para_bag_vine_s"));
	}
	else if (iParam1 > 51)
	{
		unk_0x2335ABA3DB9BD0AC(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else if (iParam1 > 46)
	{
		unk_0x2335ABA3DB9BD0AC(iParam0, joaat("p_para_bag_xmas_s"));
	}
	else if (iParam1 > 26)
	{
		unk_0x2335ABA3DB9BD0AC(iParam0, joaat("lts_p_para_bag_lts_s"));
	}
	else if (iParam1 > 0)
	{
		unk_0x2335ABA3DB9BD0AC(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else
	{
		unk_0x32ECE704AD6A4E0B(iParam0);
	}
}

int func_564(int iParam0, int iParam1)
{
	return 0;
}

int func_565(int iParam0, int iParam1)
{
	if (iParam1 >= 62)
	{
		return (iParam1 - 62);
	}
	if (iParam1 > 51)
	{
		return (iParam1 - 52);
	}
	if (iParam1 > 46)
	{
		return (iParam1 - 47);
	}
	if (iParam1 > 26)
	{
		return (iParam1 - 27);
	}
	if (iParam1 > 0)
	{
		return (iParam1 - 1);
	}
	return iParam1;
}

var func_566(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = unk_0x3FB4D40A857CEA77(iParam0, 9) != false;
	iVar1 = unk_0x21A69BE7599CD8B7(iParam0, 8, unk_0x3FB4D40A857CEA77(iParam0, 8), unk_0x79AFA009D186C4FB(iParam0, 8));
	iVar2 = unk_0x21A69BE7599CD8B7(iParam0, 11, unk_0x3FB4D40A857CEA77(iParam0, 11), unk_0x79AFA009D186C4FB(iParam0, 11));
	iVar3 = unk_0x21A69BE7599CD8B7(iParam0, 4, unk_0x3FB4D40A857CEA77(iParam0, 4), unk_0x79AFA009D186C4FB(iParam0, 4));
	if ((((!bVar0 == Global_76808 || !iParam1 == Global_76809) || !iVar1 == Global_76810) || !iVar2 == Global_76811) || !iVar3 == Global_76812)
	{
		Global_76808 = bVar0;
		Global_76809 = iParam1;
		Global_76810 = iVar1;
		Global_76811 = iVar2;
		Global_76812 = iVar3;
		Global_76813 = func_567(iParam0, iParam1);
		if (iParam1 == 63 || iParam1 == 62)
		{
			if (unk_0x36FE6D3220816ADA(unk_0x1FA7B77001D60F9D(unk_0x460153A63B9477BC())) == joaat("mp_f_freemode_01"))
			{
				if (Global_76813 == 61)
				{
					Global_76813 = 79;
				}
				else if (Global_76813 == 39)
				{
					Global_76813 = 79;
				}
				else if (Global_76813 == 76)
				{
					Global_76813 = 80;
				}
			}
			else if (unk_0x36FE6D3220816ADA(unk_0x1FA7B77001D60F9D(unk_0x460153A63B9477BC())) == joaat("mp_m_freemode_01"))
			{
				if (Global_76813 == 61)
				{
					Global_76813 = 78;
				}
				else if (Global_76813 == 39)
				{
					Global_76813 = 78;
				}
			}
		}
	}
	return Global_76813;
}

int func_567(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = unk_0x3FB4D40A857CEA77(iParam0, 11);
	if (unk_0x3FB4D40A857CEA77(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x36FE6D3220816ADA(iParam0);
	iVar3 = 0;
	if (iParam1 > 61)
	{
		iVar3 = 69;
	}
	else if (iParam1 > 51)
	{
		iVar3 = (iParam1 - 1);
	}
	else if (iParam1 > 46)
	{
		iVar3 = 30;
	}
	else if (iParam1 > 26)
	{
		iVar3 = 20;
	}
	else if (iParam1 > 0)
	{
		iVar3 = 9;
	}
	else
	{
		iVar3 = 0;
	}
	iVar4 = unk_0x21A69BE7599CD8B7(iParam0, 8, unk_0x3FB4D40A857CEA77(iParam0, 8), unk_0x79AFA009D186C4FB(iParam0, 8));
	if (unk_0x4D0432E34C5996D9(iVar4, joaat("OVER_JACKET"), 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_2"), 8) || unk_0x4D0432E34C5996D9(iVar4, 1293534210, 8))
			{
				return (2 + iVar3);
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_3"), 8) || unk_0x4D0432E34C5996D9(iVar4, 1072212384, 8))
			{
				return func_571(iParam0, iParam1) + 15;
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_4"), 8))
			{
				return func_571(iParam0, iParam1) + 15;
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_5"), 8))
			{
				return func_571(iParam0, iParam1) + 15;
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_6"), 8))
			{
				return func_571(iParam0, iParam1) + 15;
			}
		}
		else
		{
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_2"), 8))
			{
				return (7 + iVar3);
			}
			if ((unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_3"), 8) || unk_0x4D0432E34C5996D9(iVar4, 1072212384, 8)) || unk_0x4D0432E34C5996D9(iVar4, 1293534210, 8))
			{
				return (8 + iVar3);
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_4"), 8))
			{
				return func_571(iParam0, iParam1) + 15;
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_5"), 8))
			{
				return func_571(iParam0, iParam1) + 15;
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_6"), 8))
			{
				return func_571(iParam0, iParam1) + 15;
			}
		}
		return func_571(iParam0, iParam1);
	}
	if (func_570(iParam0))
	{
		if (bVar1)
		{
			return (8 + iVar3);
		}
		else
		{
			return (2 + iVar3);
		}
	}
	if (iVar0 > 15)
	{
		iVar5 = unk_0x21A69BE7599CD8B7(iParam0, 11, iVar0, unk_0x79AFA009D186C4FB(iParam0, 11));
		if (unk_0x4D0432E34C5996D9(iVar5, joaat("HIPSTER_DRESS"), 0))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("DRESS"), 0))
		{
			if (bVar1)
			{
				return (6 + iVar3);
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("PILOT_SUIT"), 0))
		{
			if (iParam1 > 51)
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return 60;
				}
				else
				{
					return 53;
				}
			}
			else if (iParam1 > 46)
			{
				return 39;
			}
			else if (iParam1 > 26)
			{
				return 29;
			}
			else if (iParam1 > 0)
			{
				return 18;
			}
			else
			{
				return 19;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("COMBAT_GEAR"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("HOODED_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_5"), 0))
			{
				return func_571(iParam0, iParam1) + 15;
			}
			else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_32"), 0))
			{
				return func_571(iParam0, iParam1) + 15;
			}
			else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_33"), 0))
			{
				return func_571(iParam0, iParam1) + 15;
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE_COAT"), 0) && !unk_0x4D0432E34C5996D9(iVar5, joaat("X17_DRAW_3"), 0))
		{
			iVar6 = func_569(iVar5, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar6)
				{
					case 0:
						return (2 + iVar3);
						break;
					
					case 2:
						if (iParam1 > 46)
						{
							return 39;
						}
						else if (iParam1 > 26)
						{
							return 29;
						}
						else if (iParam1 > 0)
						{
							return 18;
						}
						else
						{
							return 19;
						}
						break;
					
					default:
						iVar0 = func_649(iVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 2:
						return (7 + iVar3);
						break;
					
					default:
						iVar0 = func_649(iVar5);
						break;
					}
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE_BOMB"), 0))
		{
			if (unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE_DRAW_4"), 0))
			{
				return (3 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("HEIST_GEAR"), 0))
		{
			iVar7 = func_568(iVar5, 0);
			switch (iVar7)
			{
				case 4:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 28;
					}
					else if (iParam1 > 0)
					{
						return 17;
					}
					else
					{
						return 8;
					}
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 14:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 29;
					}
					else if (iParam1 > 0)
					{
						return 18;
					}
					else
					{
						return 19;
					}
					break;
				
				default:
					iVar0 = func_649(iVar5);
					break;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("XMAS2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_7"), 0) || unk_0x4D0432E34C5996D9(iVar5, joaat("JAN_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_8"), 0) || unk_0x4D0432E34C5996D9(iVar5, joaat("JAN_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x4D0432E34C5996D9(iVar5, joaat("AIR_DRAW_3"), 0))
				{
					return func_571(iParam0, iParam1) + 15;
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
		}
		else if ((unk_0x4D0432E34C5996D9(iVar5, -1086258388, 0) || unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE_SWEAT"), 0)) || unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_SWEAT"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else if (bVar1)
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_571(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (7 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_571(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar3);
				}
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
	}