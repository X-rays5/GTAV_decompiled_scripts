#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	int iLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	struct<16> Local_53 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_69 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	struct<3> Local_87 = { 0, 0, 0 } ;
	struct<3> Local_90 = { 0, 0, 0 } ;
	float fLocal_93 = 0f;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	char* sLocal_101 = NULL;
	float fLocal_102 = 0f;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	float fLocal_110 = 0f;
	struct<3> Local_111 = { 0, 0, 0 } ;
	struct<3> Local_114 = { 0, 0, 0 } ;
	float fLocal_117 = 0f;
	bool bLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	struct<3> Local_121 = { 0, 0, 0 } ;
	int iLocal_124 = 0;
	struct<3> Local_125[5];
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150[5] = { 0, 0, 0, 0, 0 };
	float fLocal_156 = 0f;
	int iLocal_157 = 0;
	bool bLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	var uLocal_163 = 16;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
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
	int iLocal_328 = 0;
	struct<100> Local_329 = { 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1 } ;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
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
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
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
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_45 = { 500f, 500f, 500f };
	iLocal_96 = -1;
	iLocal_97 = 2050;
	iLocal_98 = -1;
	iLocal_99 = -1;
	sLocal_101 = "CC_SUBSTR";
	fLocal_102 = 125f;
	iLocal_103 = 1;
	iLocal_105 = 263;
	fLocal_117 = 4f;
	bLocal_118 = true;
	iLocal_119 = 6;
	iLocal_120 = 18;
	iLocal_124 = -1;
	bLocal_158 = true;
	iLocal_159 = 1;
	Local_90 = { ScriptParam_0.f_1[0 /*3*/] };
	Local_90 = { Local_90 };
	iLocal_86 = iLocal_86;
	Local_69 = { Local_69 };
	bVar0 = false;
	if (unk_0xED06FD5709A59F02(82))
	{
		func_151(1);
	}
	uLocal_85 = unk_0x1FA7B77001D60F9D(unk_0x460153A63B9477BC());
	iLocal_95 = 0;
	func_149(&Global_110509, 0);
	func_143();
	unk_0x2354C1CC1CA65629(1);
	if (func_142(uLocal_94, 1))
	{
		iLocal_100 = 10;
	}
	else
	{
		iLocal_100 = 9;
	}
	while (!Global_37399)
	{
		SYSTEM::WAIT(0);
	}
	if (!func_142(uLocal_94, 8))
	{
		if (!func_140(iLocal_100))
		{
			if (func_139(0, iLocal_99))
			{
				func_151(0);
			}
			else
			{
				func_151(1);
			}
		}
	}
	if (iLocal_99 != -1)
	{
		if (!func_139(0, iLocal_99))
		{
			bLocal_118 = false;
		}
	}
	if (func_142(uLocal_94, 8388608))
	{
		func_151(1);
	}
	if (func_142(uLocal_94, 524288) && (func_138() && !func_137()))
	{
		func_151(1);
	}
	if (unk_0x7B70881748D166CD(unk_0x02406178CDC27728()) > 1 && !func_142(uLocal_94, 4194304))
	{
		if (iLocal_105 != 263)
		{
			func_136(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_135(10);
	}
	while (true)
	{
		if (!func_142(uLocal_94, 268435456))
		{
			fVar1 = 0f;
			if (unk_0xE5CC8E2D904E42CE(ScriptParam_0.f_1[0 /*3*/], &fVar1, 0, 0))
			{
				if (fVar1 != 0f)
				{
					ScriptParam_0.f_1[0 /*3*/].f_2 = fVar1;
					func_134(&uLocal_94, 268435456);
				}
			}
		}
		uLocal_85 = unk_0x1FA7B77001D60F9D(unk_0x460153A63B9477BC());
		if (func_142(uLocal_94, 1048576))
		{
			if (unk_0xA59F96B50B97E63C(uLocal_85, 0))
			{
				func_151(1);
			}
		}
		if (unk_0xAE06B9E39EBDE049(iLocal_85) && !unk_0xA59F96B50B97E63C(iLocal_85, 0))
		{
			Local_87 = { unk_0x3E4D3CCC220BDFB1(iLocal_85, 1) };
			fLocal_93 = SYSTEM::VDIST2(Local_87, ScriptParam_0.f_1[0 /*3*/]);
			fLocal_93 = fLocal_93;
			Local_111 = { Local_87 };
			Local_114 = { ScriptParam_0.f_1[0 /*3*/] };
			Local_111.f_2 = 0f;
			Local_114.f_2 = 0f;
			fLocal_110 = SYSTEM::VDIST2(Local_111, Local_114);
			switch (iLocal_95)
			{
				case 0:
					if (func_140(iLocal_100) || (func_142(uLocal_94, 16) && !func_142(uLocal_94, 524288)))
					{
						iLocal_98 = -1;
						func_130();
						func_135(1);
					}
					else
					{
						if (fLocal_110 > (fLocal_102 * fLocal_102))
						{
							if (iLocal_105 != 263)
							{
								func_136(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
							func_135(10);
						}
						if ((Local_87.f_2 - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_128() && fLocal_93 > ((fLocal_117 * 1.5f) * (fLocal_117 * 1.5f)))
					{
						iLocal_103 = iLocal_103;
						func_135(3);
					}
					else
					{
						func_130();
					}
					break;
				
				case 3:
					if (unk_0x3BF0BB5923982C0D())
					{
						func_151(1);
						return;
					}
					if (!func_140(iLocal_100))
					{
						if (!func_142(uLocal_94, 8))
						{
							bVar2 = true;
							if (unk_0xF005CCA4263DF67F(&(Global_98955.f_3), &Local_69))
							{
								Local_69 = { Local_53 };
								bVar2 = false;
							}
							if (bVar2)
							{
								func_151(0);
								break;
							}
						}
					}
					if (!func_142(uLocal_94, 4))
					{
						func_117();
						func_134(&uLocal_94, 4);
					}
					if (fLocal_110 > (fLocal_102 * fLocal_102) && !Global_98989)
					{
						if (iLocal_105 != 263)
						{
							if (func_116(6) && !func_115(iLocal_105))
							{
							}
							else
							{
								func_136(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
						}
						func_135(10);
					}
					else
					{
						Local_69 = { Local_53 };
						bVar3 = !func_142(uLocal_94, 64);
						func_149(&uLocal_94, 128);
						if (!func_114(3) && !Global_98989)
						{
							if (func_142(uLocal_94, 2097152))
							{
								if ((!func_142(uLocal_94, 1) || !unk_0xAE06B9E39EBDE049(func_113())) && !Global_98989)
								{
									func_135(10);
									break;
								}
							}
						}
						if (func_142(uLocal_94, 524288) && (func_138() && !func_137()))
						{
							func_151(1);
						}
						if (func_112())
						{
							func_151(1);
						}
						if ((!func_104(6) || Global_110905) || func_103())
						{
							bVar3 = false;
						}
						if (!bLocal_118)
						{
							func_101(&uLocal_94, 128);
							bVar3 = false;
						}
						if (func_142(uLocal_94, 1))
						{
							if (!func_100())
							{
								func_101(&uLocal_94, 128);
								bVar3 = false;
							}
						}
						if (func_99(1))
						{
							bVar3 = false;
						}
						if (Global_76833)
						{
							bVar3 = false;
						}
						if (func_98())
						{
							bVar3 = false;
						}
						if (unk_0x9CC4D06F5338CA6B())
						{
							bVar3 = false;
						}
						if (func_97() || func_96(8, -1))
						{
							bVar3 = false;
						}
						if (!unk_0x0D1884E427D0E0AF(unk_0x460153A63B9477BC()))
						{
							bVar3 = false;
						}
						if (!unk_0x6469285707B19356(unk_0x460153A63B9477BC()))
						{
							bVar3 = false;
						}
						if (func_95(0) || func_94())
						{
							bVar3 = false;
						}
						if (bVar3)
						{
							if (!unk_0xC2169C00B643278B(iLocal_85, ScriptParam_0.f_1[0 /*3*/], fLocal_117, fLocal_117, 2f, 0, 1, iLocal_103))
							{
								bVar3 = false;
							}
							iVar4 = unk_0x1F596C965B00E290();
							if (iLocal_119 > iLocal_120)
							{
								if (iVar4 < iLocal_119 && iVar4 >= iLocal_120)
								{
									func_101(&uLocal_94, 128);
									bVar3 = false;
									if (fLocal_93 < ((fLocal_117 * fLocal_117) + 4f))
									{
										if (!func_142(uLocal_94, 134217728))
										{
											func_93("MG_NA_TIME", iLocal_119, iLocal_120);
											func_101(&uLocal_94, 134217728);
										}
									}
									else
									{
										func_149(&uLocal_94, 134217728);
									}
								}
							}
							else if (iVar4 < iLocal_119 || iVar4 >= iLocal_120)
							{
								func_101(&uLocal_94, 128);
								bVar3 = false;
								if (fLocal_93 < ((fLocal_117 * fLocal_117) + 4f))
								{
									if (!func_142(uLocal_94, 134217728))
									{
										func_93("MG_NA_TIME", iLocal_119, iLocal_120);
										func_101(&uLocal_94, 134217728);
									}
								}
								else
								{
									func_149(&uLocal_94, 134217728);
								}
							}
							if (!unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC()))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								unk_0x26A60F42A1132477(0, 51);
								if (func_92(iLocal_86))
								{
									if (iLocal_96 == -1)
									{
										func_91(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
										func_101(&uLocal_94, 2048);
									}
									else if (!func_142(uLocal_94, 2048) || !unk_0xDABD547F0DF2906C())
									{
										func_90(&iLocal_96);
										func_149(&uLocal_94, 2048);
									}
									if (func_88(iLocal_96, 1))
									{
										sLocal_101 = sLocal_101;
										func_90(&iLocal_96);
										func_149(&uLocal_94, 2048);
										unk_0xBE9B3870B1B370E3(&Local_69);
										unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), 0, 56);
										func_135(5);
									}
								}
								else
								{
									sLocal_101 = sLocal_101;
									func_90(&iLocal_96);
									func_149(&uLocal_94, 2048);
									unk_0xBE9B3870B1B370E3(&Local_69);
									unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), 0, 56);
									func_135(5);
								}
							}
						}
						if (!bVar3)
						{
							if (iLocal_96 != -1)
							{
								func_90(&iLocal_96);
								func_149(&uLocal_94, 2048);
								unk_0xD289B55B6AADBA10(0);
							}
						}
					}
					func_50();
					break;
				
				case 5:
					unk_0x26A60F42A1132477(0, 51);
					if (unk_0x8DC2EFD1CECAA468(&Local_69))
					{
						if (iLocal_96 != -1)
						{
							func_90(&iLocal_96);
						}
						iVar5 = 2;
						bVar0 = false;
						if (func_142(uLocal_94, 1))
						{
							if (func_116(6) || func_116(7))
							{
								iVar5 = 1;
								bVar0 = true;
							}
						}
						if (iVar5 != 1)
						{
							iVar5 = func_47(&iLocal_98, 6, iLocal_100, 0, 0);
						}
						if (iVar5 == 1)
						{
							if (!unk_0xA59F96B50B97E63C(iLocal_86, 0))
							{
								unk_0xE730EAF558C97567(&iLocal_86);
							}
							if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
							{
								unk_0x601B713E8CE5673A(unk_0x460153A63B9477BC());
							}
							func_46();
							if (Global_42801)
							{
								func_37(unk_0x9B0761B4C3EB8BC7());
							}
							unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), 1, 56);
							uLocal_52 = func_36();
							func_101(&uLocal_94, 2);
							func_135(6);
							func_32(&uLocal_107);
							if (iLocal_99 != -1)
							{
								func_31(iLocal_99);
								func_29(func_30(iLocal_99), 0, 0);
							}
						}
						else if (iVar5 == 2)
						{
							func_28();
						}
						else if (iVar5 == 0)
						{
							func_135(10);
						}
					}
					else
					{
						func_28();
					}
					break;
				
				case 6:
					if (func_142(Global_110509, 262144))
					{
						func_149(&Global_110509, 262144);
						func_27();
					}
					if (func_142(uLocal_94, 2097152))
					{
						if (!func_114(3) && !unk_0x7FD2BDF03806FD9D(uLocal_52))
						{
							func_135(10);
						}
					}
					if (!unk_0x7FD2BDF03806FD9D(uLocal_52))
					{
						unk_0x9D0F8C73E396F8D9(SYSTEM::ROUND((func_23(&uLocal_107) * 1000f)), iLocal_99, 0);
						func_22(&uLocal_107);
						func_149(&uLocal_94, 256);
						func_21();
						if (bVar0)
						{
							func_149(&uLocal_94, 2);
						}
						else if (func_142(uLocal_94, 2))
						{
							if (func_142(Global_110509, 0))
							{
								func_20(&iLocal_98);
								iLocal_98 = -1;
								func_149(&uLocal_94, 2);
							}
							else
							{
								func_20(&iLocal_98);
								iLocal_98 = -1;
								func_149(&uLocal_94, 2);
							}
						}
						func_135(0);
						if (iLocal_99 != -1)
						{
							if (func_142(Global_110509, 0))
							{
								unk_0xB932BB0105405712(func_30(iLocal_99), 0, Global_98992, 0);
								func_19(func_30(iLocal_99), 0, Global_98992, 1, 0);
							}
							else
							{
								unk_0xB932BB0105405712(func_30(iLocal_99), 0, Global_98992, 0);
								func_19(func_30(iLocal_99), 0, Global_98992, 0, 0);
							}
						}
						func_5();
						func_149(&Global_110509, 0);
						if (func_142(uLocal_94, 16777216))
						{
							func_151(1);
						}
						if (iLocal_99 != -1)
						{
							if (Global_111858.f_9081)
							{
								if (!func_139(0, iLocal_99))
								{
									func_151(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_135(0);
					break;
				
				case 10:
					func_151(1);
					break;
				
				case 9:
					if (fLocal_110 > (fLocal_102 * fLocal_102))
					{
						if (iLocal_105 != 263)
						{
							func_136(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
						func_135(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_105 != 263)
					{
						func_136(iLocal_105, 0, 0);
					}
					if (iLocal_96 != -1)
					{
						func_90(&iLocal_96);
					}
					if (!unk_0x7BCC91F3C1CF24E8(sLocal_101))
					{
						if (func_1(sLocal_101))
						{
							unk_0xD289B55B6AADBA10(1);
						}
					}
					func_135(4);
					break;
				
				case 4:
					if ((iLocal_104 % 150) == 0)
					{
						if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
						{
							if (iLocal_106 == 2)
							{
								if (iLocal_106 == 2)
								{
									if (func_140(iLocal_100) && func_139(0, iLocal_99))
									{
										func_143();
										if (iLocal_105 != 263)
										{
											func_136(iLocal_105, 1, 0);
										}
										func_135(0);
									}
								}
							}
							else if (iLocal_106 == 0)
							{
								if (fLocal_110 > (fLocal_102 * fLocal_102))
								{
									if (iLocal_105 != 263)
									{
										func_136(iLocal_105, 1, 0);
										iLocal_105 = 263;
									}
									func_135(10);
								}
							}
							else if (iLocal_106 == 1)
							{
								if (fLocal_110 > ((80f + 5f) * (80f + 5f)))
								{
									func_143();
									if (iLocal_105 != 263)
									{
										func_136(iLocal_105, 1, 0);
									}
									func_135(0);
								}
							}
						}
						else
						{
							func_136(iLocal_105, 1, 0);
						}
					}
					else
					{
						iLocal_104++;
					}
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

bool func_1(char* sParam0)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

void func_2()
{
	char* sVar0;
	
	func_3(&(Local_329.f_71));
	func_3(&(Local_329.f_77));
	func_3(&(Local_329.f_99));
	unk_0x1082C25039B168F8("amb@world_human_hang_out_street@male_a@idle_a");
	unk_0x1082C25039B168F8("amb@world_human_hang_out_street@male_b@idle_a");
	unk_0x1082C25039B168F8("amb@world_human_hang_out_street@male_c@idle_a");
	unk_0x1082C25039B168F8("amb@world_human_aa_smoke@male@idle_a");
	unk_0x1082C25039B168F8("random@street_race");
	unk_0x1082C25039B168F8("gestures@m@standing@casual");
	switch (iLocal_124)
	{
		case 0:
			sVar0 = "CanyonCliffs_Start";
			break;
		
		case 1:
			sVar0 = "RidgeRun_Start";
			break;
		
		case 3:
			sVar0 = "ValleyTrail_Start";
			break;
		
		case 4:
			sVar0 = "LakesideSplash_Start";
			break;
		
		case 5:
			sVar0 = "EcoFriendly_Start";
			break;
		
		case 2:
			sVar0 = "MinewardSpiral_Start";
			break;
	}
	if (!unk_0x7BCC91F3C1CF24E8(sVar0))
	{
		if (unk_0xC21859D80F5EE520(sVar0))
		{
			if (unk_0xDA606CB5AFEE806C(sVar0))
			{
				unk_0x5291BAF5B96E07D9(sVar0, 0);
			}
		}
	}
}

void func_3(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x74528AC0906CBABE((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_4()
{
}

void func_5()
{
	if (func_142(Global_111858.f_19012, 1))
	{
		func_149(&(Global_111858.f_19012), 1);
		func_18();
		func_8();
		func_6();
	}
}

int func_6()
{
	if (func_7(0))
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

bool func_7(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

void func_8()
{
	if (Global_111858.f_19012.f_18 < Global_111858.f_19012.f_19[iLocal_124] || Global_111858.f_19012.f_19[iLocal_124] == 0)
	{
		Global_111858.f_19012.f_19[iLocal_124] = Global_111858.f_19012.f_18;
		Global_111858.f_19012.f_18 = 999;
	}
	if (iLocal_124 == Global_111858.f_19012.f_1 || Global_111858.f_19012.f_1 == -1)
	{
		if (Global_111858.f_19012.f_1 != 5)
		{
			Global_111858.f_19012.f_1++;
			switch (Global_111858.f_19012.f_1)
			{
				case 1:
					func_136(70, 1, 0);
					func_17(70, 1);
					func_136(71, 1, 0);
					break;
				
				case 2:
					func_136(70, 1, 0);
					func_17(70, 1);
					func_136(71, 1, 0);
					func_17(71, 1);
					func_136(72, 1, 0);
					break;
				
				case 3:
					func_136(70, 1, 0);
					func_17(70, 1);
					func_136(71, 1, 0);
					func_17(71, 1);
					func_136(72, 1, 0);
					func_17(72, 1);
					func_136(73, 1, 0);
					break;
				
				case 4:
					func_136(70, 1, 0);
					func_17(70, 1);
					func_136(71, 1, 0);
					func_17(71, 1);
					func_136(72, 1, 0);
					func_17(72, 1);
					func_136(73, 1, 0);
					func_17(73, 1);
					func_136(74, 1, 0);
					break;
				
				case 5:
					func_136(70, 1, 0);
					func_17(70, 1);
					func_136(71, 1, 0);
					func_17(71, 1);
					func_136(72, 1, 0);
					func_17(72, 1);
					func_136(73, 1, 0);
					func_17(73, 1);
					func_136(74, 1, 0);
					func_17(74, 1);
					func_136(75, 1, 0);
					break;
			}
			func_14("OFFR_NEW", 0, 0, -1, 10000, 7, 0, 0, 0);
		}
		else
		{
			func_136(70, 1, 0);
			func_17(70, 1);
			func_136(71, 1, 0);
			func_17(71, 1);
			func_136(73, 1, 0);
			func_17(73, 1);
			func_136(74, 1, 0);
			func_17(74, 1);
			func_136(75, 1, 0);
			func_17(75, 1);
			func_136(72, 1, 0);
			func_17(72, 1);
		}
		switch (Global_111858.f_19012.f_1)
		{
			case 0:
				func_13(70);
				func_9(71);
				break;
			
			case 1:
				func_13(71);
				func_9(72);
				break;
			
			case 2:
				func_13(72);
				func_9(73);
				break;
			
			case 3:
				func_13(73);
				func_9(74);
				break;
			
			case 4:
				func_13(74);
				func_9(75);
				break;
			
			case 5:
				func_13(75);
				break;
			}
	}
}

void func_9(int iParam0)
{
	func_12(iParam0, 1, 0);
	func_11(iParam0, 1);
	func_10(iParam0, 1);
}

void func_10(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xCE990E643CD9D0E5(Global_31346[iVar0 /*23*/].f_11, 4))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xBE20AB8238688965(&(Global_31346[iVar0 /*23*/].f_11), 4);
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_31346[iVar0 /*23*/].f_11), 4);
	}
	if (Global_31343 == 1)
	{
		Global_31344 = 1;
	}
	Global_31343 = 1;
	unk_0xBE20AB8238688965(&(Global_31346[iVar0 /*23*/].f_11), 18);
}

void func_11(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xCE990E643CD9D0E5(Global_31346[iVar0 /*23*/].f_11, 5))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xBE20AB8238688965(&(Global_31346[iVar0 /*23*/].f_11), 5);
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_31346[iVar0 /*23*/].f_11), 5);
	}
	if (Global_31343 == 1)
	{
		Global_31344 = 1;
	}
	Global_31343 = 1;
	unk_0xBE20AB8238688965(&(Global_31346[iVar0 /*23*/].f_11), 18);
}

void func_12(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xCE990E643CD9D0E5(Global_31346[iVar0 /*23*/].f_11, 6))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xBE20AB8238688965(&(Global_31346[iVar0 /*23*/].f_11), 6);
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_31346[iVar0 /*23*/].f_11), 6);
	}
	if (bParam2)
	{
		unk_0xBE20AB8238688965(&(Global_31346[iVar0 /*23*/].f_11), 11);
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_31346[iVar0 /*23*/].f_11), 11);
	}
	if (Global_31343 == 1)
	{
		Global_31344 = 1;
	}
	Global_31343 = 1;
	unk_0xBE20AB8238688965(&(Global_31346[iVar0 /*23*/].f_11), 18);
}

void func_13(int iParam0)
{
	func_12(iParam0, 0, 0);
	func_11(iParam0, 1);
	func_10(iParam0, 1);
}

void func_14(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_15(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_15(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_16();
	}
}

void func_16()
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

void func_17(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xCE990E643CD9D0E5(Global_31346[iVar0 /*23*/].f_11, 20))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xBE20AB8238688965(&(Global_31346[iVar0 /*23*/].f_11), 20);
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_31346[iVar0 /*23*/].f_11), 20);
	}
	if (Global_31343 == 1)
	{
		Global_31344 = 1;
	}
	Global_31343 = 1;
	unk_0xBE20AB8238688965(&(Global_31346[iVar0 /*23*/].f_11), 20);
}

void func_18()
{
	unk_0x7C58E35D84128447();
	unk_0x63A8AAC3876C0B44();
	switch (iLocal_124)
	{
		case 0:
			unk_0x6F9222C1283B5094(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, 1);
			break;
		
		case 1:
			unk_0x6F9222C1283B5094(-509.1254f, 1987.582f, 205.3305f, -948.5215f, 2752.741f, 25.35144f, 300f, 1);
			break;
		
		case 3:
			unk_0x6F9222C1283B5094(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 1);
			break;
		
		case 4:
			break;
		
		case 5:
			unk_0x6F9222C1283B5094(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, 1);
			break;
		
		case 2:
			unk_0x6F9222C1283B5094(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 1);
			break;
	}
}

void func_19(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (unk_0x7BCC91F3C1CF24E8(&Global_96025))
	{
		return;
	}
	if (unk_0xADBFE878606408EB(sParam0, &Global_96025, 0, -1) != 0)
	{
		return;
	}
	unk_0x0EBA6E775E8E6AF8(sParam0, iParam1, iParam2, iParam3, iParam4, Global_93132);
	StringCopy(&Global_96025, "", 64);
}

void func_20(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_41593)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_41592 = 0;
	Global_41594 = 0;
	Global_41631 = 15;
	Global_61714 = 0;
	Global_61715 = 0;
}

void func_21()
{
	char cVar0[24];
	
	if (unk_0x11E5DE894D6A8A5F() || unk_0xC6C08C02733D02C8())
	{
		unk_0xC4D6DAEA1F5E94FE(StackVal, 0, 0, 0);
	}
	else if (unk_0x59ED414969A48197() || unk_0xDCA0815D900F27F8())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x0DB4750EF9385C97(0, &cVar0);
	}
}

void func_22(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_23(var uParam0)
{
	if (func_26(uParam0))
	{
		if (func_25(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_24(unk_0xCE990E643CD9D0E5(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_24(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(unk_0x578C4EF320340AF7());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x25DDB354A40FFCDB())
	{
		iVar2 = unk_0x6CAAB7E78B5D978A();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(unk_0x578C4EF320340AF7()) / 1000f);
}

bool func_25(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, 2);
}

bool func_26(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, 1);
}

int func_27()
{
	func_8();
	return 1;
}

void func_28()
{
}

void func_29(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x7BCC91F3C1CF24E8(&Global_96025))
	{
		unk_0x0EBA6E775E8E6AF8(&Global_96025, 0, 0, 0, 1, 0);
		StringCopy(&Global_96025, "", 64);
	}
	StringCopy(&Global_96025, sParam0, 64);
	unk_0x1FCF66376799FB94(sParam0, iParam1, iParam2, func_7(0));
}

char* func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_31(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x11E5DE894D6A8A5F() || unk_0xC6C08C02733D02C8())
	{
		uVar0 = iParam0;
		unk_0xC4D6DAEA1F5E94FE(8, &uVar0, 1, 1);
	}
	else if (unk_0x59ED414969A48197() || unk_0xDCA0815D900F27F8())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x0DB4750EF9385C97(8, &cVar1);
	}
}

void func_32(var uParam0)
{
	if (!func_26(uParam0))
	{
		func_35(uParam0);
	}
	else
	{
		func_33(uParam0);
	}
}

void func_33(var uParam0)
{
	func_34(uParam0, 0f);
}

void func_34(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_24(unk_0xCE990E643CD9D0E5(*uParam0, 4)) - fParam1);
	unk_0xBE20AB8238688965(uParam0, 1);
	unk_0xD2459066EA58CE43(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_35(var uParam0)
{
	if (!func_26(uParam0))
	{
		func_33(uParam0);
	}
}

int func_36()
{
	struct<18> Var0;
	int iVar18;
	int iVar19;
	
	unk_0xD289B55B6AADBA10(1);
	Var0.f_4 = 5;
	Var0.f_10 = 5;
	Var0 = iLocal_124;
	Var0.f_1 = { Local_121 };
	iVar18 = 0;
	iVar18 = 0;
	while (iVar18 < Var0.f_4)
	{
		Var0.f_4[iVar18] = Local_329[iVar18 /*14*/];
		Var0.f_10[iVar18] = Local_329[iVar18 /*14*/].f_1;
		iVar18++;
	}
	Var0.f_16 = Local_329.f_83;
	Var0.f_17 = Local_329.f_83.f_1;
	unk_0x0A794A8277A63161("SwitchSceneNeutral", 0, 1);
	SYSTEM::WAIT(400);
	iVar19 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&Local_53, &Var0, 18, iLocal_97);
	unk_0x5F82526B41A5EBCE(&Local_53);
	return iVar19;
}

void func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return;
	}
	iVar0 = func_45(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_42588[iVar0 /*5*/];
		func_40(1, iVar1, 1);
		return;
	}
	iVar2 = func_39(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_38(iVar2);
}

void func_38(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_42562[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_42562[iParam0 /*5*/].f_1 == unk_0x9B0761B4C3EB8BC7())
		{
			Global_42799 = 0;
		}
	}
	Global_42562[iParam0 /*5*/] = 13;
	Global_42562[iParam0 /*5*/].f_1 = 0;
	Global_42562[iParam0 /*5*/].f_2 = 0;
	Global_42562[iParam0 /*5*/].f_3 = 0;
	Global_42562[iParam0 /*5*/].f_4 = 0;
	Global_42560 = (Global_42560 - 1);
	if (Global_42560 < 0)
	{
		Global_42560 = 0;
	}
}

int func_39(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_42562[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_40(int iParam0, int iParam1, int iParam2)
{
	func_41(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_43(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_42();
	if (iVar0 == -1)
	{
		return;
	}
	Global_42669[iVar0 /*6*/] = iParam0;
	Global_42669[iVar0 /*6*/].f_1 = iParam1;
	Global_42669[iVar0 /*6*/].f_2 = iParam2;
	Global_42669[iVar0 /*6*/].f_3 = iParam3;
	Global_42669[iVar0 /*6*/].f_4 = iParam4;
	Global_42669[iVar0 /*6*/].f_5 = iParam5;
}

int func_42()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42669[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_43(int iParam0, int iParam1, int iParam2)
{
	if (func_44(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_44(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_42669[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_42669[iVar0 /*6*/])
			{
				if (iParam1 == Global_42669[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_45(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_42588[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_42588[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_46()
{
	if (Global_8356[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8356[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8356[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8356[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8356[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8356[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0xD2459066EA58CE43(&Global_7551, 25);
	unk_0xBE20AB8238688965(&Global_7552, 11);
}

int func_47(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_49(0))
		{
			return 0;
		}
		Global_41595++;
		*iParam0 = Global_41595;
		unk_0xBF70D1B666A353F5(unk_0x2639A2323BEA8CC6(), 0);
		Global_22411.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x09BA0099935AAA6B(8);
		}
		Global_41631 = iParam2;
		Global_41593 = *iParam0;
		Global_41594 = iParam4;
		Global_41592 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_41592 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41592)
			{
				if (Global_41598[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41593 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_140(iParam2))
		{
			return 0;
		}
		if (Global_41592 == 8)
		{
			return 0;
		}
		Global_41595++;
		*iParam0 = Global_41595;
		Global_41598[Global_41592 /*4*/] = Global_41595;
		Global_41598[Global_41592 /*4*/].f_1 = iParam1;
		Global_41598[Global_41592 /*4*/].f_2 = iParam2;
		Global_41598[Global_41592 /*4*/].f_3 = 0;
		Global_41592++;
		if (iParam4 != 0)
		{
			func_48(iParam0, iParam4);
		}
	}
	return 2;
}

void func_48(var uParam0, int iParam1)
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

int func_49(int iParam0)
{
	if (Global_41631 == 15)
	{
		return 0;
	}
	if (func_140(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_50()
{
	float fVar0;
	
	fVar0 = SYSTEM::VDIST2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), Local_121);
	if (fVar0 < 62500f)
	{
		func_80();
		func_77();
		if (iLocal_159)
		{
			if (fVar0 < 64f)
			{
				func_76();
				iLocal_159 = 0;
			}
		}
		if (fVar0 < 400f)
		{
			func_54();
		}
	}
	if (!iLocal_160)
	{
		if (func_52())
		{
			iLocal_160 = 1;
			func_51();
		}
	}
}

void func_51()
{
	iLocal_48++;
}

int func_52()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_53())
	{
		if (!unk_0xAE06B9E39EBDE049(Local_329[iVar0 /*14*/]) || !unk_0xAE06B9E39EBDE049(Local_329[iVar0 /*14*/].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	if (!unk_0xAE06B9E39EBDE049(Local_329.f_83) || !unk_0xAE06B9E39EBDE049(Local_329.f_83.f_1))
	{
		return 0;
	}
	return 1;
}

int func_53()
{
	switch (iLocal_124)
	{
		case 0:
		case 3:
		case 5:
		case 2:
			return 5;
			break;
		
		case 1:
		case 4:
			return 4;
			break;
	}
	return 0;
}

void func_54()
{
	int iVar0;
	char* sVar1;
	
	if (!func_26(&uLocal_147))
	{
		func_35(&uLocal_147);
		return;
	}
	if (unk_0xAE06B9E39EBDE049(iLocal_157) && !unk_0xA59F96B50B97E63C(iLocal_157, 0))
	{
		if (unk_0x6F683C1C0BB1BA8D(iLocal_157))
		{
			return;
		}
	}
	if (func_23(&uLocal_147) >= 8f)
	{
		iVar0 = (unk_0x344C570D6F8700DF(0, 65535) % 3) + 1;
		if (iVar0 > 0 && iVar0 <= 3)
		{
			if (unk_0xA59F96B50B97E63C(Local_329[(iVar0 - 1) /*14*/], 0))
			{
				return;
			}
			switch (iVar0)
			{
				case 1:
					sVar1 = "ORR_GUY1";
					break;
				
				case 2:
					sVar1 = "ORR_GUY2";
					break;
				
				case 3:
					sVar1 = "ORR_GUY3";
					break;
			}
			func_55(&uLocal_163, "ORRAUD", sVar1, 3, 0, 0, 0);
			func_33(&uLocal_147);
		}
	}
}

int func_55(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_75(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21012 = 0;
	Global_21014 = 0;
	Global_21019 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 0;
	Global_2621441 = 0;
	return func_56(sParam2, iParam3, 0);
}

int func_56(char* sParam0, int iParam1, bool bParam2)
{
	Global_21006 = 0;
	if (Global_21005 == 0 || Global_21007 == 2)
	{
		if (Global_21005 != 0)
		{
			if (iParam1 > Global_21007)
			{
				if (Global_21012 == 0)
				{
					unk_0xBE4122AC23440E7D(0);
					Global_19681.f_1 = 3;
					Global_21005 = 0;
					Global_21006 = 1;
					Global_21058 = 0;
					Global_21001 = 0;
					Global_21002 = 0;
					Global_21016 = 0;
					Global_21015 = 0;
					Global_19680 = 0;
				}
				else
				{
					func_74();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x6A5CC4A2C9D9ED8D())
		{
			return 0;
		}
		if (func_96(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_73();
		Global_20294 = { Global_20459 };
		Global_21011 = Global_21012;
		Global_21018 = Global_21019;
		Global_2621442 = Global_2621441;
		Global_21020 = { Global_21036 };
		Global_21013 = Global_21014;
		Global_21995 = Global_21996;
		Global_22003 = { Global_22009 };
		Global_21997 = Global_21998;
		Global_21999 = Global_22000;
		Global_22001 = Global_22002;
		Global_20624.f_370 = Global_21994;
		Global_20624.f_368 = Global_21992;
		Global_20624.f_369 = Global_21993;
		Global_21001 = Global_21002;
		if (Global_21011)
		{
			unk_0xD2459066EA58CE43(&Global_7551, 20);
			unk_0xD2459066EA58CE43(&Global_7552, 17);
			unk_0xD2459066EA58CE43(&Global_7553, 0);
			if (bParam2)
			{
				func_66();
				if (Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19681.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19647 == 1)
			{
				return 0;
			}
			if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
			{
				if (unk_0x42A04E707DE50816(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (func_65())
				{
					return 0;
				}
				if (unk_0x7587087519CF4F83(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (unk_0xAACBFCE60AF94F2D(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (unk_0x02D1369035663875(unk_0x9B0761B4C3EB8BC7(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76833)
				{
					if (unk_0xE72C9284B5143451(unk_0x9B0761B4C3EB8BC7()))
					{
						return 0;
					}
					if (unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC()))
					{
						return 0;
					}
					if (unk_0x887D491E579FA61E(unk_0x9B0761B4C3EB8BC7()))
					{
						return 0;
					}
					if (unk_0x4C9EC9A10C274889(unk_0x460153A63B9477BC(), 0))
					{
						return 0;
					}
				}
			}
			if (func_64())
			{
				return 0;
			}
			else
			{
				switch (Global_19681.f_1)
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
				if (unk_0xCE990E643CD9D0E5(Global_7551, 9))
				{
					return 0;
				}
			}
			func_63();
			Global_21015 = bParam2;
		}
		Global_21007 = iParam1;
		StringCopy(&Global_20624, sParam0, 24);
		Global_19871 = 0;
		func_62();
		func_57();
		return 1;
	}
	if (Global_21005 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21007 || iParam1 == Global_21007)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_74();
	}
	return 0;
}

void func_57()
{
	if (!func_58())
	{
		return;
	}
	if (Global_21011)
	{
		MemCopy(&(Global_1703978.f_1), {Global_20624}, 4);
		Global_1703978 = Global_6866;
		Global_1703978.f_6 = Global_21015;
	}
}

int func_58()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (unk_0x460153A63B9477BC() == func_61())
	{
		return 0;
	}
	if (func_59(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xFC559366953F62B3())
	{
		return 0;
	}
	return 1;
}

bool func_59(int iParam0)
{
	return func_60(iParam0, 20);
}

bool func_60(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_61()
{
	return -1;
}

void func_62()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19873[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xBE4122AC23440E7D(0);
	Global_21005 = 1;
}

void func_63()
{
	Global_21058 = Global_21057;
	Global_21052 = Global_21053;
	Global_21099 = { Global_21087 };
	Global_21105 = { Global_21093 };
	Global_21060 = Global_21059;
	Global_21129 = { Global_21111 };
	Global_21135 = { Global_21117 };
	Global_21141 = { Global_21123 };
	Global_21147 = { Global_21153 };
	Global_6866 = Global_6867;
	Global_6868 = Global_6869;
	Global_21016 = Global_21017;
	Global_21018 = Global_21019;
	Global_21020 = { Global_21036 };
	Global_21009 = Global_21010;
	Global_22021 = 0;
	Global_21054 = 0;
	Global_21055 = 0;
	unk_0xD2459066EA58CE43(&Global_7552, 16);
}

int func_64()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_65()
{
	int iVar0;
	int iVar1;
	
	if (Global_76833)
	{
		iVar0 = 0;
		unk_0x1386E5E658CE3032(unk_0x9B0761B4C3EB8BC7(), &iVar1, 1);
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5BFE1F305D18843B() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (unk_0xD15202C6B03220B8(unk_0x9B0761B4C3EB8BC7(), 78, 1))
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

void func_66()
{
	if (func_116(14))
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
		Global_19681 = func_67();
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

var func_67()
{
	func_68();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_68()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_71(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_70(unk_0x9B0761B4C3EB8BC7());
			if (func_69(iVar0) && (!func_116(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_69(Global_111858.f_2359.f_539.f_4321))
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

bool func_69(int iParam0)
{
	return iParam0 < 3;
}

int func_70(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(uParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_71(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_71(int iParam0)
{
	if (func_69(iParam0))
	{
		return func_72(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_72(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

void func_73()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20294[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20294[iVar0 /*10*/].f_1), "", 24);
		Global_20294[iVar0 /*10*/].f_7 = 0;
		Global_20294[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20294.f_161 = -99;
	Global_20294.f_162 = { 0f, 0f, 0f };
}

void func_74()
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

void func_75(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20459 = { *uParam0 };
	Global_6867 = iParam1;
	StringCopy(&Global_21075, sParam2, 24);
	Global_21994 = uParam5;
	if (iParam3 == 0)
	{
		Global_21992 = 1;
		Global_21990 = 0;
	}
	else
	{
		Global_21992 = 0;
		Global_21990 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21993 = 1;
		Global_21991 = 0;
	}
	else
	{
		Global_21993 = 0;
		Global_21991 = 1;
	}
}

void func_76()
{
	int iVar0;
	
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()) && !unk_0xA59F96B50B97E63C(Local_329.f_83, 0))
	{
		iVar0 = unk_0x1F596C965B00E290();
		if (iVar0 <= iLocal_119 && iVar0 >= iLocal_120)
		{
			iLocal_159 = 0;
			return;
		}
		unk_0xF1B800B6646C4019(Local_329.f_83, 0f, 0f, 0.75f, 1, 2000, 2000, 2000, 0);
	}
}

void func_77()
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = unk_0x1F596C965B00E290();
	if (iVar0 <= iLocal_119 && iVar0 >= iLocal_120)
	{
		iLocal_328 = 0;
		return;
	}
	if (!unk_0xA59F96B50B97E63C(iLocal_157, 0) && !unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		switch (iLocal_328)
		{
			case 0:
				if (SYSTEM::VDIST2(unk_0x3E4D3CCC220BDFB1(iLocal_157, 1), unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1)) < 64f && !unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					iLocal_161 = 0;
					iLocal_162 = 0;
					iLocal_328 = 1;
				}
				break;
			
			case 1:
				unk_0x9DC06E2A59C5AEBB(&uVar1);
				unk_0xA785552633ED203B(0, unk_0x9B0761B4C3EB8BC7(), -1, 0, 2);
				unk_0xD08E9EAF091A1AAB(0, unk_0x9B0761B4C3EB8BC7(), 0);
				unk_0x19F29730874AD6F1(uVar1);
				unk_0x9B6EC2CECE1010EF(iLocal_157, uVar1);
				unk_0x4F83FEE4454169D4(&uVar1);
				iLocal_328 = 2;
				break;
			
			case 2:
				if ((unk_0x16BC17A8EDC701A2(iLocal_157, 242628503) != 1 || unk_0x04055E36623F131B(iLocal_157, unk_0x9B0761B4C3EB8BC7(), 20f)) && !unk_0x6A5CC4A2C9D9ED8D())
				{
					unk_0xD08E9EAF091A1AAB(iLocal_157, unk_0x9B0761B4C3EB8BC7(), -1);
					if (!iLocal_162)
					{
						func_78(iLocal_157, "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						func_78(iLocal_157, "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_328 = 3;
				}
				break;
			
			case 3:
				if (!unk_0x6F683C1C0BB1BA8D(iLocal_157))
				{
					func_33(&uLocal_144);
					unk_0x756D74A3EF0AB788(iLocal_157, "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0, 0, 0, 0);
					iLocal_328 = 4;
				}
				break;
			
			case 4:
				if (SYSTEM::VDIST2(unk_0x3E4D3CCC220BDFB1(iLocal_157, 1), unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1)) > 225f)
				{
					unk_0x9DC06E2A59C5AEBB(&uVar2);
					unk_0xF4726838A5A40509(0, Local_329.f_83.f_9, 1000);
					unk_0x756D74A3EF0AB788(0, Local_329.f_83.f_12, Local_329.f_83.f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0x19F29730874AD6F1(uVar2);
					unk_0x9B6EC2CECE1010EF(iLocal_157, uVar2);
					unk_0x4F83FEE4454169D4(&uVar2);
					iLocal_328 = 0;
				}
				if (func_26(&uLocal_144))
				{
					if (func_23(&uLocal_144) >= 5f && !iLocal_161)
					{
						iLocal_161 = 1;
						iLocal_328 = 1;
					}
					else if (func_23(&uLocal_144) >= 10f && !iLocal_162)
					{
						iLocal_162 = 1;
						iLocal_328 = 1;
					}
				}
				break;
			
			case 5:
				break;
			}
	}
}

void func_78(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x1A454EFB8BC73430(iParam0, sParam1, sParam2, func_79(iParam3), 0);
}

int func_79(int iParam0)
{
	int iVar0;
	
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

void func_80()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (unk_0xAE06B9E39EBDE049(Local_329[iVar2 /*14*/].f_1) && unk_0xAE06B9E39EBDE049(Local_329[iVar2 /*14*/]))
		{
			if (func_85(Local_329[iVar2 /*14*/], 1, 0, 0, 0) || unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), Local_329[iVar2 /*14*/].f_1, 1))
			{
				func_83();
				func_82(iLocal_105);
				unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), 1, 0);
			}
			if (!unk_0x5AEB5DDFFAD43CA5(Local_329[iVar2 /*14*/]))
			{
				if (func_26(&(Local_125[iVar2 /*3*/])))
				{
					if (func_23(&(Local_125[iVar2 /*3*/])) > uLocal_150[iVar2])
					{
						if (unk_0x80FF6C016CDB0FAF(Local_329[iVar2 /*14*/].f_1, 0) && unk_0xE0B3BC41DDA88DF0(Local_329[iVar2 /*14*/], Local_329[iVar2 /*14*/].f_1, 0))
						{
							iVar0 = unk_0x344C570D6F8700DF(250, 500);
							iVar1 = unk_0x344C570D6F8700DF(250, 500);
							unk_0x9DC06E2A59C5AEBB(&uVar3);
							unk_0xDC3073F7CC12181D(0, Local_329[iVar2 /*14*/].f_1, 1, iVar0);
							unk_0xDC3073F7CC12181D(0, Local_329[iVar2 /*14*/].f_1, 31, iVar1);
							unk_0x19F29730874AD6F1(uVar3);
							if (!unk_0x5AEB5DDFFAD43CA5(Local_329[iVar2 /*14*/]))
							{
								unk_0x9B6EC2CECE1010EF(Local_329[iVar2 /*14*/], uVar3);
							}
							unk_0x4F83FEE4454169D4(&uVar3);
						}
						func_33(&(Local_125[iVar2 /*3*/]));
						uLocal_150[iVar2] = unk_0x658086F2B3C5E4E4(0f, 3f);
					}
				}
				else
				{
					func_35(&(Local_125[iVar2 /*3*/]));
				}
			}
			if (!unk_0xA59F96B50B97E63C(Local_329[iVar2 /*14*/], 0))
			{
				if ((unk_0xA65352E7FEA59881(unk_0x9B0761B4C3EB8BC7(), Local_329[iVar2 /*14*/]) && !unk_0xCED6B5226244381C(Local_329[iVar2 /*14*/])) && !unk_0x12C99794D883929B(Local_329[iVar2 /*14*/]))
				{
					Local_329[iVar2 /*14*/].f_11 = 1;
				}
				else if (Local_329[iVar2 /*14*/].f_11)
				{
					unk_0x9DC06E2A59C5AEBB(&uVar3);
					unk_0xF4726838A5A40509(0, Local_329[iVar2 /*14*/].f_9, 1000);
					unk_0x756D74A3EF0AB788(0, Local_329[iVar2 /*14*/].f_12, Local_329[iVar2 /*14*/].f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0x19F29730874AD6F1(uVar3);
					unk_0x9B6EC2CECE1010EF(Local_329[iVar2 /*14*/], uVar3);
					unk_0x4F83FEE4454169D4(&uVar3);
					Local_329[iVar2 /*14*/].f_11 = 0;
				}
				if (unk_0xCED6B5226244381C(Local_329[iVar2 /*14*/]) || unk_0x12C99794D883929B(Local_329[iVar2 /*14*/]))
				{
					if (!Local_329[iVar2 /*14*/].f_10 && (unk_0xCED6B5226244381C(Local_329[iVar2 /*14*/]) || unk_0x12C99794D883929B(Local_329[iVar2 /*14*/])))
					{
						Local_329.f_101++;
					}
					Local_329[iVar2 /*14*/].f_10 = 1;
				}
				else if (Local_329[iVar2 /*14*/].f_10)
				{
					unk_0x9DC06E2A59C5AEBB(&uVar3);
					unk_0xD08E9EAF091A1AAB(0, unk_0x9B0761B4C3EB8BC7(), 1000);
					unk_0x756D74A3EF0AB788(0, "gestures@m@standing@casual", func_81(), 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0xF4726838A5A40509(0, Local_329[iVar2 /*14*/].f_9, 1000);
					unk_0x756D74A3EF0AB788(0, Local_329[iVar2 /*14*/].f_12, Local_329[iVar2 /*14*/].f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0x19F29730874AD6F1(uVar3);
					unk_0x9B6EC2CECE1010EF(Local_329[iVar2 /*14*/], uVar3);
					unk_0x4F83FEE4454169D4(&uVar3);
					Local_329[iVar2 /*14*/].f_10 = 0;
				}
			}
		}
		iVar2++;
	}
	if (unk_0xAE06B9E39EBDE049(Local_329.f_83.f_1) && unk_0xAE06B9E39EBDE049(Local_329.f_83))
	{
		if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), Local_329.f_83.f_1, 0))
		{
			iLocal_86 = Local_329.f_83.f_1;
		}
		if (func_85(Local_329.f_83, 1, 0, 0, 0))
		{
			func_83();
			func_82(iLocal_105);
			unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), 1, 0);
		}
		if (!unk_0x5AEB5DDFFAD43CA5(Local_329.f_83))
		{
			if (func_26(&uLocal_141))
			{
				if (func_23(&uLocal_141) > fLocal_156)
				{
					if (unk_0x80FF6C016CDB0FAF(Local_329.f_83.f_1, 0) && unk_0xE0B3BC41DDA88DF0(Local_329.f_83, Local_329.f_83.f_1, 0))
					{
						iVar0 = unk_0x344C570D6F8700DF(250, 500);
						iVar1 = unk_0x344C570D6F8700DF(250, 500);
						unk_0x9DC06E2A59C5AEBB(&uVar3);
						unk_0xDC3073F7CC12181D(0, Local_329.f_83.f_1, 1, iVar0);
						unk_0xDC3073F7CC12181D(0, Local_329.f_83.f_1, 31, iVar1);
						unk_0x19F29730874AD6F1(uVar3);
						if (!unk_0x5AEB5DDFFAD43CA5(Local_329.f_83))
						{
							unk_0x9B6EC2CECE1010EF(Local_329.f_83, uVar3);
						}
						unk_0x4F83FEE4454169D4(&uVar3);
					}
					func_33(&uLocal_141);
					fLocal_156 = unk_0x658086F2B3C5E4E4(0f, 3f);
				}
			}
			else
			{
				func_35(&uLocal_141);
			}
		}
		if (!unk_0xA59F96B50B97E63C(Local_329.f_83, 0))
		{
			if ((unk_0xA65352E7FEA59881(unk_0x9B0761B4C3EB8BC7(), Local_329.f_83) && !unk_0xCED6B5226244381C(Local_329.f_83)) && !unk_0x12C99794D883929B(Local_329.f_83))
			{
				Local_329.f_83.f_11 = 1;
			}
			else if (Local_329.f_83.f_11)
			{
				unk_0x9DC06E2A59C5AEBB(&uVar3);
				unk_0xF4726838A5A40509(0, Local_329.f_83.f_9, 1000);
				unk_0x756D74A3EF0AB788(0, Local_329.f_83.f_12, Local_329.f_83.f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x19F29730874AD6F1(uVar3);
				unk_0x9B6EC2CECE1010EF(Local_329.f_83, uVar3);
				unk_0x4F83FEE4454169D4(&uVar3);
				Local_329.f_83.f_11 = 0;
			}
			if (unk_0xCED6B5226244381C(Local_329.f_83) || unk_0x12C99794D883929B(Local_329.f_83))
			{
				if (!Local_329.f_83.f_10)
				{
					Local_329.f_101++;
				}
				Local_329.f_83.f_10 = 1;
			}
			else if (Local_329.f_83.f_10)
			{
				unk_0x9DC06E2A59C5AEBB(&uVar3);
				unk_0xD08E9EAF091A1AAB(0, unk_0x9B0761B4C3EB8BC7(), 1000);
				unk_0x756D74A3EF0AB788(0, "gestures@m@standing@casual", func_81(), 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xF4726838A5A40509(0, Local_329.f_83.f_9, 1000);
				unk_0x756D74A3EF0AB788(0, Local_329.f_83.f_12, Local_329.f_83.f_13, 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x19F29730874AD6F1(uVar3);
				unk_0x9B6EC2CECE1010EF(Local_329.f_83, uVar3);
				unk_0x4F83FEE4454169D4(&uVar3);
				iLocal_328 = 4;
				func_33(&uLocal_144);
				Local_329.f_83.f_10 = 0;
			}
		}
	}
}

char* func_81()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = (unk_0x344C570D6F8700DF(0, 65535) % 2);
	switch (iVar0)
	{
		case 0:
			sVar1 = "gesture_what_hard";
			break;
		
		case 1:
		default:
			sVar1 = "gesture_what_soft";
			break;
	}
	return sVar1;
}

void func_82(int iParam0)
{
	if (iLocal_95 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			func_136(iParam0, 0, 0);
		}
		iLocal_105 = 263;
		func_90(&iLocal_96);
		iLocal_95 = 9;
	}
}

void func_83()
{
	int iVar0[10];
	var uVar11;
	int iVar12;
	
	unk_0x3214CDFE45D11916(unk_0x9B0761B4C3EB8BC7(), &iVar0, -1);
	iVar12 = 0;
	iVar12 = 0;
	while (iVar12 < iVar0)
	{
		if (unk_0xAE06B9E39EBDE049(iVar0[iVar12]) && !unk_0x5AEB5DDFFAD43CA5(iVar0[iVar12]))
		{
			if (unk_0xC0A3F78AF5448915(unk_0x9B0761B4C3EB8BC7(), 4))
			{
				unk_0x8B18A80E8EB15510(iVar0[iVar12], unk_0x9B0761B4C3EB8BC7(), 100f, -1, 0, 0);
			}
			else
			{
				unk_0x9DC06E2A59C5AEBB(&uVar11);
				unk_0xD08E9EAF091A1AAB(0, unk_0x9B0761B4C3EB8BC7(), unk_0x344C570D6F8700DF(300, 900));
				unk_0x8FF9CE1C0F94F59A(0, unk_0x9B0761B4C3EB8BC7(), 0, 0);
				unk_0x19F29730874AD6F1(uVar11);
				unk_0x9B6EC2CECE1010EF(iVar0[iVar12], uVar11);
				unk_0x4F83FEE4454169D4(&uVar11);
			}
		}
		iVar12++;
	}
	switch (Global_111858.f_19012.f_1)
	{
		case 0:
			func_84(0);
			break;
		
		case 1:
			func_84(0);
			break;
		
		case 3:
			func_84(0);
			break;
		
		case 4:
			func_84(0);
			break;
		
		case 5:
			func_84(0);
			break;
		
		case 2:
			func_84(0);
			break;
	}
}

void func_84(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_106 = iParam0;
	iLocal_104 = 0;
	iLocal_95 = 7;
}

int func_85(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = unk_0x9B0761B4C3EB8BC7();
	if (Local_329.f_101 >= 3)
	{
		return 1;
	}
	if (unk_0xAE06B9E39EBDE049(uParam0))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
		{
			Var1 = { unk_0x3E4D3CCC220BDFB1(iParam0, 1) };
			if (bParam1)
			{
				if (unk_0xCDF860E56BBCC6B4(iParam0, unk_0x9B0761B4C3EB8BC7(), 1))
				{
					return 1;
				}
			}
			if (bParam2)
			{
				if (unk_0xF83D0A2EC884A4DD(iParam0, iVar0))
				{
					return 1;
				}
			}
			if (bParam4)
			{
				if (unk_0xA65352E7FEA59881(iVar0, iParam0))
				{
					return 1;
				}
			}
			if (bParam3)
			{
				if (unk_0x2311EB213A0CB707(unk_0x460153A63B9477BC(), iParam0) || unk_0x5E5402F6D3B26AFB(unk_0x460153A63B9477BC(), iParam0))
				{
					if (func_86(iParam0, 1) < 20f)
					{
						return 1;
					}
				}
			}
			if (unk_0x47DBF174A0CB9D55(iParam0, 0))
			{
				if (unk_0xCDF860E56BBCC6B4(unk_0xA5D5B1042E8F47BD(iParam0, 0), iVar0, 1))
				{
					return 1;
				}
			}
			if (unk_0xA26A1295C5145A11(iParam0))
			{
				return 1;
			}
			if (unk_0xC0A3F78AF5448915(iVar0, 4))
			{
				if (unk_0x7922FF28ED63354A(iVar0))
				{
					if (unk_0xC2169C00B643278B(iParam0, unk_0x3E4D3CCC220BDFB1(iVar0, 1), 45f, 45f, 45f, 0, 1, 0))
					{
						return 1;
					}
				}
			}
			if (unk_0xC7EB33BFDB436C87(Var1, 4f, 1))
			{
				return 1;
			}
			if (unk_0x5AC0C31BB5BC0343((Var1.x - 5f), (Var1.f_1 - 5f), (Var1.f_2 - 5f), (Var1.x + 5f), (Var1.f_1 + 5f), (Var1.f_2 + 5f), 0))
			{
				return 1;
			}
			if (unk_0xC0736D5851285045(iParam0))
			{
				if (unk_0x754A4975FB27D0BA(iParam0) == iVar0)
				{
					return 1;
				}
			}
			if ((unk_0x3628D28B8671F14F(-1, Var1, 25f) && !unk_0x3628D28B8671F14F(11, Var1, 25f)) && !unk_0x3628D28B8671F14F(13, Var1, 25f))
			{
				return 1;
			}
			unk_0xBB7976F6FB9C9DD2(iParam0);
		}
		else if (bParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_86(var uParam0, int iParam1)
{
	return func_87(unk_0x1FA7B77001D60F9D(unk_0x2639A2323BEA8CC6()), uParam0, iParam1);
}

var func_87(int iParam0, int iParam1, var uParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xA59F96B50B97E63C(uParam0, 0))
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, 0) };
	}
	if (!unk_0xA59F96B50B97E63C(uParam1, 0))
	{
		Var3 = { unk_0x3E4D3CCC220BDFB1(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x3E4D3CCC220BDFB1(iParam1, 0) };
	}
	return unk_0x272784C60C397DB6(Var0, Var3, uParam2);
}

int func_88(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_89(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x5A228A6A51E757C8(unk_0x2639A2323BEA8CC6()))
	{
		return 0;
	}
	if (func_95(0))
	{
		return 0;
	}
	if (unk_0x3EBB66F936A3436E())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42356[iVar0 /*32*/] == 1 && Global_42356[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_42356[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_42356[iVar0 /*32*/].f_5 = 1;
			Global_42356[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_42356[iVar0 /*32*/] == 0)
			{
			}
			if (Global_42356[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_89(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42356[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_90(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_89(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42356[iVar0 /*32*/])
		{
			Global_42356[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_91(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x7B70881748D166CD(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x9CC4D06F5338CA6B())
	{
		if (!*iParam0 == -1)
		{
			func_90(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_42356[iVar0 /*32*/])
		{
			Global_42356[iVar0 /*32*/] = 1;
			Global_42356[iVar0 /*32*/].f_1 = Global_42557;
			Global_42557++;
			Global_42356[iVar0 /*32*/].f_4 = 0;
			Global_42356[iVar0 /*32*/].f_29 = 0;
			Global_42356[iVar0 /*32*/].f_5 = 0;
			Global_42356[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_42356[iVar0 /*32*/].f_8), sParam2, 16);
			Global_42356[iVar0 /*32*/].f_6 = iParam3;
			Global_42356[iVar0 /*32*/].f_31 = unk_0x354AD085195C5FA6();
			Global_42356[iVar0 /*32*/].f_7 = 0;
			Global_42356[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x7BCC91F3C1CF24E8(sParam4))
			{
				Global_42356[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_42356[iVar0 /*32*/].f_13), sParam4, 64);
				Global_42356[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_42356[iVar0 /*32*/].f_12 = 0;
				Global_42356[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_42356[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_92(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(iParam0) && unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iParam0, 0))
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_93(char* sParam0, int iParam1, int iParam2)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x42710E9E08FA375A(iParam1);
	unk_0x42710E9E08FA375A(iParam2);
	unk_0x1A169149B3D18FCB(0, 0, 1, -1);
}

var func_94()
{
	return Global_74030;
}

int func_95(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19681.f_1 > 3)
		{
			if (unk_0xCE990E643CD9D0E5(Global_7551, 14))
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
	if (unk_0x7B70881748D166CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19681.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_96(int iParam0, int iParam1)
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

bool func_97()
{
	return unk_0x578C4EF320340AF7() <= Global_22550.f_5878 + 100;
}

int func_98()
{
	if (unk_0x7B70881748D166CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_99(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22411.f_4 && Global_22411.f_104 == 4);
	}
	return Global_22411.f_4;
}

int func_100()
{
	return 1;
}

void func_101(var uParam0, int iParam1)
{
	func_102(uParam0, iParam1);
}

void func_102(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_103()
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		return 0;
	}
	unk_0x1386E5E658CE3032(unk_0x9B0761B4C3EB8BC7(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		return ((((bVar1 && unk_0x22D6FB6153F774D3(0, 69)) || (bVar1 && unk_0x22D6FB6153F774D3(0, 70))) || (bVar1 && unk_0x22D6FB6153F774D3(0, 68))) || unk_0x8B1FF66E0C62B7AE(unk_0x460153A63B9477BC()));
	}
	return (((((bVar1 && unk_0x22D6FB6153F774D3(0, 24)) || (bVar1 && unk_0x22D6FB6153F774D3(0, 25))) || (bVar1 && unk_0x22D6FB6153F774D3(0, 47))) || unk_0x0560EC393A88465B(unk_0x9B0761B4C3EB8BC7())) || unk_0x8B1FF66E0C62B7AE(unk_0x460153A63B9477BC()));
}

int func_104(int iParam0)
{
	int iVar0;
	
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				iVar0 = func_67();
				if (!func_69(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x117A56F7403FC6D2(unk_0x460153A63B9477BC()) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0x11B7C25143EE2F29(unk_0x9B0761B4C3EB8BC7())) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0)) || func_111()) || Global_110905) || Global_30970) || func_110()) || func_96(8, -1)) || func_109()) || func_108()) || func_107()) || func_98()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1) || func_111()) || Global_30970) || func_110()) || func_96(8, -1)) || func_107()) || func_109()) || func_108()) || func_98()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x117A56F7403FC6D2(unk_0x460153A63B9477BC()) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0x11B7C25143EE2F29(unk_0x9B0761B4C3EB8BC7())) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0)) || func_111()) || Global_110905) || Global_30970) || func_110()) || func_96(8, -1)) || func_107()) || func_109()) || func_108()) || func_98()) || Global_111858.f_7684.f_919[iVar0] == 5) || Global_42178 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7()) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0)) || func_111()) || Global_110905) || Global_30970) || func_110()) || func_96(8, -1)) || func_109()) || func_108()) || func_98()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_111() || unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) > 0) || func_96(8, -1)) || func_98()) || func_106()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_96(8, -1) || func_109()) || func_108()) || func_106()) || func_105())
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
							if ((((((((((((((unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0) || unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) > 0) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || func_111()) || Global_30970) || func_110()) || func_96(8, -1)) || func_108()) || func_107()) || func_98()) || Global_111858.f_7684.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0) || !unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC())) || !unk_0x117A56F7403FC6D2(unk_0x460153A63B9477BC())) || !unk_0x87F0CB19476706C3()) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || func_111()) || func_108()) || Global_110905) || Global_30970) || func_110()) || Global_42801) || func_96(8, -1)) || func_107()) || func_106()) || func_98()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0) || !unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC())) || !unk_0x117A56F7403FC6D2(unk_0x460153A63B9477BC())) || !unk_0x87F0CB19476706C3()) || unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0)) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 1)) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0x9D7D76BBBFE285E0(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || func_111()) || Global_110905) || Global_30970) || func_110()) || func_96(8, -1)) || func_107()) || func_106()) || func_109()) || func_108()) || func_98())
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

var func_105()
{
	return Global_98994.f_1;
}

int func_106()
{
	if (Global_95877 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_89743[Global_95877 /*34*/].f_15, 13);
	}
	return 0;
}

int func_107()
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

bool func_108()
{
	return Global_99007.f_352 > 0;
}

bool func_109()
{
	return Global_99007.f_351 > 0;
}

var func_110()
{
	return Global_1312896;
}

int func_111()
{
	if (!unk_0x25DDB354A40FFCDB())
	{
		return Global_96433.f_44 == 1;
	}
	return 0;
}

int func_112()
{
	if (unk_0x7B70881748D166CD(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_113()
{
	return Global_94787;
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_116(6) || func_116(7))
			{
				return 1;
			}
			else
			{
				return func_114(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_140(5))
			{
				if (func_104(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_115(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0x8F678487EEBD8CE4(Global_31346[iVar0 /*23*/].f_19);
}

bool func_116(int iParam0)
{
	return Global_41631 == iParam0;
}

void func_117()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x1F596C965B00E290();
	if ((iVar0 <= iLocal_119 && iVar0 >= iLocal_120) || unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) != 0)
	{
		return;
	}
	if (bLocal_158)
	{
		func_127();
		func_126();
		switch (iLocal_124)
		{
			case 0:
				func_125(-1930.38f, 4441.9f, 38.12f, 260.86f, -1933.442f, 4440.866f, 37.2504f, 184.125f);
				func_125(-1931.24f, 4440.26f, 38.05f, 257.2117f, -1932.795f, 4438.275f, 37.402f, 78.7749f);
				func_125(-1935.01f, 4442.57f, 37.48f, 263.59f, -1934.964f, 4438.306f, 37.1741f, 297.2304f);
				func_125(-1935.5f, 4440.32f, 37.48f, 258.09f, -1937.251f, 4438.761f, 36.9256f, 23.8377f);
				func_125(-1939.63f, 4440.46f, 37.25f, 253.32f, -1938.319f, 4439.913f, 36.7166f, 250.6112f);
				func_124(-1939.564f, 4443.306f, 36.3803f, 262.3551f, -1936.208f, 4444.125f, 36.8594f, 123.8187f);
				break;
			
			case 1:
				func_125(-520.2097f, 2010.816f, 203.6035f, 17.0169f, -517.2971f, 2008.383f, 204.0454f, 2.9896f);
				func_125(-516.9937f, 2013.98f, 203.5907f, 19.3803f, -517.1741f, 2010.813f, 203.8412f, 125.7555f);
				func_125(-518.3414f, 2005.449f, 204.1878f, 20.7231f, -519.0882f, 2013.649f, 203.3304f, 195.7951f);
				func_125(-514.8247f, 2008.574f, 204.3629f, 20.2278f, -514.2933f, 2004.923f, 204.5935f, 126.8655f);
				func_124(-516.1545f, 1999.374f, 204.7715f, 18.7907f, -515.4201f, 2003.622f, 204.5549f, 1.757f);
				break;
			
			case 3:
				func_125(-225.41f, 4227.53f, 44.45f, 82.7f, -231.9795f, 4226.31f, 43.8587f, 353.3938f);
				func_125(-233.16f, 4225.81f, 44.29f, 76.66f, -231.3181f, 4229.25f, 43.8681f, 179.3787f);
				func_125(-233.33f, 4228.89f, 44.35f, 80.88f, -229.4769f, 4226.102f, 43.8909f, 311.8915f);
				func_125(-229.58f, 4225.21f, 44.34f, 75.78f, -227.6066f, 4228.867f, 43.9069f, 186.6535f);
				func_125(-228.85f, 4227.71f, 44.57f, 83.38f, -226.7015f, 4226.683f, 43.8597f, 28.0083f);
				func_124(-225.6736f, 4224.503f, 43.8435f, 77.7579f, -227.2893f, 4224.699f, 43.8335f, 36.55f);
				break;
			
			case 4:
				func_125(1608.91f, 3845.06f, 33.94f, 307.24f, 1610.476f, 3839.163f, 32.9854f, 29.8332f);
				func_125(1606.2f, 3838.41f, 33.62f, 307.44f, 1612.908f, 3841.492f, 32.9721f, 78.3f);
				func_125(1610.47f, 3842.26f, 33.61f, 311.44f, 1608.097f, 3842.676f, 33.3217f, 198.5355f);
				func_125(1604.49f, 3840.42f, 34.18f, 308.19f, 1608.427f, 3837.368f, 32.9989f, 9.9463f);
				func_124(1603.405f, 3836.324f, 33.1144f, 305.055f, 1605.788f, 3840.236f, 33.2826f, 288.7775f);
				break;
			
			case 5:
				func_125(2046.772f, 2130.442f, 91.9486f, 233.1493f, 2036.123f, 2133.981f, 92.615f, 260.0519f);
				func_125(2045.344f, 2126.352f, 91.9358f, 236.3633f, 2044.422f, 2128.961f, 92.088f, 47.8797f);
				func_125(2036.512f, 2137.807f, 92.6507f, 237.2446f, 2041.778f, 2131.354f, 92.4544f, 226.7534f);
				func_125(2041.739f, 2134.324f, 92.4013f, 232.956f, 2039.603f, 2132.563f, 92.6648f, 61.0834f);
				func_125(2039.775f, 2130.025f, 92.5324f, 241.6337f, 2038.744f, 2134.523f, 92.6235f, 128.98f);
				func_124(2030.898f, 2134.197f, 92.5014f, 249.4471f, 2036.58f, 2135.382f, 92.605f, 233.2111f);
				break;
			
			case 2:
				func_125(2992.58f, 2786.28f, 43.21f, 26.81f, 2998.772f, 2777.392f, 42.1008f, 29.7228f);
				func_125(2995.76f, 2787.72f, 43.26f, 33.42f, 2993.12f, 2779.783f, 42.3128f, 286.9825f);
				func_125(2994.91f, 2779.79f, 42.73f, 11.43f, 2999.253f, 2783.97f, 42.5421f, 108.7426f);
				func_125(2999.44f, 2781.11f, 43.11f, 23.89f, 2997.582f, 2787.476f, 42.6953f, 157.4885f);
				func_125(3000.06f, 2775.26f, 42.47f, 17.16f, 2994.719f, 2784.905f, 42.6444f, 213.8879f);
				func_124(2995.525f, 2775.522f, 41.98f, 4.3249f, 2993.511f, 2776.948f, 42.0941f, 305.3785f);
				break;
		}
		switch (iLocal_124)
		{
			case 0:
				sVar1 = "CanyonCliffs_Start";
				break;
			
			case 1:
				sVar1 = "RidgeRun_Start";
				break;
			
			case 3:
				sVar1 = "ValleyTrail_Start";
				break;
			
			case 4:
				sVar1 = "LakesideSplash_Start";
				break;
			
			case 5:
				sVar1 = "EcoFriendly_Start";
				break;
			
			case 2:
				sVar1 = "MinewardSpiral_Start";
				break;
		}
		if (!unk_0x7BCC91F3C1CF24E8(sVar1))
		{
			if (unk_0xC21859D80F5EE520(sVar1))
			{
				if (!unk_0xDA606CB5AFEE806C(sVar1))
				{
					unk_0x5291BAF5B96E07D9(sVar1, 1);
				}
			}
		}
	}
	func_118();
}

void func_118()
{
	var uVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	
	if (fLocal_110 > 9f)
	{
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < Local_329)
		{
			if (!func_123(Local_329[iVar5 /*14*/].f_2))
			{
				Local_329[iVar5 /*14*/].f_1 = unk_0xCE4780E24AFDFBF9(func_122(0), Local_329[iVar5 /*14*/].f_2, Local_329[iVar5 /*14*/].f_5, 1, 1, 0);
				unk_0xB11D151E210D4FAC(Local_329[iVar5 /*14*/].f_1, 1084227584);
				unk_0x494ACC4552B7881B(Local_329[iVar5 /*14*/].f_1, 1);
				if (func_123(Local_329[iVar5 /*14*/].f_6))
				{
					Local_329[iVar5 /*14*/] = unk_0x6A7A2C83BD302BA4(Local_329[iVar5 /*14*/].f_1, 4, func_121(), -1, 1, 1);
					unk_0xC160551F55D6365A(Local_329[iVar5 /*14*/].f_1, 1, 0, 0);
				}
				else
				{
					Local_329[iVar5 /*14*/] = unk_0xB3116B49FE00E2F1(4, func_121(), Local_329[iVar5 /*14*/].f_6, Local_329[iVar5 /*14*/].f_9, 1, 1);
					iVar1 = iVar5;
					switch (iVar1)
					{
						case 0:
						case 3:
							sVar4 = "idle_a";
							break;
						
						case 1:
						case 4:
							sVar4 = "idle_b";
							break;
						
						default:
							sVar4 = "idle_c";
							break;
					}
					iVar2 = iVar5;
					switch (iVar2)
					{
						case 0:
						case 4:
							sVar3 = "amb@world_human_hang_out_street@male_a@idle_a";
							break;
						
						case 1:
						case 3:
							sVar3 = "amb@world_human_hang_out_street@male_b@idle_a";
							break;
						
						case 2:
						case 5:
							sVar3 = "amb@world_human_hang_out_street@male_c@idle_a";
							break;
					}
					Local_329[iVar5 /*14*/].f_12 = sVar3;
					Local_329[iVar5 /*14*/].f_13 = sVar4;
					unk_0x9DC06E2A59C5AEBB(&uVar0);
					unk_0xC67F9BF03C2472AB(0, unk_0x344C570D6F8700DF(100, 500));
					unk_0x756D74A3EF0AB788(0, sVar3, sVar4, 8f, -8f, -1, 8193, unk_0x658086F2B3C5E4E4(0, 1065353216), 0, 0, 0);
					unk_0x19F29730874AD6F1(uVar0);
					unk_0x9B6EC2CECE1010EF(Local_329[iVar5 /*14*/], uVar0);
					unk_0x4F83FEE4454169D4(&uVar0);
				}
				unk_0x6A4846EF125EA7E6(Local_329[iVar5 /*14*/], 1);
				unk_0xB28186F95B71B19D(Local_329[iVar5 /*14*/], 1, 4096, -1);
			}
			iVar5++;
		}
		Local_329.f_83.f_1 = unk_0xCE4780E24AFDFBF9(func_122(1), Local_329.f_83.f_2, Local_329.f_83.f_5, 1, 1, 0);
		unk_0xB11D151E210D4FAC(Local_329.f_83.f_1, 1084227584);
		unk_0x494ACC4552B7881B(Local_329.f_83.f_1, 1);
		if (func_123(Local_329.f_83.f_6))
		{
			Local_329.f_83 = unk_0x6A7A2C83BD302BA4(Local_329.f_83.f_1, 4, func_121(), -1, 1, 1);
			unk_0xC160551F55D6365A(Local_329.f_83.f_1, 1, 0, 0);
		}
		else
		{
			Local_329.f_83 = unk_0xB3116B49FE00E2F1(4, func_121(), Local_329.f_83.f_6, Local_329.f_83.f_9, 1, 1);
			iVar1 = (unk_0x344C570D6F8700DF(0, 65535) % 3);
			switch (iVar1)
			{
				case 0:
					sVar4 = "idle_a";
					break;
				
				case 1:
					sVar4 = "idle_b";
					break;
				
				default:
					sVar4 = "idle_c";
					break;
			}
			Local_329.f_83.f_12 = "amb@world_human_aa_smoke@male@idle_a";
			Local_329.f_83.f_13 = sVar4;
			unk_0x9DC06E2A59C5AEBB(&uVar0);
			unk_0xC1C7DE768F7675E5(0, func_120((unk_0x344C570D6F8700DF(0, 65535) % 1000), 1, 1000));
			unk_0x756D74A3EF0AB788(0, "amb@world_human_aa_smoke@male@idle_a", sVar4, 8f, -8f, -1, 1, unk_0x658086F2B3C5E4E4(0, 1065353216), 0, 0, 0);
			unk_0x19F29730874AD6F1(uVar0);
			unk_0x9B6EC2CECE1010EF(Local_329.f_83, uVar0);
			unk_0x4F83FEE4454169D4(&uVar0);
		}
	}
	else if (fLocal_110 < 225f)
	{
	}
	iLocal_157 = Local_329.f_83;
	if (!unk_0xA59F96B50B97E63C(Local_329[0 /*14*/], 0))
	{
		func_119(&uLocal_163, 1, Local_329[0 /*14*/], "MALE1", 0, 1);
	}
	if (!unk_0xA59F96B50B97E63C(Local_329[1 /*14*/], 0))
	{
		func_119(&uLocal_163, 2, Local_329[1 /*14*/], "MALE2", 0, 1);
	}
	if (!unk_0xA59F96B50B97E63C(Local_329[2 /*14*/], 0))
	{
		func_119(&uLocal_163, 3, Local_329[3 /*14*/], "MALE3", 0, 1);
	}
	if (!func_26(&uLocal_147))
	{
		func_35(&uLocal_147);
	}
	else
	{
		func_33(&uLocal_147);
	}
}

void func_119(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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
				unk_0x83BBFE5E96C64FBA(iParam2, 0);
			}
			else
			{
				unk_0x83BBFE5E96C64FBA(iParam2, 1);
			}
		}
		if (!unk_0x5AEB5DDFFAD43CA5(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xE61672E3FEF081AC(iParam2, 0);
			}
			else
			{
				unk_0xE61672E3FEF081AC(iParam2, 1);
			}
		}
	}
}

int func_120(int iParam0, int iParam1, int iParam2)
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

int func_121()
{
	return joaat("a_m_y_motox_01");
}

int func_122(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Local_329.f_71)
	{
		if (unk_0x653AAFF7E08B7D39(Local_329.f_71[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iLocal_124 == 1)
	{
		if (!bParam0)
		{
			iVar0 = (iVar0 - 1);
		}
	}
	iVar0 = unk_0x344C570D6F8700DF(0, iVar0);
	if (Local_329.f_71[iVar0] == 0)
	{
		if (Local_329.f_71[0] == 0)
		{
			switch (iLocal_124)
			{
				case 0:
					return joaat("sanchez");
					break;
				
				case 1:
					return joaat("mesa");
					break;
				
				case 3:
					return joaat("sanchez");
					break;
				
				case 4:
					return joaat("sanchez");
					break;
				
				case 5:
					return joaat("mesa");
					break;
				
				case 2:
					return joaat("sanchez");
					break;
			}
		}
		else
		{
			return Local_329.f_71[0];
		}
	}
	return Local_329.f_71[iVar0];
}

int func_123(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_124(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	if (func_123(Local_329.f_83.f_2))
	{
		Local_329.f_83.f_2 = { Param0 };
		Local_329.f_83.f_5 = fParam3;
		Local_329.f_83.f_6 = { Param4 };
		Local_329.f_83.f_9 = fParam7;
	}
}

void func_125(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Local_329)
	{
		if (!bVar1 && func_123(Local_329[iVar0 /*14*/].f_2))
		{
			Local_329[iVar0 /*14*/].f_2 = { Param0 };
			Local_329[iVar0 /*14*/].f_5 = fParam3;
			Local_329[iVar0 /*14*/].f_6 = { Param4 };
			Local_329[iVar0 /*14*/].f_9 = fParam7;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
	}
}

void func_126()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_329)
	{
		Local_329[iVar0 /*14*/].f_2 = { 0f, 0f, 0f };
		Local_329[iVar0 /*14*/].f_5 = 0f;
		iVar0++;
	}
	Local_329.f_83.f_2 = { 0f, 0f, 0f };
	Local_329.f_83.f_5 = 0f;
}

void func_127()
{
	switch (iLocal_124)
	{
		case 0:
			unk_0x01A2F6B26EAAEAC5(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, 1, 0, 1);
			unk_0xF27E737981AFB47D(-227.43f, 3888.9f, 36.41f, 50f, 1, 0, 0, 0, 0, 0);
			unk_0x1572226BDDE6B540("WORLD_HUMAN_HIKER", 0);
			break;
		
		case 1:
			unk_0x01A2F6B26EAAEAC5(-509.1254f, 1987.582f, 205.3305f, -948.5215f, 2752.741f, 25.35144f, 300f, 0, 0, 1);
			break;
		
		case 3:
			unk_0x1572226BDDE6B540("WORLD_VEHICLE_DRIVE_SOLO", 0);
			unk_0x01A2F6B26EAAEAC5(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 1, 0, 1);
			unk_0xEDEA748B8197B28A(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 0, 0, 0, 0, 0, 0);
			unk_0x01A2F6B26EAAEAC5(-196.58f, 4217.64f, 50.083f, -202.574f, 4210.926f, 40.0262f, 10f, 1, 0, 1);
			unk_0x1572226BDDE6B540("WORLD_HUMAN_HIKER", 0);
			unk_0x1572226BDDE6B540("WORLD_VEHICLE_EMPTY", 0);
			unk_0x1572226BDDE6B540("WORLD_MOUNTAIN_LION_WANDER", 0);
			break;
		
		case 4:
			unk_0x1572226BDDE6B540("WORLD_VEHICLE_DRIVE_SOLO", 0);
			unk_0x1572226BDDE6B540("WORLD_VEHICLE_EMPTY", 1);
			unk_0x1572226BDDE6B540("WORLD_VEHICLE_BIKE_OFF_ROAD_RACE", 1);
			break;
		
		case 5:
			unk_0x1572226BDDE6B540("WORLD_VEHICLE_BICYCLE_MOUNTAIN", 0);
			unk_0x01A2F6B26EAAEAC5(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 100f, 1, 0, 1);
			unk_0xEDEA748B8197B28A(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, 0, 0, 0, 0, 0, 0);
			break;
		
		case 2:
			unk_0x5291BAF5B96E07D9("QUARRY", 0);
			unk_0x01A2F6B26EAAEAC5(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 1, 0, 1);
			unk_0xEDEA748B8197B28A(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 0, 0, 0, 0, 0, 0);
			break;
	}
}

var func_128()
{
	return ((((((((func_129(&(Local_329.f_71)) && func_129(&(Local_329.f_77))) && func_129(&(Local_329.f_99))) && unk_0xC614DDE265D18415("amb@world_human_hang_out_street@male_a@idle_a")) && unk_0xC614DDE265D18415("amb@world_human_hang_out_street@male_b@idle_a")) && unk_0xC614DDE265D18415("amb@world_human_hang_out_street@male_c@idle_a")) && unk_0xC614DDE265D18415("amb@world_human_aa_smoke@male@idle_a")) && unk_0xC614DDE265D18415("random@street_race")) && unk_0xC614DDE265D18415("gestures@m@standing@casual"));
}

int func_129(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!unk_0x7D167B9A0CCDA347((*uParam0)[iVar0]))
			{
				if (!unk_0x7D167B9A0CCDA347((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_130()
{
	char cVar0[64];
	
	func_132(&(Local_329.f_77), joaat("a_m_y_motox_01"));
	func_132(&(Local_329.f_99), joaat("a_m_y_motox_01"));
	switch (iLocal_124)
	{
		case 0:
			func_132(&(Local_329.f_71), joaat("sanchez"));
			func_132(&(Local_329.f_71), joaat("blazer"));
			break;
		
		case 1:
			func_132(&(Local_329.f_71), joaat("mesa"));
			func_132(&(Local_329.f_71), joaat("bjxl"));
			func_132(&(Local_329.f_71), joaat("patriot"));
			func_132(&(Local_329.f_71), joaat("dubsta2"));
			func_132(&(Local_329.f_71), joaat("bfinjection"));
			break;
		
		case 3:
			func_132(&(Local_329.f_71), joaat("sanchez"));
			func_132(&(Local_329.f_71), joaat("blazer"));
			break;
		
		case 4:
			func_132(&(Local_329.f_71), joaat("sanchez"));
			func_132(&(Local_329.f_71), joaat("blazer"));
			break;
		
		case 5:
			func_132(&(Local_329.f_71), joaat("mesa"));
			func_132(&(Local_329.f_71), joaat("bfinjection"));
			func_132(&(Local_329.f_71), joaat("bjxl"));
			func_132(&(Local_329.f_71), joaat("sadler"));
			func_132(&(Local_329.f_71), joaat("rebel"));
			break;
		
		case 2:
			func_132(&(Local_329.f_71), joaat("sanchez"));
			func_132(&(Local_329.f_71), joaat("blazer"));
			break;
	}
	unk_0x131ED02492676000("amb@world_human_hang_out_street@male_a@idle_a");
	unk_0x131ED02492676000("amb@world_human_hang_out_street@male_b@idle_a");
	unk_0x131ED02492676000("amb@world_human_hang_out_street@male_c@idle_a");
	unk_0x131ED02492676000("amb@world_human_aa_smoke@male@idle_a");
	unk_0x131ED02492676000("random@street_race");
	unk_0x131ED02492676000("gestures@m@standing@casual");
	if (iLocal_124 == 0)
	{
		unk_0x78FCB2E22C41B9D5(joaat("prop_fncwood_14c"));
		unk_0x78FCB2E22C41B9D5(joaat("prop_fncwood_14e"));
	}
	StringCopy(&cVar0, "offroadrace", 64);
	switch (iLocal_124)
	{
		case 0:
			StringIntConCat(&cVar0, 1, 64);
			break;
		
		case 1:
			StringIntConCat(&cVar0, 2, 64);
			break;
		
		case 2:
			StringIntConCat(&cVar0, 6, 64);
			break;
		
		case 3:
			StringIntConCat(&cVar0, 3, 64);
			break;
		
		case 4:
			StringIntConCat(&cVar0, 4, 64);
			break;
		
		case 5:
			StringIntConCat(&cVar0, 5, 64);
			break;
	}
	StringConCat(&cVar0, "car", 64);
	unk_0x766028370E52319B(1, &cVar0);
	func_131(&(Local_329.f_77));
	func_131(&(Local_329.f_71));
	func_131(&(Local_329.f_99));
}

void func_131(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x78FCB2E22C41B9D5((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_132(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
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
	iVar1 = func_133(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_133(var uParam0)
{
	int iVar0;
	
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

void func_134(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_135(int iParam0)
{
	iLocal_95 = iParam0;
}

void func_136(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = unk_0xCE990E643CD9D0E5(Global_31346[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xCE990E643CD9D0E5(Global_31346[iVar0 /*23*/].f_11, 0))
	{
		unk_0xBE20AB8238688965(&(Global_31346[iVar0 /*23*/].f_11), 18);
		if (Global_31343 == 1)
		{
			Global_31344 = 1;
		}
		Global_31343 = 1;
	}
	if (bParam1)
	{
		unk_0xBE20AB8238688965(&(Global_31346[iVar0 /*23*/].f_11), 0);
		unk_0xBE20AB8238688965(&(Global_31346[iVar0 /*23*/].f_11), 15);
		unk_0xBE20AB8238688965(&(Global_31346[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_31346[iVar0 /*23*/].f_11), 0);
		unk_0xD2459066EA58CE43(&(Global_31346[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0xCE990E643CD9D0E5(Global_31346[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0x8F678487EEBD8CE4(Global_31346[iVar0 /*23*/].f_19))
		{
			unk_0x73CC8164D4BBE5DA(1);
			unk_0x93370FA10F15BE44(&(Global_31346[iVar0 /*23*/].f_19));
			unk_0x73CC8164D4BBE5DA(0);
		}
	}
}

int func_137()
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

int func_138()
{
	if (Global_95877 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_89743[Global_95877 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_139(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0xCE990E643CD9D0E5(Global_111858.f_9081.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

bool func_140(int iParam0)
{
	return func_141(iParam0, Global_41631);
}

int func_141(int iParam0, int iParam1)
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

bool func_142(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_143()
{
	StringCopy(&Local_53, "Offroad_Races", 64);
	unk_0x2354C1CC1CA65629(1);
	fLocal_117 = (6f + 4f);
	iLocal_99 = 4;
	func_101(&uLocal_94, 4194304);
	iLocal_97 = 37500;
	iLocal_86 = 0;
	iLocal_119 = 0;
	iLocal_120 = 25;
	iLocal_103 = 0;
	iLocal_124 = func_147(Local_90, &Local_121);
	iLocal_105 = func_146(iLocal_124);
	fLocal_102 = (SYSTEM::TO_FLOAT(func_145(iLocal_105)) + 5f);
	if (func_139(0, iLocal_99))
	{
		bLocal_158 = true;
	}
	else
	{
		func_82(iLocal_105);
		bLocal_158 = false;
	}
	if (iLocal_124 > Global_111858.f_19012.f_1)
	{
		if (func_115(func_146(iLocal_124)))
		{
		}
		iLocal_105 = 263;
		func_82(iLocal_105);
	}
	if (!func_115(func_146(iLocal_124)) && unk_0x87F0CB19476706C3())
	{
		if (iLocal_105 != 263)
		{
			if (func_144(iLocal_105, 1))
			{
				iLocal_105 = 263;
			}
		}
		func_82(iLocal_105);
	}
	if (iLocal_124 == 2)
	{
		iLocal_119 = 20;
		iLocal_120 = 3;
	}
	if (iLocal_124 == 1 || iLocal_124 == 5)
	{
		sLocal_101 = "PLAY_OFFROAD_V";
	}
	else
	{
		sLocal_101 = "PLAY_OFFROAD_M";
	}
}

bool func_144(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	if (bParam1)
	{
		return unk_0xCE990E643CD9D0E5(Global_31346[iVar0 /*23*/].f_11, 15);
	}
	return unk_0xCE990E643CD9D0E5(Global_31346[iVar0 /*23*/].f_11, 0);
}

int func_145(int iParam0)
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
			break;
		
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
			break;
	}
	return -1;
}

int func_146(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 70;
		
		case 1:
			return 71;
		
		case 3:
			return 73;
		
		case 4:
			return 74;
		
		case 5:
			return 75;
		
		case 2:
			return 72;
		
		default:
	}
	return 263;
}

int func_147(struct<3> Param0, var uParam3)
{
	int iVar0;
	struct<3> Var1[7];
	float fVar23;
	int iVar24;
	float fVar25;
	
	iVar0 = 0;
	Var1[0 /*3*/] = { func_148(0) };
	Var1[1 /*3*/] = { func_148(1) };
	Var1[3 /*3*/] = { func_148(3) };
	Var1[4 /*3*/] = { func_148(4) };
	Var1[5 /*3*/] = { func_148(5) };
	Var1[2 /*3*/] = { func_148(2) };
	Var1[6 /*3*/] = { func_148(6) };
	fVar23 = SYSTEM::VDIST2(Param0, Var1[0 /*3*/]);
	iVar24 = 0;
	fVar25 = 0f;
	iVar24 = 1;
	while (iVar24 <= (7 - 1))
	{
		fVar25 = SYSTEM::VDIST2(Param0, Var1[iVar24 /*3*/]);
		if (fVar25 < fVar23)
		{
			iVar0 = iVar24;
			fVar23 = fVar25;
		}
		iVar24++;
	}
	*uParam3 = { Var1[iVar0 /*3*/] };
	return iVar0;
}

Vector3 func_148(int iParam0)
{
	if (iParam0 >= 7 || iParam0 <= -1)
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -1939.483f, 4443.953f, 37.3474f;
		
		case 1:
			return -516.9256f, 2008.014f, 204.0998f;
		
		case 3:
			return -223.6755f, 4224.644f, 43.7304f;
		
		case 4:
			return 1606.578f, 3841.188f, 33.2931f;
		
		case 5:
			return 2037.664f, 2137.386f, 92.7095f;
		
		case 2:
			return 2996.776f, 2774.085f, 43.26f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_149(var uParam0, int iParam1)
{
	func_150(uParam0, iParam1);
}

void func_150(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_151(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_105 != 263)
		{
			func_136(iLocal_105, 0, 0);
		}
	}
	func_90(&iLocal_96);
	if (func_142(uLocal_94, 2))
	{
		func_5();
		func_149(&uLocal_94, 2);
		func_20(&iLocal_98);
	}
	iLocal_98 = -1;
	func_152();
	unk_0xD39E529EBE5DB04F();
}

void func_152()
{
	func_149(&uLocal_94, 4);
	func_153();
	if (unk_0x7FD2BDF03806FD9D(uLocal_52))
	{
		unk_0x5BCE598BFBA562FF(uLocal_52, 3);
	}
	if (!unk_0x211E6DB3335430B4(&Local_69))
	{
		if (unk_0x984EC4F65F95F1DF(&Local_69) != 0)
		{
			unk_0x5F82526B41A5EBCE(&Local_69);
		}
	}
}

void func_153()
{
}

