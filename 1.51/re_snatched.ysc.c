void __EntryFunction__()
{
	iLocal_3 = 3;
	iLocal_4 = 1;
	iLocal_5 = 134;
	iLocal_6 = 134;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 134;
	iLocal_11 = 1;
	iLocal_12 = 12;
	iLocal_13 = 12;
	fLocal_16 = 0,001f;
	iLocal_19 = -1;
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0,0375f;
	fLocal_28 = 0,17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = -1f;
	vLocal_56 = { -1511,194f, 436,5252f, 109,7818f };
	vLocal_59 = { 968,0051f, -127,6078f, 73,3543f };
	vLocal_65 = { -1034,6f, 4918,6f, 205,9f };
	vLocal_70 = { 0,5f, 0,1f, 0,56f };
	sLocal_175 = "chassis";
	vLocal_353 = { 0f, -5f, 0f };
	vLocal_356 = { 1f, -1f, 0f };
	iLocal_369 = -1745203402;
	iLocal_370 = 2006142190;
	iLocal_371 = 1330042375;
	iLocal_372 = 1032073858;
	iLocal_373 = -96953009;
	StringCopy(&Local_378, "", 24);
	iLocal_384 = -1;
	sLocal_386 = "RANDOM@KIDNAP_GIRL";
	cLocal_387 = "RESNAAU";
	iLocal_438 = -1;
	vLocal_52 = { ScriptParam_0.f_1[0] };
	fLocal_55 = ScriptParam_0.f_17[0];
	if (unk_0x2EBF608FFE6CA406(11))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_140))
		{
			if (unk_0xBFDE4EE64C4BF2D6(iLocal_140, unk_0x5D08BBCCCC2F43A4(unk_0xD803B885F5E47A62())))
			{
				unk_0x0A94A109271BE75A(iLocal_140);
				unk_0x01E4BB5190DF7317(iLocal_140, 1193033728, 0);
				unk_0xAFF39FB306F8E232(iLocal_140, 17, true);
				unk_0xBAFED2F6486F771A(iLocal_140, 2, false);
				unk_0x11AD11297DC58CC7(iLocal_140, false);
				unk_0xFADC0A217229F6B5(iLocal_140, true);
			}
			else if (!unk_0xB4ECF989E2C1DAC8(iLocal_140, sLocal_386, "IG_1_ALT1_GIRL_IN_VAN_LOOP", 3))
			{
				unk_0x00A6D36F507FD6EA(iLocal_140, 1);
				unk_0xEEB67C3D0A71A47B(iLocal_140, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), 150f, -1, 0, 0);
				unk_0xFADC0A217229F6B5(iLocal_140, true);
			}
		}
		func_255();
	}
	if (func_214(vLocal_52, -1, 0, 0, 0))
	{
		func_211(-1);
	}
	else
	{
		unk_0x10FAF14A60A0DBE1();
	}
	unk_0xCD7D80FD792F9954("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", false);
	unk_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_SOLO", false);
	func_210();
	bLocal_83 = false;
	while (true)
	{
		wait(0);
		if (!iLocal_105)
		{
			func_209(1);
			iLocal_105 = 1;
		}
		if (!func_208())
		{
			if (func_207())
			{
				func_255();
			}
		}
		unk_0x1A6DFFFEEC27BF4F("RE_SN", 0);
		func_206();
		func_205();
		func_203();
		if (!func_208())
		{
			if (unk_0x338D6FF72D84D90F())
			{
				switch (iLocal_48)
				{
					case 0:
						if (func_189())
						{
							unk_0x34D79252800B23FF(0);
							iLocal_48 = 1;
						}
						else if (func_177())
						{
							func_255();
						}
						break;
					
					case 1:
						func_176();
						unk_0xD60411959D5D930B(0,2f);
						if ((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0xEB6A8945D1AC98A1(iLocal_141)) && !unk_0xEB6A8945D1AC98A1(iLocal_140))
						{
							if (!unk_0xE4EDC4B0E92C078B(iLocal_123))
							{
								if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(iLocal_140, false) - Vector(7f, 0f, 0f), 142f, 83,75f, 35,25f, false, true, 0))
								{
									if (unk_0xE4EDC4B0E92C078B(iLocal_120))
									{
										unk_0x142CC44DB769B57E(&iLocal_120);
									}
									if (!unk_0xE4EDC4B0E92C078B(iLocal_123))
									{
										unk_0x4A51D2E4732BD556();
										iLocal_123 = func_175(iLocal_142, 1, 0);
									}
								}
							}
							if (iLocal_439 == 0)
							{
								if ((!unk_0x03068588A1FCED1A(iLocal_155) || !unk_0x03068588A1FCED1A(iLocal_141)) || unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_140, 40f, 40f, 20f, 0, 1, 0))
								{
									settimerb(0);
									iLocal_439 = 1;
								}
							}
							if (iLocal_439 == 3)
							{
								unk_0x51B096AAC60548C1(0f);
								unk_0xA22F71BBC8173C39(iLocal_155, true);
								func_166(0);
							}
							else if (!iLocal_101)
							{
								if (func_165() == 2)
								{
									if ((vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), vLocal_52) < 40f && unk_0xC844350D5D58C99A(iLocal_155)) && !unk_0x03068588A1FCED1A(iLocal_155))
									{
										if (func_164(&uLocal_176, cLocal_387, "RESNA_LOST", 8, 0, 0, 0))
										{
											iLocal_101 = 1;
										}
									}
								}
							}
						}
						else
						{
							func_163();
							func_156();
						}
						break;
				}
			}
			else
			{
				func_255();
			}
		}
		else if (!unk_0xEB6A8945D1AC98A1(iLocal_140))
		{
			if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_140, 150f, 150f, 50f, 0, 1, 0) || (unk_0xDF1306B443CD3D15(iLocal_155, 0) && !unk_0x03068588A1FCED1A(iLocal_155)))
			{
				switch (iLocal_50)
				{
					case 0:
						unk_0x9501364A300048C6();
						if (unk_0xDF1306B443CD3D15(iLocal_155, 0) && !unk_0xEB6A8945D1AC98A1(iLocal_142))
						{
							if (unk_0xC42A92762C58E1B9(iLocal_142, iLocal_155, 0))
							{
								if (unk_0xD59B17D2DFF98E26(iLocal_140) && unk_0xD1960163A3042274(iLocal_142, 242628503) == 7)
								{
									unk_0x0C8C0C840C2D1AD2(iLocal_140, unk_0x16F2683693E537C9(), -1, 0, 2);
									unk_0xDD353D0E9C789D0E(&iLocal_159);
									unk_0xE9362E4D600DD12A(0, iLocal_155, vLocal_62, 50f, 0, 0, 786469, 7f, 15f);
									unk_0xE9362E4D600DD12A(0, iLocal_155, -859,6284f, 382,7891f, 86,4466f, 50f, 0, 0, 786469, 7f, 15f);
									unk_0xE9362E4D600DD12A(0, iLocal_155, -703,2946f, 287,229f, 82,6848f, 50f, 0, 0, 786469, 7f, 15f);
									unk_0xE9362E4D600DD12A(0, iLocal_155, -496,6651f, 246,5268f, 82,0747f, 50f, 0, 0, 786469, 7f, 15f);
									unk_0xE9362E4D600DD12A(0, iLocal_155, -166,6776f, 250,8786f, 92,4768f, 50f, 0, 0, 786469, 7f, 15f);
									unk_0xE9362E4D600DD12A(0, iLocal_155, 74,5106f, 236,4861f, 108,1344f, 50f, 0, 0, 786469, 7f, 15f);
									unk_0xE9362E4D600DD12A(0, iLocal_155, 278,7988f, 161,9029f, 103,446f, 50f, 0, 0, 786469, 7f, 15f);
									unk_0xE9362E4D600DD12A(0, iLocal_155, 425,6758f, 108,9366f, 99,4329f, 50f, 0, 0, 786469, 7f, 15f);
									unk_0xE9362E4D600DD12A(0, iLocal_155, 729,2792f, -19,616f, 81,9823f, 50f, 0, 0, 786469, 7f, 15f);
									unk_0xE9362E4D600DD12A(0, iLocal_155, vLocal_59, 50f, 0, 0, 786469, 7f, 15f);
									unk_0x75ABDC5F81978924(iLocal_159);
									unk_0x78ADC381772E3D54(iLocal_142, iLocal_159);
									unk_0xF82EA857DA10E0CD(&iLocal_159);
									iLocal_50 = 1;
								}
							}
						}
						else
						{
							func_154();
							iLocal_50 = 1;
						}
						break;
					
					case 1:
						unk_0x9501364A300048C6();
						func_153();
						func_124();
						func_123(iLocal_123, iLocal_141, 150f, 1061158912, 0);
						if (((((func_122() || func_121()) || func_119()) || func_118()) || func_117()) || unk_0xB87D13D0C064E9D1(iLocal_140, unk_0x16F2683693E537C9(), 1))
						{
							unk_0xE910A68AA670B4AA(iLocal_140);
							if (unk_0xE4EDC4B0E92C078B(iLocal_123))
							{
								if (unk_0x8FBD6436A27198B4(iLocal_123) != 1)
								{
									unk_0x321E019A46034F39(iLocal_123, false);
									unk_0x61755AC17D8F538E(iLocal_123, 1);
								}
							}
							func_154();
							func_115(&uLocal_341, 0, 0);
							iLocal_50 = 2;
						}
						else if (iLocal_366 || iLocal_81)
						{
							if (unk_0xE4EDC4B0E92C078B(iLocal_123))
							{
								if (unk_0x8FBD6436A27198B4(iLocal_123) != 1)
								{
									unk_0x321E019A46034F39(iLocal_123, false);
									unk_0x61755AC17D8F538E(iLocal_123, 1);
								}
							}
						}
						else if (unk_0xDF1306B443CD3D15(iLocal_155, 0))
						{
							if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_155, 25f, 25f, 5f, 0, 1, 0) && unk_0x9C66D99E63E8E24C(iLocal_155) > 10f)
							{
								if (unk_0x1C0640BA9A7327B3() > iLocal_109 + 5000)
								{
									iLocal_81 = 1;
								}
							}
							else
							{
								iLocal_109 = unk_0x1C0640BA9A7327B3();
							}
						}
						break;
					
					case 2:
						unk_0x9501364A300048C6();
						if (!bLocal_83)
						{
							bLocal_83 = true;
						}
						if (unk_0xC844350D5D58C99A(iLocal_155) && unk_0xC844350D5D58C99A(iLocal_140))
						{
							if (unk_0x50B5F6F3C29E9380(iLocal_140, iLocal_155))
							{
								if (unk_0x437347B10A200C4B(iLocal_155, 0))
								{
									unk_0xE121AE1BBF90E186(iLocal_140, false);
									unk_0x15AFB6CBDE990FB6(iLocal_140, 1, false);
								}
							}
						}
						if (bLocal_74)
						{
							if (iLocal_76)
							{
								func_114();
							}
							else
							{
								func_113();
							}
						}
						else
						{
							bLocal_77 = true;
						}
						func_163();
						func_110();
						if (bLocal_77)
						{
							if (bLocal_78)
							{
								func_110();
								iLocal_50 = 3;
								unk_0xE121AE1BBF90E186(iLocal_140, false);
							}
						}
						break;
					
					case 3:
						if (!unk_0xE4EDC4B0E92C078B(iLocal_122))
						{
							iLocal_122 = func_175(iLocal_140, 0, 0);
						}
						switch (iLocal_385)
						{
							case 0:
								if (unk_0xC844350D5D58C99A(unk_0x728870EB733D12A1()))
								{
									if (!unk_0xC844350D5D58C99A(iLocal_163))
									{
										iLocal_163 = unk_0x728870EB733D12A1();
										unk_0x73270B3C9CC833FD(iLocal_163, true, 1);
									}
								}
								if (func_109(1, 0, 1) && unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_140, 2,5f, 2,5f, 2,5f, 0, 1, 1))
								{
									unk_0x679C321F8CAA2CFA(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 50f, 0);
									unk_0x4E885A246A9D983A(iLocal_140, 118, false);
									func_108();
									func_100(1, 1, 1, 0, 0, 0);
									unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
									unk_0x3FC8DBCC154CA56B();
									Local_392 = { -1,2232f, -4,3354f, 1,3385f };
									if (!unk_0x437347B10A200C4B(iLocal_155, 0))
									{
										unk_0x1BF8B16C32704027(iLocal_155, -8f, 1);
										unk_0x1E9649458B15960F(iLocal_155, false);
										unk_0x71EDC33E5A423750(iLocal_155, 1);
										Local_392.f_3 = { -22,8598f, 0f, (unk_0xD9522BA9E27E1349(iLocal_155) - 60f) };
									}
									Local_392.f_6 = { -1,4334f, -4,6656f, 1,3733f };
									Local_392.f_9 = { -22,8598f, 0f, -106,3162f };
									Local_392.f_12 = 55f;
									Local_392.f_13 = 3000;
									Local_392.f_18 = 0;
									func_96(&Local_392, iLocal_155, 1);
									unk_0xA47B46945FF6DE74(iLocal_140, unk_0x68F4C0EC296D3901(iLocal_155, false), 1, false, 0, 1);
									vLocal_110 = { 0f, 0f, 0f };
									vLocal_113 = { 0f, 0f, 0f };
									iLocal_108 = unk_0xE9744DB7B8CA6965(vLocal_110, vLocal_113, 2);
									if (unk_0xD59B17D2DFF98E26(iLocal_140))
									{
										unk_0x15AFB6CBDE990FB6(iLocal_140, 1, false);
									}
									unk_0x6BE2EAE992FD7C26(iLocal_108, iLocal_155, unk_0xF653B9B22DA806A9(iLocal_155, sLocal_175));
									unk_0x83CBE93AD851E045(iLocal_108, vLocal_110, vLocal_113, 2);
									unk_0x0C8C0C840C2D1AD2(iLocal_140, unk_0x16F2683693E537C9(), -1, 0, 2);
									unk_0x915804B434753CBD(iLocal_140, iLocal_108, sLocal_386, "IG_1_ALT1_EXIT_VAN", 1000f, -4f, 5, 0, 1148846080, 0);
									unk_0xEFC3DF9D33E248D8(iLocal_108, false);
									unk_0xFADC0A217229F6B5(iLocal_140, true);
									iLocal_412 = unk_0x92B061D59B9B540A(964613260, 1);
									unk_0x93E9ED66DAB9FBE3(iLocal_412, iLocal_108, "IG_1_ALT1_EXIT_VAN_CAM", sLocal_386);
									unk_0x1E9649458B15960F(iLocal_155, true);
									unk_0x611DFA9294B339CA(iLocal_155, 2, 0, false);
									unk_0x611DFA9294B339CA(iLocal_155, 3, 0, false);
									vLocal_110 = { unk_0x68F4C0EC296D3901(iLocal_155, false) };
									vLocal_113.z = unk_0xD9522BA9E27E1349(iLocal_155);
									vVar0 = { unk_0x68E4ADDDDCD7BDDE(iLocal_155, 0f, -4,7f, 0f) };
									unk_0xE82754C349C7B581(vVar0, &(vVar0.f_2), 0, 0);
									unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), unk_0xD9522BA9E27E1349(iLocal_155));
									unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vVar0, 1, false, 0, 1);
									if (func_92(iLocal_163))
									{
										func_91();
									}
									if (unk_0xC844350D5D58C99A(iLocal_141))
									{
										if (unk_0x437347B10A200C4B(iLocal_141, 0) && vdist(unk_0x68F4C0EC296D3901(iLocal_141, false), unk_0x68F4C0EC296D3901(iLocal_140, false)) < 3f)
										{
											unk_0xEBA53F35D0085654(&iLocal_141);
										}
										if (unk_0x437347B10A200C4B(iLocal_143, 0) && vdist(unk_0x68F4C0EC296D3901(iLocal_143, false), unk_0x68F4C0EC296D3901(iLocal_143, false)) < 3f)
										{
											unk_0xEBA53F35D0085654(&iLocal_143);
										}
									}
									unk_0x6C5B8C4234CEA349(unk_0x16F2683693E537C9(), true);
									unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
									unk_0x71199B01895C6202(iLocal_369);
									unk_0x3FC8DBCC154CA56B();
									iLocal_385++;
								}
								break;
							
							case 1:
								if (unk_0xC844350D5D58C99A(iLocal_155))
								{
									iLocal_385++;
								}
								break;
							
							case 2:
								if (func_165() == 0)
								{
									sVar3 = "RESNA_THX";
								}
								else if (func_165() == 1)
								{
									sVar3 = "RESNA_THX1";
								}
								else
								{
									sVar3 = "RESNA_THX2";
								}
								if (!func_90())
								{
									if (func_164(&uLocal_176, cLocal_387, sVar3, 8, 0, 0, 0))
									{
										iLocal_385++;
									}
								}
								break;
							
							case 3:
								if (!func_90())
								{
									if (func_164(&uLocal_176, cLocal_387, "RESNA_THX3", 8, 0, 0, 0))
									{
										iLocal_385++;
									}
								}
								break;
							
							case 4:
								if (unk_0x69DF961355195C3C(iLocal_108))
								{
									if (unk_0xA45992A6CE82FB43(iLocal_108) > 0,3746479f && !iLocal_116)
									{
										if (unk_0x6C3F127AAF415E69() == 4)
										{
											unk_0x82A772610883F395("CamPushInNeutral", 0, 0);
											unk_0x4D7F4CC43D4D0DE3(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
											iLocal_116 = 1;
										}
									}
									if (unk_0xA45992A6CE82FB43(iLocal_108) > 0,4f)
									{
										iLocal_385++;
									}
								}
								break;
							
							case 5:
								unk_0xA3BF0AA5A2608191(iLocal_140);
								unk_0xE121AE1BBF90E186(iLocal_140, false);
								unk_0x4E885A246A9D983A(iLocal_140, 118, true);
								vLocal_171 = { unk_0x1BB04F10296A1C5E(sLocal_386, "IG_1_ALT1_EXIT_VAN", vLocal_110, vLocal_113, 1f, 2) };
								unk_0xE82754C349C7B581(vLocal_171, &(vLocal_171.f_2), 0, 0);
								unk_0xA47B46945FF6DE74(iLocal_140, vLocal_171, 1, false, 0, 1);
								vLocal_171 = { unk_0xEEB20D14BD38615E(sLocal_386, "IG_1_ALT1_EXIT_VAN", vLocal_110, vLocal_113, 1f, 2) };
								unk_0xD8F6A53F4799FAFE(iLocal_140, vLocal_171.z);
								if (unk_0x69DF961355195C3C(iLocal_108))
								{
									unk_0x57E0CF9BF653D99A(iLocal_108, 1f);
								}
								unk_0xF895E10BF4C72645(iLocal_140, 0, 0);
								unk_0x6C5B8C4234CEA349(unk_0x16F2683693E537C9(), false);
								if (unk_0xDF1306B443CD3D15(iLocal_155, 0))
								{
									unk_0x1E9649458B15960F(iLocal_155, false);
									if (unk_0xB4ECF989E2C1DAC8(iLocal_155, sLocal_386, "IG_1_ALT1_EXIT_VAN", 3))
									{
										unk_0x7720CBBC7DD82563(iLocal_155, "IG_1_ALT1_EXIT_VAN", sLocal_386, -8f);
									}
								}
								unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
								if (unk_0x9F4FE516EAACCFC5(iLocal_412))
								{
									unk_0x9A8DDC7C522F5BF5(iLocal_412, 0);
								}
								unk_0x2FB9A57162E54BAB(0f);
								unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
								func_100(0, 1, 1, 0, 0, 0);
								unk_0x46CB381A452EF99D(iLocal_140, 1);
								func_88(vLocal_56);
								if (unk_0xDF1306B443CD3D15(iLocal_155, 0))
								{
									unk_0x71EDC33E5A423750(iLocal_155, 1);
								}
								iLocal_50 = 4;
								break;
						}
						if (iLocal_385 > 0 && iLocal_385 < 5)
						{
							unk_0x3FC8DBCC154CA56B();
							if ((func_86(1000) || !unk_0x69DF961355195C3C(iLocal_108)) || (unk_0x69DF961355195C3C(iLocal_108) && unk_0xA45992A6CE82FB43(iLocal_108) > 0,4f))
							{
								iLocal_385 = 5;
							}
						}
						if (!unk_0xE4EDC4B0E92C078B(iLocal_122))
						{
							iLocal_122 = func_175(iLocal_140, 0, 0);
						}
						break;
					
					case 4:
						if (unk_0x02A813E6E0380440() == 0)
						{
							unk_0x34D79252800B23FF(5);
							unk_0x51B096AAC60548C1(0f);
						}
						if (unk_0xC844350D5D58C99A(iLocal_142))
						{
							if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), unk_0x68F4C0EC296D3901(iLocal_142, false)) > 10000f && unk_0x03068588A1FCED1A(iLocal_142))
							{
								unk_0x6DAD7906B73F064D(&iLocal_142);
							}
						}
						if (unk_0xC844350D5D58C99A(iLocal_143))
						{
							if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), unk_0x68F4C0EC296D3901(iLocal_143, false)) > 10000f && unk_0x03068588A1FCED1A(iLocal_143))
							{
								unk_0x6DAD7906B73F064D(&iLocal_143);
							}
						}
						if (unk_0xC844350D5D58C99A(iLocal_141))
						{
							if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), unk_0x68F4C0EC296D3901(iLocal_141, false)) > 10000f && unk_0x03068588A1FCED1A(iLocal_141))
							{
								unk_0x6DAD7906B73F064D(&iLocal_141);
							}
						}
						if (unk_0xC844350D5D58C99A(iLocal_155))
						{
							if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), unk_0x68F4C0EC296D3901(iLocal_155, false)) > 10000f && unk_0x03068588A1FCED1A(iLocal_155))
							{
								unk_0x046C362CF15F1935(&iLocal_155);
							}
						}
						func_63();
						if (unk_0xE4EDC4B0E92C078B(iLocal_122))
						{
							if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_140, 10f, 10f, 10f, 0, 1, 0))
							{
								if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
								{
									if (unk_0xD1960163A3042274(iLocal_140, 474215631) != 7)
									{
										unk_0xA3BF0AA5A2608191(iLocal_140);
									}
									unk_0xBC43ED9FE28DB191(iLocal_140);
									unk_0xE25C96A9C36BE5D2(iLocal_140, unk_0x5D08BBCCCC2F43A4(unk_0xD803B885F5E47A62()));
									unk_0xBF541ED34EA81209(iLocal_140, 0);
									unk_0x142CC44DB769B57E(&iLocal_122);
									if (unk_0xE4EDC4B0E92C078B(iLocal_120))
									{
										unk_0x142CC44DB769B57E(&iLocal_120);
									}
									func_58();
									iLocal_120 = func_57(vLocal_56, 1);
								}
							}
						}
						else if (unk_0xE4EDC4B0E92C078B(iLocal_120))
						{
							if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_56, Global_19, true, true, 0))
							{
								if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && unk_0x405E212DDE472467(iLocal_140, 0))
								{
									if ((unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0) && unk_0xF79A7BCA9E38BBBC(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0))) && unk_0x10BA239D3B8FDC7F(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 90f))
									{
										iLocal_50 = 6;
										func_56();
										unk_0x142CC44DB769B57E(&iLocal_120);
									}
								}
								else
								{
									iLocal_50 = 6;
									func_56();
									unk_0x142CC44DB769B57E(&iLocal_120);
								}
							}
							else
							{
								if (!unk_0xBFDE4EE64C4BF2D6(iLocal_140, unk_0x5D08BBCCCC2F43A4(unk_0xD803B885F5E47A62())))
								{
									func_56();
									unk_0x142CC44DB769B57E(&iLocal_120);
									if (!unk_0xE4EDC4B0E92C078B(iLocal_122))
									{
										iLocal_122 = func_54(iLocal_140, 0, 145);
									}
								}
								if (!iLocal_73 && !iLocal_75)
								{
									func_51();
									iLocal_69 = unk_0x1C0640BA9A7327B3();
								}
								else if (!iLocal_75)
								{
									if ((unk_0x1C0640BA9A7327B3() - iLocal_69) > 5000)
									{
										iLocal_69 = (unk_0x1C0640BA9A7327B3() - 5000);
									}
									func_48();
									iVar4 = 0;
									while (iVar4 < iLocal_156)
									{
										if (((func_47(iLocal_144[iVar4]) || func_47(iLocal_147[iVar4])) || vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), vLocal_56) < 400f) || vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), vLocal_65) < 400f)
										{
											if (unk_0xE4EDC4B0E92C078B(iLocal_120))
											{
												unk_0x142CC44DB769B57E(&iLocal_120);
											}
											func_56();
											iLocal_391 = iLocal_390;
											if (iLocal_391 < 6)
											{
												if (iLocal_388 > 0)
												{
													iLocal_391++;
												}
											}
											func_45();
											iLocal_75 = 0;
											if (!unk_0xEB6A8945D1AC98A1(iLocal_144[iVar4]))
											{
												unk_0x545E1397F38D9D5A(iLocal_144[iVar4], 3);
											}
											if (!unk_0xEB6A8945D1AC98A1(iLocal_147[iVar4]))
											{
												unk_0x545E1397F38D9D5A(iLocal_147[iVar4], 3);
											}
											iLocal_50 = 5;
										}
										iVar4++;
									}
								}
							}
						}
						func_163();
						if (func_44())
						{
							unk_0xEBA53F35D0085654(&iLocal_140);
							func_13();
						}
						break;
					
					case 5:
						if (unk_0x02A813E6E0380440() != 0)
						{
							unk_0x34D79252800B23FF(0);
							unk_0x51B096AAC60548C1(0f);
						}
						func_163();
						func_12();
						func_48();
						if (!iLocal_367)
						{
							if (func_11())
							{
								if (func_164(&uLocal_176, cLocal_387, "RESNA_MOR", 4, func_205(), 0, 0))
								{
									iLocal_367 = 1;
									iLocal_119 = unk_0x1C0640BA9A7327B3();
								}
							}
							else
							{
								iLocal_367 = 1;
							}
						}
						else if ((unk_0x1C0640BA9A7327B3() - iLocal_119) > 2000 && !func_90())
						{
							if (!iLocal_99)
							{
								if (func_11() && func_10() < 30f)
								{
									if (!unk_0xEB6A8945D1AC98A1(iLocal_140) && !unk_0xEB6A8945D1AC98A1(iLocal_144[0]))
									{
										if (unk_0x405E212DDE472467(iLocal_140, 0))
										{
											unk_0xFFDDE8CC59EB6D40(iLocal_140, iLocal_144[0], 0, 0f, 0f, 0f, 50f, 90, 0, 1566631136);
										}
										iLocal_99 = 1;
									}
								}
							}
							else if (!iLocal_100)
							{
								if (unk_0x405E212DDE472467(iLocal_140, 0))
								{
									if (unk_0xAF13E0A7B3EB8858(iLocal_140))
									{
										if (func_164(&uLocal_176, cLocal_387, "RESNA_FINGER", 8, 0, 0, 0))
										{
											iLocal_100 = 1;
										}
									}
								}
							}
						}
						iVar5 = 0;
						while (iVar5 < iLocal_156)
						{
							iVar6 = 0;
							if ((unk_0xC844350D5D58C99A(iLocal_144[iVar5]) && !unk_0xEB6A8945D1AC98A1(iLocal_144[iVar5])) && !unk_0x437347B10A200C4B(iLocal_144[iVar5], 0))
							{
								if (unk_0xDF1306B443CD3D15(iLocal_156[iVar5], 0) && unk_0xC42A92762C58E1B9(iLocal_144[iVar5], iLocal_156[iVar5], 0))
								{
									if (unk_0xE4EDC4B0E92C078B(iLocal_125[iVar5]))
									{
										unk_0x142CC44DB769B57E(&(iLocal_125[iVar5]));
									}
									iVar6 = 1;
								}
								if (!unk_0xE4EDC4B0E92C078B(iLocal_125[iVar5]) && !unk_0x405E212DDE472467(iLocal_144[iVar5], 0))
								{
									iLocal_125[iVar5] = func_54(iLocal_144[iVar5], 1, 145);
								}
							}
							else if (unk_0xE4EDC4B0E92C078B(iLocal_125[iVar5]))
							{
								unk_0x142CC44DB769B57E(&(iLocal_125[iVar5]));
							}
							if ((unk_0xC844350D5D58C99A(iLocal_147[iVar5]) && !unk_0xEB6A8945D1AC98A1(iLocal_147[iVar5])) && !unk_0x437347B10A200C4B(iLocal_147[iVar5], 0))
							{
								if (unk_0xDF1306B443CD3D15(iLocal_156[iVar5], 0) && unk_0xC42A92762C58E1B9(iLocal_147[iVar5], iLocal_156[iVar5], 0))
								{
									if (unk_0xE4EDC4B0E92C078B(iLocal_128[iVar5]))
									{
										unk_0x142CC44DB769B57E(&(iLocal_128[iVar5]));
									}
									iVar6 = 1;
								}
								if (!unk_0xE4EDC4B0E92C078B(iLocal_128[iVar5]) && !unk_0x405E212DDE472467(iLocal_147[iVar5], 0))
								{
									iLocal_128[iVar5] = func_54(iLocal_147[iVar5], 1, 145);
								}
							}
							else if (unk_0xE4EDC4B0E92C078B(iLocal_128[iVar5]))
							{
								unk_0x142CC44DB769B57E(&(iLocal_128[iVar5]));
							}
							func_7(iVar5, (iVar6 && unk_0xDF1306B443CD3D15(iLocal_156[iVar5], 0)));
							iVar5++;
						}
						if (func_6())
						{
							iLocal_85 = 0;
							while (iLocal_85 < 2)
							{
								if (unk_0xDF1306B443CD3D15(iLocal_156[iLocal_85], 0))
								{
									unk_0x046C362CF15F1935(&(iLocal_156[iLocal_85]));
								}
								if (!unk_0xEB6A8945D1AC98A1(iLocal_144[iLocal_85]))
								{
									unk_0x6DAD7906B73F064D(&(iLocal_144[iLocal_85]));
								}
								if (!unk_0xEB6A8945D1AC98A1(iLocal_147[iLocal_85]))
								{
									unk_0x6DAD7906B73F064D(&(iLocal_147[iLocal_85]));
								}
								if (unk_0xE4EDC4B0E92C078B(iLocal_125[iLocal_85]))
								{
									unk_0x142CC44DB769B57E(&(iLocal_125[iLocal_85]));
								}
								if (unk_0xE4EDC4B0E92C078B(iLocal_128[iLocal_85]))
								{
									unk_0x142CC44DB769B57E(&(iLocal_128[iLocal_85]));
								}
								if (unk_0xE4EDC4B0E92C078B(uLocal_131[iLocal_85]))
								{
									unk_0x142CC44DB769B57E(&(uLocal_131[iLocal_85]));
								}
								unk_0x71199B01895C6202(iLocal_370);
								unk_0x71199B01895C6202(iLocal_371);
								unk_0x71199B01895C6202(iLocal_372);
								iLocal_85++;
							}
							func_58();
							iLocal_120 = func_57(vLocal_56, 1);
							func_5(-1);
							iLocal_75 = 1;
							unk_0xA3BF0AA5A2608191(iLocal_140);
							if (!unk_0xBFDE4EE64C4BF2D6(iLocal_140, unk_0x5D08BBCCCC2F43A4(unk_0xD803B885F5E47A62())))
							{
								unk_0xE25C96A9C36BE5D2(iLocal_140, unk_0x5D08BBCCCC2F43A4(unk_0xD803B885F5E47A62()));
							}
							iLocal_50 = 4;
						}
						break;
					
					case 6:
						if (func_2())
						{
							func_13();
						}
						break;
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_120))
				{
					unk_0xF2D30B8ACAF12A39(iLocal_120, bLocal_83);
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_121))
				{
					unk_0xF2D30B8ACAF12A39(iLocal_121, bLocal_83);
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_122))
				{
					unk_0xF2D30B8ACAF12A39(iLocal_122, bLocal_83);
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_123))
				{
					unk_0xF2D30B8ACAF12A39(iLocal_123, bLocal_83);
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_124))
				{
					unk_0xF2D30B8ACAF12A39(iLocal_124, bLocal_83);
				}
			}
			else
			{
				if (unk_0xDF1306B443CD3D15(iLocal_155, 0))
				{
					unk_0xA954465BA6FDEFE2(&iLocal_155);
				}
				func_255();
			}
		}
		else
		{
			func_1();
			func_255();
		}
	}
}

void func_1()
{
	func_154();
	wait(0);
}

int func_2()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_140))
	{
		switch (iLocal_437)
		{
			case 0:
				func_100(1, 1, 0, 0, 0, 0);
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					while (!func_3(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 1093140480, 1, 1056964608, 0, 1, 0))
					{
						wait(0);
					}
				}
				if (!unk_0xEB6A8945D1AC98A1(iLocal_140))
				{
					if (unk_0x16102BEDC7435774(iLocal_140))
					{
						unk_0x0A94A109271BE75A(iLocal_140);
					}
				}
				func_45();
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 1280);
				while (!func_164(&uLocal_176, cLocal_387, "RESNA_ARRV", 4, 0, 0, 0))
				{
					wait(0);
				}
				if (!unk_0x405E212DDE472467(iLocal_140, 0))
				{
					unk_0xF96A174EE26D7588(iLocal_140, unk_0x16F2683693E537C9(), 0);
				}
				unk_0x0C8C0C840C2D1AD2(iLocal_140, unk_0x16F2683693E537C9(), 30000, 2052, 2);
				unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_140, 30000, 2052, 2);
				iLocal_437++;
				break;
			
			case 1:
				if (!func_90())
				{
					unk_0xDD353D0E9C789D0E(&iVar0);
					if (unk_0x405E212DDE472467(iLocal_140, 0))
					{
						unk_0x75CDA8644CD3B5F5(0, 0, 0);
					}
					unk_0x96167B03C5A77156(0, -3069,737f, 455,0024f, 8,6478f, 1f, 30000, 0,25f, 0, 1193033728);
					unk_0xE655C47E46F9A7E4(0, 73,0132f, 0);
					unk_0x509B8296EBA9B408(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0x75ABDC5F81978924(iVar0);
					unk_0x78ADC381772E3D54(iLocal_140, iVar0);
					unk_0xF82EA857DA10E0CD(&iVar0);
					iLocal_437++;
					settimera(0);
				}
				break;
			
			case 2:
				if (!unk_0xEB6A8945D1AC98A1(iLocal_140))
				{
					if (!unk_0x405E212DDE472467(iLocal_140, 0))
					{
						settimera(0);
						unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
						func_100(0, 1, 0, 0, 0, 0);
						iLocal_437++;
					}
				}
				break;
			
			case 3:
				if (timera() > 1000)
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_3(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_4(iParam0);
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

void func_4(int iParam0)
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

void func_5(int iParam0)
{
	iLocal_389 = unk_0x1C0640BA9A7327B3();
	iLocal_390 = iParam0;
	iLocal_388 = 0;
}

int func_6()
{
	fVar0 = func_10();
	if (fVar0 == -1f || fVar0 > 300f)
	{
		return 1;
	}
	return 0;
}

void func_7(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xE4EDC4B0E92C078B(uLocal_131[iParam0]))
		{
			uLocal_131[iParam0] = func_8(unk_0x68F4C0EC296D3901(iLocal_156[iParam0], false), 0);
			unk_0x61755AC17D8F538E(uLocal_131[iParam0], 1);
			unk_0x2A065371C9D96655(uLocal_131[iParam0], 9);
		}
		else
		{
			vVar0 = { unk_0xAC14F6E4B17D7835(uLocal_131[iParam0]) };
			vVar3 = { unk_0x68F4C0EC296D3901(iLocal_156[iParam0], false) };
			vVar0.x = (vVar0.x + ((vVar3.x - vVar0.x) / 25f));
			vVar0.y = (vVar0.y + ((vVar3.y - vVar0.y) / 25f));
			vVar0.z = (vVar0.z + ((vVar3.z - vVar0.z) / 25f));
			unk_0x2F9282246F89FFD1(uLocal_131[iParam0], vVar0);
		}
	}
	else if (unk_0xE4EDC4B0E92C078B(uLocal_131[iParam0]))
	{
		unk_0x142CC44DB769B57E(&(uLocal_131[iParam0]));
	}
}

int func_8(vector3 vParam0, bool bParam3)
{
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_9(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, bParam3);
	return iVar0;
}

float func_9(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

float func_10()
{
	fVar1 = -1f;
	iVar0 = 0;
	while (iVar0 < iLocal_144)
	{
		if ((unk_0xC844350D5D58C99A(iLocal_144[iVar0]) && !unk_0xEB6A8945D1AC98A1(iLocal_144[iVar0])) && !unk_0x437347B10A200C4B(iLocal_144[iVar0], 0))
		{
			if (fVar1 == -1f)
			{
				fVar1 = vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), unk_0x68F4C0EC296D3901(iLocal_144[iVar0], false));
			}
			else if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), unk_0x68F4C0EC296D3901(iLocal_144[iVar0], false)) < fVar1)
			{
				fVar1 = vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), unk_0x68F4C0EC296D3901(iLocal_144[iVar0], false));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_147)
	{
		if ((unk_0xC844350D5D58C99A(iLocal_147[iVar0]) && !unk_0xEB6A8945D1AC98A1(iLocal_147[iVar0])) && !unk_0x437347B10A200C4B(iLocal_147[iVar0], 0))
		{
			if (fVar1 == -1f)
			{
				fVar1 = vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), unk_0x68F4C0EC296D3901(iLocal_147[iVar0], false));
			}
			else if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), unk_0x68F4C0EC296D3901(iLocal_147[iVar0], false)) < fVar1)
			{
				fVar1 = vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), unk_0x68F4C0EC296D3901(iLocal_147[iVar0], false));
			}
		}
		iVar0++;
	}
	return fVar1;
}

int func_11()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_140))
	{
		if ((unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0)) && unk_0xC42A92762C58E1B9(iLocal_140, unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0))
		{
			return 1;
		}
		if ((!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && !unk_0x405E212DDE472467(iLocal_140, 0)) && !unk_0x869EFD0BC0868856(iLocal_140))
		{
			if (vdist2(unk_0x68F4C0EC296D3901(iLocal_140, false), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false)) < 400f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_12()
{
	vVar0 = { -20f, -20f, -20f };
	vVar3 = { 20f, 20f, 20f };
	if (!iLocal_367)
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iLocal_140, false) + vVar0 };
		vVar3 = { unk_0x68F4C0EC296D3901(iLocal_140, false) + vVar3 };
		if (func_164(&uLocal_176, cLocal_387, "RESNA_MOR", 4, func_205(), 0, 0))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_140) && !unk_0xEB6A8945D1AC98A1(iLocal_147[0]))
			{
				unk_0x0C8C0C840C2D1AD2(iLocal_140, iLocal_144[0], 20000, 16, 3);
			}
			iLocal_367 = 1;
		}
	}
}

void func_13()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_140))
	{
		unk_0x4E885A246A9D983A(iLocal_140, 317, true);
	}
	func_18(-1, 0);
	func_17();
	func_14();
	func_255();
}

void func_14()
{
	func_15();
}

int func_15()
{
	if (func_16(0))
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

bool func_16(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

int func_17()
{
	return 1;
}

void func_18(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_42();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_41(iParam0))
	{
		func_40(iParam0, iParam1);
		if (!func_39(51))
		{
			func_29("RE_REWARD", 1, 0, 4000, 10000, func_32(), 0, 138, 0);
			func_28(51);
		}
		if (func_27(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_26(iParam0, iParam1) != 322)
		{
			func_20(func_26(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_111626 = iParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_19(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_19(7);
			}
			else
			{
				func_19(1);
			}
		}
	}
}

void func_19(int iParam0)
{
	Global_111624 = iParam0;
}

void func_20(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_24((891 + iParam0), 1, -1, 1);
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
		Global_111638.f_10189[iParam0].f_10 = uParam1;
		Global_111638.f_10189[iParam0].f_11 = uParam2;
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
		func_21();
	}
}

void func_21()
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
		func_23(13, floor(Global_111638.f_10189.f_3853));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_22() == 2 == 0 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_15();
				}
			}
		}
	}
}

int func_22()
{
	return Global_30768;
}

int func_23(int iParam0, int iParam1)
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

int func_24(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_25();
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

int func_25()
{
	return Global_1312745;
}

int func_26(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_28(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0x5D96D8530B3D0904(&(Global_111638.f_20405.f_150[iVar1]), iVar0);
	}
}

void func_29(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_30(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_30(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	if (unk_0x7F8A39872A07D2CE(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (unk_0x7F8A39872A07D2CE(&(Global_111638.f_20405[iVar0]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111638.f_20405.f_145 < 9)
	{
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145]), sParam0, 16);
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145].f_4), sParam1, 16);
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_8 = (unk_0x1C0640BA9A7327B3() + iParam3);
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_9 = iParam5;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_11 = iParam6;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_12 = uParam2;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_13 = iParam7;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_14 = iParam8;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145].f_10 = ((unk_0x1C0640BA9A7327B3() + iParam3) + iParam4);
		}
		else
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145].f_10 = -1;
		}
		Global_111638.f_20405.f_145++;
		func_31();
	}
}

void func_31()
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

int func_32()
{
	func_33();
	switch (Global_111638.f_2358.f_539.f_4321)
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

void func_33()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_37(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_36(unk_0x16F2683693E537C9());
			if (func_35(iVar0) && (!func_34(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_35(Global_111638.f_2358.f_539.f_4321))
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

bool func_34(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_35(int iParam0)
{
	return iParam0 < 3;
}

int func_36(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_37(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_37(int iParam0)
{
	if (func_35(iParam0))
	{
		return func_38(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_38(int iParam0)
{
	return Global_1798[iParam0];
}

int func_39(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_20405.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_40(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_111638.f_24990.f_8[iParam0]), iParam1);
}

int func_41(int iParam0)
{
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_42()
{
	StringCopy(&Var0, unk_0xBB0808A181D4745C(), 64);
	uVar16 = func_43(Var0);
	return uVar16;
}

int func_43(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x12AB0310C2281427(&cParam0))
	{
		case -60745600:
			return 23;
			break;
		
		case 1149455824:
			return 0;
			break;
		
		case 1889800404:
			return 15;
			break;
		
		case 737712801:
			return 1;
			break;
		
		case 976199832:
			return 26;
			break;
		
		case 1531173018:
			return 29;
			break;
		
		case 1154171352:
			return 24;
			break;
		
		case -1325807529:
			return 2;
			break;
		
		case -2118978003:
			return 17;
			break;
		
		case -1363545320:
			return 11;
			break;
		
		case -129069433:
			return 16;
			break;
		
		case 1158398451:
			return 18;
			break;
		
		case -1669765523:
			return 12;
			break;
		
		case -1538568960:
			return 3;
			break;
		
		case -396020015:
			return 27;
			break;
		
		case 786118124:
			return 20;
			break;
		
		case -770891250:
			return 19;
			break;
		
		case 190582896:
			return 4;
			break;
		
		case -911763748:
			return 13;
			break;
		
		case -881321240:
			return 28;
			break;
		
		case 1337652317:
			return 7;
			break;
		
		case 1492712482:
			return 25;
			break;
		
		case -1612307213:
			return 10;
			break;
		
		case -201963189:
			return 22;
			break;
		
		case -1176354303:
			return 21;
			break;
		
		case 1735157309:
			return 9;
			break;
		
		case -1631807569:
			return 5;
			break;
		
		case 847041036:
			return 6;
			break;
		
		case -167923910:
			return 14;
			break;
		
		case 59976311:
			return 30;
			break;
		
		case 996703443:
			return 31;
			break;
		
		case -2088549946:
			return 32;
			break;
		
		case -1148693293:
			return 33;
			break;
	}
	return -1;
}

int func_44()
{
	if (Global_31006)
	{
		func_19(4);
		return 1;
	}
	return 0;
}

void func_45()
{
	Global_19671 = 0;
	func_46();
}

void func_46()
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

int func_47(int iParam0)
{
	if ((unk_0xC844350D5D58C99A(iParam0) && !unk_0xEB6A8945D1AC98A1(iParam0)) && !unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (!unk_0x03068588A1FCED1A(iParam0) && vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), unk_0x68F4C0EC296D3901(iParam0, false)) < 10000f)
		{
			iVar0 = 1;
		}
		if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), unk_0x68F4C0EC296D3901(iParam0, false)) < 2500f)
		{
			iVar0 = 1;
		}
		if (unk_0xB87D13D0C064E9D1(unk_0x16F2683693E537C9(), iParam0, 1))
		{
			iVar0 = 1;
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_140) && unk_0x405E212DDE472467(iLocal_140, 0))
		{
			if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(iLocal_140, 0), 0))
			{
				if (unk_0xB87D13D0C064E9D1(unk_0x6937EA2286828455(iLocal_140, 0), iParam0, 1))
				{
					iVar0 = 1;
				}
			}
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0) != unk_0x6937EA2286828455(iLocal_140, 0))
			{
				if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0))
				{
					if (unk_0xB87D13D0C064E9D1(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), iParam0, 1))
					{
						iVar0 = 1;
					}
				}
			}
		}
	}
	return iVar0;
}

void func_48()
{
	if (!unk_0xC844350D5D58C99A(iLocal_415))
	{
		unk_0x523BCC9DC80CD82F(186956100);
		if (unk_0xB87F6CF6E5628C67(186956100))
		{
			iLocal_415 = unk_0x7707E48765093646(186956100, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false) + Vector(2f, 0f, 0f), 1, true, false);
			unk_0x20641932E5104B25(iLocal_415, false, 0);
			unk_0x4A4806F9D471E491(iLocal_415, false, 0);
			unk_0x1E9649458B15960F(iLocal_415, true);
		}
	}
	unk_0x26F63FD28070F2CE("Checking for warp", 0,89f, 0,02f, 0f, 0, 0, 255, 255);
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			if ((unk_0xDF1306B443CD3D15(iLocal_156[iVar1], 0) && !unk_0xEB6A8945D1AC98A1(iLocal_144[iVar1])) && unk_0x82CCEAB29E9451DD(iLocal_144[iVar1], iLocal_156[iVar1]))
			{
				vVar2 = { unk_0x68F4C0EC296D3901(iLocal_156[iVar1], false) };
				vVar5 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false) };
				if (vdist2(vVar5, Local_416[0]) > 400f && vdist2(vVar5, Local_416[1]) > 400f)
				{
					if (vdist2(vVar5, Local_416[iVar1]) > 900f)
					{
						if (func_50(iLocal_156[iVar1], iVar0, iLocal_415, vVar5, unk_0x835730A2D89F6093(iVar0, 2)))
						{
							Local_416[iVar1] = { vVar5 };
							Local_416[iVar1].f_3 = { unk_0x835730A2D89F6093(iVar0, 2) };
							Local_416[iVar1].f_6 = vmag(unk_0x56E9E0FD5ACCD35D(iLocal_156[iVar1]));
						}
					}
				}
				if (!func_49(Local_416[iVar1]))
				{
					if (!unk_0x03068588A1FCED1A(iLocal_156[iVar1]))
					{
						iLocal_434[iVar1] = unk_0x1C0640BA9A7327B3();
					}
					else if (((unk_0x1C0640BA9A7327B3() - iLocal_434[iVar1]) > 1000 && (unk_0x1C0640BA9A7327B3() - iLocal_431[0]) > 2000) && (unk_0x1C0640BA9A7327B3() - iLocal_431[1]) > 2000)
					{
						if (!unk_0x8E28E832BEAC3DCE(Local_416[iVar1], 3f) && !unk_0x8E28E832BEAC3DCE(vVar2, 3f))
						{
							fVar8 = 99f;
							iVar9 = 0;
							if (iVar1 == 0)
							{
								iVar9 = 1;
							}
							if (unk_0xDF1306B443CD3D15(iLocal_156[iVar9], 0))
							{
								fVar8 = vdist(unk_0x68F4C0EC296D3901(iLocal_156[iVar9], false), Local_416[iVar1]);
							}
							if ((((vdist2(vVar2, vVar5) > 625f && vdist2(vVar2, Local_416[iVar1]) < vdist2(vVar2, vVar5)) && vdist2(vVar5, Local_416[iVar1]) > 400f) && fVar8 > 5f) && func_50(iLocal_156[iVar1], iVar0, iLocal_415, Local_416[iVar1], Local_416[iVar1].f_3))
							{
								unk_0x745CE398A4B0A3C6(Local_416[iVar1], 3f, 0);
								unk_0x28F5E4DA506AC0CA(Local_416[iVar1], 3f, 0, 0, 0, 0, false, 0);
								unk_0xA47B46945FF6DE74(iLocal_156[iVar1], Local_416[iVar1], 1, false, 0, 1);
								unk_0xC023D1C4BF532815(iLocal_156[iVar1], Local_416[iVar1].f_3, 2, 1);
								unk_0xB9FD7450C0DAB575(iLocal_156[iVar1], 1084227584);
								unk_0x1AEF7184B203A58D(iLocal_156[iVar1], (Local_416[iVar1].f_6 + 5f));
								unk_0x0D88E2F7C05BF3A2(iLocal_144[iVar1], unk_0x16F2683693E537C9());
								unk_0x56FDC9ADE35F7DB0(iLocal_156[iVar1], true, true, 0);
								iLocal_431[iVar1] = unk_0x1C0640BA9A7327B3();
								iLocal_68 = unk_0x1C0640BA9A7327B3() + 1000;
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	if (iLocal_68 > unk_0x1C0640BA9A7327B3())
	{
		unk_0x9501364A300048C6();
	}
}

int func_49(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_50(int iParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6)
{
	if (unk_0xC844350D5D58C99A(iParam2))
	{
		unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iParam0), &vVar7, &vVar10);
		unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iParam1), &vVar13, &uVar16);
		fVar19 = unk_0x755FF954DAE327E1((vVar10.z - vVar7.z));
		fVar20 = unk_0x755FF954DAE327E1((vVar10.x - vVar7.x));
		fVar21 = unk_0x755FF954DAE327E1((vVar10.y - vVar7.y));
		if (fVar20 > fVar19)
		{
			fVar22 = (fVar20 / 2f);
			fVar23 = (fVar22 - unk_0x755FF954DAE327E1(vVar7.z));
		}
		else
		{
			fVar22 = (fVar21 / 2f);
			fVar23 = (fVar22 - unk_0x755FF954DAE327E1(vVar7.x));
		}
		vVar24.z = (vVar24.z + (vVar13.z - vVar7.z));
		unk_0xA47B46945FF6DE74(iParam2, vParam3, 1, false, 0, 1);
		unk_0xC023D1C4BF532815(iParam2, vParam6, 2, 1);
		vVar1 = { unk_0x68E4ADDDDCD7BDDE(iParam2, Vector((fVar23 * 1,25f), ((fVar21 / 2f) - (fVar22 * 0,75f)), 0f) + vVar24) };
		vVar4 = { unk_0x68E4ADDDDCD7BDDE(iParam2, Vector((fVar23 * 1,25f), ((-fVar21 / 2f) + (fVar22 * 0,75f)), 0f) + vVar24) };
		iVar35 = unk_0x6D4C9F7CF124AE37(vVar4, vVar1, fVar22, 19, unk_0x16F2683693E537C9(), 4);
		if (unk_0x1EC301670B54C6DE(iVar35, &iVar27, &uVar28, &uVar31, &uVar34) != 2)
		{
		}
		if (iVar27 != 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_51()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), vLocal_56) < 1500f || vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), vLocal_65) < 1500f)
			{
				if (func_52())
				{
					iLocal_73 = 1;
				}
			}
		}
	}
}

int func_52()
{
	iVar0 = 524852;
	iVar1 = 6;
	if (unk_0xDF1306B443CD3D15(iLocal_156[0], 0) && unk_0xDF1306B443CD3D15(iLocal_156[1], 0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_144[0]))
		{
			if (unk_0xD1960163A3042274(iLocal_144[0], -1273030092) == 1)
			{
				if (!unk_0x6B4464DA5794D055(iLocal_144[0]))
				{
					unk_0xFFDDE8CC59EB6D40(iLocal_144[0], unk_0x16F2683693E537C9(), 0, 0f, 0f, 0f, 100f, 100, 1, -753768974);
				}
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_144[1]))
		{
			if (unk_0xD1960163A3042274(iLocal_144[1], -1273030092) == 1)
			{
				if (!unk_0x6B4464DA5794D055(iLocal_144[1]))
				{
					unk_0xFFDDE8CC59EB6D40(iLocal_144[1], unk_0x16F2683693E537C9(), 0, 0f, 0f, 0f, 100f, 100, 1, -753768974);
				}
			}
		}
		return 1;
	}
	else
	{
		unk_0x523BCC9DC80CD82F(iLocal_370);
		unk_0x523BCC9DC80CD82F(iLocal_372);
		unk_0x523BCC9DC80CD82F(iLocal_371);
		if ((unk_0xB87F6CF6E5628C67(iLocal_370) && unk_0xB87F6CF6E5628C67(iLocal_372)) && unk_0xB87F6CF6E5628C67(iLocal_371))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				vVar5 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false) };
				if (unk_0x8F91E660145F47FF(&vVar5, &vVar2, &vVar8, 0f, 180f, 30f, false, 1, 1))
				{
					if ((func_53(vVar2) && !unk_0x8E28E832BEAC3DCE(vVar2, 5f)) && vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), vVar2) > 100f)
					{
						iVar11 = 0;
						while (iVar11 < 2)
						{
							unk_0x536F1BE96C726C4B(vVar2, 3f, 0, 0, 0, false);
							vVar2.x = (vVar2.x + to_float(iVar11));
							iLocal_156[iVar11] = unk_0x122AAB0B1D6F55AD(iLocal_370, vVar2, vVar8.z, true, true, false);
							iLocal_144[iVar11] = unk_0x852A19533F896693(iLocal_156[iVar11], 22, iLocal_372, -1, 1, true);
							iLocal_147[iVar11] = unk_0x852A19533F896693(iLocal_156[iVar11], 22, iLocal_371, 0, 1, true);
							unk_0x6DF7BF67E86AAE86(iLocal_147[iVar11], iLocal_374);
							unk_0x6DF7BF67E86AAE86(iLocal_144[iVar11], iLocal_374);
							if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
							{
								if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0))
								{
									unk_0x0D88E2F7C05BF3A2(iLocal_144[iVar11], unk_0x16F2683693E537C9());
								}
							}
							else
							{
								unk_0x89258193691A7600(iLocal_144[iVar11], iLocal_156[iVar11], unk_0x16F2683693E537C9(), iVar1, 50f, iVar0, 5f, 10f, 1);
							}
							unk_0x00A6D36F507FD6EA(iLocal_144[iVar11], 0);
							unk_0x00A6D36F507FD6EA(iLocal_147[iVar11], 0);
							unk_0xFADC0A217229F6B5(iLocal_144[iVar11], true);
							unk_0x262EF6C6306BEA6C(iLocal_144[iVar11], 2017895192, 999999, true, true);
							unk_0x1AEF7184B203A58D(iLocal_156[iVar11], (unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) + 5f));
							iVar1 = 11;
							unk_0x262EF6C6306BEA6C(iLocal_147[iVar11], 2017895192, 999999, true, true);
							unk_0xFFDDE8CC59EB6D40(iLocal_147[iVar11], unk_0x16F2683693E537C9(), 0, 0f, 0f, 0f, 200f, 70, 0, -753768974);
							unk_0xFADC0A217229F6B5(iLocal_147[iVar11], true);
							unk_0x545E1397F38D9D5A(iLocal_144[iVar11], 1);
							unk_0x545E1397F38D9D5A(iLocal_147[iVar11], 1);
							unk_0x4E885A246A9D983A(iLocal_144[iVar11], 42, true);
							unk_0x4E885A246A9D983A(iLocal_147[iVar11], 42, true);
							unk_0x298903DD96203C2C(iLocal_144[iVar11], 15);
							unk_0x298903DD96203C2C(iLocal_147[iVar11], 15);
							iVar11++;
						}
						func_108();
					}
				}
			}
		}
	}
	return 0;
}

int func_53(vector3 vParam0)
{
	vVar0 = { vParam0 - unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false) };
	vVar3 = { unk_0x08D89CE2E20AE305(unk_0x16F2683693E537C9()) };
	if (unk_0x755FF954DAE327E1(unk_0x07AB02F3C4AE2B04(vVar3.x, vVar3.y, vVar0.x, vVar0.y)) >= 90f)
	{
		return 1;
	}
	return 0;
}

int func_54(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_55(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_1798[iParam2].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2].f_3));
	}
	return iVar0;
}

int func_55(int iParam0, bool bParam1, bool bParam2)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_9(unk_0x8CD06866876216F2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x321E019A46034F39(iVar0, bParam1);
		}
		else
		{
			unk_0x61755AC17D8F538E(iVar0, 2);
		}
	}
	else if (unk_0xEC560E589DF8370E(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_9(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_9(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
	}
	return iVar0;
}

void func_56()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_139))
	{
		unk_0x142CC44DB769B57E(&iLocal_139);
	}
}

int func_57(vector3 vParam0, bool bParam3)
{
	return func_8(vParam0, bParam3);
}

void func_58()
{
	if (func_165() == 2)
	{
		if (!unk_0xE4EDC4B0E92C078B(iLocal_139))
		{
			func_61();
			iLocal_139 = func_57(vLocal_65, 0);
			unk_0xBC8E0A7390523199(iLocal_139, 269);
			func_59();
		}
	}
}

void func_59()
{
	if (!func_60())
	{
		if (func_165() == 2)
		{
			Global_31005 = 1;
		}
	}
}

int func_60()
{
	if (Global_111638.f_24990.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_61()
{
	if (func_165() == 2)
	{
		if (!Global_31007)
		{
			func_62("CULT_BLIP_HELP", -1);
			Global_31007 = 1;
		}
	}
}

void func_62(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

void func_63()
{
	if (!iLocal_87[0])
	{
		if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), unk_0x68F4C0EC296D3901(iLocal_140, false)) < 400f)
		{
			if (unk_0xE64AC821059A938D(unk_0x16F2683693E537C9()))
			{
				iLocal_87[0] = 1;
			}
		}
	}
	if (!iLocal_90[0])
	{
		if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), unk_0x68F4C0EC296D3901(iLocal_140, false)) < 400f && (unk_0x1C0640BA9A7327B3() - iLocal_104) > 30000)
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && !unk_0x405E212DDE472467(iLocal_140, 0))
			{
				if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0))
				{
					if (!func_85(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
					{
						iLocal_90[0] = 1;
					}
				}
			}
		}
	}
	else if (iLocal_90[1])
	{
		if (func_11())
		{
			iLocal_104 = unk_0x1C0640BA9A7327B3();
			iLocal_90[0] = 0;
			iLocal_90[1] = 0;
		}
	}
	if (!iLocal_93[0])
	{
		if (func_11())
		{
			if (unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) < 1f)
			{
				fLocal_102 = (fLocal_102 + unk_0x6117725E0134737F());
				if (fLocal_102 > 30f)
				{
					iLocal_93[0] = 1;
				}
			}
			else if (fLocal_102 > 0f)
			{
				fLocal_102 = (fLocal_102 - (unk_0x6117725E0134737F() * 10f));
			}
		}
	}
	else if (iLocal_93[1])
	{
		fLocal_102 = 0f;
		iLocal_93[0] = 0;
		iLocal_93[1] = 0;
	}
	if (!iLocal_96[0])
	{
		if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && !unk_0x405E212DDE472467(iLocal_140, 0))
		{
			if (!unk_0xC844350D5D58C99A(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9())))
			{
				fLocal_103 = (fLocal_103 + unk_0x6117725E0134737F());
				if (fLocal_103 > 15f)
				{
					iLocal_96[0] = 1;
				}
			}
		}
		else if (fLocal_103 > 0f)
		{
			fLocal_103 = (fLocal_103 - (unk_0x6117725E0134737F() * 10f));
		}
	}
	if ((((!iLocal_93[0] || (iLocal_93[0] && iLocal_93[1])) && (!iLocal_87[0] || (iLocal_87[0] && iLocal_87[1]))) && (!iLocal_90[0] || (iLocal_90[0] && iLocal_90[1]))) && (!iLocal_96[0] || (iLocal_96[0] && iLocal_96[1])))
	{
		switch (iLocal_390)
		{
			case 0:
				switch (iLocal_388)
				{
					case 0:
						if (!func_90())
						{
							iLocal_388++;
						}
						break;
					
					case 1:
						if (func_11())
						{
							if (func_164(&uLocal_176, cLocal_387, "RESNA_HOME", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
					
					case 2:
						if (!func_90())
						{
							if (func_11())
							{
								if (func_84("RESNA_RESP", 0))
								{
									iLocal_388++;
								}
							}
						}
						break;
					
					case 3:
						if (func_11())
						{
							if (func_83())
							{
								if (func_164(&uLocal_176, cLocal_387, "RESNA_ADD", 4, 0, 0, 0))
								{
									iLocal_388++;
								}
							}
							else if (func_164(&uLocal_176, cLocal_387, "RESNA_ADD2", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
					
					case 4:
						if (!func_90())
						{
							func_5(1);
						}
						break;
				}
				break;
			
			case 1:
				if ((unk_0x1C0640BA9A7327B3() - iLocal_389) > 15000)
				{
					switch (iLocal_388)
					{
						case 0:
							if (func_11())
							{
								if (func_164(&uLocal_176, cLocal_387, "RESNA_BANT", 4, 0, 0, 0))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 1:
							if (!func_90())
							{
								iLocal_388++;
							}
							break;
						
						case 2:
							if (func_165() == 2)
							{
								if (func_66("RESNA_B1T", func_11()))
								{
									iLocal_388++;
								}
							}
							else if (func_11())
							{
								if (func_84("RESNA_B1", 0))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 3:
							if (func_66("RESNA_B2", func_11()))
							{
								iLocal_388++;
							}
							break;
						
						case 4:
							if (func_11())
							{
								if (func_84("RESNA_B2", 0))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 5:
							if (!func_90())
							{
								func_5(2);
							}
							break;
						}
				}
				break;
			
			case 2:
				if ((unk_0x1C0640BA9A7327B3() - iLocal_389) > 15000)
				{
					switch (iLocal_388)
					{
						case 0:
							if (func_11())
							{
								if (func_84("RESNA_B4", 0))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 1:
							if (func_66("RESNA_B4", func_11()))
							{
								iLocal_388++;
							}
							break;
						
						case 2:
							if (func_11())
							{
								if (func_84("RESNA_B4", "b"))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 3:
							if (func_66("RESNA_B5b", func_11()))
							{
								iLocal_388++;
							}
							break;
						
						case 4:
							if (!func_90())
							{
								func_5(5);
							}
							break;
						}
				}
				break;
			
			case 3:
				if ((unk_0x1C0640BA9A7327B3() - iLocal_389) > 15000)
				{
					switch (iLocal_388)
					{
						case 0:
							if (func_11())
							{
								if (func_164(&uLocal_176, cLocal_387, "RESNA_B5", 4, 0, 0, 0))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 1:
							if (!func_90())
							{
								if (func_11())
								{
									if (func_84("RESNA_B5", 0))
									{
										iLocal_388++;
									}
								}
							}
							break;
						
						case 2:
							if (func_66("RESNA_B5b", func_11()))
							{
								iLocal_388++;
							}
							break;
						
						case 3:
							if (!func_90())
							{
								func_5(5);
							}
							break;
						}
				}
				break;
			
			case 4:
				if ((unk_0x1C0640BA9A7327B3() - iLocal_389) > 15000)
				{
					switch (iLocal_388)
					{
						case 0:
							if (func_66("RESNA_B6", func_11()))
							{
								iLocal_388++;
							}
							break;
						
						case 1:
							if (func_11())
							{
								if (func_84("RESNA_B6", 0))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 2:
							if (func_66("RESNA_RUNOUT", func_11()))
							{
								iLocal_388++;
							}
							break;
						
						case 3:
							if (!func_90())
							{
								func_5(5);
							}
							break;
						}
				}
				break;
			
			case 5:
				if (iLocal_388 > 1 && iLocal_388 < 3)
				{
					if (!unk_0xFBF1556B75C783FC(iLocal_140))
					{
						unk_0x8D4C354BB8991817(iLocal_140, 1, 1);
					}
				}
				else if (unk_0xFBF1556B75C783FC(iLocal_140))
				{
					unk_0x8D4C354BB8991817(iLocal_140, 0, 1);
				}
				switch (iLocal_388)
				{
					case 0:
						if ((unk_0x1C0640BA9A7327B3() - iLocal_389) > 10000)
						{
							if (func_11())
							{
								if (func_164(&uLocal_176, cLocal_387, "RESNA_CELL1", 8, 0, 0, 0))
								{
									unk_0xC722B6355F3075E5(iLocal_140, 0);
									unk_0xA245D14CC59CDD36(iLocal_140, 0);
									unk_0x9A7FB2EDC388D8BD(iLocal_140, 0, 0);
									iLocal_388++;
								}
							}
						}
						break;
					
					case 1:
						Var0 = { func_65() };
						if (unk_0x7F8A39872A07D2CE(&Var0, "RESNA_CELL1_3"))
						{
							iLocal_388++;
						}
						break;
					
					case 2:
						if (!func_90())
						{
							iLocal_389 = unk_0x1C0640BA9A7327B3();
							iLocal_388++;
						}
						break;
					
					case 3:
						if ((unk_0x1C0640BA9A7327B3() - iLocal_389) > 2000)
						{
							if (func_11() && !unk_0x52FF53189897E1B9(iLocal_140))
							{
								if (func_84("RESNA_CELLR", 0))
								{
									unk_0xC722B6355F3075E5(iLocal_140, 1);
									unk_0xA245D14CC59CDD36(iLocal_140, 1);
									unk_0x9A7FB2EDC388D8BD(iLocal_140, 1, 0);
									iLocal_388++;
								}
							}
						}
						break;
					
					case 4:
						if (func_11())
						{
							if (func_164(&uLocal_176, cLocal_387, "RESNA_CELLD", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
				}
				break;
			
			case -1:
				switch (iLocal_388)
				{
					case 0:
						if (func_164(&uLocal_176, cLocal_387, "RESNA_BANT2", 4, 0, 0, 0))
						{
							iLocal_388++;
						}
						break;
					
					case 1:
						if (!func_90())
						{
							if (func_11())
							{
								if (func_84("RESNA_B3", 0))
								{
									iLocal_388++;
								}
							}
						}
						break;
					
					case 2:
						if (func_11())
						{
							if (func_164(&uLocal_176, cLocal_387, "RESNA_B3B", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
					
					case 3:
						if (!func_90())
						{
							if (func_11())
							{
								if (func_84("RESNA_B3B", 0))
								{
									iLocal_388++;
								}
							}
						}
						break;
					
					case 4:
						if (func_11())
						{
							if (func_164(&uLocal_176, cLocal_387, "RESNA_B3C", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
					
					case 5:
						if (!func_90())
						{
							if (func_11())
							{
								if (func_84("RESNA_B3C", 0))
								{
									iLocal_388++;
								}
							}
						}
						break;
					
					case 6:
						if (func_11())
						{
							if (func_164(&uLocal_176, cLocal_387, "RESNA_B3D", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
					
					case 7:
						if (!func_90())
						{
							iLocal_388++;
						}
						break;
					
					case 8:
						if (func_11())
						{
							if (func_165() == 2)
							{
								if (!func_90())
								{
									if (func_84("RESNA_B3D", 0))
									{
										iLocal_388++;
									}
								}
							}
							else if (func_165() == 0)
							{
								if (func_66("RESNA_B3DM", func_11()))
								{
									iLocal_388++;
								}
							}
							else if (func_66("RESNA_B3DF", func_11()))
							{
								iLocal_388++;
							}
						}
						break;
					
					case 9:
						if (!func_90())
						{
							func_5(6);
						}
						break;
				}
				break;
			
			case 6:
				if (func_165() == 2 && (unk_0x1C0640BA9A7327B3() - iLocal_389) > 15000)
				{
					switch (iLocal_388)
					{
						case 0:
							if (func_88(vLocal_56))
							{
								iLocal_388++;
							}
							break;
						
						case 1:
							if (func_66("RESNA_TREV", func_11()))
							{
								iLocal_388++;
								iLocal_389 = unk_0x1C0640BA9A7327B3();
							}
							break;
						
						case 2:
							if (func_88(vLocal_56))
							{
								iLocal_388++;
							}
							break;
						
						case 3:
							if (func_66("RESNA_CULT", func_11()))
							{
								iLocal_388++;
								iLocal_389 = unk_0x1C0640BA9A7327B3();
							}
							break;
						
						case 4:
							if (func_88(vLocal_56) && vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), vLocal_65) < 250f)
							{
								iLocal_388++;
							}
							break;
						
						case 5:
							if (func_66("RESNA_NEAR", func_11()))
							{
								iLocal_388++;
							}
							break;
						}
				}
				break;
		}
	}
	else if (func_90())
	{
		if (iLocal_376 && !iLocal_377)
		{
			Local_378 = { func_64() };
			func_45();
			iLocal_377 = 1;
		}
	}
	else
	{
		if (iLocal_87[0] && !iLocal_87[1])
		{
			if (func_164(&uLocal_176, cLocal_387, "RESNA_JACK", 8, 0, 0, 0))
			{
				iLocal_87[1] = 1;
			}
		}
		if (iLocal_96[0] && !iLocal_96[1])
		{
			if (func_164(&uLocal_176, cLocal_387, "RESNA_NOVEH", 8, 0, 0, 0))
			{
				iLocal_96[1] = 1;
			}
		}
		if (iLocal_93[0] && !iLocal_93[1])
		{
			if (unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) < 3f)
			{
				if (func_164(&uLocal_176, cLocal_387, "RESNA_STOP", 8, 0, 0, 0))
				{
					iLocal_93[1] = 1;
				}
			}
			else
			{
				iLocal_93[0] = 0;
			}
		}
		if (iLocal_90[0] && !iLocal_90[1])
		{
			if ((unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && !unk_0x405E212DDE472467(iLocal_140, 0)) && unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0))
			{
				iVar7 = unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0));
				if ((unk_0x7D8B2A8F9EA82DB7(iVar7) || unk_0xAD09C9A4B56FA133(iVar7)) || unk_0xD1CC995EE5EB1EC1(iVar7))
				{
					sVar6 = "RESNA_VEH1";
				}
				else
				{
					sVar6 = "RESNA_VEH2";
				}
				if (func_164(&uLocal_176, cLocal_387, sVar6, 8, 0, 0, 0))
				{
					iLocal_90[1] = 1;
				}
			}
			else
			{
				iLocal_90[0] = 0;
			}
		}
	}
}

struct<6> func_64()
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

struct<6> func_65()
{
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		iVar6 = unk_0x40EFDB96B3112BA7();
		iVar6 = (iVar6 + Global_21815);
		if (iVar6 > -1)
		{
			return Global_19673[iVar6];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_66(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!iLocal_376)
		{
			if (func_164(&uLocal_176, cLocal_387, sParam0, 8, 0, 0, 0))
			{
				iLocal_376 = 1;
				iLocal_377 = 0;
			}
		}
		else if (iLocal_377)
		{
			if (func_67(&uLocal_176, cLocal_387, sParam0, &Local_378, 8, 0, 0))
			{
				iLocal_377 = 0;
			}
		}
		if ((iLocal_376 && !iLocal_377) && bParam1)
		{
			if (iLocal_384 == -1)
			{
				if (!func_90())
				{
					iLocal_384 = unk_0x1C0640BA9A7327B3();
				}
			}
			else if ((unk_0x1C0640BA9A7327B3() - iLocal_384) > 500)
			{
				iLocal_384 = -1;
				iLocal_376 = 0;
				iLocal_377 = 0;
				return 1;
			}
		}
	}
	else if (iLocal_376 && !iLocal_377)
	{
		Local_378 = { func_64() };
		func_45();
		iLocal_377 = 1;
	}
	return 0;
}

bool func_67(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_82(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_68(sParam2, iParam4, 0);
}

int func_68(char* sParam0, int iParam1, bool bParam2)
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
					func_81();
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
		if (func_80(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_79();
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
				func_78();
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
				if (func_77())
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
			if (func_76())
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
			func_75();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_74();
		func_69();
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
		func_81();
	}
	return 0;
}

void func_69()
{
	if (!func_70())
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

int func_70()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_73())
	{
		return 0;
	}
	if (func_71(unk_0xD803B885F5E47A62()))
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

bool func_71(int iParam0)
{
	return func_72(iParam0, 20);
}

bool func_72(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_73()
{
	return -1;
}

void func_74()
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

void func_75()
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

int func_76()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_77()
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

void func_78()
{
	if (func_34(14))
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
		Global_19486 = func_165();
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

void func_79()
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

bool func_80(int iParam0, int iParam1)
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

void func_81()
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

void func_82(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_83()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_84(char* sParam0, char* sParam1)
{
	StringConCat(&vVar0, sParam0, 24);
	if (func_165() == 0)
	{
		StringConCat(&vVar0, "M", 24);
	}
	else if (func_165() == 1)
	{
		StringConCat(&vVar0, "F", 24);
	}
	else
	{
		StringConCat(&vVar0, "T", 24);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam1))
	{
		StringConCat(&vVar0, sParam1, 24);
	}
	if (func_164(&uLocal_176, cLocal_387, &vVar0, 8, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_85(int iParam0)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0xBBA8A868118C90ED(iParam0, -1, 0))
		{
			return 1;
		}
		if (unk_0xBBA8A868118C90ED(iParam0, 0, 0))
		{
			return 1;
		}
		if (unk_0xBBA8A868118C90ED(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0xBBA8A868118C90ED(iParam0, 2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_86(int iParam0)
{
	if (unk_0x0F1CCD77290EE12F())
	{
		if ((unk_0x1C0640BA9A7327B3() - Global_28) > iParam0)
		{
			Global_27 = unk_0x1C0640BA9A7327B3();
		}
		Global_28 = unk_0x1C0640BA9A7327B3();
		if ((unk_0x1C0640BA9A7327B3() - Global_27) > iParam0)
		{
			if (func_87())
			{
				Global_27 = unk_0x1C0640BA9A7327B3();
				return 1;
			}
		}
	}
	return 0;
}

int func_87()
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

int func_88(vector3 vParam0)
{
	if (func_165() == 2)
	{
		if (func_89() && !Global_31008)
		{
			if (fLocal_47 == -1f)
			{
				fLocal_47 = vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vParam0);
			}
			if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vParam0) > (fLocal_47 + 200f) || unk_0x0EB28750412C3A5A(-1014,154f, 4881,411f, 245,0001f, unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), false), true) < 400f)
			{
				Global_31008 = 1;
				return 1;
			}
		}
	}
	return 0;
}

var func_89()
{
	return Global_31005;
}

int func_90()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

void func_91()
{
	vVar0 = { unk_0x68E4ADDDDCD7BDDE(iLocal_155, 0f, -6f, 0f) };
	if (unk_0xDF1306B443CD3D15(unk_0x728870EB733D12A1(), 0))
	{
		if (unk_0x5A91F08DF773C39D(unk_0x728870EB733D12A1(), vVar0, 5f, 5f, 5f, false, true, 0))
		{
			unk_0x4A13F7D4B1E239A0(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), iLocal_3, &vVar3, &fVar6, &uVar7, 1, 1077936128, 0);
			unk_0xD8F6A53F4799FAFE(unk_0x728870EB733D12A1(), fVar6);
			unk_0xA47B46945FF6DE74(unk_0x728870EB733D12A1(), vVar3, 1, false, 0, 1);
		}
	}
}

int func_92(int iParam0)
{
	iVar0 = 0;
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xC844350D5D58C99A(iLocal_155))
	{
		iVar1 = iParam0;
		unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iVar1), &vVar2, &vVar5);
		vVar8 = { vVar5 - vVar2 };
		vVar11[0] = { unk_0x68E4ADDDDCD7BDDE(iVar1, (-vVar8.x / 2f), (vVar8.y / 2f), 0f) };
		vVar11[1] = { unk_0x68E4ADDDDCD7BDDE(iVar1, (vVar8.x / 2f), (vVar8.y / 2f), 0f) };
		vVar11[2] = { unk_0x68E4ADDDDCD7BDDE(iVar1, (vVar8.x / 2f), (-vVar8.y / 2f), 0f) };
		vVar11[3] = { unk_0x68E4ADDDDCD7BDDE(iVar1, (-vVar8.x / 2f), (-vVar8.y / 2f), 0f) };
		vVar24[0] = { unk_0x68E4ADDDDCD7BDDE(iLocal_155, -1f, -2,5f, 0f) };
		vVar24[1] = { unk_0x68E4ADDDDCD7BDDE(iLocal_155, 1f, -2,5f, 0f) };
		vVar24[2] = { unk_0x68E4ADDDDCD7BDDE(iLocal_155, 0,75f, -5f, 0f) };
		vVar24[3] = { unk_0x68E4ADDDDCD7BDDE(iLocal_155, -0,75f, -5f, 0f) };
		iVar50 = 0;
		while (iVar50 < vVar24.x)
		{
			iVar52 = iVar50 + 1;
			if (iVar52 == vVar24.x)
			{
				iVar52 = 0;
			}
			iVar51 = 0;
			while (iVar51 < vVar11.x)
			{
				iVar53 = iVar51 + 1;
				if (iVar53 == vVar11.x)
				{
					iVar53 = 0;
				}
				if (func_93(vVar24[iVar50], vVar24[iVar52], vVar11[iVar51], vVar11[iVar53], &(vVar37[iVar50])))
				{
					iVar0 = 1;
				}
				iVar51++;
			}
			iVar50++;
		}
	}
	return iVar0;
}

int func_93(vector3 vParam0, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11, var uParam12)
{
	fVar0 = vParam0.x;
	fVar1 = Param3;
	fVar2 = Param6;
	fVar3 = Param9;
	fVar4 = vParam0.y;
	fVar5 = Param3.f_1;
	fVar6 = Param6.f_1;
	fVar7 = Param9.f_1;
	fVar8 = (((fVar0 - fVar1) * (fVar6 - fVar7)) - ((fVar4 - fVar5) * (fVar2 - fVar3)));
	if (fVar8 == 0f)
	{
		return 0;
	}
	fVar9 = ((fVar0 * fVar5) - (fVar4 * fVar1));
	fVar10 = ((fVar2 * fVar7) - (fVar6 * fVar3));
	fVar11 = (((fVar9 * (fVar2 - fVar3)) - ((fVar0 - fVar1) * fVar10)) / fVar8);
	fVar12 = (((fVar9 * (fVar6 - fVar7)) - ((fVar4 - fVar5) * fVar10)) / fVar8);
	if (((fVar11 < func_95(fVar0, fVar1) || fVar11 > func_94(fVar0, fVar1)) || fVar11 < func_95(fVar2, fVar3)) || fVar11 > func_94(fVar2, fVar3))
	{
		return 0;
	}
	if (((fVar12 < func_95(fVar4, fVar5) || fVar12 > func_94(fVar4, fVar5)) || fVar12 < func_95(fVar6, fVar7)) || fVar12 > func_94(fVar6, fVar7))
	{
		return 0;
	}
	*uParam12 = fVar11;
	uParam12->f_1 = fVar12;
	uParam12->f_2 = vParam0.z;
	return 1;
}

float func_94(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_95(float fParam0, float fParam1)
{
	if (fParam0 < fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_96(var uParam0, int iParam1, bool bParam2)
{
	if (unk_0x9F4FE516EAACCFC5(uParam0->f_14))
	{
		unk_0x9A8DDC7C522F5BF5(uParam0->f_14, 0);
	}
	if (unk_0x9F4FE516EAACCFC5(uParam0->f_15))
	{
		unk_0x9A8DDC7C522F5BF5(uParam0->f_15, 0);
	}
	if (unk_0xC844350D5D58C99A(iParam1))
	{
		uParam0->f_14 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", false);
		unk_0x608A456FDD8A83D8(uParam0->f_14, unk_0x68E4ADDDDCD7BDDE(iParam1, *uParam0));
		if (uParam0->f_18 == 1)
		{
			unk_0xC5940439E4EB9A33(uParam0->f_14, iParam1, *uParam0, 1);
		}
		if (bParam2)
		{
			unk_0x5F3CBA6EB9341C90(uParam0->f_14, uParam0->f_3, 2);
		}
		else
		{
			vVar0 = { func_99(unk_0x68E4ADDDDCD7BDDE(iParam1, uParam0->f_3), unk_0x68E4ADDDDCD7BDDE(iParam1, *uParam0)) };
			vVar3 = { func_97(vVar0) };
			unk_0x5F3CBA6EB9341C90(uParam0->f_14, vVar3, 2);
		}
		unk_0x5818C8D5303DCCF8(uParam0->f_14, uParam0->f_12);
		unk_0xE3BB8E05FCEB3FBE(uParam0->f_14, true);
	}
}

Vector3 func_97(vector3 vParam0)
{
	vParam0.z = func_98(vParam0.z);
	vVar0.z = unk_0x5D8ABF6396A76564(-vParam0.x, vParam0.y);
	vVar0.x = unk_0x822909BFEF2FF1A9(vParam0.z);
	vVar0.y = 0f;
	return vVar0;
}

float func_98(float fParam0)
{
	if (fParam0 == 1f)
	{
		return 0,999999f;
	}
	if (fParam0 == -1f)
	{
		return -0,999999f;
	}
	return fParam0;
}

Vector3 func_99(vector3 vParam0, vector3 vParam3)
{
	vVar0 = { vParam0 - vParam3 };
	fVar6 = sqrt((((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) + (vVar0.z * vVar0.z)));
	vVar3.x = (vVar0.x / fVar6);
	vVar3.y = (vVar0.y / fVar6);
	vVar3.z = (vVar0.z / fVar6);
	return vVar3;
}

void func_100(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_107(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_76())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_106(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_107(0);
		unk_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_106(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_104(unk_0xD803B885F5E47A62())) && !func_102(unk_0xD803B885F5E47A62(), 0)) && !func_101()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_104(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_101()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 14);
}

bool func_102(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_103(-1, 0) == 8;
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

int func_103(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_25();
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

int func_104(int iParam0)
{
	if (func_102(iParam0, 0))
	{
		return 1;
	}
	if (func_105())
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

bool func_105()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_106(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_107(int iParam0)
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

void func_108()
{
	Global_19671 = 0;
	func_81();
}

int func_109(bool bParam0, bool bParam1, bool bParam2)
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

void func_110()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_141))
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_121))
		{
			unk_0x142CC44DB769B57E(&iLocal_121);
		}
		iVar0++;
	}
	if (unk_0xEB6A8945D1AC98A1(iLocal_142))
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_123))
		{
			unk_0x142CC44DB769B57E(&iLocal_123);
		}
		iVar0++;
	}
	if (unk_0xEB6A8945D1AC98A1(iLocal_143))
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_124))
		{
			unk_0x142CC44DB769B57E(&iLocal_124);
		}
		iVar0++;
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_140))
	{
		if (unk_0x1C0640BA9A7327B3() > iLocal_86 + 8000)
		{
			func_111(iLocal_140, "GENERIC_FRIGHTENED_HIGH", 3);
			iLocal_86 = unk_0x1C0640BA9A7327B3();
		}
	}
	if (iVar0 == 3)
	{
		bLocal_78 = true;
	}
}

void func_111(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_112(iParam2), 1);
}

int func_112(int iParam0)
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

void func_113()
{
	vVar1[0] = { 986,8661f, -113,7463f, 72,9153f };
	vVar1[1] = { 964,0147f, -144,0337f, 73,4875f };
	vVar1[2] = { 954,2817f, -137,429f, 73,4781f };
	vVar1[3] = { 976,5977f, -149,0529f, 73,2404f };
	if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_59, 10f, 10f, 10f, false, true, 0))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iLocal_150[iVar0] = unk_0x36F2404464202779(22, iLocal_371, vVar1[iVar0], 0f, 1, true);
			unk_0x262EF6C6306BEA6C(iLocal_150[iVar0], 2017895192, 999999, true, true);
			unk_0x6DF7BF67E86AAE86(iLocal_150[iVar0], iLocal_374);
			unk_0x6C3AE6E278DB3D0E(iLocal_150[iVar0], unk_0x16F2683693E537C9(), 0, 16);
			unk_0x4E885A246A9D983A(iLocal_150[iVar0], 42, true);
			iLocal_134[iVar0] = func_175(iLocal_150[iVar0], 1, 0);
			iVar0++;
		}
		iLocal_76 = 1;
	}
}

void func_114()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xEB6A8945D1AC98A1(iLocal_150[iVar0]))
		{
			if (unk_0xE4EDC4B0E92C078B(iLocal_134[iVar0]))
			{
				unk_0x142CC44DB769B57E(&(iLocal_134[iVar0]));
			}
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 4)
	{
		bLocal_77 = true;
	}
}

void func_115(var uParam0, int iParam1, int iParam2)
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
		if (func_116(uParam0->f_3))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (func_116(sVar0))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
}

bool func_116(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

int func_117()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_142))
	{
		return 1;
	}
	else if (unk_0xE3614539F8B5C807(iLocal_142))
	{
		return 1;
	}
	if (unk_0xEB6A8945D1AC98A1(iLocal_141))
	{
		return 1;
	}
	if (unk_0xEB6A8945D1AC98A1(iLocal_143))
	{
		return 1;
	}
	return 0;
}

int func_118()
{
	if (unk_0xDF1306B443CD3D15(iLocal_155, 0))
	{
		if (unk_0x5A91F08DF773C39D(iLocal_155, vLocal_59, 10f, 10f, 10f, false, true, 0))
		{
			bLocal_74 = true;
			return 1;
		}
	}
	return 0;
}

int func_119()
{
	if (unk_0xDF1306B443CD3D15(iLocal_155, 0))
	{
		if (iLocal_84 > 0)
		{
			func_120();
		}
		if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_155, 20f, 20f, 10f, 0, 1, 0))
		{
			if (unk_0xB87D13D0C064E9D1(iLocal_155, unk_0x16F2683693E537C9(), 1))
			{
				if (iLocal_438 == -1)
				{
					iLocal_438 = unk_0x1C0640BA9A7327B3();
				}
				iLocal_84++;
				unk_0xE910A68AA670B4AA(iLocal_155);
				if (timera() > 10000)
				{
					if (unk_0x09AC81E49EA267F7(0, 100) > 49)
					{
						func_164(&uLocal_176, cLocal_387, "RESNA_STRG", 4, 0, 0, 0);
					}
					else if (!unk_0xEB6A8945D1AC98A1(iLocal_142))
					{
						func_164(&uLocal_176, cLocal_387, "RESNA_FOFF", 4, 0, 0, 0);
					}
					settimera(0);
				}
			}
			if (iLocal_84 > 30)
			{
				return 1;
			}
		}
		else
		{
			iLocal_84 = 0;
		}
		if (unk_0x5B17F10380E80E5B(iLocal_155))
		{
			return 1;
		}
	}
	return 0;
}

void func_120()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_142))
	{
		if (unk_0x405E212DDE472467(iLocal_142, 0))
		{
			if (!unk_0x6B4464DA5794D055(iLocal_142))
			{
				if (!unk_0x440C646F2F11A2A1(iLocal_142, 324215364, 0) || (unk_0x440C646F2F11A2A1(iLocal_142, 324215364, 0) && unk_0xE4B99D229AA1A241(iLocal_142, -1878508229) == 0))
				{
					unk_0x262EF6C6306BEA6C(iLocal_142, 324215364, 68, true, true);
				}
				else
				{
					unk_0x5745EA6329A91E29(iLocal_142, 324215364, true);
				}
				unk_0xFFDDE8CC59EB6D40(iLocal_142, unk_0x16F2683693E537C9(), 0, 0f, 0f, 0f, 100f, 100, 1, -753768974);
			}
		}
	}
	if ((unk_0x1C0640BA9A7327B3() - iLocal_438) > 250)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_141))
		{
			if ((unk_0x405E212DDE472467(iLocal_141, 0) && unk_0xD1960163A3042274(iLocal_141, 2104565373) != 1) && unk_0xD1960163A3042274(iLocal_141, 2104565373) != 0)
			{
				unk_0xA3BF0AA5A2608191(iLocal_141);
				unk_0x262EF6C6306BEA6C(iLocal_141, 324215364, 68, true, true);
				unk_0xFFDDE8CC59EB6D40(iLocal_141, unk_0x16F2683693E537C9(), 0, 0f, 0f, 0f, 100f, 100, 0, -753768974);
			}
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_143))
	{
		if ((unk_0x405E212DDE472467(iLocal_143, 0) && unk_0xD1960163A3042274(iLocal_143, 2104565373) != 1) && unk_0xD1960163A3042274(iLocal_143, 2104565373) != 0)
		{
			unk_0xA3BF0AA5A2608191(iLocal_143);
			unk_0x262EF6C6306BEA6C(iLocal_143, 453432689, 68, true, true);
			unk_0xFFDDE8CC59EB6D40(iLocal_143, unk_0x16F2683693E537C9(), 0, 0f, 0f, 0f, 100f, 100, 0, -753768974);
			unk_0xFADC0A217229F6B5(iLocal_143, true);
		}
	}
	if (!iLocal_366)
	{
		iLocal_366 = 1;
	}
}

int func_121()
{
	if (unk_0xDF1306B443CD3D15(iLocal_155, 0))
	{
		if (unk_0x6EE94F60DA2A2273(iLocal_155) < 700f || unk_0xD96C5EC6FCB061BA(iLocal_155) < 700f)
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

int func_122()
{
	if (unk_0xDF1306B443CD3D15(iLocal_155, 0))
	{
		if (((unk_0x464B3D84B739AE72(iLocal_155, 0, 0) || unk_0x464B3D84B739AE72(iLocal_155, 1, 0)) || unk_0x464B3D84B739AE72(iLocal_155, 4, 0)) || unk_0x464B3D84B739AE72(iLocal_155, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_123(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	fVar2 = (fParam2 * fParam3);
	if (unk_0xE4EDC4B0E92C078B(iParam0))
	{
		if ((unk_0xC844350D5D58C99A(iParam1) && unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9())) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0xE2F1E99DD161A861(iParam1))
			{
				if (unk_0xDF1306B443CD3D15(unk_0x96A5FE5834B81CE7(iParam1), 0))
				{
					fVar1 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = round((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0xF412DD40DE84CE72(iParam0, 1);
						unk_0x7F010F50CE03A8AF(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0xF412DD40DE84CE72(iParam0, 0);
						unk_0x7F010F50CE03A8AF(iParam0, 255);
					}
				}
			}
			else if (unk_0xEC560E589DF8370E(iParam1))
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x940C1429253D3B1B(iParam1)))
				{
					fVar1 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = round(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0xF412DD40DE84CE72(iParam0, 1);
						unk_0x7F010F50CE03A8AF(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0xF412DD40DE84CE72(iParam0, 0);
						unk_0x7F010F50CE03A8AF(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_124()
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_155, 0))
		{
			func_125(&uLocal_341, iLocal_155, 0, 0, 1, 1, 1);
		}
		else
		{
			func_115(&uLocal_341, 0, 0);
		}
	}
	else
	{
		func_115(&uLocal_341, 0, 0);
	}
}

void func_125(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_126(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_126(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	uParam0->f_6 = 0;
	func_127(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_127(var uParam0, int iParam1, vector3 vParam2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
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
	if (func_116(iVar0))
	{
		func_152();
	}
	if (func_151(iParam1) && unk_0x4FC40AB0ECCE6E18(iParam1))
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
			if (func_146(uParam0, bParam7, bParam9, 0))
			{
				func_142(uParam0, iParam1, vParam2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_131(iVar0))
				{
					if ((unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0)) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						if ((iVar1 && !unk_0xFEBC1E4EC9E001F0()) && uParam8)
						{
							if (!func_116(iVar0))
							{
								func_62(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
								{
									func_130(1);
								}
							}
						}
					}
				}
			}
			else if (func_131(iVar0))
			{
				if (unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0))
				{
					if (((unk_0x0A059E0DB9253280(iParam1) && iVar1) && !unk_0xFEBC1E4EC9E001F0()) && uParam8)
					{
						if (!func_116(iVar0))
						{
							func_62(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
							{
								func_130(1);
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
				if (func_116(sParam5))
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
						func_115(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(6) == 3 || unk_0xA4FD7964FEE91ED8(6) == 4)
					{
						func_115(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(4) == 3 || unk_0xA4FD7964FEE91ED8(4) == 4)
					{
						func_115(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(5) == 3 || unk_0xA4FD7964FEE91ED8(5) == 4)
					{
						func_115(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(2) == 3 || unk_0xA4FD7964FEE91ED8(2) == 4)
					{
						func_115(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF3545351E9CBB11F() == 3 || unk_0xF3545351E9CBB11F() == 4)
				{
					func_115(uParam0, iVar0, 1);
				}
			}
			if (!func_146(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_129(uParam0))
				{
					func_128(uParam0);
				}
			}
		}
	}
	else
	{
		func_115(uParam0, iVar0, 0);
	}
}

void func_128(var uParam0)
{
	if (func_151(unk_0x16F2683693E537C9()))
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

int func_129(var uParam0)
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

int func_130(bool bParam0)
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

int func_131(char* sParam0)
{
	if (!func_132(1, 1, 0))
	{
		if ((!unk_0xEA6BC48857E0AC4C(sParam0) && func_116(sParam0)) || func_116("CMN_HINT"))
		{
			unk_0xA37A90C62806D848(1);
		}
		return 0;
	}
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (func_130(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_130(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_130(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_132(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_141(0))
	{
		return 0;
	}
	if (func_140())
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
	if ((func_139() || func_138(Global_4456448.f_232883)) || func_137())
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			iVar1 = func_136(unk_0x16F2683693E537C9(), 0);
			if (((unk_0x137240CA2BADB0D2(iVar0, iVar1) || (unk_0x134B62B726CEC8E6(iVar0) == 562680400 && iVar1 != -1)) || (unk_0x134B62B726CEC8E6(iVar0) == 1181327175 && iVar1 != -1)) || (((unk_0x134B62B726CEC8E6(iVar0) == -1693015116 && iVar1 == 0) && func_135(iVar0, 10)) && unk_0x0ECB5CA5140957AD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1686722)
	{
		return 0;
	}
	if (func_133(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	return 1;
}

int func_133(int iParam0)
{
	if (iParam0 != func_73())
	{
		if (func_134(iParam0, 1, 1))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && iParam0 == unk_0xD803B885F5E47A62()) && func_134(iParam0, 1, 0))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
	}
	return 0;
}

int func_134(int iParam0, bool bParam1, bool bParam2)
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

int func_135(int iParam0, int iParam1)
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

int func_136(int iParam0, int iParam1)
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

var func_137()
{
	return Global_2450632.f_17;
}

bool func_138(int iParam0)
{
	return iParam0 == 51;
}

var func_139()
{
	return Global_2450632.f_16;
}

bool func_140()
{
	return unk_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

int func_141(int iParam0)
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

void func_142(var uParam0, int iParam1, vector3 vParam2, int iParam5)
{
	if (Global_1319117 == 1)
	{
		return;
	}
	if (unk_0x437347B10A200C4B(iParam1, 0))
	{
		func_115(uParam0, 0, 0);
	}
	if (func_145(vParam2, 0f, 0f, 0f, 0))
	{
		if (unk_0xEC560E589DF8370E(iParam1))
		{
			iVar0 = unk_0x940C1429253D3B1B(iParam1);
			if (!unk_0x405E212DDE472467(iVar0, 0))
			{
				if (unk_0x34BFC6F0CB887BC2(iVar0))
				{
					if (!func_143())
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

bool func_143()
{
	return func_144(unk_0xD803B885F5E47A62());
}

int func_144(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(iParam0)) == -1667301416)
	{
		return 1;
	}
	return 0;
}

bool func_145(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_146(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_150(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_149(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_149(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_150(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_129(uParam0))
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
						if (!func_150(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1C0640BA9A7327B3();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_149(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_149(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_150(bParam1, bParam2, bParam3))
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
					if (!func_150(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_149(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_149(bParam1, bParam2, bParam3) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
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
				else if (!func_150(bParam1, bParam2, bParam3))
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
						if (func_148(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_147(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1) || func_147(bParam1, bParam2, bParam3))
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
					else if (func_148(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_129(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_132(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_152();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_147(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_132(bParam0, bParam1, bParam2))
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

int func_148(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_132(bParam0, bParam1, bParam2))
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

int func_149(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_132(bParam0, bParam1, bParam2))
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

int func_150(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_132(bParam0, bParam1, bParam2))
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

int func_151(int iParam0)
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

void func_152()
{
	unk_0x5D96D8530B3D0904(&Global_7357, 4);
}

void func_153()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_143) && unk_0xDF1306B443CD3D15(iLocal_155, 0))
	{
		if (!unk_0xC42A92762C58E1B9(iLocal_143, iLocal_155, 0))
		{
			if (!unk_0xB4ECF989E2C1DAC8(iLocal_155, sLocal_386, "IG_1_ALT1_EXIT_VAN_BURR", 3))
			{
				unk_0xF821F915BC24D246(iLocal_143, iLocal_155, 1);
			}
		}
	}
}

void func_154()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_142))
	{
		unk_0x6C3AE6E278DB3D0E(iLocal_142, unk_0x16F2683693E537C9(), 0, 16);
		unk_0xFADC0A217229F6B5(iLocal_142, true);
		func_164(&uLocal_176, cLocal_387, "RESNA_ATT", 4, 0, 0, 0);
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_141))
	{
		unk_0x262EF6C6306BEA6C(iLocal_141, 736523883, 68, true, true);
		unk_0x5745EA6329A91E29(iLocal_141, 736523883, true);
		unk_0x25C5402CC10F76CD(iLocal_141, true);
		unk_0x6C3AE6E278DB3D0E(iLocal_141, unk_0x16F2683693E537C9(), 0, 16);
		unk_0xFADC0A217229F6B5(iLocal_141, true);
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_143))
	{
		unk_0x262EF6C6306BEA6C(iLocal_143, 453432689, 68, true, true);
		unk_0x5745EA6329A91E29(iLocal_143, 453432689, true);
		unk_0x6C3AE6E278DB3D0E(iLocal_143, unk_0x16F2683693E537C9(), 0, 16);
		unk_0xFADC0A217229F6B5(iLocal_143, true);
	}
	func_155();
	unk_0xF82EA857DA10E0CD(&iLocal_159);
	iLocal_50 = 2;
}

void func_155()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_142))
	{
		if (!unk_0xE4EDC4B0E92C078B(iLocal_123))
		{
			iLocal_123 = func_175(iLocal_142, 1, 0);
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_141))
	{
		if (unk_0x12DE711B1C681E9E(iLocal_141, unk_0x16F2683693E537C9(), 100f, 100f, 20f, 0, 1, 0))
		{
			if (!unk_0xE4EDC4B0E92C078B(iLocal_121))
			{
				iLocal_121 = func_175(iLocal_141, 1, 0);
			}
		}
		else
		{
			unk_0x6DAD7906B73F064D(&iLocal_141);
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_143))
	{
		if (unk_0x12DE711B1C681E9E(iLocal_143, unk_0x16F2683693E537C9(), 100f, 100f, 20f, 0, 1, 0))
		{
			if (!unk_0xE4EDC4B0E92C078B(iLocal_124))
			{
				iLocal_124 = func_175(iLocal_143, 1, 0);
			}
		}
		else
		{
			unk_0x6DAD7906B73F064D(&iLocal_143);
		}
	}
}

void func_156()
{
	bVar0 = false;
	if (unk_0xDF1306B443CD3D15(iLocal_155, 0))
	{
		if (unk_0xB87D13D0C064E9D1(iLocal_155, unk_0x16F2683693E537C9(), 1))
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (unk_0xEB6A8945D1AC98A1(iLocal_141))
	{
		bVar0 = true;
	}
	else if (unk_0xB87D13D0C064E9D1(iLocal_141, unk_0x16F2683693E537C9(), 1))
	{
		bVar0 = true;
	}
	if (unk_0xEB6A8945D1AC98A1(iLocal_142))
	{
		bVar0 = true;
	}
	else if (unk_0xB87D13D0C064E9D1(iLocal_142, unk_0x16F2683693E537C9(), 1))
	{
		bVar0 = true;
	}
	if (unk_0xEB6A8945D1AC98A1(iLocal_143))
	{
		bVar0 = true;
	}
	else if (unk_0xB87D13D0C064E9D1(iLocal_143, unk_0x16F2683693E537C9(), 1))
	{
		bVar0 = true;
	}
	if (unk_0xEB6A8945D1AC98A1(iLocal_140))
	{
		bVar0 = true;
	}
	else if (unk_0xB87D13D0C064E9D1(iLocal_140, unk_0x16F2683693E537C9(), 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_162();
		if (iLocal_365)
		{
			if (unk_0x69DF961355195C3C(iLocal_107))
			{
				if (unk_0xA45992A6CE82FB43(iLocal_107) > 0,735f)
				{
					func_161();
				}
				else if (unk_0xA45992A6CE82FB43(iLocal_107) > 0,4f)
				{
					func_160();
				}
			}
			else if (!unk_0xEB6A8945D1AC98A1(iLocal_140))
			{
				unk_0x8BE3D040D15AEA1D(iLocal_140, -1);
			}
			if (iLocal_82)
			{
				unk_0x1E9649458B15960F(iLocal_155, false);
			}
			unk_0x142CC44DB769B57E(&iLocal_120);
			if (!unk_0xE4EDC4B0E92C078B(iLocal_123))
			{
				iLocal_123 = func_175(iLocal_142, 1, 0);
			}
			unk_0x51B096AAC60548C1(0,3f);
			if (!func_208())
			{
				func_166(1);
			}
			func_158();
			func_154();
		}
		else
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_142))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_155, 0))
				{
					unk_0x89258193691A7600(iLocal_142, iLocal_155, unk_0x16F2683693E537C9(), 8, 40f, 786469, -1f, -1f, 1);
				}
				else
				{
					unk_0xF3268524E9BE6D6E(iLocal_142, unk_0x16F2683693E537C9(), 150f, -1, 0, 0);
					unk_0xFADC0A217229F6B5(iLocal_142, true);
				}
			}
			func_157();
		}
	}
}

void func_157()
{
	if (unk_0x69DF961355195C3C(iLocal_106))
	{
		unk_0xB46854F2D1C7DFA9(iLocal_106);
	}
	if (unk_0x69DF961355195C3C(iLocal_107))
	{
		unk_0xB46854F2D1C7DFA9(iLocal_107);
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_140))
	{
		unk_0x00A6D36F507FD6EA(iLocal_140, 1);
		if (!unk_0xB4ECF989E2C1DAC8(iLocal_140, sLocal_386, "IG_1_ALT1_GIRL_IN_VAN_LOOP", 3))
		{
			unk_0xF3268524E9BE6D6E(iLocal_140, unk_0x16F2683693E537C9(), 150f, -1, 0, 0);
			unk_0xFADC0A217229F6B5(iLocal_140, true);
		}
	}
	func_154();
	func_255();
}

void func_158()
{
	Global_19671 = 0;
	func_159();
}

void func_159()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_160()
{
	if (unk_0xDF1306B443CD3D15(iLocal_155, 0) && !unk_0xEB6A8945D1AC98A1(iLocal_140))
	{
		unk_0x9F528B1B53FBC5D9(iLocal_140, iLocal_155, unk_0xF653B9B22DA806A9(iLocal_155, sLocal_175), 0,421191f, -1,99042f, 0,20134f, -5,08056E-06f, -6,5249E-06f, 174,612f, 1, 0, 0, 0, 2, 1);
		unk_0xA47B46945FF6DE74(iLocal_140, unk_0x68F4C0EC296D3901(iLocal_155, false), 1, false, 0, 1);
		unk_0x327AAEE25F323797(iLocal_140);
		unk_0xC6EB89C59F2AF6B8(iLocal_140, sLocal_386, "IG_1_ALT1_GIRL_IN_VAN_LOOP", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
		unk_0xFADC0A217229F6B5(iLocal_140, true);
		if (!unk_0xE4EDC4B0E92C078B(iLocal_123))
		{
			iLocal_123 = func_175(iLocal_142, 1, 0);
		}
		if (unk_0xDF1306B443CD3D15(iLocal_155, 0))
		{
			unk_0x05CA0E7946B27A19(iLocal_155, 1);
		}
		iLocal_365 = 0;
	}
}

void func_161()
{
	if (((unk_0xDF1306B443CD3D15(iLocal_155, 0) && !unk_0xEB6A8945D1AC98A1(iLocal_140)) && !unk_0xEB6A8945D1AC98A1(iLocal_141)) && !unk_0xEB6A8945D1AC98A1(iLocal_143))
	{
		unk_0xF821F915BC24D246(iLocal_143, iLocal_155, 2);
		unk_0xF821F915BC24D246(iLocal_141, iLocal_155, 1);
		unk_0x9F528B1B53FBC5D9(iLocal_140, iLocal_155, unk_0xF653B9B22DA806A9(iLocal_155, sLocal_175), 0,421191f, -1,99042f, 0,20134f, -5,08056E-06f, -6,5249E-06f, 174,612f, 1, 0, 0, 0, 2, 1);
		unk_0xA47B46945FF6DE74(iLocal_140, unk_0x68F4C0EC296D3901(iLocal_155, false), 1, false, 0, 1);
		unk_0x327AAEE25F323797(iLocal_140);
		unk_0xC6EB89C59F2AF6B8(iLocal_140, sLocal_386, "IG_1_ALT1_GIRL_IN_VAN_LOOP", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
		unk_0xFADC0A217229F6B5(iLocal_140, true);
		if (!unk_0xE4EDC4B0E92C078B(iLocal_123))
		{
			iLocal_123 = func_175(iLocal_142, 1, 0);
		}
		if (unk_0xDF1306B443CD3D15(iLocal_155, 0))
		{
			unk_0x05CA0E7946B27A19(iLocal_155, 0);
		}
		unk_0x9501364A300048C6();
		iLocal_365 = 0;
	}
}

void func_162()
{
	if (unk_0x69DF961355195C3C(iLocal_118))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_141))
		{
			unk_0xA3BF0AA5A2608191(iLocal_141);
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_143))
		{
			unk_0xA3BF0AA5A2608191(iLocal_143);
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_140))
		{
			unk_0xA3BF0AA5A2608191(iLocal_140);
		}
		unk_0x1BF8B16C32704027(iLocal_155, -4f, 1);
	}
}

void func_163()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_140))
	{
		if (unk_0xB87D13D0C064E9D1(iLocal_140, unk_0x16F2683693E537C9(), 1) || unk_0x4E861BC5B1EDA7BD(iLocal_140))
		{
			if (unk_0x69DF961355195C3C(iLocal_118))
			{
				func_162();
			}
			func_157();
		}
	}
}

bool func_164(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_82(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_68(sParam2, iParam3, 0);
}

int func_165()
{
	func_33();
	return Global_111638.f_2358.f_539.f_4321;
}

int func_166(int iParam0)
{
	if (func_169())
	{
		Global_111628 = 1;
		Global_111625 = unk_0x1C0640BA9A7327B3();
		if (func_27(Global_111627))
		{
			func_167(0);
		}
		unk_0x974531784BE14213(1, "RE_TITLE");
		if (iParam0 && func_27(Global_111627))
		{
			unk_0x4A51D2E4732BD556();
		}
		return 1;
	}
	return 0;
}

void func_167(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_62(func_168(iParam0), -1);
					Global_111638.f_24990.f_2++;
					unk_0x5D96D8530B3D0904(&Global_111634, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xEAE0D21A50E6C7F4(Global_111634, 1))
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_62(func_168(iParam0), -1);
					Global_111638.f_24990.f_3++;
					unk_0x5D96D8530B3D0904(&Global_111634, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xEAE0D21A50E6C7F4(Global_111634, 2))
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_62(func_168(iParam0), -1);
					Global_111638.f_24990.f_4++;
					unk_0x5D96D8530B3D0904(&Global_111634, 2);
				}
			}
			break;
	}
}

char* func_168(int iParam0)
{
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_169()
{
	switch (func_170(&Global_30827, 0, 5, 0, unk_0x0D0A574C76D769AC()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_170(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96222.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_174(0))
		{
			return 0;
		}
		Global_41395++;
		*uParam0 = Global_41395;
		unk_0x62DE699599F0417E(unk_0xA30EC016B12C03E4(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x4C7B0415764B64BA(8);
		}
		Global_41431 = iParam2;
		Global_41393 = *uParam0;
		Global_41394 = iParam4;
		Global_41392 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_41392 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41392)
			{
				if (Global_41398[iVar0] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41393 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_172(iParam2))
		{
			return 0;
		}
		if (Global_41392 == 8)
		{
			return 0;
		}
		Global_41395++;
		*uParam0 = Global_41395;
		Global_41398[Global_41392] = Global_41395;
		Global_41398[Global_41392].f_1 = iParam1;
		Global_41398[Global_41392].f_2 = iParam2;
		Global_41398[Global_41392].f_3 = 0;
		Global_41392++;
		if (iParam4 != 0)
		{
			func_171(uParam0, iParam4);
		}
	}
	return 2;
}

void func_171(var uParam0, int iParam1)
{
	if (Global_41392 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41392)
	{
		if (Global_41398[iVar0] == *uParam0)
		{
			Global_41398[iVar0].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_172(int iParam0)
{
	return func_173(iParam0, Global_41431);
}

int func_173(int iParam0, int iParam1)
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

int func_174(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_172(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_175(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_54(iParam0, bParam1, 145);
}

void func_176()
{
	if (iLocal_361)
	{
	}
	else
	{
		iLocal_361 = 1;
	}
}

int func_177()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_44) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_188())
		{
			return 0;
		}
	}
	if (func_184())
	{
		return 1;
	}
	if (func_178(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_178(float fParam0, bool bParam1)
{
	iVar33 = -1;
	fVar34 = fParam0;
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (func_35(func_165()))
		{
			iVar36 = func_32();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32], 2) && !unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32], 3))
				{
					func_179(iVar32, &Var0);
					fVar35 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), Var0.f_6, true);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_179(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_180(uParam1, "Abigail1", func_182(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 1:
			func_180(uParam1, "Abigail2", func_182(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 2:
			func_180(uParam1, "Barry1", func_182(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 3:
			func_180(uParam1, "Barry2", func_182(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_181(iParam0), 1, 1);
			break;
		
		case 4:
			func_180(uParam1, "Barry3", func_182(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 5:
			func_180(uParam1, "Barry3A", func_182(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 6:
			func_180(uParam1, "Barry3C", func_182(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 7:
			func_180(uParam1, "Barry4", func_182(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_181(iParam0), 0, 0);
			break;
		
		case 8:
			func_180(uParam1, "Dreyfuss1", func_182(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 9:
			func_180(uParam1, "Epsilon1", func_182(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 10:
			func_180(uParam1, "Epsilon2", func_182(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 11:
			func_180(uParam1, "Epsilon3", func_182(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 12:
			func_180(uParam1, "Epsilon4", func_182(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 13:
			func_180(uParam1, "Epsilon5", func_182(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 14:
			func_180(uParam1, "Epsilon6", func_182(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 15:
			func_180(uParam1, "Epsilon7", func_182(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 16:
			func_180(uParam1, "Epsilon8", func_182(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 17:
			func_180(uParam1, "Extreme1", func_182(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 18:
			func_180(uParam1, "Extreme2", func_182(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 19:
			func_180(uParam1, "Extreme3", func_182(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 20:
			func_180(uParam1, "Extreme4", func_182(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 21:
			func_180(uParam1, "Fanatic1", func_182(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_181(iParam0), 1, 0);
			break;
		
		case 22:
			func_180(uParam1, "Fanatic2", func_182(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_181(iParam0), 1, 0);
			break;
		
		case 23:
			func_180(uParam1, "Fanatic3", func_182(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_181(iParam0), 0, 1);
			break;
		
		case 24:
			func_180(uParam1, "Hao1", func_182(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_181(iParam0), 0, 1);
			break;
		
		case 25:
			func_180(uParam1, "Hunting1", func_182(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 26:
			func_180(uParam1, "Hunting2", func_182(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 27:
			func_180(uParam1, "Josh1", func_182(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 28:
			func_180(uParam1, "Josh2", func_182(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_181(iParam0), 1, 1);
			break;
		
		case 29:
			func_180(uParam1, "Josh3", func_182(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_181(iParam0), 1, 1);
			break;
		
		case 30:
			func_180(uParam1, "Josh4", func_182(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 31:
			func_180(uParam1, "Maude1", func_182(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 32:
			func_180(uParam1, "Minute1", func_182(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 33:
			func_180(uParam1, "Minute2", func_182(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 34:
			func_180(uParam1, "Minute3", func_182(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 35:
			func_180(uParam1, "MrsPhilips1", func_182(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 36:
			func_180(uParam1, "MrsPhilips2", func_182(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 37:
			func_180(uParam1, "Nigel1", func_182(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 38:
			func_180(uParam1, "Nigel1A", func_182(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_181(iParam0), 1, 1);
			break;
		
		case 39:
			func_180(uParam1, "Nigel1B", func_182(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_181(iParam0), 1, 1);
			break;
		
		case 40:
			func_180(uParam1, "Nigel1C", func_182(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_181(iParam0), 1, 1);
			break;
		
		case 41:
			func_180(uParam1, "Nigel1D", func_182(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_181(iParam0), 1, 1);
			break;
		
		case 42:
			func_180(uParam1, "Nigel2", func_182(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_181(iParam0), 1, 1);
			break;
		
		case 43:
			func_180(uParam1, "Nigel3", func_182(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_181(iParam0), 1, 1);
			break;
		
		case 44:
			func_180(uParam1, "Omega1", func_182(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 45:
			func_180(uParam1, "Omega2", func_182(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 46:
			func_180(uParam1, "Paparazzo1", func_182(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 47:
			func_180(uParam1, "Paparazzo2", func_182(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 48:
			func_180(uParam1, "Paparazzo3", func_182(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 49:
			func_180(uParam1, "Paparazzo3A", func_182(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 50:
			func_180(uParam1, "Paparazzo3B", func_182(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 51:
			func_180(uParam1, "Paparazzo4", func_182(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 52:
			func_180(uParam1, "Rampage1", func_182(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 54:
			func_180(uParam1, "Rampage3", func_182(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 55:
			func_180(uParam1, "Rampage4", func_182(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 56:
			func_180(uParam1, "Rampage5", func_182(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 53:
			func_180(uParam1, "Rampage2", func_182(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 57:
			func_180(uParam1, "TheLastOne", func_182(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 58:
			func_180(uParam1, "Tonya1", func_182(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 59:
			func_180(uParam1, "Tonya2", func_182(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 60:
			func_180(uParam1, "Tonya3", func_182(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 61:
			func_180(uParam1, "Tonya4", func_182(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 62:
			func_180(uParam1, "Tonya5", func_182(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_180(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_181(int iParam0)
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

struct<2> func_182(int iParam0)
{
	StringCopy(&Var0, "", 8);
	cVar2 = { func_183(iParam0) };
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

struct<2> func_183(int iParam0)
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

int func_184()
{
	if (func_187() && !func_188())
	{
		return 1;
	}
	if (func_186() && func_185())
	{
		return 1;
	}
	return 0;
}

bool func_185()
{
	return Global_111356 > 0;
}

int func_186()
{
	if (Global_95666 != -1)
	{
		return 1;
	}
	return 0;
}

int func_187()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666].f_15, 20);
	}
	return 0;
}

int func_188()
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

int func_189()
{
	func_195(39, 1);
	func_195(40, 1);
	func_195(41, 1);
	func_195(42, 1);
	func_195(43, 1);
	func_195(44, 1);
	fLocal_55 = 321f;
	unk_0xC05DBA7D4F88D5E5(iLocal_372, true);
	unk_0xC05DBA7D4F88D5E5(iLocal_373, true);
	unk_0xC05DBA7D4F88D5E5(iLocal_371, true);
	unk_0xAB8E2DDC7AF955E0(iLocal_369, true);
	unk_0x523BCC9DC80CD82F(iLocal_373);
	unk_0x523BCC9DC80CD82F(iLocal_371);
	unk_0x523BCC9DC80CD82F(iLocal_372);
	unk_0x523BCC9DC80CD82F(iLocal_369);
	unk_0x3F423BF5B8125A50(sLocal_386);
	unk_0x523BCC9DC80CD82F(186956100);
	if (((((unk_0xB87F6CF6E5628C67(iLocal_373) && unk_0xB87F6CF6E5628C67(iLocal_371)) && unk_0xB87F6CF6E5628C67(iLocal_372)) && unk_0xB87F6CF6E5628C67(iLocal_369)) && unk_0xB87F6CF6E5628C67(186956100)) && unk_0xB4AE0788C1587752(sLocal_386))
	{
		func_194();
		func_193();
		func_192();
		func_191();
		unk_0x7D0D8317DC09FF68(111, vLocal_52, -1f);
		iLocal_162 = unk_0x7D6CA5F52B3748BF(vLocal_59 - Vector(50f, 50f, 50f), vLocal_59 + Vector(50f, 50f, 50f), 0, 1, 1, 1);
		switch (func_165())
		{
			case 0:
				sLocal_174 = "MICHAEL";
				break;
			
			case 1:
				sLocal_174 = "FRANKLIN";
				break;
			
			case 2:
				sLocal_174 = "TREVOR";
				break;
		}
		func_190(&uLocal_176, 0, unk_0x16F2683693E537C9(), sLocal_174, 0, 1);
		vLocal_165 = { -3057,362f, 441,8271f, 6,151212f };
		vLocal_168 = { -0,34992f, -0,199749f, -98,79861f };
		fLocal_359 = 116f;
		vLocal_56 = { -3053,721f, 440,9221f, 5,3566f };
		iLocal_164 = unk_0x7707E48765093646(186956100, unk_0x68F4C0EC296D3901(iLocal_155, false), 1, true, false);
		unk_0xC023D1C4BF532815(iLocal_164, unk_0x835730A2D89F6093(iLocal_155, 2), 2, 1);
		unk_0x1E9649458B15960F(iLocal_164, true);
		unk_0x20641932E5104B25(iLocal_164, false, 0);
		return 1;
	}
	return 0;
}

void func_190(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_191()
{
	unk_0x25C5402CC10F76CD(iLocal_141, false);
	unk_0x7980D72D61BEF4D5(iLocal_155, true);
	unk_0x71EDC33E5A423750(iLocal_155, 3);
	unk_0x6DF7BF67E86AAE86(iLocal_142, iLocal_374);
	unk_0x6DF7BF67E86AAE86(iLocal_143, iLocal_374);
	unk_0x6DF7BF67E86AAE86(iLocal_141, iLocal_374);
	unk_0x11AD11297DC58CC7(iLocal_143, true);
	unk_0x11AD11297DC58CC7(iLocal_142, true);
	unk_0x11AD11297DC58CC7(iLocal_141, true);
	unk_0x4E885A246A9D983A(iLocal_142, 42, true);
	unk_0x4E885A246A9D983A(iLocal_141, 42, true);
	unk_0x4E885A246A9D983A(iLocal_143, 42, true);
	unk_0xAFF39FB306F8E232(iLocal_143, 17, false);
	unk_0xAFF39FB306F8E232(iLocal_143, 1, false);
	unk_0xAFF39FB306F8E232(iLocal_143, 13, true);
	unk_0xAFF39FB306F8E232(iLocal_143, 50, true);
	unk_0xAFF39FB306F8E232(iLocal_141, 2, true);
	unk_0xAFF39FB306F8E232(iLocal_142, 17, false);
	unk_0xAFF39FB306F8E232(iLocal_142, 1, false);
	unk_0xAFF39FB306F8E232(iLocal_142, 13, true);
	unk_0xAFF39FB306F8E232(iLocal_142, 50, true);
	unk_0xAFF39FB306F8E232(iLocal_142, 6, false);
	unk_0xAFF39FB306F8E232(iLocal_141, 2, true);
	unk_0xAFF39FB306F8E232(iLocal_141, 17, false);
	unk_0xAFF39FB306F8E232(iLocal_141, 1, false);
	unk_0xAFF39FB306F8E232(iLocal_141, 13, true);
	unk_0xAFF39FB306F8E232(iLocal_141, 50, true);
	unk_0xAFF39FB306F8E232(iLocal_141, 2, true);
	unk_0x3CC33E4E9CE523F4(iLocal_143, 2);
	unk_0x3CC33E4E9CE523F4(iLocal_142, 2);
	unk_0x3CC33E4E9CE523F4(iLocal_141, 2);
	unk_0x00A6D36F507FD6EA(iLocal_143, 0);
	unk_0x00A6D36F507FD6EA(iLocal_142, 0);
	unk_0x00A6D36F507FD6EA(iLocal_141, 0);
	unk_0x262EF6C6306BEA6C(iLocal_143, 453432689, 68, false, true);
	unk_0x262EF6C6306BEA6C(iLocal_142, 2017895192, 68, false, true);
	unk_0x262EF6C6306BEA6C(iLocal_141, 324215364, 68, false, true);
	unk_0x52D1A852D4AB1A0B(iLocal_143, 0);
	unk_0x52D1A852D4AB1A0B(iLocal_142, 0);
	unk_0x52D1A852D4AB1A0B(iLocal_141, 0);
	unk_0x4E885A246A9D983A(iLocal_142, 115, true);
	unk_0x4E885A246A9D983A(iLocal_141, 115, true);
	unk_0x4E885A246A9D983A(iLocal_143, 115, true);
	func_190(&uLocal_176, 2, iLocal_142, "LostKidnapper", 0, 1);
}

void func_192()
{
	iVar0 = 500;
	if (unk_0xDF1306B443CD3D15(iLocal_155, 0))
	{
		iLocal_140 = unk_0x36F2404464202779(5, iLocal_373, unk_0x68E4ADDDDCD7BDDE(iLocal_155, vLocal_353), fLocal_55, 1, true);
	}
	else
	{
		iLocal_140 = unk_0x36F2404464202779(5, iLocal_373, unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), vLocal_353), fLocal_55, 1, true);
	}
	unk_0x4F39CC3882DD074E(iLocal_140, "LostKidnapGirl");
	unk_0x25C5402CC10F76CD(iLocal_140, false);
	unk_0x00A6D36F507FD6EA(iLocal_140, 0);
	unk_0xD458AC1C1D29C3B4(iLocal_140, iVar0, 0);
	unk_0x093A734E5AEA758F(iLocal_140, iVar0);
	unk_0x11AD11297DC58CC7(iLocal_140, true);
	unk_0x6DF7BF67E86AAE86(iLocal_140, iLocal_375);
	func_190(&uLocal_176, 1, iLocal_140, "LostKidnapGirl", 0, 1);
}

void func_193()
{
	vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false) };
	if (vVar0.x > vLocal_52.x)
	{
		iLocal_155 = unk_0x122AAB0B1D6F55AD(iLocal_369, -1116,946f, 560,8027f, 101,3588f, 116,0592f, true, true, false);
		vLocal_62 = { -1247,233f, 515,3996f, 94,1352f };
	}
	else
	{
		iLocal_155 = unk_0x122AAB0B1D6F55AD(iLocal_369, vLocal_52, 305f, true, true, false);
		vLocal_62 = { -852,9832f, 441,7806f, 86,0437f };
	}
	unk_0x2F625BED8BF7F26A(iLocal_155);
	unk_0x56FDC9ADE35F7DB0(iLocal_155, true, true, 0);
	iLocal_142 = unk_0x852A19533F896693(iLocal_155, 22, iLocal_372, -1, 1, true);
	unk_0xAFF39FB306F8E232(iLocal_142, 2, true);
	unk_0x262EF6C6306BEA6C(iLocal_142, 2017895192, 68, true, true);
	unk_0x5745EA6329A91E29(iLocal_142, 2017895192, true);
	iLocal_143 = unk_0x36F2404464202779(22, iLocal_372, unk_0x68E4ADDDDCD7BDDE(iLocal_155, vLocal_356), fLocal_55, 1, true);
	iLocal_141 = unk_0x36F2404464202779(22, iLocal_371, unk_0x68E4ADDDDCD7BDDE(iLocal_155, vLocal_356), fLocal_55, 1, true);
	unk_0x1E9649458B15960F(iLocal_155, true);
	iLocal_82 = 1;
	unk_0x29CD9554726C7577(iLocal_141, 25);
	unk_0xAA714ADDDC372E0F(iLocal_141, -753768974);
	unk_0x29CD9554726C7577(iLocal_143, 35);
	unk_0xAA714ADDDC372E0F(iLocal_141, 1566631136);
	unk_0x298903DD96203C2C(iLocal_142, 12);
	unk_0x298903DD96203C2C(iLocal_143, 10);
	unk_0x298903DD96203C2C(iLocal_141, 15);
	unk_0xA22F71BBC8173C39(iLocal_155, false);
	unk_0x71199B01895C6202(iLocal_372);
	unk_0x71199B01895C6202(iLocal_371);
	unk_0x71199B01895C6202(iLocal_369);
	unk_0x9A8BCD43DBDDCDCA(iLocal_155, false, 0);
	unk_0xF8CF67C6E39C23A9(iLocal_155, 2f);
}

void func_194()
{
	unk_0xF63400DBE3303D26("re_snatched badGuys", &iLocal_374);
	unk_0xF63400DBE3303D26("re_snatched pedVictim", &iLocal_375);
	unk_0x0E2400AB9174FA81(5, iLocal_374, 1862763509);
	unk_0x0E2400AB9174FA81(2, iLocal_374, iLocal_375);
	unk_0x0E2400AB9174FA81(0, iLocal_375, 1862763509);
}

void func_195(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_202(iParam0, 2, 1))
		{
			func_201(iParam0, 2, 1);
		}
	}
	else if (func_202(iParam0, 2, 1))
	{
		func_196(iParam0, 2, 1);
	}
}

void func_196(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x0674E58A79778E99(&(Global_98796.f_1357[iParam0]), iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_22() == 0)
		{
			iVar0 = func_199(func_200(iParam0), -1, 0);
			unk_0x0674E58A79778E99(&iVar0, iParam1);
			func_197(func_200(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

void func_197(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_198(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_198(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_25();
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

int func_199(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_198(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_200(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 9977;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		case 52:
			return 8912;
			break;
		
		case 50:
			return 8265;
			break;
		
		case 51:
			return 8267;
			break;
		
		default:
			break;
	}
	return 11511;
}

void func_201(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_98796.f_1357[iParam0]), iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_22() == 0)
		{
			iVar0 = func_199(func_200(iParam0), -1, 0);
			unk_0x5D96D8530B3D0904(&iVar0, iParam1);
			func_197(func_200(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

int func_202(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_98796.f_1357[iParam0], iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_22() == 0)
		{
			return unk_0xEAE0D21A50E6C7F4(func_199(func_200(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_203()
{
	if (((unk_0xC844350D5D58C99A(iLocal_141) && unk_0xC844350D5D58C99A(iLocal_143)) && unk_0xC844350D5D58C99A(iLocal_140)) && unk_0xC844350D5D58C99A(iLocal_155))
	{
		unk_0x3F423BF5B8125A50("random@kidnap_girl");
		if (unk_0xB4AE0788C1587752("random@kidnap_girl"))
		{
			fVar0 = 1,25f;
			switch (iLocal_439)
			{
				case 0:
					if (((unk_0xDF1306B443CD3D15(iLocal_155, 0) && !unk_0xEB6A8945D1AC98A1(iLocal_140)) && !unk_0xEB6A8945D1AC98A1(iLocal_141)) && !unk_0xEB6A8945D1AC98A1(iLocal_143))
					{
						if (!unk_0x69DF961355195C3C(iLocal_117))
						{
							vLocal_110 = { 0f, 0f, 0f };
							vLocal_113 = { 0f, 0f, 0f };
							iLocal_117 = unk_0xE9744DB7B8CA6965(vLocal_110, vLocal_113, 2);
							unk_0x6BE2EAE992FD7C26(iLocal_117, iLocal_155, unk_0xF653B9B22DA806A9(iLocal_155, sLocal_175));
							unk_0xC90224D9E95E5E3A(iLocal_117, true);
							unk_0x83CBE93AD851E045(iLocal_117, vLocal_110, vLocal_113, 2);
							unk_0x915804B434753CBD(iLocal_140, iLocal_117, sLocal_386, "IG_1_GIRL_ON_PHONE_LOOP", 1000f, -1000f, 4, 0, 1148846080, 0);
							unk_0x915804B434753CBD(iLocal_141, iLocal_117, sLocal_386, "IG_1_GUY1_IN_VAN_LOOP", 1000f, -1000f, 4, 0, 1148846080, 0);
							unk_0x915804B434753CBD(iLocal_143, iLocal_117, sLocal_386, "IG_1_GUY2_IN_VAN_LOOP", 1000f, -1000f, 4, 0, 1148846080, 0);
							unk_0x46CB381A452EF99D(iLocal_140, 1);
						}
						else
						{
							func_156();
							func_163();
							if (func_204())
							{
								func_157();
							}
						}
					}
					break;
				
				case 1:
					if ((!unk_0xEB6A8945D1AC98A1(iLocal_140) && !unk_0xEB6A8945D1AC98A1(iLocal_141)) && !unk_0xEB6A8945D1AC98A1(iLocal_143))
					{
						if (unk_0x69DF961355195C3C(iLocal_117))
						{
							unk_0xA3BF0AA5A2608191(iLocal_141);
							unk_0xA3BF0AA5A2608191(iLocal_140);
							unk_0xA3BF0AA5A2608191(iLocal_143);
						}
						if (!unk_0x69DF961355195C3C(iLocal_118))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_155, 0))
							{
								vLocal_110 = { 0f, 0f, 0f };
								vLocal_113 = { unk_0x835730A2D89F6093(iLocal_155, 2) };
								iLocal_118 = unk_0xE9744DB7B8CA6965(unk_0x68F4C0EC296D3901(iLocal_155, false), vLocal_113.x, vLocal_113.y, unk_0xD9522BA9E27E1349(iLocal_155), 2);
								if (iLocal_82)
								{
									unk_0x1E9649458B15960F(iLocal_155, false);
									iLocal_82 = 0;
								}
								unk_0x5E4E98C6D98C9C57(iLocal_118, fVar0);
								unk_0x915804B434753CBD(iLocal_140, iLocal_118, sLocal_386, "IG_1_GIRL_DRAG_INTO_VAN", 1000f, -4f, 5, 0, 1148846080, 0);
								unk_0x915804B434753CBD(iLocal_141, iLocal_118, sLocal_386, "IG_1_GUY1_DRAG_INTO_VAN", 1000f, -4f, 5, 0, 1148846080, 0);
								unk_0x915804B434753CBD(iLocal_143, iLocal_118, sLocal_386, "IG_1_GUY2_DRAG_INTO_VAN", 1000f, -4f, 5, 0, 1148846080, 0);
								unk_0xE14EC663EED44AD5(iLocal_155, iLocal_118, "DRAG_INTO_VAN_BURR", sLocal_386, 1000f, -4f, 1, 1148846080);
							}
						}
						else
						{
							if (!iLocal_80)
							{
								if ((((unk_0x69DF961355195C3C(iLocal_118) && vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), unk_0x68F4C0EC296D3901(iLocal_155, false)) < 30f) && !func_90()) && unk_0xA45992A6CE82FB43(iLocal_118) > 0,1f) && unk_0xA45992A6CE82FB43(iLocal_118) < 0,4f)
								{
									if (func_164(&uLocal_176, cLocal_387, "RESNA_HELP", 4, func_205(), 0, 0))
									{
										iLocal_80 = 1;
									}
								}
							}
							if (unk_0xA45992A6CE82FB43(iLocal_118) > 0,502f)
							{
								unk_0xE121AE1BBF90E186(iLocal_140, true);
								unk_0xE121AE1BBF90E186(iLocal_141, true);
								unk_0xE121AE1BBF90E186(iLocal_143, true);
								if (unk_0xA45992A6CE82FB43(iLocal_118) < 0,732f)
								{
									if (!unk_0xD59B17D2DFF98E26(iLocal_155))
									{
										unk_0x46CB381A452EF99D(iLocal_141, 0);
										unk_0x46CB381A452EF99D(iLocal_143, 0);
										if (!unk_0xEB6A8945D1AC98A1(iLocal_142) && unk_0xDF1306B443CD3D15(iLocal_155, 0))
										{
											unk_0xD1F0F33C375B8446(iLocal_142, iLocal_155, 30, 6000);
										}
										unk_0xE121AE1BBF90E186(iLocal_140, true);
										unk_0x4E885A246A9D983A(iLocal_140, 106, true);
										unk_0x4E885A246A9D983A(iLocal_141, 106, true);
										unk_0x4E885A246A9D983A(iLocal_143, 106, true);
									}
									if (unk_0x437347B10A200C4B(iLocal_155, 0))
									{
										func_162();
										if (unk_0xC844350D5D58C99A(iLocal_140))
										{
											unk_0xD458AC1C1D29C3B4(iLocal_140, 0, 0);
										}
										if (unk_0xC844350D5D58C99A(iLocal_143))
										{
											unk_0xD458AC1C1D29C3B4(iLocal_143, 0, 0);
										}
										if (unk_0xC844350D5D58C99A(iLocal_141))
										{
											unk_0xD458AC1C1D29C3B4(iLocal_141, 0, 0);
										}
										if (unk_0xC844350D5D58C99A(iLocal_142))
										{
											unk_0xD458AC1C1D29C3B4(iLocal_142, 0, 0);
										}
										unk_0x15AFB6CBDE990FB6(iLocal_155, 1, false);
									}
								}
								else
								{
									unk_0x46CB381A452EF99D(iLocal_141, 1);
									unk_0x46CB381A452EF99D(iLocal_143, 1);
									unk_0x4E885A246A9D983A(iLocal_140, 106, false);
									unk_0x4E885A246A9D983A(iLocal_141, 106, false);
									unk_0x4E885A246A9D983A(iLocal_143, 106, false);
									unk_0xE121AE1BBF90E186(iLocal_141, false);
									unk_0xE121AE1BBF90E186(iLocal_143, false);
									func_162();
									func_161();
									iLocal_439 = 3;
									settimerb(0);
								}
							}
							else
							{
								func_156();
								func_163();
								if (func_204())
								{
									func_157();
								}
							}
						}
					}
					break;
				
				case 3:
					break;
				}
			}
	}
}

int func_204()
{
	vVar0 = { 10f, 10f, 3f };
	vVar3 = { -10f, -10f, -3f };
	if (unk_0xD3DCEC81D13AAFB1(unk_0x64430C979F516F7A(iLocal_140, 31086, 0f, 0f, 0f), 15f, 1))
	{
		return 1;
	}
	vVar0 = { vVar0 + unk_0x64430C979F516F7A(iLocal_140, 31086, 0f, 0f, 0f) };
	vVar3 = { vVar3 + unk_0x64430C979F516F7A(iLocal_140, 31086, 0f, 0f, 0f) };
	if (((unk_0xBBE430A566D01EF3(vVar3, vVar0, -37975472, 1) || unk_0xBBE430A566D01EF3(vVar3, vVar0, -1813897027, 1)) || unk_0xBBE430A566D01EF3(vVar3, vVar0, 741814745, 1)) || unk_0xBBE430A566D01EF3(vVar3, vVar0, 1945616459, 1))
	{
		return 1;
	}
	if (unk_0x4E861BC5B1EDA7BD(iLocal_140))
	{
		return 1;
	}
	return 0;
}

int func_205()
{
	vVar1 = { 75f, 75f, 20f };
	if (!unk_0xEB6A8945D1AC98A1(iLocal_140))
	{
		if (unk_0x12DE711B1C681E9E(iLocal_140, unk_0x16F2683693E537C9(), vVar1, 0, 1, 0))
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_206()
{
}

int func_207()
{
	if (!func_172(5))
	{
		return 1;
	}
	if (func_184())
	{
		return 1;
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (vmag2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_188())
		{
			return 0;
		}
	}
	if (func_178(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_208()
{
	if ((Global_111627 == func_42() && unk_0xD4A2BF1975E2C50F()) && Global_111628)
	{
		return 1;
	}
	return 0;
}

void func_209(bool bParam0)
{
	unk_0x536F1BE96C726C4B(vLocal_171, 15f, 1, 0, 0, false);
	unk_0x536F1BE96C726C4B(-1133,993f, 558,3267f, 107,351f, 5f, 1, 0, 0, false);
	if (bParam0)
	{
		iLocal_414 = unk_0x7D6CA5F52B3748BF(Vector(104,0503f, 560,4913f, -1126,376f) - Vector(5,75f, 19,25f, 39,75f), Vector(104,0503f, 560,4913f, -1126,376f) + Vector(5,75f, 19,25f, 39,75f), 0, 1, 1, 1);
		iLocal_413 = unk_0x7D6CA5F52B3748BF(Vector(9,361914f, 442,6952f, -3055,088f) + Vector(5f, 10f, 10f), Vector(9,361914f, 442,6952f, -3055,088f) - Vector(5f, 10f, 10f), 0, 1, 1, 1);
	}
	else
	{
		unk_0x2952D66A502EA873(iLocal_414, 0);
		unk_0x2952D66A502EA873(iLocal_413, 0);
	}
	unk_0xE342F209E49C5314(Vector(107,351f, 558,3267f, -1133,993f) + Vector(7,25f, 25,25f, 25f), Vector(107,351f, 558,3267f, -1133,993f) - Vector(7,25f, 25,25f, 25f), !bParam0, 1);
	unk_0xE342F209E49C5314(Vector(9,361914f, 442,6952f, -3055,088f) + Vector(5f, 10f, 10f), Vector(9,361914f, 442,6952f, -3055,088f) - Vector(5f, 10f, 10f), !bParam0, 1);
}

void func_210()
{
}

void func_211(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_42();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_213(iParam0);
	unk_0x24D1A8A556F3252A(0);
	unk_0xD084C7D80DE4139C(1);
	Global_111624 = 0;
	func_212();
}

void func_212()
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

void func_213(int iParam0)
{
	Global_111627 = iParam0;
}

int func_214(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!Global_150217)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_42();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_254())
		{
			return 0;
		}
	}
	vLocal_44 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
			if (vmag2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_188())
			{
				return 0;
			}
		}
		if (!Global_111638.f_9080)
		{
			return 0;
		}
		if (func_16(0))
		{
			return 0;
		}
		if (func_184())
		{
			return 0;
		}
		if (func_253())
		{
			return 0;
		}
		if (Global_111627 != -1)
		{
			return 0;
		}
		if (func_35(func_165()))
		{
			if (func_178(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !bParam6)
		{
			if ((vVar1.z - vLocal_44.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_252(iParam3))
		{
			return 0;
		}
		if (func_35(func_165()))
		{
			if (func_251(func_165()) == 4 || func_251(func_165()) == 5)
			{
				return 0;
			}
		}
		if (func_35(func_165()))
		{
			if (!func_250(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_249(Global_111638.f_24990.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x1C0640BA9A7327B3() - Global_111629) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_248())
		{
			return 0;
		}
		if (unk_0x2C1AA3A291786CDC())
		{
			return 0;
		}
		if (unk_0xD4A2BF1975E2C50F())
		{
			return 0;
		}
		if (!func_239(4))
		{
			return 0;
		}
		if (!func_172(5))
		{
			return 0;
		}
		if (func_238(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x31609A585163CBAC(unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9())))
		{
			if ((unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0xFBD08BECC9B87937(377,153f, -717,567f, 10,0536f) || unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0xFBD08BECC9B87937(320,9934f, 265,2515f, 82,1221f)) || unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0xFBD08BECC9B87937(-1425,564f, -244,3f, 15,8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_238(0, 0))
		{
			return 0;
		}
		if (Global_30914)
		{
			return 0;
		}
		if (func_252(30) && !func_238(30, 0))
		{
			if (iParam3 != 30)
			{
				if (vdist2(vVar1, -61,2745f, -1100,468f, 25,3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_35(func_165()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_111638.f_2358.f_539.f_2300[iVar4] };
				iVar8 = Global_111638.f_2358.f_539.f_2296[iVar4];
				if (func_237(iVar8))
				{
					if (func_215(iVar4))
					{
						if (!func_145(vVar5, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), vVar5) < (210f * 210f))
							{
								if (func_165() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_215(int iParam0)
{
	iVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_216(iVar0);
}

int func_216(int iParam0)
{
	return func_217(iParam0, 1);
}

int func_217(int iParam0, int iParam1)
{
	if (!func_237(iParam0))
	{
		return 0;
	}
	func_218(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_218(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_219(func_230(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_219(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (func_229(iParam0, iParam1))
	{
		iVar0 = func_228(iParam1);
		iVar1 = func_226(iParam0);
		iVar2 = (func_226(iParam0) - func_226(iParam1));
		iVar3 = (func_228(iParam0) - func_228(iParam1));
		iVar4 = (func_225(iParam0) - func_225(iParam1));
		iVar5 = (func_224(iParam0) - func_224(iParam1));
		iVar6 = (func_223(iParam0) - func_223(iParam1));
		iVar7 = (func_222(iParam0) - func_222(iParam1));
	}
	else
	{
		iVar0 = func_228(iParam0);
		iVar1 = func_226(iParam1);
		iVar2 = (func_226(iParam1) - func_226(iParam0));
		iVar3 = (func_228(iParam1) - func_228(iParam0));
		iVar4 = (func_225(iParam1) - func_225(iParam0));
		iVar5 = (func_224(iParam1) - func_224(iParam0));
		iVar6 = (func_223(iParam1) - func_223(iParam0));
		iVar7 = (func_222(iParam1) - func_222(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_221(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_220(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_220(float fParam0, float fParam1, float fParam2)
{
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_221(int iParam0, int iParam1)
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

int func_222(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_223(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_224(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_225(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_226(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_227(unk_0xEAE0D21A50E6C7F4(iParam0, 31), -1, 1)) + 2011;
}

int func_227(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_228(int iParam0)
{
	return iParam0 & 15;
}

int func_229(int iParam0, int iParam1)
{
	if (!func_237(iParam1) || !func_237(iParam0))
	{
		return 1;
	}
	iVar0 = func_226(iParam0);
	iVar1 = func_226(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_228(iParam0);
	iVar1 = func_228(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_225(iParam0);
	iVar1 = func_225(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_224(iParam0);
	iVar1 = func_224(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_223(iParam0);
	iVar1 = func_223(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_222(iParam0);
	iVar1 = func_222(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_230()
{
	func_236(&uVar0, unk_0x4460E481B9E33ADA());
	func_235(&uVar0, unk_0x8D199E381D262EEF());
	func_234(&uVar0, unk_0xD8A54335F18763BA());
	func_233(&uVar0, unk_0x972A296334C9D57B());
	func_232(&uVar0, unk_0x118229AD063C3C1D());
	func_231(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_231(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_232(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_233(var uParam0, int iParam1)
{
	iVar0 = func_228(*uParam0);
	iVar1 = func_226(*uParam0);
	if (iParam1 < 1 || iParam1 > func_221(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_234(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_235(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_236(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_237(int iParam0)
{
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_222(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_223(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_224(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_226(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_228(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_225(iParam0);
	if (iVar5 < 1 || iVar5 > func_221(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_238(int iParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_239(int iParam0)
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_165();
				if (!func_35(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_247()) || Global_110685) || Global_30770) || func_246()) || func_80(8, -1)) || func_245()) || func_244()) || func_243()) || func_242()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1) || func_247()) || Global_30770) || func_246()) || func_80(8, -1)) || func_243()) || func_245()) || func_244()) || func_242()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_247()) || Global_110685) || Global_30770) || func_246()) || func_80(8, -1)) || func_243()) || func_245()) || func_244()) || func_242()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_247()) || Global_110685) || Global_30770) || func_246()) || func_80(8, -1)) || func_245()) || func_244()) || func_242()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_247() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0) || func_80(8, -1)) || func_242()) || func_241()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_80(8, -1) || func_245()) || func_244()) || func_241()) || func_240())
						{
							return 0;
						}
						if ((unk_0x991B1F0980C62628() && unk_0x19EC8D83154D7CC1() != 3) && unk_0x00A15D69BCAA5267() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
						{
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_247()) || Global_30770) || func_246()) || func_80(8, -1)) || func_244()) || func_243()) || func_242()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || func_247()) || func_244()) || Global_110685) || Global_30770) || func_246()) || Global_42596) || func_80(8, -1)) || func_243()) || func_241()) || func_242()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_247()) || Global_110685) || Global_30770) || func_246()) || func_80(8, -1)) || func_243()) || func_241()) || func_245()) || func_244()) || func_242())
						{
							return 0;
						}
						break;
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
	else
	{
		return 0;
	}
	return 1;
}

var func_240()
{
	return Global_98783.f_1;
}

int func_241()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666].f_15, 13);
	}
	return 0;
}

int func_242()
{
	if (unk_0x8A22C4C08282BF26(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

int func_243()
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

bool func_244()
{
	return Global_98796.f_346 > 0;
}

bool func_245()
{
	return Global_98796.f_345 > 0;
}

var func_246()
{
	return Global_1312877;
}

int func_247()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_248()
{
	func_78();
	if (Global_8161[Global_19486][0].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_249(int iParam0)
{
	return func_229(func_230(), iParam0);
}

int func_250(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	iVar1 = func_165();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_251(int iParam0)
{
	if (!func_35(iParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[iParam0];
}

bool func_252(int iParam0)
{
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_254())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xEAE0D21A50E6C7F4(Global_111638.f_24990, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_1, iVar0);
	}
	return bVar1;
}

int func_253()
{
	if (Global_30918)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (unk_0xDF1306B443CD3D15(iVar0, 0))
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0xA30B8362589C124A(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_254()
{
	if (unk_0x61D9362D70D2DD56())
	{
		if (unk_0x999A3BFD3E9B5D2C())
		{
			if (unk_0x5CD8D2FE4603C900())
			{
				unk_0x6FB46C25CCB7E6D5(1571103992, &iVar0, -1);
				unk_0x5D96D8530B3D0904(&iVar0, 2);
				unk_0x5D96D8530B3D0904(&iVar0, 4);
				unk_0x5D96D8530B3D0904(&iVar0, 6);
				unk_0x5D96D8530B3D0904(&Global_25, 2);
				unk_0x5D96D8530B3D0904(&Global_25, 4);
				unk_0x5D96D8530B3D0904(&Global_25, 6);
				unk_0xCDC520E5E48E63D9(1571103992, iVar0, 1);
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

void func_255()
{
	wait(0);
	func_268(0);
	if (Global_31009)
	{
		unk_0xC92DB9682A650680("AC_STOP");
	}
	func_267();
	func_115(&uLocal_341, 0, 0);
	if (func_208())
	{
		unk_0x51B096AAC60548C1(1f);
		unk_0x2952D66A502EA873(iLocal_162, 0);
	}
	else
	{
		func_266(&Global_30827);
	}
	unk_0x34D79252800B23FF(5);
	unk_0x51B096AAC60548C1(1f);
	if ((unk_0xC844350D5D58C99A(iLocal_140) && !unk_0xEB6A8945D1AC98A1(iLocal_140)) && unk_0xBFDE4EE64C4BF2D6(iLocal_140, unk_0x5D08BBCCCC2F43A4(unk_0xD803B885F5E47A62())))
	{
		unk_0x0A94A109271BE75A(iLocal_140);
	}
	if (unk_0xDF1306B443CD3D15(iLocal_155, 0))
	{
		unk_0x71EDC33E5A423750(iLocal_155, 1);
	}
	func_209(0);
	func_256(-1);
	unk_0xCD7D80FD792F9954("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", true);
	unk_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_SOLO", true);
	unk_0x10FAF14A60A0DBE1();
}

void func_256(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_42();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_208())
	{
		func_259(iParam0);
		unk_0x974531784BE14213(0, 0);
		Global_111629 = unk_0x1C0640BA9A7327B3();
		func_258(30000);
		StringCopy(&cVar0, func_257(Global_111627, 1), 64);
		if (func_41(Global_111627) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_111626, 64);
		}
		unk_0xCDD9EADCF57830A9(&cVar0, Global_111624, (unk_0x1C0640BA9A7327B3() - Global_111625), 0);
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_111634, 0) && Global_111638.f_24990.f_2 < 3)
	{
		unk_0x0674E58A79778E99(&Global_111634, 0);
	}
	func_266(&Global_30827);
	Global_111628 = 0;
	func_213(-1);
}

char* func_257(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_258(int iParam0)
{
	Global_41982 = (unk_0x1C0640BA9A7327B3() + iParam0);
}

void func_259(int iParam0)
{
	func_260(iParam0, 0, func_265(iParam0));
}

void func_260(int iParam0, int iParam1, int iParam2)
{
	uVar0 = func_230();
	func_263(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_262(iParam0, &uVar0);
	Var1 = { func_261(&uVar0) };
}

struct<16> func_261(var uParam0)
{
	StringCopy(&Var0, "", 64);
	iVar16 = func_224(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_223(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_222(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_225(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_228(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_226(*uParam0), 64);
	return Var0;
}

void func_262(int iParam0, var uParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *uParam1;
}

void func_263(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_226(*uParam0);
	iVar1 = func_228(*uParam0);
	iVar2 = func_225(*uParam0);
	iVar3 = func_224(*uParam0);
	iVar4 = func_223(*uParam0);
	iVar5 = func_222(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_221(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_221(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_264(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_264(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_236(uParam0, iParam1);
	func_235(uParam0, iParam2);
	func_234(uParam0, iParam3);
	func_232(uParam0, iParam5);
	func_233(uParam0, iParam4);
	func_231(uParam0, iParam6);
}

int func_265(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_266(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_41393)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_41392 = 0;
	Global_41394 = 0;
	Global_41431 = 15;
	Global_61509 = 0;
	Global_61510 = 0;
}

void func_267()
{
	Global_31005 = 0;
	Global_31006 = 0;
	Global_31008 = 0;
	Global_31009 = 0;
	Global_31010 = 0;
}

void func_268(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_195(iVar0, bParam0);
		iVar0++;
	}
}

