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
	sLocal_20 = "NULL";
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
	iLocal_48 = 1;
	iLocal_55 = 1;
	iLocal_77 = 1;
	fLocal_1198 = 120f;
	fLocal_1199 = 0f;
	fLocal_1201 = 1f;
	fLocal_1202 = 0f;
	fLocal_1203 = 1f;
	fLocal_1204 = 30f;
	fLocal_1206 = 1f;
	fLocal_1207 = 5f;
	fLocal_1208 = 1f;
	fLocal_1209 = 1f;
	fLocal_1210 = 100f;
	fLocal_1211 = 100f;
	fLocal_1212 = 0f;
	fLocal_1213 = 7000f;
	fLocal_1214 = 0f;
	fLocal_1215 = 0f;
	fLocal_1216 = 0,3f;
	fLocal_1217 = 0,5f;
	fLocal_1218 = 50f;
	iLocal_1804 = -1;
	iLocal_1812 = -1;
	iLocal_1813 = -1;
	vLocal_3027 = { 500f, 500f, 500f };
	vLocal_3355 = { 0f, 0f, 0,18f };
	iLocal_3377 = 1877891248;
	iLocal_3378 = 886894755;
	vLocal_3489 = { 1670,683f, 4839,668f, 41,0695f };
	vLocal_3492 = { 0,612f, -30,7126f, 6,6732f };
	vLocal_3495 = { 0,6626f, -27,7333f, 6,3245f };
	fLocal_3520 = 65f;
	fLocal_3535 = -1f;
	fLocal_3536 = 1f;
	iLocal_3537 = 1;
	iLocal_3542 = -1;
	fLocal_3543 = 0,01f;
	iLocal_4233 = -1;
	fLocal_4245 = 200f;
	iLocal_4250 = 1;
	iLocal_4253 = 1;
	iLocal_4259 = 1;
	fLocal_4522 = 0,55f;
	fLocal_4523 = 0,6f;
	iLocal_4524 = 1;
	iLocal_4525 = -1;
	iLocal_4526 = -1;
	iLocal_4527 = -1;
	iLocal_4528 = -1;
	iLocal_4531 = 1;
	iLocal_4569 = -1;
	iLocal_4577 = -1;
	vLocal_4594 = { -0,1776f, 0,17f, -0,325f };
	vLocal_4597 = { 0,2445f, 0,17f, -0,325f };
	vLocal_4603 = { 2022,345f, 4756,552f, 40,0605f };
	iLocal_4663 = 886894755;
	vLocal_4664 = { 0f, 0f, 0,18f };
	vLocal_4669 = { 2136,133f, 4780,563f, 39,9702f };
	fLocal_4672 = 25,29f;
	iLocal_4676 = 5;
	iLocal_4783 = 2;
	vLocal_4829 = { 2134,06f, 4780,69f, 41,6644f };
	vLocal_4832 = { 2042,05f, 4772,592f, 40,0958f };
	fLocal_4835 = 114,4402f;
	fLocal_4844 = -1f;
	fLocal_4845 = 0f;
	fLocal_4846 = 0f;
	fLocal_4847 = 120000f;
	bLocal_6396 = true;
	bLocal_6397 = true;
	iLocal_6401 = 1;
	iLocal_6402 = 1;
	vLocal_6407 = { 2134,759f, 4789,899f, 39,9702f };
	fLocal_6410 = 24,9014f;
	iLocal_6432 = 1;
	func_396("Traffick Air Start");
	unk_0x7798376279BB5369(1);
	if (unk_0x2EBF608FFE6CA406(67))
	{
		unk_0xC92DB9682A650680("OJDA_STOP");
		func_396("FORCE CLEANUP HAS OCCURRED: setting us up for a replay!!!");
		func_395();
		if (!func_394())
		{
			func_392(&Global_110289, 1);
			func_369(unk_0xBB0808A181D4745C());
		}
		func_365();
	}
	Local_6011.f_235 = -1;
	bLocal_4680 = func_364();
	if (!ScriptParam_0.f_1)
	{
		func_355(Global_111638.f_19978.f_2, &ScriptParam_0, bLocal_4680);
		func_354(&Local_4849, ScriptParam_0.f_2);
		func_350(&Local_4849, ScriptParam_0, 0);
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				ScriptParam_0.f_53 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			}
		}
	}
	else
	{
		func_354(&Local_4849, ScriptParam_0.f_2);
		func_350(&Local_4849, ScriptParam_0, 1);
	}
	Local_4681 = { ScriptParam_0 };
	if (ScriptParam_0.f_52)
	{
		if (Global_111638.f_19978.f_2 >= 5)
		{
			func_349(&Local_4849);
			iLocal_4783 = 2;
		}
		else
		{
			func_348(&Local_4849);
		}
	}
	if (bLocal_6396)
	{
		iLocal_4783 = 3;
		func_396("planeData.myVariation = AIR_VARIATION_LOW_ALT");
	}
	else if (bLocal_6398)
	{
		iLocal_4783 = 2;
		func_396("planeData.myVariation = AIR_VARIATION_BOMB");
	}
	else
	{
		iLocal_4783 = 1;
		func_396("planeData.myVariation = AIR_VARIATION_DROP");
	}
	if (!unk_0xC844350D5D58C99A(ScriptParam_0.f_53))
	{
		func_345();
		unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
	}
	if (bLocal_6403)
	{
		func_344(&Local_4329);
		func_396("bDoStationary IS TRUE");
	}
	func_340(&ScriptParam_0);
	unk_0x75CFD6AD66ADFDD1(2035,914f, 4765,766f, 40,0606f, 200f, 0);
	func_339(&Local_6011);
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
	if (!unk_0x437347B10A200C4B(ScriptParam_0.f_53, 0))
	{
		unk_0x56FDC9ADE35F7DB0(ScriptParam_0.f_53, true, true, 0);
	}
	func_337(1);
	func_336();
	unk_0x8BC9595FD2792B5D("BAY_DOOR_SCENE");
	iLocal_6416 = unk_0x7D6CA5F52B3748BF(Vector(40,0605f, 4760,453f, 2030,663f) - Vector(800f, 800f, 800f), Vector(40,0605f, 4760,453f, 2030,663f) + Vector(800f, 800f, 800f), 0, 1, 1, 1);
	iLocal_6417 = unk_0x7D6CA5F52B3748BF(Local_4849.f_51[0].f_107 - Vector(50f, 50f, 50f), Local_4849.f_51[0].f_107 + Vector(50f, 50f, 50f), 0, 1, 1, 1);
	unk_0xB5376EA942202450(2164,038f, 4825,627f, 35,61375f, 1899,278f, 4697,752f, 49,08641f, 100f, 0, false, 1);
	Local_6011.f_202 = Local_4849.f_1161;
	unk_0x51B096AAC60548C1(0,1f);
	if (func_364())
	{
		Global_98744.f_12[0]++;
		bLocal_4561 = true;
		iLocal_6415 = func_335();
		if (iLocal_6415 == 0)
		{
			func_334(vLocal_4669, fLocal_4672, 1, 0);
		}
	}
	else
	{
		Global_98744.f_12[0] = 0;
	}
	func_330("MG_TRAF_AVAIL", 1);
	while (true)
	{
		wait(0);
		vLocal_4265 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
		func_329(Local_6011);
		if (((uLocal_6391 || uLocal_6390) || unk_0xF06268E966D7C1A2(unk_0xA30EC016B12C03E4(), 0)) || uLocal_6392)
		{
			bLocal_4545 = true;
		}
		else
		{
			bLocal_4545 = false;
		}
		if ((uLocal_6431 && iLocal_4786 == 4) && !iLocal_4257)
		{
			func_328(&uLocal_6433, &(Local_4849.f_6), &uLocal_6434, &bLocal_6435, &uLocal_6404, "ARMS_AIR08", &Local_4345);
		}
		if (iLocal_4786 >= 5)
		{
			bLocal_6405 = true;
		}
		if (iLocal_6437 > 0 && (iLocal_4786 > 2 && iLocal_4786 < 7))
		{
			func_325(&iLocal_6418, &iLocal_6419, &uLocal_6425, &uLocal_6420, &uLocal_4816, &iLocal_6436, &bLocal_4533, &bLocal_4545, &uLocal_6393, &bLocal_6397, &iLocal_6432, (iLocal_4783 == 2 && iLocal_4786 < 5), 1, (!bLocal_6405 && !ScriptParam_0.f_52), 1);
			if (ScriptParam_0.f_52 && bLocal_4533)
			{
				iVar0 = 0;
				while (iVar0 < 9)
				{
					if (unk_0xE4EDC4B0E92C078B(Local_6011.f_353[iVar0]))
					{
						unk_0x142CC44DB769B57E(&(Local_6011.f_353[iVar0]));
					}
					iVar0++;
				}
			}
		}
		if (iLocal_4786 <= 4)
		{
			unk_0x4A847DA194A5532B(2, 0, -1);
			unk_0x4A847DA194A5532B(1, 0, -1);
		}
		func_324(&iLocal_6418, &bLocal_6430, &uLocal_6425, &uLocal_6420, &uLocal_4816, &cLocal_4836, &fLocal_4844, &iLocal_6436, &iLocal_6419, &bLocal_4533, 0, (iLocal_4783 == 2 && iLocal_4786 < 5), !ScriptParam_0.f_52, 0);
		func_323(&(Local_6011.f_206), 7f, 1);
		func_322();
		func_321();
		func_319();
		if (iLocal_4786 == 4 && !iLocal_4257)
		{
			func_315(&Local_6011, &Local_4849, ScriptParam_0.f_45);
		}
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (func_55(&ScriptParam_0))
			{
				func_365();
			}
		}
		if (func_20(&ScriptParam_0))
		{
			func_1(ScriptParam_0);
		}
	}
}

void func_1(struct<53> Param0, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96)
{
	unk_0x790015DC92C918E2();
	unk_0x5CEB4DB888A62073(true);
	if (bLocal_4237)
	{
		unk_0x33928F9E4C12F0F1(Local_4849.f_7);
		func_18("DRUG_TRAFFIC_AIR_BAY_DOOR_OPEN_MASTER", &(Local_6011.f_235), 0, iLocal_6418, 0, 0, 0, 0);
	}
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		func_7(&Local_6011, &bLocal_4542);
		unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), true, 0);
	}
	unk_0x42740B44BA8D7B43("SCRIPT\DRUG_TRAFFIC_AIR");
	unk_0x42740B44BA8D7B43("SCRIPT\TARGET_PRACTICE");
	unk_0x42740B44BA8D7B43("SCRIPT\DRUG_TRAFFIC_AIR_PANIC");
	unk_0xC92DB9682A650680("OJDA_STOP");
	func_392(&Global_110289, 1);
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		switch (iLocal_4815)
		{
			case 6:
				sVar0 = "SAN_FAIL1";
				break;
			
			case 7:
				sVar0 = "DTRFAIR_FAIL01";
				break;
			
			case 3:
				sVar0 = "DTRFAIR_FAIL_02";
				break;
			
			case 10:
				if (bLocal_6398)
				{
					sVar0 = "DTRFAIR_FAIL_05";
				}
				else
				{
					sVar0 = "DTRFAIR_FAIL_03";
				}
				break;
			
			case 5:
				sVar0 = "DTRSHRD_FAIL_05";
				break;
			
			case 13:
				sVar0 = "DTRFAIR_FAIL_01";
				break;
			
			case 14:
				sVar0 = "DTRSHRD_FAIL_06";
				break;
			
			case 9:
				sVar0 = "DTRFAIR_FAIL_04";
				break;
			
			case 4:
				sVar0 = "DTRFAIR_FAIL_08";
				break;
			
			case 0:
				break;
			
			case 1:
				if (bLocal_6398)
				{
					sVar0 = "DTRSHRD_FAIL_12";
				}
				else
				{
					sVar0 = "DTRSHRD_FAIL_13";
				}
				break;
			
			case 2:
				sVar0 = "DTRSHRD_FAIL_17";
				break;
			
			case 18:
				if (bLocal_6398 && !Param0.f_52)
				{
					sVar0 = "DTRFAIR_FAIL_05";
				}
				else if (bLocal_6398 && Param0.f_52)
				{
					sVar0 = "DTRFAIR_FAIL_06";
				}
				else
				{
					sVar0 = "DTRFAIR_FAIL_07";
				}
				break;
		}
	}
	if (!unk_0xEA6BC48857E0AC4C(sVar0))
	{
		func_6(sVar0);
	}
	func_395();
	func_369(unk_0xBB0808A181D4745C());
	while (!func_5())
	{
		wait(0);
	}
	if (!func_4(&Local_4849))
	{
		if (unk_0xE934758D273C899A(unk_0x16F2683693E537C9()))
		{
			func_2(vLocal_6407, fLocal_6410);
		}
	}
	if (!unk_0xDF1306B443CD3D15(iLocal_6418, 1) || unk_0x437347B10A200C4B(iLocal_6418, 0))
	{
		func_2(vLocal_6407, fLocal_6410);
	}
	func_365();
}

void func_2(vector3 vParam0, float fParam3)
{
	if (func_3(Global_76862, 0f, 0f, 0f, 0))
	{
		Global_76862 = { vParam0 };
		Global_76865 = fParam3;
	}
}

bool func_3(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_4(var uParam0)
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0) == uParam0->f_7)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_5()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_98744 == 7 || Global_98744 == 8)
	{
		return 1;
	}
	return 0;
}

void func_6(char* sParam0)
{
	if (!unk_0xEA6BC48857E0AC4C(sParam0))
	{
		if (unk_0x4880526EC51D1C27(sParam0) <= 16)
		{
			StringCopy(&Global_76854, sParam0, 16);
			StringCopy(&Global_76858, "", 16);
			if (unk_0x192DA571D9133D23())
			{
				unk_0x32BB9995E509E19B();
			}
		}
	}
}

void func_7(var uParam0, bool bParam1)
{
	if (*bParam1)
	{
		unk_0xA37A90C62806D848(1);
		*bParam1 = 0;
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
	}
	unk_0x1196C0C18BC84B0A(uParam0->f_25, 0);
	if (!iLocal_3518)
	{
		unk_0x8BC9595FD2792B5D("BAY_DOOR_SCENE");
		iLocal_3518 = 1;
	}
	func_17(uParam0, 0, 0, 1);
	unk_0xBFE31971E49FA500(true);
	unk_0x8BCB70EB440DED83(true);
	unk_0x225CFE81EA219E44();
	func_8(0, 0, 30, 5, 0);
	unk_0x9A8DDC7C522F5BF5(uParam0->f_304, 0);
	unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
}

void func_8(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_16())
	{
		func_16();
	}
	else if (bParam0)
	{
		if (iParam4 == 1)
		{
			if (iLocal_3511 <= 225 && iLocal_3505 == 0)
			{
				iLocal_3511 += 30;
				if (iLocal_3511 >= 225)
				{
					iLocal_3505 = 1;
				}
			}
			else if (iLocal_3511 >= 30)
			{
				iLocal_3511 = (iLocal_3511 - 30);
				if (iLocal_3511 <= 30)
				{
					iLocal_3505 = 0;
				}
			}
		}
		func_15(1, 200);
		if (iLocal_3509 <= iParam2 && iLocal_3504 == 0)
		{
			iLocal_3509++;
			func_12(1, iLocal_3509);
			if (iLocal_3509 == iParam2)
			{
				iLocal_3504 = 1;
				iLocal_3510 = unk_0x09AC81E49EA267F7(iParam3, iParam2);
			}
		}
		else if (iLocal_3509 > 0)
		{
			if (iLocal_3509 > iLocal_3510)
			{
				iLocal_3509 = (iLocal_3509 - 1);
				func_12(1, iLocal_3509);
				if (iLocal_3509 == iLocal_3510)
				{
					iLocal_3504 = 0;
				}
			}
		}
		if (bParam1)
		{
			func_9(1, 40, 1, 1, 1);
		}
	}
}

void func_9(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_16())
	{
		func_16();
	}
	else if (bParam0)
	{
		if (bParam2)
		{
			if (!func_11(0))
			{
				func_10(0);
			}
			else
			{
				unk_0x539E86AE011A8B38("digitalOverlay", "nscuzz1", 0,5f, fLocal_3512, 1f, 0,2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_3512 < 1f)
			{
				fLocal_3512 = (fLocal_3512 + 0,01f);
			}
			else
			{
				fLocal_3512 = 0f;
			}
		}
		if (bParam3)
		{
			if (!func_11(1))
			{
				func_10(1);
			}
			else
			{
				unk_0x539E86AE011A8B38("digitalOverlay", "nscuzz2", 0,5f, fLocal_3513, 1f, 0,2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_3513 < 1f)
			{
				fLocal_3513 = (fLocal_3513 + 0,02f);
			}
			else
			{
				fLocal_3513 = 0f;
			}
		}
		if (bParam4)
		{
			if (!func_11(2))
			{
				func_10(2);
			}
			else
			{
				unk_0x539E86AE011A8B38("digitalOverlay", "nscuzz3", 0,5f, fLocal_3514, 1f, 0,2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_3514 < 1f)
			{
				fLocal_3514 = (fLocal_3514 + 0,028f);
			}
			else
			{
				fLocal_3514 = 0f;
			}
		}
	}
}

void func_10(int iParam0)
{
	if (iParam0 < 32)
	{
		unk_0x5D96D8530B3D0904(&iLocal_3515, iParam0);
	}
}

int func_11(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(iLocal_3515, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_12(bool bParam0, int iParam1)
{
	if (!func_16())
	{
		func_16();
	}
	else if (bParam0)
	{
		iLocal_3507 = func_14(5);
		iLocal_3506 = unk_0x09AC81E49EA267F7(0, 4);
		while (iLocal_3508 == iLocal_3507)
		{
			iLocal_3507 = func_14(5);
		}
		if (iLocal_3507 == 0)
		{
			if (!func_11(3))
			{
				func_10(3);
			}
			else
			{
				unk_0x539E86AE011A8B38("digitalOverlay", "Static1", 0,5f, 0,5f, (1f * func_13(bLocal_3501)), (1f * func_13(bLocal_3502)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_3507 == 1)
		{
			if (!func_11(4))
			{
				func_10(4);
			}
			else
			{
				unk_0x539E86AE011A8B38("digitalOverlay", "Static2", 0,5f, 0,5f, (1f * func_13(bLocal_3501)), (1f * func_13(bLocal_3502)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_3507 == 2)
		{
			if (!func_11(5))
			{
				func_10(5);
			}
			else
			{
				unk_0x539E86AE011A8B38("digitalOverlay", "Static3", 0,5f, 0,5f, (1f * func_13(bLocal_3501)), (1f * func_13(bLocal_3502)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_3507 == 3)
		{
			if (!func_11(6))
			{
				func_10(6);
			}
			else
			{
				unk_0x539E86AE011A8B38("digitalOverlay", "Static4", 0,5f, 0,5f, (1f * func_13(bLocal_3501)), (1f * func_13(bLocal_3502)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_3507 == 4)
		{
			if (!func_11(7))
			{
				func_10(7);
			}
			else
			{
				unk_0x539E86AE011A8B38("digitalOverlay", "Static5", 0,5f, 0,5f, (1f * func_13(bLocal_3501)), (1f * func_13(bLocal_3502)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
	}
}

float func_13(bool bParam0)
{
	if (bParam0)
	{
		return -1f;
	}
	else
	{
		return 1f;
	}
	return 1f;
}

int func_14(int iParam0)
{
	if (unk_0x09AC81E49EA267F7(0, 50) > 25)
	{
		bLocal_3501 = true;
	}
	else
	{
		bLocal_3501 = false;
	}
	if (unk_0x09AC81E49EA267F7(0, 50) > 25)
	{
		bLocal_3502 = true;
	}
	else
	{
		bLocal_3502 = false;
	}
	return unk_0x09AC81E49EA267F7(0, iParam0);
}

void func_15(bool bParam0, int iParam1)
{
	if (!func_16())
	{
		func_16();
	}
	else if (bParam0)
	{
		if (iLocal_3503)
		{
			if (!func_11(8))
			{
				func_10(8);
			}
			else
			{
				unk_0x539E86AE011A8B38("digitalOverlay", "nscanline1", 0,5f, 0,5f, 1f, 1f, 0f, 255, 255, 255, iParam1, 0);
			}
			iLocal_3503 = 0;
		}
		else
		{
			if (!func_11(8))
			{
				func_10(8);
			}
			else
			{
				unk_0x539E86AE011A8B38("digitalOverlay", "nscanline1", 0,5f, 0,5f, -1f, -1f, 0f, 255, 255, 255, iParam1, 0);
			}
			iLocal_3503 = 1;
		}
	}
}

int func_16()
{
	unk_0x0D3BE1DE0262A012("digitalOverlay", false);
	if (unk_0x27117E2CDD4D67C3("digitalOverlay"))
	{
		return 1;
	}
	return 0;
}

void func_17(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_25))
	{
		unk_0x4A4806F9D471E491(uParam0->f_25, bParam3, 0);
	}
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), bParam3, 0);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_202)
	{
		if (unk_0xC844350D5D58C99A(uParam0->f_31[iVar0]) && iParam1 != uParam0->f_31[iVar0])
		{
			unk_0x4A4806F9D471E491(uParam0->f_31[iVar0], bParam3, 0);
			if (bParam2)
			{
				iVar1 = 0;
				while (iVar1 < 9)
				{
					if (unk_0xC844350D5D58C99A(uParam0->f_38[iVar0][iVar1]))
					{
						if (unk_0xD59B17D2DFF98E26(uParam0->f_38[iVar0][iVar1]))
						{
							unk_0x4A4806F9D471E491(uParam0->f_38[iVar0][iVar1], bParam3, 0);
						}
					}
					iVar1++;
				}
			}
		}
		iVar0++;
	}
}

void func_18(char* sParam0, int iParam1, bool bParam2, int iParam3, float fParam4, float fParam5, float fParam6, char* sParam7)
{
	func_19(iParam1);
	if (bParam2)
	{
		*iParam1 = unk_0xD68EA767274B7444();
	}
	else
	{
		*iParam1 = -1;
	}
	if (iParam3 != 0)
	{
		unk_0xCEAA091B490F8407(*iParam1, sParam0, iParam3, sParam7, false, 0);
	}
	else if ((fParam4 != 0f || fParam5 != 0f) || fParam6 != 0f)
	{
		unk_0xEB819BD1E585E9CB(*iParam1, sParam0, fParam4, fParam5, fParam6, sParam7, 0, 0, 0);
	}
	else
	{
		unk_0x4D7F4CC43D4D0DE3(*iParam1, sParam0, sParam7, true);
	}
}

void func_19(int iParam0)
{
	if (*iParam0 != -1)
	{
		unk_0x55D0A2DB35045A35(*iParam0);
		unk_0x43A06902454A1172(*iParam0);
		*iParam0 = -1;
	}
}

int func_20(var uParam0)
{
	if (bLocal_6430)
	{
		iLocal_4815 = 4;
		return 1;
	}
	if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) || unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		iLocal_4815 = 0;
		return 1;
	}
	if (bLocal_4552)
	{
		iLocal_4815 = 2;
		return 1;
	}
	if (!unk_0x437347B10A200C4B(iLocal_6418, 0))
	{
		if (!unk_0x56732E6CCBB1BAA8(iLocal_6418))
		{
			func_396("TRAFFICKING AIR: FAILING - PROPELLERS ARE DAMAGED");
			iLocal_4815 = 9;
		}
	}
	if (bLocal_4548)
	{
		iLocal_4815 = 1;
		return 1;
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if ((bLocal_4533 && !bLocal_4545) && !bLocal_3516)
		{
			iLocal_4815 = 3;
			return 1;
			if (func_53("DTRSHRD_03P", iLocal_6418, iLocal_6436))
			{
				iLocal_4815 = 3;
				return 1;
			}
		}
	}
	if (iLocal_4786 == 9)
	{
		iLocal_4815 = 18;
		return 1;
	}
	if (bLocal_6435)
	{
		iLocal_4815 = 10;
		return 1;
	}
	if ((bLocal_6396 && iLocal_4786 > 3) && iLocal_4785 < 4)
	{
		if (func_45(&uLocal_6406, &Local_6011, &Local_4849, &fLocal_4845, &fLocal_4846, &iLocal_6412, &iLocal_4815, &vLocal_4265, Local_4345))
		{
			return 1;
		}
	}
	if (!uParam0->f_37)
	{
		if (!bLocal_3516)
		{
			if (func_21(&Local_4849, &uLocal_4816))
			{
				iLocal_4815 = 14;
				return 1;
			}
		}
	}
	fLocal_4844 = fLocal_4844;
	if (iLocal_4786 < 7)
	{
		if (unk_0x437347B10A200C4B(iLocal_6418, 0))
		{
			iLocal_4815 = 7;
			return 1;
		}
		else if ((!unk_0xDF1306B443CD3D15(iLocal_6418, 0) || !unk_0x20D5F312838C1136(iLocal_6418)) || !unk_0x56732E6CCBB1BAA8(iLocal_6418))
		{
			iLocal_4815 = 7;
			return 1;
		}
	}
	if (!unk_0x437347B10A200C4B(iLocal_6418, 0))
	{
		if (((unk_0x7B5606C651AB51B5(iLocal_6418, 0, 7000) || unk_0x7B5606C651AB51B5(iLocal_6418, 1, 40000)) || unk_0x7B5606C651AB51B5(iLocal_6418, 2, 20000)) || unk_0x7B5606C651AB51B5(iLocal_6418, 3, 30000))
		{
			func_396("TRAFFICKING AIR: FAILING - VEHICLE HAS BECOME UNDRIVEABLE/STUCK");
			iLocal_4815 = 9;
			return 1;
		}
	}
	return 0;
}

int func_21(var uParam0, var uParam1)
{
	if (iLocal_4582)
	{
		fLocal_4581 = vdist(vLocal_4265, uParam0->f_9);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1160)
	{
		if (!func_3(*uParam1[iVar0], 0f, 0f, 0f, 0))
		{
			fVar1[iVar0] = vdist(vLocal_4265, *uParam1[iVar0]);
			if (fVar1[iVar0] > fLocal_4578)
			{
				fLocal_4578 = fVar1[iVar0];
			}
		}
		iVar0++;
	}
	if (!iLocal_4582)
	{
		if (fLocal_4578 > 0f)
		{
			fLocal_4579 = (fLocal_4578 + 1400f);
			fLocal_4580 = (fLocal_4578 + 800f);
			iLocal_4582 = 1;
		}
	}
	if (fLocal_4581 > fLocal_4580 && !iLocal_4544)
	{
		iLocal_4544 = 1;
		func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_D", 9, 0, 0, 0);
	}
	else if (fLocal_4581 > fLocal_4579)
	{
		func_396("RETURNING TRUE ON PLAYER_HAS_ABANDONED_JOB_PLANE");
		return 1;
	}
	return 0;
}

bool func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_44(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_23(sParam2, iParam3, 0);
}

int func_23(char* sParam0, int iParam1, bool bParam2)
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
					func_43();
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
		if (func_42(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_41();
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
				func_33();
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
				if (func_32())
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
			if (func_31())
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
			func_30();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_29();
		func_24();
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
		func_43();
	}
	return 0;
}

void func_24()
{
	if (!func_25())
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

int func_25()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_28())
	{
		return 0;
	}
	if (func_26(unk_0xD803B885F5E47A62()))
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

bool func_26(int iParam0)
{
	return func_27(iParam0, 20);
}

bool func_27(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_28()
{
	return -1;
}

void func_29()
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

void func_30()
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

int func_31()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_32()
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

void func_33()
{
	if (func_40(14))
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
		Global_19486 = func_34();
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

int func_34()
{
	func_35();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_35()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_38(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_37(unk_0x16F2683693E537C9());
			if (func_36(iVar0) && (!func_40(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_36(Global_111638.f_2358.f_539.f_4321))
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

bool func_36(int iParam0)
{
	return iParam0 < 3;
}

int func_37(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_38(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_38(int iParam0)
{
	if (func_36(iParam0))
	{
		return func_39(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_39(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_40(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_41()
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

bool func_42(int iParam0, int iParam1)
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

void func_43()
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

void func_44(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_45(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172)
{
	fVar3 = 0f;
	vVar0 = { *uParam7 };
	if (!unk_0xE82754C349C7B581(vVar0, fParam3, 0, 0))
	{
		if (!unk_0xEB69695E080217B5(vVar0, fParam3))
		{
			*fParam3 = (uParam1->f_303 - 1f);
		}
	}
	if (unk_0xEB69695E080217B5(vVar0, &fVar3))
	{
		if (fVar3 > *fParam3)
		{
			*fParam3 = fVar3;
		}
	}
	unk_0xF5637CC664BEAAD0((*fParam3 + uParam2->f_4), 0, 21);
	*fParam4 = *fParam3;
	if ((vVar0.z - *fParam3) > uParam2->f_4)
	{
		if (*uParam0)
		{
			if (func_49(iParam5, uParam2->f_5))
			{
				*iParam6 = 13;
				func_396("FAILED ALTITUDE CHECK, RETURNING TRUE");
				return 1;
			}
		}
		else
		{
			*uParam0 = 1;
			func_46(iParam5);
		}
	}
	else
	{
		*uParam0 = 0;
	}
	unk_0xD3539A877EC25E86(0,4f, 0,4f);
	if ((vVar0.z - *fParam4) > uParam1->f_303)
	{
		uParam1->f_303 = (vVar0.z - *fParam4);
	}
	if (*uParam0 && func_49(iParam5, 1f))
	{
		if (iLocal_4233 == -1)
		{
			iLocal_4233 = unk_0xD68EA767274B7444();
			unk_0x4D7F4CC43D4D0DE3(iLocal_4233, "Altitude_Warning", "EXILE_1", true);
			func_22(&uParam8, "ARMSAUD", "ARMS_A_HALT", 9, 0, 0, 0);
			uParam1->f_271 = 1;
		}
		fVar5 = ((vVar0.z - *fParam3) - uParam2->f_4);
		if (fVar5 >= 100f)
		{
			fVar4 = 1f;
		}
		else if (fVar5 >= 50f)
		{
			fVar4 = 0,5f;
		}
		else
		{
			fVar4 = 0f;
		}
		unk_0x6F6BA3FE885E6C91(iLocal_4233, "Intensity", fVar4);
	}
	else
	{
		unk_0x55D0A2DB35045A35(iLocal_4233);
		unk_0x43A06902454A1172(iLocal_4233);
		iLocal_4233 = -1;
	}
	return 0;
}

void func_46(int iParam0)
{
	func_47(iParam0, 0f);
}

void func_47(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_48(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_48(bool bParam0)
{
	if (bParam0)
	{
		fVar0 = to_float(unk_0x1C0640BA9A7327B3());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x8CD06866876216F2())
	{
		iVar2 = unk_0x2B6E0A53779D29EA();
		fVar3 = to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (to_float(unk_0x1C0640BA9A7327B3()) / 1000f);
}

int func_49(int iParam0, float fParam1)
{
	if (func_52(iParam0))
	{
		if (func_50(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_50(int iParam0)
{
	if (func_52(iParam0))
	{
		if (func_51(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_48(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

bool func_51(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

bool func_52(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 1);
}

int func_53(char* sParam0, int iParam1, int iParam2)
{
	vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		vVar3 = { unk_0x68F4C0EC296D3901(iParam1, true) };
	}
	switch (iLocal_3365)
	{
		case 0:
			if (vdist2(vVar0, vVar3) > 625f)
			{
				if (!iLocal_3371)
				{
					if (!unk_0xD17F06053799A7CA())
					{
						func_54(sParam0, 7500, 1);
						iLocal_3371 = 1;
						iLocal_3365 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (vdist2(vVar0, vVar3) > 2500f)
			{
				if ((unk_0x1C0640BA9A7327B3() - iParam2) > 20000)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_54(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 1);
}

int func_55(var uParam0)
{
	switch (iLocal_6437)
	{
		case 0:
			iLocal_6418 = uParam0->f_53;
			if (!unk_0x437347B10A200C4B(iLocal_6418, 0))
			{
				unk_0x73270B3C9CC833FD(iLocal_6418, true, 1);
				unk_0xB422445CBCD0AEFB(iLocal_6418, false);
				unk_0xC6A6B4DDD6DC073A(iLocal_6418, 2);
				unk_0xFBFE633A7F731A67(iLocal_6418, 1f);
			}
			func_307(&uLocal_6425, &iLocal_6418, &Local_4849, &Local_6011, &bLocal_4545, uParam0, 0, iLocal_4783);
			Local_4778.f_3 = 0;
			iLocal_4679 = 72476;
			iLocal_6437 = 1;
			break;
		
		case 1:
			if (func_167(uParam0, &iLocal_4786, &iLocal_6419, &Local_4849, &cLocal_4836, &uLocal_4816, &uLocal_6420, &Local_6011, &iLocal_4785, &bLocal_6435, &uLocal_6406, &bLocal_6398, &uLocal_4789, iLocal_4679, &Local_4778, &iLocal_6388, iLocal_4783))
			{
				iLocal_6437 = 2;
			}
			break;
		
		case 2:
			if (func_102(&Local_6011, &Local_4849, fLocal_4847, &uLocal_4784, uParam0, bLocal_6395, 0))
			{
				if (Local_6011.f_297)
				{
					func_56();
				}
				return 1;
			}
			break;
	}
	return 0;
}

void func_56()
{
	Global_111638.f_19978.f_2++;
	if (Global_111638.f_19978.f_2 > 5)
	{
		Global_111638.f_19978.f_2 = 5;
	}
	iVar1 = (Global_111638.f_19978.f_2 + Global_111638.f_19978.f_1);
	unk_0x6FB46C25CCB7E6D5(1720023068, &iVar0, -1);
	if (iVar0 < iVar1)
	{
		unk_0xCDC520E5E48E63D9(1720023068, iVar1, 1);
		func_101(16, iVar1);
	}
	if (Global_111638.f_19978.f_2 == 3)
	{
		unk_0x63D66B3917B1F596(61);
		Global_111638.f_20559.f_472 = 52;
	}
	if (Global_111638.f_19978.f_2 == 5)
	{
		if (Local_4681 >= 0)
		{
			func_98(Local_4681, 0, 0);
		}
		func_95();
		if (Global_111638.f_19978.f_2 >= 5 && Global_111638.f_19978.f_1 >= 5)
		{
			func_82(16, 1);
		}
	}
	if (Global_111638.f_19978.f_2 <= 4)
	{
		if (Local_4681 >= 0)
		{
			func_98(Local_4681, 0, 0);
		}
	}
	func_57(2, iLocal_4246);
	func_95();
	func_365();
}

void func_57(int iParam0, int iParam1)
{
	func_59(Global_111638.f_24899[iParam0], func_81(iParam0), iParam1, 0, 0);
	switch (iParam0)
	{
		case 3:
			Global_111638.f_24899.f_69 = (Global_111638.f_24899.f_69 + iParam1);
			break;
		
		case 2:
			Global_111638.f_24899.f_70 = (Global_111638.f_24899.f_70 + iParam1);
			break;
		
		case 0:
			Global_111638.f_24899.f_71 = (Global_111638.f_24899.f_71 + iParam1);
			break;
	}
	unk_0x6FB46C25CCB7E6D5(func_58(iParam0, 1), &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(func_58(iParam0, 1), iVar0, 1);
}

int func_58(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1214599177;
					break;
				
				case 1:
					return 1155443333;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 376570353;
					break;
				
				case 1:
					return -643951985;
					break;
				
				case 2:
					return 134385628;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 967323175;
					break;
				
				case 1:
					return 357361784;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1787919671;
					break;
				
				case 1:
					return -494685207;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1593841643;
					break;
				
				case 1:
					return -559343533;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return -250890056;
					break;
				
				case 1:
					return -677448510;
					break;
				
				case 2:
					return 364367040;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return -785352478;
					break;
				
				case 1:
					return -1385258870;
					break;
				
				case 2:
					return -576365380;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1699455290;
					break;
				
				case 1:
					return 1718653583;
					break;
				
				case 2:
					return 1930528662;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 1606564553;
					break;
				
				case 1:
					return -1163886152;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return -404923039;
					break;
				
				case 1:
					return -1466275797;
					break;
				
				case 2:
					return -93632737;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return 1257260115;
					break;
				
				case 1:
					return 1317268386;
					break;
				
				case 2:
					return -1196961064;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return -2095192627;
					break;
				
				case 1:
					return 218419230;
					break;
				
				case 2:
					return 515434046;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return -1524227131;
					break;
				
				case 1:
					return -2004221950;
					break;
				
				case 2:
					return 1152527909;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return -1932333809;
					break;
				
				case 1:
					return 128471725;
					break;
				
				case 2:
					return 110476041;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return -963649420;
					break;
				
				case 1:
					return -1344429287;
					break;
				
				case 2:
					return 1977325971;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 218116163;
					break;
				
				case 1:
					return 137735898;
					break;
			}
			break;
	}
	return 1214599177;
}

void func_59(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_80(iParam0) == 3)
	{
		return;
	}
	if (func_80(iParam0) == 4)
	{
		return;
	}
	func_60(func_80(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = 1762386298;
					break;
				
				case 1:
					iVar1 = -544246134;
					break;
				
				case 2:
					iVar1 = -1147816992;
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = 138536943;
					break;
				
				case 1:
					iVar1 = 691239862;
					break;
				
				case 2:
					iVar1 = -1133981805;
					break;
				
				default:
					return;
				}
		}
		unk_0x6FB46C25CCB7E6D5(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xCDC520E5E48E63D9(iVar1, iVar0, 1);
	}
}

int func_60(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	func_79();
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
					func_78(99, 1);
					func_77(-656546900, iParam3);
					break;
				
				case 1:
					func_77(-2098183071, iParam3);
					break;
				
				case 2:
					func_77(1578119842, iParam3);
					break;
			}
			func_76(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_71(5))
					{
						fVar0 = 0,9f;
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
							func_77(-1190521599, iParam3);
							break;
						
						case 1:
							func_77(490143716, iParam3);
							break;
						
						case 2:
							func_77(121069433, iParam3);
							break;
					}
					if (func_71(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_77(219506691, iParam3);
							break;
						
						case 1:
							func_77(1871505786, iParam3);
							break;
						
						case 2:
							func_77(-2024399847, iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_77(27639974, iParam3);
							break;
						
						case 1:
							func_77(422258364, iParam3);
							break;
						
						case 2:
							func_77(316202960, iParam3);
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
							func_77(1806738963, iParam3);
							break;
						
						case 1:
							func_77(1576781520, iParam3);
							break;
						
						case 2:
							func_77(671882196, iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x7CF4675EC2B8ED0B())
					{
						case -123529621:
							switch (iParam0)
							{
								case 0:
									func_77(408653638, iParam3);
									break;
								
								case 1:
									func_77(-424799277, iParam3);
									break;
								
								case 2:
									func_77(-558138038, iParam3);
									break;
							}
							break;
						
						case -1215733929:
							switch (iParam0)
							{
								case 0:
									func_77(2038531975, iParam3);
									break;
								
								case 1:
									func_77(-572903575, iParam3);
									break;
								
								case 2:
									func_77(-953947924, iParam3);
									break;
							}
							if (func_71(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case 468388854:
							switch (iParam0)
							{
								case 0:
									func_77(-445823242, iParam3);
									break;
								
								case 1:
									func_77(-1386757215, iParam3);
									break;
								
								case 2:
									func_77(-727828275, iParam3);
									break;
							}
							break;
						
						case 499562112:
							switch (iParam0)
							{
								case 0:
									func_77(-1744069936, iParam3);
									break;
								
								case 1:
									func_77(799609312, iParam3);
									break;
								
								case 2:
									func_77(181688102, iParam3);
									break;
							}
							func_70(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_78(95, iParam3);
					break;
				
				case 1:
					func_78(97, iParam3);
					break;
				
				case 2:
					func_78(96, iParam3);
					break;
			}
			func_78(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_63(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_63(iVar1);
	}
	iVar5 = (Global_58686[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58686[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58686[iVar2] = 2147483647;
				}
				else
				{
					Global_58686[iVar2] = (Global_58686[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_77(-330339780, iParam3);
					break;
				
				case 1:
					func_77(1697564429, iParam3);
					break;
				
				case 2:
					func_77(1674823841, iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_58686[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58686[iVar2];
			Global_58686[iVar2] = (Global_58686[iVar2] - iParam3);
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
		Global_111638.f_20559.f_233[iVar2].f_2[Global_111638.f_20559.f_233[iVar2].f_1] = iParam1;
		Global_111638.f_20559.f_233[iVar2].f_2[Global_111638.f_20559.f_233[iVar2].f_1].f_1 = iParam2;
		Global_111638.f_20559.f_233[iVar2].f_2[Global_111638.f_20559.f_233[iVar2].f_1].f_2 = iParam3;
		Global_111638.f_20559.f_233[iVar2]++;
		Global_111638.f_20559.f_233[iVar2].f_1++;
		if (Global_111638.f_20559.f_233[iVar2].f_1 > 10)
		{
			Global_111638.f_20559.f_233[iVar2].f_1 = 0;
		}
	}
	func_62(iParam0);
	if (Global_41431 == 15)
	{
		func_61(0);
	}
	return 1;
}

void func_61(bool bParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_3 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1];
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_4 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_1;
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_5 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58694[iVar0][0] = Global_111638.f_20559[iVar0];
		Global_58694.f_31[iVar0][0] = Global_111638.f_20559.f_11[iVar0];
		Global_58694.f_62[iVar0][0] = Global_111638.f_20559.f_22[iVar0];
		Global_58694.f_93[iVar0][0] = Global_111638.f_20559.f_33[iVar0];
		Global_58694.f_124[iVar0][0] = Global_111638.f_20559.f_44[iVar0];
		Global_58694.f_155[iVar0][0] = Global_111638.f_20559.f_55[iVar0];
		Global_58694.f_186[iVar0][0] = Global_111638.f_20559.f_66[iVar0];
		Global_58694.f_217[iVar0][0] = Global_111638.f_20559.f_77[iVar0];
		Global_58694.f_248[iVar0][0] = Global_111638.f_20559.f_88[iVar0];
		if (!bParam0)
		{
			Global_58694[iVar0][1] = Global_111638.f_20559[iVar0];
			Global_58694.f_31[iVar0][1] = Global_111638.f_20559.f_11[iVar0];
			Global_58694.f_62[iVar0][1] = Global_111638.f_20559.f_22[iVar0];
			Global_58694.f_93[iVar0][1] = Global_111638.f_20559.f_33[iVar0];
			Global_58694.f_124[iVar0][1] = Global_111638.f_20559.f_44[iVar0];
			Global_58694.f_155[iVar0][1] = Global_111638.f_20559.f_55[iVar0];
			Global_58694.f_186[iVar0][1] = Global_111638.f_20559.f_66[iVar0];
			Global_58694.f_217[iVar0][1] = Global_111638.f_20559.f_77[iVar0];
			Global_58694.f_248[iVar0][1] = Global_111638.f_20559.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_62(int iParam0)
{
	iVar0 = Global_58686[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xCDC520E5E48E63D9(52740893, iVar0, 1);
			break;
		
		case 1:
			unk_0xCDC520E5E48E63D9(1153264002, iVar0, 1);
			break;
		
		case 2:
			unk_0xCDC520E5E48E63D9(-1921710979, iVar0, 1);
			break;
	}
}

void func_63(int iParam0)
{
	if (iParam0 == 8)
	{
		func_69(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_69(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_69(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_69(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_66(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_66(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_66(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_66(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_66(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_66(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x8CD06866876216F2())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), iParam0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_2097152[func_65()].f_6174.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), iParam0);
		unk_0x0674E58A79778E99(&(Global_2097152[func_65()].f_6174.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_64(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_64(int iParam0)
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

int func_65()
{
	iVar0 = 0;
	return iVar0;
}

void func_66(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_67(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_67(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_68();
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

int func_68()
{
	return Global_1312745;
}

int func_69(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_68();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x04D746E8DA20611E((iParam0 - 0)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x04D746E8DA20611E((iParam0 - 192)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x04D746E8DA20611E((iParam0 - 513)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x04D746E8DA20611E((iParam0 - 705)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar20, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar21, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar22, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = unk_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar23, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = unk_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar24, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_70(int iParam0)
{
	func_78(93, iParam0);
	func_78(29, iParam0);
	func_78(30, iParam0);
}

bool func_71(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_73(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_73(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_73(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_73(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_72(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_72(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_72(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_72(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_72(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_72(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x8CD06866876216F2())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, iParam0);
	}
	return unk_0xEAE0D21A50E6C7F4(Global_2097152[func_65()].f_6174.f_10, iParam0);
}

int func_72(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_67(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_73(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_68();
	}
	iVar1 = func_75(iParam0, iParam1);
	uVar2 = func_74(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_74(int iParam0)
{
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x04D746E8DA20611E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x04D746E8DA20611E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x04D746E8DA20611E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x04D746E8DA20611E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - unk_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - unk_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
	}
	return iVar0;
}

int func_75(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_68();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_76(bool bParam0)
{
	iVar1 = 0;
	if (unk_0x5E109EC687D2605A(27))
	{
		return 0;
	}
	if (unk_0x6FB46C25CCB7E6D5(-656546900, &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6FB46C25CCB7E6D5(-2098183071, &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6FB46C25CCB7E6D5(1578119842, &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x6FB46C25CCB7E6D5(-422142831, &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xCDC520E5E48E63D9(-422142831, iVar1, 1);
		func_101(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_82(27, 1);
	return 1;
}

void func_77(int iParam0, int iParam1)
{
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 1);
}

void func_78(int iParam0, int iParam1)
{
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57254[iParam0].f_2)
	{
		return;
	}
	if (unk_0x8CD06866876216F2())
	{
		return;
	}
	if (Global_57254[iParam0])
	{
		unk_0x6FB46C25CCB7E6D5(Global_57254[iParam0].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xCDC520E5E48E63D9(Global_57254[iParam0].f_1, iVar0, 1);
	}
}

void func_79()
{
	if (unk_0x61D9362D70D2DD56())
	{
		unk_0x6FB46C25CCB7E6D5(52740893, &iVar0, -1);
		if (!Global_58686[0] == iVar0)
		{
			Global_58686[0] = iVar0;
		}
		unk_0x6FB46C25CCB7E6D5(1153264002, &iVar0, -1);
		if (!Global_58686[1] == iVar0)
		{
			Global_58686[1] = iVar0;
		}
		unk_0x6FB46C25CCB7E6D5(-1921710979, &iVar0, -1);
		if (!Global_58686[2] == iVar0)
		{
			Global_58686[2] = iVar0;
		}
	}
}

int func_80(int iParam0)
{
	return Global_1798[iParam0].f_17;
}

int func_81(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 99;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 101;
			break;
		
		case 3:
			return 102;
			break;
		
		case 4:
			return 103;
			break;
		
		case 5:
			return 104;
			break;
		
		case 6:
			return 105;
			break;
		
		case 7:
			return 106;
			break;
		
		case 8:
			return 107;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 109;
			break;
		
		case 11:
			return 110;
			break;
		
		case 12:
			return 111;
			break;
		
		case 13:
			return 112;
			break;
		
		case 14:
			return 113;
			break;
		
		case 15:
			return 25;
			break;
	}
	return 0;
}

int func_82(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_83(iParam0, iParam1);
}

int func_83(int iParam0, int iParam1)
{
	if (func_40(14) && !func_94(iParam0))
	{
		return 0;
	}
	if (unk_0x5E109EC687D2605A(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31017 != 0 && !Global_76622)
	{
		return 0;
	}
	if (func_93(&Global_4270065))
	{
		if (func_91(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_84(&Global_4270065, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x5A66449FC9BDF808(iParam0))
		{
			return 0;
		}
		if (unk_0x5E109EC687D2605A(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_84(var uParam0, int iParam1)
{
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_40(14) && !func_94(iParam1))
	{
		return 0;
	}
	if (func_91(uParam0, iParam1))
	{
		return 0;
	}
	if (func_90(uParam0) < 0f)
	{
		func_89(uParam0, 0);
	}
	func_87(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_85(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_85(var uParam0, int iParam1)
{
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_40(14) && !func_94(iParam1))
	{
		return 0;
	}
	if (func_91(uParam0, iParam1))
	{
		return 0;
	}
	if (func_90(uParam0) < 0f)
	{
		func_89(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_86(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_86(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_87(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_88(uParam0, iVar0);
		iVar0++;
	}
	func_89(uParam0, (Global_4270064 - 0,5f));
}

void func_88(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_89(var uParam0, float fParam1)
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

float func_90(var uParam0)
{
	return uParam0->f_80;
}

bool func_91(var uParam0, int iParam1)
{
	return func_92(uParam0, iParam1) != -1;
}

int func_92(var uParam0, int iParam1)
{
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

bool func_93(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_94(int iParam0)
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

void func_95()
{
	func_96();
}

int func_96()
{
	if (func_97(0))
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

bool func_97(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

void func_98(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_69((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_111638.f_10189[iParam0].f_5 == 1)
	{
		if (Global_111638.f_10189[iParam0].f_6 == 11 || Global_111638.f_10189[iParam0].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111638.f_10189[iParam0].f_5 = 1;
		Global_111638.f_10189[iParam0].f_10 = iParam1;
		Global_111638.f_10189[iParam0].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0xE7B2B6A56C007908(-2044299740, 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xE7B2B6A56C007908(86701099, 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xE7B2B6A56C007908(-375571184, 50, 0);
		}
	}
	if (bVar0)
	{
		func_99();
	}
}

void func_99()
{
	iVar0 = 0;
	Global_111374 = 0;
	Global_111375 = 0;
	Global_111376 = 0;
	Global_111377 = 0;
	Global_111378 = 0;
	Global_111379 = 0;
	Global_111380 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_111638.f_10189.f_3853;
	Global_111638.f_10189.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_111638.f_10189[iVar0].f_5 == 1)
		{
			switch (Global_111638.f_10189[iVar0].f_6)
			{
				case 1:
					Global_111374++;
					fVar1 = (fVar1 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 3:
					Global_111375++;
					fVar2 = (fVar2 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 5:
					Global_111376++;
					fVar3 = (fVar3 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 7:
					Global_111377++;
					fVar4 = (fVar4 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 9:
					Global_111378++;
					fVar5 = (fVar5 + (Global_111638.f_10189[iVar0].f_4 * 4f));
					break;
				
				case 11:
					Global_111379++;
					fVar6 = (fVar6 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 13:
					Global_111380++;
					fVar7 = (fVar7 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_111357 > 0)
	{
		if (Global_111374 == Global_111357)
		{
			fVar1 = 55f;
		}
	}
	if (Global_111358 > 0)
	{
		if (Global_111375 == Global_111358)
		{
			fVar2 = 10f;
		}
	}
	if (Global_111359 > 0)
	{
		if (Global_111376 == Global_111359)
		{
			fVar3 = 0f;
		}
	}
	if (Global_111360 > 0)
	{
		if (Global_111377 == Global_111360)
		{
			fVar4 = 10f;
		}
	}
	if (Global_111361 > 0)
	{
		if (((Global_111378 == Global_111361 || (Global_111361 * 10 / Global_111378) < 41) || Global_111378 > Global_111364) || Global_111378 == Global_111364)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_111638.f_10189.f_3856, 14))
			{
				if (Global_111378 == Global_111361)
				{
					unk_0xE7B2B6A56C007908(-2122623864, Global_111361, 0);
					unk_0x5D96D8530B3D0904(&(Global_111638.f_10189.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_111362 > 0)
	{
		if (Global_111379 == Global_111362)
		{
			fVar6 = 15f;
		}
	}
	if (Global_111363 > 0)
	{
		if (Global_111380 == Global_111363)
		{
			fVar7 = 5f;
		}
	}
	Global_111638.f_10189.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_111378 > Global_111364 || Global_111378 == Global_111364)
	{
		iVar9 = Global_111364;
	}
	else
	{
		iVar9 = Global_111378;
	}
	unk_0xCDC520E5E48E63D9(-1055525200, Global_111374, 1);
	unk_0xCDC520E5E48E63D9(-419750212, Global_111357, 1);
	unk_0xCDC520E5E48E63D9(1331385274, Global_111375, 1);
	unk_0xCDC520E5E48E63D9(542355616, Global_111358, 1);
	unk_0xCDC520E5E48E63D9(1561233577, Global_111376, 1);
	unk_0xCDC520E5E48E63D9(558499468, Global_111359, 1);
	unk_0xCDC520E5E48E63D9(-852659719, Global_111377, 1);
	unk_0xCDC520E5E48E63D9(-20401960, Global_111360, 1);
	unk_0xCDC520E5E48E63D9(-2122623864, iVar9, 1);
	unk_0xCDC520E5E48E63D9(-215705366, Global_111364, 1);
	unk_0xCDC520E5E48E63D9(-131898641, (Global_111380 + Global_111379), 1);
	unk_0xCDC520E5E48E63D9(-2086369560, (Global_111363 + Global_111362), 1);
	Global_111381 = (Global_111374 * 100 / Global_111357);
	Global_111383 = ((Global_111376 + Global_111375) * 100 / (Global_111359 + Global_111358));
	Global_111382 = ((Global_111377 + iVar9) * 100 / (Global_111360 + Global_111364));
	Global_111384 = ((Global_111379 + Global_111380) * 100 / (Global_111362 + Global_111363));
	unk_0x11F69E56D7B5F3C7(1215094015, Global_111638.f_10189.f_3853, 1);
	unk_0xCDC520E5E48E63D9(1813094653, Global_111381, 1);
	unk_0xCDC520E5E48E63D9(-1205712980, Global_111382, 1);
	unk_0xCDC520E5E48E63D9(480408826, Global_111383, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_111638.f_10189.f_3853))
	{
		func_101(13, floor(Global_111638.f_10189.f_3853));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_100() == 2 == 0 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_96();
				}
			}
		}
	}
}

int func_100()
{
	return Global_30768;
}

int func_101(int iParam0, int iParam1)
{
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
	iVar0 = unk_0xBD47F720AB99D749(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x12ABC45272B87562(iParam0, iParam1);
	}
	return 0;
}

int func_102(var uParam0, var uParam1, float fParam2, var uParam3, var uParam4, bool bParam5, bool bParam6)
{
	switch (*uParam3)
	{
		case 0:
			unk_0xA37A90C62806D848(1);
			if (bParam6)
			{
				unk_0xBFE31971E49FA500(false);
			}
			if (uParam0->f_297 && !bParam5)
			{
				unk_0x790015DC92C918E2();
			}
			func_166(uParam4, uParam0, uParam1, fParam2);
			fVar1 = (fVar1 + 7000f);
			fVar1 = (fVar1 + IntToFloat(((uParam0->f_300 + uParam0->f_301) + uParam0->f_299)));
			if (uParam0->f_297)
			{
				iLocal_4246 = round(fVar1);
				func_165(&uLocal_3544, "DTRSHRD_MPASS", "DTRSHRD_ART", 0);
			}
			else
			{
				uParam0->f_300 = 0;
				uParam0->f_301 = 0;
				uParam0->f_302 = 0;
				uParam0->f_299 = 0;
				fVar1 = 0f;
				func_165(&uLocal_3544, "DTRFAIR_UIF", "DTRSHRD_ART", 0);
			}
			if (uParam4->f_46)
			{
				if (uParam0->f_300 > 0)
				{
					func_164(&uLocal_3544, 3, "DTRFAIR_UI05D", "", uParam0->f_300, 0, 2, 0);
				}
				else
				{
					func_164(&uLocal_3544, 3, "DTRFAIR_UI05D", "", uParam0->f_300, 0, 0, 0);
				}
			}
			if (uParam0->f_301 > 0)
			{
				func_164(&uLocal_3544, 3, "DTRFAIR_UI05C", "", uParam0->f_301, 0, 2, 0);
			}
			else
			{
				func_164(&uLocal_3544, 3, "DTRFAIR_UI05C", "", uParam0->f_301, 0, 0, 0);
			}
			if (uParam0->f_299 > 0)
			{
				func_164(&uLocal_3544, 3, "DTRFAIR_UI05A", "", uParam0->f_299, 0, 2, 0);
			}
			else
			{
				func_164(&uLocal_3544, 3, "DTRFAIR_UI05A", "", uParam0->f_299, 0, 0, 0);
			}
			fVar2 = func_50(&(uParam0->f_209));
			fVar2 = (fVar2 * 1000f);
			iVar0 = round(fVar2);
			unk_0x11E0F00830F70E15(iVar0, 15, 0);
			func_164(&uLocal_3544, 9, "DTRFAIR_UI03", "", round(fVar2), 0, 0, 0);
			func_163(&(uParam0->f_209));
			func_164(&uLocal_3544, 3, "DTRFAIR_UI06", "", ceil(fVar1), 0, 0, 0);
			func_162(&uLocal_3544, 0, "", 0, 0, 0, 0, 0);
			*uParam3 = 1;
			break;
		
		case 1:
			if (!iLocal_4243)
			{
				unk_0x3D0B5872F36FB05C("TREVOR_SMALL_01");
				iLocal_4243 = 1;
			}
			if (func_158(&uLocal_3544, 1, 0) && unk_0x96871D785000ACAF())
			{
				func_157(&uLocal_4121, "DTRSHRD_CONT", unk_0xF59058FCB716F903(2, 215, true), 1, 0, 0, 361);
				settimerb(0);
				*uParam3 = 2;
			}
			break;
		
		case 2:
			if (timerb() > 7000 && !iLocal_4242)
			{
				func_149(&uLocal_4121, 1128792064, 1, 0, 1, 1065353216);
				if (unk_0xBFC0798A6E3417F9(2, 215) || unk_0xD245978525608929(2, 200))
				{
					iLocal_4242 = 1;
				}
			}
			bVar3 = func_116(&uLocal_3544, 0, 1065353216, 0, 0, 0);
			if (iLocal_4242 || timerb() > 12000)
			{
				func_115(&uLocal_3544);
				if (bVar3)
				{
					func_113(&uLocal_3544);
					*uParam3 = 3;
				}
			}
			break;
		
		case 3:
			if (bParam6)
			{
				func_103(1, 1, 1);
			}
			return 1;
			break;
	}
	return 0;
}

void func_103(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), true, 0);
	}
	unk_0x2D23BE319D971F4C(1);
	func_105(0, 1, iParam2, 0, 0, 0);
	if (bParam1)
	{
		unk_0xBFE31971E49FA500(true);
		unk_0x8BCB70EB440DED83(true);
	}
	func_104(23, 0);
}

void func_104(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&Global_31015, iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_31015, iParam0);
	}
}

void func_105(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_112(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_31())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_111(1, iParam3, uParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_112(0);
		unk_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_111(0, iParam3, uParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_109(unk_0xD803B885F5E47A62())) && !func_107(unk_0xD803B885F5E47A62(), 0)) && !func_106()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_109(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_106()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 14);
}

bool func_107(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_108(-1, 0) == 8;
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

int func_108(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_68();
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

int func_109(int iParam0)
{
	if (func_107(iParam0, 0))
	{
		return 1;
	}
	if (func_110())
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

bool func_110()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_111(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_112(int iParam0)
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

void func_113(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0xE17FDF9E3068281B(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0x0EFF6B4415DAF4A1())
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x1200CC973A2399C8(false);
			unk_0x7E60D21B163E9D56();
		}
		unk_0xE17FDF9E3068281B(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x31A33F7BCB08CB80(false);
		uParam0->f_564 = 0;
	}
	if (!Global_76890)
	{
		if (!unk_0x131F22FE6F47A65D(unk_0xA30EC016B12C03E4()))
		{
			if (!Global_76891)
			{
				if (unk_0x757EF87A33649210() && !func_97(0))
				{
					unk_0x82E51BCA72537B6C(800);
				}
			}
		}
	}
	func_114(0);
}

void func_114(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

void func_115(var uParam0)
{
	if (uParam0->f_561 || uParam0->f_572 <= uParam0->f_558)
	{
		uParam0->f_561 = 0;
		uParam0->f_558 = (uParam0->f_572 - 1);
	}
}

int func_116(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (unk_0xF4CCC8CB6DE7F1AE() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = unk_0xF4CCC8CB6DE7F1AE();
	if (!unk_0x8CD06866876216F2())
	{
		if (unk_0x28072FDD60CE3A6E(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (unk_0x946BFA82EB988C81(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4())))
		{
			uParam0->f_575 = 1;
			return 1;
		}
	}
	if (!uParam0->f_564)
	{
		if (unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
		{
			unk_0x31A33F7BCB08CB80(true);
			uParam0->f_564 = 1;
		}
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (!unk_0x8CD06866876216F2())
		{
			if (unk_0x3114787DB5A129EF(unk_0xD803B885F5E47A62(), 0))
			{
				unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0);
			}
		}
	}
	unk_0x3584F71E5CA29322(7);
	unk_0x3584F71E5CA29322(8);
	unk_0x3584F71E5CA29322(9);
	unk_0x3584F71E5CA29322(6);
	unk_0x3584F71E5CA29322(19);
	unk_0x38C3A68D7861DCFD(2, 19, 1);
	unk_0x38C3A68D7861DCFD(0, 37, 1);
	unk_0x38C3A68D7861DCFD(0, 21, 1);
	unk_0x38C3A68D7861DCFD(0, 28, 1);
	unk_0x38C3A68D7861DCFD(0, 29, 1);
	unk_0x38C3A68D7861DCFD(0, 171, 1);
	func_143(0);
	if (unk_0x91E3F625EF57450D(2))
	{
		if (unk_0xBB16188FFCC4B1B5() || (unk_0x757EF87A33649210() && !unk_0x7BCE0E6DD4A1F749()))
		{
			unk_0x5D80F91A16C40CDE();
		}
	}
	Global_41981 = 1;
	if (!uParam0->f_563)
	{
		switch (func_37(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4())))
		{
			case 1:
				unk_0x82A772610883F395("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				unk_0x82A772610883F395("SuccessTrevor", 1000, 0);
				break;
			
			default:
				unk_0x82A772610883F395("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_563 = 1;
	}
	if (uParam0->f_558 == 0)
	{
		uParam0->f_558 = (uParam0->f_572 + floor((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_572 >= (uParam0->f_558 - 1500))
	{
		uParam0->f_558 = uParam0->f_572 + 3000;
	}
	if (uParam0->f_560 == 0f)
	{
		uParam0->f_560 = (uParam0->f_560 + func_142(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_142(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_142((25f * 0,5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_142(30f) - func_142(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_114(1);
		uParam0->f_572 = (uParam0->f_572 + round((0f + (1000f * timestep()))));
		func_121(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0,225f) * timestep())));
			}
		}
		uParam0->f_30 = func_120(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_565)
				{
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0,75f;
					unk_0x7E60C62A7CE58FC8(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x7E60D21B163E9D56();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1,215f) * timestep())));
			}
		}
		uParam0->f_547 = func_120(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0,7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_1, "TRANSITION_OUT");
			unk_0x7E60D21B163E9D56();
			uParam0->f_546 = uParam0->f_572;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0,3f) * timestep())));
				}
			}
		}
		uParam0->f_548 = func_120(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (unk_0xB8E3620B82AD47D7(2))
			{
				if (unk_0x83D8570832F172A7(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_117(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (unk_0xBFC0798A6E3417F9(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && unk_0x83D8570832F172A7(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x7E60D21B163E9D56();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0,75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x7E60D21B163E9D56();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0,75f;
				}
				func_117(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_565 || uParam0->f_566) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_566 && !uParam0->f_565)
				{
					uParam0->f_565 = 1;
					uParam0->f_573 = 0,75f;
					unk_0x7E60C62A7CE58FC8(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x7E60D21B163E9D56();
				}
				uParam0->f_559 = func_120((uParam0->f_559 + (((1f / 0,3f) * uParam0->f_573) * timestep())), 0f, 1f);
				uParam0->f_573 = func_120((uParam0->f_573 + 0,07f), 0,75f, 1,15f);
			}
		}
		else
		{
			uParam0->f_559 = func_120((uParam0->f_559 - ((((1f / 0,3f) * uParam0->f_573) * 0,01f) * timestep())), 0f, 1f);
			uParam0->f_573 = func_120((uParam0->f_573 + 0,07f), 0,75f, 1,15f);
		}
		if (uParam0->f_572 > uParam0->f_558)
		{
			if (uParam0->f_561)
			{
				if (!uParam0->f_567)
				{
					if (unk_0xBFC0798A6E3417F9(2, 215))
					{
						uParam0->f_561 = 0;
					}
				}
			}
			else if ((uParam0->f_572 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_575 = !bVar0;
		if (bParam1)
		{
			wait(0);
		}
		else
		{
			if (!bVar0)
			{
				func_114(0);
			}
			return !bVar0;
		}
	}
	func_114(0);
	return 1;
}

void func_117(var uParam0, bool bParam1)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "CLEAR_ALL");
	unk_0x7E60D21B163E9D56();
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x1200CC973A2399C8(true);
		unk_0x7E60D21B163E9D56();
	}
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(0);
	func_119(unk_0xF59058FCB716F903(2, 215, true));
	func_118("ES_HELP");
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0x1200CC973A2399C8(true);
		unk_0x3CAEA85DA607305E(215);
	}
	unk_0x7E60D21B163E9D56();
	if (bParam1)
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
		unk_0x3CAEA85DA607305E(1);
		func_119(unk_0xF59058FCB716F903(2, 216, true));
		func_118("ES_XPAND");
		if (unk_0x0EFF6B4415DAF4A1())
		{
			unk_0x1200CC973A2399C8(true);
			unk_0x3CAEA85DA607305E(216);
		}
		unk_0x7E60D21B163E9D56();
	}
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x7E60D21B163E9D56();
}

void func_118(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_119(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

float func_120(float fParam0, float fParam1, float fParam2)
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

void func_121(var uParam0, float fParam1, bool bParam2)
{
	iVar0 = round((uParam0->f_547 * 255f));
	fVar1 = (func_141() * 0,25f);
	if (unk_0x83D8570832F172A7(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0x7E60C62A7CE58FC8(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_118(&(uParam0->f_5));
				if (uParam0->f_556 == 4)
				{
					func_140(&(uParam0->f_13));
				}
				else
				{
					func_118(&(uParam0->f_13));
				}
				if (unk_0x8CD06866876216F2())
				{
					unk_0x3CAEA85DA607305E(150);
				}
				else
				{
					unk_0x3CAEA85DA607305E(100);
				}
				unk_0x1200CC973A2399C8(true);
				if (uParam0->f_556 == 4)
				{
					unk_0x3CAEA85DA607305E((uParam0->f_56 - 1));
				}
				else
				{
					unk_0x3CAEA85DA607305E(uParam0->f_56);
				}
				unk_0x1200CC973A2399C8(bParam2);
				if (uParam0->f_556 == 4 || uParam0->f_556 == 3)
				{
					unk_0x3CAEA85DA607305E(2);
				}
				else
				{
					unk_0x3CAEA85DA607305E(69);
				}
				unk_0x7E60D21B163E9D56();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				unk_0x7E60C62A7CE58FC8(uParam0->f_1, "TRANSITION_UP");
				unk_0x7C19E5E4784BD7CF(0,15f);
				unk_0x1200CC973A2399C8(true);
				unk_0x7E60D21B163E9D56();
				uParam0->f_3 = 1;
			}
		}
		func_139();
		unk_0x6567AE843FADBA94(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0,1388889f + func_142((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0,975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0,3f * func_141());
	if (uParam0->f_12)
	{
		fVar1 = 0,5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_556 != 4)
	{
		fVar7 = func_138(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0,006f));
		}
		if (unk_0x33D480CCE15C991A(0) < 1,4f)
		{
			fVar6 = (fVar6 * 1,3f);
		}
		fVar7 = func_138(&(uParam0->f_550));
		fVar8 = (((0,119f + 0,05f) / func_141()) / 2,5f);
		if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0)
		{
			if (fVar6 < (fVar7 + (2,6f * fVar8)))
			{
				fVar6 = (fVar7 + (2,6f * fVar8));
			}
		}
		else if (uParam0->f_556 == 5)
		{
			if (fVar6 < (fVar7 + (2,6f * fVar8)))
			{
				fVar6 = (fVar7 + (2,6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1,9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0,499f - (fVar6 / 2f)) + 0,006f);
	fVar10 = ((0,499f + (fVar6 / 2f)) - 0,006f);
	unk_0x558EC149EB2BC0A2(2, 215);
	unk_0x558EC149EB2BC0A2(2, 216);
	unk_0x558EC149EB2BC0A2(2, 200);
	unk_0x38C3A68D7861DCFD(2, 200, 1);
	if (uParam0->f_562 || uParam0->f_567)
	{
		if ((IntToFloat(uParam0->f_558) - (14000f * fParam1)) < IntToFloat(uParam0->f_572) || ((uParam0->f_567 && uParam0->f_559 > 0,95f) && (uParam0->f_558 - 10000) < uParam0->f_572))
		{
			if (uParam0->f_567)
			{
				if (uParam0->f_570 < 0)
				{
					uParam0->f_570 = (uParam0->f_570 * -1);
					uParam0->f_570 = (uParam0->f_572 + uParam0->f_570);
				}
				if (uParam0->f_570 > 0)
				{
					if ((uParam0->f_570 - uParam0->f_572) > 0)
					{
						func_135((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						uParam0->f_570 = 0;
						uParam0->f_569 = 1;
						uParam0->f_567 = 0;
						uParam0->f_561 = 0;
						uParam0->f_562 = 0;
						uParam0->f_558 = uParam0->f_572 + 500;
						uParam0->f_570 = 0;
					}
				}
				if (uParam0->f_568 < 1f)
				{
					uParam0->f_568 = (uParam0->f_568 + (0f + ((1f / 0,166f) * timestep())));
					if (uParam0->f_568 > 1f)
					{
						uParam0->f_568 = 1f;
					}
				}
			}
			if (unk_0x757EF87A33649210())
			{
				unk_0xBD706C594F6DCD4A();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0,1f) && uParam0->f_572 <= uParam0->f_558)
			{
				unk_0x3584F71E5CA29322(7);
				unk_0x3584F71E5CA29322(8);
				unk_0x3584F71E5CA29322(9);
				unk_0x3584F71E5CA29322(6);
				unk_0x6567AE843FADBA94(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				unk_0x38C3A68D7861DCFD(0, 140, 1);
				unk_0x38C3A68D7861DCFD(0, 141, 1);
				unk_0x38C3A68D7861DCFD(0, 142, 1);
				unk_0x38C3A68D7861DCFD(2, 188, 1);
				if (unk_0xD245978525608929(2, 188))
				{
					unk_0x4D7F4CC43D4D0DE3(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					unk_0x4D7F4CC43D4D0DE3(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
				unk_0x38C3A68D7861DCFD(2, 187, 1);
				if (unk_0xD245978525608929(2, 187))
				{
					unk_0x4D7F4CC43D4D0DE3(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					unk_0x4D7F4CC43D4D0DE3(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
				unk_0x38C3A68D7861DCFD(2, 202, 1);
				if (unk_0xD245978525608929(2, 202))
				{
					unk_0x4D7F4CC43D4D0DE3(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					unk_0x4D7F4CC43D4D0DE3(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
			}
			else if (uParam0->f_562)
			{
				unk_0x3584F71E5CA29322(7);
				unk_0x3584F71E5CA29322(8);
				unk_0x3584F71E5CA29322(9);
				unk_0x3584F71E5CA29322(6);
				unk_0x38C3A68D7861DCFD(0, 140, 1);
				unk_0x38C3A68D7861DCFD(0, 141, 1);
				unk_0x38C3A68D7861DCFD(0, 142, 1);
				if (unk_0xBFC0798A6E3417F9(2, 215) || unk_0xD245978525608929(2, 200))
				{
					unk_0x4D7F4CC43D4D0DE3(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					unk_0x4D7F4CC43D4D0DE3(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
			}
		}
	}
	unk_0xA402F6C87C08815C(1, &iVar13, &iVar14, &iVar15, &iVar16);
	unk_0x7178F32F6742C936(iVar13, iVar14, iVar15, iVar0);
	unk_0xF1F881BAAAFB43B1(fVar9, fVar10);
	unk_0xEEF67251E263A87F(0);
	unk_0xD3539A877EC25E86(1f, 0,4f);
	fVar1 = (fVar1 - func_142(6f));
	fVar1 = (fVar1 + (func_142(30f) - func_142((2f * 2f))));
	fVar11 = (fVar2 - func_142((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_120((fVar11 / (0,6f * func_142(25f))), 0f, 1f);
		func_139();
		unk_0xC1032CAC14DE468A(0,5f, (fVar1 - (func_142((2f - 0,5f)) - 0,001388889f)), fVar6, func_134(1f), iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_142((2f * 0,3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_142((25f * 0,2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0,3f * func_141())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_120((fVar11 / (0,8f * func_142(25f))), 0f, 1f);
			func_131(uParam0, iVar17, (fVar1 + func_142(2f)), fVar9, fVar10, round((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_142(25f));
		if (uParam0->f_556 == 4)
		{
			if (iVar17 == (uParam0->f_576 - 1))
			{
				fVar1 = (fVar1 + func_142((25f * 0,2f)));
				fVar11 = (fVar2 - (fVar1 - (0,3f * func_141())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_142(2f));
					fVar12 = func_120((fVar11 / (0,6f * func_142(25f))), 0f, 1f);
					func_139();
					unk_0xC1032CAC14DE468A(0,5f, (fVar1 + func_142((2f * 0,5f))), fVar6, func_134(1f), iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_142((2f * 0,3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_142((25f * 0,2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_556 == 4)
	{
		return;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_142((25f * 0,2f)));
		fVar11 = (fVar2 - (fVar1 - (0,3f * func_141())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_142(2f));
			fVar12 = func_120((fVar11 / (0,6f * func_142(25f))), 0f, 1f);
			func_139();
			unk_0xC1032CAC14DE468A(0,5f, (fVar1 + func_142((2f * 0,5f))), fVar6, func_134(1f), iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_142((25f * 0,2f)));
		fVar11 = (fVar2 - (fVar1 - (0,3f * func_141())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_120((fVar11 / (0,8f * func_142(25f))), 0f, 1f);
			unk_0x7178F32F6742C936(iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar0))));
			func_124(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0xB3260A60545D3F11() == 0)
			{
				fVar20 = (fVar9 + ((0,119f / func_141()) / 2,5f));
				fVar21 = (fVar10 - ((0,119f / func_141()) / 2,5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0,119f + 0,05f) / func_141()) / 2,5f));
					fVar21 = (fVar10 - (((0,119f + 0,05f) / func_141()) / 2,5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0,28f) + 0,006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0,28f) + 0,006f) / 2f));
			}
			if (uParam0->f_556 != 3)
			{
				unk_0xF1F881BAAAFB43B1(fVar20, fVar21);
				unk_0xEEF67251E263A87F(1);
			}
			else
			{
				fVar20 = 0,5f;
				unk_0xEEF67251E263A87F(0);
			}
			unk_0xD3539A877EC25E86(1f, 0,4f);
			func_123(&(uParam0->f_550), fVar20, (fVar1 + func_142((2f * 2f))), 0, 0, 0);
			unk_0xF1F881BAAAFB43B1(fVar20, fVar21);
			unk_0xEEF67251E263A87F(2);
			unk_0xD3539A877EC25E86(1f, 0,4f);
			unk_0xAAE406A7DA443B93(0);
			func_139();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0,28f) + 0,006f));
			unk_0xF1F881BAAAFB43B1(fVar20, fVar22);
			unk_0x7178F32F6742C936(iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					unk_0x070005E852D4C0E9("PERCENTAGE");
					unk_0x6D99DF8263D35CE5(uParam0->f_554);
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_142((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0x070005E852D4C0E9("FO_TWO_NUM");
					unk_0x6D99DF8263D35CE5(uParam0->f_554);
					unk_0x6D99DF8263D35CE5(uParam0->f_555);
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_142((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0x070005E852D4C0E9("MTPHPER_XPNO");
					unk_0x6D99DF8263D35CE5(uParam0->f_554);
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_142((2f * 2f))), 0);
					break;
				
				case 5:
					unk_0x070005E852D4C0E9("ESDOLLA");
					unk_0xCBD015EC7E4226BC(uParam0->f_554, 1);
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_142((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_557 != 0)
			{
				iVar35 = 255;
				iVar36 = 255;
				iVar37 = 255;
				iVar38 = iVar0;
				switch (uParam0->f_557)
				{
					case 1:
						unk_0xA402F6C87C08815C(107, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 3:
						unk_0xA402F6C87C08815C(109, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 2:
						unk_0xA402F6C87C08815C(108, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
				}
				fVar39 = (0,001388889f * 5f);
				fVar40 = ((0,00078125f * 16f) * 2f);
				fVar41 = ((0,001388889f * 16f) * 2f);
				fVar42 = ((fVar21 + func_122(4f)) - 0,006f);
				fVar43 = ((fVar1 + func_142(10f)) + fVar39);
				if (uParam0->f_556 == -1)
				{
					fVar42 = (fVar42 - (0,006f * 6f));
				}
				fVar40 = (fVar40 * 0,65f);
				fVar41 = (fVar41 * 0,65f);
				unk_0x539E86AE011A8B38(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, round((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_142(30f) - 2f));
		}
	}
}

float func_122(float fParam0)
{
	return (fParam0 * 0,00078125f);
}

void func_123(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	unk_0xAAE406A7DA443B93(iParam3);
	unk_0x7BBAC160090910C3(iParam5);
	func_139();
	if (bParam4)
	{
		unk_0x070005E852D4C0E9("STRING");
		unk_0xD06AC7C87A34A6AD(sParam0);
	}
	else
	{
		unk_0x070005E852D4C0E9(sParam0);
	}
	unk_0xE0026608C37C7C41(fParam1, fParam2, 0);
}

int func_124(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	StringCopy(&cVar0, func_130(iParam0), 64);
	StringCopy(&cVar16, func_127(iParam0, bParam1), 64);
	if (unk_0x12AB0310C2281427(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0xE5AC5CA7914F5BAE(&iVar32, &iVar33);
			fVar35 = unk_0x33D480CCE15C991A(0);
			if (func_126())
			{
				iVar32 = round((to_float(iVar33) * fVar35));
			}
			fVar36 = (to_float(iVar32) / to_float(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_126())
			{
				fVar34 = 1f;
			}
			if (unk_0x8A22C4C08282BF26(-892862129) > 0)
			{
				unk_0x8A462DAA7D1D9008(&iVar32, &iVar33);
			}
			iVar32 = round((to_float(iVar32) / fVar34));
			iVar33 = round((to_float(iVar33) / fVar34));
		}
		else
		{
			unk_0x8A462DAA7D1D9008(&iVar32, &iVar33);
		}
		vVar37 = { unk_0xDE43A059FBFFF38A(&cVar0, &cVar16) };
		vVar37.x = (vVar37.x * (func_125(iParam0) / fVar34));
		vVar37.y = (vVar37.y * (func_125(iParam0) / fVar34));
		if (!bParam2)
		{
			vVar37.x = (vVar37.x - 2f);
			vVar37.y = (vVar37.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar37.x = 288f;
			vVar37.y = 106f;
		}
		if (iParam0 == 29 && unk_0x12AB0310C2281427(&(Global_22350.f_7029[29])) == -1487683087)
		{
			vVar37.x = 106f;
			vVar37.y = 106f;
		}
		*fParam3 = ((vVar37.x / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((vVar37.y / IntToFloat(iVar33)) / (vVar37.x / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x0D71AFA59EF5104F() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1,33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22349)
			{
				*fParam4 = (*fParam4 * (Global_22349 / *fParam3));
				*fParam3 = Global_22349;
			}
		}
		return 1;
	}
	return 0;
}

float func_125(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0,5f;
			break;
		
		case 61:
			return 0,8f;
			break;
	}
	return 1f;
}

int func_126()
{
	unk_0xE5AC5CA7914F5BAE(&iVar0, &iVar1);
	fVar2 = (to_float(iVar0) / to_float(iVar1));
	if (fVar2 > 3,5f)
	{
		return 1;
	}
	return 0;
}

var func_127(int iParam0, bool bParam1)
{
	if (!unk_0xEA6BC48857E0AC4C(&(Global_22350.f_7029[iParam0])))
	{
		if (unk_0x12AB0310C2281427(&(Global_22350.f_7029[iParam0])) == -1487683087)
		{
			Var19 = { func_129(unk_0xD803B885F5E47A62()) };
			if (unk_0x205FB5BBF81D8900(&Var19, &uVar3))
			{
				return func_128(&uVar3);
			}
		}
		else
		{
			return func_128(&(Global_22350.f_7029[iParam0]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_128(var uParam0)
{
	return uParam0;
}

struct<13> func_129(int iParam0)
{
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

char* func_130(int iParam0)
{
	if (!unk_0xEA6BC48857E0AC4C(&(Global_22350.f_6020[iParam0])))
	{
		if (unk_0x12AB0310C2281427(&(Global_22350.f_6020[iParam0])) == -1487683087)
		{
			Var16 = { func_129(unk_0xD803B885F5E47A62()) };
			unk_0x205FB5BBF81D8900(&Var16, &uVar0);
			return func_128(&uVar0);
		}
		else
		{
			return func_128(&(Global_22350.f_6020[iParam0]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_131(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	unk_0xA402F6C87C08815C(1, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iParam5);
	unk_0xF1F881BAAAFB43B1(fParam3, fParam4);
	unk_0xEEF67251E263A87F(1);
	unk_0xD3539A877EC25E86(1f, func_133(14f));
	unk_0xAAE406A7DA443B93(0);
	unk_0x7BBAC160090910C3(0);
	func_139();
	if (uParam0->f_531[iParam1])
	{
		unk_0x070005E852D4C0E9("STRING");
		unk_0xD06AC7C87A34A6AD(&(uParam0->f_71[iParam1]));
	}
	else
	{
		unk_0x070005E852D4C0E9(&(uParam0->f_71[iParam1]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			unk_0x6D99DF8263D35CE5(uParam0->f_489[iParam1]);
		}
	}
	unk_0xE0026608C37C7C41(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_124(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0x539E86AE011A8B38("CommonMenu", func_127(7, 0), (fParam4 - 0,006f), ((fParam2 + func_142(2f)) + (0,25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0,38f) + 0,006f));
			break;
		
		case 2:
			func_124(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0x539E86AE011A8B38("CommonMenu", func_127(5, 0), (fParam4 - 0,006f), ((fParam2 + func_142(2f)) + (0,25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0,38f) + 0,006f));
			break;
		
		case 3:
			func_124(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0x539E86AE011A8B38("CommonMenu", func_127(6, 0), (fParam4 - 0,006f), ((fParam2 + func_142(2f)) + (0,25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0,38f) + 0,006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		unk_0xEEF67251E263A87F(1);
	}
	else
	{
		unk_0xEEF67251E263A87F(2);
	}
	unk_0xD3539A877EC25E86(1f, func_133(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		unk_0xF1F881BAAAFB43B1(fParam3, (fVar4 - (0,00078125f * 3f)));
	}
	else
	{
		unk_0xF1F881BAAAFB43B1(fParam3, (fVar4 + (0,00078125f * 2f)));
	}
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iParam5);
	func_132(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1]), uParam0->f_57[iParam1]);
}

void func_132(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	iVar0 = 1;
	unk_0xAAE406A7DA443B93(0);
	unk_0x7BBAC160090910C3(0);
	func_139();
	fVar1 = 0f;
	fVar2 = (8f * 0,00078125f);
	fVar3 = (16f * 0,001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			unk_0xD3539A877EC25E86(1f, func_133(18f));
			unk_0x7BBAC160090910C3(4);
			if (iParam0 < 0)
			{
				unk_0xBBA442527B4BB1A6("ESMINDOLLA");
				unk_0xCBD015EC7E4226BC((-1 * iParam0), 1);
				fVar1 = unk_0x79E367314AFBB5CA(0);
			}
			else
			{
				unk_0xBBA442527B4BB1A6("ESDOLLA");
				unk_0xCBD015EC7E4226BC(iParam0, 1);
				fVar1 = unk_0x79E367314AFBB5CA(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0,00078125f));
			unk_0x539E86AE011A8B38("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0,6f)) + (0,001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x539E86AE011A8B38("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0,5f)) - (0,00078125f * 2f)), ((fParam3 + (fVar3 * 0,6f)) + (0,001388889f * 2f)), (fVar1 - (fVar2 * 0,5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x539E86AE011A8B38("CommonMenu", "BettingBox_Right", (fParam2 - (0,00078125f * 4f)), ((fParam3 + (fVar3 * 0,6f)) + (0,001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xD3539A877EC25E86(1f, func_133(14f));
			break;
	}
	unk_0x3A820E495A7BA3E5(iVar0);
	switch (iParam5)
	{
		case 11:
			unk_0x070005E852D4C0E9("PERCENTAGE");
			unk_0x6D99DF8263D35CE5(iParam0);
			break;
		
		case 1:
			unk_0x7BBAC160090910C3(5);
			unk_0x070005E852D4C0E9("FO_NUM");
			unk_0x6D99DF8263D35CE5(iParam0);
			break;
		
		case 2:
			unk_0x7BBAC160090910C3(5);
			unk_0x070005E852D4C0E9("FO_TWO_NUM");
			unk_0x6D99DF8263D35CE5(iParam0);
			unk_0x6D99DF8263D35CE5(iParam1);
			break;
		
		case 4:
		case 5:
			unk_0xD3539A877EC25E86(1f, func_133(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				unk_0x070005E852D4C0E9("ESMINDOLLA");
				unk_0xCBD015EC7E4226BC((-1 * iParam0), 1);
			}
			else
			{
				unk_0x070005E852D4C0E9("ESDOLLA");
				unk_0xCBD015EC7E4226BC(iParam0, 1);
			}
			break;
		
		case 6:
			unk_0x070005E852D4C0E9(sParam4);
			break;
		
		case 7:
			unk_0x070005E852D4C0E9("STRING");
			unk_0xD06AC7C87A34A6AD(sParam4);
			break;
		
		case 8:
			unk_0x7BBAC160090910C3(5);
			unk_0x070005E852D4C0E9("STRING");
			unk_0x164431059FF80580(iParam0, 14);
			break;
		
		case 9:
			unk_0x7BBAC160090910C3(5);
			unk_0x070005E852D4C0E9("STRING");
			unk_0x164431059FF80580(iParam0, 6);
			break;
		
		case 10:
			unk_0x7BBAC160090910C3(5);
			unk_0x070005E852D4C0E9("STRING");
			unk_0x164431059FF80580(iParam0, 2055);
			break;
		
		case 18:
			unk_0x7BBAC160090910C3(5);
			unk_0x070005E852D4C0E9("STRING");
			unk_0x164431059FF80580(iParam0, 2055);
			break;
		
		case 12:
			unk_0x070005E852D4C0E9("AHD_DIST");
			unk_0x6D99DF8263D35CE5(iParam0);
			break;
		
		case 13:
			unk_0x070005E852D4C0E9(sParam4);
			unk_0x6D99DF8263D35CE5(iParam0);
			unk_0x6D99DF8263D35CE5(iParam1);
			break;
		
		case 15:
		case 14:
			unk_0x070005E852D4C0E9(sParam4);
			unk_0x6D99DF8263D35CE5(iParam0);
			unk_0x6D99DF8263D35CE5(iParam1);
			break;
		
		case 16:
			unk_0x070005E852D4C0E9(sParam4);
			unk_0x6D99DF8263D35CE5(iParam1);
			break;
		
		case 20:
			unk_0x070005E852D4C0E9(sParam4);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			unk_0xE0026608C37C7C41((fParam2 - (0,00078125f * 4f)), fParam3, 0);
			unk_0xD3539A877EC25E86(1f, func_133(14f));
		}
		else
		{
			unk_0xE0026608C37C7C41(fParam2, fParam3, 0);
		}
	}
}

float func_133(float fParam0)
{
	return (fParam0 * 0,025f);
}

float func_134(float fParam0)
{
	return (fParam0 * 0,0009259259f);
}

void func_135(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_137(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_136(7, iVar0);
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

void func_136(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_137(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1378678.f_6293[iParam0], iParam1);
}

float func_138(char* sParam0)
{
	unk_0xBBA442527B4BB1A6(sParam0);
	return (unk_0x79E367314AFBB5CA(1) / 2f);
}

void func_139()
{
	unk_0xD9ACBBA59FD5A09E(1);
	if (unk_0xD0BB2359EC70FC37() || unk_0x757EF87A33649210())
	{
		unk_0xD9ACBBA59FD5A09E(7);
	}
	unk_0x5DD950F92F816F03(0);
}

void func_140(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

float func_141()
{
	fVar0 = 1f;
	if (unk_0x0EFF6B4415DAF4A1())
	{
	}
	return fVar0;
}

float func_142(float fParam0)
{
	return (fParam0 * 0,001388889f);
}

void func_143(int iParam0)
{
	if (func_148())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_147(0))
		{
			func_144(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_144(int iParam0)
{
	if (func_148())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_146())
		{
			func_145(1, 1);
		}
		else
		{
			func_145(0, 0);
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
	if (!func_31())
	{
		Global_19486.f_1 = 3;
	}
}

void func_145(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_147(0))
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

bool func_146()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

int func_147(int iParam0)
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

bool func_148()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_149(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (((unk_0xD0BB2359EC70FC37() || unk_0x7BCE0E6DD4A1F749()) || unk_0x757EF87A33649210()) || unk_0x06980BB66EBA4D95())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_156(uParam0))
	{
		return;
	}
	unk_0xBD706C594F6DCD4A();
	unk_0xD9ACBBA59FD5A09E(iParam2);
	if (!func_155(uParam0->f_1, 256))
	{
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_CLEAR_SPACE");
		unk_0x7C19E5E4784BD7CF(fParam1);
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_MAX_WIDTH");
		unk_0x7C19E5E4784BD7CF(fParam5);
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x7E60D21B163E9D56();
		if (unk_0x0EFF6B4415DAF4A1())
		{
			unk_0x7E60C62A7CE58FC8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0x1200CC973A2399C8(uParam0->f_111);
			unk_0x7E60D21B163E9D56();
		}
		fVar0 = 0f;
		iVar1 = 0;
		while (iVar1 < 8)
		{
			iVar2 = iVar1 * 4;
			if (!unk_0xEA6BC48857E0AC4C(uParam0->f_11[iVar2]))
			{
				unk_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT");
				unk_0x7C19E5E4784BD7CF(fVar0);
				if (!unk_0xEA6BC48857E0AC4C(uParam0->f_77[iVar2]))
				{
					func_118(uParam0->f_77[iVar2]);
				}
				if (!unk_0xEA6BC48857E0AC4C(uParam0->f_11[iVar2]))
				{
					func_119(uParam0->f_11[iVar2]);
				}
				if (!unk_0xEA6BC48857E0AC4C(uParam0->f_77[iVar2 + 1]))
				{
					func_118(uParam0->f_77[iVar2 + 1]);
				}
				if (!unk_0xEA6BC48857E0AC4C(uParam0->f_11[iVar2 + 1]))
				{
					func_119(uParam0->f_11[iVar2 + 1]);
				}
				if (!unk_0xEA6BC48857E0AC4C(uParam0->f_77[iVar2 + 2]))
				{
					func_118(uParam0->f_77[iVar2 + 2]);
				}
				if (!unk_0xEA6BC48857E0AC4C(uParam0->f_11[iVar2 + 2]))
				{
					func_119(uParam0->f_11[iVar2 + 2]);
				}
				if (!unk_0xEA6BC48857E0AC4C(uParam0->f_77[iVar2 + 3]))
				{
					func_118(uParam0->f_77[iVar2 + 3]);
				}
				if (!unk_0xEA6BC48857E0AC4C(uParam0->f_11[iVar2 + 3]))
				{
					func_119(uParam0->f_11[iVar2 + 3]);
				}
				if (!func_154(uParam0->f_2[iVar1]))
				{
					func_118(uParam0->f_2[iVar1]);
				}
				func_153(uParam0->f_111, uParam0->f_44[iVar2]);
				unk_0x7E60D21B163E9D56();
				fVar0 = (fVar0 + 1f);
			}
			iVar1++;
		}
		fVar3 = func_152(bParam4, func_152(func_155(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x7E60C62A7CE58FC8(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x7C19E5E4784BD7CF(fVar3);
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(80f);
		unk_0x7E60D21B163E9D56();
		func_151(&(uParam0->f_1), 256);
		func_150(&(uParam0->f_1), 128);
	}
	unk_0x6567AE843FADBA94(*uParam0, 255, 255, 255, 0, 0);
}

void func_150(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_151(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_152(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_153(bool bParam0, int iParam1)
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (bParam0)
		{
			if (iParam1 != 361)
			{
				unk_0x1200CC973A2399C8(true);
			}
			else
			{
				unk_0x1200CC973A2399C8(false);
			}
			unk_0x3CAEA85DA607305E(iParam1);
		}
	}
}

int func_154(char* sParam0)
{
	if (unk_0x2EBF5002C6B6A06C(sParam0))
	{
		return 1;
	}
	if (unk_0x4880526EC51D1C27(sParam0) <= 0)
	{
		return 1;
	}
	return 0;
}

bool func_155(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_156(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			func_151(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_157(var uParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x5275223F099DEF26("instructional_buttons");
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_11[iVar0] = 0;
		uParam0->f_77[iVar0] = "";
		uParam0->f_44[iVar0] = 361;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		uParam0->f_2[iVar0] = "";
		iVar0++;
	}
	uParam0->f_2[0] = sParam1;
	uParam0->f_11[0] = sParam2;
	uParam0->f_44[0] = iParam6;
	uParam0->f_1 = 0;
	if (bParam3)
	{
		func_151(&(uParam0->f_1), 32);
	}
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		func_151(&(uParam0->f_1), 1);
		if (bParam4)
		{
			unk_0x5461A9D388F592B4(*uParam0, 1);
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		uParam0->f_111 = iParam5;
	}
}

int func_158(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_161(uParam0);
	func_160(uParam0);
	if (unk_0x7F8A39872A07D2CE(&(uParam0->f_550), "SPR_RESULT") || (unk_0x7F8A39872A07D2CE(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (unk_0x8CD06866876216F2())
	{
		unk_0x0D3BE1DE0262A012("MPHud", false);
	}
	if (uParam0->f_1 == 0)
	{
		unk_0x0D3BE1DE0262A012("CommonMenu", false);
		unk_0x0D3BE1DE0262A012("MPLeaderboard", false);
		unk_0x0D3BE1DE0262A012("MPHud", false);
		uParam0->f_1 = unk_0xB01F55A0FD1CFD49("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = unk_0x5275223F099DEF26("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0x83D8570832F172A7(uParam0->f_1) || !unk_0x27117E2CDD4D67C3("CommonMenu")) || !unk_0x27117E2CDD4D67C3("MPLeaderboard")) || !unk_0x27117E2CDD4D67C3("MPHud"))
		{
			wait(0);
		}
		if (uParam0->f_562 || uParam0->f_567)
		{
			while (!unk_0x83D8570832F172A7(uParam0->f_4))
			{
				wait(0);
			}
		}
	}
	else
	{
		if (((!unk_0x83D8570832F172A7(uParam0->f_1) || !unk_0x27117E2CDD4D67C3("CommonMenu")) || !unk_0x27117E2CDD4D67C3("MPLeaderboard")) || !unk_0x27117E2CDD4D67C3("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_562)
		{
			if (!unk_0x83D8570832F172A7(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_562)
	{
		if (uParam0->f_567)
		{
			func_159(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_117(uParam0, 1);
		}
		else
		{
			func_117(uParam0, 0);
		}
	}
	Global_76883 = 1;
	return 1;
}

void func_159(var uParam0)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "CLEAR_ALL");
	unk_0x7E60D21B163E9D56();
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x1200CC973A2399C8(true);
		unk_0x7E60D21B163E9D56();
	}
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(2);
	func_119(unk_0xF59058FCB716F903(2, 188, true));
	func_118("ES_HELP_TU");
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(1);
	func_119(unk_0xF59058FCB716F903(2, 187, true));
	func_118("ES_HELP_TD");
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(0);
	func_119(unk_0xF59058FCB716F903(2, 202, true));
	func_118("ES_HELP_AB");
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x7E60D21B163E9D56();
}

void func_160(var uParam0)
{
	fVar0 = 0f;
	unk_0xEEF67251E263A87F(0);
	unk_0xD3539A877EC25E86(1f, func_133(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			unk_0xBBA442527B4BB1A6("STRING");
			unk_0xD06AC7C87A34A6AD(&(uParam0->f_13));
			fVar0 = unk_0x79E367314AFBB5CA(1);
		}
		else
		{
			unk_0xBBA442527B4BB1A6(&(uParam0->f_13));
			fVar0 = unk_0x79E367314AFBB5CA(1);
		}
	}
	else
	{
		unk_0xBBA442527B4BB1A6("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					unk_0x6D99DF8263D35CE5(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					unk_0x6B012227B3921E18(&(uParam0->f_36[iVar2]));
					iVar2++;
					break;
				
				case 2:
					unk_0xD06AC7C87A34A6AD(&(uParam0->f_36[iVar2]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0x79E367314AFBB5CA(1);
	}
	if (fVar0 > ((0,1125f * 2f) - (0,006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0,006f * 2f));
	}
}

void func_161(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0,1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

void func_162(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	uParam0->f_554 = iParam3;
	uParam0->f_555 = iParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
	uParam0->f_576 = iParam7;
}

void func_163(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_164(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0]), sParam3, 64);
	uParam0->f_489[iVar0] = iParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_165(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_166(var uParam0, var uParam1, var uParam2, float fParam3)
{
	bVar0 = true;
	bVar1 = true;
	if (uParam2->f_1160 != uParam1->f_230)
	{
		bVar1 = false;
	}
	if (uParam2->f_1160 != uParam1->f_232)
	{
		bVar0 = false;
	}
	if (uParam0->f_46)
	{
		if (!uParam1->f_271)
		{
			uParam1->f_300 = 125;
		}
	}
	if (bVar0)
	{
		uParam1->f_301 = 125;
	}
	if (bVar1)
	{
		uParam1->f_302 = 125;
	}
	if (func_50(&(uParam1->f_209)) < fParam3 && uParam1->f_297)
	{
		uParam1->f_299 = 125;
	}
	else
	{
		uParam1->f_299 = 0;
	}
}

int func_167(var uParam0, int iParam1, int iParam2, var uParam3, char* sParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, bool bParam11, var uParam12, int iParam13, var uParam14, var uParam15, int iParam16)
{
	switch (*iParam1)
	{
		case 0:
			if (func_293(uParam7, uParam3))
			{
				settimera(0);
				*iParam1 = 3;
			}
			iParam13 = iParam13;
			*iParam1 = 1;
			break;
		
		case 1:
			if (!unk_0x757EF87A33649210() && !unk_0xD0BB2359EC70FC37())
			{
				*iParam1 = 2;
			}
			break;
		
		case 2:
			uParam7->f_25 = uParam3->f_7;
			func_46(&(uParam7->f_209));
			if (uParam0->f_37)
			{
				sLocal_4532 = "DTRFAIR_TRAIN";
			}
			else if (uParam0->f_52)
			{
				sLocal_4532 = "DTRFAIR_FINAL";
			}
			else if (uParam0->f_35)
			{
				sLocal_4532 = "DTRFAIR_HELPG";
			}
			else if (uParam0->f_34)
			{
				sLocal_4532 = "DTRFAIR_HELPH";
			}
			else if (uParam0->f_45 && !uParam0->f_34)
			{
				sLocal_4532 = "DTRFAIR_HELPI";
			}
			else
			{
				sLocal_4532 = "";
			}
			func_292(bParam11, uParam0);
			if (Global_111638.f_19978.f_2 >= 5)
			{
				func_291();
				func_290(uParam0);
			}
			else if (!func_154(uParam0->f_59))
			{
				func_289(&Local_4345, 3, 0, "OSCAR", 0, 1);
				func_289(&Local_4345, 2, unk_0x16F2683693E537C9(), "TREVOR", 0, 1);
				func_22(&Local_4345, "ARMSAUD", uParam0->f_59, 9, 0, 0, 0);
			}
			*iParam1 = 3;
			break;
		
		case 3:
			func_288(uParam7, uParam3, uParam0);
			func_287(uParam7);
			if (!func_286() || timera() > 25000)
			{
				switch (iParam16)
				{
					case 0:
						func_285("DTRSHRD_PLN_01", 7500, 1);
						func_284(*iParam2);
						StringCopy(sParam4, "DTRSHRD_PLN_01", 32);
						*uParam5[0] = { uParam3->f_920.f_107 };
						(*uParam6)[0] = unk_0x6CC513A908911CF0(uParam3->f_920.f_107);
						unk_0x516E63E474722206((*uParam6)[0], 1f);
						break;
					
					case 1:
					case 3:
						func_284(*iParam2);
						if (uParam7->f_296)
						{
							func_285("DTRFAIR_OBJ_T", 7500, 1);
							StringCopy(sParam4, "DTRFAIR_OBJ_T", 32);
						}
						else if (uParam0->f_35)
						{
							func_285("DTRFAIR_OBJ_M", 7500, 1);
							StringCopy(sParam4, "DTRFAIR_OBJ_M", 32);
						}
						else
						{
							func_285("DTRFAIR_OBJ", 7500, 1);
							StringCopy(sParam4, "DTRFAIR_OBJ", 32);
						}
						break;
					
					case 2:
						func_284(*iParam2);
						if (uParam0->f_52)
						{
							if (Global_111638.f_19978.f_2 >= 5)
							{
								func_285("DTRFAIR_OBJCF", 7500, 1);
								StringCopy(sParam4, "DTRFAIR_OBJCF", 32);
							}
							else
							{
								func_285("DTRFAIR_OBJBF", 7500, 1);
								StringCopy(sParam4, "DTRFAIR_OBJBF", 32);
							}
						}
						else if (uParam0->f_37)
						{
							func_285("DTRFAIR_OBJT", 7500, 1);
							StringCopy(sParam4, "DTRFAIR_OBJT", 32);
						}
						else
						{
							func_285("DTRFAIR_OBJB", 7500, 1);
							StringCopy(sParam4, "DTRFAIR_OBJB", 32);
						}
						break;
				}
				func_283(uParam0, uParam7, uParam3, uParam6, uParam5);
				func_315(uParam7, uParam3, uParam0->f_45);
				if ((((iParam16 != 2 && !uParam0->f_35) && !bLocal_4533) && !bLocal_4545) && !uParam0->f_52)
				{
					func_281(uParam0, uParam6, uParam5, uParam3, uParam7, &vLocal_4265, bParam11);
				}
				else if (!uParam0->f_52)
				{
					vLocal_4600 = { func_280(uParam6, uParam5, &(uParam7->f_312), 1) };
					if (!func_3(vLocal_4600, 0f, 0f, 0f, 0))
					{
						if (!uParam0->f_34)
						{
							vLocal_4600.z = (vLocal_4600.z + 3f);
						}
					}
				}
				*iParam1 = 4;
			}
			break;
		
		case 4:
			func_287(uParam7);
			bVar0 = true;
			if (bLocal_4545)
			{
				bVar0 = false;
			}
			if (uParam0->f_37)
			{
				func_279(uParam7);
			}
			func_278(uParam3, uParam0, bParam11);
			switch (iParam16)
			{
				case 0:
					if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), uParam3->f_920.f_107, 15f, 15f, 15f, true, true, 0))
					{
						bVar0 = false;
					}
					break;
				
				case 1:
				case 3:
				case 2:
					if (!func_207(uParam0, uParam7, uParam3, uParam8, sParam4, uParam5, uParam6, iParam16, uParam9, uParam10, bParam11, uParam12, *iParam1))
					{
						bVar0 = false;
					}
					break;
			}
			if (bVar0)
			{
				if (!unk_0x437347B10A200C4B(uParam3->f_7, 0))
				{
					if (bLocal_4237)
					{
						unk_0x33928F9E4C12F0F1(uParam3->f_7);
						bLocal_4237 = false;
						func_18("DRUG_TRAFFIC_AIR_BAY_DOOR_OPEN_MASTER", &(uParam7->f_235), 0, uParam3->f_7, 0, 0, 0, 0);
					}
				}
				if (unk_0x8FA469D9C5F1A01F())
				{
					unk_0xA37A90C62806D848(1);
				}
				func_206(uParam7, uParam3);
				func_19(&(uParam7->f_235));
				func_19(&iLocal_4233);
				func_19(&iLocal_3542);
				func_183(&uLocal_4510, 2134,063f, 4780,683f, 39,9702f, 0, 0, 1, 1, 1);
				if (unk_0x562F77A7F33D2E46("SIREN_SCENE"))
				{
					unk_0x8910D3D58E0132B8("SIREN_SCENE");
				}
				if (func_182(uParam0, uParam7) || uLocal_4255)
				{
					func_181("DTRFAIR_LAND");
					StringCopy(sParam4, "DTRFAIR_LAND", 32);
					*uParam5[0] = { uParam3->f_920.f_107 };
					unk_0x4A847DA194A5532B(2, 1, -1);
					unk_0xF5637CC664BEAAD0(0f, 0, 21);
					if (!func_52(&iLocal_4589))
					{
						func_180(&iLocal_4589);
					}
					*iParam1 = 5;
				}
				else
				{
					*iParam1 = 9;
				}
			}
			break;
		
		case 5:
			func_183(&uLocal_4510, 2134,063f, 4780,683f, 39,9702f, 0, 0, 1, 1, 1);
			func_179(uParam6, uParam7->f_25, &vLocal_4603, &bLocal_4533, &vLocal_4265, &uLocal_4534);
			func_178();
			if (uParam0->f_51)
			{
				func_175(uParam7, uParam5, iParam1);
			}
			else if (iLocal_4250)
			{
				if (unk_0xC844350D5D58C99A(uParam7->f_25) && !unk_0x437347B10A200C4B(uParam7->f_25, 0))
				{
					if (unk_0x38E830634323E0D5(uParam7->f_25) == 4 && func_174(unk_0x16F2683693E537C9(), *uParam5[0], 0) < 500f)
					{
						if (!unk_0xD17F06053799A7CA())
						{
							iLocal_4250 = 0;
							func_173("DTRFAIR_TUTO4", -1);
						}
					}
				}
			}
			if (func_170(uParam3->f_920.f_107, uParam7->f_25, uParam3->f_920.f_107))
			{
				unk_0x8C26F31DFF77D124();
				unk_0x56FDC9ADE35F7DB0(uParam7->f_25, false, true, 0);
				func_396("TURNING OFF PLANE ENGINE");
				unk_0xFBFE633A7F731A67(uParam7->f_25, 0,2f);
				func_396("SETTING BLADE SPEED = 0.2");
				func_396("PLANE HAS LANDED");
				func_168(&uLocal_4510, 0, 0);
				*iParam1 = 7;
			}
			break;
		
		case 7:
			unk_0x790015DC92C918E2();
			unk_0xA37A90C62806D848(1);
			func_291();
			iLocal_4547 = 1;
			func_396("CUTSCENE COMPLETE");
			func_284((*uParam6)[0]);
			func_284((*uParam6)[1]);
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), true, 0);
			}
			*iParam1 = 10;
			break;
		
		case 9:
			break;
		
		case 10:
			return 1;
			break;
	}
	return 0;
}

void func_168(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 26))
		{
			return;
		}
	}
	if (unk_0x8C74DE122769E1BF())
	{
		unk_0x29D5132FBDCF2B1E(iParam2);
		unk_0x9A1335ECD7BD117F("FocusIn");
		unk_0x8910D3D58E0132B8("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x82A772610883F395("FocusOut", 0, 0);
			unk_0x4D7F4CC43D4D0DE3(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	unk_0xF3039DE1FDB4F6FD(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (!unk_0x8CD06866876216F2())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(uParam0->f_3))
	{
		if (func_169(uParam0->f_3))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (func_169(sVar0))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
}

bool func_169(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

int func_170(vector3 vParam0, int iParam3, vector3 vParam4)
{
	vParam0 = { vParam0 };
	if (!unk_0x437347B10A200C4B(iParam3, 0) && unk_0xDF1306B443CD3D15(iParam3, 0))
	{
		if (func_174(iParam3, 2135,992f, 4776,935f, 39,9702f, 1) < 11f)
		{
			if (unk_0xEE9925602B29903C(iParam3) < 2f && (vLocal_4265.z - vParam4.z) < 5f)
			{
				func_171(iParam3, 6f, 15, 1056964608, 0, 1, 0);
				unk_0xC92DB9682A650680("OJDA_COMPLETE");
				unk_0x790015DC92C918E2();
				unk_0xA37A90C62806D848(1);
				return 1;
			}
		}
	}
	return 0;
}

int func_171(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x38C3A68D7861DCFD(0, 71, 1);
	unk_0x38C3A68D7861DCFD(0, 72, 1);
	unk_0x38C3A68D7861DCFD(0, 76, 1);
	unk_0x38C3A68D7861DCFD(0, 73, 1);
	unk_0x38C3A68D7861DCFD(0, 59, 1);
	unk_0x38C3A68D7861DCFD(0, 60, 1);
	if (bParam5)
	{
		unk_0x38C3A68D7861DCFD(0, 75, 1);
	}
	unk_0x38C3A68D7861DCFD(0, 80, 1);
	if (!bParam6)
	{
		unk_0x38C3A68D7861DCFD(0, 69, 1);
		unk_0x38C3A68D7861DCFD(0, 70, 1);
		unk_0x38C3A68D7861DCFD(0, 68, 1);
	}
	unk_0x38C3A68D7861DCFD(0, 74, 1);
	unk_0x38C3A68D7861DCFD(0, 86, 1);
	unk_0x38C3A68D7861DCFD(0, 81, 1);
	unk_0x38C3A68D7861DCFD(0, 82, 1);
	unk_0x38C3A68D7861DCFD(0, 138, 1);
	unk_0x38C3A68D7861DCFD(0, 136, 1);
	unk_0x38C3A68D7861DCFD(0, 114, 1);
	unk_0x38C3A68D7861DCFD(0, 107, 1);
	unk_0x38C3A68D7861DCFD(0, 110, 1);
	unk_0x38C3A68D7861DCFD(0, 89, 1);
	unk_0x38C3A68D7861DCFD(0, 89, 1);
	unk_0x38C3A68D7861DCFD(0, 87, 1);
	unk_0x38C3A68D7861DCFD(0, 88, 1);
	unk_0x38C3A68D7861DCFD(0, 113, 1);
	unk_0x38C3A68D7861DCFD(0, 115, 1);
	unk_0x38C3A68D7861DCFD(0, 116, 1);
	unk_0x38C3A68D7861DCFD(0, 117, 1);
	unk_0x38C3A68D7861DCFD(0, 118, 1);
	unk_0x38C3A68D7861DCFD(0, 119, 1);
	unk_0x38C3A68D7861DCFD(0, 352, 1);
	unk_0x38C3A68D7861DCFD(0, 131, 1);
	unk_0x38C3A68D7861DCFD(0, 132, 1);
	unk_0x38C3A68D7861DCFD(0, 123, 1);
	unk_0x38C3A68D7861DCFD(0, 126, 1);
	unk_0x38C3A68D7861DCFD(0, 129, 1);
	unk_0x38C3A68D7861DCFD(0, 130, 1);
	unk_0x38C3A68D7861DCFD(0, 133, 1);
	unk_0x38C3A68D7861DCFD(0, 134, 1);
	unk_0xCFAE3195DD6AE715();
	func_172(iParam0);
	if ((unk_0x1C0640BA9A7327B3() - Global_29) > 500)
	{
		unk_0xE0C0351D5B931E37(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x1C0640BA9A7327B3();
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0x755FF954DAE327E1(unk_0x9C66D99E63E8E24C(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_172(int iParam0)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0x2668265160B1C0E5(iParam0))
		{
			if (unk_0x08D499BC1F863857(iParam0))
			{
				unk_0xF356D74F6AE75D16(iParam0, 0);
			}
		}
	}
}

void func_173(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

float func_174(int iParam0, vector3 vParam1, bool bParam4)
{
	if (unk_0x437347B10A200C4B(iParam0, 0))
	{
		return -1f;
	}
	return unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, true), vParam1, bParam4);
}

int func_175(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_176(uParam1, vLocal_4265, 0);
	if (*uParam2 == 5 && iLocal_4531 < 12)
	{
		iLocal_4531 = 12;
	}
	if (bLocal_4533)
	{
		if (unk_0x8FA469D9C5F1A01F())
		{
			unk_0xA37A90C62806D848(1);
		}
		iLocal_4531 = 0;
	}
	switch (iLocal_4531)
	{
		case 0:
			if (!bLocal_4533)
			{
				iLocal_4531 = 1;
			}
			break;
		
		case 1:
			if (!unk_0xD17F06053799A7CA())
			{
				if (unk_0x38E830634323E0D5(uParam0->f_25) == 4 || unk_0x38E830634323E0D5(uParam0->f_25) == 1)
				{
					iLocal_4531 = 2;
				}
				else if (unk_0xEE9925602B29903C(unk_0x16F2683693E537C9()) > 20f)
				{
					settimera(0);
					if (Global_98744.f_12[0] < 3)
					{
						func_173("DTRFAIR_TUTO3", -1);
					}
					iLocal_4531 = 2;
				}
			}
			break;
		
		case 2:
			if (!uParam0->f_294)
			{
				if (!iLocal_4553)
				{
					if (unk_0x38E830634323E0D5(uParam0->f_25) == 4 || unk_0x38E830634323E0D5(uParam0->f_25) == 1)
					{
						unk_0xA37A90C62806D848(1);
						iLocal_4553 = 1;
					}
				}
			}
			if (Global_98744.f_12[0] < 3)
			{
				if (iVar0 != -1)
				{
					if (func_174(unk_0x16F2683693E537C9(), *uParam1[iVar0], 1) < 2300f)
					{
						if (!iLocal_4256)
						{
							func_173("DTRFAIR_TUTO1", -1);
							iLocal_4256 = 1;
						}
					}
				}
			}
			if (iVar0 != -1)
			{
				if (!uParam0->f_243[iVar0])
				{
					if (func_174(unk_0x16F2683693E537C9(), *uParam1[iVar0], 1) < 1500f)
					{
						settimera(0);
						if (Global_98744.f_12[0] < 3)
						{
							if (!iLocal_4549)
							{
								if (!unk_0x8FA469D9C5F1A01F())
								{
									func_173("DTRFAIR_HELPJ", -1);
									iLocal_4549 = 1;
								}
							}
						}
						iLocal_4531 = 3;
					}
				}
			}
			break;
		
		case 3:
			iVar0 = func_176(uParam1, vLocal_4265, 0);
			if (func_174(unk_0x16F2683693E537C9(), *uParam1[iVar0], 1) < 450f)
			{
				unk_0x13896FDECC859926("OJDA1_HATCH_OPEN");
			}
			if (func_174(unk_0x16F2683693E537C9(), *uParam1[iVar0], 1) < 500f)
			{
				settimera(0);
				if (!uParam0->f_293)
				{
					unk_0x411CC4F26F6C1C2E(uParam0->f_25);
					bLocal_4237 = true;
					func_18("DRUG_TRAFFIC_AIR_BAY_DOOR_OPEN_MASTER", &(uParam0->f_235), 0, uParam0->f_25, 0, 0, 0, 0);
					iLocal_4531 = 4;
				}
				else
				{
					settimera(1000);
					iLocal_4531 = 5;
				}
			}
			break;
		
		case 4:
			iLocal_4531 = 5;
			break;
		
		case 5:
			uParam0->f_293 = 1;
			iLocal_4531 = 9;
			break;
		
		case 9:
			func_173("DTRFAIR_DPCG", -1);
			settimerb(0);
			iLocal_4531 = 10;
			break;
		
		case 10:
			if (uParam0->f_294 || uParam0->f_295)
			{
				iLocal_4531 = 11;
				break;
			}
			else if (timerb() > 8000)
			{
				if (unk_0x8FA469D9C5F1A01F())
				{
					unk_0xA37A90C62806D848(1);
				}
				iLocal_4531 = 11;
			}
			break;
		
		case 11:
			if (uParam0->f_294)
			{
				uParam0->f_294 = 0;
				iLocal_4531 = 2;
			}
			break;
		
		case 12:
			if (func_174(unk_0x16F2683693E537C9(), *uParam1[0], 0) < 800f)
			{
				if (unk_0x38E830634323E0D5(uParam0->f_25) == 4 || unk_0x38E830634323E0D5(uParam0->f_25) == 1)
				{
					func_180(&iLocal_4586);
					unk_0xA37A90C62806D848(1);
					func_173("DTRFAIR_TUTO4", -1);
					iLocal_4531 = 13;
				}
				else
				{
					iLocal_4531 = 14;
				}
			}
			break;
		
		case 13:
			if (unk_0x38E830634323E0D5(uParam0->f_25) == 0 || func_49(&iLocal_4586, 8f))
			{
				iLocal_4531 = 14;
			}
			break;
		
		case 14:
			break;
	}
	return 0;
}

int func_176(var uParam0, vector3 vParam1, float fParam4)
{
	iVar1 = 0;
	fVar2 = 1E+09f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_177(*uParam0[iVar0]))
		{
			fVar3 = vdist2(*uParam0[iVar0], vParam1);
			if (fVar3 < fVar2 && fVar3 > fParam4)
			{
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 == -1)
	{
	}
	return iVar1;
}

int func_177(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_178()
{
	switch (Global_111638.f_19978.f_2)
	{
		case 0:
			if (func_52(&iLocal_4589))
			{
				if (func_50(&iLocal_4589) > 5f)
				{
					if (!iLocal_4551)
					{
						if (func_22(&Local_4345, "ARMSAUD", "ARMS_CHAT1", 9, 0, 0, 0))
						{
							iLocal_4551 = 1;
						}
					}
				}
			}
			break;
		
		case 1:
			if (func_52(&iLocal_4589))
			{
				if (func_50(&iLocal_4589) > 15f)
				{
					if (!iLocal_4551)
					{
						if (func_22(&Local_4345, "ARMSAUD", "ARMS_CHAT2", 9, 0, 0, 0))
						{
							iLocal_4551 = 1;
						}
					}
				}
			}
			break;
		
		case 2:
			if (func_52(&iLocal_4589))
			{
				if (func_50(&iLocal_4589) > 3f)
				{
					if (!iLocal_4551)
					{
						if (func_22(&Local_4345, "ARMSAUD", "ARMS_CHAT3", 9, 0, 0, 0))
						{
							iLocal_4551 = 1;
						}
					}
				}
			}
			break;
		
		case 3:
			if (func_52(&iLocal_4589))
			{
				if (func_50(&iLocal_4589) > 15f)
				{
					if (!iLocal_4551)
					{
						if (func_22(&Local_4345, "ARMSAUD", "ARMS_CHAT4", 9, 0, 0, 0))
						{
							iLocal_4551 = 1;
						}
					}
				}
			}
			break;
		
		case 4:
			if (func_52(&iLocal_4589))
			{
				if (func_50(&iLocal_4589) > 3f)
				{
					if (!iLocal_4551)
					{
						if (func_22(&Local_4345, "ARMSAUD", "ARMS_CHAT5", 9, 0, 0, 0))
						{
							iLocal_4551 = 1;
						}
					}
				}
			}
			break;
	}
}

void func_179(var uParam0, int iParam1, var uParam2, bool bParam3, var uParam4, var uParam5)
{
	if (*bParam3)
	{
		return;
	}
	if ((unk_0x0EB28750412C3A5A(*uParam4, *uParam2, true) < 200f && unk_0x0399732A9EBC368E(*uParam4, 2153,2f, 4817,9f, 31,06f, 1958,6f, 4726,4f, 51,06f, 25f, 0, true)) && unk_0xEE9925602B29903C(iParam1) < 2f)
	{
		if (!*uParam5 || !unk_0xE4EDC4B0E92C078B((*uParam0)[0]))
		{
			if (unk_0xE4EDC4B0E92C078B((*uParam0)[0]))
			{
				func_396("REMOVING LOCATION BLIP VIA ALTERNATE_LANDING_BLIP 01");
				unk_0x142CC44DB769B57E(uParam0[0]);
			}
			unk_0xC92DB9682A650680("OJDA1_TAXI");
			func_285("DTRFAIR_OBJTX", 7500, 1);
			(*uParam0)[0] = unk_0x6CC513A908911CF0(2134,758f, 4779,191f, 40,0159f);
			*uParam5 = 1;
		}
		if (!bLocal_4236)
		{
			if (unk_0x06F8112AA79C53D9(0, 89) || unk_0x06F8112AA79C53D9(0, 90))
			{
				bLocal_4236 = true;
			}
		}
		if (!unk_0xD17F06053799A7CA())
		{
			if (!iLocal_4235)
			{
				if (!func_52(&iLocal_4247))
				{
					func_180(&iLocal_4247);
				}
				else if (func_50(&iLocal_4247) > 1f && !bLocal_4236)
				{
					func_173("DTRFAIR_RUDD", -1);
					iLocal_4235 = 1;
				}
			}
		}
	}
	else if (!iLocal_4240)
	{
		(*uParam0)[0] = unk_0x6CC513A908911CF0(*uParam2);
		unk_0x516E63E474722206((*uParam0)[0], 1f);
		func_396("ADDING LOCATION BLIP VIA ALTERNATE_LANDING_BLIP");
		iLocal_4240 = 1;
	}
}

void func_180(int iParam0)
{
	if (!func_52(iParam0))
	{
		func_46(iParam0);
	}
}

void func_181(char* sParam0)
{
	func_180(&iLocal_3290);
	func_46(&iLocal_3290);
	StringCopy(&cLocal_3293, sParam0, 32);
}

int func_182(var uParam0, var uParam1)
{
	iVar0 = uParam1->f_230 * 300;
	if (iVar0 >= uParam0->f_54)
	{
		uParam1->f_297 = 1;
		return 1;
	}
	uParam1->f_297 = 0;
	return 0;
}

void func_183(var uParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
	{
		func_168(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_184(uParam0, vParam1, iParam4, iParam5, bParam6, iParam7, bParam8);
}

void func_184(var uParam0, vector3 vParam1, var uParam4, int iParam5, bool bParam6, var uParam7, bool bParam8)
{
	if (uParam0->f_1 && unk_0x8C74DE122769E1BF())
	{
		if (unk_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam4;
	if (unk_0x2EBF5002C6B6A06C(iVar0))
	{
		if (!unk_0x8CD06866876216F2())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_169(iVar0))
	{
		func_205();
	}
	if (!unk_0x8C74DE122769E1BF())
	{
		if (func_200(uParam0, bParam6, bParam8, 0))
		{
			func_199(uParam0, vParam1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_189(iVar0))
			{
				if ((unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0)) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					if ((unk_0x8E28E832BEAC3DCE(vParam1, 1f) && !unk_0xFEBC1E4EC9E001F0()) && uParam7)
					{
						if (!func_169(iVar0))
						{
							func_173(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
							{
								func_188(1);
							}
						}
					}
				}
			}
		}
		else if (func_189(iVar0))
		{
			if (unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0))
			{
				if ((unk_0x8E28E832BEAC3DCE(vParam1, 1f) && !unk_0xFEBC1E4EC9E001F0()) && uParam7)
				{
					if (!func_169(iVar0))
					{
						func_173(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
						{
							func_188(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!unk_0x2EBF5002C6B6A06C(iVar0))
		{
			if (func_169(iVar0) && unk_0xFEBC1E4EC9E001F0())
			{
				unk_0xA37A90C62806D848(1);
			}
		}
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
		{
			if (unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(3) == 3 || unk_0xA4FD7964FEE91ED8(3) == 4)
				{
					func_168(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(6) == 3 || unk_0xA4FD7964FEE91ED8(6) == 4)
				{
					func_168(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(4) == 3 || unk_0xA4FD7964FEE91ED8(4) == 4)
				{
					func_168(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(5) == 3 || unk_0xA4FD7964FEE91ED8(5) == 4)
				{
					func_168(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(2) == 3 || unk_0xA4FD7964FEE91ED8(2) == 4)
				{
					func_168(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xF3545351E9CBB11F() == 3 || unk_0xF3545351E9CBB11F() == 4)
			{
				func_168(uParam0, iVar0, 1);
			}
		}
		if (!func_200(uParam0, bParam6, bParam8, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_187(uParam0))
			{
				func_185(uParam0);
			}
		}
	}
}

void func_185(var uParam0)
{
	if (func_186(unk_0x16F2683693E537C9()))
	{
		unk_0xBC43ED9FE28DB191(unk_0x16F2683693E537C9());
	}
	if (unk_0x8C74DE122769E1BF())
	{
		unk_0xF3039DE1FDB4F6FD(true);
		unk_0x29D5132FBDCF2B1E(0);
		unk_0x8910D3D58E0132B8("HINT_CAM_SCENE");
		unk_0x9A1335ECD7BD117F("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x82A772610883F395("FocusOut", 0, 0);
			unk_0x4D7F4CC43D4D0DE3(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_186(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xE2F1E99DD161A861(iParam0))
		{
			if (unk_0xDF1306B443CD3D15(unk_0x96A5FE5834B81CE7(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0xEC560E589DF8370E(iParam0))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x940C1429253D3B1B(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x6BC06B42AD71CD8B(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_187(var uParam0)
{
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x1C0640BA9A7327B3()
		{
			return 1;
		}
	}
	return 0;
}

int func_188(bool bParam0)
{
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_111638.f_10044.f_100++;
			}
			return Global_111638.f_10044.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_111638.f_10044.f_101++;
			}
			return Global_111638.f_10044.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_111638.f_10044.f_102++;
			}
			return Global_111638.f_10044.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_189(char* sParam0)
{
	if (!func_190(1, 1, 0))
	{
		if ((!unk_0xEA6BC48857E0AC4C(sParam0) && func_169(sParam0)) || func_169("CMN_HINT"))
		{
			unk_0xA37A90C62806D848(1);
		}
		return 0;
	}
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (func_188(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_188(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_188(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_190(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x991B1F0980C62628())
	{
		return 0;
	}
	if (func_147(0))
	{
		return 0;
	}
	if (func_198())
	{
		return 0;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return 0;
	}
	if (Global_73825)
	{
		return 0;
	}
	if (unk_0x8A22C4C08282BF26(1779901043) > 0)
	{
		return 0;
	}
	if (Global_58693)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
		{
			if (unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(3) == 3 || unk_0xA4FD7964FEE91ED8(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(6) == 3 || unk_0xA4FD7964FEE91ED8(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(4) == 3 || unk_0xA4FD7964FEE91ED8(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(5) == 3 || unk_0xA4FD7964FEE91ED8(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(2) == 3 || unk_0xA4FD7964FEE91ED8(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xF3545351E9CBB11F() == 3 || unk_0xF3545351E9CBB11F() == 4)
			{
				return 0;
			}
			if (unk_0xC4E6FF7CA2A185EA())
			{
				return 0;
			}
		}
	}
	if ((func_197() || func_196(Global_4456448.f_232883)) || func_195())
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			iVar1 = func_194(unk_0x16F2683693E537C9(), 0);
			if (((unk_0x137240CA2BADB0D2(iVar0, iVar1) || (unk_0x134B62B726CEC8E6(iVar0) == 562680400 && iVar1 != -1)) || (unk_0x134B62B726CEC8E6(iVar0) == 1181327175 && iVar1 != -1)) || (((unk_0x134B62B726CEC8E6(iVar0) == -1693015116 && iVar1 == 0) && func_193(iVar0, 10)) && unk_0x0ECB5CA5140957AD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1686722)
	{
		return 0;
	}
	if (func_191(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	return 1;
}

int func_191(int iParam0)
{
	if (iParam0 != func_28())
	{
		if (func_192(iParam0, 1, 1))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && iParam0 == unk_0xD803B885F5E47A62()) && func_192(iParam0, 1, 0))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
	}
	return 0;
}

int func_192(int iParam0, bool bParam1, bool bParam2)
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

int func_193(int iParam0, int iParam1)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (unk_0x40B3F576B41FA183(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x461CAC843A21E4B6(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_194(int iParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x405E212DDE472467(iParam0, iParam1))
		{
			iVar0 = unk_0x6937EA2286828455(iParam0, iParam1);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				iVar1 = unk_0x7087E053058E9F6C(unk_0x134B62B726CEC8E6(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xBBA8A868118C90ED(iVar0, iVar3, 0))
					{
						if (unk_0xA30B8362589C124A(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_195()
{
	return Global_2450632.f_17;
}

bool func_196(int iParam0)
{
	return iParam0 == 51;
}

var func_197()
{
	return Global_2450632.f_16;
}

bool func_198()
{
	return unk_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

void func_199(var uParam0, vector3 vParam1, int iParam4)
{
	unk_0xF3039DE1FDB4F6FD(false);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_10;
	if (iParam4 == 1726668277)
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	unk_0x98EF6C2D1F172740(vParam1, -1, iVar0, iVar1, iParam4);
	iVar2 = 2048;
	iVar3 = 3;
	unk_0xDBE4EC9C88839074(unk_0x16F2683693E537C9(), vParam1, -1, iVar2, iVar3);
	unk_0x82A772610883F395("FocusIn", 0, 0);
	unk_0x8BC9595FD2792B5D("HINT_CAM_SCENE");
	unk_0x4D7F4CC43D4D0DE3(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x1C0640BA9A7327B3();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_200(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
				{
					if (func_204(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_203(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_203(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_204(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_187(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x1C0640BA9A7327B3() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
					{
						if (!func_204(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1C0640BA9A7327B3();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_203(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_203(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_204(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
				{
					if (!func_204(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_203(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_203(bParam1, bParam2, bParam3) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1) || unk_0x8B8AFAD7ED240B7F(unk_0x16F2683693E537C9(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_204(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x1C0640BA9A7327B3() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
					{
						if (func_202(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_201(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1) || func_201(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1) || unk_0x8B8AFAD7ED240B7F(unk_0x16F2683693E537C9(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_202(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_187(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_190(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_205();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_201(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_190(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (!unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62()))
		{
			unk_0x38C3A68D7861DCFD(0, 140, 1);
			unk_0x38C3A68D7861DCFD(0, 80, 1);
			if (unk_0x9A01369A10646AFE(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_202(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_190(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x38C3A68D7861DCFD(0, 80, 1);
		if (unk_0x0F01D47446BE1FEB())
		{
			if (unk_0x9A01369A10646AFE(0, 80))
			{
				unk_0xF3039DE1FDB4F6FD(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_203(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_190(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (!unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62()))
		{
			unk_0x38C3A68D7861DCFD(0, 140, 1);
			unk_0x38C3A68D7861DCFD(0, 80, 1);
			if (unk_0x7FEE810EE9E768EB(0, 80) && unk_0x1C0640BA9A7327B3() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_204(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_190(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x38C3A68D7861DCFD(0, 80, 1);
		if (unk_0x0F01D47446BE1FEB())
		{
			if (unk_0x7FEE810EE9E768EB(0, 80) && unk_0x1C0640BA9A7327B3() > Global_116)
			{
				unk_0xF3039DE1FDB4F6FD(false);
				return 1;
			}
		}
	}
	return 0;
}

void func_205()
{
	unk_0x5D96D8530B3D0904(&Global_7357, 4);
}

void func_206(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam1->f_1160)
	{
		if (unk_0x83A8177D302E1A7E(uParam0->f_363[iVar0]))
		{
			unk_0xF7E25143642732EA(uParam0->f_363[iVar0], 0);
		}
		iVar0++;
	}
}

int func_207(var uParam0, var uParam1, var uParam2, var uParam3, char[4] cParam4, var uParam5, var uParam6, int iParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	switch (uParam1->f_229)
	{
		case 0:
			if (!unk_0xD17F06053799A7CA())
			{
				if (iParam7 == 3)
				{
					func_277("DTRFAIR_HELP_01", ceil(uParam2->f_4), -1);
				}
				else if (!unk_0x2EBF5002C6B6A06C(sLocal_4532) && !uParam0->f_52)
				{
					func_173(sLocal_4532, -1);
				}
				if (uParam0->f_52)
				{
					settimerb(0);
					uParam1->f_229 = 1;
				}
				else
				{
					uParam1->f_229 = 2;
				}
			}
			break;
		
		case 1:
			if (Global_111638.f_19978.f_2 >= 5)
			{
				if (!unk_0xFEBC1E4EC9E001F0() || timerb() > 3000)
				{
					func_22(&Local_4345, "ARMSAUD", "ARMS_A_CARPA", 9, 0, 0, 0);
					uParam1->f_229 = 2;
				}
			}
			else if (!unk_0xFEBC1E4EC9E001F0() || timerb() > 3000)
			{
				uParam1->f_229 = 2;
			}
			break;
		
		case 2:
			if (uParam1->f_293 == 1)
			{
				func_269(uParam0, uParam1, iParam7);
			}
			if (func_240(uParam0, uParam1, uParam2, uParam3, &(uParam1->f_206), cParam4, uParam5, uParam6, &iParam7, uParam8, uParam9, uParam10, uParam12))
			{
				func_239(uParam0, uParam10);
				uParam1->f_229 = 3;
			}
			if (uParam0->f_52 && iLocal_4566)
			{
				func_226(uParam0, uParam1, (uParam1->f_201 - 1), uParam2, uParam6);
			}
			if ((!uParam0->f_35 && !(iParam7 == 2 && !uParam0->f_34)) && !uParam0->f_37)
			{
				func_210(uParam0, uParam1, uParam2, uParam6, uParam5, iParam7, uParam10);
			}
			if (!uParam0->f_52)
			{
				if (uParam1->f_234 != 0)
				{
					if ((unk_0x1C0640BA9A7327B3() - uParam1->f_234) > 2400 && !bLocal_4541)
					{
						func_209(uParam1->f_25, uParam2, &(uParam2->f_3), 3);
					}
					else
					{
						func_208(uParam1->f_25, 9f, 0, 5f, 0);
						if (!unk_0x437347B10A200C4B(uParam1->f_25, 0))
						{
							*uParam2 = { unk_0x68F4C0EC296D3901(uParam1->f_25, true) };
							uParam2->f_3 = unk_0xD9522BA9E27E1349(uParam1->f_25);
						}
					}
				}
			}
			break;
		
		case 3:
			unk_0xF3039DE1FDB4F6FD(true);
			return 1;
			break;
	}
	return 0;
}

void func_208(int iParam0, float fParam1, bool bParam2, float fParam3, float fParam4)
{
	unk_0x38C3A68D7861DCFD(0, 75, 1);
	if (unk_0x437347B10A200C4B(iParam0, 0))
	{
		return;
	}
	if (unk_0x9C66D99E63E8E24C(iParam0) < fParam1)
	{
		unk_0x1AEF7184B203A58D(iParam0, fParam1);
	}
	vVar0 = { unk_0x835730A2D89F6093(iParam0, 2) };
	bVar3 = false;
	if (bParam2)
	{
		fVar4 = (unk_0x6117725E0134737F() * 45f);
		if (vVar0.x < -fVar4)
		{
			bVar3 = true;
			vVar0.x = (vVar0.x + fVar4);
		}
		else if (vVar0.x < fParam3)
		{
			bVar3 = true;
			vVar0.x = fParam3;
		}
		else if (vVar0.x > fVar4)
		{
			bVar3 = true;
			vVar0.x = (vVar0.x - fVar4);
		}
		else if (vVar0.x > fParam3)
		{
			bVar3 = true;
			vVar0.x = fParam3;
		}
		if (vVar0.y < -fVar4)
		{
			bVar3 = true;
			vVar0.y = (vVar0.y + fVar4);
		}
		else if (vVar0.y < fParam4)
		{
			bVar3 = true;
			vVar0.y = fParam4;
		}
		else if (vVar0.y > fVar4)
		{
			bVar3 = true;
			vVar0.y = (vVar0.y - fVar4);
		}
		else if (vVar0.y > fParam4)
		{
			bVar3 = true;
			vVar0.y = fParam4;
		}
	}
	else
	{
		if (vVar0.x != fParam3)
		{
			bVar3 = true;
			vVar0.x = fParam3;
		}
		if (vVar0.y != fParam4)
		{
			bVar3 = true;
			vVar0.y = fParam4;
		}
	}
	if (bVar3)
	{
		unk_0xC023D1C4BF532815(iParam0, vVar0, 2, 1);
	}
}

void func_209(int iParam0, var uParam1, var uParam2, int iParam3)
{
	unk_0x38C3A68D7861DCFD(0, 75, 1);
	iParam3 = iParam3;
	unk_0x56FDC9ADE35F7DB0(iParam0, true, true, 0);
	unk_0xA47B46945FF6DE74(iParam0, *uParam1, 1, false, 0, 1);
	unk_0xD8F6A53F4799FAFE(iParam0, *uParam2);
	unk_0x1AEF7184B203A58D(iParam0, 40f);
}

void func_210(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6)
{
	iVar3 = 0;
	while (iVar3 < uParam2->f_1160)
	{
		if (uParam1->f_236[iVar3])
		{
			if (uParam1->f_363[iVar3] != 0)
			{
				unk_0xF7E25143642732EA(uParam1->f_363[iVar3], 0);
				uParam1->f_363[iVar3] = 0;
			}
			if (!iLocal_4536[iVar3])
			{
				if (!unk_0x437347B10A200C4B(uParam1->f_307[iVar3], 0) && !unk_0xEB6A8945D1AC98A1(uParam1->f_307[iVar3]))
				{
					if (unk_0xDF1306B443CD3D15(uParam1->f_312[iVar3], 0))
					{
						unk_0xA3BF0AA5A2608191(uParam1->f_307[iVar3]);
						unk_0xF821F915BC24D246(uParam1->f_307[iVar3], uParam1->f_312[iVar3], -1);
						unk_0xE072601B4380E9DF(uParam1->f_307[iVar3], uParam1->f_312[iVar3], 15f, 262144);
						unk_0xFADC0A217229F6B5(uParam1->f_307[iVar3], true);
						iLocal_4536[iVar3] = 1;
					}
				}
			}
		}
		if (uParam0->f_34 || uParam0->f_52)
		{
			if (uParam0->f_52)
			{
				if (Global_111638.f_19978.f_2 == 4)
				{
					func_225(uParam1->f_322[1], "carpetbombtruck", 101, 1376,175f, 2968,641f, 41,702f, &(uParam1->f_336[1]), 850, 0);
					func_225(uParam1->f_322[2], "CarpetBombNew", 101, 1498,565f, 3185,237f, 40,1012f, &(uParam1->f_336[2]), 260, 0);
					func_225(uParam1->f_322[3], "CarpetBombNew", 102, 1469,993f, 3203,641f, 41,1834f, &(uParam1->f_336[3]), 260, 0);
					func_225(uParam1->f_322[4], "CarpetBombNew", 103, 1120,428f, 3016,568f, 40,1836f, &(uParam1->f_336[4]), 260, 0);
					func_225(uParam1->f_322[5], "CarpetBombNew", 104, 1468,766f, 3013,59f, 40,3801f, &(uParam1->f_336[5]), 260, 0);
					if (iLocal_4524 && (func_224(1701,1f, 3292,2f, 52,6f, 1) < 75f || func_224(1461,3f, 3091,2f, 45,8f, 1) < 75f))
					{
						func_18("Generic_Alarms_Siren", &iLocal_4525, 1, 0, 1701,1f, 3292,2f, 52,6f, 0);
						func_18("Generic_Alarms_Siren", &iLocal_4526, 1, 0, 1461,3f, 3091,2f, 45,8f, 0);
						func_18("Generic_Alarms_Siren", &iLocal_4527, 1, 0, 1261,3f, 3043,8f, 43,5f, 0);
						func_22(&Local_4345, "ARMSAUD", "ARMS_A_CRPA", 9, 0, 0, 0);
						iLocal_4524 = 0;
					}
					func_223();
				}
			}
			else
			{
				bVar7 = true;
				if (!uParam1->f_236[iVar3])
				{
					iVar4 = 0;
					while (iVar4 < 3)
					{
						if (!unk_0x437347B10A200C4B(Local_4614[iVar3][iVar4], 0))
						{
							bVar7 = false;
						}
						iVar4++;
					}
					if (bVar7)
					{
						uParam1->f_243[iVar3] = 1;
						uParam1->f_236[iVar3] = 1;
						func_213(uParam1, uParam2, iParam5, uParam0, 0, iVar3, uParam4, uParam6, 0);
					}
				}
			}
			iVar4 = 0;
			while (iVar4 < uParam2->f_1161)
			{
				if (!iLocal_4571[iVar3])
				{
					if (func_212(uParam1, iVar4))
					{
						if (!unk_0xEB6A8945D1AC98A1(uParam1->f_307[iVar3]))
						{
							if (func_211(uParam1->f_31[iVar4], uParam1->f_307[iVar3], 1) < 100f)
							{
								vVar0 = { unk_0x68F4C0EC296D3901(uParam1->f_31[iVar4], true) };
								if (unk_0xE82754C349C7B581(vVar0, &uVar6, 0, 0))
								{
									vVar0.z = uVar6;
								}
								unk_0xA3BF0AA5A2608191(uParam1->f_307[iVar3]);
								unk_0xEEB67C3D0A71A47B(uParam1->f_307[iVar3], vVar0, 1000f, -1, 0, 0);
								unk_0x4D7F4CC43D4D0DE3(-1, "DRUG_TRAFFIC_AIR_SCREAMS", 0, true);
								iVar5 = 0;
								while (iVar5 < 4)
								{
									if (!unk_0x437347B10A200C4B(Local_4631[iVar3][iVar5], 0))
									{
										unk_0xA3BF0AA5A2608191(Local_4631[iVar3][iVar5]);
										unk_0xEEB67C3D0A71A47B(Local_4631[iVar3][iVar5], vVar0, 1000f, -1, 0, 0);
									}
									iVar5++;
								}
								iLocal_4571[iVar3] = 1;
							}
						}
					}
				}
				iVar4++;
			}
		}
		else if (!unk_0x437347B10A200C4B(uParam1->f_307[iVar3], 0))
		{
			if (func_211(unk_0x16F2683693E537C9(), uParam1->f_307[iVar3], 1) < 200f)
			{
				if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 6))
				{
					if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()) || unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), uParam1->f_307[iVar3]))
					{
						if (!iLocal_4536[iVar3])
						{
							unk_0x327AAEE25F323797(uParam1->f_307[iVar3]);
							unk_0x262EF6C6306BEA6C(uParam1->f_307[iVar3], 453432689, 20, false, true);
							unk_0x6C3AE6E278DB3D0E(uParam1->f_307[iVar3], unk_0x16F2683693E537C9(), 0, 16);
							unk_0x298903DD96203C2C(uParam1->f_307[iVar3], 0);
							func_396("bPlayerAggroing = TRUE");
							iLocal_4536[iVar3] = 1;
						}
					}
				}
				if (!iLocal_4536[iVar3])
				{
					if (!unk_0x437347B10A200C4B(uParam1->f_307[iVar3], 0) && !unk_0xEB6A8945D1AC98A1(uParam1->f_307[iVar3]))
					{
						if (unk_0xD1960163A3042274(uParam1->f_307[iVar3], -2017877118) != 1 && !unk_0xB4ECF989E2C1DAC8(uParam1->f_307[iVar3], "oddjobs@towingcome_here", "come_here_idle_a", 3))
						{
							unk_0xC6EB89C59F2AF6B8(uParam1->f_307[iVar3], "oddjobs@towingcome_here", "come_here_idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
							func_396("TASKING AGAIN TO PLAY ANIMATION");
						}
					}
				}
			}
		}
		else
		{
			uParam1->f_272[iVar3] = 1;
			if (unk_0xB87D13D0C064E9D1(uParam1->f_307[iVar3], unk_0x16F2683693E537C9(), 1))
			{
				bLocal_4552 = true;
			}
			*uParam4[iVar3] = { 0f, 0f, 0f };
			if (!uParam1->f_236[iVar3])
			{
				func_173("DTRFAIR_HELPD", -1);
				uParam1->f_236[iVar3] = 1;
			}
			if (unk_0xE4EDC4B0E92C078B((*uParam3)[iVar3]))
			{
				func_284((*uParam3)[iVar3]);
			}
		}
		iVar3++;
	}
}

float func_211(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, false) };
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		vVar3 = { unk_0x68F4C0EC296D3901(iParam1, true) };
	}
	else
	{
		vVar3 = { unk_0x68F4C0EC296D3901(iParam1, false) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vVar3, bParam2);
}

int func_212(var uParam0, int iParam1)
{
	if (unk_0x437347B10A200C4B(uParam0->f_31[iParam1], 0))
	{
		return 0;
	}
	else if (unk_0xD59B17D2DFF98E26(uParam0->f_31[iParam1]) || uParam0->f_264[iParam1])
	{
		return 0;
	}
	return 1;
}

void func_213(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, var uParam6, var uParam7, bool bParam8)
{
	bParam8 = bParam8;
	bVar0 = false;
	iParam2 = iParam2;
	iLocal_4544 = 0;
	func_222(uParam0, uParam7, uParam3);
	uParam0->f_230++;
	uParam0->f_250[iParam4] = 1;
	uParam0->f_243[iParam5] = 1;
	uParam0->f_236[iParam5] = 1;
	uParam0->f_264[iParam4] = 1;
	uParam0->f_294 = 1;
	uParam0->f_303 = 0f;
	if (uParam0->f_363[iParam5] != 0)
	{
		unk_0xF7E25143642732EA(uParam0->f_363[iParam5], 0);
		uParam0->f_363[iParam5] = 0;
	}
	if (func_221(&(uParam1->f_1161), &(uParam0->f_231)) == 0 || func_220(uParam0, uParam1))
	{
		bVar0 = true;
		unk_0xA37A90C62806D848(1);
		iLocal_4257 = 1;
		func_19(&iLocal_4525);
		func_19(&iLocal_4526);
		func_19(&iLocal_4527);
		unk_0x5CEB4DB888A62073(false);
		if (unk_0x562F77A7F33D2E46("SIREN_SCENE"))
		{
			unk_0x8910D3D58E0132B8("SIREN_SCENE");
		}
		sVar1 = func_219(uParam3, uParam1, uParam0, 1);
	}
	*uParam6[iParam5] = { 0f, 0f, 0f };
	if (uParam3->f_45)
	{
		if (!uParam3->f_52)
		{
			func_215(uParam0, uParam0->f_31[iParam4], iParam4, 0, !bLocal_4546);
		}
		unk_0x790015DC92C918E2();
		if (bVar0)
		{
			if (func_286())
			{
				func_214(Local_4345, "ARMSAUD", sVar1, 0);
			}
			else
			{
				func_22(&Local_4345, "ARMSAUD", sVar1, 9, 0, 0, 0);
			}
		}
		else
		{
			if (uParam3->f_52)
			{
				iVar2 = (unk_0x09AC81E49EA267F7(0, 65535) % 6);
				if (iVar2 == 0)
				{
					func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_SMB", 9, 0, 0, 0);
				}
				else if (iVar2 == 1)
				{
					func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_SM2", 9, 0, 0, 0);
				}
				else if (iVar2 == 2)
				{
					if (uParam0->f_230 == 2)
					{
						func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_SM3", 9, 0, 0, 0);
					}
					else
					{
						func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_SM4", 9, 0, 0, 0);
					}
				}
				else if (iVar2 == 3)
				{
					func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_SM4", 9, 0, 0, 0);
				}
				else if (iVar2 == 4)
				{
					func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_SM5", 9, 0, 0, 0);
				}
				else if (iVar2 == 5)
				{
					func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_SM6", 9, 0, 0, 0);
				}
			}
			else if (func_286())
			{
				func_214(Local_4345, "ARMSAUD", "ARMS_AIR_SB", 1);
			}
			else
			{
				iVar2 = (unk_0x09AC81E49EA267F7(0, 65535) % 3);
				if (iVar2 == 0)
				{
					func_22(&Local_4345, "ARMSAUD", "OSCAR_YEEHA", 9, 0, 0, 0);
				}
				else
				{
					iVar2 = (unk_0x09AC81E49EA267F7(0, 65535) % 6);
					if (iVar2 == 0)
					{
						func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_SB", 9, 0, 0, 0);
					}
					else if (iVar2 == 1)
					{
						func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_SB2", 9, 0, 0, 0);
					}
					else if (iVar2 == 2)
					{
						func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_SB3", 9, 0, 0, 0);
					}
					else if (iVar2 == 3)
					{
						func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_SB4", 9, 0, 0, 0);
					}
					else if (iVar2 == 4)
					{
						func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_SB5", 9, 0, 0, 0);
					}
					else if (iVar2 == 5)
					{
						func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_SB6", 9, 0, 0, 0);
					}
				}
			}
			if (bParam8)
			{
				if (uParam3->f_52)
				{
					func_181("DTRFAIR_PASSC");
				}
				else
				{
					func_181("DTRFAIR_PASSB");
				}
			}
		}
	}
	else
	{
		unk_0x790015DC92C918E2();
		unk_0x4D7F4CC43D4D0DE3(-1, "CONFIRM_BEEP", "HUD_MINI_GAME_SOUNDSET", true);
		if (bVar0)
		{
			if (func_286())
			{
				func_214(Local_4345, "ARMSAUD", sVar1, 0);
			}
			else
			{
				func_22(&Local_4345, "ARMSAUD", sVar1, 9, 0, 0, 0);
			}
		}
		else
		{
			if (func_286())
			{
				func_214(Local_4345, "ARMSAUD", "ARMS_AIR_S", 1);
			}
			else
			{
				iVar2 = (unk_0x09AC81E49EA267F7(0, 65535) % 3);
				if (iVar2 == 0)
				{
					func_22(&Local_4345, "ARMSAUD", "OSCAR_YEEHA", 9, 0, 0, 0);
				}
				else
				{
					iVar2 = (unk_0x09AC81E49EA267F7(0, 65535) % 6);
					if (iVar2 == 0)
					{
						func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_S", 9, 0, 0, 0);
					}
					else if (iVar2 == 1)
					{
						func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_S2", 9, 0, 0, 0);
					}
					else if (iVar2 == 2)
					{
						func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_S3", 9, 0, 0, 0);
					}
					else if (iVar2 == 3)
					{
						func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_S4", 9, 0, 0, 0);
					}
					else if (iVar2 == 4)
					{
						func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_S5", 9, 0, 0, 0);
					}
					else if (iVar2 == 5)
					{
						func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_S6", 9, 0, 0, 0);
					}
				}
			}
			if (bParam8)
			{
				func_181("DTRFAIR_PASS");
			}
		}
	}
}

void func_214(struct<165> Param0, char* sParam165, char* sParam166, bool bParam167)
{
	if (bParam167)
	{
		unk_0x5CEB4DB888A62073(false);
	}
	StringCopy(&cLocal_3301, sParam165, 16);
	StringCopy(&cLocal_3305, sParam166, 16);
	Local_3125 = { Param0 };
}

void func_215(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	iParam2 = iParam2;
	unk_0x066C43E677C08D5C();
	if ((uParam0->f_232 - 1) == iParam2)
	{
		func_17(uParam0, 0, 0, 1);
		if (bLocal_3516)
		{
			func_218(uParam0->f_25);
		}
		unk_0x20641932E5104B25(uParam0->f_25, true, 0);
		iLocal_3537 = 1;
		unk_0x9A8DDC7C522F5BF5(uParam0->f_304, 0);
		unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
		func_19(&(uParam0->f_235));
		func_19(&iLocal_3542);
		uParam0->f_234 = 0;
		iLocal_3541 = 0;
		func_396("CALLING CLEANUP_EXPLOSION_CAM");
		if (bParam4 && !func_216(&uLocal_3522, uParam0->f_25, 1117126656))
		{
			unk_0xBFE31971E49FA500(false);
			unk_0x8BCB70EB440DED83(false);
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
			}
			unk_0x1196C0C18BC84B0A(uParam0->f_25, 0);
			uParam0->f_304 = unk_0xAE06CCC36C49929C(26379945, 1f, 1f, 1f, 0f, 0f, 0f, 60f, 0, 2);
			unk_0xC5940439E4EB9A33(uParam0->f_304, uParam0->f_25, 0f, -0,65f, -1,6f, 1);
			unk_0x91F5B0244AAE6222(uParam0->f_304, "HAND_SHAKE", 1,5f);
			unk_0x1305278186D1C53E(uParam0->f_304, iParam1, 0f, 0f, 0f, 1);
			unk_0xF49D1BC9EF1C3EF4(unk_0x68F4C0EC296D3901(iParam1, true), 0f, 0f, 0f);
			unk_0xE3BB8E05FCEB3FBE(uParam0->f_304, true);
			unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
			uParam0->f_234 = 0;
			uParam0->f_233 = (unk_0x1C0640BA9A7327B3() + iParam3);
		}
		else
		{
			unk_0xBFE31971E49FA500(true);
			unk_0x8BCB70EB440DED83(true);
		}
	}
}

int func_216(var uParam0, int iParam1, float fParam2)
{
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		unk_0x61890296D3AA030F(iParam1, &vVar4, &uVar7, &uVar10, &vVar0);
	}
	vVar4.z = 0f;
	vVar4 = { func_217(vVar4) };
	fVar3 = -unk_0x5D8ABF6396A76564(vVar4.x, vVar4.y);
	vVar13 = { vVar0 + vVar4 * Vector(fParam2, fParam2, fParam2) };
	uParam0->f_1 = unk_0xA50E81FC2F15181B(vVar13, 12f, 140f, 12f, 0f, 0f, fVar3, 0, 1, 0, 4);
	while (unk_0x1EC301670B54C6DE(uParam0->f_1, &(uParam0->f_9), &(uParam0->f_3), &(uParam0->f_6), &(uParam0->f_11)) == 1)
	{
	}
	if (uParam0->f_9 > 0)
	{
		return 1;
	}
	return 0;
}

Vector3 func_217(vector3 vParam0)
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

void func_218(int iParam0)
{
	unk_0x15AFB6CBDE990FB6(unk_0x16F2683693E537C9(), 1, true);
	unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iParam0, -1);
	bLocal_3516 = false;
}

char* func_219(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (uParam0->f_45)
	{
		if (!func_182(uParam0, uParam2))
		{
			sVar0 = "ARMS_AIR_BF";
		}
		else if (!bParam3)
		{
			sVar0 = "ARMS_A_LBFB";
		}
		else if (func_221(&(uParam1->f_1161), &(uParam2->f_231)) == 0)
		{
			sVar0 = "ARMS_A_LBPB";
			iVar1 = (unk_0x09AC81E49EA267F7(0, 65535) % 4);
			if (iVar1 == 0)
			{
				sVar0 = "ARMS_A_LBPB";
			}
			else if (iVar1 == 1)
			{
				sVar0 = "ARMS_A_LBPB2";
			}
			else if (iVar1 == 2)
			{
				sVar0 = "ARMS_A_LBPB3";
			}
			else if (iVar1 == 3)
			{
				sVar0 = "ARMS_A_LBPB4";
			}
		}
		else
		{
			iVar1 = (unk_0x09AC81E49EA267F7(0, 65535) % 4);
			if (iVar1 == 0)
			{
				sVar0 = "ARMS_A_LPPT";
			}
			else if (iVar1 == 1)
			{
				sVar0 = "ARMS_A_LPPT2";
			}
			else if (iVar1 == 2)
			{
				sVar0 = "ARMS_A_LPPT3";
			}
			else if (iVar1 == 3)
			{
				sVar0 = "ARMS_A_LPPT4";
			}
		}
	}
	else if (!func_182(uParam0, uParam2))
	{
		sVar0 = "ARMS_AIR_PF";
	}
	else if (!bParam3)
	{
		sVar0 = "ARMS_A_LPFP";
	}
	else if (func_221(&(uParam1->f_1161), &(uParam2->f_231)) == 0)
	{
		iVar1 = (unk_0x09AC81E49EA267F7(0, 65535) % 3);
		if (iVar1 == 0)
		{
			sVar0 = "ARMS_A_LPPP";
		}
		else if (iVar1 == 1)
		{
			sVar0 = "ARMS_A_LPPP2";
		}
		else if (iVar1 == 2)
		{
			sVar0 = "ARMS_A_LPPP3";
		}
		else if (iVar1 == 3)
		{
			sVar0 = "ARMS_A_LPPP4";
		}
	}
	else
	{
		iVar1 = (unk_0x09AC81E49EA267F7(0, 65535) % 4);
		if (iVar1 == 0)
		{
			sVar0 = "ARMS_A_LBPT";
		}
		else if (iVar1 == 1)
		{
			sVar0 = "ARMS_A_LBPT2";
		}
		else if (iVar1 == 2)
		{
			sVar0 = "ARMS_A_LBPT3";
		}
		else if (iVar1 == 3)
		{
			sVar0 = "ARMS_A_LBPT4";
		}
	}
	return sVar0;
}

int func_220(var uParam0, var uParam1)
{
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < uParam1->f_1160)
	{
		if (!uParam0->f_236[iVar0])
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_221(var uParam0, var uParam1)
{
	return (*uParam0 - *uParam1);
}

void func_222(var uParam0, var uParam1, var uParam2)
{
	if (Global_111638.f_19978.f_2 >= 5)
	{
		if (*uParam1)
		{
			if (uParam2->f_37)
			{
				unk_0xC92DB9682A650680("OJDA4_TRAIN_HIT");
			}
			else
			{
				unk_0xC92DB9682A650680("OJDA3_BOMB_HIT");
			}
		}
		else
		{
			unk_0xC92DB9682A650680("OJDA2_1ST_DROPPED");
		}
	}
	switch (Global_111638.f_19978.f_2)
	{
		case 0:
			if (uParam0->f_230 == 0)
			{
				unk_0xC92DB9682A650680("OJDA1_1ST_DROPPED");
			}
			else if (uParam0->f_230 == 1)
			{
				unk_0xC92DB9682A650680("OJDA1_2ND_DROPPED");
			}
			break;
		
		case 1:
			unk_0xC92DB9682A650680("OJDA2_1ST_DROPPED");
			break;
		
		case 2:
			unk_0xC92DB9682A650680("OJDA3_BOMB_HIT");
			break;
		
		case 3:
			unk_0xC92DB9682A650680("OJDA4_TRAIN_HIT");
			if (uParam0->f_230 == 0)
			{
				unk_0xC92DB9682A650680("OJDA4_1_LEFT");
			}
			break;
		
		case 4:
			break;
	}
}

void func_223()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (func_224(1701,1f, 3292,2f, 52,6f, 1) < 100f || func_224(1461,3f, 3091,2f, 45,8f, 1) < 100f)
		{
			if (!unk_0x562F77A7F33D2E46("SIREN_SCENE"))
			{
				unk_0x8BC9595FD2792B5D("SIREN_SCENE");
			}
		}
		else if (unk_0x562F77A7F33D2E46("SIREN_SCENE"))
		{
			unk_0x8910D3D58E0132B8("SIREN_SCENE");
		}
	}
}

float func_224(vector3 vParam0, bool bParam3)
{
	return func_174(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), vParam0, bParam3);
}

void func_225(int iParam0, char* sParam1, int iParam2, vector3 vParam3, var uParam6, int iParam7, bool bParam8)
{
	switch (*uParam6)
	{
		case 0:
			if (!unk_0x437347B10A200C4B(iParam0, 0))
			{
				if (unk_0x0EB28750412C3A5A(vParam3, vLocal_4265, false) < IntToFloat(iParam7))
				{
					if (!unk_0x20D6474D5F4B9FC6(iParam0))
					{
						unk_0x4D3C3C0B0DE2663E(iParam0, iParam2, sParam1, 1);
						unk_0x56FDC9ADE35F7DB0(iParam0, true, true, 0);
						*uParam6 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x437347B10A200C4B(iParam0, 0))
			{
				if (!unk_0x20D6474D5F4B9FC6(iParam0))
				{
					unk_0x0DC87D17DC2658DC(iParam0, 1, 0);
					unk_0x046C362CF15F1935(&iParam0);
					*uParam6 = 2;
				}
				else if (bParam8)
				{
					fVar0 = unk_0x9901AABAC4D4C590(iParam0);
					if (fVar0 > 35500f)
					{
						unk_0x0DC87D17DC2658DC(iParam0, 1, 0);
						unk_0x046C362CF15F1935(&iParam0);
					}
				}
			}
			else
			{
				unk_0x046C362CF15F1935(&iParam0);
				*uParam6 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

int func_226(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	if (iLocal_4593 > 0 && iLocal_4593 < 7)
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xC844350D5D58C99A(uParam1->f_343[iVar0]))
			{
				if (unk_0x437347B10A200C4B(uParam1->f_343[iVar0], 0))
				{
					func_284(uParam1->f_353[iVar0]);
				}
			}
			iVar0++;
		}
	}
	switch (iLocal_4593)
	{
		case 0:
			fLocal_4661 = 100000f;
			uParam1->f_200 = 0;
			func_7(uParam1, &bLocal_4542);
			iLocal_4592 = 0;
			bLocal_4568 = false;
			func_46(&iLocal_4583);
			if (bLocal_4567)
			{
				func_208(uParam1->f_25, (13f - 1f), 0, 0,5f, 0);
				func_237(uParam0, uParam1);
				unk_0xE121AE1BBF90E186(uParam1->f_25, true);
			}
			iLocal_4252 = 0;
			fLocal_4522 = 0f;
			fLocal_4523 = 0f;
			iLocal_4593 = 1;
			break;
		
		case 1:
			func_236(&(uParam1->f_31[(uParam1->f_201 - 1)]), uParam1->f_25, &(uParam1->f_235), 1, -7f);
			unk_0x4A4806F9D471E491(uParam1->f_31[(uParam1->f_201 - 1)], false, 0);
			func_235(uParam1);
			iLocal_4593 = 2;
			break;
		
		case 2:
			if (func_49(&iLocal_4583, unk_0x79833B02DBD2A244(fLocal_4522, fLocal_4523)) && iLocal_4592 != -1)
			{
				func_236(&(uParam1->f_38[iParam2][iLocal_4592]), uParam1->f_25, &(uParam1->f_235), 1, -7f);
				uParam1->f_99[iParam2][iLocal_4592] = unk_0x1C0640BA9A7327B3();
				func_235(uParam1);
				settimera(0);
				iLocal_4592++;
				func_46(&iLocal_4583);
				fLocal_4522 = 0,55f;
				fLocal_4523 = 0,6f;
				if (iLocal_4592 >= 9)
				{
					func_234(uParam1, iParam2);
					settimerb(0);
					iLocal_4593 = 4;
				}
				else
				{
					iLocal_4593 = 3;
				}
			}
			break;
		
		case 3:
			func_230(uParam1, iParam2, uParam4);
			if (timera() > 400)
			{
				func_236(&(uParam1->f_38[iParam2][iLocal_4592]), uParam1->f_25, &(uParam1->f_235), 1, -7f);
				uParam1->f_99[iParam2][iLocal_4592] = unk_0x1C0640BA9A7327B3();
				func_235(uParam1);
				settimera(0);
				iLocal_4592++;
				if (iLocal_4592 >= 9)
				{
					func_234(uParam1, iParam2);
					settimerb(0);
					iLocal_4593 = 4;
				}
				else
				{
					iLocal_4593 = 2;
				}
			}
			break;
		
		case 4:
			func_230(uParam1, iParam2, uParam4);
			func_235(uParam1);
			if (timerb() > 800)
			{
				settimerb(0);
				*uParam3 = { unk_0x68F4C0EC296D3901(uParam1->f_25, true) };
				uParam3->f_3 = unk_0xD9522BA9E27E1349(uParam1->f_25);
				if (bLocal_4567)
				{
					vLocal_4606 = { unk_0x68F4C0EC296D3901(uParam1->f_38[iParam2][(iLocal_4592 - 1)], true) };
					unk_0xA47B46945FF6DE74(uParam1->f_164, vLocal_4606, 1, false, 0, 1);
					func_228(uParam1, uParam1->f_164);
				}
				iLocal_4593 = 5;
			}
			break;
		
		case 5:
			func_235(uParam1);
			if (unk_0xC844350D5D58C99A(uParam1->f_38[iParam2][(iLocal_4592 - 1)]))
			{
				vLocal_4606 = { unk_0x68F4C0EC296D3901(uParam1->f_38[iParam2][(iLocal_4592 - 1)], true) };
			}
			if (!func_177(vLocal_4606))
			{
				unk_0xA47B46945FF6DE74(uParam1->f_164, vLocal_4606, 1, false, 0, 1);
			}
			if (timerb() < 1500)
			{
				*uParam3 = { unk_0x68F4C0EC296D3901(uParam1->f_25, true) };
				uParam3->f_3 = unk_0xD9522BA9E27E1349(uParam1->f_25);
			}
			func_230(uParam1, iParam2, uParam4);
			break;
		
		case 6:
			fLocal_3520 = 65f;
			if (unk_0xC844350D5D58C99A(uParam1->f_38[iParam2][(iLocal_4592 - 1)]))
			{
				unk_0xBA3209FB359D3EA4("scr_drug_grd_plane_exp", unk_0x68F4C0EC296D3901(uParam1->f_38[iParam2][(iLocal_4592 - 1)], true), 0f, 0f, 0f, 3f, 0, 0, 0);
				unk_0xF690C84DADBB3551(&(uParam1->f_38[iParam2][(iLocal_4592 - 1)]));
			}
			func_227(uParam1, uParam1->f_31[iParam2], 0);
			iLocal_4593 = 7;
			break;
		
		case 7:
			if (timerb() > 1000)
			{
				unk_0xE121AE1BBF90E186(uParam1->f_25, false);
				bLocal_4567 = false;
				iLocal_4566 = 0;
			}
			break;
	}
	if (bLocal_4567)
	{
		if (iLocal_4593 != 7)
		{
			if ((iLocal_4593 > 4 && iLocal_4593 < 6) && timerb() > 2500)
			{
				func_209(uParam1->f_25, uParam3, &(uParam3->f_3), 3);
			}
			else
			{
				func_208(uParam1->f_25, (13f - 1f), 0, 2f, 0);
			}
		}
	}
	return 0;
}

void func_227(var uParam0, int iParam1, int iParam2)
{
	unk_0x9A8DDC7C522F5BF5(uParam0->f_305, 0);
	unk_0x9A8DDC7C522F5BF5(uParam0->f_306, 0);
	unk_0x9A8DDC7C522F5BF5(uParam0->f_304, 0);
	unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
	func_17(uParam0, 0, 1, 1);
	if (bLocal_3516)
	{
		func_218(uParam0->f_25);
	}
	uParam0->f_304 = unk_0xAE06CCC36C49929C(26379945, 1f, 1f, 1f, 0f, 0f, 0f, 60f, 0, 2);
	func_19(&(uParam0->f_235));
	unk_0xC5940439E4EB9A33(uParam0->f_304, uParam0->f_25, 0f, -0,65f, -1,6f, 1);
	unk_0x91F5B0244AAE6222(uParam0->f_304, "HAND_SHAKE", 1,5f);
	unk_0x1305278186D1C53E(uParam0->f_304, iParam1, 0f, 0f, 0f, 1);
	unk_0x1196C0C18BC84B0A(uParam0->f_25, 0);
	unk_0xE3BB8E05FCEB3FBE(uParam0->f_304, true);
	unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
	uParam0->f_234 = 0;
	uParam0->f_233 = (unk_0x1C0640BA9A7327B3() + iParam2);
}

void func_228(var uParam0, int iParam1)
{
	vVar0 = { unk_0x17D61C69BA58F815(uParam0->f_304, 2) };
	uParam0->f_305 = unk_0xAE06CCC36C49929C(26379945, 0f, 0f, 0f, vVar0, 65f, 1, 2);
	fVar4 = unk_0xEE9925602B29903C(uParam0->f_25);
	if (fVar4 < 35f)
	{
		iVar3 = 3000;
		unk_0xC5940439E4EB9A33(uParam0->f_305, iParam1, 1,0262f, -9,9728f, 1,8926f, 1);
		unk_0x1305278186D1C53E(uParam0->f_305, iParam1, 0,8841f, -7,0213f, 2,411f, 1);
	}
	else if (fVar4 < 70f)
	{
		iVar3 = 3500;
		unk_0xC5940439E4EB9A33(uParam0->f_305, iParam1, 1,1287f, -8,3258f, 0,7281f, 1);
		unk_0x1305278186D1C53E(uParam0->f_305, iParam1, 0,9513f, -5,4114f, 1,4169f, 1);
	}
	else
	{
		iVar3 = 5000;
		unk_0xC5940439E4EB9A33(uParam0->f_305, iParam1, 1,4631f, -3,0219f, -3,0115f, 1);
		unk_0x1305278186D1C53E(uParam0->f_305, iParam1, 1,1996f, -0,3242f, -1,7257f, 1);
	}
	func_17(uParam0, 0, 1, 0);
	if (!func_177(vLocal_3492) && !func_177(vLocal_3495))
	{
		uParam0->f_306 = unk_0xAE06CCC36C49929C(26379945, 0f, 0f, 0f, vVar0, 65f, 0, 2);
		unk_0xC5940439E4EB9A33(uParam0->f_306, iParam1, vLocal_3492, 1);
		unk_0x1305278186D1C53E(uParam0->f_306, iParam1, vLocal_3495, 1);
	}
	unk_0x91F5B0244AAE6222(uParam0->f_305, "HAND_SHAKE", 2f);
	unk_0x91F5B0244AAE6222(uParam0->f_306, "HAND_SHAKE", 2f);
	unk_0xF1E4C781086FABC1(uParam0->f_306, uParam0->f_305, iVar3, 1, 1);
	func_229(iParam1);
	func_18("DRUG_TRAFFIC_AIR_BOMB_CAM_MASTER", &(uParam0->f_235), 1, 0, 0, 0, 0, 0);
	unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
	unk_0xBFE31971E49FA500(false);
	unk_0x8BCB70EB440DED83(false);
}

void func_229(int iParam0)
{
	unk_0x975C58E0FC4955A9(unk_0x16F2683693E537C9(), 1);
	unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), false, 0);
	unk_0x9F528B1B53FBC5D9(unk_0x16F2683693E537C9(), iParam0, 0, 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 1);
	bLocal_3516 = true;
}

void func_230(var uParam0, int iParam1, var uParam2)
{
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	while (iVar2 < 9)
	{
		if (unk_0xC844350D5D58C99A(uParam0->f_38[iParam1][iVar2]))
		{
			iVar1 = 0;
			if (!unk_0x20906E1D6BDC7044(uParam0->f_38[iParam1][iVar2]))
			{
				func_233(&(uParam0->f_38[iParam1][iVar2]));
			}
			if (unk_0xE608C809F9416F00(uParam0->f_38[iParam1][iVar2]))
			{
			}
			if (unk_0x9C66D99E63E8E24C(uParam0->f_38[iParam1][iVar2]) == 0f)
			{
			}
			if (timerb() > 30000)
			{
			}
			if (func_232(uParam0, iParam1, iVar2))
			{
				if (!bLocal_4568)
				{
					iVar3 = 0;
					while (iVar3 < 4)
					{
						if (!unk_0x437347B10A200C4B(uParam0->f_322[iVar3], 0))
						{
							fVar5 = func_211(uParam0->f_322[iVar3], uParam0->f_38[iParam1][iVar2], 1);
							if (fVar5 < 17f)
							{
								unk_0x0DC87D17DC2658DC(uParam0->f_322[iVar3], 1, 0);
							}
						}
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 9)
					{
						if (!unk_0x437347B10A200C4B(uParam0->f_343[iVar3], 0))
						{
							fVar4 = func_211(uParam0->f_343[iVar3], uParam0->f_38[iParam1][iVar2], 1);
							if (fVar4 < 17f)
							{
								iLocal_4252 = 1;
								unk_0x0DC87D17DC2658DC(uParam0->f_343[iVar3], 1, 0);
								(*uParam2)[0] = (*uParam2)[0];
							}
						}
						if (unk_0x437347B10A200C4B(uParam0->f_343[iVar3], 0) && unk_0xE4EDC4B0E92C078B(uParam0->f_353[iVar3]))
						{
							func_284(uParam0->f_353[iVar3]);
						}
						iVar3++;
					}
				}
				unk_0xBA3209FB359D3EA4("scr_drug_grd_train_exp", unk_0x68F4C0EC296D3901(uParam0->f_38[iParam1][iVar2], true), 0f, 0f, 0f, 3f, 0, 0, 0);
				if (!iLocal_4258)
				{
					unk_0xC92DB9682A650680("OJDA5_FIRST_BOMBS");
					iLocal_4258 = 1;
				}
				unk_0xF690C84DADBB3551(&(uParam0->f_38[iParam1][iVar2]));
			}
			else
			{
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	if ((iVar0 || iVar1) || func_231(uParam0))
	{
		settimerb(0);
		func_284(uParam0->f_165[iParam1]);
		func_19(&(uParam0->f_235));
		if (bLocal_4567)
		{
			iLocal_4593 = 6;
		}
		else
		{
			iLocal_4566 = 0;
			iLocal_4593 = 7;
		}
	}
}

int func_231(var uParam0)
{
	if (unk_0x9F4FE516EAACCFC5(uParam0->f_306) && unk_0xFBB4F23D534EB790(uParam0->f_306))
	{
		vVar0 = { unk_0xD06724447386BC29(uParam0->f_306) };
		if (unk_0xE82754C349C7B581(vVar0, &fVar3, 0, 0))
		{
			if (unk_0x755FF954DAE327E1((vVar0.z - fVar3)) < 5f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_232(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_38[iParam1][iParam2]) && !unk_0x20906E1D6BDC7044(uParam0->f_38[iParam1][iParam2]))
	{
		if ((unk_0xE608C809F9416F00(uParam0->f_38[iParam1][iParam2]) || unk_0x9C66D99E63E8E24C(uParam0->f_38[iParam1][iParam2]) == 0f) || unk_0x70EED0761B82965E(uParam0->f_38[iParam1][iParam2]))
		{
			vVar0 = { unk_0x68F4C0EC296D3901(uParam0->f_38[iParam1][iParam2], true) };
			if (fLocal_4661 > vVar0.z)
			{
				fLocal_4661 = vVar0.z;
			}
			if (unk_0x755FF954DAE327E1((vVar0.z - fLocal_4661)) > 20f && vVar0.z < fLocal_4661)
			{
				unk_0xDA55CDFB97015579(vVar0, 26, 1f, 1, 0, 1065353216, 0);
			}
			return 1;
		}
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_233(var uParam0)
{
	vVar0 = { unk_0x835730A2D89F6093(*uParam0, 2) };
	fVar3 = unk_0x79833B02DBD2A244(1f, 2f);
	if (bLocal_4260)
	{
		vVar0.x = 80f;
	}
	else if (vVar0.x < 80f)
	{
		vVar0.x = (vVar0.x + fVar3);
	}
	fVar3 = unk_0x79833B02DBD2A244(0,4f, 1f);
	vVar0.y = (vVar0.y + fVar3);
	if (vVar0.y > 360f)
	{
		vVar0.y = (vVar0.y - 360f);
	}
	unk_0xC023D1C4BF532815(*uParam0, vVar0, 2, 1);
}

void func_234(var uParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_164))
	{
		unk_0xF690C84DADBB3551(&(uParam0->f_164));
	}
	uParam0->f_164 = unk_0x7707E48765093646(iLocal_4662, unk_0x68F4C0EC296D3901(uParam0->f_38[iParam1][(iLocal_4592 - 1)], true), true, true, false);
	unk_0xC023D1C4BF532815(uParam0->f_164, 0f, 0f, (unk_0xD9522BA9E27E1349(uParam0->f_25) + 180f), 2, 1);
	unk_0x4A4806F9D471E491(uParam0->f_164, false, 0);
	unk_0x20641932E5104B25(uParam0->f_164, false, 0);
}

void func_235(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_202)
	{
		iVar1 = 0;
		while (iVar1 < 9)
		{
			if (unk_0xC844350D5D58C99A(uParam0->f_38[iVar0][iVar1]) && !unk_0xD59B17D2DFF98E26(uParam0->f_38[iVar0][iVar1]))
			{
				if (uParam0->f_99[iVar0][iVar1] != 0 && (unk_0x1C0640BA9A7327B3() - uParam0->f_99[iVar0][iVar1]) > 125)
				{
					uParam0->f_99[iVar0][iVar1] = 0;
					unk_0xD65E6E13E145467B(uParam0->f_38[iVar0][iVar1], "BOMB_TAIL_OPEN_UP", "oddjobs@arms_traffic@", 4f, false, true, 0, 0f, 0);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_236(var uParam0, int iParam1, int iParam2, bool bParam3, float fParam4)
{
	fLocal_3536 = 0f;
	bLocal_4260 = false;
	unk_0x15AFB6CBDE990FB6(*uParam0, 0, true);
	if (bParam3)
	{
		if (!unk_0x437347B10A200C4B(iParam1, 0))
		{
			func_18("DRUG_TRAFFIC_AIR_BOMB_DROP_MASTER", iParam2, 0, iParam1, 0, 0, 0, 0);
		}
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		vLocal_4673 = { unk_0x56E9E0FD5ACCD35D(iParam1) };
		unk_0x61890296D3AA030F(iParam1, &uVar0, &uVar3, &vVar6, &uVar9);
	}
	vVar6 = { func_217(vVar6) };
	vLocal_4673 = { vLocal_4673 + Vector((vVar6.z * fParam4), (vVar6.y * fParam4), (vVar6.x * fParam4)) };
	if (vLocal_4673.z <= -70f)
	{
		vLocal_4673.z = -70f;
	}
	vLocal_3538 = { 80f, 0f, (unk_0xD9522BA9E27E1349(iParam1) + 180f) };
	unk_0x6D7271D7307DB70C(*uParam0, 90f);
	unk_0x37806EBF326ECEE9(*uParam0, vLocal_4673.x, vLocal_4673.y, vLocal_4673.z);
}

int func_237(var uParam0, var uParam1)
{
	func_396("INSIDE SETUP_BOMB_CAM");
	unk_0x9A8DDC7C522F5BF5(uParam1->f_304, 0);
	unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
	fVar0 = fVar0;
	Var1 = 16;
	iVar166 = 0;
	if (func_238(uParam0, uParam1, Var1, &iVar166, 2, 0))
	{
		if (!unk_0x9F4FE516EAACCFC5(uParam1->f_304))
		{
			fVar0 = unk_0xD9522BA9E27E1349(uParam1->f_25);
			uParam1->f_304 = unk_0xAE06CCC36C49929C(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
			unk_0x91F5B0244AAE6222(uParam1->f_304, "ROAD_VIBRATION_SHAKE", 0,5f);
		}
		uParam1->f_234 = unk_0x1C0640BA9A7327B3();
		unk_0xC5940439E4EB9A33(uParam1->f_304, uParam1->f_25, 0f, 1,44f, -0,9565f, 1);
		unk_0x1305278186D1C53E(uParam1->f_304, uParam1->f_25, -0,1281f, -1,5596f, -1,4592f, 1);
		unk_0x1196C0C18BC84B0A(uParam1->f_25, 1);
		unk_0xE3BB8E05FCEB3FBE(uParam1->f_304, true);
		unk_0xBFE31971E49FA500(false);
		unk_0x8BCB70EB440DED83(false);
		unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
		func_396("RETURNING TRUE ON SETUP_BOMB_CAM");
		return 1;
	}
	return 0;
}

int func_238(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, int iParam167, int iParam168, bool bParam169)
{
	vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	iVar3 = 1;
	fVar4 = 0f;
	if (unk_0xEB69695E080217B5(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), &fVar4))
	{
		if ((vVar0.z - fVar4) < 16,5f)
		{
			iVar3 = 0;
			if (!iLocal_3519)
			{
				func_173("DTRFAIR_HEIGHT", -1);
				iLocal_3519 = 1;
			}
		}
	}
	if ((unk_0xEE9925602B29903C(uParam1->f_25) < 6f || unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) < 10f) || unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
	{
		if (!iLocal_3519)
		{
			func_173("DTRFAIR_HEIGHT", -1);
			iLocal_3519 = 1;
		}
		iVar3 = 0;
	}
	if (unk_0xEE9925602B29903C(uParam1->f_25) > 230f && !bParam169)
	{
		if (iParam168 == 2 && uParam0->f_45)
		{
			if (*iParam167)
			{
				func_22(&uParam2, "ARMSAUD", "ARMS_A_ALTP", 9, 0, 0, 0);
				*iParam167 = 0;
			}
			if (!iLocal_3517)
			{
				func_173("DTRFAIR_ERR1", -1);
				iLocal_3517 = 1;
			}
		}
		else
		{
			if (*iParam167)
			{
				func_22(&uParam2, "ARMSAUD", "ARMS_A_ALTP", 9, 0, 0, 0);
				*iParam167 = 0;
			}
			if (!iLocal_3517)
			{
				func_173("DTRFAIR_ERR2", -1);
				iLocal_3517 = 1;
			}
		}
		iVar3 = 0;
	}
	if (iVar3 == 0)
	{
		func_18("DRUG_TRAFFIC_AIR_BOMB_DROP_ERROR_MASTER", &(uParam1->f_235), 0, 0, 0, 0, 0, 0);
	}
	return iVar3;
}

void func_239(var uParam0, var uParam1)
{
	if (Global_111638.f_19978.f_2 >= 5)
	{
		if (*uParam1)
		{
			if (uParam0->f_37)
			{
				unk_0xC92DB9682A650680("OJDA4_RETURN");
			}
			else
			{
				unk_0xC92DB9682A650680("OJDA3_LAST_ONE");
			}
		}
		else
		{
			unk_0xC92DB9682A650680("OJDA2_HEAD_BACK");
		}
	}
	switch (Global_111638.f_19978.f_2)
	{
		case 0:
			break;
		
		case 1:
			unk_0xC92DB9682A650680("OJDA2_HEAD_BACK");
			break;
		
		case 2:
			unk_0xC92DB9682A650680("OJDA3_LAST_ONE");
			break;
		
		case 3:
			unk_0xC92DB9682A650680("OJDA4_RETURN");
			break;
		
		case 4:
			unk_0xC92DB9682A650680("OJDA5_BASE_DESTROYED");
			break;
	}
}

int func_240(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, int iParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	uVar0 = 6;
	switch (*uParam3)
	{
		case 0:
			func_396("INSIDE CASE DROP_STATE_CHECKS_INITIALIZE");
			func_180(iParam4);
			*uParam3 = 3;
			break;
		
		case 3:
			if (uParam0->f_51)
			{
				func_175(uParam1, uParam6, &uParam12);
			}
			if ((*iParam8 == 2 && uParam1->f_233 != 0) && uParam1->f_233 != 1)
			{
				func_208(uParam1->f_25, 20f, 0, 10f, 0);
				if (!iLocal_4564)
				{
					if (func_268())
					{
						if ((unk_0x1C0640BA9A7327B3() - uParam1->f_233) > 2200)
						{
							unk_0x82A772610883F395("CamPushInNeutral", 0, 0);
							unk_0x4D7F4CC43D4D0DE3(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
							iLocal_4564 = 1;
						}
					}
				}
				if (((unk_0x1C0640BA9A7327B3() - uParam1->f_233) > 2500 || unk_0xBFC0798A6E3417F9(0, 114)) || unk_0xD245978525608929(0, 114))
				{
					iLocal_4564 = 0;
					unk_0x066C43E677C08D5C();
					func_7(uParam1, &bLocal_4542);
					unk_0x1AEF7184B203A58D(uParam1->f_25, 40f);
					uParam1->f_233 = 0;
				}
				else if (uParam1->f_234 != 0)
				{
				}
			}
			if (uParam1->f_200)
			{
			}
			unk_0x9501364A300048C6();
			if (!uParam0->f_51)
			{
				func_267(*iParam8, uParam1, uParam2, uParam0);
			}
			if (uParam0->f_52 && !iLocal_4566)
			{
				func_249(uParam0, uParam1, uParam2, &uVar19, &uVar20, uParam6, &uVar0, uParam7, iParam8, uParam11);
				if (Global_111638.f_19978.f_2 >= 5)
				{
					func_248(uParam1);
					func_244(uParam1, uParam7, sParam5, &uLocal_4543, bLocal_4533);
				}
				else
				{
					func_243(uParam1, uParam7, sParam5, &uLocal_4543, bLocal_4533);
				}
			}
			else if (!uParam0->f_52)
			{
				func_249(uParam0, uParam1, uParam2, &uVar19, &uVar20, uParam6, &uVar0, uParam7, iParam8, uParam11);
			}
			if (((!uParam0->f_35 && !bLocal_4533) && !bLocal_4545) && !uParam0->f_52)
			{
				func_281(uParam0, uParam7, uParam6, uParam2, uParam1, &vLocal_4265, uParam11);
			}
			else if (!uParam0->f_52)
			{
				vLocal_4600 = { func_280(uParam7, uParam6, &(uParam1->f_312), 0) };
				if (!func_3(vLocal_4600, 0f, 0f, 0f, 0))
				{
					if (!uParam0->f_34)
					{
						vLocal_4600.z = (vLocal_4600.z + 3f);
					}
				}
			}
			if ((((func_221(&(uParam2->f_1161), &(uParam1->f_231)) == 0 || func_220(uParam1, uParam2)) || func_242(uParam1, uParam2)) || *uParam9) || uLocal_4255)
			{
				func_241(uParam1, uParam7, uParam6);
				func_396("RETURNING TRUE ON CARGO CHECK");
				if ((unk_0x9F4FE516EAACCFC5(uParam1->f_304) && unk_0xFBB4F23D534EB790(uParam1->f_304)) || (unk_0x9F4FE516EAACCFC5(uParam1->f_305) && unk_0xFBB4F23D534EB790(uParam1->f_305)))
				{
					unk_0x1AEF7184B203A58D(uParam1->f_25, 40f);
					func_396("SETTING FORWARD SPEED TO 40");
				}
				iLocal_4535 = 1;
				*uParam3 = 4;
				settimera(0);
			}
			break;
		
		case 4:
			if (*iParam8 == 2 && uParam1->f_233 != 0)
			{
				if (!iLocal_4565)
				{
					if (func_268())
					{
						if ((unk_0x1C0640BA9A7327B3() - uParam1->f_233) > 2200)
						{
							unk_0x82A772610883F395("CamPushInNeutral", 0, 0);
							unk_0x4D7F4CC43D4D0DE3(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
							iLocal_4565 = 1;
						}
					}
				}
				if ((unk_0x1C0640BA9A7327B3() - uParam1->f_233) > 2500)
				{
					func_396("SECOND CHECK PASS");
					if (unk_0x9F4FE516EAACCFC5(uParam1->f_305))
					{
						unk_0xE3BB8E05FCEB3FBE(uParam1->f_305, false);
					}
					unk_0x066C43E677C08D5C();
					func_7(uParam1, &bLocal_4542);
					unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
					uParam1->f_233 = 0;
				}
			}
			if ((timera() > 3000 && !unk_0x25037C66EB32B076()) || uLocal_4255)
			{
				if ((unk_0x1C0640BA9A7327B3() - uParam1->f_233) > 4500)
				{
					unk_0x790015DC92C918E2();
					unk_0x066C43E677C08D5C();
					uParam1->f_200 = 0;
					func_7(uParam1, &bLocal_4542);
					*uParam6[0] = { uParam2->f_920.f_107 };
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_241(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xE4EDC4B0E92C078B((*uParam1)[iVar0]))
		{
			unk_0x142CC44DB769B57E(uParam1[iVar0]);
			*uParam2[iVar0] = { 0f, 0f, 0f };
		}
		if (unk_0xE4EDC4B0E92C078B(uParam0->f_165[iVar0]))
		{
			unk_0x142CC44DB769B57E(&(uParam0->f_165[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xE4EDC4B0E92C078B(uParam0->f_353[iVar0]))
		{
			unk_0x142CC44DB769B57E(&(uParam0->f_353[iVar0]));
		}
		iVar0++;
	}
}

int func_242(var uParam0, var uParam1)
{
	iVar0 = func_221(&(uParam1->f_1161), &(uParam0->f_231));
	iVar1 = (uParam1->f_1160 - uParam0->f_230);
	if (iVar0 < iVar1)
	{
		bLocal_4548 = true;
		return 1;
	}
	return 0;
}

void func_243(var uParam0, var uParam1, char* sParam2, var uParam3, bool bParam4)
{
	if (!bParam4)
	{
		if (func_224(1487,584f, 3161,509f, 39,9267f, 0) < 800f)
		{
			if (!*uParam3)
			{
				sParam2 = sParam2;
				*uParam3 = 1;
				func_285("DTRFAIR_OBJCF", 7500, 1);
				sParam2 = "DTRFAIR_OBJCF";
				unk_0xC92DB9682A650680("OJDA5_AT_BASE");
			}
			if (unk_0xE4EDC4B0E92C078B((*uParam1)[0]))
			{
				unk_0x142CC44DB769B57E(uParam1[0]);
			}
			iVar0 = 0;
			while (iVar0 < 9)
			{
				if (!unk_0x437347B10A200C4B(uParam0->f_343[iVar0], 0) && !unk_0xE4EDC4B0E92C078B(uParam0->f_353[iVar0]))
				{
					uParam0->f_353[iVar0] = unk_0x5C3B41825F6AC5A0(uParam0->f_343[iVar0]);
					unk_0x516E63E474722206(uParam0->f_353[iVar0], 0,8f);
					unk_0xDC5B2F9D0CCE3A10(uParam0->f_353[iVar0], "DTRFAIR_TGT1");
				}
				iVar0++;
			}
		}
	}
}

void func_244(var uParam0, var uParam1, char* sParam2, var uParam3, bool bParam4)
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		vVar2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	}
	if (!bParam4)
	{
		iVar1 = func_247(&(uParam0->f_312), vVar2);
		if (iVar1 != -1)
		{
			uParam0->f_279[iVar1] = 1;
		}
		if (iVar1 == 0)
		{
			iVar0 = 4;
			while (iVar0 <= 11)
			{
				if (!unk_0x437347B10A200C4B(uParam0->f_343[iVar0], 0) && unk_0xE4EDC4B0E92C078B(uParam0->f_353[iVar0]))
				{
					unk_0x142CC44DB769B57E(&(uParam0->f_353[iVar0]));
					uParam0->f_279[iVar1] = 0;
				}
				iVar0++;
			}
		}
		else if (iVar1 == 1)
		{
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (!unk_0x437347B10A200C4B(uParam0->f_343[iVar0], 0) && unk_0xE4EDC4B0E92C078B(uParam0->f_353[iVar0]))
				{
					unk_0x142CC44DB769B57E(&(uParam0->f_353[iVar0]));
					uParam0->f_279[iVar1] = 0;
				}
				iVar0++;
			}
			iVar0 = 8;
			while (iVar0 <= 11)
			{
				if (!unk_0x437347B10A200C4B(uParam0->f_343[iVar0], 0) && unk_0xE4EDC4B0E92C078B(uParam0->f_353[iVar0]))
				{
					unk_0x142CC44DB769B57E(&(uParam0->f_353[iVar0]));
					uParam0->f_279[iVar1] = 0;
				}
				iVar0++;
			}
		}
		else if (iVar1 == 2)
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (!unk_0x437347B10A200C4B(uParam0->f_343[iVar0], 0) && unk_0xE4EDC4B0E92C078B(uParam0->f_353[iVar0]))
				{
					unk_0x142CC44DB769B57E(&(uParam0->f_353[iVar0]));
					uParam0->f_279[iVar1] = 0;
				}
				iVar0++;
			}
		}
		if (iVar1 != -1)
		{
			fVar5 = func_211(uParam0->f_312[iVar1], unk_0x16F2683693E537C9(), 0);
			if (fVar5 < 600f)
			{
				if (!*uParam3)
				{
					sParam2 = sParam2;
					*uParam3 = 1;
					sParam2 = "DTRFAIR_OBJCF";
				}
				if (unk_0xE4EDC4B0E92C078B((*uParam1)[iVar1]))
				{
					unk_0x142CC44DB769B57E(uParam1[iVar1]);
				}
				if (iVar1 == 0)
				{
					iVar0 = 0;
					while (iVar0 <= 3)
					{
						if (!unk_0x437347B10A200C4B(uParam0->f_343[iVar0], 0) && !unk_0xE4EDC4B0E92C078B(uParam0->f_353[iVar0]))
						{
							uParam0->f_353[iVar0] = unk_0x5C3B41825F6AC5A0(uParam0->f_343[iVar0]);
						}
						iVar0++;
					}
				}
				else if (iVar1 == 1)
				{
					iVar0 = 4;
					while (iVar0 <= 7)
					{
						if (!unk_0x437347B10A200C4B(uParam0->f_343[iVar0], 0) && !unk_0xE4EDC4B0E92C078B(uParam0->f_353[iVar0]))
						{
							uParam0->f_353[iVar0] = unk_0x5C3B41825F6AC5A0(uParam0->f_343[iVar0]);
						}
						iVar0++;
					}
				}
				else if (iVar1 == 2)
				{
					iVar0 = 8;
					while (iVar0 <= 11)
					{
						if (!unk_0x437347B10A200C4B(uParam0->f_343[iVar0], 0) && !unk_0xE4EDC4B0E92C078B(uParam0->f_353[iVar0]))
						{
							uParam0->f_353[iVar0] = unk_0x5C3B41825F6AC5A0(uParam0->f_343[iVar0]);
						}
						iVar0++;
					}
				}
			}
			else if (!unk_0xE4EDC4B0E92C078B((*uParam1)[iVar1]))
			{
				if (uParam0->f_279[iVar1])
				{
					iVar6 = func_246(&iVar1, uParam0);
					if (iVar6 != -1)
					{
						func_245(uParam0);
						(*uParam1)[iVar1] = unk_0x5C3B41825F6AC5A0(uParam0->f_343[iVar6]);
						unk_0x516E63E474722206((*uParam1)[iVar1], 1f);
						unk_0x61755AC17D8F538E((*uParam1)[iVar1], 1);
					}
				}
			}
		}
	}
}

void func_245(var uParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		vVar2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	}
	iVar0 = func_247(&(uParam0->f_312), vVar2);
	if (iVar0 == 0)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (!unk_0x437347B10A200C4B(uParam0->f_343[iVar1], 0) && unk_0xE4EDC4B0E92C078B(uParam0->f_353[iVar1]))
			{
				unk_0x142CC44DB769B57E(&(uParam0->f_353[iVar1]));
			}
			iVar1++;
		}
	}
	else if (iVar0 == 1)
	{
		iVar1 = 4;
		while (iVar1 <= 7)
		{
			if (!unk_0x437347B10A200C4B(uParam0->f_343[iVar1], 0) && unk_0xE4EDC4B0E92C078B(uParam0->f_353[iVar1]))
			{
				unk_0x142CC44DB769B57E(&(uParam0->f_353[iVar1]));
				uParam0->f_279[iVar0] = 0;
			}
			iVar1++;
		}
	}
	else if (iVar0 == 2)
	{
		iVar1 = 8;
		while (iVar1 <= 11)
		{
			if (!unk_0x437347B10A200C4B(uParam0->f_343[iVar1], 0) && unk_0xE4EDC4B0E92C078B(uParam0->f_353[iVar1]))
			{
				unk_0x142CC44DB769B57E(&(uParam0->f_353[iVar1]));
			}
			iVar1++;
		}
	}
}

int func_246(int iParam0, var uParam1)
{
	switch (*iParam0)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (!unk_0x437347B10A200C4B(uParam1->f_343[iVar0], 0))
				{
					iVar1 = iVar0;
					break;
				}
				iVar0++;
			}
			break;
		
		case 1:
			iVar0 = 4;
			while (iVar0 <= 7)
			{
				if (!unk_0x437347B10A200C4B(uParam1->f_343[iVar0], 0))
				{
					iVar1 = iVar0;
					break;
				}
				iVar0++;
			}
			break;
		
		case 2:
			iVar0 = 8;
			while (iVar0 <= 11)
			{
				if (!unk_0x437347B10A200C4B(uParam1->f_343[iVar0], 0))
				{
					iVar1 = iVar0;
					break;
				}
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_247(var uParam0, vector3 vParam1)
{
	iVar1 = -1;
	fVar2 = -1f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x437347B10A200C4B((*uParam0)[iVar0], 0))
		{
			vVar3 = { unk_0x68F4C0EC296D3901((*uParam0)[iVar0], true) };
			fVar6 = vdist2(vVar3, vParam1);
			if (iVar1 == -1)
			{
				fVar2 = fVar6;
				iVar1 = iVar0;
			}
			else if (fVar6 < fVar2)
			{
				fVar2 = fVar6;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_248(var uParam0)
{
	if (iLocal_4667 == 0)
	{
		if (!unk_0x437347B10A200C4B(uParam0->f_343[0], 0))
		{
			vVar1 = { unk_0x68F4C0EC296D3901(uParam0->f_343[0], true) };
		}
		else
		{
			vVar1 = { 0f, 0f, 0f };
		}
		if (!unk_0x437347B10A200C4B(uParam0->f_343[4], 0))
		{
			vVar4 = { unk_0x68F4C0EC296D3901(uParam0->f_343[4], true) };
		}
		else
		{
			vVar4 = { 0f, 0f, 0f };
		}
		if (!unk_0x437347B10A200C4B(uParam0->f_343[8], 0))
		{
			vVar7 = { unk_0x68F4C0EC296D3901(uParam0->f_343[8], true) };
		}
		else
		{
			vVar7 = { 0f, 0f, 0f };
		}
		iVar0 = 1;
		while (iVar0 <= 3)
		{
			if (!unk_0x437347B10A200C4B(uParam0->f_343[iVar0], 0))
			{
				vVar10 = { unk_0x68F4C0EC296D3901(uParam0->f_343[iVar0], true) };
				if (!func_3(vVar1, 0f, 0f, 0f, 0))
				{
					if (vdist(vVar10, vVar1) > 150f)
					{
						if (unk_0x03068588A1FCED1A(uParam0->f_343[iVar0]))
						{
							unk_0xA954465BA6FDEFE2(&(uParam0->f_343[iVar0]));
							if (unk_0xE4EDC4B0E92C078B(uParam0->f_353[iVar0]))
							{
								unk_0x142CC44DB769B57E(&(uParam0->f_353[iVar0]));
							}
						}
					}
				}
			}
			iVar0++;
		}
		iVar0 = 5;
		while (iVar0 <= 7)
		{
			if (!unk_0x437347B10A200C4B(uParam0->f_343[iVar0], 0))
			{
				vVar13 = { unk_0x68F4C0EC296D3901(uParam0->f_343[iVar0], true) };
				if (!func_3(vVar4, 0f, 0f, 0f, 0))
				{
					if (vdist(vVar13, vVar4) > 150f)
					{
						if (unk_0x03068588A1FCED1A(uParam0->f_343[iVar0]))
						{
							unk_0xA954465BA6FDEFE2(&(uParam0->f_343[iVar0]));
							if (unk_0xE4EDC4B0E92C078B(uParam0->f_353[iVar0]))
							{
								unk_0x142CC44DB769B57E(&(uParam0->f_353[iVar0]));
							}
						}
					}
				}
			}
			iVar0++;
		}
		iVar0 = 9;
		while (iVar0 <= 11)
		{
			if (!unk_0x437347B10A200C4B(uParam0->f_343[iVar0], 0))
			{
				vVar16 = { unk_0x68F4C0EC296D3901(uParam0->f_343[iVar0], true) };
				if (!func_3(vVar7, 0f, 0f, 0f, 0))
				{
					if (vdist(vVar16, vVar7) > 150f)
					{
						if (unk_0x03068588A1FCED1A(uParam0->f_343[iVar0]))
						{
							unk_0xA954465BA6FDEFE2(&(uParam0->f_343[iVar0]));
							if (unk_0xE4EDC4B0E92C078B(uParam0->f_353[iVar0]))
							{
								unk_0x142CC44DB769B57E(&(uParam0->f_353[iVar0]));
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (iLocal_4667 > 10)
	{
		iLocal_4667 = 0;
	}
	else
	{
		iLocal_4667++;
	}
}

void func_249(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)
{
	vVar3 = { 7f, 0f, 0f };
	vVar6 = { -7f, 0f, 0f };
	vVar9 = { 0f, 7f, 0f };
	vVar12 = { 0f, -7f, 0f };
	if (uParam1->f_201 > 0 && uParam0->f_45)
	{
		if (!unk_0x20906E1D6BDC7044(uParam1->f_31[(uParam1->f_201 - 1)]) && !uParam1->f_264[(uParam1->f_201 - 1)])
		{
			func_262(&(uParam1->f_31[(uParam1->f_201 - 1)]), uParam1);
			if (bLocal_4260)
			{
				fLocal_3520 = func_261(65f, 25f, (fLocal_3536 / 360f));
				fLocal_3536 = (fLocal_3536 + 1f);
				if (fLocal_3520 >= 25f)
				{
					if (unk_0x9F4FE516EAACCFC5(uParam1->f_304))
					{
						if (unk_0xFBB4F23D534EB790(uParam1->f_304))
						{
							unk_0x5818C8D5303DCCF8(uParam1->f_304, fLocal_3520);
						}
					}
				}
			}
		}
	}
	*uParam3 = 0;
	while (*uParam3 < uParam2->f_1161)
	{
		if ((unk_0xC844350D5D58C99A(uParam1->f_31[*uParam3]) && !uParam1->f_264[*uParam3]) && !unk_0x20906E1D6BDC7044(uParam1->f_31[*uParam3]))
		{
			if (!uParam0->f_52)
			{
				func_259(uParam1, uParam2, uParam1->f_31[*uParam3], uParam0);
			}
			vLocal_4673 = { unk_0x56E9E0FD5ACCD35D(uParam1->f_31[*uParam3]) };
			if (vLocal_4673.z > -70f)
			{
				vLocal_4673.z = (vLocal_4673.z - 0,25f);
				unk_0x37806EBF326ECEE9(uParam1->f_31[*uParam3], vLocal_4673);
				if (unk_0xC844350D5D58C99A(uParam1->f_164))
				{
					unk_0x37806EBF326ECEE9(uParam1->f_164, vLocal_4673);
				}
			}
			if (*uParam8 == 1 || *uParam8 == 3)
			{
				if (!uParam1->f_193[*uParam3] && unk_0xC844350D5D58C99A(uParam1->f_179[*uParam3]))
				{
					if ((unk_0x1C0640BA9A7327B3() - uParam1->f_186[*uParam3]) > 150)
					{
						unk_0xD65E6E13E145467B(uParam1->f_179[*uParam3], "p_cargo_chute_s_deploy", "p_cargo_chute_s", 1000f, false, false, 0, 0f, 0);
						unk_0x295ACC5727E47CB7(uParam1->f_179[*uParam3]);
						unk_0x4A4806F9D471E491(uParam1->f_179[*uParam3], true, 0);
						uParam1->f_193[*uParam3] = 1;
					}
				}
			}
			if (func_258(uParam1, *uParam3))
			{
				if (!uParam1->f_215[*uParam3])
				{
					uParam1->f_231++;
					func_396("INCREASING NUM LANDED");
					uParam1->f_215[*uParam3] = 1;
					if (unk_0xBD054C76E6F4158B(uParam1->f_369))
					{
						unk_0x51F8DBE54C75AE47(uParam1->f_369);
						unk_0x066C43E677C08D5C();
					}
					if (*uParam8 == 2 && !uParam0->f_52)
					{
						vVar0 = { unk_0x68F4C0EC296D3901(uParam1->f_31[*uParam3], true) };
						if (bLocal_4254)
						{
							unk_0xBA3209FB359D3EA4("scr_ojdg4_water_exp", vVar0, 0f, 0f, 0f, 1f, 0, 0, 0);
							func_18("WATER_EXPLOSION", &(uParam1->f_235), 0, 0, 0, 0, 0, 0);
						}
						else
						{
							unk_0xBA3209FB359D3EA4("scr_ojdg4_boat_exp", vVar0, 0f, 0f, 0f, 3f, 0, 0, 0);
							unk_0xDA55CDFB97015579(vVar0 + vVar3, 17, 1f, 0, 0, 1065353216, 0);
							unk_0xDA55CDFB97015579(vVar0 + vVar6, 26, 1f, 0, 0, 1065353216, 0);
							unk_0xDA55CDFB97015579(vVar0 + vVar9, 17, 1f, 0, 0, 1065353216, 0);
							unk_0xDA55CDFB97015579(vVar0 + vVar12, 26, 1f, 0, 0, 1065353216, 0);
							unk_0xDA55CDFB97015579(vVar0, 26, 1f, 0, 0, 1065353216, 0);
							unk_0xBA3209FB359D3EA4("scr_drug_grd_plane_exp", vVar0, 0f, 0f, 0f, 3f, 0, 0, 0);
							func_18("DRUG_TRAFFIC_AIR_EXPLOSION_MASTER", &(uParam1->f_235), 0, 0, 0, 0, 0, 0);
						}
					}
					func_253(uParam0, *uParam3, *uParam4, uParam1, uParam2, uParam6, *uParam8, uParam7, uParam5, uParam9);
					func_251(uParam1, uParam2, *uParam8, uParam0, *uParam3);
					func_250(uParam0);
					if (unk_0xC844350D5D58C99A(uParam1->f_31[*uParam3]))
					{
						unk_0x4A4806F9D471E491(uParam1->f_31[*uParam3], false, 0);
					}
				}
			}
			else if (uParam1->f_222[*uParam3])
			{
				if ((unk_0x1C0640BA9A7327B3() - uParam1->f_172[*uParam3]) > 28000)
				{
					if (!uParam1->f_215[*uParam3])
					{
						uParam1->f_200 = 0;
						func_7(uParam1, &bLocal_4542);
						func_396("TIMED OUT PACKAGE!!!");
						uParam1->f_231++;
						func_396("INCREASING NUM LANDED VIA TIME OUT CHECK");
						uParam1->f_215[*uParam3] = 1;
						uParam1->f_250[*uParam3] = 0;
						func_251(uParam1, uParam2, *uParam8, uParam0, *uParam3);
						func_250(uParam0);
					}
				}
			}
		}
		*uParam3++;
	}
}

void func_250(var uParam0)
{
	if (!iLocal_4234)
	{
		iLocal_4234 = 1;
	}
}

void func_251(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4)
{
	bVar0 = false;
	if ((uParam0->f_215[iParam4] && !uParam0->f_264[iParam4]) && !uParam0->f_250[iParam4])
	{
		if (func_221(&(uParam1->f_1161), &(uParam0->f_231)) == 0 || func_220(uParam0, uParam1))
		{
			bVar0 = true;
			unk_0x5CEB4DB888A62073(false);
			sVar1 = func_219(uParam3, uParam1, uParam0, 0);
		}
		if (iParam2 == 2 && uParam0->f_234 != 0)
		{
			func_215(uParam0, uParam0->f_31[iParam4], iParam4, 0, !bLocal_4546);
		}
		if (uParam3->f_36)
		{
			func_252(uParam0, &uLocal_4576, &iLocal_4577);
		}
		uParam0->f_257[iParam4] = 1;
		uParam0->f_264[iParam4] = 1;
		func_284(uParam0->f_165[iParam4]);
		unk_0x790015DC92C918E2();
		if (bVar0)
		{
			if (func_286())
			{
				func_214(Local_4345, "ARMSAUD", sVar1, 0);
			}
			else
			{
				func_22(&Local_4345, "ARMSAUD", sVar1, 9, 0, 0, 0);
			}
		}
		else if (uParam3->f_52 && iLocal_4252)
		{
			if (iLocal_4259)
			{
				func_173("DTRFAIR_HELPL", -1);
				iLocal_4259 = 0;
			}
			iVar2 = (unk_0x09AC81E49EA267F7(0, 65535) % 6);
			if (iVar2 == 0)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_FMB", 9, 0, 0, 0);
				func_181("DTRFAIR_OBJCF");
			}
			else if (iVar2 == 1)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_FM2", 9, 0, 0, 0);
				func_181("DTRFAIR_OBJCF");
			}
			else if (iVar2 == 2)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_FM3", 9, 0, 0, 0);
				func_181("DTRFAIR_OBJCF");
			}
			else if (iVar2 == 3)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_FM4", 9, 0, 0, 0);
				func_181("DTRFAIR_OBJCF");
			}
			else if (iVar2 == 4)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_FM5", 9, 0, 0, 0);
				func_181("DTRFAIR_OBJCF");
			}
			else if (iVar2 == 5)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_FM6", 9, 0, 0, 0);
				func_181("DTRFAIR_OBJCF");
			}
		}
		else if (uParam3->f_52 && !iLocal_4252)
		{
			iVar2 = (unk_0x09AC81E49EA267F7(0, 65535) % 6);
			if (iVar2 == 0)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_A_FMBN", 9, 0, 0, 0);
				func_181("DTRFAIR_OBJCF");
			}
			else if (iVar2 == 1)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_A_FMB2", 9, 0, 0, 0);
				func_181("DTRFAIR_OBJCF");
			}
			else if (iVar2 == 2)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_A_FMB3", 9, 0, 0, 0);
				func_181("DTRFAIR_OBJCF");
			}
			else if (iVar2 == 3)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_A_FMB4", 9, 0, 0, 0);
				func_181("DTRFAIR_OBJCF");
			}
			else if (iVar2 == 4)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_A_FMB5", 9, 0, 0, 0);
				func_181("DTRFAIR_OBJCF");
			}
			else if (iVar2 == 5)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_A_FMB6", 9, 0, 0, 0);
				func_181("DTRFAIR_OBJCF");
			}
		}
		else if (uParam3->f_45)
		{
			iVar2 = (unk_0x09AC81E49EA267F7(0, 65535) % 6);
			if (iVar2 == 0)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_FB", 9, 0, 0, 0);
			}
			else if (iVar2 == 1)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_FB2", 9, 0, 0, 0);
			}
			else if (iVar2 == 2)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_FB3", 9, 0, 0, 0);
			}
			else if (iVar2 == 3)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_FB4", 9, 0, 0, 0);
			}
			else if (iVar2 == 4)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_FB5", 9, 0, 0, 0);
			}
			else if (iVar2 == 5)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_FB6", 9, 0, 0, 0);
			}
			func_181("DTRFAIR_OBJB");
		}
		else
		{
			iVar2 = (unk_0x09AC81E49EA267F7(0, 65535) % 6);
			if (iVar2 == 0)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_F", 9, 0, 0, 0);
			}
			else if (iVar2 == 1)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_F2", 9, 0, 0, 0);
			}
			else if (iVar2 == 2)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_F3", 9, 0, 0, 0);
			}
			else if (iVar2 == 3)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_F4", 9, 0, 0, 0);
			}
			else if (iVar2 == 4)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_F5", 9, 0, 0, 0);
			}
			else if (iVar2 == 5)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_AIR_F6", 9, 0, 0, 0);
			}
			func_181("DTRFAIR_OBJ");
		}
		func_396("PRINTING UNSUCCESSFUL DROP");
		func_396("DROP FAILED");
	}
}

void func_252(var uParam0, var uParam1, int iParam2)
{
	*uParam1 = 0;
	*iParam2 = -1;
	uParam0->f_234 = 0;
	unk_0xBFE31971E49FA500(true);
	unk_0x8BCB70EB440DED83(true);
	unk_0x9A8DDC7C522F5BF5(uParam0->f_304, 0);
	unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
	unk_0x1196C0C18BC84B0A(uParam0->f_25, 0);
}

void func_253(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9)
{
	*uParam5[iParam1] = { unk_0x68F4C0EC296D3901(uParam3->f_31[iParam1], true) };
	iParam2 = 0;
	while (iParam2 < uParam4->f_1160)
	{
		if (unk_0x437347B10A200C4B(uParam3->f_31[iParam1], 0))
		{
		}
		if (uParam3->f_272[iParam2])
		{
		}
		if (!uParam3->f_236[iParam2])
		{
			if (!uParam3->f_272[iParam2])
			{
				if (func_254(uParam0, iParam6, uParam5, uParam3, uParam4, iParam2, iParam1, uParam7, uParam8))
				{
					func_213(uParam3, uParam4, iParam6, uParam0, iParam1, iParam2, uParam8, uParam9, 1);
				}
			}
		}
		iParam2++;
	}
}

int func_254(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, var uParam7, var uParam8)
{
	vVar1 = { 3f, 0f, 0f };
	vVar4 = { -3f, 0f, 0f };
	vVar7 = { 0f, 3f, 0f };
	vVar10 = { 0f, -3f, 0f };
	if (!unk_0x437347B10A200C4B(uParam3->f_31[iParam6], 0) && !uParam0->f_37)
	{
		if (unk_0x70EED0761B82965E(uParam3->f_31[iParam6]))
		{
			func_396("Package in the water");
			return 0;
		}
	}
	switch (iParam1)
	{
		case 2:
			if (!unk_0x437347B10A200C4B(uParam3->f_312[iParam5], 0))
			{
				if (func_257(uParam4, uParam0, uParam2, uParam3, iParam5, iParam6))
				{
					bLocal_4568 = false;
					iLocal_4593 = 0;
					if (uParam0->f_37)
					{
						if (iParam5 == 0)
						{
							unk_0x12AB9E5FED384FA8(uParam3->f_312[iParam5], 1);
							unk_0x25EE9C8636FAAA17(uParam3->f_312[iParam5], 1);
							unk_0xB055A4268B938F30("scr_ojdg4_train_fire", unk_0x68F4C0EC296D3901(uParam3->f_312[iParam5], true), 0f, 0f, 0f, 3f, 0, 0, 0, 0);
							unk_0x12AB9E5FED384FA8(unk_0x5466F584D98DBA09(uParam3->f_312[iParam5], 1), 1);
							unk_0x25EE9C8636FAAA17(unk_0x5466F584D98DBA09(uParam3->f_312[iParam5], 1), 1);
							unk_0x12AB9E5FED384FA8(unk_0x5466F584D98DBA09(uParam3->f_312[iParam5], 2), 1);
							unk_0x25EE9C8636FAAA17(unk_0x5466F584D98DBA09(uParam3->f_312[iParam5], 2), 1);
							unk_0x12AB9E5FED384FA8(unk_0x5466F584D98DBA09(uParam3->f_312[iParam5], 3), 1);
							unk_0x25EE9C8636FAAA17(unk_0x5466F584D98DBA09(uParam3->f_312[iParam5], 3), 1);
							unk_0x12AB9E5FED384FA8(unk_0x5466F584D98DBA09(uParam3->f_312[iParam5], 4), 1);
							unk_0x25EE9C8636FAAA17(unk_0x5466F584D98DBA09(uParam3->f_312[iParam5], 4), 1);
							if (iLocal_4528 == 0)
							{
								vVar13 = { unk_0x68F4C0EC296D3901(unk_0x5466F584D98DBA09(uParam3->f_312[iParam5], 0), true) };
								unk_0xDA55CDFB97015579(vVar13 + vVar1, 26, 0,5f, 1, 0, 1065353216, 0);
								unk_0xDA55CDFB97015579(vVar13 + vVar4, 26, 0,5f, 1, 0, 1065353216, 0);
								unk_0xDA55CDFB97015579(vVar13 + vVar7, 26, 0,5f, 1, 0, 1065353216, 0);
								unk_0xBA3209FB359D3EA4("scr_drug_grd_plane_exp", vVar13, 0f, 0f, 0f, 3f, 0, 0, 0);
								unk_0xB055A4268B938F30("scr_ojdg4_train_fire", vVar13, 0f, 0f, 0f, 3f, 0, 0, 0, 0);
							}
							else if (iLocal_4528 == 1)
							{
								vVar13 = { unk_0x68F4C0EC296D3901(unk_0x5466F584D98DBA09(uParam3->f_312[iParam5], 1), true) };
								unk_0xDA55CDFB97015579(vVar13 + vVar1, 26, 0,5f, 1, 0, 1065353216, 0);
								unk_0xDA55CDFB97015579(vVar13 + vVar4, 26, 0,5f, 1, 0, 1065353216, 0);
								unk_0xDA55CDFB97015579(vVar13 + vVar7, 26, 0,5f, 1, 0, 1065353216, 0);
								unk_0xBA3209FB359D3EA4("scr_drug_grd_plane_exp", vVar13, 0f, 0f, 0f, 3f, 0, 0, 0);
								unk_0xB055A4268B938F30("scr_ojdg4_train_fire", vVar13, 0f, 0f, 0f, 3f, 0, 0, 0, 0);
							}
							else if (iLocal_4528 == 2)
							{
								vVar13 = { unk_0x68F4C0EC296D3901(unk_0x5466F584D98DBA09(uParam3->f_312[iParam5], 2), true) };
								unk_0xDA55CDFB97015579(vVar13 + vVar1, 26, 0,5f, 1, 0, 1065353216, 0);
								unk_0xDA55CDFB97015579(vVar13 + vVar4, 26, 0,5f, 1, 0, 1065353216, 0);
								unk_0xDA55CDFB97015579(vVar13 + vVar7, 26, 0,5f, 1, 0, 1065353216, 0);
								unk_0xBA3209FB359D3EA4("scr_drug_grd_plane_exp", vVar13, 0f, 0f, 0f, 3f, 0, 0, 0);
								unk_0xB055A4268B938F30("scr_ojdg4_train_fire", vVar13, 0f, 0f, 0f, 3f, 0, 0, 0, 0);
							}
							else if (iLocal_4528 == 3)
							{
								vVar13 = { unk_0x68F4C0EC296D3901(unk_0x5466F584D98DBA09(uParam3->f_312[iParam5], 3), true) };
								unk_0xDA55CDFB97015579(vVar13 + vVar1, 26, 0,5f, 1, 0, 1065353216, 0);
								unk_0xDA55CDFB97015579(vVar13 + vVar4, 26, 0,5f, 1, 0, 1065353216, 0);
								unk_0xDA55CDFB97015579(vVar13 + vVar7, 26, 0,5f, 1, 0, 1065353216, 0);
								unk_0xBA3209FB359D3EA4("scr_drug_grd_plane_exp", vVar13, 0f, 0f, 0f, 3f, 0, 0, 0);
								unk_0xB055A4268B938F30("scr_ojdg4_train_fire", vVar13, 0f, 0f, 0f, 3f, 0, 0, 0, 0);
							}
							else if (iLocal_4528 == 4)
							{
								vVar13 = { unk_0x68F4C0EC296D3901(unk_0x5466F584D98DBA09(uParam3->f_312[iParam5], 4), true) };
								unk_0xDA55CDFB97015579(vVar13 + vVar1, 26, 0,5f, 1, 0, 1065353216, 0);
								unk_0xDA55CDFB97015579(vVar13 + vVar4, 26, 0,5f, 1, 0, 1065353216, 0);
								unk_0xDA55CDFB97015579(vVar13 + vVar7, 26, 0,5f, 1, 0, 1065353216, 0);
								unk_0xBA3209FB359D3EA4("scr_drug_grd_plane_exp", vVar13, 0f, 0f, 0f, 3f, 0, 0, 0);
								unk_0xB055A4268B938F30("scr_ojdg4_train_fire", vVar13, 0f, 0f, 0f, 3f, 0, 0, 0, 0);
							}
							vVar16 = { unk_0x68F4C0EC296D3901(unk_0x5466F584D98DBA09(uParam3->f_312[iParam5], 4), true) };
							unk_0xDA55CDFB97015579(vVar16 + vVar7, 26, 0,5f, 1, 0, 1065353216, 0);
							unk_0x5D6C12CA95187FB3(uParam3->f_312[iParam5], 0f);
							unk_0x0DC87D17DC2658DC(uParam3->f_312[iParam5], 1, 0);
						}
						else if (iParam5 == 1)
						{
							unk_0x0DC87D17DC2658DC(uParam3->f_312[iParam5], 1, 0);
							iVar0 = 0;
							while (iVar0 < 4)
							{
								if (!unk_0x437347B10A200C4B(uParam3->f_322[iVar0], 0))
								{
									unk_0xB055A4268B938F30("scr_ojdg4_boat_wreck_fire", unk_0x68F4C0EC296D3901(uParam3->f_322[iVar0], true), 0f, 0f, 0f, 3f, 0, 0, 0, 0);
									unk_0x0DC87D17DC2658DC(uParam3->f_322[iVar0], 1, 0);
									unk_0xE7ACFBAADCCAEDB4(uParam3->f_322[iVar0], 1);
								}
								iVar0++;
							}
							vVar16 = { unk_0x68F4C0EC296D3901(uParam3->f_322[2], true) };
							unk_0xDA55CDFB97015579(vVar16 + vVar7, 26, 0,5f, 1, 0, 1065353216, 0);
						}
					}
					else
					{
						vVar16 = { uParam4->f_51[iParam5].f_107 };
						unk_0xBA3209FB359D3EA4("scr_drug_grd_plane_exp", vVar16, 0f, 0f, 0f, 3f, 0, 0, 0);
						if (!uParam0->f_52)
						{
							unk_0xBA3209FB359D3EA4("scr_drug_grd_plane_exp", vVar16 + vVar1, 0f, 0f, 0f, 3f, 0, 0, 0);
							unk_0xBA3209FB359D3EA4("scr_drug_grd_plane_exp", vVar16 + vVar4, 0f, 0f, 0f, 3f, 0, 0, 0);
							unk_0xBA3209FB359D3EA4("scr_drug_grd_plane_exp", vVar16 + vVar7, 0f, 0f, 0f, 3f, 0, 0, 0);
							unk_0xBA3209FB359D3EA4("scr_drug_grd_plane_exp", vVar16 + vVar10, 0f, 0f, 0f, 3f, 0, 0, 0);
						}
						if (uParam0->f_34)
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (unk_0xC844350D5D58C99A(Local_4614[iParam5][iVar0]) && !unk_0x437347B10A200C4B(Local_4614[iParam5][iVar0], 0))
								{
									vVar19 = { unk_0x68F4C0EC296D3901(Local_4614[iParam5][iVar0], true) };
									unk_0xDA55CDFB97015579(vVar19 + vVar4, 26, 0,5f, 1, 1, 1065353216, 0);
									unk_0x0DC87D17DC2658DC(Local_4614[iParam5][iVar0], 1, 0);
								}
								iVar0++;
							}
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (unk_0xC844350D5D58C99A(uParam3->f_160[iVar0]))
								{
									vVar22 = { unk_0x68F4C0EC296D3901(uParam3->f_160[iVar0], true) };
									unk_0xDA55CDFB97015579(vVar22, 26, 0,5f, 1, 1, 1065353216, 0);
								}
								iVar0++;
							}
							iVar0 = 0;
							while (iVar0 < 4)
							{
								if (!unk_0x437347B10A200C4B(Local_4631[iParam5][iVar0], 0))
								{
									unk_0xD458AC1C1D29C3B4(Local_4631[iParam5][iVar0], 0, 0);
								}
								iVar0++;
							}
						}
					}
					func_256(uParam3->f_165[iParam6], (*uParam7)[iParam5], &(uParam3->f_312[iParam5]));
					return 1;
				}
			}
			else
			{
				if (bLocal_4568 && iLocal_4569 == iParam5)
				{
					bLocal_4568 = false;
					iLocal_4593 = 0;
				}
				func_256(uParam3->f_165[iParam6], (*uParam7)[iParam5], &(uParam3->f_312[iParam5]));
				if (uParam0->f_52)
				{
					if (!func_255(iParam5, uParam3))
					{
						return 0;
					}
				}
				return 1;
			}
			break;
		
		default:
			if (uParam0->f_36)
			{
				if (iLocal_4577 == iParam5)
				{
					if (func_174(uParam3->f_312[iParam5], *uParam2[iParam6], 1) < 5f)
					{
						uParam3->f_312[iParam5] = 0;
						func_252(uParam3, &uLocal_4576, &iLocal_4577);
						func_284(uParam3->f_165[iParam6]);
						func_284((*uParam7)[iParam5]);
						return 1;
					}
				}
			}
			else if (vdist(uParam4->f_51[iParam5].f_107, *uParam2[iParam6]) < 60f)
			{
				func_284(uParam3->f_165[iParam6]);
				func_284((*uParam7)[iParam5]);
				*uParam8[iParam5] = { 0f, 0f, 0f };
				return 1;
			}
			break;
	}
	func_284(uParam3->f_165[iParam6]);
	return 0;
}

int func_255(int iParam0, var uParam1)
{
	iVar0 = 1;
	if (iParam0 == 0)
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (!unk_0x437347B10A200C4B(uParam1->f_343[iVar1], 0))
			{
				iVar0 = 0;
			}
			else
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (!unk_0x437347B10A200C4B(Local_4631[0][iVar2], 0) && !unk_0xEB6A8945D1AC98A1(Local_4631[0][iVar2]))
					{
						unk_0xD458AC1C1D29C3B4(Local_4631[0][iVar2], 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam0 == 1)
	{
		iVar1 = 3;
		while (iVar1 <= 5)
		{
			if (!unk_0x437347B10A200C4B(uParam1->f_343[iVar1], 0))
			{
				iVar0 = 0;
			}
			else
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (!unk_0x437347B10A200C4B(Local_4631[1][iVar2], 0) && !unk_0xEB6A8945D1AC98A1(Local_4631[1][iVar2]))
					{
						unk_0xD458AC1C1D29C3B4(Local_4631[1][iVar2], 0, 0);
					}
					iVar2++;
				}
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (!unk_0x437347B10A200C4B(Local_4631[3][iVar2], 0) && !unk_0xEB6A8945D1AC98A1(Local_4631[3][iVar2]))
					{
						if (iVar2 == 0 || iVar2 == 2)
						{
							unk_0xD458AC1C1D29C3B4(Local_4631[3][iVar2], 0, 0);
						}
						else
						{
							unk_0xF3268524E9BE6D6E(Local_4631[3][iVar2], unk_0x16F2683693E537C9(), 1000f, -1, 0, 0);
						}
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam0 == 2)
	{
		iVar1 = 6;
		while (iVar1 <= 8)
		{
			if (!unk_0x437347B10A200C4B(uParam1->f_343[iVar1], 0))
			{
				iVar0 = 0;
			}
			else
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (!unk_0x437347B10A200C4B(Local_4631[2][iVar2], 0) && !unk_0xEB6A8945D1AC98A1(Local_4631[2][iVar2]))
					{
						unk_0xD458AC1C1D29C3B4(Local_4631[2][iVar2], 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

void func_256(int iParam0, int iParam1, var uParam2)
{
	func_284(iParam0);
	func_284(iParam1);
	*uParam2 = 0;
}

int func_257(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	if (uParam1->f_37)
	{
		if (iParam4 == 0)
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_174(unk_0x5466F584D98DBA09(uParam3->f_312[iParam4], iVar0), *uParam2[iParam5], 1) < (25f / 1,5f))
				{
					iLocal_4528 = iVar0;
					return 1;
				}
				iVar0++;
			}
		}
		if (func_174(uParam3->f_312[iParam4], *uParam2[iParam5], 1) < 20f)
		{
			return 1;
		}
	}
	else if (!unk_0x437347B10A200C4B(uParam3->f_312[iParam4], 0))
	{
		fVar1 = vdist(uParam0->f_51[iParam4].f_107, *uParam2[iParam5]);
		fVar1 = fVar1;
		if (vdist(uParam0->f_51[iParam4].f_107, *uParam2[iParam5]) < 22f || (bLocal_4568 && iLocal_4569 == iParam4))
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

int func_258(var uParam0, int iParam1)
{
	iVar0 = 0;
	vVar1 = { unk_0x68F4C0EC296D3901(uParam0->f_31[iParam1], true) };
	fVar4 = vVar1.z;
	vVar5 = { unk_0x68F4C0EC296D3901(uParam0->f_25, true) };
	fVar8 = vVar5.z;
	if (!iLocal_3537)
	{
		if (vdist2(unk_0x68F4C0EC296D3901(uParam0->f_31[iParam1], true), unk_0x68F4C0EC296D3901(uParam0->f_25, true)) > 16f)
		{
			unk_0x20641932E5104B25(uParam0->f_25, true, 0);
			iLocal_3537 = 1;
		}
	}
	if ((unk_0xE608C809F9416F00(uParam0->f_31[iParam1]) && !unk_0x20906E1D6BDC7044(uParam0->f_31[iParam1])) && fVar4 < (fVar8 - 3f))
	{
		iVar0 = 1;
	}
	if (!iLocal_3521)
	{
		if (unk_0x9C66D99E63E8E24C(uParam0->f_31[iParam1]) == 0f && !unk_0x20906E1D6BDC7044(uParam0->f_31[iParam1]))
		{
			iVar0 = 1;
		}
	}
	else
	{
		iLocal_3521 = 0;
	}
	if (unk_0x70EED0761B82965E(uParam0->f_31[iParam1]))
	{
		iVar0 = 1;
		bLocal_4254 = true;
	}
	else
	{
		bLocal_4254 = false;
	}
	return iVar0;
}

void func_259(var uParam0, var uParam1, int iParam2, var uParam3)
{
	iLocal_4676++;
	if (iLocal_4676 > 1)
	{
		iLocal_4676 = 0;
		fLocal_4609 = (0,5f * unk_0x4B7163B4D6E4A3C2(0, 218));
		fLocal_4610 = (0,5f * unk_0x4B7163B4D6E4A3C2(0, 219));
		vLocal_4611 = { func_260(-fLocal_4609, fLocal_4610, 0f, fLocal_4677) };
	}
	if ((uParam3->f_45 && !bLocal_4251) && !bLocal_4562)
	{
		func_173("DTRFAIR_HELPK", -1);
	}
	if (unk_0xC844350D5D58C99A(iParam2) && unk_0xC844350D5D58C99A(uParam0->f_164))
	{
		if (!unk_0x437347B10A200C4B(iParam2, 0) && !unk_0x437347B10A200C4B(uParam0->f_164, 0))
		{
			unk_0xEF3C30F70D2ED135(iParam2, 1, vLocal_4611, 0, 0, 1, 0);
			unk_0xEF3C30F70D2ED135(uParam0->f_164, 1, vLocal_4611, 0, 0, 1, 0);
		}
	}
	uParam1->f_3 = uParam1->f_3;
}

Vector3 func_260(vector3 vParam0, float fParam3)
{
	fVar3 = sin(fParam3);
	fVar4 = cos(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.y = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.z = vParam0.z;
	return vVar0;
}

float func_261(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_262(var uParam0, var uParam1)
{
	vVar0 = { unk_0x835730A2D89F6093(*uParam0, 2) };
	if (!bLocal_4260)
	{
		if (vVar0.x < 79,1f)
		{
			vVar0.x = (vVar0.x + 4f);
			if (vVar0.x > 79,1f)
			{
				vVar0.x = 79,1f;
			}
			unk_0xC023D1C4BF532815(*uParam0, vVar0, 2, 1);
		}
		if (unk_0xC844350D5D58C99A(uParam1->f_164))
		{
			unk_0x4A4806F9D471E491(uParam1->f_164, false, 0);
		}
		if (unk_0x8E8B3399C8A28500())
		{
			if (unk_0xBD054C76E6F4158B(uParam1->f_369))
			{
				if (!unk_0xC844350D5D58C99A(uParam1->f_164))
				{
					uParam1->f_164 = unk_0x7707E48765093646(-1306048251, unk_0x68F4C0EC296D3901(*uParam0, true), true, true, false);
					unk_0x20641932E5104B25(uParam1->f_164, false, 0);
				}
				else
				{
					unk_0xA47B46945FF6DE74(uParam1->f_164, unk_0x68F4C0EC296D3901(*uParam0, true), 1, false, 0, 1);
					unk_0xC023D1C4BF532815(uParam1->f_164, 79,1f, vVar0.y, vVar0.z, 2, 1);
					unk_0x37806EBF326ECEE9(uParam1->f_164, unk_0x56E9E0FD5ACCD35D(*uParam0));
				}
				if (func_266(&iLocal_4261, 0,5f))
				{
					fLocal_4677 = (unk_0xD9522BA9E27E1349(uParam1->f_25) - 180f);
					if (fLocal_4677 < 0f)
					{
						fLocal_4677 = (fLocal_4677 + 360f);
					}
					uParam1->f_234 = unk_0x1C0640BA9A7327B3();
					func_265(uParam1, uParam0);
					bLocal_4260 = true;
					func_264(uParam0, uParam1);
					func_263(&(uParam1->f_164), uParam1->f_25, -1063256064);
					func_263(uParam0, uParam1->f_25, -1063256064);
					vVar0.x = 79,1f;
					unk_0xC023D1C4BF532815(*uParam0, vVar0, 2, 1);
				}
			}
		}
		vVar0.x = 79,1f;
		if (unk_0xC844350D5D58C99A(uParam1->f_164))
		{
			unk_0xA47B46945FF6DE74(uParam1->f_164, unk_0x68F4C0EC296D3901(*uParam0, true), 1, false, 0, 1);
			unk_0xC023D1C4BF532815(uParam1->f_164, vVar0, 2, 1);
		}
	}
	else
	{
		if (unk_0x9F4FE516EAACCFC5(uParam1->f_304))
		{
			if (unk_0xFBB4F23D534EB790(uParam1->f_304))
			{
				if (fLocal_3543 <= 0,2f)
				{
					fLocal_3543 = (fLocal_3543 + 0,01f);
				}
			}
		}
		vVar0.x = 79,1f;
		vVar0.y = (vVar0.y + unk_0x79833B02DBD2A244(1,5f, 1065353216));
		if (vVar0.y > 360f)
		{
			vVar0.y = (vVar0.y - 360f);
		}
		vLocal_4673 = { unk_0x56E9E0FD5ACCD35D(*uParam0) };
		if (vLocal_4673.z > -70f)
		{
			vLocal_4673.z = (vLocal_4673.z - 0,25f);
			unk_0x37806EBF326ECEE9(*uParam0, vLocal_4673);
			unk_0x37806EBF326ECEE9(uParam1->f_164, vLocal_4673);
		}
		vLocal_3538 = { vLocal_3538 };
		unk_0xC023D1C4BF532815(*uParam0, vVar0, 2, 1);
		if (unk_0xC844350D5D58C99A(uParam1->f_164))
		{
			unk_0xA47B46945FF6DE74(uParam1->f_164, unk_0x68F4C0EC296D3901(*uParam0, true), 1, false, 0, 1);
		}
	}
}

void func_263(var uParam0, int iParam1, float fParam2)
{
	fVar0 = -60f;
	if (unk_0xEE9925602B29903C(iParam1) > 150f)
	{
		fParam2 = -10f;
		fVar0 = -70f;
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		vLocal_4673 = { unk_0x56E9E0FD5ACCD35D(iParam1) };
		unk_0x61890296D3AA030F(iParam1, &uVar1, &uVar4, &vVar7, &uVar10);
	}
	vVar7 = { func_217(vVar7) };
	vLocal_4673 = { vLocal_4673 + Vector((vVar7.z * fParam2), (vVar7.y * fParam2), (vVar7.x * fParam2)) };
	if (vLocal_4673.z <= fVar0)
	{
		vLocal_4673.z = fVar0;
	}
	vLocal_3538 = { 80f, 0f, (unk_0xD9522BA9E27E1349(iParam1) + 180f) };
	if (unk_0x32B8283A77B4A240(*uParam0))
	{
		unk_0x6D7271D7307DB70C(*uParam0, 90f);
	}
	unk_0x37806EBF326ECEE9(*uParam0, vLocal_4673.x, vLocal_4673.y, vLocal_4673.z);
}

void func_264(var uParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(*uParam0))
	{
		unk_0x4A4806F9D471E491(*uParam0, true, 0);
		unk_0x20641932E5104B25(*uParam0, true, 0);
	}
	if (unk_0xC844350D5D58C99A(uParam1->f_164))
	{
		unk_0x4A4806F9D471E491(uParam1->f_164, false, 0);
		unk_0x20641932E5104B25(uParam1->f_164, false, 0);
	}
	unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), false, 0);
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x20641932E5104B25(unk_0x16F2683693E537C9(), false, 0);
	}
}

int func_265(var uParam0, var uParam1)
{
	unk_0x225CFE81EA219E44();
	func_8(0, 0, 30, 5, 0);
	unk_0x38C3A68D7861DCFD(0, 75, 1);
	unk_0x1196C0C18BC84B0A(uParam0->f_25, 1);
	iLocal_3521 = 1;
	unk_0x20641932E5104B25(*uParam1, false, 0);
	vVar0 = { unk_0x835730A2D89F6093(*uParam1, 2) };
	vVar0.x = 79,1f;
	unk_0xC023D1C4BF532815(*uParam1, vVar0, 2, 1);
	unk_0xC023D1C4BF532815(uParam0->f_164, vVar0, 2, 1);
	unk_0x20641932E5104B25(uParam0->f_164, false, 0);
	iLocal_3541 = 1;
	func_17(uParam0, *uParam1, 0, 0);
	unk_0x9A8DDC7C522F5BF5(uParam0->f_304, 0);
	uParam0->f_200 = 0;
	if (!unk_0x9F4FE516EAACCFC5(uParam0->f_304))
	{
		uParam0->f_304 = unk_0xAE06CCC36C49929C(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	}
	unk_0xC5940439E4EB9A33(uParam0->f_304, uParam0->f_164, 0,2402f, 1,3324f, -0,1095f, 1);
	unk_0x1305278186D1C53E(uParam0->f_304, uParam0->f_164, 0,3169f, -1,8554f, 0,1502f, 1);
	func_229(*uParam1);
	unk_0x91F5B0244AAE6222(uParam0->f_304, "ROAD_VIBRATION_SHAKE", 1f);
	unk_0x5818C8D5303DCCF8(uParam0->f_304, 65f);
	unk_0xE3BB8E05FCEB3FBE(uParam0->f_304, true);
	unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
	unk_0xBFE31971E49FA500(false);
	unk_0x8BCB70EB440DED83(false);
	fLocal_3520 = 65f;
	func_18("DRUG_TRAFFIC_AIR_BOMB_CAM_MASTER", &iLocal_3542, 1, 0, 0, 0, 0, 0);
	vVar3 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_25, 0f, 20f, 0f) };
	unk_0xE82754C349C7B581(vVar3, &fLocal_3535, 0, 0);
	unk_0x20641932E5104B25(uParam0->f_25, false, 0);
	iLocal_3537 = 0;
	return 1;
}

int func_266(int iParam0, float fParam1)
{
	if (func_49(iParam0, fParam1))
	{
		func_163(iParam0);
		return 1;
	}
	return 0;
}

int func_267(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (!uParam1->f_294)
	{
		if (Global_111638.f_19978.f_2 >= 5 && uParam3->f_52)
		{
			iVar0 = func_247(&(uParam1->f_343), vLocal_4265);
		}
		else
		{
			iVar0 = func_247(&(uParam1->f_312), vLocal_4265);
		}
		if (iVar0 != -1)
		{
			if (Global_111638.f_19978.f_2 >= 5 && uParam3->f_52)
			{
				fVar1 = func_211(uParam1->f_343[iVar0], unk_0x16F2683693E537C9(), 0);
			}
			else
			{
				fVar1 = func_211(uParam1->f_312[iVar0], unk_0x16F2683693E537C9(), 0);
			}
			switch (iParam0)
			{
				case 2:
					sVar2 = "DTRFAIR_HELPB";
					break;
				
				case 1:
				case 3:
					sVar2 = "DTRFAIR_DPCG";
					break;
			}
			if (uParam3->f_35)
			{
				sVar2 = "DTRFAIR_LOCK";
			}
			switch (iLocal_4570)
			{
				case 0:
					if (fVar1 < 500f)
					{
						if (uParam3->f_52)
						{
							unk_0x411CC4F26F6C1C2E(uParam2->f_7);
							bLocal_4237 = true;
							func_18("DRUG_TRAFFIC_AIR_BAY_DOOR_OPEN_MASTER", &(uParam1->f_235), 0, uParam2->f_7, 0, 0, 0, 0);
						}
						if (!uParam3->f_51)
						{
							uParam1->f_293 = 1;
						}
						if (Global_111638.f_19978.f_2 == 2)
						{
							unk_0xC92DB9682A650680("OJDA3_HATCH");
						}
						iLocal_4570 = 1;
					}
					break;
				
				case 1:
					if (fVar1 < 200f)
					{
						iLocal_4570 = 2;
					}
					else if (uParam1->f_200)
					{
						if (unk_0x8FA469D9C5F1A01F())
						{
							unk_0xA37A90C62806D848(1);
						}
						func_173("DTRFAIR_TGTS", -1);
						iLocal_4570 = 2;
					}
					break;
				
				case 2:
					if (fVar1 < 200f)
					{
						if (uParam1->f_232 == 0)
						{
							if (unk_0x8FA469D9C5F1A01F())
							{
								unk_0xA37A90C62806D848(1);
							}
							func_173(sVar2, -1);
						}
						iLocal_4570 = 3;
					}
					break;
				}
			}
	}
	return 0;
}

int func_268()
{
	if (unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_269(var uParam0, var uParam1, int iParam2)
{
	if (iLocal_4535)
	{
		return;
	}
	if (!func_276(uParam1))
	{
		return;
	}
	if (!iLocal_3541 && !bLocal_4567)
	{
		if (uParam1->f_232 == uParam1->f_202)
		{
			return;
		}
	}
	fVar1 = -4f;
	bVar2 = false;
	if (!func_52(&(uParam1->f_203)))
	{
		bVar2 = true;
	}
	else
	{
		if (func_50(&(uParam1->f_203)) > 1,7f)
		{
			bVar2 = true;
		}
		if (func_50(&(uParam1->f_203)) > 1f && (iLocal_3541 || bLocal_4567))
		{
			bVar2 = true;
		}
	}
	if (uParam1->f_233 != 0)
	{
		bVar2 = false;
	}
	if (iLocal_4668 == 0)
	{
		if (iLocal_3541 || bLocal_4567)
		{
			if (func_216(&uLocal_3522, uParam1->f_25, 1117126656) || func_275(uParam1))
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "DRUG_TRAFFIC_AIR_BOMB_DROP_ERROR_MASTER", 0, true);
				unk_0xA37A90C62806D848(1);
				if (!unk_0x437347B10A200C4B(uParam1->f_25, 0))
				{
					vVar3 = { unk_0x835730A2D89F6093(uParam1->f_25, 2) };
					unk_0xC023D1C4BF532815(uParam1->f_25, 0f, 0f, vVar3.z, 2, 1);
				}
				if (unk_0xBD054C76E6F4158B(uParam1->f_369))
				{
					unk_0x51F8DBE54C75AE47(uParam1->f_369);
					unk_0x066C43E677C08D5C();
				}
				if (bLocal_4567)
				{
					func_227(uParam1, uParam1->f_31[(uParam1->f_201 - 1)], 0);
				}
				bLocal_4251 = true;
				bLocal_4567 = false;
				unk_0x066C43E677C08D5C();
				if (iLocal_3541)
				{
					func_215(uParam1, uParam1->f_31[(uParam1->f_232 - 1)], (uParam1->f_232 - 1), 0, 0);
				}
				return;
			}
		}
	}
	if (bVar2)
	{
		if (unk_0xDF1306B443CD3D15(uParam1->f_25, 0) && !unk_0x437347B10A200C4B(uParam1->f_25, 0))
		{
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), uParam1->f_25, 0))
			{
				if (unk_0xBFC0798A6E3417F9(0, 114) || iLocal_4241)
				{
					func_273(uParam1, uParam1->f_201, &(uParam1->f_25), uParam0);
					bLocal_4251 = false;
					if (uParam1->f_232 != uParam1->f_231 && (iLocal_3541 || bLocal_4567))
					{
						if (unk_0xBD054C76E6F4158B(uParam1->f_369))
						{
							unk_0x51F8DBE54C75AE47(uParam1->f_369);
						}
						bLocal_4251 = true;
						bLocal_4567 = false;
						func_215(uParam1, uParam1->f_31[(uParam1->f_232 - 1)], (uParam1->f_232 - 1), 0, 0);
						return;
					}
					if (func_238(uParam0, uParam1, Local_4345, &iLocal_4253, iParam2, iLocal_3541))
					{
						if (unk_0xC844350D5D58C99A(uParam1->f_31[uParam1->f_201]))
						{
							if (unk_0xD59B17D2DFF98E26(uParam1->f_31[uParam1->f_201]))
							{
								if (!bLocal_4251)
								{
									if (unk_0x8FA469D9C5F1A01F())
									{
										unk_0xA37A90C62806D848(1);
									}
									if (!bLocal_4237)
									{
										if (!unk_0x437347B10A200C4B(uParam1->f_25, 0))
										{
											unk_0x411CC4F26F6C1C2E(uParam1->f_25);
											bLocal_4237 = true;
											func_18("DRUG_TRAFFIC_AIR_BAY_DOOR_OPEN_MASTER", &(uParam1->f_235), 0, uParam1->f_25, 0, 0, 0, 0);
											settimera(0);
											iLocal_4241 = 1;
										}
									}
									if (iLocal_4241)
									{
										if (timera() > 500)
										{
											iLocal_4241 = 0;
											func_270(uParam0, uParam1, iParam2, &fVar1, iVar0);
										}
									}
									else
									{
										func_270(uParam0, uParam1, iParam2, &fVar1, iVar0);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_4668 > 10)
	{
		iLocal_4668 = 0;
	}
	else
	{
		iLocal_4668++;
	}
}

void func_270(var uParam0, var uParam1, int iParam2, float fParam3, int iParam4)
{
	uParam1->f_298 = 1;
	if (!uParam0->f_52)
	{
		if (iParam2 == 2)
		{
			*fParam3 = -16f;
			if (!func_216(&uLocal_3522, uParam1->f_25, 1117126656) && !func_275(uParam1))
			{
				bLocal_4546 = false;
				func_180(&iLocal_4261);
			}
			else
			{
				bLocal_4546 = true;
			}
		}
		else if (uParam1->f_200)
		{
			uParam1->f_200 = 0;
			func_7(uParam1, &bLocal_4542);
		}
	}
	else
	{
		if (iLocal_4566)
		{
			return;
		}
		bLocal_4567 = false;
		if (!func_216(&uLocal_3522, uParam1->f_25, 1117126656) && !func_275(uParam1))
		{
			bLocal_4567 = true;
		}
		iLocal_4566 = 1;
		iLocal_4593 = 0;
	}
	if (uParam0->f_52)
	{
	}
	else
	{
		iParam4 = uParam1->f_201;
		if (unk_0xC844350D5D58C99A(uParam1->f_31[iParam4]))
		{
			unk_0x4A4806F9D471E491(uParam1->f_31[iParam4], true, 0);
			unk_0x20641932E5104B25(uParam1->f_31[iParam4], true, 0);
		}
		if (unk_0xC844350D5D58C99A(uParam1->f_164))
		{
			unk_0x4A4806F9D471E491(uParam1->f_164, false, 0);
			unk_0x20641932E5104B25(uParam1->f_164, false, 0);
		}
		func_236(&(uParam1->f_31[iParam4]), uParam1->f_25, &(uParam1->f_235), 1, *fParam3);
		if (!uParam0->f_45)
		{
			func_272(&(uParam1->f_179[iParam4]), uParam1->f_31[iParam4], &(uParam1->f_186[iParam4]), &(uParam1->f_193[iParam4]));
		}
		if (uParam0->f_45 && !uParam0->f_52)
		{
			if (!unk_0xBD054C76E6F4158B(uParam1->f_369))
			{
				fVar6 = 200f;
				func_271(uParam1->f_31[iParam4], &vVar0, &vVar3);
				uParam1->f_369 = unk_0x372C0B8361DDE4D6(vVar0, vVar3, fVar6, 12, 127);
			}
		}
		if (!unk_0xE4EDC4B0E92C078B(uParam1->f_165[iParam4]) && !uParam0->f_52)
		{
			uParam1->f_165[iParam4] = unk_0x5C3B41825F6AC5A0(uParam1->f_31[iParam4]);
			unk_0x61755AC17D8F538E(uParam1->f_165[iParam4], 2);
			unk_0x516E63E474722206(uParam1->f_165[iParam4], 0,75f);
		}
	}
	if (unk_0xC844350D5D58C99A(uParam1->f_164))
	{
		if (unk_0xC844350D5D58C99A(uParam1->f_31[0]))
		{
		}
	}
	uParam1->f_232++;
	uParam1->f_222[uParam1->f_201] = 1;
	uParam1->f_172[uParam1->f_201] = unk_0x1C0640BA9A7327B3();
	if (!func_52(&(uParam1->f_203)))
	{
		func_180(&(uParam1->f_203));
	}
	else
	{
		func_46(&(uParam1->f_203));
	}
	if (func_52(&(uParam1->f_212)))
	{
		func_46(&(uParam1->f_212));
	}
	func_396("DROPPED PACKAGE");
	uParam1->f_201++;
}

void func_271(int iParam0, var uParam1, var uParam2)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return;
	}
	*uParam1 = { unk_0x68F4C0EC296D3901(iParam0, true) + Vector(0,5f, 0,5f, 0,5f) * vLocal_4673 };
	unk_0xF49D1BC9EF1C3EF4(*uParam1, vLocal_4673);
	*uParam2 = { -80f, 0f, (unk_0xD9522BA9E27E1349(iParam0) + 180f) };
	*uParam2 = { (-sin(uParam2->f_2) * cos(*uParam2)), (cos(uParam2->f_2) * cos(*uParam2)), sin(*uParam2) };
}

void func_272(var uParam0, int iParam1, var uParam2, var uParam3)
{
	vVar0 = { unk_0x68F4C0EC296D3901(iParam1, true) };
	*uParam0 = unk_0x7707E48765093646(iLocal_4663, vVar0, true, true, false);
	unk_0x4A4806F9D471E491(*uParam0, false, 0);
	*uParam2 = unk_0x1C0640BA9A7327B3();
	*uParam3 = 0;
	unk_0x9F528B1B53FBC5D9(*uParam0, iParam1, 0, vLocal_4664, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
}

void func_273(var uParam0, int iParam1, var uParam2, var uParam3)
{
	if (uParam3->f_52)
	{
		if (iParam1 == 0)
		{
			if (!iLocal_4554[0])
			{
				func_274(uParam0, iParam1, uParam2);
				iLocal_4554[0] = 1;
			}
		}
		else if (iParam1 == 1)
		{
			if (!iLocal_4554[1])
			{
				func_274(uParam0, iParam1, uParam2);
				iLocal_4554[1] = 1;
			}
		}
		else if (iParam1 == 2)
		{
			if (!iLocal_4554[2])
			{
				func_274(uParam0, iParam1, uParam2);
				iLocal_4554[2] = 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (!iLocal_4554[3])
			{
				func_274(uParam0, iParam1, uParam2);
				iLocal_4554[3] = 1;
			}
		}
	}
}

void func_274(var uParam0, int iParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x437347B10A200C4B(*uParam2, 0))
		{
			uParam0->f_38[iParam1][iVar0] = unk_0x7707E48765093646(iLocal_4662, unk_0x68F4C0EC296D3901(*uParam2, true), true, true, false);
			unk_0xD0C5FAC38659B26F(uParam0->f_38[iParam1][iVar0], 1);
			unk_0x25BD67336EA4AECE(uParam0->f_38[iParam1][iVar0], 1000);
			if ((iVar0 % 2) == 0)
			{
				vLocal_4597.z = (vLocal_4597.z - 0,001f);
				vLocal_4597.y = (vLocal_4597.y - 0,001f);
				unk_0x9F528B1B53FBC5D9(uParam0->f_38[iParam1][iVar0], *uParam2, 0, vLocal_4597, 0f, 0f, 180f, 0, 0, 0, 0, 2, 1);
			}
			else
			{
				vLocal_4594.z = (vLocal_4594.z - 0,001f);
				vLocal_4594.y = (vLocal_4594.y - 0,001f);
				unk_0x9F528B1B53FBC5D9(uParam0->f_38[iParam1][iVar0], *uParam2, 0, vLocal_4594, 0f, 0f, 180f, 0, 0, 0, 0, 2, 1);
			}
		}
		iVar0++;
	}
}

int func_275(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_25, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(uParam0->f_25, true) };
	}
	unk_0xE82754C349C7B581(vVar0, &fVar3, 0, 0);
	if (unk_0x755FF954DAE327E1((vVar0.z - fVar3)) < 23f)
	{
		bLocal_4562 = true;
		return 1;
	}
	bLocal_4562 = false;
	return 0;
}

int func_276(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_25, 0))
	{
		if ((unk_0xCE563465D2227DD6(uParam0->f_25) < -150f || unk_0xCE563465D2227DD6(uParam0->f_25) > 150f) || (unk_0x81FFFF2E58A35803(uParam0->f_25) < -150f || unk_0x81FFFF2E58A35803(uParam0->f_25) > 150f))
		{
			return 0;
		}
	}
	return 1;
}

void func_277(char* sParam0, int iParam1, int iParam2)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam2);
}

void func_278(var uParam0, var uParam1, var uParam2)
{
	if (!iLocal_4550)
	{
		if (!unk_0x437347B10A200C4B(uParam0->f_7, 0))
		{
			if (unk_0xE934758D273C899A(uParam0->f_7))
			{
				if (Global_111638.f_19978.f_2 >= 5)
				{
					if (*uParam2)
					{
						if (uParam1->f_37)
						{
							unk_0xC92DB9682A650680("OJDA4_AIRBORNE");
							iLocal_4550 = 1;
						}
						else
						{
							unk_0xC92DB9682A650680("OJDA3_AIRBORNE");
							iLocal_4550 = 1;
						}
					}
					else
					{
						unk_0xC92DB9682A650680("OJDA2_AIRBORNE");
						iLocal_4550 = 1;
					}
				}
				switch (Global_111638.f_19978.f_2)
				{
					case 0:
						unk_0xC92DB9682A650680("OJDA1_AIRBORNE");
						iLocal_4550 = 1;
						break;
					
					case 1:
						unk_0xC92DB9682A650680("OJDA2_AIRBORNE");
						iLocal_4550 = 1;
						break;
					
					case 2:
						unk_0xC92DB9682A650680("OJDA3_AIRBORNE");
						iLocal_4550 = 1;
						break;
					
					case 3:
						unk_0xC92DB9682A650680("OJDA4_AIRBORNE");
						iLocal_4550 = 1;
						break;
					
					case 4:
						unk_0xC92DB9682A650680("OJDA5_AIRBORNE");
						iLocal_4550 = 1;
						break;
					}
				}
			}
	}
}

void func_279(var uParam0)
{
	if (uParam0->f_370)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if ((!uParam0->f_329[iVar0] && unk_0xC844350D5D58C99A(uParam0->f_322[iVar0])) && unk_0x437347B10A200C4B(uParam0->f_322[iVar0], 0))
			{
				unk_0x1E9649458B15960F(uParam0->f_322[iVar0], true);
				uParam0->f_329[iVar0] = 1;
			}
			iVar0++;
		}
		if ((!uParam0->f_317[1] && unk_0xC844350D5D58C99A(uParam0->f_312[1])) && unk_0x437347B10A200C4B(uParam0->f_312[1], 0))
		{
			unk_0x1E9649458B15960F(uParam0->f_312[1], true);
			uParam0->f_317[1] = 1;
		}
	}
}

Vector3 func_280(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	vVar2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	*uParam1[0] = { *uParam1[0] };
	vVar5 = { 0f, 0f, 0f };
	if (bParam3)
	{
		iVar0 = func_247(uParam2, vVar2);
		if (iVar0 != -1)
		{
			vVar5 = { unk_0x68F4C0EC296D3901((*uParam2)[iVar0], true) };
		}
	}
	else
	{
		iVar0 = func_176(uParam1, vVar2, 0);
		if (iVar0 != -1)
		{
			vVar5 = { *uParam1[iVar0] };
		}
	}
	if (iVar0 != -1)
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (unk_0xE4EDC4B0E92C078B((*uParam0)[iVar1]))
			{
				if (iVar1 == iVar0)
				{
					unk_0x516E63E474722206((*uParam0)[iVar1], 1f);
				}
				else
				{
					unk_0x516E63E474722206((*uParam0)[iVar1], 0,75f);
				}
			}
			iVar1++;
		}
	}
	return vVar5;
}

void func_281(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	iVar1 = func_176(uParam2, *uParam5, 0);
	if (unk_0x0EB28750412C3A5A(*uParam5, *uParam2[iVar1], true) < 500f)
	{
		if (!bLocal_4237)
		{
			if (!unk_0x437347B10A200C4B(uParam3->f_7, 0))
			{
				unk_0x411CC4F26F6C1C2E(uParam3->f_7);
				bLocal_4237 = true;
				func_18("DRUG_TRAFFIC_AIR_BAY_DOOR_OPEN_MASTER", &(uParam4->f_235), 0, uParam3->f_7, 0, 0, 0, 0);
			}
		}
	}
	else if (uParam4->f_298)
	{
		if (!func_52(&(uParam4->f_212)))
		{
			func_180(&(uParam4->f_212));
		}
		else
		{
			func_52(&(uParam4->f_212));
			fLocal_4244 = func_50(&(uParam4->f_212));
			if (fLocal_4244 > 3f)
			{
				if (bLocal_4237)
				{
					if (!unk_0x437347B10A200C4B(uParam3->f_7, 0))
					{
						unk_0x33928F9E4C12F0F1(uParam3->f_7);
						func_18("DRUG_TRAFFIC_AIR_BAY_DOOR_OPEN_MASTER", &(uParam4->f_235), 0, uParam3->f_7, 0, 0, 0, 0);
						bLocal_4237 = false;
						uParam4->f_298 = 0;
						fLocal_4244 = 0f;
						func_46(&(uParam4->f_212));
					}
				}
			}
		}
	}
	else if (bLocal_4237 && !iLocal_4241)
	{
		if (!unk_0x437347B10A200C4B(uParam3->f_7, 0))
		{
			unk_0x33928F9E4C12F0F1(uParam3->f_7);
			func_18("DRUG_TRAFFIC_AIR_BAY_DOOR_OPEN_MASTER", &(uParam4->f_235), 0, uParam3->f_7, 0, 0, 0, 0);
			bLocal_4237 = false;
		}
	}
	iVar0 = 0;
	while (iVar0 < uParam3->f_1160)
	{
		if (!uParam4->f_236[iVar0])
		{
			if (uParam0->f_37)
			{
				if (iVar0 == 0)
				{
					if (!unk_0x437347B10A200C4B(uParam4->f_312[0], 0))
					{
						*uParam2[0] = { unk_0x68F4C0EC296D3901(uParam4->f_312[0], true) };
					}
				}
				else if (iVar0 == 1)
				{
					*uParam2[1] = { -1992,456f, 4764,294f, 0f };
				}
			}
			if (!uParam4->f_286[iVar0])
			{
				if (iVar0 == iVar1)
				{
					if (unk_0xE4EDC4B0E92C078B((*uParam1)[iVar0]))
					{
						unk_0x516E63E474722206((*uParam1)[iVar0], 1f);
					}
				}
				else if (unk_0xE4EDC4B0E92C078B((*uParam1)[iVar0]))
				{
					unk_0x516E63E474722206((*uParam1)[iVar0], 0,75f);
				}
			}
			if (!uParam0->f_37)
			{
				if (unk_0x0EB28750412C3A5A(*uParam5, *uParam2[iVar0], false) < fLocal_4245)
				{
					if (!uParam4->f_286[iVar0] || !unk_0xE4EDC4B0E92C078B((*uParam1)[iVar0]))
					{
						func_282(uParam4, uParam6);
						uParam4->f_286[iVar0] = 1;
						unk_0x142CC44DB769B57E(uParam1[iVar0]);
						if (uParam0->f_45)
						{
							(*uParam1)[iVar0] = unk_0x3F3860E60C44719E(*uParam2[iVar0], 27f);
							unk_0xDC5B2F9D0CCE3A10((*uParam1)[iVar0], "DTRFAIR_TGT");
							unk_0x61755AC17D8F538E((*uParam1)[iVar0], 1);
						}
						else
						{
							(*uParam1)[iVar0] = unk_0x3F3860E60C44719E(*uParam2[iVar0], 60f);
							unk_0xDC5B2F9D0CCE3A10((*uParam1)[iVar0], "DTRFAIR_DRP");
							unk_0x61755AC17D8F538E((*uParam1)[iVar0], 5);
						}
						unk_0x7F010F50CE03A8AF((*uParam1)[iVar0], 255);
						func_396("ADDING IN RADIUS BLIP");
					}
				}
				else if (uParam4->f_286[iVar0] || !unk_0xE4EDC4B0E92C078B((*uParam1)[iVar0]))
				{
					uParam4->f_286[iVar0] = 0;
					unk_0x142CC44DB769B57E(uParam1[iVar0]);
					(*uParam1)[iVar0] = unk_0x6CC513A908911CF0(*uParam2[iVar0]);
					if (uParam0->f_45)
					{
						unk_0x61755AC17D8F538E((*uParam1)[iVar0], 1);
						unk_0xDC5B2F9D0CCE3A10((*uParam1)[iVar0], "DTRFAIR_TGT");
					}
					else
					{
						unk_0x61755AC17D8F538E((*uParam1)[iVar0], 5);
						unk_0xDC5B2F9D0CCE3A10((*uParam1)[iVar0], "DTRFAIR_DRP");
					}
				}
			}
			else if (unk_0x0EB28750412C3A5A(*uParam5, *uParam2[0], true) < fLocal_4245)
			{
				if (!iLocal_4238)
				{
					unk_0xC92DB9682A650680("OJDA4_TRAIN");
					unk_0x13896FDECC859926("OJDA4_TRAIN_HIT");
					iLocal_4238 = 1;
				}
			}
			else if (unk_0x0EB28750412C3A5A(*uParam5, *uParam2[1], true) < fLocal_4245)
			{
				if (!iLocal_4239)
				{
					unk_0xC92DB9682A650680("OJDA4_BOATS");
					iLocal_4239 = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_282(var uParam0, var uParam1)
{
	if (Global_111638.f_19978.f_2 >= 5)
	{
		if (*uParam1)
		{
			unk_0xC92DB9682A650680("OJDA3_HATCH");
		}
		else
		{
			unk_0xC92DB9682A650680("OJDA2_READY_1ST");
		}
	}
	switch (Global_111638.f_19978.f_2)
	{
		case 0:
			if (uParam0->f_230 == 1)
			{
				unk_0xC92DB9682A650680("OJDA1_READY_2ND");
				unk_0x13896FDECC859926("OJDA1_2ND_DROPPED");
			}
			break;
		
		case 1:
			if (uParam0->f_230 == 0)
			{
				unk_0xC92DB9682A650680("OJDA2_READY_1ST");
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
}

void func_283(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	if (uParam0->f_52)
	{
		if (Global_111638.f_19978.f_2 >= 5)
		{
			if (!unk_0x437347B10A200C4B(uParam1->f_343[0], 0))
			{
				(*uParam3)[0] = unk_0x5C3B41825F6AC5A0(uParam1->f_343[0]);
				unk_0x61755AC17D8F538E((*uParam3)[0], 1);
			}
			if (!unk_0x437347B10A200C4B(uParam1->f_343[4], 0))
			{
				(*uParam3)[1] = unk_0x5C3B41825F6AC5A0(uParam1->f_343[4]);
				unk_0x61755AC17D8F538E((*uParam3)[1], 1);
			}
			if (!unk_0x437347B10A200C4B(uParam1->f_343[8], 0))
			{
				(*uParam3)[2] = unk_0x5C3B41825F6AC5A0(uParam1->f_343[8]);
				unk_0x61755AC17D8F538E((*uParam3)[2], 1);
			}
		}
		else
		{
			(*uParam3)[0] = unk_0x6CC513A908911CF0(1796,669f, 3287,469f, 41,4058f);
			unk_0x61755AC17D8F538E((*uParam3)[0], 5);
			unk_0x516E63E474722206((*uParam3)[0], 1f);
		}
	}
	if (uParam0->f_37)
	{
		iVar0 = 0;
		while (iVar0 < uParam2->f_1160)
		{
			(*uParam3)[iVar0] = unk_0x5C3B41825F6AC5A0(uParam1->f_312[iVar0]);
			unk_0x61755AC17D8F538E((*uParam3)[iVar0], 1);
			unk_0xDC5B2F9D0CCE3A10((*uParam3)[iVar0], "DTRFAIR_TGT1");
			iVar0++;
		}
	}
	else if (!uParam0->f_52)
	{
		iVar0 = 0;
		while (iVar0 < uParam2->f_1160)
		{
			if (!unk_0xE4EDC4B0E92C078B((*uParam3)[iVar0]))
			{
				(*uParam3)[iVar0] = unk_0x6CC513A908911CF0(uParam2->f_51[iVar0].f_107);
				if (uParam0->f_45)
				{
					unk_0x61755AC17D8F538E((*uParam3)[iVar0], 1);
					unk_0xDC5B2F9D0CCE3A10((*uParam3)[iVar0], "DTRFAIR_TGT");
				}
				else
				{
					unk_0x61755AC17D8F538E((*uParam3)[iVar0], 5);
					unk_0xDC5B2F9D0CCE3A10((*uParam3)[iVar0], "DTRFAIR_DRP");
				}
				*uParam4[iVar0] = { uParam2->f_51[iVar0].f_107 };
			}
			iVar0++;
		}
	}
}

void func_284(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(iParam0))
	{
		unk_0x142CC44DB769B57E(&iParam0);
	}
}

void func_285(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0);
}

int func_286()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

void func_287(var uParam0)
{
	if (!bLocal_4563)
	{
		if (unk_0x9F4FE516EAACCFC5(iLocal_4657))
		{
			if (!unk_0x437347B10A200C4B(uParam0->f_25, 0))
			{
				if (vdist(2131,708f, 4790,606f, 39,97022f, unk_0x68F4C0EC296D3901(uParam0->f_25, true)) > 20f)
				{
					settimera(0);
					if (func_268())
					{
						unk_0x82A772610883F395("CamPushInNeutral", 0, 0);
						unk_0x4D7F4CC43D4D0DE3(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						bLocal_4563 = true;
					}
					else
					{
						unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
						unk_0x9A8DDC7C522F5BF5(iLocal_4657, 0);
					}
				}
			}
		}
	}
	if (bLocal_4563)
	{
		if (timera() > 300)
		{
			if (unk_0x9F4FE516EAACCFC5(iLocal_4657))
			{
				unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
				unk_0x9A8DDC7C522F5BF5(iLocal_4657, 0);
			}
		}
	}
}

void func_288(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < uParam1->f_1160)
	{
		if (func_3(uParam1->f_51[iVar0].f_110, 0f, 0f, 0f, 0))
		{
			vVar1 = { uParam1->f_51[iVar0].f_107 };
		}
		else
		{
			vVar1 = { uParam1->f_51[iVar0].f_110 };
		}
		if (!uParam2->f_37 && !uParam2->f_52)
		{
			if (!uParam2->f_45)
			{
				vVar4 = { 1f, 0,84f, 0f };
			}
			else
			{
				vVar4 = { 0,8f, 0,18f, 0,19f };
			}
			if (!unk_0x83A8177D302E1A7E(uParam0->f_363[iVar0]))
			{
				uParam0->f_363[iVar0] = unk_0xB055A4268B938F30("scr_drug_traffic_flare_L", vVar1, 0f, 0f, 0f, 1f, 0, 0, 0, 0);
				unk_0x02D205CBD211ED4F(uParam0->f_363[iVar0], vVar4.x, vVar4.y, vVar4.z, 0);
			}
		}
		iVar0++;
	}
}

void func_289(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_290(var uParam0)
{
	func_289(&Local_4345, 3, 0, "OSCAR", 0, 1);
	func_289(&Local_4345, 2, unk_0x16F2683693E537C9(), "TREVOR", 0, 1);
	if (uParam0->f_45)
	{
		if (bLocal_3373)
		{
			iVar0 = (unk_0x09AC81E49EA267F7(0, 65535) % 3);
			if (iVar0 == 0)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_AIRB", 9, 0, 0, 0);
			}
			else if (iVar0 == 1)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_AIRB2", 9, 0, 0, 0);
			}
			else if (iVar0 == 2)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_AIRB3", 9, 0, 0, 0);
			}
		}
		else if (bLocal_3374)
		{
			iVar0 = (unk_0x09AC81E49EA267F7(0, 65535) % 3);
			if (iVar0 == 0)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_ELSAL1", 9, 0, 0, 0);
			}
			else if (iVar0 == 1)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_ELSAL2", 9, 0, 0, 0);
			}
			else if (iVar0 == 2)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_ELSAL3", 9, 0, 0, 0);
			}
		}
		else if (bLocal_3375)
		{
			iVar0 = (unk_0x09AC81E49EA267F7(0, 65535) % 3);
			if (iVar0 == 0)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_HILLB1", 9, 0, 0, 0);
			}
			else if (iVar0 == 1)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_HILLB2", 9, 0, 0, 0);
			}
			else if (iVar0 == 2)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_HILLB3", 9, 0, 0, 0);
			}
		}
	}
	else if (uParam0->f_37)
	{
		if (bLocal_3373)
		{
			iVar0 = (unk_0x09AC81E49EA267F7(0, 65535) % 3);
			if (iVar0 == 0)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_AIRT", 9, 0, 0, 0);
			}
			else if (iVar0 == 1)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_AIRT2", 9, 0, 0, 0);
			}
			else if (iVar0 == 2)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_AIRT3", 9, 0, 0, 0);
			}
		}
		else if (bLocal_3374)
		{
			iVar0 = (unk_0x09AC81E49EA267F7(0, 65535) % 3);
			if (iVar0 == 0)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_ELSALT1", 9, 0, 0, 0);
			}
			else if (iVar0 == 1)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_ELSALT2", 9, 0, 0, 0);
			}
			else if (iVar0 == 2)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_ELSALT3", 9, 0, 0, 0);
			}
		}
		else if (bLocal_3375)
		{
			iVar0 = (unk_0x09AC81E49EA267F7(0, 65535) % 3);
			if (iVar0 == 0)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_HILLBT1", 9, 0, 0, 0);
			}
			else if (iVar0 == 1)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_HILLBT2", 9, 0, 0, 0);
			}
			else if (iVar0 == 2)
			{
				func_22(&Local_4345, "ARMSAUD", "ARMS_HILLBT3", 9, 0, 0, 0);
			}
		}
	}
	else if (!func_154(uParam0->f_59))
	{
		func_289(&Local_4345, 3, 0, "OSCAR", 0, 1);
		func_289(&Local_4345, 2, unk_0x16F2683693E537C9(), "TREVOR", 0, 1);
		func_22(&Local_4345, "ARMSAUD", uParam0->f_59, 9, 0, 0, 0);
	}
}

void func_291()
{
	Global_19671 = 0;
	func_43();
}

void func_292(var uParam0, var uParam1)
{
	if (Global_111638.f_19978.f_2 >= 5)
	{
		if (*uParam0)
		{
			if (uParam1->f_37)
			{
				unk_0xC92DB9682A650680("OJDA4_START");
			}
			else
			{
				unk_0xC92DB9682A650680("OJDA3_START");
			}
		}
		else
		{
			unk_0xC92DB9682A650680("OJDA2_START");
		}
	}
	switch (Global_111638.f_19978.f_2)
	{
		case 0:
			unk_0xC92DB9682A650680("OJDA1_START");
			break;
		
		case 1:
			unk_0xC92DB9682A650680("OJDA2_START");
			break;
		
		case 2:
			unk_0xC92DB9682A650680("OJDA3_START");
			break;
		
		case 3:
			unk_0xC92DB9682A650680("OJDA4_START");
			break;
		
		case 4:
			unk_0xC92DB9682A650680("OJDA5_START");
			break;
	}
}

int func_293(var uParam0, var uParam1)
{
	switch (iLocal_4529)
	{
		case 0:
			if (!unk_0x9F4FE516EAACCFC5(iLocal_4657))
			{
				if (bLocal_4561)
				{
					func_301(0, -1, 1);
				}
				if (!unk_0x437347B10A200C4B(uParam0->f_25, 0))
				{
					unk_0x51B954DAB1BCAF73(uParam0->f_25);
				}
				unk_0x82E51BCA72537B6C(500);
				iLocal_4657 = unk_0xAE06CCC36C49929C(26379945, 2128,367f, 4834,374f, 43,0187f, 0,4794f, 0f, -174,1694f, 36,51f, 1, 2);
				unk_0x1305278186D1C53E(iLocal_4657, uParam1->f_7, 0f, 0f, 0f, 1);
				unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
				unk_0xA2071E69C1AE8451(iLocal_4657, 1);
				func_294(2137,12f, 4799,97f, 39,67854f, 2116,64f, 4790,417f, 45,45295f, 25f, 2140,629f, 4816,914f, 40,22365f, 193,1398f, 1, 1, 1, 0, 0);
				unk_0x28F5E4DA506AC0CA(2035,914f, 4765,766f, 40,0606f, 200f, 1, 0, 0, 0, false, 0);
				iLocal_4529 = 1;
			}
			break;
		
		case 1:
			func_287(uParam0);
			return 1;
			break;
	}
	return 0;
}

void func_294(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	func_295(vParam0, vParam3, fParam6, vParam7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}

void func_295(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, float fParam10, vector3 vParam11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
				func_300(iVar0);
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
					if (func_298(iVar0, vParam0, vParam3, fParam6))
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
				if (func_296(iVar0, func_34(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_177(vParam11))
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
							unk_0x56FDC9ADE35F7DB0(iVar0, false, true, 0);
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

int func_296(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_297(iParam1, iVar0, &sVar1, &iVar9))
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

int func_297(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_298(int iParam0, vector3 vParam1, vector3 vParam4, float fParam7)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		vParam1.z = vParam4.z;
		vVar0 = { func_217(vParam1 - vParam4) };
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
		if (((((((((((((((func_299(vVar18[0], vVar18[1], vVar6, vVar9) || func_299(vVar18[0], vVar18[1], vVar9, vVar15)) || func_299(vVar18[0], vVar18[1], vVar12, vVar15)) || func_299(vVar18[0], vVar18[1], vVar6, vVar12)) || func_299(vVar18[1], vVar18[3], vVar6, vVar9)) || func_299(vVar18[1], vVar18[3], vVar9, vVar15)) || func_299(vVar18[1], vVar18[3], vVar12, vVar15)) || func_299(vVar18[1], vVar18[3], vVar6, vVar12)) || func_299(vVar18[3], vVar18[2], vVar6, vVar9)) || func_299(vVar18[3], vVar18[2], vVar9, vVar15)) || func_299(vVar18[3], vVar18[2], vVar12, vVar15)) || func_299(vVar18[3], vVar18[2], vVar6, vVar12)) || func_299(vVar18[2], vVar18[0], vVar6, vVar9)) || func_299(vVar18[2], vVar18[0], vVar9, vVar15)) || func_299(vVar18[2], vVar18[0], vVar12, vVar15)) || func_299(vVar18[2], vVar18[0], vVar6, vVar12))
		{
			return 1;
		}
	}
	return 0;
}

int func_299(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
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

void func_300(int iParam0)
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

void func_301(int iParam0, int iParam1, int iParam2)
{
	if (func_364() && func_303())
	{
		while (Global_98739 != 6)
		{
			wait(0);
		}
		unk_0x21387C9EECC2B220(false);
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0xFE76348A7A0CEF66(unk_0x16F2683693E537C9());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xC844350D5D58C99A(iParam0))
				{
					if (unk_0xDF1306B443CD3D15(iParam0, 0))
					{
						if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam0, 0))
						{
							unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iParam0, iParam1);
							unk_0xEF6276132B396452(0f, 1065353216);
							unk_0x2FB9A57162E54BAB(0f);
							wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
			}
		}
		unk_0x17EFA7496495F972();
		func_302(0);
	}
}

void func_302(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x5D96D8530B3D0904(&(Global_98744.f_20), 13);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_98744.f_20), 13);
	}
}

bool func_303()
{
	return unk_0xEAE0D21A50E6C7F4(Global_98744.f_20, 13);
}

int func_304()
{
	if (iLocal_4787 < 3)
	{
		if (func_305(iLocal_4782))
		{
			iLocal_4787 = 3;
		}
	}
	if (!func_52(&Local_4778))
	{
		func_180(&Local_4778);
	}
	else
	{
		fVar0 = func_50(&Local_4778);
	}
	switch (iLocal_4787)
	{
		case 0:
			if (!unk_0x437347B10A200C4B(iLocal_6418, 0) && unk_0xDF1306B443CD3D15(iLocal_6418, 0))
			{
				unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
				iLocal_4782 = unk_0x1C0640BA9A7327B3();
				unk_0xA47B46945FF6DE74(iLocal_6418, vLocal_4829, 1, false, 0, 1);
				unk_0xC4C7FD0EF3FEAB0B(iLocal_6418, -0,003f, 0f, 0,2176f, 0,976f);
				unk_0x4D3C3C0B0DE2663E(iLocal_6418, 103, "AirTaxiCut", 1);
				unk_0xA9FBE21EB8701B34(iLocal_6418, 0,8f);
				unk_0xF12C1D85AFEE8FAD(iLocal_6418, 4007f);
				unk_0x1305278186D1C53E(iLocal_6388, iLocal_6418, 0f, 0f, 0f, 1);
				unk_0xC9CCB807979D3AC2(iLocal_6388, 0,5f);
				unk_0x3F803BEAA6CB36A8(iLocal_6388, 15f);
				unk_0x529EF88E1F7A182D(iLocal_6388, 0,7f);
				unk_0x91F5B0244AAE6222(iLocal_6388, "HAND_SHAKE", 0,2f);
				if (unk_0x757EF87A33649210())
				{
					unk_0x82E51BCA72537B6C(500);
				}
				iLocal_4787 = 1;
			}
			break;
		
		case 1:
			unk_0xB44EF5F9FEAB831B();
			if (fVar0 > 2f)
			{
				unk_0xA9FBE21EB8701B34(iLocal_6418, 1,3f);
			}
			if (fVar0 > 5,5f)
			{
				if (!unk_0x437347B10A200C4B(iLocal_6418, 0))
				{
					unk_0xC55F2A0377488064(iLocal_6418);
				}
				return 1;
			}
			break;
		
		case 3:
			unk_0x9A8DDC7C522F5BF5(iLocal_6389, 0);
			unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
			unk_0x2FB9A57162E54BAB(0f);
			unk_0x5CEB4DB888A62073(false);
			unk_0x790015DC92C918E2();
			if (!unk_0x437347B10A200C4B(iLocal_6418, 0))
			{
				unk_0xC55F2A0377488064(iLocal_6418);
			}
			unk_0xBFB24B9B15F6108F(unk_0x16F2683693E537C9(), vLocal_4832);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), fLocal_4835);
			iLocal_4787 = 4;
			break;
		
		case 4:
			unk_0x82E51BCA72537B6C(1000);
			while (!unk_0x0F1CCD77290EE12F())
			{
				if (!unk_0x437347B10A200C4B(iLocal_6418, 0))
				{
					unk_0x1AEF7184B203A58D(iLocal_6418, 70f);
				}
				wait(0);
			}
			return 1;
			break;
	}
	return 0;
}

int func_305(int iParam0)
{
	if (func_306() && unk_0x1C0640BA9A7327B3() >= iParam0 + 1000)
	{
		unk_0x53491B90E4FD0E56(500);
		while (!unk_0x757EF87A33649210())
		{
			wait(0);
		}
		func_144(0);
		func_291();
		return 1;
	}
	return 0;
}

int func_306()
{
	if (unk_0x798A3F1296751F46())
	{
		return 0;
	}
	if (unk_0xBFC0798A6E3417F9(0, 18) || unk_0xBFC0798A6E3417F9(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_307(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, int iParam7)
{
	*iParam4 = 1;
	if (bParam6)
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
	}
	if (unk_0x437347B10A200C4B(*iParam1, 0))
	{
		uParam2->f_7 = unk_0x122AAB0B1D6F55AD(uParam2->f_8, vLocal_4669, fLocal_4672, true, true, false);
		*iParam1 = uParam2->f_7;
		unk_0xC6A6B4DDD6DC073A(*iParam1, 2);
		unk_0xB422445CBCD0AEFB(*iParam1, false);
		unk_0xFBFE633A7F731A67(*iParam1, 1f);
		unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), *iParam1, -1);
		unk_0x2FB9A57162E54BAB(0f);
		unk_0xEF6276132B396452(0f, 1065353216);
	}
	else
	{
		uParam2->f_7 = *iParam1;
	}
	uParam3->f_370 = 0;
	switch (iParam7)
	{
		case 0:
			break;
		
		case 3:
		case 2:
		case 1:
			if (uParam5->f_37)
			{
				func_314(uParam5, uParam3, uParam2, iParam7);
			}
			else if (uParam5->f_52)
			{
				if (Global_111638.f_19978.f_2 >= 5)
				{
					func_313(uParam5, uParam3, uParam2);
				}
				else
				{
					func_312(uParam5, uParam3, uParam2);
				}
			}
			else if (!uParam5->f_35 && !(iParam7 == 2 && !uParam5->f_34))
			{
				unk_0xF63400DBE3303D26("relRivalRunners", &(uParam3->f_368));
				unk_0x0E2400AB9174FA81(5, uParam3->f_368, 1862763509);
				unk_0x0E2400AB9174FA81(5, 1862763509, uParam3->f_368);
				func_309(uParam5, uParam3, uParam2, iParam7);
			}
			iVar0 = 0;
			while (iVar0 < uParam2->f_1161)
			{
				if (unk_0xC844350D5D58C99A(*iParam1) && unk_0xDF1306B443CD3D15(*iParam1, 0))
				{
					uParam3->f_31[iVar0] = unk_0x7707E48765093646(iLocal_4662, uParam2->f_9, true, true, false);
					unk_0x4A4806F9D471E491(uParam3->f_31[iVar0], true, 0);
					unk_0xD0C5FAC38659B26F(uParam3->f_31[iVar0], 1);
					vLocal_4594.x = (vLocal_4594.x + 0,01f);
					unk_0x9F528B1B53FBC5D9(uParam3->f_31[iVar0], *iParam1, 0, vLocal_4594, 0f, 0f, 180f, 0, 0, 0, 0, 2, 1);
					func_308(&(uParam3->f_215));
				}
				iVar0++;
			}
			break;
	}
	if (iParam7 == 2 || uParam5->f_35)
	{
		iVar0 = 0;
		while (iVar0 < uParam2->f_1160)
		{
			if (!uParam5->f_34)
			{
				uParam3->f_312[iVar0] = unk_0x122AAB0B1D6F55AD(uParam2->f_1145[iVar0], uParam2->f_51[iVar0].f_110, 0, true, true, false);
				unk_0xD3421E391490133B(uParam3->f_312[iVar0], 1, true);
				uParam3->f_26[iVar0] = unk_0x852A19533F896693(uParam3->f_312[iVar0], 22, uParam2->f_1155[iVar0], -1, 1, true);
				unk_0x6DF7BF67E86AAE86(uParam3->f_26[iVar0], uParam3->f_368);
				unk_0xB9FD7450C0DAB575(uParam3->f_312[iVar0], 1084227584);
				if (!func_3(uParam5->f_16[iVar0], 0f, 0f, 0f, 0))
				{
					unk_0xDD353D0E9C789D0E(&iLocal_4530);
					unk_0xE9362E4D600DD12A(0, uParam3->f_312[iVar0], uParam5->f_16[iVar0], 10f, 0, -2137348917, 786469, 10f, 10f);
					unk_0xE072601B4380E9DF(0, uParam3->f_312[iVar0], 1f, 786469);
					unk_0x75ABDC5F81978924(iLocal_4530);
					unk_0x78ADC381772E3D54(uParam3->f_26[iVar0], iLocal_4530);
					unk_0xF82EA857DA10E0CD(&iLocal_4530);
					unk_0xE8832A9E16A57A1F(uParam3->f_312[iVar0], true, 1);
				}
				else
				{
					unk_0xE072601B4380E9DF(uParam3->f_26[iVar0], uParam3->f_312[iVar0], 10f, 786469);
					unk_0xE8832A9E16A57A1F(uParam3->f_312[iVar0], true, 1);
				}
			}
			(*uParam0)[iVar0] = uParam3->f_312[iVar0];
			iVar0++;
		}
	}
	if (!unk_0x437347B10A200C4B(uParam2->f_7, 0))
	{
		return 1;
	}
	return 0;
}

void func_308(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_309(var uParam0, var uParam1, var uParam2, int iParam3)
{
	iParam3 = iParam3;
	iVar0 = 0;
	while (iVar0 < uParam2->f_1160)
	{
		if (func_3(uParam2->f_51[iVar0].f_110, 0f, 0f, 0f, 0))
		{
			vVar2 = { uParam2->f_51[iVar0].f_107 };
		}
		else
		{
			vVar2 = { uParam2->f_51[iVar0].f_110 };
		}
		vLocal_4268 = { func_311(uParam0->f_8[iVar0], vVar2) };
		if (uParam0->f_34)
		{
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (!func_177(vLocal_4268.f_44[iVar1]))
				{
					uParam1->f_160[iVar1] = unk_0x7707E48765093646(Local_4329[iVar1], vLocal_4268.f_44[iVar1], true, true, false);
					unk_0xD8F6A53F4799FAFE(uParam1->f_160[iVar1], vLocal_4268.f_54[iVar1]);
					unk_0x25BD67336EA4AECE(uParam1->f_160[iVar1], 1000);
				}
				iVar1++;
			}
		}
		uParam1->f_307[iVar0] = unk_0x36F2404464202779(22, uParam2->f_1155[iVar0], vLocal_4268.f_22[0], vLocal_4268.f_38[0], 1, true);
		if ((!unk_0x437347B10A200C4B(uParam1->f_307[iVar0], 0) && !unk_0xEB6A8945D1AC98A1(uParam1->f_307[iVar0])) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			unk_0x262EF6C6306BEA6C(uParam1->f_307[iVar0], -1074790547, 100, true, true);
			unk_0x0C8C0C840C2D1AD2(uParam1->f_307[iVar0], unk_0x16F2683693E537C9(), -1, 0, 2);
			if (uParam0->f_45)
			{
				unk_0x6DF7BF67E86AAE86(uParam1->f_307[iVar0], uParam1->f_368);
				unk_0x11AD11297DC58CC7(uParam1->f_307[iVar0], true);
				unk_0x298903DD96203C2C(uParam1->f_307[iVar0], 0);
				unk_0x67415F01577A142E(uParam1->f_307[iVar0], 2, 200f);
				unk_0x2C4A1A0F54A166E8(uParam1->f_307[iVar0], unk_0x16F2683693E537C9(), -1, 0);
			}
		}
		if (uParam0->f_34)
		{
			iLocal_4592 = 4;
			iVar1 = 0;
			while (iVar1 < iLocal_4592)
			{
				if (uParam2->f_1155[iVar1] != 0)
				{
					Local_4631[iVar0][iVar1] = unk_0x36F2404464202779(22, uParam2->f_1155[iVar1], vLocal_4268.f_22[iVar1 + 1], vLocal_4268.f_38[iVar1 + 1], 1, true);
					if (unk_0xC844350D5D58C99A(Local_4631[iVar0][iVar1]))
					{
						unk_0x262EF6C6306BEA6C(Local_4631[iVar0][iVar1], -1074790547, 100, true, true);
						unk_0x6DF7BF67E86AAE86(Local_4631[iVar0][iVar1], uParam1->f_368);
						unk_0x5745EA6329A91E29(Local_4631[iVar0][iVar1], -1074790547, true);
						unk_0xED253B8DDB3FFB77(Local_4631[iVar0][iVar1], vLocal_4268.f_22[iVar1], 20f, 0, 0);
						unk_0x11AD11297DC58CC7(Local_4631[iVar0][iVar1], true);
						unk_0x298903DD96203C2C(Local_4631[iVar0][iVar1], 0);
						unk_0x67415F01577A142E(Local_4631[iVar0][iVar1], 2, 200f);
						unk_0x2C4A1A0F54A166E8(Local_4631[iVar0][iVar1], unk_0x16F2683693E537C9(), -1, 0);
					}
				}
				iVar1++;
			}
			if (!func_177(vLocal_4268.f_58))
			{
				iLocal_4652[iVar0] = unk_0x7707E48765093646(Local_4329.f_5[iVar0], vLocal_4268.f_58, true, true, false);
				if (unk_0xC844350D5D58C99A(iLocal_4652[iVar0]))
				{
					unk_0x25BD67336EA4AECE(iLocal_4652[iVar0], 1000);
				}
			}
		}
		if (uParam0->f_34)
		{
			uParam1->f_312[iVar0] = unk_0x122AAB0B1D6F55AD(uParam2->f_1150[iVar0], vLocal_4268[0], vLocal_4268.f_16[0], true, true, false);
			unk_0xE8832A9E16A57A1F(uParam1->f_312[iVar0], true, 1);
			unk_0xB9FD7450C0DAB575(uParam1->f_312[iVar0], 1084227584);
			unk_0x25BD67336EA4AECE(uParam1->f_312[iVar0], 1000);
			if (func_310())
			{
				unk_0x0882E3DC0C991680(uParam1->f_312[iVar0], 2);
			}
			iLocal_4592 = 3;
			iVar1 = 0;
			while (iVar1 < iLocal_4592)
			{
				if (!func_177(vLocal_4268[iVar1 + 1]))
				{
					Local_4614[iVar0][iVar1] = unk_0x122AAB0B1D6F55AD(uParam2->f_1150[iVar1], vLocal_4268[iVar1 + 1], vLocal_4268.f_16[iVar1 + 1], true, true, false);
					unk_0xB9FD7450C0DAB575(Local_4614[iVar0][iVar1], 1084227584);
					unk_0x25BD67336EA4AECE(Local_4614[iVar0][iVar1], 1000);
					if (func_310())
					{
						unk_0x0882E3DC0C991680(Local_4614[iVar0][iVar1], 2);
					}
					if (vLocal_4268.f_16[iVar1 + 1] == 0f)
					{
						unk_0xD8F6A53F4799FAFE(Local_4614[iVar0][iVar1], unk_0x79833B02DBD2A244(0f, 360f));
					}
				}
				iVar1++;
			}
		}
		else
		{
			uParam1->f_312[iVar0] = unk_0x122AAB0B1D6F55AD(uParam2->f_1145[iVar0], vLocal_4268[0], 0, true, true, false);
			unk_0xE8832A9E16A57A1F(uParam1->f_312[iVar0], true, 1);
			unk_0xB9FD7450C0DAB575(uParam1->f_312[iVar0], 1084227584);
		}
		if (uParam1->f_363[iVar0] == 0)
		{
		}
		iVar0++;
	}
}

int func_310()
{
	if (unk_0xD8A54335F18763BA() >= 20 || unk_0xD8A54335F18763BA() < 6)
	{
		return 1;
	}
	return 0;
}

struct<61> func_311(int iParam0, vector3 vParam1)
{
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_38 = 5;
	Var0.f_44 = 3;
	Var0.f_54 = 3;
	vVar74 = { 0f, 3f, 0f };
	vVar61[0] = { 4f, 6f, 0f };
	vVar61[1] = { 2f, -3f, 0f };
	vVar61[2] = { -2f, 4f, 0f };
	vVar61[3] = { 2f, -4f, 0f };
	vVar77 = { -3f, -3f, 0f };
	vVar80 = { 3f, -6f, 0f };
	vVar83 = { 6f, 10f, 0f };
	switch (iParam0)
	{
		case 20:
			Var0.f_22[0] = { 1363,834f, 4335,604f, 38,4631f };
			Var0.f_22[1] = { 1354,157f, 4340,766f, 37,703f };
			Var0.f_22[2] = { 1345,759f, 4328,644f, 37,1615f };
			Var0.f_22[3] = { 1347,041f, 4338,581f, 36,9735f };
			Var0.f_22[4] = { 1355,173f, 4330,141f, 37,5035f };
			Var0[0] = { vParam1 - vVar77 };
			Var0[1] = { vParam1 - vVar80 };
			Var0[2] = { vParam1 - vVar83 };
			Var0[3] = { 0f, 0f, 0f };
			Var0.f_44[0] = { 1353,771f, 4336,599f, 37,4569f };
			Var0.f_54[0] = 312,6768f;
			Var0.f_44[1] = { 1358,891f, 4336,113f, 37,9091f };
			Var0.f_54[1] = 14,6f;
			Var0.f_44[2] = { 1356,729f, 4333,036f, 37,6442f };
			Var0.f_54[2] = 200,9488f;
			Var0.f_58 = { 1357,057f, 4333,549f, 37,6376f };
			break;
		
		case 21:
			Var0[0] = { 730,3441f, 4184,763f, 39,6674f };
			Var0.f_16[0] = 239,3436f;
			Var0[1] = { 726,7508f, 4172,962f, 39,7089f };
			Var0.f_16[1] = 297,6413f;
			Var0[2] = { 713,787f, 4170,157f, 39,7089f };
			Var0.f_16[2] = 266,5356f;
			Var0[3] = { 707,7895f, 4178,957f, 39,7089f };
			Var0.f_16[3] = 137,1188f;
			Var0.f_22[0] = { 709,8475f, 4178,161f, 39,7089f };
			Var0.f_38[0] = 269,8039f;
			Var0.f_22[1] = { 711,4312f, 4171,715f, 39,7089f };
			Var0.f_38[1] = 357,719f;
			Var0.f_22[2] = { 723,529f, 4173,195f, 39,7089f };
			Var0.f_38[2] = 115,296f;
			Var0.f_22[3] = { 728,7289f, 4175,958f, 39,7089f };
			Var0.f_38[3] = 48,0898f;
			Var0.f_22[4] = { 725,3412f, 4183,038f, 39,7128f };
			Var0.f_38[4] = 199,267f;
			Var0.f_44[0] = { 716,7869f, 4173,587f, 39,7089f };
			Var0.f_54[0] = 194,6003f;
			Var0.f_44[1] = { 717,8929f, 4180,682f, 39,7089f };
			Var0.f_54[1] = 197,2691f;
			Var0.f_44[2] = { 710,9958f, 4174,808f, 39,7089f };
			Var0.f_54[2] = 259,3369f;
			Var0.f_58 = { 717,6153f, 4176,429f, 39,719f };
			break;
		
		case 58:
			Var0[0] = { -1631,278f, 4725,815f, 51,7894f };
			Var0.f_16[0] = 121,2473f;
			Var0[1] = { -1639,577f, 4730,72f, 52,5423f };
			Var0.f_16[1] = 16,1595f;
			Var0[2] = { -1631,302f, 4745,593f, 51,7993f };
			Var0.f_16[2] = 278,0015f;
			Var0[3] = { -1620,811f, 4743,348f, 51,955f };
			Var0.f_16[3] = 351,9291f;
			Var0.f_22[0] = { -1627,355f, 4739,292f, 51,8071f };
			Var0.f_38[0] = 118,1087f;
			Var0.f_22[1] = { -1631,197f, 4730,856f, 51,8749f };
			Var0.f_38[1] = 355,5203f;
			Var0.f_22[2] = { -1636,622f, 4731,402f, 52,407f };
			Var0.f_38[2] = 279,3583f;
			Var0.f_22[3] = { -1625,17f, 4744,454f, 51,8431f };
			Var0.f_38[3] = 293,9838f;
			Var0.f_22[4] = { -1629,182f, 4743,242f, 51,9302f };
			Var0.f_38[4] = 85,6846f;
			Var0.f_44[0] = { -1634,825f, 4736,97f, 52,2205f };
			Var0.f_54[0] = 21,1632f;
			Var0.f_44[1] = { -1632,279f, 4739,094f, 52,1592f };
			Var0.f_54[1] = 120,4514f;
			Var0.f_44[2] = { -1632,495f, 4731,76f, 51,9804f };
			Var0.f_54[2] = 52,9858f;
			Var0.f_58 = { -1632,351f, 4737,445f, 52,3292f };
			break;
		
		case 57:
			Var0[0] = { -1138,616f, 4926,688f, 219,2112f };
			Var0.f_16[0] = 49,9944f;
			Var0[1] = { -1156,54f, 4926,251f, 221,4249f };
			Var0.f_16[1] = 159,0628f;
			Var0[2] = { -1155,917f, 4913,315f, 219,5449f };
			Var0.f_16[2] = 263,1431f;
			Var0[3] = { -1145,165f, 4919,874f, 219,3643f };
			Var0.f_16[3] = 336,6283f;
			Var0.f_22[0] = { -1145,186f, 4927,339f, 219,8742f };
			Var0.f_38[0] = 83,016f;
			Var0.f_22[1] = { -1162,151f, 4924,116f, 221,7936f };
			Var0.f_38[1] = 33,9003f;
			Var0.f_22[2] = { -1157,8f, 4918,886f, 220,7632f };
			Var0.f_38[2] = 287,8745f;
			Var0.f_22[3] = { -1154,939f, 4918,065f, 220,2623f };
			Var0.f_38[3] = 262,2286f;
			Var0.f_22[4] = { -1148,878f, 4919,947f, 219,7502f };
			Var0.f_38[4] = 344,0094f;
			Var0.f_44[0] = { -1151,8f, 4920,102f, 220,1048f };
			Var0.f_54[0] = 68,7571f;
			Var0.f_44[1] = { -1152,319f, 4924,24f, 220,6281f };
			Var0.f_54[1] = 352,4581f;
			Var0.f_44[2] = { -1156,04f, 4922,189f, 221,1452f };
			Var0.f_54[2] = 270,6073f;
			Var0.f_58 = { -1150,046f, 4923,993f, 220,3399f };
			break;
		
		case 55:
			Var0[0] = { 16,7885f, 6863,978f, 11,8225f };
			Var0.f_16[0] = 92,5444f;
			Var0[1] = { 6,5061f, 6861,133f, 11,7246f };
			Var0.f_16[1] = 126,0629f;
			Var0[2] = { 0,1925f, 6853,188f, 11,9355f };
			Var0.f_16[2] = 215,1629f;
			Var0[3] = { 14,7123f, 6849,219f, 12,1607f };
			Var0.f_16[3] = 115,3306f;
			Var0.f_22[0] = { 18,6217f, 6848,231f, 12,2675f };
			Var0.f_38[0] = 22,8309f;
			Var0.f_22[1] = { 16,8315f, 6855,542f, 12,0034f };
			Var0.f_38[1] = 15,3643f;
			Var0.f_22[2] = { 9,6123f, 6863,347f, 11,6965f };
			Var0.f_38[2] = 68,9709f;
			Var0.f_22[3] = { 7,5847f, 6857,265f, 11,848f };
			Var0.f_38[3] = 206,5964f;
			Var0.f_22[4] = { 5,876f, 6852,921f, 11,9634f };
			Var0.f_38[4] = 173,5287f;
			Var0.f_44[0] = { 7,9738f, 6857,06f, 11,8578f };
			Var0.f_54[0] = 240,1411f;
			Var0.f_44[1] = { 11,755f, 6852,5f, 12,028f };
			Var0.f_54[1] = 137,0916f;
			Var0.f_44[2] = { 20,3591f, 6858,566f, 12,0046f };
			Var0.f_54[2] = 332,1983f;
			Var0.f_58 = { 11,4565f, 6856,531f, 11,9089f };
			break;
		
		case 53:
			Var0[0] = { 3814,957f, 4469,378f, 3,1262f };
			Var0.f_16[0] = 54,564f;
			Var0[1] = { 3803,215f, 4468,343f, 3,9447f };
			Var0.f_16[1] = 148,6869f;
			Var0[2] = { 3800,112f, 4458,141f, 3,826f };
			Var0.f_16[2] = 32,7177f;
			Var0[3] = { 3817,38f, 4454,676f, 2,6161f };
			Var0.f_16[3] = 287,2097f;
			Var0.f_22[0] = { 3821,687f, 4457,637f, 2,4513f };
			Var0.f_38[0] = 209,2304f;
			Var0.f_22[1] = { 3820,956f, 4464,081f, 2,6946f };
			Var0.f_38[1] = 242,015f;
			Var0.f_22[2] = { 3810,67f, 4468,1f, 3,3584f };
			Var0.f_38[2] = 281,873f;
			Var0.f_22[3] = { 3805,098f, 4466,029f, 3,7161f };
			Var0.f_38[3] = 38,3414f;
			Var0.f_22[4] = { 3806,383f, 4459,833f, 3,4414f };
			Var0.f_38[4] = 83,1667f;
			Var0.f_44[0] = { 3808,173f, 4462,093f, 3,3789f };
			Var0.f_54[0] = 280,146f;
			Var0.f_44[1] = { 3812,636f, 4465,799f, 3,1841f };
			Var0.f_54[1] = 207,2805f;
			Var0.f_44[2] = { 3812,805f, 4458,679f, 3,0086f };
			Var0.f_54[2] = 317,0439f;
			Var0.f_58 = { 3811,882f, 4462,616f, 3,1544f };
			break;
		
		case 39:
			Var0[0] = { 1423,16f, 3151,31f, 40,73f };
			Var0.f_16[0] = 355,06f;
			Var0[1] = { 1426,03f, 3141,74f, 40,91f };
			Var0.f_16[1] = 207,55f;
			Var0[2] = { 1441,76f, 3140,27f, 40,91f };
			Var0.f_16[2] = 160,77f;
			Var0[3] = { 1442,42f, 3150,59f, 41,08f };
			Var0.f_16[3] = 236,1f;
			Var0.f_22[0] = { 1434,187f, 3133,831f, 40,0035f };
			Var0.f_38[0] = 340,3069f;
			Var0.f_22[1] = { 1444,331f, 3144,406f, 40,1064f };
			Var0.f_38[1] = 88,7275f;
			Var0.f_22[2] = { 1417,955f, 3142,786f, 39,9881f };
			Var0.f_38[2] = 280,2164f;
			Var0.f_22[3] = { 1418,044f, 3135,821f, 39,9269f };
			Var0.f_38[3] = 230,445f;
			Var0.f_22[4] = { 1424,718f, 3130,739f, 39,9528f };
			Var0.f_38[4] = 242,144f;
			Var0.f_44[0] = { 1430,273f, 3148,437f, 39,9986f };
			Var0.f_54[0] = 312,6768f;
			Var0.f_44[1] = { 1429,041f, 3144,907f, 39,9223f };
			Var0.f_54[1] = 14,6f;
			Var0.f_44[2] = { 1430,303f, 3140,717f, 39,9181f };
			Var0.f_54[2] = 200,9488f;
			Var0.f_58 = { 1436,967f, 3144,639f, 40,0988f };
			break;
		
		case 51:
			Var0.f_22[0] = { vParam1 - vVar74 };
			Var0.f_22[1] = { vParam1 - vVar61[0] };
			Var0.f_22[2] = { vParam1 - vVar61[1] };
			Var0.f_22[3] = { vParam1 - vVar61[2] };
			Var0.f_22[4] = { vParam1 - vVar61[3] };
			Var0[0] = { 2957,773f, 2802,566f, 40,776f };
			Var0[1] = { 2947,316f, 2798,271f, 39,9545f };
			Var0[2] = { 2943,398f, 2782,478f, 38,6242f };
			Var0[3] = { 2957,248f, 2780,826f, 39,785f };
			Var0.f_44[0] = { 2954,607f, 2796,802f, 40,0158f };
			Var0.f_54[0] = 312,6768f;
			Var0.f_44[1] = { 2958,071f, 2794,782f, 39,7859f };
			Var0.f_54[1] = 14,6f;
			Var0.f_44[2] = { 2954,158f, 2787,998f, 40,5765f };
			Var0.f_54[2] = 200,9488f;
			Var0.f_58 = { 2943,961f, 2790,901f, 39,3536f };
			break;
		
		case 50:
			Var0[0] = { 3297,649f, 5145,335f, 17,3838f };
			Var0.f_16[0] = 42,8914f;
			Var0[1] = { 3275,056f, 5148,496f, 18,3073f };
			Var0.f_16[1] = 316,9439f;
			Var0[2] = { 3283,333f, 5165,716f, 17,752f };
			Var0.f_16[2] = 220,1146f;
			Var0[3] = { 3300,923f, 5157,714f, 17,3992f };
			Var0.f_16[3] = 104,3215f;
			Var0.f_22[0] = { 3300,837f, 5148,729f, 17,249f };
			Var0.f_38[0] = 173,5395f;
			Var0.f_22[1] = { 3285,897f, 5145,362f, 17,5925f };
			Var0.f_38[1] = 97,3138f;
			Var0.f_22[2] = { 3273,133f, 5154,504f, 18,3428f };
			Var0.f_38[2] = 120,0509f;
			Var0.f_22[3] = { 3288,11f, 5146,38f, 17,4096f };
			Var0.f_38[3] = 240,1863f;
			Var0.f_22[4] = { 3271,614f, 5169,093f, 18,6001f };
			Var0.f_38[4] = 259,89f;
			Var0.f_44[0] = { 3284,273f, 5149,647f, 17,6151f };
			Var0.f_54[0] = 53,2345f;
			Var0.f_44[1] = { 3285,878f, 5155,132f, 17,5177f };
			Var0.f_54[1] = 305,6007f;
			Var0.f_44[2] = { 3291,355f, 5152,966f, 17,2847f };
			Var0.f_54[2] = 250,5027f;
			Var0.f_58 = { 3284,273f, 5149,647f, 17,6151f };
			break;
		
		case 60:
			Var0[0] = { -285,5493f, 2572,497f, 70,8495f };
			Var0.f_22[0] = { -288,5072f, 2566,416f, 72,7682f };
			break;
		
		default:
			Var0.f_22[0] = { vParam1 - vVar74 };
			Var0.f_22[1] = { vParam1 - vVar61[0] };
			Var0.f_22[2] = { vParam1 - vVar61[1] };
			Var0.f_22[3] = { vParam1 - vVar61[2] };
			Var0.f_22[4] = { vParam1 - vVar61[3] };
			Var0[0] = { vParam1 - vVar77 };
			Var0[1] = { vParam1 - vVar80 };
			Var0[2] = { vParam1 - vVar83 };
			Var0[3] = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

void func_312(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		uParam1->f_343[iVar0] = unk_0x122AAB0B1D6F55AD(uParam0->f_61[iVar0], uParam2->f_13[iVar0], uParam2->f_41[iVar0], true, true, false);
		unk_0xB9FD7450C0DAB575(uParam1->f_343[iVar0], 1084227584);
		unk_0x25BD67336EA4AECE(uParam1->f_343[iVar0], 1000);
		unk_0xE8832A9E16A57A1F(uParam1->f_343[iVar0], true, 1);
		iVar0++;
	}
	uParam1->f_312[0] = uParam1->f_343[0];
	uParam1->f_312[1] = uParam1->f_343[3];
	uParam1->f_312[2] = uParam1->f_343[6];
	uParam1->f_322[0] = unk_0x122AAB0B1D6F55AD(uParam0->f_61[0], 1730,014f, 3314,928f, 41,7539f, 0f, true, true, false);
	unk_0xC4C7FD0EF3FEAB0B(uParam1->f_322[0], -0,0017f, 0,0226f, 0,9922f, -0,1222f);
	iLocal_4658[0] = unk_0x852A19533F896693(uParam1->f_322[0], 4, uParam2->f_1155[0], -1, 1, true);
	unk_0x11AD11297DC58CC7(iLocal_4658[0], true);
	uParam1->f_336[0] = 0;
	uParam1->f_322[1] = unk_0x122AAB0B1D6F55AD(uParam0->f_61[4], 1774,561f, 3235,64f, 41,939f, 0f, true, true, false);
	unk_0xC4C7FD0EF3FEAB0B(uParam1->f_322[1], -0,0128f, -0,0072f, 0,0939f, 0,9955f);
	uParam1->f_336[1] = 0;
	uParam1->f_322[2] = unk_0x122AAB0B1D6F55AD(uParam0->f_61[4], 1646,431f, 3258,059f, 40,4998f, 0f, true, true, false);
	unk_0xC4C7FD0EF3FEAB0B(uParam1->f_322[2], 0,0267f, -0,0274f, 0,8044f, 0,5929f);
	uParam1->f_336[2] = 0;
	uParam1->f_322[3] = unk_0x122AAB0B1D6F55AD(uParam0->f_61[1], 1349,944f, 3155,646f, 41,0453f, 0f, true, true, false);
	unk_0xC4C7FD0EF3FEAB0B(uParam1->f_322[3], 0,0024f, 0,003f, 0,7994f, 0,6008f);
	iLocal_4658[1] = unk_0x852A19533F896693(uParam1->f_322[3], 4, uParam2->f_1155[0], -1, 1, true);
	unk_0x11AD11297DC58CC7(iLocal_4658[1], true);
	uParam1->f_336[3] = 0;
	uParam1->f_322[4] = unk_0x122AAB0B1D6F55AD(uParam0->f_61[4], 1120,428f, 3016,568f, 40,1836f, 0f, true, true, false);
	unk_0xC4C7FD0EF3FEAB0B(uParam1->f_322[4], 0,0011f, -0,001f, -0,5982f, 0,8013f);
	uParam1->f_336[4] = 0;
	uParam1->f_322[5] = unk_0x122AAB0B1D6F55AD(uParam0->f_61[4], 1468,766f, 3013,59f, 40,3801f, 0f, true, true, false);
	unk_0xC4C7FD0EF3FEAB0B(uParam1->f_322[5], -0,0091f, -0,0121f, -0,3688f, 0,9294f);
	uParam1->f_336[5] = 0;
	Local_4631[0][0] = unk_0x36F2404464202779(22, uParam2->f_1155[0], 1587,485f, 3225,576f, 39,4216f, 0f, 1, true);
	Local_4631[0][1] = unk_0x36F2404464202779(22, uParam2->f_1155[1], 1521,731f, 3206,707f, 39,4141f, 0f, 1, true);
	Local_4631[0][2] = unk_0x36F2404464202779(22, uParam2->f_1155[0], 1707,403f, 3258,022f, 40,0469f, 0f, 1, true);
	Local_4631[0][3] = unk_0x36F2404464202779(22, uParam2->f_1155[1], 1716,145f, 3265,478f, 40,1539f, 0f, 1, true);
	Local_4631[1][0] = unk_0x36F2404464202779(22, uParam2->f_1155[0], 1513,67f, 3109,876f, 39,5341f, 0f, 1, true);
	Local_4631[1][1] = unk_0x36F2404464202779(22, uParam2->f_1155[0], 1514,727f, 3097,798f, 39,5341f, 0f, 1, true);
	Local_4631[1][2] = unk_0x36F2404464202779(22, uParam2->f_1155[0], 1589,692f, 3206,394f, 39,4834f, 0f, 1, true);
	Local_4631[1][3] = unk_0x36F2404464202779(22, uParam2->f_1155[0], 1573,434f, 3201,38f, 39,4925f, 0f, 1, true);
	Local_4631[2][0] = unk_0x36F2404464202779(22, uParam2->f_1155[0], 1773,376f, 3245,564f, 41,1507f, 0f, 1, true);
	Local_4631[2][1] = unk_0x36F2404464202779(22, uParam2->f_1155[0], 1796,579f, 3246,578f, 41,6352f, 0f, 1, true);
	Local_4631[2][2] = unk_0x36F2404464202779(22, uParam2->f_1155[0], 1460,611f, 3047,903f, 39,5341f, 0f, 1, true);
	Local_4631[2][3] = unk_0x36F2404464202779(22, uParam2->f_1155[0], 1408,735f, 3005,229f, 39,5435f, 0f, 1, true);
	Local_4631[3][0] = unk_0x36F2404464202779(22, uParam2->f_1155[0], 1658,349f, 3256,019f, 39,5491f, 0f, 1, true);
	Local_4631[3][1] = unk_0x36F2404464202779(22, uParam2->f_1155[0], 1619,221f, 3243,928f, 39,5161f, 0f, 1, true);
	Local_4631[3][2] = unk_0x36F2404464202779(22, uParam2->f_1155[0], 1700,088f, 3287,261f, 47,9222f, 0f, 1, true);
	Local_4631[3][3] = unk_0x36F2404464202779(22, uParam2->f_1155[0], 1785,482f, 3293,358f, 40,7863f, 0f, 1, true);
	unk_0xF63400DBE3303D26("ENEMIES", &iLocal_4264);
	unk_0x0E2400AB9174FA81(5, iLocal_4264, 1862763509);
	unk_0x0E2400AB9174FA81(5, 1862763509, iLocal_4264);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (iVar0 == 1 || iVar0 == 3)
			{
				unk_0x262EF6C6306BEA6C(Local_4631[iVar0][iVar1], -1074790547, 100, true, true);
			}
			else
			{
				unk_0x262EF6C6306BEA6C(Local_4631[iVar0][iVar1], -1074790547, 100, true, true);
			}
			unk_0x23CBFFA16CA5CF45(Local_4631[iVar0][iVar1], 300f, 10);
			unk_0x9FA191B317572861(Local_4631[iVar0][iVar1], 500f);
			unk_0x6DF7BF67E86AAE86(Local_4631[iVar0][iVar1], iLocal_4264);
			unk_0x25BD67336EA4AECE(Local_4631[iVar0][iVar1], 500);
			unk_0x298903DD96203C2C(Local_4631[iVar0][iVar1], 5);
			unk_0x6C3AE6E278DB3D0E(Local_4631[iVar0][iVar1], unk_0x16F2683693E537C9(), 0, 16);
			iVar1++;
		}
		iVar0++;
	}
}

void func_313(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		uParam1->f_343[iVar0] = unk_0x122AAB0B1D6F55AD(uParam0->f_61[iVar0], uParam2->f_13[iVar0], uParam2->f_41[iVar0], true, true, false);
		unk_0x25BD67336EA4AECE(uParam1->f_343[iVar0], 500);
		unk_0xE8832A9E16A57A1F(uParam1->f_343[iVar0], true, 1);
		iVar0++;
	}
	uParam1->f_312[0] = uParam1->f_343[0];
	uParam1->f_312[1] = uParam1->f_343[4];
	uParam1->f_312[2] = uParam1->f_343[8];
	Local_4631[0][0] = unk_0x852A19533F896693(uParam1->f_343[0], 22, uParam2->f_1155[0], -1, 1, true);
	if (!unk_0xEB6A8945D1AC98A1(Local_4631[0][0]))
	{
		unk_0xE072601B4380E9DF(Local_4631[0][0], uParam1->f_343[0], 8f, 786603);
	}
	Local_4631[0][1] = unk_0x852A19533F896693(uParam1->f_343[1], 22, uParam2->f_1155[0], -1, 1, true);
	if (!unk_0xEB6A8945D1AC98A1(Local_4631[0][1]))
	{
		unk_0x60274E99F9B27DEA(Local_4631[0][1], uParam1->f_343[1], uParam1->f_343[0], 12, 12f, 786469, -1f, -1f, 1);
	}
	Local_4631[0][2] = unk_0x852A19533F896693(uParam1->f_343[2], 22, uParam2->f_1155[0], -1, 1, true);
	if (!unk_0xEB6A8945D1AC98A1(Local_4631[0][2]))
	{
		unk_0x60274E99F9B27DEA(Local_4631[0][2], uParam1->f_343[2], uParam1->f_343[1], 12, 12f, 786469, -1f, -1f, 1);
	}
	Local_4631[0][3] = unk_0x852A19533F896693(uParam1->f_343[3], 22, uParam2->f_1155[0], -1, 1, true);
	if (!unk_0xEB6A8945D1AC98A1(Local_4631[0][3]))
	{
		unk_0x60274E99F9B27DEA(Local_4631[0][3], uParam1->f_343[3], uParam1->f_343[2], 12, 12f, 786469, -1f, -1f, 1);
	}
	Local_4631[1][0] = unk_0x852A19533F896693(uParam1->f_343[4], 22, uParam2->f_1155[0], -1, 1, true);
	if (!unk_0xEB6A8945D1AC98A1(Local_4631[1][0]))
	{
		unk_0xE072601B4380E9DF(Local_4631[1][0], uParam1->f_343[4], 8f, 786603);
	}
	Local_4631[1][1] = unk_0x852A19533F896693(uParam1->f_343[5], 22, uParam2->f_1155[0], -1, 1, true);
	if (!unk_0xEB6A8945D1AC98A1(Local_4631[1][1]))
	{
		unk_0x60274E99F9B27DEA(Local_4631[1][1], uParam1->f_343[5], uParam1->f_343[4], 12, 12f, 786469, -1f, -1f, 1);
	}
	Local_4631[1][2] = unk_0x852A19533F896693(uParam1->f_343[6], 22, uParam2->f_1155[0], -1, 1, true);
	if (!unk_0xEB6A8945D1AC98A1(Local_4631[1][2]))
	{
		unk_0x60274E99F9B27DEA(Local_4631[1][2], uParam1->f_343[6], uParam1->f_343[5], 12, 12f, 786469, -1f, -1f, 1);
	}
	Local_4631[1][3] = unk_0x852A19533F896693(uParam1->f_343[7], 22, uParam2->f_1155[0], -1, 1, true);
	if (!unk_0xEB6A8945D1AC98A1(Local_4631[1][3]))
	{
		unk_0x60274E99F9B27DEA(Local_4631[1][3], uParam1->f_343[7], uParam1->f_343[6], 12, 12f, 786469, -1f, -1f, 1);
	}
	Local_4631[2][0] = unk_0x852A19533F896693(uParam1->f_343[8], 22, uParam2->f_1155[0], -1, 1, true);
	if (!unk_0xEB6A8945D1AC98A1(Local_4631[2][0]))
	{
		unk_0xE072601B4380E9DF(Local_4631[2][0], uParam1->f_343[8], 8f, 786603);
	}
	unk_0xF63400DBE3303D26("ENEMIES", &iLocal_4264);
	unk_0x0E2400AB9174FA81(5, iLocal_4264, 1862763509);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			unk_0x262EF6C6306BEA6C(Local_4631[iVar0][iVar1], 736523883, 100, true, true);
			unk_0x11AD11297DC58CC7(Local_4631[iVar0][iVar1], true);
			unk_0x6DF7BF67E86AAE86(Local_4631[iVar0][iVar1], iLocal_4264);
			unk_0x25BD67336EA4AECE(Local_4631[iVar0][iVar1], 500);
			iVar1++;
		}
		iVar0++;
	}
}

void func_314(var uParam0, var uParam1, var uParam2, int iParam3)
{
	iParam3 = iParam3;
	vVar2 = { 0f, -3f, 0,8f };
	unk_0xF63400DBE3303D26("ENEMIES", &iLocal_4264);
	unk_0x0E2400AB9174FA81(5, iLocal_4264, 1862763509);
	uParam1->f_312[0] = unk_0x9F136BAA293FE131(6, uParam0->f_16[0], uParam0->f_29[0]);
	if (!unk_0x437347B10A200C4B(uParam1->f_312[0], 0))
	{
		unk_0x25BD67336EA4AECE(uParam1->f_312[0], 1000);
		unk_0x5D6C12CA95187FB3(uParam1->f_312[0], 18f);
		unk_0x88FD99BDEAF715B4(uParam1->f_312[0], 18f);
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		unk_0x25BD67336EA4AECE(unk_0x5466F584D98DBA09(uParam1->f_312[0], iVar0), 1000);
		iVar0++;
	}
	uParam1->f_312[1] = unk_0x122AAB0B1D6F55AD(uParam2->f_1142[0], -2020,55f, 4735,8f, 0,39f, 134,5f, true, true, false);
	unk_0x25BD67336EA4AECE(uParam1->f_312[1], 1000);
	Local_4631[0][0] = unk_0x852A19533F896693(uParam1->f_312[1], 22, uParam2->f_1155[0], -1, 1, true);
	Local_4631[0][1] = unk_0x36F2404464202779(22, uParam2->f_1155[0], -1985,652f, 4769,146f, -3,6671f, 0f, 1, true);
	unk_0x9F528B1B53FBC5D9(Local_4631[0][1], uParam1->f_312[1], 0, -0,16f, -4,56f, 1,45f, 0f, 0f, 90,72f, 1, 1, 0, 0, 2, 1);
	unk_0x2C4A1A0F54A166E8(Local_4631[0][1], unk_0x16F2683693E537C9(), -1, 0);
	uParam1->f_322[0] = unk_0x122AAB0B1D6F55AD(uParam2->f_1142[1], -2029,95f, 4744,09f, 0,39f, 77,31f, true, true, false);
	unk_0x25BD67336EA4AECE(uParam1->f_322[0], 1000);
	Local_4631[0][2] = unk_0x852A19533F896693(uParam1->f_322[0], 22, uParam2->f_1155[1], -1, 1, true);
	Local_4631[0][3] = unk_0x36F2404464202779(22, uParam2->f_1155[1], -1976,425f, 4748,55f, -2,7524f, 0f, 1, true);
	unk_0x9F528B1B53FBC5D9(Local_4631[0][3], uParam1->f_322[0], 0, vVar2, 0f, 0f, 90,72f, 1, 1, 0, 0, 2, 1);
	unk_0x2C4A1A0F54A166E8(Local_4631[0][3], unk_0x16F2683693E537C9(), -1, 0);
	uParam1->f_322[1] = unk_0x122AAB0B1D6F55AD(uParam2->f_1142[1], -2028,16f, 4739,94f, 0,39f, 89,54f, true, true, false);
	unk_0x25BD67336EA4AECE(uParam1->f_322[1], 1000);
	Local_4631[1][0] = unk_0x852A19533F896693(uParam1->f_322[1], 22, uParam2->f_1155[0], -1, 1, true);
	Local_4631[1][1] = unk_0x36F2404464202779(22, uParam2->f_1155[1], -1968,937f, 4758,727f, -2,8807f, 0f, 1, true);
	unk_0x9F528B1B53FBC5D9(Local_4631[1][1], uParam1->f_322[1], 0, vVar2, 0f, 0f, 90,72f, 1, 1, 0, 0, 2, 1);
	unk_0x2C4A1A0F54A166E8(Local_4631[1][1], unk_0x16F2683693E537C9(), -1, 0);
	uParam1->f_322[2] = unk_0x122AAB0B1D6F55AD(uParam2->f_1142[0], -2035,27f, 4735,4f, -0,16f, 103,55f, true, true, false);
	unk_0x25BD67336EA4AECE(uParam1->f_322[2], 1000);
	Local_4631[1][2] = unk_0x852A19533F896693(uParam1->f_322[2], 22, uParam2->f_1155[1], -1, 1, true);
	Local_4631[1][3] = unk_0x36F2404464202779(22, uParam2->f_1155[1], -1986,301f, 4768,843f, -3,6552f, 0f, 1, true);
	unk_0x9F528B1B53FBC5D9(Local_4631[1][3], uParam1->f_322[2], 0, -0,16f, -4,56f, 1,45f, 0f, 0f, 90,72f, 1, 1, 0, 0, 2, 1);
	unk_0x2C4A1A0F54A166E8(Local_4631[1][3], unk_0x16F2683693E537C9(), -1, 0);
	uParam1->f_322[3] = unk_0x122AAB0B1D6F55AD(uParam2->f_1142[1], -2030,35f, 4731,77f, 0,39f, 127,4f, true, true, false);
	unk_0x25BD67336EA4AECE(uParam1->f_322[3], 1000);
	Local_4631[2][0] = unk_0x852A19533F896693(uParam1->f_322[3], 22, uParam2->f_1155[1], -1, 1, true);
	Local_4631[2][1] = unk_0x36F2404464202779(22, uParam2->f_1155[1], -1975,375f, 4766,604f, -3,4422f, 0f, 1, true);
	unk_0x9F528B1B53FBC5D9(Local_4631[2][1], uParam1->f_322[3], 0, vVar2, 0f, 0f, 90,72f, 1, 1, 0, 0, 2, 1);
	unk_0x2C4A1A0F54A166E8(Local_4631[2][1], unk_0x16F2683693E537C9(), -1, 0);
	uParam1->f_370 = 1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (unk_0xC844350D5D58C99A(Local_4631[iVar0][iVar1]))
			{
				unk_0x262EF6C6306BEA6C(Local_4631[iVar0][iVar1], -1074790547, -1, true, true);
				unk_0x11AD11297DC58CC7(Local_4631[iVar0][iVar1], true);
				unk_0x6DF7BF67E86AAE86(Local_4631[iVar0][iVar1], iLocal_4264);
				unk_0x25BD67336EA4AECE(Local_4631[iVar0][iVar1], 1000);
				unk_0x298903DD96203C2C(Local_4631[iVar0][iVar1], 0);
			}
			iVar1++;
		}
		iVar0++;
	}
	unk_0xF48790410026514E(0);
}

int func_315(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		func_318(uParam0->f_230, uParam1->f_1160, "DTRFAIR_NEW2", -1, 1, 2, 0, 0, 0, 0, 0, 1, 1, 0, 255, 0);
	}
	else
	{
		func_318(uParam0->f_230, uParam1->f_1160, "DTRFAIR_NEW1", -1, 1, 2, 0, 0, 0, 0, 0, 1, 1, 0, 255, 0);
	}
	iVar0 = (uParam1->f_1161 - uParam0->f_232);
	if (bParam2)
	{
		func_316(iVar0, "DTRFAIR_NEW4", -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
	}
	else
	{
		func_316(iVar0, "DTRFAIR_NEW3", -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
	}
	return 0;
}

void func_316(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (func_317(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_137(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_136(3, iVar0);
		Global_1378678.f_2764[iVar0] = iParam0;
		StringCopy(&(Global_1378678.f_2764.f_11[iVar0]), sParam1, 64);
		Global_1378678.f_2764.f_183[iVar0] = iParam3;
		Global_1378678.f_2764.f_172[iVar0] = iParam2;
		Global_1378678.f_2764.f_205[iVar0] = iParam4;
		Global_1378678.f_2764.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1378678.f_2764.f_259[iVar0]), sParam6, 64);
		Global_1378678.f_2764.f_420[iVar0] = iParam7;
		Global_1378678.f_2764.f_453[iVar0] = iParam8;
		Global_1378678.f_2764.f_431[iVar0] = iParam9;
		Global_1378678.f_2764.f_442[iVar0] = iParam10;
		Global_1378678.f_2764.f_464[iVar0] = iParam11;
		Global_1378678.f_2764.f_475[iVar0] = iParam12;
		Global_1378678.f_2764.f_486[iVar0] = iParam13;
		Global_1378678.f_2764.f_497[iVar0] = iParam14;
	}
}

int func_317(char* sParam0)
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

void func_318(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_137(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_136(4, iVar0);
		Global_1378678.f_3272[iVar0] = iParam0;
		Global_1378678.f_3272.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1378678.f_3272.f_11[iVar0]), sParam2, 64);
		Global_1378678.f_3272.f_183[iVar0] = iParam3;
		Global_1378678.f_3272.f_216[iVar0] = iParam5;
		Global_1378678.f_3272.f_194[iVar0] = iParam4;
		Global_1378678.f_3272.f_227[iVar0] = iParam6;
		Global_1378678.f_3272.f_270[iVar0] = iParam7;
		Global_1378678.f_3272.f_281[iVar0] = iParam8;
		Global_1378678.f_3272.f_292[iVar0] = iParam9;
		Global_1378678.f_3272.f_303[iVar0] = iParam10;
		Global_1378678.f_3272.f_314[iVar0] = iParam11;
		Global_1378678.f_3272.f_325[iVar0] = iParam13;
		Global_1378678.f_3272.f_336[iVar0] = iParam14;
		Global_1378678.f_3272.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && unk_0x0EFF6B4415DAF4A1()) && iParam12)
		{
			Global_1378678.f_1130 = 1;
		}
	}
}

void func_319()
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (unk_0xE4EDC4B0E92C078B(vLocal_3309[iVar0].f_1))
		{
			if (unk_0x437347B10A200C4B(vLocal_3309[iVar0], 0))
			{
				unk_0x142CC44DB769B57E(&(vLocal_3309[iVar0].f_1));
			}
			else if (vLocal_3309[iVar0].f_2 && func_320(vLocal_3309[iVar0], 1) > 200f)
			{
				unk_0x142CC44DB769B57E(&(vLocal_3309[iVar0].f_1));
			}
		}
		iVar0++;
	}
}

float func_320(int iParam0, bool bParam1)
{
	return func_211(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), iParam0, bParam1);
}

void func_321()
{
	if (!unk_0x7F8A39872A07D2CE(&cLocal_3301, ""))
	{
		if (!func_286())
		{
			func_22(&Local_3125, &cLocal_3301, &cLocal_3305, 9, 0, 0, 0);
			StringCopy(&cLocal_3301, "", 16);
		}
	}
}

void func_322()
{
	if (!unk_0x7F8A39872A07D2CE(&cLocal_3293, ""))
	{
		if ((!unk_0xD17F06053799A7CA() && func_49(&iLocal_3290, 0,2f)) && !unk_0x25037C66EB32B076())
		{
			func_54(&cLocal_3293, 7500, 1);
			StringCopy(&cLocal_3293, "", 32);
		}
	}
}

void func_323(var uParam0, float fParam1, bool bParam2)
{
	if (func_266(uParam0, fParam1))
	{
		if (bParam2)
		{
			func_173(&Local_3346, -1);
		}
		else
		{
			func_54(&Local_3346, 7500, 1);
		}
	}
}

void func_324(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, char* sParam5, float fParam6, var uParam7, int iParam8, var uParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if (!*uParam1)
	{
		if (unk_0xF06268E966D7C1A2(unk_0xA30EC016B12C03E4(), 0))
		{
			func_54("DTRSHRD_01", 7500, 1);
			if (unk_0xE4EDC4B0E92C078B((*uParam3)[0]))
			{
				unk_0x661342B9651D16E2((*uParam3)[0], false);
			}
			iVar3 = 0;
			while (iVar3 < *uParam3)
			{
				if (unk_0xE4EDC4B0E92C078B((*uParam3)[iVar3]))
				{
					unk_0x142CC44DB769B57E(uParam3[iVar3]);
				}
				iVar3++;
			}
			if (unk_0xE4EDC4B0E92C078B(*iParam8))
			{
				unk_0x142CC44DB769B57E(iParam8);
				func_396("REMOVING myVehicleBlip VIA UPDATE_LAW");
			}
			*uParam1 = 1;
		}
	}
	else if (!unk_0xF06268E966D7C1A2(unk_0xA30EC016B12C03E4(), 0) && *uParam1)
	{
		unk_0x790015DC92C918E2();
		*uParam1 = 0;
		vVar0 = { unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), true) };
		*fParam6 = vdist(*uParam4[0], vVar0);
		if (bParam13)
		{
			func_54(sParam5, 7500, 1);
		}
		if (!*uParam9)
		{
			iVar3 = 0;
			while (iVar3 < *uParam3)
			{
				if (!func_3(*uParam4[iVar3], 0f, 0f, 0f, 0))
				{
					bLocal_3369 = true;
					(*uParam3)[iVar3] = unk_0x6CC513A908911CF0(*uParam4[iVar3]);
					if (bParam11)
					{
						unk_0x61755AC17D8F538E((*uParam3)[iVar3], 1);
					}
				}
				iVar3++;
			}
			if (!bLocal_3369 && bParam12)
			{
				iVar3 = 0;
				while (iVar3 < *uParam2)
				{
					if (unk_0xC844350D5D58C99A((*uParam2)[iVar3]) && !unk_0x437347B10A200C4B((*uParam2)[iVar3], 0))
					{
						(*uParam3)[iVar3] = unk_0x5C3B41825F6AC5A0((*uParam2)[iVar3]);
						func_396("ADDING IN BLIPS FOR ENTITIES");
					}
					iVar3++;
				}
			}
		}
		if (*uParam9)
		{
			if (!unk_0xE4EDC4B0E92C078B(*iParam8))
			{
				*iParam8 = unk_0x5C3B41825F6AC5A0(*iParam0);
				unk_0x61755AC17D8F538E(*iParam8, 3);
				func_396("ADDING IN BLIP FOR myVehicle VIA UPDATE_LAW");
				func_54("DTRSHRD_03", 7500, 1);
			}
		}
		*uParam7 = unk_0x1C0640BA9A7327B3();
		func_396("RESETING outOfVehicleTime VIA UPDATE_LAW");
		iLocal_3368 = 0;
		if (bParam10)
		{
			if (unk_0xE4EDC4B0E92C078B((*uParam3)[0]))
			{
			}
		}
	}
}

void func_325(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, var uParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14)
{
	if (*bParam9)
	{
		vVar2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
		iVar1 = func_176(uParam4, vVar2, 0);
	}
	if ((*uParam8 || (!unk_0x437347B10A200C4B(*iParam0, 0) && unk_0xE934758D273C899A(*iParam0))) || (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0))
	{
		if (unk_0xE4EDC4B0E92C078B(*iParam1) && func_327(iParam0))
		{
			unk_0x142CC44DB769B57E(iParam1);
		}
		*uParam6 = !func_327(iParam0);
		return;
	}
	if (!*uParam6)
	{
		if (!func_327(iParam0))
		{
			func_326(&uLocal_3382);
			if (unk_0x8FA469D9C5F1A01F())
			{
				unk_0xA37A90C62806D848(1);
				func_396("CLEARING HELP VIA UPDATE_MISSION_CAR");
			}
			unk_0x790015DC92C918E2();
			*uParam5 = unk_0x1C0640BA9A7327B3();
			if (bParam12)
			{
				if (*iParam10)
				{
					if (*bParam9)
					{
						func_54("DTRSHRD_03", 7500, 1);
						*iParam10 = 0;
					}
					else
					{
						func_54("DTRSHRD_03", 7500, 1);
						*iParam10 = 0;
					}
				}
				*iParam1 = unk_0x5C3B41825F6AC5A0(*iParam0);
				unk_0x61755AC17D8F538E(*iParam1, 3);
			}
			iVar0 = 0;
			while (iVar0 < *uParam3)
			{
				if (unk_0xE4EDC4B0E92C078B((*uParam3)[iVar0]))
				{
					unk_0x142CC44DB769B57E(uParam3[iVar0]);
					func_396("REMOVING myLocationBlip");
				}
				iVar0++;
			}
			func_396("bOutOfVehicle IS TRUE");
			*uParam6 = 1;
		}
	}
	else if (func_327(iParam0))
	{
		unk_0x142CC44DB769B57E(iParam1);
		unk_0x790015DC92C918E2();
		if (bParam13)
		{
			iVar0 = 0;
			while (iVar0 < *uParam3)
			{
				if (!unk_0xE4EDC4B0E92C078B((*uParam3)[iVar0]) && !func_3(*uParam4[iVar0], 0f, 0f, 0f, 0))
				{
					bLocal_3369 = true;
					if (!*bParam9 && iParam14)
					{
						(*uParam3)[iVar0] = unk_0x6CC513A908911CF0(*uParam4[iVar0]);
						func_396("ADDING BACK IN myLocationBlip");
					}
					if (*bParam9)
					{
						func_396("bPlaneMission IS TRUE");
						(*uParam3)[iVar0] = unk_0x6CC513A908911CF0(*uParam4[iVar0]);
						if (bParam11)
						{
							unk_0x61755AC17D8F538E((*uParam3)[iVar0], 1);
						}
						if (iVar0 == iVar1)
						{
							unk_0x516E63E474722206((*uParam3)[iVar0], 1f);
						}
						else
						{
							unk_0x516E63E474722206((*uParam3)[iVar0], 0,75f);
						}
					}
				}
				iVar0++;
			}
			if (!bLocal_3369 && bParam13)
			{
				iVar0 = 0;
				while (iVar0 < *uParam2)
				{
					if (unk_0xC844350D5D58C99A((*uParam2)[iVar0]) && !unk_0x437347B10A200C4B((*uParam2)[iVar0], 0))
					{
						(*uParam3)[iVar0] = unk_0x5C3B41825F6AC5A0((*uParam2)[iVar0]);
						func_396("ADDING IN BLIPS FOR ENTITIES");
					}
					iVar0++;
				}
			}
		}
		*uParam5 = 0;
		func_396("bOutOfVehicle IS FALSE");
		*uParam6 = 0;
	}
}

void func_326(var uParam0)
{
	func_163(uParam0);
	StringCopy(&Local_3346, "", 32);
}

int func_327(var uParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0) != *uParam0)
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_328(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, char* sParam5, var uParam6)
{
	if (!*uParam2)
	{
		*uParam0 = unk_0x1C0640BA9A7327B3();
		*uParam2 = 1;
	}
	iVar0 = (unk_0x1C0640BA9A7327B3() - *uParam0);
	if (IntToFloat(iVar0) > *uParam1)
	{
		*uParam3 = 1;
	}
	if (!*uParam4)
	{
		if (!unk_0xF06268E966D7C1A2(unk_0xA30EC016B12C03E4(), 0))
		{
			if ((round(*uParam1) - iVar0) <= 30000)
			{
				func_22(uParam6, "ARMSAUD", sParam5, 9, 0, 0, 0);
				func_396("GIVING PLAYER TIME WARNING");
				*uParam4 = 1;
			}
		}
	}
	iVar1 = (round(*uParam1) - iVar0);
	func_135(iVar1, "DTRSHRD_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

void func_329(struct<23> Param0, var uParam23, var uParam24)
{
	if (Param0)
	{
		vVar0 = { Param0.f_22 + Param0.f_2 };
		unk_0xA47B46945FF6DE74(Param0.f_21, vVar0, 1, false, 0, 1);
	}
}

void func_330(char* sParam0, int iParam1)
{
	if (Global_110278 && iParam1)
	{
		if (func_169(sParam0) && !unk_0x79BBCD5833294FD5())
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
				func_333(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_332((Global_111638.f_20405.f_145 - 1));
			Global_111638.f_20405.f_145 = (Global_111638.f_20405.f_145 - 1);
			func_331();
			return;
		}
		iVar0++;
	}
}

void func_331()
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

void func_332(int iParam0)
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

void func_333(int iParam0, int iParam1)
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

void func_334(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_364())
	{
		unk_0x256D93AFAE851A7A(0);
		unk_0x0674E58A79778E99(&(Global_98744.f_20), 2);
		unk_0x21387C9EECC2B220(true);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
		}
		Global_98740 = { vParam0 };
		Global_98743 = fParam3;
		Global_98739 = 1;
		if (iParam4 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_98744.f_20), 14);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_98744.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_98744.f_20), 24);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_98744.f_20), 24);
		}
		func_302(1);
	}
}

int func_335()
{
	if (!Global_98744 == 10 && !Global_98744 == 9)
	{
		return 0;
	}
	return Global_98744.f_2;
}

void func_336()
{
	if (Global_8161[0][0].f_259 == 2)
	{
		Global_8161[0][0].f_259 = 0;
	}
	if (Global_8161[1][0].f_259 == 2)
	{
		Global_8161[1][0].f_259 = 0;
	}
	if (Global_8161[2][0].f_259 == 2)
	{
		Global_8161[2][0].f_259 = 0;
	}
	unk_0x0674E58A79778E99(&Global_7356, 25);
	unk_0x5D96D8530B3D0904(&Global_7357, 11);
}

void func_337(bool bParam0)
{
	if (bParam0)
	{
		func_338();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			unk_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_147(0))
		{
			func_144(0);
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

void func_338()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_339(var uParam0)
{
}

void func_340(var uParam0)
{
	if (Global_111638.f_19978.f_2 >= 5)
	{
		if (Global_111638.f_19978.f_27 == 0)
		{
			bLocal_3373 = true;
			bLocal_3374 = false;
			bLocal_3375 = false;
		}
		else if (Global_111638.f_19978.f_27 == 1)
		{
			bLocal_3373 = false;
			bLocal_3374 = true;
			bLocal_3375 = false;
		}
		else if (Global_111638.f_19978.f_27 == 2)
		{
			bLocal_3373 = false;
			bLocal_3374 = false;
			bLocal_3375 = true;
		}
	}
	else if (uParam0->f_60 == 0)
	{
		bLocal_3373 = true;
		bLocal_3374 = false;
		bLocal_3375 = false;
	}
	else if (uParam0->f_60 == 1)
	{
		bLocal_3373 = false;
		bLocal_3374 = true;
		bLocal_3375 = false;
	}
	else if (uParam0->f_60 == 2)
	{
		bLocal_3373 = false;
		bLocal_3374 = false;
		bLocal_3375 = true;
	}
	func_343();
	func_342(uParam0);
	if (bLocal_6397)
	{
		unk_0x523BCC9DC80CD82F(Local_4849.f_8);
		unk_0x9E5E60D8C63FD9D1();
		unk_0x36187931D29E5BBE(103, "AirTaxiCut");
		func_396("REQUESTING TAXI RECORDING");
	}
	if (uParam0->f_37)
	{
		Local_4849.f_1137[0] = 920453016;
		Local_4849.f_1137[1] = 586013744;
		Local_4849.f_1137[2] = 1030400667;
		Local_4849.f_1137[3] = 184361638;
		unk_0x523BCC9DC80CD82F(Local_4849.f_1137[0]);
		unk_0x523BCC9DC80CD82F(Local_4849.f_1137[1]);
		unk_0x523BCC9DC80CD82F(Local_4849.f_1137[2]);
		unk_0x523BCC9DC80CD82F(Local_4849.f_1137[3]);
		func_396("REQUESTING TRAIN MODELS");
		Local_4849.f_1142[0] = 400514754;
		Local_4849.f_1142[1] = 400514754;
		unk_0x523BCC9DC80CD82F(Local_4849.f_1142[0]);
		unk_0x523BCC9DC80CD82F(Local_4849.f_1142[1]);
	}
	if (uParam0->f_52)
	{
		unk_0x36187931D29E5BBE(101, "carpetbombtruck");
		unk_0x36187931D29E5BBE(101, "carpetbombplane");
		unk_0x36187931D29E5BBE(101, "CarpetBombNew");
		unk_0x36187931D29E5BBE(102, "CarpetBombNew");
		unk_0x36187931D29E5BBE(103, "CarpetBombNew");
		unk_0x36187931D29E5BBE(104, "CarpetBombNew");
		unk_0x3F423BF5B8125A50("oddjobs@arms_traffic@");
		unk_0x523BCC9DC80CD82F(uParam0->f_61[0]);
		unk_0x523BCC9DC80CD82F(uParam0->f_61[3]);
		unk_0x523BCC9DC80CD82F(uParam0->f_61[6]);
		func_396("REQUESTING UBER BOMBS");
	}
	if (bLocal_6403)
	{
		iVar0 = 0;
		while (iVar0 < Local_4849.f_1160)
		{
			unk_0x523BCC9DC80CD82F(Local_4329[iVar0]);
			unk_0x523BCC9DC80CD82F(Local_4329.f_5[iVar0]);
			iVar0++;
		}
	}
	if (bLocal_3373)
	{
		iVar0 = 0;
		while (iVar0 < Local_4849.f_1160)
		{
			Local_4849.f_1155[iVar0] = 1466037421;
			iVar0++;
		}
	}
	else if (bLocal_3374)
	{
		iVar0 = 0;
		while (iVar0 < Local_4849.f_1160)
		{
			Local_4849.f_1155[iVar0] = 62440720;
			iVar0++;
		}
	}
	else if (bLocal_3375)
	{
		iVar0 = 0;
		while (iVar0 < Local_4849.f_1160)
		{
			Local_4849.f_1155[iVar0] = 1822107721;
			iVar0++;
		}
	}
	if (bLocal_6398)
	{
		iVar0 = 0;
		while (iVar0 < Local_4849.f_1160)
		{
			unk_0x523BCC9DC80CD82F(Local_4849.f_1155[iVar0]);
			unk_0x523BCC9DC80CD82F(Local_4849.f_1150[iVar0]);
			iVar0++;
		}
	}
	if ((uParam0->f_52 || iLocal_4783 == 1) || iLocal_4783 == 3)
	{
		func_396("REQUESTING MODELS");
		iVar0 = 0;
		while (iVar0 < Local_4849.f_1160)
		{
			unk_0x523BCC9DC80CD82F(Local_4849.f_1145[iVar0]);
			unk_0x523BCC9DC80CD82F(Local_4849.f_1155[iVar0]);
			unk_0x523BCC9DC80CD82F(Local_4849.f_1150[iVar0]);
			iVar0++;
		}
	}
	unk_0x523BCC9DC80CD82F(iLocal_4662);
	if (!bLocal_6398)
	{
		unk_0x3F423BF5B8125A50("p_cargo_chute_s");
		unk_0x523BCC9DC80CD82F(iLocal_4663);
	}
	unk_0xD7992BEF7A9D109E("DTRFAIR", 2);
	unk_0xD7992BEF7A9D109E("DTRSHRD", 3);
	unk_0x3F423BF5B8125A50("oddjobs@towingcome_here");
	while ((!unk_0x67C1D9E5B91B2E37(2) || !unk_0x67C1D9E5B91B2E37(3)) || !unk_0xB4AE0788C1587752("oddjobs@towingcome_here"))
	{
		wait(0);
		func_396("WAITING ON TEXT SLOTS");
	}
	if (uParam0->f_52)
	{
		if (!func_341(&(uParam0->f_61), 9) || ((((((!unk_0xB4AE0788C1587752("oddjobs@arms_traffic@") && unk_0x3DDA6C6A285628E4(101, "carpetbombplane")) && unk_0x3DDA6C6A285628E4(101, "carpetbombtruck")) && unk_0x3DDA6C6A285628E4(101, "CarpetBombNew")) && unk_0x3DDA6C6A285628E4(102, "CarpetBombNew")) && unk_0x3DDA6C6A285628E4(103, "CarpetBombNew")) && unk_0x3DDA6C6A285628E4(104, "CarpetBombNew")))
		{
			wait(0);
		}
	}
	if (bLocal_6398)
	{
		while ((!func_341(&(Local_4849.f_1150), Local_4849.f_1160) || !func_341(&(Local_4849.f_1155), Local_4849.f_1160)) || !unk_0xB87F6CF6E5628C67(iLocal_4662))
		{
			wait(0);
		}
	}
	if ((uParam0->f_52 || iLocal_4783 == 1) || iLocal_4783 == 3)
	{
		while (((!func_341(&(Local_4849.f_1145), Local_4849.f_1160) || !func_341(&(Local_4849.f_1155), Local_4849.f_1160)) || !func_341(&(Local_4849.f_1150), Local_4849.f_1160)) || !unk_0xB87F6CF6E5628C67(iLocal_4662))
		{
			wait(0);
		}
	}
	if (!bLocal_6398)
	{
		while (!unk_0xB87F6CF6E5628C67(iLocal_4663) || !unk_0xB4AE0788C1587752("p_cargo_chute_s"))
		{
			unk_0x523BCC9DC80CD82F(iLocal_4663);
			wait(0);
		}
	}
	if (uParam0->f_37)
	{
		while (!func_341(&(Local_4849.f_1137), 4) || !func_341(&(Local_4849.f_1142), 2))
		{
			wait(0);
		}
	}
	while ((!unk_0xAE317D00A5A55DF6("SCRIPT\DRUG_TRAFFIC_AIR", false, -1) || !unk_0xAE317D00A5A55DF6("SCRIPT\TARGET_PRACTICE", false, -1)) || !unk_0xAE317D00A5A55DF6("SCRIPT\DRUG_TRAFFIC_AIR_PANIC", false, -1))
	{
		wait(0);
	}
	if (bLocal_6403)
	{
		while (!func_341(&Local_4329, Local_4849.f_1160) || !func_341(&(Local_4329.f_5), Local_4849.f_1160))
		{
			func_396("WAITING ON AUTHORED DATA");
			wait(0);
		}
	}
	while (!unk_0x25F7A4D42AF2AB93())
	{
		wait(0);
	}
	while (((((!unk_0xB87F6CF6E5628C67(Local_4849.f_8) || !bLocal_6397) || !unk_0x67C1D9E5B91B2E37(2)) || !unk_0x67C1D9E5B91B2E37(3)) || !unk_0x25F7A4D42AF2AB93()) || !unk_0x3DDA6C6A285628E4(103, "AirTaxiCut"))
	{
		wait(0);
	}
}

int func_341(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (!unk_0xB87F6CF6E5628C67((*uParam0)[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_342(var uParam0)
{
	if (uParam0->f_45)
	{
		iLocal_4662 = 1771868096;
	}
	else
	{
		iLocal_4662 = 1877891248;
	}
	if (uParam0->f_52)
	{
		iLocal_4662 = 1771868096;
	}
}

void func_343()
{
	if (bLocal_3373)
	{
	}
	if (bLocal_3374)
	{
	}
	if (bLocal_3375)
	{
	}
}

void func_344(var uParam0)
{
	(*uParam0)[0] = 1165008631;
	(*uParam0)[1] = -2073573168;
	(*uParam0)[2] = 38230152;
	(*uParam0)[3] = 1165008631;
	uParam0->f_5[0] = 1845903456;
	uParam0->f_5[1] = 1845903456;
	uParam0->f_5[2] = 1845903456;
	uParam0->f_5[3] = 1845903456;
}

void func_345()
{
	while (!func_347(800))
	{
		wait(0);
	}
	unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
	unk_0x90CECE08EA8E77CC(Local_4849);
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0xBFB24B9B15F6108F(unk_0x16F2683693E537C9(), Local_4849);
		unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), Local_4849.f_3);
	}
	wait(500);
	unk_0x2FB9A57162E54BAB(0f);
	while (!func_346(800))
	{
		wait(0);
	}
}

int func_346(int iParam0)
{
	unk_0x82E51BCA72537B6C(iParam0);
	while (!unk_0x0F1CCD77290EE12F())
	{
		wait(0);
	}
	return 1;
}

int func_347(int iParam0)
{
	unk_0x53491B90E4FD0E56(iParam0);
	while (!unk_0x757EF87A33649210())
	{
		wait(0);
	}
	return 1;
}

void func_348(var uParam0)
{
	uParam0->f_13[0] = { 1580,018f, 3229,955f, 39,48187f };
	uParam0->f_41[0] = 82,95f;
	uParam0->f_13[1] = { 1546,087f, 3220,245f, 39,47596f };
	uParam0->f_41[1] = 85,9402f;
	uParam0->f_13[2] = { 1510,836f, 3210,796f, 39,47606f };
	uParam0->f_41[2] = 80,15f;
	uParam0->f_13[3] = { 1811,736f, 3232,815f, 42,38194f };
	uParam0->f_41[3] = 358,4576f;
	uParam0->f_13[4] = { 1785,838f, 3233,182f, 41,5358f };
	uParam0->f_41[4] = 6,5631f;
	uParam0->f_13[5] = { 1756,6f, 3233,454f, 41,13475f };
	uParam0->f_41[5] = 0,4536f;
	uParam0->f_13[6] = { 1499,498f, 3083,616f, 39,533f };
	uParam0->f_41[6] = 165,15f;
	uParam0->f_13[7] = { 1470,873f, 3054,87f, 39,5341f };
	uParam0->f_41[7] = 163,1142f;
	uParam0->f_13[8] = { 1442,118f, 3025,794f, 39,53325f };
	uParam0->f_41[8] = 167,15f;
}

void func_349(var uParam0)
{
	uParam0->f_13[0] = { 811,4817f, 3535,09f, 33,2207f };
	uParam0->f_41[0] = 92,2979f;
	uParam0->f_13[1] = { 830,1038f, 3535,82f, 33,2073f };
	uParam0->f_41[1] = 92,8474f;
	uParam0->f_13[2] = { 846,6023f, 3536,953f, 33,1838f };
	uParam0->f_41[2] = 94,2316f;
	uParam0->f_13[3] = { 860,85f, 3538,027f, 33,1552f };
	uParam0->f_41[3] = 94,3862f;
	uParam0->f_13[4] = { 1785,582f, 3555,708f, 34,7017f };
	uParam0->f_41[4] = 298,9814f;
	uParam0->f_13[5] = { 1765,018f, 3544,666f, 34,909f };
	uParam0->f_41[5] = 303,9579f;
	uParam0->f_13[6] = { 1747,575f, 3534,323f, 35,0587f };
	uParam0->f_41[6] = 300,1915f;
	uParam0->f_13[7] = { 1728,24f, 3523,567f, 35,2582f };
	uParam0->f_41[7] = 299,9568f;
	uParam0->f_13[8] = { 987,4857f, 2689,441f, 38,8479f };
	uParam0->f_41[8] = 266,274f;
}

void func_350(var uParam0, struct<97> Param1, bool bParam98)
{
	fLocal_4847 = Param1.f_58;
	uParam0->f_1161 = Param1.f_5;
	uParam0->f_1160 = Param1.f_4;
	iVar0 = 0;
	while (iVar0 < Param1.f_4)
	{
		func_352(&(uParam0->f_51[iVar0]), Param1.f_8[iVar0]);
		iVar0++;
	}
	if (bParam98)
	{
		func_352(&(uParam0->f_920), Param1.f_13[0]);
	}
	if (Param1.f_71[0] != 0)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			uParam0->f_1145[iVar0] = Param1.f_71[iVar0];
			iVar0++;
		}
	}
	uParam0->f_6 = Param1.f_55;
	func_351(uParam0, &iLocal_6401, &uLocal_6431, &uLocal_6399, &uLocal_6400, &bLocal_6397, &bLocal_6398, &bLocal_6396, &iLocal_6402, &bLocal_6403, Param1);
}

void func_351(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, int iParam7, int iParam8, var uParam9, struct<47> Param10, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106)
{
	*uParam9 = Param10.f_34;
	*uParam2 = Param10.f_38;
	*uParam4 = Param10.f_39;
	*uParam3 = Param10.f_43;
	*iParam1 = Param10.f_42;
	*iParam5 = Param10.f_44;
	*uParam6 = Param10.f_45;
	*iParam7 = Param10.f_46;
	*iParam8 = Param10.f_41;
}

int func_352(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			(*uParam0)[0] = 0;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "TrailerParkGround";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { 28,7612f, 3711,16f, 39,2174f };
			uParam0[0]->f_8 = 0,0079f;
			uParam0[0]->f_9 = 0,0104f;
			uParam0[0]->f_10 = -0,2702f;
			uParam0[0]->f_11 = 0,9627f;
			uParam0[0]->f_1 = -16948145;
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "TrailerParkGround";
			uParam0[1]->f_3 = 104;
			uParam0[1]->f_5 = { 99,5151f, 3714,765f, 39,2737f };
			uParam0[1]->f_8 = 0,0145f;
			uParam0[1]->f_9 = 0,0599f;
			uParam0[1]->f_10 = 0,1116f;
			uParam0[1]->f_11 = 0,9918f;
			uParam0[1]->f_1 = -16948145;
			(*uParam0)[2] = 1;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "TrailerParkAir";
			uParam0[2]->f_3 = 101;
			uParam0[2]->f_5 = { 30,8342f, 3948,345f, 83,5679f };
			uParam0[2]->f_8 = -0,0132f;
			uParam0[2]->f_9 = -0,0055f;
			uParam0[2]->f_10 = 0,9998f;
			uParam0[2]->f_11 = -0,0155f;
			uParam0[2]->f_1 = -644710429;
			uParam0[2]->f_12 = 176,5f;
			uParam0->f_107 = { 53,8249f, 3733,345f, 38,6775f };
			uParam0->f_110 = { 51,8722f, 3725,228f, 38,6335f };
			uParam0->f_146 = { 49,8334f, 3726,378f, 39,1895f };
			uParam0->f_149 = { 12,3204f, 0,0111f, 37,467f };
			uParam0->f_152 = { 55,9215f, 3731,235f, 39,2212f };
			uParam0->f_155 = { 12,3204f, 0,0111f, 37,467f };
			uParam0->f_158[0] = { 985,975f, 2152,608f, 47,8136f };
			uParam0->f_162[0] = 35,722f;
			break;
		
		case 2:
			uParam0->f_107 = { 2368,344f, 2530,202f, 45,6681f };
			uParam0->f_110 = { 2368,344f, 2530,202f, 45,6681f };
			break;
		
		case 0:
			uParam0->f_107 = { 2533,549f, 2612,932f, 36,9446f };
			(*uParam0)[0] = 0;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "BeerBarAmbush";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { 2591,062f, 2527,585f, 30,1715f };
			uParam0[0]->f_8 = 0,0635f;
			uParam0[0]->f_9 = -0,0044f;
			uParam0[0]->f_10 = 0,1434f;
			uParam0[0]->f_11 = 0,9876f;
			uParam0[0]->f_1 = -16948145;
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "BeerBarAmbush";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 2465,658f, 2542,458f, 43,359f };
			uParam0[1]->f_8 = 0,0739f;
			uParam0[1]->f_9 = -0,0406f;
			uParam0[1]->f_10 = -0,331f;
			uParam0[1]->f_11 = 0,9398f;
			uParam0[1]->f_1 = -16948145;
			(*uParam0)[2] = 1;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "beerBar";
			uParam0[2]->f_3 = 101;
			uParam0[2]->f_5 = { 2254,213f, 2837,056f, 69,6294f };
			uParam0[2]->f_8 = -0,0099f;
			uParam0[2]->f_9 = 0,0039f;
			uParam0[2]->f_10 = 0,8687f;
			uParam0[2]->f_11 = -0,4952f;
			uParam0[2]->f_1 = -644710429;
			uParam0[2]->f_12 = 759f;
			uParam0->f_110 = { 2537,016f, 2591,764f, 35,6751f };
			uParam0->f_146 = { 2556,196f, 2626,224f, 42,7265f };
			uParam0->f_149 = { -4,2563f, -0,2061f, 162,6607f };
			break;
		
		case 3:
			uParam0->f_107 = { 274,1707f, 2608,064f, 43,6995f };
			uParam0->f_110 = { 274,1707f, 2608,064f, 43,6995f };
			break;
		
		case 4:
			uParam0->f_107 = { 817,3708f, 2197,861f, 51,0174f };
			uParam0->f_110 = { 817,3708f, 2197,861f, 51,0174f };
			break;
		
		case 5:
			uParam0->f_107 = { -1445,62f, 1636,364f, 95,4142f };
			break;
		
		case 6:
			uParam0->f_107 = { -1847,165f, 4512,604f, 19,7672f };
			break;
		
		case 7:
			(*uParam0)[0] = 1;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "rugged";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { -1456,614f, 4504,205f, 112,8639f };
			uParam0[0]->f_8 = 0,0388f;
			uParam0[0]->f_9 = -0,0834f;
			uParam0[0]->f_10 = 0,9008f;
			uParam0[0]->f_11 = -0,4245f;
			uParam0[0]->f_1 = -644710429;
			uParam0[0]->f_12 = 310f;
			uParam0->f_110 = { -1185,653f, 4305,072f, 75,2981f };
			uParam0->f_107 = { -1185,653f, 4305,072f, 75,2981f };
			uParam0->f_146 = { -1178,054f, 4306,765f, 84,5263f };
			uParam0->f_149 = { -4,4212f, 0f, 121,8599f };
			uParam0->f_152 = { -1177,572f, 4307,064f, 77,1852f };
			uParam0->f_155 = { -4,4212f, 0f, 121,8599f };
			break;
		
		case 8:
			(*uParam0)[0] = 1;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "GraineryParkingLot";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { 2829,455f, 4634,991f, 81,9373f };
			uParam0[0]->f_8 = 0,0323f;
			uParam0[0]->f_9 = 0,0133f;
			uParam0[0]->f_10 = 0,9882f;
			uParam0[0]->f_11 = -0,1494f;
			uParam0[0]->f_1 = -644710429;
			uParam0[0]->f_12 = 234f;
			uParam0->f_107 = { 2911,251f, 4375,026f, 49,4025f };
			uParam0->f_110 = { 2910,965f, 4371,043f, 49,3964f };
			uParam0->f_146 = { 2901,554f, 4384,259f, 50,4232f };
			uParam0->f_149 = { 21,8867f, 0f, 156,2361f };
			uParam0->f_152 = { 2911,589f, 4379,841f, 50,4232f };
			uParam0->f_155 = { 18,0566f, 0f, 156,2361f };
			break;
		
		case 9:
			uParam0->f_107 = { 1237,725f, 1851,812f, 78,6409f };
			uParam0->f_110 = { 1237,725f, 1851,812f, 78,6409f };
			uParam0->f_146 = { 1244,26f, 1838,896f, 90,8553f };
			uParam0->f_149 = { -5,075f, 0f, 0,2706f };
			break;
		
		case 10:
			uParam0->f_107 = { 2670,764f, 3541,25f, 50,7144f };
			uParam0->f_110 = { 2670,764f, 3541,25f, 50,7144f };
			break;
		
		case 11:
			uParam0->f_107 = { 2477,002f, 4988,37f, 45,2699f };
			uParam0->f_110 = { 2477,002f, 4988,37f, 45,2699f };
			break;
		
		case 12:
			uParam0->f_107 = { 1949,3f, 4637,11f, 39,5446f };
			uParam0->f_110 = { 1949,3f, 4637,11f, 39,5446f };
			break;
		
		case 13:
			(*uParam0)[0] = 0;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "PlaneGraveyardGround";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { 2442,766f, 3105,672f, 47,085f };
			uParam0[0]->f_8 = -0,015f;
			uParam0[0]->f_9 = 0,0685f;
			uParam0[0]->f_10 = 0,6052f;
			uParam0[0]->f_11 = 0,793f;
			uParam0[0]->f_1 = func_353();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "PlaneGraveyardGround";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 2305,884f, 3053,964f, 45,6252f };
			uParam0[1]->f_8 = 0,0386f;
			uParam0[1]->f_9 = 0,0166f;
			uParam0[1]->f_10 = -0,2598f;
			uParam0[1]->f_11 = 0,9647f;
			uParam0[1]->f_1 = func_353();
			(*uParam0)[2] = 0;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "PlaneGraveyardGround";
			uParam0[2]->f_3 = 103;
			uParam0[2]->f_5 = { 2416,517f, 3173,679f, 48,2513f };
			uParam0[2]->f_8 = 0,0018f;
			uParam0[2]->f_9 = 0,0105f;
			uParam0[2]->f_10 = 0,8773f;
			uParam0[2]->f_11 = 0,4797f;
			uParam0[2]->f_1 = func_353();
			(*uParam0)[3] = 0;
			uParam0[3]->f_2 = 1;
			uParam0[3]->f_4 = "PlaneGraveyardGround";
			uParam0[3]->f_3 = 104;
			uParam0[3]->f_5 = { 2306,697f, 3186,073f, 46,2549f };
			uParam0[3]->f_8 = 0,0211f;
			uParam0[3]->f_9 = 0,0036f;
			uParam0[3]->f_10 = 0,9995f;
			uParam0[3]->f_11 = -0,0235f;
			uParam0[3]->f_1 = func_353();
			(*uParam0)[4] = 1;
			uParam0[4]->f_2 = 1;
			uParam0[4]->f_4 = "WreckedAirfield";
			uParam0[4]->f_3 = 101;
			uParam0[4]->f_5 = { 2659,062f, 3921,625f, 96,9736f };
			uParam0[4]->f_8 = -0,2848f;
			uParam0[4]->f_9 = 0,0749f;
			uParam0[4]->f_10 = 0,9529f;
			uParam0[4]->f_11 = 0,0727f;
			uParam0[4]->f_1 = -644710429;
			uParam0[4]->f_12 = 755f;
			uParam0->f_107 = { 2340,508f, 3094,924f, 47,0909f };
			uParam0->f_110 = { 2340,508f, 3094,924f, 47,0909f };
			uParam0->f_175 = 225f;
			StringCopy(&(uParam0->f_113), "DTRFKGR_15", 64);
			StringCopy(&(uParam0->f_129), "ARMS_TYPE108", 64);
			uParam0->f_145 = 1;
			uParam0->f_190 = 32f;
			uParam0->f_146 = { 2350,198f, 3107,476f, 54,1539f };
			uParam0->f_149 = { 11,3665f, 0f, 143,9136f };
			uParam0->f_152 = { 2349,461f, 3106,464f, 47,925f };
			uParam0->f_155 = { 11,3665f, 0f, 143,9136f };
			break;
		
		case 14:
			(*uParam0)[0] = 0;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "DirtCuldesac";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { 359,8208f, 2933,403f, 40,198f };
			uParam0[0]->f_8 = 0,0444f;
			uParam0[0]->f_9 = 0,0183f;
			uParam0[0]->f_10 = -0,4302f;
			uParam0[0]->f_11 = 0,9015f;
			uParam0[0]->f_1 = -16948145;
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "DirtCuldesac";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 342,1675f, 3008,602f, 39,3665f };
			uParam0[1]->f_8 = 0,0187f;
			uParam0[1]->f_9 = -0,0117f;
			uParam0[1]->f_10 = 0,7739f;
			uParam0[1]->f_11 = -0,6329f;
			uParam0[1]->f_1 = -16948145;
			(*uParam0)[2] = 1;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "DirtCuldesacAir";
			uParam0[2]->f_3 = 101;
			uParam0[2]->f_5 = { 580,981f, 2946,836f, 66,196f };
			uParam0[2]->f_8 = -0,1316f;
			uParam0[2]->f_9 = 0,0963f;
			uParam0[2]->f_10 = 0,6449f;
			uParam0[2]->f_11 = 0,7466f;
			uParam0[2]->f_1 = -644710429;
			uParam0[2]->f_12 = 154f;
			uParam0->f_107 = { 409,2248f, 2991,86f, 39,4351f };
			uParam0->f_110 = { 406,0919f, 2994,982f, 39,3263f };
			uParam0->f_146 = { 413,8964f, 2984,869f, 40,6165f };
			uParam0->f_149 = { -0,3626f, 0f, -40,2616f };
			uParam0->f_152 = { 407,7802f, 2988,285f, 40,2685f };
			uParam0->f_155 = { -1,686f, 0f, -31,8646f };
			break;
		
		case 15:
			uParam0->f_107 = { 1755,071f, 4239,898f, 17,2274f };
			(*uParam0)[0] = 1;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "WaterDrop";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { -3393,088f, 3841,75f, 59,0627f };
			uParam0[0]->f_8 = 0,1246f;
			uParam0[0]->f_9 = 0,0559f;
			uParam0[0]->f_10 = 0,8677f;
			uParam0[0]->f_11 = -0,478f;
			uParam0[0]->f_1 = -644710429;
			uParam0[0]->f_12 = 759f;
			uParam0->f_110 = { 1755,071f, 4239,898f, 17,2274f };
			uParam0->f_146 = { 1756,284f, 4219,054f, 34,128f };
			uParam0->f_149 = { 0,6506f, 0f, 34,3944f };
			return 1;
			break;
		
		case 16:
			uParam0->f_107 = { 2107,129f, 4794,275f, 39,8284f };
			break;
		
		case 17:
			uParam0->f_107 = { 733,6285f, 4129,934f, 23,8211f };
			uParam0->f_110 = { 725,9564f, 4215,808f, 49,7332f };
			break;
		
		case 18:
			uParam0->f_107 = { 715,0595f, 4175,037f, 39,7089f };
			uParam0->f_110 = { 715,0595f, 4175,037f, 39,7089f };
			break;
		
		case 19:
			uParam0->f_107 = { 1487,163f, 3807,31f, 27,8818f };
			break;
		
		case 20:
			uParam0->f_66[0].f_18 = 1;
			uParam0->f_66[0].f_3 = "BoatDepotFarms";
			uParam0->f_66[0].f_2 = 102;
			uParam0->f_66[0].f_5 = { 1656,163f, 4828,593f, 41,4706f };
			uParam0->f_66[0].f_11 = -0,0164f;
			uParam0->f_66[0].f_12 = -0,0289f;
			uParam0->f_66[0].f_13 = -0,6341f;
			uParam0->f_66[0].f_14 = 0,7726f;
			uParam0->f_66[0].f_15 = 0,7f;
			uParam0->f_66[0].f_16 = 1,75f;
			uParam0->f_66[1].f_18 = 1;
			uParam0->f_66[1] = 1;
			uParam0->f_66[1].f_1 = -644710429;
			uParam0->f_66[1].f_3 = "BoatDepot";
			uParam0->f_66[1].f_2 = 101;
			uParam0->f_66[1].f_5 = { 859,8226f, 4281,005f, 95,4879f };
			uParam0->f_66[1].f_11 = -0,0822f;
			uParam0->f_66[1].f_12 = -0,0467f;
			uParam0->f_66[1].f_13 = -0,6692f;
			uParam0->f_66[1].f_14 = 0,737f;
			uParam0->f_66[1].f_8 = { 100f, 100f, 10f };
			uParam0->f_107 = { 1362,055f, 4337,47f, 38,3688f };
			uParam0->f_110 = { 1362,055f, 4337,47f, 38,3688f };
			uParam0->f_168 = { 1545,547f, 4561,838f, 49,817f };
			uParam0->f_158[0] = { 1658,039f, 4828,536f, 40,9956f };
			uParam0->f_162[0] = 275,6415f;
			break;
		
		case 21:
			uParam0->f_66[0].f_19 = 1;
			uParam0->f_66[0] = 0;
			uParam0->f_66[0].f_4 = "BDFWaypoint";
			uParam0->f_66[0].f_5 = { 1653,995f, 4826,355f, 41,0051f };
			uParam0->f_66[1].f_18 = 1;
			uParam0->f_66[1] = 1;
			uParam0->f_66[1].f_1 = -644710429;
			uParam0->f_66[1].f_3 = "BoatDepot";
			uParam0->f_66[1].f_2 = 102;
			uParam0->f_66[1].f_5 = { 1327,669f, 3345,082f, 99,6745f };
			uParam0->f_66[1].f_11 = 0,0279f;
			uParam0->f_66[1].f_12 = 0,0197f;
			uParam0->f_66[1].f_13 = 0,3136f;
			uParam0->f_66[1].f_14 = 0,9489f;
			uParam0->f_66[1].f_8 = { 50f, 50f, 10f };
			uParam0->f_66[1].f_17 = 990f;
			uParam0->f_107 = { 717,6153f, 4176,429f, 39,719f };
			uParam0->f_110 = { 717,6153f, 4176,429f, 39,719f };
			uParam0->f_168 = { 831,2018f, 4407,939f, 51,2971f };
			StringCopy(&(uParam0->f_113), "DTRFKGR_8", 64);
			StringCopy(&(uParam0->f_129), "ARMS_REPT1", 64);
			uParam0->f_145 = 2;
			uParam0->f_190 = 32f;
			uParam0->f_158[0] = { 1658,039f, 4828,536f, 40,9956f };
			uParam0->f_162[0] = 275,6415f;
			uParam0->f_164 = { 777,5092f, 4227,933f, 50,2396f };
			uParam0->f_167 = 282,9541f;
			break;
		
		case 22:
			uParam0->f_66[0].f_19 = 1;
			uParam0->f_66[0] = 0;
			uParam0->f_66[0].f_4 = "BoatDepotFarms";
			uParam0->f_66[0].f_5 = { 1656,163f, 4828,593f, 41,4706f };
			uParam0->f_66[1].f_18 = 1;
			uParam0->f_66[1] = 1;
			uParam0->f_66[1].f_1 = -644710429;
			uParam0->f_66[1].f_3 = "BoatDepot";
			uParam0->f_66[1].f_2 = 101;
			uParam0->f_66[1].f_5 = { 859,8226f, 4281,005f, 52,4879f };
			uParam0->f_66[1].f_11 = -0,0822f;
			uParam0->f_66[1].f_12 = -0,0467f;
			uParam0->f_66[1].f_13 = -0,6692f;
			uParam0->f_66[1].f_14 = 0,737f;
			uParam0->f_66[1].f_8 = { 150f, 150f, 10f };
			uParam0->f_66[1].f_17 = 455f;
			uParam0->f_168 = { 1352,04f, 4370,251f, 43,3564f };
			uParam0->f_107 = { 1352,04f, 4370,251f, 43,3564f };
			uParam0->f_110 = { 1352,04f, 4370,251f, 43,3564f };
			uParam0->f_158[0] = { 1658,039f, 4828,536f, 40,9956f };
			uParam0->f_162[0] = 275,6415f;
			uParam0->f_164 = { 1386,179f, 4347,256f, 42,0701f };
			uParam0->f_167 = 321,2393f;
			StringCopy(&(uParam0->f_113), "DTRFKGR_2", 64);
			StringCopy(&(uParam0->f_129), "ARMS_GR03", 64);
			uParam0->f_190 = 32f;
			uParam0->f_145 = 1;
			break;
		
		case 23:
			uParam0->f_107 = { 3280,29f, 5159,418f, 17,9351f };
			uParam0->f_110 = { 3280,29f, 5159,418f, 17,9351f };
			uParam0->f_146 = { 3274,468f, 5158,095f, 19,1077f };
			uParam0->f_149 = { 0,2953f, 0f, -85,7135f };
			uParam0->f_152 = { 3286,704f, 5151,125f, 18,4534f };
			uParam0->f_155 = { 7,5371f, 0,0056f, -79,4105f };
			uParam0->f_164 = { 3292,449f, 5150,647f, 17,7515f };
			uParam0->f_167 = 302,2079f;
			uParam0->f_171 = { 3287,869f, 5163,059f, 17,4489f };
			uParam0->f_174 = 131,457f;
			break;
		
		case 24:
			uParam0->f_66[0].f_19 = 1;
			uParam0->f_66[0] = 0;
			uParam0->f_66[0].f_4 = "MegaMallWayPt";
			uParam0->f_66[0].f_5 = { 2869,192f, 4514,665f, 46,298f };
			uParam0->f_66[1].f_18 = 1;
			uParam0->f_66[1] = 1;
			uParam0->f_66[1].f_1 = -644710429;
			uParam0->f_66[1].f_3 = "MegaMall";
			uParam0->f_66[1].f_2 = 101;
			uParam0->f_66[1].f_5 = { 2426,653f, 3348,971f, 72,6849f };
			uParam0->f_66[1].f_11 = 0,0557f;
			uParam0->f_66[1].f_12 = -0,0115f;
			uParam0->f_66[1].f_13 = -0,4094f;
			uParam0->f_66[1].f_14 = 0,9106f;
			uParam0->f_168 = { 2669,848f, 3546,676f, 50,5799f };
			uParam0->f_66[1].f_8 = { 175f, 175f, 10f };
			uParam0->f_66[1].f_17 = 268f;
			uParam0->f_107 = { 2669,848f, 3546,676f, 50,5799f };
			uParam0->f_110 = { 2669,848f, 3546,676f, 50,5799f };
			StringCopy(&(uParam0->f_113), "DTRFKGR_14", 64);
			StringCopy(&(uParam0->f_129), "ARMS_TYP2_14", 64);
			uParam0->f_145 = 1;
			uParam0->f_190 = 32f;
			uParam0->f_158[0] = { 2869,192f, 4514,665f, 46,298f };
			uParam0->f_162[0] = 174,1073f;
			break;
		
		case 25:
			uParam0->f_107 = { 2076,711f, 4782,254f, 40,0605f };
			uParam0->f_110 = { 2129,565f, 4802,727f, 40,0246f };
			break;
		
		case 26:
			uParam0->f_107 = { 2149,737f, 4798,472f, 40,1071f };
			uParam0->f_110 = { 2149,737f, 4798,472f, 40,1071f };
			break;
		
		case 27:
			uParam0->f_107 = { 532,8872f, 2670,861f, 41,3513f };
			uParam0->f_110 = { 532,8872f, 2670,861f, 41,3513f };
			uParam0->f_146 = { 535,0646f, 2669,309f, 42,8091f };
			uParam0->f_149 = { -3,1569f, -0,1465f, -11,3918f };
			uParam0->f_152 = { 525,2866f, 2665,837f, 42,9374f };
			uParam0->f_155 = { 4,9124f, -0,0076f, -96,9372f };
			uParam0->f_164 = { 532,8944f, 2658,28f, 41,65f };
			uParam0->f_167 = 329,0565f;
			uParam0->f_171 = { 521,9125f, 2666,101f, 41,4715f };
			uParam0->f_174 = 3,0063f;
			break;
		
		case 28:
			(*uParam0)[0] = 0;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "JackInn";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { 1892,367f, 3830,595f, 31,9409f };
			uParam0[0]->f_8 = 0,0109f;
			uParam0[0]->f_9 = -0,0022f;
			uParam0[0]->f_10 = -0,4457f;
			uParam0[0]->f_11 = 0,8951f;
			uParam0[0]->f_1 = 2046537925;
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "JackInn";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 1964,541f, 3775,375f, 31,6535f };
			uParam0[1]->f_8 = 0,0124f;
			uParam0[1]->f_9 = 0,0048f;
			uParam0[1]->f_10 = 0,1899f;
			uParam0[1]->f_11 = 0,9817f;
			uParam0[1]->f_1 = 2046537925;
			uParam0->f_107 = { 1963,957f, 3838,843f, 31,2091f };
			uParam0->f_110 = { 1963,957f, 3838,843f, 31,2091f };
			uParam0->f_146 = { 1974,445f, 3839,454f, 35,3948f };
			uParam0->f_149 = { 12,1583f, -0,0096f, 166,4116f };
			uParam0->f_152 = { 1974,41f, 3836,866f, 31,9998f };
			uParam0->f_155 = { 16,4125f, 0f, 143,1034f };
			break;
		
		case 29:
			uParam0->f_107 = { 2683,982f, 4335,425f, 44,882f };
			uParam0->f_110 = { 2683,982f, 4335,425f, 44,882f };
			uParam0->f_158[0] = { 2857,758f, 4436,28f, 47,7903f };
			uParam0->f_162[0] = 96,8728f;
			uParam0->f_191 = { 2715,148f, 4386,868f, 46,7436f };
			uParam0->f_194 = 115,0899f;
			break;
		
		case 30:
			uParam0->f_107 = { 2038,985f, 3222,693f, 43,8001f };
			uParam0->f_110 = { 2038,985f, 3222,693f, 43,8001f };
			StringCopy(&(uParam0->f_113), "DTRFKGR_10", 64);
			StringCopy(&(uParam0->f_129), "ARMS_REPT2", 64);
			uParam0->f_145 = 0;
			uParam0->f_190 = 32f;
			uParam0->f_168 = { 2039,047f, 3220,283f, 43,7959f };
			uParam0->f_158[0] = { 2678,278f, 3963,51f, 43,4808f };
			uParam0->f_162[0] = 213,4533f;
			uParam0->f_66[0].f_19 = 1;
			uParam0->f_66[0] = 0;
			uParam0->f_66[0].f_4 = "NewTrailerParkWayPt";
			uParam0->f_66[0].f_5 = { 2678,278f, 3963,51f, 43,4808f };
			uParam0->f_66[1].f_18 = 1;
			uParam0->f_66[1] = 1;
			uParam0->f_66[1].f_1 = -644710429;
			uParam0->f_66[1].f_3 = "RecycleCenterPlane";
			uParam0->f_66[1].f_2 = 101;
			uParam0->f_66[1].f_5 = { 1674,231f, 2611,925f, 113,5059f };
			uParam0->f_66[1].f_11 = -0,0331f;
			uParam0->f_66[1].f_12 = 0,0094f;
			uParam0->f_66[1].f_13 = -0,276f;
			uParam0->f_66[1].f_14 = 0,9606f;
			uParam0->f_66[1].f_8 = { 350f, 350f, 10f };
			uParam0->f_66[1].f_17 = 665f;
			uParam0->f_168 = { 2038,576f, 3224,495f, 43,8766f };
			break;
		
		case 31:
			uParam0->f_107 = { 873,6542f, 2849,92f, 55,9454f };
			uParam0->f_110 = { 873,6542f, 2849,92f, 55,9454f };
			uParam0->f_146 = { 871,9132f, 2845,716f, 57,124f };
			uParam0->f_149 = { -0,9276f, 0f, 5,2516f };
			uParam0->f_152 = { 866,4645f, 2861,749f, 57,06f };
			uParam0->f_155 = { 5,3438f, 0,006f, -75,1635f };
			uParam0->f_164 = { 872,2538f, 2865,438f, 56,2123f };
			uParam0->f_167 = 152,2005f;
			uParam0->f_171 = { 878,3112f, 2841,126f, 55,8722f };
			uParam0->f_174 = 216,5979f;
			break;
		
		case 32:
			uParam0->f_107 = { 2463,564f, 3422,829f, 49,0819f };
			uParam0->f_110 = { 2463,564f, 3422,829f, 49,0819f };
			uParam0->f_168 = { 2473,774f, 3640,914f, 44,2181f };
			uParam0->f_146 = { 2438,779f, 3467,493f, 64,7144f };
			uParam0->f_149 = { 2,066f, 0f, -93,2163f };
			uParam0->f_152 = { 2439,326f, 3467,463f, 49,5392f };
			uParam0->f_155 = { 2,066f, 0f, -93,2163f };
			uParam0->f_164 = { 2408,07f, 3477,876f, 48,1443f };
			uParam0->f_167 = 221,7315f;
			uParam0->f_158[0] = { 2857,758f, 4436,28f, 47,7903f };
			uParam0->f_162[0] = 96,8728f;
			uParam0->f_66[0].f_19 = 1;
			uParam0->f_66[0] = 0;
			uParam0->f_66[0].f_4 = "SmugglersDropOff_01";
			uParam0->f_66[0].f_5 = { 2894,737f, 4450,115f, 47,7495f };
			uParam0->f_66[1].f_18 = 1;
			uParam0->f_66[1] = 1;
			uParam0->f_66[1].f_1 = -644710429;
			uParam0->f_66[1].f_3 = "SmugglersPlane";
			uParam0->f_66[1].f_2 = 102;
			uParam0->f_66[1].f_5 = { 2376,498f, 3162,74f, 73,3197f };
			uParam0->f_66[1].f_11 = 0,0002f;
			uParam0->f_66[1].f_12 = 0,0434f;
			uParam0->f_66[1].f_13 = -0,0808f;
			uParam0->f_66[1].f_14 = 0,9958f;
			uParam0->f_66[1].f_8 = { 200f, 200f, 10f };
			uParam0->f_66[1].f_17 = 260f;
			break;
		
		case 33:
			uParam0->f_107 = { 526,8232f, 3123,025f, 39,5975f };
			uParam0->f_110 = { 526,8232f, 3123,025f, 39,5975f };
			uParam0->f_146 = { 527,374f, 3118,425f, 40,874f };
			uParam0->f_149 = { -3,6327f, 0f, -65,3691f };
			uParam0->f_152 = { 530,2779f, 3116,602f, 40,8915f };
			uParam0->f_155 = { 2,2863f, 0,0424f, 81,3362f };
			uParam0->f_164 = { 524,4958f, 3115,119f, 40f };
			uParam0->f_167 = 41,0465f;
			uParam0->f_171 = { 511,3625f, 3120,488f, 39,7792f };
			uParam0->f_174 = 248,7609f;
			break;
		
		case 34:
			uParam0->f_107 = { 972,52f, 4461,05f, 50,81f };
			uParam0->f_110 = { 972,52f, 4461,05f, 50,81f };
			uParam0->f_146 = { 975,6762f, 4455,78f, 56,5023f };
			uParam0->f_149 = { -4,9392f, 0f, -78,2685f };
			uParam0->f_152 = { 978,1075f, 4464,296f, 55,454f };
			uParam0->f_155 = { -23,0999f, 0f, 101,9763f };
			break;
		
		case 35:
			uParam0->f_107 = { 944,6802f, 3614,734f, 31,6225f };
			uParam0->f_110 = { 944,6802f, 3614,734f, 31,6225f };
			uParam0->f_191 = { 2921,194f, 3724,188f, 51,6753f };
			uParam0->f_194 = 344,2805f;
			break;
		
		case 36:
			uParam0->f_107 = { 2006,85f, 3069,641f, 46,05f };
			uParam0->f_110 = { 2006,85f, 3069,641f, 46,05f };
			break;
		
		case 37:
			uParam0->f_164 = { 1463,12f, 3099,275f, 39,7173f };
			uParam0->f_167 = 343,2928f;
			uParam0->f_107 = { 1178,197f, 3271,263f, 38,2326f };
			uParam0->f_110 = { 1178,197f, 3271,263f, 38,2326f };
			StringCopy(&(uParam0->f_113), "DTRFKGR_12", 64);
			StringCopy(&(uParam0->f_129), "ARMS_REPT3", 64);
			uParam0->f_145 = 2;
			uParam0->f_190 = 32f;
			uParam0->f_168 = { 1433,04f, 3146,104f, 40,0637f };
			uParam0->f_158[0] = { 2592,272f, 4648,56f, 33,1437f };
			uParam0->f_162[0] = 276,7005f;
			uParam0->f_66[0].f_19 = 1;
			uParam0->f_66[0] = 0;
			uParam0->f_66[0].f_4 = "OldBoatWayPt";
			uParam0->f_66[0].f_5 = { 2592,272f, 4648,56f, 33,1437f };
			uParam0->f_66[1].f_18 = 1;
			uParam0->f_66[1] = 1;
			uParam0->f_66[1].f_1 = -644710429;
			uParam0->f_66[1].f_3 = "NEW_TYPE1_08_PLANE";
			uParam0->f_66[1].f_2 = 101;
			uParam0->f_66[1].f_5 = { 462,8008f, 3198,386f, 76,7479f };
			uParam0->f_66[1].f_11 = 0,0056f;
			uParam0->f_66[1].f_12 = 0,0335f;
			uParam0->f_66[1].f_13 = -0,7024f;
			uParam0->f_66[1].f_14 = 0,711f;
			uParam0->f_66[1].f_8 = { 350f, 350f, 10f };
			uParam0->f_66[1].f_17 = 665f;
			uParam0->f_168 = { 1178,197f, 3271,263f, 38,2326f };
			break;
		
		case 38:
			uParam0->f_164 = { 1463,12f, 3099,275f, 40,2f };
			uParam0->f_167 = 343,2928f;
			uParam0->f_107 = { 1421,57f, 3139,941f, 39,9915f };
			uParam0->f_110 = { 1421,57f, 3139,941f, 39,9915f };
			StringCopy(&(uParam0->f_113), "DTRFKGR_6", 64);
			StringCopy(&(uParam0->f_129), "ARMS_REPT0", 64);
			uParam0->f_145 = 1;
			uParam0->f_190 = 32f;
			uParam0->f_168 = { 1433,04f, 3146,104f, 40,0637f };
			uParam0->f_158[0] = { 2533,499f, 4590,136f, 32,3838f };
			uParam0->f_162[0] = 137,0484f;
			uParam0->f_66[0].f_19 = 1;
			uParam0->f_66[0] = 0;
			uParam0->f_66[0].f_4 = "TrailersAndBoatWayPt";
			uParam0->f_66[0].f_5 = { 2533,499f, 4590,136f, 32,3838f };
			uParam0->f_66[1].f_18 = 1;
			uParam0->f_66[1] = 1;
			uParam0->f_66[1].f_1 = -644710429;
			uParam0->f_66[1].f_3 = "SmugglersPlane";
			uParam0->f_66[1].f_2 = 101;
			uParam0->f_66[1].f_5 = { 675,2627f, 2968,759f, 71,1935f };
			uParam0->f_66[1].f_11 = 0,0182f;
			uParam0->f_66[1].f_12 = 0,0018f;
			uParam0->f_66[1].f_13 = -0,6328f;
			uParam0->f_66[1].f_14 = 0,7741f;
			uParam0->f_66[1].f_8 = { 500f, 500f, 10f };
			uParam0->f_66[1].f_17 = 726f;
			uParam0->f_168 = { 1428,3f, 3143,96f, 40,387f };
			break;
		
		case 40:
			uParam0->f_107 = { 2920,068f, 4635,75f, 47,5452f };
			uParam0->f_110 = { 2920,068f, 4635,75f, 47,5452f };
			StringCopy(&(uParam0->f_113), "DTRFKGR_4", 64);
			StringCopy(&(uParam0->f_129), "ARMS_GR04a", 64);
			uParam0->f_190 = 32f;
			uParam0->f_145 = 1;
			uParam0->f_168 = { 1433,04f, 3146,104f, 40,0637f };
			uParam0->f_158[0] = { 3265,948f, 5004,296f, 21,2842f };
			uParam0->f_162[0] = 71,4713f;
			uParam0->f_66[0].f_19 = 1;
			uParam0->f_66[0] = 0;
			uParam0->f_66[0].f_4 = "RailHouse01WayPt";
			uParam0->f_66[0].f_5 = { 3265,948f, 5004,296f, 21,2842f };
			uParam0->f_66[1].f_18 = 1;
			uParam0->f_66[1] = 1;
			uParam0->f_66[1].f_1 = -644710429;
			uParam0->f_66[1].f_3 = "RailHousePlane";
			uParam0->f_66[1].f_2 = 101;
			uParam0->f_66[1].f_5 = { 3056,89f, 4057,336f, 103,7062f };
			uParam0->f_66[1].f_11 = 0,0016f;
			uParam0->f_66[1].f_12 = -0,0023f;
			uParam0->f_66[1].f_13 = 0,134f;
			uParam0->f_66[1].f_14 = 0,991f;
			uParam0->f_66[1].f_8 = { 250f, 250f, 10f };
			uParam0->f_66[1].f_17 = 548f;
			uParam0->f_168 = { 2924,086f, 4638,246f, 47,5449f };
			break;
		
		case 42:
			uParam0->f_107 = { 269,134f, 3150,74f, 41,1195f };
			uParam0->f_110 = { 269,134f, 3150,74f, 41,1195f };
			uParam0->f_146 = { 283,6494f, 3136,644f, 42,3597f };
			uParam0->f_149 = { -3,8976f, 0f, 45,0614f };
			uParam0->f_152 = { 273,0124f, 3173,184f, 42,114f };
			uParam0->f_155 = { 11,1353f, -0,0101f, 123,4599f };
			uParam0->f_164 = { 268,3168f, 3168,125f, 41,7703f };
			uParam0->f_167 = 329,546f;
			uParam0->f_171 = { 282,4717f, 3140,178f, 40,788f };
			uParam0->f_174 = 93,0356f;
			break;
		
		case 41:
			uParam0->f_107 = { 279,3029f, 3184,389f, 41,1172f };
			uParam0->f_110 = { 279,3029f, 3184,389f, 41,1172f };
			break;
		
		case 43:
			uParam0->f_107 = { 1350,97f, 4064,97f, 30,15f };
			uParam0->f_110 = { 1350,97f, 4064,97f, 30,15f };
			break;
		
		case 44:
			uParam0->f_107 = { 533,2363f, 3972,098f, 30,9251f };
			uParam0->f_110 = { 533,2363f, 3972,098f, 30,9251f };
			break;
		
		case 45:
			uParam0->f_107 = { -429,903f, 4436,65f, 27,1854f };
			uParam0->f_110 = { -429,903f, 4436,65f, 27,1854f };
			break;
		
		case 46:
			uParam0->f_107 = { -1249,915f, 2557,707f, 16,3597f };
			uParam0->f_110 = { -1249,915f, 2557,707f, 16,3597f };
			uParam0->f_195[0] = { 2434,29f, 3982,002f, 35,7981f };
			uParam0->f_195[1] = { 1633,58f, 3486,548f, 35,6313f };
			uParam0->f_195[2] = { 936,2628f, 3538,19f, 33,0475f };
			uParam0->f_195[3] = { 225,5858f, 3007,948f, 41,4752f };
			uParam0->f_195[4] = { 77,104f, 2856,502f, 51,914f };
			uParam0->f_195[5] = { -374,427f, 2878,798f, 41,0882f };
			uParam0->f_195[6] = { -1441,497f, 2661,541f, 16,6505f };
			break;
		
		case 47:
			uParam0->f_107 = { 180,5068f, 6577,189f, 30,8447f };
			uParam0->f_110 = { 180,5068f, 6577,189f, 30,8447f };
			uParam0->f_195[0] = { 2945,647f, 3901,078f, 51,2096f };
			uParam0->f_195[1] = { 2725,51f, 4750,312f, 43,4419f };
			uParam0->f_195[2] = { 2446,74f, 5704,023f, 44,2439f };
			uParam0->f_195[3] = { 2158,837f, 6068,171f, 50,8745f };
			uParam0->f_195[4] = { 1929,864f, 6332,483f, 42,1894f };
			uParam0->f_195[5] = { 1119,306f, 6494,814f, 20,0857f };
			uParam0->f_195[6] = { 180,5068f, 6577,189f, 30,8447f };
			break;
		
		case 48:
			uParam0->f_107 = { 1559,322f, 2204,163f, 77,9422f };
			uParam0->f_110 = { 1559,322f, 2204,163f, 77,9422f };
			break;
		
		case 49:
			uParam0->f_107 = { 2711,447f, 4145,717f, 42,8083f };
			uParam0->f_110 = { 2711,447f, 4145,717f, 42,8083f };
			break;
		
		case 39:
			uParam0->f_107 = { 1436,967f, 3144,639f, 40,0988f };
			uParam0->f_110 = { 1436,967f, 3144,639f, 40,0988f };
			break;
		
		case 50:
			uParam0->f_107 = { 3284,101f, 5153,764f, 17,5866f };
			uParam0->f_110 = { 3284,101f, 5153,764f, 17,5866f };
			break;
		
		case 51:
			uParam0->f_107 = { 2953,748f, 2789,826f, 41,0514f };
			uParam0->f_110 = { 2953,748f, 2789,826f, 41,0514f };
			break;
		
		case 52:
			uParam0->f_107 = { 2211,155f, 5599,272f, 52,8715f };
			uParam0->f_110 = { 2211,155f, 5599,272f, 52,8715f };
			break;
		
		case 53:
			uParam0->f_107 = { 3811,882f, 4462,616f, 3,1544f };
			uParam0->f_110 = { 3811,882f, 4462,616f, 3,1544f };
			break;
		
		case 54:
			uParam0->f_107 = { 3927,053f, 4391,273f, 15,6169f };
			uParam0->f_110 = { 3927,053f, 4391,273f, 15,6169f };
			break;
		
		case 55:
			uParam0->f_107 = { 11,4536f, 6856,394f, 11,9117f };
			uParam0->f_110 = { 11,4536f, 6856,394f, 11,9117f };
			break;
		
		case 56:
			uParam0->f_107 = { -943,9194f, 6176,161f, 3,0489f };
			uParam0->f_110 = { -943,9194f, 6176,161f, 3,0489f };
			break;
		
		case 57:
			uParam0->f_107 = { -1150,046f, 4923,993f, 220,3399f };
			uParam0->f_110 = { -1150,046f, 4923,993f, 220,3399f };
			break;
		
		case 58:
			uParam0->f_107 = { -1632,056f, 4738,689f, 52,1812f };
			uParam0->f_110 = { -1632,056f, 4738,689f, 52,1812f };
			break;
		
		case 59:
			uParam0->f_107 = { 166,396f, 2281,323f, 92,21f };
			uParam0->f_110 = { 166,396f, 2281,323f, 92,21f };
			break;
		
		case 60:
			uParam0->f_107 = { -288,5126f, 2569,375f, 71,5438f };
			uParam0->f_110 = { -288,5126f, 2569,375f, 71,5438f };
			break;
		
		case 73:
			uParam0->f_107 = { -68,9043f, 1895,918f, 195,3272f };
			uParam0->f_110 = { -68,9043f, 1895,918f, 195,3272f };
			break;
		
		case 74:
			uParam0->f_107 = { 1885,539f, 432,242f, 163,2558f };
			uParam0->f_110 = { 1885,539f, 432,242f, 163,2558f };
			break;
		
		case 75:
			uParam0->f_107 = { -2130f, 4574,296f, 1,6719f };
			uParam0->f_110 = { -2130f, 4574,296f, 1,6719f };
			break;
		
		case 76:
			uParam0->f_107 = { -312,8494f, 3796,139f, 66,9603f };
			uParam0->f_110 = { -312,8494f, 3796,139f, 66,9603f };
			break;
		
		case 61:
			(*uParam0)[0] = 0;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "NEW_TYPE1_01";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { 2347,18f, 5510,768f, 51,2754f };
			uParam0[0]->f_8 = 0,0058f;
			uParam0[0]->f_9 = -0,02f;
			uParam0[0]->f_10 = 0,4672f;
			uParam0[0]->f_11 = 0,8839f;
			uParam0[0]->f_1 = func_353();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "NEW_TYPE1_01";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 2366,147f, 5640,438f, 88,7714f };
			uParam0[1]->f_8 = 0,0794f;
			uParam0[1]->f_9 = -0,0272f;
			uParam0[1]->f_10 = 0,7464f;
			uParam0[1]->f_11 = 0,6602f;
			uParam0[1]->f_1 = func_353();
			(*uParam0)[2] = 1;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "NEW_TYPE1_01_PLANE";
			uParam0[2]->f_3 = 101;
			uParam0[2]->f_5 = { 3367,586f, 5277,988f, 130,1408f };
			uParam0[2]->f_8 = 0,0266f;
			uParam0[2]->f_9 = 0,084f;
			uParam0[2]->f_10 = 0,6817f;
			uParam0[2]->f_11 = 0,7263f;
			uParam0[2]->f_1 = -644710429;
			uParam0[2]->f_12 = 1135f;
			uParam0->f_107 = { 2225,516f, 5582,665f, 52,8192f };
			uParam0->f_110 = { 2225,516f, 5582,665f, 52,8192f };
			uParam0->f_175 = 150f;
			StringCopy(&(uParam0->f_113), "DTRFKGR_3", 64);
			StringCopy(&(uParam0->f_129), "ARMS_TYPE102", 64);
			uParam0->f_190 = 22f;
			uParam0->f_145 = 0;
			uParam0->f_176[0] = { 2216,771f, 5564,993f, 52,706f };
			uParam0->f_176[1] = { 2217,367f, 5595,737f, 53,0513f };
			uParam0->f_183[0] = { 2204,331f, 5565,987f, 52,8359f };
			uParam0->f_183[1] = { 2216,07f, 5601,528f, 53,275f };
			break;
		
		case 62:
			(*uParam0)[0] = 0;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "NEW_TYPE1_02";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { 3689,647f, 4616,099f, 18,238f };
			uParam0[0]->f_8 = 0,0438f;
			uParam0[0]->f_9 = 0,0453f;
			uParam0[0]->f_10 = 0,9958f;
			uParam0[0]->f_11 = -0,0665f;
			uParam0[0]->f_1 = func_353();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "NEW_TYPE1_02";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 3767,36f, 4528,497f, 5,2465f };
			uParam0[1]->f_8 = 0,0233f;
			uParam0[1]->f_9 = 0,0886f;
			uParam0[1]->f_10 = 0,9359f;
			uParam0[1]->f_11 = 0,34f;
			uParam0[1]->f_1 = func_353();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "NEW_TYPE1_02";
			uParam0[1]->f_3 = 103;
			uParam0[1]->f_5 = { 3589,693f, 4594,061f, 26,9929f };
			uParam0[1]->f_8 = 0,1094f;
			uParam0[1]->f_9 = 0,1563f;
			uParam0[1]->f_10 = 0,9815f;
			uParam0[1]->f_11 = 0,0156f;
			uParam0[1]->f_1 = func_353();
			(*uParam0)[2] = 1;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "NEW_TYPE1_02_PLANE";
			uParam0[2]->f_3 = 101;
			uParam0[2]->f_5 = { 3933,134f, 3757,129f, 105,0956f };
			uParam0[2]->f_8 = 0,0209f;
			uParam0[2]->f_9 = 0,0207f;
			uParam0[2]->f_10 = 0,152f;
			uParam0[2]->f_11 = 0,9879f;
			uParam0[2]->f_1 = -644710429;
			uParam0[2]->f_12 = 745f;
			uParam0->f_107 = { 3702,827f, 4511,593f, 20,1186f };
			uParam0->f_110 = { 3702,827f, 4511,593f, 20,1186f };
			uParam0->f_175 = 175f;
			StringCopy(&(uParam0->f_113), "DTRFKGR_13", 64);
			StringCopy(&(uParam0->f_129), "ARMS_TYPE107", 64);
			uParam0->f_145 = 0;
			uParam0->f_190 = 32f;
			break;
		
		case 63:
			(*uParam0)[0] = 0;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "NEW_TYPE1_03";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { 2639,021f, 3208,713f, 53,3696f };
			uParam0[0]->f_8 = 0,076f;
			uParam0[0]->f_9 = 0,022f;
			uParam0[0]->f_10 = -0,0104f;
			uParam0[0]->f_11 = 0,9968f;
			uParam0[0]->f_1 = func_353();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "NEW_TYPE1_03";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 2697,863f, 3346,009f, 56,7158f };
			uParam0[1]->f_8 = 0,0581f;
			uParam0[1]->f_9 = -0,0074f;
			uParam0[1]->f_10 = 0,9615f;
			uParam0[1]->f_11 = 0,2686f;
			uParam0[1]->f_1 = func_353();
			(*uParam0)[2] = 0;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "NEW_TYPE1_03";
			uParam0[2]->f_3 = 103;
			uParam0[2]->f_5 = { 2534,338f, 3230,476f, 51,7537f };
			uParam0[2]->f_8 = 0,0483f;
			uParam0[2]->f_9 = -0,0277f;
			uParam0[2]->f_10 = -0,4655f;
			uParam0[2]->f_11 = 0,8833f;
			uParam0[2]->f_1 = func_353();
			(*uParam0)[3] = 1;
			uParam0[3]->f_2 = 1;
			uParam0[3]->f_4 = "NEW_TYPE1_03_PLANE";
			uParam0[3]->f_3 = 101;
			uParam0[3]->f_5 = { 2343,503f, 2962,599f, 92,1772f };
			uParam0[3]->f_8 = 0,1689f;
			uParam0[3]->f_9 = 0,4059f;
			uParam0[3]->f_10 = -0,2324f;
			uParam0[3]->f_11 = 0,8676f;
			uParam0[3]->f_1 = -644710429;
			uParam0[3]->f_12 = 391f;
			uParam0->f_107 = { 2623,645f, 3287,713f, 54,3001f };
			uParam0->f_110 = { 2623,645f, 3287,713f, 54,3001f };
			uParam0->f_175 = 160f;
			StringCopy(&(uParam0->f_113), "DTRFKGR_11", 64);
			StringCopy(&(uParam0->f_129), "ARMS_TYPE106", 64);
			uParam0->f_145 = 2;
			uParam0->f_190 = 32f;
			break;
		
		case 64:
			(*uParam0)[0] = 0;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "NEW_TYPE1_04";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { 1687,741f, 2958,591f, 57,288f };
			uParam0[0]->f_8 = 0,0874f;
			uParam0[0]->f_9 = -0,0283f;
			uParam0[0]->f_10 = -0,48f;
			uParam0[0]->f_11 = 0,8724f;
			uParam0[0]->f_1 = func_353();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "NEW_TYPE1_04";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 1735,854f, 3167,743f, 42,7488f };
			uParam0[1]->f_8 = 0,0047f;
			uParam0[1]->f_9 = 0,0033f;
			uParam0[1]->f_10 = 0,9995f;
			uParam0[1]->f_11 = 0,0313f;
			uParam0[1]->f_1 = func_353();
			(*uParam0)[2] = 1;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "NEW_TYPE1_04_PLANE";
			uParam0[2]->f_3 = 101;
			uParam0[2]->f_5 = { 873,8751f, 3879,556f, 272,0572f };
			uParam0[2]->f_8 = -0,0166f;
			uParam0[2]->f_9 = -0,1132f;
			uParam0[2]->f_10 = 0,9184f;
			uParam0[2]->f_11 = -0,3788f;
			uParam0[2]->f_1 = -644710429;
			uParam0[2]->f_12 = 1178f;
			uParam0->f_107 = { 1761,836f, 3050,562f, 60,8981f };
			uParam0->f_110 = { 1761,836f, 3050,562f, 60,8981f };
			uParam0->f_175 = 190f;
			StringCopy(&(uParam0->f_113), "DTRFKGR_9", 64);
			StringCopy(&(uParam0->f_129), "ARMS_TYPE105", 64);
			uParam0->f_145 = 1;
			uParam0->f_190 = 15f;
			uParam0->f_176[0] = { 1736,891f, 3019,613f, 61,4096f };
			uParam0->f_176[1] = { 1790,993f, 3030,57f, 59,2148f };
			uParam0->f_183[0] = { 1724,032f, 3014,934f, 61,2488f };
			uParam0->f_183[1] = { 1777,958f, 3023,668f, 61,738f };
			break;
		
		case 65:
			(*uParam0)[0] = 0;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "NEW_TYPE1_05";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { 1968,251f, 3563,292f, 37,8475f };
			uParam0[0]->f_8 = -0,0183f;
			uParam0[0]->f_9 = 0,0422f;
			uParam0[0]->f_10 = 0,9225f;
			uParam0[0]->f_11 = 0,3832f;
			uParam0[0]->f_1 = func_353();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "NEW_TYPE1_05";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 1867,285f, 3437,477f, 39,7184f };
			uParam0[1]->f_8 = 0,0253f;
			uParam0[1]->f_9 = 0,0153f;
			uParam0[1]->f_10 = 0,714f;
			uParam0[1]->f_11 = -0,6995f;
			uParam0[1]->f_1 = func_353();
			(*uParam0)[2] = 0;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "NEW_TYPE1_05";
			uParam0[2]->f_3 = 103;
			uParam0[2]->f_5 = { 1890,261f, 3391,307f, 40,7963f };
			uParam0[2]->f_8 = 0,0134f;
			uParam0[2]->f_9 = 0,0213f;
			uParam0[2]->f_10 = -0,4276f;
			uParam0[2]->f_11 = 0,9036f;
			uParam0[2]->f_1 = func_353();
			(*uParam0)[3] = 0;
			uParam0[3]->f_2 = 1;
			uParam0[3]->f_4 = "NEW_TYPE1_05";
			uParam0[3]->f_3 = 104;
			uParam0[3]->f_5 = { 2067,032f, 3330,474f, 45,1739f };
			uParam0[3]->f_8 = 0,0121f;
			uParam0[3]->f_9 = 0,0396f;
			uParam0[3]->f_10 = 0,373f;
			uParam0[3]->f_11 = 0,9269f;
			uParam0[3]->f_1 = func_353();
			(*uParam0)[4] = 1;
			uParam0[4]->f_2 = 1;
			uParam0[4]->f_4 = "NEW_TYPE1_05_PLANE";
			uParam0[4]->f_3 = 101;
			uParam0[4]->f_5 = { 1730,793f, 4305,94f, 149,1613f };
			uParam0[4]->f_8 = 0,0174f;
			uParam0[4]->f_9 = -0,0833f;
			uParam0[4]->f_10 = 0,9814f;
			uParam0[4]->f_11 = -0,172f;
			uParam0[4]->f_1 = -644710429;
			uParam0[4]->f_12 = 853f;
			uParam0->f_107 = { 1956,443f, 3438,924f, 40,7919f };
			uParam0->f_110 = { 1956,443f, 3438,924f, 40,7919f };
			uParam0->f_175 = 150f;
			StringCopy(&(uParam0->f_113), "DTRFKGR_5", 64);
			StringCopy(&(uParam0->f_129), "ARMS_TYPE103", 64);
			uParam0->f_190 = 32f;
			uParam0->f_145 = 2;
			uParam0->f_176[0] = { 1911,579f, 3434,243f, 44,428f };
			uParam0->f_176[1] = { 1958,7f, 3486,656f, 40,035f };
			uParam0->f_183[0] = { 1906,108f, 3434,05f, 43,1727f };
			uParam0->f_183[1] = { 1931,406f, 3503,653f, 40,4347f };
			break;
		
		case 66:
			(*uParam0)[0] = 0;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "NEW_TYPE1_06";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { 2747,765f, 2902,531f, 35,8669f };
			uParam0[0]->f_8 = -0,0031f;
			uParam0[0]->f_9 = -0,0001f;
			uParam0[0]->f_10 = 0,9773f;
			uParam0[0]->f_11 = -0,2119f;
			uParam0[0]->f_1 = func_353();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "NEW_TYPE1_06";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 2625,508f, 2814,443f, 33,1277f };
			uParam0[1]->f_8 = 0,0499f;
			uParam0[1]->f_9 = -0,0287f;
			uParam0[1]->f_10 = -0,3652f;
			uParam0[1]->f_11 = 0,9292f;
			uParam0[1]->f_1 = func_353();
			(*uParam0)[2] = 0;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "NEW_TYPE1_06";
			uParam0[2]->f_3 = 103;
			uParam0[2]->f_5 = { 2694,796f, 2796,249f, 34,4047f };
			uParam0[2]->f_8 = 0,1772f;
			uParam0[2]->f_9 = -0,0431f;
			uParam0[2]->f_10 = -0,1088f;
			uParam0[2]->f_11 = 0,9772f;
			uParam0[2]->f_1 = func_353();
			(*uParam0)[3] = 1;
			uParam0[3]->f_2 = 1;
			uParam0[3]->f_4 = "NEW_TYPE1_06_PLANE";
			uParam0[3]->f_3 = 101;
			uParam0[3]->f_5 = { 1902,63f, 3026,488f, 286,5499f };
			uParam0[3]->f_8 = 0,0504f;
			uParam0[3]->f_9 = -0,1138f;
			uParam0[3]->f_10 = 0,8059f;
			uParam0[3]->f_11 = -0,5788f;
			uParam0[3]->f_1 = -644710429;
			uParam0[3]->f_12 = 753f;
			uParam0->f_107 = { 2685,869f, 2844,306f, 38,8406f };
			uParam0->f_110 = { 2685,869f, 2844,306f, 38,8406f };
			uParam0->f_175 = 125f;
			StringCopy(&(uParam0->f_113), "DTRFKGR_19", 64);
			StringCopy(&(uParam0->f_129), "ARMS_TYPE110", 64);
			uParam0->f_145 = 0;
			uParam0->f_190 = 32f;
			break;
		
		case 67:
			(*uParam0)[0] = 0;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "NEW_TYPE1_07";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { 2935,607f, 4592,214f, 48,7006f };
			uParam0[0]->f_8 = -0,0031f;
			uParam0[0]->f_9 = -0,013f;
			uParam0[0]->f_10 = 0,9318f;
			uParam0[0]->f_11 = 0,3628f;
			uParam0[0]->f_1 = func_353();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "NEW_TYPE1_07";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 2941,709f, 4464,889f, 46,4858f };
			uParam0[1]->f_8 = 0,0103f;
			uParam0[1]->f_9 = 0,0254f;
			uParam0[1]->f_10 = 0,8549f;
			uParam0[1]->f_11 = 0,5181f;
			uParam0[1]->f_1 = func_353();
			(*uParam0)[2] = 0;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "NEW_TYPE1_07";
			uParam0[2]->f_3 = 103;
			uParam0[2]->f_5 = { 2774,921f, 4468,448f, 47,5966f };
			uParam0[2]->f_8 = 0,0053f;
			uParam0[2]->f_9 = -0,0205f;
			uParam0[2]->f_10 = -0,3996f;
			uParam0[2]->f_11 = 0,9164f;
			uParam0[2]->f_1 = func_353();
			(*uParam0)[3] = 1;
			uParam0[3]->f_2 = 1;
			uParam0[3]->f_4 = "NEW_TYPE1_07_PLANE";
			uParam0[3]->f_3 = 101;
			uParam0[3]->f_5 = { 3495,601f, 3895,246f, 284,7452f };
			uParam0[3]->f_8 = -0,0611f;
			uParam0[3]->f_9 = 0,0094f;
			uParam0[3]->f_10 = 0,4051f;
			uParam0[3]->f_11 = 0,9122f;
			uParam0[3]->f_1 = -644710429;
			uParam0[3]->f_12 = 825f;
			uParam0->f_107 = { 2856,502f, 4485,064f, 47,3373f };
			uParam0->f_110 = { 2856,502f, 4485,064f, 47,3373f };
			uParam0->f_175 = 140f;
			StringCopy(&(uParam0->f_113), "DTRFKGR_7", 64);
			StringCopy(&(uParam0->f_129), "ARMS_TYPE104", 64);
			uParam0->f_145 = 0;
			uParam0->f_190 = 32f;
			uParam0->f_176[0] = { 2862,319f, 4465,292f, 47,4456f };
			uParam0->f_176[1] = { 2889,961f, 4494,598f, 46,9656f };
			uParam0->f_183[0] = { 2868,774f, 4467,256f, 47,3611f };
			uParam0->f_183[1] = { 2883,83f, 4484,409f, 47,3394f };
			break;
		
		case 68:
			(*uParam0)[0] = 0;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "NEW_TYPE1_08";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { 1174,944f, 3191,438f, 38,8565f };
			uParam0[0]->f_8 = 0,0672f;
			uParam0[0]->f_9 = 0,0398f;
			uParam0[0]->f_10 = 0,0199f;
			uParam0[0]->f_11 = 0,9967f;
			uParam0[0]->f_1 = func_353();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "NEW_TYPE1_08";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 1117,591f, 3328,312f, 34,794f };
			uParam0[1]->f_8 = 0,0001f;
			uParam0[1]->f_9 = 0,0037f;
			uParam0[1]->f_10 = 0,9944f;
			uParam0[1]->f_11 = 0,1059f;
			uParam0[1]->f_1 = func_353();
			(*uParam0)[2] = 0;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "NEW_TYPE1_08";
			uParam0[2]->f_3 = 103;
			uParam0[2]->f_5 = { 1357,359f, 3275,735f, 37,4399f };
			uParam0[2]->f_8 = -0,0329f;
			uParam0[2]->f_9 = 0,015f;
			uParam0[2]->f_10 = 0,6826f;
			uParam0[2]->f_11 = 0,7299f;
			uParam0[2]->f_1 = func_353();
			(*uParam0)[3] = 1;
			uParam0[3]->f_2 = 1;
			uParam0[3]->f_4 = "NEW_TYPE1_08_PLANE";
			uParam0[3]->f_3 = 101;
			uParam0[3]->f_5 = { 462,8008f, 3198,386f, 76,7479f };
			uParam0[3]->f_8 = 0,0056f;
			uParam0[3]->f_9 = 0,0335f;
			uParam0[3]->f_10 = -0,7024f;
			uParam0[3]->f_11 = 0,711f;
			uParam0[3]->f_1 = -644710429;
			uParam0[3]->f_12 = 665f;
			uParam0->f_107 = { 1178,197f, 3271,263f, 38,2326f };
			uParam0->f_110 = { 1178,197f, 3271,263f, 38,2326f };
			uParam0->f_175 = 175f;
			StringCopy(&(uParam0->f_113), "DTRFKGR_17", 64);
			StringCopy(&(uParam0->f_129), "ARMS_TYPE109", 64);
			uParam0->f_145 = 2;
			uParam0->f_190 = 32f;
			break;
		
		case 69:
			(*uParam0)[0] = 0;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "NEW_TYPE1_09";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { 2626,512f, 4173,169f, 42,5261f };
			uParam0[0]->f_8 = -0,025f;
			uParam0[0]->f_9 = -0,0094f;
			uParam0[0]->f_10 = -0,6106f;
			uParam0[0]->f_11 = 0,7915f;
			uParam0[0]->f_1 = func_353();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "NEW_TYPE1_09";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 2749,975f, 4049,285f, 60f };
			uParam0[1]->f_8 = -0,0153f;
			uParam0[1]->f_9 = 0,0378f;
			uParam0[1]->f_10 = 0,3854f;
			uParam0[1]->f_11 = 0,9219f;
			uParam0[1]->f_1 = func_353();
			(*uParam0)[2] = 0;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "NEW_TYPE1_09";
			uParam0[2]->f_3 = 103;
			uParam0[2]->f_5 = { 2770,138f, 4202,668f, 46,3271f };
			uParam0[2]->f_8 = -0,0508f;
			uParam0[2]->f_9 = -0,0362f;
			uParam0[2]->f_10 = 0,8874f;
			uParam0[2]->f_11 = 0,4568f;
			uParam0[2]->f_1 = func_353();
			(*uParam0)[3] = 1;
			uParam0[3]->f_2 = 1;
			uParam0[3]->f_4 = "NEW_TYPE1_09_PLANE";
			uParam0[3]->f_3 = 101;
			uParam0[3]->f_5 = { 462,8008f, 3198,386f, 76,7479f };
			uParam0[3]->f_8 = 0,0056f;
			uParam0[3]->f_9 = 0,0335f;
			uParam0[3]->f_10 = -0,7024f;
			uParam0[3]->f_11 = 0,711f;
			uParam0[3]->f_1 = -644710429;
			uParam0[3]->f_12 = 860f;
			uParam0->f_107 = { 2709,13f, 4146,82f, 42,7539f };
			uParam0->f_110 = { 2709,13f, 4146,82f, 42,7539f };
			uParam0->f_175 = 350f;
			StringCopy(&(uParam0->f_113), "DTRFKGR_1", 64);
			StringCopy(&(uParam0->f_129), "ARMS_GR01", 64);
			uParam0->f_190 = 27f;
			uParam0->f_145 = 2;
			uParam0->f_176[0] = { 2702,321f, 4120,562f, 42,8035f };
			uParam0->f_176[1] = { 2719,254f, 4122,151f, 42,781f };
			uParam0->f_183[0] = { 2696,821f, 4123,544f, 42,7634f };
			uParam0->f_183[1] = { 2745,133f, 4144,972f, 43,1873f };
			break;
		
		case 70:
			uParam0->f_107 = { 1206,882f, 3599,093f, 33,0185f };
			uParam0->f_110 = { 1206,882f, 3599,093f, 33,0185f };
			StringCopy(&(uParam0->f_113), "DTRFKGR_16", 64);
			StringCopy(&(uParam0->f_129), "ARMS_TYP2_16", 64);
			uParam0->f_145 = 0;
			uParam0->f_190 = 32f;
			uParam0->f_158[0] = { 2639,703f, 3993,148f, 41,6388f };
			uParam0->f_162[0] = 80,0101f;
			uParam0->f_66[0].f_19 = 1;
			uParam0->f_66[0] = 0;
			uParam0->f_66[0].f_4 = "NEW_TYPE2_01";
			uParam0->f_66[0].f_5 = { 2639,703f, 3993,148f, 41,6388f };
			uParam0->f_66[1].f_18 = 1;
			uParam0->f_66[1] = 1;
			uParam0->f_66[1].f_1 = -644710429;
			uParam0->f_66[1].f_3 = "NEW_TYPE2_01_PLANE";
			uParam0->f_66[1].f_2 = 101;
			uParam0->f_66[1].f_5 = { 28,4625f, 3715,926f, 230,1408f };
			uParam0->f_66[1].f_11 = 0,0491f;
			uParam0->f_66[1].f_12 = -0,1637f;
			uParam0->f_66[1].f_13 = 0,7293f;
			uParam0->f_66[1].f_14 = -0,6625f;
			uParam0->f_66[1].f_8 = { 700f, 700f, 10f };
			uParam0->f_66[1].f_17 = 1135f;
			uParam0->f_168 = { 1206,882f, 3599,093f, 33,0185f };
			break;
		
		case 71:
			uParam0->f_107 = { 2181,767f, 3367,612f, 44,4324f };
			uParam0->f_110 = { 2181,767f, 3367,612f, 44,4324f };
			StringCopy(&(uParam0->f_113), "DTRFKGR_18", 64);
			StringCopy(&(uParam0->f_129), "ARMS_TYP2_18", 64);
			uParam0->f_145 = 2;
			uParam0->f_190 = 32f;
			uParam0->f_158[0] = { 2849,454f, 3579,741f, 52,3279f };
			uParam0->f_162[0] = 155,842f;
			uParam0->f_66[0].f_19 = 1;
			uParam0->f_66[0] = 0;
			uParam0->f_66[0].f_4 = "NEW_TYPE2_02";
			uParam0->f_66[0].f_5 = { 2849,454f, 3579,741f, 52,3279f };
			uParam0->f_66[1].f_18 = 1;
			uParam0->f_66[1] = 1;
			uParam0->f_66[1].f_1 = -644710429;
			uParam0->f_66[1].f_3 = "NEW_TYPE2_02_PLANE";
			uParam0->f_66[1].f_2 = 101;
			uParam0->f_66[1].f_5 = { 1693,565f, 3099,601f, 85,4015f };
			uParam0->f_66[1].f_11 = 0,0143f;
			uParam0->f_66[1].f_12 = 0,0283f;
			uParam0->f_66[1].f_13 = -0,4536f;
			uParam0->f_66[1].f_14 = 0,8906f;
			uParam0->f_66[1].f_8 = { 175f, 175f, 10f };
			uParam0->f_66[1].f_17 = 510f;
			uParam0->f_168 = { 2181,767f, 3367,612f, 44,4324f };
			break;
		
		case 72:
			uParam0->f_107 = { 1690,203f, 3166,528f, 44,8952f };
			uParam0->f_110 = { 1690,203f, 3166,528f, 44,8952f };
			StringCopy(&(uParam0->f_113), "DTRFKGR_20", 64);
			StringCopy(&(uParam0->f_129), "ARMS_TYP2_20", 64);
			uParam0->f_145 = 1;
			uParam0->f_190 = 32f;
			uParam0->f_158[0] = { 2820,657f, 3520,271f, 53,4036f };
			uParam0->f_162[0] = 159,6483f;
			uParam0->f_66[0].f_19 = 1;
			uParam0->f_66[0] = 0;
			uParam0->f_66[0].f_4 = "NEW_TYPE2_03";
			uParam0->f_66[0].f_5 = { 2673,688f, 3429,568f, 54,8667f };
			uParam0->f_66[1].f_18 = 1;
			uParam0->f_66[1] = 1;
			uParam0->f_66[1].f_1 = -644710429;
			uParam0->f_66[1].f_3 = "NEW_TYPE2_03_PLANE";
			uParam0->f_66[1].f_2 = 101;
			uParam0->f_66[1].f_5 = { 684,469f, 2863,946f, 141,8009f };
			uParam0->f_66[1].f_11 = -0,1047f;
			uParam0->f_66[1].f_12 = 0,017f;
			uParam0->f_66[1].f_13 = -0,6939f;
			uParam0->f_66[1].f_14 = 0,7122f;
			uParam0->f_66[1].f_8 = { 350f, 350f, 10f };
			uParam0->f_66[1].f_17 = 1010f;
			uParam0->f_168 = { 1690,203f, 3166,528f, 44,8952f };
			break;
	}
	return 1;
}

int func_353()
{
	iVar0 = (unk_0x09AC81E49EA267F7(0, 65535) % 3);
	switch (iVar0)
	{
		case 0:
			return -16948145;
			break;
		
		case 1:
			return 1770332643;
			break;
		
		case 2:
			return -1207771834;
			break;
		
		default:
			return -16948145;
			break;
	}
	return -16948145;
}

void func_354(var uParam0, int iParam1)
{
	func_352(&(uParam0->f_920), 25);
	switch (iParam1)
	{
		case 1:
			uParam0->f_4 = 65f;
			uParam0->f_5 = 14f;
			*uParam0 = { 2136,653f, 4817,538f, 40,1959f };
			uParam0->f_3 = 208,41f;
			uParam0->f_8 = -644710429;
			uParam0->f_9 = { 2142,564f, 4810,498f, 40,1925f };
			uParam0->f_12 = 111,27f;
			func_352(&(uParam0->f_51[0]), 1);
			func_352(&(uParam0->f_51[1]), 4);
			func_352(&(uParam0->f_51[2]), 5);
			func_352(&(uParam0->f_51[3]), 6);
			uParam0->f_1145[0] = -823509173;
			uParam0->f_1145[1] = -823509173;
			uParam0->f_1145[2] = -823509173;
			uParam0->f_1145[3] = -823509173;
			uParam0->f_1150[0] = -808831384;
			uParam0->f_1150[1] = -808831384;
			uParam0->f_1150[2] = -808831384;
			uParam0->f_1150[3] = -808831384;
			uParam0->f_1155[0] = -1736970383;
			uParam0->f_1155[1] = -1736970383;
			uParam0->f_1155[2] = -1736970383;
			uParam0->f_1155[3] = -1736970383;
			break;
		
		default:
			uParam0->f_8 = -644710429;
			uParam0->f_9 = { 1698,377f, 3251,031f, 39,9022f };
			uParam0->f_12 = 113,027f;
			break;
	}
}

void func_355(int iParam0, var uParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 153;
			uParam1->f_41 = 1;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_44 = 1;
			uParam1->f_51 = 1;
			uParam1->f_58 = 250f;
			uParam1->f_59 = "ARMS_AIR1";
			uParam1->f_4 = 2;
			uParam1->f_5 = 4;
			uParam1->f_8[0] = 60;
			uParam1->f_8[1] = 57;
			uParam1->f_54 = (300 * uParam1->f_4);
			break;
		
		case 1:
			*uParam1 = 154;
			uParam1->f_41 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_44 = 1;
			uParam1->f_45 = 0;
			uParam1->f_46 = 1;
			uParam1->f_58 = 300f;
			uParam1->f_59 = "ARMS_AIR3";
			uParam1->f_4 = 3;
			uParam1->f_5 = 4;
			uParam1->f_8[0] = 76;
			uParam1->f_8[1] = 73;
			uParam1->f_8[2] = 74;
			uParam1->f_54 = (300 * uParam1->f_4);
			break;
		
		case 2:
			*uParam1 = 155;
			uParam1->f_34 = 1;
			uParam1->f_41 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_44 = 1;
			uParam1->f_45 = 1;
			uParam1->f_58 = 360f;
			uParam1->f_59 = "ARMS_AIR7";
			uParam1->f_4 = 4;
			uParam1->f_5 = 6;
			uParam1->f_60 = 0;
			uParam1->f_8[0] = 55;
			uParam1->f_8[1] = 58;
			uParam1->f_8[2] = 21;
			uParam1->f_8[3] = 53;
			uParam1->f_54 = (300 * uParam1->f_4);
			break;
		
		case 3:
			*uParam1 = 156;
			uParam1->f_34 = 1;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_44 = 1;
			uParam1->f_45 = 1;
			uParam1->f_37 = 1;
			uParam1->f_58 = 270f;
			uParam1->f_59 = "ARMS_AIR9";
			uParam1->f_4 = 2;
			uParam1->f_5 = 4;
			uParam1->f_60 = 1;
			func_363(uParam1, 0);
			uParam1->f_8[0] = 41;
			uParam1->f_54 = (300 * uParam1->f_4);
			break;
		
		case 4:
			*uParam1 = 157;
			uParam1->f_34 = 1;
			uParam1->f_41 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_44 = 1;
			uParam1->f_45 = 1;
			uParam1->f_52 = 1;
			uParam1->f_58 = 200f;
			uParam1->f_59 = "ARMS_AIR12";
			uParam1->f_4 = 3;
			uParam1->f_5 = 4;
			uParam1->f_60 = 2;
			uParam1->f_61[0] = -644710429;
			uParam1->f_61[1] = -644710429;
			uParam1->f_61[2] = -644710429;
			uParam1->f_61[3] = -823509173;
			uParam1->f_61[4] = -823509173;
			uParam1->f_61[5] = -823509173;
			uParam1->f_61[6] = -644710429;
			uParam1->f_61[7] = -644710429;
			uParam1->f_61[8] = -644710429;
			uParam1->f_8[0] = 36;
			uParam1->f_8[1] = 13;
			uParam1->f_8[2] = 27;
			uParam1->f_54 = (300 * uParam1->f_4);
			break;
		
		default:
			func_356(uParam1, bParam2);
			break;
	}
}

void func_356(var uParam0, bool bParam1)
{
	uParam0->f_41 = 0;
	uParam0->f_2 = 1;
	uParam0->f_3 = 0;
	uParam0->f_44 = 1;
	uParam0->f_4 = unk_0x09AC81E49EA267F7(2, 5);
	if (bParam1)
	{
		func_362(uParam0);
	}
	func_361(uParam0);
	if ((Global_111638.f_19978.f_2 % 2) == 0)
	{
		uParam0->f_45 = 1;
	}
	else
	{
		uParam0->f_45 = 0;
	}
	if (uParam0->f_45)
	{
		if (uParam0->f_37 || (!bParam1 && func_360()))
		{
			uParam0->f_37 = 1;
			uParam0->f_59 = "ARMS_AIRT";
			func_363(uParam0, 1);
			uParam0->f_34 = 1;
			uParam0->f_4 = 2;
		}
		else
		{
			if (func_360())
			{
				uParam0->f_59 = "ARMS_AIRB";
			}
			else
			{
				uParam0->f_59 = "ARMS_AIRB2";
			}
			uParam0->f_34 = 1;
		}
	}
	else
	{
		if (func_360())
		{
			uParam0->f_59 = "ARMS_AIRP";
		}
		else if (func_360())
		{
			uParam0->f_59 = "ARMS_AIRP2";
		}
		else
		{
			uParam0->f_59 = "ARMS_AIRP3";
		}
		if (func_360())
		{
			uParam0->f_46 = 1;
		}
	}
	if (func_360() || uParam0->f_38)
	{
		uParam0->f_55 = to_float((uParam0->f_4 * 85000));
		uParam0->f_38 = 1;
	}
	uParam0->f_58 = to_float((uParam0->f_4 * 80000));
	uParam0->f_5 = uParam0->f_4 + 1;
	uParam0->f_54 = (300 * uParam0->f_4);
	if (!uParam0->f_37)
	{
		func_358(uParam0, bParam1);
	}
	iVar0 = (unk_0x09AC81E49EA267F7(0, 65535) % 3);
	if (iVar0 == 0)
	{
		uParam0->f_60 = 2;
	}
	else if (iVar0 == 1)
	{
		uParam0->f_60 = 0;
	}
	else if (iVar0 == 2)
	{
		uParam0->f_60 = 1;
	}
	if (bParam1)
	{
		func_362(uParam0);
	}
	func_357(uParam0);
	func_361(uParam0);
}

void func_357(var uParam0)
{
	Global_111638.f_19978.f_16 = uParam0->f_45;
	Global_111638.f_19978.f_17 = uParam0->f_37;
	Global_111638.f_19978.f_19 = uParam0->f_38;
	Global_111638.f_19978.f_20 = uParam0->f_46;
	Global_111638.f_19978.f_26 = uParam0->f_4;
	Global_111638.f_19978.f_21[0] = iLocal_3049[0];
	Global_111638.f_19978.f_21[1] = iLocal_3049[1];
	Global_111638.f_19978.f_21[2] = iLocal_3049[2];
	Global_111638.f_19978.f_21[3] = iLocal_3049[3];
	Global_111638.f_19978.f_27 = uParam0->f_60;
}

int func_358(var uParam0, bool bParam1)
{
	iLocal_3030[0] = 32;
	iLocal_3030[1] = 48;
	iLocal_3030[2] = 3;
	iLocal_3030[3] = 24;
	iLocal_3030[4] = 1;
	iLocal_3030[5] = 4;
	iLocal_3030[6] = 35;
	iLocal_3030[7] = 37;
	iLocal_3030[8] = 29;
	iLocal_3030[9] = 36;
	iLocal_3030[10] = 13;
	iLocal_3030[11] = 53;
	iLocal_3030[12] = 51;
	iLocal_3030[13] = 50;
	iLocal_3030[14] = 76;
	iLocal_3030[15] = 55;
	iLocal_3030[16] = 58;
	iLocal_3030[17] = 74;
	iVar0 = 0;
	iVar1 = 0;
	if (bParam1)
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_4)
		{
			uParam0->f_8[iVar1] = iLocal_3030[Global_111638.f_19978.f_21[iVar1]];
			iVar1++;
		}
	}
	else
	{
		while (iVar0 < uParam0->f_4)
		{
			iVar1 = func_359(&iLocal_3049, uParam0->f_4, 0, 13);
			if (iVar1 != -1)
			{
				iLocal_3049[iVar0] = iVar1;
				uParam0->f_8[iVar0] = iLocal_3030[iVar1];
				iVar0++;
			}
			else
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_359(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = 1;
	iVar2 = 0;
	while (iVar0 && iVar2 < 50)
	{
		iVar0 = 0;
		iVar3 = ((unk_0x09AC81E49EA267F7(0, 50000) % (iParam3 - iParam2)) + iParam2);
		iVar1 = 0;
		while (iVar1 <= (iParam1 - 1))
		{
			if ((*uParam0)[iVar1] == iVar3)
			{
				iVar0 = 1;
				iVar1 = 999999;
			}
			iVar1++;
		}
		iVar2++;
	}
	if (iVar2 == 50)
	{
		return -1;
	}
	return iVar3;
}

int func_360()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_361(var uParam0)
{
}

void func_362(var uParam0)
{
	uParam0->f_60 = Global_111638.f_19978.f_27;
	uParam0->f_45 = Global_111638.f_19978.f_16;
	uParam0->f_37 = Global_111638.f_19978.f_17;
	uParam0->f_38 = Global_111638.f_19978.f_19;
	uParam0->f_46 = Global_111638.f_19978.f_20;
	uParam0->f_4 = Global_111638.f_19978.f_26;
	iVar0 = 0;
	while (iVar0 < uParam0->f_4)
	{
		uParam0->f_8[iVar0] = iLocal_3030[Global_111638.f_19978.f_21[iVar0]];
		iLocal_3049[iVar0] = Global_111638.f_19978.f_21[iVar0];
		iVar0++;
	}
}

void func_363(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		uParam0->f_16[0] = { 1230,996f, 3262,449f, 38,5671f };
		uParam0->f_29[0] = 0;
		uParam0->f_16[1] = { -429,9039f, 5771,217f, 57,5407f };
		uParam0->f_29[1] = 1;
	}
	else
	{
		iVar0 = (unk_0x09AC81E49EA267F7(0, 3999) / 1000);
		if (iVar0 == 0)
		{
			uParam0->f_16[0] = { 2443,95f, 2530,459f, 41,6537f };
			uParam0->f_29[0] = 0;
			uParam0->f_16[1] = { 2863,864f, 3783,813f, 43,8137f };
			uParam0->f_29[1] = 1;
		}
		else if (iVar0 == 1)
		{
			uParam0->f_16[0] = { 696,5959f, 3176,083f, 41,7577f };
			uParam0->f_16[1] = { 2863,864f, 3783,813f, 43,8137f };
		}
		else if (iVar0 == 2)
		{
			uParam0->f_16[0] = { 1918,471f, 3571,945f, 38,2471f };
			uParam0->f_16[1] = { 696,5959f, 3176,083f, 41,7577f };
			uParam0->f_29[1] = 1;
		}
		else if (iVar0 == 3)
		{
			uParam0->f_16[0] = { 2863,864f, 3783,813f, 43,8137f };
			uParam0->f_16[1] = { -429,9039f, 5771,217f, 57,5407f };
		}
	}
}

int func_364()
{
	if (Global_98744 == 10 || Global_98744 == 9)
	{
		return 1;
	}
	return 0;
}

void func_365()
{
	unk_0x066C43E677C08D5C();
	func_368();
	if (bLocal_4542)
	{
		if (unk_0x8FA469D9C5F1A01F())
		{
			unk_0xA37A90C62806D848(1);
		}
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0xE731059548189243(unk_0x16F2683693E537C9(), 1);
	}
	unk_0x5CEB4DB888A62073(false);
	func_168(&uLocal_4510, 0, 0);
	func_367();
	if (!unk_0x437347B10A200C4B(iLocal_6418, 0))
	{
		unk_0xB422445CBCD0AEFB(iLocal_6418, true);
	}
	unk_0x2952D66A502EA873(iLocal_6416, 0);
	unk_0x2952D66A502EA873(iLocal_6417, 0);
	unk_0x842F1AEB2FCC00B7(2164,038f, 4825,627f, 35,61375f, 1899,278f, 4697,752f, 49,08641f, 100f, 1);
	if (!Local_6011.f_297)
	{
		if (unk_0xC844350D5D58C99A(iLocal_6418))
		{
			unk_0x73270B3C9CC833FD(iLocal_6418, true, 1);
			if (func_174(iLocal_6418, 2134,06f, 4780,69f, 41,664f, 1) < 50f)
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
				{
					unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
					unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vLocal_6407, 1, false, 0, 1);
					unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), fLocal_6410);
					unk_0xA954465BA6FDEFE2(&iLocal_6418);
				}
			}
		}
	}
	if (bLocal_3516)
	{
		func_218(Local_6011.f_25);
	}
	func_19(&iLocal_4525);
	func_19(&iLocal_4526);
	func_19(&iLocal_4527);
	func_19(&(Local_6011.f_235));
	func_19(&iLocal_4233);
	func_17(&Local_6011, 0, 1, 1);
	func_206(&Local_6011, &Local_4849);
	unk_0xF48790410026514E(1);
	unk_0x8C26F31DFF77D124();
	if (unk_0xC844350D5D58C99A(iLocal_6418) && !unk_0x437347B10A200C4B(iLocal_6418, 0))
	{
		unk_0x56FDC9ADE35F7DB0(iLocal_6418, true, false, 0);
		func_396("CLEANUP - TURNING OFF PLANE ENGINE");
	}
	if (unk_0xC844350D5D58C99A(iLocal_6418))
	{
		unk_0x73270B3C9CC833FD(iLocal_6418, true, 1);
		unk_0x046C362CF15F1935(&iLocal_6418);
	}
	func_366(&Local_6011, &Local_4681);
	unk_0x225CFE81EA219E44();
	unk_0x51B096AAC60548C1(1f);
	if (iLocal_4547 == 1)
	{
		unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), -1569615261, false);
	}
	func_337(0);
	unk_0xBFE31971E49FA500(true);
	unk_0x10FAF14A60A0DBE1();
}

void func_366(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_202)
	{
		if (unk_0xC844350D5D58C99A(uParam0->f_31[iVar0]))
		{
			unk_0xF690C84DADBB3551(&(uParam0->f_31[iVar0]));
			if (uParam1->f_52)
			{
				iVar1 = 0;
				while (iVar1 < 9)
				{
					if (unk_0xC844350D5D58C99A(uParam0->f_38[iVar0][iVar1]))
					{
						unk_0xF690C84DADBB3551(&(uParam0->f_38[iVar0][iVar1]));
					}
					iVar1++;
				}
			}
		}
		iVar0++;
	}
}

void func_367()
{
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		unk_0x3CFFF3C8EACD8DC1(StackVal, 0, 0, 0);
	}
	else if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x8DECFDD6715449E4(0, &cVar0);
	}
}

void func_368()
{
	unk_0xEAB026E686C0D991(0, 71, 1);
	unk_0xEAB026E686C0D991(0, 72, 1);
	unk_0xEAB026E686C0D991(0, 76, 1);
	unk_0xEAB026E686C0D991(0, 73, 1);
	unk_0xEAB026E686C0D991(0, 59, 1);
	unk_0xEAB026E686C0D991(0, 60, 1);
	unk_0xEAB026E686C0D991(0, 75, 1);
	unk_0xEAB026E686C0D991(0, 80, 1);
	unk_0xEAB026E686C0D991(0, 69, 1);
	unk_0xEAB026E686C0D991(0, 70, 1);
	unk_0xEAB026E686C0D991(0, 68, 1);
	unk_0xEAB026E686C0D991(0, 74, 1);
	unk_0xEAB026E686C0D991(0, 86, 1);
	unk_0xEAB026E686C0D991(0, 81, 1);
	unk_0xEAB026E686C0D991(0, 82, 1);
}

void func_369(char* sParam0)
{
	if (Global_98744 != 12)
	{
		func_370(sParam0, 5, -1);
	}
}

int func_370(char* sParam0, int iParam1, int iParam2)
{
	func_389();
	func_388();
	Global_98744 = 0;
	StringCopy(&(Global_98744.f_3), sParam0, 32);
	Global_98744.f_11 = iParam1;
	unk_0x65C5EBCA17A891FC(1);
	unk_0xD99B71B9E48EB0E6(0);
	unk_0x2C84016B4A95F6BA(0);
	func_144(1);
	func_337(1);
	func_385(0);
	func_384(1);
	unk_0x0674E58A79778E99(&(Global_98744.f_20), 9);
	unk_0x0674E58A79778E99(&(Global_98744.f_20), 6);
	unk_0x0674E58A79778E99(&(Global_98744.f_20), 20);
	unk_0x0674E58A79778E99(&(Global_98744.f_20), 21);
	unk_0x0674E58A79778E99(&(Global_98744.f_20), 5);
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
				if (unk_0x377BE9A1BF38C7CE(iVar0))
				{
					unk_0x5D96D8530B3D0904(&(Global_98744.f_20), 5);
				}
			}
		}
	}
	unk_0xA37A90C62806D848(1);
	unk_0x790015DC92C918E2();
	func_383(0);
	func_382(1);
	Global_98744.f_2 = Global_98781;
	if (func_381())
	{
		if (func_380())
		{
			if (Global_98781 >= func_377())
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_89532[iParam2].f_15, 16))
				{
					if (Global_111638.f_9080.f_330[iParam2].f_1 >= 2)
					{
						Global_92920 = 1;
					}
				}
			}
		}
		else if (Global_98744.f_11 == 6)
		{
			func_372(iParam2, &Var1);
			if (Var1.f_31 == 1)
			{
				if (Global_111638.f_18569[iParam2].f_4 >= 2)
				{
					Global_92920 = 1;
				}
			}
		}
		else
		{
			iVar33 = func_371(unk_0xBB0808A181D4745C());
			if (iVar33 > -1)
			{
				if (Global_111638.f_24981.f_4[iVar33] >= 2)
				{
					Global_92920 = 1;
				}
			}
		}
	}
	return 1;
}

int func_371(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0x7F8A39872A07D2CE("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x7F8A39872A07D2CE("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x7F8A39872A07D2CE("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

void func_372(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_373(uParam1, "Abigail1", func_375(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_374(iParam0), 1, 0);
			break;
		
		case 1:
			func_373(uParam1, "Abigail2", func_375(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_374(iParam0), 1, 0);
			break;
		
		case 2:
			func_373(uParam1, "Barry1", func_375(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_374(iParam0), 1, 0);
			break;
		
		case 3:
			func_373(uParam1, "Barry2", func_375(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_374(iParam0), 1, 1);
			break;
		
		case 4:
			func_373(uParam1, "Barry3", func_375(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_374(iParam0), 0, 0);
			break;
		
		case 5:
			func_373(uParam1, "Barry3A", func_375(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 6:
			func_373(uParam1, "Barry3C", func_375(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 7:
			func_373(uParam1, "Barry4", func_375(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_374(iParam0), 0, 0);
			break;
		
		case 8:
			func_373(uParam1, "Dreyfuss1", func_375(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_374(iParam0), 0, 0);
			break;
		
		case 9:
			func_373(uParam1, "Epsilon1", func_375(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_374(iParam0), 0, 0);
			break;
		
		case 10:
			func_373(uParam1, "Epsilon2", func_375(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_374(iParam0), 1, 0);
			break;
		
		case 11:
			func_373(uParam1, "Epsilon3", func_375(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_374(iParam0), 0, 0);
			break;
		
		case 12:
			func_373(uParam1, "Epsilon4", func_375(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_374(iParam0), 0, 0);
			break;
		
		case 13:
			func_373(uParam1, "Epsilon5", func_375(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_374(iParam0), 1, 0);
			break;
		
		case 14:
			func_373(uParam1, "Epsilon6", func_375(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 15:
			func_373(uParam1, "Epsilon7", func_375(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_374(iParam0), 0, 0);
			break;
		
		case 16:
			func_373(uParam1, "Epsilon8", func_375(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_374(iParam0), 1, 0);
			break;
		
		case 17:
			func_373(uParam1, "Extreme1", func_375(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 18:
			func_373(uParam1, "Extreme2", func_375(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 19:
			func_373(uParam1, "Extreme3", func_375(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 20:
			func_373(uParam1, "Extreme4", func_375(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_374(iParam0), 0, 0);
			break;
		
		case 21:
			func_373(uParam1, "Fanatic1", func_375(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_374(iParam0), 1, 0);
			break;
		
		case 22:
			func_373(uParam1, "Fanatic2", func_375(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_374(iParam0), 1, 0);
			break;
		
		case 23:
			func_373(uParam1, "Fanatic3", func_375(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_374(iParam0), 0, 1);
			break;
		
		case 24:
			func_373(uParam1, "Hao1", func_375(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_374(iParam0), 0, 1);
			break;
		
		case 25:
			func_373(uParam1, "Hunting1", func_375(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 26:
			func_373(uParam1, "Hunting2", func_375(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 27:
			func_373(uParam1, "Josh1", func_375(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_374(iParam0), 1, 0);
			break;
		
		case 28:
			func_373(uParam1, "Josh2", func_375(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_374(iParam0), 1, 1);
			break;
		
		case 29:
			func_373(uParam1, "Josh3", func_375(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_374(iParam0), 1, 1);
			break;
		
		case 30:
			func_373(uParam1, "Josh4", func_375(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_374(iParam0), 1, 0);
			break;
		
		case 31:
			func_373(uParam1, "Maude1", func_375(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 32:
			func_373(uParam1, "Minute1", func_375(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 33:
			func_373(uParam1, "Minute2", func_375(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 34:
			func_373(uParam1, "Minute3", func_375(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 35:
			func_373(uParam1, "MrsPhilips1", func_375(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_374(iParam0), 0, 0);
			break;
		
		case 36:
			func_373(uParam1, "MrsPhilips2", func_375(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_374(iParam0), 0, 0);
			break;
		
		case 37:
			func_373(uParam1, "Nigel1", func_375(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_374(iParam0), 1, 0);
			break;
		
		case 38:
			func_373(uParam1, "Nigel1A", func_375(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_374(iParam0), 1, 1);
			break;
		
		case 39:
			func_373(uParam1, "Nigel1B", func_375(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_374(iParam0), 1, 1);
			break;
		
		case 40:
			func_373(uParam1, "Nigel1C", func_375(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_374(iParam0), 1, 1);
			break;
		
		case 41:
			func_373(uParam1, "Nigel1D", func_375(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_374(iParam0), 1, 1);
			break;
		
		case 42:
			func_373(uParam1, "Nigel2", func_375(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_374(iParam0), 1, 1);
			break;
		
		case 43:
			func_373(uParam1, "Nigel3", func_375(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_374(iParam0), 1, 1);
			break;
		
		case 44:
			func_373(uParam1, "Omega1", func_375(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_374(iParam0), 0, 0);
			break;
		
		case 45:
			func_373(uParam1, "Omega2", func_375(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_374(iParam0), 0, 0);
			break;
		
		case 46:
			func_373(uParam1, "Paparazzo1", func_375(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 47:
			func_373(uParam1, "Paparazzo2", func_375(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 48:
			func_373(uParam1, "Paparazzo3", func_375(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_374(iParam0), 0, 0);
			break;
		
		case 49:
			func_373(uParam1, "Paparazzo3A", func_375(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 50:
			func_373(uParam1, "Paparazzo3B", func_375(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 51:
			func_373(uParam1, "Paparazzo4", func_375(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_374(iParam0), 0, 0);
			break;
		
		case 52:
			func_373(uParam1, "Rampage1", func_375(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_374(iParam0), 0, 0);
			break;
		
		case 54:
			func_373(uParam1, "Rampage3", func_375(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_374(iParam0), 1, 0);
			break;
		
		case 55:
			func_373(uParam1, "Rampage4", func_375(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_374(iParam0), 1, 0);
			break;
		
		case 56:
			func_373(uParam1, "Rampage5", func_375(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_374(iParam0), 0, 0);
			break;
		
		case 53:
			func_373(uParam1, "Rampage2", func_375(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_374(iParam0), 1, 0);
			break;
		
		case 57:
			func_373(uParam1, "TheLastOne", func_375(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 58:
			func_373(uParam1, "Tonya1", func_375(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 59:
			func_373(uParam1, "Tonya2", func_375(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 60:
			func_373(uParam1, "Tonya3", func_375(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 61:
			func_373(uParam1, "Tonya4", func_375(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 62:
			func_373(uParam1, "Tonya5", func_375(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_373(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { vParam7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_374(int iParam0)
{
	switch (iParam0)
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
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_375(int iParam0)
{
	StringCopy(&Var0, "", 8);
	cVar2 = { func_376(iParam0) };
	if (unk_0xEA6BC48857E0AC4C(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_376(int iParam0)
{
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_377()
{
	iVar0 = func_378(&(Global_98744.f_3), 0);
	iVar1 = 0;
	if (iVar0 == 53)
	{
		iVar1 = 1;
	}
	return iVar1;
}

int func_378(char* sParam0, bool bParam1)
{
	iVar0 = unk_0x12AB0310C2281427(sParam0);
	iVar1 = func_379(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_379(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_89532[iVar0].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

int func_380()
{
	if ((((Global_98744.f_11 == 0 || Global_98744.f_11 == 1) || Global_98744.f_11 == 2) || Global_98744.f_11 == 3) || Global_98744.f_11 == 4)
	{
		return 1;
	}
	return 0;
}

int func_381()
{
	if ((((Global_98744.f_11 == 0 || Global_98744.f_11 == 1) || Global_98744.f_11 == 2) || Global_98744.f_11 == 6) || Global_98744.f_11 == 3)
	{
		return 1;
	}
	if (Global_98744.f_11 == 5)
	{
		if (func_371(&(Global_98744.f_3)) > -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_382(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_41980 = 1;
	}
	else
	{
		Global_41980 = 0;
	}
}

void func_383(bool bParam0)
{
	unk_0x8BCB70EB440DED83(bParam0);
	unk_0xBFE31971E49FA500(bParam0);
}

void func_384(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x56FCE5C6DA4AA600();
		unk_0x5D96D8530B3D0904(&(Global_98744.f_20), 3);
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_98744.f_20, 3))
	{
		unk_0x17D339215F817B98();
		unk_0x0674E58A79778E99(&(Global_98744.f_20), 3);
	}
}

void func_385(int iParam0)
{
	if (iParam0 == 1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_98744.f_20, 4))
		{
			func_387();
			unk_0x0674E58A79778E99(&(Global_98744.f_20), 4);
		}
	}
	else
	{
		func_386();
		unk_0x5D96D8530B3D0904(&(Global_98744.f_20), 4);
	}
}

void func_386()
{
	Global_22211.f_5 = 1;
}

void func_387()
{
	Global_22211.f_5 = 0;
}

void func_388()
{
	Global_92920 = 0;
	Global_92921 = 0;
}

void func_389()
{
	Global_98744 = 13;
	Global_98744.f_1 = -1;
	Global_98744.f_2 = 0;
	Global_98744.f_30 = 0f;
	unk_0x0674E58A79778E99(&(Global_98744.f_20), 25);
	Global_98778 = 0;
	func_382(0);
	func_391();
	func_390();
	Global_98744.f_18 = -1;
	Global_98744.f_19 = -1;
}

void func_390()
{
	unk_0x0674E58A79778E99(&(Global_98744.f_20), 22);
	unk_0x0674E58A79778E99(&(Global_98744.f_20), 8);
}

void func_391()
{
	if (Global_98744.f_16 != 0)
	{
		unk_0xE17FDF9E3068281B(&(Global_98744.f_16));
		Global_98744.f_16 = 0;
	}
	if (Global_98744.f_17 != 0)
	{
		unk_0xE17FDF9E3068281B(&(Global_98744.f_17));
		Global_98744.f_17 = 0;
	}
}

void func_392(var uParam0, int iParam1)
{
	func_393(uParam0, iParam1);
}

void func_393(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_394()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return 0;
	}
	return 1;
}

void func_395()
{
	Global_98779 = 1;
	if (unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1))
	{
		if (unk_0xEA6BC48857E0AC4C(&Global_76854))
		{
			switch (func_34())
			{
				case 0:
					StringCopy(&Global_76854, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_76854, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_76854, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_76858, "", 16);
		}
		Global_98779 = 0;
	}
	else if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xEA6BC48857E0AC4C(&Global_76854))
		{
			switch (func_34())
			{
				case 0:
					StringCopy(&Global_76854, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_76854, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_76854, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_76858, "", 16);
		}
		Global_98779 = 0;
		unk_0x5D96D8530B3D0904(&(Global_98744.f_20), 25);
	}
}

void func_396(char* sParam0)
{
}

