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
	vLocal_232 = { -1744,281f, 3247,029f, 31,7987f };
	vLocal_235 = { -1783,295f, 3179,115f, 31,8283f };
	vLocal_238 = { -1780,851f, 3183,688f, 31,8261f };
	vLocal_255 = { -1591,913f, 2799,37f, 15,9362f };
	fLocal_258 = 218,6321f;
	vLocal_259 = { -2303,674f, 3384,374f, 30,0307f };
	fLocal_262 = 101,3716f;
	fLocal_280 = 0f;
	vLocal_421 = { -1894,567f, 3092,903f, 31,8103f };
	vLocal_424 = { -1963,457f, 3133,104f, 31,8103f };
	vLocal_427 = { -1960,055f, 3130,99f, 31,8103f };
	iLocal_538 = 1000;
	if (unk_0x2EBF608FFE6CA406(67))
	{
		unk_0x7B35981153AECDBE("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", true);
		func_58();
	}
	iLocal_223 = unk_0x16F2683693E537C9();
	while (true)
	{
		if (unk_0x437347B10A200C4B(iLocal_223, 0))
		{
			iLocal_537 = 5;
		}
		if (Global_30775)
		{
			iLocal_537 = 5;
		}
		unk_0x536F1BE96C726C4B(-1931,548f, 3026,929f, 31,8104f, 15f, 1, 0, 0, false);
		switch (iLocal_537)
		{
			case 0:
				unk_0x0E2400AB9174FA81(2, 1862763509, -472287501);
				unk_0x0E2400AB9174FA81(2, -472287501, 1862763509);
				unk_0x0E2400AB9174FA81(1, -472287501, -472287501);
				unk_0x0E2400AB9174FA81(1, -1533126372, -472287501);
				unk_0x0E2400AB9174FA81(1, -472287501, -1533126372);
				iLocal_537 = 1;
				break;
			
			case 1:
				func_57();
				iLocal_537 = 2;
				break;
			
			case 2:
				if (func_56())
				{
					iLocal_537 = 3;
				}
				break;
			
			case 3:
				if (func_54())
				{
					iLocal_537 = 4;
				}
				break;
			
			case 4:
				func_53();
				func_52();
				func_51();
				func_50();
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
				{
					if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
					{
						if (func_49(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 3, 0, 0))
						{
							unk_0x3245169DF7F47EAF(unk_0xD803B885F5E47A62());
						}
					}
				}
				if (bLocal_541)
				{
					func_38();
					wait(100);
					func_3();
					wait(100);
					func_1();
				}
				else
				{
					iLocal_537 = 5;
				}
				break;
			
			case 5:
				func_58();
				break;
		}
		wait(iLocal_538);
	}
}

void func_1()
{
	switch (iLocal_467)
	{
		case 0:
			vLocal_430[0] = { -1f, 0f, 0f };
			vLocal_430[1] = { -2f, 0f, 0f };
			vLocal_430[2] = { 0f, -1,5f, 0f };
			vLocal_430[3] = { -1f, -1,5f, 0f };
			vLocal_430[4] = { -2f, -1,5f, 0f };
			vLocal_446[0] = { unk_0x8A5E176FF719A014(vLocal_421, 57,3018f, vLocal_430[0]) };
			vLocal_446[1] = { unk_0x8A5E176FF719A014(vLocal_421, 57,3018f, vLocal_430[1]) };
			vLocal_446[2] = { unk_0x8A5E176FF719A014(vLocal_421, 57,3018f, vLocal_430[2]) };
			vLocal_446[3] = { unk_0x8A5E176FF719A014(vLocal_421, 57,3018f, vLocal_430[3]) };
			vLocal_446[4] = { unk_0x8A5E176FF719A014(vLocal_421, 57,3018f, vLocal_430[4]) };
			unk_0x28F5E4DA506AC0CA(vLocal_421, 10f, 0, 0, 0, 0, false, 0);
			iLocal_467 = 1;
			break;
		
		case 1:
			unk_0x523BCC9DC80CD82F(1702441027);
			unk_0x523BCC9DC80CD82F(1925237458);
			unk_0x29398344B9E5B8A7("OfficerMarch01");
			iLocal_467 = 2;
			break;
		
		case 2:
			if ((unk_0xB87F6CF6E5628C67(1702441027) && unk_0xB87F6CF6E5628C67(1925237458)) && unk_0x1C2E18E9C63BEB77("OfficerMarch01"))
			{
				iLocal_467 = 3;
			}
			break;
		
		case 3:
			switch (iLocal_466)
			{
				case 0:
					unk_0x28F5E4DA506AC0CA(vLocal_421, 10f, 0, 0, 0, 0, false, 0);
					iLocal_413 = unk_0x36F2404464202779(6, 1702441027, vLocal_421, 57,3018f, 1, true);
					unk_0x6DF7BF67E86AAE86(iLocal_413, -472287501);
					unk_0x262EF6C6306BEA6C(iLocal_413, -1074790547, -1, true, true);
					unk_0x25BD67336EA4AECE(iLocal_413, 1000);
					unk_0xFADC0A217229F6B5(iLocal_413, true);
					unk_0xF44B0E19CAC31C33(iLocal_413, "OfficerMarch01", 0, 0, -1);
					iLocal_466++;
					break;
				
				case 1:
					unk_0x28F5E4DA506AC0CA(vLocal_421, 10f, 0, 0, 0, 0, false, 0);
					iVar0 = 0;
					while (iVar0 < 5)
					{
						iLocal_414[iVar0] = unk_0x36F2404464202779(6, 1702441027, vLocal_446[iVar0], 57,3018f, 1, true);
						unk_0x6DF7BF67E86AAE86(iLocal_414[iVar0], -472287501);
						unk_0x262EF6C6306BEA6C(iLocal_414[iVar0], -1074790547, -1, true, true);
						unk_0x25BD67336EA4AECE(iLocal_414[iVar0], 1000);
						unk_0xFADC0A217229F6B5(iLocal_414[iVar0], true);
						unk_0x7B97190AACA7600D(iLocal_414[iVar0], 0);
						iVar0++;
					}
					iLocal_466++;
					break;
				
				case 2:
					unk_0x28F5E4DA506AC0CA(vLocal_421, 10f, 0, 0, 0, 0, false, 0);
					iVar0 = 0;
					while (iVar0 < 5)
					{
						if (((unk_0xC844350D5D58C99A(iLocal_413) && unk_0xC844350D5D58C99A(iLocal_414[iVar0])) && !unk_0xEB6A8945D1AC98A1(iLocal_413)) && !unk_0xEB6A8945D1AC98A1(iLocal_414[iVar0]))
						{
							if (unk_0xB72E131222E66495(iLocal_413))
							{
								unk_0xA8CC11FF8D2962D4(iLocal_414[iVar0], iLocal_413, vLocal_430[iVar0], 1f, -1, 0,1f, 1);
							}
						}
						iVar0++;
					}
					iLocal_466++;
					break;
				
				case 3:
					iLocal_467 = 4;
					break;
			}
			break;
		
		case 4:
			if (!iLocal_465)
			{
				if (bLocal_49)
				{
					if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
					{
						if (!unk_0x437347B10A200C4B(iLocal_413, 0))
						{
							unk_0xA3BF0AA5A2608191(iLocal_413);
						}
						iVar0 = 0;
						while (iVar0 < 5)
						{
							if (unk_0xC844350D5D58C99A(iLocal_414[iVar0]) && !unk_0xEB6A8945D1AC98A1(iLocal_414[iVar0]))
							{
								unk_0xA3BF0AA5A2608191(iLocal_414[iVar0]);
							}
							iVar0++;
						}
						iLocal_465 = 1;
					}
					else
					{
						iLocal_465 = 0;
					}
				}
			}
			if (unk_0xC844350D5D58C99A(iLocal_413) && !unk_0xEB6A8945D1AC98A1(iLocal_413))
			{
				if (!unk_0xB72E131222E66495(iLocal_413))
				{
					if (iLocal_464)
					{
						vVar2 = { unk_0x68F4C0EC296D3901(iLocal_413, true) };
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							vVar5 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
						}
						if ((unk_0x03068588A1FCED1A(iLocal_413) && !unk_0x8E28E832BEAC3DCE(vLocal_421, 50f)) && vdist2(vVar5, vVar2) > 10000f)
						{
							unk_0x28F5E4DA506AC0CA(vLocal_421, 10f, 0, 0, 0, 0, false, 0);
							unk_0xA47B46945FF6DE74(iLocal_413, vLocal_421, 1, false, 0, 1);
							unk_0xD8F6A53F4799FAFE(iLocal_413, 57,3018f);
							unk_0xF44B0E19CAC31C33(iLocal_413, "OfficerMarch01", 0, 0, -1);
							func_2();
							iLocal_464 = 0;
							iLocal_462 = 0;
							iLocal_463 = 0;
						}
						else if (!iLocal_462)
						{
							if (!iLocal_463)
							{
								iVar0 = 0;
								while (iVar0 < 5)
								{
									if (unk_0xC844350D5D58C99A(iLocal_414[iVar0]) && !unk_0xEB6A8945D1AC98A1(iLocal_414[iVar0]))
									{
										unk_0xA3BF0AA5A2608191(iLocal_414[iVar0]);
										unk_0x93D47DFD0AE94949(iLocal_414[iVar0], -1);
									}
									iVar0++;
								}
								iLocal_463 = 1;
							}
							if (!unk_0xEB6A8945D1AC98A1(iLocal_413))
							{
								unk_0xDD353D0E9C789D0E(&iVar1);
								unk_0x80AA372E04ED318D(0, vLocal_424, 1f, 20000, 40000f, 0,5f);
								unk_0x796BDF31572BB055(0, vLocal_427, 0);
								unk_0x75ABDC5F81978924(iVar1);
								unk_0x78ADC381772E3D54(iLocal_413, iVar1);
								unk_0xF82EA857DA10E0CD(&iVar1);
								iLocal_462 = 1;
							}
						}
					}
				}
				else
				{
					iLocal_464 = 1;
				}
			}
			break;
	}
}

void func_2()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (((unk_0xC844350D5D58C99A(iLocal_413) && unk_0xC844350D5D58C99A(iLocal_414[iVar0])) && !unk_0xEB6A8945D1AC98A1(iLocal_413)) && !unk_0xEB6A8945D1AC98A1(iLocal_414[iVar0]))
		{
			unk_0xA47B46945FF6DE74(iLocal_414[iVar0], vLocal_446[iVar0], 1, false, 0, 1);
			unk_0xA8CC11FF8D2962D4(iLocal_414[iVar0], iLocal_413, vLocal_430[iVar0], 1f, -1, 0,1f, 1);
		}
		iVar0++;
	}
}

void func_3()
{
	switch (iLocal_284)
	{
		case 0:
			vLocal_241[0] = { 1f, 0f, 0f };
			vLocal_241[1] = { -1f, 0f, 0f };
			vLocal_248[0] = { unk_0x8A5E176FF719A014(vLocal_232, 140,0094f, 1f, 0f, 0f) };
			vLocal_248[1] = { unk_0x8A5E176FF719A014(vLocal_232, 140,0094f, -1f, 0f, 0f) };
			iLocal_284 = 1;
			break;
		
		case 1:
			unk_0x523BCC9DC80CD82F(1702441027);
			unk_0x523BCC9DC80CD82F(1925237458);
			unk_0x29398344B9E5B8A7("AccomMarching01");
			iLocal_284 = 2;
			break;
		
		case 2:
			if ((unk_0xB87F6CF6E5628C67(1702441027) && unk_0xB87F6CF6E5628C67(1925237458)) && unk_0x1C2E18E9C63BEB77("AccomMarching01"))
			{
				iLocal_284 = 3;
			}
			break;
		
		case 3:
			func_37();
			if (bLocal_266)
			{
				iLocal_284 = 4;
			}
			break;
		
		case 4:
			func_35();
			if (!Global_31107[0].f_6)
			{
				func_4();
			}
			break;
	}
}

void func_4()
{
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
	{
		unk_0x0E2400AB9174FA81(5, 1862763509, -472287501);
		unk_0x0E2400AB9174FA81(5, -472287501, 1862763509);
		if (!unk_0x437347B10A200C4B(iLocal_228[0], 0))
		{
			unk_0x6C3AE6E278DB3D0E(iLocal_228[0], unk_0x16F2683693E537C9(), 0, 16);
		}
		if (!unk_0x437347B10A200C4B(iLocal_228[1], 0))
		{
			unk_0x6C3AE6E278DB3D0E(iLocal_228[1], unk_0x16F2683693E537C9(), 0, 16);
		}
	}
	else
	{
		if (!unk_0x437347B10A200C4B(iLocal_228[0], 0))
		{
			if (!iLocal_269 && iLocal_270)
			{
				if (unk_0xD1960163A3042274(iLocal_228[0], 242628503) != 1)
				{
					unk_0xA3BF0AA5A2608191(iLocal_228[0]);
					unk_0xF82EA857DA10E0CD(&iLocal_282);
					unk_0xDD353D0E9C789D0E(&iLocal_282);
					unk_0x96167B03C5A77156(0, vLocal_255, 1f, 20000, 0,25f, 0, fLocal_258);
					unk_0x509B8296EBA9B408(0, "WORLD_HUMAN_GUARD_STAND_ARMY", -1, 0);
					unk_0x75ABDC5F81978924(iLocal_282);
					if (!unk_0x437347B10A200C4B(iLocal_228[0], 0))
					{
						unk_0x78ADC381772E3D54(iLocal_228[0], iLocal_282);
					}
					unk_0xF82EA857DA10E0CD(&iLocal_282);
					iLocal_269 = 1;
				}
			}
		}
		if (!unk_0x437347B10A200C4B(iLocal_228[1], 0))
		{
			if (!iLocal_271 && iLocal_272)
			{
				if (unk_0xD1960163A3042274(iLocal_228[1], 242628503) != 1)
				{
					unk_0xA3BF0AA5A2608191(iLocal_228[1]);
					unk_0xF82EA857DA10E0CD(&iLocal_283);
					unk_0xDD353D0E9C789D0E(&iLocal_283);
					unk_0x96167B03C5A77156(0, vLocal_259, 1f, 20000, 0,25f, 0, fLocal_262);
					unk_0x509B8296EBA9B408(0, "WORLD_HUMAN_GUARD_STAND_ARMY", -1, 0);
					unk_0x75ABDC5F81978924(iLocal_283);
					if (!unk_0x437347B10A200C4B(iLocal_228[1], 0))
					{
						unk_0x78ADC381772E3D54(iLocal_228[1], iLocal_283);
					}
					unk_0xF82EA857DA10E0CD(&iLocal_283);
					iLocal_271 = 1;
				}
			}
		}
	}
	if (bLocal_267)
	{
		if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1588,977f, 2793,941f, 14,98289f, -1575,664f, 2779,558f, 26,11536f, 29,75f, 0, true, 0) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
		{
			if (!unk_0x437347B10A200C4B(iLocal_228[0], 0))
			{
				iLocal_270 = 1;
				iLocal_269 = 0;
				if (func_34(&iLocal_277))
				{
					func_32(&iLocal_277);
				}
				iLocal_275 = 0;
			}
		}
	}
	switch (iLocal_275)
	{
		case 0:
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1588,977f, 2793,941f, 14,98289f, -1575,664f, 2779,558f, 26,11536f, 29,75f, 0, true, 0))
				{
					if (unk_0xC844350D5D58C99A(iLocal_228[0]))
					{
						if (func_9(&uLocal_50, "ARMYAUD", "ARMY_WRN1", 9, 0, 0, 0))
						{
							bLocal_267 = true;
							iLocal_270 = 0;
							if (!unk_0x437347B10A200C4B(iLocal_228[0], 0))
							{
								unk_0x96167B03C5A77156(iLocal_228[0], -1587,327f, 2798,517f, 15,8582f, 1f, 20000, 0,25f, 0, 216,3294f);
							}
							iLocal_275 = 1;
						}
					}
				}
			}
			break;
		
		case 1:
			if (bLocal_267)
			{
				if (func_34(&iLocal_277))
				{
					fLocal_280 = func_6(&iLocal_277);
					if (fLocal_280 > 7f)
					{
						if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1588,977f, 2793,941f, 14,98289f, -1575,664f, 2779,558f, 26,11536f, 29,75f, 0, true, 0))
						{
							if (!unk_0x437347B10A200C4B(iLocal_228[0], 0))
							{
								if (unk_0xD1960163A3042274(iLocal_228[0], 1227113341) != 1)
								{
									unk_0x9BE7E7B6B488CC55(iLocal_228[0], unk_0x16F2683693E537C9(), -1, 0);
									if (func_9(&uLocal_50, "ARMYAUD", "ARMY_WRN1a", 9, 0, 0, 0))
									{
										iLocal_275 = 2;
									}
								}
							}
						}
					}
				}
				else
				{
					func_5(&iLocal_277);
				}
			}
			break;
		
		case 2:
			if (func_34(&iLocal_277))
			{
				fLocal_280 = func_6(&iLocal_277);
			}
			if (!unk_0x437347B10A200C4B(iLocal_228[0], 0))
			{
				if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()) || (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_228[0]) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_228[0])))
				{
					if (unk_0xD1960163A3042274(iLocal_228[0], 167901368) != 1)
					{
						unk_0x2C4A1A0F54A166E8(iLocal_228[0], unk_0x16F2683693E537C9(), -1, 0);
						if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 5)
						{
							unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 4, 0);
							unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
						}
						iLocal_275 = 3;
					}
				}
			}
			break;
		
		case 3:
			break;
	}
	if (bLocal_268)
	{
		if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -2306,916f, 3390,545f, 29,17826f, -2322,245f, 3401,719f, 35,63131f, 36f, 0, true, 0) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
		{
			if (!unk_0x437347B10A200C4B(iLocal_228[1], 0))
			{
				iLocal_272 = 1;
				iLocal_271 = 0;
				if (func_34(&iLocal_277))
				{
					func_32(&iLocal_277);
				}
				iLocal_276 = 0;
			}
		}
	}
	switch (iLocal_276)
	{
		case 0:
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -2306,916f, 3390,545f, 29,17826f, -2322,245f, 3401,719f, 35,63131f, 36f, 0, true, 0))
			{
				if (unk_0xC844350D5D58C99A(iLocal_228[1]))
				{
					if (func_9(&uLocal_50, "ARMYAUD", "ARMY_WRN2", 9, 0, 0, 0))
					{
						bLocal_268 = true;
						iLocal_272 = 0;
						if (!unk_0x437347B10A200C4B(iLocal_228[1], 0))
						{
							unk_0x96167B03C5A77156(iLocal_228[0], -2307,763f, 3385,597f, 29,9984f, 1f, 20000, 0,25f, 0, 58,9552f);
						}
						iLocal_276 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (bLocal_268)
			{
				if (func_34(&iLocal_277))
				{
					fLocal_280 = func_6(&iLocal_277);
					if (fLocal_280 > 7f)
					{
						if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -2306,916f, 3390,545f, 29,17826f, -2322,245f, 3401,719f, 35,63131f, 36f, 0, true, 0))
						{
							if (!unk_0x437347B10A200C4B(iLocal_228[1], 0))
							{
								if (unk_0xD1960163A3042274(iLocal_228[1], 1227113341) != 1)
								{
									unk_0x9BE7E7B6B488CC55(iLocal_228[1], unk_0x16F2683693E537C9(), -1, 0);
									if (func_9(&uLocal_50, "ARMYAUD", "ARMY_WRN2a", 9, 0, 0, 0))
									{
										iLocal_276 = 2;
									}
								}
							}
						}
					}
				}
				else
				{
					func_5(&iLocal_277);
				}
			}
			break;
		
		case 2:
			if (func_34(&iLocal_277))
			{
				fLocal_280 = func_6(&iLocal_277);
			}
			if (!unk_0x437347B10A200C4B(iLocal_228[1], 0))
			{
				if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()) || (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_228[1]) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_228[1])))
				{
					if (unk_0xD1960163A3042274(iLocal_228[1], 167901368) != 1)
					{
						unk_0x2C4A1A0F54A166E8(iLocal_228[1], unk_0x16F2683693E537C9(), -1, 0);
						if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 5)
						{
							unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 4, 0);
							unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
						}
						iLocal_276 = 3;
					}
				}
			}
			break;
		
		case 3:
			break;
	}
}

void func_5(int iParam0)
{
	if (!func_34(iParam0))
	{
		func_32(iParam0);
	}
}

float func_6(int iParam0)
{
	if (func_34(iParam0))
	{
		if (func_8(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_7(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_7(bool bParam0)
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

bool func_8(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 2);
}

bool func_9(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_31(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_10(sParam2, iParam3, 0);
}

int func_10(char* sParam0, int iParam1, bool bParam2)
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
					func_30();
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
		if (func_29(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_28();
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
				func_20();
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
				if (func_19())
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
			if (func_18())
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
			func_17();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_16();
		func_11();
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
		func_30();
	}
	return 0;
}

void func_11()
{
	if (!func_12())
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

int func_12()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_15())
	{
		return 0;
	}
	if (func_13(unk_0xD803B885F5E47A62()))
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

bool func_13(int iParam0)
{
	return func_14(iParam0, 20);
}

bool func_14(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_15()
{
	return -1;
}

void func_16()
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

void func_17()
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

int func_18()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_19()
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

void func_20()
{
	if (func_27(14))
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
		Global_19486 = func_21();
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

var func_21()
{
	func_22();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_22()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_25(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_24(unk_0x16F2683693E537C9());
			if (func_23(iVar0) && (!func_27(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_23(Global_111638.f_2358.f_539.f_4321))
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

bool func_23(int iParam0)
{
	return iParam0 < 3;
}

int func_24(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_25(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_25(int iParam0)
{
	if (func_23(iParam0))
	{
		return func_26(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_26(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_27(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_28()
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

bool func_29(int iParam0, int iParam1)
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

void func_30()
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

void func_31(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_32(int iParam0)
{
	func_33(iParam0, 0f);
}

void func_33(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_7(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_34(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 1);
}

void func_35()
{
	if (!iLocal_273)
	{
		if (bLocal_49)
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
			{
				if (!unk_0x437347B10A200C4B(iLocal_224, 0))
				{
					unk_0xA3BF0AA5A2608191(iLocal_224);
				}
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (unk_0xC844350D5D58C99A(iLocal_225[iVar0]) && !unk_0xEB6A8945D1AC98A1(iLocal_225[iVar0]))
					{
						unk_0xA3BF0AA5A2608191(iLocal_225[iVar0]);
					}
					iVar0++;
				}
				iLocal_273 = 1;
			}
			else
			{
				iLocal_273 = 0;
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_224) && !unk_0xEB6A8945D1AC98A1(iLocal_224))
	{
		if (!unk_0xB72E131222E66495(iLocal_224))
		{
			if (iLocal_265)
			{
				vVar1 = { unk_0x68F4C0EC296D3901(iLocal_224, true) };
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					vVar4 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
				}
				if ((unk_0x03068588A1FCED1A(iLocal_224) && !unk_0x8E28E832BEAC3DCE(vLocal_232, 50f)) && vdist2(vVar4, vVar1) > 10000f)
				{
					unk_0x28F5E4DA506AC0CA(vLocal_232, 10f, 0, 0, 0, 0, false, 0);
					unk_0xA47B46945FF6DE74(iLocal_224, vLocal_232, 1, false, 0, 1);
					unk_0xD8F6A53F4799FAFE(iLocal_224, 140,0094f);
					unk_0xF44B0E19CAC31C33(iLocal_224, "AccomMarching01", 0, 0, -1);
					func_36();
					iLocal_265 = 0;
					iLocal_263 = 0;
					iLocal_264 = 0;
				}
				else if (!iLocal_263)
				{
					if (!iLocal_264)
					{
						iVar0 = 0;
						while (iVar0 < 2)
						{
							if (unk_0xC844350D5D58C99A(iLocal_225[iVar0]) && !unk_0xEB6A8945D1AC98A1(iLocal_225[iVar0]))
							{
								unk_0xA3BF0AA5A2608191(iLocal_225[iVar0]);
								unk_0x93D47DFD0AE94949(iLocal_225[iVar0], -1);
							}
							iVar0++;
						}
						iLocal_264 = 1;
					}
					if (!unk_0xEB6A8945D1AC98A1(iLocal_224))
					{
						unk_0xDD353D0E9C789D0E(&iLocal_281);
						unk_0x80AA372E04ED318D(0, vLocal_235, 1f, 20000, 40000f, 0,5f);
						unk_0x796BDF31572BB055(0, vLocal_238, 0);
						unk_0x75ABDC5F81978924(iLocal_281);
						unk_0x78ADC381772E3D54(iLocal_224, iLocal_281);
						unk_0xF82EA857DA10E0CD(&iLocal_281);
						iLocal_263 = 1;
					}
				}
			}
		}
		else
		{
			iLocal_265 = 1;
		}
	}
}

void func_36()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (((unk_0xC844350D5D58C99A(iLocal_224) && unk_0xC844350D5D58C99A(iLocal_225[iVar0])) && !unk_0xEB6A8945D1AC98A1(iLocal_224)) && !unk_0xEB6A8945D1AC98A1(iLocal_225[iVar0]))
		{
			unk_0xA47B46945FF6DE74(iLocal_225[iVar0], vLocal_248[iVar0], 1, false, 0, 1);
			unk_0xA8CC11FF8D2962D4(iLocal_225[iVar0], iLocal_224, vLocal_241[iVar0], 1f, -1, 0,1f, 1);
		}
		iVar0++;
	}
}

void func_37()
{
	switch (iLocal_274)
	{
		case 0:
			iLocal_224 = unk_0x36F2404464202779(6, 1702441027, vLocal_232, 140,0094f, 1, true);
			unk_0x262EF6C6306BEA6C(iLocal_224, -1074790547, -1, true, true);
			unk_0x25BD67336EA4AECE(iLocal_224, 1000);
			unk_0xFADC0A217229F6B5(iLocal_224, true);
			unk_0xF44B0E19CAC31C33(iLocal_224, "AccomMarching01", 0, 0, -1);
			unk_0x6DF7BF67E86AAE86(iLocal_224, -472287501);
			iLocal_274++;
			break;
		
		case 1:
			iVar0 = 0;
			while (iVar0 < 2)
			{
				iLocal_225[iVar0] = unk_0x36F2404464202779(6, 1702441027, vLocal_248[iVar0], 140,0094f, 1, true);
				unk_0x262EF6C6306BEA6C(iLocal_225[iVar0], -1074790547, -1, true, true);
				unk_0x25BD67336EA4AECE(iLocal_225[iVar0], 1000);
				unk_0x6DF7BF67E86AAE86(iLocal_225[iVar0], -472287501);
				unk_0xFADC0A217229F6B5(iLocal_225[iVar0], true);
				unk_0x7B97190AACA7600D(iLocal_225[iVar0], 0);
				iVar0++;
			}
			iLocal_274++;
			break;
		
		case 2:
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (((unk_0xC844350D5D58C99A(iLocal_224) && unk_0xC844350D5D58C99A(iLocal_225[iVar0])) && !unk_0xEB6A8945D1AC98A1(iLocal_224)) && !unk_0xEB6A8945D1AC98A1(iLocal_225[iVar0]))
				{
					if (unk_0xB72E131222E66495(iLocal_224))
					{
						unk_0xA8CC11FF8D2962D4(iLocal_225[iVar0], iLocal_224, vLocal_241[iVar0], 1f, -1, 0,1f, 1);
					}
				}
				iVar0++;
			}
			iLocal_274++;
			break;
		
		case 3:
			bLocal_266 = true;
			break;
	}
}

void func_38()
{
	if (((func_27(0) || func_27(2)) || func_27(3)) || func_27(4))
	{
		return;
	}
	switch (iLocal_349)
	{
		case 0:
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -2836,268f, 3392,663f, 22,47202f, -1793,299f, 2846,217f, 281,9545f, 250f, 0, true, 0) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1668,02f, 3121,112f, 20,71911f, -2352,193f, 3484,961f, 286,5063f, 250f, 0, true, 0))
				{
					iLocal_349 = 1;
				}
			}
			break;
		
		case 1:
			unk_0x523BCC9DC80CD82F(-1281684762);
			unk_0x523BCC9DC80CD82F(1702441027);
			unk_0x523BCC9DC80CD82F(321739290);
			iLocal_349 = 2;
			break;
		
		case 2:
			if ((unk_0xB87F6CF6E5628C67(-1281684762) && unk_0xB87F6CF6E5628C67(1702441027)) && unk_0xB87F6CF6E5628C67(321739290))
			{
				iLocal_349 = 3;
			}
			break;
		
		case 3:
			iLocal_349 = 4;
			break;
		
		case 4:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()) || unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
				{
					iLocal_286 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
					vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
					if (unk_0xC844350D5D58C99A(iLocal_286))
					{
						if (unk_0xE934758D273C899A(iLocal_286) || (vVar0.z > 50f && func_49(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 3, 350, 0)))
						{
							bLocal_341 = true;
						}
					}
				}
			}
			if (bLocal_341)
			{
				switch (iLocal_301)
				{
					case 0:
						iLocal_292 = unk_0x36F2404464202779(5, 1702441027, -2127,982f, 2824,686f, 50,437f, 34,9781f, 1, true);
						unk_0x11AD11297DC58CC7(iLocal_292, true);
						iLocal_293[0] = unk_0x36F2404464202779(5, 1702441027, -1993,875f, 3145,167f, 54,4011f, 147,2257f, 1, true);
						iLocal_293[1] = unk_0x36F2404464202779(5, 1702441027, -2176,656f, 3250,501f, 54,3807f, 140,5236f, 1, true);
						iLocal_293[2] = unk_0x36F2404464202779(5, 1702441027, -2002,671f, 2960,148f, 31,8103f, 28,6649f, 1, true);
						func_48();
						if (unk_0xC844350D5D58C99A(iLocal_292) && !unk_0x437347B10A200C4B(iLocal_292, 0))
						{
							func_47(&uLocal_50, 3, iLocal_292, "ARMY_ANNOUNCER", 0, 1);
							func_46();
						}
						iLocal_301 = 1;
						break;
					
					case 1:
						func_46();
						func_43();
						func_42(&iLocal_293);
						func_42(&iLocal_297);
						func_41();
						func_40();
						if (!iLocal_345)
						{
							if (!unk_0xC844350D5D58C99A(iLocal_285))
							{
								vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
								fVar6 = unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9());
								vVar3 = { unk_0x8A5E176FF719A014(vVar0, fVar6, 0f, -150f, 0f) };
								fVar7 = unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9());
								fVar7 = fVar7;
								if (!func_39(vVar3))
								{
									if (!unk_0x8E28E832BEAC3DCE(vVar3, 10f))
									{
										iLocal_285 = unk_0x122AAB0B1D6F55AD(-1281684762, vVar3, unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()), true, true, false);
										fVar7 = unk_0xD9522BA9E27E1349(iLocal_285);
										unk_0xC023D1C4BF532815(iLocal_285, 0f, 0f, fVar6, 2, 1);
										unk_0xB58CA658A628ED02(iLocal_285, 3);
										unk_0x120A395B0ECB8EA5(iLocal_285, false);
										iLocal_291 = unk_0x852A19533F896693(iLocal_285, 5, 1702441027, -1, 1, true);
										unk_0x11AD11297DC58CC7(iLocal_291, true);
										if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
										{
											unk_0x2E7E359BC7AA3D39(iLocal_291, unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true));
											unk_0x40B4CC38578A6E32(iLocal_291, -123497569);
										}
										unk_0x0C4243AF9A434F34(iLocal_291, iLocal_285, iLocal_286, unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 6, 70f, -1f, 30f, 500, 50, 1);
										iLocal_345 = 1;
									}
								}
							}
						}
						break;
					}
			}
			break;
	}
}

int func_39(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_40()
{
	if (!bLocal_344)
	{
		if (unk_0xC844350D5D58C99A(iLocal_285) && unk_0x437347B10A200C4B(iLocal_285, 0))
		{
			unk_0x046C362CF15F1935(&iLocal_285);
			bLocal_344 = true;
		}
		if ((((unk_0xC844350D5D58C99A(iLocal_285) && !unk_0x437347B10A200C4B(iLocal_285, 0)) && !unk_0x437347B10A200C4B(iLocal_291, 0)) && unk_0xC844350D5D58C99A(iLocal_286)) && !unk_0x437347B10A200C4B(iLocal_286, 0))
		{
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0 || !func_49(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 3, 350, 0))
				{
					unk_0xA3BF0AA5A2608191(iLocal_291);
					unk_0x0C4243AF9A434F34(iLocal_291, iLocal_285, iLocal_286, unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 8, 70f, -1f, 30f, 500, 50, 1);
					unk_0xFADC0A217229F6B5(iLocal_291, true);
					unk_0x046C362CF15F1935(&iLocal_285);
					bLocal_344 = true;
				}
			}
		}
	}
	if (bLocal_344)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()) || unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
			{
				iLocal_286 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
				if (unk_0xC844350D5D58C99A(iLocal_286) && !unk_0x437347B10A200C4B(iLocal_286, 0))
				{
					if (unk_0xE934758D273C899A(iLocal_286) && func_49(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 3, 350, 0))
					{
						iLocal_345 = 0;
					}
				}
			}
		}
	}
}

void func_41()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xC844350D5D58C99A(iLocal_293[iVar0]) && !unk_0x437347B10A200C4B(iLocal_293[iVar0], 0))
		{
			if (unk_0x168558745A6AC21E(iLocal_293[iVar0]))
			{
				iLocal_343 = 1;
			}
		}
		iVar0++;
	}
}

void func_42(int iParam0)
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar1 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x437347B10A200C4B(iVar1, 0) || (!unk_0x437347B10A200C4B(iVar1, 0) && !unk_0xE934758D273C899A(iVar1)))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (unk_0xC844350D5D58C99A((*iParam0)[iVar0]) && !unk_0x437347B10A200C4B((*iParam0)[iVar0], 0))
						{
							unk_0x262EF6C6306BEA6C((*iParam0)[iVar0], -1074790547, -1, false, true);
							unk_0x5745EA6329A91E29((*iParam0)[iVar0], -1074790547, true);
						}
						iVar0++;
					}
				}
			}
		}
	}
}

void func_43()
{
	switch (iLocal_303)
	{
		case 0:
			func_45();
			if (!unk_0x8E28E832BEAC3DCE(-2144,552f, 3244,999f, 31,8106f, 10f))
			{
				iVar4 = 0;
				while (iVar4 < 3)
				{
					iLocal_287[iVar4] = unk_0x122AAB0B1D6F55AD(321739290, vLocal_317[iVar4], fLocal_337[iVar4], true, true, false);
					iLocal_297[iVar4] = unk_0x852A19533F896693(iLocal_287[iVar4], 5, 1702441027, -1, 1, true);
					func_44(&iLocal_297, iVar4);
					iVar4++;
				}
				iLocal_303 = 1;
			}
			break;
		
		case 1:
			iVar4 = 0;
			while (iVar4 < 3)
			{
				if (unk_0xC844350D5D58C99A(iLocal_287[iVar4]) && !unk_0x437347B10A200C4B(iLocal_287[iVar4], 0))
				{
					unk_0xDD353D0E9C789D0E(&(uVar0[iVar4]));
					unk_0xE9362E4D600DD12A(0, iLocal_287[iVar4], vLocal_327[iVar4], 25f, 0, 321739290, 786469, 5f, -1f);
					unk_0x75CDA8644CD3B5F5(0, 0, 0);
					unk_0x2C4A1A0F54A166E8(0, unk_0x16F2683693E537C9(), -1, -957453492);
					unk_0x75ABDC5F81978924(uVar0[iVar4]);
					if (!unk_0x437347B10A200C4B(iLocal_297[iVar4], 0))
					{
						unk_0x78ADC381772E3D54(iLocal_297[iVar4], uVar0[iVar4]);
					}
					unk_0xF82EA857DA10E0CD(&(uVar0[iVar4]));
				}
				iVar4++;
			}
			iLocal_303 = 2;
			break;
		
		case 2:
			iVar4 = 0;
			while (iVar4 < 3)
			{
				if (unk_0xC844350D5D58C99A(iLocal_297[iVar4]) && !unk_0x437347B10A200C4B(iLocal_297[iVar4], 0))
				{
					if (unk_0xD1960163A3042274(iLocal_297[iVar4], -1817882002) != 1)
					{
						unk_0xAFF39FB306F8E232(iLocal_297[iVar4], 1, false);
					}
				}
				iVar4++;
			}
			iLocal_303 = 3;
			break;
		
		case 3:
			iVar4 = 0;
			while (iVar4 < 3)
			{
				if (unk_0xC844350D5D58C99A(iLocal_297[iVar4]) && !unk_0x437347B10A200C4B(iLocal_297[iVar4], 0))
				{
					if (unk_0x168558745A6AC21E(iLocal_297[iVar4]))
					{
						iLocal_343 = 1;
					}
				}
				iVar4++;
			}
			break;
	}
}

void func_44(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A((*iParam0)[iParam1]) && !unk_0x437347B10A200C4B((*iParam0)[iParam1], 0))
	{
		unk_0x11AD11297DC58CC7((*iParam0)[iParam1], true);
		unk_0x262EF6C6306BEA6C((*iParam0)[iParam1], 1752584910, 20, true, true);
		unk_0x298903DD96203C2C((*iParam0)[iParam1], 100);
		unk_0x6DF7BF67E86AAE86((*iParam0)[iParam1], -472287501);
		unk_0xFADC0A217229F6B5((*iParam0)[iParam1], true);
	}
}

void func_45()
{
	vLocal_317[0] = { -2158f, 3254,864f, 31,8106f };
	vLocal_317[1] = { -2138,572f, 3253,477f, 31,8106f };
	vLocal_317[2] = { -2133,471f, 3243,626f, 31,8106f };
	vLocal_327[0] = { -2226,64f, 3172,212f, 31,8103f };
	vLocal_327[1] = { -2156,083f, 3197,557f, 31,8106f };
	vLocal_327[2] = { -1899,385f, 3054,546f, 31,8102f };
	fLocal_337[0] = 192,2879f;
	fLocal_337[1] = 149,8821f;
	fLocal_337[2] = 158,0152f;
}

void func_46()
{
	iLocal_302 = (unk_0x09AC81E49EA267F7(0, 65535) % 4);
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		}
		if ((!unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9()) || (!unk_0x437347B10A200C4B(iVar0, 0) && !unk_0xE934758D273C899A(iVar0))) || iLocal_343)
		{
			return;
		}
	}
	if (!iLocal_342)
	{
		if (iLocal_302 == 0)
		{
			if (func_9(&uLocal_50, "ARMYAUD", "ARMY_ANN1", 9, 0, 0, 0))
			{
				if (!func_34(&iLocal_346))
				{
					func_5(&iLocal_346);
				}
				iLocal_342 = 1;
			}
		}
		else if (iLocal_302 == 1)
		{
			if (func_9(&uLocal_50, "ARMYAUD", "ARMY_ANN2", 9, 0, 0, 0))
			{
				if (!func_34(&iLocal_346))
				{
					func_5(&iLocal_346);
				}
				iLocal_342 = 1;
			}
		}
		else if (iLocal_302 == 2)
		{
			if (func_9(&uLocal_50, "ARMYAUD", "ARMY_ANN3", 9, 0, 0, 0))
			{
				if (!func_34(&iLocal_346))
				{
					func_5(&iLocal_346);
				}
				iLocal_342 = 1;
			}
		}
		else if (iLocal_302 == 3)
		{
			if (func_9(&uLocal_50, "ARMYAUD", "ARMY_ANN4", 9, 0, 0, 0))
			{
				if (!func_34(&iLocal_346))
				{
					func_5(&iLocal_346);
				}
				iLocal_342 = 1;
			}
		}
	}
	if (iLocal_342)
	{
		if (func_34(&iLocal_346))
		{
			if (func_6(&iLocal_346) > 25f)
			{
				iLocal_342 = 0;
				func_32(&iLocal_346);
			}
		}
	}
}

void func_47(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_48()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xC844350D5D58C99A(iLocal_293[iVar0]) && !unk_0x437347B10A200C4B(iLocal_293[iVar0], 0))
		{
			unk_0x11AD11297DC58CC7(iLocal_293[iVar0], true);
			unk_0x262EF6C6306BEA6C(iLocal_293[iVar0], 1752584910, 20, true, true);
			unk_0x298903DD96203C2C(iLocal_293[iVar0], 100);
			unk_0x6C3AE6E278DB3D0E(iLocal_293[iVar0], unk_0x16F2683693E537C9(), 0, 16);
			unk_0x6DF7BF67E86AAE86(iLocal_293[iVar0], -472287501);
			unk_0xFADC0A217229F6B5(iLocal_293[iVar0], true);
		}
		iVar0++;
	}
}

int func_49(vector3 vParam0, int iParam3, int iParam4, bool bParam5)
{
	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			vVar0[0] = { -1332,211f, 100,4608f, 40,38437f };
			vVar46[0] = { -1094,238f, 148,4274f, 73f };
			fVar92[0] = 171,25f;
			vVar0[1] = { -999,7344f, -110,2231f, 25,25706f };
			vVar46[1] = { -1149,494f, 109,2558f, 73f };
			fVar92[1] = 132f;
			vVar0[2] = { -1035,113f, -84,95885f, 28,2746f };
			vVar46[2] = { -1261,103f, 50,08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			vVar0[0] = { -804,3439f, -3346,5f, 10f };
			vVar46[0] = { -1816,954f, -2768,893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			vVar0[1] = { -1911,488f, -2934,197f, 10f };
			vVar46[1] = { -968,6236f, -3477,748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			vVar0[2] = { -844,9433f, -2802,785f, 10f };
			vVar46[2] = { -1011,081f, -3086,904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185,5f;
			vVar0[3] = { -1021,086f, -2952,277f, 10f };
			vVar46[3] = { -1599,008f, -2616,271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			vVar0[4] = { -1027,136f, -2436,457f, 10f };
			vVar46[4] = { -1392,61f, -2226,763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193,5f;
			vVar0[5] = { -1497,549f, -2408,712f, 10f };
			vVar46[5] = { -1136,917f, -2617,955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234,5f;
			vVar0[6] = { -982,7924f, -2831,709f, 12,93313f };
			vVar46[6] = { -966,4677f, -2803,458f, 16,68313f };
			fVar92[6] = 16f;
			vVar0[7] = { -1110,083f, -3496,806f, 12f };
			vVar46[7] = { -1955,298f, -3010,431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			vVar0[8] = { -1886,899f, -3193,024f, 12f };
			vVar46[8] = { -1836,143f, -3105,268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			vVar0[9] = { -1134,337f, -3535,648f, 12f };
			vVar46[9] = { -1259,649f, -3463,486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30,75f;
			vVar0[10] = { -969,1279f, -3463,899f, 12f };
			vVar46[10] = { -896,3734f, -3505,715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			vVar0[11] = { -1369,491f, -2173,579f, 10f };
			vVar46[11] = { -1685,626f, -2720,364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29,25f;
			vVar0[12] = { -1010,926f, -3550,943f, 10f };
			vVar46[12] = { -1110,198f, -3493,617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			vVar0[0] = { -1773,944f, 3287,334f, 30f };
			vVar46[0] = { -2029,776f, 2845,083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 255f;
			vVar0[1] = { -2725,889f, 3291,099f, 30f };
			vVar46[1] = { -2009,182f, 2879,835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			vVar0[2] = { -2442,026f, 3326,699f, 30f };
			vVar46[2] = { -2033,928f, 3089,049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 205f;
			vVar0[3] = { -1917,165f, 3374,209f, 30f };
			vVar46[3] = { -2016,791f, 3195,058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86,25f;
			vVar0[4] = { -2192,753f, 3373,278f, 30f };
			vVar46[4] = { -2191,544f, 3150,417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 150,5f;
			vVar0[5] = { -2077,663f, 3344,514f, 30f };
			vVar46[5] = { -2191,544f, 3150,417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140,5f;
			vVar0[6] = { -2861,755f, 3352,661f, 30f };
			vVar46[6] = { -2715,871f, 3269,916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			vVar0[7] = { -2005,574f, 3364,533f, 30f };
			vVar46[7] = { -1977,569f, 3330,888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			vVar0[8] = { -1682,235f, 3004,285f, 30f };
			vVar46[8] = { -1942,747f, 2947,441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248,75f;
			vVar0[9] = { -2393,295f, 2936,406f, 31,6801f };
			vVar46[9] = { -2453,037f, 3006,863f, 52,31003f };
			fVar92[9] = 128f;
			vVar0[10] = { -2347,185f, 3023,83f, 31,56573f };
			vVar46[10] = { -2517,33f, 2989,063f, 49,95644f };
			fVar92[10] = 140f;
			vVar0[11] = { -2259,922f, 3358,04f, 29,99972f };
			vVar46[11] = { -2299,772f, 3385,79f, 38,06014f };
			fVar92[11] = 16f;
			vVar0[12] = { -2476,309f, 3363,914f, 31,67933f };
			vVar46[12] = { -2431,981f, 3287,669f, 39,97826f };
			fVar92[12] = 214,25f;
			vVar0[13] = { -2103,081f, 2797,783f, 29,37864f };
			vVar46[13] = { -2096,821f, 2874,423f, 57,80989f };
			fVar92[13] = 65,75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			vVar46[9].f_2 = (vVar46[9].f_2 + IntToFloat(iVar111));
			vVar46[10].f_2 = (vVar46[10].f_2 + IntToFloat(iVar111));
			vVar46[11].f_2 = (vVar46[11].f_2 + IntToFloat(iVar111));
			vVar46[12].f_2 = (vVar46[12].f_2 + IntToFloat(iVar111));
			vVar46[13].f_2 = (vVar46[13].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			vVar0[0] = { 1541,607f, 2527,555f, 40f };
			vVar46[0] = { 1815,575f, 2535,06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			vVar0[1] = { 1788,879f, 2445,727f, 40f };
			vVar46[1] = { 1716,96f, 2502,957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88,5f;
			vVar0[2] = { 1601,157f, 2436,244f, 40f };
			vVar46[2] = { 1650,078f, 2515,923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133,25f;
			vVar0[3] = { 1706,331f, 2407,597f, 40f };
			vVar46[3] = { 1698,555f, 2460,208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104,5f;
			vVar0[4] = { 1712,452f, 2756,218f, 40f };
			vVar46[4] = { 1718,848f, 2589,162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121,75f;
			vVar0[5] = { 1830,228f, 2661,24f, 40f };
			vVar46[5] = { 1774,812f, 2679,419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84,5f;
			vVar0[6] = { 1559,05f, 2632,22f, 40f };
			vVar46[6] = { 1657,208f, 2595,484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103,75f;
			vVar0[7] = { 1612,021f, 2716,869f, 40f };
			vVar46[7] = { 1657,165f, 2669,721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104,25f;
			vVar0[8] = { 1809,872f, 2729,827f, 40f };
			vVar46[8] = { 1789,855f, 2705,037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			vVar0[9] = { 1818,789f, 2605,948f, 40f };
			vVar46[9] = { 1783,114f, 2606,783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51,25f;
			iVar108 = 10;
			break;
		
		case 5:
			vVar0[0] = { 3411,002f, 3663,185f, 20f };
			vVar46[0] = { 3615,583f, 3626,194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45,75f;
			vVar0[1] = { 3426,66f, 3733,078f, 20f };
			vVar46[1] = { 3643,801f, 3694,362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			vVar0[2] = { 3446,036f, 3795,688f, 20f };
			vVar46[2] = { 3650,914f, 3766,152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81,5f;
			iVar108 = 3;
			break;
		
		case 6:
			vVar0[0] = { 526,053f, -3391,497f, -10f };
			vVar46[0] = { 523,2289f, -3118,678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			vVar0[1] = { 459,4397f, -3199,99f, 4,819676f };
			vVar46[1] = { 593,8928f, -3199,998f, 30,06926f };
			fVar92[1] = 170f;
			vVar0[2] = { 552,8467f, -3111,054f, 4,819394f };
			vVar46[2] = { 585,3137f, -3111,844f, 17,56923f };
			fVar92[2] = 12,5f;
			vVar0[3] = { 598,4666f, -3140,147f, 4,819257f };
			vVar46[3] = { 597,4973f, -3117,063f, 17,31926f };
			fVar92[3] = 9,75f;
			iVar108 = 4;
			break;
		
		case 7:
			vVar0[0] = { -1108,55f, -570,8798f, 20f };
			vVar46[0] = { -1187,811f, -477,5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			vVar0[1] = { -1201,378f, -485,9673f, 20f };
			vVar46[1] = { -1215,796f, -464,8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			vVar0[2] = { -985,6311f, -525,4233f, 20f };
			vVar46[2] = { -1013,393f, -475,2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			vVar0[3] = { -1055,849f, -477,8226f, 20f };
			vVar46[3] = { -1073,333f, -498,717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			vVar0[0] = { 461,5684f, -984,572f, 29,43951f };
			vVar46[0] = { 471,17f, -984,4292f, 40,14212f };
			fVar92[0] = 7,75f;
			vVar0[1] = { 457,3404f, -984,756f, 34,43951f };
			vVar46[1] = { 457,2084f, -993,7189f, 29,38958f };
			fVar92[1] = 14,75f;
			vVar0[2] = { 477,6227f, -986,6f, 40,00819f };
			vVar46[2] = { 424,8687f, -986,3279f, 48,71241f };
			fVar92[2] = 31,5f;
			vVar0[3] = { 474,3889f, -974,4613f, 39,55761f };
			vVar46[3] = { 474,0358f, -1021,972f, 49,10033f };
			fVar92[3] = 30,5f;
			vVar0[4] = { 442,1768f, -974,1888f, 29,68951f };
			vVar46[4] = { 442,1855f, -979,8635f, 33,43951f };
			fVar92[4] = 6,75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (unk_0x0399732A9EBC368E(vParam0, vVar0[iVar109], vVar46[iVar109], fVar92[iVar109], iVar110, true))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

void func_50()
{
	if (iLocal_539 > 0)
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
		{
			unk_0x7B35981153AECDBE("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", true);
			iLocal_539 = 0;
		}
	}
	switch (iLocal_539)
	{
		case 0:
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
			{
				if (unk_0x93776B156FD8804A("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS"))
				{
					iLocal_539 = 1;
				}
			}
			break;
		
		case 1:
			unk_0x6021F0389B7BAA70("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", false);
			iLocal_539 = 2;
			break;
		
		case 2:
			break;
	}
}

void func_51()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if ((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1599,593f, 2818,15f, -17,645f, -1612,423f, 2806,997f, 17,645f, 51f, 1, false, 0) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -2301,089f, 3385,031f, -31,086f, -2305,302f, 3379,441f, 31,086f, 16f, 1, false, 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -2287,138f, 3385,616f, 31,124f, -2292,554f, 3378,428f, 31,124f, 19,8f, 1, false, 0))
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 5)
			{
				unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 4, 0);
				unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
			}
		}
	}
}

void func_52()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -2080,115f, 3292,193f, -11,667f, -2112,049f, 3224,331f, 11,667f, 115f, 0, false, 0))
		{
			bLocal_541 = false;
		}
		else
		{
			bLocal_541 = true;
		}
	}
}

void func_53()
{
	if (unk_0xF06268E966D7C1A2(unk_0xA30EC016B12C03E4(), 0))
	{
		if (!iLocal_540)
		{
			unk_0x0E2400AB9174FA81(5, 1862763509, -472287501);
			unk_0x0E2400AB9174FA81(5, -472287501, 1862763509);
			bLocal_49 = true;
			iLocal_540 = 1;
		}
	}
	else if (!unk_0xF06268E966D7C1A2(unk_0xA30EC016B12C03E4(), 0) && bLocal_49)
	{
		unk_0x0E2400AB9174FA81(2, 1862763509, -472287501);
		unk_0x0E2400AB9174FA81(2, -472287501, 1862763509);
		iLocal_540 = 0;
	}
}

int func_54()
{
	unk_0x523BCC9DC80CD82F(1702441027);
	while (!unk_0xB87F6CF6E5628C67(1702441027))
	{
		wait(0);
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (!unk_0x8E28E832BEAC3DCE(vLocal_255, 10f) || func_55(unk_0x16F2683693E537C9(), vLocal_255, 1) > 100f)
		{
			if (!unk_0xC844350D5D58C99A(iLocal_228[0]))
			{
				iLocal_228[0] = unk_0x36F2404464202779(6, 1702441027, vLocal_255, fLocal_258, 1, true);
				unk_0x536F1BE96C726C4B(vLocal_255, 10f, 1, 0, 0, false);
				unk_0x7D6CA5F52B3748BF(vLocal_255 - Vector(10f, 10f, 10f), vLocal_255 + Vector(10f, 10f, 10f), 0, 1, 1, 1);
				unk_0x262EF6C6306BEA6C(iLocal_228[0], -1074790547, -1, true, true);
				unk_0x25BD67336EA4AECE(iLocal_228[0], 1000);
				unk_0x6DF7BF67E86AAE86(iLocal_228[0], -472287501);
				unk_0x11AD11297DC58CC7(iLocal_228[0], true);
				func_47(&uLocal_50, 4, iLocal_228[0], "ARMY_Guard01", 0, 1);
				unk_0x0B7C52F2BC1DC8EB(iLocal_228[0], "WORLD_HUMAN_GUARD_STAND_ARMY", vLocal_255, fLocal_258, -1, 0, 1);
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0x437347B10A200C4B(iLocal_228[0], 0))
				{
					unk_0x0C8C0C840C2D1AD2(iLocal_228[0], unk_0x16F2683693E537C9(), -1, 1024, 4);
				}
				return 1;
			}
		}
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (!unk_0x8E28E832BEAC3DCE(vLocal_259, 10f) || func_55(unk_0x16F2683693E537C9(), vLocal_259, 1) > 100f)
		{
			if (!unk_0xC844350D5D58C99A(iLocal_228[1]))
			{
				iLocal_228[1] = unk_0x36F2404464202779(6, 1702441027, vLocal_259, fLocal_262, 1, true);
				unk_0x536F1BE96C726C4B(vLocal_259, 10f, 1, 0, 0, false);
				unk_0x7D6CA5F52B3748BF(vLocal_259 - Vector(10f, 10f, 10f), vLocal_259 + Vector(10f, 10f, 10f), 0, 1, 1, 1);
				unk_0x262EF6C6306BEA6C(iLocal_228[1], -1074790547, -1, true, true);
				unk_0x25BD67336EA4AECE(iLocal_228[1], 1000);
				unk_0x6DF7BF67E86AAE86(iLocal_228[1], -472287501);
				unk_0x11AD11297DC58CC7(iLocal_228[1], true);
				func_47(&uLocal_50, 5, iLocal_228[1], "ARMY_Guard02", 0, 1);
				unk_0x0B7C52F2BC1DC8EB(iLocal_228[1], "WORLD_HUMAN_GUARD_STAND_ARMY", vLocal_259, fLocal_262, -1, 0, 1);
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0x437347B10A200C4B(iLocal_228[1], 0))
				{
					unk_0x0C8C0C840C2D1AD2(iLocal_228[1], unk_0x16F2683693E537C9(), -1, 1024, 4);
				}
				return 1;
			}
		}
	}
	return 0;
}

float func_55(int iParam0, vector3 vParam1, bool bParam4)
{
	if (unk_0x437347B10A200C4B(iParam0, 0))
	{
		return -1f;
	}
	return unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, true), vParam1, bParam4);
}

int func_56()
{
	return 1;
}

void func_57()
{
}

void func_58()
{
	func_68();
	func_67();
	func_66();
	func_65();
	func_62();
	func_60();
	func_59();
	unk_0x0E2400AB9174FA81(255, -472287501, 1862763509);
	unk_0x0E2400AB9174FA81(255, 1862763509, -472287501);
	unk_0x7B35981153AECDBE("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", false);
	unk_0x10FAF14A60A0DBE1();
}

void func_59()
{
	if (unk_0xC844350D5D58C99A(iLocal_285))
	{
		if ((!unk_0x437347B10A200C4B(iLocal_291, 0) && !unk_0x437347B10A200C4B(iLocal_285, 0)) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			unk_0xA3BF0AA5A2608191(iLocal_291);
			unk_0x0C4243AF9A434F34(iLocal_291, iLocal_285, 0, unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 8, 70f, -1f, 30f, 500, 50, 1);
			unk_0xFADC0A217229F6B5(iLocal_291, true);
			unk_0x6DAD7906B73F064D(&iLocal_291);
		}
		if (!unk_0x437347B10A200C4B(iLocal_285, 0))
		{
			unk_0x046C362CF15F1935(&iLocal_285);
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_292))
	{
		if (unk_0x03068588A1FCED1A(iLocal_292))
		{
			unk_0xEBA53F35D0085654(&iLocal_292);
		}
		else
		{
			unk_0x6DAD7906B73F064D(&iLocal_292);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xC844350D5D58C99A(iLocal_293[iVar0]))
		{
			if (unk_0x03068588A1FCED1A(iLocal_293[iVar0]))
			{
				unk_0xEBA53F35D0085654(&(iLocal_293[iVar0]));
			}
			else
			{
				unk_0x6DAD7906B73F064D(&(iLocal_293[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xC844350D5D58C99A(iLocal_297[iVar0]))
		{
			if (unk_0x03068588A1FCED1A(iLocal_297[iVar0]))
			{
				unk_0xEBA53F35D0085654(&(iLocal_297[iVar0]));
			}
			else
			{
				unk_0x6DAD7906B73F064D(&(iLocal_297[iVar0]));
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_287[iVar0]))
		{
			if (unk_0x03068588A1FCED1A(iLocal_287[iVar0]))
			{
				unk_0xA954465BA6FDEFE2(&(iLocal_287[iVar0]));
			}
			else
			{
				unk_0x046C362CF15F1935(&(iLocal_287[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_60()
{
	if (unk_0xC844350D5D58C99A(iLocal_469))
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_481))
		{
			unk_0x142CC44DB769B57E(&iLocal_481);
		}
		if (unk_0x03068588A1FCED1A(iLocal_469))
		{
			unk_0xA954465BA6FDEFE2(&iLocal_469);
		}
		else
		{
			func_61(&iLocal_469, &uLocal_475);
			unk_0x046C362CF15F1935(&iLocal_469);
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_474))
	{
		if (unk_0x03068588A1FCED1A(iLocal_474))
		{
			unk_0xA954465BA6FDEFE2(&iLocal_474);
		}
		else
		{
			func_61(&iLocal_474, &uLocal_476);
			unk_0x046C362CF15F1935(&iLocal_474);
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_470))
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_482))
		{
			unk_0x142CC44DB769B57E(&iLocal_482);
		}
		if (unk_0x03068588A1FCED1A(iLocal_470))
		{
			unk_0xA954465BA6FDEFE2(&iLocal_470);
		}
		else
		{
			func_61(&iLocal_470, &uLocal_477);
			unk_0x046C362CF15F1935(&iLocal_470);
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_471))
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_483))
		{
			unk_0x142CC44DB769B57E(&iLocal_483);
		}
		if (unk_0x03068588A1FCED1A(iLocal_471))
		{
			unk_0xA954465BA6FDEFE2(&iLocal_471);
		}
		else
		{
			func_61(&iLocal_471, &uLocal_478);
			unk_0x046C362CF15F1935(&iLocal_471);
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_472))
	{
		if (unk_0x03068588A1FCED1A(iLocal_472))
		{
			unk_0xA954465BA6FDEFE2(&iLocal_472);
		}
		else
		{
			func_61(&iLocal_472, &uLocal_479);
			unk_0x046C362CF15F1935(&iLocal_472);
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_473))
	{
		if (unk_0x03068588A1FCED1A(iLocal_473))
		{
			unk_0xA954465BA6FDEFE2(&iLocal_473);
		}
		else
		{
			func_61(&iLocal_473, &uLocal_480);
			unk_0x046C362CF15F1935(&iLocal_473);
		}
	}
	unk_0xDB8844D4B7C60440(101, "CargoTakeOff");
	unk_0xDB8844D4B7C60440(101, "LazerTakeOff");
	unk_0xDB8844D4B7C60440(102, "LazerTakeOff");
	unk_0xDB8844D4B7C60440(101, "ArmyBaseNew");
	unk_0xDB8844D4B7C60440(103, "ArmyBaseNew");
	unk_0xDB8844D4B7C60440(104, "ArmyBaseNew");
}

void func_61(int iParam0, var uParam1)
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

void func_62()
{
	if (unk_0xC844350D5D58C99A(iLocal_413))
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_420))
		{
			unk_0x142CC44DB769B57E(&iLocal_420);
		}
		if (unk_0x03068588A1FCED1A(iLocal_413) || (func_63(0) && unk_0x757EF87A33649210()))
		{
			unk_0xEBA53F35D0085654(&iLocal_413);
		}
		else
		{
			unk_0x6DAD7906B73F064D(&iLocal_413);
		}
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xC844350D5D58C99A(iLocal_414[iVar0]))
		{
			if (unk_0x03068588A1FCED1A(iLocal_414[iVar0]) || (func_63(0) && unk_0x757EF87A33649210()))
			{
				unk_0xEBA53F35D0085654(&(iLocal_414[iVar0]));
			}
			else
			{
				unk_0x6DAD7906B73F064D(&(iLocal_414[iVar0]));
			}
		}
		iVar0++;
	}
	unk_0x2F3540C2227116A3("OfficerMarch01");
}

int func_63(bool bParam0)
{
	if (bParam0)
	{
		if (func_64())
		{
			return 1;
		}
	}
	if (func_27(14))
	{
		return 1;
	}
	return 0;
}

int func_64()
{
	if (Global_110583)
	{
		return 1;
	}
	if (!func_27(14) && unk_0x8A22C4C08282BF26(-892862129) > 0)
	{
		return 1;
	}
	return 0;
}

void func_65()
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xC844350D5D58C99A(uLocal_385[iVar0]))
		{
			if (unk_0xE4EDC4B0E92C078B(uLocal_403[iVar0]))
			{
				unk_0x142CC44DB769B57E(&(uLocal_403[iVar0]));
			}
			unk_0x046C362CF15F1935(&(uLocal_385[iVar0]));
		}
		iVar0++;
	}
}

void func_66()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xC844350D5D58C99A(uLocal_351[iVar0]))
		{
			if (unk_0xE4EDC4B0E92C078B(uLocal_356[iVar0]))
			{
				unk_0x142CC44DB769B57E(&(uLocal_356[iVar0]));
			}
			unk_0x046C362CF15F1935(&(uLocal_351[iVar0]));
			unk_0x6DAD7906B73F064D(&(uLocal_361[iVar0]));
		}
		iVar0++;
	}
	unk_0xDB8844D4B7C60440(101, "SingleRoute");
	unk_0xDB8844D4B7C60440(102, "SingleRoute");
	unk_0xDB8844D4B7C60440(103, "SingleRoute");
	unk_0xDB8844D4B7C60440(104, "SingleRoute");
}

void func_67()
{
}

void func_68()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xC844350D5D58C99A(iLocal_225[iVar0]))
		{
			if (unk_0x03068588A1FCED1A(iLocal_225[iVar0]) || (func_63(0) && unk_0x757EF87A33649210()))
			{
				unk_0xEBA53F35D0085654(&(iLocal_225[iVar0]));
			}
			else
			{
				unk_0x6DAD7906B73F064D(&(iLocal_225[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xC844350D5D58C99A(iLocal_228[iVar0]))
		{
			if (unk_0x03068588A1FCED1A(iLocal_228[iVar0]) || (func_63(0) && unk_0x757EF87A33649210()))
			{
				unk_0xEBA53F35D0085654(&(iLocal_228[iVar0]));
			}
			else if (!unk_0x437347B10A200C4B(iLocal_228[iVar0], 0))
			{
				unk_0x509B8296EBA9B408(iLocal_228[iVar0], "WORLD_HUMAN_GUARD_STAND_ARMY", -1, 0);
				unk_0x11AD11297DC58CC7(iLocal_228[iVar0], false);
				unk_0xFADC0A217229F6B5(iLocal_228[iVar0], true);
				unk_0x6DAD7906B73F064D(&(iLocal_228[iVar0]));
			}
		}
		iVar0++;
	}
	if (unk_0xC844350D5D58C99A(iLocal_224))
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_231))
		{
			unk_0x142CC44DB769B57E(&iLocal_231);
		}
		if (unk_0x03068588A1FCED1A(iLocal_224) || (func_63(0) && unk_0x757EF87A33649210()))
		{
			unk_0xEBA53F35D0085654(&iLocal_224);
		}
		else
		{
			unk_0x6DAD7906B73F064D(&iLocal_224);
		}
	}
	unk_0x2F3540C2227116A3("AccomMarching01");
}

