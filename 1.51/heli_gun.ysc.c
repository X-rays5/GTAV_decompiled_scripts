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
	fLocal_313 = 0,1f;
	iLocal_328 = -2;
	vLocal_333 = { 0,1f, 0,1f, 0,1f };
	fLocal_336 = 0f;
	if (unk_0x8CD06866876216F2())
	{
		func_226(ScriptParam_0);
	}
	while (true)
	{
		func_225();
		if (func_215())
		{
			func_210();
		}
		func_208();
		if (func_195())
		{
			func_210();
		}
		func_194(&uLocal_288, 0, 0);
		if (func_193(unk_0xD803B885F5E47A62()))
		{
			unk_0x73591FF5CCBBB2EA(1);
		}
		if (unk_0x8CD06866876216F2() && unk_0x57270EE11514DC67() != -1)
		{
			switch (Local_350[unk_0x57270EE11514DC67()])
			{
				case 0:
					func_192(1);
					break;
				
				case 1:
					if ((func_191(iLocal_339) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && unk_0x24129324CD7C13D0(unk_0x16F2683693E537C9(), 184, 1) != Global_1590535[unk_0xD803B885F5E47A62()].f_732)
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_330, 0))
						{
							unk_0x5D96D8530B3D0904(&iLocal_330, 0);
							if (unk_0x24129324CD7C13D0(unk_0x16F2683693E537C9(), 184, 1))
							{
								unk_0x5D96D8530B3D0904(&iLocal_330, 1);
							}
						}
						if (!Global_1573984)
						{
							unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 184, Global_1590535[unk_0xD803B885F5E47A62()].f_732);
						}
					}
					func_1();
					Global_2462227 = 0;
					if (iLocal_349 >= 3)
					{
						func_192(3);
					}
					break;
				
				case 2:
					break;
				
				case 3:
					func_210();
					break;
				
				default:
					break;
				}
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (iLocal_349)
			{
				case 0:
					iLocal_349 = 1;
					break;
				
				case 1:
					break;
				
				case 2:
					break;
				
				case 3:
					func_210();
					break;
				
				default:
					break;
				}
		}
	}
}

void func_1()
{
	func_190();
	func_188();
	func_187();
	func_186();
	if (((unk_0xDF1306B443CD3D15(iLocal_339, 0) && unk_0xA0CCD09012AED177(iLocal_339)) && !func_185(unk_0xD803B885F5E47A62()) == 129) && (((bLocal_301 || bLocal_302) || bLocal_303) || Global_1319116 != -1))
	{
		func_184();
		bLocal_298 = true;
	}
	else
	{
		bLocal_298 = false;
	}
	Global_1573326 = 0;
	func_183();
	func_182();
	if (func_181(&Local_73))
	{
		if (!iLocal_312 && func_180())
		{
			unk_0x7352ACF3368DF65F("ForceSniperAudio", 1);
			iLocal_312 = 1;
		}
	}
	else if (iLocal_312)
	{
		unk_0x7352ACF3368DF65F("ForceSniperAudio", 0);
		iLocal_312 = 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_226417, 1))
	{
		if (iLocal_343 == unk_0xD803B885F5E47A62())
		{
			if (!iLocal_310)
			{
				unk_0xE793BC58855FBB31(1, -123497569, iLocal_339, unk_0x16F2683693E537C9());
				iLocal_310 = 1;
			}
		}
	}
	else if (func_179())
	{
		if (iLocal_343 == unk_0xD803B885F5E47A62())
		{
			if (!iLocal_310 && iLocal_295 != -42959138)
			{
				unk_0xE793BC58855FBB31(1, -123497569, iLocal_339, unk_0x16F2683693E537C9());
				iLocal_310 = 1;
			}
		}
	}
	else if (iLocal_343 == unk_0xD803B885F5E47A62())
	{
		if (iLocal_310)
		{
			unk_0xE793BC58855FBB31(0, -123497569, iLocal_339, unk_0x16F2683693E537C9());
			iLocal_310 = 0;
		}
	}
	func_177();
	func_175();
	func_173();
	switch (Local_350[unk_0x57270EE11514DC67()].f_1)
	{
		case 0:
			func_172();
			func_164();
			func_161();
			Global_1590535[unk_0xD803B885F5E47A62()].f_732 = 0;
			Global_1573326 = 0;
			if (func_150())
			{
				func_149(1);
			}
			else if ((bLocal_301 || bLocal_302) || bLocal_303)
			{
				if (func_148(iLocal_339))
				{
					unk_0x38C3A68D7861DCFD(0, 24, 1);
					unk_0x38C3A68D7861DCFD(0, 66, 1);
					unk_0x38C3A68D7861DCFD(0, 67, 1);
					unk_0x38C3A68D7861DCFD(0, 68, 1);
					unk_0x38C3A68D7861DCFD(0, 114, 1);
					unk_0x38C3A68D7861DCFD(0, 69, 1);
					unk_0x38C3A68D7861DCFD(0, 70, 1);
					unk_0x38C3A68D7861DCFD(0, 91, 1);
					unk_0x38C3A68D7861DCFD(0, 92, 1);
					unk_0x38C3A68D7861DCFD(0, 99, 1);
					unk_0x38C3A68D7861DCFD(0, 100, 1);
					unk_0x38C3A68D7861DCFD(0, 37, 1);
				}
			}
			func_147(&uLocal_292);
			break;
		
		case 1:
			func_146();
			func_145(1);
			if (Global_1319116 != -1)
			{
				func_147(&uLocal_292);
				func_144(&uLocal_292, 0, 0);
			}
			if (Global_1319110 != -1 || Global_1319116 != -1)
			{
				unk_0x53491B90E4FD0E56(250);
				iLocal_71 = unk_0xB01F55A0FD1CFD49(func_143());
				if (Local_73.f_214)
				{
					Local_73.f_214 = 0;
				}
				if (func_193(unk_0xD803B885F5E47A62()) || func_142(unk_0xD803B885F5E47A62()))
				{
					if (unk_0x02A813E6E0380440() > 0)
					{
						unk_0x51B096AAC60548C1(0,65f);
						iLocal_294 = 1;
					}
				}
				if (func_141(unk_0xD803B885F5E47A62()) || func_140(unk_0xD803B885F5E47A62()))
				{
					if (unk_0x02A813E6E0380440() > 0)
					{
						unk_0x51B096AAC60548C1(Global_262145.f_22581);
						iLocal_294 = 1;
					}
				}
			}
			else if (func_191(iLocal_339))
			{
				iLocal_71 = unk_0xB01F55A0FD1CFD49(func_143());
			}
			else
			{
				iLocal_71 = unk_0xB01F55A0FD1CFD49(func_143());
			}
			unk_0x0D3BE1DE0262A012("helicopterhud", false);
			func_139();
			if ((func_138(&Local_73, 0) && unk_0x83D8570832F172A7(iLocal_71)) && unk_0x27117E2CDD4D67C3("helicopterhud"))
			{
				if (Global_2461147)
				{
					if (unk_0xEB880D98B5988D0C() == 0 || unk_0x68367101660E33F0())
					{
						unk_0x486B4ADE317F0689();
					}
					if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
					{
						if (unk_0x27EE8CCDC67F4D6E(unk_0x16F2683693E537C9()))
						{
							unk_0x066C43E677C08D5C();
						}
					}
				}
				Local_73.f_9 = func_137(iLocal_339);
				Local_73.f_4 = 1;
				Global_1590535[unk_0xD803B885F5E47A62()].f_732 = 1;
				func_135(&Local_73, iLocal_339, 1, iLocal_339, 1);
				Global_2547057 = 1;
				func_133();
				unk_0x5834B6B817326C89(iLocal_339, 1);
				func_149(2);
				if (unk_0x134B62B726CEC8E6(iLocal_339) == 447548909)
				{
					unk_0x3B629F1019B16533("muz_xm_volatol_twinmg", "scr_xm_volatol_turret_camera");
				}
				if (((!bLocal_301 && !bLocal_302) && !bLocal_303) && Global_1319116 == -1)
				{
					Local_73.f_7 = 1;
					func_130();
				}
				if (!(Global_1319110 != -1 || Global_1319116 != -1))
				{
					func_129();
				}
			}
			func_128();
			break;
		
		case 2:
			if ((Global_1319110 != -1 || Global_1319116 != -1) || func_191(iLocal_339))
			{
				func_127();
			}
			if ((unk_0xF4CCC8CB6DE7F1AE() % 30) == 0)
			{
				Global_1590535[unk_0xD803B885F5E47A62()].f_848 = { unk_0xF1EE614CA05DDE75() };
			}
			iLocal_296 = -1707997257;
			if (iLocal_296 != 0)
			{
				unk_0x523BCC9DC80CD82F(iLocal_296);
			}
			if ((Global_1319110 != -1 || func_191(iLocal_339)) || Global_1319116 != -1)
			{
				unk_0x71AEB1E48B81572C();
				func_126(&Local_73, 0);
				if (Local_73.f_212 && Local_73.f_213)
				{
					unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
					Local_73.f_213 = 0;
					unk_0x63D6BFA449464BBF("eyeinthesky");
					if (func_125())
					{
						func_144(&uLocal_347, 0, 0);
					}
					return;
				}
				if (!Local_73.f_212)
				{
					Local_73.f_42 = { unk_0x17D61C69BA58F815(Local_73.f_32, 2) };
					Local_73.f_212 = 1;
					return;
				}
				if (Local_73.f_213)
				{
					return;
				}
				else if (!Global_76890 || func_124(3))
				{
					if (unk_0x757EF87A33649210())
					{
						if (!func_125())
						{
							unk_0x82E51BCA72537B6C(250);
						}
						else if (func_123(iLocal_339))
						{
							if (func_122(&uLocal_347) && func_121(&uLocal_347, 3000, 0))
							{
								func_147(&uLocal_347);
								unk_0x82E51BCA72537B6C(250);
							}
						}
					}
				}
			}
			if (func_120())
			{
				unk_0xE17FDF9E3068281B(&iLocal_71);
			}
			else if (!unk_0x83D8570832F172A7(iLocal_71))
			{
				iLocal_71 = unk_0xB01F55A0FD1CFD49(func_143());
			}
			func_139();
			func_114(0);
			func_126(&Local_73, 1);
			Local_73.f_4 = 1;
			if (unk_0x134B62B726CEC8E6(iLocal_339) == -2118308144)
			{
				if (unk_0x9F4FE516EAACCFC5(Local_73.f_32))
				{
					fVar3 = Local_73.f_40;
					fVar3 = (fVar3 + 5f);
					unk_0x5818C8D5303DCCF8(Local_73.f_32, fVar3);
				}
				unk_0x6B08108A769C302D();
			}
			if (func_113(iLocal_339) || func_112())
			{
				unk_0x38C3A68D7861DCFD(0, 91, 1);
				unk_0x38C3A68D7861DCFD(0, 92, 1);
			}
			unk_0x38C3A68D7861DCFD(0, 91, 1);
			unk_0x38C3A68D7861DCFD(0, 68, 1);
			unk_0x38C3A68D7861DCFD(0, 69, 1);
			unk_0x38C3A68D7861DCFD(0, 80, 1);
			unk_0x38C3A68D7861DCFD(0, 65, 1);
			unk_0x38C3A68D7861DCFD(0, 99, 1);
			unk_0x38C3A68D7861DCFD(0, 100, 1);
			unk_0x38C3A68D7861DCFD(1, 1, 1);
			unk_0x38C3A68D7861DCFD(1, 2, 1);
			unk_0x38C3A68D7861DCFD(0, 37, 1);
			if ((bLocal_301 || bLocal_302) || bLocal_303)
			{
				unk_0x38C3A68D7861DCFD(1, 85, 1);
			}
			func_108();
			func_107();
			func_129();
			if (Global_1319110 != -1)
			{
				if (!Global_1319111)
				{
					Global_1319111 = 1;
				}
				Local_73.f_25 = 50f;
				if (Global_1319110 == 1)
				{
					func_83(&Local_73, 0, 30f, -12f, -50f, 50f, 1041865114);
				}
				else if (Global_1319110 == 2)
				{
					func_83(&Local_73, 0, 30f, -55f, -85f, 140f, 1041865114);
				}
				else if (Global_1319110 == 3)
				{
					func_83(&Local_73, 0, 30f, -55f, -140f, 85f, 1041865114);
				}
				else
				{
					func_83(&Local_73, 0, 1086324736, -1030356992, -1020002304, 1127481344, 1041865114);
				}
				vVar0 = { unk_0xF1EE614CA05DDE75() };
				if ((((unk_0x798A3F1296751F46() || func_120()) || unk_0xBFC0798A6E3417F9(2, 199)) || unk_0x06F8112AA79C53D9(2, 199)) || unk_0xB9132A06AE472728(2, 199))
				{
					unk_0x6857CFBD47C253B6(vVar0.x, vVar0.y);
					if (unk_0x798A3F1296751F46() || func_120())
					{
						if (unk_0xE4EDC4B0E92C078B(unk_0x023428EEA3027652()))
						{
							unk_0x7F010F50CE03A8AF(unk_0x023428EEA3027652(), 255);
						}
					}
				}
				else if (unk_0xE4EDC4B0E92C078B(unk_0x023428EEA3027652()))
				{
					unk_0x7F010F50CE03A8AF(unk_0x023428EEA3027652(), 0);
				}
				unk_0xDB111A9E05F41582(vVar0.x, vVar0.y);
				unk_0x6476077988E40DA0();
				unk_0xB243B37593BB6C38();
				unk_0xF91D0B1DCE756AFB(0);
				vVar4 = { unk_0x9382F04ED9CDA21A(0) };
				vVar4 = { func_82(vVar4) };
				if (!unk_0xE4EDC4B0E92C078B(iLocal_345))
				{
					iLocal_346 = func_80(vVar0, 0);
					unk_0xBC8E0A7390523199(iLocal_346, 425);
					unk_0xF2D30B8ACAF12A39(iLocal_346, false);
					unk_0x9D7CDDB4B55142AF(iLocal_346, 4);
					unk_0x61755AC17D8F538E(iLocal_346, func_79(2));
					unk_0x029222ED35E8A217(iLocal_346, true);
					unk_0x516E63E474722206(iLocal_346, 0,54f);
					unk_0x2A065371C9D96655(iLocal_346, 13 + 1);
					iLocal_345 = func_80(vVar0, 0);
					unk_0xBC8E0A7390523199(iLocal_345, 425);
					unk_0xF2D30B8ACAF12A39(iLocal_345, false);
					unk_0x9D7CDDB4B55142AF(iLocal_345, 4);
					unk_0x61755AC17D8F538E(iLocal_345, func_79(18));
					unk_0x029222ED35E8A217(iLocal_345, true);
					unk_0x516E63E474722206(iLocal_345, 0,44f);
					unk_0x2A065371C9D96655(iLocal_345, 13 + 1);
					unk_0x54B31D18C3F36EB7(iLocal_345, 1);
					unk_0x436F3596830D7DC3(iLocal_345, round(unk_0xE7D606C557C86100(vVar4.x, vVar4.y)));
					unk_0x54B31D18C3F36EB7(iLocal_346, 1);
					unk_0x436F3596830D7DC3(iLocal_346, round(unk_0xE7D606C557C86100(vVar4.x, vVar4.y)));
				}
				else
				{
					unk_0x2F9282246F89FFD1(iLocal_345, vVar0);
					unk_0x436F3596830D7DC3(iLocal_345, round(unk_0xE7D606C557C86100(vVar4.x, vVar4.y)));
					unk_0x9D7CDDB4B55142AF(iLocal_345, 5);
					unk_0x2F9282246F89FFD1(iLocal_346, vVar0);
					unk_0x436F3596830D7DC3(iLocal_346, round(unk_0xE7D606C557C86100(vVar4.x, vVar4.y)));
					unk_0x9D7CDDB4B55142AF(iLocal_346, 5);
				}
			}
			else if (func_191(iLocal_339))
			{
				Local_73.f_36 = 0,002f;
				if (unk_0x134B62B726CEC8E6(iLocal_339) == 1181327175)
				{
					switch (func_78())
					{
						case 0:
							Local_73.f_25 = 180f;
							func_83(&Local_73, 0, 10f, -70f, -100f, 100f, fLocal_313);
							break;
						
						case 1:
							Local_73.f_25 = 170f;
							func_83(&Local_73, 0, 16,5f, -70f, -180f, 180f, fLocal_313);
							break;
						
						case 2:
							Local_73.f_25 = 170f;
							func_83(&Local_73, 0, 16,5f, -70f, -180f, 180f, fLocal_313);
							break;
						
						default:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 54f, -12f, -50f, 50f, fLocal_313);
							break;
					}
				}
				else if (unk_0x134B62B726CEC8E6(iLocal_339) == 447548909)
				{
					if (!unk_0xE82754C349C7B581(unk_0x68F4C0EC296D3901(iLocal_339, true), &fVar7, 1, 0))
					{
						fVar7 = -1000f;
					}
					vVar8 = { unk_0x68F4C0EC296D3901(iLocal_339, true) };
					fVar11 = (vVar8.z - fVar7);
					fVar12 = func_77(((Local_73.f_40 - Local_73.f_39) / (Local_73.f_38 - Local_73.f_39)), 0f, 1f);
					Local_73.f_39 = func_76(10f, 27,9f, (1f - func_77(((fVar11 - 2f) / 40f), 0f, 1f)));
					Local_73.f_40 = func_76(Local_73.f_39, Local_73.f_38, fVar12);
					switch (func_78())
					{
						case 1:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 6,5f, -70f, -100f, 100f, fLocal_313);
							break;
						
						case 2:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 50f, 5f, -100f, 100f, fLocal_313);
							break;
						
						default:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 54f, -12f, -50f, 50f, fLocal_313);
							break;
					}
				}
				else
				{
					switch (func_78())
					{
						case 1:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 13f, -80f, -50f, 50f, fLocal_313);
							break;
						
						case 0:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 54f, -12f, -50f, 50f, fLocal_313);
							break;
						
						case 2:
							Local_73.f_25 = 70f;
							func_83(&Local_73, 0, 48f, -45f, -100f, 100f, fLocal_313);
							break;
						
						default:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 54f, -12f, -50f, 50f, fLocal_313);
							break;
						}
				}
			}
			else if (Global_1319116 != -1)
			{
				Local_73.f_36 = 0,002f;
				if (!func_124(3))
				{
					if (!Global_1319111)
					{
						Global_1319111 = 1;
					}
				}
				if (func_141(unk_0xD803B885F5E47A62()) || func_140(unk_0xD803B885F5E47A62()))
				{
					switch (Global_1319116)
					{
						case 1:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 15f, -80f, -100f, 100f, fLocal_313);
							break;
						
						case 2:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 80f, -20f, -100f, 100f, fLocal_313);
							break;
						
						case 3:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 15f, -80f, -100f, 100f, fLocal_313);
							break;
						
						default:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 54f, -80f, -50f, 50f, fLocal_313);
							break;
					}
				}
				else if (!func_75(unk_0xD803B885F5E47A62()) && !func_124(3))
				{
					switch (Global_1319116)
					{
						case 1:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 13f, -80f, -50f, 50f, fLocal_313);
							break;
						
						case 0:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 54f, -80f, -50f, 50f, fLocal_313);
							break;
						
						case 2:
							Local_73.f_25 = 70f;
							func_83(&Local_73, 0, 48f, -80f, -100f, 100f, fLocal_313);
							break;
						
						default:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 54f, -80f, -50f, 50f, fLocal_313);
							break;
					}
				}
				else if (func_124(3))
				{
					switch (Global_1319116)
					{
						case 1:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 88f, -80f, -100f, 100f, fLocal_313);
							break;
						
						case 0:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 88f, -80f, -100f, 100f, fLocal_313);
							break;
						
						case 2:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 88f, -80f, -100f, 100f, fLocal_313);
							break;
						
						default:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 88f, -80f, -100f, 100f, fLocal_313);
							break;
					}
				}
				else
				{
					switch (Global_1319116)
					{
						case 1:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 13f, -80f, -50f, 50f, fLocal_313);
							break;
						
						case 0:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 13f, -80f, -50f, 50f, fLocal_313);
							break;
						
						case 2:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 13f, -80f, -50f, 50f, fLocal_313);
							break;
						
						default:
							Local_73.f_25 = 360f;
							func_83(&Local_73, 0, 13f, -80f, -50f, 50f, fLocal_313);
							break;
						}
				}
				vVar0 = { unk_0xF1EE614CA05DDE75() };
				if ((((unk_0x798A3F1296751F46() || func_120()) || unk_0xBFC0798A6E3417F9(2, 199)) || unk_0x06F8112AA79C53D9(2, 199)) || unk_0xB9132A06AE472728(2, 199))
				{
					unk_0x6857CFBD47C253B6(vVar0.x, vVar0.y);
					if (unk_0x798A3F1296751F46() || func_120())
					{
						if (unk_0xE4EDC4B0E92C078B(unk_0x023428EEA3027652()))
						{
							unk_0x7F010F50CE03A8AF(unk_0x023428EEA3027652(), 255);
						}
					}
				}
				else if (unk_0xE4EDC4B0E92C078B(unk_0x023428EEA3027652()))
				{
					unk_0x7F010F50CE03A8AF(unk_0x023428EEA3027652(), 0);
				}
				unk_0xDB111A9E05F41582(vVar0.x, vVar0.y);
				unk_0x6476077988E40DA0();
				unk_0xB243B37593BB6C38();
				unk_0xF91D0B1DCE756AFB(0);
				vVar13 = { unk_0x9382F04ED9CDA21A(0) };
				vVar13 = { func_82(vVar13) };
				if (!unk_0xE4EDC4B0E92C078B(iLocal_345))
				{
					iLocal_346 = func_80(vVar0, 0);
					unk_0xBC8E0A7390523199(iLocal_346, 425);
					unk_0xF2D30B8ACAF12A39(iLocal_346, false);
					unk_0x9D7CDDB4B55142AF(iLocal_346, 4);
					unk_0x61755AC17D8F538E(iLocal_346, func_79(2));
					unk_0x029222ED35E8A217(iLocal_346, true);
					unk_0x516E63E474722206(iLocal_346, 0,54f);
					unk_0x2A065371C9D96655(iLocal_346, 13 + 1);
					iLocal_345 = func_80(vVar0, 0);
					unk_0xBC8E0A7390523199(iLocal_345, 425);
					unk_0xF2D30B8ACAF12A39(iLocal_345, false);
					unk_0x9D7CDDB4B55142AF(iLocal_345, 4);
					unk_0x61755AC17D8F538E(iLocal_345, func_79(18));
					unk_0x029222ED35E8A217(iLocal_345, true);
					unk_0x516E63E474722206(iLocal_345, 0,44f);
					unk_0x2A065371C9D96655(iLocal_345, 13 + 1);
					unk_0x54B31D18C3F36EB7(iLocal_345, 1);
					unk_0x436F3596830D7DC3(iLocal_345, round(unk_0xE7D606C557C86100(vVar13.x, vVar13.y)));
					unk_0x54B31D18C3F36EB7(iLocal_346, 1);
					unk_0x436F3596830D7DC3(iLocal_346, round(unk_0xE7D606C557C86100(vVar13.x, vVar13.y)));
				}
				else
				{
					unk_0x2F9282246F89FFD1(iLocal_345, vVar0);
					unk_0x436F3596830D7DC3(iLocal_345, round(unk_0xE7D606C557C86100(vVar13.x, vVar13.y)));
					unk_0x9D7CDDB4B55142AF(iLocal_345, 5);
					unk_0x2F9282246F89FFD1(iLocal_346, vVar0);
					unk_0x436F3596830D7DC3(iLocal_346, round(unk_0xE7D606C557C86100(vVar13.x, vVar13.y)));
					unk_0x9D7CDDB4B55142AF(iLocal_346, 5);
				}
			}
			else
			{
				Local_73.f_25 = 90f;
				func_83(&Local_73, 0, 1086324736, -1030356992, -1020002304, 1127481344, 1041865114);
			}
			func_72();
			Local_73.f_87 = 1;
			if (Local_73.f_34)
			{
				if (Global_1319116 != -1)
				{
					func_149(0);
					Local_73.f_34 = 0;
					if (Global_1590535[unk_0xD803B885F5E47A62()].f_847)
					{
						unk_0xFB452C6B9BE826C7();
					}
					Global_2513487 = 0;
					Global_1590535[unk_0xD803B885F5E47A62()].f_847 = 0;
					func_70();
				}
				else
				{
					func_210();
				}
			}
			if (((((!bLocal_301 && !bLocal_302) && !bLocal_303) && iLocal_295 != -42959138) && iLocal_295 != 1181327175) && Global_1319116 == -1)
			{
				Local_73.f_7 = 1;
				func_130();
			}
			if (((bLocal_301 || bLocal_302) || bLocal_303) || func_112())
			{
				func_57();
				if (iLocal_295 != -32878452)
				{
					func_46();
				}
			}
			if (bLocal_355)
			{
				if (func_191(iLocal_339))
				{
					unk_0x38C3A68D7861DCFD(0, 75, 1);
				}
			}
			if (((((!unk_0x798A3F1296751F46() && !func_45()) && !func_44(0)) && !unk_0xE57E602827E07C9D()) || ((Global_1319110 != -1 && func_43(Global_1590374)) && !unk_0xA14BB9332558B949())) || ((Global_1319116 != -1 && func_43(Global_1590374)) && !unk_0xA14BB9332558B949()))
			{
				iVar16 = 51;
				iVar17 = 0;
				if (Global_1319110 != -1 || Global_1319116 != -1)
				{
					iVar17 = 2;
					iVar16 = 225;
				}
				if (func_191(iLocal_339))
				{
					iVar17 = 2;
					iVar16 = 225;
					unk_0x38C3A68D7861DCFD(0, 80, 1);
				}
				if ((((unk_0xBFC0798A6E3417F9(iVar17, iVar16) || !unk_0xDF1306B443CD3D15(iLocal_339, 0)) || func_42(iLocal_339, 0)) || func_41("HUNTGUN_T_3")) || func_27())
				{
					iLocal_297 = 0;
					if (func_191(iLocal_339))
					{
						func_144(&uLocal_324, 1, 0);
						Global_1319117 = 1;
					}
					if (unk_0xE4EDC4B0E92C078B(iLocal_345))
					{
						unk_0x142CC44DB769B57E(&iLocal_345);
					}
					if (unk_0xE4EDC4B0E92C078B(iLocal_346))
					{
						unk_0x142CC44DB769B57E(&iLocal_346);
					}
					if (unk_0xE4EDC4B0E92C078B(unk_0x023428EEA3027652()))
					{
						unk_0x7F010F50CE03A8AF(unk_0x023428EEA3027652(), 255);
					}
					unk_0x2FB9A57162E54BAB(0f);
					unk_0xEF6276132B396452(-7f, 1065353216);
					if (Global_1319110 != -1 || Global_1319116 != -1)
					{
						Global_1319111 = 0;
						func_70();
						if (func_41(func_9(iLocal_339)))
						{
							unk_0xA37A90C62806D848(1);
						}
						unk_0x53491B90E4FD0E56(0);
						Global_2513487 = 0;
						Global_1590535[unk_0xD803B885F5E47A62()].f_847 = 0;
						Global_2513488 = 1;
						func_149(0);
						vVar0 = { func_8(unk_0xD803B885F5E47A62()) };
						if (!func_7(vVar0))
						{
							unk_0x6857CFBD47C253B6(vVar0.x, vVar0.y);
						}
						unk_0xFB452C6B9BE826C7();
					}
					else if (func_191(iLocal_339))
					{
						func_149(0);
						func_70();
						unk_0x38C3A68D7861DCFD(0, 80, 1);
					}
					else
					{
						func_192(3);
					}
					Global_1676377.f_3320 = 0;
				}
			}
			break;
	}
	func_2();
}

void func_2()
{
	iVar0 = 0;
	bVar1 = Global_1590535[unk_0xA30EC016B12C03E4()].f_732;
	if (func_193(unk_0xD803B885F5E47A62()) || func_142(unk_0xD803B885F5E47A62()))
	{
		if (bVar1)
		{
			iVar0 = 1;
		}
		else if (func_6())
		{
			iVar0 = 2;
		}
	}
	else if (func_141(unk_0xD803B885F5E47A62()) || func_140(unk_0xD803B885F5E47A62()))
	{
		if (bVar1)
		{
			iVar0 = 3;
		}
		else if (func_6())
		{
			iVar0 = 4;
		}
	}
	else if (func_124(3))
	{
		iVar0 = 5;
	}
	if (iVar0 != iLocal_331)
	{
		if (iLocal_331 != 0)
		{
			unk_0x8910D3D58E0132B8(func_5(iLocal_331));
		}
		if (iVar0 != 0)
		{
			unk_0x8BC9595FD2792B5D(func_5(iVar0));
		}
	}
	iLocal_331 = iVar0;
	if (bVar1)
	{
		if (Local_73.f_211 == -1)
		{
			Local_73.f_211 = unk_0xD68EA767274B7444();
			if (Local_73.f_211 != -1)
			{
				unk_0x4D7F4CC43D4D0DE3(Local_73.f_211, func_4(iLocal_332, 1), func_3(iLocal_332), 1);
			}
		}
	}
	else if (Local_73.f_211 != -1)
	{
		unk_0x55D0A2DB35045A35(Local_73.f_211);
		unk_0x43A06902454A1172(Local_73.f_211);
		Local_73.f_211 = -1;
	}
}

char* func_3(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "DLC_GR_MOC_Turret_Sounds";
		
		case 2:
			return "dlc_xm_avngr_turret_Sounds";
		
		case 3:
			return "DLC_XM17_IAA_Finale_Remote_Turrets_Sounds";
		
		case 4:
			return "";
		
		default:
	}
	return "INVALID_TURRET_FIRE_SOUNDS";
}

char* func_4(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			if (func_124(3))
			{
				return "Background_Loop";
			}
			return "Turret_Camera_Hum_Loop";
			break;
		
		case 2:
			switch (iParam0)
			{
				case 4:
					return "SPL_ROCKET_HELI_NPC_master";
				
				default:
			}
			if (func_124(3))
			{
				return "Fire_Missile_Oneshot";
			}
			return "Fire";
			break;
		
		case 3:
			if (func_124(3))
			{
				return "Fire_MG_Loop";
			}
			return "Fire";
			break;
	}
	return "INVALID_TURRET_FIRE_KEY";
}

char* func_5(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "DLC_GR_MOC_Turret_View_Scene";
		
		case 2:
			return "MCU_FirstPerson_Seated_Scene";
		
		case 3:
			return "dlc_xm_avenger_turret_scene";
		
		case 4:
			return "dlc_xm_avenger_first_person_seated_scene";
		
		case 5:
			return "dlc_xm17_IAA_Turret_Scene";
		
		default:
	}
	return "INVALID_INTERIOR_AUDIO_SCENE";
}

int func_6()
{
	if (unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 4)
	{
		return 1;
	}
	return 0;
}

int func_7(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_8(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), false);
}

char* func_9(int iParam0)
{
	if (Global_1319110 != -1)
	{
		if (func_43(Global_1590374) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_25, 7))
		{
			return "HUNTGUN_T_3";
		}
		else
		{
			return "HUNTGUN_T_2b";
		}
	}
	if (func_124(3))
	{
		iVar2 = func_26(1);
		if (iVar2 != Global_1319116)
		{
			bVar0 = func_25(iVar2);
			if (bVar0)
			{
				switch (iVar2)
				{
					case 1:
						if (!func_25(1))
						{
							bVar0 = false;
						}
						break;
					
					case 2:
						if (!func_25(2))
						{
							bVar0 = false;
						}
						break;
					
					case 3:
						if (!func_25(3))
						{
							bVar0 = false;
						}
						break;
					
					case 4:
						if (!func_25(4))
						{
							bVar0 = false;
						}
						break;
					}
			}
		}
		else
		{
			bVar0 = false;
		}
		iVar3 = func_26(0);
		if (iVar3 != Global_1319116)
		{
			bVar1 = func_25(iVar3);
			if (bVar1)
			{
				switch (iVar3)
				{
					case 1:
						if (!func_25(1))
						{
							bVar1 = false;
						}
						break;
					
					case 2:
						if (!func_25(2))
						{
							bVar1 = false;
						}
						break;
					
					case 3:
						if (!func_25(3))
						{
							bVar1 = false;
						}
						break;
					
					case 4:
						if (!func_25(4))
						{
							bVar1 = false;
						}
						break;
				}
			}
			else
			{
				bVar1 = false;
			}
		}
		else
		{
			bVar1 = false;
		}
		switch (Global_1319116)
		{
			case 1:
				if (bVar0 && bVar1)
				{
					return "IAA_T_2_OSM1";
				}
				else if (bVar1)
				{
					return "IAA_T_2_OSL1";
				}
				else if (bVar0)
				{
					return "IAA_T_2_OSR1";
				}
				else
				{
					return "IAA_T_2_OSN1";
				}
				break;
			
			case 2:
				if (bVar0 && bVar1)
				{
					return "IAA_T_2_OSM2";
				}
				else if (bVar1)
				{
					return "IAA_T_2_OSL2";
				}
				else if (bVar0)
				{
					return "IAA_T_2_OSR2";
				}
				else
				{
					return "IAA_T_2_OSN2";
				}
				break;
			
			case 3:
				if (bVar0 && bVar1)
				{
					return "IAA_T_2_OSM3";
				}
				else if (bVar1)
				{
					return "IAA_T_2_OSL3";
				}
				else if (bVar0)
				{
					return "IAA_T_2_OSR3";
				}
				else
				{
					return "IAA_T_2_OSN3";
				}
				break;
			
			case 4:
				if (bVar0 && bVar1)
				{
					return "IAA_T_2_OSM4";
				}
				else if (bVar1)
				{
					return "IAA_T_2_OSL4";
				}
				else if (bVar0)
				{
					return "IAA_T_2_OSR4";
				}
				else
				{
					return "IAA_T_2_OSN4";
				}
				break;
			}
	}
	bVar1 = false;
	bVar0 = false;
	if (func_141(unk_0xD803B885F5E47A62()) || func_140(unk_0xD803B885F5E47A62()))
	{
		iVar4 = func_22(1);
		if (iVar4 != Global_1319116)
		{
			bVar0 = func_21(iVar4);
			if (bVar0)
			{
				switch (iVar4)
				{
					case 1:
						if (!func_19())
						{
							bVar0 = false;
						}
						break;
					
					case 2:
						if (!func_18())
						{
							bVar0 = false;
						}
						break;
					
					case 3:
						if (!func_10())
						{
							bVar0 = false;
						}
						break;
					}
			}
		}
		else
		{
			bVar0 = false;
		}
		iVar5 = func_22(0);
		if (iVar5 != Global_1319116)
		{
			bVar1 = func_21(iVar5);
			if (bVar1)
			{
				switch (func_22(0))
				{
					case 1:
						if (!func_19())
						{
							bVar1 = false;
						}
						break;
					
					case 2:
						if (!func_18())
						{
							bVar1 = false;
						}
						break;
					
					case 3:
						if (!func_10())
						{
							bVar1 = false;
						}
						break;
				}
			}
			else
			{
				bVar1 = false;
			}
		}
		else
		{
			bVar1 = false;
		}
		switch (Global_1319116)
		{
			case 1:
				if (bVar0 && bVar1)
				{
					return "HUNTGUN_T_2_OSM1";
				}
				else if (bVar1)
				{
					return "HUNTGUN_T_2_OSL1";
				}
				else if (bVar0)
				{
					return "HUNTGUN_T_2_OSR1";
				}
				else
				{
					return "HUNTGUN_T_2_OSN1";
				}
				break;
			
			case 2:
				if (bVar0 && bVar1)
				{
					return "HUNTGUN_T_2_OSM3";
				}
				else if (bVar1)
				{
					return "HUNTGUN_T_2_OSL3";
				}
				else if (bVar0)
				{
					return "HUNTGUN_T_2_OSR3";
				}
				else
				{
					return "HUNTGUN_T_2_OSN3";
				}
				break;
			
			case 3:
				if (bVar0 && bVar1)
				{
					return "HUNTGUN_T_2_OSM2";
				}
				else if (bVar1)
				{
					return "HUNTGUN_T_2_OSL2";
				}
				else if (bVar0)
				{
					return "HUNTGUN_T_2_OSR2";
				}
				else
				{
					return "HUNTGUN_T_2_OSN2";
				}
				break;
			}
	}
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		switch (unk_0x134B62B726CEC8E6(iParam0))
		{
			case -32878452:
				return "BOMBGUN_T_2c";
				break;
			
			case 782665360:
				return "BOMBGUN_T_2c";
				break;
			
			case 1181327175:
				return "AKULAGUN_P2";
				break;
			}
	}
	return "";
}

int func_10()
{
	if (func_141(unk_0xD803B885F5E47A62()))
	{
		iVar0 = func_16(0, 0);
	}
	else if (func_140(unk_0xD803B885F5E47A62()))
	{
		iVar0 = Global_2537071.f_307;
	}
	if (unk_0xC844350D5D58C99A(iVar0))
	{
		if (!unk_0x437347B10A200C4B(iVar0, 0))
		{
			if (func_141(unk_0xD803B885F5E47A62()))
			{
				if (unk_0x0ECB5CA5140957AD(iVar0, 10) == 1 && !func_11())
				{
					return 1;
				}
			}
			if (func_140(unk_0xD803B885F5E47A62()))
			{
				if (unk_0x0ECB5CA5140957AD(iVar0, 10) == 1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_11()
{
	if (func_15(unk_0xD803B885F5E47A62(), 1, 1))
	{
		if (Global_2425662[unk_0xD803B885F5E47A62()].f_261.f_22 != 0)
		{
			iVar0 = func_14(unk_0xD803B885F5E47A62());
			if (func_13(iVar0))
			{
				vVar1 = { func_12(iVar0) };
				if (unk_0xC844350D5D58C99A(func_16(0, 0)))
				{
					if (!unk_0x437347B10A200C4B(func_16(0, 0), 0))
					{
						if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(func_16(0, 0), true), vVar1, true) < 150f)
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

Vector3 func_12(int iParam0)
{
	return Global_4008564[iParam0].f_4;
}

int func_13(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 37)
	{
		return 1;
	}
	return 0;
}

var func_14(int iParam0)
{
	return Global_2420771[iParam0];
}

int func_15(int iParam0, bool bParam1, bool bParam2)
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

int func_16(int iParam0, bool bParam1)
{
	if (func_141(unk_0xD803B885F5E47A62()) || iParam0)
	{
		if (Global_1590379 != func_17())
		{
			if (!unk_0xC844350D5D58C99A(Global_1694019[Global_1590379]))
			{
				return Global_1370251;
			}
			return Global_1694019[Global_1590379];
		}
	}
	if (bParam1)
	{
		if (Global_1590380 != func_17())
		{
			return Global_1694019[Global_1590380];
		}
	}
	return -1;
}

int func_17()
{
	return -1;
}

int func_18()
{
	if (func_141(unk_0xD803B885F5E47A62()))
	{
		iVar0 = func_16(0, 0);
	}
	else if (func_140(unk_0xD803B885F5E47A62()))
	{
		iVar0 = Global_2537071.f_307;
	}
	if (unk_0xC844350D5D58C99A(iVar0))
	{
		if (!unk_0x437347B10A200C4B(iVar0, 0))
		{
			if (func_141(unk_0xD803B885F5E47A62()))
			{
				if (unk_0x0ECB5CA5140957AD(iVar0, 10) == 1 && !func_11())
				{
					return 1;
				}
			}
			if (func_140(unk_0xD803B885F5E47A62()))
			{
				if (unk_0x0ECB5CA5140957AD(iVar0, 10) == 1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_19()
{
	if (func_141(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(func_16(0, 0)))
		{
			if (!unk_0x437347B10A200C4B(func_16(0, 0), 0))
			{
				if (func_20(Global_1590379) && !func_11())
				{
					return 1;
				}
				if ((unk_0x0ECB5CA5140957AD(func_16(0, 0), 10) == 0 || unk_0x0ECB5CA5140957AD(func_16(0, 0), 10) == 1) && !func_11())
				{
					return 1;
				}
			}
		}
	}
	if (func_140(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(Global_2537071.f_307))
		{
			if (!unk_0x437347B10A200C4B(Global_2537071.f_307, 0))
			{
				if (unk_0x0ECB5CA5140957AD(Global_2537071.f_307, 10) == 0 || unk_0x0ECB5CA5140957AD(Global_2537071.f_307, 10) == 1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_20(int iParam0)
{
	if (iParam0 != func_17())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_278, 0);
	}
	return 0;
}

int func_21(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = Global_2425662[unk_0xD803B885F5E47A62()].f_310.f_6;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_15(iVar2, 1, 1) && iVar2 != unk_0xD803B885F5E47A62())
		{
			if (Global_2425662[iVar2].f_310.f_6 == iVar0)
			{
				if (Global_1590535[iVar2].f_846 == iParam0)
				{
					return 0;
				}
			}
		}
		iVar1++;
	}
	return 1;
}

int func_22(int iParam0)
{
	if (func_141(unk_0xD803B885F5E47A62()))
	{
		if (unk_0x437347B10A200C4B(Global_1370251, 0))
		{
			return -1;
		}
	}
	else if (func_140(unk_0xD803B885F5E47A62()))
	{
		if (unk_0x437347B10A200C4B(Global_2537071.f_307, 0))
		{
			return -1;
		}
	}
	if (iParam0 == 0)
	{
		iVar0 = (Global_1319116 % 3) + 1;
		while (!func_24(iVar0))
		{
			iVar0 = (iVar0 % 3) + 1;
		}
		return iVar0;
	}
	iVar0 = func_23(Global_1319116 == 1, 3, (Global_1319116 - 1));
	while (!func_24(iVar0))
	{
		iVar0 = func_23(iVar0 <= 1, 3, (iVar0 - 1));
	}
	return iVar0;
}

int func_23(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			if (func_19() && func_21(iParam0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_18() && func_21(iParam0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_10() && func_21(iParam0))
			{
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int func_25(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = Global_2425662[unk_0xD803B885F5E47A62()].f_310.f_6;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_15(iVar2, 1, 1) && iVar2 != unk_0xD803B885F5E47A62())
		{
			if (Global_2425662[iVar2].f_310.f_6 == iVar0)
			{
				if (Global_1590535[iVar2].f_846 == iParam0)
				{
					return 0;
				}
			}
		}
		iVar1++;
	}
	return 1;
}

int func_26(int iParam0)
{
	if (unk_0x437347B10A200C4B(iLocal_339, 0))
	{
		return -1;
	}
	if (iParam0 == 0)
	{
		iVar0 = (Global_1319116 % 4) + 1;
		while (!func_25(iVar0))
		{
			iVar0 = (iVar0 % 4) + 1;
		}
		return iVar0;
	}
	iVar0 = func_23(Global_1319116 == 1, 4, (Global_1319116 - 1));
	while (!func_25(iVar0))
	{
		iVar0 = func_23(iVar0 <= 1, 4, (iVar0 - 1));
	}
	return iVar0;
}

int func_27()
{
	if (func_193(unk_0xD803B885F5E47A62()))
	{
		iVar0 = func_40(unk_0xD803B885F5E47A62());
		if (func_15(iVar0, 0, 1))
		{
			if ((((((func_39(iVar0) && func_37(func_38(iVar0)) == 4) && unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar0))) && !unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar0))) && unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(iVar0), 0)) && unk_0xC844350D5D58C99A(unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iVar0), 0))) && func_36(unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iVar0), 0)))
			{
				return 1;
			}
			if (!func_35(Global_4456448.f_194990))
			{
				if (func_193(iVar0))
				{
					if (func_43(iVar0))
					{
						return 1;
					}
					else if (func_39(unk_0xD803B885F5E47A62()) || func_34())
					{
						return 1;
					}
				}
			}
		}
	}
	if (Global_1687716)
	{
		return 1;
	}
	if (func_141(unk_0xD803B885F5E47A62()))
	{
		iVar0 = func_33(unk_0xD803B885F5E47A62());
		if (func_15(iVar0, 0, 1))
		{
			if ((((((func_39(iVar0) && func_37(func_38(iVar0)) == 9) && unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar0))) && !unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar0))) && unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(iVar0), 0)) && unk_0xC844350D5D58C99A(unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iVar0), 0))) && unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iVar0), 0)) == -2118308144)
			{
				return 1;
			}
			if (func_32(iVar0))
			{
				return 1;
			}
			else if (func_39(unk_0xD803B885F5E47A62()) || func_34())
			{
				return 1;
			}
		}
	}
	if (func_31(unk_0xD803B885F5E47A62(), 0))
	{
		iVar0 = func_30(unk_0xD803B885F5E47A62());
		if (func_15(iVar0, 0, 1))
		{
			if ((((Global_1590382 != func_17() && func_39(Global_1590382)) && func_37(func_38(Global_1590382)) == 11) && func_29(Global_1590382, -1)) && unk_0x4906F8A34E9F4814(unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(Global_1590382), 0), -1988428699))
			{
				return 1;
			}
			else if (func_28(iVar0))
			{
				return 1;
			}
			else if (func_39(unk_0xD803B885F5E47A62()) || func_34())
			{
				return 1;
			}
		}
	}
	if (func_141(unk_0xD803B885F5E47A62()) || func_140(unk_0xD803B885F5E47A62()))
	{
		switch (Global_1319116)
		{
			case 1:
				if (Global_262145.f_22584)
				{
					return 1;
				}
				break;
			
			case 2:
				if (Global_262145.f_22585)
				{
					return 1;
				}
				break;
			
			case 3:
				if (Global_262145.f_22586)
				{
					return 1;
				}
				break;
			}
	}
	if (Global_1319114 == 1)
	{
		return 1;
	}
	if (func_124(3))
	{
		if (Global_1573352 == 185)
		{
			if (Global_1574442 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_28(int iParam0)
{
	if (iParam0 != func_17())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_3, 4);
	}
	return 0;
}

int func_29(int iParam0, int iParam1)
{
	if (func_15(iParam0, 1, 1))
	{
		if (unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(iParam0), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iParam0), 0);
			if (unk_0xDF1306B443CD3D15(iVar0, 0))
			{
				if (unk_0x16F2683693E537C9() == unk_0xA30B8362589C124A(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_30(int iParam0)
{
	if (iParam0 == func_17())
	{
		return iParam0;
	}
	return Global_2425662[iParam0].f_310.f_8;
}

int func_31(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (unk_0x134B62B726CEC8E6(iVar0) == -1988428699)
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_17())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_17())
			{
				return func_37(Global_2425662[iParam0].f_310.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_32(int iParam0)
{
	if (iParam0 != func_17())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_2, 6);
	}
	return 0;
}

int func_33(int iParam0)
{
	if (iParam0 == func_17())
	{
		return iParam0;
	}
	return Global_2425662[iParam0].f_310.f_8;
}

bool func_34()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1676377, 6);
}

bool func_35(int iParam0)
{
	return Global_262145.f_4999[4] == iParam0;
}

int func_36(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(iParam0) == 387748548 || unk_0x134B62B726CEC8E6(iParam0) == 177270108)
	{
		return 1;
	}
	return 0;
}

int func_37(int iParam0)
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

int func_38(int iParam0)
{
	if (iParam0 != func_17() && func_15(iParam0, 1, 1))
	{
		return Global_2425662[iParam0].f_310.f_14;
	}
	return -1;
}

int func_39(int iParam0)
{
	if (iParam0 != func_17() && func_15(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310, 3);
	}
	return 0;
}

int func_40(int iParam0)
{
	if (iParam0 == func_17())
	{
		return iParam0;
	}
	return Global_2425662[iParam0].f_310.f_8;
}

bool func_41(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

int func_42(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0) || iParam1)
		{
			if (unk_0x70EED0761B82965E(iParam0))
			{
				if (unk_0xFC0E4F7E386C43F8(iParam0) >= 0,7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_43(int iParam0)
{
	if (iParam0 != func_17())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310, 6);
	}
	return 0;
}

int func_44(int iParam0)
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

bool func_45()
{
	return unk_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

void func_46()
{
	if (func_56())
	{
		return;
	}
	fVar10 = 99999f;
	iVar11 = -1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar16 = unk_0xEAE0D21A50E6C7F4(Global_1574316, iVar0);
		iVar2 = iVar0;
		if (iVar2 != unk_0xD803B885F5E47A62())
		{
			if (func_15(iVar2, 1, 1))
			{
				iVar1 = unk_0x9539D44F3E4492F6(iVar2);
				vVar3 = { unk_0x68F4C0EC296D3901(iVar1, true) };
				if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vVar3, true) <= 150f)
				{
					if (func_55(iVar2, -1))
					{
						if (unk_0x362FD95670BFA2A6(vVar3, &fVar12, &fVar13))
						{
							if (!bVar16)
							{
								if (func_54(fVar12, fVar13, 0,4f, 0,4f, 0,6f, 0,6f))
								{
									fVar9 = func_53(fVar12, fVar13, &uVar14, &uVar15);
									if (fVar9 < fVar10)
									{
										fVar10 = fVar9;
										iVar11 = iVar0;
										vVar6 = { vVar3 };
									}
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iVar11 != -1)
	{
		if (unk_0x362FD95670BFA2A6(vVar6 + Vector(-1f, 0f, 0f), &fVar12, &fVar13))
		{
			func_47(fVar12, fVar13);
			if (!unk_0x798A3F1296751F46())
			{
				bVar17 = false;
				if (unk_0x91E3F625EF57450D(0))
				{
					bVar17 = unk_0xBFC0798A6E3417F9(0, 25);
				}
				else
				{
					bVar17 = unk_0xBFC0798A6E3417F9(2, 201);
				}
				if (bVar17)
				{
					unk_0x5D96D8530B3D0904(&Global_1574316, iVar11);
				}
			}
		}
	}
}

void func_47(float fParam0, float fParam1)
{
	if (func_56())
	{
		return;
	}
	func_49(&uVar0, &uVar2, fParam0, fParam1);
	if (unk_0x91E3F625EF57450D(0))
	{
		func_48("HUNTGUN_5_KM", -1);
	}
	else
	{
		func_48("HUNTGUN_5", -1);
	}
}

void func_48(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

void func_49(var uParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam0 = uParam2;
	uParam0->f_1 = uParam3;
	*uParam1 = 0;
	uParam1->f_1 = 0,25f;
	uParam1->f_2 = 0,25f;
	uParam1->f_7 = 2;
	func_50(func_51(1), &(uParam1->f_3), &(uParam1->f_4), &(uParam1->f_5), &(uParam1->f_6));
}

void func_50(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam1 = unk_0xDC4DD3980107166C(iParam0, 24, 31);
	*uParam2 = unk_0xDC4DD3980107166C(iParam0, 16, 23);
	*uParam3 = unk_0xDC4DD3980107166C(iParam0, 8, 15);
	*uParam4 = unk_0xDC4DD3980107166C(iParam0, 0, 7);
}

int func_51(int iParam0)
{
	unk_0xA402F6C87C08815C(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return func_52(iVar0, iVar1, iVar2, iVar3);
}

var func_52(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xCA42B3469E060D13(&uVar0, 24, 31, iParam0);
	unk_0xCA42B3469E060D13(&uVar0, 16, 23, iParam1);
	unk_0xCA42B3469E060D13(&uVar0, 8, 15, iParam2);
	unk_0xCA42B3469E060D13(&uVar0, 0, 7, iParam3);
	return uVar0;
}

float func_53(float fParam0, float fParam1, var uParam2, var uParam3)
{
	if (fParam0 <= 0,5f)
	{
		fVar0 = (0,5f - fParam0);
	}
	else
	{
		fVar0 = (fParam0 - 0,5f);
	}
	if (fParam1 <= 0,5f)
	{
		fVar1 = (0,5f - fParam1);
	}
	else
	{
		fVar1 = (fParam1 - 0,5f);
	}
	*uParam2 = fVar0;
	*uParam3 = fVar1;
	return (fVar0 + fVar1);
}

int func_54(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (fParam0 >= fParam2 && fParam0 <= fParam4)
	{
		if (fParam1 >= fParam3 && fParam1 <= fParam5)
		{
			return 1;
		}
	}
	return 0;
}

int func_55(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[unk_0xD803B885F5E47A62()].f_33, iParam0);
	}
	else if (Global_2439138.f_3781[iParam0] >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_56()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_33, 24))
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_33, 25))
	{
		return 1;
	}
	return 0;
}

void func_57()
{
	if (func_113(iLocal_339) || (func_112() && !unk_0x798A3F1296751F46()))
	{
		if (!func_69())
		{
			if (func_124(3))
			{
				iVar0 = 4845511;
			}
			else if (((func_193(unk_0xD803B885F5E47A62()) || func_142(unk_0xD803B885F5E47A62())) || func_141(unk_0xD803B885F5E47A62())) || func_140(unk_0xD803B885F5E47A62()))
			{
				iVar0 = -1707997257;
			}
			else
			{
				iVar0 = unk_0x6B7EC7B5B6B57364(func_68(iLocal_339));
			}
			unk_0x523BCC9DC80CD82F(iVar0);
			if (unk_0xB87F6CF6E5628C67(iVar0))
			{
				if (((unk_0x7FEE810EE9E768EB(2, 229) || unk_0x06F8112AA79C53D9(2, 229)) && !bLocal_298) && !func_122(&(Global_2439138.f_4000)))
				{
					if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
					{
						if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
						{
							if (unk_0x9F4FE516EAACCFC5(Local_73.f_32))
							{
								if (unk_0xFBB4F23D534EB790(Local_73.f_32))
								{
									iVar1 = 250;
									if (func_65(unk_0xD803B885F5E47A62(), 0))
									{
										iVar2 = -1;
										if (unk_0xF1D385D359D58F72("MC_EntityID", 3))
										{
											if (unk_0x30F813723591D02E(iLocal_339, "MC_EntityID"))
											{
												iVar2 = unk_0x1E2DFB0EF4BB4566(iLocal_339, "MC_EntityID");
											}
										}
										if (iVar2 != -1 && Global_4456448.f_124065[iVar2].f_219 != -1)
										{
											iVar1 = Global_4456448.f_124065[iVar2].f_219;
										}
									}
									iVar3 = iLocal_339;
									if (func_64(iLocal_339, Global_1319115) || func_112())
									{
										if (func_62())
										{
											if (!unk_0x437347B10A200C4B(Local_73.f_9, 0))
											{
												iVar3 = unk_0x96A5FE5834B81CE7(Local_73.f_9);
											}
											vVar4 = { func_59() };
											if (func_141(unk_0xD803B885F5E47A62()) || func_140(unk_0xD803B885F5E47A62()))
											{
												vVar4 = { unk_0xF1EE614CA05DDE75() };
												vVar7 = { unk_0x9382F04ED9CDA21A(2) };
												vVar10 = { (-sin(vVar7.z) * cos(vVar7.x)), (cos(vVar7.z) * cos(vVar7.x)), sin(vVar7.x) };
												vVar13 = { 10f, 10f, 10f };
												vVar16 = { vVar4 + vVar10 * vVar13 };
												unk_0x4A21BDDF4D038ECF(vVar4, vVar16, iVar1, 1, func_68(iLocal_339), unk_0x16F2683693E537C9(), 1, 1, -1f, iVar3, 0, 0, 0, 1, 0, 1);
											}
											else
											{
												unk_0x4A21BDDF4D038ECF(vVar4, Local_73.f_45, iVar1, 1, func_68(iLocal_339), unk_0x16F2683693E537C9(), 1, 1, -1f, iVar3, 0, 0, 0, 1, 0, 1);
											}
											func_144(&(Global_2439138.f_4000), 0, 0);
											if (iLocal_332 != 0)
											{
												unk_0xCEAA091B490F8407(-1, func_4(iLocal_332, 2), iLocal_339, func_3(iLocal_332), true, func_58(iLocal_332, 2));
												if (iLocal_332 == 4)
												{
													unk_0x4D7F4CC43D4D0DE3(-1, func_4(iLocal_332, 2), 0, 1);
												}
											}
										}
									}
									else if (!func_64(iLocal_339, Global_1319115))
									{
									}
								}
							}
						}
					}
				}
			}
			if (func_124(3))
			{
				if (unk_0xB87F6CF6E5628C67(iVar0))
				{
					if ((unk_0x7FEE810EE9E768EB(2, 228) || unk_0x06F8112AA79C53D9(2, 228)) && !func_122(&Local_290))
					{
						if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
						{
							if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
							{
								if (unk_0x9F4FE516EAACCFC5(Local_73.f_32))
								{
									if (unk_0xFBB4F23D534EB790(Local_73.f_32))
									{
										iVar19 = 250;
										if (func_65(unk_0xD803B885F5E47A62(), 0))
										{
											iVar20 = -1;
											if (unk_0xF1D385D359D58F72("MC_EntityID", 3))
											{
												if (unk_0x30F813723591D02E(iLocal_339, "MC_EntityID"))
												{
													iVar20 = unk_0x1E2DFB0EF4BB4566(iLocal_339, "MC_EntityID");
												}
											}
											if (iVar20 != -1 && Global_4456448.f_124065[iVar20].f_219 != -1)
											{
												iVar19 = Global_4456448.f_124065[iVar20].f_219;
											}
										}
										iVar21 = iLocal_339;
										if (func_64(iLocal_339, Global_1319115) || func_112())
										{
											if (!unk_0x437347B10A200C4B(Local_73.f_9, 0))
											{
												iVar21 = unk_0x96A5FE5834B81CE7(Local_73.f_9);
											}
											vVar22 = { func_59() };
											if (func_124(3))
											{
												vVar25 = { unk_0x17D61C69BA58F815(unk_0xC4648AFC94BA9ACC(), 2) };
												vVar22 = { unk_0x8A5E176FF719A014(vVar22, vVar25.z, -0,5f, 0f, 0f) };
											}
											unk_0x4A21BDDF4D038ECF(vVar22, Local_73.f_45, iVar19, 1, 1259576109, unk_0x16F2683693E537C9(), 1, 1, -1f, iVar21, 0, 0, 0, 1, 0, 1);
											func_144(&Local_290, 0, 0);
											if (iLocal_332 != 0)
											{
												unk_0xCEAA091B490F8407(-1, func_4(iLocal_332, 3), iLocal_339, func_3(iLocal_332), true, 120);
											}
										}
										else if (!func_64(iLocal_339, Global_1319115))
										{
										}
									}
								}
							}
						}
					}
					else if (!(((unk_0x7FEE810EE9E768EB(2, 25) || unk_0x06F8112AA79C53D9(2, 25)) && func_124(3)) && !func_122(&Local_290)))
					{
						if (func_122(&Local_290))
						{
						}
					}
				}
			}
			if (func_122(&(Global_2439138.f_4000)) || func_122(&Local_290))
			{
				if (func_64(iLocal_339, Global_1319115) || func_112())
				{
					if (func_193(unk_0xD803B885F5E47A62()) || func_142(unk_0xD803B885F5E47A62()))
					{
						if (func_121(&(Global_2439138.f_4000), 1000, 0))
						{
							func_147(&(Global_2439138.f_4000));
							Global_2439138.f_4000 = { Var28 };
						}
					}
					else if (func_141(unk_0xD803B885F5E47A62()) || func_140(unk_0xD803B885F5E47A62()))
					{
						if (func_121(&(Global_2439138.f_4000), 500, 0))
						{
							func_147(&(Global_2439138.f_4000));
							Global_2439138.f_4000 = { Var30 };
						}
					}
					else if (func_124(3))
					{
						if (func_122(&(Global_2439138.f_4000)))
						{
							if (func_121(&(Global_2439138.f_4000), 500, 0))
							{
								func_147(&(Global_2439138.f_4000));
								Global_2439138.f_4000 = { Var32 };
							}
						}
						if (func_122(&Local_290))
						{
							if (func_121(&Local_290, 50, 0))
							{
								func_147(&Local_290);
								Local_290 = { Var34 };
							}
						}
					}
					else if (func_121(&(Global_2439138.f_4000), 2000, 0))
					{
						func_147(&(Global_2439138.f_4000));
						Global_2439138.f_4000 = { Var36 };
					}
				}
			}
		}
	}
}

int func_58(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
			return 250;
		
		default:
	}
	return 120;
}

Vector3 func_59()
{
	if (func_61(iLocal_339, &uVar4))
	{
	}
	switch (iLocal_295)
	{
		case 788747387:
		case -82626025:
			switch (func_60())
			{
				case 0:
					vVar1 = { 1,59f, 0,415f, -0,43f };
					break;
				
				case 1:
					vVar1 = { -1,59f, 0,415f, -0,43f };
					break;
			}
			break;
		
		case -1600252419:
			switch (func_60())
			{
				case 0:
					vVar1 = { 2,89f, 1,215f, -0,43f };
					break;
				
				case 1:
					vVar1 = { -2,89f, 1,215f, -0,43f };
					break;
			}
			break;
		
		case -42959138:
			switch (func_60())
			{
				case 0:
					vVar1 = { 2,89f, 1,215f, -0,43f };
					break;
				
				case 1:
					vVar1 = { -2,89f, 1,215f, -0,43f };
					break;
			}
			break;
	}
	if (func_191(iLocal_339))
	{
		switch (func_78())
		{
			case 0:
				vVar1 = { 0,0122f, 8,7349f, 0,7239f };
				break;
			
			case 1:
				vVar1 = { 0,0082f, 1,1879f, 5,2393f };
				break;
			
			case 2:
				vVar1 = { -0,0083f, -22,7956f, 4,218f };
				break;
			}
	}
	if (Global_1319116 != -1)
	{
		if (unk_0x134B62B726CEC8E6(iLocal_339) == -32878452)
		{
			switch (Global_1319116)
			{
				case 0:
					vVar1 = { 0,0122f, 8,7349f, 0,7239f };
					break;
				
				case 1:
					vVar1 = { 0,0082f, 1,1879f, 5,2393f };
					break;
				
				case 2:
					vVar1 = { -0,0083f, -22,7956f, 4,218f };
					break;
				}
		}
		if (unk_0x134B62B726CEC8E6(iLocal_339) == 447548909)
		{
			switch (Global_1319116)
			{
				case 0:
					vVar1 = { 0,0122f, 8,7349f, 0,7239f };
					break;
				
				case 1:
					vVar1 = { 0,0082f, 1,1879f, 5,2393f };
					break;
				
				case 2:
					vVar1 = { -0,0083f, -22,7956f, 4,218f };
					break;
				}
			}
	}
	if (func_75(unk_0xD803B885F5E47A62()) || func_124(3))
	{
		vVar5 = { 2065,848f, 2967,32f, 45,2947f };
		vVar8 = { 2049,612f, 2947,657f, 49,556f };
		vVar11 = { 2045,091f, 2943,258f, 49,4991f };
		vVar14 = { 2040,365f, 2952,754f, 49,5688f };
		vVar17 = { 2049,385f, 2953,971f, 49,9635f };
		switch (Global_1319116)
		{
			case 1:
				vVar1 = { vVar8 - vVar5 };
				break;
			
			case 2:
				vVar1 = { vVar11 - vVar5 };
				break;
			
			case 3:
				vVar1 = { vVar14 - vVar5 };
				break;
			
			case 4:
				vVar1 = { vVar17 - vVar5 };
				break;
			}
	}
	if (Global_1319110 != -1)
	{
		switch (Global_1319110)
		{
			case 1:
				vVar1 = { 0f, 9f, 0,92f };
				break;
			
			case 2:
				vVar1 = { -2,4f, -8f, 1,14f };
				break;
			
			case 3:
				vVar1 = { 2,4f, -8f, 1,14f };
				break;
			
			case 4:
				vVar1 = { Vector(1,7578f, 9,3693f, -1,3829f) + Vector(0f, 0,2053f, 1,3666f) };
				break;
		}
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && unk_0xC844350D5D58C99A(iLocal_339))
		{
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				return unk_0x68E4ADDDDCD7BDDE(iLocal_339, vVar1);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
				return unk_0x68E4ADDDDCD7BDDE(iVar0, vVar1);
			}
			else if (func_112())
			{
				return unk_0x68E4ADDDDCD7BDDE(iLocal_339, vVar1);
			}
		}
	}
	return 0f, 0f, 0f;
}

int func_60()
{
	vVar6 = { unk_0x17D61C69BA58F815(Local_73.f_32, 2) };
	vVar3 = { (-sin(vVar6.z) * cos(vVar6.x)), (cos(vVar6.z) * cos(vVar6.x)), sin(vVar6.x) };
	vVar0 = { unk_0x08D89CE2E20AE305(Local_73.f_8) };
	fVar10 = unk_0x5D8ABF6396A76564(vVar3.y, vVar3.x);
	fVar9 = unk_0x5D8ABF6396A76564(vVar0.y, vVar0.x);
	if (fVar10 < -3,14f)
	{
		fVar10 = -3,14f;
	}
	if (fVar10 > 3,14f)
	{
		fVar10 = 3,14f;
	}
	if (fVar9 < -3,14f)
	{
		fVar9 = -3,14f;
	}
	if (fVar9 > 3,14f)
	{
		fVar9 = 3,14f;
	}
	fVar11 = (fVar10 - fVar9);
	if (fVar11 <= 0f)
	{
		return 0;
	}
	return 1;
}

int func_61(int iParam0, var uParam1)
{
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case 788747387:
			return 1;
			break;
		
		case 745926877:
			return 1;
			break;
		
		case 353883353:
			return 1;
			break;
		
		case 744705981:
			return 1;
			break;
		
		case -1660661558:
			return 1;
			break;
		
		case 837858166:
			return 1;
			break;
		
		case -1600252419:
			*uParam1 = 1;
			return 1;
			break;
		
		case -82626025:
			return 1;
			break;
		
		case -42959138:
			return 1;
			break;
		
		case -32878452:
			return 1;
			break;
		
		case 447548909:
			return 1;
			break;
		
		case 1181327175:
			return 1;
			break;
	}
	return func_191(iParam0);
	return 0;
}

bool func_62()
{
	fVar0 = unk_0x755FF954DAE327E1(Local_73.f_186.f_2);
	bVar1 = true;
	switch (unk_0x134B62B726CEC8E6(iLocal_339))
	{
		case -2118308144:
			switch (Global_1319116)
			{
				case 1:
					if (unk_0x787FC6D58BF25352(iLocal_339) >= 0,4f)
					{
						if ((fVar0 > 122,6f && fVar0 < 131,3f) && Local_73.f_186 > 7,87f)
						{
							bVar1 = false;
						}
						else if ((fVar0 > 140,5f && fVar0 < 159,5f) && Local_73.f_186 > func_63(6f, 15f, -159,5f, -140,5f, -fVar0))
						{
							bVar1 = false;
						}
					}
					if (bVar1 && unk_0xE7BF3A9C4976022F(iLocal_339))
					{
						iVar2 = unk_0x38E830634323E0D5(iLocal_339);
						if ((iVar2 == 0 || iVar2 == 3) || iVar2 == 1)
						{
							if (Local_73.f_186 > -13f)
							{
								if (Local_73.f_186 > -3,7f)
								{
									bVar1 = !fVar0 > 157f;
								}
								else
								{
									bVar1 = !(fVar0 > 164f && fVar0 < 177f);
								}
							}
						}
						else
						{
							bVar1 = !(fVar0 > 140,5f && Local_73.f_186 > func_63(0,5f, 15f, -180f, -140,5f, -fVar0));
						}
					}
					break;
				
				case 2:
					if (unk_0x787FC6D58BF25352(iLocal_339) >= 0,4f)
					{
						bVar1 = !((fVar0 > 111,2f && fVar0 < 125,8f) && Local_73.f_186 < 20f);
					}
					if (bVar1)
					{
						bVar1 = !((fVar0 > 20f && fVar0 < 27,6f) && Local_73.f_186 < 10,9f);
					}
					if (bVar1)
					{
						bVar1 = !((fVar0 < 28f && Local_73.f_186 < -8,5f) && Local_73.f_186 > -12f);
					}
					if (bVar1)
					{
						bVar1 = !((fVar0 < 28f && Local_73.f_186 < -8,5f) && Local_73.f_186 > -12f);
					}
					if (bVar1)
					{
						if (fVar0 < func_63(10,6f, 15,6f, 13,23f, 20f, -Local_73.f_186) && Local_73.f_186 < -13,23f)
						{
							bVar1 = false;
						}
						else if ((fVar0 > 108f && Local_73.f_186 >= -func_63(3,8f, 38f, 108f, 180f, fVar0)) && Local_73.f_186 < -func_63(1,3f, 7f, 125f, 180f, fVar0))
						{
							bVar1 = false;
						}
					}
					break;
				
				case 3:
					if (unk_0x787FC6D58BF25352(iLocal_339) >= 0,4f)
					{
						bVar1 = !((fVar0 > 141,3f && fVar0 < 147,7f) && Local_73.f_186 > -3,7f);
					}
					if (bVar1)
					{
						bVar1 = !(Local_73.f_186 > -18f && fVar0 > func_63(148f, 170f, -4,5f, 17,5f, -Local_73.f_186));
					}
					if (bVar1)
					{
						bVar1 = !((fVar0 > 59,4f && fVar0 < 106f) && Local_73.f_186 > func_63(5,5f, 11,8f, -106f, -59,4f, -fVar0));
					}
					break;
			}
			break;
	}
	return bVar1;
}

float func_63(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	fParam4 = ((fParam4 - fParam2) / (fParam3 - fParam2));
	return func_76(fParam0, fParam1, fParam4);
}

int func_64(int iParam0, int iParam1)
{
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case 788747387:
			return 1;
			break;
		
		case -82626025:
			return 1;
			break;
	}
	if (iParam1 != -1)
	{
		if (func_191(iParam0))
		{
		}
	}
	return 0;
}

int func_65(int iParam0, int iParam1)
{
	if (func_67() != 0)
	{
		return 0;
	}
	if (!func_66(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1590535[iVar0] == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_66(int iParam0)
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

int func_67()
{
	return Global_30768;
}

int func_68(int iParam0)
{
	iVar0 = unk_0x134B62B726CEC8E6(unk_0x96A5FE5834B81CE7(iParam0));
	if (func_141(unk_0xD803B885F5E47A62()) || func_140(unk_0xD803B885F5E47A62()))
	{
		return -1738072005;
	}
	switch (iVar0)
	{
		case -82626025:
		case 788747387:
			return 375527679;
			break;
		
		case -2118308144:
			return -448894556;
			break;
	}
	if (func_124(3))
	{
		return -448894556;
	}
	return -448894556;
}

bool func_69()
{
	return Global_1312418;
}

void func_70()
{
	func_145(0);
	func_71();
	func_146();
	Global_1319109 = 0;
	func_71();
	func_135(&Local_73, iVar0, 0, iLocal_339, 1);
	Global_2547057 = 0;
	Global_1590535[unk_0xD803B885F5E47A62()].f_732 = 0;
	if (unk_0x134B62B726CEC8E6(iLocal_339) == 447548909)
	{
		unk_0x23A33BE69212B899("muz_xm_volatol_twinmg");
	}
	if ((Global_1319110 != -1 || func_191(iLocal_339)) || Global_1319116 != -1)
	{
		if (!func_191(iLocal_339) && unk_0xAFE0D3608EDA7039(iLocal_339))
		{
			unk_0x78CEEE41F49F421F(iLocal_339, 1);
		}
	}
	if (Global_2461147)
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0x27EE8CCDC67F4D6E(unk_0x16F2683693E537C9()))
			{
				unk_0x066C43E677C08D5C();
			}
		}
	}
	unk_0x8910D3D58E0132B8("CAR_2_HELI_FILTERING");
	if (iLocal_338 != 99 && iLocal_338 > 0)
	{
		unk_0x8910D3D58E0132B8("MP_HELI_CAM_FILTERING");
		iLocal_338 = 0;
	}
}

void func_71()
{
	if (func_41("HUNTGUN_2"))
	{
		unk_0xA37A90C62806D848(1);
	}
	if (func_41("HUNTGUN_2b"))
	{
		unk_0xA37A90C62806D848(1);
	}
	if (func_41("HUNTGUN_2c"))
	{
		unk_0xA37A90C62806D848(1);
	}
	if (func_41("HUNTGUN_4"))
	{
		unk_0xA37A90C62806D848(1);
	}
	if (func_41("HUNTGUN_4b"))
	{
		unk_0xA37A90C62806D848(1);
	}
	if (func_41("HUNTGUN_4c"))
	{
		unk_0xA37A90C62806D848(1);
	}
	if (func_41("HUNTGUN_5"))
	{
		unk_0xA37A90C62806D848(1);
	}
	if (func_41("HUNTGUN_6"))
	{
		unk_0xA37A90C62806D848(1);
	}
	if (func_41("AKULAGUN_P1"))
	{
		unk_0xA37A90C62806D848(1);
	}
	if (func_41("AKULAGUN_P2"))
	{
		unk_0xA37A90C62806D848(1);
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (func_41("HUNTGUN_5_KM"))
		{
			unk_0xA37A90C62806D848(1);
		}
		if (func_41("HUNTGUN_6_KM"))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
	if ((((func_41("BOMBGUN_T_2b") || func_41("BOMBGUN_T_2c")) || func_41("BOMBGUN_T_2d")) || func_41("VOLGUN_T_2b")) || func_41("VOLGUN_T_2c"))
	{
		unk_0xA37A90C62806D848(1);
	}
}

void func_72()
{
	if (!func_112())
	{
		return;
	}
	if (!func_122(&uLocal_358))
	{
		func_144(&uLocal_358, 0, 0);
	}
	if (!func_121(&uLocal_358, 1000, 0))
	{
		return;
	}
	func_147(&uLocal_358);
	func_144(&uLocal_358, 0, 0);
	iVar0 = func_74();
	if (iVar0 < 0 || iVar0 > 3)
	{
		return;
	}
	if (!func_7(Local_73.f_45))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_2425662[unk_0xD803B885F5E47A62()].f_382, iVar0))
		{
			unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62()].f_382), iVar0);
		}
		if (Local_73.f_45 > 9999f)
		{
			Local_73.f_45 = 9999f;
		}
		if (Local_73.f_45.f_1 > 9999f)
		{
			Local_73.f_45.f_1 = 9999f;
		}
		if (Local_73.f_45.f_2 > 9999f)
		{
			Local_73.f_45.f_2 = 9999f;
		}
		if (!func_141(unk_0xD803B885F5E47A62()) && !func_140(unk_0xD803B885F5E47A62()))
		{
			if (!func_73(Global_2425662[unk_0xD803B885F5E47A62()].f_383[iVar0], Local_73.f_45, 1056964608, 0))
			{
				Global_2425662[unk_0xD803B885F5E47A62()].f_383[iVar0] = { Local_73.f_45 };
			}
		}
		else
		{
			vVar2 = { unk_0xF1EE614CA05DDE75() };
			vVar5 = { unk_0x9382F04ED9CDA21A(2) };
			vVar8 = { (-sin(vVar5.z) * cos(vVar5.x)), (cos(vVar5.z) * cos(vVar5.x)), sin(vVar5.x) };
			vVar11 = { 10f, 10f, 10f };
			vVar14 = { vVar2 + vVar8 * vVar11 };
			Global_2425662[unk_0xD803B885F5E47A62()].f_383[iVar0] = { vVar14 };
			if (!func_73(Global_2425662[unk_0xD803B885F5E47A62()].f_383[iVar0], vVar14, 1056964608, 0))
			{
				Global_2425662[unk_0xD803B885F5E47A62()].f_383[iVar0] = { vVar14 };
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (iVar0 != iVar1)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_2425662[unk_0xD803B885F5E47A62()].f_382, iVar1))
			{
				unk_0x0674E58A79778E99(&(Global_2425662[unk_0xD803B885F5E47A62()].f_382), iVar1);
			}
		}
		iVar1++;
	}
}

int func_73(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_74()
{
	if (func_193(unk_0xD803B885F5E47A62()) || func_142(unk_0xD803B885F5E47A62()))
	{
		switch (Global_1319110)
		{
			case default:
				return -1;
			
			case 1:
				return 0;
			
			case 2:
				return 2;
			
			case 3:
				return 1;
			}
			else if (func_141(unk_0xD803B885F5E47A62()) || func_140(unk_0xD803B885F5E47A62()))
			{
				switch (Global_1319116)
				{
					case default:
						return -1;
					
					case 1:
						return 0;
					
					case 2:
						return 1;
					
					case 3:
						return 2;
					}
					return -1;
			}
	}
}

int func_75(int iParam0)
{
	if (iParam0 != func_17())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_37(Global_2425662[iParam0].f_310.f_5) == 9;
			}
		}
	}
	return 0;
}

float func_76(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_77(float fParam0, float fParam1, float fParam2)
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

int func_78()
{
	if (bLocal_301)
	{
		return 0;
	}
	else if (bLocal_302)
	{
		return 1;
	}
	else if (bLocal_303)
	{
		return 2;
	}
	return -1;
}

int func_79(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0xA402F6C87C08815C(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

int func_80(vector3 vParam0, bool bParam3)
{
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_81(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, bParam3);
	return iVar0;
}

float func_81(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

Vector3 func_82(vector3 vParam0)
{
	vVar0.x = cos(vParam0.x);
	vVar0.y = cos(vParam0.z);
	vVar0.z = sin(vParam0.x);
	vVar0.y = (vVar0.y * vVar0.x);
	vVar0.x = (vVar0.x * -sin(vParam0.z));
	return vVar0;
}

void func_83(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	if (unk_0x9F4FE516EAACCFC5(uParam0->f_32))
	{
	}
	if (unk_0xC844350D5D58C99A(uParam0->f_8))
	{
		uParam0->f_9 = func_137(uParam0->f_8);
	}
	if (*uParam0 == 0)
	{
		if (func_138(uParam0, iParam1))
		{
			*uParam0 = 1;
		}
	}
	else
	{
		if (iParam1 == 0)
		{
			func_105(uParam0);
			func_99(uParam0, fParam2, fParam3, fParam4, fParam5, fParam6);
			func_98(uParam0);
		}
		func_97(uParam0);
		func_85(uParam0, iParam1, fParam4, fParam5);
		func_84();
	}
}

void func_84()
{
	Global_96028 = 1;
}

void func_85(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_50 == 1)
	{
		fVar0 = ((uParam0->f_42 - uParam0->f_31) / (uParam0->f_30 - uParam0->f_31));
		if (fVar0 < 0f)
		{
			fVar0 = 0f;
		}
		if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
		fVar1 = (uParam0->f_26 + ((uParam0->f_28 - uParam0->f_26) * fVar0));
		fVar2 = (uParam0->f_27 + ((uParam0->f_29 - uParam0->f_27) * fVar0));
		unk_0x072626A78DB22A3C(1,7f, 4,7f, fVar1, fVar2);
		fVar3 = unk_0x9C66D99E63E8E24C(uParam0->f_8);
		if (fVar3 > 30f)
		{
			unk_0x6B08108A769C302D();
		}
		unk_0x13A6351D6FB7E387();
		if (!unk_0x27117E2CDD4D67C3("helicopterhud") || (iParam1 == 0 && !unk_0x83D8570832F172A7(iLocal_71)))
		{
			uParam0->f_86 = 0;
		}
		else
		{
			uParam0->f_80 = (1f - (2f * uParam0->f_54));
			unk_0xD9ACBBA59FD5A09E(1);
			if (iParam1 == 0)
			{
				if (Global_1319110 != -1 && uParam0->f_213)
				{
				}
				else
				{
					unk_0xD9ACBBA59FD5A09E(0);
					unk_0x6567AE843FADBA94(iLocal_71, 255, 255, 255, 0, 1);
					unk_0x3584F71E5CA29322(14);
					if (!uParam0->f_86)
					{
						if (unk_0xDF1306B443CD3D15(uParam0->f_8, 0))
						{
							if (unk_0x134B62B726CEC8E6(uParam0->f_8) == 353883353 && unk_0xF22DC2D0CA24A151(uParam0->f_8) == 0)
							{
								unk_0x7E60C62A7CE58FC8(iLocal_71, "SET_CAM_LOGO");
								unk_0x3CAEA85DA607305E(1);
								unk_0x7E60D21B163E9D56();
							}
							else
							{
								unk_0x7E60C62A7CE58FC8(iLocal_71, "SET_CAM_LOGO");
								unk_0x3CAEA85DA607305E(0);
								unk_0x7E60D21B163E9D56();
							}
						}
						else
						{
							unk_0x7E60C62A7CE58FC8(iLocal_71, "SET_CAM_LOGO");
							unk_0x3CAEA85DA607305E(0);
							unk_0x7E60D21B163E9D56();
						}
					}
				}
			}
			uParam0->f_86 = 1;
		}
		if (uParam0->f_86 == 1)
		{
			if (iParam1 == 0)
			{
			}
			fVar18 = uParam0->f_157;
			iVar20 = -1;
			if (!unk_0x437347B10A200C4B(uParam0->f_9, 0))
			{
				vVar22 = { unk_0x68F4C0EC296D3901(uParam0->f_9, true) };
			}
			if (uParam0->f_87 == 0)
			{
				iVar4 = 0;
				uParam0->f_53 = 0;
				iVar4 = 0;
				while (iVar4 < uParam0->f_175)
				{
					if (unk_0xEAE0D21A50E6C7F4(uParam0->f_175[iVar4].f_2, 9))
					{
						if (unk_0xC844350D5D58C99A(uParam0->f_175[iVar4]))
						{
							if (!unk_0x437347B10A200C4B(uParam0->f_175[iVar4], 0))
							{
								if (unk_0xEAE0D21A50E6C7F4(uParam0->f_175[iVar4].f_2, 0))
								{
									switch (uParam0->f_175[iVar4].f_4)
									{
										case 2:
											func_95(uParam0, unk_0xBF584557291FDD31(uParam0->f_175[iVar4], 0), uParam0->f_65, uParam0->f_65.f_1, uParam0->f_65.f_2);
											break;
										
										case 3:
											func_95(uParam0, unk_0xBF584557291FDD31(uParam0->f_175[iVar4], 0), uParam0->f_68, uParam0->f_68.f_1, uParam0->f_68.f_2);
											break;
										
										case 0:
											func_95(uParam0, unk_0xBF584557291FDD31(uParam0->f_175[iVar4], 0), uParam0->f_62, uParam0->f_62.f_1, uParam0->f_62.f_2);
											break;
										
										case 1:
											func_95(uParam0, unk_0xBF584557291FDD31(uParam0->f_175[iVar4], 0), uParam0->f_68, uParam0->f_68.f_1, uParam0->f_68.f_2);
											break;
									}
								}
								else if (unk_0xD8A54335F18763BA() < 19 && unk_0xD8A54335F18763BA() > 7)
								{
									func_95(uParam0, unk_0xBF584557291FDD31(uParam0->f_175[iVar4], 0), uParam0->f_62, uParam0->f_62.f_1, uParam0->f_62.f_2);
								}
								else
								{
									func_95(uParam0, unk_0xBF584557291FDD31(uParam0->f_175[iVar4], 0), uParam0->f_62, uParam0->f_62.f_1, uParam0->f_62.f_2);
								}
							}
						}
					}
					iVar4++;
				}
				if (!unk_0x437347B10A200C4B(uParam0->f_9, 0))
				{
					unk_0xE82754C349C7B581(vVar22, &uVar19, 0, 0);
					if (uParam0->f_52 == 0 && uParam0->f_48 > 0)
					{
						iVar4 = 0;
						while (iVar4 <= (uParam0->f_48 - 1))
						{
							if (unk_0xC844350D5D58C99A(uParam0->f_175[iVar4]))
							{
								if (!unk_0x437347B10A200C4B(uParam0->f_175[iVar4], 0) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
								{
									vVar12 = { unk_0xBF584557291FDD31(uParam0->f_175[iVar4], 0) };
									if (unk_0x0A059E0DB9253280(uParam0->f_175[iVar4]))
									{
										fVar8 = 0f;
										fVar9 = 0f;
										fVar16 = unk_0x0EB28750412C3A5A(vVar12, unk_0x68F4C0EC296D3901(uParam0->f_9, true), true);
										fVar21 = func_94(uParam0, uParam0->f_175[iVar4], uParam0->f_9);
										fVar17 = (uParam0->f_74 * fVar21);
										if (unk_0xEAE0D21A50E6C7F4(uParam0->f_175[iVar4].f_2, 2) || iVar4 == uParam0->f_92)
										{
											if (unk_0xEAE0D21A50E6C7F4(uParam0->f_175[iVar4].f_2, 0))
											{
												if ((timera() - uParam0->f_175[iVar4].f_1) < 500)
												{
													func_93(uParam0, vVar12, fVar21, uParam0->f_175[iVar4].f_4, -1, -1, -1);
													uParam0->f_175[iVar4].f_6 = { unk_0x68F4C0EC296D3901(uParam0->f_175[iVar4], true) };
												}
												else
												{
													func_92(uParam0, uParam0->f_175[iVar4].f_4, &iVar5, &iVar6, &iVar7);
													unk_0x7CE7752990174928(uParam0->f_175[iVar4].f_6, 0);
													unk_0x539E86AE011A8B38("helicopterhud", "TargetLost", fVar8, fVar9, fVar17, (fVar17 * 2f), 0f, iVar5, iVar6, iVar7, 200, 1);
													unk_0xB90B8DD97A132327();
													func_91(iVar5, iVar6, iVar7, 0,5f, 1);
													uParam0->f_53 = 1;
												}
											}
											else
											{
												func_92(uParam0, 3, &iVar5, &iVar6, &iVar7);
												if (iVar4 == uParam0->f_92)
												{
													func_93(uParam0, vVar12, fVar21, uParam0->f_175[iVar4].f_4, uParam0->f_62, uParam0->f_62.f_1, uParam0->f_62.f_2);
												}
												else
												{
													func_93(uParam0, vVar12, fVar21, uParam0->f_175[iVar4].f_4, uParam0->f_62, uParam0->f_62.f_1, uParam0->f_62.f_2);
												}
											}
											if (unk_0xEAE0D21A50E6C7F4(uParam0->f_175[iVar4].f_2, 7))
											{
												func_93(uParam0, vVar12, fVar21, uParam0->f_175[iVar4].f_4, 227, 24, 234);
											}
										}
										iVar25 = 0;
										vVar26 = { 0f, 0f, 0f };
										iVar29 = 0;
										switch (unk_0x1EC301670B54C6DE(uParam0->f_175[iVar4].f_9, &iVar25, &vVar26, &vVar26, &iVar29))
										{
											case 0:
												vVar30 = { unk_0x68F4C0EC296D3901(uParam0->f_8, true) };
												vVar33 = { unk_0x68F4C0EC296D3901(uParam0->f_175[iVar4], true) + Vector(0,5f, 0f, 0f) };
												uParam0->f_175[iVar4].f_9 = unk_0xCD02F8660C47B801(vVar30, vVar33, 1, 0, 7);
												break;
											
											case 2:
												if (iVar25 == 0)
												{
													uParam0->f_175[iVar4].f_1 = timera();
												}
												break;
										}
										if ((timera() - uParam0->f_175[iVar4].f_1) < 1500 || unk_0xEAE0D21A50E6C7F4(uParam0->f_175[iVar4].f_2, 0))
										{
											if ((uParam0->f_78 / (uParam0->f_40 * fVar16)) > 1f)
											{
												unk_0x362FD95670BFA2A6(vVar12, &fVar8, &fVar9);
												fVar15 = sqrt((((fVar8 - 0,5f) * (fVar8 - 0,5f)) + ((fVar9 - 0,5f) * (fVar9 - 0,5f))));
												if (fVar15 < fVar18)
												{
													fVar10 = fVar8;
													fVar11 = fVar9;
													fVar10 = fVar10;
													fVar11 = fVar11;
													fVar18 = fVar15;
													iVar20 = iVar4;
												}
											}
										}
										unk_0xB90B8DD97A132327();
									}
								}
							}
							iVar4++;
						}
					}
					uParam0->f_76++;
					if (uParam0->f_76 > (uParam0->f_48 - 1))
					{
						uParam0->f_76 = 0;
					}
				}
				if (uParam0->f_92 != iVar20)
				{
					if (uParam0->f_204 != -1)
					{
						if (unk_0x8AA6DC470ABA63A2(uParam0->f_204))
						{
							unk_0x4D7F4CC43D4D0DE3(uParam0->f_204, "COP_HELI_CAM_BLEEP", 0, 1);
						}
					}
				}
				uParam0->f_92 = iVar20;
				uParam0->f_49 = 0;
				if (uParam0->f_92 != -1 && uParam0->f_2 == 1)
				{
					if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_175[uParam0->f_92].f_2, 0))
					{
						if (unk_0x06F8112AA79C53D9(2, 229))
						{
							if ((uParam0->f_77 / (uParam0->f_40 * fVar16)) > 0,5f)
							{
								if (uParam0->f_201 == 1)
								{
									if (uParam0->f_209 != -1)
									{
										if (!unk_0x8AA6DC470ABA63A2(uParam0->f_209))
										{
											unk_0x55D0A2DB35045A35(uParam0->f_209);
										}
									}
									uParam0->f_201 = 0;
								}
								uParam0->f_49 = 1;
								if (uParam0->f_175[uParam0->f_92].f_3 < 1f)
								{
									if (uParam0->f_206 != -1)
									{
										if (unk_0x8AA6DC470ABA63A2(uParam0->f_206))
										{
											unk_0x4D7F4CC43D4D0DE3(uParam0->f_206, "COP_HELI_CAM_SCAN_PED_LOOP", 0, 1);
										}
									}
									fVar18 = unk_0x755FF954DAE327E1((1f - fVar18));
									uParam0->f_175[uParam0->f_92].f_3 = (uParam0->f_175[uParam0->f_92].f_3 + ((fVar18 * timestep()) / 3,5f));
									fVar21 = func_94(uParam0, uParam0->f_175[uParam0->f_92], uParam0->f_9);
									fVar17 = (uParam0->f_74 * fVar21);
									func_91(255, 0, 0, 0,5f, 1);
									if ((timera() % 600) < 300)
									{
										func_90(0,5f, 0,68f, "scan", 1);
									}
									fVar21 = func_94(uParam0, uParam0->f_175[uParam0->f_92], uParam0->f_9);
									fVar17 = 0,03f;
									unk_0x7CE7752990174928(unk_0xBF584557291FDD31(uParam0->f_175[uParam0->f_92], 0), 0);
									func_88(uParam0, uParam0->f_175[uParam0->f_92], uParam0->f_175[uParam0->f_92].f_3, fVar21);
									unk_0xB90B8DD97A132327();
								}
								else
								{
									if (unk_0xEAE0D21A50E6C7F4(uParam0->f_175[uParam0->f_92].f_2, 3))
									{
										unk_0x5D96D8530B3D0904(&(uParam0->f_175[uParam0->f_92].f_2), 2);
									}
									unk_0x5D96D8530B3D0904(&(uParam0->f_175[uParam0->f_92].f_2), 0);
									uParam0->f_55 = uParam0->f_175[uParam0->f_92];
									if (uParam0->f_206 != -1)
									{
										if (!unk_0x8AA6DC470ABA63A2(uParam0->f_206))
										{
											unk_0x55D0A2DB35045A35(uParam0->f_206);
										}
									}
									if (uParam0->f_175[uParam0->f_92].f_4 == 2)
									{
										if (uParam0->f_207 != -1)
										{
											if (unk_0x8AA6DC470ABA63A2(uParam0->f_207))
											{
												unk_0x4D7F4CC43D4D0DE3(uParam0->f_207, "COP_HELI_CAM_SCAN_PED_SUCCESS", 0, 1);
											}
										}
									}
									else if (uParam0->f_208 != -1)
									{
										if (unk_0x8AA6DC470ABA63A2(uParam0->f_208))
										{
											unk_0x4D7F4CC43D4D0DE3(uParam0->f_208, "COP_HELI_CAM_SCAN_PED_FAILURE", 0, 1);
										}
									}
								}
							}
							else
							{
								fVar21 = func_94(uParam0, uParam0->f_175[uParam0->f_92], uParam0->f_9);
								fVar17 = (uParam0->f_74 * fVar21);
								func_91(255, 0, 0, 0,5f, 1);
								func_90(0,5f, 0,68f, "HUD_RNG", 0);
								if (!uParam0->f_201)
								{
									if (uParam0->f_209 != -1)
									{
										if (unk_0x8AA6DC470ABA63A2(uParam0->f_209))
										{
											unk_0x4D7F4CC43D4D0DE3(uParam0->f_209, "COP_HELI_CAM_BLEEP_TOO_FAR", 0, 1);
											uParam0->f_201 = 1;
										}
									}
								}
							}
						}
						else if (uParam0->f_201 == 1)
						{
							if (uParam0->f_209 != -1)
							{
								if (!unk_0x8AA6DC470ABA63A2(uParam0->f_209))
								{
									unk_0x55D0A2DB35045A35(uParam0->f_209);
								}
							}
							uParam0->f_201 = 0;
						}
					}
					else if (unk_0x06F8112AA79C53D9(2, 229) || (unk_0x1C0640BA9A7327B3() < uParam0->f_94 && uParam0->f_93 == uParam0->f_92))
					{
						if (!unk_0x437347B10A200C4B(uParam0->f_175[uParam0->f_92], 0))
						{
							if ((timera() - uParam0->f_175[uParam0->f_92].f_1) < 500)
							{
								if (!uParam0->f_53)
								{
									uParam0->f_93 = uParam0->f_92;
									uParam0->f_94 = unk_0x1C0640BA9A7327B3() + 3000;
									unk_0x7CE7752990174928(unk_0xBF584557291FDD31(uParam0->f_175[uParam0->f_92], 0), 0);
									fVar21 = func_94(uParam0, uParam0->f_175[uParam0->f_92], uParam0->f_9);
									fVar8 = 0f;
									fVar9 = 0f;
									func_92(uParam0, uParam0->f_175[uParam0->f_92].f_4, &iVar5, &iVar6, &iVar7);
									unk_0xB90B8DD97A132327();
									if (uParam0->f_175[uParam0->f_92].f_4 == 2)
									{
										func_87(uParam0, uParam0->f_92, ((fVar8 - (fVar17 / 2f)) + (fVar17 * 0,04f)), ((fVar9 + fVar17) + 0,005f), iVar5, iVar6, iVar7, fVar21, 1);
									}
									else
									{
										func_87(uParam0, uParam0->f_92, ((fVar8 - (fVar17 / 2f)) + (fVar17 * 0,04f)), ((fVar9 + fVar17) + 0,005f), iVar5, iVar6, iVar7, fVar21, 0);
									}
								}
							}
						}
					}
				}
				if (uParam0->f_49 == 0)
				{
					if (uParam0->f_206 != -1)
					{
						if (!unk_0x8AA6DC470ABA63A2(uParam0->f_206))
						{
							unk_0x55D0A2DB35045A35(uParam0->f_206);
						}
					}
				}
			}
			if (uParam0->f_162 > 0)
			{
				iVar4 = 0;
				while (iVar4 <= 0)
				{
					if (uParam0->f_163[iVar4].f_5 != -1)
					{
						if (unk_0x362FD95670BFA2A6(uParam0->f_163[iVar4], &fVar8, &fVar9))
						{
							if (unk_0xC844350D5D58C99A(uParam0->f_8) && unk_0xDF1306B443CD3D15(uParam0->f_8, 0))
							{
								vVar36 = { unk_0x68F4C0EC296D3901(uParam0->f_8, true) };
							}
							else if (unk_0xC844350D5D58C99A(uParam0->f_9) && !unk_0x437347B10A200C4B(uParam0->f_9, 0))
							{
								vVar36 = { unk_0x68F4C0EC296D3901(uParam0->f_9, true) };
							}
							unk_0x7CE7752990174928(uParam0->f_163[iVar4], 0);
							fVar8 = 0f;
							fVar9 = 0f;
							if (uParam0->f_163[iVar4].f_6 == 1)
							{
								fVar16 = unk_0x0EB28750412C3A5A(uParam0->f_163[iVar4], vVar36, true);
								fVar21 = (uParam0->f_79 / (uParam0->f_40 * fVar16));
								if (fVar21 < 0,4f)
								{
									fVar21 = 0,4f;
								}
								if (fVar21 > 2f)
								{
									fVar21 = 2f;
								}
								func_93(uParam0, uParam0->f_163[iVar4], fVar21, 0, -1, -1, -1);
								unk_0x7CE7752990174928(uParam0->f_163[iVar4], 0);
							}
							else
							{
								unk_0x539E86AE011A8B38("helicopterhud", "hud_dest", fVar8, fVar9, 0,042f, 0,042f, 0f, uParam0->f_163[iVar4].f_8, uParam0->f_163[iVar4].f_9, uParam0->f_163[iVar4].f_10, 255, 1);
							}
							unk_0xB90B8DD97A132327();
						}
						else if (uParam0->f_163[iVar4].f_6 == 1)
						{
							func_95(uParam0, uParam0->f_163[iVar4], uParam0->f_163[iVar4].f_8, uParam0->f_163[iVar4].f_9, uParam0->f_163[iVar4].f_10);
						}
						else
						{
							func_95(uParam0, uParam0->f_163[iVar4], uParam0->f_163[iVar4].f_8, uParam0->f_163[iVar4].f_9, uParam0->f_163[iVar4].f_10);
						}
					}
					iVar4++;
				}
			}
			if (iParam1 == 0)
			{
				fVar39 = uParam0->f_42.f_2;
				if (func_191(uParam0->f_8) || func_86())
				{
					fVar39 = uParam0->f_186.f_2;
				}
				vVar40 = { 0f, 0f, 0f };
				if (unk_0xC844350D5D58C99A(uParam0->f_9))
				{
					if (!unk_0x437347B10A200C4B(uParam0->f_9, 0))
					{
						vVar40 = { unk_0x68F4C0EC296D3901(uParam0->f_9, true) };
						fVar44 = unk_0xD9522BA9E27E1349(uParam0->f_9);
					}
				}
				if (Global_1319110 != -1)
				{
					if (Global_1319110 == 2 || Global_1319110 == 3)
					{
						fVar44 = (fVar44 - 174,4552f);
					}
				}
				while (fVar39 < 0f)
				{
					fVar39 = (fVar39 + 360f);
				}
				while (fVar39 > 360f)
				{
					fVar39 = (fVar39 - 360f);
				}
				while (fVar44 < 0f)
				{
					fVar44 = (fVar44 + 360f);
				}
				while (fVar44 > 360f)
				{
					fVar44 = (fVar44 - 360f);
				}
				fVar47 = fVar39;
				if (Global_1319110 != -1)
				{
					fVar45 = (fVar44 - unk_0x755FF954DAE327E1(fParam3));
					fVar46 = (fVar44 + unk_0x755FF954DAE327E1(fParam2));
				}
				else if (func_191(uParam0->f_8) || func_86())
				{
					fVar45 = -(uParam0->f_25 * 0,5f);
					fVar46 = (uParam0->f_25 * 0,5f);
				}
				else
				{
					fVar45 = (fVar44 - uParam0->f_25);
					fVar46 = (fVar44 + uParam0->f_25);
				}
				if (fVar47 < fVar45 && (fVar47 + 360f) <= fVar46)
				{
					fVar47 = (fVar47 + 360f);
				}
				if (fVar47 > fVar46 && (fVar47 - 360f) >= fVar45)
				{
					fVar47 = (fVar47 - 360f);
				}
				fVar43 = ((fVar47 - fVar45) / (fVar46 - fVar45));
				if (fVar43 == 2f)
				{
					fVar43 = 0f;
				}
				else if (fVar43 == -1f)
				{
					fVar43 = 1f;
				}
				else if (fVar43 < 0f && fVar43 >= -0,5f)
				{
					fVar43 = 0f;
				}
				else if (fVar43 < 0f && fVar43 > -1f)
				{
					fVar43 = 1f;
				}
				else if (fVar43 > 1,5f && fVar43 < 2f)
				{
					fVar43 = 0f;
				}
				else if (fVar43 > 2f || fVar43 < -1f)
				{
					fVar43 = 0,5f;
				}
				unk_0x7E60C62A7CE58FC8(iLocal_71, "SET_ALT_FOV_HEADING");
				unk_0x7C19E5E4784BD7CF(vVar40.z);
				if (unk_0x8CD06866876216F2())
				{
					unk_0x7C19E5E4784BD7CF(fVar43);
				}
				else
				{
					unk_0x7C19E5E4784BD7CF(((uParam0->f_40 - uParam0->f_39) / (uParam0->f_38 - uParam0->f_39)));
				}
				unk_0x7C19E5E4784BD7CF(fVar39);
				unk_0x7E60D21B163E9D56();
				unk_0x3584F71E5CA29322(3);
				if (!uParam0->f_51)
				{
					unk_0x3FC8DBCC154CA56B();
				}
			}
		}
	}
}

int func_86()
{
	if (func_141(unk_0xD803B885F5E47A62()) || func_140(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return 0;
}

int func_87(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8)
{
	func_91(iParam4, iParam5, iParam6, 0,43f, bParam8);
	if (fParam7 < 0,7f)
	{
		fParam7 = 0,7f;
	}
	if (fParam7 > 1,5f)
	{
		fParam7 = 1,5f;
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_175[iParam1].f_2, 8))
	{
	}
	iVar4 = 24;
	while (iVar4 <= 31)
	{
		if (unk_0xEAE0D21A50E6C7F4(uParam0->f_175[iParam1].f_5, iVar4))
		{
			StringCopy(&Var0, "crimes_", 16);
			StringIntConCat(&Var0, (iVar4 - 23), 16);
			func_91(iParam4, iParam5, iParam6, 0,43f, bParam8);
			func_90(0,5f, (0,68f + (0,037f * IntToFloat(iVar5 + 1))), &Var0, 1);
			iVar5++;
		}
		iVar4++;
	}
	if (iVar5 == 0)
	{
		func_91(iParam4, iParam5, iParam6, 0,43f, bParam8);
		func_90(fParam2, (fParam3 + (uParam0->f_196 * fParam7)), "unknown", 1);
	}
	if (uParam0->f_175[iParam1].f_4 == 0)
	{
		func_91(iParam4, iParam5, iParam6, 0,43f, bParam8);
		func_90(fParam2, (fParam3 + (uParam0->f_196 * fParam7)), "HUD_ID2", 1);
	}
	return 1;
}

void func_88(var uParam0, int iParam1, float fParam2, float fParam3)
{
	vVar12 = { 0f, 0f, 0f };
	if (fParam2 < 0,5f)
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam1))
		{
			vVar0 = { unk_0x64430C979F516F7A(iParam1, 14201, vVar12) };
			vVar3 = { unk_0x64430C979F516F7A(iParam1, 63931, vVar12) };
			unk_0x7CE7752990174928(vVar0, 0);
			unk_0x362FD95670BFA2A6(vVar0, &fVar8, &fVar9);
			unk_0x362FD95670BFA2A6(vVar3, &fVar10, &fVar11);
			fVar6 = ((fVar10 - fVar8) / 10f);
			fVar7 = ((fVar11 - fVar9) / 10f);
		}
		fVar15 = 0f;
		fVar16 = 0,3f;
		func_89(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
		if (!unk_0xEB6A8945D1AC98A1(iParam1))
		{
			vVar0 = { unk_0x64430C979F516F7A(iParam1, 52301, vVar12) };
			vVar3 = { unk_0x64430C979F516F7A(iParam1, 36864, vVar12) };
			unk_0x7CE7752990174928(vVar0, 0);
			unk_0x362FD95670BFA2A6(vVar0, &fVar8, &fVar9);
			unk_0x362FD95670BFA2A6(vVar3, &fVar10, &fVar11);
			fVar6 = ((fVar10 - fVar8) / 10f);
			fVar7 = ((fVar11 - fVar9) / 10f);
		}
		fVar15 = 0f;
		fVar16 = 0,3f;
		func_89(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
	}
	if (fParam2 > 0,15f && fParam2 < 0,7f)
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam1))
		{
			vVar0 = { unk_0x64430C979F516F7A(iParam1, 36864, vVar12) };
			vVar3 = { unk_0x64430C979F516F7A(iParam1, 51826, vVar12) };
			unk_0x7CE7752990174928(vVar0, 0);
			unk_0x362FD95670BFA2A6(vVar0, &fVar8, &fVar9);
			unk_0x362FD95670BFA2A6(vVar3, &fVar10, &fVar11);
			fVar6 = ((fVar10 - fVar8) / 10f);
			fVar7 = ((fVar11 - fVar9) / 10f);
		}
		fVar15 = 0,15f;
		fVar16 = 0,3f;
		func_89(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
		if (!unk_0xEB6A8945D1AC98A1(iParam1))
		{
			vVar0 = { unk_0x64430C979F516F7A(iParam1, 63931, vVar12) };
			vVar3 = { unk_0x64430C979F516F7A(iParam1, 58271, vVar12) };
			unk_0x7CE7752990174928(vVar0, 0);
			unk_0x362FD95670BFA2A6(vVar0, &fVar8, &fVar9);
			unk_0x362FD95670BFA2A6(vVar3, &fVar10, &fVar11);
			fVar6 = ((fVar10 - fVar8) / 10f);
			fVar7 = ((fVar11 - fVar9) / 10f);
		}
		fVar15 = 0,15f;
		fVar16 = 0,3f;
		func_89(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
	}
	if (fParam2 > 0,3f && fParam2 < 1f)
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam1))
		{
			vVar0 = { unk_0x64430C979F516F7A(iParam1, 11816, vVar12) };
			vVar3 = { unk_0x64430C979F516F7A(iParam1, 39317, vVar12) };
			unk_0x7CE7752990174928(vVar0, 0);
			unk_0x362FD95670BFA2A6(vVar0, &fVar8, &fVar9);
			unk_0x362FD95670BFA2A6(vVar3, &fVar10, &fVar11);
			fVar6 = ((fVar10 - fVar8) / 10f);
			fVar7 = ((fVar11 - fVar9) / 10f);
		}
		fVar15 = 0,3f;
		fVar16 = 0,5f;
		func_89(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 2f);
	}
	if (fParam2 > 0,6f && fParam2 < 1f)
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam1))
		{
			vVar0 = { unk_0x64430C979F516F7A(iParam1, 31086, vVar12) };
			vVar3 = { vVar0 + vVar0 - unk_0x64430C979F516F7A(iParam1, 39317, vVar12) * Vector(3f, 3f, 3f) };
			unk_0x7CE7752990174928(vVar0, 0);
			unk_0x362FD95670BFA2A6(vVar0, &fVar8, &fVar9);
			unk_0x362FD95670BFA2A6(vVar3, &fVar10, &fVar11);
			fVar6 = ((fVar10 - fVar8) / 10f);
			fVar7 = ((fVar11 - fVar9) / 10f);
		}
		fVar15 = 0,6f;
		fVar16 = 0,3f;
		func_89(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1,3f);
	}
	if (fParam2 > 0,6f && fParam2 < 1f)
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam1))
		{
			vVar0 = { unk_0x64430C979F516F7A(iParam1, 40269, vVar12) };
			vVar3 = { unk_0x64430C979F516F7A(iParam1, 28252, vVar12) };
			unk_0x7CE7752990174928(vVar0, 0);
			unk_0x362FD95670BFA2A6(vVar0, &fVar8, &fVar9);
			unk_0x362FD95670BFA2A6(vVar3, &fVar10, &fVar11);
			fVar6 = ((fVar10 - fVar8) / 10f);
			fVar7 = ((fVar11 - fVar9) / 10f);
		}
		fVar15 = 0,6f;
		fVar16 = 0,3f;
		func_89(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
		if (!unk_0xEB6A8945D1AC98A1(iParam1))
		{
			vVar0 = { unk_0x64430C979F516F7A(iParam1, 45509, vVar12) };
			vVar3 = { unk_0x64430C979F516F7A(iParam1, 61163, vVar12) };
			unk_0x7CE7752990174928(vVar0, 0);
			unk_0x362FD95670BFA2A6(vVar0, &fVar8, &fVar9);
			unk_0x362FD95670BFA2A6(vVar3, &fVar10, &fVar11);
			fVar6 = ((fVar10 - fVar8) / 10f);
			fVar7 = ((fVar11 - fVar9) / 10f);
		}
		fVar15 = 0,6f;
		fVar16 = 0,3f;
		func_89(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
	}
	if (fParam2 > 0,75f && fParam2 < 1f)
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam1))
		{
			vVar0 = { unk_0x64430C979F516F7A(iParam1, 28252, vVar12) };
			vVar3 = { unk_0x64430C979F516F7A(iParam1, 57005, vVar12) };
			unk_0x7CE7752990174928(vVar0, 0);
			unk_0x362FD95670BFA2A6(vVar0, &fVar8, &fVar9);
			unk_0x362FD95670BFA2A6(vVar3, &fVar10, &fVar11);
			fVar6 = ((fVar10 - fVar8) / 10f);
			fVar7 = ((fVar11 - fVar9) / 10f);
		}
		fVar15 = 0,75f;
		fVar16 = 0,25f;
		func_89(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
		if (!unk_0xEB6A8945D1AC98A1(iParam1))
		{
			vVar0 = { unk_0x64430C979F516F7A(iParam1, 61163, vVar12) };
			vVar3 = { unk_0x64430C979F516F7A(iParam1, 18905, vVar12) };
			unk_0x7CE7752990174928(vVar0, 0);
			unk_0x362FD95670BFA2A6(vVar0, &fVar8, &fVar9);
			unk_0x362FD95670BFA2A6(vVar3, &fVar10, &fVar11);
			fVar6 = ((fVar10 - fVar8) / 10f);
			fVar7 = ((fVar11 - fVar9) / 10f);
		}
		fVar15 = 0,75f;
		fVar16 = 0,3f;
		func_89(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
	}
	unk_0xB90B8DD97A132327();
}

void func_89(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11)
{
	fVar2 = (fParam3 / 10f);
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		fVar1 = (fParam1 - (fParam2 + (IntToFloat(iVar0) * fVar2)));
		if (fVar1 > 0f && fVar1 < 0,3f)
		{
			fVar1 = sin((fVar1 * 600f));
			unk_0x539E86AE011A8B38("helicopterhud", "hud_line", (fParam4 * IntToFloat(iVar0)), (fParam5 * IntToFloat(iVar0)), ((fParam6 * fParam11) * 0,01f), ((fParam6 * fParam11) * 0,01f), unk_0x07AB02F3C4AE2B04(0f, 1f, (fParam7 - fParam8), (fParam9 - fParam10)), uParam0->f_71, uParam0->f_71.f_1, uParam0->f_71.f_2, floor((fVar1 * 32f)), 1);
		}
		iVar0++;
	}
}

void func_90(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam3);
}

void func_91(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	unk_0xD3539A877EC25E86(fParam3, fParam3);
	unk_0x7178F32F6742C936(iParam0, iParam1, iParam2, 150);
	if (bParam4)
	{
		unk_0x7635737DA2E9BC79(5, 0, 0, 0, 255);
	}
	unk_0xAAE406A7DA443B93(1);
	unk_0x7BBAC160090910C3(0);
}

int func_92(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 0:
			*iParam2 = uParam0->f_62;
			*iParam3 = uParam0->f_62.f_1;
			*iParam4 = uParam0->f_62.f_2;
			return 1;
			break;
		
		case 1:
			*iParam2 = 255;
			*iParam3 = 255;
			*iParam4 = 0;
			return 1;
			break;
		
		case 2:
			*iParam2 = uParam0->f_65;
			*iParam3 = uParam0->f_65.f_1;
			*iParam4 = uParam0->f_65.f_2;
			return 1;
			break;
		
		case 3:
			*iParam2 = uParam0->f_68;
			*iParam3 = uParam0->f_68.f_1;
			*iParam4 = uParam0->f_68.f_2;
			return 1;
			break;
	}
	return 0;
}

void func_93(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_92(uParam0, iParam5, &iVar0, &iVar1, &iVar2);
	unk_0x7CE7752990174928(vParam1, 0);
	if (iParam6 != -1)
	{
		iVar0 = iParam6;
		iVar1 = iParam7;
		iVar2 = iParam8;
	}
	fParam4 = (fParam4 * 0,03f);
	unk_0x539E86AE011A8B38("helicopterhud", "hud_corner", (-fParam4 * 0,5f), -fParam4, 0,013f, 0,013f, 0f, iVar0, iVar1, iVar2, 200, 1);
	unk_0x539E86AE011A8B38("helicopterhud", "hud_corner", (fParam4 * 0,5f), -fParam4, 0,013f, 0,013f, 90f, iVar0, iVar1, iVar2, 200, 1);
	unk_0x539E86AE011A8B38("helicopterhud", "hud_corner", (-fParam4 * 0,5f), fParam4, 0,013f, 0,013f, 270f, iVar0, iVar1, iVar2, 200, 1);
	unk_0x539E86AE011A8B38("helicopterhud", "hud_corner", (fParam4 * 0,5f), fParam4, 0,013f, 0,013f, 180f, iVar0, iVar1, iVar2, 200, 1);
	unk_0xB90B8DD97A132327();
}

float func_94(var uParam0, int iParam1, int iParam2)
{
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		vVar0 = { unk_0xBF584557291FDD31(iParam1, 0) };
		if (!unk_0x437347B10A200C4B(iParam2, 0))
		{
			fVar3 = unk_0x0EB28750412C3A5A(vVar0, unk_0x68F4C0EC296D3901(iParam2, true), true);
			fVar4 = (uParam0->f_79 / (uParam0->f_40 * fVar3));
			if (fVar4 < 0,4f)
			{
				fVar4 = 0,4f;
			}
			if (fVar4 > 2f)
			{
				fVar4 = 2f;
			}
			return fVar4;
		}
	}
	return 0f;
}

void func_95(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (unk_0x9F4FE516EAACCFC5(unk_0xC4648AFC94BA9ACC()))
	{
		if (!unk_0x362FD95670BFA2A6(vParam1, &uVar0, &uVar0))
		{
			vVar1 = { unk_0xD06724447386BC29(unk_0xC4648AFC94BA9ACC()) };
			vVar4 = { unk_0x17D61C69BA58F815(unk_0xC4648AFC94BA9ACC(), 2) };
			fVar7 = unk_0x0EB28750412C3A5A(vVar1.x, vVar1.y, 0f, vParam1.x, vParam1.y, 0f, true);
			fVar8 = (vParam1.z - vVar1.z);
			if (fVar7 > 0f)
			{
				fVar9 = unk_0x10FCEF75D66B7A3B((fVar8 / fVar7));
			}
			else
			{
				fVar9 = 0f;
			}
			fVar10 = func_96(vVar1, vParam1, 0);
			fVar11 = unk_0x5D8ABF6396A76564(((cos(vVar4.x) * sin(fVar9)) - ((sin(vVar4.x) * cos(fVar9)) * cos(((fVar10 * -1f) - vVar4.z)))), (sin(((fVar10 * -1f) - vVar4.z)) * cos(fVar9)));
			if (uParam0->f_10 > 0f)
			{
			}
			fVar12 = (0,5f - (cos(fVar11) * 0,29f));
			fVar13 = (0,5f - (sin(fVar11) * 0,29f));
			unk_0x539E86AE011A8B38("helicopterhud", "hudArrow", fVar12, fVar13, 0,02f, 0,04f, (fVar11 - 90f), iParam4, iParam5, iParam6, 255, 1);
			unk_0xAAE406A7DA443B93(1);
		}
	}
}

float func_96(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, int iParam6)
{
	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0x5D8ABF6396A76564(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_97(var uParam0)
{
	if (uParam0->f_200 == 0)
	{
		if (unk_0x64F604CF561734A9("SCRIPT\POLICE_CHOPPER_CAM", 0, -1))
		{
			uParam0->f_200 = 1;
			uParam0->f_202 = unk_0xD68EA767274B7444();
			uParam0->f_203 = unk_0xD68EA767274B7444();
			uParam0->f_205 = unk_0xD68EA767274B7444();
			uParam0->f_204 = unk_0xD68EA767274B7444();
			uParam0->f_206 = unk_0xD68EA767274B7444();
			uParam0->f_207 = unk_0xD68EA767274B7444();
			uParam0->f_208 = unk_0xD68EA767274B7444();
			uParam0->f_209 = unk_0xD68EA767274B7444();
		}
	}
}

void func_98(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_163)
	{
		if (uParam0->f_163[iVar0].f_5 != -1)
		{
			if (uParam0->f_163[iVar0].f_3 != 0)
			{
				if (!unk_0x437347B10A200C4B(uParam0->f_163[iVar0].f_3, 0))
				{
					uParam0->f_163[iVar0] = { unk_0x68F4C0EC296D3901(uParam0->f_163[iVar0].f_3, true) };
				}
			}
			if (uParam0->f_163[iVar0].f_4 != 0)
			{
				if (!unk_0x437347B10A200C4B(uParam0->f_163[iVar0].f_4, 0))
				{
					uParam0->f_163[iVar0] = { unk_0xBF584557291FDD31(uParam0->f_163[iVar0].f_4, 0) };
				}
			}
		}
		iVar0++;
	}
}

void func_99(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	fVar5 = fParam2;
	if (uParam0->f_214)
	{
		fVar5 = -25f;
	}
	if (uParam0->f_33 == 1)
	{
		if (unk_0x9F4FE516EAACCFC5(uParam0->f_32))
		{
			if (!unk_0xFBB4F23D534EB790(uParam0->f_32))
			{
				unk_0xE3BB8E05FCEB3FBE(uParam0->f_32, true);
				if (Global_1319110 != -1 || Global_1319116 != -1)
				{
					uParam0->f_213 = 1;
				}
				else
				{
					unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
				}
			}
		}
		if (uParam0->f_35)
		{
			if (unk_0x9F4FE516EAACCFC5(uParam0->f_32))
			{
				vVar6 = { unk_0xD06724447386BC29(uParam0->f_32) };
				Global_1573326 = 1;
				if (unk_0xE82754C349C7B581(vVar6.x, vVar6.y, (vVar6.z + 1f), &fVar9, 0, 0) || unk_0x70EED0761B82965E(uParam0->f_8))
				{
					if (fVar9 > vVar6.z)
					{
						if (Global_1319110 != -1 || Global_1319116 != -1)
						{
							if (uParam0->f_210 > 10)
							{
								if (unk_0xFC0E4F7E386C43F8(uParam0->f_8) >= 0,01f)
								{
									if (Global_1319110 != -1 || Global_1319116 != -1)
									{
										func_48("TUR_WATER", -1);
										uParam0->f_34 = 1;
									}
								}
								if (unk_0xE82754C349C7B581(vVar6.x, vVar6.y, (vVar6.z - 1f), &fVar9, 0, 0))
								{
								}
								else
								{
									if (Global_1319116 != -1)
									{
										func_48("TUR_GR", -1);
									}
									uParam0->f_34 = 1;
								}
							}
							else
							{
								uParam0->f_210++;
							}
						}
						else
						{
							uParam0->f_34 = 1;
						}
					}
					else if (uParam0->f_210 != 0)
					{
						uParam0->f_210 = 0;
					}
				}
			}
		}
		if (uParam0->f_35 == 0)
		{
			if (unk_0x9F4FE516EAACCFC5(uParam0->f_32))
			{
				if (unk_0xC844350D5D58C99A(uParam0->f_9))
				{
					if (!unk_0x437347B10A200C4B(uParam0->f_9, 0))
					{
						if (uParam0->f_4)
						{
							switch (unk_0x134B62B726CEC8E6(uParam0->f_9))
							{
								case -1600252419:
									unk_0xC5940439E4EB9A33(uParam0->f_32, uParam0->f_9, 0f, 5,32f, -0,3f, 1);
									break;
								
								case 353883353:
									unk_0xC5940439E4EB9A33(uParam0->f_32, uParam0->f_9, 0f, 2,75f, -1,25f, 1);
									break;
								
								case -1660661558:
									unk_0xC5940439E4EB9A33(uParam0->f_32, uParam0->f_9, 0f, 2,75f, -1,25f, 1);
									break;
								
								case -82626025:
									unk_0xC5940439E4EB9A33(uParam0->f_32, uParam0->f_9, 0f, 5,75f, -0,75f, 1);
									break;
								
								case -42959138:
									unk_0xC5940439E4EB9A33(uParam0->f_32, uParam0->f_9, -0,0066f, 8,9038f, -0,5f, 1);
									break;
								
								case 1502869817:
									switch (Global_1319110)
									{
										case 1:
											vVar10 = { 0f, 8,4f, 1,3f };
											break;
										
										case 2:
											vVar10 = { -2,4f, -7,6f, 0,92f };
											break;
										
										case 3:
											vVar10 = { 2,4f, -7,6f, 0,92f };
											break;
									}
									unk_0xC5940439E4EB9A33(uParam0->f_32, uParam0->f_9, vVar10, 1);
									break;
								
								case -1216765807:
									vVar13 = { 2065,848f, 2967,32f, 45,2947f };
									vVar16 = { 2049,612f, 2947,657f, 49,556f };
									vVar19 = { 2045,091f, 2943,258f, 49,4991f };
									vVar22 = { 2040,365f, 2952,754f, 49,5688f };
									vVar25 = { 2049,385f, 2953,971f, 49,9635f };
									switch (Global_1319116)
									{
										case 1:
											vVar10 = { vVar16 - vVar13 };
											break;
										
										case 2:
											vVar10 = { vVar19 - vVar13 };
											break;
										
										case 3:
											vVar10 = { vVar22 - vVar13 };
											break;
										
										case 4:
											vVar10 = { vVar25 - vVar13 };
											break;
									}
									unk_0xC5940439E4EB9A33(uParam0->f_32, uParam0->f_9, vVar10, 1);
									break;
								
								default:
									unk_0xC5940439E4EB9A33(uParam0->f_32, uParam0->f_9, 0f, 1,958f, -0,618f, 1);
									break;
							}
						}
						else
						{
							switch (unk_0x134B62B726CEC8E6(uParam0->f_9))
							{
								case 788747387:
									unk_0xC5940439E4EB9A33(uParam0->f_32, uParam0->f_9, 0f, 1,958f, -0,468f, 1);
									break;
								
								case 353883353:
									unk_0xC5940439E4EB9A33(uParam0->f_32, uParam0->f_9, 0f, 2,75f, -1,25f, 1);
									break;
								
								case 745926877:
									unk_0xC5940439E4EB9A33(uParam0->f_32, uParam0->f_9, 0f, 1,958f, -0,618f, 1);
									break;
								
								case -1600252419:
									unk_0xC5940439E4EB9A33(uParam0->f_32, uParam0->f_9, 0f, 5,32f, -0,3f, 1);
									break;
								
								default:
									unk_0xC5940439E4EB9A33(uParam0->f_32, uParam0->f_9, 0f, 1,958f, -0,618f, 1);
									break;
								}
						}
						uParam0->f_35 = 1;
					}
				}
			}
		}
		if (uParam0->f_35 == 1 && uParam0->f_7 == 0)
		{
			fVar28 = 128f;
			if (unk_0x9F4FE516EAACCFC5(uParam0->f_32))
			{
				if (unk_0xFBB4F23D534EB790(uParam0->f_32))
				{
					if (!func_104(1))
					{
						if (!unk_0x06F8112AA79C53D9(2, 19) && !unk_0x798A3F1296751F46())
						{
							unk_0x558EC149EB2BC0A2(0, 39);
							if (unk_0x91E3F625EF57450D(0))
							{
								fVar28 = 15f;
								fVar3 = (unk_0x8A6BC5D9CAEACD0F(0, 291) * -fVar28);
								fVar4 = (unk_0x8A6BC5D9CAEACD0F(0, 290) * fVar28);
							}
							else
							{
								iVar2 = floor((unk_0x8A6BC5D9CAEACD0F(0, 291) * -fVar28));
								iVar1 = floor((unk_0x8A6BC5D9CAEACD0F(0, 290) * fVar28));
							}
							iVar0 = floor((unk_0x4B7163B4D6E4A3C2(0, 39) * 128f));
						}
						if (!unk_0x91E3F625EF57450D(0))
						{
							iVar29 = round((fParam5 * fVar28));
							if (unk_0x51D1D19912234EA0(iVar0) < iVar29)
							{
								iVar0 = 0;
							}
							vVar30 = { IntToFloat(iVar2), IntToFloat(iVar1), 0f };
							if (vmag(vVar30) < IntToFloat(iVar29))
							{
								iVar2 = 0;
								iVar1 = 0;
							}
						}
						fVar33 = ((uParam0->f_42 / fParam2) * 0,5f);
						if (fVar33 > 0f)
						{
							fVar33 = (fVar33 + 1f);
						}
						else
						{
							fVar33 = 1f;
						}
						if (unk_0x91E3F625EF57450D(0))
						{
							uParam0->f_56 = ((fVar3 * uParam0->f_40) * uParam0->f_36);
							uParam0->f_57 = (((fVar4 * uParam0->f_40) * uParam0->f_36) * fVar33);
						}
						else
						{
							uParam0->f_56 = (((to_float(iVar2) * uParam0->f_40) * uParam0->f_36) * timestep());
							uParam0->f_57 = ((((to_float(iVar1) * uParam0->f_40) * uParam0->f_36) * fVar33) * timestep());
						}
						uParam0->f_57 = func_103(uParam0->f_57, fParam3, fParam4);
						if (func_102(uParam0->f_45, 0f, 0f, 0f, 0))
						{
							vVar34 = { unk_0xD06724447386BC29(uParam0->f_32) };
							uParam0->f_45 = (sin(uParam0->f_42.f_2) * 150f);
							uParam0->f_45.f_1 = (cos(uParam0->f_42.f_2) * 150f);
							uParam0->f_45.f_2 = vVar34.z;
						}
						if (uParam0->f_4)
						{
							if ((!func_191(uParam0->f_8) && !func_86()) || Global_1319110 != -1)
							{
								if (iVar2 != 0 && iVar1 != 0)
								{
									uParam0->f_42 = { unk_0x17D61C69BA58F815(uParam0->f_32, 2) };
								}
							}
						}
						else
						{
							uParam0->f_42 = { unk_0x17D61C69BA58F815(uParam0->f_32, 2) };
						}
						if (!func_102(unk_0xD06724447386BC29(uParam0->f_32), 0f, 0f, 0f, 0))
						{
							if (((uParam0->f_25 != 0f && !func_191(uParam0->f_8)) && !func_86()) || Global_1319110 != -1)
							{
								if (unk_0xDF1306B443CD3D15(uParam0->f_8, 0))
								{
									fVar38 = unk_0xD9522BA9E27E1349(uParam0->f_8);
									if (Global_1319110 == 2 || Global_1319110 == 3)
									{
										fVar38 = (fVar38 - 174,4552f);
									}
									fVar39 = (fVar38 - uParam0->f_42.f_2);
									while (unk_0x755FF954DAE327E1(fVar39) >= 180f && iVar40 < 30)
									{
										if (fVar39 < 0f)
										{
											fVar39 = (fVar39 + 360f);
										}
										else
										{
											fVar39 = (fVar39 - 360f);
										}
										iVar40++;
										if (iVar40 == 30)
										{
										}
									}
									if (Global_1319110 != -1)
									{
										if (fVar39 >= fParam4)
										{
											bVar37 = true;
											if (fVar39 > 0f)
											{
												uParam0->f_42.f_2 = (fVar38 - fParam4);
											}
											else
											{
												uParam0->f_42.f_2 = (fVar38 + fParam4);
											}
										}
										if (fVar39 < fParam3)
										{
											bVar37 = true;
											if (fVar39 > 0f)
											{
												uParam0->f_42.f_2 = (fVar38 - unk_0x755FF954DAE327E1(fParam3));
											}
											else
											{
												uParam0->f_42.f_2 = (fVar38 + unk_0x755FF954DAE327E1(fParam3));
											}
										}
									}
									else if (unk_0x755FF954DAE327E1(fVar39) > uParam0->f_25)
									{
										bVar37 = true;
										if (fVar39 > 0f)
										{
											uParam0->f_42.f_2 = (fVar38 - uParam0->f_25);
										}
										else
										{
											uParam0->f_42.f_2 = (fVar38 + uParam0->f_25);
										}
									}
								}
							}
							fVar41 = 0f;
							fVar42 = 0f;
							if (func_191(uParam0->f_8) || func_86())
							{
								if (func_102(uParam0->f_189, 0f, 0f, 0f, 0))
								{
									vVar43 = { unk_0x835730A2D89F6093(uParam0->f_8, 2) };
									uParam0->f_189 = { unk_0x835730A2D89F6093(uParam0->f_8, 2) };
								}
								else
								{
									vVar46 = { unk_0x835730A2D89F6093(uParam0->f_8, 2) };
									if (func_191(uParam0->f_8))
									{
										switch (Global_1319115)
										{
											case 0:
												fVar49 = ((unk_0x755FF954DAE327E1(uParam0->f_186.f_2) - 90f) / 90f);
												break;
											
											case 1:
												fVar49 = ((unk_0x755FF954DAE327E1(uParam0->f_186.f_2) - 90f) / 90f);
												break;
											
											case 2:
												fVar49 = ((unk_0x755FF954DAE327E1(uParam0->f_186.f_2) - 90f) / -90f);
												break;
											
											default:
												fVar49 = ((unk_0x755FF954DAE327E1(uParam0->f_186.f_2) - 90f) / 90f);
												break;
											}
									}
									if (func_86())
									{
										switch (unk_0x134B62B726CEC8E6(uParam0->f_8))
										{
											case -2118308144:
												switch (Global_1319116)
												{
													case 1:
														fVar49 = ((unk_0x755FF954DAE327E1(uParam0->f_186.f_2) - 90f) / 90f);
														break;
													
													case 2:
														fVar49 = ((unk_0x755FF954DAE327E1(uParam0->f_186.f_2) - 90f) / -90f);
														break;
													
													case 3:
														fVar49 = ((unk_0x755FF954DAE327E1(uParam0->f_186.f_2) - 90f) / -90f);
														break;
													
													default:
														fVar49 = ((unk_0x755FF954DAE327E1(uParam0->f_186.f_2) - 90f) / 90f);
														break;
												}
												break;
											
											default:
												switch (Global_1319116)
												{
													case 1:
														fVar49 = ((unk_0x755FF954DAE327E1(uParam0->f_186.f_2) - 90f) / 90f);
														break;
													
													case 2:
														fVar49 = ((unk_0x755FF954DAE327E1(uParam0->f_186.f_2) - 90f) / 90f);
														break;
													
													case 3:
														fVar49 = ((unk_0x755FF954DAE327E1(uParam0->f_186.f_2) - 90f) / -90f);
														break;
													
													default:
														fVar49 = ((unk_0x755FF954DAE327E1(uParam0->f_186.f_2) - 90f) / 90f);
														break;
												}
												break;
											}
									}
									fVar41 = (fVar41 - ((vVar46.x - uParam0->f_189) * fVar49));
									fVar42 = (fVar42 + (vVar46.z - uParam0->f_189.f_2));
									if (fVar42 > 180f)
									{
										fVar42 = (fVar42 - 360f);
									}
									if (fVar42 < -180f)
									{
										fVar42 = (fVar42 + 360f);
									}
									if (vVar46.x < -80f || vVar46.x > 80f)
									{
										fVar41 = 0f;
										fVar42 = 0f;
									}
									if (unk_0x377BE9A1BF38C7CE(uParam0->f_8))
									{
										fVar41 = 0f;
										fVar42 = 0f;
									}
									uParam0->f_189 = { vVar46 };
								}
							}
							if (func_191(uParam0->f_8))
							{
								if (uParam0->f_57 != 0f && !(uParam0->f_186.f_2 == (-uParam0->f_25 / 2f) || uParam0->f_186.f_2 == (uParam0->f_25 / 2f)))
								{
									iLocal_70 = 0;
									iLocal_69 = 0;
								}
								else if (uParam0->f_56 != 0f && !(uParam0->f_186 == fVar5 || uParam0->f_186 == fParam1))
								{
									iLocal_70 = 0;
									iLocal_69 = 0;
								}
								else if (iLocal_69 > 5)
								{
									iLocal_70 = 1;
								}
								iLocal_69++;
							}
							if (((uParam0->f_56 != 0f || uParam0->f_57 != 0f) || fVar41 != 0f) || fVar42 != 0f)
							{
								if (unk_0xDF1306B443CD3D15(uParam0->f_8, 0))
								{
									iVar50 = unk_0x134B62B726CEC8E6(uParam0->f_8);
								}
								if (Global_1319115 != -1 || Global_1319116 != -1)
								{
									if (!func_124(3))
									{
										fVar51 = (((uParam0->f_40 - (uParam0->f_39 - 1f)) / (uParam0->f_38 - (uParam0->f_39 - 1f))) * 6f);
									}
									else if (func_75(unk_0xD803B885F5E47A62()) || func_124(3))
									{
										fVar51 = (((uParam0->f_40 - (uParam0->f_39 - 1f)) / (uParam0->f_38 - (uParam0->f_39 - 1f))) * 8f);
									}
									if (fVar51 < 3f)
									{
										fVar51 = 3f;
									}
									uParam0->f_56 = (uParam0->f_56 * fVar51);
									uParam0->f_57 = (uParam0->f_57 * fVar51);
								}
								else if (iVar50 == -42959138)
								{
									uParam0->f_56 = (uParam0->f_56 * 4f);
									uParam0->f_57 = (uParam0->f_57 * 4f);
								}
								if (func_191(uParam0->f_8) || func_86())
								{
									uParam0->f_186 = (uParam0->f_186 + uParam0->f_56);
									uParam0->f_186.f_2 = (uParam0->f_186.f_2 - uParam0->f_57);
									uParam0->f_186 = (uParam0->f_186 - fVar41);
									uParam0->f_186.f_2 = (uParam0->f_186.f_2 - fVar42);
									if (uParam0->f_186 < fVar5)
									{
										uParam0->f_186 = fVar5;
									}
									if (uParam0->f_186 > fParam1)
									{
										uParam0->f_186 = fParam1;
									}
									if (uParam0->f_25 >= 360f)
									{
										while (uParam0->f_186.f_2 > 180f)
										{
											uParam0->f_186.f_2 = (uParam0->f_186.f_2 - 360f);
										}
										while (uParam0->f_186.f_2 < -180f)
										{
											uParam0->f_186.f_2 = (uParam0->f_186.f_2 + 360f);
										}
									}
									else
									{
										if (uParam0->f_186.f_2 < (-uParam0->f_25 / 2f))
										{
											uParam0->f_186.f_2 = (-uParam0->f_25 / 2f);
											bVar37 = true;
										}
										if (uParam0->f_186.f_2 > (uParam0->f_25 / 2f))
										{
											uParam0->f_186.f_2 = (uParam0->f_25 / 2f);
											bVar37 = true;
										}
									}
								}
								else
								{
									iLocal_69++;
									uParam0->f_42 = { uParam0->f_42 + Vector(-uParam0->f_57, 0f, uParam0->f_56) };
									if (uParam0->f_42 < fVar5)
									{
										uParam0->f_42 = fVar5;
									}
									if (uParam0->f_42 > fParam1)
									{
										uParam0->f_42 = fParam1;
									}
									if (iLocal_69 > 5)
									{
										if (!func_73(vLocal_66, uParam0->f_42, 0,05f, 0))
										{
											vLocal_66 = { uParam0->f_42 };
											iLocal_70 = 0;
										}
										else
										{
											iLocal_70 = 1;
										}
										iLocal_69 = 0;
									}
								}
								if (uParam0->f_203 != -1)
								{
									if (bVar37)
									{
										fVar52 = 0f;
									}
									else
									{
										fVar52 = (fVar52 + unk_0x755FF954DAE327E1(uParam0->f_57));
										if (unk_0x755FF954DAE327E1(uParam0->f_57) > 0f)
										{
											iLocal_70 = 0;
										}
									}
									if (func_191(uParam0->f_8) || func_86())
									{
										if (uParam0->f_186 < fParam1 && uParam0->f_186 > fParam2)
										{
											fVar52 = (fVar52 + unk_0x755FF954DAE327E1(uParam0->f_56));
											if (unk_0x755FF954DAE327E1(uParam0->f_56) > 0f)
											{
												iLocal_70 = 0;
											}
										}
									}
									else if (uParam0->f_42 < fParam1 && uParam0->f_42 > fParam2)
									{
										fVar52 = (fVar52 + unk_0x755FF954DAE327E1(uParam0->f_56));
										if (unk_0x755FF954DAE327E1(uParam0->f_56) > 0f)
										{
											iLocal_70 = 0;
										}
									}
									if (unk_0x8AA6DC470ABA63A2(uParam0->f_203) && !iLocal_70)
									{
										if (func_124(3))
										{
											unk_0x4D7F4CC43D4D0DE3(uParam0->f_203, "Pan_Loop", func_3(3), 1);
										}
										else
										{
											iVar53 = func_101();
											if (iVar53 != 0)
											{
												unk_0x4D7F4CC43D4D0DE3(uParam0->f_203, "Pan", func_3(iVar53), 1);
											}
											else
											{
												unk_0x4D7F4CC43D4D0DE3(uParam0->f_203, "COP_HELI_CAM_TURN", 0, 1);
											}
										}
									}
									if (!unk_0x8AA6DC470ABA63A2(uParam0->f_203))
									{
										if (!iLocal_70 && fVar52 > 0f)
										{
											unk_0x6F6BA3FE885E6C91(uParam0->f_203, "Ctrl", fVar52);
										}
										else
										{
											unk_0x55D0A2DB35045A35(uParam0->f_203);
											iLocal_70 = 1;
											iLocal_69 = 6;
										}
									}
								}
							}
							else if (uParam0->f_203 != -1)
							{
								if (!unk_0x8AA6DC470ABA63A2(uParam0->f_203))
								{
									unk_0x55D0A2DB35045A35(uParam0->f_203);
									iLocal_70 = 1;
									iLocal_69 = 6;
								}
							}
							if ((!func_191(uParam0->f_8) && !func_86()) || Global_1319110 != -1)
							{
								vVar54 = { uParam0->f_159 };
								if (uParam0->f_4)
								{
									fVar57 = 150f;
								}
								else
								{
									fVar57 = unk_0x0EB28750412C3A5A(vVar54, unk_0xD06724447386BC29(uParam0->f_32), true);
								}
								uParam0->f_45 = ((cos(uParam0->f_42) * fVar57) * sin(-uParam0->f_42.f_2));
								uParam0->f_45.f_1 = ((cos(uParam0->f_42) * fVar57) * cos(-uParam0->f_42.f_2));
								uParam0->f_45.f_2 = (sin(uParam0->f_42) * fVar57);
								uParam0->f_45 = { uParam0->f_45 + unk_0xD06724447386BC29(uParam0->f_32) };
								unk_0xC9E4A2CFEBE9BD26(uParam0->f_32, uParam0->f_45);
							}
							else
							{
								if (unk_0x134B62B726CEC8E6(uParam0->f_9) == 447548909)
								{
									switch (Global_1319115)
									{
										case 1:
											vVar64 = { 0f, 7,1f, -1,52f };
											vVar58 = { vVar64 + func_100(0f, 0,18f, 0f, uParam0->f_186.f_2) };
											vVar61 = { -7f, 0f, 0f };
											break;
										
										case 2:
											vVar64 = { 0f, 4,7f, 2,56f };
											vVar58 = { vVar64 + func_100(0f, 0f, 0,5f, uParam0->f_186.f_2) };
											vVar61 = { -5,8f, 0f, 0f };
											break;
										}
								}
								if (unk_0x134B62B726CEC8E6(uParam0->f_9) == -32878452)
								{
									switch (Global_1319115)
									{
										case 0:
											vVar58 = { Vector(2,43f, -4,26f, -3,42f) + Vector(0f, -1,25f, 2,82f) };
											vVar61 = { 0f, 0f, 0f };
											break;
										
										case 1:
											if (!unk_0x437347B10A200C4B(uParam0->f_8, 0) && unk_0x0ECB5CA5140957AD(uParam0->f_8, 10) == 0)
											{
												vVar58 = { Vector(-1,5f, -0,22f, -5,2f) + Vector(-0,4f, 0f, 0,2f) };
												vVar61 = { 0f, 0f, 90f };
											}
											else
											{
												vVar58 = { -5,2f, -0,3f, -1,5f };
												vVar61 = { 0f, 0f, 90f };
											}
											break;
										
										case 2:
											vVar58 = { 23f, -0,18f, 1,23f };
											vVar61 = { 0f, 0f, -90f };
											break;
										}
								}
								if (unk_0x134B62B726CEC8E6(uParam0->f_9) == -2118308144)
								{
									switch (Global_1319116)
									{
										case 1:
											vVar58 = { 0f, 9,8f, -2,315f };
											vVar61 = { 0f, 0f, 0f };
											break;
										
										case 2:
											vVar58 = { 0f, -1,85f, 2,65f };
											vVar61 = { 0f, 0f, 180f };
											break;
										
										case 3:
											vVar58 = { 0f, -9,5f, 0,11f };
											vVar61 = { 0f, 0f, 180f };
											break;
										}
								}
								if (unk_0x134B62B726CEC8E6(uParam0->f_9) == 1181327175)
								{
									switch (Global_1319115)
									{
										case 0:
											vVar58 = { 0f, 9f, -1,2f };
											vVar61 = { -10,2537f, 0f, 0f };
											break;
										
										case 1:
											vVar58 = { -1,26f, 3,278f, 0,695f };
											vVar61 = { 0f, 0f, 90f };
											break;
										
										case 2:
											vVar58 = { 1,26f, 3,278f, 0,695f };
											vVar61 = { 0f, 0f, -90f };
											break;
										}
								}
								if (unk_0x134B62B726CEC8E6(uParam0->f_9) == 177270108)
								{
									switch (Global_1319115)
									{
										case 0:
											vVar58 = { 0f, 0f, 0f };
											vVar61 = { 0f, 0f, 0f };
											break;
										
										case 1:
											vVar58 = { 0f, 0f, 0f };
											vVar61 = { 0f, 0f, 0f };
											break;
										}
								}
								if (unk_0x134B62B726CEC8E6(uParam0->f_8) == -32878452)
								{
									unk_0x28BD035137198E6A(uParam0->f_32, unk_0x16F2683693E537C9(), -1, vVar61 + Vector(uParam0->f_186.f_2, 0f, uParam0->f_186), vVar58, 1);
								}
								else if (Global_1319116 != -1 || (func_191(uParam0->f_8) && unk_0x134B62B726CEC8E6(uParam0->f_8) != -32878452))
								{
									unk_0xF42E0F9B569BF0A5(uParam0->f_32, uParam0->f_9, 0, 1, vVar61 + Vector(uParam0->f_186.f_2, 0f, uParam0->f_186), vVar58, 1);
								}
							}
						}
						if (!((iVar0 == 0 || uParam0->f_40 == uParam0->f_38) || uParam0->f_40 == uParam0->f_39))
						{
							if (uParam0->f_202 != -1)
							{
								if (unk_0x8AA6DC470ABA63A2(uParam0->f_202))
								{
									if (func_124(3))
									{
										unk_0x4D7F4CC43D4D0DE3(uParam0->f_202, "Zoom_Loop", func_3(3), 1);
									}
									else
									{
										iVar67 = func_101();
										if (iVar67 != 0)
										{
											unk_0x4D7F4CC43D4D0DE3(uParam0->f_202, "Zoom", func_3(iVar67), 1);
										}
										else
										{
											unk_0x4D7F4CC43D4D0DE3(uParam0->f_202, "COP_HELI_CAM_ZOOM", 0, 1);
										}
									}
								}
							}
							if (uParam0->f_202 != -1)
							{
								if (!unk_0x8AA6DC470ABA63A2(uParam0->f_202))
								{
									unk_0x6F6BA3FE885E6C91(uParam0->f_202, "Ctrl", unk_0x755FF954DAE327E1((to_float(iVar0) / 128f)));
									if (iVar0 < 0)
									{
										unk_0x6F6BA3FE885E6C91(uParam0->f_202, "Dir", -1f);
									}
								}
							}
						}
						else if (uParam0->f_202 != -1)
						{
							if (!unk_0x8AA6DC470ABA63A2(uParam0->f_202))
							{
								unk_0x55D0A2DB35045A35(uParam0->f_202);
							}
						}
						iVar68 = 4;
						if (func_124(3))
						{
							uParam0->f_37 = 5f;
						}
						if (func_191(uParam0->f_8) || func_86())
						{
							uParam0->f_40 = (uParam0->f_40 + (((to_float(iVar0) / uParam0->f_37) * timestep()) * IntToFloat(iVar68)));
						}
						else
						{
							uParam0->f_40 = (uParam0->f_40 + ((to_float(iVar0) / uParam0->f_37) * timestep()));
						}
						if (uParam0->f_40 > uParam0->f_38)
						{
							uParam0->f_40 = uParam0->f_38;
						}
						if (uParam0->f_40 < uParam0->f_39)
						{
							uParam0->f_40 = uParam0->f_39;
						}
						unk_0x36629DB72EBCB78C(1f);
						unk_0x5818C8D5303DCCF8(uParam0->f_32, uParam0->f_40);
						fVar69 = ((uParam0->f_40 - 5f) / 42f);
						unk_0x7B0A869D38A120EA(fVar69);
					}
				}
			}
		}
		else if (uParam0->f_35 == 1 && uParam0->f_7 == 1)
		{
			vVar70 = { uParam0->f_159 };
			fVar73 = unk_0x0EB28750412C3A5A(vVar70, unk_0xD06724447386BC29(uParam0->f_32), true);
			uParam0->f_45 = ((cos(uParam0->f_42) * fVar73) * sin(-uParam0->f_42.f_2));
			uParam0->f_45.f_1 = ((cos(uParam0->f_42) * fVar73) * cos(-uParam0->f_42.f_2));
			uParam0->f_45.f_2 = (sin(uParam0->f_42) * fVar73);
			uParam0->f_45 = { uParam0->f_45 + unk_0xD06724447386BC29(uParam0->f_32) };
			unk_0xC9E4A2CFEBE9BD26(uParam0->f_32, uParam0->f_45);
			unk_0x5818C8D5303DCCF8(uParam0->f_32, uParam0->f_40);
		}
	}
	else if (unk_0x9F4FE516EAACCFC5(uParam0->f_32))
	{
		if (unk_0xFBB4F23D534EB790(uParam0->f_32))
		{
			unk_0xE3BB8E05FCEB3FBE(uParam0->f_32, false);
			unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
		}
	}
}

Vector3 func_100(vector3 vParam0, float fParam3)
{
	fVar3 = sin(fParam3);
	fVar4 = cos(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.y = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.z = vParam0.z;
	return vVar0;
}

int func_101()
{
	if (func_193(unk_0xD803B885F5E47A62()) || func_142(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	else if (func_141(unk_0xD803B885F5E47A62()) || func_140(unk_0xD803B885F5E47A62()))
	{
		return 2;
	}
	else if (func_124(3))
	{
		return 3;
	}
	return 0;
}

bool func_102(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

float func_103(float fParam0, float fParam1, float fParam2)
{
	while (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + 360f);
	}
	while (fParam0 > fParam2)
	{
		fParam0 = (fParam0 - 360f);
	}
	return fParam0;
}

bool func_104(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

void func_105(var uParam0)
{
	if (((unk_0x9F4FE516EAACCFC5(uParam0->f_32) && uParam0->f_7 == 0) && uParam0->f_35) && !uParam0->f_4)
	{
		iVar12 = 2;
		iVar12 = iVar12;
		vVar0 = { unk_0xD06724447386BC29(uParam0->f_32) };
		vVar3 = { unk_0x17D61C69BA58F815(uParam0->f_32, 2) };
		fVar17 = 0f;
		iVar18 = 0;
		iVar19 = 0;
		iVar19 = iVar19;
		fVar20 = vVar0.z;
		fVar20 = fVar20;
		if (iVar18 == 0)
		{
			fVar21 = 0f;
			fVar22 = (cos(vVar3.x) * 50f);
			while (iVar12 < 21)
			{
				iVar12++;
				fVar11 = (fVar22 * IntToFloat(iVar12));
				fVar9 = ((sin(vVar3.z) * fVar11) * -1f);
				fVar10 = (cos(vVar3.z) * fVar11);
				fVar21 = unk_0x877D3FF6F9D1F987(((vVar0.x + fVar9) - 3f), ((vVar0.y + fVar10) - 3f), ((vVar0.x + fVar9) + 3f), ((vVar0.y + fVar10) + 3f));
				fVar21 = (fVar21 - 20f);
				fVar20 = (vVar0.z + (sin(vVar3.x) * (50f * IntToFloat(iVar12))));
				if (fVar21 > fVar20)
				{
					if (iVar18 == 0)
					{
						iVar18 = 1;
						fVar17 = fVar21;
						iVar12 = 21;
					}
				}
			}
		}
		if (iVar18 == 0)
		{
			if (unk_0xE82754C349C7B581(vVar0, &fVar24, 0, 0))
			{
				fVar23 = (vVar0.z - fVar24);
				if (fVar23 < 150f)
				{
					fVar23 = 150f;
				}
			}
			else
			{
				fVar23 = 150f;
			}
			if (vVar3.x < 0f)
			{
				fVar11 = unk_0x755FF954DAE327E1((fVar23 / unk_0x76F7F8AA07822C28(vVar3.x)));
				fVar17 = (vVar0.z - fVar23);
			}
			else
			{
				fVar11 = 1000f;
				fVar17 = (vVar0.z + (fVar11 * unk_0x76F7F8AA07822C28(vVar3.x)));
			}
		}
		fVar9 = ((sin(vVar3.z) * fVar11) * -1f);
		fVar10 = (cos(vVar3.z) * fVar11);
		vVar6 = { (fVar9 + vVar0.x), (fVar10 + vVar0.y), fVar17 };
		iVar13 = 0;
		while (iVar13 < uParam0->f_175)
		{
			if (!unk_0xEB6A8945D1AC98A1(uParam0->f_175[iVar13]))
			{
				if (func_106(unk_0x68F4C0EC296D3901(uParam0->f_175[iVar13], true), 0,4f, 0,4f, 0,6f, 0,6f))
				{
					iVar18 = 1;
					iVar19 = 1;
					vVar6 = { unk_0x68F4C0EC296D3901(uParam0->f_175[iVar13], true) };
					fVar17 = vVar14.z;
				}
			}
			iVar13++;
		}
		uParam0->f_159 = { vVar6 };
	}
}

int func_106(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x362FD95670BFA2A6(vParam0, &fVar0, &fVar1);
	if (fVar0 >= fParam3 && fVar0 <= fParam5)
	{
		if (fVar1 >= fParam4 && fVar1 <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_107()
{
	if (bLocal_311)
	{
		if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_339, 0))
		{
			switch (iLocal_338)
			{
				case 0:
					if (func_181(&Local_73))
					{
						if (unk_0x8BC9595FD2792B5D("MP_HELI_CAM_FILTERING"))
						{
							iLocal_338++;
						}
					}
					break;
				
				case 1:
					unk_0x58350770D73D313A("MP_HELI_CAM_FILTERING", "HeliFiltering", unk_0x9C66D99E63E8E24C(iLocal_339));
					break;
			}
		}
		else if (iLocal_338 != 99 && iLocal_338 > 0)
		{
			unk_0x8910D3D58E0132B8("MP_HELI_CAM_FILTERING");
			iLocal_338 = 99;
		}
	}
}

void func_108()
{
	switch (iLocal_337)
	{
		case 0:
			if (!unk_0xFEBC1E4EC9E001F0() && !(unk_0x01C309A4BDFCAD82("MC_PLAY", 0) && func_41("SUBJOB_HELP_7")))
			{
				if (bLocal_301)
				{
					if (iLocal_295 == 788747387 || iLocal_295 == -82626025)
					{
						func_48("HUNTGUN_2", -1);
					}
					else if (iLocal_295 == -1600252419)
					{
						func_48("HUNTGUN_2c", -1);
					}
					else if (iLocal_295 == -42959138)
					{
						func_48("HUNTGUN_2c", -1);
					}
					else if (func_191(iLocal_339))
					{
						func_48(func_9(iLocal_339), -1);
					}
					else if (Global_1319110 != -1 || Global_1319116 != -1)
					{
						func_48(func_9(iLocal_339), -1);
					}
					else
					{
						func_48("HUNTGUN_2b", -1);
					}
				}
				else if (bLocal_302)
				{
					if (unk_0x134B62B726CEC8E6(iLocal_339) == -32878452)
					{
						func_48("BOMBGUN_T_2b", -1);
					}
					if (unk_0x134B62B726CEC8E6(iLocal_339) == 1181327175)
					{
						func_48("AKULAGUN_P1", -1);
					}
					if (unk_0x134B62B726CEC8E6(iLocal_339) == 447548909)
					{
						func_48("VOLGUN_T_2b", -1);
					}
				}
				else if (bLocal_303)
				{
					if (unk_0x134B62B726CEC8E6(iLocal_339) == -32878452)
					{
						func_48("BOMBGUN_T_2d", -1);
					}
					if (unk_0x134B62B726CEC8E6(iLocal_339) == 1181327175)
					{
						func_48("AKULAGUN_P1", -1);
					}
					if (unk_0x134B62B726CEC8E6(iLocal_339) == 447548909)
					{
						func_48("VOLGUN_T_2c", -1);
					}
				}
				else if (!func_191(iLocal_339))
				{
					if (iLocal_295 == 788747387 || iLocal_295 == -82626025)
					{
						func_48("HUNTGUN_4", -1);
					}
					else if (iLocal_295 == -1600252419 || iLocal_295 == -42959138)
					{
						func_48("HUNTGUN_4c", -1);
					}
					else if (func_124(3))
					{
						func_48("IAAGUN_1", -1);
					}
					else
					{
						func_48("HUNTGUN_4b", -1);
					}
				}
				iLocal_337++;
			}
			break;
		
		case 1:
			if ((((func_41("HUNTGUN_2") || func_41("HUNTGUN_4")) || func_41("HUNTGUN_2b")) || func_41("HUNTGUN_4b")) && Global_1319116 == -1)
			{
				iLocal_337++;
			}
			if (Global_1319110 != -1 || Global_1319116 != -1)
			{
				if (func_43(Global_1590374) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_25, 7))
				{
					func_48(func_9(iLocal_339), -1);
				}
				else if (func_111())
				{
					func_48(func_9(iLocal_339), -1);
					if (!func_122(&uLocal_292))
					{
						func_144(&uLocal_292, 0, 0);
					}
				}
				else if (func_41(func_9(iLocal_339)))
				{
					unk_0xA37A90C62806D848(1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xFEBC1E4EC9E001F0())
			{
				if (bLocal_301)
				{
					if (func_110(unk_0xD803B885F5E47A62(), 19))
					{
						if (!func_109())
						{
							if (unk_0x91E3F625EF57450D(0))
							{
								func_48("HUNTGUN_6_KM", -1);
							}
							else
							{
								func_48("HUNTGUN_6", -1);
							}
						}
					}
				}
				iLocal_337++;
			}
			break;
	}
}

bool func_109()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1734, 11);
}

bool func_110(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_208, iParam1);
}

bool func_111()
{
	if ((func_141(unk_0xD803B885F5E47A62()) || func_140(unk_0xD803B885F5E47A62())) || func_124(3))
	{
		return 1;
	}
	return !func_121(&uLocal_292, 7500, 0);
}

int func_112()
{
	if (func_193(unk_0xD803B885F5E47A62()) || func_142(unk_0xD803B885F5E47A62()))
	{
		if (Global_1319110 != -1)
		{
			return 1;
		}
	}
	if (((func_141(unk_0xD803B885F5E47A62()) || func_140(unk_0xD803B885F5E47A62())) || func_75(unk_0xD803B885F5E47A62())) || func_124(3))
	{
		if (Global_1319116 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_113(int iParam0)
{
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case 1502869817:
		case 788747387:
		case -82626025:
			return 1;
			break;
	}
	return 0;
}

void func_114(int iParam0)
{
	if (func_119())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_44(0))
		{
			func_115(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_115(int iParam0)
{
	if (func_119())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_118())
		{
			func_117(1, 1);
		}
		else
		{
			func_117(0, 0);
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
	if (!func_116())
	{
		Global_19486.f_1 = 3;
	}
}

int func_116()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_117(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_44(0))
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

bool func_118()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_119()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

bool func_120()
{
	return unk_0x8BB17FEBE0394018() != 0;
}

int func_121(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_144(uParam0, bParam2, 0);
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

bool func_122(var uParam0)
{
	return uParam0->f_1;
}

int func_123(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_124(int iParam0)
{
	return Global_262145.f_5008[iParam0] == Global_4456448.f_194990;
}

int func_125()
{
	if ((((func_141(unk_0xD803B885F5E47A62()) || func_193(unk_0xD803B885F5E47A62())) || func_140(unk_0xD803B885F5E47A62())) || func_75(unk_0xD803B885F5E47A62())) || func_124(3))
	{
		return 1;
	}
	return 0;
}

void func_126(var uParam0, int iParam1)
{
	uParam0->f_51 = iParam1;
}

void func_127()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (bLocal_355 == 0)
		{
			unk_0x6787351639998696("Turret");
			bLocal_355 = true;
		}
	}
}

void func_128()
{
	iLocal_332 = 0;
	if (func_193(unk_0xD803B885F5E47A62()) || func_142(unk_0xD803B885F5E47A62()))
	{
		iLocal_332 = 1;
	}
	else if (func_141(unk_0xD803B885F5E47A62()) || func_140(unk_0xD803B885F5E47A62()))
	{
		iLocal_332 = 2;
	}
	else if (func_124(3))
	{
		iLocal_332 = 3;
	}
	else if (unk_0x134B62B726CEC8E6(iLocal_339) == 788747387 || unk_0x134B62B726CEC8E6(iLocal_339) == -82626025)
	{
		iLocal_332 = 4;
	}
}

void func_129()
{
	if (unk_0xC844350D5D58C99A(Local_73.f_9))
	{
		if ((!unk_0x437347B10A200C4B(Local_73.f_9, 0) && !(!unk_0x437347B10A200C4B(Global_1370234, 0) && unk_0x134B62B726CEC8E6(Local_73.f_9) == unk_0x134B62B726CEC8E6(Global_1370234))) && !func_191(iLocal_339))
		{
			if ((((unk_0x134B62B726CEC8E6(Local_73.f_9) != -1600252419 && unk_0x134B62B726CEC8E6(Local_73.f_9) != -82626025) && unk_0x134B62B726CEC8E6(Local_73.f_9) != -42959138) && !func_141(unk_0xD803B885F5E47A62())) && !func_140(unk_0xD803B885F5E47A62()))
			{
				unk_0xB12423B4F533017F(Local_73.f_9);
				if (!bLocal_307)
				{
					unk_0xA550CB601D5066B5(iLocal_343, 0);
				}
				if (!bLocal_309)
				{
					unk_0xA550CB601D5066B5(iLocal_344, 0);
				}
			}
		}
	}
}

void func_130()
{
	if (bLocal_308)
	{
		if (!bLocal_309 && iLocal_344 != -1)
		{
			vVar0 = { unk_0xB991D4637C301AE4(iLocal_344, 2) };
			fVar3 = unk_0xB488B6010624DDB2(iLocal_344);
			switch (iLocal_357)
			{
				case 0:
					if (unk_0x9F4FE516EAACCFC5(Local_73.f_32))
					{
						Local_73.f_42 = { vVar0 };
						Local_73.f_40 = fVar3;
						unk_0x5F3CBA6EB9341C90(Local_73.f_32, Local_73.f_42, 2);
						unk_0x5818C8D5303DCCF8(Local_73.f_32, Local_73.f_40);
						iLocal_357++;
					}
					break;
				
				case 1:
					vVar0 = { func_132(vVar0, Local_73.f_42) };
					fVar3 = func_131(fVar3, Local_73.f_40);
					if (unk_0x9F4FE516EAACCFC5(Local_73.f_32))
					{
						Local_73.f_42 = { vVar0 };
						Local_73.f_40 = fVar3;
						unk_0x5F3CBA6EB9341C90(Local_73.f_32, Local_73.f_42, 2);
						unk_0x5818C8D5303DCCF8(Local_73.f_32, Local_73.f_40);
					}
					break;
				}
			}
	}
}

float func_131(float fParam0, float fParam1)
{
	fVar0 = (fParam1 + ((fParam0 - fParam1) * vLocal_333.x));
	if (unk_0x755FF954DAE327E1((fVar0 - fParam0)) < fLocal_336)
	{
		fVar0 = fParam0;
	}
	return fVar0;
}

Vector3 func_132(vector3 vParam0, vector3 vParam3)
{
	fVar3 = (vParam0.z - vParam3.z);
	if (unk_0x755FF954DAE327E1(fVar3) > 180f)
	{
		if (fVar3 > 0f)
		{
			fVar3 = (fVar3 - 360f);
		}
		else
		{
			fVar3 = (fVar3 + 360f);
		}
		vParam3.z = (vParam0.z - fVar3);
	}
	vVar0 = { vParam3 + vParam0 - vParam3 * vLocal_333 };
	if (unk_0x755FF954DAE327E1((vVar0.x - vParam0.x)) < fLocal_336)
	{
		vVar0 = { vParam0 };
	}
	if (unk_0x755FF954DAE327E1((vVar0.y - vParam0.y)) < fLocal_336)
	{
		vVar0 = { vParam0 };
	}
	if (unk_0x755FF954DAE327E1((vVar0.z - vParam0.z)) < fLocal_336)
	{
		vVar0 = { vParam0 };
	}
	return vVar0;
}

void func_133()
{
	if (((bLocal_311 || Global_1319110 != -1) || Global_1319116 != -1) || func_191(iLocal_339))
	{
		if (Global_1319110 != -1)
		{
			switch (Global_1319110)
			{
				case 1:
					vVar3 = { 0f, 50f, 1f };
					break;
				
				case 2:
					vVar3 = { 0f, -50f, 1f };
					break;
				
				case 3:
					vVar3 = { 0f, -50f, 1f };
					break;
			}
			vVar0 = { unk_0x68E4ADDDDCD7BDDE(iLocal_339, vVar3) };
		}
		else if (Global_1319116 != -1)
		{
			switch (Global_1319110)
			{
				case 1:
					vVar6 = { 0f, 50f, 1f };
					break;
				
				case 2:
					vVar6 = { 0f, -50f, 1f };
					break;
				
				case 3:
					vVar6 = { 0f, -50f, 1f };
					break;
			}
			vVar0 = { unk_0x68E4ADDDDCD7BDDE(iLocal_339, vVar6) };
		}
		else
		{
			vVar0 = { unk_0x68E4ADDDDCD7BDDE(iLocal_339, 0f, 20f, -1f) };
		}
		func_83(&Local_73, 0, 1086324736, -1030356992, -1020002304, 1127481344, 1041865114);
		func_99(&Local_73, 1086324736, -1030356992, -1020002304, 1127481344, 1041865114);
		func_134(&Local_73, vVar0);
		unk_0xA2071E69C1AE8451(Local_73.f_32, 1);
		if ((Global_1319110 != -1 || func_191(iLocal_339)) || Global_1319116 != -1)
		{
			return;
		}
		Local_73.f_42 = { unk_0x835730A2D89F6093(iLocal_339, 2) - Vector(0f, 0f, 3f) };
	}
}

void func_134(var uParam0, vector3 vParam1)
{
	if ((!func_191(uParam0->f_8) && !func_125()) || Global_1319110 != -1)
	{
		uParam0->f_45 = { vParam1 };
		unk_0xC9E4A2CFEBE9BD26(uParam0->f_32, uParam0->f_45);
		uParam0->f_159 = { vParam1 };
	}
}

int func_135(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam2 == 1 && uParam0->f_1 == 0)
	{
		if (uParam0->f_5 == 0)
		{
			if (Global_1319110 != -1)
			{
				iLocal_71 = unk_0xB01F55A0FD1CFD49(func_143());
			}
			else
			{
				iLocal_71 = unk_0xB01F55A0FD1CFD49(func_143());
			}
		}
		unk_0x0D3BE1DE0262A012("helicopterhud", false);
		if (!unk_0x9F4FE516EAACCFC5(uParam0->f_32))
		{
			uParam0->f_35 = 0;
			uParam0->f_32 = unk_0x0D032838710EE57D("default_scripted_camera", false);
			if (func_191(iParam3) || func_125())
			{
				uParam0->f_12 = 0,1f;
			}
			unk_0xDC3CC6D1845B0567(uParam0->f_32, uParam0->f_12);
		}
		unk_0xB975E4541DDAB1F5(4);
		func_136(1, 1, 1, 0);
		if (!unk_0x437347B10A200C4B(iParam1, 0))
		{
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xE2F1E99DD161A861(iParam1))
				{
					uParam0->f_8 = unk_0x96A5FE5834B81CE7(iParam1);
					unk_0x29AA598B93E45D37(300f);
				}
				unk_0x29AA598B93E45D37(300f);
				uParam0->f_6 = 1;
				uParam0->f_33 = 1;
				uParam0->f_50 = 1;
				uParam0->f_2 = 1;
				uParam0->f_9 = iParam1;
				vVar0 = { unk_0x68F4C0EC296D3901(iParam1, true) };
				uParam0->f_22 = vVar0.z;
				vVar3 = { unk_0x835730A2D89F6093(iParam1, 2) };
				uParam0->f_41 = vVar3.z;
				if (uParam0->f_4)
				{
					unk_0x5EEBDFEE72949D59(0);
				}
				else
				{
					unk_0x5EEBDFEE72949D59(0);
					unk_0xBC03DF6093E8E71F(unk_0xD803B885F5E47A62(), 1);
				}
				unk_0x62EDFC6CFA198C73();
				if (unk_0xDF1306B443CD3D15(uParam0->f_8, 0))
				{
					iVar6 = unk_0x134B62B726CEC8E6(uParam0->f_8);
				}
				if (iVar6 == 788747387 || iVar6 == -82626025)
				{
					unk_0x63D6BFA449464BBF("heliGunCam");
				}
				else if (iVar6 == -1600252419 || iVar6 == -42959138)
				{
					unk_0x63D6BFA449464BBF("heliGunCam");
				}
				else if (Global_1319110 != -1)
				{
				}
				else
				{
					unk_0x63D6BFA449464BBF("eyeinthesky");
				}
				unk_0x7B0C620E7A619AA1(1);
				unk_0xE82754C349C7B581(vVar0, &fVar7, 0, 0);
				uParam0->f_199 = (fVar7 * 10f);
				if (uParam0->f_200 == 1)
				{
					if (uParam0->f_205 != -1)
					{
						if (Global_1319110 == -1)
						{
							if (unk_0x8AA6DC470ABA63A2(uParam0->f_205))
							{
								unk_0x4D7F4CC43D4D0DE3(uParam0->f_205, "COP_HELI_CAM_BACKGROUND", 0, 1);
							}
						}
					}
				}
				func_97(uParam0);
				uParam0->f_1 = 1;
			}
		}
		return 0;
	}
	else
	{
		if (uParam0->f_1 == 1 && iParam2 == 1)
		{
			if (uParam0->f_86 == 0)
			{
				func_85(uParam0, 0, -1020002304, 1127481344);
				func_84();
			}
			else
			{
				return 1;
			}
		}
		if (uParam0->f_1 == 1 && iParam2 == 0)
		{
			if (iParam4 == 0)
			{
				uParam0->f_48 = 0;
			}
			uParam0->f_6 = 0;
			uParam0->f_33 = 0;
			uParam0->f_50 = 0;
			uParam0->f_9 = 0;
			uParam0->f_2 = 0;
			uParam0->f_55 = 0;
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				unk_0x18B28213EC89540F(0);
				unk_0xBC03DF6093E8E71F(unk_0xD803B885F5E47A62(), 0);
			}
			if (unk_0xDF1306B443CD3D15(uParam0->f_8, 0))
			{
				if (unk_0x3A0342D9BFBD378D(uParam0->f_8))
				{
					unk_0x15AFB6CBDE990FB6(uParam0->f_8, 1, 1);
				}
				if (!uParam0->f_4)
				{
					unk_0x1E9649458B15960F(uParam0->f_8, false);
					unk_0xE121AE1BBF90E186(uParam0->f_8, false);
					unk_0x08543B8F6DBE0B08(uParam0->f_8, 1);
					unk_0xB51E0072589021AC(uParam0->f_8, 1);
				}
			}
			unk_0xB975E4541DDAB1F5(0);
			if (unk_0x9F4FE516EAACCFC5(uParam0->f_32))
			{
				if (unk_0xFBB4F23D534EB790(uParam0->f_32))
				{
					unk_0xE3BB8E05FCEB3FBE(uParam0->f_32, false);
				}
				if (unk_0x9CF8D5C7090408A2(uParam0->f_32))
				{
					unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
				}
				unk_0x9A8DDC7C522F5BF5(uParam0->f_32, 0);
			}
			if (uParam0->f_202 != -1)
			{
				if (!unk_0x8AA6DC470ABA63A2(uParam0->f_202))
				{
					unk_0x55D0A2DB35045A35(uParam0->f_202);
				}
			}
			if (uParam0->f_203 != -1)
			{
				if (!unk_0x8AA6DC470ABA63A2(uParam0->f_203))
				{
					unk_0x55D0A2DB35045A35(uParam0->f_203);
				}
			}
			if (uParam0->f_204 != -1)
			{
				if (!unk_0x8AA6DC470ABA63A2(uParam0->f_204))
				{
					unk_0x55D0A2DB35045A35(uParam0->f_204);
				}
			}
			if (uParam0->f_206 != -1)
			{
				if (!unk_0x8AA6DC470ABA63A2(uParam0->f_206))
				{
					unk_0x55D0A2DB35045A35(uParam0->f_206);
				}
			}
			if (uParam0->f_207 != -1)
			{
				if (!unk_0x8AA6DC470ABA63A2(uParam0->f_207))
				{
					unk_0x55D0A2DB35045A35(uParam0->f_207);
				}
			}
			if (uParam0->f_208 != -1)
			{
				if (!unk_0x8AA6DC470ABA63A2(uParam0->f_208))
				{
					unk_0x55D0A2DB35045A35(uParam0->f_208);
				}
			}
			if (uParam0->f_205 != -1)
			{
				if (!unk_0x8AA6DC470ABA63A2(uParam0->f_205))
				{
					unk_0x55D0A2DB35045A35(uParam0->f_205);
				}
			}
			if (uParam0->f_209 != -1)
			{
				if (!unk_0x8AA6DC470ABA63A2(uParam0->f_209))
				{
					unk_0x55D0A2DB35045A35(uParam0->f_209);
				}
			}
			if (uParam0->f_200 == 1)
			{
				unk_0xBFBFE6D9F51994DB();
				unk_0x43A06902454A1172(uParam0->f_205);
				unk_0x43A06902454A1172(uParam0->f_202);
				unk_0x43A06902454A1172(uParam0->f_203);
				unk_0x43A06902454A1172(uParam0->f_204);
				unk_0x43A06902454A1172(uParam0->f_206);
				unk_0x43A06902454A1172(uParam0->f_207);
				unk_0x43A06902454A1172(uParam0->f_208);
				unk_0x43A06902454A1172(uParam0->f_209);
				uParam0->f_205 = -1;
				uParam0->f_202 = -1;
				uParam0->f_203 = -1;
				uParam0->f_204 = -1;
				uParam0->f_206 = -1;
				uParam0->f_207 = -1;
				uParam0->f_208 = -1;
				uParam0->f_209 = -1;
				uParam0->f_200 = 0;
			}
			unk_0x225CFE81EA219E44();
			unk_0x7B0C620E7A619AA1(0);
			unk_0xF5A41F3D3B38EFE3("helicopterHUD");
			unk_0xE17FDF9E3068281B(&iLocal_71);
			unk_0x864669B357545A64();
			func_136(0, 0, 1, 0);
			uParam0->f_8 = 0;
			uParam0->f_1 = 0;
			func_97(uParam0);
			return 1;
		}
	}
	return 0;
}

int func_136(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_137(int iParam0)
{
	return iParam0;
}

int func_138(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
	uParam0->f_62 = 93;
	uParam0->f_62.f_1 = 182;
	uParam0->f_62.f_2 = 229;
	uParam0->f_65 = 255;
	uParam0->f_65.f_1 = 0;
	uParam0->f_65.f_2 = 0;
	uParam0->f_68 = 255;
	uParam0->f_68.f_1 = 255;
	uParam0->f_68.f_2 = 255;
	uParam0->f_71 = 255;
	uParam0->f_71.f_1 = 40;
	uParam0->f_71.f_2 = 0;
	uParam0->f_15 = 40f;
	uParam0->f_36 = 0,0075f;
	uParam0->f_37 = 20f;
	uParam0->f_40 = 28f;
	if (func_140(unk_0xD803B885F5E47A62()) || func_141(unk_0xD803B885F5E47A62()))
	{
		uParam0->f_40 = 40f;
	}
	uParam0->f_54 = 0,234f;
	uParam0->f_58 = 22;
	uParam0->f_59 = 201;
	uParam0->f_60 = 39;
	uParam0->f_61 = 181;
	uParam0->f_74 = 0,044f;
	uParam0->f_75 = 0,02f;
	uParam0->f_77 = 1240f;
	uParam0->f_78 = 5000f;
	uParam0->f_79 = 1000f;
	uParam0->f_81 = 0,829f;
	uParam0->f_82 = 0,096f;
	uParam0->f_83 = 0,865f;
	uParam0->f_84 = 0,567f;
	uParam0->f_85 = 0,087f;
	uParam0->f_18 = 140f;
	uParam0->f_19 = 1f;
	uParam0->f_20 = 3f;
	uParam0->f_21 = 1f;
	uParam0->f_88 = 0,052f;
	uParam0->f_89 = 0,75f;
	uParam0->f_90 = 0,86f;
	uParam0->f_91 = 0,02f;
	uParam0->f_195 = 0,65f;
	uParam0->f_196 = 0,024f;
	uParam0->f_157 = 0,12f;
	if (unk_0x8CD06866876216F2())
	{
		unk_0xD7992BEF7A9D109E("CHOPPER", 5);
		if (unk_0x01C309A4BDFCAD82("CHOPPER", 5))
		{
			return 1;
		}
	}
	else
	{
		unk_0xD7992BEF7A9D109E("CHOPPER", 3);
		if (unk_0x01C309A4BDFCAD82("CHOPPER", 3))
		{
			return 1;
		}
	}
	return 0;
}

void func_139()
{
	unk_0x5D96D8530B3D0904(&Global_7357, 4);
}

int func_140(int iParam0)
{
	if (iParam0 != func_17())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_37(Global_2425662[iParam0].f_310.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_141(int iParam0)
{
	if (iParam0 != func_17())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_17())
			{
				return func_37(Global_2425662[iParam0].f_310.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_142(int iParam0)
{
	if (iParam0 != func_17())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_37(Global_2425662[iParam0].f_310.f_5) == 6;
			}
		}
	}
	return 0;
}

char* func_143()
{
	if ((((func_141(unk_0xD803B885F5E47A62()) || func_140(unk_0xD803B885F5E47A62())) || func_193(unk_0xD803B885F5E47A62())) || func_142(unk_0xD803B885F5E47A62())) || Global_1319116 != -1)
	{
		return "turret_cam";
	}
	return "heli_cam";
}

void func_144(var uParam0, bool bParam1, bool bParam2)
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

void func_145(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iLocal_339) && !unk_0x437347B10A200C4B(iLocal_339, 0))
	{
		iVar0 = unk_0x134B62B726CEC8E6(iLocal_339);
		switch (iVar0)
		{
			case -2118308144:
				unk_0xEE49A35456CE8AEE(iLocal_339, 0, iParam0);
				unk_0xEE49A35456CE8AEE(iLocal_339, 1, iParam0);
				unk_0xEE49A35456CE8AEE(iLocal_339, 2, iParam0);
				break;
		}
	}
}

void func_146()
{
	if (func_41("HUNTGUN_1"))
	{
		unk_0xA37A90C62806D848(1);
	}
	if (func_41("HUNTGUN_1b"))
	{
		unk_0xA37A90C62806D848(1);
	}
	if (func_41("HUNTGUN_1c"))
	{
		unk_0xA37A90C62806D848(1);
	}
	if (func_41("HUNTGUN_3"))
	{
		unk_0xA37A90C62806D848(1);
	}
	if (func_41("HUNTGUN_3b"))
	{
		unk_0xA37A90C62806D848(1);
	}
	if (func_41("HUNTGUN_3c"))
	{
		unk_0xA37A90C62806D848(1);
	}
	if (((((((((((((((((((((func_41("BOMBGUN_1c") || func_41("BOMBGUN_1c1")) || func_41("BOMBGUN_1c2")) || func_41("BOMBGUN_2c")) || func_41("BOMBGUN_2c1")) || func_41("BOMBGUN_2c2")) || func_41("BOMBGUN_3c")) || func_41("BOMBGUN_3c1")) || func_41("BOMBGUN_3c2")) || func_41("BOMBGUN_FULL")) || func_41("BOMBGUN_BUSY")) || func_41("AKULAGUN_2")) || func_41("AKULAGUN_1")) || func_41("VOLGUN_1c")) || func_41("VOLGUN_1c1")) || func_41("VOLGUN_1c2")) || func_41("VOLGUN_2c")) || func_41("VOLGUN_2c1")) || func_41("VOLGUN_2c2")) || func_41("VOLGUN_3c")) || func_41("VOLGUN_3c1")) || func_41("VOLGUN_3c2"))
	{
		unk_0xA37A90C62806D848(1);
	}
	if (func_41("HUNTGUNH_1c"))
	{
		unk_0xA37A90C62806D848(1);
	}
	if (func_41(func_9(iLocal_339)))
	{
		unk_0xA37A90C62806D848(1);
	}
}

void func_147(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_148(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(iParam0) == 1181327175)
	{
		return 1;
	}
	switch (unk_0x134B62B726CEC8E6(unk_0x96A5FE5834B81CE7(iParam0)))
	{
		case -1600252419:
		case -32878452:
		case 447548909:
		case -42959138:
		case -82626025:
			return 1;
			break;
	}
	return 0;
}

void func_149(int iParam0)
{
	if (unk_0x57270EE11514DC67() != -1)
	{
		Local_350[unk_0x57270EE11514DC67()].f_1 = iParam0;
	}
}

int func_150()
{
	if (((!bLocal_301 && !bLocal_302) && !bLocal_303) && func_191(iLocal_339))
	{
		return 0;
	}
	if (func_157())
	{
		return 0;
	}
	if (func_156(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_75(unk_0xD803B885F5E47A62()) || func_27())
	{
		return 0;
	}
	if (Global_1316759)
	{
		return 0;
	}
	iVar1 = unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 355471868);
	if ((iVar1 == 1 || iVar1 == 0) || unk_0x4E3CE49FD6DA2735(unk_0x16F2683693E537C9(), 373))
	{
		return 0;
	}
	if (func_41("TUR_GR") || func_41("TUR_WATER"))
	{
		return 0;
	}
	if ((((!unk_0x798A3F1296751F46() && !func_45()) && !func_44(0)) && !Global_1312791) && !Global_1315732)
	{
		if (func_155())
		{
			if (unk_0xBFC0798A6E3417F9(0, 51) && iLocal_305 < 1)
			{
				func_146();
				func_48("BOMBGUN_BUSY", -1);
				iLocal_305++;
			}
		}
		else
		{
			iVar2 = 51;
			iVar3 = 0;
			if (Global_1319110 != -1 || Global_1319116 != -1)
			{
				iVar3 = 2;
				iVar2 = 176;
			}
			if (Global_1319110 != -1)
			{
				if (!unk_0xC844350D5D58C99A(iLocal_339))
				{
					if (unk_0xC844350D5D58C99A(Global_1370236))
					{
						iLocal_339 = Global_1370236;
					}
				}
			}
			if (unk_0xC844350D5D58C99A(iLocal_339))
			{
				if (!unk_0x437347B10A200C4B(iLocal_339, 0))
				{
					if (!unk_0xBBA8A868118C90ED(iLocal_339, -1, 0))
					{
						iLocal_341 = unk_0xA30B8362589C124A(iLocal_339, -1, 0);
					}
				}
			}
			if (unk_0xBFC0798A6E3417F9(iVar3, iVar2))
			{
				func_144(&uLocal_322, 1, 0);
			}
			if (unk_0xB9132A06AE472728(iVar3, iVar2))
			{
				if (func_122(&uLocal_322))
				{
					if (func_121(&uLocal_322, 500, 1))
					{
						if (iLocal_327 == 0)
						{
							func_147(&uLocal_322);
							iLocal_327 = 1;
						}
					}
					else if (iLocal_326 == 0)
					{
						if (func_154())
						{
							func_147(&uLocal_322);
							iLocal_326 = 1;
						}
						else
						{
							func_147(&uLocal_322);
						}
					}
				}
			}
			else if (iLocal_327 == 0)
			{
				if (func_122(&uLocal_322))
				{
					if (func_121(&uLocal_322, 500, 1))
					{
						func_147(&uLocal_322);
						iLocal_327 = 1;
					}
				}
			}
			if (!func_157())
			{
				if (((((unk_0xB9132A06AE472728(iVar3, iVar2) && !(iLocal_341 == unk_0x16F2683693E537C9() && iLocal_295 == -42959138)) && !func_191(iLocal_339)) || (unk_0xD245978525608929(iVar3, iVar2) && Global_1319110 != -1)) || (unk_0xD245978525608929(iVar3, iVar2) && Global_1319116 != -1)) || iLocal_326)
				{
					iLocal_326 = 0;
					if (func_151())
					{
						if (!unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 12) && !Global_2460715)
						{
							if (unk_0xDF1306B443CD3D15(iLocal_339, 0) && !func_42(iLocal_339, 0))
							{
								bVar0 = true;
								Global_2513487 = 1;
								Global_1590535[unk_0xD803B885F5E47A62()].f_847 = 1;
							}
							else
							{
								if (!unk_0xDF1306B443CD3D15(iLocal_339, 0) && unk_0x134B62B726CEC8E6(iLocal_339) == -2118308144)
								{
									bVar0 = true;
									Global_2513487 = 1;
									Global_1590535[unk_0xD803B885F5E47A62()].f_847 = 1;
								}
								if (!unk_0xDF1306B443CD3D15(iLocal_339, 0) && unk_0x134B62B726CEC8E6(iLocal_339) != -2118308144)
								{
								}
							}
						}
						else
						{
							return 0;
						}
					}
				}
			}
		}
	}
	if ((func_141(unk_0xD803B885F5E47A62()) || func_140(unk_0xD803B885F5E47A62())) || func_125())
	{
		return bVar0;
	}
	if ((bLocal_301 || bLocal_302) || bLocal_303)
	{
		if (bVar0)
		{
		}
		return bVar0;
	}
	else if (func_179())
	{
		if (bVar0)
		{
			if (iLocal_295 != -42959138)
			{
				return bVar0;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_151()
{
	if (Global_1319110 != -1 || Global_1319116 != -1)
	{
		if ((((unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_152(unk_0x16F2683693E537C9(), 2106541073))
		{
			return 0;
		}
		if ((!unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3))
		{
			return 0;
		}
		if (func_27())
		{
			return 0;
		}
	}
	if (func_124(3))
	{
		if (Global_1573352 == 185)
		{
			if (Global_1574442 != 0)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_152(int iParam0, int iParam1)
{
	if (func_153(iParam0))
	{
		if (unk_0xD1960163A3042274(iParam0, iParam1) == 1 || unk_0xD1960163A3042274(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_153(int iParam0)
{
	if (func_123(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_154()
{
	if (unk_0x134B62B726CEC8E6(iLocal_339) == 447548909 && bLocal_301)
	{
		return 0;
	}
	return 1;
}

int func_155()
{
	if (func_191(iLocal_339))
	{
		return iLocal_329;
	}
	return 0;
}

int func_156(int iParam0)
{
	if (iParam0 != func_17())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_37(Global_2425662[iParam0].f_310.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_157()
{
	if (!func_160(unk_0xD803B885F5E47A62()))
	{
		if (func_41("BHH_LEFTRANGE"))
		{
			return 1;
		}
		if (func_158(unk_0xD803B885F5E47A62()) == 239)
		{
			return 1;
		}
	}
	return 0;
}

int func_158(int iParam0)
{
	if (func_159(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_159(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_160(int iParam0)
{
	if (iParam0 != func_17())
	{
		if (func_15(iParam0, 1, 1))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && iParam0 == unk_0xD803B885F5E47A62()) && func_15(iParam0, 1, 0))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
	}
	return 0;
}

void func_161()
{
	if (unk_0x134B62B726CEC8E6(iLocal_339) == 447548909)
	{
		func_163();
	}
	else
	{
		func_162();
	}
}

void func_162()
{
	if (!func_191(iLocal_339) || unk_0x134B62B726CEC8E6(iLocal_339) == 1181327175)
	{
		iLocal_327 = 0;
		return;
	}
	if (iLocal_327)
	{
		func_146();
		iLocal_327 = 0;
		if (bLocal_301)
		{
			if (unk_0xBBA8A868118C90ED(iLocal_339, 1, 0))
			{
				unk_0x16A6C233289238AA(unk_0x16F2683693E537C9(), iLocal_339, 0);
				iLocal_328 = 1;
			}
			else if (unk_0xBBA8A868118C90ED(iLocal_339, 2, 0))
			{
				unk_0x16A6C233289238AA(unk_0x16F2683693E537C9(), iLocal_339, 1);
				iLocal_328 = 2;
			}
			else if (iLocal_304 < 1)
			{
				func_48("BOMBGUN_FULL", -1);
				iLocal_304++;
			}
		}
		else if (bLocal_302)
		{
			if (unk_0xBBA8A868118C90ED(iLocal_339, 2, 0))
			{
				unk_0x16A6C233289238AA(unk_0x16F2683693E537C9(), iLocal_339, 0);
				iLocal_328 = 2;
			}
			else if (unk_0xBBA8A868118C90ED(iLocal_339, 0, 0))
			{
				unk_0x16A6C233289238AA(unk_0x16F2683693E537C9(), iLocal_339, 1);
				iLocal_328 = 0;
			}
			else if (iLocal_304 < 1)
			{
				func_48("BOMBGUN_FULL", -1);
				iLocal_304++;
			}
		}
		else if (bLocal_303)
		{
			if (unk_0xBBA8A868118C90ED(iLocal_339, 0, 0))
			{
				unk_0x16A6C233289238AA(unk_0x16F2683693E537C9(), iLocal_339, 0);
				iLocal_328 = 0;
			}
			else if (unk_0xBBA8A868118C90ED(iLocal_339, 1, 0))
			{
				unk_0x16A6C233289238AA(unk_0x16F2683693E537C9(), iLocal_339, 1);
				iLocal_328 = 1;
			}
			else if (iLocal_304 < 1)
			{
				func_48("BOMBGUN_FULL", -1);
				iLocal_304++;
			}
		}
	}
	if (iLocal_328 != -2)
	{
		if (unk_0xA30B8362589C124A(iLocal_339, iLocal_328, 0) == unk_0x16F2683693E537C9())
		{
			iLocal_329 = 0;
			iLocal_328 = -2;
			iLocal_297 = 0;
		}
		else
		{
			iLocal_329 = 1;
			if (!unk_0xBBA8A868118C90ED(iLocal_339, iLocal_328, 0))
			{
				switch (iLocal_328)
				{
					case 0:
						func_48("BOMBGUN_1o", 1000);
						break;
					
					case 1:
						func_48("BOMBGUN_2o", 1000);
						break;
					
					case 2:
						func_48("BOMBGUN_3o", 1000);
						break;
				}
				iLocal_329 = 0;
				iLocal_328 = -2;
				iLocal_297 = 0;
			}
		}
	}
}

void func_163()
{
	if (!func_191(iLocal_339))
	{
		iLocal_327 = 0;
		return;
	}
	if (iLocal_327)
	{
		func_146();
		iLocal_327 = 0;
		if (bLocal_302)
		{
			if (unk_0xBBA8A868118C90ED(iLocal_339, 2, 0))
			{
				unk_0x16A6C233289238AA(unk_0x16F2683693E537C9(), iLocal_339, 0);
				iLocal_328 = 2;
			}
			else if (iLocal_304 < 1)
			{
				func_48("BOMBGUN_FULL", -1);
				iLocal_304++;
			}
		}
		else if (bLocal_303)
		{
			if (unk_0xBBA8A868118C90ED(iLocal_339, 1, 0))
			{
				unk_0x16A6C233289238AA(unk_0x16F2683693E537C9(), iLocal_339, 1);
				iLocal_328 = 1;
			}
			else if (iLocal_304 < 1)
			{
				func_48("BOMBGUN_FULL", -1);
				iLocal_304++;
			}
		}
	}
	if (iLocal_328 != -2)
	{
		if (unk_0xA30B8362589C124A(iLocal_339, iLocal_328, 0) == unk_0x16F2683693E537C9())
		{
			iLocal_329 = 0;
			iLocal_328 = -2;
			iLocal_297 = 0;
		}
		else
		{
			iLocal_329 = 1;
			if (!unk_0xBBA8A868118C90ED(iLocal_339, iLocal_328, 0))
			{
				switch (iLocal_328)
				{
					case 1:
						func_48("BOMBGUN_2o", 1000);
						break;
					
					case 2:
						func_48("BOMBGUN_1o", 1000);
						break;
				}
				iLocal_329 = 0;
				iLocal_328 = -2;
				iLocal_297 = 0;
			}
		}
	}
}

void func_164()
{
	if (!func_170())
	{
		return;
	}
	if ((unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 12) || Global_2460715) || Global_1315732)
	{
		return;
	}
	if (func_157())
	{
		return;
	}
	if (((iLocal_339 != Global_2537071.f_4535 || Global_1319110 != -1) || func_191(iLocal_339)) || Global_1319116 != -1)
	{
		if (!iLocal_297 || Global_1319110 != -1)
		{
			if (!unk_0xFEBC1E4EC9E001F0())
			{
				if ((bLocal_301 || bLocal_302) || bLocal_303)
				{
					if (iLocal_295 == 788747387 || iLocal_295 == -82626025)
					{
						if (func_110(unk_0xD803B885F5E47A62(), 19))
						{
							if (!func_109())
							{
								bVar0 = true;
							}
						}
						if (!bVar0)
						{
							func_48("HUNTGUN_1", -1);
						}
					}
					else if (iLocal_295 == -1600252419)
					{
						if (func_110(unk_0xD803B885F5E47A62(), 19))
						{
							if (!func_109())
							{
								bVar0 = true;
							}
						}
						if (!bVar0)
						{
							func_48("HUNTGUN_1c", -1);
						}
					}
					else if (iLocal_295 == -42959138)
					{
						if (func_110(unk_0xD803B885F5E47A62(), 19))
						{
							if (!func_109())
							{
								bVar0 = true;
							}
						}
						if (!bVar0)
						{
							func_48("HUNTGUNH_1c", -1);
						}
					}
					else if (Global_1319110 != -1)
					{
					}
					else if (func_191(iLocal_339))
					{
						if (!func_156(unk_0xD803B885F5E47A62()))
						{
							if (iLocal_295 == 1181327175)
							{
								if (bLocal_301)
								{
									func_48("AKULAGUN_1", -1);
								}
								else if (bLocal_302)
								{
									func_48("AKULAGUN_2", -1);
								}
								else if (bLocal_303)
								{
									func_48("AKULAGUN_2", -1);
								}
							}
							else if (iLocal_295 == 447548909)
							{
								if (bLocal_302)
								{
									if (!bLocal_319)
									{
										func_48("VOLGUN_1c2", -1);
									}
									else
									{
										func_48("VOLGUN_1c", -1);
									}
								}
								else if (bLocal_303)
								{
									if (!bLocal_315)
									{
										func_48("VOLGUN_2c1", -1);
									}
									else
									{
										func_48("VOLGUN_2c", -1);
									}
								}
							}
							else if (bLocal_301)
							{
								if (!bLocal_315)
								{
									func_48("BOMBGUN_1c1", -1);
								}
								else if (!bLocal_319)
								{
									func_48("BOMBGUN_1c2", -1);
								}
								else
								{
									func_48("BOMBGUN_1c", -1);
								}
							}
							else if (bLocal_302)
							{
								if (!bLocal_319)
								{
									func_48("BOMBGUN_2c2", -1);
								}
								else if (!bLocal_308)
								{
									func_48("BOMBGUN_2c1", -1);
								}
								else
								{
									func_48("BOMBGUN_2c", -1);
								}
							}
							else if (bLocal_303)
							{
								if (!bLocal_308)
								{
									func_48("BOMBGUN_3c1", -1);
								}
								else if (!bLocal_315)
								{
									func_48("BOMBGUN_3c2", -1);
								}
								else
								{
									func_48("BOMBGUN_3c", -1);
								}
							}
						}
					}
					else
					{
						func_48("HUNTGUN_1b", -1);
					}
					iLocal_297 = 1;
				}
				else if ((((func_179() && !Global_2460715.f_132) && !Global_1315732) && iLocal_295 != -42959138) && !func_191(iLocal_339))
				{
					if (iLocal_295 == 788747387 || iLocal_295 == -82626025)
					{
						func_48("HUNTGUN_3", -1);
					}
					else if (iLocal_295 == -1600252419)
					{
						func_48("HUNTGUN_3c", -1);
					}
					else
					{
						func_48("HUNTGUN_3b", -1);
					}
					iLocal_297 = 1;
				}
			}
			else if (func_41("VEX_EYEHLPe"))
			{
				iLocal_297 = 1;
			}
		}
		else if (func_169(unk_0xD803B885F5E47A62(), 1) || func_166(unk_0xD803B885F5E47A62(), 1, 0))
		{
			if (!unk_0xFEBC1E4EC9E001F0())
			{
				if (!iLocal_300)
				{
					if (!bLocal_301)
					{
						if (func_165())
						{
							iLocal_300 = 1;
							Global_2537071.f_4535 = iLocal_339;
						}
					}
					else
					{
						iLocal_300 = 1;
						Global_2537071.f_4535 = iLocal_339;
					}
				}
			}
		}
		else
		{
			iLocal_300 = 1;
			Global_2537071.f_4535 = iLocal_339;
		}
	}
	else
	{
		iLocal_297 = 1;
		iLocal_300 = 1;
	}
}

int func_165()
{
	return 0;
}

int func_166(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_167(iParam0))
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

bool func_167(int iParam0)
{
	return func_168(iParam0);
}

bool func_168(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_13.f_1, 0);
}

int func_169(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_167(iParam0))
		{
			return 1;
		}
	}
	if ((((Global_1590535[iParam0] == 2 || Global_1590535[iParam0] == 1) || Global_1590535[iParam0] == 0) || Global_1590535[iParam0] == 3) || Global_1590535[iParam0] == 8)
	{
		return 1;
	}
	return 0;
}

bool func_170()
{
	return ((((((((((((!iLocal_297 && !func_156(unk_0xD803B885F5E47A62())) && !unk_0x7BCE0E6DD4A1F749()) && !unk_0x757EF87A33649210()) && !unk_0xD0BB2359EC70FC37()) && unk_0x0F1CCD77290EE12F()) && !unk_0x0178C60FEA5C5A75()) && unk_0x354AEB4A9EE525A6()) && !func_45()) && !unk_0x798A3F1296751F46()) && !unk_0xF929B1A0A409FF93()) && !func_171()) && !func_39(unk_0xD803B885F5E47A62()));
}

bool func_171()
{
	return Global_1676377.f_474;
}

void func_172()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (bLocal_355 == 1)
		{
			unk_0xA68C4874B560B1C0();
			bLocal_355 = false;
		}
	}
}

void func_173()
{
	func_174();
	if (unk_0x134B62B726CEC8E6(iLocal_339) == 1181327175 && (bLocal_302 || bLocal_303))
	{
		if (Local_350[unk_0x57270EE11514DC67()].f_1 == 2)
		{
			if (iLocal_360 == 0)
			{
				switch (iLocal_356)
				{
					case 0:
						unk_0xCD5125FFD341A313(false);
						if (unk_0xE3036C83E6030758())
						{
							unk_0x72ABAF57BD8416C7(Global_1661288);
							Global_1661288 = -1f;
							unk_0x260B67E197780222(false);
						}
						break;
					
					case 1:
						unk_0xCD5125FFD341A313(true);
						if (unk_0xE3036C83E6030758())
						{
							unk_0x72ABAF57BD8416C7(Global_1661288);
							Global_1661288 = -1f;
							unk_0x260B67E197780222(false);
						}
						break;
					
					case 2:
						unk_0xCD5125FFD341A313(false);
						unk_0x260B67E197780222(true);
						Global_1661288 = unk_0xF7D882B599631E46();
						unk_0x72ABAF57BD8416C7(0,5f);
						break;
				}
				iLocal_360 = 1;
			}
		}
		else if (iLocal_356 != 0)
		{
			unk_0xCD5125FFD341A313(false);
			if (unk_0xE3036C83E6030758())
			{
				unk_0x72ABAF57BD8416C7(Global_1661288);
				Global_1661288 = -1f;
				unk_0x260B67E197780222(false);
			}
			iLocal_356 = 0;
		}
	}
}

void func_174()
{
	if (unk_0x134B62B726CEC8E6(iLocal_339) == 1181327175 && (bLocal_302 || bLocal_303))
	{
		if (unk_0xBFC0798A6E3417F9(0, 226))
		{
			if (iLocal_356 == 2)
			{
				iLocal_356 = 0;
			}
			else
			{
				iLocal_356++;
			}
			iLocal_360 = 0;
		}
		if (unk_0xBFC0798A6E3417F9(0, 227))
		{
			if (iLocal_356 == 0)
			{
				iLocal_356 = 2;
			}
			else
			{
				iLocal_356 = (iLocal_356 - 1);
			}
			iLocal_360 = 0;
		}
	}
}

void func_175()
{
	switch (iLocal_295)
	{
		case 1181327175:
			return;
		
		default:
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 12) || Global_2460715)
	{
		return;
	}
	if (iLocal_343 == unk_0xD803B885F5E47A62() && iLocal_295 != -32878452)
	{
		if (func_176(iLocal_339))
		{
			if ((iLocal_310 && !iLocal_299) && (unk_0xBFC0798A6E3417F9(0, 99) || unk_0xBFC0798A6E3417F9(0, 100)))
			{
				if (!unk_0xFEBC1E4EC9E001F0())
				{
					func_48("HUNTGUN_8", -1);
					iLocal_299 = 1;
				}
			}
		}
	}
}

int func_176(int iParam0)
{
	iVar0 = unk_0x134B62B726CEC8E6(unk_0x96A5FE5834B81CE7(iParam0));
	if (unk_0x134B62B726CEC8E6(iParam0) == 1181327175)
	{
		return 1;
	}
	if (Global_2462227)
	{
		return 0;
	}
	if (iVar0 == 788747387)
	{
		return 1;
	}
	if (iVar0 == -82626025)
	{
		return 1;
	}
	if (Global_1319110 != -1 && unk_0xEAE0D21A50E6C7F4(Global_4456448.f_25, 7))
	{
		return 1;
	}
	if (Global_1319110 != -1 && !func_43(Global_1590374))
	{
		return 1;
	}
	if (func_191(iParam0))
	{
		return 1;
	}
	if (Global_1319116 != -1)
	{
		return 1;
	}
	return 0;
}

void func_177()
{
	if (unk_0x134B62B726CEC8E6(iLocal_339) == 1181327175 && (bLocal_302 || bLocal_303))
	{
		return;
	}
	if (unk_0xDF1306B443CD3D15(iLocal_339, 0))
	{
		if (!unk_0xE934758D273C899A(iLocal_339))
		{
			if (func_191(iLocal_339))
			{
				if (func_178())
				{
					if (bLocal_302)
					{
						if (Local_73.f_214 == 0)
						{
							Local_73.f_214 = 1;
						}
					}
				}
				else if (Local_73.f_214 == 1)
				{
					Local_73.f_214 = 0;
				}
			}
			else if (func_179())
			{
				Local_73.f_214 = 1;
			}
			else
			{
				unk_0x921FAC6E2F3C4186(-25f, 6f);
				Local_73.f_214 = 0;
			}
		}
		else
		{
			Local_73.f_214 = 0;
		}
	}
}

int func_178()
{
	if (bLocal_315)
	{
		if (!bLocal_316)
		{
			iVar0 = iLocal_317;
			if (iVar0 != -1)
			{
				return Global_1590535[iVar0].f_732;
			}
		}
	}
	return 0;
}

int func_179()
{
	if (bLocal_308)
	{
		if (!bLocal_309)
		{
			iVar0 = iLocal_344;
			if (iVar0 != -1)
			{
				return Global_1590535[iVar0].f_732;
			}
		}
	}
	return 0;
}

int func_180()
{
	if (func_141(unk_0xD803B885F5E47A62()) || func_140(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	return 1;
}

int func_181(var uParam0)
{
	if (uParam0->f_1 == 1)
	{
		return 1;
	}
	return 0;
}

void func_182()
{
	if (func_122(&uLocal_324))
	{
		unk_0x38C3A68D7861DCFD(0, 80, 1);
		Global_1319117 = 1;
		if (func_121(&uLocal_324, 1000, 1))
		{
			func_147(&uLocal_324);
			Global_1319117 = 0;
		}
	}
}

void func_183()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (((unk_0xC844350D5D58C99A(iVar0) && unk_0xDF1306B443CD3D15(iVar0, 0)) && func_191(iVar0)) && unk_0xAFE0D3608EDA7039(iVar0))
		{
			unk_0x78CEEE41F49F421F(iVar0, 0);
		}
	}
}

void func_184()
{
	unk_0x38C3A68D7861DCFD(0, 24, 1);
	unk_0x38C3A68D7861DCFD(0, 66, 1);
	unk_0x38C3A68D7861DCFD(0, 67, 1);
	unk_0x38C3A68D7861DCFD(0, 68, 1);
	unk_0x38C3A68D7861DCFD(0, 114, 1);
	unk_0x38C3A68D7861DCFD(0, 69, 1);
	unk_0x38C3A68D7861DCFD(0, 70, 1);
	unk_0x38C3A68D7861DCFD(0, 91, 1);
	unk_0x38C3A68D7861DCFD(0, 92, 1);
	unk_0x38C3A68D7861DCFD(0, 99, 1);
	unk_0x38C3A68D7861DCFD(0, 100, 1);
	unk_0x38C3A68D7861DCFD(0, 37, 1);
}

int func_185(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0];
	}
	return -1;
}

void func_186()
{
	if (unk_0x134B62B726CEC8E6(iLocal_339) == 1181327175 || unk_0x134B62B726CEC8E6(iLocal_339) == 177270108)
	{
		if (bLocal_302 || bLocal_303)
		{
			unk_0x38C3A68D7861DCFD(0, 24, 1);
			unk_0x38C3A68D7861DCFD(0, 66, 1);
			unk_0x38C3A68D7861DCFD(0, 67, 1);
			unk_0x38C3A68D7861DCFD(0, 114, 1);
			unk_0x38C3A68D7861DCFD(0, 69, 1);
			unk_0x38C3A68D7861DCFD(0, 91, 1);
			unk_0x38C3A68D7861DCFD(0, 92, 1);
		}
	}
}

void func_187()
{
	if (func_125())
	{
		if ((((Local_350[unk_0x57270EE11514DC67()].f_1 == 1 || Local_350[unk_0x57270EE11514DC67()].f_1 == 2) || Global_1319116 != -1) && unk_0x9F4FE516EAACCFC5(Local_73.f_32)) && unk_0x9CF8D5C7090408A2(Local_73.f_32))
		{
			if (!unk_0x991B1F0980C62628())
			{
				unk_0xF49D1BC9EF1C3EF4(unk_0xD06724447386BC29(Local_73.f_32), unk_0x17D61C69BA58F815(Local_73.f_32, 2));
			}
		}
	}
}

void func_188()
{
	iVar0 = -1;
	if (Global_1319116 != -1 && func_124(3))
	{
		if (unk_0xBFC0798A6E3417F9(0, 226))
		{
			iVar0 = func_26(1);
			Local_73.f_186 = { 0f, 0f, 0f };
		}
		else if (unk_0xBFC0798A6E3417F9(0, 227))
		{
			iVar0 = func_26(0);
			Local_73.f_186 = { 0f, 0f, 0f };
		}
	}
	if (func_25(iVar0))
	{
		func_189(iVar0);
	}
}

void func_189(int iParam0)
{
	Global_1319116 = iParam0;
	Local_73.f_35 = 0;
	func_147(&uLocal_292);
}

void func_190()
{
	iVar0 = -1;
	if (Global_1319116 != -1 && (func_141(unk_0xD803B885F5E47A62()) || func_140(unk_0xD803B885F5E47A62())))
	{
		if (unk_0xBFC0798A6E3417F9(0, 226))
		{
			iVar0 = func_22(0);
			Local_73.f_186 = { 0f, 0f, 0f };
		}
		else if (unk_0xBFC0798A6E3417F9(0, 227))
		{
			iVar0 = func_22(1);
			Local_73.f_186 = { 0f, 0f, 0f };
		}
	}
	if (func_21(iVar0))
	{
		func_189(iVar0);
	}
}

int func_191(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	switch (iVar0)
	{
		case -32878452:
		case 447548909:
		case 1181327175:
			return 1;
		
		default:
	}
	return 0;
}

void func_192(int iParam0)
{
	if (unk_0x57270EE11514DC67() != -1)
	{
		Local_350[unk_0x57270EE11514DC67()] = iParam0;
	}
}

int func_193(int iParam0)
{
	if (iParam0 != func_17())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_17())
			{
				return func_37(Global_2425662[iParam0].f_310.f_5) == 5;
			}
		}
	}
	return 0;
}

void func_194(var uParam0, bool bParam1, bool bParam2)
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

int func_195()
{
	if (((func_207(-42959138) && func_123(iLocal_341)) && iLocal_341 == unk_0x16F2683693E537C9()) && !func_123(iLocal_342))
	{
		return 1;
	}
	if (func_215())
	{
		return 1;
	}
	if (func_197(0))
	{
		return 1;
	}
	if (Global_1661981)
	{
		return 1;
	}
	if (!func_124(3))
	{
		if (Global_1312791)
		{
			return 1;
		}
	}
	if (Global_1319109)
	{
		return 1;
	}
	if (Global_1574191)
	{
		return 1;
	}
	if (Global_1574397)
	{
		return 1;
	}
	if (Global_1662006)
	{
		return 1;
	}
	if (!unk_0x8CD06866876216F2())
	{
		func_210();
	}
	if (func_196())
	{
		return 1;
	}
	if (unk_0x9AAA35F427859078(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	if (func_69())
	{
		return 1;
	}
	if (func_193(unk_0xD803B885F5E47A62()) || func_142(unk_0xD803B885F5E47A62()))
	{
		if (Global_1319110 == -1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_141(unk_0xD803B885F5E47A62()) || func_140(unk_0xD803B885F5E47A62()))
	{
		if (Global_1319116 == -1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_125())
	{
		if (Global_1319116 == -1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_196()
{
	return Global_1312877;
}

int func_197(bool bParam0)
{
	if (func_206())
	{
		if (bParam0)
		{
			if (!Global_1574405 && !func_110(unk_0xD803B885F5E47A62(), 2))
			{
				unk_0x82A772610883F395("MinigameTransitionIn", 0, 1);
				func_198(0, 0);
			}
		}
		return 1;
	}
	return 0;
}

void func_198(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_203(1, 0, 1);
	}
	else
	{
		func_199(iParam1);
	}
}

void func_199(int iParam0)
{
	func_202();
	if (iParam0 == 0)
	{
		if (unk_0x1F045D4082B1ADB2())
		{
			return;
		}
	}
	if (func_201() == 0 || unk_0x798A3F1296751F46())
	{
		func_200(1);
		unk_0x68619D16FD876EAA(0);
		unk_0x68619D16FD876EAA(0);
	}
}

void func_200(int iParam0)
{
	if (Global_1312467.f_20 != iParam0)
	{
		Global_1312467.f_20 = iParam0;
	}
}

int func_201()
{
	return Global_1312467.f_20;
}

void func_202()
{
	Global_2462226 = 1;
}

void func_203(int iParam0, bool bParam1, bool bParam2)
{
	if (func_204())
	{
		return;
	}
	if ((func_201() == 1 || unk_0x798A3F1296751F46()) || iParam0)
	{
		func_200(0);
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

int func_204()
{
	if (func_205())
	{
		return Global_2460590;
	}
	return 0;
}

int func_205()
{
	if (Global_2460583)
	{
		return Global_2460582;
	}
	return 0;
}

bool func_206()
{
	return Global_2439138.f_2;
}

bool func_207(int iParam0)
{
	return (iLocal_340 == iParam0 && iParam0 != 0);
}

void func_208()
{
	iVar0 = unk_0x16F2683693E537C9();
	iLocal_340 = 0;
	bLocal_306 = false;
	bLocal_307 = true;
	bLocal_316 = true;
	bLocal_320 = true;
	bLocal_308 = false;
	bLocal_309 = true;
	iLocal_341 = -1;
	iLocal_342 = -1;
	iLocal_343 = func_17();
	iLocal_344 = func_17();
	bLocal_301 = false;
	Global_1574315 = func_17();
	bLocal_311 = false;
	iLocal_314 = -1;
	bLocal_315 = false;
	iLocal_317 = func_17();
	iLocal_318 = -1;
	bLocal_319 = false;
	iLocal_321 = func_17();
	if (unk_0xC844350D5D58C99A(iVar0))
	{
		if (!unk_0x437347B10A200C4B(iVar0, 0))
		{
			if (unk_0xC844350D5D58C99A(iLocal_339) && unk_0xDF1306B443CD3D15(iLocal_339, 0))
			{
				iLocal_340 = unk_0x134B62B726CEC8E6(iLocal_339);
				bLocal_311 = true;
				if (!unk_0xBBA8A868118C90ED(iLocal_339, -1, 0))
				{
					iLocal_341 = unk_0xA30B8362589C124A(iLocal_339, -1, 0);
					bLocal_306 = unk_0xC844350D5D58C99A(iLocal_341);
					if (bLocal_306)
					{
						bLocal_307 = unk_0x437347B10A200C4B(iLocal_341, 0);
						if (unk_0x34BFC6F0CB887BC2(iLocal_341))
						{
							iLocal_343 = unk_0x83FACCC48B68F9D1(iLocal_341);
						}
					}
				}
				if (!unk_0xBBA8A868118C90ED(iLocal_339, 0, 0))
				{
					iLocal_342 = unk_0xA30B8362589C124A(iLocal_339, 0, 0);
					bLocal_308 = unk_0xC844350D5D58C99A(iLocal_342);
					if (bLocal_308)
					{
						bLocal_309 = unk_0x437347B10A200C4B(iLocal_342, 0);
						if (func_209(iLocal_342, iLocal_339, 0) && unk_0xC42A92762C58E1B9(iLocal_342, iLocal_339, 0))
						{
							if (unk_0x34BFC6F0CB887BC2(iLocal_342))
							{
								iLocal_344 = unk_0x83FACCC48B68F9D1(iLocal_342);
								if (iLocal_344 == unk_0xD803B885F5E47A62())
								{
									bLocal_301 = true;
									if (func_191(iLocal_339))
									{
										Global_1319115 = 0;
									}
								}
								else
								{
									bLocal_301 = false;
								}
							}
						}
					}
				}
				else
				{
					iLocal_342 = -1;
					bLocal_308 = false;
					bLocal_301 = false;
				}
				if (func_191(iLocal_339))
				{
					if (!unk_0xBBA8A868118C90ED(iLocal_339, 1, 0))
					{
						iLocal_314 = unk_0xA30B8362589C124A(iLocal_339, 1, 0);
						bLocal_315 = unk_0xC844350D5D58C99A(iLocal_314);
						if (bLocal_315)
						{
							bLocal_316 = unk_0x437347B10A200C4B(iLocal_314, 0);
							if (func_209(iLocal_314, iLocal_339, 1) && unk_0xC42A92762C58E1B9(iLocal_314, iLocal_339, 0))
							{
								if (unk_0x34BFC6F0CB887BC2(iLocal_314))
								{
									iLocal_317 = unk_0x83FACCC48B68F9D1(iLocal_314);
									if (iLocal_317 == unk_0xD803B885F5E47A62())
									{
										Global_1319115 = 1;
										bLocal_302 = true;
									}
									else
									{
										bLocal_302 = false;
									}
								}
							}
						}
					}
					else
					{
						iLocal_314 = -1;
						bLocal_315 = false;
						bLocal_302 = false;
					}
					if (!unk_0xBBA8A868118C90ED(iLocal_339, 2, 0))
					{
						iLocal_318 = unk_0xA30B8362589C124A(iLocal_339, 2, 0);
						bLocal_319 = unk_0xC844350D5D58C99A(iLocal_318);
						if (bLocal_319)
						{
							bLocal_320 = unk_0x437347B10A200C4B(iLocal_318, 0);
							if (func_209(iLocal_318, iLocal_339, 2) && unk_0xC42A92762C58E1B9(iLocal_318, iLocal_339, 0))
							{
								if (unk_0x34BFC6F0CB887BC2(iLocal_318))
								{
									iLocal_321 = unk_0x83FACCC48B68F9D1(iLocal_318);
									if (iLocal_321 == unk_0xD803B885F5E47A62())
									{
										Global_1319115 = 2;
										bLocal_303 = true;
									}
									else
									{
										bLocal_303 = false;
									}
								}
							}
						}
					}
					else
					{
						bLocal_303 = false;
						bLocal_319 = false;
						iLocal_318 = -1;
					}
				}
				if (iLocal_344 == unk_0xD803B885F5E47A62())
				{
					if (!bLocal_307)
					{
						Global_1574315 = iLocal_343;
					}
				}
				else if (!bLocal_309)
				{
					Global_1574315 = iLocal_344;
				}
			}
		}
	}
	if (Global_1319110 != -1)
	{
		bLocal_309 = false;
		iLocal_344 = unk_0xD803B885F5E47A62();
		if (iLocal_344 == unk_0xD803B885F5E47A62())
		{
			bLocal_301 = true;
		}
	}
}

int func_209(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0) && !unk_0x437347B10A200C4B(iParam1, 0))
	{
		if (unk_0x82CCEAB29E9451DD(iParam0, iParam1))
		{
			if (unk_0xA30B8362589C124A(iParam1, iParam2, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_210()
{
	func_145(0);
	func_172();
	func_214();
	if (unk_0xEAE0D21A50E6C7F4(iLocal_330, 0))
	{
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 184, unk_0xEAE0D21A50E6C7F4(iLocal_330, 1));
	}
	if (Global_1590535[unk_0xD803B885F5E47A62()].f_847)
	{
		unk_0xFB452C6B9BE826C7();
	}
	Global_2513487 = 0;
	Global_1590535[unk_0xD803B885F5E47A62()].f_847 = 0;
	func_71();
	func_146();
	Global_1319109 = 0;
	if (unk_0xC844350D5D58C99A(iLocal_339))
	{
		if (iLocal_341 == unk_0x16F2683693E537C9() && unk_0xAFE0D3608EDA7039(iLocal_339))
		{
			unk_0xE793BC58855FBB31(0, -123497569, iLocal_339, unk_0x16F2683693E537C9());
		}
	}
	Global_1319117 = 0;
	func_71();
	func_213();
	if (unk_0xE4EDC4B0E92C078B(iLocal_345))
	{
		unk_0x142CC44DB769B57E(&iLocal_345);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_346))
	{
		unk_0x142CC44DB769B57E(&iLocal_346);
	}
	if (unk_0xE4EDC4B0E92C078B(unk_0x023428EEA3027652()))
	{
		unk_0x7F010F50CE03A8AF(unk_0x023428EEA3027652(), 255);
	}
	func_135(&Local_73, iVar0, 0, iLocal_339, 1);
	Global_2547057 = 0;
	Global_1319111 = 0;
	Global_1573326 = 0;
	Global_1590535[unk_0xD803B885F5E47A62()].f_732 = 0;
	if ((Global_1319110 != -1 || func_191(iLocal_339)) || Global_1319116 != -1)
	{
		unk_0xFB452C6B9BE826C7();
		Global_1319110 = -1;
		Global_1319115 = -1;
		Global_1319116 = -1;
	}
	if (iLocal_294 == 1)
	{
		unk_0x51B096AAC60548C1(1f);
	}
	unk_0x8910D3D58E0132B8("CAR_2_HELI_FILTERING");
	func_212();
	func_147(&uLocal_292);
	func_211();
}

void func_211()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_212()
{
	if (iLocal_331 != 0)
	{
		unk_0x8910D3D58E0132B8(func_5(iLocal_331));
	}
	if (Local_73.f_211 != -1)
	{
		unk_0x55D0A2DB35045A35(Local_73.f_211);
		unk_0x43A06902454A1172(Local_73.f_211);
		Local_73.f_211 = -1;
	}
	if (iLocal_338 != 99 && iLocal_338 > 0)
	{
		unk_0x8910D3D58E0132B8("MP_HELI_CAM_FILTERING");
		iLocal_338 = 99;
	}
}

void func_213()
{
	if (bLocal_301)
	{
		unk_0xE731059548189243(unk_0x16F2683693E537C9(), 0);
	}
}

void func_214()
{
	if (iLocal_356 != 0)
	{
		unk_0xCD5125FFD341A313(false);
		if (unk_0xE3036C83E6030758())
		{
			unk_0x72ABAF57BD8416C7(Global_1661288);
			Global_1661288 = -1f;
			unk_0x260B67E197780222(false);
		}
		iLocal_356 = 0;
	}
}

int func_215()
{
	func_222(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_221())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_220())
	{
		return 1;
	}
	if (func_219(159))
	{
		if (!func_218())
		{
			return 1;
		}
	}
	if (func_219(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_216() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_216()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_216()
{
	switch (func_67())
	{
		case 0:
			return func_217();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_217()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

bool func_218()
{
	return Global_2450632.f_598;
}

int func_219(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_220()
{
	return Global_2460680;
}

bool func_221()
{
	return Global_2450632.f_593;
}

void func_222(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(1))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x218F818E64020C17(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1853120870:
					func_223(iVar0);
					break;
				
				case 589125870:
					unk_0x218F818E64020C17(1, iVar0, &vVar4, 4);
					if (vVar4.z == 653923311)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_223(int iParam0)
{
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_15(vVar0.y, 1, 1))
		{
			iVar3 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar3))
			{
				if (unk_0x405E212DDE472467(iVar3, 0))
				{
					iVar4 = unk_0x6937EA2286828455(iVar3, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar4, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_224(iVar4, &bVar5))
						{
							unk_0x920D29D81E211607(iVar4, vVar0.z);
						}
						if (bVar5)
						{
							unk_0x046C362CF15F1935(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_224(int iParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xAF6690C489CC6203(iParam0))
		{
			if (unk_0x7DDF43006A714856(iParam0))
			{
				if (!unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(iParam0)))
				{
					unk_0x73270B3C9CC833FD(iParam0, false, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x9C77D2D0559097F0(iParam0, 0))
		{
			if (unk_0xAFE0D3608EDA7039(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_225()
{
	wait(0);
}

void func_226(struct<21> Param0)
{
	func_230(func_231(Param0), Param0);
	func_228(0, -1, 0);
	unk_0x9752E7BAEABA939E(&iLocal_349, 1);
	unk_0x35B62793EAE9ADDF(&Local_350, 5);
	unk_0x256D93AFAE851A7A(0);
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xDF1306B443CD3D15(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), 0))
				{
					iLocal_295 = unk_0x134B62B726CEC8E6(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()));
					iLocal_339 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
					iLocal_296 = -1707997257;
					if (iLocal_296 != 0)
					{
						unk_0x523BCC9DC80CD82F(iLocal_296);
					}
				}
			}
		}
	}
	if (Global_1319110 != -1 || Global_1319116 != -1)
	{
		if (func_193(unk_0xD803B885F5E47A62()) || func_142(unk_0xD803B885F5E47A62()))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_25, 7))
			{
				if (iLocal_339 != Global_2537071.f_305)
				{
					iLocal_339 = Global_2537071.f_305;
				}
			}
			else if (iLocal_339 != Global_1370236)
			{
				iLocal_339 = Global_1370236;
			}
		}
		else if (func_141(unk_0xD803B885F5E47A62()))
		{
			iLocal_339 = Global_1370251;
			if (unk_0xC844350D5D58C99A(iLocal_339))
			{
			}
		}
		else if (func_140(unk_0xD803B885F5E47A62()))
		{
			iLocal_339 = Global_2537071.f_307;
			if (unk_0xC844350D5D58C99A(iLocal_339))
			{
			}
		}
		else if (func_75(unk_0xD803B885F5E47A62()) || func_124(3))
		{
			iLocal_339 = Global_1676352;
		}
		if (func_140(unk_0xD803B885F5E47A62()) || func_141(unk_0xD803B885F5E47A62()))
		{
			Local_73.f_38 = 40f;
		}
	}
	if (!func_227())
	{
		func_210();
	}
	func_192(0);
}

int func_227()
{
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x8CD06866876216F2())
		{
			return 0;
		}
		if (unk_0x67CCE3DFA3467CAD())
		{
			return 1;
		}
		if (func_221())
		{
			return 0;
		}
		if (func_219(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		wait(0);
	}
	return 0;
}

int func_228(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_211();
			}
			else
			{
				return 0;
			}
		}
		if (!func_229())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_211();
					}
					else
					{
						return 0;
					}
				}
				if (func_221())
				{
					if (!bParam2)
					{
						func_211();
					}
					else
					{
						return 0;
					}
				}
				if (func_219(157))
				{
					if (!bParam2)
					{
						func_211();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x8FE4F98FD4BE2689())
			{
				if (!bParam2)
				{
					func_211();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = unk_0xDA9EEE4F835948F9();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			if (!bParam2)
			{
				func_211();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x8FE4F98FD4BE2689())
	{
		if (!bParam2)
		{
			func_211();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_229()
{
	return Global_1312854;
}

void func_230(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_211();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

int func_231(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 130:
			return 32;
		
		case 131:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 137:
			return 32;
		
		case 135:
			return 32;
		
		case 136:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 144:
			return 32;
		
		case 145:
			return 32;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 148:
			return 2;
		
		case 153:
			return 1;
		
		case 149:
			return 2;
		
		case 150:
			return 4;
		
		case 151:
			return 2;
		
		case 152:
			return 2;
		
		case 134:
			return 1;
		
		case 154:
			return 2;
		
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
		case 160:
			return 0;
		
		case 176:
			return 1;
		
		case 161:
			return 4;
		
		case 164:
			return 4;
		
		case 165:
			return 1;
		
		case 166:
			return 1;
		
		case 172:
			return 1;
		
		case 168:
			return 2;
		
		case 173:
			return 1;
		
		case 169:
			return 1;
		
		case 167:
			return 2;
		
		case 170:
			return 8;
		
		case 171:
			return 8;
		
		case 174:
			return 1;
		
		case 162:
			return 16;
		
		case 163:
			return 32;
		
		default:
	}
	return 0;
}

