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
	iLocal_52 = 1;
	vLocal_301 = { 0f, 0f, 0f };
	vLocal_304 = { 0f, 0f, 0f };
	iLocal_309 = 1;
	iLocal_335 = -1;
	sLocal_338 = "safe@michael@ig_3";
	vLocal_339 = { -804,374f, 176,864f, 73,015f };
	vLocal_342 = { -3,7f, 0f, 172,7f };
	fLocal_345 = 34f;
	vLocal_346 = { -806,6f, 173,4f, 72,9f };
	vLocal_349 = { 6f, 0f, -86,8f };
	fLocal_352 = 40f;
	vLocal_353 = { -802,4001f, 175,8452f, 73,3742f };
	vLocal_356 = { -2,0225f, 0f, 137,6933f };
	fLocal_359 = 50f;
	vLocal_360 = { 0,11f, 0f, 0f };
	vLocal_363 = { -0,025f, 0,13f, 0f };
	vLocal_366 = { -0,015f, 0,13f, 0f };
	vLocal_369 = { 0f, 90f, 0f };
	vLocal_375 = { -805,6204f, 172,3675f, 71,8347f };
	vLocal_378 = { 0f, 0f, 0f };
	if (unk_0x2EBF608FFE6CA406(19))
	{
		func_86();
	}
	if (((func_83(9) || (func_82() && !func_81())) || func_68(unk_0x16F2683693E537C9())) || unk_0x1EE04CEA36EF313B())
	{
		func_86();
	}
	vLocal_372 = { ScriptParam_0.f_1[0] };
	vLocal_372 = { -803,642f, 173,2916f, 71,8347f };
	iLocal_55 = -693032058;
	while (true)
	{
		wait(0);
		if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && func_61() == 0) && !unk_0x991B1F0980C62628()) && !unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0)) && unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) != 0) && func_60(4))
		{
			if (unk_0x0EB28750412C3A5A(vLocal_372, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), true) < 3f)
			{
				switch (iLocal_307)
				{
					case 0:
						if (func_54())
						{
							iLocal_307 = 1;
						}
						break;
					
					case 1:
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							func_1();
						}
						break;
					
					case 2:
						break;
				}
			}
			else if (unk_0x0EB28750412C3A5A(vLocal_372, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), true) > 6f)
			{
				func_86();
			}
		}
		else
		{
			func_86();
		}
	}
}

void func_1()
{
	vVar0 = { 1,5f, 1,5f, 1,5f };
	fVar3 = 0f;
	if (unk_0x6C3F127AAF415E69() != 4)
	{
		func_51();
	}
	switch (iLocal_308)
	{
		case 0:
			if (((func_46(vLocal_372, vVar0) && func_45()) && !func_44()) && !func_43("FAM_WEAPDIS"))
			{
				if (unk_0xBFDF2644D7CBD7C5(unk_0x16F2683693E537C9(), vLocal_375, 90f) || iLocal_317)
				{
					if (!unk_0x562F77A7F33D2E46("MICHAEL_SAFEHOUSE_ACTIVITIES_SCENE"))
					{
						unk_0x8BC9595FD2792B5D("MICHAEL_SAFEHOUSE_ACTIVITIES_SCENE");
					}
					func_42("TV_HLP0");
					iLocal_308 = 1;
				}
			}
			break;
		
		case 1:
			if (func_41(1, 0, 1))
			{
				if (func_46(vLocal_372, vVar0) && func_45())
				{
					if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
					{
						if ((!unk_0x85651FDAB8414096(unk_0xD803B885F5E47A62()) && !unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62())) && unk_0x06F8112AA79C53D9(2, 51))
						{
							Global_30813 = 3;
							if (unk_0x6C3F127AAF415E69() != 4)
							{
								iLocal_310 = 1;
							}
							if (iLocal_335 == -1)
							{
								iLocal_335 = unk_0x544B74C043CE9948(-804,05f, 173,54f, 72,17f, 1,02f, 1f, 1f, func_40(-52,4f), 0, 7);
							}
							if (func_43("TV_HLP0"))
							{
								unk_0xA37A90C62806D848(1);
							}
							unk_0x679C321F8CAA2CFA(vLocal_375, 3f, 0);
							if (unk_0x6C3F127AAF415E69() != 4)
							{
								unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
							}
							else
							{
								unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 256);
							}
							iLocal_51 = 1;
							unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), -1569615261, true);
							func_30(1, 1, 0, 0, 0, 0);
							unk_0x6787351639998696("SOFA ACTIVITY");
							iLocal_328 = 1;
							iLocal_308 = 2;
						}
					}
				}
				else
				{
					if (func_43("TV_HLP0"))
					{
						unk_0xA37A90C62806D848(1);
					}
					iLocal_317 = 0;
					iLocal_308 = 0;
				}
			}
			break;
		
		case 2:
			func_29();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			iLocal_331 = unk_0xE9744DB7B8CA6965(func_28(), func_27(), 2);
			unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_331, sLocal_338, "enter_michael", 1000f, -2f, 0, 0, 1148846080, 0);
			if (unk_0x6C3F127AAF415E69() == 4)
			{
				unk_0x57E0CF9BF653D99A(iLocal_331, 0f);
			}
			else
			{
				unk_0x57E0CF9BF653D99A(iLocal_331, 0,163f);
			}
			if (unk_0xB818A4F8553577BC(iLocal_331))
			{
				unk_0xEFC3DF9D33E248D8(iLocal_331, false);
			}
			if (unk_0xDCCE25EA1C1D1F76(unk_0x16F2683693E537C9()))
			{
				unk_0xE731059548189243(unk_0x16F2683693E537C9(), 1);
			}
			unk_0x28F5E4DA506AC0CA(func_28(), 5f, 0, 0, 0, 0, false, 0);
			unk_0x017609C6DED4F4CF(-804,5928f, 173,1801f, 71,68436f, 0f, 0f, 0,590625f, 1f, 0,7f);
			unk_0xCE5A8F1DB5EC131E(2);
			iLocal_308 = 3;
			break;
		
		case 3:
			func_29();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			if (unk_0xA45992A6CE82FB43(iLocal_331) > 0,8f)
			{
				iLocal_331 = unk_0xE9744DB7B8CA6965(func_28(), func_27(), 2);
				if (!Global_30828[4].f_2)
				{
					func_25();
					unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_331, sLocal_338, "base_michael", 2f, -8f, 64, 0, 1148846080, 0);
					unk_0xE14EC663EED44AD5(func_24(), iLocal_331, "base_remote", sLocal_338, 8f, -8f, 64, 1148846080);
					unk_0xC90224D9E95E5E3A(iLocal_331, true);
				}
				else
				{
					if (!unk_0x562F77A7F33D2E46("TV_MICHAELS_HOUSE"))
					{
						unk_0x8BC9595FD2792B5D("TV_MICHAELS_HOUSE");
					}
					unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_331, sLocal_338, "base_michael", 2f, -8f, 0, 0, 1148846080, 0);
					unk_0xE14EC663EED44AD5(func_24(), iLocal_331, "base_remote", sLocal_338, 8f, -8f, 0, 1148846080);
					if (unk_0xB818A4F8553577BC(iLocal_331))
					{
						unk_0xEFC3DF9D33E248D8(iLocal_331, false);
					}
				}
				iLocal_308 = 4;
			}
			break;
		
		case 4:
			func_29();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			if (!func_22())
			{
				if (!Global_30828[4].f_2)
				{
					func_42("TV_HLP3");
					iLocal_308 = 5;
				}
				else if (unk_0xA45992A6CE82FB43(iLocal_331) > 0,8f)
				{
					iLocal_331 = unk_0xE9744DB7B8CA6965(func_28(), func_27(), 2);
					unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_331, sLocal_338, "tv_enter_michael", 2f, -4f, 0, 0, 1148846080, 0);
					unk_0xE14EC663EED44AD5(func_24(), iLocal_331, "tv_enter_remote", sLocal_338, 8f, -4f, 0, 1148846080);
					if (unk_0xB818A4F8553577BC(iLocal_331))
					{
						unk_0xEFC3DF9D33E248D8(iLocal_331, false);
					}
					if (func_43("TV_HLP3"))
					{
						unk_0xA37A90C62806D848(1);
					}
					unk_0xD251FFCFFF3A13CC(1);
					func_42("TV_HLP4");
					iLocal_308 = 6;
				}
			}
			else
			{
				iLocal_308 = 11;
			}
			break;
		
		case 5:
			func_29();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			unk_0xA2E3EDD0E119882F(2);
			if (!func_22())
			{
				func_20();
				if (!func_43("TV_HLP3"))
				{
					func_42("TV_HLP3");
				}
				if (unk_0xBFC0798A6E3417F9(2, 51))
				{
					iLocal_331 = unk_0xE9744DB7B8CA6965(func_28(), func_27(), 2);
					unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_331, sLocal_338, "tv_enter_michael", 8f, -8f, 0, 0, 1148846080, 0);
					unk_0xE14EC663EED44AD5(func_24(), iLocal_331, "tv_enter_remote", sLocal_338, 8f, -8f, 0, 1148846080);
					if (!iLocal_318)
					{
						if (unk_0x6FB46C25CCB7E6D5(-1256798071, &iLocal_333, -1))
						{
							unk_0xCDC520E5E48E63D9(-1256798071, iLocal_333 + 1, 1);
							iLocal_318 = 1;
						}
					}
					iLocal_308 = 6;
				}
			}
			else
			{
				iLocal_308 = 11;
			}
			break;
		
		case 6:
			func_29();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			unk_0x47C6DEE1E7231AC3(unk_0x16F2683693E537C9());
			if (unk_0xA45992A6CE82FB43(iLocal_331) > 0,8f)
			{
				iLocal_331 = unk_0xE9744DB7B8CA6965(func_28(), func_27(), 2);
				unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_331, sLocal_338, "tv_base_michael", 2f, -8f, 64, 0, 1148846080, 0);
				unk_0xE14EC663EED44AD5(func_24(), iLocal_331, "tv_base_remote", sLocal_338, 2f, -8f, 0, 1148846080);
				unk_0xC90224D9E95E5E3A(iLocal_331, true);
				iLocal_308 = 7;
			}
			else if (!Global_30828[4].f_2)
			{
				if (unk_0xA45992A6CE82FB43(iLocal_331) > 0,5f)
				{
					if (unk_0x6C3F127AAF415E69() != 4)
					{
						iLocal_310 = 2;
					}
					func_17(4, 0, 1, 0, 0);
					if (!unk_0x562F77A7F33D2E46("TV_MICHAELS_HOUSE"))
					{
						unk_0x8BC9595FD2792B5D("TV_MICHAELS_HOUSE");
					}
					unk_0xD251FFCFFF3A13CC(1);
					func_42("TV_HLP4");
				}
			}
			break;
		
		case 7:
			func_29();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			unk_0xA2E3EDD0E119882F(2);
			unk_0x47C6DEE1E7231AC3(unk_0x16F2683693E537C9());
			if (!func_22())
			{
				if (!func_43("TV_HLP4"))
				{
					func_42("TV_HLP4");
				}
				func_20();
				func_16(0, 1);
				if (unk_0xBFC0798A6E3417F9(2, 51))
				{
					iLocal_331 = unk_0xE9744DB7B8CA6965(func_28(), func_27(), 2);
					unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_331, sLocal_338, "tv_exit_michael", 8f, -8f, 0, 0, 1148846080, 0);
					unk_0xE14EC663EED44AD5(func_24(), iLocal_331, "tv_exit_remote", sLocal_338, 8f, -8f, 0, 1148846080);
					if (unk_0xB818A4F8553577BC(iLocal_331))
					{
						unk_0xEFC3DF9D33E248D8(iLocal_331, false);
					}
					iLocal_314 = 1;
					iLocal_308 = 9;
				}
				else if (func_15(0))
				{
					iLocal_331 = unk_0xE9744DB7B8CA6965(func_28(), func_27(), 2);
					unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_331, sLocal_338, "tv_idle_a_michael", 8f, -8f, 0, 0, 1148846080, 0);
					unk_0xE14EC663EED44AD5(func_24(), iLocal_331, "tv_idle_a_remote", sLocal_338, 8f, -8f, 0, 1148846080);
					if (unk_0xB818A4F8553577BC(iLocal_331))
					{
						unk_0xEFC3DF9D33E248D8(iLocal_331, false);
					}
					iLocal_315 = 1;
					iLocal_308 = 8;
				}
			}
			else
			{
				iLocal_308 = 11;
			}
			break;
		
		case 8:
			func_29();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			unk_0xA2E3EDD0E119882F(2);
			unk_0x47C6DEE1E7231AC3(unk_0x16F2683693E537C9());
			if (unk_0x69DF961355195C3C(iLocal_331))
			{
				if (iLocal_315)
				{
					fVar3 = unk_0xA45992A6CE82FB43(iLocal_331);
					if (fVar3 > 0,3f)
					{
						if (unk_0x04639A879AC88653() == 0)
						{
							unk_0x188BA9B758DB0D5E(1);
						}
						else
						{
							unk_0x188BA9B758DB0D5E(0);
						}
						iLocal_315 = 0;
					}
				}
			}
			else
			{
				iLocal_331 = unk_0xE9744DB7B8CA6965(func_28(), func_27(), 2);
				unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_331, sLocal_338, "tv_base_michael", 8f, -8f, 64, 0, 1148846080, 0);
				unk_0xE14EC663EED44AD5(func_24(), iLocal_331, "tv_base_remote", sLocal_338, 8f, -8f, 64, 1148846080);
				unk_0xC90224D9E95E5E3A(iLocal_331, true);
				iLocal_308 = 7;
			}
			break;
		
		case 9:
			func_29();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			if (unk_0x69DF961355195C3C(iLocal_331))
			{
				if (iLocal_314)
				{
					if (unk_0xA45992A6CE82FB43(iLocal_331) > 0,5f)
					{
						if (unk_0x6C3F127AAF415E69() != 4)
						{
							iLocal_310 = 3;
						}
						func_14(4);
						unk_0xD251FFCFFF3A13CC(0);
						if (unk_0x562F77A7F33D2E46("TV_MICHAELS_HOUSE"))
						{
							unk_0x8910D3D58E0132B8("TV_MICHAELS_HOUSE");
						}
						if (func_43("TV_HLP4"))
						{
							unk_0xA37A90C62806D848(1);
						}
						iLocal_314 = 0;
					}
				}
			}
			else
			{
				iLocal_331 = unk_0xE9744DB7B8CA6965(func_28(), func_27(), 2);
				unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_331, sLocal_338, "base_michael", 8f, -8f, 64, 0, 1148846080, 0);
				unk_0xE14EC663EED44AD5(func_24(), iLocal_331, "base_remote", sLocal_338, 8f, -8f, 64, 1148846080);
				unk_0xC90224D9E95E5E3A(iLocal_331, true);
				iLocal_308 = 4;
			}
			break;
		
		case 10:
			func_29();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			if (Global_30828[4].f_2)
			{
				unk_0x47C6DEE1E7231AC3(unk_0x16F2683693E537C9());
			}
			switch (iLocal_309)
			{
				case 0:
					if (func_43("TV_HLP4") || func_43("TV_HLP3"))
					{
						unk_0xA37A90C62806D848(1);
					}
					iLocal_331 = unk_0xE9744DB7B8CA6965(func_28(), func_27(), 2);
					unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_331, sLocal_338, "tv_exit_michael", 8f, -8f, 0, 0, 1148846080, 0);
					unk_0xE14EC663EED44AD5(func_24(), iLocal_331, "tv_exit_remote", sLocal_338, 8f, -8f, 0, 1148846080);
					if (unk_0xB818A4F8553577BC(iLocal_331))
					{
						unk_0xEFC3DF9D33E248D8(iLocal_331, false);
					}
					iLocal_309 = 1;
					break;
				
				case 1:
					if (func_43("TV_HLP4") || func_43("TV_HLP3"))
					{
						unk_0xA37A90C62806D848(1);
					}
					if (!unk_0x69DF961355195C3C(iLocal_331) || iLocal_311)
					{
						func_13();
						iLocal_331 = unk_0xE9744DB7B8CA6965(func_28(), func_27(), 2);
						unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_331, sLocal_338, "cigar_enter_michael", 8f, -8f, 0, 0, 1148846080, 0);
						unk_0xE14EC663EED44AD5(func_12(), iLocal_331, "cigar_enter_cigar", sLocal_338, 8f, -8f, 0, 1148846080);
						unk_0xE14EC663EED44AD5(func_10(), iLocal_331, "cigar_enter_lighter", sLocal_338, 8f, -8f, 0, 1148846080);
						if (unk_0xB818A4F8553577BC(iLocal_331))
						{
							unk_0xEFC3DF9D33E248D8(iLocal_331, false);
						}
						iLocal_311 = 0;
						iLocal_309 = 2;
					}
					break;
				
				case 2:
					if (unk_0x69DF961355195C3C(iLocal_331))
					{
						func_9(0);
					}
					else
					{
						iLocal_331 = unk_0xE9744DB7B8CA6965(func_28(), func_27(), 2);
						bLocal_316 = func_8();
						if (bLocal_316)
						{
							unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_331, sLocal_338, "cigar_idle_a_michael", 4f, -8f, 0, 0, 1148846080, 0);
							unk_0xE14EC663EED44AD5(func_12(), iLocal_331, "cigar_idle_a_cigar", sLocal_338, 4f, -8f, 0, 1148846080);
							unk_0xE14EC663EED44AD5(func_10(), iLocal_331, "cigar_idle_a_lighter", sLocal_338, 4f, -8f, 0, 1148846080);
						}
						else
						{
							unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_331, sLocal_338, "cigar_idle_b_michael", 4f, -8f, 0, 0, 1148846080, 0);
							unk_0xE14EC663EED44AD5(func_12(), iLocal_331, "cigar_idle_b_cigar", sLocal_338, 4f, -8f, 0, 1148846080);
							unk_0xE14EC663EED44AD5(func_10(), iLocal_331, "cigar_idle_b_lighter", sLocal_338, 4f, -8f, 0, 1148846080);
						}
						if (unk_0xB818A4F8553577BC(iLocal_331))
						{
							unk_0xEFC3DF9D33E248D8(iLocal_331, false);
						}
						func_13();
						iLocal_309 = 3;
					}
					break;
				
				case 3:
					if (unk_0x69DF961355195C3C(iLocal_331))
					{
						if (bLocal_316)
						{
							func_9(1);
						}
						else
						{
							func_9(2);
						}
						fVar3 = unk_0xA45992A6CE82FB43(iLocal_331);
						if (fVar3 < 0,5f)
						{
							func_6();
						}
						if (iLocal_312)
						{
							if (!iLocal_313)
							{
								if (bLocal_316)
								{
									if (unk_0xDC2A248C2CB7B3DB(func_5(), "cigar_idle_a_michael", func_4(), &fVar4, &fVar5))
									{
										if (fVar3 >= fVar4 && fVar3 <= fVar5)
										{
											iLocal_313 = 1;
										}
									}
								}
								else if (unk_0xDC2A248C2CB7B3DB(func_5(), "cigar_idle_b_michael", func_4(), &fVar4, &fVar5))
								{
									if (fVar3 >= fVar4 && fVar3 <= fVar5)
									{
										iLocal_313 = 1;
									}
								}
							}
							else
							{
								iLocal_331 = unk_0xE9744DB7B8CA6965(func_28(), func_27(), 2);
								unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_331, sLocal_338, "cigar_interrupt_michael", 8f, -8f, 0, 0, 1148846080, 0);
								unk_0xE14EC663EED44AD5(func_12(), iLocal_331, "cigar_interrupt_cigar", sLocal_338, 8f, -8f, 0, 1148846080);
								unk_0xE14EC663EED44AD5(func_10(), iLocal_331, "cigar_interrupt_lighter", sLocal_338, 8f, -8f, 0, 1148846080);
								if (unk_0xB818A4F8553577BC(iLocal_331))
								{
									unk_0xEFC3DF9D33E248D8(iLocal_331, false);
								}
								iLocal_312 = 0;
								iLocal_308 = 11;
							}
						}
					}
					else
					{
						iLocal_331 = unk_0xE9744DB7B8CA6965(func_28(), func_27(), 2);
						unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_331, sLocal_338, "cigar_exit_michael", 8f, -8f, 0, 0, 1148846080, 0);
						unk_0xE14EC663EED44AD5(func_12(), iLocal_331, "cigar_exit_cigar", sLocal_338, 8f, -8f, 0, 1148846080);
						unk_0xE14EC663EED44AD5(func_10(), iLocal_331, "cigar_exit_lighter", sLocal_338, 8f, -8f, 0, 1148846080);
						if (unk_0xB818A4F8553577BC(iLocal_331))
						{
							unk_0xEFC3DF9D33E248D8(iLocal_331, false);
						}
						func_13();
						if (Global_30828[4].f_2)
						{
							iLocal_309 = 4;
						}
						else
						{
							iLocal_309 = 5;
						}
					}
					break;
				
				case 4:
					if (!unk_0x69DF961355195C3C(iLocal_331))
					{
						iLocal_331 = unk_0xE9744DB7B8CA6965(func_28(), func_27(), 2);
						unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_331, sLocal_338, "tv_enter_michael", 8f, -8f, 0, 0, 1148846080, 0);
						unk_0xE14EC663EED44AD5(func_24(), iLocal_331, "tv_enter_remote", sLocal_338, 8f, -8f, 0, 1148846080);
						if (unk_0xB818A4F8553577BC(iLocal_331))
						{
							unk_0xEFC3DF9D33E248D8(iLocal_331, false);
						}
						iLocal_309 = 5;
					}
					else
					{
						func_9(3);
					}
					break;
				
				case 5:
					if (!unk_0x69DF961355195C3C(iLocal_331))
					{
						func_13();
						iLocal_331 = unk_0xE9744DB7B8CA6965(func_28(), func_27(), 2);
						if (Global_30828[4].f_2)
						{
							unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_331, sLocal_338, "tv_base_michael", 8f, -8f, 64, 0, 1148846080, 0);
							unk_0xE14EC663EED44AD5(func_24(), iLocal_331, "tv_base_remote", sLocal_338, 8f, -8f, 64, 1148846080);
							unk_0xC90224D9E95E5E3A(iLocal_331, true);
							func_42("TV_HLP4");
							iLocal_308 = 7;
						}
						else
						{
							unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_331, sLocal_338, "base_michael", 4f, -8f, 64, 0, 1148846080, 0);
							unk_0xE14EC663EED44AD5(func_24(), iLocal_331, "base_remote", sLocal_338, 8f, -8f, 64, 1148846080);
							unk_0xC90224D9E95E5E3A(iLocal_331, true);
							func_42("TV_HLP3");
							iLocal_308 = 5;
						}
					}
					else
					{
						func_9(3);
					}
					break;
			}
			break;
		
		case 11:
			func_29();
			unk_0x3FC8DBCC154CA56B();
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			if (!unk_0x69DF961355195C3C(iLocal_331))
			{
				if (func_3(iLocal_329) && func_3(iLocal_330))
				{
					if (!unk_0xFA06B985B30FB0FC(iLocal_329) && !unk_0xFA06B985B30FB0FC(iLocal_330))
					{
						iLocal_308 = 12;
					}
				}
				else
				{
					iLocal_308 = 12;
				}
			}
			else
			{
				func_6();
				func_9(3);
				if (iLocal_312)
				{
					fVar3 = unk_0xA45992A6CE82FB43(iLocal_331);
					if (unk_0xDC2A248C2CB7B3DB(func_5(), "exit_michael", "WalkInterruptible", &fVar6, &fVar7))
					{
						if (fVar3 >= fVar6 && fVar3 <= fVar7)
						{
							unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
							iLocal_308 = 12;
						}
					}
				}
			}
			break;
		
		case 12:
			unk_0xD251FFCFFF3A13CC(0);
			if (unk_0x6FB46C25CCB7E6D5(-1256798071, &iLocal_332, -1))
			{
				unk_0xCDC520E5E48E63D9(-1256798071, iLocal_332 + 1, 1);
			}
			if (unk_0x6C3F127AAF415E69() != 4)
			{
				unk_0x04B065D07D2FB5B9(0, 0, 3, 0);
			}
			if (unk_0x562F77A7F33D2E46("TV_MICHAELS_HOUSE"))
			{
				unk_0x8910D3D58E0132B8("TV_MICHAELS_HOUSE");
			}
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
			iLocal_51 = 0;
			iLocal_312 = 0;
			iLocal_313 = 0;
			iLocal_317 = 1;
			if (Global_30828[4].f_2)
			{
				func_2(4);
			}
			Global_30813 = 0;
			func_30(0, 1, 0, 0, 0, 0);
			iLocal_308 = 0;
			break;
	}
}

void func_2(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_30828[iParam0].f_5 = 0;
		if (Global_30828[iParam0].f_2 && Global_30828[iParam0].f_7 == 0)
		{
			Global_30828[iParam0].f_7 = 1;
		}
		Global_30828[iParam0].f_8 = 0;
	}
}

int func_3(int iParam0)
{
	if (unk_0x6C3F127AAF415E69() != 4 && unk_0x9F4FE516EAACCFC5(iParam0))
	{
		return 1;
	}
	return 0;
}

char* func_4()
{
	sVar0 = "ScriptEvent";
	return sVar0;
}

char* func_5()
{
	switch (iLocal_55)
	{
		case -257549932:
			if (bLocal_49)
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
				if (bLocal_50)
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
			if (bLocal_50)
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

void func_6()
{
	if (!iLocal_312)
	{
		func_7(&iVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((iVar0 < -64 || iVar0 > 64) || iVar1 < -64) || iVar1 > 64)
		{
			iLocal_312 = 1;
		}
	}
}

void func_7(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = floor((unk_0x4F3973434662D795(2, 218) * 127f));
	*uParam1 = floor((unk_0x4F3973434662D795(2, 219) * 127f));
	*uParam2 = floor((unk_0x4F3973434662D795(2, 220) * 127f));
	*uParam3 = floor((unk_0x4F3973434662D795(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = floor((unk_0x4B7163B4D6E4A3C2(2, 218) * 127f));
			*uParam1 = floor((unk_0x4B7163B4D6E4A3C2(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = floor((unk_0x4B7163B4D6E4A3C2(2, 220) * 127f));
			*uParam3 = floor((unk_0x4B7163B4D6E4A3C2(2, 221) * 127f));
		}
	}
}

int func_8()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_9(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!iLocal_321 && unk_0xA45992A6CE82FB43(iLocal_331) > 0,27f)
			{
				unk_0xE81656B429E5C4B5("scr_sh_lighter_sparks", func_10(), 0f, 0f, 0,05f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				iLocal_321 = 1;
			}
			if (!iLocal_320 && unk_0xA45992A6CE82FB43(iLocal_331) > 0,275f)
			{
				iLocal_337 = unk_0xC1879030EB463216("scr_sh_lighter_flame", func_10(), 0f, 0f, 0,05f, 0f, 0f, 0f, 1f, 0, 0, 0);
				iLocal_320 = 1;
			}
			if (unk_0x83A8177D302E1A7E(iLocal_337) && unk_0xA45992A6CE82FB43(iLocal_331) > 0,45f)
			{
				unk_0xF7E25143642732EA(iLocal_337, 0);
			}
			if (!iLocal_319 && unk_0xA45992A6CE82FB43(iLocal_331) > 0,346f)
			{
				iLocal_336 = unk_0xC1879030EB463216("scr_sh_cig_smoke", func_12(), vLocal_360, 0f, 0f, 0f, 1f, 0, 0, 0);
				iLocal_319 = 1;
			}
			if (!iLocal_322 && unk_0xA45992A6CE82FB43(iLocal_331) > 0,5f)
			{
				unk_0x97A0DB46CA749F31("scr_sh_cig_exhale_mouth", unk_0x16F2683693E537C9(), vLocal_363, 0f, 0f, 0f, 31086, 1f, 0, 0, 0);
				iLocal_322 = 1;
			}
			if (!iLocal_323 && unk_0xA45992A6CE82FB43(iLocal_331) > 0,5f)
			{
				unk_0x97A0DB46CA749F31("scr_sh_cig_exhale_nose", unk_0x16F2683693E537C9(), vLocal_366, vLocal_369, 31086, 1f, 0, 0, 0);
				iLocal_323 = 1;
			}
			if (!iLocal_324 && unk_0xA45992A6CE82FB43(iLocal_331) > 0,95f)
			{
				unk_0x97A0DB46CA749F31("scr_sh_cig_exhale_mouth", unk_0x16F2683693E537C9(), vLocal_363, 0f, 0f, 0f, 31086, 1f, 0, 0, 0);
				iLocal_324 = 1;
			}
			if (!iLocal_325 && unk_0xA45992A6CE82FB43(iLocal_331) > 0,95f)
			{
				unk_0x97A0DB46CA749F31("scr_sh_cig_exhale_nose", unk_0x16F2683693E537C9(), vLocal_366, vLocal_369, 31086, 1f, 0, 0, 0);
				iLocal_325 = 1;
			}
			break;
		
		case 1:
			if (!iLocal_322 && unk_0xA45992A6CE82FB43(iLocal_331) > 0,01f)
			{
				unk_0x97A0DB46CA749F31("scr_sh_cig_exhale_mouth", unk_0x16F2683693E537C9(), vLocal_363, 0f, 0f, 0f, 31086, 1f, 0, 0, 0);
				iLocal_322 = 1;
			}
			if (!iLocal_323 && unk_0xA45992A6CE82FB43(iLocal_331) > 0,01f)
			{
				unk_0x97A0DB46CA749F31("scr_sh_cig_exhale_nose", unk_0x16F2683693E537C9(), vLocal_366, vLocal_369, 31086, 1f, 0, 0, 0);
				iLocal_323 = 1;
			}
			break;
		
		case 2:
			if (!iLocal_322 && unk_0xA45992A6CE82FB43(iLocal_331) > 0,01f)
			{
				unk_0x97A0DB46CA749F31("scr_sh_cig_exhale_mouth", unk_0x16F2683693E537C9(), vLocal_363, 0f, 0f, 0f, 31086, 1f, 0, 0, 0);
				iLocal_322 = 1;
			}
			if (!iLocal_323 && unk_0xA45992A6CE82FB43(iLocal_331) > 0,01f)
			{
				unk_0x97A0DB46CA749F31("scr_sh_cig_exhale_nose", unk_0x16F2683693E537C9(), vLocal_366, vLocal_369, 31086, 1f, 0, 0, 0);
				iLocal_323 = 1;
			}
			break;
		
		case 3:
			if (unk_0x83A8177D302E1A7E(iLocal_336) && unk_0xA45992A6CE82FB43(iLocal_331) > 0,35f)
			{
				unk_0xF7E25143642732EA(iLocal_336, 0);
			}
			break;
	}
}

int func_10()
{
	switch (iLocal_55)
	{
		case -257549932:
		case -693032058:
			iVar0 = unk_0x4B72871A3BE7B474(func_11(), 5f, -680040094, 0, 0, 1);
			break;
		
		case -1630172026:
			iVar0 = unk_0x4B72871A3BE7B474(func_11(), 2f, -680040094, 0, 0, 1);
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			iVar0 = unk_0x4B72871A3BE7B474(func_11(), 5f, 488156118, 0, 0, 1);
			break;
		
		case -35679191:
			iVar0 = unk_0x4B72871A3BE7B474(func_11(), 5f, 21833643, 0, 0, 1);
			break;
		
		case 2057223314:
			iVar0 = unk_0x4B72871A3BE7B474(func_11(), 5f, -1296774200, 0, 0, 1);
			break;
	}
	return iVar0;
}

Vector3 func_11()
{
	switch (iLocal_55)
	{
		case -257549932:
			if (bLocal_49)
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
			if (bLocal_50)
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

int func_12()
{
	switch (iLocal_55)
	{
		case -693032058:
			iVar0 = unk_0x4B72871A3BE7B474(func_11(), 5f, -693032058, 0, 0, 1);
			break;
		
		case -1620762220:
			iVar0 = unk_0x4B72871A3BE7B474(func_11(), 2,5f, -1620762220, 0, 0, 1);
			break;
		
		case 788975200:
			iVar0 = unk_0x4B72871A3BE7B474(func_11(), 5f, 788975200, 0, 0, 1);
			break;
		
		case -1533900808:
			iVar0 = unk_0x4B72871A3BE7B474(func_11(), 5f, -1533900808, 0, 0, 1);
			break;
		
		case 1384562503:
			iVar0 = unk_0x4B72871A3BE7B474(func_11(), 5f, 1384562503, 0, 0, 1);
			break;
		
		case -1630172026:
			iVar0 = unk_0x4B72871A3BE7B474(func_11(), 5f, -1630172026, 0, 0, 1);
			break;
		
		case 2057223314:
			iVar0 = unk_0x4B72871A3BE7B474(func_11(), 3f, -1620762220, 0, 0, 1);
			break;
		
		case 469594741:
			iVar0 = unk_0x4B72871A3BE7B474(func_11(), 5f, 469594741, 0, 0, 1);
			break;
		
		case -35679191:
			iVar0 = unk_0x4B72871A3BE7B474(func_11(), 5f, -35679191, 0, 0, 1);
			break;
	}
	return iVar0;
}

void func_13()
{
	iLocal_320 = 0;
	iLocal_321 = 0;
	iLocal_319 = 0;
	iLocal_322 = 0;
	iLocal_323 = 0;
	iLocal_324 = 0;
	iLocal_325 = 0;
}

void func_14(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_30828[iParam0].f_4 = 1;
	}
}

int func_15(int iParam0)
{
	iVar0 = 64;
	iVar1 = (unk_0x0DED1C1B8250FA57(2, 218) - 127);
	if (iParam0 || timera() > 300)
	{
		if (iVar1 > (0 + iVar0) || iVar1 < (0 - iVar0))
		{
			settimera(0);
			return 1;
		}
	}
	return 0;
}

void func_16(bool bParam0, bool bParam1)
{
	iVar0 = 64;
	if (bParam0)
	{
		if (func_15(0))
		{
			if (!iLocal_36)
			{
				if (unk_0x64F604CF561734A9("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0x4D7F4CC43D4D0DE3(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (unk_0x04639A879AC88653() == 0)
				{
					unk_0x188BA9B758DB0D5E(1);
				}
				else
				{
					unk_0x188BA9B758DB0D5E(0);
				}
				iLocal_36 = 1;
			}
		}
		else if (iLocal_36)
		{
			iLocal_36 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (unk_0x0DED1C1B8250FA57(2, 219) - 127);
		if (!iLocal_37)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = unk_0x16EA32E2BE4AB9D3();
				fVar2 = (fVar2 - 0,5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0x2DF5312E3DA3CB39(fVar2);
				iLocal_38 = unk_0x1C0640BA9A7327B3();
				iLocal_37 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = unk_0x16EA32E2BE4AB9D3();
				fVar2 = (fVar2 + 0,5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0x2DF5312E3DA3CB39(fVar2);
				iLocal_38 = unk_0x1C0640BA9A7327B3();
				iLocal_37 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_39 = 1;
			}
			else if (iLocal_39)
			{
				if (unk_0x64F604CF561734A9("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_39 = 0;
				}
			}
		}
		if (iLocal_37)
		{
			if (iVar1 == 0 || unk_0x1C0640BA9A7327B3() > iLocal_38 + 24)
			{
				iLocal_37 = 0;
			}
		}
	}
}

void func_17(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam0 != -1)
	{
		if (!func_60(iParam0))
		{
			return;
		}
		Global_30828[iParam0].f_5 = 1;
		Global_30828[iParam0] = iParam1;
		Global_30828[iParam0].f_1 = iParam2;
		Global_30828[iParam0].f_9 = iParam4;
		Global_30828[iParam0].f_7 = iParam3;
		if (func_19(iParam0))
		{
			unk_0x188BA9B758DB0D5E(-1);
			unk_0xACBA63CD73292795(iParam1, func_18(iParam2), iParam4);
			unk_0x188BA9B758DB0D5E(iParam1);
		}
	}
	StringCopy(&Global_30906, unk_0xBB0808A181D4745C(), 24);
}

char* func_18(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			sVar0 = "PL_STD_CNT";
			break;
		
		case 2:
			sVar0 = "PL_STD_WZL";
			break;
		
		case 3:
			sVar0 = "PL_LO_CNT";
			break;
		
		case 4:
			sVar0 = "PL_LO_WZL";
			break;
		
		case 7:
			sVar0 = "PL_SP_WORKOUT";
			break;
		
		case 8:
			sVar0 = "PL_SP_INV";
			break;
		
		case 9:
			sVar0 = "PL_SP_INV_EXP";
			break;
		
		case 5:
			sVar0 = "PL_LO_RS";
			break;
		
		case 6:
			sVar0 = "PL_LO_RS_CUTSCENE";
			break;
		
		case 10:
			sVar0 = "PL_SP_PLSH1_INTRO";
			break;
		
		case 11:
			sVar0 = "PL_LES1_FAME_OR_SHAME";
			break;
		
		case 12:
			sVar0 = "PL_STD_WZL_FOS_EP2";
			break;
		
		case 13:
			sVar0 = "PL_MP_WEAZEL";
			break;
		
		case 14:
			sVar0 = "PL_MP_CCTV";
			break;
	}
	return sVar0;
}

int func_19(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_30828[iParam0].f_2)
		{
			return 1;
		}
	}
	return 0;
}

void func_20()
{
	if (unk_0xBFC0798A6E3417F9(2, 224))
	{
		func_21(203, 1);
		if (unk_0x6FB46C25CCB7E6D5(-457571384, &iLocal_334, -1))
		{
			unk_0xCDC520E5E48E63D9(-457571384, iLocal_334 + 1, 1);
		}
		if (Global_30828[4].f_2)
		{
			iLocal_309 = 0;
		}
		else
		{
			iLocal_311 = 1;
			iLocal_309 = 1;
		}
		iLocal_308 = 10;
	}
}

void func_21(int iParam0, int iParam1)
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

int func_22()
{
	if (unk_0xBFC0798A6E3417F9(2, 222))
	{
		if (func_43("TV_HLP4") || func_43("TV_HLP3"))
		{
			unk_0xA37A90C62806D848(1);
		}
		if (unk_0x5F596B0E13677FE9(unk_0x16F2683693E537C9()))
		{
			unk_0x6E8BDA9057564534(unk_0x16F2683693E537C9(), 0, 0);
		}
		func_23();
		unk_0xB966455FFCF1DE7B();
		unk_0xCE5A8F1DB5EC131E(0);
		iLocal_312 = 0;
		if (iLocal_328)
		{
			unk_0xA68C4874B560B1C0();
			iLocal_328 = 0;
		}
		iLocal_310 = 5;
		return 1;
	}
	return 0;
}

void func_23()
{
	if (unk_0x5F596B0E13677FE9(unk_0x16F2683693E537C9()))
	{
		unk_0x6E8BDA9057564534(unk_0x16F2683693E537C9(), 0, 0);
	}
	iLocal_331 = unk_0xE9744DB7B8CA6965(func_28(), func_27(), 2);
	unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_331, sLocal_338, "exit_michael", 8f, -8f, 0, 0, 1148846080, 0);
	unk_0xE14EC663EED44AD5(func_24(), iLocal_331, "base_remote", sLocal_338, 1000f, -8f, 0, 1148846080);
	if (unk_0xB818A4F8553577BC(iLocal_331))
	{
		unk_0xEFC3DF9D33E248D8(iLocal_331, false);
	}
}

int func_24()
{
	iVar0 = unk_0x4B72871A3BE7B474(func_11(), 10f, 542291840, 0, 0, 1);
	return iVar0;
}

void func_25()
{
	unk_0xACBA63CD73292795(0, func_18(1), 0);
	if (func_26(22))
	{
		unk_0xACBA63CD73292795(1, func_18(12), 0);
	}
	else
	{
		unk_0xACBA63CD73292795(1, func_18(2), 0);
	}
}

int func_26(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_330[iParam0];
}

Vector3 func_27()
{
	vVar0 = { 0f, 0f, 0f };
	switch (iLocal_55)
	{
		case -257549932:
			if (!bLocal_49)
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
			if (bLocal_50)
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

Vector3 func_28()
{
	vVar0 = { 0f, 0f, 0f };
	switch (iLocal_55)
	{
		case -257549932:
			if (!bLocal_49)
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
			if (bLocal_50)
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

void func_29()
{
	Global_22211.f_6 = 1;
}

void func_30(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_39(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_38())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_37(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_39(0);
		unk_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_37(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_35(unk_0xD803B885F5E47A62())) && !func_32(unk_0xD803B885F5E47A62(), 0)) && !func_31()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_35(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_31()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 14);
}

bool func_32(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_33(-1, 0) == 8;
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

int func_33(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_34();
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

int func_34()
{
	return Global_1312745;
}

int func_35(int iParam0)
{
	if (func_32(iParam0, 0))
	{
		return 1;
	}
	if (func_36())
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

bool func_36()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_37(int iParam0, int iParam1, var uParam2, int iParam3)
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

int func_38()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_39(int iParam0)
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

float func_40(float fParam0)
{
	return (fParam0 * 0,01745329f);
}

int func_41(bool bParam0, bool bParam1, bool bParam2)
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

void func_42(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

bool func_43(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

int func_44()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_45()
{
	switch (iLocal_55)
	{
		case -693032058:
			if (unk_0xBF75E4DF4C367CD9(-805,17f, 173,98f, 72,69f, 0,1f, -693032058, 0))
			{
				unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-805,17f, 173,98f, 72,69f, 0,1f, -693032058, 0, 0, 1), true);
				if (unk_0xBF75E4DF4C367CD9(-805,13f, 173,86f, 72,68f, 0,1f, -680040094, 0))
				{
					unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-805,13f, 173,86f, 72,68f, 0,1f, -680040094, 0, 0, 1), true);
					if (unk_0xBF75E4DF4C367CD9(-805,09f, 173,83f, 72,68f, 0,1f, 996113921, 0))
					{
						unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-805,13f, 173,86f, 72,68f, 0,1f, 996113921, 0, 0, 1), true);
						if (unk_0xBF75E4DF4C367CD9(-804,45f, 172,78f, 72,33f, 0,1f, 542291840, 0))
						{
							unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-804,45f, 172,78f, 72,33f, 0,1f, 542291840, 0, 0, 1), true);
							return 1;
						}
					}
				}
			}
			break;
		
		case -1620762220:
			if (unk_0xC844350D5D58C99A(iLocal_56))
			{
				return 1;
			}
			break;
		
		case -35679191:
			if (unk_0xC844350D5D58C99A(iLocal_56) && unk_0xBF75E4DF4C367CD9(-8,9f, 517,01f, 174f, 1f, 21833643, 0))
			{
				return 1;
			}
			break;
		
		case -1630172026:
			if (unk_0xBF75E4DF4C367CD9(-10,3f, -1440,94f, 30,62f, 0,5f, -1630172026, 0))
			{
				unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-10,3f, -1440,94f, 30,62f, 0,5f, -1630172026, 0, 0, 1), true);
				if (unk_0xBF75E4DF4C367CD9(-10,3f, -1440,94f, 30,62f, 0,5f, -680040094, 0))
				{
					unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-10,3f, -1440,94f, 30,62f, 0,5f, -680040094, 0, 0, 1), true);
					if (unk_0xBF75E4DF4C367CD9(-10,3f, -1440,94f, 30,62f, 0,5f, 996113921, 0))
					{
						unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-10,3f, -1440,94f, 30,62f, 0,5f, 996113921, 0, 0, 1), true);
						return 1;
					}
				}
			}
			break;
		
		case 788975200:
			if (bLocal_50)
			{
				if (unk_0xBF75E4DF4C367CD9(-1153,82f, -1523,31f, 10,51f, 0,5f, 788975200, 0))
				{
					unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-1153,82f, -1523,31f, 10,51f, 0,5f, 788975200, 0, 0, 1), true);
					if (unk_0xBF75E4DF4C367CD9(-1153,82f, -1523,31f, 10,51f, 0,5f, 488156118, 0))
					{
						unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-1153,82f, -1523,31f, 10,51f, 0,5f, 488156118, 0, 0, 1), true);
						return 1;
					}
				}
			}
			else if (unk_0xBF75E4DF4C367CD9(-800,68f, 184,18f, 72,57f, 0,5f, 788975200, 0))
			{
				unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-800,68f, 184,18f, 72,57f, 0,5f, 788975200, 0, 0, 1), true);
				if (unk_0xBF75E4DF4C367CD9(-800,68f, 184,18f, 72,55f, 0,5f, 488156118, 0))
				{
					unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-800,68f, 184,18f, 72,55f, 0,5f, 488156118, 0, 0, 1), true);
					return 1;
				}
			}
			break;
		
		case -1533900808:
			if (bLocal_50)
			{
				if (unk_0xBF75E4DF4C367CD9(-1153,82f, -1523,31f, 10,51f, 0,5f, -1533900808, 0))
				{
					unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-1153,82f, -1523,31f, 10,51f, 0,5f, -1533900808, 0, 0, 1), true);
					if (unk_0xBF75E4DF4C367CD9(-1153,82f, -1523,31f, 10,51f, 0,5f, 488156118, 0))
					{
						unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-1153,82f, -1523,31f, 10,51f, 0,5f, 488156118, 0, 0, 1), true);
						return 1;
					}
				}
			}
			else if (unk_0xBF75E4DF4C367CD9(-800,68f, 184,18f, 72,55f, 0,5f, -1533900808, 0))
			{
				unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-800,68f, 184,18f, 72,55f, 0,5f, -1533900808, 0, 0, 1), true);
				if (unk_0xBF75E4DF4C367CD9(-800,68f, 184,18f, 72,55f, 0,5f, 488156118, 0))
				{
					unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-800,68f, 184,18f, 72,55f, 0,5f, 488156118, 0, 0, 1), true);
					return 1;
				}
			}
			break;
		
		case 1384562503:
			if (bLocal_50)
			{
				if (unk_0xBF75E4DF4C367CD9(-1153,82f, -1523,31f, 10,51f, 0,5f, 1384562503, 0))
				{
					unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-1153,82f, -1523,31f, 10,51f, 0,5f, 1384562503, 0, 0, 1), true);
					if (unk_0xBF75E4DF4C367CD9(-1153,82f, -1523,31f, 10,51f, 0,5f, 488156118, 0))
					{
						unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-1153,82f, -1523,31f, 10,51f, 0,5f, 488156118, 0, 0, 1), true);
						return 1;
					}
				}
			}
			else if (unk_0xBF75E4DF4C367CD9(-800,68f, 184,18f, 72,55f, 0,5f, -1533900808, 0))
			{
				unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-800,68f, 184,18f, 72,55f, 0,5f, -1533900808, 0, 0, 1), true);
				if (unk_0xBF75E4DF4C367CD9(-800,68f, 184,18f, 72,55f, 0,5f, 488156118, 0))
				{
					unk_0x1E9649458B15960F(unk_0x4B72871A3BE7B474(-800,68f, 184,18f, 72,55f, 0,5f, 488156118, 0, 0, 1), true);
					return 1;
				}
			}
			break;
		
		case 2057223314:
			if (unk_0xBF75E4DF4C367CD9(1976,92f, 3821,21f, 33,32f, 0,5f, -1620762220, 0))
			{
				return 1;
			}
			break;
		
		case 469594741:
			if (unk_0xC844350D5D58C99A(iLocal_56))
			{
				unk_0x1E9649458B15960F(iLocal_56, true);
				return 1;
			}
			break;
	}
	return 0;
}

int func_46(vector3 vParam0, float fParam3, var uParam4, var uParam5)
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if ((!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && !unk_0x4E861BC5B1EDA7BD(unk_0x16F2683693E537C9())) && unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			if (!unk_0x681F21BF9F7B449B(-1, vParam0, 2f))
			{
				if ((((unk_0x19C7D1907D1DDDAB() && !unk_0x22A8E52414415B76()) && !unk_0xF1CB2C261DFBA748()) && !func_50(0)) && !func_49())
				{
					if ((Global_95672 && Global_95673) || func_48())
					{
						return 0;
					}
					if (func_47(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vParam0, fParam3, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_47(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_48()
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	return 1;
}

int func_49()
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
			if (bLocal_50)
			{
				if (unk_0x134B62B726CEC8E6(uVar2[iVar1]) == 225514697)
				{
					if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(uVar2[iVar1], true), true) < 3f)
					{
						return 1;
					}
				}
			}
			if (!bLocal_50 && !bLocal_49)
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

int func_50(int iParam0)
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

void func_51()
{
	switch (iLocal_310)
	{
		case 1:
			if (!unk_0x9F4FE516EAACCFC5(iLocal_329))
			{
				iLocal_329 = unk_0x92B061D59B9B540A(26379945, 0);
			}
			if (!unk_0x9F4FE516EAACCFC5(iLocal_330))
			{
				iLocal_330 = unk_0x92B061D59B9B540A(26379945, 0);
			}
			if (unk_0x9F4FE516EAACCFC5(iLocal_329) && unk_0x9F4FE516EAACCFC5(iLocal_330))
			{
				unk_0x86F44313DFA8F00C(iLocal_329, vLocal_346, vLocal_349, fLocal_352, 0, 1, 1, 2);
				unk_0x86F44313DFA8F00C(iLocal_330, vLocal_339, vLocal_342, fLocal_345, 0, 1, 1, 2);
				if (Global_30828[4].f_2)
				{
					unk_0xE3BB8E05FCEB3FBE(iLocal_329, true);
					vLocal_378 = { vLocal_349 };
					unk_0x91F5B0244AAE6222(iLocal_329, "HAND_SHAKE", (0,2f / 3f));
				}
				else
				{
					unk_0xE3BB8E05FCEB3FBE(iLocal_330, true);
					vLocal_378 = { vLocal_342 };
					unk_0x91F5B0244AAE6222(iLocal_330, "HAND_SHAKE", (0,2f / 3f));
				}
				unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
				iLocal_310 = 4;
			}
			break;
		
		case 2:
			if (!unk_0x562F77A7F33D2E46("TV_MICHAELS_HOUSE"))
			{
				unk_0x8BC9595FD2792B5D("TV_MICHAELS_HOUSE");
			}
			if (unk_0x9F4FE516EAACCFC5(iLocal_330))
			{
				if (unk_0xFBB4F23D534EB790(iLocal_330))
				{
					unk_0xE3BB8E05FCEB3FBE(iLocal_329, false);
				}
			}
			if (unk_0x9F4FE516EAACCFC5(iLocal_329))
			{
				if (!unk_0xFBB4F23D534EB790(iLocal_329))
				{
					vLocal_378 = { vLocal_349 };
					unk_0x91F5B0244AAE6222(iLocal_329, "HAND_SHAKE", (0,2f / 3f));
					unk_0xE3BB8E05FCEB3FBE(iLocal_329, true);
					iLocal_310 = 4;
				}
			}
			break;
		
		case 3:
			if (unk_0x9F4FE516EAACCFC5(iLocal_329))
			{
				if (unk_0xFBB4F23D534EB790(iLocal_329))
				{
					unk_0xE3BB8E05FCEB3FBE(iLocal_329, false);
				}
			}
			if (unk_0x9F4FE516EAACCFC5(iLocal_330))
			{
				if (!unk_0xFBB4F23D534EB790(iLocal_330))
				{
					vLocal_378 = { vLocal_342 };
					unk_0x91F5B0244AAE6222(iLocal_330, "HAND_SHAKE", (0,2f / 3f));
					unk_0xE3BB8E05FCEB3FBE(iLocal_330, true);
					iLocal_310 = 4;
				}
			}
			break;
		
		case 4:
			if (Global_30828[4].f_2)
			{
				func_52(iLocal_329, vLocal_378);
			}
			else
			{
				func_52(iLocal_330, vLocal_378);
			}
			break;
		
		case 5:
			if (unk_0x562F77A7F33D2E46("TV_MICHAELS_HOUSE"))
			{
				unk_0x8910D3D58E0132B8("TV_MICHAELS_HOUSE");
			}
			if (Global_30828[4].f_2)
			{
				vLocal_353 = { -806,2905f, 173,187f, 73,3211f };
				vLocal_356 = { -1,0904f, -0,0034f, -94,3685f };
				fLocal_359 = 50f;
				if (unk_0x9F4FE516EAACCFC5(iLocal_329))
				{
					unk_0x86F44313DFA8F00C(iLocal_329, vLocal_346, vLocal_349, fLocal_352, 0, 1, 1, 2);
					unk_0x86F44313DFA8F00C(iLocal_329, vLocal_353, vLocal_356, fLocal_359, 3000, 0, 0, 2);
				}
			}
			else
			{
				vLocal_353 = { -803,3088f, 175,5172f, 73,184f };
				vLocal_356 = { 2,48f, -0,0034f, 149,8074f };
				fLocal_359 = 50f;
				if (unk_0x9F4FE516EAACCFC5(iLocal_330))
				{
					unk_0x86F44313DFA8F00C(iLocal_330, vLocal_339, vLocal_342, fLocal_345, 0, 1, 1, 2);
					unk_0x86F44313DFA8F00C(iLocal_330, vLocal_353, vLocal_356, fLocal_359, 2000, 0, 0, 2);
				}
			}
			iLocal_310 = 0;
			break;
	}
}

void func_52(int iParam0, vector3 vParam1)
{
	if (unk_0x9F4FE516EAACCFC5(iParam0))
	{
		vVar0 = { unk_0x17D61C69BA58F815(iParam0, 2) };
		vVar3 = { vParam1 };
		if (unk_0x91E3F625EF57450D(2))
		{
			fVar9 = unk_0x4F3973434662D795(2, 240);
			fVar10 = unk_0x4F3973434662D795(2, 239);
			fVar11 = ((fVar9 - 0,5f) * (-6,5f * 2f));
			fVar12 = ((fVar10 - 0,5f) * (-12,5f * 2f));
			vVar3.x = (vVar3.x + fVar11);
			vVar3.z = (vVar3.z + fVar12);
			while (vVar3.z < -180f)
			{
				vVar3.z = (vVar3.z + 360f);
			}
			while (vVar3.z > 180f)
			{
				vVar3.z = (vVar3.z - 360f);
			}
			while (vVar3.x < -180f)
			{
				vVar3.x = (vVar3.x + 360f);
			}
			while (vVar3.x > 180f)
			{
				vVar3.x = (vVar3.x - 360f);
			}
			fVar13 = (vVar3.z - vVar0.z);
			fVar14 = func_53(fVar13, -180f, 180f);
			vVar6 = { vVar0 + vVar3 - vVar0 * Vector(0,25f, 0,25f, 0,25f) };
			vVar6.z = (vVar0.z + (fVar14 * 0,25f));
		}
		else
		{
			func_7(&uVar15, &uVar16, &iVar17, &iVar18, 0);
			if ((iVar17 < 32 && iVar17 > -32) && (iVar18 < 32 && iVar18 > -32))
			{
				if (iVar17 < 32 && iVar17 > -32)
				{
					iVar17 = 0;
				}
				else if (iVar17 < 0)
				{
					iVar17 = (iVar17 - 32);
				}
				else
				{
					iVar17 += 32;
				}
				if (iVar18 < 32 && iVar18 > -32)
				{
					iVar18 = 0;
				}
				else if (iVar18 < 0)
				{
					iVar18 = (iVar18 - 32);
				}
				else
				{
					iVar18 += 32;
				}
			}
			iVar17 = (iVar17 * -1);
			iVar18 = (iVar18 * -1);
			if (unk_0x89DF0B812BA6383B())
			{
				iVar18 = (iVar18 * -1);
			}
			vVar3.x = (vVar3.x + (IntToFloat(iVar18) * 0,05f));
			vVar3.z = (vVar3.z + (IntToFloat(iVar17) * 0,1f));
			while (vVar3.z < -180f)
			{
				vVar3.z = (vVar3.z + 360f);
			}
			while (vVar3.z > 180f)
			{
				vVar3.z = (vVar3.z - 360f);
			}
			while (vVar0.z < -180f)
			{
				vVar0.z = (vVar0.z + 360f);
			}
			while (vVar0.z > 180f)
			{
				vVar0.z = (vVar0.z - 360f);
			}
			fVar19 = (vVar3.z - vVar0.z);
			fVar20 = func_53(fVar19, -180f, 180f);
			vVar6 = { vVar0 + vVar3 - vVar0 * Vector(0,25f, 0,25f, 0,25f) };
			vVar6.z = (vVar0.z + (fVar20 * 0,25f));
		}
		while (vVar6.z < -180f)
		{
			vVar6.z = (vVar6.z + 360f);
		}
		while (vVar6.z > 180f)
		{
			vVar6.z = (vVar6.z - 360f);
		}
		unk_0x5F3CBA6EB9341C90(iParam0, vVar6, 2);
	}
}

float func_53(float fParam0, float fParam1, float fParam2)
{
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fVar1 = to_float(floor(((fParam0 - fParam1) / fVar0)));
	return (fParam0 - (fVar1 * fVar0));
}

int func_54()
{
	if (((func_59() && func_58()) && func_57()) && func_55())
	{
		return 1;
	}
	return 0;
}

int func_55()
{
	if (unk_0x64F604CF561734A9(func_56(), 0, -1))
	{
		return 1;
	}
	return 0;
}

char* func_56()
{
	switch (iLocal_55)
	{
		case -257549932:
			if (bLocal_49)
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
			if (bLocal_50)
			{
				sVar0 = "SAFEHOUSE_TREVOR_DRINK_WHISKEY";
			}
			else
			{
				sVar0 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
			}
			break;
		
		case 2057223314:
			if (bLocal_50)
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

int func_57()
{
	iVar0 = func_24();
	if (unk_0xC844350D5D58C99A(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_58()
{
	unk_0x9E5E60D8C63FD9D1();
	if (unk_0x25F7A4D42AF2AB93())
	{
		iLocal_327 = 1;
		return 1;
	}
	return 0;
}

int func_59()
{
	unk_0x3F423BF5B8125A50(sLocal_338);
	if (unk_0xB4AE0788C1587752(sLocal_338))
	{
		iLocal_326 = 1;
		return 1;
	}
	return 0;
}

int func_60(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_30828[iParam0].f_6)
		{
			return 1;
		}
	}
	return 0;
}

int func_61()
{
	func_62();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_62()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_66(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_65(unk_0x16F2683693E537C9());
			if (func_64(iVar0) && (!func_63(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_64(Global_111638.f_2358.f_539.f_4321))
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

bool func_63(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_64(int iParam0)
{
	return iParam0 < 3;
}

int func_65(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_66(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_66(int iParam0)
{
	if (func_64(iParam0))
	{
		return func_67(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_67(int iParam0)
{
	return Global_1798[iParam0];
}

int func_68(int iParam0)
{
	if (!unk_0x8CD06866876216F2())
	{
		iVar5 = unk_0x134B62B726CEC8E6(iParam0);
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			iVar2 = iVar1;
			iVar4 = func_76(iParam0, iVar2);
			if (func_72(iVar5, 14, iVar4, -1))
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
				iVar4 = func_69(iParam0, iVar3);
				if (func_72(iVar5, iVar3, iVar4, -1))
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

int func_69(int iParam0, int iParam1)
{
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0xEB6A8945D1AC98A1(iParam0))
	{
		return -99;
	}
	iVar0 = func_71(iParam1);
	iVar1 = unk_0x36C584991B4C183F(iParam0, iVar0);
	iVar2 = unk_0xDADA8E1DD0D0D9D9(iParam0, iVar0);
	return func_70(iParam0, iVar1, iVar2, iParam1);
}

int func_70(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_71(iParam3);
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

int func_71(int iParam0)
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

int func_72(int iParam0, int iParam1, int iParam2, int iParam3)
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
						iParam3 = func_73(iParam0, iParam2, 1, 3);
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
						iParam3 = func_73(iParam0, iParam2, 1, 4);
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

int func_73(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar19 = (iParam1 - func_75(iParam0));
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
		iVar40 = (iParam1 - func_74(iParam0, func_71(iParam2)));
		if (iVar40 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_76556.f_26[iParam2] && iParam1 == Global_76556[iParam2]) && Global_76556.f_13[iParam2] != 0)
		{
			return Global_76556.f_13[iParam2];
		}
		iVar41 = unk_0xF6900DA2D9CD7BC5(iParam3, 7, -1, 0, -1, func_71(iParam2));
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

int func_74(int iParam0, int iParam1)
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

int func_75(int iParam0)
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

int func_76(int iParam0, int iParam1)
{
	if (unk_0xEB6A8945D1AC98A1(iParam0))
	{
		return -99;
	}
	iVar0 = unk_0x98F1B512A2CC07C5(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_80(iParam1);
	}
	iVar1 = unk_0x22286A85EDEAEC56(iParam0, iParam1);
	return func_77(iParam0, iVar0, iVar1, iParam1);
}

int func_77(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 == -1)
	{
		return func_80(iParam3);
	}
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	iVar1 = unk_0xD1BC07002824FE76(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == 1885233650)
		{
			return func_79(unk_0x134B62B726CEC8E6(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == -1667301416)
		{
			return func_79(unk_0x134B62B726CEC8E6(iParam0), iVar1, 14, 4);
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
					iVar3 = (iVar3 + func_78(iParam0, iParam3));
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
	return func_80(iParam3);
}

int func_78(int iParam0, int iParam1)
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

int func_79(int iParam0, int iParam1, int iParam2, int iParam3)
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
					return (func_75(iParam0) + iVar18);
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
		iVar39 = unk_0xF6900DA2D9CD7BC5(iParam3, 7, -1, 0, -1, func_71(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			unk_0xC578687D5A643830(iVar37, &Var20);
			if (!unk_0x232048AB4B0E0259(Var20))
			{
				if (iParam1 == Var20.f_1)
				{
					return (func_74(iParam0, func_71(iParam2)) + iVar38);
				}
				iVar38++;
			}
			iVar37++;
		}
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

int func_81()
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

int func_82()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666].f_15, 20);
	}
	return 0;
}

int func_83(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_84(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_84(int iParam0)
{
	return func_85(iParam0, Global_41431);
}

int func_85(int iParam0, int iParam1)
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

void func_86()
{
	unk_0xB966455FFCF1DE7B();
	unk_0xCE5A8F1DB5EC131E(0);
	if (unk_0xB4ECF989E2C1DAC8(func_24(), func_5(), "tv_base_remote", 2))
	{
		unk_0x7720CBBC7DD82563(func_24(), "tv_base_remote", func_5(), -1000f);
	}
	if (((((func_43(func_88()) || func_43("TV_HLP0")) || func_43("TV_HLP1")) || func_43("TV_HLP2")) || func_43("TV_HLP3")) || func_43("TV_HLP4"))
	{
		unk_0xA37A90C62806D848(1);
	}
	unk_0xD251FFCFFF3A13CC(0);
	unk_0xBFBFE6D9F51994DB();
	if (unk_0x562F77A7F33D2E46("MICHAEL_SAFEHOUSE_ACTIVITIES_SCENE"))
	{
		unk_0x8910D3D58E0132B8("MICHAEL_SAFEHOUSE_ACTIVITIES_SCENE");
	}
	if (unk_0x562F77A7F33D2E46("TV_MICHAELS_HOUSE"))
	{
		unk_0x8910D3D58E0132B8("TV_MICHAELS_HOUSE");
	}
	if (iLocal_335 != -1)
	{
		unk_0xDDABC98CFF1A4C60(iLocal_335);
	}
	if (iLocal_326)
	{
		unk_0x8D17794CE3273D70(func_5());
	}
	if (iLocal_327)
	{
		unk_0x29D7581AEF4440C2();
	}
	if (unk_0x9F4FE516EAACCFC5(iLocal_329))
	{
		unk_0xE3BB8E05FCEB3FBE(iLocal_329, false);
		unk_0x9A8DDC7C522F5BF5(iLocal_329, 0);
	}
	if (unk_0x9F4FE516EAACCFC5(iLocal_330))
	{
		unk_0xE3BB8E05FCEB3FBE(iLocal_330, false);
		unk_0x9A8DDC7C522F5BF5(iLocal_330, 0);
	}
	func_87();
	if (iLocal_328)
	{
		unk_0xA68C4874B560B1C0();
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_87()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if ((!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) && func_41(1, 0, 1)) && iLocal_51)
		{
			func_30(0, 1, 1, 0, 0, 0);
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			}
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
		}
	}
}

char* func_88()
{
	switch (iLocal_55)
	{
		case -257549932:
			if (bLocal_49)
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

