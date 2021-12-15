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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0,0375f;
	fLocal_29 = 0,17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	iLocal_44 = 1;
	iLocal_45 = 65;
	iLocal_46 = 49;
	iLocal_47 = 64;
	vLocal_64 = { -1124,392f, -514,7001f, 33,21493f };
	fLocal_67 = 200f;
	vLocal_68 = { 2490f, 3777f, 2402,879f };
	vLocal_71 = { -2052f, 3237f, 1450,078f };
	iLocal_74 = -1;
	iLocal_76 = -1;
	bLocal_85 = true;
	fLocal_86 = 10f;
	fLocal_87 = 90f;
	fLocal_88 = 35f;
	fLocal_89 = 60f;
	fLocal_90 = 275f;
	iLocal_91 = 1500;
	iLocal_92 = -1;
	iLocal_94 = 3000;
	iLocal_95 = 708;
	iLocal_96 = 377;
	iLocal_97 = 1000;
	iLocal_98 = 2093;
	iLocal_101 = -1;
	iLocal_102 = -1;
	bLocal_103 = true;
	bLocal_104 = true;
	if (unk_0x2EBF608FFE6CA406(3))
	{
		func_12();
	}
	while (unk_0x757EF87A33649210())
	{
		wait(0);
	}
	if (!unk_0xBCFF5481C5F58C19("ufo"))
	{
		unk_0x2404539258C5376B("ufo");
	}
	vLocal_78[0] = { vLocal_68 };
	vLocal_78[1] = { vLocal_71 };
	while (true)
	{
		func_11(unk_0x16F2683693E537C9());
		if (Global_30772 == 1)
		{
			func_12();
		}
		if (bLocal_85)
		{
			if (!func_10(unk_0x16F2683693E537C9(), vLocal_78[0], (290f + 50f)))
			{
				if (!func_10(unk_0x16F2683693E537C9(), vLocal_78[1], (290f + 50f)))
				{
					func_12();
				}
			}
			if (iLocal_77 != 0)
			{
				if (!func_10(unk_0x16F2683693E537C9(), vLocal_78[0], (fLocal_90 + 50f)))
				{
					if (!func_10(unk_0x16F2683693E537C9(), vLocal_78[1], (fLocal_90 + 50f)))
					{
						unk_0xE108118042391BB3("AZ_SPECIAL_UFO_01", 0, 1);
						unk_0xE108118042391BB3("AZ_SPECIAL_UFO_02", 0, 1);
						iLocal_77 = 0;
						iLocal_76 = -1;
					}
				}
			}
		}
		func_8();
		switch (iLocal_77)
		{
			case 0:
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < vLocal_78.x)
				{
					if (func_10(unk_0x16F2683693E537C9(), vLocal_78[iVar0], fLocal_90))
					{
						iLocal_76 = iVar0;
						iLocal_77 = 1;
						unk_0xE108118042391BB3("AZ_SPECIAL_UFO_01", 1, 1);
						unk_0xE108118042391BB3("AZ_SPECIAL_UFO_02", 1, 1);
					}
					iVar0++;
				}
				break;
			
			case 1:
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < vLocal_78.x)
				{
					if (func_10(unk_0x16F2683693E537C9(), vLocal_78[iVar0], fLocal_87))
					{
						iLocal_76 = iVar0;
						iLocal_77 = 2;
					}
					iVar0++;
				}
				break;
			
			case 2:
				if (iLocal_76 == -1)
				{
					iLocal_77 = 1;
				}
				else
				{
					iLocal_74 = unk_0x1C0640BA9A7327B3();
					iLocal_75 = 0;
					iLocal_77 = 3;
				}
				break;
			
			case 3:
				if (func_10(unk_0x16F2683693E537C9(), vLocal_78[iLocal_76], fLocal_87))
				{
					iLocal_75 = (unk_0x1C0640BA9A7327B3() - iLocal_74);
					if (iLocal_75 >= iLocal_91)
					{
						iLocal_77 = 4;
						iLocal_92 = unk_0xD68EA767274B7444();
						iLocal_93 = unk_0x1C0640BA9A7327B3();
						if (iLocal_76 == 0)
						{
							unk_0xEB819BD1E585E9CB(iLocal_92, "SPECIAL_EVIL_UFO_DEATH_RAY", vLocal_78[iLocal_76], 0, 0, 0, 0);
						}
						else
						{
							unk_0xEB819BD1E585E9CB(iLocal_92, "SPECIAL_EVIL_UFO_DEATH_RAY_3", vLocal_78[iLocal_76], 0, 0, 0, 0);
						}
						func_7();
						func_6();
					}
				}
				else
				{
					iLocal_77 = 1;
				}
				break;
			
			case 4:
				func_5();
				func_7();
				func_6();
				if (unk_0x1C0640BA9A7327B3() > (iLocal_93 + iLocal_94))
				{
					func_4(&iLocal_92);
				}
				if (!func_10(unk_0x16F2683693E537C9(), vLocal_78[iLocal_76], fLocal_90))
				{
					func_1();
					iLocal_76 = -1;
					iLocal_77 = 0;
					func_4(&iLocal_102);
					func_4(&iLocal_101);
					unk_0xE108118042391BB3("AZ_SPECIAL_UFO_01", 0, 1);
					unk_0xE108118042391BB3("AZ_SPECIAL_UFO_02", 0, 1);
				}
				break;
		}
		wait(0);
	}
}

void func_1()
{
	if (func_11(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (func_2(iVar0))
			{
				unk_0x56FDC9ADE35F7DB0(iVar0, true, 0, 0);
			}
		}
	}
}

int func_2(int iParam0)
{
	if (func_3(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (!unk_0x4E861BC5B1EDA7BD(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_3(int iParam0)
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

void func_4(int iParam0)
{
	if (*iParam0 != -1)
	{
		unk_0x55D0A2DB35045A35(*iParam0);
		unk_0x43A06902454A1172(*iParam0);
		*iParam0 = -1;
	}
}

void func_5()
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (func_2(iVar0))
		{
			unk_0x56FDC9ADE35F7DB0(iVar0, false, 0, 0);
			unk_0xDFC6BA855748EB10(iVar0, 2, 0f, 0f, -fLocal_86, 0f, 1f, 0f, 0, 0, 1, 1, 0, 1);
		}
	}
}

void func_6()
{
	if (bLocal_104)
	{
		if (unk_0x1C0640BA9A7327B3() > iLocal_99)
		{
			if (iLocal_101 != -1)
			{
				func_4(&iLocal_101);
				iLocal_99 = (unk_0x1C0640BA9A7327B3() + iLocal_98);
			}
			else
			{
				iLocal_101 = unk_0xD68EA767274B7444();
				unk_0x22293E611B2408F1(iLocal_101, "ent_amb_elec_crackle", 0, 0, 0, 1);
				iLocal_99 = (unk_0x1C0640BA9A7327B3() + iLocal_96);
			}
		}
	}
}

void func_7()
{
	if (bLocal_103)
	{
		if (unk_0x1C0640BA9A7327B3() > iLocal_100)
		{
			if (iLocal_102 != -1)
			{
				func_4(&iLocal_102);
				iLocal_100 = (unk_0x1C0640BA9A7327B3() + iLocal_97);
			}
			else
			{
				iLocal_102 = unk_0xD68EA767274B7444();
				unk_0x22293E611B2408F1(iLocal_102, "spl_stun_npc_master", 0, 0, 0, 1);
				iLocal_100 = (unk_0x1C0640BA9A7327B3() + iLocal_95);
			}
		}
	}
}

void func_8()
{
	if (iLocal_76 == -1)
	{
		return;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		return;
	}
	if (!func_10(unk_0x16F2683693E537C9(), vLocal_78[iLocal_76], fLocal_88))
	{
		return;
	}
	vVar0 = { func_9(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) - vLocal_78[iLocal_76]) * Vector(fLocal_89, fLocal_89, fLocal_89) };
	unk_0xDFC6BA855748EB10(unk_0x16F2683693E537C9(), 2, vVar0, 0f, 0f, 0f, 0, 0, 1, 1, 0, 1);
}

Vector3 func_9(vector3 vParam0)
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

bool func_10(int iParam0, vector3 vParam1, float fParam4)
{
	return vdist2(unk_0x68F4C0EC296D3901(iParam0, 1), vParam1) <= (fParam4 * fParam4);
}

bool func_11(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	return !unk_0x437347B10A200C4B(iParam0, 0);
}

void func_12()
{
	if (unk_0xBCFF5481C5F58C19("ufo"))
	{
		unk_0x81CF20E10AAD5FD5("ufo");
	}
	func_4(&iLocal_102);
	func_4(&iLocal_101);
	func_4(&iLocal_92);
	unk_0xE108118042391BB3("AZ_SPECIAL_UFO_01", 0, 1);
	unk_0xE108118042391BB3("AZ_SPECIAL_UFO_02", 0, 1);
	func_1();
	unk_0x10FAF14A60A0DBE1();
}

