#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<3> Local_43 = { 0, 0, 0 } ;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<6> Local_49[11];
	struct<4> Local_116[5];
	char* sLocal_137 = NULL;
	char* sLocal_138 = NULL;
	struct<3> Local_139 = { 0, 0, 0 } ;
	struct<3> Local_142 = { 0, 0, 0 } ;
	struct<3> Local_145 = { 0, 0, 0 } ;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	var uLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	var uLocal_158 = 2;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172[1] = { 0 };
	var uLocal_174 = 16;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_0 = 3;
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
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	sLocal_137 = "RE_SeaPlane1";
	sLocal_138 = "RE_SeaPlane2";
	Local_139 = { 0f, 0f, 0f };
	Local_145 = { 3097.46f, 2181.55f, 0.5f };
	iLocal_151 = -1;
	iLocal_152 = -1;
	iLocal_153 = joaat("dodo");
	iLocal_154 = joaat("tropic");
	iLocal_155 = joaat("g_m_y_mexgoon_02");
	iLocal_156 = joaat("suntrap");
	iLocal_157 = joaat("g_m_y_armgoon_02");
	Local_142 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0xED06FD5709A59F02(11))
	{
		if (func_199(Local_116[0 /*4*/]))
		{
			unk_0x5DC21979EC6C531F(Local_116[0 /*4*/], 2);
		}
		func_169(1, 0);
	}
	if (func_168() && func_125(Local_142, 32, 0, 0, 1))
	{
		func_122(32);
	}
	else
	{
		unk_0xD39E529EBE5DB04F();
	}
	while (true)
	{
		if ((unk_0x1116855A2A7A342C() || func_121(1)) || func_121(4))
		{
			if (func_121(7))
			{
				func_82();
			}
			switch (iLocal_47)
			{
				case 0:
					func_35();
					break;
				
				case 1:
					func_1();
					break;
			}
		}
		else
		{
			if (func_199(Local_116[0 /*4*/]))
			{
				unk_0x5DC21979EC6C531F(Local_116[0 /*4*/], 2);
			}
			func_169(1, 0);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	switch (iLocal_48)
	{
		case 0:
			iLocal_48 = 1;
			break;
		
		case 1:
			switch (iLocal_148)
			{
				case 0:
					iLocal_48 = 2;
					break;
			}
			break;
		
		case 2:
			func_2();
			break;
	}
}

void func_2()
{
	func_32(66, 1);
	func_32(67, 1);
	func_6(-1, 0);
	func_3();
	func_169(1, 0);
}

void func_3()
{
	func_4();
}

int func_4()
{
	if (func_5(0))
	{
		return 0;
	}
	if (Global_98994.f_8)
	{
		if (Global_98994.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98994.f_10 > 1)
	{
		return 0;
	}
	Global_98994.f_10++;
	return 1;
}

bool func_5(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

void func_6(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_29(iParam0))
	{
		func_28(iParam0, iParam1);
		if (!func_27(51))
		{
			func_17("RE_REWARD", 1, 0, 4000, 10000, func_20(), 0, 138, 0);
			func_16(51);
		}
		if (func_15(iParam0))
		{
			Global_111858.f_24991.f_2 = 3;
		}
		if (func_14(iParam0, iParam1) != 322)
		{
			func_8(func_14(iParam0, iParam1), Local_43.x, Local_43.f_1);
		}
		Global_111846 = iParam1;
		if (Global_111844 == 0)
		{
			if (((Global_111847 == 1 || Global_111847 == 5) || Global_111847 == 11) || Global_111847 == 25)
			{
				func_7(2);
			}
			else if ((Global_111847 == 26 || Global_111847 == 8) || Global_111847 == 17)
			{
				func_7(7);
			}
			else
			{
				func_7(1);
			}
		}
	}
}

void func_7(int iParam0)
{
	Global_111844 = iParam0;
}

void func_8(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_12((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_111858.f_10190[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_111858.f_10190[iParam0 /*12*/].f_6 == 11 || Global_111858.f_10190[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111858.f_10190[iParam0 /*12*/].f_5 = 1;
		Global_111858.f_10190[iParam0 /*12*/].f_10 = uParam1;
		Global_111858.f_10190[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0xFB6CC2C6970D6917(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xFB6CC2C6970D6917(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xFB6CC2C6970D6917(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_9();
	}
}

void func_9()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_111594 = 0;
	Global_111595 = 0;
	Global_111596 = 0;
	Global_111597 = 0;
	Global_111598 = 0;
	Global_111599 = 0;
	Global_111600 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_111858.f_10190.f_3853;
	Global_111858.f_10190.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_111858.f_10190[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_111858.f_10190[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_111594++;
					fVar1 = (fVar1 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_111595++;
					fVar2 = (fVar2 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_111596++;
					fVar3 = (fVar3 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_111597++;
					fVar4 = (fVar4 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_111598++;
					fVar5 = (fVar5 + (Global_111858.f_10190[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_111599++;
					fVar6 = (fVar6 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_111600++;
					fVar7 = (fVar7 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_111577 > 0)
	{
		if (Global_111594 == Global_111577)
		{
			fVar1 = 55f;
		}
	}
	if (Global_111578 > 0)
	{
		if (Global_111595 == Global_111578)
		{
			fVar2 = 10f;
		}
	}
	if (Global_111579 > 0)
	{
		if (Global_111596 == Global_111579)
		{
			fVar3 = 0f;
		}
	}
	if (Global_111580 > 0)
	{
		if (Global_111597 == Global_111580)
		{
			fVar4 = 10f;
		}
	}
	if (Global_111581 > 0)
	{
		if (((Global_111598 == Global_111581 || (Global_111581 * 10 / Global_111598) < 41) || Global_111598 > Global_111584) || Global_111598 == Global_111584)
		{
			if (!unk_0xCE990E643CD9D0E5(Global_111858.f_10190.f_3856, 14))
			{
				if (Global_111598 == Global_111581)
				{
					unk_0xFB6CC2C6970D6917(joaat("NUM_RNDEVENTS_COMPLETED"), Global_111581, 0);
					unk_0xBE20AB8238688965(&(Global_111858.f_10190.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_111582 > 0)
	{
		if (Global_111599 == Global_111582)
		{
			fVar6 = 15f;
		}
	}
	if (Global_111583 > 0)
	{
		if (Global_111600 == Global_111583)
		{
			fVar7 = 5f;
		}
	}
	Global_111858.f_10190.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_111598 > Global_111584 || Global_111598 == Global_111584)
	{
		iVar9 = Global_111584;
	}
	else
	{
		iVar9 = Global_111598;
	}
	unk_0x6000E4684CB4330B(joaat("NUM_MISSIONS_COMPLETED"), Global_111594, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_MISSIONS_AVAILABLE"), Global_111577, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_MINIGAMES_COMPLETED"), Global_111595, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_MINIGAMES_AVAILABLE"), Global_111578, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_ODDJOBS_COMPLETED"), Global_111596, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_ODDJOBS_AVAILABLE"), Global_111579, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_111597, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_111580, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_111584, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_MISC_COMPLETED"), (Global_111600 + Global_111599), 1);
	unk_0x6000E4684CB4330B(joaat("NUM_MISC_AVAILABLE"), (Global_111583 + Global_111582), 1);
	Global_111601 = (Global_111594 * 100 / Global_111577);
	Global_111603 = ((Global_111596 + Global_111595) * 100 / (Global_111579 + Global_111578));
	Global_111602 = ((Global_111597 + iVar9) * 100 / (Global_111580 + Global_111584));
	Global_111604 = ((Global_111599 + Global_111600) * 100 / (Global_111582 + Global_111583));
	unk_0x3C2CA88D6219BB12(joaat("TOTAL_PROGRESS_MADE"), Global_111858.f_10190.f_3853, 1);
	unk_0x6000E4684CB4330B(joaat("PERCENT_STORY_MISSIONS"), Global_111601, 1);
	unk_0x6000E4684CB4330B(joaat("PERCENT_AMBIENT_MISSIONS"), Global_111602, 1);
	unk_0x6000E4684CB4330B(joaat("PERCENT_ODDJOBS"), Global_111603, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_111858.f_10190.f_3853))
	{
		func_11(13, SYSTEM::FLOOR(Global_111858.f_10190.f_3853));
	}
	if (!unk_0xC4A02490EB1F450B())
	{
		if (!Global_76833)
		{
			if (func_10() == 2 == 0 && !unk_0x25DDB354A40FFCDB())
			{
				if (unk_0x70E5C9630A26FB40())
				{
					Global_111592 = 0;
				}
				if (!Global_61717)
				{
					func_4();
				}
			}
		}
	}
}

int func_10()
{
	return Global_30968;
}

int func_11(int iParam0, int iParam1)
{
	int iVar0;
	
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
	iVar0 = unk_0x76B47D2BF8F31200(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xD4563E24351CCDF9(iParam0, iParam1);
	}
	return 0;
}

int func_12(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	var uVar25;
	
	if (iParam2 == -1)
	{
		iParam2 = func_13();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x43BE40E27DB6DC2E((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x12730A13C85FC896((iParam0 - 0)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x43BE40E27DB6DC2E((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x12730A13C85FC896((iParam0 - 192)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x43BE40E27DB6DC2E((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x12730A13C85FC896((iParam0 - 513)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x43BE40E27DB6DC2E((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x12730A13C85FC896((iParam0 - 705)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x840F9A9E6D216561((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x12730A13C85FC896((iParam0 - 3111)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x840F9A9E6D216561((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x12730A13C85FC896((iParam0 - 2919)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x12730A13C85FC896((iParam0 - 4207)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x12730A13C85FC896((iParam0 - 4335)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x4B2E4855CB2B4FAA((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x12730A13C85FC896((iParam0 - 6029)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x12730A13C85FC896((iParam0 - 7385)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x12730A13C85FC896((iParam0 - 7321)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x4B2E4855CB2B4FAA((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x12730A13C85FC896((iParam0 - 9361)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x12730A13C85FC896((iParam0 - 15369)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x12730A13C85FC896((iParam0 - 15562)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x12730A13C85FC896((iParam0 - 15946)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x4B2E4855CB2B4FAA((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x12730A13C85FC896((iParam0 - 18098)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = unk_0x4B2E4855CB2B4FAA((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x12730A13C85FC896((iParam0 - 22066)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = unk_0x4B2E4855CB2B4FAA((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x12730A13C85FC896((iParam0 - 24962)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		uVar20 = unk_0x4B2E4855CB2B4FAA((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x12730A13C85FC896((iParam0 - 26810)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		uVar21 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x12730A13C85FC896((iParam0 - 28098)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		uVar22 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x12730A13C85FC896((iParam0 - 28355)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		uVar23 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x12730A13C85FC896((iParam0 - 30227)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		uVar24 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x12730A13C85FC896((iParam0 - 30355)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar24, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		uVar25 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30515), 0, 1, iParam2, "_HISLANDPSTAT_BOOL");
		iVar1 = ((iParam0 - 30515) - unk_0x12730A13C85FC896((iParam0 - 30515)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(uVar25, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_13()
{
	return Global_1312763;
}

int func_14(int iParam0, int iParam1)
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

int func_15(int iParam0)
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

void func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0xBE20AB8238688965(&(Global_111858.f_20406.f_150[iVar1]), iVar0);
	}
}

void func_17(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_18(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_18(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xF005CCA4263DF67F(sParam0, ""))
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
	while (iVar0 < Global_111858.f_20406.f_145)
	{
		if (unk_0xF005CCA4263DF67F(&(Global_111858.f_20406[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111858.f_20406.f_145 < 9)
	{
		StringCopy(&(Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_4), sParam1, 16);
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_8 = (unk_0x578C4EF320340AF7() + iParam3);
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_9 = iParam5;
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_11 = iParam6;
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_12 = uParam2;
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_13 = iParam7;
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_14 = iParam8;
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_10 = ((unk_0x578C4EF320340AF7() + iParam3) + iParam4);
		}
		else
		{
			Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_10 = -1;
		}
		Global_111858.f_20406.f_145++;
		func_19();
	}
}

void func_19()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_111858.f_20406.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111858.f_20406.f_145)
	{
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_20406[iVar0 /*16*/].f_11, 0))
		{
			if (Global_111858.f_20406[iVar0 /*16*/].f_12 > Global_111858.f_20406.f_146[0])
			{
				Global_111858.f_20406.f_146[0] = Global_111858.f_20406[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_20406[iVar0 /*16*/].f_11, 1))
		{
			if (Global_111858.f_20406[iVar0 /*16*/].f_12 > Global_111858.f_20406.f_146[1])
			{
				Global_111858.f_20406.f_146[1] = Global_111858.f_20406[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_20406[iVar0 /*16*/].f_11, 2))
		{
			if (Global_111858.f_20406[iVar0 /*16*/].f_12 > Global_111858.f_20406.f_146[2])
			{
				Global_111858.f_20406.f_146[2] = Global_111858.f_20406[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_20()
{
	func_21();
	switch (Global_111858.f_2359.f_539.f_4321)
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

void func_21()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_25(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_24(unk_0x9B0761B4C3EB8BC7());
			if (func_23(iVar0) && (!func_22(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_23(Global_111858.f_2359.f_539.f_4321))
				{
					Global_111858.f_2359.f_539.f_4322 = Global_111858.f_2359.f_539.f_4321;
				}
				Global_111858.f_2359.f_539.f_4323 = iVar0;
				Global_111858.f_2359.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111858.f_2359.f_539.f_4321 != 145)
			{
				Global_111858.f_2359.f_539.f_4323 = Global_111858.f_2359.f_539.f_4321;
			}
			return;
		}
	}
	Global_111858.f_2359.f_539.f_4321 = 145;
}

bool func_22(int iParam0)
{
	return Global_41631 == iParam0;
}

bool func_23(int iParam0)
{
	return iParam0 < 3;
}

int func_24(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(uParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(uParam0);
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
	return Global_1848[iParam0 /*29*/];
}

int func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xCE990E643CD9D0E5(Global_111858.f_20406.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_28(int iParam0, int iParam1)
{
	unk_0xBE20AB8238688965(&(Global_111858.f_24991.f_8[iParam0]), iParam1);
}

int func_29(int iParam0)
{
	int iVar0;
	
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

int func_30()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x6C5C6B207AA78253(), 64);
	uVar16 = func_31(Var0);
	return uVar16;
}

int func_31(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x856D5567211886A2(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_32(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_34(iParam0, 0))
		{
			func_33(iParam0, 1, 0);
			func_33(iParam0, 2, 0);
			func_33(iParam0, 3, 0);
			func_33(iParam0, 4, 0);
			func_33(iParam0, 0, 1);
			Global_75654[iParam0] = 1;
		}
	}
	else
	{
		func_33(iParam0, 0, 0);
	}
}

void func_33(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xBE20AB8238688965(&(Global_111858.f_32745[iParam0]), iParam1);
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_111858.f_32745[iParam0]), iParam1);
	}
}

bool func_34(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_111858.f_32745[iParam0], iParam1);
}

void func_35()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	switch (iLocal_48)
	{
		case 0:
			func_69();
			func_68(7);
			unk_0x78FCB2E22C41B9D5(iLocal_154);
			iLocal_48 = 1;
			break;
		
		case 1:
			switch (iLocal_148)
			{
				case 0:
					if (unk_0x7D167B9A0CCDA347(iLocal_154))
					{
						unk_0x78FCB2E22C41B9D5(iLocal_153);
						iLocal_148++;
					}
					break;
				
				case 1:
					if (unk_0x7D167B9A0CCDA347(iLocal_153))
					{
						unk_0x78FCB2E22C41B9D5(iLocal_155);
						iLocal_148++;
					}
					break;
				
				case 2:
					if (unk_0x7D167B9A0CCDA347(iLocal_155))
					{
						unk_0x78FCB2E22C41B9D5(iLocal_156);
						iLocal_148++;
					}
					break;
				
				case 3:
					if (unk_0x7D167B9A0CCDA347(iLocal_156))
					{
						unk_0x78FCB2E22C41B9D5(iLocal_157);
						iLocal_148++;
					}
					break;
				
				case 4:
					if (unk_0x7D167B9A0CCDA347(iLocal_157))
					{
						unk_0xBBF766AC368C3EB1(sLocal_137);
						iLocal_148++;
					}
					break;
				
				case 5:
					if (unk_0x338C0BA03A21B0DB(sLocal_137))
					{
						unk_0xBBF766AC368C3EB1(sLocal_138);
						iLocal_148++;
					}
					break;
				
				case 6:
					if ((((((unk_0x7D167B9A0CCDA347(iLocal_154) && unk_0x7D167B9A0CCDA347(iLocal_153)) && unk_0x7D167B9A0CCDA347(iLocal_155)) && unk_0x7D167B9A0CCDA347(iLocal_157)) && unk_0x7D167B9A0CCDA347(iLocal_156)) && unk_0x338C0BA03A21B0DB(sLocal_137)) && unk_0x338C0BA03A21B0DB(sLocal_138))
					{
						func_64(0, Local_139, -1f, 1);
						unk_0x74528AC0906CBABE(iLocal_153);
						func_64(1, Local_139, -1082130432, 0);
						func_64(2, Local_139, -1082130432, 0);
						iVar0 = 0;
						while (iVar0 <= 4)
						{
							func_55(iVar0, 0, Local_139, -1082130432);
							iVar0++;
						}
						func_45(1);
						iLocal_148++;
					}
					break;
				
				case 7:
					if (func_44())
					{
						func_43(&(Local_116[0 /*4*/].f_1));
						func_68(1);
						unk_0xEFBCE8F8316F89EA(5, 1862763509, iLocal_171);
						unk_0xEFBCE8F8316F89EA(5, iLocal_171, 1862763509);
						func_64(3, Local_139, -1082130432, 0);
						func_64(4, Local_139, -1082130432, 0);
						unk_0x74528AC0906CBABE(iLocal_154);
						unk_0x74528AC0906CBABE(iLocal_156);
						func_55(7, 0, Local_139, -1082130432);
						func_55(8, 0, Local_139, -1082130432);
						func_55(9, 0, Local_139, -1082130432);
						func_55(10, 0, Local_139, -1082130432);
						unk_0x74528AC0906CBABE(iLocal_155);
						unk_0x74528AC0906CBABE(iLocal_157);
						iLocal_148++;
					}
					if (func_42())
					{
						if (!unk_0xE43E3F96A5D750CE(unk_0x9B0761B4C3EB8BC7()))
						{
							unk_0xEFBCE8F8316F89EA(5, 1862763509, iLocal_171);
							unk_0xEFBCE8F8316F89EA(5, iLocal_171, 1862763509);
						}
						else if (!func_121(2))
						{
							unk_0xEFBCE8F8316F89EA(3, 1862763509, iLocal_171);
							unk_0xEFBCE8F8316F89EA(3, iLocal_171, 1862763509);
						}
					}
					break;
				
				case 8:
					bVar1 = true;
					iVar2 = 0;
					while (iVar2 <= 10)
					{
						if (!func_39(iVar2, 0))
						{
							bVar1 = false;
						}
						iVar2++;
					}
					if (bVar1)
					{
						iLocal_148++;
					}
					break;
				
				case 9:
					if (func_199(Local_116[0 /*4*/]))
					{
						if (func_38(unk_0x9B0761B4C3EB8BC7(), Local_145, 1) >= 200f && func_38(Local_116[0 /*4*/], Local_145, 1) >= 200f)
						{
							iLocal_48 = 2;
						}
					}
					else
					{
						func_37();
					}
					break;
			}
			break;
		
		case 2:
			func_36(1);
			break;
	}
}

void func_36(int iParam0)
{
	iLocal_148 = 0;
	iLocal_48 = 0;
	iLocal_47 = iParam0;
}

void func_37()
{
	if (func_199(Local_116[0 /*4*/]))
	{
		unk_0x5DC21979EC6C531F(Local_116[0 /*4*/], 2);
	}
	func_169(1, 0);
}

float func_38(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xA59F96B50B97E63C(uParam0, 0))
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(uParam0, 0) };
	}
	return unk_0x272784C60C397DB6(Var0, Param1, iParam4);
}

int func_39(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_199(Local_49[iParam0 /*6*/]))
	{
		return 1;
	}
	else
	{
		if (func_41(Local_49[iParam0 /*6*/], unk_0x9B0761B4C3EB8BC7(), 1) >= 400f)
		{
			func_40(iParam0, 0);
			return 1;
		}
		if (bParam1)
		{
			iVar0 = iParam0;
			if (iVar0 >= 7 && !unk_0x8F678487EEBD8CE4(Local_49[iParam0 /*6*/].f_1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_40(int iParam0, bool bParam1)
{
	if (unk_0xAE06B9E39EBDE049(Local_49[iParam0 /*6*/]))
	{
		func_43(&(Local_49[iParam0 /*6*/].f_1));
		if ((((func_199(Local_49[iParam0 /*6*/]) && unk_0xB77B1396EAA80D8F(Local_49[iParam0 /*6*/])) && !unk_0x47DBF174A0CB9D55(Local_49[iParam0 /*6*/], 1)) && !unk_0x6E0C5E7AAF8B6214(Local_49[iParam0 /*6*/])) && !unk_0x11B7C25143EE2F29(Local_49[iParam0 /*6*/]))
		{
			unk_0x1F8106DB8796859F(Local_49[iParam0 /*6*/], 1, 1);
		}
		if (bParam1)
		{
			unk_0x586DDC617E714637(&(Local_49[iParam0 /*6*/]));
		}
		else
		{
			unk_0x2481907DEE6B85EA(&(Local_49[iParam0 /*6*/]));
		}
		Local_49[iParam0 /*6*/].f_3 = 0;
		Local_49[iParam0 /*6*/].f_2 = 0;
	}
}

float func_41(var uParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xA59F96B50B97E63C(uParam0, 0))
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(uParam0, 0) };
	}
	if (!unk_0xA59F96B50B97E63C(uParam1, 0))
	{
		Var3 = { unk_0x3E4D3CCC220BDFB1(uParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x3E4D3CCC220BDFB1(uParam1, 0) };
	}
	return unk_0x272784C60C397DB6(Var0, Var3, iParam2);
}

bool func_42()
{
	return unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 3150.508f, 2179.343f, -3.388727f, 3064.608f, 2223.616f, 12.38177f, 103f, 0, 1, 0);
}

void func_43(var uParam0)
{
	if (unk_0x8F678487EEBD8CE4(*uParam0))
	{
		unk_0x72BEFB9451782F60(*uParam0, 0);
		unk_0x93370FA10F15BE44(uParam0);
	}
}

int func_44()
{
	if (func_199(Local_116[0 /*4*/]) && unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), Local_116[0 /*4*/], 0))
	{
		return 1;
	}
	return 0;
}

int func_45(int iParam0)
{
	if (func_49())
	{
		Global_111848 = 1;
		Global_111845 = unk_0x578C4EF320340AF7();
		if (func_15(Global_111847))
		{
			func_46(0);
		}
		unk_0x694F632EFD1F47D0(1, "RE_TITLE");
		if (iParam0 && func_15(Global_111847))
		{
			unk_0x1D42FFF20D06E356();
		}
		return 1;
	}
	return 0;
}

void func_46(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111858.f_24991.f_2 < 3)
			{
				if (!unk_0x19D4274B54F9D9FA())
				{
					func_47(func_48(iParam0), -1);
					Global_111858.f_24991.f_2++;
					unk_0xBE20AB8238688965(&Global_111854, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xCE990E643CD9D0E5(Global_111854, 1))
			{
				if (!unk_0x19D4274B54F9D9FA())
				{
					func_47(func_48(iParam0), -1);
					Global_111858.f_24991.f_3++;
					unk_0xBE20AB8238688965(&Global_111854, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xCE990E643CD9D0E5(Global_111854, 2))
			{
				if (!unk_0x19D4274B54F9D9FA())
				{
					func_47(func_48(iParam0), -1);
					Global_111858.f_24991.f_4++;
					unk_0xBE20AB8238688965(&Global_111854, 2);
				}
			}
			break;
	}
}

void func_47(var uParam0, int iParam1)
{
	unk_0x17751E107423AFE9(uParam0);
	unk_0x1A169149B3D18FCB(0, 0, 1, iParam1);
}

char* func_48(int iParam0)
{
	char* sVar0;
	
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

int func_49()
{
	switch (func_50(&Global_31027, 0, 5, 0, unk_0x354AD085195C5FA6()))
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

int func_50(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96433.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_54(0))
		{
			return 0;
		}
		Global_41595++;
		*uParam0 = Global_41595;
		unk_0xBF70D1B666A353F5(unk_0x2639A2323BEA8CC6(), 0);
		Global_22411.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x09BA0099935AAA6B(8);
		}
		Global_41631 = iParam2;
		Global_41593 = *uParam0;
		Global_41594 = iParam4;
		Global_41592 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_41592 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41592)
			{
				if (Global_41598[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41593 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_52(iParam2))
		{
			return 0;
		}
		if (Global_41592 == 8)
		{
			return 0;
		}
		Global_41595++;
		*uParam0 = Global_41595;
		Global_41598[Global_41592 /*4*/] = Global_41595;
		Global_41598[Global_41592 /*4*/].f_1 = iParam1;
		Global_41598[Global_41592 /*4*/].f_2 = iParam2;
		Global_41598[Global_41592 /*4*/].f_3 = 0;
		Global_41592++;
		if (iParam4 != 0)
		{
			func_51(uParam0, iParam4);
		}
	}
	return 2;
}

void func_51(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_41592 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41592)
	{
		if (Global_41598[iVar0 /*4*/] == *uParam0)
		{
			Global_41598[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_52(int iParam0)
{
	return func_53(iParam0, Global_41631);
}

int func_53(int iParam0, int iParam1)
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

int func_54(int iParam0)
{
	if (Global_41631 == 15)
	{
		return 0;
	}
	if (func_52(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_55(int iParam0, bool bParam1, struct<3> Param2, float fParam5)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	struct<3> Var9;
	struct<3> Var12;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	float fVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	bool bVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	bool bVar49;
	bool bVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	bool bVar55;
	int iVar56;
	int iVar57;
	bool bVar58;
	int iVar59;
	int iVar60;
	bool bVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	bool bVar65;
	bool bVar66;
	int iVar67;
	bool bVar68;
	int iVar69;
	bool bVar70;
	bool bVar71;
	int iVar72;
	int iVar73;
	char* sVar74;
	
	if (!unk_0xAE06B9E39EBDE049(Local_49[iParam0 /*6*/]))
	{
		iVar5 = joaat("weapon_unarmed");
		iVar6 = 0;
		iVar7 = -1;
		Var9 = { Local_139 };
		Var12 = { Local_139 };
		iVar15 = 0;
		iVar16 = 1;
		iVar17 = 0;
		iVar18 = 0;
		iVar19 = 1;
		fVar20 = 0.75f;
		fVar21 = 0.95f;
		fVar22 = 60f;
		fVar23 = 5f;
		fVar24 = 120f;
		fVar25 = -90f;
		fVar26 = 90f;
		fVar27 = 125f;
		iVar28 = iLocal_171;
		iVar29 = 1;
		iVar30 = 1;
		iVar31 = 0;
		iVar32 = 1;
		iVar33 = 1;
		bVar34 = false;
		iVar35 = 0;
		iVar36 = 0;
		iVar37 = 0;
		iVar38 = 1;
		iVar39 = 1;
		iVar40 = 1;
		bVar41 = false;
		iVar42 = 1;
		iVar43 = 0;
		iVar44 = 1;
		iVar45 = 1;
		iVar46 = 1;
		iVar47 = 1;
		iVar48 = 1;
		bVar49 = true;
		bVar50 = false;
		iVar51 = 0;
		iVar52 = 0;
		iVar53 = 0;
		iVar54 = 0;
		bVar55 = false;
		iVar56 = 1;
		iVar57 = 0;
		bVar58 = false;
		iVar59 = 0;
		iVar60 = 1;
		bVar61 = true;
		iVar62 = 0;
		iVar63 = 0;
		iVar64 = 0;
		bVar65 = false;
		bVar66 = false;
		iVar67 = 0;
		bVar68 = false;
		iVar69 = 0;
		bVar70 = false;
		bVar71 = false;
		iVar72 = 0;
		iVar73 = 0;
		switch (iParam0)
		{
			case 0:
				iVar4 = iLocal_157;
				iVar6 = Local_116[1 /*4*/];
				iVar5 = joaat("weapon_pistol");
				iVar37 = 1;
				iVar38 = 0;
				bVar49 = false;
				iVar72 = 1;
				break;
			
			case 1:
				iVar4 = iLocal_157;
				Var0 = { unk_0x7EC595B99EA7C4B1(Local_116[1 /*4*/], 0f, -1.7f, 0.9f) };
				fVar3 = (unk_0xEF7858F25585F853(Local_116[1 /*4*/]) + 90f);
				sVar74 = "WORLD_HUMAN_HANG_OUT_STREET";
				iVar5 = joaat("weapon_microsmg");
				iVar37 = 1;
				iVar38 = 0;
				bVar49 = false;
				iVar72 = 1;
				break;
			
			case 2:
				iVar4 = iLocal_155;
				iVar6 = Local_116[2 /*4*/];
				iVar5 = joaat("weapon_pistol");
				iVar37 = 1;
				iVar38 = 0;
				bVar49 = false;
				iVar72 = 1;
				break;
			
			case 3:
				iVar4 = iLocal_155;
				Var0 = { unk_0x7EC595B99EA7C4B1(Local_116[2 /*4*/], 0f, -1.5f, 0.9f) };
				fVar3 = (unk_0xEF7858F25585F853(Local_116[2 /*4*/]) + 90f);
				sVar74 = "WORLD_HUMAN_HANG_OUT_STREET";
				iVar5 = joaat("weapon_microsmg");
				iVar37 = 1;
				iVar38 = 0;
				bVar49 = false;
				iVar72 = 1;
				break;
			
			case 4:
				iVar4 = iLocal_155;
				Var0 = { unk_0x7EC595B99EA7C4B1(Local_116[2 /*4*/], 0f, -2.3f, 0.9f) };
				fVar3 = (unk_0xEF7858F25585F853(Local_116[2 /*4*/]) + 90f);
				sVar74 = "WORLD_HUMAN_HANG_OUT_STREET";
				iVar5 = joaat("weapon_pistol");
				iVar37 = 1;
				iVar38 = 0;
				bVar49 = false;
				iVar72 = 1;
				break;
			
			case 7:
				iVar4 = iLocal_155;
				iVar6 = Local_116[3 /*4*/];
				iVar5 = joaat("weapon_pistol");
				iVar37 = 1;
				iVar38 = 0;
				bVar49 = false;
				iVar72 = 1;
				break;
			
			case 8:
				iVar4 = iLocal_155;
				iVar6 = Local_116[3 /*4*/];
				iVar7 = 0;
				iVar5 = joaat("weapon_microsmg");
				iVar37 = 1;
				iVar38 = 0;
				bVar49 = false;
				iVar72 = 1;
				break;
			
			case 9:
				iVar4 = iLocal_157;
				iVar6 = Local_116[4 /*4*/];
				iVar5 = joaat("weapon_pistol");
				iVar37 = 1;
				iVar38 = 0;
				bVar49 = false;
				iVar72 = 1;
				break;
			
			case 10:
				iVar4 = iLocal_157;
				iVar6 = Local_116[4 /*4*/];
				iVar7 = 0;
				iVar5 = joaat("weapon_microsmg");
				iVar37 = 1;
				iVar38 = 0;
				bVar49 = false;
				iVar72 = 1;
				break;
			
			default:
				break;
		}
		if (!unk_0x7D167B9A0CCDA347(iVar4))
		{
			return 0;
		}
		if (!func_63(Param2, Local_139, 0))
		{
			if (!unk_0xAE06B9E39EBDE049(uVar8))
			{
				Var0 = { Param2 };
			}
			else
			{
				Var9 = { Param2 };
			}
		}
		if (fParam5 != -1f)
		{
			fVar3 = fParam5;
		}
		if (func_199(iVar6))
		{
			Local_49[iParam0 /*6*/] = unk_0x6A7A2C83BD302BA4(iVar6, 26, iVar4, iVar7, 1, 1);
		}
		else
		{
			Local_49[iParam0 /*6*/] = unk_0xB3116B49FE00E2F1(26, iVar4, Var0, fVar3, 1, 1);
			unk_0x58ADF88C51AAFDC5(Local_49[iParam0 /*6*/], iVar42, 0);
			unk_0x05A4A50D0DE525AB(Local_49[iParam0 /*6*/], !bVar66, 0);
		}
		if (bVar41)
		{
			unk_0xCBF81D3222C77066(Local_49[iParam0 /*6*/], Var0, 0, 0, 1);
		}
		if (bParam1)
		{
			if (iVar28 == iLocal_171)
			{
				Local_49[iParam0 /*6*/].f_1 = func_60(Local_49[iParam0 /*6*/], 1, 145);
			}
			else
			{
				Local_49[iParam0 /*6*/].f_1 = func_60(Local_49[iParam0 /*6*/], 0, 145);
			}
		}
		unk_0x25FD43753B97641C(Local_49[iParam0 /*6*/], iVar60);
		unk_0x694113444F21E39F(Local_49[iParam0 /*6*/], 213, iVar29);
		unk_0x694113444F21E39F(Local_49[iParam0 /*6*/], 212, iVar30);
		unk_0x4E65320BC9AD521C(Local_49[iParam0 /*6*/], iVar31);
		unk_0xCBA6B2B569DCAFD8(Local_49[iParam0 /*6*/], iVar32);
		unk_0x44EEDB6E2FB6904F(Local_49[iParam0 /*6*/], iVar33);
		unk_0x694113444F21E39F(Local_49[iParam0 /*6*/], 188, iVar56);
		unk_0x694113444F21E39F(Local_49[iParam0 /*6*/], 42, !bVar34);
		unk_0x6673CC701BC8E9C1(Local_49[iParam0 /*6*/], 9, iVar36);
		unk_0x6673CC701BC8E9C1(Local_49[iParam0 /*6*/], 3, iVar38);
		unk_0x694113444F21E39F(Local_49[iParam0 /*6*/], 342, bVar58);
		unk_0xA5EAD2ACE2C8BBB2(Local_49[iParam0 /*6*/], iVar37, 1);
		unk_0xA1836510046FE87B(Local_49[iParam0 /*6*/], iVar18);
		unk_0x6673CC701BC8E9C1(Local_49[iParam0 /*6*/], 8, iVar40);
		unk_0x80250B8368A4E611(Local_49[iParam0 /*6*/], iVar39, 0);
		unk_0x0312E5501F93E5AB(Local_49[iParam0 /*6*/], iVar43);
		unk_0x92BD213E6A0E666B(Local_49[iParam0 /*6*/], iVar5, -1, iVar35, iVar35);
		unk_0x6673CC701BC8E9C1(Local_49[iParam0 /*6*/], 2, iVar44);
		unk_0x6673CC701BC8E9C1(Local_49[iParam0 /*6*/], 1, iVar45);
		unk_0x6673CC701BC8E9C1(Local_49[iParam0 /*6*/], 52, iVar46);
		unk_0x6673CC701BC8E9C1(Local_49[iParam0 /*6*/], 13, iVar69);
		unk_0x389E871B0B67CCCC(Local_49[iParam0 /*6*/], iVar47);
		unk_0x0DC39BE87E4C5599(Local_49[iParam0 /*6*/], iVar48);
		unk_0x694113444F21E39F(Local_49[iParam0 /*6*/], 118, bVar49);
		unk_0x694113444F21E39F(Local_49[iParam0 /*6*/], 115, bVar50);
		unk_0x6673CC701BC8E9C1(Local_49[iParam0 /*6*/], 12, iVar51);
		unk_0x6673CC701BC8E9C1(Local_49[iParam0 /*6*/], 36, iVar52);
		unk_0x6673CC701BC8E9C1(Local_49[iParam0 /*6*/], 35, iVar53);
		unk_0x6673CC701BC8E9C1(Local_49[iParam0 /*6*/], 29, iVar54);
		unk_0x694113444F21E39F(Local_49[iParam0 /*6*/], 185, bVar55);
		unk_0xCCC12894266ADDBB(Local_49[iParam0 /*6*/], iVar57);
		unk_0x6673CC701BC8E9C1(Local_49[iParam0 /*6*/], 17, iVar63);
		unk_0x6673CC701BC8E9C1(Local_49[iParam0 /*6*/], 5, iVar72);
		unk_0x6673CC701BC8E9C1(Local_49[iParam0 /*6*/], 46, iVar73);
		unk_0x316DB01C35390C36(Local_49[iParam0 /*6*/], iVar64);
		unk_0x44225B42FE388400(Local_49[iParam0 /*6*/], iVar59);
		func_59(Local_49[iParam0 /*6*/], fVar22, fVar23, fVar24, fVar25, fVar26);
		unk_0x6A8F948698B360B4(Local_49[iParam0 /*6*/], iVar67);
		unk_0x694113444F21E39F(Local_49[iParam0 /*6*/], 203, bVar68);
		unk_0x6A933D50A1029A5B(Local_49[iParam0 /*6*/], !bVar68);
		if (!bVar61)
		{
			func_58(iParam0, 2);
		}
		if (!unk_0x7BCC91F3C1CF24E8(sVar74))
		{
			unk_0x3964C1CAAE858CB1(Local_49[iParam0 /*6*/], sVar74, -1, 0);
		}
		if (iVar17 > 0)
		{
			if (iVar17 > unk_0x2A82FAC1E55962C6(Local_49[iParam0 /*6*/]) || iVar62)
			{
				unk_0x16E50383DEE2A560(Local_49[iParam0 /*6*/], iVar17);
			}
			unk_0x697DA7132EE43ABC(Local_49[iParam0 /*6*/], iVar17, 0);
		}
		if (iVar19 > 0)
		{
			unk_0xF94DFEAE3DD1EE7E(Local_49[iParam0 /*6*/], iVar19);
		}
		if (fVar27 >= 0f)
		{
			unk_0x567AB34DE5FDB30D(Local_49[iParam0 /*6*/], fVar27);
		}
		if (fVar20 > 0f || fVar21 > 0f)
		{
			unk_0x8D536CF9F0F78D9F(Local_49[iParam0 /*6*/], fVar20, fVar21);
		}
		if (bVar70)
		{
			unk_0x3D7F49DF8C5586D8(Local_49[iParam0 /*6*/], Var0, 5f, 0, 0);
		}
		if (bVar71)
		{
			unk_0xB9E43564464D9DC1(Local_49[iParam0 /*6*/]);
		}
		unk_0xD3D9D7C84656DAE5(Local_49[iParam0 /*6*/], iVar28);
		if (unk_0xAE06B9E39EBDE049(uVar8))
		{
			unk_0xF8A652CE310FFC53(Local_49[iParam0 /*6*/], uVar8, -1, Var9, Var12, 1, 1, 1, 0, 2, 1);
			unk_0x4478D8ED4673EF14(Local_49[iParam0 /*6*/], 0);
			func_58(iParam0, 1);
		}
		func_57(iParam0);
		func_56(iParam0);
		if (iVar15 != 0)
		{
			unk_0x28E37CFF18E502D2(Local_49[iParam0 /*6*/], iVar5, iVar15);
			unk_0x69C71C91F56D82B9(Local_49[iParam0 /*6*/], iVar5, 1);
		}
		unk_0x3EA9EB775DF15E76(Local_49[iParam0 /*6*/], iVar16);
		if (bVar65)
		{
			unk_0x912105796D275F9C(Local_49[iParam0 /*6*/], 1, "DEFAULT_ACTION");
		}
		return 1;
	}
	return 0;
}

void func_56(int iParam0)
{
	if (func_199(Local_49[iParam0 /*6*/]))
	{
		switch (iParam0)
		{
			case 0:
				break;
			}
	}
}

void func_57(int iParam0)
{
	if (func_199(Local_49[iParam0 /*6*/]))
	{
		switch (iParam0)
		{
			case 0:
				unk_0x45F588C0DD767737(Local_49[iParam0 /*6*/], 0, 0, 0, 0);
				unk_0x45F588C0DD767737(Local_49[iParam0 /*6*/], 3, 0, 0, 0);
				unk_0x45F588C0DD767737(Local_49[iParam0 /*6*/], 4, 0, 0, 0);
				break;
			
			case 1:
				unk_0x45F588C0DD767737(Local_49[iParam0 /*6*/], 0, 1, 1, 0);
				unk_0x45F588C0DD767737(Local_49[iParam0 /*6*/], 3, 1, 2, 0);
				unk_0x45F588C0DD767737(Local_49[iParam0 /*6*/], 4, 0, 1, 0);
				break;
			
			case 2:
				unk_0x45F588C0DD767737(Local_49[iParam0 /*6*/], 0, 0, 0, 0);
				unk_0x45F588C0DD767737(Local_49[iParam0 /*6*/], 3, 0, 0, 0);
				unk_0x45F588C0DD767737(Local_49[iParam0 /*6*/], 4, 0, 0, 0);
				break;
			
			case 3:
				unk_0x45F588C0DD767737(Local_49[iParam0 /*6*/], 0, 1, 0, 0);
				unk_0x45F588C0DD767737(Local_49[iParam0 /*6*/], 3, 1, 0, 0);
				unk_0x45F588C0DD767737(Local_49[iParam0 /*6*/], 4, 0, 1, 0);
				break;
			
			case 4:
				unk_0x45F588C0DD767737(Local_49[iParam0 /*6*/], 0, 1, 2, 0);
				unk_0x45F588C0DD767737(Local_49[iParam0 /*6*/], 3, 0, 1, 0);
				unk_0x45F588C0DD767737(Local_49[iParam0 /*6*/], 4, 1, 0, 0);
				break;
			
			case 7:
				unk_0x45F588C0DD767737(Local_49[iParam0 /*6*/], 0, 0, 2, 0);
				unk_0x45F588C0DD767737(Local_49[iParam0 /*6*/], 3, 1, 2, 0);
				unk_0x45F588C0DD767737(Local_49[iParam0 /*6*/], 4, 1, 2, 0);
				break;
			
			case 8:
				unk_0x45F588C0DD767737(Local_49[iParam0 /*6*/], 0, 1, 1, 0);
				unk_0x45F588C0DD767737(Local_49[iParam0 /*6*/], 3, 0, 2, 0);
				unk_0x45F588C0DD767737(Local_49[iParam0 /*6*/], 4, 0, 2, 0);
				break;
			
			case 9:
				unk_0x45F588C0DD767737(Local_49[iParam0 /*6*/], 0, 1, 2, 0);
				unk_0x45F588C0DD767737(Local_49[iParam0 /*6*/], 3, 0, 1, 0);
				unk_0x45F588C0DD767737(Local_49[iParam0 /*6*/], 4, 0, 2, 0);
				break;
			
			case 10:
				unk_0x45F588C0DD767737(Local_49[iParam0 /*6*/], 0, 0, 1, 0);
				unk_0x45F588C0DD767737(Local_49[iParam0 /*6*/], 3, 1, 1, 0);
				unk_0x45F588C0DD767737(Local_49[iParam0 /*6*/], 4, 1, 0, 0);
				break;
			}
	}
}

void func_58(int iParam0, int iParam1)
{
	unk_0xBE20AB8238688965(&(Local_49[iParam0 /*6*/].f_2), iParam1);
}

void func_59(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!unk_0x5AEB5DDFFAD43CA5(uParam0))
	{
		unk_0x6C08F93084C348FC(uParam0, fParam1);
		unk_0x9445ACA80D2E87F9(uParam0, fParam2);
		unk_0x0D6B1ECCACFEEDCB(uParam0, (fParam3 / 2f));
		unk_0xC275806AC780442D(uParam0, fParam4);
		unk_0x6E54718C637039FE(uParam0, fParam5);
	}
}

var func_60(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_61(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x8F678487EEBD8CE4(uVar0)) && unk_0x3030AE9FCF1BC243(&(Global_1848[iParam2 /*29*/].f_3)))
	{
		unk_0xB023F5C66F5716C7(uVar0, &(Global_1848[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_61(var uParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xAE06B9E39EBDE049(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x2BE000892D65EA2A(uParam0);
	if (unk_0x20F7576FDB52E2B0(uParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(uVar0, func_62(unk_0x25DDB354A40FFCDB(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x3060C53EAE54BBE7(uVar0, bParam1);
		}
		else
		{
			unk_0xECC9A00CF1181EC2(uVar0, 2);
		}
	}
	else if (unk_0xA1914E72A0EB31D0(uParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(uVar0, func_62(unk_0x25DDB354A40FFCDB(), 0.7f, 0.7f));
		unk_0x3060C53EAE54BBE7(uVar0, bParam1);
	}
	else if (unk_0x49116E591C7E1412(uParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(uVar0, func_62(unk_0x25DDB354A40FFCDB(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_62(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_63(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_64(int iParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	bool bVar21;
	int iVar22;
	float fVar23;
	float fVar24;
	float fVar25;
	var uVar26;
	struct<3> Var27;
	struct<3> Var30;
	var uVar33;
	
	if (!unk_0xAE06B9E39EBDE049(Local_116[iParam0 /*4*/]))
	{
		iVar5 = 0;
		iVar6 = 1;
		iVar7 = 1;
		iVar8 = 0;
		iVar9 = 0;
		iVar10 = 1;
		bVar11 = false;
		bVar12 = false;
		bVar13 = true;
		iVar14 = 0;
		iVar15 = 0;
		iVar16 = 0;
		iVar17 = 0;
		iVar18 = 0;
		iVar19 = 1;
		iVar20 = 0;
		bVar21 = false;
		iVar22 = 1;
		fVar24 = -1f;
		fVar25 = -1f;
		switch (iParam0)
		{
			case 0:
				Var0 = { Local_145 };
				fVar3 = 163.5528f;
				iVar4 = iLocal_153;
				bVar13 = false;
				iVar18 = 1;
				iVar19 = 0;
				bVar21 = true;
				iVar8 = 1;
				break;
			
			case 1:
				Var0 = { 3087.114f, 2195.558f, 2f };
				fVar3 = 157.68f;
				iVar4 = iLocal_156;
				iVar20 = 1;
				bVar11 = true;
				bVar21 = true;
				iVar22 = 0;
				iVar18 = 1;
				iVar19 = 0;
				break;
			
			case 2:
				Var0 = { 3092.788f, 2197.243f, 2f };
				fVar3 = -22.32f;
				iVar4 = iLocal_154;
				iVar20 = 1;
				bVar11 = true;
				bVar21 = true;
				iVar22 = 0;
				iVar18 = 1;
				iVar19 = 0;
				break;
			
			case 3:
				Var0 = { 3170.401f, 1964.587f, 0.2889f };
				fVar3 = 341.1273f;
				iVar4 = iLocal_154;
				iVar20 = 1;
				bVar11 = true;
				bVar21 = true;
				iVar22 = 0;
				iVar18 = 1;
				iVar19 = 0;
				break;
			
			case 4:
				Var0 = { 3227.12f, 2074.91f, 0.75f };
				fVar3 = 175.16f;
				iVar4 = iLocal_156;
				iVar20 = 1;
				bVar11 = true;
				bVar21 = true;
				iVar22 = 0;
				iVar18 = 1;
				iVar19 = 0;
				break;
			
			default:
				break;
		}
		if (!unk_0x7D167B9A0CCDA347(iVar4))
		{
			return 0;
		}
		if (!func_63(Param1, Local_139, 0))
		{
			Var0 = { Param1 };
		}
		if (fParam4 != -1f)
		{
			fVar3 = fParam4;
		}
		Local_116[iParam0 /*4*/] = unk_0xCE4780E24AFDFBF9(iVar4, Var0, fVar3, 1, 1, 0);
		func_67(iParam0);
		func_66(iParam0);
		unk_0x80250B8368A4E611(Local_116[iParam0 /*4*/], iVar7, 0);
		if (unk_0xAE06B9E39EBDE049(uVar26))
		{
			unk_0xF8A652CE310FFC53(Local_116[iParam0 /*4*/], uVar26, -1, Var27, Var30, 0, 0, 0, 0, 2, 1);
		}
		else
		{
			unk_0x58ADF88C51AAFDC5(Local_116[iParam0 /*4*/], iVar6, 0);
		}
		unk_0xAEBB7D261688301C(Local_116[iParam0 /*4*/], iVar8);
		unk_0x6A8F948698B360B4(Local_116[iParam0 /*4*/], iVar9);
		unk_0x0E765FE8467F7839(Local_116[iParam0 /*4*/], iVar10);
		if (bVar11)
		{
			unk_0xC160551F55D6365A(Local_116[iParam0 /*4*/], bVar11, 1, 0);
		}
		unk_0x0312E5501F93E5AB(Local_116[iParam0 /*4*/], iVar14);
		unk_0xA5EAD2ACE2C8BBB2(Local_116[iParam0 /*4*/], iVar15, 1);
		unk_0xD9F5F4019E9DF2FF(Local_116[iParam0 /*4*/], iVar16);
		unk_0x444BEA966BE94696(Local_116[iParam0 /*4*/], iVar17);
		unk_0x74172B5AFD503628(Local_116[iParam0 /*4*/], iVar19, 0);
		unk_0x1AB8D7ECA49F6A6C(Local_116[iParam0 /*4*/], iVar18);
		unk_0xDAE36360F0F8C1ED(Local_116[iParam0 /*4*/], iVar20);
		unk_0xA5DA49AF5FFE9112(Local_116[iParam0 /*4*/], iVar22);
		if (!unk_0x7BCC91F3C1CF24E8(uVar33))
		{
			unk_0xC29A9E1088D83B1B(Local_116[iParam0 /*4*/], sVar33);
		}
		if (fVar23 > 0f)
		{
			unk_0x316E0389ADF56E20(Local_116[iParam0 /*4*/], fVar23);
		}
		if (bVar12)
		{
			unk_0xDF383F338BF25208(Local_116[iParam0 /*4*/]);
		}
		if (fVar24 >= 0f)
		{
			unk_0x201A9AA6F5343858(Local_116[iParam0 /*4*/], fVar24);
		}
		if (fVar25 >= 0f)
		{
			unk_0xC8D984922C7FDDCE(Local_116[iParam0 /*4*/], fVar25);
		}
		if (bVar21)
		{
			unk_0xF9A692CE2F45AC6F(Local_116[iParam0 /*4*/], 1);
		}
		if (iVar5 != 0)
		{
			unk_0x5DC21979EC6C531F(Local_116[iParam0 /*4*/], iVar5);
		}
		if (bParam5)
		{
			Local_116[iParam0 /*4*/].f_1 = func_65(Local_116[iParam0 /*4*/], bVar13, 0);
		}
		if (iParam0 == 0)
		{
			unk_0xEE6FDB1E2B95E783(Local_116[iParam0 /*4*/], 3);
		}
	}
	return 1;
}

int func_65(var uParam0, bool bParam1, bool bParam2)
{
	return func_61(uParam0, !bParam1, bParam2);
}

void func_66(int iParam0)
{
	if (func_199(Local_116[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 2:
			case 3:
				unk_0xF242CEB863060ABC(Local_116[iParam0 /*4*/], 1, 1);
				unk_0xF242CEB863060ABC(Local_116[iParam0 /*4*/], 2, 1);
				unk_0xF242CEB863060ABC(Local_116[iParam0 /*4*/], 3, 1);
				unk_0xF242CEB863060ABC(Local_116[iParam0 /*4*/], 4, 1);
				unk_0xF242CEB863060ABC(Local_116[iParam0 /*4*/], 5, 0);
				break;
			
			case 1:
			case 4:
				unk_0xF242CEB863060ABC(Local_116[iParam0 /*4*/], 1, 1);
				unk_0xF242CEB863060ABC(Local_116[iParam0 /*4*/], 2, 1);
				unk_0xF242CEB863060ABC(Local_116[iParam0 /*4*/], 3, 1);
				unk_0xF242CEB863060ABC(Local_116[iParam0 /*4*/], 4, 0);
				unk_0xF242CEB863060ABC(Local_116[iParam0 /*4*/], 5, 1);
				break;
			}
	}
}

void func_67(int iParam0)
{
	if (func_199(Local_116[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 1:
				unk_0x38633C69DE516059(Local_116[iParam0 /*4*/], 111, 28);
				unk_0x88FCE2696F59472E(Local_116[iParam0 /*4*/], 111, 156);
				break;
			
			case 2:
				unk_0x38633C69DE516059(Local_116[iParam0 /*4*/], 121, 20);
				unk_0x88FCE2696F59472E(Local_116[iParam0 /*4*/], 0, 156);
				break;
			
			case 3:
				unk_0x38633C69DE516059(Local_116[iParam0 /*4*/], 121, 46);
				unk_0x88FCE2696F59472E(Local_116[iParam0 /*4*/], 0, 156);
				break;
			
			case 4:
				unk_0x38633C69DE516059(Local_116[iParam0 /*4*/], 111, 54);
				unk_0x88FCE2696F59472E(Local_116[iParam0 /*4*/], 112, 156);
				break;
			}
	}
}

void func_68(int iParam0)
{
	unk_0xBE20AB8238688965(&iLocal_149, iParam0);
}

void func_69()
{
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), 1, 0);
	}
	func_81(1);
	unk_0xA0E955FEBF04F874(1);
	func_80(0);
	unk_0xAF7D4BF357E8B79E(3073.41f, 2161.604f, -20f, 3123.816f, 2216.9f, 9.0777f, 0, 1);
	unk_0x6C68A6B31819E15F(3073.41f, 2161.604f, -20f, 3123.816f, 2216.9f, 9.0777f, 0);
	if (!unk_0x9A70B1BD2A5BA09C(3084.41f, 2080.39f, 0f, 2f))
	{
		unk_0xAF7D4BF357E8B79E(3077.523f, 2069.831f, -3.3524f, 3092.296f, 2092.042f, 2.769f, 0, 1);
		unk_0x6C68A6B31819E15F(3077.523f, 2069.831f, -3.3524f, 3092.296f, 2092.042f, 2.769f, 0);
	}
	if (!unk_0x9A70B1BD2A5BA09C(3062.67f, 2081.65f, 0f, 2f))
	{
		unk_0xAF7D4BF357E8B79E(3054.367f, 2071.361f, -2.4173f, 3075.652f, 2091.954f, 2.7296f, 0, 1);
		unk_0x6C68A6B31819E15F(3054.367f, 2071.361f, -2.4173f, 3075.652f, 2091.954f, 2.7296f, 0);
	}
	if (!unk_0x9A70B1BD2A5BA09C(3075.716f, 2125.59f, 0.8052f, 2f))
	{
		unk_0x773B9DEB93E81B2F(3075.716f, 2125.59f, 0.8052f, 5f, 0);
	}
	if (!unk_0x9A70B1BD2A5BA09C(3070.882f, 2103.967f, -2.0883f, 2f))
	{
		unk_0xF27E737981AFB47D(3070.882f, 2103.967f, -2.0883f, 5f, 0, 0, 0, 0, 0, 0);
	}
	unk_0xDE8F8016287F771F("ENEMIES", &iLocal_171);
	unk_0xEFBCE8F8316F89EA(1, 1862763509, 1862763509);
	unk_0xEFBCE8F8316F89EA(3, 1862763509, iLocal_171);
	unk_0xEFBCE8F8316F89EA(1, iLocal_171, iLocal_171);
	unk_0xEFBCE8F8316F89EA(3, iLocal_171, 1862763509);
	unk_0xD3D9D7C84656DAE5(unk_0x9B0761B4C3EB8BC7(), 1862763509);
	func_79(&uLocal_174, 1, unk_0x9B0761B4C3EB8BC7(), "TREVOR", 0, 1);
	unk_0x34FEEAC2548C3789(0f);
	func_70(1);
}

void func_70(bool bParam0)
{
	func_71(39, bParam0);
	func_71(40, bParam0);
	func_71(41, bParam0);
	func_71(42, bParam0);
	func_71(43, bParam0);
	func_71(44, bParam0);
}

void func_71(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_78(iParam0, 2, 1))
		{
			func_77(iParam0, 2, 1);
		}
	}
	else if (func_78(iParam0, 2, 1))
	{
		func_72(iParam0, 2, 1);
	}
}

void func_72(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xD2459066EA58CE43(&(Global_99007.f_1364[iParam0]), iParam1);
	}
	else if (unk_0x25DDB354A40FFCDB())
	{
		if (func_10() == 0)
		{
			uVar0 = func_75(func_76(iParam0), -1, 0);
			unk_0xD2459066EA58CE43(&uVar0, iParam1);
			func_73(func_76(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_111858.f_668[iParam0]), iParam1);
	}
}

void func_73(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_74(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, uParam1, iParam3);
	}
}

int func_74(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_13();
		if (iVar1 > -1)
		{
			Global_2551544 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2551544 = 1;
		}
	}
	return iVar0;
}

int func_75(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2551832[iParam0 /*3*/][func_74(iParam1)];
		if (unk_0xD2F202166691EDB2(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_76(int iParam0)
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
			return 10099;
			break;
		
		case 45:
			return 3809;
			break;
		
		case 46:
			return 5384;
			break;
		
		case 47:
			return 6156;
			break;
		
		case 48:
			return 7233;
			break;
		
		case 49:
			return 7879;
			break;
		
		case 52:
			return 8913;
			break;
		
		case 50:
			return 8266;
			break;
		
		case 51:
			return 8268;
			break;
		
		case 53:
			return 9553;
			break;
		
		default:
			break;
	}
	return 11771;
}

void func_77(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xBE20AB8238688965(&(Global_99007.f_1364[iParam0]), iParam1);
	}
	else if (unk_0x25DDB354A40FFCDB())
	{
		if (func_10() == 0)
		{
			uVar0 = func_75(func_76(iParam0), -1, 0);
			unk_0xBE20AB8238688965(&uVar0, iParam1);
			func_73(func_76(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xBE20AB8238688965(&(Global_111858.f_668[iParam0]), iParam1);
	}
}

int func_78(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return unk_0xCE990E643CD9D0E5(Global_99007.f_1364[iParam0], iParam1);
	}
	else if (unk_0x25DDB354A40FFCDB())
	{
		if (func_10() == 0)
		{
			return unk_0xCE990E643CD9D0E5(func_75(func_76(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xCE990E643CD9D0E5(Global_111858.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_79(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76833)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x83BBFE5E96C64FBA(uParam2, 0);
			}
			else
			{
				unk_0x83BBFE5E96C64FBA(uParam2, 1);
			}
		}
		if (!unk_0x5AEB5DDFFAD43CA5(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xE61672E3FEF081AC(uParam2, 0);
			}
			else
			{
				unk_0xE61672E3FEF081AC(uParam2, 1);
			}
		}
	}
}

void func_80(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iLocal_172[iParam0] = unk_0xC08A186299DFDA0A(3054.991f, 1995.887f, -20f, 3140.817f, 2225.639f, 10.453f, 0, 1, 1, 1);
			break;
	}
}

void func_81(int iParam0)
{
	iParam0 = iParam0;
}

void func_82()
{
	if (!func_120())
	{
		if (func_107())
		{
			func_169(1, 0);
		}
	}
	unk_0xAEF7C45DAFB8E9B0("RE_SEAPLANE", 0);
	func_106();
	func_94();
	func_90();
	func_85();
	func_83(&uLocal_158, &uLocal_150);
}

void func_83(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (((((*uParam0)[*uParam1 /*6*/] != 0 && unk_0xAE06B9E39EBDE049((*uParam0)[*uParam1 /*6*/])) && (uParam0[*uParam1 /*6*/])->f_1 != 0) && unk_0xAE06B9E39EBDE049((uParam0[*uParam1 /*6*/])->f_1)) && (uParam0[*uParam1 /*6*/])->f_4)
	{
		if (func_84((uParam0[*uParam1 /*6*/])->f_2, 2))
		{
			(uParam0[*uParam1 /*6*/])->f_5 = unk_0x67E2125E6EC33DB7((*uParam0)[*uParam1 /*6*/], (uParam0[*uParam1 /*6*/])->f_1);
		}
		else
		{
			(uParam0[*uParam1 /*6*/])->f_5 = unk_0xD44D03437956A1ED((*uParam0)[*uParam1 /*6*/], (uParam0[*uParam1 /*6*/])->f_1, (uParam0[*uParam1 /*6*/])->f_3);
		}
	}
	iVar0++;
	*uParam1++;
	if (*uParam1 >= *uParam0)
	{
		*uParam1 = 0;
	}
	while ((((*uParam0)[*uParam1 /*6*/] == 0 || !unk_0xAE06B9E39EBDE049((*uParam0)[*uParam1 /*6*/])) || ((uParam0[*uParam1 /*6*/])->f_1 == 0 || !unk_0xAE06B9E39EBDE049((uParam0[*uParam1 /*6*/])->f_1))) && iVar0 < *uParam0)
	{
		iVar0++;
		*uParam1++;
		if (*uParam1 >= *uParam0)
		{
			*uParam1 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!(uParam0[iVar1 /*6*/])->f_4)
		{
			(*uParam0)[iVar1 /*6*/] = 0;
			(uParam0[iVar1 /*6*/])->f_1 = 0;
			(uParam0[iVar1 /*6*/])->f_2 = 0;
			(uParam0[iVar1 /*6*/])->f_3 = 0;
			(uParam0[iVar1 /*6*/])->f_5 = 0;
		}
		(uParam0[iVar1 /*6*/])->f_4 = 0;
		iVar1++;
	}
}

bool func_84(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_85()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (unk_0xAE06B9E39EBDE049(Local_49[iVar0 /*6*/]) && unk_0x8F678487EEBD8CE4(Local_49[iVar0 /*6*/].f_1))
		{
			if (unk_0x47DBF174A0CB9D55(Local_49[iVar0 /*6*/], 0))
			{
				if (!func_89(iVar0, 0))
				{
					unk_0xFA81E0FBD7F5ACA0(Local_49[iVar0 /*6*/].f_1, 1f);
					func_58(iVar0, 0);
				}
				if (func_88(Local_49[iVar0 /*6*/], 0) != -1)
				{
					if (func_87(iVar0))
					{
						if (unk_0xC259BFDC20BB2EAF(Local_49[iVar0 /*6*/].f_1) > 0)
						{
							unk_0xB7F03636BDF7080E(Local_49[iVar0 /*6*/].f_1, 0);
							unk_0xA84FFDABF9CF5108(Local_49[iVar0 /*6*/].f_1, 1);
						}
					}
					else if (unk_0xC259BFDC20BB2EAF(Local_49[iVar0 /*6*/].f_1) == 0)
					{
						unk_0xB7F03636BDF7080E(Local_49[iVar0 /*6*/].f_1, 255);
						unk_0xA84FFDABF9CF5108(Local_49[iVar0 /*6*/].f_1, 0);
					}
				}
			}
			else if (func_89(iVar0, 0))
			{
				unk_0xFA81E0FBD7F5ACA0(Local_49[iVar0 /*6*/].f_1, 0.7f);
				func_86(iVar0, 0);
				if (unk_0xC259BFDC20BB2EAF(Local_49[iVar0 /*6*/].f_1) == 0)
				{
					unk_0xB7F03636BDF7080E(Local_49[iVar0 /*6*/].f_1, 255);
					unk_0xA84FFDABF9CF5108(Local_49[iVar0 /*6*/].f_1, 0);
				}
			}
			if (unk_0x5AEB5DDFFAD43CA5(Local_49[iVar0 /*6*/]))
			{
				func_43(&(Local_49[iVar0 /*6*/].f_1));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xAE06B9E39EBDE049(Local_116[iVar0 /*4*/]) && unk_0x8F678487EEBD8CE4(Local_116[iVar0 /*4*/].f_1))
		{
			if (!unk_0x80FF6C016CDB0FAF(Local_116[iVar0 /*4*/], 0))
			{
				func_43(&(Local_116[iVar0 /*4*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_86(int iParam0, int iParam1)
{
	unk_0xD2459066EA58CE43(&(Local_49[iParam0 /*6*/].f_2), iParam1);
}

int func_87(int iParam0)
{
	if (iParam0 == 1)
	{
		if (!func_199(Local_49[0 /*6*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 3)
	{
		if (!func_199(Local_49[2 /*6*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 4)
	{
		if (!func_199(Local_49[2 /*6*/]) && !func_199(Local_49[3 /*6*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 8)
	{
		if (!func_199(Local_49[7 /*6*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 10)
	{
		if (!func_199(Local_49[9 /*6*/]))
		{
			return 0;
		}
	}
	return 1;
}

int func_88(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (unk_0x47DBF174A0CB9D55(iParam0, iParam1))
		{
			uVar0 = unk_0xA5D5B1042E8F47BD(iParam0, iParam1);
			if (unk_0xAE06B9E39EBDE049(uVar0))
			{
				iVar1 = unk_0x112A81273D7187A5(unk_0x36FE6D3220816ADA(uVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xB064AF9925F5537B(uVar0, iVar3, 0))
					{
						if (unk_0x10D3F7E169A49C44(uVar0, iVar3, 0) == iParam0)
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

bool func_89(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Local_49[iParam0 /*6*/].f_2, iParam1);
}

void func_90()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xAE06B9E39EBDE049(Local_116[iVar0 /*4*/]))
		{
			func_91(iVar0);
		}
		iVar0++;
	}
}

void func_91(int iParam0)
{
	if (func_199(Local_116[iParam0 /*4*/]) || iParam0 == 0)
	{
		switch (iParam0)
		{
			case 1:
			case 2:
			case 3:
			case 4:
				switch (Local_116[iParam0 /*4*/].f_2)
				{
					case 0:
						if (((!func_199(unk_0x10D3F7E169A49C44(Local_116[iParam0 /*4*/], -1, 0)) && !func_199(unk_0x10D3F7E169A49C44(Local_116[iParam0 /*4*/], 0, 0))) && !func_199(unk_0x10D3F7E169A49C44(Local_116[iParam0 /*4*/], 1, 0))) && !func_199(unk_0x10D3F7E169A49C44(Local_116[iParam0 /*4*/], 2, 0)))
						{
							unk_0xA5DA49AF5FFE9112(Local_116[iParam0 /*4*/], 1);
							unk_0xF9A692CE2F45AC6F(Local_116[iParam0 /*4*/], 0);
							Local_116[iParam0 /*4*/].f_2++;
						}
						break;
					
					case 1:
						break;
				}
				break;
		}
	}
	else if (unk_0xDC79F755CB11603C(Local_116[iParam0 /*4*/]))
	{
		func_92(iParam0, 0);
	}
	else
	{
		func_92(iParam0, 1);
	}
}

void func_92(int iParam0, bool bParam1)
{
	if (unk_0xAE06B9E39EBDE049(Local_116[iParam0 /*4*/]))
	{
		func_43(&(Local_116[iParam0 /*4*/].f_1));
		if (unk_0x3AF46A926C830E50(Local_116[iParam0 /*4*/]))
		{
			unk_0xD90A910C8C028796(Local_116[iParam0 /*4*/]);
		}
		if (func_93(&(Local_116[iParam0 /*4*/])))
		{
			if (bParam1)
			{
				unk_0x03A2522C845CFAC6(&(Local_116[iParam0 /*4*/]));
			}
			else
			{
				unk_0xE730EAF558C97567(&(Local_116[iParam0 /*4*/]));
			}
		}
		Local_116[iParam0 /*4*/] = 0;
		Local_116[iParam0 /*4*/].f_2 = 0;
		Local_116[iParam0 /*4*/].f_3 = 0f;
	}
}

int func_93(var uParam0)
{
	if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), *uParam0, 0))
	{
		return 0;
	}
	return 1;
}

void func_94()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (unk_0xAE06B9E39EBDE049(Local_49[iVar0 /*6*/]))
		{
			func_95(iVar0);
		}
		iVar0++;
	}
}

void func_95(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<3> Var6;
	int iVar9;
	float fVar10;
	float fVar11;
	
	if (func_199(Local_49[iParam0 /*6*/]))
	{
		switch (iParam0)
		{
			case 0:
			case 2:
				if (Local_49[iParam0 /*6*/].f_3 >= 2 && Local_49[iParam0 /*6*/].f_3 < 5)
				{
					if ((unk_0x47DBF174A0CB9D55(Local_49[iParam0 /*6*/], 0) && func_199(unk_0xA5D5B1042E8F47BD(Local_49[iParam0 /*6*/], 0))) && unk_0x0922C2E075A5F18C(unk_0xA5D5B1042E8F47BD(Local_49[iParam0 /*6*/], 0)))
					{
						func_105();
						unk_0x3882AEDF87714AF1(0, 1);
						unk_0x0AB756271BADC8DF(0, unk_0x344C570D6F8700DF(500, 1501), 4096);
						unk_0x3882AEDF87714AF1(0, 0);
						unk_0x8FF9CE1C0F94F59A(0, unk_0x9B0761B4C3EB8BC7(), 0, 16);
						func_103(Local_49[iParam0 /*6*/]);
						unk_0x6673CC701BC8E9C1(Local_49[iParam0 /*6*/], 1, 0);
						Local_49[iParam0 /*6*/].f_3 = 5;
					}
				}
				switch (Local_49[iParam0 /*6*/].f_3)
				{
					case 0:
						if (iParam0 == 0)
						{
							if (func_199(Local_49[3 /*6*/]))
							{
								unk_0xF484013CCAFEC04B(Local_49[iParam0 /*6*/], 1, Local_49[3 /*6*/], 31086, Local_139, 0, -1, -1);
							}
						}
						else if (func_199(Local_49[1 /*6*/]))
						{
							unk_0xF484013CCAFEC04B(Local_49[iParam0 /*6*/], 1, Local_49[1 /*6*/], 31086, Local_139, 0, -1, -1);
						}
						if (((func_121(1) || unk_0xF83D0A2EC884A4DD(Local_49[iParam0 /*6*/], unk_0x9B0761B4C3EB8BC7())) || func_102()) || func_101())
						{
							func_100(iParam0);
							unk_0x8FF9CE1C0F94F59A(Local_49[iParam0 /*6*/], unk_0x9B0761B4C3EB8BC7(), 0, 16);
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (iParam0 == 0)
						{
							if (!func_199(Local_49[1 /*6*/]) || (func_199(Local_116[1 /*4*/]) && unk_0xE0B3BC41DDA88DF0(Local_49[1 /*6*/], Local_116[1 /*4*/], 1)))
							{
								bVar0 = true;
							}
						}
						else if ((!func_199(Local_49[3 /*6*/]) || (func_199(Local_116[2 /*4*/]) && unk_0xE0B3BC41DDA88DF0(Local_49[3 /*6*/], Local_116[2 /*4*/], 1))) && (!func_199(Local_49[4 /*6*/]) || (func_199(Local_116[2 /*4*/]) && unk_0xE0B3BC41DDA88DF0(Local_49[4 /*6*/], Local_116[2 /*4*/], 1))))
						{
							bVar0 = true;
						}
						if (bVar0)
						{
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 2:
						iVar5 = 526;
						if (iParam0 == 0)
						{
							sVar4 = sLocal_137;
						}
						else
						{
							sVar4 = sLocal_138;
						}
						unk_0xDB58A4E614254D95(sVar4, unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), &iVar1);
						unk_0xEF6BAEE0FFB3D3D0(sVar4, &iVar3);
						unk_0xDB58A4E614254D95(sVar4, unk_0x3E4D3CCC220BDFB1(Local_49[iParam0 /*6*/], 1), &iVar2);
						if (iVar1 > 0 && unk_0xEEB37DB9533AA764(unk_0x9B0761B4C3EB8BC7()))
						{
							iVar1 = (iVar1 - 1);
						}
						if (iParam0 == 2 && !unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 3108.675f, 2194.121f, 10.95087f, 3143.525f, 2232.265f, -4.598444f, 82.75f, 0, 1, 0))
						{
							iVar1 = func_99(iVar1, 22, iVar3);
						}
						if (func_38(unk_0x9B0761B4C3EB8BC7(), Local_145, 1) >= 225f)
						{
							iVar1 = (iVar3 - 1);
						}
						if (((((iParam0 == 0 && iLocal_151 != iVar1) && iVar1 > iVar2) || ((iParam0 == 2 && iLocal_152 != iVar1) && iVar1 > iVar2)) && func_199(unk_0xB0919F8F7C8097BD(Local_49[iParam0 /*6*/]))) && !unk_0x02275D26F97B0510(Local_49[iParam0 /*6*/], 0))
						{
							if (iParam0 == 0)
							{
								iLocal_151 = iVar1;
							}
							else
							{
								iLocal_152 = iVar1;
							}
							if (func_199(unk_0xB0919F8F7C8097BD(Local_49[iParam0 /*6*/])))
							{
								unk_0xF9A692CE2F45AC6F(unk_0xB0919F8F7C8097BD(Local_49[iParam0 /*6*/]), 0);
								func_86(iParam0, 5);
							}
							unk_0x7E0697FD4A69CB28(Local_49[iParam0 /*6*/], unk_0xB0919F8F7C8097BD(Local_49[iParam0 /*6*/]), sVar4, 786469, 0, iVar5, iVar1, -1f, 0, 6f);
						}
						if ((!func_98(Local_49[iParam0 /*6*/], -235832601, 1) && unk_0x16BC17A8EDC701A2(Local_49[iParam0 /*6*/], -235832601) == 7) && !func_98(Local_49[iParam0 /*6*/], 538064912, 1))
						{
							unk_0x4FA386FEF4A4DB7F(Local_49[iParam0 /*6*/], unk_0x9B0761B4C3EB8BC7(), 1101004800);
							if (func_199(unk_0xB0919F8F7C8097BD(Local_49[iParam0 /*6*/])) && unk_0x7FA5AFDDD40A7CF5(unk_0xB0919F8F7C8097BD(Local_49[iParam0 /*6*/])))
							{
								unk_0xF9A692CE2F45AC6F(unk_0xB0919F8F7C8097BD(Local_49[iParam0 /*6*/]), 1);
								func_58(iParam0, 5);
							}
						}
						if (!func_89(iParam0, 4))
						{
							if (unk_0x02275D26F97B0510(Local_49[iParam0 /*6*/], 0))
							{
								func_58(iParam0, 4);
								unk_0x9B94F6169B0DAEFD(Local_49[iParam0 /*6*/]);
								if (!func_89(iParam0, 5) && unk_0x7FA5AFDDD40A7CF5(unk_0xB0919F8F7C8097BD(Local_49[iParam0 /*6*/])))
								{
									unk_0xF9A692CE2F45AC6F(unk_0xB0919F8F7C8097BD(Local_49[iParam0 /*6*/]), 1);
								}
							}
						}
						else if (!unk_0x02275D26F97B0510(Local_49[iParam0 /*6*/], 0))
						{
							func_86(iParam0, 4);
							if (!func_89(iParam0, 5))
							{
								unk_0xF9A692CE2F45AC6F(unk_0xB0919F8F7C8097BD(Local_49[iParam0 /*6*/]), 0);
							}
						}
						if ((unk_0x16BC17A8EDC701A2(Local_49[iParam0 /*6*/], -235832601) == 1 && !unk_0xFD7B900D58065E3B(unk_0xB0919F8F7C8097BD(Local_49[iParam0 /*6*/]))) && !unk_0x9B3CC0B91F39C760(Local_49[iParam0 /*6*/]))
						{
							unk_0x4E8B7920F3D6B9EE(Local_49[iParam0 /*6*/], unk_0x9B0761B4C3EB8BC7(), 0, Local_139, 500f, 100, 1, -687903391);
						}
						unk_0x77F8326848F85E62(sVar4, (iVar3 - 1), &Var6);
						if (unk_0xC2169C00B643278B(Local_49[iParam0 /*6*/], Var6, 8f, 8f, 8f, 0, 1, 0))
						{
							unk_0x4E65320BC9AD521C(Local_49[iParam0 /*6*/], 1);
							unk_0x624DE9C4FF9DFEEF(Local_49[iParam0 /*6*/], unk_0xB0919F8F7C8097BD(Local_49[iParam0 /*6*/]), 0, unk_0x9B0761B4C3EB8BC7(), Local_139, 7, 20f, 786469, 5f, 7);
							func_68(5);
							unk_0x63713E5A16B21379(sVar4);
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 3:
						if (unk_0x47DBF174A0CB9D55(Local_49[iParam0 /*6*/], 0) && func_199(unk_0xA5D5B1042E8F47BD(Local_49[iParam0 /*6*/], 0)))
						{
							if (unk_0xBCB2BD5C2E502335(unk_0xA5D5B1042E8F47BD(Local_49[iParam0 /*6*/], 0), 3, 6000) || func_97(iParam0, 5000))
							{
								unk_0x08D29AF1DF3C445B(Local_49[iParam0 /*6*/], -1);
								unk_0x4E65320BC9AD521C(Local_49[iParam0 /*6*/], 1);
								unk_0x6673CC701BC8E9C1(Local_49[iParam0 /*6*/], 1, 0);
								Local_49[iParam0 /*6*/].f_3++;
							}
							else if (unk_0x16BC17A8EDC701A2(Local_49[iParam0 /*6*/], -1273030092) == 1 && !unk_0x9B3CC0B91F39C760(Local_49[iParam0 /*6*/]))
							{
								unk_0x4E8B7920F3D6B9EE(Local_49[iParam0 /*6*/], unk_0x9B0761B4C3EB8BC7(), 0, Local_139, 500f, 100, 1, -687903391);
							}
						}
						break;
					
					case 4:
						if (!func_98(Local_49[iParam0 /*6*/], -1708676711, 1))
						{
							if (!unk_0x6B2416FE78DA9A2D(Local_49[iParam0 /*6*/]))
							{
								unk_0x4E65320BC9AD521C(Local_49[iParam0 /*6*/], 0);
								unk_0x8FF9CE1C0F94F59A(Local_49[iParam0 /*6*/], unk_0x9B0761B4C3EB8BC7(), 0, 16);
							}
							else
							{
								unk_0x08D29AF1DF3C445B(Local_49[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			
			case 1:
			case 3:
			case 4:
				switch (Local_49[iParam0 /*6*/].f_3)
				{
					case 0:
						if ((iParam0 == 1 && func_98(Local_49[iParam0 /*6*/], 993674639, 1)) && func_199(Local_49[3 /*6*/]))
						{
							unk_0xF484013CCAFEC04B(Local_49[iParam0 /*6*/], 1, Local_49[3 /*6*/], 31086, Local_139, 0, -1, -1);
						}
						if (((iParam0 == 3 || iParam0 == 4) && func_199(Local_49[1 /*6*/])) && func_98(Local_49[iParam0 /*6*/], 993674639, 1))
						{
							unk_0xF484013CCAFEC04B(Local_49[iParam0 /*6*/], 1, Local_49[1 /*6*/], 31086, Local_139, 0, -1, -1);
						}
						if (((func_121(1) || unk_0xF83D0A2EC884A4DD(Local_49[iParam0 /*6*/], unk_0x9B0761B4C3EB8BC7())) || func_102()) || func_101())
						{
							func_100(iParam0);
							Local_49[iParam0 /*6*/].f_4 = (unk_0x578C4EF320340AF7() + unk_0x344C570D6F8700DF(1250, 1501));
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (unk_0x578C4EF320340AF7() >= Local_49[iParam0 /*6*/].f_4)
						{
							if ((iParam0 == 1 && func_199(Local_116[1 /*4*/])) && func_199(unk_0x10D3F7E169A49C44(Local_116[1 /*4*/], -1, 0)))
							{
								unk_0x9B94F6169B0DAEFD(Local_49[iParam0 /*6*/]);
								unk_0xC584E49FC3559A86(Local_49[iParam0 /*6*/], Local_116[1 /*4*/], 20000, 0, 3f, 1, 0);
								unk_0x4E65320BC9AD521C(Local_49[iParam0 /*6*/], 1);
							}
							if ((iParam0 == 3 && func_199(Local_116[2 /*4*/])) && func_199(unk_0x10D3F7E169A49C44(Local_116[2 /*4*/], -1, 0)))
							{
								unk_0x9B94F6169B0DAEFD(Local_49[iParam0 /*6*/]);
								unk_0xC584E49FC3559A86(Local_49[iParam0 /*6*/], Local_116[2 /*4*/], 20000, 0, 3f, 1, 0);
								unk_0x4E65320BC9AD521C(Local_49[iParam0 /*6*/], 1);
							}
							if ((iParam0 == 4 && func_199(Local_116[2 /*4*/])) && func_199(unk_0x10D3F7E169A49C44(Local_116[2 /*4*/], -1, 0)))
							{
								unk_0x9B94F6169B0DAEFD(Local_49[iParam0 /*6*/]);
								unk_0xC584E49FC3559A86(Local_49[iParam0 /*6*/], Local_116[2 /*4*/], 20000, 1, 3f, 1, 0);
								unk_0x4E65320BC9AD521C(Local_49[iParam0 /*6*/], 1);
							}
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 1:
								iVar9 = 1;
								break;
							
							case 3:
								iVar9 = 2;
								break;
							
							case 4:
								iVar9 = 2;
								break;
						}
						if (unk_0x47DBF174A0CB9D55(Local_49[iParam0 /*6*/], 1) || !func_199(unk_0x10D3F7E169A49C44(Local_116[iVar9 /*4*/], -1, 0)))
						{
							unk_0x4E65320BC9AD521C(Local_49[iParam0 /*6*/], 0);
							unk_0x8FF9CE1C0F94F59A(Local_49[iParam0 /*6*/], unk_0x9B0761B4C3EB8BC7(), 0, 16);
							Local_49[iParam0 /*6*/].f_3++;
						}
						else if (!func_98(Local_49[iParam0 /*6*/], -1794415470, 1))
						{
							if (iParam0 == 1 || (iParam0 == 3 && func_199(Local_116[iVar9 /*4*/])))
							{
								unk_0xC584E49FC3559A86(Local_49[iParam0 /*6*/], Local_116[iVar9 /*4*/], 20000, 0, 3f, 1, 0);
							}
							if (iParam0 == 4 && func_199(Local_116[iVar9 /*4*/]))
							{
								unk_0xC584E49FC3559A86(Local_49[iParam0 /*6*/], Local_116[iVar9 /*4*/], 20000, 1, 3f, 1, 0);
							}
						}
						break;
					
					case 3:
						if (unk_0x47DBF174A0CB9D55(Local_49[iParam0 /*6*/], 0) && func_199(unk_0xA5D5B1042E8F47BD(Local_49[iParam0 /*6*/], 0)))
						{
							if (unk_0x0922C2E075A5F18C(unk_0xA5D5B1042E8F47BD(Local_49[iParam0 /*6*/], 0)))
							{
								func_105();
								unk_0x3882AEDF87714AF1(0, 1);
								unk_0x0AB756271BADC8DF(0, unk_0x344C570D6F8700DF(500, 1501), 4096);
								unk_0x3882AEDF87714AF1(0, 0);
								unk_0x8FF9CE1C0F94F59A(0, unk_0x9B0761B4C3EB8BC7(), 0, 16);
								func_103(Local_49[iParam0 /*6*/]);
								unk_0x6673CC701BC8E9C1(Local_49[iParam0 /*6*/], 1, 0);
								Local_49[iParam0 /*6*/].f_3++;
							}
							if (Local_49[iParam0 /*6*/].f_3 == 3)
							{
								if ((unk_0xBCB2BD5C2E502335(unk_0xA5D5B1042E8F47BD(Local_49[iParam0 /*6*/], 0), 3, 6000) || func_97(iParam0, 5000)) && func_121(5))
								{
									unk_0x08D29AF1DF3C445B(Local_49[iParam0 /*6*/], 20000);
									unk_0x4E65320BC9AD521C(Local_49[iParam0 /*6*/], 1);
									unk_0x6673CC701BC8E9C1(Local_49[iParam0 /*6*/], 1, 0);
									Local_49[iParam0 /*6*/].f_3 = 5;
								}
								else if (!func_199(unk_0x10D3F7E169A49C44(unk_0xA5D5B1042E8F47BD(Local_49[iParam0 /*6*/], 0), -1, 0)))
								{
									unk_0x6673CC701BC8E9C1(Local_49[iParam0 /*6*/], 3, 1);
									unk_0x8FF9CE1C0F94F59A(Local_49[iParam0 /*6*/], unk_0x9B0761B4C3EB8BC7(), 0, 16);
									Local_49[iParam0 /*6*/].f_3++;
								}
							}
						}
						break;
					
					case 4:
						break;
					
					case 5:
						if (!func_98(Local_49[iParam0 /*6*/], -1708676711, 1))
						{
							if (!unk_0x6B2416FE78DA9A2D(Local_49[iParam0 /*6*/]))
							{
								unk_0x4E65320BC9AD521C(Local_49[iParam0 /*6*/], 0);
								unk_0x8FF9CE1C0F94F59A(Local_49[iParam0 /*6*/], unk_0x9B0761B4C3EB8BC7(), 0, 16);
							}
							else
							{
								unk_0x08D29AF1DF3C445B(Local_49[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			
			case 7:
				if (Local_49[iParam0 /*6*/].f_3 >= 1 && Local_49[iParam0 /*6*/].f_3 < 3)
				{
					if ((unk_0x47DBF174A0CB9D55(Local_49[iParam0 /*6*/], 0) && func_199(unk_0xA5D5B1042E8F47BD(Local_49[iParam0 /*6*/], 0))) && unk_0x0922C2E075A5F18C(unk_0xA5D5B1042E8F47BD(Local_49[iParam0 /*6*/], 0)))
					{
						func_105();
						unk_0x3882AEDF87714AF1(0, 1);
						unk_0x0AB756271BADC8DF(0, unk_0x344C570D6F8700DF(500, 1501), 4096);
						unk_0x3882AEDF87714AF1(0, 0);
						unk_0x8FF9CE1C0F94F59A(0, unk_0x9B0761B4C3EB8BC7(), 0, 16);
						func_103(Local_49[iParam0 /*6*/]);
						unk_0x6673CC701BC8E9C1(Local_49[iParam0 /*6*/], 1, 0);
						Local_49[iParam0 /*6*/].f_3 = 3;
					}
				}
				switch (Local_49[iParam0 /*6*/].f_3)
				{
					case 0:
						if ((((func_44() && func_41(unk_0x9B0761B4C3EB8BC7(), Local_49[iParam0 /*6*/], 1) <= 125f) || ((unk_0xEEB37DB9533AA764(unk_0x9B0761B4C3EB8BC7()) && !unk_0xE72C9284B5143451(unk_0x9B0761B4C3EB8BC7())) && func_41(unk_0x9B0761B4C3EB8BC7(), Local_49[iParam0 /*6*/], 1) <= 150f)) || (unk_0xEEB37DB9533AA764(unk_0x9B0761B4C3EB8BC7()) && !unk_0x1D88F87079AF2FA7(Local_49[iParam0 /*6*/]))) || func_121(6))
						{
							if (func_199(Local_116[3 /*4*/]))
							{
								unk_0xF9A692CE2F45AC6F(unk_0xB0919F8F7C8097BD(Local_49[iParam0 /*6*/]), 0);
								fVar10 = unk_0xF3A639BEE7AADF55(unk_0x9B0761B4C3EB8BC7());
								fVar10 = func_96(fVar10, 10f, 40f);
								unk_0x316E0389ADF56E20(Local_116[3 /*4*/], fVar10);
							}
							unk_0x69C71C91F56D82B9(Local_49[iParam0 /*6*/], joaat("weapon_pistol"), 0);
							unk_0x624DE9C4FF9DFEEF(Local_49[iParam0 /*6*/], unk_0xB0919F8F7C8097BD(Local_49[iParam0 /*6*/]), 0, unk_0x9B0761B4C3EB8BC7(), Local_139, 7, 20f, 786469, 5f, 7);
							unk_0x4E65320BC9AD521C(Local_49[iParam0 /*6*/], 1);
							Local_49[iParam0 /*6*/].f_1 = func_60(Local_49[iParam0 /*6*/], 1, 145);
							func_68(6);
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (unk_0x47DBF174A0CB9D55(Local_49[iParam0 /*6*/], 0) && func_199(unk_0xA5D5B1042E8F47BD(Local_49[iParam0 /*6*/], 0)))
						{
							if (unk_0xBCB2BD5C2E502335(unk_0xA5D5B1042E8F47BD(Local_49[iParam0 /*6*/], 0), 3, 6000) || func_97(iParam0, 5000))
							{
								unk_0x08D29AF1DF3C445B(Local_49[iParam0 /*6*/], -1);
								unk_0x4E65320BC9AD521C(Local_49[iParam0 /*6*/], 1);
								unk_0x6673CC701BC8E9C1(Local_49[iParam0 /*6*/], 1, 0);
								Local_49[iParam0 /*6*/].f_3++;
							}
							else if (unk_0x16BC17A8EDC701A2(Local_49[iParam0 /*6*/], -1273030092) == 1 && !unk_0x9B3CC0B91F39C760(Local_49[iParam0 /*6*/]))
							{
								unk_0x4E8B7920F3D6B9EE(Local_49[iParam0 /*6*/], unk_0x9B0761B4C3EB8BC7(), 0, Local_139, 500f, 100, 1, -687903391);
							}
						}
						break;
					
					case 2:
						if (!func_98(Local_49[iParam0 /*6*/], -1708676711, 1))
						{
							if (!unk_0x6B2416FE78DA9A2D(Local_49[iParam0 /*6*/]))
							{
								unk_0x4E65320BC9AD521C(Local_49[iParam0 /*6*/], 0);
								unk_0x8FF9CE1C0F94F59A(Local_49[iParam0 /*6*/], unk_0x9B0761B4C3EB8BC7(), 0, 16);
							}
							else
							{
								unk_0x08D29AF1DF3C445B(Local_49[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			
			case 9:
				if (Local_49[iParam0 /*6*/].f_3 >= 1 && Local_49[iParam0 /*6*/].f_3 < 3)
				{
					if ((unk_0x47DBF174A0CB9D55(Local_49[iParam0 /*6*/], 0) && func_199(unk_0xA5D5B1042E8F47BD(Local_49[iParam0 /*6*/], 0))) && unk_0x0922C2E075A5F18C(unk_0xA5D5B1042E8F47BD(Local_49[iParam0 /*6*/], 0)))
					{
						func_105();
						unk_0x3882AEDF87714AF1(0, 1);
						unk_0x0AB756271BADC8DF(0, unk_0x344C570D6F8700DF(500, 1501), 4096);
						unk_0x3882AEDF87714AF1(0, 0);
						unk_0x8FF9CE1C0F94F59A(0, unk_0x9B0761B4C3EB8BC7(), 0, 16);
						func_103(Local_49[iParam0 /*6*/]);
						unk_0x6673CC701BC8E9C1(Local_49[iParam0 /*6*/], 1, 0);
						Local_49[iParam0 /*6*/].f_3 = 3;
					}
				}
				switch (Local_49[iParam0 /*6*/].f_3)
				{
					case 0:
						if ((((func_44() && func_41(unk_0x9B0761B4C3EB8BC7(), Local_49[iParam0 /*6*/], 1) <= 125f) || ((unk_0xEEB37DB9533AA764(unk_0x9B0761B4C3EB8BC7()) && !unk_0xE72C9284B5143451(unk_0x9B0761B4C3EB8BC7())) && func_41(unk_0x9B0761B4C3EB8BC7(), Local_49[iParam0 /*6*/], 1) <= 150f)) || (unk_0xEEB37DB9533AA764(unk_0x9B0761B4C3EB8BC7()) && !unk_0x1D88F87079AF2FA7(Local_49[iParam0 /*6*/]))) || func_121(6))
						{
							if (func_199(Local_116[4 /*4*/]))
							{
								unk_0xF9A692CE2F45AC6F(unk_0xB0919F8F7C8097BD(Local_49[iParam0 /*6*/]), 0);
								fVar11 = unk_0xF3A639BEE7AADF55(unk_0x9B0761B4C3EB8BC7());
								fVar11 = func_96(fVar11, 10f, 40f);
								unk_0x316E0389ADF56E20(Local_116[4 /*4*/], fVar11);
							}
							unk_0x69C71C91F56D82B9(Local_49[iParam0 /*6*/], joaat("weapon_pistol"), 0);
							unk_0x624DE9C4FF9DFEEF(Local_49[iParam0 /*6*/], unk_0xB0919F8F7C8097BD(Local_49[iParam0 /*6*/]), 0, unk_0x9B0761B4C3EB8BC7(), Local_139, 7, 20f, 786469, 5f, 7);
							unk_0x4E65320BC9AD521C(Local_49[iParam0 /*6*/], 1);
							Local_49[iParam0 /*6*/].f_1 = func_60(Local_49[iParam0 /*6*/], 1, 145);
							func_68(6);
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (unk_0x47DBF174A0CB9D55(Local_49[iParam0 /*6*/], 0) && func_199(unk_0xA5D5B1042E8F47BD(Local_49[iParam0 /*6*/], 0)))
						{
							if (unk_0xBCB2BD5C2E502335(unk_0xA5D5B1042E8F47BD(Local_49[iParam0 /*6*/], 0), 3, 6000) || func_97(iParam0, 5000))
							{
								unk_0x08D29AF1DF3C445B(Local_49[iParam0 /*6*/], -1);
								unk_0x4E65320BC9AD521C(Local_49[iParam0 /*6*/], 1);
								unk_0x6673CC701BC8E9C1(Local_49[iParam0 /*6*/], 1, 0);
								Local_49[iParam0 /*6*/].f_3++;
							}
							else if (unk_0x16BC17A8EDC701A2(Local_49[iParam0 /*6*/], -1273030092) == 1 && !unk_0x9B3CC0B91F39C760(Local_49[iParam0 /*6*/]))
							{
								unk_0x4E8B7920F3D6B9EE(Local_49[iParam0 /*6*/], unk_0x9B0761B4C3EB8BC7(), 0, Local_139, 500f, 100, 1, -687903391);
							}
						}
						break;
					
					case 2:
						if (!func_98(Local_49[iParam0 /*6*/], -1708676711, 1))
						{
							if (!unk_0x6B2416FE78DA9A2D(Local_49[iParam0 /*6*/]))
							{
								unk_0x4E65320BC9AD521C(Local_49[iParam0 /*6*/], 0);
								unk_0x8FF9CE1C0F94F59A(Local_49[iParam0 /*6*/], unk_0x9B0761B4C3EB8BC7(), 0, 16);
							}
							else
							{
								unk_0x08D29AF1DF3C445B(Local_49[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			
			case 8:
			case 10:
				if (Local_49[iParam0 /*6*/].f_3 >= 1 && Local_49[iParam0 /*6*/].f_3 < 3)
				{
					if ((unk_0x47DBF174A0CB9D55(Local_49[iParam0 /*6*/], 0) && func_199(unk_0xA5D5B1042E8F47BD(Local_49[iParam0 /*6*/], 0))) && unk_0x0922C2E075A5F18C(unk_0xA5D5B1042E8F47BD(Local_49[iParam0 /*6*/], 0)))
					{
						func_105();
						unk_0x3882AEDF87714AF1(0, 1);
						unk_0x0AB756271BADC8DF(0, unk_0x344C570D6F8700DF(500, 1501), 4096);
						unk_0x3882AEDF87714AF1(0, 0);
						unk_0x8FF9CE1C0F94F59A(0, unk_0x9B0761B4C3EB8BC7(), 0, 16);
						func_103(Local_49[iParam0 /*6*/]);
						unk_0x6673CC701BC8E9C1(Local_49[iParam0 /*6*/], 1, 0);
						Local_49[iParam0 /*6*/].f_3 = 3;
					}
				}
				switch (Local_49[iParam0 /*6*/].f_3)
				{
					case 0:
						if (((func_44() && func_41(unk_0x9B0761B4C3EB8BC7(), Local_49[iParam0 /*6*/], 1) <= 125f) || ((unk_0xEEB37DB9533AA764(unk_0x9B0761B4C3EB8BC7()) && !unk_0xE72C9284B5143451(unk_0x9B0761B4C3EB8BC7())) && func_41(unk_0x9B0761B4C3EB8BC7(), Local_49[iParam0 /*6*/], 1) <= 150f)) || (unk_0xEEB37DB9533AA764(unk_0x9B0761B4C3EB8BC7()) && !unk_0x1D88F87079AF2FA7(Local_49[iParam0 /*6*/])))
						{
							Local_49[iParam0 /*6*/].f_1 = func_60(Local_49[iParam0 /*6*/], 1, 145);
							unk_0xB7F03636BDF7080E(Local_49[iParam0 /*6*/].f_1, 0);
							unk_0xA84FFDABF9CF5108(Local_49[iParam0 /*6*/].f_1, 1);
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (unk_0x47DBF174A0CB9D55(Local_49[iParam0 /*6*/], 0))
						{
							if (func_199(unk_0xA5D5B1042E8F47BD(Local_49[iParam0 /*6*/], 0)))
							{
								if (unk_0xBCB2BD5C2E502335(unk_0xA5D5B1042E8F47BD(Local_49[iParam0 /*6*/], 0), 3, 6000) || func_97(iParam0, 5000))
								{
									unk_0x08D29AF1DF3C445B(Local_49[iParam0 /*6*/], -1);
									unk_0x4E65320BC9AD521C(Local_49[iParam0 /*6*/], 1);
									unk_0x6673CC701BC8E9C1(Local_49[iParam0 /*6*/], 1, 0);
									Local_49[iParam0 /*6*/].f_3++;
								}
								else if (!func_199(unk_0x10D3F7E169A49C44(unk_0xA5D5B1042E8F47BD(Local_49[iParam0 /*6*/], 0), -1, 0)))
								{
									unk_0x6673CC701BC8E9C1(Local_49[iParam0 /*6*/], 3, 1);
									unk_0x8FF9CE1C0F94F59A(Local_49[iParam0 /*6*/], unk_0x9B0761B4C3EB8BC7(), 0, 16);
									Local_49[iParam0 /*6*/].f_3 = 3;
								}
							}
						}
						else
						{
							unk_0x8FF9CE1C0F94F59A(Local_49[iParam0 /*6*/], unk_0x9B0761B4C3EB8BC7(), 0, 16);
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 2:
						if (!func_98(Local_49[iParam0 /*6*/], -1708676711, 1))
						{
							if (!unk_0x6B2416FE78DA9A2D(Local_49[iParam0 /*6*/]))
							{
								unk_0x4E65320BC9AD521C(Local_49[iParam0 /*6*/], 0);
								unk_0x8FF9CE1C0F94F59A(Local_49[iParam0 /*6*/], unk_0x9B0761B4C3EB8BC7(), 0, 16);
							}
							else
							{
								unk_0x08D29AF1DF3C445B(Local_49[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
		}
	}
	else
	{
		if (func_89(iParam0, 1))
		{
			unk_0x4478D8ED4673EF14(Local_49[iParam0 /*6*/], 1);
			unk_0x1F8106DB8796859F(Local_49[iParam0 /*6*/], 1, 0);
			func_86(iParam0, 1);
		}
		if (!func_89(iParam0, 2))
		{
			if (unk_0xDC79F755CB11603C(Local_49[iParam0 /*6*/]))
			{
				func_40(iParam0, 0);
			}
			else
			{
				func_40(iParam0, 1);
			}
		}
	}
}

float func_96(float fParam0, float fParam1, float fParam2)
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

int func_97(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
		case 3:
		case 4:
			iVar0 = 2;
			break;
		
		case 7:
		case 8:
			iVar0 = 3;
			break;
		
		case 9:
		case 10:
			iVar0 = 4;
			break;
	}
	if (func_199(Local_116[iVar0 /*4*/]))
	{
		if (!unk_0xE72C9284B5143451(Local_116[iVar0 /*4*/]))
		{
			Local_116[iVar0 /*4*/].f_3 = (Local_116[iVar0 /*4*/].f_3 + unk_0x9E3DAF75EFC49F5B());
		}
		else
		{
			Local_116[iVar0 /*4*/].f_3 = 0f;
		}
	}
	if (Local_116[iVar0 /*4*/].f_3 >= IntToFloat(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_98(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x16BC17A8EDC701A2(uParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_99(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_100(int iParam0)
{
	func_58(iParam0, 3);
	if (!func_121(4))
	{
		func_68(4);
	}
	if (!func_121(2))
	{
		func_68(2);
	}
	Local_49[iParam0 /*6*/].f_1 = func_60(Local_49[iParam0 /*6*/], 1, 145);
	unk_0x6C08F93084C348FC(Local_49[iParam0 /*6*/], 200f);
	if (unk_0x47DBF174A0CB9D55(Local_49[iParam0 /*6*/], 0))
	{
		if (func_88(Local_49[iParam0 /*6*/], 0) != -1)
		{
			unk_0xB7F03636BDF7080E(Local_49[iParam0 /*6*/].f_1, 0);
			unk_0xA84FFDABF9CF5108(Local_49[iParam0 /*6*/].f_1, 1);
		}
		else
		{
			unk_0x9B94F6169B0DAEFD(Local_49[iParam0 /*6*/]);
			unk_0x4E65320BC9AD521C(Local_49[iParam0 /*6*/], 1);
		}
	}
}

var func_101()
{
	return unk_0x2FABF7C63A9F9FE5(-1, 3150.508f, 2179.343f, -30f, 3064.608f, 2223.616f, 12.38177f, 103f);
}

int func_102()
{
	var uVar0;
	
	uVar0 = unk_0xA5D3CD332CD10EE9();
	if (func_199(uVar0) && unk_0x1037B9D45CE6B788(uVar0, 3083.23f, 2195.516f, -3.22382f, 3096.519f, 2195.455f, 4.949678f, 15f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_103(var uParam0)
{
	if (func_121(0))
	{
		unk_0x19F29730874AD6F1(uLocal_339);
		func_104(0);
	}
	unk_0x9B6EC2CECE1010EF(uParam0, uLocal_339);
	unk_0x4F83FEE4454169D4(&uLocal_339);
}

void func_104(int iParam0)
{
	unk_0xD2459066EA58CE43(&iLocal_149, iParam0);
}

void func_105()
{
	if (!func_121(0))
	{
		unk_0x4F83FEE4454169D4(&uLocal_339);
		unk_0x9DC06E2A59C5AEBB(&uLocal_339);
		func_68(0);
	}
}

void func_106()
{
	bool bVar0;
	int iVar1;
	
	if (func_121(1) || func_121(4))
	{
		if (func_199(Local_116[0 /*4*/]) && func_41(unk_0x9B0761B4C3EB8BC7(), Local_116[0 /*4*/], 1) >= 250f)
		{
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 <= 10)
			{
				if (!func_39(iVar1, 1))
				{
					bVar0 = false;
				}
				iVar1++;
			}
			if (bVar0)
			{
				func_37();
			}
		}
	}
	if (unk_0xAE06B9E39EBDE049(Local_116[0 /*4*/]) && !func_199(Local_116[0 /*4*/]))
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 <= 10)
		{
			if (!func_39(iVar1, 1))
			{
				bVar0 = false;
			}
			iVar1++;
		}
		if (bVar0)
		{
			func_37();
		}
	}
}

int func_107()
{
	if (!func_52(5))
	{
		return 1;
	}
	if (func_116())
	{
		return 1;
	}
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (SYSTEM::VMAG2(unk_0x97C0B1E5FCD8E08A(unk_0x9B0761B4C3EB8BC7())) > 1369f && !func_115())
		{
			return 0;
		}
	}
	if (func_108(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_108(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (func_23(func_114()))
		{
			iVar36 = func_20();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xCE990E643CD9D0E5(Global_111858.f_18570[iVar32 /*6*/], 2) && !unk_0xCE990E643CD9D0E5(Global_111858.f_18570[iVar32 /*6*/], 3))
				{
					func_109(iVar32, &Var0);
					fVar35 = unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0), Var0.f_6, 1);
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

void func_109(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_110(uParam1, "Abigail1", func_112(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 1:
			func_110(uParam1, "Abigail2", func_112(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 2:
			func_110(uParam1, "Barry1", func_112(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 3:
			func_110(uParam1, "Barry2", func_112(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		
		case 4:
			func_110(uParam1, "Barry3", func_112(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 5:
			func_110(uParam1, "Barry3A", func_112(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 6:
			func_110(uParam1, "Barry3C", func_112(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 7:
			func_110(uParam1, "Barry4", func_112(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_111(iParam0), 0, 0);
			break;
		
		case 8:
			func_110(uParam1, "Dreyfuss1", func_112(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 9:
			func_110(uParam1, "Epsilon1", func_112(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 10:
			func_110(uParam1, "Epsilon2", func_112(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 11:
			func_110(uParam1, "Epsilon3", func_112(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 12:
			func_110(uParam1, "Epsilon4", func_112(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 13:
			func_110(uParam1, "Epsilon5", func_112(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 14:
			func_110(uParam1, "Epsilon6", func_112(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 15:
			func_110(uParam1, "Epsilon7", func_112(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 16:
			func_110(uParam1, "Epsilon8", func_112(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 17:
			func_110(uParam1, "Extreme1", func_112(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 18:
			func_110(uParam1, "Extreme2", func_112(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 19:
			func_110(uParam1, "Extreme3", func_112(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 20:
			func_110(uParam1, "Extreme4", func_112(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 21:
			func_110(uParam1, "Fanatic1", func_112(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_111(iParam0), 1, 0);
			break;
		
		case 22:
			func_110(uParam1, "Fanatic2", func_112(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_111(iParam0), 1, 0);
			break;
		
		case 23:
			func_110(uParam1, "Fanatic3", func_112(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_111(iParam0), 0, 1);
			break;
		
		case 24:
			func_110(uParam1, "Hao1", func_112(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_111(iParam0), 0, 1);
			break;
		
		case 25:
			func_110(uParam1, "Hunting1", func_112(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 26:
			func_110(uParam1, "Hunting2", func_112(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 27:
			func_110(uParam1, "Josh1", func_112(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 28:
			func_110(uParam1, "Josh2", func_112(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		
		case 29:
			func_110(uParam1, "Josh3", func_112(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		
		case 30:
			func_110(uParam1, "Josh4", func_112(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 31:
			func_110(uParam1, "Maude1", func_112(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 32:
			func_110(uParam1, "Minute1", func_112(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 33:
			func_110(uParam1, "Minute2", func_112(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 34:
			func_110(uParam1, "Minute3", func_112(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 35:
			func_110(uParam1, "MrsPhilips1", func_112(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 36:
			func_110(uParam1, "MrsPhilips2", func_112(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 37:
			func_110(uParam1, "Nigel1", func_112(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 38:
			func_110(uParam1, "Nigel1A", func_112(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		
		case 39:
			func_110(uParam1, "Nigel1B", func_112(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_111(iParam0), 1, 1);
			break;
		
		case 40:
			func_110(uParam1, "Nigel1C", func_112(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_111(iParam0), 1, 1);
			break;
		
		case 41:
			func_110(uParam1, "Nigel1D", func_112(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_111(iParam0), 1, 1);
			break;
		
		case 42:
			func_110(uParam1, "Nigel2", func_112(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		
		case 43:
			func_110(uParam1, "Nigel3", func_112(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		
		case 44:
			func_110(uParam1, "Omega1", func_112(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 45:
			func_110(uParam1, "Omega2", func_112(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 46:
			func_110(uParam1, "Paparazzo1", func_112(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 47:
			func_110(uParam1, "Paparazzo2", func_112(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 48:
			func_110(uParam1, "Paparazzo3", func_112(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 49:
			func_110(uParam1, "Paparazzo3A", func_112(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 50:
			func_110(uParam1, "Paparazzo3B", func_112(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 51:
			func_110(uParam1, "Paparazzo4", func_112(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 52:
			func_110(uParam1, "Rampage1", func_112(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 54:
			func_110(uParam1, "Rampage3", func_112(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 55:
			func_110(uParam1, "Rampage4", func_112(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 56:
			func_110(uParam1, "Rampage5", func_112(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 53:
			func_110(uParam1, "Rampage2", func_112(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 57:
			func_110(uParam1, "TheLastOne", func_112(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 58:
			func_110(uParam1, "Tonya1", func_112(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 59:
			func_110(uParam1, "Tonya2", func_112(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 60:
			func_110(uParam1, "Tonya3", func_112(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 61:
			func_110(uParam1, "Tonya4", func_112(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 62:
			func_110(uParam1, "Tonya5", func_112(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_110(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
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

int func_111(int iParam0)
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

struct<2> func_112(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_113(iParam0) };
	if (unk_0x7BCC91F3C1CF24E8(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_113(int iParam0)
{
	struct<2> Var0;
	
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

int func_114()
{
	func_21();
	return Global_111858.f_2359.f_539.f_4321;
}

int func_115()
{
	if (unk_0xF8EDFF98A9C94C74())
	{
		if (unk_0xC047A11F7A99E6B4() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_116()
{
	if (func_119() && !func_115())
	{
		return 1;
	}
	if (func_118() && func_117())
	{
		return 1;
	}
	return 0;
}

bool func_117()
{
	return Global_111576 > 0;
}

int func_118()
{
	if (Global_95877 != -1)
	{
		return 1;
	}
	return 0;
}

int func_119()
{
	if (Global_95877 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_89743[Global_95877 /*34*/].f_15, 20);
	}
	return 0;
}

int func_120()
{
	if ((Global_111847 == func_30() && unk_0xA706863F1E1DD66C()) && Global_111848)
	{
		return 1;
	}
	return 0;
}

bool func_121(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(iLocal_149, iParam0);
}

void func_122(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_124(iParam0);
	unk_0x92B2940A0A0441A9(0);
	unk_0x659A1C3A1508626C(1);
	Global_111844 = 0;
	func_123();
}

void func_123()
{
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			unk_0x410A1E7AD7D5C774(unk_0x36FE6D3220816ADA(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0)), 1);
		}
		unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 32, false);
	}
}

void func_124(int iParam0)
{
	Global_111847 = iParam0;
}

int func_125(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_150438)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_30();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_167())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			Var1 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1) };
			if (SYSTEM::VMAG2(unk_0x97C0B1E5FCD8E08A(unk_0x9B0761B4C3EB8BC7())) > 1369f && !func_115())
			{
				return 0;
			}
		}
		if (!Global_111858.f_9081)
		{
			return 0;
		}
		if (func_5(0))
		{
			return 0;
		}
		if (func_116())
		{
			return 0;
		}
		if (func_166())
		{
			return 0;
		}
		if (Global_111847 != -1)
		{
			return 0;
		}
		if (func_23(func_114()))
		{
			if (func_108(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_165(iParam3))
		{
			return 0;
		}
		if (func_23(func_114()))
		{
			if (func_164(func_114()) == 4 || func_164(func_114()) == 5)
			{
				return 0;
			}
		}
		if (func_23(func_114()))
		{
			if (!func_163(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_162(Global_111858.f_24991.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x578C4EF320340AF7() - Global_111849) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_160())
		{
			return 0;
		}
		if (unk_0x963B7BFFD2743281())
		{
			return 0;
		}
		if (unk_0xA706863F1E1DD66C())
		{
			return 0;
		}
		if (!func_150(4))
		{
			return 0;
		}
		if (!func_52(5))
		{
			return 0;
		}
		if (func_149(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x0B1B45E748AD48BA(unk_0x518D695E2DBA9DB8(unk_0x9B0761B4C3EB8BC7())))
		{
			if ((unk_0x518D695E2DBA9DB8(unk_0x9B0761B4C3EB8BC7()) == unk_0xD5C5CDCF5230F2BA(377.153f, -717.567f, 10.0536f) || unk_0x518D695E2DBA9DB8(unk_0x9B0761B4C3EB8BC7()) == unk_0xD5C5CDCF5230F2BA(320.9934f, 265.2515f, 82.1221f)) || unk_0x518D695E2DBA9DB8(unk_0x9B0761B4C3EB8BC7()) == unk_0xD5C5CDCF5230F2BA(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_149(0, 0))
		{
			return 0;
		}
		if (Global_31114)
		{
			return 0;
		}
		if (func_165(30) && !func_149(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_23(func_114()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_111858.f_2359.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_111858.f_2359.f_539.f_2296[iVar4];
				if (func_148(iVar8))
				{
					if (func_126(iVar4))
					{
						if (!func_63(Var5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0), Var5) < (210f * 210f))
							{
								if (func_114() != iVar4)
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

bool func_126(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_111858.f_2359.f_539.f_2296[iParam0];
	return func_127(iVar0);
}

int func_127(int iParam0)
{
	return func_128(iParam0, 1);
}

int func_128(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_148(iParam0))
	{
		return 0;
	}
	func_129(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_129(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_130(func_141(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_130(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_140(iParam0, iParam1))
	{
		iVar0 = func_139(iParam1);
		iVar1 = func_137(iParam0);
		iVar2 = (func_137(iParam0) - func_137(iParam1));
		iVar3 = (func_139(iParam0) - func_139(iParam1));
		iVar4 = (func_136(iParam0) - func_136(iParam1));
		iVar5 = (func_135(iParam0) - func_135(iParam1));
		iVar6 = (func_134(iParam0) - func_134(iParam1));
		iVar7 = (func_133(iParam0) - func_133(iParam1));
	}
	else
	{
		iVar0 = func_139(iParam0);
		iVar1 = func_137(iParam1);
		iVar2 = (func_137(iParam1) - func_137(iParam0));
		iVar3 = (func_139(iParam1) - func_139(iParam0));
		iVar4 = (func_136(iParam1) - func_136(iParam0));
		iVar5 = (func_135(iParam1) - func_135(iParam0));
		iVar6 = (func_134(iParam1) - func_134(iParam0));
		iVar7 = (func_133(iParam1) - func_133(iParam0));
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
		iVar4 = (iVar4 + func_132(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_131(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_131(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_132(int iParam0, int iParam1)
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

int func_133(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_134(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_135(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_136(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_137(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_138(unk_0xCE990E643CD9D0E5(iParam0, 31), -1, 1)) + 2011;
}

int func_138(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_139(int iParam0)
{
	return iParam0 & 15;
}

int func_140(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_148(iParam1) || !func_148(iParam0))
	{
		return 1;
	}
	iVar0 = func_137(iParam0);
	iVar1 = func_137(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_139(iParam0);
	iVar1 = func_139(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_136(iParam0);
	iVar1 = func_136(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_135(iParam0);
	iVar1 = func_135(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_134(iParam0);
	iVar1 = func_134(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_133(iParam0);
	iVar1 = func_133(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_141()
{
	var uVar0;
	
	func_147(&uVar0, unk_0x1D3A3697182AD8B3());
	func_146(&uVar0, unk_0x81F2E25F8C019191());
	func_145(&uVar0, unk_0x1F596C965B00E290());
	func_144(&uVar0, unk_0x371CFD525753F70C());
	func_143(&uVar0, unk_0xF225116F449A5CC6());
	func_142(&uVar0, unk_0x2E48CFA70ABFC06A());
	return uVar0;
}

void func_142(var uParam0, int iParam1)
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
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_143(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_144(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_139(*uParam0);
	iVar1 = func_137(*uParam0);
	if (iParam1 < 1 || iParam1 > func_132(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_145(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_146(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_147(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_148(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_133(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_134(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_135(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_137(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_139(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_136(iParam0);
	if (iVar5 < 1 || iVar5 > func_132(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_149(int iParam0, int iParam1)
{
	if (unk_0xCE990E643CD9D0E5(Global_111858.f_24991.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_150(int iParam0)
{
	int iVar0;
	
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				iVar0 = func_114();
				if (!func_23(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x117A56F7403FC6D2(unk_0x460153A63B9477BC()) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0x11B7C25143EE2F29(unk_0x9B0761B4C3EB8BC7())) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0)) || func_159()) || Global_110905) || Global_30970) || func_158()) || func_157(8, -1)) || func_156()) || func_155()) || func_154()) || func_153()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1) || func_159()) || Global_30970) || func_158()) || func_157(8, -1)) || func_154()) || func_156()) || func_155()) || func_153()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x117A56F7403FC6D2(unk_0x460153A63B9477BC()) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0x11B7C25143EE2F29(unk_0x9B0761B4C3EB8BC7())) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0)) || func_159()) || Global_110905) || Global_30970) || func_158()) || func_157(8, -1)) || func_154()) || func_156()) || func_155()) || func_153()) || Global_111858.f_7684.f_919[iVar0] == 5) || Global_42178 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7()) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0)) || func_159()) || Global_110905) || Global_30970) || func_158()) || func_157(8, -1)) || func_156()) || func_155()) || func_153()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_159() || unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) > 0) || func_157(8, -1)) || func_153()) || func_152()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_157(8, -1) || func_156()) || func_155()) || func_152()) || func_151())
						{
							return 0;
						}
						if ((unk_0x9CC4D06F5338CA6B() && unk_0xEE67CF13DD662F51() != 3) && unk_0x69222D599BA78994() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
						{
							if ((((((((((((((unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0) || unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) > 0) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || func_159()) || Global_30970) || func_158()) || func_157(8, -1)) || func_155()) || func_154()) || func_153()) || Global_111858.f_7684.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0) || !unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC())) || !unk_0x117A56F7403FC6D2(unk_0x460153A63B9477BC())) || !unk_0x87F0CB19476706C3()) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || func_159()) || func_155()) || Global_110905) || Global_30970) || func_158()) || Global_42801) || func_157(8, -1)) || func_154()) || func_152()) || func_153()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0) || !unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC())) || !unk_0x117A56F7403FC6D2(unk_0x460153A63B9477BC())) || !unk_0x87F0CB19476706C3()) || unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0)) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 1)) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0x9D7D76BBBFE285E0(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || func_159()) || Global_110905) || Global_30970) || func_158()) || func_157(8, -1)) || func_154()) || func_152()) || func_156()) || func_155()) || func_153())
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

var func_151()
{
	return Global_98994.f_1;
}

int func_152()
{
	if (Global_95877 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_89743[Global_95877 /*34*/].f_15, 13);
	}
	return 0;
}

int func_153()
{
	if (unk_0x7B70881748D166CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_154()
{
	if (Global_77093)
	{
		return 1;
	}
	else if (Global_61711 && !Global_61717)
	{
		return 1;
	}
	return 0;
}

bool func_155()
{
	return Global_99007.f_352 > 0;
}

bool func_156()
{
	return Global_99007.f_351 > 0;
}

bool func_157(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377236.f_203[iParam1];
			}
			break;
	}
	return unk_0xCE990E643CD9D0E5(Global_1377236.f_1048, iParam0);
}

var func_158()
{
	return Global_1312896;
}

int func_159()
{
	if (!unk_0x25DDB354A40FFCDB())
	{
		return Global_96433.f_44 == 1;
	}
	return 0;
}

int func_160()
{
	func_161();
	if (Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

void func_161()
{
	if (func_22(14))
	{
		if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[0 /*29*/])
			{
				Global_19681 = 0;
			}
			else if (unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[1 /*29*/])
			{
				Global_19681 = 1;
			}
			else if (unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[2 /*29*/])
			{
				Global_19681 = 2;
			}
			else
			{
				Global_19681 = 0;
			}
		}
	}
	else
	{
		Global_19681 = func_114();
		if (Global_19681 == 145)
		{
			Global_19681 = 3;
		}
		if (Global_76833)
		{
			Global_19681 = 3;
		}
		if (Global_19681 > 3)
		{
			Global_19681 = 3;
		}
	}
}

bool func_162(int iParam0)
{
	return func_140(func_141(), iParam0);
}

int func_163(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_114();
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

int func_164(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 7;
	}
	return Global_111858.f_7684.f_919[iParam0];
}

bool func_165(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_167())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xCE990E643CD9D0E5(Global_111858.f_24991, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xCE990E643CD9D0E5(Global_111858.f_24991.f_1, iVar0);
	}
	return bVar1;
}

int func_166()
{
	var uVar0;
	
	if (Global_31118)
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			uVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
			if (unk_0x80FF6C016CDB0FAF(uVar0, 0))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(unk_0x10D3F7E169A49C44(uVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_167()
{
	var uVar0;
	
	if (unk_0x011A67D2B195B6EB())
	{
		if (unk_0xB6E5F77B7062D58A())
		{
			if (unk_0xE06C56C6444527A6())
			{
				unk_0xD2F202166691EDB2(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &uVar0, -1);
				unk_0xBE20AB8238688965(&uVar0, 2);
				unk_0xBE20AB8238688965(&uVar0, 4);
				unk_0xBE20AB8238688965(&uVar0, 6);
				unk_0xBE20AB8238688965(&Global_25, 2);
				unk_0xBE20AB8238688965(&Global_25, 4);
				unk_0xBE20AB8238688965(&Global_25, 6);
				unk_0x6000E4684CB4330B(joaat("SP_UNLOCK_EXCLUS_CONTENT"), uVar0, 1);
				if (unk_0x3D1E37C2BD9F339F())
				{
					iVar0 = unk_0xFCBF95335DD16537(866);
					unk_0xBE20AB8238688965(&iVar0, 0);
					unk_0xB2B72C9FCE371E70(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150693 == 2)
	{
		return 1;
	}
	else if (Global_150693 == 3)
	{
		return 0;
	}
	if (unk_0x3D1E37C2BD9F339F())
	{
		if (unk_0xCE990E643CD9D0E5(unk_0xFCBF95335DD16537(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_168()
{
	struct<3> Var0;
	float fVar3;
	
	if (func_199(unk_0x9B0761B4C3EB8BC7()))
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1) };
		unk_0xE5CC8E2D904E42CE(Var0, &fVar3, 0, 0);
		if ((Var0.f_1 < 2149.042f && (unk_0x642A35A076CECC5A(unk_0x9B0761B4C3EB8BC7()) || (unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7()) && (Var0.f_2 - fVar3) >= 7.5f))) && (Var0.f_2 - fVar3) >= 3f)
		{
			return 0;
		}
		if (Var0.f_2 >= 100f && unk_0x642A35A076CECC5A(unk_0x9B0761B4C3EB8BC7()))
		{
			return 0;
		}
	}
	return 1;
}

void func_169(bool bParam0, bool bParam1)
{
	func_198();
	func_197();
	func_81(0);
	func_195(1, 1, 1, 0);
	func_193(0);
	func_191();
	unk_0xAF7D4BF357E8B79E(3054.991f, 1995.887f, -20f, 3140.817f, 2225.639f, 10.453f, 1, 1);
	unk_0x8F2EB8BCB5CCE8D8();
	unk_0x8CFF639CEFF5CF16(1);
	unk_0xC1AE55AB3E2DADAB(0);
	func_190();
	func_189();
	func_188();
	func_187(bParam1);
	func_186(bParam1);
	unk_0xF4F95D084B662764(iLocal_171);
	unk_0x34FEEAC2548C3789(1f);
	func_184();
	func_182();
	func_181(&uLocal_174, 1);
	func_181(&uLocal_174, 3);
	func_181(&uLocal_174, 4);
	func_181(&uLocal_174, 5);
	unk_0xE9CB6ED57E83322C(0);
	unk_0x3ED9330214992278(0, 0, 3000, 1, 0, 0);
	func_70(0);
	if (bParam0)
	{
		func_170(-1);
		unk_0xD39E529EBE5DB04F();
	}
}

void func_170(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_120())
	{
		func_174(iParam0);
		unk_0x694F632EFD1F47D0(0, 0);
		Global_111849 = unk_0x578C4EF320340AF7();
		func_173(30000);
		StringCopy(&cVar0, func_172(Global_111847, 1), 64);
		if (func_29(Global_111847) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_111846, 64);
		}
		unk_0xFA6F384991B22C4D(&cVar0, Global_111844, (unk_0x578C4EF320340AF7() - Global_111845), 0);
	}
	else if (unk_0xCE990E643CD9D0E5(Global_111854, 0) && Global_111858.f_24991.f_2 < 3)
	{
		unk_0xD2459066EA58CE43(&Global_111854, 0);
	}
	func_171(&Global_31027);
	Global_111848 = 0;
	func_124(-1);
}

void func_171(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_41593)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_41592 = 0;
	Global_41594 = 0;
	Global_41631 = 15;
	Global_61714 = 0;
	Global_61715 = 0;
}

char* func_172(int iParam0, bool bParam1)
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

void func_173(int iParam0)
{
	Global_42182 = (unk_0x578C4EF320340AF7() + iParam0);
}

void func_174(int iParam0)
{
	func_175(iParam0, 0, func_180(iParam0));
}

void func_175(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_141();
	func_178(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_177(iParam0, &uVar0);
	Var1 = { func_176(&uVar0) };
}

struct<16> func_176(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_135(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_134(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_133(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_136(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_139(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_137(*uParam0), 64);
	return Var0;
}

void func_177(int iParam0, var uParam1)
{
	Global_111858.f_24991.f_43[iParam0] = *uParam1;
}

void func_178(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_137(*uParam0);
	iVar1 = func_139(*uParam0);
	iVar2 = func_136(*uParam0);
	iVar3 = func_135(*uParam0);
	iVar4 = func_134(*uParam0);
	iVar5 = func_133(*uParam0);
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
	iVar6 = func_132(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_132(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_179(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_179(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_147(uParam0, iParam1);
	func_146(uParam0, iParam2);
	func_145(uParam0, iParam3);
	func_143(uParam0, iParam5);
	func_144(uParam0, iParam4);
	func_142(uParam0, iParam6);
}

int func_180(int iParam0)
{
	int iVar0;
	
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

void func_181(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_182()
{
	Global_19871 = 0;
	func_183();
}

void func_183()
{
	unk_0x62B2C9892E3E142D();
	Global_22016 = 0;
	if ((unk_0x6B12213471F330A3() || Global_19681.f_1 == 9) || Global_19680 == 1)
	{
		unk_0xBE4122AC23440E7D(0);
		Global_21005 = 6;
		Global_19681.f_1 = 3;
		return;
	}
	if (unk_0x6A5CC4A2C9D9ED8D())
	{
		unk_0xBE4122AC23440E7D(1);
		Global_21005 = 6;
		return;
	}
}

void func_184()
{
	Global_19871 = 0;
	func_185();
}

void func_185()
{
	unk_0x62B2C9892E3E142D();
	Global_22016 = 0;
	if (unk_0x6A5CC4A2C9D9ED8D())
	{
		unk_0xBE4122AC23440E7D(0);
		Global_21005 = 6;
	}
}

void func_186(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_92(iVar0, bParam0);
		iVar0++;
	}
}

void func_187(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_40(iVar0, bParam0);
		iVar0++;
	}
}

void func_188()
{
}

void func_189()
{
	unk_0x63713E5A16B21379(sLocal_137);
	unk_0x63713E5A16B21379(sLocal_138);
}

void func_190()
{
}

void func_191()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_192(iVar0);
		iVar0++;
	}
}

void func_192(int iParam0)
{
	if (iLocal_172[iParam0] != 0)
	{
		unk_0x1E337EE68290597A(iLocal_172[iParam0], 0);
		iLocal_172[iParam0] = 0;
	}
}

void func_193(bool bParam0)
{
	if (bParam0)
	{
		unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), 0, 0);
		unk_0x53797676AD34A9AA(0);
		unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
		unk_0x34FEEAC2548C3789(0f);
		unk_0x9A12355E82773517(unk_0x460153A63B9477BC(), 0);
		unk_0x5CD631BB88EEE1D1(0);
		unk_0x40ECEB892E6BDDDB(3, 0);
		unk_0x40ECEB892E6BDDDB(1, 0);
		unk_0x40ECEB892E6BDDDB(8, 0);
		unk_0x40ECEB892E6BDDDB(2, 0);
		unk_0x40ECEB892E6BDDDB(6, 0);
		unk_0x40ECEB892E6BDDDB(4, 0);
		unk_0x40ECEB892E6BDDDB(12, 0);
		unk_0x40ECEB892E6BDDDB(5, 0);
		func_194(9, 1);
		func_194(8, 1);
	}
	else
	{
		unk_0x53797676AD34A9AA(5);
		unk_0x34FEEAC2548C3789(1f);
		unk_0x9A12355E82773517(unk_0x460153A63B9477BC(), 1);
		unk_0x5CD631BB88EEE1D1(1);
		unk_0x40ECEB892E6BDDDB(3, 1);
		unk_0x40ECEB892E6BDDDB(1, 1);
		unk_0x40ECEB892E6BDDDB(8, 1);
		unk_0x40ECEB892E6BDDDB(2, 1);
		unk_0x40ECEB892E6BDDDB(6, 1);
		unk_0x40ECEB892E6BDDDB(4, 1);
		unk_0x40ECEB892E6BDDDB(12, 1);
		unk_0x40ECEB892E6BDDDB(5, 1);
		func_194(9, 0);
		func_194(8, 0);
	}
}

void func_194(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xBE20AB8238688965(&Global_31215, iParam0);
	}
	else
	{
		unk_0xD2459066EA58CE43(&Global_31215, iParam0);
	}
}

void func_195(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam0)
	{
		func_182();
	}
	if (bParam1)
	{
		if (!func_196() || (bParam0 && !bParam3))
		{
			unk_0xB80B2936A29B2666();
		}
		unk_0x9A4CFC4DC9164DEB();
	}
	if (bParam2)
	{
		unk_0xD289B55B6AADBA10(1);
	}
}

int func_196()
{
	if (Global_21005 != 0 || unk_0x6A5CC4A2C9D9ED8D())
	{
		return 1;
	}
	return 0;
}

void func_197()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_43(&(Local_49[iVar0 /*6*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_43(&(Local_116[iVar0 /*4*/].f_1));
		iVar0++;
	}
}

void func_198()
{
	iLocal_47 = 0;
	iLocal_48 = 0;
	iLocal_148 = 0;
	iLocal_149 = 0;
}

int func_199(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (!unk_0xA59F96B50B97E63C(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

