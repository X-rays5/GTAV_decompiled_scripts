void __EntryFunction__()
{
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0,001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0,0375f;
	fLocal_27 = 0,17f;
	iLocal_29 = 3;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_65 = ((0,05f + 0,275f) - 0,01f);
	iLocal_233 = -1;
	fLocal_290 = -1213f;
	fLocal_291 = 118,179f;
	fLocal_292 = 1f;
	vLocal_294 = { 0,57f, 0,03f, 0f };
	fLocal_297 = 50f;
	iLocal_313 = 1;
	iLocal_319 = -1;
	iLocal_320 = -1;
	iLocal_321 = 200;
	Var0 = 1;
	Var0.f_1.f_15 = 4;
	Var0.f_1.f_152 = 2;
	Var0.f_1.f_167 = 2;
	Var171 = 9;
	Var171.f_30 = 4;
	Var171.f_43 = 4;
	uVar228 = 14;
	uVar253 = 11;
	iVar227 = 2;
	uLocal_302 = uLocal_302;
	if (unk_0x2EBF608FFE6CA406(67))
	{
		func_342(&Var171, &Var0);
	}
	func_341(8);
	while (true)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
		}
		switch (iVar227)
		{
			case 2:
				if (bLocal_0)
				{
				}
				func_338(&Var171);
				unk_0x3F423BF5B8125A50(func_337());
				unk_0x4942FBD1EF896E39("move_m@golfer@");
				func_333(&uVar253);
				iVar227 = 3;
				break;
			
			case 3:
				if (((unk_0xB4AE0788C1587752(func_337()) && unk_0xAE317D00A5A55DF6("GOLF_I", false, -1)) && unk_0xDF3FDDA1EADEDD07("move_m@golfer@")) && func_332(&uVar253))
				{
					func_329(&uVar228);
					iVar227 = 4;
				}
				break;
			
			case 4:
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && func_328(unk_0xD8A54335F18763BA()))
				{
					if (((!unk_0x8E28E832BEAC3DCE(func_327(&Var171, (2 + iVar265 * 2)), 10f) && !unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), func_327(&Var171, (2 + iVar265 * 2)), 10f, 10f, 10f, false, true, 0)) || ((func_326() || unk_0x991B1F0980C62628()) || unk_0x757EF87A33649210())) || func_325(4))
					{
						if (iVar266 == 0)
						{
							func_321(&Var171, &(Var0[iVar265]), (2 + iVar265 * 2), unk_0x09AC81E49EA267F7(1, 3));
						}
						if (iVar266 < func_320(&(Var0[iVar265])))
						{
							func_314(&Var171, &(Var0[iVar265]), iVar266);
						}
						iVar266++;
						if (iVar266 > func_320(&(Var0[iVar265])))
						{
							iVar266 = 0;
							func_312(&Var171, &(Var0[iVar265]), func_313(&(Var0[iVar265])), func_320(&(Var0[iVar265])));
							iVar265++;
							if (iVar265 >= Var0)
							{
								iVar227 = 5;
								iVar265 = 0;
							}
						}
					}
				}
				break;
			
			case 5:
				func_311(&uVar228, 8);
				func_310(8);
				iVar227 = 6;
				break;
			
			case 6:
				func_311(&uVar228, 8);
				if (func_325(4))
				{
					func_303(&(Var0[0]), &Var171);
					func_341(4);
				}
				func_1(&uVar228, &Var171, &(Var0[iVar265]), &Var0, iVar265);
				iVar265++;
				if (iVar265 >= Var0)
				{
					iVar265 = 0;
				}
				if (func_325(1))
				{
					func_341(1);
				}
				if (func_325(2))
				{
					func_341(2);
				}
				break;
			
			case 9:
				func_342(&Var171, &Var0);
				break;
			
			default:
				break;
		}
		wait(0);
	}
}

void func_1(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (func_302(uParam2))
	{
		iVar0 = 0;
		while (iVar0 < func_320(uParam2))
		{
			func_301(uParam2, iVar0);
			iVar0++;
		}
		return;
	}
	func_300(&(uParam2->f_15[uParam2->f_165]), unk_0x16F2683693E537C9(), uParam2, uParam2->f_165, uParam1);
	uParam2->f_165++;
	if (uParam2->f_165 >= func_320(uParam2))
	{
		uParam2->f_165 = 0;
	}
	bVar1 = unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0;
	Var2.f_2 = 1097859072;
	Var2.f_3 = 1500;
	Var2.f_4 = 45;
	Var2.f_5 = 1103626240;
	Var2.f_6 = 5;
	Var2.f_6 = 25;
	iVar0 = 0;
	while (iVar0 < func_320(uParam2))
	{
		if (unk_0xC844350D5D58C99A(func_299(&(uParam2->f_15[iVar0]))))
		{
			if (unk_0x437347B10A200C4B(func_299(&(uParam2->f_15[iVar0])), 0) && !func_298(uParam2, iVar0, 16777216))
			{
				func_296(uParam2);
				return;
			}
			if (bVar1 && func_295(func_299(&(uParam2->f_15[iVar0])), 1) < 100f)
			{
				func_296(uParam2);
				return;
			}
			if (func_286(func_299(&(uParam2->f_15[iVar0])), func_294(uParam2, 0), &Var2, &uVar9, 1, 1, 0, 1, 1))
			{
				func_296(uParam2);
				return;
			}
		}
		iVar0++;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0) == func_294(uParam2, 0))
		{
			unk_0x73270B3C9CC833FD(func_294(uParam2, 0), false, 0);
			unk_0x046C362CF15F1935(&(uParam2->f_152[0]));
			func_285(uParam2, 0, 0);
			if (unk_0xC844350D5D58C99A(func_284(uParam2, 0)) && !unk_0x437347B10A200C4B(func_284(uParam2, 0), 0))
			{
				if (unk_0xD1960163A3042274(func_284(uParam2, 0), -1794415470) != 1)
				{
					unk_0xA3BF0AA5A2608191(func_284(uParam2, 0));
					unk_0xF96A174EE26D7588(func_284(uParam2, 0), unk_0x16F2683693E537C9(), -1);
				}
			}
			if (unk_0xC844350D5D58C99A(func_284(uParam2, 1)) && !unk_0x437347B10A200C4B(func_284(uParam2, 1), 0))
			{
				if (unk_0xD1960163A3042274(func_284(uParam2, 1), -1794415470) != 1)
				{
					unk_0xA3BF0AA5A2608191(func_284(uParam2, 1));
					unk_0xF96A174EE26D7588(func_284(uParam2, 1), unk_0x16F2683693E537C9(), -1);
				}
			}
		}
		if (unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0) == func_294(uParam2, 1))
		{
			unk_0x73270B3C9CC833FD(func_294(uParam2, 1), false, 0);
			unk_0x046C362CF15F1935(&(uParam2->f_152[1]));
			func_285(uParam2, 0, 1);
		}
	}
	if (Global_110666 == func_313(uParam2))
	{
		func_283(uParam2, uParam1, iParam3);
	}
	if (iParam4 == 0 && func_325(16))
	{
		iVar10 = func_282(Global_110666);
		if (func_313(uParam2) != iVar10 && !func_281(iParam3, iVar10))
		{
			func_280(uParam2, uParam1, iVar10);
		}
	}
	if (func_279(uParam0, 1) || func_325(1))
	{
		iVar0 = 0;
		while (iVar0 < func_320(uParam2))
		{
			if (unk_0xC844350D5D58C99A(func_299(&(uParam2->f_15[iVar0]))))
			{
				if (!unk_0x437347B10A200C4B(func_299(&(uParam2->f_15[iVar0])), 0))
				{
					unk_0xA47B46945FF6DE74(func_299(&(uParam2->f_15[iVar0])), func_278(&(uParam2->f_15[iVar0])), 1, false, 0, 1);
				}
			}
			iVar0++;
		}
		func_277(uParam2, 2);
	}
	if (func_279(uParam0, 2) || func_325(2))
	{
		iVar11 = func_282(Global_110666);
		func_280(uParam2, uParam1, iVar11);
	}
	switch (func_276(uParam2))
	{
		case 5:
			if (!func_275(uParam2, 1048576))
			{
				if ((((unk_0xC844350D5D58C99A(func_274(uParam2, uParam2->f_165)) && !unk_0x437347B10A200C4B(func_274(uParam2, uParam2->f_165), 0)) && unk_0xC844350D5D58C99A(func_284(uParam2, uParam2->f_165))) && !func_298(uParam2, uParam2->f_165, 16777216)) && func_273(func_274(uParam2, uParam2->f_165), func_284(uParam2, uParam2->f_165), 1) < 25f)
				{
					if (unk_0xD1960163A3042274(func_284(uParam2, uParam2->f_165), -1794415470) != 1 && !func_298(uParam2, uParam2->f_165, 67108864))
					{
						unk_0xA3BF0AA5A2608191(func_284(uParam2, uParam2->f_165));
						if (!unk_0xC42A92762C58E1B9(func_284(uParam2, uParam2->f_165), func_274(uParam2, uParam2->f_165), 0))
						{
							if (uParam2->f_165 == func_271(uParam2, func_272(uParam2, uParam2->f_165)))
							{
								if (!unk_0xC844350D5D58C99A(func_284(uParam2, uParam2->f_165 + 1)) || !unk_0x81A5359F25512A04(func_284(uParam2, uParam2->f_165 + 1)))
								{
									unk_0x5B1D360B9C6F0A09(func_284(uParam2, uParam2->f_165), func_274(uParam2, uParam2->f_165), -1, -1, 1f, 1, 0);
								}
							}
							else
							{
								unk_0x5B1D360B9C6F0A09(func_284(uParam2, uParam2->f_165), func_274(uParam2, uParam2->f_165), -1, 0, 1f, 1, 0);
							}
						}
					}
				}
				else
				{
					func_277(uParam2, 2);
					iVar0 = 0;
					while (iVar0 < func_320(uParam2))
					{
						if (iVar0 != func_270(uParam2))
						{
							if (func_269(uParam1, uParam2, iVar0))
							{
								vVar13 = { func_268(uParam1, func_313(uParam2), iVar0) };
							}
							else if (!func_267(uParam2, -1))
							{
								vVar13 = { func_266(uParam1, func_313(uParam2), iVar0) };
							}
							else
							{
								vVar13 = { func_265(uParam2, iVar0) };
							}
							if (unk_0xC844350D5D58C99A(func_284(uParam2, iVar0)) && !unk_0x437347B10A200C4B(func_284(uParam2, iVar0), 0))
							{
								unk_0xA3BF0AA5A2608191(func_284(uParam2, iVar0));
								unk_0x96167B03C5A77156(func_284(uParam2, iVar0), vVar13, 1f, -1, 1048576000, 0, 1193033728);
							}
						}
						iVar0++;
					}
					if (func_264(uParam1, uParam2))
					{
						func_263(uParam2, 0);
					}
					else
					{
						func_263(uParam2, 1);
					}
				}
				if (func_262(uParam2, 0))
				{
					iVar0 = 0;
					while (iVar0 < func_320(uParam2))
					{
						func_261(&(uParam2->f_15[iVar0]), 33554432);
						iVar0++;
					}
					func_277(uParam2, 6);
					func_260(&(uParam2->f_159));
				}
			}
			else
			{
				func_277(uParam2, 2);
				if (func_264(uParam1, uParam2))
				{
					func_263(uParam2, 0);
				}
				else
				{
					func_263(uParam2, 1);
				}
			}
			break;
		
		case 6:
			if (func_257(&(uParam2->f_159), 2f))
			{
				func_254(uParam2, func_270(uParam2), uParam1, 1, 0);
			}
			if ((func_253(uParam2) == 0 && func_320(uParam2) > 2) && !func_298(uParam2, 2, 67108864))
			{
				if (func_320(uParam2) == 3)
				{
					func_254(uParam2, 2, uParam1, 0, 0);
				}
				else
				{
					func_254(uParam2, func_252(uParam2, 2, 3), uParam1, 0, 0);
				}
			}
			else if (func_320(uParam2) > 2 && !func_298(uParam2, 0, 67108864))
			{
				func_254(uParam2, func_252(uParam2, 0, 1), uParam1, 0, 0);
			}
			break;
		
		case 2:
			if (!func_275(uParam2, 8388608))
			{
				func_67(uParam0, uParam1, uParam2);
			}
			else if (func_66(uParam1, uParam2, iParam3, 0))
			{
				func_65(uParam2, 8388608);
			}
			if (!unk_0xEB6A8945D1AC98A1(func_64(uParam2)))
			{
				unk_0x9DD8618CA5BF832D(func_64(uParam2), 129, true);
			}
			if (func_63(uParam2, -1, 0))
			{
				func_60(uParam1, uParam2);
				uParam2->f_157 = 0;
				while (uParam2->f_157 < func_320(uParam2))
				{
					func_263(uParam2, 0);
					func_59(uParam2, 0f, 0f, 0f, 5);
					func_58(uParam2, 0f, 0f, -1f);
					uParam2->f_157++;
				}
				iVar12 = func_313(uParam2);
				if (!func_66(uParam1, uParam2, iParam3, 1))
				{
					func_56(uParam2, 0, 8388608);
				}
				func_52(uParam0, uParam1, uParam2, 8, 0);
				func_51(uParam2, 0);
				if (func_313(uParam2) != iVar12)
				{
					func_44(uParam1, uParam2);
					func_277(uParam2, 3);
				}
				if (func_275(uParam2, 1048576))
				{
					vVar13 = { func_266(uParam1, func_313(uParam2), func_270(uParam2)) };
					func_42(uParam2, func_270(uParam2), vVar13, uParam1, 0, 1);
					unk_0x796BDF31572BB055(func_64(uParam2), func_41(uParam1, func_313(uParam2)), 0);
				}
			}
			else if (func_39(&(uParam2->f_15[func_270(uParam2)])))
			{
				func_38(&(uParam2->f_15[func_270(uParam2)]));
				func_51(uParam2, func_26(uParam2, uParam1));
				if (!func_267(uParam2, -1))
				{
					func_263(uParam2, 0);
				}
				else if (func_18(uParam2, uParam1))
				{
					func_277(uParam2, 5);
					func_263(uParam2, 1);
				}
				else
				{
					func_263(uParam2, 1);
				}
			}
			break;
		
		case 3:
			if (func_275(uParam2, 524288))
			{
				func_2(uParam2, uParam1, 1);
			}
			func_277(uParam2, 5);
			break;
		
		case 4:
			break;
	}
}

void func_2(var uParam0, var uParam1, bool bParam2)
{
	iVar1 = func_313(uParam0);
	iVar0 = 0;
	while (iVar0 < func_320(uParam0))
	{
		func_17(&(uParam0->f_15[iVar0]), 0, 0);
		func_9(uParam0, iVar0, 0f, 0f, 0f, 5, 1);
		if (unk_0xC844350D5D58C99A(func_299(&(uParam0->f_15[iVar0]))))
		{
			if (!unk_0x437347B10A200C4B(func_299(&(uParam0->f_15[iVar0])), 0))
			{
				unk_0xA47B46945FF6DE74(func_299(&(uParam0->f_15[iVar0])), func_266(uParam1, iVar1, iVar0), 1, false, 0, 1);
			}
		}
		iVar0++;
	}
	if (bParam2)
	{
		vVar2 = { 0f, 0f, 0f };
		vVar5 = { 5f, 5f, 0f };
		fVar8 = 0f;
		if (func_3(func_327(uParam1, iVar1), func_41(uParam1, iVar1), &vVar2, &fVar8, 0f, 0f, 0f, 0f, 0f, 0f, 0))
		{
			iVar9 = 0;
			while (iVar9 < 2)
			{
				if (unk_0xC844350D5D58C99A(func_294(uParam0, iVar9)))
				{
					if (!unk_0x437347B10A200C4B(func_294(uParam0, iVar9), 0) && !unk_0x8E28E832BEAC3DCE(vVar2 + FtoV(to_float(iVar9)) * vVar5, 5f))
					{
						unk_0xA47B46945FF6DE74(func_294(uParam0, iVar9), vVar2 + FtoV(to_float(iVar9)) * vVar5, 1, false, 0, 1);
						unk_0xD8F6A53F4799FAFE(func_294(uParam0, iVar9), fVar8);
					}
				}
				iVar9++;
			}
		}
	}
}

int func_3(vector3 vParam0, struct<2> Param3, var uParam5, var uParam6, float fParam7, vector3 vParam8, struct<2> Param11, float fParam13, bool bParam14)
{
	iVar1 = 1;
	vVar3 = { 0f, 0f, 0f };
	while (!bVar0 && iVar1 < 10)
	{
		if (!unk_0x4A13F7D4B1E239A0(vParam0, iVar1, uParam6, fParam7, &uVar2, 1, 1077936128, 0))
		{
			return 0;
		}
		else if ((vdist2(vParam0, *uParam6) > 100f && !unk_0x558ADED8B93EA0F6(*uParam6, 5f)) && !func_7(*uParam6))
		{
			vVar3 = { func_6(Vector(0f, uParam6->f_1, *uParam6) - Vector(0f, Param11.f_1, Param11)) };
			if (!bParam14 || func_5(vParam8, vVar3) < 0,75f)
			{
				bVar0 = true;
			}
		}
		iVar1++;
	}
	if (unk_0x755FF954DAE327E1((unk_0xE7D606C557C86100((Param3 - vParam0.x), (Param3.f_1 - vParam0.y)) - *fParam7)) > 90f)
	{
		*fParam7 = (*fParam7 + 180f);
	}
	func_4(uParam6, 5f, 0,5f);
	return 1;
}

int func_4(var uParam0, float fParam1, float fParam2)
{
	if (unk_0xE82754C349C7B581(*uParam0 + Vector(fParam2, 0f, 0f), &fVar0, 0, 0))
	{
		if (unk_0x755FF954DAE327E1((uParam0->f_2 - fVar0)) < fParam1)
		{
			uParam0->f_2 = fVar0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

float func_5(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return ((Param0 * Param3) + (Param0.f_1 * Param3.f_1));
}

Vector3 func_6(vector3 vParam0)
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

int func_7(vector3 vParam0)
{
	vVar0 = { func_6(Vector(51,66f, 61,69f, -1405,69f) - Vector(51,76f, 61,61f, -1403,44f)) };
	fVar3 = func_8(vVar0, -1405,69f, 61,69f, 51,66f);
	if (func_8(vParam0, vVar0) > fVar3)
	{
		return 1;
	}
	vVar0 = { func_6(Vector(0f, -85,86f, -1167,9f) - Vector(0f, -89,1f, -1162,01f)) };
	fVar3 = func_8(vVar0, Vector(0f, -89,1f, -1162,01f) - Vector(9,92f, 9,92f, 9,92f) * vVar0);
	if (func_8(vParam0, vVar0) > fVar3)
	{
		vVar0 = { func_6(Vector(0f, -89,76f, -1193,7f) - Vector(0f, -87,41f, -1192,45f)) };
		fVar3 = func_8(vVar0, Vector(39,97f, -89,76f, -1193,7f) - Vector(2,778f, 2,778f, 2,778f) * vVar0);
		if (func_8(vParam0, vVar0) > fVar3)
		{
			return 1;
		}
		if (unk_0x0399732A9EBC368E(vParam0, -1227,909f, -68,76888f, 43,06714f, -1260,599f, -50,60131f, 44,63058f, 2,74f, 0, false))
		{
			return 1;
		}
	}
	else
	{
		vVar0 = { func_6(Vector(0f, -89,76f, -1193,7f) - Vector(0f, -87,41f, -1192,45f)) };
		fVar3 = func_8(vVar0, Vector(39,97f, -89,76f, -1193,7f) - Vector(1,03f, 1,03f, 1,03f) * vVar0);
		if (func_8(vParam0, vVar0) > fVar3)
		{
			return 1;
		}
	}
	vVar0 = { func_6(Vector(0f, -113,24f, -970,31f) - Vector(0f, -115,19f, -973,91f)) };
	fVar3 = func_8(vVar0, -970,31f, -113,24f, 38,28f);
	if (func_8(vParam0, vVar0) > fVar3)
	{
		vVar0 = { func_6(Vector(0f, -106,46f, -948,52f) - Vector(0f, -102,2f, -951,06f)) };
		fVar3 = func_8(vVar0, -948,52f, -106,46f, 42,39f);
		if (func_8(vParam0, vVar0) > fVar3)
		{
			return 1;
		}
	}
	else
	{
		vVar0 = { func_6(Vector(0f, -127,38f, -1028,62f) - Vector(0f, -129,55f, -1034,37f)) };
		fVar3 = func_8(vVar0, -1028,62f, -127,38f, 39,51f);
		if (func_8(vParam0, vVar0) > fVar3)
		{
			vVar0 = { func_6(Vector(0f, -125,95f, -994,29f) - Vector(0f, -94,44f, -1001,81f)) };
			fVar3 = func_8(vVar0, -994,29f, -125,95f, 40,12f);
			if (func_8(vParam0, vVar0) > fVar3)
			{
				return 1;
			}
		}
		else
		{
			vVar0 = { func_6(Vector(0f, -140,83f, -1037,99f) - Vector(0f, -131,81f, -1043,54f)) };
			fVar3 = func_8(vVar0, -1037,99f, -140,83f, 42,99f);
			if (func_8(vParam0, vVar0) > fVar3)
			{
				return 1;
			}
		}
	}
	vVar0 = { func_6(Vector(0f, 96,74f, -1047,59f) - Vector(0f, 87,45f, -1041,82f)) };
	fVar3 = func_8(vVar0, -1047,59f, 96,74f, 52,25f);
	if (func_8(vParam0, vVar0) > fVar3)
	{
		vVar0 = { func_6(Vector(0f, 180,44f, -1094,08f) - Vector(0f, 167,17f, -1086,17f)) };
		fVar3 = func_8(vVar0, -1094,08f, 180,44f, 61,49f);
		if (func_8(vParam0, vVar0) > fVar3)
		{
			vVar0 = { func_6(Vector(0f, 196,78f, -1092f) - Vector(0f, 179,38f, -1163,07f)) };
			fVar3 = func_8(vVar0, Vector(60,09f, 196,78f, -1092f) - Vector(3,75f, 3,75f, 3,75f) * vVar0);
			if (func_8(vParam0, vVar0) > fVar3)
			{
				return 1;
			}
		}
		else
		{
			vVar0 = { func_6(Vector(0f, 145,22f, -1069,28f) - Vector(0f, 98,02f, -1152,37f)) };
			fVar3 = func_8(vVar0, -1069,28f, 145,22f, 61,6f);
			if (func_8(vParam0, vVar0) > fVar3)
			{
				return 1;
			}
		}
	}
	else
	{
		vVar0 = { func_6(Vector(0f, -19,35f, -967,03f) - Vector(0f, -63,01f, -1035,28f)) };
		fVar3 = func_8(vVar0, -967,03f, -19,35f, 48,28f);
		if (func_8(vParam0, vVar0) > fVar3)
		{
			return 1;
		}
	}
	vVar0 = { func_6(Vector(0f, 186,79f, -1274,15f) - Vector(0f, 185,87f, -1255,38f)) };
	fVar3 = func_8(vVar0, -1274,15f, 186,79f, 61,97f);
	if (func_8(vParam0, vVar0) > fVar3)
	{
		vVar0 = { func_6(Vector(0f, 192,648f, -1326,063f) - Vector(0f, 183,78f, -1325,44f)) };
		fVar3 = func_8(vVar0, -1326,063f, 192,648f, 61,76f);
		if (func_8(vParam0, vVar0) > fVar3)
		{
			return 1;
		}
	}
	else
	{
		vVar0 = { func_6(Vector(0f, 226,63f, -1159,35f) - Vector(0f, 203,93f, -1152,92f)) };
		fVar3 = func_8(vVar0, -1159,35f, 226,63f, 70f);
		if (func_8(vParam0, vVar0) > fVar3)
		{
			return 1;
		}
	}
	return 0;
}

float func_8(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_9(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_15)
	{
		return;
	}
	func_10(&(uParam0->f_15[iParam1]), vParam2, iParam5, bParam6);
}

void func_10(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	if (bParam5)
	{
	}
	if (!func_16(vParam1))
	{
		if (iParam4 == 3)
		{
			if (func_13(vParam1))
			{
				iParam4 = 2;
			}
		}
		if (func_11(vParam1))
		{
			iParam4 = 9;
		}
	}
	uParam0->f_23 = iParam4;
}

bool func_11(vector3 vParam0)
{
	return func_12(vParam0, -1215,93f, -15,72f, 45,21f, 2,5f, 1);
}

bool func_12(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	return unk_0x0EB28750412C3A5A(vParam0, vParam3, bParam7) <= fParam6;
}

int func_13(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (vdist2(func_15(iVar0), vParam0) < (func_14(iVar0) * func_14(iVar0)))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

float func_14(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 11,26f;
			break;
		
		case 1:
			return 10,38f;
			break;
		
		case 2:
			return 13,4f;
			break;
		
		case 3:
			return 8,94f;
			break;
		
		case 4:
			return 12,8f;
			break;
		
		case 5:
			return 9,42f;
			break;
		
		case 6:
			return 9,42f;
			break;
		
		case 7:
			return 15f;
			break;
		
		case 8:
			return 11,69f;
			break;
	}
	return 0f;
}

Vector3 func_15(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1370,93f, 173,98f, 57,01f;
			break;
		
		case 1:
			return -1107,26f, 157,15f, 62,04f;
			break;
		
		case 2:
			return -1312,97f, 125,64f, 56,39f;
			break;
		
		case 3:
			return -1218,56f, 107,48f, 57,04f;
			break;
		
		case 4:
			return -1098,15f, 69,5f, 53,09f;
			break;
		
		case 5:
			return -987,7f, -105,42f, 39,59f;
			break;
		
		case 6:
			return -1117,793f, -104,069f, 40,8406f;
			break;
		
		case 7:
			return -1272,63f, 38,4f, 48,75f;
			break;
		
		case 8:
			return -1138,381f, 0,60467f, 47,98225f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_16(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_17(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
	}
	*uParam0 = iParam1;
}

int func_18(var uParam0, var uParam1)
{
	iVar0 = 150;
	iVar1 = 1600;
	if (!unk_0xC844350D5D58C99A(func_64(uParam0)))
	{
		return 0;
	}
	if (vdist2(unk_0x68F4C0EC296D3901(func_64(uParam0), true), func_41(uParam1, func_313(uParam0))) < IntToFloat(iVar1))
	{
		if (unk_0xC844350D5D58C99A(func_25(uParam0)) && !unk_0x437347B10A200C4B(func_294(uParam0, func_253(uParam0)), 0))
		{
			if (vdist2(unk_0x68F4C0EC296D3901(func_25(uParam0), true), func_41(uParam1, func_313(uParam0))) > IntToFloat(iVar1))
			{
				return 1;
			}
			func_20(uParam0, uParam1, func_253(uParam0), 1, 38276, 7449);
		}
		return 0;
	}
	if (vdist2(unk_0x68F4C0EC296D3901(func_64(uParam0), true), func_19(uParam0)) < IntToFloat(iVar0))
	{
		return 0;
	}
	return 1;
}

Vector3 func_19(var uParam0)
{
	return func_278(&(uParam0->f_15[uParam0->f_157]));
}

void func_20(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = 0;
	while (iVar0 < func_320(uParam0))
	{
		if (((iParam2 == 0 && (iVar0 == 0 || iVar0 == 1)) || (iParam2 == 1 && (iVar0 == 2 || iVar0 == 3))) && func_23(uParam0, iVar0) == 4)
		{
			unk_0xDD353D0E9C789D0E(&(uParam0->f_15[iVar0].f_21));
			unk_0x75CDA8644CD3B5F5(0, 0, 0);
			Stack.Push(0);
			Stack.Push(uParam1);
			Stack.Push(func_313(uParam0));
			Stack.Push(iVar0);
			Call_Loc(iParam4);
			unk_0x96167B03C5A77156(StackVal, StackVal, StackVal, StackVal, 1f, -1, 1048576000, 0, 1193033728);
			Stack.Push(0);
			Stack.Push(uParam1);
			Stack.Push(func_313(uParam0));
			Call_Loc(iParam5);
			unk_0x796BDF31572BB055(StackVal, StackVal, StackVal, StackVal, 0);
			unk_0x75ABDC5F81978924(uParam0->f_15[iVar0].f_21);
			unk_0x78ADC381772E3D54(func_284(uParam0, iVar0), uParam0->f_15[iVar0].f_21);
			unk_0xF82EA857DA10E0CD(&(uParam0->f_15[iVar0].f_21));
			if (iParam3 && func_21(uParam0, iVar0) != 10)
			{
				func_56(uParam0, iVar0, 67108864);
			}
		}
		iVar0++;
	}
}

int func_21(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_15)
	{
		return -1;
	}
	return func_22(&(uParam0->f_15[iParam1]));
}

int func_22(var uParam0)
{
	return *uParam0;
}

int func_23(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_15)
	{
		return 0;
	}
	return func_24(&(uParam0->f_15[iParam1]));
}

int func_24(var uParam0)
{
	return uParam0->f_1;
}

int func_25(var uParam0)
{
	return func_294(uParam0, func_272(uParam0, func_270(uParam0)));
}

int func_26(var uParam0, var uParam1)
{
	fVar0 = 0f;
	iVar1 = -1;
	if (((func_36(uParam0) < (0,7f * 0,7f) && func_35(uParam0) == 3) && func_34(uParam0) != 10) && func_29(uParam0, uParam1))
	{
		return func_270(uParam0);
	}
	iVar2 = 0;
	while (iVar2 < func_320(uParam0))
	{
		if (func_23(uParam0, iVar2) != 0)
		{
			if (func_21(uParam0, iVar2) != 10 && !func_298(uParam0, iVar2, 16777216))
			{
				vVar4 = { func_265(uParam0, iVar2) };
				vVar7 = { func_41(uParam1, func_313(uParam0)) };
				vVar4.z = 0f;
				vVar7.z = 0f;
				fVar3 = vdist(vVar4, vVar7);
				fVar3 = (fVar3 * func_27(func_28(&(uParam0->f_15[iVar2])) == 3, 1f, 99999f));
				fVar3 = (fVar3 * func_27(func_28(&(uParam0->f_15[iVar2])) == 5, 100f, 1f));
				fVar3 = (fVar3 * IntToFloat(uParam0->f_15[iVar2].f_32 + 1));
				if (fVar3 > fVar0)
				{
					iVar1 = iVar2;
					fVar0 = fVar3;
				}
			}
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		iVar1 = 0;
	}
	if (bLocal_0)
	{
	}
	return iVar1;
}

float func_27(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_28(var uParam0)
{
	return uParam0->f_23;
}

int func_29(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < func_320(uParam0))
	{
		if (((((func_28(&(uParam0->f_15[iVar0])) != 3 && func_28(&(uParam0->f_15[iVar0])) != 8) && func_21(uParam0, iVar0) != 10) && !func_298(uParam0, iVar0, 16384)) && !func_30(uParam0, uParam1, iVar0, 0)) && !func_298(uParam0, iVar0, 16777216))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_30(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_270(uParam0);
	}
	return func_32(uParam0, iParam2) >= (func_31(uParam1, func_313(uParam0)) + (5 + iParam3));
}

int func_31(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_28)
	{
		return 0;
	}
	return uParam0[iParam1]->f_1;
}

int func_32(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_15)
	{
		return 0;
	}
	return func_33(&(uParam0->f_15[iParam1]));
}

int func_33(var uParam0)
{
	return uParam0->f_18;
}

int func_34(var uParam0)
{
	if (uParam0->f_157 < 0)
	{
		return -1;
	}
	return func_22(&(uParam0->f_15[uParam0->f_157]));
}

int func_35(var uParam0)
{
	return func_28(&(uParam0->f_15[uParam0->f_157]));
}

float func_36(var uParam0)
{
	return func_37(&(uParam0->f_15[uParam0->f_157]));
}

float func_37(var uParam0)
{
	return uParam0->f_13;
}

void func_38(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_4))
	{
		unk_0x15AFB6CBDE990FB6(uParam0->f_4, 1, true);
		unk_0xF690C84DADBB3551(&(uParam0->f_4));
	}
}

int func_39(var uParam0)
{
	if ((func_22(uParam0) == 9 || func_22(uParam0) == 10) || func_40(uParam0, 16777216))
	{
		return 1;
	}
	return 0;
}

bool func_40(var uParam0, int iParam1)
{
	return (uParam0->f_22 && iParam1) != 0;
}

Vector3 func_41(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_28)
	{
		return 0f, 0f, 0f;
	}
	switch (iParam1)
	{
		case 0:
			return -1114,121f, 220,789f, 63,78f;
			break;
		
		case 1:
			return -1322,07f, 158,77f, 56,69f;
			break;
		
		case 2:
			return -1237,419f, 112,988f, 56,086f;
			break;
		
		case 3:
			return -1096,541f, 7,848f, 49,63f;
			break;
		
		case 4:
			return -957,386f, -90,412f, 39,161f;
			break;
		
		case 5:
			return -1103,516f, -115,163f, 40,444f;
			break;
		
		case 6:
			return -1290,633f, 2,771f, 49,219f;
			break;
		
		case 7:
			return -1034,944f, -83,144f, 42,919f;
			break;
		
		case 8:
			return -1294,775f, 83,51f, 53,804f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_42(var uParam0, int iParam1, vector3 vParam2, var uParam5, bool bParam6, int iParam7)
{
	if (bParam6)
	{
		if (unk_0xE82754C349C7B581(vParam2 + Vector(50f, 0f, 0f), &uVar0, 0, 0))
		{
			vParam2.z = uVar0;
		}
	}
	unk_0xA47B46945FF6DE74(func_284(uParam0, iParam1), vParam2, 0, false, 0, 1);
	iVar1 = func_272(uParam0, iParam1);
	if (unk_0xC844350D5D58C99A(func_294(uParam0, iVar1)) && iParam7)
	{
		vVar2 = { 0f, 0f, 0f };
		vVar5 = { 0f, 0f, 0f };
		fVar8 = 0f;
		if (iVar1 > 0)
		{
			vVar5 = { 5f, 5f, 0f };
		}
		if (!unk_0x437347B10A200C4B(func_294(uParam0, iVar1), 0))
		{
			if (func_298(uParam0, iParam1, 1048576))
			{
				bVar9 = func_43(vParam2 + vVar5, func_41(uParam5, func_313(uParam0)), &vVar2, &fVar8);
			}
			else
			{
				bVar9 = func_3(vParam2 + vVar5, func_41(uParam5, func_313(uParam0)), &vVar2, &fVar8, 0f, 0f, 0f, 0f, 0f, 0f, 0);
			}
			if (bVar9 && !unk_0x8E28E832BEAC3DCE(vVar2, 5f))
			{
				unk_0xA47B46945FF6DE74(func_294(uParam0, iVar1), vVar2, 1, false, 0, 1);
				unk_0xD8F6A53F4799FAFE(func_294(uParam0, iVar1), fVar8);
			}
		}
	}
}

int func_43(vector3 vParam0, struct<2> Param3, var uParam5, var uParam6, float fParam7)
{
	if (!unk_0xC55B75EFB7DDC5D6(vParam0, uParam6, fParam7, 1, 1077936128, 0))
	{
		return 0;
	}
	if (unk_0x755FF954DAE327E1((unk_0xE7D606C557C86100((Param3 - vParam0.x), (Param3.f_1 - vParam0.y)) - *fParam7)) > 90f)
	{
		*fParam7 = (*fParam7 + 180f);
	}
	return 1;
}

void func_44(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < func_320(uParam1))
	{
		func_10(&(uParam1->f_15[iVar0]), 0f, 0f, 0f, 5, 1);
		func_50(&(uParam1->f_15[iVar0]), 0f, 0f, -1f);
		func_49(&(uParam1->f_15[iVar0]), 0f, 0f, 0f);
		func_48(&(uParam1->f_15[iVar0]), func_327(uParam0, func_313(uParam1)));
		func_46(&(uParam1->f_15[iVar0]), func_47(uParam0, func_313(uParam1)));
		func_45(&(uParam1->f_15[iVar0]), 0);
		iVar0++;
	}
}

void func_45(var uParam0, int iParam1)
{
	uParam0->f_18 = iParam1;
}

void func_46(var uParam0, var uParam1)
{
	uParam0->f_13 = uParam1;
}

float func_47(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_28)
	{
		return 0f;
	}
	return (*uParam0)[iParam1];
}

void func_48(var uParam0, vector3 vParam1)
{
	uParam0->f_7 = { vParam1 };
}

void func_49(var uParam0, vector3 vParam1)
{
	uParam0->f_10 = { vParam1 };
}

void func_50(var uParam0, vector3 vParam1)
{
	uParam0->f_25 = { vParam1 };
}

void func_51(var uParam0, int iParam1)
{
	uParam0->f_157 = iParam1;
}

int func_52(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	uParam2->f_158++;
	if (bParam4)
	{
		func_55(func_313(uParam2));
	}
	iVar0 = 1;
	if (func_313(uParam2) >= iParam3 + 1 || uParam0->f_23)
	{
		if (bParam4 && iVar0)
		{
			func_54(uParam2, iParam3);
			uParam0->f_23 = 0;
			return 1;
		}
		else
		{
			if (func_313(uParam2) >= func_53(uParam1))
			{
				func_54(uParam2, 0);
			}
			return 0;
		}
	}
	return 0;
}

int func_53(var uParam0)
{
	return uParam0->f_28;
}

void func_54(var uParam0, int iParam1)
{
	uParam0->f_158 = iParam1;
}

void func_55(int iParam0)
{
	Global_110666 = iParam0;
}

void func_56(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_15)
	{
		return;
	}
	func_57(&(uParam0->f_15[iParam1]), iParam2);
}

void func_57(var uParam0, int iParam1)
{
	uParam0->f_22 = (uParam0->f_22 || iParam1);
}

void func_58(var uParam0, vector3 vParam1)
{
	func_50(&(uParam0->f_15[uParam0->f_157]), vParam1);
}

void func_59(var uParam0, vector3 vParam1, int iParam4)
{
	func_10(&(uParam0->f_15[uParam0->f_157]), vParam1, iParam4, 1);
}

void func_60(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < func_320(uParam1))
	{
		if (func_23(uParam1, iVar0) != 3)
		{
			func_61(uParam1, iVar0);
		}
		iVar0++;
	}
}

void func_61(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_15)
	{
		return;
	}
	func_62(&(uParam0->f_15[iParam1]));
}

void func_62(var uParam0)
{
	if (func_40(uParam0, 128))
	{
		unk_0x066C43E677C08D5C();
		func_261(uParam0, 128);
	}
	if (unk_0xC844350D5D58C99A(uParam0->f_3))
	{
		if (unk_0x27EE8CCDC67F4D6E(uParam0->f_3))
		{
			unk_0x066C43E677C08D5C();
		}
		if (unk_0xAF6690C489CC6203(uParam0->f_3))
		{
			unk_0xF690C84DADBB3551(&(uParam0->f_3));
		}
	}
	uParam0->f_3 = 0;
}

int func_63(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < func_320(uParam0))
	{
		if (iParam1 < 0 || iParam1 != iVar0)
		{
			if ((func_22(&(uParam0->f_15[iVar0])) != 10 && (func_24(&(uParam0->f_15[iVar0])) != 4 || !bParam2)) && !func_298(uParam0, iVar0, 16777216))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_64(var uParam0)
{
	if (uParam0->f_157 < 0)
	{
		return 0;
	}
	return func_299(&(uParam0->f_15[uParam0->f_157]));
}

void func_65(var uParam0, int iParam1)
{
	func_261(&(uParam0->f_15[uParam0->f_157]), iParam1);
}

int func_66(var uParam0, var uParam1, var uParam2, int iParam3)
{
	iVar1 = (func_313(uParam1) + iParam3);
	if (iVar1 >= func_53(uParam0))
	{
		iVar1 = 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_313(uParam2[iVar0]) == iVar1 && !func_298(uParam2[iVar0], 0, 8388608))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_67(var uParam0, var uParam1, var uParam2)
{
	if (!unk_0xC844350D5D58C99A(func_64(uParam2)))
	{
		return;
	}
	if (unk_0x437347B10A200C4B(func_64(uParam2), 0))
	{
		return;
	}
	switch (func_34(uParam2))
	{
		case 0:
			vVar0 = { func_327(uParam1, func_313(uParam2)) };
			func_4(&vVar0, 1073741824, 1065353216);
			if (!unk_0xC844350D5D58C99A(func_250(uParam2)))
			{
				func_245(uParam2, func_247(vVar0, func_248(func_249(uParam1, func_313(uParam2)), func_19(uParam2))));
			}
			else if (!func_244())
			{
				unk_0xA47B46945FF6DE74(func_250(uParam2), vVar0, 1, false, 0, 1);
			}
			func_243(uParam2, unk_0x68F4C0EC296D3901(func_250(uParam2), true));
			if (func_31(uParam1, func_313(uParam2)) == 1)
			{
				func_59(uParam2, 0f, 0f, 0f, 3);
			}
			else
			{
				func_59(uParam2, 0f, 0f, 0f, 5);
			}
			func_58(uParam2, 0f, 0f, -1f);
			if (!bLocal_298)
			{
				func_231(uParam0, uParam1, uParam2, 1);
			}
			func_203(uParam1, uParam2, uParam0, 0, 0, 1, 1, 0);
			unk_0xD0C5FAC38659B26F(func_250(uParam2), 0);
			func_202(func_250(uParam2), 1);
			func_199(uParam0, uParam1, uParam2);
			func_198(&(uParam2->f_1), &(uParam2->f_15[func_270(uParam2)]), uParam0);
			func_195(uParam2, func_196(uParam2, uParam0));
			func_260(&(uParam2->f_162));
			func_263(uParam2, 3);
			break;
		
		case 1:
			if (!bLocal_298)
			{
				func_231(uParam0, uParam1, uParam2, 1);
			}
			func_203(uParam1, uParam2, uParam0, 0, 0, 0, 1, 0);
			if (!unk_0xC844350D5D58C99A(func_250(uParam2)))
			{
				func_245(uParam2, func_247(func_327(uParam1, func_313(uParam2)) + Vector(0,075f, 0f, 0f), func_248(func_249(uParam1, func_313(uParam2)), func_19(uParam2))));
			}
			func_199(uParam0, uParam1, uParam2);
			func_198(&(uParam2->f_1), &(uParam2->f_15[func_270(uParam2)]), uParam0);
			if (!func_194(uParam2))
			{
				func_195(uParam2, func_196(uParam2, uParam0));
			}
			func_260(&(uParam2->f_162));
			func_263(uParam2, 3);
			break;
		
		case 3:
			if (func_193(uParam2) || func_40(&(uParam2->f_15[func_270(uParam2)]), 1048576))
			{
				if (func_40(&(uParam2->f_15[func_270(uParam2)]), 1048576))
				{
					func_192(uParam2, func_270(uParam2), uParam1, 0, 1);
					func_189(&(uParam2->f_162));
					func_263(uParam2, func_188());
					return;
				}
				if (unk_0xC844350D5D58C99A(func_64(uParam2)) && !unk_0x437347B10A200C4B(func_64(uParam2), 0))
				{
					if (vdist2(unk_0x68F4C0EC296D3901(func_64(uParam2), true), func_19(uParam2)) > 9f)
					{
						unk_0xA3BF0AA5A2608191(func_64(uParam2));
						func_263(uParam2, 1);
						return;
					}
				}
				func_189(&(uParam2->f_162));
				func_263(uParam2, func_188());
				func_187(uParam2, 1);
				func_175(uParam0, &(uParam2->f_15[func_270(uParam2)]), &(uParam2->f_1));
				if (func_172(uParam1, uParam2))
				{
					func_195(uParam2, func_196(uParam2, uParam0));
				}
			}
			else if (unk_0x9C66D99E63E8E24C(func_64(uParam2)) == 0f && func_171(&(uParam2->f_162), 15f))
			{
				func_260(&(uParam2->f_162));
				unk_0xA3BF0AA5A2608191(func_64(uParam2));
				if (!func_267(uParam2, -1))
				{
					func_263(uParam2, 0);
				}
				else
				{
					func_263(uParam2, 1);
				}
			}
			break;
		
		case 4:
			if (func_170(unk_0x16F2683693E537C9(), uParam2->f_15[func_270(uParam2)].f_2, 0) < 1f)
			{
				if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), uParam2->f_15[func_270(uParam2)].f_2))
				{
					unk_0x327AAEE25F323797(uParam2->f_15[func_270(uParam2)].f_2);
					func_203(uParam1, uParam2, uParam0, 0, 0, 0, 1, 0);
					func_277(uParam2, 0);
					func_263(uParam2, 1);
					func_169(&(uParam2->f_162));
					return;
				}
			}
			if (bLocal_0)
			{
			}
			func_157(uParam2, uParam0, &(uParam2->f_1), 0, 0);
			if (!func_275(uParam2, 1048576))
			{
				func_175(uParam0, &(uParam2->f_15[func_270(uParam2)]), &(uParam2->f_1));
			}
			if (!func_279(uParam0, 8))
			{
				if (((uParam2->f_1 == 4 || uParam2->f_1 == 6) || func_275(uParam2, 1048576)) && unk_0xC844350D5D58C99A(func_250(uParam2)))
				{
					if (((func_156(func_64(uParam2)) || func_171(&(uParam2->f_162), 2,5f)) || func_275(uParam2, 1048576)) && unk_0x32B8283A77B4A240(func_250(uParam2)))
					{
						if (func_275(uParam2, 1048576))
						{
							if (bLocal_0)
							{
							}
							uParam2->f_1 = 4;
						}
						if (func_126(uParam0, uParam1, uParam2))
						{
							uParam2->f_1 = 0;
							func_263(uParam2, 5);
						}
						else
						{
							uParam2->f_1 = 0;
							func_263(uParam2, 3);
						}
						func_125(uParam0, 8);
					}
				}
				else if (!unk_0xC844350D5D58C99A(func_250(uParam2)))
				{
					uParam2->f_1 = 0;
					func_263(uParam2, 0);
				}
			}
			break;
		
		case 5:
			if (func_124(func_64(uParam2), 1f))
			{
				func_118(uParam0, uParam2, 1);
			}
			if (!unk_0xC844350D5D58C99A(func_250(uParam2)))
			{
				func_245(uParam2, func_247(func_19(uParam2), func_248(func_249(uParam1, func_313(uParam2)), func_19(uParam2))));
			}
			if (!func_172(uParam1, uParam2))
			{
				func_105(uParam0, uParam1, uParam2);
				func_104(&(uParam2->f_1));
				if (func_275(uParam2, 4))
				{
					func_103(&(uParam2->f_1));
				}
			}
			else
			{
				func_89(uParam0, uParam1, uParam2);
				if (func_275(uParam2, 4))
				{
					func_103(&(uParam2->f_1));
				}
			}
			break;
		
		case 6:
			func_118(uParam0, uParam2, 1);
			if ((func_88(uParam2) || func_87(uParam2)) || func_7(unk_0x68F4C0EC296D3901(func_250(uParam2), true)))
			{
				func_86(uParam2);
			}
			else
			{
				func_77(uParam1, uParam2);
			}
			func_263(uParam2, 7);
			func_76(uParam2, 1);
			if (func_75(uParam2) > func_31(uParam1, func_313(uParam2)) + 3)
			{
				func_263(uParam2, 7);
				func_74(uParam2, 16384);
			}
			break;
		
		case 8:
			func_118(uParam0, uParam2, 1);
			func_263(uParam2, 7);
			func_76(uParam2, 1);
			func_73(uParam2);
			func_65(uParam2, 67108864);
			if (!func_63(uParam2, func_270(uParam2), 0) && !func_275(uParam2, 1048576))
			{
				unk_0xA3BF0AA5A2608191(func_64(uParam2));
				unk_0xDD353D0E9C789D0E(&(uParam2->f_15[func_270(uParam2)].f_21));
				unk_0xB87AD42E3FA06BDE(0, func_268(uParam1, func_313(uParam2), func_270(uParam2)), 1f, 0, 0, 786603, -1082130432);
				unk_0x796BDF31572BB055(0, func_41(uParam1, func_313(uParam2)), 0);
				unk_0x75ABDC5F81978924(uParam2->f_15[func_270(uParam2)].f_21);
				unk_0x78ADC381772E3D54(func_64(uParam2), uParam2->f_15[func_270(uParam2)].f_21);
				unk_0xF82EA857DA10E0CD(&(uParam2->f_15[func_270(uParam2)].f_21));
			}
			break;
		
		case 7:
			if (!func_118(uParam0, uParam2, 0))
			{
				if (func_70(uParam1, uParam2) && !func_267(uParam2, func_270(uParam2)))
				{
					if (!func_275(uParam2, 1048576))
					{
						if (bLocal_0)
						{
						}
						unk_0xA3BF0AA5A2608191(func_64(uParam2));
						unk_0xDD353D0E9C789D0E(&(uParam2->f_15[func_270(uParam2)].f_21));
						unk_0x96167B03C5A77156(0, func_266(uParam1, func_313(uParam2), func_270(uParam2)), 1f, -1, 1048576000, 0, 1193033728);
						unk_0x796BDF31572BB055(0, func_327(uParam1, func_313(uParam2)), 0);
						unk_0x75ABDC5F81978924(uParam2->f_15[func_270(uParam2)].f_21);
						unk_0x78ADC381772E3D54(func_64(uParam2), uParam2->f_15[func_270(uParam2)].f_21);
						unk_0xF82EA857DA10E0CD(&(uParam2->f_15[func_270(uParam2)].f_21));
					}
					else
					{
						unk_0xA47B46945FF6DE74(func_64(uParam2), func_266(uParam1, func_313(uParam2), func_270(uParam2)), 1, false, 0, 1);
					}
				}
				else if (func_194(uParam2) || func_275(uParam2, 67108864))
				{
					if (!func_275(uParam2, 1048576))
					{
						if (!func_63(uParam2, func_270(uParam2), 0))
						{
							if (bLocal_0)
							{
							}
							unk_0xA3BF0AA5A2608191(func_64(uParam2));
							unk_0xDD353D0E9C789D0E(&(uParam2->f_15[func_270(uParam2)].f_21));
							unk_0x96167B03C5A77156(0, func_268(uParam1, func_313(uParam2), func_270(uParam2)), 1f, -1, 1048576000, 0, 1193033728);
							unk_0x796BDF31572BB055(0, func_41(uParam1, func_313(uParam2)), 0);
							unk_0x75ABDC5F81978924(uParam2->f_15[func_270(uParam2)].f_21);
							unk_0x78ADC381772E3D54(func_64(uParam2), uParam2->f_15[func_270(uParam2)].f_21);
							unk_0xF82EA857DA10E0CD(&(uParam2->f_15[func_270(uParam2)].f_21));
						}
					}
					else if (!func_275(uParam2, 4194304))
					{
						unk_0xA47B46945FF6DE74(func_64(uParam2), func_268(uParam1, func_313(uParam2), func_270(uParam2)), 1, false, 0, 1);
					}
				}
				else if (!func_275(uParam2, 1048576))
				{
					if (!func_63(uParam2, func_270(uParam2), 0) && unk_0xC844350D5D58C99A(func_25(uParam2)))
					{
						if (!unk_0x437347B10A200C4B(func_25(uParam2), 0))
						{
							unk_0xA3BF0AA5A2608191(func_64(uParam2));
							unk_0xDD353D0E9C789D0E(&(uParam2->f_15[func_270(uParam2)].f_21));
							unk_0x5B1D360B9C6F0A09(0, func_25(uParam2), -1, func_68(uParam2), 1f, 1, 0);
							unk_0x75ABDC5F81978924(uParam2->f_15[func_270(uParam2)].f_21);
							unk_0x78ADC381772E3D54(func_64(uParam2), uParam2->f_15[func_270(uParam2)].f_21);
							unk_0xF82EA857DA10E0CD(&(uParam2->f_15[func_270(uParam2)].f_21));
						}
					}
				}
				if (func_35(uParam2) == 8 || func_275(uParam2, 16384))
				{
					func_263(uParam2, 10);
					func_65(uParam2, 16384);
				}
				else
				{
					func_263(uParam2, 9);
				}
			}
			break;
	}
}

int func_68(var uParam0)
{
	return func_69(func_270(uParam0));
}

int func_69(int iParam0)
{
	if (iParam0 == 0 || iParam0 == 2)
	{
		return -1;
	}
	return 0;
}

int func_70(var uParam0, var uParam1)
{
	if (func_313(uParam1) < 0 || func_313(uParam1) >= func_53(uParam0))
	{
		return 0;
	}
	if (func_71(uParam1) != 5)
	{
		return 0;
	}
	return 1;
}

int func_71(var uParam0)
{
	return func_72(&(uParam0->f_15[uParam0->f_157]));
}

var func_72(var uParam0)
{
	return uParam0->f_24;
}

void func_73(var uParam0)
{
	func_62(&(uParam0->f_15[uParam0->f_157]));
}

void func_74(var uParam0, int iParam1)
{
	func_57(&(uParam0->f_15[uParam0->f_157]), iParam1);
}

int func_75(var uParam0)
{
	return func_33(&(uParam0->f_15[uParam0->f_157]));
}

void func_76(var uParam0, int iParam1)
{
	func_45(&(uParam0->f_15[uParam0->f_157]), (func_33(&(uParam0->f_15[uParam0->f_157])) + iParam1));
}

void func_77(var uParam0, var uParam1)
{
	if (!bLocal_298)
	{
		if (func_85(uParam1) != 4)
		{
			unk_0x2FB9A57162E54BAB(0f);
			unk_0xEF6276132B396452(0f, 1065353216);
		}
		func_243(uParam1, unk_0x68F4C0EC296D3901(func_250(uParam1), true));
		func_84(uParam1, vdist(func_19(uParam1), func_41(uParam0, func_313(uParam1))));
	}
	else
	{
		unk_0xA47B46945FF6DE74(func_250(uParam1), func_19(uParam1) + Vector(0,05f, 0f, 0f), 1, false, 0, 1);
		func_82(uParam1);
		func_80(uParam1);
	}
	unk_0x6D7271D7307DB70C(func_250(uParam1), 150f);
	func_202(func_250(uParam1), 1);
	func_65(uParam1, 2);
	func_78(uParam1, 0f);
}

void func_78(var uParam0, float fParam1)
{
	func_79(&(uParam0->f_15[uParam0->f_157]), fParam1);
}

void func_79(var uParam0, var uParam1)
{
	uParam0->f_16 = uParam1;
}

void func_80(var uParam0)
{
	func_81(&(uParam0->f_15[uParam0->f_157]));
}

void func_81(var uParam0)
{
	uParam0->f_25 = { uParam0->f_28 };
}

void func_82(var uParam0)
{
	func_83(&(uParam0->f_15[uParam0->f_157]));
}

void func_83(var uParam0)
{
	uParam0->f_23 = uParam0->f_24;
}

void func_84(var uParam0, float fParam1)
{
	func_46(&(uParam0->f_15[uParam0->f_157]), fParam1);
}

int func_85(var uParam0)
{
	return func_24(&(uParam0->f_15[uParam0->f_157]));
}

void func_86(var uParam0)
{
	func_82(uParam0);
	func_80(uParam0);
	func_65(uParam0, 2);
	func_74(uParam0, 64);
	func_78(uParam0, 0f);
	func_74(uParam0, 536870912);
}

int func_87(var uParam0)
{
	if (func_35(uParam0) != -1)
	{
		return 0;
	}
	return 1;
}

int func_88(var uParam0)
{
	if (func_35(uParam0) != 7)
	{
		return 0;
	}
	return 1;
}

void func_89(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_250(uParam2);
	vVar1 = { unk_0x56E9E0FD5ACCD35D(iVar0) };
	fVar4 = vmag(vVar1);
	vVar5 = { func_41(uParam1, func_313(uParam2)) };
	vVar8 = { unk_0x68F4C0EC296D3901(iVar0, true) };
	unk_0x67B3582E66D35002(iVar0, 0, 2,96f);
	unk_0x67B3582E66D35002(iVar0, 3, 2,96f);
	iVar11 = func_102(uParam1, func_313(uParam2));
	if (func_100(uParam0, uParam1, uParam2))
	{
		return;
	}
	uParam2->f_1.f_5 = 0f;
	uParam2->f_1.f_6 = 0f;
	if (unk_0xE608C809F9416F00(iVar0))
	{
		func_59(uParam2, unk_0x68F4C0EC296D3901(iVar0, true), func_99(unk_0x3661263219ECFDCC(iVar0)));
		func_74(uParam2, 2);
		func_311(uParam0, 268435456);
		if (unk_0xC844350D5D58C99A(iVar11))
		{
			if (unk_0x1B3D109B39CC2C89(iVar0, iVar11) && !func_275(uParam2, 268435456))
			{
				unk_0xCEAA091B490F8407(-1, "GOLF_BALL_IMPACT_FLAG_MASTER", func_250(uParam2), 0, false, 0);
				unk_0x20641932E5104B25(iVar11, false, 0);
				func_74(uParam2, 268435456);
			}
		}
	}
	else if (func_275(uParam2, 2) && func_194(uParam2))
	{
		if (!func_279(uParam0, 268435456) && vdist2(vVar8, vVar5) < (0,3f * 0,3f))
		{
			unk_0xCEAA091B490F8407(-1, "GOLF_BALL_CUP_MISS_MASTER", func_250(uParam2), 0, false, 0);
			func_125(uParam0, 268435456);
		}
	}
	if (((fVar4 < 0,25f || (fVar4 < 6f && func_98(uParam1, uParam2))) || func_275(uParam2, 256)) || func_97())
	{
		if (!func_96(&(uParam2->f_159)))
		{
			func_59(uParam2, unk_0x68F4C0EC296D3901(iVar0, true), func_99(unk_0x3661263219ECFDCC(iVar0)));
			func_58(uParam2, unk_0x204F847EA93D419E(iVar0));
			if (func_98(uParam1, uParam2))
			{
			}
			func_260(&(uParam2->f_159));
		}
		if ((!func_98(uParam1, uParam2) && (((func_275(uParam2, 256) || vdist2(vVar8, vVar5) < (0,1601f * 0,1601f)) || func_97()) || func_93(uParam1, uParam2))) && 0)
		{
			func_92(iVar0, vVar8, vVar5);
			func_74(uParam2, 256);
		}
		else if (func_171(&(uParam2->f_159), 0,5f))
		{
			if (bLocal_0)
			{
			}
			unk_0xD0C5FAC38659B26F(iVar0, 0);
			func_74(uParam2, 2048);
			uParam2->f_1.f_5 = 0f;
			uParam2->f_1.f_6 = 0f;
			if (func_98(uParam1, uParam2))
			{
				func_74(uParam2, 8192);
				func_263(uParam2, 8);
				func_202(iVar0, 0);
			}
			else
			{
				func_202(iVar0, 1);
				func_263(uParam2, 6);
			}
			func_74(uParam2, 4);
		}
	}
	else if (func_96(&(uParam2->f_159)))
	{
		func_169(&(uParam2->f_159));
	}
	if (func_171(&(uParam2->f_162), 30f) && !func_97())
	{
		unk_0xA47B46945FF6DE74(iVar0, func_90(uParam2), 1, false, 0, 1);
		unk_0xD0C5FAC38659B26F(iVar0, 0);
		func_202(iVar0, 1);
		func_263(uParam2, 6);
		func_74(uParam2, 68);
	}
}

Vector3 func_90(var uParam0)
{
	return func_91(&(uParam0->f_15[uParam0->f_157]));
}

Vector3 func_91(var uParam0)
{
	return uParam0->f_10;
}

void func_92(int iParam0, struct<2> Param1, float fParam3, struct<2> Param4, var uParam6)
{
	vVar0 = { func_6(Vector(0f, Param4.f_1, Param4) - Vector(0f, Param1.f_1, Param1)) * Vector(9f, 9f, 9f) };
	unk_0xDFC6BA855748EB10(iParam0, 0, vVar0, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
}

int func_93(var uParam0, var uParam1)
{
	if (func_85(uParam1) != 4)
	{
		return 0;
	}
	if (!func_172(uParam0, uParam1))
	{
		return 0;
	}
	vVar0 = { func_19(uParam1) };
	fVar3 = 0,7f;
	switch (func_94(uParam1))
	{
		case 0:
			fVar3 = 1f;
			break;
		
		case 1:
			fVar3 = 1,5f;
			break;
		
		case 2:
			fVar3 = 2,5f;
			break;
	}
	if (vdist(vVar0, func_41(uParam0, func_313(uParam1))) > fVar3)
	{
		return 0;
	}
	return 1;
}

int func_94(var uParam0)
{
	return func_95(&(uParam0->f_15[uParam0->f_157]));
}

var func_95(var uParam0)
{
	return uParam0->f_33;
}

bool func_96(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 1);
}

int func_97()
{
	return 0;
}

int func_98(var uParam0, var uParam1)
{
	if (!unk_0xC844350D5D58C99A(func_250(uParam1)))
	{
		return 0;
	}
	vVar0 = { unk_0x68F4C0EC296D3901(func_250(uParam1), false) };
	vVar3 = { func_41(uParam0, func_313(uParam1)) };
	if (vdist2(vVar0, vVar3) > (0,25f * 0,25f))
	{
		return 0;
	}
	if (func_35(uParam1) == 8)
	{
		if (vVar0.z < (vVar3.z + 0,11f))
		{
			return 1;
		}
	}
	if (vdist2(vVar0, vVar3) < (0,1f * 0,1f))
	{
		func_59(uParam1, 0f, 0f, 0f, 8);
		return 1;
	}
	return 0;
}

int func_99(int iParam0)
{
	switch (iParam0)
	{
		case -461750719:
		case 930824497:
			return 4;
		
		case 581794674:
		case -2041329971:
		case -309121453:
		case 555004797:
		case -1885547121:
		case -1915425863:
			return 9;
			break;
		
		case -2073312001:
		case 627123000:
			return 8;
			break;
		
		case 1187676648:
		case 282940568:
		case 951832588:
		case -840216541:
		case 510490462:
			return 1;
			break;
		
		case 1333033863:
			return 2;
			break;
		
		case -1286696947:
			return 3;
			break;
		
		case -1595148316:
			return 0;
			break;
		
		case 435688960:
			return 7;
			break;
	}
	return -1;
}

int func_100(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_250(uParam2);
	if (unk_0x70EED0761B82965E(iVar0))
	{
		unk_0xD0C5FAC38659B26F(iVar0, 0);
		func_202(iVar0, 1);
		func_59(uParam2, 0f, 0f, 0f, 7);
		func_101(uParam2);
		func_263(uParam2, 6);
		func_74(uParam2, 4);
		func_74(uParam2, 2);
		return 1;
	}
	return 0;
}

void func_101(var uParam0)
{
	unk_0xCEAA091B490F8407(-1, "GOLF_BALL_IN_WATER_MASTER", func_250(uParam0), 0, false, 0);
	return;
	unk_0xBA3209FB359D3EA4("scr_golf_landing_water", unk_0x68F4C0EC296D3901(func_250(uParam0), true), 0f, 0f, func_248(unk_0x68F4C0EC296D3901(func_250(uParam0), true), func_19(uParam0)), 1065353216, 0, 0, 0);
}

int func_102(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_28)
	{
		return 0;
	}
	return uParam0[iParam1]->f_2;
}

void func_103(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0f;
	uParam0->f_5 = 0f;
	uParam0->f_6 = 0f;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
}

void func_104(var uParam0)
{
}

void func_105(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_250(uParam2);
	iVar1 = func_102(uParam1, func_313(uParam2));
	vVar2 = { unk_0x56E9E0FD5ACCD35D(iVar0) };
	fVar5 = vmag(vVar2);
	vVar7 = { uParam2->f_1.f_5, uParam2->f_1.f_6, 0f };
	fVar10 = func_116(uParam2);
	vVar11 = { func_6(cos(fVar10), sin(fVar10), 0f) };
	vVar14 = { func_115(vVar11, 0) };
	vVar17 = { vVar11 * Vector(-vVar7.x, -vVar7.x, -vVar7.x) * Vector(0,05f, 0,05f, 0,05f) + vVar14 * Vector(vVar7.y, vVar7.y, vVar7.y) * Vector(0,2f, 0,2f, 0,2f) };
	unk_0x4ADCCF23C40DC113(unk_0x68F4C0EC296D3901(iVar0, true), unk_0x68F4C0EC296D3901(iVar0, true) + func_6(vVar17), 0, 0, 0, 255);
	if (func_100(uParam0, uParam1, uParam2))
	{
		return;
	}
	if (unk_0xE608C809F9416F00(iVar0))
	{
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x1B3D109B39CC2C89(iVar0, iVar1))
			{
				if (!func_275(uParam2, 268435456))
				{
					unk_0xCEAA091B490F8407(-1, "GOLF_BALL_IMPACT_FLAG_MASTER", func_250(uParam2), 0, false, 0);
					func_74(uParam2, 268435456);
				}
				if (!unk_0xE934758D273C899A(iVar0))
				{
					unk_0x20641932E5104B25(iVar1, false, 0);
				}
			}
		}
		fVar20 = 1f;
		fVar21 = 0f;
		fVar22 = 0f;
		fVar23 = 0f;
		switch (func_99(unk_0x3661263219ECFDCC(iVar0)))
		{
			case 1:
				fVar20 = 0,89f;
				fVar21 = 0,75f;
				fVar23 = 0,2f;
				fVar22 = 0,3f;
				break;
			
			case 4:
			case 9:
				fVar21 = 0,25f;
				fVar20 = 0,85f;
				fVar23 = 0,5f;
				fVar22 = 0,15f;
				break;
			
			case 0:
				fVar20 = 0,35f;
				fVar21 = 0f;
				fVar23 = 0,2f;
				fVar22 = 0f;
				break;
			
			case 7:
				fVar20 = 0,5f;
				break;
			
			case 2:
				fVar20 = 0,85f;
				fVar21 = 0,5f;
				fVar23 = 0,55f;
				fVar22 = 0,3f;
				break;
			
			case 3:
				fVar20 = 0,85f;
				fVar21 = 0,3f;
				fVar23 = 0,55f;
				fVar22 = 1,2f;
				break;
			
			case -1:
				break;
		}
		if (!bLocal_301)
		{
			vVar17 = { vVar11 * Vector(-vVar7.x, -vVar7.x, -vVar7.x) * Vector(0,2f, 0,2f, 0,2f) + vVar14 * Vector(vVar7.y, vVar7.y, vVar7.y) * Vector(0,2f, 0,2f, 0,2f) };
			vVar17 = { vVar17 * Vector(fVar22, fVar22, fVar22) };
			unk_0xDFC6BA855748EB10(iVar0, 0, vVar17, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
		}
		func_114(&(uParam2->f_1));
		if (!func_279(uParam0, 64))
		{
			if (fVar21 != 0f && vmag2(vVar2) > 9,5f)
			{
				unk_0x4E75239F2767B832(unk_0x68F4C0EC296D3901(iVar0, true) + Vector(1f, 0f, 0f), &uVar6, &vVar27);
				vVar30 = { FtoV(func_8(vLocal_308, vVar27)) * vVar27 };
				vVar24 = { FtoV(-(1f + fVar21)) * vVar30 + vLocal_308 };
				vVar33 = { vLocal_308 - vVar30 };
				vVar24 = { vVar24 - vVar33 * Vector(fVar23, fVar23, fVar23) };
				unk_0x37806EBF326ECEE9(iVar0, vVar24);
			}
			func_125(uParam0, 64);
			func_112(uParam2, 0, func_113(iVar0));
		}
		else
		{
			vVar36 = { unk_0x56E9E0FD5ACCD35D(iVar0) };
			if (fVar20 != 1f)
			{
				vVar36 = { vVar36 * Vector(fVar20, fVar20, fVar20) };
				unk_0x37806EBF326ECEE9(iVar0, vVar36);
			}
		}
	}
	else
	{
		if (func_279(uParam0, 64))
		{
			func_311(uParam0, 64);
		}
		if (!bLocal_300 && !func_111(uParam2))
		{
			vVar39 = { func_6(uParam0->f_16, uParam0->f_16.f_1, 0f) * Vector(uParam0->f_20, uParam0->f_20, uParam0->f_20) * Vector(0,5f, 0,5f, 0,5f) };
			unk_0xDFC6BA855748EB10(iVar0, 0, vVar39, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
		}
		if (!bLocal_301)
		{
			unk_0xDFC6BA855748EB10(iVar0, 0, vVar17, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
		}
	}
	if (func_110(uParam2))
	{
		unk_0x5E858A00EAFA5B24(0, 50, func_108(0, func_109(256, (unk_0x51D1D19912234EA0(round(uParam2->f_1.f_6)) + unk_0x51D1D19912234EA0(round(uParam2->f_1.f_5))) + 30)));
	}
	if (!func_275(uParam2, 2))
	{
		if (!func_96(&(uParam2->f_159)) && !func_275(uParam2, 2))
		{
			func_260(&(uParam2->f_159));
		}
		if (unk_0xE608C809F9416F00(iVar0) && func_257(&(uParam2->f_159), 0,2f))
		{
			if (func_85(uParam2) != 4)
			{
				unk_0xA37A90C62806D848(1);
			}
			if (bLocal_0)
			{
			}
			func_78(uParam2, vdist(unk_0x68F4C0EC296D3901(iVar0, true), func_19(uParam2)));
			func_74(uParam2, 2);
			func_169(&(uParam2->f_159));
			func_106(uParam2);
		}
	}
	else if (func_97() && !func_98(uParam1, uParam2))
	{
		func_92(iVar0, unk_0x68F4C0EC296D3901(iVar0, true), func_41(uParam1, func_313(uParam2)));
	}
	else if ((fVar5 < 0,5f && (unk_0x755FF954DAE327E1(uParam2->f_1.f_5) + unk_0x755FF954DAE327E1(uParam2->f_1.f_6)) < 0,05f) || (fVar5 < 6f && func_98(uParam1, uParam2)))
	{
		if (!func_96(&(uParam2->f_159)))
		{
			func_59(uParam2, unk_0x68F4C0EC296D3901(iVar0, true), func_99(unk_0x3661263219ECFDCC(iVar0)));
			func_58(uParam2, unk_0x204F847EA93D419E(iVar0));
			func_260(&(uParam2->f_159));
			if (func_98(uParam1, uParam2))
			{
			}
		}
		if (func_171(&(uParam2->f_159), 1f))
		{
			unk_0xD0C5FAC38659B26F(iVar0, 0);
			uParam2->f_1.f_5 = 0f;
			uParam2->f_1.f_6 = 0f;
			if (func_98(uParam1, uParam2))
			{
				func_74(uParam2, 8192);
				func_263(uParam2, 8);
			}
			else
			{
				func_263(uParam2, 6);
				if (func_110(uParam2))
				{
					unk_0x5E858A00EAFA5B24(0, 10, 10);
				}
			}
			func_74(uParam2, 4);
			func_202(iVar0, 1);
			func_74(uParam2, 2048);
			if (func_70(uParam1, uParam2))
			{
				func_74(uParam2, 8);
			}
		}
	}
	else if (func_96(&(uParam2->f_159)))
	{
		func_169(&(uParam2->f_159));
	}
	if (func_171(&(uParam2->f_162), 14f) && !func_97())
	{
		unk_0xD0C5FAC38659B26F(iVar0, 0);
		func_202(iVar0, 1);
		func_263(uParam2, 6);
		func_74(uParam2, 68);
		if (func_275(uParam2, 4194304))
		{
			func_59(uParam2, 0f, 0f, 0f, 3);
		}
		else
		{
			func_59(uParam2, 0f, 0f, 0f, 4);
		}
	}
	if (unk_0xC844350D5D58C99A(iVar0))
	{
		vLocal_308 = { unk_0x56E9E0FD5ACCD35D(iVar0) };
	}
	func_311(uParam0, 32);
}

void func_106(var uParam0)
{
	return;
	if (func_194(uParam0))
	{
		return;
	}
	sVar0 = "";
	switch (unk_0x3661263219ECFDCC(func_250(uParam0)))
	{
		case -461750719:
		case 930824497:
			sVar0 = "scr_golf_landing_thick_grass";
			break;
		
		case -309121453:
		case 555004797:
		case 581794674:
		case -2041329971:
		case -1915425863:
			sVar0 = "scr_golf_hit_branches";
			break;
		
		case -1595148316:
			sVar0 = "scr_golf_landing_bunker";
			break;
		
		case 1333033863:
		case -1286696947:
		case 951832588:
		case 1187676648:
		case 282940568:
		case -2073312001:
			break;
		
		default:
			break;
	}
	if (!func_107(sVar0))
	{
		unk_0xBA3209FB359D3EA4(sVar0, unk_0x68F4C0EC296D3901(func_250(uParam0), true), 0f, 0f, func_248(unk_0x68F4C0EC296D3901(func_250(uParam0), true), func_19(uParam0)), 1065353216, 0, 0, 0);
	}
}

int func_107(char* sParam0)
{
	if (unk_0x2EBF5002C6B6A06C(sParam0))
	{
		return 1;
	}
	if (unk_0x4880526EC51D1C27(sParam0) <= 0)
	{
		return 1;
	}
	return 0;
}

int func_108(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_109(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_110(var uParam0)
{
	return (func_85(uParam0) == 1 || func_85(uParam0) == 2);
}

bool func_111(var uParam0)
{
	return ((func_94(uParam0) == 2 || func_275(uParam0, 65536)) && func_85(uParam0) == 4);
}

void func_112(var uParam0, bool bParam1, bool bParam2)
{
	sVar0 = "";
	switch (unk_0x3661263219ECFDCC(func_250(uParam0)))
	{
		case 1333033863:
		case -1286696947:
			if (bParam2)
			{
				sVar0 = "GOLF_BALL_IMPACT_FAIRWAY_LIGHT_MASTER";
			}
			else
			{
				sVar0 = "GOLF_BALL_IMPACT_FAIRWAY_MASTER";
			}
			break;
		
		case -461750719:
		case 930824497:
			if (bParam2)
			{
				sVar0 = "GOLF_BALL_IMPACT_GRASS_LIGHT_MASTER";
			}
			else
			{
				sVar0 = "GOLF_BALL_IMPACT_GRASS_MASTER";
			}
			break;
		
		case -1595148316:
			if (bParam2)
			{
				sVar0 = "GOLF_BALL_IMPACT_SAND_LIGHT_MASTER";
			}
			else
			{
				sVar0 = "GOLF_BALL_IMPACT_SAND_MASTER";
			}
			break;
		
		case 951832588:
		case 1187676648:
		case 282940568:
		case -840216541:
			if (bParam2)
			{
				sVar0 = "GOLF_BALL_IMPACT_CONCRETE_LIGHT_MASTER";
			}
			else
			{
				sVar0 = "GOLF_BALL_IMPACT_CONCRETE_MASTER";
			}
			break;
		
		case -309121453:
		case 555004797:
		case 581794674:
		case -1915425863:
			if (bParam2)
			{
				sVar0 = "GOLF_BALL_IMPACT_TREE_SOFT_MASTER";
			}
			else
			{
				sVar0 = "GOLF_BALL_IMPACT_TREE_MASTER";
			}
			break;
		
		default:
			if (bParam2)
			{
				sVar0 = "GOLF_BALL_IMPACT_TREE_SOFT_MASTER";
			}
			else
			{
				sVar0 = "GOLF_BALL_IMPACT_TREE_MASTER";
			}
			break;
	}
	if (!func_107(sVar0))
	{
		if (bParam1)
		{
			unk_0xEB819BD1E585E9CB(-1, sVar0, unk_0x68F4C0EC296D3901(func_250(uParam0), true), 0, false, 0, 0);
		}
		else
		{
			unk_0xCEAA091B490F8407(-1, sVar0, func_250(uParam0), 0, false, 0);
		}
	}
}

bool func_113(int iParam0)
{
	return unk_0x9C66D99E63E8E24C(iParam0) < 6f;
}

void func_114(var uParam0)
{
	if (uParam0->f_5 == 0f && uParam0->f_6 == 0f)
	{
		return;
	}
	vVar0 = { func_6(uParam0->f_5, uParam0->f_6, 0f) * Vector(25f, 25f, 25f) * FtoV(unk_0x6117725E0134737F()) };
	vVar3 = { -vVar0 };
	if (unk_0x755FF954DAE327E1(uParam0->f_5) < unk_0x755FF954DAE327E1(vVar0.x))
	{
		uParam0->f_5 = 0f;
	}
	else
	{
		uParam0->f_5 = (uParam0->f_5 + vVar3.x);
	}
	if (unk_0x755FF954DAE327E1(uParam0->f_6) < unk_0x755FF954DAE327E1(vVar0.y))
	{
		uParam0->f_6 = 0f;
	}
	else
	{
		uParam0->f_6 = (uParam0->f_6 + vVar3.y);
	}
}

Vector3 func_115(vector3 vParam0, int iParam3)
{
	switch (iParam3)
	{
		case 0:
			vVar0.x = -vParam0.y;
			vVar0.y = vParam0.x;
			break;
		
		case 1:
			vVar0.x = -vParam0.x;
			vVar0.y = -vParam0.y;
			break;
		
		case 2:
			vVar0.x = vParam0.y;
			vVar0.y = -vParam0.x;
			break;
	}
	vVar0.z = vParam0.z;
	return vVar0;
}

float func_116(var uParam0)
{
	return func_117(&(uParam0->f_15[uParam0->f_157]));
}

float func_117(var uParam0)
{
	return uParam0->f_14;
}

int func_118(var uParam0, var uParam1, bool bParam2)
{
	iVar0 = func_64(uParam1);
	sVar1 = func_121(uParam0, &(uParam1->f_15[func_270(uParam1)]), 1, 1);
	StringCopy(&cVar2, sVar1, 32);
	StringConCat(&cVar2, "react_", 32);
	StringConCat(&cVar2, "nuetral_01", 32);
	if (unk_0xB4ECF989E2C1DAC8(iVar0, func_119(0), &cVar2, 3))
	{
		if (unk_0x8CA9406E01C7EE58(iVar0, func_119(0), &cVar2) > 0,95f)
		{
			return 0;
		}
	}
	if (bParam2)
	{
		if (!unk_0xB4ECF989E2C1DAC8(iVar0, func_119(0), &cVar2, 3) && (((unk_0xB4ECF989E2C1DAC8(iVar0, func_119(0), "iron_swing_action", 3) || unk_0xB4ECF989E2C1DAC8(iVar0, func_119(0), "putt_action", 3)) || unk_0xB4ECF989E2C1DAC8(iVar0, func_119(0), "wedge_swing_action", 3)) || unk_0xB4ECF989E2C1DAC8(iVar0, func_119(0), "wood_swing_action", 3)))
		{
			unk_0xC6EB89C59F2AF6B8(iVar0, func_119(0), &cVar2, 8f, -2f, -1, 0, 0, 0, 0, 0);
		}
		return 1;
	}
	return 0;
}

var func_119(bool bParam0)
{
	return func_337();
	if (!bParam0)
	{
		return func_337();
	}
	return func_120();
}

char* func_120()
{
	return "MINI@GOLF";
}

char* func_121(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	iVar0 = func_123(uParam1);
	iVar1 = func_122(uParam0, iVar0);
	if (iVar1 <= 5 && !bParam2)
	{
		return "Wood_";
	}
	else if ((iVar1 > 5 && iVar1 <= 13) && !bParam2)
	{
		return "Iron_";
	}
	else if ((iVar1 > 13 && iVar1 <= 18) && iParam3)
	{
		return "Wedge_";
	}
	else if (iVar1 == 19)
	{
		return "Putt_";
	}
	if (bParam2)
	{
		return "Swing_";
	}
	return "";
}

int func_122(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_15)
	{
		return 1;
	}
	return (*uParam0)[iParam1];
}

int func_123(var uParam0)
{
	return uParam0->f_17;
}

int func_124(int iParam0, float fParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		StringCopy(&cVar0, "Wood_swing_action", 32);
		StringCopy(&cVar8, "Iron_swing_action", 32);
		StringCopy(&cVar16, "Wedge_swing_action", 32);
		StringCopy(&cVar24, "Putt_action", 32);
		if (unk_0xB4ECF989E2C1DAC8(iParam0, func_119(0), &cVar0, 3))
		{
			if (unk_0x8CA9406E01C7EE58(iParam0, func_119(0), &cVar0) >= fParam1)
			{
				return 1;
			}
		}
		else if (unk_0xB4ECF989E2C1DAC8(iParam0, func_119(0), &cVar8, 3))
		{
			if (unk_0x8CA9406E01C7EE58(iParam0, func_119(0), &cVar8) >= fParam1)
			{
				return 1;
			}
		}
		else if (unk_0xB4ECF989E2C1DAC8(iParam0, func_119(0), &cVar16, 3))
		{
			if (unk_0x8CA9406E01C7EE58(iParam0, func_119(0), &cVar16) >= fParam1)
			{
				return 1;
			}
		}
		else if (unk_0xB4ECF989E2C1DAC8(iParam0, func_119(0), &cVar24, 3))
		{
			if (unk_0x8CA9406E01C7EE58(iParam0, func_119(0), &cVar24) >= fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_125(var uParam0, int iParam1)
{
	uParam0->f_22 = (uParam0->f_22 || iParam1);
}

int func_126(var uParam0, var uParam1, var uParam2)
{
	func_202(func_250(uParam2), 0);
	unk_0xD0C5FAC38659B26F(func_250(uParam2), 1);
	unk_0x6662F466071F8128(func_250(uParam2), -1f, -1f, 0f, 0f, 0,01f, -1f, -1f, -1f, -1f, -1f, -1082130432);
	bVar0 = func_85(uParam2) == 4;
	fVar1 = func_142(&(uParam2->f_15[func_270(uParam2)]), uParam0, &(uParam2->f_1), bVar0, !bLocal_299, 0);
	fVar2 = 1f;
	switch (func_35(uParam2))
	{
		case 2:
			fVar2 = 0,95f;
			break;
		
		case 4:
		case 1:
			fVar2 = func_141(0,9f, 0,075f);
			break;
		
		case 0:
		case 7:
		case -1:
			fVar2 = func_141(0,85f, 0,15f);
			if (fVar2 > 0,85f)
			{
				fVar2 = 0,85f;
			}
			break;
	}
	fVar1 = (fVar1 * fVar2);
	if (func_85(uParam2) == 4 && func_122(uParam0, func_140(uParam2)) == 17)
	{
		fVar1 = (fVar1 * 0,85f);
	}
	fVar3 = (func_139(uParam0, func_140(uParam2)) / 90f);
	fVar3 = (fVar3 + 0,05f);
	fVar4 = func_116(uParam2);
	fVar5 = func_138(uParam0, func_140(uParam2));
	if (func_136(uParam2) == 2)
	{
		fVar3 = (func_139(uParam0, func_140(uParam2)) / 150f);
	}
	switch (uParam2->f_1)
	{
		case 4:
			fVar4 = func_116(uParam2);
			if (bVar0 && !func_194(uParam2))
			{
				fVar4 = (func_248(func_90(uParam2), func_19(uParam2)) + 90f);
			}
			if (func_35(uParam2) == 0 && func_140(uParam2) != func_135(uParam0, 16))
			{
				fVar4 = (fVar4 + (25f * unk_0x79833B02DBD2A244(-1f, 1f)));
			}
			if (!bVar0)
			{
				uParam2->f_1.f_5 = 0f;
				uParam2->f_1.f_6 = (45f * uParam2->f_1.f_4);
			}
			if (func_136(uParam2) == 1)
			{
				fVar4 = (fVar4 + func_141(0f, 5f));
				uParam2->f_1.f_5 = (uParam2->f_1.f_5 * 2f);
				uParam2->f_1.f_6 = (uParam2->f_1.f_6 * 2f);
			}
			break;
		
		case 6:
			if (!func_194(uParam2))
			{
				fVar1 = (fVar1 * unk_0x79833B02DBD2A244(0,15f, 0,25f));
				fVar3 = (fVar3 * unk_0x79833B02DBD2A244(0,25f, 1,25f));
			}
			if (uParam2->f_1.f_7 < 0)
			{
				fVar4 = (func_116(uParam2) + (90f * unk_0x79833B02DBD2A244(0f, 1f)));
				uParam2->f_1.f_5 = (unk_0x79833B02DBD2A244(0f, 20f) * fVar5);
			}
			else
			{
				fVar4 = (func_116(uParam2) + (90f * unk_0x79833B02DBD2A244(-1f, 0f)));
				uParam2->f_1.f_5 = (unk_0x79833B02DBD2A244(-20f, 0f) * fVar5);
			}
			uParam2->f_1.f_6 = (unk_0x79833B02DBD2A244(-20f, 20f) * fVar5);
			break;
		
		default:
			break;
	}
	if (func_194(uParam2))
	{
		vVar6 = { (cos(fVar4) * fVar1), (sin(fVar4) * fVar1), 0f };
	}
	else
	{
		fVar21 = (1f - fVar3);
		fVar22 = ((2f * fVar21) - (fVar21 * fVar21));
		fVar23 = ((2f * fVar3) - (fVar3 * fVar3));
		vVar9 = { func_132(func_85(uParam2) == 4, 0f, 0f, 1f, -func_133(uParam2)) };
		vVar12 = { func_6(cos(fVar4), sin(fVar4), 0f) };
		vVar15 = { -func_6(vVar12 - FtoV(func_8(vVar12, vVar9)) * vVar9) };
		vVar18 = { func_6(-vVar12 * Vector(fVar22, fVar22, fVar22) + vVar9 * Vector(fVar23, fVar23, fVar23)) };
		vVar24 = { func_6(vVar15 * Vector(fVar22, fVar22, fVar22) + vVar9 * Vector(fVar23, fVar23, fVar23)) };
		fVar27 = func_8(vVar12, func_6(vVar24.x, vVar24.y, 0f));
		fVar28 = func_27(((vVar12.x * vVar24.y) - (vVar12.y * vVar24.x)) < 0f, -1f, 1f);
		if (unk_0x755FF954DAE327E1(fVar27) < cos(15f))
		{
			vVar24 = { func_131(vVar24, (fVar28 * (unk_0x3DCA5D50DD292443(unk_0x755FF954DAE327E1(fVar27)) - 15f))) };
		}
		vVar18.y = ((vVar24.y / unk_0x755FF954DAE327E1(vVar24.y)) * sqrt(unk_0x755FF954DAE327E1((((vVar18.z * vVar18.z) - 1f) / (((vVar24.x * vVar24.x) / (vVar24.y * vVar24.y)) + 1f)))));
		vVar18.x = ((vVar24.x * vVar18.y) / vVar24.y);
		vVar6 = { FtoV((-1f * fVar1)) * vVar18 };
	}
	if (bLocal_0)
	{
		if (func_130(vVar6, 0f, 0f, 0f, 0,001f, 0))
		{
			if (bLocal_0)
			{
			}
			return 0;
		}
	}
	if (func_35(uParam2) == 3 && !func_194(uParam2))
	{
		func_59(uParam2, 0f, 0f, 0f, 2);
	}
	unk_0x37806EBF326ECEE9(func_250(uParam2), vVar6);
	unk_0x6D7271D7307DB70C(func_250(uParam2), 150f);
	func_125(uParam0, 32);
	func_129(uParam0, uParam2, 0, func_279(uParam0, 16), uParam2->f_1.f_2 < 50f);
	func_127(uParam2, uParam1, uParam0);
	func_65(uParam2, 4);
	if (!func_172(uParam1, uParam2))
	{
		func_74(uParam2, 1024);
	}
	func_189(&(uParam2->f_162));
	if (func_110(uParam2))
	{
		if (!func_172(uParam1, uParam2))
		{
			unk_0x5E858A00EAFA5B24(0, 100, 256);
		}
	}
	return 1;
}

void func_127(var uParam0, var uParam1, var uParam2)
{
	return;
	sVar0 = "";
	switch (func_35(uParam0))
	{
		case 2:
			if (unk_0x755FF954DAE327E1(uParam0->f_1.f_4) < 10f)
			{
				sVar0 = "scr_golf_strike_fairway";
			}
			else
			{
				sVar0 = "scr_golf_strike_fairway_bad";
			}
			break;
		
		case 4:
			sVar0 = "scr_golf_strike_thick_grass";
			break;
		
		case 0:
			sVar0 = "scr_golf_strike_bunker";
			break;
		
		case 3:
			break;
		
		case 5:
			if (uParam0->f_1 != 6 && func_31(uParam1, func_313(uParam0)) > 3)
			{
				sVar0 = "scr_golf_tee_perfect";
			}
			break;
		
		case 1:
		case 7:
		case -1:
			break;
	}
	func_128(uParam0, func_279(uParam2, 16));
	if (!func_107(sVar0))
	{
		unk_0xBA3209FB359D3EA4(sVar0, func_19(uParam0), 0f, 0f, func_116(uParam0), 1065353216, 0, 0, 0);
	}
}

void func_128(var uParam0, bool bParam1)
{
	return;
	if (!func_194(uParam0) && unk_0xC844350D5D58C99A(func_250(uParam0)))
	{
		iVar0 = unk_0xC1879030EB463216("scr_golf_ball_trail", func_250(uParam0), 0f, 0f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
		if (bParam1)
		{
			unk_0x02D205CBD211ED4F(iVar0, (240f / 255f), (200f / 255f), (80f / 255f), 0);
		}
	}
}

void func_129(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	sVar0 = "";
	if (func_275(uParam1, 1048576))
	{
		return;
	}
	switch (func_122(uParam0, func_140(uParam1)))
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			switch (func_35(uParam1))
			{
				case 2:
					if (bParam4)
					{
						sVar0 = "GOLF_SWING_GRASS_LIGHT_MASTER";
					}
					else if (bParam3)
					{
						sVar0 = "GOLF_SWING_GRASS_PERFECT_MASTER";
					}
					else
					{
						sVar0 = "GOLF_SWING_GRASS_MASTER";
					}
					break;
				
				case 5:
					if (bParam4)
					{
						sVar0 = "GOLF_SWING_TEE_LIGHT_MASTER";
					}
					else if (bParam3)
					{
						sVar0 = "GOLF_SWING_TEE_PERFECT_MASTER";
					}
					else
					{
						sVar0 = "GOLF_SWING_TEE_MASTER";
					}
					break;
				
				default:
					if (func_35(uParam1) == 3)
					{
					}
					else if (func_35(uParam1) == -1)
					{
					}
					else if (func_35(uParam1) == 7)
					{
					}
					else if (func_35(uParam1) == 8)
					{
					}
					else if (func_35(uParam1) == 0)
					{
					}
					else if (func_35(uParam1) == 1)
					{
					}
					else if (func_35(uParam1) == 4)
					{
					}
					break;
			}
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			switch (func_35(uParam1))
			{
				case 5:
					if (bParam4)
					{
						sVar0 = "GOLF_SWING_TEE_IRON_LIGHT_MASTER";
					}
					else if (bParam3)
					{
						sVar0 = "GOLF_SWING_TEE_IRON_PERFECT_MASTER";
					}
					else
					{
						sVar0 = "GOLF_SWING_TEE_IRON_MASTER";
					}
					break;
				
				case 2:
					if (bParam4)
					{
						sVar0 = "GOLF_SWING_FAIRWAY_IRON_LIGHT_MASTER";
					}
					else if (bParam3)
					{
						sVar0 = "GOLF_SWING_FAIRWAY_IRON_PERFECT_MASTER";
					}
					else
					{
						sVar0 = "GOLF_SWING_FAIRWAY_IRON_MASTER";
					}
					break;
				
				case 4:
					if (bParam4)
					{
						sVar0 = "GOLF_SWING_ROUGH_IRON_LIGHT_MASTER";
					}
					else if (bParam3)
					{
						sVar0 = "GOLF_SWING_ROUGH_IRON_PERFECT_MASTER";
					}
					else
					{
						sVar0 = "GOLF_SWING_ROUGH_IRON_MASTER";
					}
					break;
				
				case 0:
					if (bParam4)
					{
						sVar0 = "GOLF_SWING_SAND_IRON_LIGHT_MASTER";
					}
					else if (bParam3)
					{
						sVar0 = "GOLF_SWING_SAND_IRON_PERFECT_MASTER";
					}
					else
					{
						sVar0 = "GOLF_SWING_SAND_IRON_MASTER";
					}
					break;
				
				case 1:
					sVar0 = "GOLF_SWING_TEE_IRON_MASTER";
					break;
				
				default:
					if (func_35(uParam1) == 3)
					{
					}
					else if (func_35(uParam1) == -1)
					{
					}
					else if (func_35(uParam1) == 7)
					{
					}
					else if (func_35(uParam1) == 8)
					{
					}
					break;
			}
			break;
		
		case 15:
		case 17:
		case 18:
		case 14:
		case 16:
			switch (func_35(uParam1))
			{
				case 5:
				case 2:
				case 3:
					if (bParam4)
					{
						sVar0 = "GOLF_SWING_CHIP_LIGHT_MASTER";
					}
					else if (bParam3)
					{
						sVar0 = "GOLF_SWING_CHIP_PERFECT_MASTER";
					}
					else
					{
						sVar0 = "GOLF_SWING_CHIP_MASTER";
					}
					break;
				
				case 4:
					if (bParam4)
					{
						sVar0 = "GOLF_SWING_CHIP_GRASS_LIGHT_MASTER";
					}
					else if (bParam3)
					{
						sVar0 = "GOLF_SWING_CHIP_PERFECT_MASTER";
					}
					else
					{
						sVar0 = "GOLF_SWING_CHIP_GRASS_MASTER";
					}
					break;
				
				case 0:
					if (bParam4)
					{
						sVar0 = "GOLF_SWING_CHIP_SAND_LIGHT_MASTER";
					}
					else if (bParam3)
					{
						sVar0 = "GOLF_SWING_CHIP_SAND_PERFECT_MASTER";
					}
					else
					{
						sVar0 = "GOLF_SWING_CHIP_SAND_MASTER";
					}
					break;
				
				case 1:
					sVar0 = "GOLF_SWING_CHIP_MASTER";
					break;
				
				default:
					break;
			}
			break;
		
		case 19:
			sVar0 = "GOLF_SWING_PUTT_MASTER";
			break;
	}
	if (!func_107(sVar0))
	{
		if (iParam2 || !unk_0xC844350D5D58C99A(func_250(uParam1)))
		{
			unk_0xEB819BD1E585E9CB(-1, sVar0, func_19(uParam1), 0, false, 0, 0);
		}
		else
		{
			unk_0xCEAA091B490F8407(-1, sVar0, func_250(uParam1), 0, false, 0);
		}
	}
}

int func_130(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

Vector3 func_131(vector3 vParam0, float fParam3)
{
	fVar3 = sin(fParam3);
	fVar4 = cos(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.y = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.z = vParam0.z;
	return vVar0;
}

Vector3 func_132(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (bParam0)
	{
		return vParam1;
	}
	return vParam4;
}

Vector3 func_133(var uParam0)
{
	return func_134(&(uParam0->f_15[uParam0->f_157]));
}

Vector3 func_134(var uParam0)
{
	return uParam0->f_25;
}

int func_135(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_15)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_136(var uParam0)
{
	return func_137(&(uParam0->f_15[uParam0->f_157]));
}

int func_137(var uParam0)
{
	return uParam0->f_19;
}

float func_138(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_15)
	{
		return 0f;
	}
	switch ((*uParam0)[iParam1])
	{
		case 1:
			return 0,25f;
			break;
		
		case 2:
			return 0,25f;
			break;
		
		case 3:
			return 0,25f;
			break;
		
		case 4:
			return 0,25f;
			break;
		
		case 5:
			return 0,25f;
			break;
		
		case 6:
			return 0,5f;
			break;
		
		case 7:
			return 0,5f;
			break;
		
		case 8:
			return 0,5f;
			break;
		
		case 9:
			return 0,6f;
			break;
		
		case 10:
			return 0,6f;
			break;
		
		case 11:
			return 0,7f;
			break;
		
		case 12:
			return 0,7f;
			break;
		
		case 13:
			return 0,8f;
			break;
		
		case 14:
			return 1f;
			break;
		
		case 15:
			return 1f;
			break;
		
		case 16:
			return 1f;
			break;
		
		case 17:
			return 1f;
			break;
		
		case 18:
			return 1f;
			break;
		
		case 19:
			return 0,1f;
			break;
	}
	return 0f;
}

float func_139(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_15)
	{
		return 0f;
	}
	switch ((*uParam0)[iParam1])
	{
		case 1:
			return 13,5f;
			break;
		
		case 2:
			return 13,75f;
			break;
		
		case 3:
			return 16f;
			break;
		
		case 4:
			return 18f;
			break;
		
		case 5:
			return 21f;
			break;
		
		case 6:
			return 17f;
			break;
		
		case 7:
			return 20f;
			break;
		
		case 8:
			return 23f;
			break;
		
		case 9:
			return 26f;
			break;
		
		case 10:
			return 29f;
			break;
		
		case 11:
			return 30f;
			break;
		
		case 12:
			return 37f;
			break;
		
		case 13:
			return 41f;
			break;
		
		case 14:
			return 45f;
			break;
		
		case 15:
			return 50f;
			break;
		
		case 16:
			return 55f;
			break;
		
		case 17:
			return 60f;
			break;
		
		case 18:
			return 64f;
			break;
		
		case 19:
			return 5f;
			break;
	}
	return 0f;
}

int func_140(var uParam0)
{
	return func_123(&(uParam0->f_15[uParam0->f_157]));
}

float func_141(float fParam0, float fParam1)
{
	fVar0 = sin(unk_0x79833B02DBD2A244(-180f, 180f));
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 1f);
	}
	else
	{
		fVar0 = (fVar0 - 1f);
	}
	return (fParam0 + (fVar0 * fParam1));
}

float func_142(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	fVar0 = uParam2->f_3;
	if (bParam5)
	{
		fVar0 = 100f;
	}
	else if (!bParam4)
	{
		fVar0 = func_145(uParam0, 1);
	}
	switch (func_137(uParam0))
	{
		case 0:
			fVar1 = 0,5575f;
			fVar2 = 0f;
			break;
		
		case 1:
			fVar1 = 0,575f;
			fVar2 = (15f * (1f - sqrt((fVar0 / 100f))));
			break;
		
		case 3:
			fVar1 = 0,5075f;
			fVar2 = func_27(fVar0 > 25f, 25f, 15f);
			fVar2 = (fVar2 * (1f - sqrt((fVar0 / 100f))));
			break;
		
		case 2:
			fVar1 = 0,558f;
			fVar2 = (15f * (1f - sqrt((fVar0 / 100f))));
			break;
		
		case 5:
			fVar1 = 0,53f;
			fVar1 = (fVar1 * (1f + (1f - sqrt((fVar0 / 100f)))));
			if (fVar0 <= 63f)
			{
				fVar1 = (fVar1 * 1,02f);
			}
			if (fVar0 <= 55f)
			{
				fVar1 = (fVar1 * 1,04f);
			}
			if (fVar0 <= 46f)
			{
				fVar1 = (fVar1 * 1,038f);
			}
			if (fVar0 <= 38f)
			{
				fVar1 = (fVar1 * 1,04f);
			}
			if (fVar0 <= 34f)
			{
				fVar1 = (fVar1 * 1,045f);
			}
			if (fVar0 <= 28f)
			{
				fVar1 = (fVar1 * 1,045f);
			}
			fVar2 = 0,1f;
			break;
		
		case 7:
			return -1f;
			break;
		
		case 4:
			fVar1 = 0,36f;
			fVar1 = (fVar1 * (1f + (1f - sqrt((fVar0 / 100f)))));
			if (fVar0 <= 62f)
			{
				fVar1 = (fVar1 * 1,035f);
			}
			else if (fVar0 <= 75f)
			{
				fVar1 = (fVar1 * 1,015f);
			}
			if (fVar0 <= 49f)
			{
				fVar1 = (fVar1 * 1,035f);
			}
			else if (fVar0 <= 58f)
			{
				fVar1 = (fVar1 * 1,025f);
			}
			if (fVar0 <= 39f)
			{
				fVar1 = (fVar1 * 1,075f);
			}
			else if (fVar0 <= 43f)
			{
				fVar1 = (fVar1 * 1,055f);
			}
			if (fVar0 <= 30f)
			{
				fVar1 = (fVar1 * 1,075f);
			}
			fVar2 = 0,1f;
			break;
		
		case 6:
			fVar1 = 0,79f;
			fVar1 = (fVar1 * (1f + (1f - sqrt((fVar0 / 100f)))));
			if (fVar0 < 65f)
			{
				fVar1 = (fVar1 * 1,015f);
			}
			if (fVar0 < 56f)
			{
				fVar1 = (fVar1 * 1,01f);
			}
			if (fVar0 < 51f)
			{
				fVar1 = (fVar1 * 1,02f);
			}
			if (fVar0 < 45f)
			{
				fVar1 = (fVar1 * 1,02f);
			}
			if (fVar0 < 35f)
			{
				fVar1 = (fVar1 * 1,07f);
			}
			if (fVar0 < 25f)
			{
				fVar1 = (fVar1 * 1,1f);
			}
			fVar2 = 0,1f;
			break;
	}
	if (!bParam3)
	{
		fVar2 = 0f;
	}
	fVar3 = (-1f * (((((fVar0 / 100f) * func_144(uParam1, func_123(uParam0))) * func_143(func_28(uParam0))) * fVar1) + fVar2));
	return fVar3;
}

float func_143(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 5:
			return 1f;
			break;
		
		case 4:
		case 1:
			return 0,95f;
			break;
		
		case 0:
		case 7:
		case -1:
			return 0,75f;
			break;
		
		case 3:
			return 1f;
			break;
		
		default:
			return 1f;
			break;
	}
	return 1f;
}

float func_144(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_15)
	{
		return 0f;
	}
	switch ((*uParam0)[iParam1])
	{
		case 1:
			return (220f / 1,85f);
			break;
		
		case 2:
			return (210f / 1,85f);
			break;
		
		case 3:
			return (200f / 1,85f);
			break;
		
		case 4:
			return (190f / 1,85f);
			break;
		
		case 5:
			return (180f / 1,85f);
			break;
		
		case 6:
			return (180f / 1,85f);
			break;
		
		case 7:
			return (170f / 1,85f);
			break;
		
		case 8:
			return (160f / 1,85f);
			break;
		
		case 9:
			return (150f / 1,85f);
			break;
		
		case 10:
			return (140f / 1,85f);
			break;
		
		case 11:
			return (130f / 1,85f);
			break;
		
		case 12:
			return (120f / 1,85f);
			break;
		
		case 13:
			return (110f / 1,85f);
			break;
		
		case 14:
			return (100f / 1,85f);
			break;
		
		case 15:
			return (85f / 1,85f);
			break;
		
		case 16:
			return (75f / 1,85f);
			break;
		
		case 17:
			return (65f / 1,85f);
			break;
		
		case 18:
			return (40f / 1,85f);
			break;
		
		case 19:
			return (30f / 1,85f);
			break;
	}
	return 0f;
}

float func_145(var uParam0, int iParam1)
{
	fVar0 = uParam0->f_15;
	if (iParam1 && (func_24(uParam0) == 1 || func_24(uParam0) == 2))
	{
		fVar0 = (fVar0 - (func_146() * 10f));
		fVar0 = func_27(fVar0 < 5f, 5f, fVar0);
	}
	return fVar0;
}

float func_146()
{
	unk_0x6FB46C25CCB7E6D5(func_147(func_149(), 2), &iVar0, -1);
	fVar1 = (IntToFloat(iVar0) / 100f);
	fVar1 = (1f - fVar1);
	return fVar1;
}

var func_147(int iParam0, int iParam1)
{
	func_148(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_148(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 1322098561;
					break;
				
				case 1:
					*uParam2 = 583576226;
					break;
				
				case 3:
					*uParam2 = 1939246781;
					break;
				
				case 2:
					*uParam2 = -1872025703;
					break;
				
				case 4:
					*uParam2 = 297038448;
					break;
				
				case 5:
					*uParam2 = 2024531174;
					break;
				
				case 6:
					*uParam2 = -1266079991;
					break;
				
				case 7:
					*uParam2 = 577288081;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 1372388259;
					break;
				
				case 1:
					*uParam2 = 626982837;
					break;
				
				case 3:
					*uParam2 = 1815853850;
					break;
				
				case 2:
					*uParam2 = -1205308189;
					break;
				
				case 4:
					*uParam2 = 2111310536;
					break;
				
				case 5:
					*uParam2 = -376705475;
					break;
				
				case 6:
					*uParam2 = -886696809;
					break;
				
				case 7:
					*uParam2 = -412283869;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 95446082;
					break;
				
				case 1:
					*uParam2 = 2105689774;
					break;
				
				case 3:
					*uParam2 = 2123663283;
					break;
				
				case 2:
					*uParam2 = 1327096153;
					break;
				
				case 4:
					*uParam2 = 1810848047;
					break;
				
				case 5:
					*uParam2 = 2010093328;
					break;
				
				case 6:
					*uParam2 = 708474090;
					break;
				
				case 7:
					*uParam2 = -801407253;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

int func_149()
{
	func_150();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_150()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_154(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_153(unk_0x16F2683693E537C9());
			if (func_152(iVar0) && (!func_151(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_152(Global_111638.f_2358.f_539.f_4321))
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

bool func_151(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_152(int iParam0)
{
	return iParam0 < 3;
}

int func_153(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_154(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_154(int iParam0)
{
	if (func_152(iParam0))
	{
		return func_155(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_155(int iParam0)
{
	return Global_1798[iParam0];
}

int func_156(int iParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		StringCopy(&cVar0, "Wood_swing_action", 32);
		StringCopy(&cVar8, "Iron_swing_action", 32);
		StringCopy(&cVar16, "Wedge_swing_action", 32);
		StringCopy(&cVar24, "Putt_action", 32);
		if (unk_0xB4ECF989E2C1DAC8(iParam0, func_119(0), &cVar0, 3))
		{
			if (unk_0x8CA9406E01C7EE58(iParam0, func_119(0), &cVar0) > 0,16f)
			{
				return 1;
			}
		}
		else if (unk_0xB4ECF989E2C1DAC8(iParam0, func_119(0), &cVar8, 3))
		{
			if (unk_0x8CA9406E01C7EE58(iParam0, func_119(0), &cVar8) > 0,134f)
			{
				return 1;
			}
		}
		else if (unk_0xB4ECF989E2C1DAC8(iParam0, func_119(0), &cVar16, 3))
		{
			if (unk_0x8CA9406E01C7EE58(iParam0, func_119(0), &cVar16) > 0,119f)
			{
				return 1;
			}
		}
		else if (unk_0xB4ECF989E2C1DAC8(iParam0, func_119(0), &cVar24, 3))
		{
			if (unk_0x8CA9406E01C7EE58(iParam0, func_119(0), &cVar24) > 0,159f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_157(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	iVar0 = 1000;
	if (func_275(uParam0, 256))
	{
		iVar0 = 450;
	}
	bVar1 = func_275(uParam0, 131072);
	fVar2 = 0f;
	fVar3 = func_27(bVar1, 2f, 1f);
	if (uParam2->f_12 > 0)
	{
		uParam2->f_12 = (uParam2->f_12 + floor((unk_0x6117725E0134737F() * 1000f)));
	}
	if ((uParam2->f_11 == 0 && !func_275(uParam0, 1048576)) || func_167(uParam0) == 0)
	{
		func_187(uParam0, 1);
		uParam2->f_11 = unk_0x1C0640BA9A7327B3();
		uParam2->f_12 = uParam2->f_11;
		func_189(&(uParam0->f_162));
		func_166(uParam0);
		*uParam2 = 1;
	}
	else if (((((uParam2->f_11 + iVar0) < uParam2->f_12 || uParam2->f_10 != 0) && *uParam2 != 4) && *uParam2 != 6) || func_275(uParam0, 1048576))
	{
		func_187(uParam0, 4);
		*uParam2 = 4;
		if (bParam3)
		{
			uParam2->f_4 = func_141(0f, func_27(bParam4, 5f, 0f));
			uParam2->f_3 = func_165(uParam0, 0);
		}
		else
		{
			uParam2->f_4 = func_141(0f, fVar2);
			uParam2->f_3 = (func_141(func_165(uParam0, 0), 20f) / fVar3);
			if (uParam2->f_3 < 15f)
			{
				uParam2->f_3 = 15f;
			}
		}
		if (((func_136(uParam0) == 4 || func_136(uParam0) == 7) || func_136(uParam0) == 6) || func_136(uParam0) == 5)
		{
		}
		else
		{
			func_162(uParam0, uParam1, 0, 1f);
		}
		if (func_275(uParam0, 1048576))
		{
			func_160(uParam0, uParam2->f_3);
			func_158(uParam0, uParam2->f_4);
		}
	}
}

void func_158(var uParam0, float fParam1)
{
	func_159(&(uParam0->f_15[uParam0->f_157]), fParam1);
}

void func_159(var uParam0, float fParam1)
{
	uParam0->f_14 = (uParam0->f_14 + fParam1);
}

void func_160(var uParam0, float fParam1)
{
	if (fParam1 > 100f)
	{
		fParam1 = 100f;
	}
	else if (fParam1 < 5f)
	{
		fParam1 = 5f;
	}
	func_161(&(uParam0->f_15[uParam0->f_157]), fParam1);
}

void func_161(var uParam0, float fParam1)
{
	uParam0->f_15 = fParam1;
}

void func_162(var uParam0, var uParam1, int iParam2, float fParam3)
{
	iParam2 = iParam2;
	fParam3 = fParam3;
	switch (func_136(uParam0))
	{
		case 0:
		case 1:
		case 3:
		case 2:
			unk_0xCEAA091B490F8407(-1, "GOLF_FORWARD_SWING_HARD_MASTER", func_163(uParam0), 0, false, 0);
			break;
		
		case 4:
		case 5:
		case 6:
		case 7:
			break;
	}
}

var func_163(var uParam0)
{
	return func_164(&(uParam0->f_15[uParam0->f_157]));
}

var func_164(var uParam0)
{
	return uParam0->f_4;
}

float func_165(var uParam0, int iParam1)
{
	return func_145(&(uParam0->f_15[uParam0->f_157]), iParam1);
}

void func_166(var uParam0)
{
	switch (func_136(uParam0))
	{
		case 0:
		case 1:
			unk_0xCEAA091B490F8407(-1, "GOLF_BACK_SWING_HARD_MASTER", func_163(uParam0), 0, false, 0);
			break;
		
		case 3:
		case 2:
			unk_0xCEAA091B490F8407(-1, "GOLF_BACK_SWING_HARD_MASTER", func_163(uParam0), 0, false, 0);
			break;
		
		case 4:
		case 5:
		case 6:
		case 7:
			unk_0xCEAA091B490F8407(-1, "GOLF_BACK_SWING_HARD_MASTER", func_163(uParam0), 0, false, 0);
			break;
	}
}

int func_167(var uParam0)
{
	return func_168(&(uParam0->f_15[uParam0->f_157]));
}

int func_168(var uParam0)
{
	return uParam0->f_20;
}

void func_169(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_170(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, false) };
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		vVar3 = { unk_0x68F4C0EC296D3901(iParam1, true) };
	}
	else
	{
		vVar3 = { unk_0x68F4C0EC296D3901(iParam1, false) };
	}
	if (bParam2)
	{
		return vdist2(vVar0, vVar3);
	}
	return (pow((vVar0.x - vVar3.x), 2f) + pow((vVar0.y - vVar3.y), 2f));
}

int func_171(var uParam0, float fParam1)
{
	if (func_257(uParam0, fParam1))
	{
		func_169(uParam0);
		return 1;
	}
	return 0;
}

int func_172(var uParam0, var uParam1)
{
	iVar0 = func_250(uParam1);
	if (unk_0xC844350D5D58C99A(func_173(uParam1)) && func_35(uParam1) == 3)
	{
		return 1;
	}
	if (!unk_0xC844350D5D58C99A(iVar0))
	{
		return 0;
	}
	vVar1 = { unk_0x68F4C0EC296D3901(func_250(uParam1), false) };
	if (func_35(uParam1) != 3 && vdist2(vVar1, func_41(uParam0, func_313(uParam1))) > (0,7f * 0,7f))
	{
		return 0;
	}
	if (vdist2(vVar1, func_41(uParam0, func_313(uParam1))) > (55f * 55f))
	{
		return 0;
	}
	return 1;
}

var func_173(var uParam0)
{
	return func_174(&(uParam0->f_15[uParam0->f_157]));
}

var func_174(var uParam0)
{
	return uParam0->f_6;
}

void func_175(var uParam0, var uParam1, var uParam2)
{
	if (func_40(uParam1, 1048576) || func_22(uParam1) == 5)
	{
		return;
	}
	switch (func_137(uParam1))
	{
		case 0:
		case 1:
		case 3:
		case 2:
			func_176(uParam0, uParam1, uParam2);
			break;
		
		case 4:
		case 5:
		case 6:
		case 7:
			func_176(uParam0, uParam1, uParam2);
			break;
	}
}

void func_176(var uParam0, var uParam1, var uParam2)
{
	if (func_186(uParam1))
	{
		func_185(uParam0, uParam1, uParam2);
		return;
	}
	iVar0 = func_299(uParam1);
	fVar1 = 1f;
	fVar2 = 0,1f;
	fVar3 = 0,05f;
	fVar1 = fVar1;
	if (bLocal_0)
	{
	}
	if (!unk_0xEB6A8945D1AC98A1(iVar0))
	{
		sVar6 = func_178(uParam1, uParam0, &uVar5, 0, 0, 0, 0);
		bVar7 = !func_107(sVar6);
		sVar8 = func_121(uParam0, uParam1, 0, 1);
		StringCopy(&cVar9, sVar8, 32);
		StringCopy(&cVar17, sVar8, 32);
		StringCopy(&cVar25, sVar8, 32);
		StringCopy(&cVar33, sVar8, 32);
		StringConCat(&cVar9, "Idle", 32);
		StringConCat(&cVar17, "Swing_Intro", 32);
		StringConCat(&cVar25, "Swing_Action", 32);
		StringConCat(&cVar33, "Swing_idle", 32);
		sVar6 = sVar6;
		bVar7 = bVar7;
		switch (func_168(uParam1))
		{
			case 0:
				if (bLocal_0)
				{
				}
				break;
			
			case 1:
				if (bLocal_0)
				{
				}
				if (!unk_0xB4ECF989E2C1DAC8(iVar0, func_119(0), &cVar17, 3))
				{
					unk_0xC6EB89C59F2AF6B8(iVar0, func_119(0), &cVar17, 8f, -8f, -1, 2, 0, 0, 0, 0);
					if (bLocal_0)
					{
					}
				}
				else
				{
					fVar4 = unk_0x8CA9406E01C7EE58(iVar0, func_119(0), &cVar17);
					if (unk_0x8CA9406E01C7EE58(iVar0, func_119(0), &cVar17) >= 0,975f)
					{
						if (bLocal_0)
						{
						}
						unk_0x8352CA08CF578D18(iVar0, func_119(0), &cVar17, 0f);
						if (uParam2->f_10 == 0)
						{
							uParam2->f_10 = unk_0x1C0640BA9A7327B3();
						}
					}
					else
					{
						unk_0x8352CA08CF578D18(iVar0, func_119(0), &cVar17, 0,6f);
					}
					if (fVar4 < fVar2)
					{
						unk_0x4E6D1F54D3FBC5B1(iVar0, func_119(0), &cVar17, fVar2);
						unk_0x8352CA08CF578D18(iVar0, func_119(0), &cVar17, 0,8f);
					}
				}
				break;
			
			case 3:
				if (bLocal_0)
				{
				}
				StringConCat(&cVar9, "_A", 32);
				if (unk_0xB4ECF989E2C1DAC8(iVar0, func_119(0), &cVar17, 3))
				{
					unk_0x8352CA08CF578D18(iVar0, func_119(0), &cVar17, 0f);
					fVar4 = unk_0x8CA9406E01C7EE58(iVar0, func_119(0), &cVar17);
					if (fVar4 < fVar2)
					{
						unk_0xC6EB89C59F2AF6B8(iVar0, func_119(0), &cVar9, 4f, -8f, -1, 10, 0, 0, 0, 0);
						func_177(uParam1, 0);
					}
					else
					{
						unk_0x4E6D1F54D3FBC5B1(iVar0, func_119(0), &cVar17, (fVar4 - fVar3));
						if (bLocal_0)
						{
						}
					}
				}
				else
				{
					if (!unk_0xB4ECF989E2C1DAC8(iVar0, func_119(0), &cVar9, 3))
					{
						unk_0xC6EB89C59F2AF6B8(iVar0, func_119(0), &cVar9, 4f, -8f, -1, 10, 0, 0, 0, 0);
						if (bLocal_0)
						{
						}
					}
					func_177(uParam1, 0);
				}
				break;
			
			case 4:
				if (bLocal_0)
				{
				}
				if (!unk_0xB4ECF989E2C1DAC8(iVar0, func_119(0), &cVar25, 3))
				{
					if (unk_0xFCCE56DAE67AA889(iVar0, func_119(0), &cVar17, 3))
					{
						unk_0xC6EB89C59F2AF6B8(iVar0, func_119(0), &cVar25, 8f, -8f, -1, 2, 0, 0, 0, 0);
						if (bLocal_0)
						{
						}
					}
					else if (unk_0xB4ECF989E2C1DAC8(iVar0, func_119(0), &cVar17, 3))
					{
						fVar1 = unk_0x8CA9406E01C7EE58(iVar0, func_119(0), &cVar17);
						unk_0xC6EB89C59F2AF6B8(iVar0, func_119(0), &cVar25, 8f, -8f, -1, 2, 0, 0, 0, 0);
						if (bLocal_0)
						{
						}
					}
					else
					{
						func_177(uParam1, 0);
					}
				}
				break;
			}
	}
}

void func_177(var uParam0, int iParam1)
{
	uParam0->f_20 = iParam1;
}

char* func_178(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	return "";
	iVar0 = func_123(uParam0);
	iVar1 = func_122(uParam1, iVar0);
	vVar2 = { unk_0x68F4C0EC296D3901(func_299(uParam0), true) };
	if (bParam3)
	{
		vVar2 = { iParam4, iParam5, iParam6 };
	}
	vVar5 = { func_278(uParam0) };
	fVar8 = 52,25f;
	func_183(iVar1, &fVar8, &fVar9, &fVar10);
	vVar2.z = (vVar2.z + fVar10);
	vVar11 = { unk_0x08D89CE2E20AE305(func_299(uParam0)) };
	vVar14 = { func_6(vVar5 - vVar2) };
	vVar17 = { func_131(vVar11, 90f) };
	vVar20 = { vVar11 };
	func_179(&vVar20, fVar8, vVar17);
	fVar23 = unk_0x3DCA5D50DD292443(func_8(vVar11, vVar14));
	fVar24 = (fVar23 - fVar8);
	vVar25 = { func_6(vVar20) };
	func_179(&vVar25, fVar24, vVar17);
	unk_0x4ADCCF23C40DC113(vVar2, vVar2 + vVar14, 255, 0, 0, 255);
	unk_0x4ADCCF23C40DC113(vVar2, vVar2 + vVar11, 0, 0, 255, 255);
	unk_0x4ADCCF23C40DC113(vVar2, vVar2 + vVar25, 255, 255, 255, 255);
	unk_0x4ADCCF23C40DC113(vVar2, vVar2 + vVar20, 0, 0, 0, 255);
	if (fVar23 < fVar8)
	{
		*uParam2 = (unk_0x755FF954DAE327E1(fVar24) * fVar9);
		if (*uParam2 > 0,9999f)
		{
			*uParam2 = 0,9999f;
		}
		return "_High";
	}
	else
	{
		*uParam2 = (unk_0x755FF954DAE327E1(fVar24) * fVar9);
		if (*uParam2 > 0,9999f)
		{
			*uParam2 = 0,9999f;
		}
		return "_Low";
	}
	*uParam2 = 0f;
	return "_High";
}

void func_179(var uParam0, float fParam1, vector3 vParam2)
{
	vParam2 = { func_6(vParam2) };
	fVar0 = cos(fParam1);
	fVar1 = sin(fParam1);
	*uParam0 = { func_182(*uParam0, vParam2) * Vector(fVar0, fVar0, fVar0) + func_181(vParam2, *uParam0) * Vector(fVar1, fVar1, fVar1) + func_180(*uParam0, vParam2) };
}

Vector3 func_180(vector3 vParam0, vector3 vParam3)
{
	vVar0 = { vParam3 * FtoV(func_8(vParam0, vParam3)) };
	return vVar0;
}

Vector3 func_181(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

Vector3 func_182(vector3 vParam0, vector3 vParam3)
{
	vVar0 = { vParam0 - func_180(vParam0, vParam3) };
	return vVar0;
}

void func_183(int iParam0, float fParam1, var uParam2, var uParam3)
{
	if (func_184())
	{
		if (iParam0 <= 5)
		{
			*fParam1 = 47,24f;
			*uParam2 = 0,2f;
			*uParam3 = 0,09f;
		}
		else if (iParam0 > 5 && iParam0 <= 13)
		{
			*fParam1 = 53,367f;
			*uParam2 = 0,2f;
			*uParam3 = 0f;
		}
		else if (iParam0 > 13 && iParam0 <= 18)
		{
			*fParam1 = 52,199f;
			*uParam2 = 0,2f;
			*uParam3 = -0,07f;
		}
		else
		{
			*fParam1 = 70,53f;
			*uParam2 = 0,35f;
			*uParam3 = 0,5f;
		}
	}
	else if (iParam0 <= 5)
	{
		*fParam1 = 46,23f;
		*uParam2 = 0,2f;
		*uParam3 = 0,09f;
	}
	else if (iParam0 > 5 && iParam0 <= 13)
	{
		*fParam1 = 52,25f;
		*uParam2 = 0,2f;
		*uParam3 = 0f;
	}
	else if (iParam0 > 13 && iParam0 <= 18)
	{
		*fParam1 = 51,91f;
		*uParam2 = 0,15f;
		*uParam3 = -0,07f;
	}
	else
	{
		*fParam1 = 70,53f;
		*uParam2 = 0,35f;
		*uParam3 = 0,5f;
	}
}

int func_184()
{
	return 0;
}

void func_185(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_299(uParam1);
	fVar1 = 1f;
	fVar2 = 0,1f;
	fVar3 = 0,05f;
	fVar1 = fVar1;
	if (bLocal_0)
	{
	}
	if (!unk_0xEB6A8945D1AC98A1(iVar0))
	{
		sVar6 = func_178(uParam1, uParam0, &uVar5, 0, 0, 0, 0);
		bVar7 = !func_107(sVar6);
		sVar8 = func_121(uParam0, uParam1, 0, 1);
		StringCopy(&cVar9, sVar8, 32);
		StringCopy(&cVar17, sVar8, 32);
		StringCopy(&cVar25, sVar8, 32);
		StringConCat(&cVar9, "Idle", 32);
		StringConCat(&cVar17, "Intro", 32);
		StringConCat(&cVar25, "Action", 32);
		sVar6 = sVar6;
		bVar7 = bVar7;
		switch (func_168(uParam1))
		{
			case 0:
				if (bLocal_0)
				{
				}
				break;
			
			case 1:
				if (bLocal_0)
				{
				}
				if (!unk_0xB4ECF989E2C1DAC8(iVar0, func_119(0), &cVar17, 3))
				{
					unk_0xC6EB89C59F2AF6B8(iVar0, func_119(0), &cVar17, 8f, -8f, -1, 2, 0, 0, 0, 0);
					if (bLocal_0)
					{
					}
				}
				else
				{
					fVar4 = unk_0x8CA9406E01C7EE58(iVar0, func_119(0), &cVar17);
					if (unk_0x8CA9406E01C7EE58(iVar0, func_119(0), &cVar17) >= 0,975f)
					{
						if (bLocal_0)
						{
						}
						unk_0x8352CA08CF578D18(iVar0, func_119(0), &cVar17, 0f);
						if (uParam2->f_10 == 0)
						{
							uParam2->f_10 = unk_0x1C0640BA9A7327B3();
						}
					}
					else
					{
						unk_0x8352CA08CF578D18(iVar0, func_119(0), &cVar17, 0,6f);
					}
					if (fVar4 < fVar2)
					{
						unk_0x4E6D1F54D3FBC5B1(iVar0, func_119(0), &cVar17, fVar2);
						unk_0x8352CA08CF578D18(iVar0, func_119(0), &cVar17, 0,8f);
					}
				}
				break;
			
			case 3:
				if (bLocal_0)
				{
				}
				StringConCat(&cVar9, "_a", 32);
				if (unk_0xB4ECF989E2C1DAC8(iVar0, func_119(0), &cVar17, 3))
				{
					unk_0x8352CA08CF578D18(iVar0, func_119(0), &cVar17, 0f);
					fVar4 = unk_0x8CA9406E01C7EE58(iVar0, func_119(0), &cVar17);
					if (fVar4 < fVar2)
					{
						unk_0xC6EB89C59F2AF6B8(iVar0, func_119(0), &cVar9, 4f, -8f, -1, 10, 0, 0, 0, 0);
						func_177(uParam1, 0);
					}
					else
					{
						unk_0x4E6D1F54D3FBC5B1(iVar0, func_119(0), &cVar17, (fVar4 - fVar3));
						if (bLocal_0)
						{
						}
					}
				}
				else
				{
					if (!unk_0xB4ECF989E2C1DAC8(iVar0, func_119(0), &cVar9, 3))
					{
						unk_0xC6EB89C59F2AF6B8(iVar0, func_119(0), &cVar9, 4f, -8f, -1, 10, 0, 0, 0, 0);
						if (bLocal_0)
						{
						}
					}
					func_177(uParam1, 0);
				}
				break;
			
			case 4:
				if (bLocal_0)
				{
				}
				if (!unk_0xB4ECF989E2C1DAC8(iVar0, func_119(0), &cVar25, 3))
				{
					if (unk_0xFCCE56DAE67AA889(iVar0, func_119(0), &cVar17, 3))
					{
						unk_0xC6EB89C59F2AF6B8(iVar0, func_119(0), &cVar25, 8f, -8f, -1, 2, 0, 0, 0, 0);
						if (bLocal_0)
						{
						}
					}
					else if (unk_0xB4ECF989E2C1DAC8(iVar0, func_119(0), &cVar17, 3))
					{
						fVar1 = unk_0x8CA9406E01C7EE58(iVar0, func_119(0), &cVar17);
						unk_0xC6EB89C59F2AF6B8(iVar0, func_119(0), &cVar25, 8f, -8f, -1, 2, 0, 0, 0, 0);
						if (bLocal_0)
						{
						}
					}
					else
					{
						func_177(uParam1, 0);
					}
				}
				break;
			}
	}
}

int func_186(var uParam0)
{
	iVar0 = func_137(uParam0);
	if (((iVar0 == 5 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return 1;
	}
	return 0;
}

void func_187(var uParam0, int iParam1)
{
	func_177(&(uParam0->f_15[uParam0->f_157]), iParam1);
}

int func_188()
{
	return 4;
}

void func_189(int iParam0)
{
	func_190(iParam0, 0f);
}

void func_190(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_191(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_191(bool bParam0)
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

void func_192(var uParam0, int iParam1, var uParam2, bool bParam3, int iParam4)
{
	func_42(uParam0, iParam1, func_265(uParam0, iParam1), uParam2, bParam3, iParam4);
}

int func_193(var uParam0)
{
	if (func_244() || func_194(uParam0))
	{
		if (unk_0xD1960163A3042274(func_64(uParam0), 242628503) == 1)
		{
			if (unk_0x4F1B602325013CC2(func_64(uParam0)) == 2)
			{
				return 1;
			}
		}
	}
	else if (unk_0xD1960163A3042274(func_64(uParam0), 242628503) != 1 && unk_0xD1960163A3042274(func_64(uParam0), 242628503) != 0)
	{
		return 1;
	}
	return 0;
}

int func_194(var uParam0)
{
	iVar0 = func_136(uParam0);
	if (((iVar0 == 5 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return 1;
	}
	return 0;
}

void func_195(var uParam0, vector3 vParam1)
{
	func_49(&(uParam0->f_15[uParam0->f_157]), vParam1);
}

Vector3 func_196(var uParam0, var uParam1)
{
	fVar3 = func_141(0f, 8f);
	fVar4 = func_141(1f, 0,2f);
	if (func_111(uParam0))
	{
		fVar3 = func_141(0f, 4f);
		fVar4 = 1f;
	}
	if (func_275(uParam0, 1048576) || func_85(uParam0) == 4)
	{
		vVar0 = { unk_0x8A5E176FF719A014(func_19(uParam0), (func_116(uParam0) + fVar3), (((-func_144(uParam1, func_140(uParam0)) * func_197(func_136(uParam0))) * func_143(func_28(&(uParam0->f_15[func_270(uParam0)])))) * ((func_165(uParam0, 1) * fVar4) / 100f)), 0f, 0f) };
	}
	else if (func_35(uParam0) != 3)
	{
		vVar0 = { unk_0x8A5E176FF719A014(func_19(uParam0), func_116(uParam0), (((-func_144(uParam1, func_140(uParam0)) * func_197(func_136(uParam0))) * func_143(func_28(&(uParam0->f_15[func_270(uParam0)])))) * (func_165(uParam0, 1) / 100f)), 0f, 0f) };
	}
	else
	{
		vVar0 = { unk_0x8A5E176FF719A014(func_19(uParam0), func_116(uParam0), Vector(-uParam0->f_1.f_1, -uParam0->f_1.f_1, -uParam0->f_1.f_1) * Vector(0f, 0f, (func_165(uParam0, 1) / 100f))) };
	}
	if (unk_0xE82754C349C7B581(vVar0, &uVar5, 0, 0))
	{
		vVar0.z = uVar5;
	}
	else
	{
		vVar0.z = (vVar0.z + 50f);
		if (unk_0xE82754C349C7B581(vVar0, &uVar5, 0, 0))
		{
			vVar0.z = uVar5;
		}
		else
		{
			vVar6 = { func_19(uParam0) };
			vVar0.z = vVar6.z;
		}
	}
	return vVar0;
}

float func_197(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1f;
			break;
		
		case 3:
			return (0,5075f / 0,5575f);
			break;
		
		case 2:
			return (0,558f / 0,5575f);
			break;
		
		case 5:
			return (0,53f / 0,5575f);
			break;
		
		case 7:
		case 4:
			return (0,36f / 0,5575f);
			break;
		
		case 6:
			return (0,79f / 0,5575f);
			break;
		
		case 1:
			return (0,575f / 0,5575f);
			break;
	}
	return 1f;
}

void func_198(var uParam0, var uParam1, var uParam2)
{
	fVar0 = func_37(uParam1);
	fVar1 = uParam0->f_1;
	fVar2 = ((100f * fVar0) / fVar1);
	iVar3 = func_122(uParam2, func_123(uParam1));
	if (iVar3 == 17 || iVar3 == 16)
	{
		fVar4 = (fVar0 / fVar1);
		fVar5 = (1f - fVar4);
		if (iVar3 == 16)
		{
			fVar6 = 2,5f;
		}
		else if (func_24(uParam1) != 4)
		{
			if (fVar2 > 40f)
			{
				fVar6 = 1,5f;
			}
			else if (fVar2 > 30f)
			{
				fVar6 = 2f;
			}
			else
			{
				fVar6 = 2,5f;
			}
		}
		fVar7 = (((fVar6 * fVar5) * fVar5) + 1f);
		fVar4 = (fVar4 * fVar7);
		fVar2 = (fVar4 * 100f);
	}
	else if (iVar3 == 19 && func_24(uParam1) != 4)
	{
		fVar2 = (fVar2 + (func_146() * 10f));
	}
	func_161(uParam1, fVar2);
	if (func_145(uParam1, 0) > 100f)
	{
		func_161(uParam1, 100f);
	}
	else if (func_145(uParam1, 0) < 5f)
	{
		func_161(uParam1, 5f);
	}
}

void func_199(var uParam0, var uParam1, var uParam2)
{
	if (!func_172(uParam1, uParam2) && !func_194(uParam2))
	{
		uParam2->f_1.f_1 = func_200(uParam2, uParam0);
	}
	else if (func_136(uParam2) == 4)
	{
		uParam2->f_1.f_1 = 5f;
	}
	else if (func_136(uParam2) == 5 || func_136(uParam2) == 7)
	{
		uParam2->f_1.f_1 = 10f;
	}
	else
	{
		uParam2->f_1.f_1 = 20f;
	}
}

float func_200(var uParam0, var uParam1)
{
	fVar0 = func_201(uParam1, func_140(uParam0));
	return fVar0;
}

float func_201(var uParam0, int iParam1)
{
	switch ((*uParam0)[iParam1])
	{
		case 1:
			return 105,8f;
			break;
		
		case 3:
			return 100,5f;
			break;
		
		case 5:
			return 97,3f;
			break;
		
		case 7:
			return 90,2f;
			break;
		
		case 8:
			return 87f;
			break;
		
		case 9:
			return 83f;
			break;
		
		case 10:
			return 79,9f;
			break;
		
		case 11:
			return 73,5f;
			break;
		
		case 12:
			return 68f;
			break;
		
		case 13:
			return 59,1f;
			break;
		
		case 14:
			return 52,5f;
			break;
		
		case 16:
			return 30,9f;
			break;
		
		case 17:
			return 21,8f;
			break;
		
		default:
			break;
	}
	return 0f;
}

void func_202(int iParam0, bool bParam1)
{
	unk_0x1E9649458B15960F(iParam0, bParam1);
}

void func_203(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (bParam5)
	{
		vVar0 = { func_249(uParam0, func_313(uParam1)) };
	}
	else
	{
		vVar0 = { func_41(uParam0, func_313(uParam1)) };
	}
	iVar3 = (func_248(vVar0, func_19(uParam1)) + 90f);
	func_204(&(uParam1->f_15[func_270(uParam1)]), uParam2, iVar3, 0, iParam3, iParam4, iParam6, bParam7);
}

void func_204(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	if (func_24(uParam0) == 4)
	{
		unk_0x93D47DFD0AE94949(func_299(uParam0), -1);
	}
	else
	{
		iParam5 = 1;
	}
	iVar0 = func_122(uParam1, func_123(uParam0));
	func_261(uParam0, 134217728);
	func_230(uParam0, iParam2);
	vVar1 = { unk_0x8A5E176FF719A014(func_278(uParam0), func_117(uParam0), func_229(iVar0)) };
	vVar4 = { unk_0x68F4C0EC296D3901(func_299(uParam0), true) };
	if (bParam3)
	{
		unk_0x327AAEE25F323797(func_299(uParam0));
	}
	if (iParam5 || func_40(uParam0, 1048576))
	{
		if (func_24(uParam0) != 4)
		{
			func_4(&vVar4, 100f, 0f);
		}
		if (unk_0xE82754C349C7B581(vVar1 + Vector(1f, 0f, 0f), &fVar7, 0, 0))
		{
			if ((unk_0x755FF954DAE327E1((fVar7 - vVar4.z)) < 0,35f || fVar7 < vVar1.z) || bParam7)
			{
				vVar1.z = fVar7;
			}
		}
		if (uParam4 && func_184())
		{
			func_215(vVar1, func_117(uParam0), 0, 0, 0, 0, 1, 0, 1, 0, 0);
		}
		else
		{
			bVar8 = true;
			if (bVar8)
			{
				unk_0xD8F6A53F4799FAFE(func_299(uParam0), func_117(uParam0));
				unk_0xA47B46945FF6DE74(func_299(uParam0), vVar1, 0, true, 1, 1);
			}
		}
	}
	else
	{
		unk_0xA3BF0AA5A2608191(func_299(uParam0));
		unk_0xDD353D0E9C789D0E(&(uParam0->f_21));
		if (func_244() || func_186(uParam0))
		{
			unk_0x96167B03C5A77156(0, vVar1, 1f, -1, 0,25f, 512, iParam2);
			unk_0xC6EB89C59F2AF6B8(0, "mini@golfai", "putt_approach_no_ball", 2f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xC6EB89C59F2AF6B8(0, "mini@golfai", "putt_approach_no_ball", 4f, -4f, -1, 2, 0,999f, 0, 0, 0);
		}
		else
		{
			unk_0x96167B03C5A77156(0, vVar1, 1f, -1, 0,25f, 512, iParam2);
		}
		unk_0x75ABDC5F81978924(uParam0->f_21);
		unk_0x78ADC381772E3D54(func_299(uParam0), uParam0->f_21);
		unk_0xF82EA857DA10E0CD(&(uParam0->f_21));
	}
	if (bParam7)
	{
		func_212(uParam0, uParam1);
	}
	if (uParam6 && !func_40(uParam0, 1048576))
	{
		func_205(uParam0, uParam1, 0, 0);
	}
}

void func_205(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	iVar0 = func_122(uParam1, func_123(uParam0));
	iVar1 = func_211(uParam1, func_123(uParam0));
	if (bParam3)
	{
		if (!func_210(func_299(uParam0), iVar0))
		{
			return;
		}
	}
	bVar2 = true;
	if (unk_0xC844350D5D58C99A(func_164(uParam0)))
	{
		if (iVar1 == unk_0x134B62B726CEC8E6(func_164(uParam0)))
		{
			bVar2 = false;
		}
	}
	if (bVar2)
	{
		func_208(uParam0, func_209(uParam0, uParam1));
	}
	if (!bParam2 || bVar2)
	{
		iVar3 = func_299(uParam0);
		if (!unk_0xEB6A8945D1AC98A1(iVar3))
		{
			unk_0x9F528B1B53FBC5D9(func_164(uParam0), iVar3, unk_0x4A089F2B762B8D33(iVar3, 28422), func_207(iVar3, iVar0), func_206(iVar3, iVar0), 0, 0, 0, 0, 2, 1);
		}
	}
}

Vector3 func_206(int iParam0, int iParam1)
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	return 0f, 0f, 0f;
}

Vector3 func_207(int iParam0, int iParam1)
{
	return 0f, 0f, 0f;
}

void func_208(var uParam0, int iParam1)
{
	if (uParam0->f_4 == iParam1)
	{
		return;
	}
	if (unk_0xC844350D5D58C99A(uParam0->f_4))
	{
		unk_0xF690C84DADBB3551(&(uParam0->f_4));
	}
	uParam0->f_4 = iParam1;
}

int func_209(var uParam0, var uParam1)
{
	func_38(uParam0);
	iVar0 = unk_0xB0BE3DFBBB59A620(func_211(uParam1, func_123(uParam0)), func_278(uParam0), false, true, false);
	return iVar0;
}

int func_210(int iParam0, int iParam1)
{
	if (iParam1 >= 1 && iParam1 <= 5)
	{
		return ((unk_0xB4ECF989E2C1DAC8(iParam0, func_119(0), "wood_idle_a", 3) || unk_0xB4ECF989E2C1DAC8(iParam0, func_119(1), "wood_idle_b", 3)) || unk_0xB4ECF989E2C1DAC8(iParam0, func_119(1), "wood_idle_c", 3));
	}
	else if (iParam1 >= 6 && iParam1 <= 13)
	{
		return ((unk_0xB4ECF989E2C1DAC8(iParam0, func_119(0), "iron_idle_a", 3) || unk_0xB4ECF989E2C1DAC8(iParam0, func_119(1), "iron_idle_b", 3)) || unk_0xB4ECF989E2C1DAC8(iParam0, func_119(1), "iron_idle_c", 3));
	}
	else if (iParam1 >= 14 && iParam1 <= 18)
	{
		return ((unk_0xB4ECF989E2C1DAC8(iParam0, func_119(0), "wedge_idle_a", 3) || unk_0xB4ECF989E2C1DAC8(iParam0, func_119(1), "wedge_idle_b", 3)) || unk_0xB4ECF989E2C1DAC8(iParam0, func_119(1), "wedge_idle_c", 3));
	}
	else if (iParam1 == 19)
	{
		return ((unk_0xB4ECF989E2C1DAC8(iParam0, func_119(0), "putt_idle_a", 3) || unk_0xB4ECF989E2C1DAC8(iParam0, func_119(1), "putt_idle_b", 3)) || unk_0xB4ECF989E2C1DAC8(iParam0, func_119(1), "putt_idle_c", 3));
	}
	return 0;
}

int func_211(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_15)
	{
		return -2141023172;
	}
	switch ((*uParam0)[iParam1])
	{
		case 1:
			return 1705580940;
			break;
		
		case 2:
			return 1705580940;
			break;
		
		case 3:
			return 1705580940;
			break;
		
		case 4:
			return 1705580940;
			break;
		
		case 5:
			return 1705580940;
			break;
		
		case 6:
			return 334347537;
			break;
		
		case 7:
			return 334347537;
			break;
		
		case 8:
			return 334347537;
			break;
		
		case 9:
			return 334347537;
			break;
		
		case 10:
			return 334347537;
			break;
		
		case 11:
			return 334347537;
			break;
		
		case 12:
			return 334347537;
			break;
		
		case 13:
			return 334347537;
			break;
		
		case 14:
			return 1933637837;
			break;
		
		case 15:
			return 1933637837;
			break;
		
		case 16:
			return 1933637837;
			break;
		
		case 17:
			return 1933637837;
			break;
		
		case 18:
			return 1933637837;
			break;
		
		case 19:
			return 1750479612;
			break;
	}
	return -2141023172;
}

void func_212(var uParam0, var uParam1)
{
	sVar1 = func_178(uParam0, uParam1, &fVar0, 0, 0, 0, 0);
	bVar2 = !func_107(sVar1);
	StringCopy(&cVar3, func_121(uParam1, uParam0, 0, 1), 32);
	StringConCat(&cVar3, "idle", 32);
	cVar11 = { cVar3 };
	StringConCat(&cVar11, sVar1, 32);
	StringConCat(&cVar11, "_a", 32);
	StringConCat(&cVar3, "_a", 32);
	if (bVar2)
	{
	}
	func_213(func_299(uParam0), &cVar3, &cVar11, bVar2, fVar0, 1f, 10, 0f, 0f, 0f, 0);
	if (!func_40(uParam0, 32768))
	{
		unk_0xF895E10BF4C72645(func_299(uParam0), 1, 0);
		unk_0x98B4D0E8E826058E(func_299(uParam0));
		func_57(uParam0, 32768);
	}
}

void func_213(int iParam0, char[4] cParam1, char[4] cParam2, bool bParam3, float fParam4, float fParam5, int iParam6, float fParam7, int iParam8, int iParam9, bool bParam10)
{
	Var0.f_4 = 1065353216;
	Var0.f_5 = 1065353216;
	Var0.f_9 = 1065353216;
	Var0.f_10 = 1065353216;
	Var0.f_14 = 1065353216;
	Var0.f_15 = 1065353216;
	Var0.f_17 = 1040187392;
	Var0.f_18 = 1040187392;
	Var0.f_19 = -1;
	Var22.f_4 = 1065353216;
	Var22.f_5 = 1065353216;
	Var22.f_9 = 1065353216;
	Var22.f_10 = 1065353216;
	Var22.f_14 = 1065353216;
	Var22.f_15 = 1065353216;
	Var22.f_17 = 1040187392;
	Var22.f_18 = 1040187392;
	Var22.f_19 = -1;
	if (bParam3)
	{
		Var22 = 2;
		Var22.f_5 = (1f - fParam4);
		Var22.f_10 = fParam4;
		Var22.f_15 = 0f;
		Var22.f_12 = func_214(cParam1);
		Var22.f_11 = func_119(bParam10);
	}
	else
	{
		Var22 = 1;
	}
	Var22.f_2 = func_214(cParam1);
	Var22.f_1 = func_119(bParam10);
	Var22.f_3 = fParam7;
	Var22.f_4 = fParam5;
	if (bParam3)
	{
		Var22.f_7 = func_214(cParam2);
		Var22.f_6 = func_119(1);
		Var22.f_8 = fParam7;
		Var22.f_9 = fParam5;
	}
	Var22.f_20 = iParam6;
	unk_0x20E1DF68CAB023FF(iParam0, &Var22, &Var0, &Var0, iParam8, iParam9);
}

var func_214(var uParam0)
{
	return uParam0;
}

int func_215(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, float fParam12)
{
	Global_22211.f_6 = 1;
	if (Global_2439138.f_1233 && Global_2439138.f_1241)
	{
		func_225(0, bParam9);
		return 1;
	}
	if (unk_0x991B1F0980C62628() && !bParam9)
	{
		if (Global_2439138.f_1233)
		{
			func_225(0, bParam9);
		}
		return 0;
	}
	if ((unk_0xEB880D98B5988D0C() && !bParam9) && !unk_0x0C2635BB5127C8FB())
	{
		return 0;
	}
	if (!func_224())
	{
		if (func_223(unk_0xD803B885F5E47A62(), 1, 0) && !(func_222() || func_221()))
		{
			if (((bParam9 && func_220(unk_0xD803B885F5E47A62(), 1, 0)) && unk_0x991B1F0980C62628()) && Global_2425662[unk_0xD803B885F5E47A62()].f_222 == 1)
			{
			}
			else if (func_219() == 28)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = (fParam3 + 360f);
	}
	if (fParam3 >= 360f)
	{
		fParam3 = (fParam3 + -360f);
	}
	if (!Global_2439138.f_1233 && !bParam11)
	{
		vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false) };
		if ((unk_0x755FF954DAE327E1((vVar1.x - vParam0.x)) < 0,2f && unk_0x755FF954DAE327E1((vVar1.y - vParam0.y)) < 0,2f) && unk_0x755FF954DAE327E1((vVar1.z - vParam0.z)) < 1,2f)
		{
			fVar4 = (fParam3 - unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()));
			if (fVar4 > 180f)
			{
				fVar4 = (fVar4 + -360f);
			}
			if (fVar4 < -180f)
			{
				fVar4 = (fVar4 + 360f);
			}
			if (unk_0x755FF954DAE327E1(fVar4) < 1f)
			{
				Global_2439138.f_1233 = 0;
				Global_2439138.f_1234 = 0;
				if (unk_0x0C2635BB5127C8FB())
				{
					unk_0x5D29A7ED2621B332();
				}
				return 1;
			}
		}
	}
	if (((!vParam0.x == Global_2439138.f_1235 || !vParam0.y == Global_2439138.f_1235.f_1) || !vParam0.z == Global_2439138.f_1235.f_2) || !fParam3 == Global_2439138.f_1238)
	{
		if (Global_2439138.f_1233 == 1)
		{
			if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2439138.f_1239) < func_218(0))
			{
				return 0;
			}
			unk_0x5D29A7ED2621B332();
			Global_2439138.f_1234 = 1;
		}
		else
		{
			Global_2439138.f_1234 = 0;
		}
		Global_2439138.f_1235 = { vParam0 };
		Global_2439138.f_1238 = fParam3;
		Global_2439138.f_1233 = 0;
	}
	if (!Global_2439138.f_1233 && !unk_0x0C2635BB5127C8FB())
	{
		if (bParam4)
		{
			bParam5 = false;
		}
		bParam7 = bParam7;
		if (bParam7)
		{
		}
		if (bParam5)
		{
		}
		if (bParam8)
		{
		}
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_98796.f_1357[44], 16))
			{
				func_217(0);
			}
			if (!unk_0xC4AEA6B98479242E(unk_0x16F2683693E537C9(), &(Global_2405072.f_499)))
			{
				Global_2405072.f_499 = 0;
			}
		}
		if (bParam4)
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
				if (unk_0x6CFEA4CFD9C496C8(iVar0))
				{
					Global_2439138.f_1240 = 0;
				}
			}
		}
		if (Global_2439138.f_1240 > -1)
		{
			Global_2439138.f_1239 = unk_0x2B6E0A53779D29EA();
			Global_2439138.f_1233 = 1;
		}
		else
		{
			if (bParam9)
			{
				if (bParam4)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
						if (unk_0xAFE0D3608EDA7039(iVar0))
						{
							unk_0xA47B46945FF6DE74(iVar0, vParam0, 0, true, 1, 1);
							unk_0xD8F6A53F4799FAFE(iVar0, fParam3);
							if (fParam12 != 0f)
							{
								unk_0xC023D1C4BF532815(iVar0, fParam12, 0f, fParam3, 2, 1);
							}
						}
						else
						{
							unk_0x0C8A454B494DAA0D(iVar0);
						}
					}
					else
					{
						unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vParam0, 0, false, 0, 1);
						unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), fParam3);
					}
				}
				else
				{
					unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vParam0, 0, false, 0, 1);
					unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), fParam3);
				}
				func_225(bParam6, bParam9);
				return 1;
			}
			else
			{
				unk_0x066C43E677C08D5C();
				unk_0x28B8A2632901EC2F(unk_0xD803B885F5E47A62(), vParam0, fParam3, bParam4, bParam10, 0);
			}
			Global_2439138.f_1239 = unk_0x2B6E0A53779D29EA();
			Global_2439138.f_1233 = 1;
		}
	}
	if (Global_2439138.f_1233)
	{
		Global_22211.f_6 = 1;
		Global_2439138.f_1239 = unk_0x2B6E0A53779D29EA();
		if (Global_2439138.f_1240 > -1)
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
			}
			if (func_216(&(Global_2439138.f_1240), vParam0, fParam3, iVar0))
			{
				func_225(bParam6, bParam9);
				return 1;
			}
		}
		else
		{
			if (bParam9)
			{
				if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), Global_2439138.f_1235) < 2f)
				{
					if (unk_0x0C2635BB5127C8FB())
					{
						unk_0x5D29A7ED2621B332();
					}
					func_225(bParam6, bParam9);
					return 1;
				}
			}
			if (!unk_0x0C2635BB5127C8FB())
			{
				if (fParam12 != 0f)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
						unk_0xC023D1C4BF532815(iVar0, fParam12, 0f, fParam3, 2, 1);
						Global_2439138.f_1241 = 1;
						return 0;
					}
				}
				func_225(bParam6, bParam9);
				return 1;
			}
		}
	}
	return 0;
}

int func_216(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	if (unk_0xC844350D5D58C99A(Global_2439138.f_1242) && !unk_0x437347B10A200C4B(Global_2439138.f_1242, 0))
	{
		unk_0x0C8A454B494DAA0D(Global_2439138.f_1242);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2439138.f_1242 = iParam5;
			unk_0x0C8A454B494DAA0D(Global_2439138.f_1242);
			if (unk_0xAFE0D3608EDA7039(Global_2439138.f_1242))
			{
				if (!unk_0x437347B10A200C4B(Global_2439138.f_1242, 0))
				{
					unk_0xD8F6A53F4799FAFE(Global_2439138.f_1242, fParam4);
					unk_0xA47B46945FF6DE74(Global_2439138.f_1242, vParam1, 0, true, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_217(int iParam0)
{
	iVar0 = Global_2405072.f_2682;
	if ((unk_0x7E369B13C7215476() && Global_2405072.f_2680 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2405072.f_2679)
	{
		if (!unk_0xEFFB47DC2D8F23F9())
		{
			Global_2405072.f_2679 = iVar0;
		}
	}
}

int func_218(bool bParam0)
{
	if (unk_0x757EF87A33649210())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_219()
{
	return Global_1312812;
}

int func_220(int iParam0, bool bParam1, bool bParam2)
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

bool func_221()
{
	return ((unk_0xEAE0D21A50E6C7F4(Global_4456448.f_30, 12) && unk_0xEAE0D21A50E6C7F4(Global_1695469, 12)) && Global_1695468 == 8);
}

bool func_222()
{
	return (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_30, 12) && unk_0xEAE0D21A50E6C7F4(Global_1695469, 0));
}

int func_223(int iParam0, bool bParam1, int iParam2)
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

bool func_224()
{
	return Global_1312854;
}

void func_225(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		unk_0xEF6276132B396452(0f, 1065353216);
		unk_0x2FB9A57162E54BAB(0f);
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0xFE76348A7A0CEF66(unk_0x16F2683693E537C9());
	}
	if (!bParam1)
	{
		unk_0x066C43E677C08D5C();
	}
	if (unk_0x0C2635BB5127C8FB())
	{
		unk_0x5D29A7ED2621B332();
	}
	func_228();
	if (!unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 14) && !func_227())
	{
		func_226();
	}
}

void func_226()
{
	Global_2546219.f_82 = 1;
}

int func_227()
{
	if (!unk_0xA14BB9332558B949() && !func_224())
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_238365[0].f_17, 0))
	{
		return 1;
	}
	return 0;
}

void func_228()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

Vector3 func_229(int iParam0)
{
	if (iParam0 <= 5)
	{
		return 0,11f, -1,08f, 0f;
	}
	if (iParam0 <= 13)
	{
		return 0,11f, -0,81f, 0f;
	}
	if (iParam0 != 19)
	{
		return 0,03f, -0,75f, 0f;
	}
	return 0,1f, -0,55f, 0f;
}

void func_230(var uParam0, var uParam1)
{
	uParam0->f_14 = uParam1;
}

void func_231(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	fVar0 = func_36(uParam2);
	fVar3 = -9999f;
	fVar4 = -1f;
	if (func_172(uParam1, uParam2) || func_244())
	{
		if (func_242(uParam1, uParam2, 0))
		{
			func_240(uParam2, 7);
		}
		else if (fVar0 < 5f)
		{
			func_240(uParam2, 4);
		}
		else if (fVar0 < 9,5f)
		{
			func_240(uParam2, 5);
		}
		else
		{
			func_240(uParam2, 6);
		}
		func_238(uParam2, func_135(uParam0, 19));
		if (func_140(uParam2) != -1)
		{
			return;
		}
	}
	else if (func_237(uParam2))
	{
		func_240(uParam2, 0);
		func_238(uParam2, func_135(uParam0, 16));
		if (func_140(uParam2) != -1)
		{
			return;
		}
	}
	else if (func_236(uParam1, uParam2, bParam3))
	{
		func_240(uParam2, 3);
	}
	else
	{
		func_240(uParam2, 0);
	}
	func_233(uParam1, uParam2, &iVar5, &iVar6, 0);
	fVar4 = func_201(uParam0, func_135(uParam0, iVar6));
	if (func_136(uParam2) == 3 || func_136(uParam2) == 2)
	{
		fVar4 = (fVar4 * func_232());
	}
	if (fVar4 > fVar0)
	{
		func_238(uParam2, func_135(uParam0, iVar6));
		return;
	}
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		iVar7 = func_122(uParam0, iVar1);
		if (iVar7 >= iVar5 && iVar7 <= iVar6)
		{
			fVar4 = func_201(uParam0, iVar1);
			if (func_136(uParam2) == 3 || func_136(uParam2) == 2)
			{
				fVar4 = (fVar4 * func_232());
			}
			if ((*uParam0)[iVar1] >= 14)
			{
				fVar4 = (fVar4 * 0,75f);
			}
			if (func_264(uParam1, uParam2))
			{
				if (func_313(uParam2) == 2)
				{
					fVar4 = (fVar4 * 1,1f);
				}
				else if (func_313(uParam2) == 3)
				{
					fVar4 = (fVar4 * 2,25f);
				}
			}
			fVar4 = (fVar4 - fVar0);
			if (fVar4 < 0f && fVar4 > fVar3)
			{
				iVar2 = iVar1;
				fVar3 = fVar4;
			}
		}
		iVar1++;
	}
	if (iVar2 != -1)
	{
		func_238(uParam2, iVar2);
		return;
	}
	func_238(uParam2, func_135(uParam0, iVar5));
}

float func_232()
{
	return 0,935f;
}

void func_233(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	if (func_172(uParam0, uParam1))
	{
		*uParam2 = 14;
		*uParam3 = 19;
	}
	else if (func_237(uParam1))
	{
		*uParam2 = 7;
		*uParam3 = 17;
	}
	else if (func_236(uParam0, uParam1, 1))
	{
		*uParam2 = 7;
		if (bParam4)
		{
			*uParam3 = 19;
		}
		else
		{
			*uParam3 = 17;
		}
	}
	else if (func_235(uParam1))
	{
		*uParam2 = 7;
		*uParam3 = 17;
	}
	else if (func_264(uParam0, uParam1))
	{
		*uParam2 = 1;
		*uParam3 = 17;
	}
	else if (func_234(uParam1))
	{
		*uParam2 = 3;
		*uParam3 = 17;
	}
	else
	{
		*uParam2 = 7;
		*uParam3 = 17;
	}
}

int func_234(var uParam0)
{
	if (func_35(uParam0) != 2)
	{
		return 0;
	}
	return 1;
}

int func_235(var uParam0)
{
	if (func_35(uParam0) != 4)
	{
		return 0;
	}
	return 1;
}

int func_236(var uParam0, var uParam1, bool bParam2)
{
	if (func_270(uParam1) < 0)
	{
		return 0;
	}
	iVar0 = func_250(uParam1);
	if (bParam2)
	{
		if (!unk_0xC844350D5D58C99A(iVar0))
		{
			return 0;
		}
		vVar1 = { unk_0x68F4C0EC296D3901(func_250(uParam1), false) };
	}
	else
	{
		vVar1 = { func_19(uParam1) };
	}
	if (vdist2(vVar1, func_41(uParam0, func_313(uParam1))) > (55f * 55f))
	{
		return 0;
	}
	return 1;
}

int func_237(var uParam0)
{
	if (func_35(uParam0) != 0)
	{
		return 0;
	}
	return 1;
}

void func_238(var uParam0, int iParam1)
{
	func_239(&(uParam0->f_15[uParam0->f_157]), iParam1);
}

void func_239(var uParam0, var uParam1)
{
	uParam0->f_17 = uParam1;
}

void func_240(var uParam0, int iParam1)
{
	func_241(&(uParam0->f_15[uParam0->f_157]), iParam1);
}

void func_241(var uParam0, var uParam1)
{
	uParam0->f_19 = uParam1;
}

int func_242(var uParam0, var uParam1, bool bParam2)
{
	if (!func_172(uParam0, uParam1))
	{
		return 0;
	}
	vVar0 = { func_19(uParam1) };
	if (bParam2)
	{
		if (unk_0xC844350D5D58C99A(func_250(uParam1)))
		{
			vVar0 = { unk_0x68F4C0EC296D3901(func_250(uParam1), true) };
		}
	}
	if (vdist2(vVar0, func_41(uParam0, func_313(uParam1))) > (0,7f * 0,7f))
	{
		return 0;
	}
	return 1;
}

void func_243(var uParam0, vector3 vParam1)
{
	func_48(&(uParam0->f_15[uParam0->f_157]), vParam1);
}

int func_244()
{
	return 0;
}

void func_245(var uParam0, var uParam1)
{
	func_246(&(uParam0->f_15[uParam0->f_157]), uParam1);
}

void func_246(var uParam0, var uParam1)
{
	uParam0->f_3 = uParam1;
}

int func_247(vector3 vParam0, float fParam3)
{
	if (func_130(vParam0, 0f, 0f, 0f, 1056964608, 0))
	{
		return 0;
	}
	iVar0 = unk_0x7707E48765093646(-1358020705, vParam0, true, true, false);
	unk_0xE77EA499A5F2B1EE(iVar0, 1);
	unk_0x120A395B0ECB8EA5(iVar0, false);
	unk_0xD8F6A53F4799FAFE(iVar0, fParam3);
	if (bLocal_0)
	{
	}
	return iVar0;
}

float func_248(struct<2> Param0, float fParam2, struct<2> Param3, var uParam5)
{
	return unk_0xE7D606C557C86100((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_249(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_28)
	{
		return 0f, 0f, 0f;
	}
	switch (iParam1)
	{
		case 0:
			return -1252,974f, 182,4325f, 61,3071f;
			break;
		
		case 1:
			return -1222,204f, 150,2919f, 58,7062f;
			break;
		
		case 2:
			return -1240,082f, 105,7823f, 55,6871f;
			break;
		
		case 3:
			return -1132,487f, 74,15947f, 55,23262f;
			break;
		
		case 4:
			return -1022,111f, -34,77494f, 44,37743f;
			break;
		
		case 5:
			return -1100,057f, -114,277f, 40,5368f;
			break;
		
		case 6:
			return -1225,207f, -54,2714f, 44,1932f;
			break;
		
		case 7:
			return -1159,322f, -26,5465f, 44,7971f;
			break;
		
		case 8:
			return -1177,194f, 34,219f, 50,8363f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_250(var uParam0)
{
	return func_251(&(uParam0->f_15[uParam0->f_157]));
}

var func_251(var uParam0)
{
	return uParam0->f_3;
}

int func_252(var uParam0, int iParam1, int iParam2)
{
	if (func_37(&(uParam0->f_15[iParam1])) > func_37(&(uParam0->f_15[iParam2])))
	{
		return iParam1;
	}
	return iParam2;
}

int func_253(var uParam0)
{
	return func_272(uParam0, func_270(uParam0));
}

void func_254(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	iVar2 = func_284(uParam0, func_256(uParam0, iParam1));
	vVar4 = { func_265(uParam0, iParam1) };
	vVar7 = { 0f, 0f, 0f };
	if (unk_0x437347B10A200C4B(iVar2, 0))
	{
		return;
	}
	if (unk_0x437347B10A200C4B(func_274(uParam0, iParam1), 0))
	{
		func_277(uParam0, 2);
		return;
	}
	fVar1 = 144f;
	bVar10 = vdist2(unk_0x68F4C0EC296D3901(func_294(uParam0, func_272(uParam0, iParam1)), true), uParam0->f_15[iParam1].f_10) < fVar1;
	if (!unk_0xC42A92762C58E1B9(iVar2, func_274(uParam0, iParam1), 0) && !bVar10)
	{
		if (unk_0xD1960163A3042274(iVar2, -1794415470) != 1)
		{
			unk_0x5B1D360B9C6F0A09(iVar2, func_274(uParam0, iParam1), -1, -1, 1f, 1, 0);
		}
		return;
	}
	iVar11 = 786603;
	if (bParam4)
	{
		iVar11 = 17;
	}
	if (((unk_0xC844350D5D58C99A(iVar2) && !unk_0x437347B10A200C4B(iVar2, 0)) && unk_0xD1960163A3042274(iVar2, -1817882002) != 1) && !func_40(&(uParam0->f_15[iParam1]), 33554432))
	{
		if (func_272(uParam0, iParam1) == 1 && !func_267(uParam0, -1))
		{
			if (func_264(uParam2, uParam0) && func_313(uParam0) == 0)
			{
				vVar7 = { -3f, -3f, 0f };
			}
			else
			{
				vVar7 = { 3f, 3f, 0f };
			}
		}
		func_3(vVar4 + vVar7, func_41(uParam2, func_313(uParam0)), &(uParam0->f_15[iParam1].f_10), &fVar0, 0f, 0f, 0f, 0f, 0f, 0f, 0);
		unk_0xE9362E4D600DD12A(func_284(uParam0, func_256(uParam0, iParam1)), func_274(uParam0, iParam1), uParam0->f_15[iParam1].f_10, 4f, 0, 0, iVar11, 4f, -1f);
	}
	if (bVar10)
	{
		unk_0xA3BF0AA5A2608191(func_284(uParam0, func_256(uParam0, iParam1)));
		func_57(&(uParam0->f_15[iParam1]), 33554432);
		if (!func_267(uParam0, -1))
		{
			unk_0x7F5117A322CC23E3(func_274(uParam0, iParam1));
			iVar12 = 1;
			func_20(uParam0, uParam2, func_272(uParam0, iParam1), 0, 36543, 45393);
			iVar3 = 0;
			while (iVar3 < func_320(uParam0))
			{
				if (unk_0xC844350D5D58C99A(func_284(uParam0, iVar3)) && !unk_0x437347B10A200C4B(func_284(uParam0, iVar3), 0))
				{
					if (unk_0x405E212DDE472467(func_284(uParam0, iVar3), 0))
					{
						iVar12 = 0;
					}
				}
				iVar3++;
			}
			if (iVar12 && bParam3)
			{
				func_277(uParam0, 2);
			}
		}
		else if ((vdist2(func_265(uParam0, iParam1), func_41(uParam2, func_313(uParam0))) < 1600f && vdist2(unk_0x68F4C0EC296D3901(func_274(uParam0, iParam1), true), func_41(uParam2, func_313(uParam0))) < 1600f) && !func_298(uParam0, iParam1, 67108864))
		{
			func_20(uParam0, uParam2, func_272(uParam0, iParam1), 1, 38276, 7449);
			if (bParam3)
			{
				func_277(uParam0, 2);
			}
		}
		else if (unk_0x405E212DDE472467(func_284(uParam0, iParam1), 0))
		{
			unk_0x27F3789FF35EEDF1(func_284(uParam0, func_256(uParam0, iParam1)), func_274(uParam0, iParam1), unk_0x68F4C0EC296D3901(func_274(uParam0, iParam1), true), 0f, 3, 360f, 0);
			if (bParam3)
			{
				unk_0x75CDA8644CD3B5F5(func_284(uParam0, iParam1), 0, 0);
				func_277(uParam0, 2);
				func_255(uParam0, iParam1, 1);
			}
		}
		else if (bParam3)
		{
			func_277(uParam0, 2);
			func_255(uParam0, iParam1, 1);
		}
	}
}

void func_255(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_15)
	{
		return;
	}
	func_17(&(uParam0->f_15[iParam1]), iParam2, 0);
}

int func_256(var uParam0, int iParam1)
{
	return func_271(uParam0, func_272(uParam0, iParam1));
}

int func_257(var uParam0, float fParam1)
{
	if (func_96(uParam0))
	{
		if (func_258(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_258(var uParam0)
{
	if (func_96(uParam0))
	{
		if (func_259(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_191(unk_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_259(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

void func_260(int iParam0)
{
	if (!func_96(iParam0))
	{
		func_189(iParam0);
	}
}

void func_261(var uParam0, int iParam1)
{
	uParam0->f_22 = (uParam0->f_22 - (uParam0->f_22 && iParam1));
}

int func_262(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < func_320(uParam0))
	{
		if (iVar0 >= iParam1)
		{
			if (!unk_0x437347B10A200C4B(func_284(uParam0, iVar0), 0) && !unk_0x437347B10A200C4B(func_274(uParam0, iVar0), 0))
			{
				if ((!unk_0xC42A92762C58E1B9(func_284(uParam0, iVar0), func_274(uParam0, iVar0), 0) && !func_298(uParam0, iVar0, 16777216)) && !func_298(uParam0, iVar0, 67108864))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_263(var uParam0, int iParam1)
{
	func_17(&(uParam0->f_15[uParam0->f_157]), iParam1, 0);
}

int func_264(var uParam0, var uParam1)
{
	if (func_313(uParam1) < 0 || func_313(uParam1) >= func_53(uParam0))
	{
		return 0;
	}
	if (func_35(uParam1) != 5)
	{
		return 0;
	}
	return 1;
}

Vector3 func_265(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_15)
	{
		return 0f, 0f, 0f;
	}
	return func_278(&(uParam0->f_15[iParam1]));
}

Vector3 func_266(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_28)
	{
		return 0f, 0f, 0f;
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					return -1369,208f, 166,1965f, 57,013f;
					break;
				
				case 1:
					return -1367,259f, 166,6778f, 57,013f;
					break;
				
				case 2:
					return -1370,803f, 167,6664f, 57,013f;
					break;
				
				case 3:
					return -1371,507f, 169,5609f, 57,013f;
					break;
				
				case 4:
					return -1370,846f, 164,1834f, 56,89f;
					break;
				
				case 5:
					return -1367,902f, 164,2965f, 56,869f;
					break;
			}
			break;
		
		case 1:
			switch (iParam2)
			{
				case 0:
					return -1101,049f, 156,1904f, 62,0401f;
					break;
				
				case 1:
					return -1100,905f, 159,2561f, 62,0415f;
					break;
				
				case 2:
					return -1102,783f, 161,6288f, 62,0412f;
					break;
				
				case 3:
					return -1105,964f, 161,2863f, 62,0406f;
					break;
				
				case 4:
					return -1104,451f, 163,5161f, 62,0095f;
					break;
				
				case 5:
					return -1099,934f, 161,6773f, 62,0185f;
					break;
			}
			break;
		
		case 2:
			switch (iParam2)
			{
				case 0:
					return -1317,028f, 128,0565f, 56,4377f;
					break;
				
				case 1:
					return -1315,436f, 129,9425f, 56,6243f;
					break;
				
				case 2:
					return -1313,452f, 131,9924f, 56,8265f;
					break;
				
				case 3:
					return -1317,249f, 133,3213f, 56,705f;
					break;
				
				case 4:
					return -1318,786f, 131,5965f, 56,4503f;
					break;
				
				case 5:
					return -1320,138f, 129,2562f, 56,324f;
					break;
			}
			break;
		
		case 3:
			switch (iParam2)
			{
				case 0:
					return -1218,894f, 110,6482f, 57,08f;
					break;
				
				case 1:
					return -1222,243f, 110,2088f, 57,08f;
					break;
				
				case 2:
					return -1220f, 111,91f, 58,0703f;
					break;
				
				case 3:
					return -1221,256f, 101,3278f, 57,08f;
					break;
				
				case 4:
					return -1223,297f, 103,1185f, 56,813f;
					break;
				
				case 5:
					return -1216,389f, 115,3967f, 57,1354f;
					break;
			}
			break;
		
		case 4:
			switch (iParam2)
			{
				case 0:
					return -1104,607f, 70,6124f, 53,212f;
					break;
				
				case 1:
					return -1101,698f, 73,7137f, 53,1993f;
					break;
				
				case 2:
					return -1103,9f, 72,917f, 54,3f;
					break;
				
				case 3:
					return -1100,425f, 75,0875f, 54,3712f;
					break;
				
				case 4:
					return -1108,588f, 72,7163f, 53,4783f;
					break;
				
				case 5:
					return -1107,175f, 68,8603f, 53,2257f;
					break;
			}
			break;
		
		case 5:
			switch (iParam2)
			{
				case 0:
					return -984,8632f, -108,5439f, 39,5642f;
					break;
				
				case 1:
					return -982,4098f, -106,4736f, 39,5732f;
					break;
				
				case 2:
					return -981,2261f, -103,0422f, 39,5779f;
					break;
				
				case 3:
					return -981,8594f, -100,6231f, 39,5813f;
					break;
				
				case 4:
					return -978,5359f, -100,5075f, 39,5193f;
					break;
				
				case 5:
					return -981,4874f, -109,4747f, 39,2195f;
					break;
			}
			break;
		
		case 6:
			switch (iParam2)
			{
				case 0:
					return -1113,865f, -100,3123f, 40,905f;
					break;
				
				case 1:
					return -1111,559f, -104,7822f, 40,8405f;
					break;
				
				case 2:
					return -1113,281f, -107,0443f, 40,8405f;
					break;
				
				case 3:
					return -1116,94f, -109,7583f, 40,8608f;
					break;
				
				case 4:
					return -1110,02f, -108,1524f, 40,7427f;
					break;
				
				case 5:
					return -1112,815f, -103,1259f, 40,8406f;
					break;
			}
			break;
		
		case 7:
			switch (iParam2)
			{
				case 0:
					return -1277,277f, 36,1405f, 48,9194f;
					break;
				
				case 1:
					return -1277,344f, 39,2424f, 49,1028f;
					break;
				
				case 2:
					return -1275,593f, 41,3619f, 49,0876f;
					break;
				
				case 3:
					return -1271,244f, 43,9149f, 48,9679f;
					break;
				
				case 4:
					return -1279,021f, 42,0418f, 49,3157f;
					break;
				
				case 5:
					return -1281,184f, 37,6356f, 49,3165f;
					break;
			}
			break;
		
		case 8:
			switch (iParam2)
			{
				case 0:
					return -1138,589f, -5,6756f, 47,9822f;
					break;
				
				case 1:
					return -1136,48f, -5,8462f, 47,9822f;
					break;
				
				case 2:
					return -1134,645f, -4,3631f, 47,9822f;
					break;
				
				case 3:
					return -1133,712f, -2,4897f, 47,9822f;
					break;
				
				case 4:
					return -1133,803f, -7,843f, 47,9822f;
					break;
				
				case 5:
					return -1137,603f, -9,0347f, 47,8107f;
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_267(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < func_320(uParam0))
	{
		if (iParam1 < 0 || iParam1 != iVar0)
		{
			if (func_33(&(uParam0->f_15[iVar0])) < 1 && func_21(uParam0, iVar0) != 10)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

Vector3 func_268(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_28)
	{
		return 0f, 0f, 0f;
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					return -1121,482f, 210,4423f, 63,9292f;
					break;
				
				case 1:
					return -1111,883f, 211,2035f, 63,844f;
					break;
				
				case 2:
					return -1109,581f, 220,781f, 63,9314f;
					break;
				
				case 3:
					return -1117,733f, 231,4756f, 64,5959f;
					break;
				
				case 4:
					return -1124,819f, 232,4564f, 65,106f;
					break;
				
				case 5:
					return -1114,602f, 228,6924f, 64,1294f;
					break;
				
				case 6:
					return -1124,336f, 220,1641f, 64,0189f;
					break;
			}
			break;
		
		case 1:
			switch (iParam2)
			{
				case 0:
					return -1324,647f, 150,2405f, 56,9512f;
					break;
				
				case 1:
					return -1332,147f, 152,7218f, 56,9449f;
					break;
				
				case 2:
					return -1340,339f, 165,985f, 57,0015f;
					break;
				
				case 3:
					return -1330,341f, 172,5728f, 57,0822f;
					break;
				
				case 4:
					return -1325,275f, 173,1006f, 57,1633f;
					break;
				
				case 5:
					return -1337,177f, 158,5159f, 56,9107f;
					break;
				
				case 6:
					return -1320,53f, 169,4781f, 56,8531f;
					break;
			}
			break;
		
		case 2:
			switch (iParam2)
			{
				case 0:
					return -1230,481f, 103,0481f, 55,7491f;
					break;
				
				case 1:
					return -1234,842f, 95,7965f, 55,6671f;
					break;
				
				case 2:
					return -1243,458f, 95,5196f, 55,5717f;
					break;
				
				case 3:
					return -1245,146f, 112,5895f, 55,9974f;
					break;
				
				case 4:
					return -1239,073f, 119,9953f, 56,4275f;
					break;
				
				case 5:
					return -1232,428f, 116,2665f, 56,6504f;
					break;
				
				case 6:
					return -1235,999f, 119,75f, 56,425f;
					break;
			}
			break;
		
		case 3:
			switch (iParam2)
			{
				case 0:
					return -1101,042f, 27,2703f, 50,1697f;
					break;
				
				case 1:
					return -1094,131f, 23,785f, 50,087f;
					break;
				
				case 2:
					return -1087,636f, 20,9966f, 50,0321f;
					break;
				
				case 3:
					return -1080,524f, 13,8964f, 49,734f;
					break;
				
				case 4:
					return -1086,105f, 4,0804f, 49,7967f;
					break;
				
				case 5:
					return -1097,654f, -1,5694f, 50,0125f;
					break;
				
				case 6:
					return -1108,614f, -4,9012f, 49,6852f;
					break;
			}
			break;
		
		case 4:
			switch (iParam2)
			{
				case 0:
					return -949,3773f, -93,7449f, 39,525f;
					break;
				
				case 1:
					return -965,4772f, -92,9853f, 39,3605f;
					break;
				
				case 2:
					return -965,3192f, -101,431f, 39,4042f;
					break;
				
				case 3:
					return -952,4808f, -99,1808f, 39,5487f;
					break;
				
				case 4:
					return -958,345f, -103,7673f, 39,334f;
					break;
				
				case 5:
					return -949,268f, -87,9874f, 39,3694f;
					break;
				
				case 6:
					return -951,558f, -85,9542f, 39,2469f;
					break;
			}
			break;
		
		case 5:
			switch (iParam2)
			{
				case 0:
					return -1098,276f, -107,6579f, 40,5369f;
					break;
				
				case 1:
					return -1106,573f, -106,9375f, 40,696f;
					break;
				
				case 2:
					return -1111,654f, -121,3032f, 40,7039f;
					break;
				
				case 3:
					return -1102,013f, -127,7622f, 40,69f;
					break;
				
				case 4:
					return -1092,945f, -115,8245f, 40,5376f;
					break;
				
				case 5:
					return -1094,257f, -122,7798f, 40,552f;
					break;
				
				case 6:
					return -1092,991f, -118,4603f, 40,5422f;
					break;
			}
			break;
		
		case 6:
			switch (iParam2)
			{
				case 0:
					return -1294,887f, 10,1593f, 50,3758f;
					break;
				
				case 1:
					return -1288,871f, 14,8418f, 49,8751f;
					break;
				
				case 2:
					return -1276,27f, 11,8301f, 48,5562f;
					break;
				
				case 3:
					return -1283,162f, -6,8256f, 48,6238f;
					break;
				
				case 4:
					return -1275,606f, -2,029f, 48,0408f;
					break;
				
				case 5:
					return -1273,712f, 5,2094f, 48,184f;
					break;
				
				case 6:
					return -1293,384f, 0,3131f, 49,4842f;
					break;
			}
			break;
		
		case 7:
			switch (iParam2)
			{
				case 0:
					return -1041,685f, -75,4766f, 43,0439f;
					break;
				
				case 1:
					return -1030,31f, -76,6724f, 43,2806f;
					break;
				
				case 2:
					return -1029,791f, -88,4011f, 43,1511f;
					break;
				
				case 3:
					return -1041,575f, -92,4546f, 42,8253f;
					break;
				
				case 4:
					return -1050,466f, -93,7612f, 42,5099f;
					break;
				
				case 5:
					return -1050,863f, -84,3568f, 42,5056f;
					break;
				
				case 6:
					return -1048,343f, -82,4877f, 42,5625f;
					break;
			}
			break;
		
		case 8:
			switch (iParam2)
			{
				case 0:
					return -1284,551f, 76,0288f, 53,9062f;
					break;
				
				case 1:
					return -1282,676f, 86,4323f, 53,9098f;
					break;
				
				case 2:
					return -1299,27f, 80,8423f, 53,911f;
					break;
				
				case 3:
					return -1299,105f, 87,1486f, 53,9145f;
					break;
				
				case 4:
					return -1290,099f, 74,7491f, 53,9426f;
					break;
				
				case 5:
					return -1292,312f, 90,6955f, 53,9123f;
					break;
				
				case 6:
					return -1291,197f, 89,2305f, 53,9061f;
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_269(var uParam0, var uParam1, int iParam2)
{
	iVar0 = func_251(&(uParam1->f_15[iParam2]));
	if (!unk_0xC844350D5D58C99A(iVar0))
	{
		return 0;
	}
	vVar1 = { unk_0x68F4C0EC296D3901(func_251(&(uParam1->f_15[iParam2])), false) };
	if (vdist2(vVar1, func_41(uParam0, func_313(uParam1))) > (55f * 55f))
	{
		return 0;
	}
	return 1;
}

int func_270(var uParam0)
{
	return uParam0->f_157;
}

int func_271(var uParam0, int iParam1)
{
	return uParam0->f_167[iParam1];
}

int func_272(var uParam0, int iParam1)
{
	return uParam0->f_15[iParam1].f_31;
}

float func_273(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, false) };
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		vVar3 = { unk_0x68F4C0EC296D3901(iParam1, true) };
	}
	else
	{
		vVar3 = { unk_0x68F4C0EC296D3901(iParam1, false) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vVar3, bParam2);
}

int func_274(var uParam0, int iParam1)
{
	return func_294(uParam0, func_272(uParam0, iParam1));
}

bool func_275(var uParam0, int iParam1)
{
	return func_40(&(uParam0->f_15[uParam0->f_157]), iParam1);
}

int func_276(var uParam0)
{
	return *uParam0;
}

void func_277(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

Vector3 func_278(var uParam0)
{
	return uParam0->f_7;
}

bool func_279(var uParam0, int iParam1)
{
	return (uParam0->f_22 && iParam1) != 0;
}

void func_280(var uParam0, var uParam1, int iParam2)
{
	func_60(uParam1, uParam0);
	func_51(uParam0, 0);
	func_54(uParam0, iParam2);
	func_44(uParam1, uParam0);
	func_2(uParam0, uParam1, 1);
	func_277(uParam0, 2);
}

int func_281(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_313(uParam0[iVar0]) == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_282(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 2;
			break;
		
		case 8:
			return 2;
			break;
	}
	return 2;
}

void func_283(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < func_53(uParam1))
	{
		if (!func_281(uParam2, iVar0))
		{
			func_280(uParam0, uParam1, iVar0);
			return;
		}
		iVar0++;
	}
}

int func_284(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_15)
	{
		return 0;
	}
	return func_299(&(uParam0->f_15[iParam1]));
}

void func_285(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_152[iParam2] = iParam1;
}

int func_286(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	iVar0 = unk_0x16F2683693E537C9();
	if (!unk_0x437347B10A200C4B(iVar0, 0) && !unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (!func_293(*uParam2, 1))
		{
			if (func_292(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_293(*uParam2, 2))
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_293(*uParam2, 4))
		{
			if (func_290(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_293(*uParam2, 8))
		{
			if (func_289(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_293(*uParam2, 128);
		if (bParam4)
		{
			if (func_287(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_293(*uParam2, 16))
		{
			if (func_287(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (iParam7 && unk_0xB87D13D0C064E9D1(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_287(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3)
	{
		if (!bLocal_314)
		{
			iLocal_315 = unk_0x7F6DC62EA9922664(iParam0);
			bLocal_314 = true;
		}
		iLocal_316 = unk_0x7F6DC62EA9922664(iParam0);
		iLocal_317 = (iLocal_315 - iLocal_316);
		iVar0 = unk_0x728870EB733D12A1();
		if (!unk_0x437347B10A200C4B(iVar0, 0))
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_317) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_314)
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 1))
			{
				if (IntToFloat(iLocal_317) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0x728870EB733D12A1();
		if (!unk_0x437347B10A200C4B(iVar1, 0))
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			if (unk_0x36646919F20EAFFC(iParam0))
			{
				if (unk_0x710D117BA581D7D2(iParam0) == unk_0x16F2683693E537C9())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
		{
			if (unk_0x5A91F08DF773C39D(iParam0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (unk_0x1A069ED4E9BDE50A(unk_0xD803B885F5E47A62()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xE9B814896D415EDD(unk_0x16F2683693E537C9()))
	{
		if (unk_0xC021B60D52071374(iParam0))
		{
			return 1;
		}
	}
	if (func_288(unk_0x16F2683693E537C9(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x869EFD0BC0868856(iParam0) && func_295(iParam0, 1) < 1,5f)
		{
			return 1;
		}
		else if (unk_0x405E212DDE472467(iParam0, 0))
		{
			if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), unk_0x6937EA2286828455(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iParam0))
		{
			return 1;
		}
		if (!unk_0x437347B10A200C4B(iParam1, 0))
		{
			if (unk_0xB87D13D0C064E9D1(iParam1, unk_0x16F2683693E537C9(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_288(int iParam0, int iParam1)
{
	unk_0xCAE036C45E7FC720(iParam0, &iVar0, 1);
	if (iVar0 == 883325847)
	{
		if (unk_0x168558745A6AC21E(iParam0))
		{
			if (vdist(unk_0x68F4C0EC296D3901(iParam0, true), unk_0x68F4C0EC296D3901(iParam1, true)) < 2,5f)
			{
				if (unk_0x7069CC4DE1EA3FAA(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_289(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x03A10A5707B2BB1F(iParam0, 4))
	{
		if (unk_0x168558745A6AC21E(iParam0) && !unk_0x52AE17073D025311(iParam0))
		{
			if (unk_0x5A91F08DF773C39D(iParam1, unk_0x68F4C0EC296D3901(iParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_290(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	iVar3 = 0;
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam1, true) };
	}
	if (unk_0xD3DCEC81D13AAFB1(vVar0, 4f, 1))
	{
		return 1;
	}
	if (unk_0xD15F544473A95FE8(vVar0, to_float(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x03A10A5707B2BB1F(iParam0, 2))
	{
		if (unk_0x168558745A6AC21E(iParam0))
		{
			if (unk_0x5A91F08DF773C39D(iParam1, unk_0x68F4C0EC296D3901(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (unk_0x7069CC4DE1EA3FAA(unk_0x940C1429253D3B1B(iParam1), iParam0, 120f) && unk_0xF649DD3BF44195C7(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x405E212DDE472467(unk_0x940C1429253D3B1B(iParam1), 0))
			{
				iVar3 = unk_0x6937EA2286828455(unk_0x940C1429253D3B1B(iParam1), 0);
			}
			if (unk_0xFB275CE013F3A38C(iParam0) || func_291(iVar3))
			{
				if (unk_0x5A91F08DF773C39D(iParam1, unk_0x68F4C0EC296D3901(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (unk_0x7069CC4DE1EA3FAA(unk_0x940C1429253D3B1B(iParam1), iParam0, 120f) && unk_0xF649DD3BF44195C7(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x723EE7F83DF1497D((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_291(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (unk_0xA30B8362589C124A(iParam0, -1, 0) != 0)
			{
				if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 1))
				{
					if (iVar0 == 741814745)
					{
						if (func_273(unk_0x16F2683693E537C9(), iParam0, 1) < 40f)
						{
							if (unk_0x38AF5DD0BDDE9545(unk_0xD803B885F5E47A62(), &iVar1))
							{
								if ((unk_0xE2F1E99DD161A861(iVar1) && unk_0x96A5FE5834B81CE7(iVar1) == iParam0) || (unk_0xEC560E589DF8370E(iVar1) && unk_0x940C1429253D3B1B(iVar1) == unk_0xA30B8362589C124A(iParam0, -1, 0)))
								{
									if ((unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()) && unk_0x06F8112AA79C53D9(0, 24)) || (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && unk_0x06F8112AA79C53D9(0, 69)))
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
	return 0;
}

int func_292(int iParam0, var uParam1)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 6))
		{
			if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
			{
				if (unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), 90f))
				{
					if (func_295(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x1C0640BA9A7327B3();
						}
						else if ((unk_0x1C0640BA9A7327B3() - uParam1->f_1) > uParam1->f_3)
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

bool func_293(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_294(var uParam0, int iParam1)
{
	return uParam0->f_152[iParam1];
}

float func_295(int iParam0, bool bParam1)
{
	return func_273(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), iParam0, bParam1);
}

void func_296(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < func_320(uParam0))
	{
		func_61(uParam0, iVar0);
		func_38(&(uParam0->f_15[iVar0]));
		func_297(&(uParam0->f_15[iVar0]));
		if (unk_0xC844350D5D58C99A(uParam0->f_15[iVar0].f_2) && !unk_0x437347B10A200C4B(uParam0->f_15[iVar0].f_2, 0))
		{
			unk_0xA3BF0AA5A2608191(uParam0->f_15[iVar0].f_2);
		}
		func_301(uParam0, iVar0);
		iVar0++;
	}
	func_54(uParam0, -2);
}

void func_297(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_5))
	{
		unk_0xEEEE2E5FA6F78DF0(&(uParam0->f_5));
	}
}

int func_298(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_15)
	{
		return 0;
	}
	return func_40(&(uParam0->f_15[iParam1]), iParam2);
}

int func_299(var uParam0)
{
	return uParam0->f_2;
}

void func_300(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4)
{
	if (!unk_0xC844350D5D58C99A(func_299(uParam0)))
	{
		return;
	}
	if (unk_0x437347B10A200C4B(func_299(uParam0), 0) || unk_0xEB6A8945D1AC98A1(func_299(uParam0)))
	{
		return;
	}
	if (!unk_0xC844350D5D58C99A(iParam1))
	{
		return;
	}
	if (unk_0xD1960163A3042274(func_299(uParam0), -1794415470) == 1)
	{
		return;
	}
	vVar0 = { func_278(uParam0) };
	vVar3 = { unk_0x68F4C0EC296D3901(iParam1, true) };
	vVar6 = { unk_0x68F4C0EC296D3901(func_299(uParam0), true) };
	if (vdist2(vVar6, vVar3) > (150f * 150f) && vdist2(vVar0, vVar3) > (150f * 150f))
	{
		if (!func_40(uParam0, 1048576))
		{
			unk_0xF8E2576BF543A13C(uParam0->f_2, 0);
			unk_0x46CB381A452EF99D(uParam0->f_2, 0);
		}
		func_57(uParam0, 1048576);
	}
	else
	{
		if (func_40(uParam0, 1048576))
		{
			unk_0xF8E2576BF543A13C(uParam0->f_2, 1);
			unk_0x46CB381A452EF99D(uParam0->f_2, 1);
		}
		func_261(uParam0, 1048576);
	}
	if (vdist2(vVar0, vVar3) > (150f * 150f))
	{
		func_57(uParam0, 262144);
		if (vVar0.z > 100f)
		{
			if (unk_0xC844350D5D58C99A(uParam0->f_3))
			{
				if (!unk_0x437347B10A200C4B(uParam0->f_3, 0))
				{
					unk_0xA47B46945FF6DE74(uParam0->f_3, vVar0.x, vVar0.y, 50f, 1, false, 0, 1);
				}
			}
		}
	}
	else
	{
		if (func_40(uParam0, 262144))
		{
			if (unk_0xC844350D5D58C99A(uParam0->f_3))
			{
				if (!unk_0x437347B10A200C4B(uParam0->f_3, 0))
				{
					vVar10 = { uParam0->f_7 + Vector(50f, 0f, 0f) };
					if (unk_0xE82754C349C7B581(vVar10, &uVar9, 0, 0))
					{
						uParam0->f_7.f_2 = uVar9;
						unk_0xA47B46945FF6DE74(uParam0->f_3, uParam0->f_7, 1, false, 0, 1);
					}
				}
			}
			if (func_22(uParam0) == 5)
			{
				func_17(uParam0, 6, 0);
			}
			func_261(uParam0, 262144);
		}
		if (func_40(uParam0, 524288) && func_267(uParam2, -1))
		{
			fVar13 = vdist(vVar6, vVar0);
			vVar14 = { func_6(vVar0 - vVar6) };
			vVar17 = { vVar6 + vVar14 * Vector(fVar13, fVar13, fVar13) * Vector(0,5f, 0,5f, 0,5f) };
			func_42(uParam2, iParam3, vVar17, uParam4, 1, 1);
			if (unk_0xD1960163A3042274(func_299(uParam0), 1435919172) == 1)
			{
				unk_0xA3BF0AA5A2608191(func_299(uParam0));
			}
		}
	}
	if (vdist2(vVar6, vVar3) > (150f * 150f))
	{
		func_57(uParam0, 524288);
		if (func_40(uParam0, 262144) && iParam3 == func_270(uParam2))
		{
			if (unk_0xD1960163A3042274(uParam0->f_2, 1435919172) == 1)
			{
				unk_0xA3BF0AA5A2608191(uParam0->f_2);
			}
			func_277(uParam2, 2);
		}
	}
	else if (func_40(uParam0, 524288))
	{
		if (func_40(uParam0, 262144) && func_267(uParam2, -1))
		{
			func_192(uParam2, iParam3, uParam4, 1, 1);
			if (unk_0xD1960163A3042274(uParam0->f_2, 1435919172) == 1)
			{
				unk_0xA3BF0AA5A2608191(uParam0->f_2);
			}
			func_277(uParam2, 5);
			if (func_264(uParam4, uParam2))
			{
				func_17(uParam0, 0, 0);
			}
			else
			{
				func_17(uParam0, 1, 0);
			}
		}
		else
		{
			func_267(uParam2, -1);
			if (unk_0xE82754C349C7B581(vVar6, &uVar9, 0, 0))
			{
				vVar6.z = uVar9;
				unk_0xA47B46945FF6DE74(uParam0->f_2, vVar6, 1, false, 0, 1);
			}
		}
		func_261(uParam0, 524288);
	}
}

void func_301(var uParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(func_284(uParam0, iParam1)) && !unk_0x437347B10A200C4B(func_284(uParam0, iParam1), 0))
	{
		if (!unk_0xF649DD3BF44195C7(func_284(uParam0, iParam1), unk_0x16F2683693E537C9(), 17))
		{
			unk_0xEBA53F35D0085654(&(uParam0->f_15[iParam1].f_2));
			return;
		}
		else if (!func_298(uParam0, iParam1, 16777216))
		{
			unk_0xF3268524E9BE6D6E(func_284(uParam0, iParam1), unk_0x16F2683693E537C9(), 150f, -1, 0, 0);
		}
		if (unk_0x65851B2C8786EE74(func_284(uParam0, iParam1)))
		{
			unk_0xA3BF0AA5A2608191(func_284(uParam0, iParam1));
			unk_0xF3268524E9BE6D6E(func_284(uParam0, iParam1), unk_0x16F2683693E537C9(), 150f, -1, 0, 0);
		}
	}
	func_56(uParam0, iParam1, 16777216);
}

int func_302(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < func_320(uParam0))
	{
		if (!func_298(uParam0, iVar0, 16777216))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_303(var uParam0, var uParam1)
{
	func_60(uParam1, uParam0);
	func_51(uParam0, 0);
	func_54(uParam0, 2);
	func_44(uParam1, uParam0);
	if (!unk_0xEB6A8945D1AC98A1(func_284(uParam0, 0)))
	{
		vVar0 = { -1238,818f, 109,3903f, 55,91227f };
		iVar3 = func_309(uParam0, 0);
		func_308(uParam0, 0, vVar0);
		if (unk_0xC844350D5D58C99A(iVar3))
		{
			unk_0xF690C84DADBB3551(&iVar3);
		}
		func_307(uParam0, 0, func_247(vVar0, 0f));
		func_9(uParam0, 0, vVar0, 3, 0);
		func_306(uParam0, 0, 2);
		func_255(uParam0, 0, 1);
		func_305(uParam0, 0, 4);
		func_304(uParam0, 0, 4f);
		unk_0xA47B46945FF6DE74(func_284(uParam0, 0), -1241,802f, 107,3439f, 55,7186f, 1, false, 0, 1);
		unk_0xD8F6A53F4799FAFE(func_284(uParam0, 0), 342,8433f);
	}
	if (!unk_0xEB6A8945D1AC98A1(func_284(uParam0, 1)))
	{
		vVar0 = { -1236,201f, 112,7829f, 56,23418f };
		iVar3 = func_309(uParam0, 1);
		unk_0x327AAEE25F323797(func_284(uParam0, 1));
		if (unk_0xC844350D5D58C99A(iVar3))
		{
			unk_0xF690C84DADBB3551(&iVar3);
		}
		func_308(uParam0, 1, vVar0);
		func_307(uParam0, 1, func_247(vVar0, 0f));
		func_9(uParam0, 1, vVar0, 8, 0);
		func_306(uParam0, 1, 2);
		func_255(uParam0, 1, 10);
		unk_0xA47B46945FF6DE74(func_284(uParam0, 1), -1243,465f, 104,3183f, 55,5857f, 1, false, 0, 1);
		unk_0xD8F6A53F4799FAFE(func_284(uParam0, 1), 306,093f);
	}
	if (unk_0xC844350D5D58C99A(func_294(uParam0, 0)) && unk_0xDF1306B443CD3D15(func_294(uParam0, 0), 0))
	{
		unk_0xA47B46945FF6DE74(func_294(uParam0, 0), -1257,234f, 94,0251f, 54,784f, 0, false, 0, 1);
		unk_0xD8F6A53F4799FAFE(func_294(uParam0, 0), 240,9284f);
	}
	func_277(uParam0, 2);
}

void func_304(var uParam0, int iParam1, float fParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_15)
	{
		return;
	}
	func_46(&(uParam0->f_15[iParam1]), fParam2);
}

void func_305(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_15)
	{
		return;
	}
	func_241(&(uParam0->f_15[iParam1]), iParam2);
}

void func_306(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_15)
	{
		return;
	}
	func_45(&(uParam0->f_15[iParam1]), iParam2);
}

void func_307(var uParam0, int iParam1, var uParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_15)
	{
		return;
	}
	func_246(&(uParam0->f_15[iParam1]), uParam2);
}

void func_308(var uParam0, int iParam1, vector3 vParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_15)
	{
		return;
	}
	func_48(&(uParam0->f_15[iParam1]), vParam2);
}

int func_309(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_15)
	{
		return 0;
	}
	return func_251(&(uParam0->f_15[iParam1]));
}

void func_310(int iParam0)
{
	Global_110666.f_1 = (Global_110666.f_1 || iParam0);
}

void func_311(var uParam0, int iParam1)
{
	uParam0->f_22 = (uParam0->f_22 - (uParam0->f_22 && iParam1));
}

void func_312(var uParam0, var uParam1, int iParam2, int iParam3)
{
	vVar5 = { 0f, 0f, 0f };
	iVar4 = 0;
	while (iVar4 < (iParam3 + 1 / 2))
	{
		if (!unk_0xC844350D5D58C99A(func_294(uParam1, iVar4)))
		{
			if (iVar4 == 1)
			{
				vVar5 = { Vector(10f, 10f, 10f) * unk_0x08D89CE2E20AE305(func_294(uParam1, 0)) };
			}
			if (func_43(func_327(uParam0, iParam2) + vVar5, func_41(uParam0, func_313(uParam1)), &vVar0, &iVar3))
			{
				func_285(uParam1, unk_0x122AAB0B1D6F55AD(1147287684, vVar0, iVar3, true, true, false), iVar4);
				unk_0xD3421E391490133B(func_294(uParam1, iVar4), 5, true);
				unk_0x120A395B0ECB8EA5(func_294(uParam1, iVar4), true);
			}
		}
		iVar4++;
	}
}

int func_313(var uParam0)
{
	return uParam0->f_158;
}

void func_314(var uParam0, var uParam1, int iParam2)
{
	iVar4 = 3;
	func_318(uParam1, iParam2, 4);
	if (iParam2 == 0)
	{
		vVar0 = { func_327(uParam0, func_313(uParam1)) };
	}
	else
	{
		vVar0 = { func_266(uParam0, func_313(uParam1), iParam2) };
	}
	if (!unk_0xC844350D5D58C99A(func_284(uParam1, iParam2)))
	{
		iVar3 = func_317(&iVar4, 1065437102);
		func_315(uParam1, iParam2, unk_0x36F2404464202779(iVar4, iVar3, vVar0, 0f, 1, true));
		unk_0xD8F6A53F4799FAFE(func_284(uParam1, iParam2), func_248(vVar0, func_327(uParam0, func_313(uParam1))));
		if (unk_0xDF3FDDA1EADEDD07("move_m@golfer@"))
		{
			unk_0x9237814869823B3E(func_284(uParam1, iParam2), "move_m@golfer@");
		}
		unk_0x004A9F3F2E1E4B43(func_284(uParam1, iParam2), 1);
	}
}

void func_315(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_15)
	{
		return;
	}
	func_316(&(uParam0->f_15[iParam1]), iParam2);
}

void func_316(var uParam0, var uParam1)
{
	uParam0->f_2 = uParam1;
}

int func_317(int iParam0, float fParam1)
{
	if (unk_0x79833B02DBD2A244(0, 1065353216) < fParam1)
	{
		*iParam0 = 4;
		return -685776591;
	}
	*iParam0 = 5;
	return 2111372120;
}

void func_318(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_15)
	{
		return;
	}
	func_319(&(uParam0->f_15[iParam1]), iParam2);
}

void func_319(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1;
}

int func_320(var uParam0)
{
	return uParam0->f_156;
}

void func_321(var uParam0, var uParam1, int iParam2, int iParam3)
{
	func_54(uParam1, iParam2);
	func_324(uParam1, iParam3);
	func_323(uParam1, 0, 0);
	func_323(uParam1, 2, 1);
	func_322(uParam1, 0);
	func_44(uParam0, uParam1);
	func_51(uParam1, 0);
	func_277(uParam1, 2);
}

void func_322(var uParam0, int iParam1)
{
	uParam0->f_165 = iParam1;
}

void func_323(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_167[iParam2] = iParam1;
}

void func_324(var uParam0, var uParam1)
{
	uParam0->f_156 = uParam1;
}

bool func_325(int iParam0)
{
	return (Global_110666.f_1 && iParam0) != 0;
}

int func_326()
{
	if (unk_0x8A22C4C08282BF26(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

Vector3 func_327(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_28)
	{
		return 0f, 0f, 0f;
	}
	return func_15(iParam1);
}

bool func_328(int iParam0)
{
	return (iParam0 > 6 && iParam0 < 18);
}

void func_329(var uParam0)
{
	func_330(uParam0, 1);
	func_330(uParam0, 3);
	func_330(uParam0, 5);
	func_330(uParam0, 7);
	func_330(uParam0, 8);
	func_330(uParam0, 9);
	func_330(uParam0, 10);
	func_330(uParam0, 11);
	func_330(uParam0, 12);
	func_330(uParam0, 13);
	func_330(uParam0, 14);
	func_330(uParam0, 16);
	func_330(uParam0, 17);
	func_330(uParam0, 19);
}

int func_330(var uParam0, int iParam1)
{
	iVar1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			func_331(uParam0[iVar0], iParam1);
			uParam0->f_15++;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_331(var uParam0, var uParam1)
{
	*uParam0 = uParam1;
}

int func_332(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!unk_0xB87F6CF6E5628C67((*uParam0)[iVar0]))
			{
				if (!unk_0xB87F6CF6E5628C67((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_333(var uParam0)
{
	func_335(uParam0, -685776591);
	func_335(uParam0, 1750479612);
	func_335(uParam0, -1358020705);
	func_335(uParam0, 1933637837);
	func_335(uParam0, 1705580940);
	func_335(uParam0, 334347537);
	func_335(uParam0, 1147287684);
	func_334(uParam0);
}

void func_334(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x523BCC9DC80CD82F((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_335(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_336(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_336(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_337()
{
	return "MINI@GOLFAI";
}

void func_338(var uParam0)
{
	uParam0->f_30[0] = { -1339,236f, 60,7393f, 54,0802f };
	uParam0->f_30[1] = { -1339,235f, 59,1891f, 54,0802f };
	uParam0->f_30[2] = { -1337,066f, 56,556f, 54,0804f };
	uParam0->f_30[3] = { -1342,315f, 59,0051f, 54,2456f };
	uParam0->f_43[0] = { -1324,392f, 59,1355f, 52,5704f };
	uParam0->f_43[1] = { -1324,455f, 55,1355f, 52,571f };
	uParam0->f_43[2] = { -1324,455f, 51,1355f, 52,571f };
	uParam0->f_43[3] = { -1324,455f, 47,1355f, 52,571f };
	uParam0->f_28 = 9;
	func_339(uParam0);
}

void func_339(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < func_53(uParam0))
	{
		(*uParam0)[iVar0] = (vdist(func_327(uParam0, iVar0), func_249(uParam0, iVar0)) + vdist(func_249(uParam0, iVar0), func_41(uParam0, iVar0)));
		if ((*uParam0)[iVar0] < 35f)
		{
			uParam0[iVar0]->f_1 = 1;
		}
		else if ((*uParam0)[iVar0] < 125f)
		{
			uParam0[iVar0]->f_1 = 3;
		}
		else if ((*uParam0)[iVar0] < 260f)
		{
			uParam0[iVar0]->f_1 = 4;
		}
		else
		{
			uParam0[iVar0]->f_1 = 5;
		}
		iVar1 = (iVar1 + uParam0[iVar0]->f_1);
		func_340(uParam0, iVar1);
		iVar0++;
	}
}

void func_340(var uParam0, int iParam1)
{
	uParam0->f_29 = iParam1;
}

void func_341(int iParam0)
{
	Global_110666.f_1 = (Global_110666.f_1 - (Global_110666.f_1 && iParam0));
}

void func_342(var uParam0, int iParam1)
{
	func_345(uParam0);
	func_344(iParam1);
	func_343();
	unk_0x8D17794CE3273D70(func_337());
	unk_0x10FAF14A60A0DBE1();
}

void func_343()
{
	Global_110666 = -1;
	Global_110666.f_1 = 0;
}

void func_344(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar1 = 0;
		while (iVar1 < func_320(uParam0[iVar0]))
		{
			func_61(uParam0[iVar0], iVar1);
			func_38(&(uParam0[iVar0]->f_15[iVar1]));
			func_297(&(uParam0[iVar0]->f_15[iVar1]));
			if (unk_0xC844350D5D58C99A(uParam0[iVar0]->f_15[iVar1].f_2))
			{
				unk_0x6DAD7906B73F064D(&(uParam0[iVar0]->f_15[iVar1].f_2));
			}
			iVar1++;
		}
		if (unk_0xC844350D5D58C99A(uParam0[iVar0]->f_152[0]))
		{
			unk_0x046C362CF15F1935(&(uParam0[iVar0]->f_152[0]));
		}
		if (unk_0xC844350D5D58C99A(uParam0[iVar0]->f_152[1]))
		{
			unk_0x046C362CF15F1935(&(uParam0[iVar0]->f_152[1]));
		}
		iVar0++;
	}
}

void func_345(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar1 = func_102(uParam0, iVar0);
		if (unk_0xC844350D5D58C99A(iVar1) && unk_0xAF6690C489CC6203(iVar1))
		{
			unk_0xEEEE2E5FA6F78DF0(&iVar1);
			unk_0xF690C84DADBB3551(&iVar1);
		}
		iVar0++;
	}
}

