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
	fLocal_134 = ((0,05f + 0,275f) - 0,01f);
	iLocal_302 = -1;
	uVar0 = 10;
	Var11 = 7;
	Var73 = 7;
	Var73.f_9 = 7;
	Var125 = 14;
	Var151.f_3 = 8;
	Var151.f_12 = 8;
	Var151.f_21 = 4;
	Var151.f_34 = 3;
	Var151.f_34.f_44.f_3.f_1 = 4;
	Var151.f_34.f_113 = 2;
	Var151.f_34.f_113.f_1.f_1 = 4;
	Var151.f_34.f_113.f_1.f_66.f_1 = 4;
	Var151.f_34.f_246.f_6 = 12;
	Var151.f_34.f_246.f_187 = 3;
	Var641.f_5 = 8;
	Var641.f_15 = 2;
	Var641.f_24 = 8;
	Var675 = 4;
	Var675.f_1.f_2 = 15;
	Var675.f_1.f_28.f_2 = 15;
	Var675.f_1.f_28.f_28.f_2 = 15;
	Var675.f_1.f_28.f_28.f_28.f_2 = 15;
	vVar791.f_2 = 8;
	vVar791.f_2.f_1.f_3 = 4;
	vVar791.f_2.f_1.f_15.f_3 = 4;
	vVar791.f_2.f_1.f_15.f_15.f_3 = 4;
	vVar791.f_2.f_1.f_15.f_15.f_15.f_3 = 4;
	vVar791.f_2.f_1.f_15.f_15.f_15.f_15.f_3 = 4;
	vVar791.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	vVar791.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	vVar791.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	iVar948 = 1;
	sVar953 = "mini@arm_wrestling";
	sVar954 = "ref_intro";
	fVar978 = 45f;
	Global_2439138.f_3939.f_38 = 0;
	if (func_1369(&Var11) <= 0)
	{
		func_1367(&Var11, func_1368());
	}
	func_1366(&vVar20, &(vVar20.f_9), func_1369(&Var11), 1);
	bVar1002 = !func_1319(&ScriptParam_0, &Var641, &Var675, &iLocal_1552, 1);
	iLocal_305 = 0;
	iLocal_306 = 1;
	if (bVar1002)
	{
		func_1318(iVar982);
		func_1078(&iLocal_1552, &Var30, &Var151, 0, 0, &(Var73.f_8), func_1369(&Var11), 0, 1, 0);
	}
	if (!func_1077() && !func_1075(unk_0xD803B885F5E47A62(), 0))
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			iLocal_305 = 1;
			iLocal_306 = 0;
		}
	}
	func_1073(&iLocal_1552);
	func_1072(&iLocal_1552);
	if (!func_1075(unk_0xD803B885F5E47A62(), 0))
	{
		func_1063(unk_0xD803B885F5E47A62(), 0, 49156, 0);
	}
	iVar995 = func_1053();
	if (unk_0xBFF81ED3B99522C7())
	{
		Var641.f_23 = func_1052(iVar995);
	}
	func_1051();
	while (!bVar998)
	{
		wait(0);
		func_1073(&iLocal_1552);
		if (!unk_0x8FE4F98FD4BE2689())
		{
			func_1318(iVar982);
			func_1078(&iLocal_1552, &Var30, &Var151, 0, 0, &(Var73.f_8), func_1369(&Var11), 0, 1, 0);
		}
		else if (func_1050(&iLocal_1552) >= 2)
		{
			bVar998 = true;
			if (func_1049(&iVar915))
			{
				func_1048(&iVar915);
			}
			func_1047();
		}
		else if (Global_2439138.f_3939.f_38 == 1)
		{
			unk_0xA37A90C62806D848(1);
			func_1046(unk_0xD803B885F5E47A62(), 0, 0);
			func_1045(&Var151, 14, 1);
			func_1318(iVar982);
			func_1078(&iLocal_1552, &Var30, &Var151, 0, 0, &(Var73.f_8), func_1369(&Var11), 0, 1, 0);
		}
		else
		{
			if (func_1044() == 0)
			{
				if (!func_1049(&iVar915))
				{
					func_1043(&iVar915);
				}
				else if (func_1042(&iVar915) > 10f)
				{
					func_1318(iVar982);
					func_1078(&iLocal_1552, &Var30, &Var151, 0, 0, &(Var73.f_8), func_1369(&Var11), 0, 1, 0);
				}
			}
			iVar951 = unk_0xC4648AFC94BA9ACC();
			if (unk_0x9F4FE516EAACCFC5(iVar951))
			{
				vVar967 = { unk_0xD06724447386BC29(unk_0xC4648AFC94BA9ACC()) };
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
				{
					vVar964 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
				}
			}
			else
			{
				vVar967 = { vVar964 };
			}
			if (vVar967.z > (vVar964.z + 50f))
			{
				func_1318(iVar982);
				func_1078(&iLocal_1552, &Var30, &Var151, 0, 0, &(Var73.f_8), func_1369(&Var11), 0, 1, 0);
			}
			else if (!func_1041(&Var151, 1))
			{
				func_1045(&Var151, 1, 1);
			}
		}
	}
	wait(500);
	if ((func_1040(&(Var675[iLocal_1552[iLocal_306]]), 0) && !func_1077()) && !func_1075(unk_0xD803B885F5E47A62(), 0))
	{
		while (true)
		{
			if (!func_1041(&Var151, 0))
			{
				func_1043(&iVar915);
				func_1045(&Var151, 0, 1);
			}
			else if (unk_0xBFC0798A6E3417F9(2, 201) || func_1042(&iVar915) >= 8f)
			{
				unk_0xA37A90C62806D848(1);
				func_1318(iVar982);
				func_1078(&iLocal_1552, &Var30, &Var151, 0, 0, &(Var73.f_8), func_1369(&Var11), 0, 1, 0);
			}
			wait(0);
		}
	}
	if (func_1041(&Var151, 1))
	{
		unk_0xA37A90C62806D848(1);
		func_1045(&Var151, 1, 0);
	}
	if (!func_1077() && !func_1075(unk_0xD803B885F5E47A62(), 0))
	{
		func_1039(&(Var675[iLocal_1552[iLocal_305]]), unk_0xD803B885F5E47A62());
		iVar986 = func_1038(66, -1, 0);
		fVar980 = (IntToFloat(iVar986) * 0,003f);
		Var675[iLocal_1552[iLocal_305]].f_20 = (fVar980 + 1f);
		iVar987 = func_1038(1257, -1, 0);
		func_1037(18, 1, -1, 1);
	}
	if (Global_2460606)
	{
		Global_2460606 = 0;
	}
	if (!func_1077())
	{
		unk_0x17EFA7496495F972();
	}
	func_1036(1);
	iVar947 = 1;
	while (true)
	{
		func_1035();
		func_1032(&iLocal_309);
		func_1073(&iLocal_1552);
		iVar988 = unk_0x57270EE11514DC67();
		unk_0x0F6D9B8ED0147392();
		unk_0xF60E6F759DB05AEB(Var641.f_23, 0, 0);
		func_1031(1);
		if (!unk_0x8FE4F98FD4BE2689())
		{
			func_1318(iVar982);
			func_1078(&iLocal_1552, &Var30, &Var151, 0, 0, &(Var73.f_8), func_1369(&Var11), 0, 1, 0);
		}
		unk_0x3FC8DBCC154CA56B();
		if (func_1077() || func_1075(unk_0xD803B885F5E47A62(), 0))
		{
			if (func_1022())
			{
				if (func_1021(159))
				{
					Global_2460606 = 1;
				}
				func_1318(iVar982);
				func_1078(&iLocal_1552, &Var30, &Var151, 0, 0, &(Var73.f_8), func_1369(&Var11), 1, 1, 0);
			}
			if (iVar947 < 10 && func_1050(&iLocal_1552) < 2)
			{
				unk_0xA37A90C62806D848(1);
				unk_0xE96F19797E59AB06();
				func_1020();
				if (func_1019(&Var641) == 2 || iVar947 == 9)
				{
					iVar788 = 2;
				}
				else
				{
					iVar788 = 1;
				}
				iVar947 = 10;
			}
			if ((iVar947 < 10 && iLocal_1552[0] != -1) && iLocal_1552[1] != -1)
			{
				if (func_1018(&(Var675[iLocal_1552[0]])) >= 10 || func_1018(&(Var675[iLocal_1552[1]])) >= 10)
				{
					unk_0xA37A90C62806D848(1);
					unk_0xE96F19797E59AB06();
					func_1020();
					if (func_1019(&Var641) == 2 || iVar947 == 9)
					{
						iVar788 = 2;
					}
					else
					{
						iVar788 = 1;
					}
					iVar947 = 10;
				}
			}
			if ((unk_0x1C0640BA9A7327B3() % 5000) < 50)
			{
			}
			if (iVar947 > 3)
			{
				if (!unk_0xEB6A8945D1AC98A1(Var30[0].f_18) && !unk_0xEB6A8945D1AC98A1(Var30[1].f_18))
				{
					if (unk_0x40B8C182D63932FC(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_1552[1]))) && unk_0x40B8C182D63932FC(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_1552[0]))))
					{
						unk_0x2E030B378D15607C(Var30[1].f_18, unk_0x8A5E176FF719A014(vVar970, fVar976, (0,245f / 2f), (1,195f / 2f), 0,533f), func_1017((fVar976 + 180f), 0f, 360f));
						unk_0x2E030B378D15607C(Var30[0].f_18, unk_0x8A5E176FF719A014(vVar970, fVar976, -(0,245f / 2f), -(1,195f / 2f), 0,533f), fVar976);
					}
				}
			}
			switch (iVar947)
			{
				case 1:
					if (func_1016(&Var641) > 1)
					{
						func_1367(&Var11, func_1015(&Var641));
						func_1366(&vVar20, &(vVar20.f_9), func_1369(&Var11), 1);
						func_1012();
						func_1011();
						func_1009(1);
						func_998(&Var11, &vVar20, &uVar0, &Var151, func_1369(&Var11), 0);
						if (func_1044() == 0)
						{
							func_1366(&vVar970, &fVar976, func_1369(&Var11), 1);
						}
						unk_0x536F1BE96C726C4B(vVar20, 4f, 1, 0, 0, false);
						if (unk_0x67C1D9E5B91B2E37(3))
						{
							iVar947 = 2;
						}
					}
					break;
				
				case 2:
					if (func_1049(&iVar930))
					{
						func_1048(&iVar930);
					}
					iVar947 = 3;
					break;
				
				case 3:
					if (func_994(&uVar0, &Var151, 0))
					{
						if (!func_1049(&iVar918))
						{
							func_1043(&iVar918);
						}
						if ((func_1042(&iVar918) > 1,5f && iLocal_1552[0] > -1) && iLocal_1552[1] > -1)
						{
							Var30[0].f_18 = unk_0x9539D44F3E4492F6(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_1552[0])));
							Var30[1].f_18 = unk_0x9539D44F3E4492F6(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_1552[1])));
							if (unk_0xC844350D5D58C99A(Var30[0].f_18) && !unk_0xEB6A8945D1AC98A1(Var30[0].f_18))
							{
							}
							if (unk_0xC844350D5D58C99A(Var30[1].f_18) && !unk_0xEB6A8945D1AC98A1(Var30[1].f_18))
							{
								vVar973 = { func_989(&vVar20, 1, 1) };
								func_988(&Var125, &vVar20, vVar973, func_1369(&Var11), Var30[1].f_18);
							}
							func_987(&iVar918);
							iLocal_1544[4]++;
							unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
							iVar947 = 4;
						}
					}
					break;
				
				case 4:
					if (!func_1040(&(Var675[iVar988]), 9))
					{
						func_1045(&Var151, 4, 0);
						func_1048(&iVar918);
						if (unk_0x43AB9B3158C51226(Var30[1].f_18) && unk_0x43AB9B3158C51226(Var30[0].f_18))
						{
							func_986(&(Var675[iVar988]), 9, 1);
							if (unk_0x757EF87A33649210())
							{
								unk_0xBFE31971E49FA500(false);
								unk_0x82E51BCA72537B6C(500);
							}
						}
						else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
						{
							if (!unk_0x43AB9B3158C51226(Var30[1].f_18))
							{
							}
							if (!unk_0x43AB9B3158C51226(Var30[0].f_18))
							{
							}
						}
					}
					if ((func_1040(&(Var675[iLocal_1552[1]]), 9) && func_1040(&(Var675[iLocal_1552[0]]), 9)) && !func_1040(&(Var675[iVar988]), 1))
					{
						func_1048(&iVar918);
						if (((!unk_0x437347B10A200C4B(Var30[1].f_18, 0) && !unk_0x437347B10A200C4B(Var30[0].f_18, 0)) && unk_0x43AB9B3158C51226(Var30[1].f_18)) && unk_0x43AB9B3158C51226(Var30[0].f_18))
						{
						}
						unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
						iVar947 = 6;
					}
					break;
				
				case 6:
					if (unk_0x757EF87A33649210())
					{
						unk_0xBFE31971E49FA500(false);
						unk_0x82E51BCA72537B6C(500);
					}
					if (func_1016(&Var641) == 8)
					{
						iVar947 = 9;
						if (func_1369(&Var11) != 12)
						{
							func_985(&Var125, bVar996);
						}
						else if (iLocal_305 == 0)
						{
							func_985(&Var125, 0);
						}
						else
						{
							func_985(&Var125, 1);
						}
						unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
					}
					else
					{
						if (!(func_1040(&(Var675[iLocal_1552[1]]), 8) && func_1040(&(Var675[iLocal_1552[0]]), 8)))
						{
							fVar981 = vVar20.f_9;
							bVar993 = true;
							sVar956 = "Walk";
							sVar957 = "aw_ig_intro_cam";
						}
						else
						{
							fVar981 = func_984(func_1369(&Var11), vVar20.f_9);
							bVar993 = false;
							sVar956 = "AltWalk";
							sVar957 = "aw_ig_intro_alt1_cam";
						}
						if (((!unk_0x437347B10A200C4B(Var30[1].f_18, 0) && !unk_0x437347B10A200C4B(Var30[0].f_18, 0)) && unk_0x43AB9B3158C51226(Var30[1].f_18)) && unk_0x43AB9B3158C51226(Var30[0].f_18))
						{
							if (!unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(Var30[1].f_18), sVar956))
							{
								if (unk_0xB4E9220C59EBC663(Var30[1].f_18))
								{
									if (unk_0x77CE1D0498EE13D6(Var30[1].f_18, sVar956))
									{
									}
								}
								else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
								{
								}
							}
							if (!unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(Var30[0].f_18), sVar956))
							{
								if (unk_0xB4E9220C59EBC663(Var30[0].f_18))
								{
									if (unk_0x77CE1D0498EE13D6(Var30[0].f_18, sVar956))
									{
									}
								}
								else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
								{
								}
							}
							if (unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(Var30[0].f_18), sVar956) && unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(Var30[1].f_18), sVar956))
							{
								iVar985 = unk_0xE9744DB7B8CA6965(vVar20, 0f, 0f, (fVar981 + 180f), 2);
								iVar952 = unk_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", false);
								unk_0x93E9ED66DAB9FBE3(iVar952, iVar985, sVar957, "mini@arm_wrestling");
								unk_0xE3BB8E05FCEB3FBE(iVar952, true);
								unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
								func_987(&iVar936);
								iVar947 = 7;
								func_982(15, Var641.f_21, Var641.f_20, 0, 0);
							}
							else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
							{
							}
						}
					}
					break;
				
				case 7:
					if (unk_0x9F4FE516EAACCFC5(iVar952))
					{
						if (unk_0x69DF961355195C3C(iVar985))
						{
							if (unk_0xA45992A6CE82FB43(iVar985) == 1f)
							{
								func_986(&(Var675[iVar988]), 1, 1);
								iVar947 = 8;
							}
							else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
							{
							}
						}
						else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
						{
						}
					}
					if (func_1016(&Var641) >= 8)
					{
						func_986(&(Var675[iVar988]), 1, 1);
						if (func_1019(&Var641) > 0)
						{
							iVar947 = 5;
						}
						else
						{
							iVar947 = 8;
						}
					}
					break;
				
				case 5:
					if (func_981(&Var641, 4))
					{
						if (!func_1049(&iVar936))
						{
							func_987(&iVar936);
						}
						else if (func_1042(&iVar936) > 4f)
						{
							iVar983 = unk_0x09AC81E49EA267F7(1, 4);
							if (iVar982 != iVar983)
							{
								if (iVar982 != 0)
								{
									unk_0x42740B44BA8D7B43(func_980(iVar982, 1));
									unk_0x42740B44BA8D7B43(func_980(iVar982, 0));
								}
								iVar982 = iVar983;
								unk_0xAE317D00A5A55DF6(func_980(iVar982, 1), 0, -1);
								unk_0xAE317D00A5A55DF6(func_980(iVar982, 0), 0, -1);
							}
							unk_0xA37A90C62806D848(1);
							unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
							func_987(&iVar924);
							func_987(&iVar921);
							func_1048(&iVar936);
							func_1045(&Var151, 8, 1);
							func_1045(&Var151, 5, 0);
							iVar947 = 8;
						}
					}
					else
					{
						func_979(&Var151);
					}
					break;
				
				case 8:
					switch (func_1019(&Var641))
					{
						case 0:
							if (!bVar997)
							{
								if (bVar989)
								{
									if (!func_1040(&(Var675[iVar988]), 3))
									{
										if (((!unk_0x437347B10A200C4B(Var30[1].f_18, 0) && !unk_0x437347B10A200C4B(Var30[0].f_18, 0)) && unk_0x43AB9B3158C51226(Var30[1].f_18)) && unk_0x43AB9B3158C51226(Var30[0].f_18))
										{
											if (!unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(Var30[1].f_18), "Approach"))
											{
												if (unk_0xB4E9220C59EBC663(Var30[1].f_18))
												{
													if (unk_0x77CE1D0498EE13D6(Var30[1].f_18, "Approach"))
													{
													}
												}
												else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
												{
												}
											}
											if (!unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(Var30[0].f_18), "Approach"))
											{
												if (unk_0xB4E9220C59EBC663(Var30[0].f_18))
												{
													if (unk_0x77CE1D0498EE13D6(Var30[0].f_18, "Approach"))
													{
													}
												}
												else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
												{
												}
											}
											if (unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(Var30[1].f_18), "Approach") && unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(Var30[0].f_18), "Approach"))
											{
												func_986(&(Var675[iVar988]), 3, 1);
												bVar997 = true;
											}
											else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
											{
											}
										}
										else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
										{
										}
									}
								}
								else
								{
									bVar997 = true;
									func_986(&(Var675[iVar988]), 3, 1);
								}
							}
							else if (!func_1040(&(Var675[iVar988]), 4))
							{
								func_986(&(Var675[iVar988]), 4, 1);
							}
							if (((func_1040(&(Var675[iLocal_1552[1]]), 4) && func_1040(&(Var675[iLocal_1552[1]]), 3)) && func_1040(&(Var675[iLocal_1552[0]]), 4)) && func_1040(&(Var675[iLocal_1552[0]]), 3))
							{
								bVar997 = false;
								iVar947 = 5;
							}
							else if (iVar790 == 2)
							{
								iVar947 = 10;
							}
							break;
						
						case 1:
							if (func_1049(&iVar921))
							{
								if (func_1042(&iVar921) < 4f || !bVar1001)
								{
									if (func_978(&Var125, 0) || !func_978(&Var125, 3))
									{
										func_977(&Var125, 3, 1, 0, 3, 5000);
										if (unk_0x9F4FE516EAACCFC5(iVar952))
										{
											unk_0x9A8DDC7C522F5BF5(iVar952, 0);
										}
										unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
									}
									if ((func_978(&Var125, 3) && !func_978(&Var125, 4)) && func_1042(&iVar921) > 3f)
									{
										func_977(&Var125, 4, 1, 0, 3, 5000);
									}
									if ((((((((func_1042(&iVar921) > 3,75f && unk_0xC844350D5D58C99A(Var30[1].f_18)) && !unk_0xEB6A8945D1AC98A1(Var30[1].f_18)) && unk_0xC844350D5D58C99A(Var30[0].f_18)) && !unk_0xEB6A8945D1AC98A1(Var30[0].f_18)) && unk_0x43AB9B3158C51226(Var30[1].f_18)) && unk_0x43AB9B3158C51226(Var30[0].f_18)) && !unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(Var30[1].f_18), "Running")) && !unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(Var30[0].f_18), "Running"))
									{
										if (unk_0xB4E9220C59EBC663(Var30[1].f_18))
										{
											if (unk_0x77CE1D0498EE13D6(Var30[1].f_18, "Running"))
											{
												unk_0xAF74FCE53CF6DDED(Var30[1].f_18, "Phase", 0,5f);
											}
										}
										if (unk_0xB4E9220C59EBC663(Var30[0].f_18))
										{
											if (unk_0x77CE1D0498EE13D6(Var30[0].f_18, "Running"))
											{
												unk_0xAF74FCE53CF6DDED(Var30[0].f_18, "Phase", 0,5f);
											}
										}
									}
									else if ((unk_0x1C0640BA9A7327B3() % 2000) < 50)
									{
									}
									if (!func_981(&Var641, 9))
									{
										if (func_1044() == 0)
										{
											func_974(&(Var151.f_26), 1, 0, 1, 3, 1, 0, 0);
										}
										else
										{
											func_929(&(Var151.f_26), 1, 0, 1);
										}
									}
									if (unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(Var30[1].f_18), "Running") && unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(Var30[0].f_18), "Running"))
									{
										if (unk_0xC844350D5D58C99A(Var30[1].f_18) && !unk_0xEB6A8945D1AC98A1(Var30[1].f_18))
										{
											if (unk_0x43AB9B3158C51226(Var30[1].f_18))
											{
												unk_0xAF74FCE53CF6DDED(Var30[1].f_18, "Phase", 0,5f);
											}
										}
										if (unk_0xC844350D5D58C99A(Var30[0].f_18) && !unk_0xEB6A8945D1AC98A1(Var30[0].f_18))
										{
											if (unk_0x43AB9B3158C51226(Var30[0].f_18))
											{
												unk_0xAF74FCE53CF6DDED(Var30[0].f_18, "Phase", 0,5f);
											}
										}
										bVar1001 = true;
									}
								}
								else
								{
									func_1020();
									func_1045(&Var151, 8, 0);
									func_927(&Var151);
									func_1048(&iVar921);
									func_987(&iVar924);
								}
								if (!unk_0xEB6A8945D1AC98A1(Var30[1].f_18) && !unk_0xEB6A8945D1AC98A1(Var30[0].f_18))
								{
									if (unk_0x43AB9B3158C51226(Var30[1].f_18))
									{
									}
									if (unk_0x43AB9B3158C51226(Var30[0].f_18))
									{
									}
								}
							}
							if (!func_1049(&iVar921) || func_925(&iVar921) >= 3f)
							{
								bVar996 = ((func_924(&Var641) >= 0f && iLocal_305 == 1) || (func_924(&Var641) < 0f && iLocal_305 == 0));
								func_923(&Var30, &Var641);
								func_921(&Var125, func_924(&Var641), 1);
							}
							break;
						
						case 2:
							bVar1001 = false;
							if (!iLocal_307)
							{
								unk_0xCEAA091B490F8407(-1, "ARM_WRESTLING_ARM_IMPACT_MASTER", unk_0x16F2683693E537C9(), 0, 0, 0);
								unk_0x91F5B0244AAE6222(func_920(&Var125), "SMALL_EXPLOSION_SHAKE", 0,25f);
								iLocal_307 = 1;
							}
							if (!func_1049(&iVar933))
							{
								func_987(&iVar933);
							}
							if (!Global_2439138.f_3899.f_39)
							{
								Global_2439138.f_3899.f_39 = 1;
							}
							bVar996 = ((func_981(&Var641, 2) && iLocal_305 == 1) || (func_981(&Var641, 1) && iLocal_305 == 0));
							if (func_925(&iVar933) > 0,5f)
							{
								if (func_1369(&Var11) != 12)
								{
									func_985(&Var125, bVar996);
								}
								else if (iLocal_305 == 0)
								{
									func_985(&Var125, 0);
								}
								else
								{
									func_985(&Var125, 1);
								}
							}
							func_1048(&iVar924);
							if (!func_1040(&(Var675[iVar988]), 2))
							{
								func_1045(&Var151, 7, 0);
								if (func_1044() != 0)
								{
									unk_0xEB819BD1E585E9CB(-1, func_919(iVar982, bVar996), func_918(&vVar20), 0, 0, 0, 0);
								}
								func_917(&Var151, 0,5f);
								if (!unk_0x437347B10A200C4B(Var30[1].f_18, 0) && !unk_0xEB6A8945D1AC98A1(Var30[0].f_18))
								{
									if (unk_0x43AB9B3158C51226(Var30[1].f_18) && unk_0x43AB9B3158C51226(Var30[0].f_18))
									{
										if (!unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(Var30[0].f_18), func_916(bVar996, "Win", "Loss")) && !unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(Var30[1].f_18), func_916(!bVar996, "Win", "Loss")))
										{
											if (unk_0xB4E9220C59EBC663(Var30[1].f_18))
											{
												if (unk_0x77CE1D0498EE13D6(Var30[1].f_18, func_916(!bVar996, "Win", "Loss")))
												{
												}
											}
											if (unk_0xB4E9220C59EBC663(Var30[0].f_18))
											{
												if (unk_0x77CE1D0498EE13D6(Var30[0].f_18, func_916(bVar996, "Win", "Loss")))
												{
												}
											}
										}
										if (unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(Var30[0].f_18), func_916(bVar996, "Win", "Loss")) && unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(Var30[1].f_18), func_916(!bVar996, "Win", "Loss")))
										{
											func_986(&(Var675[iVar988]), 2, 1);
										}
										else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
										{
										}
									}
									else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
									{
									}
								}
							}
							if (func_1042(&iVar933) > 0,65f && !func_1041(&Var151, 17))
							{
								unk_0x4D7F4CC43D4D0DE3(-1, "ARM_WRESTLING_WHOOSH_MASTER", 0, 1);
								func_1045(&Var151, 17, 1);
							}
							if (func_1042(&iVar933) > 1f)
							{
								func_986(&(Var675[iVar988]), 3, 0);
								func_986(&(Var675[iVar988]), 4, 0);
								func_986(&(Var675[iVar988]), 6, 0);
								fLocal_1541 = 0f;
								fLocal_1542 = 0f;
								fLocal_1543 = 0f;
								iVar947 = 9;
							}
							break;
					}
					break;
				
				case 9:
					if (func_981(&Var641, 5))
					{
						unk_0xA37A90C62806D848(1);
						func_1048(&iVar927);
						func_1048(&iVar933);
						Var125.f_24 = 0;
						func_1048(&(Var125.f_15));
						func_1048(&(Var125.f_18));
						iLocal_307 = 0;
						bVar989 = true;
						func_977(&Var125, 4, 1, 0, 3, 5000);
						func_1045(&Var151, 17, 0);
						func_1045(&Var151, 12, 0);
						func_1045(&Var151, 9, 0);
						func_1045(&Var151, 6, 0);
						func_1045(&Var151, 7, 0);
						func_986(&(Var675[iVar988]), 2, 0);
						func_986(&(Var675[iVar988]), 10, 0);
						iVar947 = 8;
					}
					else
					{
						if (func_1369(&Var11) != 12)
						{
							func_985(&Var125, bVar996);
						}
						else if (iLocal_305 == 0)
						{
							func_985(&Var125, 0);
						}
						else
						{
							func_985(&Var125, 1);
						}
						if (unk_0x43AB9B3158C51226(Var30[1].f_18) && unk_0x43AB9B3158C51226(Var30[0].f_18))
						{
							if (((unk_0xC548B0F1DC969D9B(Var30[1].f_18, "WinFinished") || unk_0xC548B0F1DC969D9B(Var30[1].f_18, "LossFinished")) || unk_0xC548B0F1DC969D9B(Var30[0].f_18, "WinFinished")) || unk_0xC548B0F1DC969D9B(Var30[0].f_18, "LossFinished"))
							{
								if (!func_1040(&(Var675[iVar988]), 10))
								{
									func_986(&(Var675[iVar988]), 10, 1);
								}
							}
							else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
							{
							}
						}
					}
					break;
				
				case 10:
					func_905(&(Var30[iLocal_305]));
					if (func_904(&uVar945))
					{
						unk_0x857E3CE01DEA2D26();
						unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
						func_1020();
						iVar789 = 1;
						if (!Global_2451426.f_2846.f_25)
						{
							func_901(0, 0, 0);
						}
						else if (func_899(1))
						{
							func_898(&uVar945, 0, 0);
							func_897(0);
							if (Global_2439138.f_3899.f_39)
							{
								Global_2439138.f_3899.f_39 = 0;
							}
							iVar947 = 11;
						}
					}
					else
					{
						func_896(&uVar945, 0, 0);
					}
					break;
				
				case 11:
					switch (iVar789)
					{
						case 1:
							func_897(0);
							func_1078(&iLocal_1552, &Var30, &Var151, 0, 0, &(Var73.f_8), func_1369(&Var11), 1, 1, func_895(&Var641, iLocal_305) > func_895(&Var641, iLocal_306));
							break;
					}
					break;
			}
		}
		else
		{
			if (iLocal_1552[iLocal_305] == -1)
			{
				iLocal_1552[iLocal_305] = iVar988;
			}
			if ((func_1022() || unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0))
			{
				if (((func_1019(&Var641) < 2 && func_1018(&(Var675[iLocal_1552[iLocal_305]])) < 9) && func_895(&Var641, iLocal_305) == 0) && func_895(&Var641, iLocal_306) == 0)
				{
					func_823(unk_0xD803B885F5E47A62());
				}
				if (func_1021(159))
				{
					Global_2460606 = 1;
				}
				func_1318(iVar982);
				func_1078(&iLocal_1552, &Var30, &Var151, 0, 0, &(Var73.f_8), func_1369(&Var11), 1, 1, 0);
			}
			if (func_1018(&(Var675[iVar988])) < 10 && (func_1044() == 0 && func_1050(&iLocal_1552) < 2))
			{
				unk_0xA37A90C62806D848(1);
				unk_0xE96F19797E59AB06();
				if (((func_1019(&Var641) < 2 && func_1018(&(Var675[iVar988])) < 9) && func_895(&Var641, iLocal_305) == 0) && func_895(&Var641, iLocal_306) == 0)
				{
					func_823(unk_0xD803B885F5E47A62());
				}
				func_1020();
				if (func_1019(&Var641) == 2 || func_1018(&(Var675[iVar988])) == 9)
				{
					iVar788 = 2;
				}
				else
				{
					func_986(&(Var675[iVar988]), 12, 1);
					iVar788 = 1;
				}
				func_822(&Var641, 10);
				func_821(&(Var675[iVar988]), 10);
			}
			if (func_1018(&(Var675[iVar988])) < 10 && iLocal_1552[iLocal_306] != -1)
			{
				if (func_1018(&(Var675[iLocal_1552[iLocal_306]])) >= 10)
				{
					unk_0xA37A90C62806D848(1);
					unk_0xE96F19797E59AB06();
					if (((func_1019(&Var641) < 2 && func_1018(&(Var675[iVar988])) < 9) && func_895(&Var641, iLocal_305) == 0) && func_895(&Var641, iLocal_306) == 0)
					{
						func_823(unk_0xD803B885F5E47A62());
					}
					func_1020();
					if (func_1019(&Var641) == 2 || func_1018(&(Var675[iVar988])) == 9)
					{
						iVar788 = 2;
					}
					else
					{
						func_986(&(Var675[iVar988]), 12, 1);
						iVar788 = 1;
					}
					func_822(&Var641, 10);
					func_821(&(Var675[iVar988]), 10);
				}
			}
			if ((unk_0x1C0640BA9A7327B3() % 5000) < 50)
			{
			}
			func_820(&Var641, &(Var675[iLocal_1552[iLocal_305]]));
			if (func_1018(&(Var675[iLocal_1552[iLocal_305]])) > 3)
			{
				if (!unk_0xEB6A8945D1AC98A1(Var30[iLocal_305].f_18))
				{
					if (func_1050(&iLocal_1552) >= 2)
					{
						if (unk_0x40B8C182D63932FC(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_1552[1]))) && unk_0x40B8C182D63932FC(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_1552[0]))))
						{
							unk_0x2E030B378D15607C(Var30[iLocal_305].f_18, unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), 0,245f, 1,195f, 0f), func_1017((unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()) + 180f), 0f, 360f));
						}
					}
				}
			}
			switch (func_1018(&(Var675[iLocal_1552[iLocal_305]])))
			{
				case 1:
					if (func_1016(&Var641) > 1)
					{
						func_1367(&Var11, func_1015(&Var641));
						func_1366(&vVar20, &(vVar20.f_9), func_1369(&Var11), 1);
						func_1012();
						func_1011();
						func_998(&Var11, &vVar20, &uVar0, &Var151, func_1369(&Var11), 0);
						func_1009(1);
						if (!unk_0x131F22FE6F47A65D(unk_0xD803B885F5E47A62()))
						{
							unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
						}
						if (func_1044() == 0)
						{
							func_1366(&vVar970, &fVar976, func_1369(&Var11), 1);
						}
						fVar977 = func_815(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), vVar970, func_989(&vVar20, 1, func_819()));
						func_814(fVar977, unk_0xD803B885F5E47A62(), unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_1552[iLocal_306])));
						unk_0x536F1BE96C726C4B(vVar20, 4f, 1, 0, 0, false);
						if (unk_0x67C1D9E5B91B2E37(3))
						{
							func_821(&(Var675[iLocal_1552[iLocal_305]]), 2);
						}
					}
					break;
				
				case 2:
					if (Global_2439138.f_3939.f_34 == 0f)
					{
						if (!func_1049(&iVar930))
						{
							func_987(&iVar930);
						}
					}
					else
					{
						if (func_1049(&iVar930))
						{
							func_1048(&iVar930);
						}
						bVar999 = fVar977 > Global_2439138.f_3939.f_34;
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							vVar973 = { func_989(&vVar20, bVar999, func_819()) };
							func_811(&Var125, &vVar20, vVar973, func_1369(&Var11));
							if (func_1044() != 0)
							{
								unk_0x96167B03C5A77156(unk_0x16F2683693E537C9(), vVar973, 1f, 3500, 0,1f, 0, func_810(vVar973, vVar970));
							}
							func_821(&(Var675[iLocal_1552[iLocal_305]]), 3);
						}
					}
					if (func_1049(&iVar930) && func_1042(&iVar930) > 1,5f)
					{
						fVar977 = func_815(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), vVar970, func_989(&vVar20, 1, func_819()));
						func_814(fVar977, unk_0xD803B885F5E47A62(), unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_1552[iLocal_306])));
						func_987(&iVar930);
					}
					break;
				
				case 3:
					if (func_994(&uVar0, &Var151, 0))
					{
						if (unk_0x081C8BC5094A7B76(2))
						{
							if (!func_1049(&iVar918))
							{
								func_1043(&iVar918);
							}
							func_986(&(Var675[iLocal_1552[iLocal_305]]), 0, 1);
							if (func_1042(&iVar918) > 1,5f)
							{
								func_807(&Var30, &vVar20, &Var125, 0, to_float(iLocal_306), to_float(iLocal_305));
								Var30[iLocal_305].f_18 = unk_0x9539D44F3E4492F6(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_1552[iLocal_306])));
								if (unk_0xC844350D5D58C99A(Var30[iLocal_305].f_18) && !unk_0xEB6A8945D1AC98A1(Var30[iLocal_305].f_18))
								{
									if (func_806(Var30[iLocal_305].f_18))
									{
									}
									if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
									{
										if (func_806(unk_0x16F2683693E537C9()))
										{
										}
									}
								}
								func_987(&iVar918);
								if (func_1044() != 0)
								{
								}
								if (iLocal_305 == 1)
								{
									unk_0x312838E3386842B6(unk_0x16F2683693E537C9(), "arm_wrestling_sweep_paired_a_rev3", 0f, 1, "mini@arm_wrestling", 0);
								}
								else
								{
									unk_0x312838E3386842B6(unk_0x16F2683693E537C9(), "arm_wrestling_sweep_paired_b_rev3", 0f, 1, "mini@arm_wrestling", 0);
								}
								unk_0x837C600ECEE8ABA2(func_805(func_1369(&Var11)), 1);
								func_803(-1334762305);
								func_802(2);
								iLocal_1544[4]++;
								unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
								func_821(&(Var675[iLocal_1552[iLocal_305]]), 4);
							}
						}
					}
					break;
				
				case 4:
					func_801(1);
					if (!((func_1044() != 0 && func_1040(&(Var675[iLocal_1552[iLocal_305]]), 1)) || (func_1044() == 0 && func_1040(&(Var675[iLocal_1552[iLocal_305]]), 9))))
					{
						func_1045(&Var151, 4, 0);
						func_1048(&iVar918);
						if (func_1044() != 0)
						{
							func_986(&(Var675[iLocal_1552[iLocal_305]]), 1, 1);
						}
						else if (unk_0x43AB9B3158C51226(unk_0x16F2683693E537C9()) && unk_0x43AB9B3158C51226(Var30[iLocal_305].f_18))
						{
							func_986(&(Var675[iLocal_1552[iLocal_305]]), 9, 1);
							if (Global_111601)
							{
								func_986(&(Var675[iLocal_1552[iLocal_305]]), 8, 1);
							}
						}
						else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
						{
							if (!unk_0x43AB9B3158C51226(unk_0x16F2683693E537C9()))
							{
							}
							if (!unk_0x43AB9B3158C51226(Var30[iLocal_305].f_18))
							{
							}
						}
					}
					else if (func_1044() == 0)
					{
						if (!func_1040(&(Var675[iLocal_1552[iLocal_305]]), 9))
						{
							if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0xEB6A8945D1AC98A1(Var30[iLocal_305].f_18))
							{
								if (unk_0x757EF87A33649210())
								{
									unk_0xBFE31971E49FA500(false);
									unk_0x82E51BCA72537B6C(500);
								}
							}
							iVar790 = func_800(&Var151, &vVar791, cVar955);
							if (iVar790 == 2)
							{
								iLocal_1544[3]++;
								func_821(&(Var675[iLocal_1552[iLocal_305]]), 10);
							}
						}
					}
					else if (!func_1040(&(Var675[iLocal_1552[iLocal_305]]), 1))
					{
						if (unk_0x757EF87A33649210())
						{
							unk_0x82E51BCA72537B6C(500);
						}
						iVar790 = func_800(&Var151, &vVar791, cVar955);
						if (iVar790 == 2)
						{
							iLocal_1544[3]++;
							func_821(&(Var675[iLocal_1552[iLocal_305]]), 10);
						}
					}
					if ((func_1040(&(Var675[iLocal_1552[iLocal_305]]), 9) && func_1040(&(Var675[iLocal_1552[iLocal_306]]), 9)) && !func_1040(&(Var675[iLocal_1552[iLocal_305]]), 1))
					{
						if (!(func_1040(&(Var675[iLocal_1552[iLocal_305]]), 8) && func_1040(&(Var675[iLocal_1552[iLocal_306]]), 8)))
						{
							func_1048(&iVar918);
							func_798(137, 1, -1, 1);
							if (((!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0xEB6A8945D1AC98A1(Var30[iLocal_305].f_18)) && unk_0x43AB9B3158C51226(unk_0x16F2683693E537C9())) && unk_0x43AB9B3158C51226(Var30[iLocal_305].f_18))
							{
							}
							unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
							func_821(&(Var675[iLocal_1552[iLocal_305]]), 6);
						}
						else
						{
							func_1048(&iVar918);
							func_798(137, 1, -1, 1);
							if (((!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0xEB6A8945D1AC98A1(Var30[iLocal_305].f_18)) && unk_0x43AB9B3158C51226(unk_0x16F2683693E537C9())) && unk_0x43AB9B3158C51226(Var30[iLocal_305].f_18))
							{
							}
							unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
							func_821(&(Var675[iLocal_1552[iLocal_305]]), 6);
						}
					}
					if (func_1018(&(Var675[iLocal_1552[iLocal_306]])) == 2)
					{
						if (!func_1049(&iVar930))
						{
							fVar977 = func_815(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), vVar970, func_989(&vVar20, 1, func_819()));
							func_814(fVar977, unk_0xD803B885F5E47A62(), unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_1552[iLocal_306])));
							func_987(&iVar930);
						}
						else if (func_1042(&iVar930) > 3f)
						{
							func_1048(&iVar930);
						}
					}
					else if (func_1016(&Var641) >= 8)
					{
						if (func_797("ARMMP_WAIT_RD"))
						{
							unk_0xA37A90C62806D848(1);
						}
						func_796(&(Var675[iLocal_1552[iLocal_305]]));
						func_986(&(Var675[iLocal_1552[iLocal_305]]), 1, 0);
						func_821(&(Var675[iLocal_1552[iLocal_305]]), 8);
					}
					break;
				
				case 6:
					if (unk_0x757EF87A33649210())
					{
						unk_0xBFE31971E49FA500(false);
						unk_0x82E51BCA72537B6C(500);
					}
					if (!(func_1040(&(Var675[iLocal_1552[iLocal_305]]), 8) && func_1040(&(Var675[iLocal_1552[iLocal_306]]), 8)))
					{
						fVar981 = vVar20.f_9;
						bVar993 = true;
						sVar956 = "Walk";
						sVar957 = "aw_ig_intro_cam";
					}
					else
					{
						fVar981 = func_984(func_1369(&Var11), vVar20.f_9);
						bVar993 = false;
						sVar956 = "AltWalk";
						sVar957 = "aw_ig_intro_alt1_cam";
					}
					if ((!unk_0xEB6A8945D1AC98A1(Var30[iLocal_305].f_18) && unk_0x43AB9B3158C51226(unk_0x16F2683693E537C9())) && unk_0x43AB9B3158C51226(Var30[iLocal_305].f_18))
					{
						if (!unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(Var30[iLocal_305].f_18), sVar956))
						{
							if (unk_0xB4E9220C59EBC663(Var30[iLocal_305].f_18))
							{
								if (unk_0x77CE1D0498EE13D6(Var30[iLocal_305].f_18, sVar956))
								{
								}
							}
							else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
							{
							}
						}
						if (!unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(unk_0x16F2683693E537C9()), sVar956))
						{
							if (unk_0xB4E9220C59EBC663(unk_0x16F2683693E537C9()))
							{
								if (unk_0x77CE1D0498EE13D6(unk_0x16F2683693E537C9(), sVar956))
								{
								}
							}
							else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
							{
							}
						}
						if (unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(unk_0x16F2683693E537C9()), sVar956) && unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(Var30[iLocal_305].f_18), sVar956))
						{
							iVar985 = unk_0xE9744DB7B8CA6965(vVar20, 0f, 0f, (fVar981 + 180f), 2);
							iVar952 = unk_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", false);
							unk_0x93E9ED66DAB9FBE3(iVar952, iVar985, sVar957, "mini@arm_wrestling");
							unk_0xE3BB8E05FCEB3FBE(iVar952, true);
							unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
							if (!unk_0x4FC40AB0ECCE6E18(unk_0x16F2683693E537C9()))
							{
								unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), true, 0);
							}
							func_987(&iVar936);
							func_982(15, Var641.f_21, Var641.f_20, 0, 0);
							func_821(&(Var675[iLocal_1552[iLocal_305]]), 7);
						}
						else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
						{
						}
					}
					break;
				
				case 7:
					if (unk_0x9F4FE516EAACCFC5(iVar952))
					{
						if (unk_0x69DF961355195C3C(iVar985))
						{
							if (unk_0xA45992A6CE82FB43(iVar985) == 1f)
							{
								func_796(&(Var675[iLocal_1552[iLocal_305]]));
								func_986(&(Var675[iLocal_1552[iLocal_305]]), 1, 1);
							}
							else
							{
								if (bVar993)
								{
									if (unk_0xA45992A6CE82FB43(iVar985) > 0,05f && !bVar990)
									{
										func_795("ARMMP_HOW_TO_12", -1);
										bVar990 = true;
									}
									else if (unk_0xA45992A6CE82FB43(iVar985) > 0,3f && !bVar991)
									{
										func_795("ARMMP_HOW_TO_2", -1);
										bVar991 = true;
									}
									else if (unk_0xA45992A6CE82FB43(iVar985) > 0,6f && !bVar992)
									{
										if (unk_0x91E3F625EF57450D(2))
										{
											func_795("ARMMP_HOW_TO_4", -1);
										}
										else
										{
											func_795("ARMMP_HOW_TO_3", -1);
										}
										bVar992 = true;
										Global_111601 = 1;
									}
								}
								else if (unk_0xA45992A6CE82FB43(iVar985) > 0,05f && !bVar990)
								{
									func_795("ARMMP_REGAME2", -1);
									bVar990 = true;
								}
								if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
								{
								}
							}
						}
						else
						{
							if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
							{
							}
							if (!func_1049(&iVar939))
							{
							}
							else if ((!Global_2439138.f_3939.f_40 && func_1042(&iVar939) > 13f) || (Global_2439138.f_3939.f_40 && func_1042(&iVar939) > 6f))
							{
								func_796(&(Var675[iLocal_1552[iLocal_305]]));
								func_986(&(Var675[iLocal_1552[iLocal_305]]), 1, 1);
							}
						}
					}
					if (func_1016(&Var641) >= 8)
					{
						if (iLocal_305 == 1)
						{
							unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "mini@arm_wrestling", "nuetral_idle_a_face", 4f, -4f, -1, 32, 0, 0, 0, 0);
						}
						else
						{
							unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "mini@arm_wrestling", "nuetral_idle_b_face", 4f, -4f, -1, 32, 0, 0, 0, 0);
						}
						func_801(0);
						func_796(&(Var675[iLocal_1552[iLocal_305]]));
						func_986(&(Var675[iLocal_1552[iLocal_305]]), 1, 0);
						func_821(&(Var675[iLocal_1552[iLocal_305]]), 8);
					}
					break;
				
				case 5:
					if (func_981(&Var641, 4))
					{
						if (func_925(&iVar942) > 1f)
						{
							if (!func_978(&Var125, 4))
							{
								func_977(&Var125, 4, 1, 0, 3, 5000);
								func_1048(&iVar942);
							}
						}
						if (!func_1049(&iVar936))
						{
							func_987(&iVar936);
						}
						else if (func_1042(&iVar936) > 4f)
						{
							iVar983 = unk_0x09AC81E49EA267F7(1, 4);
							if (iVar982 != iVar983)
							{
								if (iVar982 != 0)
								{
									unk_0x42740B44BA8D7B43(func_980(iVar982, 1));
									unk_0x42740B44BA8D7B43(func_980(iVar982, 0));
								}
								iVar982 = iVar983;
								unk_0xAE317D00A5A55DF6(func_980(iVar982, 1), 0, -1);
								unk_0xAE317D00A5A55DF6(func_980(iVar982, 0), 0, -1);
							}
							func_917(&Var151, 0,5f);
							func_987(&iVar924);
							unk_0xA37A90C62806D848(1);
							unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
							func_987(&iVar921);
							if (func_981(&Var641, 9))
							{
								func_794(&Var641, 9, 0);
							}
							func_796(&(Var675[iLocal_1552[iLocal_305]]));
							func_793(&(Var30[iLocal_305]), 0);
							func_1048(&iVar936);
							func_1045(&Var151, 8, 1);
							func_1045(&Var151, 5, 0);
							func_821(&(Var675[iLocal_1552[iLocal_305]]), 8);
						}
					}
					else
					{
						func_979(&Var151);
					}
					break;
				
				case 8:
					switch (func_1019(&Var641))
					{
						case 0:
							func_905(&(Var30[iLocal_305]));
							iVar790 = func_791(&Var151, &vVar791, &(Var30[iLocal_305]));
							unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62()].f_231), Var11.f_8);
							if (!bVar997)
							{
								if (bVar989)
								{
									if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
									{
										if (!func_1040(&(Var675[iLocal_1552[iLocal_305]]), 3))
										{
											if ((!unk_0xEB6A8945D1AC98A1(Var30[iLocal_305].f_18) && unk_0x43AB9B3158C51226(unk_0x16F2683693E537C9())) && unk_0x43AB9B3158C51226(Var30[iLocal_305].f_18))
											{
												if (!unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(Var30[iLocal_305].f_18), "Approach"))
												{
													if (unk_0xB4E9220C59EBC663(Var30[iLocal_305].f_18))
													{
														if (unk_0x77CE1D0498EE13D6(Var30[iLocal_305].f_18, "Approach"))
														{
														}
													}
													else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
													{
													}
												}
												if (!unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(unk_0x16F2683693E537C9()), "Approach"))
												{
													if (unk_0xB4E9220C59EBC663(unk_0x16F2683693E537C9()))
													{
														if (unk_0x77CE1D0498EE13D6(unk_0x16F2683693E537C9(), "Approach"))
														{
															if (iLocal_305 == 1)
															{
																unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "mini@arm_wrestling", "idle_to_nuetral_a_face", 4f, -4f, -1, 32, 0, 0, 0, 0);
															}
															else
															{
																unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "mini@arm_wrestling", "idle_to_nuetral_b_face", 4f, -4f, -1, 32, 0, 0, 0, 0);
															}
														}
													}
													else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
													{
													}
												}
												if (unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(unk_0x16F2683693E537C9()), "Approach") && unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(Var30[iLocal_305].f_18), "Approach"))
												{
													func_986(&(Var675[iLocal_1552[iLocal_305]]), 3, 1);
													func_987(&iVar942);
													bVar997 = true;
												}
												else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
												{
												}
											}
											else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
											{
											}
										}
									}
								}
								else
								{
									bVar997 = true;
									func_986(&(Var675[iLocal_1552[iLocal_305]]), 3, 1);
								}
							}
							else
							{
								if (!func_1040(&(Var675[iLocal_1552[iLocal_305]]), 4))
								{
									func_986(&(Var675[iLocal_1552[iLocal_305]]), 4, 1);
								}
								if ((unk_0xBFF81ED3B99522C7() && !unk_0x437347B10A200C4B(func_790(&Var73, 0), 0)) && unk_0xB4ECF989E2C1DAC8(func_790(&Var73, 0), sVar953, sVar954, 3))
								{
									unk_0x8352CA08CF578D18(func_790(&Var73, 0), sVar953, sVar954, 0,4f);
								}
							}
							if ((iVar790 == 1 && func_1040(&(Var675[iLocal_1552[iLocal_305]]), 4)) && func_1040(&(Var675[iLocal_1552[iLocal_305]]), 3))
							{
								bVar997 = false;
								func_821(&(Var675[iLocal_1552[iLocal_305]]), 5);
							}
							else if (iVar790 == 2)
							{
								iLocal_1544[3]++;
								func_821(&(Var675[iLocal_1552[iLocal_305]]), 10);
							}
							break;
						
						case 1:
							if (func_1049(&iVar921))
							{
								if (func_1042(&iVar921) < 4f)
								{
									if (iVar987 < 5 && !bVar1000)
									{
										if (unk_0x91E3F625EF57450D(2))
										{
											func_795("ARMMP_TUT_2", -1);
										}
										else
										{
											func_795("ARMMP_TUT_1", -1);
										}
										bVar1000 = true;
									}
									if (func_978(&Var125, 0) || !func_978(&Var125, 3))
									{
										func_977(&Var125, 3, 1, 0, 3, 5000);
										if (unk_0x9F4FE516EAACCFC5(iVar952))
										{
											unk_0x9A8DDC7C522F5BF5(iVar952, 0);
										}
										unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
									}
									if ((func_978(&Var125, 3) && !func_978(&Var125, 4)) && func_1042(&iVar921) > 3f)
									{
										func_977(&Var125, 4, 1, 1, 3, 5000);
									}
									if ((((((func_1042(&iVar921) > 3,75f && unk_0xC844350D5D58C99A(Var30[iLocal_305].f_18)) && !unk_0xEB6A8945D1AC98A1(Var30[iLocal_305].f_18)) && unk_0x43AB9B3158C51226(unk_0x16F2683693E537C9())) && unk_0x43AB9B3158C51226(Var30[iLocal_305].f_18)) && !unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(unk_0x16F2683693E537C9()), "Running")) && !unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(Var30[iLocal_305].f_18), "Running"))
									{
										if (unk_0xB4E9220C59EBC663(Var30[iLocal_305].f_18))
										{
											if (unk_0x77CE1D0498EE13D6(Var30[iLocal_305].f_18, "Running"))
											{
												unk_0xAF74FCE53CF6DDED(Var30[iLocal_305].f_18, "Phase", 0,5f);
											}
										}
										if (unk_0xB4E9220C59EBC663(unk_0x16F2683693E537C9()))
										{
											if (unk_0x77CE1D0498EE13D6(unk_0x16F2683693E537C9(), "Running"))
											{
												unk_0xAF74FCE53CF6DDED(unk_0x16F2683693E537C9(), "Phase", 0,5f);
											}
										}
									}
									else if ((unk_0x1C0640BA9A7327B3() % 2000) < 50)
									{
									}
									if (func_1044() == 0)
									{
										func_974(&(Var151.f_26), 1, 0, 1, 3, 1, 0, 0);
									}
									else
									{
										func_929(&(Var151.f_26), 1, 0, 1);
									}
									if (unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(unk_0x16F2683693E537C9()), "Running") && unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(Var30[iLocal_305].f_18), "Running"))
									{
										if (unk_0x43AB9B3158C51226(unk_0x16F2683693E537C9()))
										{
											unk_0xAF74FCE53CF6DDED(unk_0x16F2683693E537C9(), "Phase", 0,5f);
										}
										if (unk_0xC844350D5D58C99A(Var30[iLocal_305].f_18) && !unk_0xEB6A8945D1AC98A1(Var30[iLocal_305].f_18))
										{
											if (unk_0x43AB9B3158C51226(Var30[iLocal_305].f_18))
											{
												unk_0xAF74FCE53CF6DDED(Var30[iLocal_305].f_18, "Phase", 0,5f);
											}
										}
									}
								}
								else
								{
									func_1020();
									func_1045(&Var151, 8, 0);
									func_927(&Var151);
									func_1048(&iVar921);
									func_987(&iVar924);
								}
							}
							if (!func_1049(&iVar921) || func_925(&iVar921) >= 3f)
							{
								if (unk_0xBFF81ED3B99522C7())
								{
									if (!func_981(&Var641, 6))
									{
										func_794(&Var641, 6, 1);
									}
									if (!func_981(&Var641, 9))
									{
										func_794(&Var641, 9, 1);
									}
								}
								bVar996 = ((func_924(&Var641) >= 0f && iLocal_305 == 1) || (func_924(&Var641) < 0f && iLocal_305 == 0));
								func_779(&Var30, &Var641, &Var675, bVar996, &iLocal_1552);
								func_921(&Var125, func_924(&Var641), iLocal_305 == 1);
								if (func_776(&Var151, &vVar791, func_778(iLocal_305 == 1, func_924(&Var641), -func_924(&Var641))))
								{
									unk_0xFF38FC7B4A600702("ArmWrestlingIntensity", unk_0x755FF954DAE327E1(func_924(&Var641)));
								}
								else
								{
									func_986(&(Var675[iLocal_1552[iLocal_305]]), 12, 1);
									Global_2460606 = 1;
									func_752(6, 0f, 0f, 0f, Var958);
									iLocal_1544[3]++;
									func_821(&(Var675[iLocal_1552[iLocal_305]]), 10);
								}
								if (!func_1040(&(Var675[iLocal_1552[iLocal_305]]), 5))
								{
									if (iLocal_305 == 1)
									{
										unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "mini@arm_wrestling", "expression_idle_a_face", 4f, -4f, -1, 33, 0, 0, 0, 0);
									}
									else
									{
										unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "mini@arm_wrestling", "expression_idle_b_face", 4f, -4f, -1, 33, 0, 0, 0, 0);
									}
									func_986(&(Var675[iLocal_1552[iLocal_305]]), 5, 1);
								}
							}
							break;
						
						case 2:
							if (!iLocal_307)
							{
								unk_0xCEAA091B490F8407(-1, "ARM_WRESTLING_ARM_IMPACT_MASTER", unk_0x16F2683693E537C9(), 0, 0, 0);
								unk_0x91F5B0244AAE6222(func_920(&Var125), "SMALL_EXPLOSION_SHAKE", 0,25f);
								iLocal_307 = 1;
							}
							if (!func_1049(&iVar933))
							{
								func_987(&iVar933);
							}
							if (!Global_2439138.f_3899.f_39)
							{
								Global_2439138.f_3899.f_39 = 1;
							}
							bVar996 = ((func_981(&Var641, 2) && iLocal_305 == 1) || (func_981(&Var641, 1) && iLocal_305 == 0));
							if (func_925(&iVar933) > 0,5f)
							{
								if (!bVar994)
								{
									if (bVar996)
									{
										func_751();
										func_749(&(Var151.f_476), "ARMMP_SC_WIN", "", 3000, 0, 1);
									}
									else
									{
										func_748();
										func_749(&(Var151.f_476), "ARMMP_SC_LOSE", "", 3000, 0, 6);
										unk_0x4D7F4CC43D4D0DE3(-1, "LOSER", "HUD_AWARDS", 1);
									}
									bVar994 = true;
								}
								if (func_1369(&Var11) != 12)
								{
									func_985(&Var125, bVar996);
								}
								else if (iLocal_305 == 0)
								{
									func_985(&Var125, 0);
								}
								else
								{
									func_985(&Var125, 1);
								}
							}
							if (bVar996 && func_1049(&iVar924))
							{
								if (func_1038(1092, -1, 0) > floor((1000f * func_1042(&iVar924))) || func_1038(1092, -1, 0) == 0)
								{
									func_747(1092, floor((1000f * func_1042(&iVar924))), -1, 1, 0);
								}
								if (iLocal_1544[5] == 0 || iLocal_1544[5] > floor((1000f * func_1042(&iVar924))))
								{
									iLocal_1544[5] = floor((1000f * func_1042(&iVar924)));
								}
								iLocal_1544[6] = (iLocal_1544[6] + floor((1000f * func_1042(&iVar924))));
								func_823(unk_0xD803B885F5E47A62());
								func_803(854882774);
								iLocal_1544[2]++;
								iLocal_308 = func_746(854882774);
								if (iLocal_308 > 0 && (iLocal_308 % 5) == 0)
								{
									func_745(3, 2, 2);
								}
								iVar984++;
								iLocal_1544[1] = iVar984;
								iVar1003 = func_1038(1091, -1, 0);
								iVar1003++;
								func_747(1091, iVar1003, -1, 1, 0);
								func_1048(&iVar924);
							}
							else if (func_1049(&iVar924))
							{
								func_823(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_1552[iLocal_306])));
								iVar984 = 0;
								iLocal_1544[3]++;
								iLocal_1544[6] = (iLocal_1544[6] + floor((1000f * func_1042(&iVar924))));
								func_1048(&iVar924);
							}
							if (!func_1040(&(Var675[iLocal_1552[iLocal_305]]), 2))
							{
								func_1045(&Var151, 7, 0);
								if (func_1044() != 0)
								{
									unk_0xEB819BD1E585E9CB(-1, func_919(iVar982, bVar996), func_918(&vVar20), 0, 0, 0, 0);
								}
								func_917(&Var151, 0,5f);
								if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0xEB6A8945D1AC98A1(Var30[iLocal_305].f_18))
								{
									if (unk_0x43AB9B3158C51226(unk_0x16F2683693E537C9()) && unk_0x43AB9B3158C51226(Var30[iLocal_305].f_18))
									{
										if (!unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(unk_0x16F2683693E537C9()), func_916(bVar996, "Win", "Loss")) && !unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(Var30[iLocal_305].f_18), func_916(!bVar996, "Win", "Loss")))
										{
											if (unk_0xB4E9220C59EBC663(Var30[iLocal_305].f_18))
											{
												if (unk_0x77CE1D0498EE13D6(Var30[iLocal_305].f_18, func_916(!bVar996, "Win", "Loss")))
												{
												}
											}
											if (unk_0xB4E9220C59EBC663(unk_0x16F2683693E537C9()))
											{
												if (unk_0x77CE1D0498EE13D6(unk_0x16F2683693E537C9(), func_916(bVar996, "Win", "Loss")))
												{
													if (iLocal_305 == 1)
													{
														unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "mini@arm_wrestling", func_916(bVar996, "win_a_ped_a_face", "win_b_ped_a_face"), 4f, -4f, -1, 32, 0, 0, 0, 0);
													}
													else
													{
														unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "mini@arm_wrestling", func_916(bVar996, "win_b_ped_b_face", "win_a_ped_b_face"), 4f, -4f, -1, 32, 0, 0, 0, 0);
													}
												}
											}
										}
										if (unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(unk_0x16F2683693E537C9()), func_916(bVar996, "Win", "Loss")) && unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(Var30[iLocal_305].f_18), func_916(!bVar996, "Win", "Loss")))
										{
											func_986(&(Var675[iLocal_1552[iLocal_305]]), 2, 1);
										}
										else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
										{
										}
									}
									else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
									{
									}
								}
							}
							if (unk_0x43AB9B3158C51226(unk_0x16F2683693E537C9()))
							{
								if (unk_0xC548B0F1DC969D9B(unk_0x16F2683693E537C9(), "WinFinished") || unk_0xC548B0F1DC969D9B(unk_0x16F2683693E537C9(), "LossFinished"))
								{
									if (!func_1040(&(Var675[iLocal_1552[iLocal_305]]), 10))
									{
										if (iLocal_305 == 1)
										{
											unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "mini@arm_wrestling", "stand_idle_a_face", 4f, -4f, -1, 33, 0, 0, 0, 0);
										}
										else
										{
											unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "mini@arm_wrestling", "stand_idle_b_face", 4f, -4f, -1, 33, 0, 0, 0, 0);
										}
										func_986(&(Var675[iLocal_1552[iLocal_305]]), 10, 1);
									}
								}
								else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
								{
								}
							}
							if (func_1042(&iVar933) > 4f)
							{
								func_905(&(Var30[iLocal_305]));
								iVar790 = func_732(&Var151, &vVar791, &(Var30[iLocal_305]), func_895(&Var641, iLocal_305), func_895(&Var641, iLocal_306), bVar996, func_743(&(Var675[iLocal_1552[iLocal_305]])), func_743(&(Var675[iLocal_1552[iLocal_306]])));
								if ((fVar978 - func_1042(&iVar933)) < 10f)
								{
									fVar979 = (fVar978 - func_1042(&iVar933));
									if (fVar979 < 0f)
									{
										fVar979 = 0f;
									}
									func_729(round((fVar979 * 1000f)), "TIM_TIMER", 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
								}
								if (!func_1041(&Var151, 17))
								{
									unk_0x4D7F4CC43D4D0DE3(-1, func_916(bVar996, "WIN", "LOSER"), "HUD_AWARDS", 1);
									func_1045(&Var151, 17, 1);
								}
								func_728(1);
								if (unk_0x43AB9B3158C51226(unk_0x16F2683693E537C9()))
								{
									if ((unk_0x1C0640BA9A7327B3() % 2500) < 50)
									{
									}
									if (unk_0xC548B0F1DC969D9B(unk_0x16F2683693E537C9(), "WinFinished") || unk_0xC548B0F1DC969D9B(unk_0x16F2683693E537C9(), "LossFinished"))
									{
										if (!func_1040(&(Var675[iLocal_1552[iLocal_305]]), 10))
										{
											if (iLocal_305 == 1)
											{
												unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "mini@arm_wrestling", "stand_idle_a_face", 4f, -4f, -1, 33, 0, 0, 0, 0);
											}
											else
											{
												unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "mini@arm_wrestling", "stand_idle_b_face", 4f, -4f, -1, 33, 0, 0, 0, 0);
											}
											func_986(&(Var675[iLocal_1552[iLocal_305]]), 10, 1);
										}
									}
									else if ((unk_0x1C0640BA9A7327B3() % 2500) < 50)
									{
									}
								}
								if (iVar790 == 1)
								{
									func_727(&(Var151.f_476));
									func_821(&(Var675[iLocal_1552[iLocal_305]]), 9);
									func_986(&(Var675[iLocal_1552[iLocal_305]]), 3, 0);
									func_986(&(Var675[iLocal_1552[iLocal_305]]), 4, 0);
									func_986(&(Var675[iLocal_1552[iLocal_305]]), 6, 0);
									fLocal_1541 = 0f;
									fLocal_1542 = 0f;
									fLocal_1543 = 0f;
								}
								else if (iVar790 == 2 || func_1042(&iVar933) > 45f)
								{
									func_821(&(Var675[iLocal_1552[iLocal_305]]), 10);
								}
								if ((func_1018(&(Var675[iLocal_1552[iLocal_306]])) == 9 && !func_1041(&Var151, 12)) && !func_1041(&Var151, 7))
								{
									func_795("ARMMP_REQ_RM2", -1);
									func_1045(&Var151, 12, 1);
								}
							}
							else if (bVar994)
							{
								func_725(&(Var151.f_476), 0);
							}
							break;
					}
					break;
				
				case 9:
					if (func_981(&Var641, 5))
					{
						bVar994 = false;
						if (bVar996)
						{
							unk_0x9A1335ECD7BD117F("MP_Celeb_Win");
							unk_0x82A772610883F395("MP_Celeb_Win_Out", 0, 0);
						}
						else
						{
							unk_0x9A1335ECD7BD117F("MP_Celeb_Lose");
							unk_0x82A772610883F395("MP_Celeb_Lose_Out", 0, 0);
						}
						unk_0xA37A90C62806D848(1);
						func_1048(&iVar927);
						func_1048(&iVar933);
						Var125.f_24 = 0;
						func_1048(&(Var125.f_15));
						func_1048(&(Var125.f_18));
						func_796(&(Var675[iLocal_1552[iLocal_305]]));
						func_793(&(Var30[iLocal_305]), 0);
						func_803(-1334762305);
						func_802(2);
						iLocal_1544[4]++;
						iLocal_307 = 0;
						bVar989 = true;
						func_1045(&Var151, 17, 0);
						func_1045(&Var151, 12, 0);
						func_1045(&Var151, 9, 0);
						func_1045(&Var151, 6, 0);
						func_1045(&Var151, 7, 0);
						func_986(&(Var675[iLocal_1552[iLocal_305]]), 2, 0);
						func_986(&(Var675[iLocal_1552[iLocal_305]]), 10, 0);
						func_986(&(Var675[iLocal_1552[iLocal_305]]), 5, 0);
						func_821(&(Var675[iLocal_1552[iLocal_305]]), 8);
					}
					else
					{
						if (func_1369(&Var11) != 12)
						{
							func_985(&Var125, bVar996);
						}
						else if (iLocal_305 == 0)
						{
							func_985(&Var125, 0);
						}
						else
						{
							func_985(&Var125, 1);
						}
						if (unk_0x43AB9B3158C51226(unk_0x16F2683693E537C9()))
						{
							if (unk_0xC548B0F1DC969D9B(unk_0x16F2683693E537C9(), "WinFinished") || unk_0xC548B0F1DC969D9B(unk_0x16F2683693E537C9(), "LossFinished"))
							{
								if (!func_1040(&(Var675[iLocal_1552[iLocal_305]]), 10))
								{
									if (iLocal_305 == 1)
									{
										unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "mini@arm_wrestling", "stand_idle_a_face", 4f, -4f, -1, 33, 0, 0, 0, 0);
									}
									else
									{
										unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "mini@arm_wrestling", "stand_idle_b_face", 4f, -4f, -1, 33, 0, 0, 0, 0);
									}
									func_986(&(Var675[iLocal_1552[iLocal_305]]), 10, 1);
								}
							}
							else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
							{
							}
						}
						iVar790 = func_723(&Var151, &vVar791);
						if (iVar790 == 2)
						{
							func_821(&(Var675[iLocal_1552[iLocal_305]]), 10);
						}
					}
					break;
				
				case 10:
					func_905(&(Var30[iLocal_305]));
					if (func_1044() == 0)
					{
						if (func_904(&uVar945))
						{
							if (func_1369(&Var11) != 12)
							{
								func_985(&Var125, bVar996);
							}
							else if (iLocal_305 == 0)
							{
								func_985(&Var125, 0);
							}
							else
							{
								func_985(&Var125, 1);
							}
							unk_0x857E3CE01DEA2D26();
							func_1020();
							if (iVar788 == 1)
							{
								func_749(&(Var151.f_476), "ARMMP_SC_WIN", "ARMMP_TERM_LEFT", 15000, 0, 1);
								func_722(&vVar791, 0, 0, 0, 1);
								func_721(&vVar791, "CMRC_CONT", 2, 201, 1, 1, 0);
								func_720(&vVar791, 1);
								func_752(1, 0f, 0f, 0f, Var958);
								if (func_719() == 0)
								{
									func_718(1);
								}
								func_717(0, 0);
								iVar789 = 0;
							}
							else
							{
								if (iVar788 == 2)
								{
									func_716("ARMMP_TERM_LEFT", 5000, 0);
								}
								iVar789 = 1;
							}
							func_898(&uVar945, 0, 0);
							func_897(0);
							if (Global_2439138.f_3899.f_39)
							{
								Global_2439138.f_3899.f_39 = 0;
							}
							unk_0x837C600ECEE8ABA2(func_805(func_1369(&Var11)), 0);
							func_709(&iLocal_309, 1);
							func_821(&(Var675[iLocal_1552[iLocal_305]]), 11);
						}
						else
						{
							func_896(&uVar945, 0, 0);
						}
					}
					else if (func_708(iVar788))
					{
						func_1046(unk_0xD803B885F5E47A62(), 0, 0);
						func_1318(iVar982);
						if (func_895(&Var641, iLocal_305) > func_895(&Var641, iLocal_306))
						{
							func_1078(&iLocal_1552, &Var30, &Var151, 0, 0, &(Var73.f_8), func_1369(&Var11), 1, 0, 0);
							func_821(&(Var675[iLocal_1552[iLocal_305]]), 12);
						}
						else
						{
							func_1078(&iLocal_1552, &Var30, &Var151, 0, 0, &(Var73.f_8), func_1369(&Var11), 1, 1, 0);
						}
					}
					break;
				
				case 11:
					switch (iVar789)
					{
						case 0:
							if (!func_725(&(Var151.f_476), 1) || func_707(&uVar945, 15000, 0))
							{
								func_803(854882774);
								iLocal_308 = func_746(854882774);
								if (iLocal_308 > 0 && (iLocal_308 % 5) == 0)
								{
									func_745(3, 2, 2);
								}
								func_1020();
								iVar789 = 1;
							}
							else if (!unk_0x4FD68D5821EE3E19())
							{
								func_700(&vVar791, 1128792064, 1, 0, 1, 1065353216);
							}
							break;
						
						case 1:
							if (func_1040(&(Var675[iVar988]), 12))
							{
								if (func_433(1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0))
								{
									func_430(0, 0, 1);
									func_264(15, Var641.f_21, ScriptParam_0.f_1, func_429(bVar996, 1, 0), func_429(bVar996, 1, 2), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
									func_1046(unk_0xD803B885F5E47A62(), 0, 0);
									func_897(0);
									func_1318(iVar982);
									func_1078(&iLocal_1552, &Var30, &Var151, 0, 0, &(Var73.f_8), func_1369(&Var11), 1, 1, func_895(&Var641, iLocal_305) > func_895(&Var641, iLocal_306));
								}
							}
							else
							{
								if (func_1369(&Var11) != 12)
								{
									func_985(&Var125, bVar996);
								}
								else if (iLocal_305 == 0)
								{
									func_985(&Var125, 0);
								}
								else
								{
									func_985(&Var125, 1);
								}
								if (iLocal_1544[2] > iLocal_1544[3])
								{
									iVar1004 = 0;
									iVar949 = unk_0xD803B885F5E47A62();
								}
								else if (iLocal_1544[2] == iLocal_1544[3])
								{
									iVar1004 = 2;
									iVar949 = unk_0xD803B885F5E47A62();
								}
								else
								{
									iVar1004 = 1;
									iVar949 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_1552[iLocal_306]));
								}
								iVar1005 = round((Global_262145.f_4230 * IntToFloat((20 * iLocal_1544[2]))));
								func_262(40);
								if (func_36(&iLocal_309, &uLocal_1535, "ARMMP_XPT", -1636175450, 185883144, iVar1005, iVar1004, 0, &iVar948, iVar949, 1, 0, 0, 1, 0, 3))
								{
									if (func_433(1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0))
									{
										func_1318(iVar982);
										func_264(15, Var641.f_21, ScriptParam_0.f_1, func_429(bVar996, 1, 0), func_429(bVar996, 1, 2), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
										func_1046(unk_0xD803B885F5E47A62(), 0, 0);
										func_752(1, 0f, 0f, 0f, Var958);
										func_897(0);
										func_1078(&iLocal_1552, &Var30, &Var151, 0, 0, &(Var73.f_8), func_1369(&Var11), 1, 1, func_895(&Var641, iLocal_305) > func_895(&Var641, iLocal_306));
									}
								}
							}
							break;
					}
					break;
				
				case 12:
					func_28(1);
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
					}
					unk_0x10FAF14A60A0DBE1();
					break;
				}
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_1016(&Var641))
			{
				case 0:
					break;
				
				case 1:
					if (func_1050(&iLocal_1552) >= 2)
					{
						func_27(&Var641, func_1369(&Var11));
						func_822(&Var641, 3);
					}
					break;
				
				case 3:
					if (func_1040(&(Var675[iLocal_1552[iLocal_305]]), 1) && func_1040(&(Var675[iLocal_1552[iLocal_306]]), 1))
					{
						if (unk_0x081C8BC5094A7B76(2))
						{
							func_822(&Var641, 8);
							func_26(&Var641, 0);
							func_1046(Var675[iLocal_1552[iLocal_305]].f_1, 0, 0);
							iVar950 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_1552[iLocal_305]));
							func_22(iVar950, unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_1552[iLocal_306])), func_895(&Var641, 0), func_895(&Var641, 1), unk_0x08067D4957B73C02(iVar950), 1, 0);
						}
					}
					break;
				
				case 8:
					if (iLocal_305 == 1)
					{
						if (func_21(&Var641, &iVar788, &Var675, &iLocal_1552))
						{
							func_1(&Var641, &Var675, &iLocal_1552, 0);
						}
						else if ((unk_0x1C0640BA9A7327B3() % 2500) < 50)
						{
						}
					}
					break;
				
				default:
					func_21(&Var641, &iVar788, &Var675, &iLocal_1552);
					break;
			}
			if ((unk_0x1C0640BA9A7327B3() % 5000) < 50)
			{
			}
		}
		else if ((unk_0x1C0640BA9A7327B3() % 5000) < 50)
		{
		}
	}
}

void func_1(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_1018(uParam1[(*iParam2)[0]]) == 8 && func_1018(uParam1[(*iParam2)[1]]) == 8)
	{
		if (func_1019(uParam0) == 1)
		{
			if (!func_20(uParam0))
			{
				func_16(uParam0, 0, 1);
			}
			if (func_15(uParam0) >= 0,425f)
			{
				func_14(uParam0);
				iLocal_1536 = func_4(uParam0, uParam1, iParam2);
			}
			else if ((unk_0x1C0640BA9A7327B3() % 2500) < 10)
			{
				if (func_15(uParam0) < 0,425f)
				{
				}
			}
			if (((func_1040(uParam1[(*iParam2)[0]], 6) && func_1040(uParam1[(*iParam2)[1]], 6)) && func_981(uParam0, 3)) && iLocal_1536 != 2)
			{
				func_26(uParam0, 2);
				func_3(uParam0, iLocal_1536);
				if (iLocal_1536 == 0)
				{
					func_794(uParam0, 1, 1);
				}
				else if (iLocal_1536 == 1)
				{
					func_794(uParam0, 2, 1);
				}
				if (func_981(uParam0, 1) || func_981(uParam0, 2))
				{
					iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8((*iParam2)[iLocal_305]));
					func_22(iVar0, unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8((*iParam2)[iLocal_306])), func_895(uParam0, 0), func_895(uParam0, 1), unk_0x08067D4957B73C02(iVar0), 1, bParam3);
				}
			}
		}
		else if ((unk_0x1C0640BA9A7327B3() % 2500) < 10)
		{
		}
	}
	else if ((unk_0x1C0640BA9A7327B3() % 2500) < 10)
	{
		if (func_1018(uParam1[(*iParam2)[0]]) != 8)
		{
		}
	}
	if (func_981(uParam0, 6) && !func_981(uParam0, 7))
	{
		func_794(uParam0, 7, 1);
	}
	if ((func_1018(uParam1[(*iParam2)[0]]) == 5 && func_1018(uParam1[(*iParam2)[1]]) == 5) && func_1019(uParam0) != 1)
	{
		func_26(uParam0, 1);
		func_794(uParam0, 4, 1);
		func_794(uParam0, 5, 0);
		func_794(uParam0, 1, 0);
		func_794(uParam0, 2, 0);
		func_2(uParam0);
		func_796(uParam1[(*iParam2)[iLocal_305]]);
	}
	if (((func_1018(uParam1[(*iParam2)[0]]) == 9 && func_1018(uParam1[(*iParam2)[1]]) == 9) && func_1040(uParam1[(*iParam2)[0]], 10)) && func_1040(uParam1[(*iParam2)[1]], 10))
	{
		func_794(uParam0, 5, 1);
		func_794(uParam0, 4, 0);
		func_794(uParam0, 1, 0);
		func_794(uParam0, 2, 0);
		func_794(uParam0, 6, 0);
		func_794(uParam0, 7, 0);
		func_2(uParam0);
		func_796(uParam1[(*iParam2)[iLocal_305]]);
		func_26(uParam0, 0);
	}
	else if ((unk_0x1C0640BA9A7327B3() % 2500) < 10)
	{
		if (func_1018(uParam1[(*iParam2)[0]]) != 9)
		{
		}
		else if (func_1018(uParam1[(*iParam2)[1]]) != 9)
		{
		}
		else if (!func_1040(uParam1[(*iParam2)[0]], 10))
		{
		}
		else if (!func_1040(uParam1[(*iParam2)[1]], 10))
		{
		}
	}
}

void func_2(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		uParam0->f_5[iVar0] = 0f;
		uParam0->f_24[iVar0] = 0;
		iVar0++;
	}
}

void func_3(var uParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		return;
	}
	uParam0->f_15[iParam1]++;
}

int func_4(var uParam0, var uParam1, var uParam2)
{
	iVar6 = 0;
	while (iVar6 < 15)
	{
		fVar4 = func_13(uParam1[(*uParam2)[iLocal_305]], iVar6);
		if (fVar4 > 0f)
		{
			fVar0[iLocal_305] = (fVar0[iLocal_305] + fVar4);
			func_12(uParam1[(*uParam2)[iLocal_305]], iVar6, 0f);
		}
		iVar6++;
	}
	bVar9 = func_11(uParam1[(*uParam2)[iLocal_306]]) < func_10(uParam0);
	iVar7 = func_429(bVar9, 15, func_11(uParam1[(*uParam2)[iLocal_306]]));
	iVar6 = func_10(uParam0);
	while (iVar6 < iVar7)
	{
		fVar4 = func_13(uParam1[(*uParam2)[iLocal_306]], iVar6);
		if (fVar4 > 0f)
		{
			fVar0[iLocal_306] = (fVar0[iLocal_306] + fVar4);
			unk_0x5D96D8530B3D0904(&uVar5, iVar6);
			bVar8 = true;
		}
		iVar6++;
		func_9(uParam0, iVar6);
	}
	if (bVar9)
	{
		func_9(uParam0, 0);
		iVar6 = 0;
		while (iVar6 < func_11(uParam1[(*uParam2)[iLocal_306]]))
		{
			fVar4 = func_13(uParam1[(*uParam2)[iLocal_306]], iVar6);
			if (fVar4 > 0f)
			{
				fVar0[iLocal_306] = (fVar0[iLocal_306] + fVar4);
				unk_0x5D96D8530B3D0904(&uVar5, iVar6);
				bVar8 = true;
			}
			iVar6++;
		}
	}
	if (bVar8)
	{
		func_7(uVar5, uParam1[(*uParam2)[iLocal_306]]->f_1);
	}
	if (fVar0[1] > 0f && func_1040(uParam1[(*uParam2)[1]], 11))
	{
		fVar0[1] = 0f;
	}
	else if (fVar0[1] > 0f && !func_1040(uParam1[(*uParam2)[1]], 11))
	{
		fVar0[1] = (fVar0[1] * uParam1[(*uParam2)[1]]->f_20);
	}
	if (fVar0[0] > 0f && func_1040(uParam1[(*uParam2)[0]], 11))
	{
		fVar0[0] = 0f;
	}
	else if (fVar0[0] > 0f && !func_1040(uParam1[(*uParam2)[0]], 11))
	{
		fVar0[0] = (fVar0[0] * uParam1[(*uParam2)[0]]->f_20);
	}
	if (func_924(uParam0) > 0,75f && fVar0[1] != 0f)
	{
		fVar0[1] = (fVar0[1] * 0,85f);
	}
	else if (func_924(uParam0) < -0,75f && fVar0[0] != 0f)
	{
		fVar0[0] = (fVar0[0] * 0,85f);
	}
	fVar3 = (0,031f * (fVar0[1] - fVar0[0]));
	if ((fVar3 == 0f && fVar0[1] == 0f) && fVar0[0] == 0f)
	{
		if (func_924(uParam0) < 0f)
		{
			if ((func_924(uParam0) + 0,1f) <= 0f)
			{
				if (func_924(uParam0) < -1f)
				{
					fVar3 = ((-1f - func_924(uParam0)) + 0,1f);
				}
				else
				{
					fVar3 = (fVar3 + 0,1f);
				}
			}
			else
			{
				fVar3 = (fVar3 - func_924(uParam0));
			}
		}
		else if (func_924(uParam0) > 0f)
		{
			if ((func_924(uParam0) - 0,1f) >= 0f)
			{
				if (func_924(uParam0) > 1f)
				{
					fVar3 = ((1f - func_924(uParam0)) - 0,1f);
				}
				else
				{
					fVar3 = (fVar3 - 0,1f);
				}
			}
			else
			{
				fVar3 = (fVar3 - func_924(uParam0));
			}
		}
		if (func_981(uParam0, 8))
		{
			func_794(uParam0, 8, 0);
		}
	}
	else if (!func_981(uParam0, 8))
	{
		func_794(uParam0, 8, 1);
	}
	func_6(uParam0, fVar3);
	func_5(uParam0, unk_0x2B6E0A53779D29EA(), func_924(uParam0));
	if (!func_1040(uParam1[(*uParam2)[iLocal_305]], 11) || !func_1040(uParam1[(*uParam2)[iLocal_306]], 11))
	{
		if (func_924(uParam0) <= -1f)
		{
			if (!func_981(uParam0, 3))
			{
				func_794(uParam0, 3, 1);
			}
			return 0;
		}
		else if (func_924(uParam0) >= 1f)
		{
			if (!func_981(uParam0, 3))
			{
				func_794(uParam0, 3, 1);
			}
			return 1;
		}
	}
	else if ((func_924(uParam0) > -1f || func_924(uParam0) < 1f) && func_981(uParam0, 3))
	{
		func_794(uParam0, 3, 0);
	}
	return 2;
}

void func_5(var uParam0, int iParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		bVar1 = uParam0->f_24[iVar0] == false;
		if (iVar0 > 0)
		{
			uParam0->f_5[(iVar0 - 1)] = uParam0->f_5[iVar0];
			uParam0->f_24[(iVar0 - 1)] = uParam0->f_24[iVar0];
		}
		if (bVar1 || iVar0 >= 7)
		{
			uParam0->f_5[iVar0] = fParam2;
			uParam0->f_24[iVar0] = iParam1;
			iVar0 = 8;
		}
		iVar0++;
	}
}

void func_6(var uParam0, float fParam1)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!uParam0->f_24[((8 - iVar0) - 1)] == 0)
		{
			uParam0->f_5[((8 - iVar0) - 1)] = (uParam0->f_5[((8 - iVar0) - 1)] + fParam1);
			return;
		}
		iVar0++;
	}
}

void func_7(var uParam0, int iParam1)
{
	vVar0.x = 1230204399;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.z = uParam0;
	unk_0xFB061A86A7AC749F(1, &vVar0, 3, func_8(iParam1));
}

var func_8(int iParam0)
{
	if (iParam0 != -1)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

void func_9(var uParam0, int iParam1)
{
	uParam0->f_19 = iParam1;
}

int func_10(var uParam0)
{
	return uParam0->f_19;
}

int func_11(var uParam0)
{
	return uParam0->f_22;
}

void func_12(var uParam0, int iParam1, float fParam2)
{
	if (iParam1 < 0 || iParam1 >= 15)
	{
		return;
	}
	uParam0->f_2[iParam1] = fParam2;
}

float func_13(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 15)
	{
		return 0f;
	}
	return uParam0->f_2[iParam1];
}

void func_14(var uParam0)
{
	if (func_1049(&(uParam0->f_2)))
	{
		func_1048(&(uParam0->f_2));
	}
}

float func_15(var uParam0)
{
	if (!func_1049(&(uParam0->f_2)))
	{
		return 0f;
	}
	return func_1042(&(uParam0->f_2));
}

void func_16(var uParam0, float fParam1, bool bParam2)
{
	if (!func_1049(&(uParam0->f_2)))
	{
		func_19(&(uParam0->f_2), fParam1);
	}
	else if (bParam2)
	{
		func_17(&(uParam0->f_2), fParam1);
	}
}

void func_17(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_18(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_18(bool bParam0)
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

void func_19(int iParam0, float fParam1)
{
	if (!func_1049(iParam0))
	{
		func_17(iParam0, fParam1);
	}
}

bool func_20(var uParam0)
{
	return func_1049(&(uParam0->f_2));
}

int func_21(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_1044() == 0 && func_1050(iParam3) < 2)
	{
		if (!func_981(uParam0, 0))
		{
			func_794(uParam0, 0, 1);
			func_822(uParam0, 10);
			if (((*iParam3)[1] > -1 && (*iParam3)[0] > -1) && ((func_1019(uParam0) == 2 || func_1018(uParam2[(*iParam3)[1]]) == 9) || func_1018(uParam2[(*iParam3)[0]]) == 9))
			{
				*iParam1 = 2;
			}
			else
			{
				*iParam1 = 1;
			}
			return 0;
		}
	}
	return 1;
}

void func_22(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	Var0 = -1685832075;
	Var0.f_1 = iParam0;
	Var0.f_2 = iParam1;
	Var0.f_3 = (iParam2 & 32767 + shift_left(iParam3 & 32767, 15));
	Var0.f_4 = shift_left(iParam4, 1);
	if (bParam5)
	{
		unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
	}
	if (!bParam6)
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 5, func_25(1, 1));
	}
	else
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 5, func_23(1));
	}
}

var func_23(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
		{
			iVar2 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar1));
			if (func_24(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_24(int iParam0, bool bParam1, bool bParam2)
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

var func_25(int iParam0, bool bParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_24(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_1075(iVar2, 0))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_26(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_27(var uParam0, int iParam1)
{
	uParam0->f_14 = iParam1;
}

void func_28(bool bParam0)
{
	unk_0x9CBC55A05A07FC47(0);
	switch (func_29())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	unk_0x3D0B5872F36FB05C(sVar0);
}

int func_29()
{
	func_30();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_30()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_34(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_33(unk_0x16F2683693E537C9());
			if (func_32(iVar0) && (!func_31(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_32(Global_111638.f_2358.f_539.f_4321))
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

bool func_31(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_32(int iParam0)
{
	return iParam0 < 3;
}

int func_33(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_34(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_34(int iParam0)
{
	if (func_32(iParam0))
	{
		return func_35(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_35(int iParam0)
{
	return Global_1798[iParam0];
}

int func_36(int iParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, int iParam15)
{
	if (iParam0->f_435 > 0)
	{
		func_251(0);
	}
	iVar32 = iParam9;
	*iParam8 = 1;
	if (bParam14)
	{
		func_250();
	}
	if (unk_0xA3F916BCE430ED26() || unk_0xBA301E03A078FA59())
	{
		func_242(&(iParam0->f_23), &(iParam0->f_144), iParam0->f_435, iParam0->f_2);
	}
	else
	{
		func_234(iParam0, &(iParam0->f_450), &(iParam0->f_451), &(iParam0->f_23), &(iParam0->f_144), iParam0->f_435, &(iParam0->f_2), &(iParam0->f_3), &(iParam0->f_474));
	}
	func_233(iParam0);
	switch (*iParam8)
	{
		case 0:
			switch (iParam0->f_435)
			{
				case 0:
					func_232(iParam0, 0);
					if (func_231(iParam0))
					{
						func_230(iParam0, 0);
						if ((func_707(&(iParam0->f_431), 500, 0) || unk_0x757EF87A33649210()) && func_158(iParam0, uParam1, iParam9, 0))
						{
							func_157(Global_2425662[iVar32].f_250, unk_0xCED082ADD3739B9F(iParam0->f_23[0]), 0, &sVar0, &cVar16, Global_2425662[iVar32].f_249, Global_2425662[iVar32].f_251, 0);
							unk_0x3F423BF5B8125A50(&sVar0);
							if (unk_0xB4AE0788C1587752(&sVar0) || func_156(iParam0))
							{
								func_155(&(iParam0->f_429));
								func_896(&(iParam0->f_429), 0, 0);
								func_152(1, 1);
								iParam0->f_435 = 1;
							}
						}
					}
					break;
				
				case 1:
					func_151(iParam0, &(iParam0->f_20), 0, 1);
					func_150(iParam0, 0);
					if (func_707(&(iParam0->f_429), 375, 0))
					{
						func_149(iParam0);
					}
					if (func_707(&(iParam0->f_429), 750, 0))
					{
						sVar33 = "WINNER";
						StringCopy(&Var35, unk_0x6E524813889AECF8(iParam9), 64);
						cVar51 = { func_145(iParam9) };
						iParam0->f_418 = 666;
						if (!func_144() || !func_143(unk_0xD803B885F5E47A62()))
						{
							StringCopy(&cVar51, "", 64);
						}
						if (iParam6 == 0)
						{
							sVar34 = "HUD_COLOUR_FRIENDLY";
						}
						else
						{
							sVar34 = "HUD_COLOUR_NET_PLAYER1";
						}
						func_142(iParam0, sVar33, sVar34, 1, 0);
						func_139(iParam0, sVar33, iParam6, &Var35, &cVar51, "", iParam7, 1, 0, 0, 0);
						iParam0->f_418 += 4666;
						iParam0->f_418 += 666;
						func_138(iParam0, sVar33, 75, 0);
						func_137(iParam0, sVar33);
						func_155(&(iParam0->f_429));
						func_896(&(iParam0->f_429), 0, 0);
						func_430(1, 0, 1);
						unk_0x9A1335ECD7BD117F("MP_Celeb_Preload_Fade");
						unk_0x9A1335ECD7BD117F("MP_Celeb_Preload_Fade");
						func_136(iParam0);
						unk_0x76366A5156F91F51(1);
						iParam0->f_435 = 3;
					}
					break;
				
				case 3:
					func_151(iParam0, &(iParam0->f_20), 0, 1);
					if (func_707(&(iParam0->f_429), iParam0->f_418, 0))
					{
						iParam0->f_435 = 5;
					}
					break;
				
				case 5:
					func_135(iParam0);
					unk_0x76366A5156F91F51(0);
					*iParam8 = 1;
					iParam0->f_435 = 0;
					break;
			}
			break;
		
		case 1:
			switch (iParam0->f_435)
			{
				case 0:
					if (!bParam10)
					{
						if (func_132(iParam0, uParam1, &bVar67, 0, 0))
						{
							func_232(iParam0, 0);
							func_152(1, 1);
							func_125(0);
							func_251(0);
							func_1063(unk_0xD803B885F5E47A62(), 0, 0, 0);
							if (bVar67)
							{
								unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
							}
							iParam0->f_435 = 1;
						}
					}
					else
					{
						func_232(iParam0, 0);
						func_152(1, 1);
						func_125(0);
						func_251(0);
						func_1063(unk_0xD803B885F5E47A62(), 0, 0, 0);
						iParam0->f_435 = 1;
					}
					break;
				
				case 1:
					func_232(iParam0, 0);
					if ((func_231(iParam0) && unk_0x0F1CCD77290EE12F()) && !unk_0xED4934AFB6EC6451("DeathFailMPIn"))
					{
						StringCopy(&Var76, unk_0x6E524813889AECF8(unk_0xD803B885F5E47A62()), 64);
						cVar92 = { func_145(unk_0xD803B885F5E47A62()) };
						iParam0->f_418 = 666;
						sVar68 = "SUMMARY";
						sVar69 = "HUD_COLOUR_BLACK";
						iVar70 = func_124(unk_0x4B2BFE4A3BC248ED(unk_0xFB04705FDFDCE640()));
						iVar75 = func_81(iParam15, sParam2, iParam3, iParam4, iParam5, 1, -1, 0);
						iVar71 = func_80(iVar70, 0);
						iVar72 = iVar71 + 1;
						iVar73 = func_79(iVar71, 0, 0);
						iVar74 = func_79(iVar72, 0, 0);
						iParam0->f_418 = 666;
						if (!func_144() || !func_143(unk_0xD803B885F5E47A62()))
						{
							StringCopy(&cVar92, "", 64);
						}
						func_142(iParam0, sVar68, sVar69, 1, 0);
						if (iParam6 == 2)
						{
							func_139(iParam0, sVar68, iParam6, "", "", "", iParam7, 1, 0, 0, 0);
						}
						else
						{
							func_139(iParam0, sVar68, iParam6, &Var76, &cVar92, "", iParam7, 1, 0, 0, 0);
						}
						iParam0->f_418 += 2333;
						if (iParam12 > 0)
						{
							func_76(iParam0, sVar68, iParam11, iParam12);
							iParam0->f_418 += 2333;
						}
						func_75(iParam0, sVar68, iVar75, iVar70, iVar73, iVar74, iVar71, iVar72);
						iParam0->f_418 += 2333;
						if ((iVar70 + iVar75) >= iVar74)
						{
							iParam0->f_418 = (iParam0->f_418 + round((to_float(2333) / 1,75f)));
						}
						func_138(iParam0, sVar68, -1, 0);
						func_137(iParam0, sVar68);
						func_155(&(iParam0->f_429));
						func_896(&(iParam0->f_429), 0, 0);
						if (func_74())
						{
							unk_0x8BC9595FD2792B5D("MP_CELEB_SCREEN_SCENE");
						}
						else
						{
							unk_0x8BC9595FD2792B5D("MP_CELEB_SCREEN_SCENE");
						}
						func_136(iParam0);
						iParam0->f_435 = 3;
						unk_0x76366A5156F91F51(1);
					}
					else if (unk_0xED4934AFB6EC6451("DeathFailMPIn"))
					{
						if (!func_904(&(iParam0->f_455)))
						{
							func_896(&(iParam0->f_455), 0, 0);
						}
						else if (func_707(&(iParam0->f_455), 1000, 0))
						{
							func_70();
						}
					}
					break;
				
				case 3:
					func_69(iParam0, 0);
					if (func_707(&(iParam0->f_429), iParam0->f_418, 0))
					{
						if (bParam13)
						{
							unk_0x82A772610883F395("MinigameEndNeutral", 0, 0);
							unk_0x4D7F4CC43D4D0DE3(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", 1);
							func_66();
							func_65(iParam0, "SUMMARY");
							func_54(iParam0, 1, "SUMMARY", 0);
							func_152(0, 1);
							if (unk_0x9F4FE516EAACCFC5(*uParam1))
							{
								unk_0x9A8DDC7C522F5BF5(*uParam1, 1);
								unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
								unk_0x2FB9A57162E54BAB(0f);
								unk_0xEF6276132B396452(0f, 1065353216);
							}
							iParam0->f_435 = 5;
							if (func_74())
							{
								unk_0x8910D3D58E0132B8("MP_CELEB_SCREEN_SCENE");
							}
							else
							{
								unk_0x8910D3D58E0132B8("MP_CELEB_SCREEN_SCENE");
							}
							return 1;
						}
						else
						{
							if (!bParam10)
							{
								func_52(uParam1);
							}
							func_155(&(iParam0->f_429));
							func_896(&(iParam0->f_429), 0, 0);
							iParam0->f_435 = 4;
						}
					}
					break;
				
				case 4:
					func_69(iParam0, 0);
					unk_0x82A772610883F395("MinigameEndNeutral", 0, 0);
					unk_0x4D7F4CC43D4D0DE3(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", 1);
					func_66();
					func_65(iParam0, "SUMMARY");
					func_54(iParam0, 1, "SUMMARY", 0);
					func_152(0, 1);
					if (unk_0x9F4FE516EAACCFC5(*uParam1))
					{
						unk_0x9A8DDC7C522F5BF5(*uParam1, 1);
						unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
						unk_0x2FB9A57162E54BAB(0f);
						unk_0xEF6276132B396452(0f, 1065353216);
					}
					iParam0->f_435 = 5;
					if (func_74())
					{
						unk_0x8910D3D58E0132B8("MP_CELEB_SCREEN_SCENE");
					}
					else
					{
						unk_0x8910D3D58E0132B8("MP_CELEB_SCREEN_SCENE");
					}
					return 1;
					break;
				
				case 5:
					unk_0x76366A5156F91F51(0);
					if (func_74())
					{
						unk_0x8910D3D58E0132B8("MP_CELEB_SCREEN_SCENE");
					}
					else
					{
						unk_0x8910D3D58E0132B8("MP_CELEB_SCREEN_SCENE");
					}
					return 1;
					break;
			}
			break;
	}
	if (iParam0->f_435 > 0 && iParam0->f_435 < 5)
	{
		if (unk_0x9F4FE516EAACCFC5(*uParam1))
		{
			if (unk_0x9CF8D5C7090408A2(*uParam1))
			{
				func_37(iParam0, &(iParam0->f_20), iVar32, 0, 0, 0, 0, 0, -1, -1, 200, 0, 0);
			}
		}
	}
	return 0;
}

void func_37(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	if (iParam8 == iParam8)
	{
		iParam8 = iParam8;
	}
	if (iParam11 == iParam11)
	{
		iParam11 = iParam11;
	}
	func_38(iParam0, uParam1, iParam2, iParam3, bParam4, bParam5, bParam6, iParam7, iParam9, iParam10, bParam12);
}

void func_38(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	Var0 = -1;
	Var0.f_1 = 32;
	Var0.f_34 = 3;
	Var0.f_40 = -1;
	if (!unk_0xEB6A8945D1AC98A1(*uParam1) && (iParam2 >= 0 || bParam4))
	{
		unk_0x9DD8618CA5BF832D(*uParam1, 150, true);
		StringCopy(&Var42, "", 64);
		StringCopy(&cVar58, "", 64);
		StringCopy(&Var77, "", 64);
		StringCopy(&cVar93, "", 64);
		if (iParam8 > -1)
		{
			iVar74 = iParam8;
		}
		else
		{
			iVar74 = Global_2425662[iParam2].f_250;
			iVar75 = Global_2425662[iParam2].f_249;
			iVar76 = Global_2425662[iParam2].f_251;
		}
		if (iParam9 == iParam9)
		{
			iParam9 = iParam9;
		}
		if (!bParam5)
		{
			func_157(iVar74, unk_0xCED082ADD3739B9F(*uParam1), bParam4, &Var42, &cVar58, iVar75, iVar76, bParam10);
		}
		else
		{
			func_51(iParam7, Global_2425662[iParam2].f_252, *uParam1, bParam6, &Var42, &cVar58);
		}
		func_50(uParam0, &Var77, &cVar93, unk_0xCED082ADD3739B9F(*uParam1));
		if (uParam0->f_448 != 0)
		{
			if (!unk_0xEA6BC48857E0AC4C(&Var42) && !unk_0xEA6BC48857E0AC4C(&Var77))
			{
				unk_0x3F423BF5B8125A50(&Var42);
				unk_0x3F423BF5B8125A50(&Var77);
				if (((unk_0xB4AE0788C1587752(&Var42) && unk_0xB4AE0788C1587752(&Var77)) && func_49(iVar74, bParam5)) && func_48(iVar74, bParam5))
				{
					switch (uParam0->f_449)
					{
						case 0:
							if (iParam2 > -1 && ((bParam5 && iParam3 > -1) || !bParam5))
							{
								if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_425, iParam2) || (bParam5 && !unk_0xEAE0D21A50E6C7F4(uParam0->f_425, iParam3)))
								{
									if (bParam5)
									{
										func_42(&Var0, 0, &vVar109, &vVar112, 1, 0, 1);
										vVar112.z = (vVar112.z + 90f);
										uParam0->f_437 = unk_0xE9744DB7B8CA6965(vVar109, vVar112, 2);
										vVar115 = { unk_0x1BB04F10296A1C5E(&Var42, &cVar58, vVar109, vVar112, 0, 2) };
										vVar118 = { unk_0xEEB20D14BD38615E(&Var42, &cVar58, vVar109, vVar112, 0, 2) };
										if (unk_0xC844350D5D58C99A(*uParam1))
										{
											if (!unk_0x437347B10A200C4B(*uParam1, 0))
											{
												unk_0x08841CDB215AE18F(*uParam1, vVar115, 0, 0, 1);
												unk_0xC023D1C4BF532815(*uParam1, vVar118, 2, 1);
											}
										}
									}
									else
									{
										vVar121 = { unk_0x68F4C0EC296D3901(*uParam1, 1) };
										vVar124 = { vVar121 };
										func_41(&(uParam0->f_440), iVar74, bParam5, vVar124);
										uParam0->f_437 = unk_0xE9744DB7B8CA6965(vVar121, unk_0x835730A2D89F6093(*uParam1, 2), 2);
									}
									if (unk_0xC844350D5D58C99A(uParam0->f_440))
									{
										unk_0xE14EC663EED44AD5(uParam0->f_440, uParam0->f_437, &cVar58, &Var42, 1000f, -1000f, 0, 1148846080);
									}
									unk_0x915804B434753CBD(*uParam1, uParam0->f_437, &Var42, &cVar58, 1000f, -8f, 0, 0, 1000f, 31);
									if (bParam5)
									{
										if (bParam6)
										{
											if (iParam2 >= 0 && iParam2 < 32)
											{
												unk_0x5D96D8530B3D0904(&(uParam0->f_425), iParam2);
											}
										}
										else if (iParam3 >= 0 && iParam3 < 32)
										{
											unk_0x5D96D8530B3D0904(&(uParam0->f_425), iParam3);
										}
									}
									else if (iParam2 >= 0 && iParam2 < 32)
									{
										unk_0x5D96D8530B3D0904(&(uParam0->f_425), iParam2);
									}
								}
								else
								{
									uParam0->f_449++;
								}
							}
							else
							{
								uParam0->f_449 = 2;
							}
							break;
						
						case 1:
							if (unk_0x69DF961355195C3C(uParam0->f_437))
							{
								if (!bParam5)
								{
									if (iVar74 == 8)
									{
										func_40(uParam0, uParam1);
									}
									if (iVar74 == 9)
									{
										func_39(uParam0, uParam1);
									}
								}
								if (uParam0->f_1195)
								{
									if (unk_0xA45992A6CE82FB43(uParam0->f_437) < 0,98f)
									{
										if (iVar74 == 8)
										{
											func_40(uParam0, uParam1);
										}
										if (iVar74 == 9)
										{
											func_39(uParam0, uParam1);
										}
									}
									else
									{
										unk_0x3E8E48829F3C7624(*uParam1, &Var77, &cVar93, unk_0x68F4C0EC296D3901(*uParam1, 1), unk_0x835730A2D89F6093(*uParam1, 2), 2f, -8f, -1, 0, 0f, 2, 31);
										uParam0->f_449++;
									}
								}
							}
							break;
						
						case 2:
							break;
					}
				}
				else
				{
					if (!unk_0xB4AE0788C1587752(&Var42))
					{
					}
					if (!func_49(iVar74, bParam5))
					{
					}
					if (!unk_0xB4AE0788C1587752(&Var77))
					{
					}
					if (!func_48(iVar74, bParam5))
					{
					}
				}
			}
		}
	}
	else
	{
		if (unk_0xEB6A8945D1AC98A1(*uParam1))
		{
		}
		if (iParam2 < 0)
		{
		}
	}
}

void func_39(var uParam0, var uParam1)
{
	if (unk_0x69DF961355195C3C(uParam0->f_437))
	{
		fVar0 = unk_0xA45992A6CE82FB43(uParam0->f_437);
		if (!unk_0xC844350D5D58C99A(*uParam1))
		{
			return;
		}
		if (unk_0x437347B10A200C4B(*uParam1, 0))
		{
			return;
		}
		if (uParam0->f_439 == -1)
		{
			uParam0->f_439 = unk_0xD68EA767274B7444();
		}
		else if (fVar0 >= 0,595f)
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_438, 0))
			{
				unk_0x4D7F4CC43D4D0DE3(uParam0->f_439, "Slow_Clap_Cel", "MP_SNACKS_SOUNDSET", 1);
				unk_0x5D96D8530B3D0904(&(uParam0->f_438), 0);
			}
		}
		else if (fVar0 >= 0,371f)
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_438, 1))
			{
				unk_0x4D7F4CC43D4D0DE3(uParam0->f_439, "Slow_Clap_Cel", "MP_SNACKS_SOUNDSET", 1);
				unk_0x5D96D8530B3D0904(&(uParam0->f_438), 1);
			}
		}
		else if (fVar0 >= 0,152f)
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_438, 2))
			{
				unk_0x4D7F4CC43D4D0DE3(uParam0->f_439, "Slow_Clap_Cel", "MP_SNACKS_SOUNDSET", 1);
				unk_0x5D96D8530B3D0904(&(uParam0->f_438), 2);
			}
		}
	}
}

void func_40(var uParam0, var uParam1)
{
	if (unk_0x69DF961355195C3C(uParam0->f_437))
	{
		fVar0 = unk_0xA45992A6CE82FB43(uParam0->f_437);
		if (!unk_0xC844350D5D58C99A(*uParam1))
		{
			return;
		}
		if (unk_0x437347B10A200C4B(*uParam1, 0))
		{
			return;
		}
		if (uParam0->f_439 == -1)
		{
			uParam0->f_439 = unk_0xD68EA767274B7444();
		}
		if (!unk_0xCED082ADD3739B9F(*uParam1))
		{
			if (fVar0 >= 0,622f)
			{
				if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_438, 0))
				{
					unk_0x4D7F4CC43D4D0DE3(uParam0->f_439, "Knuckle_Crack_Slap_Cel", "MP_SNACKS_SOUNDSET", 1);
					unk_0x5D96D8530B3D0904(&(uParam0->f_438), 0);
				}
			}
			else if (fVar0 >= 0,495f)
			{
				if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_438, 1))
				{
					unk_0x4D7F4CC43D4D0DE3(uParam0->f_439, "Knuckle_Crack_Slap_Cel", "MP_SNACKS_SOUNDSET", 1);
					unk_0x5D96D8530B3D0904(&(uParam0->f_438), 1);
				}
			}
			else if (fVar0 >= 0,333f)
			{
				if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_438, 2))
				{
					unk_0x4D7F4CC43D4D0DE3(uParam0->f_439, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", 1);
					unk_0x5D96D8530B3D0904(&(uParam0->f_438), 2);
				}
			}
			else if (fVar0 >= 0,162f)
			{
				if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_438, 3))
				{
					unk_0x4D7F4CC43D4D0DE3(uParam0->f_439, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", 1);
					unk_0x5D96D8530B3D0904(&(uParam0->f_438), 3);
				}
			}
			else if (fVar0 >= 0,131f)
			{
				if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_438, 4))
				{
					unk_0x4D7F4CC43D4D0DE3(uParam0->f_439, "Knuckle_Crack_Slap_Cel", "MP_SNACKS_SOUNDSET", 1);
					unk_0x5D96D8530B3D0904(&(uParam0->f_438), 4);
				}
			}
		}
		else if (fVar0 >= 0,595f)
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_438, 0))
			{
				unk_0x4D7F4CC43D4D0DE3(uParam0->f_439, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", 1);
				unk_0x5D96D8530B3D0904(&(uParam0->f_438), 0);
			}
		}
		else if (fVar0 >= 0,445f)
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_438, 1))
			{
				unk_0x4D7F4CC43D4D0DE3(uParam0->f_439, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", 1);
				unk_0x5D96D8530B3D0904(&(uParam0->f_438), 1);
			}
		}
		else if (fVar0 >= 0,282f)
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_438, 2))
			{
				unk_0x4D7F4CC43D4D0DE3(uParam0->f_439, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", 1);
				unk_0x5D96D8530B3D0904(&(uParam0->f_438), 2);
			}
		}
		else if (fVar0 >= 0,141f)
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_438, 3))
			{
				unk_0x4D7F4CC43D4D0DE3(uParam0->f_439, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", 1);
				unk_0x5D96D8530B3D0904(&(uParam0->f_438), 3);
			}
		}
	}
}

bool func_41(var uParam0, int iParam1, bool bParam2, vector3 vParam3)
{
	fVar1 = -1f;
	if (bParam2)
	{
		return 1;
	}
	if (iParam1 == 52)
	{
		iVar0 = -917746868;
	}
	else
	{
		return 1;
	}
	if (unk_0xC844350D5D58C99A(*uParam0))
	{
		return 1;
	}
	if (unk_0x081C8BC5094A7B76(1))
	{
		unk_0x3A4967AE7C71F999(unk_0xBF3DE18643F54472(false, 0) + 1);
		if (func_48(iParam1, bParam2))
		{
			*uParam0 = unk_0x7707E48765093646(iVar0, vParam3, 0, false, false);
			if (fVar1 != -1f)
			{
				unk_0xD8F6A53F4799FAFE(*uParam0, fVar1);
			}
		}
	}
	else
	{
		return 1;
	}
	return unk_0xC844350D5D58C99A(*uParam0);
}

void func_42(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam4 == bParam4)
	{
		bParam4 = bParam4;
	}
	if (func_74())
	{
		func_43(uParam0, iParam1, uParam2, uParam3, iParam1);
		return;
	}
	if (bParam5)
	{
		*uParam2 = { 414,4f, -977,6f, -100,0042f };
		uParam2->f_2 = (uParam2->f_2 - 1f);
		*uParam3 = { 0f, 0f, 200f };
		return;
	}
	else if (bParam6)
	{
		*uParam2 = { 414,65f, -978,46f, -99,004f };
		uParam2->f_2 = (uParam2->f_2 - 1f);
		*uParam3 = { 0f, 0f, 200f };
		return;
	}
	switch (iParam1)
	{
		case 0:
			*uParam2 = { 414,4f, -977,6f, -100,0042f };
			*uParam3 = { 0f, 0f, 200f };
			break;
		
		case 1:
			if (bParam4)
			{
				*uParam2 = { 412,5202f, -977,6f, -100,0042f };
				*uParam3 = { 0f, 0f, 225,375f };
			}
			else
			{
				*uParam2 = { 413,0202f, -976,6559f, -100,0042f };
				*uParam3 = { 0f, 0f, 225,375f };
			}
			break;
		
		case 2:
			*uParam2 = { 414,9879f, -975,4411f, -100,0042f };
			*uParam3 = { 0f, 0f, 183,625f };
			break;
		
		case 3:
			*uParam2 = { 416,2123f, -975,5722f, -100,0042f };
			*uParam3 = { 0f, 0f, 155,3f };
			break;
		
		case 4:
			*uParam2 = { 410,7824f, -976,5933f, -100,0042f };
			*uParam3 = { 0f, 0f, 240,9f };
			break;
		
		case 5:
			*uParam2 = { 411,1806f, -975,819f, -100,0042f };
			*uParam3 = { 0f, 0f, 227,5f };
			break;
		
		case 6:
			*uParam2 = { 414,0178f, -974,6259f, -100,0042f };
			*uParam3 = { 0f, 0f, 206,65f };
			break;
		
		case 7:
			*uParam2 = { 415,7338f, -972,9619f, -100,0042f };
			*uParam3 = { 0f, 0f, 170,775f };
			break;
		
		case 8:
			*uParam2 = { 412,1275f, -974,0275f, -100,0042f };
			*uParam3 = { 0f, 0f, 200f };
			break;
		
		case 9:
			*uParam2 = { 417,3252f, -970,7984f, -100,0042f };
			*uParam3 = { 0f, 0f, 160,025f };
			break;
		
		case 10:
			*uParam2 = { 409,805f, -975,0361f, -100,0042f };
			*uParam3 = { 0f, 0f, 240,65f };
			break;
		
		case 11:
			*uParam2 = { 410,6598f, -974,3722f, -100,0042f };
			*uParam3 = { 0f, 0f, 222,15f };
			break;
		
		case 12:
			*uParam2 = { 407,5374f, -974,3933f, -100,0042f };
			*uParam3 = { 0f, 0f, 258,175f };
			break;
		
		case 13:
			*uParam2 = { 413,1881f, -969,019f, -100,0042f };
			*uParam3 = { 0f, 0f, 204,025f };
			break;
		
		case 14:
			*uParam2 = { 415,0103f, -969,1959f, -100,0042f };
			*uParam3 = { 0f, 0f, 182,35f };
			break;
	}
	uParam2->f_2 = (uParam2->f_2 - 1f);
}

void func_43(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			*uParam2 = { 2956,984f, -3866,815f, 140f };
			switch (Global_4456448.f_226026)
			{
				case 3:
					uParam2->f_2 = (uParam2->f_2 + 0,05f);
					break;
			}
			*uParam3 = { 0f, 0f, 48f };
			break;
		
		case 1:
			if (iParam4 == 0 || (func_47(uParam0->f_1[iParam4]) && iParam4 == 1))
			{
				*uParam2 = { 2966,769f, -3874,841f, 140,0011f };
				*uParam3 = { 0f, 0f, 48f };
			}
			else
			{
				*uParam2 = { func_45(uParam0, iParam1) };
				uParam2->f_2 = (uParam2->f_2 - 1f);
				*uParam3 = { 0f, 0f, func_44(iParam1) };
			}
			break;
		
		default:
			*uParam2 = { func_45(uParam0, iParam1) };
			uParam2->f_2 = (uParam2->f_2 - 1f);
			*uParam3 = { 0f, 0f, func_44(iParam1) };
			break;
	}
}

float func_44(int iParam0)
{
	if (func_74())
	{
		switch (iParam0)
		{
			case 0:
				return 203,6f;
			
			case 1:
				return 214,6f;
			
			case 2:
				return 256,8f;
			
			case 3:
				return 247,1997f;
			
			case 4:
				return 188,6f;
			
			case 5:
				return 229,199f;
			
			case 6:
				return 203,799f;
			
			case 7:
				return 212,599f;
			
			case 8:
				return 247,999f;
			
			case 9:
				return 247,999f;
			
			case 10:
				return 189,199f;
			
			case 11:
				return 213,599f;
			
			case 12:
				return 242,399f;
			
			case 13:
				return 269,599f;
			
			case 14:
				return 218,199f;
			
			case 15:
				return 266,6238f;
			
			default:
		}
		return 306,5976f;
	}
	return 0f;
}

Vector3 func_45(var uParam0, int iParam1)
{
	if (func_74())
	{
		if (func_46(uParam0))
		{
			switch (iParam1)
			{
				case 0:
					return 2828,92f, -3901,475f, 139,3957f;
					break;
				
				case 1:
					return 2829,51f, -3902,015f, 139,2491f;
					break;
				
				case 2:
					return 2828,365f, -3900,967f, 139,2491f;
					break;
			}
			return 2828,92f, -3901,475f, 139,3957f;
		}
		switch (iParam1)
		{
			case 0:
				return 2963,925f, -3870,137f, 140,082f;
			
			case 1:
				return 2963,068f, -3870,597f, 140,082f;
			
			case 2:
				return 2960,217f, -3874,703f, 140,082f;
			
			case 3:
				return 2960,612f, -3873,702f, 140,0732f;
			
			case 4:
				return 2965,272f, -3869,305f, 140,082f;
			
			case 5:
				return 2959,643f, -3871,999f, 140,082f;
			
			case 6:
				return 2964,449f, -3869,2f, 140,082f;
			
			case 7:
				return 2963,433f, -3868,566f, 140,082f;
			
			case 8:
				return 2959,914f, -3872,786f, 140,082f;
			
			case 9:
				return 2959,735f, -3873,895f, 140,075f;
			
			case 10:
				return 2965,66f, -3868,658f, 140,082f;
			
			case 11:
				return 2962,806f, -3869,486f, 140,082f;
			
			case 12:
				return 2960,431f, -3871,78f, 140,082f;
			
			case 13:
				return 2959,737f, -3875,456f, 140,082f;
			
			case 14:
				return 2961,832f, -3870,305f, 140,082f;
			
			case 15:
				return 2957,675f, -3874,198f, 140,0816f;
			
			default:
		}
		return 2828,286f, -3904,493f, 139,01f;
	}
	return 418,9326f, -979,3876f, -100,0042f;
}

bool func_46(var uParam0)
{
	return *uParam0 == 0;
}

int func_47(int iParam0)
{
	switch (iParam0)
	{
		case 25:
		case 52:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 80:
		case 100:
		case 81:
		case 101:
		case 82:
		case 102:
		case 83:
		case 103:
		case 84:
		case 104:
		case 85:
		case 105:
		case 86:
		case 106:
		case 67:
		case 87:
		case 68:
		case 88:
		case 69:
		case 89:
		case 70:
		case 90:
		case 71:
		case 91:
		case 72:
		case 92:
		case 73:
		case 93:
		case 74:
		case 94:
		case 75:
		case 95:
		case 76:
		case 96:
		case 77:
		case 97:
		case 78:
		case 98:
		case 79:
		case 99:
			return 1;
		
		default:
	}
	return 0;
}

int func_48(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (iParam0 == 52)
		{
			iVar0 = -917746868;
		}
		else
		{
			return 1;
		}
		unk_0x523BCC9DC80CD82F(iVar0);
		if (!unk_0xB87F6CF6E5628C67(iVar0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_49(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if (iParam0 != 8 && iParam0 != 9)
	{
		return 1;
	}
	return unk_0xAE317D00A5A55DF6("DLC_GTAO/SNACKS", 0, -1);
}

void func_50(var uParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (uParam0->f_448 == 0)
	{
		if (bParam3)
		{
			iVar0 = unk_0x09AC81E49EA267F7(0, 2);
			if (iVar0 == 0)
			{
				uParam0->f_448 = 1;
			}
			else
			{
				uParam0->f_448 = 2;
			}
		}
		else
		{
			uParam0->f_448 = 3;
		}
	}
	switch (uParam0->f_448)
	{
		case 1:
			StringCopy(sParam1, "MP_CELEBRATION@IDLES@MALE", 64);
			StringCopy(sParam2, "CELEBRATION_IDLE_M_A", 64);
			break;
		
		case 2:
			StringCopy(sParam1, "MP_CELEBRATION@IDLES@MALE", 64);
			StringCopy(sParam2, "CELEBRATION_IDLE_M_B", 64);
			break;
		
		case 3:
			StringCopy(sParam1, "MP_CELEBRATION@IDLES@FEMALE", 64);
			StringCopy(sParam2, "CELEBRATION_IDLE_F_A", 64);
			break;
		
		case 0:
			StringCopy(sParam1, "", 64);
			StringCopy(sParam2, "", 64);
			break;
	}
}

void func_51(int iParam0, int iParam1, int iParam2, bool bParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 2:
			if (unk_0xCED082ADD3739B9F(iParam2))
			{
				bVar0 = false;
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 1:
			if (bParam3)
			{
				bVar0 = true;
			}
			else
			{
				bVar0 = false;
			}
			break;
		
		case 3:
			if (bParam3)
			{
				bVar0 = true;
			}
			else
			{
				bVar0 = false;
			}
			break;
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_manly_handshake", 64);
					break;
				
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_manly_handshake", 64);
					break;
				
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_manly_handshake", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "MANLY_HANDSHAKE_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "MANLY_HANDSHAKE_RIGHT", 64);
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_fist_bump", 64);
					break;
				
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_fist_bump", 64);
					break;
				
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_fist_bump", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "FIST_BUMP_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "FIST_BUMP_RIGHT", 64);
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_backslap", 64);
					break;
				
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_backslap", 64);
					break;
				
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_backslap", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "BACKSLAP_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "BACKSLAP_RIGHT", 64);
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_high_five", 64);
					break;
				
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_high_five", 64);
					break;
				
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_high_five", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "HIGH_FIVE_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "HIGH_FIVE_RIGHT", 64);
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_cowering", 64);
					break;
				
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_cowering", 64);
					break;
				
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_cowering", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "COWERING_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "COWERING_RIGHT", 64);
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_sarcastic", 64);
					break;
				
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_sarcastic", 64);
					break;
				
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_sarcastic", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "SARCASTIC_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "SARCASTIC_RIGHT", 64);
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_bro_hug", 64);
					break;
				
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_bro_hug", 64);
					break;
				
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_bro_hug", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "BRO_HUG_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "BRO_HUG_RIGHT", 64);
			}
			break;
	}
}

int func_52(var uParam0)
{
	if (unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		vVar0 = { unk_0xD06724447386BC29(*uParam0) };
		vVar3 = { unk_0x17D61C69BA58F815(*uParam0, 2) };
		fVar6 = unk_0x86CC98177DFF41EC(*uParam0);
		unk_0x70D5C5F31B79F27C(*uParam0);
		unk_0x86F44313DFA8F00C(*uParam0, vVar0, vVar3, (fVar6 - 3f), 0, 1, 1, 2);
		unk_0x86F44313DFA8F00C(*uParam0, vVar0, vVar3, fVar6, 1500, 0, 0, 2);
		func_53(uParam0, 0,3f);
		return 1;
	}
	return 0;
}

void func_53(var uParam0, float fParam1)
{
	if (func_74())
	{
		return;
	}
	unk_0x91F5B0244AAE6222(*uParam0, "HAND_SHAKE", fParam1);
}

void func_54(int iParam0, bool bParam1, char* sParam2, bool bParam3)
{
	if (!unk_0xEA6BC48857E0AC4C(sParam2))
	{
		func_65(iParam0, sParam2);
	}
	func_64(iParam0);
	if (unk_0x9F4FE516EAACCFC5(iParam0->f_1223))
	{
		unk_0xE3BB8E05FCEB3FBE(iParam0->f_1223, false);
		unk_0x9A8DDC7C522F5BF5(iParam0->f_1223, 0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0->f_3[iVar0] != 0)
		{
			unk_0xE17FDF9E3068281B(&(iParam0->f_3[iVar0]));
			iParam0->f_3[iVar0] = 0;
		}
		iVar0++;
	}
	func_62();
	func_61(iParam0);
	func_135(iParam0);
	if (bParam1)
	{
		func_152(0, 1);
	}
	func_55(0, 1, 1, 0, bParam3, 0);
	Global_1662007 = 0;
}

void func_55(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_60(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_59())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_58(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_60(0);
		unk_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_58(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_56(unk_0xD803B885F5E47A62())) && !func_1075(unk_0xD803B885F5E47A62(), 0)) && !func_1077()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_56(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

int func_56(int iParam0)
{
	if (func_1075(iParam0, 0))
	{
		return 1;
	}
	if (func_57())
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

bool func_57()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_58(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = 0;
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xFA2492ED90D43443() != iParam0 && iParam2)
		{
			unk_0xF3B6BD1C0DC44D29(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_59()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_60(int iParam0)
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

void func_61(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0->f_21))
	{
		unk_0xF690C84DADBB3551(&(iParam0->f_21));
	}
	if (unk_0x31609A585163CBAC(iParam0->f_41))
	{
		if (unk_0xBD307E66C0669BFC(iParam0->f_41))
		{
			unk_0x25BB71BA267FE042(iParam0->f_41);
		}
	}
	unk_0x8D17794CE3273D70("Move_m@generic_idles@std");
	unk_0x8D17794CE3273D70("Move_f@generic_idles@std");
	unk_0x8D17794CE3273D70("mp_player_intfinger");
	unk_0x8D17794CE3273D70("mp_player_intsalute");
	unk_0x8D17794CE3273D70("mp_player_introck");
	unk_0x8D17794CE3273D70("mp_player_intwank");
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_23)
	{
		if (unk_0xC844350D5D58C99A(iParam0->f_23[iVar0]))
		{
			unk_0xEBA53F35D0085654(&(iParam0->f_23[iVar0]));
		}
		iVar0++;
	}
	if (unk_0xC844350D5D58C99A(iParam0->f_1224))
	{
		unk_0xF690C84DADBB3551(&(iParam0->f_1224));
	}
}

void func_62()
{
	unk_0x8D17794CE3273D70("MP_CORONA_IDLES@FEMALE_A@BASE");
	unk_0x8D17794CE3273D70("MP_CORONA_IDLES@FEMALE_B@BASE");
	unk_0x8D17794CE3273D70("MP_CORONA_IDLES@FEMALE_C@BASE");
	unk_0x8D17794CE3273D70("MP_CORONA_IDLES@MALE_A@BASE");
	unk_0x8D17794CE3273D70("MP_CORONA_IDLES@MALE_B@BASE");
	unk_0x8D17794CE3273D70("MP_CORONA_IDLES@MALE_C@BASE");
	unk_0x8D17794CE3273D70("MP_CORONA_IDLES@MALE_D@BASE");
	unk_0x8D17794CE3273D70("MP_CORONA_IDLES@MALE_E@BASE");
	unk_0x8D17794CE3273D70("MP_CORONA_IDLES@FEMALE_A@IDLE_A");
	unk_0x8D17794CE3273D70("MP_CORONA_IDLES@MALE_A@IDLE_A");
	unk_0x8D17794CE3273D70("MP_CORONA_IDLES@MALE_B@IDLE_A");
	unk_0x8D17794CE3273D70("MP_CORONA@SINGLE_TEAM");
	unk_0x8D17794CE3273D70("MP_CORONA@TEAM_IDLES@FEMALE_A");
	unk_0x8D17794CE3273D70("MP_CORONA@TEAM_IDLES@MALE_A");
	unk_0x8D17794CE3273D70("MP_CORONA@TEAM_IDLES@MALE_B");
	unk_0x8D17794CE3273D70("MP_CORONA@TEAM_IDLES@MALE_C");
	if (func_63(Global_4456448.f_232883))
	{
		unk_0x8D17794CE3273D70("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_A@BASE");
		unk_0x8D17794CE3273D70("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_A@IDLE_A");
		unk_0x8D17794CE3273D70("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_B@BASE");
		unk_0x8D17794CE3273D70("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_B@IDLE_A");
		unk_0x8D17794CE3273D70("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_C@BASE");
		unk_0x8D17794CE3273D70("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_C@IDLE_A");
		unk_0x8D17794CE3273D70("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_D@BASE");
		unk_0x8D17794CE3273D70("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_D@IDLE_A");
		unk_0x8D17794CE3273D70("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_E@BASE");
		unk_0x8D17794CE3273D70("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_E@IDLE_A");
		unk_0x8D17794CE3273D70("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_A@BASE");
		unk_0x8D17794CE3273D70("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_A@IDLE_A");
		unk_0x8D17794CE3273D70("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_B@BASE");
		unk_0x8D17794CE3273D70("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_B@IDLE_A");
		unk_0x8D17794CE3273D70("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_C@BASE");
		unk_0x8D17794CE3273D70("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_C@IDLE_A");
	}
}

bool func_63(int iParam0)
{
	return iParam0 == 15;
}

void func_64(int iParam0)
{
	if (*iParam0 != 0)
	{
		unk_0xE17FDF9E3068281B(iParam0);
		*iParam0 = 0;
	}
	if (iParam0->f_1 != 0)
	{
		unk_0xE17FDF9E3068281B(&(iParam0->f_1));
		iParam0->f_1 = 0;
	}
	if (iParam0->f_2 != 0)
	{
		unk_0xE17FDF9E3068281B(&(iParam0->f_2));
		iParam0->f_2 = 0;
	}
}

void func_65(int iParam0, char* sParam1)
{
	if (*iParam0 != 0 && unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "CLEANUP");
		unk_0x7ACC3006A87F8B39("STRING");
		unk_0xD06AC7C87A34A6AD(sParam1);
		unk_0x779B34565F4D71B1();
		unk_0x7E60D21B163E9D56();
	}
	if (iParam0->f_1 != 0 && unk_0x83D8570832F172A7(iParam0->f_1))
	{
		unk_0x7E60C62A7CE58FC8(iParam0->f_1, "CLEANUP");
		unk_0x7ACC3006A87F8B39("STRING");
		unk_0xD06AC7C87A34A6AD(sParam1);
		unk_0x779B34565F4D71B1();
		unk_0x7E60D21B163E9D56();
	}
	if (iParam0->f_2 != 0 && unk_0x83D8570832F172A7(iParam0->f_2))
	{
		unk_0x7E60C62A7CE58FC8(iParam0->f_2, "CLEANUP");
		unk_0x7ACC3006A87F8B39("STRING");
		unk_0xD06AC7C87A34A6AD(sParam1);
		unk_0x779B34565F4D71B1();
		unk_0x7E60D21B163E9D56();
	}
}

void func_66()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2439138.f_2723[iVar0].f_2 != 0)
		{
			Global_2439138.f_2723[iVar0].f_2 = 5;
			func_67(&(Global_2439138.f_2723[iVar0].f_69), 1);
		}
		iVar0++;
	}
}

void func_67(var uParam0, int iParam1)
{
	func_68(uParam0, iParam1);
}

void func_68(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_69(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xC6DE3DEA8C15F7B8();
	}
	if ((*iParam0 != 0 && iParam0->f_1 != 0) && iParam0->f_2 != 0)
	{
		unk_0xD6158AD4034B8A41(*iParam0, iParam0->f_1, 255, 255, 255, 255);
		unk_0x6567AE843FADBA94(iParam0->f_2, 255, 255, 255, 255, 0);
	}
}

void func_70()
{
	if (unk_0xED4934AFB6EC6451("MP_race_crash"))
	{
		unk_0x9A1335ECD7BD117F("MP_race_crash");
	}
	func_73(0);
	func_72(0);
	func_71(0);
	Global_2439138.f_2717.f_2 = 0;
}

void func_71(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_2439138.f_2717.f_2), 2);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_2439138.f_2717.f_2), 2);
	}
}

void func_72(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_2439138.f_2717.f_2), 1);
	}
	else
	{
		if (unk_0xED4934AFB6EC6451("DeathFailMPDark"))
		{
			unk_0x9A1335ECD7BD117F("DeathFailMPDark");
		}
		if (unk_0xED4934AFB6EC6451("DeathFailMPIn"))
		{
			unk_0x9A1335ECD7BD117F("DeathFailMPIn");
		}
		unk_0x4AED3E7834924DC8(0);
		unk_0x0674E58A79778E99(&(Global_2439138.f_2717.f_2), 1);
	}
}

void func_73(bool bParam0)
{
	if (bParam0)
	{
		unk_0x9A1335ECD7BD117F("MP_race_crash");
		if (unk_0xED4934AFB6EC6451("CrossLine"))
		{
			unk_0x9A1335ECD7BD117F("CrossLine");
		}
		if (unk_0x6EB03BF238979740())
		{
			unk_0x82A772610883F395("DeathFailMPDark", 0, 0);
		}
		else
		{
			unk_0x82A772610883F395("DeathFailMPIn", 0, 0);
		}
		unk_0x4AED3E7834924DC8(1);
		Global_2439138.f_2717 = unk_0x2B6E0A53779D29EA();
		Global_2439138.f_2717.f_1 = unk_0x2B6E0A53779D29EA();
		unk_0x5D96D8530B3D0904(&(Global_2439138.f_2717.f_2), 0);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_2439138.f_2717.f_2), 0);
	}
}

bool func_74()
{
	return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_226020, 12);
}

void func_75(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x7E60C62A7CE58FC8(*iParam0, "ADD_REP_POINTS_AND_RANK_BAR_TO_WALL");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x3CAEA85DA607305E(iParam3);
	unk_0x3CAEA85DA607305E(iParam4);
	unk_0x3CAEA85DA607305E(iParam5);
	unk_0x3CAEA85DA607305E(iParam6);
	unk_0x3CAEA85DA607305E(iParam7);
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(iParam0->f_1, "ADD_REP_POINTS_AND_RANK_BAR_TO_WALL");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x3CAEA85DA607305E(iParam3);
	unk_0x3CAEA85DA607305E(iParam4);
	unk_0x3CAEA85DA607305E(iParam5);
	unk_0x3CAEA85DA607305E(iParam6);
	unk_0x3CAEA85DA607305E(iParam7);
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(iParam0->f_2, "ADD_REP_POINTS_AND_RANK_BAR_TO_WALL");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x3CAEA85DA607305E(iParam3);
	unk_0x3CAEA85DA607305E(iParam4);
	unk_0x3CAEA85DA607305E(iParam5);
	unk_0x3CAEA85DA607305E(iParam6);
	unk_0x3CAEA85DA607305E(iParam7);
	unk_0x7E60D21B163E9D56();
}

void func_76(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	sVar0 = func_77(iParam3);
	sVar1 = "CELEB_GAMES_WON";
	unk_0x7E60C62A7CE58FC8(*iParam0, "ADD_GAMES_WON_TO_WALL");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x7ACC3006A87F8B39(sVar1);
	unk_0xD06AC7C87A34A6AD(sVar0);
	unk_0x779B34565F4D71B1();
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(iParam0->f_1, "ADD_GAMES_WON_TO_WALL");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x7ACC3006A87F8B39(sVar1);
	unk_0xD06AC7C87A34A6AD(sVar0);
	unk_0x779B34565F4D71B1();
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(iParam0->f_2, "ADD_GAMES_WON_TO_WALL");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x7ACC3006A87F8B39(sVar1);
	unk_0xD06AC7C87A34A6AD(sVar0);
	unk_0x779B34565F4D71B1();
	unk_0x7E60D21B163E9D56();
}

var func_77(int iParam0)
{
	StringCopy(&cVar0, "", 16);
	StringIntConCat(&cVar0, iParam0, 16);
	return func_78(&cVar0);
}

var func_78(char[4] cParam0)
{
	return cParam0;
}

int func_79(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_291133[iParam0];
}

int func_80(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_291133[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_291133[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((to_float(iVar1) - to_float(iVar2)) / 2f) + to_float(iVar2));
		iVar3 = round(fVar4);
		iVar0++;
	}
	return 8000;
}

var func_81(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_82(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_82(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	uVar0 = func_83(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_83(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	if (func_123(unk_0xD803B885F5E47A62()) || func_122(unk_0xD803B885F5E47A62()))
	{
		if (Global_262145.f_9635 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9635;
		}
	}
	else if (func_119() || func_115(unk_0xD803B885F5E47A62()))
	{
		if (Global_262145.f_22774 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22774;
		}
	}
	else if (Global_262145.f_6635 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6635;
	}
	if (func_114(sParam2))
	{
	}
	if (func_113())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_112(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_111(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_108(0, &iVar1);
					break;
				
				case 3:
					func_108(1, &iVar1);
					break;
				
				case 1:
					func_104(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1686714)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_102(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_93((func_124(unk_0xD803B885F5E47A62()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x189A6F4108CDFDD6(iVar1, iParam8, iParam9);
				if (Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_2 != -1)
				{
					func_102(1165, iVar1, -1);
				}
				func_87(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_84((func_86(unk_0xD803B885F5E47A62()) + iVar1));
			}
			else
			{
				func_84((func_86(unk_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_84(int iParam0)
{
	if (func_113())
	{
		Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_5 = iParam0;
		func_85(-1804740956, iParam0);
	}
}

void func_85(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
	}
}

int func_86(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_24(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return func_746(-1804740956);
			}
			else
			{
				return Global_1590535[iParam0].f_211.f_5;
			}
		}
		else
		{
			return func_746(-1804740956);
		}
	}
	return 0;
}

void func_87(int iParam0)
{
	Var0 = { func_92(unk_0xD803B885F5E47A62()) };
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar13 = func_90(func_91(&Var0));
			if (iVar13 == 0)
			{
				func_89(&Global_1387915, iParam0);
				func_88(-1446982891, Global_1387915);
			}
			else if (iVar13 == 1)
			{
				func_89(&Global_1387916, iParam0);
				func_88(-1676857426, Global_1387916);
			}
			else if (iVar13 == 2)
			{
				func_89(&Global_1387917, iParam0);
				func_88(1280806976, Global_1387917);
			}
			else if (iVar13 == 3)
			{
				func_89(&Global_1387918, iParam0);
				func_88(-1096682281, Global_1387918);
			}
			else if (iVar13 == 4)
			{
				func_89(&Global_1387919, iParam0);
				func_88(1894078811, Global_1387919);
			}
		}
	}
}

void func_88(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case 406381289:
			Global_1387910 = iParam1;
			break;
		
		case 1669900865:
			Global_1387912 = iParam1;
			break;
		
		case 54164875:
			Global_1387912 = iParam1;
			break;
		
		case -842450336:
			Global_1387913 = iParam1;
			break;
		
		case -1576871964:
			Global_1387914 = iParam1;
			break;
		
		case -1446982891:
			Global_1387915 = iParam1;
			break;
		
		case -1676857426:
			Global_1387916 = iParam1;
			break;
		
		case 1280806976:
			Global_1387917 = iParam1;
			break;
		
		case -1096682281:
			Global_1387918 = iParam1;
			break;
		
		case 1894078811:
			Global_1387919 = iParam1;
			break;
		
		case -1566025259:
			Global_1387920 = iParam1;
			break;
		
		case -621080327:
			Global_1387921 = iParam1;
			break;
		
		case 1021002722:
			Global_1387922 = iParam1;
			break;
		
		case -1670771646:
			Global_1387923 = iParam1;
			break;
		
		case -1992420464:
			Global_1387924 = iParam1;
			break;
		
		case -386175531:
			Global_1387925 = iParam1;
			break;
		
		case -203536263:
			Global_1387926 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_89(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_90(int iParam0)
{
	if (iParam0 == Global_1387910)
	{
		return 0;
	}
	else if (iParam0 == Global_1387911)
	{
		return 1;
	}
	else if (iParam0 == Global_1387912)
	{
		return 2;
	}
	else if (iParam0 == Global_1387913)
	{
		return 3;
	}
	else if (iParam0 == Global_1387914)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_91(var uParam0)
{
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(uParam0))
		{
			return Global_2460605;
		}
	}
	return Global_2460605;
}

struct<13> func_92(int iParam0)
{
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

void func_93(int iParam0, int iParam1, int iParam2)
{
	if (func_113())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388060[func_100(-1)])
				{
					unk_0x189A6F4108CDFDD6(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388060[func_100(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x189A6F4108CDFDD6(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x189A6F4108CDFDD6(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_99(unk_0xD803B885F5E47A62()))
		{
			Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_1 = iParam0;
			Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_6 = func_98(iParam0, 1);
		}
		func_97(639, iParam0, -1, 1);
		func_747(640, func_98(iParam0, 1), -1, 1, 0);
		Global_1388060[func_100(-1)] = iParam0;
		func_94(-1109644434, 7, 0);
	}
}

void func_94(int iParam0, int iParam1, int iParam2)
{
	if (func_96(iParam1, iParam2))
	{
		iVar0 = func_95();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_95()
{
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2460557[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_96(int iParam0, var uParam1)
{
	if (Global_1312865)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312877) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_97(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = Global_2548434[iParam0][func_100(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_100(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_100(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_100(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_100(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_100(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_100(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_100(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_100(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_100(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_100(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_100(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_100(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_100(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_100(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_100(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_100(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_100(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_100(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_100(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_100(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_100(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_100(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_100(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_100(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0][func_100(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1][func_100(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2][func_100(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3][func_100(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_100(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_100(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_100(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_100(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_100(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_100(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0][func_100(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1][func_100(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2][func_100(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3][func_100(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4][func_100(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0][func_100(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1][func_100(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2][func_100(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3][func_100(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4][func_100(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0][func_100(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1][func_100(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2][func_100(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3][func_100(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4][func_100(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5][func_100(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4][func_100(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_100(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_100(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_100(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_100(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_100(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_100(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_100(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6][func_100(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5][func_100(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7][func_100(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6][func_100(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8][func_100(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7][func_100(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9][func_100(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8][func_100(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10][func_100(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9][func_100(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11][func_100(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10][func_100(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12][func_100(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11][func_100(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13][func_100(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12][func_100(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14][func_100(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13][func_100(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15][func_100(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14][func_100(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16][func_100(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15][func_100(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17][func_100(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16][func_100(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17][func_100(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18][func_100(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19][func_100(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20][func_100(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_100(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_100(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_100(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_100(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_100(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_100(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_100(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_100(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_100(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_100(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_100(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_100(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_100(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_100(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21][func_100(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23][func_100(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22][func_100(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24][func_100(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23][func_100(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_98(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_80(iParam0, 0);
}

int func_99(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2439138.f_1, iParam0);
	}
	return 1;
}

int func_100(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_101();
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

int func_101()
{
	return Global_1312745;
}

void func_102(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1038(iParam0, func_100(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_103(iParam0))
	{
		func_747(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_97(iParam0, iVar0, iParam2, 1);
	}
}

int func_103(int iParam0)
{
	if (Global_1387909)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8726:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8728:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8730:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8732:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8731:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 10016:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
			case 8534:
			case 8975:
			case 8977:
			case 8978:
			case 8980:
				return 1;
				break;
			}
	}
	return 0;
}

void func_104(int iParam0)
{
	iVar1 = unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62());
	iVar0 = 0;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		iVar4 = unk_0xF4FB3A22FC4991C8(iVar0);
		if (unk_0x81A93C8315C28F58(iVar4))
		{
			iVar5 = unk_0x4B2BFE4A3BC248ED(iVar4);
			if (unk_0x08067D4957B73C02(iVar5) != -1)
			{
				if (unk_0x08067D4957B73C02(iVar5) == iVar1 || func_107(unk_0x08067D4957B73C02(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xD803B885F5E47A62())
					{
						if (func_106(unk_0xD803B885F5E47A62(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = round((func_105(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_105(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_105(int iParam0, int iParam1)
{
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_106(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_92(iParam0) };
		Global_2513231 = { func_92(iParam1) };
		if (unk_0xF2EC2A39FF9E838D(&Global_2513218))
		{
			if (unk_0xF2EC2A39FF9E838D(&Global_2513231))
			{
				unk_0xD9DA83C40D038174(&Global_2513148, 35, &Global_2513218);
				unk_0xD9DA83C40D038174(&Global_2513183, 35, &Global_2513231);
				if (Global_2513148 == Global_2513183)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_107(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 0);
				
				case 1:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 1);
				
				case 2:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 2);
				
				case 3:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 4);
				
				case 1:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 5);
				
				case 2:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 6);
				
				case 3:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 8);
				
				case 1:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 9);
				
				case 2:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 10);
				
				case 3:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 12);
				
				case 1:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 13);
				
				case 2:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 14);
				
				case 3:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_108(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x54EABC0DD106045B())
		{
			iVar3 = iVar0;
			if (unk_0x81A93C8315C28F58(iVar3))
			{
				iVar4 = unk_0x4B2BFE4A3BC248ED(iVar3);
				if (func_24(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_106(unk_0xD803B885F5E47A62(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_24(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xD803B885F5E47A62())
				{
					if (func_109(unk_0xD803B885F5E47A62(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_106(unk_0xD803B885F5E47A62(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = round((func_105(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_105(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_109(int iParam0, int iParam1)
{
	return vdist(func_110(iParam0), func_110(iParam1));
	return 0f;
}

Vector3 func_110(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0);
}

int func_111(int iParam0)
{
	if (unk_0xA0501A3E65437842() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_105(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_112(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x51D1D19912234EA0(iParam0) > func_124(unk_0xD803B885F5E47A62()))
		{
			iParam0 = -func_124(unk_0xD803B885F5E47A62());
		}
	}
	if (func_79(8000, 0, 0) > 0)
	{
		if (func_79(8000, 0, 0) < (iParam0 + func_124(unk_0xD803B885F5E47A62())))
		{
			iParam0 = (func_79(8000, 0, 0) - func_124(unk_0xD803B885F5E47A62()));
		}
	}
	return iParam0;
}

int func_113()
{
	return 1;
}

int func_114(char* sParam0)
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

int func_115(int iParam0)
{
	return func_116(func_117(iParam0));
}

int func_116(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_117(int iParam0)
{
	if (func_118(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_118(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_119()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_121();
	}
	return func_120(Global_4456448.f_194990);
}

int func_120(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5008[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_121()
{
	return Global_2450632.f_17;
}

bool func_122(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 2;
}

bool func_123(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 7;
}

int func_124(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_1388060[func_100(-1)];
			}
			else if (func_99(iParam0))
			{
				return Global_1590535[iParam0].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_100(-1)];
	}
	return 0;
}

void func_125(bool bParam0)
{
	if (!bParam0)
	{
		func_127(0);
	}
	func_66();
	func_126();
}

void func_126()
{
	Global_73828 = 1;
}

void func_127(int iParam0)
{
	if (func_131())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_130())
		{
			func_128(1, 1);
		}
		else
		{
			func_128(0, 0);
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
	if (!func_59())
	{
		Global_19486.f_1 = 3;
	}
}

void func_128(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_129(0))
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

int func_129(int iParam0)
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

bool func_130()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_131()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

int func_132(int iParam0, var uParam1, var uParam2, bool bParam3, int iParam4)
{
	if (func_24(unk_0xD803B885F5E47A62(), 1, 1))
	{
		bVar23 = true;
		if (bParam3)
		{
			if (iParam0->f_436 == 0)
			{
				if (unk_0xC379FAA7E9DFE7A4(unk_0x16F2683693E537C9(), 0))
				{
					iParam0->f_421 = unk_0x09AC81E49EA267F7(0, 3);
				}
				else
				{
					iParam0->f_421 = unk_0x09AC81E49EA267F7(0, 6);
				}
			}
			if (iParam0->f_420 < 6)
			{
				if (iParam0->f_421 == 0)
				{
					vVar14 = { 1,3494f, 0,8708f, 0,3814f };
					vVar8 = { -0,305f, 3,404f, 1,873f };
					vVar11 = { 0,3318f, 0,6829f, 0,782f };
					fVar17 = 48,872f;
				}
				else if (iParam0->f_421 == 1)
				{
					vVar14 = { 1,3494f, 0,8708f, 0,3814f };
					vVar8 = { -0,3027f, 1,9371f, 0,8861f };
					vVar11 = { 0,7526f, -0,7846f, 0,1942f };
					fVar17 = 49,9607f;
				}
				else if (iParam0->f_421 == 2)
				{
					vVar14 = { 1,3494f, 0,8708f, 0,3814f };
					vVar8 = { -0,3685f, 5,6646f, 3,8144f };
					vVar11 = { 0,3407f, 3,2028f, 2,2534f };
					fVar17 = 49,9607f;
				}
				else if (iParam0->f_421 == 3)
				{
					vVar14 = { 1,3494f, 0,8708f, 0,3814f };
					vVar8 = { -0,551f, 1,5299f, 0,0099f };
					vVar11 = { 1,1136f, -0,8876f, 0,6298f };
					fVar17 = 40,5195f;
				}
				else if (iParam0->f_421 == 4)
				{
					vVar14 = { -0,6761f, 2,3219f, 0,3315f };
					vVar8 = { 0,1252f, 1,692f, 0,0052f };
					vVar11 = { -0,9193f, -1,0597f, 0,5854f };
					fVar17 = 40,5195f;
				}
				else if (iParam0->f_421 == 5)
				{
					vVar14 = { 1,3494f, 0,8708f, 0,3814f };
					vVar8 = { -0,098f, 1,4671f, 0,0645f };
					vVar11 = { 0,3334f, -1,4352f, 0,6893f };
					fVar17 = 40,5195f;
				}
			}
			else
			{
				*uParam2 = 0;
				iParam0->f_436 = 0;
				iParam0->f_420 = 0;
				return 1;
			}
		}
		else
		{
			if (iParam0->f_436 == 0)
			{
				if (unk_0xC379FAA7E9DFE7A4(unk_0x16F2683693E537C9(), 0))
				{
					iParam0->f_421 = unk_0x09AC81E49EA267F7(0, 3);
				}
				else
				{
					iParam0->f_421 = unk_0x09AC81E49EA267F7(0, 6);
				}
			}
			if (!func_806(unk_0x16F2683693E537C9()))
			{
				fVar18 = -0,09f;
			}
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				iVar24 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
				iVar25 = unk_0x134B62B726CEC8E6(iVar24);
				if (unk_0xAD09C9A4B56FA133(iVar25))
				{
					bVar23 = false;
					bVar21 = true;
				}
			}
			else
			{
				bVar23 = false;
			}
			if (bVar23 && iParam4)
			{
				if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
				{
					iParam0->f_421 = unk_0x09AC81E49EA267F7(0, 7);
				}
				else
				{
					iParam0->f_421 = unk_0x09AC81E49EA267F7(0, 6);
				}
			}
			if (!func_133(iParam0, fVar19, fVar18, bVar21, (iParam4 && bVar23), &vVar14, &vVar8, &vVar11, &fVar17, &bVar22, &bVar20))
			{
				*uParam2 = 0;
				iParam0->f_436 = 0;
				iParam0->f_420 = 0;
				return 1;
			}
			if (bVar23 && iParam4)
			{
				bVar23 = false;
			}
		}
		vVar26 = { unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), vVar8) };
		vVar29 = { vVar26 };
		vVar32 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
		vVar35 = { unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9()) };
		fVar38 = vmag(vVar35);
		if (unk_0x755FF954DAE327E1(fVar38) > 0,5f)
		{
			vVar39 = { vVar35 / Vector(fVar38, fVar38, fVar38) };
			vVar29 = { vVar26 + vVar39 };
		}
		if (iParam0->f_436 == 0)
		{
			iVar42 = 343;
			iParam0->f_436 = unk_0xD7C553FB028E03E7(vVar29, vVar32, 0,25f, iVar42, unk_0x16F2683693E537C9(), 7);
		}
		else
		{
			iVar43 = unk_0x1EC301670B54C6DE(iParam0->f_436, &iVar0, &uVar1, &uVar4, &uVar7);
			switch (iVar43)
			{
				case 2:
					iParam0->f_436 = 0;
					if (iVar0 > 0)
					{
						iParam0->f_420++;
					}
					else if (((((!bVar23 && !unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) && !unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) && !unk_0x70EED0761B82965E(unk_0x16F2683693E537C9())) && !unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) && !unk_0x39E5E51C6E21A69B(unk_0x16F2683693E537C9()))
					{
						unk_0xE82754C349C7B581(vVar32, &fVar44, 0, 0);
						unk_0xE82754C349C7B581(vVar26, &fVar45, 0, 0);
						if (unk_0x755FF954DAE327E1((fVar44 - fVar45)) > 5f)
						{
							iParam0->f_420++;
						}
						else
						{
							if (!unk_0x9F4FE516EAACCFC5(*uParam1))
							{
								*uParam1 = unk_0x92B061D59B9B540A(26379945, 1);
							}
							unk_0x70D5C5F31B79F27C(*uParam1);
							if (!func_56(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
							{
								unk_0xC5940439E4EB9A33(*uParam1, unk_0x16F2683693E537C9(), vVar8, 1);
							}
							unk_0x1305278186D1C53E(*uParam1, unk_0x16F2683693E537C9(), vVar11, 1);
							unk_0x5818C8D5303DCCF8(*uParam1, fVar17);
							func_53(uParam1, 0,3f);
							unk_0xDC3CC6D1845B0567(*uParam1, 0,15f);
							if (!bVar22)
							{
								if (bVar20)
								{
									unk_0xDBE4EC9C88839074(unk_0x16F2683693E537C9(), unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), vVar14), 20000, 2048, 2);
								}
								else
								{
									unk_0xDBE4EC9C88839074(unk_0x16F2683693E537C9(), unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), vVar14), 20000, 10240, 2);
								}
							}
							*uParam2 = 1;
							iParam0->f_420 = 0;
							return 1;
						}
					}
					else
					{
						iParam0->f_420++;
					}
					break;
				
				case 0:
					iParam0->f_436 = 0;
					iParam0->f_420++;
					break;
				}
		}
	}
	else
	{
		*uParam2 = 0;
		iParam0->f_420 = 0;
		return 1;
	}
	return 0;
}

int func_133(var uParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, var uParam7, float fParam8, var uParam9, var uParam10)
{
	if (bParam3)
	{
		if (uParam0->f_420 < 6)
		{
			if (uParam0->f_421 == 0)
			{
				*uParam6 = { 0,3792f, 1,6661f, 0,253f };
				*uParam7 = { -0,1166f, -1,2463f, 0,7746f };
				*fParam8 = 34,0457f;
				return 1;
			}
			else if (uParam0->f_421 == 1)
			{
				*uParam6 = { 0,8206f, 2,4757f, -0,14f };
				*uParam7 = { 0,0702f, -0,392f, 0,3218f };
				*fParam8 = 34,0457f;
				return 1;
			}
			else if (uParam0->f_421 == 2)
			{
				*uParam6 = { -0,5169f, 2,6701f, 0,1763f };
				*uParam7 = { -0,1689f, -0,3063f, 0,3164f };
				*fParam8 = 34,0457f;
				return 1;
			}
			else if (uParam0->f_421 == 3)
			{
				*uParam6 = { -1,7521f, 1,9222f, 0,2656f };
				*uParam7 = { 0,3639f, -0,2033f, 0,2015f };
				*fParam8 = 34,0457f;
				return 1;
			}
			else if (uParam0->f_421 == 4)
			{
				*uParam6 = { -1,1718f, 1,6414f, 0,7172f };
				*uParam7 = { 1,3122f, 0,1011f, 0,0411f };
				*fParam8 = 32,6085f;
				return 1;
			}
			else if (uParam0->f_421 == 5)
			{
				*uParam6 = { -0,0185f, 1,7642f, 0,4961f };
				*uParam7 = { 0,6648f, -1,1468f, 0,2534f };
				*fParam8 = 35,6186f;
				return 1;
			}
		}
	}
	else if (bParam4)
	{
		if (uParam0->f_420 < 6)
		{
			if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()) || func_134(unk_0x16F2683693E537C9()))
			{
				switch ((uParam0->f_421 % 7))
				{
					case 0:
						*uParam6 = { -0,45f, 2,5f, 0,35f };
						*uParam7 = { 0,3f, 0f, 0,45f };
						*fParam8 = 26f;
						break;
					
					case 1:
						*uParam6 = { 1,1f, 2,5f, 0,05f };
						*uParam7 = { -0,3f, 0f, 0,5f };
						*fParam8 = 26f;
						break;
					
					case 2:
						*uParam6 = { -1,45f, 2,15f, 0,05f };
						*uParam7 = { 0,5f, 0f, 0,5f };
						*fParam8 = 26f;
						break;
					
					case 3:
						*uParam6 = { -0,175f, 1,1f, 0,788f };
						*uParam7 = { 0,063f, 0f, 0,466f };
						*fParam8 = 37,8f;
						break;
					
					case 4:
						*uParam6 = { 1,6f, 1,338f, 0,688f };
						*uParam7 = { 0,025f, 0f, 0,416f };
						*fParam8 = 26f;
						break;
					
					case 5:
						*uParam6 = { -1,013f, 0,726f, 0,813f };
						*uParam7 = { -0,05f, 0f, 0,441f };
						*fParam8 = 37,8f;
						break;
					
					case 6:
						*uParam6 = { 1,038f, 1,376f, 0,826f };
						*uParam7 = { -0,05f, 0f, 0,466f };
						*fParam8 = 26f;
						break;
				}
			}
			else
			{
				switch ((uParam0->f_421 % 6))
				{
					case 0:
						*uParam6 = { -0,45f, 2,5f, 0,35f };
						*uParam7 = { 0,3f, 0f, 0,263f };
						*fParam8 = 26f;
						break;
					
					case 1:
						*uParam6 = { 1,1f, 2,5f, 0,05f };
						*uParam7 = { -0,3f, 0f, 0,375f };
						*fParam8 = 26f;
						break;
					
					case 2:
						*uParam6 = { -1,45f, 2,15f, 0,05f };
						*uParam7 = { 0,5f, 0f, 0,375f };
						*fParam8 = 26f;
						break;
					
					case 3:
						*uParam6 = { 0,388f, 2,489f, 0,4f };
						*uParam7 = { -0,287f, 0f, 0,304f };
						*fParam8 = 26f;
						break;
					
					case 4:
						*uParam6 = { 0,388f, 2,177f, -0,575f };
						*uParam7 = { -0,237f, 0f, 0,617f };
						*fParam8 = 26f;
						break;
					
					case 5:
						*uParam6 = { -0,575f, 1,901f, -0,112f };
						*uParam7 = { 0,275f, 0f, 0,516f };
						*fParam8 = 26f;
						break;
					}
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (unk_0xC379FAA7E9DFE7A4(unk_0x16F2683693E537C9(), 0))
	{
		*uParam9 = 1;
		if (unk_0xD997DD51E6A0DBE5(unk_0x16F2683693E537C9()))
		{
			if (uParam0->f_420 < 6)
			{
				if (uParam0->f_421 == 0)
				{
					*uParam6 = { -0,5356f, 1,4423f, 0,3999f };
					*uParam7 = { 0,9181f, -1,1788f, 0,5275f };
					*fParam8 = 29,2736f;
					return 1;
				}
				else if (uParam0->f_421 == 1)
				{
					*uParam6 = { 0,0181f, 1,4527f, 0,4043f };
					*uParam7 = { -0,1861f, -1,5314f, 0,6351f };
					*fParam8 = 29,2736f;
					return 1;
				}
				else if (uParam0->f_421 == 2)
				{
					*uParam6 = { -0,5997f, 1,0214f, 0,417f };
					*uParam7 = { 1,4133f, -1,1792f, 0,7419f };
					*fParam8 = 29,2736f;
					return 1;
				}
			}
			else
			{
				return 0;
			}
		}
		else if (uParam0->f_420 < 6)
		{
			if (uParam0->f_421 > 2)
			{
				uParam0->f_421 = unk_0x09AC81E49EA267F7(0, 3);
			}
			if (uParam0->f_421 == 0)
			{
				*uParam6 = { -0,5893f, 1,4073f, -0,09f };
				*uParam7 = { 0,8156f, -1,2407f, -0,2103f };
				*fParam8 = 31,7183f;
				return 1;
			}
			else if (uParam0->f_421 == 1)
			{
				*uParam6 = { -0,003f, 1,4062f, -0,096f };
				*uParam7 = { -0,5691f, -1,5399f, -0,1137f };
				*fParam8 = 31,7183f;
				return 1;
			}
			else if (uParam0->f_421 == 2)
			{
				*uParam6 = { -0,6984f, 1,1364f, -0,0971f };
				*uParam7 = { 1,2011f, -1,1855f, -0,1149f };
				*fParam8 = 31,7183f;
				return 1;
			}
		}
		else
		{
			return 0;
		}
		if (!unk_0x182C501E11FA2132(unk_0x16F2683693E537C9()))
		{
			*uParam6 = (*uParam6 * -1f);
			*uParam7 = (*uParam7 * -1f);
		}
	}
	else if (uParam0->f_420 < 6)
	{
		if (uParam0->f_421 == 0)
		{
			*uParam5 = { 1,3494f, 0,8708f, 0,3814f };
			*uParam6 = { 0,6428f, (1,0178f + fParam1), (0,0411f + fParam2) };
			*uParam7 = { -0,3699f, (-1,5251f + fParam1), (1,2691f + fParam2) };
			*fParam8 = 34,3832f;
			return 1;
		}
		else if (uParam0->f_421 == 1)
		{
			*uParam5 = { 0,2657f, 1,3743f, 0,364f };
			*uParam5 = { *uParam5 / FtoV(vmag(*uParam5)) * Vector(5f, 5f, 5f) };
			*uParam6 = { 0,6768f, (0,9824f + fParam1), (0,1864f + fParam2) };
			*uParam7 = { -1,3043f, (-1,0657f + fParam1), (1,1243f + fParam2) };
			*fParam8 = 34,3832f;
			*uParam10 = 1;
			return 1;
		}
		else if (uParam0->f_421 == 2)
		{
			*uParam5 = { 0,5182f, 1,1454f, 0,4312f };
			*uParam6 = { 0,2419f, (1,1082f + fParam1), (0,5226f + fParam2) };
			*uParam7 = { 0,1327f, (-1,8846f + fParam1), (0,6999f + fParam2) };
			*fParam8 = 34,3832f;
			return 1;
		}
		else if (uParam0->f_421 == 3)
		{
			*uParam5 = { 0,4529f, 1,0868f, 0,365f };
			*uParam5 = { *uParam5 / FtoV(vmag(*uParam5)) * Vector(5f, 5f, 5f) };
			*uParam6 = { 0,6216f, (0,9493f + fParam1), (0,4129f + fParam2) };
			*uParam7 = { -1,4273f, (-1,1768f + fParam1), (0,9439f + fParam2) };
			*fParam8 = 34,3832f;
			*uParam10 = 1;
			return 1;
		}
		else if (uParam0->f_421 == 4)
		{
			*uParam5 = { 1,3811f, 1,7491f, 0,296f };
			*uParam5 = { *uParam5 / FtoV(vmag(*uParam5)) * Vector(5f, 5f, 5f) };
			*uParam6 = { 1,7091f, (1,1087f + fParam1), (0,3014f + fParam2) };
			*uParam7 = { -1,0311f, (-0,1093f + fParam1), (0,3918f + fParam2) };
			*fParam8 = 34,3832f;
			*uParam10 = 1;
			return 1;
		}
		else if (uParam0->f_421 == 5)
		{
			*uParam5 = { 1,3494f, 0,8708f, 0,3814f };
			*uParam6 = { 0,7036f, (1,7661f + fParam1), (0,2981f + fParam2) };
			*uParam7 = { 0,2668f, (-1,2009f + fParam1), (0,377f + fParam2) };
			*fParam8 = 34,3832f;
			return 1;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_134(int iParam0)
{
	if (unk_0xEB6A8945D1AC98A1(iParam0) || !unk_0x405E212DDE472467(iParam0, 0))
	{
		return 0;
	}
	iVar0 = unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(iParam0, 0));
	if (unk_0x83496B932152D4D4(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_135(int iParam0)
{
	iParam0->f_435 = 0;
	iParam0->f_418 = 0;
	iParam0->f_419 = 0;
	iParam0->f_436 = 0;
	iParam0->f_425 = 0;
	iParam0->f_426 = 0;
	iParam0->f_1208 = 0;
	func_155(&(iParam0->f_429));
	func_155(&(iParam0->f_431));
	if (unk_0xC844350D5D58C99A(iParam0->f_20))
	{
		unk_0xEBA53F35D0085654(&(iParam0->f_20));
	}
}

void func_136(int iParam0)
{
	iParam0->f_452 = 0;
	Global_1312798 = 0;
	func_155(&(iParam0->f_453));
	if (unk_0xED4934AFB6EC6451("MP_Celeb_Preload_Fade"))
	{
		unk_0x9A1335ECD7BD117F("MP_Celeb_Preload_Fade");
	}
}

void func_137(int iParam0, char* sParam1)
{
	unk_0x7E60C62A7CE58FC8(*iParam0, "SHOW_STAT_WALL");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(iParam0->f_1, "SHOW_STAT_WALL");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(iParam0->f_2, "SHOW_STAT_WALL");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	unk_0x7E60D21B163E9D56();
}

void func_138(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	if (func_121())
	{
		iParam3 = 1;
	}
	unk_0x7E60C62A7CE58FC8(*iParam0, "ADD_BACKGROUND_TO_WALL");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	if (iParam2 > -1)
	{
		unk_0x3CAEA85DA607305E(iParam2);
	}
	else
	{
		unk_0x3CAEA85DA607305E(75);
	}
	unk_0x3CAEA85DA607305E(iParam3);
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(iParam0->f_1, "ADD_BACKGROUND_TO_WALL");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	if (iParam2 > -1)
	{
		unk_0x3CAEA85DA607305E(iParam2);
	}
	else
	{
		unk_0x3CAEA85DA607305E(75);
	}
	unk_0x3CAEA85DA607305E(iParam3);
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(iParam0->f_2, "ADD_BACKGROUND_TO_WALL");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	if (iParam2 > -1)
	{
		unk_0x3CAEA85DA607305E(iParam2);
	}
	else
	{
		unk_0x3CAEA85DA607305E(75);
	}
	unk_0x3CAEA85DA607305E(iParam3);
	unk_0x7E60D21B163E9D56();
}

void func_139(int iParam0, char* sParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (iParam2 == 0)
	{
		if (bParam9)
		{
			sVar0 = "CELEB_FINCOMP";
		}
		else if (bParam8)
		{
			sVar0 = "CELEB_WINNERS";
		}
		else
		{
			sVar0 = "CELEB_WINNER";
		}
	}
	else if (iParam2 == 1)
	{
		sVar0 = "CELEB_LOSER";
	}
	else if (iParam2 == 3)
	{
		sVar0 = "CELEB_PASSED";
	}
	else if (iParam2 == 4)
	{
		sVar0 = "CELEB_FAILED";
	}
	else
	{
		sVar0 = "CELEB_DRAW";
		sParam3 = "";
		sParam4 = "";
	}
	if (!func_141() || !func_143(unk_0xD803B885F5E47A62()))
	{
		sParam4 = "";
	}
	unk_0x7E60C62A7CE58FC8(*iParam0, "ADD_WINNER_TO_WALL");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	if (!bParam9)
	{
		func_140(sVar0);
	}
	else
	{
		unk_0x7ACC3006A87F8B39(sVar0);
		unk_0xD06AC7C87A34A6AD(&(Global_2451426.f_3473.f_60));
		unk_0x779B34565F4D71B1();
	}
	func_140(sParam3);
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam4);
	unk_0x779B34565F4D71B1();
	unk_0x3CAEA85DA607305E(iParam6);
	unk_0x1200CC973A2399C8(bParam7);
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam5);
	unk_0x779B34565F4D71B1();
	if (bParam10)
	{
		unk_0x1200CC973A2399C8(true);
	}
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(iParam0->f_1, "ADD_WINNER_TO_WALL");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	if (!bParam9)
	{
		func_140(sVar0);
	}
	else
	{
		unk_0x7ACC3006A87F8B39(sVar0);
		unk_0xD06AC7C87A34A6AD(&(Global_2451426.f_3473.f_60));
		unk_0x779B34565F4D71B1();
	}
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam3);
	unk_0x779B34565F4D71B1();
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam4);
	unk_0x779B34565F4D71B1();
	unk_0x3CAEA85DA607305E(iParam6);
	unk_0x1200CC973A2399C8(bParam7);
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam5);
	unk_0x779B34565F4D71B1();
	if (bParam10)
	{
		unk_0x1200CC973A2399C8(true);
	}
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(iParam0->f_2, "ADD_WINNER_TO_WALL");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	if (!bParam9)
	{
		func_140(sVar0);
	}
	else
	{
		unk_0x7ACC3006A87F8B39(sVar0);
		unk_0xD06AC7C87A34A6AD(&(Global_2451426.f_3473.f_60));
		unk_0x779B34565F4D71B1();
	}
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam3);
	unk_0x779B34565F4D71B1();
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam4);
	unk_0x779B34565F4D71B1();
	unk_0x3CAEA85DA607305E(iParam6);
	unk_0x1200CC973A2399C8(bParam7);
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam5);
	unk_0x779B34565F4D71B1();
	if (bParam10)
	{
		unk_0x1200CC973A2399C8(true);
	}
	unk_0x7E60D21B163E9D56();
}

void func_140(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

int func_141()
{
	if (unk_0xEB6436A75F06F09F() == 0)
	{
		return 0;
	}
	if (unk_0xBA301E03A078FA59())
	{
		if (unk_0xB5E18209CA3E7DE6(1, -1))
		{
			if (unk_0x8BB6DE13A9F3105E())
			{
				return 1;
			}
		}
	}
	if (unk_0x33A494591F2C1975())
	{
		if (unk_0x4DEB7B48DD0AABA4(1))
		{
			if (unk_0x8BB6DE13A9F3105E())
			{
				return 1;
			}
		}
	}
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		if (unk_0x05449BDA851F5199(0, -3, 1))
		{
			return 1;
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xB5E18209CA3E7DE6(0, -1))
		{
			if (unk_0x8BB6DE13A9F3105E())
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_142(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)
{
	if (bParam3)
	{
		sParam2 = "HUD_COLOUR_BLACK";
	}
	if (func_121())
	{
		if (Global_2451426.f_3473)
		{
			sParam2 = "HUD_COLOUR_TECH_GREEN_VERY_DARK";
		}
	}
	func_65(iParam0, sParam1);
	unk_0x9ECFFAD42511CB5A(10);
	if (*iParam0 != 0 && unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "CREATE_STAT_WALL");
		unk_0x7ACC3006A87F8B39("STRING");
		unk_0xD06AC7C87A34A6AD(sParam1);
		unk_0x779B34565F4D71B1();
		unk_0x7ACC3006A87F8B39("STRING");
		unk_0xD06AC7C87A34A6AD(sParam2);
		unk_0x779B34565F4D71B1();
		if (iParam4 > 0 && iParam4 <= 3)
		{
			unk_0x3CAEA85DA607305E(iParam4);
		}
		unk_0x7E60D21B163E9D56();
	}
	if (iParam0->f_1 != 0 && unk_0x83D8570832F172A7(iParam0->f_1))
	{
		unk_0x7E60C62A7CE58FC8(iParam0->f_1, "CREATE_STAT_WALL");
		unk_0x7ACC3006A87F8B39("STRING");
		unk_0xD06AC7C87A34A6AD(sParam1);
		unk_0x779B34565F4D71B1();
		unk_0x7ACC3006A87F8B39("STRING");
		unk_0xD06AC7C87A34A6AD(sParam2);
		unk_0x779B34565F4D71B1();
		if (iParam4 > 0 && iParam4 <= 3)
		{
			unk_0x3CAEA85DA607305E(iParam4);
		}
		unk_0x7E60D21B163E9D56();
	}
	if (iParam0->f_2 != 0 && unk_0x83D8570832F172A7(iParam0->f_2))
	{
		unk_0x7E60C62A7CE58FC8(iParam0->f_2, "CREATE_STAT_WALL");
		unk_0x7ACC3006A87F8B39("STRING");
		unk_0xD06AC7C87A34A6AD(sParam1);
		unk_0x779B34565F4D71B1();
		unk_0x7ACC3006A87F8B39("STRING");
		unk_0xD06AC7C87A34A6AD(sParam2);
		unk_0x779B34565F4D71B1();
		if (iParam4 > 0 && iParam4 <= 3)
		{
			unk_0x3CAEA85DA607305E(iParam4);
		}
		unk_0x7E60D21B163E9D56();
	}
}

int func_143(int iParam0)
{
	if (unk_0xEB6436A75F06F09F() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != unk_0xD803B885F5E47A62())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
	{
		if (unk_0xB5E18209CA3E7DE6(0, iVar0))
		{
			if (unk_0x8BB6DE13A9F3105E())
			{
				return 1;
			}
		}
	}
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		if (iParam0 == unk_0xD803B885F5E47A62())
		{
			if (unk_0xFB7A8F661F94A3AE(0, -3, 1) || unk_0xB5E18209CA3E7DE6(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_92(iParam0) };
			if (unk_0xB5E18209CA3E7DE6(0, -1) || (unk_0xB5E18209CA3E7DE6(1, -1) && unk_0x04A104F429E6CBB0(&Var1)))
			{
				return 1;
			}
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xB5E18209CA3E7DE6(0, iVar0))
		{
			if (unk_0x8BB6DE13A9F3105E())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_144()
{
	if (unk_0xBA301E03A078FA59() && unk_0x26F0988F7719D17A() == 3)
	{
		return 1;
	}
	if (unk_0xA3F916BCE430ED26() && unk_0x26F0988F7719D17A() == 3)
	{
		return 1;
	}
	if (unk_0x33A494591F2C1975() && unk_0x9AE561F9BC3F06D8() == 0)
	{
		return 1;
	}
	if (unk_0xDC30EF462887322E() && unk_0x9AE561F9BC3F06D8() == 0)
	{
		return 1;
	}
	if (unk_0x0EFF6B4415DAF4A1() && unk_0x8BB6DE13A9F3105E())
	{
		return 1;
	}
	return 0;
}

struct<16> func_145(int iParam0)
{
	if (func_24(iParam0, 0, 1))
	{
		Var16 = { func_92(iParam0) };
		if (func_148(&Var16))
		{
			Var29 = { func_146(iParam0) };
			Var0 = { Var29.f_1 };
		}
	}
	return Var0;
}

struct<35> func_146(int iParam0)
{
	if (func_147(iParam0))
	{
		return Global_1312909[unk_0xD803B885F5E47A62()];
	}
	Var0 = { func_92(iParam0) };
	unk_0xD9DA83C40D038174(&Var13, 35, &Var0);
	return Var13;
}

int func_147(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return 1;
	}
	return 0;
}

int func_148(var uParam0)
{
	if (unk_0x1963B11DE70153E0())
	{
		if (unk_0x080E9D045AEE5605() && unk_0xF2EC2A39FF9E838D(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_149(var uParam0)
{
	if (!uParam0->f_1205)
	{
		uParam0->f_1205 = 1;
	}
}

int func_150(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar0 = 255;
		iVar1 = 255;
		iVar2 = 255;
	}
	uParam0->f_419 = (uParam0->f_419 - 30);
	if (uParam0->f_419 < 0)
	{
		uParam0->f_419 = 0;
	}
	if (uParam0->f_419 != 0)
	{
		unk_0xD9ACBBA59FD5A09E(7);
		unk_0xC1032CAC14DE468A(0,5f, 0,5f, 3f, 3f, iVar0, iVar1, iVar2, uParam0->f_419, 0);
	}
	if (uParam0->f_419 <= 0)
	{
		return 1;
	}
	return 0;
}

void func_151(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		unk_0xC6DE3DEA8C15F7B8();
	}
	if (unk_0x15B7983D0EB30E49())
	{
		if (unk_0xF227AB5FFC5E7C36("CELEBRATION_WINNER"))
		{
			if (!unk_0xEB6A8945D1AC98A1(*uParam1))
			{
				unk_0x58DD5BF02A9DAFF7("CELEBRATION_WINNER", *uParam1, 0, 0f, 0f, 0f);
				unk_0x58DD5BF02A9DAFF7("CELEBRATION_WINNER", *uParam1, 1, 0f, 0f, 0f);
				unk_0x58DD5BF02A9DAFF7("CELEBRATION_WINNER", *uParam1, 2, 0f, 0f, 0f);
			}
			unk_0xD9ACBBA59FD5A09E(1);
			unk_0xC1032CAC14DE468A(0,5f, 0,5f, 1,5f, 1,5f, 0, 0, 0, 255, 0);
			if (bParam2)
			{
				unk_0xD9ACBBA59FD5A09E(7);
			}
			unk_0xD6158AD4034B8A41(*uParam0, uParam0->f_1, 255, 255, 255, 255);
			unk_0xD9ACBBA59FD5A09E(7);
			unk_0x6567AE843FADBA94(uParam0->f_2, 255, 255, 255, 255, 0);
		}
	}
}

void func_152(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_154();
		func_58(1, 0, 1, 0);
		unk_0x5413873D3F67BF93(1, 0);
	}
	else
	{
		if (bParam1)
		{
			func_153();
			func_58(0, 0, 1, 0);
		}
		unk_0x5413873D3F67BF93(0, 0);
	}
	Global_1662006 = bParam0;
	if (bParam0 == 0)
	{
		Global_1662008 = 0;
	}
}

void func_153()
{
	Global_2439138.f_1156.f_10 = 0;
}

void func_154()
{
	Global_2439138.f_1156.f_10 = 1;
}

void func_155(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_156(var uParam0)
{
	if (!func_904(&(uParam0->f_433)))
	{
		func_896(&(uParam0->f_433), 0, 0);
	}
	else if (func_707(&(uParam0->f_433), 10000, 0))
	{
		return 1;
	}
	return 0;
}

void func_157(int iParam0, bool bParam1, bool bParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, bool bParam7)
{
	if (bParam2)
	{
		StringCopy(sParam3, "anim@mp_player_intcelebrationmale@finger", 64);
		StringCopy(sParam4, "finger", 64);
		return;
	}
	if (bParam7)
	{
		StringCopy(sParam3, "ANIM@MP_JUGGERNAUT@", 64);
		StringCopy(sParam4, "Idle_Intro", 64);
		return;
	}
	switch (iParam5)
	{
		case 1:
			switch (iParam6)
			{
				case 0:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@bro_love", 64);
						StringCopy(sParam4, "bro_love", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@bro_love", 64);
						StringCopy(sParam4, "bro_love", 64);
					}
					break;
				
				case 1:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@finger", 64);
						StringCopy(sParam4, "finger", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@finger", 64);
						StringCopy(sParam4, "finger", 64);
					}
					break;
				
				case 2:
					StringCopy(sParam3, "anim@mp_player_intcelebrationmale@wank", 64);
					StringCopy(sParam4, "wank", 64);
					break;
				
				case 3:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@finger", 64);
						StringCopy(sParam4, "finger", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@finger", 64);
						StringCopy(sParam4, "finger", 64);
					}
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 5:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@blow_kiss", 64);
						StringCopy(sParam4, "blow_kiss", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@blow_kiss", 64);
						StringCopy(sParam4, "blow_kiss", 64);
					}
					break;
				
				case 1:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@finger", 64);
						StringCopy(sParam4, "finger", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@finger", 64);
						StringCopy(sParam4, "finger", 64);
					}
					break;
				
				case 2:
					StringCopy(sParam3, "anim@mp_player_intcelebrationmale@rock", 64);
					StringCopy(sParam4, "rock", 64);
					break;
				
				case 3:
					StringCopy(sParam3, "anim@mp_player_intcelebrationmale@salute", 64);
					StringCopy(sParam4, "salute", 64);
					break;
				
				case 4:
					StringCopy(sParam3, "anim@mp_player_intcelebrationmale@wank", 64);
					StringCopy(sParam4, "wank", 64);
					break;
				
				case 6:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@air_shagging", 64);
						StringCopy(sParam4, "air_shagging", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@air_shagging", 64);
						StringCopy(sParam4, "air_shagging", 64);
					}
					break;
				
				case 7:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@dock", 64);
						StringCopy(sParam4, "dock", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@dock", 64);
						StringCopy(sParam4, "dock", 64);
					}
					break;
				
				case 8:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@knuckle_crunch", 64);
						StringCopy(sParam4, "knuckle_crunch", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@knuckle_crunch", 64);
						StringCopy(sParam4, "knuckle_crunch", 64);
					}
					break;
				
				case 9:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@slow_clap", 64);
						StringCopy(sParam4, "slow_clap", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@slow_clap", 64);
						StringCopy(sParam4, "slow_clap", 64);
					}
					break;
				
				case 10:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@face_palm", 64);
						StringCopy(sParam4, "face_palm", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@face_palm", 64);
						StringCopy(sParam4, "face_palm", 64);
					}
					break;
				
				case 11:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@thumbs_up", 64);
						StringCopy(sParam4, "thumbs_up", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@thumbs_up", 64);
						StringCopy(sParam4, "thumbs_up", 64);
					}
					break;
				
				case 12:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@jazz_hands", 64);
						StringCopy(sParam4, "jazz_hands", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@jazz_hands", 64);
						StringCopy(sParam4, "jazz_hands", 64);
					}
					break;
				
				case 13:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@nose_pick", 64);
						StringCopy(sParam4, "nose_pick", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@nose_pick", 64);
						StringCopy(sParam4, "nose_pick", 64);
					}
					break;
				
				case 52:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@smoke_flick", 64);
						StringCopy(sParam4, "smoke_flick", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@smoke_flick", 64);
						StringCopy(sParam4, "smoke_flick", 64);
					}
					break;
				
				case 14:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@air_guitar", 64);
						StringCopy(sParam4, "air_guitar", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@air_guitar", 64);
						StringCopy(sParam4, "air_guitar", 64);
					}
					break;
				
				case 15:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@wave", 64);
						StringCopy(sParam4, "wave", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@wave", 64);
						StringCopy(sParam4, "wave", 64);
					}
					break;
				
				case 16:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@surrender", 64);
						StringCopy(sParam4, "surrender", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@surrender", 64);
						StringCopy(sParam4, "surrender", 64);
					}
					break;
				
				case 17:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@shush", 64);
						StringCopy(sParam4, "shush", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@shush", 64);
						StringCopy(sParam4, "shush", 64);
					}
					break;
				
				case 18:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@photography", 64);
						StringCopy(sParam4, "photography", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@photography", 64);
						StringCopy(sParam4, "photography", 64);
					}
					break;
				
				case 19:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@dj", 64);
						StringCopy(sParam4, "dj", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@dj", 64);
						StringCopy(sParam4, "dj", 64);
					}
					break;
				
				case 20:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@air_synth", 64);
						StringCopy(sParam4, "air_synth", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@air_synth", 64);
						StringCopy(sParam4, "air_synth", 64);
					}
					break;
				
				case 21:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@no_way", 64);
						StringCopy(sParam4, "no_way", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@no_way", 64);
						StringCopy(sParam4, "no_way", 64);
					}
					break;
				
				case 22:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@chicken_taunt", 64);
						StringCopy(sParam4, "chicken_taunt", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@chicken_taunt", 64);
						StringCopy(sParam4, "chicken_taunt", 64);
					}
					break;
				
				case 23:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@chin_brush", 64);
						StringCopy(sParam4, "chin_brush", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@chin_brush", 64);
						StringCopy(sParam4, "chin_brush", 64);
					}
					break;
				
				case 26:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@you_loco", 64);
						StringCopy(sParam4, "you_loco", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@you_loco", 64);
						StringCopy(sParam4, "you_loco", 64);
					}
					break;
				
				case 24:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@finger_kiss", 64);
						StringCopy(sParam4, "finger_kiss", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@finger_kiss", 64);
						StringCopy(sParam4, "finger_kiss", 64);
					}
					break;
				
				case 25:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@peace", 64);
						StringCopy(sParam4, "peace", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@peace", 64);
						StringCopy(sParam4, "peace", 64);
					}
					break;
				
				case 27:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@freakout", 64);
						StringCopy(sParam4, "freakout", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@freakout", 64);
						StringCopy(sParam4, "freakout", 64);
					}
					break;
				
				case 28:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@thumb_on_ears", 64);
						StringCopy(sParam4, "thumb_on_ears", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@thumb_on_ears", 64);
						StringCopy(sParam4, "thumb_on_ears", 64);
					}
					break;
				
				case 30:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@banging_tunes", 64);
						StringCopy(sParam4, "banging_tunes", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@banging_tunes", 64);
						StringCopy(sParam4, "banging_tunes", 64);
					}
					break;
				
				case 29:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@banging_tunes_left", 64);
						StringCopy(sParam4, "banging_tunes", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@banging_tunes_left", 64);
						StringCopy(sParam4, "banging_tunes", 64);
					}
					break;
				
				case 31:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@banging_tunes_right", 64);
						StringCopy(sParam4, "banging_tunes", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@banging_tunes_right", 64);
						StringCopy(sParam4, "banging_tunes", 64);
					}
					break;
				
				case 32:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@oh_snap", 64);
						StringCopy(sParam4, "oh_snap", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@oh_snap", 64);
						StringCopy(sParam4, "oh_snap", 64);
					}
					break;
				
				case 33:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@cats_cradle", 64);
						StringCopy(sParam4, "cats_cradle", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@cats_cradle", 64);
						StringCopy(sParam4, "cats_cradle", 64);
					}
					break;
				
				case 34:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@raise_the_roof", 64);
						StringCopy(sParam4, "raise_the_roof", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@raise_the_roof", 64);
						StringCopy(sParam4, "raise_the_roof", 64);
					}
					break;
				
				case 35:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@find_the_fish", 64);
						StringCopy(sParam4, "find_the_fish", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@find_the_fish", 64);
						StringCopy(sParam4, "find_the_fish", 64);
					}
					break;
				
				case 36:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@salsa_roll", 64);
						StringCopy(sParam4, "salsa_roll", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@salsa_roll", 64);
						StringCopy(sParam4, "salsa_roll", 64);
					}
					break;
				
				case 37:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@heart_pumping", 64);
						StringCopy(sParam4, "heart_pumping", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@heart_pumping", 64);
						StringCopy(sParam4, "heart_pumping", 64);
					}
					break;
				
				case 38:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@uncle_disco", 64);
						StringCopy(sParam4, "uncle_disco", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@uncle_disco", 64);
						StringCopy(sParam4, "uncle_disco", 64);
					}
					break;
				
				case 39:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@raining_cash", 64);
						StringCopy(sParam4, "raining_cash", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@raining_cash", 64);
						StringCopy(sParam4, "raining_cash", 64);
					}
					break;
				
				case 40:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@cry_baby", 64);
						StringCopy(sParam4, "cry_baby", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@cry_baby", 64);
						StringCopy(sParam4, "cry_baby", 64);
					}
					break;
				
				case 41:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@cut_throat", 64);
						StringCopy(sParam4, "cut_throat", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@cut_throat", 64);
						StringCopy(sParam4, "cut_throat", 64);
					}
					break;
				
				case 42:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@karate_chops", 64);
						StringCopy(sParam4, "karate_chops", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@karate_chops", 64);
						StringCopy(sParam4, "karate_chops", 64);
					}
					break;
				
				case 43:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@shadow_boxing", 64);
						StringCopy(sParam4, "shadow_boxing", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@shadow_boxing", 64);
						StringCopy(sParam4, "shadow_boxing", 64);
					}
					break;
				
				case 44:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@the_woogie", 64);
						StringCopy(sParam4, "the_woogie", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@the_woogie", 64);
						StringCopy(sParam4, "the_woogie", 64);
					}
					break;
				
				case 45:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@stinker", 64);
						StringCopy(sParam4, "stinker", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@stinker", 64);
						StringCopy(sParam4, "stinker", 64);
					}
					break;
				
				case 46:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@air_drums", 64);
						StringCopy(sParam4, "air_drums", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@air_drums", 64);
						StringCopy(sParam4, "air_drums", 64);
					}
					break;
				
				case 47:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@call_me", 64);
						StringCopy(sParam4, "call_me", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@call_me", 64);
						StringCopy(sParam4, "call_me", 64);
					}
					break;
				
				case 48:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@coin_roll_and_toss", 64);
						StringCopy(sParam4, "coin_roll_and_toss", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@coin_roll_and_toss", 64);
						StringCopy(sParam4, "coin_roll_and_toss", 64);
					}
					break;
				
				case 49:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@bang_bang", 64);
						StringCopy(sParam4, "bang_bang", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@bang_bang", 64);
						StringCopy(sParam4, "bang_bang", 64);
					}
					break;
				
				case 50:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@respect", 64);
						StringCopy(sParam4, "respect", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@respect", 64);
						StringCopy(sParam4, "respect", 64);
					}
					break;
				
				case 51:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@mind_blown", 64);
						StringCopy(sParam4, "mind_blown", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@mind_blown", 64);
						StringCopy(sParam4, "mind_blown", 64);
					}
					break;
				
				case 55:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@spray_champagne", 64);
						StringCopy(sParam4, "spray_champagne", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@spray_champagne", 64);
						StringCopy(sParam4, "spray_champagne", 64);
					}
					break;
				
				default:
					StringCopy(sParam3, "anim@mp_player_intcelebrationmale@salute", 64);
					StringCopy(sParam4, "salute", 64);
					break;
			}
			break;
		
		default:
			StringCopy(sParam3, "anim@mp_player_intcelebrationmale@salute", 64);
			StringCopy(sParam4, "salute", 64);
			break;
	}
}

int func_158(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_20))
	{
		return 1;
	}
	else
	{
		vVar0 = { unk_0xF1EE614CA05DDE75() };
		vVar3 = { vVar0.x, vVar0.y, 1320f };
		if (iParam3 != 0)
		{
			func_176(&(uParam0->f_20), iParam3, vVar3, 0f, -1, 0, 1);
		}
		else
		{
			iVar7 = unk_0x9539D44F3E4492F6(iParam2);
			if (unk_0xEB6A8945D1AC98A1(iVar7))
			{
				iParam2 = unk_0xD803B885F5E47A62();
				iVar7 = unk_0x16F2683693E537C9();
			}
			bVar6 = func_160(iVar7, Global_2425662[iParam2].f_249, Global_2425662[iParam2].f_250, 1, 0, 0);
			func_176(&(uParam0->f_20), iVar7, vVar3, 0f, iParam2, bVar6, 1);
			unk_0xDCDFC17557D5706C(uParam0->f_20, func_159(Global_1590535[iParam2].f_272), 0);
		}
		if (!unk_0xEB6A8945D1AC98A1(uParam0->f_20))
		{
			unk_0xA47B46945FF6DE74(uParam0->f_20, vVar3 + Vector(-2,85f, -0,26f, (20f + IntToFloat(unk_0xD803B885F5E47A62()))), 1, false, 0, 1);
			unk_0xC023D1C4BF532815(uParam0->f_20, 0f, 0f, 0f, 2, 1);
			unk_0x1E9649458B15960F(uParam0->f_20, true);
			if (unk_0xCED082ADD3739B9F(uParam0->f_20))
			{
				unk_0xC6EB89C59F2AF6B8(uParam0->f_20, "move_m@generic", "idle", 1000f, -1,5f, -1, 9, 0, 0, 0, 0);
			}
			else
			{
				unk_0xC6EB89C59F2AF6B8(uParam0->f_20, "move_f@generic", "idle", 1000f, -1,5f, -1, 9, 0, 0, 0, 0);
			}
			unk_0xDBE4EC9C88839074(uParam0->f_20, unk_0x68E4ADDDDCD7BDDE(uParam0->f_20, 0,7866f, 2,2904f, 0,7608f), -1, 2048, 2);
			unk_0xF895E10BF4C72645(uParam0->f_20, 0, 0);
			unk_0x11AD11297DC58CC7(uParam0->f_20, 1);
		}
		if (!unk_0x9F4FE516EAACCFC5(*uParam1))
		{
			*uParam1 = unk_0x92B061D59B9B540A(26379945, 1);
		}
		unk_0x70D5C5F31B79F27C(*uParam1);
		unk_0x608A456FDD8A83D8(*uParam1, vVar3);
		unk_0x5F3CBA6EB9341C90(*uParam1, 0f, 0f, 0f, 2);
		unk_0x5818C8D5303DCCF8(*uParam1, 45f);
		func_53(uParam1, 0,05f);
		unk_0xDC3CC6D1845B0567(*uParam1, 0,01f);
		if (!unk_0x9CF8D5C7090408A2(*uParam1))
		{
			unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
		}
		return 1;
	}
	return 0;
}

char* func_159(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mood_Aiming_1";
		
		case 1:
			return "mood_Angry_1";
		
		case 2:
			return "mood_Happy_1";
		
		case 3:
			return "mood_Injured_1";
		
		case 4:
			return "mood_Normal_1";
		
		case 5:
			return "mood_stressed_1";
		
		case 6:
			return "mood_smug_1";
		
		case 7:
			return "mood_sulk_1";
		
		default:
	}
	return "mood_Normal_1";
}

int func_160(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_175())
	{
		return 0;
	}
	uVar0 = 5;
	uVar6 = 5;
	uVar12 = 6;
	if (iParam1 == 0)
	{
		iVar22 = 3;
	}
	else if (bParam3)
	{
		iVar22 = 1;
	}
	else if (bParam4)
	{
		iVar22 = 2;
	}
	else
	{
		iVar22 = 0;
	}
	func_168(iParam1, iParam2, &uVar0, &uVar6, &uVar12, iVar22, bParam5);
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0x134B62B726CEC8E6(iParam0) == -1667301416)
		{
			iVar19 = func_167(iParam0);
			if (!iVar19 == -1)
			{
				if (func_166(&uVar0, iVar19))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar20 = func_165(iParam0);
			if (!iVar20 == -1)
			{
				if (func_163(&uVar6, iVar20))
				{
					return 1;
				}
			}
		}
		if (unk_0x8CD06866876216F2())
		{
			iVar21 = func_162(iParam0);
			if (!iVar21 == 0)
			{
				if (func_161(&uVar12, iVar21))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_161(var uParam0, int iParam1)
{
	iVar0 = floor((to_float(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_162(int iParam0)
{
	iVar0 = unk_0x36C584991B4C183F(iParam0, 1);
	return iVar0;
}

bool func_163(var uParam0, int iParam1)
{
	return func_164(uParam0, iParam1);
}

int func_164(var uParam0, int iParam1)
{
	iVar0 = floor((to_float(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_165(int iParam0)
{
	iVar0 = unk_0x98F1B512A2CC07C5(iParam0, 0);
	return iVar0;
}

bool func_166(var uParam0, int iParam1)
{
	return func_164(uParam0, iParam1);
}

int func_167(int iParam0)
{
	iVar0 = unk_0x98F1B512A2CC07C5(iParam0, 0);
	return iVar0;
}

void func_168(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_174(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
		case 0:
			func_173(iParam0, iParam1, uParam2, uParam3, uParam4, iParam5, bParam6);
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					switch (iParam5)
					{
						case 0:
							func_172(uParam3, 13, 1);
							func_172(uParam3, 16, 1);
							func_172(uParam3, 48, 1);
							func_172(uParam3, 49, 1);
							func_172(uParam3, 38, 1);
							func_172(uParam3, 47, 1);
							func_172(uParam3, 111, 1);
							func_170(uParam2, 2, 1);
							func_170(uParam2, 20, 1);
							func_170(uParam2, 37, 1);
							func_170(uParam2, 46, 1);
							func_170(uParam2, 110, 1);
							func_174(uParam4, 33, 1);
							func_174(uParam4, 8, 1);
							func_174(uParam4, 31, 1);
							func_174(uParam4, 103, 1);
							func_174(uParam4, 104, 1);
							func_174(uParam4, 105, 1);
							func_174(uParam4, 106, 1);
							func_174(uParam4, 107, 1);
							func_174(uParam4, 108, 1);
							func_172(uParam3, 67, 1);
							func_172(uParam3, 68, 1);
							func_172(uParam3, 69, 1);
							func_172(uParam3, 70, 1);
							func_172(uParam3, 71, 1);
							func_172(uParam3, 72, 1);
							func_172(uParam3, 73, 1);
							func_172(uParam3, 74, 1);
							func_172(uParam3, 75, 1);
							func_172(uParam3, 78, 1);
							func_172(uParam3, 79, 1);
							func_172(uParam3, 80, 1);
							func_172(uParam3, 81, 1);
							func_172(uParam3, 82, 1);
							func_172(uParam3, 91, 1);
							func_172(uParam3, 92, 1);
							func_170(uParam2, 69, 1);
							func_170(uParam2, 74, 1);
							func_170(uParam2, 90, 1);
							func_170(uParam2, 91, 1);
							break;
						
						case 1:
							func_172(uParam3, 4, 1);
							func_172(uParam3, 13, 1);
							func_172(uParam3, 16, 1);
							func_172(uParam3, 48, 1);
							func_172(uParam3, 49, 1);
							func_172(uParam3, 38, 1);
							func_172(uParam3, 47, 1);
							func_172(uParam3, 111, 1);
							func_170(uParam2, 2, 1);
							func_170(uParam2, 20, 1);
							func_170(uParam2, 37, 1);
							func_170(uParam2, 46, 1);
							func_170(uParam2, 110, 1);
							func_174(uParam4, 28, 1);
							func_174(uParam4, 33, 1);
							func_174(uParam4, 8, 1);
							func_174(uParam4, 31, 1);
							func_174(uParam4, 43, 1);
							func_174(uParam4, 103, 1);
							func_174(uParam4, 104, 1);
							func_174(uParam4, 105, 1);
							func_174(uParam4, 106, 1);
							func_174(uParam4, 107, 1);
							func_174(uParam4, 108, 1);
							func_172(uParam3, 67, 1);
							func_172(uParam3, 68, 1);
							func_172(uParam3, 69, 1);
							func_172(uParam3, 70, 1);
							func_172(uParam3, 71, 1);
							func_172(uParam3, 72, 1);
							func_172(uParam3, 73, 1);
							func_172(uParam3, 74, 1);
							func_172(uParam3, 75, 1);
							func_172(uParam3, 78, 1);
							func_172(uParam3, 79, 1);
							func_172(uParam3, 80, 1);
							func_172(uParam3, 81, 1);
							func_172(uParam3, 82, 1);
							func_172(uParam3, 91, 1);
							func_172(uParam3, 92, 1);
							func_170(uParam2, 69, 1);
							func_170(uParam2, 74, 1);
							func_170(uParam2, 90, 1);
							func_170(uParam2, 91, 1);
							break;
						
						case 2:
							func_172(uParam3, 13, 1);
							func_172(uParam3, 16, 1);
							func_172(uParam3, 48, 1);
							func_172(uParam3, 49, 1);
							func_172(uParam3, 39, 1);
							func_170(uParam2, 2, 1);
							func_170(uParam2, 20, 1);
							func_170(uParam2, 38, 1);
							func_174(uParam4, 8, 1);
							func_174(uParam4, 10, 1);
							func_174(uParam4, 13, 1);
							func_174(uParam4, 19, 1);
							func_174(uParam4, 20, 1);
							func_174(uParam4, 59, 1);
							func_174(uParam4, 60, 1);
							func_174(uParam4, 61, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 63, 1);
							func_174(uParam4, 64, 1);
							func_174(uParam4, 65, 1);
							func_174(uParam4, 66, 1);
							func_174(uParam4, 67, 1);
							func_174(uParam4, 68, 1);
							func_174(uParam4, 69, 1);
							func_174(uParam4, 70, 1);
							func_174(uParam4, 71, 1);
							func_174(uParam4, 72, 1);
							func_174(uParam4, 21, 1);
							func_174(uParam4, 22, 1);
							func_174(uParam4, 23, 1);
							func_174(uParam4, 24, 1);
							func_174(uParam4, 25, 1);
							func_174(uParam4, 26, 1);
							func_174(uParam4, 28, 1);
							func_174(uParam4, 33, 1);
							func_174(uParam4, 31, 1);
							func_174(uParam4, 92, 1);
							func_174(uParam4, 93, 1);
							func_174(uParam4, 94, 1);
							func_174(uParam4, 96, 1);
							func_174(uParam4, 97, 1);
							func_174(uParam4, 98, 1);
							func_174(uParam4, 100, 1);
							func_174(uParam4, 103, 1);
							func_174(uParam4, 104, 1);
							func_174(uParam4, 105, 1);
							func_174(uParam4, 106, 1);
							func_174(uParam4, 107, 1);
							func_174(uParam4, 108, 1);
							func_172(uParam3, 67, 1);
							func_172(uParam3, 68, 1);
							func_172(uParam3, 69, 1);
							func_172(uParam3, 70, 1);
							func_172(uParam3, 71, 1);
							func_172(uParam3, 72, 1);
							func_172(uParam3, 73, 1);
							func_172(uParam3, 74, 1);
							func_172(uParam3, 75, 1);
							func_172(uParam3, 78, 1);
							func_172(uParam3, 79, 1);
							func_172(uParam3, 80, 1);
							func_172(uParam3, 81, 1);
							func_172(uParam3, 82, 1);
							func_172(uParam3, 91, 1);
							func_172(uParam3, 92, 1);
							func_170(uParam2, 69, 1);
							func_170(uParam2, 74, 1);
							func_170(uParam2, 90, 1);
							func_170(uParam2, 91, 1);
							break;
					}
					break;
				
				case 5:
				case 24:
					switch (iParam5)
					{
						case 0:
							func_172(uParam3, 16, 1);
							func_172(uParam3, 48, 1);
							func_172(uParam3, 49, 1);
							func_172(uParam3, 18, 1);
							func_172(uParam3, 50, 1);
							func_172(uParam3, 51, 1);
							func_172(uParam3, 52, 1);
							func_172(uParam3, 53, 1);
							func_172(uParam3, 38, 1);
							func_172(uParam3, 47, 1);
							func_172(uParam3, 111, 1);
							func_172(uParam3, 62, 1);
							func_170(uParam2, 16, 1);
							func_170(uParam2, 47, 1);
							func_170(uParam2, 48, 1);
							func_170(uParam2, 18, 1);
							func_170(uParam2, 49, 1);
							func_170(uParam2, 50, 1);
							func_170(uParam2, 51, 1);
							func_170(uParam2, 52, 1);
							func_170(uParam2, 62, 1);
							func_170(uParam2, 37, 1);
							func_170(uParam2, 46, 1);
							func_170(uParam2, 110, 1);
							func_174(uParam4, 1, 1);
							func_174(uParam4, 2, 1);
							func_174(uParam4, 3, 1);
							func_174(uParam4, 4, 1);
							func_174(uParam4, 5, 1);
							func_174(uParam4, 7, 1);
							func_174(uParam4, 8, 1);
							func_174(uParam4, 9, 1);
							func_174(uParam4, 10, 1);
							func_174(uParam4, 12, 1);
							func_174(uParam4, 13, 1);
							func_174(uParam4, 14, 1);
							func_174(uParam4, 15, 1);
							func_174(uParam4, 16, 1);
							func_174(uParam4, 17, 1);
							func_174(uParam4, 18, 1);
							func_174(uParam4, 19, 1);
							func_174(uParam4, 20, 1);
							func_174(uParam4, 59, 1);
							func_174(uParam4, 60, 1);
							func_174(uParam4, 61, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 63, 1);
							func_174(uParam4, 64, 1);
							func_174(uParam4, 65, 1);
							func_174(uParam4, 66, 1);
							func_174(uParam4, 67, 1);
							func_174(uParam4, 68, 1);
							func_174(uParam4, 69, 1);
							func_174(uParam4, 70, 1);
							func_174(uParam4, 71, 1);
							func_174(uParam4, 72, 1);
							func_174(uParam4, 21, 1);
							func_174(uParam4, 22, 1);
							func_174(uParam4, 23, 1);
							func_174(uParam4, 24, 1);
							func_174(uParam4, 25, 1);
							func_174(uParam4, 26, 1);
							func_174(uParam4, 36, 1);
							func_174(uParam4, 46, 1);
							func_174(uParam4, 38, 1);
							func_174(uParam4, 28, 1);
							func_174(uParam4, 33, 1);
							func_174(uParam4, 43, 1);
							func_174(uParam4, 29, 1);
							func_174(uParam4, 92, 1);
							func_174(uParam4, 93, 1);
							func_174(uParam4, 94, 1);
							func_174(uParam4, 96, 1);
							func_174(uParam4, 97, 1);
							func_174(uParam4, 98, 1);
							func_174(uParam4, 100, 1);
							func_174(uParam4, 103, 1);
							func_174(uParam4, 104, 1);
							func_174(uParam4, 105, 1);
							func_174(uParam4, 106, 1);
							func_174(uParam4, 107, 1);
							func_174(uParam4, 108, 1);
							func_174(uParam4, 110, 1);
							func_174(uParam4, 112, 1);
							func_174(uParam4, 115, 1);
							func_174(uParam4, 116, 1);
							func_174(uParam4, 136, 1);
							func_174(uParam4, 138, 1);
							func_174(uParam4, 139, 1);
							func_174(uParam4, 143, 1);
							func_174(uParam4, 144, 1);
							func_174(uParam4, 145, 1);
							func_174(uParam4, 147, 1);
							func_172(uParam3, 67, 1);
							func_172(uParam3, 68, 1);
							func_172(uParam3, 69, 1);
							func_172(uParam3, 70, 1);
							func_172(uParam3, 71, 1);
							func_172(uParam3, 72, 1);
							func_172(uParam3, 73, 1);
							func_172(uParam3, 74, 1);
							func_172(uParam3, 78, 1);
							func_172(uParam3, 79, 1);
							func_172(uParam3, 80, 1);
							func_172(uParam3, 81, 1);
							func_172(uParam3, 82, 1);
							func_172(uParam3, 91, 1);
							func_172(uParam3, 92, 1);
							func_170(uParam2, 66, 1);
							func_170(uParam2, 67, 1);
							func_170(uParam2, 68, 1);
							func_170(uParam2, 69, 1);
							func_170(uParam2, 70, 1);
							func_170(uParam2, 71, 1);
							func_170(uParam2, 72, 1);
							func_170(uParam2, 73, 1);
							func_170(uParam2, 77, 1);
							func_170(uParam2, 78, 1);
							func_170(uParam2, 79, 1);
							func_170(uParam2, 80, 1);
							func_170(uParam2, 81, 1);
							func_170(uParam2, 90, 1);
							func_170(uParam2, 91, 1);
							break;
						
						case 1:
							func_172(uParam3, 38, 1);
							func_172(uParam3, 47, 1);
							func_172(uParam3, 111, 1);
							func_170(uParam2, 16, 1);
							func_170(uParam2, 47, 1);
							func_170(uParam2, 48, 1);
							func_170(uParam2, 18, 1);
							func_170(uParam2, 49, 1);
							func_170(uParam2, 50, 1);
							func_170(uParam2, 51, 1);
							func_170(uParam2, 52, 1);
							func_170(uParam2, 62, 1);
							func_170(uParam2, 37, 1);
							func_170(uParam2, 46, 1);
							func_170(uParam2, 110, 1);
							func_174(uParam4, 8, 1);
							func_174(uParam4, 9, 1);
							func_174(uParam4, 20, 1);
							func_174(uParam4, 59, 1);
							func_174(uParam4, 60, 1);
							func_174(uParam4, 61, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 63, 1);
							func_174(uParam4, 64, 1);
							func_174(uParam4, 65, 1);
							func_174(uParam4, 66, 1);
							func_174(uParam4, 67, 1);
							func_174(uParam4, 68, 1);
							func_174(uParam4, 69, 1);
							func_174(uParam4, 70, 1);
							func_174(uParam4, 71, 1);
							func_174(uParam4, 72, 1);
							func_174(uParam4, 21, 1);
							func_174(uParam4, 22, 1);
							func_174(uParam4, 23, 1);
							func_174(uParam4, 24, 1);
							func_174(uParam4, 25, 1);
							func_174(uParam4, 26, 1);
							func_174(uParam4, 36, 1);
							func_174(uParam4, 46, 1);
							func_174(uParam4, 38, 1);
							func_174(uParam4, 28, 1);
							func_174(uParam4, 33, 1);
							func_174(uParam4, 92, 1);
							func_174(uParam4, 93, 1);
							func_174(uParam4, 94, 1);
							func_174(uParam4, 96, 1);
							func_174(uParam4, 97, 1);
							func_174(uParam4, 98, 1);
							func_174(uParam4, 100, 1);
							func_174(uParam4, 103, 1);
							func_174(uParam4, 104, 1);
							func_174(uParam4, 105, 1);
							func_174(uParam4, 106, 1);
							func_174(uParam4, 107, 1);
							func_174(uParam4, 108, 1);
							func_174(uParam4, 110, 1);
							func_174(uParam4, 112, 1);
							func_174(uParam4, 115, 1);
							func_174(uParam4, 116, 1);
							func_172(uParam3, 67, 1);
							func_172(uParam3, 68, 1);
							func_172(uParam3, 69, 1);
							func_172(uParam3, 70, 1);
							func_172(uParam3, 71, 1);
							func_172(uParam3, 72, 1);
							func_172(uParam3, 73, 1);
							func_172(uParam3, 74, 1);
							func_172(uParam3, 78, 1);
							func_172(uParam3, 79, 1);
							func_172(uParam3, 80, 1);
							func_172(uParam3, 81, 1);
							func_172(uParam3, 82, 1);
							func_172(uParam3, 91, 1);
							func_172(uParam3, 92, 1);
							func_170(uParam2, 66, 1);
							func_170(uParam2, 67, 1);
							func_170(uParam2, 68, 1);
							func_170(uParam2, 69, 1);
							func_170(uParam2, 70, 1);
							func_170(uParam2, 71, 1);
							func_170(uParam2, 72, 1);
							func_170(uParam2, 73, 1);
							func_170(uParam2, 77, 1);
							func_170(uParam2, 78, 1);
							func_170(uParam2, 79, 1);
							func_170(uParam2, 80, 1);
							func_170(uParam2, 81, 1);
							func_170(uParam2, 90, 1);
							func_170(uParam2, 91, 1);
							break;
						
						case 2:
							func_172(uParam3, 16, 1);
							func_172(uParam3, 48, 1);
							func_172(uParam3, 49, 1);
							func_172(uParam3, 18, 1);
							func_172(uParam3, 50, 1);
							func_172(uParam3, 51, 1);
							func_172(uParam3, 52, 1);
							func_172(uParam3, 53, 1);
							func_172(uParam3, 62, 1);
							func_172(uParam3, 38, 1);
							func_172(uParam3, 47, 1);
							func_172(uParam3, 111, 1);
							func_170(uParam2, 18, 1);
							func_170(uParam2, 49, 1);
							func_170(uParam2, 50, 1);
							func_170(uParam2, 51, 1);
							func_170(uParam2, 52, 1);
							func_170(uParam2, 62, 1);
							func_170(uParam2, 37, 1);
							func_170(uParam2, 46, 1);
							func_170(uParam2, 110, 1);
							func_174(uParam4, 4, 1);
							func_174(uParam4, 5, 1);
							func_174(uParam4, 8, 1);
							func_174(uParam4, 9, 1);
							func_174(uParam4, 10, 1);
							func_174(uParam4, 12, 1);
							func_174(uParam4, 14, 1);
							func_174(uParam4, 15, 1);
							func_174(uParam4, 16, 1);
							func_174(uParam4, 17, 1);
							func_174(uParam4, 18, 1);
							func_174(uParam4, 19, 1);
							func_174(uParam4, 20, 1);
							func_174(uParam4, 59, 1);
							func_174(uParam4, 60, 1);
							func_174(uParam4, 61, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 63, 1);
							func_174(uParam4, 64, 1);
							func_174(uParam4, 65, 1);
							func_174(uParam4, 66, 1);
							func_174(uParam4, 67, 1);
							func_174(uParam4, 68, 1);
							func_174(uParam4, 69, 1);
							func_174(uParam4, 70, 1);
							func_174(uParam4, 71, 1);
							func_174(uParam4, 72, 1);
							func_174(uParam4, 21, 1);
							func_174(uParam4, 22, 1);
							func_174(uParam4, 23, 1);
							func_174(uParam4, 24, 1);
							func_174(uParam4, 25, 1);
							func_174(uParam4, 26, 1);
							func_174(uParam4, 36, 1);
							func_174(uParam4, 46, 1);
							func_174(uParam4, 38, 1);
							func_174(uParam4, 28, 1);
							func_174(uParam4, 33, 1);
							func_174(uParam4, 92, 1);
							func_174(uParam4, 93, 1);
							func_174(uParam4, 94, 1);
							func_174(uParam4, 96, 1);
							func_174(uParam4, 97, 1);
							func_174(uParam4, 98, 1);
							func_174(uParam4, 100, 1);
							func_174(uParam4, 103, 1);
							func_174(uParam4, 104, 1);
							func_174(uParam4, 105, 1);
							func_174(uParam4, 106, 1);
							func_174(uParam4, 107, 1);
							func_174(uParam4, 108, 1);
							func_174(uParam4, 110, 1);
							func_174(uParam4, 112, 1);
							func_174(uParam4, 115, 1);
							func_174(uParam4, 116, 1);
							func_174(uParam4, 136, 1);
							func_174(uParam4, 138, 1);
							func_174(uParam4, 139, 1);
							func_174(uParam4, 143, 1);
							func_174(uParam4, 144, 1);
							func_174(uParam4, 145, 1);
							func_174(uParam4, 147, 1);
							func_172(uParam3, 67, 1);
							func_172(uParam3, 68, 1);
							func_172(uParam3, 69, 1);
							func_172(uParam3, 70, 1);
							func_172(uParam3, 71, 1);
							func_172(uParam3, 72, 1);
							func_172(uParam3, 73, 1);
							func_172(uParam3, 74, 1);
							func_172(uParam3, 78, 1);
							func_172(uParam3, 79, 1);
							func_172(uParam3, 80, 1);
							func_172(uParam3, 81, 1);
							func_172(uParam3, 82, 1);
							func_172(uParam3, 91, 1);
							func_172(uParam3, 92, 1);
							func_170(uParam2, 66, 1);
							func_170(uParam2, 67, 1);
							func_170(uParam2, 68, 1);
							func_170(uParam2, 69, 1);
							func_170(uParam2, 70, 1);
							func_170(uParam2, 71, 1);
							func_170(uParam2, 72, 1);
							func_170(uParam2, 73, 1);
							func_170(uParam2, 77, 1);
							func_170(uParam2, 78, 1);
							func_170(uParam2, 79, 1);
							func_170(uParam2, 80, 1);
							func_170(uParam2, 81, 1);
							func_170(uParam2, 90, 1);
							func_170(uParam2, 91, 1);
							break;
					}
					break;
				
				case 52:
					switch (iParam5)
					{
						case 0:
							func_172(uParam3, 66, 1);
							func_172(uParam3, 67, 1);
							func_172(uParam3, 68, 1);
							func_172(uParam3, 69, 1);
							func_172(uParam3, 70, 1);
							func_172(uParam3, 71, 1);
							func_172(uParam3, 72, 1);
							func_172(uParam3, 73, 1);
							func_172(uParam3, 77, 1);
							func_172(uParam3, 78, 1);
							func_172(uParam3, 79, 1);
							func_172(uParam3, 80, 1);
							func_172(uParam3, 81, 1);
							func_172(uParam3, 91, 1);
							func_172(uParam3, 92, 1);
							func_172(uParam3, 16, 1);
							func_172(uParam3, 48, 1);
							func_172(uParam3, 49, 1);
							func_172(uParam3, 18, 1);
							func_172(uParam3, 50, 1);
							func_172(uParam3, 51, 1);
							func_172(uParam3, 52, 1);
							func_172(uParam3, 53, 1);
							func_172(uParam3, 62, 1);
							func_172(uParam3, 38, 1);
							func_172(uParam3, 47, 1);
							func_172(uParam3, 111, 1);
							func_170(uParam2, 66, 1);
							func_170(uParam2, 67, 1);
							func_170(uParam2, 68, 1);
							func_170(uParam2, 69, 1);
							func_170(uParam2, 70, 1);
							func_170(uParam2, 71, 1);
							func_170(uParam2, 72, 1);
							func_170(uParam2, 73, 1);
							func_170(uParam2, 77, 1);
							func_170(uParam2, 78, 1);
							func_170(uParam2, 79, 1);
							func_170(uParam2, 80, 1);
							func_170(uParam2, 81, 1);
							func_170(uParam2, 90, 1);
							func_170(uParam2, 91, 1);
							func_170(uParam2, 18, 1);
							func_170(uParam2, 49, 1);
							func_170(uParam2, 50, 1);
							func_170(uParam2, 51, 1);
							func_170(uParam2, 52, 1);
							func_170(uParam2, 62, 1);
							func_170(uParam2, 37, 1);
							func_170(uParam2, 46, 1);
							func_170(uParam2, 110, 1);
							func_174(uParam4, 92, 1);
							func_174(uParam4, 93, 1);
							func_174(uParam4, 94, 1);
							func_174(uParam4, 96, 1);
							func_174(uParam4, 97, 1);
							func_174(uParam4, 98, 1);
							func_174(uParam4, 100, 1);
							func_174(uParam4, 103, 1);
							func_174(uParam4, 104, 1);
							func_174(uParam4, 105, 1);
							func_174(uParam4, 106, 1);
							func_174(uParam4, 107, 1);
							func_174(uParam4, 108, 1);
							func_169(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_172(uParam3, 16, 1);
							func_172(uParam3, 48, 1);
							func_172(uParam3, 49, 1);
							func_172(uParam3, 18, 1);
							func_172(uParam3, 50, 1);
							func_172(uParam3, 51, 1);
							func_172(uParam3, 52, 1);
							func_172(uParam3, 53, 1);
							func_172(uParam3, 62, 1);
							func_172(uParam3, 38, 1);
							func_172(uParam3, 47, 1);
							func_172(uParam3, 111, 1);
							func_170(uParam2, 18, 1);
							func_170(uParam2, 49, 1);
							func_170(uParam2, 50, 1);
							func_170(uParam2, 51, 1);
							func_170(uParam2, 52, 1);
							func_170(uParam2, 62, 1);
							func_170(uParam2, 37, 1);
							func_170(uParam2, 46, 1);
							func_170(uParam2, 110, 1);
							func_174(uParam4, 9, 1);
							func_174(uParam4, 10, 1);
							func_174(uParam4, 12, 1);
							func_174(uParam4, 17, 1);
							func_174(uParam4, 18, 1);
							func_174(uParam4, 19, 1);
							func_174(uParam4, 20, 1);
							func_174(uParam4, 59, 1);
							func_174(uParam4, 60, 1);
							func_174(uParam4, 61, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 63, 1);
							func_174(uParam4, 64, 1);
							func_174(uParam4, 65, 1);
							func_174(uParam4, 66, 1);
							func_174(uParam4, 67, 1);
							func_174(uParam4, 68, 1);
							func_174(uParam4, 69, 1);
							func_174(uParam4, 70, 1);
							func_174(uParam4, 71, 1);
							func_174(uParam4, 72, 1);
							func_174(uParam4, 21, 1);
							func_174(uParam4, 22, 1);
							func_174(uParam4, 23, 1);
							func_174(uParam4, 24, 1);
							func_174(uParam4, 25, 1);
							func_174(uParam4, 26, 1);
							func_174(uParam4, 36, 1);
							func_174(uParam4, 46, 1);
							func_174(uParam4, 38, 1);
							func_174(uParam4, 29, 1);
							func_174(uParam4, 28, 1);
							func_174(uParam4, 8, 1);
							func_174(uParam4, 31, 1);
							func_174(uParam4, 32, 1);
							func_174(uParam4, 33, 1);
							func_174(uParam4, 34, 1);
							func_174(uParam4, 43, 1);
							func_174(uParam4, 92, 1);
							func_174(uParam4, 93, 1);
							func_174(uParam4, 94, 1);
							func_174(uParam4, 96, 1);
							func_174(uParam4, 97, 1);
							func_174(uParam4, 98, 1);
							func_174(uParam4, 100, 1);
							func_174(uParam4, 103, 1);
							func_174(uParam4, 104, 1);
							func_174(uParam4, 105, 1);
							func_174(uParam4, 106, 1);
							func_174(uParam4, 107, 1);
							func_174(uParam4, 108, 1);
							func_169(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 53:
					func_172(uParam3, 67, 1);
					func_172(uParam3, 68, 1);
					func_172(uParam3, 69, 1);
					func_172(uParam3, 70, 1);
					func_172(uParam3, 71, 1);
					func_172(uParam3, 72, 1);
					func_172(uParam3, 73, 1);
					func_172(uParam3, 74, 1);
					func_172(uParam3, 78, 1);
					func_172(uParam3, 79, 1);
					func_172(uParam3, 80, 1);
					func_172(uParam3, 81, 1);
					func_172(uParam3, 82, 1);
					func_172(uParam3, 91, 1);
					func_172(uParam3, 92, 1);
					func_170(uParam2, 66, 1);
					func_170(uParam2, 67, 1);
					func_170(uParam2, 68, 1);
					func_170(uParam2, 69, 1);
					func_170(uParam2, 70, 1);
					func_170(uParam2, 71, 1);
					func_170(uParam2, 72, 1);
					func_170(uParam2, 73, 1);
					func_170(uParam2, 77, 1);
					func_170(uParam2, 78, 1);
					func_170(uParam2, 79, 1);
					func_170(uParam2, 80, 1);
					func_170(uParam2, 81, 1);
					func_170(uParam2, 90, 1);
					func_170(uParam2, 91, 1);
					func_172(uParam3, 38, 1);
					func_172(uParam3, 47, 1);
					func_172(uParam3, 111, 1);
					func_170(uParam2, 37, 1);
					func_170(uParam2, 46, 1);
					func_170(uParam2, 110, 1);
					func_174(uParam4, 92, 1);
					func_174(uParam4, 93, 1);
					func_174(uParam4, 94, 1);
					func_174(uParam4, 96, 1);
					func_174(uParam4, 97, 1);
					func_174(uParam4, 98, 1);
					func_174(uParam4, 100, 1);
					func_174(uParam4, 103, 1);
					func_174(uParam4, 104, 1);
					func_174(uParam4, 105, 1);
					func_174(uParam4, 106, 1);
					func_174(uParam4, 107, 1);
					func_174(uParam4, 108, 1);
					func_169(uParam2, uParam3, uParam4);
					break;
				
				case 54:
					func_172(uParam3, 67, 1);
					func_172(uParam3, 68, 1);
					func_172(uParam3, 69, 1);
					func_172(uParam3, 70, 1);
					func_172(uParam3, 71, 1);
					func_172(uParam3, 72, 1);
					func_172(uParam3, 73, 1);
					func_172(uParam3, 74, 1);
					func_172(uParam3, 78, 1);
					func_172(uParam3, 79, 1);
					func_172(uParam3, 80, 1);
					func_172(uParam3, 81, 1);
					func_172(uParam3, 82, 1);
					func_172(uParam3, 91, 1);
					func_172(uParam3, 92, 1);
					func_170(uParam2, 66, 1);
					func_170(uParam2, 67, 1);
					func_170(uParam2, 68, 1);
					func_170(uParam2, 69, 1);
					func_170(uParam2, 70, 1);
					func_170(uParam2, 71, 1);
					func_170(uParam2, 72, 1);
					func_170(uParam2, 73, 1);
					func_170(uParam2, 77, 1);
					func_170(uParam2, 78, 1);
					func_170(uParam2, 79, 1);
					func_170(uParam2, 80, 1);
					func_170(uParam2, 81, 1);
					func_170(uParam2, 90, 1);
					func_170(uParam2, 91, 1);
					func_172(uParam3, 38, 1);
					func_172(uParam3, 47, 1);
					func_172(uParam3, 111, 1);
					func_170(uParam2, 37, 1);
					func_170(uParam2, 46, 1);
					func_170(uParam2, 110, 1);
					func_174(uParam4, 92, 1);
					func_174(uParam4, 93, 1);
					func_174(uParam4, 94, 1);
					func_174(uParam4, 96, 1);
					func_174(uParam4, 97, 1);
					func_174(uParam4, 98, 1);
					func_174(uParam4, 100, 1);
					func_174(uParam4, 103, 1);
					func_174(uParam4, 104, 1);
					func_174(uParam4, 105, 1);
					func_174(uParam4, 106, 1);
					func_174(uParam4, 107, 1);
					func_174(uParam4, 108, 1);
					func_169(uParam2, uParam3, uParam4);
					break;
				
				case 55:
					func_172(uParam3, 67, 1);
					func_172(uParam3, 68, 1);
					func_172(uParam3, 69, 1);
					func_172(uParam3, 70, 1);
					func_172(uParam3, 71, 1);
					func_172(uParam3, 72, 1);
					func_172(uParam3, 73, 1);
					func_172(uParam3, 74, 1);
					func_172(uParam3, 78, 1);
					func_172(uParam3, 79, 1);
					func_172(uParam3, 80, 1);
					func_172(uParam3, 81, 1);
					func_172(uParam3, 82, 1);
					func_172(uParam3, 91, 1);
					func_172(uParam3, 92, 1);
					func_170(uParam2, 66, 1);
					func_170(uParam2, 67, 1);
					func_170(uParam2, 68, 1);
					func_170(uParam2, 69, 1);
					func_170(uParam2, 70, 1);
					func_170(uParam2, 71, 1);
					func_170(uParam2, 72, 1);
					func_170(uParam2, 73, 1);
					func_170(uParam2, 77, 1);
					func_170(uParam2, 78, 1);
					func_170(uParam2, 79, 1);
					func_170(uParam2, 80, 1);
					func_170(uParam2, 81, 1);
					func_170(uParam2, 90, 1);
					func_170(uParam2, 91, 1);
					func_172(uParam3, 38, 1);
					func_172(uParam3, 47, 1);
					func_172(uParam3, 111, 1);
					func_170(uParam2, 37, 1);
					func_170(uParam2, 46, 1);
					func_170(uParam2, 110, 1);
					func_174(uParam4, 92, 1);
					func_174(uParam4, 93, 1);
					func_174(uParam4, 94, 1);
					func_174(uParam4, 96, 1);
					func_174(uParam4, 97, 1);
					func_174(uParam4, 98, 1);
					func_174(uParam4, 100, 1);
					func_174(uParam4, 103, 1);
					func_174(uParam4, 104, 1);
					func_174(uParam4, 105, 1);
					func_174(uParam4, 106, 1);
					func_174(uParam4, 107, 1);
					func_174(uParam4, 108, 1);
					func_169(uParam2, uParam3, uParam4);
					break;
				
				case 56:
				case 57:
				case 58:
					switch (iParam5)
					{
						case 0:
							func_172(uParam3, 16, 1);
							func_172(uParam3, 48, 1);
							func_172(uParam3, 49, 1);
							func_172(uParam3, 18, 1);
							func_172(uParam3, 50, 1);
							func_172(uParam3, 51, 1);
							func_172(uParam3, 52, 1);
							func_172(uParam3, 53, 1);
							func_172(uParam3, 62, 1);
							func_172(uParam3, 38, 1);
							func_172(uParam3, 47, 1);
							func_172(uParam3, 111, 1);
							func_170(uParam2, 18, 1);
							func_170(uParam2, 49, 1);
							func_170(uParam2, 50, 1);
							func_170(uParam2, 51, 1);
							func_170(uParam2, 52, 1);
							func_170(uParam2, 62, 1);
							func_170(uParam2, 37, 1);
							func_170(uParam2, 46, 1);
							func_170(uParam2, 110, 1);
							func_174(uParam4, 9, 1);
							func_174(uParam4, 10, 1);
							func_174(uParam4, 12, 1);
							func_174(uParam4, 17, 1);
							func_174(uParam4, 18, 1);
							func_174(uParam4, 19, 1);
							func_174(uParam4, 20, 1);
							func_174(uParam4, 59, 1);
							func_174(uParam4, 60, 1);
							func_174(uParam4, 61, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 63, 1);
							func_174(uParam4, 64, 1);
							func_174(uParam4, 65, 1);
							func_174(uParam4, 66, 1);
							func_174(uParam4, 67, 1);
							func_174(uParam4, 68, 1);
							func_174(uParam4, 69, 1);
							func_174(uParam4, 70, 1);
							func_174(uParam4, 71, 1);
							func_174(uParam4, 72, 1);
							func_174(uParam4, 21, 1);
							func_174(uParam4, 22, 1);
							func_174(uParam4, 23, 1);
							func_174(uParam4, 24, 1);
							func_174(uParam4, 25, 1);
							func_174(uParam4, 26, 1);
							func_174(uParam4, 36, 1);
							func_174(uParam4, 46, 1);
							func_174(uParam4, 38, 1);
							func_174(uParam4, 29, 1);
							func_174(uParam4, 28, 1);
							func_174(uParam4, 8, 1);
							func_174(uParam4, 31, 1);
							func_174(uParam4, 32, 1);
							func_174(uParam4, 33, 1);
							func_174(uParam4, 34, 1);
							func_174(uParam4, 92, 1);
							func_174(uParam4, 93, 1);
							func_174(uParam4, 94, 1);
							func_174(uParam4, 96, 1);
							func_174(uParam4, 97, 1);
							func_174(uParam4, 98, 1);
							func_174(uParam4, 100, 1);
							func_174(uParam4, 103, 1);
							func_174(uParam4, 104, 1);
							func_174(uParam4, 105, 1);
							func_174(uParam4, 106, 1);
							func_174(uParam4, 107, 1);
							func_174(uParam4, 108, 1);
							func_172(uParam3, 67, 1);
							func_172(uParam3, 68, 1);
							func_172(uParam3, 69, 1);
							func_172(uParam3, 70, 1);
							func_172(uParam3, 71, 1);
							func_172(uParam3, 72, 1);
							func_172(uParam3, 73, 1);
							func_172(uParam3, 74, 1);
							func_172(uParam3, 78, 1);
							func_172(uParam3, 79, 1);
							func_172(uParam3, 80, 1);
							func_172(uParam3, 81, 1);
							func_172(uParam3, 82, 1);
							func_172(uParam3, 91, 1);
							func_172(uParam3, 92, 1);
							func_170(uParam2, 66, 1);
							func_170(uParam2, 67, 1);
							func_170(uParam2, 68, 1);
							func_170(uParam2, 69, 1);
							func_170(uParam2, 70, 1);
							func_170(uParam2, 71, 1);
							func_170(uParam2, 72, 1);
							func_170(uParam2, 73, 1);
							func_170(uParam2, 77, 1);
							func_170(uParam2, 78, 1);
							func_170(uParam2, 79, 1);
							func_170(uParam2, 80, 1);
							func_170(uParam2, 81, 1);
							func_170(uParam2, 90, 1);
							func_170(uParam2, 91, 1);
							func_174(uParam4, 92, 1);
							func_174(uParam4, 93, 1);
							func_174(uParam4, 94, 1);
							func_174(uParam4, 96, 1);
							func_174(uParam4, 97, 1);
							func_174(uParam4, 98, 1);
							func_174(uParam4, 100, 1);
							func_174(uParam4, 103, 1);
							func_174(uParam4, 104, 1);
							func_174(uParam4, 105, 1);
							func_174(uParam4, 106, 1);
							func_174(uParam4, 107, 1);
							func_174(uParam4, 108, 1);
							func_169(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_172(uParam3, 67, 1);
							func_172(uParam3, 68, 1);
							func_172(uParam3, 69, 1);
							func_172(uParam3, 70, 1);
							func_172(uParam3, 71, 1);
							func_172(uParam3, 72, 1);
							func_172(uParam3, 73, 1);
							func_172(uParam3, 74, 1);
							func_172(uParam3, 78, 1);
							func_172(uParam3, 79, 1);
							func_172(uParam3, 80, 1);
							func_172(uParam3, 81, 1);
							func_172(uParam3, 82, 1);
							func_172(uParam3, 91, 1);
							func_172(uParam3, 92, 1);
							func_170(uParam2, 66, 1);
							func_170(uParam2, 67, 1);
							func_170(uParam2, 68, 1);
							func_170(uParam2, 69, 1);
							func_170(uParam2, 70, 1);
							func_170(uParam2, 71, 1);
							func_170(uParam2, 72, 1);
							func_170(uParam2, 73, 1);
							func_170(uParam2, 77, 1);
							func_170(uParam2, 78, 1);
							func_170(uParam2, 79, 1);
							func_170(uParam2, 80, 1);
							func_170(uParam2, 81, 1);
							func_170(uParam2, 90, 1);
							func_170(uParam2, 91, 1);
							func_174(uParam4, 92, 1);
							func_174(uParam4, 93, 1);
							func_174(uParam4, 94, 1);
							func_174(uParam4, 96, 1);
							func_174(uParam4, 97, 1);
							func_174(uParam4, 98, 1);
							func_174(uParam4, 100, 1);
							func_174(uParam4, 103, 1);
							func_174(uParam4, 104, 1);
							func_174(uParam4, 105, 1);
							func_174(uParam4, 106, 1);
							func_174(uParam4, 107, 1);
							func_174(uParam4, 108, 1);
							func_169(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_172(uParam3, 67, 1);
							func_172(uParam3, 68, 1);
							func_172(uParam3, 69, 1);
							func_172(uParam3, 70, 1);
							func_172(uParam3, 71, 1);
							func_172(uParam3, 72, 1);
							func_172(uParam3, 73, 1);
							func_172(uParam3, 74, 1);
							func_172(uParam3, 78, 1);
							func_172(uParam3, 79, 1);
							func_172(uParam3, 80, 1);
							func_172(uParam3, 81, 1);
							func_172(uParam3, 82, 1);
							func_172(uParam3, 91, 1);
							func_172(uParam3, 92, 1);
							func_170(uParam2, 66, 1);
							func_170(uParam2, 67, 1);
							func_170(uParam2, 68, 1);
							func_170(uParam2, 69, 1);
							func_170(uParam2, 70, 1);
							func_170(uParam2, 71, 1);
							func_170(uParam2, 72, 1);
							func_170(uParam2, 73, 1);
							func_170(uParam2, 77, 1);
							func_170(uParam2, 78, 1);
							func_170(uParam2, 79, 1);
							func_170(uParam2, 80, 1);
							func_170(uParam2, 81, 1);
							func_170(uParam2, 90, 1);
							func_170(uParam2, 91, 1);
							func_174(uParam4, 92, 1);
							func_174(uParam4, 93, 1);
							func_174(uParam4, 94, 1);
							func_174(uParam4, 96, 1);
							func_174(uParam4, 97, 1);
							func_174(uParam4, 98, 1);
							func_174(uParam4, 100, 1);
							func_174(uParam4, 103, 1);
							func_174(uParam4, 104, 1);
							func_174(uParam4, 105, 1);
							func_174(uParam4, 106, 1);
							func_174(uParam4, 107, 1);
							func_174(uParam4, 108, 1);
							func_169(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 10:
					switch (iParam5)
					{
						case 0:
							func_172(uParam3, 3, 1);
							func_172(uParam3, 4, 1);
							func_172(uParam3, 6, 1);
							func_172(uParam3, 10, 1);
							func_172(uParam3, 54, 1);
							func_172(uParam3, 55, 1);
							func_172(uParam3, 56, 1);
							func_172(uParam3, 13, 1);
							func_172(uParam3, 16, 1);
							func_172(uParam3, 48, 1);
							func_172(uParam3, 49, 1);
							func_172(uParam3, 18, 1);
							func_172(uParam3, 50, 1);
							func_172(uParam3, 51, 1);
							func_172(uParam3, 52, 1);
							func_172(uParam3, 53, 1);
							func_172(uParam3, 62, 1);
							func_172(uParam3, 38, 1);
							func_172(uParam3, 47, 1);
							func_172(uParam3, 111, 1);
							func_172(uParam3, 20, 1);
							func_172(uParam3, 26, 1);
							func_172(uParam3, 27, 1);
							func_172(uParam3, 32, 1);
							func_172(uParam3, 33, 1);
							func_172(uParam3, 37, 1);
							func_172(uParam3, 39, 1);
							func_172(uParam3, 55, 1);
							func_172(uParam3, 106, 1);
							func_172(uParam3, 114, 1);
							func_172(uParam3, 116, 1);
							func_172(uParam3, 117, 1);
							func_172(uParam3, 118, 1);
							func_172(uParam3, 119, 1);
							func_170(uParam2, 3, 1);
							func_170(uParam2, 4, 1);
							func_170(uParam2, 6, 1);
							func_170(uParam2, 8, 1);
							func_170(uParam2, 9, 1);
							func_170(uParam2, 10, 1);
							func_170(uParam2, 53, 1);
							func_170(uParam2, 56, 1);
							func_170(uParam2, 55, 1);
							func_170(uParam2, 13, 1);
							func_170(uParam2, 18, 1);
							func_170(uParam2, 49, 1);
							func_170(uParam2, 50, 1);
							func_170(uParam2, 51, 1);
							func_170(uParam2, 52, 1);
							func_170(uParam2, 62, 1);
							func_170(uParam2, 37, 1);
							func_170(uParam2, 46, 1);
							func_170(uParam2, 110, 1);
							func_170(uParam2, 21, 1);
							func_170(uParam2, 26, 1);
							func_170(uParam2, 27, 1);
							func_170(uParam2, 28, 1);
							func_170(uParam2, 32, 1);
							func_170(uParam2, 36, 1);
							func_170(uParam2, 38, 1);
							func_170(uParam2, 55, 1);
							func_170(uParam2, 14, 1);
							func_170(uParam2, 105, 1);
							func_170(uParam2, 113, 1);
							func_170(uParam2, 114, 1);
							func_170(uParam2, 115, 1);
							func_170(uParam2, 116, 1);
							func_170(uParam2, 117, 1);
							func_174(uParam4, 3, 1);
							func_174(uParam4, 4, 1);
							func_174(uParam4, 14, 1);
							func_174(uParam4, 15, 1);
							func_174(uParam4, 16, 1);
							func_174(uParam4, 9, 1);
							func_174(uParam4, 10, 1);
							func_174(uParam4, 12, 1);
							func_174(uParam4, 13, 1);
							func_174(uParam4, 17, 1);
							func_174(uParam4, 18, 1);
							func_174(uParam4, 19, 1);
							func_174(uParam4, 20, 1);
							func_174(uParam4, 59, 1);
							func_174(uParam4, 60, 1);
							func_174(uParam4, 61, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 63, 1);
							func_174(uParam4, 64, 1);
							func_174(uParam4, 65, 1);
							func_174(uParam4, 66, 1);
							func_174(uParam4, 67, 1);
							func_174(uParam4, 68, 1);
							func_174(uParam4, 69, 1);
							func_174(uParam4, 70, 1);
							func_174(uParam4, 71, 1);
							func_174(uParam4, 72, 1);
							func_174(uParam4, 21, 1);
							func_174(uParam4, 22, 1);
							func_174(uParam4, 23, 1);
							func_174(uParam4, 24, 1);
							func_174(uParam4, 25, 1);
							func_174(uParam4, 26, 1);
							func_174(uParam4, 36, 1);
							func_174(uParam4, 46, 1);
							func_174(uParam4, 38, 1);
							func_174(uParam4, 29, 1);
							func_174(uParam4, 28, 1);
							func_174(uParam4, 8, 1);
							func_174(uParam4, 31, 1);
							func_174(uParam4, 32, 1);
							func_174(uParam4, 33, 1);
							func_174(uParam4, 34, 1);
							func_174(uParam4, 43, 1);
							func_174(uParam4, 92, 1);
							func_174(uParam4, 93, 1);
							func_174(uParam4, 94, 1);
							func_174(uParam4, 96, 1);
							func_174(uParam4, 97, 1);
							func_174(uParam4, 98, 1);
							func_174(uParam4, 100, 1);
							func_174(uParam4, 103, 1);
							func_174(uParam4, 104, 1);
							func_174(uParam4, 105, 1);
							func_174(uParam4, 106, 1);
							func_174(uParam4, 107, 1);
							func_174(uParam4, 108, 1);
							func_174(uParam4, 110, 1);
							func_174(uParam4, 112, 1);
							func_172(uParam3, 65, 1);
							func_172(uParam3, 67, 1);
							func_172(uParam3, 68, 1);
							func_172(uParam3, 69, 1);
							func_172(uParam3, 70, 1);
							func_172(uParam3, 71, 1);
							func_172(uParam3, 72, 1);
							func_172(uParam3, 73, 1);
							func_172(uParam3, 74, 1);
							func_172(uParam3, 75, 1);
							func_172(uParam3, 76, 1);
							func_172(uParam3, 78, 1);
							func_172(uParam3, 79, 1);
							func_172(uParam3, 80, 1);
							func_172(uParam3, 81, 1);
							func_172(uParam3, 82, 1);
							func_172(uParam3, 91, 1);
							func_172(uParam3, 92, 1);
							func_170(uParam2, 64, 1);
							func_170(uParam2, 65, 1);
							func_170(uParam2, 66, 1);
							func_170(uParam2, 67, 1);
							func_170(uParam2, 68, 1);
							func_170(uParam2, 69, 1);
							func_170(uParam2, 70, 1);
							func_170(uParam2, 71, 1);
							func_170(uParam2, 72, 1);
							func_170(uParam2, 73, 1);
							func_170(uParam2, 74, 1);
							func_170(uParam2, 75, 1);
							func_170(uParam2, 77, 1);
							func_170(uParam2, 78, 1);
							func_170(uParam2, 79, 1);
							func_170(uParam2, 80, 1);
							func_170(uParam2, 81, 1);
							func_170(uParam2, 90, 1);
							func_170(uParam2, 91, 1);
							func_169(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_172(uParam3, 3, 1);
							func_172(uParam3, 4, 1);
							func_172(uParam3, 6, 1);
							func_172(uParam3, 13, 1);
							func_172(uParam3, 18, 1);
							func_172(uParam3, 50, 1);
							func_172(uParam3, 51, 1);
							func_172(uParam3, 52, 1);
							func_172(uParam3, 53, 1);
							func_172(uParam3, 62, 1);
							func_172(uParam3, 38, 1);
							func_172(uParam3, 47, 1);
							func_172(uParam3, 111, 1);
							func_172(uParam3, 19, 1);
							func_172(uParam3, 20, 1);
							func_172(uParam3, 26, 1);
							func_172(uParam3, 27, 1);
							func_172(uParam3, 32, 1);
							func_172(uParam3, 33, 1);
							func_172(uParam3, 37, 1);
							func_172(uParam3, 39, 1);
							func_172(uParam3, 55, 1);
							func_172(uParam3, 106, 1);
							func_172(uParam3, 114, 1);
							func_172(uParam3, 116, 1);
							func_172(uParam3, 117, 1);
							func_172(uParam3, 118, 1);
							func_172(uParam3, 119, 1);
							func_170(uParam2, 3, 1);
							func_170(uParam2, 4, 1);
							func_170(uParam2, 6, 1);
							func_170(uParam2, 8, 1);
							func_170(uParam2, 9, 1);
							func_170(uParam2, 10, 1);
							func_170(uParam2, 53, 1);
							func_170(uParam2, 56, 1);
							func_170(uParam2, 55, 1);
							func_170(uParam2, 11, 1);
							func_170(uParam2, 13, 1);
							func_170(uParam2, 18, 1);
							func_170(uParam2, 49, 1);
							func_170(uParam2, 50, 1);
							func_170(uParam2, 51, 1);
							func_170(uParam2, 52, 1);
							func_170(uParam2, 62, 1);
							func_170(uParam2, 37, 1);
							func_170(uParam2, 46, 1);
							func_170(uParam2, 110, 1);
							func_170(uParam2, 21, 1);
							func_170(uParam2, 22, 1);
							func_170(uParam2, 54, 1);
							func_170(uParam2, 26, 1);
							func_170(uParam2, 27, 1);
							func_170(uParam2, 28, 1);
							func_170(uParam2, 30, 1);
							func_170(uParam2, 31, 1);
							func_170(uParam2, 32, 1);
							func_170(uParam2, 36, 1);
							func_170(uParam2, 38, 1);
							func_170(uParam2, 55, 1);
							func_170(uParam2, 14, 1);
							func_170(uParam2, 105, 1);
							func_170(uParam2, 113, 1);
							func_170(uParam2, 114, 1);
							func_170(uParam2, 115, 1);
							func_170(uParam2, 116, 1);
							func_170(uParam2, 117, 1);
							func_174(uParam4, 2, 1);
							func_174(uParam4, 3, 1);
							func_174(uParam4, 4, 1);
							func_174(uParam4, 14, 1);
							func_174(uParam4, 15, 1);
							func_174(uParam4, 16, 1);
							func_174(uParam4, 9, 1);
							func_174(uParam4, 10, 1);
							func_174(uParam4, 12, 1);
							func_174(uParam4, 13, 1);
							func_174(uParam4, 17, 1);
							func_174(uParam4, 18, 1);
							func_174(uParam4, 19, 1);
							func_174(uParam4, 20, 1);
							func_174(uParam4, 59, 1);
							func_174(uParam4, 60, 1);
							func_174(uParam4, 61, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 63, 1);
							func_174(uParam4, 64, 1);
							func_174(uParam4, 65, 1);
							func_174(uParam4, 66, 1);
							func_174(uParam4, 67, 1);
							func_174(uParam4, 68, 1);
							func_174(uParam4, 69, 1);
							func_174(uParam4, 70, 1);
							func_174(uParam4, 71, 1);
							func_174(uParam4, 72, 1);
							func_174(uParam4, 21, 1);
							func_174(uParam4, 22, 1);
							func_174(uParam4, 23, 1);
							func_174(uParam4, 24, 1);
							func_174(uParam4, 25, 1);
							func_174(uParam4, 26, 1);
							func_174(uParam4, 36, 1);
							func_174(uParam4, 46, 1);
							func_174(uParam4, 38, 1);
							func_174(uParam4, 29, 1);
							func_174(uParam4, 28, 1);
							func_174(uParam4, 8, 1);
							func_174(uParam4, 31, 1);
							func_174(uParam4, 32, 1);
							func_174(uParam4, 33, 1);
							func_174(uParam4, 34, 1);
							func_174(uParam4, 43, 1);
							func_174(uParam4, 92, 1);
							func_174(uParam4, 93, 1);
							func_174(uParam4, 94, 1);
							func_174(uParam4, 96, 1);
							func_174(uParam4, 97, 1);
							func_174(uParam4, 98, 1);
							func_174(uParam4, 100, 1);
							func_174(uParam4, 103, 1);
							func_174(uParam4, 104, 1);
							func_174(uParam4, 105, 1);
							func_174(uParam4, 106, 1);
							func_174(uParam4, 107, 1);
							func_174(uParam4, 108, 1);
							func_174(uParam4, 110, 1);
							func_174(uParam4, 112, 1);
							func_172(uParam3, 65, 1);
							func_172(uParam3, 67, 1);
							func_172(uParam3, 68, 1);
							func_172(uParam3, 69, 1);
							func_172(uParam3, 70, 1);
							func_172(uParam3, 71, 1);
							func_172(uParam3, 72, 1);
							func_172(uParam3, 73, 1);
							func_172(uParam3, 74, 1);
							func_172(uParam3, 75, 1);
							func_172(uParam3, 76, 1);
							func_172(uParam3, 78, 1);
							func_172(uParam3, 79, 1);
							func_172(uParam3, 80, 1);
							func_172(uParam3, 81, 1);
							func_172(uParam3, 82, 1);
							func_172(uParam3, 91, 1);
							func_172(uParam3, 92, 1);
							func_170(uParam2, 64, 1);
							func_170(uParam2, 65, 1);
							func_170(uParam2, 66, 1);
							func_170(uParam2, 67, 1);
							func_170(uParam2, 68, 1);
							func_170(uParam2, 69, 1);
							func_170(uParam2, 70, 1);
							func_170(uParam2, 71, 1);
							func_170(uParam2, 72, 1);
							func_170(uParam2, 73, 1);
							func_170(uParam2, 74, 1);
							func_170(uParam2, 75, 1);
							func_170(uParam2, 77, 1);
							func_170(uParam2, 78, 1);
							func_170(uParam2, 79, 1);
							func_170(uParam2, 80, 1);
							func_170(uParam2, 81, 1);
							func_170(uParam2, 90, 1);
							func_170(uParam2, 91, 1);
							func_169(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_172(uParam3, 38, 1);
							func_172(uParam3, 47, 1);
							func_172(uParam3, 111, 1);
							func_172(uParam3, 39, 1);
							func_172(uParam3, 106, 1);
							func_172(uParam3, 114, 1);
							func_172(uParam3, 116, 1);
							func_172(uParam3, 117, 1);
							func_172(uParam3, 118, 1);
							func_172(uParam3, 119, 1);
							func_170(uParam2, 37, 1);
							func_170(uParam2, 46, 1);
							func_170(uParam2, 110, 1);
							func_170(uParam2, 38, 1);
							func_170(uParam2, 14, 1);
							func_170(uParam2, 105, 1);
							func_170(uParam2, 113, 1);
							func_170(uParam2, 114, 1);
							func_170(uParam2, 115, 1);
							func_170(uParam2, 116, 1);
							func_170(uParam2, 117, 1);
							func_174(uParam4, 9, 1);
							func_174(uParam4, 10, 1);
							func_174(uParam4, 12, 1);
							func_174(uParam4, 18, 1);
							func_174(uParam4, 19, 1);
							func_174(uParam4, 20, 1);
							func_174(uParam4, 59, 1);
							func_174(uParam4, 60, 1);
							func_174(uParam4, 61, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 63, 1);
							func_174(uParam4, 64, 1);
							func_174(uParam4, 65, 1);
							func_174(uParam4, 66, 1);
							func_174(uParam4, 67, 1);
							func_174(uParam4, 68, 1);
							func_174(uParam4, 69, 1);
							func_174(uParam4, 70, 1);
							func_174(uParam4, 71, 1);
							func_174(uParam4, 72, 1);
							func_174(uParam4, 21, 1);
							func_174(uParam4, 22, 1);
							func_174(uParam4, 23, 1);
							func_174(uParam4, 24, 1);
							func_174(uParam4, 25, 1);
							func_174(uParam4, 26, 1);
							func_174(uParam4, 36, 1);
							func_174(uParam4, 46, 1);
							func_174(uParam4, 38, 1);
							func_174(uParam4, 29, 1);
							func_174(uParam4, 28, 1);
							func_174(uParam4, 8, 1);
							func_174(uParam4, 31, 1);
							func_174(uParam4, 32, 1);
							func_174(uParam4, 33, 1);
							func_174(uParam4, 34, 1);
							func_174(uParam4, 92, 1);
							func_174(uParam4, 93, 1);
							func_174(uParam4, 94, 1);
							func_174(uParam4, 96, 1);
							func_174(uParam4, 97, 1);
							func_174(uParam4, 98, 1);
							func_174(uParam4, 100, 1);
							func_174(uParam4, 103, 1);
							func_174(uParam4, 104, 1);
							func_174(uParam4, 105, 1);
							func_174(uParam4, 106, 1);
							func_174(uParam4, 107, 1);
							func_174(uParam4, 108, 1);
							func_174(uParam4, 110, 1);
							func_174(uParam4, 112, 1);
							func_172(uParam3, 65, 1);
							func_172(uParam3, 67, 1);
							func_172(uParam3, 68, 1);
							func_172(uParam3, 69, 1);
							func_172(uParam3, 70, 1);
							func_172(uParam3, 71, 1);
							func_172(uParam3, 72, 1);
							func_172(uParam3, 73, 1);
							func_172(uParam3, 74, 1);
							func_172(uParam3, 75, 1);
							func_172(uParam3, 76, 1);
							func_172(uParam3, 78, 1);
							func_172(uParam3, 79, 1);
							func_172(uParam3, 80, 1);
							func_172(uParam3, 81, 1);
							func_172(uParam3, 82, 1);
							func_172(uParam3, 91, 1);
							func_172(uParam3, 92, 1);
							func_170(uParam2, 64, 1);
							func_170(uParam2, 65, 1);
							func_170(uParam2, 66, 1);
							func_170(uParam2, 67, 1);
							func_170(uParam2, 68, 1);
							func_170(uParam2, 69, 1);
							func_170(uParam2, 70, 1);
							func_170(uParam2, 71, 1);
							func_170(uParam2, 72, 1);
							func_170(uParam2, 73, 1);
							func_170(uParam2, 74, 1);
							func_170(uParam2, 75, 1);
							func_170(uParam2, 77, 1);
							func_170(uParam2, 78, 1);
							func_170(uParam2, 79, 1);
							func_170(uParam2, 80, 1);
							func_170(uParam2, 81, 1);
							func_170(uParam2, 90, 1);
							func_170(uParam2, 91, 1);
							func_169(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 13:
					switch (iParam5)
					{
						case 0:
							func_172(uParam3, 16, 1);
							func_172(uParam3, 48, 1);
							func_172(uParam3, 49, 1);
							func_172(uParam3, 18, 1);
							func_172(uParam3, 50, 1);
							func_172(uParam3, 51, 1);
							func_172(uParam3, 52, 1);
							func_172(uParam3, 53, 1);
							func_172(uParam3, 62, 1);
							func_172(uParam3, 38, 1);
							func_172(uParam3, 47, 1);
							func_172(uParam3, 111, 1);
							func_170(uParam2, 18, 1);
							func_170(uParam2, 49, 1);
							func_170(uParam2, 50, 1);
							func_170(uParam2, 51, 1);
							func_170(uParam2, 52, 1);
							func_170(uParam2, 62, 1);
							func_170(uParam2, 37, 1);
							func_170(uParam2, 46, 1);
							func_170(uParam2, 110, 1);
							func_170(uParam2, 19, 1);
							func_174(uParam4, 2, 1);
							func_174(uParam4, 3, 1);
							func_174(uParam4, 8, 1);
							func_174(uParam4, 9, 1);
							func_174(uParam4, 10, 1);
							func_174(uParam4, 13, 1);
							func_174(uParam4, 17, 1);
							func_174(uParam4, 18, 1);
							func_174(uParam4, 19, 1);
							func_174(uParam4, 20, 1);
							func_174(uParam4, 59, 1);
							func_174(uParam4, 60, 1);
							func_174(uParam4, 61, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 63, 1);
							func_174(uParam4, 64, 1);
							func_174(uParam4, 65, 1);
							func_174(uParam4, 66, 1);
							func_174(uParam4, 67, 1);
							func_174(uParam4, 68, 1);
							func_174(uParam4, 69, 1);
							func_174(uParam4, 70, 1);
							func_174(uParam4, 71, 1);
							func_174(uParam4, 72, 1);
							func_174(uParam4, 21, 1);
							func_174(uParam4, 22, 1);
							func_174(uParam4, 23, 1);
							func_174(uParam4, 24, 1);
							func_174(uParam4, 25, 1);
							func_174(uParam4, 26, 1);
							func_174(uParam4, 36, 1);
							func_174(uParam4, 46, 1);
							func_174(uParam4, 38, 1);
							func_174(uParam4, 29, 1);
							func_174(uParam4, 28, 1);
							func_174(uParam4, 31, 1);
							func_174(uParam4, 32, 1);
							func_174(uParam4, 33, 1);
							func_174(uParam4, 34, 1);
							func_174(uParam4, 43, 1);
							func_174(uParam4, 92, 1);
							func_174(uParam4, 93, 1);
							func_174(uParam4, 94, 1);
							func_174(uParam4, 96, 1);
							func_174(uParam4, 97, 1);
							func_174(uParam4, 98, 1);
							func_174(uParam4, 100, 1);
							func_174(uParam4, 103, 1);
							func_174(uParam4, 104, 1);
							func_174(uParam4, 105, 1);
							func_174(uParam4, 106, 1);
							func_174(uParam4, 107, 1);
							func_174(uParam4, 108, 1);
							func_174(uParam4, 110, 1);
							func_174(uParam4, 112, 1);
							func_174(uParam4, 115, 1);
							func_174(uParam4, 116, 1);
							func_172(uParam3, 67, 1);
							func_172(uParam3, 68, 1);
							func_172(uParam3, 69, 1);
							func_172(uParam3, 70, 1);
							func_172(uParam3, 71, 1);
							func_172(uParam3, 72, 1);
							func_172(uParam3, 73, 1);
							func_172(uParam3, 74, 1);
							func_172(uParam3, 78, 1);
							func_172(uParam3, 79, 1);
							func_172(uParam3, 80, 1);
							func_172(uParam3, 81, 1);
							func_172(uParam3, 82, 1);
							func_172(uParam3, 91, 1);
							func_172(uParam3, 92, 1);
							func_170(uParam2, 66, 1);
							func_170(uParam2, 67, 1);
							func_170(uParam2, 68, 1);
							func_170(uParam2, 69, 1);
							func_170(uParam2, 70, 1);
							func_170(uParam2, 71, 1);
							func_170(uParam2, 72, 1);
							func_170(uParam2, 73, 1);
							func_170(uParam2, 77, 1);
							func_170(uParam2, 78, 1);
							func_170(uParam2, 79, 1);
							func_170(uParam2, 80, 1);
							func_170(uParam2, 81, 1);
							func_170(uParam2, 90, 1);
							func_170(uParam2, 91, 1);
							func_169(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_172(uParam3, 16, 1);
							func_172(uParam3, 48, 1);
							func_172(uParam3, 49, 1);
							func_172(uParam3, 18, 1);
							func_172(uParam3, 50, 1);
							func_172(uParam3, 51, 1);
							func_172(uParam3, 52, 1);
							func_172(uParam3, 53, 1);
							func_172(uParam3, 62, 1);
							func_172(uParam3, 38, 1);
							func_172(uParam3, 47, 1);
							func_172(uParam3, 111, 1);
							func_170(uParam2, 18, 1);
							func_170(uParam2, 49, 1);
							func_170(uParam2, 50, 1);
							func_170(uParam2, 51, 1);
							func_170(uParam2, 52, 1);
							func_170(uParam2, 62, 1);
							func_170(uParam2, 37, 1);
							func_170(uParam2, 46, 1);
							func_170(uParam2, 110, 1);
							func_174(uParam4, 2, 1);
							func_174(uParam4, 7, 1);
							func_174(uParam4, 8, 1);
							func_174(uParam4, 9, 1);
							func_174(uParam4, 10, 1);
							func_174(uParam4, 13, 1);
							func_174(uParam4, 17, 1);
							func_174(uParam4, 18, 1);
							func_174(uParam4, 19, 1);
							func_174(uParam4, 20, 1);
							func_174(uParam4, 59, 1);
							func_174(uParam4, 60, 1);
							func_174(uParam4, 61, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 63, 1);
							func_174(uParam4, 64, 1);
							func_174(uParam4, 65, 1);
							func_174(uParam4, 66, 1);
							func_174(uParam4, 67, 1);
							func_174(uParam4, 68, 1);
							func_174(uParam4, 69, 1);
							func_174(uParam4, 70, 1);
							func_174(uParam4, 71, 1);
							func_174(uParam4, 72, 1);
							func_174(uParam4, 21, 1);
							func_174(uParam4, 22, 1);
							func_174(uParam4, 23, 1);
							func_174(uParam4, 24, 1);
							func_174(uParam4, 25, 1);
							func_174(uParam4, 26, 1);
							func_174(uParam4, 36, 1);
							func_174(uParam4, 46, 1);
							func_174(uParam4, 38, 1);
							func_174(uParam4, 29, 1);
							func_174(uParam4, 28, 1);
							func_174(uParam4, 31, 1);
							func_174(uParam4, 32, 1);
							func_174(uParam4, 33, 1);
							func_174(uParam4, 34, 1);
							func_174(uParam4, 43, 1);
							func_174(uParam4, 92, 1);
							func_174(uParam4, 93, 1);
							func_174(uParam4, 94, 1);
							func_174(uParam4, 96, 1);
							func_174(uParam4, 97, 1);
							func_174(uParam4, 98, 1);
							func_174(uParam4, 100, 1);
							func_174(uParam4, 103, 1);
							func_174(uParam4, 104, 1);
							func_174(uParam4, 105, 1);
							func_174(uParam4, 106, 1);
							func_174(uParam4, 107, 1);
							func_174(uParam4, 108, 1);
							func_174(uParam4, 110, 1);
							func_174(uParam4, 112, 1);
							func_174(uParam4, 115, 1);
							func_174(uParam4, 116, 1);
							func_169(uParam2, uParam3, uParam4);
							func_172(uParam3, 67, 1);
							func_172(uParam3, 68, 1);
							func_172(uParam3, 69, 1);
							func_172(uParam3, 70, 1);
							func_172(uParam3, 71, 1);
							func_172(uParam3, 72, 1);
							func_172(uParam3, 73, 1);
							func_172(uParam3, 74, 1);
							func_172(uParam3, 78, 1);
							func_172(uParam3, 79, 1);
							func_172(uParam3, 80, 1);
							func_172(uParam3, 81, 1);
							func_172(uParam3, 82, 1);
							func_172(uParam3, 91, 1);
							func_172(uParam3, 92, 1);
							func_170(uParam2, 66, 1);
							func_170(uParam2, 67, 1);
							func_170(uParam2, 68, 1);
							func_170(uParam2, 69, 1);
							func_170(uParam2, 70, 1);
							func_170(uParam2, 71, 1);
							func_170(uParam2, 72, 1);
							func_170(uParam2, 73, 1);
							func_170(uParam2, 77, 1);
							func_170(uParam2, 78, 1);
							func_170(uParam2, 79, 1);
							func_170(uParam2, 80, 1);
							func_170(uParam2, 81, 1);
							func_170(uParam2, 90, 1);
							func_170(uParam2, 91, 1);
							break;
						
						case 2:
							func_172(uParam3, 18, 1);
							func_172(uParam3, 50, 1);
							func_172(uParam3, 51, 1);
							func_172(uParam3, 52, 1);
							func_172(uParam3, 53, 1);
							func_172(uParam3, 62, 1);
							func_172(uParam3, 38, 1);
							func_172(uParam3, 47, 1);
							func_172(uParam3, 111, 1);
							func_170(uParam2, 18, 1);
							func_170(uParam2, 49, 1);
							func_170(uParam2, 50, 1);
							func_170(uParam2, 51, 1);
							func_170(uParam2, 52, 1);
							func_170(uParam2, 62, 1);
							func_170(uParam2, 37, 1);
							func_170(uParam2, 46, 1);
							func_170(uParam2, 110, 1);
							func_174(uParam4, 1, 1);
							func_174(uParam4, 2, 1);
							func_174(uParam4, 3, 1);
							func_174(uParam4, 5, 1);
							func_174(uParam4, 8, 1);
							func_174(uParam4, 9, 1);
							func_174(uParam4, 10, 1);
							func_174(uParam4, 13, 1);
							func_174(uParam4, 17, 1);
							func_174(uParam4, 18, 1);
							func_174(uParam4, 19, 1);
							func_174(uParam4, 20, 1);
							func_174(uParam4, 59, 1);
							func_174(uParam4, 60, 1);
							func_174(uParam4, 61, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 63, 1);
							func_174(uParam4, 64, 1);
							func_174(uParam4, 65, 1);
							func_174(uParam4, 66, 1);
							func_174(uParam4, 67, 1);
							func_174(uParam4, 68, 1);
							func_174(uParam4, 69, 1);
							func_174(uParam4, 70, 1);
							func_174(uParam4, 71, 1);
							func_174(uParam4, 72, 1);
							func_174(uParam4, 21, 1);
							func_174(uParam4, 22, 1);
							func_174(uParam4, 23, 1);
							func_174(uParam4, 24, 1);
							func_174(uParam4, 25, 1);
							func_174(uParam4, 26, 1);
							func_174(uParam4, 36, 1);
							func_174(uParam4, 46, 1);
							func_174(uParam4, 38, 1);
							func_174(uParam4, 29, 1);
							func_174(uParam4, 28, 1);
							func_174(uParam4, 31, 1);
							func_174(uParam4, 32, 1);
							func_174(uParam4, 33, 1);
							func_174(uParam4, 34, 1);
							func_174(uParam4, 92, 1);
							func_174(uParam4, 93, 1);
							func_174(uParam4, 94, 1);
							func_174(uParam4, 96, 1);
							func_174(uParam4, 97, 1);
							func_174(uParam4, 98, 1);
							func_174(uParam4, 100, 1);
							func_174(uParam4, 103, 1);
							func_174(uParam4, 104, 1);
							func_174(uParam4, 105, 1);
							func_174(uParam4, 106, 1);
							func_174(uParam4, 107, 1);
							func_174(uParam4, 108, 1);
							func_174(uParam4, 110, 1);
							func_174(uParam4, 112, 1);
							func_174(uParam4, 115, 1);
							func_174(uParam4, 116, 1);
							func_169(uParam2, uParam3, uParam4);
							func_172(uParam3, 67, 1);
							func_172(uParam3, 68, 1);
							func_172(uParam3, 69, 1);
							func_172(uParam3, 70, 1);
							func_172(uParam3, 71, 1);
							func_172(uParam3, 72, 1);
							func_172(uParam3, 73, 1);
							func_172(uParam3, 74, 1);
							func_172(uParam3, 78, 1);
							func_172(uParam3, 79, 1);
							func_172(uParam3, 80, 1);
							func_172(uParam3, 81, 1);
							func_172(uParam3, 82, 1);
							func_172(uParam3, 91, 1);
							func_172(uParam3, 92, 1);
							func_170(uParam2, 66, 1);
							func_170(uParam2, 67, 1);
							func_170(uParam2, 68, 1);
							func_170(uParam2, 69, 1);
							func_170(uParam2, 70, 1);
							func_170(uParam2, 71, 1);
							func_170(uParam2, 72, 1);
							func_170(uParam2, 73, 1);
							func_170(uParam2, 77, 1);
							func_170(uParam2, 78, 1);
							func_170(uParam2, 79, 1);
							func_170(uParam2, 80, 1);
							func_170(uParam2, 81, 1);
							func_170(uParam2, 90, 1);
							func_170(uParam2, 91, 1);
							break;
					}
					break;
				
				case 16:
					switch (iParam5)
					{
						case 0:
							func_172(uParam3, 4, 1);
							break;
						
						case 1:
							func_174(uParam4, 43, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 23:
					switch (iParam5)
					{
						case 0:
							func_172(uParam3, 67, 1);
							func_172(uParam3, 68, 1);
							func_172(uParam3, 69, 1);
							func_172(uParam3, 70, 1);
							func_172(uParam3, 71, 1);
							func_172(uParam3, 72, 1);
							func_172(uParam3, 73, 1);
							func_172(uParam3, 74, 1);
							func_172(uParam3, 78, 1);
							func_172(uParam3, 79, 1);
							func_172(uParam3, 80, 1);
							func_172(uParam3, 81, 1);
							func_172(uParam3, 82, 1);
							func_172(uParam3, 91, 1);
							func_172(uParam3, 92, 1);
							func_170(uParam2, 66, 1);
							func_170(uParam2, 67, 1);
							func_170(uParam2, 68, 1);
							func_170(uParam2, 69, 1);
							func_170(uParam2, 70, 1);
							func_170(uParam2, 71, 1);
							func_170(uParam2, 72, 1);
							func_170(uParam2, 73, 1);
							func_170(uParam2, 74, 1);
							func_170(uParam2, 77, 1);
							func_170(uParam2, 78, 1);
							func_170(uParam2, 79, 1);
							func_170(uParam2, 80, 1);
							func_170(uParam2, 81, 1);
							func_170(uParam2, 90, 1);
							func_170(uParam2, 91, 1);
							func_174(uParam4, 92, 1);
							func_174(uParam4, 93, 1);
							func_174(uParam4, 94, 1);
							func_174(uParam4, 96, 1);
							func_174(uParam4, 97, 1);
							func_174(uParam4, 98, 1);
							func_174(uParam4, 100, 1);
							func_174(uParam4, 103, 1);
							func_174(uParam4, 104, 1);
							func_174(uParam4, 105, 1);
							func_174(uParam4, 106, 1);
							func_174(uParam4, 107, 1);
							func_174(uParam4, 108, 1);
							func_174(uParam4, 110, 1);
							func_174(uParam4, 112, 1);
							func_169(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_172(uParam3, 67, 1);
							func_172(uParam3, 68, 1);
							func_172(uParam3, 69, 1);
							func_172(uParam3, 70, 1);
							func_172(uParam3, 71, 1);
							func_172(uParam3, 72, 1);
							func_172(uParam3, 73, 1);
							func_172(uParam3, 74, 1);
							func_172(uParam3, 78, 1);
							func_172(uParam3, 79, 1);
							func_172(uParam3, 80, 1);
							func_172(uParam3, 81, 1);
							func_172(uParam3, 82, 1);
							func_172(uParam3, 91, 1);
							func_172(uParam3, 92, 1);
							func_170(uParam2, 66, 1);
							func_170(uParam2, 67, 1);
							func_170(uParam2, 68, 1);
							func_170(uParam2, 69, 1);
							func_170(uParam2, 70, 1);
							func_170(uParam2, 71, 1);
							func_170(uParam2, 72, 1);
							func_170(uParam2, 73, 1);
							func_170(uParam2, 74, 1);
							func_170(uParam2, 77, 1);
							func_170(uParam2, 78, 1);
							func_170(uParam2, 79, 1);
							func_170(uParam2, 80, 1);
							func_170(uParam2, 81, 1);
							func_170(uParam2, 90, 1);
							func_170(uParam2, 91, 1);
							func_174(uParam4, 92, 1);
							func_174(uParam4, 93, 1);
							func_174(uParam4, 94, 1);
							func_174(uParam4, 96, 1);
							func_174(uParam4, 97, 1);
							func_174(uParam4, 98, 1);
							func_174(uParam4, 100, 1);
							func_174(uParam4, 103, 1);
							func_174(uParam4, 104, 1);
							func_174(uParam4, 105, 1);
							func_174(uParam4, 106, 1);
							func_174(uParam4, 107, 1);
							func_174(uParam4, 108, 1);
							func_174(uParam4, 110, 1);
							func_174(uParam4, 112, 1);
							func_169(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_172(uParam3, 67, 1);
							func_172(uParam3, 68, 1);
							func_172(uParam3, 69, 1);
							func_172(uParam3, 70, 1);
							func_172(uParam3, 71, 1);
							func_172(uParam3, 72, 1);
							func_172(uParam3, 73, 1);
							func_172(uParam3, 74, 1);
							func_172(uParam3, 78, 1);
							func_172(uParam3, 79, 1);
							func_172(uParam3, 80, 1);
							func_172(uParam3, 81, 1);
							func_172(uParam3, 82, 1);
							func_172(uParam3, 91, 1);
							func_172(uParam3, 92, 1);
							func_170(uParam2, 66, 1);
							func_170(uParam2, 67, 1);
							func_170(uParam2, 68, 1);
							func_170(uParam2, 69, 1);
							func_170(uParam2, 70, 1);
							func_170(uParam2, 71, 1);
							func_170(uParam2, 72, 1);
							func_170(uParam2, 73, 1);
							func_170(uParam2, 74, 1);
							func_170(uParam2, 77, 1);
							func_170(uParam2, 78, 1);
							func_170(uParam2, 79, 1);
							func_170(uParam2, 80, 1);
							func_170(uParam2, 81, 1);
							func_170(uParam2, 90, 1);
							func_170(uParam2, 91, 1);
							func_174(uParam4, 92, 1);
							func_174(uParam4, 93, 1);
							func_174(uParam4, 94, 1);
							func_174(uParam4, 96, 1);
							func_174(uParam4, 97, 1);
							func_174(uParam4, 98, 1);
							func_174(uParam4, 100, 1);
							func_174(uParam4, 103, 1);
							func_174(uParam4, 104, 1);
							func_174(uParam4, 105, 1);
							func_174(uParam4, 106, 1);
							func_174(uParam4, 107, 1);
							func_174(uParam4, 108, 1);
							func_174(uParam4, 110, 1);
							func_174(uParam4, 112, 1);
							func_169(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 17:
					switch (iParam5)
					{
						case 0:
							func_172(uParam3, 16, 1);
							func_172(uParam3, 48, 1);
							func_172(uParam3, 49, 1);
							func_172(uParam3, 18, 1);
							func_172(uParam3, 50, 1);
							func_172(uParam3, 51, 1);
							func_172(uParam3, 52, 1);
							func_172(uParam3, 53, 1);
							func_172(uParam3, 62, 1);
							func_172(uParam3, 38, 1);
							func_172(uParam3, 111, 1);
							func_170(uParam2, 16, 1);
							func_170(uParam2, 47, 1);
							func_170(uParam2, 48, 1);
							func_170(uParam2, 18, 1);
							func_170(uParam2, 49, 1);
							func_170(uParam2, 50, 1);
							func_170(uParam2, 51, 1);
							func_170(uParam2, 52, 1);
							func_170(uParam2, 62, 1);
							func_170(uParam2, 37, 1);
							func_170(uParam2, 46, 1);
							func_170(uParam2, 110, 1);
							func_174(uParam4, 1, 1);
							func_174(uParam4, 2, 1);
							func_174(uParam4, 3, 1);
							func_174(uParam4, 5, 1);
							func_174(uParam4, 6, 1);
							func_174(uParam4, 7, 1);
							func_174(uParam4, 8, 1);
							func_174(uParam4, 9, 1);
							func_174(uParam4, 10, 1);
							func_174(uParam4, 13, 1);
							func_174(uParam4, 18, 1);
							func_174(uParam4, 19, 1);
							func_174(uParam4, 20, 1);
							func_174(uParam4, 59, 1);
							func_174(uParam4, 60, 1);
							func_174(uParam4, 61, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 63, 1);
							func_174(uParam4, 64, 1);
							func_174(uParam4, 65, 1);
							func_174(uParam4, 66, 1);
							func_174(uParam4, 67, 1);
							func_174(uParam4, 68, 1);
							func_174(uParam4, 69, 1);
							func_174(uParam4, 70, 1);
							func_174(uParam4, 71, 1);
							func_174(uParam4, 72, 1);
							func_174(uParam4, 21, 1);
							func_174(uParam4, 22, 1);
							func_174(uParam4, 23, 1);
							func_174(uParam4, 24, 1);
							func_174(uParam4, 25, 1);
							func_174(uParam4, 26, 1);
							func_174(uParam4, 36, 1);
							func_174(uParam4, 46, 1);
							func_174(uParam4, 38, 1);
							func_174(uParam4, 29, 1);
							func_174(uParam4, 28, 1);
							func_174(uParam4, 92, 1);
							func_174(uParam4, 93, 1);
							func_174(uParam4, 94, 1);
							func_174(uParam4, 96, 1);
							func_174(uParam4, 97, 1);
							func_174(uParam4, 98, 1);
							func_174(uParam4, 100, 1);
							func_174(uParam4, 103, 1);
							func_174(uParam4, 104, 1);
							func_174(uParam4, 105, 1);
							func_174(uParam4, 106, 1);
							func_174(uParam4, 107, 1);
							func_174(uParam4, 108, 1);
							func_172(uParam3, 67, 1);
							func_172(uParam3, 68, 1);
							func_172(uParam3, 69, 1);
							func_172(uParam3, 70, 1);
							func_172(uParam3, 71, 1);
							func_172(uParam3, 72, 1);
							func_172(uParam3, 73, 1);
							func_172(uParam3, 74, 1);
							func_172(uParam3, 78, 1);
							func_172(uParam3, 79, 1);
							func_172(uParam3, 80, 1);
							func_172(uParam3, 81, 1);
							func_172(uParam3, 82, 1);
							func_172(uParam3, 91, 1);
							func_172(uParam3, 92, 1);
							func_170(uParam2, 66, 1);
							func_170(uParam2, 67, 1);
							func_170(uParam2, 68, 1);
							func_170(uParam2, 69, 1);
							func_170(uParam2, 70, 1);
							func_170(uParam2, 71, 1);
							func_170(uParam2, 72, 1);
							func_170(uParam2, 73, 1);
							func_170(uParam2, 77, 1);
							func_170(uParam2, 78, 1);
							func_170(uParam2, 79, 1);
							func_170(uParam2, 80, 1);
							func_170(uParam2, 81, 1);
							func_170(uParam2, 90, 1);
							func_170(uParam2, 91, 1);
							break;
						
						case 1:
							func_172(uParam3, 16, 1);
							func_172(uParam3, 48, 1);
							func_172(uParam3, 49, 1);
							func_172(uParam3, 18, 1);
							func_172(uParam3, 50, 1);
							func_172(uParam3, 51, 1);
							func_172(uParam3, 52, 1);
							func_172(uParam3, 53, 1);
							func_172(uParam3, 62, 1);
							func_172(uParam3, 38, 1);
							func_172(uParam3, 47, 1);
							func_172(uParam3, 111, 1);
							func_170(uParam2, 16, 1);
							func_170(uParam2, 47, 1);
							func_170(uParam2, 48, 1);
							func_170(uParam2, 18, 1);
							func_170(uParam2, 49, 1);
							func_170(uParam2, 50, 1);
							func_170(uParam2, 51, 1);
							func_170(uParam2, 52, 1);
							func_170(uParam2, 62, 1);
							func_170(uParam2, 37, 1);
							func_170(uParam2, 46, 1);
							func_170(uParam2, 110, 1);
							func_174(uParam4, 1, 1);
							func_174(uParam4, 2, 1);
							func_174(uParam4, 3, 1);
							func_174(uParam4, 5, 1);
							func_174(uParam4, 6, 1);
							func_174(uParam4, 7, 1);
							func_174(uParam4, 8, 1);
							func_174(uParam4, 9, 1);
							func_174(uParam4, 10, 1);
							func_174(uParam4, 13, 1);
							func_174(uParam4, 18, 1);
							func_174(uParam4, 19, 1);
							func_174(uParam4, 20, 1);
							func_174(uParam4, 59, 1);
							func_174(uParam4, 60, 1);
							func_174(uParam4, 61, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 63, 1);
							func_174(uParam4, 64, 1);
							func_174(uParam4, 65, 1);
							func_174(uParam4, 66, 1);
							func_174(uParam4, 67, 1);
							func_174(uParam4, 68, 1);
							func_174(uParam4, 69, 1);
							func_174(uParam4, 70, 1);
							func_174(uParam4, 71, 1);
							func_174(uParam4, 72, 1);
							func_174(uParam4, 21, 1);
							func_174(uParam4, 22, 1);
							func_174(uParam4, 23, 1);
							func_174(uParam4, 24, 1);
							func_174(uParam4, 25, 1);
							func_174(uParam4, 26, 1);
							func_174(uParam4, 36, 1);
							func_174(uParam4, 46, 1);
							func_174(uParam4, 38, 1);
							func_174(uParam4, 29, 1);
							func_174(uParam4, 28, 1);
							func_174(uParam4, 43, 1);
							func_174(uParam4, 92, 1);
							func_174(uParam4, 93, 1);
							func_174(uParam4, 94, 1);
							func_174(uParam4, 96, 1);
							func_174(uParam4, 97, 1);
							func_174(uParam4, 98, 1);
							func_174(uParam4, 100, 1);
							func_174(uParam4, 103, 1);
							func_174(uParam4, 104, 1);
							func_174(uParam4, 105, 1);
							func_174(uParam4, 106, 1);
							func_174(uParam4, 107, 1);
							func_174(uParam4, 108, 1);
							func_172(uParam3, 67, 1);
							func_172(uParam3, 68, 1);
							func_172(uParam3, 69, 1);
							func_172(uParam3, 70, 1);
							func_172(uParam3, 71, 1);
							func_172(uParam3, 72, 1);
							func_172(uParam3, 73, 1);
							func_172(uParam3, 74, 1);
							func_172(uParam3, 78, 1);
							func_172(uParam3, 79, 1);
							func_172(uParam3, 80, 1);
							func_172(uParam3, 81, 1);
							func_172(uParam3, 82, 1);
							func_172(uParam3, 91, 1);
							func_172(uParam3, 92, 1);
							func_170(uParam2, 66, 1);
							func_170(uParam2, 67, 1);
							func_170(uParam2, 68, 1);
							func_170(uParam2, 69, 1);
							func_170(uParam2, 70, 1);
							func_170(uParam2, 71, 1);
							func_170(uParam2, 72, 1);
							func_170(uParam2, 73, 1);
							func_170(uParam2, 77, 1);
							func_170(uParam2, 78, 1);
							func_170(uParam2, 79, 1);
							func_170(uParam2, 80, 1);
							func_170(uParam2, 81, 1);
							func_170(uParam2, 90, 1);
							func_170(uParam2, 91, 1);
							break;
						
						case 2:
							func_172(uParam3, 16, 1);
							func_172(uParam3, 48, 1);
							func_172(uParam3, 49, 1);
							func_172(uParam3, 18, 1);
							func_172(uParam3, 50, 1);
							func_172(uParam3, 51, 1);
							func_172(uParam3, 52, 1);
							func_172(uParam3, 53, 1);
							func_172(uParam3, 62, 1);
							func_172(uParam3, 38, 1);
							func_172(uParam3, 47, 1);
							func_172(uParam3, 111, 1);
							func_170(uParam2, 16, 1);
							func_170(uParam2, 47, 1);
							func_170(uParam2, 48, 1);
							func_170(uParam2, 18, 1);
							func_170(uParam2, 49, 1);
							func_170(uParam2, 50, 1);
							func_170(uParam2, 51, 1);
							func_170(uParam2, 52, 1);
							func_170(uParam2, 62, 1);
							func_170(uParam2, 37, 1);
							func_170(uParam2, 46, 1);
							func_170(uParam2, 110, 1);
							func_174(uParam4, 1, 1);
							func_174(uParam4, 2, 1);
							func_174(uParam4, 3, 1);
							func_174(uParam4, 5, 1);
							func_174(uParam4, 6, 1);
							func_174(uParam4, 7, 1);
							func_174(uParam4, 8, 1);
							func_174(uParam4, 9, 1);
							func_174(uParam4, 10, 1);
							func_174(uParam4, 13, 1);
							func_174(uParam4, 18, 1);
							func_174(uParam4, 19, 1);
							func_174(uParam4, 20, 1);
							func_174(uParam4, 59, 1);
							func_174(uParam4, 60, 1);
							func_174(uParam4, 61, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 63, 1);
							func_174(uParam4, 64, 1);
							func_174(uParam4, 65, 1);
							func_174(uParam4, 66, 1);
							func_174(uParam4, 67, 1);
							func_174(uParam4, 68, 1);
							func_174(uParam4, 69, 1);
							func_174(uParam4, 70, 1);
							func_174(uParam4, 71, 1);
							func_174(uParam4, 72, 1);
							func_174(uParam4, 21, 1);
							func_174(uParam4, 22, 1);
							func_174(uParam4, 23, 1);
							func_174(uParam4, 24, 1);
							func_174(uParam4, 25, 1);
							func_174(uParam4, 26, 1);
							func_174(uParam4, 36, 1);
							func_174(uParam4, 46, 1);
							func_174(uParam4, 38, 1);
							func_174(uParam4, 29, 1);
							func_174(uParam4, 28, 1);
							func_174(uParam4, 92, 1);
							func_174(uParam4, 93, 1);
							func_174(uParam4, 94, 1);
							func_174(uParam4, 96, 1);
							func_174(uParam4, 97, 1);
							func_174(uParam4, 98, 1);
							func_174(uParam4, 100, 1);
							func_174(uParam4, 103, 1);
							func_174(uParam4, 104, 1);
							func_174(uParam4, 105, 1);
							func_174(uParam4, 106, 1);
							func_174(uParam4, 107, 1);
							func_174(uParam4, 108, 1);
							func_172(uParam3, 67, 1);
							func_172(uParam3, 68, 1);
							func_172(uParam3, 69, 1);
							func_172(uParam3, 70, 1);
							func_172(uParam3, 71, 1);
							func_172(uParam3, 72, 1);
							func_172(uParam3, 73, 1);
							func_172(uParam3, 74, 1);
							func_172(uParam3, 78, 1);
							func_172(uParam3, 79, 1);
							func_172(uParam3, 80, 1);
							func_172(uParam3, 81, 1);
							func_172(uParam3, 82, 1);
							func_172(uParam3, 91, 1);
							func_172(uParam3, 92, 1);
							func_170(uParam2, 66, 1);
							func_170(uParam2, 67, 1);
							func_170(uParam2, 68, 1);
							func_170(uParam2, 69, 1);
							func_170(uParam2, 70, 1);
							func_170(uParam2, 71, 1);
							func_170(uParam2, 72, 1);
							func_170(uParam2, 73, 1);
							func_170(uParam2, 77, 1);
							func_170(uParam2, 78, 1);
							func_170(uParam2, 79, 1);
							func_170(uParam2, 80, 1);
							func_170(uParam2, 81, 1);
							func_170(uParam2, 90, 1);
							func_170(uParam2, 91, 1);
							break;
					}
					break;
				
				case 19:
					switch (iParam5)
					{
						case 0:
							func_172(uParam3, 3, 1);
							func_172(uParam3, 7, 1);
							func_172(uParam3, 0, 1);
							func_172(uParam3, 12, 1);
							func_172(uParam3, 13, 1);
							func_172(uParam3, 15, 1);
							func_172(uParam3, 16, 1);
							func_172(uParam3, 48, 1);
							func_172(uParam3, 49, 1);
							func_172(uParam3, 17, 1);
							func_172(uParam3, 18, 1);
							func_172(uParam3, 50, 1);
							func_172(uParam3, 51, 1);
							func_172(uParam3, 52, 1);
							func_172(uParam3, 53, 1);
							func_172(uParam3, 62, 1);
							func_172(uParam3, 38, 1);
							func_172(uParam3, 47, 1);
							func_172(uParam3, 111, 1);
							func_172(uParam3, 20, 1);
							func_172(uParam3, 21, 1);
							func_172(uParam3, 25, 1);
							func_172(uParam3, 26, 1);
							func_172(uParam3, 27, 1);
							func_172(uParam3, 30, 1);
							func_172(uParam3, 31, 1);
							func_172(uParam3, 32, 1);
							func_172(uParam3, 33, 1);
							func_172(uParam3, 39, 1);
							func_172(uParam3, 37, 1);
							func_170(uParam2, 0, 1);
							func_170(uParam2, 2, 1);
							func_170(uParam2, 3, 1);
							func_170(uParam2, 4, 1);
							func_170(uParam2, 6, 1);
							func_170(uParam2, 7, 1);
							func_170(uParam2, 8, 1);
							func_170(uParam2, 11, 1);
							func_170(uParam2, 13, 1);
							func_170(uParam2, 15, 1);
							func_170(uParam2, 16, 1);
							func_170(uParam2, 47, 1);
							func_170(uParam2, 48, 1);
							func_170(uParam2, 17, 1);
							func_170(uParam2, 18, 1);
							func_170(uParam2, 49, 1);
							func_170(uParam2, 50, 1);
							func_170(uParam2, 51, 1);
							func_170(uParam2, 52, 1);
							func_170(uParam2, 62, 1);
							func_170(uParam2, 37, 1);
							func_170(uParam2, 46, 1);
							func_170(uParam2, 110, 1);
							func_170(uParam2, 19, 1);
							func_170(uParam2, 20, 1);
							func_170(uParam2, 21, 1);
							func_170(uParam2, 22, 1);
							func_170(uParam2, 54, 1);
							func_170(uParam2, 24, 1);
							func_170(uParam2, 26, 1);
							func_170(uParam2, 27, 1);
							func_170(uParam2, 28, 1);
							func_170(uParam2, 30, 1);
							func_170(uParam2, 31, 1);
							func_170(uParam2, 32, 1);
							func_170(uParam2, 38, 1);
							func_170(uParam2, 36, 1);
							func_174(uParam4, 1, 1);
							func_174(uParam4, 2, 1);
							func_174(uParam4, 3, 1);
							func_174(uParam4, 4, 1);
							func_174(uParam4, 14, 1);
							func_174(uParam4, 15, 1);
							func_174(uParam4, 16, 1);
							func_174(uParam4, 8, 1);
							func_174(uParam4, 9, 1);
							func_174(uParam4, 10, 1);
							func_174(uParam4, 13, 1);
							func_174(uParam4, 17, 1);
							func_174(uParam4, 18, 1);
							func_174(uParam4, 19, 1);
							func_174(uParam4, 20, 1);
							func_174(uParam4, 59, 1);
							func_174(uParam4, 60, 1);
							func_174(uParam4, 61, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 63, 1);
							func_174(uParam4, 64, 1);
							func_174(uParam4, 65, 1);
							func_174(uParam4, 66, 1);
							func_174(uParam4, 67, 1);
							func_174(uParam4, 68, 1);
							func_174(uParam4, 69, 1);
							func_174(uParam4, 70, 1);
							func_174(uParam4, 71, 1);
							func_174(uParam4, 72, 1);
							func_174(uParam4, 21, 1);
							func_174(uParam4, 22, 1);
							func_174(uParam4, 23, 1);
							func_174(uParam4, 24, 1);
							func_174(uParam4, 25, 1);
							func_174(uParam4, 26, 1);
							func_174(uParam4, 36, 1);
							func_174(uParam4, 46, 1);
							func_174(uParam4, 38, 1);
							func_174(uParam4, 29, 1);
							func_174(uParam4, 28, 1);
							func_174(uParam4, 31, 1);
							func_174(uParam4, 33, 1);
							func_174(uParam4, 34, 1);
							func_174(uParam4, 43, 1);
							func_174(uParam4, 92, 1);
							func_174(uParam4, 93, 1);
							func_174(uParam4, 94, 1);
							func_174(uParam4, 96, 1);
							func_174(uParam4, 97, 1);
							func_174(uParam4, 98, 1);
							func_174(uParam4, 100, 1);
							func_174(uParam4, 103, 1);
							func_174(uParam4, 104, 1);
							func_174(uParam4, 105, 1);
							func_174(uParam4, 106, 1);
							func_174(uParam4, 107, 1);
							func_174(uParam4, 108, 1);
							func_172(uParam3, 65, 1);
							func_172(uParam3, 67, 1);
							func_172(uParam3, 68, 1);
							func_172(uParam3, 69, 1);
							func_172(uParam3, 70, 1);
							func_172(uParam3, 71, 1);
							func_172(uParam3, 72, 1);
							func_172(uParam3, 73, 1);
							func_172(uParam3, 74, 1);
							func_172(uParam3, 75, 1);
							func_172(uParam3, 76, 1);
							func_172(uParam3, 77, 1);
							func_172(uParam3, 78, 1);
							func_172(uParam3, 79, 1);
							func_172(uParam3, 80, 1);
							func_172(uParam3, 81, 1);
							func_172(uParam3, 82, 1);
							func_172(uParam3, 91, 1);
							func_172(uParam3, 92, 1);
							func_170(uParam2, 64, 1);
							func_170(uParam2, 65, 1);
							func_170(uParam2, 66, 1);
							func_170(uParam2, 67, 1);
							func_170(uParam2, 68, 1);
							func_170(uParam2, 69, 1);
							func_170(uParam2, 70, 1);
							func_170(uParam2, 71, 1);
							func_170(uParam2, 72, 1);
							func_170(uParam2, 73, 1);
							func_170(uParam2, 74, 1);
							func_170(uParam2, 75, 1);
							func_170(uParam2, 77, 1);
							func_170(uParam2, 78, 1);
							func_170(uParam2, 79, 1);
							func_170(uParam2, 80, 1);
							func_170(uParam2, 81, 1);
							func_170(uParam2, 90, 1);
							func_170(uParam2, 91, 1);
							break;
						
						case 1:
							func_172(uParam3, 3, 1);
							func_172(uParam3, 7, 1);
							func_172(uParam3, 0, 1);
							func_172(uParam3, 12, 1);
							func_172(uParam3, 13, 1);
							func_172(uParam3, 15, 1);
							func_172(uParam3, 16, 1);
							func_172(uParam3, 48, 1);
							func_172(uParam3, 49, 1);
							func_172(uParam3, 17, 1);
							func_172(uParam3, 18, 1);
							func_172(uParam3, 50, 1);
							func_172(uParam3, 51, 1);
							func_172(uParam3, 52, 1);
							func_172(uParam3, 53, 1);
							func_172(uParam3, 62, 1);
							func_172(uParam3, 38, 1);
							func_172(uParam3, 47, 1);
							func_172(uParam3, 111, 1);
							func_172(uParam3, 20, 1);
							func_172(uParam3, 21, 1);
							func_172(uParam3, 25, 1);
							func_172(uParam3, 26, 1);
							func_172(uParam3, 27, 1);
							func_172(uParam3, 30, 1);
							func_172(uParam3, 31, 1);
							func_172(uParam3, 32, 1);
							func_172(uParam3, 33, 1);
							func_172(uParam3, 39, 1);
							func_170(uParam2, 0, 1);
							func_170(uParam2, 2, 1);
							func_170(uParam2, 3, 1);
							func_170(uParam2, 4, 1);
							func_170(uParam2, 6, 1);
							func_170(uParam2, 7, 1);
							func_170(uParam2, 11, 1);
							func_170(uParam2, 13, 1);
							func_170(uParam2, 15, 1);
							func_170(uParam2, 16, 1);
							func_170(uParam2, 47, 1);
							func_170(uParam2, 48, 1);
							func_170(uParam2, 17, 1);
							func_170(uParam2, 18, 1);
							func_170(uParam2, 49, 1);
							func_170(uParam2, 50, 1);
							func_170(uParam2, 51, 1);
							func_170(uParam2, 52, 1);
							func_170(uParam2, 62, 1);
							func_170(uParam2, 37, 1);
							func_170(uParam2, 46, 1);
							func_170(uParam2, 110, 1);
							func_170(uParam2, 19, 1);
							func_170(uParam2, 20, 1);
							func_170(uParam2, 21, 1);
							func_170(uParam2, 22, 1);
							func_170(uParam2, 54, 1);
							func_170(uParam2, 24, 1);
							func_170(uParam2, 38, 1);
							func_174(uParam4, 1, 1);
							func_174(uParam4, 2, 1);
							func_174(uParam4, 3, 1);
							func_174(uParam4, 4, 1);
							func_174(uParam4, 14, 1);
							func_174(uParam4, 15, 1);
							func_174(uParam4, 16, 1);
							func_174(uParam4, 6, 1);
							func_174(uParam4, 7, 1);
							func_174(uParam4, 8, 1);
							func_174(uParam4, 9, 1);
							func_174(uParam4, 10, 1);
							func_174(uParam4, 13, 1);
							func_174(uParam4, 17, 1);
							func_174(uParam4, 18, 1);
							func_174(uParam4, 19, 1);
							func_174(uParam4, 20, 1);
							func_174(uParam4, 59, 1);
							func_174(uParam4, 60, 1);
							func_174(uParam4, 61, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 63, 1);
							func_174(uParam4, 64, 1);
							func_174(uParam4, 65, 1);
							func_174(uParam4, 66, 1);
							func_174(uParam4, 67, 1);
							func_174(uParam4, 68, 1);
							func_174(uParam4, 69, 1);
							func_174(uParam4, 70, 1);
							func_174(uParam4, 71, 1);
							func_174(uParam4, 72, 1);
							func_174(uParam4, 21, 1);
							func_174(uParam4, 22, 1);
							func_174(uParam4, 23, 1);
							func_174(uParam4, 24, 1);
							func_174(uParam4, 25, 1);
							func_174(uParam4, 26, 1);
							func_174(uParam4, 36, 1);
							func_174(uParam4, 46, 1);
							func_174(uParam4, 38, 1);
							func_174(uParam4, 29, 1);
							func_174(uParam4, 28, 1);
							func_174(uParam4, 31, 1);
							func_174(uParam4, 33, 1);
							func_174(uParam4, 34, 1);
							func_174(uParam4, 43, 1);
							func_174(uParam4, 92, 1);
							func_174(uParam4, 93, 1);
							func_174(uParam4, 94, 1);
							func_174(uParam4, 96, 1);
							func_174(uParam4, 97, 1);
							func_174(uParam4, 98, 1);
							func_174(uParam4, 100, 1);
							func_174(uParam4, 103, 1);
							func_174(uParam4, 104, 1);
							func_174(uParam4, 105, 1);
							func_174(uParam4, 106, 1);
							func_174(uParam4, 107, 1);
							func_174(uParam4, 108, 1);
							func_172(uParam3, 65, 1);
							func_172(uParam3, 67, 1);
							func_172(uParam3, 68, 1);
							func_172(uParam3, 69, 1);
							func_172(uParam3, 70, 1);
							func_172(uParam3, 71, 1);
							func_172(uParam3, 72, 1);
							func_172(uParam3, 73, 1);
							func_172(uParam3, 74, 1);
							func_172(uParam3, 75, 1);
							func_172(uParam3, 76, 1);
							func_172(uParam3, 77, 1);
							func_172(uParam3, 78, 1);
							func_172(uParam3, 79, 1);
							func_172(uParam3, 80, 1);
							func_172(uParam3, 81, 1);
							func_172(uParam3, 82, 1);
							func_172(uParam3, 91, 1);
							func_172(uParam3, 92, 1);
							func_170(uParam2, 64, 1);
							func_170(uParam2, 65, 1);
							func_170(uParam2, 66, 1);
							func_170(uParam2, 67, 1);
							func_170(uParam2, 68, 1);
							func_170(uParam2, 69, 1);
							func_170(uParam2, 70, 1);
							func_170(uParam2, 71, 1);
							func_170(uParam2, 72, 1);
							func_170(uParam2, 73, 1);
							func_170(uParam2, 74, 1);
							func_170(uParam2, 75, 1);
							func_170(uParam2, 77, 1);
							func_170(uParam2, 78, 1);
							func_170(uParam2, 79, 1);
							func_170(uParam2, 80, 1);
							func_170(uParam2, 81, 1);
							func_170(uParam2, 90, 1);
							func_170(uParam2, 91, 1);
							break;
						
						case 2:
							func_172(uParam3, 1, 1);
							func_172(uParam3, 3, 1);
							func_172(uParam3, 4, 1);
							func_172(uParam3, 5, 1);
							func_172(uParam3, 7, 1);
							func_172(uParam3, 10, 1);
							func_172(uParam3, 54, 1);
							func_172(uParam3, 55, 1);
							func_172(uParam3, 56, 1);
							func_172(uParam3, 0, 1);
							func_172(uParam3, 12, 1);
							func_172(uParam3, 13, 1);
							func_172(uParam3, 15, 1);
							func_172(uParam3, 16, 1);
							func_172(uParam3, 48, 1);
							func_172(uParam3, 49, 1);
							func_172(uParam3, 17, 1);
							func_172(uParam3, 18, 1);
							func_172(uParam3, 50, 1);
							func_172(uParam3, 51, 1);
							func_172(uParam3, 52, 1);
							func_172(uParam3, 53, 1);
							func_172(uParam3, 62, 1);
							func_172(uParam3, 38, 1);
							func_172(uParam3, 47, 1);
							func_172(uParam3, 111, 1);
							func_172(uParam3, 20, 1);
							func_172(uParam3, 21, 1);
							func_172(uParam3, 25, 1);
							func_172(uParam3, 26, 1);
							func_172(uParam3, 27, 1);
							func_172(uParam3, 30, 1);
							func_172(uParam3, 31, 1);
							func_172(uParam3, 32, 1);
							func_172(uParam3, 33, 1);
							func_172(uParam3, 37, 1);
							func_172(uParam3, 39, 1);
							func_170(uParam2, 0, 1);
							func_170(uParam2, 1, 1);
							func_170(uParam2, 2, 1);
							func_170(uParam2, 3, 1);
							func_170(uParam2, 4, 1);
							func_170(uParam2, 5, 1);
							func_170(uParam2, 6, 1);
							func_170(uParam2, 7, 1);
							func_170(uParam2, 8, 1);
							func_170(uParam2, 9, 1);
							func_170(uParam2, 10, 1);
							func_170(uParam2, 53, 1);
							func_170(uParam2, 56, 1);
							func_170(uParam2, 55, 1);
							func_170(uParam2, 11, 1);
							func_170(uParam2, 12, 1);
							func_170(uParam2, 13, 1);
							func_170(uParam2, 14, 1);
							func_170(uParam2, 15, 1);
							func_170(uParam2, 16, 1);
							func_170(uParam2, 47, 1);
							func_170(uParam2, 48, 1);
							func_170(uParam2, 17, 1);
							func_170(uParam2, 18, 1);
							func_170(uParam2, 49, 1);
							func_170(uParam2, 50, 1);
							func_170(uParam2, 51, 1);
							func_170(uParam2, 52, 1);
							func_170(uParam2, 62, 1);
							func_170(uParam2, 37, 1);
							func_170(uParam2, 46, 1);
							func_170(uParam2, 110, 1);
							func_170(uParam2, 19, 1);
							func_170(uParam2, 20, 1);
							func_170(uParam2, 21, 1);
							func_170(uParam2, 22, 1);
							func_170(uParam2, 54, 1);
							func_170(uParam2, 23, 1);
							func_170(uParam2, 24, 1);
							func_170(uParam2, 26, 1);
							func_170(uParam2, 27, 1);
							func_170(uParam2, 28, 1);
							func_170(uParam2, 29, 1);
							func_170(uParam2, 30, 1);
							func_170(uParam2, 31, 1);
							func_170(uParam2, 32, 1);
							func_170(uParam2, 33, 1);
							func_170(uParam2, 36, 1);
							func_170(uParam2, 38, 1);
							func_170(uParam2, 55, 1);
							func_174(uParam4, 1, 1);
							func_174(uParam4, 2, 1);
							func_174(uParam4, 3, 1);
							func_174(uParam4, 3, 1);
							func_174(uParam4, 4, 1);
							func_174(uParam4, 14, 1);
							func_174(uParam4, 15, 1);
							func_174(uParam4, 16, 1);
							func_174(uParam4, 6, 1);
							func_174(uParam4, 8, 1);
							func_174(uParam4, 9, 1);
							func_174(uParam4, 10, 1);
							func_174(uParam4, 12, 1);
							func_174(uParam4, 13, 1);
							func_174(uParam4, 17, 1);
							func_174(uParam4, 18, 1);
							func_174(uParam4, 19, 1);
							func_174(uParam4, 20, 1);
							func_174(uParam4, 59, 1);
							func_174(uParam4, 60, 1);
							func_174(uParam4, 61, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 62, 1);
							func_174(uParam4, 63, 1);
							func_174(uParam4, 64, 1);
							func_174(uParam4, 65, 1);
							func_174(uParam4, 66, 1);
							func_174(uParam4, 67, 1);
							func_174(uParam4, 68, 1);
							func_174(uParam4, 69, 1);
							func_174(uParam4, 70, 1);
							func_174(uParam4, 71, 1);
							func_174(uParam4, 72, 1);
							func_174(uParam4, 21, 1);
							func_174(uParam4, 22, 1);
							func_174(uParam4, 23, 1);
							func_174(uParam4, 24, 1);
							func_174(uParam4, 25, 1);
							func_174(uParam4, 26, 1);
							func_174(uParam4, 36, 1);
							func_174(uParam4, 46, 1);
							func_174(uParam4, 38, 1);
							func_174(uParam4, 29, 1);
							func_174(uParam4, 28, 1);
							func_174(uParam4, 31, 1);
							func_174(uParam4, 33, 1);
							func_174(uParam4, 34, 1);
							func_174(uParam4, 32, 1);
							func_174(uParam4, 92, 1);
							func_174(uParam4, 93, 1);
							func_174(uParam4, 94, 1);
							func_174(uParam4, 96, 1);
							func_174(uParam4, 97, 1);
							func_174(uParam4, 98, 1);
							func_174(uParam4, 100, 1);
							func_174(uParam4, 103, 1);
							func_174(uParam4, 104, 1);
							func_174(uParam4, 105, 1);
							func_174(uParam4, 106, 1);
							func_174(uParam4, 107, 1);
							func_174(uParam4, 108, 1);
							func_172(uParam3, 65, 1);
							func_172(uParam3, 67, 1);
							func_172(uParam3, 68, 1);
							func_172(uParam3, 69, 1);
							func_172(uParam3, 70, 1);
							func_172(uParam3, 71, 1);
							func_172(uParam3, 72, 1);
							func_172(uParam3, 73, 1);
							func_172(uParam3, 74, 1);
							func_172(uParam3, 75, 1);
							func_172(uParam3, 76, 1);
							func_172(uParam3, 77, 1);
							func_172(uParam3, 78, 1);
							func_172(uParam3, 79, 1);
							func_172(uParam3, 80, 1);
							func_172(uParam3, 81, 1);
							func_172(uParam3, 82, 1);
							func_172(uParam3, 91, 1);
							func_172(uParam3, 92, 1);
							func_170(uParam2, 64, 1);
							func_170(uParam2, 65, 1);
							func_170(uParam2, 66, 1);
							func_170(uParam2, 67, 1);
							func_170(uParam2, 68, 1);
							func_170(uParam2, 69, 1);
							func_170(uParam2, 70, 1);
							func_170(uParam2, 71, 1);
							func_170(uParam2, 72, 1);
							func_170(uParam2, 73, 1);
							func_170(uParam2, 74, 1);
							func_170(uParam2, 75, 1);
							func_170(uParam2, 77, 1);
							func_170(uParam2, 78, 1);
							func_170(uParam2, 79, 1);
							func_170(uParam2, 80, 1);
							func_170(uParam2, 81, 1);
							func_170(uParam2, 90, 1);
							func_170(uParam2, 91, 1);
							break;
					}
					break;
				
				case 18:
					switch (iParam5)
					{
						case 0:
							break;
						
						case 1:
							func_170(uParam2, 2, 1);
							func_170(uParam2, 20, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 0:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 9:
				case 11:
				case 13:
				case 15:
				case 19:
				case 23:
				case 26:
				case 30:
				case 34:
				case 20:
				case 22:
					func_168(2, 52, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 32:
					func_168(2, 53, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 17:
				case 27:
				case 31:
					break;
			}
			break;
	}
}

void func_169(var uParam0, var uParam1, var uParam2)
{
	if ((*uParam0)[0] == 0 || (*uParam1)[0] == 0)
	{
	}
	func_174(uParam2, 124, 1);
	func_174(uParam2, 125, 1);
	func_174(uParam2, 126, 1);
	func_174(uParam2, 127, 1);
	func_174(uParam2, 128, 1);
	func_174(uParam2, 129, 1);
	func_174(uParam2, 130, 1);
	func_174(uParam2, 131, 1);
	func_174(uParam2, 132, 1);
	func_174(uParam2, 133, 1);
	func_174(uParam2, 136, 1);
	func_174(uParam2, 138, 1);
	func_174(uParam2, 139, 1);
	func_174(uParam2, 143, 1);
	func_174(uParam2, 144, 1);
	func_174(uParam2, 145, 1);
	func_174(uParam2, 147, 1);
}

void func_170(var uParam0, int iParam1, bool bParam2)
{
	func_171(uParam0, iParam1, bParam2);
}

void func_171(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = floor((to_float(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		unk_0x0674E58A79778E99(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_172(var uParam0, int iParam1, bool bParam2)
{
	func_171(uParam0, iParam1, bParam2);
}

void func_173(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_174(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam5)
					{
						case 0:
							func_172(uParam3, 38, 1);
							func_172(uParam3, 47, 1);
							func_172(uParam3, 111, 1);
							func_170(uParam2, 37, 1);
							func_170(uParam2, 46, 1);
							func_170(uParam2, 110, 1);
							break;
						
						case 1:
							func_172(uParam3, 38, 1);
							func_172(uParam3, 47, 1);
							func_172(uParam3, 111, 1);
							func_170(uParam2, 37, 1);
							func_170(uParam2, 46, 1);
							func_170(uParam2, 110, 1);
							break;
						
						case 2:
							func_172(uParam3, 38, 1);
							func_172(uParam3, 47, 1);
							func_172(uParam3, 111, 1);
							func_170(uParam2, 37, 1);
							func_170(uParam2, 46, 1);
							func_170(uParam2, 110, 1);
							break;
					}
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
				case 26:
					if (bParam6)
					{
						func_172(uParam3, 16, 1);
						func_172(uParam3, 48, 1);
						func_172(uParam3, 49, 1);
						func_172(uParam3, 18, 1);
						func_172(uParam3, 50, 1);
						func_172(uParam3, 51, 1);
						func_172(uParam3, 52, 1);
						func_172(uParam3, 53, 1);
						func_172(uParam3, 38, 1);
						func_172(uParam3, 47, 1);
						func_172(uParam3, 111, 1);
						func_172(uParam3, 62, 1);
						func_170(uParam2, 16, 1);
						func_170(uParam2, 47, 1);
						func_170(uParam2, 48, 1);
						func_170(uParam2, 18, 1);
						func_170(uParam2, 37, 1);
						func_170(uParam2, 46, 1);
						func_170(uParam2, 110, 1);
					}
					func_174(uParam4, 3, 1);
					func_174(uParam4, 4, 1);
					func_174(uParam4, 5, 1);
					func_174(uParam4, 6, 1);
					func_174(uParam4, 7, 1);
					func_174(uParam4, 8, 1);
					func_174(uParam4, 9, 1);
					func_174(uParam4, 12, 1);
					func_174(uParam4, 14, 1);
					func_174(uParam4, 15, 1);
					func_174(uParam4, 16, 1);
					func_174(uParam4, 17, 1);
					func_174(uParam4, 18, 1);
					func_174(uParam4, 19, 1);
					func_174(uParam4, 20, 1);
					func_174(uParam4, 59, 1);
					func_174(uParam4, 60, 1);
					func_174(uParam4, 61, 1);
					func_174(uParam4, 62, 1);
					func_174(uParam4, 62, 1);
					func_174(uParam4, 63, 1);
					func_174(uParam4, 64, 1);
					func_174(uParam4, 65, 1);
					func_174(uParam4, 66, 1);
					func_174(uParam4, 67, 1);
					func_174(uParam4, 68, 1);
					func_174(uParam4, 69, 1);
					func_174(uParam4, 70, 1);
					func_174(uParam4, 71, 1);
					func_174(uParam4, 72, 1);
					func_174(uParam4, 21, 1);
					func_174(uParam4, 22, 1);
					func_174(uParam4, 23, 1);
					func_174(uParam4, 24, 1);
					func_174(uParam4, 25, 1);
					func_174(uParam4, 26, 1);
					func_174(uParam4, 36, 1);
					func_174(uParam4, 46, 1);
					func_174(uParam4, 38, 1);
					func_174(uParam4, 28, 1);
					func_174(uParam4, 10, 1);
					func_174(uParam4, 33, 1);
					func_174(uParam4, 92, 1);
					func_174(uParam4, 93, 1);
					func_174(uParam4, 94, 1);
					func_174(uParam4, 96, 1);
					func_174(uParam4, 97, 1);
					func_174(uParam4, 98, 1);
					func_174(uParam4, 100, 1);
					func_174(uParam4, 103, 1);
					func_174(uParam4, 104, 1);
					func_174(uParam4, 105, 1);
					func_174(uParam4, 106, 1);
					func_174(uParam4, 107, 1);
					func_174(uParam4, 108, 1);
					func_174(uParam4, 110, 1);
					func_174(uParam4, 112, 1);
					func_174(uParam4, 115, 1);
					func_174(uParam4, 116, 1);
					break;
				
				case 1:
					if (bParam6)
					{
						func_172(uParam3, 16, 1);
						func_172(uParam3, 48, 1);
						func_172(uParam3, 49, 1);
						func_172(uParam3, 18, 1);
						func_172(uParam3, 50, 1);
						func_172(uParam3, 51, 1);
						func_172(uParam3, 52, 1);
						func_172(uParam3, 53, 1);
						func_172(uParam3, 38, 1);
						func_172(uParam3, 47, 1);
						func_172(uParam3, 111, 1);
						func_172(uParam3, 62, 1);
						func_170(uParam2, 18, 1);
						func_170(uParam2, 49, 1);
						func_170(uParam2, 50, 1);
						func_170(uParam2, 51, 1);
						func_170(uParam2, 52, 1);
						func_170(uParam2, 62, 1);
						func_170(uParam2, 37, 1);
						func_170(uParam2, 46, 1);
						func_170(uParam2, 110, 1);
					}
					func_174(uParam4, 9, 1);
					func_174(uParam4, 12, 1);
					func_174(uParam4, 13, 1);
					func_174(uParam4, 17, 1);
					func_174(uParam4, 18, 1);
					func_174(uParam4, 19, 1);
					func_174(uParam4, 20, 1);
					func_174(uParam4, 59, 1);
					func_174(uParam4, 60, 1);
					func_174(uParam4, 61, 1);
					func_174(uParam4, 62, 1);
					func_174(uParam4, 62, 1);
					func_174(uParam4, 63, 1);
					func_174(uParam4, 64, 1);
					func_174(uParam4, 65, 1);
					func_174(uParam4, 66, 1);
					func_174(uParam4, 67, 1);
					func_174(uParam4, 68, 1);
					func_174(uParam4, 69, 1);
					func_174(uParam4, 70, 1);
					func_174(uParam4, 71, 1);
					func_174(uParam4, 72, 1);
					func_174(uParam4, 21, 1);
					func_174(uParam4, 22, 1);
					func_174(uParam4, 23, 1);
					func_174(uParam4, 24, 1);
					func_174(uParam4, 25, 1);
					func_174(uParam4, 26, 1);
					func_174(uParam4, 36, 1);
					func_174(uParam4, 46, 1);
					func_174(uParam4, 38, 1);
					func_174(uParam4, 29, 1);
					func_174(uParam4, 28, 1);
					func_174(uParam4, 8, 1);
					func_174(uParam4, 10, 1);
					func_174(uParam4, 31, 1);
					func_174(uParam4, 33, 1);
					func_174(uParam4, 34, 1);
					func_174(uParam4, 92, 1);
					func_174(uParam4, 93, 1);
					func_174(uParam4, 94, 1);
					func_174(uParam4, 96, 1);
					func_174(uParam4, 97, 1);
					func_174(uParam4, 98, 1);
					func_174(uParam4, 100, 1);
					func_174(uParam4, 103, 1);
					func_174(uParam4, 104, 1);
					func_174(uParam4, 105, 1);
					func_174(uParam4, 106, 1);
					func_174(uParam4, 107, 1);
					func_174(uParam4, 108, 1);
					break;
				
				case 10:
					func_174(uParam4, 28, 1);
					break;
				
				case 12:
					if (bParam6)
					{
						func_172(uParam3, 3, 1);
						func_172(uParam3, 4, 1);
						func_172(uParam3, 6, 1);
						func_172(uParam3, 10, 1);
						func_172(uParam3, 54, 1);
						func_172(uParam3, 55, 1);
						func_172(uParam3, 56, 1);
						func_172(uParam3, 13, 1);
						func_172(uParam3, 16, 1);
						func_172(uParam3, 48, 1);
						func_172(uParam3, 49, 1);
						func_172(uParam3, 18, 1);
						func_172(uParam3, 50, 1);
						func_172(uParam3, 51, 1);
						func_172(uParam3, 52, 1);
						func_172(uParam3, 53, 1);
						func_172(uParam3, 38, 1);
						func_172(uParam3, 47, 1);
						func_172(uParam3, 111, 1);
						func_172(uParam3, 62, 1);
						func_172(uParam3, 20, 1);
						func_172(uParam3, 26, 1);
						func_172(uParam3, 27, 1);
						func_172(uParam3, 32, 1);
						func_172(uParam3, 33, 1);
						func_172(uParam3, 37, 1);
						func_172(uParam3, 39, 1);
						func_172(uParam3, 106, 1);
						func_172(uParam3, 114, 1);
						func_172(uParam3, 116, 1);
						func_172(uParam3, 117, 1);
						func_172(uParam3, 118, 1);
						func_172(uParam3, 119, 1);
						func_170(uParam2, 3, 1);
						func_170(uParam2, 4, 1);
						func_170(uParam2, 6, 1);
						func_170(uParam2, 8, 1);
						func_170(uParam2, 9, 1);
						func_170(uParam2, 10, 1);
						func_170(uParam2, 53, 1);
						func_170(uParam2, 56, 1);
						func_170(uParam2, 55, 1);
						func_170(uParam2, 13, 1);
						func_170(uParam2, 18, 1);
						func_170(uParam2, 49, 1);
						func_170(uParam2, 50, 1);
						func_170(uParam2, 51, 1);
						func_170(uParam2, 52, 1);
						func_170(uParam2, 62, 1);
						func_170(uParam2, 37, 1);
						func_170(uParam2, 46, 1);
						func_170(uParam2, 110, 1);
						func_170(uParam2, 21, 1);
						func_170(uParam2, 26, 1);
						func_170(uParam2, 27, 1);
						func_170(uParam2, 28, 1);
						func_170(uParam2, 32, 1);
						func_170(uParam2, 36, 1);
						func_170(uParam2, 38, 1);
						func_170(uParam2, 55, 1);
						func_170(uParam2, 14, 1);
						func_170(uParam2, 105, 1);
						func_170(uParam2, 113, 1);
						func_170(uParam2, 114, 1);
						func_170(uParam2, 115, 1);
						func_170(uParam2, 116, 1);
						func_170(uParam2, 117, 1);
					}
					func_174(uParam4, 2, 1);
					func_174(uParam4, 3, 1);
					func_174(uParam4, 4, 1);
					func_174(uParam4, 14, 1);
					func_174(uParam4, 15, 1);
					func_174(uParam4, 16, 1);
					func_174(uParam4, 9, 1);
					func_174(uParam4, 10, 1);
					func_174(uParam4, 12, 1);
					func_174(uParam4, 13, 1);
					func_174(uParam4, 17, 1);
					func_174(uParam4, 18, 1);
					func_174(uParam4, 19, 1);
					func_174(uParam4, 20, 1);
					func_174(uParam4, 59, 1);
					func_174(uParam4, 60, 1);
					func_174(uParam4, 61, 1);
					func_174(uParam4, 62, 1);
					func_174(uParam4, 62, 1);
					func_174(uParam4, 63, 1);
					func_174(uParam4, 64, 1);
					func_174(uParam4, 65, 1);
					func_174(uParam4, 66, 1);
					func_174(uParam4, 67, 1);
					func_174(uParam4, 68, 1);
					func_174(uParam4, 69, 1);
					func_174(uParam4, 70, 1);
					func_174(uParam4, 71, 1);
					func_174(uParam4, 72, 1);
					func_174(uParam4, 21, 1);
					func_174(uParam4, 22, 1);
					func_174(uParam4, 23, 1);
					func_174(uParam4, 24, 1);
					func_174(uParam4, 25, 1);
					func_174(uParam4, 26, 1);
					func_174(uParam4, 36, 1);
					func_174(uParam4, 46, 1);
					func_174(uParam4, 38, 1);
					func_174(uParam4, 29, 1);
					func_174(uParam4, 28, 1);
					func_174(uParam4, 8, 1);
					func_174(uParam4, 31, 1);
					func_174(uParam4, 32, 1);
					func_174(uParam4, 33, 1);
					func_174(uParam4, 34, 1);
					func_174(uParam4, 92, 1);
					func_174(uParam4, 93, 1);
					func_174(uParam4, 94, 1);
					func_174(uParam4, 96, 1);
					func_174(uParam4, 97, 1);
					func_174(uParam4, 98, 1);
					func_174(uParam4, 100, 1);
					func_174(uParam4, 103, 1);
					func_174(uParam4, 104, 1);
					func_174(uParam4, 105, 1);
					func_174(uParam4, 106, 1);
					func_174(uParam4, 107, 1);
					func_174(uParam4, 108, 1);
					func_174(uParam4, 110, 1);
					func_174(uParam4, 112, 1);
					break;
				
				case 15:
					if (bParam6)
					{
						func_172(uParam3, 16, 1);
						func_172(uParam3, 48, 1);
						func_172(uParam3, 49, 1);
						func_172(uParam3, 18, 1);
						func_172(uParam3, 50, 1);
						func_172(uParam3, 51, 1);
						func_172(uParam3, 52, 1);
						func_172(uParam3, 53, 1);
						func_172(uParam3, 38, 1);
						func_172(uParam3, 47, 1);
						func_172(uParam3, 111, 1);
						func_172(uParam3, 62, 1);
						func_170(uParam2, 18, 1);
						func_170(uParam2, 49, 1);
						func_170(uParam2, 50, 1);
						func_170(uParam2, 51, 1);
						func_170(uParam2, 52, 1);
						func_170(uParam2, 62, 1);
						func_170(uParam2, 37, 1);
						func_170(uParam2, 46, 1);
						func_170(uParam2, 110, 1);
						func_170(uParam2, 19, 1);
					}
					func_174(uParam4, 3, 1);
					func_174(uParam4, 6, 1);
					func_174(uParam4, 8, 1);
					func_174(uParam4, 9, 1);
					func_174(uParam4, 10, 1);
					func_174(uParam4, 13, 1);
					func_174(uParam4, 17, 1);
					func_174(uParam4, 18, 1);
					func_174(uParam4, 19, 1);
					func_174(uParam4, 20, 1);
					func_174(uParam4, 59, 1);
					func_174(uParam4, 60, 1);
					func_174(uParam4, 61, 1);
					func_174(uParam4, 62, 1);
					func_174(uParam4, 62, 1);
					func_174(uParam4, 63, 1);
					func_174(uParam4, 64, 1);
					func_174(uParam4, 65, 1);
					func_174(uParam4, 66, 1);
					func_174(uParam4, 67, 1);
					func_174(uParam4, 68, 1);
					func_174(uParam4, 69, 1);
					func_174(uParam4, 70, 1);
					func_174(uParam4, 71, 1);
					func_174(uParam4, 72, 1);
					func_174(uParam4, 21, 1);
					func_174(uParam4, 22, 1);
					func_174(uParam4, 23, 1);
					func_174(uParam4, 24, 1);
					func_174(uParam4, 25, 1);
					func_174(uParam4, 26, 1);
					func_174(uParam4, 36, 1);
					func_174(uParam4, 46, 1);
					func_174(uParam4, 38, 1);
					func_174(uParam4, 29, 1);
					func_174(uParam4, 28, 1);
					func_174(uParam4, 31, 1);
					func_174(uParam4, 32, 1);
					func_174(uParam4, 33, 1);
					func_174(uParam4, 34, 1);
					func_174(uParam4, 92, 1);
					func_174(uParam4, 93, 1);
					func_174(uParam4, 94, 1);
					func_174(uParam4, 96, 1);
					func_174(uParam4, 97, 1);
					func_174(uParam4, 98, 1);
					func_174(uParam4, 100, 1);
					func_174(uParam4, 103, 1);
					func_174(uParam4, 104, 1);
					func_174(uParam4, 105, 1);
					func_174(uParam4, 106, 1);
					func_174(uParam4, 107, 1);
					func_174(uParam4, 108, 1);
					func_174(uParam4, 110, 1);
					func_174(uParam4, 112, 1);
					func_174(uParam4, 115, 1);
					func_174(uParam4, 116, 1);
					break;
				
				case 18:
					if (bParam6)
					{
						func_172(uParam3, 4, 1);
					}
					break;
				
				case 17:
					func_174(uParam4, 9, 1);
					break;
				
				case 19:
					if (bParam6)
					{
						func_172(uParam3, 16, 1);
						func_172(uParam3, 48, 1);
						func_172(uParam3, 49, 1);
						func_172(uParam3, 18, 1);
						func_172(uParam3, 50, 1);
						func_172(uParam3, 51, 1);
						func_172(uParam3, 52, 1);
						func_172(uParam3, 53, 1);
						func_172(uParam3, 38, 1);
						func_172(uParam3, 47, 1);
						func_172(uParam3, 111, 1);
						func_172(uParam3, 62, 1);
						func_170(uParam2, 16, 1);
						func_170(uParam2, 47, 1);
						func_170(uParam2, 48, 1);
						func_170(uParam2, 18, 1);
						func_170(uParam2, 49, 1);
						func_170(uParam2, 50, 1);
						func_170(uParam2, 51, 1);
						func_170(uParam2, 52, 1);
						func_170(uParam2, 62, 1);
						func_170(uParam2, 37, 1);
						func_170(uParam2, 46, 1);
						func_170(uParam2, 110, 1);
					}
					func_174(uParam4, 9, 1);
					func_174(uParam4, 10, 1);
					func_174(uParam4, 18, 1);
					func_174(uParam4, 19, 1);
					func_174(uParam4, 20, 1);
					func_174(uParam4, 59, 1);
					func_174(uParam4, 60, 1);
					func_174(uParam4, 61, 1);
					func_174(uParam4, 62, 1);
					func_174(uParam4, 62, 1);
					func_174(uParam4, 63, 1);
					func_174(uParam4, 64, 1);
					func_174(uParam4, 65, 1);
					func_174(uParam4, 66, 1);
					func_174(uParam4, 67, 1);
					func_174(uParam4, 68, 1);
					func_174(uParam4, 69, 1);
					func_174(uParam4, 70, 1);
					func_174(uParam4, 71, 1);
					func_174(uParam4, 72, 1);
					func_174(uParam4, 21, 1);
					func_174(uParam4, 22, 1);
					func_174(uParam4, 23, 1);
					func_174(uParam4, 24, 1);
					func_174(uParam4, 25, 1);
					func_174(uParam4, 26, 1);
					func_174(uParam4, 36, 1);
					func_174(uParam4, 46, 1);
					func_174(uParam4, 38, 1);
					func_174(uParam4, 29, 1);
					func_174(uParam4, 8, 1);
					func_174(uParam4, 92, 1);
					func_174(uParam4, 93, 1);
					func_174(uParam4, 94, 1);
					func_174(uParam4, 96, 1);
					func_174(uParam4, 97, 1);
					func_174(uParam4, 98, 1);
					func_174(uParam4, 100, 1);
					func_174(uParam4, 103, 1);
					func_174(uParam4, 104, 1);
					func_174(uParam4, 105, 1);
					func_174(uParam4, 106, 1);
					func_174(uParam4, 107, 1);
					func_174(uParam4, 108, 1);
					break;
				
				case 21:
					if (bParam6)
					{
						func_172(uParam3, 3, 1);
						func_172(uParam3, 7, 1);
						func_172(uParam3, 0, 1);
						func_172(uParam3, 12, 1);
						func_172(uParam3, 13, 1);
						func_172(uParam3, 15, 1);
						func_172(uParam3, 16, 1);
						func_172(uParam3, 48, 1);
						func_172(uParam3, 49, 1);
						func_172(uParam3, 17, 1);
						func_172(uParam3, 18, 1);
						func_172(uParam3, 50, 1);
						func_172(uParam3, 51, 1);
						func_172(uParam3, 52, 1);
						func_172(uParam3, 53, 1);
						func_172(uParam3, 38, 1);
						func_172(uParam3, 47, 1);
						func_172(uParam3, 111, 1);
						func_172(uParam3, 62, 1);
						func_172(uParam3, 20, 1);
						func_172(uParam3, 21, 1);
						func_172(uParam3, 25, 1);
						func_172(uParam3, 26, 1);
						func_172(uParam3, 27, 1);
						func_172(uParam3, 30, 1);
						func_172(uParam3, 31, 1);
						func_172(uParam3, 32, 1);
						func_172(uParam3, 33, 1);
						func_172(uParam3, 39, 1);
						func_172(uParam3, 37, 1);
						func_172(uParam3, 55, 1);
						func_170(uParam2, 0, 1);
						func_170(uParam2, 2, 1);
						func_170(uParam2, 3, 1);
						func_170(uParam2, 4, 1);
						func_170(uParam2, 6, 1);
						func_170(uParam2, 7, 1);
						func_170(uParam2, 8, 1);
						func_170(uParam2, 11, 1);
						func_170(uParam2, 13, 1);
						func_170(uParam2, 15, 1);
						func_170(uParam2, 16, 1);
						func_170(uParam2, 47, 1);
						func_170(uParam2, 48, 1);
						func_170(uParam2, 17, 1);
						func_170(uParam2, 18, 1);
						func_170(uParam2, 49, 1);
						func_170(uParam2, 50, 1);
						func_170(uParam2, 51, 1);
						func_170(uParam2, 52, 1);
						func_170(uParam2, 62, 1);
						func_170(uParam2, 37, 1);
						func_170(uParam2, 46, 1);
						func_170(uParam2, 110, 1);
						func_170(uParam2, 19, 1);
						func_170(uParam2, 20, 1);
						func_170(uParam2, 21, 1);
						func_170(uParam2, 22, 1);
						func_170(uParam2, 54, 1);
						func_170(uParam2, 24, 1);
						func_170(uParam2, 26, 1);
						func_170(uParam2, 27, 1);
						func_170(uParam2, 28, 1);
						func_170(uParam2, 30, 1);
						func_170(uParam2, 31, 1);
						func_170(uParam2, 32, 1);
						func_170(uParam2, 38, 1);
						func_170(uParam2, 36, 1);
					}
					func_174(uParam4, 3, 1);
					func_174(uParam4, 3, 1);
					func_174(uParam4, 4, 1);
					func_174(uParam4, 14, 1);
					func_174(uParam4, 15, 1);
					func_174(uParam4, 16, 1);
					func_174(uParam4, 8, 1);
					func_174(uParam4, 9, 1);
					func_174(uParam4, 10, 1);
					func_174(uParam4, 12, 1);
					func_174(uParam4, 13, 1);
					func_174(uParam4, 17, 1);
					func_174(uParam4, 18, 1);
					func_174(uParam4, 19, 1);
					func_174(uParam4, 20, 1);
					func_174(uParam4, 59, 1);
					func_174(uParam4, 60, 1);
					func_174(uParam4, 61, 1);
					func_174(uParam4, 62, 1);
					func_174(uParam4, 62, 1);
					func_174(uParam4, 63, 1);
					func_174(uParam4, 64, 1);
					func_174(uParam4, 65, 1);
					func_174(uParam4, 66, 1);
					func_174(uParam4, 67, 1);
					func_174(uParam4, 68, 1);
					func_174(uParam4, 69, 1);
					func_174(uParam4, 70, 1);
					func_174(uParam4, 71, 1);
					func_174(uParam4, 72, 1);
					func_174(uParam4, 21, 1);
					func_174(uParam4, 22, 1);
					func_174(uParam4, 23, 1);
					func_174(uParam4, 24, 1);
					func_174(uParam4, 25, 1);
					func_174(uParam4, 26, 1);
					func_174(uParam4, 36, 1);
					func_174(uParam4, 46, 1);
					func_174(uParam4, 38, 1);
					func_174(uParam4, 29, 1);
					func_174(uParam4, 28, 1);
					func_174(uParam4, 31, 1);
					func_174(uParam4, 33, 1);
					func_174(uParam4, 34, 1);
					func_174(uParam4, 92, 1);
					func_174(uParam4, 93, 1);
					func_174(uParam4, 94, 1);
					func_174(uParam4, 96, 1);
					func_174(uParam4, 97, 1);
					func_174(uParam4, 98, 1);
					func_174(uParam4, 100, 1);
					func_174(uParam4, 103, 1);
					func_174(uParam4, 104, 1);
					func_174(uParam4, 105, 1);
					func_174(uParam4, 106, 1);
					func_174(uParam4, 107, 1);
					func_174(uParam4, 108, 1);
					break;
			}
			break;
	}
}

void func_174(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = floor((to_float(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		unk_0x0674E58A79778E99(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

int func_175()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

void func_176(var uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, bool bParam7, int iParam8)
{
	vParam2.z = (vParam2.z + 1f);
	func_178(uParam0, iParam1, vParam2, fParam5, iParam6, bParam7);
	if (unk_0xC844350D5D58C99A(*uParam0))
	{
		if (func_177(*uParam0) && iParam8)
		{
			unk_0x262EF6C6306BEA6C(*uParam0, 1119849093, -1, true, true);
		}
		if (func_74())
		{
			if (func_806(*uParam0))
			{
				unk_0x64F9F278AB9DCA2C(*uParam0, 6, 3, 0, 0);
			}
		}
	}
}

int func_177(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0) || unk_0x437347B10A200C4B(iParam0, 0))
	{
		return 0;
	}
	if (unk_0x1A5A491D253EA7BA(unk_0x4F4B24509D6989D0(iParam0, 11, unk_0x36C584991B4C183F(iParam0, 11), unk_0xDADA8E1DD0D0D9D9(iParam0, 11)), 1148412551, 0))
	{
		return 1;
	}
	return 0;
}

void func_178(var uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, bool bParam7)
{
	if (!unk_0xC844350D5D58C99A(*uParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam1))
		{
		}
		*uParam0 = unk_0x0FBDF2FFE3C74512(iParam1, 0, 0, 0);
		if (unk_0xEB6A8945D1AC98A1(*uParam0))
		{
			unk_0x5006E314C731BB09(*uParam0);
		}
		unk_0xADCFE13F048E110C(*uParam0);
		unk_0xA47B46945FF6DE74(*uParam0, vParam2, 1, false, 0, 1);
		unk_0xD8F6A53F4799FAFE(*uParam0, fParam5);
		unk_0x20641932E5104B25(*uParam0, false, 0);
		unk_0xE121AE1BBF90E186(*uParam0, true);
		unk_0x1E9649458B15960F(*uParam0, true);
		unk_0x11AD11297DC58CC7(*uParam0, 1);
		unk_0x5745EA6329A91E29(*uParam0, -1569615261, true);
		unk_0x64F9F278AB9DCA2C(*uParam0, 5, 0, 0, 0);
		if (bParam7)
		{
			unk_0xCC095276B3DD380E(*uParam0, 0);
			unk_0xE731059548189243(*uParam0, 1);
			unk_0x64F9F278AB9DCA2C(*uParam0, 1, 0, 0, 0);
			unk_0x3BFC3B9ADD2EE7B7(*uParam0, 0);
			if (iParam6 > -1 && iParam6 < 32)
			{
				Var0 = { func_180(unk_0x134B62B726CEC8E6(*uParam0), 2, Global_2425662[iParam6].f_240, -1) };
				unk_0x64F9F278AB9DCA2C(*uParam0, 2, Var0.f_3, Var0.f_4, 0);
				unk_0x64F9F278AB9DCA2C(*uParam0, 7, 0, 0, 0);
			}
		}
		if (func_179(*uParam0, 11))
		{
			unk_0x64F9F278AB9DCA2C(*uParam0, 7, 0, 0, 0);
		}
		unk_0x327AAEE25F323797(*uParam0);
		unk_0xE7EE28867F07D06D(*uParam0);
	}
}

int func_179(int iParam0, int iParam1)
{
	iVar0 = unk_0x4F4B24509D6989D0(iParam0, iParam1, unk_0x36C584991B4C183F(iParam0, iParam1), unk_0xDADA8E1DD0D0D9D9(iParam0, iParam1));
	if (unk_0x1A5A491D253EA7BA(iVar0, -713698407, 0))
	{
		return 1;
	}
	return 0;
}

struct<14> func_180(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_229();
	if (iParam0 == 1885233650)
	{
		func_213(iParam1, iParam2, iParam3);
	}
	else if (iParam0 == -1667301416)
	{
		func_181(iParam1, iParam2, iParam3);
	}
	return Global_76434[0];
}

void func_181(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 2:
			func_212(iParam1, iParam2);
			break;
		
		case 11:
			func_211(iParam1, iParam2);
			break;
		
		case 8:
			func_204(iParam1, iParam2);
			break;
		
		case 9:
			func_203(iParam1, iParam2);
			break;
		
		case 3:
			func_202(iParam1, iParam2);
			break;
		
		case 4:
			func_201(iParam1, iParam2);
			break;
		
		case 6:
			func_200(iParam1, iParam2);
			break;
		
		case 1:
			func_199(iParam1, iParam2);
			break;
		
		case 7:
			func_198(iParam1, iParam2);
			break;
		
		case 10:
			func_197(iParam1, iParam2);
			break;
		
		case 14:
			func_196(iParam1, iParam2);
			break;
		
		case 12:
			func_195(iParam1, iParam2);
			break;
		
		case 5:
			func_194(iParam1, iParam2);
			break;
		
		case 0:
			func_191(iParam1, iParam2);
			break;
		
		case 13:
			func_182(iParam1);
			break;
	}
}

void func_182(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	switch (iParam0)
	{
		case 31:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			break;
	}
	func_183(&(Global_76434[0]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_183(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_190(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x12AB0310C2281427(sParam3) != unk_0x12AB0310C2281427("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 5);
		}
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 6);
		if (func_31(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x1A5A491D253EA7BA(Global_2621444, 1827025211, 0))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_188(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_188(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_188(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_188(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_188(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_188(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 5);
		if (func_187(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
		}
		if (func_187(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		}
		if (!func_187(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_31(14))
			{
				return;
			}
			iVar0 = func_1038(func_186(iParam1, uParam0->f_2), Global_76431, 0);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
			}
			iVar0 = func_1038(func_185(iParam1, uParam0->f_2), Global_76431, 0);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
			}
			if (func_184(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_1038(iVar1, Global_76431, 0);
				if (!unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
				{
					unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		}
	}
}

bool func_184(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 978;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 979;
					break;
				
				case 3:
					*uParam2 = 1429;
					break;
				
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 9:
					*uParam2 = 1438;
					break;
				
				case 10:
					*uParam2 = 1440;
					break;
				
				case 1:
					*uParam2 = 1011;
					break;
				
				case 7:
					*uParam2 = 1441;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
				
				case 12:
					*uParam2 = 1030;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
				
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 9:
					*uParam2 = 1439;
					break;
				
				case 7:
					*uParam2 = 1442;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
				
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 7:
					*uParam2 = 1443;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
				
				case 6:
					*uParam2 = 1008;
					break;
				
				case 8:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 992;
					break;
				
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
				
				case 6:
					*uParam2 = 1009;
					break;
				
				case 8:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 993;
					break;
				
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
				
				case 6:
					*uParam2 = 1010;
					break;
				
				case 8:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 994;
					break;
				
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
	}
	return *uParam2 != 978;
}

int func_185(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 927;
					break;
				
				case 3:
					return 1414;
					break;
				
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 9:
					return 1423;
					break;
				
				case 10:
					return 1425;
					break;
				
				case 1:
					return 959;
					break;
				
				case 7:
					return 1426;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
				
				case 12:
					return 978;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 928;
					break;
				
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 9:
					return 1424;
					break;
				
				case 7:
					return 1427;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 929;
					break;
				
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 7:
					return 1428;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 948;
					break;
				
				case 6:
					return 956;
					break;
				
				case 8:
					return 1420;
					break;
				
				case 11:
					return 940;
					break;
				
				case 14:
					return 972;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 949;
					break;
				
				case 6:
					return 957;
					break;
				
				case 8:
					return 1421;
					break;
				
				case 11:
					return 941;
					break;
				
				case 14:
					return 973;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 950;
					break;
				
				case 6:
					return 958;
					break;
				
				case 8:
					return 1422;
					break;
				
				case 11:
					return 942;
					break;
				
				case 14:
					return 974;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 975;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
	}
	return 935;
}

int func_186(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 875;
					break;
				
				case 3:
					return 1399;
					break;
				
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 9:
					return 1408;
					break;
				
				case 10:
					return 1410;
					break;
				
				case 1:
					return 907;
					break;
				
				case 7:
					return 1411;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
				
				case 12:
					return 926;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 876;
					break;
				
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 9:
					return 1409;
					break;
				
				case 7:
					return 1412;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 877;
					break;
				
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 7:
					return 1413;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 896;
					break;
				
				case 6:
					return 904;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 11:
					return 888;
					break;
				
				case 14:
					return 920;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 897;
					break;
				
				case 6:
					return 905;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 11:
					return 889;
					break;
				
				case 14:
					return 921;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 898;
					break;
				
				case 6:
					return 906;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 890;
					break;
				
				case 14:
					return 922;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 923;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
	}
	return 883;
}

int func_187(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1][iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_4[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_8[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_12[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_16[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_20[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_24[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_28[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_32[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_36[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_40[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_44[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_48[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_52[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_56[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_60[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_64[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_68[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_72[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_76[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_80[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_84[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_88[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_92[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_96[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_100[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_104[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_108[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_112[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_116[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_120[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_124[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_128[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_132[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_136[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_140[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_144[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_148[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_152[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_156[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_160[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_188(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar0 = Global_76431;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_189(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_1038(iVar2, iVar0, 0);
		return unk_0xEAE0D21A50E6C7F4(iVar3, iVar1);
	}
	return 0;
}

bool func_189(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam2 = 11511;
	if ((bParam4 && Global_4267094) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
					
					case -1071423629:
					case -1382822784:
					case 385813134:
						*uParam2 = 935;
						*uParam3 = 0;
						return 1;
						break;
					
					case -833094692:
					case -1731353868:
					case 675392787:
						*uParam2 = 935;
						*uParam3 = 1;
						return 1;
						break;
					
					case -1836153782:
					case -1960638561:
					case -238272479:
						*uParam2 = 935;
						*uParam3 = 2;
						return 1;
						break;
					
					case -1598414687:
					case 147161830:
					case 67757212:
						*uParam2 = 935;
						*uParam3 = 3;
						return 1;
						break;
					
					case 123661793:
					case -92608943:
					case -536372072:
						*uParam2 = 935;
						*uParam3 = 4;
						return 1;
						break;
					
					case 330958487:
					case -162931217:
					case -247578875:
						*uParam2 = 935;
						*uParam3 = 5;
						return 1;
						break;
					
					case -142717408:
					case 1665087452:
					case -854821214:
						*uParam2 = 935;
						*uParam3 = 7;
						return 1;
						break;
					
					case 1290696959:
					case 1012984348:
					case -1458295118:
						*uParam2 = 935;
						*uParam3 = 8;
						return 1;
						break;
					
					case 2059568454:
					case 933072050:
					case -1454802604:
						*uParam2 = 935;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 1023;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 1023;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4267094)
		{
			iVar0 = unk_0xFAB100617491B764(iParam0);
		}
		else
		{
			iVar0 = unk_0xCE50BA51F0598785(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0xFAB100617491B764(iParam0);
	}
	else
	{
		iVar0 = unk_0xCE50BA51F0598785(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1759;
					break;
				
				case 1:
					*uParam2 = 1760;
					break;
				
				case 2:
					*uParam2 = 1761;
					break;
				
				case 3:
					*uParam2 = 1762;
					break;
				
				case 4:
					*uParam2 = 1763;
					break;
				
				case 5:
					*uParam2 = 1764;
					break;
				
				case 6:
					*uParam2 = 1771;
					break;
				
				case 7:
					*uParam2 = 1772;
					break;
				
				case 8:
					*uParam2 = 1773;
					break;
				
				case 9:
					*uParam2 = 1774;
					break;
				
				case 10:
					*uParam2 = 1775;
					break;
				
				case 11:
					*uParam2 = 1776;
					break;
				
				case 12:
					*uParam2 = 1777;
					break;
				
				case 13:
					*uParam2 = 1785;
					break;
				
				case 14:
					*uParam2 = 1786;
					break;
				
				case 15:
					*uParam2 = 1887;
					break;
				
				case 16:
					*uParam2 = 1888;
					break;
				
				case 17:
					*uParam2 = 1919;
					break;
				
				case 18:
					*uParam2 = 1933;
					break;
				
				case 19:
					*uParam2 = 1934;
					break;
				
				case 20:
					*uParam2 = 1935;
					break;
				
				case 21:
					*uParam2 = 1936;
					break;
				
				case 22:
					*uParam2 = 1937;
					break;
				
				case 23:
					*uParam2 = 2041;
					break;
				
				case 24:
					*uParam2 = 2042;
					break;
				
				case 25:
					*uParam2 = 2068;
					break;
				
				case 26:
					*uParam2 = 2069;
					break;
				
				case 27:
					*uParam2 = 2070;
					break;
				
				case 28:
					*uParam2 = 2071;
					break;
				
				case 29:
					*uParam2 = 2072;
					break;
				
				case 30:
					*uParam2 = 2073;
					break;
				
				case 31:
					*uParam2 = 2074;
					break;
				
				case 32:
					*uParam2 = 2075;
					break;
				
				case 33:
					*uParam2 = 2076;
					break;
				
				case 34:
					*uParam2 = 2077;
					break;
				
				case 35:
					*uParam2 = 2324;
					break;
				
				case 36:
					*uParam2 = 2325;
					break;
				
				case 37:
					*uParam2 = 2389;
					break;
				
				case 38:
					*uParam2 = 2390;
					break;
				
				case 39:
					*uParam2 = 2391;
					break;
				
				case 40:
					*uParam2 = 2392;
					break;
				
				case 41:
					*uParam2 = 2451;
					break;
				
				case 42:
					*uParam2 = 2452;
					break;
				
				case 43:
					*uParam2 = 2453;
					break;
				
				case 44:
					*uParam2 = 2454;
					break;
				
				case 45:
					*uParam2 = 2455;
					break;
				
				case 46:
					*uParam2 = 2456;
					break;
				
				case 47:
					*uParam2 = 2457;
					break;
				
				case 48:
					*uParam2 = 2458;
					break;
				
				case 49:
					*uParam2 = 2459;
					break;
				
				case 50:
					*uParam2 = 2460;
					break;
				
				case 51:
					*uParam2 = 2589;
					break;
				
				case 52:
					*uParam2 = 2590;
					break;
				
				case 53:
					*uParam2 = 2591;
					break;
				
				case 54:
					*uParam2 = 2592;
					break;
				
				case 55:
					*uParam2 = 2593;
					break;
				
				case 56:
					*uParam2 = 2594;
					break;
				
				case 57:
					*uParam2 = 2595;
					break;
				
				case 58:
					*uParam2 = 2596;
					break;
				
				case 59:
					*uParam2 = 2597;
					break;
				
				case 60:
					*uParam2 = 2598;
					break;
				
				case 61:
					*uParam2 = 2599;
					break;
				
				case 62:
					*uParam2 = 3196;
					break;
				
				case 63:
					*uParam2 = 3197;
					break;
				
				case 64:
					*uParam2 = 3198;
					break;
				
				case 65:
					*uParam2 = 3199;
					break;
				
				case 66:
					*uParam2 = 3200;
					break;
				
				case 67:
					*uParam2 = 3201;
					break;
				
				case 68:
					*uParam2 = 3669;
					break;
				
				case 69:
					*uParam2 = 3670;
					break;
				
				case 70:
					*uParam2 = 3671;
					break;
				
				case 71:
					*uParam2 = 3672;
					break;
				
				case 72:
					*uParam2 = 3673;
					break;
				
				case 73:
					*uParam2 = 3674;
					break;
				
				case 74:
					*uParam2 = 3675;
					break;
				
				case 75:
					*uParam2 = 3676;
					break;
				
				case 76:
					*uParam2 = 3677;
					break;
				
				case 77:
					*uParam2 = 3678;
					break;
				
				case 78:
					*uParam2 = 3792;
					break;
				
				case 79:
					*uParam2 = 3793;
					break;
				
				case 80:
					*uParam2 = 3794;
					break;
				
				case 81:
					*uParam2 = 3795;
					break;
				
				case 82:
					*uParam2 = 3796;
					break;
				
				case 83:
					*uParam2 = 3797;
					break;
				
				case 84:
					*uParam2 = 3798;
					break;
				
				case 85:
					*uParam2 = 3799;
					break;
				
				case 86:
					*uParam2 = 3902;
					break;
				
				case 87:
					*uParam2 = 3903;
					break;
				
				case 88:
					*uParam2 = 3904;
					break;
				
				case 89:
					*uParam2 = 5337;
					break;
				
				case 90:
					*uParam2 = 5338;
					break;
				
				case 91:
					*uParam2 = 5339;
					break;
				
				case 92:
					*uParam2 = 5340;
					break;
				
				case 93:
					*uParam2 = 5341;
					break;
				
				case 94:
					*uParam2 = 5342;
					break;
				
				case 95:
					*uParam2 = 5343;
					break;
				
				case 96:
					*uParam2 = 5344;
					break;
				
				case 97:
					*uParam2 = 5345;
					break;
				
				case 98:
					*uParam2 = 5346;
					break;
				
				case 99:
					*uParam2 = 5347;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5348;
					break;
				
				case 101:
					*uParam2 = 5394;
					break;
				
				case 102:
					*uParam2 = 5395;
					break;
				
				case 103:
					*uParam2 = 5396;
					break;
				
				case 104:
					*uParam2 = 5397;
					break;
				
				case 105:
					*uParam2 = 5398;
					break;
				
				case 106:
					*uParam2 = 5399;
					break;
				
				case 107:
					*uParam2 = 5400;
					break;
				
				case 108:
					*uParam2 = 5401;
					break;
				
				case 109:
					*uParam2 = 5402;
					break;
				
				case 110:
					*uParam2 = 5403;
					break;
				
				case 111:
					*uParam2 = 5404;
					break;
				
				case 112:
					*uParam2 = 5405;
					break;
				
				case 113:
					*uParam2 = 5406;
					break;
				
				case 114:
					*uParam2 = 5407;
					break;
				
				case 115:
					*uParam2 = 5408;
					break;
				
				case 116:
					*uParam2 = 5409;
					break;
				
				case 117:
					*uParam2 = 5410;
					break;
				
				case 118:
					*uParam2 = 5411;
					break;
				
				case 119:
					*uParam2 = 5412;
					break;
				
				case 120:
					*uParam2 = 5413;
					break;
				
				case 121:
					*uParam2 = 5414;
					break;
				
				case 122:
					*uParam2 = 5415;
					break;
				
				case 123:
					*uParam2 = 5416;
					break;
				
				case 124:
					*uParam2 = 6122;
					break;
				
				case 125:
					*uParam2 = 6123;
					break;
				
				case 126:
					*uParam2 = 6124;
					break;
				
				case 127:
					*uParam2 = 6125;
					break;
				
				case 128:
					*uParam2 = 6126;
					break;
				
				case 129:
					*uParam2 = 6127;
					break;
				
				case 130:
					*uParam2 = 6128;
					break;
				
				case 131:
					*uParam2 = 6129;
					break;
				
				case 132:
					*uParam2 = 6130;
					break;
				
				case 133:
					*uParam2 = 6131;
					break;
				
				case 134:
					*uParam2 = 6132;
					break;
				
				case 135:
					*uParam2 = 6133;
					break;
				
				case 136:
					*uParam2 = 6134;
					break;
				
				case 137:
					*uParam2 = 6135;
					break;
				
				case 138:
					*uParam2 = 6136;
					break;
				
				case 139:
					*uParam2 = 6435;
					break;
				
				case 140:
					*uParam2 = 6436;
					break;
				
				case 141:
					*uParam2 = 6437;
					break;
				
				case 142:
					*uParam2 = 6438;
					break;
				
				case 143:
					*uParam2 = 6439;
					break;
				
				case 144:
					*uParam2 = 6440;
					break;
				
				case 145:
					*uParam2 = 6441;
					break;
				
				case 146:
					*uParam2 = 6442;
					break;
				
				case 147:
					*uParam2 = 6443;
					break;
				
				case 148:
					*uParam2 = 6444;
					break;
				
				case 149:
					*uParam2 = 6445;
					break;
				
				case 150:
					*uParam2 = 6446;
					break;
				
				case 151:
					*uParam2 = 6447;
					break;
				
				case 152:
					*uParam2 = 6448;
					break;
				
				case 153:
					*uParam2 = 6449;
					break;
				
				case 154:
					*uParam2 = 7266;
					break;
				
				case 155:
					*uParam2 = 7267;
					break;
				
				case 156:
					*uParam2 = 7268;
					break;
				
				case 157:
					*uParam2 = 7269;
					break;
				
				case 158:
					*uParam2 = 7270;
					break;
				
				case 159:
					*uParam2 = 7271;
					break;
				
				case 160:
					*uParam2 = 7272;
					break;
				
				case 161:
					*uParam2 = 7879;
					break;
				
				case 162:
					*uParam2 = 7880;
					break;
				
				case 163:
					*uParam2 = 7881;
					break;
				
				case 164:
					*uParam2 = 7882;
					break;
				
				case 165:
					*uParam2 = 7883;
					break;
				
				case 166:
					*uParam2 = 7884;
					break;
				
				case 167:
					*uParam2 = 7885;
					break;
				
				case 168:
					*uParam2 = 7886;
					break;
				
				case 169:
					*uParam2 = 7887;
					break;
				
				case 170:
					*uParam2 = 7888;
					break;
				
				case 171:
					*uParam2 = 7889;
					break;
				
				case 172:
					*uParam2 = 7890;
					break;
				
				case 173:
					*uParam2 = 7891;
					break;
				
				case 174:
					*uParam2 = 7892;
					break;
				
				case 175:
					*uParam2 = 7893;
					break;
				
				case 176:
					*uParam2 = 8299;
					break;
				
				case 177:
					*uParam2 = 8300;
					break;
				
				case 178:
					*uParam2 = 8301;
					break;
				
				case 179:
					*uParam2 = 8302;
					break;
				
				case 180:
					*uParam2 = 8303;
					break;
				
				case 181:
					*uParam2 = 8304;
					break;
				
				case 182:
					*uParam2 = 8305;
					break;
				
				case 183:
					*uParam2 = 8306;
					break;
				
				case 184:
					*uParam2 = 8307;
					break;
				
				case 185:
					*uParam2 = 8308;
					break;
				
				case 186:
					*uParam2 = 8309;
					break;
				
				case 187:
					*uParam2 = 8310;
					break;
				
				case 188:
					*uParam2 = 8311;
					break;
				
				case 189:
					*uParam2 = 8312;
					break;
				
				case 190:
					*uParam2 = 8313;
					break;
				
				case 191:
					*uParam2 = 8314;
					break;
				
				case 192:
					*uParam2 = 8315;
					break;
				
				case 193:
					*uParam2 = 8316;
					break;
				
				case 194:
					*uParam2 = 8317;
					break;
				
				case 195:
					*uParam2 = 8318;
					break;
				
				case 196:
					*uParam2 = 8319;
					break;
				
				case 197:
					*uParam2 = 8320;
					break;
				
				case 198:
					*uParam2 = 8321;
					break;
				
				case 199:
					*uParam2 = 8322;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8323;
					break;
				
				case 201:
					*uParam2 = 8936;
					break;
				
				case 202:
					*uParam2 = 8937;
					break;
				
				case 203:
					*uParam2 = 8938;
					break;
				
				case 204:
					*uParam2 = 8939;
					break;
				
				case 205:
					*uParam2 = 8940;
					break;
				
				case 206:
					*uParam2 = 9419;
					break;
				
				case 207:
					*uParam2 = 9420;
					break;
				
				case 208:
					*uParam2 = 9421;
					break;
				
				case 209:
					*uParam2 = 9422;
					break;
				
				case 210:
					*uParam2 = 9423;
					break;
				
				case 211:
					*uParam2 = 9424;
					break;
				
				case 212:
					*uParam2 = 9425;
					break;
				
				case 213:
					*uParam2 = 9426;
					break;
				
				case 214:
					*uParam2 = 9427;
					break;
				
				case 215:
					*uParam2 = 9428;
					break;
				
				case 216:
					*uParam2 = 9429;
					break;
				
				case 217:
					*uParam2 = 9430;
					break;
				
				case 218:
					*uParam2 = 9431;
					break;
				
				case 219:
					*uParam2 = 9432;
					break;
				
				case 220:
					*uParam2 = 9433;
					break;
				
				case 221:
					*uParam2 = 9434;
					break;
				
				case 222:
					*uParam2 = 9435;
					break;
				
				case 223:
					*uParam2 = 9436;
					break;
				
				case 224:
					*uParam2 = 9437;
					break;
				
				case 225:
					*uParam2 = 9438;
					break;
				
				case 226:
					*uParam2 = 9439;
					break;
				
				case 227:
					*uParam2 = 9440;
					break;
				
				case 228:
					*uParam2 = 9441;
					break;
				
				case 229:
					*uParam2 = 9442;
					break;
				
				case 230:
					*uParam2 = 9443;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1765;
					break;
				
				case 1:
					*uParam2 = 1766;
					break;
				
				case 2:
					*uParam2 = 1767;
					break;
				
				case 3:
					*uParam2 = 1768;
					break;
				
				case 4:
					*uParam2 = 1769;
					break;
				
				case 5:
					*uParam2 = 1770;
					break;
				
				case 6:
					*uParam2 = 1778;
					break;
				
				case 7:
					*uParam2 = 1779;
					break;
				
				case 8:
					*uParam2 = 1780;
					break;
				
				case 9:
					*uParam2 = 1781;
					break;
				
				case 10:
					*uParam2 = 1782;
					break;
				
				case 11:
					*uParam2 = 1783;
					break;
				
				case 12:
					*uParam2 = 1784;
					break;
				
				case 13:
					*uParam2 = 1787;
					break;
				
				case 14:
					*uParam2 = 1788;
					break;
				
				case 15:
					*uParam2 = 1889;
					break;
				
				case 16:
					*uParam2 = 1890;
					break;
				
				case 17:
					*uParam2 = 1920;
					break;
				
				case 18:
					*uParam2 = 1938;
					break;
				
				case 19:
					*uParam2 = 1939;
					break;
				
				case 20:
					*uParam2 = 1940;
					break;
				
				case 21:
					*uParam2 = 1941;
					break;
				
				case 22:
					*uParam2 = 1942;
					break;
				
				case 23:
					*uParam2 = 2043;
					break;
				
				case 24:
					*uParam2 = 2044;
					break;
				
				case 25:
					*uParam2 = 2078;
					break;
				
				case 26:
					*uParam2 = 2079;
					break;
				
				case 27:
					*uParam2 = 2080;
					break;
				
				case 28:
					*uParam2 = 2081;
					break;
				
				case 29:
					*uParam2 = 2082;
					break;
				
				case 30:
					*uParam2 = 2083;
					break;
				
				case 31:
					*uParam2 = 2084;
					break;
				
				case 32:
					*uParam2 = 2085;
					break;
				
				case 33:
					*uParam2 = 2086;
					break;
				
				case 34:
					*uParam2 = 2087;
					break;
				
				case 35:
					*uParam2 = 2326;
					break;
				
				case 36:
					*uParam2 = 2327;
					break;
				
				case 37:
					*uParam2 = 2393;
					break;
				
				case 38:
					*uParam2 = 2394;
					break;
				
				case 39:
					*uParam2 = 2395;
					break;
				
				case 40:
					*uParam2 = 2396;
					break;
				
				case 41:
					*uParam2 = 2461;
					break;
				
				case 42:
					*uParam2 = 2462;
					break;
				
				case 43:
					*uParam2 = 2463;
					break;
				
				case 44:
					*uParam2 = 2464;
					break;
				
				case 45:
					*uParam2 = 2465;
					break;
				
				case 46:
					*uParam2 = 2466;
					break;
				
				case 47:
					*uParam2 = 2467;
					break;
				
				case 48:
					*uParam2 = 2468;
					break;
				
				case 49:
					*uParam2 = 2469;
					break;
				
				case 50:
					*uParam2 = 2470;
					break;
				
				case 51:
					*uParam2 = 2600;
					break;
				
				case 52:
					*uParam2 = 2601;
					break;
				
				case 53:
					*uParam2 = 2602;
					break;
				
				case 54:
					*uParam2 = 2603;
					break;
				
				case 55:
					*uParam2 = 2604;
					break;
				
				case 56:
					*uParam2 = 2605;
					break;
				
				case 57:
					*uParam2 = 2606;
					break;
				
				case 58:
					*uParam2 = 2607;
					break;
				
				case 59:
					*uParam2 = 2608;
					break;
				
				case 60:
					*uParam2 = 2609;
					break;
				
				case 61:
					*uParam2 = 2610;
					break;
				
				case 62:
					*uParam2 = 3202;
					break;
				
				case 63:
					*uParam2 = 3203;
					break;
				
				case 64:
					*uParam2 = 3204;
					break;
				
				case 65:
					*uParam2 = 3205;
					break;
				
				case 66:
					*uParam2 = 3206;
					break;
				
				case 67:
					*uParam2 = 3207;
					break;
				
				case 68:
					*uParam2 = 3679;
					break;
				
				case 69:
					*uParam2 = 3680;
					break;
				
				case 70:
					*uParam2 = 3681;
					break;
				
				case 71:
					*uParam2 = 3682;
					break;
				
				case 72:
					*uParam2 = 3683;
					break;
				
				case 73:
					*uParam2 = 3684;
					break;
				
				case 74:
					*uParam2 = 3685;
					break;
				
				case 75:
					*uParam2 = 3686;
					break;
				
				case 76:
					*uParam2 = 3687;
					break;
				
				case 77:
					*uParam2 = 3688;
					break;
				
				case 78:
					*uParam2 = 3800;
					break;
				
				case 79:
					*uParam2 = 3801;
					break;
				
				case 80:
					*uParam2 = 3802;
					break;
				
				case 81:
					*uParam2 = 3803;
					break;
				
				case 82:
					*uParam2 = 3804;
					break;
				
				case 83:
					*uParam2 = 3805;
					break;
				
				case 84:
					*uParam2 = 3806;
					break;
				
				case 85:
					*uParam2 = 3807;
					break;
				
				case 86:
					*uParam2 = 3905;
					break;
				
				case 87:
					*uParam2 = 3906;
					break;
				
				case 88:
					*uParam2 = 3907;
					break;
				
				case 89:
					*uParam2 = 5349;
					break;
				
				case 90:
					*uParam2 = 5350;
					break;
				
				case 91:
					*uParam2 = 5351;
					break;
				
				case 92:
					*uParam2 = 5352;
					break;
				
				case 93:
					*uParam2 = 5353;
					break;
				
				case 94:
					*uParam2 = 5354;
					break;
				
				case 95:
					*uParam2 = 5355;
					break;
				
				case 96:
					*uParam2 = 5356;
					break;
				
				case 97:
					*uParam2 = 5357;
					break;
				
				case 98:
					*uParam2 = 5358;
					break;
				
				case 99:
					*uParam2 = 5359;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5360;
					break;
				
				case 101:
					*uParam2 = 5417;
					break;
				
				case 102:
					*uParam2 = 5418;
					break;
				
				case 103:
					*uParam2 = 5419;
					break;
				
				case 104:
					*uParam2 = 5420;
					break;
				
				case 105:
					*uParam2 = 5421;
					break;
				
				case 106:
					*uParam2 = 5422;
					break;
				
				case 107:
					*uParam2 = 5423;
					break;
				
				case 108:
					*uParam2 = 5424;
					break;
				
				case 109:
					*uParam2 = 5425;
					break;
				
				case 110:
					*uParam2 = 5426;
					break;
				
				case 111:
					*uParam2 = 5427;
					break;
				
				case 112:
					*uParam2 = 5428;
					break;
				
				case 113:
					*uParam2 = 5429;
					break;
				
				case 114:
					*uParam2 = 5430;
					break;
				
				case 115:
					*uParam2 = 5431;
					break;
				
				case 116:
					*uParam2 = 5432;
					break;
				
				case 117:
					*uParam2 = 5433;
					break;
				
				case 118:
					*uParam2 = 5434;
					break;
				
				case 119:
					*uParam2 = 5435;
					break;
				
				case 120:
					*uParam2 = 5436;
					break;
				
				case 121:
					*uParam2 = 5437;
					break;
				
				case 122:
					*uParam2 = 5438;
					break;
				
				case 123:
					*uParam2 = 5439;
					break;
				
				case 124:
					*uParam2 = 6137;
					break;
				
				case 125:
					*uParam2 = 6138;
					break;
				
				case 126:
					*uParam2 = 6139;
					break;
				
				case 127:
					*uParam2 = 6140;
					break;
				
				case 128:
					*uParam2 = 6141;
					break;
				
				case 129:
					*uParam2 = 6142;
					break;
				
				case 130:
					*uParam2 = 6143;
					break;
				
				case 131:
					*uParam2 = 6144;
					break;
				
				case 132:
					*uParam2 = 6145;
					break;
				
				case 133:
					*uParam2 = 6146;
					break;
				
				case 134:
					*uParam2 = 6147;
					break;
				
				case 135:
					*uParam2 = 6148;
					break;
				
				case 136:
					*uParam2 = 6149;
					break;
				
				case 137:
					*uParam2 = 6150;
					break;
				
				case 138:
					*uParam2 = 6151;
					break;
				
				case 139:
					*uParam2 = 6450;
					break;
				
				case 140:
					*uParam2 = 6451;
					break;
				
				case 141:
					*uParam2 = 6452;
					break;
				
				case 142:
					*uParam2 = 6453;
					break;
				
				case 143:
					*uParam2 = 6454;
					break;
				
				case 144:
					*uParam2 = 6455;
					break;
				
				case 145:
					*uParam2 = 6456;
					break;
				
				case 146:
					*uParam2 = 6457;
					break;
				
				case 147:
					*uParam2 = 6458;
					break;
				
				case 148:
					*uParam2 = 6459;
					break;
				
				case 149:
					*uParam2 = 6460;
					break;
				
				case 150:
					*uParam2 = 6461;
					break;
				
				case 151:
					*uParam2 = 6462;
					break;
				
				case 152:
					*uParam2 = 6463;
					break;
				
				case 153:
					*uParam2 = 6464;
					break;
				
				case 154:
					*uParam2 = 7273;
					break;
				
				case 155:
					*uParam2 = 7274;
					break;
				
				case 156:
					*uParam2 = 7275;
					break;
				
				case 157:
					*uParam2 = 7276;
					break;
				
				case 158:
					*uParam2 = 7277;
					break;
				
				case 159:
					*uParam2 = 7278;
					break;
				
				case 160:
					*uParam2 = 7279;
					break;
				
				case 161:
					*uParam2 = 7894;
					break;
				
				case 162:
					*uParam2 = 7895;
					break;
				
				case 163:
					*uParam2 = 7896;
					break;
				
				case 164:
					*uParam2 = 7897;
					break;
				
				case 165:
					*uParam2 = 7898;
					break;
				
				case 166:
					*uParam2 = 7899;
					break;
				
				case 167:
					*uParam2 = 7900;
					break;
				
				case 168:
					*uParam2 = 7901;
					break;
				
				case 169:
					*uParam2 = 7902;
					break;
				
				case 170:
					*uParam2 = 7903;
					break;
				
				case 171:
					*uParam2 = 7904;
					break;
				
				case 172:
					*uParam2 = 7905;
					break;
				
				case 173:
					*uParam2 = 7906;
					break;
				
				case 174:
					*uParam2 = 7907;
					break;
				
				case 175:
					*uParam2 = 7908;
					break;
				
				case 176:
					*uParam2 = 8324;
					break;
				
				case 177:
					*uParam2 = 8325;
					break;
				
				case 178:
					*uParam2 = 8326;
					break;
				
				case 179:
					*uParam2 = 8327;
					break;
				
				case 180:
					*uParam2 = 8328;
					break;
				
				case 181:
					*uParam2 = 8329;
					break;
				
				case 182:
					*uParam2 = 8330;
					break;
				
				case 183:
					*uParam2 = 8331;
					break;
				
				case 184:
					*uParam2 = 8332;
					break;
				
				case 185:
					*uParam2 = 8333;
					break;
				
				case 186:
					*uParam2 = 8334;
					break;
				
				case 187:
					*uParam2 = 8335;
					break;
				
				case 188:
					*uParam2 = 8336;
					break;
				
				case 189:
					*uParam2 = 8337;
					break;
				
				case 190:
					*uParam2 = 8338;
					break;
				
				case 191:
					*uParam2 = 8339;
					break;
				
				case 192:
					*uParam2 = 8340;
					break;
				
				case 193:
					*uParam2 = 8341;
					break;
				
				case 194:
					*uParam2 = 8342;
					break;
				
				case 195:
					*uParam2 = 8343;
					break;
				
				case 196:
					*uParam2 = 8344;
					break;
				
				case 197:
					*uParam2 = 8345;
					break;
				
				case 198:
					*uParam2 = 8346;
					break;
				
				case 199:
					*uParam2 = 8347;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8348;
					break;
				
				case 201:
					*uParam2 = 8941;
					break;
				
				case 202:
					*uParam2 = 8942;
					break;
				
				case 203:
					*uParam2 = 8943;
					break;
				
				case 204:
					*uParam2 = 8944;
					break;
				
				case 205:
					*uParam2 = 8945;
					break;
				
				case 206:
					*uParam2 = 9444;
					break;
				
				case 207:
					*uParam2 = 9445;
					break;
				
				case 208:
					*uParam2 = 9446;
					break;
				
				case 209:
					*uParam2 = 9447;
					break;
				
				case 210:
					*uParam2 = 9448;
					break;
				
				case 211:
					*uParam2 = 9449;
					break;
				
				case 212:
					*uParam2 = 9450;
					break;
				
				case 213:
					*uParam2 = 9451;
					break;
				
				case 214:
					*uParam2 = 9452;
					break;
				
				case 215:
					*uParam2 = 9453;
					break;
				
				case 216:
					*uParam2 = 9454;
					break;
				
				case 217:
					*uParam2 = 9455;
					break;
				
				case 218:
					*uParam2 = 9456;
					break;
				
				case 219:
					*uParam2 = 9457;
					break;
				
				case 220:
					*uParam2 = 9458;
					break;
				
				case 221:
					*uParam2 = 9459;
					break;
				
				case 222:
					*uParam2 = 9460;
					break;
				
				case 223:
					*uParam2 = 9461;
					break;
				
				case 224:
					*uParam2 = 9462;
					break;
				
				case 225:
					*uParam2 = 9463;
					break;
				
				case 226:
					*uParam2 = 9464;
					break;
				
				case 227:
					*uParam2 = 9465;
					break;
				
				case 228:
					*uParam2 = 9466;
					break;
				
				case 229:
					*uParam2 = 9467;
					break;
				
				case 230:
					*uParam2 = 9468;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 11511;
}

int func_190(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
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
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_191(int iParam0, int iParam1)
{
	iVar0 = 0;
	Global_76434[0].f_5 = 4;
	func_192(iVar0, iParam0, 0, iParam1);
}

void func_192(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_76434[0].f_5;
	if (iParam0 == 12)
	{
		iVar18 = 0;
		iVar19 = unk_0x84997C8C8A5848DD(iVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0xA69F810DF7EA02E6(iVar17, &Var2);
			if (!unk_0x232048AB4B0E0259(Var2))
			{
				if (iVar18 == (iParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_183(&(Global_76434[0]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_183(&(Global_76434[0]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0x30BBA34DD235D7FE(&Var20);
		iVar39 = 0;
		iVar40 = unk_0xF6900DA2D9CD7BC5(iVar1, 7, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40)
		{
			unk_0x4F79808059300187(iVar38, &Var20);
			if (!unk_0x232048AB4B0E0259(Var20))
			{
				if (iVar39 == (iParam1 - iParam2))
				{
					if (Var20.f_6 == 0)
					{
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1)
					{
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2)
					{
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3)
					{
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4)
					{
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5)
					{
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6)
					{
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7)
					{
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8)
					{
						iVar37 = 8;
					}
					else
					{
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20;
					func_183(&(Global_76434[0]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, unk_0x1A5A491D253EA7BA(Var20.f_1, -2050632586, 0), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else
	{
		unk_0x65C0659496B1CC14(&Var41);
		if (iParam3 != -1 && Global_76603)
		{
			unk_0xFDEBA3FD0BF0D4AC(iParam3, &Var41);
			Global_2621444 = Var41.f_1;
			Global_2621445 = Var41;
			func_183(&(Global_76434[0]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, unk_0x1A5A491D253EA7BA(Var41.f_1, -2050632586, 0), -1, 2, Var41.f_1 != 0);
			return;
		}
		iVar59 = 0;
		iVar60 = unk_0xF6900DA2D9CD7BC5(iVar1, 7, -1, 0, -1, func_193(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60)
		{
			unk_0xC578687D5A643830(iVar58, &Var41);
			if (!unk_0x232048AB4B0E0259(Var41))
			{
				if (iVar59 == (iParam1 - iParam2))
				{
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41;
					func_183(&(Global_76434[0]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, unk_0x1A5A491D253EA7BA(Var41.f_1, -2050632586, 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

int func_193(int iParam0)
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

void func_194(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		default:
			Global_76434[0].f_5 = 4;
			func_192(iVar10, iParam0, 9, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_183(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_195(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S1", 16);
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S2", 16);
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S3", 16);
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S4", 16);
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S5", 16);
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S6", 16);
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S7", 16);
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S8", 16);
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P1", 16);
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P2", 16);
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P3", 16);
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P4", 16);
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P5", 16);
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P6", 16);
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P7", 16);
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P8", 16);
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P9", 16);
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P10", 16);
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B1", 16);
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B2", 16);
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B3", 16);
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B4", 16);
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B5", 16);
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B6", 16);
			break;
		
		case 25:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B7", 16);
			break;
		
		case 26:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B8", 16);
			break;
		
		case 27:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B9", 16);
			break;
		
		default:
			Global_76434[0].f_5 = 4;
			func_192(iVar10, iParam0, 28, iParam1);
			return;
			break;
	}
	func_183(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_196(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0)
	{
		case 0:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 235;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMF_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMF_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 5000;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMF_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMF_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMF_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMF_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMF_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMF_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMF_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMF_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMF_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMF_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMF_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMF_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMF_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMF_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 120;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 400;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 375;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 325;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 255;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMF_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 360;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMF_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMF_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 3970;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMF_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMF_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1355;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMF_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMF_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMF_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMF_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 230;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMF_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMF_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 515;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMF_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 545;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMF_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMF_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMF_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMF_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 1440;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMF_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMF_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMF_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMF_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMF_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMF_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMF_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMF_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMF_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMF_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMF_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMF_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 79:
			StringCopy(&Var2, "HT_FMF_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 50;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMF_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMF_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 575;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMF_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 605;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMF_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMF_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMF_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMF_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMF_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMF_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMF_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMF_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 285;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 2125;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 295;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 855;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1615;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 1130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 165;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMF_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMF_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMF_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 110;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMF_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 145;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMF_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 105;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMF_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 105;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMF_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 115;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMF_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 115;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 390;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 395;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 425;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 600;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 590;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 555;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMF_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 1060;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMF_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 1400;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMF_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 1315;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMF_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 1230;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMF_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 1145;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMF_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 8450;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMF_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 675;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMF_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 8750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMF_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 975;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMF_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMF_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 865;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMF_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 890;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMF_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 730;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMF_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 650;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMF_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 645;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMF_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 755;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMF_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 13850;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMF_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 2900;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMF_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 2895;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMF_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 12500;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMF_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 15000;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMF_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 14750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMF_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 13150;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMF_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 2925;
			iVar8 = 0;
			iVar11 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 163:
			StringCopy(&Var2, "CLO_EXF_G_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "CLO_EXF_G_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "CLO_EXF_G_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 160;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMF_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMF_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMF_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMF_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMF_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMF_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMF_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 174:
			StringCopy(&Var2, "CLO_EXF_G_1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 970;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "CLO_EXF_G_1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 585;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "CLO_EXF_G_1_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMF_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMF_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMF_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMF_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMF_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 595;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "G_FMF_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 160;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "G_FMF_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 545;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "G_FMF_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 590;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "CLO_EXF_G_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 1125;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "CLO_EXF_G_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 740;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "CLO_EXF_G_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 805;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMF_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 6250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMF_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 4065;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMF_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 3585;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMF_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 4075;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMF_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 4935;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "G_FMF_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "G_FMF_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 5600;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "G_FMF_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 4790;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "CLO_EXF_G_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "CLO_EXF_G_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "CLO_EXF_G_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 2245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 210;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 1205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "G_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "G_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 2215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "G_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "CLO_EXF_G_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 2835;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "CLO_EXF_G_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 2450;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "CLO_EXF_G_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 2515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "G_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "G_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "G_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMF_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMF_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMF_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMF_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 5000;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMF_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMF_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMF_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMF_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMF_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMF_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMF_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 229:
			StringCopy(&Var2, "CLO_EXF_G_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 2820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "CLO_EXF_G_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 2435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "CLO_EXF_G_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 2500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMF_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 4815;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMF_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 4795;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "G_FMF_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 4305;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "G_FMF_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 4305;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "G_FMF_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 4965;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "G_FMF_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 480;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMF_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 465;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMF_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 4320;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "CLO_EXF_G_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 2390;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "CLO_EXF_G_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 2005;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "CLO_EXF_G_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 2070;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 243:
			StringCopy(&Var2, "G_FMF_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMF_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 245:
			StringCopy(&Var2, "G_FMF_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 246:
			StringCopy(&Var2, "G_FMF_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 247:
			StringCopy(&Var2, "G_FMF_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMF_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMF_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMF_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 251:
			StringCopy(&Var2, "CLO_EXF_G_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "CLO_EXF_G_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "CLO_EXF_G_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMF_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 70;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMF_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "G_FMF_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "G_FMF_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 570;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "G_FMF_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 525;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMF_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMF_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMF_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "CLO_EXF_G_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "CLO_EXF_G_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "CLO_EXF_G_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMF_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 4065;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMF_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "G_FMF_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "G_FMF_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 4275;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "G_FMF_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMF_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMF_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMF_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 273:
			StringCopy(&Var2, "CLO_EXF_G_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 274:
			StringCopy(&Var2, "CLO_EXF_G_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 275:
			StringCopy(&Var2, "CLO_EXF_G_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 276:
			StringCopy(&Var2, "G_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 3660;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 4165;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 3670;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 3620;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 3610;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 4140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 286:
			StringCopy(&Var2, "G_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 287:
			StringCopy(&Var2, "G_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 288:
			StringCopy(&Var2, "G_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 297:
			StringCopy(&Var2, "G_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 298:
			StringCopy(&Var2, "G_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 299:
			StringCopy(&Var2, "G_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMF_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMF_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMF_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMF_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMF_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMF_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMF_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMF_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 308:
			StringCopy(&Var2, "CLO_EXF_G_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 1490;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "CLO_EXF_G_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 1105;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "CLO_EXF_G_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 1170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 316:
			StringCopy(&Var2, "G_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 317:
			StringCopy(&Var2, "G_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 318:
			StringCopy(&Var2, "G_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 825;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMF_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMF_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
	}
	if (iVar11 == 1)
	{
		iVar12 = (iParam0 - 10);
		if (iVar12 >= 0 && iVar12 < 121)
		{
			if (iVar12 > 8)
			{
				iVar12 = (iVar12 - 1);
			}
			iVar1 = round(((to_float(iVar1) * Global_262145.f_2044[iVar12]) * Global_291063.f_26));
		}
	}
	else if (iVar11 == 2)
	{
		iVar13 = (iParam0 - 131);
		if (iVar13 >= 0 && iVar13 < 24)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_2165[iVar13]) * Global_291063.f_27));
		}
	}
	else if (iVar11 == 3)
	{
		iVar14 = (iParam0 - 155);
		if (iVar14 >= 0 && iVar14 < 128)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_2190[iVar14]) * Global_291063.f_56));
		}
	}
	else if (iVar11 == 4)
	{
		iVar15 = (iParam0 - 319);
		if (iVar15 >= 0 && iVar15 < 10)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_2319[iVar15]) * Global_291063.f_28));
		}
	}
	if (iParam0 >= 327)
	{
		Global_76434[0].f_5 = 4;
		func_192(iVar10, iParam0, 327, iParam1);
		if (Global_76434[0].f_7 > 0)
		{
			if (unk_0x1A5A491D253EA7BA(Global_2621444, -1757550583, 1))
			{
				Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_26));
			}
			else if (unk_0x1A5A491D253EA7BA(Global_2621444, 97230661, 1))
			{
				Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_56));
			}
			else if (unk_0x1A5A491D253EA7BA(Global_2621444, 1147826474, 1))
			{
				Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_28));
			}
		}
	}
	else
	{
		func_183(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_197(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_76434[0].f_5 = 4;
			func_192(iVar10, iParam0, 6, iParam1);
			return;
			break;
	}
	func_183(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_198(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			if (Global_262145.f_4141 != -1)
			{
				iVar1 = Global_262145.f_4141;
			}
			else
			{
				iVar1 = 310;
			}
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			if (Global_262145.f_4142 != -1)
			{
				iVar1 = Global_262145.f_4142;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			if (Global_262145.f_4143 != -1)
			{
				iVar1 = Global_262145.f_4143;
			}
			else
			{
				iVar1 = 145;
			}
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			if (Global_262145.f_4144 != -1)
			{
				iVar1 = Global_262145.f_4144;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			if (Global_262145.f_4145 != -1)
			{
				iVar1 = Global_262145.f_4145;
			}
			else
			{
				iVar1 = 265;
			}
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			if (Global_262145.f_4146 != -1)
			{
				iVar1 = Global_262145.f_4146;
			}
			else
			{
				iVar1 = 280;
			}
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			if (Global_262145.f_4147 != -1)
			{
				iVar1 = Global_262145.f_4147;
			}
			else
			{
				iVar1 = 295;
			}
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			if (Global_262145.f_4148 != -1)
			{
				iVar1 = Global_262145.f_4148;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			if (Global_262145.f_4149 != -1)
			{
				iVar1 = Global_262145.f_4149;
			}
			else
			{
				iVar1 = 85;
			}
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			if (Global_262145.f_4150 != -1)
			{
				iVar1 = Global_262145.f_4150;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			if (Global_262145.f_4151 != -1)
			{
				iVar1 = Global_262145.f_4151;
			}
			else
			{
				iVar1 = 105;
			}
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			if (Global_262145.f_4152 != -1)
			{
				iVar1 = Global_262145.f_4152;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			if (Global_262145.f_4153 != -1)
			{
				iVar1 = Global_262145.f_4153;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			if (Global_262145.f_4154 != -1)
			{
				iVar1 = Global_262145.f_4154;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			if (Global_262145.f_4155 != -1)
			{
				iVar1 = Global_262145.f_4155;
			}
			else
			{
				iVar1 = 30;
			}
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			if (Global_262145.f_4156 != -1)
			{
				iVar1 = Global_262145.f_4156;
			}
			else
			{
				iVar1 = 40;
			}
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			if (Global_262145.f_4157 != -1)
			{
				iVar1 = Global_262145.f_4157;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 18:
			iVar6 = 3;
			iVar7 = 5;
			if (Global_262145.f_4158 != -1)
			{
				iVar1 = Global_262145.f_4158;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 2;
			if (Global_262145.f_4159 != -1)
			{
				iVar1 = Global_262145.f_4159;
			}
			else
			{
				iVar1 = 355;
			}
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 3;
			if (Global_262145.f_4160 != -1)
			{
				iVar1 = Global_262145.f_4160;
			}
			else
			{
				iVar1 = 370;
			}
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 4;
			if (Global_262145.f_4161 != -1)
			{
				iVar1 = Global_262145.f_4161;
			}
			else
			{
				iVar1 = 110;
			}
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 5;
			if (Global_262145.f_4162 != -1)
			{
				iVar1 = Global_262145.f_4162;
			}
			else
			{
				iVar1 = 160;
			}
			break;
		
		case 31:
			iVar6 = 6;
			iVar7 = 0;
			if (Global_262145.f_4163 != -1)
			{
				iVar1 = Global_262145.f_4163;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 1;
			if (Global_262145.f_4164 != -1)
			{
				iVar1 = Global_262145.f_4164;
			}
			else
			{
				iVar1 = 190;
			}
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 2;
			if (Global_262145.f_4165 != -1)
			{
				iVar1 = Global_262145.f_4165;
			}
			else
			{
				iVar1 = 235;
			}
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 3;
			if (Global_262145.f_4166 != -1)
			{
				iVar1 = Global_262145.f_4166;
			}
			else
			{
				iVar1 = 220;
			}
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 4;
			if (Global_262145.f_4167 != -1)
			{
				iVar1 = Global_262145.f_4167;
			}
			else
			{
				iVar1 = 250;
			}
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 5;
			if (Global_262145.f_4168 != -1)
			{
				iVar1 = Global_262145.f_4168;
			}
			else
			{
				iVar1 = 205;
			}
			break;
		
		case 37:
			iVar6 = 7;
			iVar7 = 0;
			if (Global_262145.f_4169 != -1)
			{
				iVar1 = Global_262145.f_4169;
			}
			else
			{
				iVar1 = 445;
			}
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 1;
			if (Global_262145.f_4170 != -1)
			{
				iVar1 = Global_262145.f_4170;
			}
			else
			{
				iVar1 = 175;
			}
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar6 = 9;
			iVar7 = 0;
			if (Global_262145.f_4171 != -1)
			{
				iVar1 = Global_262145.f_4171;
			}
			else
			{
				iVar1 = 340;
			}
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		default:
			Global_76434[0].f_5 = 4;
			func_192(iVar10, iParam0, 55, iParam1);
			if (Global_76434[0].f_7 > 0)
			{
				Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_58));
			}
			return;
			break;
	}
	iVar1 = round((to_float(iVar1) * Global_291063.f_58));
	StringCopy(&Var2, "T_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_183(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_199(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_76434[0].f_5 = 4;
			func_192(iVar10, iParam0, 26, iParam1);
			if (Global_76434[0].f_7 > 0)
			{
				Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_29));
			}
			return;
			break;
	}
	StringCopy(&Var2, "M_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = (iParam0 - 1);
	if (iVar11 >= 0 && iVar11 < 26)
	{
		iVar1 = round(((to_float(iVar1) * Global_262145.f_2017[iVar11]) * Global_291063.f_29));
	}
	func_183(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_200(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 1765;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 760;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 760;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 765;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 85;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 90;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 95;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 100;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 60;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 1255;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 1050;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 1895;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 185;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 190;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 115;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 415;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 105;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3530;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2610;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 1295;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 120;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 160;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 160;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 145;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 105;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 115;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 150;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 540;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 120;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 460;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 415;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 135;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 140;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 160;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 1025;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 1560;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 145;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 120;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 365;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 2395;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 3675;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 320;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 3875;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2050;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 375;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2105;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 345;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 380;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 340;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 385;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 4135;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 370;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 375;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 385;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 365;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 325;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 325;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 370;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 400;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 365;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 410;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 4125;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 4365;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 5365;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 6225;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 3755;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 405;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 4115;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 2240;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 3850;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 3110;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 1950;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 455;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 405;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 410;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 415;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 4425;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 65;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 85;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 75;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 360;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 175;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 675;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 400;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 340;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 195;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 165;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 1040;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 100;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 205;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 200;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 100;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 1420;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 445;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 435;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 420;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 425;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 435;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 425;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 430;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 3215;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 3320;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 440;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 440;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 450;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 450;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 1255;
			break;
		
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 750;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 165;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 460;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 195;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 210;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 215;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 220;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 455;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 175;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 790;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 175;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 190;
			break;
	}
	StringCopy(&Var2, "F_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = round(((to_float(iVar1) * Global_262145.f_1760[iVar11]) * Global_291063.f_25));
	}
	if (iParam0 >= 256)
	{
		Global_76434[0].f_5 = 4;
		func_192(iVar10, iParam0, 256, iParam1);
		if (Global_76434[0].f_7 > 0)
		{
			Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_25));
		}
	}
	else
	{
		func_183(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_201(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 270;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 450;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 4875;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 1760;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 1090;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 2465;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 305;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 290;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 410;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 255;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 255;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 405;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 5000;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 4480;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 4335;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 375;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 265;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 275;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 280;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 300;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 265;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 255;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 250;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 260;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 250;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 225;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 230;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 650;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 425;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 345;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 110;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 250;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 110;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 525;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 535;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 130;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 140;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 520;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 215;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 220;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 225;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 215;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 630;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 250;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 260;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 200;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 225;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 230;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 725;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 650;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 230;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 230;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 280;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 330;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 320;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 315;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 530;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 890;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 440;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 455;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 295;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 155;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 150;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 950;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 580;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 200;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 665;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 780;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 615;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 250;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 435;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 485;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 380;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 1295;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 1135;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 1425;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1645;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1925;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 2250;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 365;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 360;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 2245;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 2170;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 275;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 300;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 145;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 155;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 155;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 510;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 165;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 465;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 250;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 110;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 470;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 480;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 155;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 275;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 395;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 285;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 560;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 595;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 295;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 230;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 215;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 270;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 295;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 215;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 290;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 230;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 230;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 350;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 335;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "L_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = round(((to_float(iVar1) * Global_262145.f_1246[iVar11]) * Global_291063.f_23));
	}
	if (iParam0 >= 256)
	{
		Global_76434[0].f_5 = 4;
		func_192(iVar10, iParam0, 256, iParam1);
		if (Global_76434[0].f_7 > 0)
		{
			Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_23));
		}
	}
	else
	{
		func_183(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_202(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 15;
			iVar7 = 0;
			break;
	}
	if (iParam0 >= 16)
	{
		Global_76434[0].f_5 = 4;
		func_192(iVar10, iParam0, 16, iParam1);
		return;
	}
	func_183(&(Global_76434[0]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_203(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 11:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 21:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 23:
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 26:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 27:
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 28:
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 29:
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 31:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 32:
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 33:
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 34:
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 4;
			break;
	}
	if (iParam0 >= 36)
	{
		Global_76434[0].f_5 = 4;
		func_192(iVar10, iParam0, 36, iParam1);
		return;
	}
	func_183(&(Global_76434[0]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_204(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 125;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 125;
			break;
		
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 33:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMF_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMF_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMF_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMF_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMF_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMF_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 40;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[77]));
			break;
		
		case 48:
			StringCopy(&Var2, "U_FMF_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 40;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[78]));
			break;
		
		case 49:
			StringCopy(&Var2, "U_FMF_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "U_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 45;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[80]));
			break;
		
		case 51:
			StringCopy(&Var2, "U_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[81]));
			break;
		
		case 52:
			StringCopy(&Var2, "U_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "U_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "U_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "U_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "U_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "U_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 375;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[87]));
			break;
		
		case 58:
			StringCopy(&Var2, "U_FMF_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "U_FMF_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 90;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[89]));
			break;
		
		case 60:
			StringCopy(&Var2, "U_FMF_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "U_FMF_5_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "U_FMF_5_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "U_FMF_5_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "U_FMF_5_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "U_FMF_5_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 67:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 68:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 69:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 70:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "U_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 90;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[176]));
			break;
		
		case 72:
			StringCopy(&Var2, "U_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 95;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[177]));
			break;
		
		case 73:
			StringCopy(&Var2, "U_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 95;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[178]));
			break;
		
		case 74:
			StringCopy(&Var2, "U_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "U_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "U_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "U_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "U_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "U_FMF_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMF_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMF_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 150;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[186]));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMF_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 65;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[187]));
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMF_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMF_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMF_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMF_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 145;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[191]));
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 1560;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[199]));
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMF_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 195;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[200]));
			break;
		
		case 96:
			StringCopy(&Var2, "U_FMF_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 200;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[201]));
			break;
		
		case 97:
			StringCopy(&Var2, "U_FMF_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "U_FMF_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "U_FMF_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 100:
			StringCopy(&Var2, "U_FMF_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "U_FMF_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "U_FMF_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "U_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 975;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[208]));
			break;
		
		case 104:
			StringCopy(&Var2, "U_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 2670;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[209]));
			break;
		
		case 105:
			StringCopy(&Var2, "U_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 480;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[210]));
			break;
		
		case 106:
			StringCopy(&Var2, "U_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 400;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[211]));
			break;
		
		case 107:
			StringCopy(&Var2, "U_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 2500;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[212]));
			break;
		
		case 108:
			StringCopy(&Var2, "U_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2060;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[213]));
			break;
		
		case 109:
			StringCopy(&Var2, "U_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2620;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[214]));
			break;
		
		case 110:
			StringCopy(&Var2, "U_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 475;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[215]));
			break;
		
		case 111:
			StringCopy(&Var2, "U_FMF_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 490;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[216]));
			break;
		
		case 112:
			StringCopy(&Var2, "U_FMF_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2280;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[217]));
			break;
		
		case 113:
			StringCopy(&Var2, "U_FMF_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 485;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[218]));
			break;
		
		case 114:
			StringCopy(&Var2, "U_FMF_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 2390;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[219]));
			break;
		
		case 115:
			StringCopy(&Var2, "U_FMF_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 2610;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[220]));
			break;
		
		case 116:
			StringCopy(&Var2, "U_FMF_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1450;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[221]));
			break;
		
		case 117:
			StringCopy(&Var2, "U_FMF_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 2720;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[222]));
			break;
		
		case 118:
			StringCopy(&Var2, "U_FMF_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 4995;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[223]));
			break;
		
		case 119:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 120:
			StringCopy(&Var2, "U_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 325;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[240]));
			break;
		
		case 121:
			StringCopy(&Var2, "U_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 122:
			StringCopy(&Var2, "U_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 123:
			StringCopy(&Var2, "U_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[243]));
			break;
		
		case 124:
			StringCopy(&Var2, "U_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 125:
			StringCopy(&Var2, "U_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 126:
			StringCopy(&Var2, "U_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 127:
			StringCopy(&Var2, "U_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 128:
			StringCopy(&Var2, "U_FMF_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMF_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMF_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 450;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[250]));
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMF_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 465;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[251]));
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMF_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMF_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMF_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMF_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		default:
			Global_76434[0].f_5 = 4;
			func_192(iVar10, iParam0, 136, iParam1);
			if (Global_76434[0].f_7 > 0)
			{
				Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_24));
			}
			return;
			break;
	}
	if (iParam0 == 4 || iParam0 == 20)
	{
		if (func_205(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = round((to_float(1250) * Global_262145.f_2980));
		}
		else
		{
			iVar1 = round((to_float(40) * Global_262145.f_1503[4]));
		}
	}
	else if (iParam0 == 7 || iParam0 == 23)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = round((to_float(450) * Global_262145.f_2979));
	}
	else if (iParam0 == 9 || iParam0 == 25)
	{
		if (func_205(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = round((to_float(500) * Global_262145.f_2978));
		}
		else
		{
			iVar1 = round((to_float(40) * Global_262145.f_1503[9]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 16)
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256)
		{
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[iVar11]));
		}
	}
	else if (iParam0 >= 16 && iParam0 < 32)
	{
		iVar12 = (iParam0 - 16);
		if (iVar12 >= 0 && iVar12 < 256)
		{
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[iVar12]));
		}
	}
	iVar1 = round((to_float(iVar1) * Global_291063.f_24));
	func_183(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

bool func_205(int iParam0, int iParam1)
{
	if (func_208(iParam0) == 11511)
	{
		return 0;
	}
	iVar0 = func_207(iParam0, iParam1);
	iVar1 = iParam0;
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_206(iVar1));
}

int func_206(int iParam0)
{
	return (iParam0 % 32);
}

int func_207(var uParam0, int iParam1)
{
	iVar0 = func_1038(func_208(uParam0), iParam1, 0);
	return iVar0;
}

int func_208(var uParam0)
{
	iVar0 = uParam0;
	iVar1 = func_210(iVar0);
	if ((func_1044() == 0 || func_209() == 0) || (func_1044() == 999 && func_209() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1038;
				break;
			
			case 1:
				return 1039;
				break;
			
			case 2:
				return 1040;
				break;
			
			case 3:
				return 1041;
				break;
			
			case 4:
				return 1042;
				break;
			
			case 5:
				return 1502;
				break;
			
			case 6:
				return 1756;
				break;
			
			case 7:
				return 1950;
				break;
			
			case 8:
				return 1951;
				break;
			
			case 9:
				return 1952;
				break;
			
			case 10:
				return 1953;
				break;
			
			case 11:
				return 1954;
				break;
			
			case 12:
				return 1955;
				break;
			
			case 13:
				return 2422;
				break;
			
			case 14:
				return 2442;
				break;
			
			case 15:
				return 2445;
				break;
			
			case 16:
				return 2448;
				break;
			
			case 17:
				return 2611;
				break;
			
			case 18:
				return 2614;
				break;
			
			case 19:
				return 2617;
				break;
			
			case 20:
				return 3783;
				break;
			
			case 21:
				return 3786;
				break;
			
			case 22:
				return 3861;
				break;
			
			case 23:
				return 3864;
				break;
			
			case 24:
				return 3867;
				break;
			
			case 25:
				return 3870;
				break;
			
			case 26:
				return 5361;
				break;
			
			case 27:
				return 5364;
				break;
			
			case 28:
				return 5466;
				break;
			
			case 29:
				return 5469;
				break;
			
			case 30:
				return 6428;
				break;
			
			case 31:
				return 6431;
				break;
			
			case 32:
				return 7252;
				break;
			
			case 33:
				return 7255;
				break;
			
			case 34:
				return 7258;
				break;
			
			case 35:
				return 7967;
				break;
			
			case 36:
				return 7970;
				break;
			
			case 37:
				return 7973;
				break;
			
			case 38:
				return 7976;
				break;
			
			case 39:
				return 8498;
				break;
			
			case 40:
				return 8501;
				break;
			
			case 41:
				return 8504;
				break;
			
			case 42:
				return 8507;
				break;
			
			case 43:
				return 8901;
				break;
			
			case 44:
				return 8904;
				break;
			
			case 45:
				return 8907;
				break;
		}
	}
	return 11511;
}

int func_209()
{
	return Global_30769;
}

int func_210(int iParam0)
{
	return (iParam0 / 32);
}

void func_211(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 125;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 230;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 355;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5000;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2725;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3265;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 3625;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 4220;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 310;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 60;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 295;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 80;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 2250;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 275;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 445;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 470;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 95;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 360;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 100;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 60;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 295;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 460;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 1980;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 2110;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 95;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 40;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 375;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 90;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 900;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1000;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1050;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1000;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2975;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 1100;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 1825;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 1750;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 1075;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 2805;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 2250;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 525;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 110;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 130;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 560;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 295;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 975;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 160;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 100;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 1700;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 380;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 95;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 90;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 85;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 150;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 145;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 1560;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 195;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 200;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 975;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 2670;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 480;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 400;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2060;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2620;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 475;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 490;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2280;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 485;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 2390;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 2610;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1450;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 2720;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 4995;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 385;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 345;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 430;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 375;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 375;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 360;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 325;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 340;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 435;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 300;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 315;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 415;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 420;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 325;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 450;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 465;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "U_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 == 4)
	{
		if (func_205(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = round(((to_float(1250) * Global_262145.f_2980) * Global_291063.f_24));
		}
		else
		{
			iVar1 = round(((to_float(40) * Global_262145.f_1503[4]) * Global_291063.f_24));
		}
	}
	else if (iParam0 == 7)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = round(((to_float(450) * Global_262145.f_2979) * Global_291063.f_24));
	}
	else if (iParam0 == 9)
	{
		if (func_205(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = round(((to_float(500) * Global_262145.f_2978) * Global_291063.f_24));
		}
		else
		{
			iVar1 = round(((to_float(40) * Global_262145.f_1503[9]) * Global_291063.f_24));
		}
	}
	else
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_1503[iVar11]) * Global_291063.f_24));
		}
	}
	if (iParam0 >= 256)
	{
		Global_76434[0].f_5 = 4;
		func_192(iVar10, iParam0, 256, iParam1);
		if (Global_76434[0].f_7 > 0)
		{
			Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_24));
		}
	}
	else
	{
		func_183(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_212(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[0]));
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[1]));
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 495;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[2]));
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 490;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[3]));
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 485;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[4]));
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 480;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[5]));
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 440;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[6]));
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 435;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[7]));
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 430;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[8]));
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 425;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[9]));
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 420;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[10]));
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 190;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[11]));
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 185;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[12]));
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 180;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[13]));
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 175;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[14]));
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 170;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[15]));
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 295;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[16]));
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 290;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[17]));
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 285;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[18]));
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 280;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[19]));
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 275;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[20]));
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 2000;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[21]));
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1995;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[22]));
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1990;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[23]));
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1985;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[24]));
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1980;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[25]));
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 1150;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[26]));
			break;
		
		case 31:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1145;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[27]));
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1140;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[28]));
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1135;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[29]));
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1130;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[30]));
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 550;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[31]));
			break;
		
		case 36:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 545;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[32]));
			break;
		
		case 37:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 540;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[33]));
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 535;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[34]));
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 530;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[35]));
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 41:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 580;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[36]));
			break;
		
		case 42:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 575;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[37]));
			break;
		
		case 43:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 570;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[38]));
			break;
		
		case 44:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 565;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[39]));
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 560;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[40]));
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 47:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 1100;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[41]));
			break;
		
		case 48:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 1095;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[42]));
			break;
		
		case 49:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 1090;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[43]));
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 1085;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[44]));
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 1080;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[45]));
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 53:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 520;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[46]));
			break;
		
		case 54:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 515;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[47]));
			break;
		
		case 55:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 510;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[48]));
			break;
		
		case 56:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 505;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[49]));
			break;
		
		case 57:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 500;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[50]));
			break;
		
		case 58:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 59:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 60:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 395;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[51]));
			break;
		
		case 61:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 390;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[52]));
			break;
		
		case 62:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 385;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[53]));
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 380;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[54]));
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 375;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[55]));
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 67:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 1050;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[56]));
			break;
		
		case 68:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 1045;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[57]));
			break;
		
		case 69:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 1040;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[58]));
			break;
		
		case 70:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 1035;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[59]));
			break;
		
		case 71:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 1030;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[60]));
			break;
		
		case 72:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 73:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 1200;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[61]));
			break;
		
		case 74:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1195;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[62]));
			break;
		
		case 75:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 1190;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[63]));
			break;
		
		case 76:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 1185;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[64]));
			break;
		
		case 77:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1180;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[65]));
			break;
		
		case 78:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 79:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 475;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[66]));
			break;
		
		case 80:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 470;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[67]));
			break;
		
		case 81:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 465;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[68]));
			break;
		
		case 82:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 460;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[69]));
			break;
		
		case 83:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 455;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[70]));
			break;
		
		case 84:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 85:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 950;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[71]));
			break;
		
		case 86:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 945;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[72]));
			break;
		
		case 87:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 940;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[73]));
			break;
		
		case 88:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 935;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[74]));
			break;
		
		case 89:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 930;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[75]));
			break;
		
		case 90:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 91:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		default:
			Global_76434[0].f_5 = 4;
			func_192(iVar10, iParam0, 92, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_183(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_213(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 2:
			func_228(iParam1, iParam2);
			break;
		
		case 11:
			func_227(iParam1, iParam2);
			break;
		
		case 8:
			func_226(iParam1, iParam2);
			break;
		
		case 9:
			func_225(iParam1, iParam2);
			break;
		
		case 3:
			func_224(iParam1, iParam2);
			break;
		
		case 4:
			func_223(iParam1, iParam2);
			break;
		
		case 6:
			func_222(iParam1, iParam2);
			break;
		
		case 1:
			func_221(iParam1, iParam2);
			break;
		
		case 7:
			func_220(iParam1, iParam2);
			break;
		
		case 10:
			func_219(iParam1, iParam2);
			break;
		
		case 14:
			func_218(iParam1, iParam2);
			break;
		
		case 12:
			func_217(iParam1, iParam2);
			break;
		
		case 5:
			func_216(iParam1, iParam2);
			break;
		
		case 0:
			func_215(iParam1, iParam2);
			break;
		
		case 13:
			func_214(iParam1);
			break;
	}
}

void func_214(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	switch (iParam0)
	{
		case 31:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			break;
	}
	func_183(&(Global_76434[0]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_215(int iParam0, int iParam1)
{
	iVar0 = 0;
	Global_76434[0].f_5 = 3;
	func_192(iVar0, iParam0, 0, iParam1);
}

void func_216(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		default:
			Global_76434[0].f_5 = 3;
			func_192(iVar10, iParam0, 9, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_183(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_217(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S1", 16);
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S2", 16);
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S3", 16);
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S4", 16);
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S5", 16);
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S6", 16);
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S7", 16);
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S8", 16);
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S9", 16);
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P1", 16);
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P2", 16);
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P3", 16);
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P4", 16);
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P5", 16);
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P6", 16);
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P7", 16);
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P8", 16);
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B1", 16);
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B2", 16);
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B3", 16);
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B4", 16);
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B5", 16);
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B6", 16);
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B7", 16);
			break;
		
		case 25:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B8", 16);
			break;
		
		default:
			Global_76434[0].f_5 = 3;
			func_192(iVar10, iParam0, 26, iParam1);
			return;
			break;
	}
	func_183(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_218(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0)
	{
		case 0:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 235;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMM_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMM_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMM_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 320;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMM_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMM_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 245;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMM_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMM_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMM_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 415;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMM_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 315;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMM_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMM_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMM_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMM_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMM_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMM_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 265;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 570;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 560;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMM_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 260;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMM_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 215;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMM_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 430;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMM_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMM_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 200;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMM_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMM_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMM_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 165;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "HT_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 100;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMM_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMM_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMM_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMM_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMM_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMM_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMM_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMM_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 1715;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 3900;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 1550;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 4250;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 4460;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 4970;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 290;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 305;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 4170;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 335;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 4940;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 275;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 5000;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 3620;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMM_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMM_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMM_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMM_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMM_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMM_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMM_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 350;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMM_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 365;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMM_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 380;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMM_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMM_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMM_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 600;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMM_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 590;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMM_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 395;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMM_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 555;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMM_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 1060;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMM_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 1400;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMM_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 1315;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMM_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 1230;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMM_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 1145;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMM_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 8450;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMM_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 675;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMM_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 8750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMM_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 975;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMM_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMM_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 865;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMM_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 890;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMM_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 730;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMM_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 650;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMM_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 645;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMM_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 755;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMM_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 13850;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMM_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 2900;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMM_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 2895;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMM_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 12500;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMM_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 15000;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMM_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 14750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMM_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 13150;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMM_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 2925;
			iVar8 = 0;
			iVar11 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 163:
			StringCopy(&Var2, "G_FMM_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "G_FMM_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "G_FMM_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMM_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMM_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMM_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMM_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMM_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 174:
			StringCopy(&Var2, "G_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "G_FMM_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "G_FMM_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 380;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMM_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMM_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMM_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMM_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMM_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 390;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "CLO_EXM_G_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 950;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "CLO_EXM_G_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 565;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "CLO_EXM_G_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 630;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "G_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 70;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "G_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "G_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 95;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "CLO_EXM_G_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "CLO_EXM_G_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 265;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "CLO_EXM_G_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 330;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "G_FMM_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "G_FMM_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "G_FMM_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 210;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMM_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMM_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMM_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMM_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMM_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "CLO_EXM_G_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "CLO_EXM_G_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 610;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "CLO_EXM_G_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 675;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "G_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 4050;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "G_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 4060;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "G_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 215:
			StringCopy(&Var2, "CLO_EXM_G_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 1760;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 216:
			StringCopy(&Var2, "CLO_EXM_G_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 1375;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 217:
			StringCopy(&Var2, "CLO_EXM_G_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 1440;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMM_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMM_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMM_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "G_FMM_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "G_FMM_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "G_FMM_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 1445;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMM_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 530;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMM_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "CLO_EXM_G_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 1170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "CLO_EXM_G_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 785;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "CLO_EXM_G_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 850;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 237:
			StringCopy(&Var2, "G_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 4260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 4310;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 4130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "G_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "G_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "G_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "G_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "CLO_EXM_G_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1885;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "CLO_EXM_G_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 1500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "CLO_EXM_G_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 1565;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "G_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "G_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "G_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 4290;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 4150;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 4295;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "CLO_EXM_G_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "CLO_EXM_G_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "CLO_EXM_G_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 6240;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 4955;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 5590;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "G_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 4920;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "G_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 4990;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "G_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 4780;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 4775;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 4800;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "CLO_EXM_G_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 2835;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "CLO_EXM_G_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 2450;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "CLO_EXM_G_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 2515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMM_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMM_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMM_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 273:
			StringCopy(&Var2, "G_FMM_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 274:
			StringCopy(&Var2, "G_FMM_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 275:
			StringCopy(&Var2, "G_FMM_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMM_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 385;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 310;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 3655;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 4055;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 3595;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 3605;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 3645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 320;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 286:
			StringCopy(&Var2, "CLO_EXM_G_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 2820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 287:
			StringCopy(&Var2, "CLO_EXM_G_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 2435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 288:
			StringCopy(&Var2, "CLO_EXM_G_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 2500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 230;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1605;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 2230;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2070;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 1690;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 297:
			StringCopy(&Var2, "CLO_EXM_G_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 2715;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 298:
			StringCopy(&Var2, "CLO_EXM_G_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2330;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 299:
			StringCopy(&Var2, "CLO_EXM_G_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 2395;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMM_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMM_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMM_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMM_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMM_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMM_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMM_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMM_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 308:
			StringCopy(&Var2, "G_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "G_FMM_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "G_FMM_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMM_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 95;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMM_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMM_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMM_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 485;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMM_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 545;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 316:
			StringCopy(&Var2, "CLO_EXM_G_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 317:
			StringCopy(&Var2, "CLO_EXM_G_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 318:
			StringCopy(&Var2, "CLO_EXM_G_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 695;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
	}
	if (iVar11 == 1)
	{
		iVar12 = (iParam0 - 10);
		if (iVar12 >= 0 && iVar12 < 121)
		{
			if (iVar12 > 8)
			{
				iVar12 = (iVar12 - 1);
			}
			iVar1 = round(((to_float(iVar1) * Global_262145.f_955[iVar12]) * Global_291063.f_18));
		}
	}
	else if (iVar11 == 2)
	{
		iVar13 = (iParam0 - 131);
		if (iVar13 >= 0 && iVar13 < 24)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_1076[iVar13]) * Global_291063.f_19));
		}
	}
	else if (iVar11 == 3)
	{
		iVar14 = (iParam0 - 155);
		if (iVar14 >= 0 && iVar14 < 128)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_1101[iVar14]) * Global_291063.f_20));
		}
	}
	else if (iVar11 == 4)
	{
		iVar15 = (iParam0 - 319);
		if (iVar15 >= 0 && iVar15 < 15)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_1230[iVar15]) * Global_291063.f_21));
		}
	}
	if (iParam0 >= 327)
	{
		Global_76434[0].f_5 = 3;
		func_192(iVar10, iParam0, 327, iParam1);
		if (Global_76434[0].f_7 > 0)
		{
			if (unk_0x1A5A491D253EA7BA(Global_2621444, -1757550583, 1))
			{
				Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_18));
			}
			else if (unk_0x1A5A491D253EA7BA(Global_2621444, 97230661, 1))
			{
				Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_20));
			}
			else if (unk_0x1A5A491D253EA7BA(Global_2621444, 1147826474, 1))
			{
				Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_21));
			}
		}
	}
	else
	{
		func_183(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_219(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 6:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_76434[0].f_5 = 3;
			func_192(iVar10, iParam0, 7, iParam1);
			return;
			break;
	}
	func_183(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_220(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 4:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 4;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 31:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 39:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 40:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 41:
			iVar6 = 10;
			iVar7 = 0;
			if (Global_262145.f_4172 != -1)
			{
				iVar1 = Global_262145.f_4172;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 42:
			iVar6 = 10;
			iVar7 = 1;
			if (Global_262145.f_4173 != -1)
			{
				iVar1 = Global_262145.f_4173;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 43:
			iVar6 = 10;
			iVar7 = 2;
			if (Global_262145.f_4174 != -1)
			{
				iVar1 = Global_262145.f_4174;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 44:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 50:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 55:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 56:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 57:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 58:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 59:
			iVar6 = 11;
			iVar7 = 2;
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
			}
			else
			{
				iVar1 = 725;
			}
			break;
		
		case 60:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 61:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 62:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 67:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 12;
			iVar7 = 0;
			if (Global_262145.f_4175 != -1)
			{
				iVar1 = Global_262145.f_4175;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 74:
			iVar6 = 12;
			iVar7 = 1;
			if (Global_262145.f_4176 != -1)
			{
				iVar1 = Global_262145.f_4176;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 75:
			iVar6 = 12;
			iVar7 = 2;
			if (Global_262145.f_4177 != -1)
			{
				iVar1 = Global_262145.f_4177;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 76:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 79:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 81:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 82:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 90:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 91:
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		default:
			Global_76434[0].f_5 = 3;
			func_192(iVar10, iParam0, 92, iParam1);
			if (Global_76434[0].f_7 > 0)
			{
				Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_57));
			}
			return;
			break;
	}
	iVar1 = round((to_float(iVar1) * Global_291063.f_57));
	StringCopy(&Var2, "T_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_183(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_221(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_76434[0].f_5 = 3;
			func_192(iVar10, iParam0, 26, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "M_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = (iParam0 - 1);
	if (iVar11 >= 0 && iVar11 < 26)
	{
		iVar1 = round(((to_float(iVar1) * Global_262145.f_928[iVar11]) * Global_291063.f_22));
	}
	func_183(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_222(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 300;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 285;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 190;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 165;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 480;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 155;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 350;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 290;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 165;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 165;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 170;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 155;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 165;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 165;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 160;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 205;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 560;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 275;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 290;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 300;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 360;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 270;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 355;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 310;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 350;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 305;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 280;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 320;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 65;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 65;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 165;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 165;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 185;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 175;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 185;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 460;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 185;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 190;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 165;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 165;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 185;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 175;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 235;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 445;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 185;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 190;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 175;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 215;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 225;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 230;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 235;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 225;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 225;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 230;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 235;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 215;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 425;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 245;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 225;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 135;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 130;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 140;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 95;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 105;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 115;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 115;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 115;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 500;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 440;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 1090;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 600;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 1865;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 490;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 470;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 1795;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 1830;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 455;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 455;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 2110;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 380;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 1655;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 415;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 730;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 445;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 425;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 410;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 480;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 485;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 480;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 395;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 495;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 2090;
			break;
		
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 450;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 685;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 365;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 465;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 405;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 400;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 440;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 385;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 435;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 375;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 390;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 475;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 430;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 490;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 490;
			break;
		
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 615;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 315;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 415;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 425;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 435;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 445;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 640;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 460;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 465;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 745;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 845;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 1420;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 475;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 470;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 1000;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 690;
			break;
	}
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = round(((to_float(iVar1) * Global_262145.f_671[iVar11]) * Global_291063.f_17));
	}
	StringCopy(&Var2, "F_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 >= 256)
	{
		Global_76434[0].f_5 = 3;
		func_192(iVar10, iParam0, 256, iParam1);
		if (Global_76434[0].f_7 > 0)
		{
			Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_17));
		}
	}
	else
	{
		func_183(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_223(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 335;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 460;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 455;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 470;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 650;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 385;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 455;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 2150;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 375;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 2190;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 295;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 2240;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 465;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 1740;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 1415;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 325;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 345;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 355;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 395;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 315;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 275;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 265;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 305;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 255;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 235;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 245;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 1865;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 450;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 415;
			break;
		
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 100;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 65;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 100;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 65;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 90;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 225;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 205;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 215;
			break;
		
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 490;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 485;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 2500;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 485;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 100;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 80;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 80;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 95;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 440;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 380;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 80;
			break;
		
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 140;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 255;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 325;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 110;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 345;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 745;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 120;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 130;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 140;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 660;
			break;
		
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 150;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 75;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 90;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 145;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 155;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 255;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 165;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1150;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1150;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 1210;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 1125;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 1135;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 1145;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 1145;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 845;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 480;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 475;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 220;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 65;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 460;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 475;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 470;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 100;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 100;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 95;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 105;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 295;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 250;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 285;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 275;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 105;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 100;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 95;
			break;
	}
	StringCopy(&Var2, "L_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = round(((to_float(iVar1) * Global_262145.f_176[iVar11]) * Global_291063.f_15));
	}
	if (iParam0 >= 256)
	{
		Global_76434[0].f_5 = 3;
		func_192(iVar10, iParam0, 256, iParam1);
		if (Global_76434[0].f_7 > 0)
		{
			Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_15));
		}
	}
	else
	{
		func_183(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_224(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		default:
			Global_76434[0].f_5 = 3;
			func_192(iVar10, iParam0, 16, iParam1);
			return;
			break;
	}
	func_183(&(Global_76434[0]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_225(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 11:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 21:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 23:
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 26:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 27:
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 28:
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 29:
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 31:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 32:
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 33:
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 34:
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 36:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 37:
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 38:
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 39:
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 40:
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 41:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 42:
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 43:
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 44:
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		case 45:
			iVar6 = 9;
			iVar7 = 4;
			break;
		
		default:
			Global_76434[0].f_5 = 3;
			func_192(iVar10, iParam0, 46, iParam1);
			return;
			break;
	}
	func_183(&(Global_76434[0]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_226(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMM_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMM_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMM_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMM_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 315;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMM_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMM_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMM_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMM_1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 205;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMM_1_11", 16);
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMM_1_12", 16);
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar6 = 1;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMM_1_14", 16);
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 170;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMM_1_15", 16);
			iVar6 = 1;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			StringCopy(&Var2, "U_FMM_0_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 33:
			StringCopy(&Var2, "U_FMM_0_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMM_0_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMM_0_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMM_0_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMM_0_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMM_0_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMM_0_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMM_0_11", 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "SP_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 49:
			StringCopy(&Var2, "SP_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 50:
			StringCopy(&Var2, "SP_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 51:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 58:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 60:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			StringCopy(&Var2, "SP_FMM_3_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 65:
			StringCopy(&Var2, "SP_FMM_3_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 66:
			StringCopy(&Var2, "SP_FMM_3_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 67:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 80;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[80]));
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 45;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[81]));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[82]));
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 50;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[87]));
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMM_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMM_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMM_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMM_5_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMM_5_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMM_5_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMM_5_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMM_5_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			StringCopy(&Var2, "SP_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			if (Global_262145.f_4202 != -1)
			{
				iVar1 = Global_262145.f_4202;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 97:
			StringCopy(&Var2, "SP_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 98:
			StringCopy(&Var2, "SP_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			if (Global_262145.f_4180 != -1)
			{
				iVar1 = Global_262145.f_4180;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 99:
			StringCopy(&Var2, "SP_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 100:
			StringCopy(&Var2, "SP_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 101:
			StringCopy(&Var2, "SP_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			if (Global_262145.f_4196 != -1)
			{
				iVar1 = Global_262145.f_4196;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 102:
			StringCopy(&Var2, "SP_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 103:
			StringCopy(&Var2, "SP_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 104:
			StringCopy(&Var2, "SP_FMM_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 105:
			StringCopy(&Var2, "SP_FMM_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 106:
			StringCopy(&Var2, "SP_FMM_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 107:
			StringCopy(&Var2, "SP_FMM_6_11", 16);
			iVar6 = 6;
			iVar7 = 11;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 108:
			StringCopy(&Var2, "SP_FMM_6_12", 16);
			iVar6 = 6;
			iVar7 = 12;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 109:
			StringCopy(&Var2, "SP_FMM_6_13", 16);
			iVar6 = 6;
			iVar7 = 13;
			if (Global_262145.f_4182 != -1)
			{
				iVar1 = Global_262145.f_4182;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 110:
			StringCopy(&Var2, "SP_FMM_6_14", 16);
			iVar6 = 6;
			iVar7 = 14;
			if (Global_262145.f_4197 != -1)
			{
				iVar1 = Global_262145.f_4197;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 111:
			StringCopy(&Var2, "SP_FMM_6_15", 16);
			iVar6 = 6;
			iVar7 = 15;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 112:
			StringCopy(&Var2, "SP_FMM_6_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			if (Global_262145.f_4202 != -1)
			{
				iVar1 = Global_262145.f_4202;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 113:
			StringCopy(&Var2, "SP_FMM_6_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 114:
			StringCopy(&Var2, "SP_FMM_6_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			if (Global_262145.f_4180 != -1)
			{
				iVar1 = Global_262145.f_4180;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 115:
			StringCopy(&Var2, "SP_FMM_6_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 116:
			StringCopy(&Var2, "SP_FMM_6_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 117:
			StringCopy(&Var2, "SP_FMM_6_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			if (Global_262145.f_4196 != -1)
			{
				iVar1 = Global_262145.f_4196;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 118:
			StringCopy(&Var2, "SP_FMM_6_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 119:
			StringCopy(&Var2, "SP_FMM_6_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 120:
			StringCopy(&Var2, "SP_FMM_6_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 121:
			StringCopy(&Var2, "SP_FMM_6_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 122:
			StringCopy(&Var2, "SP_FMM_6_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 123:
			StringCopy(&Var2, "SP_FMM_6_11", 16);
			iVar6 = 7;
			iVar7 = 11;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 124:
			StringCopy(&Var2, "SP_FMM_6_12", 16);
			iVar6 = 7;
			iVar7 = 12;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 125:
			StringCopy(&Var2, "SP_FMM_6_13", 16);
			iVar6 = 7;
			iVar7 = 13;
			if (Global_262145.f_4182 != -1)
			{
				iVar1 = Global_262145.f_4182;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 126:
			StringCopy(&Var2, "SP_FMM_6_14", 16);
			iVar6 = 7;
			iVar7 = 14;
			if (Global_262145.f_4197 != -1)
			{
				iVar1 = Global_262145.f_4197;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 127:
			StringCopy(&Var2, "SP_FMM_6_15", 16);
			iVar6 = 7;
			iVar7 = 15;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 435;
			}
			break;
	}
	switch (iParam0)
	{
		case 128:
			StringCopy(&Var2, "U_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 136:
			StringCopy(&Var2, "U_FMM_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 137:
			StringCopy(&Var2, "U_FMM_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 138:
			StringCopy(&Var2, "U_FMM_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 139:
			StringCopy(&Var2, "U_FMM_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 140:
			StringCopy(&Var2, "U_FMM_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 141:
			StringCopy(&Var2, "U_FMM_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 142:
			StringCopy(&Var2, "U_FMM_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 143:
			StringCopy(&Var2, "U_FMM_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 144:
			StringCopy(&Var2, "U_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 145:
			StringCopy(&Var2, "U_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 340;
			break;
		
		case 146:
			StringCopy(&Var2, "U_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 335;
			break;
		
		case 147:
			StringCopy(&Var2, "U_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 148:
			StringCopy(&Var2, "U_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 345;
			break;
		
		case 149:
			StringCopy(&Var2, "U_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 550;
			break;
		
		case 150:
			StringCopy(&Var2, "U_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 151:
			StringCopy(&Var2, "U_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 152:
			StringCopy(&Var2, "U_FMM_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 153:
			StringCopy(&Var2, "U_FMM_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 154:
			StringCopy(&Var2, "U_FMM_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 545;
			break;
		
		case 155:
			StringCopy(&Var2, "U_FMM_9_11", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 156:
			StringCopy(&Var2, "U_FMM_9_12", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 315;
			break;
		
		case 157:
			StringCopy(&Var2, "U_FMM_9_13", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 520;
			break;
		
		case 158:
			StringCopy(&Var2, "U_FMM_9_14", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 159:
			StringCopy(&Var2, "U_FMM_9_15", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 160:
			StringCopy(&Var2, "SP_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			if (Global_262145.f_4202 != -1)
			{
				iVar1 = Global_262145.f_4202;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 161:
			StringCopy(&Var2, "SP_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 162:
			StringCopy(&Var2, "SP_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 163:
			StringCopy(&Var2, "SP_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 164:
			StringCopy(&Var2, "SP_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 165:
			StringCopy(&Var2, "SP_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			if (Global_262145.f_4196 != -1)
			{
				iVar1 = Global_262145.f_4196;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 166:
			StringCopy(&Var2, "SP_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			if (Global_262145.f_4185 != -1)
			{
				iVar1 = Global_262145.f_4185;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 167:
			StringCopy(&Var2, "SP_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 168:
			StringCopy(&Var2, "SP_FMM_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 169:
			StringCopy(&Var2, "SP_FMM_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 170:
			StringCopy(&Var2, "SP_FMM_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 171:
			StringCopy(&Var2, "SP_FMM_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 172:
			StringCopy(&Var2, "SP_FMM_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			if (Global_262145.f_4183 != -1)
			{
				iVar1 = Global_262145.f_4183;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 173:
			StringCopy(&Var2, "SP_FMM_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			if (Global_262145.f_4198 != -1)
			{
				iVar1 = Global_262145.f_4198;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 174:
			StringCopy(&Var2, "SP_FMM_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 175:
			StringCopy(&Var2, "SP_FMM_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 460;
			}
			break;
		
		case 176:
			StringCopy(&Var2, "SP_FMM_10_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			if (Global_262145.f_4202 != -1)
			{
				iVar1 = Global_262145.f_4202;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 177:
			StringCopy(&Var2, "SP_FMM_10_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 178:
			StringCopy(&Var2, "SP_FMM_10_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 179:
			StringCopy(&Var2, "SP_FMM_10_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 180:
			StringCopy(&Var2, "SP_FMM_10_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 181:
			StringCopy(&Var2, "SP_FMM_10_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			if (Global_262145.f_4196 != -1)
			{
				iVar1 = Global_262145.f_4196;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 182:
			StringCopy(&Var2, "SP_FMM_10_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			if (Global_262145.f_4185 != -1)
			{
				iVar1 = Global_262145.f_4185;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 183:
			StringCopy(&Var2, "SP_FMM_10_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 184:
			StringCopy(&Var2, "SP_FMM_10_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 185:
			StringCopy(&Var2, "SP_FMM_10_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 186:
			StringCopy(&Var2, "SP_FMM_10_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 187:
			StringCopy(&Var2, "SP_FMM_10_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 188:
			StringCopy(&Var2, "SP_FMM_10_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			if (Global_262145.f_4183 != -1)
			{
				iVar1 = Global_262145.f_4183;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 189:
			StringCopy(&Var2, "SP_FMM_10_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			if (Global_262145.f_4198 != -1)
			{
				iVar1 = Global_262145.f_4198;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 190:
			StringCopy(&Var2, "SP_FMM_10_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 191:
			StringCopy(&Var2, "SP_FMM_10_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 460;
			}
			break;
	}
	switch (iParam0)
	{
		case 192:
			StringCopy(&Var2, "U_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 193:
			StringCopy(&Var2, "U_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 194:
			StringCopy(&Var2, "U_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 695;
			break;
		
		case 195:
			StringCopy(&Var2, "U_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 196:
			StringCopy(&Var2, "U_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 197:
			StringCopy(&Var2, "U_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 198:
			StringCopy(&Var2, "U_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 199:
			StringCopy(&Var2, "U_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 450;
			break;
		
		case 200:
			StringCopy(&Var2, "U_FMM_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 201:
			StringCopy(&Var2, "U_FMM_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 202:
			StringCopy(&Var2, "U_FMM_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 1060;
			break;
		
		case 203:
			StringCopy(&Var2, "U_FMM_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 1040;
			break;
		
		case 204:
			StringCopy(&Var2, "U_FMM_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 205:
			StringCopy(&Var2, "U_FMM_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 206:
			StringCopy(&Var2, "U_FMM_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 207:
			StringCopy(&Var2, "U_FMM_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 208:
			StringCopy(&Var2, "U_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 209:
			StringCopy(&Var2, "U_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 210:
			StringCopy(&Var2, "U_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 680;
			break;
		
		case 211:
			StringCopy(&Var2, "U_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 212:
			StringCopy(&Var2, "U_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "U_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 214:
			StringCopy(&Var2, "U_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "U_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "U_FMM_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "U_FMM_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "U_FMM_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "U_FMM_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "U_FMM_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "U_FMM_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1065;
			break;
		
		case 222:
			StringCopy(&Var2, "U_FMM_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "U_FMM_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			StringCopy(&Var2, "U_FMM_1_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 45;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[16]));
			break;
		
		case 225:
			StringCopy(&Var2, "U_FMM_1_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 60;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[17]));
			break;
		
		case 226:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "U_FMM_1_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 40;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[19]));
			break;
		
		case 228:
			StringCopy(&Var2, "U_FMM_1_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 315;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[20]));
			break;
		
		case 229:
			StringCopy(&Var2, "U_FMM_1_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 215;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[21]));
			break;
		
		case 230:
			StringCopy(&Var2, "U_FMM_1_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 265;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[22]));
			break;
		
		case 231:
			StringCopy(&Var2, "U_FMM_1_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 45;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[23]));
			break;
		
		case 232:
			StringCopy(&Var2, "U_FMM_1_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 205;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[24]));
			break;
		
		case 233:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 234:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 235:
			StringCopy(&Var2, "U_FMM_1_11", 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 60;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[27]));
			break;
		
		case 236:
			StringCopy(&Var2, "U_FMM_1_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 55;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[28]));
			break;
		
		case 237:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 238:
			StringCopy(&Var2, "U_FMM_1_14", 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 170;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[30]));
			break;
		
		case 239:
			StringCopy(&Var2, "U_FMM_1_15", 16);
			iVar6 = 14;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 240:
			StringCopy(&Var2, "U_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 0;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[32]));
			break;
	}
	if (iParam0 == 23 || iParam0 == 231)
	{
		if (func_205(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = round((to_float(1250) * Global_262145.f_2980));
		}
		else
		{
			iVar1 = round((to_float(45) * Global_262145.f_433[23]));
		}
	}
	else if (iParam0 == 17 || iParam0 == 225)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = round((to_float(450) * Global_262145.f_2979));
	}
	else if (iParam0 == 28 || iParam0 == 236)
	{
		if (func_205(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = round((to_float(500) * Global_262145.f_2978));
		}
		else
		{
			iVar1 = round((to_float(55) * Global_262145.f_433[28]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 32)
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 237)
		{
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[iVar11]));
		}
	}
	else if (iParam0 >= 32 && iParam0 < 48)
	{
		iVar12 = (iParam0 - 32);
		if (iVar12 >= 0 && iVar12 < 237)
		{
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[iVar12]));
		}
	}
	else if (iParam0 >= 128 && iParam0 < 160)
	{
		iVar13 = (iParam0 - 160) + 124;
		if (iVar13 >= 0 && iVar13 < 237)
		{
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[iVar13]));
		}
	}
	else if (iParam0 >= 192 && iParam0 < 224)
	{
		iVar14 = (iParam0 - 160) + 188;
		if (iVar14 >= 0 && iVar14 < 237)
		{
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[iVar14]));
		}
	}
	iVar1 = round((to_float(iVar1) * Global_291063.f_16));
	if (iParam0 >= 241)
	{
		Global_76434[0].f_5 = 3;
		func_192(iVar10, iParam0, 241, iParam1);
		if (Global_76434[0].f_7 > 0)
		{
			Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_16));
		}
	}
	else
	{
		func_183(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_227(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 315;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 205;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 170;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 160;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 205;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 110;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 115;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 115;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 150;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 150;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 115;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 140;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 125;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 115;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 150;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 275;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 460;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 260;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 2520;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 350;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 3125;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 80;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 45;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 2485;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 2945;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 3080;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 2990;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 3750;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 515;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 530;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 2810;
			break;
		
		case 108:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 109:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 155;
			break;
		
		case 110:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 320;
			break;
		
		case 111:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 140;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 145;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 150;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 140;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 135;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 130;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 130;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 145;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 740;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 790;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 130;
			break;
	}
	switch (iParam0)
	{
		case 124:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 125:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 128:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 141:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 340;
			break;
		
		case 142:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 335;
			break;
		
		case 143:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 345;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 550;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 545;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 315;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 520;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 156:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 505;
			break;
		
		case 157:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 470;
			break;
		
		case 158:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 475;
			break;
		
		case 159:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 173:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 360;
			break;
		
		case 174:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 2450;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 188:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 189:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 190:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 695;
			break;
		
		case 191:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 450;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 1060;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 1040;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 205:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 206:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 680;
			break;
		
		case 207:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 208:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1065;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 220:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 221:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 222:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 440;
			break;
		
		case 223:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 445;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 440;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 325;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 435;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 440;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 325;
			break;
		
		case 236:
			iVar6 = 15;
			iVar7 = 0;
			break;
	}
	StringCopy(&Var2, "U_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 == 23)
	{
		if (func_205(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = round(((to_float(1250) * Global_262145.f_2980) * Global_291063.f_16));
		}
		else
		{
			iVar1 = round(((to_float(45) * Global_262145.f_433[23]) * Global_291063.f_16));
		}
	}
	else if (iParam0 == 17)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = round(((to_float(450) * Global_262145.f_2979) * Global_291063.f_16));
	}
	else if (iParam0 == 28)
	{
		if (func_205(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = round(((to_float(500) * Global_262145.f_2978) * Global_291063.f_16));
		}
		else
		{
			iVar1 = round(((to_float(55) * Global_262145.f_433[28]) * Global_291063.f_16));
		}
	}
	else
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 237)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_433[iVar11]) * Global_291063.f_16));
		}
	}
	if (iParam0 >= 237)
	{
		Global_76434[0].f_5 = 3;
		func_192(iVar10, iParam0, 237, iParam1);
		if (Global_76434[0].f_7 > 0)
		{
			Global_76434[0].f_7 = round((to_float(Global_76434[0].f_7) * Global_291063.f_16));
		}
	}
	else
	{
		func_183(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_228(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[0]));
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 190;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[1]));
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 185;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[2]));
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 180;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[3]));
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 175;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[4]));
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 170;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[5]));
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 580;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[6]));
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 575;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[7]));
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 570;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[8]));
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 565;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[9]));
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 560;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[10]));
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 1100;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[11]));
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 1095;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[12]));
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 1090;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[13]));
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 1085;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[14]));
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 1080;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[15]));
			break;
		
		case 18:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 520;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[16]));
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 515;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[17]));
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 510;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[18]));
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 505;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[19]));
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 500;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[20]));
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 25:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 295;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[21]));
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 290;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[22]));
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 285;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[23]));
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 280;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[24]));
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 275;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[25]));
			break;
		
		case 31:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 950;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[26]));
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 945;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[27]));
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 940;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[28]));
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 935;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[29]));
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 930;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[30]));
			break;
		
		case 37:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 440;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[31]));
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 435;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[32]));
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 430;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[33]));
			break;
		
		case 41:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 425;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[34]));
			break;
		
		case 42:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 420;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[35]));
			break;
		
		case 43:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 44:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1150;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[36]));
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 1145;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[37]));
			break;
		
		case 47:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 1140;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[38]));
			break;
		
		case 48:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1135;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[39]));
			break;
		
		case 49:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1130;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[40]));
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 395;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[41]));
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 390;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[42]));
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 385;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[43]));
			break;
		
		case 53:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 380;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[44]));
			break;
		
		case 54:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 375;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[45]));
			break;
		
		case 55:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 56:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 57:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[46]));
			break;
		
		case 58:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 495;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[47]));
			break;
		
		case 59:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 490;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[48]));
			break;
		
		case 60:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 485;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[49]));
			break;
		
		case 61:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 480;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[50]));
			break;
		
		case 62:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 1050;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[51]));
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 1045;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[52]));
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 1040;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[53]));
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 1035;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[54]));
			break;
		
		case 67:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 1030;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[55]));
			break;
		
		case 68:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 69:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 550;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[56]));
			break;
		
		case 70:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 545;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[57]));
			break;
		
		case 71:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 540;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[58]));
			break;
		
		case 72:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 535;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[59]));
			break;
		
		case 73:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 530;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[60]));
			break;
		
		case 74:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 1200;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[61]));
			break;
		
		case 75:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1195;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[62]));
			break;
		
		case 76:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 1190;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[63]));
			break;
		
		case 77:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 1185;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[64]));
			break;
		
		case 78:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1180;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[65]));
			break;
		
		case 79:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 80:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 2000;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[66]));
			break;
		
		case 81:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 1995;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[67]));
			break;
		
		case 82:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 1990;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[68]));
			break;
		
		case 83:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 1985;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[69]));
			break;
		
		case 84:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 1980;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[70]));
			break;
		
		case 85:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 475;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[71]));
			break;
		
		case 86:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 470;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[72]));
			break;
		
		case 87:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 465;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[73]));
			break;
		
		case 88:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 460;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[74]));
			break;
		
		case 89:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 455;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[75]));
			break;
		
		case 90:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		default:
			Global_76434[0].f_5 = 3;
			func_192(iVar10, iParam0, 91, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_183(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_229()
{
	Global_76434[0].f_1 = -1;
	Global_76434[0].f_2 = -1;
	Global_76434[0].f_5 = -1;
	Global_76434[0].f_3 = -1;
	Global_76434[0].f_4 = -1;
	Global_76434[0].f_7 = 0;
	Global_76434[0].f_6 = 0;
	Global_76434[0].f_13 = -1;
	Global_76434[0].f_12 = 0;
	Global_76434[0] = 0;
	StringCopy(&(Global_76434[0].f_8), "NO_LABEL", 16);
}

int func_230(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar0 = 255;
		iVar1 = 255;
		iVar2 = 255;
	}
	uParam0->f_419 += 30;
	if (uParam0->f_419 > 255)
	{
		uParam0->f_419 = 255;
	}
	unk_0xD9ACBBA59FD5A09E(7);
	unk_0xC1032CAC14DE468A(0,5f, 0,5f, 3f, 3f, iVar0, iVar1, iVar2, uParam0->f_419, 0);
	if (uParam0->f_419 >= 255)
	{
		return 1;
	}
	return 0;
}

int func_231(int iParam0)
{
	if ((unk_0x83D8570832F172A7(*iParam0) && unk_0x83D8570832F172A7(iParam0->f_1)) && unk_0x83D8570832F172A7(iParam0->f_2))
	{
		return 1;
	}
	else
	{
		if (!unk_0x83D8570832F172A7(*iParam0))
		{
		}
		if (!unk_0x83D8570832F172A7(iParam0->f_1))
		{
		}
		if (!unk_0x83D8570832F172A7(iParam0->f_2))
		{
		}
	}
	return 0;
}

void func_232(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			sVar0 = "MP_CELEBRATION_BG";
			sVar1 = "MP_CELEBRATION_FG";
			sVar2 = "MP_CELEBRATION";
			break;
		
		case 1:
			sVar0 = "HEIST_CELEBRATION_BG";
			sVar1 = "HEIST_CELEBRATION_FG";
			sVar2 = "HEIST_CELEBRATION";
			break;
		
		case 2:
			sVar0 = "HEIST2_CELEBRATION_BG";
			sVar1 = "HEIST2_CELEBRATION_FG";
			sVar2 = "HEIST2_CELEBRATION";
			break;
	}
	if (*iParam0 == 0)
	{
		*iParam0 = unk_0xB01F55A0FD1CFD49(sVar0);
	}
	if (iParam0->f_1 == 0)
	{
		iParam0->f_1 = unk_0xB01F55A0FD1CFD49(sVar1);
	}
	if (iParam0->f_2 == 0)
	{
		iParam0->f_2 = unk_0xB01F55A0FD1CFD49(sVar2);
	}
	if (Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_120 != unk_0xB3260A60545D3F11())
	{
		Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_120 = unk_0xB3260A60545D3F11();
	}
}

void func_233(var uParam0)
{
	if (uParam0->f_1205)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x54EABC0DD106045B())
		{
			iVar1 = iVar0;
			if (func_24(iVar1, 0, 1))
			{
				unk_0xA550CB601D5066B5(iVar1, 0);
			}
			iVar0++;
		}
	}
}

void func_234(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, var uParam7, var uParam8)
{
	if (unk_0xBA301E03A078FA59() || unk_0xA3F916BCE430ED26())
	{
		return;
	}
	if (unk_0x991B1F0980C62628())
	{
		return;
	}
	if (iParam5 == iParam5)
	{
		iParam5 = iParam5;
	}
	if (*uParam6 == 0)
	{
		return;
	}
	switch (*uParam1)
	{
		case 0:
			if (*uParam2 == -1)
			{
				iVar0 = 0;
				while (iVar0 < *uParam3)
				{
					if (iVar0 <= 7)
					{
						if (unk_0xC844350D5D58C99A((*uParam3)[iVar0]))
						{
							if (!unk_0x437347B10A200C4B((*uParam3)[iVar0], 0))
							{
								iVar1++;
							}
						}
					}
					iVar0++;
				}
				if (iVar1 > 0)
				{
					*uParam2 = iVar1;
				}
			}
			else
			{
				bVar18 = true;
				iVar0 = 0;
				while (iVar0 < *uParam2)
				{
					if (iVar0 <= 7)
					{
						StringCopy(&cVar2, "PLAYER_NAME_0", 64);
						StringIntConCat(&cVar2, iVar0 + 1, 64);
						(*uParam7)[iVar0] = unk_0xB01F55A0FD1CFD49(&cVar2);
						if (!unk_0x83D8570832F172A7((*uParam7)[iVar0]))
						{
							bVar18 = false;
						}
					}
					iVar0++;
				}
				if (bVar18)
				{
					*uParam1++;
				}
			}
			break;
		
		case 1:
			iVar0 = 0;
			while (iVar0 < *uParam2)
			{
				unk_0x7E60C62A7CE58FC8((*uParam7)[iVar0], "SET_PLAYER_NAME");
				func_140(uParam4[iVar0]);
				unk_0x7E60D21B163E9D56();
				iVar0++;
			}
			*uParam1++;
			break;
		
		case 2:
			if (unk_0xB9132A06AE472728(2, 204) || unk_0x9A01369A10646AFE(2, 204))
			{
				if (*uParam8)
				{
					*uParam8 = 0;
				}
				else
				{
					*uParam8 = 1;
				}
				unk_0x4D7F4CC43D4D0DE3(-1, "TOGGLE_ON", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			}
			if (*uParam8)
			{
				iVar0 = 0;
				while (iVar0 < *uParam2)
				{
					if (iVar0 <= 7)
					{
						if (unk_0xC844350D5D58C99A((*uParam3)[iVar0]))
						{
							if (!unk_0x437347B10A200C4B((*uParam3)[iVar0], 0))
							{
								if (unk_0xBA301E03A078FA59() || unk_0xA3F916BCE430ED26())
								{
									vVar22 = { unk_0x64430C979F516F7A((*uParam3)[iVar0], 24818, 0f, 0f, 0f) };
									func_241(uParam3[iVar0], &vVar22, iVar0);
									vVar19 = { func_239(vVar22, unk_0xF1EE614CA05DDE75()) };
									unk_0x5655C0F8DE67F0E6((*uParam7)[iVar0], vVar22, vVar19, 0,75f, 0,5f, 0,375f, 0,75f, 0,5f, 0,375f, 2);
								}
								else
								{
									vVar25 = { func_238(uParam3[iVar0], iVar0) };
									vVar22 = { unk_0x64430C979F516F7A((*uParam3)[iVar0], 24818, 0f, 0f, 0f) };
									vVar31 = { unk_0x68E4ADDDDCD7BDDE((*uParam3)[iVar0], vVar25) - unk_0x68F4C0EC296D3901((*uParam3)[iVar0], 1) };
									vVar34 = { vVar22 + vVar31 };
									vVar19 = { func_239(vVar22, unk_0xF1EE614CA05DDE75()) };
									vVar28 = { func_237(iVar0) };
									unk_0x5655C0F8DE67F0E6((*uParam7)[iVar0], vVar34, vVar19, vVar28, vVar28, 2);
									func_235(uParam0, iVar0);
								}
							}
						}
					}
					iVar0++;
				}
			}
			break;
	}
}

void func_235(var uParam0, int iParam1)
{
	if (iParam1 > -1 && iParam1 < 16)
	{
		if (uParam0->f_401[iParam1] > -1 && uParam0->f_401[iParam1] < 32)
		{
			iVar0 = unk_0x117658E336116132(uParam0->f_401[iParam1]);
			if (func_24(iVar0, 0, 1))
			{
				Var1 = { func_92(iVar0) };
				if (unk_0xD01DD90A3EAEC725(&Var1))
				{
					if (unk_0x8086012EEEB2D3DF(&Var1))
					{
						iVar14 = 2;
					}
					else
					{
						iVar14 = 3;
					}
				}
				else if (unk_0x74684D5E87B13DBD(&Var1))
				{
					iVar14 = 1;
				}
				else
				{
					iVar14 = 0;
				}
				if (uParam0->f_1178[iParam1] != iVar14)
				{
					switch (iVar14)
					{
						case 0:
							func_236(uParam0, 1, iParam1);
							break;
						
						case 1:
							func_236(uParam0, 4, iParam1);
							break;
						
						case 2:
							func_236(uParam0, 3, iParam1);
							break;
						
						case 3:
							func_236(uParam0, 2, iParam1);
							break;
					}
					uParam0->f_1178[iParam1] = iVar14;
				}
			}
		}
	}
}

void func_236(var uParam0, int iParam1, int iParam2)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_3[iParam2], "SET_SPEAKER_STATE");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x7E60D21B163E9D56();
}

Vector3 func_237(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0,9f, 0,6f, 2f;
		
		case 1:
			return 1,2f, 0,7f, 2f;
		
		case 2:
			return 1,3f, 0,7f, 2f;
		
		case 3:
			return 1,2f, 0,7f, 2f;
		
		case 4:
			return 1,3f, 0,8f, 2f;
		
		case 5:
			return 1,4f, 0,8f, 2f;
		
		case 6:
			return 1,6f, 0,8f, 2f;
		
		case 7:
			return 1,7f, 0,9f, 2f;
		
		default:
	}
	return 1,4f, 0,8f, 2f;
}

Vector3 func_238(var uParam0, int iParam1)
{
	fVar0 = 0f;
	fVar1 = 0,5f;
	if (iParam1 == 5)
	{
		if (func_806(*uParam0))
		{
			fVar2 = 0,1f;
		}
		else
		{
			fVar2 = 0,05f;
		}
	}
	else if (func_806(*uParam0))
	{
		fVar2 = 0,1f;
	}
	else
	{
		fVar2 = 0,05f;
	}
	return fVar0, fVar1, fVar2;
}

Vector3 func_239(struct<2> Param0, var uParam2, vector3 vParam3)
{
	if (func_240(vParam3))
	{
		return 0f, 0f, 0f;
	}
	vVar0.z = (180f - unk_0xE7D606C557C86100((vParam3.x - Param0), (vParam3.y - Param0.f_1)));
	vVar0.x = 0f;
	vVar0.y = 0f;
	return vVar0;
}

int func_240(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_241(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 == 5)
	{
		if (func_806(*uParam0))
		{
			uParam1->f_2 = (uParam1->f_2 + 0,15f);
		}
		else
		{
			uParam1->f_2 = (uParam1->f_2 + 0,1f);
		}
	}
	else if (func_806(*uParam0))
	{
		uParam1->f_2 = (uParam1->f_2 + 0,15f);
	}
	else
	{
		uParam1->f_2 = (uParam1->f_2 + 0,1f);
	}
	if (!unk_0xBA301E03A078FA59() && !unk_0xA3F916BCE430ED26())
	{
		uParam1->f_1 = (uParam1->f_1 - 0,5f);
	}
}

void func_242(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!unk_0xBA301E03A078FA59() && !unk_0xA3F916BCE430ED26())
	{
		return;
	}
	vVar0 = { unk_0x9382F04ED9CDA21A(2) };
	if (unk_0x755FF954DAE327E1(vVar0.x) >= 45f)
	{
		return;
	}
	if (!(iParam2 > 2 && iParam2 < 5))
	{
		return;
	}
	if (iParam3 == 0)
	{
		return;
	}
	fVar7 = -1f;
	fVar8 = -1f;
	iVar3 = 0;
	while (iVar3 < 8)
	{
		func_249(&vVar27, 3);
		vVar27.x = 1;
		switch (iVar3)
		{
			case 0:
				vVar27.y = 0,55f;
				vVar27.z = 0,55f;
				break;
			
			case 1:
				vVar27.y = 0,475f;
				vVar27.z = 0,475f;
				break;
			
			case 2:
				vVar27.y = 0,475f;
				vVar27.z = 0,475f;
				break;
			
			case 3:
				vVar27.y = 0,4f;
				vVar27.z = 0,4f;
				break;
			
			case 4:
				vVar27.y = 0,4f;
				vVar27.z = 0,4f;
				break;
			
			case 5:
				vVar27.y = 0,475f;
				vVar27.z = 0,475f;
				break;
			
			case 6:
				vVar27.y = 0,4f;
				vVar27.z = 0,4f;
				break;
			
			case 7:
				vVar27.y = 0,4f;
				vVar27.z = 0,4f;
				break;
		}
		cVar9 = { *uParam1[iVar3] };
		if (unk_0xC844350D5D58C99A((*uParam0)[iVar3]))
		{
			if (!unk_0x437347B10A200C4B((*uParam0)[iVar3], 0))
			{
				vVar4 = { unk_0x64430C979F516F7A((*uParam0)[iVar3], 24818, 0f, 0f, 0f) };
				if (iVar3 == 5)
				{
					if (func_806((*uParam0)[iVar3]))
					{
						vVar4.z = (vVar4.z + 0,25f);
					}
					else
					{
						vVar4.z = (vVar4.z + 0,22f);
					}
				}
				else if (func_806((*uParam0)[iVar3]))
				{
					vVar4.z = (vVar4.z + 0,25f);
				}
				else
				{
					vVar4.z = (vVar4.z + 0,22f);
				}
				unk_0x362FD95670BFA2A6(vVar4, &fVar7, &fVar8);
				if (fVar7 != -1f && fVar8 != -1f)
				{
					Var25 = fVar7;
					Var25.f_1 = fVar8;
				}
				func_243(&Var25, &vVar27, &cVar9, "", 1, 0);
			}
		}
		iVar3++;
	}
}

void func_243(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	if (!func_114(sParam2))
	{
		if (func_247())
		{
			func_246(uParam1, 0);
			unk_0xEEF67251E263A87F(iParam5);
			if (func_114(sParam3))
			{
				sVar0 = "STRING";
			}
			else
			{
				sVar0 = sParam3;
			}
			unk_0x070005E852D4C0E9(sVar0);
			unk_0x3A820E495A7BA3E5(iParam4);
			unk_0xD06AC7C87A34A6AD(sParam2);
			unk_0xE0026608C37C7C41(func_245(*uParam0), func_244(uParam0->f_1), 0);
		}
	}
}

float func_244(float fParam0)
{
	return (fParam0 + fLocal_13);
}

float func_245(float fParam0)
{
	return (fParam0 + fLocal_12);
}

void func_246(var uParam0, bool bParam1)
{
	unk_0x7BBAC160090910C3(*uParam0);
	if (!uParam0->f_8 == 0f || !uParam0->f_9 == 0f)
	{
		unk_0xF1F881BAAAFB43B1(uParam0->f_8, uParam0->f_9);
	}
	unk_0xD3539A877EC25E86(uParam0->f_1, uParam0->f_2);
	unk_0x7178F32F6742C936(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);
	switch (uParam0->f_7)
	{
		case 0:
			break;
		
		case 1:
			unk_0x5C3AC46FC4D891D1();
			unk_0xC8CFC125861F0537();
			break;
		
		case 3:
			unk_0xC8CFC125861F0537();
			break;
		
		case 2:
			unk_0x5C3AC46FC4D891D1();
			break;
	}
	if (bParam1)
	{
		unk_0xD9ACBBA59FD5A09E(4);
	}
}

int func_247()
{
	if (func_248())
	{
		return 1;
	}
	if (unk_0x757EF87A33649210())
	{
		return 0;
	}
	if (unk_0xD0BB2359EC70FC37() || unk_0x7BCE0E6DD4A1F749())
	{
		return 0;
	}
	if (unk_0x06980BB66EBA4D95())
	{
		return 0;
	}
	return 1;
}

bool func_248()
{
	return Global_1312440;
}

void func_249(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,332f;
	uParam0->f_2 = (((0,5f + 0,004f) - 0,01f) - 0,11f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 19;
}

void func_250()
{
	unk_0x7C8F595F56164501(1);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_24(iVar0, 0, 1))
		{
			unk_0xA550CB601D5066B5(iVar0, 1);
		}
		iVar0++;
	}
}

void func_251(bool bParam0)
{
	if (func_261() || func_260())
	{
		return;
	}
	unk_0x5024DE80A08E9E70(19);
	func_259();
	func_258(0);
	func_257();
	unk_0xB8E3919889462ACD();
	unk_0xD1B833B834838C01();
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (!(unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && unk_0x137240CA2BADB0D2(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), func_256(unk_0x16F2683693E537C9(), 0))))
		{
			unk_0x4C81063C30E87DDB();
			func_254();
			unk_0xDC355804A9511111();
		}
		unk_0x38C3A68D7861DCFD(0, 25, 1);
	}
	func_252();
	bVar0 = false;
	bVar0 = func_797("HQRHELP");
	if (!bVar0)
	{
		unk_0xE19C2AAC820D8ED5();
	}
	unk_0x3FC8DBCC154CA56B();
	unk_0x5024DE80A08E9E70(19);
	unk_0x3584F71E5CA29322(2);
	unk_0x3584F71E5CA29322(1);
	unk_0x3584F71E5CA29322(3);
	unk_0x3584F71E5CA29322(4);
	unk_0x3584F71E5CA29322(13);
	if (!bParam0)
	{
		unk_0x3584F71E5CA29322(15);
	}
	unk_0x3584F71E5CA29322(11);
	unk_0x3584F71E5CA29322(12);
	unk_0x3584F71E5CA29322(18);
}

void func_252()
{
	unk_0xC2127C0F64D6A3B9();
	func_253();
}

void func_253()
{
	Global_22211.f_134 = 1;
}

void func_254()
{
	if (!func_255(unk_0xD803B885F5E47A62(), 0, 0))
	{
		unk_0xD1B833B834838C01();
		unk_0x4C81063C30E87DDB();
	}
}

int func_255(int iParam0, bool bParam1, int iParam2)
{
	if (Global_2425662[iParam0].f_222 == 99)
	{
		if ((iParam2 && Global_2425662[iParam0].f_225 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2425662[iParam0].f_222 == 13)
		{
			return 0;
		}
	}
	return 1;
}

int func_256(int iParam0, int iParam1)
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

void func_257()
{
	unk_0x5D96D8530B3D0904(&Global_7357, 4);
}

void func_258(int iParam0)
{
	if (func_131())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_129(0))
		{
			func_127(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_259()
{
	unk_0x5D96D8530B3D0904(&Global_7357, 7);
}

bool func_260()
{
	return Global_1590535[unk_0xD803B885F5E47A62()] == 148;
}

bool func_261()
{
	return Global_1590535[unk_0xD803B885F5E47A62()] == 5;
}

void func_262(int iParam0)
{
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_263()].f_6174.f_4111[iVar0] == iParam0)
		{
			if (Global_1312570.f_1[iVar0] == -1)
			{
				Global_1312570.f_1[iVar0] = iParam0;
				Global_1312570 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_263()
{
	iVar0 = 0;
	return iVar0;
}

void func_264(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, int iParam14, int iParam15, int iParam16)
{
	if (func_260())
	{
		return;
	}
	func_411(1);
	func_265(iParam0, uParam1, 0, 0, iParam2, iParam5, iParam6, iParam7, iParam8, iParam9, iParam3, iParam4, iParam10, iParam11, iParam12, bParam13, iParam14, iParam15, iParam16);
}

void func_265(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, var uParam16, int iParam17, int iParam18)
{
	if (iParam17 == 0)
	{
	}
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	switch (iParam0)
	{
		case 6:
		case 8:
		case 1:
		case 3:
		case 0:
		case 2:
			MemCopy(&cVar0, {Global_4456448.f_194991}, 8);
			MemCopy(&Var8, {Global_4456448.f_195277}, 8);
			break;
		
		case 32:
		case 25:
		case 19:
		case 31:
			StringCopy(&cVar0, "ROCKSTAR_AMBIANT", 32);
			func_410(&Var8, iParam0, iParam4);
			break;
		
		case 11:
		case 13:
		case 12:
		case 15:
		case 14:
		case 122:
		case 5:
		case 148:
			StringCopy(&cVar0, "ROCKSTAR_MINIGAME", 32);
			func_409(&Var8, iParam0, iParam4);
			break;
	}
	iVar16 = 0;
	iVar17 = 0;
	if (iParam0 == 1)
	{
		iVar16 = Global_1388109.f_1;
	}
	else if (iParam0 == 2)
	{
		if (func_408())
		{
			iParam0 += 100;
		}
		iVar17 = Global_4194305.f_34;
		if (func_1075(unk_0xD803B885F5E47A62(), 0) || func_407(unk_0xD803B885F5E47A62()))
		{
			iParam11 = 0;
		}
		if (iParam11 < 0)
		{
			iParam11 = 32;
		}
	}
	else if (iParam0 == 0)
	{
		if (func_408())
		{
			iParam0 += 100;
		}
	}
	else if (iParam0 == 3)
	{
		if (!func_406())
		{
			iParam0 += 100;
		}
	}
	if (bParam3)
	{
		if (func_405() && func_404())
		{
			return;
		}
		Global_968149 = unk_0x2B6E0A53779D29EA();
		func_403();
		Global_1575090 = 0;
		if (iParam0 == 0)
		{
			Global_1575104 = 1;
		}
		Global_968141 = { Var8 };
		unk_0xA0FF199CD77EA0E6(1603298962, &(Global_1618568[unk_0xD803B885F5E47A62()]));
		unk_0x0E15CFC8CFAEA7E0(591312727, Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_16);
		unk_0xA0FF199CD77EA0E6(-1404245366, &Global_968141);
		unk_0x0E15CFC8CFAEA7E0(2034665250, unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()));
		if (func_400())
		{
			iParam0 = 222;
		}
		else if (func_397())
		{
			iParam0 = 228;
		}
		else if (func_396(unk_0xD803B885F5E47A62()))
		{
			iParam0 = 7;
		}
		else if (func_395(unk_0xD803B885F5E47A62()))
		{
			iParam0 = 4;
		}
		else if (func_394(unk_0xD803B885F5E47A62()))
		{
			iParam0 = 165;
		}
		if ((iParam0 == 5 || iParam0 == 6) || iParam0 == 148)
		{
			iVar18 = 17;
		}
		else if (func_393() != -1)
		{
			iVar18 = func_393();
		}
		Var19 = iParam0;
		Var19.f_1 = iParam2;
		Var19.f_2 = uParam1;
		Var19.f_3 = Global_1575101;
		Var19.f_4 = Global_1575102;
		Var19.f_5 = uParam16;
		Var19.f_6 = iVar18;
		unk_0xA70412EE7945A31B(&cVar0, &Var8, &Var19);
		func_392();
		if (!func_390(unk_0xD803B885F5E47A62()))
		{
			Global_2451426.f_3469.f_2 = iParam2;
			Global_2451426.f_3469.f_3 = uParam1;
			if (Global_2451426.f_3469 == 0 || Global_2451426.f_3469.f_1 == 0)
			{
				Global_2451426.f_3469 = iParam2;
				Global_2451426.f_3469.f_1 = uParam1;
			}
		}
		else if (Global_2451426.f_3469 == 0 || Global_2451426.f_3469.f_1 == 0)
		{
			Global_2451426.f_3469 = iParam2;
			Global_2451426.f_3469.f_1 = uParam1;
		}
		Global_968394.f_1 = func_389();
		if (Global_1575097)
		{
			iVar26 = Global_1575093;
			if (Global_4456448 == 2)
			{
				if (func_388(unk_0xD803B885F5E47A62(), 0) || func_341())
				{
					Global_1575093 = (Global_1575093 - Global_262145.f_2343);
				}
				else
				{
					bVar27 = true;
					iVar26 = (iVar26 - Global_262145.f_2343);
				}
			}
			if ((((Global_1575093 > 0 && !func_1077()) && !func_1075(unk_0xD803B885F5E47A62(), 0)) && !func_338()) && unk_0x7A7BDE279347E517(Global_1575093, 0, 0, 1, -1, 0))
			{
				if (!bVar27)
				{
					if (Global_1575093 > 0)
					{
						if (func_337())
						{
							func_326(1940862352, Global_1575093, &iVar28, 0, 1, 0);
							Global_4263954[iVar28].f_14.f_26 = { Var8 };
						}
						else
						{
							unk_0xA63FA0129D34AA99(Global_1575093, &Var8, false, true);
						}
					}
				}
				else
				{
					if (iVar26 > 0)
					{
						if (func_337())
						{
							func_326(1940862352, iVar26, &iVar28, 0, 1, 0);
							Global_4263954[iVar28].f_14.f_26 = { Var8 };
						}
					}
					if (func_337())
					{
						func_326(-1389227906, Global_262145.f_2343, &iVar28, 0, 1, 0);
						Global_4263954[iVar28].f_14.f_26 = { Var8 };
					}
					else
					{
						unk_0xA63FA0129D34AA99(Global_1575093, &Var8, false, true);
					}
				}
			}
			Global_1575097 = 0;
		}
		func_325();
	}
	else
	{
		if (func_324() == 1)
		{
			uVar29 = Global_4254512.f_915;
		}
		else
		{
			uVar29 = func_323();
		}
		StringCopy(&Global_968141, "", 32);
		Var30 = { func_146(unk_0xD803B885F5E47A62()) };
		if (Var30 < 0)
		{
			Var30 = 0;
		}
		iParam12 = iParam12;
		if (func_320(0))
		{
			bVar65 = true;
		}
		else if (!func_390(unk_0xD803B885F5E47A62()))
		{
			Global_1575096++;
			func_747(1912, Global_1575096, -1, 1, 0);
		}
		if (func_400())
		{
			iParam0 = 222;
		}
		else if (func_397())
		{
			iParam0 = 228;
		}
		else if (func_396(unk_0xD803B885F5E47A62()))
		{
			iParam0 = 7;
		}
		else if (func_395(unk_0xD803B885F5E47A62()))
		{
			iParam0 = 4;
		}
		else if (func_394(unk_0xD803B885F5E47A62()))
		{
			iParam0 = 165;
		}
		Var66 = Global_1575090;
		Var66.f_1 = Global_1575091;
		Var66.f_2 = Global_1575088;
		Var66.f_9 = iParam18;
		Var66.f_3 = (func_319(unk_0xD803B885F5E47A62()) + unk_0x3A6D64D2A1228113());
		if ((iParam0 == 5 || iParam0 == 6) || iParam0 == 148)
		{
			Var66.f_4 = 17;
		}
		else if (func_393() != -1)
		{
			Var66.f_4 = func_393();
		}
		if (Global_1575105 >= 0)
		{
			Var66.f_39 = Global_1575105;
		}
		if (Global_1575106 >= 0)
		{
			Var66.f_38 = Global_1575106;
		}
		if ((((func_405() && !func_318()) && !bParam15) && Global_2450632.f_569.f_9 != 0) && !func_316(0))
		{
			Global_2450632.f_569.f_15 = 1;
			Var113 = Global_1627020[unk_0xD803B885F5E47A62()].f_3;
			Var113.f_1 = Global_2450632.f_569.f_10;
			Var113.f_2 = Global_1575090;
			Var113.f_3 = Global_1575091;
			Var113.f_4 = Global_1575088;
			Var113.f_5 = (func_319(unk_0xD803B885F5E47A62()) + unk_0x3A6D64D2A1228113());
			Var113.f_6 = Var66.f_4;
			if (func_390(unk_0xD803B885F5E47A62()))
			{
				Var113.f_21 = Global_2451426.f_3469;
				Var113.f_22 = Global_2451426.f_3469.f_1 + 1;
			}
			else
			{
				Var113.f_7 = Global_2451426.f_3469;
				Var113.f_8 = Global_2451426.f_3469.f_1;
			}
			Var113.f_9 = (func_124(unk_0xD803B885F5E47A62()) - Global_1575089);
			Var113.f_10 = iParam5;
			Var113.f_11 = iParam6;
			Var113.f_12 = iParam7;
			Var113.f_13 = iParam11;
			Var113.f_14 = Var30;
			Var113.f_15 = Global_1575092;
			Var113.f_16 = iParam9;
			Var113.f_17 = iParam10;
			Var113.f_18 = (func_389() - Global_968394.f_1);
			if (func_315() || func_390(unk_0xD803B885F5E47A62()))
			{
				Var113.f_19 = unk_0x12AB0310C2281427(&(Global_959568.f_42));
			}
			Var113.f_20 = bVar65;
			if (Global_1575105 >= 0)
			{
				Var113.f_23 = Global_1575105;
			}
			else if (Global_1575105 == -2)
			{
				Var113.f_23 = 998;
			}
			else
			{
				Var113.f_23 = 999;
			}
			if (Global_1575106 >= 0)
			{
				Var113.f_24 = Global_1575106;
			}
			else if (Global_1575106 == -2)
			{
				Var113.f_24 = 998;
			}
			else
			{
				Var113.f_24 = 999;
			}
			StringCopy(&Var138, "", 24);
			if (func_315() || func_390(unk_0xD803B885F5E47A62()))
			{
				Var138 = { Global_959568.f_42 };
			}
			unk_0xA3003D57FF41DB57(&cVar0, &Var8, &Var113, &Var138);
			return;
		}
		if (!unk_0xA14BB9332558B949())
		{
			Global_1575099 = unk_0xFEA335E95DB497BE();
		}
		Var66.f_7 = iVar16;
		Var66.f_8 = bVar65;
		Var66.f_11 = (func_124(unk_0xD803B885F5E47A62()) - Global_1575089);
		Var66.f_12 = iParam8;
		Var66.f_13 = iParam5;
		Var66.f_14 = iParam6;
		Var66.f_15 = iParam7;
		Var66.f_16 = iParam11;
		Var66.f_17 = Var30;
		Var66.f_18 = iParam13;
		Var66.f_19 = Global_1575092;
		Var66.f_20 = iParam14;
		Var66.f_21 = iParam9;
		Var66.f_22 = iParam0;
		Var66.f_23 = Global_4456448.f_75705;
		if (func_338())
		{
			if (Var66.f_23 == 6)
			{
				Var66.f_23 = 14;
			}
			else if (Var66.f_23 == 7)
			{
				Var66.f_23 = 15;
			}
		}
		else if (func_314(Global_4456448.f_194990))
		{
			if (Var66.f_23 == 6)
			{
				Var66.f_23 = 16;
			}
			else if (Var66.f_23 == 7)
			{
				Var66.f_23 = 17;
			}
		}
		Var66.f_24 = iVar17;
		Var66.f_25 = iParam10;
		Var66.f_34 = Global_1575098;
		Var66.f_26 = (func_389() - Global_968394.f_1);
		Var66.f_29 = func_1038(1300, -1, 0);
		if (func_390(unk_0xD803B885F5E47A62()))
		{
			Var66.f_40 = Global_2451426.f_3469;
			Var66.f_41 = Global_2451426.f_3469.f_1 + 1;
		}
		else
		{
			Var66.f_5 = Global_2451426.f_3469;
			Var66.f_6 = Global_2451426.f_3469.f_1;
		}
		Var66.f_36 = Global_1575099;
		Var66.f_37 = uParam16;
		Var66.f_30 = uVar29;
		if (func_313() || func_312())
		{
			Var66.f_35 = 1;
		}
		if (iParam0 == 2)
		{
			Var66.f_27 = Global_4194305.f_8;
			Var66.f_10 = Global_4194340.f_31;
			if (((func_307(0) && Global_1575103 != -1) && !func_315()) && !func_390(unk_0xD803B885F5E47A62()))
			{
				Var66.f_31 = Global_1575103;
			}
			Global_1575103 = -1;
			Var66.f_42 = Global_1388245[func_306()].f_20;
			Var66.f_43 = Global_1388245[func_306()].f_21;
			Var66.f_44 = Global_1388245[func_306()].f_22;
			Var66.f_45 = Global_1388245[func_306()].f_23;
			Var66.f_46 = Global_1388245[func_306()].f_24;
		}
		if (func_315() || func_390(unk_0xD803B885F5E47A62()))
		{
			Var66.f_28 = unk_0x12AB0310C2281427(&(Global_959568.f_42));
			if (func_305() || func_304())
			{
				Var66.f_32 = 1;
			}
			else if (func_303() || func_302())
			{
				Var66.f_33 = 1;
			}
		}
		if (func_315() || func_390(unk_0xD803B885F5E47A62()))
		{
			Var144 = { Global_959568.f_42 };
		}
		unk_0xA0FF199CD77EA0E6(1603298962, "");
		unk_0x0E15CFC8CFAEA7E0(591312727, 0);
		unk_0xA0FF199CD77EA0E6(-1404245366, "");
		unk_0x0E15CFC8CFAEA7E0(2034665250, 0);
		if (!func_301())
		{
			if ((func_300() || func_318()) || bParam15)
			{
				Var150 = Global_2450632.f_569.f_9;
				Var150.f_1 = Global_2450632.f_569.f_10;
				Global_2450632.f_569.f_15 = 0;
				Var150.f_2 = Global_1575090;
				Var150.f_3 = Global_1575091;
				Var150.f_4 = Global_1575088;
				Var150.f_5 = (func_319(unk_0xD803B885F5E47A62()) + unk_0x3A6D64D2A1228113());
				Var150.f_6 = Var66.f_4;
				if (func_390(unk_0xD803B885F5E47A62()))
				{
					Var150.f_29 = Global_2451426.f_3469;
					Var150.f_30 = Global_2451426.f_3469.f_1 + 1;
				}
				else
				{
					Var150.f_7 = Global_2451426.f_3469;
					Var150.f_8 = Global_2451426.f_3469.f_1;
				}
				Var150.f_9 = (func_124(unk_0xD803B885F5E47A62()) - Global_1575089);
				Var150.f_10 = iParam8;
				Var150.f_11 = iParam5;
				Var150.f_12 = iParam6;
				Var150.f_13 = iParam7;
				Var150.f_14 = iParam11;
				Var150.f_15 = Var30;
				Var150.f_16 = Global_1575092;
				Var150.f_17 = iParam9;
				Var150.f_18 = iParam10;
				Var150.f_19 = (func_389() - Global_968394.f_1);
				if (func_315() || func_390(unk_0xD803B885F5E47A62()))
				{
					Var150.f_20 = unk_0x12AB0310C2281427(&(Global_959568.f_42));
					Var150.f_23 = (func_305() || func_304());
					Var150.f_24 = (func_303() || func_302());
				}
				Var150.f_21 = func_1038(1300, -1, 0);
				Var150.f_22 = uVar29;
				Var150.f_25 = Global_1575098;
				Var150.f_26 = (func_313() || func_312());
				Var150.f_27 = Global_1575099;
				Var150.f_28 = bVar65;
				if (Global_1575105 >= 0)
				{
					Var150.f_31 = Global_1575105;
				}
				else if (Global_1575105 == -2)
				{
					Var150.f_31 = 998;
				}
				else
				{
					Var150.f_31 = 999;
				}
				if (Global_1575106 >= 0)
				{
					Var150.f_32 = Global_1575106;
				}
				else if (Global_1575106 == -2)
				{
					Var150.f_32 = 998;
				}
				else
				{
					Var150.f_32 = 999;
				}
				StringCopy(&Var183, "", 24);
				if (func_315() || func_390(unk_0xD803B885F5E47A62()))
				{
					Var183 = { Global_959568.f_42 };
				}
				unk_0xD4B59A40969B63C5(&cVar0, &Var8, &Var150, &Var183);
				func_299();
				Global_1575104 = 0;
				return;
			}
		}
		if (func_298(unk_0xD803B885F5E47A62()) || func_297(unk_0xD803B885F5E47A62()))
		{
			Global_786435.f_3 = Var66.f_13;
			Global_786435.f_4 = Var66.f_14;
			Global_786435.f_6 = Global_1575090;
			Global_786435.f_7 = Global_1575088;
			Global_786435.f_8 = (func_319(unk_0xD803B885F5E47A62()) + unk_0x3A6D64D2A1228113());
			Global_786435.f_9 = Var66.f_4;
			Global_786435.f_10 = (func_124(unk_0xD803B885F5E47A62()) - Global_1575089);
			Global_786435.f_11 = iParam7;
			Global_786435.f_12 = iParam11;
			Global_786435.f_13 = Var30;
			Global_786435.f_14 = iParam9;
			Global_786435.f_15 = iParam10;
			Global_786435.f_16 = (func_389() - Global_968394.f_1);
			Global_786435.f_17 = func_1038(1300, -1, 0);
			Global_786435.f_18 = uVar29;
			Global_786435.f_19 = Global_1575099;
			Global_786435.f_20 = bVar65;
			Global_786435.f_28 = uParam16;
			Global_786435.f_43 = Global_786547;
			Global_786435.f_44 = Global_786547.f_1;
			Global_786435.f_23 = Global_786547.f_2;
			if (func_289(96, 0, 0))
			{
				Global_786435.f_22 = 1;
			}
			else
			{
				Global_786435.f_22 = 0;
			}
			unk_0x0F52AD3BDEEF2FCA(&cVar0, &Var8, &Global_786435, &Var144);
			func_299();
			Global_1575104 = 0;
			return;
		}
		if (func_121())
		{
			Global_786481.f_3 = Var66.f_13;
			Global_786481.f_4 = Var66.f_14;
			Global_786481.f_6 = Global_1575090;
			Global_786481.f_7 = Global_1575088;
			Global_786481.f_8 = (func_319(unk_0xD803B885F5E47A62()) + unk_0x3A6D64D2A1228113());
			Global_786481.f_9 = Var66.f_4;
			Global_786481.f_10 = (func_124(unk_0xD803B885F5E47A62()) - Global_1575089);
			Global_786481.f_11 = iParam7;
			Global_786481.f_12 = iParam11;
			Global_786481.f_13 = Var30;
			Global_786481.f_14 = iParam9;
			Global_786481.f_15 = iParam10;
			Global_786481.f_19 = Global_1575099;
			Global_786481.f_20 = bVar65;
			Global_786481.f_28 = uParam16;
			Global_786481.f_43 = Global_786547;
			Global_786481.f_44 = Global_786547.f_1;
			Global_786481.f_23 = func_288();
			unk_0xB9ADC7D502CFFC09(&cVar0, &Var8, &Var144, &Global_786481);
			func_299();
			Global_1575104 = 0;
			return;
		}
		if (func_301())
		{
			Global_2450632.f_569.f_15 = 0;
			Global_1674764 = iParam2;
			Global_1674764.f_4 = func_287(bVar65);
			Global_1674764.f_5 = (func_124(unk_0xD803B885F5E47A62()) - Global_1575089);
			Global_1674764.f_6 = iParam5;
			Global_1674764.f_7 = iParam6;
			Global_1674764.f_8 = iParam7;
			Global_1674764.f_9 = func_286(unk_0xD803B885F5E47A62());
			Global_1674764.f_10 = iParam13;
			Global_1674764.f_11 = iParam17;
			Global_1674764.f_13 = iParam10;
			Global_1674764.f_15 = func_1038(7846, -1, 0);
			Global_1674764.f_19 = iParam0;
			Global_1674764.f_20 = Global_4456448.f_194990;
			if (func_275())
			{
				Global_1674764.f_24 = 1;
			}
			else
			{
				Global_1674764.f_24 = 0;
			}
			Global_1674764.f_25 = iParam9;
			Global_1674764.f_40 = Global_1388217;
			Global_1674764.f_41 = Global_1388218;
			Global_1674764.f_42 = Global_1388219;
			Global_1674764.f_43 = Global_1388220;
			Global_1388217 = -2;
			Global_1388218 = -2;
			Global_1388219 = -2;
			Global_1388220 = -2;
			Global_1674764.f_3 = func_393();
			Global_1674764.f_26 = func_429(func_388(unk_0xD803B885F5E47A62(), 0), 1, 0);
			func_299();
			Global_1575104 = 0;
			unk_0x4A45404AC4253CFB(&Global_1674764);
			func_325();
			return;
		}
		if (func_274(Global_4456448.f_194990))
		{
			Global_2450632.f_569.f_15 = 0;
			Global_1674840.f_17 = bVar65;
			Global_1674840.f_20 = (func_124(unk_0xD803B885F5E47A62()) - Global_1575089);
			Global_1674840.f_3 = iParam5;
			Global_1674840.f_4 = iParam6;
			Global_1674840.f_21 = iParam7;
			Global_1674840.f_22 = func_286(unk_0xD803B885F5E47A62());
			Global_1674840.f_24 = iParam10;
			if (iParam10 == 0)
			{
				Global_1674840.f_13 = 0;
			}
			Global_1674840.f_16 = Global_1575099;
			Global_1674840.f_5 = Global_1575090;
			Global_1674840.f_6 = Global_1575088;
			Global_1674840.f_7 = (func_319(unk_0xD803B885F5E47A62()) + unk_0x3A6D64D2A1228113());
			Global_1674840.f_8 = Var66.f_4;
			Global_1674840.f_9 = uParam16;
			Global_1674840.f_10 = unk_0x6C3F127AAF415E69();
			Global_1674840.f_38 = func_273(unk_0xD803B885F5E47A62());
			Global_1674840.f_39 = func_272(unk_0xD803B885F5E47A62());
			Global_1674840.f_40 = func_270(unk_0xD803B885F5E47A62());
			Global_1674840.f_17 = bVar65;
			Global_1674840.f_27 = Global_786547.f_1;
			Global_1674840.f_16 = Global_1575099;
			Global_1674840.f_23 = Var30;
			Global_1674840.f_25 = (func_389() - Global_968394.f_1);
			Global_1674840.f_26 = unk_0xD1C89E02700AE9F0();
			Global_1674840.f_28 = 0;
			Global_1674840.f_29 = 0;
			if (Global_1312837 == 8 || func_269())
			{
				Global_1674840.f_30 = 1;
			}
			else
			{
				Global_1674840.f_30 = 0;
			}
			Global_1674840.f_31 = func_269();
			Global_1674840.f_41 = 0;
			func_299();
			Global_1575104 = 0;
			unk_0x1454FE0646354225(&Global_1674840, &Var8);
			func_268();
			return;
		}
		if (func_267(Global_4456448.f_194990))
		{
			Global_2450632.f_569.f_15 = 0;
			Global_1674920 = Global_786547.f_1;
			Global_1674920.f_1 = Global_4456448.f_194990;
			Global_1674920.f_10 = iParam2;
			Global_1674920.f_18 = (func_266(unk_0xD803B885F5E47A62(), 1) - Global_1575089);
			unk_0x7B2DACEEF8835848(&Global_1674920);
			func_299();
			Global_1575104 = 0;
		}
		Global_2450632.f_569.f_15 = 0;
		unk_0x3ED4FA15C2332312(&cVar0, &Var8, &Var66, &Var144);
		func_299();
		Global_1575104 = 0;
	}
}

int func_266(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_124(iParam0);
}

int func_267(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_262145.f_5798[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_268()
{
	Global_1674809 = { Var0 };
}

int func_269()
{
	switch (Global_1312837)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 11:
			return 1;
		
		default:
	}
	return 0;
}

int func_270(int iParam0)
{
	if (iParam0 != func_271())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_369.f_2, 6);
	}
	return 0;
}

int func_271()
{
	return -1;
}

int func_272(int iParam0)
{
	if (iParam0 != func_271())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_369.f_2, 7);
	}
	return 0;
}

int func_273(int iParam0)
{
	if (iParam0 != func_271())
	{
		return Global_1590535[iParam0].f_274.f_369 != 0;
	}
	return 0;
}

int func_274(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_5025[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_275()
{
	if (func_285(Global_4456448.f_232883))
	{
		return 1;
	}
	else if (func_284(Global_4456448.f_232883))
	{
		return 1;
	}
	else if (func_283(Global_4456448.f_232883))
	{
		return 1;
	}
	else if (func_282(Global_4456448.f_232883))
	{
		return 1;
	}
	else if (func_281(Global_4456448.f_232883))
	{
		return 1;
	}
	else if (func_280())
	{
		return 0;
	}
	else if (func_279())
	{
		return 0;
	}
	else if (func_278(Global_4456448.f_232883))
	{
		if (Global_1388109 == 1)
		{
			return 1;
		}
	}
	else if (func_277(Global_4456448.f_232883))
	{
		if (Global_1388109 == 1)
		{
			return 1;
		}
	}
	if (func_276())
	{
		if (Global_1388109 == 1 || Global_1388109 == 4)
		{
			return 1;
		}
	}
	return 0;
}

bool func_276()
{
	return Global_4456448 == 1;
}

bool func_277(int iParam0)
{
	return iParam0 == 83;
}

bool func_278(int iParam0)
{
	return iParam0 == 81;
}

bool func_279()
{
	if (Global_4456448.f_75705 == 22 || Global_4456448.f_75705 == 23)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_32, 9);
}

bool func_280()
{
	if (Global_4456448.f_75705 == 20 || Global_4456448.f_75705 == 21)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_30, 3);
}

bool func_281(int iParam0)
{
	return iParam0 == 72;
}

bool func_282(int iParam0)
{
	return iParam0 == 76;
}

bool func_283(int iParam0)
{
	return iParam0 == 74;
}

bool func_284(int iParam0)
{
	return iParam0 == 78;
}

bool func_285(int iParam0)
{
	return iParam0 == 77;
}

var func_286(int iParam0)
{
	return Global_1590535[iParam0].f_211.f_6;
}

int func_287(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_288()
{
	if (((Global_4456448.f_194990 == Global_262145.f_5008[0] || Global_4456448.f_194990 == Global_262145.f_5008[1]) || Global_4456448.f_194990 == Global_262145.f_5008[2]) || Global_4456448.f_194990 == Global_262145.f_5008[3])
	{
		return Global_262145.f_5008[3];
	}
	else if ((((Global_4456448.f_194990 == Global_262145.f_5008[4] || Global_4456448.f_194990 == Global_262145.f_5008[5]) || Global_4456448.f_194990 == Global_262145.f_5008[6]) || Global_4456448.f_194990 == Global_262145.f_5008[7]) || Global_4456448.f_194990 == Global_262145.f_5008[8])
	{
		return Global_262145.f_5008[8];
	}
	else if ((((((Global_4456448.f_194990 == Global_262145.f_5008[9] || Global_4456448.f_194990 == Global_262145.f_5008[10]) || Global_4456448.f_194990 == Global_262145.f_5008[11]) || Global_4456448.f_194990 == Global_262145.f_5008[12]) || Global_4456448.f_194990 == Global_262145.f_5008[13]) || Global_4456448.f_194990 == Global_262145.f_5008[14]) || Global_4456448.f_194990 == Global_262145.f_5008[15])
	{
		return Global_262145.f_5008[14];
	}
	return 0;
}

bool func_289(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_262145.f_7686 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_292(unk_0xD803B885F5E47A62(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4718 == 1)
		{
			return 1;
		}
	}
	if (func_291() || func_290())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_406())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1574637[iVar1], iVar0);
}

bool func_290()
{
	return Global_1312865;
}

bool func_291()
{
	return Global_1312867;
}

bool func_292(int iParam0, int iParam1)
{
	if (!func_295())
	{
		return 0;
	}
	if (func_294())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_293(iParam1);
	iVar1 = uVar0;
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_730, iVar1);
}

int func_293(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		case 157:
			return 32;
		
		default:
	}
	return 1;
}

bool func_294()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_146, 3);
}

int func_295()
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_291())
	{
		return 1;
	}
	if (func_290())
	{
		return 1;
	}
	return func_296(120, -1);
}

int func_296(int iParam0, int iParam1)
{
	uVar0 = Global_2583656[iParam0][func_100(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_297(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 7;
}

bool func_298(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 2;
}

void func_299()
{
	Global_968397 = -1;
}

bool func_300()
{
	return Global_2450632.f_569.f_9 > 0;
}

int func_301()
{
	if (func_74() && unk_0xA14BB9332558B949())
	{
		return 1;
	}
	return 0;
}

bool func_302()
{
	return unk_0xEAE0D21A50E6C7F4(Global_959568.f_8, 3);
}

bool func_303()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2451426.f_1.f_2809, 6);
}

bool func_304()
{
	return unk_0xEAE0D21A50E6C7F4(Global_959568.f_8, 5);
}

bool func_305()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2451426.f_1.f_2809, 8);
}

int func_306()
{
	return unk_0xD803B885F5E47A62();
}

var func_307(int iParam0)
{
	return (func_310() || func_308(iParam0));
}

int func_308(var uParam0)
{
	return func_309(Global_4456448.f_194990, uParam0);
}

int func_309(int iParam0, var uParam1)
{
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 14)
		{
			if (((Global_262145.f_6446[iVar1] == 202 || Global_262145.f_6446[iVar1] == 203) || Global_262145.f_6446[iVar1] == 204) || (uParam1 && ((((((((Global_262145.f_6446[iVar1] == 224 || Global_262145.f_6446[iVar1] == 223) || Global_262145.f_6446[iVar1] == 232) || Global_262145.f_6446[iVar1] == 245) || Global_262145.f_6446[iVar1] == 246) || Global_262145.f_6446[iVar1] == 251) || Global_262145.f_6446[iVar1] == 252) || Global_262145.f_6446[iVar1] == 253) || Global_262145.f_6446[iVar1] == 161)))
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_5922[iVar1])
				{
					if (iParam0 == Global_262145.f_5032[iVar1][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_310()
{
	return func_311(Global_4456448.f_194990);
}

int func_311(int iParam0)
{
	if (iParam0 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (iParam0 == Global_262145.f_4766[iVar0])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_312()
{
	return (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_11, 19) && unk_0xA14BB9332558B949());
}

bool func_313()
{
	return (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_11, 18) && unk_0xA14BB9332558B949());
}

int func_314(int iParam0)
{
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 14)
		{
			if (Global_262145.f_6446[iVar1] == 232)
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_5922[iVar1])
				{
					if (iParam0 == Global_262145.f_5032[iVar1][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

bool func_315()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2451426.f_1.f_2809, 5);
}

bool func_316(bool bParam0)
{
	if (bParam0)
	{
		return (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_226020, 12) && func_317());
	}
	return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_226020, 12);
}

int func_317()
{
	if (Global_4456448.f_197286 == 1 || Global_4456448.f_197286 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_318()
{
	return Global_2450632.f_569.f_12;
}

int func_319(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0xD803B885F5E47A62())
		{
			return unk_0x62F8C2EDB26F57B3(-1);
		}
		else if (func_99(iParam0))
		{
			return Global_1590535[iParam0].f_211.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_320(bool bParam0)
{
	if (func_322())
	{
		if (bParam0)
		{
			if (!Global_1574405 && !func_321(unk_0xD803B885F5E47A62(), 2))
			{
				unk_0x82A772610883F395("MinigameTransitionIn", 0, 1);
				func_717(0, 0);
			}
		}
		return 1;
	}
	return 0;
}

bool func_321(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_208, iParam1);
}

bool func_322()
{
	return Global_2439138.f_2;
}

int func_323()
{
	return func_1038(1298, -1, 0);
}

int func_324()
{
	return func_1038(1217, -1, 0);
}

void func_325()
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Global_1674764 = { Var0 };
}

void func_326(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_337())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27584)
			{
				func_327(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_327(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
			if (iParam1 > 0 || Global_262145.f_27584)
			{
				func_327(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
			func_327(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_327(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bVar0 = false;
	if (!func_337())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_101()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263954[iVar2].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x98212517C34835B2(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x80C74F9931DCF063(iVar4))
		{
			*uParam0 = func_334(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263954[*uParam0].f_66.f_8 = 1;
					Global_4263954[*uParam0].f_66.f_12 = 1;
				}
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264535 = 1;
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_333(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_328(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_328(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62()].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_329(iParam0);
	}
}

void func_329(int iParam0)
{
	bVar0 = false;
	if (!func_337())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_332(iParam0))
		{
			if (!bVar0)
			{
				unk_0x7B4DDB71AD8E7B73();
			}
		}
		else if (!bVar0)
		{
			unk_0xA6EF5385F39BAC90(Global_4263954[iParam0].f_66);
		}
		func_330(&(Global_4263954[iParam0]));
	}
}

void func_330(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_331(&(uParam0->f_14));
	func_331(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_331(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_332(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_5 == 1;
	}
	return 0;
}

void func_333(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_334(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0].f_66.f_2 == 0)
		{
			if (!func_337())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263954[iVar0].f_66.f_2 = 1;
			Global_4263954[iVar0].f_66.f_1 = iParam5;
			Global_4263954[iVar0].f_66.f_3 = iParam1;
			Global_4263954[iVar0].f_66.f_4 = iParam2;
			Global_4263954[iVar0].f_66.f_7 = iParam3;
			Global_4263954[iVar0].f_66.f_5 = 0;
			Global_4263954[iVar0].f_66 = iParam0;
			Global_4263954[iVar0].f_66.f_6 = iParam4;
			Global_4263954[iVar0].f_66.f_11 = uParam8;
			Global_4263954[iVar0].f_66.f_10 = iParam7;
			Global_4263954[iVar0].f_66.f_13 = iParam9;
			Global_4263954[iVar0].f_66.f_12 = 0;
			Global_4263954[iVar0].f_66.f_14 = unk_0xF4CCC8CB6DE7F1AE();
			Global_4263954[iVar0].f_66.f_18 = 0;
			Global_4264521 = 0;
			if (bParam6)
			{
				Global_4263954[iVar0].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_335(Global_4263954[iVar0], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_335(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	if (iParam85 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = 285918879;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.f_2 = { Param0.f_66 };
	vVar0.f_2.f_33 = iParam85;
	iVar36 = func_8(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_336();
		unk_0xFB061A86A7AC749F(1, &vVar0, 36, iVar36);
	}
}

void func_336()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

int func_337()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

bool func_338()
{
	return (unk_0xA14BB9332558B949() && func_339());
}

int func_339()
{
	return func_340(Global_4456448.f_194990);
}

int func_340(int iParam0)
{
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 14)
		{
			if (Global_262145.f_6446[iVar1] == 2)
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_5922[iVar1])
				{
					if (iParam0 == Global_262145.f_5032[iVar1][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_341()
{
	if (func_387(Global_4456448.f_75705) || func_386(Global_4456448.f_75705))
	{
		if (func_385())
		{
			return func_342(func_348(func_384(Global_1388197), 0));
		}
	}
	return 0;
}

int func_342(int iParam0)
{
	if (func_337())
	{
		if (iParam0 == func_348(245, 0) && func_1038(3168, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == func_348(323, 0) && func_1038(5393, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == func_348(324, 0) && func_345(9461, -1, -1))
		{
			return 1;
		}
		if (iParam0 == func_348(357, 0) && func_1038(6156, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == func_348(402, 0) && func_1038(7207, -1, 0) != 0)
		{
			return 1;
		}
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			iVar1 = -1;
			switch (iVar0)
			{
				case 0:
					iVar1 = 450;
					break;
				
				case 1:
					iVar1 = 451;
					break;
				
				case 2:
					iVar1 = 452;
					break;
				
				case 3:
					iVar1 = 453;
					break;
				
				case 4:
					iVar1 = 454;
					break;
				
				case 5:
					iVar1 = 455;
					break;
				
				case 6:
					iVar1 = 456;
					break;
				
				case 7:
					iVar1 = 457;
					break;
			}
			if (iParam0 == func_348(iVar1, 0) && func_343(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	if (iParam0 != -1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_2097152[func_263()].f_5500.f_1[(iParam0 / 32)], (iParam0 % 32)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_343(int iParam0)
{
	return func_345(func_344(iParam0), -1, -1);
}

int func_344(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 24963;
			break;
		
		case 9:
			return 24964;
			break;
		
		case 10:
			return 24966;
			break;
		
		case 11:
			return 24965;
			break;
		
		case 12:
			return 24968;
			break;
		
		case 13:
			return 25101;
			break;
		
		case 14:
			return 24967;
			break;
		
		case 15:
			return 25105;
			break;
		
		case 16:
			return 25106;
			break;
		
		case 20:
			return 25102;
			break;
		
		case 21:
			return 25103;
			break;
		
		case 22:
			return 25104;
			break;
		
		case 102:
			return 24969;
			break;
		
		case 17:
			return 25107;
			break;
		
		case 18:
			return 25108;
			break;
		
		case 19:
			return 25109;
			break;
		
		case 103:
			return 24972;
			break;
		
		case 104:
			return 24973;
			break;
		
		case 105:
			return 24974;
			break;
		
		case 106:
			return 24975;
			break;
		
		case 107:
			return 24976;
			break;
		
		case 108:
			return 24978;
			break;
		
		case 109:
			return 24980;
			break;
		
		case 110:
			return 24981;
			break;
		
		case 111:
			return 24982;
			break;
		
		case 112:
			return 24983;
			break;
		
		case 113:
			return 24984;
			break;
		
		case 114:
			return 24985;
			break;
		
		case 115:
			return 24986;
			break;
		
		case 116:
			return 24987;
			break;
		
		case 117:
			return 24988;
			break;
		
		case 118:
			return 24989;
			break;
		
		case 119:
			return 24990;
			break;
		
		case 120:
			return 24991;
			break;
		
		case 0:
			return 24992;
			break;
		
		case 1:
			return 24993;
			break;
		
		case 2:
			return 24994;
			break;
		
		case 3:
			return 24995;
			break;
		
		case 4:
			return 24996;
			break;
		
		case 5:
			return 24997;
			break;
		
		case 6:
			return 24998;
			break;
		
		case 7:
			return 24999;
			break;
		
		case 127:
			return 25117;
			break;
		
		case 128:
			return 25118;
			break;
		
		case 23:
			return 25119;
			break;
		
		case 139:
			return 25125;
			break;
		
		case 140:
			return 25127;
			break;
		
		case 141:
			return 25128;
			break;
		
		case 27:
			return 25129;
			break;
		
		case 160:
			return 25136;
			break;
		
		case 161:
			return 25139;
			break;
		
		case 162:
			return 25140;
			break;
		
		case 31:
			return 25141;
			break;
		
		case 181:
			return 25148;
			break;
		
		case 182:
			return 25151;
			break;
		
		case 183:
			return 25152;
			break;
		
		case 35:
			return 25153;
			break;
		
		case 193:
			return 25160;
			break;
		
		case 194:
			return 25161;
			break;
		
		case 39:
			return 25162;
			break;
		
		case 206:
			return 25168;
			break;
		
		case 207:
			return 25169;
			break;
		
		case 208:
			return 25170;
			break;
		
		case 209:
			return 25173;
			break;
		
		case 210:
			return 25174;
			break;
		
		case 43:
			return 25175;
			break;
		
		case 234:
			return 25179;
			break;
		
		case 235:
			return 25183;
			break;
		
		case 236:
			return 25184;
			break;
		
		case 47:
			return 25185;
			break;
		
		case 248:
			return 25188;
			break;
		
		case 249:
			return 25191;
			break;
		
		case 250:
			return 25192;
			break;
		
		case 51:
			return 25193;
			break;
		
		case 259:
			return 25198;
			break;
		
		case 260:
			return 25202;
			break;
		
		case 261:
			return 25203;
			break;
		
		case 55:
			return 25204;
			break;
		
		case 274:
			return 25209;
			break;
		
		case 275:
			return 25212;
			break;
		
		case 276:
			return 25213;
			break;
		
		case 59:
			return 25214;
			break;
		
		case 284:
			return 25217;
			break;
		
		case 285:
			return 25221;
			break;
		
		case 286:
			return 25222;
			break;
		
		case 63:
			return 25223;
			break;
		
		case 307:
			return 25228;
			break;
		
		case 308:
			return 24979;
			break;
		
		case 309:
			return 25229;
			break;
		
		case 310:
			return 25111;
			break;
		
		case 67:
			return 25230;
			break;
		
		case 68:
			return 25112;
			break;
		
		case 72:
			return 25231;
			break;
		
		case 73:
			return 25233;
			break;
		
		case 74:
			return 25234;
			break;
		
		case 75:
			return 25235;
			break;
		
		case 76:
			return 25236;
			break;
		
		case 77:
			return 25394;
			break;
		
		case 121:
			return 25395;
			break;
		
		case 122:
			return 25396;
			break;
		
		case 123:
			return 25397;
			break;
		
		case 124:
			return 25398;
			break;
		
		case 125:
			return 25399;
			break;
		
		case 126:
			return 25400;
			break;
	}
	switch (iParam0)
	{
		case 78:
			return 25244;
			break;
		
		case 79:
			return 25245;
			break;
		
		case 80:
			return 25246;
			break;
		
		case 81:
			return 25247;
			break;
		
		case 82:
			return 25248;
			break;
		
		case 83:
			return 25249;
			break;
		
		case 84:
			return 25250;
			break;
		
		case 85:
			return 25000;
			break;
		
		case 86:
			return 25251;
			break;
		
		case 87:
			return 25252;
			break;
		
		case 88:
			return 25253;
			break;
		
		case 89:
			return 25254;
			break;
		
		case 90:
			return 25255;
			break;
		
		case 91:
			return 25256;
			break;
		
		case 92:
			return 25257;
			break;
		
		case 93:
			return 25258;
			break;
		
		case 94:
			return 25259;
			break;
		
		case 95:
			return 25260;
			break;
		
		case 96:
			return 25261;
			break;
		
		case 97:
			return 25262;
			break;
		
		case 98:
			return 25263;
			break;
		
		case 99:
			return 25264;
			break;
		
		case 100:
			return 25225;
			break;
		
		case 101:
			return 25178;
			break;
		
		case 311:
			return 25265;
			break;
		
		case 312:
			return 25266;
			break;
		
		case 313:
			return 25267;
			break;
		
		case 314:
			return 25268;
			break;
		
		case 315:
			return 24977;
			break;
		
		case 316:
			return 25269;
			break;
		
		case 317:
			return 25270;
			break;
		
		case 318:
			return 25271;
			break;
		
		case 319:
			return 25272;
			break;
		
		case 320:
			return 25273;
			break;
		
		case 321:
			return 25274;
			break;
		
		case 322:
			return 25275;
			break;
		
		case 323:
			return 25276;
			break;
		
		case 324:
			return 25277;
			break;
		
		case 325:
			return 25278;
			break;
		
		case 326:
			return 25279;
			break;
		
		case 327:
			return 25280;
			break;
		
		case 328:
			return 25281;
			break;
		
		case 329:
			return 25282;
			break;
		
		case 330:
			return 25283;
			break;
		
		case 331:
			return 25284;
			break;
		
		case 332:
			return 25285;
			break;
		
		case 333:
			return 25286;
			break;
		
		case 334:
			return 25287;
			break;
		
		case 335:
			return 25288;
			break;
		
		case 336:
			return 25289;
			break;
		
		case 337:
			return 25290;
			break;
		
		case 338:
			return 25291;
			break;
		
		case 339:
			return 25292;
			break;
		
		case 340:
			return 25293;
			break;
		
		case 341:
			return 25294;
			break;
		
		case 342:
			return 25295;
			break;
		
		case 343:
			return 25296;
			break;
		
		case 344:
			return 25297;
			break;
		
		case 345:
			return 25298;
			break;
		
		case 346:
			return 25299;
			break;
		
		case 347:
			return 25300;
			break;
		
		case 348:
			return 25301;
			break;
		
		case 349:
			return 25302;
			break;
		
		case 350:
			return 25303;
			break;
		
		case 351:
			return 25304;
			break;
		
		case 352:
			return 25305;
			break;
		
		case 353:
			return 25306;
			break;
		
		case 354:
			return 25307;
			break;
		
		case 355:
			return 25308;
			break;
		
		case 356:
			return 25309;
			break;
		
		case 357:
			return 25310;
			break;
		
		case 358:
			return 25311;
			break;
		
		case 359:
			return 25312;
			break;
		
		case 360:
			return 25313;
			break;
		
		case 361:
			return 25314;
			break;
		
		case 362:
			return 25315;
			break;
		
		case 363:
			return 25316;
			break;
		
		case 364:
			return 25317;
			break;
		
		case 365:
			return 25318;
			break;
		
		case 366:
			return 25319;
			break;
		
		case 367:
			return 25320;
			break;
		
		case 368:
			return 25321;
			break;
		
		case 369:
			return 25322;
			break;
		
		case 370:
			return 25323;
			break;
		
		case 371:
			return 25324;
			break;
		
		case 372:
			return 25325;
			break;
		
		case 373:
			return 25326;
			break;
		
		case 374:
			return 25327;
			break;
		
		case 375:
			return 25328;
			break;
		
		case 376:
			return 25329;
			break;
		
		case 377:
			return 25330;
			break;
		
		case 378:
			return 25331;
			break;
		
		case 379:
			return 25332;
			break;
		
		case 380:
			return 25333;
			break;
		
		case 381:
			return 25334;
			break;
		
		case 382:
			return 25335;
			break;
		
		case 383:
			return 25336;
			break;
		
		case 384:
			return 25337;
			break;
		
		case 385:
			return 25338;
			break;
		
		case 386:
			return 25339;
			break;
		
		case 387:
			return 25340;
			break;
		
		case 388:
			return 25341;
			break;
		
		case 389:
			return 25342;
			break;
		
		case 390:
			return 25343;
			break;
		
		case 391:
			return 25344;
			break;
		
		case 392:
			return 25345;
			break;
		
		case 393:
			return 25346;
			break;
		
		case 394:
			return 25347;
			break;
		
		case 395:
			return 24970;
			break;
		
		case 396:
			return 25348;
			break;
		
		case 397:
			return 25349;
			break;
		
		case 398:
			return 25350;
			break;
		
		case 399:
			return 25351;
			break;
		
		case 400:
			return 25352;
			break;
		
		case 401:
			return 25353;
			break;
		
		case 402:
			return 25354;
			break;
		
		case 403:
			return 25355;
			break;
		
		case 404:
			return 25356;
			break;
		
		case 405:
			return 25357;
			break;
		
		case 406:
			return 25358;
			break;
		
		case 407:
			return 25359;
			break;
		
		case 408:
			return 25360;
			break;
		
		case 409:
			return 25361;
			break;
		
		case 410:
			return 25362;
			break;
		
		case 411:
			return 25363;
			break;
		
		case 412:
			return 25364;
			break;
		
		case 413:
			return 25365;
			break;
		
		case 414:
			return 25366;
			break;
		
		case 415:
			return 25367;
			break;
		
		case 416:
			return 25368;
			break;
		
		case 417:
			return 25369;
			break;
		
		case 418:
			return 25370;
			break;
		
		case 419:
			return 25371;
			break;
		
		case 420:
			return 25373;
			break;
		
		case 421:
			return 25374;
			break;
		
		case 422:
			return 25375;
			break;
		
		case 423:
			return 25377;
			break;
		
		case 424:
			return 25378;
			break;
		
		case 425:
			return 25379;
			break;
		
		case 426:
			return 25382;
			break;
		
		case 427:
			return 25383;
			break;
		
		case 428:
			return 25386;
			break;
		
		case 429:
			return 25390;
			break;
		
		case 430:
			return 25391;
			break;
		
		case 431:
			return 25392;
			break;
		
		case 432:
			return 25393;
			break;
	}
	switch (iParam0)
	{
		case 24:
			return 24971;
			break;
		
		case 25:
			return 25113;
			break;
		
		case 26:
			return 25114;
			break;
		
		case 28:
			return 25115;
			break;
		
		case 29:
			return 25116;
			break;
		
		case 30:
			return 25120;
			break;
		
		case 32:
			return 25121;
			break;
		
		case 33:
			return 25122;
			break;
		
		case 34:
			return 25123;
			break;
		
		case 36:
			return 25124;
			break;
		
		case 37:
			return 25126;
			break;
		
		case 38:
			return 25130;
			break;
		
		case 40:
			return 25131;
			break;
		
		case 41:
			return 25132;
			break;
		
		case 42:
			return 25133;
			break;
		
		case 44:
			return 25134;
			break;
		
		case 45:
			return 25137;
			break;
		
		case 46:
			return 25138;
			break;
		
		case 48:
			return 25142;
			break;
		
		case 49:
			return 25143;
			break;
		
		case 50:
			return 25144;
			break;
		
		case 52:
			return 25145;
			break;
		
		case 53:
			return 25146;
			break;
		
		case 54:
			return 25147;
			break;
		
		case 56:
			return 25149;
			break;
		
		case 57:
			return 25150;
			break;
		
		case 58:
			return 25154;
			break;
		
		case 60:
			return 25155;
			break;
		
		case 61:
			return 25156;
			break;
		
		case 62:
			return 25157;
			break;
		
		case 64:
			return 25158;
			break;
		
		case 65:
			return 25159;
			break;
		
		case 66:
			return 25163;
			break;
		
		case 69:
			return 25164;
			break;
		
		case 70:
			return 25165;
			break;
		
		case 71:
			return 25166;
			break;
		
		case 129:
			return 25167;
			break;
		
		case 130:
			return 25171;
			break;
		
		case 131:
			return 25172;
			break;
		
		case 132:
			return 25176;
			break;
		
		case 133:
			return 25177;
			break;
		
		case 134:
			return 25181;
			break;
		
		case 135:
			return 25182;
			break;
		
		case 136:
			return 25186;
			break;
		
		case 137:
			return 25187;
			break;
		
		case 138:
			return 25189;
			break;
		
		case 142:
			return 25190;
			break;
		
		case 143:
			return 25194;
			break;
		
		case 144:
			return 25195;
			break;
		
		case 145:
			return 25196;
			break;
		
		case 146:
			return 25197;
			break;
		
		case 147:
			return 25199;
			break;
		
		case 148:
			return 25200;
			break;
		
		case 149:
			return 25201;
			break;
		
		case 150:
			return 25205;
			break;
		
		case 151:
			return 25206;
			break;
		
		case 152:
			return 25207;
			break;
		
		case 153:
			return 25208;
			break;
		
		case 154:
			return 25210;
			break;
		
		case 155:
			return 25211;
			break;
		
		case 156:
			return 25215;
			break;
		
		case 157:
			return 25216;
			break;
		
		case 158:
			return 25218;
			break;
		
		case 159:
			return 25219;
			break;
		
		case 163:
			return 25220;
			break;
		
		case 164:
			return 25224;
			break;
		
		case 165:
			return 25226;
			break;
		
		case 166:
			return 25227;
			break;
		
		case 167:
			return 25232;
			break;
		
		case 168:
			return 25372;
			break;
		
		case 169:
			return 25376;
			break;
		
		case 170:
			return 25380;
			break;
		
		case 171:
			return 25381;
			break;
		
		case 172:
			return 25384;
			break;
		
		case 173:
			return 25385;
			break;
		
		case 174:
			return 25387;
			break;
		
		case 175:
			return 25388;
			break;
		
		case 176:
			return 25389;
			break;
		
		case 177:
			return 25407;
			break;
		
		case 178:
			return 25408;
			break;
		
		case 179:
			return 25409;
			break;
		
		case 180:
			return 25410;
			break;
		
		case 184:
			return 25411;
			break;
		
		case 185:
			return 25412;
			break;
		
		case 186:
			return 25413;
			break;
		
		case 187:
			return 25414;
			break;
		
		case 188:
			return 25415;
			break;
		
		case 189:
			return 25416;
			break;
		
		case 190:
			return 25417;
			break;
		
		case 191:
			return 25418;
			break;
		
		case 192:
			return 25419;
			break;
		
		case 195:
			return 25420;
			break;
		
		case 196:
			return 25421;
			break;
		
		case 197:
			return 25422;
			break;
		
		case 198:
			return 25423;
			break;
		
		case 199:
			return 25424;
			break;
		
		case 200:
			return 25425;
			break;
		
		case 201:
			return 25426;
			break;
		
		case 202:
			return 25427;
			break;
		
		case 203:
			return 25428;
			break;
		
		case 204:
			return 25429;
			break;
		
		case 205:
			return 25430;
			break;
		
		case 211:
			return 25431;
			break;
		
		case 212:
			return 25432;
			break;
		
		case 213:
			return 25433;
			break;
		
		case 214:
			return 25434;
			break;
		
		case 215:
			return 25435;
			break;
		
		case 216:
			return 25436;
			break;
		
		case 217:
			return 25437;
			break;
		
		case 218:
			return 25438;
			break;
		
		case 219:
			return 25439;
			break;
		
		case 220:
			return 25440;
			break;
		
		case 221:
			return 25441;
			break;
		
		case 222:
			return 25442;
			break;
		
		case 223:
			return 25443;
			break;
		
		case 224:
			return 25444;
			break;
		
		case 225:
			return 25445;
			break;
		
		case 226:
			return 25446;
			break;
		
		case 227:
			return 25447;
			break;
		
		case 228:
			return 25448;
			break;
		
		case 229:
			return 25449;
			break;
		
		case 230:
			return 25450;
			break;
		
		case 231:
			return 25451;
			break;
		
		case 232:
			return 25452;
			break;
		
		case 233:
			return 25453;
			break;
		
		case 237:
			return 25454;
			break;
		
		case 238:
			return 25455;
			break;
		
		case 239:
			return 25456;
			break;
		
		case 240:
			return 25457;
			break;
		
		case 241:
			return 25458;
			break;
		
		case 242:
			return 25459;
			break;
		
		case 243:
			return 25460;
			break;
		
		case 244:
			return 25461;
			break;
		
		case 245:
			return 25462;
			break;
		
		case 246:
			return 25463;
			break;
		
		case 247:
			return 25464;
			break;
		
		case 251:
			return 25465;
			break;
		
		case 252:
			return 25466;
			break;
		
		case 253:
			return 25467;
			break;
		
		case 254:
			return 25468;
			break;
		
		case 255:
			return 25469;
			break;
		
		case 256:
			return 25470;
			break;
		
		case 257:
			return 25471;
			break;
		
		case 258:
			return 25472;
			break;
		
		case 262:
			return 25473;
			break;
		
		case 263:
			return 25474;
			break;
		
		case 264:
			return 25475;
			break;
		
		case 265:
			return 25476;
			break;
		
		case 266:
			return 25477;
			break;
		
		case 267:
			return 25478;
			break;
		
		case 268:
			return 25479;
			break;
		
		case 269:
			return 25480;
			break;
		
		case 270:
			return 25481;
			break;
		
		case 271:
			return 25482;
			break;
		
		case 272:
			return 25483;
			break;
		
		case 273:
			return 25484;
			break;
		
		case 277:
			return 25485;
			break;
		
		case 278:
			return 25486;
			break;
		
		case 279:
			return 25487;
			break;
		
		case 280:
			return 25488;
			break;
		
		case 281:
			return 25489;
			break;
		
		case 282:
			return 25490;
			break;
		
		case 283:
			return 25491;
			break;
		
		case 287:
			return 25492;
			break;
		
		case 288:
			return 25493;
			break;
		
		case 289:
			return 25494;
			break;
		
		case 290:
			return 25495;
			break;
		
		case 291:
			return 25496;
			break;
		
		case 292:
			return 25497;
			break;
		
		case 293:
			return 25498;
			break;
		
		case 294:
			return 25499;
			break;
		
		case 295:
			return 25500;
			break;
		
		case 296:
			return 25501;
			break;
		
		case 297:
			return 25502;
			break;
		
		case 298:
			return 25503;
			break;
		
		case 299:
			return 25504;
			break;
		
		case 300:
			return 25505;
			break;
		
		case 301:
			return 25506;
			break;
		
		case 302:
			return 25507;
			break;
		
		case 303:
			return 25508;
			break;
		
		case 304:
			return 25509;
			break;
		
		case 305:
			return 25510;
			break;
		
		case 306:
			return 25511;
			break;
	}
	return 0;
}

int func_345(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_101();
	}
	iVar1 = func_347(iParam0, iParam1);
	uVar2 = func_346(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_346(int iParam0)
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

int func_347(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_101();
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

int func_348(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	switch (iParam0)
	{
		case 17:
			return 0;
		
		case 9:
			return 1;
		
		case 10:
			return 2;
		
		case 11:
			return 3;
		
		case 12:
			return 4;
		
		case 13:
			return 5;
		
		case 14:
			return 6;
		
		case 15:
			return 7;
		
		case 16:
			return 8;
		
		case 19:
			return 9;
		
		case 22:
			return 10;
		
		case 23:
			return 11;
		
		case 24:
			return 12;
		
		case 25:
			return 13;
		
		case 27:
			return 14;
		
		case 28:
			return 15;
		
		case 29:
			return 16;
		
		case 30:
			return 17;
		
		case 31:
			return 18;
		
		case 20:
			return 19;
		
		case 32:
			return 20;
		
		case 21:
			return 21;
		
		case 78:
			return 22;
		
		case 79:
			return 23;
		
		case 80:
			return 24;
		
		case 18:
			return 25;
		
		case 81:
			return 26;
		
		case 82:
			return 27;
		
		case 83:
			return 28;
		
		case 84:
			return 29;
		
		case 85:
			return 30;
		
		case 86:
			return 31;
		
		case 87:
			return 32;
		
		case 88:
			return 33;
		
		case 102:
			return 34;
		
		case 113:
			return 35;
		
		case 160:
			return 36;
		
		case 163:
			return 37;
		
		case 162:
			return 38;
		
		case 164:
			if (func_349(iParam0, 11, iParam1))
			{
				return 40;
			}
			return 39;
		
		case 199:
			return 41;
		
		case 201:
			return 42;
		
		case 200:
			switch (iParam1)
			{
				case 1:
					return 43;
				
				case 2:
					return 44;
				
				case 3:
					return 45;
				
				case 4:
					return 46;
				
				case 5:
					return 47;
				
				case 6:
					return 48;
				
				case 7:
					return 49;
				
				case 8:
					return 50;
				
				case 9:
					return 51;
				
				case 10:
					return 52;
				
				case 11:
					return 53;
				
				case 12:
					return 54;
				
				case 13:
					return 55;
				
				case 14:
					return 56;
				
				case 15:
					return 57;
				
				case 16:
					return 58;
				
				case 17:
					return 59;
				
				case 18:
					return 60;
				
				case 19:
					return 61;
				
				case 20:
					return 62;
				
				case 21:
					return 63;
				
				case 22:
					return 64;
				
				case 23:
					return 65;
				
				case 24:
					return 66;
				
				case 25:
					return 67;
				
				default:
			}
			return 43;
		
		case 171:
			return 68;
		
		case 187:
			return 69;
		
		case 177:
			return 70;
		
		case 183:
			return 71;
		
		case 185:
			return 72;
		
		case 184:
			return 73;
		
		case 188:
			return 74;
		
		case 173:
			return 75;
		
		case 178:
			return 76;
		
		case 186:
			return 77;
		
		case 215:
			return 78;
		
		case 217:
			return 79;
		
		case 224:
			return 80;
		
		case 237:
			return 81;
		
		case 243:
			return 82;
		
		case 244:
			return 83;
		
		case 245:
			return 84;
		
		case 253:
			return 85;
		
		case 254:
			return 86;
		
		case 256:
			return 87;
		
		case 257:
			return 88;
		
		case 258:
			return 89;
		
		case 276:
			if (func_349(iParam0, 16, iParam1))
			{
				return 91;
			}
			return 90;
		
		case 323:
			return 92;
		
		case 324:
			return 93;
		
		case 337:
			return 94;
		
		case 357:
			return 95;
		
		case 402:
			return 96;
		
		case 413:
			switch (iParam1)
			{
				case 1:
					return 97;
				
				case 2:
					return 98;
				
				case 3:
					return 99;
				
				case 4:
					return 100;
				
				case 5:
					return 101;
				
				case 6:
					return 102;
				
				case 7:
					return 103;
				
				case 8:
					return 104;
				
				default:
			}
			return 97;
		
		case 414:
			switch (iParam1)
			{
				case 1:
					return 105;
				
				case 2:
					return 106;
				
				case 3:
					return 107;
				
				case 4:
					return 108;
				
				case 5:
					return 109;
				
				case 6:
					return 110;
				
				case 7:
					return 111;
				
				case 8:
					return 112;
				
				case 9:
					return 113;
				
				case 10:
					return 114;
				
				default:
			}
			return 105;
		
		case 450:
			return 115;
		
		case 451:
			return 116;
		
		case 452:
			return 117;
		
		case 453:
			return 118;
		
		case 454:
			return 119;
		
		case 455:
			return 120;
		
		case 456:
			return 121;
		
		case 457:
			return 122;
		
		case 480:
			return 123;
		
		case 482:
			return 124;
		
		case 483:
			return 125;
		
		default:
	}
	return -1;
}

int func_349(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_383(iParam0, -1);
	if (iParam0 == 164)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 276)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 95)
	{
		if (unk_0xC2F420D189FDB329())
		{
			return 1;
		}
		return 0;
	}
	else if ((iParam0 == 96 || iParam0 == 97) || iParam0 == 98)
	{
		if (func_382() && func_381())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 206 && unk_0x8CD06866876216F2()) || (iParam0 == 207 && unk_0x8CD06866876216F2())) || (iParam0 == 208 && unk_0x8CD06866876216F2())) || (iParam0 == 209 && unk_0x8CD06866876216F2()))
	{
		if (func_382())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 170 || iParam0 == 120) || iParam0 == 119) || iParam0 == 117) || iParam0 == 166)
	{
		return 1;
	}
	if (iParam0 == 221 || iParam0 == 135)
	{
		if (iParam1 == 26)
		{
			return 1;
		}
		return 0;
	}
	if (func_380(iParam0))
	{
		if (Global_75375)
		{
			return 1;
		}
		return 0;
	}
	iVar1 = func_379(iVar0);
	if (iVar1 != -1)
	{
		if (func_377(func_378(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	if (func_376(iParam0))
	{
		if (func_382())
		{
			if ((iParam0 == 205 && Global_262145.f_19751) || (iParam0 != 205 && Global_262145.f_19750))
			{
				return 1;
			}
			return 0;
		}
		return 0;
	}
	if (func_375(iParam0))
	{
		if (func_370(iParam0))
		{
			return 0;
		}
		return 1;
	}
	iVar2 = func_369(iVar0);
	if (iVar2 != -1)
	{
		if (func_367(func_368(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	iVar3 = func_366(iVar0);
	if (iVar3 > 0)
	{
		if (func_364(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar4 = func_363(iVar0);
	if (iVar4 != -1)
	{
		if (func_361(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar5 = func_360(iVar0);
	if (iVar5 != -1)
	{
		if (func_355(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar6 = func_354(iVar0);
	if (iVar6 != -1)
	{
		if (func_352(iVar0))
		{
			return 1;
		}
		return 0;
	}
	if ((iVar0 == 1938952078 || iVar0 == -1987130134) || iVar0 == 1747439474)
	{
		if (func_351(iVar0))
		{
			return 0;
		}
		return 1;
	}
	iVar7 = func_350(iVar0);
	if (iVar7 != -1)
	{
		if (func_351(iVar0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_350(int iParam0)
{
	switch (iParam0)
	{
		case 1938952078:
			return 0;
			break;
		
		case -907477130:
			return 1;
			break;
		
		case -1987130134:
			return 2;
			break;
		
		case 1747439474:
			return 3;
			break;
		
		case 1118611807:
			return 4;
			break;
		
		case 409049982:
			return 5;
			break;
		
		case -1756021720:
			return 6;
			break;
		
		case 2031587082:
			return 7;
			break;
		
		case 1693751655:
			return 8;
			break;
		
		case 987469656:
			return 9;
			break;
		
		case 872704284:
			return 10;
			break;
		
		case 408825843:
			return 11;
			break;
		
		case 740289177:
			return 12;
			break;
		
		case -834353991:
			return 13;
			break;
		
		case 301304410:
			return 14;
			break;
		
		case 960812448:
			return 15;
			break;
		
		case 1284356689:
			return 16;
			break;
		
		case -208911803:
			return 17;
			break;
		
		case 1104234922:
			return 18;
			break;
		
		case 722226637:
			return 19;
			break;
		
		case -1267543371:
			return 20;
			break;
		
		case 822018448:
			return 21;
			break;
		
		case -1523428744:
			return 22;
			break;
	}
	return -1;
}

int func_351(int iParam0)
{
	if (!Global_76622)
	{
		return 0;
	}
	iVar0 = func_1038(8833, -1, 0);
	switch (iParam0)
	{
		case 1938952078:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0) || Global_262145.f_27796)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -907477130:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 1) || Global_262145.f_27797)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -1987130134:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 2) || Global_262145.f_27798)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1747439474:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 3) || Global_262145.f_27799)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1118611807:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 4) || Global_262145.f_27800)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 409049982:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 5) || Global_262145.f_27801)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -1756021720:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 6) || Global_262145.f_27802)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2031587082:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 7) || Global_262145.f_27803)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1693751655:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 8) || Global_262145.f_27804)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 987469656:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 9) || Global_262145.f_27805)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 872704284:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 10) || Global_262145.f_27806)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 408825843:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 11) || Global_262145.f_27807)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 740289177:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 12) || Global_262145.f_27808)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -834353991:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 13) || Global_262145.f_27809)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 301304410:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 14) || Global_262145.f_27810)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 960812448:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 15) || Global_262145.f_27811)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1284356689:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 16) || Global_262145.f_27812)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -208911803:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 17) || Global_262145.f_27813)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1104234922:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 18) || Global_262145.f_27814)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 722226637:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 19) || Global_262145.f_27815)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -1267543371:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 20) || Global_262145.f_27816)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 822018448:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 21) || Global_262145.f_27817)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -1523428744:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 22) || Global_262145.f_27818)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_352(int iParam0)
{
	if (!Global_76622)
	{
		return 0;
	}
	if (iParam0 == -2030171296 || iParam0 == -604842630)
	{
		return 0;
	}
	if (func_354(iParam0) != -1)
	{
		if (func_343(func_353(iParam0)))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_353(int iParam0)
{
	switch (iParam0)
	{
		case -801550069:
			return 8;
			break;
		
		case 679453769:
			return 9;
			break;
		
		case 1909700336:
			return 10;
			break;
		
		case 2139203625:
			return 11;
			break;
		
		case -1890996696:
			return 12;
			break;
		
		case 2038858402:
			return 13;
			break;
		
		case 540101442:
			return 14;
			break;
		
		case -1106120762:
			return 15;
			break;
		
		case -1478704292:
			return 16;
			break;
		
		case -1146969353:
			return 20;
			break;
		
		case 1542143200:
			return 21;
			break;
		
		case -579747861:
			return 22;
			break;
		
		case 444994115:
			return 17;
			break;
		
		case 1637620610:
			return 18;
			break;
		
		case -755532233:
			return 19;
			break;
		
		case -2096690334:
			return 102;
			break;
		
		case -589178377:
			return 103;
			break;
		
		case 75131841:
			return 104;
			break;
		
		case 729783779:
			return 105;
			break;
		
		case 80636076:
			return 106;
			break;
		
		case 931280609:
			return 107;
			break;
		
		case 741090084:
			return 108;
			break;
	}
	return -1;
}

int func_354(int iParam0)
{
	switch (iParam0)
	{
		case -801550069:
			return 0;
		
		case 679453769:
			return 1;
		
		case 1909700336:
			return 2;
		
		case 2139203625:
			return 3;
		
		case -1890996696:
			return 4;
		
		case 2038858402:
			return 5;
		
		case -1146969353:
			return 6;
		
		case 1542143200:
			return 7;
		
		case -579747861:
			return 8;
		
		case 444994115:
			return 9;
		
		case 1637620610:
			return 10;
		
		case -755532233:
			return 11;
		
		case 540101442:
			return 12;
		
		case -1106120762:
			return 13;
		
		case -1478704292:
			return 14;
		
		case -589178377:
			return 15;
		
		case 75131841:
			return 16;
		
		case 729783779:
			return 17;
		
		case 80636076:
			return 18;
		
		case -2096690334:
			return 19;
		
		case 931280609:
			return 20;
		
		case 741090084:
			return 21;
		
		default:
	}
	return -1;
}

int func_355(int iParam0)
{
	switch (iParam0)
	{
		case 1945374990:
			if (func_1038(7230, -1, 0) >= func_359(iParam0) || Global_262145.f_24161)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1653666139:
			if (func_1038(7230, -1, 0) >= func_359(iParam0) || Global_262145.f_24162)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2069146067:
			if (func_356(22050, -1, -1) >= func_359(iParam0) || Global_262145.f_24163)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 345756458:
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_281.f_7, 1) || Global_262145.f_24165)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -420911112:
			if (func_1038(7228, -1, 0) >= func_359(iParam0) || Global_262145.f_24166)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -307958377:
			if (func_1038(7228, -1, 0) >= func_359(iParam0) || Global_262145.f_24167)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -638562243:
			if (func_345(22123, -1, -1) || Global_262145.f_24164)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_356(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = func_101();
	}
	iVar0 = 0;
	iVar1 = func_358(iParam0, iParam1);
	uVar2 = func_357(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x6D37612C090B9DC5(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_357(int iParam0)
{
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x6D63D77257071BC5((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x6D63D77257071BC5((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x6D63D77257071BC5((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x6D63D77257071BC5((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x6D63D77257071BC5((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x6D63D77257071BC5((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x6D63D77257071BC5((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x6D63D77257071BC5((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x6D63D77257071BC5((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x6D63D77257071BC5((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x6D63D77257071BC5((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x6D63D77257071BC5((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x6D63D77257071BC5((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x6D63D77257071BC5((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x6D63D77257071BC5((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x6D63D77257071BC5((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0x6D63D77257071BC5((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0x6D63D77257071BC5((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0x6D63D77257071BC5((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - unk_0x6D63D77257071BC5((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - unk_0x6D63D77257071BC5((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - unk_0x6D63D77257071BC5((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - unk_0x6D63D77257071BC5((iParam0 - 28483)) * 8) * 8;
	}
	return iVar0;
}

int func_358(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_101();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
	}
	return iVar0;
}

int func_359(int iParam0)
{
	switch (iParam0)
	{
		case 1945374990:
			return Global_262145.f_24168;
			break;
		
		case 1653666139:
			return Global_262145.f_24169;
			break;
		
		case 2069146067:
			return Global_262145.f_24170;
			break;
		
		case -420911112:
			return Global_262145.f_24171;
			break;
		
		case -307958377:
			return Global_262145.f_24172;
			break;
	}
	return 0;
}

int func_360(int iParam0)
{
	switch (iParam0)
	{
		case 1945374990:
			return 0;
			break;
		
		case 1653666139:
			return 1;
			break;
		
		case 2069146067:
			return 2;
			break;
		
		case -638562243:
			return 3;
			break;
		
		case 345756458:
			return 4;
			break;
		
		case -420911112:
			return 5;
			break;
		
		case -307958377:
			return 6;
			break;
	}
	return -1;
}

int func_361(int iParam0)
{
	if (!Global_76622)
	{
		return 0;
	}
	iVar0 = func_1038(5661, -1, 0);
	switch (iParam0)
	{
		case 1483171323:
			return unk_0xEAE0D21A50E6C7F4(iVar0, func_362(1));
		
		case 1181327175:
			return unk_0xEAE0D21A50E6C7F4(iVar0, func_362(2));
		
		case -1693015116:
			return unk_0xEAE0D21A50E6C7F4(iVar0, func_362(6));
		
		case 886810209:
			return unk_0xEAE0D21A50E6C7F4(iVar0, func_362(7));
		
		case -692292317:
			return unk_0xEAE0D21A50E6C7F4(iVar0, func_362(10));
		
		case -212993243:
			return unk_0xEAE0D21A50E6C7F4(iVar0, func_362(11));
		
		case -1435527158:
			return unk_0xEAE0D21A50E6C7F4(iVar0, func_362(12));
		
		case 447548909:
			return unk_0xEAE0D21A50E6C7F4(iVar0, func_362(13));
		
		case 1489874736:
			return unk_0xEAE0D21A50E6C7F4(iVar0, func_362(15));
		
		default:
	}
	return 0;
}

int func_362(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 5:
			return 5;
		
		case 6:
			return 6;
		
		case 7:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		case 13:
			return 13;
		
		case 14:
			return 14;
		
		case 15:
			return 15;
		
		default:
	}
	return -1;
}

int func_363(int iParam0)
{
	switch (iParam0)
	{
		case 1483171323:
			return 0;
			break;
		
		case 1181327175:
			return 1;
			break;
		
		case -1693015116:
			return 2;
			break;
		
		case 886810209:
			return 3;
			break;
		
		case -692292317:
			return 4;
			break;
		
		case -212993243:
			return 5;
			break;
		
		case -1435527158:
			return 6;
			break;
		
		case 447548909:
			return 7;
			break;
		
		case 1489874736:
			return 8;
			break;
	}
	return -1;
}

int func_364(int iParam0)
{
	if (!Global_76622)
	{
		return 0;
	}
	iVar0 = func_366(iParam0);
	iVar1 = func_365();
	if (iVar1 >= iVar0)
	{
		return 1;
	}
	return 0;
}

int func_365()
{
	return func_1038(6113, -1, 0);
}

int func_366(int iParam0)
{
	switch (iParam0)
	{
		case -1763555241:
			return Global_262145.f_22210;
		
		case -975345305:
			return Global_262145.f_22211;
		
		case -1523619738:
			return Global_262145.f_22212;
		
		case -1984275979:
			return Global_262145.f_22213;
		
		case -1700874274:
			return Global_262145.f_22214;
		
		case 1565978651:
			return Global_262145.f_22215;
		
		case 1043222410:
			return Global_262145.f_22216;
		
		case -32878452:
			return Global_262145.f_22217;
		
		case -1007528109:
			return Global_262145.f_22218;
		
		case -749299473:
			return Global_262145.f_22219;
		
		case -1386191424:
			return Global_262145.f_22220;
		
		case -392675425:
			return Global_262145.f_22221;
		
		case 1036591958:
			return Global_262145.f_22222;
		
		case -42959138:
			return Global_262145.f_22223;
		
		default:
	}
	return 0;
}

bool func_367(int iParam0)
{
	if (!Global_76622)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(func_1038(5463, -1, 0), iParam0);
}

int func_368(int iParam0)
{
	switch (iParam0)
	{
		case 1897744184:
			return 0;
		
		case -32236122:
			return 1;
		
		case -1881846085:
			return 2;
		
		case 562680400:
			return 3;
		
		case -1210451983:
			return 5;
		
		case 884483972:
			return 7;
		
		default:
	}
	return 3;
}

int func_369(int iParam0)
{
	switch (iParam0)
	{
		case 1897744184:
			return 0;
			break;
		
		case -32236122:
			return 1;
			break;
		
		case -1881846085:
			return 2;
			break;
		
		case 562680400:
			return 3;
			break;
		
		case -1210451983:
			return 4;
			break;
		
		case 884483972:
			return 5;
			break;
	}
	return -1;
}

int func_370(int iParam0)
{
	if (!Global_76622)
	{
		return 0;
	}
	iVar0 = 0;
	switch (iParam0)
	{
		case 187:
			iVar0 = 16;
			break;
		
		case 177:
			iVar0 = 12;
			break;
		
		case 185:
			iVar0 = 14;
			break;
		
		case 174:
			iVar0 = 9;
			break;
		
		case 171:
			iVar0 = 20;
			break;
		
		case 172:
			iVar0 = 7;
			break;
		
		case 173:
			iVar0 = 8;
			break;
		
		case 175:
			iVar0 = 10;
			break;
		
		case 176:
			iVar0 = 11;
			break;
		
		case 178:
			iVar0 = 5;
			break;
		
		case 179:
			iVar0 = 6;
			break;
		
		case 183:
			iVar0 = 21;
			break;
		
		case 180:
			iVar0 = 18;
			break;
		
		case 181:
			iVar0 = 22;
			break;
		
		case 182:
			iVar0 = 19;
			break;
		
		case 184:
			iVar0 = 13;
			break;
		
		case 186:
			iVar0 = 15;
			break;
		
		case 188:
			iVar0 = 17;
			break;
	}
	return func_371(iVar0);
}

bool func_371(int iParam0)
{
	if (func_374())
	{
		return 0;
	}
	iVar0 = func_372(iParam0);
	iVar1 = iParam0;
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_206(iVar1));
}

var func_372(var uParam0)
{
	uVar0 = func_1038(func_373(uParam0), -1, 0);
	return uVar0;
}

int func_373(var uParam0)
{
	iVar0 = uParam0;
	iVar1 = func_210(iVar0);
	if ((func_1044() == 0 || func_209() == 0) || (func_1044() == 999 && func_209() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 738;
				break;
			
			case 1:
				return 739;
				break;
		}
	}
	return 11511;
}

bool func_374()
{
	return Global_1312856;
}

int func_375(int iParam0)
{
	if (((((((((((((((iParam0 == 171 || iParam0 == 172) || iParam0 == 173) || iParam0 == 175) || iParam0 == 177) || iParam0 == 178) || iParam0 == 179) || iParam0 == 180) || iParam0 == 181) || iParam0 == 182) || iParam0 == 183) || iParam0 == 184) || iParam0 == 185) || iParam0 == 186) || iParam0 == 187) || iParam0 == 188)
	{
		return 1;
	}
	return 0;
}

int func_376(int iParam0)
{
	if ((((((iParam0 == 199 || iParam0 == 200) || iParam0 == 201) || iParam0 == 202) || iParam0 == 203) || iParam0 == 204) || iParam0 == 205)
	{
		return 1;
	}
	return 0;
}

bool func_377(int iParam0)
{
	if (!Global_76622)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(func_1038(5326, -1, 0), iParam0);
}

int func_378(int iParam0)
{
	switch (iParam0)
	{
		case -827162039:
			return 0;
		
		case -312295511:
			return 0;
		
		case -1912017790:
			return 1;
		
		case -1590337689:
			return 2;
		
		case -1649536104:
			return 3;
		
		case 989294410:
			return 4;
		
		case 1180875963:
			return 5;
		
		case 682434785:
			return 6;
		
		case 941494461:
			return 7;
		
		default:
	}
	return 0;
}

int func_379(var uParam0)
{
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 1180875963:
			return 0;
			break;
		
		case 682434785:
			return 1;
			break;
		
		case -1912017790:
			return 2;
			break;
		
		case -1649536104:
			return 3;
			break;
		
		case 989294410:
			return 4;
			break;
		
		case -827162039:
			return 5;
			break;
		
		case -312295511:
			return 5;
			break;
		
		case 941494461:
			return 6;
			break;
		
		case -1590337689:
			return 7;
			break;
	}
	return -1;
}

int func_380(int iParam0)
{
	if ((((((iParam0 == 233 || iParam0 == 234) || iParam0 == 235) || iParam0 == 236) || iParam0 == 240) || iParam0 == 241) || iParam0 == 263)
	{
		return 1;
	}
	return 0;
}

int func_381()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_25, 5))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_25, 1) || unk_0xEAE0D21A50E6C7F4(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6FB46C25CCB7E6D5(1571103992, &iVar0, -1))
	{
		if (unk_0xEAE0D21A50E6C7F4(iVar0, 5))
		{
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 1) || unk_0xEAE0D21A50E6C7F4(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0x0556D13739839AFD(0))
	{
		if (Global_150473.f_3)
		{
			iVar2 = 1035124638;
			if (unk_0x6FB46C25CCB7E6D5(iVar2, &iVar1, -1))
			{
				if (unk_0xEAE0D21A50E6C7F4(iVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xE0DC536BD2AC0301())
	{
		iVar3 = unk_0x0A4C9A3D51EAE31F(866);
		if (unk_0xEAE0D21A50E6C7F4(iVar3, 1) || unk_0xEAE0D21A50E6C7F4(iVar3, 3))
		{
			return 1;
		}
	}
	if (unk_0x61D9362D70D2DD56())
	{
		if (unk_0x999A3BFD3E9B5D2C())
		{
			if (unk_0xDA1BF71E2E8A1C89())
			{
				unk_0x6FB46C25CCB7E6D5(1571103992, &iVar4, -1);
				unk_0x5D96D8530B3D0904(&iVar4, 1);
				unk_0x5D96D8530B3D0904(&iVar4, 3);
				unk_0x5D96D8530B3D0904(&iVar4, 5);
				unk_0x5D96D8530B3D0904(&Global_25, 1);
				unk_0x5D96D8530B3D0904(&Global_25, 3);
				unk_0x5D96D8530B3D0904(&Global_25, 5);
				unk_0xCDC520E5E48E63D9(1571103992, iVar4, 1);
				if (unk_0xE0DC536BD2AC0301())
				{
					iVar4 = unk_0x0A4C9A3D51EAE31F(866);
					unk_0x5D96D8530B3D0904(&iVar4, 1);
					unk_0x5D96D8530B3D0904(&iVar4, 3);
					unk_0x9F2BE984EBF8A0F4(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_382()
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

int func_383(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 758895617;
		
		case 1:
			return 1545842587;
		
		case 2:
			return 1051415893;
		
		case 3:
			return -1311154784;
		
		case 4:
			return -1291952903;
		
		case 5:
			return -1216765807;
		
		case 6:
			return -433375717;
		
		case 7:
			return 330661258;
		
		case 10:
			return -1214505995;
		
		case 11:
			return -2122757008;
		
		case 12:
			return -644710429;
		
		case 13:
			return 970356638;
		
		case 14:
			return 621481054;
		
		case 15:
			return 744705981;
		
		case 16:
			return -1660661558;
		
		case 17:
			return 782665360;
		
		case 18:
			return 1981688531;
		
		case 19:
			return -50547061;
		
		case 20:
			return 788747387;
		
		case 21:
			return 321739290;
		
		case 22:
			return -823509173;
		
		case 24:
			return -1043459709;
		
		case 25:
			return 861409633;
		
		case 27:
			return 400514754;
		
		case 29:
			return 290013743;
		
		case 30:
			return -1030275036;
		
		case 31:
			return 771711535;
		
		case 32:
			return -282946103;
		
		case 258:
			return -2100640717;
		
		case 33:
			return 1131912276;
		
		case 34:
			return -186537451;
		
		case 35:
			return 1127861609;
		
		case 36:
			return -1233807380;
		
		case 37:
			return -400295096;
		
		case 38:
			return 448402357;
		
		case 39:
			return -746882698;
		
		case 40:
			return -1122289213;
		
		case 41:
			return -1800170043;
		
		case 42:
			return -825837129;
		
		case 43:
			return -1177863319;
		
		case 44:
			return 418536135;
		
		case 45:
			return 384071873;
		
		case 46:
			return 338562499;
		
		case 47:
			return 1032823388;
		
		case 48:
			return -1045541610;
		
		case 49:
			return -1041692462;
		
		case 50:
			return -1995326987;
		
		case 51:
			return 1126868326;
		
		case 52:
			return -1189015600;
		
		case 53:
			return 1909141499;
		
		case 54:
			return -1130810103;
		
		case 55:
			return 1123216662;
		
		case 56:
			return -5153954;
		
		case 57:
			return 142944341;
		
		case 58:
			return 2006918058;
		
		case 59:
			return 2136773105;
		
		case 60:
			return -391594584;
		
		case 61:
			return -511601230;
		
		case 62:
			return -114291515;
		
		case 63:
			return 1672195559;
		
		case 64:
			return -893578776;
		
		case 65:
			return -140902153;
		
		case 66:
			return -2128233223;
		
		case 67:
			return -909201658;
		
		case 68:
			return 788045382;
		
		case 69:
			return 55628203;
		
		case 70:
			return -1696146015;
		
		case 71:
			return 2072687711;
		
		case 72:
			return 108773431;
		
		case 73:
			return -1461482751;
		
		case 74:
			return -1934452204;
		
		case 75:
			return 1737773231;
		
		case 76:
			return -2098947590;
		
		case 77:
			return -1622444098;
		
		case 78:
			return 837858166;
		
		case 79:
			return -1746576111;
		
		case 80:
			return -1673356438;
		
		case 81:
			return -2130482718;
		
		case 82:
			return 1283517198;
		
		case 83:
			return -713569950;
		
		case 84:
			return -2072933068;
		
		case 85:
			return -120287622;
		
		case 86:
			return 904750859;
		
		case 87:
			return -1098802077;
		
		case 88:
			return -1961627517;
		
		case 89:
			return -16948145;
		
		case 90:
			return -1670998136;
		
		case 91:
			return -89291282;
		
		case 92:
			return 301427732;
		
		case 93:
			return -1193103848;
		
		case 94:
			return -891462355;
		
		case 95:
			return -566387422;
		
		case 96:
			return 544021352;
		
		case 97:
			return 37348240;
		
		case 98:
			return 11251904;
		
		default:
	}
	switch (iParam0)
	{
		case 99:
			return -349601129;
		
		case 100:
			return 92612664;
		
		case 101:
			return 1488164764;
		
		case 102:
			return 231083307;
		
		case 103:
			return -1435919434;
		
		case 104:
			return -1661854193;
		
		case 105:
			return -1207771834;
		
		case 106:
			return -599568815;
		
		case 107:
			return -1453280962;
		
		case 108:
			return 989381445;
		
		case 109:
			return 117401876;
		
		case 111:
			return -1297672541;
		
		case 114:
			return -142942670;
		
		case 112:
			return 408192225;
		
		case 115:
			return -1403128555;
		
		case 116:
			return 486987393;
		
		case 110:
			return 767087018;
		
		case 113:
			return 1341619767;
		
		case 117:
			return 108773431;
		
		case 118:
			return -1041692462;
		
		case 119:
			return 1545842587;
		
		case 120:
			return -1622444098;
		
		case 121:
			return 1836027715;
		
		case 128:
			return -1809822327;
		
		case 129:
			return -1903012613;
		
		case 130:
			return 1069929536;
		
		case 131:
			return -789894171;
		
		case 132:
			return -1775728740;
		
		case 133:
			return -1289722222;
		
		case 134:
			return 886934177;
		
		case 135:
			return -310465116;
		
		case 136:
			return -1883869285;
		
		case 137:
			return -1651067813;
		
		case 138:
			return 1645267888;
		
		case 139:
			return -667151410;
		
		case 140:
			return -1477580979;
		
		case 141:
			return 1723137093;
		
		case 142:
			return 1777363799;
		
		case 122:
			return 80636076;
		
		case 123:
			return -591610296;
		
		case 124:
			return 499169875;
		
		case 125:
			return -377465520;
		
		case 126:
			return 1349725314;
		
		case 127:
			return 873639469;
		
		default:
	}
	switch (iParam0)
	{
		case 143:
			return -1205801634;
		
		case 144:
			return 1373123368;
		
		case 145:
			return 75131841;
		
		case 146:
			return 841808271;
		
		case 147:
			return -431692672;
		
		case 148:
			return -1237253773;
		
		case 149:
			return 1078682497;
		
		case 150:
			return 1507916787;
		
		case 151:
			return -14495224;
		
		case 152:
			return 699456151;
		
		case 153:
			return 65402552;
		
		case 154:
			return -1269889662;
		
		case 155:
			return -2045594037;
		
		case 156:
			return -1150599089;
		
		case 157:
			return -304802106;
		
		case 158:
			return 736902334;
		
		case 159:
			return -1008861746;
		
		case 160:
			return -845961253;
		
		case 161:
			return 743478836;
		
		case 162:
			return 165154707;
		
		case 163:
			return 1824333165;
		
		case 164:
			return -339587598;
		
		case 165:
			return 1011753235;
		
		case 166:
			return 1011753235;
		
		case 167:
			return -159126838;
		
		case 168:
			return 1265391242;
		
		case 169:
			return -1089039904;
		
		case 170:
			return 92612664;
		
		case 187:
			return -1600252419;
		
		case 177:
			return 970385471;
		
		case 185:
			return -82626025;
		
		case 174:
			return 1753414259;
		
		case 171:
			return 444171386;
		
		case 172:
			return 941800958;
		
		case 173:
			return 509498602;
		
		case 175:
			return 296357396;
		
		case 176:
			return -2107990196;
		
		case 178:
			return -1860900134;
		
		case 179:
			return 2071877360;
		
		case 183:
			return -2052737935;
		
		case 180:
			return -1372848492;
		
		case 181:
			return 410882957;
		
		case 182:
			return 640818791;
		
		case 184:
			return -2007026063;
		
		case 186:
			return -2096818938;
		
		case 188:
			return 1077420264;
		
		case 189:
			return -1543762099;
		
		case 190:
			return -624529134;
		
		case 191:
			return 1269098716;
		
		case 192:
			return -2064372143;
		
		case 193:
			return -634879114;
		
		case 194:
			return 1348744438;
		
		case 195:
			return 1162065741;
		
		case 196:
			return -1255452397;
		
		case 197:
			return 1221512915;
		
		case 198:
			return -1894894188;
		
		case 199:
			return -901163259;
		
		case 200:
			return 1233534620;
		
		case 201:
			return -1066334226;
		
		case 202:
			return 1039032026;
		
		case 203:
			return 1923400478;
		
		case 204:
			return 723973206;
		
		case 205:
			return -326143852;
		
		case 206:
			return -401643538;
		
		case 207:
			return -915704871;
		
		case 208:
			return 349315417;
		
		case 209:
			return 237764926;
		
		case 210:
			return 729783779;
		
		case 211:
			return -589178377;
		
		case 212:
			return -1106353882;
		
		case 213:
			return -631760477;
		
		case 214:
			return -1566741232;
		
		case 215:
			return -1214293858;
		
		case 216:
			return 1987142870;
		
		case 217:
			return 1075432268;
		
		case 218:
			return -498054846;
		
		case 219:
			return 1581459400;
		
		case 220:
			return -1479664699;
		
		case 221:
			return 349605904;
		
		case 222:
			return 784565758;
		
		case 223:
			return 1663218586;
		
		case 224:
			return 1070967343;
		
		case 225:
			return -1353081087;
		
		case 229:
			return -1150599089;
		
		case 228:
			return 525509695;
		
		case 227:
			return -2119578145;
		
		case 226:
			return -682211828;
		
		case 230:
			return 523724515;
		
		case 263:
			if (iParam1 == 0)
			{
				return 1203490606;
			}
			else if (iParam1 == 1)
			{
				return -432008408;
			}
			else
			{
				return 1203490606;
			}
			break;
		
		case 264:
			return -1757836725;
		
		case 259:
			return -1930048799;
		
		case 260:
			return 2123327359;
		
		case 261:
			return 1426219628;
		
		case 262:
			return 1274868363;
		
		case 265:
			return -1829802492;
		
		case 266:
			return 234062309;
		
		case 231:
			return -831834716;
		
		case 232:
			return 2068293287;
		
		case 233:
			if (iParam1 == 0)
			{
				return 1878062887;
			}
			else if (iParam1 == 1)
			{
				return 470404958;
			}
			else
			{
				return 1878062887;
			}
			break;
		
		case 234:
			if (iParam1 == 0)
			{
				return 634118882;
			}
			else if (iParam1 == 1)
			{
				return 666166960;
			}
			else
			{
				return 634118882;
			}
			break;
		
		case 235:
			if (iParam1 == 0)
			{
				return 906642318;
			}
			else if (iParam1 == 1)
			{
				return 704435172;
			}
			else
			{
				return 906642318;
			}
			break;
		
		case 236:
			if (iParam1 == 0)
			{
				return -2030171296;
			}
			else if (iParam1 == 1)
			{
				return -604842630;
			}
			else
			{
				return -2030171296;
			}
			break;
		
		case 237:
			return -114627507;
		
		case 238:
			return -1660945322;
		
		case 239:
			return -1943285540;
		
		case 240:
			if (iParam1 == 0)
			{
				return -1485523546;
			}
			else if (iParam1 == 1)
			{
				return -888242983;
			}
			else
			{
				return -1485523546;
			}
			break;
		
		case 241:
			if (iParam1 == 0)
			{
				return 1489967196;
			}
			else if (iParam1 == 1)
			{
				return 1922255844;
			}
			else
			{
				return 1489967196;
			}
			break;
		
		case 242:
			return 1102544804;
		
		case 243:
			return 710198397;
		
		case 244:
			return -1671539132;
		
		case 245:
			return Global_73804;
		
		case 251:
			return 16646064;
		
		case 250:
			return 464687292;
		
		case 249:
			return -1685021548;
		
		case 252:
			return -2119578145;
		
		case 246:
			return 972671128;
		
		case 247:
			return 970598228;
		
		case 49:
			return -1041692462;
		
		case 248:
			return -602287871;
		
		case 253:
			return -1845487887;
		
		case 254:
			return 1621617168;
		
		case 255:
			return 1475773103;
		
		case 256:
			return -305727417;
		
		case 257:
			return -1295027632;
		
		case 267:
			return -1232836011;
		
		case 268:
			return -777172681;
		
		case 269:
			return 1887331236;
		
		case 270:
			return 1549126457;
		
		case 271:
			return 101905590;
		
		case 272:
			return -663299102;
		
		case 273:
			return 683047626;
		
		case 274:
			return 390201602;
		
		case 275:
			return 86520421;
		
		case 279:
			return 2067820283;
		
		case 280:
			return 482197771;
		
		case 281:
			return 819197656;
		
		case 276:
			return -2103821244;
		
		case 277:
			return -1071380347;
		
		case 278:
			return 741090084;
		
		case 282:
			return -2140431165;
		
		case 283:
			return 2035069708;
		
		case 284:
			return -1606187161;
		
		case 285:
			return 822018448;
		
		case 286:
			return -2115793025;
		
		case 287:
			return -1009268949;
		
		case 288:
			return -570033273;
		
		case 289:
			return 6774487;
		
		case 290:
			return -1404136503;
		
		case 291:
			return 1873600305;
		
		case 292:
			return -405626514;
		
		case 293:
			return -674927303;
		
		case 294:
			return -255678177;
		
		case 296:
			return -440768424;
		
		case 297:
			return 1491277511;
		
		case 295:
			return -609625092;
		
		case 298:
			return -1523428744;
		
		case 299:
			return -1558399629;
		
		case 300:
			return 1026149675;
		
		case 301:
			return -618617997;
		
		case 302:
			return -1289178744;
		
		case 303:
			return -1842748181;
		
		case 304:
			return -312295511;
		
		case 305:
			return -1649536104;
		
		case 306:
			return 1180875963;
		
		case 307:
			return -1590337689;
		
		case 308:
			return 682434785;
		
		case 309:
			return -1912017790;
		
		case 310:
			return 941494461;
		
		case 311:
			return 989294410;
		
		case 312:
			return -1758137366;
		
		case 313:
			return 272929391;
		
		case 314:
			return -2048333973;
		
		case 315:
			return 1034187331;
		
		case 316:
			return -239841468;
		
		case 317:
			return 627535535;
		
		case 318:
			return 1886268224;
		
		case 319:
			return 1234311532;
		
		case 320:
			return -1405937764;
		
		case 321:
			return 719660200;
		
		case 322:
			return -982130927;
	}
	switch (iParam0)
	{
		case 323:
			return Global_73805;
		
		case 324:
			return Global_73806;
		
		case 325:
			return 223240013;
		
		case 326:
			return 1504306544;
		
		case 327:
			return 1939284556;
		
		case 328:
			return 917809321;
		
		case 329:
			return 562680400;
		
		case 330:
			return 1897744184;
		
		case 331:
			return -32236122;
		
		case 332:
			return 884483972;
		
		case 333:
			return -1210451983;
		
		case 334:
			return -1881846085;
		
		case 335:
			return 159274291;
		
		case 336:
			return 433954513;
		
		case 337:
			return -1281684762;
		
		case 338:
			return -1763555241;
		
		case 339:
			return -749299473;
		
		case 340:
			return -975345305;
		
		case 341:
			return -1700874274;
		
		case 342:
			return -392675425;
		
		case 343:
			return 1043222410;
		
		case 344:
			return -1386191424;
		
		case 345:
			return 1565978651;
		
		case 346:
			return 1036591958;
		
		case 347:
			return -32878452;
		
		case 348:
			return -42959138;
		
		case 349:
			return -1984275979;
		
		case 350:
			return -1007528109;
		
		case 351:
			return -1523619738;
		
		case 352:
			return 1392481335;
		
		case 353:
			return -998177792;
		
		case 354:
			return 1841130506;
		
		case 355:
			return 2049897956;
		
		case 356:
			return -1242608589;
		
		case 357:
			return Global_73807;
		
		case 358:
			return 1483171323;
		
		case 359:
			return 886810209;
		
		case 360:
			return -1693015116;
		
		case 361:
			return -692292317;
		
		case 362:
			return -1435527158;
		
		case 363:
			return 1181327175;
		
		case 364:
			return 1489874736;
		
		case 365:
			return -212993243;
		
		case 366:
			return 447548909;
		
		case 367:
			return 1561920505;
		
		case 368:
			return -1848994066;
		
		case 369:
			return 1741861769;
		
		case 370:
			return 1104234922;
		
		case 371:
			return 1871995513;
		
		case 372:
			return 1352136073;
		
		case 373:
			return -313185164;
		
		case 374:
			return -2079788230;
		
		case 375:
			return 600450546;
		
		case 376:
			return -410205223;
		
		case 377:
			return 867799010;
		
		case 378:
			return -1529242755;
		
		case 379:
			return 903794909;
		
		case 380:
			return -1532697517;
		
		case 381:
			return 15219735;
		
		case 382:
			return 661493923;
		
		case 383:
			return 838982985;
		
		case 384:
			return -391595372;
		
		case 385:
			return -121446169;
		
		case 386:
			return 1909189272;
		
		case 387:
			return 1617472902;
		
		case 388:
			return -1267543371;
		
		case 389:
			return 931280609;
		
		case 390:
			return 1046206681;
		
		case 391:
			return -1259134696;
		
		case 392:
			return 1115909093;
		
		case 393:
			return 1031562256;
		
		case 394:
			return -376434238;
		
		case 395:
			return -986944621;
		
		case 396:
			return -1134706562;
		
		case 397:
			return -2120700196;
		
		case 398:
			return -214906006;
		
		case 399:
			return -988501280;
		
		case 400:
			return 1254014755;
		
		case 401:
			return -726768679;
		
		case 402:
			return Global_73808;
		
		case 403:
			return 1945374990;
		
		case 404:
			return 1653666139;
		
		case 405:
			return 500482303;
		
		case 406:
			return 2044532910;
		
		case 407:
			return -638562243;
		
		case 408:
			return 1692272545;
		
		case 409:
			return 2069146067;
		
		case 410:
			return -420911112;
		
		case 411:
			return 321186144;
		
		case 412:
			return -54332285;
		
		case 415:
			return 2016857647;
		
		case 416:
			return -227741703;
		
		case 417:
			return 627094268;
		
		case 418:
			return -1450650718;
		
		case 419:
			return -808831384;
		
		case 420:
			return 1337041428;
		
		case 421:
			return 850565707;
		
		case 422:
			return 884422927;
		
		case 423:
			return -1137532101;
		
		case 424:
			return -808457413;
		
		case 413:
			return -307958377;
		
		case 414:
			return 345756458;
		
		case 425:
			return -801550069;
		
		case 426:
			return 679453769;
		
		case 427:
			return 1909700336;
		
		case 428:
			return 2139203625;
		
		case 429:
			return -1890996696;
		
		case 430:
			return 2038858402;
		
		case 431:
			return -1146969353;
		
		case 432:
			return 1542143200;
		
		case 433:
			return -579747861;
		
		case 434:
			return 444994115;
		
		case 435:
			return 1637620610;
		
		case 436:
			return -755532233;
		
		case 437:
			return 540101442;
		
		case 438:
			return -1106120762;
		
		case 439:
			return -1478704292;
		
		case 440:
			return -2096690334;
		
		case 450:
			return -956048545;
		
		case 451:
			return 1886712733;
		
		case 452:
			return 728614474;
		
		case 453:
			return -1255698084;
		
		case 454:
			return 1074326203;
		
		case 455:
			return -784816453;
		
		case 456:
			return 534258863;
		
		case 457:
			return 1641462412;
		
		case 458:
			return -591651781;
		
		case 441:
			return -49115651;
		
		case 442:
			return 1456744817;
		
		case 443:
			return 1591739866;
		
		case 444:
			return -507495760;
		
		case 445:
			return -1168952148;
		
		case 446:
			return 1279262537;
		
		case 447:
			return -1566607184;
		
		case 448:
			return -331467772;
		
		case 449:
			return -286046740;
		
		case 459:
			return 1044193113;
		
		case 460:
			return 686471183;
		
		case 461:
			return -941272559;
		
		case 462:
			return -1829436850;
		
		case 463:
			return -682108547;
		
		case 464:
			return 722226637;
		
		case 465:
			return 1854776567;
		
		case 466:
			return 1862507111;
		
		case 467:
			return -882629065;
		
		case 468:
			return -362150785;
		
		case 469:
			return 310284501;
		
		case 470:
			return 916547552;
		
		case 471:
			return -1804415708;
		
		case 472:
			return 1934384720;
		
		case 473:
			return -1349095620;
		
		case 474:
			return -208911803;
		
		case 475:
			return -324618589;
		
		case 476:
			return -664141241;
		
		case 477:
			return 1323778901;
		
		case 478:
			return -1620126302;
		
		case 479:
			return -447711397;
		
		case 480:
			return 1938952078;
		
		case 481:
			return -907477130;
		
		case 482:
			return -1987130134;
		
		case 483:
			return 1747439474;
		
		case 484:
			return 469291905;
		
		case 485:
			return -48031959;
		
		case 486:
			return 1284356689;
		
		case 487:
			return -1254331310;
		
		case 488:
			return 394110044;
		
		case 489:
			return 301304410;
		
		case 490:
			return 1456336509;
		
		case 491:
			return 340154634;
		
		case 492:
			return -1132721664;
		
		case 493:
			return -1960756985;
		
		case 494:
			return 960812448;
		
		case 495:
			return 83136452;
		
		case 496:
			return 740289177;
		
		case 497:
			return 2031587082;
		
		case 498:
			return 1693751655;
		
		case 499:
			return -834353991;
		
		case 500:
			return 872704284;
		
		case 501:
			return 987469656;
		
		case 502:
			return -1756021720;
		
		case 503:
			return 1118611807;
		
		case 504:
			return 409049982;
		
		case 505:
			return 408825843;
		
		default:
	}
	switch (iParam0)
	{
		case 506:
			return -2098954619;
		
		case 507:
			return 2134119907;
		
		case 508:
			return 67753863;
		
		case 509:
			return -631322662;
		
		case 510:
			return -838099166;
		
		case 511:
			return -1810806490;
		
		case 512:
			return -1358197432;
		
		case 513:
			return 1492612435;
		
		case 514:
			return 1181339704;
		
		case 515:
			return -1728685474;
		
		case 516:
			return -2124201592;
		
		case 517:
			return 1830407356;
		
		default:
	}
	return 0;
}

int func_384(int iParam0)
{
	switch (iParam0)
	{
		case 758895617:
			return 0;
		
		case 1545842587:
			return 1;
		
		case 1051415893:
			return 2;
		
		case -1311154784:
			return 3;
		
		case -1291952903:
			return 4;
		
		case -1216765807:
			return 5;
		
		case -433375717:
			return 6;
		
		case 330661258:
			return 7;
		
		case -1214505995:
			return 10;
		
		case -2122757008:
			return 11;
		
		case -644710429:
			return 12;
		
		case 970356638:
			return 13;
		
		case 621481054:
			return 14;
		
		case 744705981:
			return 15;
		
		case -1660661558:
			return 16;
		
		case 782665360:
			return 17;
		
		case 1981688531:
			return 18;
		
		case -50547061:
			return 19;
		
		case 788747387:
			return 20;
		
		case 321739290:
			return 21;
		
		case -823509173:
			return 22;
		
		case -1043459709:
			return 24;
		
		case 861409633:
			return 25;
		
		case 400514754:
			return 27;
		
		case 290013743:
			return 29;
		
		case -1030275036:
			return 30;
		
		case 771711535:
			return 31;
		
		case -282946103:
			return 32;
		
		case -2100640717:
			return 258;
		
		case 1131912276:
			return 33;
		
		case -186537451:
			return 34;
		
		case 1127861609:
			return 35;
		
		case -1233807380:
			return 36;
		
		case -400295096:
			return 37;
		
		case 448402357:
			return 38;
		
		case -746882698:
			return 39;
		
		case -1122289213:
			return 40;
		
		case -1800170043:
			return 41;
		
		case -825837129:
			return 42;
		
		case -1177863319:
			return 43;
		
		case 418536135:
			return 44;
		
		case 384071873:
			return 45;
		
		case 338562499:
			return 46;
		
		case 1032823388:
			return 47;
		
		case -1045541610:
			return 48;
		
		case -1041692462:
			return 49;
		
		case -1995326987:
			return 50;
		
		case 1126868326:
			return 51;
		
		case -1189015600:
			return 52;
		
		case 1909141499:
			return 53;
		
		case -1130810103:
			return 54;
		
		case 1123216662:
			return 55;
		
		case -5153954:
			return 56;
		
		case 142944341:
			return 57;
		
		case 2006918058:
			return 58;
		
		case 2136773105:
			return 59;
		
		case -391594584:
			return 60;
		
		case -511601230:
			return 61;
		
		case -114291515:
			return 62;
		
		case 1672195559:
			return 63;
		
		case -893578776:
			return 64;
		
		case -140902153:
			return 65;
		
		case -2128233223:
			return 66;
		
		case -909201658:
			return 67;
		
		case 788045382:
			return 68;
		
		case 55628203:
			return 69;
		
		case 1283517198:
			return 82;
		
		case 837858166:
			return 78;
		
		case -891462355:
			return 94;
		
		case -16948145:
			return 89;
		
		case -1696146015:
			return 70;
		
		case -713569950:
			return 83;
		
		case 2072687711:
			return 71;
		
		case -2072933068:
			return 84;
		
		case 108773431:
			return 72;
		
		case -1670998136:
			return 90;
		
		case -2130482718:
			return 81;
		
		case -89291282:
			return 91;
		
		case 301427732:
			return 92;
		
		case -120287622:
			return 85;
		
		case -1746576111:
			return 79;
		
		case 904750859:
			return 86;
		
		case -1461482751:
			return 73;
		
		case -1934452204:
			return 74;
		
		case 1737773231:
			return 75;
		
		case -1098802077:
			return 87;
		
		case -2098947590:
			return 76;
		
		case -1961627517:
			return 88;
		
		case -1673356438:
			return 80;
		
		case -1622444098:
			return 77;
		
		case -1193103848:
			return 93;
		
		case -566387422:
			return 95;
		
		case 544021352:
			return 96;
		
		case 37348240:
			return 97;
		
		case 11251904:
			return 98;
		
		case -1435919434:
			return 103;
		
		case -1661854193:
			return 104;
		
		case -1207771834:
			return 105;
		
		case -599568815:
			return 106;
		
		case -1453280962:
			return 107;
		
		case 989381445:
			return 108;
		
		case -1809822327:
			return 128;
		
		case -1903012613:
			return 129;
		
		case 1069929536:
			return 130;
		
		case -789894171:
			return 131;
		
		case -1775728740:
			return 132;
		
		case -1289722222:
			return 133;
		
		case 886934177:
			return 134;
		
		case -310465116:
			return 135;
		
		case -1883869285:
			return 136;
		
		case -1651067813:
			return 137;
		
		case 1645267888:
			return 138;
		
		case -667151410:
			return 139;
		
		case -1477580979:
			return 140;
		
		case 1723137093:
			return 141;
		
		case 1777363799:
			return 142;
		
		case 80636076:
			return 122;
		
		case -591610296:
			return 123;
		
		case 499169875:
			return 124;
		
		case -377465520:
			return 125;
		
		case 1349725314:
			return 126;
		
		case 873639469:
			return 127;
		
		case 1507916787:
			return 150;
		
		case -14495224:
			return 151;
		
		case 699456151:
			return 152;
		
		case 65402552:
			return 153;
		
		case -1269889662:
			return 154;
		
		case -2045594037:
			return 155;
		
		case -1150599089:
			return 156;
		
		case -304802106:
			return 157;
		
		case 736902334:
			return 158;
		
		case -1008861746:
			return 159;
		
		default:
	}
	if (iParam0 == -349601129)
	{
		return 99;
	}
	else if (iParam0 == 92612664)
	{
		return 100;
	}
	else if (iParam0 == 1488164764)
	{
		return 101;
	}
	else if (iParam0 == 231083307)
	{
		return 102;
	}
	else if (iParam0 == 371301181 || iParam0 == 117401876)
	{
		return 109;
	}
	else if (iParam0 == -1297672541)
	{
		return 111;
	}
	else if (iParam0 == -142942670)
	{
		return 114;
	}
	else if (iParam0 == 408192225)
	{
		return 112;
	}
	else if (iParam0 == -1403128555)
	{
		return 115;
	}
	else if (iParam0 == 486987393)
	{
		return 116;
	}
	else if (iParam0 == 767087018)
	{
		return 110;
	}
	else if (iParam0 == 1341619767)
	{
		return 113;
	}
	else if (iParam0 == 108773431)
	{
		return 117;
	}
	else if (iParam0 == -1041692462)
	{
		return 118;
	}
	else if (iParam0 == 1545842587)
	{
		return 119;
	}
	else if (iParam0 == -1622444098)
	{
		return 120;
	}
	else if (iParam0 == 1836027715)
	{
		return 121;
	}
	else if (iParam0 == -1205801634)
	{
		return 143;
	}
	else if (iParam0 == 1373123368)
	{
		return 144;
	}
	else if (iParam0 == 75131841)
	{
		return 145;
	}
	else if (iParam0 == 841808271)
	{
		return 146;
	}
	else if (iParam0 == -431692672)
	{
		return 147;
	}
	else if (iParam0 == -1237253773)
	{
		return 148;
	}
	else if (iParam0 == 1078682497)
	{
		return 149;
	}
	else if (iParam0 == -845961253)
	{
		return 160;
	}
	else if (iParam0 == 743478836)
	{
		return 161;
	}
	else if (iParam0 == 165154707)
	{
		return 162;
	}
	else if (iParam0 == 1824333165)
	{
		return 163;
	}
	else if (iParam0 == -339587598)
	{
		return 164;
	}
	else if (iParam0 == 1011753235)
	{
		return 165;
	}
	else if (iParam0 == 1011753235)
	{
		return 166;
	}
	else if (iParam0 == -159126838)
	{
		return 167;
	}
	else if (iParam0 == 1265391242)
	{
		return 168;
	}
	else if (iParam0 == -1089039904)
	{
		return 169;
	}
	else if (iParam0 == 92612664)
	{
		return 170;
	}
	else if (iParam0 == -1600252419)
	{
		return 187;
	}
	else if (iParam0 == 970385471)
	{
		return 177;
	}
	else if (iParam0 == -82626025)
	{
		return 185;
	}
	else if (iParam0 == 1753414259)
	{
		return 174;
	}
	else if (iParam0 == 444171386)
	{
		return 171;
	}
	else if (iParam0 == 941800958)
	{
		return 172;
	}
	else if (iParam0 == 509498602)
	{
		return 173;
	}
	else if (iParam0 == 296357396)
	{
		return 175;
	}
	else if (iParam0 == -2107990196)
	{
		return 176;
	}
	else if (iParam0 == -1860900134)
	{
		return 178;
	}
	else if (iParam0 == -2052737935)
	{
		return 183;
	}
	else if (iParam0 == 2071877360)
	{
		return 179;
	}
	else if (iParam0 == 640818791)
	{
		return 182;
	}
	else if (iParam0 == -2007026063)
	{
		return 184;
	}
	else if (iParam0 == -2096818938)
	{
		return 186;
	}
	else if (iParam0 == 1077420264)
	{
		return 188;
	}
	else if (iParam0 == -1543762099)
	{
		return 189;
	}
	else if (iParam0 == -624529134)
	{
		return 190;
	}
	else if (iParam0 == -1372848492)
	{
		return 180;
	}
	else if (iParam0 == 410882957)
	{
		return 181;
	}
	else if (iParam0 == 1269098716)
	{
		return 191;
	}
	else if (iParam0 == -2064372143)
	{
		return 192;
	}
	else if (iParam0 == -634879114)
	{
		return 193;
	}
	else if (iParam0 == 1348744438)
	{
		return 194;
	}
	else if (iParam0 == 1162065741)
	{
		return 195;
	}
	else if (iParam0 == -1255452397)
	{
		return 196;
	}
	else if (iParam0 == 1221512915)
	{
		return 197;
	}
	else if (iParam0 == -1894894188)
	{
		return 198;
	}
	else if (iParam0 == -901163259)
	{
		return 199;
	}
	else if (iParam0 == 1233534620)
	{
		return 200;
	}
	else if (iParam0 == -1066334226)
	{
		return 201;
	}
	else if (iParam0 == 1039032026)
	{
		return 202;
	}
	else if (iParam0 == 1923400478)
	{
		return 203;
	}
	else if (iParam0 == 723973206)
	{
		return 204;
	}
	else if (iParam0 == -326143852)
	{
		return 205;
	}
	else if (iParam0 == -401643538)
	{
		return 206;
	}
	else if (iParam0 == -915704871)
	{
		return 207;
	}
	else if (iParam0 == 349315417)
	{
		return 208;
	}
	else if (iParam0 == 237764926)
	{
		return 209;
	}
	else if (iParam0 == 729783779)
	{
		return 210;
	}
	else if (iParam0 == -589178377)
	{
		return 211;
	}
	else if (iParam0 == -1106353882)
	{
		return 212;
	}
	else if (iParam0 == -631760477)
	{
		return 213;
	}
	else if (iParam0 == -1566741232)
	{
		return 214;
	}
	else if (iParam0 == -1214293858)
	{
		return 215;
	}
	else if (iParam0 == 1987142870)
	{
		return 216;
	}
	else if (iParam0 == 1075432268)
	{
		return 217;
	}
	else if (iParam0 == -498054846)
	{
		return 218;
	}
	else if (iParam0 == 1581459400)
	{
		return 219;
	}
	else if (iParam0 == -1479664699)
	{
		return 220;
	}
	else if (iParam0 == 349605904)
	{
		return 221;
	}
	else if (iParam0 == 784565758)
	{
		return 222;
	}
	else if (iParam0 == 1663218586)
	{
		return 223;
	}
	else if (iParam0 == 1070967343)
	{
		return 224;
	}
	else if (iParam0 == -1353081087)
	{
		return 225;
	}
	else if (iParam0 == -1150599089)
	{
		return 229;
	}
	else if (iParam0 == 525509695)
	{
		return 228;
	}
	else if (iParam0 == -2119578145)
	{
		return 227;
	}
	else if (iParam0 == -682211828)
	{
		return 226;
	}
	else if (iParam0 == 523724515)
	{
		return 230;
	}
	else if (iParam0 == -831834716)
	{
		return 231;
	}
	else if (iParam0 == 2068293287)
	{
		return 232;
	}
	else if (iParam0 == -310465116)
	{
		return 135;
	}
	else if (iParam0 == 16646064)
	{
		return 251;
	}
	else if (iParam0 == 464687292)
	{
		return 250;
	}
	else if (iParam0 == -1685021548)
	{
		return 249;
	}
	else if (iParam0 == 729783779)
	{
		return 210;
	}
	else if (iParam0 == -2119578145)
	{
		return 252;
	}
	else if (iParam0 == 1878062887 || iParam0 == 470404958)
	{
		return 233;
	}
	else if (iParam0 == 634118882 || iParam0 == 666166960)
	{
		return 234;
	}
	else if (iParam0 == 906642318)
	{
		return 235;
	}
	else if (iParam0 == -2030171296)
	{
		return 236;
	}
	else if (iParam0 == -114627507)
	{
		return 237;
	}
	else if (iParam0 == -1660945322)
	{
		return 238;
	}
	else if (iParam0 == -1943285540)
	{
		return 239;
	}
	else if (iParam0 == -1485523546 || iParam0 == -888242983)
	{
		return 240;
	}
	else if (iParam0 == 1489967196 || iParam0 == 1922255844)
	{
		return 241;
	}
	else if (iParam0 == 1102544804)
	{
		return 242;
	}
	else if (iParam0 == 710198397)
	{
		return 243;
	}
	else if (iParam0 == -1671539132)
	{
		return 244;
	}
	else if (iParam0 == Global_73804)
	{
		return 245;
	}
	else if (iParam0 == 972671128)
	{
		return 246;
	}
	else if (iParam0 == 970598228)
	{
		return 247;
	}
	else if (iParam0 == -1041692462)
	{
		return 49;
	}
	else if (iParam0 == 289313964 || iParam0 == -602287871)
	{
		return 248;
	}
	else if (iParam0 == -1845487887)
	{
		return 253;
	}
	else if (iParam0 == 1621617168)
	{
		return 254;
	}
	else if (iParam0 == 1475773103)
	{
		return 255;
	}
	else if (iParam0 == -305727417)
	{
		return 256;
	}
	else if (iParam0 == -1295027632)
	{
		return 257;
	}
	else if (iParam0 == -1930048799)
	{
		return 259;
	}
	else if (iParam0 == 2123327359)
	{
		return 260;
	}
	else if (iParam0 == 1426219628)
	{
		return 261;
	}
	else if (iParam0 == 1274868363)
	{
		return 262;
	}
	else if (iParam0 == 1203490606 || iParam0 == -432008408)
	{
		return 263;
	}
	else if (iParam0 == -1757836725)
	{
		return 264;
	}
	else if (iParam0 == -1829802492)
	{
		return 265;
	}
	else if (iParam0 == 234062309)
	{
		return 266;
	}
	else if (iParam0 == -1232836011)
	{
		return 267;
	}
	else if (iParam0 == -777172681)
	{
		return 268;
	}
	else if (iParam0 == 1887331236)
	{
		return 269;
	}
	else if (iParam0 == 1549126457)
	{
		return 270;
	}
	else if (iParam0 == 101905590)
	{
		return 271;
	}
	else if (iParam0 == -663299102)
	{
		return 272;
	}
	else if (iParam0 == 683047626)
	{
		return 273;
	}
	else if (iParam0 == 390201602)
	{
		return 274;
	}
	else if (iParam0 == 86520421)
	{
		return 275;
	}
	else if (iParam0 == 2067820283)
	{
		return 279;
	}
	else if (iParam0 == 482197771)
	{
		return 280;
	}
	else if (iParam0 == 819197656)
	{
		return 281;
	}
	else if (iParam0 == -2103821244)
	{
		return 276;
	}
	else if (iParam0 == -1071380347)
	{
		return 277;
	}
	else if (iParam0 == 741090084)
	{
		return 278;
	}
	else if (iParam0 == -2140431165)
	{
		return 282;
	}
	else if (iParam0 == 2035069708)
	{
		return 283;
	}
	else if (iParam0 == -1606187161)
	{
		return 284;
	}
	else if (iParam0 == 822018448)
	{
		return 285;
	}
	else if (iParam0 == -2115793025)
	{
		return 286;
	}
	else if (iParam0 == -1009268949)
	{
		return 287;
	}
	else if (iParam0 == -570033273)
	{
		return 288;
	}
	else if (iParam0 == 6774487)
	{
		return 289;
	}
	else if (iParam0 == -1404136503)
	{
		return 290;
	}
	else if (iParam0 == 1873600305)
	{
		return 291;
	}
	else if (iParam0 == -405626514)
	{
		return 292;
	}
	else if (iParam0 == -674927303)
	{
		return 293;
	}
	else if (iParam0 == -255678177)
	{
		return 294;
	}
	else if (iParam0 == -440768424)
	{
		return 296;
	}
	else if (iParam0 == 1491277511)
	{
		return 297;
	}
	else if (iParam0 == -609625092)
	{
		return 295;
	}
	else if (iParam0 == -1523428744)
	{
		return 298;
	}
	else if (iParam0 == -1558399629)
	{
		return 299;
	}
	else if (iParam0 == 1026149675)
	{
		return 300;
	}
	else if (iParam0 == -618617997)
	{
		return 301;
	}
	else if (iParam0 == -1289178744)
	{
		return 302;
	}
	else if (iParam0 == -1842748181)
	{
		return 303;
	}
	else if (iParam0 == -312295511)
	{
		return 304;
	}
	else if (iParam0 == -1649536104)
	{
		return 305;
	}
	else if (iParam0 == 1180875963)
	{
		return 306;
	}
	else if (iParam0 == -1590337689)
	{
		return 307;
	}
	else if (iParam0 == 682434785)
	{
		return 308;
	}
	else if (iParam0 == -1912017790)
	{
		return 309;
	}
	else if (iParam0 == 941494461)
	{
		return 310;
	}
	else if (iParam0 == 989294410)
	{
		return 311;
	}
	else if (iParam0 == -1758137366)
	{
		return 312;
	}
	else if (iParam0 == 272929391)
	{
		return 313;
	}
	else if (iParam0 == -2048333973)
	{
		return 314;
	}
	else if (iParam0 == 1034187331)
	{
		return 315;
	}
	else if (iParam0 == -239841468)
	{
		return 316;
	}
	else if (iParam0 == 627535535)
	{
		return 317;
	}
	else if (iParam0 == 1886268224)
	{
		return 318;
	}
	else if (iParam0 == 1234311532)
	{
		return 319;
	}
	else if (iParam0 == -1405937764)
	{
		return 320;
	}
	else if (iParam0 == 719660200)
	{
		return 321;
	}
	else if (iParam0 == -982130927)
	{
		return 322;
	}
	else if (iParam0 == Global_73804)
	{
		return 245;
	}
	else if (iParam0 == Global_73806)
	{
		return 324;
	}
	else if (iParam0 == 223240013)
	{
		return 325;
	}
	else if (iParam0 == 1504306544)
	{
		return 326;
	}
	else if (iParam0 == 1939284556)
	{
		return 327;
	}
	else if (iParam0 == 917809321)
	{
		return 328;
	}
	else if (iParam0 == 562680400)
	{
		return 329;
	}
	else if (iParam0 == 1897744184)
	{
		return 330;
	}
	else if (iParam0 == -32236122)
	{
		return 331;
	}
	else if (iParam0 == 884483972)
	{
		return 332;
	}
	else if (iParam0 == -1210451983)
	{
		return 333;
	}
	else if (iParam0 == -1881846085)
	{
		return 334;
	}
	else if (iParam0 == 159274291)
	{
		return 335;
	}
	else if (iParam0 == 433954513)
	{
		return 336;
	}
	else if (iParam0 == -1281684762)
	{
		return 337;
	}
	else if (iParam0 == -1763555241)
	{
		return 338;
	}
	else if (iParam0 == -749299473)
	{
		return 339;
	}
	else if (iParam0 == -975345305)
	{
		return 340;
	}
	else if (iParam0 == -1700874274)
	{
		return 341;
	}
	else if (iParam0 == -392675425)
	{
		return 342;
	}
	else if (iParam0 == 1043222410)
	{
		return 343;
	}
	else if (iParam0 == -1386191424)
	{
		return 344;
	}
	else if (iParam0 == 1565978651)
	{
		return 345;
	}
	else if (iParam0 == 1036591958)
	{
		return 346;
	}
	else if (iParam0 == -32878452)
	{
		return 347;
	}
	else if (iParam0 == -42959138)
	{
		return 348;
	}
	else if (iParam0 == -1984275979)
	{
		return 349;
	}
	else if (iParam0 == -1007528109)
	{
		return 350;
	}
	else if (iParam0 == -1523619738)
	{
		return 351;
	}
	else if (iParam0 == 1392481335)
	{
		return 352;
	}
	else if (iParam0 == -998177792)
	{
		return 353;
	}
	else if (iParam0 == 1841130506)
	{
		return 354;
	}
	else if (iParam0 == 2049897956)
	{
		return 355;
	}
	else if (iParam0 == -1242608589)
	{
		return 356;
	}
	else if (iParam0 == 1483171323)
	{
		return 358;
	}
	else if (iParam0 == 886810209)
	{
		return 359;
	}
	else if (iParam0 == -1693015116)
	{
		return 360;
	}
	else if (iParam0 == -692292317)
	{
		return 361;
	}
	else if (iParam0 == -1435527158)
	{
		return 362;
	}
	else if (iParam0 == 1181327175)
	{
		return 363;
	}
	else if (iParam0 == 1489874736)
	{
		return 364;
	}
	else if (iParam0 == -212993243)
	{
		return 365;
	}
	else if (iParam0 == 447548909)
	{
		return 366;
	}
	else if (iParam0 == 1561920505)
	{
		return 367;
	}
	else if (iParam0 == -1848994066)
	{
		return 368;
	}
	else if (iParam0 == 1741861769)
	{
		return 369;
	}
	else if (iParam0 == 1104234922)
	{
		return 370;
	}
	else if (iParam0 == 1871995513)
	{
		return 371;
	}
	else if (iParam0 == 1352136073)
	{
		return 372;
	}
	else if (iParam0 == -313185164)
	{
		return 373;
	}
	else if (iParam0 == -2079788230)
	{
		return 374;
	}
	else if (iParam0 == 600450546)
	{
		return 375;
	}
	else if (iParam0 == -410205223)
	{
		return 376;
	}
	else if (iParam0 == 867799010)
	{
		return 377;
	}
	else if (iParam0 == -1529242755)
	{
		return 378;
	}
	else if (iParam0 == 903794909)
	{
		return 379;
	}
	else if (iParam0 == -1532697517)
	{
		return 380;
	}
	else if (iParam0 == 15219735)
	{
		return 381;
	}
	else if (iParam0 == 661493923)
	{
		return 382;
	}
	else if (iParam0 == 838982985)
	{
		return 383;
	}
	else if (iParam0 == -391595372)
	{
		return 384;
	}
	else if (iParam0 == -121446169)
	{
		return 385;
	}
	else if (iParam0 == 1909189272)
	{
		return 386;
	}
	else if (iParam0 == 1617472902)
	{
		return 387;
	}
	else if (iParam0 == -1267543371)
	{
		return 388;
	}
	else if (iParam0 == 931280609)
	{
		return 389;
	}
	else if (iParam0 == 1046206681)
	{
		return 390;
	}
	else if (iParam0 == -1259134696)
	{
		return 391;
	}
	else if (iParam0 == 1115909093)
	{
		return 392;
	}
	else if (iParam0 == 1031562256)
	{
		return 393;
	}
	else if (iParam0 == -376434238)
	{
		return 394;
	}
	else if (iParam0 == -986944621)
	{
		return 395;
	}
	else if (iParam0 == -1134706562)
	{
		return 396;
	}
	else if (iParam0 == -2120700196)
	{
		return 397;
	}
	else if (iParam0 == -214906006)
	{
		return 398;
	}
	else if (iParam0 == -988501280)
	{
		return 399;
	}
	else if (iParam0 == 1254014755)
	{
		return 400;
	}
	else if (iParam0 == -726768679)
	{
		return 401;
	}
	else if (iParam0 == 1945374990)
	{
		return 403;
	}
	else if (iParam0 == 1653666139)
	{
		return 404;
	}
	else if (iParam0 == 500482303)
	{
		return 405;
	}
	else if (iParam0 == 2044532910)
	{
		return 406;
	}
	else if (iParam0 == -638562243)
	{
		return 407;
	}
	else if (iParam0 == 1692272545)
	{
		return 408;
	}
	else if (iParam0 == 2069146067)
	{
		return 409;
	}
	else if (iParam0 == -420911112)
	{
		return 410;
	}
	else if (iParam0 == 321186144)
	{
		return 411;
	}
	else if (iParam0 == -54332285)
	{
		return 412;
	}
	else if (iParam0 == 2016857647)
	{
		return 415;
	}
	else if (iParam0 == -227741703)
	{
		return 416;
	}
	else if (iParam0 == 627094268)
	{
		return 417;
	}
	else if (iParam0 == -1450650718)
	{
		return 418;
	}
	else if (iParam0 == -808831384)
	{
		return 419;
	}
	else if (iParam0 == 1337041428)
	{
		return 420;
	}
	else if (iParam0 == 850565707)
	{
		return 421;
	}
	else if (iParam0 == 884422927)
	{
		return 422;
	}
	else if (iParam0 == -1137532101)
	{
		return 423;
	}
	else if (iParam0 == -808457413)
	{
		return 424;
	}
	else if (iParam0 == -307958377)
	{
		return 413;
	}
	else if (iParam0 == 345756458)
	{
		return 414;
	}
	else if (iParam0 == -801550069)
	{
		return 425;
	}
	else if (iParam0 == 679453769)
	{
		return 426;
	}
	else if (iParam0 == 1909700336)
	{
		return 427;
	}
	else if (iParam0 == 2139203625)
	{
		return 428;
	}
	else if (iParam0 == -1890996696)
	{
		return 429;
	}
	else if (iParam0 == 2038858402)
	{
		return 430;
	}
	else if (iParam0 == -1146969353)
	{
		return 431;
	}
	else if (iParam0 == 1542143200)
	{
		return 432;
	}
	else if (iParam0 == -579747861)
	{
		return 433;
	}
	else if (iParam0 == 444994115)
	{
		return 434;
	}
	else if (iParam0 == 1637620610)
	{
		return 435;
	}
	else if (iParam0 == -755532233)
	{
		return 436;
	}
	else if (iParam0 == 540101442)
	{
		return 437;
	}
	else if (iParam0 == -1106120762)
	{
		return 438;
	}
	else if (iParam0 == -1478704292)
	{
		return 439;
	}
	else if (iParam0 == -2096690334)
	{
		return 440;
	}
	else if (iParam0 == -956048545)
	{
		return 450;
	}
	else if (iParam0 == 1886712733)
	{
		return 451;
	}
	else if (iParam0 == 728614474)
	{
		return 452;
	}
	else if (iParam0 == -1255698084)
	{
		return 453;
	}
	else if (iParam0 == 1074326203)
	{
		return 454;
	}
	else if (iParam0 == -784816453)
	{
		return 455;
	}
	else if (iParam0 == 534258863)
	{
		return 456;
	}
	else if (iParam0 == 1641462412)
	{
		return 457;
	}
	else if (iParam0 == -591651781)
	{
		return 458;
	}
	else if (iParam0 == -49115651)
	{
		return 441;
	}
	else if (iParam0 == 1456744817)
	{
		return 442;
	}
	else if (iParam0 == 1591739866)
	{
		return 443;
	}
	else if (iParam0 == -507495760)
	{
		return 444;
	}
	else if (iParam0 == -1168952148)
	{
		return 445;
	}
	else if (iParam0 == 1279262537)
	{
		return 446;
	}
	else if (iParam0 == -1566607184)
	{
		return 447;
	}
	else if (iParam0 == -331467772)
	{
		return 448;
	}
	else if (iParam0 == -286046740)
	{
		return 449;
	}
	else if (iParam0 == 1044193113)
	{
		return 459;
	}
	else if (iParam0 == 686471183)
	{
		return 460;
	}
	else if (iParam0 == -941272559)
	{
		return 461;
	}
	else if (iParam0 == -1829436850)
	{
		return 462;
	}
	else if (iParam0 == -682108547)
	{
		return 463;
	}
	else if (iParam0 == 722226637)
	{
		return 464;
	}
	else if (iParam0 == 1854776567)
	{
		return 465;
	}
	else if (iParam0 == 1862507111)
	{
		return 466;
	}
	else if (iParam0 == -882629065)
	{
		return 467;
	}
	else if (iParam0 == -362150785)
	{
		return 468;
	}
	else if (iParam0 == 310284501)
	{
		return 469;
	}
	else if (iParam0 == 916547552)
	{
		return 470;
	}
	else if (iParam0 == -1804415708)
	{
		return 471;
	}
	else if (iParam0 == 1934384720)
	{
		return 472;
	}
	else if (iParam0 == -1349095620)
	{
		return 473;
	}
	else if (iParam0 == -208911803)
	{
		return 474;
	}
	else if (iParam0 == -324618589)
	{
		return 475;
	}
	else if (iParam0 == -664141241)
	{
		return 476;
	}
	else if (iParam0 == 1323778901)
	{
		return 477;
	}
	else if (iParam0 == -1620126302)
	{
		return 478;
	}
	else if (iParam0 == -447711397)
	{
		return 479;
	}
	else if (iParam0 == 1938952078)
	{
		return 480;
	}
	else if (iParam0 == -907477130)
	{
		return 481;
	}
	else if (iParam0 == -1987130134)
	{
		return 482;
	}
	else if (iParam0 == 1747439474)
	{
		return 483;
	}
	else if (iParam0 == 469291905)
	{
		return 484;
	}
	else if (iParam0 == -48031959)
	{
		return 485;
	}
	else if (iParam0 == 394110044)
	{
		return 488;
	}
	else if (iParam0 == 1284356689)
	{
		return 486;
	}
	else if (iParam0 == -1254331310)
	{
		return 487;
	}
	else if (iParam0 == 301304410)
	{
		return 489;
	}
	else if (iParam0 == 1456336509)
	{
		return 490;
	}
	else if (iParam0 == 340154634)
	{
		return 491;
	}
	else if (iParam0 == -1132721664)
	{
		return 492;
	}
	else if (iParam0 == -1960756985)
	{
		return 493;
	}
	else if (iParam0 == 960812448)
	{
		return 494;
	}
	else if (iParam0 == 83136452)
	{
		return 495;
	}
	else if (iParam0 == 740289177)
	{
		return 496;
	}
	else if (iParam0 == 2031587082)
	{
		return 497;
	}
	else if (iParam0 == 1693751655)
	{
		return 498;
	}
	else if (iParam0 == -834353991)
	{
		return 499;
	}
	else if (iParam0 == 872704284)
	{
		return 500;
	}
	else if (iParam0 == 987469656)
	{
		return 501;
	}
	else if (iParam0 == -1756021720)
	{
		return 502;
	}
	else if (iParam0 == 1118611807)
	{
		return 503;
	}
	else if (iParam0 == 409049982)
	{
		return 504;
	}
	else if (iParam0 == 408825843)
	{
		return 505;
	}
	else if (iParam0 == -2098954619)
	{
		return 506;
	}
	else if (iParam0 == 2134119907)
	{
		return 507;
	}
	else if (iParam0 == 67753863)
	{
		return 508;
	}
	else if (iParam0 == -631322662)
	{
		return 509;
	}
	else if (iParam0 == -838099166)
	{
		return 510;
	}
	else if (iParam0 == -1810806490)
	{
		return 511;
	}
	else if (iParam0 == -1358197432)
	{
		return 512;
	}
	else if (iParam0 == 1492612435)
	{
		return 513;
	}
	else if (iParam0 == 1181339704)
	{
		return 514;
	}
	else if (iParam0 == -1728685474)
	{
		return 515;
	}
	else if (iParam0 == 1830407356)
	{
		return 517;
	}
	else if (iParam0 == -2124201592)
	{
		return 516;
	}
	return -1;
}

int func_385()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2097152[func_263()].f_5500.f_1[iVar0] != 0)
		{
			iVar1 = Global_2097152[func_263()].f_5500.f_1[iVar0];
			iVar2 = func_348(245, 0);
			if (iVar0 == (iVar2 / 32))
			{
				unk_0x0674E58A79778E99(&iVar1, (iVar2 % 32));
			}
			iVar3 = func_348(323, 0);
			if (iVar0 == (iVar3 / 32))
			{
				unk_0x0674E58A79778E99(&iVar1, (iVar3 % 32));
			}
			iVar4 = func_348(324, 0);
			if (iVar0 == (iVar4 / 32))
			{
				unk_0x0674E58A79778E99(&iVar1, (iVar4 % 32));
			}
			iVar5 = func_348(357, 0);
			if (iVar0 == (iVar5 / 32))
			{
				unk_0x0674E58A79778E99(&iVar1, (iVar5 % 32));
			}
			iVar6 = func_348(402, 0);
			if (iVar0 == (iVar6 / 32))
			{
				unk_0x0674E58A79778E99(&iVar1, (iVar6 % 32));
			}
			if (iVar1 != 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_386(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_387(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
		case 8:
			return 1;
			break;
	}
	return 0;
}

int func_388(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return Global_1388200;
	}
	if (iParam0 != func_271())
	{
		return Global_1590535[iParam0].f_99;
	}
	return 0;
}

int func_389()
{
	return Global_968394;
}

bool func_390(int iParam0)
{
	return func_391(iParam0);
}

bool func_391(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_13.f_1, 0);
}

void func_392()
{
	Global_1575101 = 0;
	Global_1575102 = 0;
}

int func_393()
{
	return Global_968397;
}

bool func_394(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 8;
}

bool func_395(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 6;
}

bool func_396(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 5;
}

bool func_397()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_399();
	}
	return func_398(Global_4456448.f_194990);
}

int func_398(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4999[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_399()
{
	return Global_2450632.f_16;
}

bool func_400()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_402();
	}
	return func_401(Global_4456448.f_194990);
}

int func_401(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4990[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_402()
{
	return Global_2450632.f_15;
}

void func_403()
{
	Global_2450632.f_569.f_13 = 1;
}

var func_404()
{
	return Global_2450632.f_569.f_13;
}

bool func_405()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_569.f_1, 0);
}

int func_406()
{
	if (Global_1312448)
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1731, 23))
	{
		return 1;
	}
	if (func_291())
	{
		return 1;
	}
	if (func_290())
	{
		return 1;
	}
	iVar0 = Global_1388048[func_100(-1)];
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 7))
	{
		unk_0x5D96D8530B3D0904(&(Global_2537071.f_1731), 23);
		return 1;
	}
	return 0;
}

bool func_407(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_39.f_18, 14);
}

bool func_408()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_142, 2);
}

void func_409(char* sParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 11:
			StringCopy(sParam0, "MG_GOLF_", 32);
			break;
		
		case 13:
			StringCopy(sParam0, "MG_RANGE_", 32);
			break;
		
		case 12:
			StringCopy(sParam0, "MG_TENNIS_", 32);
			break;
		
		case 15:
			StringCopy(sParam0, "MG_ARM_", 32);
			break;
		
		case 14:
			StringCopy(sParam0, "MG_DARTS_", 32);
			break;
		
		case 122:
			StringCopy(sParam0, "MG_PILOT_", 32);
			break;
		
		case 5:
			StringCopy(sParam0, "IMPROMPTU_DM", 32);
			return;
			break;
		
		case 148:
			StringCopy(sParam0, "IMPROMPTU_DM", 32);
			return;
			break;
	}
	StringIntConCat(sParam0, iParam2, 32);
}

void func_410(char* sParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 32:
			StringCopy(sParam0, "RACE_TO_POINT_", 32);
			break;
		
		case 25:
			StringCopy(sParam0, "PROSTITUTES_", 32);
			break;
		
		case 19:
			StringCopy(sParam0, "IMPORT_EXPORT_", 32);
			break;
		
		case 30:
			StringCopy(sParam0, "HOLD_UPS_", 32);
			break;
		
		case 31:
			StringCopy(sParam0, "CREATE_DROP_", 32);
			break;
	}
	StringIntConCat(sParam0, iParam2, 32);
}

int func_411(bool bParam0)
{
	if (!func_426())
	{
		return 0;
	}
	if (unk_0x5E109EC687D2605A(45))
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	iVar2 = func_1038(756, -1, 0);
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_425(iVar2, iVar0, bParam0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 9)
	{
		func_412(45, 1);
		return 1;
	}
	return 0;
}

int func_412(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_413(iParam0, iParam1);
}

int func_413(int iParam0, int iParam1)
{
	if (func_31(14) && !func_424(iParam0))
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
	if (func_423(&Global_4270065))
	{
		if (func_421(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_414(&Global_4270065, iParam0))
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

int func_414(var uParam0, int iParam1)
{
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_31(14) && !func_424(iParam1))
	{
		return 0;
	}
	if (func_421(uParam0, iParam1))
	{
		return 0;
	}
	if (func_420(uParam0) < 0f)
	{
		func_419(uParam0, 0);
	}
	func_417(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_415(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_415(var uParam0, int iParam1)
{
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_31(14) && !func_424(iParam1))
	{
		return 0;
	}
	if (func_421(uParam0, iParam1))
	{
		return 0;
	}
	if (func_420(uParam0) < 0f)
	{
		func_419(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_416(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_416(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_417(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_418(uParam0, iVar0);
		iVar0++;
	}
	func_419(uParam0, (Global_4270064 - 0,5f));
}

void func_418(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_419(var uParam0, float fParam1)
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

float func_420(var uParam0)
{
	return uParam0->f_80;
}

bool func_421(var uParam0, int iParam1)
{
	return func_422(uParam0, iParam1) != -1;
}

int func_422(var uParam0, int iParam1)
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

bool func_423(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_424(int iParam0)
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

int func_425(int iParam0, int iParam1, bool bParam2)
{
	bVar0 = unk_0xEAE0D21A50E6C7F4(iParam0, iParam1);
	if (!bParam2)
	{
		return bVar0;
	}
	switch (iParam1)
	{
		case 0:
			return bVar0;
		
		case 1:
			return bVar0;
		
		case 2:
			return bVar0;
		
		case 3:
			return bVar0;
		
		case 4:
			return bVar0;
		
		case 5:
			return bVar0;
		
		case 6:
			return bVar0;
		
		case 7:
			return bVar0;
		
		case 8:
			return bVar0;
		
		default:
	}
	return 0;
}

int func_426()
{
	if (func_428() && func_427(0))
	{
		return 1;
	}
	return 0;
}

var func_427(int iParam0)
{
	return Global_1312374[iParam0];
}

var func_428()
{
	return func_427(func_101() + 1);
}

int func_429(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_430(int iParam0, bool bParam1, bool bParam2)
{
	if (func_431())
	{
		return;
	}
	if ((func_719() == 1 || unk_0x798A3F1296751F46()) || iParam0)
	{
		func_718(0);
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

int func_431()
{
	if (func_432())
	{
		return Global_2460590;
	}
	return 0;
}

int func_432()
{
	if (Global_2460583)
	{
		return Global_2460582;
	}
	return 0;
}

int func_433(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13, int iParam14)
{
	Global_2462920 = unk_0x1C0640BA9A7327B3();
	if (((((!func_699() && !unk_0x8CD06866876216F2()) && !unk_0x0C4B4836B745568C()) && !unk_0xE57E602827E07C9D()) && !Global_2463021) && !func_698() == 63)
	{
		return 0;
	}
	if (unk_0x0C2635BB5127C8FB())
	{
		unk_0x5D29A7ED2621B332();
		return 0;
	}
	if (!unk_0x4570133D78B9B903())
	{
		func_476();
		func_471(1, 0);
		unk_0xCF2F26230DC24577();
		if (bParam10)
		{
			func_718(0);
			func_469(0);
		}
		return 0;
	}
	if (!func_1075(unk_0xD803B885F5E47A62(), 0))
	{
		if (func_57())
		{
			if (func_698() == 58)
			{
				func_468(1);
			}
			if (func_467())
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_2359302, 3))
				{
					unk_0x0674E58A79778E99(&Global_2359302, 3);
				}
			}
			return 0;
		}
	}
	if (func_466() == 4)
	{
		if (unk_0x991B1F0980C62628() == 0)
		{
			func_465(0);
		}
	}
	if (unk_0x28072FDD60CE3A6E(unk_0x16F2683693E537C9(), 1) || unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		func_471(1, 0);
		if (bParam10)
		{
			func_718(0);
			func_469(0);
		}
		return 0;
	}
	func_463();
	func_461();
	if (iParam9 == 0)
	{
	}
	if (!bParam11)
	{
		if (!func_460())
		{
			func_459();
		}
	}
	if (!func_458())
	{
		if (unk_0x798A3F1296751F46() == 1)
		{
			if (bParam1)
			{
				unk_0x7BBABEC524CBF883(0);
			}
		}
		if (Global_1323069)
		{
			if (unk_0x0C4B4836B745568C())
			{
				if (!unk_0x757EF87A33649210())
				{
					if (!unk_0xD0BB2359EC70FC37())
					{
						unk_0x53491B90E4FD0E56(0);
					}
				}
			}
		}
		if (unk_0x0F412398FEA30BD4() == 0)
		{
			if (unk_0x8BB17FEBE0394018() == 25)
			{
				unk_0xC0E5A54E1EAE1FB3();
			}
		}
		if ((func_1075(unk_0xD803B885F5E47A62(), 0) && func_1044() == 0) && !func_457(unk_0xF1EE614CA05DDE75(), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), 10f, 0))
		{
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), unk_0xF1EE614CA05DDE75(), 0, false, 0, 0);
			bParam4 = true;
		}
		iVar0 = unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9());
		if (iVar0 != 0)
		{
			bParam4 = true;
			if (func_456())
			{
				bParam2 = false;
			}
		}
		if ((Global_2451426.f_6464 || func_455(-1046478848)) && Global_2460583)
		{
			if (func_449(0))
			{
				bParam12 = true;
				if (func_448() > 800 || (func_447() && !func_431()))
				{
					if (func_446() && !func_445())
					{
						if (!unk_0x757EF87A33649210())
						{
							if (!unk_0xD0BB2359EC70FC37())
							{
								unk_0x53491B90E4FD0E56(800);
							}
						}
					}
				}
				func_444();
			}
		}
		if (unk_0xA14BB9332558B949() && (((Global_4456448.f_75705 == 6 || Global_4456448.f_75705 == 7) || Global_4456448.f_75705 == 18) || Global_4456448.f_75705 == 19))
		{
			bParam4 = true;
			func_469(1);
			bParam2 = false;
		}
		if (unk_0x5EB102898326C705(unk_0x16F2683693E537C9()))
		{
			bParam4 = true;
		}
		if (unk_0x22A8E52414415B76() || unk_0x39B7A3CCD2467CAB())
		{
			bParam4 = true;
		}
		if (bParam2 && !func_1075(unk_0xD803B885F5E47A62(), 0))
		{
			func_430(1, 0, 1);
		}
		if (((func_446() && ((unk_0x798A3F1296751F46() == 0 || bParam1 == 0) || (unk_0x4431E6BE5CF34972() && unk_0xE57E602827E07C9D()))) && unk_0x4570133D78B9B903()) && func_443())
		{
			if (!unk_0x991B1F0980C62628())
			{
				if (unk_0x23239EF74F22427E())
				{
					unk_0x71199B01895C6202(744705981);
					unk_0xF59BE6DDBCFD2F1C();
				}
			}
			vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0) };
			unk_0x790015DC92C918E2();
			iVar4 = 0;
			if (bParam4)
			{
				iVar4 = 1;
			}
			vVar5 = { iParam5, iParam6, iParam7 };
			if (iParam3 == 3)
			{
				if (func_240(vVar5))
				{
					iParam3 = 1;
				}
				else if (unk_0x91247047D142C00F(vVar1, vVar5) != 3)
				{
					iParam3 = 1;
				}
			}
			else if (iParam3 == 2)
			{
				if (func_240(vVar5))
				{
					iParam3 = 1;
				}
				else if (unk_0x91247047D142C00F(vVar1, vVar5) != 2 || unk_0x91247047D142C00F(vVar1, vVar5) != 3)
				{
					iParam3 = 1;
				}
			}
			unk_0x23F80404F3C4C299(1);
			unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 1);
			if (bParam12)
			{
				unk_0x17EFA7496495F972();
			}
			func_442();
			func_441();
			if (func_432())
			{
				if (func_440())
				{
					iVar4 = 1;
					iVar4 += 32;
					iVar4 += 16384;
					unk_0x8B64987E822F5035(Global_1315660, iVar4, func_439());
				}
				else
				{
					return 0;
				}
			}
			else if (bParam0)
			{
				if (iParam13 || func_456())
				{
					unk_0x8B64987E822F5035(unk_0x16F2683693E537C9(), (iVar4 | 32 | 128 | 16384 || iParam14), iParam3);
				}
				else
				{
					unk_0x8B64987E822F5035(unk_0x16F2683693E537C9(), (iVar4 | 32 | 128 || iParam14), iParam3);
				}
			}
			else if (iParam13 || func_456())
			{
				unk_0x8B64987E822F5035(unk_0x16F2683693E537C9(), (iVar4 | 32 | 16384 || iParam14), iParam3);
			}
			else
			{
				unk_0x8B64987E822F5035(unk_0x16F2683693E537C9(), (iVar4 | 32 || iParam14), iParam3);
			}
			StringCopy(&Global_2460630, "", 32);
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					StringCopy(&Global_2460630, unk_0x04DF2A8CF5EBE3B0(), 32);
					unk_0xA6C13961116F9033("OFF");
				}
			}
			func_465(1);
			unk_0x58D1E74A3FBADA8D(0, 0);
			if (bParam2 && !func_1075(unk_0xD803B885F5E47A62(), 0))
			{
				func_430(1, 0, 1);
			}
		}
		if (func_466() == 1)
		{
			if (func_432())
			{
				if (unk_0xC1ACDB7F0AF2D095())
				{
					if (Global_2460590)
					{
						Global_2460590 = 0;
					}
					if (Global_2537071.f_6601 != -1)
					{
						func_438();
					}
					if (unk_0xC844350D5D58C99A(Global_1315660))
					{
						unk_0x73270B3C9CC833FD(Global_1315660, false, 1);
						unk_0xEBA53F35D0085654(&Global_1315660);
					}
					func_430(0, 0, 1);
					if (!unk_0x7BCE0E6DD4A1F749())
					{
						if (func_74())
						{
							unk_0x68619D16FD876EAA(1);
						}
						unk_0x82E51BCA72537B6C(800);
					}
					func_465(2);
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x991B1F0980C62628())
			{
				if (unk_0x19EC8D83154D7CC1() != 3)
				{
					if (unk_0x00A15D69BCAA5267() > 2)
					{
						func_435();
						func_430(0, 0, 1);
						if (((func_434() && unk_0x1F045D4082B1ADB2() == 0) && unk_0xE18B5B3CCCFB7FA3() == 0) && unk_0xF024BD99B321A898() == 0)
						{
							if (unk_0x757EF87A33649210())
							{
								unk_0x82E51BCA72537B6C(0);
							}
						}
					}
				}
				else if (bParam2)
				{
					if (bParam8)
					{
						func_435();
					}
					func_430(0, 0, 1);
				}
			}
			if (unk_0xC1ACDB7F0AF2D095())
			{
				if (bParam8 == 0 || func_435())
				{
					if (bParam2)
					{
						if (bParam8)
						{
							func_435();
						}
						func_430(0, 0, 1);
					}
					func_465(2);
					return 1;
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

var func_434()
{
	return Global_1312846;
}

int func_435()
{
	if (unk_0x757EF87A33649210())
	{
		func_437(0);
		unk_0x9EDE7E8C5E9E3EBF();
		return 1;
	}
	if (func_436() == 3)
	{
		func_437(2);
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
		func_437(0);
		return 1;
	}
	return 0;
}

int func_436()
{
	return Global_1312467.f_19;
}

void func_437(int iParam0)
{
	if (Global_1312467.f_19 != iParam0)
	{
		Global_1312467.f_19 = iParam0;
	}
}

void func_438()
{
	Global_2537071.f_6601 = -1;
}

int func_439()
{
	return 1;
}

int func_440()
{
	if (!unk_0xC844350D5D58C99A(Global_1315660))
	{
		Global_1315660 = unk_0x36F2404464202779(25, unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()), Global_2451426.f_6465, 0f, 0, false);
		unk_0x4A4806F9D471E491(Global_1315660, false, 0);
		unk_0xE121AE1BBF90E186(Global_1315660, true);
		unk_0x73270B3C9CC833FD(Global_1315660, false, 0);
		unk_0x327AAEE25F323797(Global_1315660);
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			unk_0x7F95823861548A93(Global_1315660, unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()));
		}
		unk_0x20641932E5104B25(Global_1315660, false, 0);
		unk_0x4A4806F9D471E491(Global_1315660, false, 0);
		if (!unk_0x991B1F0980C62628())
		{
			unk_0x75AFFFF37CDAEC84(Global_1315660);
		}
	}
	if (unk_0xC844350D5D58C99A(Global_1315660) && !unk_0x437347B10A200C4B(Global_1315660, 0))
	{
		unk_0x4A4806F9D471E491(Global_1315660, false, 0);
		unk_0x1E9649458B15960F(Global_1315660, true);
		unk_0xA3BF0AA5A2608191(Global_1315660);
		unk_0x11AD11297DC58CC7(Global_1315660, 1);
		if (!unk_0x991B1F0980C62628())
		{
			unk_0x75AFFFF37CDAEC84(Global_1315660);
		}
		return 1;
	}
	return 0;
}

void func_441()
{
	if (unk_0xC844350D5D58C99A(Global_2461843))
	{
		if (unk_0x9C77D2D0559097F0(Global_2461843, 0))
		{
			if (!unk_0xAF6690C489CC6203(Global_2461843))
			{
				unk_0x73270B3C9CC833FD(Global_2461843, false, 0);
			}
			unk_0xEBA53F35D0085654(&Global_2461843);
		}
	}
}

void func_442()
{
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

int func_443()
{
	if (func_432())
	{
		if (!unk_0x757EF87A33649210())
		{
			if (!unk_0xD0BB2359EC70FC37())
			{
				if (func_448() >= 1600)
				{
					unk_0x53491B90E4FD0E56(0);
					return 1;
				}
			}
			return 0;
		}
	}
	return 1;
}

void func_444()
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

bool func_445()
{
	return Global_1590535[unk_0xD803B885F5E47A62()].f_196 != 0;
}

int func_446()
{
	if (func_466() == 0)
	{
		return 1;
	}
	return 0;
}

int func_447()
{
	if (Global_2451426.f_6464 && Global_2460583)
	{
		if (func_449(0))
		{
			if (func_446() && !unk_0x757EF87A33649210())
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
					if (!func_1075(unk_0xD803B885F5E47A62(), 0) && !func_57())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_448()
{
	if (func_432())
	{
		iVar0 = unk_0x51D1D19912234EA0((unk_0x1C0640BA9A7327B3() - Global_2460591));
		return iVar0;
	}
	return 0;
}

int func_449(int iParam0)
{
	if (func_453(unk_0xD803B885F5E47A62()) && unk_0xEAE0D21A50E6C7F4(Global_1676377.f_4, 22))
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
	if (func_452())
	{
		return 0;
	}
	if ((Global_2460584 && func_74()) || Global_2460584 == 0)
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
		if (!func_1075(unk_0xD803B885F5E47A62(), 0) && !func_57())
		{
			return 1;
		}
	}
	if (Global_2460588)
	{
		if (iParam0 == 0)
		{
			if ((Global_2451426.f_6486 == 123 || (Global_2451426.f_6486 == 124 && func_450() == 1)) || Global_2451426.f_6486 == 125)
			{
				return 1;
			}
		}
	}
	if ((Global_2451426.f_6464 || func_455(-1046478848)) && Global_2460589)
	{
		if (iParam0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_450()
{
	return func_451(unk_0xD803B885F5E47A62());
}

int func_451(int iParam0)
{
	return unk_0xDC4DD3980107166C(Global_2425662[iParam0].f_310.f_3, 28, 31);
}

bool func_452()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 11);
}

int func_453(int iParam0)
{
	if (iParam0 != func_271())
	{
		if (func_24(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_454(Global_2425662[iParam0].f_310.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_454(int iParam0)
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

int func_455(float fParam0)
{
	vVar0 = { func_110(unk_0xD803B885F5E47A62()) };
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

bool func_456()
{
	return Global_1662512.f_1767;
}

int func_457(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_458()
{
	if (func_466() == 3 || func_466() == 2)
	{
		return 1;
	}
	return 0;
}

void func_459()
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_2359302, 27))
	{
		unk_0x5D96D8530B3D0904(&Global_2359302, 27);
	}
}

bool func_460()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 27);
}

void func_461()
{
	if (func_462())
	{
	}
	if (unk_0xED4934AFB6EC6451("MenuMGTrevorIn"))
	{
		unk_0x9A1335ECD7BD117F("MenuMGTrevorIn");
	}
	if (unk_0xED4934AFB6EC6451("MenuMGMichaelIn"))
	{
		unk_0x9A1335ECD7BD117F("MenuMGMichaelIn");
	}
	if (unk_0xED4934AFB6EC6451("MenuMGFranklinIn"))
	{
		unk_0x9A1335ECD7BD117F("MenuMGFranklinIn");
	}
	if (unk_0xED4934AFB6EC6451("MenuMGTrevorOut"))
	{
		unk_0x9A1335ECD7BD117F("MenuMGTrevorOut");
	}
	if (unk_0xED4934AFB6EC6451("MenuMGMichaelOut"))
	{
		unk_0x9A1335ECD7BD117F("MenuMGMichaelOut");
	}
	if (unk_0xED4934AFB6EC6451("MenuMGFranklinOut"))
	{
		unk_0x9A1335ECD7BD117F("MenuMGFranklinOut");
	}
}

int func_462()
{
	if (unk_0xED4934AFB6EC6451("MenuMGIn"))
	{
		unk_0x9A1335ECD7BD117F("MenuMGIn");
		iVar0 = 1;
	}
	if (unk_0xED4934AFB6EC6451("MenuMGSelectionIn"))
	{
		unk_0x9A1335ECD7BD117F("MenuMGSelectionIn");
		iVar0 = 1;
	}
	if (unk_0xED4934AFB6EC6451("MenuMGSelectionTint"))
	{
		unk_0x9A1335ECD7BD117F("MenuMGSelectionTint");
		iVar0 = 1;
	}
	if (unk_0xED4934AFB6EC6451("MenuMGTournamentIn"))
	{
		unk_0x9A1335ECD7BD117F("MenuMGTournamentIn");
		iVar0 = 1;
	}
	if (unk_0xED4934AFB6EC6451("MenuMGHeistIn"))
	{
		unk_0x9A1335ECD7BD117F("MenuMGHeistIn");
		iVar0 = 1;
	}
	if (unk_0xED4934AFB6EC6451("MenuMGHeistTint"))
	{
		unk_0x9A1335ECD7BD117F("MenuMGHeistTint");
		iVar0 = 1;
	}
	if (unk_0xED4934AFB6EC6451("MenuMGHeistIntro"))
	{
		unk_0x9A1335ECD7BD117F("MenuMGHeistIntro");
		iVar0 = 1;
	}
	if (unk_0xED4934AFB6EC6451("MenuMGTournamentTint"))
	{
		unk_0x9A1335ECD7BD117F("MenuMGTournamentTint");
		iVar0 = 1;
	}
	if (unk_0xED4934AFB6EC6451("MenuMGRemixIn"))
	{
		unk_0x9A1335ECD7BD117F("MenuMGRemixIn");
		iVar0 = 1;
	}
	if (unk_0xED4934AFB6EC6451("MenuSurvivalAlienIn"))
	{
		unk_0x9A1335ECD7BD117F("MenuSurvivalAlienIn");
		iVar0 = 1;
	}
	return iVar0;
}

void func_463()
{
	unk_0x3FC8DBCC154CA56B();
	func_464();
	unk_0x3584F71E5CA29322(2);
	unk_0x3584F71E5CA29322(1);
	unk_0x3584F71E5CA29322(3);
	unk_0x3584F71E5CA29322(4);
	unk_0x3584F71E5CA29322(13);
	unk_0x3584F71E5CA29322(11);
	unk_0x3584F71E5CA29322(12);
	unk_0x3584F71E5CA29322(18);
	if (!Global_1377170.f_1505)
	{
		unk_0x3584F71E5CA29322(15);
	}
	bVar0 = false;
	bVar0 = func_797("HQRHELP");
	if (!bVar0)
	{
		unk_0xE19C2AAC820D8ED5();
	}
	func_258(0);
	unk_0x0FB033EB6C6ED01F(0);
	func_258(0);
	unk_0x38C3A68D7861DCFD(2, 199, 1);
}

void func_464()
{
	unk_0x3584F71E5CA29322(7);
	unk_0x3584F71E5CA29322(6);
	unk_0x3584F71E5CA29322(8);
	unk_0x3584F71E5CA29322(9);
}

void func_465(int iParam0)
{
	if (iParam0 == 0)
	{
		Global_2462918 = 0;
	}
	Global_1312467.f_18 = iParam0;
}

int func_466()
{
	return Global_1312467.f_18;
}

bool func_467()
{
	return Global_2461177;
}

void func_468(int iParam0)
{
	Global_2461177 = iParam0;
}

void func_469(int iParam0)
{
	func_470();
	if (iParam0 == 0)
	{
		if (unk_0x1F045D4082B1ADB2())
		{
			return;
		}
	}
	if (func_719() == 0 || unk_0x798A3F1296751F46())
	{
		func_718(1);
		unk_0x68619D16FD876EAA(0);
		unk_0x68619D16FD876EAA(0);
	}
}

void func_470()
{
	Global_2462226 = 1;
}

void func_471(int iParam0, bool bParam1)
{
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) || unk_0x28072FDD60CE3A6E(unk_0x16F2683693E537C9(), 1))
	{
		if (func_1044() == 0)
		{
			unk_0xFF66044ABB845625(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), 0f, 0, (func_473(unk_0xD803B885F5E47A62(), 1) && !bParam1), iParam0);
			func_472();
		}
		else if (unk_0x28072FDD60CE3A6E(unk_0x16F2683693E537C9(), 1))
		{
			unk_0x7423ABD46BB1B664(unk_0x16F2683693E537C9());
		}
		else
		{
			unk_0x5006E314C731BB09(unk_0x16F2683693E537C9());
		}
	}
	unk_0x8BC07E3DF067E385(unk_0xD803B885F5E47A62());
	unk_0xE06AE2069F4F879A();
}

void func_472()
{
	Global_2405072.f_45.f_317 = 1;
}

bool func_473(int iParam0, bool bParam1)
{
	if (func_1044() != 0)
	{
		return func_475(iParam0) != 0;
	}
	return func_474(iParam0, bParam1, 0);
}

int func_474(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_390(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[iParam0] == -1)
	{
		return 0;
	}
	return 1;
}

int func_475(int iParam0)
{
	if (func_24(iParam0, 0, 1))
	{
		return Global_2425662[iParam0].f_1;
	}
	return 0;
}

void func_476()
{
	if (unk_0xD803B885F5E47A62() != func_271())
	{
		if (func_696(unk_0xD803B885F5E47A62()))
		{
			Global_1628237[unk_0xD803B885F5E47A62()].f_595 = 0;
			unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), true);
			unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 1);
			unk_0x76D5D8AF296F50CE(unk_0x16F2683693E537C9(), 1048576000);
			unk_0xDDB2A6FA0667363C(unk_0x16F2683693E537C9());
			unk_0x20B63A158CBAF5A5(unk_0x16F2683693E537C9(), -455129387);
			iVar0 = 2600;
			unk_0x093A734E5AEA758F(unk_0x16F2683693E537C9(), iVar0);
			unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), iVar0, 0);
			unk_0x00A6D36F507FD6EA(unk_0x16F2683693E537C9(), 0);
			unk_0x3955C4A6033FF1E4(unk_0x16F2683693E537C9(), "", "");
			unk_0x64F9F278AB9DCA2C(unk_0x16F2683693E537C9(), 5, 0, 0, 0);
			unk_0xBD244ECF7D37AB72(unk_0x16F2683693E537C9());
			unk_0x52C8FE2C636870B7(unk_0x16F2683693E537C9());
			unk_0x9A28E8CB86CD4694(unk_0x16F2683693E537C9(), 0, 0, 0, false);
			unk_0x3BFC3B9ADD2EE7B7(unk_0x16F2683693E537C9(), 0);
			if (unk_0xDCCE25EA1C1D1F76(unk_0x16F2683693E537C9()))
			{
				unk_0xE731059548189243(unk_0x16F2683693E537C9(), 1);
			}
			unk_0xFFE16595F5CF81E9(unk_0x16F2683693E537C9());
			Var1 = 12;
			Var1.f_13 = 12;
			Var1.f_26 = 12;
			Var1.f_39 = 9;
			Var1.f_49 = 9;
			iVar66 = -1;
			Var1[0] = func_356(387, iVar66, -1);
			Var1[1] = func_356(388, iVar66, -1);
			Var1[2] = func_356(389, iVar66, -1);
			Var1[3] = func_356(390, iVar66, -1);
			Var1[4] = func_356(391, iVar66, -1);
			Var1[5] = func_356(392, iVar66, -1);
			Var1[6] = func_356(393, iVar66, -1);
			Var1[7] = func_356(394, iVar66, -1);
			Var1[8] = func_356(395, iVar66, -1);
			Var1[9] = func_356(396, iVar66, -1);
			Var1[10] = func_356(397, iVar66, -1);
			Var1[11] = func_356(398, iVar66, -1);
			Var1.f_13[0] = func_356(399, iVar66, -1);
			Var1.f_13[1] = (func_356(400, iVar66, -1) + func_356(18092, iVar66, -1));
			Var1.f_13[2] = func_356(401, iVar66, -1);
			Var1.f_13[3] = (func_356(402, iVar66, -1) + func_356(18093, iVar66, -1));
			Var1.f_13[4] = func_356(403, iVar66, -1);
			Var1.f_13[5] = func_356(404, iVar66, -1);
			Var1.f_13[6] = func_356(405, iVar66, -1);
			Var1.f_13[7] = func_356(406, iVar66, -1);
			Var1.f_13[8] = (func_356(407, iVar66, -1) + func_356(18094, iVar66, -1));
			Var1.f_13[9] = func_356(408, iVar66, -1);
			Var1.f_13[10] = func_356(409, iVar66, -1);
			Var1.f_13[11] = (func_356(410, iVar66, -1) + func_356(18095, iVar66, -1));
			Var1.f_26[0] = func_356(411, iVar66, -1);
			Var1.f_26[1] = func_356(412, iVar66, -1);
			Var1.f_26[2] = func_356(413, iVar66, -1);
			Var1.f_26[3] = func_356(414, iVar66, -1);
			Var1.f_26[4] = func_356(415, iVar66, -1);
			Var1.f_26[5] = func_356(416, iVar66, -1);
			Var1.f_26[6] = func_356(417, iVar66, -1);
			Var1.f_26[7] = func_356(418, iVar66, -1);
			Var1.f_26[8] = func_356(419, iVar66, -1);
			Var1.f_26[9] = func_356(420, iVar66, -1);
			Var1.f_26[10] = func_356(421, iVar66, -1);
			Var1.f_26[11] = func_356(422, iVar66, -1);
			Var1.f_39[0] = func_356(423, iVar66, -1);
			Var1.f_39[1] = func_356(424, iVar66, -1);
			Var1.f_39[2] = func_356(425, iVar66, -1);
			Var1.f_39[3] = func_356(426, iVar66, -1);
			Var1.f_39[4] = func_356(427, iVar66, -1);
			Var1.f_39[5] = func_356(428, iVar66, -1);
			Var1.f_39[6] = func_356(429, iVar66, -1);
			Var1.f_39[7] = func_356(430, iVar66, -1);
			Var1.f_39[8] = func_356(431, iVar66, -1);
			Var1.f_49[0] = func_356(432, iVar66, -1);
			Var1.f_49[1] = func_356(433, iVar66, -1);
			Var1.f_49[2] = func_356(434, iVar66, -1);
			Var1.f_49[3] = func_356(435, iVar66, -1);
			Var1.f_49[4] = func_356(436, iVar66, -1);
			Var1.f_49[5] = func_356(437, iVar66, -1);
			Var1.f_49[6] = func_356(438, iVar66, -1);
			Var1.f_49[7] = func_356(439, iVar66, -1);
			Var1.f_49[8] = func_356(440, iVar66, -1);
			if (func_296(161, -1))
			{
				Var1.f_59 = func_1038(2051, iVar66, 0);
			}
			else
			{
				Var1.f_59 = func_1038(752, iVar66, 0);
			}
			Var1.f_60 = func_1038(753, iVar66, 0);
			Var1.f_61 = func_1038(754, iVar66, 0);
			func_477(unk_0x16F2683693E537C9(), &Var1, 0, 0, 1, 1);
		}
	}
}

void func_477(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0) || iParam5)
	{
		iVar0 = func_33(iParam0);
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				if (bParam4)
				{
					if (uParam1->f_13[iVar3] != 0 && uParam1->f_13[iVar3] >= unk_0xD2C792E5A65B6BF1(iParam0, iVar3))
					{
						uParam1->f_13[iVar3] = 0;
					}
					if ((*uParam1)[iVar3] != 0 && (*uParam1)[iVar3] >= unk_0x0F84621831DD8D8A(iParam0, iVar3, uParam1->f_13[iVar3]))
					{
						(*uParam1)[iVar3] = 0;
					}
				}
				unk_0x64F9F278AB9DCA2C(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (bParam4)
			{
				if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
				{
					if (uParam1->f_39[iVar3] >= unk_0xB0D40A53430D217C(iParam0, iVar3))
					{
						uParam1->f_39[iVar3] = -1;
					}
					else if (uParam1->f_49[iVar3] >= unk_0xFEDCD54A497F3495(iParam0, iVar3, uParam1->f_39[iVar3]))
					{
						uParam1->f_49[iVar3] = 0;
					}
				}
			}
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				unk_0x9A28E8CB86CD4694(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
			}
			else
			{
				unk_0x3BFC3B9ADD2EE7B7(iParam0, iVar3);
			}
			iVar3++;
		}
		if (func_32(iVar0))
		{
			Global_111638.f_2358.f_539[iVar0].f_59 = uParam1->f_59;
			Global_111638.f_2358.f_539[iVar0].f_60 = uParam1->f_60;
			Global_111638.f_2358.f_539[iVar0].f_61 = uParam1->f_61;
			if (func_695(iParam0, iVar1, &iVar2, 0))
			{
				func_680(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_111638.f_2358.f_539[iVar0].f_62 = uParam1->f_62;
			Global_111638.f_2358.f_539[iVar0].f_63 = uParam1->f_63;
			Global_111638.f_2358.f_539[iVar0].f_64 = uParam1->f_64;
			if (func_621(iParam0, iVar1, &iVar2))
			{
				func_680(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (unk_0x8CD06866876216F2() && unk_0x134B62B726CEC8E6(iParam0) == unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			bVar4 = func_618(iParam0);
			func_747(753, uParam1->f_60, Global_76431, 1, 0);
			func_747(754, uParam1->f_61, Global_76431, 1, 0);
			iVar5 = func_617(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == 1885233650)
				{
					iVar6 = func_615(iVar5);
				}
				else if (iVar1 == -1667301416)
				{
					iVar6 = func_613(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_484(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_76431, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = func_617(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_484(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_76431, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = func_478(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_484(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_76431, bVar4, 0, 0);
			}
		}
		if (unk_0x8CD06866876216F2() && iParam0 == unk_0x16F2683693E537C9())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == 1885233650)
			{
				iVar9 = func_615(iVar9);
			}
			else
			{
				iVar9 = func_613(iVar9);
			}
			func_747(752, iVar9, Global_76431, 1, 0);
			func_747(2051, iVar9, Global_76431, 1, 0);
			func_798(161, 1, -1, 1);
		}
		if (iVar1 == 1885233650 || iVar1 == -1667301416)
		{
			iVar10 = unk_0x4F4B24509D6989D0(iParam0, 1, unk_0x36C584991B4C183F(iParam0, 1), unk_0xDADA8E1DD0D0D9D9(iParam0, 1));
			iVar11 = unk_0xD1BC07002824FE76(iParam0, 1, unk_0x98F1B512A2CC07C5(iParam0, 1), unk_0x22286A85EDEAEC56(iParam0, 1));
			if (iVar10 == 1551873674 || iVar10 == 1058287519)
			{
				if (!unk_0x1A5A491D253EA7BA(iVar11, -2103452271, 1))
				{
					unk_0x30BBA34DD235D7FE(&Var12);
					if (iVar10 == 1551873674)
					{
						unk_0x4F79808059300187(-518535904, &Var12);
					}
					else
					{
						unk_0x4F79808059300187(530896308, &Var12);
					}
					unk_0x9A28E8CB86CD4694(iParam0, 1, Var12.f_3, Var12.f_4, false);
				}
			}
			else if (unk_0x1A5A491D253EA7BA(iVar11, -2103452271, 1))
			{
				unk_0x3BFC3B9ADD2EE7B7(iParam0, 1);
			}
		}
	}
}

int func_478(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 == -1)
	{
		return func_483(iParam3);
	}
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	iVar1 = unk_0xD1BC07002824FE76(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == 1885233650)
		{
			return func_480(unk_0x134B62B726CEC8E6(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == -1667301416)
		{
			return func_480(unk_0x134B62B726CEC8E6(iParam0), iVar1, 14, 4);
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
					iVar3 = (iVar3 + func_479(iParam0, iParam3));
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
	return func_483(iParam3);
}

int func_479(int iParam0, int iParam1)
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

int func_480(int iParam0, int iParam1, int iParam2, int iParam3)
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
					return (func_482(iParam0) + iVar18);
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
		iVar39 = unk_0xF6900DA2D9CD7BC5(iParam3, 7, -1, 0, -1, func_193(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			unk_0xC578687D5A643830(iVar37, &Var20);
			if (!unk_0x232048AB4B0E0259(Var20))
			{
				if (iParam1 == Var20.f_1)
				{
					return (func_481(iParam0, func_193(iParam2)) + iVar38);
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_481(int iParam0, int iParam1)
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

int func_482(int iParam0)
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

int func_483(int iParam0)
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

int func_484(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if (!unk_0x8CD06866876216F2())
	{
		if ((Global_1312811 != 4 && Global_1312811 != 5) && Global_1312811 != 7)
		{
			return 0;
		}
	}
	if (unk_0xEB6A8945D1AC98A1(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == unk_0x16F2683693E537C9() && Global_2425662[unk_0xD803B885F5E47A62()].f_222 == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == -1)
	{
		iParam10 = Global_76431;
	}
	Global_76432++;
	iVar5 = unk_0x134B62B726CEC8E6(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_76434[1] = { func_180(iVar5, iParam1, iParam2, -1) };
		if (!func_612(iParam3))
		{
			Global_76432 = (Global_76432 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_76432 > 1)
		{
		}
		else
		{
			func_609(iVar5, iParam1, iParam2, 1);
		}
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		unk_0xFFE16595F5CF81E9(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_76477 };
		}
		else
		{
			uVar15 = { func_605(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar15.f_16)
				{
					Global_76434[1] = { func_180(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						unk_0x64F9F278AB9DCA2C(iParam0, func_193(iVar0), Global_76434[1].f_3, Global_76434[1].f_4, unk_0xAA973E78065E07A0(iParam0, func_193(iVar0)));
					}
					else
					{
						unk_0x64F9F278AB9DCA2C(iParam0, func_193(iVar0), Global_76434[1].f_3, Global_76434[1].f_4, iParam4);
					}
					if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 1))
					{
						func_609(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_76434[1] = { func_180(iVar5, iVar0, uVar15[iVar0], -1) };
					if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar32 = 9;
							if (iParam5 == 1)
							{
								uVar32 = { Global_76494 };
							}
							else
							{
								uVar32 = { func_602(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_76434[1] = { func_180(iVar5, 14, uVar32[iVar1], -1) };
								func_601(iParam0, Global_76434[1].f_12, Global_76434[1].f_3, Global_76434[1].f_4);
								if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 1))
								{
									func_609(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == -1)
								{
									unk_0x64F9F278AB9DCA2C(iParam0, func_193(iVar0), Global_76434[1].f_3, Global_76434[1].f_4, unk_0xAA973E78065E07A0(iParam0, func_193(iVar0)));
								}
								else
								{
									unk_0x64F9F278AB9DCA2C(iParam0, func_193(iVar0), Global_76434[1].f_3, Global_76434[1].f_4, iParam4);
								}
							}
							else
							{
								func_484(iParam0, iVar0, uVar15[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 1))
							{
								func_609(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_76434[1] = { func_180(iVar5, iVar0, func_599(iParam0, iVar0, -1), -1) };
				if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 3))
				{
					uVar42 = { func_605(iVar5, 0) };
					func_484(iParam0, iVar0, uVar42[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar59 = func_598();
			if (iVar59 != -1)
			{
				func_595(iVar59, 0, iParam10);
			}
			func_593(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar60 = { func_602(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_76434[1] = { func_180(iVar5, 14, uVar60[iVar1], -1) };
			func_601(iParam0, Global_76434[1].f_12, Global_76434[1].f_3, Global_76434[1].f_4);
			if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 1))
			{
				func_609(iVar5, 14, uVar60[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_76432 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_591(iParam0, iVar5, 14, uVar60[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_484(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_601(iParam0, Global_76434[1].f_12, Global_76434[1].f_3, Global_76434[1].f_4);
		if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 1))
		{
			func_609(iVar5, iParam1, iParam2, 1);
		}
		if (Global_76434[1].f_12 == 0)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 6) && unk_0x1A5A491D253EA7BA(Global_2621444, 537651880, 1))
			{
			}
			else
			{
				iVar70 = unk_0x4F4B24509D6989D0(iParam0, 1, unk_0x36C584991B4C183F(iParam0, 1), unk_0xDADA8E1DD0D0D9D9(iParam0, 1));
				if (unk_0x1A5A491D253EA7BA(iVar70, 66092876, 0))
				{
					func_484(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					Global_76434[1] = { func_180(iVar5, iParam1, iParam2, -1) };
				}
			}
		}
		if (Global_76434[1].f_12 == 0)
		{
			func_584(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_76432 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_591(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_484(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_591(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_484(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar71 = func_193(iParam1);
		if (unk_0x36C584991B4C183F(iParam0, iVar71) != Global_76434[1].f_3 || unk_0xDADA8E1DD0D0D9D9(iParam0, iVar71) != Global_76434[1].f_4)
		{
			iVar72 = unk_0x4F4B24509D6989D0(iParam0, 8, unk_0x36C584991B4C183F(iParam0, 8), unk_0xDADA8E1DD0D0D9D9(iParam0, 8));
			iVar73 = unk_0x4F4B24509D6989D0(iParam0, 7, unk_0x36C584991B4C183F(iParam0, 7), unk_0xDADA8E1DD0D0D9D9(iParam0, 7));
			if (((iParam1 == 11 && unk_0x1A5A491D253EA7BA(iVar73, 307252627, 0)) || (iParam1 == 8 && unk_0x1A5A491D253EA7BA(iVar73, 1552218390, 0))) || (iParam1 == 4 && unk_0x1A5A491D253EA7BA(iVar73, -2095729091, 0)))
			{
				unk_0x64F9F278AB9DCA2C(iParam0, 7, 0, 0, unk_0xAA973E78065E07A0(iParam0, 7));
			}
			if ((iParam1 == 11 && unk_0x1A5A491D253EA7BA(iVar72, 307252627, 0)) || (iParam1 == 4 && unk_0x1A5A491D253EA7BA(iVar72, -2095729091, 0)))
			{
				if (iVar5 == 1885233650)
				{
					unk_0x64F9F278AB9DCA2C(iParam0, 8, 15, 0, unk_0xAA973E78065E07A0(iParam0, 8));
				}
				else if (iVar5 == -1667301416)
				{
					unk_0x64F9F278AB9DCA2C(iParam0, 8, 2, 0, unk_0xAA973E78065E07A0(iParam0, 8));
				}
			}
		}
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar74 = -1;
				if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 6) && unk_0x1A5A491D253EA7BA(Global_2621444, -1996375172, 11))
				{
					unk_0x71D833720F1761C3(iParam0, Global_1314034, Global_1314035, Global_1314036, 0);
					unk_0x71D833720F1761C3(iParam0, Global_1314034, Global_1314035, Global_1314036, 1);
					unk_0x71D833720F1761C3(iParam0, Global_1314034, Global_1314035, Global_1314036, 2);
					unk_0x71D833720F1761C3(iParam0, Global_1314034, Global_1314035, Global_1314036, 3);
				}
				iVar75 = func_583(iParam0, 11);
				iVar76 = func_583(iParam0, 8);
				iVar77 = func_583(iParam0, 4);
				iVar8 = unk_0x4F4B24509D6989D0(iParam0, 8, unk_0x36C584991B4C183F(iParam0, 8), unk_0xDADA8E1DD0D0D9D9(iParam0, 8));
				if (unk_0x1A5A491D253EA7BA(iVar8, 240476421, 8))
				{
					if (iVar5 == 1885233650)
					{
						iVar74 = func_582(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == -1667301416)
					{
						iVar74 = func_582(iVar5, iParam2, 11, 4);
					}
					if ((((((unk_0x1A5A491D253EA7BA(iVar74, 320460654, 0) || unk_0x1A5A491D253EA7BA(iVar74, -2017999390, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -1410897066, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -826135203, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -1855618474, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -1420825402, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -299089347, 0))
					{
					}
					else
					{
						iVar9 = func_583(iParam0, 8);
					}
				}
				iVar78 = unk_0x4F4B24509D6989D0(iParam0, 3, unk_0x36C584991B4C183F(iParam0, 3), 0);
				if (unk_0x1A5A491D253EA7BA(iVar78, -356646862, 0))
				{
					iVar79 = func_581(iVar5, iVar76, iVar75, iVar77);
					if (iVar79 == -99)
					{
						iVar79 = func_591(iParam0, iVar5, 11, iVar75, 3, 0);
					}
					switch (iVar78)
					{
						case 1165919867:
						case 1606204151:
						case 1774276352:
						case 1934254610:
						case 980775017:
						case 399321881:
							iVar79 = 11;
							iVar74 = func_582(iVar5, iParam2, 11, 4);
							if (!unk_0x1A5A491D253EA7BA(iVar74, -530089825, 0))
							{
								iVar79 = -99;
							}
							break;
					}
					if (iVar79 != -99)
					{
						iVar80 = 0;
						while (iVar80 < 18)
						{
							if (func_580(iVar5, iVar79, iVar80) == iVar78)
							{
								iVar11 = iVar80;
								iVar12 = unk_0xDADA8E1DD0D0D9D9(iParam0, 3);
							}
							iVar80++;
						}
					}
				}
				iVar74 = -1;
				if ((iVar5 == -1667301416 && iParam2 >= 256) && unk_0x1A5A491D253EA7BA(func_582(iVar5, iParam2, 11, 4), -1200513218, 0))
				{
					iVar75 = func_583(iParam0, 11);
					if (iVar75 >= 256)
					{
						iVar74 = func_582(iVar5, iVar75, 11, 4);
					}
					if (iVar75 >= 256 && unk_0x1A5A491D253EA7BA(iVar74, 1965569012, 0))
					{
						iVar81 = func_578(iVar5, iVar75, iParam2, unk_0xDADA8E1DD0D0D9D9(iParam0, 11));
						if (iVar81 != -99)
						{
							func_484(iParam0, 8, iVar81, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_76434[1] = { func_180(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (func_577(iVar5, iParam2, -1))
				{
					if (iVar5 == 1885233650)
					{
						if (iVar75 >= 237)
						{
							iVar74 = func_582(iVar5, iVar75, 11, 3);
						}
					}
					else if (iVar5 == -1667301416)
					{
						if (iVar75 >= 256)
						{
							iVar74 = func_582(iVar5, iVar75, 11, 4);
						}
					}
					iVar9 = -99;
					if (!func_577(iVar5, iVar75, -1))
					{
						if ((iVar5 == -1667301416 && iVar75 >= 256) && (unk_0x1A5A491D253EA7BA(iVar74, -1200513218, 0) || unk_0x1A5A491D253EA7BA(iVar74, 1965569012, 0)))
						{
						}
						else if ((iVar5 == -1667301416 && iVar75 >= 256) && ((((((((unk_0x1A5A491D253EA7BA(iVar74, 684992453, 0) || unk_0x1A5A491D253EA7BA(iVar74, 916636514, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -1939378450, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -820724897, 0)) || unk_0x1A5A491D253EA7BA(iVar74, 153792394, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -872449705, 0)) || unk_0x1A5A491D253EA7BA(iVar74, 700658917, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -549843760, 0)) || unk_0x1A5A491D253EA7BA(iVar74, 1830529185, 0)))
						{
						}
						else
						{
							iVar82 = func_576(iParam0, iParam2);
							iVar83 = func_578(iVar5, iVar75, iParam2, unk_0xDADA8E1DD0D0D9D9(iParam0, 11));
							if (iVar83 != -99)
							{
								func_484(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_76434[1] = { func_180(iVar5, iParam1, iParam2, -1) };
								iVar9 = -99;
							}
							else if (iVar82 != -99 && (iParam0 == unk_0x16F2683693E537C9() || iParam0 == Global_4267405))
							{
								func_484(iParam0, 8, iVar82, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_76434[1] = { func_180(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == 1885233650)
								{
									iVar84 = func_575(iVar5, 11, -1);
									Global_76434[1] = { func_180(iVar5, 11, iVar84, -1) };
									iVar83 = func_578(iVar5, iVar84, iParam2, Global_76434[1].f_4);
									if (iVar83 == -99 || unk_0x1A5A491D253EA7BA(func_582(iVar5, iParam2, 11, 3), -1237899132, 0))
									{
										iVar83 = 240;
									}
								}
								else if (iVar5 == -1667301416)
								{
									if (unk_0x1A5A491D253EA7BA(func_582(iVar5, iParam2, 11, 4), -1237899132, 0))
									{
										iVar83 = 120;
									}
									else
									{
										iVar83 = 48;
									}
								}
								func_484(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_76434[1] = { func_180(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_76434[1] = { func_180(iVar5, 11, iVar75, -1) };
						iVar85 = Global_76434[1].f_3;
						Global_76434[1] = { func_180(iVar5, 11, iParam2, -1) };
						iVar86 = Global_76434[1].f_3;
						if (iVar85 != iVar86)
						{
							iVar88 = func_576(iParam0, iParam2);
							Global_76434[1] = { func_180(iVar5, 8, iVar76, -1) };
							iVar87 = Global_76434[1].f_4;
							iVar89 = func_574(iVar5, iVar76, iVar87);
							if (iVar88 != -99 && (iParam0 == unk_0x16F2683693E537C9() || iParam0 == Global_4267405))
							{
								iVar90 = iVar88;
							}
							else if (iVar89 == -99)
							{
								iVar90 = iVar76;
								if (iVar5 == 1885233650)
								{
									iVar91 = func_582(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || func_573(iVar91) == 6) || unk_0x1A5A491D253EA7BA(iVar91, -1237899132, 0))
									{
										iVar89 = func_575(iVar5, 11, -1);
										Global_76434[1] = { func_180(iVar5, 11, iVar89, -1) };
										iVar90 = func_578(iVar5, iVar89, iParam2, Global_76434[1].f_4);
									}
								}
								if (iVar5 == -1667301416 && (iVar76 == 32 || iVar76 == 33))
								{
									if (!unk_0x1A5A491D253EA7BA(func_582(iVar5, iParam2, 11, 4), -491588875, 0))
									{
										iVar89 = func_575(iVar5, 11, -1);
										Global_76434[1] = { func_180(iVar5, 11, iVar89, -1) };
										iVar90 = func_578(iVar5, iVar89, iParam2, Global_76434[1].f_4);
									}
								}
								iVar92 = -1;
								if (iVar5 == 1885233650)
								{
									iVar92 = func_582(iVar5, iVar76, 8, 3);
								}
								else if (iVar5 == -1667301416)
								{
									iVar92 = func_582(iVar5, iVar76, 8, 4);
								}
								if (unk_0x1A5A491D253EA7BA(iVar92, -316495692, 0))
								{
									iVar89 = func_575(iVar5, 11, -1);
									Global_76434[1] = { func_180(iVar5, 11, iVar89, -1) };
									iVar90 = func_578(iVar5, iVar89, iParam2, Global_76434[1].f_4);
								}
							}
							else
							{
								iVar90 = func_578(iVar5, iVar89, iParam2, iVar87);
								if (iVar5 == 1885233650)
								{
									if (unk_0x1A5A491D253EA7BA(func_582(iVar5, iParam2, 11, 3), -1719338724, 0))
									{
										if (!func_572(iVar5, func_583(iParam0, 4), iVar89))
										{
											iVar90 = 240;
										}
									}
								}
								else if (iVar5 == -1667301416)
								{
									if (unk_0x1A5A491D253EA7BA(func_582(iVar5, iParam2, 11, 4), -1719338724, 0))
									{
										if (!func_572(iVar5, func_583(iParam0, 4), iVar89))
										{
											iVar90 = 48;
										}
									}
								}
							}
							if (iVar90 != -99)
							{
								func_484(iParam0, 8, iVar90, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == 1885233650)
							{
								iVar89 = func_575(iVar5, 11, -1);
								Global_76434[1] = { func_180(iVar5, 11, iVar89, -1) };
								iVar90 = func_578(iVar5, iVar89, iParam2, Global_76434[1].f_4);
								if (iVar90 == -99)
								{
									iVar90 = 240;
								}
								func_484(iParam0, 8, iVar90, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == -1667301416)
							{
								func_484(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_76434[1] = { func_180(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				func_569(iVar5, iParam2);
				if (!bParam13)
				{
					unk_0x64F9F278AB9DCA2C(iParam0, 10, 0, 0, unk_0xAA973E78065E07A0(iParam0, 10));
				}
			}
			func_593(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_581(iVar5, func_599(iParam0, 8, -1), iParam2, func_599(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = func_1038(2151, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = func_1038(2158, iParam10, 0);
				}
				unk_0xBF2343612F661793(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				if (iParam2 != -99)
				{
					iVar93 = -99;
					if (iVar5 == 1885233650)
					{
						iVar93 = func_615(iParam2);
					}
					else if (iVar5 == -1667301416)
					{
						iVar93 = func_613(iParam2);
					}
					if (iVar93 != -99 && iParam2 != iVar93)
					{
						iParam2 = iVar93;
					}
				}
				func_529(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar94 = unk_0x4F4B24509D6989D0(iParam0, 3, unk_0x36C584991B4C183F(iParam0, 3), 0);
			if (unk_0x1A5A491D253EA7BA(iVar94, -356646862, 0))
			{
				iVar95 = func_583(iParam0, 11);
				iVar96 = func_583(iParam0, 4);
				iVar97 = func_581(iVar5, iParam2, iVar95, iVar96);
				if (iVar97 == -99)
				{
					iVar97 = func_591(iParam0, iVar5, 11, iVar95, 3, 0);
				}
				switch (iVar94)
				{
					case 1165919867:
					case 1606204151:
					case 1774276352:
					case 1934254610:
					case 980775017:
					case 399321881:
						iVar97 = 11;
						iVar98 = func_582(iVar5, iParam2, 11, 4);
						if (!unk_0x1A5A491D253EA7BA(iVar98, -530089825, 0))
						{
							iVar97 = -99;
						}
						break;
				}
				if (iVar97 != -99)
				{
					iVar99 = 0;
					while (iVar99 < 18)
					{
						if (func_580(iVar5, iVar97, iVar99) == iVar94)
						{
							iVar11 = iVar99;
							iVar12 = unk_0xDADA8E1DD0D0D9D9(iParam0, 3);
						}
						iVar99++;
					}
				}
			}
			func_593(iParam0, iParam1, iParam2, iParam6, 0);
			iVar100 = func_583(iParam0, 11);
			if (func_577(iVar5, iVar100, -1))
			{
				iVar101 = func_574(iVar5, iParam2, Global_76434[1].f_4);
				func_569(iVar5, iVar101);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_581(iVar5, iParam2, func_583(iParam0, 11), func_583(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar102 = func_583(iParam0, 7);
				if (!func_526(iVar5, iVar102, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					unk_0x64F9F278AB9DCA2C(iParam0, func_193(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == 1885233650 && iParam2 >= 26) && unk_0x1A5A491D253EA7BA(Global_2621444, -921710083, 0)) || ((iVar5 == -1667301416 && iParam2 >= 26) && unk_0x1A5A491D253EA7BA(Global_2621444, -921710083, 0)))
			{
				iVar103 = func_1038(2098, iParam10, 0);
				iVar104 = func_1038(2099, iParam10, 0);
				iVar105 = func_1038(2100, iParam10, 0);
				fVar106 = func_525(135, iParam10);
				if (iVar5 == 1885233650)
				{
					unk_0x466ED20F52F36C02(iParam0, 0, 0, 0, iVar103, iVar104, iVar105, 0f, fVar106, 0f, false);
				}
				else if (iVar5 == -1667301416)
				{
					unk_0x466ED20F52F36C02(iParam0, 21, 0, 0, iVar103, iVar104, iVar105, 0f, fVar106, 0f, false);
				}
				iVar107 = 0;
				while (iVar107 < 20)
				{
					unk_0x8173BC90AE40BF1F(iParam0, iVar107, 0f);
					iVar107++;
				}
			}
			else
			{
				func_512(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar108 = func_583(iParam0, 11);
			iVar109 = func_583(iParam0, 8);
			if (iVar5 == 1885233650)
			{
				if (unk_0x1A5A491D253EA7BA(func_582(iVar5, iVar108, 11, 3), -1719338724, 0))
				{
					if (!func_572(iVar5, iParam2, func_574(iVar5, iVar109, 0)))
					{
						func_484(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_76434[1] = { func_180(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == -1667301416)
			{
				if (unk_0x1A5A491D253EA7BA(func_582(iVar5, iVar108, 11, 4), -1719338724, 0))
				{
					if (!func_572(iVar5, iParam2, func_574(iVar5, iVar109, 0)))
					{
						func_484(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_76434[1] = { func_180(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_581(iVar5, func_583(iParam0, 8), func_583(iParam0, 11), iParam2);
			}
			iVar110 = unk_0x4F4B24509D6989D0(iParam0, 3, unk_0x36C584991B4C183F(iParam0, 3), 0);
			if (unk_0x1A5A491D253EA7BA(iVar110, -356646862, 0))
			{
				iVar111 = func_581(iVar5, iVar109, iVar108, iParam2);
				if (iVar111 == -99)
				{
					iVar111 = func_591(iParam0, iVar5, 11, iVar108, 3, 0);
				}
				switch (iVar110)
				{
					case 1165919867:
					case 1606204151:
					case 1774276352:
					case 1934254610:
					case 980775017:
					case 399321881:
						iVar111 = 11;
						iVar112 = func_582(iVar5, iParam2, 11, 4);
						if (!unk_0x1A5A491D253EA7BA(iVar112, -530089825, 0))
						{
							iVar111 = -99;
						}
						break;
				}
				if (iVar111 != -99)
				{
					iVar113 = 0;
					while (iVar113 < 18)
					{
						if (func_580(iVar5, iVar111, iVar113) == iVar110)
						{
							iVar11 = iVar113;
							iVar12 = unk_0xDADA8E1DD0D0D9D9(iParam0, 3);
						}
						iVar113++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			unk_0x64F9F278AB9DCA2C(iParam0, func_193(iParam1), Global_76434[1].f_3, Global_76434[1].f_4, unk_0xAA973E78065E07A0(iParam0, func_193(iParam1)));
		}
		else
		{
			unk_0x64F9F278AB9DCA2C(iParam0, func_193(iParam1), Global_76434[1].f_3, Global_76434[1].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_76432 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_591(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_484(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
						if (iVar2 == 3)
						{
							switch (Global_2621444)
							{
								case 1165919867:
								case 1606204151:
								case 1774276352:
								case 1934254610:
								case 980775017:
								case 399321881:
									iVar11 = -1;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != -99)
							{
								iVar6 = func_581(iVar5, iVar3, func_583(iParam0, 11), func_583(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = func_591(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_484(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (func_511(iParam0))
				{
					iVar114 = func_509(iParam0, iVar5, iParam1, iParam2);
					if (iVar114 > 0)
					{
						iVar114 = (iVar114 + unk_0xDADA8E1DD0D0D9D9(iParam0, 9));
						if (!func_503(iParam0, 9, iVar114))
						{
							func_484(iParam0, 9, iVar114, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_484(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar8 = unk_0x4F4B24509D6989D0(iParam0, 8, unk_0x36C584991B4C183F(iParam0, 8), unk_0xDADA8E1DD0D0D9D9(iParam0, 8));
					if (unk_0x1A5A491D253EA7BA(iVar8, 240476421, 8))
					{
						func_484(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar115 = func_1038(2040, -1, 0);
				if (unk_0x36C584991B4C183F(iParam0, 5) != 0)
				{
					unk_0x64F9F278AB9DCA2C(iParam0, 5, func_497(iParam0, iVar115), func_496(iParam0, iVar115), func_495(iParam0, iVar115));
				}
				if (iParam0 == unk_0x16F2683693E537C9())
				{
					unk_0xA8084772F05C5AF6(unk_0xD803B885F5E47A62(), 5, func_497(unk_0x16F2683693E537C9(), iVar115), func_496(unk_0x16F2683693E537C9(), iVar115), 0);
					unk_0xF8918B9BC7ADC372(unk_0xD803B885F5E47A62(), func_495(unk_0x16F2683693E537C9(), iVar115));
					func_494(unk_0xD803B885F5E47A62(), iVar115);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == 1885233650 && iParam2 >= 92) || (iVar5 == -1667301416 && iParam2 >= 55))
				{
					if (unk_0x1A5A491D253EA7BA(Global_2621444, -319568873, 0))
					{
						func_484(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == -1667301416 && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar116 = func_599(iParam0, 4, -1);
					iVar117 = iParam2;
				}
				else
				{
					iVar116 = iParam2;
					iVar117 = func_599(iParam0, 11, -1);
				}
				if (func_493(iVar5, 11, iVar117, -1))
				{
					if (!func_492(iVar5, 4, iVar116, -1))
					{
						if (func_491(iVar5, 4, iVar116, &uVar118))
						{
							func_484(iParam0, 4, uVar118, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (func_492(iVar5, 4, iVar116, -1))
				{
					if (func_490(iVar5, 4, iVar116, &uVar118))
					{
						func_484(iParam0, 4, uVar118, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar119 = unk_0x36C584991B4C183F(iParam0, 6);
				iVar120 = unk_0xDADA8E1DD0D0D9D9(iParam0, 6);
				iVar121 = unk_0x4F4B24509D6989D0(iParam0, 6, iVar119, iVar120);
				iVar122 = unk_0x36C584991B4C183F(iParam0, 4);
				iVar123 = unk_0xDADA8E1DD0D0D9D9(iParam0, 4);
				iVar124 = unk_0x4F4B24509D6989D0(iParam0, 4, iVar122, iVar123);
				iVar125 = func_583(iParam0, 4);
				iVar126 = func_583(iParam0, 6);
				if (func_489(iVar5, iVar121))
				{
					if (unk_0x1A5A491D253EA7BA(iVar121, 1812005517, 0) != func_488(iVar5, iVar125, iVar121))
					{
						iVar127 = unk_0xB3A1A93269979713(iVar121);
						iVar128 = 0;
						while (iVar128 < iVar127)
						{
							unk_0xAEF3D5EB046168F2(iVar121, iVar128, &iVar129, &uVar130, &iVar131);
							if (iVar131 == 6)
							{
								if (iVar129 != 0 && iVar129 != 1849449579)
								{
									if (iVar5 == 1885233650)
									{
										iVar126 = func_480(iVar5, iVar129, 6, 3);
										iVar121 = iVar129;
										func_484(iParam0, 6, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == -1667301416)
									{
										iVar126 = func_480(iVar5, iVar129, 6, 4);
										iVar121 = iVar129;
										func_484(iParam0, 6, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar128 = iVar127 + 1;
								}
							}
							iVar128++;
						}
					}
					else if (unk_0x1A5A491D253EA7BA(iVar124, -2042643157, 0) != func_487(iVar5, iVar126, iVar124))
					{
						iVar127 = unk_0xB3A1A93269979713(iVar124);
						iVar128 = 0;
						while (iVar128 < iVar127)
						{
							unk_0xAEF3D5EB046168F2(iVar124, iVar128, &iVar129, &uVar130, &iVar131);
							if (iVar131 == 4)
							{
								if (iVar129 != 0 && iVar129 != 1849449579)
								{
									if (iVar5 == 1885233650)
									{
										iVar125 = func_480(iVar5, iVar129, 4, 3);
										iVar124 = iVar129;
										func_484(iParam0, 4, iVar125, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == -1667301416)
									{
										iVar125 = func_480(iVar5, iVar129, 4, 4);
										iVar124 = iVar129;
										func_484(iParam0, 4, iVar125, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar128 = iVar127 + 1;
								}
							}
							iVar128++;
						}
					}
				}
				if (func_489(iVar5, iVar124))
				{
					if (unk_0x1A5A491D253EA7BA(iVar124, -2042643157, 0) != func_487(iVar5, iVar126, iVar124))
					{
						iVar127 = unk_0xB3A1A93269979713(iVar124);
						iVar128 = 0;
						while (iVar128 < iVar127)
						{
							unk_0xAEF3D5EB046168F2(iVar124, iVar128, &iVar129, &uVar130, &iVar131);
							if (iVar131 == 4)
							{
								if (iVar129 != 0 && iVar129 != 1849449579)
								{
									if (iVar5 == 1885233650)
									{
										iVar125 = func_480(iVar5, iVar129, 4, 3);
										iVar124 = iVar129;
										func_484(iParam0, 4, iVar125, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == -1667301416)
									{
										iVar125 = func_480(iVar5, iVar129, 4, 4);
										iVar124 = iVar129;
										func_484(iParam0, 4, iVar125, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar128 = iVar127 + 1;
								}
							}
							iVar128++;
						}
					}
					else if (unk_0x1A5A491D253EA7BA(iVar121, 1812005517, 0) != func_488(iVar5, iVar125, iVar121))
					{
						iVar127 = unk_0xB3A1A93269979713(iVar121);
						iVar128 = 0;
						while (iVar128 < iVar127)
						{
							unk_0xAEF3D5EB046168F2(iVar121, iVar128, &iVar129, &uVar130, &iVar131);
							if (iVar131 == 6)
							{
								if (iVar129 != 0 && iVar129 != 1849449579)
								{
									if (iVar5 == 1885233650)
									{
										iVar126 = func_480(iVar5, iVar129, 6, 3);
										iVar121 = iVar129;
										func_484(iParam0, 6, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == -1667301416)
									{
										iVar126 = func_480(iVar5, iVar129, 6, 4);
										iVar121 = iVar129;
										func_484(iParam0, 6, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar128 = iVar127 + 1;
								}
							}
							iVar128++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_584(iParam0);
				iVar132 = unk_0x36C584991B4C183F(iParam0, 1);
				iVar133 = unk_0xDADA8E1DD0D0D9D9(iParam0, 1);
				iVar134 = unk_0x4F4B24509D6989D0(iParam0, 1, iVar132, iVar133);
				if (unk_0x1A5A491D253EA7BA(iVar134, 838607662, 0))
				{
					iVar3 = func_591(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_484(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = func_591(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_484(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_485(iParam0, &uVar4))
		{
			func_484(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_484(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar9 != -99)
	{
		func_484(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_484(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar11 != -1)
	{
		iVar135 = func_580(iVar5, func_599(iParam0, 3, -1), iVar11);
		if (iVar135 != -1)
		{
			if (iVar5 == 1885233650)
			{
				iVar10 = func_480(iVar5, iVar135, 3, 3);
			}
			else if (iVar5 == -1667301416)
			{
				iVar10 = func_480(iVar5, iVar135, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 = (iVar10 + iVar12);
				func_484(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_76432 = (Global_76432 - 1);
	return 1;
}

int func_485(int iParam0, var uParam1)
{
	*uParam1 = func_599(unk_0x16F2683693E537C9(), 2, -1);
	if (func_1038(753, Global_76431, 0) != -99 && func_426())
	{
		if (func_486() == 4)
		{
			return 1;
		}
		if (func_1038(753, Global_76431, 0) == 0 && func_1038(754, Global_76431, 0) == 0)
		{
			if (func_296(161, Global_76431))
			{
				if (func_1038(2051, Global_76431, 0) == 0)
				{
					return 0;
				}
			}
			else if (func_1038(752, Global_76431, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = func_1038(753, Global_76431, 0);
		iVar1 = func_1038(754, Global_76431, 0);
		if (!func_503(iParam0, iVar1, iVar0))
		{
			if (func_296(161, Global_76431))
			{
				*uParam1 = func_1038(2051, Global_76431, 0);
			}
			else
			{
				*uParam1 = func_1038(752, Global_76431, 0);
			}
			func_747(753, -99, Global_76431, 1, 0);
			func_747(754, 2, Global_76431, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_486()
{
	return Global_1312811;
}

int func_487(int iParam0, int iParam1, int iParam2)
{
	iVar0 = -1;
	switch (iParam0)
	{
		case 1885233650:
			if (iParam1 >= 256)
			{
				iVar0 = func_582(iParam0, iParam1, 6, 3);
			}
			if (unk_0x1A5A491D253EA7BA(iParam2, 1137160120, 0))
			{
				if (unk_0x1A5A491D253EA7BA(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (unk_0x1A5A491D253EA7BA(iVar0, -364248070, 0))
			{
				if ((unk_0x1A5A491D253EA7BA(iParam2, -1080576805, 0) || unk_0x1A5A491D253EA7BA(iParam2, -1387458490, 0)) || unk_0x1A5A491D253EA7BA(iParam2, -1420825402, 0))
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iParam2, -56268180, 0))
			{
				if ((((((((((unk_0x1A5A491D253EA7BA(iVar0, -713698407, 0) || unk_0x1A5A491D253EA7BA(iVar0, 140732128, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 2106216756, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -849839091, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1446333198, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -269266203, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 201427653, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 967829025, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -685039259, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1266557933, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -364248070, 0))
				{
					return 1;
				}
			}
			break;
		
		case -1667301416:
			if (iParam1 >= 256)
			{
				iVar0 = func_582(iParam0, iParam1, 6, 4);
			}
			if (unk_0x1A5A491D253EA7BA(iParam2, 1137160120, 0))
			{
				if (unk_0x1A5A491D253EA7BA(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (unk_0x1A5A491D253EA7BA(iParam2, -56268180, 0))
			{
				if (((((((((unk_0x1A5A491D253EA7BA(iVar0, -713698407, 0) || unk_0x1A5A491D253EA7BA(iVar0, 140732128, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 1863955539, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -849839091, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -269266203, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 201427653, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 967829025, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -685039259, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1266557933, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -309899747, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
	return 0;
}

int func_488(int iParam0, int iParam1, int iParam2)
{
	iVar0 = -1;
	iVar1 = -1;
	switch (iParam0)
	{
		case 1885233650:
			if (iParam1 >= 256)
			{
				iVar0 = func_582(iParam0, iParam1, 4, 3);
				iVar1 = func_573(iVar0);
			}
			if (unk_0x1A5A491D253EA7BA(iParam2, -364248070, 0) || unk_0x1A5A491D253EA7BA(iParam2, -56268180, 0))
			{
				iVar2 = 1;
				if ((((((((((((((((((((((iParam1 >= 32 && iParam1 <= 47) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 224 && iParam1 <= 239)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar1 == 2) || iVar1 == 4) || iVar1 == 6) || iVar1 == 11) || iVar1 == 12) || iVar1 == 14) || iVar1 == 15) || unk_0x1A5A491D253EA7BA(iVar0, 320460654, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -269266203, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 201427653, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 967829025, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -685039259, 0)) || (unk_0x1A5A491D253EA7BA(iVar0, -1080576805, 0) && !unk_0x1A5A491D253EA7BA(iParam2, -364248070, 0))) || (unk_0x1A5A491D253EA7BA(iVar0, -1387458490, 0) && !unk_0x1A5A491D253EA7BA(iParam2, -364248070, 0))) || (unk_0x1A5A491D253EA7BA(iVar0, -1420825402, 0) && !unk_0x1A5A491D253EA7BA(iParam2, -364248070, 0)))
				{
					iVar2 = 0;
				}
				switch (iVar0)
				{
					case -439764935:
					case 1858824227:
					case -44268217:
					case 301706885:
					case 1283072893:
					case -1590178565:
					case 1995307108:
					case 1029014836:
					case -365568266:
					case -138446327:
					case -2034722819:
					case -1219513062:
					case 153704652:
					case 356276239:
					case 586511233:
					case 1558996842:
					case 1183988406:
					case 1000678684:
					case 761792674:
					case -145679239:
					case 686423978:
					case -763407658:
					case 74266289:
					case 987390769:
					case 1591372991:
					case 1834027448:
					case 913054691:
					case 1142372153:
					case -1698011990:
					case -1443101939:
					case 2133699953:
					case -1924511318:
					case -475531676:
					case -237137197:
					case 754461254:
					case -1155840382:
					case 629180074:
					case 859251223:
					case 1610316715:
					case 901392169:
					case -92983136:
					case 1346362420:
					case 485782942:
					case 312004063:
					case 6695290:
					case 1724446270:
					case -448105673:
					case -611098679:
					case -1111088081:
					case -1406369540:
					case -1912159043:
					case 2076516410:
					case 1919618438:
					case 45227112:
					case -2129094253:
					case -421370587:
					case -675363106:
					case 423009394:
					case 662518015:
					case 1973998937:
					case -2082049580:
					case 8743696:
					case -850459484:
					case -596466965:
					case 1244823145:
					case -1187390334:
					case 1269301600:
					case -607480390:
						iVar2 = 0;
						break;
				}
				if (((unk_0x1A5A491D253EA7BA(iParam2, 1248753945, 0) || unk_0x1A5A491D253EA7BA(iParam2, 481861038, 0)) || unk_0x1A5A491D253EA7BA(iParam2, 713391749, 0)) || unk_0x1A5A491D253EA7BA(iParam2, 434101562, 0))
				{
					if ((((((unk_0x1A5A491D253EA7BA(iVar0, -1080576805, 0) || unk_0x1A5A491D253EA7BA(iVar0, -1387458490, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -269266203, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 201427653, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 967829025, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -685039259, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1420825402, 0))
					{
						iVar2 = 1;
					}
				}
				if (unk_0x1A5A491D253EA7BA(iVar0, 1137160120, 0))
				{
					if (unk_0x1A5A491D253EA7BA(iParam2, -2005216901, 0))
					{
						iVar2 = 0;
					}
					else
					{
						iVar2 = 1;
					}
				}
				return iVar2;
			}
			break;
		
		case -1667301416:
			if (iParam1 >= 256)
			{
				iVar0 = func_582(iParam0, iParam1, 4, 4);
				iVar1 = func_573(iVar0);
			}
			if (unk_0x1A5A491D253EA7BA(iParam2, -364248070, 0) || unk_0x1A5A491D253EA7BA(iParam2, -56268180, 0))
			{
				if (unk_0x1A5A491D253EA7BA(iVar0, 1137160120, 0))
				{
					if (unk_0x1A5A491D253EA7BA(iParam2, -2005216901, 0))
					{
						return 0;
					}
				}
				if ((unk_0x1A5A491D253EA7BA(iVar0, -1080576805, 0) || unk_0x1A5A491D253EA7BA(iVar0, -1387458490, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1420825402, 0))
				{
					if ((((unk_0x1A5A491D253EA7BA(iParam2, -364248070, 0) || unk_0x1A5A491D253EA7BA(iParam2, -979468724, 0)) || unk_0x1A5A491D253EA7BA(iParam2, -1813210391, 0)) || unk_0x1A5A491D253EA7BA(iParam2, 1248753945, 0)) || unk_0x1A5A491D253EA7BA(iParam2, 481861038, 0))
					{
						return 1;
					}
					return 0;
				}
				if ((((((((((((((((((((((((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 96 && iParam1 <= 111)) || iVar1 == 1) || iVar1 == 3) || iVar1 == 6) || unk_0x1A5A491D253EA7BA(iVar0, 1863955539, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 2106216756, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -761463976, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 684992453, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 916636514, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1939378450, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 264959411, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1127835965, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1119232689, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1207283343, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -849839091, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -2088146832, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1446333198, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -430330349, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1103045158, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 1055526375, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -2020757158, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1325813684, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 1052059919, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 1006704786, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_489(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1885233650:
			if (unk_0x1A5A491D253EA7BA(iParam1, -364248070, 0) || unk_0x1A5A491D253EA7BA(iParam1, -56268180, 0))
			{
				return 1;
			}
			break;
		
		case -1667301416:
			if (unk_0x1A5A491D253EA7BA(iParam1, -364248070, 0) || unk_0x1A5A491D253EA7BA(iParam1, -56268180, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_490(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam0)
	{
		case -1667301416:
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_582(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0xB3A1A93269979713(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0xAEF3D5EB046168F2(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (!unk_0x1A5A491D253EA7BA(iVar3, -1100807313, 0))
										{
											*uParam3 = func_480(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_491(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam0)
	{
		case -1667301416:
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_582(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0xB3A1A93269979713(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0xAEF3D5EB046168F2(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (unk_0x1A5A491D253EA7BA(iVar3, -1100807313, 0))
										{
											*uParam3 = func_480(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_492(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case -1667301416:
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_582(iParam0, iParam2, 4, 4);
						}
						if (unk_0x1A5A491D253EA7BA(iParam3, -1100807313, 0))
						{
							return 1;
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_493(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case -1667301416:
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_582(iParam0, iParam2, 11, 4);
						}
						return unk_0x1A5A491D253EA7BA(iParam3, -530089825, 0);
					}
					break;
			}
			break;
	}
	return 0;
}

void func_494(int iParam0, int iParam1)
{
	if (iParam1 > 61)
	{
		unk_0xF1C520A9D38679DE(iParam0, -1825432403);
	}
	else if (iParam1 > 51)
	{
		unk_0xF1C520A9D38679DE(iParam0, 1269440357);
	}
	else if (iParam1 > 46)
	{
		unk_0xF1C520A9D38679DE(iParam0, 1766664132);
	}
	else if (iParam1 > 26)
	{
		unk_0xF1C520A9D38679DE(iParam0, 1277738372);
	}
	else if (iParam1 > 0)
	{
		unk_0xF1C520A9D38679DE(iParam0, 1269440357);
	}
	else
	{
		unk_0x76101DD10F826BF0(iParam0);
	}
}

int func_495(int iParam0, int iParam1)
{
	return 0;
}

int func_496(int iParam0, int iParam1)
{
	if (iParam1 >= 62)
	{
		return (iParam1 - 62);
	}
	if (iParam1 > 51)
	{
		return (iParam1 - 52);
	}
	if (iParam1 > 46)
	{
		return (iParam1 - 47);
	}
	if (iParam1 > 26)
	{
		return (iParam1 - 27);
	}
	if (iParam1 > 0)
	{
		return (iParam1 - 1);
	}
	return iParam1;
}

var func_497(int iParam0, int iParam1)
{
	bVar0 = unk_0x36C584991B4C183F(iParam0, 9) != false;
	iVar1 = unk_0x4F4B24509D6989D0(iParam0, 8, unk_0x36C584991B4C183F(iParam0, 8), unk_0xDADA8E1DD0D0D9D9(iParam0, 8));
	iVar2 = unk_0x4F4B24509D6989D0(iParam0, 11, unk_0x36C584991B4C183F(iParam0, 11), unk_0xDADA8E1DD0D0D9D9(iParam0, 11));
	iVar3 = unk_0x4F4B24509D6989D0(iParam0, 4, unk_0x36C584991B4C183F(iParam0, 4), unk_0xDADA8E1DD0D0D9D9(iParam0, 4));
	if ((((!bVar0 == Global_76595 || !iParam1 == Global_76596) || !iVar1 == Global_76597) || !iVar2 == Global_76598) || !iVar3 == Global_76599)
	{
		Global_76595 = bVar0;
		Global_76596 = iParam1;
		Global_76597 = iVar1;
		Global_76598 = iVar2;
		Global_76599 = iVar3;
		Global_76600 = func_498(iParam0, iParam1);
		if (iParam1 == 63 || iParam1 == 62)
		{
			if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62())) == -1667301416)
			{
				if (Global_76600 == 61)
				{
					Global_76600 = 79;
				}
				else if (Global_76600 == 39)
				{
					Global_76600 = 79;
				}
				else if (Global_76600 == 76)
				{
					Global_76600 = 80;
				}
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62())) == 1885233650)
			{
				if (Global_76600 == 61)
				{
					Global_76600 = 78;
				}
				else if (Global_76600 == 39)
				{
					Global_76600 = 78;
				}
			}
		}
	}
	return Global_76600;
}

int func_498(int iParam0, int iParam1)
{
	iVar0 = unk_0x36C584991B4C183F(iParam0, 11);
	if (unk_0x36C584991B4C183F(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x134B62B726CEC8E6(iParam0);
	iVar3 = 0;
	if (iParam1 > 61)
	{
		iVar3 = 69;
	}
	else if (iParam1 > 51)
	{
		iVar3 = (iParam1 - 1);
	}
	else if (iParam1 > 46)
	{
		iVar3 = 30;
	}
	else if (iParam1 > 26)
	{
		iVar3 = 20;
	}
	else if (iParam1 > 0)
	{
		iVar3 = 9;
	}
	else
	{
		iVar3 = 0;
	}
	iVar4 = unk_0x4F4B24509D6989D0(iParam0, 8, unk_0x36C584991B4C183F(iParam0, 8), unk_0xDADA8E1DD0D0D9D9(iParam0, 8));
	if (unk_0x1A5A491D253EA7BA(iVar4, 240476421, 8))
	{
		if (iVar2 == 1885233650)
		{
			if (unk_0x1A5A491D253EA7BA(iVar4, -1499233212, 8))
			{
				return (2 + iVar3);
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, 350281921, 8))
			{
				return func_502(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -887141061, 8))
			{
				return func_502(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -1185371730, 8))
			{
				return func_502(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -2124629577, 8))
			{
				return func_502(iParam0, iParam1) + 15;
			}
		}
		else
		{
			if (unk_0x1A5A491D253EA7BA(iVar4, -1499233212, 8))
			{
				return (7 + iVar3);
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, 350281921, 8))
			{
				return (8 + iVar3);
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -887141061, 8))
			{
				return func_502(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -1185371730, 8))
			{
				return func_502(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -2124629577, 8))
			{
				return func_502(iParam0, iParam1) + 15;
			}
		}
		return func_502(iParam0, iParam1);
	}
	if (func_501(iParam0))
	{
		if (bVar1)
		{
			return (8 + iVar3);
		}
		else
		{
			return (2 + iVar3);
		}
	}
	if (iVar0 > 15)
	{
		iVar5 = unk_0x4F4B24509D6989D0(iParam0, 11, iVar0, unk_0xDADA8E1DD0D0D9D9(iParam0, 11));
		if (unk_0x1A5A491D253EA7BA(iVar5, 655081063, 0))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -530089825, 0))
		{
			if (bVar1)
			{
				return (6 + iVar3);
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -713698407, 0))
		{
			if (iParam1 > 51)
			{
				if (iVar2 == 1885233650)
				{
					return 60;
				}
				else
				{
					return 53;
				}
			}
			else if (iParam1 > 46)
			{
				return 39;
			}
			else if (iParam1 > 26)
			{
				return 29;
			}
			else if (iParam1 > 0)
			{
				return 18;
			}
			else
			{
				return 19;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1882920022, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -317649054, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (unk_0x1A5A491D253EA7BA(iVar5, -979468724, 0))
			{
				return func_502(iParam0, iParam1) + 15;
			}
			else if (unk_0x1A5A491D253EA7BA(iVar5, -306768813, 0))
			{
				return func_502(iParam0, iParam1) + 15;
			}
			else if (unk_0x1A5A491D253EA7BA(iVar5, -58412562, 0))
			{
				return func_502(iParam0, iParam1) + 15;
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1536649085, 0) && !unk_0x1A5A491D253EA7BA(iVar5, 350281921, 0))
		{
			iVar6 = func_500(iVar5, 0);
			if (iVar2 == 1885233650)
			{
				switch (iVar6)
				{
					case 0:
						return (2 + iVar3);
						break;
					
					case 2:
						if (iParam1 > 46)
						{
							return 39;
						}
						else if (iParam1 > 26)
						{
							return 29;
						}
						else if (iParam1 > 0)
						{
							return 18;
						}
						else
						{
							return 19;
						}
						break;
					
					default:
						iVar0 = func_573(iVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 2:
						return (7 + iVar3);
						break;
					
					default:
						iVar0 = func_573(iVar5);
						break;
					}
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 248194463, 0))
		{
			if (unk_0x1A5A491D253EA7BA(iVar5, -1347486026, 0))
			{
				return (3 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 396458410, 0))
		{
			iVar7 = func_499(iVar5, 0);
			switch (iVar7)
			{
				case 4:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 28;
					}
					else if (iParam1 > 0)
					{
						return 17;
					}
					else
					{
						return 8;
					}
					break;
				
				case 5:
					if (iVar2 == 1885233650)
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 6:
					if (iVar2 == 1885233650)
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 7:
					if (iVar2 == 1885233650)
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 11:
					if (iVar2 == 1885233650)
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 12:
					if (iVar2 == 1885233650)
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 14:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 29;
					}
					else if (iParam1 > 0)
					{
						return 18;
					}
					else
					{
						return 19;
					}
					break;
				
				default:
					iVar0 = func_573(iVar5);
					break;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -779835469, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1119232689, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -2102859770, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1784133476, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (2 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1607949555, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1976716889, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 2099109084, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1488441032, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1719167561, 0) || unk_0x1A5A491D253EA7BA(iVar5, 1431529976, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1274099003, 0) || unk_0x1A5A491D253EA7BA(iVar5, 1723403459, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (unk_0x1A5A491D253EA7BA(iVar5, -1407614029, 0))
				{
					return func_502(iParam0, iParam1) + 15;
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 912543594, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (2 + iVar3);
			}
		}
		else if ((unk_0x1A5A491D253EA7BA(iVar5, -1086258388, 0) || unk_0x1A5A491D253EA7BA(iVar5, 103539798, 0)) || unk_0x1A5A491D253EA7BA(iVar5, -994703884, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 2044466679, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else if (bVar1)
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -2020757158, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1064262817, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_502(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1419806467, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (7 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1053842259, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1358888880, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -441291342, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -747583185, 0))
		{
			if (iVar2 == -1667301416)
			{
				if (bVar1)
				{
					return func_502(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar3);
				}
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1986415230, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -2088146832, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -785939537, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -872449705, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 700658917, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1714969731, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 745826556, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1055526375, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 144417099, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 492620493, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -416620954, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -102825006, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -733792105, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 137011325, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -641612092, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1351486939, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_502(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -2119756144, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1507532917, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 947651647, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1506370874, 0) || unk_0x1A5A491D253EA7BA(iVar5, 1927516484, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1786447517, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1010805287, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1325813684, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_502(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -549843760, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -828478571, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1);
			}
			else if (bVar1)
			{
				return (55 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1690933245, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_502(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1360588936, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 2136821028, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1830529185, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -269266203, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 201427653, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 967829025, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -685039259, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1266557933, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -979468724, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1813210391, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 263623295, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -309899747, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -89003918, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -747858475, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1);
			}
			else
			{
				return func_502(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 490219883, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1208450825, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 297865853, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 602650322, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 905042630, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1204125293, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 310055897, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 606713654, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1);
			}
			else
			{
				return func_502(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1831422288, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -838136846, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 655638019, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 970679185, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 83294665, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 382246252, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -99064836, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -697656159, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -398213037, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1380605304, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_502(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -306768813, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_502(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -58412562, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_502(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1711219157, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1) + 15;
			}
			else
			{
				return func_502(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1466664110, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1) + 15;
			}
			else
			{
				return func_502(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1968575702, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1) + 15;
			}
			else
			{
				return func_502(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 245429010, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (48 + iVar3);
			}
			else
			{
				return func_502(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 15161247, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (48 + iVar3);
			}
			else
			{
				return (48 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 2044923487, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_502(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -915352927, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_502(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -538378351, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_502(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -2139144017, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_502(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -435539886, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_502(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 695107163, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1499233212, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1) + 15;
			}
			else
			{
				return func_502(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 350281921, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1) + 15;
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -2124629577, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_502(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1877382859, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1) + 15;
			}
			else
			{
				return func_502(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1375878737, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1347486026, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (1 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1467843180, 0))
		{
			if (unk_0x1A5A491D253EA7BA(iVar5, 2006289597, 0))
			{
				if (iVar2 == 1885233650)
				{
					return func_502(iParam0, iParam1) + 15;
				}
				else
				{
					return func_502(iParam0, iParam1) + 15;
				}
			}
			else if (iVar2 == 1885233650)
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -540436505, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1) + 15;
			}
			else
			{
				return func_502(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1207461955, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1) + 15;
			}
			else
			{
				return func_502(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1467843180, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1);
			}
			else
			{
				return func_502(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1467843180, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1) + 15;
			}
			else
			{
				return func_502(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -785939537, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return func_502(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -785939537, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return func_502(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -939525357, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1);
			}
			else
			{
				return func_502(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1986415230, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (4 + iVar3);
			}
			else
			{
				return func_502(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1467843180, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1) + 15;
			}
			else
			{
				return func_502(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1663871176, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1467843180, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1467843180, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1) + 15;
			}
			else
			{
				return func_502(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1467843180, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1);
			}
			else
			{
				return func_502(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -939525357, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1);
			}
			else
			{
				return func_502(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 398019854, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_502(iParam0, iParam1) + 15;
			}
			else
			{
				return func_502(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1965569012, 0) && iVar2 == -1667301416)
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 2026620439, 0) && iVar2 == -1667301416)
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1410897066, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if ((unk_0x1A5A491D253EA7BA(iVar5, -2017999390, 0) || unk_0x1A5A491D253EA7BA(iVar5, 320460654, 0)) || unk_0x1A5A491D253EA7BA(iVar5, -826135203, 0))
		{
			return (7 + iVar3);
		}
		else
		{
			iVar8 = iVar0;
			iVar0 = func_573(iVar5);
		}
	}
	if (iVar2 == 1885233650)
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
			