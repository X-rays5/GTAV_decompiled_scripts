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
	vLocal_81 = { 0,0203f, -3,1441f, 0,5027f };
	vLocal_84 = { 90f, 0f, 0f };
	vLocal_90 = { 0f, 0f, 0f };
	vLocal_93 = { 0f, 0f, 0f };
	iLocal_129 = 1;
	iLocal_130 = 1;
	cLocal_139 = "RESECAU";
	iLocal_465 = -1;
	fLocal_469 = -3,55f;
	vLocal_470 = { 0,014f, -0,9111f, 1,2317f };
	vLocal_473 = { 0f, -3,4368f, 1,2317f };
	iLocal_494 = -1;
	iLocal_495 = -1;
	iLocal_507 = -1;
	vLocal_87 = { vLocal_87 };
	vLocal_87 = { ScriptParam_0.f_1[0] };
	if (vdist(vLocal_87, -337,3338f, -1460,373f, 29,5668f) < 5f)
	{
		iLocal_47 = 1;
	}
	else if (vdist(vLocal_87, -588,4711f, -866,9462f, 25,3292f) < 5f)
	{
		iLocal_47 = 2;
	}
	else if (vdist(vLocal_87, -389f, 6061f, 31f) < 5f)
	{
		iLocal_47 = 3;
	}
	else if (vdist(vLocal_87, -600f, -1094f, 22,76f) < 5f)
	{
		iLocal_47 = 4;
	}
	else if (vdist(vLocal_87, -1025f, -1086f, 2f) < 5f)
	{
		iLocal_47 = 5;
	}
	else if (vdist(vLocal_87, -595,5618f, -667,7235f, 31,0544f) < 5f)
	{
		iLocal_47 = 6;
	}
	else if (vdist(vLocal_87, 3018,384f, 3634,017f, 70,4076f) < 5f)
	{
		iLocal_47 = 7;
	}
	else if (vdist(vLocal_87, -2815,661f, 2208,171f, 27,8382f) < 5f)
	{
		iLocal_47 = 8;
	}
	else if (vdist(vLocal_87, 856,7742f, -2067,845f, 29,0704f) < 5f)
	{
		iLocal_47 = 9;
	}
	else if (vdist(vLocal_87, 805,1932f, -703,1327f, 28,1632f) < 5f)
	{
		iLocal_47 = 10;
	}
	else
	{
		unk_0x10FAF14A60A0DBE1();
	}
	if (Global_3)
	{
		if (iLocal_47 != 2)
		{
			unk_0x10FAF14A60A0DBE1();
		}
	}
	else
	{
		if (unk_0x2EBF608FFE6CA406(11))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_51)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_51[iVar0]))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_54, 0))
					{
						if (!unk_0xC42A92762C58E1B9(iLocal_51[iVar0], iLocal_54, 0))
						{
							unk_0x5B1D360B9C6F0A09(iLocal_51[iVar0], iLocal_54, -1, func_248(iLocal_54), 2f, 1, 0);
						}
					}
					else
					{
						unk_0x93D47DFD0AE94949(iLocal_51[iVar0], 10000);
					}
				}
				iVar0++;
			}
			func_231();
		}
		if (!func_191(vLocal_87, 9, iLocal_47, 1, 0))
		{
			unk_0x10FAF14A60A0DBE1();
		}
		else
		{
			func_188(-1);
		}
	}
	func_187();
	iLocal_65 = unk_0x7D6CA5F52B3748BF(vLocal_77 + Vector(30f, 30f, 30f), vLocal_77 - Vector(30f, 30f, 30f), 0, 1, 1, 1);
	while (true)
	{
		wait(0);
		func_184(&uLocal_317);
		if (!func_183())
		{
			if (func_182())
			{
				func_231();
			}
			unk_0x1A6DFFFEEC27BF4F("RE_SV", 0);
			switch (iLocal_510)
			{
				case 0:
					if (unk_0x338D6FF72D84D90F() && !func_170())
					{
						if (func_161())
						{
							if ((iLocal_46 == 3 && !(unk_0x8E28E832BEAC3DCE(vLocal_77, 3f) && func_160(unk_0x16F2683693E537C9(), vLocal_77, 1) < 150f)) || iLocal_46 != 3)
							{
								if (iLocal_46 == 3)
								{
									if (!unk_0x8E28E832BEAC3DCE(vLocal_77, 8f))
									{
										unk_0x536F1BE96C726C4B(vLocal_77, 4f, 1, 0, 0, false);
									}
									iLocal_48 = 4;
									bLocal_109 = true;
								}
								else
								{
									iLocal_48 = 1;
								}
								func_159();
								if (unk_0xDF1306B443CD3D15(iLocal_54, 0) && iLocal_46 == 3)
								{
									unk_0x1AEF7184B203A58D(iLocal_54, 5f);
								}
								settimera(0);
								iLocal_510++;
							}
						}
					}
					else
					{
						func_231();
					}
					break;
				
				case 1:
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0xDF1306B443CD3D15(iLocal_54, 0))
					{
						if (((vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iLocal_54, true)) < 10000f || !unk_0x03068588A1FCED1A(iLocal_54)) || (!unk_0xEB6A8945D1AC98A1(iLocal_51[0]) && !unk_0x03068588A1FCED1A(iLocal_51[0]))) || (!unk_0xEB6A8945D1AC98A1(iLocal_51[1]) && !unk_0x03068588A1FCED1A(iLocal_51[1])))
						{
							iLocal_510++;
						}
					}
					if (func_158())
					{
						iLocal_510++;
					}
					if (iLocal_510 != 1)
					{
						settimera(0);
					}
					break;
				
				case 2:
					if (timera() > 2000)
					{
						if (iLocal_46 != 3)
						{
							func_153();
						}
					}
					if (unk_0xC844350D5D58C99A(iLocal_54) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (iLocal_46 == 3)
						{
							func_148();
							if (!unk_0x03068588A1FCED1A(iLocal_54) && (vdist(unk_0x68F4C0EC296D3901(iLocal_54, true), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true)) < 100f || func_158()))
							{
								func_139(1);
							}
						}
						else if (((!unk_0x03068588A1FCED1A(iLocal_54) && iLocal_48 == 4) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_96, vLocal_99, fLocal_102, 0, true, 0)) || func_158())
						{
							func_139(1);
						}
						if ((iLocal_48 == 4 && unk_0x03068588A1FCED1A(iLocal_54)) && iLocal_46 != 3)
						{
							if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iLocal_54, true)) > 100f)
							{
								func_231();
							}
							else
							{
								func_139(1);
							}
						}
					}
					break;
			}
			if (iLocal_510 > 0)
			{
				if (unk_0xDF1306B443CD3D15(iLocal_54, 0) && unk_0x03068588A1FCED1A(iLocal_54))
				{
					if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iLocal_54, true)) > 62500f)
					{
						func_231();
					}
					if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iLocal_54, true)) > 10000f && !unk_0x338D6FF72D84D90F())
					{
						func_231();
					}
				}
			}
		}
		else
		{
			unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
			if (!unk_0xE4EDC4B0E92C078B(iLocal_63))
			{
				if (!func_138(2) && !bLocal_114)
				{
					if (!unk_0xFEBC1E4EC9E001F0())
					{
						func_137("SV_VANHELP1", 15000);
						func_136(2);
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_56))
				{
					if (iLocal_511 != 0)
					{
						if (vdist2(unk_0x68F4C0EC296D3901(iLocal_56, true), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true)) < pow(50f, 2f))
						{
							iLocal_511 = 0;
							func_135(&uLocal_305, 0, 0);
						}
					}
				}
				else if (((bLocal_109 && !unk_0x762119754C50557A(iLocal_137)) && unk_0xDF1306B443CD3D15(iLocal_54, 0)) && !bLocal_121)
				{
					if (iLocal_511 != 1)
					{
						if (vdist2(unk_0x68F4C0EC296D3901(iLocal_54, true), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true)) < pow(50f, 2f))
						{
							iLocal_511 = 1;
							func_135(&uLocal_305, 0, 0);
						}
					}
				}
				else if (unk_0x762119754C50557A(iLocal_137))
				{
					if (iLocal_511 != 2)
					{
						if (vdist2(unk_0xE925E52ACABA4CE7(iLocal_137), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true)) < pow(50f, 2f))
						{
							iLocal_511 = 2;
							func_135(&uLocal_305, 0, 0);
						}
					}
				}
				if (iLocal_511 == 0)
				{
					if (unk_0xC844350D5D58C99A(iLocal_56))
					{
						func_128(&uLocal_305, iLocal_56, 0, 0, 1, 1, 1);
						if (vdist2(unk_0x68F4C0EC296D3901(iLocal_56, true), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true)) > pow(50f, 2f))
						{
							iLocal_511 = -1;
							func_135(&uLocal_305, 0, 0);
						}
					}
				}
				else if (iLocal_511 == 1)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_54, 0) && !unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_54, 1))
					{
						func_128(&uLocal_305, iLocal_54, 0, 0, 1, 1, 1);
						if (vdist2(unk_0x68F4C0EC296D3901(iLocal_54, true), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true)) > pow(50f, 2f))
						{
							iLocal_511 = -1;
							func_135(&uLocal_305, 0, 0);
						}
					}
				}
				else if (iLocal_511 == 2)
				{
					if (unk_0x762119754C50557A(iLocal_137))
					{
						func_105(&uLocal_305, unk_0xE925E52ACABA4CE7(iLocal_137), 0, 0, 1, 1, 1);
						if (vdist2(unk_0xE925E52ACABA4CE7(iLocal_137), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true)) > pow(50f, 2f))
						{
							iLocal_511 = -1;
							func_135(&uLocal_305, 0, 0);
						}
					}
				}
				if (((!unk_0x437347B10A200C4B(iLocal_54, 0) && bLocal_109) && !bLocal_111) && (!func_138(0) || (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), 741814745, 0) && !func_138(1))))
				{
					switch (iLocal_134)
					{
						case 0:
							if (!unk_0xFEBC1E4EC9E001F0() && vdist2(unk_0x68F4C0EC296D3901(iLocal_54, true), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true)) < 225f)
							{
								func_137("SV_DOORHELP1", 15000);
								func_136(0);
								iLocal_134++;
							}
							break;
						
						case 1:
							if (!unk_0xFEBC1E4EC9E001F0())
							{
								iLocal_135 = unk_0x1C0640BA9A7327B3();
								iLocal_134++;
							}
							break;
						
						case 2:
							if ((unk_0x1C0640BA9A7327B3() - iLocal_135) > 2000 && unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), 741814745, 0))
							{
								func_137("SV_DOORHELP2", 15000);
								func_136(1);
								iLocal_134++;
							}
							break;
						}
				}
				if (bLocal_111 || bLocal_121)
				{
					if (func_104("SV_DOORHELP1") || func_104("SV_DOORHELP2"))
					{
						unk_0xA37A90C62806D848(1);
					}
				}
			}
			switch (iLocal_48)
			{
				case 1:
					func_153();
					break;
				
				case 2:
					func_96();
					break;
				
				case 3:
					func_94();
					break;
				
				case 4:
					func_148();
					break;
				
				case 5:
					func_90();
					break;
				
				case 6:
					func_86();
					break;
				
				case 7:
					if (!unk_0xEB6A8945D1AC98A1(iLocal_51[0]))
					{
						if (unk_0x8589BAED2CA9C5B7(iLocal_51[0]) != 3)
						{
							unk_0xEBE904C8FC460B66(iLocal_51[0], 3);
						}
					}
					if (!unk_0xEB6A8945D1AC98A1(iLocal_51[1]))
					{
						if (unk_0x8589BAED2CA9C5B7(iLocal_51[1]) != 3)
						{
							unk_0xEBE904C8FC460B66(iLocal_51[1], 3);
						}
					}
					if (((!unk_0xEB6A8945D1AC98A1(iLocal_51[0]) && !unk_0x437347B10A200C4B(iLocal_51[0], 0)) && !unk_0xEB6A8945D1AC98A1(iLocal_51[1])) && !unk_0x437347B10A200C4B(iLocal_51[1], 0))
					{
						iLocal_129 = 1;
						func_79(iLocal_51[1]);
						func_77(0, 1);
					}
					else if (iLocal_129 == 1)
					{
						if (unk_0xEB6A8945D1AC98A1(iLocal_51[1]) || unk_0x437347B10A200C4B(iLocal_51[1], 0))
						{
							iLocal_50 = 0;
							iLocal_129 = 0;
						}
						else
						{
							func_79(iLocal_51[1]);
						}
					}
					else if (iLocal_129 == 0)
					{
						if (unk_0xEB6A8945D1AC98A1(iLocal_51[0]) || unk_0x437347B10A200C4B(iLocal_51[0], 0))
						{
							iLocal_129 = -1;
						}
						else
						{
							func_79(iLocal_51[0]);
						}
					}
					break;
				
				case 8:
					func_71();
					break;
				
				case 9:
					func_231();
					break;
			}
			if (func_69())
			{
				func_68(9);
			}
			if ((((unk_0xDF1306B443CD3D15(iLocal_54, 0) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && unk_0xA30B8362589C124A(iLocal_54, -1, 0) == unk_0x16F2683693E537C9()) && !bLocal_113) && iLocal_48 != 8)
			{
				if (bLocal_109)
				{
					func_68(8);
				}
				else
				{
					func_68(5);
				}
			}
			if (bLocal_110)
			{
				if (unk_0x256517DE1B6755D4(iLocal_66, 1862763509) != 5)
				{
					unk_0x0E2400AB9174FA81(5, iLocal_66, 1862763509);
					unk_0x0E2400AB9174FA81(5, 1862763509, iLocal_66);
				}
			}
			if (bLocal_111)
			{
				if ((unk_0x762119754C50557A(iLocal_137) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0xE925E52ACABA4CE7(iLocal_137)) > 250f)
				{
					func_68(9);
				}
			}
			if (!bLocal_121)
			{
				if (func_67())
				{
					bLocal_121 = true;
				}
			}
			else
			{
				iVar1 = 1;
				iVar2 = 0;
				if (unk_0xC844350D5D58C99A(iLocal_51[iVar2]))
				{
					if ((!unk_0x437347B10A200C4B(iLocal_51[iVar2], 0) && !unk_0xEB6A8945D1AC98A1(iLocal_51[iVar2])) && vdist2(unk_0x68F4C0EC296D3901(iLocal_51[0], true), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true)) < 10000f)
					{
						iVar1 = 0;
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_54))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_54, 0))
					{
						if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_54, 0))
						{
							iVar3 = 1;
						}
					}
					if ((vdist2(unk_0x68F4C0EC296D3901(iLocal_54, true), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true)) > 10000f && unk_0x03068588A1FCED1A(iLocal_54)) || vdist2(unk_0x68F4C0EC296D3901(iLocal_54, true), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true)) > 62500f)
					{
						iVar3 = 1;
					}
				}
				if (iVar3 && iVar1)
				{
					func_43();
				}
			}
			func_39();
			func_34();
			func_29();
		}
		if (!bLocal_107)
		{
			if (func_28())
			{
				iLocal_127 = unk_0x1C0640BA9A7327B3();
				bLocal_107 = true;
			}
		}
		if (bLocal_107)
		{
			if (!bLocal_108)
			{
				if ((unk_0x1C0640BA9A7327B3() - iLocal_127) > 5000)
				{
					unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 2, 0);
					if (func_27() < 30f)
					{
						if (func_4(&Local_140, cLocal_139, "RESEC_COPS", 8, 0, 0, 0))
						{
							bLocal_108 = true;
						}
					}
					else
					{
						bLocal_108 = true;
					}
				}
			}
		}
		if (((unk_0x1C0640BA9A7327B3() - iLocal_127) > 10000 && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0) && !iLocal_126)
		{
			iVar4 = unk_0x09AC81E49EA267F7(0, 3);
			if (iVar4 == 0)
			{
				unk_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_01", 0f);
			}
			else if (iVar4 == 1)
			{
				unk_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_02", 0f);
			}
			else
			{
				unk_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_03", 0f);
			}
			iLocal_126 = 1;
		}
		if (bLocal_108)
		{
			if ((!unk_0xEB6A8945D1AC98A1(iLocal_51[0]) || !unk_0xEB6A8945D1AC98A1(iLocal_51[1])) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(func_3(), true)) < pow(50f, 2f))
				{
					if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
					{
						unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 2, 0);
						unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
					}
					unk_0xD42D247B7AD47E76(unk_0xD803B885F5E47A62(), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true));
				}
			}
		}
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0 && func_2())
		{
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 2, 0);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
		}
		if (func_1())
		{
			func_68(9);
		}
		if (unk_0xDF1306B443CD3D15(iLocal_54, 0) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0xF409BCB95E61D4DB(iLocal_54, 0) > 0f || unk_0xF409BCB95E61D4DB(iLocal_54, 1) > 0f)
			{
				if (unk_0x9C7B8DC16535B879(iLocal_54) == 3)
				{
					unk_0x71EDC33E5A423750(iLocal_54, 1);
				}
			}
			if (!bLocal_112)
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_54, 0))
				{
					bLocal_112 = true;
				}
			}
			if (!bLocal_112)
			{
				if (unk_0xF409BCB95E61D4DB(iLocal_54, 0) == 0f && unk_0xF409BCB95E61D4DB(iLocal_54, 1) == 0f)
				{
					if (unk_0x9C7B8DC16535B879(iLocal_54) == 1)
					{
						unk_0x71EDC33E5A423750(iLocal_54, 3);
					}
				}
			}
		}
		if (iLocal_131 != 0)
		{
			if ((iLocal_48 == 8 || iLocal_48 == 6) || iLocal_48 == 4)
			{
				unk_0x850CF499433B183D(iLocal_131);
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_56))
		{
			iVar5 = 0;
			while (iVar5 < iLocal_51)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_51[iVar5]) && !unk_0x437347B10A200C4B(iLocal_51[iVar5], 0))
				{
					if (unk_0x50B5F6F3C29E9380(iLocal_56, iLocal_51[iVar5]))
					{
						if (iLocal_48 == 1)
						{
							if (!iLocal_512[iVar5])
							{
								unk_0x6569264C5DBAC6F6(iLocal_51[iVar5], 0, "random@security_van", "sec_idle", 8f, 1);
								unk_0x6569264C5DBAC6F6(iLocal_51[iVar5], 1, "random@security_van", "sec_walk_calm", 8f, 1);
								iLocal_512[iVar5] = 1;
							}
						}
						if (iLocal_48 == 7)
						{
							if (!iLocal_515[iVar5])
							{
								unk_0x6569264C5DBAC6F6(iLocal_51[iVar5], 0, "random@security_van", "sec_idle", 8f, 1);
								unk_0x6569264C5DBAC6F6(iLocal_51[iVar5], 1, "random@security_van", "sec_walk_panic", 8f, 1);
								iLocal_515[iVar5] = 1;
							}
						}
						if (unk_0x03A10A5707B2BB1F(iLocal_51[iVar5], 4) && !iLocal_115)
						{
							unk_0x6C5B8C4234CEA349(iLocal_51[iVar5], true);
							iLocal_115 = 1;
						}
					}
					else
					{
						if (iLocal_512[iVar5])
						{
							unk_0x95E9A490A3D0029F(iLocal_51[iVar5], 0, -1056964608);
							unk_0x95E9A490A3D0029F(iLocal_51[iVar5], 1, -1056964608);
							iLocal_512[iVar5] = 0;
						}
						if (iLocal_515[iVar5])
						{
							unk_0x95E9A490A3D0029F(iLocal_51[iVar5], 0, -1056964608);
							unk_0x95E9A490A3D0029F(iLocal_51[iVar5], 1, -1056964608);
							iLocal_515[iVar5] = 0;
						}
						if (iLocal_512[iVar5] || iLocal_515[iVar5])
						{
							iLocal_512[iVar5] = 0;
							iLocal_515[iVar5] = 0;
							unk_0x95E9A490A3D0029F(iLocal_51[iVar5], 0, -1056964608);
							unk_0x95E9A490A3D0029F(iLocal_51[iVar5], 1, -1056964608);
						}
						if (unk_0x03A10A5707B2BB1F(iLocal_51[iVar5], 4) && iLocal_115)
						{
							unk_0x6C5B8C4234CEA349(iLocal_51[iVar5], true);
							iLocal_115 = 0;
						}
					}
				}
				iVar5++;
			}
		}
		else
		{
			iVar5 = 0;
			while (iVar5 < iLocal_51)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_51[iVar5]))
				{
					if (iLocal_512[iVar5] || iLocal_515[iVar5])
					{
						iLocal_512[iVar5] = 0;
						iLocal_515[iVar5] = 0;
						unk_0x95E9A490A3D0029F(iLocal_51[iVar5], 0, -1056964608);
						unk_0x95E9A490A3D0029F(iLocal_51[iVar5], 1, -1056964608);
					}
				}
				iVar5++;
			}
		}
		if (!bLocal_109 && !bLocal_496)
		{
			if (((((unk_0xC844350D5D58C99A(iLocal_56) && unk_0xD59B17D2DFF98E26(iLocal_56)) && !unk_0xEB6A8945D1AC98A1(iLocal_51[iLocal_130])) && !unk_0xB4ECF989E2C1DAC8(iLocal_51[iLocal_130], "random@security_van", "sec_hand_override", 3)) && !unk_0xB4ECF989E2C1DAC8(iLocal_51[iLocal_130], "random@security_van", "sec_case_into_van_panic", 3)) && !unk_0xB4ECF989E2C1DAC8(iLocal_51[iLocal_130], "random@security_van", "sec_case_into_van_calm", 3))
			{
				unk_0xC6EB89C59F2AF6B8(iLocal_51[iLocal_130], "random@security_van", "sec_hand_override", 1000f, -4f, -1, 49, 0, 0, 0, 0);
			}
		}
		if (!iLocal_116)
		{
			if (unk_0xC844350D5D58C99A(iLocal_54))
			{
				if (unk_0xB87D13D0C064E9D1(iLocal_54, unk_0x16F2683693E537C9(), 1))
				{
					iLocal_116 = 1;
				}
				unk_0xE910A68AA670B4AA(iLocal_54);
			}
		}
	}
}

int func_1()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_2()
{
	fVar0 = 50f;
	if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && (((unk_0xDF1306B443CD3D15(iLocal_54, 0) && bLocal_114) && unk_0x762119754C50557A(iLocal_137)) || (!unk_0xDF1306B443CD3D15(iLocal_54, 0) && unk_0x762119754C50557A(iLocal_137)))) && vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iLocal_54, true)) < 20f) && vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0xE925E52ACABA4CE7(iLocal_137)) < 20f)
	{
		iVar1 = unk_0xF187F2EA5437526A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), fVar0, fVar0, fVar0, -1);
		if (!unk_0xEB6A8945D1AC98A1(iVar1))
		{
			if (unk_0x134B62B726CEC8E6(iVar1) == 1581098148 || unk_0x134B62B726CEC8E6(iVar1) == 368603149)
			{
				return 1;
			}
		}
		iVar1 = unk_0xF187F2EA5437526A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), fVar0, fVar0, fVar0, -1);
		if (!unk_0xEB6A8945D1AC98A1(iVar1))
		{
			if (unk_0x134B62B726CEC8E6(iVar1) == 1581098148 || unk_0x134B62B726CEC8E6(iVar1) == 368603149)
			{
				return 1;
			}
		}
		iVar2 = unk_0x6E7D01E16ABEFABB(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), fVar0, 0, 1024);
		if (unk_0xDF1306B443CD3D15(iVar2, 0))
		{
			return 1;
		}
		iVar2 = unk_0x6E7D01E16ABEFABB(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), fVar0, 0, 1024);
		if (unk_0xDF1306B443CD3D15(iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

var func_3()
{
	fVar0 = 999999f;
	iVar1 = 0;
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_51[0]))
		{
			fVar0 = vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iLocal_51[0], true));
			iVar1 = 0;
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_51[1]))
		{
			if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iLocal_51[1], true)) < fVar0)
			{
				fVar0 = vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iLocal_51[1], true));
				iVar1 = 1;
			}
		}
	}
	return iLocal_51[iVar1];
}

bool func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)
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
					func_25();
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
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_23();
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
				func_15();
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
				if (func_14())
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
			if (func_13())
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
			func_12();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_11();
		func_6();
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
		func_25();
	}
	return 0;
}

void func_6()
{
	if (!func_7())
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

int func_7()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_10())
	{
		return 0;
	}
	if (func_8(unk_0xD803B885F5E47A62()))
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

bool func_8(int iParam0)
{
	return func_9(iParam0, 20);
}

bool func_9(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_10()
{
	return -1;
}

void func_11()
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

void func_12()
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

int func_13()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_14()
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

void func_15()
{
	if (func_22(14))
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
		Global_19486 = func_16();
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

int func_16()
{
	func_17();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_17()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_20(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_19(unk_0x16F2683693E537C9());
			if (func_18(iVar0) && (!func_22(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_18(Global_111638.f_2358.f_539.f_4321))
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

bool func_18(int iParam0)
{
	return iParam0 < 3;
}

int func_19(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_20(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_20(int iParam0)
{
	if (func_18(iParam0))
	{
		return func_21(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_21(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_22(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_23()
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

bool func_24(int iParam0, int iParam1)
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

void func_25()
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

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

float func_27()
{
	fVar0 = 999999f;
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_51[0]))
		{
			fVar0 = vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iLocal_51[0], true));
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_51[1]))
		{
			if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iLocal_51[1], true)) < fVar0)
			{
				fVar0 = vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iLocal_51[1], true));
			}
		}
	}
	return sqrt(fVar0);
}

int func_28()
{
	iVar0 = 0;
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		iVar1 = 0;
		while (iVar1 < iLocal_51)
		{
			if (unk_0xC844350D5D58C99A(iLocal_51[iVar1]))
			{
				if (((!unk_0xEB6A8945D1AC98A1(iLocal_51[iVar1]) && unk_0xB87D13D0C064E9D1(iLocal_51[iVar1], unk_0x16F2683693E537C9(), 1)) || unk_0xEB6A8945D1AC98A1(iLocal_51[iVar1])) || unk_0x437347B10A200C4B(iLocal_51[iVar1], 0))
				{
					iVar0 = 1;
				}
			}
			iVar1++;
		}
		if ((!unk_0xEB6A8945D1AC98A1(iLocal_51[0]) && !unk_0xEB6A8945D1AC98A1(iLocal_51[1])) && iLocal_116)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_29()
{
	if (!bLocal_121)
	{
		if (!bLocal_109)
		{
			if (unk_0xC844350D5D58C99A(iLocal_56))
			{
				if (!unk_0xD59B17D2DFF98E26(iLocal_56))
				{
					unk_0xF690C84DADBB3551(&iLocal_56);
					if (!unk_0x762119754C50557A(iLocal_137) && !bLocal_111)
					{
						func_30(0f, 0f, 0f, 0);
					}
				}
				else if ((unk_0x1C0640BA9A7327B3() - iLocal_136) > 3000)
				{
					if (unk_0xEB6A8945D1AC98A1(iLocal_51[iLocal_130]) || unk_0x869EFD0BC0868856(iLocal_51[iLocal_130]))
					{
						unk_0x15AFB6CBDE990FB6(iLocal_56, 1, true);
						iLocal_136 = unk_0x1C0640BA9A7327B3();
					}
				}
			}
			else if (!unk_0x762119754C50557A(iLocal_137))
			{
				if (unk_0xEB6A8945D1AC98A1(iLocal_51[iLocal_130]) || ((!unk_0xEB6A8945D1AC98A1(iLocal_51[iLocal_130]) && unk_0x869EFD0BC0868856(iLocal_51[iLocal_130])) && !bLocal_111))
				{
					func_30(0f, 0f, 0f, 0);
				}
			}
		}
	}
	else
	{
		if (unk_0xC844350D5D58C99A(iLocal_56))
		{
			unk_0xF690C84DADBB3551(&iLocal_56);
		}
		if (unk_0x762119754C50557A(iLocal_137))
		{
			unk_0x40B7230FD4C59AA2(iLocal_137);
		}
	}
}

void func_30(vector3 vParam0, bool bParam3)
{
	if (!bLocal_121 && !bLocal_111)
	{
		if (!bParam3)
		{
			if (bLocal_109)
			{
				vParam0 = { unk_0x550B1459B4642A86(unk_0x68E4ADDDDCD7BDDE(iLocal_54, 0f, -3,3f, 0f), 1067030938, 1069547520) };
			}
			else
			{
				vParam0 = { unk_0x550B1459B4642A86(unk_0x68F4C0EC296D3901(iLocal_51[iLocal_130], false), 1067030938, 1069547520) };
			}
		}
		unk_0x5D96D8530B3D0904(&iLocal_138, 3);
		unk_0x5D96D8530B3D0904(&iLocal_138, 4);
		unk_0x5D96D8530B3D0904(&iLocal_138, 1);
		if (bParam3)
		{
			iLocal_137 = unk_0x2D7B5CDDF12654D2(-562499202, vParam0, unk_0x835730A2D89F6093(iLocal_56, 2), 0, iLocal_128, 2, 1, 0);
		}
		else
		{
			iLocal_137 = unk_0xA6FF0828D17CF374(-562499202, vParam0, iLocal_138, iLocal_128, 1, 0);
		}
		if (!unk_0xE4EDC4B0E92C078B(iLocal_64))
		{
			iLocal_64 = func_31(iLocal_137);
		}
		if (unk_0xC844350D5D58C99A(iLocal_56))
		{
			unk_0xF690C84DADBB3551(&iLocal_56);
		}
		bLocal_111 = true;
	}
}

int func_31(int iParam0)
{
	return func_32(iParam0);
}

int func_32(int iParam0)
{
	if (!unk_0x762119754C50557A(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xA0556E31F2661AF4(iParam0);
	unk_0x516E63E474722206(iVar0, func_33(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
	return iVar0;
}

float func_33(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_34()
{
	if (func_36())
	{
		if (unk_0xC844350D5D58C99A(iLocal_57))
		{
			unk_0x611DFA9294B339CA(iLocal_54, 2, 0, false);
			unk_0x611DFA9294B339CA(iLocal_54, 3, 0, false);
			if (unk_0xC844350D5D58C99A(iLocal_57))
			{
				unk_0xF690C84DADBB3551(&iLocal_57);
			}
		}
	}
	switch (iLocal_49)
	{
		case 0:
			if (bLocal_109)
			{
				iLocal_49 = 1;
			}
			break;
		
		case 1:
			if (unk_0xF409BCB95E61D4DB(iLocal_54, 2) == 0f && unk_0xF409BCB95E61D4DB(iLocal_54, 3) == 0f)
			{
				if (unk_0xC844350D5D58C99A(iLocal_56))
				{
					if (unk_0xD59B17D2DFF98E26(iLocal_56))
					{
						unk_0x15AFB6CBDE990FB6(iLocal_56, 1, true);
					}
					unk_0x9F528B1B53FBC5D9(iLocal_56, iLocal_54, 0, vLocal_81, vLocal_84, 0, 0, 0, 0, 2, 1);
					iLocal_49 = 2;
				}
			}
			break;
		
		case 2:
			if (!bLocal_111 && !bLocal_121)
			{
				if (!unk_0x437347B10A200C4B(iLocal_54, 0))
				{
					if (((unk_0xDF1306B443CD3D15(iLocal_54, 0) && unk_0xF409BCB95E61D4DB(iLocal_54, 2) > 0,25f) && unk_0xF409BCB95E61D4DB(iLocal_54, 3) > 0,25f) || !unk_0xDF1306B443CD3D15(iLocal_54, 0))
					{
						if (unk_0xC844350D5D58C99A(iLocal_56))
						{
							if (unk_0xD59B17D2DFF98E26(iLocal_56))
							{
								unk_0xEB819BD1E585E9CB(unk_0xD68EA767274B7444(), "DOORS_BLOWN", unk_0xBF584557291FDD31(iLocal_54, 13), "RE_SECURITY_VAN_SOUNDSET", 0, 0, 0);
								unk_0x15AFB6CBDE990FB6(iLocal_56, 1, false);
								unk_0x20641932E5104B25(iLocal_56, true, 0);
								unk_0xAC0C6241732E36F6(iLocal_56);
								unk_0x272295383B6513AB(iLocal_56, 1);
								vLocal_477 = { unk_0x68F4C0EC296D3901(iLocal_56, true) - unk_0x68F4C0EC296D3901(iLocal_54, true) * Vector(1,5f, 1,5f, 1,5f) };
								if (vmag(vLocal_477) > 10f)
								{
									vLocal_477 = { func_35(vLocal_477) };
									vLocal_477 = { vLocal_477 * Vector(10f, 10f, 10f) };
								}
								if (iLocal_133 < 100)
								{
									iLocal_117 = 1;
								}
								unk_0xDFC6BA855748EB10(iLocal_56, 1, 0f, 1f, 5f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
								iLocal_476 = unk_0x1C0640BA9A7327B3();
							}
							else if (unk_0x89AA362D00A86F72(unk_0x68F4C0EC296D3901(iLocal_56, true), unk_0x68E4ADDDDCD7BDDE(iLocal_54, vLocal_470), unk_0x68E4ADDDDCD7BDDE(iLocal_54, vLocal_473), 0) >= 1f)
							{
								iLocal_49 = 3;
								iLocal_123[0] = 0;
								iLocal_123[1] = 0;
							}
							else if ((unk_0x1C0640BA9A7327B3() - iLocal_476) > 5000)
							{
								func_30(0f, 0f, 0f, 0);
							}
						}
					}
				}
				else if (unk_0xC844350D5D58C99A(iLocal_54))
				{
					unk_0x611DFA9294B339CA(iLocal_54, 2, 0, false);
					unk_0x611DFA9294B339CA(iLocal_54, 3, 0, false);
					func_30(unk_0x68E4ADDDDCD7BDDE(iLocal_54, 0f, 2f, 0f), 0);
				}
			}
			break;
		
		case 3:
			if (iLocal_48 != 8)
			{
				func_68(8);
			}
			if (unk_0xC844350D5D58C99A(iLocal_56) && !unk_0x762119754C50557A(iLocal_137))
			{
				if (unk_0x9C66D99E63E8E24C(iLocal_56) == 0f && (unk_0x1C0640BA9A7327B3() - iLocal_476) > 1000)
				{
					func_30(unk_0x68F4C0EC296D3901(iLocal_56, true), 1);
					unk_0xF690C84DADBB3551(&iLocal_56);
				}
				else if ((unk_0x1C0640BA9A7327B3() - iLocal_476) > 5000)
				{
					func_30(0f, 0f, 0f, 0);
				}
			}
			break;
	}
}

Vector3 func_35(vector3 vParam0)
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

int func_36()
{
	if (unk_0xC844350D5D58C99A(iLocal_57) && unk_0xD59B17D2DFF98E26(iLocal_57))
	{
		if (!iLocal_466)
		{
			if (unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iLocal_57, true), 741814745, 0,25f, 0) || unk_0xBF75E4DF4C367CD9(unk_0x68F4C0EC296D3901(iLocal_57, true), 0,3f, unk_0x6B7EC7B5B6B57364(741814745), 0))
			{
				iLocal_466 = 1;
			}
		}
		iVar0 = 0;
		unk_0x5F3EEC968FEB7235(unk_0x68F4C0EC296D3901(iLocal_57, true), 0,1f, 255, 0, 0, 255);
		if (func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x68F4C0EC296D3901(iLocal_57, true), 1f, 1) || (unk_0x681F21BF9F7B449B(2, unk_0x68F4C0EC296D3901(iLocal_57, true), 0,3f) && iLocal_466))
		{
			iLocal_117 = 1;
			iVar0 = 1;
		}
		if (unk_0x7F6DC62EA9922664(iLocal_57) < iLocal_132 && unk_0xB87D13D0C064E9D1(iLocal_57, unk_0x16F2683693E537C9(), 0))
		{
			iLocal_133 = (iLocal_133 + (iLocal_132 - unk_0x7F6DC62EA9922664(iLocal_57)));
			unk_0xE910A68AA670B4AA(iLocal_57);
		}
		if ((unk_0x1C0640BA9A7327B3() - iLocal_467) > 200 && unk_0xC844350D5D58C99A(iLocal_54))
		{
			if (unk_0x53129655DBEDC6EA(unk_0x68E4ADDDDCD7BDDE(iLocal_54, 0f, 0f, (1,2195f - 0,27f)), unk_0x68E4ADDDDCD7BDDE(iLocal_54, 0f, fLocal_469, (1,2195f + 0,09f)), 0,45f, 1))
			{
				iLocal_467 = unk_0x1C0640BA9A7327B3();
				iLocal_468++;
			}
		}
		if (iLocal_468 > 5)
		{
			return 1;
		}
		if (iLocal_133 > 100 || iVar0)
		{
			return 1;
		}
		iLocal_132 = unk_0x7F6DC62EA9922664(iLocal_57);
	}
	return 0;
}

int func_37(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9, bool bParam10)
{
	iVar0 = 0;
	if (!func_38(vParam0 + vParam3))
	{
		if ((((((((((((((((((((((unk_0x372F6F38C16E36DA(5, vParam3, vParam0) || (unk_0x372F6F38C16E36DA(2, vParam3, vParam0) && !bParam10)) || (unk_0x372F6F38C16E36DA(20, vParam3, vParam0) && !bParam10)) || unk_0x372F6F38C16E36DA(4, vParam3, vParam0)) || (unk_0x372F6F38C16E36DA(28, vParam3, vParam0) && !bParam10)) || unk_0x372F6F38C16E36DA(32, vParam3, vParam0)) || unk_0x372F6F38C16E36DA(25, vParam3, vParam0)) || unk_0x372F6F38C16E36DA(9, vParam3, vParam0)) || (unk_0x372F6F38C16E36DA(3, vParam3, vParam0) && !bParam10)) || (unk_0x372F6F38C16E36DA(6, vParam3, vParam0) && !bParam10)) || unk_0x372F6F38C16E36DA(0, vParam3, vParam0)) || unk_0x372F6F38C16E36DA(1, vParam3, vParam0)) || unk_0x372F6F38C16E36DA(23, vParam3, vParam0)) || unk_0x372F6F38C16E36DA(34, vParam3, vParam0)) || unk_0x372F6F38C16E36DA(14, vParam3, vParam0)) || (unk_0x372F6F38C16E36DA(30, vParam3, vParam0) && !bParam10)) || (unk_0x372F6F38C16E36DA(12, vParam3, vParam0) && !bParam10)) || unk_0x372F6F38C16E36DA(7, vParam3, vParam0)) || (unk_0x372F6F38C16E36DA(21, vParam3, vParam0) && !bParam10)) || (unk_0x372F6F38C16E36DA(18, vParam3, vParam0) && !bParam10)) || unk_0x372F6F38C16E36DA(15, vParam3, vParam0)) || unk_0x372F6F38C16E36DA(10, vParam3, vParam0)) || unk_0x372F6F38C16E36DA(27, vParam3, vParam0))
		{
			iVar0 = 1;
		}
	}
	else if ((((((((((((((((((((((unk_0x681F21BF9F7B449B(5, vParam6, fParam9) || (unk_0x681F21BF9F7B449B(2, vParam6, fParam9) && !bParam10)) || (unk_0x681F21BF9F7B449B(20, vParam6, fParam9) && !bParam10)) || unk_0x681F21BF9F7B449B(4, vParam6, fParam9)) || (unk_0x681F21BF9F7B449B(28, vParam6, fParam9) && !bParam10)) || unk_0x681F21BF9F7B449B(32, vParam6, fParam9)) || unk_0x681F21BF9F7B449B(25, vParam6, fParam9)) || unk_0x681F21BF9F7B449B(9, vParam6, fParam9)) || (unk_0x681F21BF9F7B449B(3, vParam6, fParam9) && !bParam10)) || (unk_0x681F21BF9F7B449B(6, vParam6, fParam9) && !bParam10)) || unk_0x681F21BF9F7B449B(0, vParam6, fParam9)) || unk_0x681F21BF9F7B449B(1, vParam6, fParam9)) || unk_0x681F21BF9F7B449B(23, vParam6, fParam9)) || unk_0x681F21BF9F7B449B(34, vParam6, fParam9)) || unk_0x681F21BF9F7B449B(14, vParam6, fParam9)) || (unk_0x681F21BF9F7B449B(30, vParam6, fParam9) && !bParam10)) || (unk_0x681F21BF9F7B449B(12, vParam6, fParam9) && !bParam10)) || unk_0x681F21BF9F7B449B(7, vParam6, fParam9)) || (unk_0x681F21BF9F7B449B(21, vParam6, fParam9) && !bParam10)) || (unk_0x681F21BF9F7B449B(18, vParam6, fParam9) && !bParam10)) || unk_0x681F21BF9F7B449B(15, vParam6, fParam9)) || unk_0x681F21BF9F7B449B(10, vParam6, fParam9)) || unk_0x681F21BF9F7B449B(27, vParam6, fParam9))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_38(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_39()
{
	if (!unk_0xE4EDC4B0E92C078B(iLocal_63))
	{
		if (!bLocal_110)
		{
			if ((!unk_0xEB6A8945D1AC98A1(iLocal_51[1]) && unk_0xDF1306B443CD3D15(iLocal_54, 0)) && !bLocal_121)
			{
				if (!bLocal_109)
				{
					if (!unk_0xE4EDC4B0E92C078B(uLocal_60[1]))
					{
						uLocal_60[1] = func_42(iLocal_51[1], 0, 145);
					}
				}
				else
				{
					if (unk_0xE4EDC4B0E92C078B(uLocal_60[1]))
					{
						unk_0x142CC44DB769B57E(&(uLocal_60[1]));
					}
					if (!unk_0xE4EDC4B0E92C078B(iLocal_59))
					{
						iLocal_59 = func_40(iLocal_54, 0, 0);
					}
				}
			}
			else
			{
				if (unk_0xE4EDC4B0E92C078B(uLocal_60[1]))
				{
					unk_0x142CC44DB769B57E(&(uLocal_60[1]));
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_59))
				{
					unk_0x142CC44DB769B57E(&iLocal_59);
				}
			}
		}
		else
		{
			if (unk_0xE4EDC4B0E92C078B(uLocal_60[0]) && unk_0x76137156E5D43335(uLocal_60[0]) != 119)
			{
				unk_0x142CC44DB769B57E(&(uLocal_60[0]));
			}
			if (unk_0xE4EDC4B0E92C078B(uLocal_60[1]) && unk_0x76137156E5D43335(uLocal_60[1]) != 119)
			{
				unk_0x142CC44DB769B57E(&(uLocal_60[1]));
			}
			if (unk_0xE4EDC4B0E92C078B(iLocal_59) && unk_0x76137156E5D43335(iLocal_59) != 119)
			{
				unk_0x142CC44DB769B57E(&iLocal_59);
			}
			if (unk_0xDF1306B443CD3D15(iLocal_54, 0))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_51)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_51[iVar0]))
					{
						if (unk_0xC42A92762C58E1B9(iLocal_51[iVar0], iLocal_54, 0))
						{
							bVar1 = true;
						}
					}
					iVar0++;
				}
			}
			if (bVar1)
			{
				if (!unk_0xE4EDC4B0E92C078B(iLocal_59))
				{
					iLocal_59 = func_40(iLocal_54, 1, 0);
				}
			}
			else if (unk_0xE4EDC4B0E92C078B(iLocal_59))
			{
				unk_0x142CC44DB769B57E(&iLocal_59);
			}
			if ((unk_0xDF1306B443CD3D15(iLocal_54, 0) && unk_0xE4EDC4B0E92C078B(iLocal_59)) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_54, 0))
				{
					if (unk_0x4FA921CB56EDB0F8(iLocal_59) != 0)
					{
						unk_0x7F010F50CE03A8AF(iLocal_59, 0);
					}
				}
				else if (unk_0x4FA921CB56EDB0F8(iLocal_59) != 255)
				{
					unk_0x7F010F50CE03A8AF(iLocal_59, 255);
				}
			}
			iVar0 = 0;
			while (iVar0 < iLocal_51)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_51[iVar0]) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if (!unk_0x762119754C50557A(iLocal_137) && !unk_0x405E212DDE472467(iLocal_51[iVar0], 0))
					{
						if (!unk_0xE9FDA1035CFEA94F(iLocal_51[iVar0]) || vdist(unk_0x68F4C0EC296D3901(iLocal_51[iVar0], true), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true)) < 30f)
						{
							iVar2[iVar0] = 1;
						}
					}
					if (iLocal_48 == 8 && !unk_0x405E212DDE472467(iLocal_51[iVar0], 0))
					{
						iVar2[iVar0] = 1;
					}
					if (iLocal_48 == 5)
					{
						iVar2[iVar0] = 0;
					}
				}
				if (iVar2[iVar0])
				{
					if (!unk_0xE4EDC4B0E92C078B(uLocal_60[iVar0]))
					{
						uLocal_60[iVar0] = func_42(iLocal_51[iVar0], 1, 145);
					}
				}
				else if (unk_0xE4EDC4B0E92C078B(uLocal_60[iVar0]))
				{
					unk_0x142CC44DB769B57E(&(uLocal_60[iVar0]));
				}
				iVar0++;
			}
			if (unk_0x762119754C50557A(iLocal_137) && !bLocal_121)
			{
				if (!unk_0xE4EDC4B0E92C078B(iLocal_64))
				{
					iLocal_64 = func_32(iLocal_137);
				}
			}
			else if (unk_0xE4EDC4B0E92C078B(iLocal_64))
			{
				unk_0x142CC44DB769B57E(&iLocal_64);
			}
		}
	}
	else if ((unk_0xC844350D5D58C99A(iLocal_54) && unk_0xC844350D5D58C99A(iLocal_51[0])) && unk_0xC844350D5D58C99A(iLocal_51[1]))
	{
		if ((((((!unk_0x03068588A1FCED1A(iLocal_54) && unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_54, 100f, 100f, 30f, 0, 1, 0)) || (!unk_0x03068588A1FCED1A(iLocal_51[0]) && unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_51[0], 100f, 100f, 30f, 0, 1, 0))) || (!unk_0x03068588A1FCED1A(iLocal_51[1]) && unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_51[1], 100f, 100f, 30f, 0, 1, 0))) || unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_54, 50f, 50f, 20f, 0, 1, 0)) || unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_51[0], 50f, 50f, 20f, 0, 1, 0)) || unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_51[1], 50f, 50f, 20f, 0, 1, 0))
		{
			unk_0x142CC44DB769B57E(&iLocal_63);
		}
	}
	if (unk_0xE4EDC4B0E92C078B(uLocal_60[0]))
	{
		unk_0xF2D30B8ACAF12A39(uLocal_60[0], iLocal_122);
	}
	if (unk_0xE4EDC4B0E92C078B(uLocal_60[1]))
	{
		unk_0xF2D30B8ACAF12A39(uLocal_60[1], bLocal_122);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_59))
	{
		unk_0xF2D30B8ACAF12A39(iLocal_59, bLocal_122);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_64))
	{
		unk_0xF2D30B8ACAF12A39(iLocal_64, bLocal_122);
	}
	if (!bLocal_122)
	{
		if (bLocal_110 || iLocal_49 == 3)
		{
			bLocal_122 = false;
		}
	}
}

int func_40(int iParam0, bool bParam1, bool bParam2)
{
	return func_41(iParam0, !bParam1, bParam2);
}

int func_41(int iParam0, bool bParam1, bool bParam2)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_33(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_33(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_33(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
	}
	return iVar0;
}

int func_42(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_41(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_1798[iParam2].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2].f_3));
	}
	return iVar0;
}

void func_43()
{
	func_45(9, iLocal_47);
	while (!func_44())
	{
		wait(0);
	}
	func_231();
}

int func_44()
{
	return 1;
}

void func_45(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_65();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_64(iParam0))
	{
		func_63(iParam0, iParam1);
		if (!func_62(51))
		{
			func_58("RE_REWARD", 1, 0, 4000, 10000, func_61(), 0, 138, 0);
			func_57(51);
		}
		if (func_56(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_55(iParam0, iParam1) != 322)
		{
			func_47(func_55(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_111626 = iParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_46(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_46(7);
			}
			else
			{
				func_46(1);
			}
		}
	}
}

void func_46(int iParam0)
{
	Global_111624 = iParam0;
}

void func_47(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_53((891 + iParam0), 1, -1, 1);
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
		func_48();
	}
}

void func_48()
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
		func_52(13, floor(Global_111638.f_10189.f_3853));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_51() == 2 == 0 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_49();
				}
			}
		}
	}
}

int func_49()
{
	if (func_50(0))
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

bool func_50(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

int func_51()
{
	return Global_30768;
}

int func_52(int iParam0, int iParam1)
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

int func_53(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_54();
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

int func_54()
{
	return Global_1312745;
}

int func_55(int iParam0, int iParam1)
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

int func_56(int iParam0)
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

void func_57(int iParam0)
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

void func_58(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_59(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_59(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_60();
	}
}

void func_60()
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

int func_61()
{
	func_17();
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

int func_62(int iParam0)
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

void func_63(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_111638.f_24990.f_8[iParam0]), iParam1);
}

int func_64(int iParam0)
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

int func_65()
{
	StringCopy(&Var0, unk_0xBB0808A181D4745C(), 64);
	uVar16 = func_66(Var0);
	return uVar16;
}

int func_66(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_67()
{
	if (bLocal_111)
	{
		if (unk_0xEB751B41BC4080D4(iLocal_137))
		{
			return 1;
		}
	}
	return 0;
}

void func_68(int iParam0)
{
	iLocal_48 = iParam0;
	iLocal_50 = 0;
}

int func_69()
{
	if (!unk_0x762119754C50557A(iLocal_137))
	{
		if (bLocal_109)
		{
			if (unk_0xDF1306B443CD3D15(iLocal_54, 0))
			{
				if (!func_70(iLocal_54))
				{
					if (iLocal_465 == -1)
					{
						iLocal_465 = unk_0x1C0640BA9A7327B3();
					}
				}
				else if (iLocal_465 != -1)
				{
					iLocal_465 = -1;
				}
			}
		}
		if (!bLocal_109)
		{
			if (iLocal_130 != -1)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_51[iLocal_130]))
				{
					if (!func_70(iLocal_54))
					{
						if (iLocal_465 == -1)
						{
							iLocal_465 = unk_0x1C0640BA9A7327B3();
						}
					}
					else if (iLocal_465 != -1)
					{
						iLocal_465 = -1;
					}
				}
			}
		}
		if (iLocal_465 != -1)
		{
			if ((unk_0x1C0640BA9A7327B3() - iLocal_465) > 3000)
			{
				unk_0x6DAD7906B73F064D(&(iLocal_51[0]));
				unk_0x6DAD7906B73F064D(&(iLocal_51[1]));
				unk_0x1BF8B16C32704027(iLocal_54, -1000f, 1);
				unk_0x20641932E5104B25(iLocal_54, true, 0);
				unk_0x046C362CF15F1935(&iLocal_54);
				return 1;
			}
		}
	}
	else
	{
		if (iLocal_465 != -1)
		{
			iLocal_465 = -1;
		}
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && vdist(unk_0xE925E52ACABA4CE7(iLocal_137), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true)) > 300f)
		{
			return 1;
		}
	}
	return 0;
}

int func_70(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iParam0, true)) < 150f)
		{
			return 1;
		}
		else if (!unk_0x03068588A1FCED1A(iParam0) && vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iParam0, true)) < 300f)
		{
			return 1;
		}
	}
	return 0;
}

void func_71()
{
	if (iLocal_507 == -1)
	{
		iLocal_507 = unk_0x1C0640BA9A7327B3();
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		switch (iLocal_50)
		{
			case 0:
				bLocal_110 = true;
				if (!unk_0xEB6A8945D1AC98A1(iLocal_51[0]) || !unk_0xEB6A8945D1AC98A1(iLocal_51[1]))
				{
					if (func_27() < 30f && !unk_0xEB6A8945D1AC98A1(Local_140[3]))
					{
						func_4(&Local_140, cLocal_139, "RESEC_SHT1", 8, 0, 0, 0);
					}
				}
				iVar0 = 0;
				while (iVar0 < iLocal_51)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_51[iVar0]) && unk_0xC844350D5D58C99A(iLocal_56))
					{
						if ((iVar0 != iLocal_130 || bLocal_109) || !unk_0x50B5F6F3C29E9380(iLocal_56, iLocal_51[iVar0]))
						{
							unk_0xA3BF0AA5A2608191(iLocal_51[iVar0]);
							unk_0xDD353D0E9C789D0E(&iLocal_58);
							if (unk_0x405E212DDE472467(iLocal_51[iVar0], 0))
							{
								if (iLocal_117)
								{
									if (unk_0x59F02DA2266A744C("move_injured_generic"))
									{
										unk_0x79C43E2BAC7C696F(iLocal_51[iVar0], "move_injured_generic", 1048576000);
										iLocal_118[iVar0] = 1;
									}
								}
								unk_0x75CDA8644CD3B5F5(0, 0, 256);
							}
							unk_0xBC43ED9FE28DB191(0);
							if (iLocal_118[iVar0])
							{
								unk_0x93D47DFD0AE94949(0, unk_0x09AC81E49EA267F7(1000, 3000));
							}
							unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
							unk_0x75ABDC5F81978924(iLocal_58);
							unk_0x78ADC381772E3D54(iLocal_51[iVar0], iLocal_58);
							unk_0xF82EA857DA10E0CD(&iLocal_58);
						}
						unk_0xAFF39FB306F8E232(iLocal_51[iVar0], 6, false);
						unk_0xAFF39FB306F8E232(iLocal_51[iVar0], 0, true);
						unk_0xAFF39FB306F8E232(iLocal_51[iVar0], 1, false);
						unk_0x3CC33E4E9CE523F4(iLocal_51[iVar0], 1);
						unk_0x26A6B1686E33113F(iLocal_51[iVar0], 1);
						unk_0x11AD11297DC58CC7(iLocal_51[iVar0], true);
					}
					iVar0++;
				}
				if ((unk_0xC844350D5D58C99A(iLocal_56) && unk_0xD59B17D2DFF98E26(iLocal_56)) && !unk_0xEB6A8945D1AC98A1(iLocal_51[iLocal_130]))
				{
					unk_0xA3BF0AA5A2608191(iLocal_51[iLocal_130]);
				}
				settimera(0);
				iLocal_50++;
				break;
			
			case 1:
				if (func_76(iLocal_130))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_51[iLocal_130]))
					{
						unk_0xA3BF0AA5A2608191(iLocal_51[iLocal_130]);
						unk_0xDD353D0E9C789D0E(&iLocal_58);
						if (unk_0x405E212DDE472467(iLocal_51[iLocal_130], 0))
						{
							unk_0x75CDA8644CD3B5F5(0, 0, 256);
						}
						unk_0xBC43ED9FE28DB191(0);
						unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
						unk_0x75ABDC5F81978924(iLocal_58);
						unk_0x78ADC381772E3D54(iLocal_51[iLocal_130], iLocal_58);
						unk_0xF82EA857DA10E0CD(&iLocal_58);
					}
					iLocal_50++;
				}
				break;
			
			case 2:
				if (!unk_0xEB6A8945D1AC98A1(iLocal_51[0]) || !unk_0xEB6A8945D1AC98A1(iLocal_51[1]))
				{
					if (unk_0xEB6A8945D1AC98A1(iLocal_51[0]) && !unk_0xEB6A8945D1AC98A1(iLocal_51[1]))
					{
						if (Local_140[3] != iLocal_51[1])
						{
							func_75(&Local_140, 3);
							func_75(&Local_140, 4);
							func_74(&Local_140, 3, iLocal_51[1], "SECVANGUY1", 0, 1);
						}
					}
					iVar0 = 0;
					while (iVar0 < iLocal_51)
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_51[iVar0]))
						{
							if ((iLocal_49 == 2 && !iLocal_123[iVar0]) && !unk_0x437347B10A200C4B(iLocal_54, 0))
							{
								unk_0x5BCC146C60688877(iLocal_51[iVar0], iLocal_54, unk_0x68E4ADDDDCD7BDDE(iLocal_54, 0f, -4f, 0f), 5f, 0);
								iLocal_123[iVar0] = 1;
							}
							if (((unk_0x762119754C50557A(iLocal_137) && !iLocal_123[iVar0]) && iLocal_49 == 3) && !bLocal_121)
							{
								unk_0x5BCC146C60688877(iLocal_51[iVar0], iLocal_54, unk_0xE925E52ACABA4CE7(iLocal_137), 5f, 0);
								iLocal_123[iVar0] = 1;
							}
							if (bLocal_121)
							{
								if (iLocal_123[iVar0])
								{
									unk_0xB3F77607A42FF835(iLocal_51[iVar0], 0);
									iLocal_123[iVar0] = 0;
								}
							}
						}
						iVar0++;
					}
					if (IntToFloat((unk_0x1C0640BA9A7327B3() - iLocal_500)) > unk_0x79833B02DBD2A244(10000f, 15000f))
					{
						if (!func_73() && func_27() < 30f)
						{
							if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 4))
							{
								if (func_4(&Local_140, cLocal_139, "RESEC_SHT2", 8, 0, 0, 0))
								{
									iLocal_500 = unk_0x1C0640BA9A7327B3();
								}
							}
						}
					}
					if (unk_0xDF1306B443CD3D15(iLocal_54, 0))
					{
						if (!bLocal_109)
						{
							if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_54, 0) && (unk_0x1C0640BA9A7327B3() - iLocal_507) > 5000)
							{
								if (func_27() > (30f + (30f / 10f)))
								{
									func_68(7);
								}
								if (func_27() > (30f / 2f) && !func_72())
								{
									if (!bLocal_109)
									{
										func_68(7);
									}
									else
									{
										func_68(6);
									}
								}
								if (iLocal_48 != 8)
								{
									iLocal_123[0] = 0;
									iLocal_123[1] = 0;
									iLocal_507 = -1;
								}
							}
						}
					}
				}
				break;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_51)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_51[iVar0]))
			{
				if (iVar0 == 0)
				{
					iVar1 = 7000;
				}
				else
				{
					iVar1 = 9000;
				}
				if (timera() > iVar1 && iLocal_118[iVar0])
				{
					unk_0x76D5D8AF296F50CE(iLocal_51[iVar0], 1048576000);
					iLocal_118[iVar0] = 0;
				}
			}
			iVar0++;
		}
	}
}

bool func_72()
{
	if ((unk_0x1C0640BA9A7327B3() - iLocal_484) > 250)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_51)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_51[iVar0]))
				{
					if (unk_0xF649DD3BF44195C7(iLocal_51[iVar0], unk_0x16F2683693E537C9(), 19) && unk_0x6AB6A474D29FA7D8(iLocal_51[iVar0], unk_0x16F2683693E537C9()))
					{
						iLocal_481[iVar0] = 1;
					}
					else
					{
						iLocal_481[iVar0] = 0;
					}
				}
				iVar0++;
			}
		}
	}
	return (iLocal_481[0] || iLocal_481[1]);
}

int func_73()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
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

void func_75(var uParam0, int iParam1)
{
	if (uParam0[iParam1]->f_7 == 1)
	{
		uParam0[iParam1]->f_7 = 0;
	}
}

bool func_76(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iLocal_56))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_51[iParam0]))
		{
			if (unk_0x50B5F6F3C29E9380(iLocal_56, iLocal_51[iParam0]))
			{
				if (unk_0xB4ECF989E2C1DAC8(iLocal_51[iParam0], "weapons@holster_1h", "holster", 3))
				{
					if (unk_0x8CA9406E01C7EE58(iLocal_51[iParam0], "weapons@holster_1h", "holster") > 0,9f)
					{
						unk_0x15AFB6CBDE990FB6(iLocal_56, 1, true);
						unk_0xF690C84DADBB3551(&iLocal_56);
					}
				}
				else
				{
					unk_0x11AD11297DC58CC7(iLocal_51[iParam0], true);
					unk_0xC6EB89C59F2AF6B8(iLocal_51[iParam0], "weapons@holster_1h", "holster", 8f, -8f, -1, 0, 0, 0, 0, 0);
				}
			}
		}
	}
	bVar0 = (!unk_0xC844350D5D58C99A(iLocal_56) || (unk_0xC844350D5D58C99A(iLocal_56) && !unk_0x50B5F6F3C29E9380(iLocal_56, iLocal_51[iParam0])));
	if (bVar0)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_51[iParam0]))
		{
			unk_0x11AD11297DC58CC7(iLocal_51[iParam0], false);
		}
	}
	return bVar0;
}

void func_77(int iParam0, bool bParam1)
{
	if (unk_0xDF1306B443CD3D15(iLocal_54, 0) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		vVar0 = { func_35(unk_0x5293C88BD2F4DE13(iLocal_54, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true))) };
		fVar3 = ((unk_0xD9522BA9E27E1349(iLocal_54) + unk_0xE7D606C557C86100(vVar0.x, vVar0.y)) + 45f);
		fVar4 = ((unk_0xD9522BA9E27E1349(iLocal_54) + unk_0xE7D606C557C86100(vVar0.x, vVar0.y)) - 45f);
		vVar5[0] = { unk_0x8A5E176FF719A014(unk_0x68F4C0EC296D3901(iLocal_54, true), fVar3, 0f, 4,5f, 0f) };
		vVar5[1] = { unk_0x8A5E176FF719A014(unk_0x68F4C0EC296D3901(iLocal_54, true), fVar4, 0f, 4,5f, 0f) };
		func_78(&fVar3);
		func_78(&fVar4);
		if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_501) > 2f)
		{
			bVar13 = true;
		}
		iVar12 = 0;
		while (iVar12 < iLocal_51)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_51[iVar12]))
			{
				if (vdist(unk_0x68F4C0EC296D3901(iLocal_51[iVar12], true), vVar5[iVar12]) > 2f)
				{
					bVar13 = true;
				}
			}
			iVar12++;
		}
		if (bVar13)
		{
			iVar12 = 0;
			while (iVar12 < iLocal_51)
			{
				if ((((((!unk_0xEB6A8945D1AC98A1(iLocal_51[iVar12]) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && vdist(unk_0x68F4C0EC296D3901(iLocal_51[iVar12], true), vVar5[iVar12]) > 2f) && (unk_0x1C0640BA9A7327B3() - iLocal_504[iVar12]) > 1000) && !unk_0x405E212DDE472467(iLocal_51[iVar12], 0)) && !iLocal_481[iVar12]) && (iParam0 == -1 || iParam0 == iVar12))
				{
					if (bParam1)
					{
						if (func_72())
						{
							vLocal_501 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
						}
						unk_0xDD353D0E9C789D0E(&iVar14);
						if (func_72() || func_38(vLocal_501))
						{
							unk_0xE20F700AC2AFCA92(0, vVar5[iVar12], unk_0x16F2683693E537C9(), 2f, false, 0,5f, 4f, true, 0, 0, -957453492, 20000);
							unk_0x9BE7E7B6B488CC55(0, unk_0x16F2683693E537C9(), -1, 1);
						}
						else
						{
							unk_0x4AA5B7135D59B3E5(0, vVar5[iVar12], vLocal_501, 2f, false, 0,5f, 4f, 1, 0, 0, -957453492);
							unk_0x731C6942D48648D6(0, vLocal_501, -1, 1, 0);
						}
						unk_0x75ABDC5F81978924(iVar14);
						unk_0x78ADC381772E3D54(iLocal_51[iVar12], iVar14);
						unk_0xF82EA857DA10E0CD(&iVar14);
					}
					iLocal_504[iVar12] = unk_0x1C0640BA9A7327B3();
				}
				iVar12++;
			}
		}
	}
}

void func_78(float fParam0)
{
	if (*fParam0 > 180f)
	{
		*fParam0 = (*fParam0 - 360f);
	}
	else if (*fParam0 < -180f)
	{
		*fParam0 = (*fParam0 + 360f);
	}
}

void func_79(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iLocal_54, 0))
	{
		switch (iLocal_50)
		{
			case 0:
				if (!bLocal_109)
				{
					unk_0x11AD11297DC58CC7(iParam0, true);
					unk_0xA3BF0AA5A2608191(iParam0);
					vLocal_485 = { unk_0xBF584557291FDD31(iLocal_54, 0) };
					vLocal_488 = { unk_0x835730A2D89F6093(iLocal_54, 2) };
					vLocal_491 = { unk_0x1BB04F10296A1C5E("random@security_van", "sec_case_into_van_panic", vLocal_485, vLocal_488, 0, 2) };
					if (((!unk_0xEB6A8945D1AC98A1(iLocal_51[1]) && !unk_0x437347B10A200C4B(iLocal_51[1], 0)) && !unk_0xEB6A8945D1AC98A1(iLocal_51[0])) && !unk_0x437347B10A200C4B(iLocal_51[0], 0))
					{
						if (func_27() < 20f)
						{
							if (bLocal_110)
							{
								func_4(&Local_140, cLocal_139, "RESEC_REC", 8, 0, 0, 0);
							}
						}
						if (unk_0x762119754C50557A(iLocal_137))
						{
							if (bLocal_110)
							{
								unk_0x96167B03C5A77156(iParam0, unk_0xE925E52ACABA4CE7(iLocal_137), 2f, -1, 1048576000, 0, 1193033728);
							}
							else
							{
								unk_0x96167B03C5A77156(iParam0, unk_0xE925E52ACABA4CE7(iLocal_137), 1f, -1, 1048576000, 0, 1193033728);
							}
							iLocal_50++;
						}
						else
						{
							func_85(iParam0);
							iLocal_50 = 2;
						}
					}
					else if (!unk_0xEB6A8945D1AC98A1(iParam0))
					{
						if (unk_0x762119754C50557A(iLocal_137))
						{
							unk_0x96167B03C5A77156(iParam0, unk_0xE925E52ACABA4CE7(iLocal_137), 2f, -1, 1048576000, 0, 1193033728);
							iLocal_50++;
						}
						else
						{
							func_85(iParam0);
							iLocal_50 = 2;
						}
					}
				}
				else
				{
					iLocal_50 = 4;
				}
				break;
			
			case 1:
				if (!unk_0xEB6A8945D1AC98A1(iParam0) && unk_0x762119754C50557A(iLocal_137))
				{
					if ((unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, true), unk_0xE925E52ACABA4CE7(iLocal_137), true) < 2f && !unk_0x869EFD0BC0868856(iParam0)) && (unk_0x1C0640BA9A7327B3() - iLocal_136) > 3000)
					{
						if (unk_0x03A10A5707B2BB1F(iParam0, 4))
						{
							unk_0x5745EA6329A91E29(iParam0, -1569615261, true);
						}
						unk_0x40B7230FD4C59AA2(iLocal_137);
						func_85(iParam0);
						unk_0x5745EA6329A91E29(iParam0, -1569615261, true);
						bLocal_111 = false;
						iLocal_130 = iLocal_129;
						iLocal_50++;
					}
				}
				break;
			
			case 2:
				if (!unk_0xEB6A8945D1AC98A1(iParam0) && unk_0xDF1306B443CD3D15(iLocal_54, 0))
				{
					if (unk_0xD1960163A3042274(iParam0, 713668775) != 1)
					{
						if (bLocal_110)
						{
							unk_0x96167B03C5A77156(iParam0, vLocal_491, 2f, -1, 0,1f, 512, vLocal_488.z);
						}
						else
						{
							unk_0x96167B03C5A77156(iParam0, vLocal_491, 1f, -1, 0,1f, 512, vLocal_488.z);
						}
						iLocal_50++;
					}
				}
				break;
			
			case 3:
				if (!unk_0xEB6A8945D1AC98A1(iParam0))
				{
					if (unk_0x762119754C50557A(iLocal_137))
					{
						iLocal_50 = 0;
					}
					else
					{
						fVar0 = unk_0xD9522BA9E27E1349(iParam0);
						if (fVar0 > 180f)
						{
							fVar0 = (fVar0 - 360f);
						}
						if (fVar0 <= -180f)
						{
							fVar0 = (fVar0 + 360f);
						}
						if (vLocal_488.z > 180f)
						{
							vLocal_488.z = (vLocal_488.z - 360f);
						}
						if (vLocal_488.z <= -180f)
						{
							vLocal_488.z = (vLocal_488.z + 360f);
						}
						if (vdist(vLocal_491, unk_0x68F4C0EC296D3901(iParam0, true)) < 0,3f)
						{
							if (unk_0x755FF954DAE327E1((fVar0 - vLocal_488.z)) < 15f)
							{
								unk_0x33B89BCE228F08FC(iParam0, -1056964608);
								unk_0xA3BF0AA5A2608191(iParam0);
								bLocal_496 = true;
								iLocal_494 = unk_0xE9744DB7B8CA6965(vLocal_485, vLocal_488, 2);
								if (bLocal_110)
								{
									unk_0x915804B434753CBD(iParam0, iLocal_494, "random@security_van", "sec_case_into_van_panic", 4f, 4f, 3, 0, 4f, 0);
									unk_0xE14EC663EED44AD5(iLocal_54, iLocal_494, "van_case_into_van_panic", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								else
								{
									unk_0x915804B434753CBD(iParam0, iLocal_494, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
									unk_0xE14EC663EED44AD5(iLocal_54, iLocal_494, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								unk_0xF895E10BF4C72645(iParam0, 0, 0);
								iLocal_50++;
							}
						}
						else if (unk_0x03068588A1FCED1A(iParam0) && !unk_0x8E28E832BEAC3DCE(vLocal_485, 2f))
						{
							unk_0xA47B46945FF6DE74(iParam0, vLocal_485, 1, false, 0, 1);
						}
					}
				}
				break;
			
			case 4:
				if (unk_0x69DF961355195C3C(iLocal_494))
				{
					if (bLocal_110)
					{
						fLocal_508 = 0,42f;
					}
					else
					{
						fLocal_508 = 0,3893f;
					}
					if (bLocal_110)
					{
						fLocal_509 = 0,52f;
					}
					else
					{
						fLocal_509 = 0,546243f;
					}
					if (!bLocal_109)
					{
						if ((unk_0xC844350D5D58C99A(iLocal_56) && unk_0x50B5F6F3C29E9380(iLocal_56, iParam0)) && unk_0xA45992A6CE82FB43(iLocal_494) > fLocal_508)
						{
							if (!unk_0x50B5F6F3C29E9380(iLocal_56, iLocal_54))
							{
								unk_0x15AFB6CBDE990FB6(iLocal_56, 1, true);
								unk_0x20641932E5104B25(iLocal_56, false, 0);
								unk_0x9F528B1B53FBC5D9(iLocal_56, iLocal_54, 0, unk_0x5293C88BD2F4DE13(iLocal_54, unk_0x68F4C0EC296D3901(iLocal_56, true)), 90f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							bLocal_109 = true;
						}
					}
					else if (unk_0xA45992A6CE82FB43(iLocal_494) > fLocal_509)
					{
						unk_0x1BF8B16C32704027(iLocal_54, -4f, 1);
						unk_0xA3BF0AA5A2608191(iParam0);
						if (unk_0xC844350D5D58C99A(iLocal_56))
						{
							iLocal_106 = 0;
							unk_0x152BCACCF710B36E(iLocal_54, 2, 1);
							unk_0x152BCACCF710B36E(iLocal_54, 3, 1);
							unk_0x11AD11297DC58CC7(iParam0, false);
							iLocal_50++;
						}
					}
				}
				break;
			
			case 5:
				if ((unk_0x69DF961355195C3C(iLocal_494) && unk_0xA45992A6CE82FB43(iLocal_494) > fLocal_509) || !unk_0x69DF961355195C3C(iLocal_494))
				{
					if (!bLocal_110)
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_51[0]))
						{
							unk_0x5B1D360B9C6F0A09(iLocal_51[0], iLocal_54, -1, -1, 1f, 1, 0);
						}
					}
					iLocal_50++;
				}
				break;
			
			case 6:
				if (unk_0xDF1306B443CD3D15(iLocal_54, 0))
				{
					if (bLocal_110)
					{
						func_68(6);
					}
					else
					{
						func_68(4);
					}
				}
				else
				{
					func_68(8);
				}
				break;
			}
	}
	if (!unk_0xDF1306B443CD3D15(iLocal_54, 0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_51[0]) || !unk_0xEB6A8945D1AC98A1(iLocal_51[1]))
		{
			func_68(8);
		}
	}
	if ((!unk_0xEB6A8945D1AC98A1(iLocal_51[0]) || !unk_0xEB6A8945D1AC98A1(iLocal_51[1])) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (!bLocal_109)
		{
			if ((((((func_27() < 10f && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 6)) && func_72()) || ((func_27() < 20f && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 6)) && unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))) || (func_27() < 5f && bLocal_110)) || (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && func_80(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))) || ((!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && unk_0xC844350D5D58C99A(unk_0x728870EB733D12A1())) && func_80(unk_0x728870EB733D12A1())))
			{
				func_68(8);
			}
		}
	}
	if (iLocal_48 != 7)
	{
		if (bLocal_109)
		{
			if (unk_0x69DF961355195C3C(iLocal_494))
			{
				unk_0x1BF8B16C32704027(iLocal_54, -8f, 1);
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			unk_0x11AD11297DC58CC7(iParam0, false);
		}
	}
	if ((unk_0xDF1306B443CD3D15(iLocal_54, 0) && iLocal_48 != 7) && unk_0x69DF961355195C3C(iLocal_494))
	{
		unk_0x1BF8B16C32704027(iLocal_54, -8f, 1);
	}
}

int func_80(int iParam0)
{
	iVar0 = 0;
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xC844350D5D58C99A(iLocal_54))
	{
		uVar59 = 4;
		unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iParam0), &Var1, &Var4);
		vVar7[0] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var1, Var4.f_1, 0f) };
		vVar7[1] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var4, Var4.f_1, 0f) };
		vVar7[2] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var4, Var1.f_1, 0f) };
		vVar7[3] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var1, Var1.f_1, 0f) };
		fVar72 = -3,7f;
		fVar73 = 1,35f;
		vVar20[0] = { unk_0x68E4ADDDDCD7BDDE(iLocal_54, (-fVar73 - 0,25f), fVar72, 0f) };
		vVar20[1] = { unk_0x68E4ADDDDCD7BDDE(iLocal_54, (fVar73 + 0,25f), fVar72, 0f) };
		vVar20[2] = { unk_0x68E4ADDDDCD7BDDE(iLocal_54, (fVar73 - 0,25f), (fVar72 - 1,55f), 0f) };
		vVar20[3] = { unk_0x68E4ADDDDCD7BDDE(iLocal_54, (-fVar73 + 0,25f), (fVar72 - 1,55f), 0f) };
		vVar33[0] = { unk_0x68E4ADDDDCD7BDDE(iLocal_54, -fVar73, 0,5f, 0f) };
		vVar33[1] = { unk_0x68E4ADDDDCD7BDDE(iLocal_54, (-fVar73 - 0,75f), 0,5f, 0f) };
		vVar33[2] = { unk_0x68E4ADDDDCD7BDDE(iLocal_54, (-fVar73 - 0,75f), 1,5f, 0f) };
		vVar33[3] = { unk_0x68E4ADDDDCD7BDDE(iLocal_54, -fVar73, 1,5f, 0f) };
		vVar46[0] = { unk_0x68E4ADDDDCD7BDDE(iLocal_54, fVar73, 0,5f, 0f) };
		vVar46[1] = { unk_0x68E4ADDDDCD7BDDE(iLocal_54, (fVar73 + 0,75f), 0,5f, 0f) };
		vVar46[2] = { unk_0x68E4ADDDDCD7BDDE(iLocal_54, (fVar73 + 0,75f), 1,5f, 0f) };
		vVar46[3] = { unk_0x68E4ADDDDCD7BDDE(iLocal_54, fVar73, 1,5f, 0f) };
		if (!bLocal_109)
		{
			if (func_81(&vVar20, &vVar7, &uVar59))
			{
				iVar0 = 1;
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_51[0]) && !unk_0xC42A92762C58E1B9(iLocal_51[0], iLocal_54, 1))
		{
			if (func_81(&vVar33, &vVar7, &uVar59))
			{
				iVar0 = 1;
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_51[1]) && !unk_0xC42A92762C58E1B9(iLocal_51[1], iLocal_54, 1))
		{
			if (func_81(&vVar46, &vVar7, &uVar59))
			{
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_81(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar2 = iVar0 + 1;
		if (iVar2 == *uParam0)
		{
			iVar2 = 0;
		}
		iVar1 = 0;
		while (iVar1 < *uParam1)
		{
			iVar3 = iVar1 + 1;
			if (iVar3 == *uParam1)
			{
				iVar3 = 0;
			}
			if (func_82(*uParam0[iVar0], *uParam0[iVar2], *uParam1[iVar1], *uParam1[iVar3], uParam2[iVar0]))
			{
				return 1;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 0;
}

int func_82(vector3 vParam0, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11, var uParam12)
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
	if (((fVar11 < func_84(fVar0, fVar1) || fVar11 > func_83(fVar0, fVar1)) || fVar11 < func_84(fVar2, fVar3)) || fVar11 > func_83(fVar2, fVar3))
	{
		return 0;
	}
	if (((fVar12 < func_84(fVar4, fVar5) || fVar12 > func_83(fVar4, fVar5)) || fVar12 < func_84(fVar6, fVar7)) || fVar12 > func_83(fVar6, fVar7))
	{
		return 0;
	}
	*uParam12 = fVar11;
	uParam12->f_1 = fVar12;
	uParam12->f_2 = vParam0.z;
	return 1;
}

float func_83(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_84(float fParam0, float fParam1)
{
	if (fParam0 < fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_85(int iParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (!unk_0xC844350D5D58C99A(iLocal_56))
		{
			iLocal_56 = unk_0x7707E48765093646(iLocal_105, vLocal_77, 1, true, false);
			unk_0x98868AF51859FC75(iLocal_56, false);
		}
		if (unk_0xC844350D5D58C99A(iLocal_56))
		{
			unk_0x9F528B1B53FBC5D9(iLocal_56, iParam0, unk_0x4A089F2B762B8D33(iParam0, 28422), vLocal_90, vLocal_93, 1, 0, 0, 0, 2, 1);
		}
	}
}

void func_86()
{
	switch (iLocal_50)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < iLocal_51)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_51[iVar0]))
				{
					unk_0x11AD11297DC58CC7(iLocal_51[iVar0], true);
				}
				iVar0++;
			}
			bLocal_110 = true;
			if (unk_0xDF1306B443CD3D15(iLocal_54, 0))
			{
				if (unk_0xC844350D5D58C99A(func_89()))
				{
					if (!unk_0xEB6A8945D1AC98A1(func_89()))
					{
						if (unk_0xA30B8362589C124A(iLocal_54, -1, 0) != func_89() && unk_0xBBA8A868118C90ED(iLocal_54, -1, 0))
						{
							unk_0x5B1D360B9C6F0A09(func_89(), iLocal_54, 20000, -1, 2f, 1, 0);
						}
					}
				}
				if (!unk_0xEB6A8945D1AC98A1(iLocal_51[1]) && func_89() != iLocal_51[1])
				{
					if (unk_0xA30B8362589C124A(iLocal_54, 0, 0) != iLocal_51[1] && unk_0xBBA8A868118C90ED(iLocal_54, 0, 0))
					{
						unk_0x5B1D360B9C6F0A09(iLocal_51[1], iLocal_54, -1, 0, 2f, 1, 0);
					}
				}
				iLocal_50++;
			}
			else
			{
				func_68(8);
			}
			break;
		
		case 1:
			if (func_88())
			{
				if (unk_0xC844350D5D58C99A(func_89()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					unk_0x89258193691A7600(func_89(), iLocal_54, unk_0x16F2683693E537C9(), 8, 50f, 786484, 100f, 5f, 1);
					iLocal_50++;
				}
			}
			break;
		
		case 2:
			if (func_87())
			{
				if (unk_0xC844350D5D58C99A(func_89()))
				{
					unk_0x60274E99F9B27DEA(func_89(), iLocal_54, 0, 5, 0f, 786484, 100f, 100f, 1);
					iLocal_50++;
				}
			}
			break;
		
		case 3:
			if (unk_0xDF1306B443CD3D15(iLocal_54, 0))
			{
				if (unk_0x9C66D99E63E8E24C(iLocal_54) < 2f)
				{
					func_68(8);
				}
			}
			break;
	}
	if ((unk_0xC844350D5D58C99A(iLocal_54) && unk_0xC844350D5D58C99A(unk_0xA30B8362589C124A(iLocal_54, -1, 0))) && (unk_0x437347B10A200C4B(unk_0xA30B8362589C124A(iLocal_54, -1, 0), 0) || unk_0xEB6A8945D1AC98A1(unk_0xA30B8362589C124A(iLocal_54, -1, 0))))
	{
		iVar1 = 0;
		if (unk_0xA30B8362589C124A(iLocal_54, -1, 0) == iLocal_51[0])
		{
			iVar1 = 1;
		}
		if (vdist2(unk_0x68F4C0EC296D3901(iLocal_54, true), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true)) > 100f)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_51[iVar1]) && unk_0xD1960163A3042274(iLocal_51[iVar1], 242628503) != 1)
			{
				unk_0xBAFED2F6486F771A(iLocal_51[iVar1], 2, true);
				unk_0xDD353D0E9C789D0E(&iVar2);
				unk_0x16A6C233289238AA(0, iLocal_54, 0);
				unk_0x89258193691A7600(0, iLocal_54, unk_0x16F2683693E537C9(), 8, 50f, 786484, 100f, 5f, 1);
				unk_0x75ABDC5F81978924(iVar2);
				unk_0x78ADC381772E3D54(iLocal_51[iVar1], iVar2);
				unk_0xF82EA857DA10E0CD(&iVar2);
			}
		}
		else
		{
			func_68(8);
		}
	}
	if (((((((!unk_0xDF1306B443CD3D15(iLocal_54, 0) || unk_0x762119754C50557A(iLocal_137)) || iLocal_49 == 3) || unk_0x7B5606C651AB51B5(iLocal_54, 0, 7000)) || unk_0x7B5606C651AB51B5(iLocal_54, 3, 30000)) || unk_0x7B5606C651AB51B5(iLocal_54, 2, 30000)) || unk_0x7B5606C651AB51B5(iLocal_54, 1, 40000)) || (iLocal_50 > 1 && !func_88()))
	{
		if (!func_88())
		{
		}
		func_68(8);
	}
}

int func_87()
{
	if (unk_0xC844350D5D58C99A(iLocal_54))
	{
		if (!unk_0x437347B10A200C4B(iLocal_54, 0))
		{
			if (((((unk_0x7F6DC62EA9922664(iLocal_54) < 300 || unk_0x6EE94F60DA2A2273(iLocal_54) < 200f) || (unk_0x464B3D84B739AE72(iLocal_54, 0, 0) && unk_0x464B3D84B739AE72(iLocal_54, 1, 0))) || (unk_0x464B3D84B739AE72(iLocal_54, 4, 0) && unk_0x464B3D84B739AE72(iLocal_54, 5, 0))) || (unk_0x464B3D84B739AE72(iLocal_54, 0, 0) && unk_0x464B3D84B739AE72(iLocal_54, 4, 0))) || (unk_0x464B3D84B739AE72(iLocal_54, 1, 0) && unk_0x464B3D84B739AE72(iLocal_54, 5, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_88()
{
	iVar0 = 1;
	if (unk_0xDF1306B443CD3D15(iLocal_54, 0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_51[0]) && !unk_0x437347B10A200C4B(iLocal_51[0], 0))
		{
			if (!unk_0xC42A92762C58E1B9(iLocal_51[0], iLocal_54, 0))
			{
				iVar0 = 0;
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_51[1]) && !unk_0x437347B10A200C4B(iLocal_51[1], 0))
		{
			if (!unk_0xC42A92762C58E1B9(iLocal_51[1], iLocal_54, 0))
			{
				iVar0 = 0;
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_89()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_51[0]) && !unk_0x437347B10A200C4B(iLocal_51[0], 0))
	{
		return iLocal_51[0];
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_51[1]) && !unk_0x437347B10A200C4B(iLocal_51[1], 0))
	{
		return iLocal_51[1];
	}
	return 0;
}

void func_90()
{
	switch (iLocal_50)
	{
		case 0:
			if (!bLocal_109)
			{
				if (unk_0xC844350D5D58C99A(iLocal_56) && unk_0xD59B17D2DFF98E26(iLocal_56))
				{
					unk_0x15AFB6CBDE990FB6(iLocal_56, 1, true);
				}
			}
			if ((!unk_0xEB6A8945D1AC98A1(iLocal_51[0]) || !unk_0xEB6A8945D1AC98A1(iLocal_51[1])) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (func_27() < 20f)
				{
					func_4(&Local_140, cLocal_139, "RESEC_FFLEE", 8, 0, 0, 0);
				}
				iVar0 = 0;
				while (iVar0 < iLocal_51)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_51[iVar0]))
					{
						unk_0xAFF39FB306F8E232(iLocal_51[iVar0], 17, true);
						unk_0xBAFED2F6486F771A(iLocal_51[iVar0], 128, true);
						unk_0xBAFED2F6486F771A(iLocal_51[iVar0], 16, true);
						unk_0xAFF39FB306F8E232(iLocal_51[iVar0], 1, false);
						unk_0xDD353D0E9C789D0E(&iVar1);
						if (unk_0x405E212DDE472467(iLocal_51[iVar0], 1))
						{
							unk_0x75CDA8644CD3B5F5(iLocal_51[iVar0], 0, 256);
						}
						unk_0xF3268524E9BE6D6E(0, unk_0x16F2683693E537C9(), 300f, -1, 0, 0);
						unk_0x75ABDC5F81978924(iVar1);
						unk_0x78ADC381772E3D54(iLocal_51[iVar0], iVar1);
						unk_0xF82EA857DA10E0CD(&iVar1);
					}
					iVar0++;
				}
			}
			bLocal_113 = true;
			iLocal_50++;
			break;
		
		case 1:
			if (unk_0xDF1306B443CD3D15(iLocal_54, 0))
			{
				if (func_91(iLocal_54, 1, 0, 0, 0, 0, 1, 0, 1))
				{
					iLocal_50++;
				}
			}
			break;
	}
}

int func_91(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	iVar1 = unk_0xD6DF381716822EFE(iParam0) + 1;
	if (iParam4 || !unk_0x437347B10A200C4B(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_93(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0xC844350D5D58C99A(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x16F2683693E537C9())
				{
				}
				else if (bParam2)
				{
					if (unk_0x34BFC6F0CB887BC2(iVar2))
					{
						iVar3 = unk_0x83FACCC48B68F9D1(iVar2);
						if (((!unk_0xEB6A8945D1AC98A1(iVar2) && iVar3 != func_10()) && func_92(iVar3, 1, 1)) || iParam8)
						{
							if (unk_0x179932739160BA96(unk_0x83FACCC48B68F9D1(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0xEB6A8945D1AC98A1(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_92(int iParam0, bool bParam1, bool bParam2)
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

int func_93(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!unk_0xBBA8A868118C90ED(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0xA30B8362589C124A(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0xC844350D5D58C99A(iVar0) && !unk_0x437347B10A200C4B(iParam0, 0))
		{
			iVar0 = unk_0xB0326EA5AFB4EFA7(iParam0, iParam1);
			if (!unk_0x437347B10A200C4B(iVar0, 0))
			{
				if (unk_0xD1960163A3042274(iVar0, 451360105) == 1 || unk_0xD1960163A3042274(iVar0, -828834893) == 1)
				{
					if (vdist(unk_0x68F4C0EC296D3901(iParam0, false), unk_0x68F4C0EC296D3901(iVar0, false)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_94()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_51[0]) && !unk_0xEB6A8945D1AC98A1(iLocal_51[1]))
	{
		switch (iLocal_50)
		{
			case 0:
				if (func_4(&Local_140, cLocal_139, "RESEC_CAR1", 8, 0, 0, 0))
				{
					if (unk_0xC844350D5D58C99A(iLocal_56) && unk_0xD59B17D2DFF98E26(iLocal_56))
					{
						if (!unk_0x50B5F6F3C29E9380(iLocal_56, iLocal_51[0]))
						{
							func_95(0);
						}
						else
						{
							unk_0xA3BF0AA5A2608191(iLocal_51[0]);
						}
						if (!unk_0x50B5F6F3C29E9380(iLocal_56, iLocal_51[1]))
						{
							func_95(1);
						}
						else
						{
							unk_0xA3BF0AA5A2608191(iLocal_51[1]);
						}
						iLocal_50++;
					}
					else
					{
						func_95(0);
						func_95(1);
						iLocal_50 = 2;
					}
				}
				break;
			
			case 1:
				if (func_76(iLocal_130))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_51[iLocal_130]))
					{
						func_95(iLocal_130);
					}
					iLocal_50++;
				}
				break;
			
			case 2:
				if (!func_73())
				{
					if (func_4(&Local_140, cLocal_139, "RESEC_CAR2", 8, 0, 0, 0))
					{
						settimera(0);
						iLocal_50++;
					}
				}
				break;
			
			case 3:
				if ((timera() > 12000 && !func_73()) && func_4(&Local_140, cLocal_139, "RESEC_CAR3", 8, 0, 0, 0))
				{
					settimera(0);
					iLocal_50++;
				}
				break;
			
			case 4:
				if ((timera() > 7000 && !func_73()) && func_4(&Local_140, cLocal_139, "RESEC_CAR4", 8, 0, 0, 0))
				{
					settimera(0);
					func_68(8);
				}
				break;
			}
	}
	if (iLocal_50 > 0)
	{
		func_77(-1, 1);
	}
	if (unk_0xC844350D5D58C99A(iLocal_55))
	{
		if (!unk_0x437347B10A200C4B(iLocal_55, 0) && unk_0xDF1306B443CD3D15(iLocal_54, 0))
		{
			if (vdist(unk_0x68F4C0EC296D3901(iLocal_55, true), unk_0x68F4C0EC296D3901(iLocal_54, true)) > 10f)
			{
				func_68(7);
			}
		}
		if ((unk_0x437347B10A200C4B(iLocal_55, 0) || !unk_0xDF1306B443CD3D15(iLocal_55, 0)) || (!unk_0x10BA239D3B8FDC7F(iLocal_55, 90f) && !unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_55, 1)))
		{
			if (!func_80(iLocal_55))
			{
				func_68(7);
			}
			else
			{
				func_68(8);
			}
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_51[0]) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0xB87D13D0C064E9D1(iLocal_51[0], unk_0x16F2683693E537C9(), 1))
		{
			func_68(8);
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_51[1]) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0xB87D13D0C064E9D1(iLocal_51[1], unk_0x16F2683693E537C9(), 1))
		{
			func_68(8);
		}
	}
	if (unk_0xDF1306B443CD3D15(iLocal_54, 0) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (iLocal_116)
		{
			func_68(8);
		}
	}
	if (bLocal_121)
	{
		func_68(8);
	}
	if ((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && func_72()) && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 7))
	{
		func_68(2);
	}
	if (!unk_0xDF1306B443CD3D15(iLocal_54, 0))
	{
		func_68(5);
	}
}

void func_95(int iParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_51[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0xA3BF0AA5A2608191(iLocal_51[iParam0]);
		unk_0xDD353D0E9C789D0E(&iLocal_58);
		if (unk_0x405E212DDE472467(iLocal_51[iParam0], 0))
		{
			unk_0x75CDA8644CD3B5F5(0, 0, 256);
		}
		unk_0xBC43ED9FE28DB191(0);
		unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), -1, 0, 2);
		unk_0x9BE7E7B6B488CC55(0, unk_0x16F2683693E537C9(), -1, 0);
		unk_0x75ABDC5F81978924(iLocal_58);
		unk_0x78ADC381772E3D54(iLocal_51[iParam0], iLocal_58);
		unk_0xF82EA857DA10E0CD(&iLocal_58);
		if (iLocal_131 == 0)
		{
			iLocal_131 = unk_0x7D0D8317DC09FF68(118, unk_0x68F4C0EC296D3901(iLocal_51[iParam0], true), -1f);
		}
	}
}

void func_96()
{
	switch (iLocal_50)
	{
		case 0:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_51[0]))
			{
				unk_0x11AD11297DC58CC7(iLocal_51[0], true);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_51[1]))
			{
				unk_0x11AD11297DC58CC7(iLocal_51[1], true);
			}
			if (func_103())
			{
				if (func_4(&Local_140, cLocal_139, "RESEC_ATT1", 8, 0, 0, 0))
				{
					settimera(0);
					func_68(8);
				}
			}
			else if ((!unk_0xEB6A8945D1AC98A1(iLocal_51[0]) && !unk_0xEB6A8945D1AC98A1(iLocal_51[1])) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (func_102() || func_101())
				{
					func_4(&Local_140, cLocal_139, "RESEC_ENT1", 8, 0, 0, 0);
				}
				else if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 4))
				{
					func_4(&Local_140, cLocal_139, "RESEC_WEP1", 8, 0, 0, 0);
				}
				else
				{
					func_4(&Local_140, cLocal_139, "RESEC_WARN", 8, 0, 0, 0);
				}
				settimera(0);
				if (unk_0xC844350D5D58C99A(iLocal_56) && unk_0xD59B17D2DFF98E26(iLocal_56))
				{
					if (!unk_0x50B5F6F3C29E9380(iLocal_56, iLocal_51[0]))
					{
						func_95(0);
					}
					else
					{
						unk_0xA3BF0AA5A2608191(iLocal_51[0]);
					}
					if (!unk_0x50B5F6F3C29E9380(iLocal_56, iLocal_51[1]))
					{
						func_95(1);
					}
					else
					{
						unk_0xA3BF0AA5A2608191(iLocal_51[1]);
					}
					iLocal_50++;
				}
				else
				{
					func_95(0);
					func_95(1);
					iLocal_50 = 2;
				}
			}
			break;
		
		case 1:
			if (func_76(iLocal_130))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_51[iLocal_130]))
				{
					func_95(iLocal_130);
				}
				iLocal_50++;
			}
			break;
		
		case 2:
			if (!func_100())
			{
				if (!func_99(iLocal_54, 1000) && timera() > 10000)
				{
					bVar0 = true;
				}
				else if (timera() > 7000)
				{
					settimera(7000);
				}
				if (timera() > 5000)
				{
					if (func_102())
					{
						bVar0 = true;
					}
				}
				if (timera() > 10000)
				{
					if (func_101())
					{
						bVar0 = true;
					}
				}
				iVar1 = 0;
				while (iVar1 < iLocal_51)
				{
					if (!func_99(iLocal_51[iVar1], 1000) && (func_27() < 2f && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 6)))
					{
						bVar0 = true;
					}
					if (!unk_0x437347B10A200C4B(iLocal_51[iVar1], 0))
					{
						if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_51[iVar1]) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_51[iVar1]))
						{
							bVar0 = true;
						}
					}
					iVar1++;
				}
				func_77(-1, 1);
				if (IntToFloat((unk_0x1C0640BA9A7327B3() - iLocal_500)) > unk_0x79833B02DBD2A244(5000f, 7500f))
				{
					if (!func_73())
					{
						if (func_4(&Local_140, cLocal_139, "RESEC_WARN", 8, 0, 0, 0))
						{
							iLocal_500 = unk_0x1C0640BA9A7327B3();
						}
					}
				}
				if (bVar0)
				{
					func_97();
					func_68(8);
				}
			}
			break;
	}
	iVar2 = 0;
	while (iVar2 < iLocal_51)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0xC844350D5D58C99A(iLocal_51[iVar2]))
		{
			if ((unk_0xEB6A8945D1AC98A1(iLocal_51[iVar2]) || unk_0x437347B10A200C4B(iLocal_51[iVar2], 0)) && unk_0xB87D13D0C064E9D1(iLocal_51[iVar2], unk_0x16F2683693E537C9(), 0))
			{
				func_68(8);
			}
		}
		iVar2++;
	}
	if ((unk_0xEB6A8945D1AC98A1(iLocal_51[0]) || unk_0xEB6A8945D1AC98A1(iLocal_51[1])) || bLocal_121)
	{
		func_68(8);
	}
	if ((unk_0xDF1306B443CD3D15(iLocal_54, 0) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && func_72())
	{
		if (unk_0xB87D13D0C064E9D1(iLocal_54, unk_0x16F2683693E537C9(), 1))
		{
			func_68(8);
		}
	}
	if (!unk_0xDF1306B443CD3D15(iLocal_54, 0))
	{
		func_68(5);
	}
	if ((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 6)) && unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
	{
		func_68(8);
	}
	if (func_27() > 20f || ((!iLocal_481[0] && !iLocal_481[1]) && func_27() > 5f))
	{
		func_68(7);
	}
}

void func_97()
{
	Global_19671 = 0;
	func_98();
}

void func_98()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

int func_99(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0xC844350D5D58C99A(iParam0))
		{
			if ((unk_0xEC560E589DF8370E(iParam0) && !unk_0xEB6A8945D1AC98A1(unk_0x940C1429253D3B1B(iParam0))) || (unk_0xE2F1E99DD161A861(iParam0) && unk_0xDF1306B443CD3D15(unk_0x96A5FE5834B81CE7(iParam0), 0)))
			{
				if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iParam0, true)) > fLocal_498)
				{
					iVar0 = 1;
				}
				if ((unk_0x1C0640BA9A7327B3() - iLocal_499) > iParam1)
				{
					fLocal_498 = vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iParam0, true));
					iLocal_499 = unk_0x1C0640BA9A7327B3();
				}
			}
		}
	}
	return iVar0;
}

int func_100()
{
	if (unk_0xDF1306B443CD3D15(iLocal_54, 0) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_54, 20f, 20f, 5f, 0, 1, 0) && !unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_101()
{
	if (unk_0xDF1306B443CD3D15(iLocal_54, 0) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), unk_0x68E4ADDDDCD7BDDE(iLocal_54, 0f, 1,7532f, 0,5984f), unk_0x68E4ADDDDCD7BDDE(iLocal_54, 0f, 3,3477f, 3,5984f), 2,8f, 0, true, 0))
		{
			return 1;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_51)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_51[iVar0]))
			{
				if ((!unk_0xC42A92762C58E1B9(iLocal_51[iVar0], iLocal_54, 0) && unk_0x64E716CF8C283BF5(unk_0x16F2683693E537C9(), iLocal_54)) && vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iLocal_51[iVar0], true)) < 400f)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_102()
{
	if (unk_0xDF1306B443CD3D15(iLocal_54, 0) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()) == iLocal_54)
		{
			if (unk_0x3366C505CA31A0C9(unk_0x16F2683693E537C9()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_103()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if ((!unk_0xEB6A8945D1AC98A1(iLocal_51[0]) && unk_0x12DE711B1C681E9E(iLocal_51[0], unk_0x16F2683693E537C9(), 20f, 20f, 5f, 0, 1, 0)) || (!unk_0xEB6A8945D1AC98A1(iLocal_51[1]) && unk_0x12DE711B1C681E9E(iLocal_51[1], unk_0x16F2683693E537C9(), 20f, 20f, 5f, 0, 1, 0)))
		{
			if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 4) && unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_104(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_105(var uParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
	{
		func_135(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_106(uParam0, vParam1, iParam4, iParam5, bParam6, iParam7, bParam8);
}

void func_106(var uParam0, vector3 vParam1, var uParam4, int iParam5, bool bParam6, var uParam7, bool bParam8)
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
	if (func_104(iVar0))
	{
		func_127();
	}
	if (!unk_0x8C74DE122769E1BF())
	{
		if (func_122(uParam0, bParam6, bParam8, 0))
		{
			func_121(uParam0, vParam1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_111(iVar0))
			{
				if ((unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0)) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					if ((unk_0x8E28E832BEAC3DCE(vParam1, 1f) && !unk_0xFEBC1E4EC9E001F0()) && uParam7)
					{
						if (!func_104(iVar0))
						{
							func_137(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
							{
								func_110(1);
							}
						}
					}
				}
			}
		}
		else if (func_111(iVar0))
		{
			if (unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0))
			{
				if ((unk_0x8E28E832BEAC3DCE(vParam1, 1f) && !unk_0xFEBC1E4EC9E001F0()) && uParam7)
				{
					if (!func_104(iVar0))
					{
						func_137(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
						{
							func_110(1);
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
			if (func_104(iVar0) && unk_0xFEBC1E4EC9E001F0())
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
					func_135(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(6) == 3 || unk_0xA4FD7964FEE91ED8(6) == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(4) == 3 || unk_0xA4FD7964FEE91ED8(4) == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(5) == 3 || unk_0xA4FD7964FEE91ED8(5) == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(2) == 3 || unk_0xA4FD7964FEE91ED8(2) == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xF3545351E9CBB11F() == 3 || unk_0xF3545351E9CBB11F() == 4)
			{
				func_135(uParam0, iVar0, 1);
			}
		}
		if (!func_122(uParam0, bParam6, bParam8, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_109(uParam0))
			{
				func_107(uParam0);
			}
		}
	}
}

void func_107(var uParam0)
{
	if (func_108(unk_0x16F2683693E537C9()))
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
			unk_0x4D7F4CC43D4D0DE3(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_108(int iParam0)
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

int func_109(var uParam0)
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

int func_110(bool bParam0)
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

int func_111(char* sParam0)
{
	if (!func_112(1, 1, 0))
	{
		if ((!unk_0xEA6BC48857E0AC4C(sParam0) && func_104(sParam0)) || func_104("CMN_HINT"))
		{
			unk_0xA37A90C62806D848(1);
		}
		return 0;
	}
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (func_110(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_110(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_110(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_112(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_120(0))
	{
		return 0;
	}
	if (func_119())
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
	if ((func_118() || func_117(Global_4456448.f_232883)) || func_116())
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			iVar1 = func_115(unk_0x16F2683693E537C9(), 0);
			if (((unk_0x137240CA2BADB0D2(iVar0, iVar1) || (unk_0x134B62B726CEC8E6(iVar0) == 562680400 && iVar1 != -1)) || (unk_0x134B62B726CEC8E6(iVar0) == 1181327175 && iVar1 != -1)) || (((unk_0x134B62B726CEC8E6(iVar0) == -1693015116 && iVar1 == 0) && func_114(iVar0, 10)) && unk_0x0ECB5CA5140957AD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1686722)
	{
		return 0;
	}
	if (func_113(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	return 1;
}

int func_113(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_92(iParam0, 1, 1))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && iParam0 == unk_0xD803B885F5E47A62()) && func_92(iParam0, 1, 0))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
	}
	return 0;
}

int func_114(int iParam0, int iParam1)
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

int func_115(int iParam0, int iParam1)
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

var func_116()
{
	return Global_2450632.f_17;
}

bool func_117(int iParam0)
{
	return iParam0 == 51;
}

var func_118()
{
	return Global_2450632.f_16;
}

bool func_119()
{
	return unk_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

int func_120(int iParam0)
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

void func_121(var uParam0, vector3 vParam1, int iParam4)
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
	unk_0x4D7F4CC43D4D0DE3(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x1C0640BA9A7327B3();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_122(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_126(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_109(uParam0))
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
						if (!func_126(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1C0640BA9A7327B3();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_126(bParam1, bParam2, bParam3))
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
					if (!func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_125(bParam1, bParam2, bParam3) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
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
				else if (!func_126(bParam1, bParam2, bParam3))
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
						if (func_124(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_123(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1) || func_123(bParam1, bParam2, bParam3))
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
					else if (func_124(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_109(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_112(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_127();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_123(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
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

int func_124(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
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

int func_125(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
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

int func_126(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
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

void func_127()
{
	unk_0x5D96D8530B3D0904(&Global_7357, 4);
}

void func_128(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_129(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_129(var uParam0, int iParam1, vector3 vParam2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
	{
		func_135(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_130(uParam0, iParam1, vParam2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_130(var uParam0, int iParam1, vector3 vParam2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
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
	if (func_104(iVar0))
	{
		func_127();
	}
	if (func_108(iParam1) && unk_0x4FC40AB0ECCE6E18(iParam1))
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
			if (func_122(uParam0, bParam7, bParam9, 0))
			{
				func_131(uParam0, iParam1, vParam2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_111(iVar0))
				{
					if ((unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0)) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						if ((iVar1 && !unk_0xFEBC1E4EC9E001F0()) && uParam8)
						{
							if (!func_104(iVar0))
							{
								func_137(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
								{
									func_110(1);
								}
							}
						}
					}
				}
			}
			else if (func_111(iVar0))
			{
				if (unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0))
				{
					if (((unk_0x0A059E0DB9253280(iParam1) && iVar1) && !unk_0xFEBC1E4EC9E001F0()) && uParam8)
					{
						if (!func_104(iVar0))
						{
							func_137(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
							{
								func_110(1);
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
				if (func_104(sParam5))
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
						func_135(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(6) == 3 || unk_0xA4FD7964FEE91ED8(6) == 4)
					{
						func_135(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(4) == 3 || unk_0xA4FD7964FEE91ED8(4) == 4)
					{
						func_135(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(5) == 3 || unk_0xA4FD7964FEE91ED8(5) == 4)
					{
						func_135(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(2) == 3 || unk_0xA4FD7964FEE91ED8(2) == 4)
					{
						func_135(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF3545351E9CBB11F() == 3 || unk_0xF3545351E9CBB11F() == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			if (!func_122(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_109(uParam0))
				{
					func_107(uParam0);
				}
			}
		}
	}
	else
	{
		func_135(uParam0, iVar0, 0);
	}
}

void func_131(var uParam0, int iParam1, vector3 vParam2, int iParam5)
{
	if (Global_1319117 == 1)
	{
		return;
	}
	if (unk_0x437347B10A200C4B(iParam1, 0))
	{
		func_135(uParam0, 0, 0);
	}
	if (func_134(vParam2, 0f, 0f, 0f, 0))
	{
		if (unk_0xEC560E589DF8370E(iParam1))
		{
			iVar0 = unk_0x940C1429253D3B1B(iParam1);
			if (!unk_0x405E212DDE472467(iVar0, 0))
			{
				if (unk_0x34BFC6F0CB887BC2(iVar0))
				{
					if (!func_132())
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
	unk_0x4D7F4CC43D4D0DE3(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x1C0640BA9A7327B3();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_132()
{
	return func_133(unk_0xD803B885F5E47A62());
}

int func_133(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(iParam0)) == -1667301416)
	{
		return 1;
	}
	return 0;
}

bool func_134(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_135(var uParam0, int iParam1, int iParam2)
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
			unk_0x4D7F4CC43D4D0DE3(-1, "FocusOut", "HintCamSounds", 1);
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
		if (func_104(uParam0->f_3))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (func_104(sVar0))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
}

void func_136(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_111638.f_24990.f_6), iParam0);
}

void func_137(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_138(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_6, iParam0);
}

int func_139(int iParam0)
{
	if (func_142())
	{
		Global_111628 = 1;
		Global_111625 = unk_0x1C0640BA9A7327B3();
		if (func_56(Global_111627))
		{
			func_140(0);
		}
		unk_0x974531784BE14213(1, "RE_TITLE");
		if (iParam0 && func_56(Global_111627))
		{
			unk_0x4A51D2E4732BD556();
		}
		return 1;
	}
	return 0;
}

void func_140(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_137(func_141(iParam0), -1);
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
					func_137(func_141(iParam0), -1);
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
					func_137(func_141(iParam0), -1);
					Global_111638.f_24990.f_4++;
					unk_0x5D96D8530B3D0904(&Global_111634, 2);
				}
			}
			break;
	}
}

char* func_141(int iParam0)
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

int func_142()
{
	switch (func_143(&Global_30827, 0, 5, 0, unk_0x0D0A574C76D769AC()))
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

int func_143(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_147(0))
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
		if (!func_145(iParam2))
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
			func_144(uParam0, iParam4);
		}
	}
	return 2;
}

void func_144(var uParam0, int iParam1)
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

bool func_145(int iParam0)
{
	return func_146(iParam0, Global_41431);
}

int func_146(int iParam0, int iParam1)
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

int func_147(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_145(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_148()
{
	switch (iLocal_50)
	{
		case 0:
			if (unk_0xDF1306B443CD3D15(iLocal_54, 0))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_51[0]) && !unk_0xEB6A8945D1AC98A1(iLocal_51[1]))
				{
					unk_0xAFF39FB306F8E232(iLocal_51[0], 6, true);
					unk_0xAFF39FB306F8E232(iLocal_51[1], 6, true);
					unk_0x11AD11297DC58CC7(iLocal_51[0], true);
					unk_0x11AD11297DC58CC7(iLocal_51[1], true);
					if (unk_0xC42A92762C58E1B9(iLocal_51[0], iLocal_54, 0) && unk_0xC42A92762C58E1B9(iLocal_51[1], iLocal_54, 0))
					{
						if (iLocal_47 == 2)
						{
							unk_0xDD353D0E9C789D0E(&iVar0);
							unk_0xE9362E4D600DD12A(0, iLocal_54, -574,6195f, -847,232f, 25,2925f, 10f, 0, 1747439474, 786603, 2f, 4f);
							unk_0xE072601B4380E9DF(0, iLocal_54, 10f, 786603);
							unk_0x75ABDC5F81978924(iVar0);
							unk_0x78ADC381772E3D54(iLocal_51[0], iVar0);
							unk_0xF82EA857DA10E0CD(&iVar0);
							iLocal_50++;
						}
						else if (iLocal_47 == 4)
						{
							unk_0xDD353D0E9C789D0E(&iVar1);
							unk_0xE9362E4D600DD12A(0, iLocal_54, -551,2968f, -1119,418f, 20,4011f, 10f, 0, 1747439474, 786603, 2f, 4f);
							unk_0xE072601B4380E9DF(0, iLocal_54, 10f, 786603);
							unk_0x75ABDC5F81978924(iVar1);
							unk_0x78ADC381772E3D54(iLocal_51[0], iVar1);
							unk_0xF82EA857DA10E0CD(&iVar1);
							iLocal_50++;
						}
						else if (iLocal_47 == 7)
						{
							unk_0xDD353D0E9C789D0E(&iVar2);
							unk_0xE9362E4D600DD12A(0, iLocal_54, 2786,752f, 4358,032f, 48,6794f, 10f, 0, 1747439474, 786603, 2f, 4f);
							unk_0xE072601B4380E9DF(0, iLocal_54, 10f, 786603);
							unk_0x75ABDC5F81978924(iVar2);
							unk_0x78ADC381772E3D54(iLocal_51[0], iVar2);
							unk_0xF82EA857DA10E0CD(&iVar2);
							iLocal_50++;
						}
						else
						{
							unk_0xE072601B4380E9DF(iLocal_51[0], iLocal_54, 10f, 786603);
							iLocal_50++;
						}
					}
					else
					{
						if (!unk_0xC42A92762C58E1B9(iLocal_51[0], iLocal_54, 0) && unk_0xD1960163A3042274(iLocal_51[0], -1794415470) != 1)
						{
							unk_0x5B1D360B9C6F0A09(iLocal_51[0], iLocal_54, -1, -1, 1f, 8388608, 0);
						}
						if (!unk_0xC42A92762C58E1B9(iLocal_51[1], iLocal_54, 0) && unk_0xD1960163A3042274(iLocal_51[1], -1794415470) != 1)
						{
							unk_0x5B1D360B9C6F0A09(iLocal_51[1], iLocal_54, -1, 0, 1f, 8388608, 0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (((((func_152() || func_151()) || func_102()) || func_101()) || func_150()) || func_149())
			{
				if (func_27() < 20f)
				{
					func_97();
					func_4(&Local_140, cLocal_139, "RESEC_VFLEE1", 8, 0, 0, 0);
				}
				func_68(6);
			}
			if (unk_0xDF1306B443CD3D15(iLocal_54, 0) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar3 = 0;
				while (iVar3 < iLocal_51)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_51[iVar3]) && !unk_0x437347B10A200C4B(iLocal_51[iVar3], 0))
					{
						if (unk_0xE64AC821059A938D(unk_0x16F2683693E537C9()) && unk_0x36646919F20EAFFC(iLocal_51[iVar3]))
						{
							func_68(8);
						}
					}
					else
					{
						func_68(6);
					}
					iVar3++;
				}
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_54, 1))
				{
					func_68(8);
				}
			}
			break;
	}
	if (iLocal_48 == 4)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar4, 1);
			if ((iVar4 == 741814745 || iVar4 == 615608432) || iVar4 == -1813897027)
			{
				unk_0x00EE06C17607E306("PLAYER HAS PROJECTILE WEAPON", unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 0, 0, 255, 255);
				if ((unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), unk_0x68E4ADDDDCD7BDDE(iLocal_54, 0f, -3,44f, -3f), unk_0x68E4ADDDDCD7BDDE(iLocal_54, 0f, -13,44f, 3f), 2,3f, 0, true, 0)) && vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iLocal_54, true)) < 225f)
				{
					func_68(6);
				}
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), unk_0x68E4ADDDDCD7BDDE(iLocal_54, 0f, -3,44f, -3f), unk_0x68E4ADDDDCD7BDDE(iLocal_54, 0f, -13,44f, 3f), 2,3f, 0, true, 0))
				{
					unk_0x26F63FD28070F2CE("PLAYER IS BEHIND VAN", 0,1f, 0,8f, 0f, 0, 0, 255, 255);
				}
				if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iLocal_54, true)) < 225f)
				{
					unk_0x26F63FD28070F2CE("PLAYER IS CLOSE TO VAN", 0,1f, 0,82f, 0f, 0, 0, 255, 255);
				}
				if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
				{
				}
			}
		}
		if (((unk_0xDF1306B443CD3D15(iLocal_54, 0) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x68F4C0EC296D3901(iLocal_54, true), 25f, 0)) || (!unk_0xEB6A8945D1AC98A1(iLocal_51[0]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x68F4C0EC296D3901(iLocal_51[0], true), 20f, 0))) || (!unk_0xEB6A8945D1AC98A1(iLocal_51[1]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x68F4C0EC296D3901(iLocal_51[1], true), 20f, 0)))
		{
			func_68(6);
		}
		if (iLocal_48 != 4)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_51[0]))
			{
				unk_0xAFF39FB306F8E232(iLocal_51[0], 6, false);
				unk_0x11AD11297DC58CC7(iLocal_51[0], false);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_51[1]))
			{
				unk_0xAFF39FB306F8E232(iLocal_51[1], 6, false);
				unk_0x11AD11297DC58CC7(iLocal_51[1], false);
			}
		}
	}
}

int func_149()
{
	if ((unk_0xDF1306B443CD3D15(iLocal_54, 0) && unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62())) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) - unk_0x68F4C0EC296D3901(iLocal_54, true) };
		vVar3 = { unk_0x08D89CE2E20AE305(iLocal_54) };
		vVar6 = { unk_0x5293C88BD2F4DE13(iLocal_54, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true)) };
		if (((vVar6.y > 1f && (((unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_54) || unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_54)) || unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_51[0])) || unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_51[1]))) && unk_0x755FF954DAE327E1(unk_0x07AB02F3C4AE2B04(vVar3.x, vVar3.y, vVar0.x, vVar0.y)) < 60f) && unk_0x07AB02F3C4AE2B04(vVar3.z, vVar3.y, vVar0.z, vVar0.y) < 30f)
		{
			return 1;
		}
	}
	return 0;
}

int func_150()
{
	if (unk_0xDF1306B443CD3D15(iLocal_54, 0) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if ((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), unk_0x68E4ADDDDCD7BDDE(iLocal_54, 2,7f, 7f, -2f), unk_0x68E4ADDDDCD7BDDE(iLocal_54, 2,7f, -3,25f, 3f), 3f, 0, true, 0) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), unk_0x68E4ADDDDCD7BDDE(iLocal_54, -2,7f, 7f, -2f), unk_0x68E4ADDDDCD7BDDE(iLocal_54, -2,7f, -3,25f, 3f), 3f, 0, true, 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), unk_0x68E4ADDDDCD7BDDE(iLocal_54, 0f, 7f, -2f), unk_0x68E4ADDDDCD7BDDE(iLocal_54, 0f, 0f, 3f), 2,4f, 0, true, 0))
		{
			if (unk_0xFB275CE013F3A38C(unk_0x16F2683693E537C9()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_151()
{
	if (unk_0xDF1306B443CD3D15(iLocal_54, 0) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0))
			{
				iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			}
		}
		else if (unk_0xC844350D5D58C99A(unk_0x728870EB733D12A1()))
		{
			iVar0 = unk_0x728870EB733D12A1();
		}
		if (unk_0xC844350D5D58C99A(iVar0) && unk_0xC844350D5D58C99A(iLocal_54))
		{
			return ((unk_0xDF1306B443CD3D15(iVar0, 0) && unk_0x1B3D109B39CC2C89(iVar0, iLocal_54)) && unk_0x9C66D99E63E8E24C(iVar0) > 10f);
		}
	}
	return 0;
}

int func_152()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (iLocal_116)
		{
			return 1;
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_51[0]) || unk_0x437347B10A200C4B(iLocal_51[0], 0))
		{
			if (unk_0xB87D13D0C064E9D1(iLocal_51[0], unk_0x16F2683693E537C9(), 1))
			{
				return 1;
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_51[1]) || unk_0x437347B10A200C4B(iLocal_51[1], 0))
		{
			if (unk_0xB87D13D0C064E9D1(iLocal_51[1], unk_0x16F2683693E537C9(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_153()
{
	if ((!unk_0xEB6A8945D1AC98A1(iLocal_51[0]) && !unk_0xEB6A8945D1AC98A1(iLocal_51[1])) && unk_0xDF1306B443CD3D15(iLocal_54, 0))
	{
		switch (iLocal_50)
		{
			case 0:
				vLocal_485 = { unk_0xBF584557291FDD31(iLocal_54, 0) };
				vLocal_488 = { unk_0x835730A2D89F6093(iLocal_54, 2) };
				vLocal_491 = { unk_0x1BB04F10296A1C5E("random@security_van", "sec_case_into_van_calm", vLocal_485, vLocal_488, 0, 2) };
				bLocal_496 = false;
				iLocal_497 = 0;
				unk_0xB9FD7450C0DAB575(iLocal_54, 1084227584);
				unk_0xDD353D0E9C789D0E(&iLocal_58);
				unk_0x93D47DFD0AE94949(0, 5000);
				unk_0x96167B03C5A77156(0, vLocal_491, 1f, -1, 0,1f, 512, vLocal_488.z);
				unk_0xE655C47E46F9A7E4(0, vLocal_488.z, 0);
				unk_0x75ABDC5F81978924(iLocal_58);
				unk_0x78ADC381772E3D54(iLocal_51[1], iLocal_58);
				unk_0xF82EA857DA10E0CD(&iLocal_58);
				iLocal_50++;
				break;
			
			case 1:
				vLocal_485 = { unk_0xBF584557291FDD31(iLocal_54, 0) };
				vLocal_488 = { unk_0x835730A2D89F6093(iLocal_54, 2) };
				vLocal_491 = { unk_0x1BB04F10296A1C5E("random@security_van", "sec_case_into_van_calm", vLocal_485, vLocal_488, 0, 2) };
				if (!unk_0x69DF961355195C3C(iLocal_495))
				{
					if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_77) < 22500f && unk_0x41659B1143875599(iLocal_54))
					{
						iLocal_495 = unk_0xE9744DB7B8CA6965(vLocal_485, vLocal_488, 2);
						unk_0x915804B434753CBD(iLocal_51[0], iLocal_495, "random@security_van", "driver_idle", 2f, -8f, 13, 0, 1148846080, 0);
						unk_0xC90224D9E95E5E3A(iLocal_495, true);
					}
				}
				if (unk_0xD1960163A3042274(iLocal_51[1], 242628503) != 1)
				{
					unk_0xDD353D0E9C789D0E(&iLocal_58);
					unk_0x96167B03C5A77156(0, vLocal_491, 1f, -1, 0,1f, 512, vLocal_488.z);
					unk_0xE655C47E46F9A7E4(0, vLocal_488.z, 0);
					unk_0x75ABDC5F81978924(iLocal_58);
					unk_0x78ADC381772E3D54(iLocal_51[1], iLocal_58);
					unk_0xF82EA857DA10E0CD(&iLocal_58);
				}
				fVar0 = unk_0xD9522BA9E27E1349(iLocal_51[1]);
				if (fVar0 > 180f)
				{
					fVar0 = (fVar0 - 360f);
				}
				if (fVar0 <= -180f)
				{
					fVar0 = (fVar0 + 360f);
				}
				if (vLocal_488.z > 180f)
				{
					vLocal_488.z = (vLocal_488.z - 360f);
				}
				if (vLocal_488.z <= -180f)
				{
					vLocal_488.z = (vLocal_488.z + 360f);
				}
				if (unk_0x755FF954DAE327E1((fVar0 - vLocal_488.z)) < 15f && vdist(vLocal_491, unk_0x68F4C0EC296D3901(iLocal_51[1], true)) < 0,2f)
				{
					unk_0x33B89BCE228F08FC(iLocal_51[1], -1056964608);
					unk_0xA3BF0AA5A2608191(iLocal_51[1]);
					bLocal_496 = true;
					iLocal_494 = unk_0xE9744DB7B8CA6965(vLocal_485, vLocal_488, 2);
					unk_0x915804B434753CBD(iLocal_51[1], iLocal_494, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
					unk_0xE14EC663EED44AD5(iLocal_54, iLocal_494, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
					iLocal_50++;
				}
				break;
			
			case 2:
				if (!iLocal_106)
				{
					if (((unk_0x69DF961355195C3C(iLocal_494) && unk_0xA45992A6CE82FB43(iLocal_494) > 0,09f) && unk_0xA45992A6CE82FB43(iLocal_494) < 0,11f) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_51[1], 20f, 20f, 5f, 0, 1, 0))
						{
							if (func_4(&Local_140, cLocal_139, "RESEC_CHT1", 3, 0, 0, 0))
							{
								iLocal_106 = 1;
							}
						}
					}
				}
				if (unk_0x69DF961355195C3C(iLocal_494))
				{
					if (!bLocal_109)
					{
						if ((unk_0xC844350D5D58C99A(iLocal_56) && unk_0x50B5F6F3C29E9380(iLocal_56, iLocal_51[1])) && unk_0xA45992A6CE82FB43(iLocal_494) > 0,3793f)
						{
							if (!unk_0x50B5F6F3C29E9380(iLocal_56, iLocal_54))
							{
								unk_0x15AFB6CBDE990FB6(iLocal_56, 1, true);
								unk_0x20641932E5104B25(iLocal_56, false, 0);
								unk_0x9F528B1B53FBC5D9(iLocal_56, iLocal_54, 0, unk_0x5293C88BD2F4DE13(iLocal_54, unk_0x68F4C0EC296D3901(iLocal_56, true)), 90f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							bLocal_109 = true;
						}
					}
					else if (unk_0xA45992A6CE82FB43(iLocal_494) > 0,546243f)
					{
						unk_0x1BF8B16C32704027(iLocal_54, -4f, 1);
						if (unk_0xC844350D5D58C99A(iLocal_56))
						{
							iLocal_106 = 0;
							unk_0x152BCACCF710B36E(iLocal_54, 2, 1);
							unk_0x152BCACCF710B36E(iLocal_54, 3, 1);
							iLocal_50++;
						}
					}
				}
				break;
			
			case 3:
				if (!iLocal_106)
				{
					if (((unk_0x69DF961355195C3C(iLocal_494) && unk_0xA45992A6CE82FB43(iLocal_494) > 0,56f) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_51[1], 20f, 20f, 5f, 0, 1, 0))
					{
						if (func_4(&Local_140, cLocal_139, "RESEC_CHT2", 3, 0, 0, 0))
						{
							iLocal_106 = 1;
						}
					}
				}
				if (!iLocal_497)
				{
					if ((unk_0x69DF961355195C3C(iLocal_494) && unk_0xA45992A6CE82FB43(iLocal_494) > 0,6f) || !unk_0x69DF961355195C3C(iLocal_494))
					{
						if (unk_0x69DF961355195C3C(iLocal_495))
						{
							unk_0xA3BF0AA5A2608191(iLocal_51[0]);
							iLocal_495 = unk_0xE9744DB7B8CA6965(vLocal_485, vLocal_488, 2);
							unk_0x915804B434753CBD(iLocal_51[0], iLocal_495, "random@security_van", "driver_exit_calm", 4f, -4f, 9, 0, 1148846080, 0);
						}
						iLocal_497 = 1;
					}
				}
				else if ((unk_0x69DF961355195C3C(iLocal_495) && unk_0xA45992A6CE82FB43(iLocal_495) >= 0,92f) || !unk_0x69DF961355195C3C(iLocal_495))
				{
					if (!unk_0xC42A92762C58E1B9(iLocal_51[0], iLocal_54, 0) && unk_0xD1960163A3042274(iLocal_51[0], -1794415470) != 1)
					{
						unk_0xA3BF0AA5A2608191(iLocal_51[0]);
						unk_0x5B1D360B9C6F0A09(iLocal_51[0], iLocal_54, -1, -1, 1f, 1, 0);
					}
				}
				if (unk_0x69DF961355195C3C(iLocal_494) && unk_0xDDCA9A4E51DADA2B(iLocal_51[1], unk_0x12AB0310C2281427("ENDS_IN_WALK")))
				{
					unk_0xA3BF0AA5A2608191(iLocal_51[1]);
					unk_0x5B1D360B9C6F0A09(iLocal_51[1], iLocal_54, -1, 0, 1f, 1, 0);
					settimera(0);
				}
				if ((func_88() && unk_0xF409BCB95E61D4DB(iLocal_54, 0) == 0f) && unk_0xF409BCB95E61D4DB(iLocal_54, 1) == 0f)
				{
					func_68(4);
				}
				break;
			
			case 4:
				if (timera() > 15000)
				{
					unk_0x152BCACCF710B36E(iLocal_54, 0, 1);
					unk_0x152BCACCF710B36E(iLocal_54, 1, 1);
				}
				break;
		}
		if (((!unk_0xEB6A8945D1AC98A1(func_3()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(func_3(), true)) < 30f) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) != 0)
		{
			func_68(8);
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_51[1]))
	{
		if (unk_0x762119754C50557A(iLocal_137))
		{
			func_68(7);
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (func_157())
		{
			if (func_88())
			{
				func_68(6);
			}
			else
			{
				func_68(8);
			}
		}
		else if (func_155())
		{
			func_68(2);
		}
		else if (func_154())
		{
			func_68(3);
		}
	}
	if (iLocal_48 != 1)
	{
		if (iLocal_48 != 4)
		{
			func_97();
			if (!unk_0xEB6A8945D1AC98A1(iLocal_51[0]))
			{
				if (unk_0xB4ECF989E2C1DAC8(iLocal_51[0], "random@security_van", "driver_idle", 3))
				{
					if (iLocal_47 != 2)
					{
						unk_0x3E8E48829F3C7624(iLocal_51[0], "random@security_van", "driver_exit_panic", vLocal_485, vLocal_488, 1000f, -8f, -1, 4096, 0f, 2, 0);
					}
					else
					{
						unk_0xA3BF0AA5A2608191(iLocal_51[0]);
						unk_0xC6EB89C59F2AF6B8(iLocal_51[0], "random@security_van", "driver_exit_panic", 1000f, -8f, -1, 0, 0, 0, 0, 0);
					}
				}
			}
			if ((unk_0xDF1306B443CD3D15(iLocal_54, 0) && unk_0x69DF961355195C3C(iLocal_494)) && !unk_0xEB6A8945D1AC98A1(iLocal_51[1]))
			{
				unk_0x1BF8B16C32704027(iLocal_54, -1000f, 1);
				unk_0xA3BF0AA5A2608191(iLocal_51[1]);
			}
		}
		if (bLocal_109 && !unk_0x762119754C50557A(iLocal_137))
		{
			unk_0x152BCACCF710B36E(iLocal_54, 2, 1);
			unk_0x152BCACCF710B36E(iLocal_54, 3, 1);
		}
	}
}

int func_154()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0))
			{
				if (func_80(unk_0x728870EB733D12A1()))
				{
					iLocal_55 = unk_0x728870EB733D12A1();
					return 1;
				}
			}
		}
		else if (!unk_0x437347B10A200C4B(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0))
		{
			if (func_80(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
			{
				fLocal_480 = (fLocal_480 + unk_0x6117725E0134737F());
			}
			else if (fLocal_480 > 0f)
			{
				fLocal_480 = (fLocal_480 - (unk_0x6117725E0134737F() * 10f));
			}
			else if (fLocal_480 < 0f)
			{
				fLocal_480 = 0f;
			}
			if (fLocal_480 > 3f)
			{
				iLocal_55 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_155()
{
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		if ((((((!unk_0xEB6A8945D1AC98A1(iLocal_51[iVar0]) && unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62())) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_51[iVar0]) || unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))) && vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iLocal_51[iVar0], true)) < 9f) && !unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 7)) && func_72())
		{
			return 1;
		}
		if (unk_0x869EFD0BC0868856(iLocal_51[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_101())
	{
		return 1;
	}
	if ((func_156() || func_102()) && func_72())
	{
		if (!unk_0xC42A92762C58E1B9(iLocal_51[0], iLocal_54, 0) || !unk_0xC42A92762C58E1B9(iLocal_51[1], iLocal_54, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_156()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 1);
		if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 7) || (iVar0 == 883325847 && unk_0x168558745A6AC21E(unk_0x16F2683693E537C9())))
		{
			if (unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_51[0]))
				{
					if (unk_0x12DE711B1C681E9E(iLocal_51[0], unk_0x16F2683693E537C9(), 12f, 12f, 5f, 0, 1, 0))
					{
						return 1;
					}
				}
				if (!unk_0xEB6A8945D1AC98A1(iLocal_51[1]))
				{
					if (unk_0x12DE711B1C681E9E(iLocal_51[1], unk_0x16F2683693E537C9(), 12f, 12f, 5f, 0, 1, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_157()
{
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		if ((((((!unk_0xEB6A8945D1AC98A1(iLocal_51[iVar0]) && unk_0xB87D13D0C064E9D1(iLocal_51[iVar0], unk_0x16F2683693E537C9(), 1)) || (!unk_0xEB6A8945D1AC98A1(iLocal_51[iVar0]) && unk_0x4734A6196B611C3B(iLocal_51[iVar0], unk_0x16F2683693E537C9()))) || unk_0xB87D13D0C064E9D1(iLocal_51[iVar0], unk_0x16F2683693E537C9(), 1)) || (unk_0xB87D13D0C064E9D1(iLocal_54, unk_0x16F2683693E537C9(), 1) && func_72())) || unk_0xEB6A8945D1AC98A1(iLocal_51[iVar0])) || unk_0x437347B10A200C4B(iLocal_51[iVar0], 0))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_150() || func_103())
	{
		return 1;
	}
	if (unk_0xDF1306B443CD3D15(iLocal_54, 0))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_51)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_51[iVar0]))
			{
				if (unk_0xE64AC821059A938D(unk_0x16F2683693E537C9()) && unk_0x36646919F20EAFFC(iLocal_51[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_54, 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()) || unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
	{
		if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_77, 25f, 25f, 20f, false, true, 0))
		{
			return 1;
		}
	}
	if (((unk_0xDF1306B443CD3D15(iLocal_54, 0) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x68F4C0EC296D3901(iLocal_54, true), 25f, 0)) || (!unk_0xEB6A8945D1AC98A1(iLocal_51[0]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x68F4C0EC296D3901(iLocal_51[0], true), 20f, 0))) || (!unk_0xEB6A8945D1AC98A1(iLocal_51[1]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x68F4C0EC296D3901(iLocal_51[1], true), 20f, 0)))
	{
		return 1;
	}
	return 0;
}

int func_158()
{
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		if (unk_0xC844350D5D58C99A(iLocal_51[iVar0]))
		{
			if ((!unk_0xEB6A8945D1AC98A1(iLocal_51[iVar0]) && !unk_0x437347B10A200C4B(iLocal_51[iVar0], 0)) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if ((unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(iLocal_51[iVar0], true), 5f, 1) || func_37(unk_0x68F4C0EC296D3901(iLocal_51[iVar0], true) + Vector(5f, 10f, 10f), unk_0x68F4C0EC296D3901(iLocal_51[iVar0], true) - Vector(5f, 5f, 5f), 0f, 0f, 0f, 0, 0)) || unk_0xB87D13D0C064E9D1(iLocal_51[iVar0], unk_0x16F2683693E537C9(), 1))
				{
					bLocal_110 = true;
					return 1;
				}
			}
			else
			{
				bLocal_110 = true;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_159()
{
	iLocal_54 = unk_0x122AAB0B1D6F55AD(iLocal_104, vLocal_77, fLocal_80, true, true, false);
	iLocal_57 = unk_0x7707E48765093646(-1249748547, vLocal_77, 1, true, false);
	unk_0x9F528B1B53FBC5D9(iLocal_57, iLocal_54, 0, 0f, -2,4589f, 1,2195f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	unk_0x4A4806F9D471E491(iLocal_57, false, 0);
	unk_0xB0703A3FDD659128(iLocal_57, iLocal_54, false);
	unk_0xB9FD7450C0DAB575(iLocal_54, 1084227584);
	unk_0x71EDC33E5A423750(iLocal_54, 3);
	unk_0xAA6B3A4292417750(iLocal_57, false, true, true, true, true, true, 0, false);
	unk_0xE2F0767314863BD8(iLocal_54, 1, 0);
	unk_0xD458AC1C1D29C3B4(iLocal_54, 700, 0);
	unk_0x9A8BCD43DBDDCDCA(iLocal_54, false, 0);
	unk_0xE8832A9E16A57A1F(iLocal_54, true, 1);
	unk_0x6F83A63131598C64(iLocal_54, 0);
	unk_0xB26AC67EF006D7D4(iLocal_54, 1);
	unk_0x10FEEAFF01E32639((vLocal_77.x - 200f), (vLocal_77.y - 200f), (vLocal_77.x + 200f), (vLocal_77.y + 200f));
	if (iLocal_46 == 3)
	{
		iLocal_51[0] = unk_0x852A19533F896693(iLocal_54, 26, iLocal_103, -1, 1, true);
		iLocal_51[1] = unk_0x852A19533F896693(iLocal_54, 26, iLocal_103, 0, 1, true);
		unk_0x56FDC9ADE35F7DB0(iLocal_54, true, true, 0);
		unk_0xE8832A9E16A57A1F(iLocal_54, true, 1);
	}
	else
	{
		iLocal_51[1] = unk_0x36F2404464202779(26, iLocal_103, vLocal_67[1], fLocal_74[1], 1, true);
		iLocal_51[0] = unk_0x36F2404464202779(26, iLocal_103, vLocal_67[0], fLocal_74[0], 1, true);
		unk_0x0C8C0C840C2D1AD2(iLocal_51[1], iLocal_51[0], -1, 0, 2);
	}
	func_85(iLocal_51[1]);
	unk_0xF63400DBE3303D26("Security_guards", &iLocal_66);
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		unk_0x6D80F1AEBA734886(iLocal_51[iVar0], 0);
		unk_0xAFF39FB306F8E232(iLocal_51[iVar0], 1, false);
		unk_0xAFF39FB306F8E232(iLocal_51[iVar0], 13, false);
		unk_0xAFF39FB306F8E232(iLocal_51[iVar0], 6, true);
		unk_0xAFF39FB306F8E232(iLocal_51[iVar0], 8, false);
		unk_0xAFF39FB306F8E232(iLocal_51[iVar0], 10, true);
		unk_0xBAFED2F6486F771A(iLocal_51[iVar0], 512, true);
		unk_0x4E885A246A9D983A(iLocal_51[iVar0], 118, false);
		unk_0xBAFED2F6486F771A(iLocal_51[iVar0], 128, true);
		unk_0xF4CB0B98F8F79D8D(iLocal_51[iVar0], 0);
		unk_0xE2F0767314863BD8(iLocal_51[iVar0], 1, 0);
		unk_0x579B0182884711E5(iLocal_51[iVar0], 1);
		unk_0xD69ADA1AA251FFD6(iLocal_51[iVar0], 1);
		unk_0x262EF6C6306BEA6C(iLocal_51[iVar0], 453432689, -1, false, true);
		unk_0x6DF7BF67E86AAE86(iLocal_51[iVar0], iLocal_66);
		unk_0xFADC0A217229F6B5(iLocal_51[iVar0], true);
		unk_0x25BD67336EA4AECE(iLocal_51[iVar0], 250);
		iVar0++;
	}
	unk_0xE8832A9E16A57A1F(iLocal_51[1], true, 1);
	unk_0x0E2400AB9174FA81(1, -1533126372, iLocal_66);
	unk_0x0E2400AB9174FA81(1, iLocal_66, -1533126372);
	unk_0x0E2400AB9174FA81(2, iLocal_66, 1862763509);
	unk_0x0E2400AB9174FA81(2, 1862763509, iLocal_66);
	if (iLocal_46 == 1)
	{
		unk_0x9A28E8CB86CD4694(iLocal_51[0], 0, 1, 0, false);
		unk_0x00A6D36F507FD6EA(iLocal_51[0], 0);
		unk_0x9A28E8CB86CD4694(iLocal_51[1], 0, 1, 0, false);
		unk_0x00A6D36F507FD6EA(iLocal_51[1], 0);
	}
	if (func_16() == 0 && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		func_74(&Local_140, 0, unk_0x16F2683693E537C9(), "MICHAEL", 0, 1);
	}
	if (func_16() == 1 && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		func_74(&Local_140, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
	}
	if (func_16() == 2 && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		func_74(&Local_140, 2, unk_0x16F2683693E537C9(), "TREVOR", 0, 1);
	}
	func_74(&Local_140, 3, iLocal_51[0], "SECVANGUY1", 0, 1);
	func_74(&Local_140, 4, iLocal_51[1], "SECVANGUY2", 0, 1);
	unk_0xAB8E2DDC7AF955E0(iLocal_104, true);
	unk_0xC05DBA7D4F88D5E5(iLocal_103, true);
	if (iLocal_46 != 3)
	{
	}
}

float func_160(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, false) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vParam1, bParam4);
}

bool func_161()
{
	func_169(&uLocal_317, iLocal_103);
	func_169(&uLocal_317, iLocal_104);
	func_169(&uLocal_317, iLocal_105);
	func_167(&uLocal_317, "random@security_van");
	func_167(&uLocal_317, "weapons@holster_1h");
	func_167(&uLocal_317, "move_injured_generic");
	func_166(&uLocal_317, 3);
	return func_162(&uLocal_317);
}

int func_162(var uParam0)
{
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], 30))
		{
			if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], 29))
			{
				return 0;
			}
			if (!func_163(uParam0[iVar0]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_163(var uParam0)
{
	return func_164(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_164(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0, 30))
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0, 29))
		{
			switch (func_165(iParam0))
			{
				case 0:
					return unk_0xB87F6CF6E5628C67(iParam2);
					break;
				
				case 1:
					return unk_0xB4AE0788C1587752(sParam1);
					break;
				
				case 2:
					return unk_0x59F02DA2266A744C(sParam1);
					break;
				
				case 3:
					return unk_0x27117E2CDD4D67C3(sParam1);
					break;
				
				case 4:
					return unk_0x3DDA6C6A285628E4(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0x1C2E18E9C63BEB77(sParam1);
					break;
				
				case 6:
					return unk_0xAE317D00A5A55DF6(sParam1, unk_0xEAE0D21A50E6C7F4(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x64EF15C5E09BAD76(iParam2);
					break;
				
				case 8:
					return unk_0x67C1D9E5B91B2E37(iParam2);
					break;
				
				case 9:
					return unk_0x25F7A4D42AF2AB93();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_165(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_166(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

void func_167(var uParam0, char* sParam1)
{
	func_168(uParam0, 1, -1, sParam1, 0);
}

void func_168(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], 30))
		{
			if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], iParam1))
			{
				if (iParam2 != -1)
				{
					if (uParam0[iVar0]->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!unk_0x7F8A39872A07D2CE(sParam3, "NULL"))
					{
						if (unk_0x7F8A39872A07D2CE(&(uParam0[iVar0]->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], 30))
		{
			StringCopy(&(uParam0[iVar0]->f_2), sParam3, 64);
			uParam0[iVar0]->f_1 = iParam2;
			(*uParam0)[iVar0] = iParam4;
			unk_0x5D96D8530B3D0904(uParam0[iVar0], iParam1);
			unk_0x5D96D8530B3D0904(uParam0[iVar0], 30);
			return;
		}
		iVar0++;
	}
}

void func_169(var uParam0, int iParam1)
{
	func_168(uParam0, 0, iParam1, "NULL", 0);
}

int func_170()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_43) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_181())
		{
			return 0;
		}
	}
	if (func_177())
	{
		return 1;
	}
	if (func_171(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_171(float fParam0, bool bParam1)
{
	iVar33 = -1;
	fVar34 = fParam0;
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (func_18(func_16()))
		{
			iVar36 = func_61();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32], 2) && !unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32], 3))
				{
					func_172(iVar32, &Var0);
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

void func_172(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_173(uParam1, "Abigail1", func_175(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 1:
			func_173(uParam1, "Abigail2", func_175(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 2:
			func_173(uParam1, "Barry1", func_175(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 3:
			func_173(uParam1, "Barry2", func_175(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 4:
			func_173(uParam1, "Barry3", func_175(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 5:
			func_173(uParam1, "Barry3A", func_175(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 6:
			func_173(uParam1, "Barry3C", func_175(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 7:
			func_173(uParam1, "Barry4", func_175(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_174(iParam0), 0, 0);
			break;
		
		case 8:
			func_173(uParam1, "Dreyfuss1", func_175(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 9:
			func_173(uParam1, "Epsilon1", func_175(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 10:
			func_173(uParam1, "Epsilon2", func_175(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 11:
			func_173(uParam1, "Epsilon3", func_175(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 12:
			func_173(uParam1, "Epsilon4", func_175(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 13:
			func_173(uParam1, "Epsilon5", func_175(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 14:
			func_173(uParam1, "Epsilon6", func_175(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 15:
			func_173(uParam1, "Epsilon7", func_175(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 16:
			func_173(uParam1, "Epsilon8", func_175(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 17:
			func_173(uParam1, "Extreme1", func_175(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 18:
			func_173(uParam1, "Extreme2", func_175(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 19:
			func_173(uParam1, "Extreme3", func_175(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 20:
			func_173(uParam1, "Extreme4", func_175(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 21:
			func_173(uParam1, "Fanatic1", func_175(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_174(iParam0), 1, 0);
			break;
		
		case 22:
			func_173(uParam1, "Fanatic2", func_175(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_174(iParam0), 1, 0);
			break;
		
		case 23:
			func_173(uParam1, "Fanatic3", func_175(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_174(iParam0), 0, 1);
			break;
		
		case 24:
			func_173(uParam1, "Hao1", func_175(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_174(iParam0), 0, 1);
			break;
		
		case 25:
			func_173(uParam1, "Hunting1", func_175(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 26:
			func_173(uParam1, "Hunting2", func_175(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 27:
			func_173(uParam1, "Josh1", func_175(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 28:
			func_173(uParam1, "Josh2", func_175(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 29:
			func_173(uParam1, "Josh3", func_175(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 30:
			func_173(uParam1, "Josh4", func_175(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 31:
			func_173(uParam1, "Maude1", func_175(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 32:
			func_173(uParam1, "Minute1", func_175(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 33:
			func_173(uParam1, "Minute2", func_175(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 34:
			func_173(uParam1, "Minute3", func_175(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 35:
			func_173(uParam1, "MrsPhilips1", func_175(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 36:
			func_173(uParam1, "MrsPhilips2", func_175(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 37:
			func_173(uParam1, "Nigel1", func_175(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 38:
			func_173(uParam1, "Nigel1A", func_175(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 39:
			func_173(uParam1, "Nigel1B", func_175(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
		
		case 40:
			func_173(uParam1, "Nigel1C", func_175(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
		
		case 41:
			func_173(uParam1, "Nigel1D", func_175(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
		
		case 42:
			func_173(uParam1, "Nigel2", func_175(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 43:
			func_173(uParam1, "Nigel3", func_175(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 44:
			func_173(uParam1, "Omega1", func_175(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 45:
			func_173(uParam1, "Omega2", func_175(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 46:
			func_173(uParam1, "Paparazzo1", func_175(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 47:
			func_173(uParam1, "Paparazzo2", func_175(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 48:
			func_173(uParam1, "Paparazzo3", func_175(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 49:
			func_173(uParam1, "Paparazzo3A", func_175(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 50:
			func_173(uParam1, "Paparazzo3B", func_175(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 51:
			func_173(uParam1, "Paparazzo4", func_175(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 52:
			func_173(uParam1, "Rampage1", func_175(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 54:
			func_173(uParam1, "Rampage3", func_175(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 55:
			func_173(uParam1, "Rampage4", func_175(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 56:
			func_173(uParam1, "Rampage5", func_175(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 53:
			func_173(uParam1, "Rampage2", func_175(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 57:
			func_173(uParam1, "TheLastOne", func_175(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 58:
			func_173(uParam1, "Tonya1", func_175(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 59:
			func_173(uParam1, "Tonya2", func_175(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 60:
			func_173(uParam1, "Tonya3", func_175(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 61:
			func_173(uParam1, "Tonya4", func_175(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 62:
			func_173(uParam1, "Tonya5", func_175(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_173(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_174(int iParam0)
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

struct<2> func_175(int iParam0)
{
	StringCopy(&Var0, "", 8);
	cVar2 = { func_176(iParam0) };
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

struct<2> func_176(int iParam0)
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

int func_177()
{
	if (func_180() && !func_181())
	{
		return 1;
	}
	if (func_179() && func_178())
	{
		return 1;
	}
	return 0;
}

bool func_178()
{
	return Global_111356 > 0;
}

int func_179()
{
	if (Global_95666 != -1)
	{
		return 1;
	}
	return 0;
}

int func_180()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666].f_15, 20);
	}
	return 0;
}

int func_181()
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

int func_182()
{
	if (!func_145(5))
	{
		return 1;
	}
	if (func_177())
	{
		return 1;
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (vmag2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_181())
		{
			return 0;
		}
	}
	if (func_171(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_183()
{
	if ((Global_111627 == func_65() && unk_0xD4A2BF1975E2C50F()) && Global_111628)
	{
		return 1;
	}
	return 0;
}

void func_184(var uParam0)
{
	if (uParam0->f_145)
	{
		if ((unk_0xF4CCC8CB6DE7F1AE() >= (uParam0->f_146 + uParam0->f_147) || unk_0xEAE0D21A50E6C7F4(Global_98744.f_20, 2)) || unk_0xEAE0D21A50E6C7F4(Global_98744.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], 30))
				{
					if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], 29))
					{
						func_185(uParam0[iVar0]);
						uParam0->f_146 = unk_0xF4CCC8CB6DE7F1AE();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_185(int iParam0)
{
	func_186(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_186(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(*iParam0, 30))
	{
		switch (func_165(*iParam0))
		{
			case 0:
				unk_0x523BCC9DC80CD82F(iParam2);
				break;
			
			case 1:
				unk_0x3F423BF5B8125A50(sParam1);
				break;
			
			case 2:
				unk_0x4E09E67A27F104A7(sParam1);
				break;
			
			case 3:
				unk_0x0D3BE1DE0262A012(sParam1, unk_0xEAE0D21A50E6C7F4(*iParam0, 28));
				break;
			
			case 4:
				unk_0x36187931D29E5BBE(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x29398344B9E5B8A7(sParam1);
				break;
			
			case 6:
				unk_0xAE317D00A5A55DF6(sParam1, unk_0xEAE0D21A50E6C7F4(*iParam0, 27), -1);
				break;
			
			case 7:
				unk_0x8CFFBE74CB5C864A(iParam2);
				break;
			
			case 8:
				unk_0xD7992BEF7A9D109E(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x9E5E60D8C63FD9D1();
				break;
			
			default:
				break;
		}
		unk_0x5D96D8530B3D0904(iParam0, 29);
	}
}

void func_187()
{
	iLocal_105 = -1249748547;
	iLocal_104 = 1747439474;
	iLocal_103 = -1782092083;
	iLocal_128 = unk_0x09AC81E49EA267F7(3000, 8000);
	switch (iLocal_47)
	{
		case 1:
			vLocal_96 = { -315,889f, -1550,554f, 7,233013f };
			vLocal_99 = { -315,2352f, -1366,581f, 45,29617f };
			fLocal_102 = 180f;
			vLocal_77 = { -331,8429f, -1461,042f, 30,153f };
			fLocal_80 = -64,3539f;
			vLocal_67[0] = { -335,564f, -1462,237f, 29,5452f };
			fLocal_74[0] = 158,3857f;
			vLocal_67[1] = { -342,7024f, -1475,043f, 29,6004f };
			fLocal_74[1] = 290,3041f;
			iLocal_46 = 1;
			break;
		
		case 2:
			vLocal_96 = { -538,2149f, -868,7426f, 17,96054f };
			vLocal_99 = { -663,8162f, -867,9987f, 53,66249f };
			fLocal_102 = 121,5f;
			vLocal_77 = { -588,5128f, -866,9584f, 25,32786f };
			fLocal_80 = -89,02679f;
			vLocal_67[0] = { -589,4673f, -865,4055f, 24,7622f };
			fLocal_74[0] = 12,5464f;
			vLocal_67[1] = { -578,4414f, -874,5964f, 24,9183f };
			fLocal_74[1] = 352,4951f;
			iLocal_46 = 1;
			break;
		
		case 3:
			vLocal_96 = { -468,6309f, 6101,907f, 14,8912f };
			vLocal_99 = { -359,9734f, 5994,152f, 50,36843f };
			fLocal_102 = 152,25f;
			vLocal_77 = { -395,6852f, 6056,967f, 30,5001f };
			fLocal_80 = 188,9862f;
			vLocal_67[0] = { -398,4612f, 6051,296f, 30,5003f };
			fLocal_74[0] = 251,7138f;
			vLocal_67[1] = { -378,408f, 6035,689f, 30,498f };
			fLocal_74[1] = 154,0836f;
			iLocal_46 = 2;
			break;
		
		case 4:
			vLocal_96 = { -631,3408f, -1105,581f, 7,220509f };
			vLocal_99 = { -462,1721f, -1103,597f, 62,53583f };
			fLocal_102 = 177,25f;
			vLocal_77 = { -595,7766f, -1094,089f, 21,1785f };
			fLocal_80 = 263,4662f;
			vLocal_67[0] = { -600,8182f, -1103,778f, 21,3292f };
			fLocal_74[0] = 338,8304f;
			vLocal_67[1] = { -595,3461f, -1096,054f, 21,1785f };
			fLocal_74[1] = 151,297f;
			iLocal_46 = 1;
			break;
		
		case 5:
			vLocal_77 = { -1042,768f, -1049,296f, 1,0825f };
			fLocal_80 = 26,9919f;
			iLocal_46 = 3;
			break;
		
		case 6:
			vLocal_77 = { -595,5618f, -667,7325f, 31,0544f };
			fLocal_80 = 271,1543f;
			iLocal_46 = 3;
			break;
		
		case 7:
			vLocal_77 = { 3018,384f, 3634,017f, 70,4076f };
			fLocal_80 = 335,9052f;
			iLocal_46 = 3;
			break;
		
		case 8:
			vLocal_77 = { -2815,661f, 2208,171f, 27,8382f };
			fLocal_80 = 119,1519f;
			iLocal_46 = 3;
			break;
		
		case 9:
			vLocal_77 = { 856,7742f, -2067,845f, 29,0704f };
			fLocal_80 = 83,1204f;
			iLocal_46 = 3;
			break;
		
		case 10:
			vLocal_77 = { 805,1932f, -703,1327f, 28,1632f };
			fLocal_80 = 248,8625f;
			iLocal_46 = 3;
			break;
		
		default:
			break;
	}
}

void func_188(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_65();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_190(iParam0);
	unk_0x24D1A8A556F3252A(0);
	unk_0xD084C7D80DE4139C(1);
	Global_111624 = 0;
	func_189();
}

void func_189()
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

void func_190(int iParam0)
{
	Global_111627 = iParam0;
}

int func_191(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!Global_150217)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_65();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_230())
		{
			return 0;
		}
	}
	vLocal_43 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
			if (vmag2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_181())
			{
				return 0;
			}
		}
		if (!Global_111638.f_9080)
		{
			return 0;
		}
		if (func_50(0))
		{
			return 0;
		}
		if (func_177())
		{
			return 0;
		}
		if (func_229())
		{
			return 0;
		}
		if (Global_111627 != -1)
		{
			return 0;
		}
		if (func_18(func_16()))
		{
			if (func_171(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !bParam6)
		{
			if ((vVar1.z - vLocal_43.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_228(iParam3))
		{
			return 0;
		}
		if (func_18(func_16()))
		{
			if (func_227(func_16()) == 4 || func_227(func_16()) == 5)
			{
				return 0;
			}
		}
		if (func_18(func_16()))
		{
			if (!func_226(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_225(Global_111638.f_24990.f_43[iParam3]))
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
		if (func_224())
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
		if (!func_216(4))
		{
			return 0;
		}
		if (!func_145(5))
		{
			return 0;
		}
		if (func_215(iParam3, iParam4) && !bParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_215(0, 0))
		{
			return 0;
		}
		if (Global_30914)
		{
			return 0;
		}
		if (func_228(30) && !func_215(30, 0))
		{
			if (iParam3 != 30)
			{
				if (vdist2(vVar1, -61,2745f, -1100,468f, 25,3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_18(func_16()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_111638.f_2358.f_539.f_2300[iVar4] };
				iVar8 = Global_111638.f_2358.f_539.f_2296[iVar4];
				if (func_214(iVar8))
				{
					if (func_192(iVar4))
					{
						if (!func_134(vVar5, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), vVar5) < (210f * 210f))
							{
								if (func_16() != iVar4)
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

bool func_192(int iParam0)
{
	iVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_193(iVar0);
}

int func_193(int iParam0)
{
	return func_194(iParam0, 1);
}

int func_194(int iParam0, int iParam1)
{
	if (!func_214(iParam0))
	{
		return 0;
	}
	func_195(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_195(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_196(func_207(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_196(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (func_206(iParam0, iParam1))
	{
		iVar0 = func_205(iParam1);
		iVar1 = func_203(iParam0);
		iVar2 = (func_203(iParam0) - func_203(iParam1));
		iVar3 = (func_205(iParam0) - func_205(iParam1));
		iVar4 = (func_202(iParam0) - func_202(iParam1));
		iVar5 = (func_201(iParam0) - func_201(iParam1));
		iVar6 = (func_200(iParam0) - func_200(iParam1));
		iVar7 = (func_199(iParam0) - func_199(iParam1));
	}
	else
	{
		iVar0 = func_205(iParam0);
		iVar1 = func_203(iParam1);
		iVar2 = (func_203(iParam1) - func_203(iParam0));
		iVar3 = (func_205(iParam1) - func_205(iParam0));
		iVar4 = (func_202(iParam1) - func_202(iParam0));
		iVar5 = (func_201(iParam1) - func_201(iParam0));
		iVar6 = (func_200(iParam1) - func_200(iParam0));
		iVar7 = (func_199(iParam1) - func_199(iParam0));
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
		iVar4 = (iVar4 + func_198(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_197(to_float(iVar0 + 1), 0f, 12f));
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

float func_197(float fParam0, float fParam1, float fParam2)
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

int func_198(int iParam0, int iParam1)
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

int func_199(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_200(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_201(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_202(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_203(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_204(unk_0xEAE0D21A50E6C7F4(iParam0, 31), -1, 1)) + 2011;
}

int func_204(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_205(int iParam0)
{
	return iParam0 & 15;
}

int func_206(int iParam0, int iParam1)
{
	if (!func_214(iParam1) || !func_214(iParam0))
	{
		return 1;
	}
	iVar0 = func_203(iParam0);
	iVar1 = func_203(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_205(iParam0);
	iVar1 = func_205(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_202(iParam0);
	iVar1 = func_202(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_201(iParam0);
	iVar1 = func_201(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_200(iParam0);
	iVar1 = func_200(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_199(iParam0);
	iVar1 = func_199(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_207()
{
	func_213(&uVar0, unk_0x4460E481B9E33ADA());
	func_212(&uVar0, unk_0x8D199E381D262EEF());
	func_211(&uVar0, unk_0xD8A54335F18763BA());
	func_210(&uVar0, unk_0x972A296334C9D57B());
	func_209(&uVar0, unk_0x118229AD063C3C1D());
	func_208(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_208(var uParam0, int iParam1)
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

void func_209(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_210(var uParam0, int iParam1)
{
	iVar0 = func_205(*uParam0);
	iVar1 = func_203(*uParam0);
	if (iParam1 < 1 || iParam1 > func_198(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_211(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_212(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_213(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_214(int iParam0)
{
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_199(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_200(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_201(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_203(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_205(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_202(iParam0);
	if (iVar5 < 1 || iVar5 > func_198(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_215(int iParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_216(int iParam0)
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_16();
				if (!func_18(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_1()) || Global_110685) || Global_30770) || func_223()) || func_24(8, -1)) || func_222()) || func_221()) || func_220()) || func_219()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1) || func_1()) || Global_30770) || func_223()) || func_24(8, -1)) || func_220()) || func_222()) || func_221()) || func_219()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_1()) || Global_110685) || Global_30770) || func_223()) || func_24(8, -1)) || func_220()) || func_222()) || func_221()) || func_219()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_1()) || Global_110685) || Global_30770) || func_223()) || func_24(8, -1)) || func_222()) || func_221()) || func_219()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_1() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0) || func_24(8, -1)) || func_219()) || func_218()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_24(8, -1) || func_222()) || func_221()) || func_218()) || func_217())
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
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_1()) || Global_30770) || func_223()) || func_24(8, -1)) || func_221()) || func_220()) || func_219()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || func_1()) || func_221()) || Global_110685) || Global_30770) || func_223()) || Global_42596) || func_24(8, -1)) || func_220()) || func_218()) || func_219()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_1()) || Global_110685) || Global_30770) || func_223()) || func_24(8, -1)) || func_220()) || func_218()) || func_222()) || func_221()) || func_219())
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

var func_217()
{
	return Global_98783.f_1;
}

int func_218()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666].f_15, 13);
	}
	return 0;
}

int func_219()
{
	if (unk_0x8A22C4C08282BF26(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

int func_220()
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

bool func_221()
{
	return Global_98796.f_346 > 0;
}

bool func_222()
{
	return Global_98796.f_345 > 0;
}

var func_223()
{
	return Global_1312877;
}

int func_224()
{
	func_15();
	if (Global_8161[Global_19486][0].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_225(int iParam0)
{
	return func_206(func_207(), iParam0);
}

int func_226(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	iVar1 = func_16();
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

int func_227(int iParam0)
{
	if (!func_18(iParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[iParam0];
}

bool func_228(int iParam0)
{
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_230())
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

int func_229()
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

int func_230()
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

void func_231()
{
	if (func_183())
	{
		if (unk_0x762119754C50557A(iLocal_137))
		{
			if (unk_0xE4EDC4B0E92C078B(iLocal_64))
			{
				unk_0x142CC44DB769B57E(&iLocal_64);
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_57))
		{
			unk_0xF690C84DADBB3551(&iLocal_57);
		}
		if (unk_0xC844350D5D58C99A(iLocal_56))
		{
			if (unk_0x03068588A1FCED1A(iLocal_56))
			{
				unk_0xF690C84DADBB3551(&iLocal_56);
			}
			else
			{
				unk_0xEEEE2E5FA6F78DF0(&iLocal_56);
			}
		}
		unk_0x71199B01895C6202(iLocal_104);
		unk_0x71199B01895C6202(iLocal_103);
		unk_0x71199B01895C6202(iLocal_105);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC05DBA7D4F88D5E5(iLocal_103, false);
		unk_0xAB8E2DDC7AF955E0(iLocal_104, false);
	}
	if (iLocal_131 != 0)
	{
		unk_0x850CF499433B183D(iLocal_131);
	}
	unk_0x2952D66A502EA873(iLocal_65, 0);
	func_135(&uLocal_305, 0, 0);
	func_237(-1);
	func_232(&uLocal_317, 0);
	unk_0x10FAF14A60A0DBE1();
}

void func_232(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		func_234(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_233(uParam0[iVar0]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_233(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_234(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], 30))
		{
			func_235(uParam0[iVar0]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_235(var uParam0)
{
	func_236(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_236(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0, 30))
	{
		switch (func_165(iParam0))
		{
			case 0:
				unk_0x71199B01895C6202(iParam2);
				break;
			
			case 1:
				unk_0x8D17794CE3273D70(sParam1);
				break;
			
			case 2:
				unk_0x413168EF79E35C7B(sParam1);
				break;
			
			case 3:
				unk_0xF5A41F3D3B38EFE3(sParam1);
				break;
			
			case 4:
				unk_0xDB8844D4B7C60440(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x2F3540C2227116A3(sParam1);
				break;
			
			case 6:
				unk_0x8C26F31DFF77D124();
				break;
			
			case 7:
				unk_0xB60B60856BF98DCE(iParam2);
				break;
			
			case 8:
				unk_0x11CCD0ACA866C6C5(iParam2, unk_0xEAE0D21A50E6C7F4(iParam0, 26));
				break;
			
			case 9:
				unk_0x29D7581AEF4440C2();
				break;
			
			default:
				break;
		}
	}
}

void func_237(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_65();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_183())
	{
		func_241(iParam0);
		unk_0x974531784BE14213(0, 0);
		Global_111629 = unk_0x1C0640BA9A7327B3();
		func_240(30000);
		StringCopy(&cVar0, func_239(Global_111627, 1), 64);
		if (func_64(Global_111627) > 0)
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
	func_238(&Global_30827);
	Global_111628 = 0;
	func_190(-1);
}

void func_238(var uParam0)
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

char* func_239(int iParam0, bool bParam1)
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

void func_240(int iParam0)
{
	Global_41982 = (unk_0x1C0640BA9A7327B3() + iParam0);
}

void func_241(int iParam0)
{
	func_242(iParam0, 0, func_247(iParam0));
}

void func_242(int iParam0, int iParam1, int iParam2)
{
	uVar0 = func_207();
	func_245(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_244(iParam0, &uVar0);
	Var1 = { func_243(&uVar0) };
}

struct<16> func_243(var uParam0)
{
	StringCopy(&Var0, "", 64);
	iVar16 = func_201(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_200(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_199(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_202(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_205(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_203(*uParam0), 64);
	return Var0;
}

void func_244(int iParam0, var uParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *uParam1;
}

void func_245(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_203(*uParam0);
	iVar1 = func_205(*uParam0);
	iVar2 = func_202(*uParam0);
	iVar3 = func_201(*uParam0);
	iVar4 = func_200(*uParam0);
	iVar5 = func_199(*uParam0);
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
	iVar6 = func_198(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_198(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_246(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_246(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_213(uParam0, iParam1);
	func_212(uParam0, iParam2);
	func_211(uParam0, iParam3);
	func_209(uParam0, iParam5);
	func_210(uParam0, iParam4);
	func_208(uParam0, iParam6);
}

int func_247(int iParam0)
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

int func_248(int iParam0)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0xBBA8A868118C90ED(iParam0, -1, 0))
		{
			return -1;
		}
		if (unk_0xBBA8A868118C90ED(iParam0, 0, 0))
		{
			return 0;
		}
		if (unk_0xBBA8A868118C90ED(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0xBBA8A868118C90ED(iParam0, 2, 0))
		{
			return 2;
		}
		if (unk_0xBBA8A868118C90ED(iParam0, 3, 0))
		{
			return 3;
		}
		if (unk_0xBBA8A868118C90ED(iParam0, 4, 0))
		{
			return 4;
		}
		if (unk_0xBBA8A868118C90ED(iParam0, 5, 0))
		{
			return 5;
		}
		if (unk_0xBBA8A868118C90ED(iParam0, 6, 0))
		{
			return 6;
		}
		if (unk_0xBBA8A868118C90ED(iParam0, 7, 0))
		{
			return 7;
		}
		if (unk_0xBBA8A868118C90ED(iParam0, 8, 0))
		{
			return 8;
		}
	}
	return -2;
}

