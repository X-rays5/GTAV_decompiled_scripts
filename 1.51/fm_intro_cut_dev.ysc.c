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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0,0375f;
	fLocal_33 = 0,17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	unk_0xC92DB9682A650680("GLOBAL_KILL_MUSIC");
	while (true)
	{
		wait(0);
		if (Global_1662465)
		{
			if (!Global_1662467)
			{
				Global_1662464 = unk_0xB01F55A0FD1CFD49("OPENING_CREDITS");
				Global_1662467 = 1;
			}
			else if (unk_0x83D8570832F172A7(Global_1662464))
			{
				if (!Global_1662466)
				{
					unk_0x6567AE843FADBA94(Global_1662464, 255, 255, 255, 255, 0);
				}
			}
		}
		if (func_1(&iLocal_74, &(Local_63[0].f_4)))
		{
		}
	}
}

int func_1(int iParam0, int iParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 13))
	{
		if (unk_0x9F4FE516EAACCFC5(unk_0xC4648AFC94BA9ACC()))
		{
			vVar5 = { unk_0xD06724447386BC29(unk_0xC4648AFC94BA9ACC()) };
			if ((vVar5.x != 0f || vVar5.y != 0f) || vVar5.z != 0f)
			{
				unk_0xF49D1BC9EF1C3EF4(vVar5, 0f, 0f, 0f);
				if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 14))
				{
					unk_0x5D96D8530B3D0904(iParam0, 14);
				}
			}
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(*iParam0, 14))
	{
		unk_0x066C43E677C08D5C();
		unk_0x0674E58A79778E99(iParam0, 14);
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 337, true);
	}
	func_219(iParam0);
	unk_0xE4EBD4F12E3C46F1(1f);
	func_213(iParam0);
	func_212(unk_0xD803B885F5E47A62());
	if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 31))
	{
		if (iParam0->f_6 > 0)
		{
			iParam0->f_32 = unk_0x0D1736C2E221BCEA(234,0331f, -1005,203f, -98,4626f, "hei_dlc_garage_high_new");
			if (iParam0->f_32 != 0)
			{
				unk_0x0007C2367F4F23F3(iParam0->f_32);
				unk_0x5D96D8530B3D0904(iParam0, 31);
			}
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		switch (iParam0->f_6)
		{
			case 0:
				iParam0->f_292 = 1;
				iParam0->f_293 = 0;
				iParam0->f_295 = 0;
				iParam0->f_294 = 0;
				if (unk_0x8A22C4C08282BF26(-270023808) > 0)
				{
					iParam0->f_295 = 1;
					iParam0->f_294 = 1;
				}
				else if (unk_0x8A22C4C08282BF26(func_211()) > 0)
				{
					iParam0->f_295 = 1;
				}
				if (!Global_2537071.f_1852)
				{
					Global_2537071.f_1852 = 1;
					unk_0x7F2C3F971FA7A9EA(0);
				}
				if (!func_210())
				{
					func_209(1);
				}
				if (!unk_0x757EF87A33649210() && !unk_0xD0BB2359EC70FC37())
				{
					unk_0x53491B90E4FD0E56(800);
				}
				if (!func_208(&(iParam0->f_15)))
				{
					func_207(&(iParam0->f_15), 0, 0);
				}
				unk_0xE17FDF9E3068281B(&Global_1662464);
				Global_1662465 = 0;
				Global_1662467 = 0;
				Global_1662466 = 0;
				Global_1662468 = 0;
				iParam0->f_19 = { 0f, 0f, 0f };
				if (unk_0x757EF87A33649210())
				{
					*iParam0 = 0;
					iParam0->f_4 = 0;
					iParam0->f_5 = 0;
					func_196(0, 0, 0, 1, 1, 1, 0);
					unk_0xB5EB44E161D3DCB8(1, false);
					func_194(1);
					unk_0x93E3BF6DC91ADAA6(1);
					unk_0xCFC975972CBB2320("EXTRASUNNY");
					unk_0xF60E6F759DB05AEB(19, 0, 0);
					unk_0x448D99BAB1554268(1);
					func_193(0);
					unk_0x98AB0CC3E937A146(0);
					func_185(1, 0);
					func_161(1, 1);
					if (unk_0x8A22C4C08282BF26(-270023808) < 1 || !func_160())
					{
						if (iParam0->f_292)
						{
							if (func_159() == 0)
							{
								unk_0x0CDF80057190977A("GTAO_INTRO_MALE");
								unk_0xD37565245621B3E1(1);
							}
						}
					}
					func_152(14, 0);
					iParam0->f_6 = 1;
					*iParam0 = 0;
					unk_0x0674E58A79778E99(iParam0, 0);
					unk_0x0674E58A79778E99(iParam0, 1);
					unk_0x0674E58A79778E99(iParam0, 2);
					unk_0x0674E58A79778E99(iParam0, 9);
					unk_0x5D96D8530B3D0904(iParam0, 7);
					iParam0->f_122 = unk_0x7D6CA5F52B3748BF(-1012,787f, -2747,597f, 15f, -1052,03f, -2716,144f, 25f, 0, 1, 1, 1);
				}
				break;
			
			case 1:
				unk_0x523BCC9DC80CD82F(744705981);
				if (unk_0xB87F6CF6E5628C67(744705981))
				{
					if (!iParam0->f_292 || unk_0x23239EF74F22427E())
					{
						if (func_149())
						{
							unk_0x8001939EDF757EB8(0);
							func_143(1, 1);
							unk_0x23F80404F3C4C299(0);
							unk_0xA37A90C62806D848(1);
							if (!func_141())
							{
								func_140();
							}
							func_139(0);
							func_138();
							unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), Global_1312553, 1, false, 0, 1);
							unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), true);
							unk_0x20641932E5104B25(unk_0x16F2683693E537C9(), false, 0);
							unk_0x34D79252800B23FF(0);
							if (unk_0xE4EDC4B0E92C078B(unk_0x023428EEA3027652()))
							{
								unk_0x516E63E474722206(unk_0x023428EEA3027652(), 0f);
							}
							unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), true);
							iParam0->f_6 = 2;
						}
					}
				}
				break;
			
			case 2:
				if (!unk_0x991B1F0980C62628())
				{
					if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 4))
					{
						if (func_137() == 65 || func_137() == 66)
						{
							unk_0x066C43E677C08D5C();
							unk_0xD67D6A3F0D653D93(754,2219f, 1226,831f, 356,5081f, func_136(-14,367f, 0f, 157,3524f), 100f, 0);
							func_135(&(iParam0->f_17));
							func_207(&(iParam0->f_17), 0, 0);
							unk_0x5D96D8530B3D0904(iParam0, 4);
						}
					}
					else if (unk_0x13896FDECC859926("FM_INTRO_START") && (unk_0x68367101660E33F0() || func_134(&(iParam0->f_17), 5000, 0)))
					{
						if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 24))
						{
							if (unk_0xEAE0D21A50E6C7F4(*iParam0, 7))
							{
								unk_0xC92DB9682A650680("FM_INTRO_START");
								unk_0x5D96D8530B3D0904(iParam0, 24);
								unk_0x5D96D8530B3D0904(iParam0, 21);
							}
						}
						else if (unk_0x94AE52F579E2F918() > 0)
						{
							unk_0x486B4ADE317F0689();
							unk_0xF99F2927BEBB5EE7(6);
							if (!unk_0x9F4FE516EAACCFC5(iParam0->f_7))
							{
								iParam0->f_7 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", false);
								unk_0xE3BB8E05FCEB3FBE(iParam0->f_7, true);
							}
							unk_0x86F44313DFA8F00C(iParam0->f_7, 754,2219f, 1226,831f, 356,5081f, -14,367f, 0f, 157,3524f, 42,2442f, 0, 1, 1, 2);
							unk_0x86F44313DFA8F00C(iParam0->f_7, 740,7797f, 1193,923f, 351,1997f, -9,6114f, 0f, 157,8659f, 44,8314f, 6500, 0, 0, 2);
							unk_0x91F5B0244AAE6222(iParam0->f_7, "HAND_SHAKE", 0,15f);
							unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 1, 0);
							func_133(iParam0);
							unk_0x5D96D8530B3D0904(iParam0, 11);
							if (iParam0->f_292)
							{
								unk_0x44E5AE27B5A88FC7(9, 9, 9, 9);
								unk_0x9E020FDB27CA9201();
							}
							unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), true);
							if (unk_0x757EF87A33649210())
							{
								unk_0x82E51BCA72537B6C(800);
							}
							iParam0->f_6 = 6;
						}
					}
				}
				break;
			
			case 6:
				func_132(iParam0, 6);
				func_131(iParam0);
				if (func_130(iParam0, 6, 0))
				{
					unk_0xA37A90C62806D848(1);
					iParam0->f_6 = 7;
				}
				break;
			
			case 7:
				if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 2))
				{
					unk_0xA37A90C62806D848(1);
					func_129("FMIC_INTRO2", -1);
					unk_0x5D96D8530B3D0904(iParam0, 2);
				}
				unk_0x86F44313DFA8F00C(iParam0->f_7, -259,3686f, -553,8571f, 142,6048f, 13,2752f, -0,5186f, -143,3378f, 44,9959f, 0, 1, 1, 2);
				unk_0x86F44313DFA8F00C(iParam0->f_7, -277,7789f, -569,962f, 142,8625f, 12,4479f, -0,5186f, -134,9992f, 44,9959f, 6000, 0, 0, 2);
				unk_0x44E5AE27B5A88FC7(9, 13, 9, 13);
				iParam0->f_6 = 8;
				break;
			
			case 8:
				func_132(iParam0, 8);
				if (func_131(iParam0))
				{
					func_128(iParam0);
					if (func_130(iParam0, 8, 0))
					{
						iParam0->f_6 = 9;
					}
				}
				break;
			
			case 9:
				if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 10))
				{
					func_127();
					unk_0x5D96D8530B3D0904(iParam0, 10);
				}
				unk_0x86F44313DFA8F00C(iParam0->f_7, -4,6668f, -900,9736f, 184,887f, -1,6106f, -0,5186f, 78,3786f, 45,0069f, 0, 1, 1, 2);
				unk_0x86F44313DFA8F00C(iParam0->f_7, -23,0087f, -896,4288f, 184,1939f, -2,8529f, -0,5186f, 81,8262f, 45,0069f, 8000, 0, 0, 2);
				if (unk_0xDF1306B443CD3D15(iParam0->f_48, 0))
				{
					unk_0xE898EBD25943F331(iParam0->f_48);
					unk_0x4A4806F9D471E491(iParam0->f_48, true, 0);
					unk_0x873BCADC75FF6D20(iParam0->f_48);
				}
				iParam0->f_6 = 10;
				break;
			
			case 10:
				if (unk_0xDF1306B443CD3D15(iParam0->f_48, 0))
				{
					unk_0x873BCADC75FF6D20(iParam0->f_48);
				}
				func_132(iParam0, 10);
				if (func_126())
				{
					if (func_125(iParam0))
					{
						if (func_128(iParam0))
						{
							if (func_130(iParam0, 10, 0))
							{
								if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
								{
									unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -2870,804f, 81,4979f, 13,1957f, 1, false, 0, 1);
									unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), true);
								}
								fVar0 = 5000f;
								if (unk_0xDF1306B443CD3D15(iParam0->f_92[0], 0))
								{
									unk_0x4D3C3C0B0DE2663E(iParam0->f_92[0], 100, "FM_Intro_uber", 1);
									unk_0xF12C1D85AFEE8FAD(iParam0->f_92[0], fVar0);
								}
								if (unk_0xDF1306B443CD3D15(iParam0->f_92[1], 0))
								{
									unk_0x4D3C3C0B0DE2663E(iParam0->f_92[1], 101, "FM_Intro_uber", 1);
									unk_0xF12C1D85AFEE8FAD(iParam0->f_92[1], fVar0);
								}
								if (unk_0xDF1306B443CD3D15(iParam0->f_92[2], 0))
								{
									unk_0x4D3C3C0B0DE2663E(iParam0->f_92[2], 102, "FM_Intro_uber", 1);
									unk_0xF12C1D85AFEE8FAD(iParam0->f_92[2], fVar0);
								}
								if (unk_0xDF1306B443CD3D15(iParam0->f_92[3], 0))
								{
									unk_0x4D3C3C0B0DE2663E(iParam0->f_92[3], 103, "FM_Intro_uber", 1);
									unk_0xF12C1D85AFEE8FAD(iParam0->f_92[3], fVar0);
								}
								if (unk_0xDF1306B443CD3D15(iParam0->f_92[4], 0))
								{
									unk_0x4D3C3C0B0DE2663E(iParam0->f_92[4], 104, "FM_Intro_uber", 1);
									unk_0xF12C1D85AFEE8FAD(iParam0->f_92[4], fVar0);
								}
								unk_0x5D96D8530B3D0904(iParam0, 15);
								unk_0x82E51BCA72537B6C(800);
								iParam0->f_6 = 14;
							}
						}
					}
				}
				break;
			
			case 14:
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 15))
				{
					unk_0xF60E6F759DB05AEB(16, 0, 0);
					func_124(iParam0);
					func_123(iParam0, "race_camera_1", "mp_intro_seq@", -2237,39f, -333,52f, 12,47f, 0f, 0f, 0f, 0,1982f, 1065353216);
					unk_0x10486C0590CF176C(iParam0->f_7, 1);
					unk_0xE03C71FA3398174A(iParam0->f_7);
					unk_0x9A8DDC7C522F5BF5(iParam0->f_7, 0);
					unk_0x8BC9595FD2792B5D("MP_INTRO_RACE_SCENE");
					unk_0x44E5AE27B5A88FC7(9, 12, 9, 12);
					func_121(iParam0, 14);
					unk_0x0674E58A79778E99(iParam0, 15);
				}
				if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 5))
				{
					func_129("FMIC_RACE1", -1);
					unk_0x5D96D8530B3D0904(iParam0, 5);
				}
				func_132(iParam0, 14);
				if (func_130(iParam0, 14, 0))
				{
					func_120(iParam0, 23539f, 0);
					unk_0xF60E6F759DB05AEB(16, 0, 0);
					unk_0x5D96D8530B3D0904(iParam0, 15);
					iParam0->f_6 = 15;
				}
				break;
			
			case 15:
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 15))
				{
					func_123(iParam0, "race_camera_2", "mp_intro_seq@", -2237,39f, -333,52f, 12,47f, 0f, 0f, 0f, 0,39f, 1065353216);
					func_121(iParam0, 15);
					unk_0x0674E58A79778E99(iParam0, 15);
				}
				if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 0))
				{
					func_109(iParam0);
				}
				else if (func_108(iParam0) && func_101(iParam0))
				{
					func_99(iParam0);
				}
				func_132(iParam0, 15);
				if (func_130(iParam0, 15, 0))
				{
					func_120(iParam0, 28833,33f, 75f);
					unk_0xF60E6F759DB05AEB(16, 0, 0);
					unk_0x5D96D8530B3D0904(iParam0, 15);
					iParam0->f_6 = 16;
				}
				break;
			
			case 16:
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 15))
				{
					func_98(iParam0, "race_camera_3a", "mp_intro_seq@", iParam0->f_92[4], 0f, 0f, -0,1f, 0f, 0f, 0f);
					func_121(iParam0, 16);
					unk_0x0674E58A79778E99(iParam0, 15);
				}
				if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 0))
				{
					func_109(iParam0);
				}
				else if (func_108(iParam0) && func_101(iParam0))
				{
					func_99(iParam0);
				}
				func_132(iParam0, 16);
				if (func_130(iParam0, 16, 0))
				{
					func_120(iParam0, 29700f, 0);
					unk_0xF60E6F759DB05AEB(16, 0, 0);
					unk_0x5D96D8530B3D0904(iParam0, 15);
					iParam0->f_6 = 17;
				}
				break;
			
			case 17:
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 15))
				{
					func_123(iParam0, "race_camera_3b", "mp_intro_seq@", -2237,39f, -333,52f, 12,47f, 0f, 0f, 0f, 0, 1065353216);
					unk_0x5E4E98C6D98C9C57(iParam0->f_9, 0,7f);
					func_121(iParam0, 17);
					unk_0x0674E58A79778E99(iParam0, 15);
				}
				if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 6))
				{
					unk_0x5D96D8530B3D0904(iParam0, 6);
					func_129("FMIC_RACE2", -1);
				}
				if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 0))
				{
					func_109(iParam0);
				}
				else if (func_108(iParam0) && func_101(iParam0))
				{
					func_99(iParam0);
				}
				func_132(iParam0, 17);
				if (func_130(iParam0, 17, 0))
				{
					func_120(iParam0, 36450f, 0);
					unk_0xF60E6F759DB05AEB(16, 0, 0);
					unk_0x5D96D8530B3D0904(iParam0, 15);
					iParam0->f_6 = 18;
				}
				break;
			
			case 18:
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 15))
				{
					func_123(iParam0, "race_camera_4", "mp_intro_seq@", -2237,39f, -333,52f, 12,47f, 0f, 0f, 0f, 0, 1065353216);
					func_121(iParam0, 18);
					unk_0x0674E58A79778E99(iParam0, 15);
				}
				if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 0))
				{
					func_109(iParam0);
				}
				else if (func_108(iParam0) && func_101(iParam0))
				{
					func_99(iParam0);
				}
				func_132(iParam0, 18);
				if (func_97() && func_130(iParam0, 18, 0))
				{
					func_120(iParam0, 43650f, 0);
					unk_0xF60E6F759DB05AEB(16, 0, 0);
					unk_0x5D96D8530B3D0904(iParam0, 15);
					iParam0->f_6 = 19;
				}
				break;
			
			case 19:
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 15))
				{
					if (unk_0xC844350D5D58C99A(iParam0->f_92[2]))
					{
						unk_0xA954465BA6FDEFE2(&(iParam0->f_92[2]));
					}
					if (unk_0xC844350D5D58C99A(iParam0->f_92[3]))
					{
						unk_0xA954465BA6FDEFE2(&(iParam0->f_92[3]));
					}
					if (unk_0xC844350D5D58C99A(iParam0->f_92[4]))
					{
						unk_0xA954465BA6FDEFE2(&(iParam0->f_92[4]));
					}
					func_123(iParam0, "race_camera_5", "mp_intro_seq@", -2237,39f, -333,52f, 12,47f, 0f, 0f, 0f, 0, 1065353216);
					func_121(iParam0, 19);
					unk_0x0674E58A79778E99(iParam0, 15);
				}
				if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 0))
				{
					func_109(iParam0);
				}
				else
				{
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 6))
					{
						if (iParam0->f_32 != 0)
						{
							if (unk_0xBD307E66C0669BFC(iParam0->f_32))
							{
								if (!unk_0x437347B10A200C4B(iParam0->f_91, 0))
								{
									unk_0xF2BFB495D7D174E8(iParam0->f_91, iParam0->f_32, unk_0x12AB0310C2281427("GtaMloRoom001"));
								}
								unk_0x837C600ECEE8ABA2("SE_MP_GARAGE_L_RADIO", 0);
								iVar4 = 0;
								while (iVar4 < 8)
								{
									if (!unk_0x437347B10A200C4B(iParam0->f_49[iVar4], 0))
									{
										unk_0xF2BFB495D7D174E8(iParam0->f_49[iVar4], iParam0->f_32, unk_0x12AB0310C2281427("GtaMloRoom001"));
									}
									iVar4++;
								}
								unk_0x5D96D8530B3D0904(&(iParam0->f_3), 6);
							}
						}
					}
					if (func_108(iParam0) && func_101(iParam0))
					{
						func_99(iParam0);
					}
				}
				func_96(iParam0);
				func_95(iParam0);
				func_132(iParam0, 19);
				if (func_130(iParam0, 19, 0) && unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 0))
				{
					if (unk_0xEAE0D21A50E6C7F4(*iParam0, 12))
					{
						unk_0x0674E58A79778E99(iParam0, 12);
					}
					iParam0->f_6 = 22;
				}
				else if (func_130(iParam0, 19, -4968))
				{
					if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 12))
					{
						unk_0xA37A90C62806D848(1);
						unk_0x5D96D8530B3D0904(iParam0, 12);
					}
				}
				else if (func_130(iParam0, 19, -5618))
				{
					if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 30))
					{
						unk_0x82A772610883F395("MP_intro_logo", 0, 0);
						unk_0x5D96D8530B3D0904(iParam0, 30);
					}
				}
				break;
			
			case 22:
				func_96(iParam0);
				func_95(iParam0);
				if (unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 0))
				{
					if (!unk_0x9F4FE516EAACCFC5(iParam0->f_7))
					{
						iParam0->f_7 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", false);
					}
					unk_0xE3BB8E05FCEB3FBE(iParam0->f_7, true);
					unk_0x86F44313DFA8F00C(iParam0->f_7, 228,1892f, -1006,758f, -96,8311f, -13,0682f, 0,0572f, 0,7306f, 40,033f, 0, 1, 1, 2);
					unk_0x86F44313DFA8F00C(iParam0->f_7, 228,2493f, -1006,155f, -98,1976f, -2,3097f, 0,0572f, 0,7306f, 40,033f, 6000, 0, 0, 2);
					unk_0x91F5B0244AAE6222(iParam0->f_7, "HAND_SHAKE", 0,1f);
					unk_0xCFFF6D0D867C649B(iParam0->f_32, unk_0x12AB0310C2281427("GtaMloRoom001"));
					unk_0x837C600ECEE8ABA2("SE_MP_GARAGE_L_RADIO", 0);
					unk_0xF99F2927BEBB5EE7(0);
					unk_0x57E0CF9BF653D99A(iParam0->f_10, 0f);
					if (!unk_0xEB6A8945D1AC98A1(iParam0->f_91))
					{
						unk_0xF895E10BF4C72645(iParam0->f_91, 0, 0);
					}
					if (unk_0x562F77A7F33D2E46("MP_INTRO_RACE_SCENE"))
					{
						unk_0x8910D3D58E0132B8("MP_INTRO_RACE_SCENE");
					}
					unk_0x44E5AE27B5A88FC7(9, 13, 9, 13);
					func_94(iParam0);
					func_93();
					func_129("FMIC_GAR", -1);
					iParam0->f_6 = 23;
				}
				break;
			
			case 23:
				func_96(iParam0);
				func_95(iParam0);
				func_132(iParam0, 23);
				if (func_108(iParam0) && func_101(iParam0))
				{
					func_99(iParam0);
				}
				if (func_130(iParam0, 23, 0))
				{
					unk_0x86F44313DFA8F00C(iParam0->f_7, 222,9166f, -999,9128f, -99,4285f, 5,5453f, 0,0572f, -57,3736f, 31,9442f, 0, 1, 1, 2);
					unk_0x86F44313DFA8F00C(iParam0->f_7, 223,1394f, -999,8619f, -99,4078f, 5,5453f, 0,0572f, -56,2437f, 31,9442f, 3500, 0, 0, 2);
					unk_0x57E0CF9BF653D99A(iParam0->f_10, 0f);
					if (!unk_0xEB6A8945D1AC98A1(iParam0->f_91))
					{
						unk_0xF895E10BF4C72645(iParam0->f_91, 0, 0);
					}
					func_91(iParam0, 0);
					func_91(iParam0, 1);
					func_91(iParam0, 5);
					func_91(iParam0, 6);
					iParam0->f_6 = 24;
				}
				break;
			
			case 24:
				func_96(iParam0);
				func_95(iParam0);
				func_132(iParam0, 24);
				if (func_108(iParam0) && func_101(iParam0))
				{
					func_99(iParam0);
				}
				if (func_130(iParam0, 24, 0))
				{
					iParam0->f_6 = 27;
				}
				break;
			
			case 27:
				func_96(iParam0);
				func_95(iParam0);
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -1148,286f, -1639,737f, 5,106698f, 1, false, 0, 1);
				unk_0x5D96D8530B3D0904(iParam0, 13);
				unk_0x86F44313DFA8F00C(iParam0->f_7, 226,4832f, -978,9647f, -98,874f, -3,0848f, 0,0347f, -115,3629f, 25,2446f, 0, 1, 1, 2);
				unk_0x86F44313DFA8F00C(iParam0->f_7, 226,4608f, -978,0541f, -98,874f, -3,0848f, 0,0347f, -115,3629f, 25,2446f, 1500, 3, 3, 2);
				unk_0xF60E6F759DB05AEB(18, 0, 0);
				func_91(iParam0, 2);
				func_91(iParam0, 7);
				unk_0x71199B01895C6202(func_90());
				if (unk_0xC844350D5D58C99A(iParam0->f_91))
				{
					unk_0xEBA53F35D0085654(&(iParam0->f_91));
				}
				unk_0x5D96D8530B3D0904(iParam0, 29);
				iParam0->f_6 = 28;
				break;
			
			case 28:
				func_96(iParam0);
				func_95(iParam0);
				if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 8))
				{
					unk_0x5D96D8530B3D0904(iParam0, 8);
				}
				if (func_108(iParam0) && func_101(iParam0))
				{
					func_99(iParam0);
				}
				func_132(iParam0, 28);
				if ((unk_0x13896FDECC859926("FM_INTRO_DRIVE_START") && unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 3)) && func_130(iParam0, 28, 0))
				{
					iParam0->f_6 = 29;
				}
				break;
			
			case 29:
				if (iParam0->f_295)
				{
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
					{
						if (func_87(iParam0))
						{
							unk_0x29E8331978B73E7F(0, "MP_Male_Character", 3, 1885233650, 0);
							unk_0x29E8331978B73E7F(unk_0x16F2683693E537C9(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							unk_0x29E8331978B73E7F(unk_0x16F2683693E537C9(), "MP_Male_Character", 0, 0, 0);
							unk_0x29E8331978B73E7F(0, "MP_Female_Character", 3, -1667301416, 0);
						}
					}
				}
				else if (func_87(iParam0))
				{
					unk_0x29E8331978B73E7F(0, "MP_Male_Character", 3, 1885233650, 0);
				}
				else
				{
					unk_0x29E8331978B73E7F(0, "MP_Female_Character", 3, -1667301416, 0);
				}
				if (!unk_0x437347B10A200C4B(iParam0->f_35, 0))
				{
					unk_0x29E8331978B73E7F(iParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!unk_0x437347B10A200C4B(iParam0->f_34, 0))
				{
					unk_0x29E8331978B73E7F(iParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				if (!unk_0x437347B10A200C4B(iParam0->f_33, 0))
				{
					unk_0x4A4806F9D471E491(iParam0->f_33, true, 0);
					unk_0x29E8331978B73E7F(iParam0->f_33, "MP_Plane", 0, 0, 0);
				}
				func_85(iParam0);
				unk_0xCD7E6F59323AEBCB("CONTRAILS", 0);
				unk_0x44E5AE27B5A88FC7(9, 9, 9, 9);
				func_129("FMIC_TENN", -1);
				unk_0x4C902758BEA97C68(4);
				func_77(1, 1, 1, 0, 0, 0);
				iParam0->f_6 = 30;
				break;
			
			case 30:
				if (unk_0x22A8E52414415B76())
				{
					if (iParam0->f_32 != 0)
					{
						unk_0x25BB71BA267FE042(iParam0->f_32);
					}
					func_76(iParam0);
					if (iParam0->f_293)
					{
						iParam0->f_26 = (unk_0x1C0640BA9A7327B3() - iParam0->f_13);
					}
					else
					{
						iParam0->f_26 = 52618;
						iParam0->f_27 = 52618;
					}
					iParam0->f_6 = 31;
				}
				break;
			
			case 31:
				if (iParam0->f_295)
				{
					if (func_87(iParam0))
					{
						if (unk_0x3148AE92ED70DC30("MP_Female_Character", 0))
						{
							if (unk_0xDF1306B443CD3D15(iParam0->f_34, 0))
							{
								if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
								{
									if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
									{
										unk_0x5B1D360B9C6F0A09(unk_0x16F2683693E537C9(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
									}
								}
							}
						}
					}
					else if (unk_0x3148AE92ED70DC30("MP_Male_Character", 0))
					{
						if (unk_0xDF1306B443CD3D15(iParam0->f_34, 0))
						{
							if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
							{
								if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
								{
									unk_0x5B1D360B9C6F0A09(unk_0x16F2683693E537C9(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
					}
				}
				if (unk_0x3148AE92ED70DC30("LAMAR", 0))
				{
					if (unk_0xDF1306B443CD3D15(iParam0->f_34, 0))
					{
						if (!unk_0xEB6A8945D1AC98A1(iParam0->f_35))
						{
							if (!unk_0x405E212DDE472467(iParam0->f_35, 0))
							{
								unk_0x5B1D360B9C6F0A09(iParam0->f_35, iParam0->f_34, 20000, -1, 1f, 1048592, 0);
								unk_0xF895E10BF4C72645(iParam0->f_35, 0, 0);
							}
						}
					}
				}
				if (unk_0x3148AE92ED70DC30("MP_Lamar_Car", 0))
				{
					if (unk_0xDF1306B443CD3D15(iParam0->f_34, 0))
					{
						unk_0x56FDC9ADE35F7DB0(iParam0->f_34, true, 1, 0);
						unk_0xA47B46945FF6DE74(iParam0->f_34, -1028,406f, -2732,782f, 19,5931f, 1, false, 0, 1);
						unk_0xD8F6A53F4799FAFE(iParam0->f_34, -106,11f);
						func_75(iParam0, 3099,997f);
						unk_0x05CA0E7946B27A19(iParam0->f_34, 1);
					}
				}
				if (unk_0xEABED1927EFB48CA(0))
				{
					unk_0xF60E6F759DB05AEB(21, 0, 0);
					func_121(iParam0, 33);
					func_123(iParam0, "LAMAR_CAR_DRIVE_01", "mp_intro_seq@", -1038,78f, -2732,61f, 19,08f, 0f, 0f, 0f, 0, 1065353216);
				}
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 29))
				{
					if (unk_0xDED29B1D7D52D5A3() || unk_0x8F677B1F58B4741C() > 3254)
					{
						unk_0x0674E58A79778E99(iParam0, 29);
					}
				}
				if ((func_73(iParam0) && func_72(iParam0)) && !unk_0x22A8E52414415B76())
				{
					if (iParam0->f_293)
					{
						iParam0->f_28 = (unk_0x1C0640BA9A7327B3() - iParam0->f_13);
					}
					else
					{
						iParam0->f_29 = 134784;
						if (func_87(iParam0))
						{
							iParam0->f_28 = 134784;
						}
						else
						{
							iParam0->f_28 = 134784;
						}
					}
					unk_0xDC355804A9511111();
					unk_0x386090053886DF05();
					if (unk_0xEAE0D21A50E6C7F4(*iParam0, 7))
					{
						unk_0xC92DB9682A650680("FM_INTRO_DRIVE_START");
						unk_0x5D96D8530B3D0904(iParam0, 21);
					}
					if (!unk_0x154B5473FBFD0156())
					{
						unk_0x55BE34EDDEA0AC9E(0);
					}
					if (!unk_0xEAE0D21A50E6C7F4(*iParam1, 1))
					{
						unk_0x5D96D8530B3D0904(iParam1, 1);
					}
					func_71(iParam0);
					func_70(iParam0);
					func_77(0, 1, 1, 0, 0, 0);
					unk_0x5D96D8530B3D0904(iParam0, 15);
					unk_0x0674E58A79778E99(iParam0, 13);
					iParam0->f_6 = 33;
				}
				else
				{
					if (iParam0->f_293)
					{
						iParam0->f_13 = (unk_0x1C0640BA9A7327B3() - (iParam0->f_26 + unk_0x8F677B1F58B4741C()));
					}
					if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 22))
					{
						if (unk_0x90AE01DE9DD05E85() == 1)
						{
							unk_0xF60E6F759DB05AEB(19, 59, 0);
							unk_0x5D96D8530B3D0904(iParam0, 22);
						}
					}
					if (func_68(iParam0))
					{
						if (unk_0x90AE01DE9DD05E85() == 2)
						{
							if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 18))
							{
								unk_0x5D96D8530B3D0904(iParam0, 18);
							}
							if (unk_0x8F677B1F58B4741C() > 23146)
							{
								if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 27))
								{
									unk_0xE81656B429E5C4B5("scr_mp_plane_landing_tyre_smoke", iParam0->f_33, -2,508f, -3,666f, -3,584f, 0f, 0f, -90f, 1065353216, 0, 0, 0);
									unk_0x5D96D8530B3D0904(iParam0, 27);
								}
								if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 28))
								{
									unk_0xE81656B429E5C4B5("scr_mp_plane_landing_tyre_smoke", iParam0->f_33, 3,508f, -3,666f, -3,584f, 0f, 0f, -90f, 1065353216, 0, 0, 0);
									unk_0x5D96D8530B3D0904(iParam0, 28);
								}
							}
							unk_0x692F7AFAFD440081(4950f);
							if (unk_0xEAE0D21A50E6C7F4(*iParam0, 22))
							{
								unk_0xF60E6F759DB05AEB(21, 0, 0);
								unk_0x0674E58A79778E99(iParam0, 22);
							}
							if (unk_0x8F677B1F58B4741C() > 23254)
							{
								func_67(iParam0);
							}
						}
					}
					if (unk_0x90AE01DE9DD05E85() > 2)
					{
						func_70(iParam0);
						if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 22))
						{
							unk_0xF60E6F759DB05AEB(21, 0, 0);
							unk_0x5D96D8530B3D0904(iParam0, 22);
						}
						if (unk_0xDF1306B443CD3D15(iParam0->f_34, 0))
						{
							unk_0x8F741CB9D8AB80F4(iParam0->f_34);
							unk_0x0882E3DC0C991680(iParam0->f_34, 2);
						}
					}
					iParam0->f_31 = unk_0x8F677B1F58B4741C();
				}
				break;
			
			case 33:
				if (func_87(iParam0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 1))
					{
						if (func_130(iParam0, 33, -5450))
						{
							if (func_45(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_1", 9, 0, 0))
							{
								unk_0x5D96D8530B3D0904(&(iParam0->f_1), 1);
							}
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 2))
					{
						if (func_130(iParam0, 33, -5450))
						{
							if (func_45(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_3", 9, 0, 0))
							{
								unk_0x5D96D8530B3D0904(&(iParam0->f_1), 2);
							}
						}
					}
				}
				if (!func_87(iParam0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 1))
					{
						if (func_130(iParam0, 33, -5450))
						{
							if (func_45(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_1", 9, 0, 0))
							{
								unk_0x5D96D8530B3D0904(&(iParam0->f_1), 1);
							}
						}
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 15))
				{
					unk_0x8BC9595FD2792B5D("MP_INTRO_LAMAR_DRIVE_SCENE");
					unk_0x0674E58A79778E99(iParam0, 15);
				}
				func_132(iParam0, 33);
				func_44(iParam0);
				if (func_130(iParam0, 33, 0))
				{
					unk_0x5D96D8530B3D0904(iParam0, 15);
					iParam0->f_6 = 34;
				}
				break;
			
			case 34:
				if (!func_87(iParam0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 2))
					{
						if (func_45(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_3", 9, 0, 0))
						{
							unk_0x5D96D8530B3D0904(&(iParam0->f_1), 2);
						}
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 15))
				{
					if (!unk_0x437347B10A200C4B(iParam0->f_34, 0))
					{
						unk_0xC5940439E4EB9A33(iParam0->f_7, iParam0->f_34, 0,8056f, 2,2245f, 0,5533f, 1);
						unk_0x1305278186D1C53E(iParam0->f_7, iParam0->f_34, -0,4552f, -0,4977f, 0,5449f, 1);
						unk_0x5818C8D5303DCCF8(iParam0->f_7, 33,3479f);
						unk_0x91F5B0244AAE6222(iParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0xE3BB8E05FCEB3FBE(iParam0->f_7, true);
						if (!unk_0x437347B10A200C4B(iParam0->f_35, 0))
						{
							unk_0x4A4806F9D471E491(iParam0->f_35, false, 0);
						}
						if (!unk_0x437347B10A200C4B(iParam0->f_36, 0))
						{
							unk_0x4A4806F9D471E491(iParam0->f_36, true, 0);
						}
						iParam0->f_11 = -1;
						iParam0->f_11 = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x6BE2EAE992FD7C26(iParam0->f_11, iParam0->f_34, unk_0xF653B9B22DA806A9(iParam0->f_34, "seat_dside_f"));
						if (func_87(iParam0))
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x6BE2EAE992FD7C26(iParam0->f_12, iParam0->f_34, unk_0xF653B9B22DA806A9(iParam0->f_34, "seat_pside_f"));
							unk_0x915804B434753CBD(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x57E0CF9BF653D99A(iParam0->f_11, 0,129f);
							unk_0x57E0CF9BF653D99A(iParam0->f_12, 0,129f);
						}
						else
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x6BE2EAE992FD7C26(iParam0->f_12, iParam0->f_34, 0);
							unk_0x915804B434753CBD(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x57E0CF9BF653D99A(iParam0->f_11, 0,145f);
							unk_0x57E0CF9BF653D99A(iParam0->f_12, 0,145f);
						}
						unk_0xF895E10BF4C72645(iParam0->f_36, 0, 0);
						unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
					}
					func_121(iParam0, 34);
					unk_0x0674E58A79778E99(iParam0, 15);
				}
				func_132(iParam0, 34);
				func_44(iParam0);
				if (func_130(iParam0, 34, 0))
				{
					func_75(iParam0, 18966,65f);
					unk_0x5D96D8530B3D0904(iParam0, 15);
					iParam0->f_6 = 35;
				}
				break;
			
			case 35:
				if (func_87(iParam0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 3))
					{
						if (func_130(iParam0, 34, 1100))
						{
							if (func_45(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_5", 9, 0, 0))
							{
								unk_0x5D96D8530B3D0904(&(iParam0->f_1), 3);
							}
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 4))
					{
						if (func_130(iParam0, 34, 1100))
						{
							if (func_45(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_7", 9, 0, 0))
							{
								unk_0x5D96D8530B3D0904(&(iParam0->f_1), 4);
							}
						}
					}
				}
				if (!func_87(iParam0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 3))
					{
						if (func_130(iParam0, 34, 1000))
						{
							if (func_45(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_5", 9, 0, 0))
							{
								unk_0x5D96D8530B3D0904(&(iParam0->f_1), 3);
							}
						}
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 15))
				{
					func_123(iParam0, "LAMAR_CAR_DRIVE_03", "mp_intro_seq@", -1038,78f, -2732,61f, 19,08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0x437347B10A200C4B(iParam0->f_35, 0))
					{
						unk_0x4A4806F9D471E491(iParam0->f_35, true, 0);
					}
					if (!unk_0x437347B10A200C4B(iParam0->f_36, 0))
					{
						unk_0x4A4806F9D471E491(iParam0->f_36, false, 0);
					}
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0x437347B10A200C4B(iParam0->f_34, 0))
					{
						unk_0x5B1D360B9C6F0A09(unk_0x16F2683693E537C9(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
					}
					func_121(iParam0, 35);
					unk_0x0674E58A79778E99(iParam0, 15);
				}
				func_132(iParam0, 35);
				func_44(iParam0);
				if (func_130(iParam0, 35, 0))
				{
					unk_0x5D96D8530B3D0904(iParam0, 15);
					iParam0->f_6 = 36;
				}
				break;
			
			case 36:
				if (func_87(iParam0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 5))
					{
						if (func_45(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_9", 9, 0, 0))
						{
							unk_0x5D96D8530B3D0904(&(iParam0->f_1), 5);
						}
					}
				}
				if (!func_87(iParam0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 4))
					{
						if (func_45(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_7", 9, 0, 0))
						{
							unk_0x5D96D8530B3D0904(&(iParam0->f_1), 4);
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 5))
					{
						if (func_130(iParam0, 36, -3750))
						{
							if (func_45(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_9", 9, 0, 0))
							{
								unk_0x5D96D8530B3D0904(&(iParam0->f_1), 5);
							}
						}
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 15))
				{
					if (!unk_0x437347B10A200C4B(iParam0->f_34, 0))
					{
						unk_0xC5940439E4EB9A33(iParam0->f_7, iParam0->f_34, 0,8056f, 2,2245f, 0,5533f, 1);
						unk_0x1305278186D1C53E(iParam0->f_7, iParam0->f_34, -0,4552f, -0,4977f, 0,5449f, 1);
						unk_0x5818C8D5303DCCF8(iParam0->f_7, 33,3479f);
						unk_0x91F5B0244AAE6222(iParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0xE3BB8E05FCEB3FBE(iParam0->f_7, true);
						if (!unk_0x437347B10A200C4B(iParam0->f_35, 0))
						{
							unk_0x4A4806F9D471E491(iParam0->f_35, false, 0);
						}
						if (!unk_0x437347B10A200C4B(iParam0->f_36, 0))
						{
							unk_0x4A4806F9D471E491(iParam0->f_36, true, 0);
						}
						iParam0->f_11 = -1;
						iParam0->f_11 = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x6BE2EAE992FD7C26(iParam0->f_11, iParam0->f_34, unk_0xF653B9B22DA806A9(iParam0->f_34, "seat_dside_f"));
						if (func_87(iParam0))
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x6BE2EAE992FD7C26(iParam0->f_12, iParam0->f_34, unk_0xF653B9B22DA806A9(iParam0->f_34, "seat_pside_f"));
							unk_0x915804B434753CBD(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x57E0CF9BF653D99A(iParam0->f_11, 0,363f);
							unk_0x57E0CF9BF653D99A(iParam0->f_12, 0,363f);
						}
						else
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x6BE2EAE992FD7C26(iParam0->f_12, iParam0->f_34, 0);
							unk_0x915804B434753CBD(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x57E0CF9BF653D99A(iParam0->f_11, 0,298f);
							unk_0x57E0CF9BF653D99A(iParam0->f_12, 0,298f);
						}
						unk_0xF895E10BF4C72645(iParam0->f_36, 0, 0);
						unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
					}
					func_121(iParam0, 36);
					unk_0x0674E58A79778E99(iParam0, 15);
				}
				func_132(iParam0, 36);
				func_44(iParam0);
				if (func_130(iParam0, 36, 0))
				{
					func_75(iParam0, 42700,96f);
					unk_0x5D96D8530B3D0904(iParam0, 15);
					iParam0->f_6 = 37;
				}
				break;
			
			case 37:
				if (func_87(iParam0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 6))
					{
						if (func_45(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_11", 9, 0, 0))
						{
							unk_0x5D96D8530B3D0904(&(iParam0->f_1), 6);
						}
					}
				}
				if (!func_87(iParam0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 6))
					{
						if (func_130(iParam0, 36, 1000))
						{
							if (func_45(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_11", 9, 0, 0))
							{
								unk_0x5D96D8530B3D0904(&(iParam0->f_1), 6);
							}
						}
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 15))
				{
					func_123(iParam0, "LAMAR_CAR_DRIVE_05", "mp_intro_seq@", -1038,78f, -2732,61f, 19,08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0x437347B10A200C4B(iParam0->f_35, 0))
					{
						unk_0x4A4806F9D471E491(iParam0->f_35, true, 0);
					}
					if (!unk_0x437347B10A200C4B(iParam0->f_36, 0))
					{
						unk_0x4A4806F9D471E491(iParam0->f_36, false, 0);
					}
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0x437347B10A200C4B(iParam0->f_34, 0))
					{
						unk_0x5B1D360B9C6F0A09(unk_0x16F2683693E537C9(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
					}
					func_121(iParam0, 37);
					unk_0x0674E58A79778E99(iParam0, 15);
				}
				func_132(iParam0, 37);
				func_44(iParam0);
				if (func_130(iParam0, 37, 0))
				{
					func_75(iParam0, 51033,28f);
					unk_0x5D96D8530B3D0904(iParam0, 15);
					iParam0->f_6 = 38;
				}
				break;
			
			case 38:
				if (func_87(iParam0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 7))
					{
						if (func_45(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_13", 9, 0, 0))
						{
							unk_0x5D96D8530B3D0904(&(iParam0->f_1), 7);
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 8))
					{
						if (func_45(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_15", 9, 0, 0))
						{
							unk_0x5D96D8530B3D0904(&(iParam0->f_1), 8);
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 9))
					{
						if (func_45(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_17", 9, 0, 0))
						{
							unk_0x5D96D8530B3D0904(&(iParam0->f_1), 9);
						}
					}
				}
				if (!func_87(iParam0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 7))
					{
						if (func_130(iParam0, 37, 2500))
						{
							if (func_45(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_13", 9, 0, 0))
							{
								unk_0x5D96D8530B3D0904(&(iParam0->f_1), 7);
							}
						}
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 15))
				{
					func_123(iParam0, "LAMAR_CAR_DRIVE_07", "mp_intro_seq@", -1038,78f, -2732,61f, 19,08f, 0f, 0f, 0f, 0, 1065353216);
					func_121(iParam0, 38);
					unk_0x0674E58A79778E99(iParam0, 15);
				}
				func_132(iParam0, 38);
				func_44(iParam0);
				if (func_130(iParam0, 38, 0))
				{
					unk_0x5D96D8530B3D0904(iParam0, 15);
					iParam0->f_6 = 39;
				}
				break;
			
			case 39:
				if (!func_87(iParam0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 8))
					{
						if (func_45(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_15", 9, 0, 0))
						{
							unk_0x5D96D8530B3D0904(&(iParam0->f_1), 8);
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 9))
					{
						if (func_45(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_17", 9, 0, 0))
						{
							unk_0x5D96D8530B3D0904(&(iParam0->f_1), 9);
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 31))
					{
						if (func_45(&(iParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							unk_0x5D96D8530B3D0904(&(iParam0->f_1), 31);
						}
					}
				}
				if (func_87(iParam0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 31))
					{
						if (func_45(&(iParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							unk_0x5D96D8530B3D0904(&(iParam0->f_1), 31);
						}
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 15))
				{
					if (!unk_0x437347B10A200C4B(iParam0->f_34, 0))
					{
						unk_0xC5940439E4EB9A33(iParam0->f_7, iParam0->f_34, 0,8056f, 2,2245f, 0,5533f, 1);
						unk_0x1305278186D1C53E(iParam0->f_7, iParam0->f_34, -0,4552f, -0,4977f, 0,5449f, 1);
						unk_0x5818C8D5303DCCF8(iParam0->f_7, 33,3479f);
						unk_0x91F5B0244AAE6222(iParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0xE3BB8E05FCEB3FBE(iParam0->f_7, true);
						if (!unk_0x437347B10A200C4B(iParam0->f_35, 0))
						{
							unk_0x4A4806F9D471E491(iParam0->f_35, false, 0);
						}
						if (!unk_0x437347B10A200C4B(iParam0->f_36, 0))
						{
							unk_0x4A4806F9D471E491(iParam0->f_36, true, 0);
						}
						iParam0->f_11 = -1;
						iParam0->f_11 = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x6BE2EAE992FD7C26(iParam0->f_11, iParam0->f_34, unk_0xF653B9B22DA806A9(iParam0->f_34, "seat_dside_f"));
						if (func_87(iParam0))
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x6BE2EAE992FD7C26(iParam0->f_12, iParam0->f_34, unk_0xF653B9B22DA806A9(iParam0->f_34, "seat_pside_f"));
							unk_0x915804B434753CBD(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x57E0CF9BF653D99A(iParam0->f_11, 0,811f);
							unk_0x57E0CF9BF653D99A(iParam0->f_12, 0,811f);
						}
						else
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x6BE2EAE992FD7C26(iParam0->f_12, iParam0->f_34, 0);
							unk_0x915804B434753CBD(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x57E0CF9BF653D99A(iParam0->f_11, 0,791f);
							unk_0x57E0CF9BF653D99A(iParam0->f_12, 0,791f);
						}
						unk_0xF895E10BF4C72645(iParam0->f_36, 0, 0);
						unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
					}
					func_121(iParam0, 39);
					unk_0x0674E58A79778E99(iParam0, 15);
				}
				func_132(iParam0, 39);
				func_44(iParam0);
				if (func_130(iParam0, 39, 0))
				{
					func_75(iParam0, 85050f);
					unk_0x5D96D8530B3D0904(iParam0, 15);
					iParam0->f_6 = 40;
				}
				break;
			
			case 40:
				if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 31))
				{
					if (func_45(&(iParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
					{
						unk_0x5D96D8530B3D0904(&(iParam0->f_1), 31);
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 15))
				{
					func_123(iParam0, "LAMAR_CAR_DRIVE_10", "mp_intro_seq@", -1038,78f, -2732,61f, 19,08f, 0f, 0f, 0f, 0, 1065353216);
					unk_0x44E5AE27B5A88FC7(9, 12, 9, 12);
					if (!unk_0x437347B10A200C4B(iParam0->f_35, 0))
					{
						unk_0x4A4806F9D471E491(iParam0->f_35, true, 0);
					}
					if (!unk_0x437347B10A200C4B(iParam0->f_36, 0))
					{
						unk_0x4A4806F9D471E491(iParam0->f_36, false, 0);
					}
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0x437347B10A200C4B(iParam0->f_34, 0))
					{
						unk_0x5B1D360B9C6F0A09(unk_0x16F2683693E537C9(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
					}
					func_121(iParam0, 40);
					unk_0x0674E58A79778E99(iParam0, 15);
				}
				func_132(iParam0, 40);
				if (func_44(iParam0) && func_130(iParam0, 40, 0))
				{
					func_75(iParam0, 116366,5f);
					unk_0x5D96D8530B3D0904(iParam0, 15);
					iParam0->f_6 = 41;
				}
				break;
			
			case 41:
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 15))
				{
					unk_0xF60E6F759DB05AEB(0, 0, 0);
					func_123(iParam0, "LAMAR_CAR_DRIVE_12", "mp_intro_seq@", -1038,78f, -2732,61f, 19,08f, 0f, 0f, 0f, 0,235f, 0,75f);
					func_121(iParam0, 41);
					unk_0x1103ADBBBB13BAC6("CONTRAILS", 0);
					unk_0x0674E58A79778E99(iParam0, 15);
				}
				func_132(iParam0, 41);
				if (func_130(iParam0, 41, 0))
				{
					unk_0x6B3A6ADC56C477EC(1);
					func_75(iParam0, 127166,5f);
					unk_0x5D96D8530B3D0904(iParam0, 15);
					iParam0->f_6 = 42;
				}
				break;
			
			case 42:
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 15))
				{
					func_43(iParam0);
					func_123(iParam0, "LAMAR_CAR_DRIVE_14", "mp_intro_seq@", -1038,78f, -2732,61f, 19,08f, 0f, 0f, 0f, 0, 1065353216);
					func_121(iParam0, 42);
					unk_0x0674E58A79778E99(iParam0, 15);
				}
				func_132(iParam0, 42);
				if (func_130(iParam0, 42, 0))
				{
					unk_0x6B3A6ADC56C477EC(0);
					func_75(iParam0, 170800f);
					unk_0x5D96D8530B3D0904(iParam0, 15);
					iParam0->f_6 = 43;
				}
				break;
			
			case 43:
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 15))
				{
					func_123(iParam0, "LAMAR_CAR_DRIVE_17", "mp_intro_seq@", -1038,78f, -2732,61f, 19,08f, 0f, 0f, 0f, 0, 1065353216);
					func_121(iParam0, 43);
					unk_0x0674E58A79778E99(iParam0, 15);
				}
				func_132(iParam0, 43);
				if (func_130(iParam0, 43, 0))
				{
					unk_0x44E5AE27B5A88FC7(9, 12, 9, 12);
					func_75(iParam0, 191799,8f);
					unk_0x5D96D8530B3D0904(iParam0, 15);
					iParam0->f_6 = 44;
				}
				break;
			
			case 44:
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 15))
				{
					func_123(iParam0, "LAMAR_CAR_DRIVE_19", "mp_intro_seq@", -1038,78f, -2732,61f, 19,08f, 0f, 0f, 0f, 0, 1065353216);
					func_121(iParam0, 44);
					unk_0x0674E58A79778E99(iParam0, 15);
				}
				func_132(iParam0, 44);
				if (func_130(iParam0, 44, 0))
				{
					func_75(iParam0, 196633,1f);
					unk_0x5D96D8530B3D0904(iParam0, 15);
					iParam0->f_6 = 45;
				}
				break;
			
			case 45:
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 15))
				{
					func_123(iParam0, "LAMAR_CAR_DRIVE_20", "mp_intro_seq@", -1038,78f, -2732,61f, 19,08f, 0f, 0f, 0f, 0, 1065353216);
					func_121(iParam0, 45);
					unk_0x0674E58A79778E99(iParam0, 15);
				}
				func_132(iParam0, 45);
				if (func_130(iParam0, 45, 0))
				{
					func_75(iParam0, 201466,5f);
					unk_0x5D96D8530B3D0904(iParam0, 15);
					iParam0->f_6 = 46;
				}
				break;
			
			case 46:
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 15))
				{
					func_123(iParam0, "LAMAR_CAR_DRIVE_21", "mp_intro_seq@", -1038,78f, -2732,61f, 19,08f, 0f, 0f, 0f, 0, 1065353216);
					func_121(iParam0, 46);
					unk_0x0674E58A79778E99(iParam0, 15);
				}
				func_132(iParam0, 46);
				if (func_130(iParam0, 46, 0))
				{
					unk_0x5D96D8530B3D0904(iParam0, 15);
					iParam0->f_6 = 47;
				}
				break;
			
			case 47:
				func_41(iParam0);
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 15))
				{
					if (!unk_0x437347B10A200C4B(iParam0->f_34, 0))
					{
						unk_0xC5940439E4EB9A33(iParam0->f_7, iParam0->f_34, 0,8056f, 2,2245f, 0,5533f, 1);
						unk_0x1305278186D1C53E(iParam0->f_7, iParam0->f_34, -0,4552f, -0,4977f, 0,5449f, 1);
						unk_0x5818C8D5303DCCF8(iParam0->f_7, 33,3479f);
						unk_0x91F5B0244AAE6222(iParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0xE3BB8E05FCEB3FBE(iParam0->f_7, true);
						if (!unk_0x437347B10A200C4B(iParam0->f_35, 0))
						{
							unk_0x4A4806F9D471E491(iParam0->f_35, false, 0);
						}
						if (!unk_0x437347B10A200C4B(iParam0->f_36, 0))
						{
							unk_0x4A4806F9D471E491(iParam0->f_36, true, 0);
						}
						iParam0->f_11 = -1;
						iParam0->f_11 = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x6BE2EAE992FD7C26(iParam0->f_11, iParam0->f_34, unk_0xF653B9B22DA806A9(iParam0->f_34, "seat_dside_f"));
						if (func_87(iParam0))
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x6BE2EAE992FD7C26(iParam0->f_12, iParam0->f_34, unk_0xF653B9B22DA806A9(iParam0->f_34, "seat_pside_f"));
							unk_0x915804B434753CBD(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x57E0CF9BF653D99A(iParam0->f_11, 0,726f);
							unk_0x57E0CF9BF653D99A(iParam0->f_12, 0,74f);
						}
						else
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x6BE2EAE992FD7C26(iParam0->f_12, iParam0->f_34, 0);
							unk_0x915804B434753CBD(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x57E0CF9BF653D99A(iParam0->f_11, 0,726f);
							unk_0x57E0CF9BF653D99A(iParam0->f_12, 0,815f);
						}
						unk_0xF895E10BF4C72645(iParam0->f_36, 0, 0);
						unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
					}
					func_121(iParam0, 47);
					unk_0x0674E58A79778E99(iParam0, 15);
				}
				func_132(iParam0, 47);
				if (func_130(iParam0, 47, 0))
				{
					func_75(iParam0, 213066,4f);
					unk_0x5D96D8530B3D0904(iParam0, 15);
					iParam0->f_6 = 48;
				}
				break;
			
			case 48:
				func_41(iParam0);
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 15))
				{
					func_123(iParam0, "LAMAR_CAR_DRIVE_24", "mp_intro_seq@", -1038,78f, -2732,61f, 19,08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0x437347B10A200C4B(iParam0->f_35, 0))
					{
						unk_0x4A4806F9D471E491(iParam0->f_35, true, 0);
					}
					if (!unk_0x437347B10A200C4B(iParam0->f_36, 0))
					{
						unk_0x4A4806F9D471E491(iParam0->f_36, false, 0);
					}
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0x437347B10A200C4B(iParam0->f_34, 0))
					{
						unk_0x5B1D360B9C6F0A09(unk_0x16F2683693E537C9(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
					}
					func_121(iParam0, 48);
					unk_0x0674E58A79778E99(iParam0, 15);
				}
				func_132(iParam0, 48);
				if (func_130(iParam0, 48, 0))
				{
					unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_142), 3);
					func_40(iParam0, 10177,75f);
					unk_0x5D96D8530B3D0904(iParam0, 15);
					iParam0->f_6 = 49;
				}
				break;
			
			case 49:
				func_41(iParam0);
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 15))
				{
					func_123(iParam0, "LAMAR_CAR_DRIVE_25", "mp_intro_seq@", -1038,78f, -2732,61f, 19,08f, 0f, 0f, 0f, 0, 1065353216);
					func_121(iParam0, 49);
					unk_0x0674E58A79778E99(iParam0, 15);
				}
				func_132(iParam0, 49);
				if (unk_0x13896FDECC859926("FM_INTRO_DRIVE_END") && func_130(iParam0, 49, 0))
				{
					func_38(iParam0, 4500f);
					unk_0x5D96D8530B3D0904(iParam0, 15);
					iParam0->f_6 = 50;
				}
				break;
			
			case 50:
				func_41(iParam0);
				if (!unk_0x0F1CCD77290EE12F())
				{
					if (!unk_0x7BCE0E6DD4A1F749())
					{
						unk_0x82E51BCA72537B6C(250);
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 15))
				{
					func_123(iParam0, "LAMAR_CAR_DRIVE_26", "mp_intro_seq@", -197,9f, 301f, 96,4f, 0f, 0f, 180f, 0, 1065353216);
					if (iParam0->f_292)
					{
						unk_0xF59BE6DDBCFD2F1C();
						unk_0x0674E58A79778E99(iParam0, 11);
					}
					func_121(iParam0, 50);
					unk_0x0674E58A79778E99(iParam0, 15);
				}
				if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 20))
				{
					if (func_87(iParam0))
					{
						unk_0xAE1670DD12E839C3("MP_INT_MCS_5_ALT2", 8);
					}
					else
					{
						unk_0xAE1670DD12E839C3("MP_INT_MCS_5_ALT1", 8);
					}
					if (iParam0->f_295)
					{
						if (unk_0x75EECC9B0572F772())
						{
							if (func_87(iParam0))
							{
								unk_0xCB667BE6562FEBD1("MP_Female_Character", 0, 1);
							}
							else
							{
								unk_0xCB667BE6562FEBD1("MP_1", 0, 1);
							}
						}
					}
					if (unk_0x62A1F4500E8F07E0())
					{
						unk_0x5D96D8530B3D0904(iParam0, 20);
					}
				}
				func_132(iParam0, 50);
				if (!unk_0x437347B10A200C4B(iParam0->f_34, 0))
				{
					if (unk_0x20D6474D5F4B9FC6(iParam0->f_34))
					{
						if (unk_0x9C66D99E63E8E24C(iParam0->f_34) < 1f)
						{
							unk_0xC55F2A0377488064(iParam0->f_34);
						}
					}
				}
				if (func_130(iParam0, 50, 0) && unk_0xEAE0D21A50E6C7F4(*iParam0, 20))
				{
					if (unk_0xEAE0D21A50E6C7F4(*iParam0, 21))
					{
						unk_0xC92DB9682A650680("FM_INTRO_DRIVE_END");
						unk_0x0674E58A79778E99(iParam0, 21);
					}
					unk_0xC55F2A0377488064(iParam0->f_34);
					iParam0->f_6 = 51;
				}
				break;
			
			case 51:
				if (iParam0->f_295)
				{
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
					{
						if (func_87(iParam0))
						{
							unk_0x29E8331978B73E7F(unk_0x16F2683693E537C9(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							unk_0x29E8331978B73E7F(unk_0x16F2683693E537C9(), "MP_1", 0, 0, 0);
						}
					}
				}
				if (!unk_0x437347B10A200C4B(iParam0->f_35, 0))
				{
					unk_0x29E8331978B73E7F(iParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!unk_0x437347B10A200C4B(iParam0->f_34, 0))
				{
					unk_0x29E8331978B73E7F(iParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				unk_0x5D96D8530B3D0904(iParam0, 13);
				if (unk_0x562F77A7F33D2E46("MP_INTRO_LAMAR_DRIVE_SCENE"))
				{
					unk_0x8910D3D58E0132B8("MP_INTRO_LAMAR_DRIVE_SCENE");
				}
				unk_0x4C902758BEA97C68(4);
				func_77(1, 1, 1, 0, 0, 0);
				iParam0->f_6 = 52;
				break;
			
			case 52:
				if (unk_0x22A8E52414415B76())
				{
					unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
					if (iParam0->f_293)
					{
						iParam0->f_30 = (unk_0x1C0640BA9A7327B3() - iParam0->f_13);
					}
					else
					{
						iParam0->f_30 = func_37(iParam0);
					}
					iParam0->f_14 = 0;
					iParam0->f_6 = 53;
				}
				break;
			
			case 53:
				if (iParam0->f_295)
				{
					if (func_87(iParam0))
					{
						if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 23))
						{
							if (unk_0x3148AE92ED70DC30("MP_Female_Character", 0))
							{
								if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
								{
									unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -200,8225f, 302,9014f, 95,9455f, 1, false, 0, 1);
									vVar1 = { Vector(95,9465f, 307,0503f, -210,3399f) - Vector(95,9455f, 302,9014f, -200,8225f) };
									unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), unk_0xE7D606C557C86100(vVar1.x, vVar1.y));
									unk_0x2FB9A57162E54BAB(0f);
									unk_0xEF6276132B396452(0f, 1065353216);
									unk_0x5D96D8530B3D0904(iParam0, 23);
								}
							}
						}
					}
					else if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 23))
					{
						if (unk_0x3148AE92ED70DC30("MP_1", 0))
						{
							if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
							{
								unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -200,8225f, 302,9014f, 95,9455f, 1, false, 0, 1);
								vVar1 = { Vector(95,9465f, 307,0503f, -210,3399f) - Vector(95,9455f, 302,9014f, -200,8225f) };
								unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), unk_0xE7D606C557C86100(vVar1.x, vVar1.y));
								unk_0x2FB9A57162E54BAB(0f);
								unk_0xEF6276132B396452(0f, 1065353216);
								unk_0x5D96D8530B3D0904(iParam0, 23);
							}
						}
					}
				}
				if (unk_0x3148AE92ED70DC30("LAMAR", 0))
				{
					if (unk_0xDF1306B443CD3D15(iParam0->f_34, 0))
					{
						if (!unk_0xEB6A8945D1AC98A1(iParam0->f_35))
						{
							if (!unk_0x405E212DDE472467(iParam0->f_35, 0))
							{
								unk_0x5B1D360B9C6F0A09(iParam0->f_35, iParam0->f_34, 20000, -1, 1f, 1048592, 0);
							}
						}
					}
				}
				if (unk_0x3148AE92ED70DC30("MP_Lamar_Car", 0))
				{
					if (unk_0xDF1306B443CD3D15(iParam0->f_34, 0))
					{
						unk_0xB9FD7450C0DAB575(iParam0->f_34, 1084227584);
					}
				}
				if (unk_0xEABED1927EFB48CA(0))
				{
					func_36(1);
					unk_0x2FB9A57162E54BAB(0f);
					unk_0xEF6276132B396452(0f, 1065353216);
				}
				if (!func_35(unk_0xD803B885F5E47A62()))
				{
					func_34(1);
				}
				if (unk_0x22A8E52414415B76())
				{
					if (iParam0->f_293)
					{
						iParam0->f_13 = (unk_0x1C0640BA9A7327B3() - (iParam0->f_30 + unk_0x8F677B1F58B4741C()));
					}
					switch (iParam0->f_14)
					{
						case 0:
							func_33(iParam0, 0);
							break;
						
						case 10:
							func_33(iParam0, 1);
							break;
						
						case 20:
							func_33(iParam0, 2);
							break;
						
						case 30:
							func_33(iParam0, 3);
							break;
						
						case 40:
							func_33(iParam0, 4);
							break;
						
						case 50:
							func_33(iParam0, 5);
							break;
						
						case 60:
							func_33(iParam0, 6);
							break;
						
						case 70:
							func_33(iParam0, 7);
							break;
						
						case 80:
							func_33(iParam0, 8);
							break;
						
						case 90:
							func_33(iParam0, 9);
							break;
						
						case 100:
							if (unk_0xC844350D5D58C99A(iParam0->f_36))
							{
								unk_0xEBA53F35D0085654(&(iParam0->f_36));
							}
							break;
					}
					iParam0->f_14++;
				}
				else
				{
					unk_0xDC355804A9511111();
					unk_0x386090053886DF05();
					if (!unk_0x154B5473FBFD0156())
					{
						unk_0x55BE34EDDEA0AC9E(0);
					}
					func_77(0, 1, 1, 0, 0, 0);
					unk_0x0674E58A79778E99(iParam0, 13);
					iParam0->f_6 = 57;
				}
				break;
			
			case 55:
				if (unk_0x22A8E52414415B76())
				{
					unk_0x152C90FB9FE48DAC();
				}
				else if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 17))
				{
					if (unk_0x757EF87A33649210())
					{
						unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
						unk_0x5D96D8530B3D0904(iParam0, 13);
						unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -195,2f, 307,1825f, 95,9455f, 1, false, 0, 1);
						unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), true);
						if (iParam0->f_292)
						{
							unk_0xF59BE6DDBCFD2F1C();
							unk_0x0674E58A79778E99(iParam0, 11);
						}
						func_135(&(iParam0->f_17));
						func_207(&(iParam0->f_17), 0, 0);
						unk_0x5D96D8530B3D0904(iParam0, 17);
					}
					else if (!unk_0xD0BB2359EC70FC37())
					{
						unk_0x53491B90E4FD0E56(250);
					}
				}
				else if (func_134(&(iParam0->f_17), 10000, 0))
				{
					if (func_32(iParam0))
					{
						func_124(iParam0);
						func_70(iParam0);
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), false);
							if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
							{
								unk_0x20641932E5104B25(unk_0x16F2683693E537C9(), true, 0);
								unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -200,8225f, 302,9014f, 95,9455f, 1, false, 0, 1);
								unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 61,3164f);
							}
						}
						if (!unk_0xEB6A8945D1AC98A1(iParam0->f_35))
						{
							if (!unk_0x405E212DDE472467(iParam0->f_35, 0))
							{
								if (unk_0xDF1306B443CD3D15(iParam0->f_34, 0))
								{
									unk_0x5B1D360B9C6F0A09(iParam0->f_35, iParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						func_36(1);
						if (!func_35(unk_0xD803B885F5E47A62()))
						{
							func_34(1);
						}
						func_77(0, 1, 1, 0, 0, 0);
						unk_0xF60E6F759DB05AEB(0, 0, 0);
						if (unk_0xEAE0D21A50E6C7F4(*iParam0, 21))
						{
							unk_0xC92DB9682A650680("FM_INTRO_DRIVE_END");
							unk_0x0674E58A79778E99(iParam0, 21);
						}
						unk_0x5D96D8530B3D0904(iParam0, 1);
						unk_0x5D96D8530B3D0904(iParam0, 15);
						iParam0->f_6 = 57;
					}
				}
				break;
			
			case 56:
				if (unk_0x22A8E52414415B76())
				{
					unk_0x152C90FB9FE48DAC();
				}
				else if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 17))
				{
					if (unk_0x757EF87A33649210())
					{
						unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
						unk_0x5D96D8530B3D0904(iParam0, 13);
						unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -195,2f, 307,1825f, 95,9455f, 1, false, 0, 1);
						unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), true);
						if (iParam0->f_292)
						{
							unk_0xF59BE6DDBCFD2F1C();
							unk_0x0674E58A79778E99(iParam0, 11);
						}
						func_135(&(iParam0->f_17));
						func_207(&(iParam0->f_17), 0, 0);
						unk_0x5D96D8530B3D0904(iParam0, 17);
					}
					else if (!unk_0xD0BB2359EC70FC37())
					{
						unk_0x53491B90E4FD0E56(250);
					}
				}
				else if (func_134(&(iParam0->f_17), 10000, 0))
				{
					if (func_108(iParam0))
					{
						func_124(iParam0);
						func_70(iParam0);
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), false);
							if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
							{
								unk_0x20641932E5104B25(unk_0x16F2683693E537C9(), true, 0);
								unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -200,8225f, 302,9014f, 95,9455f, 1, false, 0, 1);
								unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 61,3164f);
								if (unk_0xDF1306B443CD3D15(iParam0->f_34, 0))
								{
									unk_0x5B1D360B9C6F0A09(unk_0x16F2683693E537C9(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
						if (!unk_0xEB6A8945D1AC98A1(iParam0->f_35))
						{
							if (!unk_0x405E212DDE472467(iParam0->f_35, 0))
							{
								if (unk_0xDF1306B443CD3D15(iParam0->f_34, 0))
								{
									unk_0x5B1D360B9C6F0A09(iParam0->f_35, iParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						if (!func_35(unk_0xD803B885F5E47A62()))
						{
						}
						func_77(0, 1, 1, 0, 0, 0);
						if (unk_0xEAE0D21A50E6C7F4(*iParam0, 21))
						{
							unk_0xC92DB9682A650680("FM_INTRO_DRIVE_END");
							unk_0x0674E58A79778E99(iParam0, 21);
						}
						unk_0x82E51BCA72537B6C(250);
						unk_0xF60E6F759DB05AEB(0, 0, 0);
						unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_142), 3);
						iParam0->f_13 = (unk_0x1C0640BA9A7327B3() - func_29(iParam0, 48, 0));
						iParam0->f_293 = 1;
						func_40(iParam0, 10177,75f);
						unk_0x5D96D8530B3D0904(iParam0, 15);
						iParam0->f_6 = 49;
					}
				}
				break;
			
			case 57:
				func_132(iParam0, 57);
				bVar8 = !iParam0->f_288;
				func_14(iParam0, bVar8, 0);
				if (iParam0->f_292)
				{
					unk_0xF59BE6DDBCFD2F1C();
					unk_0x0674E58A79778E99(iParam0, 11);
				}
				if (!unk_0xEB6A8945D1AC98A1(iParam0->f_35))
				{
					unk_0x93D47DFD0AE94949(iParam0->f_35, -1);
					unk_0xFADC0A217229F6B5(iParam0->f_35, true);
				}
				unk_0x7F2C3F971FA7A9EA(1);
				if (!iParam0->f_288)
				{
					func_10(115, 1, -1, 1);
					return 1;
				}
				break;
			
			case 58:
				break;
			
			case 54:
				break;
			
			case 59:
				return 1;
				break;
		}
		func_9(iParam0);
		if (!iParam0->f_291)
		{
			if (iParam0->f_293)
			{
				iParam0->f_289 = to_float((unk_0x1C0640BA9A7327B3() - iParam0->f_13));
			}
			else
			{
				iParam0->f_289 = to_float(func_37(iParam0));
			}
			iParam0->f_290 = func_8(iParam0);
		}
		iParam0->f_291 = 0;
		if (iParam0->f_292 && unk_0xEAE0D21A50E6C7F4(*iParam0, 11))
		{
			if (iParam0->f_293)
			{
				unk_0x0AEDBE1D61D150AF(iParam0->f_289);
			}
			else
			{
				unk_0x0AEDBE1D61D150AF(iParam0->f_290);
			}
		}
		func_5(iParam0);
		if (unk_0xEAE0D21A50E6C7F4(*iParam0, 12))
		{
			if (func_97())
			{
				func_4();
			}
		}
		if (iParam0->f_6 > 0 && iParam0->f_6 <= 57)
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 60);
				}
			}
			func_2(iParam0);
			unk_0x857E3CE01DEA2D26();
			unk_0x3584F71E5CA29322(9);
			unk_0x3584F71E5CA29322(7);
			unk_0x3584F71E5CA29322(18);
			unk_0x3584F71E5CA29322(6);
			unk_0x3584F71E5CA29322(3);
			unk_0x3584F71E5CA29322(13);
			unk_0x3584F71E5CA29322(4);
		}
		if (Global_2537071.f_1853)
		{
			unk_0xEAB026E686C0D991(2, 187, 1);
		}
	}
	return 0;
}

void func_2(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 9))
	{
		if (iParam0->f_6 > 0)
		{
			if (!unk_0x09BE1E6DF7B80B43())
			{
				if (!unk_0xF35E2CBC969C0B53())
				{
					iVar0 = unk_0xD803B885F5E47A62() + 32;
					unk_0x804733198F0CB21A(1, iVar0);
					func_3(1);
					unk_0x5D96D8530B3D0904(iParam0, 9);
				}
			}
			else
			{
				func_3(1);
				unk_0x5D96D8530B3D0904(iParam0, 9);
			}
		}
	}
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_142, 18))
		{
			unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_142), 18);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_142, 18))
	{
		unk_0x0674E58A79778E99(&(Global_1590535[unk_0xD803B885F5E47A62()].f_142), 18);
	}
}

void func_4()
{
	unk_0x6567AE843FADBA94(Global_1315685, 255, 255, 255, 255, 0);
	if (Global_1315687 == 0)
	{
		unk_0x7E60C62A7CE58FC8(Global_1315685, "SET_BIG_LOGO_VISIBLE");
		unk_0x3CAEA85DA607305E(1);
		unk_0x1200CC973A2399C8(true);
		unk_0x7E60D21B163E9D56();
		Global_1315687 = 1;
	}
}

void func_5(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0->f_58[iParam0->f_90]))
	{
		if (unk_0x437347B10A200C4B(iParam0->f_58[iParam0->f_90], 0))
		{
		}
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0->f_58[iParam0->f_90], true) };
		if (vVar0.z < -50f)
		{
			func_6(iParam0, iParam0->f_90);
		}
	}
	iParam0->f_90++;
	if (iParam0->f_90 >= 15)
	{
		iParam0->f_90 = 0;
	}
}

void func_6(var uParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_58[iParam1]))
	{
		if (unk_0x437347B10A200C4B(uParam0->f_58[iParam1], 0))
		{
		}
		func_7(iParam1, &vVar0, &fVar3);
		unk_0xA47B46945FF6DE74(uParam0->f_58[iParam1], vVar0, 1, false, 0, 1);
		unk_0xD8F6A53F4799FAFE(uParam0->f_58[iParam1], fVar3);
		unk_0x1E9649458B15960F(uParam0->f_58[iParam1], true);
		unk_0x51B954DAB1BCAF73(uParam0->f_58[iParam1]);
		unk_0x20641932E5104B25(uParam0->f_58[iParam1], false, 0);
		unk_0x4A4806F9D471E491(uParam0->f_58[iParam1], false, 0);
	}
	if (unk_0xC844350D5D58C99A(uParam0->f_74[iParam1]))
	{
		if (unk_0x437347B10A200C4B(uParam0->f_74[iParam1], 0))
		{
		}
		unk_0x4A4806F9D471E491(uParam0->f_74[iParam1], false, 0);
	}
}

void func_7(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -285,8592f, -914,3868f, 30,08f };
			*uParam2 = 77,3101f;
			break;
		
		case 1:
			*uParam1 = { -303,4057f, -910,434f, 30,0797f };
			*uParam2 = 77,3122f;
			break;
		
		case 2:
			*uParam1 = { -328,6838f, -905,0965f, 30,0783f };
			*uParam2 = 74,4975f;
			break;
		
		case 3:
			*uParam1 = { -353,6149f, -896,1278f, 30,0707f };
			*uParam2 = 358,6274f;
			break;
		
		case 4:
			*uParam1 = { -354,2628f, -915,5025f, 30,08f };
			*uParam2 = 358,0417f;
			break;
		
		case 5:
			*uParam1 = { -354,6489f, -935,3478f, 30,08f };
			*uParam2 = 0,5678f;
			break;
		
		case 6:
			*uParam1 = { -354,4816f, -953,4573f, 30,08f };
			*uParam2 = 0,4572f;
			break;
		
		case 7:
			*uParam1 = { -343,5193f, -967,0103f, 30,08f };
			*uParam2 = 247,6961f;
			break;
		
		case 8:
			*uParam1 = { -324,7872f, -974,6605f, 30,08f };
			*uParam2 = 247,7728f;
			break;
		
		case 9:
			*uParam1 = { -301,3824f, -977,9114f, 30,08f };
			*uParam2 = 249,2065f;
			break;
		
		case 10:
			*uParam1 = { -342,4198f, -1019,456f, 29,3849f };
			*uParam2 = 250,0953f;
			break;
		
		case 11:
			*uParam1 = { -317,1607f, -1025,859f, 29,3849f };
			*uParam2 = 250,7381f;
			break;
		
		case 12:
			*uParam1 = { -302,658f, -1022,401f, 29,385f };
			*uParam2 = 244,0013f;
			break;
		
		case 13:
			*uParam1 = { -283,3195f, -1029,469f, 29,385f };
			*uParam2 = 252,7933f;
			break;
		
		case 14:
			*uParam1 = { -276,4286f, -1013,534f, 29,385f };
			*uParam2 = 339,4764f;
			break;
	}
}

float func_8(int iParam0)
{
	if (iParam0->f_6 >= 31 && iParam0->f_6 < 33)
	{
		if (func_87(iParam0))
		{
			fVar0 = to_float((iParam0->f_27 + unk_0x8F677B1F58B4741C()));
			if (unk_0x90AE01DE9DD05E85() > 2)
			{
				fVar1 = ((fVar0 - 134735f) / to_float(52633));
				fVar0 = (83986f + (fVar1 * 50715f));
			}
		}
		else
		{
			fVar0 = to_float((iParam0->f_27 + unk_0x8F677B1F58B4741C()));
		}
		return fVar0;
	}
	return iParam0->f_289;
}

void func_9(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(*iParam0, 29))
	{
		unk_0x50BF1402EC7719E3(-1160,942f, -1657,686f, 5,129621f, 0,8912546f, -0,3982928f, -0,2168599f, 226, 130, 78, 3,999999f, 6,6f, 1f, 30f, 1f);
		unk_0x50BF1402EC7719E3(-1157,324f, -1659,878f, 5,449264f, -0,8403507f, 0,3984679f, -0,3674699f, 226, 130, 78, 3,900002f, 8,8f, 1f, 30f, 1f);
	}
}

void func_10(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_13())
	{
		iVar0 = Global_2583656[iParam0][func_11(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xD8B681091EBE4064(iVar0, iParam1, iParam3);
		}
	}
}

int func_11(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_12();
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

int func_12()
{
	return Global_1312745;
}

int func_13()
{
	return 1;
	return 0;
}

void func_14(int iParam0, bool bParam1, bool bParam2)
{
	if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0))
	{
		if (unk_0x22A8E52414415B76())
		{
			unk_0x55BE34EDDEA0AC9E(0);
		}
		unk_0x93E3BF6DC91ADAA6(0);
		if (iParam0->f_292)
		{
			unk_0xD37565245621B3E1(0);
			unk_0xF59BE6DDBCFD2F1C();
			unk_0x0674E58A79778E99(iParam0, 11);
		}
		if (unk_0xEAE0D21A50E6C7F4(*iParam0, 14))
		{
			unk_0x066C43E677C08D5C();
			unk_0x0674E58A79778E99(iParam0, 14);
		}
		func_28();
		func_71(iParam0);
		func_124(iParam0);
		func_70(iParam0);
		func_93();
		func_76(iParam0);
		func_94(iParam0);
		func_27(iParam0);
		func_43(iParam0);
		unk_0xB547E3FFEB27073E();
		if (bParam2)
		{
			if (unk_0xC844350D5D58C99A(iParam0->f_34))
			{
				unk_0x046C362CF15F1935(&(iParam0->f_34));
			}
			if (unk_0xC844350D5D58C99A(iParam0->f_35))
			{
				unk_0x6DAD7906B73F064D(&(iParam0->f_35));
			}
		}
		if (unk_0xC844350D5D58C99A(iParam0->f_36))
		{
			unk_0xEBA53F35D0085654(&(iParam0->f_36));
		}
		if (!iParam0->f_288)
		{
			func_194(0);
		}
		func_25();
		func_16();
		func_77(0, 1, 1, 0, 0, 0);
		unk_0x5413873D3F67BF93(false, -1);
		unk_0xBEF52C1D400C0A44(1);
		if (unk_0x8CD06866876216F2())
		{
			if (unk_0xF929B1A0A409FF93())
			{
				unk_0xF601BB024C8F11A7(0, 1);
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(*iParam0, 21))
		{
			unk_0xC92DB9682A650680("FM_INTRO_DRIVE_END");
			unk_0x0674E58A79778E99(iParam0, 21);
		}
		unk_0x448D99BAB1554268(0);
		func_193(1);
		if (unk_0xEAE0D21A50E6C7F4(*iParam0, 26))
		{
			func_185(1, 0);
			unk_0x0674E58A79778E99(iParam0, 26);
		}
		Global_2439138.f_3747 = 0;
		if (!unk_0x991B1F0980C62628())
		{
			unk_0x999D67A3A75B2B0A(0);
		}
		unk_0x98AB0CC3E937A146(1);
		if (bParam1)
		{
		}
		func_15(0);
		func_139(1);
		Global_2537071.f_1853 = 0;
		Global_2537071.f_1852 = 0;
		if (unk_0x562F77A7F33D2E46("MP_INTRO_RACE_SCENE"))
		{
			unk_0x8910D3D58E0132B8("MP_INTRO_RACE_SCENE");
		}
		if (unk_0x562F77A7F33D2E46("MP_INTRO_LAMAR_DRIVE_SCENE"))
		{
			unk_0x8910D3D58E0132B8("MP_INTRO_LAMAR_DRIVE_SCENE");
		}
		func_152(14, 1);
		unk_0x34D79252800B23FF(5);
		unk_0x1103ADBBBB13BAC6("CONTRAILS", 0);
		unk_0xDB8844D4B7C60440(5, "FMINTRO");
		unk_0xDB8844D4B7C60440(6, "FMINTRO");
		unk_0xDB8844D4B7C60440(7, "FMINTRO");
		unk_0x8D17794CE3273D70("mp_intro_seq@");
		unk_0x8D17794CE3273D70("mp_intro_seq@ig_1_lamar_drive_female");
		unk_0x8D17794CE3273D70("mp_intro_seq@ig_1_lamar_drive_radio");
		unk_0x8D17794CE3273D70("mp_intro_seq@ig_1_lamar_drive_male");
		if (unk_0xE4EDC4B0E92C078B(unk_0x023428EEA3027652()))
		{
			unk_0x516E63E474722206(unk_0x023428EEA3027652(), 0,7f);
		}
		unk_0xF91D0B1DCE756AFB(0);
		unk_0x2FB9A57162E54BAB(0f);
		unk_0xEF6276132B396452(0f, 1065353216);
		if (unk_0x8CD06866876216F2())
		{
			unk_0xDA46A23FFDBCF876();
			unk_0x7F2C3F971FA7A9EA(1);
		}
		unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), false);
		if (!unk_0x0F1CCD77290EE12F() && !unk_0x7BCE0E6DD4A1F749())
		{
			unk_0x82E51BCA72537B6C(800);
		}
		unk_0x5D96D8530B3D0904(iParam0, 0);
	}
}

void func_15(int iParam0)
{
	Global_2547060.f_1072 = iParam0;
}

void func_16()
{
	func_17(0);
}

void func_17(bool bParam0)
{
	if (bParam0)
	{
		func_24();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			unk_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_23(0))
		{
			func_18(0);
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

void func_18(int iParam0)
{
	if (func_22())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_21())
		{
			func_20(1, 1);
		}
		else
		{
			func_20(0, 0);
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
	if (!func_19())
	{
		Global_19486.f_1 = 3;
	}
}

int func_19()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_20(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_23(0))
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

bool func_21()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_22()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

int func_23(int iParam0)
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

void func_24()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_25()
{
	if (!Global_1312575)
	{
		return;
	}
	func_26();
}

void func_26()
{
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
}

void func_27(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_33(iParam0, iVar0);
		iVar0++;
	}
}

void func_28()
{
	unk_0x842F1AEB2FCC00B7(-533,6674f, -1961,788f, 16,82666f, -429,5074f, -1860,31f, 22,79688f, 20,5f, 1);
	unk_0x842F1AEB2FCC00B7(224,4978f, -274,7691f, 48,87971f, 263,1581f, -170,5107f, 63,18772f, 21f, 1);
}

int func_29(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 31)
	{
		iVar1 = 0;
		iVar2 = 6;
		iVar3 = 28;
	}
	else
	{
		if (bParam2)
		{
			iVar1 = iParam0->f_29;
		}
		else
		{
			iVar1 = iParam0->f_28;
		}
		iVar2 = 33;
		iVar3 = 57;
	}
	iVar0 = 0;
	while (iVar0 < (iVar3 - iVar2) + 1)
	{
		iVar4 = (iVar2 + iVar0);
		if (bParam2)
		{
			iVar1 = (iVar1 + func_31(iVar4));
		}
		else
		{
			iVar1 = (iVar1 + func_30(iVar4));
		}
		if (iParam1 == iVar4)
		{
			return iVar1;
		}
		iVar0++;
	}
	return iVar1;
}

int func_30(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 5239;
			break;
		
		case 8:
			return 5314;
			break;
		
		case 10:
			return 5274;
			break;
		
		case 14:
			return 7827;
			break;
		
		case 15:
			return 2661;
			break;
		
		case 16:
			return 2669;
			break;
		
		case 17:
			return 2491;
			break;
		
		case 18:
			return 3453;
			break;
		
		case 19:
			return 11245;
			break;
		
		case 23:
			return 2557;
			break;
		
		case 24:
			return 2059;
			break;
		
		case 28:
			return 1746;
			break;
		
		case 33:
			return 6200;
			break;
		
		case 34:
			return 2300;
			break;
		
		case 35:
			return 3933;
			break;
		
		case 36:
			return 8467;
			break;
		
		case 37:
			return 4000;
			break;
		
		case 38:
			return 7600;
			break;
		
		case 39:
			return 4700;
			break;
		
		case 40:
			return 5421;
			break;
		
		case 41:
			return 4487;
			break;
		
		case 42:
			return 4578;
			break;
		
		case 43:
			return 4664;
			break;
		
		case 44:
			return 2247;
			break;
		
		case 45:
			return 2336;
			break;
		
		case 46:
			return 3521;
			break;
		
		case 47:
			return 2510;
			break;
		
		case 48:
			return 3455;
			break;
		
		case 49:
			return 9318;
			break;
		
		case 50:
			return 2014;
			break;
		
		case 57:
			return 0;
			break;
	}
	return 0;
}

int func_31(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 5239;
			break;
		
		case 8:
			return 5314;
			break;
		
		case 10:
			return 5274;
			break;
		
		case 14:
			return 7827;
			break;
		
		case 15:
			return 2661;
			break;
		
		case 16:
			return 2669;
			break;
		
		case 17:
			return 2491;
			break;
		
		case 18:
			return 3453;
			break;
		
		case 19:
			return 11245;
			break;
		
		case 23:
			return 2557;
			break;
		
		case 24:
			return 2059;
			break;
		
		case 28:
			return 1746;
			break;
		
		case 33:
			return 6200;
			break;
		
		case 34:
			return 2300;
			break;
		
		case 35:
			return 3933;
			break;
		
		case 36:
			return 8467;
			break;
		
		case 37:
			return 4000;
			break;
		
		case 38:
			return 7600;
			break;
		
		case 39:
			return 4700;
			break;
		
		case 40:
			return 5421;
			break;
		
		case 41:
			return 4487;
			break;
		
		case 42:
			return 4578;
			break;
		
		case 43:
			return 4664;
			break;
		
		case 44:
			return 2247;
			break;
		
		case 45:
			return 2336;
			break;
		
		case 46:
			return 3521;
			break;
		
		case 47:
			return 2510;
			break;
		
		case 48:
			return 3455;
			break;
		
		case 49:
			return 9318;
			break;
		
		case 50:
			return 2014;
			break;
		
		case 57:
			return 0;
			break;
	}
	return 0;
}

int func_32(int iParam0)
{
	iVar0 = 1706635382;
	iVar1 = -685276541;
	unk_0x523BCC9DC80CD82F(iVar0);
	unk_0x523BCC9DC80CD82F(iVar1);
	if (unk_0xB87F6CF6E5628C67(iVar0) && unk_0xB87F6CF6E5628C67(iVar1))
	{
		if (!unk_0xC844350D5D58C99A(iParam0->f_34))
		{
			iParam0->f_34 = unk_0x122AAB0B1D6F55AD(iVar1, -198,221f, 301,8606f, 95,9455f, 148,1586f, 0, 0, 0);
			unk_0x5834B6B817326C89(iParam0->f_34, 1);
			unk_0x3E5CE368CD085FFA(iParam0->f_34, 0);
			unk_0xAA6B3A4292417750(iParam0->f_34, true, true, true, true, true, true, 1, false);
			unk_0x0882E3DC0C991680(iParam0->f_34, 2);
		}
		else if (!unk_0xC844350D5D58C99A(iParam0->f_35))
		{
			if (unk_0xDF1306B443CD3D15(iParam0->f_34, 0))
			{
				iParam0->f_35 = unk_0x36F2404464202779(26, iVar0, -195,2f, 307,1825f, 95,9455f, 143,6341f, 0, false);
				unk_0x11AD11297DC58CC7(iParam0->f_35, true);
				unk_0xE121AE1BBF90E186(iParam0->f_34, true);
				unk_0xE121AE1BBF90E186(iParam0->f_35, true);
				unk_0x6DF7BF67E86AAE86(iParam0->f_35, unk_0xD09DF7101876AFB8(unk_0x16F2683693E537C9()));
				unk_0xAA6B3A4292417750(iParam0->f_35, true, true, true, true, true, true, 1, false);
			}
		}
	}
	if (!unk_0xC844350D5D58C99A(iParam0->f_34) || !unk_0xC844350D5D58C99A(iParam0->f_35))
	{
		return 0;
	}
	return 1;
}

void func_33(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0->f_58[iParam1]))
	{
		unk_0xA954465BA6FDEFE2(&(iParam0->f_58[iParam1]));
	}
	if (unk_0xC844350D5D58C99A(iParam0->f_74[iParam1]))
	{
		unk_0xEBA53F35D0085654(&(iParam0->f_74[iParam1]));
	}
}

void func_34(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_146), 22);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1590535[unk_0xD803B885F5E47A62()].f_146), 22);
	}
}

bool func_35(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_146, 22);
}

void func_36(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_142), 4);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1590535[unk_0xD803B885F5E47A62()].f_142), 4);
	}
}

int func_37(int iParam0)
{
	if (iParam0->f_6 < 31)
	{
		return unk_0x94AE52F579E2F918();
	}
	if (iParam0->f_6 < 33)
	{
		return (iParam0->f_26 + unk_0x8F677B1F58B4741C());
	}
	return (iParam0->f_28 + unk_0x94AE52F579E2F918());
}

void func_38(int iParam0, float fParam1)
{
	func_39(iParam0->f_34, 7, "FMINTRO", fParam1, 1);
}

void func_39(int iParam0, int iParam1, char* sParam2, float fParam3, bool bParam4)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (bParam4)
		{
			unk_0xC55F2A0377488064(iParam0);
			unk_0x4D3C3C0B0DE2663E(iParam0, iParam1, sParam2, 1);
		}
		else if (!unk_0x20D6474D5F4B9FC6(iParam0))
		{
			unk_0x4D3C3C0B0DE2663E(iParam0, iParam1, sParam2, 1);
			unk_0xEC0EA26748A1785E(iParam0, 1);
		}
		else
		{
			iVar0 = unk_0x1A2511CB22B86C17(iParam1, sParam2);
			if (unk_0x60755EFECF81FC68(iParam0) != iVar0)
			{
				unk_0x4D3C3C0B0DE2663E(iParam0, iParam1, sParam2, 1);
				unk_0xEC0EA26748A1785E(iParam0, 1);
			}
		}
		unk_0xF12C1D85AFEE8FAD(iParam0, (fParam3 - unk_0x9901AABAC4D4C590(iParam0)));
	}
}

void func_40(int iParam0, float fParam1)
{
	func_39(iParam0->f_34, 6, "FMINTRO", fParam1, 1);
}

void func_41(int iParam0)
{
	if (!iParam0->f_296)
	{
		iVar0 = unk_0x12AB0310C2281427("ss1_rd1_03");
		iVar1 = iVar0;
		if (unk_0x3FC14104C3FD24D5(iVar1))
		{
			func_42(iVar1);
			iParam0->f_296 = 1;
		}
	}
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

void func_43(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xC844350D5D58C99A(iParam0->f_37[iVar0]))
		{
			unk_0xEBA53F35D0085654(&(iParam0->f_37[iVar0]));
		}
		iVar0++;
	}
	unk_0x71199B01895C6202(832784782);
	unk_0x8D17794CE3273D70("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
	unk_0x8D17794CE3273D70("amb@world_human_hang_out_street@male_a@base");
}

int func_44(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 5))
	{
		return 1;
	}
	else
	{
		unk_0x523BCC9DC80CD82F(832784782);
		unk_0x3F423BF5B8125A50("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		unk_0x3F423BF5B8125A50("amb@world_human_hang_out_street@male_a@base");
		if ((unk_0xB87F6CF6E5628C67(832784782) && unk_0xB4AE0788C1587752("amb@world_human_leaning@male@wall@back@foot_up@idle_a")) && unk_0xB4AE0788C1587752("amb@world_human_hang_out_street@male_a@base"))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (!unk_0xC844350D5D58C99A(iParam0->f_37[iVar0]))
				{
					iParam0->f_37[iVar0] = unk_0x36F2404464202779(4, 832784782, -85,925f, -1233,407f, 27,759f, 0f, 0, false);
					unk_0xE121AE1BBF90E186(iParam0->f_37[iVar0], true);
					unk_0x11AD11297DC58CC7(iParam0->f_37[iVar0], true);
					switch (iVar0)
					{
						case 0:
							unk_0x3E8E48829F3C7624(iParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -85,925f, -1233,407f, 27,759f, 0f, 0f, 97,75f, 1000f, -1000f, -1, 1025, 0f, 2, 0);
							break;
						
						case 1:
							unk_0x3E8E48829F3C7624(iParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -86,487f, -1232,985f, 28,759f, 0f, 0f, -110,5f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						
						case 2:
							unk_0x3E8E48829F3C7624(iParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -82,139f, -1203,525f, 26,574f, 0f, 0f, 90,75f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						
						case 3:
							unk_0x3E8E48829F3C7624(iParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -83,539f, -1203,537f, 27,549f, 0f, 0f, -85,25f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						
						case 4:
							unk_0x3E8E48829F3C7624(iParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -83,75f, -1197,136f, 26,471f, 0f, 0f, -174,5f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						
						case 5:
							unk_0xA47B46945FF6DE74(iParam0->f_37[iVar0], -82,0542f, -1199,264f, 26,592f, 1, false, 0, 1);
							unk_0xD8F6A53F4799FAFE(iParam0->f_37[iVar0], 76,8852f);
							unk_0x262EF6C6306BEA6C(iParam0->f_37[iVar0], -1074790547, 100, true, true);
							unk_0x1E9649458B15960F(iParam0->f_37[iVar0], true);
							break;
						
						case 6:
							unk_0x3E8E48829F3C7624(iParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -86f, -1222,397f, 27,417f, 0f, 0f, 98,75f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						
						case 7:
							unk_0xA47B46945FF6DE74(iParam0->f_37[iVar0], -85,5161f, -1205,781f, 26,5847f, 1, false, 0, 1);
							unk_0xD8F6A53F4799FAFE(iParam0->f_37[iVar0], 87,5786f);
							unk_0x262EF6C6306BEA6C(iParam0->f_37[iVar0], -1074790547, 100, true, true);
							unk_0x1E9649458B15960F(iParam0->f_37[iVar0], true);
							break;
						
						case 8:
							unk_0x3E8E48829F3C7624(iParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87,1f, -1221,762f, 28,367f, 0f, 0f, -85,25f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						
						case 9:
							unk_0x3E8E48829F3C7624(iParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87,063f, -1222,918f, 28,417f, 0f, 0f, -45,5f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!unk_0xC844350D5D58C99A(iParam0->f_37[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		unk_0x71199B01895C6202(832784782);
		unk_0x8D17794CE3273D70("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		unk_0x8D17794CE3273D70("amb@world_human_hang_out_street@male_a@base");
		unk_0x5D96D8530B3D0904(&(iParam0->f_3), 5);
		return 1;
	}
	return 0;
}

bool func_45(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_66(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	Global_21796 = 1;
	Global_21798 = 0;
	Global_21802 = 0;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_46(sParam2, iParam4, 0);
}

int func_46(char* sParam0, int iParam1, bool bParam2)
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
					func_65();
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
		if (func_64(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_63();
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
				func_55();
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
				if (func_54())
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
			if (func_19())
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
			func_53();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_52();
		func_47();
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
		func_65();
	}
	return 0;
}

void func_47()
{
	if (!func_48())
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

int func_48()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_51())
	{
		return 0;
	}
	if (func_49(unk_0xD803B885F5E47A62()))
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

bool func_49(int iParam0)
{
	return func_50(iParam0, 20);
}

bool func_50(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_51()
{
	return -1;
}

void func_52()
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

void func_53()
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

int func_54()
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

void func_55()
{
	if (func_62(14))
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
		Global_19486 = func_56();
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

var func_56()
{
	func_57();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_57()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_60(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_59(unk_0x16F2683693E537C9());
			if (func_58(iVar0) && (!func_62(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_58(Global_111638.f_2358.f_539.f_4321))
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

bool func_58(int iParam0)
{
	return iParam0 < 3;
}

int func_59(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_60(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_60(int iParam0)
{
	if (func_58(iParam0))
	{
		return func_61(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_61(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_62(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_63()
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

bool func_64(int iParam0, int iParam1)
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

void func_65()
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

void func_66(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_67(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 25))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			switch (iVar0)
			{
				case 0:
					vVar1 = { -1403,42f, -2437,447f, 12,9496f };
					break;
				
				case 1:
					vVar1 = { -1245,758f, -2311,979f, 12,9445f };
					break;
			}
			if (!unk_0xEB6A8945D1AC98A1(iParam0->f_98[iVar0]) && unk_0xDF1306B443CD3D15(iParam0->f_92[iVar0], 0))
			{
				unk_0x1E9649458B15960F(iParam0->f_92[iVar0], false);
				unk_0x1AEF7184B203A58D(iParam0->f_92[iVar0], 10f);
				unk_0xE9362E4D600DD12A(iParam0->f_98[iVar0], iParam0->f_92[iVar0], vVar1, 5f, 0, unk_0x134B62B726CEC8E6(iParam0->f_92[iVar0]), 262144, 1f, 100f);
			}
			iVar0++;
		}
		unk_0x5D96D8530B3D0904(iParam0, 25);
	}
}

int func_68(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 11))
	{
		return 1;
	}
	iVar5 = -1214505995;
	unk_0x523BCC9DC80CD82F(iVar5);
	unk_0x523BCC9DC80CD82F(func_69());
	if (unk_0xB87F6CF6E5628C67(iVar5))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!unk_0xC844350D5D58C99A(iParam0->f_92[iVar0]))
			{
				switch (iVar0)
				{
					case 0:
						vVar1 = { -1358,973f, -2361,92f, 12,9502f };
						fVar4 = 149,9339f;
						break;
					
					case 1:
						vVar1 = { -1302,004f, -2279,378f, 12,9468f };
						fVar4 = 239,9712f;
						break;
				}
				iParam0->f_92[iVar0] = unk_0x122AAB0B1D6F55AD(iVar5, vVar1, fVar4, 0, 0, 0);
				unk_0xB9FD7450C0DAB575(iParam0->f_92[iVar0], 1084227584);
				unk_0x1E9649458B15960F(iParam0->f_92[iVar0], true);
				unk_0x0882E3DC0C991680(iParam0->f_92[iVar0], 2);
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!unk_0xC844350D5D58C99A(iParam0->f_92[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (unk_0xB87F6CF6E5628C67(func_69()))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!unk_0xC844350D5D58C99A(iParam0->f_98[iVar0]))
			{
				if (unk_0xC844350D5D58C99A(iParam0->f_92[iVar0]))
				{
					if (unk_0xDF1306B443CD3D15(iParam0->f_92[iVar0], 0))
					{
						iParam0->f_98[iVar0] = unk_0x852A19533F896693(iParam0->f_92[iVar0], 4, func_69(), -1, 0, false);
						unk_0x11AD11297DC58CC7(iParam0->f_98[iVar0], true);
						unk_0x56FDC9ADE35F7DB0(iParam0->f_92[iVar0], true, 1, 0);
					}
				}
			}
			iVar0++;
		}
	}
	unk_0x71199B01895C6202(iVar5);
	unk_0x71199B01895C6202(func_69());
	unk_0x5D96D8530B3D0904(&(iParam0->f_3), 11);
	return 1;
}

int func_69()
{
	return unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9());
}

void func_70(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (unk_0xC844350D5D58C99A(iParam0->f_92[iVar0]))
		{
			unk_0xA954465BA6FDEFE2(&(iParam0->f_92[iVar0]));
		}
		if (unk_0xC844350D5D58C99A(iParam0->f_98[iVar0]))
		{
			unk_0xEBA53F35D0085654(&(iParam0->f_98[iVar0]));
		}
		iVar0++;
	}
	unk_0x71199B01895C6202(-1214505995);
	unk_0x71199B01895C6202(func_69());
}

void func_71(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 2))
	{
		unk_0x71199B01895C6202(-1027860019);
		if (unk_0xC844350D5D58C99A(iParam0->f_33))
		{
			unk_0xF690C84DADBB3551(&(iParam0->f_33));
		}
		if (iParam0->f_294)
		{
			if (unk_0x83A8177D302E1A7E(iParam0->f_120))
			{
				unk_0xB2C7809F92540947(iParam0->f_120, 0);
			}
			if (unk_0x83A8177D302E1A7E(iParam0->f_121))
			{
				unk_0xB2C7809F92540947(iParam0->f_121, 0);
			}
			if (unk_0x25F7A4D42AF2AB93())
			{
				unk_0x29D7581AEF4440C2();
			}
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (unk_0xC844350D5D58C99A(iParam0->f_104[iVar0]))
			{
				unk_0xEBA53F35D0085654(&(iParam0->f_104[iVar0]));
			}
			iVar0++;
		}
		unk_0x0674E58A79778E99(&(iParam0->f_3), 2);
	}
}

int func_72(int iParam0)
{
	if (func_87(iParam0))
	{
		unk_0x3F423BF5B8125A50("mp_intro_seq@ig_1_lamar_drive_female");
		unk_0x3F423BF5B8125A50("mp_intro_seq@ig_1_lamar_drive_radio");
		if (unk_0xB4AE0788C1587752("mp_intro_seq@ig_1_lamar_drive_female") && unk_0xB4AE0788C1587752("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	else
	{
		unk_0x3F423BF5B8125A50("mp_intro_seq@ig_1_lamar_drive_male");
		unk_0x3F423BF5B8125A50("mp_intro_seq@ig_1_lamar_drive_radio");
		if (unk_0xB4AE0788C1587752("mp_intro_seq@ig_1_lamar_drive_male") && unk_0xB4AE0788C1587752("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	return 0;
}

int func_73(int iParam0)
{
	iVar0 = 1162230285;
	if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 10))
	{
		unk_0x523BCC9DC80CD82F(iVar0);
		if (unk_0xB87F6CF6E5628C67(iVar0))
		{
			if (!unk_0xC844350D5D58C99A(iParam0->f_36))
			{
				iParam0->f_36 = unk_0x36F2404464202779(26, iVar0, -976,6968f, -2679,861f, 35,6049f, 138,062f, 0, false);
				unk_0x11AD11297DC58CC7(iParam0->f_36, true);
				unk_0xE121AE1BBF90E186(iParam0->f_36, true);
				unk_0x4A4806F9D471E491(iParam0->f_36, false, 0);
				unk_0x6DF7BF67E86AAE86(iParam0->f_36, unk_0xD09DF7101876AFB8(unk_0x16F2683693E537C9()));
				unk_0xAA6B3A4292417750(iParam0->f_36, true, true, true, true, true, true, 1, false);
				func_74(&(iParam0->f_123), 1, iParam0->f_36, "Lamar", 0, 1);
			}
		}
		if (!unk_0xC844350D5D58C99A(iParam0->f_36))
		{
			return 0;
		}
		unk_0x71199B01895C6202(iVar0);
		unk_0x5D96D8530B3D0904(&(iParam0->f_3), 10);
	}
	return 1;
}

void func_74(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_75(int iParam0, float fParam1)
{
	func_39(iParam0->f_34, 5, "FMINTRO", fParam1, 0);
}

void func_76(int iParam0)
{
	unk_0x71199B01895C6202(func_90());
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_91(iParam0, iVar0);
		iVar0++;
	}
	if (unk_0xC844350D5D58C99A(iParam0->f_91))
	{
		unk_0xEBA53F35D0085654(&(iParam0->f_91));
	}
}

void func_77(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_84(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_19())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_83(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_84(0);
		unk_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_83(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_81(unk_0xD803B885F5E47A62())) && !func_79(unk_0xD803B885F5E47A62(), 0)) && !func_78()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_81(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_78()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 14);
}

bool func_79(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_80(-1, 0) == 8;
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

int func_80(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_12();
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

int func_81(int iParam0)
{
	if (func_79(iParam0, 0))
	{
		return 1;
	}
	if (func_82())
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

bool func_82()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_83(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_84(int iParam0)
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

void func_85(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!unk_0x437347B10A200C4B(iParam0->f_104[iVar0], 0))
		{
			unk_0xE7EE28867F07D06D(iParam0->f_104[iVar0]);
			unk_0x29E8331978B73E7F(iParam0->f_104[iVar0], func_86(iVar0), 0, 0, 64);
		}
		iVar0++;
	}
}

char* func_86(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MP_Plane_Passenger_1";
			break;
		
		case 1:
			return "MP_Plane_Passenger_2";
			break;
		
		case 2:
			return "MP_Plane_Passenger_3";
			break;
		
		case 3:
			return "MP_Plane_Passenger_4";
			break;
		
		case 4:
			return "MP_Plane_Passenger_5";
			break;
		
		case 5:
			return "MP_Plane_Passenger_6";
			break;
		
		case 6:
			return "MP_Plane_Passenger_7";
			break;
	}
	return "";
}

int func_87(int iParam0)
{
	if (iParam0->f_295)
	{
		return func_88();
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_88()
{
	return func_89(unk_0xD803B885F5E47A62());
}

int func_89(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(iParam0)) == -1667301416)
	{
		return 1;
	}
	return 0;
}

int func_90()
{
	return -1105135100;
}

void func_91(int iParam0, int iParam1)
{
	unk_0x71199B01895C6202(func_92(iParam1));
	if (unk_0xC844350D5D58C99A(iParam0->f_49[iParam1]))
	{
		if (unk_0xDF1306B443CD3D15(iParam0->f_49[iParam1], 0))
		{
		}
		unk_0xF4D51642B898E52B(iParam0->f_49[iParam1]);
		unk_0xA954465BA6FDEFE2(&(iParam0->f_49[iParam1]));
	}
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -377465520;
			break;
		
		case 1:
			return -1995326987;
			break;
		
		case 2:
			return 108773431;
			break;
		
		case 3:
			return -89291282;
			break;
		
		case 4:
			return -1685021548;
			break;
		
		case 5:
			return 1177543287;
			break;
		
		case 6:
			return 464687292;
			break;
		
		case 7:
			return -433375717;
			break;
	}
	return -1008861746;
}

void func_93()
{
	Global_1315687 = 0;
	if (unk_0x83D8570832F172A7(Global_1315685))
	{
		unk_0x7E60C62A7CE58FC8(Global_1315685, "SET_BIG_LOGO_VISIBLE");
		unk_0x3CAEA85DA607305E(1);
		unk_0x1200CC973A2399C8(false);
		unk_0x7E60D21B163E9D56();
		unk_0xE17FDF9E3068281B(&Global_1315685);
	}
}

void func_94(int iParam0)
{
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (unk_0xC844350D5D58C99A(iParam0->f_92[iVar1]))
		{
			uVar0 = iParam0->f_92[iVar1];
			unk_0x2ABAFAE29D459CE5(&uVar0);
		}
		if (unk_0xC844350D5D58C99A(iParam0->f_98[iVar1]))
		{
			uVar0 = iParam0->f_98[iVar1];
			unk_0x2ABAFAE29D459CE5(&uVar0);
		}
		iVar1++;
	}
	unk_0x71199B01895C6202(-1311154784);
	unk_0x71199B01895C6202(-433375717);
	unk_0x71199B01895C6202(-1291952903);
	unk_0x71199B01895C6202(-1995326987);
	unk_0xDB8844D4B7C60440(100, "FM_Intro_uber");
	unk_0xDB8844D4B7C60440(101, "FM_Intro_uber");
	unk_0xDB8844D4B7C60440(102, "FM_Intro_uber");
	unk_0xDB8844D4B7C60440(103, "FM_Intro_uber");
	unk_0xDB8844D4B7C60440(104, "FM_Intro_uber");
	unk_0x8D17794CE3273D70("mp_intro_seq@");
}

void func_95(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0->f_49[2]))
	{
		if (unk_0xDF1306B443CD3D15(iParam0->f_49[2], 0))
		{
			unk_0x8F741CB9D8AB80F4(iParam0->f_49[2]);
		}
	}
	if (unk_0xC844350D5D58C99A(iParam0->f_49[4]))
	{
		if (unk_0xDF1306B443CD3D15(iParam0->f_49[4], 0))
		{
			unk_0x8F741CB9D8AB80F4(iParam0->f_49[4]);
		}
	}
}

void func_96(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0->f_49[2]))
	{
		if (unk_0xDF1306B443CD3D15(iParam0->f_49[2], 0))
		{
			unk_0xF50D17A63556B8D4(iParam0->f_49[2], 4, 0, 1f);
		}
	}
}

int func_97()
{
	if (unk_0x0C4B4836B745568C())
	{
		return 0;
	}
	if (!unk_0x83D8570832F172A7(Global_1315685))
	{
		Global_1315685 = unk_0xB01F55A0FD1CFD49("GTAV_ONLINE");
		return 0;
	}
	return 1;
}

void func_98(int iParam0, char* sParam1, char* sParam2, int iParam3, vector3 vParam4, vector3 vParam7)
{
	if (unk_0xC844350D5D58C99A(iParam3))
	{
		if (unk_0x437347B10A200C4B(iParam3, 0))
		{
		}
		if (!unk_0x9F4FE516EAACCFC5(iParam0->f_8))
		{
			iParam0->f_8 = unk_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", false);
		}
		iParam0->f_9 = -1;
		iParam0->f_9 = unk_0xE9744DB7B8CA6965(vParam4, vParam7, 2);
		unk_0x6BE2EAE992FD7C26(iParam0->f_9, iParam3, 0);
		unk_0x93E9ED66DAB9FBE3(iParam0->f_8, iParam0->f_9, sParam1, sParam2);
		unk_0xE3BB8E05FCEB3FBE(iParam0->f_8, true);
		unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 1, 0);
	}
}

void func_99(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 3))
	{
		unk_0xB210A5904CCBDC01("CONTRAILS");
		if (func_87(iParam0))
		{
			unk_0x8E590B419F1E5182("MP_INTRO_CONCAT", 103, 8);
		}
		else
		{
			unk_0x8E590B419F1E5182("MP_INTRO_CONCAT", 31, 8);
		}
		if (unk_0x75EECC9B0572F772())
		{
			if (iParam0->f_295)
			{
				if (func_87(iParam0))
				{
					unk_0xCB667BE6562FEBD1("MP_Female_Character", 0, 1);
				}
				else
				{
					unk_0xCB667BE6562FEBD1("MP_Male_Character", 0, 1);
				}
			}
			func_100();
		}
		if (unk_0x62A1F4500E8F07E0())
		{
			unk_0x5D96D8530B3D0904(&(iParam0->f_3), 3);
		}
	}
}

void func_100()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		unk_0xCB667BE6562FEBD1(func_86(iVar0), 0, 1);
		iVar0++;
	}
}

int func_101(int iParam0)
{
	vVar1 = { -1200f, -1490f, 142,385f };
	if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 2))
	{
		unk_0x523BCC9DC80CD82F(-1027860019);
		unk_0x523BCC9DC80CD82F(1885233650);
		unk_0x523BCC9DC80CD82F(-1667301416);
		if (iParam0->f_294)
		{
			unk_0x9E5E60D8C63FD9D1();
		}
		if (((unk_0xB87F6CF6E5628C67(-1027860019) && unk_0xB87F6CF6E5628C67(1885233650)) && unk_0xB87F6CF6E5628C67(-1667301416)) && (!iParam0->f_294 || unk_0x25F7A4D42AF2AB93()))
		{
			iParam0->f_33 = unk_0x7707E48765093646(-1027860019, vVar1, 0, false, false);
			unk_0x25BD67336EA4AECE(iParam0->f_33, 3000);
			unk_0x120A395B0ECB8EA5(iParam0->f_33, false);
			unk_0x4A4806F9D471E491(iParam0->f_33, false, 0);
			if (iParam0->f_294)
			{
				iParam0->f_120 = unk_0xC1879030EB463216("scr_mp_intro_plane_exhaust", iParam0->f_33, -5,403f, -8f, -2,2f, 0f, 0f, 0f, 1f, 0, 0, 0);
				iParam0->f_121 = unk_0xC1879030EB463216("scr_mp_intro_plane_exhaust", iParam0->f_33, 6,629f, -8f, -2,2f, 0f, 0f, 0f, 1f, 0, 0, 0);
			}
			if (iParam0->f_295)
			{
				func_106(iParam0);
			}
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (func_105(iParam0, iVar0))
				{
					iParam0->f_104[iVar0] = unk_0x36F2404464202779(26, -1667301416, -1117,778f, -1557,625f, 3,3819f, 0f, 0, false);
				}
				else
				{
					iParam0->f_104[iVar0] = unk_0x36F2404464202779(26, 1885233650, -1117,778f, -1557,625f, 3,3819f, 0f, 0, false);
				}
				if (func_103(iParam0, iVar0))
				{
					if (!unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(unk_0x117658E336116132(iParam0->f_112[iVar0])), 0))
					{
					}
					unk_0x7237EE202FA06DBA(unk_0x9539D44F3E4492F6(unk_0x117658E336116132(iParam0->f_112[iVar0])), iParam0->f_104[iVar0]);
					unk_0xE7EE28867F07D06D(iParam0->f_104[iVar0]);
				}
				else
				{
					func_102(iParam0, iVar0);
				}
				iVar0++;
			}
			unk_0x71199B01895C6202(-1027860019);
			unk_0x5D96D8530B3D0904(&(iParam0->f_3), 2);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_102(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 0, 21, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 2, 9, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 4, 9, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 6, 4, 8, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 8, 15, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 11, 10, 0, 0);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 0);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 1);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 2);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 3);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 4);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 5);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 6);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 7);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 8);
			break;
		
		case 1:
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 0, 13, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 2, 5, 4, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 4, 10, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 6, 10, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 7, 11, 2, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 8, 13, 6, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 11, 10, 0, 0);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 0);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 1);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 2);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 3);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 4);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 5);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 6);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 7);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 8);
			break;
		
		case 2:
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 0, 15, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 2, 1, 4, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 4, 0, 1, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 6, 1, 7, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 8, 2, 9, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 11, 6, 0, 0);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 0);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 1);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 2);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 3);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 4);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 5);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 6);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 7);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 8);
			break;
		
		case 3:
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 0, 14, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 2, 5, 3, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 3, 3, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 4, 1, 6, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 6, 11, 5, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 8, 2, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 11, 3, 12, 0);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 0);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 1);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 2);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 3);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 4);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 5);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 6);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 7);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 8);
			break;
		
		case 4:
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 0, 18, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 2, 15, 3, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 3, 15, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 4, 2, 5, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 6, 4, 6, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 7, 4, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 8, 3, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 11, 4, 0, 0);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 0);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 1);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 2);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 3);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 4);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 5);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 6);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 7);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 8);
			break;
		
		case 5:
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 0, 27, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 2, 7, 3, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 3, 11, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 4, 4, 8, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 6, 13, 14, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 7, 5, 3, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 8, 3, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 11, 2, 7, 0);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 0);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 1);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 2);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 3);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 4);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 5);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 6);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 7);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 8);
			break;
		
		case 6:
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 0, 16, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 2, 15, 1, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 3, 3, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 4, 5, 6, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 6, 2, 8, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 8, 2, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(uParam0->f_104[iParam1], 11, 3, 7, 0);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 0);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 1);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 2);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 3);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 4);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 5);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 6);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 7);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_104[iParam1], 8);
			break;
	}
}

int func_103(var uParam0, int iParam1)
{
	if ((uParam0->f_295 && uParam0->f_112[iParam1] != -1) && func_104(unk_0x117658E336116132(uParam0->f_112[iParam1]), 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_104(int iParam0, bool bParam1, bool bParam2)
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

int func_105(var uParam0, int iParam1)
{
	if (func_103(uParam0, iParam1))
	{
		return func_89(unk_0x117658E336116132(uParam0->f_112[iParam1]));
	}
	else if (((iParam1 == 3 || iParam1 == 4) || iParam1 == 5) || iParam1 == 6)
	{
		return 1;
	}
	return 0;
}

void func_106(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		uParam0->f_112[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_104(iVar2, 0, 1))
		{
			if (unk_0xD803B885F5E47A62() != iVar2)
			{
				if (iVar0 < 4)
				{
					uParam0->f_112[func_107(iVar0)] = iVar1;
					iVar0++;
				}
			}
		}
		iVar1++;
	}
}

int func_107(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
			break;
		
		case 1:
			return 6;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 4;
			break;
		
		case 4:
			return 1;
			break;
		
		case 5:
			return 3;
			break;
		
		case 6:
			return 2;
			break;
	}
	return 0;
}

int func_108(int iParam0)
{
	iVar0 = 1706635382;
	iVar1 = -685276541;
	if (unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 9))
	{
		return 1;
	}
	unk_0x523BCC9DC80CD82F(iVar0);
	unk_0x523BCC9DC80CD82F(iVar1);
	unk_0x36187931D29E5BBE(5, "FMINTRO");
	unk_0x36187931D29E5BBE(6, "FMINTRO");
	unk_0x36187931D29E5BBE(7, "FMINTRO");
	unk_0x3F423BF5B8125A50("mp_intro_seq@");
	if (((((unk_0xB87F6CF6E5628C67(iVar0) && unk_0xB87F6CF6E5628C67(iVar1)) && unk_0x3DDA6C6A285628E4(5, "FMINTRO")) && unk_0x3DDA6C6A285628E4(6, "FMINTRO")) && unk_0x3DDA6C6A285628E4(7, "FMINTRO")) && unk_0xB4AE0788C1587752("mp_intro_seq@"))
	{
		if (!unk_0xC844350D5D58C99A(iParam0->f_34))
		{
			unk_0x536F1BE96C726C4B(-1034,035f, -2730,485f, 19,0565f, 3f, 1, 0, 0, false);
			iParam0->f_34 = unk_0x122AAB0B1D6F55AD(iVar1, -1032,322f, -2731,192f, 19,0658f, 239,2169f, 0, 0, 0);
			unk_0x5834B6B817326C89(iParam0->f_34, 1);
			unk_0x3E5CE368CD085FFA(iParam0->f_34, 0);
			unk_0xAA6B3A4292417750(iParam0->f_34, true, true, true, true, true, true, 1, false);
		}
		else if (!unk_0xC844350D5D58C99A(iParam0->f_35))
		{
			if (unk_0xDF1306B443CD3D15(iParam0->f_34, 0))
			{
				iParam0->f_35 = unk_0x36F2404464202779(26, iVar0, -1031,6f, -2730,15f, 20,15f, 143,6341f, 0, false);
				unk_0x5B1D360B9C6F0A09(iParam0->f_35, iParam0->f_34, 20000, -1, 1f, 1048592, 0);
				unk_0x11AD11297DC58CC7(iParam0->f_35, true);
				unk_0xE121AE1BBF90E186(iParam0->f_34, true);
				unk_0xE121AE1BBF90E186(iParam0->f_35, true);
				unk_0x6DF7BF67E86AAE86(iParam0->f_35, unk_0xD09DF7101876AFB8(unk_0x16F2683693E537C9()));
				unk_0xAA6B3A4292417750(iParam0->f_35, true, true, true, true, true, true, 1, false);
			}
		}
	}
	if (!unk_0xC844350D5D58C99A(iParam0->f_34) || !unk_0xC844350D5D58C99A(iParam0->f_35))
	{
		return 0;
	}
	unk_0x71199B01895C6202(iVar0);
	unk_0x71199B01895C6202(iVar1);
	unk_0x5D96D8530B3D0904(&(iParam0->f_3), 9);
	return 1;
}

void func_109(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 0))
	{
		func_119();
		func_117();
		if (func_111(iParam0))
		{
			if (func_110(iParam0))
			{
				if (!unk_0x9F4FE516EAACCFC5(iParam0->f_7))
				{
					iParam0->f_7 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", false);
				}
				unk_0x86F44313DFA8F00C(iParam0->f_7, 228,1892f, -1006,758f, -96,8311f, -13,0682f, 0,0572f, 0,7306f, 40,033f, 0, 1, 1, 2);
				iVar0 = 0;
				while (iVar0 < 8)
				{
					unk_0x71199B01895C6202(func_92(iVar0));
					iVar0++;
				}
				unk_0x71199B01895C6202(func_90());
				unk_0x5D96D8530B3D0904(&(iParam0->f_3), 0);
			}
		}
	}
}

int func_110(var uParam0)
{
	iVar0 = func_90();
	if (!unk_0xC844350D5D58C99A(uParam0->f_91))
	{
		if (unk_0xC844350D5D58C99A(uParam0->f_49[2]))
		{
			if (unk_0x3FC14104C3FD24D5(iVar0))
			{
				if (unk_0xB87F6CF6E5628C67(iVar0))
				{
					if (unk_0xB4AE0788C1587752("MP_INTRO_SEQ@"))
					{
						if (!unk_0x437347B10A200C4B(uParam0->f_49[2], 0))
						{
							uParam0->f_10 = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x6BE2EAE992FD7C26(uParam0->f_10, uParam0->f_49[2], 0);
							uParam0->f_91 = unk_0x36F2404464202779(4, iVar0, 226,6826f, -998,5228f, -99,9999f, 63,813f, 0, false);
							unk_0x11AD11297DC58CC7(uParam0->f_91, true);
							unk_0x915804B434753CBD(uParam0->f_91, uParam0->f_10, "MP_INTRO_SEQ@", "MP_Mech_Fix", 1000f, -1000f, 64, 0, 1148846080, 0);
							unk_0xC90224D9E95E5E3A(uParam0->f_10, true);
							unk_0x1E9649458B15960F(uParam0->f_91, true);
							unk_0x20641932E5104B25(uParam0->f_91, false, 0);
							unk_0x650567883F5E3136(uParam0->f_91, -72657034);
							unk_0x64F9F278AB9DCA2C(uParam0->f_91, 0, 1, 1, 0);
							unk_0x64F9F278AB9DCA2C(uParam0->f_91, 1, 0, 0, 0);
							unk_0x64F9F278AB9DCA2C(uParam0->f_91, 2, 0, 2, 0);
							unk_0x64F9F278AB9DCA2C(uParam0->f_91, 3, 0, 2, 0);
							unk_0x64F9F278AB9DCA2C(uParam0->f_91, 4, 1, 0, 0);
							unk_0x64F9F278AB9DCA2C(uParam0->f_91, 5, 0, 0, 0);
							unk_0x64F9F278AB9DCA2C(uParam0->f_91, 6, 0, 0, 0);
							unk_0x64F9F278AB9DCA2C(uParam0->f_91, 7, 0, 0, 0);
							unk_0x64F9F278AB9DCA2C(uParam0->f_91, 8, 0, 0, 0);
							unk_0x64F9F278AB9DCA2C(uParam0->f_91, 9, 0, 0, 0);
							unk_0x64F9F278AB9DCA2C(uParam0->f_91, 10, 0, 0, 0);
							unk_0x64F9F278AB9DCA2C(uParam0->f_91, 11, 0, 0, 0);
							unk_0x3BFC3B9ADD2EE7B7(uParam0->f_91, 0);
							unk_0x3BFC3B9ADD2EE7B7(uParam0->f_91, 1);
							unk_0x3BFC3B9ADD2EE7B7(uParam0->f_91, 2);
							unk_0x3BFC3B9ADD2EE7B7(uParam0->f_91, 3);
							unk_0x3BFC3B9ADD2EE7B7(uParam0->f_91, 4);
							unk_0x3BFC3B9ADD2EE7B7(uParam0->f_91, 5);
							unk_0x3BFC3B9ADD2EE7B7(uParam0->f_91, 6);
							unk_0x3BFC3B9ADD2EE7B7(uParam0->f_91, 7);
							unk_0x3BFC3B9ADD2EE7B7(uParam0->f_91, 8);
						}
					}
				}
			}
		}
	}
	if (!unk_0xC844350D5D58C99A(uParam0->f_91))
	{
		return 0;
	}
	return 1;
}

int func_111(var uParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_2, 31))
	{
		func_119();
		iVar5 = 0;
		while (iVar5 < 8)
		{
			func_116(iVar5, &vVar1, &iVar4);
			if (!func_115(vVar1, 0f, 0f, 0f, 0))
			{
				if (!unk_0xC844350D5D58C99A(uParam0->f_49[iVar5]))
				{
					iVar0 = func_92(iVar5);
					if (unk_0x3FC14104C3FD24D5(iVar0))
					{
						if (unk_0xB87F6CF6E5628C67(iVar0))
						{
							uParam0->f_49[iVar5] = unk_0x122AAB0B1D6F55AD(iVar0, vVar1, iVar4, 0, 0, 0);
							unk_0x120A395B0ECB8EA5(uParam0->f_49[iVar5], true);
							unk_0xCCD53AC1B5D5E456(uParam0->f_49[iVar5], 0f);
							unk_0x316958DDB94DF3FC(uParam0->f_49[iVar5], 0);
							if (iVar5 == 2)
							{
								unk_0x611DFA9294B339CA(uParam0->f_49[iVar5], 4, 0, true);
								unk_0xF50D17A63556B8D4(uParam0->f_49[iVar5], 4, 0, 1f);
							}
							func_114(uParam0, iVar5);
							func_113(uParam0, iVar5);
							unk_0x71199B01895C6202(iVar0);
						}
					}
				}
			}
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 8)
		{
			if (!unk_0xC844350D5D58C99A(uParam0->f_49[iVar5]))
			{
				return 0;
			}
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_2, iVar5))
			{
				if (func_112(uParam0, iVar5))
				{
					unk_0x5D96D8530B3D0904(&(uParam0->f_2), iVar5);
				}
				else
				{
					return 0;
				}
			}
			if (unk_0xDF1306B443CD3D15(uParam0->f_49[iVar5], 0))
			{
				if (!unk_0x43ABECA7C10E1332(uParam0->f_49[iVar5]))
				{
					return 0;
				}
			}
			iVar5++;
		}
		unk_0x5D96D8530B3D0904(&(uParam0->f_2), 31);
	}
	return 1;
}

int func_112(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (unk_0xDF1306B443CD3D15(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x40B3F576B41FA183(uParam0->f_49[iParam1]) > 0)
				{
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 0, 1, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 1, 0, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 2, 1, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 3, 1, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 4, 1, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 5, 0, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 7, 0, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 10, 0, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 12, 0, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 14, 0, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 15, 4, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 23, 11, false);
					return 1;
				}
			}
			break;
		
		case 1:
			if (unk_0xDF1306B443CD3D15(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x40B3F576B41FA183(uParam0->f_49[iParam1]) > 0)
				{
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 12, 0, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 15, 3, false);
					unk_0x73BEC6F1685574E6(uParam0->f_49[iParam1], 22, true);
					unk_0xA22F71BBC8173C39(uParam0->f_49[iParam1], false);
					return 1;
				}
			}
			break;
		
		case 2:
			if (unk_0xDF1306B443CD3D15(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x40B3F576B41FA183(uParam0->f_49[iParam1]) > 0)
				{
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 0, 0, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 4, 0, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 14, 5, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 15, 3, false);
					unk_0x73BEC6F1685574E6(uParam0->f_49[iParam1], 22, true);
					unk_0xA22F71BBC8173C39(uParam0->f_49[iParam1], false);
					return 1;
				}
			}
			break;
		
		case 3:
			if (unk_0xDF1306B443CD3D15(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x40B3F576B41FA183(uParam0->f_49[iParam1]) > 0)
				{
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 15, 3, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 23, 11, false);
					unk_0x73BEC6F1685574E6(uParam0->f_49[iParam1], 22, true);
					unk_0xA22F71BBC8173C39(uParam0->f_49[iParam1], false);
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0xDF1306B443CD3D15(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x40B3F576B41FA183(uParam0->f_49[iParam1]) > 0)
				{
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 1, 0, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 2, 0, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 4, 1, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 7, 1, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 11, 3, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 12, 2, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 13, 2, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 15, 3, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 16, 4, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 23, 5, false);
					unk_0x73BEC6F1685574E6(uParam0->f_49[iParam1], 22, true);
					unk_0xA22F71BBC8173C39(uParam0->f_49[iParam1], false);
					return 1;
				}
			}
			break;
		
		case 5:
			if (unk_0xDF1306B443CD3D15(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x40B3F576B41FA183(uParam0->f_49[iParam1]) > 0)
				{
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 0, 0, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 1, 0, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 2, 0, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 3, 0, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 4, 1, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 6, 2, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 10, 3, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 14, 7, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 15, 0, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 23, 5, false);
					unk_0x73BEC6F1685574E6(uParam0->f_49[iParam1], 22, true);
					unk_0xA22F71BBC8173C39(uParam0->f_49[iParam1], false);
					return 1;
				}
			}
			break;
		
		case 6:
			if (unk_0xDF1306B443CD3D15(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x40B3F576B41FA183(uParam0->f_49[iParam1]) > 0)
				{
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 1, 1, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 4, 1, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 8, 0, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 14, 7, false);
					unk_0xEE6A1776A67F70C1(uParam0->f_49[iParam1], 23, 0, false);
					unk_0x73BEC6F1685574E6(uParam0->f_49[iParam1], 22, true);
					unk_0xA22F71BBC8173C39(uParam0->f_49[iParam1], false);
					return 1;
				}
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void func_113(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			unk_0xF95FF0A179413A39(uParam0->f_49[iParam1], 0);
			unk_0x5BD52554D5750EFF(uParam0->f_49[iParam1], 0, 1);
			unk_0x5BD52554D5750EFF(uParam0->f_49[iParam1], 1, 0);
			unk_0x5BD52554D5750EFF(uParam0->f_49[iParam1], 2, 1);
			unk_0x5BD52554D5750EFF(uParam0->f_49[iParam1], 3, 1);
			unk_0x5BD52554D5750EFF(uParam0->f_49[iParam1], 4, 1);
			unk_0x5BD52554D5750EFF(uParam0->f_49[iParam1], 5, 0);
			unk_0x5BD52554D5750EFF(uParam0->f_49[iParam1], 7, 0);
			unk_0x5BD52554D5750EFF(uParam0->f_49[iParam1], 10, 0);
			unk_0x5BD52554D5750EFF(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 1:
			unk_0xF95FF0A179413A39(uParam0->f_49[iParam1], 0);
			break;
		
		case 2:
			unk_0xF95FF0A179413A39(uParam0->f_49[iParam1], 0);
			unk_0x5BD52554D5750EFF(uParam0->f_49[iParam1], 0, 0);
			unk_0x5BD52554D5750EFF(uParam0->f_49[iParam1], 4, 0);
			break;
		
		case 3:
			unk_0xF95FF0A179413A39(uParam0->f_49[iParam1], 0);
			unk_0x5BD52554D5750EFF(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 4:
			unk_0xF95FF0A179413A39(uParam0->f_49[iParam1], 0);
			unk_0x5BD52554D5750EFF(uParam0->f_49[iParam1], 1, 0);
			unk_0x5BD52554D5750EFF(uParam0->f_49[iParam1], 2, 0);
			unk_0x5BD52554D5750EFF(uParam0->f_49[iParam1], 4, 1);
			unk_0x5BD52554D5750EFF(uParam0->f_49[iParam1], 7, 1);
			unk_0x5BD52554D5750EFF(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 5:
			unk_0xF95FF0A179413A39(uParam0->f_49[iParam1], 0);
			unk_0x5BD52554D5750EFF(uParam0->f_49[iParam1], 0, 0);
			unk_0x5BD52554D5750EFF(uParam0->f_49[iParam1], 1, 0);
			unk_0x5BD52554D5750EFF(uParam0->f_49[iParam1], 2, 0);
			unk_0x5BD52554D5750EFF(uParam0->f_49[iParam1], 3, 0);
			unk_0x5BD52554D5750EFF(uParam0->f_49[iParam1], 4, 1);
			unk_0x5BD52554D5750EFF(uParam0->f_49[iParam1], 6, 2);
			unk_0x5BD52554D5750EFF(uParam0->f_49[iParam1], 10, 3);
			unk_0x5BD52554D5750EFF(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 6:
			unk_0xF95FF0A179413A39(uParam0->f_49[iParam1], 0);
			unk_0x5BD52554D5750EFF(uParam0->f_49[iParam1], 1, 1);
			unk_0x5BD52554D5750EFF(uParam0->f_49[iParam1], 4, 1);
			unk_0x5BD52554D5750EFF(uParam0->f_49[iParam1], 8, 0);
			unk_0x5BD52554D5750EFF(uParam0->f_49[iParam1], 23, 0);
			break;
	}
}

void func_114(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			unk_0xC002508A277213DE(uParam0->f_49[iParam1], 83, 134);
			unk_0x58A0C35FA7CA6162(uParam0->f_49[iParam1], 134, 134);
			break;
		
		case 1:
			unk_0xC002508A277213DE(uParam0->f_49[iParam1], 0, 0);
			unk_0x58A0C35FA7CA6162(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 2:
			unk_0xC002508A277213DE(uParam0->f_49[iParam1], 49, 0);
			unk_0x58A0C35FA7CA6162(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 3:
			unk_0xC002508A277213DE(uParam0->f_49[iParam1], 0, 0);
			unk_0x58A0C35FA7CA6162(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 4:
			unk_0xC002508A277213DE(uParam0->f_49[iParam1], 43, 5);
			unk_0x58A0C35FA7CA6162(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 5:
			unk_0xC002508A277213DE(uParam0->f_49[iParam1], 3, 3);
			unk_0x58A0C35FA7CA6162(uParam0->f_49[iParam1], 6, 156);
			break;
		
		case 6:
			unk_0xC002508A277213DE(uParam0->f_49[iParam1], 35, 0);
			unk_0x58A0C35FA7CA6162(uParam0->f_49[iParam1], 0, 156);
			break;
	}
}

bool func_115(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_116(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 224,478f, -986,548f, -99,9999f };
			*uParam2 = 240,399f;
			break;
		
		case 1:
			*uParam1 = { 224,305f, -991,848f, -99,9999f };
			*uParam2 = 240,399f;
			break;
		
		case 2:
			*uParam1 = { 224,535f, -997,348f, -99,9999f };
			*uParam2 = 240,399f;
			break;
		
		case 3:
			*uParam1 = { 232,847f, -986,818f, -99,9999f };
			*uParam2 = 118,309f;
			break;
		
		case 4:
			*uParam1 = { 232,847f, -980,848f, -99,9999f };
			*uParam2 = 118,309f;
			break;
		
		case 5:
			*uParam1 = { 224,535f, -980,848f, -99,9999f };
			*uParam2 = 240,399f;
			break;
		
		case 6:
			*uParam1 = { 232,779f, -992,84f, -99,9999f };
			*uParam2 = 118,309f;
			break;
		
		case 7:
			*uParam1 = { 232,709f, -997,348f, -99,9999f };
			*uParam2 = 118,309f;
			break;
	}
}

void func_117()
{
	unk_0x523BCC9DC80CD82F(func_90());
	unk_0x3F423BF5B8125A50(func_118());
}

char* func_118()
{
	return "MP_INTRO_SEQ@";
}

void func_119()
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		unk_0x523BCC9DC80CD82F(func_92(iVar0));
		iVar0++;
	}
}

void func_120(int iParam0, float fParam1, float fParam2)
{
	func_39(iParam0->f_92[0], 100, "FM_Intro_uber", fParam1, 0);
	func_39(iParam0->f_92[1], 101, "FM_Intro_uber", fParam1, 0);
	func_39(iParam0->f_92[2], 102, "FM_Intro_uber", (fParam1 + fParam2), 0);
	func_39(iParam0->f_92[3], 103, "FM_Intro_uber", fParam1, 0);
	func_39(iParam0->f_92[4], 104, "FM_Intro_uber", fParam1, 0);
}

void func_121(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 14:
			func_122(iParam0, 0, -2997,174f, 330,9234f, 14,2341f, -15,97f, &iVar1, 1);
			func_122(iParam0, 2, -2983,9f, 423,7414f, 14,4122f, -5,25f, &iVar1, 1);
			break;
		
		case 15:
			func_122(iParam0, 1, -2622,208f, -109,3386f, 19,2643f, 39,34f, &iVar1, 1);
			func_122(iParam0, 3, -2583,95f, -143,6469f, 20,6224f, 48,89f, &iVar1, 1);
			func_122(iParam0, 7, -2552,145f, -169,0495f, 19,8664f, 60,04f, &iVar1, 1);
			func_122(iParam0, 8, -2531,474f, -174,4581f, 19,2269f, 58,09f, &iVar1, 1);
			break;
		
		case 16:
			break;
		
		case 17:
			func_122(iParam0, 0, -2420,618f, -232,2668f, 15,3525f, 57,71f, &iVar1, 1);
			func_122(iParam0, 2, -2399,709f, -249,2471f, 14,9551f, 58,19f, &iVar1, 1);
			func_122(iParam0, 4, -2568,499f, -153,4655f, 20,4075f, 54,1f, &iVar1, 1);
			func_122(iParam0, 5, -2485,392f, -198,0737f, 17,5783f, 63,83f, &iVar1, 1);
			func_122(iParam0, 6, -2469,139f, -206,5518f, 17,0201f, 60,64f, &iVar1, 1);
			func_122(iParam0, 9, -2408,733f, -238,8328f, 15,2055f, 59,84f, &iVar1, 1);
			break;
		
		case 18:
			func_122(iParam0, 1, -2146,384f, -323,4933f, 12,0429f, 14,8813f, &iVar1, 1);
			func_122(iParam0, 3, -2075,444f, -374,131f, 11,556f, 56,66f, &iVar1, 1);
			func_122(iParam0, 7, -2160,252f, -294,0829f, 12,5163f, 163,95f, &iVar1, 1);
			func_122(iParam0, 8, -2191,429f, -335,8769f, 12,7225f, 84,71f, &iVar1, 1);
			break;
		
		case 19:
			func_122(iParam0, 0, -1833,87f, -561,7711f, 11,0989f, 48,11f, &iVar1, 1);
			func_122(iParam0, 1, -1630,587f, -685,6821f, 16,5351f, 58,23f, &iVar1, 1);
			func_122(iParam0, 2, -1668,738f, -662,7587f, 14,7925f, 60,52f, &iVar1, 1);
			func_122(iParam0, 3, -1564,946f, -738,6324f, 10,7672f, 68,32f, &iVar1, 1);
			func_122(iParam0, 4, -1706,507f, -720,8959f, 9,6281f, -132,94f, &iVar1, 1);
			func_122(iParam0, 5, -1626,756f, -769,9745f, 10,2367f, -128,8f, &iVar1, 1);
			func_122(iParam0, 6, -1782,764f, -610,5726f, 10,3008f, 52,34f, &iVar1, 1);
			func_122(iParam0, 7, -1595,258f, -733,587f, 10,8576f, 68,39f, &iVar1, 1);
			func_122(iParam0, 8, -1751,892f, -682,1017f, 9,6795f, -134,89f, &iVar1, 1);
			func_122(iParam0, 9, -1742,098f, -642,5658f, 9,8169f, 48,19f, &iVar1, 1);
			break;
		
		case 33:
			func_122(iParam0, 0, -934,4687f, -2716,038f, 12,7365f, 309,2312f, &iVar1, 0);
			func_122(iParam0, 5, -975,6617f, -2733,517f, 12,8172f, 267,4944f, &iVar1, 0);
			break;
		
		case 34:
			break;
		
		case 35:
			break;
		
		case 36:
			func_122(iParam0, 6, -850,1183f, -2615,271f, 14,1979f, 327,7461f, &iVar1, 0);
			break;
		
		case 37:
			break;
		
		case 38:
			func_122(iParam0, 0, -712,0925f, -1983,516f, 25,688f, -167,99f, &iVar1, 0);
			func_122(iParam0, 1, -533,9934f, -2004,727f, 26,9085f, 58,71f, &iVar1, 0);
			func_122(iParam0, 2, -653,3551f, -2047,782f, 27,3566f, -112,14f, &iVar1, 0);
			func_122(iParam0, 3, -663,821f, -1934,85f, 27,1417f, -121,65f, &iVar1, 0);
			func_122(iParam0, 4, -656,6017f, -2009,078f, 30,0188f, -106,53f, &iVar1, 0);
			func_122(iParam0, 5, -502,696f, -2023,068f, 26,2376f, 60,2827f, &iVar1, 0);
			func_122(iParam0, 6, -460,1447f, -2044,032f, 26,2371f, 63,9022f, &iVar1, 0);
			func_122(iParam0, 7, -624,7944f, -1960,975f, 26,29f, 237,3848f, &iVar1, 0);
			func_122(iParam0, 8, -463,0545f, -1998,255f, 36,6533f, 27,85f, &iVar1, 0);
			func_122(iParam0, 9, -473,4099f, -1950,213f, 24,7576f, 37,16f, &iVar1, 0);
			func_122(iParam0, 10, -574,5834f, -1994,9f, 26,2871f, 236,0571f, &iVar1, 0);
			func_122(iParam0, 11, -546,7894f, -2012,781f, 26,3137f, 235,9205f, &iVar1, 0);
			func_122(iParam0, 12, -584,929f, -1970,332f, 26,2437f, 55,8826f, &iVar1, 0);
			func_122(iParam0, 13, -633,4936f, -1937,682f, 26,2413f, 54,9911f, &iVar1, 0);
			func_122(iParam0, 14, -601,2188f, -1941,419f, 17,4986f, 148,6622f, &iVar1, 0);
			break;
		
		case 39:
			func_122(iParam0, 4, -499,2335f, -1906,532f, 16,3534f, 133,5751f, &iVar1, 0);
			func_122(iParam0, 9, -518,8654f, -1918,144f, 16,3355f, 134,6305f, &iVar1, 0);
			break;
		
		case 40:
			func_122(iParam0, 3, -270,2197f, -1499,752f, 29,4309f, -13,07f, &iVar1, 0);
			func_122(iParam0, 7, -313,1461f, -1559,589f, 24,2966f, 145,66f, &iVar1, 0);
			func_122(iParam0, 8, -301,9485f, -1550,052f, 25,5595f, 146,95f, &iVar1, 0);
			break;
		
		case 41:
			break;
		
		case 42:
			break;
		
		case 43:
			func_122(iParam0, 1, 246,1231f, -238,5137f, 52,9482f, 251,5966f, &iVar1, 0);
			func_122(iParam0, 2, 214,2755f, -202,6486f, 53,5033f, 70,72f, &iVar1, 0);
			func_122(iParam0, 6, 263,1977f, -115,1292f, 69,0366f, 155,02f, &iVar1, 0);
			break;
		
		case 44:
			func_122(iParam0, 0, 392,6941f, 239,868f, 102,5932f, 159,15f, &iVar1, 0);
			func_122(iParam0, 7, 375,2224f, 192,316f, 102,0397f, 160,4247f, &iVar1, 0);
			func_122(iParam0, 12, 377,4185f, 166,3668f, 102,0407f, 337,9135f, &iVar1, 0);
			break;
		
		case 45:
			func_122(iParam0, 1, 267,8363f, 181,3352f, 103,7037f, 71,7724f, &iVar1, 0);
			func_122(iParam0, 3, 216,3894f, 211,8832f, 105,2308f, -19,82f, &iVar1, 0);
			func_122(iParam0, 4, 290,3365f, 172,6194f, 103,7313f, 67,09f, &iVar1, 0);
			func_122(iParam0, 5, 283,6507f, 155,574f, 103,264f, 252,0678f, &iVar1, 0);
			func_122(iParam0, 8, 309,5128f, 156,7439f, 103,3183f, -112,52f, &iVar1, 0);
			func_122(iParam0, 9, 249,0189f, 168,3015f, 104,5421f, -112,05f, &iVar1, 0);
			func_122(iParam0, 11, 313,7221f, 144,8591f, 102,6542f, 249,0527f, &iVar1, 0);
			func_122(iParam0, 13, 171,2032f, 216,4137f, 105,2411f, 69,1778f, &iVar1, 0);
			break;
		
		case 46:
			break;
		
		case 47:
			func_122(iParam0, 2, 226,2312f, 176,6035f, 104,3217f, 252,5577f, &iVar1, 0);
			func_122(iParam0, 6, 247,4283f, 168,6965f, 103,9378f, 250,2977f, &iVar1, 0);
			func_122(iParam0, 7, 211,375f, 181,7446f, 104,561f, 250,2252f, &iVar1, 0);
			break;
		
		case 48:
			break;
		
		case 49:
			func_122(iParam0, 2, -192,4192f, 249,71f, 91,7534f, -99,42f, &iVar1, 0);
			func_122(iParam0, 3, -45,3246f, 256,5581f, 105,0516f, 272,9104f, &iVar1, 0);
			func_122(iParam0, 4, -24,1551f, 272,3286f, 106,4563f, 96,6005f, &iVar1, 0);
			func_122(iParam0, 5, 6,5526f, 270,3987f, 108,268f, 84,5591f, &iVar1, 0);
			func_122(iParam0, 6, -124,1576f, 245,0871f, 96,1105f, -89,91f, &iVar1, 0);
			func_122(iParam0, 7, -140,9613f, 262,532f, 94,5308f, 87,51f, &iVar1, 0);
			func_122(iParam0, 9, -83,4766f, 247,5941f, 99,488f, 275,7796f, &iVar1, 0);
			func_122(iParam0, 10, -215,5077f, 252,4543f, 91,0469f, 264,726f, &iVar1, 0);
			break;
		
		case 50:
			break;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iVar1, iVar0))
		{
			func_6(iParam0, iVar0);
		}
		iVar0++;
	}
}

void func_122(var uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, bool bParam7)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_58[iParam1], 0) && !unk_0xEB6A8945D1AC98A1(uParam0->f_74[iParam1]))
	{
		unk_0x1E9649458B15960F(uParam0->f_58[iParam1], false);
		unk_0x20641932E5104B25(uParam0->f_58[iParam1], true, 0);
		unk_0xA47B46945FF6DE74(uParam0->f_58[iParam1], vParam2, 1, false, 0, 1);
		unk_0xD8F6A53F4799FAFE(uParam0->f_58[iParam1], fParam5);
		unk_0xB9FD7450C0DAB575(uParam0->f_58[iParam1], 1084227584);
		unk_0x51B954DAB1BCAF73(uParam0->f_58[iParam1]);
		if (bParam7)
		{
			unk_0x60274E99F9B27DEA(uParam0->f_74[iParam1], uParam0->f_58[iParam1], 0, 1, 35f, 786603, 5f, 5f, 1);
			unk_0x1AEF7184B203A58D(uParam0->f_58[iParam1], 30f);
		}
		else
		{
			unk_0x60274E99F9B27DEA(uParam0->f_74[iParam1], uParam0->f_58[iParam1], 0, 1, 15f, 786603, 5f, 5f, 1);
			unk_0x1AEF7184B203A58D(uParam0->f_58[iParam1], 10f);
		}
		unk_0xFADC0A217229F6B5(uParam0->f_74[iParam1], true);
		unk_0x4A4806F9D471E491(uParam0->f_58[iParam1], true, 0);
		unk_0x4A4806F9D471E491(uParam0->f_74[iParam1], true, 0);
		unk_0x5D96D8530B3D0904(iParam6, iParam1);
	}
}

void func_123(int iParam0, char* sParam1, char* sParam2, vector3 vParam3, vector3 vParam6, float fParam9, float fParam10)
{
	if (!unk_0x9F4FE516EAACCFC5(iParam0->f_8))
	{
		iParam0->f_8 = unk_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", false);
	}
	iParam0->f_9 = -1;
	iParam0->f_9 = unk_0xE9744DB7B8CA6965(vParam3, vParam6, 2);
	unk_0x93E9ED66DAB9FBE3(iParam0->f_8, iParam0->f_9, sParam1, sParam2);
	unk_0x57E0CF9BF653D99A(iParam0->f_9, fParam9);
	unk_0x5E4E98C6D98C9C57(iParam0->f_9, fParam10);
	unk_0xE3BB8E05FCEB3FBE(iParam0->f_8, true);
	unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 1, 0);
}

void func_124(int iParam0)
{
	unk_0x71199B01895C6202(744705981);
	unk_0xDB8844D4B7C60440(8, "FMIntro");
	if (unk_0xC844350D5D58C99A(iParam0->f_48))
	{
		unk_0xA954465BA6FDEFE2(&(iParam0->f_48));
	}
}

int func_125(int iParam0)
{
	bVar0 = true;
	if (unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 7))
	{
		return 1;
	}
	else
	{
		func_127();
		if (!unk_0xC844350D5D58C99A(iParam0->f_92[0]))
		{
			if (unk_0xB87F6CF6E5628C67(-1311154784))
			{
				iParam0->f_92[0] = unk_0x122AAB0B1D6F55AD(-1311154784, -3007,912f, 370,6909f, 13,7517f, 184,1746f, 0, 0, 0);
				unk_0x3E5CE368CD085FFA(iParam0->f_92[0], 0);
				unk_0xA22F71BBC8173C39(iParam0->f_92[0], false);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0xC844350D5D58C99A(iParam0->f_92[1]))
		{
			if (unk_0xB87F6CF6E5628C67(-1291952903))
			{
				iParam0->f_92[1] = unk_0x122AAB0B1D6F55AD(-1291952903, -2999,383f, 404,3465f, 14,3213f, 184,1746f, 0, 0, 0);
				unk_0x3E5CE368CD085FFA(iParam0->f_92[1], 0);
				unk_0xC4C7FD0EF3FEAB0B(iParam0->f_92[1], -0,0001f, -0,002f, 0,9978f, 0,0661f);
				unk_0xC6A6B4DDD6DC073A(iParam0->f_92[1], 8);
				unk_0xA22F71BBC8173C39(iParam0->f_92[1], false);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0xC844350D5D58C99A(iParam0->f_92[2]))
		{
			if (unk_0xB87F6CF6E5628C67(-433375717))
			{
				iParam0->f_92[2] = unk_0x122AAB0B1D6F55AD(-433375717, -2994,417f, 435,5293f, 14,278f, 184,1746f, 0, 0, 0);
				unk_0x3E5CE368CD085FFA(iParam0->f_92[2], 0);
				unk_0xC4C7FD0EF3FEAB0B(iParam0->f_92[2], 0,0072f, -0,0028f, 0,9981f, 0,0612f);
				unk_0xC6A6B4DDD6DC073A(iParam0->f_92[2], 2);
				unk_0xA22F71BBC8173C39(iParam0->f_92[2], false);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0xC844350D5D58C99A(iParam0->f_92[3]))
		{
			if (unk_0xB87F6CF6E5628C67(-1311154784))
			{
				iParam0->f_92[3] = unk_0x122AAB0B1D6F55AD(-1311154784, -2992,259f, 473,8287f, 14,5044f, 184,1746f, 0, 0, 0);
				unk_0x3E5CE368CD085FFA(iParam0->f_92[3], 0);
				unk_0xC4C7FD0EF3FEAB0B(iParam0->f_92[3], 0,0071f, -0,0058f, 0,9993f, 0,0375f);
				unk_0xC6A6B4DDD6DC073A(iParam0->f_92[3], 15);
				unk_0xA22F71BBC8173C39(iParam0->f_92[3], false);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0xC844350D5D58C99A(iParam0->f_92[4]))
		{
			if (unk_0xB87F6CF6E5628C67(-1995326987))
			{
				iParam0->f_92[4] = unk_0x122AAB0B1D6F55AD(-1995326987, -2988,246f, 425,2664f, 14,387f, 184,1746f, 0, 0, 0);
				unk_0x3E5CE368CD085FFA(iParam0->f_92[4], 0);
				unk_0xC4C7FD0EF3FEAB0B(iParam0->f_92[4], 0,0026f, -0,0014f, 0,998f, 0,0637f);
				unk_0xC002508A277213DE(iParam0->f_92[4], 0, 0);
				unk_0x58A0C35FA7CA6162(iParam0->f_92[4], 0, 156);
				unk_0xF95FF0A179413A39(iParam0->f_92[4], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (unk_0xDF1306B443CD3D15(iParam0->f_92[4], 0))
		{
			if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 1))
			{
				if (unk_0x40B3F576B41FA183(iParam0->f_92[4]) > 0)
				{
					unk_0x73BEC6F1685574E6(iParam0->f_92[4], 22, true);
					unk_0xA22F71BBC8173C39(iParam0->f_92[4], false);
					unk_0x5D96D8530B3D0904(&(iParam0->f_3), 1);
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (unk_0xB87F6CF6E5628C67(func_69()))
		{
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				if (!unk_0xC844350D5D58C99A(iParam0->f_98[iVar1]))
				{
					if (unk_0xC844350D5D58C99A(iParam0->f_92[iVar1]))
					{
						if (unk_0xDF1306B443CD3D15(iParam0->f_92[iVar1], 0))
						{
							iParam0->f_98[iVar1] = unk_0x852A19533F896693(iParam0->f_92[iVar1], 4, func_69(), -1, 0, false);
							unk_0x11AD11297DC58CC7(iParam0->f_98[iVar1], true);
							unk_0x56FDC9ADE35F7DB0(iParam0->f_92[iVar1], true, 1, 0);
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			unk_0x71199B01895C6202(-1311154784);
			unk_0x71199B01895C6202(-433375717);
			unk_0x71199B01895C6202(-1291952903);
			unk_0x71199B01895C6202(-1995326987);
			unk_0x5D96D8530B3D0904(&(iParam0->f_3), 7);
			return 1;
		}
	}
	return 0;
}

int func_126()
{
	func_127();
	if (unk_0xB87F6CF6E5628C67(func_69()))
	{
		if (unk_0xB87F6CF6E5628C67(-1311154784))
		{
			if (unk_0xB87F6CF6E5628C67(-433375717))
			{
				if (unk_0xB87F6CF6E5628C67(-1291952903))
				{
					if (unk_0xB87F6CF6E5628C67(-1995326987))
					{
						if (unk_0x3DDA6C6A285628E4(100, "FM_Intro_uber"))
						{
							if (unk_0x3DDA6C6A285628E4(101, "FM_Intro_uber"))
							{
								if (unk_0x3DDA6C6A285628E4(102, "FM_Intro_uber"))
								{
									if (unk_0x3DDA6C6A285628E4(103, "FM_Intro_uber"))
									{
										if (unk_0x3DDA6C6A285628E4(104, "FM_Intro_uber"))
										{
											if (unk_0xB4AE0788C1587752("mp_intro_seq@"))
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
		}
	}
	return 0;
}

void func_127()
{
	unk_0x523BCC9DC80CD82F(-1311154784);
	unk_0x523BCC9DC80CD82F(-433375717);
	unk_0x523BCC9DC80CD82F(-1291952903);
	unk_0x523BCC9DC80CD82F(-1995326987);
	unk_0x523BCC9DC80CD82F(func_69());
	unk_0x36187931D29E5BBE(100, "FM_Intro_uber");
	unk_0x36187931D29E5BBE(101, "FM_Intro_uber");
	unk_0x36187931D29E5BBE(102, "FM_Intro_uber");
	unk_0x36187931D29E5BBE(103, "FM_Intro_uber");
	unk_0x36187931D29E5BBE(104, "FM_Intro_uber");
	unk_0x3F423BF5B8125A50("mp_intro_seq@");
}

int func_128(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 4))
	{
		return 1;
	}
	else
	{
		unk_0x523BCC9DC80CD82F(-1903012613);
		unk_0x523BCC9DC80CD82F(1349725314);
		unk_0x523BCC9DC80CD82F(func_69());
		if ((unk_0xB87F6CF6E5628C67(-1903012613) && unk_0xB87F6CF6E5628C67(1349725314)) && unk_0xB87F6CF6E5628C67(func_69()))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (!unk_0xC844350D5D58C99A(iParam0->f_58[iVar0]))
				{
					if (iVar0 < 7)
					{
						iVar1 = -1903012613;
					}
					else
					{
						iVar1 = 1349725314;
					}
					func_7(iVar0, &vVar2, &iVar5);
					iParam0->f_58[iVar0] = unk_0x122AAB0B1D6F55AD(iVar1, vVar2, iVar5, 0, 0, 0);
					unk_0xC6A6B4DDD6DC073A(iParam0->f_58[iVar0], iVar0);
					unk_0xE121AE1BBF90E186(iParam0->f_58[iVar0], true);
					unk_0x0882E3DC0C991680(iParam0->f_58[iVar0], 2);
					unk_0x1E9649458B15960F(iParam0->f_58[iVar0], true);
				}
				if (unk_0xC844350D5D58C99A(iParam0->f_58[iVar0]))
				{
					if (!unk_0xC844350D5D58C99A(iParam0->f_74[iVar0]))
					{
						iParam0->f_74[iVar0] = unk_0x852A19533F896693(iParam0->f_58[iVar0], 4, func_69(), -1, 0, false);
						unk_0xE121AE1BBF90E186(iParam0->f_74[iVar0], true);
						unk_0x11AD11297DC58CC7(iParam0->f_74[iVar0], true);
					}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			if (!unk_0xC844350D5D58C99A(iParam0->f_58[iVar0]) || !unk_0xC844350D5D58C99A(iParam0->f_74[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		unk_0x71199B01895C6202(-1903012613);
		unk_0x71199B01895C6202(1349725314);
		unk_0x5D96D8530B3D0904(&(iParam0->f_3), 4);
		return 1;
	}
	return 0;
}

void func_129(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, false, iParam1);
}

int func_130(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_29(iParam0, iParam1, 0);
	if (iParam0->f_293)
	{
		if ((iParam0->f_13 + iVar0) + iParam2) <= unk_0x1C0640BA9A7327B3()
		{
			return 1;
		}
	}
	else if (iVar0 + iParam2) <= func_37(iParam0)
	{
		return 1;
	}
	return 0;
}

int func_131(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 8))
	{
		return 1;
	}
	iVar0 = 744705981;
	unk_0x523BCC9DC80CD82F(iVar0);
	unk_0x36187931D29E5BBE(8, "FMIntro");
	if (unk_0xB87F6CF6E5628C67(iVar0) && unk_0x3DDA6C6A285628E4(8, "FMIntro"))
	{
		if (!unk_0xC844350D5D58C99A(iParam0->f_48))
		{
			iParam0->f_48 = unk_0x122AAB0B1D6F55AD(iVar0, unk_0x87A3DA08ACDE0189(8, 0f, "FMIntro"), 0f, 0, 0, 0);
			unk_0x4D3C3C0B0DE2663E(iParam0->f_48, 8, "FMIntro", 1);
			unk_0xF12C1D85AFEE8FAD(iParam0->f_48, 5000f);
			unk_0x0AD2DA9636D01093(iParam0->f_48);
			unk_0x4A4806F9D471E491(iParam0->f_48, false, 0);
			unk_0x71199B01895C6202(iVar0);
		}
	}
	if (!unk_0xC844350D5D58C99A(iParam0->f_48))
	{
		return 0;
	}
	unk_0x5D96D8530B3D0904(&(iParam0->f_3), 8);
	return 1;
}

void func_132(int iParam0, int iParam1)
{
	if (func_130(iParam0, iParam1, 0))
	{
		if (iParam0->f_293)
		{
			iParam0->f_13 = (unk_0x1C0640BA9A7327B3() - func_29(iParam0, iParam1, 0));
		}
		else
		{
			iParam0->f_291 = 1;
		}
	}
}

void func_133(int iParam0)
{
	iParam0->f_13 = unk_0x1C0640BA9A7327B3();
}

int func_134(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_207(uParam0, bParam2, 0);
	if (unk_0x8CD06866876216F2() && !bParam2)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_135(var uParam0)
{
	uParam0->f_1 = 0;
}

Vector3 func_136(vector3 vParam0)
{
	return (-sin(vParam0.z) * cos(vParam0.x)), (cos(vParam0.z) * cos(vParam0.x)), sin(vParam0.x);
}

int func_137()
{
	return Global_1312812;
}

void func_138()
{
	unk_0xB5376EA942202450(-533,6674f, -1961,788f, 16,82666f, -429,5074f, -1860,31f, 22,79688f, 20,5f, 0, false, 0);
	unk_0xB5376EA942202450(224,4978f, -274,7691f, 48,87971f, 263,1581f, -170,5107f, 63,18772f, 21f, 0, false, 0);
}

void func_139(int iParam0)
{
	Global_2537071.f_4531 = iParam0;
}

void func_140()
{
	func_18(0);
	func_17(1);
}

bool func_141()
{
	return func_142();
}

int func_142()
{
	return func_19();
}

void func_143(bool bParam0, int iParam1)
{
	func_148();
	func_146(1);
	unk_0xA37A90C62806D848(1);
	unk_0x790015DC92C918E2();
	func_77(1, 1, 1, 0, 0, 0);
	func_145();
	func_144(12, 1, -1);
	func_139(0);
	unk_0x5413873D3F67BF93(true, -1);
	unk_0xBFE31971E49FA500(false);
	unk_0x8BCB70EB440DED83(false);
	func_146(1);
	func_84(1);
	Global_2439138.f_3747 = 1;
	if (bParam0)
	{
		if (!unk_0xF929B1A0A409FF93())
		{
			unk_0xF601BB024C8F11A7(1, iParam1);
		}
	}
}

void func_144(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1377170.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0x5D96D8530B3D0904(&(Global_1377170.f_1046), iParam0);
			}
			else
			{
				unk_0x0674E58A79778E99(&(Global_1377170.f_1046), iParam0);
			}
			break;
	}
}

void func_145()
{
	func_139(0);
	func_144(4, 1, -1);
	func_144(6, 1, -1);
	func_144(7, 1, -1);
	func_144(3, 1, -1);
	func_144(1, 1, -1);
	func_144(2, 1, -1);
	func_144(11, 1, -1);
	func_144(13, 1, -1);
	func_144(14, 1, -1);
	func_144(16, 1, -1);
}

void func_146(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_110290)
	{
		unk_0x2CBCC7DC0EEFF804(iVar0, iParam0);
		func_147(iVar0);
		iVar0++;
	}
}

void func_147(int iParam0)
{
	Global_110290[iParam0].f_21 = 0;
	StringCopy(&(Global_110290[iParam0]), "", 16);
	StringCopy(&(Global_110290[iParam0].f_4), "", 64);
	Global_110290[iParam0].f_23 = 0;
	Global_110290[iParam0].f_24 = { 0f, 0f, 0f };
	Global_110290[iParam0].f_27 = 0;
	Global_110290[iParam0].f_20 = 0;
	Global_110290[iParam0].f_22 = 0;
}

void func_148()
{
	Global_1312575 = 1;
	StringCopy(&(Global_1312575.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_1312575.f_9 = unk_0x12AB0310C2281427(&(Global_1312575.f_1));
}

int func_149()
{
	if (unk_0x757EF87A33649210())
	{
		func_151(0);
		unk_0x9EDE7E8C5E9E3EBF();
		return 1;
	}
	if (func_150() == 3)
	{
		func_151(2);
		unk_0xBA09B5D63DC2577F(250f);
	}
	if (unk_0xBFBEA211BED040AC() >= 250f)
	{
		unk_0xBA09B5D63DC2577F(250f);
	}
	if (unk_0x6239BB021F900BC7() == 0)
	{
		unk_0xBA09B5D63DC2577F(250f);
	}
	if (unk_0xBFBEA211BED040AC() <= 0f)
	{
		func_151(0);
		return 1;
	}
	return 0;
}

int func_150()
{
	return Global_1312467.f_19;
}

void func_151(int iParam0)
{
	if (Global_1312467.f_19 != iParam0)
	{
		Global_1312467.f_19 = iParam0;
	}
}

void func_152(int iParam0, bool bParam1)
{
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_156(iParam0, &iVar1);
	if (!unk_0x7F8A39872A07D2CE("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0x13CCE7704923A895(iVar1))
			{
				return;
			}
			if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == iVar1)
			{
				func_155(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0x13CCE7704923A895(iVar1))
			{
				return;
			}
			if (func_153(iParam0))
			{
				func_155(iParam0, 0);
			}
		}
		unk_0xD65FA6F2BAD953C8(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_153(int iParam0)
{
	Var0 = { func_154(iParam0) };
	if (Var0.f_1 != -1 && unk_0xEAE0D21A50E6C7F4(Global_37208[Var0.f_1], Var0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_154(var uParam0)
{
	iVar0 = uParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 7)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_155(int iParam0, bool bParam1)
{
	Var0 = { func_154(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_37208[Var0.f_1]), Var0);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_37208[Var0.f_1]), Var0);
	}
}

var func_156(int iParam0, int iParam1)
{
	Var0 = { func_157(iParam0) };
	*iParam1 = unk_0x0D1736C2E221BCEA(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_157(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { -447,4833f, 280,3197f, 77,5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906,786f, -573,7576f, 19,0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399,973f, 1148,756f, 113,3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598,6379f, -1608,399f, 26,0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556,5089f, 286,3181f, 81,1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111,7116f, -11,912f, 69,5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274,934f, -1714,726f, 53,7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147,433f, -2201,37f, 3,688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320,9934f, 265,2515f, 82,1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425,564f, -244,3f, 15,8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377,153f, -717,567f, 10,0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245,1564f, 370,211f, 104,7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173,1176f, -1003,279f, -99,9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199,9715f, -999,6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228,6058f, -992,0537f, -99,9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854,254f, 3686,739f, 33,2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444,8907f, 6013,587f, 30,7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522,845f, 3707,965f, 19,9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717,2994f, -974,4271f, 23,9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717,299f, -974,4271f, 23,9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449,785f, 4983,825f, 45,8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087,195f, -1988,445f, 28,649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982,233f, -2160,382f, 28,4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479,0568f, -1316,825f, 28,2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005,663f, -478,3461f, 49,0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			vVar5 = { func_158(1, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			vVar5 = { func_158(2, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			vVar5 = { func_158(3, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			vVar5 = { func_158(4, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			vVar5 = { func_158(5, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			vVar5 = { func_158(6, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			vVar5 = { func_158(7, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049922[34].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			vVar5 = { func_158(35, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			vVar5 = { func_158(36, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			vVar5 = { func_158(37, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			vVar5 = { func_158(38, 0) };
			Var0 = { -20,1f, -580,8f, 91,3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			vVar5 = { func_158(39, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			vVar5 = { func_158(40, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			vVar5 = { func_158(41, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			vVar5 = { func_158(42, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			vVar5 = { func_158(43, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470,3754f, -698,5207f, 51,5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460,6133f, -691,5562f, 69,9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300,633f, -997,4288f, -99,9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171,3969f, 494,2671f, 134,4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339,4982f, 434,0887f, 146,2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761,3884f, 615,7333f, 140,9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678,1752f, 591,0076f, 142,2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120,0541f, 553,793f, 181,0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571,4039f, 655,2008f, 142,6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742,2565f, 587,6547f, 143,0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857,2222f, 685,051f, 149,6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287,65f, 443,2707f, 94,6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374,2012f, 416,9688f, 142,5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16,29585f, -684,0385f, 33,50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341,1f, -1000f, -99,2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199,9716f, -1018,954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388,001f, -618,4197f, 30,8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 79:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			vVar5 = { func_158(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			vVar5 = { func_158(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			vVar5 = { func_158(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			vVar5 = { func_158(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			vVar5 = { func_158(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			vVar5 = { func_158(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			vVar5 = { func_158(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			vVar5 = { func_158(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			vVar5 = { func_158(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			vVar5 = { func_158(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			vVar5 = { func_158(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			vVar5 = { func_158(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			vVar5 = { func_158(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			vVar5 = { func_158(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			vVar5 = { func_158(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			vVar5 = { func_158(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			vVar5 = { func_158(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			vVar5 = { func_158(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			vVar5 = { func_158(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			vVar5 = { func_158(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			vVar5 = { func_158(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			vVar5 = { func_158(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			vVar5 = { func_158(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			vVar5 = { func_158(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			vVar5 = { func_158(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			vVar5 = { func_158(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			vVar5 = { func_158(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			vVar5 = { func_158(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			vVar5 = { func_158(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			vVar5 = { func_158(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			vVar5 = { func_158(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			vVar5 = { func_158(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			vVar5 = { func_158(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			vVar5 = { func_158(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			vVar5 = { func_158(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			vVar5 = { func_158(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			vVar5 = { func_158(91, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			vVar5 = { func_158(97, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			vVar5 = { func_158(103, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			vVar5 = { func_158(104, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			vVar5 = { func_158(105, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			vVar5 = { func_158(106, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			vVar5 = { func_158(107, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			vVar5 = { func_158(108, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			vVar5 = { func_158(109, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			vVar5 = { func_158(110, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			vVar5 = { func_158(111, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			vVar5 = { func_158(112, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			vVar5 = { func_158(113, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			vVar5 = { func_158(114, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			vVar5 = { func_158(103, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			vVar5 = { func_158(106, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			vVar5 = { func_158(109, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			vVar5 = { func_158(112, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938,3077f, -3196,112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512,5f, 4852f, -62,6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61,9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047,6f, -232,3503f, 38,0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520,0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266,802f, -3014,849f, -49,4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974,9203f, -3000,065f, -40,647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969,5376f, -3000,411f, -48,647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094,997f, -3100,012f, -39,9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059,995f, -3100f, -39,9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010,008f, -3100f, -39,9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372,6707f, 405,5235f, 144,5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282,0588f, -955,17f, 85,3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342,7946f, -997,4225f, -99,7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260,3268f, -997,4298f, -100,0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108,2369f, -753,5364f, 233,1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135,3226f, -746,3677f, 253,1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108,2572f, -753,5342f, 44,7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228,6161f, -992,053f, -99,9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 199,9716f, -999,6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 173,1165f, -1003,28f, -99,9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1257f, 4796,7f, -39,1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 694,4f, 5898,9f, -152,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1121,8f, 5516,3f, -101,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 1279,6f, 5233,2f, -80,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1158,6f, 5467,1f, -101,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 705,9f, 5838,5f, -152,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1316,5f, 5184f, -80,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1248f, 5276,1f, -80,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 1090,2f, 5559,2f, -101,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 1261f, 4808,6f, -39,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 721,8f, 5781,4f, -146,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 780,8f, 5703,4f, -136,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 868,1f, 5659,2f, -126,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1218,2f, 5321,2f, -85,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1278,5f, 4859,7f, -44,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1187,2f, 5419,8f, -96,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1344,7f, 5136,4f, -75,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1363,4f, 5039,5f, -65,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 1049,3f, 5602,1f, -107,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 1337,8f, 4944,3f, -55,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 961,5f, 5646,9f, -117,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { 345,0041f, 4842,001f, -59,9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
			Var0 = { 279,9322f, -1337,49f, 23,7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 192:
			Var0 = { -1604,664f, -3012,583f, -79,9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
			Var0 = { -1505,783f, -3012,587f, -79,9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { -630,4205f, -236,7843f, 37,057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 195:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 196:
			Var0 = { 2800f, -3942f, 182,5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
			break;
		
		case 197:
			Var0 = { 1049,6f, -3196,6f, -38,5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 198:
			Var0 = { 1093,6f, -3196,6f, -38,5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 199:
			Var0 = { 1009,5f, -3196,6f, -38,5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 200:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 201:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 202:
			Var0 = { 976,6364f, 70,29476f, 115,1641f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 203:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 204:
			Var0 = { 2479,3f, -273,9f, -58f };
			Var0.f_3 = "ch_DLC_Casino_Heist";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 205:
			Var0 = { 2730f, -380f, -49f };
			Var0.f_3 = "ch_DLC_Arcade";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 206:
			Var0 = { 2800f, -380f, -48,5f };
			Var0.f_3 = "ch_DLC_Plan";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 207:
			Var0 = { 2497,7f, -312,8f, -69,9f };
			Var0.f_3 = "ch_DLC_Tunnel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 208:
			Var0 = { 2523,4f, -270f, -58,7f };
			Var0.f_3 = "ch_DLC_Casino_Back";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 209:
			Var0 = { 2504,4f, -257,2f, -39,1f };
			Var0.f_3 = "ch_DLC_Casino_Hotel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 210:
			Var0 = { 2554f, -281,4f, -64,7f };
			Var0.f_3 = "ch_DLC_Casino_Loading";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 211:
			Var0 = { 2488,3f, -267,4f, -70,6f };
			Var0.f_3 = "ch_DLC_Casino_Vault";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 212:
			Var0 = { 2519,9f, -255,3f, -24,1f };
			Var0.f_3 = "ch_DLC_Casino_Utility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 213:
			Var0 = { 2572,9f, -253,4f, -64,7f };
			Var0.f_3 = "ch_dlc_casino_shaft";
			Var0.f_4 = Var0.f_3;
			break;
			return Var0;
	}
}

struct<6> func_158(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			Var0 = { -794,9184f, 339,6266f, 200,4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794,9184f, 339,6266f, 200,4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761,0982f, 317,6259f, 169,5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761,1888f, 317,6295f, 216,0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795,3856f, 340,0188f, 152,7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778,5056f, 332,3779f, 212,1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258,1807f, -950,6853f, 70,0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285,0051f, -957,6552f, 85,3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471,882f, -530,7484f, 62,34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471,882f, -530,7484f, 49,72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463,15f, -540,2369f, 74,2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885,3702f, -451,4775f, 119,327f };
			Var0.f_3 = { 0f, 0f, 27,55617f };
			break;
		
		case 36:
			Var0 = { -913,0385f, -438,4284f, 114,3997f };
			Var0.f_3 = { 0f, 0f, -153,3093f };
			break;
		
		case 37:
			Var0 = { -892,5499f, -430,4789f, 88,25368f };
			Var0.f_3 = { 0f, 0f, 116,9193f };
			break;
		
		case 38:
			Var0 = { -35,0462f, -576,317f, 82,90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10,3788f, -590,7431f, 93,02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22,2487f, -589,1461f, 80,2305f };
			Var0.f_3 = { 0f, 0f, 69,88f };
			break;
		
		case 40:
			Var0 = { -900,6311f, -376,7462f, 78,27306f };
			Var0.f_3 = { 0f, 0f, 26,92611f };
			break;
		
		case 41:
			Var0 = { -929,483f, -374,5104f, 102,2329f };
			Var0.f_3 = { 0f, 0f, -152,5531f };
			break;
		
		case 63:
			Var0 = { -914,4202f, -375,8189f, 114,4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617,1647f, 64,6042f, 100,8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584,2015f, 42,7133f, 86,4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609,5665f, 50,2203f, 98,3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171,3969f, 494,2671f, 134,4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339,4982f, 434,0887f, 146,2206f };
			Var0.f_3 = { 0f, 0f, -63,5f };
			break;
		
		case 75:
			Var0 = { -761,3884f, 615,7333f, 140,9805f };
			Var0.f_3 = { 0f, 0f, -71,5f };
			break;
		
		case 76:
			Var0 = { -678,1752f, 591,0076f, 142,2196f };
			Var0.f_3 = { 0f, 0f, 40,5f };
			break;
		
		case 77:
			Var0 = { 120,0541f, 553,793f, 181,0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571,4039f, 655,2008f, 142,6293f };
			Var0.f_3 = { 0f, 0f, -14,5f };
			break;
		
		case 79:
			Var0 = { -742,2565f, 587,6547f, 143,0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857,2222f, 685,051f, 149,6502f };
			Var0.f_3 = { 0f, 0f, 4,5f };
			break;
		
		case 81:
			Var0 = { -1287,65f, 443,2707f, 94,6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374,2012f, 416,9688f, 142,6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573,098f, -4085,806f, 9,7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342,8157f, -997,4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260,3297f, -997,4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572,187f, -570,8315f, 109,9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383,954f, -476,7112f, 73,507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138,0029f, -629,739f, 170,2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74,8895f, -817,6883f, 244,8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100,764f, -3159,384f, -34,9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005,806f, -3157,67f, -36,0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576,571f, -569,7595f, 85,5f };
				Var0.f_3 = { 0f, 0f, 36,1f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571,254f, -566,5865f, 85,5f };
				Var0.f_3 = { 0f, 0f, -53,9f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568,098f, -571,9171f, 85,5f };
				Var0.f_3 = { 0f, 0f, -143,9f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384,518f, -475,8657f, 56,1f };
				Var0.f_3 = { 0f, 0f, 98,7f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384,538f, -475,8829f, 48,1f };
				Var0.f_3 = { 0f, 0f, 98,7f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378,994f, -477,2481f, 56,1f };
				Var0.f_3 = { 0f, 0f, -81,1f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186,5683f, -576,4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96,16f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113,886f, -564,3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110,96f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134,6568f, -635,1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9,04f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79,0479f, -822,6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70,3086f, -819,5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79,9861f, -818,425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_159()
{
	return Global_2461841;
}

bool func_160()
{
	return Global_2460678;
}

void func_161(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(bParam0, 0);
	}
	func_179(0);
	func_162(66);
}

void func_162(int iParam0)
{
	iVar0 = func_137();
	if (Global_1312877)
	{
		sVar1 = func_178(iParam0);
		iVar2 = unk_0x12AB0310C2281427(sVar1);
		func_177(&Global_2462940, 1, 0);
		unk_0x1ADDCBD29A516AA5(iVar2, 1, iVar0, iParam0, 0);
	}
	if (iParam0 == 2)
	{
		func_163();
	}
	Global_1312812 = iParam0;
}

void func_163()
{
	if (Global_2460586)
	{
		if (func_165())
		{
			unk_0x53491B90E4FD0E56(0);
			func_164();
		}
	}
}

void func_164()
{
	if (Global_2460583)
	{
		if (!Global_2460582)
		{
			Global_2460582 = 1;
			Global_2460591 = unk_0x1C0640BA9A7327B3();
			Global_2460590 = 1;
		}
	}
}

int func_165()
{
	if (Global_2451426.f_6464 && Global_2460583)
	{
		if (func_168(0))
		{
			if (func_166() && !unk_0x757EF87A33649210())
			{
				if (((Global_2451426.f_6486 == 122 || Global_2451426.f_6486 == 123) || Global_2451426.f_6486 == 124) || Global_2451426.f_6486 == 125)
				{
					return 1;
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_2425662[unk_0xD803B885F5E47A62()].f_68.f_2, 26))
				{
					return 1;
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_2425662[unk_0xD803B885F5E47A62()].f_68.f_2, 27))
				{
					return 1;
				}
				if (Global_1687717)
				{
					return 1;
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_37, 23))
				{
					if (!func_79(unk_0xD803B885F5E47A62(), 0) && !func_82())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_166()
{
	if (func_167() == 0)
	{
		return 1;
	}
	return 0;
}

int func_167()
{
	return Global_1312467.f_18;
}

int func_168(int iParam0)
{
	if (func_175(unk_0xD803B885F5E47A62()) && unk_0xEAE0D21A50E6C7F4(Global_1676377.f_4, 22))
	{
		return 0;
	}
	if (Global_1315690)
	{
		return 0;
	}
	if (!unk_0x8CD06866876216F2())
	{
		return 0;
	}
	if (func_174())
	{
		return 0;
	}
	if ((Global_2460584 && func_173()) || Global_2460584 == 0)
	{
		return 1;
	}
	if (Global_2451426.f_6486 == 123 && Global_2460587)
	{
		return 1;
	}
	if (Global_2460585)
	{
		if (Global_2451426.f_6486 == 122)
		{
			return 1;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_37, 23))
	{
		if (!func_79(unk_0xD803B885F5E47A62(), 0) && !func_82())
		{
			return 1;
		}
	}
	if (Global_2460588)
	{
		if (iParam0 == 0)
		{
			if ((Global_2451426.f_6486 == 123 || (Global_2451426.f_6486 == 124 && func_171() == 1)) || Global_2451426.f_6486 == 125)
			{
				return 1;
			}
		}
	}
	if ((Global_2451426.f_6464 || func_169(-1046478848)) && Global_2460589)
	{
		if (iParam0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_169(float fParam0)
{
	vVar0 = { func_170(unk_0xD803B885F5E47A62()) };
	if (vVar0.z < fParam0)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				if (!unk_0xBADF5264209B7544(unk_0x16F2683693E537C9()))
				{
					return 1;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_170(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), false);
}

int func_171()
{
	return func_172(unk_0xD803B885F5E47A62());
}

int func_172(int iParam0)
{
	return unk_0xDC4DD3980107166C(Global_2425662[iParam0].f_310.f_3, 28, 31);
}

bool func_173()
{
	return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_226020, 12);
}

bool func_174()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 11);
}

int func_175(int iParam0)
{
	if (iParam0 != func_51())
	{
		if (func_104(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_176(Global_2425662[iParam0].f_310.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_176(int iParam0)
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
		case 79:
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
	}
	return -1;
}

void func_177(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x2B6E0A53779D29EA();
		}
		else
		{
			*uParam0 = unk_0x6794171A1021C2D8();
		}
	}
	else
	{
		*uParam0 = unk_0x1C0640BA9A7327B3();
	}
	uParam0->f_1 = 1;
}

char* func_178(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TRANSITION_STATE_EMPTY";
		
		case 1:
			return "TRANSITION_STATE_SP_SWOOP_UP";
		
		case 2:
			return "TRANSITION_STATE_MP_SWOOP_UP";
		
		case 3:
			return "TRANSITION_STATE_CREATOR_SWOOP_UP";
		
		case 4:
			return "TRANSITION_STATE_PRE_HUD_CHECKS";
		
		case 5:
			return "TRANSITION_STATE_WAIT_HUD_EXIT";
		
		case 7:
			return "TRANSITION_STATE_SP_SWOOP_DOWN";
		
		case 8:
			return "TRANSITION_STATE_MP_SWOOP_DOWN";
		
		case 6:
			return "TRANSITION_STATE_WAIT_FOR_SUMMON";
		
		case 9:
			return "TRANSITION_STATE_CANCEL_JOINING";
		
		case 15:
			return "TRANSITION_STATE_WAIT_ON_INVITE";
		
		case 10:
			return "TRANSITION_STATE_RETRY_LOADING";
		
		case 11:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_1";
		
		case 12:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_2";
		
		case 13:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_3";
		
		case 14:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_4";
		
		case 16:
			return "TRANSITION_STATE_PREJOINING_FM_SESSION_CHECKS";
		
		case 17:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_FM";
		
		case 18:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_FM";
		
		case 19:
			return "TRANSITION_STATE_CONFIRM_FM_SESSION_JOINING";
		
		case 21:
			return "TRANSITION_STATE_CREATION_ENTER_SESSION";
		
		case 22:
			return "TRANSITION_STATE_PRE_FM_LAUNCH_SCRIPT";
		
		case 23:
			return "TRANSITION_STATE_FM_TEAMFULL_CHECK";
		
		case 24:
			return "TRANSITION_STATE_START_FM_LAUNCH_SCRIPT";
		
		case 25:
			return "TRANSITION_STATE_FM_TRANSITION_CREATE_PLAYER";
		
		case 26:
			return "TRANSITION_STATE_IS_FM_AND_TRANSITION_READY";
		
		case 27:
			return "TRANSITION_STATE_FM_SWOOP_DOWN";
		
		case 29:
			return "TRANSITION_STATE_FM_FINAL_SETUP_PLAYER";
		
		case 28:
			return "TRANSITION_STATE_POST_BINK_VIDEO_WARP";
		
		case 30:
			return "TRANSITION_STATE_MOVE_FM_TO_RUNNING_STATE";
		
		case 31:
			return "TRANSITION_STATE_FM_HOW_TO_TERMINATE";
		
		case 20:
			return "TRANSITION_STATE_WAIT_JOIN_FM_SESSION";
		
		case 32:
			return "TRANSITION_STATE_START_CREATOR_PRE_LAUNCH_SCRIPT_CHECK";
		
		case 33:
			return "TRANSITION_STATE_START_CREATOR_LAUNCH_SCRIPT";
		
		case 34:
			return "TRANSITION_STATE_CREATOR_TRANSITION_CREATE_PLAYER";
		
		case 35:
			return "TRANSITION_STATE_IS_CREATOR_AND_TRANSITION_READY";
		
		case 36:
			return "TRANSITION_STATE_CREATOR_SWOOP_DOWN";
		
		case 37:
			return "TRANSITION_STATE_CREATOR_FINAL_SETUP_PLAYER";
		
		case 38:
			return "TRANSITION_STATE_MOVE_CREATOR_TO_RUNNING_STATE";
		
		case 39:
			return "TRANSITION_STATE_PREJOINING_TESTBED_SESSION_CHECKS";
		
		case 40:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_TESTBED";
		
		case 41:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_HOST_TESTBED";
		
		case 42:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_TESTBED";
		
		case 43:
			return "TRANSITION_STATE_LOOK_TO_HOST_SESSION_TESTBED";
		
		case 44:
			return "TRANSITION_STATE_CONFIRM_TESTBED_SESSION_JOINING";
		
		case 46:
			return "TRANSITION_STATE_START_TESTBED_LAUNCH_SCRIPT";
		
		case 47:
			return "TRANSITION_STATE_TESTBED_TRANSITION_CREATE_PLAYER";
		
		case 48:
			return "TRANSITION_STATE_IS_TESTBED_AND_TRANSITION_READY";
		
		case 49:
			return "TRANSITION_STATE_TESTBED_SWOOP_DOWN";
		
		case 50:
			return "TRANSITION_STATE_TESTBED_FINAL_SETUP_PLAYER";
		
		case 51:
			return "TRANSITION_STATE_MOVE_TESTBED_TO_RUNNING_STATE";
		
		case 52:
			return "TRANSITION_STATE_TESTBED_HOW_TO_TERMINATE";
		
		case 45:
			return "TRANSITION_STATE_WAIT_JOIN_TESTBED_SESSION";
		
		case 54:
			return "TRANSITION_STATE_WAIT_FOR_TRANSITION_SESSION_TO_SETUP";
		
		case 53:
			return "TRANSITION_STATE_QUIT_CURRENT_SESSION_PROMPT";
		
		case 55:
			return "TRANSITION_STATE_TERMINATE_SP";
		
		case 56:
			return "TRANSITION_STATE_WAIT_TERMINATE_SP";
		
		case 57:
			return "TRANSITION_STATE_KICK_TERMINATE_SESSION";
		
		case 58:
			return "TRANSITION_STATE_TERMINATE_SESSION";
		
		case 59:
			return "TRANSITION_STATE_WAIT_TERMINATE_SESSION";
		
		case 60:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_HOLD";
		
		case 61:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_MOVE_INTO_HOLDING_STATE";
		
		case 62:
			return "TRANSITION_STATE_TEAM_SWAPPING_CHECKS";
		
		case 63:
			return "TRANSITION_STATE_RETURN_TO_SINGLEPLAYER";
		
		case 64:
			return "TRANSITION_STATE_WAIT_FOR_SINGLEPLAYER_TO_START";
		
		case 65:
			return "TRANSITION_STATE_WAITING_FOR_EXTERNAL_TERMINATION_CALL";
		
		case 66:
			return "TRANSITION_STATE_TERMINATE_MAINTRANSITION";
		
		case 67:
			return "TRANSITION_STATE_WAIT_FOR_DIRTY_LOAD_CONFIRM";
		
		case 68:
			return "TRANSITION_STATE_DLC_INTRO_BINK";
		
		default:
	}
	return "";
}

void func_179(int iParam0)
{
	uVar0 = func_180();
	Global_1312811 = iParam0;
}

var func_180()
{
	return Global_1312811;
}

void func_181(bool bParam0, bool bParam1)
{
	func_183(&Global_22131, bParam1);
	unk_0x23F80404F3C4C299(0);
	iVar0 = 1;
	if (bParam0)
	{
		if (iVar0 == 1)
		{
			unk_0x4422CF36C77B77E7();
			func_182(0);
			if (unk_0xC844350D5D58C99A(Global_1315659))
			{
				if (unk_0x9C77D2D0559097F0(Global_1315659, 0))
				{
					if (!unk_0xAF6690C489CC6203(Global_1315659))
					{
						unk_0x73270B3C9CC833FD(Global_1315659, false, 0);
					}
					unk_0xEBA53F35D0085654(&Global_1315659);
				}
			}
		}
	}
}

void func_182(int iParam0)
{
	if (iParam0 == 0)
	{
		Global_2462918 = 0;
	}
	Global_1312467.f_18 = iParam0;
}

void func_183(var uParam0, bool bParam1)
{
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	if (unk_0x9F4FE516EAACCFC5(uParam0->f_9))
	{
		if (unk_0xFBB4F23D534EB790(uParam0->f_9))
		{
			func_184(0);
		}
		unk_0x9A8DDC7C522F5BF5(uParam0->f_9, 0);
	}
	if (!Global_42562)
	{
		unk_0x051C254DA616D646(1);
		unk_0x36629DB72EBCB78C(0f);
		unk_0x58478905E1A5347E(0f);
	}
	Global_2405072.f_598 = 0f;
	if (!bParam1)
	{
		unk_0xB3A1B75CB59FEB56(false, false, 0, 1, 0, 0);
	}
}

void func_184(int iParam0)
{
	Global_22209 = iParam0;
}

void func_185(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_190(1, 0, 1);
	}
	else
	{
		func_186(iParam1);
	}
}

void func_186(int iParam0)
{
	func_189();
	if (iParam0 == 0)
	{
		if (unk_0x1F045D4082B1ADB2())
		{
			return;
		}
	}
	if (func_188() == 0 || unk_0x798A3F1296751F46())
	{
		func_187(1);
		unk_0x68619D16FD876EAA(0);
		unk_0x68619D16FD876EAA(0);
	}
}

void func_187(int iParam0)
{
	if (Global_1312467.f_20 != iParam0)
	{
		Global_1312467.f_20 = iParam0;
	}
}

int func_188()
{
	return Global_1312467.f_20;
}

void func_189()
{
	Global_2462226 = 1;
}

void func_190(int iParam0, bool bParam1, bool bParam2)
{
	if (func_191())
	{
		return;
	}
	if ((func_188() == 1 || unk_0x798A3F1296751F46()) || iParam0)
	{
		func_187(0);
		unk_0x68619D16FD876EAA(1);
		if (!bParam1)
		{
			unk_0x68619D16FD876EAA(1);
		}
		if (bParam2)
		{
			unk_0x730943CECC025C36();
		}
	}
}

int func_191()
{
	if (func_192())
	{
		return Global_2460590;
	}
	return 0;
}

int func_192()
{
	if (Global_2460583)
	{
		return Global_2460582;
	}
	return 0;
}

void func_193(bool bParam0)
{
	if (bParam0)
	{
		unk_0xCE7D0828D683D536();
		unk_0xEF7906595D9044B8(-1);
		unk_0xD980FF3526C8CB9E(1);
		unk_0xE9B51BC60A3B47D9(1);
		unk_0xD60411959D5D930B(1f);
		unk_0xC83E7A5E408DF68C(3);
		unk_0xFF42993F8A095C58(3);
	}
	else
	{
		unk_0xE342F209E49C5314(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, false, 1);
		unk_0xEF7906595D9044B8(0);
		unk_0xD980FF3526C8CB9E(0);
		unk_0xE9B51BC60A3B47D9(0);
		unk_0xD60411959D5D930B(0f);
		unk_0xC83E7A5E408DF68C(0);
		unk_0xFF42993F8A095C58(0);
	}
}

void func_194(bool bParam0)
{
	if (bParam0)
	{
		Global_98796.f_8 = 1;
	}
	else
	{
		Global_98796.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_195(iVar0);
		iVar0++;
	}
}

void func_195(int iParam0)
{
	Global_98796.f_181[iParam0] = 1;
	Global_98796.f_180 = 1;
}

void func_196(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	func_140();
	func_17(1);
	func_139(1);
	func_144(12, 1, -1);
	func_206();
	unk_0xBEF52C1D400C0A44(0);
	if (bParam0)
	{
		unk_0x225FD7B8E8464E9E(unk_0xD803B885F5E47A62(), iParam6);
	}
	if (bParam1)
	{
		iVar0 |= 8192;
	}
	if (bParam4)
	{
		iVar0 |= 4;
	}
	if (!bParam2)
	{
		iVar0 |= 16384;
	}
	if (bParam3)
	{
		iVar0 |= 32768;
	}
	func_197(unk_0xD803B885F5E47A62(), 0, iVar0, 0);
	if (bParam5)
	{
		if (unk_0x82F88FD400E98881(unk_0x16F2683693E537C9()))
		{
			unk_0xDB4B1656BA06B94E(unk_0x16F2683693E537C9(), 0);
		}
	}
}

void func_197(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (unk_0xC6F697B2083C83D4())
		{
			unk_0x31A33F7BCB08CB80(false);
		}
	}
	if (func_205())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x8CD06866876216F2())
	{
		iVar0 = iParam2;
		unk_0x98E4DC66A651C9FA(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0xA14BB9332558B949())
		{
			bVar1 = false;
		}
		if (!func_166())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x40B8C182D63932FC(iParam0) && (unk_0xE1DBBD6CE209517C(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(iParam0), 0))
			{
				return;
			}
			iVar27 = unk_0x9539D44F3E4492F6(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x8CD06866876216F2())
				{
					unk_0x30134914EFF0516E(1);
				}
				else if (bVar14 || (!func_79(unk_0xD803B885F5E47A62(), 0) && !func_82()))
				{
					unk_0x4A4806F9D471E491(iVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x8CD06866876216F2() && !bVar19)
					{
						unk_0x30134914EFF0516E(0);
					}
					Global_2425662[iParam0].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_202(0, 0, 0);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_201(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
				{
					if (!bVar22)
					{
						unk_0x20641932E5104B25(iVar27, true, 0);
					}
				}
				if (!unk_0xD59B17D2DFF98E26(iVar27))
				{
					if (!bVar21)
					{
						unk_0x1E9649458B15960F(iVar27, false);
					}
					unk_0x120A395B0ECB8EA5(iVar27, true);
				}
				else if (!bVar21)
				{
					unk_0x1E9649458B15960F(iVar27, false);
				}
				unk_0x25C5402CC10F76CD(iVar27, true);
				unk_0x62DE699599F0417E(iParam0, 0);
				unk_0x7569764C11F70C0A(iParam0, 0);
				if (unk_0xCCBA4C0B3BD2AB7B(iVar27) && unk_0x8A83E339B374E53A(iVar27))
				{
					unk_0xE7EE28867F07D06D(iVar27);
				}
				unk_0x46CB381A452EF99D(iVar27, 1);
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) == 0)
				{
					func_200();
					func_199();
				}
				if (unk_0x0C2635BB5127C8FB())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0xEB880D98B5988D0C())
				{
				}
				Global_2425662[iParam0].f_245 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405072.f_2672)
				{
					Global_2405072.f_2672 = 0;
				}
			}
			else
			{
				if (!func_201(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
				{
					if (!bVar22)
					{
						unk_0x20641932E5104B25(iVar27, !bVar15, 0);
					}
					if (!unk_0xD59B17D2DFF98E26(iVar27))
					{
						if (!bVar21)
						{
							unk_0x1E9649458B15960F(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x120A395B0ECB8EA5(iVar27, true);
						}
					}
					if (func_198(Global_4456448.f_232883))
					{
						unk_0x1E9649458B15960F(iVar27, true);
					}
				}
				if (Global_1312854)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0x62DE699599F0417E(iParam0, 0);
				}
				else
				{
					unk_0x62DE699599F0417E(iParam0, 1);
				}
				unk_0x25C5402CC10F76CD(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x2EF364CB160B45F2(iVar27) && !unk_0x405E212DDE472467(iVar27, 0))
					{
						unk_0x327AAEE25F323797(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0x98E4DC66A651C9FA(iParam0, bParam1, iVar28);
		}
	}
}

bool func_198(int iParam0)
{
	return iParam0 == 17;
}

void func_199()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

void func_200()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[unk_0xD803B885F5E47A62()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_201(int iParam0)
{
	if (unk_0x405E212DDE472467(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xD1960163A3042274(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_202(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x437347B10A200C4B(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0x34BFC6F0CB887BC2(iParam1))
			{
				if (!unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), unk_0x83FACCC48B68F9D1(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_204();
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_2359302.f_67, 1))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x398B6B43792F03FE(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0x5D96D8530B3D0904(&(Global_2359302.f_67), 1);
			}
		}
		if (func_79(unk_0xD803B885F5E47A62(), 0))
		{
			unk_0xD51AAA59D51D8056(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(iParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(iParam0, iParam1);
		func_203(-2008016205, iParam0);
	}
}

void func_203(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD8B681091EBE4064(iVar0, iParam1, 1);
	}
}

void func_204()
{
	if (!unk_0xB7DDF77EF860941D())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = unk_0xA4FD7964FEE91ED8(iVar0);
				iVar0++;
			}
			unk_0x5D96D8530B3D0904(&(Global_2359302.f_67), 2);
			unk_0x5D96D8530B3D0904(&(Global_2359302.f_67), 0);
		}
	}
}

int func_205()
{
	if (Global_1590535[unk_0xD803B885F5E47A62()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

void func_206()
{
	Global_22211.f_5 = 1;
}

void func_207(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x8CD06866876216F2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x2B6E0A53779D29EA();
			}
			else
			{
				*uParam0 = unk_0x6794171A1021C2D8();
			}
		}
		else
		{
			*uParam0 = unk_0x1C0640BA9A7327B3();
		}
		uParam0->f_1 = 1;
	}
}

bool func_208(var uParam0)
{
	return uParam0->f_1;
}

void func_209(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_142, 8))
		{
			unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_142), 8);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_142, 8))
	{
		unk_0x0674E58A79778E99(&(Global_1590535[unk_0xD803B885F5E47A62()].f_142), 8);
	}
}

bool func_210()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_142, 8);
}

int func_211()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

void func_212(int iParam0)
{
	unk_0x9DD8618CA5BF832D(unk_0x9539D44F3E4492F6(iParam0), 346, true);
}

void func_213(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 12))
	{
		unk_0x5D96D8530B3D0904(&(iParam0->f_3), 12);
	}
	else
	{
		if (iParam0->f_6 > 30)
		{
			if (!Global_1662465)
			{
				Global_1662465 = 1;
				Global_1662466 = 1;
			}
		}
		if (iParam0->f_6 > 31)
		{
			if (unk_0x83D8570832F172A7(Global_1662464))
			{
				if (iParam0->f_5 < 23)
				{
					switch (iParam0->f_5)
					{
						case 0:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 33)
								{
									if (((unk_0xB3260A60545D3F11() == 9 || unk_0xB3260A60545D3F11() == 10) || unk_0xB3260A60545D3F11() == 8) || unk_0xB3260A60545D3F11() == 12)
									{
										func_218("artdir", 0f, 420f, "left", 0,3f, 0,3f);
									}
									else
									{
										func_218("artdir", 0f, 450f, "left", 0,3f, 0,3f);
									}
									func_217("artdir", "Art Director", 175f, "HUD_COLOUR_FRIENDLY", 1);
									func_216("artdir", "AARON GARBUT", 210f, "|", 1);
									func_215("artdir", 0,16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_130(iParam0, 33, -3390))
							{
								func_214("artdir", 0,16f);
								iParam0->f_5++;
							}
							break;
						
						case 1:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (func_130(iParam0, 33, -2940))
								{
									func_218("techdir", 0f, 30f, "left", 0,3f, 0,3f);
									func_217("techdir", "Technical Director", 100f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_216("techdir", "ADAM FOWLER", 185f, "|", 1);
									func_215("techdir", 0,16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_130(iParam0, 33, -450))
							{
								func_214("techdir", 0,16f);
								iParam0->f_5++;
							}
							break;
						
						case 2:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 35)
								{
									func_218("assartdir", 0f, 100f, "left", 0,3f, 0f);
									func_217("assartdir", "Associate Art Directors", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_216("assartdir", "ADAM COCHRANE|MICHAEL KANE", 100f, "|", 1);
									func_215("assartdir", 0,16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (iParam0->f_6 > 35)
							{
								func_214("assartdir", 0f);
								iParam0->f_5++;
							}
							break;
						
						case 3:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 36)
								{
									if (((unk_0xB3260A60545D3F11() == 9 || unk_0xB3260A60545D3F11() == 10) || unk_0xB3260A60545D3F11() == 8) || unk_0xB3260A60545D3F11() == 12)
									{
										func_218("asstecdir", 0f, 370f, "right", 0,3f, 0,3f);
									}
									else
									{
										func_218("asstecdir", 0f, 400f, "right", 0,3f, 0,3f);
									}
									func_217("asstecdir", "Associate Technical Directors", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_216("asstecdir", "KLAAS SCHILSTRA|PHIL HOOKER", 150f, "|", 1);
									func_215("asstecdir", 0,16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_130(iParam0, 36, -4740))
							{
								func_214("asstecdir", 0,16f);
								iParam0->f_5++;
							}
							break;
						
						case 4:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (func_130(iParam0, 36, -3810))
								{
									func_218("leadprog", 30f, 20f, "right", 0,3f, 0,3f);
									func_217("leadprog", "Lead Programmers", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_216("leadprog", "DANIEL YELLAND|ROBERT TRICKEY", 145f, "|", 1);
									func_215("leadprog", 0,16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_130(iParam0, 36, -600))
							{
								func_214("leadprog", 0,16f);
								iParam0->f_5++;
							}
							break;
						
						case 5:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 37)
								{
									if (((unk_0xB3260A60545D3F11() == 9 || unk_0xB3260A60545D3F11() == 10) || unk_0xB3260A60545D3F11() == 8) || unk_0xB3260A60545D3F11() == 12)
									{
										func_218("senprog", 0f, 200f, "left", 0,3f, 0,3f);
									}
									else
									{
										func_218("senprog", 0f, 225f, "left", 0,3f, 0,3f);
									}
									func_217("senprog", "Senior Programmers", 20f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_216("senprog", "JOHN HYND|JOHN GURNEY|DAN CONTI|ROSS CHILDS|STEPHEN LaVALLEY", 75f, "|", 1);
									func_215("senprog", 0,16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_130(iParam0, 37, -1350))
							{
								func_214("senprog", 0,16f);
								iParam0->f_5++;
							}
							break;
						
						case 6:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 38)
								{
									func_218("prog", 0f, 100f, "left", 0,3f, 0,3f);
									func_217("prog", "Programmers", 35f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_216("prog", "MIGUEL FREITAS|STUART ROSKELL|ALLAN WALTON|PAU AGUILAR FRUTO", 100f, "|", 1);
									func_215("prog", 0,16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_130(iParam0, 38, -4320))
							{
								func_214("prog", 0,16f);
								iParam0->f_5++;
							}
							break;
						
						case 7:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (func_130(iParam0, 38, -3240))
								{
									if (((unk_0xB3260A60545D3F11() == 9 || unk_0xB3260A60545D3F11() == 10) || unk_0xB3260A60545D3F11() == 8) || unk_0xB3260A60545D3F11() == 12)
									{
										func_218("socclub", 40f, 305f, "right", 0,3f, 0,3f);
									}
									else
									{
										func_218("socclub", 40f, 325f, "right", 0,3f, 0,3f);
									}
									func_217("socclub", "Social Club", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_216("socclub", "IAN McFARLAND|KEVIN BACA", 40f, "|", 1);
									func_215("socclub", 0,16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_130(iParam0, 38, -870))
							{
								func_214("socclub", 0,16f);
								iParam0->f_5++;
							}
							break;
						
						case 8:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 39)
								{
									func_218("audio", 0f, 10f, "right", 0,3f, 0,3f);
									func_217("audio", "Audio", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_216("audio", "MATTHEW SMITH|CRAIG CONNER|ALASTAIR MacGREGOR|JEFFREY WHITCHER", 35f, "|", 1);
									func_215("audio", 0,16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_130(iParam0, 39, -1620))
							{
								func_214("audio", 0,16f);
								iParam0->f_5++;
							}
							break;
						
						case 9:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 40)
								{
									func_218("scrlead", 50f, 85f, "right", 0,3f, 0,3f);
									func_217("scrlead", "Script Leads", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_216("scrlead", "BOBBY WRIGHT|KEITH McLEMAN|BRENDA CAREY|ROWAN COCKCROFT|NEIL FERGUSON|RYAN BAKER", 60f, "|", 1);
									func_215("scrlead", 0,16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_130(iParam0, 40, -1470))
							{
								func_214("scrlead", 0,16f);
								iParam0->f_5++;
							}
							break;
						
						case 10:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 41)
								{
									func_218("script1", 0f, 10f, "left", 0,3f, 0,3f);
									func_217("script1", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_216("script1", "CONOR McGUIRE|JAMES ADWICK|DAVID WATSON|NEIL BEGGS|WILLIAM KENNEDY", 80f, "|", 1);
									func_215("script1", 0,16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_130(iParam0, 41, -1200))
							{
								func_214("script1", 0,16f);
								iParam0->f_5++;
							}
							break;
						
						case 11:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 42)
								{
									func_218("script2", 0f, 10f, "left", 0,3f, 0,3f);
									func_217("script2", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_216("script2", "DAVID GENTLES|BEN HINCHLIFFE|KEVIN WONG|CHRISTOPHER SPEIRS|CHRIS McMAHON", 80f, "|", 1);
									func_215("script2", 0,16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_130(iParam0, 42, -1320))
							{
								func_214("script2", 0,16f);
								iParam0->f_5++;
							}
							break;
						
						case 12:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 43)
								{
									func_218("visdes", 0f, 45f, "left", 0,2f, 0,2f);
									func_217("visdes", "Visual Design", 30f, "HUD_COLOUR_FRIENDLY", 1);
									func_216("visdes", "THOMAS DIAKOMICHALIS|KARMEN COKER|LUKE HOWARD| | |", 67f, "|", 1);
									func_217("visdes", "Character Creator", 100f, "HUD_COLOUR_FRIENDLY", 1);
									func_216("visdes", "STUART HANSELL|STEWART WRIGHT|FLAVIUS ALECU", 147f, "|", 1);
									func_215("visdes", 0,05f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_130(iParam0, 43, -1320))
							{
								func_214("visdes", 0,05f);
								iParam0->f_5++;
							}
							break;
						
						case 13:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 44)
								{
									func_218("uides", 40f, 20f, "right", 0f, 0,3f);
									func_217("uides", "UI Design & Development", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_216("uides", "STUART PETRI|STEVE WALSH|GARETH EVANS|JEFFREY KHAN|CHRIS EDWARDS", 110f, "|", 1);
									func_215("uides", 0f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_130(iParam0, 45, -1650))
							{
								func_214("uides", 0,16f);
								iParam0->f_5++;
							}
							break;
						
						case 14:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 46)
								{
									func_218("concre", 0f, 20f, "left", 0f, 0,3f);
									func_217("concre", "Content Creation", 40f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_216("concre", "CALLUM MUNGALL|CHRIS McCALLUM|JESSE HOLCROFT|JOE STAFFORD", 80f, "|", 1);
									func_216("concre", "JOSHUA MATTYASOVSZKY|MARTIN LOGAN|STEFAN WEBSTER", 80f, "|", 1);
									func_215("concre", 0f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_130(iParam0, 46, -1950))
							{
								func_214("concre", 0,16f);
								iParam0->f_5++;
							}
							break;
						
						case 15:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 47)
								{
									func_218("devass", 0f, 400f, "right", 0f, 0f);
									func_217("devass", "Development Assistants", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_216("devass", "FIONN WRIGHT|KATIE PICA", 100f, "|", 1);
									func_215("devass", 0f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (iParam0->f_6 > 47)
							{
								func_214("devass", 0f);
								iParam0->f_5++;
							}
							break;
						
						case 16:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 48)
								{
									func_218("qasup", 20f, 0f, "right", 0,3f, 0,3f);
									func_217("qasup", "QA Supervisor", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_216("qasup", "ADAM WHITING| ", 50f, "|", 1);
									func_217("qasup", "Lead Test Analyst", 50f, "HUD_COLOUR_FRIENDLY", 1);
									func_216("qasup", "CHRIS THOMSON", 160f, "|", 1);
									func_215("qasup", 0,16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_130(iParam0, 48, -1320))
							{
								func_214("qasup", 0,16f);
								iParam0->f_5++;
							}
							break;
						
						case 17:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 49)
								{
									func_218("senta", 0f, 25f, "left", 0,3f, 0,3f);
									func_217("senta", "Senior Test Analysts", 30f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_216("senta", "MICHAEL BURTON|ROSS PARKER|SEAN CASEY", 120f, "|", 1);
									func_215("senta", 0,16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_130(iParam0, 49, -5070))
							{
								func_214("senta", 0,16f);
								iParam0->f_5++;
							}
							break;
						
						case 18:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (func_130(iParam0, 49, -3750))
								{
									func_218("asspro", 20f, 350f, "right", 0,3f, 0,3f);
									func_217("asspro", "Assistant Producer", 0f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_216("asspro", "JOSH NEEDLEMAN", 75f, "|", 1);
									func_215("asspro", 0,16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_130(iParam0, 49, -720))
							{
								func_214("asspro", 0,16f);
								iParam0->f_5++;
							}
							break;
						
						case 19:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (func_87(iParam0))
								{
									if (unk_0x22A8E52414415B76() && unk_0x8F677B1F58B4741C() > 2468)
									{
										func_218("animdir", 0f, 95f, "left", 0,3f, 0,3f);
										func_217("animdir", "Animation Director", 110f, "HUD_COLOUR_NET_PLAYER3", 1);
										func_216("animdir", "ROB NELSON", 200f, "|", 1);
										func_215("animdir", 0,16f);
										unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
									}
								}
								else if (iParam0->f_6 >= 50)
								{
									func_218("animdir", 50f, 90f, "right", 0,3f, 0,3f);
									func_217("animdir", "Animation Director", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_216("animdir", "ROB NELSON", 90f, "|", 1);
									func_215("animdir", 0,16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_87(iParam0))
							{
								if (unk_0x22A8E52414415B76() && unk_0x8F677B1F58B4741C() > 6123)
								{
									func_214("animdir", 0,16f);
									iParam0->f_5++;
								}
							}
							else if (unk_0x22A8E52414415B76() && unk_0x8F677B1F58B4741C() > 1898)
							{
								func_214("animdir", 0,16f);
								iParam0->f_5++;
							}
							break;
						
						case 20:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (func_87(iParam0))
								{
									if (unk_0x22A8E52414415B76() && unk_0xDED29B1D7D52D5A3())
									{
										func_218("producer", 65f, 55f, "right", 0f, 0f);
										func_217("producer", "Producer", 0f, "HUD_COLOUR_FRIENDLY", 1);
										func_216("producer", "ANDY DUTHIE", 20f, "|", 1);
										func_215("producer", 0f);
										unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
									}
								}
								else if (unk_0x22A8E52414415B76() && unk_0x8F677B1F58B4741C() > 2452)
								{
									func_218("producer", 0f, 100f, "left", 0,3f, 0f);
									func_217("producer", "Producer", 80f, "HUD_COLOUR_FRIENDLY", 1);
									func_216("producer", "ANDY DUTHIE", 110f, "|", 1);
									func_215("producer", 0,16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_87(iParam0))
							{
								if (unk_0x22A8E52414415B76() && unk_0xDED29B1D7D52D5A3())
								{
									func_214("producer", 0f);
									iParam0->f_5++;
								}
							}
							else if (unk_0x22A8E52414415B76() && unk_0xDED29B1D7D52D5A3())
							{
								func_214("producer", 0f);
								iParam0->f_5++;
							}
							break;
						
						case 21:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (func_87(iParam0))
								{
									if (unk_0x22A8E52414415B76() && unk_0x8F677B1F58B4741C() > 13265)
									{
										func_218("vpcre", 65f, 55f, "right", 0,3f, 0,3f);
										func_217("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
										func_216("vpcre", "DAN HOUSER", 80f, "|", 1);
										func_215("vpcre", 0,16f);
										unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
									}
								}
								else if (unk_0x22A8E52414415B76() && unk_0x8F677B1F58B4741C() > 6921)
								{
									func_218("vpcre", 65f, 80f, "right", 0,3f, 0,3f);
									func_217("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_216("vpcre", "DAN HOUSER", 80f, "|", 1);
									func_215("vpcre", 0,16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_87(iParam0))
							{
								if (unk_0x22A8E52414415B76() && unk_0x8F677B1F58B4741C() > 16955)
								{
									func_214("vpcre", 0,16f);
									iParam0->f_5++;
								}
							}
							else if (unk_0x22A8E52414415B76() && unk_0x8F677B1F58B4741C() > 10513)
							{
								func_214("vpcre", 0,16f);
								iParam0->f_5++;
							}
							break;
						
						case 22:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (func_87(iParam0))
								{
									if (unk_0x22A8E52414415B76() && unk_0x8F677B1F58B4741C() > 18077)
									{
										Global_1662466 = 0;
										func_218("execpro", 0f, 375f, "left", 0,3f, 0,3f);
										func_217("execpro", "Executive Producer", 70f, "HUD_COLOUR_NET_PLAYER2", 1);
										func_216("execpro", "SAM HOUSER", 165f, "|", 1);
										func_215("execpro", 0,16f);
										unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
									}
								}
								else if (unk_0x22A8E52414415B76() && unk_0x8F677B1F58B4741C() > 12358)
								{
									Global_1662466 = 0;
									func_218("execpro", 0f, 340f, "left", 0,3f, 0,3f);
									func_217("execpro", "Executive Producer", 100f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_216("execpro", "SAM HOUSER", 190f, "|", 1);
									func_215("execpro", 0,16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_87(iParam0))
							{
								if (unk_0x22A8E52414415B76() && unk_0x8F677B1F58B4741C() > 21785)
								{
									func_214("execpro", 0,16f);
									iParam0->f_5++;
								}
							}
							else if (unk_0x22A8E52414415B76() && unk_0x8F677B1F58B4741C() > 15333)
							{
								func_214("execpro", 0,16f);
								iParam0->f_5++;
							}
							break;
						}
				}
				if (Global_1662466)
				{
					unk_0x6567AE843FADBA94(Global_1662464, 255, 255, 255, 255, 0);
				}
			}
		}
	}
}

void func_214(char* sParam0, float fParam1)
{
	unk_0x7E60C62A7CE58FC8(Global_1662464, "HIDE");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam0);
	unk_0x779B34565F4D71B1();
	unk_0x7C19E5E4784BD7CF(fParam1);
	unk_0x7E60D21B163E9D56();
}

void func_215(char* sParam0, float fParam1)
{
	unk_0x7E60C62A7CE58FC8(Global_1662464, "SHOW_CREDIT_BLOCK");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam0);
	unk_0x779B34565F4D71B1();
	unk_0x7C19E5E4784BD7CF(fParam1);
	unk_0x7E60D21B163E9D56();
}

void func_216(char* sParam0, char* sParam1, float fParam2, char* sParam3, bool bParam4)
{
	unk_0x7E60C62A7CE58FC8(Global_1662464, "ADD_NAMES_TO_CREDIT_BLOCK");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam0);
	unk_0x779B34565F4D71B1();
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	unk_0x7C19E5E4784BD7CF(fParam2);
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam3);
	unk_0x779B34565F4D71B1();
	unk_0x1200CC973A2399C8(bParam4);
	unk_0x7E60D21B163E9D56();
}

void func_217(char* sParam0, char* sParam1, float fParam2, char* sParam3, bool bParam4)
{
	unk_0x7E60C62A7CE58FC8(Global_1662464, "ADD_ROLE_TO_CREDIT_BLOCK");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam0);
	unk_0x779B34565F4D71B1();
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	unk_0x7C19E5E4784BD7CF(fParam2);
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam3);
	unk_0x779B34565F4D71B1();
	unk_0x1200CC973A2399C8(bParam4);
	unk_0x7E60D21B163E9D56();
}

void func_218(char* sParam0, float fParam1, float fParam2, char* sParam3, float fParam4, float fParam5)
{
	unk_0x7E60C62A7CE58FC8(Global_1662464, "SETUP_CREDIT_BLOCK");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam0);
	unk_0x779B34565F4D71B1();
	unk_0x7C19E5E4784BD7CF(fParam1);
	unk_0x7C19E5E4784BD7CF(fParam2);
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam3);
	unk_0x779B34565F4D71B1();
	unk_0x7C19E5E4784BD7CF(fParam4);
	unk_0x7C19E5E4784BD7CF(fParam5);
	unk_0x7E60D21B163E9D56();
}

void func_219(int iParam0)
{
	if (iParam0->f_6 >= 33 && iParam0->f_6 < 51)
	{
		if (unk_0xC844350D5D58C99A(iParam0->f_34))
		{
			if (unk_0xDF1306B443CD3D15(iParam0->f_34, 0))
			{
				unk_0x97C74F2F766B9222(unk_0x68E4ADDDDCD7BDDE(iParam0->f_34, 0f, 0,25f, 0,6f), 255, 255, 255, 1,5f, 0,5f);
			}
		}
	}
}

