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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54[2] = { 0, 0 };
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61[2] = { 0, 0 };
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	var uLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	var uLocal_77 = 0;
	struct<3> Local_78 = { 0, 0, 0 } ;
	struct<3> Local_81[2];
	struct<3> Local_88 = { 0, 0, 0 } ;
	struct<3> Local_91 = { 0, 0, 0 } ;
	struct<3> Local_94 = { 0, 0, 0 } ;
	float fLocal_97 = 0f;
	float fLocal_98[2] = { 0f, 0f };
	float fLocal_101 = 0f;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	struct<3> Local_107 = { 0, 0, 0 } ;
	int iLocal_110 = 0;
	var uLocal_111[2] = { 0, 0 };
	var uLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	bool bLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	bool bLocal_122 = 0;
	int iLocal_123 = 0;
	bool bLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	var uLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	struct<3> Local_139 = { 0, 0, 0 } ;
	struct<3> Local_142 = { 0, 0, 0 } ;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	bool bLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	struct<6> Local_150 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_156 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_162 = 0;
	var uLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	bool bLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	var uLocal_178 = 16;
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
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
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
	int iVar0;
	
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
	iLocal_18 = 3;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = -1f;
	Local_107 = { 154.92f, 6841.12f, 19.14f };
	iLocal_125 = 200;
	Local_139 = { -1161.199f, 934.5912f, 196.7591f };
	Local_142 = { -1034.6f, 4918.6f, 205.9f };
	StringCopy(&Local_150, "", 24);
	if (unk_0xED06FD5709A59F02(11))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
		{
			if (unk_0x7DA97DBB7F7D2DE5(iLocal_53))
			{
				unk_0x59478CBBF96AF7D1(iLocal_53);
			}
		}
		func_212();
	}
	if (func_170(ScriptParam_0.f_1[0 /*3*/], -1, 0, 0, 0))
	{
		func_167(-1);
	}
	else
	{
		unk_0xD39E529EBE5DB04F();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (unk_0x1116855A2A7A342C() || iLocal_131)
		{
			if (!func_166())
			{
				if (func_165())
				{
					func_212();
				}
			}
			unk_0xAEF7C45DAFB8E9B0("RE_BU", 0);
			switch (iLocal_48)
			{
				case 0:
					if (func_153())
					{
						func_212();
					}
					if (!iLocal_66)
					{
						func_152();
					}
					else
					{
						func_151();
					}
					if (bLocal_52)
					{
						iLocal_162 = 1;
						iLocal_48 = 1;
					}
					break;
				
				case 1:
					if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
					{
						func_150();
						switch (iLocal_49)
						{
							case 0:
								func_140();
								iLocal_49 = 1;
								break;
							
							case 1:
								if ((!func_133(iLocal_54[0], &iLocal_128, &uLocal_127, iLocal_126, iLocal_129, 7f, 0) && !func_133(iLocal_54[1], &iLocal_128, &uLocal_127, iLocal_126, iLocal_129, 7f, 0)) && !func_132())
								{
									switch (iLocal_50)
									{
										case 0:
											func_131();
											if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_78, 50f, 35f, 50f, 0, 1, 0))
											{
												func_130();
											}
											if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_78, 80f, 65f, 50f, 0, 1, 0))
											{
												func_129();
											}
											if (!unk_0xA59F96B50B97E63C(iLocal_58, 0))
											{
												if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 281.9148f, 6816.345f, 4.3197f, 48.3924f, 6885.921f, 43.0037f, 226.5f, 0, 1, 0) || unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_88 - Vector(0f, 0f, 7f), 20f, 15f, 50f, 0, 1, 0))
												{
													func_128();
													if (unk_0x8F678487EEBD8CE4(uLocal_114))
													{
														unk_0x3DBD102E8C35EA16(uLocal_114, 0);
													}
													iLocal_64 = 0;
													while (iLocal_64 <= 1)
													{
														if (unk_0x8F678487EEBD8CE4(uLocal_111[iLocal_64]))
														{
															unk_0x3DBD102E8C35EA16(uLocal_111[iLocal_64], 0);
														}
														iLocal_64++;
													}
													if (!func_166())
													{
														func_119(1);
													}
												}
											}
											break;
									}
								}
								else
								{
									func_128();
									iLocal_49 = 2;
								}
								break;
							
							case 2:
								if ((func_133(iLocal_54[0], &iLocal_128, &uLocal_127, iLocal_126, iLocal_129, 7f, 0) || func_133(iLocal_54[1], &iLocal_128, &uLocal_127, iLocal_126, iLocal_129, 7f, 0)) || iLocal_129)
								{
									iLocal_129 = 1;
									if (!func_166())
									{
										func_119(1);
									}
									if (unk_0x8F678487EEBD8CE4(uLocal_114))
									{
										unk_0x3DBD102E8C35EA16(uLocal_114, 1);
									}
									iLocal_64 = 0;
									while (iLocal_64 <= 1)
									{
										if (unk_0x8F678487EEBD8CE4(uLocal_111[iLocal_64]))
										{
											unk_0x3DBD102E8C35EA16(uLocal_111[iLocal_64], 1);
										}
										iLocal_64++;
									}
									switch (iLocal_128)
									{
										case 0:
											func_118();
											break;
										
										case 1:
											func_118();
											break;
										
										case 2:
											func_118();
											break;
										
										case 3:
											func_118();
											break;
										
										case 4:
											func_118();
											break;
										
										case 5:
											func_118();
											break;
										}
								}
								if (func_132())
								{
									iLocal_75 = 1;
									if (unk_0x8F678487EEBD8CE4(uLocal_114))
									{
										unk_0x3DBD102E8C35EA16(uLocal_114, 1);
									}
									iLocal_64 = 0;
									while (iLocal_64 <= 1)
									{
										if (unk_0x8F678487EEBD8CE4(uLocal_111[iLocal_64]))
										{
											unk_0x3DBD102E8C35EA16(uLocal_111[iLocal_64], 1);
										}
										iLocal_64++;
									}
									if (!func_117())
									{
										switch (iLocal_51)
										{
											case 1:
												func_114();
												break;
											
											case 3:
												func_113();
												break;
											
											case 4:
												func_112();
												break;
											
											case 5:
												func_110();
												SYSTEM::WAIT(0);
												if (!unk_0x5AEB5DDFFAD43CA5(iLocal_54[0]))
												{
													func_108(iLocal_54[0], "GENERIC_WAR_CRY", 24);
												}
												else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_54[1]))
												{
													func_108(iLocal_54[1], "GENERIC_WAR_CRY", 24);
												}
												func_118();
												break;
											
											case 6:
												func_110();
												SYSTEM::WAIT(0);
												if (!unk_0x5AEB5DDFFAD43CA5(iLocal_54[0]))
												{
													func_108(iLocal_54[0], "GENERIC_SHOCKED_HIGH", 24);
												}
												else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_54[1]))
												{
													func_108(iLocal_54[1], "GENERIC_SHOCKED_HIGH", 24);
												}
												func_118();
												break;
										}
									}
									else
									{
										func_110();
										SYSTEM::WAIT(0);
										iVar0 = 0;
										while (iVar0 < iLocal_54)
										{
											if (!unk_0x5AEB5DDFFAD43CA5(iLocal_54[iVar0]))
											{
												unk_0x798BC6477B831DCB(iLocal_54[iVar0], 5, 0, 0);
												unk_0x8B18A80E8EB15510(iLocal_54[iVar0], unk_0x9B0761B4C3EB8BC7(), 1000f, -1, 0, 0);
												unk_0xCBA6B2B569DCAFD8(iLocal_54[iVar0], 1);
												if (unk_0xAE06B9E39EBDE049(iLocal_60))
												{
													if (unk_0xB77B1396EAA80D8F(iLocal_60))
													{
														unk_0x1F8106DB8796859F(iLocal_60, 1, 1);
													}
												}
												if (unk_0x8F678487EEBD8CE4(uLocal_111[iVar0]))
												{
													unk_0x93370FA10F15BE44(&(uLocal_111[iVar0]));
												}
											}
											iVar0++;
										}
										iLocal_49 = 3;
									}
								}
								break;
							
							case 3:
								if (!bLocal_130)
								{
									func_107();
								}
								if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
								{
									func_92();
								}
								break;
							
							case 4:
								func_91();
								if (!unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_107, 100f, 100f, 100f, 1, 1, 0))
								{
									unk_0x34FEEAC2548C3789(1f);
									if (unk_0xAE06B9E39EBDE049(iLocal_54[0]) && unk_0xAE06B9E39EBDE049(iLocal_54[1]))
									{
										unk_0x2481907DEE6B85EA(&(iLocal_54[0]));
										unk_0x2481907DEE6B85EA(&(iLocal_54[1]));
									}
								}
								if (!unk_0xAE06B9E39EBDE049(iLocal_57))
								{
									if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_139, 200f, 200f, 200f, 1, 1, 0))
									{
										unk_0x78FCB2E22C41B9D5(joaat("s_m_m_highsec_01"));
										unk_0x78FCB2E22C41B9D5(joaat("granger"));
										if (unk_0x7D167B9A0CCDA347(joaat("s_m_m_highsec_01")) && unk_0x7D167B9A0CCDA347(joaat("granger")))
										{
											iLocal_59 = unk_0xCE4780E24AFDFBF9(joaat("granger"), -1155.043f, 942.9685f, 197.4921f, 161.1247f, 1, 1, 0);
											unk_0x1CCBC799127EA27B(iLocal_59, 200);
											unk_0xE87B2E81877383B1(iLocal_59, 1.5f);
											iLocal_57 = unk_0x6A7A2C83BD302BA4(iLocal_59, 26, joaat("s_m_m_highsec_01"), -1, 1, 1);
											unk_0x45F588C0DD767737(iLocal_57, 0, 0, 2, 0);
											unk_0x45F588C0DD767737(iLocal_57, 3, 0, 0, 0);
											unk_0x45F588C0DD767737(iLocal_57, 4, 0, 0, 0);
											unk_0x92BD213E6A0E666B(iLocal_57, joaat("weapon_pistol"), -1, 1, 1);
											unk_0xD3D9D7C84656DAE5(iLocal_57, iLocal_177);
										}
									}
								}
								if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
								{
									if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
									{
										if (unk_0x99E61B3887CC8E71(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0)) < 1)
										{
											if (!iLocal_132)
											{
												func_87(0);
												func_110();
												SYSTEM::WAIT(0);
												func_71(&uLocal_178, "REBU2AU", "REBU2_WV", 4, 0, 0, 0);
												iLocal_132 = 1;
											}
										}
									}
									else
									{
										iLocal_132 = 0;
									}
									if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_139, Global_22, 1, 1, 0) && unk_0x910DFF8E55ABB8EC(iLocal_53, unk_0x9B0761B4C3EB8BC7(), 10f, 10f, 10f, 0, 1, 0))
									{
										if (unk_0x7DA97DBB7F7D2DE5(iLocal_53))
										{
											if (unk_0x8F678487EEBD8CE4(uLocal_137))
											{
												unk_0x93370FA10F15BE44(&uLocal_137);
											}
											if (unk_0x8F678487EEBD8CE4(uLocal_138))
											{
												unk_0x93370FA10F15BE44(&uLocal_138);
											}
											if (func_70())
											{
												iLocal_49 = 5;
											}
											else
											{
												iLocal_49 = 6;
											}
										}
									}
									else
									{
										func_65();
										func_64();
										func_63();
										func_59();
										func_58();
										func_52();
										if (func_51(Local_139))
										{
											func_87(0);
											func_110();
											SYSTEM::WAIT(0);
											func_71(&uLocal_178, "REBU2AU", "REBU2_CULT", 4, 0, 0, 0);
										}
										if (func_50())
										{
											func_87(0);
											func_110();
											SYSTEM::WAIT(0);
											func_71(&uLocal_178, "REBU2AU", "REBU2_NEAR", 4, 0, 0, 0);
										}
									}
								}
								break;
							
							case 5:
								func_91();
								if (func_49(1, 0, 1))
								{
									func_48();
								}
								if (bLocal_124)
								{
									iLocal_49 = 8;
								}
								break;
							
							case 6:
								func_91();
								if (func_49(1, 0, 1))
								{
									func_47();
								}
								if (bLocal_124)
								{
									iLocal_49 = 8;
								}
								break;
							
							case 8:
								func_13();
								break;
							
							case 7:
								func_11();
								if (unk_0xAE06B9E39EBDE049(iLocal_60))
								{
									if (unk_0xB77B1396EAA80D8F(iLocal_60))
									{
										if (!unk_0x5AEB5DDFFAD43CA5(iLocal_54[0]))
										{
											if (unk_0x9934470AA0A08B57(iLocal_54[0], "random@burial", "a_burial_stop", 3))
											{
												if (unk_0x4C06B15B376AA145(iLocal_54[0], "random@burial", "a_burial_stop") > 0.355f)
												{
													unk_0x1F8106DB8796859F(iLocal_60, 1, 1);
												}
											}
											else
											{
												unk_0x1F8106DB8796859F(iLocal_60, 1, 1);
											}
										}
									}
								}
								if (unk_0x5AEB5DDFFAD43CA5(iLocal_54[0]) || unk_0x5AEB5DDFFAD43CA5(iLocal_54[1]))
								{
									bLocal_147 = true;
								}
								if (bLocal_147)
								{
									if (unk_0x80FF6C016CDB0FAF(iLocal_58, 0))
									{
										if (!unk_0x5AEB5DDFFAD43CA5(iLocal_54[0]))
										{
											unk_0x1210730BDCD39CB4(iLocal_54[0]);
											if (unk_0xC7C55C82599F980F(iLocal_54[0], iLocal_58, -1, 0, 0) || unk_0xC7C55C82599F980F(iLocal_54[0], iLocal_58, 0, 0, 0))
											{
												if (!iLocal_164)
												{
													unk_0x9B94F6169B0DAEFD(iLocal_54[0]);
													if (unk_0xAE06B9E39EBDE049(iLocal_60))
													{
														if (unk_0xB77B1396EAA80D8F(iLocal_60))
														{
															unk_0x1F8106DB8796859F(iLocal_60, 1, 1);
														}
													}
													unk_0x9DC06E2A59C5AEBB(&uLocal_65);
													unk_0xE2348E4036041923(0);
													unk_0x88AEDBE3A7557929(0, unk_0x7EC595B99EA7C4B1(iLocal_58, -0.5f, 0.5f, 0f), unk_0x9B0761B4C3EB8BC7(), 3f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
													unk_0xC584E49FC3559A86(0, iLocal_58, -1, -1, 3f, 9, 0);
													unk_0xBD204892D76E6303(0, iLocal_58, unk_0x9B0761B4C3EB8BC7(), 8, 30f, 262144, -1f, 10f, 1);
													unk_0x19F29730874AD6F1(uLocal_65);
													unk_0x9B6EC2CECE1010EF(iLocal_54[0], uLocal_65);
													unk_0x4F83FEE4454169D4(&uLocal_65);
													unk_0xCBA6B2B569DCAFD8(iLocal_54[0], 1);
													unk_0x756046956300306A(iLocal_58, 1);
													iLocal_164 = 1;
												}
												else if (unk_0x16BC17A8EDC701A2(iLocal_54[0], 242628503) == 1)
												{
													if (unk_0x18B8D57C51EEB5CC(iLocal_54[0]) == 3)
													{
														if (!unk_0x910DFF8E55ABB8EC(iLocal_54[0], unk_0x9B0761B4C3EB8BC7(), 10f, 10f, 10f, 0, 1, 0) && !unk_0xC2169C00B643278B(iLocal_54[0], Local_88, 10f, 10f, 10f, 0, 1, 0))
														{
															unk_0x2481907DEE6B85EA(&(iLocal_54[0]));
														}
													}
												}
											}
											else
											{
												unk_0x8FF9CE1C0F94F59A(iLocal_54[0], unk_0x9B0761B4C3EB8BC7(), 0, 16);
												unk_0xCBA6B2B569DCAFD8(iLocal_54[0], 1);
											}
										}
										if (!unk_0x5AEB5DDFFAD43CA5(iLocal_54[1]))
										{
											unk_0x1210730BDCD39CB4(iLocal_54[1]);
											if (unk_0xC7C55C82599F980F(iLocal_54[1], iLocal_58, -1, 0, 0) || unk_0xC7C55C82599F980F(iLocal_54[1], iLocal_58, 0, 0, 0))
											{
												if (!iLocal_164)
												{
													unk_0x9B94F6169B0DAEFD(iLocal_54[1]);
													unk_0x9DC06E2A59C5AEBB(&uLocal_65);
													unk_0xE2348E4036041923(0);
													unk_0x88AEDBE3A7557929(0, unk_0x7EC595B99EA7C4B1(iLocal_58, -0.5f, 0.5f, 0f), unk_0x9B0761B4C3EB8BC7(), 3f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
													unk_0xC584E49FC3559A86(0, iLocal_58, -1, -1, 3f, 9, 0);
													unk_0xBD204892D76E6303(0, iLocal_58, unk_0x9B0761B4C3EB8BC7(), 8, 30f, 262144, -1f, 10f, 1);
													unk_0x19F29730874AD6F1(uLocal_65);
													unk_0x9B6EC2CECE1010EF(iLocal_54[1], uLocal_65);
													unk_0x4F83FEE4454169D4(&uLocal_65);
													unk_0xCBA6B2B569DCAFD8(iLocal_54[1], 1);
													unk_0x756046956300306A(iLocal_58, 1);
													iLocal_164 = 1;
												}
												else if (unk_0x16BC17A8EDC701A2(iLocal_54[1], 242628503) == 1)
												{
													if (unk_0x18B8D57C51EEB5CC(iLocal_54[1]) == 3)
													{
														if (!unk_0x910DFF8E55ABB8EC(iLocal_54[1], unk_0x9B0761B4C3EB8BC7(), 10f, 10f, 10f, 0, 1, 0) && !unk_0xC2169C00B643278B(iLocal_54[1], Local_88, 10f, 10f, 10f, 0, 1, 0))
														{
															unk_0x2481907DEE6B85EA(&(iLocal_54[1]));
														}
													}
												}
											}
											else
											{
												unk_0x8FF9CE1C0F94F59A(iLocal_54[1], unk_0x9B0761B4C3EB8BC7(), 0, 16);
												unk_0xCBA6B2B569DCAFD8(iLocal_54[1], 1);
											}
										}
									}
								}
								break;
							
							case 9:
								break;
						}
						if ((func_10() && !func_9()) && iLocal_49 != 9)
						{
							if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
							{
								if (unk_0xC2169C00B643278B(iLocal_53, Local_142, 5f, 5f, 5f, 0, 1, 0))
								{
									func_8(0);
									SYSTEM::WAIT(0);
									func_110();
									iLocal_49 = 9;
								}
							}
						}
						if (func_6())
						{
							if (unk_0xAE06B9E39EBDE049(iLocal_53))
							{
								unk_0x586DDC617E714637(&iLocal_53);
							}
							func_13();
						}
						if (func_5())
						{
							func_4();
						}
						func_2();
						if (iLocal_49 != 3)
						{
							if (func_1())
							{
								unk_0x21723EF7B2FCC4CC("RE6_BOTH_DEAD");
								if (!iLocal_74)
								{
									SYSTEM::SETTIMERA(0);
									iLocal_106 = unk_0x578C4EF320340AF7() + 8500;
									iLocal_74 = 1;
								}
								if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
								{
									if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_53, 20f, 20f, 20f, 0, 1, 1))
									{
										if (func_71(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
										{
											iLocal_49 = 3;
										}
									}
								}
							}
						}
						if (((iLocal_49 == 1 || iLocal_49 == 2) || iLocal_49 == 3) || iLocal_49 == 7)
						{
							if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
							{
								if (!bLocal_130)
								{
									if (unk_0x16BC17A8EDC701A2(iLocal_53, 1785177548) != 1 && unk_0x16BC17A8EDC701A2(iLocal_53, 1785177548) != 0)
									{
										unk_0x2BB0EF9DE445EA13(iLocal_53);
										uLocal_343 = unk_0xF341A134A5B8D4F6(Local_78, -2f, -4f, 18f, 2);
										unk_0xDFDB9C533700BC17(iLocal_53, uLocal_343, "random@burial", "b_burial", 1000f, -4f, 1, 24592, 1148846080, 0);
										unk_0x1FEB07A1AF22700F(uLocal_61[0], uLocal_343, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080);
										unk_0x1FEB07A1AF22700F(uLocal_61[1], uLocal_343, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080);
										unk_0x81493F39713559B1(uLocal_343, 1);
										unk_0xCBA6B2B569DCAFD8(iLocal_53, 1);
									}
									if (unk_0x0922C2E075A5F18C(iLocal_53))
									{
										unk_0x69749B92635E3295(iLocal_53, 1);
										unk_0x81DE096AEF6BD8E7(iLocal_53, 1);
										unk_0x697DA7132EE43ABC(iLocal_53, 0, 0);
									}
								}
								if ((unk_0x8F8BC946B0876552(iLocal_53) || unk_0x06C1E4CCB13F773B(iLocal_53)) || (iLocal_125 - unk_0x4F5F2FB7AE0EB7AB(iLocal_53)) >= 50)
								{
									unk_0x69749B92635E3295(iLocal_53, 1);
									unk_0x81DE096AEF6BD8E7(iLocal_53, 1);
									unk_0x697DA7132EE43ABC(iLocal_53, 0, 0);
								}
								if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) && !unk_0xA59F96B50B97E63C(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), 0))
								{
									if (unk_0xF3A639BEE7AADF55(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0)) < 5f)
									{
									}
									else if (unk_0xA65352E7FEA59881(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), iLocal_53))
									{
										unk_0x69749B92635E3295(iLocal_53, 1);
										unk_0x81DE096AEF6BD8E7(iLocal_53, 1);
										unk_0x697DA7132EE43ABC(iLocal_53, 0, 0);
									}
								}
								if (!unk_0xA59F96B50B97E63C(iLocal_58, 0))
								{
									if (unk_0xA65352E7FEA59881(iLocal_58, iLocal_53))
									{
										unk_0x69749B92635E3295(iLocal_53, 1);
										unk_0x81DE096AEF6BD8E7(iLocal_53, 1);
										unk_0x697DA7132EE43ABC(iLocal_53, 0, 0);
									}
								}
							}
						}
					}
					break;
			}
		}
		else
		{
			func_212();
		}
	}
}

int func_1()
{
	if (!bLocal_130)
	{
		if (!unk_0xAE06B9E39EBDE049(iLocal_54[0]) && !unk_0xAE06B9E39EBDE049(iLocal_54[1]))
		{
			return 1;
		}
		if (unk_0xAE06B9E39EBDE049(iLocal_54[0]) && unk_0xAE06B9E39EBDE049(iLocal_54[1]))
		{
			if (unk_0x5AEB5DDFFAD43CA5(iLocal_54[0]) && unk_0x5AEB5DDFFAD43CA5(iLocal_54[1]))
			{
				return 1;
			}
			if (unk_0xF2352D60B6FBEAAD(iLocal_54[0]) && unk_0xF2352D60B6FBEAAD(iLocal_54[1]))
			{
				return 1;
			}
		}
		if (unk_0xAE06B9E39EBDE049(iLocal_54[0]) && !unk_0xAE06B9E39EBDE049(iLocal_54[1]))
		{
			if (unk_0x5AEB5DDFFAD43CA5(iLocal_54[0]))
			{
				return 1;
			}
		}
		if (unk_0xAE06B9E39EBDE049(iLocal_54[1]) && !unk_0xAE06B9E39EBDE049(iLocal_54[0]))
		{
			if (unk_0x5AEB5DDFFAD43CA5(iLocal_54[1]))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_2()
{
	if (unk_0x5AEB5DDFFAD43CA5(iLocal_54[0]))
	{
		if (unk_0x8F678487EEBD8CE4(uLocal_111[0]))
		{
			if (unk_0xAE06B9E39EBDE049(iLocal_60))
			{
				if (unk_0xB77B1396EAA80D8F(iLocal_60))
				{
					unk_0x1F8106DB8796859F(iLocal_60, 1, 1);
				}
			}
			func_3(&uLocal_178, 4);
			unk_0x93370FA10F15BE44(&(uLocal_111[0]));
		}
	}
	if (unk_0x5AEB5DDFFAD43CA5(iLocal_54[1]))
	{
		if (unk_0x8F678487EEBD8CE4(uLocal_111[1]))
		{
			func_3(&uLocal_178, 3);
			unk_0x93370FA10F15BE44(&(uLocal_111[1]));
		}
	}
	if (unk_0x5AEB5DDFFAD43CA5(iLocal_53))
	{
		if (!unk_0xA59F96B50B97E63C(iLocal_53, 0))
		{
		}
		if (unk_0x8F678487EEBD8CE4(uLocal_114))
		{
			func_3(&uLocal_178, 5);
			unk_0x93370FA10F15BE44(&uLocal_114);
		}
	}
}

void func_3(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_4()
{
	unk_0x21723EF7B2FCC4CC("RE6_END");
	func_212();
}

int func_5()
{
	if (unk_0x5AEB5DDFFAD43CA5(iLocal_53))
	{
		return 1;
	}
	return 0;
}

int func_6()
{
	if (Global_31206)
	{
		func_7(4);
		return 1;
	}
	return 0;
}

void func_7(int iParam0)
{
	Global_111844 = iParam0;
}

void func_8(int iParam0)
{
	Global_22016 = iParam0;
}

int func_9()
{
	if (Global_111858.f_24991.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_10()
{
	return Global_31205;
}

void func_11()
{
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_54[0]) || !unk_0x5AEB5DDFFAD43CA5(iLocal_54[1]))
		{
			if (!func_12())
			{
				switch (iLocal_168)
				{
					case 0:
						if (iLocal_106 < unk_0x578C4EF320340AF7())
						{
							if (func_71(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = (unk_0x578C4EF320340AF7() + unk_0x344C570D6F8700DF(3500, 5000));
								iLocal_168++;
							}
						}
						break;
					
					case 1:
						if (iLocal_106 < unk_0x578C4EF320340AF7())
						{
							if (func_71(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = (unk_0x578C4EF320340AF7() + unk_0x344C570D6F8700DF(3500, 5000));
								iLocal_168++;
							}
						}
						break;
					
					case 2:
						if (iLocal_106 < unk_0x578C4EF320340AF7())
						{
							if (func_71(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = (unk_0x578C4EF320340AF7() + unk_0x344C570D6F8700DF(3500, 5000));
								iLocal_168++;
							}
						}
						break;
					
					case 3:
						if (iLocal_106 < unk_0x578C4EF320340AF7())
						{
							if (func_71(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = (unk_0x578C4EF320340AF7() + unk_0x344C570D6F8700DF(3500, 5000));
								iLocal_168 = 0;
							}
						}
						break;
					}
				}
			}
	}
}

int func_12()
{
	if (Global_21005 != 0 || unk_0x6A5CC4A2C9D9ED8D())
	{
		return 1;
	}
	return 0;
}

void func_13()
{
	while (!func_46())
	{
		SYSTEM::WAIT(0);
	}
	if (!func_6())
	{
		if (func_45() == 0)
		{
			func_42(-1199050901, 6, 1, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (func_45() == 1)
		{
			func_42(1082655975, 6, 2, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (func_45() == 2)
		{
			func_42(-2100435596, 6, 4, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
	}
	unk_0x6A2A6ED2C03886BA(unk_0x460153A63B9477BC(), 1, 0);
	func_17(-1, 0);
	func_14();
	func_212();
}

void func_14()
{
	func_15();
}

int func_15()
{
	if (func_16(0))
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

bool func_16(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

void func_17(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_39(iParam0))
	{
		func_38(iParam0, iParam1);
		if (!func_37(51))
		{
			func_27("RE_REWARD", 1, 0, 4000, 10000, func_30(), 0, 138, 0);
			func_26(51);
		}
		if (func_25(iParam0))
		{
			Global_111858.f_24991.f_2 = 3;
		}
		if (func_24(iParam0, iParam1) != 322)
		{
			func_18(func_24(iParam0, iParam1), Local_44.x, Local_44.f_1);
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

void func_18(int iParam0, var uParam1, var uParam2)
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
		func_22((891 + iParam0), 1, -1, 1);
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
		func_19();
	}
}

void func_19()
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
		func_21(13, SYSTEM::FLOOR(Global_111858.f_10190.f_3853));
	}
	if (!unk_0xC4A02490EB1F450B())
	{
		if (!Global_76833)
		{
			if (func_20() == 2 == 0 && !unk_0x25DDB354A40FFCDB())
			{
				if (unk_0x70E5C9630A26FB40())
				{
					Global_111592 = 0;
				}
				if (!Global_61717)
				{
					func_15();
				}
			}
		}
	}
}

int func_20()
{
	return Global_30968;
}

int func_21(int iParam0, int iParam1)
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

int func_22(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_23();
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

int func_23()
{
	return Global_1312763;
}

int func_24(int iParam0, int iParam1)
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

int func_25(int iParam0)
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

void func_26(int iParam0)
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

void func_27(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_28(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_28(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_29();
	}
}

void func_29()
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

int func_30()
{
	func_31();
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

void func_31()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_35(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_34(unk_0x9B0761B4C3EB8BC7());
			if (func_33(iVar0) && (!func_32(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_33(Global_111858.f_2359.f_539.f_4321))
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

bool func_32(int iParam0)
{
	return Global_41631 == iParam0;
}

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(uParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return func_36(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_36(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

int func_37(int iParam0)
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

void func_38(int iParam0, int iParam1)
{
	unk_0xBE20AB8238688965(&(Global_111858.f_24991.f_8[iParam0]), iParam1);
}

int func_39(int iParam0)
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

int func_40()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x6C5C6B207AA78253(), 64);
	uVar16 = func_41(Var0);
	return uVar16;
}

int func_41(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_42(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	int iVar15;
	
	if (func_16(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (unk_0xCE990E643CD9D0E5(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam4 < 3)
	{
		if (iParam4 != iParam3)
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_111858.f_7684.f_136 < 9)
	{
		Var0 = iParam0;
		if (Global_111858.f_7684.f_911 == Var0)
		{
			Global_111858.f_7684.f_911 = -1;
		}
		Var0.f_3 = func_44(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (unk_0x578C4EF320340AF7() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		unk_0xD2459066EA58CE43(&(Var0.f_1), 1);
		unk_0xD2459066EA58CE43(&(Var0.f_1), 0);
		if (iParam7 != -1)
		{
			unk_0xBE20AB8238688965(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			unk_0xBE20AB8238688965(&(Var0.f_1), 10);
		}
		Global_111858.f_7684[Global_111858.f_7684.f_136 /*15*/] = { Var0 };
		Global_111858.f_7684.f_136++;
		iVar15 = 0;
		while (iVar15 < 3)
		{
			if (unk_0xCE990E643CD9D0E5(iParam2, iVar15))
			{
				func_43(iVar15);
			}
			iVar15++;
		}
		return 1;
	}
	return 0;
}

void func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_33(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111858.f_7684.f_136)
	{
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_7684[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_111858.f_7684[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_111858.f_7684[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_111858.f_7684.f_764)
	{
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_7684.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_111858.f_7684.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_111858.f_7684.f_919[iParam0] = iVar1;
}

int func_44(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_45()
{
	func_31();
	return Global_111858.f_2359.f_539.f_4321;
}

int func_46()
{
	return 1;
}

void func_47()
{
	switch (iLocal_136)
	{
		case 0:
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53) && unk_0x80FF6C016CDB0FAF(iLocal_59, 0))
			{
				if (unk_0x7DA97DBB7F7D2DE5(iLocal_53))
				{
					unk_0x59478CBBF96AF7D1(iLocal_53);
				}
				unk_0x4E65320BC9AD521C(iLocal_53, 0);
				unk_0x0DC39BE87E4C5599(iLocal_53, 1);
				unk_0x9DC06E2A59C5AEBB(&uLocal_65);
				unk_0xA785552633ED203B(0, unk_0x9B0761B4C3EB8BC7(), 5000, 2048, 2);
				unk_0xD08E9EAF091A1AAB(0, unk_0x9B0761B4C3EB8BC7(), 0);
				unk_0xC584E49FC3559A86(0, iLocal_59, -1, 0, 1f, 1, 0);
				unk_0x19F29730874AD6F1(uLocal_65);
				unk_0x9B6EC2CECE1010EF(iLocal_53, uLocal_65);
				unk_0x4F83FEE4454169D4(&uLocal_65);
				unk_0xCBA6B2B569DCAFD8(iLocal_53, 1);
				func_110();
				SYSTEM::WAIT(0);
				func_71(&uLocal_178, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
			}
			iLocal_136++;
			break;
		
		case 1:
			if (unk_0x80FF6C016CDB0FAF(iLocal_59, 0))
			{
				if (unk_0xE0B3BC41DDA88DF0(iLocal_53, iLocal_59, 0))
				{
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_57))
					{
						unk_0xD8C1C38EE8BC2AC6(iLocal_57, iLocal_58, 10f, 786599);
						unk_0xCBA6B2B569DCAFD8(iLocal_57, 1);
					}
					unk_0x756046956300306A(iLocal_59, 1);
					iLocal_136++;
				}
			}
			break;
		
		case 2:
			iLocal_136++;
			break;
		
		case 3:
			iLocal_136++;
			break;
		
		case 4:
			if (!func_12())
			{
				iLocal_136++;
			}
			break;
		
		case 5:
			SYSTEM::SETTIMERA(0);
			func_13();
			break;
	}
}

void func_48()
{
	switch (iLocal_136)
	{
		case 0:
			unk_0xEFBCE8F8316F89EA(255, iLocal_177, 1862763509);
			unk_0xEFBCE8F8316F89EA(255, 1862763509, iLocal_177);
			if (!unk_0xA59F96B50B97E63C(unk_0xA5D3CD332CD10EE9(), 0))
			{
				unk_0xD4C86DEC93F19FB0(unk_0xA5D3CD332CD10EE9(), 5f, 2, 0);
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53) && unk_0x80FF6C016CDB0FAF(iLocal_59, 0))
				{
					if (unk_0x7DA97DBB7F7D2DE5(iLocal_53))
					{
						unk_0x59478CBBF96AF7D1(iLocal_53);
					}
					unk_0x4E65320BC9AD521C(iLocal_53, 0);
					unk_0x0DC39BE87E4C5599(iLocal_53, 1);
					unk_0x9DC06E2A59C5AEBB(&uLocal_65);
					unk_0xA785552633ED203B(0, unk_0x9B0761B4C3EB8BC7(), 5000, 2048, 2);
					unk_0xC584E49FC3559A86(0, iLocal_59, -1, 0, 1f, 1, 0);
					unk_0x19F29730874AD6F1(uLocal_65);
					unk_0x9B6EC2CECE1010EF(iLocal_53, uLocal_65);
					unk_0x4F83FEE4454169D4(&uLocal_65);
					unk_0xCBA6B2B569DCAFD8(iLocal_53, 1);
					func_110();
					SYSTEM::WAIT(0);
					func_71(&uLocal_178, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
				}
			}
			SYSTEM::WAIT(2700);
			unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), 1, 0);
			iLocal_136++;
			break;
		
		case 1:
			if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) && !unk_0xE4B70EFD14220305(unk_0x9B0761B4C3EB8BC7()))
			{
				if (!unk_0xA59F96B50B97E63C(unk_0xA5D3CD332CD10EE9(), 0))
				{
					if (!unk_0x63D2DBD5A2F21BB5(unk_0xA5D3CD332CD10EE9(), 1))
					{
						if (unk_0x24B1E142845E309A(unk_0xA5D3CD332CD10EE9(), 1) > 0.1f)
						{
							if (func_45() == 0)
							{
								func_71(&uLocal_178, "REBU2AU", "REBU2_DOOR0", 4, 0, 0, 0);
							}
							if (func_45() == 1)
							{
								func_71(&uLocal_178, "REBU2AU", "REBU2_DOOR1", 4, 0, 0, 0);
							}
							if (func_45() == 2)
							{
								func_71(&uLocal_178, "REBU2AU", "REBU2_DOOR2", 4, 0, 0, 0);
							}
						}
					}
				}
			}
			iLocal_136++;
			break;
		
		case 2:
			if (unk_0x80FF6C016CDB0FAF(iLocal_59, 0))
			{
				if (unk_0xE0B3BC41DDA88DF0(iLocal_53, iLocal_59, 0))
				{
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_57))
					{
						unk_0xD8C1C38EE8BC2AC6(iLocal_57, iLocal_59, 10f, 786599);
						unk_0xCBA6B2B569DCAFD8(iLocal_57, 1);
					}
					unk_0x756046956300306A(iLocal_59, 1);
					iLocal_136++;
				}
			}
			break;
		
		case 3:
			if (!func_12())
			{
				bLocal_124 = true;
			}
			break;
	}
}

int func_49(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xA5754C6C4B644ACF())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (!unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
		{
			return 0;
		}
		iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
		if (bParam0)
		{
			if (unk_0xA59F96B50B97E63C(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xA59F96B50B97E63C(iVar0, 0))
			{
				if (unk_0x10D3F7E169A49C44(iVar0, -1, 0) != unk_0x9B0761B4C3EB8BC7())
				{
					return 0;
				}
			}
		}
		if (!unk_0xA59F96B50B97E63C(iVar0, 0))
		{
			if (unk_0x59046338C72D0346(iVar0) < 0.95f || unk_0x59046338C72D0346(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x117A56F7403FC6D2(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (!unk_0x0D1884E427D0E0AF(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	return 1;
}

int func_50()
{
	if (func_45() == 2)
	{
		if (func_10())
		{
			if (unk_0x272784C60C397DB6(-1014.154f, 4881.411f, 245.0001f, unk_0x3E4D3CCC220BDFB1(unk_0x1FA7B77001D60F9D(unk_0x2639A2323BEA8CC6()), 0), 1) < 400f)
			{
				if (!Global_31210)
				{
					unk_0x21723EF7B2FCC4CC("AC_EN_ROUTE_CULT");
					Global_31210 = 1;
					if (!Global_31209)
					{
						Global_31209 = 1;
						return 1;
					}
				}
			}
			else if (Global_31210)
			{
				unk_0x21723EF7B2FCC4CC("AC_LEFT_AREA");
				Global_31210 = 0;
			}
		}
	}
	return 0;
}

int func_51(struct<3> Param0)
{
	if (func_45() == 2)
	{
		if (func_10() && !Global_31208)
		{
			if (fLocal_47 == -1f)
			{
				fLocal_47 = SYSTEM::VDIST(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), Param0);
			}
			if (SYSTEM::VDIST(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), Param0) > (fLocal_47 + 200f) || unk_0x272784C60C397DB6(-1014.154f, 4881.411f, 245.0001f, unk_0x3E4D3CCC220BDFB1(unk_0x1FA7B77001D60F9D(unk_0x2639A2323BEA8CC6()), 0), 1) < 400f)
			{
				Global_31208 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_52()
{
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
	{
		if ((((((func_56("REBU2_LV2_2") || func_56("REBU2_LV2_3")) || func_56("REBU2_LV2_4")) || func_56("REBU2_LV2_5")) || func_56("REBU2_LV2_6")) || func_56("REBU2_LV2_7")) || func_56("REBU2_LV2_8"))
		{
			unk_0x48E48D5929D45C6F(iLocal_53, 1, 1);
			unk_0xE2348E4036041923(iLocal_53);
		}
		if (func_56("REBU2_LV2_9") || iLocal_72 > 1)
		{
			unk_0x48E48D5929D45C6F(iLocal_53, 0, 1);
		}
	}
	if (func_70() && !func_12())
	{
		if (!func_53())
		{
			func_87(1);
		}
		switch (iLocal_72)
		{
			case 0:
				func_71(&uLocal_178, "REBU2AU", "REBU2_LV2", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 1:
				iLocal_73 = unk_0x578C4EF320340AF7() + 1500;
				iLocal_72++;
				break;
			
			case 2:
				if (iLocal_73 < unk_0x578C4EF320340AF7())
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT0", 4, 0, 0, 0);
					iLocal_72++;
				}
				break;
			
			case 3:
				if (func_45() == 0)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT0M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT0F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT0T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 4:
				iLocal_73 = unk_0x578C4EF320340AF7() + 500;
				iLocal_72++;
				break;
			
			case 5:
				if (iLocal_73 < unk_0x578C4EF320340AF7())
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT1", 4, 0, 0, 0);
					iLocal_72++;
				}
				break;
			
			case 6:
				if (func_45() == 0)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT1M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT1F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT1T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 7:
				func_71(&uLocal_178, "REBU2AU", "REBU2_BANT2", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 8:
				if (func_45() == 0)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT2M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT2F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT2T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 9:
				func_71(&uLocal_178, "REBU2AU", "REBU2_BANT3", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 10:
				if (func_45() == 0)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT3M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT3F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT3T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 11:
				func_71(&uLocal_178, "REBU2AU", "REBU2_BANT4", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 12:
				if (func_45() == 0)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT4M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT4F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT4T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 13:
				func_71(&uLocal_178, "REBU2AU", "REBU2_BANT5", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 14:
				if (func_45() == 0)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT5M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT5F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT5T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 15:
				func_71(&uLocal_178, "REBU2AU", "REBU2_BANT6", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 16:
				if (func_45() == 0)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT6M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT6F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT6T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 17:
				iLocal_73 = unk_0x578C4EF320340AF7() + 1000;
				iLocal_72++;
				break;
			
			case 18:
				if (iLocal_73 < unk_0x578C4EF320340AF7())
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT7", 4, 0, 0, 0);
					iLocal_72++;
				}
				break;
			
			case 19:
				iLocal_73 = unk_0x578C4EF320340AF7() + 2500;
				iLocal_72++;
				break;
			
			case 20:
				if (iLocal_73 < unk_0x578C4EF320340AF7())
				{
					if (func_45() == 0)
					{
						func_71(&uLocal_178, "REBU2AU", "REBU2_BANT7M", 4, 0, 0, 0);
					}
					else if (func_45() == 1)
					{
						func_71(&uLocal_178, "REBU2AU", "REBU2_BANT7F", 4, 0, 0, 0);
					}
					else if (func_45() == 2)
					{
						func_71(&uLocal_178, "REBU2AU", "REBU2_BANT7T", 4, 0, 0, 0);
					}
					iLocal_72++;
				}
				break;
			}
	}
}

int func_53()
{
	if (((((((((func_54("REBU2_WV") || func_54("REBU2_UNS1")) || func_54("REBU2_UNS2")) || func_54("REBU2_CULT")) || func_54("REBU2_NEAR")) || func_54("REBU2_WRONG")) || func_54("REBU2_STOP")) || func_54("REBU2_GETOUT")) || func_54("REBU2_JACK")) || func_54("REBU2_SHOOT"))
	{
		return 1;
	}
	return 0;
}

int func_54(char* sParam0)
{
	var uVar0;
	
	if (func_12())
	{
		MemCopy(&uVar0, {func_55()}, 4);
		if (unk_0xF005CCA4263DF67F(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_55()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21005 == 4)
	{
		return Global_20624;
	}
	return Var0;
}

int func_56(char* sParam0)
{
	var uVar0;
	
	if (func_12())
	{
		MemCopy(&uVar0, {func_57()}, 4);
		if (unk_0xF005CCA4263DF67F(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_57()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21005 == 4)
	{
		iVar6 = unk_0x68CB238A579603D3();
		iVar6 = (iVar6 + Global_22015);
		if (iVar6 > -1)
		{
			return Global_19873[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_58()
{
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
	{
		if (!iLocal_133)
		{
			if (!unk_0xA59F96B50B97E63C(unk_0xA5D3CD332CD10EE9(), 0))
			{
				if (!unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), unk_0xA5D3CD332CD10EE9(), 1) && unk_0xE0B3BC41DDA88DF0(iLocal_53, unk_0xA5D3CD332CD10EE9(), 0))
				{
					if (!func_54("REBU2_LV2"))
					{
						func_87(0);
						func_110();
						SYSTEM::WAIT(0);
						func_71(&uLocal_178, "REBU2AU", "REBU2_GETOUT", 4, 0, 0, 0);
						iLocal_133 = 1;
					}
				}
			}
		}
		else if (!unk_0xA59F96B50B97E63C(unk_0xA5D3CD332CD10EE9(), 0))
		{
			if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), unk_0xA5D3CD332CD10EE9(), 0) && unk_0xE0B3BC41DDA88DF0(iLocal_53, unk_0xA5D3CD332CD10EE9(), 0))
			{
				iLocal_133 = 0;
			}
		}
		if (!iLocal_134)
		{
			if (unk_0xF534AF93C1412379(unk_0x9B0761B4C3EB8BC7()))
			{
				func_87(0);
				func_110();
				SYSTEM::WAIT(0);
				func_71(&uLocal_178, "REBU2AU", "REBU2_JACK", 4, 0, 0, 0);
				iLocal_134 = 1;
			}
		}
		else if (!unk_0xF534AF93C1412379(unk_0x9B0761B4C3EB8BC7()))
		{
			iLocal_134 = 0;
		}
		if (!iLocal_135)
		{
			if (unk_0x7922FF28ED63354A(unk_0x9B0761B4C3EB8BC7()))
			{
				func_87(0);
				func_110();
				SYSTEM::WAIT(0);
				func_71(&uLocal_178, "REBU2AU", "REBU2_SHOOT", 4, 0, 0, 0);
				iLocal_135 = 1;
			}
		}
		else if (unk_0x7922FF28ED63354A(unk_0x9B0761B4C3EB8BC7()))
		{
			iLocal_135 = 0;
		}
	}
}

void func_59()
{
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 1))
		{
			if (!func_62())
			{
				if (unk_0x7DA97DBB7F7D2DE5(iLocal_53))
				{
					unk_0x59478CBBF96AF7D1(iLocal_53);
				}
				if (unk_0x16BC17A8EDC701A2(iLocal_53, 1227113341) != 1 && unk_0x16BC17A8EDC701A2(iLocal_53, 1227113341) != 0)
				{
					unk_0xE021DCE1063D5DC2(iLocal_53, unk_0x9B0761B4C3EB8BC7(), -1, 6f, 2f, 1073741824, 0);
				}
				if (unk_0x47DBF174A0CB9D55(iLocal_53, 0))
				{
					unk_0x0AB756271BADC8DF(iLocal_53, 0, 4194304);
				}
				if (!iLocal_132)
				{
					func_87(0);
					func_110();
					SYSTEM::WAIT(0);
					iLocal_132 = 1;
					if (!func_61())
					{
						func_71(&uLocal_178, "REBU2AU", "REBU2_UNS1", 4, 0, 0, 0);
					}
					else
					{
						func_71(&uLocal_178, "REBU2AU", "REBU2_UNS2", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				iLocal_132 = 0;
				if (((unk_0x16BC17A8EDC701A2(iLocal_53, 1227113341) == 1 || unk_0x16BC17A8EDC701A2(iLocal_53, 1227113341) == 0) || unk_0x16BC17A8EDC701A2(iLocal_53, 242628503) == 1) || unk_0x16BC17A8EDC701A2(iLocal_53, 242628503) == 0)
				{
					unk_0x9B94F6169B0DAEFD(iLocal_53);
				}
			}
		}
		else if (((!unk_0x7DA97DBB7F7D2DE5(iLocal_53) && !unk_0x47DBF174A0CB9D55(iLocal_53, 0)) && unk_0x16BC17A8EDC701A2(iLocal_53, 242628503) != 1) && unk_0x16BC17A8EDC701A2(iLocal_53, 242628503) != 0)
		{
			unk_0xE19B69814D61BBA5(iLocal_53, func_60());
			unk_0x10162EF76529C10F(iLocal_53, 1);
			unk_0xF5230D38AD1D873D(iLocal_53, 0);
		}
	}
}

var func_60()
{
	return unk_0x14A1FF4316FA17CB(unk_0x2639A2323BEA8CC6());
}

int func_61()
{
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 1))
	{
		if (unk_0x80FF6C016CDB0FAF(unk_0xB0919F8F7C8097BD(unk_0x9B0761B4C3EB8BC7()), 1))
		{
			if ((unk_0x72B9CC2155AEDF58(unk_0x36FE6D3220816ADA(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 1))) || unk_0x97AFEF6099069369(unk_0x36FE6D3220816ADA(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 1)))) || unk_0x0CE6C9C2E6F95026(unk_0x36FE6D3220816ADA(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_62()
{
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (unk_0x80FF6C016CDB0FAF(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), 0))
		{
			if (((((!unk_0x94BF5C4EB0D40E9E(unk_0x9B0761B4C3EB8BC7()) && !unk_0xAABDC18B9F6EC79D(unk_0x9B0761B4C3EB8BC7())) && !unk_0xDF1110AC39C733FE(unk_0x9B0761B4C3EB8BC7())) && !unk_0xF1263D4D1D8024EF(unk_0x9B0761B4C3EB8BC7())) && !unk_0x167A1D90CE844D68(unk_0x9B0761B4C3EB8BC7())) && !unk_0xE6577B0644092448(unk_0x9B0761B4C3EB8BC7(), joaat("rhino")))
			{
				if (unk_0x99E61B3887CC8E71(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 1))
	{
		if (unk_0x80FF6C016CDB0FAF(unk_0xCE078AEFF5C495DE(unk_0x9B0761B4C3EB8BC7()), 0))
		{
			if ((((!unk_0x442D6659150AF4B3(unk_0x36FE6D3220816ADA(unk_0xCE078AEFF5C495DE(unk_0x9B0761B4C3EB8BC7()))) && !unk_0xF9C3E2B9AA9E2294(unk_0x36FE6D3220816ADA(unk_0xCE078AEFF5C495DE(unk_0x9B0761B4C3EB8BC7())))) && !unk_0x5874D60325749F00(unk_0x36FE6D3220816ADA(unk_0xCE078AEFF5C495DE(unk_0x9B0761B4C3EB8BC7())))) && !unk_0xCA6AF782C906AC86(unk_0x36FE6D3220816ADA(unk_0xCE078AEFF5C495DE(unk_0x9B0761B4C3EB8BC7())))) && unk_0x36FE6D3220816ADA(unk_0xCE078AEFF5C495DE(unk_0x9B0761B4C3EB8BC7())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_63()
{
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
	{
		if (unk_0xEEB37DB9533AA764(iLocal_53))
		{
			if (!iLocal_170)
			{
				iLocal_171 = unk_0x578C4EF320340AF7();
				iLocal_170 = 1;
			}
			else
			{
				iLocal_172 = unk_0x578C4EF320340AF7();
			}
		}
		else
		{
			iLocal_170 = 0;
		}
	}
	if ((iLocal_172 - iLocal_171) > 180000)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
		{
			if (unk_0x7DA97DBB7F7D2DE5(iLocal_53))
			{
				unk_0x59478CBBF96AF7D1(iLocal_53);
				if (unk_0xC2169C00B643278B(iLocal_53, Local_139, 100f, 100f, 100f, 0, 1, 0))
				{
					unk_0x3C1B180EE30D36EF(iLocal_53, 1740.797f, 4648.756f, 42.6529f, 1f, -1, 1048576000, 0, 1193033728);
					unk_0xCBA6B2B569DCAFD8(iLocal_53, 1);
				}
				func_110();
				SYSTEM::WAIT(0);
				func_71(&uLocal_178, "REBU2AU", "REBU2_WK", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_64()
{
	if (unk_0x920BF19A74BAB0F0(unk_0x9B0761B4C3EB8BC7()))
	{
		if (!iLocal_173)
		{
			iLocal_174 = unk_0x578C4EF320340AF7();
			iLocal_173 = 1;
		}
		else
		{
			iLocal_175 = unk_0x578C4EF320340AF7();
		}
	}
	else
	{
		iLocal_173 = 0;
	}
	if ((iLocal_175 - iLocal_174) > 120000)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
		{
			if (unk_0x7DA97DBB7F7D2DE5(iLocal_53))
			{
				unk_0x59478CBBF96AF7D1(iLocal_53);
				if (unk_0xC2169C00B643278B(iLocal_53, Local_139, 100f, 100f, 100f, 0, 1, 0))
				{
					unk_0x3C1B180EE30D36EF(iLocal_53, Local_139, 1f, -1, 1048576000, 0, 1193033728);
					unk_0xCBA6B2B569DCAFD8(iLocal_53, 1);
				}
				else
				{
					unk_0x0AB756271BADC8DF(iLocal_53, 0, 4194304);
				}
				func_110();
				SYSTEM::WAIT(0);
				func_71(&uLocal_178, "REBU2AU", "REBU2_QM", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_65()
{
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
	{
		if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_53, 8f, 8f, 8f, 0, 1, 0) || unk_0x07404C7FE024EC4F(unk_0x9B0761B4C3EB8BC7()))
		{
			if ((unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) && !unk_0xE0B3BC41DDA88DF0(iLocal_53, unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), 0)) && !unk_0x07404C7FE024EC4F(unk_0x9B0761B4C3EB8BC7()))
			{
				if (!unk_0x8F678487EEBD8CE4(uLocal_114))
				{
					uLocal_114 = func_68(iLocal_53, 0, 145);
				}
				if (unk_0x8F678487EEBD8CE4(uLocal_137))
				{
					unk_0x93370FA10F15BE44(&uLocal_137);
				}
			}
			else
			{
				if (!unk_0xEEB37DB9533AA764(unk_0x9B0761B4C3EB8BC7()))
				{
					if (unk_0x8F678487EEBD8CE4(uLocal_114))
					{
						unk_0x93370FA10F15BE44(&uLocal_114);
					}
				}
				if (!unk_0x8F678487EEBD8CE4(uLocal_137))
				{
					uLocal_137 = func_66(Local_139, 1);
				}
			}
		}
		else if (!unk_0x8F678487EEBD8CE4(uLocal_114))
		{
			uLocal_114 = func_68(iLocal_53, 0, 145);
		}
		if (!unk_0x7DA97DBB7F7D2DE5(iLocal_53))
		{
			if (!unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_53, 8f, 8f, 8f, 0, 1, 0))
			{
				unk_0x9B94F6169B0DAEFD(iLocal_53);
				unk_0xE19B69814D61BBA5(iLocal_53, func_60());
				unk_0x10162EF76529C10F(iLocal_53, 1);
				unk_0xF5230D38AD1D873D(iLocal_53, 0);
			}
			if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 1))
			{
				unk_0x9B94F6169B0DAEFD(iLocal_53);
				unk_0xE19B69814D61BBA5(iLocal_53, func_60());
				unk_0x10162EF76529C10F(iLocal_53, 1);
				unk_0xF5230D38AD1D873D(iLocal_53, 0);
			}
		}
		if (!unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_53, 150f, 150f, 150f, 0, 1, 0))
		{
			func_4();
		}
	}
}

var func_66(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x6820C712C1DD618A(Param0);
	unk_0xFA81E0FBD7F5ACA0(uVar0, func_67(unk_0x25DDB354A40FFCDB(), 1f, 1f));
	unk_0x72BEFB9451782F60(uVar0, iParam3);
	return uVar0;
}

float func_67(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

var func_68(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_69(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x8F678487EEBD8CE4(uVar0)) && unk_0x3030AE9FCF1BC243(&(Global_1848[iParam2 /*29*/].f_3)))
	{
		unk_0xB023F5C66F5716C7(uVar0, &(Global_1848[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_69(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xAE06B9E39EBDE049(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x2BE000892D65EA2A(iParam0);
	if (unk_0x20F7576FDB52E2B0(iParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(uVar0, func_67(unk_0x25DDB354A40FFCDB(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x3060C53EAE54BBE7(uVar0, bParam1);
		}
		else
		{
			unk_0xECC9A00CF1181EC2(uVar0, 2);
		}
	}
	else if (unk_0xA1914E72A0EB31D0(iParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(uVar0, func_67(unk_0x25DDB354A40FFCDB(), 0.7f, 0.7f));
		unk_0x3060C53EAE54BBE7(uVar0, bParam1);
	}
	else if (unk_0x49116E591C7E1412(iParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(uVar0, func_67(unk_0x25DDB354A40FFCDB(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_70()
{
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		iLocal_169 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
		if (unk_0x80FF6C016CDB0FAF(iLocal_169, 0))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
			{
				if (unk_0xACBCFA3095C5A434(iLocal_53, iLocal_169))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_71(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_86(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_72(sParam2, iParam3, 0);
}

int func_72(char* sParam0, int iParam1, bool bParam2)
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
					func_85();
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
		if (func_84(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_83();
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
				func_82();
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
				if (func_81())
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
			if (func_80())
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
			func_79();
			Global_21015 = bParam2;
		}
		Global_21007 = iParam1;
		StringCopy(&Global_20624, sParam0, 24);
		Global_19871 = 0;
		func_78();
		func_73();
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
		func_85();
	}
	return 0;
}

void func_73()
{
	if (!func_74())
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

int func_74()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (unk_0x460153A63B9477BC() == func_77())
	{
		return 0;
	}
	if (func_75(unk_0x460153A63B9477BC()))
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

bool func_75(int iParam0)
{
	return func_76(iParam0, 20);
}

bool func_76(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_77()
{
	return -1;
}

void func_78()
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

void func_79()
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

int func_80()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_81()
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

void func_82()
{
	if (func_32(14))
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
		Global_19681 = func_45();
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

void func_83()
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

bool func_84(int iParam0, int iParam1)
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

void func_85()
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

void func_86(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20459 = { *uParam0 };
	Global_6867 = iParam1;
	StringCopy(&Global_21075, sParam2, 24);
	Global_21994 = iParam5;
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

void func_87(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_149)
		{
			if (!unk_0x7BCC91F3C1CF24E8(&Local_156))
			{
				if (func_90(&uLocal_178, "REBU2AU", &Local_156, &Local_150, 8, 0, 0))
				{
					iLocal_149 = 0;
				}
			}
			else
			{
				iLocal_149 = 0;
			}
		}
	}
	else if ((!iLocal_149 && func_12()) && !func_53())
	{
		Local_156 = { func_55() };
		Local_150 = { func_57() };
		func_88();
		iLocal_149 = 1;
	}
}

void func_88()
{
	Global_19871 = 0;
	func_89();
}

void func_89()
{
	if (unk_0x6A5CC4A2C9D9ED8D())
	{
		unk_0x62B2C9892E3E142D();
		Global_22016 = 0;
		unk_0xBE4122AC23440E7D(1);
		Global_21005 = 6;
		return;
	}
}

bool func_90(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_86(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21012 = 0;
	Global_21019 = 0;
	Global_21014 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 1;
	StringCopy(&Global_22009, sParam3, 24);
	Global_2621441 = 0;
	return func_72(sParam2, iParam4, 0);
}

void func_91()
{
	if (unk_0xAE06B9E39EBDE049(iLocal_53))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
		{
			unk_0x8342E6CB98CD545C(iLocal_53, 394, 1);
		}
		if (unk_0xCDF860E56BBCC6B4(iLocal_53, unk_0x9B0761B4C3EB8BC7(), 1))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
			{
				unk_0x8B18A80E8EB15510(iLocal_53, unk_0x9B0761B4C3EB8BC7(), 150f, -1, 0, 0);
				unk_0xCBA6B2B569DCAFD8(iLocal_53, 1);
			}
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_57))
			{
				unk_0xEFBCE8F8316F89EA(5, iLocal_177, 1862763509);
				unk_0x8FF9CE1C0F94F59A(iLocal_57, unk_0x9B0761B4C3EB8BC7(), 0, 16);
				unk_0xCBA6B2B569DCAFD8(iLocal_57, 1);
			}
			func_110();
			SYSTEM::WAIT(0);
			func_71(&uLocal_178, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_51 = 4;
		}
		if (unk_0xAE06B9E39EBDE049(iLocal_57))
		{
			if (unk_0xCDF860E56BBCC6B4(iLocal_57, unk_0x9B0761B4C3EB8BC7(), 1))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
				{
					unk_0x8B18A80E8EB15510(iLocal_53, unk_0x9B0761B4C3EB8BC7(), 150f, -1, 0, 0);
					unk_0xCBA6B2B569DCAFD8(iLocal_53, 1);
				}
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_57))
				{
					unk_0xEFBCE8F8316F89EA(5, iLocal_177, 1862763509);
					unk_0x8FF9CE1C0F94F59A(iLocal_57, unk_0x9B0761B4C3EB8BC7(), 0, 16);
					unk_0xCBA6B2B569DCAFD8(iLocal_57, 1);
				}
				func_110();
				SYSTEM::WAIT(0);
				func_71(&uLocal_178, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
				func_4();
				iLocal_51 = 4;
			}
		}
	}
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
	{
		if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) > 1)
		{
			unk_0x8B18A80E8EB15510(iLocal_53, unk_0x9B0761B4C3EB8BC7(), 150f, -1, 0, 0);
			unk_0xCBA6B2B569DCAFD8(iLocal_53, 1);
			func_110();
			SYSTEM::WAIT(0);
			func_71(&uLocal_178, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_51 = 4;
		}
	}
}

void func_92()
{
	int iVar0;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
	{
		if ((unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_53, 1.2f, 1.2f, 5f, 0, 1, 0) && unk_0xEEB37DB9533AA764(unk_0x9B0761B4C3EB8BC7())) && !unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7()))
		{
			if (func_49(1, 0, 1))
			{
				bLocal_130 = true;
				if (!iLocal_115)
				{
					func_99(1, 1, 1, 0, 0, 0, 0);
					unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), 0, 24);
					unk_0xD289B55B6AADBA10(1);
					unk_0x644F1D0C5427A242(0);
					unk_0x8CFF639CEFF5CF16(0);
					unk_0x98EFE9ABE449C2A3(unk_0x9B0761B4C3EB8BC7(), 1);
					if (unk_0xAE06B9E39EBDE049(unk_0xA5D3CD332CD10EE9()))
					{
						unk_0x4F3C4F457D44BB0F(unk_0xA5D3CD332CD10EE9(), 1, 0);
						if (unk_0x0922C2E075A5F18C(unk_0xA5D3CD332CD10EE9()))
						{
							func_98(unk_0xA5D3CD332CD10EE9());
							unk_0x0FC504FAF5EB94FB(unk_0xA5D3CD332CD10EE9(), 200f);
						}
						if (unk_0x910DFF8E55ABB8EC(unk_0xA5D3CD332CD10EE9(), iLocal_53, 5f, 5f, 5f, 0, 1, 0) || unk_0xC2169C00B643278B(unk_0xA5D3CD332CD10EE9(), Local_88, 5f, 5f, 5f, 0, 1, 0))
						{
							unk_0x03D382CB0B44E2FC(unk_0xA5D3CD332CD10EE9(), unk_0x3E4D3CCC220BDFB1(iLocal_53, 1) - Vector(0f, 3f, 5f), 0, 0, 0, 1);
							if (!unk_0xA59F96B50B97E63C(unk_0xA5D3CD332CD10EE9(), 0))
							{
								unk_0xB11D151E210D4FAC(unk_0xA5D3CD332CD10EE9(), 1084227584);
							}
						}
					}
					if (unk_0xAE06B9E39EBDE049(iLocal_58))
					{
						if (unk_0x0922C2E075A5F18C(iLocal_58))
						{
							func_98(iLocal_58);
							unk_0x0FC504FAF5EB94FB(iLocal_58, 200f);
						}
						if (unk_0x910DFF8E55ABB8EC(iLocal_58, iLocal_53, 8f, 8f, 8f, 0, 1, 0))
						{
							unk_0x03D382CB0B44E2FC(iLocal_58, Local_88, 0, 0, 0, 1);
							if (!unk_0xA59F96B50B97E63C(iLocal_58, 0))
							{
								unk_0xB11D151E210D4FAC(iLocal_58, 1084227584);
							}
						}
					}
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
					{
						iLocal_169 = unk_0xC2E2CC6CF95AF8A3(unk_0x3E4D3CCC220BDFB1(iLocal_53, 1), 5f, 0, 2);
						if (!unk_0xA59F96B50B97E63C(iLocal_169, 0))
						{
							if (unk_0x0922C2E075A5F18C(iLocal_169))
							{
								func_98(iLocal_169);
								unk_0x0FC504FAF5EB94FB(iLocal_169, 200f);
							}
							unk_0x03D382CB0B44E2FC(iLocal_169, unk_0x3E4D3CCC220BDFB1(iLocal_53, 1) + Vector(0f, 5f, 5f), 1, 0, 0, 1);
						}
					}
					unk_0xCFF81C0C8D63E62E(Local_78, 10f);
					unk_0x801B883D25479F23(Local_78, 10f, 0);
					unk_0xF27E737981AFB47D(Local_78, 4.5f, 0, 0, 0, 0, 0, 0);
					unk_0x03D382CB0B44E2FC(iLocal_53, Local_78, 1, 0, 0, 1);
					unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), Local_78, 1, 0, 0, 1);
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
					{
					}
					iVar0 = 0;
					while (iVar0 < iLocal_54)
					{
						if (unk_0xAE06B9E39EBDE049(iLocal_54[iVar0]))
						{
							if (unk_0xC2169C00B643278B(iLocal_54[iVar0], unk_0x3E4D3CCC220BDFB1(iLocal_53, 0), 1.5f, 1.5f, 1.5f, 0, 1, 0))
							{
								unk_0x586DDC617E714637(&(iLocal_54[iVar0]));
							}
						}
						iVar0++;
					}
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
					{
						uLocal_343 = unk_0xF341A134A5B8D4F6(163.449f, 6839.993f, 18.88f, 0f, 0f, 0f, 2);
						uLocal_77 = unk_0x68C2E3309DCAD71E("DEFAULT_ANIMATED_CAMERA", 0);
						unk_0x00736EE41CC355ED(uLocal_77, uLocal_343, "untie_cam", "random@burial");
						unk_0x2BB0EF9DE445EA13(unk_0x9B0761B4C3EB8BC7());
						unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), 162.6699f, 6839.238f, 18.8314f, 0, 0, 0, 1);
						unk_0xE922BAA80E8F9324(unk_0x9B0761B4C3EB8BC7(), 18.2311f);
						unk_0x697DA7132EE43ABC(iLocal_53, 200, 0);
						unk_0x69749B92635E3295(iLocal_53, 0);
						unk_0x81DE096AEF6BD8E7(iLocal_53, 0);
						unk_0x2BB0EF9DE445EA13(iLocal_53);
						unk_0xDFDB9C533700BC17(iLocal_53, uLocal_343, "random@burial", "untie_ped", 1000f, -1000f, 4, 0, 1148846080, 0);
						unk_0x1322CA891C5DF18A(iLocal_53, 0, 0);
						unk_0xDFDB9C533700BC17(unk_0x9B0761B4C3EB8BC7(), uLocal_343, "random@burial", "untie_player", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0x1322CA891C5DF18A(unk_0x9B0761B4C3EB8BC7(), 0, 0);
						unk_0x1FEB07A1AF22700F(uLocal_61[0], uLocal_343, "untie_legstie", "random@burial", 1000f, -1000f, 0, 1148846080);
						unk_0x1FEB07A1AF22700F(uLocal_61[1], uLocal_343, "untie_wristtie", "random@burial", 1000f, -1000f, 0, 1148846080);
						unk_0x856549C07003344B(uLocal_77, 1);
						unk_0x3ED9330214992278(1, 0, 3000, 1, 0, 0);
						iLocal_120 = unk_0x578C4EF320340AF7();
						iLocal_115 = 1;
					}
				}
			}
		}
	}
	if (iLocal_115 && !iLocal_117)
	{
		unk_0xA86915034F55A3BF();
		if (unk_0xFC5D6FB6EECB392F(uLocal_343))
		{
			if ((unk_0x369E69441C066912(uLocal_343) > 0.115f && unk_0x369E69441C066912(uLocal_343) < 0.12f) || (unk_0x369E69441C066912(uLocal_343) > 0.355f && unk_0x369E69441C066912(uLocal_343) < 0.36f))
			{
				unk_0xC4CC25B68A91D144(-1, "ROPE_CUT", "ROPE_CUT_SOUNDSET", 1);
			}
			if (unk_0x369E69441C066912(uLocal_343) > 0.6f)
			{
				if (!iLocal_116)
				{
					func_110();
					SYSTEM::WAIT(0);
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_UNT", 4, 0, 0, 0))
					{
						iLocal_116 = 1;
					}
				}
			}
		}
		iLocal_119 = unk_0x578C4EF320340AF7();
		if (((iLocal_119 - iLocal_120) > 9700 && !iLocal_123) && unk_0xA860C15A1C027CBB() == 4)
		{
			unk_0x0A794A8277A63161("CamPushInNeutral", 0, 0);
			unk_0xC4CC25B68A91D144(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
			iLocal_123 = 1;
		}
		if ((iLocal_119 - iLocal_120) > 10000)
		{
			iLocal_117 = 1;
		}
		if (func_96(1000))
		{
			func_110();
			unk_0x1D40553EDD51A1B8(800);
			while (unk_0x5DA78AD6801A0523())
			{
				SYSTEM::WAIT(0);
			}
			iLocal_117 = 1;
			bLocal_118 = true;
		}
	}
	if (iLocal_117 && !bLocal_122)
	{
		unk_0x644F1D0C5427A242(1);
		unk_0x8CFF639CEFF5CF16(1);
		unk_0x8430A80C3E4F5F98(uLocal_343, 1f);
		unk_0x2BB0EF9DE445EA13(unk_0x9B0761B4C3EB8BC7());
		unk_0x1322CA891C5DF18A(unk_0x9B0761B4C3EB8BC7(), 0, 0);
		unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), 162.5284f, 6839.658f, 18.8198f, 1, 0, 0, 1);
		unk_0xE922BAA80E8F9324(unk_0x9B0761B4C3EB8BC7(), 256.7693f);
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
		{
			unk_0x2BB0EF9DE445EA13(iLocal_53);
			unk_0x1322CA891C5DF18A(iLocal_53, 0, 0);
			unk_0x4478D8ED4673EF14(iLocal_53, 1);
			unk_0x03D382CB0B44E2FC(iLocal_53, 164.4963f, 6839.333f, 18.9657f, 1, 0, 0, 1);
			unk_0xE922BAA80E8F9324(iLocal_53, 73.449f);
		}
		unk_0x4C4FC7841A5FB983(26.1578f);
		unk_0x7965943E39128B42(-8.1198f, 1065353216);
		unk_0x856549C07003344B(uLocal_77, 0);
		unk_0x3ED9330214992278(0, 0, 3000, 1, 0, 0);
		unk_0xB8B0F7C8C1548C5B(uLocal_77, 0);
		unk_0x98EFE9ABE449C2A3(unk_0x9B0761B4C3EB8BC7(), 0);
		if (bLocal_118)
		{
			unk_0xFD45D90342D2A0CD(800);
			while (unk_0x5B772EFCB84373BE())
			{
				SYSTEM::WAIT(0);
			}
		}
		bLocal_122 = true;
	}
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
	{
		if (bLocal_122)
		{
			if (!iLocal_121)
			{
				if (!func_12())
				{
					if (func_45() == 0)
					{
						func_71(&uLocal_178, "REBU2AU", "REBU2_HM0", 4, 0, 0, 0);
					}
					if (func_45() == 1)
					{
						func_71(&uLocal_178, "REBU2AU", "REBU2_HM1", 4, 0, 0, 0);
					}
					if (func_45() == 2)
					{
						func_71(&uLocal_178, "REBU2AU", "REBU2_HM2", 4, 0, 0, 0);
					}
					unk_0xEFBCE8F8316F89EA(1, iLocal_177, 1862763509);
					unk_0xEFBCE8F8316F89EA(1, 1862763509, iLocal_177);
					unk_0x9DC06E2A59C5AEBB(&uLocal_65);
					unk_0xA785552633ED203B(0, unk_0x9B0761B4C3EB8BC7(), -1, 2048, 2);
					unk_0xD08E9EAF091A1AAB(0, unk_0x9B0761B4C3EB8BC7(), 4000);
					if (unk_0x80FF6C016CDB0FAF(unk_0xA5D3CD332CD10EE9(), 0))
					{
						if (unk_0x910DFF8E55ABB8EC(iLocal_53, unk_0xA5D3CD332CD10EE9(), 20f, 20f, 20f, 0, 1, 0) && unk_0x99E61B3887CC8E71(unk_0xA5D3CD332CD10EE9()) > 0)
						{
							unk_0xC584E49FC3559A86(0, unk_0xA5D3CD332CD10EE9(), -1, 0, 1f, 1, 0);
						}
						else if (!unk_0x7DA97DBB7F7D2DE5(iLocal_53))
						{
							unk_0xE19B69814D61BBA5(iLocal_53, func_60());
							unk_0x10162EF76529C10F(iLocal_53, 1);
							unk_0xF5230D38AD1D873D(iLocal_53, 0);
						}
					}
					else if (!unk_0x7DA97DBB7F7D2DE5(iLocal_53))
					{
						unk_0xE19B69814D61BBA5(iLocal_53, func_60());
						unk_0x10162EF76529C10F(iLocal_53, 1);
						unk_0xF5230D38AD1D873D(iLocal_53, 0);
					}
					unk_0x19F29730874AD6F1(uLocal_65);
					unk_0x9B6EC2CECE1010EF(iLocal_53, uLocal_65);
					unk_0x4F83FEE4454169D4(&uLocal_65);
					if (unk_0x8F678487EEBD8CE4(uLocal_114))
					{
						unk_0x93370FA10F15BE44(&uLocal_114);
					}
					if (!unk_0x8F678487EEBD8CE4(uLocal_137))
					{
						uLocal_137 = func_66(Local_139, 1);
					}
					if (func_45() == 2 && !func_9())
					{
						if (!unk_0x8F678487EEBD8CE4(uLocal_138))
						{
							uLocal_138 = func_66(Local_142, 0);
							unk_0xE7B8403ABCA0391D(uLocal_138, 269);
							func_94();
						}
					}
					func_93();
					iLocal_131 = 1;
					iLocal_121 = 1;
					SYSTEM::SETTIMERA(0);
					unk_0x6C68A6B31819E15F(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 0);
					unk_0xAF7D4BF357E8B79E(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 0, 1);
					func_99(0, 1, 1, 0, 0, 0, 0);
					unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), 1, 4);
					unk_0xBB7976F6FB9C9DD2(unk_0x9B0761B4C3EB8BC7());
					iLocal_49 = 4;
				}
			}
		}
	}
}

void func_93()
{
	if (!func_9())
	{
		if (func_45() == 2)
		{
			Global_31205 = 1;
		}
	}
}

void func_94()
{
	if (func_45() == 2)
	{
		if (!Global_31207)
		{
			func_95("CULT_BLIP_HELP", -1);
			Global_31207 = 1;
		}
	}
}

void func_95(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 0, 1, iParam1);
}

int func_96(int iParam0)
{
	if (unk_0x87F0CB19476706C3())
	{
		if ((unk_0x578C4EF320340AF7() - Global_28) > iParam0)
		{
			Global_27 = unk_0x578C4EF320340AF7();
		}
		Global_28 = unk_0x578C4EF320340AF7();
		if ((unk_0x578C4EF320340AF7() - Global_27) > iParam0)
		{
			if (func_97())
			{
				Global_27 = unk_0x578C4EF320340AF7();
				return 1;
			}
		}
	}
	return 0;
}

int func_97()
{
	if (unk_0xF0C12886E5C1B20E())
	{
		return 0;
	}
	if (unk_0x1BD7199394D7F19A(0, 18) || unk_0x1BD7199394D7F19A(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_98(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (!unk_0xA59F96B50B97E63C(iParam0, 0))
		{
			if (unk_0x0922C2E075A5F18C(iParam0))
			{
				unk_0x604DFEB2836FB51B(iParam0);
				unk_0x697DA7132EE43ABC(iParam0, unk_0x4F5F2FB7AE0EB7AB(iParam0) + 200, 0);
				unk_0x0FC504FAF5EB94FB(iParam0, (unk_0xDAD5E5518E960CD1(iParam0) + 200f));
				unk_0x4A9F6CA267EF14FE(iParam0, (unk_0x6167DCEE85C18365(iParam0) + 200f));
				unk_0xCFF81C0C8D63E62E(unk_0x3E4D3CCC220BDFB1(iParam0, 1), 5f);
				unk_0x555EE41D7C7078E6(unk_0x3E4D3CCC220BDFB1(iParam0, 1), 2.5f, 1, 0, 0, 0);
			}
		}
	}
}

void func_99(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x967251943AD606D5(unk_0x460153A63B9477BC(), 0);
		unk_0xAF3D0236D181BE08(unk_0x460153A63B9477BC(), 1);
		unk_0x23F7D177F71818C3(unk_0x460153A63B9477BC(), 1);
		func_106(1);
		unk_0x86529CF5C6F9D6AE();
		unk_0x6D3823E5CADC313B();
		if (Global_19681.f_1 > 3 && !bParam6)
		{
			if (unk_0x6B12213471F330A3())
			{
				unk_0xBE4122AC23440E7D(0);
			}
			if (!func_80())
			{
				Global_19681.f_1 = 3;
			}
			Global_21005 = 5;
		}
		func_105(1, iParam3, iParam2, 0);
		Global_61723 = 1;
		Global_74033 = 1;
		Global_76831 = 1;
	}
	else
	{
		func_106(0);
		unk_0x51C14866CB8A57BF();
		Global_61723 = 0;
		if (bParam1)
		{
			unk_0x86A985A804621EB7();
		}
		unk_0xAF3D0236D181BE08(unk_0x460153A63B9477BC(), 0);
		unk_0x23F7D177F71818C3(unk_0x460153A63B9477BC(), 0);
		func_105(0, iParam3, iParam2, 0);
		if (unk_0x25DDB354A40FFCDB())
		{
			if (((((!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && !func_103(unk_0x460153A63B9477BC())) && !func_101(unk_0x460153A63B9477BC(), 0)) && !func_100()) && !bParam4) && !bParam5)
			{
				unk_0x0312E5501F93E5AB(unk_0x9B0761B4C3EB8BC7(), 0);
			}
		}
		else if (((!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && !func_103(unk_0x460153A63B9477BC())) && !bParam4) && !bParam5)
		{
			unk_0x0312E5501F93E5AB(unk_0x9B0761B4C3EB8BC7(), 0);
		}
		Global_76831 = 0;
	}
}

bool func_100()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_18, 14);
}

bool func_101(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		bVar0 = func_102(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590682[iParam0 /*883*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x166E920FB00B2DBB(iParam0))
		{
			bVar0 = unk_0x6CC163E30ECE0790(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_102(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_23();
	}
	if (Global_1312876[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312757[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_103(int iParam0)
{
	if (func_101(iParam0, 0))
	{
		return 1;
	}
	if (func_104())
	{
		if (iParam0 == unk_0x460153A63B9477BC())
		{
			return 1;
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_104()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

int func_105(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xF8EDFF98A9C94C74())
	{
		if (unk_0x93914DE00496FC78() != iParam0 && uParam2)
		{
			unk_0x6D883C27212BF370(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_106(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xBE20AB8238688965(&Global_7551, 13);
	}
	else
	{
		unk_0xD2459066EA58CE43(&Global_7551, 13);
	}
}

void func_107()
{
	if (!unk_0xA59F96B50B97E63C(iLocal_53, 0))
	{
		switch (iLocal_168)
		{
			case 0:
				if (iLocal_106 < unk_0x578C4EF320340AF7())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x578C4EF320340AF7() + unk_0x344C570D6F8700DF(4000, 5500));
						iLocal_168++;
					}
				}
				break;
			
			case 1:
				if (iLocal_106 < unk_0x578C4EF320340AF7())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x578C4EF320340AF7() + unk_0x344C570D6F8700DF(4000, 5500));
						iLocal_168++;
					}
				}
				break;
			
			case 2:
				if (iLocal_106 < unk_0x578C4EF320340AF7())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x578C4EF320340AF7() + unk_0x344C570D6F8700DF(4000, 5500));
						iLocal_168++;
					}
				}
				break;
			
			case 3:
				if (iLocal_106 < unk_0x578C4EF320340AF7())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x578C4EF320340AF7() + unk_0x344C570D6F8700DF(4000, 5500));
						iLocal_168 = 0;
					}
				}
				break;
			}
	}
}

void func_108(var uParam0, char* sParam1, int iParam2)
{
	unk_0xFDCFA91E51EDB61F(uParam0, sParam1, func_109(iParam2), 1);
}

int func_109(int iParam0)
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

void func_110()
{
	Global_19871 = 0;
	func_111();
}

void func_111()
{
	unk_0x62B2C9892E3E142D();
	Global_22016 = 0;
	if (unk_0x6A5CC4A2C9D9ED8D())
	{
		unk_0xBE4122AC23440E7D(0);
		Global_21005 = 6;
	}
}

void func_112()
{
	if (!iLocal_67 && unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_107, 30f, 30f, 30f, 0, 1, 0))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_54[1]))
		{
			if (func_71(&uLocal_178, "REBU2AU", "REBU2_ATVF", 4, 0, 0, 0))
			{
				iLocal_67 = 1;
			}
		}
	}
	if (unk_0x80FF6C016CDB0FAF(iLocal_58, 0))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_54[0]))
		{
			unk_0xBD204892D76E6303(iLocal_54[0], iLocal_58, unk_0x9B0761B4C3EB8BC7(), 8, 30f, 262144, -1f, 10f, 1);
			unk_0xCBA6B2B569DCAFD8(iLocal_54[0], 1);
		}
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_54[1]))
		{
			unk_0xC584E49FC3559A86(iLocal_54[1], iLocal_58, -1, 0, 3f, 1, 0);
			unk_0xCBA6B2B569DCAFD8(iLocal_54[1], 1);
		}
	}
	else
	{
		iLocal_64 = 0;
		while (iLocal_64 <= 1)
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_54[iLocal_64]))
			{
				unk_0x8B18A80E8EB15510(iLocal_54[iLocal_64], unk_0x9B0761B4C3EB8BC7(), 250f, -1, 0, 0);
				unk_0xCBA6B2B569DCAFD8(iLocal_54[iLocal_64], 1);
			}
			iLocal_64++;
		}
	}
	SYSTEM::WAIT(0);
	func_4();
}

void func_113()
{
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_54[0]) && !unk_0x5AEB5DDFFAD43CA5(iLocal_54[1]))
	{
		if (!unk_0xB3770DEEECFB052B(iLocal_54[0]) && !unk_0xB3770DEEECFB052B(iLocal_54[1]))
		{
			if (func_71(&uLocal_178, "REBU2AU", "REBU2_VH", 4, 0, 0, 0))
			{
				if (!unk_0x7922FF28ED63354A(iLocal_54[1]))
				{
					unk_0x9B94F6169B0DAEFD(iLocal_54[1]);
					unk_0x2477E285E363F38F(iLocal_54[1], unk_0x9B0761B4C3EB8BC7(), -1, -957453492);
				}
			}
		}
	}
	iLocal_49 = 7;
}

void func_114()
{
	float fVar0;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_54[0]) && !unk_0x5AEB5DDFFAD43CA5(iLocal_54[1]))
	{
		if (!iLocal_69)
		{
			if (!iLocal_68)
			{
				unk_0x9DC06E2A59C5AEBB(&uLocal_65);
				unk_0xA785552633ED203B(0, unk_0x9B0761B4C3EB8BC7(), -1, 2048, 2);
				unk_0xD08E9EAF091A1AAB(0, unk_0x9B0761B4C3EB8BC7(), 0);
				unk_0x19F29730874AD6F1(uLocal_65);
				unk_0x9B6EC2CECE1010EF(iLocal_54[1], uLocal_65);
				unk_0x4F83FEE4454169D4(&uLocal_65);
				iLocal_68 = 1;
			}
			if (unk_0x04055E36623F131B(iLocal_54[1], unk_0x9B0761B4C3EB8BC7(), 90f))
			{
				func_110();
				SYSTEM::WAIT(0);
				func_71(&uLocal_178, "REBU2AU", "REBU2_GUY", 4, 0, 0, 0);
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_54[0]) && !unk_0x5AEB5DDFFAD43CA5(iLocal_54[1]))
				{
					fVar0 = func_116(iLocal_54[0], unk_0x9B0761B4C3EB8BC7(), 1);
					if (fVar0 > 5f)
					{
						fVar0 = (fVar0 - 2f);
					}
					else
					{
						fVar0 = (fVar0 - 0.5f);
					}
					unk_0x1F8106DB8796859F(iLocal_60, 0, 1);
					unk_0xF8A652CE310FFC53(iLocal_60, iLocal_54[0], unk_0xE6B87C42793036AA(iLocal_54[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					unk_0x9B94F6169B0DAEFD(iLocal_54[0]);
					unk_0x9DC06E2A59C5AEBB(&uLocal_65);
					unk_0xA785552633ED203B(0, unk_0x9B0761B4C3EB8BC7(), -1, 2048, 2);
					unk_0x756D74A3EF0AB788(0, "random@burial", "a_burial_stop", 8f, -4f, 2000, 0, 0, 0, 0, 0);
					unk_0xD08E9EAF091A1AAB(0, unk_0x9B0761B4C3EB8BC7(), 0);
					unk_0x19F29730874AD6F1(uLocal_65);
					unk_0x9B6EC2CECE1010EF(iLocal_54[0], uLocal_65);
					unk_0x4F83FEE4454169D4(&uLocal_65);
					unk_0x69C71C91F56D82B9(iLocal_54[1], joaat("weapon_sawnoffshotgun"), 1);
					unk_0x9B94F6169B0DAEFD(iLocal_54[1]);
					unk_0x9DC06E2A59C5AEBB(&uLocal_65);
					unk_0xA785552633ED203B(0, unk_0x9B0761B4C3EB8BC7(), -1, 2048, 2);
					unk_0xE021DCE1063D5DC2(0, unk_0x9B0761B4C3EB8BC7(), -1, fVar0, 1f, 1073741824, 0);
					unk_0xD08E9EAF091A1AAB(0, unk_0x9B0761B4C3EB8BC7(), 0);
					unk_0x19F29730874AD6F1(uLocal_65);
					unk_0x9B6EC2CECE1010EF(iLocal_54[1], uLocal_65);
					unk_0x4F83FEE4454169D4(&uLocal_65);
					iLocal_69 = 1;
				}
			}
		}
		if (unk_0xAE06B9E39EBDE049(iLocal_60))
		{
			if (unk_0xB77B1396EAA80D8F(iLocal_60))
			{
				if (unk_0x9934470AA0A08B57(iLocal_54[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0x4C06B15B376AA145(iLocal_54[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						unk_0x1F8106DB8796859F(iLocal_60, 1, 1);
					}
				}
			}
		}
		if (iLocal_69 && !iLocal_165)
		{
			if (func_71(&uLocal_178, "REBU2AU", "REBU2_WHO", 4, 0, 0, 0))
			{
				unk_0x9DC06E2A59C5AEBB(&uLocal_65);
				unk_0x0197C7AF76B72D09(0, unk_0x9B0761B4C3EB8BC7(), unk_0x9B0761B4C3EB8BC7(), 1f, 0, 3.5f, 1082130432, 1, 0, -957453492);
				unk_0xDEA135D03FA041A8(0, unk_0x9B0761B4C3EB8BC7(), -1, 0);
				unk_0x19F29730874AD6F1(uLocal_65);
				unk_0x9B6EC2CECE1010EF(iLocal_54[1], uLocal_65);
				unk_0x4F83FEE4454169D4(&uLocal_65);
				unk_0x21723EF7B2FCC4CC("RE6_START");
				iLocal_165 = 1;
			}
		}
		if (iLocal_165 && !iLocal_166)
		{
			if (func_71(&uLocal_178, "REBU2AU", "REBU2_WAR", 4, 0, 0, 0))
			{
				if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_54[0], 30f, 30f, 30f, 0, 1, 0) && unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_54[1], 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0xDEA135D03FA041A8(iLocal_54[0], unk_0x9B0761B4C3EB8BC7(), -1, 0);
				}
				iLocal_166 = 1;
				SYSTEM::SETTIMERB(0);
			}
		}
		if (iLocal_166 && !bLocal_167)
		{
			if (SYSTEM::TIMERB() > 15000 && !func_12())
			{
				if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_54[0], 30f, 30f, 30f, 0, 1, 0) && unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_54[1], 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0xD08E9EAF091A1AAB(iLocal_54[0], unk_0x9B0761B4C3EB8BC7(), 0);
					unk_0xD08E9EAF091A1AAB(iLocal_54[1], unk_0x9B0761B4C3EB8BC7(), 0);
					func_71(&uLocal_178, "REBU2AU", "REBU2_SHO", 4, 0, 0, 0);
					bLocal_167 = true;
				}
			}
		}
		if (((!iLocal_70 && iLocal_165) && !unk_0x5AEB5DDFFAD43CA5(iLocal_54[0])) && !unk_0x5AEB5DDFFAD43CA5(iLocal_54[1]))
		{
			if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_54[0], 30f, 30f, 30f, 0, 1, 0) && unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_54[1], 30f, 30f, 30f, 0, 1, 0))
			{
				if (!func_12())
				{
					if (func_115())
					{
						func_71(&uLocal_178, "REBU2AU", "REBU2_FO", 4, 0, 0, 0);
					}
					else
					{
						func_71(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				unk_0x9DC06E2A59C5AEBB(&uLocal_65);
				unk_0xE021DCE1063D5DC2(0, iLocal_54[1], -1, 2f, 1f, 1073741824, 0);
				unk_0xD08E9EAF091A1AAB(0, iLocal_54[1], 0);
				unk_0x3964C1CAAE858CB1(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				unk_0x19F29730874AD6F1(uLocal_65);
				unk_0x9B6EC2CECE1010EF(iLocal_54[0], uLocal_65);
				unk_0x4F83FEE4454169D4(&uLocal_65);
				unk_0x9DC06E2A59C5AEBB(&uLocal_65);
				unk_0xE021DCE1063D5DC2(0, iLocal_54[0], -1, 2f, 1f, 1073741824, 0);
				unk_0xD08E9EAF091A1AAB(0, iLocal_54[0], 0);
				unk_0x3964C1CAAE858CB1(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				unk_0x19F29730874AD6F1(uLocal_65);
				unk_0x9B6EC2CECE1010EF(iLocal_54[1], uLocal_65);
				unk_0x4F83FEE4454169D4(&uLocal_65);
				SYSTEM::SETTIMERB(15000);
				iLocal_145 = 0;
				iLocal_166 = 1;
				iLocal_70 = 1;
			}
		}
		if (bLocal_167)
		{
			func_11();
			func_118();
		}
		if (((unk_0xD5E14AF69C7C4DA9(iLocal_54[0], unk_0x9B0761B4C3EB8BC7()) || unk_0xD5E14AF69C7C4DA9(iLocal_54[1], unk_0x9B0761B4C3EB8BC7())) || unk_0xA163F00216900D64(unk_0x460153A63B9477BC(), iLocal_54[0])) || unk_0xA163F00216900D64(unk_0x460153A63B9477BC(), iLocal_54[1]))
		{
			if (unk_0xC0A3F78AF5448915(unk_0x9B0761B4C3EB8BC7(), 4) && !unk_0xC0A3F78AF5448915(unk_0x9B0761B4C3EB8BC7(), 3))
			{
				if (unk_0xEEB37DB9533AA764(unk_0x9B0761B4C3EB8BC7()))
				{
					if (!iLocal_76)
					{
						func_110();
						SYSTEM::WAIT(0);
						if (func_71(&uLocal_178, "REBU2AU", "REBU2_GUN", 4, 0, 0, 0))
						{
							iLocal_76 = 1;
							func_118();
						}
					}
				}
			}
			if (unk_0xC0A3F78AF5448915(unk_0x9B0761B4C3EB8BC7(), 3) && !unk_0xC0A3F78AF5448915(unk_0x9B0761B4C3EB8BC7(), 4))
			{
				if (unk_0xEEB37DB9533AA764(unk_0x9B0761B4C3EB8BC7()))
				{
					if (!iLocal_76)
					{
						func_110();
						SYSTEM::WAIT(0);
						if (func_71(&uLocal_178, "REBU2AU", "REBU2_WEP", 4, 0, 0, 0))
						{
							iLocal_76 = 1;
							func_118();
						}
					}
				}
			}
			if (unk_0x8B1FF66E0C62B7AE(unk_0x460153A63B9477BC()) || unk_0x7922FF28ED63354A(unk_0x9B0761B4C3EB8BC7()))
			{
				func_118();
			}
		}
	}
}

int func_115()
{
	if (unk_0xCE990E643CD9D0E5(unk_0x344C570D6F8700DF(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

float func_116(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, 0) };
	}
	if (!unk_0xA59F96B50B97E63C(iParam1, 0))
	{
		Var3 = { unk_0x3E4D3CCC220BDFB1(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x3E4D3CCC220BDFB1(iParam1, 0) };
	}
	return unk_0x272784C60C397DB6(Var0, Var3, iParam2);
}

int func_117()
{
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (unk_0x80FF6C016CDB0FAF(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), 0))
			{
				if ((((unk_0xE6577B0644092448(unk_0x9B0761B4C3EB8BC7(), joaat("rhino")) || unk_0x653A331834B72BC0(unk_0x9B0761B4C3EB8BC7())) || unk_0xE6577B0644092448(unk_0x9B0761B4C3EB8BC7(), joaat("annihilator"))) || unk_0xE6577B0644092448(unk_0x9B0761B4C3EB8BC7(), joaat("buzzard"))) || unk_0x642A35A076CECC5A(unk_0x9B0761B4C3EB8BC7()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_118()
{
	func_11();
	unk_0x21723EF7B2FCC4CC("RE6_START");
	if (!iLocal_145)
	{
		if (unk_0xAE06B9E39EBDE049(iLocal_54[0]))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_54[0]))
			{
				unk_0x8342E6CB98CD545C(iLocal_54[0], 156, 1);
				if (unk_0xAE06B9E39EBDE049(iLocal_60))
				{
					unk_0x1210730BDCD39CB4(iLocal_54[0]);
					if (unk_0xB77B1396EAA80D8F(iLocal_60))
					{
						if (!iLocal_70)
						{
							unk_0x1F8106DB8796859F(iLocal_60, 0, 1);
							unk_0xF8A652CE310FFC53(iLocal_60, iLocal_54[0], unk_0xE6B87C42793036AA(iLocal_54[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							unk_0x9B94F6169B0DAEFD(iLocal_54[0]);
							unk_0x9DC06E2A59C5AEBB(&uLocal_65);
							unk_0xE2348E4036041923(0);
							unk_0x756D74A3EF0AB788(0, "random@burial", "a_burial_stop", 8f, -8f, 2000, 0, 0, 0, 0, 0);
							unk_0x8FF9CE1C0F94F59A(0, unk_0x9B0761B4C3EB8BC7(), 0, 16);
							unk_0x19F29730874AD6F1(uLocal_65);
							unk_0x9B6EC2CECE1010EF(iLocal_54[0], uLocal_65);
							unk_0x4F83FEE4454169D4(&uLocal_65);
							unk_0xCBA6B2B569DCAFD8(iLocal_54[0], 1);
							unk_0x1322CA891C5DF18A(iLocal_54[0], 0, 0);
							iLocal_145 = 1;
						}
					}
					else
					{
						unk_0x9DC06E2A59C5AEBB(&uLocal_65);
						unk_0xE2348E4036041923(0);
						unk_0x8FF9CE1C0F94F59A(0, unk_0x9B0761B4C3EB8BC7(), 0, 16);
						unk_0x19F29730874AD6F1(uLocal_65);
						unk_0x9B6EC2CECE1010EF(iLocal_54[0], uLocal_65);
						unk_0x4F83FEE4454169D4(&uLocal_65);
						unk_0xCBA6B2B569DCAFD8(iLocal_54[0], 1);
						iLocal_145 = 1;
					}
				}
			}
			else
			{
				iLocal_145 = 1;
			}
		}
		else
		{
			iLocal_145 = 1;
		}
	}
	if (unk_0xAE06B9E39EBDE049(iLocal_60))
	{
		if (unk_0xB77B1396EAA80D8F(iLocal_60))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_54[0]))
			{
				if (unk_0x9934470AA0A08B57(iLocal_54[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0x4C06B15B376AA145(iLocal_54[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						unk_0x1F8106DB8796859F(iLocal_60, 1, 1);
					}
				}
			}
		}
	}
	if (!iLocal_146)
	{
		if (unk_0xAE06B9E39EBDE049(iLocal_54[1]))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_54[1]))
			{
				unk_0x8342E6CB98CD545C(iLocal_54[1], 156, 1);
				unk_0x1210730BDCD39CB4(iLocal_54[1]);
				unk_0x9DC06E2A59C5AEBB(&uLocal_65);
				unk_0xE2348E4036041923(0);
				unk_0xD08E9EAF091A1AAB(0, unk_0x9B0761B4C3EB8BC7(), 500);
				unk_0x8FF9CE1C0F94F59A(0, unk_0x9B0761B4C3EB8BC7(), 0, 16);
				unk_0x19F29730874AD6F1(uLocal_65);
				unk_0x9B6EC2CECE1010EF(iLocal_54[1], uLocal_65);
				unk_0x4F83FEE4454169D4(&uLocal_65);
				unk_0xCBA6B2B569DCAFD8(iLocal_54[1], 1);
				iLocal_146 = 1;
			}
			else
			{
				iLocal_146 = 1;
			}
		}
		else
		{
			iLocal_146 = 1;
		}
	}
	if (iLocal_146 && iLocal_145)
	{
		iLocal_106 = unk_0x578C4EF320340AF7() + 8500;
		SYSTEM::SETTIMERA(0);
		iLocal_49 = 7;
	}
}

int func_119(int iParam0)
{
	if (func_122())
	{
		Global_111848 = 1;
		Global_111845 = unk_0x578C4EF320340AF7();
		if (func_25(Global_111847))
		{
			func_120(0);
		}
		unk_0x694F632EFD1F47D0(1, "RE_TITLE");
		if (iParam0 && func_25(Global_111847))
		{
			unk_0x1D42FFF20D06E356();
		}
		return 1;
	}
	return 0;
}

void func_120(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111858.f_24991.f_2 < 3)
			{
				if (!unk_0x19D4274B54F9D9FA())
				{
					func_95(func_121(iParam0), -1);
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
					func_95(func_121(iParam0), -1);
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
					func_95(func_121(iParam0), -1);
					Global_111858.f_24991.f_4++;
					unk_0xBE20AB8238688965(&Global_111854, 2);
				}
			}
			break;
	}
}

char* func_121(int iParam0)
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

int func_122()
{
	switch (func_123(&Global_31027, 0, 5, 0, unk_0x354AD085195C5FA6()))
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

int func_123(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_127(0))
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
		if (!func_125(iParam2))
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
			func_124(uParam0, iParam4);
		}
	}
	return 2;
}

void func_124(var uParam0, int iParam1)
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

bool func_125(int iParam0)
{
	return func_126(iParam0, Global_41631);
}

int func_126(int iParam0, int iParam1)
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

int func_127(int iParam0)
{
	if (Global_41631 == 15)
	{
		return 0;
	}
	if (func_125(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_128()
{
	if (unk_0x8F678487EEBD8CE4(uLocal_163))
	{
		unk_0x93370FA10F15BE44(&uLocal_163);
	}
	if (!unk_0x8F678487EEBD8CE4(uLocal_114))
	{
		if (!unk_0xA59F96B50B97E63C(iLocal_53, 0))
		{
			uLocal_114 = func_68(iLocal_53, 0, 145);
		}
	}
	iLocal_64 = 0;
	while (iLocal_64 <= 1)
	{
		if (!unk_0x8F678487EEBD8CE4(uLocal_111[iLocal_64]))
		{
			if (!unk_0xA59F96B50B97E63C(iLocal_54[iLocal_64], 0))
			{
				uLocal_111[iLocal_64] = func_68(iLocal_54[iLocal_64], 1, 145);
			}
		}
		iLocal_64++;
	}
}

void func_129()
{
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
	{
		switch (iLocal_168)
		{
			case 0:
				if (iLocal_106 < unk_0x578C4EF320340AF7())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x578C4EF320340AF7() + unk_0x344C570D6F8700DF(4500, 6500));
						iLocal_168++;
					}
				}
				break;
			
			case 1:
				if (iLocal_106 < unk_0x578C4EF320340AF7())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x578C4EF320340AF7() + unk_0x344C570D6F8700DF(4500, 6500));
						iLocal_168++;
					}
				}
				break;
			
			case 2:
				if (iLocal_106 < unk_0x578C4EF320340AF7())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x578C4EF320340AF7() + unk_0x344C570D6F8700DF(4500, 6500));
						iLocal_168++;
					}
				}
				break;
			
			case 3:
				if (iLocal_106 < unk_0x578C4EF320340AF7())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x578C4EF320340AF7() + unk_0x344C570D6F8700DF(4500, 6500));
						iLocal_168 = 0;
					}
				}
				break;
			}
	}
}

void func_130()
{
	switch (iLocal_110)
	{
		case 0:
			if (func_71(&uLocal_178, "REBU2AU", "REBU2_CH1", 4, 0, 0, 0))
			{
				iLocal_110++;
			}
			break;
		
		case 1:
			if (!func_12())
			{
				if (func_71(&uLocal_178, "REBU2AU", "REBU2_CH2", 4, 0, 0, 0))
				{
					iLocal_110++;
				}
			}
			break;
		
		case 2:
			if (!func_12())
			{
				if (func_71(&uLocal_178, "REBU2AU", "REBU2_CH3", 4, 0, 0, 0))
				{
					iLocal_110++;
				}
			}
			break;
		
		case 3:
			if (!func_12())
			{
				if (func_71(&uLocal_178, "REBU2AU", "REBU2_CH4", 4, 0, 0, 0))
				{
					iLocal_110++;
				}
			}
			break;
		
		case 4:
			iLocal_106 = unk_0x578C4EF320340AF7() + 3000;
			iLocal_110++;
			break;
		
		case 5:
			break;
	}
}

void func_131()
{
	if (unk_0xAE06B9E39EBDE049(iLocal_60))
	{
		if (unk_0xB77B1396EAA80D8F(iLocal_60))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_54[0]))
			{
				if (unk_0x9934470AA0A08B57(iLocal_54[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0x4C06B15B376AA145(iLocal_54[0], "random@burial", "a_burial_stop") > 0.124f && unk_0x4C06B15B376AA145(iLocal_54[0], "random@burial", "a_burial") < 0.127f)
					{
						unk_0x07AA3B8DE21236E5("scr_burial_dirt", iLocal_60, 0f, 0f, -0.95f, 0f, 180f, 0f, 1065353216, 0, 0, 0);
					}
				}
				if (unk_0x9934470AA0A08B57(iLocal_54[0], "random@burial", "a_burial", 3))
				{
					if (((((unk_0x4C06B15B376AA145(iLocal_54[0], "random@burial", "a_burial") > 0.04f && unk_0x4C06B15B376AA145(iLocal_54[0], "random@burial", "a_burial") < 0.043f) || (unk_0x4C06B15B376AA145(iLocal_54[0], "random@burial", "a_burial") > 0.24f && unk_0x4C06B15B376AA145(iLocal_54[0], "random@burial", "a_burial") < 0.243f)) || (unk_0x4C06B15B376AA145(iLocal_54[0], "random@burial", "a_burial") > 0.44f && unk_0x4C06B15B376AA145(iLocal_54[0], "random@burial", "a_burial") < 0.443f)) || (unk_0x4C06B15B376AA145(iLocal_54[0], "random@burial", "a_burial") > 0.64f && unk_0x4C06B15B376AA145(iLocal_54[0], "random@burial", "a_burial") < 0.643f)) || (unk_0x4C06B15B376AA145(iLocal_54[0], "random@burial", "a_burial") > 0.84f && unk_0x4C06B15B376AA145(iLocal_54[0], "random@burial", "a_burial") < 0.843f))
					{
						unk_0x07AA3B8DE21236E5("scr_burial_dirt", iLocal_60, 0f, 0f, -0.95f, 0f, 180f, 0f, 1065353216, 0, 0, 0);
					}
				}
			}
		}
	}
}

int func_132()
{
	if (!iLocal_129)
	{
		if (unk_0xC7EB33BFDB436C87(Local_88, 100f, 1) || unk_0xC7EB33BFDB436C87(Local_88, 100f, 1))
		{
			if (unk_0x5AEB5DDFFAD43CA5(iLocal_54[0]) || unk_0x5AEB5DDFFAD43CA5(iLocal_54[1]))
			{
				iLocal_51 = 1;
				return 1;
			}
			else if (!unk_0xC7EB33BFDB436C87(Local_88, 100f, 1) || !unk_0xC7EB33BFDB436C87(Local_88, 100f, 1))
			{
				iLocal_51 = 1;
				return 1;
			}
		}
		if (((((((((unk_0x49236D5B40D9C66F(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_smokegrenade"), 1) || unk_0x49236D5B40D9C66F(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenade"), 1)) || unk_0x49236D5B40D9C66F(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_stickybomb"), 1)) || unk_0x49236D5B40D9C66F(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenadelauncher"), 1)) || unk_0x49236D5B40D9C66F(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenadelauncher_smoke"), 1)) || unk_0x49236D5B40D9C66F(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_rpg"), 1)) || unk_0x49236D5B40D9C66F(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_molotov"), 1)) || unk_0xEA84479CCF7AA647(2, Local_88 - Vector(100f, 100f, 100f), Local_88 + Vector(100f, 100f, 100f))) || unk_0xEA84479CCF7AA647(4, Local_88 - Vector(100f, 100f, 100f), Local_88 + Vector(100f, 100f, 100f))) || unk_0xEA84479CCF7AA647(0, Local_88 - Vector(100f, 100f, 100f), Local_88 + Vector(100f, 100f, 100f)))
		{
			iLocal_51 = 1;
			return 1;
		}
		if (unk_0xAE06B9E39EBDE049(iLocal_58))
		{
			if (!unk_0xA59F96B50B97E63C(iLocal_58, 0))
			{
				if (unk_0xCDF860E56BBCC6B4(iLocal_58, unk_0x9B0761B4C3EB8BC7(), 1) || unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_58, 0))
				{
					unk_0xBB7976F6FB9C9DD2(iLocal_58);
					func_118();
					iLocal_51 = 3;
					return 1;
				}
				if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					if (unk_0xE6577B0644092448(unk_0x9B0761B4C3EB8BC7(), joaat("towtruck")) || unk_0xE6577B0644092448(unk_0x9B0761B4C3EB8BC7(), joaat("towtruck2")))
					{
						if (unk_0xBA9474B1995C6AAD(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), iLocal_58))
						{
							func_118();
							iLocal_51 = 3;
							return 1;
						}
					}
				}
			}
		}
		if (!iLocal_75)
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_54[0]) && !unk_0x5AEB5DDFFAD43CA5(iLocal_54[1]))
			{
				if ((((unk_0xD5E14AF69C7C4DA9(iLocal_54[0], unk_0x9B0761B4C3EB8BC7()) || unk_0xD5E14AF69C7C4DA9(iLocal_54[1], unk_0x9B0761B4C3EB8BC7())) || unk_0xA163F00216900D64(unk_0x460153A63B9477BC(), iLocal_54[0])) || unk_0xA163F00216900D64(unk_0x460153A63B9477BC(), iLocal_54[1])) || unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_88 - Vector(0f, 0f, 7f), 20f, 15f, 35f, 0, 1, 0))
				{
					if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_88 - Vector(0f, 0f, 7f), 28f, 18f, 35f, 0, 1, 0))
					{
						iLocal_51 = 1;
						return 1;
					}
				}
			}
		}
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_54[0]) && !unk_0x5AEB5DDFFAD43CA5(iLocal_54[1]))
			{
				if (!unk_0xA59F96B50B97E63C(unk_0xA5D3CD332CD10EE9(), 0))
				{
					if (unk_0xA65352E7FEA59881(unk_0xA5D3CD332CD10EE9(), iLocal_54[0]) || unk_0xA65352E7FEA59881(unk_0xA5D3CD332CD10EE9(), iLocal_54[1]))
					{
						iLocal_51 = 5;
						return 1;
					}
				}
			}
		}
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
		{
			if (unk_0xCDF860E56BBCC6B4(iLocal_53, unk_0x9B0761B4C3EB8BC7(), 0) || unk_0xA71AC4B230E98432(iLocal_53, joaat("weapon_stungun"), 0))
			{
				iLocal_51 = 4;
				return 1;
			}
		}
		else
		{
			iLocal_51 = 4;
			return 1;
		}
		if (unk_0xA59F96B50B97E63C(iLocal_54[0], 0) || unk_0xA59F96B50B97E63C(iLocal_54[1], 0))
		{
			iLocal_51 = 6;
			return 1;
		}
		if (iLocal_75)
		{
			return 1;
		}
	}
	return 0;
}

int func_133(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	bVar2 = false;
	if (!unk_0xA59F96B50B97E63C(iParam0, 0) && !bParam4)
	{
		if (unk_0xEEB37DB9533AA764(iParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (!unk_0xA59F96B50B97E63C(iParam0, 0) && !bParam4)
		{
			Var3 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1) };
			Var6 = { unk_0x3E4D3CCC220BDFB1(iParam0, 1) };
			fVar9 = SYSTEM::VDIST(Var3, Var6);
			if (!unk_0xCE990E643CD9D0E5(iParam3, 3))
			{
				if (func_139(iParam0, iParam6))
				{
					func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_138("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_137(iParam0);
					return 1;
				}
			}
			if (!unk_0xCE990E643CD9D0E5(iParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (unk_0xC7EB33BFDB436C87(Var6, fParam5, 1))
				{
					func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_138("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_137(iParam0);
					return 1;
				}
				if (unk_0x5AC0C31BB5BC0343(Var6 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var6 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_138("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_137(iParam0);
					return 1;
				}
			}
			if (!unk_0xCE990E643CD9D0E5(iParam3, 2))
			{
				fVar0 = unk_0x3E6F6F6520B59CAB(unk_0x9B0761B4C3EB8BC7());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (unk_0xC0A3F78AF5448915(unk_0x9B0761B4C3EB8BC7(), 6))
				{
					if (unk_0x5E5402F6D3B26AFB(unk_0x460153A63B9477BC(), iParam0) || unk_0x2311EB213A0CB707(unk_0x460153A63B9477BC(), iParam0))
					{
						if (fVar9 < fVar0)
						{
							if (unk_0xD44D03437956A1ED(iParam0, unk_0x9B0761B4C3EB8BC7(), 17))
							{
								func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_138("	aggro Ped knows player is pointing gun\n");
								func_134("		lockOnTimer = ", *uParam2);
								func_138("\n");
								func_134("		time since not LockedOn = ", (unk_0x578C4EF320340AF7() - iLocal_19));
								func_138("\n");
								bVar2 = true;
								if (unk_0x578C4EF320340AF7() > (iLocal_19 + *uParam2))
								{
									func_138("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_137(iParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!unk_0xCE990E643CD9D0E5(iParam3, 0))
			{
				if (unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0))
				{
					func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_138("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_137(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_19 = unk_0x578C4EF320340AF7();
	}
	return 0;
}

void func_134(char* sParam0, int iParam1)
{
	func_136(sParam0);
	func_135(iParam1);
}

void func_135(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_136(char* sParam0)
{
	if (unk_0xF005CCA4263DF67F(uParam0, uParam0))
	{
	}
}

void func_137(int iParam0)
{
	unk_0xC4B63A43FAB1F06F(iParam0);
}

void func_138(char* sParam0)
{
	func_136(sParam0);
}

int func_139(int iParam0, int iParam1)
{
	if (unk_0xEEB37DB9533AA764(unk_0x9B0761B4C3EB8BC7()))
	{
		if (unk_0xCDF860E56BBCC6B4(iParam0, unk_0x9B0761B4C3EB8BC7(), 1))
		{
			return 1;
		}
	}
	else if (unk_0xCDF860E56BBCC6B4(iParam0, unk_0x9B0761B4C3EB8BC7(), 1))
	{
		if ((unk_0xB4BD22A5188A2545(iParam0) - unk_0x4F5F2FB7AE0EB7AB(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_140()
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_142(39, 1);
	func_142(40, 1);
	func_142(41, 1);
	func_142(42, 1);
	func_142(43, 1);
	func_142(44, 1);
	unk_0xC08A186299DFDA0A(Local_139 - Vector(20f, 40f, 40f), Local_139 + Vector(20f, 40f, 40f), 0, 1, 1, 1);
	unk_0xC08A186299DFDA0A(Local_78 - Vector(20f, 50f, 60f), Local_78 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
	unk_0x410A1E7AD7D5C774(iLocal_105, 1);
	unk_0x40ECEB892E6BDDDB(5, 0);
	unk_0x40ECEB892E6BDDDB(3, 0);
	unk_0x34FEEAC2548C3789(0f);
	iLocal_53 = unk_0xB3116B49FE00E2F1(26, iLocal_102, Local_78, fLocal_97, 1, 1);
	unk_0x4E65320BC9AD521C(iLocal_53, 1);
	unk_0x0DC39BE87E4C5599(iLocal_53, 0);
	unk_0x6AC7395A8E313A46(iLocal_53, 2, 0);
	unk_0x6AC7395A8E313A46(iLocal_53, 128, 1);
	unk_0x6673CC701BC8E9C1(iLocal_53, 1, 0);
	unk_0x6673CC701BC8E9C1(iLocal_53, 6, 0);
	unk_0x694113444F21E39F(iLocal_53, 206, 1);
	unk_0x694113444F21E39F(iLocal_53, 318, 0);
	unk_0x694113444F21E39F(iLocal_53, 118, 0);
	unk_0x694113444F21E39F(iLocal_53, 208, 1);
	unk_0x74528AC0906CBABE(iLocal_102);
	unk_0x697DA7132EE43ABC(iLocal_53, iLocal_125, 0);
	unk_0x5A5A1DD32AC33C2B(unk_0x9B0761B4C3EB8BC7(), 0);
	unk_0xDE8F8016287F771F("rghKidnappers", &iLocal_176);
	unk_0xDE8F8016287F771F("rghVictim", &iLocal_177);
	unk_0xD3D9D7C84656DAE5(iLocal_53, iLocal_177);
	iLocal_64 = 0;
	while (iLocal_64 <= 1)
	{
		iLocal_54[iLocal_64] = unk_0xB3116B49FE00E2F1(26, iLocal_103, Local_81[iLocal_64 /*3*/], fLocal_98[iLocal_64], 1, 1);
		unk_0x4E65320BC9AD521C(iLocal_54[iLocal_64], 1);
		unk_0x9B20C082E40178C8(iLocal_54[iLocal_64], 1);
		unk_0x6673CC701BC8E9C1(iLocal_54[iLocal_64], 0, 1);
		unk_0x6AC7395A8E313A46(iLocal_54[iLocal_64], 2, 0);
		unk_0x6AC7395A8E313A46(iLocal_54[iLocal_64], 128, 1);
		unk_0x694113444F21E39F(iLocal_54[iLocal_64], 42, 1);
		unk_0x73745F8F1D07995D(iLocal_54[0], 2);
		unk_0x6673CC701BC8E9C1(iLocal_54[0], 50, 1);
		unk_0xB51236BFABA70F7E(iLocal_54[iLocal_64], 50);
		unk_0xF94DFEAE3DD1EE7E(iLocal_54[iLocal_64], 13);
		unk_0xA5EAD2ACE2C8BBB2(iLocal_54[iLocal_64], 1, 1);
		unk_0xD3D9D7C84656DAE5(iLocal_54[iLocal_64], iLocal_176);
		unk_0x055A73D4AFD214F1(iLocal_54[iLocal_64], unk_0x344C570D6F8700DF(800, 2000));
		iLocal_64++;
	}
	unk_0x74528AC0906CBABE(iLocal_104);
	unk_0x74528AC0906CBABE(iLocal_103);
	unk_0xB51236BFABA70F7E(iLocal_54[1], 100);
	unk_0x8DE81126922BBEDD(iLocal_54[1], -687903391);
	unk_0xEFBCE8F8316F89EA(5, iLocal_176, 1862763509);
	unk_0x92BD213E6A0E666B(iLocal_54[0], joaat("weapon_pistol"), -1, 0, 1);
	unk_0x92BD213E6A0E666B(iLocal_54[1], joaat("weapon_sawnoffshotgun"), -1, 0, 1);
	iLocal_58 = unk_0xCE4780E24AFDFBF9(iLocal_105, Local_88, fLocal_101, 1, 1, 0);
	unk_0xB11D151E210D4FAC(iLocal_58, 1084227584);
	unk_0x289D342D7C2DA52A(iLocal_58, 3);
	unk_0xFF90B7B5F1AF504A(iLocal_58, 5, 0, 0);
	unk_0x74528AC0906CBABE(iLocal_105);
	iLocal_60 = unk_0x79CC07752E7432A1(joaat("prop_ld_shovel"), Local_107, 1, 1, 0);
	unk_0x74528AC0906CBABE(joaat("prop_ld_shovel"));
	uLocal_61[0] = unk_0x79CC07752E7432A1(joaat("p_arm_bind_cut_s"), Local_107, 1, 1, 0);
	uLocal_61[1] = unk_0x79CC07752E7432A1(joaat("p_arm_bind_cut_s"), Local_107 + Vector(1f, 1f, 1f), 1, 1, 0);
	unk_0x78FCB2E22C41B9D5(joaat("p_arm_bind_cut_s"));
	unk_0xF8A652CE310FFC53(iLocal_60, iLocal_54[0], unk_0xE6B87C42793036AA(iLocal_54[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	unk_0x45F588C0DD767737(iLocal_54[0], 0, 0, 0, 0);
	unk_0x45F588C0DD767737(iLocal_54[0], 3, 0, 1, 0);
	unk_0x45F588C0DD767737(iLocal_54[0], 4, 1, 0, 0);
	unk_0x45F588C0DD767737(iLocal_54[1], 0, 0, 2, 0);
	unk_0x45F588C0DD767737(iLocal_54[1], 3, 2, 1, 0);
	unk_0x45F588C0DD767737(iLocal_54[1], 4, 1, 1, 0);
	Var0 = { Local_78 };
	Var3 = { -2f, -4f, 18f };
	uLocal_343 = unk_0xF341A134A5B8D4F6(Var0, Var3, 2);
	unk_0xDFDB9C533700BC17(iLocal_53, uLocal_343, "random@burial", "b_burial", 4f, -4f, 1, 0, 1148846080, 0);
	unk_0x1FEB07A1AF22700F(uLocal_61[0], uLocal_343, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080);
	unk_0x1FEB07A1AF22700F(uLocal_61[1], uLocal_343, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080);
	unk_0x81493F39713559B1(uLocal_343, 1);
	unk_0xCBA6B2B569DCAFD8(iLocal_53, 1);
	unk_0x756D74A3EF0AB788(iLocal_54[0], "random@burial", "a_burial", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0x756D74A3EF0AB788(iLocal_54[1], "random@burial", "c_burial", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0x983E7D70A33B02D4(iLocal_54[0], Local_91, Local_94, 2.75f, 0, 0);
	unk_0x983E7D70A33B02D4(iLocal_54[1], Local_91, Local_94, 2.75f, 0, 0);
	if (func_45() == 0)
	{
		func_141(&uLocal_178, 0, unk_0x9B0761B4C3EB8BC7(), "MICHAEL", 0, 1);
	}
	else if (func_45() == 1)
	{
		func_141(&uLocal_178, 1, unk_0x9B0761B4C3EB8BC7(), "FRANKLIN", 0, 1);
	}
	else if (func_45() == 2)
	{
		func_141(&uLocal_178, 2, unk_0x9B0761B4C3EB8BC7(), "TREVOR", 0, 1);
	}
	unk_0x3A2AAE59B4681DAF(iLocal_54[0], "A_M_M_HillBilly_02_WHITE_MINI_03");
	unk_0x3A2AAE59B4681DAF(iLocal_54[1], "A_M_M_HillBilly_02_WHITE_MINI_02");
	unk_0x3A2AAE59B4681DAF(iLocal_53, "KIDNAPPEDFEMALE");
	func_141(&uLocal_178, 4, iLocal_54[0], "KIDNAPPER2", 0, 1);
	func_141(&uLocal_178, 3, iLocal_54[1], "KIDNAPPER1", 0, 1);
	func_141(&uLocal_178, 5, iLocal_53, "KIDNAPPEDFEMALE", 0, 1);
}

void func_141(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76833)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iParam2))
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

void func_142(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_149(iParam0, 2, 1))
		{
			func_148(iParam0, 2, 1);
		}
	}
	else if (func_149(iParam0, 2, 1))
	{
		func_143(iParam0, 2, 1);
	}
}

void func_143(int iParam0, int iParam1, bool bParam2)
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
		if (func_20() == 0)
		{
			uVar0 = func_146(func_147(iParam0), -1, 0);
			unk_0xD2459066EA58CE43(&uVar0, iParam1);
			func_144(func_147(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_111858.f_668[iParam0]), iParam1);
	}
}

void func_144(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_145(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, uParam1, iParam3);
	}
}

int func_145(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_23();
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

int func_146(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2551832[iParam0 /*3*/][func_145(iParam1)];
		if (unk_0xD2F202166691EDB2(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_147(int iParam0)
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

void func_148(int iParam0, int iParam1, bool bParam2)
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
		if (func_20() == 0)
		{
			uVar0 = func_146(func_147(iParam0), -1, 0);
			unk_0xBE20AB8238688965(&uVar0, iParam1);
			func_144(func_147(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xBE20AB8238688965(&(Global_111858.f_668[iParam0]), iParam1);
	}
}

int func_149(int iParam0, int iParam1, bool bParam2)
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
		if (func_20() == 0)
		{
			return unk_0xCE990E643CD9D0E5(func_146(func_147(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xCE990E643CD9D0E5(Global_111858.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_150()
{
	var uVar0;
	int iVar1;
	
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 1))
	{
		uVar0 = unk_0xCE078AEFF5C495DE(unk_0x9B0761B4C3EB8BC7());
		if (unk_0x80FF6C016CDB0FAF(uVar0, 0))
		{
			iVar1 = unk_0x10D3F7E169A49C44(iVar0, 0, 0);
			if (!unk_0x5AEB5DDFFAD43CA5(iVar1))
			{
				if (iVar1 != unk_0x9B0761B4C3EB8BC7())
				{
					if (unk_0x1758275D343D5BA3(iVar1))
					{
						if (!unk_0x71CFA8031A5AE4FB(iVar1, unk_0x9B0761B4C3EB8BC7()))
						{
							unk_0xA785552633ED203B(iVar1, unk_0x9B0761B4C3EB8BC7(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_151()
{
	unk_0x78FCB2E22C41B9D5(iLocal_102);
	unk_0x78FCB2E22C41B9D5(iLocal_104);
	unk_0x78FCB2E22C41B9D5(iLocal_103);
	unk_0x78FCB2E22C41B9D5(iLocal_105);
	unk_0x78FCB2E22C41B9D5(joaat("prop_ld_shovel"));
	unk_0x78FCB2E22C41B9D5(joaat("p_arm_bind_cut_s"));
	unk_0x131ED02492676000("random@burial");
	unk_0x22043B0E5A2FE456();
	unk_0x8B917081F9836EDD("ROPE_CUT", 0, -1);
	unk_0x1BDBFE8EFF10BC95("RE6_BOTH_DEAD_OS");
	if (((((((((unk_0x7D167B9A0CCDA347(iLocal_102) && unk_0x7D167B9A0CCDA347(iLocal_104)) && unk_0x7D167B9A0CCDA347(iLocal_103)) && unk_0x7D167B9A0CCDA347(iLocal_105)) && unk_0x7D167B9A0CCDA347(joaat("prop_ld_shovel"))) && unk_0x7D167B9A0CCDA347(joaat("p_arm_bind_cut_s"))) && unk_0xC614DDE265D18415("random@burial")) && unk_0x4F144789C4312F35()) && unk_0x8B917081F9836EDD("ROPE_CUT", 0, -1)) && unk_0x1BDBFE8EFF10BC95("RE6_BOTH_DEAD_OS"))
	{
		bLocal_52 = true;
	}
	else
	{
		unk_0x78FCB2E22C41B9D5(iLocal_102);
		unk_0x78FCB2E22C41B9D5(iLocal_104);
		unk_0x78FCB2E22C41B9D5(iLocal_103);
		unk_0x78FCB2E22C41B9D5(iLocal_105);
		unk_0x78FCB2E22C41B9D5(joaat("prop_ld_shovel"));
		unk_0x78FCB2E22C41B9D5(joaat("p_arm_bind_cut_s"));
		unk_0x131ED02492676000("random@burial");
		unk_0x22043B0E5A2FE456();
		unk_0x8B917081F9836EDD("ROPE_CUT", 0, -1);
		unk_0x1BDBFE8EFF10BC95("RE6_BOTH_DEAD_OS");
	}
}

void func_152()
{
	iLocal_102 = joaat("u_f_y_mistress");
	iLocal_103 = joaat("a_m_m_salton_01");
	iLocal_104 = joaat("a_m_m_salton_01");
	iLocal_105 = joaat("bison");
	Local_78 = { 163.4486f, 6839.993f, 18.86f };
	fLocal_97 = 0f;
	Local_81[0 /*3*/] = { 162.8193f, 6837.257f, 18.9614f };
	fLocal_98[0] = 297.0056f;
	Local_81[1 /*3*/] = { 162.5046f, 6841.68f, 18.8426f };
	fLocal_98[1] = 193.3866f;
	Local_88 = { 169.3462f, 6837.805f, 19.1421f };
	fLocal_101 = 265.6862f;
	Local_91 = { 164.0896f, 6836.923f, 19.03899f };
	Local_94 = { 168.9638f, 6834.302f, 24.99057f };
	iLocal_66 = 1;
}

int func_153()
{
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (SYSTEM::VDIST2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(unk_0x97C0B1E5FCD8E08A(unk_0x9B0761B4C3EB8BC7())) > 1369f && !func_164())
		{
			return 0;
		}
	}
	if (func_160())
	{
		return 1;
	}
	if (func_154(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_154(float fParam0, bool bParam1)
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
		if (func_33(func_45()))
		{
			iVar36 = func_30();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xCE990E643CD9D0E5(Global_111858.f_18570[iVar32 /*6*/], 2) && !unk_0xCE990E643CD9D0E5(Global_111858.f_18570[iVar32 /*6*/], 3))
				{
					func_155(iVar32, &Var0);
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

void func_155(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_156(uParam1, "Abigail1", func_158(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 1:
			func_156(uParam1, "Abigail2", func_158(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 2:
			func_156(uParam1, "Barry1", func_158(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 3:
			func_156(uParam1, "Barry2", func_158(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 4:
			func_156(uParam1, "Barry3", func_158(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 5:
			func_156(uParam1, "Barry3A", func_158(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 6:
			func_156(uParam1, "Barry3C", func_158(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 7:
			func_156(uParam1, "Barry4", func_158(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_157(iParam0), 0, 0);
			break;
		
		case 8:
			func_156(uParam1, "Dreyfuss1", func_158(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 9:
			func_156(uParam1, "Epsilon1", func_158(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 10:
			func_156(uParam1, "Epsilon2", func_158(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 11:
			func_156(uParam1, "Epsilon3", func_158(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 12:
			func_156(uParam1, "Epsilon4", func_158(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 13:
			func_156(uParam1, "Epsilon5", func_158(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 14:
			func_156(uParam1, "Epsilon6", func_158(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 15:
			func_156(uParam1, "Epsilon7", func_158(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 16:
			func_156(uParam1, "Epsilon8", func_158(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 17:
			func_156(uParam1, "Extreme1", func_158(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 18:
			func_156(uParam1, "Extreme2", func_158(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 19:
			func_156(uParam1, "Extreme3", func_158(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 20:
			func_156(uParam1, "Extreme4", func_158(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 21:
			func_156(uParam1, "Fanatic1", func_158(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_157(iParam0), 1, 0);
			break;
		
		case 22:
			func_156(uParam1, "Fanatic2", func_158(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_157(iParam0), 1, 0);
			break;
		
		case 23:
			func_156(uParam1, "Fanatic3", func_158(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_157(iParam0), 0, 1);
			break;
		
		case 24:
			func_156(uParam1, "Hao1", func_158(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_157(iParam0), 0, 1);
			break;
		
		case 25:
			func_156(uParam1, "Hunting1", func_158(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 26:
			func_156(uParam1, "Hunting2", func_158(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 27:
			func_156(uParam1, "Josh1", func_158(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 28:
			func_156(uParam1, "Josh2", func_158(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 29:
			func_156(uParam1, "Josh3", func_158(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 30:
			func_156(uParam1, "Josh4", func_158(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 31:
			func_156(uParam1, "Maude1", func_158(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 32:
			func_156(uParam1, "Minute1", func_158(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 33:
			func_156(uParam1, "Minute2", func_158(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 34:
			func_156(uParam1, "Minute3", func_158(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 35:
			func_156(uParam1, "MrsPhilips1", func_158(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 36:
			func_156(uParam1, "MrsPhilips2", func_158(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 37:
			func_156(uParam1, "Nigel1", func_158(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 38:
			func_156(uParam1, "Nigel1A", func_158(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 39:
			func_156(uParam1, "Nigel1B", func_158(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
		
		case 40:
			func_156(uParam1, "Nigel1C", func_158(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
		
		case 41:
			func_156(uParam1, "Nigel1D", func_158(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
		
		case 42:
			func_156(uParam1, "Nigel2", func_158(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 43:
			func_156(uParam1, "Nigel3", func_158(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 44:
			func_156(uParam1, "Omega1", func_158(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 45:
			func_156(uParam1, "Omega2", func_158(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 46:
			func_156(uParam1, "Paparazzo1", func_158(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 47:
			func_156(uParam1, "Paparazzo2", func_158(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 48:
			func_156(uParam1, "Paparazzo3", func_158(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 49:
			func_156(uParam1, "Paparazzo3A", func_158(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 50:
			func_156(uParam1, "Paparazzo3B", func_158(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 51:
			func_156(uParam1, "Paparazzo4", func_158(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 52:
			func_156(uParam1, "Rampage1", func_158(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 54:
			func_156(uParam1, "Rampage3", func_158(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 55:
			func_156(uParam1, "Rampage4", func_158(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 56:
			func_156(uParam1, "Rampage5", func_158(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 53:
			func_156(uParam1, "Rampage2", func_158(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 57:
			func_156(uParam1, "TheLastOne", func_158(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 58:
			func_156(uParam1, "Tonya1", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 59:
			func_156(uParam1, "Tonya2", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 60:
			func_156(uParam1, "Tonya3", func_158(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 61:
			func_156(uParam1, "Tonya4", func_158(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 62:
			func_156(uParam1, "Tonya5", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_156(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_157(int iParam0)
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

struct<2> func_158(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_159(iParam0) };
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

struct<2> func_159(int iParam0)
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

int func_160()
{
	if (func_163() && !func_164())
	{
		return 1;
	}
	if (func_162() && func_161())
	{
		return 1;
	}
	return 0;
}

bool func_161()
{
	return Global_111576 > 0;
}

int func_162()
{
	if (Global_95877 != -1)
	{
		return 1;
	}
	return 0;
}

int func_163()
{
	if (Global_95877 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_89743[Global_95877 /*34*/].f_15, 20);
	}
	return 0;
}

int func_164()
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

int func_165()
{
	if (!func_125(5))
	{
		return 1;
	}
	if (func_160())
	{
		return 1;
	}
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (SYSTEM::VMAG2(unk_0x97C0B1E5FCD8E08A(unk_0x9B0761B4C3EB8BC7())) > 1369f && !func_164())
		{
			return 0;
		}
	}
	if (func_154(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_166()
{
	if ((Global_111847 == func_40() && unk_0xA706863F1E1DD66C()) && Global_111848)
	{
		return 1;
	}
	return 0;
}

void func_167(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_169(iParam0);
	unk_0x92B2940A0A0441A9(0);
	unk_0x659A1C3A1508626C(1);
	Global_111844 = 0;
	func_168();
}

void func_168()
{
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			unk_0x410A1E7AD7D5C774(unk_0x36FE6D3220816ADA(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0)), 1);
		}
		unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 32, 0);
	}
}

void func_169(int iParam0)
{
	Global_111847 = iParam0;
}

int func_170(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
		iParam3 = func_40();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_211())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			Var1 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1) };
			if (SYSTEM::VMAG2(unk_0x97C0B1E5FCD8E08A(unk_0x9B0761B4C3EB8BC7())) > 1369f && !func_164())
			{
				return 0;
			}
		}
		if (!Global_111858.f_9081)
		{
			return 0;
		}
		if (func_16(0))
		{
			return 0;
		}
		if (func_160())
		{
			return 0;
		}
		if (func_210())
		{
			return 0;
		}
		if (Global_111847 != -1)
		{
			return 0;
		}
		if (func_33(func_45()))
		{
			if (func_154(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()) && !bParam6)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_209(iParam3))
		{
			return 0;
		}
		if (func_33(func_45()))
		{
			if (func_208(func_45()) == 4 || func_208(func_45()) == 5)
			{
				return 0;
			}
		}
		if (func_33(func_45()))
		{
			if (!func_207(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_206(Global_111858.f_24991.f_43[iParam3]))
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
		if (func_205())
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
		if (!func_196(4))
		{
			return 0;
		}
		if (!func_125(5))
		{
			return 0;
		}
		if (func_195(iParam3, iParam4) && !bParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_195(0, 0))
		{
			return 0;
		}
		if (Global_31114)
		{
			return 0;
		}
		if (func_209(30) && !func_195(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_33(func_45()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_111858.f_2359.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_111858.f_2359.f_539.f_2296[iVar4];
				if (func_194(iVar8))
				{
					if (func_172(iVar4))
					{
						if (!func_171(Var5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0), Var5) < (210f * 210f))
							{
								if (func_45() != iVar4)
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

bool func_171(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_172(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_111858.f_2359.f_539.f_2296[iParam0];
	return func_173(iVar0);
}

int func_173(int iParam0)
{
	return func_174(iParam0, 1);
}

int func_174(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_194(iParam0))
	{
		return 0;
	}
	func_175(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_175(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_176(func_187(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_176(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_186(iParam0, iParam1))
	{
		iVar0 = func_185(iParam1);
		iVar1 = func_183(iParam0);
		iVar2 = (func_183(iParam0) - func_183(iParam1));
		iVar3 = (func_185(iParam0) - func_185(iParam1));
		iVar4 = (func_182(iParam0) - func_182(iParam1));
		iVar5 = (func_181(iParam0) - func_181(iParam1));
		iVar6 = (func_180(iParam0) - func_180(iParam1));
		iVar7 = (func_179(iParam0) - func_179(iParam1));
	}
	else
	{
		iVar0 = func_185(iParam0);
		iVar1 = func_183(iParam1);
		iVar2 = (func_183(iParam1) - func_183(iParam0));
		iVar3 = (func_185(iParam1) - func_185(iParam0));
		iVar4 = (func_182(iParam1) - func_182(iParam0));
		iVar5 = (func_181(iParam1) - func_181(iParam0));
		iVar6 = (func_180(iParam1) - func_180(iParam0));
		iVar7 = (func_179(iParam1) - func_179(iParam0));
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
		iVar4 = (iVar4 + func_178(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_177(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_177(float fParam0, float fParam1, float fParam2)
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

int func_178(int iParam0, int iParam1)
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

int func_179(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_180(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_181(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_182(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_183(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_184(unk_0xCE990E643CD9D0E5(iParam0, 31), -1, 1)) + 2011;
}

int func_184(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_185(int iParam0)
{
	return iParam0 & 15;
}

int func_186(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_194(iParam1) || !func_194(iParam0))
	{
		return 1;
	}
	iVar0 = func_183(iParam0);
	iVar1 = func_183(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_185(iParam0);
	iVar1 = func_185(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_182(iParam0);
	iVar1 = func_182(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_181(iParam0);
	iVar1 = func_181(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_180(iParam0);
	iVar1 = func_180(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_179(iParam0);
	iVar1 = func_179(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_187()
{
	var uVar0;
	
	func_193(&uVar0, unk_0x1D3A3697182AD8B3());
	func_192(&uVar0, unk_0x81F2E25F8C019191());
	func_191(&uVar0, unk_0x1F596C965B00E290());
	func_190(&uVar0, unk_0x371CFD525753F70C());
	func_189(&uVar0, unk_0xF225116F449A5CC6());
	func_188(&uVar0, unk_0x2E48CFA70ABFC06A());
	return uVar0;
}

void func_188(var uParam0, int iParam1)
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

void func_189(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_190(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_185(*uParam0);
	iVar1 = func_183(*uParam0);
	if (iParam1 < 1 || iParam1 > func_178(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_191(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_192(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_193(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_194(int iParam0)
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
	iVar0 = func_179(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_180(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_181(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_183(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_185(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_182(iParam0);
	if (iVar5 < 1 || iVar5 > func_178(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_195(int iParam0, int iParam1)
{
	if (unk_0xCE990E643CD9D0E5(Global_111858.f_24991.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_196(int iParam0)
{
	int iVar0;
	
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				iVar0 = func_45();
				if (!func_33(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x117A56F7403FC6D2(unk_0x460153A63B9477BC()) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0x11B7C25143EE2F29(unk_0x9B0761B4C3EB8BC7())) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0)) || func_204()) || Global_110905) || Global_30970) || func_203()) || func_84(8, -1)) || func_202()) || func_201()) || func_200()) || func_199()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1) || func_204()) || Global_30970) || func_203()) || func_84(8, -1)) || func_200()) || func_202()) || func_201()) || func_199()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x117A56F7403FC6D2(unk_0x460153A63B9477BC()) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0x11B7C25143EE2F29(unk_0x9B0761B4C3EB8BC7())) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0)) || func_204()) || Global_110905) || Global_30970) || func_203()) || func_84(8, -1)) || func_200()) || func_202()) || func_201()) || func_199()) || Global_111858.f_7684.f_919[iVar0] == 5) || Global_42178 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7()) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0)) || func_204()) || Global_110905) || Global_30970) || func_203()) || func_84(8, -1)) || func_202()) || func_201()) || func_199()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_204() || unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) > 0) || func_84(8, -1)) || func_199()) || func_198()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_84(8, -1) || func_202()) || func_201()) || func_198()) || func_197())
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
							if ((((((((((((((unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0) || unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) > 0) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || func_204()) || Global_30970) || func_203()) || func_84(8, -1)) || func_201()) || func_200()) || func_199()) || Global_111858.f_7684.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0) || !unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC())) || !unk_0x117A56F7403FC6D2(unk_0x460153A63B9477BC())) || !unk_0x87F0CB19476706C3()) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || func_204()) || func_201()) || Global_110905) || Global_30970) || func_203()) || Global_42801) || func_84(8, -1)) || func_200()) || func_198()) || func_199()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0) || !unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC())) || !unk_0x117A56F7403FC6D2(unk_0x460153A63B9477BC())) || !unk_0x87F0CB19476706C3()) || unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0)) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 1)) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0x9D7D76BBBFE285E0(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || func_204()) || Global_110905) || Global_30970) || func_203()) || func_84(8, -1)) || func_200()) || func_198()) || func_202()) || func_201()) || func_199())
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

var func_197()
{
	return Global_98994.f_1;
}

int func_198()
{
	if (Global_95877 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_89743[Global_95877 /*34*/].f_15, 13);
	}
	return 0;
}

int func_199()
{
	if (unk_0x7B70881748D166CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_200()
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

bool func_201()
{
	return Global_99007.f_352 > 0;
}

bool func_202()
{
	return Global_99007.f_351 > 0;
}

var func_203()
{
	return Global_1312896;
}

int func_204()
{
	if (!unk_0x25DDB354A40FFCDB())
	{
		return Global_96433.f_44 == 1;
	}
	return 0;
}

int func_205()
{
	func_82();
	if (Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_206(int iParam0)
{
	return func_186(func_187(), iParam0);
}

int func_207(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_45();
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

int func_208(int iParam0)
{
	if (!func_33(iParam0))
	{
		return 7;
	}
	return Global_111858.f_7684.f_919[iParam0];
}

bool func_209(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_211())
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

int func_210()
{
	var uVar0;
	
	if (Global_31118)
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			uVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
			if (unk_0x80FF6C016CDB0FAF(uVar0, 0))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(unk_0x10D3F7E169A49C44(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_211()
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

void func_212()
{
	int iVar0;
	
	if (iLocal_162)
	{
		func_225(0);
		unk_0x7C58E35D84128447();
		unk_0x296C8A46F264E8F7("RE6_BOTH_DEAD_OS");
		if (iLocal_145 || iLocal_165)
		{
			if (Global_31209)
			{
				unk_0x21723EF7B2FCC4CC("AC_STOP");
			}
			else
			{
				unk_0x21723EF7B2FCC4CC("RE6_END");
			}
		}
		func_224();
		unk_0xEFBCE8F8316F89EA(255, iLocal_177, 1862763509);
		unk_0xEFBCE8F8316F89EA(255, 1862763509, iLocal_177);
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
			{
				unk_0x694113444F21E39F(iLocal_53, 317, 1);
				if (!unk_0x47DBF174A0CB9D55(iLocal_53, 0))
				{
					unk_0x9EC7E133F41FCEB6(iLocal_53);
				}
				if (unk_0x7DA97DBB7F7D2DE5(iLocal_53))
				{
					unk_0x59478CBBF96AF7D1(iLocal_53);
				}
				unk_0x4E65320BC9AD521C(iLocal_53, 0);
				unk_0x0DC39BE87E4C5599(iLocal_53, 1);
			}
			else if (!unk_0xA59F96B50B97E63C(iLocal_53, 0))
			{
				unk_0x69749B92635E3295(iLocal_53, 1);
				unk_0x81DE096AEF6BD8E7(iLocal_53, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_54)
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_54[iVar0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				unk_0x1210730BDCD39CB4(iLocal_54[iVar0]);
				if (iLocal_69 || iLocal_76)
				{
					unk_0x8FF9CE1C0F94F59A(iLocal_54[iVar0], unk_0x9B0761B4C3EB8BC7(), 0, 16);
				}
				else
				{
					unk_0x8B18A80E8EB15510(iLocal_54[iVar0], unk_0x9B0761B4C3EB8BC7(), 1000f, -1, 0, 0);
					func_110();
				}
				unk_0xCBA6B2B569DCAFD8(iLocal_54[iVar0], 1);
			}
			iVar0++;
		}
		unk_0x315F7D8C33F0AB37(&(uLocal_61[0]));
		unk_0x315F7D8C33F0AB37(&(uLocal_61[1]));
		if (unk_0xAE06B9E39EBDE049(iLocal_58))
		{
			unk_0xE730EAF558C97567(&iLocal_58);
		}
		if (unk_0xAE06B9E39EBDE049(iLocal_60))
		{
			if (unk_0xB77B1396EAA80D8F(iLocal_60))
			{
				unk_0x1F8106DB8796859F(iLocal_60, 1, 1);
			}
			unk_0x95178967C65CAD85(&iLocal_60);
		}
		if (unk_0x8F678487EEBD8CE4(uLocal_163))
		{
			unk_0x93370FA10F15BE44(&uLocal_163);
		}
		iLocal_64 = 0;
		while (iLocal_64 <= 1)
		{
			if (unk_0x8F678487EEBD8CE4(uLocal_111[iLocal_64]))
			{
				unk_0x93370FA10F15BE44(&(uLocal_111[iLocal_64]));
			}
			iLocal_64++;
		}
		if (unk_0x8F678487EEBD8CE4(uLocal_114))
		{
			unk_0x93370FA10F15BE44(&uLocal_114);
		}
		if (unk_0x40397A9A17EEC1C5(uLocal_77))
		{
			unk_0xB8B0F7C8C1548C5B(uLocal_77, 0);
		}
		unk_0x40ECEB892E6BDDDB(5, 1);
		unk_0x40ECEB892E6BDDDB(3, 1);
		unk_0x34FEEAC2548C3789(1f);
		unk_0xAF7D4BF357E8B79E(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 1, 1);
	}
	func_213(-1);
	unk_0xD39E529EBE5DB04F();
}

void func_213(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_166())
	{
		func_217(iParam0);
		unk_0x694F632EFD1F47D0(0, 0);
		Global_111849 = unk_0x578C4EF320340AF7();
		func_216(30000);
		StringCopy(&cVar0, func_215(Global_111847, 1), 64);
		if (func_39(Global_111847) > 0)
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
	func_214(&Global_31027);
	Global_111848 = 0;
	func_169(-1);
}

void func_214(var uParam0)
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

char* func_215(int iParam0, bool bParam1)
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

void func_216(int iParam0)
{
	Global_42182 = (unk_0x578C4EF320340AF7() + iParam0);
}

void func_217(int iParam0)
{
	func_218(iParam0, 0, func_223(iParam0));
}

void func_218(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_187();
	func_221(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_220(iParam0, &uVar0);
	Var1 = { func_219(&uVar0) };
}

struct<16> func_219(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_181(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_180(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_179(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_182(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_185(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_183(*uParam0), 64);
	return Var0;
}

void func_220(int iParam0, var uParam1)
{
	Global_111858.f_24991.f_43[iParam0] = *uParam1;
}

void func_221(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_183(*uParam0);
	iVar1 = func_185(*uParam0);
	iVar2 = func_182(*uParam0);
	iVar3 = func_181(*uParam0);
	iVar4 = func_180(*uParam0);
	iVar5 = func_179(*uParam0);
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
	iVar6 = func_178(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_178(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_222(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_222(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_193(uParam0, iParam1);
	func_192(uParam0, iParam2);
	func_191(uParam0, iParam3);
	func_189(uParam0, iParam5);
	func_190(uParam0, iParam4);
	func_188(uParam0, iParam6);
}

int func_223(int iParam0)
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

void func_224()
{
	Global_31205 = 0;
	Global_31206 = 0;
	Global_31208 = 0;
	Global_31209 = 0;
	Global_31210 = 0;
}

void func_225(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 54)
	{
		func_142(iVar0, bParam0);
		iVar0++;
	}
}

