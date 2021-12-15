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
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0,0375f;
	fLocal_27 = 0,17f;
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
	vLocal_3561 = { 50f, 50f, 50f };
	vLocal_3564 = { 150f, 150f, 150f };
	vLocal_3567 = { 1f, 1f, 1f };
	vLocal_3601 = { 6,5f, 6,5f, 6,5f };
	iLocal_3633 = 1962660298;
	iLocal_3634 = 920306374;
	bLocal_6010 = true;
	bLocal_6011 = true;
	bLocal_6013 = true;
	bLocal_6025 = true;
	iLocal_6028 = 1;
	vLocal_6091 = { 3f, -10f, 1,5f };
	vLocal_6094 = { 0f, 0f, 0f };
	vLocal_6103 = { 2134,759f, 4789,899f, 39,9702f };
	vLocal_6106 = { 2149,737f, 4798,472f, 40,1071f };
	fLocal_6110 = 24,9014f;
	fLocal_6113 = 100f;
	fLocal_6114 = -1f;
	fLocal_6117 = 55,4847f;
	func_372("Traffick Ground Start");
	unk_0x7798376279BB5369(1);
	if (unk_0x2EBF608FFE6CA406(67))
	{
		unk_0xC92DB9682A650680("OJDG_STOP");
		func_372("FORCE CLEANUP HAS OCCURRED: setting us up for a replay!!!");
		func_371();
		if (!func_370())
		{
			func_368(&Global_110289, 2);
			func_345(unk_0xBB0808A181D4745C());
		}
		func_343();
	}
	if (!ScriptParam_0.f_1)
	{
		func_338(Global_111638.f_19978.f_1, &ScriptParam_0);
		func_337(&Local_4356, ScriptParam_0.f_2);
		func_332(ScriptParam_0, 1);
		func_372("LAUNCHING VIA PROGRESSION");
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				iLocal_6135 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			}
		}
	}
	else
	{
		func_337(&Local_4356, ScriptParam_0.f_2);
		func_372("LAUNCHING VIA DEBUG SCRIPT");
		func_332(ScriptParam_0, 0);
	}
	if (!unk_0xC844350D5D58C99A(iLocal_6135))
	{
		func_329();
	}
	Local_4259 = { ScriptParam_0 };
	func_327();
	unk_0x28F5E4DA506AC0CA(2149,328f, 4805,958f, 40,2094f, 100f, 0, 1, 0, 0, false, 0);
	unk_0x536F1BE96C726C4B(2158,593f, 4787,735f, 40,0958f, 5f, 1, 0, 0, false);
	unk_0x15EA7F4313456B1D(3, false);
	unk_0x15EA7F4313456B1D(5, false);
	unk_0x060F249A9A3E3F4E(false);
	iLocal_6150 = unk_0x7D6CA5F52B3748BF(Vector(45,9679f, 4507,976f, 2784,227f) - Vector(10f, 10f, 10f), Vector(45,9679f, 4507,976f, 2784,227f) + Vector(10f, 10f, 10f), 0, 1, 1, 1);
	iLocal_6151 = unk_0x7D6CA5F52B3748BF(Vector(49,1813f, 4198,859f, 2890,96f) - Vector(10f, 10f, 10f), Vector(49,1813f, 4198,859f, 2890,96f) + Vector(10f, 10f, 10f), 0, 1, 1, 1);
	iLocal_6150 = unk_0x7D6CA5F52B3748BF(Vector(40,0605f, 4760,453f, 2030,663f) - Vector(800f, 800f, 800f), Vector(40,0605f, 4760,453f, 2030,663f) + Vector(800f, 800f, 800f), 0, 1, 1, 1);
	iLocal_6153 = unk_0x7D6CA5F52B3748BF(Local_4356[0].f_107 - Vector(50f, 50f, 50f), Local_4356[0].f_107 + Vector(50f, 50f, 50f), 0, 1, 1, 1);
	func_325(1);
	func_324();
	Local_4255.f_3 = 0;
	if (bLocal_6014)
	{
		iLocal_4253 = 84090;
		func_372("SETTING WANTED LEVEL MULTIPLIER TO ZERO IN SMUGGLERS MODE");
		unk_0x51B096AAC60548C1(0f);
		unk_0xB5376EA942202450(2164,038f, 4825,627f, 35,61375f, 1899,278f, 4697,752f, 49,08641f, 100f, 0, false, 1);
		unk_0xB5376EA942202450(1757,215f, 4570,54f, 30,47729f, 1385,558f, 4495,364f, 62,74048f, 100f, 0, false, 1);
	}
	if (ScriptParam_0.f_55 == 1f)
	{
		bLocal_6043 = true;
	}
	func_320(&bLocal_6025, &bLocal_6011, &bLocal_6013, &bLocal_6010, &uLocal_6009, &bLocal_6014, &uLocal_6017, &uLocal_6012, &uLocal_6018, &bLocal_6019);
	unk_0xBFE31971E49FA500(true);
	Local_5506.f_36 = 1;
	if (Global_111638.f_19978.f_1 >= 5)
	{
		if (func_319())
		{
			iLocal_6059 = 1;
		}
		else
		{
			iLocal_6059 = 0;
		}
	}
	if (Global_111638.f_19978.f_1 == 4)
	{
		iLocal_6059 = 1;
	}
	Local_4255.f_3 = 0;
	if (func_318())
	{
		Global_98744.f_12[0]++;
		iLocal_6122 = func_317();
		if (iLocal_6122 == 0)
		{
			func_316(vLocal_6106, fLocal_6117, 1, 0);
		}
	}
	else
	{
		Global_98744.f_12[0] = 0;
	}
	unk_0x2723524E448F4BDD("PRISON_TOWERS", true);
	vLocal_3492 = { vLocal_3492 };
	vLocal_3495 = { vLocal_3495 };
	func_312("MG_TRAF_AVAIL", 1);
	while (true)
	{
		wait(0);
		if ((((uLocal_6003 || bLocal_6022) || bLocal_6004) || bLocal_6007) || Local_5695.f_49)
		{
			bLocal_6005 = true;
		}
		else
		{
			bLocal_6005 = false;
		}
		if (bLocal_6025 && iLocal_6026)
		{
			func_311(&uLocal_6118, &(Local_4356.f_1102), &(Local_4356.f_1103), &uLocal_6034, &bLocal_6038, &uLocal_6035, "ARMS_GR08", &uLocal_5830);
		}
		if (iLocal_3648 > 3 && iLocal_3648 < 14)
		{
			if (bLocal_6006)
			{
				func_308(&iLocal_6135, &iLocal_6141, &uLocal_6136, &iLocal_6142, &vLocal_6078, &iLocal_6119, &bLocal_6023, &bLocal_6005, &bLocal_6008, &uLocal_6009, &iLocal_6028, 0, 1, 1, 1);
			}
		}
		if (!bLocal_6006)
		{
			if (func_307(&iLocal_6135))
			{
				if (!iLocal_6068)
				{
					unk_0xA37A90C62806D848(1);
					func_306("DTRFKGR_HELP_17", -1);
					iLocal_6068 = 1;
				}
			}
		}
		func_302(&iLocal_3382, 7f, 1);
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			unk_0x4A847DA194A5532B(2, 0, -1);
			if (func_48())
			{
				func_343();
			}
		}
		if (((iLocal_3648 > 6 && !bLocal_6007) && !bLocal_6004) && !bLocal_6050)
		{
			func_47(&iLocal_6135, &bLocal_6022, &uLocal_6136, &iLocal_6142, &vLocal_6078, &cLocal_5995, &fLocal_6114, &iLocal_6119, &iLocal_6141, &bLocal_6023, 1, 0, 1, 1);
		}
		func_44();
		if (iLocal_3648 > 2)
		{
			if (func_6())
			{
				func_1();
			}
		}
	}
}

void func_1()
{
	unk_0x790015DC92C918E2();
	unk_0x5CEB4DB888A62073(true);
	unk_0xC92DB9682A650680("OJDG_STOP");
	func_368(&Global_110289, 2);
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		switch (iLocal_3643)
		{
			case 6:
				sVar0 = "SAN_FAIL1";
				break;
			
			case 7:
				sVar0 = "DTRSHRD_FAIL_09";
				break;
			
			case 8:
				sVar0 = "DTRSHRD_FAIL_11";
				break;
			
			case 3:
				sVar0 = "DTRSHRD_FAIL_02";
				break;
			
			case 4:
				sVar0 = "DTRSHRD_FAIL_14";
				break;
			
			case 10:
				sVar0 = "DTRSHRD_FAIL_03";
				break;
			
			case 11:
				sVar0 = "DTRSHRD_FAIL_15";
				break;
			
			case 12:
				sVar0 = "DTRSHRD_FAIL_15";
				break;
			
			case 5:
				sVar0 = "DTRSHRD_FAIL_05";
				break;
			
			case 14:
				sVar0 = "DTRSHRD_FAIL_06";
				break;
			
			case 16:
				sVar0 = "DTRSHRD_FAIL_07";
				break;
			
			case 9:
				sVar0 = "DTRSHRD_FAIL_08";
				break;
			
			case 17:
				sVar0 = "DTRSHRD_FAIL_01";
				break;
			
			case 0:
				break;
			
			case 15:
				sVar0 = "DTRSHRD_FAIL_16";
				break;
		}
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()) || unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
			{
				func_4(vLocal_6103, fLocal_6110);
			}
		}
	}
	if (!unk_0xEA6BC48857E0AC4C(sVar0))
	{
		func_3(sVar0);
	}
	func_371();
	func_345(unk_0xBB0808A181D4745C());
	while (!func_2())
	{
		wait(0);
	}
	func_343();
}

int func_2()
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

void func_3(char* sParam0)
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

void func_4(vector3 vParam0, float fParam3)
{
	if (func_5(Global_76862, 0f, 0f, 0f, 0))
	{
		Global_76862 = { vParam0 };
		Global_76865 = fParam3;
	}
}

bool func_5(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_6()
{
	if (func_36())
	{
		iLocal_3643 = 14;
		return 1;
	}
	if (unk_0xC844350D5D58C99A(uLocal_5543.f_9) && !unk_0x437347B10A200C4B(uLocal_5543.f_9, 0))
	{
		if (unk_0xD15F544473A95FE8(unk_0x68F4C0EC296D3901(uLocal_5543.f_9, true), 0,5f, 1, 1))
		{
			unk_0xDA55CDFB97015579(unk_0x68F4C0EC296D3901(uLocal_5543.f_9, true), 26, 0,5f, 1, 0, 1065353216, 0);
			unk_0xF690C84DADBB3551(&(uLocal_5543.f_9));
			iLocal_3643 = 15;
			return 1;
		}
	}
	if (unk_0xC844350D5D58C99A(Local_5574.f_5) && !unk_0x437347B10A200C4B(Local_5574.f_5, 0))
	{
		if (unk_0xD15F544473A95FE8(unk_0x68F4C0EC296D3901(Local_5574.f_5, true), 0,5f, 1, 1))
		{
			unk_0xDA55CDFB97015579(unk_0x68F4C0EC296D3901(Local_5574.f_5, true), 26, 0,5f, 1, 0, 1065353216, 0);
			unk_0xF690C84DADBB3551(&(Local_5574.f_5));
			iLocal_3643 = 15;
			return 1;
		}
	}
	if (func_35())
	{
		iLocal_3643 = 14;
		return 1;
	}
	if (bLocal_6051)
	{
		iLocal_3643 = 4;
		return 1;
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) || !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if ((!bLocal_6005 && !bLocal_6022) && !bLocal_6008)
		{
			if (bLocal_6023)
			{
				if (func_33("DTRSHRD_03", iLocal_6135, iLocal_6119))
				{
					iLocal_3643 = 3;
					return 1;
				}
			}
		}
	}
	if (uLocal_5543.f_14)
	{
		if (bLocal_6038)
		{
			if (bLocal_6022)
			{
				iLocal_3643 = 11;
				return 1;
			}
			else
			{
				iLocal_3643 = 10;
				return 1;
			}
		}
	}
	if (bLocal_6061)
	{
		iLocal_3643 = 12;
		return 1;
	}
	if (bLocal_6013)
	{
		if (fLocal_6113 <= 0f)
		{
			if (bLocal_6019)
			{
				if (unk_0xC844350D5D58C99A(Local_5695.f_2))
				{
					unk_0xDA55CDFB97015579(unk_0x68F4C0EC296D3901(Local_5695.f_2, true), 3, 0,5f, 1, 0, 1065353216, 0);
					iLocal_3643 = 17;
				}
			}
			else
			{
				unk_0x0DC87D17DC2658DC(iLocal_6135, 1, 0);
				iLocal_3643 = 7;
			}
			return 1;
		}
	}
	if (!bLocal_6014 && !bLocal_6019)
	{
		if (func_32())
		{
			iLocal_3643 = 8;
			return 1;
		}
	}
	if (bLocal_6014)
	{
		if (unk_0xC844350D5D58C99A(Local_5574[0]) && !unk_0x437347B10A200C4B(Local_5574[0], 0))
		{
			if (Local_5574.f_20[0])
			{
				if (unk_0x70EED0761B82965E(Local_5574[0]))
				{
					iLocal_3643 = 7;
					return 1;
				}
			}
		}
		if (Local_5574.f_27)
		{
			iLocal_3643 = 16;
			return 1;
		}
		if (Local_5574.f_22)
		{
			unk_0xDA55CDFB97015579(unk_0x68F4C0EC296D3901(Local_5560, true), 26, 0,5f, 1, 0, 1065353216, 0);
			unk_0xF690C84DADBB3551(&Local_5560);
			iLocal_3643 = 17;
			return 1;
		}
		if (Local_5574.f_41)
		{
			iLocal_3643 = 14;
			return 1;
		}
	}
	if (bLocal_6019)
	{
		if (Local_5695.f_48)
		{
			iLocal_3643 = 16;
			return 1;
		}
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (iLocal_3648 < 14)
		{
			if (!unk_0xDF1306B443CD3D15(iLocal_6135, 0))
			{
				func_372("myVehicle IS NOT DRIVEABLE, FAILED MISSION");
				iLocal_3643 = 7;
				return 1;
			}
		}
	}
	bVar0 = true;
	if ((((bLocal_6022 || bLocal_6004) || (bLocal_6007 && !bLocal_6006)) || bLocal_6019) || bLocal_6005)
	{
		fLocal_3361 = func_31(&vLocal_6078);
		bVar0 = false;
	}
	if (bVar0)
	{
		if (func_7(&vLocal_6078, &uLocal_5830))
		{
			iLocal_3643 = 14;
			return 1;
		}
	}
	if (!unk_0x437347B10A200C4B(iLocal_6135, 0))
	{
		if (((unk_0x7B5606C651AB51B5(iLocal_6135, 0, 7000) || unk_0x7B5606C651AB51B5(iLocal_6135, 1, 40000)) || unk_0x7B5606C651AB51B5(iLocal_6135, 2, 30000)) || unk_0x7B5606C651AB51B5(iLocal_6135, 3, 30000))
		{
			func_372("FAILING - VEHICLE HAS BECOME UNDRIVEABLE/STUCK");
			iLocal_3643 = 9;
			return 1;
		}
	}
	return 0;
}

int func_7(var uParam0, var uParam1)
{
	if (!func_5(vLocal_3358, *uParam0[0], 0))
	{
		iLocal_3368 = 0;
		func_372("SETTING bGrabbedDistance TO FALSE");
	}
	if (!func_5(*uParam0[0], 0f, 0f, 0f, 0))
	{
		fLocal_3361 = func_31(uParam0);
		if (!iLocal_3368)
		{
			fLocal_3362 = (fLocal_3361 + to_float(800));
			fLocal_3363 = (fLocal_3361 + 300f);
			vLocal_3358 = { *uParam0[0] };
			iLocal_3368 = 1;
		}
	}
	if (fLocal_3361 > fLocal_3363)
	{
		if (!iLocal_3372)
		{
			func_8(uParam1, "ARMSAUD", "ARMS_AB_WRN", 9, 0, 0, 0);
			iLocal_3372 = 1;
		}
	}
	if (fLocal_3361 > fLocal_3362)
	{
		func_372("RETURNING TRUE ON ABANDON DISTANCE - NORMAL");
		return 1;
	}
	return 0;
}

bool func_8(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_30(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_9(sParam2, iParam3, 0);
}

int func_9(char* sParam0, int iParam1, bool bParam2)
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
					func_29();
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
		if (func_28(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_27();
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
				func_19();
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
				if (func_18())
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
			if (func_17())
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
			func_16();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_15();
		func_10();
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
		func_29();
	}
	return 0;
}

void func_10()
{
	if (!func_11())
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

int func_11()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_14())
	{
		return 0;
	}
	if (func_12(unk_0xD803B885F5E47A62()))
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

bool func_12(int iParam0)
{
	return func_13(iParam0, 20);
}

bool func_13(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_14()
{
	return -1;
}

void func_15()
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

void func_16()
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

int func_17()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_18()
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

void func_19()
{
	if (func_26(14))
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
		Global_19486 = func_20();
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

int func_20()
{
	func_21();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_21()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_24(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_23(unk_0x16F2683693E537C9());
			if (func_22(iVar0) && (!func_26(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_22(Global_111638.f_2358.f_539.f_4321))
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

bool func_22(int iParam0)
{
	return iParam0 < 3;
}

int func_23(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_24(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_24(int iParam0)
{
	if (func_22(iParam0))
	{
		return func_25(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_25(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_26(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_27()
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

bool func_28(int iParam0, int iParam1)
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

void func_29()
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

void func_30(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

float func_31(var uParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	}
	fLocal_3361 = vdist(vVar0, *uParam0[0]);
	return fLocal_3361;
}

int func_32()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Local_4356[0][iVar0].f_2 && Local_4356[0][iVar0] == 1)
		{
			if (unk_0xC844350D5D58C99A(uLocal_5543[iVar0]))
			{
				if (unk_0xB87D13D0C064E9D1(uLocal_5543[iVar0], unk_0x16F2683693E537C9(), 1))
				{
					if (unk_0x437347B10A200C4B(uLocal_5543[iVar0], 0))
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

int func_33(char* sParam0, int iParam1, int iParam2)
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
						func_34(sParam0, 7500, 1);
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

void func_34(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 1);
}

bool func_35()
{
	return Global_98796.f_345 > 0;
}

int func_36()
{
	if (!bLocal_6006)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
		}
		if (uLocal_5543.f_14)
		{
			if (!func_43(&iLocal_6184))
			{
				func_40(&iLocal_6184);
			}
			else if (vdist2(vVar0, Local_4356[0].f_107) > 10000f)
			{
				if (func_37(&iLocal_6184) > 60f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_37(int iParam0)
{
	if (func_43(iParam0))
	{
		if (func_39(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_38(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_38(bool bParam0)
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

bool func_39(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

void func_40(int iParam0)
{
	if (!func_43(iParam0))
	{
		func_41(iParam0);
	}
}

void func_41(int iParam0)
{
	func_42(iParam0, 0f);
}

void func_42(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_38(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_43(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 1);
}

void func_44()
{
	if (!iLocal_6074)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
			{
				if (!func_46())
				{
					func_45(&uLocal_5830, 2, 0, "TREVOR", 0, 1);
					func_8(&uLocal_5830, "ARMSAUD", "ARMS_WANTED", 9, 0, 0, 0);
					iLocal_6074 = 1;
				}
			}
		}
	}
}

void func_45(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_46()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

void func_47(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, char* sParam5, float fParam6, var uParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	if (!*uParam1)
	{
		if (unk_0xF06268E966D7C1A2(unk_0xA30EC016B12C03E4(), 0))
		{
			func_34("DTRSHRD_01", 7500, 1);
			if (unk_0xE4EDC4B0E92C078B((*iParam3)[0]))
			{
				unk_0x661342B9651D16E2((*iParam3)[0], false);
			}
			iVar3 = 0;
			while (iVar3 < *iParam3)
			{
				if (unk_0xE4EDC4B0E92C078B((*iParam3)[iVar3]))
				{
					unk_0x142CC44DB769B57E(iParam3[iVar3]);
				}
				iVar3++;
			}
			if (unk_0xE4EDC4B0E92C078B(*iParam8))
			{
				unk_0x142CC44DB769B57E(iParam8);
				func_372("REMOVING myVehicleBlip VIA UPDATE_LAW");
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
			func_34(sParam5, 7500, 1);
		}
		if (!*bParam9)
		{
			iVar3 = 0;
			while (iVar3 < *iParam3)
			{
				if (!func_5(*uParam4[iVar3], 0f, 0f, 0f, 0))
				{
					bLocal_3369 = true;
					(*iParam3)[iVar3] = unk_0x6CC513A908911CF0(*uParam4[iVar3]);
					if (bParam11)
					{
						unk_0x61755AC17D8F538E((*iParam3)[iVar3], 1);
					}
				}
				iVar3++;
			}
			if (!bLocal_3369 && iParam12)
			{
				iVar3 = 0;
				while (iVar3 < *uParam2)
				{
					if (unk_0xC844350D5D58C99A((*uParam2)[iVar3]) && !unk_0x437347B10A200C4B((*uParam2)[iVar3], 0))
					{
						(*iParam3)[iVar3] = unk_0x5C3B41825F6AC5A0((*uParam2)[iVar3]);
						func_372("ADDING IN BLIPS FOR ENTITIES");
					}
					iVar3++;
				}
			}
		}
		if (*bParam9)
		{
			if (!unk_0xE4EDC4B0E92C078B(*iParam8))
			{
				*iParam8 = unk_0x5C3B41825F6AC5A0(*iParam0);
				unk_0x61755AC17D8F538E(*iParam8, 3);
				func_372("ADDING IN BLIP FOR myVehicle VIA UPDATE_LAW");
				func_34("DTRSHRD_03", 7500, 1);
			}
		}
		*uParam7 = unk_0x1C0640BA9A7327B3();
		func_372("RESETING outOfVehicleTime VIA UPDATE_LAW");
		iLocal_3368 = 0;
		if (bParam10)
		{
			if (unk_0xE4EDC4B0E92C078B((*iParam3)[0]))
			{
			}
		}
	}
}

int func_48()
{
	switch (iLocal_3648)
	{
		case 0:
			if (unk_0x757EF87A33649210())
			{
				func_301();
				if (!func_43(&iLocal_6169))
				{
					func_40(&iLocal_6169);
				}
				iLocal_3648 = 1;
			}
			else
			{
				iLocal_3648 = 2;
			}
			break;
		
		case 1:
			unk_0x2FB9A57162E54BAB(0f);
			unk_0xEF6276132B396452(0f, 1065353216);
			func_298(iLocal_6135, -1, 1);
			iLocal_3648 = 2;
			break;
		
		case 2:
			if (unk_0x757EF87A33649210())
			{
				unk_0x28F5E4DA506AC0CA(2149,328f, 4805,958f, 40,2094f, 100f, 0, 1, 0, 0, false, 0);
				unk_0x82E51BCA72537B6C(500);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(0f, 1065353216);
			}
			if (!iLocal_6024 && !unk_0xC844350D5D58C99A(iLocal_6135))
			{
				func_34("DTRFKGR_01", 7500, 1);
				StringCopy(&cLocal_5995, "DTRFKGR_01", 32);
				iLocal_6135 = unk_0x122AAB0B1D6F55AD(Local_4356.f_1109[0], Local_4356.f_1096, Local_4356.f_1099, true, true, false);
				iLocal_6141 = unk_0x5C3B41825F6AC5A0(iLocal_6135);
				unk_0x61755AC17D8F538E(iLocal_6141, 3);
				iLocal_6024 = 1;
			}
			if (func_296())
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						iLocal_6135 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
						unk_0x73270B3C9CC833FD(iLocal_6135, true, 1);
						unk_0xA072915CE3E5C457(iLocal_6135, false);
						unk_0x4D647C1236C18D14(iLocal_6135, false);
						unk_0x3E5CE368CD085FFA(iLocal_6135, 0);
						unk_0xBBBF14C3EA856B1A(iLocal_6135, 1);
						unk_0xD458AC1C1D29C3B4(iLocal_6135, 2000, 0);
						unk_0xD5A0214B20BCBAD8(iLocal_6135, 1);
						unk_0xA22F71BBC8173C39(iLocal_6135, false);
						unk_0x44A200C9B6E1CEA6(iLocal_6135, true);
						func_295();
					}
					unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 32, false);
				}
				unk_0x142CC44DB769B57E(&iLocal_6141);
				vLocal_6078[0] = { Local_4356[0].f_107 };
				unk_0xF63400DBE3303D26("policeChasers", &iLocal_5693);
				unk_0xF63400DBE3303D26("carChaserEnemies", &(Local_5648.f_36));
				unk_0x0E2400AB9174FA81(3, 1862763509, iLocal_5693);
				unk_0x0E2400AB9174FA81(3, iLocal_5693, 1862763509);
				unk_0x0E2400AB9174FA81(5, 1862763509, Local_5648.f_36);
				unk_0x0E2400AB9174FA81(5, Local_5648.f_36, 1862763509);
				unk_0x0E2400AB9174FA81(5, -1533126372, Local_5648.f_36);
				unk_0x0E2400AB9174FA81(5, Local_5648.f_36, -1533126372);
				unk_0x0E2400AB9174FA81(1, iLocal_5693, Local_5648.f_36);
				unk_0x0E2400AB9174FA81(1, Local_5648.f_36, iLocal_5693);
				func_372("SETTING RELATIONSHIP GROUPS");
				func_45(&uLocal_5830, 2, unk_0x16F2683693E537C9(), "TREVOR", 0, 1);
				if (!func_43(&iLocal_6160))
				{
					func_40(&iLocal_6160);
				}
				func_294();
				func_293();
				settimera(0);
				iLocal_6041 = 0;
				Local_4255.f_3 = 0;
				if (func_292() == 0)
				{
					iLocal_3354 = unk_0xB055A4268B938F30("scr_drug_traffic_flare_L", Local_4356[0].f_107, 0f, 0f, 0f, 0,5f, 0, 0, 0, 0);
					unk_0x02D205CBD211ED4F(iLocal_3354, 1f, 0,84f, 0f, 0);
					unk_0xC92DB9682A650680("OJDG1_START");
					func_291(&(Local_4356[0].f_107), 0);
					iLocal_3607 = unk_0x7707E48765093646(445804908, Local_4356[0].f_107, true, true, false);
				}
				else
				{
					unk_0xC92DB9682A650680("OJDG2_START");
				}
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
					func_372("GIVING BACK PLAYER CONTROL");
				}
				iLocal_3648 = 6;
			}
			break;
		
		case 6:
			if (!bLocal_6023)
			{
				if (Global_111638.f_19978.f_1 == 0)
				{
					fLocal_6115 = 15000f;
				}
				else if (Global_111638.f_19978.f_1 == 1)
				{
					fLocal_6115 = 9000f;
					fLocal_6116 = 7500f;
				}
				else if (Global_111638.f_19978.f_1 == 2)
				{
					fLocal_6115 = 6000f;
				}
				else if (Global_111638.f_19978.f_1 == 3)
				{
					fLocal_6115 = 6000f;
					fLocal_6116 = 9500f;
				}
				else if (Global_111638.f_19978.f_1 == 4)
				{
					fLocal_6115 = 7000f;
				}
				else
				{
					fLocal_6115 = 5000f;
					fLocal_6116 = 5000f;
				}
				if (IntToFloat(timera()) > fLocal_6116)
				{
					bLocal_3576 = true;
				}
				if (!iLocal_6075)
				{
					if (IntToFloat(timera()) > fLocal_6115)
					{
						iLocal_6142[0] = unk_0x6CC513A908911CF0(Local_4356[0].f_107);
						if (unk_0xE4EDC4B0E92C078B(iLocal_6142[0]))
						{
							unk_0xDC5B2F9D0CCE3A10(iLocal_6142[0], "DTRFKGR_BLIP02");
						}
						vLocal_6078[0] = { Local_4356[0].f_107 };
						if (!unk_0x437347B10A200C4B(iLocal_6135, 0))
						{
							unk_0x3E5CE368CD085FFA(iLocal_6135, 1);
						}
						iLocal_6075 = 1;
					}
				}
				if (IntToFloat(timera()) > fLocal_6115)
				{
					if (!iLocal_6040)
					{
						if (bLocal_6025)
						{
							iLocal_6026 = 1;
						}
						func_288();
						iLocal_6040 = 1;
					}
				}
			}
			func_283();
			func_280();
			if (func_292() == 0)
			{
				func_279();
				func_277();
				func_276();
				func_275();
				if (!bLocal_6036 && !bLocal_6037)
				{
					if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), Local_4356[0].f_107, 50f, 50f, 50f, false, true, 0) && func_274(&iLocal_6135))
					{
						if (fLocal_3364 < Local_4356.f_1104)
						{
							bLocal_6036 = true;
							if (!func_46())
							{
								func_8(&uLocal_5830, "ARMSAUD", "ARMS_GR09", 9, 1, 0, 0);
							}
						}
						else if (fLocal_3364 < Local_4356.f_1103 && fLocal_3364 > Local_4356.f_1104)
						{
							bLocal_6037 = true;
							if (!func_46())
							{
								func_8(&uLocal_5830, "ARMSAUD", "ARMS_GR09", 9, 1, 0, 0);
							}
							bLocal_6050 = true;
						}
						else
						{
							bLocal_6058 = true;
						}
					}
				}
				if (uLocal_5543.f_14)
				{
					if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), Local_4356[0].f_107, 35f, 35f, 35f, false, true, 0) && func_274(&iLocal_6135))
					{
						iLocal_6026 = 0;
						if (!func_43(&iLocal_6178))
						{
							func_40(&iLocal_6178);
							func_306("DTRFKGR_HELP_05", -1);
						}
						else if (func_37(&iLocal_6178) > 20f)
						{
							bLocal_6062 = true;
							bLocal_6036 = true;
						}
					}
				}
				if (bLocal_6036)
				{
					func_263(&Local_4356, &uLocal_3639, &uLocal_6126, &uLocal_6003, &Local_5506, &bLocal_6010, &vLocal_6078, &bLocal_6022, &iLocal_6135, &iLocal_6119, &bLocal_6050, &uLocal_5830, &bLocal_6006, &bLocal_6023, &cLocal_5995, &iLocal_6142);
				}
				if ((unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), Local_4356[0].f_107, vLocal_3567, false, true, 0) || func_262()) || (!unk_0x437347B10A200C4B(uLocal_5543.f_9, 0) && unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(uLocal_5543.f_9, true), vLocal_3567, false, true, 0)))
				{
					if ((uLocal_5543.f_14 && func_274(&iLocal_6135)) || (uLocal_5543.f_14 && func_261()))
					{
						func_260();
						func_259(&uLocal_3501, 0, 0);
						if (bLocal_6058)
						{
							if (!func_43(&iLocal_6175))
							{
								func_40(&iLocal_6175);
							}
							unk_0xC92DB9682A650680("OJDG1_SAFE_PACKAGE");
						}
						func_41(&iLocal_6172);
						func_372("GO TO STAGE_DESTINATION VIA PICKUP UPDATE");
						iLocal_3648 = 13;
					}
				}
			}
			if (bLocal_6014 && bLocal_3576)
			{
				func_257(&Local_4356, &Local_5574, &bLocal_6015);
				if (bLocal_6015)
				{
					func_206(&Local_4356, &Local_5574, &uLocal_3641, &vLocal_6078, &iLocal_6142, &cLocal_5995, &bLocal_6006, &bLocal_6007, &uLocal_3642, &iLocal_6135, iLocal_4253, &Local_4255, &iLocal_6148, &Local_5560, &uLocal_3645, &uLocal_5830, uLocal_4254, &uLocal_6020, &bLocal_6023, &bLocal_6022, &uLocal_3646, &iLocal_6119);
				}
				if (Local_5574.f_26)
				{
					func_372("EARLY BREAK");
					bLocal_6007 = false;
					iLocal_6041 = 0;
					iLocal_3648 = 13;
					break;
				}
			}
			break;
		
		case 13:
			func_205();
			if (Global_111638.f_19978.f_1 == 0)
			{
				func_279();
			}
			else if (bLocal_6027)
			{
				if (func_43(&iLocal_6187))
				{
					if (func_37(&iLocal_6187) > 5f)
					{
						func_279();
					}
				}
			}
			func_204();
			func_202();
			func_201();
			if (!bLocal_6005 && !bLocal_6004)
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0x437347B10A200C4B(iLocal_6135, 0))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_6135, 0))
					{
						func_198(&uLocal_3501, Local_4356.f_218[0].f_110, 0, 0, 1, 1, 1);
					}
					else
					{
						func_259(&uLocal_3501, 0, 0);
					}
				}
				else
				{
					func_259(&uLocal_3501, 0, 0);
				}
			}
			if (bLocal_6037 || bLocal_6036)
			{
				if (!iLocal_6052)
				{
					if (func_263(&Local_4356, &uLocal_3639, &uLocal_6126, &uLocal_6003, &Local_5506, &bLocal_6010, &vLocal_6078, &bLocal_6022, &iLocal_6135, &iLocal_6119, &bLocal_6050, &uLocal_5830, &bLocal_6006, &bLocal_6023, &cLocal_5995, &iLocal_6142))
					{
						if (bLocal_6023)
						{
							func_34("DTRSHRD_03", 7500, 1);
							StringCopy(&cLocal_5995, "DTRSHRD_03", 32);
							vLocal_6078[0] = { Local_4356.f_218[0].f_110 };
							if (!unk_0xE4EDC4B0E92C078B(iLocal_6141))
							{
								iLocal_6141 = unk_0x5C3B41825F6AC5A0(iLocal_6135);
								unk_0x61755AC17D8F538E(iLocal_6141, 3);
							}
						}
						settimera(0);
						func_372("***********************STARTING CAR CHASE TIMER VIA AMBUSH - 01***********************");
						bLocal_6011 = true;
						bLocal_6063 = true;
						iLocal_6052 = 1;
					}
				}
			}
			else if (Global_111638.f_19978.f_1 > 0)
			{
				if (!bLocal_6011)
				{
					settimera(0);
					func_372("***********************STARTING CAR CHASE TIMER VIA AMBUSH - 02***********************");
					bLocal_6011 = true;
					bLocal_6063 = true;
				}
			}
			if (!iLocal_6055)
			{
				if (iLocal_6054 && !bLocal_6036)
				{
					if (func_292() == 0)
					{
						if (!bLocal_6023)
						{
							if (!func_46())
							{
								func_34("DTRFKGR_03a", 7500, 1);
								iLocal_6055 = 1;
							}
						}
					}
				}
			}
			if (bLocal_6014 && bLocal_6015)
			{
				if (func_206(&Local_4356, &Local_5574, &uLocal_3641, &vLocal_6078, &iLocal_6142, &cLocal_5995, &bLocal_6006, &bLocal_6007, &uLocal_3642, &iLocal_6135, iLocal_4253, &Local_4255, &iLocal_6148, &Local_5560, &uLocal_3645, &uLocal_5830, uLocal_4254, &uLocal_6020, &bLocal_6023, &bLocal_6022, &uLocal_3646, &iLocal_6119))
				{
					bLocal_6007 = false;
					func_372("SETTING WANTED LEVEL MULTIPLIER TO ZERO IN SMUGGLERS MODE AGAIN!!!");
					unk_0x51B096AAC60548C1(0f);
					settimerb(0);
					func_372("***********************STARTING CAR CHASE TIMER VIA SMUGGLERS***********************");
					bLocal_6011 = true;
					bLocal_6064 = true;
					bLocal_6014 = false;
				}
			}
			if (func_197())
			{
				if (func_153(&uLocal_3638, &iLocal_6166, &iLocal_6142, &Local_4356, &Local_5648, &cLocal_5995, &vLocal_6078, &bLocal_6027, &bLocal_6004, bLocal_6005, &bLocal_6022, &bLocal_6023, &iLocal_6141, &uLocal_6012, &uLocal_6190, &uLocal_6191, &uLocal_6020, &uLocal_5830, &iLocal_6119, &iLocal_6135, &iLocal_6059))
				{
					if (!func_43(&iLocal_6187))
					{
						func_40(&iLocal_6187);
						func_41(&iLocal_6172);
						iLocal_6049 = 0;
					}
					if (!unk_0xE4EDC4B0E92C078B(iLocal_6142[0]))
					{
						if (!bLocal_6023)
						{
							iLocal_6142[0] = unk_0x6CC513A908911CF0(vLocal_6078[0]);
							if (unk_0xE4EDC4B0E92C078B(iLocal_6142[0]))
							{
								unk_0xDC5B2F9D0CCE3A10(iLocal_6142[0], "DTRFKGR_BLIP07");
							}
							func_34("DTRFKGR_03a", 7500, 1);
							StringCopy(&cLocal_5995, "DTRFKGR_03a", 32);
						}
					}
					else if (bLocal_6023)
					{
						if (unk_0xE4EDC4B0E92C078B(iLocal_6142[0]))
						{
							unk_0x142CC44DB769B57E(&(iLocal_6142[0]));
						}
					}
				}
			}
			func_152(&uLocal_5830, &iLocal_6059, &iLocal_6135, bLocal_6027);
			bLocal_6016 = true;
			if (bLocal_6005)
			{
				bLocal_6016 = false;
			}
			if (bLocal_6005 || bLocal_6022)
			{
				bLocal_6065 = false;
			}
			else
			{
				bLocal_6065 = true;
			}
			if (!unk_0x5A91F08DF773C39D(iLocal_6135, Local_4356.f_218[0].f_110, 5f, 5f, 2f, bLocal_6065, true, 0) || (!func_274(&iLocal_6135) && !func_151(iLocal_6135)))
			{
				bLocal_6016 = false;
			}
			else if (!bLocal_6005)
			{
				bLocal_6016 = true;
			}
			if (bLocal_6016)
			{
				unk_0xC92DB9682A650680("OJDG_COMPLETE");
				unk_0xE0C0351D5B931E37(iLocal_6135, 5f, 2, 0);
				func_150(&Local_5560);
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0x437347B10A200C4B(iLocal_6135, 0))
				{
					unk_0x45F014B3D0466974(unk_0x16F2683693E537C9(), iLocal_6135, 0);
				}
				fLocal_6111 = func_37(&iLocal_6160);
				fLocal_6111 = (fLocal_6111 * 1000f);
				if (Global_111638.f_19978.f_1 >= 20)
				{
					func_149(&(Local_3649.f_26), "DTRSHRD_MPASS", "DTRSHRD_GRT", 0);
					func_148(&(Local_3649.f_26), 9, "DTRSHRD_TIME1", "", floor(fLocal_6111), 0, 0, 0);
					func_148(&(Local_3649.f_26), 3, "DTRSHRD_MONEY", "", 5000, 0, 0, 0);
				}
				else
				{
					sLocal_6125 = func_146();
					func_149(&(Local_3649.f_26), "DTRSHRD_MPASS", "DTRSHRD_GRT", 0);
					func_148(&(Local_3649.f_26), 9, "DTRSHRD_TIME1", "", floor(fLocal_6111), 0, 0, 0);
					func_148(&(Local_3649.f_26), 3, "DTRSHRD_MONEY", "", 5000, 0, 0, 0);
					func_148(&(Local_3649.f_26), 6, "DTRSHRD_WEAP", sLocal_6125, 0, 0, 0, 0);
				}
				unk_0xC92DB9682A650680("OJDG_COMPLETE");
				func_372("GOING TO STATE - STAGE_ENDING_CUTSCENE_RUN");
				iLocal_3648 = 15;
			}
			else if (unk_0x5A91F08DF773C39D(iLocal_6135, Local_4356.f_218[0].f_110, 5f, 5f, 2f, bLocal_6065, true, 0))
			{
				if (!unk_0xD17F06053799A7CA())
				{
					if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
					{
						if (!iLocal_6072)
						{
							func_34("DTRSHRD_01", 7500, -1);
							iLocal_6072 = 1;
						}
					}
					else if (bLocal_6005 && !iLocal_6073)
					{
						func_34("DTRSHRD_06", 7500, -1);
						iLocal_6073 = 1;
					}
				}
			}
			break;
		
		case 15:
			if (unk_0xE4EDC4B0E92C078B(iLocal_6142[0]))
			{
				unk_0x142CC44DB769B57E(&(iLocal_6142[0]));
			}
			if (!iLocal_6039)
			{
				unk_0x3D0B5872F36FB05C("TREVOR_SMALL_01");
				iLocal_6039 = 1;
			}
			if (func_142(&(Local_3649.f_26), 1, 0) && unk_0x96871D785000ACAF())
			{
				func_141(&uLocal_6193, 1, 0, 0, 1);
				func_140(&uLocal_6193, "DTRSHRD_CONT", 2, 215, 1, 1, 0);
				settimera(0);
				unk_0x790015DC92C918E2();
				unk_0xA37A90C62806D848(1);
				func_139();
				func_372("GOING TO STATE - STAGE_ENDING_CUTSCENE");
				iLocal_3648 = 14;
			}
			break;
		
		case 14:
			if (timera() > 7000 && !iLocal_6076)
			{
				func_133(&uLocal_6193, 1128792064, 1, 0, 1, 1065353216);
				if (unk_0xBFC0798A6E3417F9(2, 215) || unk_0xD245978525608929(2, 200))
				{
					iLocal_6076 = 1;
				}
			}
			bLocal_6077 = func_100(&(Local_3649.f_26), 0, 1065353216, 0, 0, 0);
			if (iLocal_6076 || timera() > 12000)
			{
				func_99(&(Local_3649.f_26));
				if (bLocal_6077)
				{
					func_97(&(Local_3649.f_26));
					func_50();
					iLocal_6046 = 1;
					func_49();
					func_372("GOING TO STATE - STAGE_DRIVE_OFF");
					iLocal_3648 = 19;
				}
			}
			break;
		
		case 19:
			func_97(&(Local_3649.f_26));
			func_372("INSIDE STATE - STAGE_DRIVE_OFF");
			return 1;
			break;
	}
	return 0;
}

void func_49()
{
	iVar0 = 0;
	while (iVar0 < Local_5560.f_1)
	{
		if (unk_0xC844350D5D58C99A(Local_5560.f_1[iVar0]))
		{
			unk_0xF690C84DADBB3551(&(Local_5560.f_1[iVar0]));
			func_372("DELETING CUTSCENE CARGO");
		}
		iVar0++;
	}
}

void func_50()
{
	if (!iLocal_6067)
	{
		Local_4259 = Local_4259;
		switch (Global_111638.f_19978.f_1)
		{
			case 0:
				func_94(158, 0, 0);
				break;
			
			case 1:
				func_94(159, 0, 0);
				break;
			
			case 2:
				func_94(160, 0, 0);
				break;
			
			case 3:
				func_94(161, 0, 0);
				break;
			
			case 4:
				func_94(162, 0, 0);
				break;
		}
		if (Global_111638.f_19978.f_1 < 5)
		{
			Global_111638.f_19978.f_1++;
		}
		else if (Global_111638.f_19978.f_1 >= 5)
		{
			Global_111638.f_19978.f_1 = 5;
			Global_111638.f_19978.f_4++;
		}
		iVar1 = (Global_111638.f_19978.f_2 + Global_111638.f_19978.f_1);
		unk_0x6FB46C25CCB7E6D5(1720023068, &iVar0, -1);
		if (iVar0 < iVar1)
		{
			unk_0xCDC520E5E48E63D9(1720023068, iVar1, 1);
			func_93(16, iVar1);
		}
		if (Global_111638.f_19978.f_2 >= 5 && Global_111638.f_19978.f_1 >= 5)
		{
			func_80(16, 1);
		}
		if (!iLocal_6033)
		{
			if (bLocal_6021)
			{
				fLocal_6111 = func_37(&iLocal_6160);
				if (bLocal_6043)
				{
					func_149(&(Local_3649.f_26), "DTRSHRD_MPASS", "DTRSHRD_GRT", 0);
					func_148(&(Local_3649.f_26), 9, "DTRSHRD_TIME", "", floor(fLocal_6111), 0, 0, 0);
					func_148(&(Local_3649.f_26), 3, "DTRSHRD_MONEY", "", 5000, 0, 0, 0);
				}
				else
				{
					sLocal_6125 = func_146();
					func_149(&(Local_3649.f_26), "DTRSHRD_MPASS", "DTRSHRD_GRT", 0);
					func_148(&(Local_3649.f_26), 9, "DTRSHRD_TIME", "", floor(fLocal_6111), 0, 0, 0);
					func_148(&(Local_3649.f_26), 3, "DTRSHRD_MONEY", "", 5000, 0, 0, 0);
					func_148(&(Local_3649.f_26), 6, "DTRSHRD_WEAP", sLocal_6125, 0, 0, 0, 0);
				}
				iLocal_3648 = 14;
				iLocal_6033 = 1;
			}
		}
		func_55(2, 5000);
		func_54(1, 0);
		func_51();
		iLocal_6067 = 1;
	}
}

void func_51()
{
	func_52();
}

int func_52()
{
	if (func_53(0))
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

bool func_53(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

void func_54(int iParam0, int iParam1)
{
	Global_98783.f_7 = iParam0;
	Global_98783.f_8 = iParam1;
}

void func_55(int iParam0, int iParam1)
{
	func_57(Global_111638.f_24899[iParam0], func_79(iParam0), iParam1, 0, 0);
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
	unk_0x6FB46C25CCB7E6D5(func_56(iParam0, 1), &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(func_56(iParam0, 1), iVar0, 1);
}

int func_56(int iParam0, int iParam1)
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

void func_57(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_78(iParam0) == 3)
	{
		return;
	}
	if (func_78(iParam0) == 4)
	{
		return;
	}
	func_58(func_78(iParam0), 1, iParam1, iParam2, 0);
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

int func_58(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	func_77();
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
					func_76(99, 1);
					func_75(-656546900, iParam3);
					break;
				
				case 1:
					func_75(-2098183071, iParam3);
					break;
				
				case 2:
					func_75(1578119842, iParam3);
					break;
			}
			func_74(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_69(5))
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
							func_75(-1190521599, iParam3);
							break;
						
						case 1:
							func_75(490143716, iParam3);
							break;
						
						case 2:
							func_75(121069433, iParam3);
							break;
					}
					if (func_69(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_75(219506691, iParam3);
							break;
						
						case 1:
							func_75(1871505786, iParam3);
							break;
						
						case 2:
							func_75(-2024399847, iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_75(27639974, iParam3);
							break;
						
						case 1:
							func_75(422258364, iParam3);
							break;
						
						case 2:
							func_75(316202960, iParam3);
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
							func_75(1806738963, iParam3);
							break;
						
						case 1:
							func_75(1576781520, iParam3);
							break;
						
						case 2:
							func_75(671882196, iParam3);
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
									func_75(408653638, iParam3);
									break;
								
								case 1:
									func_75(-424799277, iParam3);
									break;
								
								case 2:
									func_75(-558138038, iParam3);
									break;
							}
							break;
						
						case -1215733929:
							switch (iParam0)
							{
								case 0:
									func_75(2038531975, iParam3);
									break;
								
								case 1:
									func_75(-572903575, iParam3);
									break;
								
								case 2:
									func_75(-953947924, iParam3);
									break;
							}
							if (func_69(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case 468388854:
							switch (iParam0)
							{
								case 0:
									func_75(-445823242, iParam3);
									break;
								
								case 1:
									func_75(-1386757215, iParam3);
									break;
								
								case 2:
									func_75(-727828275, iParam3);
									break;
							}
							break;
						
						case 499562112:
							switch (iParam0)
							{
								case 0:
									func_75(-1744069936, iParam3);
									break;
								
								case 1:
									func_75(799609312, iParam3);
									break;
								
								case 2:
									func_75(181688102, iParam3);
									break;
							}
							func_68(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_76(95, iParam3);
					break;
				
				case 1:
					func_76(97, iParam3);
					break;
				
				case 2:
					func_76(96, iParam3);
					break;
			}
			func_76(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_61(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_61(iVar1);
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
					func_75(-330339780, iParam3);
					break;
				
				case 1:
					func_75(1697564429, iParam3);
					break;
				
				case 2:
					func_75(1674823841, iParam3);
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
	func_60(iParam0);
	if (Global_41431 == 15)
	{
		func_59(0);
	}
	return 1;
}

void func_59(bool bParam0)
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

void func_60(int iParam0)
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

void func_61(int iParam0)
{
	if (iParam0 == 8)
	{
		func_67(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_67(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_67(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_67(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_64(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_64(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_64(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_64(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_64(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_64(8274, 0, -1, 1, 0);
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
	else if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_2097152[func_63()].f_6174.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), iParam0);
		unk_0x0674E58A79778E99(&(Global_2097152[func_63()].f_6174.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_62(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_62(int iParam0)
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

int func_63()
{
	iVar0 = 0;
	return iVar0;
}

void func_64(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_65(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_65(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_66();
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

int func_66()
{
	return Global_1312745;
}

int func_67(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_66();
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

void func_68(int iParam0)
{
	func_76(93, iParam0);
	func_76(29, iParam0);
	func_76(30, iParam0);
}

bool func_69(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_71(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_71(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_71(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_71(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_70(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_70(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_70(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_70(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_70(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_70(8274, -1, 0);
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
	return unk_0xEAE0D21A50E6C7F4(Global_2097152[func_63()].f_6174.f_10, iParam0);
}

int func_70(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_65(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_71(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_66();
	}
	iVar1 = func_73(iParam0, iParam1);
	uVar2 = func_72(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_72(int iParam0)
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

int func_73(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_66();
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

int func_74(bool bParam0)
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
		func_93(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_80(27, 1);
	return 1;
}

void func_75(int iParam0, int iParam1)
{
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 1);
}

void func_76(int iParam0, int iParam1)
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

void func_77()
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

int func_78(int iParam0)
{
	return Global_1798[iParam0].f_17;
}

int func_79(int iParam0)
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

int func_80(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_81(iParam0, iParam1);
}

int func_81(int iParam0, int iParam1)
{
	if (func_26(14) && !func_92(iParam0))
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
	if (func_91(&Global_4270065))
	{
		if (func_89(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_82(&Global_4270065, iParam0))
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

int func_82(var uParam0, int iParam1)
{
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_26(14) && !func_92(iParam1))
	{
		return 0;
	}
	if (func_89(uParam0, iParam1))
	{
		return 0;
	}
	if (func_88(uParam0) < 0f)
	{
		func_87(uParam0, 0);
	}
	func_85(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_83(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_83(var uParam0, int iParam1)
{
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_26(14) && !func_92(iParam1))
	{
		return 0;
	}
	if (func_89(uParam0, iParam1))
	{
		return 0;
	}
	if (func_88(uParam0) < 0f)
	{
		func_87(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_84(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_84(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_85(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_86(uParam0, iVar0);
		iVar0++;
	}
	func_87(uParam0, (Global_4270064 - 0,5f));
}

void func_86(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_87(var uParam0, float fParam1)
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

float func_88(var uParam0)
{
	return uParam0->f_80;
}

bool func_89(var uParam0, int iParam1)
{
	return func_90(uParam0, iParam1) != -1;
}

int func_90(var uParam0, int iParam1)
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

bool func_91(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_92(int iParam0)
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

int func_93(int iParam0, int iParam1)
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

void func_94(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_67((891 + iParam0), 1, -1, 1);
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
		func_95();
	}
}

void func_95()
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
		func_93(13, floor(Global_111638.f_10189.f_3853));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_96() == 2 == 0 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_52();
				}
			}
		}
	}
}

int func_96()
{
	return Global_30768;
}

void func_97(var uParam0)
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
				if (unk_0x757EF87A33649210() && !func_53(0))
				{
					unk_0x82E51BCA72537B6C(800);
				}
			}
		}
	}
	func_98(0);
}

void func_98(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

void func_99(var uParam0)
{
	if (uParam0->f_561 || uParam0->f_572 <= uParam0->f_558)
	{
		uParam0->f_561 = 0;
		uParam0->f_558 = (uParam0->f_572 - 1);
	}
}

int func_100(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)
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
	func_127(0);
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
		switch (func_23(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4())))
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
		uParam0->f_560 = (uParam0->f_560 + func_126(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_126(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_126((25f * 0,5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_126(30f) - func_126(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_98(1);
		uParam0->f_572 = (uParam0->f_572 + round((0f + (1000f * timestep()))));
		func_105(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0,225f) * timestep())));
			}
		}
		uParam0->f_30 = func_104(uParam0->f_30, 0f, 1f);
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
		uParam0->f_547 = func_104(uParam0->f_547, 0f, 1f);
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
		uParam0->f_548 = func_104(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (unk_0xB8E3620B82AD47D7(2))
			{
				if (unk_0x83D8570832F172A7(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_101(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
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
				func_101(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
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
				uParam0->f_559 = func_104((uParam0->f_559 + (((1f / 0,3f) * uParam0->f_573) * timestep())), 0f, 1f);
				uParam0->f_573 = func_104((uParam0->f_573 + 0,07f), 0,75f, 1,15f);
			}
		}
		else
		{
			uParam0->f_559 = func_104((uParam0->f_559 - ((((1f / 0,3f) * uParam0->f_573) * 0,01f) * timestep())), 0f, 1f);
			uParam0->f_573 = func_104((uParam0->f_573 + 0,07f), 0,75f, 1,15f);
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
				func_98(0);
			}
			return !bVar0;
		}
	}
	func_98(0);
	return 1;
}

void func_101(var uParam0, bool bParam1)
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
	func_103(unk_0xF59058FCB716F903(2, 215, true));
	func_102("ES_HELP");
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
		func_103(unk_0xF59058FCB716F903(2, 216, true));
		func_102("ES_XPAND");
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

void func_102(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_103(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

float func_104(float fParam0, float fParam1, float fParam2)
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

void func_105(var uParam0, float fParam1, bool bParam2)
{
	iVar0 = round((uParam0->f_547 * 255f));
	fVar1 = (func_125() * 0,25f);
	if (unk_0x83D8570832F172A7(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0x7E60C62A7CE58FC8(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_102(&(uParam0->f_5));
				if (uParam0->f_556 == 4)
				{
					func_124(&(uParam0->f_13));
				}
				else
				{
					func_102(&(uParam0->f_13));
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
		func_123();
		unk_0x6567AE843FADBA94(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0,1388889f + func_126((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
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
	fVar1 = (0,3f * func_125());
	if (uParam0->f_12)
	{
		fVar1 = 0,5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_556 != 4)
	{
		fVar7 = func_122(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0,006f));
		}
		if (unk_0x33D480CCE15C991A(0) < 1,4f)
		{
			fVar6 = (fVar6 * 1,3f);
		}
		fVar7 = func_122(&(uParam0->f_550));
		fVar8 = (((0,119f + 0,05f) / func_125()) / 2,5f);
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
						func_119((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
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
	fVar1 = (fVar1 - func_126(6f));
	fVar1 = (fVar1 + (func_126(30f) - func_126((2f * 2f))));
	fVar11 = (fVar2 - func_126((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_104((fVar11 / (0,6f * func_126(25f))), 0f, 1f);
		func_123();
		unk_0xC1032CAC14DE468A(0,5f, (fVar1 - (func_126((2f - 0,5f)) - 0,001388889f)), fVar6, func_118(1f), iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_126((2f * 0,3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_126((25f * 0,2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0,3f * func_125())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_104((fVar11 / (0,8f * func_126(25f))), 0f, 1f);
			func_115(uParam0, iVar17, (fVar1 + func_126(2f)), fVar9, fVar10, round((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_126(25f));
		if (uParam0->f_556 == 4)
		{
			if (iVar17 == (uParam0->f_576 - 1))
			{
				fVar1 = (fVar1 + func_126((25f * 0,2f)));
				fVar11 = (fVar2 - (fVar1 - (0,3f * func_125())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_126(2f));
					fVar12 = func_104((fVar11 / (0,6f * func_126(25f))), 0f, 1f);
					func_123();
					unk_0xC1032CAC14DE468A(0,5f, (fVar1 + func_126((2f * 0,5f))), fVar6, func_118(1f), iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_126((2f * 0,3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_126((25f * 0,2f)));
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
		fVar1 = (fVar1 + func_126((25f * 0,2f)));
		fVar11 = (fVar2 - (fVar1 - (0,3f * func_125())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_126(2f));
			fVar12 = func_104((fVar11 / (0,6f * func_126(25f))), 0f, 1f);
			func_123();
			unk_0xC1032CAC14DE468A(0,5f, (fVar1 + func_126((2f * 0,5f))), fVar6, func_118(1f), iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_126((25f * 0,2f)));
		fVar11 = (fVar2 - (fVar1 - (0,3f * func_125())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_104((fVar11 / (0,8f * func_126(25f))), 0f, 1f);
			unk_0x7178F32F6742C936(iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar0))));
			func_108(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0xB3260A60545D3F11() == 0)
			{
				fVar20 = (fVar9 + ((0,119f / func_125()) / 2,5f));
				fVar21 = (fVar10 - ((0,119f / func_125()) / 2,5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0,119f + 0,05f) / func_125()) / 2,5f));
					fVar21 = (fVar10 - (((0,119f + 0,05f) / func_125()) / 2,5f));
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
			func_107(&(uParam0->f_550), fVar20, (fVar1 + func_126((2f * 2f))), 0, 0, 0);
			unk_0xF1F881BAAAFB43B1(fVar20, fVar21);
			unk_0xEEF67251E263A87F(2);
			unk_0xD3539A877EC25E86(1f, 0,4f);
			unk_0xAAE406A7DA443B93(0);
			func_123();
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
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_126((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0x070005E852D4C0E9("FO_TWO_NUM");
					unk_0x6D99DF8263D35CE5(uParam0->f_554);
					unk_0x6D99DF8263D35CE5(uParam0->f_555);
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_126((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0x070005E852D4C0E9("MTPHPER_XPNO");
					unk_0x6D99DF8263D35CE5(uParam0->f_554);
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_126((2f * 2f))), 0);
					break;
				
				case 5:
					unk_0x070005E852D4C0E9("ESDOLLA");
					unk_0xCBD015EC7E4226BC(uParam0->f_554, 1);
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_126((2f * 2f))), 0);
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
				fVar42 = ((fVar21 + func_106(4f)) - 0,006f);
				fVar43 = ((fVar1 + func_126(10f)) + fVar39);
				if (uParam0->f_556 == -1)
				{
					fVar42 = (fVar42 - (0,006f * 6f));
				}
				fVar40 = (fVar40 * 0,65f);
				fVar41 = (fVar41 * 0,65f);
				unk_0x539E86AE011A8B38(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, round((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_126(30f) - 2f));
		}
	}
}

float func_106(float fParam0)
{
	return (fParam0 * 0,00078125f);
}

void func_107(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	unk_0xAAE406A7DA443B93(iParam3);
	unk_0x7BBAC160090910C3(iParam5);
	func_123();
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

int func_108(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	StringCopy(&cVar0, func_114(iParam0), 64);
	StringCopy(&cVar16, func_111(iParam0, bParam1), 64);
	if (unk_0x12AB0310C2281427(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0xE5AC5CA7914F5BAE(&iVar32, &iVar33);
			fVar35 = unk_0x33D480CCE15C991A(0);
			if (func_110())
			{
				iVar32 = round((to_float(iVar33) * fVar35));
			}
			fVar36 = (to_float(iVar32) / to_float(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_110())
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
		vVar37.x = (vVar37.x * (func_109(iParam0) / fVar34));
		vVar37.y = (vVar37.y * (func_109(iParam0) / fVar34));
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

float func_109(int iParam0)
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

int func_110()
{
	unk_0xE5AC5CA7914F5BAE(&iVar0, &iVar1);
	fVar2 = (to_float(iVar0) / to_float(iVar1));
	if (fVar2 > 3,5f)
	{
		return 1;
	}
	return 0;
}

var func_111(int iParam0, bool bParam1)
{
	if (!unk_0xEA6BC48857E0AC4C(&(Global_22350.f_7029[iParam0])))
	{
		if (unk_0x12AB0310C2281427(&(Global_22350.f_7029[iParam0])) == -1487683087)
		{
			Var19 = { func_113(unk_0xD803B885F5E47A62()) };
			if (unk_0x205FB5BBF81D8900(&Var19, &uVar3))
			{
				return func_112(&uVar3);
			}
		}
		else
		{
			return func_112(&(Global_22350.f_7029[iParam0]));
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

var func_112(var uParam0)
{
	return uParam0;
}

struct<13> func_113(int iParam0)
{
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

char* func_114(int iParam0)
{
	if (!unk_0xEA6BC48857E0AC4C(&(Global_22350.f_6020[iParam0])))
	{
		if (unk_0x12AB0310C2281427(&(Global_22350.f_6020[iParam0])) == -1487683087)
		{
			Var16 = { func_113(unk_0xD803B885F5E47A62()) };
			unk_0x205FB5BBF81D8900(&Var16, &uVar0);
			return func_112(&uVar0);
		}
		else
		{
			return func_112(&(Global_22350.f_6020[iParam0]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_115(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	unk_0xA402F6C87C08815C(1, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iParam5);
	unk_0xF1F881BAAAFB43B1(fParam3, fParam4);
	unk_0xEEF67251E263A87F(1);
	unk_0xD3539A877EC25E86(1f, func_117(14f));
	unk_0xAAE406A7DA443B93(0);
	unk_0x7BBAC160090910C3(0);
	func_123();
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
			func_108(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0x539E86AE011A8B38("CommonMenu", func_111(7, 0), (fParam4 - 0,006f), ((fParam2 + func_126(2f)) + (0,25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0,38f) + 0,006f));
			break;
		
		case 2:
			func_108(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0x539E86AE011A8B38("CommonMenu", func_111(5, 0), (fParam4 - 0,006f), ((fParam2 + func_126(2f)) + (0,25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0,38f) + 0,006f));
			break;
		
		case 3:
			func_108(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0x539E86AE011A8B38("CommonMenu", func_111(6, 0), (fParam4 - 0,006f), ((fParam2 + func_126(2f)) + (0,25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
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
	unk_0xD3539A877EC25E86(1f, func_117(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		unk_0xF1F881BAAAFB43B1(fParam3, (fVar4 - (0,00078125f * 3f)));
	}
	else
	{
		unk_0xF1F881BAAAFB43B1(fParam3, (fVar4 + (0,00078125f * 2f)));
	}
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iParam5);
	func_116(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1]), uParam0->f_57[iParam1]);
}

void func_116(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	iVar0 = 1;
	unk_0xAAE406A7DA443B93(0);
	unk_0x7BBAC160090910C3(0);
	func_123();
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
			unk_0xD3539A877EC25E86(1f, func_117(18f));
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
			unk_0xD3539A877EC25E86(1f, func_117(14f));
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
			unk_0xD3539A877EC25E86(1f, func_117(18f));
		
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
			unk_0xD3539A877EC25E86(1f, func_117(14f));
		}
		else
		{
			unk_0xE0026608C37C7C41(fParam2, fParam3, 0);
		}
	}
}

float func_117(float fParam0)
{
	return (fParam0 * 0,025f);
}

float func_118(float fParam0)
{
	return (fParam0 * 0,0009259259f);
}

void func_119(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_121(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_120(7, iVar0);
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

void func_120(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_121(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1378678.f_6293[iParam0], iParam1);
}

float func_122(char* sParam0)
{
	unk_0xBBA442527B4BB1A6(sParam0);
	return (unk_0x79E367314AFBB5CA(1) / 2f);
}

void func_123()
{
	unk_0xD9ACBBA59FD5A09E(1);
	if (unk_0xD0BB2359EC70FC37() || unk_0x757EF87A33649210())
	{
		unk_0xD9ACBBA59FD5A09E(7);
	}
	unk_0x5DD950F92F816F03(0);
}

void func_124(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

float func_125()
{
	fVar0 = 1f;
	if (unk_0x0EFF6B4415DAF4A1())
	{
	}
	return fVar0;
}

float func_126(float fParam0)
{
	return (fParam0 * 0,001388889f);
}

void func_127(int iParam0)
{
	if (func_132())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_131(0))
		{
			func_128(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_128(int iParam0)
{
	if (func_132())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_130())
		{
			func_129(1, 1);
		}
		else
		{
			func_129(0, 0);
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
	if (!func_17())
	{
		Global_19486.f_1 = 3;
	}
}

void func_129(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_131(0))
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

bool func_130()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

int func_131(int iParam0)
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

bool func_132()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_133(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (((unk_0xD0BB2359EC70FC37() || unk_0x7BCE0E6DD4A1F749()) || unk_0x757EF87A33649210()) || unk_0x06980BB66EBA4D95())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_138(uParam0))
	{
		return;
	}
	unk_0xBD706C594F6DCD4A();
	unk_0xD9ACBBA59FD5A09E(iParam2);
	if (!func_137(uParam0->f_1, 256) || (func_137(uParam0->f_1, 8192) && unk_0xB8E3620B82AD47D7(2)))
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
			unk_0x1200CC973A2399C8(func_137(uParam0->f_1, 4096));
			unk_0x7E60D21B163E9D56();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = unk_0x91E3F625EF57450D(2);
					break;
				
				case 2:
					bVar4 = !unk_0x91E3F625EF57450D(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x3CAEA85DA607305E(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6].f_14)
					{
						iVar0 = uParam0->f_2[iVar6].f_3[iVar7];
						iVar1 = uParam0->f_2[iVar6].f_3[iVar7].f_1;
						bVar2 = unk_0xEAE0D21A50E6C7F4(uParam0->f_2[iVar6].f_13, iVar7);
						if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_2[iVar6].f_12, iVar7))
						{
							sVar3 = unk_0xF59058FCB716F903(iVar0, iVar1, bVar2);
						}
						else
						{
							sVar3 = unk_0xE32F7AC5E6DF304A(iVar0, iVar1, bVar2);
						}
						if (!unk_0xEA6BC48857E0AC4C(sVar3))
						{
							func_103(sVar3);
						}
						iVar7++;
					}
					if (!unk_0xEA6BC48857E0AC4C(uParam0->f_2[iVar6]))
					{
						func_102(uParam0->f_2[iVar6]);
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						if (func_137(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6].f_1)
							{
								unk_0x1200CC973A2399C8(true);
								unk_0x3CAEA85DA607305E(uParam0->f_2[iVar6].f_3[0].f_1);
							}
							else
							{
								unk_0x1200CC973A2399C8(false);
								unk_0x3CAEA85DA607305E(-1);
							}
						}
					}
					unk_0x7E60D21B163E9D56();
				}
			}
			iVar6++;
		}
		fVar8 = func_136(bParam4, func_136(func_137(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x7E60C62A7CE58FC8(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x7C19E5E4784BD7CF(fVar8);
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(80f);
		unk_0x7E60D21B163E9D56();
		func_135(&(uParam0->f_1), 256);
		func_134(&(uParam0->f_1), 128);
	}
	unk_0x6567AE843FADBA94(*uParam0, 255, 255, 255, 0, 0);
}

void func_134(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_135(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_136(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_137(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_138(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			func_135(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_139()
{
	Global_19671 = 0;
	func_29();
}

int func_140(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1] = sParam1;
		uParam0->f_2[iVar1].f_1 = iVar0;
		uParam0->f_2[iVar1].f_2 = iParam6;
		uParam0->f_2[iVar1].f_12 = 0;
		uParam0->f_2[iVar1].f_13 = 0;
		uParam0->f_2[iVar1].f_14 = 0;
		uParam0->f_2[iVar1].f_3[0] = iParam2;
		uParam0->f_2[iVar1].f_3[0].f_1 = iParam3;
		if (iParam4 == 1)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_2[iVar1].f_13), 0);
		}
		uParam0->f_2[iVar1].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_141(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x5275223F099DEF26("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_135(&(uParam0->f_1), 32);
	}
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		func_135(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0x5461A9D388F592B4(*uParam0, 1);
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (bParam3)
		{
			func_135(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_135(&(uParam0->f_1), 8192);
	}
}

int func_142(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_145(uParam0);
	func_144(uParam0);
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
			func_143(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_101(uParam0, 1);
		}
		else
		{
			func_101(uParam0, 0);
		}
	}
	Global_76883 = 1;
	return 1;
}

void func_143(var uParam0)
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
	func_103(unk_0xF59058FCB716F903(2, 188, true));
	func_102("ES_HELP_TU");
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(1);
	func_103(unk_0xF59058FCB716F903(2, 187, true));
	func_102("ES_HELP_TD");
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(0);
	func_103(unk_0xF59058FCB716F903(2, 202, true));
	func_102("ES_HELP_AB");
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x7E60D21B163E9D56();
}

void func_144(var uParam0)
{
	fVar0 = 0f;
	unk_0xEEF67251E263A87F(0);
	unk_0xD3539A877EC25E86(1f, func_117(16f));
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

void func_145(var uParam0)
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

char* func_146()
{
	if (Global_111638.f_19978.f_1 == 0)
	{
		sLocal_6125 = "DTRSHRD_WEAP01";
		func_147(453432689, 100);
	}
	else if (Global_111638.f_19978.f_1 == 1)
	{
		sLocal_6125 = "DTRSHRD_WEAP02";
		func_147(324215364, 100);
	}
	else if (Global_111638.f_19978.f_1 == 2)
	{
		sLocal_6125 = "DTRSHRD_WEAP03";
		func_147(-1813897027, 5);
	}
	else if (Global_111638.f_19978.f_1 == 3)
	{
		sLocal_6125 = "DTRSHRD_WEAP04";
		func_147(487013001, 40);
	}
	else if (Global_111638.f_19978.f_1 == 4)
	{
		sLocal_6125 = "DTRSHRD_WEAP05";
		func_147(-1074790547, 5);
	}
	else if (Global_111638.f_19978.f_1 == 5)
	{
		switch (Global_111638.f_19978.f_4)
		{
			case 0:
				sLocal_6125 = "DTRSHRD_WEAP01";
				func_147(453432689, 100);
				break;
			
			case 1:
				sLocal_6125 = "DTRSHRD_WEAP02";
				func_147(324215364, 100);
				break;
			
			case 2:
				sLocal_6125 = "DTRSHRD_WEAP03";
				func_147(-1813897027, 5);
				break;
			
			case 3:
				sLocal_6125 = "DTRSHRD_WEAP04";
				func_147(487013001, 40);
				break;
			
			case 4:
				sLocal_6125 = "DTRSHRD_WEAP05";
				func_147(-1074790547, 5);
				break;
			
			case 5:
				sLocal_6125 = "DTRSHRD_WEAP01";
				func_147(453432689, 100);
				break;
			
			case 6:
				sLocal_6125 = "DTRSHRD_WEAP02";
				func_147(324215364, 100);
				break;
			
			case 7:
				sLocal_6125 = "DTRSHRD_WEAP03";
				func_147(-1813897027, 5);
				break;
			
			case 8:
				sLocal_6125 = "DTRSHRD_WEAP04";
				func_147(487013001, 40);
				break;
			
			case 9:
				sLocal_6125 = "DTRSHRD_WEAP05";
				func_147(-1074790547, 5);
				break;
			
			case 10:
				sLocal_6125 = "DTRSHRD_WEAP01";
				func_147(453432689, 100);
				break;
			
			case 11:
				sLocal_6125 = "DTRSHRD_WEAP02";
				func_147(324215364, 100);
				break;
			
			case 12:
				sLocal_6125 = "DTRSHRD_WEAP03";
				func_147(-1813897027, 5);
				break;
			
			case 13:
				sLocal_6125 = "DTRSHRD_WEAP04";
				func_147(487013001, 40);
				break;
			
			case 14:
				sLocal_6125 = "DTRSHRD_WEAP05";
				func_147(-1074790547, 5);
				break;
			}
	}
	return sLocal_6125;
}

void func_147(int iParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), iParam0, 0))
		{
			iVar0 = unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), iParam0);
			unk_0x155F8B27DA5061F5(unk_0x16F2683693E537C9(), iParam0, (iParam1 + iVar0), 0);
		}
		else
		{
			unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), iParam0, 0, false, true);
			iVar0 = unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), iParam0);
			if (iVar0 < iParam1)
			{
				unk_0x155F8B27DA5061F5(unk_0x16F2683693E537C9(), iParam0, iParam1, 0);
			}
		}
	}
}

void func_148(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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

void func_149(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_150(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		unk_0xF690C84DADBB3551(iParam0);
	}
}

int func_151(int iParam0)
{
	if ((((unk_0x377BE9A1BF38C7CE(iParam0) || unk_0x4E861BC5B1EDA7BD(iParam0)) || unk_0xA4F4A1E4DDB4728B(unk_0x68F4C0EC296D3901(iParam0, false), 5f) > 0) || unk_0x54648B774DB42A3A(iParam0, 615608432, 0)) || unk_0xBBE430A566D01EF3(unk_0x68F4C0EC296D3901(iParam0, false) - Vector(5f, 5f, 5f), unk_0x68F4C0EC296D3901(iParam0, false) + Vector(5f, 5f, 5f), 615608432, 0))
	{
		return 1;
	}
	return 0;
}

void func_152(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		if (!unk_0xD17F06053799A7CA())
		{
			if (!iLocal_3526)
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0x437347B10A200C4B(*iParam2, 0))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), *iParam2, 0))
					{
						if (*iParam1 && iLocal_3524)
						{
							func_45(uParam0, 3, 0, "OSCAR", 0, 1);
							if (func_8(uParam0, "ARMSAUD", "ARMS_LOSTH", 9, 0, 0, 0))
							{
								iLocal_3526 = 1;
							}
						}
						else if (bLocal_3527)
						{
							func_45(uParam0, 3, 0, "OSCAR", 0, 1);
							iVar0 = (unk_0x09AC81E49EA267F7(0, 65535) % 6);
							if (iVar0 == 0)
							{
								if (func_8(uParam0, "ARMSAUD", "ARMS_GRTP02", 9, 0, 0, 0))
								{
									iLocal_3526 = 1;
								}
							}
							else if (iVar0 == 1)
							{
								if (func_8(uParam0, "ARMSAUD", "ARMS_GRTP03", 9, 0, 0, 0))
								{
									iLocal_3526 = 1;
								}
							}
							else if (iVar0 == 2)
							{
								if (func_8(uParam0, "ARMSAUD", "ARMS_GRTP04", 9, 0, 0, 0))
								{
									iLocal_3526 = 1;
								}
							}
							else if (iVar0 == 3)
							{
								if (func_8(uParam0, "ARMSAUD", "ARMS_GRTP05", 9, 0, 0, 0))
								{
									iLocal_3526 = 1;
								}
							}
							else if (iVar0 == 4)
							{
								if (func_8(uParam0, "ARMSAUD", "ARMS_GRTP06", 9, 0, 0, 0))
								{
									iLocal_3526 = 1;
								}
							}
							else if (iVar0 == 5)
							{
								if (func_8(uParam0, "ARMSAUD", "ARMS_GRTP07", 9, 0, 0, 0))
								{
									iLocal_3526 = 1;
								}
							}
						}
						else if (bLocal_3528)
						{
							func_45(uParam0, 3, 0, "OSCAR", 0, 1);
							iVar0 = (unk_0x09AC81E49EA267F7(0, 65535) % 6);
							if (iVar0 == 0)
							{
								if (func_8(uParam0, "ARMSAUD", "ARMS_KILL01", 9, 0, 0, 0))
								{
									iLocal_3526 = 1;
								}
							}
							else if (iVar0 == 1)
							{
								if (func_8(uParam0, "ARMSAUD", "ARMS_KILL02", 9, 0, 0, 0))
								{
									iLocal_3526 = 1;
								}
							}
							else if (iVar0 == 2)
							{
								if (func_8(uParam0, "ARMSAUD", "ARMS_KILL03", 9, 0, 0, 0))
								{
									iLocal_3526 = 1;
								}
							}
							else if (iVar0 == 3)
							{
								if (func_8(uParam0, "ARMSAUD", "ARMS_KILL04", 9, 0, 0, 0))
								{
									iLocal_3526 = 1;
								}
							}
							else if (iVar0 == 4)
							{
								if (func_8(uParam0, "ARMSAUD", "ARMS_KILL05", 9, 0, 0, 0))
								{
									iLocal_3526 = 1;
								}
							}
							else if (iVar0 == 5)
							{
								if (func_8(uParam0, "ARMSAUD", "ARMS_KILL06", 9, 0, 0, 0))
								{
									iLocal_3526 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_153(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, char* sParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, var uParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19, int iParam20)
{
	if (*bParam8)
	{
		iVar0 = 0;
		while (iVar0 < uParam4->f_18)
		{
			if (!unk_0xE4EDC4B0E92C078B(uParam4->f_18[iVar0]))
			{
				if (unk_0xC844350D5D58C99A((*uParam4)[iVar0]))
				{
					uParam4->f_18[iVar0] = unk_0x5C3B41825F6AC5A0((*uParam4)[iVar0]);
					unk_0x61755AC17D8F538E(uParam4->f_18[iVar0], 1);
					unk_0xDC5B2F9D0CCE3A10(uParam4->f_18[iVar0], "DTRFKGR_BLIP04");
				}
			}
			iVar0++;
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (*iParam20)
			{
				unk_0x523BCC9DC80CD82F(788747387);
				func_372("REQUESTING BUZZARD");
			}
			else
			{
				unk_0x523BCC9DC80CD82F(uParam3->f_1109[0]);
				func_372("REQUESTING CAR CHASERS");
			}
			if (*uParam13)
			{
				*uParam14 = 2046537925;
				*uParam15 = 368603149;
			}
			else if (*iParam20)
			{
				*uParam14 = 788747387;
				if (bLocal_3373)
				{
					*uParam15 = 1466037421;
				}
				else if (bLocal_3374)
				{
					*uParam15 = 62440720;
				}
				else if (bLocal_3375)
				{
					*uParam15 = 1822107721;
				}
			}
			else
			{
				*uParam14 = uParam3->f_1109[0];
				if (bLocal_3373)
				{
					*uParam15 = 1466037421;
				}
				else if (bLocal_3374)
				{
					*uParam15 = 62440720;
				}
				else if (bLocal_3375)
				{
					*uParam15 = 1822107721;
				}
			}
			unk_0x523BCC9DC80CD82F(*uParam15);
			iVar0 = 0;
			while (iVar0 < uParam3->f_1105)
			{
				if (iLocal_3514[iVar0])
				{
					iLocal_3514[iVar0] = 0;
				}
				iVar0++;
			}
			if (*iParam20)
			{
				if (unk_0xB87F6CF6E5628C67(788747387) && unk_0xB87F6CF6E5628C67(*uParam15))
				{
					*uParam0 = 1;
				}
			}
			else if (unk_0xB87F6CF6E5628C67(*uParam14) && unk_0xB87F6CF6E5628C67(*uParam15))
			{
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!bParam9)
			{
				vVar4 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
				if (unk_0xDE5F9F54005367A1(vVar4, &vVar1, 1, 1077936128, 0))
				{
					if (unk_0x0EB28750412C3A5A(vVar4, vVar1, true) < 5f)
					{
						func_372("PLAYER IS IN DEFINED AREA FOR CAR CHASE");
						func_41(iParam1);
						func_372("SETTING RELATIONSHIP GROUPS");
						*uParam0 = 2;
					}
				}
			}
			break;
		
		case 2:
			func_189(uParam3, iParam1, uParam4, iParam2, bParam8, uParam13, uParam14, uParam15, iParam20);
			if (*bParam8)
			{
				if (!func_43(&(uParam4->f_37)))
				{
					func_40(&(uParam4->f_37));
				}
				*uParam16 = 1;
				func_372("SETTING bOkayToRunTrap = TRUE VIA CAR CAR CHASE");
				*uParam6[0] = { 0f, 0f, 0f };
				if (!*uParam13)
				{
					unk_0x51B096AAC60548C1(0f);
					func_372("SETTING WANTED MULTIPLIER TO 0.0 VIA CAR CHASE");
				}
				func_372("GOING TO STATE - CAR_CHASE_CHASE");
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (!bLocal_3553)
			{
				if (*uParam13)
				{
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						vVar4 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
					}
					if (unk_0xDF1306B443CD3D15(iLocal_3538[0], 0))
					{
						vVar7 = { unk_0x68F4C0EC296D3901(iLocal_3538[0], true) };
					}
					if (unk_0xDF1306B443CD3D15(iLocal_3538[0], 0))
					{
						if ((unk_0x0A059E0DB9253280(iLocal_3538[0]) && !unk_0x03068588A1FCED1A(iLocal_3538[0])) && vdist(vVar4, vVar7) < 100f)
						{
							unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 2, 0);
							unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
							bLocal_3553 = true;
						}
					}
				}
			}
			func_188(uParam17);
			func_189(uParam3, iParam1, uParam4, iParam2, bParam8, uParam13, uParam14, uParam15, iParam20);
			func_187(uParam17);
			if (func_155(uParam3, uParam4, uParam10, uParam13, iParam20))
			{
				func_372("GOING TO CAR_CHASE_FINAL");
				*uParam0 = 4;
			}
			break;
		
		case 4:
			iVar0 = 0;
			while (iVar0 < uParam4->f_27)
			{
				if (unk_0xE4EDC4B0E92C078B(uParam4->f_27[iVar0]))
				{
					unk_0x142CC44DB769B57E(&(uParam4->f_27[iVar0]));
					func_372("REMOVING BLIP badGuyBlips");
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < uParam4->f_18)
			{
				if (unk_0xE4EDC4B0E92C078B(uParam4->f_18[iVar0]))
				{
					unk_0x142CC44DB769B57E(&(uParam4->f_18[iVar0]));
					func_372("REMOVING blipCarChasers");
				}
				iVar0++;
			}
			if (unk_0xC844350D5D58C99A((*uParam4)[0]))
			{
				if (unk_0x03068588A1FCED1A((*uParam4)[0]))
				{
					unk_0xA954465BA6FDEFE2(uParam4[0]);
					unk_0xEBA53F35D0085654(&(uParam4->f_9[0]));
					unk_0xEBA53F35D0085654(&(uParam4->f_9[1]));
				}
				else
				{
					unk_0x046C362CF15F1935(uParam4[0]);
					unk_0x6DAD7906B73F064D(&(uParam4->f_9[0]));
					unk_0x6DAD7906B73F064D(&(uParam4->f_9[1]));
				}
			}
			unk_0x71199B01895C6202(330661258);
			if (!*uParam10 && !*bParam11)
			{
				if (!unk_0xE4EDC4B0E92C078B((*iParam2)[0]))
				{
					(*iParam2)[0] = unk_0x6CC513A908911CF0(uParam3->f_218[0].f_110);
					if (unk_0xE4EDC4B0E92C078B((*iParam2)[0]))
					{
						unk_0xDC5B2F9D0CCE3A10((*iParam2)[0], "DTRFKGR_BLIP07");
					}
					func_154("DTRFKGR_03a", 3500, 1);
				}
			}
			else if (*bParam11)
			{
				if (!unk_0xE4EDC4B0E92C078B(*iParam12))
				{
					*iParam12 = unk_0x5C3B41825F6AC5A0(*iParam19);
					unk_0x61755AC17D8F538E(*iParam12, 3);
					func_34("DTRSHRD_03", 3500, 1);
					StringCopy(sParam5, "DTRSHRD_03", 32);
				}
			}
			*uParam6[0] = { uParam3->f_218[0].f_110 };
			unk_0xC92DB9682A650680("OJDG2_MORE_DEAD");
			iLocal_3368 = 0;
			*uParam18 = unk_0x1C0640BA9A7327B3();
			func_372("COMPLETED CAR CHASE");
			unk_0x51B096AAC60548C1(1f);
			func_372("SETTING WANTED MULTIPLIER TO 1.0 VIA CAR CHASE");
			*uParam0 = 5;
			*bParam7 = 1;
			*bParam8 = 0;
			return 1;
			break;
		
		case 5:
			break;
	}
	return 0;
}

void func_154(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0);
}

int func_155(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	if (unk_0xC844350D5D58C99A((*uParam1)[0]) && !unk_0x437347B10A200C4B((*uParam1)[0], 0))
	{
		func_160(&uLocal_3501, (*uParam1)[0], 0, 0, 1, 1, 1);
	}
	else
	{
		func_259(&uLocal_3501, 0, 0);
	}
	if (func_157(uParam0, uParam1, uParam2, uParam3, uParam4) || func_156(uParam0, uParam1, uParam3))
	{
		return 1;
	}
	return 0;
}

int func_156(var uParam0, var uParam1, var uParam2)
{
	if (func_43(&iLocal_3554))
	{
		if ((func_37(&iLocal_3554) > 30f && !bLocal_3553) || (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), uParam0->f_218[0].f_110) < 100f && !bLocal_3553))
		{
			func_372("TIME UP ON STAGED POLICE CHASE");
			return 1;
		}
	}
	if (*uParam2)
	{
		if (bLocal_3553 && !unk_0xF06268E966D7C1A2(unk_0xA30EC016B12C03E4(), 0))
		{
			iVar0 = 0;
			while (iVar0 < *uParam1)
			{
				if (unk_0xDF1306B443CD3D15((*uParam1)[iVar0], 0))
				{
					iVar1 = 0;
					while (iVar1 < uParam0->f_1108)
					{
						iVar2 = (iVar0 * uParam0->f_1108);
						if (!unk_0xEB6A8945D1AC98A1(uParam1->f_9[(iVar1 + iVar2)]))
						{
							unk_0xA3BF0AA5A2608191(uParam1->f_9[(iVar1 + iVar2)]);
							unk_0xE072601B4380E9DF(uParam1->f_9[(iVar1 + iVar2)], (*uParam1)[iVar0], 20f, 786599);
							func_372("TASKING CAR TO WANDER VIA POLICE CHASE");
						}
						if (!unk_0x0A059E0DB9253280(uParam1->f_9[(iVar1 + iVar2)]))
						{
							unk_0xEBA53F35D0085654(&(uParam1->f_9[(iVar1 + iVar2)]));
							func_372("DELETING PEDS IN POLICE CAR CHASE");
						}
						iVar1++;
					}
					if (!unk_0x0A059E0DB9253280((*uParam1)[iVar0]))
					{
						unk_0xA954465BA6FDEFE2(uParam1[iVar0]);
						func_372("DELETING CARS IN POLICE CAR CHASE");
					}
				}
				iVar0++;
			}
			return 1;
		}
	}
	return 0;
}

int func_157(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	bVar5 = true;
	bVar6 = true;
	bVar7 = true;
	iVar1 = 0;
	while (iVar1 < uParam0->f_1105)
	{
		if (iLocal_3514[iVar1])
		{
			iVar0 = (iVar0 + (iVar1 * uParam0->f_1107));
			iVar0 = 0;
			while (iVar0 < uParam0->f_1107)
			{
				if (unk_0xC844350D5D58C99A((*uParam1)[iVar0]))
				{
					if (!unk_0x437347B10A200C4B((*uParam1)[iVar0], 0))
					{
						if (*uParam4)
						{
							if (func_159(unk_0x16F2683693E537C9(), (*uParam1)[iVar0], 1) < 90f || (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && unk_0xB87D13D0C064E9D1(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), (*uParam1)[iVar0], 1)))
							{
								bLocal_3525 = true;
							}
							if (bLocal_3525)
							{
								if (!func_43(&iLocal_3535))
								{
									func_40(&iLocal_3535);
								}
								else if (func_37(&iLocal_3535) > (fLocal_3546 - 15f))
								{
									if (!bLocal_3530)
									{
										if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
										{
											iVar8 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
										}
										else
										{
											iVar8 = 0;
										}
										unk_0x9AFA0796FDCABCD5(unk_0xA30B8362589C124A((*uParam1)[iVar2], -1, 0), (*uParam1)[iVar2], iVar8, unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 8, 100f, -1f, unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()), 100, 50, -1082130432, 0);
										unk_0x0E2400AB9174FA81(2, 1862763509, uParam1->f_36);
										unk_0x0E2400AB9174FA81(2, uParam1->f_36, 1862763509);
										func_372("bTaskedToWander = TRUE");
										bLocal_3530 = true;
									}
									if (bLocal_3530)
									{
										if (func_37(&iLocal_3535) > fLocal_3546)
										{
											iLocal_3524 = 1;
										}
									}
								}
							}
						}
						if (func_159(unk_0x16F2683693E537C9(), (*uParam1)[iVar0], 1) < 500f)
						{
							bVar5 = false;
						}
						if (func_158(uParam0, uParam1))
						{
							uParam1->f_43 = 1;
						}
						if (unk_0xEB6A8945D1AC98A1(unk_0xA30B8362589C124A((*uParam1)[0], -1, 0)))
						{
							if (unk_0xE4EDC4B0E92C078B(uParam1->f_18[iVar0]))
							{
								unk_0x142CC44DB769B57E(&(uParam1->f_18[iVar0]));
							}
							if (!unk_0x437347B10A200C4B(unk_0xA30B8362589C124A((*uParam1)[0], 0, 0), 0))
							{
								if (unk_0xD1960163A3042274(unk_0xA30B8362589C124A((*uParam1)[0], 0, 0), 355471868) != 1)
								{
									unk_0x16A6C233289238AA(unk_0xA30B8362589C124A((*uParam1)[0], 0, 0), (*uParam1)[0], 0);
								}
							}
						}
						else if (*uParam4)
						{
							if (!bLocal_3530)
							{
								if (!unk_0x437347B10A200C4B(unk_0xA30B8362589C124A((*uParam1)[0], -1, 0), 0))
								{
									if (unk_0xD1960163A3042274(unk_0xA30B8362589C124A((*uParam1)[0], -1, 0), 780511057) != 1)
									{
										unk_0x6C3AE6E278DB3D0E(unk_0xA30B8362589C124A((*uParam1)[0], -1, 0), unk_0x16F2683693E537C9(), 0, 16);
									}
								}
							}
						}
						else if (!unk_0x437347B10A200C4B(unk_0xA30B8362589C124A((*uParam1)[0], -1, 0), 0))
						{
							if (unk_0xD1960163A3042274(unk_0xA30B8362589C124A((*uParam1)[0], -1, 0), 780511057) != 1)
							{
								unk_0x6C3AE6E278DB3D0E(unk_0xA30B8362589C124A((*uParam1)[0], -1, 0), unk_0x16F2683693E537C9(), 0, 16);
							}
						}
					}
					else if (unk_0xE4EDC4B0E92C078B(uParam1->f_18[iVar0]))
					{
						unk_0x142CC44DB769B57E(&(uParam1->f_18[iVar0]));
					}
				}
				if (unk_0xC844350D5D58C99A((*uParam1)[iVar0]))
				{
					if (!unk_0x437347B10A200C4B((*uParam1)[iVar0], 0))
					{
						if (unk_0x377BE9A1BF38C7CE((*uParam1)[iVar0]))
						{
							if (!bLocal_3519)
							{
								bLocal_3519 = true;
								iLocal_3531 = unk_0x1C0640BA9A7327B3();
							}
						}
						else
						{
							bLocal_3519 = false;
							iLocal_3531 = 0;
						}
						if (bLocal_3519)
						{
							if ((unk_0x1C0640BA9A7327B3() - iLocal_3531) > 12000)
							{
								func_372("EXPLODING VEHICLE");
								unk_0x0DC87D17DC2658DC((*uParam1)[iVar0], 1, 0);
							}
						}
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < (uParam0->f_1108 * uParam0->f_1107))
			{
				if (unk_0xC844350D5D58C99A(uParam1->f_9[iVar0]))
				{
					if (!unk_0x437347B10A200C4B(uParam1->f_9[iVar0], 0))
					{
						bVar6 = false;
						if (!unk_0xE4EDC4B0E92C078B(uParam1->f_27[iVar0]))
						{
							if (!unk_0x405E212DDE472467(uParam1->f_9[iVar0], 0))
							{
								uParam1->f_27[iVar0] = unk_0x5C3B41825F6AC5A0(uParam1->f_9[iVar0]);
								unk_0x61755AC17D8F538E(uParam1->f_27[iVar0], 1);
							}
						}
						if (func_159(unk_0x16F2683693E537C9(), uParam1->f_9[iVar0], 1) < 500f)
						{
							bVar5 = false;
						}
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < uParam0->f_1107)
			{
				if (unk_0xC844350D5D58C99A((*uParam1)[iVar0]))
				{
					if (!unk_0x437347B10A200C4B((*uParam1)[iVar0], 0))
					{
						bVar7 = false;
					}
				}
				iVar0++;
			}
			if (!*uParam3)
			{
				if (((((bVar5 || bVar7) || *uParam2) || bVar6) || uParam1->f_43) || (*uParam4 && iLocal_3524))
				{
					bLocal_3513 = true;
					if (uParam1->f_43)
					{
						func_372("SECOND CHECK: carChaserArgs.bVehicleStuck = TRUE");
					}
					if (bVar5)
					{
						func_372("bPedsOutOfRange IS TRUE");
						bLocal_3527 = true;
						func_372("bCarChasersLost = TRUE");
					}
					if (bVar7)
					{
						func_372("bCarsDead IS TRUE");
						bLocal_3528 = true;
						func_372("bChasersDead = TRUE");
					}
					if (bVar6)
					{
						func_372("bPedsDead IS TRUE");
						bLocal_3528 = true;
						func_372("bChasersDead = TRUE");
					}
					if (*uParam2)
					{
						func_372("bWanted IS TRUE");
					}
				}
				else
				{
					bLocal_3513 = false;
				}
			}
		}
		iVar1++;
	}
	if (bLocal_3513)
	{
		func_372("bWavesDone IS TRUE");
		if (((bVar5 || *uParam2) || uParam1->f_43) || (*uParam4 && iLocal_3524))
		{
			iVar2 = 0;
			while (iVar2 < *uParam1)
			{
				if (unk_0xDF1306B443CD3D15((*uParam1)[iVar2], 0))
				{
					iVar3 = 0;
					while (iVar3 < uParam0->f_1108)
					{
						iVar4 = (iVar2 * uParam0->f_1108);
						if (!unk_0xEB6A8945D1AC98A1(uParam1->f_9[(iVar3 + iVar4)]))
						{
							if (*uParam4)
							{
							}
							else
							{
								unk_0xE072601B4380E9DF(uParam1->f_9[(iVar3 + iVar4)], (*uParam1)[iVar2], 20f, 786599);
								func_372("TASKING VEHICLES TO WANDER");
							}
						}
						iVar3++;
					}
				}
				iVar2++;
			}
		}
		return 1;
	}
	return 0;
}

int func_158(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_1107)
	{
		if (unk_0xC844350D5D58C99A((*uParam1)[iVar0]))
		{
			if (!unk_0x437347B10A200C4B((*uParam1)[iVar0], 0))
			{
				if (func_159(unk_0x16F2683693E537C9(), (*uParam1)[iVar0], 1) > 150f)
				{
					fVar1 = unk_0x9C66D99E63E8E24C((*uParam1)[iVar0]);
					if (fVar1 < 5f)
					{
						if (!func_43(&(uParam1->f_40)))
						{
							func_40(&(uParam1->f_40));
						}
						else
						{
							uParam1->f_44 = func_37(&(uParam1->f_40));
							if (uParam1->f_44 > 10f)
							{
								return 1;
							}
						}
					}
					else
					{
						uParam1->f_44 = 0f;
					}
				}
				else
				{
					uParam1->f_44 = 0f;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

float func_159(int iParam0, int iParam1, bool bParam2)
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

void func_160(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_161(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_161(var uParam0, int iParam1, vector3 vParam2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
	{
		func_259(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_162(uParam0, iParam1, vParam2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_162(var uParam0, int iParam1, vector3 vParam2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (uParam0->f_1 && unk_0x8C74DE122769E1BF())
	{
		if (unk_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
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
	if (func_186(iVar0))
	{
		func_185();
	}
	if (func_184(iParam1) && unk_0x4FC40AB0ECCE6E18(iParam1))
	{
		iVar1 = 0;
		if (unk_0xEC560E589DF8370E(iParam1))
		{
			unk_0x4862370C9F046219(unk_0x940C1429253D3B1B(iParam1));
			unk_0xB9099320B5179E0A(unk_0x940C1429253D3B1B(iParam1), 1);
			if (unk_0x71313E3D03CEEB37(unk_0x940C1429253D3B1B(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xE2F1E99DD161A861(iParam1))
		{
			unk_0x00D1596840E78F77(unk_0x96A5FE5834B81CE7(iParam1));
			if (unk_0xC03F94FBD72F6D02(unk_0x96A5FE5834B81CE7(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x6BC06B42AD71CD8B(iParam1))
		{
			unk_0xFF7829816FC6D977(unk_0x486F67509A82DB2D(iParam1));
			if (unk_0x660643587812C91B(unk_0x486F67509A82DB2D(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x8C74DE122769E1BF())
		{
			if (func_179(uParam0, bParam7, bParam9, 0))
			{
				func_176(uParam0, iParam1, vParam2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_166(iVar0))
				{
					if ((unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0)) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						if ((iVar1 && !unk_0xFEBC1E4EC9E001F0()) && uParam8)
						{
							if (!func_186(iVar0))
							{
								func_306(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
								{
									func_165(1);
								}
							}
						}
					}
				}
			}
			else if (func_166(iVar0))
			{
				if (unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0))
				{
					if (((unk_0x0A059E0DB9253280(iParam1) && iVar1) && !unk_0xFEBC1E4EC9E001F0()) && uParam8)
					{
						if (!func_186(iVar0))
						{
							func_306(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
							{
								func_165(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x2EBF5002C6B6A06C(sParam5))
			{
				if (func_186(sParam5))
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
						func_259(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(6) == 3 || unk_0xA4FD7964FEE91ED8(6) == 4)
					{
						func_259(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(4) == 3 || unk_0xA4FD7964FEE91ED8(4) == 4)
					{
						func_259(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(5) == 3 || unk_0xA4FD7964FEE91ED8(5) == 4)
					{
						func_259(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(2) == 3 || unk_0xA4FD7964FEE91ED8(2) == 4)
					{
						func_259(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF3545351E9CBB11F() == 3 || unk_0xF3545351E9CBB11F() == 4)
				{
					func_259(uParam0, iVar0, 1);
				}
			}
			if (!func_179(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_164(uParam0))
				{
					func_163(uParam0);
				}
			}
		}
	}
	else
	{
		func_259(uParam0, iVar0, 0);
	}
}

void func_163(var uParam0)
{
	if (func_184(unk_0x16F2683693E537C9()))
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

int func_164(var uParam0)
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

int func_165(bool bParam0)
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

int func_166(char* sParam0)
{
	if (!func_167(1, 1, 0))
	{
		if ((!unk_0xEA6BC48857E0AC4C(sParam0) && func_186(sParam0)) || func_186("CMN_HINT"))
		{
			unk_0xA37A90C62806D848(1);
		}
		return 0;
	}
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (func_165(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_165(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_165(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_167(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_131(0))
	{
		return 0;
	}
	if (func_175())
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
	if ((func_174() || func_173(Global_4456448.f_232883)) || func_172())
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			iVar1 = func_171(unk_0x16F2683693E537C9(), 0);
			if (((unk_0x137240CA2BADB0D2(iVar0, iVar1) || (unk_0x134B62B726CEC8E6(iVar0) == 562680400 && iVar1 != -1)) || (unk_0x134B62B726CEC8E6(iVar0) == 1181327175 && iVar1 != -1)) || (((unk_0x134B62B726CEC8E6(iVar0) == -1693015116 && iVar1 == 0) && func_170(iVar0, 10)) && unk_0x0ECB5CA5140957AD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1686722)
	{
		return 0;
	}
	if (func_168(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	return 1;
}

int func_168(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (func_169(iParam0, 1, 1))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && iParam0 == unk_0xD803B885F5E47A62()) && func_169(iParam0, 1, 0))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
	}
	return 0;
}

int func_169(int iParam0, bool bParam1, bool bParam2)
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

int func_170(int iParam0, int iParam1)
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

int func_171(int iParam0, int iParam1)
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

var func_172()
{
	return Global_2450632.f_17;
}

bool func_173(int iParam0)
{
	return iParam0 == 51;
}

var func_174()
{
	return Global_2450632.f_16;
}

bool func_175()
{
	return unk_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

void func_176(var uParam0, int iParam1, vector3 vParam2, int iParam5)
{
	if (Global_1319117 == 1)
	{
		return;
	}
	if (unk_0x437347B10A200C4B(iParam1, 0))
	{
		func_259(uParam0, 0, 0);
	}
	if (func_5(vParam2, 0f, 0f, 0f, 0))
	{
		if (unk_0xEC560E589DF8370E(iParam1))
		{
			iVar0 = unk_0x940C1429253D3B1B(iParam1);
			if (!unk_0x405E212DDE472467(iVar0, 0))
			{
				if (unk_0x34BFC6F0CB887BC2(iVar0))
				{
					if (!func_177())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xCED082ADD3739B9F(iVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xF3039DE1FDB4F6FD(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0xC0B0B9E466C0ED17(iParam1, vParam2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iParam1, -1, iVar3, iVar4);
	unk_0x82A772610883F395("FocusIn", 0, 0);
	unk_0x8BC9595FD2792B5D("HINT_CAM_SCENE");
	unk_0x4D7F4CC43D4D0DE3(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x1C0640BA9A7327B3();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_177()
{
	return func_178(unk_0xD803B885F5E47A62());
}

int func_178(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(iParam0)) == -1667301416)
	{
		return 1;
	}
	return 0;
}

int func_179(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_183(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_182(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_182(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_183(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_164(uParam0))
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
						if (!func_183(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1C0640BA9A7327B3();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_182(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_182(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_183(bParam1, bParam2, bParam3))
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
					if (!func_183(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_182(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_182(bParam1, bParam2, bParam3) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
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
				else if (!func_183(bParam1, bParam2, bParam3))
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
						if (func_181(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_180(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1) || func_180(bParam1, bParam2, bParam3))
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
					else if (func_181(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_164(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_167(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_185();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_180(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_167(bParam0, bParam1, bParam2))
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

int func_181(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_167(bParam0, bParam1, bParam2))
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

int func_182(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_167(bParam0, bParam1, bParam2))
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

int func_183(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_167(bParam0, bParam1, bParam2))
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

int func_184(int iParam0)
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

void func_185()
{
	unk_0x5D96D8530B3D0904(&Global_7357, 4);
}

bool func_186(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_187(var uParam0)
{
	if (!iLocal_3529)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (!func_46())
			{
				if (!unk_0xD17F06053799A7CA())
				{
					func_45(uParam0, 2, 0, "TREVOR", 0, 1);
					func_8(uParam0, "ARMSAUD", "ARMS_CCT", 9, 0, 0, 0);
					iLocal_3529 = 1;
				}
			}
		}
	}
}

void func_188(var uParam0)
{
	if (!iLocal_3522)
	{
		func_45(uParam0, 3, 0, "OSCAR", 0, 1);
		func_8(uParam0, "ARMSAUD", "ARMS_CC", 9, 0, 0, 0);
		iLocal_3522 = 1;
	}
	if (iLocal_3522 && !iLocal_3523)
	{
		if (!func_46())
		{
			func_154("DTRSHRD_06", 7500, 1);
			iLocal_3523 = 1;
		}
	}
}

void func_189(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)
{
	vVar30 = { -5f, -35f, 0f };
	if (*uParam5)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3538[0]) && unk_0xC844350D5D58C99A(iLocal_3538[1]))
		{
			return;
		}
	}
	iVar3 = 0;
	while (iVar3 < uParam0->f_1105)
	{
		if (!iLocal_3514[iVar3])
		{
			if (!func_43(iParam1))
			{
				func_372("SETTING bProcede 01");
				bVar42 = true;
			}
			else if (func_37(iParam1) > 10f)
			{
				func_372("SETTING bProcede 02");
				bVar42 = true;
			}
			if (bVar42)
			{
				func_372("INSIDE bProcede");
				iVar0 = 0;
				while (iVar0 < uParam0->f_1107)
				{
					iVar0 = (iVar0 + (iVar3 * uParam0->f_1107));
					func_372("CAR CHASERS PER WAVE 01");
					if (iVar3 == 0 && func_194(uParam5, &iVar0, &vVar5, &uVar33))
					{
						if (uParam0->f_1107 > 1)
						{
							if (iVar0 > 0)
							{
								if (unk_0xC844350D5D58C99A((*uParam2)[0]))
								{
									if (!unk_0x437347B10A200C4B((*uParam2)[0], 0))
									{
										vVar5[iVar0] = { unk_0x68E4ADDDDCD7BDDE((*uParam2)[0], vVar30) };
									}
									else
									{
										vVar5[iVar0] = { vVar5[iVar0] };
									}
								}
							}
						}
						func_372("GOT BACKWARD POINT");
						if (!func_5(vVar5[iVar0], 0f, 0f, 0f, 0))
						{
							unk_0x28F5E4DA506AC0CA(vVar5[iVar0], 10f, 0, 0, 0, 0, false, 0);
							if (!*uParam5)
							{
								if (*uParam8)
								{
									(*uParam2)[iVar0] = unk_0x122AAB0B1D6F55AD(788747387, vVar5[iVar0], vVar5[iVar0].f_1, (vVar5[iVar0].f_2 + 100f), uVar33[iVar0], true, true, false);
									fLocal_3546 = 65f;
								}
								else
								{
									(*uParam2)[iVar0] = unk_0x122AAB0B1D6F55AD(*uParam6, vVar5[iVar0], uVar33[iVar0], true, true, false);
								}
								if (*uParam8)
								{
									unk_0x56FDC9ADE35F7DB0((*uParam2)[iVar0], true, true, 0);
									unk_0xAA6B3A4292417750((*uParam2)[iVar0], false, false, false, false, false, false, 0, false);
									unk_0x1FC8B874F2C46E6E((*uParam2)[iVar0], 1);
									if (func_193())
									{
										unk_0xC6730DF337EA7449((*uParam2)[iVar0], 1, 1);
									}
								}
								else
								{
									unk_0xB9FD7450C0DAB575((*uParam2)[iVar0], 1084227584);
									unk_0x56FDC9ADE35F7DB0((*uParam2)[iVar0], true, true, 0);
									unk_0xAA6B3A4292417750((*uParam2)[iVar0], false, false, false, false, false, false, 0, false);
									unk_0x0A2CA2E508C0AED3((*uParam2)[iVar0], 100f);
									unk_0x513146EC530B5274((*uParam2)[iVar0]);
								}
							}
							else
							{
								vLocal_3547 = { (vVar5[iVar0] - 3f), (vVar5[iVar0].f_1 - 3f), vVar5[iVar0].f_2 };
								vLocal_3550 = { (vVar5[iVar0] + 3f), (vVar5[iVar0].f_1 + 3f), vVar5[iVar0].f_2 };
								fLocal_3544 = (uVar33[iVar0] - 45f);
								fLocal_3545 = (uVar33[iVar0] + 45f);
								unk_0x28F5E4DA506AC0CA(vVar5[iVar0], 50f, 0, 0, 0, 0, false, 0);
								iLocal_3538[0] = unk_0x122AAB0B1D6F55AD(*uParam6, vLocal_3547, fLocal_3544, true, true, false);
								unk_0xB9FD7450C0DAB575(iLocal_3538[0], 1084227584);
								unk_0x611DFA9294B339CA(iLocal_3538[0], 1, 0, false);
								unk_0x611DFA9294B339CA(iLocal_3538[0], 0, 0, false);
								if (unk_0xC844350D5D58C99A(iLocal_3538[0]) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
								{
									iLocal_3541[0] = unk_0x852A19533F896693(iLocal_3538[0], 6, uParam0->f_1148, -1, 1, true);
									unk_0x262EF6C6306BEA6C(iLocal_3541[0], 453432689, 100, true, true);
									unk_0xDD353D0E9C789D0E(&iVar4);
									unk_0x45F014B3D0466974(0, iLocal_3538[0], 256);
									unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
									unk_0x75ABDC5F81978924(iVar4);
									unk_0x78ADC381772E3D54(iLocal_3541[0], iVar4);
									unk_0xF82EA857DA10E0CD(&iVar4);
									unk_0x3CC33E4E9CE523F4(iLocal_3541[0], 1);
								}
								iLocal_3538[1] = unk_0x122AAB0B1D6F55AD(*uParam6, vLocal_3550, fLocal_3545, true, true, false);
								unk_0xB9FD7450C0DAB575(iLocal_3538[1], 1084227584);
								unk_0x611DFA9294B339CA(iLocal_3538[1], 1, 0, false);
								unk_0x611DFA9294B339CA(iLocal_3538[1], 0, 0, false);
								if (unk_0xC844350D5D58C99A(iLocal_3538[1]) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
								{
									iLocal_3541[1] = unk_0x852A19533F896693(iLocal_3538[1], 6, uParam0->f_1148, -1, 1, true);
									unk_0x262EF6C6306BEA6C(iLocal_3541[1], 453432689, 100, true, true);
									unk_0xDD353D0E9C789D0E(&iVar4);
									unk_0x45F014B3D0466974(0, iLocal_3538[1], 256);
									unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
									unk_0x75ABDC5F81978924(iVar4);
									unk_0x78ADC381772E3D54(iLocal_3541[1], iVar4);
									unk_0xF82EA857DA10E0CD(&iVar4);
									unk_0x3CC33E4E9CE523F4(iLocal_3541[1], 1);
								}
								func_372("CREATING EXTRA COPS");
								if (!func_43(&iLocal_3554))
								{
									func_40(&iLocal_3554);
								}
								if (unk_0xC844350D5D58C99A(iLocal_3538[0]) && unk_0xC844350D5D58C99A(iLocal_3538[1]))
								{
									*uParam4 = 1;
								}
							}
							func_372("CREATING VEHICLE(s) - WAVE ONE");
						}
						if (unk_0xDF1306B443CD3D15((*uParam2)[iVar0], 0))
						{
							unk_0x0A2CA2E508C0AED3((*uParam2)[iVar0], 50f);
							func_372("VEHICLE IS DRIVABLE");
							iVar1 = 0;
							while (iVar1 < uParam0->f_1108)
							{
								func_372("CREATING PEDS IN CAR - WAVE ONE");
								iVar2 = (iVar0 * uParam0->f_1108);
								if (*uParam8)
								{
									if ((iVar1 + iVar2) == 0)
									{
										uParam2->f_9[(iVar1 + iVar2)] = unk_0x852A19533F896693((*uParam2)[iVar0], 22, *uParam7, -1, 1, true);
									}
									else if ((iVar1 + iVar2) == 1)
									{
										uParam2->f_9[(iVar1 + iVar2)] = unk_0x852A19533F896693((*uParam2)[iVar0], 22, *uParam7, 1, 1, true);
									}
								}
								else
								{
									uParam2->f_9[(iVar1 + iVar2)] = unk_0x852A19533F896693((*uParam2)[iVar0], 22, *uParam7, uParam0->f_1127[iVar1], 1, true);
								}
								if (!unk_0x437347B10A200C4B(uParam2->f_9[(iVar1 + iVar2)], 0))
								{
									unk_0x71199B01895C6202(*uParam7);
									unk_0x083F03A847B640E9(uParam2->f_9[(iVar1 + iVar2)], 2);
									unk_0xAFF39FB306F8E232(uParam2->f_9[(iVar1 + iVar2)], 3, false);
									unk_0x4E885A246A9D983A(uParam2->f_9[(iVar1 + iVar2)], 42, true);
									unk_0x6DF7BF67E86AAE86(uParam2->f_9[(iVar1 + iVar2)], uParam2->f_36);
									unk_0x298903DD96203C2C(uParam2->f_9[(iVar1 + iVar2)], 35);
									if (*uParam8)
									{
										unk_0x262EF6C6306BEA6C(uParam2->f_9[(iVar1 + iVar2)], -1074790547, -1, true, true);
									}
									else
									{
										unk_0x262EF6C6306BEA6C(uParam2->f_9[(iVar1 + iVar2)], 324215364, -1, true, true);
									}
									unk_0xFADC0A217229F6B5(uParam2->f_9[(iVar1 + iVar2)], true);
									unk_0x11AD11297DC58CC7(uParam2->f_9[(iVar1 + iVar2)], true);
									unk_0x6C3AE6E278DB3D0E(uParam2->f_9[(iVar1 + iVar2)], unk_0x16F2683693E537C9(), 0, 16);
									if (!unk_0xBBA8A868118C90ED((*uParam2)[iVar0], -1, 0))
									{
										iVar43 = unk_0xA30B8362589C124A((*uParam2)[iVar0], -1, 0);
										iVar44 = unk_0xA30B8362589C124A((*uParam2)[iVar0], 1, 0);
										unk_0xAFF39FB306F8E232(iVar43, 7, false);
										if (*uParam8)
										{
											unk_0x9AFA0796FDCABCD5(iVar43, (*uParam2)[iVar0], unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 6, 100f, -1f, unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()), 50, 25, -1082130432, 0);
											if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
											{
												unk_0x298903DD96203C2C(iVar43, 5);
												unk_0x2E7E359BC7AA3D39(iVar43, unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true));
												func_372("CALLING SET_VEHICLE_SHOOT_AT_TARGET");
											}
											if (unk_0xC844350D5D58C99A(iVar44) && !unk_0x437347B10A200C4B(iVar44, 0))
											{
												unk_0x6C3AE6E278DB3D0E(iVar44, unk_0x16F2683693E537C9(), 0, 16);
												unk_0x298903DD96203C2C(iVar43, 35);
												func_372("TASKING PASSENGER TO COMBAT");
											}
										}
										else
										{
											unk_0xAFF39FB306F8E232(iVar43, 7, true);
											unk_0x6C3AE6E278DB3D0E(iVar43, unk_0x16F2683693E537C9(), 0, 16);
											func_372("TASKING DRIVER - ESCORT LEFT");
										}
									}
								}
								iVar1++;
							}
							if (!*uParam5)
							{
								uParam2->f_18[iVar0] = unk_0x5C3B41825F6AC5A0((*uParam2)[iVar0]);
								unk_0x61755AC17D8F538E(uParam2->f_18[iVar0], 1);
								unk_0xDC5B2F9D0CCE3A10(uParam2->f_18[iVar0], "DTRFKGR_BLIP04");
							}
							*uParam4 = 1;
							iLocal_3514[iVar3] = 1;
							unk_0xC92DB9682A650680("OJDG2_MORE_ENEMIES");
							if (unk_0xC844350D5D58C99A((*uParam2)[1]))
							{
							}
							func_372("bIsChaseActive AND bWaveActive = TRUE");
							if (unk_0xE4EDC4B0E92C078B((*uParam3)[0]))
							{
								unk_0x142CC44DB769B57E(uParam3[0]);
							}
							bVar42 = false;
							if (!func_43(iParam1))
							{
								func_40(iParam1);
								func_372("STARTING TIMER");
							}
							else
							{
								func_41(iParam1);
								func_372("RESTARTING TIMER");
							}
						}
					}
					else if (iVar3 == 1 && func_191(&(vVar5[iVar0]), &(uVar33[iVar0]), 1128792064))
					{
						func_372("GOT FORWARD POINT");
						if (!func_5(vVar5[iVar0], 0f, 0f, 0f, 0))
						{
							unk_0x28F5E4DA506AC0CA(vVar5[iVar0], 10f, 0, 0, 0, 0, false, 0);
							(*uParam2)[iVar0] = unk_0x122AAB0B1D6F55AD(uParam0->f_1109[iVar0], vVar5[iVar0], uVar33[iVar0], true, true, false);
							unk_0xB9FD7450C0DAB575((*uParam2)[iVar0], 1084227584);
							unk_0x56FDC9ADE35F7DB0((*uParam2)[iVar0], true, true, 0);
							unk_0xAA6B3A4292417750((*uParam2)[iVar0], false, false, false, false, false, false, 0, false);
							unk_0x1FC8B874F2C46E6E((*uParam2)[iVar0], 1);
							func_372("CREATING VEHICLE(s) - WAVE TWO");
						}
						if (unk_0xDF1306B443CD3D15((*uParam2)[iVar0], 0))
						{
							func_372("VEHICLE IS DRIVABLE");
							iVar1 = 0;
							while (iVar1 < uParam0->f_1108)
							{
								func_372("CREATING PEDS IN CAR - WAVE TWO");
								iVar2 = (iVar0 * uParam0->f_1108);
								uParam2->f_9[(iVar1 + iVar2)] = unk_0x852A19533F896693((*uParam2)[iVar0], 22, uParam0->f_1118[iVar1], uParam0->f_1127[iVar1], 1, true);
								if (!unk_0x437347B10A200C4B(uParam2->f_9[(iVar1 + iVar2)], 0))
								{
									func_190(uParam2->f_9[(iVar1 + iVar2)], uParam2->f_36, 1);
									func_372("TASKING GUYS TO COMBAT");
								}
								iVar1++;
							}
							uParam2->f_18[iVar0] = unk_0x5C3B41825F6AC5A0((*uParam2)[iVar0]);
							unk_0x61755AC17D8F538E(uParam2->f_18[iVar0], 1);
							*uParam4 = 1;
							iLocal_3514[iVar3] = 1;
							func_372("bIsChaseActive AND bWaveActive = TRUE");
							bVar42 = false;
							if (!func_43(iParam1))
							{
								func_40(iParam1);
								func_372("STARTING TIMER");
							}
							else
							{
								func_41(iParam1);
								func_372("RESTARTING TIMER");
							}
						}
					}
					iVar0++;
				}
			}
		}
		iVar3++;
	}
}

void func_190(int iParam0, int iParam1, bool bParam2)
{
	unk_0x083F03A847B640E9(iParam0, 2);
	unk_0xB35CCEC0D4946813(iParam0, 2);
	unk_0x3CC33E4E9CE523F4(iParam0, 1);
	unk_0x262EF6C6306BEA6C(iParam0, 736523883, -1, true, true);
	unk_0xAFF39FB306F8E232(iParam0, 3, false);
	unk_0xAFF39FB306F8E232(iParam0, 2, true);
	unk_0x4E885A246A9D983A(iParam0, 42, bParam2);
	unk_0x6DF7BF67E86AAE86(iParam0, iParam1);
	unk_0x6C3AE6E278DB3D0E(iParam0, unk_0x16F2683693E537C9(), 0, 16);
	func_372("TASKING GUYS TO COMBAT");
}

int func_191(var uParam0, var uParam1, float fParam2)
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		return 0;
	}
	vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	fVar3 = unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9());
	unk_0x4A13F7D4B1E239A0(unk_0x8A5E176FF719A014(vVar0, fVar3, 0f, fParam2, 0f), 1, &vVar4, &fVar7, &uVar14, 0, 1077936128, 0);
	vVar8 = { -sin(fVar3), cos(fVar3), 0f };
	vVar11 = { vVar4 - vVar0 };
	if (cos(unk_0x755FF954DAE327E1((fVar7 - fVar3))) <= -0,98f)
	{
		fVar7 = (fVar7 + 180f);
	}
	bVar15 = true;
	if (cos(unk_0x755FF954DAE327E1((fVar7 - fVar3))) <= 0,867f)
	{
		func_372("ORIENTATION BETWEEN HEADINGS ARE TOO GREAT, RETURNING FALSE!!!");
		bVar15 = false;
	}
	if (unk_0x755FF954DAE327E1((vVar4.z - vVar0.z)) > 3f)
	{
		func_372("GET_FORWARD_POINT: Z VALUE IS TOO HIGH, RETURNING FALSE!!!");
		bVar15 = false;
	}
	if (func_5(vVar4, 0f, 0f, 0f, 0))
	{
		func_372("GET_FORWARD_POINT: VECTOR IS ZERO, RETURNING FALSE!!!");
		bVar15 = false;
	}
	if (func_192(vVar8, vVar11) <= 0f)
	{
		bVar15 = false;
	}
	if (bVar15)
	{
		*uParam0 = { vVar4 };
		*uParam1 = fVar7;
		func_372("GET_FORWARD_POINT: GOT A VALID POINT!!!");
		return 1;
	}
	return 0;
}

float func_192(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_193()
{
	if (unk_0xD8A54335F18763BA() >= 20 || unk_0xD8A54335F18763BA() < 6)
	{
		return 1;
	}
	return 0;
}

int func_194(var uParam0, int iParam1, var uParam2, var uParam3)
{
	if (*uParam0)
	{
		func_191(uParam2[*iParam1], uParam3[*iParam1], 1128792064);
		func_372("CHECKING FOR FORWARD POINT");
	}
	else
	{
		func_196(uParam2[*iParam1], uParam3[*iParam1], -1027080192);
		func_372("CHECKING FOR BACKWARD POINT");
	}
	if (!func_195(*uParam2[*iParam1]))
	{
		return 1;
	}
	return 0;
}

int func_195(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_196(var uParam0, var uParam1, float fParam2)
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		return 0;
	}
	vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	fVar3 = unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9());
	unk_0x4A13F7D4B1E239A0(unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), 0f, fParam2, 0f), 1, &vVar4, &fVar7, &uVar14, 0, 1077936128, 0);
	vVar8 = { -sin(fVar3), cos(fVar3), 0f };
	vVar11 = { vVar4 - vVar0 };
	if (cos(unk_0x755FF954DAE327E1((fVar7 - fVar3))) <= -0,98f)
	{
		fVar7 = (fVar7 + 180f);
	}
	bVar15 = true;
	if (cos(unk_0x755FF954DAE327E1((fVar7 - fVar3))) <= 0,867f)
	{
		func_372("ORIENTATION BETWEEN HEADINGS ARE TOO GREAT, RETURNING FALSE!!!");
		bVar15 = false;
	}
	if (unk_0x755FF954DAE327E1((vVar4.z - vVar0.z)) > 3f)
	{
		func_372("Z VALUE IS TOO HIGH, RETURNING FALSE!!!");
		bVar15 = false;
	}
	if (func_5(vVar4, 0f, 0f, 0f, 0))
	{
		func_372("VECTOR IS ZERO, RETURNING FALSE!!!");
		bVar15 = false;
	}
	if (unk_0x8E28E832BEAC3DCE(vVar4, 5f))
	{
		func_372("NODE VECTOR IS VISIBLE, RETURNING FALSE");
	}
	if (func_192(vVar8, vVar11) >= 0f)
	{
		bVar15 = false;
	}
	if (bVar15)
	{
		*uParam0 = { vVar4 };
		*uParam1 = fVar7;
		func_372("GOT A VALID POINT!!!");
		return 1;
	}
	return 0;
}

int func_197()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	}
	if (!bLocal_6004)
	{
		if (vdist2(vVar0, Local_4356.f_218[0].f_110) < 40000f)
		{
			return 0;
		}
	}
	if (bLocal_6011)
	{
		if (bLocal_6063)
		{
			if (timera() > 15000)
			{
				return 1;
			}
		}
		else if (bLocal_6064)
		{
			if (timerb() > 15000)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_198(var uParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
	{
		func_259(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_199(uParam0, vParam1, iParam4, iParam5, bParam6, iParam7, bParam8);
}

void func_199(var uParam0, vector3 vParam1, var uParam4, int iParam5, bool bParam6, var uParam7, bool bParam8)
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
	if (func_186(iVar0))
	{
		func_185();
	}
	if (!unk_0x8C74DE122769E1BF())
	{
		if (func_179(uParam0, bParam6, bParam8, 0))
		{
			func_200(uParam0, vParam1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_166(iVar0))
			{
				if ((unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0)) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					if ((unk_0x8E28E832BEAC3DCE(vParam1, 1f) && !unk_0xFEBC1E4EC9E001F0()) && uParam7)
					{
						if (!func_186(iVar0))
						{
							func_306(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
							{
								func_165(1);
							}
						}
					}
				}
			}
		}
		else if (func_166(iVar0))
		{
			if (unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0))
			{
				if ((unk_0x8E28E832BEAC3DCE(vParam1, 1f) && !unk_0xFEBC1E4EC9E001F0()) && uParam7)
				{
					if (!func_186(iVar0))
					{
						func_306(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
						{
							func_165(1);
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
			if (func_186(iVar0) && unk_0xFEBC1E4EC9E001F0())
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
					func_259(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(6) == 3 || unk_0xA4FD7964FEE91ED8(6) == 4)
				{
					func_259(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(4) == 3 || unk_0xA4FD7964FEE91ED8(4) == 4)
				{
					func_259(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(5) == 3 || unk_0xA4FD7964FEE91ED8(5) == 4)
				{
					func_259(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(2) == 3 || unk_0xA4FD7964FEE91ED8(2) == 4)
				{
					func_259(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xF3545351E9CBB11F() == 3 || unk_0xF3545351E9CBB11F() == 4)
			{
				func_259(uParam0, iVar0, 1);
			}
		}
		if (!func_179(uParam0, bParam6, bParam8, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_164(uParam0))
			{
				func_163(uParam0);
			}
		}
	}
}

void func_200(var uParam0, vector3 vParam1, int iParam4)
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

void func_201()
{
	if (bLocal_6036 || bLocal_6037)
	{
		if (bLocal_3376)
		{
			if (!iLocal_6070)
			{
				func_34("DTRFKGR_04", 7500, -1);
				iLocal_6070 = 1;
			}
		}
	}
	else if (bLocal_6058)
	{
		if (!iLocal_6071)
		{
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0x437347B10A200C4B(iLocal_6135, 0))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_6135, 0))
				{
					if (!unk_0xE4EDC4B0E92C078B(iLocal_6142[0]))
					{
						iLocal_6142[0] = unk_0x6CC513A908911CF0(Local_4356.f_218[0].f_110);
						unk_0xDC5B2F9D0CCE3A10(iLocal_6142[0], "DTRFKGR_BLIP07");
					}
					func_34("DTRFKGR_03a", 7500, 1);
					StringCopy(&cLocal_5995, "DTRFKGR_03a", 32);
					vLocal_6078[0] = { Local_4356.f_218[0].f_110 };
					iLocal_6071 = 1;
				}
				else
				{
					iLocal_6071 = 1;
					iLocal_6054 = 1;
				}
			}
		}
	}
}

void func_202()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (func_203(unk_0x16F2683693E537C9(), vLocal_6103, 1) < 200f)
		{
			return;
		}
	}
	if (!iLocal_6066)
	{
		if (bLocal_6006 && !bLocal_6005)
		{
			if (!func_43(&iLocal_6181))
			{
				func_40(&iLocal_6181);
			}
			else if (func_37(&iLocal_6181) > 180f)
			{
				if (func_8(&uLocal_5830, "ARMSAUD", "OSCAR_HURRY", 9, 0, 0, 0))
				{
					iLocal_6066 = 1;
				}
			}
		}
	}
}

float func_203(int iParam0, vector3 vParam1, bool bParam4)
{
	if (unk_0x437347B10A200C4B(iParam0, 0))
	{
		return -1f;
	}
	return unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, true), vParam1, bParam4);
}

void func_204()
{
	if (!iLocal_6060)
	{
		if (!bLocal_6062 && !bLocal_6037)
		{
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0x437347B10A200C4B(iLocal_6135, 0))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_6135, 0))
				{
					if (func_43(&iLocal_6175))
					{
						if (func_37(&iLocal_6175) > 7,5f)
						{
							if (!unk_0xD17F06053799A7CA())
							{
								if (func_8(&uLocal_5830, "ARMSAUD", "ARMS_GOOD", 9, 0, 0, 0))
								{
									iLocal_6060 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_205()
{
	if (unk_0xC844350D5D58C99A(uLocal_5543.f_6) && unk_0xDF1306B443CD3D15(uLocal_5543.f_6, 0))
	{
		if (!unk_0x20D6474D5F4B9FC6(uLocal_5543.f_6))
		{
			if (uLocal_5543.f_14)
			{
				unk_0x6DAD7906B73F064D(&iLocal_3500);
				unk_0x046C362CF15F1935(&(uLocal_5543.f_6));
			}
		}
	}
}

int func_206(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, var uParam14, var uParam15, var uParam16, var uParam17, bool bParam18, var uParam19, var uParam20, var uParam21)
{
	uParam16 = uParam16;
	func_256(uParam1, bParam18, uParam19, bParam6);
	if (uParam1->f_36)
	{
		if (uParam1->f_23)
		{
			if (!*bParam18)
			{
				func_34("DTRFKGR_09", 3000, 1);
				uParam1->f_36 = 0;
			}
		}
	}
	func_255(uParam1, uParam2, bParam18, uParam19);
	func_245(uParam0, uParam1);
	unk_0xD60411959D5D930B(0,05f);
	switch (*uParam2)
	{
		case 0:
			iVar5 = 0;
			while (iVar5 < uParam0->f_1136)
			{
				if (unk_0xDF1306B443CD3D15((*uParam1)[iVar5], 0))
				{
					if (!unk_0x437347B10A200C4B((*uParam1)[iVar5], 0))
					{
						iVar2 = unk_0xA30B8362589C124A((*uParam1)[iVar5], -1, 0);
						iVar3 = unk_0xA30B8362589C124A((*uParam1)[iVar5], 0, 0);
						unk_0x11AD11297DC58CC7(iVar3, false);
					}
					if (uParam0[0]->f_66[iVar5].f_18)
					{
						unk_0xA47B46945FF6DE74((*uParam1)[iVar5], uParam0[0]->f_66[iVar5].f_5, 1, false, 0, 1);
						unk_0xC4C7FD0EF3FEAB0B((*uParam1)[iVar5], uParam0[0]->f_66[iVar5].f_11, uParam0[0]->f_66[iVar5].f_12, uParam0[0]->f_66[iVar5].f_13, uParam0[0]->f_66[iVar5].f_14);
						unk_0x0CB57CDDC76DA8E0((*uParam1)[iVar5], uParam0[0]->f_66[iVar5].f_2, uParam0[0]->f_66[iVar5].f_3, 1, 1000, 786603);
						func_372("STARTING PLAYBACK ON SMUGGLERS VEHICLE");
					}
					else if (uParam0[0]->f_66[iVar5].f_19)
					{
						unk_0x1B901F542DF070CF(iVar2, (*uParam1)[iVar5], uParam0[0]->f_66[iVar5].f_4, 786469, 0, 16, -1, -1f, 0, 1073741824);
					}
					else
					{
						unk_0xDD353D0E9C789D0E(&iVar0);
						unk_0xE9362E4D600DD12A(0, (*uParam1)[iVar5], *uParam3[0], 40f, 1, uParam0->f_1138[iVar5], 786469, 2f, -1f);
						unk_0x75ABDC5F81978924(iVar0);
						if (!unk_0xEB6A8945D1AC98A1(uParam1->f_7[iVar5]))
						{
							unk_0x78ADC381772E3D54(uParam1->f_7[iVar5], iVar0);
						}
						unk_0xF82EA857DA10E0CD(&iVar0);
					}
				}
				iVar5++;
			}
			*uParam3[0] = { uParam0[0]->f_107 };
			iLocal_3354 = unk_0xB055A4268B938F30("scr_drug_traffic_flare_L", *uParam3[0], 0f, 0f, 0f, 1f, 0, 0, 0, 0);
			unk_0x02D205CBD211ED4F(iLocal_3354, 1f, 0,84f, 0f, 0);
			func_291(uParam3[0], 0);
			if (Global_111638.f_19978.f_1 == 3)
			{
				vLocal_3601 = { 3,5f, 3,5f, 3,5f };
			}
			else
			{
				vLocal_3601 = { 6,5f, 6,5f, 6,5f };
			}
			uParam1->f_33 = 1;
			func_372("INSIDE STATE - SMUGGLERS_STATE_TO_PICKUP");
			*uParam2 = 1;
			break;
		
		case 1:
			if (func_244(uParam0, uParam1, uParam15))
			{
				uParam1->f_29 = 1;
				if (!iLocal_3580)
				{
					unk_0xC92DB9682A650680("OJDG2_FIRST_ENEMIES_DEAD");
					func_259(&uLocal_3501, 0, 0);
					iLocal_3580 = 1;
				}
			}
			if (uParam0[0]->f_66[iVar5].f_19)
			{
				func_243(uParam0, uParam1, iParam9, uParam3[0], 1);
			}
			else if (uParam1->f_33)
			{
				func_239(uParam0, uParam1, uParam3[0]);
			}
			if (!iLocal_3578)
			{
				if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), *uParam3[0], 100f, 100f, 100f, false, true, 0))
				{
					func_238(uParam0);
					iLocal_3578 = 1;
				}
			}
			func_237(uParam1, uParam15);
			func_236(uParam0, uParam1, uParam14, iParam4);
			iVar5 = 0;
			while (iVar5 < uParam0->f_1136)
			{
				if (bLocal_3576 && !iLocal_3577)
				{
					if (!unk_0xE4EDC4B0E92C078B(uParam1->f_12[iVar5]))
					{
						uParam1->f_12[iVar5] = unk_0x5C3B41825F6AC5A0((*uParam1)[iVar5]);
						unk_0x61755AC17D8F538E(uParam1->f_12[iVar5], 1);
						unk_0xDC5B2F9D0CCE3A10(uParam1->f_12[iVar5], "DTRFKGR_BLIP03");
						func_372("ADDING IN SMUGGLERS BLIPS NEW");
						iLocal_3577 = 1;
					}
				}
				if (unk_0xDF1306B443CD3D15((*uParam1)[iVar5], 0) || uParam1->f_29)
				{
					if (unk_0x5A91F08DF773C39D((*uParam1)[iVar5], *uParam3[0], 50f, 50f, 50f, false, true, 0))
					{
						if (!unk_0x437347B10A200C4B((*uParam1)[iVar5], 0))
						{
							iVar4 = unk_0xA30B8362589C124A((*uParam1)[iVar5], -1, 0);
							if (iVar4 != unk_0x16F2683693E537C9())
							{
								if (unk_0xC844350D5D58C99A(iVar4) && !unk_0x437347B10A200C4B(iVar4, 0))
								{
									unk_0xE7C05F3B97785E5F(iVar4, 262144);
								}
							}
						}
					}
					else if (!unk_0x437347B10A200C4B((*uParam1)[iVar5], 0))
					{
						iVar4 = unk_0xA30B8362589C124A((*uParam1)[iVar5], -1, 0);
						if (iVar4 != unk_0x16F2683693E537C9())
						{
							if (unk_0xC844350D5D58C99A(iVar4) && !unk_0x437347B10A200C4B(iVar4, 0))
							{
								unk_0xE7C05F3B97785E5F(iVar4, 786469);
							}
						}
					}
					if ((unk_0x5A91F08DF773C39D((*uParam1)[iVar5], *uParam3[0], vLocal_3601, false, true, 0) && !unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), *uParam3[0], vLocal_3567, false, true, 0)) && !unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), (*uParam1)[iVar5], 0))
					{
						func_372("SETTING smugArgs.bPickupAIFirst TO TRUE");
						uParam1->f_23 = 1;
						unk_0xC92DB9682A650680("OJDG2_PACKAGE_STOLEN");
						func_234(iParam13, uParam0, (*uParam1)[iVar5], 0);
						if (unk_0xC844350D5D58C99A(uParam1->f_5))
						{
							unk_0xF690C84DADBB3551(&(uParam1->f_5));
							func_372("DELETING smugArgs.oArmsPackage");
						}
						if (unk_0xC844350D5D58C99A(iLocal_3607))
						{
							unk_0xF690C84DADBB3551(&iLocal_3607);
							func_372("DELETING oFlareProp VIA SMUGGLERS AI FIRST");
						}
						*iParam7 = 1;
						if (unk_0xE4EDC4B0E92C078B((*iParam4)[0]))
						{
							unk_0x142CC44DB769B57E(iParam4[0]);
							func_372("REMOVING myLocationBlip[0] VIA AI FIRST");
						}
						if (*bParam18)
						{
							uParam1->f_36 = 1;
						}
						else
						{
							func_34("DTRFKGR_09", 3000, 1);
						}
						uParam1->f_20[iVar5] = 1;
						if (!unk_0x437347B10A200C4B((*uParam1)[iVar5], 0))
						{
							uParam1->f_11 = unk_0xA30B8362589C124A((*uParam1)[iVar5], -1, 0);
						}
						if (unk_0xC844350D5D58C99A(unk_0x6937EA2286828455(uParam1->f_11, 0)))
						{
							uParam1->f_3 = unk_0x6937EA2286828455(uParam1->f_11, 0);
						}
						*uParam3[0] = { 0f, 0f, 0f };
						if (uParam1->f_20[0])
						{
							func_372("smugArgs.bCarHasDrugs[0] IS TRUE");
						}
						unk_0x34D79252800B23FF(0);
						func_372("SETTING MAX WANTED LEVEL BACK TO ZERO");
						func_233(iLocal_3354);
						iVar4 = unk_0xA30B8362589C124A((*uParam1)[iVar5], -1, 0);
						if (unk_0xC844350D5D58C99A(iVar4) && !unk_0x437347B10A200C4B(iVar4, 0))
						{
							unk_0xE7C05F3B97785E5F(iVar4, 786469);
						}
						func_372("GOING TO SMUGGLERS_STATE_PICKUP_COMPLETE VIA AI GETTING TO PICKUP FIRST.");
						*uParam2 = 2;
					}
					if (((unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), *uParam3[0], vLocal_3567, false, true, 0) && !unk_0x5A91F08DF773C39D((*uParam1)[iVar5], *uParam3[0], vLocal_3567, false, true, 0)) || (unk_0xC844350D5D58C99A(uParam1->f_5) && unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(uParam1->f_5, true), vLocal_3567, false, true, 0))) || func_232(uParam1, iParam9))
					{
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
						{
							if (func_274(iParam9))
							{
								func_372("SETTING smugArgs.bPickupPlayerFirst TO TRUE");
								uParam1->f_24 = 1;
								func_231(uParam0, uParam1, iParam13, iParam9, iParam4, iVar5, bParam6);
								func_372("GOING TO SMUGGLERS_STATE_PICKUP_CUTSCENE VIA PLAYER GETTING TO PICKUP FIRST, IN VEHICLE.");
								*uParam2 = 3;
							}
						}
						else
						{
							func_372("SETTING smugArgs.bPickupPlayerFirst TO TRUE");
							uParam1->f_24 = 1;
							func_231(uParam0, uParam1, iParam13, iParam9, iParam4, iVar5, bParam6);
							func_372("GOING TO SMUGGLERS_STATE_PICKUP_CUTSCENE VIA PLAYER GETTING TO PICKUP FIRST, ON FOOT.");
							*uParam2 = 3;
						}
					}
					if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), *uParam3[0], vLocal_3567, false, true, 0) && unk_0x5A91F08DF773C39D((*uParam1)[iVar5], *uParam3[0], vLocal_3567, false, true, 0))
					{
						func_372("SETTING smugArgs.bPickupTie TO TRUE");
						uParam1->f_25 = 1;
						unk_0xC92DB9682A650680("OJDG2_TREV_FIRST");
						func_230(uParam0, uParam1, &iVar5);
						func_234(iParam13, uParam0, *iParam9, 1);
						uParam1->f_20[0] = 0;
						func_229(*bParam6, iParam9);
						if (unk_0xC844350D5D58C99A(uParam1->f_5))
						{
							unk_0xF690C84DADBB3551(&(uParam1->f_5));
							func_372("DELETING smugArgs.oArmsPackage");
						}
						if (unk_0xC844350D5D58C99A(iLocal_3607))
						{
							unk_0xF690C84DADBB3551(&iLocal_3607);
							func_372("DELETING oFlareProp VIA SMUGGLERS TIE");
						}
						if (unk_0xE4EDC4B0E92C078B((*iParam4)[0]))
						{
							unk_0x142CC44DB769B57E(iParam4[0]);
							func_372("REMOVING myLocationBlip[0] VIA TIE");
						}
						*bParam6 = 1;
						func_233(iLocal_3354);
						if (Global_111638.f_19978.f_1 == 1)
						{
							unk_0xA21FB76E67A3EE52();
						}
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == func_24(2))
							{
								func_45(uParam15, 2, 0, "TREVOR", 0, 1);
								func_8(uParam15, "ARMSAUD", "ARMS_PACK", 9, 0, 0, 0);
								if (!func_43(&(uParam1->f_68)))
								{
									func_40(&(uParam1->f_68));
								}
							}
						}
						func_228(uParam1);
						func_372("GOING TO SMUGGLERS_STATE_PICKUP_CUTSCENE VIA TIE.");
						*uParam2 = 3;
					}
				}
				else
				{
					if (unk_0xE4EDC4B0E92C078B(uParam1->f_12[iVar5]))
					{
						unk_0x142CC44DB769B57E(&(uParam1->f_12[iVar5]));
						func_372("REMOVING BLIPS BECAUSE THE SMUGGLER VEHICLE IS UNDRIVEABLE");
					}
					if (!unk_0x437347B10A200C4B((*uParam1)[iVar5], 0))
					{
						if (uParam0[0]->f_66[iVar5].f_19)
						{
							if (unk_0xDD4B920CF5E7E9EC((*uParam1)[iVar5]))
							{
								unk_0x2C17FD7B117DEDF0((*uParam1)[iVar5]);
								unk_0x0DC87D17DC2658DC((*uParam1)[iVar5], 1, 0);
								func_372("STOPPING PLAYBACK RECORDING DUE TO VEHICLE BEING UNDRIVEABLE 01");
							}
						}
						else if (unk_0x20D6474D5F4B9FC6((*uParam1)[iVar5]))
						{
							unk_0xC55F2A0377488064((*uParam1)[iVar5]);
							unk_0x0DC87D17DC2658DC((*uParam1)[iVar5], 1, 0);
							func_372("STOPPING PLAYBACK RECORDING DUE TO VEHICLE BEING UNDRIVEABLE 02");
						}
					}
					if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), *uParam3[0], Global_19, false, true, 0))
					{
						func_372("SETTING smugArgs.bPickupPlayerFirst TO TRUE DUE TO SMUGGLER VEHICLE BEING UNDRIVEABLE");
						uParam1->f_24 = 1;
						unk_0xC92DB9682A650680("OJDG2_PACKAGE_OBTAINED");
						if (unk_0xE4EDC4B0E92C078B((*iParam4)[0]))
						{
							unk_0x142CC44DB769B57E(iParam4[0]);
							func_372("REMOVING myLocationBlip[0] VIA PLAYER FIRST DUE TO SMUGGLERS VEHICLE BEING UNDRIVEABLE");
						}
						*bParam6 = 1;
						func_233(iLocal_3354);
						if (Global_111638.f_19978.f_1 == 1)
						{
							unk_0xA21FB76E67A3EE52();
						}
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == func_24(2))
							{
								func_45(uParam15, 2, 0, "TREVOR", 0, 1);
								func_8(uParam15, "ARMSAUD", "ARMS_PACK", 9, 0, 0, 0);
								if (!func_43(&(uParam1->f_68)))
								{
									func_40(&(uParam1->f_68));
								}
							}
						}
						func_372("GOING TO SMUGGLERS_STATE_PICKUP_CUTSCENE VIA PLAYER GETTING TO PICKUP FIRST - SMUGGLERS BEING UNDRIVEABLE.");
						*uParam2 = 3;
					}
				}
				iVar5++;
			}
			break;
		
		case 3:
			iVar5 = 0;
			while (iVar5 < (uParam0->f_1137 * uParam0->f_1136))
			{
				if (!unk_0x437347B10A200C4B(uParam1->f_7[iVar5], 0) && !unk_0xEB6A8945D1AC98A1(uParam1->f_7[iVar5]))
				{
					if (func_159(unk_0x16F2683693E537C9(), uParam1->f_7[iVar5], 1) > 300f)
					{
						uParam1->f_34 = 1;
						iLocal_3587 = 1;
						if (!iLocal_3588)
						{
							iVar9 = (unk_0x09AC81E49EA267F7(0, 65535) % 6);
							if (iVar9 == 0)
							{
								if (func_8(uParam15, "ARMSAUD", "ARMS_GRTP02", 9, 0, 0, 0))
								{
									iLocal_3588 = 1;
								}
							}
							else if (iVar9 == 1)
							{
								if (func_8(uParam15, "ARMSAUD", "ARMS_GRTP03", 9, 0, 0, 0))
								{
									iLocal_3588 = 1;
								}
							}
							else if (iVar9 == 2)
							{
								if (func_8(uParam15, "ARMSAUD", "ARMS_GRTP04", 9, 0, 0, 0))
								{
									iLocal_3588 = 1;
								}
							}
							else if (iVar9 == 3)
							{
								if (func_8(uParam15, "ARMSAUD", "ARMS_GRTP05", 9, 0, 0, 0))
								{
									iLocal_3588 = 1;
								}
							}
							else if (iVar9 == 4)
							{
								if (func_8(uParam15, "ARMSAUD", "ARMS_GRTP06", 9, 0, 0, 0))
								{
									iLocal_3588 = 1;
								}
							}
							else if (iVar9 == 5)
							{
								if (func_8(uParam15, "ARMSAUD", "ARMS_GRTP07", 9, 0, 0, 0))
								{
									iLocal_3588 = 1;
								}
							}
						}
					}
				}
				iVar5++;
			}
			if (uParam1->f_34 || uParam1->f_29)
			{
				if (uParam1->f_34)
				{
					func_372("SMUGGLERS ARE TOO FAR AFTER PICKUP - BLIPPING AIRFIELD");
				}
				else if (uParam1->f_29)
				{
					func_372("SMUGGLERS ARE DEAD PRIOR TO PICKUP - BLIPPING AIRFIELD");
				}
			}
			else
			{
				if (!func_43(&(uParam1->f_62)))
				{
					func_40(&(uParam1->f_62));
					func_372("STARTING smugArgs.tTrapStartTimer");
				}
				*uParam17 = 1;
				*uParam3[0] = { 0f, 0f, 0f };
				*iParam7 = 1;
			}
			iParam11->f_3 = 0;
			func_229(*bParam6, iParam9);
			func_372("INSIDE STATE - SMUGGLERS_STATE_PICKUP_CUTSCENE");
			*uParam2 = 2;
			break;
		
		case 2:
			if (!uParam1->f_29 && !uParam1->f_34)
			{
				iVar5 = 0;
				while (iVar5 < uParam0->f_1136)
				{
					if (unk_0xDF1306B443CD3D15((*uParam1)[iVar5], 0))
					{
						if (uParam1->f_23)
						{
							func_372("bPickupAIFirst IS TRUE - ATTEMPTING TO RE-TASK");
							*uParam2 = 4;
						}
						else if (uParam1->f_24 || uParam1->f_25)
						{
							iVar6 = 0;
							while (iVar6 < uParam0->f_1137)
							{
								iVar7 = (iVar5 * uParam0->f_1137);
								if (!unk_0xEB6A8945D1AC98A1(uParam1->f_7[(iVar6 + iVar7)]))
								{
									unk_0x11AD11297DC58CC7(uParam1->f_7[(iVar6 + iVar7)], true);
									unk_0x083F03A847B640E9(uParam1->f_7[(iVar6 + iVar7)], 1);
									unk_0xB35CCEC0D4946813(uParam1->f_7[(iVar6 + iVar7)], 0);
									unk_0xAFF39FB306F8E232(uParam1->f_7[(iVar6 + iVar7)], 2, true);
									unk_0xAFF39FB306F8E232(uParam1->f_7[(iVar6 + iVar7)], 50, true);
									unk_0xAFF39FB306F8E232(uParam1->f_7[(iVar6 + iVar7)], 69, true);
									unk_0xAFF39FB306F8E232(uParam1->f_7[(iVar6 + iVar7)], 70, true);
									unk_0x3CC33E4E9CE523F4(uParam1->f_7[(iVar6 + iVar7)], 2);
									unk_0xAFF39FB306F8E232(uParam1->f_7[(iVar6 + iVar7)], 1, true);
									unk_0xAFF39FB306F8E232(uParam1->f_7[(iVar6 + iVar7)], 3, false);
									unk_0x4E885A246A9D983A(uParam1->f_7[(iVar6 + iVar7)], 214, true);
									unk_0x6C3AE6E278DB3D0E(uParam1->f_7[(iVar6 + iVar7)], unk_0x16F2683693E537C9(), 0, 16);
								}
								iVar6++;
							}
							func_372("bPickupPlayerFirst IS TRUE - ATTEMPTING TO RE-TASK");
							func_372("GOING TO STATE - SMUGGLERS_STATE_TO_DROPOFF");
							*uParam2 = 4;
							break;
						}
					}
					iVar5++;
				}
			}
			else
			{
				func_372("smugArgs.bGoToDestination = TRUE BECAUSE smugArgs.bSmugglerPedsDeadPriorToPickup IS TRUE");
				uParam1->f_26 = 1;
				func_372("smugArgs.bSmugglerPedsDeadPriorToPickup IS TRUE, GOING TO STATE - SMUGGLERS_STATE_COMPLETE");
				*uParam2 = 10;
			}
			break;
		
		case 4:
			if (uParam1->f_23)
			{
				func_227(uParam0, uParam1, uParam20);
				if (!iLocal_3581)
				{
					if (!unk_0xD17F06053799A7CA())
					{
						iVar8 = (unk_0x09AC81E49EA267F7(0, 65535) % 6);
						if (iVar8 == 0)
						{
							if (func_8(uParam15, "ARMSAUD", "ARMS_EN_GOT", 9, 0, 0, 0))
							{
								iLocal_3581 = 1;
							}
						}
						else if (iVar8 == 1)
						{
							if (func_8(uParam15, "ARMSAUD", "ARMS_EN_GOT2", 9, 0, 0, 0))
							{
								iLocal_3581 = 1;
							}
						}
						else if (iVar8 == 2)
						{
							if (func_8(uParam15, "ARMSAUD", "ARMS_EN_GOT3", 9, 0, 0, 0))
							{
								iLocal_3581 = 1;
							}
						}
						else if (iVar8 == 3)
						{
							if (func_8(uParam15, "ARMSAUD", "ARMS_EN_GOT4", 9, 0, 0, 0))
							{
								iLocal_3581 = 1;
							}
						}
						else if (iVar8 == 4)
						{
							if (func_8(uParam15, "ARMSAUD", "ARMS_EN_GOT5", 9, 0, 0, 0))
							{
								iLocal_3581 = 1;
							}
						}
						else if (iVar8 == 5)
						{
							if (func_8(uParam15, "ARMSAUD", "ARMS_EN_GOT6", 9, 0, 0, 0))
							{
								iLocal_3581 = 1;
							}
						}
					}
				}
			}
			if (uParam1->f_24)
			{
				func_226(uParam0, uParam1, iParam9, iParam4, sParam5, uParam3, uParam15);
			}
			if (uParam1->f_24 || uParam1->f_25)
			{
				iVar5 = 0;
				while (iVar5 < (uParam0->f_1137 * uParam0->f_1136))
				{
					if (!unk_0x437347B10A200C4B(uParam1->f_7[iVar5], 0) && !unk_0xEB6A8945D1AC98A1(uParam1->f_7[iVar5]))
					{
						if (func_159(unk_0x16F2683693E537C9(), uParam1->f_7[iVar5], 1) > 300f)
						{
							if (!iLocal_3580)
							{
								unk_0xC92DB9682A650680("OJDG2_FIRST_ENEMIES_DEAD");
								iLocal_3580 = 1;
							}
							iLocal_3587 = 1;
							if (!iLocal_3588)
							{
								iVar9 = (unk_0x09AC81E49EA267F7(0, 65535) % 6);
								if (iVar9 == 0)
								{
									if (func_8(uParam15, "ARMSAUD", "ARMS_GRTP02", 9, 0, 0, 0))
									{
										iLocal_3588 = 1;
									}
								}
								else if (iVar9 == 1)
								{
									if (func_8(uParam15, "ARMSAUD", "ARMS_GRTP03", 9, 0, 0, 0))
									{
										iLocal_3588 = 1;
									}
								}
								else if (iVar9 == 2)
								{
									if (func_8(uParam15, "ARMSAUD", "ARMS_GRTP04", 9, 0, 0, 0))
									{
										iLocal_3588 = 1;
									}
								}
								else if (iVar9 == 3)
								{
									if (func_8(uParam15, "ARMSAUD", "ARMS_GRTP05", 9, 0, 0, 0))
									{
										iLocal_3588 = 1;
									}
								}
								else if (iVar9 == 4)
								{
									if (func_8(uParam15, "ARMSAUD", "ARMS_GRTP06", 9, 0, 0, 0))
									{
										iLocal_3588 = 1;
									}
								}
								else if (iVar9 == 5)
								{
									if (func_8(uParam15, "ARMSAUD", "ARMS_GRTP07", 9, 0, 0, 0))
									{
										iLocal_3588 = 1;
									}
								}
							}
							func_225(uParam0, uParam1);
							func_372("PLAYER GOT THE DRUGS FIRST AND THE SMUGGLERS ARE TOO FAR AWAY");
							*uParam2 = 10;
							break;
						}
					}
					iVar5++;
				}
			}
			if (!uParam1->f_30)
			{
				if (uParam1->f_23 && !unk_0xD17F06053799A7CA())
				{
					func_306("DTRFKGR_HELP_04", -1);
					if (!unk_0x437347B10A200C4B((*uParam1)[0], 0))
					{
						unk_0x0A2CA2E508C0AED3((*uParam1)[0], 1f);
					}
					uParam1->f_30 = 1;
				}
			}
			if (uParam1->f_23 && !uParam1->f_28)
			{
				func_223(uParam1, &(uParam0->f_218[1].f_107), uParam15);
			}
			if (uParam0[0]->f_66[0].f_19)
			{
				if (!unk_0x437347B10A200C4B((*uParam1)[0], 0))
				{
					if (unk_0xDD4B920CF5E7E9EC((*uParam1)[0]))
					{
						func_243(uParam0, uParam1, iParam9, &(uParam0->f_218[1].f_107), 0);
					}
				}
			}
			else if (uParam1->f_33)
			{
				func_239(uParam0, uParam1, &(uParam0->f_218[1].f_107));
			}
			iVar5 = 0;
			while (iVar5 < uParam0->f_1136)
			{
				if (unk_0xC844350D5D58C99A((*uParam1)[iVar5]) && unk_0xDF1306B443CD3D15((*uParam1)[iVar5], 0))
				{
					if ((((unk_0x5A91F08DF773C39D((*uParam1)[iVar5], uParam0->f_218[1].f_107, 12f, 12f, 3f, false, true, 0) && uParam1->f_20[iVar5]) && !unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), uParam0->f_218[1].f_107, vLocal_3564, false, true, 0)) && !uParam1->f_35) || (((unk_0x5A91F08DF773C39D((*uParam1)[iVar5], uParam0->f_218[1].f_107, 12f, 12f, 3f, false, true, 0) && uParam1->f_20[iVar5]) && unk_0x03068588A1FCED1A((*uParam1)[iVar5])) && !uParam1->f_35))
					{
						unk_0x1E9649458B15960F(uParam1->f_2, false);
						if (!unk_0x03068588A1FCED1A(uParam1->f_2))
						{
							if (!unk_0xEB6A8945D1AC98A1(uParam1->f_10) && !unk_0x437347B10A200C4B(uParam1->f_2, 0))
							{
								unk_0xF82EA857DA10E0CD(&iVar0);
								unk_0xDD353D0E9C789D0E(&iVar0);
								unk_0x5B1D360B9C6F0A09(0, uParam1->f_2, 20000, -1, 2f, 1, 0);
								unk_0x9AFA0796FDCABCD5(0, uParam1->f_2, 0, 0, uParam0->f_218[1].f_164, uParam0->f_218[1].f_164.f_1, (uParam0->f_218[1].f_164.f_2 + 50f), 4, 40f, -1f, 0f, 60, 30, -1082130432, 0);
								unk_0x9AFA0796FDCABCD5(0, uParam1->f_2, 0, 0, (uParam0->f_218[1].f_164 + 500f), (uParam0->f_218[1].f_164.f_1 + 500f), (uParam0->f_218[1].f_164.f_2 + 10f), 4, 40f, -1f, 0f, 60, 30, -1082130432, 0);
								unk_0x75ABDC5F81978924(iVar0);
								if (!unk_0xEB6A8945D1AC98A1(uParam1->f_10))
								{
									unk_0x78ADC381772E3D54(uParam1->f_10, iVar0);
								}
								unk_0xF82EA857DA10E0CD(&iVar0);
							}
						}
						else
						{
							if (unk_0xC844350D5D58C99A(uParam1->f_2))
							{
								unk_0xA954465BA6FDEFE2(&(uParam1->f_2));
							}
							if (unk_0xC844350D5D58C99A(uParam1->f_10))
							{
								unk_0xEBA53F35D0085654(&(uParam1->f_10));
							}
						}
						if (!unk_0x03068588A1FCED1A(uParam1->f_3))
						{
							if (unk_0xDF1306B443CD3D15(uParam1->f_3, 0) && !unk_0xEB6A8945D1AC98A1(uParam1->f_11))
							{
								unk_0xDE5F9F54005367A1(unk_0x68F4C0EC296D3901(uParam1->f_3, true), &vVar10, 1, 1077936128, 0);
								unk_0xA47B46945FF6DE74(uParam1->f_3, vVar10, 1, false, 0, 1);
							}
						}
						else
						{
							if (unk_0xC844350D5D58C99A(uParam1->f_3))
							{
								unk_0xA954465BA6FDEFE2(&(uParam1->f_3));
							}
							if (unk_0xC844350D5D58C99A(uParam1->f_7[0]))
							{
								unk_0xEBA53F35D0085654(&(uParam1->f_7[0]));
							}
							if (unk_0xC844350D5D58C99A(uParam1->f_7[1]))
							{
								unk_0xEBA53F35D0085654(&(uParam1->f_7[1]));
							}
						}
						uParam1->f_27 = 1;
						func_372("smugArgs.bSmugglerReachedDest = TRUE VIA PLAYER BEING TOO FAR AWAY TO TRIGGER CUTSCENE");
						*uParam2 = 10;
						break;
					}
					if (((unk_0x5A91F08DF773C39D((*uParam1)[iVar5], uParam0->f_218[1].f_107, 12f, 12f, 3f, false, true, 0) && uParam1->f_20[iVar5]) && !unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), uParam0->f_218[1].f_107, vLocal_3561, false, true, 0)) && !uParam1->f_35)
					{
						func_372("SMUGGLER REACHED OBJECTIVE");
						if (uParam0[0]->f_66[iVar5].f_19)
						{
							if (!unk_0x437347B10A200C4B((*uParam1)[iVar5], 0))
							{
								unk_0xE0C0351D5B931E37((*uParam1)[iVar5], 5f, 2, 0);
							}
						}
						func_230(uParam0, uParam1, &iVar5);
						if ((!unk_0xEB6A8945D1AC98A1(uParam1->f_11) && !unk_0x437347B10A200C4B(uParam1->f_2, 0)) && !unk_0xEB6A8945D1AC98A1(uParam1->f_10))
						{
							unk_0xF82EA857DA10E0CD(&iVar0);
							unk_0xDD353D0E9C789D0E(&iVar0);
							unk_0x45F014B3D0466974(0, uParam1->f_3, 256);
							unk_0x75ABDC5F81978924(iVar0);
							if (!unk_0xEB6A8945D1AC98A1(uParam1->f_11))
							{
								unk_0x78ADC381772E3D54(uParam1->f_11, iVar0);
							}
							unk_0xF82EA857DA10E0CD(&iVar0);
						}
						if (!uParam1->f_35)
						{
							if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0xDF1306B443CD3D15(*iParam9, 0))
							{
								if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), uParam0->f_218[1].f_107, 15f, 15f, 15f, false, true, 0))
								{
									unk_0xBFB24B9B15F6108F(unk_0x16F2683693E537C9(), (uParam0->f_218[1].f_107 + 20f), (uParam0->f_218[1].f_107.f_1 + 20f), uParam0->f_218[1].f_107.f_2);
								}
							}
							*uParam2 = 9;
							break;
						}
					}
					else if (((unk_0x5A91F08DF773C39D((*uParam1)[iVar5], uParam0->f_218[1].f_107, Global_19, false, true, 0) && uParam1->f_20[iVar5]) && unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), uParam0->f_218[1].f_107, vLocal_3561, false, true, 0)) || ((((unk_0x5A91F08DF773C39D((*uParam1)[iVar5], uParam0->f_218[1].f_107, Global_19, false, true, 0) && uParam1->f_20[iVar5]) && unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), uParam0->f_218[1].f_107, vLocal_3561, false, true, 0)) && uParam1->f_35) && !uParam1->f_28))
					{
						unk_0x71EDC33E5A423750((*uParam1)[0], 1);
						if (!unk_0xEB6A8945D1AC98A1(uParam1->f_7[0]))
						{
							unk_0x3CC33E4E9CE523F4(uParam1->f_7[0], 1);
							unk_0xF82EA857DA10E0CD(&iVar0);
							unk_0xDD353D0E9C789D0E(&iVar0);
							unk_0x75CDA8644CD3B5F5(0, 500, 256);
							unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
							unk_0x75ABDC5F81978924(iVar0);
							if (!unk_0xEB6A8945D1AC98A1(uParam1->f_7[0]))
							{
								unk_0x78ADC381772E3D54(uParam1->f_7[0], iVar0);
								func_372("GIVING TASK TO SMUGGLER PED 0");
								unk_0x3CC33E4E9CE523F4(uParam1->f_7[0], 1);
							}
							unk_0xF82EA857DA10E0CD(&iVar0);
						}
						if (!unk_0xEB6A8945D1AC98A1(uParam1->f_7[1]))
						{
							unk_0x11AD11297DC58CC7(uParam1->f_7[1], true);
							unk_0x3CC33E4E9CE523F4(uParam1->f_7[1], 1);
							unk_0xF82EA857DA10E0CD(&iVar0);
							unk_0xDD353D0E9C789D0E(&iVar0);
							unk_0x75CDA8644CD3B5F5(0, 1000, 256);
							unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
							unk_0x75ABDC5F81978924(iVar0);
							if (!unk_0xEB6A8945D1AC98A1(uParam1->f_7[1]))
							{
								unk_0x78ADC381772E3D54(uParam1->f_7[1], iVar0);
								func_372("GIVING TASK TO SMUGGLER PED 1");
								unk_0x3CC33E4E9CE523F4(uParam1->f_7[1], 1);
							}
							unk_0xF82EA857DA10E0CD(&iVar0);
						}
						if (!unk_0xEB6A8945D1AC98A1(uParam1->f_10))
						{
							unk_0x6C3AE6E278DB3D0E(uParam1->f_10, unk_0x16F2683693E537C9(), 0, 16);
							unk_0x3CC33E4E9CE523F4(uParam1->f_10, 1);
						}
						func_34("DTRFKGR_KILL", 7500, 1);
						if (unk_0xE4EDC4B0E92C078B(uParam1->f_12[0]))
						{
							unk_0x142CC44DB769B57E(&(uParam1->f_12[0]));
							func_372("REMOVING BLIP ON CAR BECAUSE GUYS SHOULD BE OUTSIDE OF CAR NOW");
						}
						if (!unk_0xE4EDC4B0E92C078B(uParam1->f_14[0]))
						{
							uParam1->f_14[0] = unk_0x5C3B41825F6AC5A0(uParam1->f_7[0]);
							func_372("ADDING BLIP TO smugArgs.smugglersPeds[0]");
							unk_0x516E63E474722206(uParam1->f_14[0], 0,5f);
						}
						if (!unk_0xE4EDC4B0E92C078B(uParam1->f_14[1]))
						{
							uParam1->f_14[1] = unk_0x5C3B41825F6AC5A0(uParam1->f_7[1]);
							func_372("ADDING BLIP TO smugArgs.smugglersPeds[1]");
							unk_0x516E63E474722206(uParam1->f_14[1], 0,5f);
						}
						if (!unk_0xE4EDC4B0E92C078B(uParam1->f_18))
						{
							uParam1->f_18 = unk_0x5C3B41825F6AC5A0(uParam1->f_10);
							func_372("ADDING BLIP TO smugArgs.smugglersHeliPed");
							unk_0x516E63E474722206(uParam1->f_18, 0,5f);
						}
						uParam1->f_39 = 1;
						*uParam2 = 6;
						break;
					}
				}
				else
				{
					if (unk_0xE4EDC4B0E92C078B(uParam1->f_12[iVar5]))
					{
						unk_0x142CC44DB769B57E(&(uParam1->f_12[iVar5]));
						func_372("REMOVING BLIPS BECAUSE THE CAR IS DEAD");
					}
					if (!uParam1->f_43[0] && !uParam1->f_43[1])
					{
						if (!unk_0x437347B10A200C4B(uParam1->f_7[0], 0))
						{
							unk_0xF82EA857DA10E0CD(&iVar1);
							unk_0xDD353D0E9C789D0E(&iVar1);
							unk_0x75CDA8644CD3B5F5(0, 0, 0);
							unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
							unk_0x75ABDC5F81978924(iVar1);
							unk_0x78ADC381772E3D54(uParam1->f_7[0], iVar1);
							unk_0xF82EA857DA10E0CD(&iVar1);
						}
						if (!unk_0x437347B10A200C4B(uParam1->f_7[1], 0))
						{
							unk_0xF82EA857DA10E0CD(&iVar1);
							unk_0xDD353D0E9C789D0E(&iVar1);
							unk_0x75CDA8644CD3B5F5(0, 0, 0);
							unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
							unk_0x75ABDC5F81978924(iVar1);
							unk_0x78ADC381772E3D54(uParam1->f_7[1], iVar1);
							unk_0xF82EA857DA10E0CD(&iVar1);
						}
						uParam1->f_43[0] = 1;
						uParam1->f_43[1] = 1;
					}
					func_230(uParam0, uParam1, &iVar5);
					if (uParam1->f_24)
					{
						unk_0x0DC87D17DC2658DC((*uParam1)[0], 1, 0);
						uParam1->f_26 = 1;
						func_372("SETTING smugArgs.bGoToDestination = TRUE BECAUSE THE PLAYER GOT THE PACKAGE AND THE SMUGGLERS VEHICLE DIED");
						func_372("GOING TO STATE SMUGGLERS_STATE_COMPLETE");
						*uParam2 = 10;
						break;
					}
				}
				if (unk_0xC844350D5D58C99A((*uParam1)[iVar5]))
				{
					if (!unk_0x437347B10A200C4B((*uParam1)[iVar5], 0))
					{
						if (unk_0x377BE9A1BF38C7CE((*uParam1)[iVar5]))
						{
							if (!bLocal_3573)
							{
								bLocal_3573 = true;
								iLocal_3589 = unk_0x1C0640BA9A7327B3();
								if (!unk_0x437347B10A200C4B(uParam1->f_7[0], 0))
								{
									if (unk_0x405E212DDE472467(uParam1->f_7[0], 0))
									{
										unk_0xF82EA857DA10E0CD(&iVar1);
										unk_0xDD353D0E9C789D0E(&iVar1);
										unk_0x75CDA8644CD3B5F5(0, 0, 0);
										unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
										unk_0x75ABDC5F81978924(iVar1);
										unk_0x78ADC381772E3D54(uParam1->f_7[0], iVar1);
										unk_0xF82EA857DA10E0CD(&iVar1);
									}
								}
								if (!unk_0x437347B10A200C4B(uParam1->f_7[1], 0))
								{
									if (unk_0x405E212DDE472467(uParam1->f_7[1], 0))
									{
										unk_0xF82EA857DA10E0CD(&iVar1);
										unk_0xDD353D0E9C789D0E(&iVar1);
										unk_0x75CDA8644CD3B5F5(0, 0, 0);
										unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
										unk_0x75ABDC5F81978924(iVar1);
										unk_0x78ADC381772E3D54(uParam1->f_7[1], iVar1);
										unk_0xF82EA857DA10E0CD(&iVar1);
									}
								}
							}
						}
						else
						{
							bLocal_3573 = false;
							iLocal_3589 = 0;
						}
						if (bLocal_3573)
						{
							if ((unk_0x1C0640BA9A7327B3() - iLocal_3589) > 12000)
							{
								func_372("EXPLODING SMUGGLER VEHICLE");
								unk_0x0DC87D17DC2658DC((*uParam1)[iVar5], 1, 0);
							}
						}
					}
				}
				iVar5++;
			}
			if (func_222(uParam0, uParam1, uParam8, sParam5, iParam9, iParam11, iParam13, bParam18, bParam6))
			{
				unk_0xC92DB9682A650680("OJDG2_1ST_SET_DEAD");
				iParam11->f_3 = 0;
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0x437347B10A200C4B(*iParam9, 0))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), *iParam9, 0))
					{
						if (uParam1->f_23)
						{
							unk_0x790015DC92C918E2();
							func_34("DTRFKGR_03", 7500, 1);
							StringCopy(sParam5, "DTRFKGR_03", 32);
							*iParam7 = 0;
							if (!unk_0xE4EDC4B0E92C078B((*iParam4)[0]))
							{
								(*iParam4)[0] = unk_0x6CC513A908911CF0(uParam0->f_218[0].f_110);
								if (unk_0xE4EDC4B0E92C078B((*iParam4)[0]))
								{
									unk_0xDC5B2F9D0CCE3A10((*iParam4)[0], "DTRFKGR_BLIP07");
								}
								*uParam3[0] = { uParam0->f_218[0].f_110 };
							}
							else
							{
								func_372("myLocationBlip[0] DOES EXIST");
							}
						}
						*bParam6 = 1;
						*uParam2 = 10;
					}
					else
					{
						*uParam2 = 5;
					}
				}
			}
			if (func_244(uParam0, uParam1, uParam15))
			{
				if (!iLocal_3580)
				{
					unk_0xC92DB9682A650680("OJDG2_FIRST_ENEMIES_DEAD");
					iLocal_3580 = 1;
				}
			}
			break;
		
		case 5:
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0x437347B10A200C4B(*iParam9, 0))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), *iParam9, 0))
				{
					if (unk_0xE4EDC4B0E92C078B(iLocal_3608))
					{
						unk_0x142CC44DB769B57E(&iLocal_3608);
					}
					if (uParam1->f_23)
					{
						unk_0x790015DC92C918E2();
						func_34("DTRFKGR_03", 7500, 1);
						StringCopy(sParam5, "DTRFKGR_03", 32);
						*iParam7 = 0;
						if (!unk_0xE4EDC4B0E92C078B((*iParam4)[0]))
						{
							(*iParam4)[0] = unk_0x6CC513A908911CF0(uParam0->f_218[0].f_110);
							if (unk_0xE4EDC4B0E92C078B((*iParam4)[0]))
							{
								unk_0xDC5B2F9D0CCE3A10((*iParam4)[0], "DTRFKGR_BLIP07");
							}
							*uParam3[0] = { uParam0->f_218[0].f_110 };
						}
						else
						{
							func_372("myLocationBlip[0] DOES EXIST");
						}
					}
					*bParam6 = 1;
					*uParam2 = 10;
				}
				else
				{
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
					{
						vVar13 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
					}
					if (vdist2(vVar13, uParam1->f_47) > 122500f)
					{
						uParam1->f_41 = 1;
					}
				}
			}
			break;
		
		case 6:
			if (unk_0xE4EDC4B0E92C078B(uParam1->f_12[0]))
			{
				unk_0x142CC44DB769B57E(&(uParam1->f_12[0]));
				func_372("REMOVING BLIP ON CAR BECAUSE GUYS SHOULD BE OUTSIDE OF CAR NOW");
			}
			if (unk_0xEB6A8945D1AC98A1(uParam1->f_7[0]))
			{
				if (unk_0xE4EDC4B0E92C078B(uParam1->f_14[0]))
				{
					unk_0x142CC44DB769B57E(&(uParam1->f_14[0]));
				}
			}
			if (unk_0xEB6A8945D1AC98A1(uParam1->f_7[1]))
			{
				if (unk_0xE4EDC4B0E92C078B(uParam1->f_14[1]))
				{
					unk_0x142CC44DB769B57E(&(uParam1->f_14[1]));
				}
			}
			if (unk_0xEB6A8945D1AC98A1(uParam1->f_10))
			{
				if (unk_0xE4EDC4B0E92C078B(uParam1->f_18))
				{
					unk_0x142CC44DB769B57E(&(uParam1->f_18));
				}
			}
			if ((unk_0xEB6A8945D1AC98A1(uParam1->f_10) && unk_0xEB6A8945D1AC98A1(uParam1->f_7[0])) && unk_0xEB6A8945D1AC98A1(uParam1->f_7[1]))
			{
				settimera(0);
				func_372("ALL GUYS ARE KILLED, MOVE ON TO STATE - SMUGGLERS_STATE_DROPOFF_FIGHT_A");
				*uParam2 = 7;
			}
			break;
		
		case 7:
			if (timera() > 1000)
			{
				if (!unk_0xE4EDC4B0E92C078B(uParam1->f_17))
				{
					if (!unk_0x437347B10A200C4B((*uParam1)[0], 0))
					{
						unk_0x611DFA9294B339CA((*uParam1)[0], 5, 0, false);
					}
					uParam1->f_17 = unk_0x5C3B41825F6AC5A0((*uParam1)[iVar5]);
					func_372("ADDING BLIP TO PICK UP THE PACKAGE");
					unk_0x61755AC17D8F538E(uParam1->f_17, 2);
					func_34("DTRFKGR_06", 7500, 1);
					StringCopy(sParam5, "DTRFKGR_06", 32);
				}
				if (func_221((*uParam1)[iVar5], 1069547520))
				{
					func_220(uParam1, iVar5);
					func_372("BUFFER TIME IS UP, MOVE ON TO CUTSCENE");
					*uParam2 = 8;
				}
				else if (func_219((*uParam1)[iVar5]))
				{
					func_220(uParam1, iVar5);
					func_372("BUFFER TIME IS UP, MOVE ON TO CUTSCENE");
					*uParam2 = 8;
				}
			}
			break;
		
		case 8:
			if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), uParam1->f_47, 5f, 5f, 4f, false, true, 0))
			{
				if (func_43(&(uParam1->f_71)))
				{
					if (func_37(&(uParam1->f_71)) > 2f)
					{
						if (unk_0xDF1306B443CD3D15(*iParam9, 0))
						{
							if (unk_0xE4EDC4B0E92C078B(uParam1->f_17))
							{
								unk_0x142CC44DB769B57E(&(uParam1->f_17));
								func_150(iParam13);
								func_234(iParam13, uParam0, *iParam9, 1);
								uParam1->f_20[0] = 0;
							}
							*bParam6 = 1;
							if (!unk_0x437347B10A200C4B(*iParam9, 0))
							{
								unk_0x71EDC33E5A423750(*iParam9, 9);
							}
						}
					}
				}
				else if (!func_43(&(uParam1->f_71)))
				{
					func_40(&(uParam1->f_71));
				}
			}
			else
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
				{
					vVar13 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
				}
				if (vdist2(vVar13, uParam1->f_47) > 122500f)
				{
					uParam1->f_41 = 1;
				}
				else if (vdist2(vVar13, uParam1->f_47) > 10000f)
				{
					if (!iLocal_3585)
					{
						func_34("DTRFKGR_06a", 7500, 1);
						iLocal_3585 = 1;
					}
				}
			}
			if (*bParam6)
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0x437347B10A200C4B(*iParam9, 0))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), *iParam9, 0))
					{
						*iParam7 = 0;
						iParam11->f_3 = 0;
						func_34("DTRFKGR_03", 7500, 1);
						StringCopy(sParam5, "DTRFKGR_03", 32);
						(*iParam4)[0] = unk_0x6CC513A908911CF0(uParam0->f_218[0].f_110);
						if (unk_0xE4EDC4B0E92C078B((*iParam4)[0]))
						{
							unk_0xDC5B2F9D0CCE3A10((*iParam4)[0], "DTRFKGR_BLIP07");
						}
						*uParam3[0] = { uParam0->f_218[0].f_110 };
						*uParam2 = 10;
					}
				}
			}
			break;
		
		case 9:
			if (func_207(&(iParam11->f_3), iParam11, uParam0->f_218[1].f_146, uParam0->f_218[1].f_149, uParam12, "", iParam10, 0, 0, 0, 35f, 3000, 3000, 0))
			{
				unk_0x2FB9A57162E54BAB(0f);
				*uParam2 = 10;
			}
			break;
		
		case 10:
			iVar5 = 0;
			while (iVar5 < uParam1->f_14)
			{
				if (unk_0xE4EDC4B0E92C078B(uParam1->f_14[iVar5]))
				{
					unk_0x142CC44DB769B57E(&(uParam1->f_14[iVar5]));
					func_372("REMOVING BLIP blipSmugglersPeds");
				}
				iVar5++;
			}
			iVar5 = 0;
			while (iVar5 < uParam1->f_12)
			{
				if (unk_0xE4EDC4B0E92C078B(uParam1->f_12[iVar5]))
				{
					unk_0x142CC44DB769B57E(&(uParam1->f_12[iVar5]));
					func_372("REMOVING blipSmugglersCars");
				}
				iVar5++;
			}
			iVar5 = 0;
			while (iVar5 < (uParam0->f_1137 * uParam0->f_1136))
			{
				if (unk_0xC844350D5D58C99A(uParam1->f_7[iVar5]))
				{
					if (unk_0x03068588A1FCED1A(uParam1->f_7[iVar5]))
					{
						unk_0xEBA53F35D0085654(&(uParam1->f_7[iVar5]));
					}
					else
					{
						unk_0x6DAD7906B73F064D(&(uParam1->f_7[iVar5]));
					}
				}
				iVar5++;
			}
			iVar5 = 0;
			while (iVar5 < uParam0->f_1136)
			{
				if (unk_0xC844350D5D58C99A((*uParam1)[iVar5]))
				{
					if (unk_0x03068588A1FCED1A((*uParam1)[iVar5]))
					{
						unk_0xA954465BA6FDEFE2(uParam1[iVar5]);
					}
					else
					{
						unk_0x046C362CF15F1935(uParam1[iVar5]);
					}
				}
				iVar5++;
			}
			if (unk_0xC844350D5D58C99A(uParam1->f_2))
			{
				unk_0x046C362CF15F1935(&(uParam1->f_2));
			}
			else
			{
				unk_0x71199B01895C6202(uParam0->f_1140);
				unk_0x71199B01895C6202(-644710429);
			}
			if (unk_0xC844350D5D58C99A(uParam1->f_10))
			{
				unk_0x6DAD7906B73F064D(&(uParam1->f_10));
			}
			func_259(&uLocal_3501, 0, 0);
			if (!func_46())
			{
				if (!unk_0xE4EDC4B0E92C078B((*iParam4)[0]))
				{
					func_34("DTRFKGR_03", 7500, 1);
					StringCopy(sParam5, "DTRFKGR_03", 32);
					(*iParam4)[0] = unk_0x6CC513A908911CF0(uParam0->f_218[0].f_110);
					if (unk_0xE4EDC4B0E92C078B((*iParam4)[0]))
					{
						unk_0xDC5B2F9D0CCE3A10((*iParam4)[0], "DTRFKGR_BLIP07");
					}
					*uParam3[0] = { uParam0->f_218[0].f_110 };
				}
				else
				{
					func_372("myLocationBlip[0] DOES EXIST");
					StringCopy(sParam5, "DTRFKGR_03", 32);
					*uParam3[0] = { uParam0->f_218[0].f_110 };
				}
				*iParam7 = 0;
				*uParam21 = unk_0x1C0640BA9A7327B3();
				func_372("smugArgs.bGoToDestination = TRUE IN STATE SMUGGLERS_STATE_COMPLETE");
				uParam1->f_26 = 1;
				unk_0x34D79252800B23FF(5);
				func_372("SETTING MAX WANTED LEVEL BACK TO SIX");
				func_372("RETURNING TRUE ON UPDATE_SMUGGLERS_MODE");
				return 1;
			}
			break;
	}
	return 0;
}

int func_207(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, var uParam8, char* sParam9, var uParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, int iParam15, int iParam16, bool bParam17)
{
	if (bParam11)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			func_218(0, 0, 1);
			*uParam8 = unk_0x764D630505EFC040("DEFAULT_SCRIPTED_CAMERA", vParam2, vParam5, fParam14, 1, 2);
			if (bParam12)
			{
				if (vdist(unk_0x07DAF5424BC6779A(), vParam2) > 150f)
				{
					iParam15 += 3000;
				}
				else if (vdist(unk_0x07DAF5424BC6779A(), vParam2) > 75f)
				{
					iParam15 += 2000;
				}
				if (bParam17)
				{
					unk_0xB3A1B75CB59FEB56(true, true, iParam15, 1, 0, 0);
				}
			}
			else if (bParam17)
			{
				unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
			}
			unk_0xE3BB8E05FCEB3FBE(*uParam8, true);
			if (!unk_0x2EBF5002C6B6A06C(sParam9))
			{
				unk_0x790015DC92C918E2();
				func_306(sParam9, -1);
			}
			func_41(iParam1);
			*uParam0 = 2;
			break;
		
		case 2:
			Call_Loc(uParam10);
			if (StackVal)
			{
				*uParam0 = 3;
			}
			break;
		
		case 3:
			unk_0xB3A1B75CB59FEB56(false, bParam13, iParam16, 1, 0, 0);
			unk_0x9A8DDC7C522F5BF5(*uParam8, 0);
			func_208(1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void func_208(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), true, 0);
	}
	unk_0x2D23BE319D971F4C(1);
	func_210(0, 1, iParam2, 0, 0, 0);
	if (bParam1)
	{
		unk_0xBFE31971E49FA500(true);
		unk_0x8BCB70EB440DED83(true);
	}
	func_209(23, 0);
}

void func_209(int iParam0, bool bParam1)
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

void func_210(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_217(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_17())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_216(1, iParam3, uParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_217(0);
		unk_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_216(0, iParam3, uParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_214(unk_0xD803B885F5E47A62())) && !func_212(unk_0xD803B885F5E47A62(), 0)) && !func_211()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_214(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_211()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 14);
}

bool func_212(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_213(-1, 0) == 8;
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

int func_213(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_66();
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

int func_214(int iParam0)
{
	if (func_212(iParam0, 0))
	{
		return 1;
	}
	if (func_215())
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

bool func_215()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_216(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_217(int iParam0)
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

void func_218(int iParam0, int iParam1, int iParam2)
{
	unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), false, iParam0);
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x7800CEC090C01D4D(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 15f);
	}
	unk_0x2D23BE319D971F4C(iParam1);
	func_128(0);
	func_210(1, 1, iParam2, 0, 0, 0);
	unk_0xBFE31971E49FA500(false);
	unk_0x8BCB70EB440DED83(false);
	func_209(23, 1);
}

int func_219(int iParam0)
{
	if (unk_0x437347B10A200C4B(iParam0, 0))
	{
		fVar0 = unk_0x9C66D99E63E8E24C(iParam0);
		if (fVar0 > -0,5f && fVar0 < 0,5f)
		{
			return 1;
		}
	}
	return 0;
}

void func_220(var uParam0, int iParam1)
{
	vVar1 = { 0f, -5f, 0f };
	uParam0->f_47 = { unk_0x68F4C0EC296D3901((*uParam0)[iParam1], true) };
	uParam0->f_50 = unk_0xD9522BA9E27E1349((*uParam0)[iParam1]);
	uParam0->f_51 = { unk_0x835730A2D89F6093((*uParam0)[iParam1], 2) };
	vVar4 = { unk_0x8A5E176FF719A014(uParam0->f_47, uParam0->f_50, vVar1) };
	unk_0x4A13F7D4B1E239A0(vVar4, 1, &(uParam0->f_54), &(uParam0->f_61), &uVar0, 1, 1077936128, 0);
	unk_0x4A13F7D4B1E239A0(vVar4, 3, &(uParam0->f_57), &(uParam0->f_60), &uVar0, 1, 1077936128, 0);
	uParam0->f_60 = uParam0->f_60;
	if (vdist(uParam0->f_54, uParam0->f_57) < 3f)
	{
		unk_0x4A13F7D4B1E239A0(vVar4, 4, &(uParam0->f_57), &(uParam0->f_60), &uVar0, 1, 1077936128, 0);
	}
	uVar0 = uVar0;
}

int func_221(int iParam0, float fParam1)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		fVar0 = unk_0x9C66D99E63E8E24C(iParam0);
		if (fVar0 > -1,5f && fVar0 < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_222(var uParam0, var uParam1, var uParam2, char* sParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8)
{
	bVar2 = true;
	switch (*uParam2)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < (uParam0->f_1137 * uParam0->f_1136))
			{
				if (unk_0xC844350D5D58C99A(uParam1->f_7[iVar0]))
				{
					if (!unk_0x437347B10A200C4B(uParam1->f_7[iVar0], 0))
					{
						bVar2 = false;
					}
				}
				iVar0++;
			}
			if (bVar2)
			{
				if (unk_0xC844350D5D58C99A(uParam1->f_10))
				{
					if (unk_0x03068588A1FCED1A(uParam1->f_10))
					{
						func_228(uParam1);
					}
				}
				if (unk_0xE4EDC4B0E92C078B(uParam1->f_14[0]))
				{
					unk_0x142CC44DB769B57E(&(uParam1->f_14[0]));
				}
				if (unk_0xE4EDC4B0E92C078B(uParam1->f_14[1]))
				{
					unk_0x142CC44DB769B57E(&(uParam1->f_14[1]));
				}
				if (unk_0xE4EDC4B0E92C078B(uParam1->f_12[0]))
				{
					unk_0x142CC44DB769B57E(&(uParam1->f_12[0]));
				}
				unk_0x611DFA9294B339CA((*uParam1)[0], 5, 0, false);
				if (!*uParam7)
				{
					if (uParam1->f_23)
					{
						uParam1->f_28 = 1;
						*uParam2 = 1;
					}
					else
					{
						func_372("smugArgs.bPickupAIFirst IS FALSE: GOING TO STATE - SMUGGLERS_RETRIEVE_DRUGS_COMPLETE NEW");
						*uParam2 = 5;
					}
				}
			}
			break;
		
		case 1:
			iVar0 = 0;
			while (iVar0 < uParam0->f_1136)
			{
				if (unk_0xE4EDC4B0E92C078B(uParam1->f_12[iVar0]))
				{
					unk_0x142CC44DB769B57E(&(uParam1->f_12[iVar0]));
					func_372("REMOVING blipSmugglersCars 01");
				}
				func_230(uParam0, uParam1, &iVar0);
				iVar1 = 0;
				while (iVar1 < (uParam0->f_1137 * uParam0->f_1136))
				{
					if (unk_0x437347B10A200C4B(uParam1->f_7[iVar1], 0))
					{
						if (!unk_0xE4EDC4B0E92C078B(uParam1->f_17))
						{
							uParam1->f_17 = unk_0x5C3B41825F6AC5A0((*uParam1)[iVar0]);
							func_372("ADDING BLIP TO PICK UP THE PACKAGE");
							unk_0x61755AC17D8F538E(uParam1->f_17, 2);
							func_34("DTRFKGR_06", 7500, 1);
							StringCopy(sParam3, "DTRFKGR_06", 32);
						}
						if (func_221((*uParam1)[iVar0], 1069547520))
						{
							func_220(uParam1, iVar0);
							*uParam2 = 4;
						}
						else if (func_219((*uParam1)[iVar0]))
						{
							func_220(uParam1, iVar0);
							*uParam2 = 4;
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			break;
		
		case 4:
			if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), uParam1->f_47, 5f, 5f, 4f, false, true, 0))
			{
				if (func_43(&(uParam1->f_71)))
				{
					if (func_37(&(uParam1->f_71)) > 1f)
					{
						if (unk_0xDF1306B443CD3D15(*iParam4, 0))
						{
							if (unk_0xE4EDC4B0E92C078B(uParam1->f_17))
							{
								unk_0x142CC44DB769B57E(&(uParam1->f_17));
							}
							func_150(iParam6);
							func_234(iParam6, uParam0, *iParam4, 1);
							uParam1->f_20[0] = 0;
							*uParam8 = 1;
							unk_0x71EDC33E5A423750(*iParam4, 9);
							func_372("GOING TO STATE - SMUGGLERS_RETRIEVE_DRUGS_COMPLETE NEW");
							*uParam2 = 5;
						}
					}
				}
				else if (!func_43(&(uParam1->f_71)))
				{
					func_40(&(uParam1->f_71));
				}
			}
			else
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
				{
					vVar3 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
				}
				if (vdist2(vVar3, uParam1->f_47) > 122500f)
				{
					uParam1->f_41 = 1;
				}
				else if (vdist2(vVar3, uParam1->f_47) > 10000f)
				{
					if (!iLocal_3585)
					{
						func_34("DTRFKGR_06a", 7500, 1);
						iLocal_3585 = 1;
					}
				}
			}
			break;
		
		case 5:
			uParam5->f_3 = 0;
			func_372("SET_WANTED_LEVEL_MULTIPLIER TO 1.0 VIA SMUGGLERS MODE");
			unk_0x51B096AAC60548C1(1f);
			if (unk_0xE4EDC4B0E92C078B(uParam1->f_14[0]))
			{
				unk_0x142CC44DB769B57E(&(uParam1->f_14[0]));
			}
			if (unk_0xE4EDC4B0E92C078B(uParam1->f_14[1]))
			{
				unk_0x142CC44DB769B57E(&(uParam1->f_14[1]));
			}
			if (unk_0xE4EDC4B0E92C078B(uParam1->f_12[0]))
			{
				unk_0x142CC44DB769B57E(&(uParam1->f_12[0]));
			}
			func_372("RETRIEVE DRUG CHECK COMPLETE - RETURNING TRUE");
			return 1;
			break;
	}
	return 0;
}

void func_223(var uParam0, var uParam1, var uParam2)
{
	if (uParam0->f_23)
	{
		if (!unk_0x437347B10A200C4B((*uParam0)[0], 0) && unk_0xDF1306B443CD3D15((*uParam0)[0], 0))
		{
			vVar1 = { unk_0x68F4C0EC296D3901((*uParam0)[0], true) };
			fVar0 = vdist(vVar1, *uParam1);
		}
		func_224(&fVar0, uParam2);
	}
}

void func_224(float fParam0, var uParam1)
{
	switch (iLocal_3590)
	{
		case 0:
			if (!unk_0xD17F06053799A7CA() && !unk_0x8FA469D9C5F1A01F())
			{
				if (*fParam0 < 1500f)
				{
					if (func_8(uParam1, "ARMSAUD", "ARMS_GR10", 9, 0, 0, 0))
					{
						iLocal_3590++;
					}
				}
			}
			break;
		
		case 1:
			if (*fParam0 < 250f)
			{
				if (func_8(uParam1, "ARMSAUD", "ARMS_GR11", 9, 0, 0, 0))
				{
					iLocal_3590++;
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_225(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_1136)
	{
		if (unk_0xC844350D5D58C99A((*uParam1)[iVar0]) && unk_0xDF1306B443CD3D15((*uParam1)[iVar0], 0))
		{
			iVar1 = 0;
			while (iVar1 < uParam0->f_1137)
			{
				iVar2 = (iVar0 * uParam0->f_1137);
				if (!unk_0xEB6A8945D1AC98A1(uParam1->f_7[(iVar1 + iVar2)]))
				{
					unk_0xE3A2D2E900FEFBE7(uParam1->f_7[(iVar1 + iVar2)], 1);
					unk_0xA3BF0AA5A2608191(uParam1->f_7[(iVar1 + iVar2)]);
					unk_0xE072601B4380E9DF(uParam1->f_7[(iVar1 + iVar2)], (*uParam1)[iVar0], 30f, 786597);
					unk_0x6DAD7906B73F064D(&(uParam1->f_7[(iVar1 + iVar2)]));
					func_372("TASKING SMUGGLERS TO WANDER");
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	unk_0x68FCFE10774F5C97(5, 1862763509, uParam1->f_46);
	unk_0x68FCFE10774F5C97(5, uParam1->f_46, 1862763509);
}

void func_226(var uParam0, var uParam1, int iParam2, var uParam3, char* sParam4, var uParam5, var uParam6)
{
	if (!uParam1->f_37)
	{
		if (func_43(&(uParam1->f_68)))
		{
			if (func_37(&(uParam1->f_68)) > 3f)
			{
				if (!func_46() && !unk_0xD17F06053799A7CA())
				{
					if (uParam1->f_34 || uParam1->f_29)
					{
						if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0x437347B10A200C4B(*iParam2, 0))
						{
							if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), *iParam2, 0))
							{
								func_34("DTRFKGR_03", 7500, 1);
								StringCopy(sParam4, "DTRFKGR_03", 32);
								(*uParam3)[0] = unk_0x6CC513A908911CF0(uParam0->f_218[0].f_110);
								if (unk_0xE4EDC4B0E92C078B((*uParam3)[0]))
								{
									unk_0xDC5B2F9D0CCE3A10((*uParam3)[0], "DTRFKGR_BLIP07");
								}
								*uParam5[0] = { uParam0->f_218[0].f_110 };
							}
						}
					}
					else
					{
						func_34("DTRFKGR_04", 7500, 1);
						StringCopy(sParam4, "DTRFKGR_04", 32);
					}
					uParam1->f_37 = 1;
				}
			}
		}
	}
	if (!iLocal_3582)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			func_45(uParam6, 2, 0, "TREVOR", 0, 1);
			if (!unk_0xD17F06053799A7CA())
			{
				if (func_8(uParam6, "ARMSAUD", "ARMS_PACK", 9, 0, 0, 0))
				{
					if (!func_43(&(uParam1->f_68)))
					{
						func_40(&(uParam1->f_68));
					}
					iLocal_3582 = 1;
				}
			}
		}
	}
}

void func_227(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam2)
	{
		case 0:
			unk_0x523BCC9DC80CD82F(uParam0->f_1140);
			func_372("REQUESTING SMUGGLERS HELI");
			if (unk_0xB87F6CF6E5628C67(uParam0->f_1140))
			{
				*uParam2 = 1;
			}
			break;
		
		case 1:
			uParam1->f_2 = unk_0x122AAB0B1D6F55AD(uParam0->f_1140, uParam0->f_218[1].f_164, uParam0->f_218[1].f_167, true, true, false);
			unk_0xE8832A9E16A57A1F(uParam1->f_2, true, 1);
			unk_0x1E9649458B15960F(uParam1->f_2, true);
			uParam1->f_10 = unk_0x36F2404464202779(22, uParam0->f_1101, unk_0x68E4ADDDDCD7BDDE(uParam1->f_2, 0f, 4f, 0f), 0f, 1, true);
			unk_0x262EF6C6306BEA6C(uParam1->f_10, 736523883, 1000, true, true);
			unk_0xE8832A9E16A57A1F(uParam1->f_10, true, 1);
			unk_0x11AD11297DC58CC7(uParam1->f_10, true);
			unk_0xFADC0A217229F6B5(uParam1->f_10, true);
			unk_0x56FDC9ADE35F7DB0(uParam1->f_2, false, true, 0);
			unk_0xB9FD7450C0DAB575(uParam1->f_2, 1084227584);
			unk_0x71EDC33E5A423750(uParam1->f_2, 3);
			unk_0x6DF7BF67E86AAE86(uParam1->f_10, uParam1->f_46);
			*uParam2 = 2;
			break;
		
		case 2:
			if (!unk_0x437347B10A200C4B(uParam1->f_10, 0))
			{
				vVar0 = { unk_0x68F4C0EC296D3901(uParam1->f_10, true) };
			}
			else
			{
				uParam1->f_35 = 1;
				*uParam2 = 3;
				break;
			}
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (func_203(unk_0x16F2683693E537C9(), vVar0, 1) < 50f)
				{
					unk_0x0C8C0C840C2D1AD2(uParam1->f_10, unk_0x16F2683693E537C9(), -1, 0, 2);
					unk_0x6C3AE6E278DB3D0E(uParam1->f_10, unk_0x16F2683693E537C9(), 0, 16);
					*uParam2 = 3;
				}
			}
			break;
		
		case 3:
			break;
	}
}

void func_228(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_2))
	{
		unk_0xA954465BA6FDEFE2(&(uParam0->f_2));
	}
	if (unk_0xC844350D5D58C99A(uParam0->f_10))
	{
		unk_0xEBA53F35D0085654(&(uParam0->f_10));
	}
}

void func_229(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		unk_0x71EDC33E5A423750(*iParam1, 9);
	}
}

void func_230(var uParam0, var uParam1, int iParam2)
{
	if (uParam0[0]->f_66[*iParam2].f_19)
	{
		if (!unk_0x437347B10A200C4B((*uParam1)[*iParam2], 0))
		{
			if (unk_0xDD4B920CF5E7E9EC((*uParam1)[*iParam2]))
			{
				unk_0x2C17FD7B117DEDF0((*uParam1)[*iParam2]);
			}
		}
	}
	else if (!unk_0x437347B10A200C4B((*uParam1)[*iParam2], 0))
	{
		if (unk_0x20D6474D5F4B9FC6((*uParam1)[*iParam2]))
		{
			unk_0xC55F2A0377488064((*uParam1)[*iParam2]);
			func_372("STOPPING PLAYBACK RECORDING");
		}
	}
}

void func_231(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, int iParam5, var uParam6)
{
	unk_0xC92DB9682A650680("OJDG2_TREV_FIRST");
	unk_0x2F23E8033F1ADDD9("DTRFKGR_06");
	func_234(uParam2, uParam0, *iParam3, 1);
	func_229(*uParam6, iParam3);
	uParam1->f_20[0] = 0;
	if (unk_0xC844350D5D58C99A(uParam1->f_6))
	{
		unk_0xF690C84DADBB3551(&(uParam1->f_6));
	}
	if (unk_0xC844350D5D58C99A(uParam1->f_5))
	{
		unk_0xF690C84DADBB3551(&(uParam1->f_5));
		func_372("DELETING smugArgs.oArmsPackage");
	}
	func_230(uParam0, uParam1, &iParam5);
	if (unk_0xC844350D5D58C99A(iLocal_3607))
	{
		unk_0xF690C84DADBB3551(&iLocal_3607);
		func_372("DELETING oFlareProp VIA SMUGGLERS PLAYER FIRST");
	}
	if (unk_0xE4EDC4B0E92C078B((*uParam4)[0]))
	{
		unk_0x142CC44DB769B57E(uParam4[0]);
		func_372("REMOVING myLocationBlip[0] VIA PLAYER FIRST");
	}
	*uParam6 = 1;
	func_233(iLocal_3354);
	if (Global_111638.f_19978.f_1 == 1)
	{
		unk_0xA21FB76E67A3EE52();
	}
	func_228(uParam1);
}

int func_232(var uParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_5) && !unk_0x437347B10A200C4B(uParam0->f_5, 0))
	{
		if (!unk_0x437347B10A200C4B(*uParam1, 0))
		{
			if (unk_0x1B3D109B39CC2C89(uParam0->f_5, *uParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_233(int iParam0)
{
	if (unk_0x83A8177D302E1A7E(iParam0))
	{
		unk_0xF7E25143642732EA(iParam0, 0);
	}
}

void func_234(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	iVar0 = unk_0x134B62B726CEC8E6(iParam2);
	iVar0 = iVar0;
	func_235(iParam2, iParam0);
	if (unk_0xC844350D5D58C99A(iParam2) && unk_0xDF1306B443CD3D15(iParam2, 0))
	{
		if (!unk_0xC844350D5D58C99A(*iParam0))
		{
			*iParam0 = unk_0x7707E48765093646(uParam1->f_1147, unk_0x68F4C0EC296D3901(iParam2, true), true, true, false);
			unk_0xD0C5FAC38659B26F(*iParam0, 1);
		}
	}
	if (unk_0xC844350D5D58C99A(*iParam0) && unk_0xDF1306B443CD3D15(iParam2, 0))
	{
		unk_0x9F528B1B53FBC5D9(*iParam0, iParam2, 0, iParam0->f_8, iParam0->f_11, 0, 0, 0, 0, 2, 1);
	}
	if (bParam3)
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "PICK_UP_WEAPON", "HUD_FRONTEND_CUSTOM_SOUNDSET", true);
	}
	else
	{
		unk_0xCEAA091B490F8407(-1, "TRAFFIC_GROUND_ENEMY_PICK_UP_WEAPON_MASTER", iParam2, 0, false, 0);
	}
}

void func_235(int iParam0, var uParam1)
{
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	switch (iVar0)
	{
		case -2128233223:
			uParam1->f_8 = { 0f, -1,56f, 0,9f };
			uParam1->f_11 = { 0f, 0f, 0f };
			break;
		
		case -599568815:
			uParam1->f_8 = { 0f, -1,56f, 0,9f };
			uParam1->f_11 = { 0f, 0f, 0f };
			break;
		
		case 914654722:
			uParam1->f_8 = { 0f, -1,56f, 0,4f };
			uParam1->f_11 = { 0f, 0f, 90f };
			break;
		
		case 1177543287:
			uParam1->f_8 = { 0f, -1,56f, 0,9f };
			uParam1->f_11 = { 0f, 0f, 0f };
			break;
		
		case -16948145:
			uParam1->f_8 = { 0f, -1,56f, 0,9f };
			uParam1->f_11 = { 0f, 0f, 0f };
			break;
		
		case 1770332643:
			uParam1->f_8 = { 0f, -1,56f, 0,59f };
			uParam1->f_11 = { 0f, 0f, 0f };
			break;
		
		case -1661854193:
			uParam1->f_8 = { 0,3f, 0,35f, 0,04f };
			uParam1->f_11 = { 0f, 0f, 90f };
			break;
		
		case -1207771834:
			uParam1->f_8 = { 0f, -2f, 0,5f };
			uParam1->f_11 = { 0f, 0f, 90f };
			func_372("USING REBEL OFFSETS");
			break;
	}
	func_372("GRABBED OFFSETS FOR VEHICLE MODEL");
}

int func_236(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam2)
	{
		case 0:
			if (uParam0[0]->f_66[1].f_18)
			{
				if (uParam0[0]->f_66[1] == 1)
				{
					unk_0x523BCC9DC80CD82F(uParam0[0]->f_66[1].f_1);
					unk_0x523BCC9DC80CD82F(iLocal_3377);
					unk_0x523BCC9DC80CD82F(iLocal_3378);
					unk_0x3F423BF5B8125A50("p_cargo_chute_s");
					func_372("REQUESTING CARGO AND PARACHUTE AND ANIMATION");
					unk_0x36187931D29E5BBE(uParam0[0]->f_66[1].f_2, uParam0[0]->f_66[1].f_3);
				}
			}
			if (uParam0[0]->f_66[1].f_18)
			{
				if (uParam0[0]->f_66[1] == 1)
				{
					if ((((unk_0x3DDA6C6A285628E4(uParam0[0]->f_66[1].f_2, uParam0[0]->f_66[1].f_3) && unk_0xB87F6CF6E5628C67(uParam0[0]->f_66[1].f_1)) && unk_0xB87F6CF6E5628C67(iLocal_3378)) && unk_0xB87F6CF6E5628C67(iLocal_3377)) && unk_0xB4AE0788C1587752("p_cargo_chute_s"))
					{
						func_372("GOING TO STATE - SMUGGLER_PLANE_STATE_01");
						*uParam2 = 1;
					}
					else
					{
						if (unk_0x3DDA6C6A285628E4(uParam0[0]->f_66[1].f_2, uParam0[0]->f_66[1].f_3))
						{
						}
						if (unk_0xB87F6CF6E5628C67(uParam0[0]->f_66[1].f_1))
						{
						}
						if (unk_0xB87F6CF6E5628C67(iLocal_3378))
						{
						}
						if (unk_0xB87F6CF6E5628C67(iLocal_3377))
						{
						}
						if (unk_0xB4AE0788C1587752("p_cargo_chute_s"))
						{
						}
					}
				}
			}
			break;
		
		case 1:
			uParam1->f_4 = unk_0x122AAB0B1D6F55AD(uParam0[0]->f_66[1].f_1, uParam0[0]->f_66[1].f_5, 0f, true, true, false);
			iLocal_3609 = unk_0x852A19533F896693(uParam1->f_4, 22, uParam0->f_1101, -1, 1, true);
			unk_0x11AD11297DC58CC7(iLocal_3609, true);
			unk_0x71199B01895C6202(uParam0->f_1101);
			unk_0xD0C5FAC38659B26F(uParam1->f_4, 1);
			unk_0xE121AE1BBF90E186(uParam1->f_4, true);
			unk_0x1E9649458B15960F(uParam1->f_4, true);
			unk_0x56FDC9ADE35F7DB0(uParam1->f_4, true, true, 0);
			unk_0xB422445CBCD0AEFB(uParam1->f_4, false);
			unk_0x25BD67336EA4AECE(uParam1->f_4, 1000);
			unk_0xB58CA658A628ED02(uParam1->f_4, 3);
			unk_0x411CC4F26F6C1C2E(uParam1->f_4);
			uParam1->f_5 = unk_0x7707E48765093646(iLocal_3377, uParam0[0]->f_66[1].f_5, true, true, false);
			unk_0xD0C5FAC38659B26F(uParam1->f_5, 1);
			unk_0x25BD67336EA4AECE(uParam1->f_5, 1000);
			unk_0x272295383B6513AB(uParam1->f_5, 1);
			unk_0x4A4806F9D471E491(uParam1->f_5, false, 0);
			if (!unk_0x437347B10A200C4B(uParam1->f_5, 0))
			{
				uParam1->f_6 = unk_0x7707E48765093646(iLocal_3378, uParam0[0]->f_66[1].f_5, true, true, false);
				unk_0x9F528B1B53FBC5D9(uParam1->f_6, uParam1->f_5, 0, vLocal_3355, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				unk_0xD0C5FAC38659B26F(uParam1->f_6, 1);
				unk_0x25BD67336EA4AECE(uParam1->f_6, 1000);
				unk_0x272295383B6513AB(uParam1->f_6, 1);
				unk_0x4A4806F9D471E491(uParam1->f_6, false, 0);
			}
			if (!unk_0x437347B10A200C4B(uParam1->f_4, 0))
			{
				unk_0x9F528B1B53FBC5D9(uParam1->f_5, uParam1->f_4, 0, 0f, -1,64f, -0,48f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
			func_372("INSIDE STATE - SMUGGLER_PLANE_STATE_01");
			*uParam2 = 2;
			break;
		
		case 2:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0xDF1306B443CD3D15((*uParam1)[0], 0))
			{
				if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), uParam0[0]->f_168, uParam0[0]->f_66[1].f_8, false, true, 0) || unk_0x5A91F08DF773C39D((*uParam1)[0], uParam0[0]->f_168, uParam0[0]->f_66[1].f_8, false, true, 0))
				{
					if (unk_0xC844350D5D58C99A(uParam1->f_4) && unk_0xDF1306B443CD3D15(uParam1->f_4, 0))
					{
						if (!unk_0x20D6474D5F4B9FC6(uParam1->f_4))
						{
							if (uParam0[0]->f_66[1] == 1)
							{
								unk_0x1E9649458B15960F(uParam1->f_4, false);
								unk_0xA47B46945FF6DE74(uParam1->f_4, uParam0[0]->f_66[1].f_5, 1, false, 0, 1);
								unk_0xC4C7FD0EF3FEAB0B(uParam1->f_4, uParam0[0]->f_66[1].f_11, uParam0[0]->f_66[1].f_12, uParam0[0]->f_66[1].f_13, uParam0[0]->f_66[1].f_14);
								unk_0x4D3C3C0B0DE2663E(uParam1->f_4, uParam0[0]->f_66[1].f_2, uParam0[0]->f_66[1].f_3, 1);
								unk_0xA9FBE21EB8701B34(uParam1->f_4, 1,2f);
								func_372("STARTING PLAYBACK ON SMUGGLERS PLANE");
								unk_0x8BC9595FD2792B5D("PLANE_FLY_OVER_SCENE");
								*uParam2 = 3;
							}
						}
					}
				}
			}
			else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), uParam0[0]->f_168, uParam0[0]->f_66[1].f_8, false, true, 0))
				{
					if (unk_0xC844350D5D58C99A(uParam1->f_4) && unk_0xDF1306B443CD3D15(uParam1->f_4, 0))
					{
						if (!unk_0x20D6474D5F4B9FC6(uParam1->f_4))
						{
							if (uParam0[0]->f_66[1] == 1)
							{
								unk_0x1E9649458B15960F(uParam1->f_4, false);
								unk_0xA47B46945FF6DE74(uParam1->f_4, uParam0[0]->f_66[1].f_5, 1, false, 0, 1);
								unk_0xC4C7FD0EF3FEAB0B(uParam1->f_4, uParam0[0]->f_66[1].f_11, uParam0[0]->f_66[1].f_12, uParam0[0]->f_66[1].f_13, uParam0[0]->f_66[1].f_14);
								unk_0x4D3C3C0B0DE2663E(uParam1->f_4, uParam0[0]->f_66[1].f_2, uParam0[0]->f_66[1].f_3, 1);
								unk_0xA9FBE21EB8701B34(uParam1->f_4, 1,2f);
								func_372("STARTING PLAYBACK ON SMUGGLERS PLANE");
								*uParam2 = 3;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (unk_0xDF1306B443CD3D15(uParam1->f_4, 0))
			{
				if (unk_0x20D6474D5F4B9FC6(uParam1->f_4))
				{
					fVar0 = unk_0x7B694C942A404ABF(uParam1->f_4);
					if (fVar0 > uParam0[0]->f_66[1].f_17)
					{
						func_372("DROPPING PACKAGE");
						unk_0x15AFB6CBDE990FB6(uParam1->f_5, 1, true);
						unk_0xE8832A9E16A57A1F(uParam1->f_5, true, 1);
						if (!unk_0xE4EDC4B0E92C078B(uParam1->f_19))
						{
							func_233(iLocal_3354);
							uParam1->f_19 = unk_0x5C3B41825F6AC5A0(uParam1->f_5);
							unk_0x61755AC17D8F538E(uParam1->f_19, 2);
							func_34("DTRFKGR_06", 7500, 1);
							if (unk_0xE4EDC4B0E92C078B((*uParam3)[0]))
							{
								unk_0x142CC44DB769B57E(uParam3[0]);
							}
						}
						unk_0x4A4806F9D471E491(uParam1->f_5, true, 0);
						unk_0x4A4806F9D471E491(uParam1->f_6, true, 0);
						if (!unk_0x437347B10A200C4B(uParam1->f_6, 0))
						{
							unk_0xD65E6E13E145467B(uParam1->f_6, "p_cargo_chute_s_deploy", "p_cargo_chute_s", 1f, false, true, 0, 0f, 0);
						}
						func_372("STARTING PLAYBACK ON SMUGGLERS PLANE");
						*uParam2 = 4;
					}
				}
			}
			break;
		
		case 4:
			if (unk_0xC844350D5D58C99A(uParam1->f_5))
			{
				unk_0xE8832A9E16A57A1F(uParam1->f_5, true, 1);
				if (!unk_0xD59B17D2DFF98E26(uParam1->f_5))
				{
					if (unk_0xE608C809F9416F00(uParam1->f_5))
					{
						unk_0x1E9649458B15960F(uParam1->f_5, true);
						uParam1->f_42 = 1;
						unk_0xD65E6E13E145467B(uParam1->f_6, "p_cargo_chute_s_crumple", "p_cargo_chute_s", 0,5f, false, true, 0, 0f, 0);
						if (!func_43(&(uParam1->f_65)))
						{
							func_40(&(uParam1->f_65));
						}
						*uParam2 = 5;
					}
				}
			}
			break;
		
		case 5:
			if (!uParam1->f_40)
			{
				if (unk_0xC844350D5D58C99A(uParam1->f_5))
				{
					unk_0x1E9649458B15960F(uParam1->f_5, false);
					unk_0xDFC6BA855748EB10(uParam1->f_5, 1, 0f, 0f, 0f, 0f, 0f, 0,2f, 0, 1, 1, 1, 0, 1);
					uParam1->f_40 = 1;
				}
			}
			if (unk_0xC844350D5D58C99A(uParam1->f_6))
			{
				if (func_43(&(uParam1->f_65)))
				{
					if (func_37(&(uParam1->f_65)) > 1f)
					{
						if (unk_0xC844350D5D58C99A(uParam1->f_5))
						{
							unk_0x1E9649458B15960F(uParam1->f_5, true);
						}
						unk_0xF690C84DADBB3551(&(uParam1->f_6));
						*uParam2 = 6;
					}
				}
			}
			break;
		
		case 6:
			unk_0x71199B01895C6202(886894755);
			unk_0x71199B01895C6202(-2071229766);
			unk_0x8D17794CE3273D70("p_cargo_chute_s");
			unk_0xDB8844D4B7C60440(uParam0[0]->f_66[1].f_2, uParam0[0]->f_66[1].f_3);
			if (unk_0xC844350D5D58C99A(uParam1->f_4))
			{
				if (unk_0xDF1306B443CD3D15(uParam1->f_4, 0))
				{
					if (!unk_0x20D6474D5F4B9FC6(uParam1->f_4))
					{
						unk_0x8910D3D58E0132B8("PLANE_FLY_OVER_SCENE");
						unk_0x046C362CF15F1935(&(uParam1->f_4));
						unk_0x71199B01895C6202(-644710429);
						*uParam2 = 7;
					}
					else
					{
						fVar0 = unk_0x7B694C942A404ABF(uParam1->f_4);
						if (!unk_0x0A059E0DB9253280(uParam1->f_4))
						{
							unk_0x8910D3D58E0132B8("PLANE_FLY_OVER_SCENE");
							unk_0xEBA53F35D0085654(&iLocal_3609);
							unk_0xA954465BA6FDEFE2(&(uParam1->f_4));
							unk_0x71199B01895C6202(-644710429);
							*uParam2 = 7;
						}
					}
				}
			}
			break;
		
		case 7:
			break;
	}
	return 0;
}

void func_237(var uParam0, var uParam1)
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	}
	if (!unk_0x437347B10A200C4B((*uParam0)[0], 0))
	{
		vVar3 = { unk_0x68F4C0EC296D3901((*uParam0)[0], true) };
	}
	if (!iLocal_3586)
	{
		if (vdist2(vVar0, vVar3) < 1225f && unk_0x0A059E0DB9253280((*uParam0)[0]))
		{
			if (func_8(uParam1, "ARMSAUD", "ARMS_SIGHT", 9, 1, 0, 0))
			{
				iLocal_3586 = 1;
			}
		}
	}
}

void func_238(var uParam0)
{
	if (Global_111638.f_19978.f_1 != 1)
	{
		func_291(&(uParam0[0]->f_107), 0);
	}
	iLocal_3607 = unk_0x7707E48765093646(445804908, uParam0[0]->f_107, true, true, false);
}

void func_239(var uParam0, var uParam1, var uParam2)
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	}
	if (!func_43(&iLocal_3604))
	{
		func_40(&iLocal_3604);
	}
	if (func_37(&iLocal_3604) > 1f)
	{
		fLocal_3570 = vdist(vVar1, *uParam2);
		iVar0 = 0;
		while (iVar0 < uParam0->f_1136)
		{
			if (unk_0xC844350D5D58C99A((*uParam1)[iVar0]) && unk_0xDF1306B443CD3D15((*uParam1)[iVar0], 0))
			{
				if (unk_0x20D6474D5F4B9FC6((*uParam1)[iVar0]))
				{
					vVar4[iVar0] = { unk_0x68F4C0EC296D3901((*uParam1)[iVar0], true) };
					fLocal_3571 = vdist(vVar4[iVar0], *uParam2);
					fLocal_3572 = vdist(vVar4[iVar0], vVar1);
					if (func_242(&iVar0, uParam1))
					{
						unk_0xA9FBE21EB8701B34((*uParam1)[iVar0], 0,65f);
						func_372("SETTING PLAYBACK SPEED = 0.65 DUE TO DAMAGE TO TIRES");
						uParam1->f_33 = 0;
						return;
					}
					if (fLocal_3572 < 10f)
					{
						if (unk_0x0A059E0DB9253280((*uParam1)[iVar0]))
						{
							uParam1->f_32 = 1;
						}
						else
						{
							uParam1->f_32 = 0;
						}
					}
					else
					{
						uParam1->f_32 = 0;
					}
					if (fLocal_3571 < 150f)
					{
						unk_0xA9FBE21EB8701B34((*uParam1)[iVar0], (uParam0[0]->f_66[0].f_15 + 0,5f));
						uParam1->f_31 = 1;
					}
					else
					{
						uParam1->f_31 = 0;
					}
					if (!uParam1->f_32 && !uParam1->f_31)
					{
						if (uParam1->f_23)
						{
							func_241(uParam0, uParam1, &iVar0);
						}
						else
						{
							func_240(uParam0, uParam1, &iVar0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	else if (func_37(&iLocal_3604) >= 2f)
	{
		func_41(&iLocal_3604);
	}
}

void func_240(var uParam0, var uParam1, int iParam2)
{
	if (fLocal_3570 > fLocal_3571)
	{
		unk_0xA9FBE21EB8701B34((*uParam1)[*iParam2], uParam0[0]->f_66[0].f_15);
	}
	else if (fLocal_3571 > (fLocal_3570 + 50f) && !unk_0x0A059E0DB9253280((*uParam1)[*iParam2]))
	{
		unk_0xA9FBE21EB8701B34((*uParam1)[*iParam2], (uParam0[0]->f_66[0].f_15 + 0,6f));
	}
	else
	{
		unk_0xA9FBE21EB8701B34((*uParam1)[*iParam2], (uParam0[0]->f_66[0].f_15 + 0,4f));
	}
}

void func_241(var uParam0, var uParam1, int iParam2)
{
	if (fLocal_3570 > fLocal_3571)
	{
		if (!fLocal_3572 > 75f)
		{
			unk_0xA9FBE21EB8701B34((*uParam1)[*iParam2], (uParam0[0]->f_66[0].f_15 * uParam0[0]->f_66[0].f_16));
		}
		else if (!unk_0x0A059E0DB9253280((*uParam1)[*iParam2]) || unk_0x03068588A1FCED1A((*uParam1)[*iParam2]))
		{
			unk_0xA9FBE21EB8701B34((*uParam1)[*iParam2], (uParam0[0]->f_66[0].f_15 - 0,2f));
		}
	}
}

int func_242(int iParam0, var uParam1)
{
	if (((unk_0x464B3D84B739AE72((*uParam1)[*iParam0], 0, 0) || unk_0x464B3D84B739AE72((*uParam1)[*iParam0], 1, 0)) || unk_0x464B3D84B739AE72((*uParam1)[*iParam0], 4, 0)) || unk_0x464B3D84B739AE72((*uParam1)[*iParam0], 5, 0))
	{
		return 1;
	}
	return 0;
}

void func_243(var uParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	if (!unk_0x437347B10A200C4B((*uParam1)[0], 0))
	{
		iVar8 = unk_0xA30B8362589C124A((*uParam1)[0], -1, 0);
	}
	iVar8 = iVar8;
	uParam0[0]->f_66[0].f_4 = uParam0[0]->f_66[0].f_4;
	if (!unk_0x437347B10A200C4B(*iParam2, 0) && unk_0xDF1306B443CD3D15(*iParam2, 0))
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), *iParam2, 0))
			{
				fVar1 = unk_0xD890711CFD5AF100(*iParam2);
				fVar1 = fVar1;
			}
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		vVar2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	}
	fLocal_3570 = vdist(vVar2, *uParam3);
	vVar5 = { unk_0x68F4C0EC296D3901((*uParam1)[0], true) };
	fLocal_3571 = vdist(vVar5, *uParam3);
	fLocal_3572 = vdist(vVar5, vVar2);
	if (!unk_0x437347B10A200C4B((*uParam1)[0], 0) && unk_0xDF1306B443CD3D15((*uParam1)[0], 0))
	{
		fVar0 = unk_0x9C66D99E63E8E24C((*uParam1)[0]);
		fVar0 = fVar0;
	}
	if (!uParam1->f_23)
	{
		if (fLocal_3571 < 200f)
		{
			if (!unk_0xEB6A8945D1AC98A1(uParam1->f_7[0]))
			{
				if (unk_0xC42A92762C58E1B9(uParam1->f_7[0], (*uParam1)[0], 0))
				{
					unk_0x06736587AE5BE33B(uParam1->f_7[0], 50f);
					uParam1->f_31 = 1;
				}
			}
		}
		else
		{
			uParam1->f_31 = 0;
		}
	}
	if (bParam4)
	{
		if (!uParam1->f_31)
		{
			if (fLocal_3570 > fLocal_3571)
			{
				if ((!unk_0x437347B10A200C4B((*uParam1)[0], 0) && unk_0xDF1306B443CD3D15((*uParam1)[0], 0)) && !unk_0xEB6A8945D1AC98A1(uParam1->f_7[0]))
				{
					if (unk_0xC42A92762C58E1B9(uParam1->f_7[0], (*uParam1)[0], 0))
					{
						unk_0x06736587AE5BE33B(uParam1->f_7[0], 30f);
					}
				}
			}
			else if ((!unk_0x437347B10A200C4B((*uParam1)[0], 0) && unk_0xDF1306B443CD3D15((*uParam1)[0], 0)) && !unk_0xEB6A8945D1AC98A1(uParam1->f_7[0]))
			{
				if (unk_0xC42A92762C58E1B9(uParam1->f_7[0], (*uParam1)[0], 0))
				{
					unk_0x06736587AE5BE33B(uParam1->f_7[0], 50f);
				}
			}
		}
	}
	else if (fLocal_3570 > fLocal_3571)
	{
		if ((!unk_0x437347B10A200C4B((*uParam1)[0], 0) && unk_0xDF1306B443CD3D15((*uParam1)[0], 0)) && !unk_0xEB6A8945D1AC98A1(uParam1->f_7[0]))
		{
			if (unk_0xC42A92762C58E1B9(uParam1->f_7[0], (*uParam1)[0], 0))
			{
				unk_0x06736587AE5BE33B(uParam1->f_7[0], 25f);
			}
		}
	}
}

int func_244(var uParam0, var uParam1, var uParam2)
{
	bVar4 = true;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1136)
	{
		if (unk_0xDF1306B443CD3D15((*uParam1)[iVar0], 0) && !unk_0x7B5606C651AB51B5((*uParam1)[iVar0], 0, 3000))
		{
			iVar1 = 0;
			while (iVar1 < uParam0->f_1137)
			{
				iVar2 = (iVar0 * uParam0->f_1137);
				if (!unk_0x437347B10A200C4B(uParam1->f_7[(iVar1 + iVar2)], 0))
				{
					bVar4 = false;
				}
				else if (unk_0xE4EDC4B0E92C078B(uParam1->f_14[(iVar1 + iVar2)]))
				{
					unk_0x142CC44DB769B57E(&(uParam1->f_14[(iVar1 + iVar2)]));
					func_372("REMOVING BLIPS ON SMUGGLER PEDS");
				}
				iVar1++;
			}
			if (!unk_0x437347B10A200C4B((*uParam1)[iVar0], 0))
			{
				iVar5 = unk_0xA30B8362589C124A((*uParam1)[iVar0], -1, 0);
			}
			if (unk_0xEB6A8945D1AC98A1(iVar5))
			{
				func_230(uParam0, uParam1, &iVar0);
				if (!bLocal_3575)
				{
					if (func_221((*uParam1)[iVar0], 1069547520))
					{
						iVar1 = 0;
						while (iVar1 < uParam0->f_1137)
						{
							iVar2 = (iVar0 * uParam0->f_1137);
							unk_0x11AD11297DC58CC7(uParam1->f_7[1], true);
							if (unk_0xC844350D5D58C99A(uParam1->f_7[(iVar1 + iVar2)]) && !unk_0x437347B10A200C4B((*uParam1)[iVar0], 0))
							{
								if (unk_0xEB6A8945D1AC98A1(unk_0xA30B8362589C124A((*uParam1)[iVar0], -1, 0)))
								{
									if (!unk_0x437347B10A200C4B((*uParam1)[iVar0], 0) && !unk_0x437347B10A200C4B(unk_0xA30B8362589C124A((*uParam1)[iVar0], 0, 0), 0))
									{
										if (unk_0xD1960163A3042274(unk_0xA30B8362589C124A((*uParam1)[iVar0], 0, 0), 355471868) != 1)
										{
											unk_0x16A6C233289238AA(unk_0xA30B8362589C124A((*uParam1)[iVar0], 0, 0), (*uParam1)[iVar0], 0);
											bLocal_3575 = true;
										}
									}
								}
							}
							iVar1++;
						}
					}
				}
			}
			else if (bLocal_3575)
			{
				iVar5 = unk_0xA30B8362589C124A((*uParam1)[iVar0], -1, 0);
				if (iVar5 != unk_0x16F2683693E537C9())
				{
					if (unk_0xD1960163A3042274(iVar5, -235832601) != 1)
					{
						unk_0x1B901F542DF070CF(iVar5, (*uParam1)[iVar0], uParam0[0]->f_66[iVar0].f_4, 262144, 0, 24, -1, -1f, 0, 1073741824);
					}
				}
			}
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < uParam0->f_1137)
			{
				iVar2 = (iVar0 * uParam0->f_1137);
				if (unk_0xE4EDC4B0E92C078B(uParam1->f_12[0]))
				{
					unk_0x142CC44DB769B57E(&(uParam1->f_12[0]));
				}
				if (!unk_0xE4EDC4B0E92C078B(uParam1->f_14[(iVar1 + iVar2)]))
				{
					uParam1->f_14[(iVar1 + iVar2)] = unk_0x5C3B41825F6AC5A0(uParam1->f_7[(iVar1 + iVar2)]);
					unk_0x516E63E474722206(uParam1->f_14[(iVar1 + iVar2)], 0,7f);
					unk_0x61755AC17D8F538E(uParam1->f_14[(iVar1 + iVar2)], 1);
				}
				if (unk_0x437347B10A200C4B(uParam1->f_7[(iVar1 + iVar2)], 0))
				{
					if (unk_0xE4EDC4B0E92C078B(uParam1->f_14[(iVar1 + iVar2)]))
					{
						unk_0x142CC44DB769B57E(&(uParam1->f_14[(iVar1 + iVar2)]));
						func_372("REMOVING BLIPS ON SMUGGLER PEDS");
					}
				}
				else
				{
					if (!uParam1->f_43[(iVar1 + iVar2)])
					{
						unk_0xF82EA857DA10E0CD(&iVar3);
						unk_0xDD353D0E9C789D0E(&iVar3);
						unk_0x75CDA8644CD3B5F5(0, 0, 0);
						unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
						unk_0x75ABDC5F81978924(iVar3);
						unk_0x78ADC381772E3D54(uParam1->f_7[(iVar1 + iVar2)], iVar3);
						unk_0xF82EA857DA10E0CD(&iVar3);
						uParam1->f_43[(iVar1 + iVar2)] = 1;
					}
					bVar4 = false;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	if (bVar4)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1136)
		{
			if (unk_0xE4EDC4B0E92C078B(uParam1->f_12[iVar0]))
			{
				unk_0x142CC44DB769B57E(&(uParam1->f_12[iVar0]));
				func_372("REMOVING blipSmugglersCars 02");
			}
			func_230(uParam0, uParam1, &iVar0);
			iVar0++;
		}
		iLocal_3583 = 1;
		iLocal_3583 = iLocal_3583;
		if (!iLocal_3587)
		{
			if (!iLocal_3584)
			{
				iVar6 = (unk_0x09AC81E49EA267F7(0, 65535) % 6);
				if (iVar6 == 0)
				{
					if (func_8(uParam2, "ARMSAUD", "ARMS_KILL01", 9, 1, 0, 0))
					{
						iLocal_3584 = 1;
					}
				}
				else if (iVar6 == 1)
				{
					if (func_8(uParam2, "ARMSAUD", "ARMS_KILL02", 9, 1, 0, 0))
					{
						iLocal_3584 = 1;
					}
				}
				else if (iVar6 == 2)
				{
					if (func_8(uParam2, "ARMSAUD", "ARMS_KILL03", 9, 1, 0, 0))
					{
						iLocal_3584 = 1;
					}
				}
				else if (iVar6 == 3)
				{
					if (func_8(uParam2, "ARMSAUD", "ARMS_KILL04", 9, 1, 0, 0))
					{
						iLocal_3584 = 1;
					}
				}
				else if (iVar6 == 4)
				{
					if (func_8(uParam2, "ARMSAUD", "ARMS_KILL05", 9, 1, 0, 0))
					{
						iLocal_3584 = 1;
					}
				}
				else if (iVar6 == 5)
				{
					if (func_8(uParam2, "ARMSAUD", "ARMS_KILL06", 9, 1, 0, 0))
					{
						iLocal_3584 = 1;
					}
				}
			}
		}
		func_372("RETURING TRUE ON SMUGGLER_PED_DEAD_CHECK");
		return 1;
	}
	return 0;
}

int func_245(var uParam0, var uParam1)
{
	if (iLocal_3579)
	{
		return 0;
	}
	if ((((func_246(uParam1->f_7[0], (*uParam1)[0], &uLocal_3593, &uLocal_3600, 0, 1, 0, 1, 1) || func_246(uParam1->f_7[1], (*uParam1)[0], &uLocal_3593, &uLocal_3600, 0, 1, 0, 1, 1)) || uParam1->f_24) || uParam1->f_39) || uParam1->f_23)
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_1137)
		{
			iVar2 = (iVar0 * uParam0->f_1137);
			if (!unk_0x437347B10A200C4B(uParam1->f_7[(iVar1 + iVar2)], 0))
			{
				unk_0x6DF7BF67E86AAE86(uParam1->f_7[(iVar1 + iVar2)], uParam1->f_46);
				if (!unk_0x437347B10A200C4B((*uParam1)[0], 0))
				{
					iVar3 = unk_0xA30B8362589C124A((*uParam1)[0], 0, 0);
				}
				if (unk_0xC844350D5D58C99A(iVar3) && !unk_0x437347B10A200C4B(iVar3, 0))
				{
					unk_0x6C3AE6E278DB3D0E(iVar3, unk_0x16F2683693E537C9(), 0, 16);
				}
			}
			iVar1++;
		}
		iLocal_3579 = 1;
		return 1;
	}
	return 0;
}

int func_246(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	iVar0 = unk_0x16F2683693E537C9();
	if (!unk_0x437347B10A200C4B(iVar0, 0) && !unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (!func_254(*uParam2, 1))
		{
			if (func_253(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_254(*uParam2, 2))
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_254(*uParam2, 4))
		{
			if (func_251(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_254(*uParam2, 8))
		{
			if (func_250(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_254(*uParam2, 128);
		if (bParam4)
		{
			if (func_247(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_254(*uParam2, 16))
		{
			if (func_247(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (iParam7 && unk_0xB87D13D0C064E9D1(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_247(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3)
	{
		if (!bLocal_3557)
		{
			iLocal_3558 = unk_0x7F6DC62EA9922664(iParam0);
			bLocal_3557 = true;
		}
		iLocal_3559 = unk_0x7F6DC62EA9922664(iParam0);
		iLocal_3560 = (iLocal_3558 - iLocal_3559);
		iVar0 = unk_0x728870EB733D12A1();
		if (!unk_0x437347B10A200C4B(iVar0, 0))
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_3560) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_3557)
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 1))
			{
				if (IntToFloat(iLocal_3560) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0x728870EB733D12A1();
		if (!unk_0x437347B10A200C4B(iVar1, 0))
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			if (unk_0x36646919F20EAFFC(iParam0))
			{
				if (unk_0x710D117BA581D7D2(iParam0) == unk_0x16F2683693E537C9())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
		{
			if (unk_0x5A91F08DF773C39D(iParam0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (unk_0x1A069ED4E9BDE50A(unk_0xD803B885F5E47A62()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xE9B814896D415EDD(unk_0x16F2683693E537C9()))
	{
		if (unk_0xC021B60D52071374(iParam0))
		{
			return 1;
		}
	}
	if (func_249(unk_0x16F2683693E537C9(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x869EFD0BC0868856(iParam0) && func_248(iParam0, 1) < 1,5f)
		{
			return 1;
		}
		else if (unk_0x405E212DDE472467(iParam0, 0))
		{
			if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), unk_0x6937EA2286828455(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iParam0))
		{
			return 1;
		}
		if (!unk_0x437347B10A200C4B(iParam1, 0))
		{
			if (unk_0xB87D13D0C064E9D1(iParam1, unk_0x16F2683693E537C9(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_248(int iParam0, bool bParam1)
{
	return func_159(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), iParam0, bParam1);
}

int func_249(int iParam0, int iParam1)
{
	unk_0xCAE036C45E7FC720(iParam0, &iVar0, 1);
	if (iVar0 == 883325847)
	{
		if (unk_0x168558745A6AC21E(iParam0))
		{
			if (vdist(unk_0x68F4C0EC296D3901(iParam0, true), unk_0x68F4C0EC296D3901(iParam1, true)) < 2,5f)
			{
				if (unk_0x7069CC4DE1EA3FAA(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_250(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x03A10A5707B2BB1F(iParam0, 4))
	{
		if (unk_0x168558745A6AC21E(iParam0) && !unk_0x52AE17073D025311(iParam0))
		{
			if (unk_0x5A91F08DF773C39D(iParam1, unk_0x68F4C0EC296D3901(iParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_251(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	iVar3 = 0;
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam1, true) };
	}
	if (unk_0xD3DCEC81D13AAFB1(vVar0, 4f, 1))
	{
		return 1;
	}
	if (unk_0xD15F544473A95FE8(vVar0, to_float(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x03A10A5707B2BB1F(iParam0, 2))
	{
		if (unk_0x168558745A6AC21E(iParam0))
		{
			if (unk_0x5A91F08DF773C39D(iParam1, unk_0x68F4C0EC296D3901(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (unk_0x7069CC4DE1EA3FAA(unk_0x940C1429253D3B1B(iParam1), iParam0, 120f) && unk_0xF649DD3BF44195C7(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x405E212DDE472467(unk_0x940C1429253D3B1B(iParam1), 0))
			{
				iVar3 = unk_0x6937EA2286828455(unk_0x940C1429253D3B1B(iParam1), 0);
			}
			if (unk_0xFB275CE013F3A38C(iParam0) || func_252(iVar3))
			{
				if (unk_0x5A91F08DF773C39D(iParam1, unk_0x68F4C0EC296D3901(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (unk_0x7069CC4DE1EA3FAA(unk_0x940C1429253D3B1B(iParam1), iParam0, 120f) && unk_0xF649DD3BF44195C7(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x723EE7F83DF1497D((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_252(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (unk_0xA30B8362589C124A(iParam0, -1, 0) != 0)
			{
				if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 1))
				{
					if (iVar0 == 741814745)
					{
						if (func_159(unk_0x16F2683693E537C9(), iParam0, 1) < 40f)
						{
							if (unk_0x38AF5DD0BDDE9545(unk_0xD803B885F5E47A62(), &iVar1))
							{
								if ((unk_0xE2F1E99DD161A861(iVar1) && unk_0x96A5FE5834B81CE7(iVar1) == iParam0) || (unk_0xEC560E589DF8370E(iVar1) && unk_0x940C1429253D3B1B(iVar1) == unk_0xA30B8362589C124A(iParam0, -1, 0)))
								{
									if ((unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()) && unk_0x06F8112AA79C53D9(0, 24)) || (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && unk_0x06F8112AA79C53D9(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_253(int iParam0, var uParam1)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 6))
		{
			if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
			{
				if (unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), 90f))
				{
					if (func_248(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x1C0640BA9A7327B3();
						}
						else if ((unk_0x1C0640BA9A7327B3() - uParam1->f_1) > uParam1->f_3)
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

bool func_254(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_255(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (bLocal_3576)
	{
		if (*uParam1 > 0 && *uParam1 < 6)
		{
			if (*uParam3)
			{
				if (unk_0xE4EDC4B0E92C078B(uParam0->f_12[0]))
				{
					unk_0x142CC44DB769B57E(&(uParam0->f_12[0]));
					func_372("REMOVING SMUGGLER'S BLIP DUE TO BEING WANTED");
				}
			}
			else if (!*uParam2)
			{
				if (unk_0xDF1306B443CD3D15((*uParam0)[0], 0))
				{
					if (unk_0xC844350D5D58C99A((*uParam0)[0]))
					{
						if (!unk_0xE4EDC4B0E92C078B(uParam0->f_12[0]))
						{
							if (!unk_0x437347B10A200C4B(uParam0->f_7[0], 0) && !unk_0x437347B10A200C4B(uParam0->f_7[1], 0))
							{
								uParam0->f_12[0] = unk_0x5C3B41825F6AC5A0((*uParam0)[0]);
								unk_0x61755AC17D8F538E(uParam0->f_12[0], 1);
								unk_0xDC5B2F9D0CCE3A10(uParam0->f_12[0], "DTRFKGR_BLIP03");
								func_372("ADDING BACK IN SMUGGLER'S BLIP DUE TO PLAYER LOSING WANTED LEVEL");
							}
						}
					}
				}
			}
		}
	}
}

void func_256(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (bLocal_3576)
	{
		if (*uParam3)
		{
			if (!*uParam2)
			{
				if (unk_0xC844350D5D58C99A((*uParam0)[0]))
				{
					if (!unk_0xE4EDC4B0E92C078B(uParam0->f_12[0]))
					{
						if (!unk_0x437347B10A200C4B(uParam0->f_7[0], 0) || !unk_0x437347B10A200C4B(uParam0->f_7[1], 0))
						{
							if (unk_0xC42A92762C58E1B9(uParam0->f_7[0], (*uParam0)[0], 0) || unk_0xC42A92762C58E1B9(uParam0->f_7[1], (*uParam0)[0], 0))
							{
								uParam0->f_12[0] = unk_0x5C3B41825F6AC5A0((*uParam0)[0]);
								unk_0x61755AC17D8F538E(uParam0->f_12[0], 1);
								unk_0xDC5B2F9D0CCE3A10(uParam0->f_12[0], "DTRFKGR_BLIP03");
							}
						}
					}
				}
			}
		}
	}
}

void func_257(var uParam0, var uParam1, var uParam2)
{
	if (!*uParam2)
	{
		unk_0xF63400DBE3303D26("SmugglerEnemies", &(uParam1->f_46));
		unk_0x0E2400AB9174FA81(5, 1862763509, uParam1->f_46);
		unk_0x0E2400AB9174FA81(5, uParam1->f_46, 1862763509);
		func_372("SETTING SMUGGLERS RELATIONSHIP GROUPS");
		iVar0 = 0;
		while (iVar0 < uParam0->f_1136)
		{
			(*uParam1)[iVar0] = unk_0x122AAB0B1D6F55AD(uParam0->f_1138[iVar0], uParam0[0]->f_158[iVar0], uParam0[0]->f_162[iVar0], true, true, false);
			func_258(uParam0, uParam1, iVar0);
			unk_0xE8832A9E16A57A1F((*uParam1)[iVar0], true, 1);
			unk_0xD3421E391490133B((*uParam1)[iVar0], 1, true);
			unk_0x71199B01895C6202(uParam0->f_1138[iVar0]);
			unk_0x0A2CA2E508C0AED3((*uParam1)[iVar0], 100f);
			iVar0++;
		}
		func_372("CREATING SMUGGLERS");
		*uParam2 = 1;
		func_372("SET_WANTED_LEVEL_MULTIPLIER TO ZERO VIA SMUGGLERS MODE");
		unk_0x51B096AAC60548C1(0f);
	}
}

void func_258(var uParam0, var uParam1, int iParam2)
{
	if (unk_0xDF1306B443CD3D15((*uParam1)[iParam2], 0))
	{
		unk_0xB9FD7450C0DAB575((*uParam1)[iParam2], 1084227584);
		unk_0x56FDC9ADE35F7DB0((*uParam1)[iParam2], true, true, 0);
		unk_0xAA6B3A4292417750((*uParam1)[iParam2], false, false, false, false, false, false, 0, false);
		unk_0x1FC8B874F2C46E6E((*uParam1)[iParam2], 1);
		unk_0xA072915CE3E5C457((*uParam1)[iParam2], false);
		unk_0x4D647C1236C18D14((*uParam1)[iParam2], false);
		unk_0xBBBF14C3EA856B1A((*uParam1)[iParam2], 1);
		iVar0 = 0;
		while (iVar0 < uParam0->f_1137)
		{
			iVar1 = (iParam2 * uParam0->f_1137);
			uParam1->f_7[(iVar0 + iVar1)] = unk_0x852A19533F896693((*uParam1)[iParam2], 22, uParam0->f_1101, uParam0->f_1127[iVar0], 1, true);
			if (!unk_0x437347B10A200C4B(uParam1->f_7[(iVar0 + iVar1)], 0))
			{
				unk_0x298903DD96203C2C(uParam1->f_7[(iVar0 + iVar1)], 15);
				unk_0x093A734E5AEA758F(uParam1->f_7[(iVar0 + iVar1)], 100);
				unk_0x083F03A847B640E9(uParam1->f_7[(iVar0 + iVar1)], 1);
				unk_0xB35CCEC0D4946813(uParam1->f_7[(iVar0 + iVar1)], 2);
				unk_0x579B0182884711E5(uParam1->f_7[(iVar0 + iVar1)], 1);
				unk_0xFADC0A217229F6B5(uParam1->f_7[(iVar0 + iVar1)], true);
				unk_0xAFF39FB306F8E232(uParam1->f_7[(iVar0 + iVar1)], 3, false);
				unk_0x11AD11297DC58CC7(uParam1->f_7[(iVar0 + iVar1)], true);
				unk_0x262EF6C6306BEA6C(uParam1->f_7[(iVar0 + iVar1)], 324215364, 1000, true, true);
				unk_0xFCCF7611216AE801(uParam1->f_7[(iVar0 + iVar1)], 1);
				unk_0xCDFD15389C4C424B(uParam1->f_7[(iVar0 + iVar1)], 1);
				unk_0x4E885A246A9D983A(uParam1->f_7[(iVar0 + iVar1)], 29, true);
				unk_0x71199B01895C6202(uParam0->f_1101);
			}
			iVar0++;
		}
	}
}

void func_259(var uParam0, int iParam1, int iParam2)
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
		if (func_186(uParam0->f_3))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (func_186(sVar0))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
}

void func_260()
{
	func_8(&uLocal_5830, "ARMSAUD", "ARMS_PACK", 9, 1, 0, 0);
	iLocal_6026 = 0;
	unk_0x2F23E8033F1ADDD9("DTRFKGR_06");
	if (unk_0xC844350D5D58C99A(iLocal_3607))
	{
		unk_0xF690C84DADBB3551(&iLocal_3607);
		func_372("DELETING oFlareProp");
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_6142[0]))
	{
		unk_0x142CC44DB769B57E(&(iLocal_6142[0]));
		func_372("REMOVING myLocationBlip[0] VIA PLAYER REACHING PICKUP LOCATION");
	}
	if (unk_0x83A8177D302E1A7E(iLocal_3354))
	{
		unk_0xF7E25143642732EA(iLocal_3354, 0);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xC844350D5D58C99A(uLocal_5543.f_7))
		{
			unk_0x1E9649458B15960F(uLocal_5543.f_7, false);
			unk_0xF690C84DADBB3551(&(uLocal_5543.f_7));
			func_372("DELETING planeDropArgs.oPackage");
		}
		iVar0++;
	}
	if (bLocal_6036)
	{
	}
	if (bLocal_6023)
	{
	}
	if (((bLocal_6036 && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0)) && !unk_0x437347B10A200C4B(iLocal_6135, 0)) && !unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_6135, 0))
	{
		vLocal_6078[0] = { 0f, 0f, 0f };
	}
	else
	{
		vLocal_6078[0] = { Local_4356.f_218[0].f_110 };
	}
	if (unk_0xE4EDC4B0E92C078B(Local_5574.f_19))
	{
		unk_0x142CC44DB769B57E(&(Local_5574.f_19));
	}
	if (unk_0xE4EDC4B0E92C078B(uLocal_5543.f_10))
	{
		unk_0x142CC44DB769B57E(&(uLocal_5543.f_10));
	}
	if (unk_0xC844350D5D58C99A(uLocal_5543.f_8))
	{
		unk_0xF690C84DADBB3551(&(uLocal_5543.f_8));
	}
	func_234(&Local_5560, &Local_4356, iLocal_6135, 1);
	bLocal_6006 = true;
	unk_0x71EDC33E5A423750(iLocal_6135, 9);
}

int func_261()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), uLocal_5543.f_9))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_262()
{
	if (unk_0xC844350D5D58C99A(uLocal_5543.f_9) && !unk_0x437347B10A200C4B(uLocal_5543.f_9, 0))
	{
		if (!unk_0x437347B10A200C4B(iLocal_6135, 0))
		{
			if (unk_0x1B3D109B39CC2C89(iLocal_6135, uLocal_5543.f_9))
			{
				uLocal_5543.f_14 = 1;
				return 1;
			}
		}
	}
	return 0;
}

int func_263(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, var uParam6, var uParam7, int iParam8, var uParam9, int iParam10, var uParam11, bool bParam12, bool bParam13, char* sParam14, int iParam15)
{
	if (*uParam1 > 2 && *uParam1 < 6)
	{
		if (uParam4->f_29)
		{
			if (*uParam7)
			{
				*uParam6[0] = { 0f, 0f, 0f };
				iVar0 = 0;
				while (iVar0 < uParam0->f_1094)
				{
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 4)
				{
					iVar0++;
				}
			}
			else if (*uParam3)
			{
				*uParam6[0] = { uParam0->f_218[0].f_110 };
			}
		}
	}
	if (*bParam13)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 0)
			{
				iVar1 = 0;
				while (iVar1 < uParam0->f_1108)
				{
					iVar2 = (iVar0 * uParam0->f_1095);
					func_273(&(Local_3391[iVar2]));
					iVar1++;
				}
			}
			iVar0++;
		}
		if (uParam4->f_36)
		{
			iVar0 = 0;
			while (iVar0 < 2)
			{
				func_273(&(Local_3472[iVar0]));
				iVar0++;
			}
		}
	}
	switch (*uParam1)
	{
		case 0:
			if (bLocal_3373)
			{
				uParam0->f_1101 = 1466037421;
				unk_0x523BCC9DC80CD82F(uParam0->f_1101);
				func_372("REQUESTING MEXICAN BAD GUY - G_M_M_MEXBOSS_01");
			}
			else if (bLocal_3374)
			{
				uParam0->f_1101 = 62440720;
				unk_0x523BCC9DC80CD82F(uParam0->f_1101);
				func_372("REQUESTING MARABUNTA BAD GUY - G_M_Y_SalvaGoon_03");
			}
			else if (bLocal_3375)
			{
				uParam0->f_1101 = 1822107721;
				unk_0x523BCC9DC80CD82F(uParam0->f_1101);
				func_372("REQUESTING HILLBILLY BAD GUY - A_M_M_HillBilly_01");
			}
			if (unk_0xB87F6CF6E5628C67(uParam0->f_1101))
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			if (!uParam4->f_35)
			{
				unk_0xF63400DBE3303D26("ambushGroup", &(uParam4->f_22));
				unk_0x0E2400AB9174FA81(5, 1862763509, uParam4->f_22);
				unk_0x0E2400AB9174FA81(5, uParam4->f_22, 1862763509);
				func_271(uParam0, uParam4, uParam2);
				unk_0xC92DB9682A650680("OJDG1_PACKAGE");
				func_372("SETTING MAX WANTERD LEVEL TO ZERO VIA CREATE AMBUSH");
				uParam4->f_35 = 1;
			}
			*uParam1 = 2;
			break;
		
		case 2:
			func_271(uParam0, uParam4, uParam2);
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 0)
				{
					if (!unk_0x8E28E832BEAC3DCE(uParam0[0][iVar0]->f_5, 10f))
					{
						if (!unk_0x437347B10A200C4B((*uParam4)[iVar0], 0))
						{
							bVar4 = true;
							unk_0x4D3C3C0B0DE2663E((*uParam4)[iVar0], uParam0[0][iVar0]->f_3, uParam0[0][iVar0]->f_4, 1);
							unk_0xA9FBE21EB8701B34((*uParam4)[iVar0], 1,5f);
						}
					}
				}
				iVar0++;
			}
			*uParam3 = 1;
			*iParam10 = 1;
			*uParam6[0] = { 0f, 0f, 0f };
			unk_0x51B096AAC60548C1(0f);
			func_372("SETTING WANTED LEVEL MULTIPLIER TO ZERO");
			if (bVar4)
			{
				func_372("REPLAY IS TRUE GOING TO STATE - AMBUSH_REPLAY");
				*uParam1 = 3;
			}
			break;
		
		case 3:
			func_269(uParam0, uParam4, uParam2, 1);
			func_271(uParam0, uParam4, uParam2);
			bVar4 = false;
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 0)
				{
					if (unk_0xDF1306B443CD3D15((*uParam4)[iVar0], 0))
					{
						iVar1 = 0;
						while (iVar1 < uParam0->f_1108)
						{
							iVar2 = (iVar0 * uParam0->f_1095);
							if (!unk_0x20D6474D5F4B9FC6((*uParam4)[iVar0]))
							{
								unk_0xDD353D0E9C789D0E(&iVar6);
								if (!unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), 0))
								{
									unk_0x45F014B3D0466974(0, (*uParam4)[iVar0], 256);
								}
								unk_0x6C3AE6E278DB3D0E(0, unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), 0, 16);
								unk_0x75ABDC5F81978924(iVar6);
								if (!unk_0xEB6A8945D1AC98A1((*uParam2)[(iVar1 + iVar2)]))
								{
									unk_0x78ADC381772E3D54((*uParam2)[(iVar1 + iVar2)], iVar6);
									func_268(uParam4, uParam11, bParam12);
								}
								unk_0xF82EA857DA10E0CD(&iVar6);
							}
							else
							{
								bVar4 = true;
							}
							iVar1++;
						}
					}
				}
				iVar0++;
			}
			if (!bVar4)
			{
				if (!func_43(&(uParam4->f_23)))
				{
					func_40(&(uParam4->f_23));
				}
				func_372("bReplay IS FALSE GOING TO STATE - AMBUSH_CREATION_BUFFER");
				*uParam1 = 4;
			}
			break;
		
		case 4:
			func_269(uParam0, uParam4, uParam2, 1);
			func_268(uParam4, uParam11, bParam12);
			func_267(uParam0, uParam4, uParam2);
			func_271(uParam0, uParam4, uParam2);
			if (func_43(&(uParam4->f_23)))
			{
				if (func_37(&(uParam4->f_23)) > 5f)
				{
					if (uParam4->f_36)
					{
						func_266(uParam4, uParam0);
						func_372("bReplay IS FALSE GOING TO STATE - AMBUSH_FIGHT");
						*uParam1 = 5;
					}
				}
			}
			break;
		
		case 5:
			bVar3 = true;
			bVar5 = true;
			func_269(uParam0, uParam4, uParam2, 1);
			func_268(uParam4, uParam11, bParam12);
			func_267(uParam0, uParam4, uParam2);
			func_265(uParam0, uParam4);
			iVar0 = 0;
			while (iVar0 < uParam0->f_1094)
			{
				if (unk_0x437347B10A200C4B((*uParam2)[iVar0], 0))
				{
				}
				else
				{
					bVar3 = false;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < uParam0->f_1094)
			{
				if (!unk_0x437347B10A200C4B((*uParam2)[iVar0], 0) && !unk_0xEB6A8945D1AC98A1((*uParam2)[iVar0]))
				{
					fVar7 = func_264(unk_0x16F2683693E537C9(), (*uParam2)[iVar0]);
					if (fVar7 < 300f)
					{
						bVar5 = false;
					}
					if (fVar7 > 150f)
					{
						if (unk_0x405E212DDE472467((*uParam2)[iVar0], 0))
						{
							fVar11 = unk_0x9C66D99E63E8E24C((*uParam2)[iVar0]);
							if (fVar11 < 2f)
							{
								if (!func_43(&iLocal_3388))
								{
									func_40(&iLocal_3388);
								}
								if (func_37(&iLocal_3388) > 5f)
								{
									unk_0xDE5F9F54005367A1(unk_0x68F4C0EC296D3901((*uParam2)[iVar0], true), &vVar8, 1, 1077936128, 0);
									if (!func_195(vVar8))
									{
										if (unk_0x03068588A1FCED1A((*uParam2)[iVar0]))
										{
											unk_0xBFB24B9B15F6108F((*uParam2)[iVar0], vVar8);
											func_41(&iLocal_3388);
										}
									}
								}
							}
						}
					}
				}
				iVar0++;
			}
			if (uParam4->f_36)
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (unk_0x437347B10A200C4B(uParam4->f_16[iVar0], 0))
					{
					}
					else
					{
						bVar3 = false;
					}
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (!unk_0x437347B10A200C4B(uParam4->f_16[iVar0], 0))
					{
						fVar7 = func_264(unk_0x16F2683693E537C9(), uParam4->f_16[iVar0]);
						if (fVar7 < 300f)
						{
							bVar5 = false;
						}
					}
					iVar0++;
				}
			}
			if (bVar3 || bVar5)
			{
				if (bVar3)
				{
				}
				if (bVar5)
				{
				}
				iVar0 = 0;
				while (iVar0 < 5)
				{
					if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 0)
					{
						unk_0x046C362CF15F1935(uParam4[iVar0]);
						func_372("SETTING AMBUSH VEHICLE AS NO LONGER NEEDED");
					}
					iVar0++;
				}
				*uParam3 = 0;
				unk_0x51B096AAC60548C1(1f);
				*uParam1 = 6;
				settimera(0);
			}
			break;
		
		case 6:
			*bParam5 = 0;
			*iParam10 = 0;
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 0)
				{
					if (unk_0xC844350D5D58C99A((*uParam4)[iVar0]))
					{
						unk_0xA954465BA6FDEFE2(uParam4[iVar0]);
					}
					unk_0xDB8844D4B7C60440(uParam0[0][iVar0]->f_3, uParam0[0][iVar0]->f_4);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < uParam0->f_1094)
			{
				if (unk_0xC844350D5D58C99A((*uParam2)[iVar0]))
				{
					if (unk_0x03068588A1FCED1A((*uParam2)[iVar0]))
					{
						unk_0xEBA53F35D0085654(uParam2[iVar0]);
					}
					else
					{
						unk_0x6DAD7906B73F064D(uParam2[iVar0]);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (unk_0xC844350D5D58C99A(uParam4->f_16[iVar0]))
				{
					if (unk_0x03068588A1FCED1A(uParam4->f_16[iVar0]))
					{
						unk_0xEBA53F35D0085654(&(uParam4->f_16[iVar0]));
					}
					else
					{
						unk_0x6DAD7906B73F064D(&(uParam4->f_16[iVar0]));
					}
				}
				iVar0++;
			}
			if (!*bParam13)
			{
				func_34("DTRFKGR_03a", 7500, 1);
				StringCopy(sParam14, "DTRFKGR_03a", 32);
				if (!unk_0xE4EDC4B0E92C078B((*iParam15)[0]))
				{
					(*iParam15)[0] = unk_0x6CC513A908911CF0(uParam0->f_218[0].f_110);
					unk_0xDC5B2F9D0CCE3A10((*iParam15)[0], "DTRFKGR_BLIP07");
				}
			}
			*uParam6[0] = { uParam0->f_218[0].f_110 };
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 0)
				{
					iVar1 = 0;
					while (iVar1 < uParam0->f_1108)
					{
						iVar2 = (iVar0 * uParam0->f_1095);
						func_273(&(Local_3391[iVar2]));
						iVar1++;
					}
				}
				iVar0++;
			}
			if (uParam4->f_36)
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_273(&(Local_3472[iVar0]));
					iVar0++;
				}
			}
			iLocal_3368 = 0;
			*uParam9 = unk_0x1C0640BA9A7327B3();
			unk_0xC92DB9682A650680("OJDG1_ENEMIES_DEAD");
			return 1;
			break;
	}
	return 0;
}

float func_264(int iParam0, int iParam1)
{
	return func_159(iParam0, iParam1, 1);
}

void func_265(var uParam0, var uParam1)
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
		fVar4 = vdist2(vVar1, uParam0[0]->f_107);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xC844350D5D58C99A(uParam1->f_16[iVar0]))
		{
			if (!unk_0x437347B10A200C4B(uParam1->f_16[iVar0], 0))
			{
				if (fVar4 > 5625f)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						unk_0xAFF39FB306F8E232(uParam1->f_16[iVar0], 1, true);
						if (iVar0 == 0)
						{
							if (!uParam1->f_8[iVar0])
							{
								unk_0xDD353D0E9C789D0E(&iVar5);
								if (unk_0xC844350D5D58C99A(uParam1->f_5[0]) && !unk_0x437347B10A200C4B(uParam1->f_5[0], 0))
								{
									unk_0x5B1D360B9C6F0A09(0, uParam1->f_5[0], 20000, -1, 2f, 1, 0);
								}
								unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
								unk_0x75ABDC5F81978924(iVar5);
								if (!unk_0x437347B10A200C4B(uParam1->f_16[iVar0], 0))
								{
									unk_0x78ADC381772E3D54(uParam1->f_16[iVar0], iVar5);
								}
								unk_0xF82EA857DA10E0CD(&iVar5);
								uParam1->f_8[iVar0] = 1;
							}
						}
						else if (iVar0 == 1)
						{
							if (!uParam1->f_8[iVar0])
							{
								unk_0xDD353D0E9C789D0E(&iVar5);
								if (unk_0xC844350D5D58C99A(uParam1->f_5[1]) && !unk_0x437347B10A200C4B(uParam1->f_5[1], 0))
								{
									unk_0x5B1D360B9C6F0A09(0, uParam1->f_5[1], 20000, -1, 2f, 1, 0);
								}
								unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
								unk_0x75ABDC5F81978924(iVar5);
								if (!unk_0x437347B10A200C4B(uParam1->f_16[iVar0], 0))
								{
									unk_0x78ADC381772E3D54(uParam1->f_16[iVar0], iVar5);
								}
								unk_0xF82EA857DA10E0CD(&iVar5);
								uParam1->f_8[iVar0] = 1;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_266(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_195(uParam1[0]->f_176[iVar0]))
		{
			if (!unk_0x8E28E832BEAC3DCE(uParam1[0][iVar0]->f_5, 10f))
			{
				if (!uParam0->f_19[iVar0])
				{
					uParam0->f_16[iVar0] = unk_0x36F2404464202779(22, uParam1->f_1101, uParam1[0]->f_176[iVar0], 0f, 1, true);
					unk_0x11AD11297DC58CC7(uParam0->f_16[iVar0], true);
					unk_0x6DF7BF67E86AAE86(uParam0->f_16[iVar0], uParam0->f_22);
					unk_0xAFF39FB306F8E232(uParam0->f_16[iVar0], 1, false);
					unk_0xAFF39FB306F8E232(uParam0->f_16[iVar0], 50, true);
					unk_0x3CC33E4E9CE523F4(uParam0->f_16[iVar0], 2);
					unk_0xFADC0A217229F6B5(uParam0->f_16[iVar0], true);
					if ((unk_0x09AC81E49EA267F7(0, 65535) % 2) == 0)
					{
						unk_0x262EF6C6306BEA6C(uParam0->f_16[iVar0], -494615257, -1, true, true);
					}
					else
					{
						unk_0x262EF6C6306BEA6C(uParam0->f_16[iVar0], -494615257, -1, true, true);
					}
					unk_0x6C3AE6E278DB3D0E(uParam0->f_16[iVar0], unk_0x16F2683693E537C9(), 0, 16);
					uParam0->f_19[iVar0] = 1;
					wait(1000);
				}
			}
		}
		iVar0++;
	}
}

void func_267(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 0)
		{
			iVar1 = 0;
			while (iVar1 < uParam0->f_1108)
			{
				iVar2 = (iVar0 * uParam0->f_1095);
				if (unk_0xC844350D5D58C99A((*uParam2)[(iVar1 + iVar2)]) && !unk_0x437347B10A200C4B((*uParam1)[iVar0], 0))
				{
					if (unk_0xEB6A8945D1AC98A1(unk_0xA30B8362589C124A((*uParam1)[iVar0], -1, 0)))
					{
						if (!unk_0x437347B10A200C4B((*uParam1)[iVar0], 0) && !unk_0x437347B10A200C4B(unk_0xA30B8362589C124A((*uParam1)[iVar0], 0, 0), 0))
						{
							if (unk_0xD1960163A3042274(unk_0xA30B8362589C124A((*uParam1)[iVar0], 0, 0), 355471868) != 1)
							{
								unk_0x16A6C233289238AA(unk_0xA30B8362589C124A((*uParam1)[iVar0], 0, 0), (*uParam1)[iVar0], 0);
							}
						}
					}
					else if (unk_0xD1960163A3042274(unk_0xA30B8362589C124A((*uParam1)[iVar0], -1, 0), 780511057) != 1)
					{
						unk_0x6C3AE6E278DB3D0E(unk_0xA30B8362589C124A((*uParam1)[iVar0], -1, 0), unk_0x16F2683693E537C9(), 0, 16);
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_268(var uParam0, var uParam1, var uParam2)
{
	if (!uParam0->f_34)
	{
		if (*uParam2)
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (!unk_0xD17F06053799A7CA())
				{
					if (func_8(uParam1, "ARMSAUD", "ARMS_GR13C", 9, 0, 0, 0))
					{
						func_372("PLAYING CONVO - ARMS_GR13C");
						uParam0->f_34 = 1;
					}
				}
			}
		}
	}
}

void func_269(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 0)
		{
			iVar1 = 0;
			while (iVar1 < uParam0->f_1108)
			{
				iVar2 = (iVar0 * uParam0->f_1095);
				if (unk_0xC844350D5D58C99A((*uParam2)[(iVar1 + iVar2)]))
				{
					if (!unk_0xEB6A8945D1AC98A1((*uParam2)[(iVar1 + iVar2)]) && func_248((*uParam2)[(iVar1 + iVar2)], 1) > 450f)
					{
						unk_0xD458AC1C1D29C3B4((*uParam2)[(iVar1 + iVar2)], 0, 0);
					}
					func_270((*uParam2)[(iVar1 + iVar2)], &(Local_3391[(iVar1 + iVar2)]), -1, 0, bParam3, 0, -1082130432, 0, -1, -1, 1);
					if (!bLocal_3376)
					{
						bLocal_3376 = true;
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	if (uParam1->f_36)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (!unk_0xEB6A8945D1AC98A1(uParam1->f_16[iVar0]) && func_248(uParam1->f_16[iVar0], 1) > 450f)
			{
				unk_0xD458AC1C1D29C3B4(uParam1->f_16[iVar0], 0, 0);
			}
			func_270(uParam1->f_16[iVar0], &(Local_3472[iVar0]), -1, 0, bParam3, 0, -1082130432, 0, -1, -1, 1);
			iVar0++;
		}
	}
}

int func_270(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
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
		unk_0xF947FFD8DA795A7F(iParam0, bParam4);
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

void func_271(var uParam0, var uParam1, var uParam2)
{
	if (!func_43(&(uParam1->f_26)))
	{
		func_40(&(uParam1->f_26));
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 0)
		{
			if (!unk_0x8E28E832BEAC3DCE(uParam0[0][iVar0]->f_5, 10f))
			{
				if (!uParam1->f_11[iVar0])
				{
					if (func_37(&(uParam1->f_26)) > 1f)
					{
						(*uParam1)[iVar0] = unk_0x122AAB0B1D6F55AD(uParam0[0][iVar0]->f_1, uParam0[0][iVar0]->f_5, 0f, true, true, false);
						unk_0xA47B46945FF6DE74((*uParam1)[iVar0], uParam0[0][iVar0]->f_5, 1, false, 0, 1);
						unk_0xC4C7FD0EF3FEAB0B((*uParam1)[iVar0], uParam0[0][iVar0]->f_8, uParam0[0][iVar0]->f_9, uParam0[0][iVar0]->f_10, uParam0[0][iVar0]->f_11);
						unk_0xE8832A9E16A57A1F((*uParam1)[iVar0], true, 1);
						unk_0xD458AC1C1D29C3B4((*uParam1)[iVar0], 2000, 0);
						unk_0x0A2CA2E508C0AED3((*uParam1)[iVar0], 30f);
						iVar1 = 0;
						while (iVar1 < uParam0->f_1108)
						{
							iVar2 = (iVar0 * uParam0->f_1095);
							(*uParam2)[(iVar1 + iVar2)] = unk_0x852A19533F896693((*uParam1)[iVar0], 22, uParam0->f_1101, uParam0->f_1127[iVar1], 1, true);
							unk_0x71199B01895C6202(uParam0->f_1101);
							func_272((*uParam2)[(iVar1 + iVar2)], uParam1->f_22, 1);
							unk_0x11AD11297DC58CC7((*uParam2)[(iVar1 + iVar2)], true);
							unk_0xAFF39FB306F8E232((*uParam2)[(iVar1 + iVar2)], 69, true);
							unk_0xAFF39FB306F8E232((*uParam2)[(iVar1 + iVar2)], 70, true);
							unk_0x6DF7BF67E86AAE86((*uParam2)[(iVar1 + iVar2)], uParam1->f_22);
							unk_0xAFF39FB306F8E232((*uParam2)[(iVar1 + iVar2)], 1, true);
							unk_0xAFF39FB306F8E232((*uParam2)[(iVar1 + iVar2)], 3, false);
							unk_0x4E885A246A9D983A((*uParam2)[(iVar1 + iVar2)], 214, true);
							iVar1++;
						}
						func_41(&(uParam1->f_26));
						uParam1->f_11[iVar0] = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_272(int iParam0, int iParam1, bool bParam2)
{
	unk_0x083F03A847B640E9(iParam0, 1);
	unk_0xB35CCEC0D4946813(iParam0, 2);
	unk_0xAFF39FB306F8E232(iParam0, 2, true);
	unk_0xAFF39FB306F8E232(iParam0, 50, true);
	unk_0x3CC33E4E9CE523F4(iParam0, 2);
	unk_0x262EF6C6306BEA6C(iParam0, 324215364, -1, true, true);
	unk_0x298903DD96203C2C(iParam0, 20);
	unk_0xFADC0A217229F6B5(iParam0, bParam2);
	unk_0x6DF7BF67E86AAE86(iParam0, iParam1);
	unk_0x9FA191B317572861(iParam0, 1000f);
}

void func_273(int iParam0)
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

int func_274(int iParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0) != *iParam0)
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

void func_275()
{
	if (!iLocal_6044)
	{
		if (uLocal_5543.f_14)
		{
			if ((unk_0xC844350D5D58C99A(uLocal_5543.f_9) && !unk_0x03068588A1FCED1A(uLocal_5543.f_9)) && unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), Local_4356[0].f_107, 25f, 25f, 25f, false, true, 0))
			{
				if (unk_0x83A8177D302E1A7E(iLocal_3354))
				{
					unk_0xF7E25143642732EA(iLocal_3354, 0);
				}
				iLocal_6044 = 1;
			}
		}
	}
}

void func_276()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!unk_0xC844350D5D58C99A(Local_5506.f_5[iVar0]))
		{
			if (!func_195(Local_4356[0].f_183[iVar0]))
			{
				Local_5506.f_5[iVar0] = unk_0x122AAB0B1D6F55AD(-1207771834, Local_4356[0].f_183[iVar0], 0, true, true, false);
			}
		}
		iVar0++;
	}
}

void func_277()
{
	if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), Local_4356[0].f_107, Local_4356[0].f_175, Local_4356[0].f_175, 250f, true, true, 0) || uLocal_6035)
	{
		func_278(&Local_4356, &uLocal_5543, &uLocal_3640, &iLocal_6142);
	}
	if (unk_0xC844350D5D58C99A(uLocal_5543.f_6) && unk_0xDF1306B443CD3D15(uLocal_5543.f_6, 0))
	{
		if (unk_0x20D6474D5F4B9FC6(uLocal_5543.f_6))
		{
			vVar0 = { unk_0x68F4C0EC296D3901(uLocal_5543.f_6, true) };
			if (!func_195(vVar0))
			{
				fVar7 = vdist2(vVar0, Local_4356[0].f_107);
			}
			vVar3 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
			if (!func_195(vVar3))
			{
				fVar6 = vdist2(vVar3, Local_4356[0].f_107);
			}
			if (fVar6 < fVar7)
			{
				unk_0xA9FBE21EB8701B34(uLocal_5543.f_6, 1,3f);
			}
			else
			{
				unk_0xA9FBE21EB8701B34(uLocal_5543.f_6, 1f);
			}
		}
		else if (uLocal_5543.f_14)
		{
			unk_0x6DAD7906B73F064D(&iLocal_3500);
			unk_0x046C362CF15F1935(&(uLocal_5543.f_6));
		}
	}
}

void func_278(var uParam0, var uParam1, var uParam2, int iParam3)
{
	iVar2 = 0;
	switch (*uParam2)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 1)
				{
					unk_0x523BCC9DC80CD82F(uParam0[0][iVar0]->f_1);
					unk_0x36187931D29E5BBE(uParam0[0][iVar0]->f_3, uParam0[0][iVar0]->f_4);
				}
				iVar0++;
			}
			unk_0x523BCC9DC80CD82F(iLocal_3377);
			unk_0x523BCC9DC80CD82F(iLocal_3378);
			unk_0x3F423BF5B8125A50("p_cargo_chute_s");
			if (bLocal_3373)
			{
				uParam0->f_1101 = 1466037421;
				unk_0x523BCC9DC80CD82F(uParam0->f_1101);
				func_372("UPDATE PLANE DROP: REQUESTING MEXICAN BAD GUY - G_M_M_MEXBOSS_01");
			}
			else if (bLocal_3374)
			{
				uParam0->f_1101 = 62440720;
				unk_0x523BCC9DC80CD82F(uParam0->f_1101);
				func_372("UPDATE PLANE DROP: REQUESTING MARABUNTA BAD GUY - G_M_Y_SalvaGoon_03");
			}
			else if (bLocal_3375)
			{
				uParam0->f_1101 = 1822107721;
				unk_0x523BCC9DC80CD82F(uParam0->f_1101);
				func_372("UPDATE PLANE DROP: REQUESTING HILLBILLY BAD GUY - A_M_M_HillBilly_01");
			}
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 1)
				{
					if ((unk_0x3DDA6C6A285628E4(uParam0[0][iVar0]->f_3, uParam0[0][iVar0]->f_4) && unk_0xB87F6CF6E5628C67(uParam0[0][iVar0]->f_1)) && unk_0xB87F6CF6E5628C67(uParam0->f_1101))
					{
						iVar2 = 1;
					}
				}
				iVar0++;
			}
			if (((unk_0xB87F6CF6E5628C67(iLocal_3377) && unk_0xB87F6CF6E5628C67(iLocal_3378)) && unk_0xB4AE0788C1587752("p_cargo_chute_s")) && iVar2)
			{
				func_372("GOING TO STATE - PLANE_DROP_CREATE");
				*uParam2 = 1;
			}
			break;
		
		case 1:
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 1)
				{
					(*uParam1)[iVar0] = unk_0x122AAB0B1D6F55AD(uParam0[0][iVar0]->f_1, uParam0[0][iVar0]->f_5, 0f, true, true, false);
					uParam1->f_6 = (*uParam1)[iVar0];
					iLocal_3500 = unk_0x852A19533F896693(uParam1->f_6, 22, uParam0->f_1101, -1, 1, true);
					unk_0x56FDC9ADE35F7DB0(uParam1->f_6, true, true, 0);
					unk_0x25BD67336EA4AECE(uParam1->f_6, 1500);
					unk_0xB58CA658A628ED02(uParam1->f_6, 3);
					unk_0x411CC4F26F6C1C2E(uParam1->f_6);
					uParam1->f_7 = unk_0x7707E48765093646(iLocal_3377, uParam0[0][iVar0]->f_5, true, true, false);
					unk_0xD0C5FAC38659B26F(uParam1->f_7, 1);
					unk_0xE8832A9E16A57A1F(uParam1->f_7, true, 1);
					unk_0x25BD67336EA4AECE(uParam1->f_7, 1500);
					unk_0x4A4806F9D471E491(uParam1->f_7, false, 0);
					unk_0x272295383B6513AB(uParam1->f_7, 1);
					if (!unk_0x437347B10A200C4B((*uParam1)[iVar0], 0))
					{
						unk_0x9F528B1B53FBC5D9(uParam1->f_7, (*uParam1)[iVar0], 0, 0f, -1,64f, -0,48f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					}
					if (!unk_0x437347B10A200C4B(uParam1->f_7, 0))
					{
						uParam1->f_8 = unk_0x7707E48765093646(iLocal_3378, uParam0[0][iVar0]->f_5, true, true, false);
						unk_0x272295383B6513AB(uParam1->f_8, 1);
						unk_0x9F528B1B53FBC5D9(uParam1->f_8, uParam1->f_7, 0, vLocal_3355, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						unk_0x4A4806F9D471E491(uParam1->f_8, false, 0);
					}
					unk_0xA47B46945FF6DE74((*uParam1)[iVar0], uParam0[0][iVar0]->f_5, 1, false, 0, 1);
					unk_0xC4C7FD0EF3FEAB0B((*uParam1)[iVar0], uParam0[0][iVar0]->f_8, uParam0[0][iVar0]->f_9, uParam0[0][iVar0]->f_10, uParam0[0][iVar0]->f_11);
					func_372("INSIDE STATE - PLANE_DROP_CREATE");
					*uParam2 = 2;
				}
				iVar0++;
			}
			break;
		
		case 2:
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 1)
				{
					if (!unk_0x437347B10A200C4B((*uParam1)[iVar0], 0))
					{
						unk_0x4D3C3C0B0DE2663E((*uParam1)[iVar0], uParam0[0][iVar0]->f_3, uParam0[0][iVar0]->f_4, 1);
						unk_0xA9FBE21EB8701B34((*uParam1)[iVar0], 1,1f);
						unk_0x8BC9595FD2792B5D("PLANE_FLY_OVER_SCENE");
						uParam1->f_15 = 1;
						func_372("STARTING PLAYBACK");
						*uParam2 = 3;
					}
				}
				iVar0++;
			}
			break;
		
		case 3:
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 1)
				{
					if (!unk_0x437347B10A200C4B((*uParam1)[iVar0], 0))
					{
						if (unk_0x20D6474D5F4B9FC6((*uParam1)[iVar0]))
						{
							fVar1 = unk_0x7B694C942A404ABF((*uParam1)[iVar0]);
							vVar3 = { unk_0x68F4C0EC296D3901((*uParam1)[iVar0], true) };
							vVar3 = { vVar3 };
							if (fVar1 > uParam0[0][iVar0]->f_12)
							{
								func_372("DROPPING PACKAGE");
								unk_0x15AFB6CBDE990FB6(uParam1->f_7, 1, true);
								unk_0x4A4806F9D471E491(uParam1->f_7, true, 0);
								unk_0x4A4806F9D471E491(uParam1->f_8, true, 0);
								if (!unk_0xE4EDC4B0E92C078B(uParam1->f_10))
								{
									func_233(iLocal_3354);
									uParam1->f_10 = unk_0x5C3B41825F6AC5A0(uParam1->f_7);
									unk_0x61755AC17D8F538E(uParam1->f_10, 2);
									if (unk_0xE4EDC4B0E92C078B((*iParam3)[0]))
									{
										unk_0x142CC44DB769B57E(iParam3[0]);
									}
									func_34("DTRFKGR_06", 7500, 1);
								}
								unk_0xDFC6BA855748EB10(uParam1->f_7, 1, 0f, 0f, 0f, 0f, 0f, 0,5f, 0, 1, 1, 1, 0, 1);
								unk_0x272295383B6513AB(uParam1->f_7, 1);
								if (!unk_0x437347B10A200C4B(uParam1->f_8, 0))
								{
									unk_0xD65E6E13E145467B(uParam1->f_8, "p_cargo_chute_s_deploy", "p_cargo_chute_s", 1f, false, true, 0, 0f, 0);
								}
								unk_0x25BD67336EA4AECE(uParam1->f_6, 500);
								*uParam2 = 4;
							}
						}
					}
				}
				iVar0++;
			}
			break;
		
		case 4:
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (!unk_0x437347B10A200C4B((*uParam1)[iVar0], 0))
				{
					if (unk_0x20D6474D5F4B9FC6((*uParam1)[iVar0]))
					{
						fVar1 = unk_0x7B694C942A404ABF((*uParam1)[iVar0]);
					}
				}
				if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 1)
				{
					if (unk_0xC844350D5D58C99A(uParam1->f_7))
					{
						unk_0xE8832A9E16A57A1F(uParam1->f_7, true, 1);
						if (!unk_0xD59B17D2DFF98E26(uParam1->f_7))
						{
							if (unk_0xE608C809F9416F00(uParam1->f_7))
							{
								uParam1->f_14 = 1;
								uParam1->f_9 = uParam1->f_7;
								unk_0x15AFB6CBDE990FB6(uParam1->f_8, 1, true);
								unk_0xD65E6E13E145467B(uParam1->f_8, "p_cargo_chute_s_crumple", "p_cargo_chute_s", 0,5f, false, true, 0, 0f, 512);
								unk_0x20641932E5104B25(uParam1->f_8, false, 0);
								if (!func_43(&(uParam1->f_11)))
								{
									func_40(&(uParam1->f_11));
								}
								if (uParam1->f_14)
								{
									func_372("planeDropArgs.bCargoHasLanded = TRUE");
								}
								func_372("ENTITY HAS COLLIDED");
								*uParam2 = 5;
							}
						}
					}
				}
				iVar0++;
			}
			break;
		
		case 5:
			if (unk_0xC844350D5D58C99A(uParam1->f_8))
			{
				if (func_43(&(uParam1->f_11)))
				{
					if (func_37(&(uParam1->f_11)) > 1f)
					{
						iVar0 = 0;
						while (iVar0 < 5)
						{
							if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 1)
							{
								if (unk_0xC844350D5D58C99A(uParam1->f_7))
								{
									if (unk_0xC844350D5D58C99A(uParam1->f_7))
									{
										unk_0x1E9649458B15960F(uParam1->f_7, true);
									}
								}
							}
							iVar0++;
						}
						unk_0xF690C84DADBB3551(&(uParam1->f_8));
						*uParam2 = 6;
					}
				}
			}
			break;
		
		case 6:
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 1)
				{
					if (!unk_0x437347B10A200C4B((*uParam1)[iVar0], 0))
					{
						if (!unk_0x20D6474D5F4B9FC6((*uParam1)[iVar0]))
						{
							unk_0x8910D3D58E0132B8("PLANE_FLY_OVER_SCENE");
							unk_0x6DAD7906B73F064D(&iLocal_3500);
							unk_0x046C362CF15F1935(uParam1[iVar0]);
							unk_0xA954465BA6FDEFE2(uParam1[iVar0]);
							unk_0xEBA53F35D0085654(&iLocal_3500);
							uParam1->f_15 = 0;
						}
					}
				}
				iVar0++;
			}
			break;
		
		case 7:
			break;
	}
}

void func_279()
{
	if (iLocal_6057)
	{
		if (!unk_0xF06268E966D7C1A2(unk_0xA30EC016B12C03E4(), 0))
		{
			unk_0xC92DB9682A650680("OJDG1_GOING_LOST");
			iLocal_6057 = 0;
		}
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (((((func_203(unk_0x16F2683693E537C9(), Local_4356[0].f_107, 1) < 50f || func_203(unk_0x16F2683693E537C9(), Local_4356.f_218[0].f_110, 1) < 50f) || func_203(unk_0x16F2683693E537C9(), 2058,691f, 4761,476f, 40,2296f, 1) < 150f) || bLocal_6050) || bLocal_6004) || bLocal_6007)
		{
			func_41(&iLocal_6172);
			return;
		}
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	}
	if (!func_195(vVar0))
	{
		unk_0xDE5F9F54005367A1(vVar0, &vVar3, 0, 1077936128, 0);
		if (!func_195(vVar3))
		{
			fVar6 = vdist2(vVar0, vVar3);
			fVar6 = sqrt(fVar6);
			if (vdist2(vVar0, vVar3) < 400f)
			{
				if (!func_43(&iLocal_6172))
				{
					func_40(&iLocal_6172);
					bLocal_6048 = true;
				}
				else
				{
					bLocal_6048 = true;
				}
			}
			else
			{
				bLocal_6048 = false;
				if (func_43(&iLocal_6172))
				{
					func_41(&iLocal_6172);
				}
			}
		}
	}
	if (bLocal_6048)
	{
		if (func_43(&iLocal_6172))
		{
			fVar7 = func_37(&iLocal_6172);
			fVar7 = fVar7;
			if (Local_4356[0].f_190 == 0f)
			{
				Local_4356[0].f_190 = 32f;
			}
			if (func_37(&iLocal_6172) > Local_4356[0].f_190)
			{
				if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
				{
					unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 2, 0);
					unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
				}
				if (!iLocal_6057)
				{
					unk_0xC92DB9682A650680("OJDG1_GOING_WANTED");
					iLocal_6057 = 1;
				}
			}
			else if (func_37(&iLocal_6172) > (Local_4356[0].f_190 - 11f))
			{
				if (!iLocal_6049)
				{
					if (func_8(&uLocal_5830, "ARMSAUD", "ARMS_ROADS", 9, 0, 0, 0))
					{
						func_372("OSCAR - POLICE WARNING DIALOGUE");
						iLocal_6049 = 1;
					}
				}
			}
		}
	}
}

void func_280()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0xDF1306B443CD3D15(iLocal_6135, 0))
	{
		if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_6135, 0))
		{
			if (func_292() == 0)
			{
				func_282();
			}
			else
			{
				func_281();
			}
		}
	}
}

void func_281()
{
	switch (iLocal_6123)
	{
		case 0:
			func_198(&uLocal_3501, Local_4356[0].f_107, 0, 0, 1, 1, 1);
			if ((unk_0xC844350D5D58C99A(Local_5574.f_4) && !unk_0x437347B10A200C4B(Local_5574.f_4, 0)) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (func_203(Local_5574.f_4, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 1) < 250f)
				{
					iLocal_6123 = 1;
				}
			}
			break;
		
		case 1:
			func_259(&uLocal_3501, 0, 0);
			iLocal_6123 = 2;
			break;
		
		case 2:
			func_160(&uLocal_3501, Local_5574.f_5, 0, 0, 1, 1, 1);
			if (Local_5574.f_23)
			{
				iLocal_6123 = 3;
			}
			break;
		
		case 3:
			func_259(&uLocal_3501, 0, 0);
			iLocal_6123 = 4;
			break;
		
		case 4:
			if (!unk_0x437347B10A200C4B(Local_5574[0], 0))
			{
				iVar0 = unk_0xA30B8362589C124A(Local_5574[0], -1, 0);
				if (unk_0xC844350D5D58C99A(iVar0) && !unk_0x437347B10A200C4B(iVar0, 0))
				{
					func_160(&uLocal_3501, Local_5574[0], 0, 0, 1, 1, 1);
				}
				else
				{
					func_259(&uLocal_3501, 0, 0);
					iLocal_6123 = 7;
				}
			}
			break;
		
		case 7:
			func_198(&uLocal_3501, Local_4356.f_218[0].f_110, 0, 0, 1, 1, 1);
			break;
	}
}

void func_282()
{
	switch (iLocal_6124)
	{
		case 0:
			func_198(&uLocal_3501, Local_4356[0].f_107, 0, 0, 1, 1, 1);
			if ((unk_0xC844350D5D58C99A(uLocal_5543.f_6) && !unk_0x437347B10A200C4B(uLocal_5543.f_6, 0)) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (func_203(uLocal_5543.f_6, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 1) < 250f)
				{
					iLocal_6124 = 1;
				}
			}
			break;
		
		case 1:
			func_259(&uLocal_3501, 0, 0);
			iLocal_6124 = 2;
			break;
		
		case 2:
			if (unk_0xC844350D5D58C99A(uLocal_5543.f_6))
			{
				func_160(&uLocal_3501, uLocal_5543.f_6, 0, 0, 1, 1, 1);
			}
			if (unk_0xE4EDC4B0E92C078B(uLocal_5543.f_10))
			{
				iLocal_6124 = 3;
			}
			break;
		
		case 3:
			func_259(&uLocal_3501, 0, 0);
			iLocal_6124 = 4;
			break;
		
		case 4:
			if (unk_0xC844350D5D58C99A(uLocal_5543.f_7))
			{
				func_160(&uLocal_3501, uLocal_5543.f_7, 0, 0, 1, 1, 1);
			}
			break;
	}
}

void func_283()
{
	if (!func_274(&iLocal_6135))
	{
		if (func_46())
		{
			cLocal_6154 = { func_287() };
			func_285();
			iLocal_6069 = 1;
		}
	}
	else if (iLocal_6069)
	{
		if (func_284(&uLocal_5830, "ARMSAUD", &(Local_4356[0].f_129), &cLocal_6154, 8, 0, 0))
		{
			iLocal_6069 = 0;
		}
	}
}

bool func_284(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_30(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 1;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_9(sParam2, iParam4, 0);
}

void func_285()
{
	Global_19671 = 0;
	func_286();
}

void func_286()
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

struct<6> func_287()
{
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		iVar6 = unk_0x40EFDB96B3112BA7();
		iVar6 = (iVar6 + Global_21815);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0xEF07223F00EBE9C9(&(Global_19673[iVar7])))
			{
				return Global_19673[iVar7];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0xEF07223F00EBE9C9(&(Global_19673[iVar8])))
					{
						return Global_19673[iVar8];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_19673[iVar6];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_288()
{
	if (func_292() == 0)
	{
		func_289(Local_4356[0].f_113, "DTRFKGR_HELP_02");
		func_372("PRINTING OBJECTIVE - LEVEL 1");
	}
	else
	{
		func_289(Local_4356[0].f_113, "DTRFKGR_HELP_03");
		func_372("PRINTING OBJECTIVE - LEVEL 2");
	}
}

void func_289(struct<16> Param0, char[4] cParam16)
{
	if (unk_0xEA6BC48857E0AC4C(&Param0))
	{
		func_154("DTRFKGR_02", 7500, 1);
	}
	else
	{
		func_154(&Param0, 7500, 1);
	}
	MemCopy(&cLocal_5995, {Param0}, 8);
	func_290(&iLocal_3382, cParam16);
}

void func_290(int iParam0, char* sParam1)
{
	func_41(iParam0);
	StringCopy(&Local_3346, sParam1, 32);
}

int func_291(var uParam0, float fParam1)
{
	fVar0 = 0f;
	if (unk_0xE82754C349C7B581(*uParam0, &fVar0, 0, 0))
	{
		uParam0->f_2 = fVar0;
		uParam0->f_2 = (uParam0->f_2 + fParam1);
		return 1;
	}
	return 0;
}

int func_292()
{
	if (func_254(Global_111638.f_19978, 4))
	{
		iVar0 = 0;
	}
	else if (func_254(Global_111638.f_19978, 64))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_293()
{
	func_45(&uLocal_5830, 3, 0, "OSCAR", 0, 1);
	func_8(&uLocal_5830, "ARMSAUD", &(Local_4356[0].f_129), 9, 0, 0, 0);
}

void func_294()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), 741814745, 0))
		{
			iVar0 = unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), 741814745);
			if (iVar0 < 5)
			{
				unk_0x155F8B27DA5061F5(unk_0x16F2683693E537C9(), 741814745, 5, 0);
			}
		}
		else
		{
			unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), 741814745, 5, false, true);
		}
		if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), 453432689, 0))
		{
			iVar1 = unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), 453432689);
			if (iVar1 < 100)
			{
				unk_0x155F8B27DA5061F5(unk_0x16F2683693E537C9(), 453432689, 100, 0);
			}
		}
		else
		{
			unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), 453432689, 100, false, true);
		}
		if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), 324215364, 0))
		{
			iVar2 = unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), 324215364);
			if (iVar2 < 100)
			{
				unk_0x155F8B27DA5061F5(unk_0x16F2683693E537C9(), 324215364, 100, 0);
			}
		}
		else
		{
			unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), 324215364, 100, false, true);
		}
	}
}

void func_295()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			unk_0xAB8E2DDC7AF955E0(unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)), true);
		}
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 32, false);
	}
}

int func_296()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			return func_297(unk_0x134B62B726CEC8E6(iVar0));
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_297(int iParam0)
{
	iVar1[0] = -2128233223;
	iVar1[1] = -599568815;
	iVar1[2] = 914654722;
	iVar1[3] = 1177543287;
	iVar1[4] = -16948145;
	iVar1[5] = 1770332643;
	iVar1[6] = -909201658;
	iVar1[6] = -1661854193;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == iVar1[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_298(int iParam0, int iParam1, int iParam2)
{
	if (func_318() && func_300())
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
		func_299(0);
	}
}

void func_299(int iParam0)
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

bool func_300()
{
	return unk_0xEAE0D21A50E6C7F4(Global_98744.f_20, 13);
}

void func_301()
{
	if (!unk_0xC844350D5D58C99A(iLocal_6135))
	{
		iLocal_6135 = unk_0x122AAB0B1D6F55AD(-1661854193, vLocal_6106, fLocal_6117, true, true, false);
		unk_0x3E5CE368CD085FFA(iLocal_6135, 0);
		unk_0x71199B01895C6202(-1661854193);
		if (unk_0xC844350D5D58C99A(iLocal_6135))
		{
			if (unk_0x1923A0BC6E2B14D7(iLocal_6135, 1))
			{
				unk_0xD3421E391490133B(iLocal_6135, 1, true);
			}
			if (unk_0x1923A0BC6E2B14D7(iLocal_6135, 2))
			{
				unk_0xD3421E391490133B(iLocal_6135, 2, false);
			}
			if (unk_0x1923A0BC6E2B14D7(iLocal_6135, 3))
			{
				unk_0xD3421E391490133B(iLocal_6135, 3, false);
			}
			unk_0xC002508A277213DE(iLocal_6135, 0, 0);
		}
	}
}

void func_302(int iParam0, float fParam1, bool bParam2)
{
	if (func_303(iParam0, fParam1))
	{
		if (bParam2)
		{
			func_306(&Local_3346, -1);
		}
		else
		{
			func_34(&Local_3346, 7500, 1);
		}
	}
}

int func_303(int iParam0, float fParam1)
{
	if (func_305(iParam0, fParam1))
	{
		func_304(iParam0);
		return 1;
	}
	return 0;
}

void func_304(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

int func_305(int iParam0, float fParam1)
{
	if (func_43(iParam0))
	{
		if (func_37(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_306(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

int func_307(int iParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0) != *iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_308(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, var uParam8, var uParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14)
{
	if (*uParam9)
	{
		vVar2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
		iVar1 = func_310(uParam4, vVar2, 0);
	}
	if ((*uParam8 || (!unk_0x437347B10A200C4B(*iParam0, 0) && unk_0xE934758D273C899A(*iParam0))) || (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0))
	{
		if (unk_0xE4EDC4B0E92C078B(*iParam1) && func_274(iParam0))
		{
			unk_0x142CC44DB769B57E(iParam1);
		}
		*uParam6 = !func_274(iParam0);
		return;
	}
	if (!*uParam6)
	{
		if (!func_274(iParam0))
		{
			func_309(&iLocal_3382);
			if (unk_0x8FA469D9C5F1A01F())
			{
				unk_0xA37A90C62806D848(1);
				func_372("CLEARING HELP VIA UPDATE_MISSION_CAR");
			}
			unk_0x790015DC92C918E2();
			*uParam5 = unk_0x1C0640BA9A7327B3();
			if (bParam12)
			{
				if (*iParam10)
				{
					if (*uParam9)
					{
						func_34("DTRSHRD_03", 7500, 1);
						*iParam10 = 0;
					}
					else
					{
						func_34("DTRSHRD_03", 7500, 1);
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
					func_372("REMOVING myLocationBlip");
				}
				iVar0++;
			}
			func_372("bOutOfVehicle IS TRUE");
			*uParam6 = 1;
		}
	}
	else if (func_274(iParam0))
	{
		unk_0x142CC44DB769B57E(iParam1);
		unk_0x790015DC92C918E2();
		if (bParam13)
		{
			iVar0 = 0;
			while (iVar0 < *uParam3)
			{
				if (!unk_0xE4EDC4B0E92C078B((*uParam3)[iVar0]) && !func_5(*uParam4[iVar0], 0f, 0f, 0f, 0))
				{
					bLocal_3369 = true;
					if (!*uParam9 && iParam14)
					{
						(*uParam3)[iVar0] = unk_0x6CC513A908911CF0(*uParam4[iVar0]);
						func_372("ADDING BACK IN myLocationBlip");
					}
					if (*uParam9)
					{
						func_372("bPlaneMission IS TRUE");
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
						func_372("ADDING IN BLIPS FOR ENTITIES");
					}
					iVar0++;
				}
			}
		}
		*uParam5 = 0;
		func_372("bOutOfVehicle IS FALSE");
		*uParam6 = 0;
	}
}

void func_309(var uParam0)
{
	func_304(uParam0);
	StringCopy(&Local_3346, "", 32);
}

int func_310(var uParam0, vector3 vParam1, float fParam4)
{
	iVar1 = 0;
	fVar2 = 1E+09f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_195(*uParam0[iVar0]))
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

void func_311(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, char* sParam6, var uParam7)
{
	if (!*uParam3)
	{
		*uParam0 = unk_0x1C0640BA9A7327B3();
		*uParam3 = 1;
	}
	iVar0 = (unk_0x1C0640BA9A7327B3() - *uParam0);
	if (IntToFloat(iVar0) > *uParam1)
	{
		*uParam4 = 1;
	}
	if (*uParam2 == -1f)
	{
		*uParam2 = 30000f;
	}
	fLocal_3364 = (*uParam1 - to_float(iVar0));
	fLocal_3364 = fLocal_3364;
	if (!*uParam5)
	{
		if (IntToFloat((round(*uParam1) - iVar0)) <= *uParam2)
		{
			func_8(uParam7, "ARMSAUD", sParam6, 9, 0, 0, 0);
			func_372("GIVING PLAYER TIME WARNING");
			*uParam5 = 1;
		}
	}
	iVar1 = (round(*uParam1) - iVar0);
	if (iVar1 <= 11000 && iVar1 >= 5000)
	{
		if (func_43(&iLocal_3385))
		{
			if (func_37(&iLocal_3385) > 1f)
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "TIMER", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_41(&iLocal_3385);
			}
		}
		else
		{
			func_40(&iLocal_3385);
		}
	}
	else if (iVar1 <= 5000 && iVar1 > 0)
	{
		if (func_43(&iLocal_3385))
		{
			if (func_37(&iLocal_3385) > 0,5f)
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "TIMER", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_41(&iLocal_3385);
			}
		}
		else
		{
			func_40(&iLocal_3385);
		}
	}
	func_119(iVar1, "DTRFKGR_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

void func_312(char* sParam0, int iParam1)
{
	if (Global_110278 && iParam1)
	{
		if (func_186(sParam0) && !unk_0x79BBCD5833294FD5())
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
				func_315(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_314((Global_111638.f_20405.f_145 - 1));
			Global_111638.f_20405.f_145 = (Global_111638.f_20405.f_145 - 1);
			func_313();
			return;
		}
		iVar0++;
	}
}

void func_313()
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

void func_314(int iParam0)
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

void func_315(int iParam0, int iParam1)
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

void func_316(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_318())
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
		func_299(1);
	}
}

int func_317()
{
	if (!Global_98744 == 10 && !Global_98744 == 9)
	{
		return 0;
	}
	return Global_98744.f_2;
}

int func_318()
{
	if (Global_98744 == 10 || Global_98744 == 9)
	{
		return 1;
	}
	return 0;
}

int func_319()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_320(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4, bool bParam5, var uParam6, var uParam7, var uParam8, bool bParam9)
{
	if (*iParam0)
	{
		func_372("bDoTimed IS TRUE");
	}
	if (*iParam1)
	{
		func_372("bDoChase IS TRUE");
	}
	if (*iParam2)
	{
		func_372("bDoFragile IS TRUE");
	}
	if (*bParam3)
	{
		func_372("bDoAmbush IS TRUE");
	}
	if (*uParam4)
	{
		func_372("bDoPlane IS TRUE");
	}
	if (*bParam5)
	{
		func_372("bDoSmugglers IS TRUE");
	}
	if (*uParam6)
	{
		func_372("bDoFlareCutscene IS TRUE");
	}
	if (*uParam7)
	{
		func_372("bDoPoliceChase IS TRUE");
	}
	if (*uParam8)
	{
		func_372("bDoContactCutscene IS TRUE");
	}
	if (*bParam9)
	{
		func_372("bDoHijack IS TRUE");
	}
}

int func_321()
{
	if (!iLocal_6041)
	{
		bLocal_6031 = true;
		iLocal_6120 = unk_0x1C0640BA9A7327B3();
		iLocal_6041 = 1;
	}
	if (!iLocal_6029)
	{
		func_322();
	}
	if (!func_43(&Local_4255))
	{
		func_40(&Local_4255);
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0xDF1306B443CD3D15(iLocal_6135, 0))
	{
		if (func_305(&Local_4255, 12f))
		{
			unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_6135, -1);
			func_372("TRIGGERING FAIL SAFE");
			func_372("FAIL SAFE - smugArgs.bSmugglerReachedDest = TRUE");
			Local_5574.f_27 = 1;
			return 1;
		}
	}
	switch (iLocal_3636)
	{
		case 0:
			unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
			unk_0x1305278186D1C53E(iLocal_6148, Local_5574[0], 0f, 0f, 0f, 1);
			if (!unk_0xEB6A8945D1AC98A1(Local_5574.f_10) && unk_0xDF1306B443CD3D15(Local_5574.f_2, 0))
			{
				unk_0xF821F915BC24D246(Local_5574.f_10, Local_5574.f_2, -1);
			}
			iLocal_3636 = 1;
			break;
		
		case 1:
			if (func_305(&Local_4255, 1f))
			{
				unk_0x608A456FDD8A83D8(iLocal_6148, Local_4356.f_218[1].f_152);
				unk_0x5F3CBA6EB9341C90(iLocal_6148, Local_4356.f_218[1].f_155, 2);
				unk_0x5818C8D5303DCCF8(iLocal_6148, 35f);
				unk_0x91F5B0244AAE6222(iLocal_6148, "ROAD_VIBRATION_SHAKE", 2f);
				unk_0x1305278186D1C53E(iLocal_6148, Local_5574.f_2, 0f, 0f, 0f, 1);
				iLocal_3636 = 2;
			}
			break;
		
		case 2:
			if (func_305(&Local_4255, 2f))
			{
				unk_0x1E9649458B15960F(Local_5574.f_2, false);
				if (!unk_0xEB6A8945D1AC98A1(Local_5574.f_10) && unk_0xDF1306B443CD3D15(Local_5574.f_2, 0))
				{
					unk_0xF82EA857DA10E0CD(&iVar0);
					unk_0xDD353D0E9C789D0E(&iVar0);
					unk_0x9AFA0796FDCABCD5(0, Local_5574.f_2, 0, 0, Local_4356.f_218[1].f_164, Local_4356.f_218[1].f_164.f_1, (Local_4356.f_218[1].f_164.f_2 + 50f), 4, 40f, -1f, 0f, 60, 30, -1082130432, 0);
					unk_0x9AFA0796FDCABCD5(0, Local_5574.f_2, 0, 0, (Local_4356.f_218[1].f_164 + 500f), (Local_4356.f_218[1].f_164.f_1 + 500f), (Local_4356.f_218[1].f_164.f_2 + 10f), 4, 40f, -1f, 0f, 60, 30, -1082130432, 0);
					unk_0x75ABDC5F81978924(iVar0);
					if (!unk_0xEB6A8945D1AC98A1(Local_5574.f_10))
					{
						unk_0x78ADC381772E3D54(Local_5574.f_10, iVar0);
					}
					unk_0xF82EA857DA10E0CD(&iVar0);
					iLocal_3636 = 3;
				}
			}
			break;
		
		case 3:
			if (func_305(&Local_4255, 5f))
			{
				if (unk_0xDF1306B443CD3D15(Local_5574.f_3, 0) && !unk_0xEB6A8945D1AC98A1(Local_5574.f_11))
				{
					unk_0xF821F915BC24D246(Local_5574.f_11, Local_5574.f_3, -1);
				}
				if (unk_0xDF1306B443CD3D15(Local_5574.f_3, 0) && !unk_0xEB6A8945D1AC98A1(Local_5574.f_11))
				{
					unk_0xDE5F9F54005367A1(unk_0x68F4C0EC296D3901(Local_5574.f_3, true), &vVar1, 1, 1077936128, 0);
					unk_0xA47B46945FF6DE74(Local_5574.f_3, vVar1, 1, false, 0, 1);
					iLocal_3636 = 4;
				}
			}
			break;
		
		case 4:
			if (func_305(&Local_4255, 7f))
			{
				if (unk_0xDF1306B443CD3D15(Local_5574.f_3, 0) && !unk_0xEB6A8945D1AC98A1(Local_5574.f_11))
				{
					unk_0xE072601B4380E9DF(Local_5574.f_11, Local_5574.f_3, 20f, 786597);
				}
				func_372("smugArgs.bSmugglerReachedDest = TRUE");
				Local_5574.f_27 = 1;
				func_372("RETURNING TRUE ON SMUGGLERS_ENDING_CUTSCENE");
				return 1;
			}
			break;
		
		case 5:
			unk_0x9A8DDC7C522F5BF5(iLocal_6148, 0);
			unk_0x9A8DDC7C522F5BF5(iLocal_6149, 0);
			unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
			unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_6135, -1);
			unk_0x2FB9A57162E54BAB(0f);
			if (unk_0xDF1306B443CD3D15(Local_5574.f_3, 0) && !unk_0xEB6A8945D1AC98A1(Local_5574.f_11))
			{
				unk_0xF821F915BC24D246(Local_5574.f_11, Local_5574.f_3, -1);
				unk_0xE072601B4380E9DF(Local_5574.f_11, Local_5574.f_3, 20f, 786597);
			}
			unk_0x1E9649458B15960F(Local_5574.f_2, false);
			if (!unk_0xEB6A8945D1AC98A1(Local_5574.f_10) && unk_0xDF1306B443CD3D15(Local_5574.f_2, 0))
			{
				unk_0xF82EA857DA10E0CD(&iVar0);
				unk_0xDD353D0E9C789D0E(&iVar0);
				unk_0x9AFA0796FDCABCD5(0, Local_5574.f_2, 0, 0, Local_4356.f_218[1].f_164, Local_4356.f_218[1].f_164.f_1, (Local_4356.f_218[1].f_164.f_2 + 50f), 4, 40f, -1f, 0f, 60, 30, -1082130432, 0);
				unk_0x9AFA0796FDCABCD5(0, Local_5574.f_2, 0, 0, (Local_4356.f_218[1].f_164 + 500f), (Local_4356.f_218[1].f_164.f_1 + 500f), (Local_4356.f_218[1].f_164.f_2 + 10f), 4, 40f, -1f, 0f, 60, 30, -1082130432, 0);
				unk_0x75ABDC5F81978924(iVar0);
				if (!unk_0xEB6A8945D1AC98A1(Local_5574.f_10))
				{
					unk_0x78ADC381772E3D54(Local_5574.f_10, iVar0);
				}
				unk_0xF82EA857DA10E0CD(&iVar0);
			}
			func_372("INSIDE STATE - SMUGGLERS_ENDING_SKIP_01");
			iLocal_3636 = 6;
			break;
		
		case 6:
			unk_0x82E51BCA72537B6C(1000);
			while (!unk_0x0F1CCD77290EE12F())
			{
				wait(0);
			}
			func_372("smugArgs.bSmugglerReachedDest = TRUE VIA SKIP");
			Local_5574.f_27 = 1;
			iLocal_6029 = 0;
			func_372("RETURNING TRUE IN STATE- SMUGGLERS_ENDING_SKIP_02 ");
			return 1;
			break;
	}
	return 0;
}

void func_322()
{
	if (func_323() && unk_0x1C0640BA9A7327B3() >= iLocal_6120 + 1000)
	{
		func_372("SKIPPED CUTSCENE");
		unk_0x53491B90E4FD0E56(500);
		while (!unk_0x757EF87A33649210())
		{
			wait(0);
		}
		unk_0x790015DC92C918E2();
		func_128(0);
		func_139();
		iLocal_6029 = 1;
		if (bLocal_6032)
		{
			iLocal_3644 = 4;
		}
		if (bLocal_6030)
		{
			iLocal_3637 = 4;
		}
		if (bLocal_6031)
		{
			iLocal_3636 = 5;
		}
	}
}

int func_323()
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

void func_324()
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

void func_325(bool bParam0)
{
	if (bParam0)
	{
		func_326();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			unk_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_131(0))
		{
			func_128(0);
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

void func_326()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_327()
{
	if (Local_4356[0].f_145 == 0)
	{
		bLocal_3373 = true;
		bLocal_3374 = false;
		bLocal_3375 = false;
	}
	else if (Local_4356[0].f_145 == 1)
	{
		bLocal_3373 = false;
		bLocal_3374 = true;
		bLocal_3375 = false;
	}
	else if (Local_4356[0].f_145 == 2)
	{
		bLocal_3373 = false;
		bLocal_3374 = false;
		bLocal_3375 = true;
	}
	func_328();
	iLocal_6121 = (unk_0x09AC81E49EA267F7(0, 65535) % 3);
	unk_0x523BCC9DC80CD82F(Local_4356.f_1147);
	func_372("REQUESTING LOADED CARGO");
	unk_0x523BCC9DC80CD82F(-1207771834);
	func_372("REQUESTING REBEL");
	unk_0x523BCC9DC80CD82F(-1661854193);
	func_372("REQUESTING DUNE");
	if (!bLocal_6019)
	{
		unk_0x523BCC9DC80CD82F(445804908);
		func_372("REQUESTING - Prop_Flare_01b");
	}
	unk_0x9E5E60D8C63FD9D1();
	if (func_292() == 1)
	{
		if (bLocal_3373)
		{
			Local_4356.f_1101 = 1466037421;
			unk_0x523BCC9DC80CD82F(Local_4356.f_1101);
			func_372("REQUESTING MEXICAN BAD GUY - G_M_M_MEXBOSS_01");
		}
		else if (bLocal_3374)
		{
			Local_4356.f_1101 = 62440720;
			unk_0x523BCC9DC80CD82F(Local_4356.f_1101);
			func_372("REQUESTING MARABUNTA BAD GUY - G_M_Y_SalvaGoon_03");
		}
		else if (bLocal_3375)
		{
			Local_4356.f_1101 = 1822107721;
			unk_0x523BCC9DC80CD82F(Local_4356.f_1101);
			func_372("REQUESTING HILLBILLY BAD GUY - A_M_M_HillBilly_01");
		}
	}
	unk_0xD7992BEF7A9D109E("DTRFKGR", 2);
	unk_0xD7992BEF7A9D109E("DTRSHRD", 3);
	if (bLocal_6014)
	{
		iVar0 = 0;
		while (iVar0 < Local_4356.f_1136)
		{
			unk_0x523BCC9DC80CD82F(Local_4356.f_1138[iVar0]);
			func_372("REQUESTING SMUGGLERS VEHICLES");
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (Local_4356[0].f_66[iVar0] == 0)
			{
				if (Local_4356[0].f_66[iVar0].f_18)
				{
					unk_0x36187931D29E5BBE(Local_4356[0].f_66[iVar0].f_2, Local_4356[0].f_66[iVar0].f_3);
					func_372("REQUESTING VEHICLE RECORDING FOR SMUGGLERS");
					func_372("CarRecInfo:");
					func_372(Local_4356[0].f_66[iVar0].f_3);
				}
				else if (Local_4356[0].f_66[iVar0].f_19)
				{
					unk_0x29398344B9E5B8A7(Local_4356[0].f_66[iVar0].f_4);
				}
			}
			iVar0++;
		}
	}
	if (bLocal_6010)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Local_4356[0][iVar0].f_2)
			{
				if (Local_4356[0][iVar0] == 0)
				{
					unk_0x523BCC9DC80CD82F(Local_4356[0][iVar0].f_1);
					func_372("REQUESTING CAR RECORDING VEHICLE");
					unk_0x36187931D29E5BBE(Local_4356[0][iVar0].f_3, Local_4356[0][iVar0].f_4);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Local_4356[0][iVar0].f_2)
			{
				if (Local_4356[0][iVar0] == 1)
				{
					unk_0x523BCC9DC80CD82F(Local_4356[0][iVar0].f_1);
					unk_0x36187931D29E5BBE(Local_4356[0][iVar0].f_3, Local_4356[0][iVar0].f_4);
				}
			}
			iVar0++;
		}
	}
	while (!unk_0x67C1D9E5B91B2E37(2) || !unk_0x67C1D9E5B91B2E37(3))
	{
		wait(0);
		func_372("WAITING ON TEXT SLOTS");
	}
	while (!unk_0xB87F6CF6E5628C67(445804908))
	{
		wait(0);
		func_372("WAITING ON Prop_Flare_01b");
	}
	while (!unk_0xB87F6CF6E5628C67(-1207771834) || !unk_0xB87F6CF6E5628C67(-1661854193))
	{
		wait(0);
		func_372("WAITING ON REBEL AND DUNE");
	}
	if (bLocal_6014)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (Local_4356[0].f_66[iVar0] == 0)
			{
				if (Local_4356[0].f_66[iVar0].f_18)
				{
					while (!unk_0x3DDA6C6A285628E4(Local_4356[0].f_66[iVar0].f_2, Local_4356[0].f_66[iVar0].f_3))
					{
						func_372("DRUG TRAFFICKING GROUND: trying to load Smugglers recordings");
						wait(0);
					}
				}
				else if (Local_4356[0].f_66[iVar0].f_19)
				{
					while (!unk_0x1C2E18E9C63BEB77(Local_4356[0].f_66[iVar0].f_4))
					{
						func_372("DRUG TRAFFICKING GROUND: trying to load Smugglers WAYPOINT recordings");
						wait(0);
					}
				}
			}
			iVar0++;
		}
	}
	while (!unk_0x67C1D9E5B91B2E37(2) || !unk_0xB87F6CF6E5628C67(Local_4356.f_1147))
	{
		func_372("DRUG TRAFFICKING GROUND:  trying to load string table, and cargo model");
		wait(0);
	}
	bLocal_6042 = true;
	if (bLocal_6010)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Local_4356[0][iVar0].f_2)
			{
				if (Local_4356[0][iVar0] == 0)
				{
					while (!unk_0x3DDA6C6A285628E4(Local_4356[0][iVar0].f_3, Local_4356[0][iVar0].f_4) || !unk_0xB87F6CF6E5628C67(Local_4356[0][iVar0].f_1))
					{
						func_372("DRUG TRAFFICKING GROUND:  trying to load ambush models");
						wait(0);
					}
				}
			}
			iVar0++;
		}
	}
	while (!unk_0x25F7A4D42AF2AB93())
	{
		wait(0);
		func_372("WAITING ON PARTICLE EFFECTS");
	}
	if (!bLocal_6042)
	{
		func_372("Waiting for vehicle recording to be loaded");
		wait(0);
	}
	unk_0xAB8E2DDC7AF955E0(1770332643, true);
	unk_0xAB8E2DDC7AF955E0(-1661854193, true);
}

void func_328()
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

void func_329()
{
	while (!func_331(800))
	{
		wait(0);
	}
	unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
	unk_0x90CECE08EA8E77CC(Local_4356.f_1090);
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0xBFB24B9B15F6108F(unk_0x16F2683693E537C9(), Local_4356.f_1090);
		unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), Local_4356.f_1093);
	}
	wait(500);
	unk_0x2FB9A57162E54BAB(0f);
	while (!func_330(800))
	{
		wait(0);
	}
}

int func_330(int iParam0)
{
	unk_0x82E51BCA72537B6C(iParam0);
	while (!unk_0x0F1CCD77290EE12F())
	{
		wait(0);
	}
	return 1;
}

int func_331(int iParam0)
{
	unk_0x53491B90E4FD0E56(iParam0);
	while (!unk_0x757EF87A33649210())
	{
		wait(0);
	}
	return 1;
}

void func_332(struct<97> Param0, bool bParam97)
{
	func_335(&(Local_4356[0]), Param0.f_8[0]);
	if (bParam97)
	{
		func_335(&(Local_4356.f_218[0]), Param0.f_13[0]);
		func_335(&(Local_4356.f_218[1]), Param0.f_13[1]);
	}
	Local_4356.f_1102 = Param0.f_55;
	Local_4356.f_1103 = Param0.f_56;
	Local_4356.f_1104 = Param0.f_57;
	if (Param0.f_6 > 0)
	{
		Local_4356.f_1106 = Param0.f_6;
		Local_4356.f_1108 = Param0.f_7;
		func_372("OVERRIDING CAR CHASER DATA");
	}
	if (Param0.f_76[0] != 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_4356.f_1108)
		{
			Local_4356.f_1118[iVar0] = Param0.f_76[iVar0];
			func_372("REPLACING PED MODELS");
			iVar0++;
		}
	}
	if (Param0.f_85[0] != 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_4356.f_1106)
		{
			Local_4356.f_1109[iVar0] = Param0.f_85[iVar0];
			func_372("REPLACING VEHICLE MODELS");
			iVar0++;
		}
	}
	func_334(&Local_4356, &bLocal_6013, &bLocal_6025, &bLocal_6010, &bLocal_6011, &uLocal_6009, &bLocal_6014, &uLocal_6017, &uLocal_6012, &uLocal_6018, &bLocal_6019, Param0);
	func_333(&Local_4356, Param0);
}

void func_333(var uParam0, struct<4> Param1, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97)
{
	switch (Param1.f_3)
	{
		case 0:
			uParam0->f_1105 = 1;
			uParam0->f_1107 = 1;
			uParam0->f_1094 = 8;
			break;
		
		case 1:
			uParam0->f_1105 = 2;
			uParam0->f_1107 = 1;
			uParam0->f_1094 = 4;
			break;
		
		case 2:
			uParam0->f_1105 = 2;
			uParam0->f_1107 = 1;
			uParam0->f_1094 = 4;
			break;
		
		default:
			break;
	}
}

void func_334(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, struct<51> Param11, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107)
{
	*iParam2 = Param11.f_38;
	*iParam4 = Param11.f_39;
	*iParam3 = Param11.f_43;
	*iParam1 = Param11.f_42;
	*uParam5 = Param11.f_44;
	*uParam6 = Param11.f_47;
	*uParam7 = Param11.f_48;
	*uParam8 = Param11.f_40;
	*uParam9 = Param11.f_49;
	*uParam10 = Param11.f_50;
	if (!uParam0->f_1089)
	{
		*iParam3 = 0;
	}
	if (!uParam0->f_1088)
	{
		*iParam4 = 0;
	}
	if (!uParam0->f_1087)
	{
		*uParam5 = 0;
	}
	if (*uParam6)
	{
		*iParam3 = 0;
		*iParam2 = 0;
		*iParam4 = 0;
		*uParam8 = 0;
	}
}

int func_335(var uParam0, int iParam1)
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
			uParam0[0]->f_1 = func_336();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "PlaneGraveyardGround";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 2305,884f, 3053,964f, 45,6252f };
			uParam0[1]->f_8 = 0,0386f;
			uParam0[1]->f_9 = 0,0166f;
			uParam0[1]->f_10 = -0,2598f;
			uParam0[1]->f_11 = 0,9647f;
			uParam0[1]->f_1 = func_336();
			(*uParam0)[2] = 0;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "PlaneGraveyardGround";
			uParam0[2]->f_3 = 103;
			uParam0[2]->f_5 = { 2416,517f, 3173,679f, 48,2513f };
			uParam0[2]->f_8 = 0,0018f;
			uParam0[2]->f_9 = 0,0105f;
			uParam0[2]->f_10 = 0,8773f;
			uParam0[2]->f_11 = 0,4797f;
			uParam0[2]->f_1 = func_336();
			(*uParam0)[3] = 0;
			uParam0[3]->f_2 = 1;
			uParam0[3]->f_4 = "PlaneGraveyardGround";
			uParam0[3]->f_3 = 104;
			uParam0[3]->f_5 = { 2306,697f, 3186,073f, 46,2549f };
			uParam0[3]->f_8 = 0,0211f;
			uParam0[3]->f_9 = 0,0036f;
			uParam0[3]->f_10 = 0,9995f;
			uParam0[3]->f_11 = -0,0235f;
			uParam0[3]->f_1 = func_336();
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
			uParam0[0]->f_1 = func_336();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "NEW_TYPE1_01";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 2366,147f, 5640,438f, 88,7714f };
			uParam0[1]->f_8 = 0,0794f;
			uParam0[1]->f_9 = -0,0272f;
			uParam0[1]->f_10 = 0,7464f;
			uParam0[1]->f_11 = 0,6602f;
			uParam0[1]->f_1 = func_336();
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
			uParam0[0]->f_1 = func_336();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "NEW_TYPE1_02";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 3767,36f, 4528,497f, 5,2465f };
			uParam0[1]->f_8 = 0,0233f;
			uParam0[1]->f_9 = 0,0886f;
			uParam0[1]->f_10 = 0,9359f;
			uParam0[1]->f_11 = 0,34f;
			uParam0[1]->f_1 = func_336();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "NEW_TYPE1_02";
			uParam0[1]->f_3 = 103;
			uParam0[1]->f_5 = { 3589,693f, 4594,061f, 26,9929f };
			uParam0[1]->f_8 = 0,1094f;
			uParam0[1]->f_9 = 0,1563f;
			uParam0[1]->f_10 = 0,9815f;
			uParam0[1]->f_11 = 0,0156f;
			uParam0[1]->f_1 = func_336();
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
			uParam0[0]->f_1 = func_336();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "NEW_TYPE1_03";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 2697,863f, 3346,009f, 56,7158f };
			uParam0[1]->f_8 = 0,0581f;
			uParam0[1]->f_9 = -0,0074f;
			uParam0[1]->f_10 = 0,9615f;
			uParam0[1]->f_11 = 0,2686f;
			uParam0[1]->f_1 = func_336();
			(*uParam0)[2] = 0;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "NEW_TYPE1_03";
			uParam0[2]->f_3 = 103;
			uParam0[2]->f_5 = { 2534,338f, 3230,476f, 51,7537f };
			uParam0[2]->f_8 = 0,0483f;
			uParam0[2]->f_9 = -0,0277f;
			uParam0[2]->f_10 = -0,4655f;
			uParam0[2]->f_11 = 0,8833f;
			uParam0[2]->f_1 = func_336();
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
			uParam0[0]->f_1 = func_336();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "NEW_TYPE1_04";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 1735,854f, 3167,743f, 42,7488f };
			uParam0[1]->f_8 = 0,0047f;
			uParam0[1]->f_9 = 0,0033f;
			uParam0[1]->f_10 = 0,9995f;
			uParam0[1]->f_11 = 0,0313f;
			uParam0[1]->f_1 = func_336();
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
			uParam0[0]->f_1 = func_336();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "NEW_TYPE1_05";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 1867,285f, 3437,477f, 39,7184f };
			uParam0[1]->f_8 = 0,0253f;
			uParam0[1]->f_9 = 0,0153f;
			uParam0[1]->f_10 = 0,714f;
			uParam0[1]->f_11 = -0,6995f;
			uParam0[1]->f_1 = func_336();
			(*uParam0)[2] = 0;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "NEW_TYPE1_05";
			uParam0[2]->f_3 = 103;
			uParam0[2]->f_5 = { 1890,261f, 3391,307f, 40,7963f };
			uParam0[2]->f_8 = 0,0134f;
			uParam0[2]->f_9 = 0,0213f;
			uParam0[2]->f_10 = -0,4276f;
			uParam0[2]->f_11 = 0,9036f;
			uParam0[2]->f_1 = func_336();
			(*uParam0)[3] = 0;
			uParam0[3]->f_2 = 1;
			uParam0[3]->f_4 = "NEW_TYPE1_05";
			uParam0[3]->f_3 = 104;
			uParam0[3]->f_5 = { 2067,032f, 3330,474f, 45,1739f };
			uParam0[3]->f_8 = 0,0121f;
			uParam0[3]->f_9 = 0,0396f;
			uParam0[3]->f_10 = 0,373f;
			uParam0[3]->f_11 = 0,9269f;
			uParam0[3]->f_1 = func_336();
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
			uParam0[0]->f_1 = func_336();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "NEW_TYPE1_06";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 2625,508f, 2814,443f, 33,1277f };
			uParam0[1]->f_8 = 0,0499f;
			uParam0[1]->f_9 = -0,0287f;
			uParam0[1]->f_10 = -0,3652f;
			uParam0[1]->f_11 = 0,9292f;
			uParam0[1]->f_1 = func_336();
			(*uParam0)[2] = 0;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "NEW_TYPE1_06";
			uParam0[2]->f_3 = 103;
			uParam0[2]->f_5 = { 2694,796f, 2796,249f, 34,4047f };
			uParam0[2]->f_8 = 0,1772f;
			uParam0[2]->f_9 = -0,0431f;
			uParam0[2]->f_10 = -0,1088f;
			uParam0[2]->f_11 = 0,9772f;
			uParam0[2]->f_1 = func_336();
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
			uParam0[0]->f_1 = func_336();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "NEW_TYPE1_07";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 2941,709f, 4464,889f, 46,4858f };
			uParam0[1]->f_8 = 0,0103f;
			uParam0[1]->f_9 = 0,0254f;
			uParam0[1]->f_10 = 0,8549f;
			uParam0[1]->f_11 = 0,5181f;
			uParam0[1]->f_1 = func_336();
			(*uParam0)[2] = 0;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "NEW_TYPE1_07";
			uParam0[2]->f_3 = 103;
			uParam0[2]->f_5 = { 2774,921f, 4468,448f, 47,5966f };
			uParam0[2]->f_8 = 0,0053f;
			uParam0[2]->f_9 = -0,0205f;
			uParam0[2]->f_10 = -0,3996f;
			uParam0[2]->f_11 = 0,9164f;
			uParam0[2]->f_1 = func_336();
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
			uParam0[0]->f_1 = func_336();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "NEW_TYPE1_08";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 1117,591f, 3328,312f, 34,794f };
			uParam0[1]->f_8 = 0,0001f;
			uParam0[1]->f_9 = 0,0037f;
			uParam0[1]->f_10 = 0,9944f;
			uParam0[1]->f_11 = 0,1059f;
			uParam0[1]->f_1 = func_336();
			(*uParam0)[2] = 0;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "NEW_TYPE1_08";
			uParam0[2]->f_3 = 103;
			uParam0[2]->f_5 = { 1357,359f, 3275,735f, 37,4399f };
			uParam0[2]->f_8 = -0,0329f;
			uParam0[2]->f_9 = 0,015f;
			uParam0[2]->f_10 = 0,6826f;
			uParam0[2]->f_11 = 0,7299f;
			uParam0[2]->f_1 = func_336();
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
			uParam0[0]->f_1 = func_336();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "NEW_TYPE1_09";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 2749,975f, 4049,285f, 60f };
			uParam0[1]->f_8 = -0,0153f;
			uParam0[1]->f_9 = 0,0378f;
			uParam0[1]->f_10 = 0,3854f;
			uParam0[1]->f_11 = 0,9219f;
			uParam0[1]->f_1 = func_336();
			(*uParam0)[2] = 0;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "NEW_TYPE1_09";
			uParam0[2]->f_3 = 103;
			uParam0[2]->f_5 = { 2770,138f, 4202,668f, 46,3271f };
			uParam0[2]->f_8 = -0,0508f;
			uParam0[2]->f_9 = -0,0362f;
			uParam0[2]->f_10 = 0,8874f;
			uParam0[2]->f_11 = 0,4568f;
			uParam0[2]->f_1 = func_336();
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

int func_336()
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

int func_337(var uParam0, int iParam1)
{
	func_335(&(uParam0->f_218[0]), 25);
	switch (iParam1)
	{
		case 0:
			uParam0->f_1101 = -1736970383;
			func_335(uParam0[0], 1);
			func_335(&(uParam0->f_218[0]), 26);
			func_335(&(uParam0->f_218[1]), 27);
			uParam0->f_1087 = 1;
			uParam0->f_1089 = 1;
			uParam0->f_1088 = 1;
			uParam0->f_1090 = { 1758,999f, 3291,629f, 40,1563f };
			uParam0->f_1093 = 290,3184f;
			uParam0->f_1094 = 8;
			uParam0->f_1095 = 2;
			uParam0->f_1096 = { 1767,517f, 3291,979f, 40,2355f };
			uParam0->f_1099 = 259,6187f;
			uParam0->f_1100 = 1518533038;
			uParam0->f_1141 = -1579533167;
			uParam0->f_1142[0] = -114291515;
			uParam0->f_1142[1] = -114291515;
			uParam0->f_1142[2] = -114291515;
			uParam0->f_1142[3] = -114291515;
			uParam0->f_1148 = 368603149;
			uParam0->f_1102 = 120000f;
			uParam0->f_1105 = 1;
			uParam0->f_1107 = 1;
			uParam0->f_1106 = 2;
			uParam0->f_1108 = 2;
			uParam0->f_1127[0] = -1;
			uParam0->f_1127[1] = 0;
			uParam0->f_1127[2] = -1;
			uParam0->f_1127[3] = 0;
			uParam0->f_1127[4] = -1;
			uParam0->f_1127[5] = 0;
			uParam0->f_1127[6] = -1;
			uParam0->f_1127[7] = 0;
			uParam0->f_1109[0] = func_336();
			uParam0->f_1109[1] = func_336();
			uParam0->f_1109[2] = func_336();
			uParam0->f_1109[3] = func_336();
			uParam0->f_1118[0] = -1736970383;
			uParam0->f_1118[1] = -48477765;
			uParam0->f_1118[2] = -1736970383;
			uParam0->f_1118[3] = -48477765;
			uParam0->f_1136 = 1;
			uParam0->f_1137 = 2;
			uParam0->f_1138[0] = -1207771834;
			uParam0->f_1140 = 788747387;
			uParam0->f_1147 = 1877891248;
			uParam0->f_1149 = 1270590574;
			return 1;
			break;
		
		case 2:
			func_335(uParam0[0], 15);
			uParam0->f_1087 = 1;
			uParam0->f_1089 = 1;
			uParam0->f_1088 = 1;
			uParam0->f_1090 = { 1847,282f, 4550,047f, 28,8452f };
			uParam0->f_1093 = 185,4917f;
			uParam0->f_1094 = 4;
			uParam0->f_1096 = { 1847,282f, 4550,047f, 28,8452f };
			uParam0->f_1099 = 185,4917f;
			uParam0->f_1100 = 400514754;
			uParam0->f_1102 = 120000f;
			uParam0->f_1105 = 2;
			uParam0->f_1107 = 1;
			uParam0->f_1106 = 2;
			uParam0->f_1108 = 2;
			uParam0->f_1127[0] = -1;
			uParam0->f_1127[1] = 0;
			uParam0->f_1127[2] = 2;
			uParam0->f_1109[0] = 1033245328;
			uParam0->f_1109[1] = -1030275036;
			uParam0->f_1118[0] = -1736970383;
			uParam0->f_1118[1] = -48477765;
			uParam0->f_1118[2] = -48477765;
			uParam0->f_1136 = 2;
			uParam0->f_1137 = 1;
			uParam0->f_1138[0] = -1030275036;
			uParam0->f_1140 = 353883353;
			return 1;
			break;
	}
	return 0;
}

void func_338(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 158;
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			uParam1->f_38 = 1;
			uParam1->f_39 = 0;
			uParam1->f_43 = 1;
			uParam1->f_4 = 1;
			uParam1->f_8[0] = 69;
			uParam1->f_13[0] = 26;
			uParam1->f_55 = 90000f;
			uParam1->f_56 = 35000f;
			uParam1->f_57 = 22000f;
			func_368(&(Global_111638.f_19978), 4);
			func_341(&(Global_111638.f_19978), 64);
			break;
		
		case 1:
			*uParam1 = 159;
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			uParam1->f_47 = 1;
			uParam1->f_4 = 1;
			uParam1->f_8[0] = 22;
			uParam1->f_13[0] = 26;
			uParam1->f_13[1] = 23;
			uParam1->f_55 = 45000f;
			func_368(&(Global_111638.f_19978), 64);
			func_341(&(Global_111638.f_19978), 4);
			break;
		
		case 2:
			*uParam1 = 160;
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			uParam1->f_38 = 1;
			uParam1->f_39 = 0;
			uParam1->f_43 = 1;
			uParam1->f_4 = 1;
			uParam1->f_8[0] = 61;
			uParam1->f_13[0] = 26;
			uParam1->f_55 = 100000f;
			uParam1->f_56 = 35000f;
			uParam1->f_57 = 25000f;
			func_368(&(Global_111638.f_19978), 4);
			func_341(&(Global_111638.f_19978), 64);
			break;
		
		case 3:
			*uParam1 = 161;
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			uParam1->f_47 = 1;
			uParam1->f_4 = 1;
			uParam1->f_8[0] = 40;
			uParam1->f_13[0] = 26;
			uParam1->f_13[1] = 33;
			uParam1->f_55 = 45000f;
			func_368(&(Global_111638.f_19978), 64);
			func_341(&(Global_111638.f_19978), 4);
			break;
		
		case 4:
			*uParam1 = 162;
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			uParam1->f_38 = 1;
			uParam1->f_39 = 0;
			uParam1->f_43 = 1;
			uParam1->f_4 = 1;
			uParam1->f_8[0] = 65;
			uParam1->f_13[0] = 26;
			uParam1->f_55 = 100000f;
			uParam1->f_56 = 30000f;
			uParam1->f_57 = 21000f;
			func_368(&(Global_111638.f_19978), 4);
			func_341(&(Global_111638.f_19978), 64);
			break;
		
		case 5:
			*uParam1 = 177;
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			if (func_254(Global_111638.f_19978, 4))
			{
				if (func_318())
				{
					uParam1->f_38 = 1;
					uParam1->f_39 = 0;
					uParam1->f_43 = 1;
					uParam1->f_47 = 0;
				}
				else
				{
					func_341(&(Global_111638.f_19978), 4);
					uParam1->f_47 = 1;
				}
			}
			else if (func_318())
			{
				uParam1->f_47 = 1;
			}
			else
			{
				uParam1->f_38 = 1;
				uParam1->f_39 = 0;
				uParam1->f_43 = 1;
				uParam1->f_47 = 0;
			}
			uParam1->f_4 = 1;
			if (uParam1->f_47)
			{
				func_368(&(Global_111638.f_19978), 64);
				Global_111638.f_19978.f_3 = func_340(uParam1);
				uParam1->f_55 = 45000f;
			}
			else
			{
				func_135(&(Global_111638.f_19978), 4);
				Global_111638.f_19978.f_3 = func_339(uParam1);
			}
			uParam1->f_13[0] = 26;
			break;
	}
}

int func_339(var uParam0)
{
	uParam0->f_13[0] = 25;
	iLocal_3054 = (unk_0x09AC81E49EA267F7(0, 65000) % 7);
	if (func_318())
	{
		iLocal_3054 = Global_111638.f_19978.f_3;
	}
	else
	{
		while (iLocal_3054 == Global_111638.f_19978.f_3)
		{
			iLocal_3054 = (unk_0x09AC81E49EA267F7(0, 65000) % 7);
		}
	}
	switch (iLocal_3054)
	{
		case 0:
			uParam0->f_8[0] = 67;
			uParam0->f_55 = 100000f;
			uParam0->f_56 = 35000f;
			uParam0->f_57 = 30000f;
			return 0;
			break;
		
		case 1:
			uParam0->f_8[0] = 64;
			uParam0->f_55 = 160000f;
			uParam0->f_56 = 35000f;
			uParam0->f_57 = 250000f;
			return 1;
			break;
		
		case 2:
			uParam0->f_8[0] = 63;
			uParam0->f_55 = 120000f;
			uParam0->f_56 = 32000f;
			uParam0->f_57 = 20000f;
			return 2;
			break;
		
		case 3:
			uParam0->f_8[0] = 62;
			uParam0->f_55 = 100000f;
			uParam0->f_56 = 32000f;
			uParam0->f_57 = 20000f;
			return 3;
			break;
		
		case 4:
			uParam0->f_8[0] = 13;
			uParam0->f_55 = 120000f;
			uParam0->f_56 = 30000f;
			uParam0->f_57 = 21000f;
			return 4;
			break;
		
		case 5:
			uParam0->f_8[0] = 68;
			uParam0->f_55 = 120000f;
			uParam0->f_56 = 35000f;
			uParam0->f_57 = 20000f;
			return 5;
			break;
		
		case 6:
			uParam0->f_8[0] = 66;
			uParam0->f_55 = 160000f;
			uParam0->f_56 = 45000f;
			uParam0->f_57 = 30000f;
			return 6;
			break;
	}
	return -1;
}

int func_340(var uParam0)
{
	uParam0->f_13[0] = 25;
	iLocal_3054 = (unk_0x09AC81E49EA267F7(0, 65000) % 8);
	if (func_318())
	{
		iLocal_3054 = Global_111638.f_19978.f_3;
	}
	else
	{
		while (iLocal_3054 == Global_111638.f_19978.f_3)
		{
			iLocal_3054 = (unk_0x09AC81E49EA267F7(0, 65000) % 8);
		}
	}
	switch (iLocal_3054)
	{
		case 0:
			uParam0->f_47 = 1;
			uParam0->f_8[0] = 38;
			uParam0->f_13[1] = 42;
			return 0;
			break;
		
		case 1:
			uParam0->f_47 = 1;
			uParam0->f_8[0] = 21;
			uParam0->f_13[1] = 23;
			return 1;
			break;
		
		case 2:
			uParam0->f_47 = 1;
			uParam0->f_8[0] = 30;
			uParam0->f_13[1] = 31;
			return 2;
			break;
		
		case 3:
			uParam0->f_47 = 1;
			uParam0->f_8[0] = 37;
			uParam0->f_13[1] = 33;
			return 3;
			break;
		
		case 4:
			uParam0->f_47 = 1;
			uParam0->f_8[0] = 24;
			uParam0->f_13[1] = 23;
			return 4;
			break;
		
		case 5:
			uParam0->f_47 = 1;
			uParam0->f_8[0] = 70;
			uParam0->f_13[1] = 31;
			return 5;
			break;
		
		case 6:
			uParam0->f_47 = 1;
			uParam0->f_8[0] = 71;
			uParam0->f_13[1] = 31;
			return 6;
			break;
		
		case 7:
			uParam0->f_47 = 1;
			uParam0->f_8[0] = 72;
			uParam0->f_13[1] = 42;
			return 7;
			break;
	}
	return -1;
}

void func_341(var uParam0, int iParam1)
{
	func_342(uParam0, iParam1);
}

void func_342(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_343()
{
	if (unk_0xC844350D5D58C99A(iLocal_6135) && !unk_0x437347B10A200C4B(iLocal_6135, 0))
	{
		unk_0x71EDC33E5A423750(iLocal_6135, 1);
	}
	unk_0x2723524E448F4BDD("PRISON_TOWERS", false);
	unk_0x679C321F8CAA2CFA(vLocal_6103, 150f, 0);
	unk_0xDA46A23FFDBCF876();
	unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), true, 0);
	func_259(&uLocal_3501, 0, 0);
	iVar0 = floor(fLocal_6111);
	func_344();
	unk_0x11E0F00830F70E15(iVar0, 16, 0);
	unk_0xF5894FEB702E7E76(1651,576f, 4939,412f, 41,818f, 1721,456f, 4540,486f, 41,818f, true);
	unk_0xF5894FEB702E7E76(2499,3f, 3456,401f, -49,795f, 2424,3f, 3456,401f, 49,795f, true);
	unk_0xF5894FEB702E7E76(1751,693f, 4562,989f, -57,869f, 769,406f, 4375,608f, 57,869f, true);
	unk_0x842F1AEB2FCC00B7(2164,038f, 4825,627f, 35,61375f, 1899,278f, 4697,752f, 49,08641f, 100f, 1);
	unk_0x842F1AEB2FCC00B7(1757,215f, 4570,54f, 30,47729f, 1385,558f, 4495,364f, 62,74048f, 100f, 1);
	unk_0x51B096AAC60548C1(1f);
	unk_0x34D79252800B23FF(5);
	unk_0xD60411959D5D930B(1f);
	unk_0x9A82EEAF6CA12AEE(1f);
	unk_0xF3039DE1FDB4F6FD(true);
	unk_0x15EA7F4313456B1D(3, true);
	unk_0x15EA7F4313456B1D(5, true);
	if (!iLocal_6046)
	{
		if (unk_0xC844350D5D58C99A(iLocal_6135))
		{
			unk_0x73270B3C9CC833FD(iLocal_6135, true, 1);
			if (func_203(iLocal_6135, vLocal_6106, 1) < 50f)
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
				{
					unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
					unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vLocal_6103, 1, false, 0, 1);
					unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), fLocal_6110);
					unk_0xA954465BA6FDEFE2(&iLocal_6135);
				}
			}
		}
	}
	if (iLocal_6046 == 1)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), -1569615261, false);
		}
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
		unk_0xBFE31971E49FA500(true);
	}
	func_325(0);
	unk_0xDB8844D4B7C60440(101, "GroundTaxi");
	unk_0xA21FB76E67A3EE52();
	unk_0x5A5CC21130AD387A(Local_5695.f_102);
	unk_0x2952D66A502EA873(iLocal_6150, 0);
	unk_0x2952D66A502EA873(iLocal_6151, 0);
	unk_0x2952D66A502EA873(iLocal_6152, 0);
	unk_0x2952D66A502EA873(iLocal_6153, 0);
	unk_0x10FAF14A60A0DBE1();
}

void func_344()
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

void func_345(char* sParam0)
{
	if (Global_98744 != 12)
	{
		func_346(sParam0, 5, -1);
	}
}

int func_346(char* sParam0, int iParam1, int iParam2)
{
	func_365();
	func_364();
	Global_98744 = 0;
	StringCopy(&(Global_98744.f_3), sParam0, 32);
	Global_98744.f_11 = iParam1;
	unk_0x65C5EBCA17A891FC(1);
	unk_0xD99B71B9E48EB0E6(0);
	unk_0x2C84016B4A95F6BA(0);
	func_128(1);
	func_325(1);
	func_361(0);
	func_360(1);
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
	func_359(0);
	func_358(1);
	Global_98744.f_2 = Global_98781;
	if (func_357())
	{
		if (func_356())
		{
			if (Global_98781 >= func_353())
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
			func_348(iParam2, &Var1);
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
			iVar33 = func_347(unk_0xBB0808A181D4745C());
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

int func_347(char* sParam0)
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

void func_348(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_349(uParam1, "Abigail1", func_351(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_350(iParam0), 1, 0);
			break;
		
		case 1:
			func_349(uParam1, "Abigail2", func_351(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_350(iParam0), 1, 0);
			break;
		
		case 2:
			func_349(uParam1, "Barry1", func_351(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_350(iParam0), 1, 0);
			break;
		
		case 3:
			func_349(uParam1, "Barry2", func_351(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_350(iParam0), 1, 1);
			break;
		
		case 4:
			func_349(uParam1, "Barry3", func_351(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_350(iParam0), 0, 0);
			break;
		
		case 5:
			func_349(uParam1, "Barry3A", func_351(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 6:
			func_349(uParam1, "Barry3C", func_351(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 7:
			func_349(uParam1, "Barry4", func_351(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_350(iParam0), 0, 0);
			break;
		
		case 8:
			func_349(uParam1, "Dreyfuss1", func_351(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_350(iParam0), 0, 0);
			break;
		
		case 9:
			func_349(uParam1, "Epsilon1", func_351(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_350(iParam0), 0, 0);
			break;
		
		case 10:
			func_349(uParam1, "Epsilon2", func_351(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_350(iParam0), 1, 0);
			break;
		
		case 11:
			func_349(uParam1, "Epsilon3", func_351(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_350(iParam0), 0, 0);
			break;
		
		case 12:
			func_349(uParam1, "Epsilon4", func_351(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_350(iParam0), 0, 0);
			break;
		
		case 13:
			func_349(uParam1, "Epsilon5", func_351(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_350(iParam0), 1, 0);
			break;
		
		case 14:
			func_349(uParam1, "Epsilon6", func_351(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 15:
			func_349(uParam1, "Epsilon7", func_351(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_350(iParam0), 0, 0);
			break;
		
		case 16:
			func_349(uParam1, "Epsilon8", func_351(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_350(iParam0), 1, 0);
			break;
		
		case 17:
			func_349(uParam1, "Extreme1", func_351(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 18:
			func_349(uParam1, "Extreme2", func_351(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 19:
			func_349(uParam1, "Extreme3", func_351(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 20:
			func_349(uParam1, "Extreme4", func_351(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_350(iParam0), 0, 0);
			break;
		
		case 21:
			func_349(uParam1, "Fanatic1", func_351(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_350(iParam0), 1, 0);
			break;
		
		case 22:
			func_349(uParam1, "Fanatic2", func_351(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_350(iParam0), 1, 0);
			break;
		
		case 23:
			func_349(uParam1, "Fanatic3", func_351(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_350(iParam0), 0, 1);
			break;
		
		case 24:
			func_349(uParam1, "Hao1", func_351(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_350(iParam0), 0, 1);
			break;
		
		case 25:
			func_349(uParam1, "Hunting1", func_351(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 26:
			func_349(uParam1, "Hunting2", func_351(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 27:
			func_349(uParam1, "Josh1", func_351(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_350(iParam0), 1, 0);
			break;
		
		case 28:
			func_349(uParam1, "Josh2", func_351(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_350(iParam0), 1, 1);
			break;
		
		case 29:
			func_349(uParam1, "Josh3", func_351(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_350(iParam0), 1, 1);
			break;
		
		case 30:
			func_349(uParam1, "Josh4", func_351(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_350(iParam0), 1, 0);
			break;
		
		case 31:
			func_349(uParam1, "Maude1", func_351(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 32:
			func_349(uParam1, "Minute1", func_351(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 33:
			func_349(uParam1, "Minute2", func_351(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 34:
			func_349(uParam1, "Minute3", func_351(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 35:
			func_349(uParam1, "MrsPhilips1", func_351(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_350(iParam0), 0, 0);
			break;
		
		case 36:
			func_349(uParam1, "MrsPhilips2", func_351(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_350(iParam0), 0, 0);
			break;
		
		case 37:
			func_349(uParam1, "Nigel1", func_351(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_350(iParam0), 1, 0);
			break;
		
		case 38:
			func_349(uParam1, "Nigel1A", func_351(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_350(iParam0), 1, 1);
			break;
		
		case 39:
			func_349(uParam1, "Nigel1B", func_351(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_350(iParam0), 1, 1);
			break;
		
		case 40:
			func_349(uParam1, "Nigel1C", func_351(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_350(iParam0), 1, 1);
			break;
		
		case 41:
			func_349(uParam1, "Nigel1D", func_351(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_350(iParam0), 1, 1);
			break;
		
		case 42:
			func_349(uParam1, "Nigel2", func_351(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_350(iParam0), 1, 1);
			break;
		
		case 43:
			func_349(uParam1, "Nigel3", func_351(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_350(iParam0), 1, 1);
			break;
		
		case 44:
			func_349(uParam1, "Omega1", func_351(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_350(iParam0), 0, 0);
			break;
		
		case 45:
			func_349(uParam1, "Omega2", func_351(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_350(iParam0), 0, 0);
			break;
		
		case 46:
			func_349(uParam1, "Paparazzo1", func_351(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 47:
			func_349(uParam1, "Paparazzo2", func_351(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 48:
			func_349(uParam1, "Paparazzo3", func_351(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_350(iParam0), 0, 0);
			break;
		
		case 49:
			func_349(uParam1, "Paparazzo3A", func_351(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 50:
			func_349(uParam1, "Paparazzo3B", func_351(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 51:
			func_349(uParam1, "Paparazzo4", func_351(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_350(iParam0), 0, 0);
			break;
		
		case 52:
			func_349(uParam1, "Rampage1", func_351(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_350(iParam0), 0, 0);
			break;
		
		case 54:
			func_349(uParam1, "Rampage3", func_351(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_350(iParam0), 1, 0);
			break;
		
		case 55:
			func_349(uParam1, "Rampage4", func_351(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_350(iParam0), 1, 0);
			break;
		
		case 56:
			func_349(uParam1, "Rampage5", func_351(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_350(iParam0), 0, 0);
			break;
		
		case 53:
			func_349(uParam1, "Rampage2", func_351(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_350(iParam0), 1, 0);
			break;
		
		case 57:
			func_349(uParam1, "TheLastOne", func_351(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 58:
			func_349(uParam1, "Tonya1", func_351(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 59:
			func_349(uParam1, "Tonya2", func_351(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 60:
			func_349(uParam1, "Tonya3", func_351(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 61:
			func_349(uParam1, "Tonya4", func_351(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 62:
			func_349(uParam1, "Tonya5", func_351(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_349(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_350(int iParam0)
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

struct<2> func_351(int iParam0)
{
	StringCopy(&Var0, "", 8);
	cVar2 = { func_352(iParam0) };
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

struct<2> func_352(int iParam0)
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

int func_353()
{
	iVar0 = func_354(&(Global_98744.f_3), 0);
	iVar1 = 0;
	if (iVar0 == 53)
	{
		iVar1 = 1;
	}
	return iVar1;
}

int func_354(char* sParam0, bool bParam1)
{
	iVar0 = unk_0x12AB0310C2281427(sParam0);
	iVar1 = func_355(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_355(int iParam0, bool bParam1)
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

int func_356()
{
	if ((((Global_98744.f_11 == 0 || Global_98744.f_11 == 1) || Global_98744.f_11 == 2) || Global_98744.f_11 == 3) || Global_98744.f_11 == 4)
	{
		return 1;
	}
	return 0;
}

int func_357()
{
	if ((((Global_98744.f_11 == 0 || Global_98744.f_11 == 1) || Global_98744.f_11 == 2) || Global_98744.f_11 == 6) || Global_98744.f_11 == 3)
	{
		return 1;
	}
	if (Global_98744.f_11 == 5)
	{
		if (func_347(&(Global_98744.f_3)) > -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_358(int iParam0)
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

void func_359(bool bParam0)
{
	unk_0x8BCB70EB440DED83(bParam0);
	unk_0xBFE31971E49FA500(bParam0);
}

void func_360(int iParam0)
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

void func_361(int iParam0)
{
	if (iParam0 == 1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_98744.f_20, 4))
		{
			func_363();
			unk_0x0674E58A79778E99(&(Global_98744.f_20), 4);
		}
	}
	else
	{
		func_362();
		unk_0x5D96D8530B3D0904(&(Global_98744.f_20), 4);
	}
}

void func_362()
{
	Global_22211.f_5 = 1;
}

void func_363()
{
	Global_22211.f_5 = 0;
}

void func_364()
{
	Global_92920 = 0;
	Global_92921 = 0;
}

void func_365()
{
	Global_98744 = 13;
	Global_98744.f_1 = -1;
	Global_98744.f_2 = 0;
	Global_98744.f_30 = 0f;
	unk_0x0674E58A79778E99(&(Global_98744.f_20), 25);
	Global_98778 = 0;
	func_358(0);
	func_367();
	func_366();
	Global_98744.f_18 = -1;
	Global_98744.f_19 = -1;
}

void func_366()
{
	unk_0x0674E58A79778E99(&(Global_98744.f_20), 22);
	unk_0x0674E58A79778E99(&(Global_98744.f_20), 8);
}

void func_367()
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

void func_368(var uParam0, int iParam1)
{
	func_369(uParam0, iParam1);
}

void func_369(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_370()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return 0;
	}
	return 1;
}

void func_371()
{
	Global_98779 = 1;
	if (unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1))
	{
		if (unk_0xEA6BC48857E0AC4C(&Global_76854))
		{
			switch (func_20())
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
			switch (func_20())
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

void func_372(char* sParam0)
{
}

