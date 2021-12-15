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
	bLocal_78 = true;
	iLocal_84 = -413447396;
	iLocal_99 = 500;
	if (unk_0x2EBF608FFE6CA406(3))
	{
		func_12();
	}
	iLocal_97 = unk_0x16F2683693E537C9();
	while (true)
	{
		if (unk_0x437347B10A200C4B(iLocal_97, 0))
		{
			iLocal_98 = 5;
		}
		switch (iLocal_98)
		{
			case 0:
				iLocal_98 = 1;
				break;
			
			case 1:
				func_11();
				iLocal_98 = 2;
				break;
			
			case 2:
				if (func_10())
				{
					iLocal_98 = 3;
				}
				break;
			
			case 3:
				func_9();
				iLocal_98 = 4;
				break;
			
			case 4:
				if (Global_95672)
				{
					iLocal_98 = 5;
				}
				func_4();
				break;
			
			case 5:
				func_1();
				func_12();
				break;
		}
		wait(iLocal_99);
	}
}

void func_1()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xC844350D5D58C99A(iLocal_49[iVar0]))
		{
			if (unk_0x03068588A1FCED1A(iLocal_49[iVar0]) || (!unk_0x437347B10A200C4B(iLocal_49[iVar0], 0) && !unk_0x4FC40AB0ECCE6E18(iLocal_49[iVar0])))
			{
				unk_0xA954465BA6FDEFE2(&(iLocal_49[iVar0]));
				unk_0xEBA53F35D0085654(&(iLocal_55[iVar0]));
			}
			else
			{
				if (iVar0 == 0 || iVar0 == 2)
				{
					func_3(1);
				}
				func_2(&(iLocal_49[iVar0]), &(iLocal_55[iVar0]));
				unk_0x046C362CF15F1935(&(iLocal_49[iVar0]));
				unk_0x6DAD7906B73F064D(&(iLocal_55[iVar0]));
			}
		}
		iVar0++;
	}
	if (unk_0xC844350D5D58C99A(iLocal_54))
	{
		if (unk_0x03068588A1FCED1A(iLocal_54))
		{
			unk_0xA954465BA6FDEFE2(&iLocal_54);
			unk_0xEBA53F35D0085654(&iLocal_60);
		}
		else
		{
			func_2(&iLocal_54, &iLocal_60);
			unk_0x046C362CF15F1935(&iLocal_54);
			unk_0x6DAD7906B73F064D(&iLocal_60);
		}
	}
	if (bLocal_82)
	{
		unk_0xDB8844D4B7C60440(101, "AirportJetTakeOff");
		unk_0xDB8844D4B7C60440(102, "AirportJetTakeOff");
		unk_0xDB8844D4B7C60440(101, "AirportNew");
		unk_0xDB8844D4B7C60440(102, "AirportNew");
		unk_0xDB8844D4B7C60440(103, "AirplaneLandingRedux");
		unk_0xDB8844D4B7C60440(104, "AirplaneLandingRedux");
		unk_0xDB8844D4B7C60440(101, "EastWestFlight");
	}
}

void func_2(int iParam0, var uParam1)
{
	if (((unk_0xC844350D5D58C99A(*iParam0) && unk_0xC844350D5D58C99A(*uParam1)) && !unk_0x437347B10A200C4B(*iParam0, 0)) && !unk_0x437347B10A200C4B(*uParam1, 0))
	{
		if (unk_0xE934758D273C899A(*iParam0))
		{
			if (unk_0x20D6474D5F4B9FC6(*iParam0))
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
				{
					unk_0x0C4243AF9A434F34(*uParam1, *iParam0, 0, 0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 8, 50f, -1f, 30f, 100, 50, 1);
				}
			}
		}
	}
}

void func_3(bool bParam0)
{
	if (bLocal_78)
	{
		if (unk_0xC844350D5D58C99A(iLocal_49[0]) && !unk_0x437347B10A200C4B(iLocal_49[0], 0))
		{
			if (unk_0xE934758D273C899A(iLocal_49[0]))
			{
				if (!unk_0x20D6474D5F4B9FC6(iLocal_49[0]))
				{
					if ((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(iLocal_55[0], 0)) && !unk_0x437347B10A200C4B(iLocal_49[0], 0))
					{
						unk_0x0C4243AF9A434F34(iLocal_55[0], iLocal_49[0], 0, 0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
				else if (bParam0)
				{
					if ((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(iLocal_55[0], 0)) && !unk_0x437347B10A200C4B(iLocal_49[0], 0))
					{
						unk_0x0C4243AF9A434F34(iLocal_55[0], iLocal_49[0], 0, 0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_49[2]) && !unk_0x437347B10A200C4B(iLocal_49[2], 0))
		{
			if (unk_0xE934758D273C899A(iLocal_49[2]))
			{
				if (!unk_0x20D6474D5F4B9FC6(iLocal_49[2]))
				{
					if ((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(iLocal_55[2], 0)) && !unk_0x437347B10A200C4B(iLocal_49[2], 0))
					{
						unk_0x0C4243AF9A434F34(iLocal_55[2], iLocal_49[2], 0, 0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
				else if (bParam0)
				{
					if ((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(iLocal_55[2], 0)) && !unk_0x437347B10A200C4B(iLocal_49[2], 0))
					{
						unk_0x0C4243AF9A434F34(iLocal_55[2], iLocal_49[2], 0, 0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
			}
		}
	}
}

void func_4()
{
	switch (iLocal_88)
	{
		case 0:
			vLocal_61[0] = { -1542,113f, -3023,802f, 23,2538f };
			vLocal_61[1] = { -3089,888f, -1960,075f, 313,559f };
			vLocal_61[2] = { -1037,638f, -3316,12f, 23,2475f };
			vLocal_61[3] = { 451,174f, -4009,46f, 135,1171f };
			vLocal_74 = { -1612,174f, -2688,442f, 12,9444f };
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if ((unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()) || unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9())) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
				{
					bLocal_78 = false;
				}
				else
				{
					bLocal_78 = true;
				}
			}
			iLocal_88 = 1;
			break;
		
		case 1:
			unk_0x523BCC9DC80CD82F(1058115860);
			unk_0x523BCC9DC80CD82F(iLocal_84);
			unk_0x36187931D29E5BBE(101, "AirportJetTakeOff");
			unk_0x36187931D29E5BBE(103, "AirplaneLandingRedux");
			unk_0x36187931D29E5BBE(101, "EastWestFlight");
			unk_0x36187931D29E5BBE(101, "AirportNew");
			unk_0x36187931D29E5BBE(104, "AirplaneLandingRedux");
			iLocal_88 = 2;
			break;
		
		case 2:
			if (!bLocal_82)
			{
				if ((((((unk_0xB87F6CF6E5628C67(1058115860) && unk_0xB87F6CF6E5628C67(iLocal_84)) && unk_0x3DDA6C6A285628E4(101, "AirportJetTakeOff")) && unk_0x3DDA6C6A285628E4(103, "AirplaneLandingRedux")) && unk_0x3DDA6C6A285628E4(101, "AirportNew")) && unk_0x3DDA6C6A285628E4(104, "AirplaneLandingRedux")) && unk_0x3DDA6C6A285628E4(101, "EastWestFlight"))
				{
					bLocal_82 = true;
				}
				else
				{
					unk_0x523BCC9DC80CD82F(1058115860);
					unk_0x523BCC9DC80CD82F(iLocal_84);
					unk_0x36187931D29E5BBE(101, "AirportJetTakeOff");
					unk_0x36187931D29E5BBE(102, "AirportJetTakeOff");
					unk_0x36187931D29E5BBE(101, "AirportNew");
					unk_0x36187931D29E5BBE(102, "AirportNew");
					unk_0x36187931D29E5BBE(101, "EastWestFlight");
				}
			}
			if (bLocal_82)
			{
				if (!unk_0x8E28E832BEAC3DCE(vLocal_61[0], 50f) && !unk_0x8E28E832BEAC3DCE(vLocal_74, 50f))
				{
					iLocal_88 = 3;
				}
				else
				{
					if (unk_0x8E28E832BEAC3DCE(vLocal_61[0], 50f))
					{
					}
					if (unk_0x8E28E832BEAC3DCE(vLocal_74, 50f))
					{
					}
				}
			}
			break;
		
		case 3:
			iLocal_49[0] = unk_0x122AAB0B1D6F55AD(1058115860, vLocal_61[0], 0, true, true, false);
			unk_0xD8F6A53F4799FAFE(iLocal_49[0], 240,3179f);
			unk_0xEEC7D92310C70DE2(iLocal_49[0], 0);
			iLocal_49[1] = unk_0x122AAB0B1D6F55AD(1058115860, vLocal_61[1], 0, true, true, false);
			unk_0xEEC7D92310C70DE2(iLocal_49[1], 0);
			iLocal_49[2] = unk_0x122AAB0B1D6F55AD(1058115860, vLocal_61[2], 0, true, true, false);
			unk_0xEEC7D92310C70DE2(iLocal_49[2], 0);
			iLocal_49[3] = unk_0x122AAB0B1D6F55AD(1058115860, vLocal_61[3], 0, true, true, false);
			unk_0xEEC7D92310C70DE2(iLocal_49[3], 0);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (unk_0xC844350D5D58C99A(iLocal_49[iVar0]))
				{
					iLocal_55[iVar0] = unk_0x852A19533F896693(iLocal_49[iVar0], 4, iLocal_84, -1, 1, true);
					unk_0x25BD67336EA4AECE(iLocal_49[iVar0], 1000);
					unk_0x56FDC9ADE35F7DB0(iLocal_49[iVar0], true, true, 0);
					unk_0x11AD11297DC58CC7(iLocal_55[iVar0], true);
				}
				iVar0++;
			}
			func_8(&(iLocal_49[1]), &(iLocal_55[1]));
			func_8(&(iLocal_49[2]), &(iLocal_55[2]));
			func_8(&(iLocal_49[3]), &(iLocal_55[3]));
			if (bLocal_78)
			{
				if (unk_0xC844350D5D58C99A(iLocal_49[0]))
				{
					if (unk_0x3DDA6C6A285628E4(101, "AirportJetTakeOff"))
					{
						unk_0x0CB57CDDC76DA8E0(iLocal_49[0], 101, "AirportJetTakeOff", 2, 5, 786603);
						iLocal_77 = 1;
					}
					else
					{
						unk_0x36187931D29E5BBE(101, "AirportJetTakeOff");
					}
				}
			}
			iLocal_88 = 4;
			break;
		
		case 4:
			if (iLocal_81)
			{
				if (unk_0xC844350D5D58C99A(iLocal_49[3]) && !unk_0x437347B10A200C4B(iLocal_49[3], 0))
				{
					if (unk_0x03068588A1FCED1A(iLocal_49[3]))
					{
						if (!iLocal_79)
						{
							func_8(&(iLocal_49[3]), &(iLocal_55[3]));
							iLocal_79 = 1;
						}
					}
				}
			}
			func_3(0);
			func_7();
			switch (iLocal_87)
			{
				case 0:
					if (!iLocal_77)
					{
						if (bLocal_78)
						{
							if (unk_0xC844350D5D58C99A(iLocal_49[0]) && !unk_0x437347B10A200C4B(iLocal_49[0], 0))
							{
								if (unk_0x03068588A1FCED1A(iLocal_49[0]) && !unk_0x8E28E832BEAC3DCE(vLocal_61[0], 50f))
								{
									if (unk_0x3DDA6C6A285628E4(101, "AirportJetTakeOff"))
									{
										unk_0x0CB57CDDC76DA8E0(iLocal_49[0], 101, "AirportJetTakeOff", 2, 5, 786603);
										iLocal_77 = 1;
									}
									else
									{
										unk_0x36187931D29E5BBE(101, "AirportJetTakeOff");
									}
								}
							}
						}
					}
					if (iLocal_77)
					{
						if (unk_0xC844350D5D58C99A(iLocal_49[0]) && !unk_0x437347B10A200C4B(iLocal_49[0], 0))
						{
							if (unk_0x20D6474D5F4B9FC6(iLocal_49[0]))
							{
								fLocal_85 = unk_0x7B694C942A404ABF(iLocal_49[0]);
							}
						}
						if (fLocal_85 > 1100f)
						{
							iLocal_87 = 1;
						}
					}
					break;
				
				case 1:
					if (unk_0xC844350D5D58C99A(iLocal_49[1]) && !unk_0x437347B10A200C4B(iLocal_49[1], 0))
					{
						if (bLocal_78)
						{
							if (unk_0x03068588A1FCED1A(iLocal_49[1]))
							{
								if (iLocal_81)
								{
									if (iLocal_79)
									{
										func_6(&(iLocal_49[1]), &(iLocal_55[1]));
										if (unk_0x3DDA6C6A285628E4(103, "AirplaneLandingRedux"))
										{
											unk_0x0CB57CDDC76DA8E0(iLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
											iLocal_80 = 0;
											iLocal_87 = 2;
										}
										else
										{
											unk_0x36187931D29E5BBE(103, "AirplaneLandingRedux");
										}
									}
								}
								else
								{
									func_6(&(iLocal_49[1]), &(iLocal_55[1]));
									if (unk_0x3DDA6C6A285628E4(103, "AirplaneLandingRedux"))
									{
										unk_0x0CB57CDDC76DA8E0(iLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
										iLocal_80 = 0;
										iLocal_87 = 2;
									}
									else
									{
										unk_0x36187931D29E5BBE(103, "AirplaneLandingRedux");
									}
								}
							}
						}
					}
					break;
				
				case 2:
					if (unk_0xC844350D5D58C99A(iLocal_49[1]) && !unk_0x437347B10A200C4B(iLocal_49[1], 0))
					{
						if (!unk_0x20D6474D5F4B9FC6(iLocal_49[1]))
						{
							iLocal_87 = 3;
						}
					}
					break;
				
				case 3:
					if (unk_0xC844350D5D58C99A(iLocal_49[2]) && !unk_0x437347B10A200C4B(iLocal_49[2], 0))
					{
						if (unk_0x3DDA6C6A285628E4(101, "AirportNew"))
						{
							if (!unk_0x8E28E832BEAC3DCE(vLocal_61[2], 50f))
							{
								if (!unk_0x20D6474D5F4B9FC6(iLocal_49[2]))
								{
									func_6(&(iLocal_49[2]), &(iLocal_55[2]));
									unk_0x4D3C3C0B0DE2663E(iLocal_49[2], 101, "AirportNew", 1);
									iLocal_87 = 4;
								}
							}
						}
					}
					break;
				
				case 4:
					if (unk_0xC844350D5D58C99A(iLocal_49[2]) && !unk_0x437347B10A200C4B(iLocal_49[2], 0))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_49[2]))
						{
							fLocal_86 = unk_0x7B694C942A404ABF(iLocal_49[2]);
						}
					}
					if (unk_0xC844350D5D58C99A(iLocal_49[1]) && !unk_0x437347B10A200C4B(iLocal_49[1], 0))
					{
						if (!unk_0x20D6474D5F4B9FC6(iLocal_49[1]))
						{
							if (unk_0x03068588A1FCED1A(iLocal_49[1]))
							{
								func_8(&(iLocal_49[1]), &(iLocal_55[1]));
								iLocal_80 = 1;
							}
						}
					}
					if (fLocal_86 > 1100f)
					{
						if (unk_0xC844350D5D58C99A(iLocal_49[3]) && !unk_0x437347B10A200C4B(iLocal_49[3], 0))
						{
							if (unk_0x3DDA6C6A285628E4(104, "AirplaneLandingRedux"))
							{
								if (!unk_0x8E28E832BEAC3DCE(vLocal_61[3], 50f))
								{
									if (!unk_0x20D6474D5F4B9FC6(iLocal_49[3]) && iLocal_80)
									{
										func_6(&(iLocal_49[3]), &(iLocal_55[3]));
										unk_0x4D3C3C0B0DE2663E(iLocal_49[3], 104, "AirplaneLandingRedux", 1);
										iLocal_87 = 5;
									}
								}
							}
						}
					}
					break;
				
				case 5:
					if (unk_0xC844350D5D58C99A(iLocal_49[3]) && !unk_0x437347B10A200C4B(iLocal_49[3], 0))
					{
						if (!unk_0x20D6474D5F4B9FC6(iLocal_49[3]))
						{
							func_5();
							iLocal_87 = 0;
						}
					}
					break;
			}
			break;
	}
}

void func_5()
{
	fLocal_85 = 0f;
	iLocal_77 = 0;
	iLocal_81 = 1;
	iLocal_79 = 0;
}

void func_6(var uParam0, var uParam1)
{
	unk_0x4A4806F9D471E491(*uParam0, true, 0);
	unk_0x4A4806F9D471E491(*uParam1, true, 0);
	unk_0x20641932E5104B25(*uParam0, true, 0);
	unk_0x1E9649458B15960F(*uParam0, false);
}

void func_7()
{
	switch (iLocal_83)
	{
		case 0:
			if (!unk_0xC844350D5D58C99A(iLocal_54))
			{
				iLocal_54 = unk_0x122AAB0B1D6F55AD(1058115860, -65,3177f, 15,4603f, 703,106f, 0, true, true, false);
				unk_0x25BD67336EA4AECE(iLocal_54, 1000);
				unk_0x56FDC9ADE35F7DB0(iLocal_54, true, true, 0);
				unk_0xEEC7D92310C70DE2(iLocal_54, 0);
				iLocal_60 = unk_0x852A19533F896693(iLocal_54, 4, iLocal_84, -1, 1, true);
				unk_0x11AD11297DC58CC7(iLocal_60, true);
				iLocal_83 = 1;
			}
			break;
		
		case 1:
			if (unk_0xC844350D5D58C99A(iLocal_54) && !unk_0x437347B10A200C4B(iLocal_54, 0))
			{
				if (unk_0x3DDA6C6A285628E4(101, "EastWestFlight"))
				{
					if (!unk_0x20D6474D5F4B9FC6(iLocal_54))
					{
						unk_0x0CB57CDDC76DA8E0(iLocal_54, 101, "EastWestFlight", 2, 5, 786603);
						iLocal_83 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
			}
			if (unk_0xC844350D5D58C99A(iLocal_54) && !unk_0x437347B10A200C4B(iLocal_54, 0))
			{
				if (!unk_0x20D6474D5F4B9FC6(iLocal_54))
				{
					if ((unk_0x03068588A1FCED1A(iLocal_54) && !unk_0x8E28E832BEAC3DCE(-1602,086f, -2674,039f, 12,9444f, 50f)) && vdist2(vVar0, unk_0x68F4C0EC296D3901(iLocal_54, true)) > 62500f)
					{
						iLocal_83 = 1;
					}
				}
			}
			break;
	}
}

void func_8(var uParam0, var uParam1)
{
	unk_0x4A4806F9D471E491(*uParam0, false, 0);
	unk_0x4A4806F9D471E491(*uParam1, false, 0);
	unk_0x20641932E5104B25(*uParam0, false, 0);
	unk_0x1E9649458B15960F(*uParam0, true);
}

void func_9()
{
}

int func_10()
{
	return 1;
}

void func_11()
{
}

void func_12()
{
	func_1();
	func_13();
	unk_0x10FAF14A60A0DBE1();
}

void func_13()
{
	if (unk_0xC844350D5D58C99A(iLocal_89))
	{
		if (unk_0x03068588A1FCED1A(iLocal_89))
		{
			unk_0xA954465BA6FDEFE2(&iLocal_89);
		}
		else if (!unk_0x437347B10A200C4B(iLocal_89, 0) && !unk_0xEB6A8945D1AC98A1(iLocal_90))
		{
			unk_0xC55F2A0377488064(iLocal_89);
			unk_0xFADC0A217229F6B5(iLocal_90, true);
			vVar0 = { unk_0x68F4C0EC296D3901(iLocal_89, true) };
			fVar9 = unk_0xD9522BA9E27E1349(iLocal_89);
			vVar3 = { 0f, 500f, 50f };
			vVar6 = { unk_0x8A5E176FF719A014(vVar0, fVar9, vVar3) };
			unk_0x9AFA0796FDCABCD5(iLocal_90, iLocal_89, 0, 0, vVar6, 4, 50f, -1f, 0f, 100, 50, -1082130432, 0);
		}
	}
	if (bLocal_95)
	{
		unk_0xDB8844D4B7C60440(102, "HelicopterTakeOff");
	}
}

