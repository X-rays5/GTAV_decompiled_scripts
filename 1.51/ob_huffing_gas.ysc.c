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
	iLocal_37 = 1;
	vLocal_286 = { 0f, 0f, 0f };
	vLocal_289 = { 0f, 0f, 0f };
	fLocal_310 = 1f;
	fLocal_311 = 0f;
	fLocal_312 = 0f;
	if (unk_0x2EBF608FFE6CA406(19))
	{
		func_101();
	}
	if (unk_0xC844350D5D58C99A(iScriptParam_0))
	{
		iLocal_41 = iScriptParam_0;
		iLocal_40 = unk_0x134B62B726CEC8E6(iLocal_41);
	}
	if (!func_76())
	{
		func_101();
	}
	unk_0x3F423BF5B8125A50(func_75());
	while (true)
	{
		wait(0);
		if (!func_73())
		{
			func_101();
		}
		switch (iLocal_292)
		{
			case 0:
				if (func_72() && func_70())
				{
					iLocal_292 = 1;
				}
				break;
			
			case 1:
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					func_4();
					func_3();
					func_1();
				}
				break;
			
			case 2:
				break;
		}
	}
}

void func_1()
{
	fVar0 = 0f;
	fVar1 = 1f;
	fVar2 = 0f;
	if (iLocal_306)
	{
		if (!iLocal_308)
		{
			iLocal_309 = unk_0x1C0640BA9A7327B3() + 50;
			iLocal_308 = 1;
		}
		else if (unk_0x1C0640BA9A7327B3() > iLocal_309)
		{
			if (fLocal_310 < fVar1)
			{
				fLocal_310 = (fLocal_310 + 0,003f);
				if (fLocal_310 > 1f)
				{
					fLocal_310 = 1f;
					iLocal_313 = 1;
				}
				unk_0x9A82EEAF6CA12AEE(fLocal_310);
			}
			if (fLocal_311 > fVar0)
			{
				fLocal_311 = (fLocal_311 - 0,02f);
				if (fLocal_311 < 0f)
				{
					fLocal_311 = 0f;
					iLocal_314 = 1;
				}
				if (func_2(iLocal_296))
				{
					unk_0xDE0127155AF9E64F(iLocal_296, fLocal_311);
				}
			}
			if (fLocal_312 > fVar2)
			{
				fLocal_312 = (fLocal_312 - 0,004f);
				if (fLocal_312 < 0f)
				{
					fLocal_312 = 0f;
					iLocal_315 = 1;
				}
				unk_0x751404C9AC5F5549(fLocal_312);
			}
			iLocal_308 = 0;
			if ((iLocal_313 && iLocal_314) && iLocal_315)
			{
				iLocal_306 = 0;
			}
		}
	}
}

int func_2(int iParam0)
{
	if (unk_0x6C3F127AAF415E69() != 4 && unk_0x9F4FE516EAACCFC5(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_3()
{
	fVar0 = 5f;
	fVar1 = -0,5f;
	fVar2 = 1f;
	if (bLocal_307)
	{
		if (!iLocal_308)
		{
			iLocal_309 = unk_0x1C0640BA9A7327B3() + 50;
			iLocal_308 = 1;
		}
		else if (unk_0x1C0640BA9A7327B3() > iLocal_309)
		{
			if (fLocal_310 > fVar1)
			{
				fLocal_310 = (fLocal_310 - 0,004f);
				unk_0x9A82EEAF6CA12AEE(fLocal_310);
			}
			if (fLocal_311 < fVar0)
			{
				fLocal_311 = (fLocal_311 + 0,075f);
				if (func_2(iLocal_296))
				{
					unk_0xDE0127155AF9E64F(iLocal_296, fLocal_311);
				}
			}
			if (fLocal_312 < fVar2)
			{
				fLocal_312 = (fLocal_312 + 0,004f);
				unk_0x751404C9AC5F5549(fLocal_312);
			}
			iLocal_308 = 0;
		}
	}
}

void func_4()
{
	vVar0 = { func_69() };
	vVar3 = { 1,2f, 1,2f, 1,2f };
	switch (iLocal_293)
	{
		case 0:
			if ((func_64(vVar0, vVar3) && unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()) >= (func_63() - 90f)) && unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()) <= (func_63() + 90f))
			{
				func_62();
				if (!unk_0x562F77A7F33D2E46("TREVOR_SAFEHOUSE_ACTIVITIES_SCENE"))
				{
					unk_0x8BC9595FD2792B5D("TREVOR_SAFEHOUSE_ACTIVITIES_SCENE");
				}
				func_60(func_61());
				iLocal_293 = 1;
			}
			break;
		
		case 1:
			vVar6 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
			if (func_59(1, 0, 1))
			{
				if ((((func_64(vVar0, vVar3) && unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()) >= (func_63() - 90f)) && unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()) <= (func_63() + 90f)) && vVar6.z > 33f) && !unk_0x9832A1748E6D3DBF(unk_0x16F2683693E537C9()))
				{
					if ((!unk_0x85651FDAB8414096(unk_0xD803B885F5E47A62()) && !unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62())) && unk_0x06F8112AA79C53D9(2, 51))
					{
						if (func_58(func_61()))
						{
							unk_0xA37A90C62806D848(1);
						}
						unk_0x679C321F8CAA2CFA(vVar0, 3f, 0);
						unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), -1569615261, true);
						if (unk_0x6C3F127AAF415E69() != 4)
						{
							unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
						}
						else
						{
							unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 256);
						}
						iLocal_36 = 1;
						if (unk_0xC844350D5D58C99A(iLocal_41))
						{
							unk_0x1E9649458B15960F(iLocal_41, false);
						}
						func_49(1, 1, 1, 0, 0, 0);
						iLocal_294 = 1;
						iLocal_293 = 2;
					}
				}
				else
				{
					if (func_58(func_61()))
					{
						unk_0xA37A90C62806D848(1);
					}
					iLocal_293 = 0;
				}
			}
			break;
		
		case 2:
			func_48();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			iLocal_297 = unk_0xE9744DB7B8CA6965(func_47(), func_46(), 2);
			unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_297, func_75(), func_45(0), 1000f, -8f, 0, 0, 1148846080, 0);
			unk_0xE14EC663EED44AD5(iLocal_41, iLocal_297, func_44(0), func_75(), 1000f, -8f, 0, 1148846080);
			if (!unk_0xB818A4F8553577BC(iLocal_297))
			{
				unk_0xEFC3DF9D33E248D8(iLocal_297, true);
			}
			if (unk_0x6C3F127AAF415E69() != 4)
			{
				iLocal_296 = unk_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", true);
				unk_0x93E9ED66DAB9FBE3(iLocal_296, iLocal_297, func_41(0), func_75());
				unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
			}
			else
			{
				unk_0x5CAFA5DD13658DFE(0);
			}
			iLocal_293 = 3;
			break;
		
		case 3:
			func_48();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			if (unk_0xA45992A6CE82FB43(iLocal_297) > 0,95f)
			{
				iLocal_293 = 4;
			}
			else if (unk_0xA45992A6CE82FB43(iLocal_297) > 0,35f)
			{
				if (!iLocal_295)
				{
					unk_0x5D659D1F3C6BC156(unk_0x16F2683693E537C9(), 1);
					unk_0x63D6BFA449464BBF("DRUG_gas_huffin");
					unk_0x751404C9AC5F5549(0f);
					bLocal_307 = true;
					iLocal_295 = 1;
				}
			}
			break;
		
		case 4:
			func_40(2500, 1);
			func_48();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			if (unk_0x757EF87A33649210())
			{
				bLocal_307 = false;
				unk_0x225CFE81EA219E44();
				if (unk_0x69DF961355195C3C(iLocal_297))
				{
					unk_0x57E0CF9BF653D99A(iLocal_297, 1f);
				}
				if (unk_0x9F4FE516EAACCFC5(iLocal_296))
				{
					unk_0x9A8DDC7C522F5BF5(iLocal_296, 0);
					unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
				}
				iLocal_298 = unk_0x09AC81E49EA267F7(0, 6);
				switch (iLocal_298)
				{
					case 0:
						vLocal_302 = { 1546,069f, 3821,222f, 29,9139f };
						fLocal_305 = 235,002f;
						break;
					
					case 1:
						vLocal_302 = { 2515,749f, 3783,202f, 52,0043f };
						fLocal_305 = 0f;
						break;
					
					case 2:
						vLocal_302 = { 1902,893f, 4921,095f, 47f };
						fLocal_305 = 69,8293f;
						break;
					
					case 3:
						vLocal_302 = { -194,0443f, 3638,538f, 63,4521f };
						fLocal_305 = 156,1723f;
						break;
					
					case 4:
						vLocal_302 = { 560,8397f, 2738,103f, 41,2029f };
						fLocal_305 = 91,5686f;
						break;
					
					case 5:
						vLocal_302 = { -455,5521f, 1598,692f, 358,1478f };
						fLocal_305 = 270f;
						break;
				}
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vLocal_302, 1, false, 0, 1);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), fLocal_305);
				unk_0x8B89F2ABF0EA71C1(6, 0, 0);
				func_33(to_float(6));
				func_32(vLocal_302, 10f, 13);
				iLocal_293 = 5;
			}
			break;
		
		case 5:
			func_48();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			if (!unk_0x69DF961355195C3C(iLocal_297))
			{
				unk_0x63D6BFA449464BBF("drug_wobbly");
				unk_0x751404C9AC5F5549(1f);
				fLocal_312 = 1f;
				if (func_31())
				{
					sLocal_300 = "ig_8_wake_up_front_player";
					sLocal_301 = "ig_8_wake_up_front_cam";
				}
				else
				{
					sLocal_300 = "ig_8_wake_up_right_player";
					sLocal_301 = "ig_8_wake_up_right_cam";
				}
				vVar9 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
				switch (iLocal_298)
				{
					case 0:
						vVar9.z = (vVar9.z - 0,2f);
						break;
					
					case 1:
						vVar9.z = (vVar9.z - 0,15f);
						break;
					
					case 2:
						vVar9.z = (vVar9.z - 0,05f);
						break;
					
					case 3:
						vVar9.z = (vVar9.z - 0,15f);
						break;
					
					case 4:
						vVar9.z = (vVar9.z - 0,15f);
						break;
					
					case 5:
						vVar9.z = (vVar9.z - 0,1f);
						break;
				}
				iLocal_297 = unk_0xE9744DB7B8CA6965(vVar9.x, vVar9.y, vVar9.z, 0f, 0f, fLocal_305, 2);
				unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_297, func_75(), sLocal_300, 1000f, -4f, 0, 0, 1148846080, 0);
				if (unk_0xB818A4F8553577BC(iLocal_297))
				{
					unk_0xEFC3DF9D33E248D8(iLocal_297, false);
				}
				if (unk_0x6C3F127AAF415E69() != 4)
				{
					iLocal_296 = unk_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", true);
					unk_0x93E9ED66DAB9FBE3(iLocal_296, iLocal_297, sLocal_301, func_75());
					unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
				}
				else
				{
					unk_0x5CAFA5DD13658DFE(0);
				}
			}
			else
			{
				iLocal_306 = 1;
				func_30(800, 1);
				func_5();
				iLocal_293 = 6;
			}
			break;
		
		case 6:
			func_48();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			if (!unk_0x69DF961355195C3C(iLocal_297))
			{
				if (func_2(iLocal_296))
				{
					unk_0x04B065D07D2FB5B9(0, 0, 3, 0);
				}
				unk_0xBFBFE6D9F51994DB();
				unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), true, 0);
				iLocal_36 = 0;
				iLocal_293 = 8;
			}
			break;
		
		case 8:
			if ((iLocal_313 && iLocal_314) && iLocal_315)
			{
				unk_0x225CFE81EA219E44();
				if (unk_0xC844350D5D58C99A(iLocal_41))
				{
					unk_0x1E9649458B15960F(iLocal_41, true);
				}
				if (unk_0x6FB46C25CCB7E6D5(-12798421, &iLocal_299, -1))
				{
					unk_0xCDC520E5E48E63D9(-12798421, iLocal_299 + 1, 1);
				}
				iLocal_295 = 0;
				func_49(0, 1, 1, 0, 0, 0);
				iLocal_294 = 0;
				iLocal_293 = 0;
			}
			break;
	}
}

void func_5()
{
	if (func_24() == 0)
	{
		iVar0 = unk_0x09AC81E49EA267F7(0, 10);
		func_23(&uLocal_108, 0, unk_0x16F2683693E537C9(), "MICHAEL", 0, 1);
		if (!unk_0x562F77A7F33D2E46("SAFEHOUSE_STONED_MICHAEL"))
		{
			unk_0x8BC9595FD2792B5D("SAFEHOUSE_STONED_MICHAEL");
		}
		switch (iVar0)
		{
			case 0:
				func_6(&uLocal_108, "WEEDAUD", "M_WD1", 4, 0, 0, 0);
				break;
			
			case 1:
				func_6(&uLocal_108, "WEEDAUD", "M_WD2", 4, 0, 0, 0);
				break;
			
			case 2:
				func_6(&uLocal_108, "WEEDAUD", "M_WD3", 4, 0, 0, 0);
				break;
			
			case 3:
				func_6(&uLocal_108, "WEEDAUD", "M_WD4", 4, 0, 0, 0);
				break;
			
			case 4:
				func_6(&uLocal_108, "WEEDAUD", "M_WD5", 4, 0, 0, 0);
				break;
			
			case 5:
				func_6(&uLocal_108, "WEEDAUD", "M_WD6", 4, 0, 0, 0);
				break;
			
			case 6:
				func_6(&uLocal_108, "WEEDAUD", "M_WD7", 4, 0, 0, 0);
				break;
			
			case 7:
				func_6(&uLocal_108, "WEEDAUD", "M_WD8", 4, 0, 0, 0);
				break;
			
			case 8:
				func_6(&uLocal_108, "WEEDAUD", "M_WD9", 4, 0, 0, 0);
				break;
			
			case 9:
				func_6(&uLocal_108, "WEEDAUD", "M_WD10", 4, 0, 0, 0);
				break;
		}
	}
	else if (func_24() == 1)
	{
		unk_0xD251FFCFFF3A13CC(0);
		iVar0 = unk_0x09AC81E49EA267F7(0, 11);
		func_23(&uLocal_108, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
		switch (iVar0)
		{
			case 0:
				func_6(&uLocal_108, "WEEDAUD", "F_WD1", 3, 0, 0, 0);
				break;
			
			case 1:
				func_6(&uLocal_108, "WEEDAUD", "F_WD2", 3, 0, 0, 0);
				break;
			
			case 2:
				func_6(&uLocal_108, "WEEDAUD", "F_WD3", 3, 0, 0, 0);
				break;
			
			case 3:
				func_6(&uLocal_108, "WEEDAUD", "F_WD4", 3, 0, 0, 0);
				break;
			
			case 4:
				func_6(&uLocal_108, "WEEDAUD", "F_WD5", 3, 0, 0, 0);
				break;
			
			case 5:
				func_6(&uLocal_108, "WEEDAUD", "F_WD6", 3, 0, 0, 0);
				break;
			
			case 6:
				func_6(&uLocal_108, "WEEDAUD", "F_WD7", 3, 0, 0, 0);
				break;
			
			case 7:
				func_6(&uLocal_108, "WEEDAUD", "F_WD8", 3, 0, 0, 0);
				break;
			
			case 8:
				func_6(&uLocal_108, "WEEDAUD", "F_WD9", 3, 0, 0, 0);
				break;
			
			case 9:
				func_6(&uLocal_108, "WEEDAUD", "F_WD10", 3, 0, 0, 0);
				break;
			
			case 10:
				func_6(&uLocal_108, "WEEDAUD", "F_WD11", 3, 0, 0, 0);
				break;
		}
	}
	else
	{
		iVar0 = unk_0x09AC81E49EA267F7(0, 8);
		func_23(&uLocal_108, 2, unk_0x16F2683693E537C9(), "TREVOR", 0, 1);
		switch (iVar0)
		{
			case 0:
				func_6(&uLocal_108, "WEEDAUD", "T_WD1", 4, 0, 0, 0);
				break;
			
			case 1:
				func_6(&uLocal_108, "WEEDAUD", "T_WD3", 4, 0, 0, 0);
				break;
			
			case 2:
				func_6(&uLocal_108, "WEEDAUD", "T_WD4", 4, 0, 0, 0);
				break;
			
			case 3:
				func_6(&uLocal_108, "WEEDAUD", "T_WD5", 4, 0, 0, 0);
				break;
			
			case 4:
				func_6(&uLocal_108, "WEEDAUD", "T_WD6", 4, 0, 0, 0);
				break;
			
			case 5:
				func_6(&uLocal_108, "WEEDAUD", "T_WD8", 4, 0, 0, 0);
				break;
			
			case 6:
				func_6(&uLocal_108, "WEEDAUD", "T_WD9", 4, 0, 0, 0);
				break;
			
			case 7:
				func_6(&uLocal_108, "WEEDAUD", "T_WD10", 4, 0, 0, 0);
				break;
			}
	}
}

int func_6(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_22(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_7(sParam2, iParam3, 0);
}

int func_7(char* sParam0, int iParam1, bool bParam2)
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
					func_21();
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
		if (func_20(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_19();
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
				func_17();
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
				if (func_16())
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
			if (func_15())
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
			func_14();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_13();
		func_8();
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
		func_21();
	}
	return 0;
}

void func_8()
{
	if (!func_9())
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

int func_9()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_12())
	{
		return 0;
	}
	if (func_10(unk_0xD803B885F5E47A62()))
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

bool func_10(int iParam0)
{
	return func_11(iParam0, 20);
}

bool func_11(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_12()
{
	return -1;
}

void func_13()
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

void func_14()
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

int func_15()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_16()
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

void func_17()
{
	if (func_18(14))
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
		Global_19486 = func_24();
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

bool func_18(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_19()
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

bool func_20(int iParam0, int iParam1)
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

void func_21()
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

void func_22(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_23(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_24()
{
	func_25();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_25()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_28(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_27(unk_0x16F2683693E537C9());
			if (func_26(iVar0) && (!func_18(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_26(Global_111638.f_2358.f_539.f_4321))
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

bool func_26(int iParam0)
{
	return iParam0 < 3;
}

int func_27(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_28(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_28(int iParam0)
{
	if (func_26(iParam0))
	{
		return func_29(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_29(int iParam0)
{
	return Global_1798[iParam0];
}

void func_30(int iParam0, bool bParam1)
{
	if (unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
	{
		if (!unk_0x7BCE0E6DD4A1F749())
		{
			unk_0x82E51BCA72537B6C(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0x0F1CCD77290EE12F())
		{
			unk_0x3FC8DBCC154CA56B();
			wait(0);
		}
	}
}

int func_31()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_32(vector3 vParam0, int iParam3, int iParam4)
{
	iVar0 = unk_0xF0681B7E63456337(vParam0, iParam3, iParam4, 127);
	if (unk_0xBD054C76E6F4158B(iVar0))
	{
		iVar1 = unk_0x1C0640BA9A7327B3() + 20000;
		while (!unk_0x07441E56330B63E3(iVar0) && unk_0x1C0640BA9A7327B3() < iVar1)
		{
			wait(0);
		}
		if (unk_0x1C0640BA9A7327B3() < iVar1)
		{
		}
		unk_0x51F8DBE54C75AE47(iVar0);
	}
}

void func_33(float fParam0)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_39(&(Global_111638.f_18098.f_175[iVar0].f_5)))
		{
			func_34(&(Global_111638.f_18098.f_175[iVar0].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_39(&(Global_111638.f_18098.f_362[iVar1])))
		{
			func_34(&(Global_111638.f_18098.f_362[iVar1]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0x9911B88AFCF2F6D2();
}

void func_34(int iParam0, float fParam1)
{
	if (func_39(iParam0))
	{
		func_35(iParam0, (func_37(iParam0) + fParam1));
	}
}

void func_35(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_36(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_36(bool bParam0)
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

float func_37(var uParam0)
{
	if (func_39(uParam0))
	{
		if (func_38(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_36(unk_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_38(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

bool func_39(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 1);
}

void func_40(int iParam0, bool bParam1)
{
	if (unk_0x0F1CCD77290EE12F())
	{
		if (!unk_0xD0BB2359EC70FC37())
		{
			unk_0x53491B90E4FD0E56(iParam0);
			if (bParam1)
			{
				while (!unk_0x757EF87A33649210())
				{
					unk_0x3FC8DBCC154CA56B();
					wait(0);
				}
			}
		}
	}
}

char* func_41(int iParam0)
{
	sVar0 = "";
	switch (iLocal_40)
	{
		case -257549932:
			if (bLocal_34)
			{
				sVar0 = "bong_cam";
			}
			else
			{
				sVar0 = "short_cam";
			}
			break;
		
		case -1620762220:
			sVar0 = "enter_cam";
			break;
		
		case 948080762:
			sVar0 = "ig_8_huff_gas_cam";
			break;
		
		case 1022578470:
			switch (iParam0)
			{
				case 0:
					sVar0 = "ig_7_howcouldisayno_cam";
					break;
				
				case 1:
					sVar0 = "ig_7_ifuwanttodothat_cam";
					break;
				
				case 2:
					sVar0 = "ig_7_lookatu_cam";
					break;
				
				case 3:
					sVar0 = "ig_7_smelllikeasea_cam";
					break;
			}
			break;
		
		case 469594741:
			sVar0 = "ig_2_wheatgrassdrink_cam";
			break;
		
		case -35679191:
			sVar0 = func_42();
			break;
	}
	return sVar0;
}

char* func_42()
{
	func_43();
	sVar0 = "";
	vVar1 = { unk_0x07DAF5424BC6779A() };
	fVar4 = unk_0x0EB28750412C3A5A(vVar1, vLocal_273[0], true);
	fVar5 = unk_0x0EB28750412C3A5A(vVar1, vLocal_273[1], true);
	if (fVar4 < fVar5)
	{
		sVar0 = "drinking_wine_cam2";
		vLocal_286 = { -8,9f, 515,6f, 175,4f };
		vLocal_289 = { -17,1f, 0,5f, 6,5f };
	}
	else
	{
		sVar0 = "drinking_wine_cam3";
		vLocal_286 = { -10,1f, 516f, 175,3f };
		vLocal_289 = { -13,5f, 0,5f, -56f };
	}
	return sVar0;
}

void func_43()
{
	vLocal_273[0] = { -10,1749f, 517,8317f, 175,192f };
	vLocal_273[1] = { -7,694f, 516,4619f, 175,2034f };
	vLocal_273[2] = { -8,0344f, 518,4184f, 175,1866f };
	vLocal_273[3] = { -9,7451f, 515,6803f, 175,1711f };
}

char* func_44(int iParam0)
{
	switch (iLocal_40)
	{
		case -257549932:
			if (bLocal_34)
			{
				sVar0 = "bong_bong";
			}
			else
			{
				sVar0 = "bong_short";
			}
			break;
		
		case -1620762220:
			sVar0 = "enter_bottle";
			break;
		
		case 1022578470:
			switch (iParam0)
			{
				case 0:
					sVar0 = "ig_7_howcouldisayno_raspjam";
					break;
				
				case 1:
					sVar0 = "ig_7_ifuwanttodothat_raspjam";
					break;
				
				case 2:
					sVar0 = "ig_7_lookatu_raspjam";
					break;
				
				case 3:
					sVar0 = "ig_7_smelllikeasea_raspjam";
					break;
			}
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			if (bLocal_35)
			{
				sVar0 = "enter_shotglass";
			}
			else
			{
				sVar0 = "enter_glass";
			}
			break;
		
		case 948080762:
			sVar0 = "ig_8_huff_gas_rag";
			break;
		
		case 2057223314:
			if (bLocal_35)
			{
				sVar0 = "enter_beer";
			}
			else
			{
				sVar0 = "enter_bottle";
			}
			break;
		
		case 469594741:
			sVar0 = "ig_2_wheatgrassdrink_glass";
			break;
		
		case -35679191:
			sVar0 = "drinking_wine_glass";
			break;
	}
	return sVar0;
}

char* func_45(int iParam0)
{
	switch (iLocal_40)
	{
		case -257549932:
			if (bLocal_34)
			{
				sVar0 = "bong_FRA";
			}
			else
			{
				sVar0 = "michael_short";
			}
			break;
		
		case -693032058:
			sVar0 = "cigar_enter_michael";
			break;
		
		case -1620762220:
			sVar0 = "enter";
			break;
		
		case 788975200:
		case -1533900808:
			if (bLocal_35)
			{
				sVar0 = "enter_trevor";
			}
			else
			{
				sVar0 = "enter";
			}
			break;
		
		case 948080762:
			sVar0 = "ig_8_huff_gas_player";
			break;
		
		case 1022578470:
			switch (iParam0)
			{
				case 0:
					sVar0 = "ig_7_howcouldisayno";
					break;
				
				case 1:
					sVar0 = "ig_7_ifuwanttodothat";
					break;
				
				case 2:
					sVar0 = "ig_7_lookatu";
					break;
				
				case 3:
					sVar0 = "ig_7_smelllikeasea";
					break;
			}
			break;
		
		case 2057223314:
			if (bLocal_35)
			{
				sVar0 = "enter";
			}
			else
			{
				sVar0 = "enter_michael";
			}
			break;
		
		case 469594741:
			sVar0 = "ig_2_wheatgrassdrink_michael";
			break;
		
		case -35679191:
			sVar0 = "drinking_wine";
			break;
	}
	return sVar0;
}

Vector3 func_46()
{
	vVar0 = { 0f, 0f, 0f };
	switch (iLocal_40)
	{
		case -257549932:
			if (!bLocal_34)
			{
				vVar0 = { 0f, 0f, -68,75494f };
			}
			else
			{
				vVar0 = { 0f, 0f, -179,9088f };
			}
			break;
		
		case -693032058:
			vVar0 = { 0f, 0f, 21,1994f };
			break;
		
		case -1620762220:
			vVar0 = { 0f, 0f, -128,34f };
			break;
		
		case -1630172026:
			vVar0 = { 0f, 0f, 0,5729f };
			break;
		
		case 948080762:
			vVar0 = { 0f, 0f, 2,8647f };
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			if (bLocal_35)
			{
				vVar0 = { 0f, 0f, 34,9504f };
			}
			else
			{
				vVar0 = { 0f, 0f, 21,1994f };
			}
			break;
		
		case 1022578470:
			vVar0 = { 0f, 0f, 72,76564f };
			break;
		
		case 2057223314:
			vVar0 = { 0f, 0f, -9,1673f };
			break;
		
		case 469594741:
			vVar0 = { 0f, 0f, 21,1994f };
			break;
		
		case -35679191:
			vVar0 = { 0f, 0f, -29,793f };
			break;
	}
	return vVar0;
}

Vector3 func_47()
{
	vVar0 = { 0f, 0f, 0f };
	switch (iLocal_40)
	{
		case -257549932:
			if (!bLocal_34)
			{
				vVar0 = { -806,82f, 170,03f, 75,74f };
			}
			else
			{
				vVar0 = { 10,22f, 527,73f, 174,11f };
			}
			break;
		
		case -693032058:
			vVar0 = { -805,17f, 173,99f, 72,69f };
			break;
		
		case -1620762220:
			vVar0 = { -9,66f, -1429,48f, 31,21f };
			break;
		
		case -1630172026:
			vVar0 = { -10,07f, -1440,64f, 30,36f };
			break;
		
		case 948080762:
			vVar0 = { 1972,852f, 3812,42f, 33,28f };
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			if (bLocal_35)
			{
				vVar0 = { -1153,829f, -1523,314f, 10,56f };
			}
			else
			{
				vVar0 = { -800,68f, 184,18f, 72,55f };
			}
			break;
		
		case 1022578470:
			vVar0 = { -1146,284f, -1514,13f, 10,8468f };
			break;
		
		case 2057223314:
			vVar0 = { 1976,75f, 3822,76f, 33,28f };
			break;
		
		case 469594741:
			vVar0 = { -804,87f, 185,69f, 72,75f };
			break;
		
		case -35679191:
			vVar0 = { -9,1f, 516,83f, 173,62f };
			break;
	}
	return vVar0;
}

void func_48()
{
	Global_22211.f_6 = 1;
}

void func_49(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_57(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_15())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_56(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_57(0);
		unk_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_56(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_54(unk_0xD803B885F5E47A62())) && !func_51(unk_0xD803B885F5E47A62(), 0)) && !func_50()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_54(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_50()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 14);
}

bool func_51(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_52(-1, 0) == 8;
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

int func_52(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_53();
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

int func_53()
{
	return Global_1312745;
}

int func_54(int iParam0)
{
	if (func_51(iParam0, 0))
	{
		return 1;
	}
	if (func_55())
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

bool func_55()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_56(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_57(int iParam0)
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

bool func_58(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

int func_59(bool bParam0, bool bParam1, bool bParam2)
{
	if (unk_0xC8BC75555A67090D())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
		{
			return 0;
		}
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (bParam0)
		{
			if (unk_0x437347B10A200C4B(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x437347B10A200C4B(iVar0, 0))
			{
				if (unk_0xA30B8362589C124A(iVar0, -1, 0) != unk_0x16F2683693E537C9())
				{
					return 0;
				}
			}
		}
		if (!unk_0x437347B10A200C4B(iVar0, 0))
		{
			if (unk_0x30C0A7C378403357(iVar0) < 0,95f || unk_0x30C0A7C378403357(iVar0) > 1,011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (!unk_0xD79EDC28CA84B527(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	return 1;
}

void func_60(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

char* func_61()
{
	switch (iLocal_40)
	{
		case -257549932:
			if (bLocal_34)
			{
				sVar0 = "SA_BONG2";
			}
			else
			{
				sVar0 = "SA_BONG";
			}
			break;
		
		case -693032058:
			sVar0 = "SA_CIGAR";
			break;
		
		case -1620762220:
			sVar0 = "SA_BEER";
			break;
		
		case -1630172026:
			sVar0 = "SA_SPLFF";
			break;
		
		case 788975200:
			sVar0 = "SA_WHSKY";
			break;
		
		case -1533900808:
			sVar0 = "SA_WHSKY";
			break;
		
		case 1384562503:
			sVar0 = "SA_WHSKY";
			break;
		
		case 948080762:
			sVar0 = "SA_GAS";
			break;
		
		case 1022578470:
			sVar0 = "SA_MRJAM";
			break;
		
		case 2057223314:
			sVar0 = "SA_BEER";
			break;
		
		case 469594741:
			sVar0 = "SA_WHEAT";
			break;
		
		case -35679191:
			sVar0 = "SA_WINE";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

void func_62()
{
	switch (iLocal_40)
	{
		case -693032058:
			break;
		
		case -257549932:
			break;
		
		case -1620762220:
			break;
		
		case 788975200:
			break;
		
		case -1533900808:
			break;
		
		case 1384562503:
			break;
		
		case 948080762:
			break;
		
		case 1022578470:
			break;
		
		case 2057223314:
			if (bLocal_35)
			{
			}
			break;
		
		case 469594741:
			break;
		
		case -35679191:
			break;
	}
}

float func_63()
{
	switch (iLocal_40)
	{
		case -257549932:
			if (bLocal_34)
			{
				fVar0 = -100f;
			}
			else
			{
				fVar0 = 192,2462f;
			}
			break;
		
		case -693032058:
			fVar0 = 299,353f;
			break;
		
		case -1620762220:
			fVar0 = 273,2771f;
			break;
		
		case -1630172026:
			fVar0 = 256,8294f;
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			if (bLocal_35)
			{
				fVar0 = 213,5805f;
			}
			else
			{
				fVar0 = 15,7529f;
			}
			break;
		
		case 948080762:
			fVar0 = 206,0063f;
			break;
		
		case 1022578470:
			fVar0 = 355,0925f;
			break;
		
		case 2057223314:
			fVar0 = 332,7139f;
			break;
		
		case 469594741:
			fVar0 = 118,65f;
			break;
		
		case -35679191:
			fVar0 = 331,4005f;
			break;
	}
	return fVar0;
}

int func_64(vector3 vParam0, float fParam3, var uParam4, var uParam5)
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if ((!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && !unk_0x4E861BC5B1EDA7BD(unk_0x16F2683693E537C9())) && unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			if (!unk_0x681F21BF9F7B449B(-1, vParam0, 2f))
			{
				if ((((unk_0x19C7D1907D1DDDAB() && !unk_0x22A8E52414415B76()) && !unk_0xF1CB2C261DFBA748()) && !func_68(0)) && !func_67())
				{
					if ((Global_95672 && Global_95673) || func_66())
					{
						return 0;
					}
					if (func_65(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vParam0, fParam3, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_65(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x755FF954DAE327E1((vParam0.x - vParam3.x)) <= fParam6)
		{
			if (unk_0x755FF954DAE327E1((vParam0.y - vParam3.y)) <= fParam6)
			{
				if (unk_0x755FF954DAE327E1((vParam0.z - vParam3.z)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x755FF954DAE327E1((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (unk_0x755FF954DAE327E1((vParam0.y - vParam3.y)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_66()
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	return 1;
}

int func_67()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		iVar0 = unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar2, -1);
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!unk_0xEB6A8945D1AC98A1(uVar2[iVar1]))
		{
			if (bLocal_35)
			{
				if (unk_0x134B62B726CEC8E6(uVar2[iVar1]) == 225514697)
				{
					if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(uVar2[iVar1], true), true) < 3f)
					{
						return 1;
					}
				}
			}
			if (!bLocal_35 && !bLocal_34)
			{
				if (unk_0x134B62B726CEC8E6(uVar2[iVar1]) == -1692214353)
				{
					if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(uVar2[iVar1], true), true) < 3f)
					{
						return 1;
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_68(int iParam0)
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

Vector3 func_69()
{
	switch (iLocal_40)
	{
		case -257549932:
			if (bLocal_34)
			{
				vVar0 = { 9,95f, 528,9f, 173,6282f };
			}
			else
			{
				vVar0 = { -807,5781f, 171,357f, 75,7407f };
			}
			break;
		
		case -693032058:
			vVar0 = { -805,881f, 173,8548f, 71,8347f };
			break;
		
		case -1620762220:
			vVar0 = { -9,66f, -1429,48f, 31,21f };
			break;
		
		case -1630172026:
			vVar0 = { -10,6378f, -1441,314f, 30,1015f };
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			if (bLocal_35)
			{
				vVar0 = { -1154,343f, -1522,6f, 9,6327f };
			}
			else
			{
				vVar0 = { -800,4056f, 183,4856f, 71,6055f };
			}
			break;
		
		case 948080762:
			vVar0 = { 1972,142f, 3813,243f, 32,4271f };
			break;
		
		case 1022578470:
			vVar0 = { -1145,91f, -1514,944f, 9,6327f };
			break;
		
		case 2057223314:
			vVar0 = { 1976,94f, 3821,242f, 33,3266f };
			break;
		
		case 469594741:
			vVar0 = { -804,2254f, 184,3325f, 72,6042f };
			break;
		
		case -35679191:
			vVar0 = { -8,8011f, 515,7225f, 173,6282f };
			break;
	}
	return vVar0;
}

int func_70()
{
	if (unk_0x64F604CF561734A9(func_71(), 0, -1))
	{
		return 1;
	}
	return 0;
}

char* func_71()
{
	switch (iLocal_40)
	{
		case -257549932:
			if (bLocal_34)
			{
				sVar0 = "SAFEHOUSE_FRANKLIN_USE_BONG";
			}
			else
			{
				sVar0 = "SAFEHOUSE_MICHAEL_USE_BONG";
			}
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			if (bLocal_35)
			{
				sVar0 = "SAFEHOUSE_TREVOR_DRINK_WHISKEY";
			}
			else
			{
				sVar0 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
			}
			break;
		
		case 2057223314:
			if (bLocal_35)
			{
				sVar0 = "SAFEHOUSE_TREVOR_DRINK_BEER";
			}
			else
			{
				sVar0 = "SAFEHOUSE_MICHAEL_DRINK_BEER";
			}
			break;
		
		case -1620762220:
			sVar0 = "SAFEHOUSE_FRANKLIN_DRINK_BEER";
			break;
		
		case 948080762:
			sVar0 = "SAFEHOUSE_TREVOR_GAS";
			break;
		
		case 1022578470:
			sVar0 = "SAFEHOUSE_TREVOR_RASBERRY";
			break;
		
		case 469594741:
			sVar0 = "SAFEHOUSE_MICHAEL_DRINK_WHEATGRASS";
			break;
		
		case -35679191:
			sVar0 = "SAFEHOUSE_FRANKLIN_DRINK_WINE";
			break;
		
		case -693032058:
			sVar0 = "SAFEHOUSE_MICHAEL_SIT_SOFA";
			break;
		
		case -1630172026:
			sVar0 = "SAFEHOUSE_FRANKLIN_SOFA";
			break;
	}
	return sVar0;
}

int func_72()
{
	sVar0 = func_75();
	unk_0x3F423BF5B8125A50(sVar0);
	while (!unk_0xB4AE0788C1587752(sVar0))
	{
		wait(0);
	}
	return 1;
}

int func_73()
{
	if (unk_0x991B1F0980C62628())
	{
		return 0;
	}
	if (!iLocal_294)
	{
		if (!func_74())
		{
			return 0;
		}
		if (!unk_0x63D2C15453688621(iLocal_41))
		{
			return 0;
		}
	}
	return 1;
}

int func_74()
{
	if (unk_0xC844350D5D58C99A(iLocal_41))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iLocal_41, true) };
		if (!unk_0x437347B10A200C4B(iLocal_41, 0) && vVar0.z > 33f)
		{
			return 1;
		}
	}
	return 0;
}

char* func_75()
{
	switch (iLocal_40)
	{
		case -257549932:
			if (bLocal_34)
			{
				sVar0 = "safe@franklin@ig_10";
			}
			else
			{
				sVar0 = "safe@michael@ig_4";
			}
			break;
		
		case -693032058:
			sVar0 = "safe@michael@ig_3";
			break;
		
		case -1620762220:
			sVar0 = "safe@franklin@ig_9";
			break;
		
		case -1630172026:
			sVar0 = "safe@franklin@ig_13";
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			if (!Global_76622)
			{
				if (bLocal_35)
				{
					sVar0 = "safe@trevor@ig_6";
				}
				else
				{
					sVar0 = "safe@michael@ig_1";
				}
			}
			else
			{
				sVar0 = "MP_SAFEHOUSEWHISKEY@";
			}
			break;
		
		case 948080762:
			sVar0 = "safe@trevor@ig_8";
			break;
		
		case 1022578470:
			sVar0 = "safe@trevor@ig_7";
			break;
		
		case 2057223314:
			if (bLocal_35)
			{
				sVar0 = "safe@trevor@ig_5";
			}
			else
			{
				sVar0 = "safe@michael@ig_5";
			}
			break;
		
		case 469594741:
			sVar0 = "safe@michael@ig_2";
			break;
		
		case -35679191:
			sVar0 = "safe@franklin@ig_11";
			break;
	}
	return sVar0;
}

int func_76()
{
	if (func_98(9))
	{
		return 0;
	}
	if (func_97() && !func_96())
	{
		return 0;
	}
	if (!func_91())
	{
		return 0;
	}
	if (!func_74())
	{
		return 0;
	}
	if (!func_90(0))
	{
		return 0;
	}
	if (Global_93750[10] == 105)
	{
		return 0;
	}
	if (func_77(unk_0x16F2683693E537C9()))
	{
		return 0;
	}
	return 1;
}

int func_77(int iParam0)
{
	if (!unk_0x8CD06866876216F2())
	{
		iVar5 = unk_0x134B62B726CEC8E6(iParam0);
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			iVar2 = iVar1;
			iVar4 = func_85(iParam0, iVar2);
			if (func_81(iVar5, 14, iVar4, -1))
			{
				return 1;
			}
			iVar1++;
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			iVar3 = iVar0;
			if ((iVar3 != 12 && iVar3 != 13) && iVar3 != 14)
			{
				iVar4 = func_78(iParam0, iVar3);
				if (func_81(iVar5, iVar3, iVar4, -1))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar6 = unk_0x36C584991B4C183F(iParam0, 1);
		if (iVar6 > 0)
		{
			iVar7 = unk_0x4F4B24509D6989D0(iParam0, 1, iVar6, unk_0xDADA8E1DD0D0D9D9(iParam0, 1));
			if (!unk_0x1A5A491D253EA7BA(iVar7, -1757550583, 0) && !unk_0x1A5A491D253EA7BA(iVar7, 66092876, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_78(int iParam0, int iParam1)
{
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0xEB6A8945D1AC98A1(iParam0))
	{
		return -99;
	}
	iVar0 = func_80(iParam1);
	iVar1 = unk_0x36C584991B4C183F(iParam0, iVar0);
	iVar2 = unk_0xDADA8E1DD0D0D9D9(iParam0, iVar0);
	return func_79(iParam0, iVar1, iVar2, iParam1);
}

int func_79(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_80(iParam3);
	iVar1 = unk_0xD2C792E5A65B6BF1(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0x0F84621831DD8D8A(iParam0, iVar0, iVar3);
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

int func_80(int iParam0)
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

int func_81(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == 225514697)
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
	else if (iParam0 == -1692214353)
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
	else if (iParam0 == -1686040670)
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
	else if (iParam0 == 1885233650)
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_82(iParam0, iParam2, 1, 3);
					}
					if (unk_0x1A5A491D253EA7BA(iParam3, -1757550583, 0) || unk_0x1A5A491D253EA7BA(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == -1667301416)
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_82(iParam0, iParam2, 1, 4);
					}
					if (unk_0x1A5A491D253EA7BA(iParam3, -1757550583, 0) || unk_0x1A5A491D253EA7BA(iParam3, 66092876, 0))
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

int func_82(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x30BBA34DD235D7FE(&Var0);
		iVar18 = 0;
		iVar19 = (iParam1 - func_84(iParam0));
		if (iVar19 < 0)
		{
			return -1;
		}
		iVar20 = unk_0xF6900DA2D9CD7BC5(iParam3, 7, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			unk_0x4F79808059300187(iVar17, &Var0);
			if (!unk_0x232048AB4B0E0259(Var0))
			{
				if (iVar18 == iVar19)
				{
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		unk_0x65C0659496B1CC14(&Var21);
		iVar39 = 0;
		iVar40 = (iParam1 - func_83(iParam0, func_80(iParam2)));
		if (iVar40 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_76556.f_26[iParam2] && iParam1 == Global_76556[iParam2]) && Global_76556.f_13[iParam2] != 0)
		{
			return Global_76556.f_13[iParam2];
		}
		iVar41 = unk_0xF6900DA2D9CD7BC5(iParam3, 7, -1, 0, -1, func_80(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41)
		{
			unk_0xC578687D5A643830(iVar38, &Var21);
			if (!unk_0x232048AB4B0E0259(Var21))
			{
				if (iVar39 == iVar40)
				{
					Global_76556.f_13[iParam2] = Var21.f_1;
					Global_76556[iParam2] = iParam1;
					Global_76556.f_26[iParam2] = iParam0;
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

int func_83(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 225514697:
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
		
		case -1692214353:
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
		
		case -1686040670:
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
		case 1885233650:
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
		
		case -1667301416:
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

int func_84(int iParam0)
{
	switch (iParam0)
	{
		case 225514697:
			return 113;
			break;
		
		case -1692214353:
			return 175;
			break;
		
		case -1686040670:
			return 155;
			break;
	}
	switch (iParam0)
	{
		case 1885233650:
			return 327;
			break;
		
		case -1667301416:
			return 327;
			break;
	}
	return -99;
}

int func_85(int iParam0, int iParam1)
{
	if (unk_0xEB6A8945D1AC98A1(iParam0))
	{
		return -99;
	}
	iVar0 = unk_0x98F1B512A2CC07C5(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_89(iParam1);
	}
	iVar1 = unk_0x22286A85EDEAEC56(iParam0, iParam1);
	return func_86(iParam0, iVar0, iVar1, iParam1);
}

int func_86(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 == -1)
	{
		return func_89(iParam3);
	}
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	iVar1 = unk_0xD1BC07002824FE76(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == 1885233650)
		{
			return func_88(unk_0x134B62B726CEC8E6(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == -1667301416)
		{
			return func_88(unk_0x134B62B726CEC8E6(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0xB0D40A53430D217C(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0xFEDCD54A497F3495(iParam0, iParam3, iVar4);
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
					iVar3 = (iVar3 + func_87(iParam0, iParam3));
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
	return func_89(iParam3);
}

int func_87(int iParam0, int iParam1)
{
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	switch (iVar0)
	{
		case 225514697:
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
		
		case -1692214353:
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
		
		case -1686040670:
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
		
		case 1885233650:
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
		
		case -1667301416:
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

int func_88(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x30BBA34DD235D7FE(&Var0);
		iVar18 = 0;
		iVar19 = unk_0xF6900DA2D9CD7BC5(iParam3, 7, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0x4F79808059300187(iVar17, &Var0);
			if (!unk_0x232048AB4B0E0259(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_84(iParam0) + iVar18);
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		unk_0x65C0659496B1CC14(&Var20);
		iVar38 = 0;
		iVar39 = unk_0xF6900DA2D9CD7BC5(iParam3, 7, -1, 0, -1, func_80(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			unk_0xC578687D5A643830(iVar37, &Var20);
			if (!unk_0x232048AB4B0E0259(Var20))
			{
				if (iParam1 == Var20.f_1)
				{
					return (func_83(iParam0, func_80(iParam2)) + iVar38);
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_89(int iParam0)
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

int func_90(int iParam0)
{
	if (Global_76622)
	{
		return 1;
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (iLocal_40 == 948080762)
		{
			if (func_65(unk_0x68F4C0EC296D3901(iLocal_41, false), func_69(), 5f, 0))
			{
				return 1;
			}
		}
		else if (iLocal_40 == 469594741)
		{
			if (func_65(unk_0x68F4C0EC296D3901(iLocal_41, false), func_69(), 5f, 0))
			{
				return 1;
			}
		}
		else if (iLocal_40 == 1022578470)
		{
			if (func_65(unk_0x68F4C0EC296D3901(iLocal_41, false), func_69(), 5f, 0))
			{
				return 1;
			}
		}
		else if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0x4D570FEF9D230CE7(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_91()
{
	switch (iLocal_40)
	{
		case -693032058:
			if (func_24() == 0)
			{
				return 1;
			}
			break;
		
		case -257549932:
			if (unk_0x8CD06866876216F2())
			{
				return 1;
			}
			if (func_24() == 1)
			{
				bLocal_34 = true;
				return 1;
			}
			if (func_24() == 0)
			{
				if (!iLocal_33)
				{
					iLocal_33 = 1;
				}
				if (unk_0x8A22C4C08282BF26(-645501366) > 0)
				{
					return 0;
				}
				if (func_95())
				{
					return 0;
				}
				if (((((Global_93750[0] == 5 || Global_93750[0] == 21) || Global_93750[0] == 20) || Global_93750[0] == 16) || Global_93750[0] == 18) || Global_93750[0] == 9)
				{
					return 0;
				}
				if (((((Global_93750[0] == 6 || Global_93750[0] == 7) || Global_93750[0] == 11) || Global_93750[0] == 17) || Global_93750[0] == 140) || Global_93750[0] == 141)
				{
					return 1;
				}
				return 1;
			}
			break;
		
		case -1620762220:
			if (Global_76622)
			{
				return 1;
			}
			if (func_24() == 1)
			{
				if (!iLocal_32)
				{
					iLocal_32 = 1;
				}
				return 1;
			}
			break;
		
		case -1630172026:
			if (func_24() == 1)
			{
				return 1;
			}
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			if (Global_76622)
			{
				iLocal_31 = 1;
				return 1;
			}
			if (func_24() == 0)
			{
				iLocal_31 = 1;
				return 1;
			}
			if (func_24() == 2 && func_94(20))
			{
				if (!iLocal_30)
				{
					iLocal_30 = 1;
				}
				iLocal_31 = 1;
				bLocal_35 = true;
				return 1;
			}
			break;
		
		case 948080762:
			if (func_24() == 2 || Global_76622)
			{
				return 1;
			}
			break;
		
		case 1022578470:
			if (Global_111638.f_7256.f_227[145] == 1)
			{
				if (func_24() == 2)
				{
					if (((((Global_93750[13] != 127 && Global_93750[13] != 135) && Global_93766 != 127) && Global_93766 != 135) && !func_93()) && !func_95())
					{
						return 1;
					}
				}
			}
			break;
		
		case 2057223314:
			iLocal_31 = 1;
			if ((Global_38796[78] != 1 && Global_93750[9] != 117) && Global_93750[11] != 117)
			{
				if (func_24() == 2)
				{
					bLocal_35 = true;
					return 1;
				}
				if ((func_24() == 0 && func_92(130)) && !func_92(131))
				{
					return 1;
				}
			}
			break;
		
		case 469594741:
			if (Global_76622)
			{
				return 1;
			}
			if (func_24() == 0)
			{
				if (Global_93750[0] != 17 && Global_93750[2] != 73)
				{
					return 1;
				}
			}
			break;
		
		case -35679191:
			if (Global_76622)
			{
				return 1;
			}
			if (func_24() == 1)
			{
				bLocal_34 = true;
				iLocal_32 = 1;
				if (!iLocal_31)
				{
					iLocal_31 = 1;
				}
				return 1;
			}
			break;
	}
	return 0;
}

int func_92(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

int func_93()
{
	if (unk_0x8A22C4C08282BF26(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

int func_94(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_330[iParam0];
}

int func_95()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_96()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xBA19B87E031E2390() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_97()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666].f_15, 20);
	}
	return 0;
}

int func_98(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_99(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_99(int iParam0)
{
	return func_100(iParam0, Global_41431);
}

int func_100(int iParam0, int iParam1)
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

void func_101()
{
	if (func_58(func_61()))
	{
		unk_0xA37A90C62806D848(1);
	}
	unk_0x9A82EEAF6CA12AEE(1f);
	unk_0xBFBFE6D9F51994DB();
	if (unk_0x562F77A7F33D2E46("TREVOR_SAFEHOUSE_ACTIVITIES_SCENE"))
	{
		unk_0x8910D3D58E0132B8("TREVOR_SAFEHOUSE_ACTIVITIES_SCENE");
	}
	unk_0x8D17794CE3273D70(func_75());
	if (unk_0x9F4FE516EAACCFC5(iLocal_296))
	{
		unk_0xDE0127155AF9E64F(iLocal_296, 0f);
		unk_0x9A8DDC7C522F5BF5(iLocal_296, 0);
	}
	func_102();
	unk_0x10FAF14A60A0DBE1();
}

void func_102()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if ((!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) && func_59(1, 0, 1)) && iLocal_36)
		{
			func_49(0, 1, 1, 0, 0, 0);
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			}
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
		}
	}
}

