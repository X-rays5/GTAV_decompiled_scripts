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
	iLocal_89 = 29;
	fLocal_6199 = 0,075f;
	fLocal_6200 = 0,725f;
	iLocal_6207 = 1;
	iLocal_6208 = 1;
	bLocal_6214 = true;
	unk_0x7798376279BB5369(1);
	if (unk_0x2EBF608FFE6CA406(3))
	{
		func_41();
	}
	unk_0x53491B90E4FD0E56(0);
	unk_0x752C7D5696C0D8A0(1);
	func_34(1);
	if (func_33(unk_0x16F2683693E537C9()))
	{
		unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 689,1f, 586,5f, 130,5f, 1, false, 0, 1);
		unk_0x745CE398A4B0A3C6(689,1f, 586,5f, 130,5f, 500f, 0);
		unk_0xE3A2D2E900FEFBE7(unk_0x16F2683693E537C9(), 1);
	}
	unk_0xAE1670DD12E839C3("les_1b_mcs_2_p2_a1", 8);
	func_16(1);
	while (unk_0x4B111E6C3450F2E0(unk_0x16F2683693E537C9()))
	{
		wait(0);
	}
	func_6(1, 1, 1, 0, 0, 0);
	unk_0x82E51BCA72537B6C(0);
	while (true)
	{
		unk_0xD60411959D5D930B(0f);
		unk_0x6A36BC55C7F6D023(0f);
		func_33(unk_0x16F2683693E537C9());
		if (func_1())
		{
			func_41();
		}
		wait(0);
	}
}

int func_1()
{
	unk_0x71592C07333285FE(vLocal_21.x, vLocal_21.y, vLocal_21.z);
	unk_0x068D69E275339485(-1f);
	switch (iLocal_6209)
	{
		case 0:
			unk_0x82E51BCA72537B6C(0);
			func_5();
			unk_0x82E51BCA72537B6C(500);
			unk_0x4C902758BEA97C68(0);
			iLocal_6209++;
			break;
		
		case 1:
			if (!unk_0x154B5473FBFD0156())
			{
				if (bLocal_6214)
				{
					func_3();
				}
				unk_0x3039591AD3E735CE(iLocal_6203);
				unk_0xEF45C43067063F18(iLocal_6201, 0,2f, 0,34f, 0,410001f, 0,69f, 100, 100, 100, 255, 0);
				unk_0x3039591AD3E735CE(iLocal_6204);
				if (bLocal_6205)
				{
					unk_0x7E60C62A7CE58FC8(iLocal_6202, "SET_TEXT");
					func_2("KEYNOTE_NAME");
					func_2("KEYNOTE_TITLE");
					unk_0x7E60D21B163E9D56();
					unk_0xEF45C43067063F18(iLocal_6202, 0,5f, 0,5f, 1f, 1f, 100, 100, 100, 255, 0);
				}
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_2(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_3()
{
	iVar0 = unk_0x8F677B1F58B4741C();
	iVar1 = 0;
	while (iVar1 <= (16 - 1))
	{
		if (Local_24[iVar1] != -1)
		{
			if ((!unk_0xEAE0D21A50E6C7F4(iLocal_58, iVar1) && iVar0 >= Local_24[iVar1]) && iVar0 < Local_24.f_17[iVar1])
			{
				func_4();
				unk_0x5D96D8530B3D0904(&iLocal_58, iVar1);
			}
		}
		iVar1++;
	}
}

void func_4()
{
}

void func_5()
{
}

void func_6(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_15(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_14())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_13(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_15(0);
		unk_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_13(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_11(unk_0xD803B885F5E47A62())) && !func_8(unk_0xD803B885F5E47A62(), 0)) && !func_7()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_11(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_7()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 14);
}

bool func_8(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_9(-1, 0) == 8;
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

int func_9(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_10();
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

int func_10()
{
	return Global_1312745;
}

int func_11(int iParam0)
{
	if (func_8(iParam0, 0))
	{
		return 1;
	}
	if (func_12())
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

bool func_12()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_13(int iParam0, int iParam1, var uParam2, int iParam3)
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

int func_14()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_15(int iParam0)
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

void func_16(bool bParam0)
{
	if (func_33(unk_0x16F2683693E537C9()))
	{
		unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 689,1f, 586,5f, 130,5f, 1, false, 0, 1);
		unk_0x745CE398A4B0A3C6(689,1f, 586,5f, 130,5f, 500f, 0);
		unk_0xE3A2D2E900FEFBE7(unk_0x16F2683693E537C9(), 1);
	}
	func_32(0);
	func_31(&iLocal_6213, 0);
	unk_0x9E632F16E887F781(689,1f, 586,5f, 130,5f, 80f, 0);
	while (!unk_0x68367101660E33F0())
	{
		wait(0);
	}
	unk_0x486B4ADE317F0689();
	if (bParam0)
	{
		unk_0x2404539258C5376B("LInvader");
		while (!unk_0xBCFF5481C5F58C19("LInvader"))
		{
			wait(0);
		}
	}
	unk_0xB8D67B901BB44E97("EXTRASUNNY");
	iLocal_59[0] = 587703123;
	iLocal_59[1] = 349505262;
	iLocal_59[2] = 1312913862;
	iLocal_59[3] = -2109222095;
	iLocal_59[4] = -1745486195;
	iLocal_59[5] = -1514497514;
	iLocal_59[6] = 429425116;
	iLocal_59[7] = 1146800212;
	iLocal_59[8] = 2120901815;
	iLocal_59[9] = 1068876755;
	iLocal_59[10] = -640198516;
	iLocal_59[11] = 2114544056;
	iLocal_59[12] = 1982350912;
	iLocal_59[13] = -1106743555;
	iLocal_59[14] = -782401935;
	iLocal_59[15] = -1697435671;
	iLocal_59[16] = -1280051738;
	iLocal_59[17] = -775102410;
	iLocal_59[18] = 696250687;
	iLocal_59[19] = 1068876755;
	iLocal_59[20] = -1589423867;
	iLocal_59[21] = -1519253631;
	iLocal_59[22] = 803106487;
	iLocal_59[22] = -1519253631;
	iLocal_59[23] = 377976310;
	iLocal_59[24] = -1398552374;
	iLocal_59[25] = 1264851357;
	iLocal_59[26] = 1561705728;
	iLocal_59[27] = 534725268;
	iLocal_59[28] = 835315305;
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		func_29(func_30(iVar0), 1);
		iVar0++;
	}
	func_29("misslester1b_crowdlow@14@", 1);
	func_29("misslester1b_crowdlow@24@", 1);
	func_28("BREAKING_NEWS", &iLocal_6202, 1);
	func_28("lifeinvader_presentation", &iLocal_6201, 1);
	func_27("LEST1", 0, 1, 0);
	iVar0 = 0;
	while (iVar0 <= 26)
	{
		func_21(&(Local_90[iVar0]), iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_20(&(Local_4898[iVar0]), iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		func_19(&(Local_5620[iVar0]), iVar0);
		iVar0++;
	}
	unk_0xD9ACBBA59FD5A09E(1);
	unk_0x268029E44B2B3E36("Big_Disp", 0);
	unk_0x064E7408AD6E15E5(-984871726);
	unk_0x064E7408AD6E15E5(-752703361);
	iLocal_6203 = unk_0x3FF702268B97B673("Big_Disp");
	iLocal_6204 = unk_0x1D14FD94FCD601B4();
	while (unk_0x4B111E6C3450F2E0(unk_0x16F2683693E537C9()))
	{
		wait(0);
	}
	while (!unk_0x62A1F4500E8F07E0())
	{
		wait(0);
	}
	wait(2000);
	iLocal_6209 = 0;
	vLocal_21.x = 12;
	vLocal_21.y = 0;
	vLocal_21.z = 0;
	iVar0 = 0;
	while (iVar0 <= (16 - 1))
	{
		func_17(iVar0);
		iVar0++;
	}
	if (bLocal_6206)
	{
	}
}

void func_17(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_18(iParam0, 0, 10000);
			break;
		
		case 1:
			func_18(iParam0, 9000, 10000);
			break;
		
		case 2:
			func_18(iParam0, 27000, 32000);
			break;
		
		case 3:
			func_18(iParam0, 32000, 42000);
			break;
		
		case 4:
			func_18(iParam0, 51000, 63000);
			break;
		
		case 5:
			func_18(iParam0, 63600, 69000);
			break;
		
		case 6:
			func_18(iParam0, 66000, 70200);
			break;
		
		case 7:
			func_18(iParam0, 69600, 79200);
			break;
		
		case 8:
			func_18(iParam0, 77400, 84000);
			break;
		
		case 12:
			func_18(iParam0, 81000, 93600);
			break;
		
		case 9:
			func_18(iParam0, -1, -1);
			break;
		
		case 11:
			func_18(iParam0, 90000, 154200);
			break;
		
		case 10:
			func_18(iParam0, 129600, 133200);
			break;
		
		case 13:
			func_18(iParam0, 144600, 154200);
			break;
		
		case 14:
			func_18(iParam0, 152700, 154200);
			break;
		
		case 15:
			func_18(iParam0, 154200, 154200);
			break;
	}
}

void func_18(int iParam0, int iParam1, int iParam2)
{
	Local_24[iParam0] = iParam1;
	Local_24.f_17[iParam0] = iParam2;
}

void func_19(var uParam0, int iParam1)
{
	uParam0->f_22 = 0;
	unk_0x0674E58A79778E99(&uLocal_6197, iParam1);
	if (iParam1 == 0 && uParam0->f_22 == 0)
	{
	}
}

void func_20(var uParam0, int iParam1)
{
	uParam0->f_22 = 0;
	unk_0x0674E58A79778E99(&uLocal_5619, iParam1);
	if (iParam1 == 0 && uParam0->f_22 == 0)
	{
	}
}

void func_21(var uParam0, int iParam1)
{
	func_26(uParam0);
	unk_0x0674E58A79778E99(&uLocal_4897, iParam1);
	switch (iParam1)
	{
		case 0:
			vVar0 = { 0f, 0f, (func_25(-4,29f) + 180f) };
			func_23(uParam0, 82047830, 667,319f, 572,133f, 128,521f, vVar0, 6, 0, 0);
			func_23(uParam0, 83248680, 666,312f, 571,675f, 128,521f, vVar0, 6, 1, 0);
			func_23(uParam0, 71526810, 665,235f, 571,183f, 128,521f, vVar0, 6, 2, 0);
			func_23(uParam0, 49826530, 664,124f, 570,679f, 128,521f, vVar0, 6, 0, 0);
			func_23(uParam0, 78575440, 663,029f, 570,181f, 128,521f, vVar0, 6, 1, 0);
			func_23(uParam0, 12133230, 661,937f, 569,685f, 128,521f, vVar0, 6, 2, 0);
			func_23(uParam0, 89665750, 660,839f, 569,194f, 128,521f, vVar0, 6, 0, 0);
			func_23(uParam0, 65990810, 659,537f, 569,392f, 128,521f, vVar0, 6, 1, 0);
			func_23(uParam0, 21233450, 658,187f, 569,572f, 128,523f, vVar0, 4, 0, 1f);
			func_22(&(uParam0->f_155[0]), 659,867f, 571,539f, 128,531f, vVar0, 0, 0,5f, -1,5f);
			func_22(&(uParam0->f_155[1]), 660,646f, 567,108f, 128,521f, vVar0, 0, 0,5f, -1,5f);
			break;
		
		case 1:
			vVar0 = { 0f, 0f, (func_25(-3,98f) + 180f) };
			func_23(uParam0, 21091970, 670,312f, 568,023f, 128,521f, vVar0, 5, 0, 0,5f);
			func_23(uParam0, 97482490, 669,189f, 567,502f, 128,522f, vVar0, 6, 1, 0);
			func_23(uParam0, 66764240, 668,28f, 566,688f, 128,522f, vVar0, 6, 0, 0);
			func_23(uParam0, 82832850, 667,384f, 565,885f, 128,522f, vVar0, 6, 2, 0);
			func_23(uParam0, 33636100, 666,491f, 565,085f, 128,522f, vVar0, 6, 0, 0);
			func_23(uParam0, 22769640, 665,595f, 564,282f, 128,522f, vVar0, 6, 1, 0);
			break;
		
		case 2:
			vVar0 = { 0f, 0f, (func_25(-3,78f) + 180f) };
			func_23(uParam0, 91480760, 673,7f, 564,799f, 128,521f, vVar0, 6, 0, 0);
			func_23(uParam0, 64996320, 672,996f, 563,847f, 128,521f, vVar0, 6, 1, 0);
			func_23(uParam0, 30855220, 672,271f, 562,865f, 128,521f, vVar0, 6, 2, 0);
			func_23(uParam0, 98921990, 671,557f, 561,897f, 128,521f, vVar0, 6, 0, 0);
			func_23(uParam0, 73357200, 670,258f, 561,366f, 128,522f, vVar0, 6, 1, 0);
			func_22(&(uParam0->f_155[0]), 669,564f, 563,469f, 128,521f, vVar0, 2, -1,5f, -1,5f);
			func_22(&(uParam0->f_155[1]), 672,34f, 559,914f, 128,522f, vVar0, 2, -1,5f, -1,5f);
			break;
		
		case 3:
			vVar0 = { 0f, 0f, (func_25(-3,38f) + 180f) };
			func_23(uParam0, 89689390, 681,517f, 555,801f, 128,522f, vVar0, 6, 0, 0);
			func_23(uParam0, 71057000, 681,796f, 556,967f, 128,522f, vVar0, 6, 1, 0);
			func_23(uParam0, 26206390, 682,076f, 558,137f, 128,522f, vVar0, 6, 2, 0);
			func_23(uParam0, 58207860, 682,36f, 559,342f, 128,522f, vVar0, 6, 0, 0);
			func_23(uParam0, 43622440, 682,635f, 560,475f, 128,522f, vVar0, 6, 1, 0);
			break;
		
		case 4:
			vVar0 = { 0f, 0f, (func_25(-3,17f) + 180f) };
			func_23(uParam0, 78555440, 687,841f, 559,785f, 128,522f, vVar0, 6, 0, 0);
			func_23(uParam0, 12324420, 687,807f, 558,602f, 128,522f, vVar0, 6, 1, 0);
			func_23(uParam0, 4083210, 687,771f, 557,382f, 128,522f, vVar0, 6, 2, 0);
			func_23(uParam0, 2021980, 688,465f, 556,159f, 128,522f, vVar0, 6, 0, 0);
			func_23(uParam0, 21091970, 688,431f, 554,961f, 128,521f, vVar0, 6, 1, 0);
			func_22(&(uParam0->f_155[0]), 685,931f, 556,306f, 128,522f, vVar0, 0, 0,5f, -1,5f);
			func_22(&(uParam0->f_155[1]), 685,897f, 555,108f, 128,521f, vVar0, 1, -1,5f, -1,5f);
			break;
		
		case 5:
			vVar0 = { 0f, 0f, (func_25(-2,97f) + 180f) };
			func_23(uParam0, 31491440, 692,632f, 559,992f, 128,522f, vVar0, 5, 2, -0,5f);
			func_23(uParam0, 34393340, 693,189f, 558,886f, 128,522f, vVar0, 6, 0, 0);
			func_23(uParam0, 94762900, 693,396f, 557,684f, 128,522f, vVar0, 6, 1, 0);
			func_23(uParam0, 95283980, 693,6f, 556,498f, 128,522f, vVar0, 6, 2, 0);
			func_23(uParam0, 92416940, 693,803f, 555,317f, 128,522f, vVar0, 6, 0, 0);
			func_23(uParam0, 53597080, 694,007f, 554,131f, 128,522f, vVar0, 6, 1, 0);
			break;
		
		case 6:
			vVar0 = { 0f, 0f, (func_25(-2,7f) + 180f) };
			func_23(uParam0, 86170110, 697,492f, 561,188f, 128,522f, vVar0, 6, 0, 0);
			func_23(uParam0, 62247860, 697,964f, 560,188f, 128,522f, vVar0, 6, 1, 0);
			func_23(uParam0, 43665230, 698,467f, 559,116f, 128,522f, vVar0, 6, 2, 0);
			func_23(uParam0, 32906070, 698,988f, 558,013f, 128,522f, vVar0, 6, 0, 0);
			func_23(uParam0, 70836820, 699,502f, 556,925f, 128,522f, vVar0, 6, 1, 0);
			func_23(uParam0, 67800350, 700,014f, 555,841f, 128,522f, vVar0, 6, 2, 0);
			func_23(uParam0, 41115560, 701,184f, 555,063f, 128,521f, vVar0, 6, 0, 0);
			func_23(uParam0, 98430790, 701,005f, 553,758f, 128,522f, vVar0, 6, 1, 0);
			func_22(&(uParam0->f_155[0]), 698,861f, 554,048f, 128,521f, vVar0, 0, 0,5f, -1,5f);
			func_22(&(uParam0->f_155[1]), 703,267f, 554,91f, 128,522f, vVar0, 0, 0,5f, -1,5f);
			break;
		
		case 7:
			vVar0 = { 0f, 0f, (func_25(-3,99f) + 180f) };
			func_23(uParam0, 13168530, 652,833f, 570,052f, 128,529f, vVar0, 6, 0, 0);
			func_23(uParam0, 92127780, 652,006f, 569,319f, 128,528f, vVar0, 6, 1, 0);
			func_23(uParam0, 51664260, 651,136f, 568,538f, 128,729f, vVar0, 6, 2, 0);
			func_23(uParam0, 35914010, 650,242f, 567,746f, 128,729f, vVar0, 6, 0, 0);
			func_23(uParam0, 43076060, 649,661f, 566,94f, 128,929f, vVar0, 6, 1, 0);
			func_23(uParam0, 21755390, 648,426f, 566,137f, 128,929f, vVar0, 6, 2, 0);
			break;
		
		case 8:
			vVar0 = { 0f, 0f, (func_25(-3,9f) + 180f) };
			func_23(uParam0, 20501110, 656,955f, 565,868f, 128,53f, vVar0, 6, 0, 0);
			func_23(uParam0, 10114780, 656,193f, 565,067f, 128,53f, vVar0, 6, 1, 0);
			func_23(uParam0, 12664730, 655,358f, 564,19f, 128,73f, vVar0, 6, 2, 0);
			func_23(uParam0, 32956570, 654,534f, 563,324f, 128,73f, vVar0, 6, 0, 0);
			func_23(uParam0, 11862860, 653,696f, 562,443f, 128,93f, vVar0, 6, 1, 0);
			func_23(uParam0, 87809290, 652,862f, 561,566f, 128,93f, vVar0, 6, 2, 0);
			break;
		
		case 9:
			vVar0 = { 0f, 0f, (func_25(-3,76f) + 180f) };
			func_23(uParam0, 75170110, 662,947f, 560,965f, 128,529f, vVar0, 6, 0, 0);
			func_23(uParam0, 62246860, 662,306f, 560,065f, 128,529f, vVar0, 6, 1, 0);
			func_23(uParam0, 83665250, 661,603f, 559,079f, 128,73f, vVar0, 6, 2, 0);
			func_23(uParam0, 22016170, 660,91f, 558,106f, 128,73f, vVar0, 6, 0, 0);
			func_23(uParam0, 41846840, 660,204f, 557,116f, 128,929f, vVar0, 6, 1, 0);
			func_23(uParam0, 10000350, 659,502f, 556,13f, 128,929f, vVar0, 6, 2, 0);
			break;
		
		case 10:
			vVar0 = { 0f, 0f, (func_25(-3,68f) + 180f) };
			func_23(uParam0, 86878180, 667,872f, 557,785f, 128,53f, vVar0, 6, 0, 0);
			func_23(uParam0, 22242820, 667,31f, 556,833f, 128,53f, vVar0, 6, 1, 0);
			func_23(uParam0, 93969290, 666,693f, 555,791f, 128,73f, vVar0, 6, 2, 0);
			func_23(uParam0, 12101010, 666,086f, 554,762f, 128,73f, vVar0, 6, 0, 0);
			func_23(uParam0, 20232220, 665,467f, 553,715f, 128,93f, vVar0, 6, 1, 0);
			func_23(uParam0, 57707370, 664,852f, 552,673f, 128,93f, vVar0, 6, 2, 0);
			break;
		
		case 11:
			vVar0 = { 0f, 0f, (func_25(-3,53f) + 180f) };
			func_23(uParam0, 13130110, 674,882f, 554,326f, 128,529f, vVar0, 6, 0, 0);
			func_23(uParam0, 97845810, 674,46f, 553,305f, 128,529f, vVar0, 6, 1, 0);
			func_23(uParam0, 12345670, 673,997f, 552,186f, 128,73f, vVar0, 6, 2, 0);
			func_23(uParam0, 89101110, 673,541f, 551,081f, 128,73f, vVar0, 6, 0, 0);
			func_23(uParam0, 12131410, 673,076f, 549,958f, 128,929f, vVar0, 6, 1, 0);
			func_23(uParam0, 51617180, 672,613f, 548,839f, 128,929f, vVar0, 6, 2, 0);
			break;
		
		case 12:
			vVar0 = { 0f, 0f, (func_25(-3,45f) + 180f) };
			func_23(uParam0, 60616260, 680,396f, 552,335f, 128,53f, vVar0, 6, 0, 0);
			func_23(uParam0, 36465660, 680,063f, 551,281f, 128,53f, vVar0, 6, 1, 0);
			func_23(uParam0, 67686970, 679,697f, 550,127f, 128,73f, vVar0, 6, 2, 0);
			func_23(uParam0, 71727370, 679,336f, 548,988f, 128,73f, vVar0, 6, 0, 0);
			func_23(uParam0, 47576770, 678,969f, 547,829f, 128,93f, vVar0, 6, 1, 0);
			func_23(uParam0, 78798080, 678,603f, 546,674f, 128,93f, vVar0, 6, 2, 0);
			break;
		
		case 13:
			vVar0 = { 0f, 0f, (func_25(-3,31f) + 180f) };
			func_23(uParam0, 11511610, 688,034f, 550,483f, 128,529f, vVar0, 6, 0, 0);
			func_23(uParam0, 17118110, 687,853f, 549,393f, 128,529f, vVar0, 6, 1, 0);
			func_23(uParam0, 91201210, 687,653f, 548,199f, 128,73f, vVar0, 6, 2, 0);
			func_23(uParam0, 12212310, 687,457f, 547,02f, 128,73f, vVar0, 6, 0, 0);
			func_23(uParam0, 23124120, 687,257f, 545,821f, 128,929f, vVar0, 6, 1, 0);
			func_23(uParam0, 51261270, 687,058f, 544,627f, 128,929f, vVar0, 6, 2, 0);
			break;
		
		case 14:
			vVar0 = { 0f, 0f, (func_25(-3,22f) + 180f) };
			func_23(uParam0, 15515610, 693,855f, 549,783f, 128,53f, vVar0, 6, 0, 0);
			func_23(uParam0, 57158150, 693,767f, 548,682f, 128,53f, vVar0, 6, 1, 0);
			func_23(uParam0, 91601610, 693,67f, 547,474f, 128,73f, vVar0, 6, 2, 0);
			func_23(uParam0, 16216310, 693,575f, 546,283f, 128,73f, vVar0, 6, 0, 0);
			func_23(uParam0, 64165160, 693,478f, 545,071f, 128,93f, vVar0, 6, 1, 0);
			func_23(uParam0, 61671680, 693,381f, 543,865f, 128,93f, vVar0, 6, 2, 0);
			break;
		
		case 15:
			vVar0 = { 0f, 0f, (func_25(-3,08f) + 180f) };
			func_23(uParam0, 19920020, 701,652f, 549,708f, 128,529f, vVar0, 6, 0, 0);
			func_23(uParam0, 1202200, 701,721f, 548,605f, 128,529f, vVar0, 6, 1, 0);
			func_23(uParam0, 32042050, 701,795f, 547,396f, 128,729f, vVar0, 6, 2, 0);
			func_23(uParam0, 20620720, 701,869f, 546,203f, 128,729f, vVar0, 6, 0, 0);
			func_23(uParam0, 8209210, 701,944f, 544,99f, 128,929f, vVar0, 6, 1, 0);
			func_23(uParam0, 2112120, 702,019f, 543,781f, 128,929f, vVar0, 6, 2, 0);
			break;
		
		case 16:
			vVar0 = { 0f, 0f, (func_25(-2,99f) + 180f) };
			func_23(uParam0, 24024120, 707,482f, 550,335f, 128,53f, vVar0, 6, 0, 0);
			func_23(uParam0, 43244240, 707,644f, 549,242f, 128,53f, vVar0, 6, 1, 0);
			func_23(uParam0, 42452460, 707,821f, 548,044f, 128,73f, vVar0, 6, 2, 0);
			func_23(uParam0, 24724820, 707,996f, 546,862f, 128,73f, vVar0, 6, 0, 0);
			func_23(uParam0, 48249250, 708,174f, 545,659f, 128,929f, vVar0, 6, 1, 0);
			func_23(uParam0, 2512520, 708,351f, 544,461f, 128,929f, vVar0, 6, 2, 0);
			break;
		
		case 17:
			vVar0 = { 0f, 0f, (func_25(-3,98f) + 180f) };
			func_23(uParam0, 46779100, 646,434f, 564,522f, 128,927f, vVar0, 6, 0, 0);
			func_23(uParam0, 93643160, 645,612f, 563,784f, 128,927f, vVar0, 6, 1, 0);
			func_23(uParam0, 34729570, 644,71f, 562,975f, 129,127f, vVar0, 6, 2, 0);
			func_23(uParam0, 28556490, 643,821f, 562,177f, 129,127f, vVar0, 6, 0, 0);
			func_23(uParam0, 75335160, 642,916f, 561,365f, 129,327f, vVar0, 6, 1, 0);
			func_23(uParam0, 84872300, 642,015f, 560,557f, 129,327f, vVar0, 6, 2, 0);
			break;
		
		case 18:
			vVar0 = { 0f, 0f, (func_25(-3,91f) + 180f) };
			func_23(uParam0, 65187100, 651,092f, 559,707f, 128,926f, vVar0, 6, 0, 0);
			func_23(uParam0, 87514460, 650,325f, 558,912f, 128,926f, vVar0, 6, 1, 0);
			func_23(uParam0, 46165810, 649,483f, 558,04f, 128,127f, vVar0, 6, 2, 0);
			func_23(uParam0, 12560720, 648,654f, 557,18f, 129,127f, vVar0, 6, 0, 0);
			func_23(uParam0, 27854880, 647,809f, 556,306f, 129,326f, vVar0, 6, 1, 0);
			func_23(uParam0, 97601360, 646,968f, 555,435f, 129,326f, vVar0, 6, 2, 0);
			break;
		
		case 19:
			vVar0 = { 0f, 0f, (func_25(-3,75f) + 180f) };
			func_23(uParam0, 55178130, 657,925f, 554,108f, 128,927f, vVar0, 6, 0, 0);
			func_23(uParam0, 75148880, 657,29f, 553,204f, 128,927f, vVar0, 6, 1, 0);
			func_23(uParam0, 88865540, 656,593f, 552,213f, 129,127f, vVar0, 6, 2, 0);
			func_23(uParam0, 64916770, 655,906f, 551,235f, 129,127f, vVar0, 6, 0, 0);
			func_23(uParam0, 70536220, 655,207f, 550,241f, 129,327f, vVar0, 6, 1, 0);
			func_23(uParam0, 17101310, 654,512f, 549,25f, 129,327f, vVar0, 6, 2, 0);
			break;
		
		case 20:
			vVar0 = { 0f, 0f, (func_25(-3,68f) + 180f) };
			func_23(uParam0, 76870120, 663,545f, 550,463f, 128,926f, vVar0, 6, 0, 0);
			func_23(uParam0, 32147850, 662,977f, 549,515f, 128,926f, vVar0, 6, 1, 0);
			func_23(uParam0, 97662220, 662,353f, 548,477f, 129,127f, vVar0, 6, 2, 0);
			func_23(uParam0, 12107070, 661,738f, 547,453f, 129,127f, vVar0, 6, 0, 0);
			func_23(uParam0, 60841880, 661,111f, 546,411f, 129,326f, vVar0, 6, 1, 0);
			func_23(uParam0, 27803350, 660,489f, 545,373f, 129,326f, vVar0, 6, 2, 0);
			break;
		
		case 21:
			vVar0 = { 0f, 0f, (func_25(-3,53f) + 180f) };
			func_23(uParam0, 19202120, 671,531f, 546,515f, 128,927f, vVar0, 6, 0, 0);
			func_23(uParam0, 22232420, 671,116f, 545,491f, 128,927f, vVar0, 6, 1, 0);
			func_23(uParam0, 52627280, 670,66f, 544,369f, 129,127f, vVar0, 6, 2, 0);
			func_23(uParam0, 29303130, 670,211f, 543,262f, 129,127f, vVar0, 6, 0, 0);
			func_23(uParam0, 23334350, 669,753f, 542,135f, 129,327f, vVar0, 6, 1, 0);
			func_23(uParam0, 36373830, 669,298f, 541,014f, 129,327f, vVar0, 6, 2, 0);
			break;
		
		case 22:
			vVar0 = { 0f, 0f, (func_25(-3,46f) + 180f) };
			func_23(uParam0, 18283840, 677,828f, 544,227f, 128,926f, vVar0, 6, 0, 0);
			func_23(uParam0, 85858680, 677,487f, 543,176f, 128,926f, vVar0, 6, 1, 0);
			func_23(uParam0, 78889900, 677,112f, 542,024f, 129,127f, vVar0, 6, 2, 0);
			func_23(uParam0, 91929390, 676,744f, 540,888f, 129,127f, vVar0, 6, 0, 0);
			func_23(uParam0, 49596970, 676,368f, 539,731f, 129,326f, vVar0, 6, 1, 0);
			func_23(uParam0, 98991000, 675,994f, 538,58f, 129,326f, vVar0, 6, 2, 0);
			break;
		
		case 23:
			vVar0 = { 0f, 0f, (func_25(-3,3f) + 180f) };
			func_23(uParam0, 12812910, 686,526f, 542,118f, 128,927f, vVar0, 6, 0, 0);
			func_23(uParam0, 30131130, 686,352f, 541,027f, 128,927f, vVar0, 6, 1, 0);
			func_23(uParam0, 21331340, 686,16f, 539,831f, 129,127f, vVar0, 6, 1, 0);
			func_23(uParam0, 13513610, 685,972f, 538,652f, 129,127f, vVar0, 6, 0, 0);
			func_23(uParam0, 37138130, 685,779f, 537,451f, 129,327f, vVar0, 6, 1, 0);
			func_23(uParam0, 91401410, 685,588f, 536,256f, 129,327f, vVar0, 6, 2, 0);
			break;
		
		case 24:
			vVar0 = { 0f, 0f, (func_25(-3,23f) + 180f) };
			func_23(uParam0, 16917010, 693,176f, 541,306f, 128,926f, vVar0, 6, 0, 0);
			func_23(uParam0, 71172170, 693,08f, 540,205f, 128,926f, vVar0, 6, 1, 0);
			func_23(uParam0, 31741750, 692,975f, 538,998f, 129,127f, vVar0, 6, 2, 0);
			func_23(uParam0, 17617810, 692,871f, 537,808f, 129,127f, vVar0, 6, 0, 0);
			func_23(uParam0, 79180180, 692,765f, 536,597f, 129,326f, vVar0, 6, 1, 0);
			func_23(uParam0, 21831840, 692,66f, 535,391f, 129,326f, vVar0, 6, 2, 0);
			break;
		
		case 25:
			vVar0 = { 0f, 0f, (func_25(-3,07f) + 180f) };
			func_23(uParam0, 21321420, 702,065f, 541,218f, 128,927f, vVar0, 6, 0, 0);
			func_23(uParam0, 15216210, 702,14f, 540,116f, 128,927f, vVar0, 6, 1, 0);
			func_23(uParam0, 72182190, 702,223f, 538,907f, 129,127f, vVar0, 6, 2, 0);
			func_23(uParam0, 22022120, 702,304f, 537,715f, 129,127f, vVar0, 6, 0, 0);
			func_23(uParam0, 22223220, 702,387f, 536,502f, 129,327f, vVar0, 6, 1, 0);
			func_23(uParam0, 42252260, 703,116f, 526,841f, 129,618f, vVar0, 6, 2, 0);
			break;
		
		case 26:
			vVar0 = { 0f, 0f, (func_25(-3f) + 180f) };
			func_23(uParam0, 25325420, 708,727f, 541,922f, 128,926f, vVar0, 6, 0, 0);
			func_23(uParam0, 55256250, 709,881f, 539,828f, 128,926f, vVar0, 6, 1, 0);
			func_23(uParam0, 72582590, 709,05f, 539,628f, 129,127f, vVar0, 6, 2, 0);
			func_23(uParam0, 26026120, 709,217f, 538,445f, 129,127f, vVar0, 6, 0, 0);
			func_23(uParam0, 62263260, 709,386f, 537,241f, 129,326f, vVar0, 6, 1, 0);
			func_23(uParam0, 42652650, 709,555f, 536,043f, 129,326f, vVar0, 6, 2, 0);
			break;
		
		default:
			break;
	}
}

void func_22(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7, float fParam8, float fParam9)
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam4 };
	uParam0->f_7 = iParam7;
	*uParam0 = 1;
	uParam0->f_8 = fParam8;
	uParam0->f_9 = fParam9;
}

void func_23(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, int iParam8, int iParam9, int iParam10)
{
	if (uParam0->f_154 >= *uParam0)
	{
		return;
	}
	func_24(uParam0[uParam0->f_154], iParam1, vParam2, vParam5, iParam8, iParam9, iParam10);
	uParam0->f_154++;
}

void func_24(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, var uParam8, var uParam9, var uParam10)
{
	*uParam0 = { vParam2 };
	uParam0->f_3 = { vParam5 };
	uParam0->f_6 = uParam8;
	uParam0->f_7 = uParam1;
	uParam0->f_8 = uParam9;
	uParam0->f_9 = uParam10;
}

float func_25(float fParam0)
{
	return (fParam0 * 57,29578f);
}

void func_26(var uParam0)
{
	uParam0->f_154 = 0;
	uParam0->f_155[0] = 0;
	uParam0->f_155[1] = 0;
}

int func_27(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = unk_0x1C0640BA9A7327B3() + 7500;
	unk_0xD7992BEF7A9D109E(sParam0, iParam1);
	if (unk_0x67C1D9E5B91B2E37(iParam1) && !bParam3)
	{
		return 1;
	}
	if (iParam2 == 0)
	{
		return 1;
	}
	while (!unk_0x67C1D9E5B91B2E37(iParam1))
	{
		wait(0);
		if (unk_0x1C0640BA9A7327B3() > iVar0 && !unk_0x67C1D9E5B91B2E37(iParam1))
		{
			return 0;
		}
	}
	return 1;
}

int func_28(char* sParam0, var uParam1, int iParam2)
{
	iVar0 = unk_0x1C0640BA9A7327B3() + 7500;
	if (*uParam1 == 0)
	{
		*uParam1 = unk_0xB01F55A0FD1CFD49(sParam0);
	}
	if (unk_0x83D8570832F172A7(*uParam1))
	{
		return 1;
	}
	if (iParam2 == 0)
	{
		return 1;
	}
	while (!unk_0x83D8570832F172A7(*uParam1))
	{
		wait(0);
		if (unk_0x1C0640BA9A7327B3() > iVar0 && !unk_0x83D8570832F172A7(*uParam1))
		{
			return 0;
		}
	}
	return 1;
}

int func_29(char* sParam0, int iParam1)
{
	iVar0 = unk_0x1C0640BA9A7327B3() + 7500;
	unk_0x3F423BF5B8125A50(sParam0);
	if (unk_0xB4AE0788C1587752(sParam0))
	{
		return 1;
	}
	if (iParam1 == 0)
	{
		return 1;
	}
	while (!unk_0xB4AE0788C1587752(sParam0))
	{
		wait(0);
		if (unk_0x1C0640BA9A7327B3() > iVar0 && !unk_0xB4AE0788C1587752(sParam0))
		{
			return 0;
		}
	}
	return 1;
}

char* func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			sVar0 = "misslester1b_crowd@a_";
			break;
		
		case 1:
			sVar0 = "misslester1b_crowd@b_";
			break;
		
		case 2:
			sVar0 = "misslester1b_crowd@c_";
			break;
		
		case 3:
			sVar0 = "misslester1b_crowd@d_";
			break;
		
		case 4:
			sVar0 = "misslester1b_crowd@e_";
			break;
		
		case 5:
			sVar0 = "misslester1b_crowd@f_";
			break;
		
		case 6:
			sVar0 = "misslester1b_crowd@g_";
			break;
		
		case 7:
			sVar0 = "misslester1b_crowd@h_";
			break;
		
		case 8:
			sVar0 = "misslester1b_crowd@i_";
			break;
		
		case 9:
			sVar0 = "misslester1b_crowd@j_";
			break;
		
		case 10:
			sVar0 = "misslester1b_crowd@k_";
			break;
		
		case 11:
			sVar0 = "misslester1b_crowd@l_";
			break;
		
		case 12:
			sVar0 = "misslester1b_crowd@m_";
			break;
	}
	return sVar0;
}

void func_31(int iParam0, int iParam1)
{
	unk_0xFF42993F8A095C58(0);
	unk_0x2733E1E56786AB9E(true);
	unk_0xC83E7A5E408DF68C(0);
	unk_0x3F50EAA916065520(true);
	unk_0xCE1A2E36474A9D6F(unk_0xD803B885F5E47A62(), 0);
	unk_0x060F249A9A3E3F4E(false);
	unk_0xCE1730371ACDCCFC(1);
	*iParam0 = unk_0x7D6CA5F52B3748BF(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 0, 1, 1, 1);
	unk_0xCD7D80FD792F9954("DRIVE", false);
	unk_0xE342F209E49C5314(-7000f, -7000f, -100f, 7000f, 7000f, 315f, false, 1);
	unk_0x21688103CC7F9B19(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 0);
	if (func_33(unk_0x16F2683693E537C9()) && iParam1 == 1)
	{
		unk_0x745CE398A4B0A3C6(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 500f, 0);
	}
}

void func_32(bool bParam0)
{
	unk_0x15EA7F4313456B1D(2, bParam0);
	unk_0x15EA7F4313456B1D(3, bParam0);
	unk_0x15EA7F4313456B1D(4, bParam0);
	unk_0x15EA7F4313456B1D(5, bParam0);
	unk_0x15EA7F4313456B1D(6, bParam0);
	unk_0x15EA7F4313456B1D(7, bParam0);
	unk_0x15EA7F4313456B1D(8, bParam0);
	unk_0x15EA7F4313456B1D(9, bParam0);
	unk_0x15EA7F4313456B1D(10, bParam0);
	unk_0x15EA7F4313456B1D(11, bParam0);
	unk_0x15EA7F4313456B1D(12, bParam0);
}

bool func_33(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	return !unk_0x437347B10A200C4B(iParam0, 0);
}

void func_34(bool bParam0)
{
	if (bParam0)
	{
		func_40();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			unk_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_39(0))
		{
			func_35(0);
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

void func_35(int iParam0)
{
	if (func_38())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_37())
		{
			func_36(1, 1);
		}
		else
		{
			func_36(0, 0);
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
	if (!func_14())
	{
		Global_19486.f_1 = 3;
	}
}

void func_36(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_39(0))
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

bool func_37()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_38()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

int func_39(int iParam0)
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

void func_40()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_41()
{
	func_42();
	func_6(0, 1, 1, 0, 0, 0);
	unk_0x10FAF14A60A0DBE1();
}

void func_42()
{
	if (unk_0x39B7A3CCD2467CAB())
	{
		if (unk_0x22A8E52414415B76())
		{
			unk_0x152C90FB9FE48DAC();
		}
		unk_0x5C8D148FC238F38A();
	}
	func_52(&iLocal_6210);
	unk_0x683413D9B7010687("Big_Disp");
	unk_0x81CF20E10AAD5FD5("LInvader");
	unk_0xE17FDF9E3068281B(&iLocal_6201);
	unk_0xE17FDF9E3068281B(&iLocal_6202);
	unk_0x96D521DDDB9AD218();
	iVar0 = 0;
	while (iVar0 < Local_90)
	{
		func_49(&(Local_90[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_4898)
	{
		func_46(&(Local_4898[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_5620)
	{
		func_46(&(Local_5620[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_59)
	{
		func_45(iLocal_59[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		func_44(func_30(iVar0));
		iVar0++;
	}
	func_43(iLocal_6213);
	func_6(0, 1, 1, 0, 0, 0);
}

void func_43(int iParam0)
{
	unk_0x2733E1E56786AB9E(false);
	unk_0xFF42993F8A095C58(3);
	unk_0x3F50EAA916065520(false);
	unk_0xC83E7A5E408DF68C(3);
	unk_0xCE1A2E36474A9D6F(unk_0xD803B885F5E47A62(), 1);
	unk_0x060F249A9A3E3F4E(true);
	unk_0xCE1730371ACDCCFC(0);
	unk_0x2952D66A502EA873(iParam0, 0);
	unk_0xCD7D80FD792F9954("DRIVE", true);
	unk_0xE342F209E49C5314(-7000f, -7000f, -100f, 7000f, 7000f, 315f, true, 1);
}

void func_44(char* sParam0)
{
	unk_0x8D17794CE3273D70(sParam0);
}

void func_45(int iParam0)
{
	if (iParam0 != 0)
	{
		unk_0x71199B01895C6202(iParam0);
	}
}

void func_46(var uParam0)
{
	sVar1 = func_48(uParam0->f_16);
	sVar2 = func_47(uParam0->f_16);
	iVar0 = 0;
	while (iVar0 < uParam0->f_17)
	{
		if (unk_0xC844350D5D58C99A(uParam0->f_17[iVar0]) && !unk_0x437347B10A200C4B(uParam0->f_17[iVar0], 0))
		{
			unk_0x7720CBBC7DD82563(uParam0->f_17[iVar0], sVar2, sVar1, -1000f);
		}
		func_52(&(uParam0->f_17[iVar0]));
		iVar0++;
	}
}

char* func_47(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	sVar0 = "001077_01_14";
	return sVar0;
}

char* func_48(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	sVar0 = "misslester1b_crowdlow@14@";
	return sVar0;
}

void func_49(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_51(uParam0[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_155)
	{
		func_50(&(uParam0->f_155[iVar0].f_10));
		iVar0++;
	}
}

void func_50(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0x437347B10A200C4B(*iParam0, 0))
		{
			unk_0xE8832A9E16A57A1F(*iParam0, false, 1);
		}
		if (!unk_0xAF6690C489CC6203(*iParam0))
		{
			unk_0x73270B3C9CC833FD(*iParam0, true, 0);
		}
		unk_0xEBA53F35D0085654(iParam0);
	}
}

void func_51(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_10)
	{
		func_50(&(uParam0->f_10[iVar0]));
		iVar0++;
	}
}

void func_52(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (unk_0xBDEB2DEEF1D23A18(*iParam0))
		{
			unk_0x15AFB6CBDE990FB6(*iParam0, 1, true);
		}
		unk_0xF690C84DADBB3551(iParam0);
	}
}

