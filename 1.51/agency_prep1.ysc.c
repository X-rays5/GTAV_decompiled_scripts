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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_48 = 94130617;
	vLocal_1088 = { 693,1158f, -1012,418f, 21,72802f };
	vLocal_1103 = { 692,8695f, -998,7867f, 22,3201f };
	vLocal_1106 = { 693,3784f, -1025,671f, 21,506f };
	if (unk_0x2EBF608FFE6CA406(3))
	{
		func_111();
		func_109();
		func_107();
	}
	func_99();
	unk_0x7798376279BB5369(1);
	while (true)
	{
		unk_0x1A6DFFFEEC27BF4F("M_TheAgencyHeistPrep1", 0);
		if (!iLocal_1093)
		{
			if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_1088, 200f, 200f, 200f, 0, true, 0) && !unk_0x8E28E832BEAC3DCE(vLocal_1088, 50f))
			{
				unk_0x536F1BE96C726C4B(vLocal_1088, 50f, 1, 0, 0, false);
				iLocal_1093 = 1;
			}
		}
		else if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_1088, 200f, 200f, 200f, 0, true, 0))
		{
			iLocal_1093 = 0;
		}
		if (!iLocal_1098)
		{
			if (Global_95241.f_358 == unk_0x12AB0310C2281427("AHP1_TRUCKCALLED") || Global_95171)
			{
				func_98(543);
				Global_95241.f_358 = 0;
				iLocal_1098 = 1;
			}
		}
		func_97();
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			if ((unk_0xC844350D5D58C99A(iLocal_911[iVar0]) && !unk_0xEB6A8945D1AC98A1(iLocal_911[iVar0])) && unk_0xC844350D5D58C99A(iLocal_909))
			{
				if (vdist2(unk_0x68F4C0EC296D3901(iLocal_911[iVar0], 1), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1)) > 2500f)
				{
					unk_0xFADC0A217229F6B5(iLocal_911[iVar0], 1);
					unk_0xF3268524E9BE6D6E(iLocal_911[iVar0], unk_0x16F2683693E537C9(), 300f, 20000, 1, 0);
					unk_0x6DAD7906B73F064D(&(iLocal_911[iVar0]));
				}
			}
			iVar0++;
		}
		if (iLocal_1134 < 8 && iLocal_1086 >= 0)
		{
			func_95();
		}
		switch (iLocal_1086)
		{
			case -1:
				iVar1 = 0;
				while (iVar1 < iLocal_911)
				{
					if (unk_0xC844350D5D58C99A(iLocal_911[iVar1]))
					{
						if (unk_0xC844350D5D58C99A(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9())))
						{
							iVar2 = unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9());
							if ((unk_0xDF1306B443CD3D15(iVar2, 0) && vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(iVar2, 1)) < 30f) && unk_0x4906F8A34E9F4814(iVar2, 1938952078))
							{
								unk_0x0E2400AB9174FA81(5, 1862763509, iLocal_920);
								unk_0x0E2400AB9174FA81(5, iLocal_920, 1862763509);
								unk_0xCB9603FE12CFDEF4(unk_0xD803B885F5E47A62(), 1, 0);
								unk_0x0F52891B1CED828B(unk_0xD803B885F5E47A62(), 0f);
							}
						}
					}
					iVar1++;
				}
				if (func_94())
				{
					unk_0x8B4C4CA774181102(15f, 15f, 4);
					unk_0xC92DB9682A650680("AHP1_START");
					iLocal_1086++;
				}
				break;
			
			case 0:
				if (!unk_0xC844350D5D58C99A(iLocal_909))
				{
					func_94();
					if ((unk_0xC844350D5D58C99A(unk_0x728870EB733D12A1()) && unk_0xDF1306B443CD3D15(unk_0x728870EB733D12A1(), 0)) && unk_0x134B62B726CEC8E6(unk_0x728870EB733D12A1()) == 1938952078)
					{
						iLocal_909 = unk_0x728870EB733D12A1();
						unk_0x73270B3C9CC833FD(iLocal_909, true, 1);
					}
				}
				else
				{
					func_45();
					if (!iLocal_1094 && unk_0xDF1306B443CD3D15(iLocal_909, 0))
					{
						func_44(iLocal_909, -1);
						func_43(iLocal_909, -1);
						func_42(541, 0);
						iLocal_1094 = 1;
					}
					if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), vLocal_1088) < pow(100f, 2f))
					{
						unk_0x5C2EBB66AD2EA5FF(1);
					}
					func_94();
					if (bLocal_1099)
					{
						if (unk_0xDF1306B443CD3D15(iLocal_909, 0) && unk_0xDF1306B443CD3D15(iLocal_910, 0))
						{
							func_36(iLocal_910);
							if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iLocal_910) && unk_0x5A91F08DF773C39D(iLocal_909, vLocal_1088, Global_19, 1, true, 0))
							{
								if (unk_0xE4EDC4B0E92C078B(iLocal_907))
								{
									unk_0x142CC44DB769B57E(&iLocal_907);
								}
								unk_0x8B4C4CA774181102(5f, 15f, 4);
								iLocal_1086++;
							}
						}
					}
					else if (unk_0xDF1306B443CD3D15(iLocal_909, 0))
					{
						func_36(iLocal_909);
						if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iLocal_909) && unk_0x5A91F08DF773C39D(iLocal_909, vLocal_1088, Global_19, 1, true, 0))
						{
							if (unk_0xE4EDC4B0E92C078B(iLocal_907))
							{
								unk_0x142CC44DB769B57E(&iLocal_907);
							}
							unk_0x8B4C4CA774181102(5f, 15f, 4);
							iLocal_1086++;
						}
					}
				}
				if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
				{
					unk_0x8B4C4CA774181102(5f, 10f, 4);
					iLocal_1086 = 100;
				}
				if (!unk_0xC844350D5D58C99A(iLocal_909))
				{
					func_14("AHP_LOSTTRUCK");
				}
				else if (unk_0xDF1306B443CD3D15(iLocal_909, 0))
				{
					if ((vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(iLocal_909, 1)) > 22500f && unk_0x03068588A1FCED1A(iLocal_909)) || vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(iLocal_909, 1)) > 90000f)
					{
						func_14("AHP_LOSTTRUCK");
					}
				}
				else
				{
					func_14("AHP_DEADTRUCK");
				}
				break;
			
			case 1:
				if (unk_0xDF1306B443CD3D15(iLocal_909, 0))
				{
					if (func_12(iLocal_909, 1093140480, 1, 1056964608, 0, 1, 0))
					{
						if (!iLocal_1097)
						{
							func_11("AHP_GETOUT", 7500, 1);
							iLocal_1097 = 1;
						}
						unk_0xC92DB9682A650680("AHP1_STOP");
						unk_0x8B4C4CA774181102(10f, 10f, 4);
						iLocal_1086++;
					}
				}
				break;
			
			case 2:
				if (unk_0xDF1306B443CD3D15(iLocal_909, 0))
				{
					if (!unk_0x5A91F08DF773C39D(iLocal_909, vLocal_1088, Global_19 + Vector(2f, 2f, 2f), 1, true, 0))
					{
						iLocal_1086 = 0;
					}
					else if (bLocal_1099)
					{
						if (unk_0xC844350D5D58C99A(iLocal_910))
						{
							if (!unk_0x50B5F6F3C29E9380(iLocal_910, iLocal_909))
							{
								unk_0x9A8BCD43DBDDCDCA(iLocal_909, 0, 0);
								if (unk_0xB9F5AD0599FD42F7(iLocal_909))
								{
									unk_0xAA280AF45BCCCF21(iLocal_909, 0);
								}
								unk_0x71EDC33E5A423750(iLocal_909, 2);
								unk_0x790015DC92C918E2();
								settimera(0);
								iLocal_1086++;
							}
							else
							{
								unk_0xA1D5A8611E9DC1DD(iLocal_910, iLocal_909);
							}
						}
					}
					else if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_909, 0))
					{
						if (unk_0xB9F5AD0599FD42F7(iLocal_909))
						{
							unk_0xAA280AF45BCCCF21(iLocal_909, 0);
						}
						unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
						unk_0x71EDC33E5A423750(iLocal_909, 2);
						unk_0x790015DC92C918E2();
						settimera(0);
						iLocal_1086++;
					}
				}
				break;
			
			case 3:
				if (unk_0xDF1306B443CD3D15(iLocal_909, 0))
				{
					if (timera() > 3000)
					{
						unk_0x8B4C4CA774181102(5f, 5f, 4);
						func_6();
					}
				}
				break;
			
			case 100:
				if (unk_0xE4EDC4B0E92C078B(iLocal_907))
				{
					unk_0x142CC44DB769B57E(&iLocal_907);
				}
				if (!func_5(13))
				{
					func_4(13, 1);
				}
				iLocal_1086++;
				break;
			
			case 101:
				func_94();
				if (bLocal_1099)
				{
					func_36(iLocal_910);
				}
				else
				{
					func_36(iLocal_909);
				}
				if (!iLocal_1100)
				{
					if ((unk_0xDF1306B443CD3D15(iLocal_909, 0) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_909, 0)) || (unk_0xDF1306B443CD3D15(iLocal_910, 0) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_910, 0)))
					{
						if ((unk_0x0A72D28CE8A2CB55(unk_0x16F2683693E537C9(), "DAVIS") && unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) > 5f) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
						{
							if (func_3())
							{
								unk_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_AH_PREP_01", 0f);
							}
							else
							{
								unk_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_AH_PREP_02", 0f);
							}
							iLocal_1100 = 1;
						}
					}
				}
				if (!unk_0xC844350D5D58C99A(iLocal_909))
				{
					func_14("AHP_LOSTTRUCK");
				}
				else if (unk_0xDF1306B443CD3D15(iLocal_909, 0))
				{
					if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
					{
						unk_0x790015DC92C918E2();
						iLocal_1086 = 0;
					}
					else if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iLocal_909))
					{
						if (!iLocal_1096)
						{
							func_11("AHP_LOSECOPS", 7500, 1);
							iLocal_1096 = 1;
							iLocal_1087 = unk_0x1C0640BA9A7327B3();
						}
					}
					else if ((iLocal_1096 && (unk_0x1C0640BA9A7327B3() - iLocal_1087) < 7500) && unk_0xD17F06053799A7CA())
					{
						unk_0x790015DC92C918E2();
					}
					if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(iLocal_909, 1)) > 22500f)
					{
						func_14("AHP_LOSTTRUCK");
					}
				}
				else
				{
					func_14("AHP_DEADTRUCK");
				}
				break;
		}
		if (unk_0xC844350D5D58C99A(iLocal_909))
		{
			if (!func_2(iLocal_909))
			{
				func_1(iLocal_909, 0);
			}
		}
		wait(0);
	}
}

void func_1(int iParam0, int iParam1)
{
	Global_98744.f_22[iParam1] = iParam0;
}

int func_2(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_98744.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_3()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_4(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_111638.f_9080.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_111638.f_9080.f_99.f_58[iParam0] = iParam1;
}

int func_5(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

void func_6()
{
	unk_0x5413873D3F67BF93(0, 0);
	func_7(0, 0);
	func_107();
}

void func_7(bool bParam0, int iParam1)
{
	if (!Global_61514)
	{
		Global_61514 = iParam1;
	}
	if (bParam0)
	{
		if ((func_10(0) && Global_76868.f_1 == 1) && func_9(Global_76868))
		{
		}
		else
		{
			Global_61512 = 1;
		}
	}
	if (Global_111638.f_9080 || func_10(0))
	{
		iVar0 = func_8();
		iVar1 = Global_89496[iVar0];
		uVar2 = Global_76891.f_109[iVar1];
		if (iVar0 == -1)
		{
			if (Global_111638.f_9080)
			{
			}
			return;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_89496[iVar0].f_1, 4))
		{
			return;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_89496[iVar0].f_1, 5))
		{
			return;
		}
		unk_0x5D96D8530B3D0904(&(Global_89496[iVar0].f_1), 4);
		unk_0x5D96D8530B3D0904(&Global_76870, 1);
		Global_76886 = uVar2;
		Global_76887 = unk_0x1C0640BA9A7327B3();
	}
}

int func_8()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_89496[iVar0].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_9(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

bool func_10(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

void func_11(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 1);
}

int func_12(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_13(iParam0);
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

void func_13(int iParam0)
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

void func_14(char* sParam0)
{
	unk_0x5413873D3F67BF93(0, 0);
	func_20(sParam0);
	while (!func_19())
	{
		wait(0);
	}
	if (unk_0xC844350D5D58C99A(iLocal_909))
	{
		if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_909, 0))
		{
			unk_0xA954465BA6FDEFE2(&iLocal_909);
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_911)
	{
		if (unk_0xC844350D5D58C99A(iLocal_911[iVar0]))
		{
			unk_0xEBA53F35D0085654(&(iLocal_911[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_95241.f_9)
	{
		if (unk_0xC844350D5D58C99A(Global_95241.f_9[iVar0]))
		{
			unk_0xEBA53F35D0085654(&(Global_95241.f_9[iVar0]));
		}
		iVar0++;
	}
	unk_0x536F1BE96C726C4B(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), 100f, 1, 1, 0, false);
	unk_0xC92DB9682A650680("AHP1_FAIL");
	if (func_18())
	{
		func_111();
	}
	else if (func_17())
	{
		func_15(229,1676f, -1614,979f, 28,2892f, 142,5156f);
	}
	func_107();
}

void func_15(vector3 vParam0, float fParam3)
{
	if (func_16(Global_76862, 0f, 0f, 0f, 0))
	{
		Global_76862 = { vParam0 };
		Global_76865 = fParam3;
	}
}

bool func_16(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_17()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 226,6765f, -1668,942f, 25,46082f, 185,6446f, -1635,836f, 39,29184f, 57,75f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_18()
{
	if (Global_98744 == 7)
	{
		return 1;
	}
	return 0;
}

int func_19()
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

void func_20(char* sParam0)
{
	func_35(sParam0);
	func_21(0);
}

void func_21(int iParam0)
{
	if (Global_111638.f_9080 || func_10(0))
	{
		iVar0 = func_8();
		if (!func_22(iVar0))
		{
			return;
		}
		unk_0x5D96D8530B3D0904(&(Global_89496[iVar0].f_1), 5);
		Global_98780 = iParam0;
	}
}

int func_22(int iParam0)
{
	func_27();
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x2DA3D7F5B74119E5(5000);
	}
	iVar0 = Global_89496[iParam0];
	iVar1 = Global_76891.f_109[iVar0];
	func_26(iVar1, 1);
	unk_0xAE08886CF478C471(unk_0xD803B885F5E47A62(), 0);
	unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0);
	func_23(&(Global_111638.f_2358.f_539), iVar1);
	if (Global_92919 == Global_98781)
	{
		Global_111638.f_9080.f_330[iVar1].f_1++;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_89532[iVar1].f_15, 1))
	{
		if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x67E5ECB8FD7F5018(0);
		}
	}
	Global_111638.f_9080.f_330[iVar1].f_2++;
	Global_92919 = Global_98781;
	if (iParam0 == -1)
	{
		if (Global_111638.f_9080)
		{
		}
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_89496[iParam0].f_1, 4))
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_89496[iParam0].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_23(var uParam0, int iParam1)
{
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_111638.f_18528[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[0], 9))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_25(Global_111638.f_18528[iVar0], &vVar2, &fVar5))
			{
				Global_111638.f_18528[iVar0] = 318;
				func_24(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_96134[iVar0] = { 0f, 0f, 0f };
				Global_96134[iVar0].f_9 = 0f;
				Global_96134[iVar0].f_12 = 0f;
				Global_96134[iVar0].f_3 = { 0f, 0f, 0f };
				Global_96134[iVar0].f_10 = 0f;
				Global_96134[iVar0].f_13 = 0f;
				Global_96134[iVar0].f_6 = { 0f, 0f, 0f };
				Global_96134[iVar0].f_11 = 0f;
				Global_96134[iVar0].f_14 = 0f;
				Global_96134[iVar0].f_17 = { 0f, 0f, 0f };
				Global_96134[iVar0].f_26 = 0f;
				Global_96134[iVar0].f_20 = { 0f, 0f, 0f };
				Global_96134[iVar0].f_27 = 0f;
				Global_96134[iVar0].f_23 = { 0f, 0f, 0f };
				Global_96134[iVar0].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_24(var uParam0)
{
	*uParam0 = -15;
}

int func_25(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115,1569f, -1286,684f, 28,2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90,0089f, -1324,195f, 28,3203f };
			*fParam2 = 194,1887f;
			return 1;
			break;
		
		case 9:
			return func_25(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_25(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807,2979f, -48,4004f, 36,8173f };
			*fParam2 = 201,6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432,34f, -1887,383f, 70,5768f };
			*fParam2 = 350,0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666,204f, 1967,25f, 143,3213f };
			*fParam2 = 0,7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440,22f, -127,02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135,055f, -1759,64f, 27,8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687,6992f, -1744,03f, 28,3624f };
			*fParam2 = 267,1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56,5117f, -744,6122f, 43,1356f };
			*fParam2 = 340,0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506,485f, -1884,967f, 24,764f };
			*fParam2 = 22,9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555,958f, 953,6136f, 77,2063f };
			*fParam2 = 152,8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220,72f, -64,4177f, 68,2922f };
			*fParam2 = (250,4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048,07f, 3840,84f, 34,2238f };
			*fParam2 = 119,603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464,22f, -1592,98f, 38,73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744,79f + 0,0186f), (-465,86f - 0,0114f), 36,6399f };
			*fParam2 = 51,7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508,1f, 173,6278f };
			*fParam2 = 151,2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72,2278f, -1464,68f, 28,2915f };
			*fParam2 = 156,8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24,2312f };
			*fParam2 = 7,2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257,9167f, -1120,786f, 28,3684f };
			*fParam2 = 97,2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422,5858f, -978,6332f, 69,7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294,8521f, 882,9366f, 197,8527f };
			*fParam2 = 162,693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771,802f, 794,4316f, 138,4211f };
			*fParam2 = 128,9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495,595f, -1848,821f, 70,2075f };
			*fParam2 = 32,2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897,554f, 4032,241f, 50,1419f };
			*fParam2 = 192,8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725,8f, 33,0673f };
			*fParam2 = -3,7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4,0205f, -2975,341f, 798,4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709,0244f, -2916,479f, 5,0589f };
			*fParam2 = 355,326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643,5248f, -2917,325f, 5,1337f };
			*fParam2 = 334,1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595,2742f, -2819,183f, 5,0559f };
			*fParam2 = 46,8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314,4171f, 965,207f, 208,4024f };
			*fParam2 = 165,9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321,537f, 4975,455f, 25,9097f };
			*fParam2 = 221,228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111,1318f, 6316,479f, 30,4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731,3261f, 106,68f, 54,7169f };
			*fParam2 = 98,9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257,5f, -526,9999f, 30,2361f };
			*fParam2 = 220,9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736,9869f, -2050,678f, 28,2718f };
			*fParam2 = 83,9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262,5499f, -2540,15f, 4,8433f };
			*fParam2 = -64,1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315,7789f, 6201,355f, 30,4322f };
			*fParam2 = 127,7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118,0988f, -1264,916f, 32,3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37,5988f, -1351,52f, 28,2954f };
			*fParam2 = 90,0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558,2693f, 261,1167f, 82,07f };
			*fParam2 = 84,6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196,9999f, 507,9999f, 132,477f };
			*fParam2 = 99,6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312,01f, -1645,87f, 51,2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818,7374f, 6,4824f, 41,2432f };
			*fParam2 = 211,8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091,258f, 4714,852f, 40,1936f };
			*fParam2 = 136,0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762,59f, 3247,212f, 40,735f };
			*fParam2 = 27,0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764,013f, 3252,902f, 40,735f };
			*fParam2 = 27,0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_26(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_92729[iParam0] = 1;
		}
	}
	else
	{
		Global_92729[iParam0] = 0;
	}
}

void func_27()
{
	Global_98779 = 1;
	if (unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1))
	{
		if (unk_0xEA6BC48857E0AC4C(&Global_76854))
		{
			switch (func_28())
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
			switch (func_28())
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

int func_28()
{
	func_29();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_29()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_33(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_32(unk_0x16F2683693E537C9());
			if (func_31(iVar0) && (!func_30(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_31(Global_111638.f_2358.f_539.f_4321))
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

bool func_30(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_31(int iParam0)
{
	return iParam0 < 3;
}

int func_32(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_33(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_33(int iParam0)
{
	if (func_31(iParam0))
	{
		return func_34(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_34(int iParam0)
{
	return Global_1798[iParam0];
}

void func_35(char* sParam0)
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

void func_36(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
		{
			if (unk_0xDF1306B443CD3D15(iParam0, 0))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam0, 0))
				{
					if (unk_0xE4EDC4B0E92C078B(iLocal_908))
					{
						unk_0x142CC44DB769B57E(&iLocal_908);
					}
				}
				else if (!unk_0xE4EDC4B0E92C078B(iLocal_908))
				{
					iLocal_908 = func_40(iParam0, 0, 0);
				}
			}
		}
		else if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam0, 0))
		{
			if (unk_0xE4EDC4B0E92C078B(iLocal_908))
			{
				unk_0x142CC44DB769B57E(&iLocal_908);
			}
			if (!unk_0xE4EDC4B0E92C078B(iLocal_907))
			{
				unk_0x790015DC92C918E2();
				if (!iLocal_1092)
				{
					func_39("AHP_DROPOFF", 7500, 1);
					iLocal_1092 = 1;
				}
				iLocal_907 = func_37(vLocal_1088, 1);
				unk_0x8B4C4CA774181102(3f, 2f, 3);
			}
		}
		else
		{
			if (unk_0xE4EDC4B0E92C078B(iLocal_907))
			{
				unk_0x142CC44DB769B57E(&iLocal_907);
			}
			if (!unk_0xE4EDC4B0E92C078B(iLocal_908))
			{
				unk_0x790015DC92C918E2();
				if (!iLocal_1091)
				{
					func_39("AHP_GETBAKIN", 7500, 1);
					iLocal_1091 = 1;
				}
				iLocal_908 = func_40(iParam0, 0, 0);
			}
		}
	}
	else
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_908))
		{
			unk_0x142CC44DB769B57E(&iLocal_908);
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_907))
		{
			unk_0x142CC44DB769B57E(&iLocal_907);
		}
	}
}

int func_37(vector3 vParam0, int iParam3)
{
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_38(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, iParam3);
	return iVar0;
}

float func_38(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_39(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0);
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
		unk_0x516E63E474722206(iVar0, func_38(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_38(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_38(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
	}
	return iVar0;
}

void func_42(int iParam0, bool bParam1)
{
	Global_61522 = iParam0;
	if (!Global_61520)
	{
		Global_61520 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_73607)
		{
			if (Global_73608[iVar0] == iParam0)
			{
				Global_73608[iVar0].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_43(int iParam0, int iParam1)
{
	Global_61525 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_73607)
	{
		if (iParam1 == -1 || Global_73608[iVar0] == iParam1)
		{
			if (Global_73608[iVar0].f_6 != iParam0)
			{
				Global_73608[iVar0].f_6 = iParam0;
				Global_73608[iVar0].f_7 = 1;
				Global_73608[iVar0].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_44(int iParam0, int iParam1)
{
	Global_61523 = iParam0;
	Global_61524 = iParam1;
}

void func_45()
{
	if (bLocal_1099)
	{
		iVar0 = iLocal_910;
	}
	else
	{
		iVar0 = iLocal_909;
	}
	if (!unk_0x991B1F0980C62628())
	{
		switch (iLocal_1101)
		{
			case 0:
				if ((unk_0xDF1306B443CD3D15(iVar0, 0) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iVar0, 0)) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
				{
					iVar1 = 0;
					while (iVar1 < 3)
					{
						iVar2 = func_92(iVar1);
						if ((!unk_0xEB6A8945D1AC98A1(iVar2) && unk_0xC42A92762C58E1B9(iVar2, iVar0, 0)) && unk_0xA30B8362589C124A(iVar0, -1, 0) == iVar2)
						{
							if (!func_91(iVar2) && func_90(iVar2, 0))
							{
								if (func_89(iVar2, 0))
								{
									iLocal_1133 = 0;
									iLocal_1102 = iVar1;
									iLocal_1101 = 1;
								}
							}
						}
						iVar1++;
					}
				}
				break;
			
			case 1:
				if (unk_0xDF1306B443CD3D15(iVar0, 0))
				{
					if ((((unk_0xEB6A8945D1AC98A1(func_92(iLocal_1102)) || unk_0xA30B8362589C124A(iVar0, -1, 0) != func_92(iLocal_1102)) || !unk_0xC42A92762C58E1B9(func_92(iLocal_1102), iVar0, 0)) || !func_91(func_92(iLocal_1102))) || !unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iVar0, 0))
					{
						func_88(func_92(iLocal_1102));
						iLocal_1101 = 0;
					}
					else
					{
						switch (iLocal_1133)
						{
							case 0:
								iLocal_1133 = 2;
								break;
							
							case 1:
								if (unk_0xD1B4D22E0BA9B0C8(Local_1109, Local_1109.f_1, Local_1112, Local_1112.f_1))
								{
									iLocal_1133++;
								}
								break;
							
							case 2:
								unk_0xE9362E4D600DD12A(func_92(iLocal_1102), iVar0, vLocal_1088, 15f, 0, 1938952078, 786484, 5f, 5f);
								if (vdist(unk_0x68F4C0EC296D3901(iVar0, 1), vLocal_1088) > 250f)
								{
									unk_0x07FBA474CBC0C266(iVar0, vdist(unk_0x68F4C0EC296D3901(iLocal_909, 1), vLocal_1088));
								}
								iLocal_1133++;
								break;
							
							case 3:
								if (unk_0x3D1053F9EB43B7AD(iVar0, 697,6884f, -1013,364f, 27,4968f, 688,3482f, -1013,179f, 22,32968f, 29,25f, 0, 1, 0))
								{
									if (vdist(unk_0x68F4C0EC296D3901(iVar0, 1), vLocal_1103) < vdist(unk_0x68F4C0EC296D3901(iVar0, 1), vLocal_1106))
									{
										if (bLocal_1099)
										{
											unk_0xE9362E4D600DD12A(func_92(iLocal_1102), iVar0, vLocal_1106, 5f, 0, unk_0x134B62B726CEC8E6(iVar0), 262144, 2f, 2f);
										}
										else
										{
											unk_0x27F3789FF35EEDF1(func_92(iLocal_1102), iVar0, vLocal_1088, 180f, 1, 15f, 0);
										}
									}
									else if (bLocal_1099)
									{
										unk_0xE9362E4D600DD12A(func_92(iLocal_1102), iVar0, vLocal_1103, 5f, 0, unk_0x134B62B726CEC8E6(iVar0), 262144, 2f, 2f);
									}
									else
									{
										unk_0x27F3789FF35EEDF1(func_92(iLocal_1102), iVar0, vLocal_1088, 0f, 1, 15f, 0);
									}
									iLocal_1133++;
								}
								break;
							
							case 4:
								break;
							}
						}
				}
				func_46();
				break;
		}
	}
	else if (iLocal_1101 != 0)
	{
		if (func_88(func_92(iLocal_1102)))
		{
			iLocal_1101 = 0;
		}
	}
}

void func_46()
{
	bVar0 = false;
	if (!unk_0xEB6A8945D1AC98A1(func_92(iLocal_1102)) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
	{
		if ((((unk_0xC844350D5D58C99A(iLocal_909) && unk_0xDF1306B443CD3D15(iLocal_909, 0)) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_909, 0)) && unk_0xC42A92762C58E1B9(func_92(iLocal_1102), iLocal_909, 0)) || (((unk_0xC844350D5D58C99A(iLocal_910) && unk_0xDF1306B443CD3D15(iLocal_910, 0)) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_910, 0)) && unk_0xC42A92762C58E1B9(func_92(iLocal_1102), iLocal_910, 0)))
		{
			bVar0 = true;
		}
	}
	switch (iLocal_1115)
	{
		case 0:
			iVar1 = func_85();
			if (func_71(0, 1, 145, 0, iVar1, &cLocal_1116, &cLocal_1120, 1))
			{
				func_70(&uLocal_921, 0);
				func_70(&uLocal_921, 1);
				func_70(&uLocal_921, 2);
				if (func_28() == 1)
				{
					func_69(&uLocal_921, 0, func_92(0), "MICHAEL", 0, 1);
					func_69(&uLocal_921, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
				}
				else
				{
					func_69(&uLocal_921, 1, func_92(1), "FRANKLIN", 0, 1);
					func_69(&uLocal_921, 0, unk_0x16F2683693E537C9(), "MICHAEL", 0, 1);
				}
				if (!iLocal_1125)
				{
					iLocal_1132 = unk_0x1C0640BA9A7327B3();
				}
				iLocal_1115 = 1;
			}
			break;
		
		case 1:
			if (bVar0)
			{
				if ((unk_0x1C0640BA9A7327B3() - iLocal_1132) > 5000 || iLocal_1125)
				{
					if (func_68(&uLocal_921, &cLocal_1116, &cLocal_1120, 8, 0, 0, 0))
					{
						iLocal_1125 = 1;
						iLocal_1115 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!bLocal_1124)
			{
				if (!bVar0)
				{
					cLocal_1126 = { func_67() };
					func_66();
					bLocal_1124 = true;
				}
			}
			else if (bVar0)
			{
				if (func_50(&uLocal_921, &cLocal_1116, &cLocal_1120, &cLocal_1126, 8, 0, 0))
				{
					bLocal_1124 = false;
				}
			}
			if (unk_0x991B1F0980C62628() || (!bLocal_1124 && !func_49()))
			{
				func_47();
				iLocal_1115 = 3;
				iLocal_1132 = unk_0x1C0640BA9A7327B3();
			}
			break;
		
		case 3:
			if ((unk_0x1C0640BA9A7327B3() - iLocal_1132) > 10000)
			{
				iLocal_1115 = 0;
			}
			break;
	}
}

void func_47()
{
	Global_19671 = 0;
	func_48();
}

void func_48()
{
	if (unk_0x25037C66EB32B076())
	{
		unk_0x8BD0DC8EEFDC56D8();
		Global_21816 = 0;
		unk_0x5CEB4DB888A62073(1);
		Global_20805 = 6;
		return;
	}
}

int func_49()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

bool func_50(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_65(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_51(sParam2, iParam4, 0);
}

int func_51(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x5CEB4DB888A62073(0);
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
					func_64();
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
		if (func_63(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_62();
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
				func_61();
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
				if (func_60())
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
			if (func_59())
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
			func_58();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_57();
		func_52();
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
		func_64();
	}
	return 0;
}

void func_52()
{
	if (!func_53())
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

int func_53()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_56())
	{
		return 0;
	}
	if (func_54(unk_0xD803B885F5E47A62()))
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

bool func_54(int iParam0)
{
	return func_55(iParam0, 20);
}

bool func_55(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_56()
{
	return -1;
}

void func_57()
{
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0]), "", 24);
		iVar0++;
	}
	unk_0x5CEB4DB888A62073(0);
	Global_20805 = 1;
}

void func_58()
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

int func_59()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_60()
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

void func_61()
{
	if (func_30(14))
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
		Global_19486 = func_28();
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

void func_62()
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

bool func_63(int iParam0, int iParam1)
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

void func_64()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if ((unk_0x1EE04CEA36EF313B() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		unk_0x5CEB4DB888A62073(0);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(1);
		Global_20805 = 6;
		return;
	}
}

void func_65(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_66()
{
	Global_19671 = 0;
	func_64();
}

struct<6> func_67()
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

bool func_68(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_65(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_51(sParam2, iParam3, 0);
}

void func_69(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_70(var uParam0, int iParam1)
{
	if (uParam0[iParam1]->f_7 == 1)
	{
		uParam0[iParam1]->f_7 = 0;
	}
}

int func_71(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7)
{
	iVar0 = func_82(iParam0);
	iVar1 = func_82(iParam1);
	iVar2 = func_82(iParam2);
	if ((iVar0 == 7 || iVar1 == 7) || (iVar2 == 7 && iParam2 != 145))
	{
		return 0;
	}
	if (iVar2 == 7)
	{
		iVar5 = func_81(iVar0, iVar1);
		if (iVar5 >= 9)
		{
			return 0;
		}
		if (((iParam0 == 1 && iParam1 == 19) && func_5(137)) && iParam3 == 1)
		{
			if (func_80(&(Global_111638.f_18098.f_388), iParam3, &iVar3, &iVar4, iParam4))
			{
				if (bParam7)
				{
					func_75(&(Global_111638.f_18098.f_388), iParam3, iVar3);
				}
				iVar3 += 6;
			}
			else
			{
				return 0;
			}
		}
		else if (func_80(&(Global_111638.f_18098.f_175[iVar5].f_9), iParam3, &iVar3, &iVar4, iParam4))
		{
			if (bParam7)
			{
				func_75(&(Global_111638.f_18098.f_175[iVar5].f_9), iParam3, iVar3);
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar6 = func_74(iVar0, iVar1, iVar2);
		if (iVar6 >= 2)
		{
			return 0;
		}
		if (func_80(&(Global_111638.f_18098.f_347[iVar6]), iParam3, &iVar3, &iVar4, iParam4))
		{
			if (bParam7)
			{
				func_75(&(Global_111638.f_18098.f_347[iVar6]), iParam3, iVar3);
			}
		}
		else
		{
			return 0;
		}
	}
	*sParam6 = { func_72(iVar0, iVar1, iVar2, 2) };
	*sParam5 = { *sParam6 };
	StringConCat(sParam5, "AU", 16);
	StringConCat(sParam6, "_", 16);
	if (iVar3 == 0)
	{
		StringConCat(sParam6, "A", 16);
	}
	else if (iVar3 == 1)
	{
		StringConCat(sParam6, "B", 16);
	}
	else if (iVar3 == 2)
	{
		StringConCat(sParam6, "C", 16);
	}
	else if (iVar3 == 3)
	{
		StringConCat(sParam6, "D", 16);
	}
	else if (iVar3 == 4)
	{
		StringConCat(sParam6, "E", 16);
	}
	else if (iVar3 == 5)
	{
		StringConCat(sParam6, "F", 16);
	}
	else if (iVar3 == 6)
	{
		StringConCat(sParam6, "G", 16);
	}
	else if (iVar3 == 7)
	{
		StringConCat(sParam6, "H", 16);
	}
	else if (iVar3 == 8)
	{
		StringConCat(sParam6, "I", 16);
	}
	else if (iVar3 == 9)
	{
		StringConCat(sParam6, "J", 16);
	}
	else if (iVar3 == 10)
	{
		StringConCat(sParam6, "K", 16);
	}
	else if (iVar3 == 11)
	{
		StringConCat(sParam6, "L", 16);
	}
	else
	{
		StringConCat(sParam6, "X", 16);
		return 0;
	}
	if (iParam3 == 0)
	{
		StringConCat(sParam6, "F", 16);
	}
	else if (iParam3 == 1)
	{
		StringConCat(sParam6, "M", 16);
	}
	else if (iParam3 == 2)
	{
		StringConCat(sParam6, "D", 16);
	}
	else
	{
		StringConCat(sParam6, "X", 16);
		return 0;
	}
	StringIntConCat(sParam6, iVar4, 16);
	return 1;
}

struct<4> func_72(int iParam0, int iParam1, int iParam2, int iParam3)
{
	StringCopy(&Var0, "F", 16);
	if (iParam3 == 0)
	{
		StringConCat(&Var0, "p", 16);
		StringConCat(&Var0, func_73(iParam0), 16);
		StringConCat(&Var0, func_73(iParam1), 16);
	}
	else if (iParam3 == 1)
	{
		StringConCat(&Var0, "a", 16);
		StringConCat(&Var0, func_73(iParam0), 16);
		StringConCat(&Var0, func_73(iParam1), 16);
	}
	else if (iParam3 == 2)
	{
		StringConCat(&Var0, "c", 16);
		if (iParam2 < iParam1)
		{
			iVar4 = iParam1;
			iParam1 = iParam2;
			iParam2 = iVar4;
		}
		if (iParam1 < iParam0)
		{
			iVar5 = iParam0;
			iParam0 = iParam1;
			iParam1 = iVar5;
		}
		if (iParam2 < iParam1)
		{
			iVar6 = iParam1;
			iParam1 = iParam2;
			iParam2 = iVar6;
		}
		StringConCat(&Var0, func_73(iParam0), 16);
		StringConCat(&Var0, func_73(iParam1), 16);
		if (iParam2 != 7)
		{
			StringConCat(&Var0, func_73(iParam2), 16);
		}
	}
	else
	{
		StringConCat(&Var0, "x", 16);
		StringConCat(&Var0, func_73(iParam0), 16);
		StringConCat(&Var0, func_73(iParam1), 16);
		if (iParam2 != 7)
		{
			StringConCat(&Var0, func_73(iParam2), 16);
		}
	}
	return Var0;
}

char* func_73(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "M";
			break;
		
		case 1:
			return "F";
			break;
		
		case 2:
			return "T";
			break;
		
		case 3:
			return "L";
			break;
		
		case 4:
			return "J";
			break;
		
		case 5:
			return "A";
			break;
	}
	return "X";
}

int func_74(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 == iParam1 || iParam1 == iParam2) || iParam2 == iParam0)
	{
		return 3;
	}
	if (((iParam0 == 1 || iParam1 == 1) || iParam2 == 1) && ((iParam0 == 2 || iParam1 == 2) || iParam2 == 2))
	{
		if ((iParam0 == 0 || iParam1 == 0) || iParam2 == 0)
		{
			return 0;
		}
		if ((iParam0 == 3 || iParam1 == 3) || iParam2 == 3)
		{
			return 1;
		}
	}
	return 3;
}

void func_75(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	func_79((*uParam0)[iParam2], &iVar0, &iVar1, &iVar2);
	func_78((*uParam0)[iParam2], &iVar3, &iVar4, &iVar5);
	func_77((*uParam0)[iParam2], &iVar6);
	if (iParam1 == 0)
	{
		iVar0++;
		if (iVar0 > iVar3)
		{
			iVar0 = iVar3;
		}
	}
	else if (iParam1 == 1)
	{
		iVar1++;
		if (iVar1 > iVar4)
		{
			iVar1 = iVar4;
		}
	}
	else if (iParam1 == 2)
	{
		iVar2++;
		if (iVar2 > iVar5)
		{
			iVar2 = iVar5;
		}
	}
	func_76(uParam0[iParam2], iVar0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6);
}

void func_76(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	*uParam0 = 0;
	*uParam0 = (*uParam0 || shift_left(iParam1 & 15, 28));
	*uParam0 = (*uParam0 || shift_left(iParam2 & 15, 24));
	*uParam0 = (*uParam0 || shift_left(iParam3 & 15, 20));
	*uParam0 = (*uParam0 || shift_left(iParam4 & 15, 16));
	*uParam0 = (*uParam0 || shift_left(iParam5 & 15, 12));
	*uParam0 = (*uParam0 || shift_left(iParam6 & 15, 8));
	*uParam0 = (*uParam0 || iParam7 & 255);
}

void func_77(var uParam0, int iParam1)
{
	*iParam1 = uParam0 & 255;
}

void func_78(int iParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam1 = shift_right(iParam0, 16) & 15;
	*iParam2 = shift_right(iParam0, 12) & 15;
	*iParam3 = shift_right(iParam0, 8) & 15;
}

void func_79(int iParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam1 = shift_right(iParam0, 28) & 15;
	*iParam2 = shift_right(iParam0, 24) & 15;
	*iParam3 = shift_right(iParam0, 20) & 15;
}

int func_80(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	*iParam2 = 0;
	while (*iParam2 < 6)
	{
		iVar0 = 0;
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar4 = 0;
		iVar5 = 0;
		iVar6 = 0;
		func_77((*uParam0)[*iParam2], &iVar6);
		if (unk_0xEAE0D21A50E6C7F4(iParam4, iVar6))
		{
			func_79((*uParam0)[*iParam2], &iVar0, &iVar1, &iVar2);
			func_78((*uParam0)[*iParam2], &iVar3, &iVar4, &iVar5);
			if (iParam1 == 0)
			{
				if (iVar0 < iVar3)
				{
					*uParam3 = iVar0;
					return 1;
				}
			}
			else if (iParam1 == 1)
			{
				if (iVar1 < iVar4)
				{
					*uParam3 = iVar1;
					return 1;
				}
			}
			else if (iParam1 == 2)
			{
				if (iVar2 < iVar5)
				{
					*uParam3 = iVar2;
					return 1;
				}
			}
		}
		*iParam2++;
	}
	*iParam2 = 0;
	*uParam3 = 0;
	return 0;
}

int func_81(int iParam0, int iParam1)
{
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			iVar0 = iParam1;
			iParam1 = iParam0;
			iParam0 = iVar0;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 10;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 8;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 6;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 10;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 7;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
	}
	return 10;
}

int func_82(int iParam0)
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < func_84())
	{
		return func_83(iParam0);
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == func_84())
	{
		return 6;
	}
	if (iParam0 == 168)
	{
		return 6;
	}
	return 6;
}

var func_83(int iParam0)
{
	return Global_1798[iParam0].f_11;
}

int func_84()
{
	if (Global_30768 == 0 || Global_30768 == 2)
	{
		return 167;
	}
	return 161;
}

int func_85()
{
	iVar0 = 0;
	unk_0x5D96D8530B3D0904(&iVar0, 1);
	if (Local_49.f_109 == 0)
	{
		unk_0x5D96D8530B3D0904(&iVar0, 2);
	}
	if (func_5(128))
	{
		unk_0x5D96D8530B3D0904(&iVar0, 4);
		if (!func_87(24))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 21);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&iVar0, 3);
	}
	if (func_5(131))
	{
		unk_0x5D96D8530B3D0904(&iVar0, 6);
	}
	else
	{
		unk_0x5D96D8530B3D0904(&iVar0, 5);
	}
	if (func_5(137))
	{
		unk_0x5D96D8530B3D0904(&iVar0, 9);
	}
	else if (func_5(126))
	{
		unk_0x5D96D8530B3D0904(&iVar0, 8);
	}
	else
	{
		unk_0x5D96D8530B3D0904(&iVar0, 7);
	}
	if (func_5(137))
	{
		if (!func_5(135) && !func_5(136))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 10);
		}
		if (func_5(135))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 11);
		}
		else
		{
			unk_0x5D96D8530B3D0904(&iVar0, 13);
		}
		if (func_5(136))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 12);
		}
		else
		{
			unk_0x5D96D8530B3D0904(&iVar0, 14);
		}
	}
	if (!func_87(20))
	{
		unk_0x5D96D8530B3D0904(&iVar0, 15);
	}
	if (!func_87(46))
	{
		unk_0x5D96D8530B3D0904(&iVar0, 16);
	}
	if (func_5(129) && !unk_0xEAE0D21A50E6C7F4(iVar0, 9))
	{
		unk_0x5D96D8530B3D0904(&iVar0, 17);
	}
	if (func_87(40) && !func_87(43))
	{
		unk_0x5D96D8530B3D0904(&iVar0, 18);
	}
	if (func_87(43) && !func_87(42))
	{
		unk_0x5D96D8530B3D0904(&iVar0, 19);
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (func_86(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1)))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 20);
		}
	}
	return iVar0;
}

int func_86(struct<2> Param0, float fParam2)
{
	if (Param0.f_1 < 400f)
	{
		if (Param0 < 1400f)
		{
			if (Param0 > -1900f)
			{
				if (Param0.f_1 > -3500f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_87(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_330[iParam0];
}

int func_88(int iParam0)
{
	return 0;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_32(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_92(iVar0) != iParam0)
		{
			return 0;
		}
		if (!unk_0xEAE0D21A50E6C7F4(Global_94598, iVar0))
		{
			return 0;
		}
		unk_0x0674E58A79778E99(&Global_94598, iVar0);
		return 1;
	}
	return 0;
}

int func_89(int iParam0, int iParam1)
{
	return 0;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_32(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_92(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_94598, iVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0x16F2683693E537C9())
			{
				return 0;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_94597, iVar0))
		{
			unk_0xDAB3108F02A4255A(iParam0, 0, 0);
			unk_0xE8832A9E16A57A1F(iParam0, 0, 1);
			unk_0x5D96D8530B3D0904(&Global_94598, iVar0);
			return 1;
		}
	}
	return 0;
}

int func_90(int iParam0, int iParam1)
{
	return 0;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_32(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_92(iVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0x16F2683693E537C9())
			{
				return 0;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_94597, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_91(int iParam0)
{
	return 0;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_32(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_92(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_94598, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_92(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_28())
	{
		return unk_0x16F2683693E537C9();
	}
	return Global_96222[func_93(iParam0)];
}

int func_93(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

int func_94()
{
	if (((unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0)) && unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0) != iLocal_909) && unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0) != iLocal_910)
	{
		if (unk_0x4906F8A34E9F4814(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 1938952078))
		{
			iLocal_909 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			unk_0x73270B3C9CC833FD(iLocal_909, true, 1);
			iLocal_1094 = 0;
			return 1;
		}
		if (unk_0x4906F8A34E9F4814(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), -1323100960) || unk_0x4906F8A34E9F4814(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), -442313018))
		{
			if (unk_0xC844350D5D58C99A(unk_0xC102CE429C03E382(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0))))
			{
				if (unk_0xDF1306B443CD3D15(unk_0x96A5FE5834B81CE7(unk_0xC102CE429C03E382(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0))), 0))
				{
					iLocal_910 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
					unk_0x73270B3C9CC833FD(iLocal_910, true, 1);
					if (unk_0x96A5FE5834B81CE7(unk_0xC102CE429C03E382(iLocal_910)) != iLocal_909)
					{
						iLocal_909 = unk_0x96A5FE5834B81CE7(unk_0xC102CE429C03E382(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)));
						iLocal_1094 = 0;
						unk_0x73270B3C9CC833FD(iLocal_909, true, 1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_95()
{
	bVar0 = false;
	if (iLocal_1134 < 8)
	{
		if (iLocal_1134 < 4)
		{
			if (unk_0xC844350D5D58C99A(Global_95241.f_9[iLocal_1134]))
			{
				if (!unk_0xEB6A8945D1AC98A1(Global_95241.f_9[iLocal_1134]))
				{
					if (vdist2(unk_0x68F4C0EC296D3901(Global_95241.f_9[iLocal_1134], 1), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1)) < 900f)
					{
						unk_0x73270B3C9CC833FD(Global_95241.f_9[iLocal_1134], true, 1);
						iLocal_911[iLocal_1134] = Global_95241.f_9[iLocal_1134];
						bVar0 = true;
						Global_95241.f_9[iLocal_1134] = 0;
					}
					else if (vdist2(unk_0x68F4C0EC296D3901(Global_95241.f_9[iLocal_1134], 1), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1)) > 2500f && unk_0x03068588A1FCED1A(Global_95241.f_9[iLocal_1134]))
					{
						unk_0x73270B3C9CC833FD(Global_95241.f_9[iLocal_1134], true, 1);
						unk_0xEBA53F35D0085654(&(Global_95241.f_9[iLocal_1134]));
					}
				}
			}
		}
		if (!bVar0)
		{
			if (unk_0xE51E576EA6B739AC(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), 30f, 1, 1, &iVar1, 0, 1, 21))
			{
				if ((unk_0xC844350D5D58C99A(iVar1) && !unk_0xEB6A8945D1AC98A1(iVar1)) && !func_96(iVar1, &iLocal_911))
				{
					unk_0x73270B3C9CC833FD(iVar1, true, 1);
					iLocal_911[iLocal_1134] = iVar1;
					bVar0 = true;
				}
			}
		}
		if (bVar0)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_911[iLocal_1134]))
			{
				unk_0x6DF7BF67E86AAE86(iLocal_911[iLocal_1134], iLocal_920);
				unk_0xCB9603FE12CFDEF4(unk_0xD803B885F5E47A62(), 1, 0);
				unk_0xAFF39FB306F8E232(iLocal_911[iLocal_1134], 17, 0);
				unk_0x0F52891B1CED828B(unk_0xD803B885F5E47A62(), 0f);
			}
			iLocal_1134++;
		}
	}
}

int func_96(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			if (unk_0xC844350D5D58C99A((*iParam1)[iVar0]))
			{
				if (iParam0 == (*iParam1)[iVar0])
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_97()
{
	if (bLocal_1099)
	{
		if (((!unk_0xDF1306B443CD3D15(iLocal_910, 0) || (unk_0xDF1306B443CD3D15(iLocal_910, 0) && !unk_0x50B5F6F3C29E9380(iLocal_909, iLocal_910))) || (unk_0xDF1306B443CD3D15(iLocal_909, 0) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_909, 0))) || (unk_0xC844350D5D58C99A(iLocal_910) && vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(iLocal_910, 1)) > 250f))
		{
			bLocal_1099 = false;
		}
	}
	else if ((unk_0xDF1306B443CD3D15(iLocal_910, 0) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_910, 0)) && unk_0x50B5F6F3C29E9380(iLocal_909, iLocal_910))
	{
		bLocal_1099 = true;
	}
}

void func_98(int iParam0)
{
	Global_61513 = 0;
	if (!Global_61737[iParam0] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_73607)
	{
		if (Global_73608[iVar1] == iParam0)
		{
			bVar0 = true;
			Global_73608[iVar1].f_1 = 1;
			Global_73608[iVar1].f_2 = 0f;
			if (Global_73608[iVar1].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

void func_99()
{
	if ((unk_0xC844350D5D58C99A(Global_95241[0]) && unk_0xDF1306B443CD3D15(Global_95241[0], 0)) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_95241[0], 0))
	{
		unk_0x73270B3C9CC833FD(Global_95241[0], true, 1);
		iLocal_909 = Global_95241[0];
		Global_95241[0] = 0;
	}
	if ((unk_0xC844350D5D58C99A(Global_95241[1]) && unk_0xDF1306B443CD3D15(Global_95241[1], 0)) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_95241[1], 0))
	{
		if (unk_0xC844350D5D58C99A(unk_0xC102CE429C03E382(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0))) && unk_0xDF1306B443CD3D15(unk_0x96A5FE5834B81CE7(unk_0xC102CE429C03E382(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0))), 0))
		{
			unk_0x73270B3C9CC833FD(Global_95241[1], true, 1);
			iLocal_910 = Global_95241[1];
			Global_95241[1] = 0;
			unk_0x73270B3C9CC833FD(Global_95241[0], true, 1);
			iLocal_909 = Global_95241[0];
			Global_95241[0] = 0;
			bLocal_1099 = true;
		}
	}
	unk_0xD7992BEF7A9D109E("AHPREP1", 0);
	while (!unk_0x67C1D9E5B91B2E37(0))
	{
		wait(0);
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
	}
	unk_0xF63400DBE3303D26("FireMen", &iLocal_920);
	unk_0x0E2400AB9174FA81(5, 1862763509, iLocal_920);
	unk_0x0E2400AB9174FA81(5, iLocal_920, 1862763509);
	if (func_10(0))
	{
		unk_0x523BCC9DC80CD82F(-1229853272);
		while (!unk_0xB87F6CF6E5628C67(-1229853272))
		{
			wait(0);
		}
		vVar0 = { 202,0504f, -1655,773f, 28,8031f };
		iLocal_1135 = unk_0x7D6CA5F52B3748BF(vVar0 - Vector(10f, 30f, 30f), vVar0 + Vector(10f, 30f, 30f), 0, 1, 1, 1);
		unk_0x536F1BE96C726C4B(vVar0, 20f, 1, 0, 0, false);
		iLocal_911[0] = unk_0x36F2404464202779(21, -1229853272, 215,7186f, -1644,622f, 28,7719f, 357,5736f, 1, true);
		iLocal_911[1] = unk_0x36F2404464202779(21, -1229853272, 214,4446f, -1643,72f, 28,7776f, 279,1055f, 1, true);
		iLocal_911[2] = unk_0x36F2404464202779(21, -1229853272, 217,0826f, -1644,117f, 28,7155f, 72,8262f, 1, true);
		iVar3 = 0;
		while (iVar3 <= (iLocal_911 - 1))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_911[iVar3]))
			{
				unk_0x509B8296EBA9B408(iLocal_911[iVar3], "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
				unk_0xAFF39FB306F8E232(iLocal_911[iVar3], 17, 0);
				unk_0x6DF7BF67E86AAE86(iLocal_911[iVar3], iLocal_920);
			}
			iVar3++;
		}
		unk_0x0E2400AB9174FA81(255, 1862763509, iLocal_920);
		unk_0x0E2400AB9174FA81(255, iLocal_920, 1862763509);
		iLocal_1086 = -1;
		if (func_106())
		{
			func_105(354,3055f, -1722,206f, 28,259f, 109,6154f, 1, 0);
			func_102(0, -1, 1);
		}
	}
	if (!unk_0x0F1CCD77290EE12F() && !unk_0x7BCE0E6DD4A1F749())
	{
		unk_0x82E51BCA72537B6C(500);
	}
	if (func_17())
	{
		iLocal_1095 = 1;
	}
	if (!func_10(0))
	{
		unk_0xC92DB9682A650680("AHP1_START");
	}
	iLocal_1094 = 0;
	func_100(68);
}

void func_100(int iParam0)
{
	Global_94599 = 0;
	switch (iParam0)
	{
		case 72:
			func_101(2);
			func_101(4);
			break;
		
		case 73:
			func_101(0);
			func_101(1);
			func_101(7);
			break;
		
		case 92:
			func_101(10);
			func_101(9);
			func_101(13);
			func_101(6);
			break;
		
		case 68:
			func_101(11);
			break;
		
		case 78:
			func_101(14);
			break;
		
		case 79:
			func_101(3);
			break;
		
		default:
			break;
	}
}

void func_101(int iParam0)
{
	unk_0x5D96D8530B3D0904(&Global_94599, iParam0);
}

void func_102(int iParam0, int iParam1, int iParam2)
{
	if (func_106() && func_104())
	{
		while (Global_98739 != 6)
		{
			wait(0);
		}
		unk_0x21387C9EECC2B220(0);
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
		func_103(0);
	}
}

void func_103(int iParam0)
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

bool func_104()
{
	return unk_0xEAE0D21A50E6C7F4(Global_98744.f_20, 13);
}

void func_105(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_106())
	{
		unk_0x256D93AFAE851A7A(0);
		unk_0x0674E58A79778E99(&(Global_98744.f_20), 2);
		unk_0x21387C9EECC2B220(1);
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
		func_103(1);
	}
}

int func_106()
{
	if (Global_98744 == 10 || Global_98744 == 9)
	{
		return 1;
	}
	return 0;
}

void func_107()
{
	func_108();
	if (unk_0xC844350D5D58C99A(iLocal_909))
	{
		unk_0x046C362CF15F1935(&iLocal_909);
	}
	unk_0x2952D66A502EA873(iLocal_1135, 0);
	unk_0x10FAF14A60A0DBE1();
}

void func_108()
{
	Global_94599 = 0;
}

void func_109()
{
	if (unk_0x1FBF08B001C4788A("buddyDeathResponse"))
	{
		start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_111638.f_9080 || func_10(0))
	{
		if (!func_110())
		{
			iVar0 = func_8();
			if (iVar0 != -1)
			{
				if (!func_22(iVar0))
				{
					return;
				}
				unk_0x5D96D8530B3D0904(&(Global_89496[iVar0].f_1), 5);
				return;
			}
		}
		else
		{
			func_27();
		}
	}
}

int func_110()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return 0;
	}
	return 1;
}

void func_111()
{
	if (iLocal_1095 == 1)
	{
		func_15(354,3055f, -1722,206f, 28,259f, 109,6154f);
	}
}

