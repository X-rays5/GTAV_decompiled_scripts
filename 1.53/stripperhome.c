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
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	struct<3> Local_63 = { 0, 0, 0 } ;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	bool bLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	var uLocal_76[1] = { 0 };
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 16;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
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
	var uLocal_269 = 1097859072;
	var uLocal_270 = 1500;
	var uLocal_271 = 45;
	var uLocal_272 = 1103626240;
	var uLocal_273 = 5;
	var uLocal_274[1] = { 0 };
	char* sLocal_276 = NULL;
	char* sLocal_277 = NULL;
	var uLocal_278 = 1;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282[1] = { 0 };
	var uLocal_284[4] = { 0, 0, 0, 0 };
	struct<9> Local_289 = { 0, 0, 0, 0, 0, 0, 0, 21, 6 } ;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	struct<3> Local_302 = { 0, 0, 0 } ;
	struct<3> Local_305 = { 0, 0, 0 } ;
	struct<3> Local_308 = { 0, 0, 0 } ;
	struct<3> Local_311 = { 0, 0, 0 } ;
	struct<3> Local_314 = { 0, 0, 0 } ;
	struct<3> Local_317 = { 0, 0, 0 } ;
	struct<3> Local_320 = { 0, 0, 0 } ;
	struct<3> Local_323 = { 0, 0, 0 } ;
	float fLocal_326 = 0f;
	float fLocal_327 = 0f;
	float fLocal_328 = 0f;
	float fLocal_329 = 0f;
	int iLocal_330 = 0;
	var uLocal_331 = 0;
	int iLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	int iLocal_335 = 0;
	bool bLocal_336 = 0;
	bool bLocal_337 = 0;
	int iLocal_338 = 0;
	var uLocal_339 = 0;
	int iLocal_340 = 0;
	struct<5> ScriptParam_0 = { 1, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
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
	Local_63 = { 500f, 500f, 500f };
	fLocal_329 = -1f;
	iLocal_332 = -1;
	bLocal_336 = true;
	unk_0x5F82526B41A5EBCE("stripperhome");
	unk_0x227BB9ED71ECB6E8(1);
	unk_0x793B849DD1F47DB8(unk_0x460153A63B9477BC(), 1);
	if (unk_0xED06FD5709A59F02(75))
	{
		func_303();
	}
	bLocal_337 = ScriptParam_0.f_5;
	if (bLocal_337)
	{
		unk_0xA88557896B79E30D(32, 0, -1);
		func_298(0, -1, 0);
		unk_0x9CAB3AADEB4C2F8D(1);
		unk_0x3A396632EB359434(0);
	}
	uLocal_76[0] = ScriptParam_0[0];
	Global_110883.f_1 = uLocal_76[0];
	bVar0 = false;
	bVar1 = true;
	iVar2 = unk_0x1F596C965B00E290();
	if (func_297() && ScriptParam_0.f_4)
	{
		bVar1 = false;
		if (iVar2 > 14 && iVar2 < 22)
		{
			bVar0 = true;
		}
	}
	while (((!func_268(&ScriptParam_0, bVar0) && iLocal_74 != 6) && iLocal_74 != 5) && (iLocal_74 != -1 || !func_267(uLocal_333, 1024)))
	{
		func_259(0);
		SYSTEM::WAIT(0);
	}
	unk_0x74528AC0906CBABE(func_258(0, 0));
	unk_0x74528AC0906CBABE(func_258(1, 0));
	if (!bVar1)
	{
		iLocal_74 = 2;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_335 > 0)
		{
			func_256();
			iLocal_335 = (iLocal_335 - SYSTEM::ROUND((unk_0x9E3DAF75EFC49F5B() * 1000f)));
		}
		switch (iLocal_74)
		{
			case -1:
				func_255();
				break;
			
			case 0:
				func_215(1);
				break;
			
			case 1:
				func_108();
				break;
			
			case 2:
				func_215(0);
				break;
			
			case 3:
				func_90();
				break;
			
			case 4:
				func_38(bLocal_336);
				break;
			
			case 5:
				func_11();
				break;
			
			case 6:
				if (!func_10(&uLocal_261))
				{
					func_7(&uLocal_261);
				}
				else if (func_1(&uLocal_261, 7.5f))
				{
					func_303();
				}
				break;
		}
	}
}

int func_1(var uParam0, float fParam1)
{
	if (func_3(uParam0, fParam1))
	{
		func_2(uParam0);
		return 1;
	}
	return 0;
}

void func_2(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_3(var uParam0, float fParam1)
{
	if (func_10(uParam0))
	{
		if (func_4(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_4(var uParam0)
{
	if (func_10(uParam0))
	{
		if (func_6(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5(unk_0xCE990E643CD9D0E5(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_5(bool bParam0)
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

bool func_6(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, 2);
}

void func_7(var uParam0)
{
	if (!func_10(uParam0))
	{
		func_8(uParam0);
	}
}

void func_8(var uParam0)
{
	func_9(uParam0, 0f);
}

void func_9(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_5(unk_0xCE990E643CD9D0E5(*uParam0, 4)) - fParam1);
	unk_0xBE20AB8238688965(uParam0, 1);
	unk_0xD2459066EA58CE43(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_10(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, 1);
}

void func_11()
{
	if (!func_267(uLocal_333, 8192))
	{
		if (func_37())
		{
			func_26();
		}
		else
		{
			iLocal_74 = 6;
		}
	}
	if (func_267(uLocal_333, 16384))
	{
		if (func_12())
		{
			iLocal_74 = 6;
		}
	}
}

int func_12()
{
	if (unk_0xA59F96B50B97E63C(uLocal_274[0], 0))
	{
		return 1;
	}
	if (func_267(uLocal_333, 8192))
	{
		unk_0x8342E6CB98CD545C(uLocal_274[0], 60, 1);
		if (unk_0xC2169C00B643278B(uLocal_274[0], 96.8033f, -1287.597f, 28.2688f, 5f, 5f, 2f, 0, 1, 1) || func_25(unk_0x9B0761B4C3EB8BC7(), 96.8033f, -1287.597f, 28.2688f, 1) > 100f)
		{
			if (unk_0x8865B8E834909D76(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), 0))
			{
				unk_0x2D4BE3F34B14D5F0(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, 1, 0f, 0);
			}
			if (unk_0x40397A9A17EEC1C5(uLocal_284[0]))
			{
				if (unk_0x09F689AE170A62EC(uLocal_284[0]))
				{
					func_13(1, 1, 0);
					unk_0x3ED9330214992278(false, 0, 3000, 1, 0, 0);
					unk_0xB8B0F7C8C1548C5B(uLocal_284[0], 1);
				}
			}
			unk_0x586DDC617E714637(&(uLocal_274[0]));
			return 1;
		}
	}
	return 0;
}

void func_13(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0xDDEDC06C88DA4E04(unk_0x2639A2323BEA8CC6(), true, 0);
	}
	unk_0x655E74CA0A2E245B(1);
	func_15(0, 1, iParam2, 0, 0, 0, 0);
	if (bParam1)
	{
		unk_0x8CFF639CEFF5CF16(1);
		unk_0x644F1D0C5427A242(1);
	}
	func_14(23, 0);
}

void func_14(int iParam0, bool bParam1)
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

void func_15(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x967251943AD606D5(unk_0x460153A63B9477BC(), 0);
		unk_0xAF3D0236D181BE08(unk_0x460153A63B9477BC(), 1);
		unk_0x23F7D177F71818C3(unk_0x460153A63B9477BC(), 1);
		func_24(1);
		unk_0x86529CF5C6F9D6AE();
		unk_0x6D3823E5CADC313B();
		if (Global_19681.f_1 > 3 && !bParam6)
		{
			if (unk_0x6B12213471F330A3())
			{
				unk_0xBE4122AC23440E7D(0);
			}
			if (!func_23())
			{
				Global_19681.f_1 = 3;
			}
			Global_21005 = 5;
		}
		func_22(1, iParam3, iParam2, 0);
		Global_61723 = 1;
		Global_74033 = 1;
		Global_76831 = 1;
	}
	else
	{
		func_24(0);
		unk_0x51C14866CB8A57BF();
		Global_61723 = 0;
		if (bParam1)
		{
			unk_0x86A985A804621EB7();
		}
		unk_0xAF3D0236D181BE08(unk_0x460153A63B9477BC(), 0);
		unk_0x23F7D177F71818C3(unk_0x460153A63B9477BC(), 0);
		func_22(0, iParam3, iParam2, 0);
		if (unk_0x25DDB354A40FFCDB())
		{
			if (((((!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && !func_20(unk_0x460153A63B9477BC())) && !func_17(unk_0x460153A63B9477BC(), 0)) && !func_16()) && !bParam4) && !bParam5)
			{
				unk_0x0312E5501F93E5AB(unk_0x9B0761B4C3EB8BC7(), 0);
			}
		}
		else if (((!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && !func_20(unk_0x460153A63B9477BC())) && !bParam4) && !bParam5)
		{
			unk_0x0312E5501F93E5AB(unk_0x9B0761B4C3EB8BC7(), 0);
		}
		Global_76831 = 0;
	}
}

bool func_16()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_18, 14);
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		bVar0 = func_18(-1, 0) == 8;
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

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_19()
{
	return Global_1312763;
}

int func_20(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_21())
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

bool func_21()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

int func_22(int iParam0, var uParam1, var uParam2, int iParam3)
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

int func_23()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_24(int iParam0)
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

float func_25(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, 0) };
	}
	return unk_0x272784C60C397DB6(Var0, Param1, iParam4);
}

void func_26()
{
	var uVar0;
	
	func_29();
	if (unk_0x8865B8E834909D76(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), 0))
	{
		unk_0x2D4BE3F34B14D5F0(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, 0, 0f, 0);
	}
	func_27(&uLocal_333, 16384);
	unk_0x6A8F948698B360B4(uLocal_274[0], 0);
	unk_0x694113444F21E39F(uLocal_274[0], 104, 1);
	unk_0x9DC06E2A59C5AEBB(&uVar0);
	unk_0x3C1B180EE30D36EF(0, 98.2041f, -1291.252f, 28.2688f, 1f, -1, 0.25f, 1, 1193033728);
	unk_0x3C1B180EE30D36EF(0, 107.6303f, -1304.742f, 27.7688f, 1f, -1, 0.25f, 0, 1193033728);
	unk_0x756D74A3EF0AB788(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, 15000, 1, 0, 0, 0, 0);
	unk_0x19F29730874AD6F1(uVar0);
	unk_0x9B6EC2CECE1010EF(uLocal_274[0], uVar0);
	unk_0x4F83FEE4454169D4(&uVar0);
	func_27(&uLocal_333, 8192);
}

void func_27(var uParam0, int iParam1)
{
	func_28(uParam0, iParam1);
}

void func_28(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_29()
{
	if (!unk_0x1D88F87079AF2FA7(uLocal_274[0]) && func_36(1, 0, 1))
	{
		func_30(0, 0, 0);
		uLocal_284[0] = unk_0x45DEF9871BA3107A("DEFAULT_SCRIPTED_CAMERA", 90.1007f, -1281.573f, 28.6661f, 2.4422f, 0f, -113.4013f, 45f, 1, 2);
		unk_0x3ED9330214992278(true, 0, 3000, 1, 0, 0);
	}
}

void func_30(int iParam0, int iParam1, int iParam2)
{
	unk_0xDDEDC06C88DA4E04(unk_0x2639A2323BEA8CC6(), false, iParam0);
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		unk_0xCFF81C0C8D63E62E(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), 15f);
	}
	unk_0x655E74CA0A2E245B(iParam1);
	func_31(0);
	func_15(1, 1, iParam2, 0, 0, 0, 0);
	unk_0x8CFF639CEFF5CF16(0);
	unk_0x644F1D0C5427A242(0);
	func_14(23, 1);
}

void func_31(int iParam0)
{
	if (func_35())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_34())
		{
			func_32(1, 1);
		}
		else
		{
			func_32(0, 0);
		}
	}
	if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
	{
		unk_0xBE20AB8238688965(&Global_7552, 16);
	}
	if (unk_0x6B12213471F330A3())
	{
		unk_0xBE4122AC23440E7D(0);
	}
	Global_21005 = 5;
	if (iParam0 == 1)
	{
		unk_0xBE20AB8238688965(&Global_7551, 30);
	}
	else
	{
		unk_0xD2459066EA58CE43(&Global_7551, 30);
	}
	if (!func_23())
	{
		Global_19681.f_1 = 3;
	}
}

void func_32(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_33(0))
		{
			Global_19864 = 1;
			if (bParam1)
			{
				unk_0x1F1B1269BB6217F7(&Global_19618);
			}
			Global_19609 = { Global_19627[Global_19626 /*3*/] };
			unk_0x241AFEE3D5B4FF70(Global_19609);
		}
	}
	else if (Global_19864 == 1)
	{
		Global_19864 = 0;
		Global_19609 = { Global_19634[Global_19626 /*3*/] };
		if (bParam1)
		{
			unk_0x241AFEE3D5B4FF70(Global_19618);
		}
		else
		{
			unk_0x241AFEE3D5B4FF70(Global_19609);
		}
	}
}

int func_33(int iParam0)
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

bool func_34()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

bool func_35()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 19);
}

int func_36(bool bParam0, bool bParam1, bool bParam2)
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

int func_37()
{
	if ((uLocal_76[0] == 8 || uLocal_76[0] == 9) || func_25(uLocal_274[0], 96.12f, -1284.91f, 29.43f, 1) > 10f)
	{
		return 0;
	}
	return 1;
}

void func_38(bool bParam0)
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	
	func_65();
	if (bParam0)
	{
		Var0 = { Local_308 };
	}
	else
	{
		func_64(&Var0, &uVar3, 0);
	}
	func_61(Var0);
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (unk_0x47DBF174A0CB9D55(uLocal_274[0], 0))
		{
			iVar4 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
			if (unk_0xAE06B9E39EBDE049(iVar4) && !unk_0xA59F96B50B97E63C(iVar4, 0))
			{
				if (iLocal_338)
				{
					if (func_59(iVar4, 4f, 1, 1056964608, 0, 1, 0))
					{
						func_58();
						unk_0x0AB756271BADC8DF(uLocal_274[0], 0, 16777216);
						func_39();
					}
				}
				else if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Var0, 4f, 4f, 2f, 1, 1, 2))
				{
					iLocal_338 = 1;
				}
			}
		}
	}
}

void func_39()
{
	func_57();
	func_50(295, 0, 0);
	func_40(0);
	func_303();
}

void func_40(bool bParam0)
{
	struct<8> Var0[3];
	struct<6> Var25[3];
	
	if (!func_47())
	{
		return;
	}
	if (!iLocal_69)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Location", 32);
	StringCopy(&(Var0[2 /*8*/]), "Type", 32);
	if (bParam0)
	{
		StringCopy(&(Var25[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var25[0 /*6*/]), "SP", 24);
	}
	StringCopy(&(Var25[1 /*6*/]), "City", 24);
	StringCopy(&(Var25[2 /*6*/]), "????", 24);
	if (func_45(200, &Var25, &Var0, 3, -1, 0, 0))
	{
		unk_0x5DFCCEA807F4355D(131, func_44(), 0f);
		unk_0x5DFCCEA807F4355D(108, func_43(), 0f);
		unk_0x5DFCCEA807F4355D(102, func_42(), 0f);
		unk_0x5DFCCEA807F4355D(8, func_41(), 0f);
	}
	iLocal_66 = 0;
	iLocal_67 = 0;
	iLocal_68 = 0;
	iLocal_69 = 0;
}

int func_41()
{
	return iLocal_67;
}

int func_42()
{
	return iLocal_68;
}

int func_43()
{
	return iLocal_66;
}

int func_44()
{
	return 0;
}

int func_45(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!unk_0x0EB6C63A09FD9DF1())
	{
	}
	if ((!unk_0x8EF2E8B1E5E21C71() && (unk_0x51C955B55E9F6E86() || !unk_0xAC9BDC8868BA314A())) && unk_0xFD2965A38DED101B())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0xE2FBD13450B2DA21())
			{
				Var69 = { func_46(unk_0x460153A63B9477BC()) };
				if (unk_0xBF9EC1ED7E386622(&Var69))
				{
					if (unk_0x192BD21E18525C69(&uVar82, 35, &Var69))
					{
						Var0.f_1 = uVar82;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar68 = 0;
		while (iVar68 < iParam3)
		{
			Var0.f_2.f_1[iVar68 /*16*/] = { *(uParam2[iVar68 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar68 /*16*/].f_8), {*(uParam1[iVar68 /*6*/])}, 8);
			iVar68++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0x25DDB354A40FFCDB() && Global_2460478.f_3)
			{
				unk_0xB88FC77A56665324(&Var0, &(Global_1663920.f_10));
			}
			else
			{
				unk_0x06271DA851DE126B(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x8EF2E8B1E5E21C71())
	{
	}
	if (!unk_0x51C955B55E9F6E86())
	{
	}
	if (unk_0xAC9BDC8868BA314A())
	{
	}
	if (!unk_0xFD2965A38DED101B())
	{
	}
	return 0;
}

struct<13> func_46(int iParam0)
{
	struct<13> Var0;
	
	unk_0x2BDD80E79441BD36(iParam0, &Var0, 13);
	return Var0;
}

int func_47()
{
	if ((unk_0x0EB6C63A09FD9DF1() && unk_0x011A67D2B195B6EB()) && func_48())
	{
		return 1;
	}
	return 0;
}

int func_48()
{
	if (func_49())
	{
		return 0;
	}
	if (unk_0x70E5C9630A26FB40() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_49()
{
	return Global_2462752;
}

void func_50(int iParam0, int iParam1, int iParam2)
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
		func_56((891 + iParam0), 1, -1, 1);
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
		Global_111858.f_10190[iParam0 /*12*/].f_10 = iParam1;
		Global_111858.f_10190[iParam0 /*12*/].f_11 = iParam2;
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
		func_51();
	}
}

void func_51()
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
		func_55(13, SYSTEM::FLOOR(Global_111858.f_10190.f_3853));
	}
	if (!unk_0xC4A02490EB1F450B())
	{
		if (!Global_76833)
		{
			if (func_54() == 2 == 0 && !unk_0x25DDB354A40FFCDB())
			{
				if (unk_0x70E5C9630A26FB40())
				{
					Global_111592 = 0;
				}
				if (!Global_61717)
				{
					func_52();
				}
			}
		}
	}
}

int func_52()
{
	if (func_53(0))
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

bool func_53(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

int func_54()
{
	return Global_30968;
}

int func_55(int iParam0, int iParam1)
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

int func_56(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_19();
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

void func_57()
{
	iLocal_68++;
	iLocal_69 = 1;
}

void func_58()
{
	if (unk_0xAE06B9E39EBDE049(uLocal_274[0]) && !unk_0xA59F96B50B97E63C(uLocal_274[0], 0))
	{
		unk_0x44225B42FE388400(uLocal_274[0], 1);
		if (unk_0x7DA97DBB7F7D2DE5(uLocal_274[0]))
		{
			unk_0x59478CBBF96AF7D1(uLocal_274[0]);
		}
	}
}

int func_59(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x779660A9E5364C4D(0, 71, 1);
	unk_0x779660A9E5364C4D(0, 72, 1);
	unk_0x779660A9E5364C4D(0, 76, 1);
	unk_0x779660A9E5364C4D(0, 73, 1);
	unk_0x779660A9E5364C4D(0, 59, 1);
	unk_0x779660A9E5364C4D(0, 60, 1);
	if (bParam5)
	{
		unk_0x779660A9E5364C4D(0, 75, 1);
	}
	unk_0x779660A9E5364C4D(0, 80, 1);
	if (!bParam6)
	{
		unk_0x779660A9E5364C4D(0, 69, 1);
		unk_0x779660A9E5364C4D(0, 70, 1);
		unk_0x779660A9E5364C4D(0, 68, 1);
	}
	unk_0x779660A9E5364C4D(0, 74, 1);
	unk_0x779660A9E5364C4D(0, 86, 1);
	unk_0x779660A9E5364C4D(0, 81, 1);
	unk_0x779660A9E5364C4D(0, 82, 1);
	unk_0x779660A9E5364C4D(0, 138, 1);
	unk_0x779660A9E5364C4D(0, 136, 1);
	unk_0x779660A9E5364C4D(0, 114, 1);
	unk_0x779660A9E5364C4D(0, 107, 1);
	unk_0x779660A9E5364C4D(0, 110, 1);
	unk_0x779660A9E5364C4D(0, 89, 1);
	unk_0x779660A9E5364C4D(0, 89, 1);
	unk_0x779660A9E5364C4D(0, 87, 1);
	unk_0x779660A9E5364C4D(0, 88, 1);
	unk_0x779660A9E5364C4D(0, 113, 1);
	unk_0x779660A9E5364C4D(0, 115, 1);
	unk_0x779660A9E5364C4D(0, 116, 1);
	unk_0x779660A9E5364C4D(0, 117, 1);
	unk_0x779660A9E5364C4D(0, 118, 1);
	unk_0x779660A9E5364C4D(0, 119, 1);
	unk_0x779660A9E5364C4D(0, 352, 1);
	unk_0x779660A9E5364C4D(0, 131, 1);
	unk_0x779660A9E5364C4D(0, 132, 1);
	unk_0x779660A9E5364C4D(0, 123, 1);
	unk_0x779660A9E5364C4D(0, 126, 1);
	unk_0x779660A9E5364C4D(0, 129, 1);
	unk_0x779660A9E5364C4D(0, 130, 1);
	unk_0x779660A9E5364C4D(0, 133, 1);
	unk_0x779660A9E5364C4D(0, 134, 1);
	unk_0xB78DC40D63D4FBA3();
	func_60(iParam0);
	if ((unk_0x578C4EF320340AF7() - Global_29) > 500)
	{
		unk_0xD4C86DEC93F19FB0(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x578C4EF320340AF7();
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		if (unk_0x0D77CDCF403AEBD2(unk_0xF3A639BEE7AADF55(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_60(int iParam0)
{
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		if (unk_0xAADB7E66E4BD2B67(iParam0))
		{
			if (unk_0xC1067169688057A8(iParam0))
			{
				unk_0x348DC18FDCA78997(iParam0, 0);
			}
		}
	}
}

void func_61(struct<3> Param0)
{
	int iVar0;
	
	if (unk_0x8F678487EEBD8CE4(uLocal_281))
	{
		unk_0x93370FA10F15BE44(&uLocal_281);
	}
	if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		return;
	}
	iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
	if (unk_0xAE06B9E39EBDE049(iVar0) && !unk_0xA59F96B50B97E63C(iVar0, 0))
	{
		if (unk_0x47DBF174A0CB9D55(uLocal_274[0], 0))
		{
			if (unk_0xE0B3BC41DDA88DF0(uLocal_274[0], unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), 0))
			{
				if (!unk_0x8F678487EEBD8CE4(uLocal_280))
				{
					uLocal_280 = func_62(Param0, 1);
				}
			}
		}
	}
}

var func_62(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x6820C712C1DD618A(Param0);
	unk_0xFA81E0FBD7F5ACA0(uVar0, func_63(unk_0x25DDB354A40FFCDB(), 1f, 1f));
	unk_0x72BEFB9451782F60(uVar0, iParam3);
	return uVar0;
}

float func_63(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_64(var uParam0, var uParam1, bool bParam2)
{
	Local_317 = { Local_317 };
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (!bParam2)
			{
				*uParam0 = { 92.8829f, -1281.123f, 28.1845f };
				*uParam1 = 15f;
			}
			else
			{
				*uParam0 = { Local_314 };
				*uParam1 = fLocal_326;
			}
			Local_317 = { *uParam0 };
			break;
		
		case 8:
			if (!bParam2)
			{
				*uParam0 = { -1615.991f, 187.4827f, 59.1337f };
				*uParam1 = 217.5474f;
			}
			else
			{
				*uParam0 = { Local_314 };
				*uParam1 = fLocal_326;
			}
			Local_317 = { *uParam0 };
			break;
		
		case 9:
			if (!bParam2)
			{
				*uParam0 = { 1538.432f, 3776.85f, 33.5178f };
				*uParam1 = 225.8821f;
			}
			else
			{
				*uParam0 = { Local_314 };
				*uParam1 = fLocal_326;
			}
			Local_317 = { *uParam0 };
			break;
	}
}

void func_65()
{
	if (unk_0x5AEB5DDFFAD43CA5(uLocal_274[0]))
	{
		if (!unk_0xAE06B9E39EBDE049(uLocal_274[0]))
		{
		}
		else if (unk_0xA59F96B50B97E63C(uLocal_274[0], 0))
		{
		}
		func_66(0);
	}
}

void func_66(int iParam0)
{
	if ((uLocal_76[0] > -1 && uLocal_76[0] < 10) && iParam0 != 2)
	{
		func_88(uLocal_76[0], (func_89(uLocal_76[0]) / 2));
	}
	func_86();
	switch (iParam0)
	{
		case 0:
			func_84("SCLUB_HOME_D", uLocal_76[0]);
			func_88(uLocal_76[0], 0);
			func_72(uLocal_76[0], 1);
			iLocal_74 = 6;
			break;
		
		case 1:
			unk_0xB80B2936A29B2666();
			func_67("SCLUB_HOME_A", uLocal_76[0], 0);
			iLocal_74 = 5;
			break;
		
		case 2:
			iLocal_74 = 5;
			break;
		
		case 4:
			func_84("SCLUB_HOME_D3", uLocal_76[0]);
			iLocal_74 = 6;
			break;
		
		case 3:
			if (func_25(uLocal_274[0], 92.5861f, -1282.86f, 28.2548f, 1) < 10f)
			{
				iLocal_74 = 5;
			}
			else
			{
				iLocal_74 = 6;
			}
			break;
	}
}

void func_67(char* sParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	MemCopy(&uVar0, {func_71(iParam1)}, 6);
	if (!func_70(sParam0, &uVar0))
	{
		if (!bParam2)
		{
			func_69(sParam0, &uVar0, -1);
		}
		else
		{
			func_68(sParam0, &uVar0);
		}
	}
}

void func_68(var uParam0, var uParam1)
{
	unk_0x17751E107423AFE9(uParam0);
	unk_0x6A826E35A3096ED0(uParam1);
	unk_0x1A169149B3D18FCB(0, 1, 1, -1);
}

void func_69(var uParam0, var uParam1, int iParam2)
{
	unk_0x17751E107423AFE9(uParam0);
	unk_0x6A826E35A3096ED0(uParam1);
	unk_0x1A169149B3D18FCB(0, 0, 1, iParam2);
}

bool func_70(char* sParam0, var uParam1)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	unk_0x6A826E35A3096ED0(uParam1);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

struct<4> func_71(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "SCLUB_NM_", 16);
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

void func_72(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_27(&(Global_111858.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
	else
	{
		func_73(&(Global_111858.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
}

void func_73(var uParam0, int iParam1)
{
	func_74(uParam0, iParam1);
}

void func_74(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_75()
{
	int iVar0;
	
	iVar0 = func_77();
	switch (iVar0)
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
		
		default:
			switch (func_76(-1))
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				case 2:
					return 5;
					break;
				
				case 3:
					return 6;
					break;
				
				case 4:
					return 7;
					break;
				
				default:
					break;
			}
			break;
	}
	return 3;
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

int func_77()
{
	func_78();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_78()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_82(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_81(unk_0x9B0761B4C3EB8BC7());
			if (func_80(iVar0) && (!func_79(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_80(Global_111858.f_2359.f_539.f_4321))
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

bool func_79(int iParam0)
{
	return Global_41631 == iParam0;
}

bool func_80(int iParam0)
{
	return iParam0 < 3;
}

int func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(uParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_82(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_82(int iParam0)
{
	if (func_80(iParam0))
	{
		return func_83(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_83(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

void func_84(char* sParam0, int iParam1)
{
	var uVar0;
	
	MemCopy(&uVar0, {func_71(iParam1)}, 6);
	func_85(sParam0, &uVar0, 7500, 1);
}

void func_85(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xAEFB51FB8888AE0F(sParam0);
	unk_0x6A826E35A3096ED0(uParam1);
	unk_0x823A1D66E6A4D141(iParam2, 1);
}

void func_86()
{
	if (unk_0x8F678487EEBD8CE4(uLocal_281))
	{
		unk_0x93370FA10F15BE44(&uLocal_281);
	}
	if (unk_0x8F678487EEBD8CE4(uLocal_280))
	{
		unk_0x93370FA10F15BE44(&uLocal_280);
	}
	func_87();
}

void func_87()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (unk_0x8F678487EEBD8CE4(uLocal_282[iVar0]))
		{
			unk_0x93370FA10F15BE44(&(uLocal_282[iVar0]));
		}
		iVar0++;
	}
}

void func_88(int iParam0, int iParam1)
{
	Global_111858.f_243[func_75() /*53*/].f_2[iParam0 /*5*/] = iParam1;
}

int func_89(int iParam0)
{
	return Global_111858.f_243[func_75() /*53*/].f_2[iParam0 /*5*/];
}

void func_90()
{
	func_65();
	func_86();
	switch (iLocal_80)
	{
		case 0:
			if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				if (unk_0x47DBF174A0CB9D55(uLocal_274[0], 0))
				{
					if (!func_107("SCLUB_SECLUDED"))
					{
						func_106("SCLUB_SECLUDED");
					}
					if (func_105() && unk_0xF3A639BEE7AADF55(unk_0x9B0761B4C3EB8BC7()) == 0f)
					{
						unk_0xD289B55B6AADBA10(1);
						unk_0x131ED02492676000(func_100(uLocal_274[0], 0, 0));
						iLocal_80 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (func_93())
			{
				iLocal_80 = 2;
			}
			break;
		
		case 2:
			if (unk_0x16BC17A8EDC701A2(unk_0x9B0761B4C3EB8BC7(), 242628503) != 1)
			{
				func_256();
				if (unk_0x1F596C965B00E290() > 20 || unk_0x1F596C965B00E290() < 4)
				{
					bLocal_336 = false;
				}
				unk_0x05591EC8C770AA11(iLocal_45);
				func_91(bLocal_336);
				iLocal_74 = 4;
			}
			break;
	}
}

void func_91(bool bParam0)
{
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_84("SCLUB_HOME_GO", uLocal_76[0]);
			}
			else
			{
				func_92("SCLUB_CLUB_GO", 7500, 1);
			}
			break;
		
		case 8:
		case 9:
			func_92("SCLUB_HOME_GO3", 7500, 1);
			break;
	}
}

void func_92(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xAEFB51FB8888AE0F(sParam0);
	unk_0x823A1D66E6A4D141(iParam1, 1);
}

int func_93()
{
	if (unk_0xC614DDE265D18415(func_100(uLocal_274[0], 0, 0)))
	{
		func_94(uLocal_274[0], 0, 1, -1, 1);
		func_94(unk_0x9B0761B4C3EB8BC7(), 0, 0, -1, 1);
		return 1;
	}
	return 0;
}

void func_94(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	var uVar3;
	
	if (unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		return;
	}
	iVar0 = unk_0xA5D5B1042E8F47BD(iParam0, 1);
	if (!unk_0x80FF6C016CDB0FAF(iVar0, 0))
	{
		return;
	}
	iLocal_45 = unk_0xA860C15A1C027CBB();
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 1) && func_99(0, 1))
	{
		if (iLocal_45 != 4)
		{
			unk_0x05591EC8C770AA11(4);
		}
	}
	bVar1 = func_98(iVar0);
	sVar2 = func_100(iParam0, 0, 0);
	if (!unk_0xC614DDE265D18415(sVar2))
	{
		unk_0x131ED02492676000(sVar2);
	}
	else
	{
		unk_0x9DC06E2A59C5AEBB(&uVar3);
		unk_0x756D74A3EF0AB788(0, sVar2, func_95(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0, 0, 0, 0);
		unk_0x756D74A3EF0AB788(0, sVar2, func_95(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x756D74A3EF0AB788(0, sVar2, func_95(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0, 0, 0, 0);
		unk_0x756D74A3EF0AB788(0, sVar2, func_95(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x756D74A3EF0AB788(0, sVar2, func_95(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0, 0, 0, 0);
		unk_0x19F29730874AD6F1(uVar3);
		unk_0x9B6EC2CECE1010EF(iParam0, uVar3);
		if (bParam4)
		{
			unk_0x4F83FEE4454169D4(&uVar3);
		}
	}
}

char* func_95(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(18);
					}
					else
					{
						sVar0 = func_97(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(8);
				}
				else
				{
					sVar0 = func_97(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(18);
				}
				else
				{
					sVar0 = func_96(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(8);
			}
			else
			{
				sVar0 = func_96(13);
			}
			break;
		
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(19);
					}
					else
					{
						sVar0 = func_97(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(9);
				}
				else
				{
					sVar0 = func_97(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(19);
				}
				else
				{
					sVar0 = func_96(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(9);
			}
			else
			{
				sVar0 = func_96(14);
			}
			break;
		
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(20);
					}
					else
					{
						sVar0 = func_97(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(10);
				}
				else
				{
					sVar0 = func_97(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(20);
				}
				else
				{
					sVar0 = func_96(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(10);
			}
			else
			{
				sVar0 = func_96(15);
			}
			break;
		
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(21);
					}
					else
					{
						sVar0 = func_97(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(11);
				}
				else
				{
					sVar0 = func_97(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(21);
				}
				else
				{
					sVar0 = func_96(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(11);
			}
			else
			{
				sVar0 = func_96(16);
			}
			break;
		
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(22);
					}
					else
					{
						sVar0 = func_97(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(12);
				}
				else
				{
					sVar0 = func_97(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(22);
				}
				else
				{
					sVar0 = func_96(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(12);
			}
			else
			{
				sVar0 = func_96(17);
			}
			break;
		
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_97(3);
				}
				else
				{
					sVar0 = func_97(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(3);
			}
			else
			{
				sVar0 = func_96(2);
			}
			break;
		
		case 6:
			break;
	}
	return sVar0;
}

char* func_96(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "into_proposition_male";
			break;
		
		case 1:
			sVar0 = "into_proposition_prostitute";
			break;
		
		case 2:
			sVar0 = "proposition_loop_male";
			break;
		
		case 3:
			sVar0 = "proposition_loop_prostitute";
			break;
		
		case 4:
			sVar0 = "proposition_to_exit_male";
			break;
		
		case 5:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		
		case 6:
			sVar0 = "prop_to_sit_male";
			break;
		
		case 7:
			sVar0 = "prop_to_sit_prostitute";
			break;
		
		case 8:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		
		case 9:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		
		case 10:
			sVar0 = "sex_loop_prostitute";
			break;
		
		case 11:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		
		case 12:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		
		case 13:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		
		case 14:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		
		case 15:
			sVar0 = "sex_loop_male";
			break;
		
		case 16:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		
		case 17:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		
		case 18:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		
		case 19:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		
		case 20:
			sVar0 = "BJ_loop_prostitute";
			break;
		
		case 21:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		
		case 22:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		
		case 23:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		
		case 24:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		
		case 25:
			sVar0 = "BJ_loop_male";
			break;
		
		case 26:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		
		case 27:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_97(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		
		case 1:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		
		case 2:
			sVar0 = "low_car_prop_loop_player";
			break;
		
		case 3:
			sVar0 = "low_car_prop_loop_female";
			break;
		
		case 4:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		
		case 5:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		
		case 6:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		
		case 7:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		
		case 8:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		
		case 9:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		
		case 10:
			sVar0 = "low_car_sex_loop_female";
			break;
		
		case 11:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		
		case 12:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		
		case 13:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		
		case 14:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		
		case 15:
			sVar0 = "low_car_sex_loop_player";
			break;
		
		case 16:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		
		case 17:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		
		case 18:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		
		case 19:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		
		case 20:
			sVar0 = "low_car_bj_loop_female";
			break;
		
		case 21:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		
		case 22:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		
		case 23:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		
		case 24:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		
		case 25:
			sVar0 = "low_car_bj_loop_player";
			break;
		
		case 26:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		
		case 27:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_98(int iParam0)
{
	if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		switch (unk_0xEBDF12807547303A(iParam0))
		{
			case -2066252141:
			case -38413156:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case -463340997:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1453479140:
			case 1837596901:
			case 2013836096:
			case 2071837743:
			case 2130662788:
			case -1546132012:
			case 1192783831:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
			case 510359473:
			case -988377294:
			case 1240573865:
			case -627376728:
			case 986556497:
			case 1751095603:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_99(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (bParam0)
	{
		bVar0 = unk_0xF7B3A1430308F92B(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = unk_0xF7B3A1430308F92B(1) == 4;
		}
	}
	return bVar0;
}

char* func_100(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		iVar0 = unk_0xA5D5B1042E8F47BD(iParam0, 1);
		if (unk_0x80FF6C016CDB0FAF(iVar0, 0))
		{
			if (func_98(iVar0))
			{
				if ((!func_99(0, 1) || iParam2) && !bParam1)
				{
					return func_104();
				}
				else
				{
					return func_103();
				}
			}
			else if (unk_0x36FE6D3220816ADA(iVar0) == joaat("vstr"))
			{
				return "anim@mini@prostitutes@sex@veh_vstr@";
			}
		}
	}
	if ((!func_99(0, 1) || iParam2) && !bParam1)
	{
		return func_102();
	}
	return func_101();
}

char* func_101()
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_102()
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_103()
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_104()
{
	return "mini@prostitutes@sexlow_veh";
}

int func_105()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	var uVar10;
	struct<3> Var11;
	float fVar14;
	int iVar15;
	
	fVar6 = 25f;
	func_64(&Var7, &uVar10, 0);
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			iVar2 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
		}
		Var3 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1) };
		if (unk_0x839A6C79727042B3(Var3, &Var11, 1077936128, 0))
		{
			fVar14 = SYSTEM::VDIST(Var3, Var11);
			if (fVar14 <= 10f)
			{
				return 0;
			}
		}
		if (SYSTEM::VDIST(Var3, Local_308) < 20f || SYSTEM::VDIST(Var3, Var7) < 20f)
		{
			return 0;
		}
		if (unk_0x597467025C9DE24C(Var3 - Vector(20f, 20f, 20f), Var3 + Vector(20f, 20f, 20f)))
		{
			return 0;
		}
		unk_0x3BC72261A2457EAF(Var3, fVar6, 1, 1, &iVar0, 0, 0, -1);
		if (!iVar0 == 0)
		{
			if (!unk_0xA59F96B50B97E63C(iVar0, 0))
			{
				if (unk_0xD44D03437956A1ED(iVar0, unk_0x9B0761B4C3EB8BC7(), 17))
				{
					return 0;
				}
			}
		}
		else
		{
			iVar1 = unk_0x84F0027A508D7D7D(Var3, fVar6, 0, -1);
			if (!iVar1 == 0)
			{
				if (!iVar1 == iVar2)
				{
					if (unk_0x80FF6C016CDB0FAF(iVar1, 0))
					{
						iVar0 = unk_0x10D3F7E169A49C44(iVar1, -1, 0);
						if (!iVar0 == 0)
						{
							return 0;
						}
					}
				}
			}
		}
		iVar15 = unk_0x518D695E2DBA9DB8(unk_0x9B0761B4C3EB8BC7());
		if (!iVar15 == 0)
		{
			return 0;
		}
	}
	return 1;
}

void func_106(char* sParam0)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 1, 1, -1);
}

bool func_107(char* sParam0)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

void func_108()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iLocal_75 < 12 && iLocal_75 >= 2)
	{
		if (func_213(3000))
		{
			unk_0x1D40553EDD51A1B8(1000);
			iLocal_75 = 12;
		}
	}
	if (!bLocal_71 && iLocal_75 >= 5)
	{
		iVar0 = unk_0xF2211230B32A7839();
		if (unk_0x80FF6C016CDB0FAF(iVar0, 0) && !unk_0xA59F96B50B97E63C(iVar0, 0))
		{
			if (unk_0x36FE6D3220816ADA(iVar0) == joaat("blimp2"))
			{
				bLocal_71 = false;
			}
			else if (unk_0x7A3E3E24F50F2AAB(unk_0xF2211230B32A7839()) && uLocal_76[0] == 5)
			{
				bLocal_71 = func_210(&uLocal_70, -865f, 516.3f, 90f, 1, 15f);
			}
			else if (func_209(unk_0xF2211230B32A7839()))
			{
				bLocal_71 = func_210(&uLocal_70, Local_323, 1, fLocal_327);
			}
			else
			{
				bLocal_71 = func_210(&uLocal_70, Local_308, 1, fLocal_327);
			}
		}
	}
	if (iLocal_75 > 0 && iLocal_75 < 13)
	{
		unk_0xA86915034F55A3BF();
	}
	switch (iLocal_75)
	{
		case 0:
			unk_0xD289B55B6AADBA10(1);
			unk_0xB80B2936A29B2666();
			func_86();
			unk_0x8B917081F9836EDD("TIME_LAPSE", 0, -1);
			func_30(56, 1, 0);
			if (!func_267(uLocal_333, 131072))
			{
				func_27(&uLocal_333, 131072);
			}
			if (!func_267(uLocal_333, 256))
			{
				func_208();
				func_27(&uLocal_333, 256);
			}
			if (!func_267(uLocal_333, 32768))
			{
				unk_0x131ED02492676000(func_207());
				func_27(&uLocal_333, 32768);
			}
			if (!func_267(uLocal_333, 256))
			{
				unk_0x131ED02492676000(func_206());
				func_27(&uLocal_333, 256);
			}
			if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				iLocal_340 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
				func_205(unk_0x9B0761B4C3EB8BC7(), iLocal_340);
				iLocal_75 = 1;
			}
			else
			{
				func_58();
				func_203(unk_0x9B0761B4C3EB8BC7(), Local_302);
				func_203(uLocal_274[0], Local_305);
				iLocal_75 = 2;
			}
			func_201();
			break;
		
		case 1:
			if (!unk_0xA59F96B50B97E63C(iLocal_340, 0))
			{
				if (SYSTEM::VDIST(unk_0x3E4D3CCC220BDFB1(iLocal_340, 1), Local_308) < 2f)
				{
					func_58();
					func_203(unk_0x9B0761B4C3EB8BC7(), Local_302);
					func_203(uLocal_274[0], Local_305);
					unk_0xF990EDED7D25FB88();
					iLocal_75 = 2;
				}
				else if (unk_0x578C4EF320340AF7() >= 10000)
				{
					iLocal_75 = 13;
				}
			}
			break;
		
		case 2:
			if (!unk_0x09F689AE170A62EC(uLocal_284[0]))
			{
				unk_0x856549C07003344B(uLocal_284[0], 1);
				unk_0x3ED9330214992278(true, 0, 3000, 1, 0, 0);
				if (!unk_0xA59F96B50B97E63C(iLocal_340, 0))
				{
					if (unk_0x36FE6D3220816ADA(iLocal_340) == joaat("blimp2"))
					{
						unk_0x80250B8368A4E611(iLocal_340, 0, 0);
					}
				}
				func_8(&uLocal_255);
				iLocal_75 = 3;
			}
			break;
		
		case 3:
			if (func_200(&uLocal_255) > 1f)
			{
				unk_0xF674D9B2033F5F86(uLocal_284[1], uLocal_284[0], 6000, 1, 1);
				func_199(&Local_289, 1, 0, 2000, 1, 1, 0, 1);
				iVar1 = unk_0x1F596C965B00E290();
				iLocal_330 = iVar1 + 8;
				if (iLocal_330 > 23)
				{
					iLocal_330 = (iLocal_330 - 24);
				}
				Local_289.f_7 = iVar1;
				Local_289.f_8 = iLocal_330;
				func_2(&uLocal_255);
				iLocal_75 = 4;
			}
			break;
		
		case 4:
			if (!unk_0xC70648DE87CC1919(uLocal_284[1]) && unk_0x09F689AE170A62EC(uLocal_284[1]))
			{
				if (!func_267(uLocal_331, 512))
				{
					if (unk_0xAE06B9E39EBDE049(iLocal_340) && !unk_0xA59F96B50B97E63C(iLocal_340, 0))
					{
						unk_0xFC34FFD7661206B7(iLocal_340, 1);
					}
					func_196(unk_0x9B0761B4C3EB8BC7(), func_198());
					unk_0xE922BAA80E8F9324(unk_0x9B0761B4C3EB8BC7(), func_195());
					func_172();
					func_27(&uLocal_331, 512);
				}
				else if (!func_267(uLocal_331, 2048))
				{
					if (unk_0xA59F96B50B97E63C(uLocal_274[0], 0))
					{
					}
					if (!func_171() && !unk_0x6F683C1C0BB1BA8D(uLocal_274[0]))
					{
						func_172();
						if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
						{
							unk_0xC4B63A43FAB1F06F(unk_0x9B0761B4C3EB8BC7());
							unk_0xFDCFA91E51EDB61F(unk_0x9B0761B4C3EB8BC7(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
						}
						func_27(&uLocal_331, 2048);
						func_8(&uLocal_255);
						sLocal_277 = func_170();
						iLocal_75 = 5;
					}
				}
			}
			break;
		
		case 5:
			if (func_200(&uLocal_255) > 1f)
			{
				if (func_145(iLocal_330, 0, sLocal_277, "", &Local_289, (func_200(&uLocal_255) * 0.2f), 0))
				{
					if (!func_171())
					{
						if (unk_0xAE06B9E39EBDE049(iLocal_340))
						{
							if (unk_0x36FE6D3220816ADA(iLocal_340) != joaat("blimp2"))
							{
								unk_0x555EE41D7C7078E6(Local_305, 20f, 1, 0, 0, 0);
							}
						}
						else
						{
							unk_0x555EE41D7C7078E6(Local_305, 20f, 1, 0, 0, 0);
						}
						if (unk_0xAE06B9E39EBDE049(uLocal_274[0]))
						{
							unk_0x80250B8368A4E611(uLocal_274[0], 0, 0);
						}
						unk_0x699F8132499577BD(unk_0x9B0761B4C3EB8BC7(), 0);
						func_8(&uLocal_255);
						iLocal_75 = 6;
					}
				}
			}
			break;
		
		case 6:
			unk_0x69C71C91F56D82B9(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_unarmed"), 1);
			if (func_200(&uLocal_255) > 1.5f)
			{
				if (bLocal_71)
				{
					func_143(&uLocal_70);
				}
				func_8(&uLocal_255);
				iLocal_75 = 7;
			}
			break;
		
		case 7:
			if (!unk_0x09F689AE170A62EC(uLocal_284[2]))
			{
				unk_0x86A985A804621EB7();
				unk_0x62AC0FC5A4A3B3DC(1);
				unk_0x10A31C8383235C8F(1);
				unk_0xF674D9B2033F5F86(uLocal_284[2], uLocal_284[1], 6000, 1, 1);
				func_8(&uLocal_255);
				iLocal_75 = 8;
			}
			break;
		
		case 8:
			if (!func_267(uLocal_333, 262144))
			{
				if (func_200(&uLocal_255) >= 1.25f)
				{
					func_142();
				}
			}
			if (func_200(&uLocal_255) > 6f)
			{
				unk_0x856549C07003344B(uLocal_284[3], 1);
				if (!unk_0xA59F96B50B97E63C(iLocal_340, 0))
				{
					if (unk_0x36FE6D3220816ADA(iLocal_340) == joaat("blimp2"))
					{
						unk_0x80250B8368A4E611(iLocal_340, 1, 0);
					}
					unk_0x4F3C4F457D44BB0F(iLocal_340, 1, 1);
					unk_0x0FC504FAF5EB94FB(iLocal_340, 1000f);
					unk_0x4A9F6CA267EF14FE(iLocal_340, 1000f);
					unk_0xDF6CAD2F6A598A57(iLocal_340);
				}
				func_8(&uLocal_255);
				iLocal_75 = 10;
			}
			break;
		
		case 10:
			if (func_200(&uLocal_255) > 2f)
			{
				unk_0x47012CDD5C524D7B(0, 0, 3, 0);
				iLocal_75 = 13;
			}
			break;
		
		case 12:
			if (unk_0x03DB5C6AABF8DA46() && !unk_0x5DA78AD6801A0523())
			{
				if (!func_267(uLocal_333, 262144))
				{
					unk_0xE5868DA7FD9C5517(unk_0x460153A63B9477BC(), Local_314, fLocal_326, 0, 1, 1);
					func_142();
				}
				if (!unk_0xA59F96B50B97E63C(iLocal_340, 0))
				{
					if (unk_0x36FE6D3220816ADA(iLocal_340) == joaat("blimp2"))
					{
						unk_0x80250B8368A4E611(iLocal_340, 1, 0);
					}
				}
				unk_0x69C71C91F56D82B9(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_unarmed"), 1);
				if (!unk_0xA59F96B50B97E63C(iLocal_340, 0))
				{
					unk_0x4F3C4F457D44BB0F(iLocal_340, 1, 1);
					unk_0x0FC504FAF5EB94FB(iLocal_340, 1000f);
					unk_0x4A9F6CA267EF14FE(iLocal_340, 1000f);
					unk_0xDF6CAD2F6A598A57(iLocal_340);
				}
				func_8(&uLocal_255);
				iLocal_75 = 13;
			}
			break;
		
		case 13:
			if (!unk_0x5DA78AD6801A0523() && func_200(&uLocal_255) >= 1f)
			{
				func_13(1, 1, 0);
				unk_0x697DA7132EE43ABC(unk_0x9B0761B4C3EB8BC7(), unk_0xB4BD22A5188A2545(unk_0x9B0761B4C3EB8BC7()), 0);
				unk_0xEF5931DD6E17343E(unk_0x460153A63B9477BC(), 30, 1, 0);
				if (unk_0xE95077C1E15F6307(unk_0x9B0761B4C3EB8BC7(), func_82(0)))
				{
					func_141();
				}
				unk_0x6F9222C1283B5094(Local_308 - Vector(3f, 3f, 3f), Local_308 + Vector(3f, 3f, 3f), 15f, 1);
				if (!unk_0xA59F96B50B97E63C(iLocal_340, 0))
				{
					unk_0x4F3C4F457D44BB0F(iLocal_340, 1, 1);
					if (unk_0x36FE6D3220816ADA(iLocal_340) != joaat("blimp2"))
					{
						unk_0x03D382CB0B44E2FC(iLocal_340, Local_308, 1, 0, 0, 1);
						unk_0xE922BAA80E8F9324(iLocal_340, fLocal_327);
						if (unk_0x7A3E3E24F50F2AAB(iLocal_340) && uLocal_76[0] == 5)
						{
							unk_0x03D382CB0B44E2FC(iLocal_340, -865f, 516.3f, 90f, 1, 0, 0, 1);
							unk_0xE922BAA80E8F9324(iLocal_340, 15f);
						}
						else if (func_209(iLocal_340))
						{
							unk_0x03D382CB0B44E2FC(iLocal_340, Local_323, 1, 0, 0, 1);
							unk_0xE922BAA80E8F9324(iLocal_340, fLocal_328);
						}
						unk_0xB11D151E210D4FAC(iLocal_340, 1084227584);
					}
				}
				if (!unk_0x03DB5C6AABF8DA46())
				{
					func_199(&Local_289, 0, 0, 2000, 1, 0, 0, 1);
				}
				else
				{
					unk_0x5FBCC63C80BBBFE1(8, 0, 0);
					func_139(SYSTEM::TO_FLOAT(8));
					unk_0xFD45D90342D2A0CD(2000);
					unk_0x4C4FC7841A5FB983(0);
					unk_0x7965943E39128B42(0, 1065353216);
					func_199(&Local_289, 0, 0, 2000, 1, 1, 0, 1);
				}
				if (unk_0xAE06B9E39EBDE049(uLocal_274[0]))
				{
					unk_0x586DDC617E714637(&(uLocal_274[0]));
				}
				if (!func_138(uLocal_76[0], -1))
				{
					if (uLocal_76[0] == 5)
					{
						func_67("SCLUB_PHON_HELP_ALT", uLocal_76[0], 0);
					}
					else
					{
						func_67("SCLUB_PHON_HELP", uLocal_76[0], 0);
					}
					func_119(uLocal_76[0], 1, -1);
					SYSTEM::WAIT(4000);
				}
				func_117(uLocal_76[0]);
				iVar2 = func_116(uLocal_76[0]);
				if (iVar2 <= 2)
				{
					iVar3 = func_115(uLocal_76[0]);
					iVar4 = func_114(iVar2);
					func_109(-384575792, iVar3, iVar4, 3, func_113(), func_112(uLocal_76[0]), 60000, 10000, -1, 0, -1, 0, 1);
				}
				func_39();
			}
			break;
	}
}

int func_109(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<14> Var0;
	
	if (func_53(0))
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 < 0)
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
	if (iParam5 < 3)
	{
		if (unk_0xCE990E643CD9D0E5(iParam4, iParam5))
		{
			return 0;
		}
	}
	if (iParam4 < 1 || iParam4 > 7)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 83 || iParam2 == 83)
	{
		return 0;
	}
	if (Global_111858.f_7684.f_764 < 8)
	{
		Var0 = iParam0;
		Var0.f_3 = func_111(iParam3);
		Var0.f_4 = (unk_0x578C4EF320340AF7() + iParam6);
		Var0.f_5 = iParam7;
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam4;
		Var0.f_6 = iParam5;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_13 = iParam12;
		unk_0xD2459066EA58CE43(&(Var0.f_1), 0);
		Global_111858.f_7684.f_651[Global_111858.f_7684.f_764 /*14*/] = { Var0 };
		Global_111858.f_7684.f_764++;
		func_110(0);
		func_110(1);
		func_110(2);
		return 1;
	}
	return 0;
}

void func_110(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_80(iParam0))
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

int func_111(int iParam0)
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

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 104;
			break;
		
		case 1:
			return 105;
			break;
		
		case 2:
			return 106;
			break;
		
		case 3:
			return 107;
			break;
		
		case 4:
			return 108;
			break;
		
		case 5:
			return 109;
			break;
		
		case 6:
			return 110;
			break;
		
		case 7:
			return 111;
			break;
		
		case 8:
			return 112;
			break;
		
		case 9:
			return 93;
			break;
	}
	return 145;
}

int func_113()
{
	func_78();
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

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
	}
	return -1;
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 4:
			return 2;
			break;
		
		case 5:
			return 3;
			break;
		
		case 8:
			return 4;
			break;
		
		case 9:
			return 5;
			break;
	}
	return -1;
}

int func_116(int iParam0)
{
	return Global_111858.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_2;
}

void func_117(int iParam0)
{
	if (func_116(iParam0) < 0)
	{
		func_118(iParam0, 0);
	}
	Global_111858.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_2++;
}

void func_118(int iParam0, int iParam1)
{
	Global_111858.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_2 = iParam1;
}

void func_119(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	
	if (iParam2 < 0)
	{
		iParam2 = func_75();
	}
	if (func_137(iParam2) == 4)
	{
	}
	bVar0 = Global_111858.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	if (bVar0)
	{
		if (unk_0x25DDB354A40FFCDB())
		{
			if (!func_136(func_112(iParam0), 3))
			{
				bVar0 = false;
			}
		}
		else if (!func_136(func_112(iParam0), 4))
		{
			bVar0 = false;
		}
	}
	Global_111858.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_135(iParam0, 0);
			func_129(func_112(iParam0), func_137(iParam2), 1);
			iVar1 = unk_0x344C570D6F8700DF(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					unk_0xBE20AB8238688965(&(Global_2097152[func_128() /*10931*/].f_6175.f_1272), iParam0);
					func_125(-60084924, 15, 0);
					break;
			}
			func_124(iVar1);
			func_123(iParam0, iVar1);
			Global_110852.f_15[iParam0] = unk_0x578C4EF320340AF7();
		}
	}
	else if (bVar0)
	{
		func_120(func_112(iParam0), func_137(iParam2));
	}
}

void func_120(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 154)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_122(iParam0, iVar0, 0);
			func_121(iParam0, iVar0, 0);
		}
	}
}

void func_121(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1848[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111858.f_28046[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_122(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1848[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111858.f_28046[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

void func_123(int iParam0, int iParam1)
{
	if (iParam1 > -1)
	{
		Global_110852.f_4[iParam0] = (unk_0x578C4EF320340AF7() + iParam1);
	}
	else
	{
		Global_110852.f_4[iParam0] = (unk_0x578C4EF320340AF7() + unk_0x344C570D6F8700DF(1200000, 2100000));
	}
}

void func_124(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_110852.f_3 = (unk_0x578C4EF320340AF7() + iParam0);
	}
	else
	{
		Global_110852.f_3 = (unk_0x578C4EF320340AF7() + unk_0x344C570D6F8700DF(21600000, 25200000));
	}
}

void func_125(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_127(iParam1, iParam2))
	{
		iVar0 = func_126();
		Global_2462127[iVar0] = iParam1;
		Global_2462138[iVar0] = iParam0;
	}
}

int func_126()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2462127[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_127(int iParam0, var uParam1)
{
	if (Global_1312884)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312896) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_128()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_129(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_8237 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 154)
	{
		func_134();
		if (iParam1 == 4)
		{
			func_122(iParam0, 0, 1);
			func_122(iParam0, 1, 1);
			func_122(iParam0, 2, 1);
			func_121(iParam0, 0, 1);
			func_121(iParam0, 1, 1);
			func_121(iParam0, 2, 1);
		}
		else
		{
			if (func_133(iParam0, iParam1) == 1 && func_132(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_122(iParam0, iVar0, 1);
			func_121(iParam0, iVar0, 1);
		}
		if (bParam2)
		{
			if (!Global_76833)
			{
				if (iParam1 != 4)
				{
					if (Global_19681 != iParam1)
					{
						Global_8210[iParam1 /*4*/] = { func_131(iParam0) };
						Global_8227[iParam1] = 1;
						Global_8232[iParam1] = iParam0;
					}
					else if (iParam0 == Global_19681)
					{
					}
					else
					{
						Global_8161[1 /*6*/] = { func_131(iParam0) };
						Global_8161[1 /*6*/].f_5 = iParam1;
						func_130();
					}
				}
				else
				{
					Global_8161[1 /*6*/] = { func_131(iParam0) };
					Global_8161[1 /*6*/].f_5 = iParam1;
					func_130();
				}
			}
			else
			{
				Global_8161[1 /*6*/] = { func_131(iParam0) };
				Global_8161[1 /*6*/].f_5 = iParam1;
				func_130();
			}
		}
	}
}

void func_130()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0x7C774D8CB8DC6FE3(&(Global_1848[Global_8237 /*29*/].f_7)), 64);
	if (Global_8256 == 0)
	{
		unk_0x5B8DD855EAFD33B5("");
		StringCopy(&cVar16, unk_0x7C774D8CB8DC6FE3(&(Global_8161[1 /*6*/])), 64);
		sVar32 = unk_0x7C774D8CB8DC6FE3("CELL_253");
		unk_0x39E1440587355CC1(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x5B8DD855EAFD33B5("CELL_255");
		unk_0x6A826E35A3096ED0(&(Global_8161[1 /*6*/]));
		unk_0x39E1440587355CC1(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xD2459066EA58CE43(&Global_7551, 0);
}

struct<4> func_131(int iParam0)
{
	return Global_1848[iParam0 /*29*/].f_3;
}

int func_132(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1848[iParam0 /*29*/].f_24[iParam1];
}

int func_133(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1848[iParam0 /*29*/].f_12[iParam1];
}

void func_134()
{
	if (func_79(14))
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
		Global_19681 = func_77();
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

void func_135(int iParam0, int iParam1)
{
	Global_111858.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

int func_136(int iParam0, int iParam1)
{
	if (func_133(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 1:
			return 1;
			break;
		
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 3;
			break;
	}
	return 4;
}

bool func_138(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_75();
	}
	return Global_111858.f_243[iParam1 /*53*/].f_2[iParam0 /*5*/].f_4;
}

void func_139(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_10(&(Global_111858.f_18099.f_175[iVar0 /*19*/].f_5)))
		{
			func_140(&(Global_111858.f_18099.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_10(&(Global_111858.f_18099.f_362[iVar1 /*3*/])))
		{
			func_140(&(Global_111858.f_18099.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0x553F30BE4A085845();
}

void func_140(var uParam0, float fParam1)
{
	if (func_10(uParam0))
	{
		func_9(uParam0, (func_4(uParam0) + fParam1));
	}
}

void func_141()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_95417[iVar0] = Global_95417[iVar0 + 1];
		}
		else
		{
			Global_95417[iVar0] = unk_0x578C4EF320340AF7();
		}
		iVar0++;
	}
}

void func_142()
{
	int iVar0;
	var uVar1;
	
	if (!unk_0xC614DDE265D18415(sLocal_276))
	{
	}
	else
	{
		iVar0 = unk_0x344C570D6F8700DF(0, 50000);
		unk_0x9B94F6169B0DAEFD(unk_0x9B0761B4C3EB8BC7());
		unk_0x9DC06E2A59C5AEBB(&uVar1);
		unk_0x3C1B180EE30D36EF(0, Local_314, 1f, -1, 0.25f, 0, fLocal_326);
		if (iVar0 < 15000)
		{
			unk_0x756D74A3EF0AB788(0, sLocal_276, "fidget_rub_hands", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		else if (iVar0 >= 15000 && iVar0 < 35000)
		{
			unk_0x756D74A3EF0AB788(0, sLocal_276, "fidget_rub_chin", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		else
		{
			unk_0x756D74A3EF0AB788(0, sLocal_276, "fidget_arm_swing", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		unk_0x19F29730874AD6F1(uVar1);
		unk_0x9B6EC2CECE1010EF(unk_0x9B0761B4C3EB8BC7(), uVar1);
		unk_0x4F83FEE4454169D4(&uVar1);
		func_27(&uLocal_333, 262144);
	}
}

void func_143(var uParam0)
{
	var uVar0;
	
	uVar0 = *uParam0;
	if (unk_0xAE06B9E39EBDE049(uVar0))
	{
		if (!func_144(iVar0))
		{
			unk_0x58ADF88C51AAFDC5(iVar0, 1, 0);
			unk_0x80250B8368A4E611(iVar0, 1, 0);
			unk_0x6A8F948698B360B4(iVar0, 0);
		}
	}
}

int func_144(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (unk_0xA59F96B50B97E63C(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x80FF6C016CDB0FAF(iParam0, 0))
		{
			if (!unk_0x0922C2E075A5F18C(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_145(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_169();
			iVar4 = func_169();
			func_168(&iVar4, iParam0);
			func_167(&iVar4, iParam1);
			func_166(&iVar4, 0);
			if (func_164(*uParam4, iVar4))
			{
				func_159(&iVar4, 0, 0, 0, 1, 0, 0);
			}
			func_156(*uParam4, iVar4, &iVar0, &iVar1, &iVar2, &uVar5, &uVar6, &uVar7);
			uParam4->f_11 = ((iVar0 + iVar1 * 60) + (iVar2 + iParam6) * 3600);
			func_139((SYSTEM::TO_FLOAT(uParam4->f_11) / 3600f));
			unk_0x4B95FBE1005DCF18(0.6f);
			unk_0x10A31C8383235C8F(0);
			unk_0x62AC0FC5A4A3B3DC(0);
			func_155();
			uParam4->f_10 = unk_0x5E54B0823F46079E();
			unk_0xC4CC25B68A91D144(uParam4->f_10, "TIME_LAPSE_MASTER", 0, 1);
			unk_0x17E478571720218F("TOD_SHIFT_SCENE");
			func_154();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if (fParam5 >= 0.5f)
			{
				if (uParam4->f_3 == 1)
				{
					if (unk_0x856D5567211886A2(sParam2) != 0)
					{
						unk_0xC2CB0559CFDC9B5A(sParam2, 1f);
					}
					if (unk_0x856D5567211886A2(sParam3) != 0)
					{
						unk_0x35FD78BCBA8B49F9();
						unk_0x374E5C911B2C14DB(sParam3, 0);
					}
					uParam4->f_3 = 2;
				}
			}
			if (fParam5 >= 0.99f || fParam5 == -1f)
			{
				iVar4 = *uParam4;
				func_159(&iVar4, uParam4->f_11, 0, 0, 0, 0, 0);
				unk_0x538D71DCD2FF3072(func_153(iVar4), func_152(iVar4), func_151(iVar4));
				unk_0xC5E5600D1CF5CEF9(uParam4->f_10);
				unk_0x9128BA5F998AA176("TIME_LAPSE");
				return 1;
			}
			fVar10 = fParam5;
			fVar8 = 0.1f;
			fVar9 = 0.9f;
			fVar11 = func_150(((fVar10 - fVar8) / (fVar9 - fVar8)), 0f, 1f);
			iVar3 = SYSTEM::ROUND((IntToFloat(uParam4->f_11) * fVar11));
			iVar4 = *uParam4;
			func_159(&iVar4, iVar3, 0, 0, 0, 0, 0);
			unk_0x538D71DCD2FF3072(func_153(iVar4), func_152(iVar4), func_151(iVar4));
			if (func_149(iVar4) != unk_0x371CFD525753F70C())
			{
				unk_0x56CAF1649CC0C45B(func_149(iVar4), func_148(iVar4), func_146(iVar4));
			}
			func_256();
			unk_0x04DAD6EE29755E9A(6);
			break;
	}
	return 0;
}

int func_146(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_147(unk_0xCE990E643CD9D0E5(iParam0, 31), -1, 1)) + 2011;
}

int func_147(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_148(int iParam0)
{
	return iParam0 & 15;
}

int func_149(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

float func_150(float fParam0, float fParam1, float fParam2)
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

int func_151(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_152(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_153(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

void func_154()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		unk_0xB6B2734989D2EBCB(Global_111858.f_14137[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

int func_155()
{
	int iVar0;
	
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		return 0;
	}
	if (!unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
	{
		return 0;
	}
	iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
	if (!unk_0xA59F96B50B97E63C(iVar0, 0))
	{
		return 0;
	}
	unk_0xE096849E490C2EC2(iVar0, "OFF");
	return 1;
}

void func_156(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_164(iParam0, iParam1))
	{
		iVar0 = func_148(iParam1);
		iVar1 = func_146(iParam0);
		iVar2 = (func_146(iParam0) - func_146(iParam1));
		iVar3 = (func_148(iParam0) - func_148(iParam1));
		iVar4 = (func_149(iParam0) - func_149(iParam1));
		iVar5 = (func_153(iParam0) - func_153(iParam1));
		iVar6 = (func_152(iParam0) - func_152(iParam1));
		iVar7 = (func_151(iParam0) - func_151(iParam1));
	}
	else
	{
		iVar0 = func_148(iParam0);
		iVar1 = func_146(iParam1);
		iVar2 = (func_146(iParam1) - func_146(iParam0));
		iVar3 = (func_148(iParam1) - func_148(iParam0));
		iVar4 = (func_149(iParam1) - func_149(iParam0));
		iVar5 = (func_153(iParam1) - func_153(iParam0));
		iVar6 = (func_152(iParam1) - func_152(iParam0));
		iVar7 = (func_151(iParam1) - func_151(iParam0));
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
		iVar4 = (iVar4 + func_158(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_157(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_157(float fParam0, float fParam1, float fParam2)
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

int func_158(int iParam0, int iParam1)
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

void func_159(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_146(*iParam0);
	iVar1 = func_148(*iParam0);
	iVar2 = func_149(*iParam0);
	iVar3 = func_153(*iParam0);
	iVar4 = func_152(*iParam0);
	iVar5 = func_151(*iParam0);
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
	iVar6 = func_158(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_158(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_160(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_160(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_166(uParam0, iParam1);
	func_167(uParam0, iParam2);
	func_168(uParam0, iParam3);
	func_163(uParam0, iParam5);
	func_162(uParam0, iParam4);
	func_161(uParam0, iParam6);
}

void func_161(var uParam0, int iParam1)
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

void func_162(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_148(*uParam0);
	iVar1 = func_146(*uParam0);
	if (iParam1 < 1 || iParam1 > func_158(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_163(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

int func_164(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_165(iParam1) || !func_165(iParam0))
	{
		return 1;
	}
	iVar0 = func_146(iParam0);
	iVar1 = func_146(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_148(iParam0);
	iVar1 = func_148(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_149(iParam0);
	iVar1 = func_149(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_153(iParam0);
	iVar1 = func_153(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_152(iParam0);
	iVar1 = func_152(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_151(iParam0);
	iVar1 = func_151(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_165(int iParam0)
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
	iVar0 = func_151(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_152(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_153(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_146(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_148(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_149(iParam0);
	if (iVar5 < 1 || iVar5 > func_158(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_166(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 66060288);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_167(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 1032192);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_168(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 15872);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

int func_169()
{
	var uVar0;
	
	func_166(&uVar0, unk_0x1D3A3697182AD8B3());
	func_167(&uVar0, unk_0x81F2E25F8C019191());
	func_168(&uVar0, unk_0x1F596C965B00E290());
	func_162(&uVar0, unk_0x371CFD525753F70C());
	func_163(&uVar0, unk_0xF225116F449A5CC6());
	func_161(&uVar0, unk_0x2E48CFA70ABFC06A());
	return uVar0;
}

char* func_170()
{
	char* sVar0;
	
	switch (uLocal_76[0])
	{
		case 0:
			sVar0 = "CLEARING";
			break;
		
		case 1:
			sVar0 = "OVERCAST";
			break;
		
		case 4:
			sVar0 = "CLOUDS";
			break;
		
		case 5:
			sVar0 = "CLEAR";
			break;
		
		case 8:
			sVar0 = "EXTRASUNNY";
			break;
		
		case 9:
			sVar0 = "RAIN";
			break;
		
		default:
			sVar0 = "EXTRASUNNY";
			break;
	}
	return sVar0;
}

int func_171()
{
	if (Global_21005 != 0 || unk_0x6A5CC4A2C9D9ED8D())
	{
		return 1;
	}
	return 0;
}

void func_172()
{
	if (!unk_0xA59F96B50B97E63C(uLocal_274[0], 0))
	{
		if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
		{
			func_193(&uLocal_81, 1, 0, func_194(uLocal_76[0]), 0, 1);
			func_175("SC_SEX", 0, 0, 0);
		}
		else
		{
			func_173(uLocal_274[0], "SEX_ORAL", 10);
		}
	}
}

void func_173(int iParam0, char* sParam1, int iParam2)
{
	unk_0xFDCFA91E51EDB61F(iParam0, sParam1, func_174(iParam2), 1);
}

int func_174(int iParam0)
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

int func_175(char* sParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<6> Var0;
	char[] cVar6[8];
	
	if (func_192())
	{
		StringCopy(&Var0, sParam0, 24);
		if (bParam1)
		{
			func_191(&Var0, bParam2);
		}
		else
		{
			Var0 = { func_190(Var0) };
		}
		if (bParam3)
		{
			cVar6 = "SCAUD";
		}
		else
		{
			cVar6 = "SHAUD";
		}
		if (func_176(&uLocal_81, cVar6, &Var0, 7, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_176(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_189(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_177(sParam2, iParam3, 0);
}

int func_177(char* sParam0, int iParam1, bool bParam2)
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
					func_188();
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
		if (func_187(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_186();
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
				func_134();
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
				if (func_185())
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
			if (func_23())
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
			func_184();
			Global_21015 = bParam2;
		}
		Global_21007 = iParam1;
		StringCopy(&Global_20624, sParam0, 24);
		Global_19871 = 0;
		func_183();
		func_178();
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
		func_188();
	}
	return 0;
}

void func_178()
{
	if (!func_179())
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

int func_179()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (unk_0x460153A63B9477BC() == func_182())
	{
		return 0;
	}
	if (func_180(unk_0x460153A63B9477BC()))
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

bool func_180(int iParam0)
{
	return func_181(iParam0, 20);
}

bool func_181(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_182()
{
	return -1;
}

void func_183()
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

void func_184()
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

int func_185()
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

void func_186()
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

bool func_187(int iParam0, int iParam1)
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

void func_188()
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

void func_189(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

struct<6> func_190(char[24] cParam0)
{
	int iVar0;
	
	StringConCat(&cParam0, "_", 24);
	iVar0 = uLocal_76[0];
	StringIntConCat(&cParam0, iVar0, 24);
	return cParam0;
}

void func_191(char* sParam0, bool bParam1)
{
	StringConCat(sParam0, "_", 24);
	if (func_77() == 2)
	{
		StringConCat(sParam0, "T", 24);
	}
	else if (func_77() == 0)
	{
		StringConCat(sParam0, "M", 24);
	}
	else if (func_77() == 1)
	{
		StringConCat(sParam0, "F", 24);
	}
	if (bParam1)
	{
		*sParam0 = { func_190(*sParam0) };
	}
}

int func_192()
{
	if ((unk_0x2F80DB5A41D045E6() || unk_0x6A5CC4A2C9D9ED8D()) || Global_21005 != 0)
	{
		return 0;
	}
	return 1;
}

void func_193(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

char* func_194(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Juliet";
			break;
		
		case 1:
			return "Nikki";
			break;
		
		case 2:
			return "Chastity";
			break;
		
		case 3:
			return "Cheetah";
			break;
		
		case 4:
			return "Sapphire";
			break;
		
		case 5:
			return "Infernus";
			break;
		
		case 6:
			return "Fufu";
			break;
		
		case 7:
			return "Peach";
			break;
		
		case 8:
			return "TaxiLiz";
			break;
		
		case 9:
			return "REHH2Hiker";
			break;
	}
	return "Invalid name";
}

float func_195()
{
	switch (uLocal_76[0])
	{
		case 1:
			return 325.6f;
			break;
		
		case 0:
			return 52.89f;
			break;
		
		case 4:
			return 14.5f;
			break;
		
		case 5:
			return 43.85f;
			break;
		
		case 8:
			return 193.5f;
			break;
		
		case 9:
			return 233.2f;
			break;
	}
	return 0f;
}

Vector3 func_196(int iParam0, struct<3> Param1)
{
	var uVar0;
	
	Param1.f_2 = (Param1.f_2 + 0.15f);
	if (unk_0xE5CC8E2D904E42CE(Param1, &uVar0, 0, 0))
	{
		Param1.f_2 = uVar0;
	}
	if (func_197(iParam0))
	{
		unk_0x03D382CB0B44E2FC(iParam0, Param1, 1, 0, 0, 1);
	}
	return Param1;
}

bool func_197(int iParam0)
{
	if (!unk_0xAE06B9E39EBDE049(uParam0))
	{
		return 0;
	}
	return !unk_0xA59F96B50B97E63C(iParam0, 0);
}

Vector3 func_198()
{
	switch (uLocal_76[0])
	{
		case 1:
			return 130.7462f, -1896.513f, 22.3246f;
			break;
		
		case 0:
			return -162.4315f, -1635.107f, 32.6529f;
			break;
		
		case 4:
			return -197.6542f, 92.3329f, 68.5846f;
			break;
		
		case 5:
			return -848.9675f, 510.048f, 89.8218f;
			break;
		
		case 8:
			return -28.5266f, -1565.793f, 28.918f;
			break;
		
		case 9:
			return 3315.045f, 5174.08f, 17.6765f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_199(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC()), 64);
	}
	if (!unk_0x3EBB66F936A3436E())
	{
		unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			unk_0x9EB88E485EDFD7EB(unk_0x9B0761B4C3EB8BC7(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		unk_0x47012CDD5C524D7B(0, 0, 3, 0);
	}
	else
	{
		unk_0x3ED9330214992278(bParam1, iParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		unk_0xD289B55B6AADBA10(1);
	}
	else
	{
		if (unk_0x40397A9A17EEC1C5(uParam0->f_4))
		{
			if (unk_0xC516FEEB950FFD58(uParam0->f_4))
			{
				unk_0x856549C07003344B(uParam0->f_4, 0);
			}
			unk_0xB8B0F7C8C1548C5B(uParam0->f_4, 1);
		}
		if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			unk_0x80250B8368A4E611(unk_0x9B0761B4C3EB8BC7(), 1, 0);
		}
		iVar0 = unk_0xA5D3CD332CD10EE9();
		if (unk_0xAE06B9E39EBDE049(iVar0))
		{
			unk_0x80250B8368A4E611(iVar0, 1, 0);
		}
		unk_0x9128BA5F998AA176("TIME_LAPSE");
		if (unk_0x306BF588BD8151E8("TOD_SHIFT_SCENE"))
		{
			unk_0xC5E5600D1CF5CEF9(uParam0->f_10);
			unk_0x9128BA5F998AA176("TIME_LAPSE");
			unk_0xFA07F8BEBDAAFBA8("TOD_SHIFT_SCENE");
		}
	}
	func_15(bParam1, 1, 0, 0, 0, 0, 0);
	func_154();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			unk_0x538D71DCD2FF3072(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0x538D71DCD2FF3072(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (unk_0x03DB5C6AABF8DA46())
		{
			unk_0xFD45D90342D2A0CD(250);
		}
	}
	if (!bParam1)
	{
		if (Global_111858.f_32745.f_4801 != -15)
		{
			Global_111858.f_32745.f_4801 = func_169();
		}
	}
}

float func_200(var uParam0)
{
	if (func_10(uParam0))
	{
		if (func_6(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5(unk_0xCE990E643CD9D0E5(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_201()
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var14[4];
	var uVar27[4];
	
	func_202(&Var1, &Var14, &uVar27);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x40397A9A17EEC1C5(uLocal_284[iVar0]))
		{
			uLocal_284[iVar0] = unk_0xB5B018137EBE06D3(26379945, Var1[iVar0 /*3*/], Var14[iVar0 /*3*/], uVar27[iVar0], 0, 2);
			unk_0x2311A669433389E8(uLocal_284[iVar0], "HAND_SHAKE", 0.3f);
		}
		iVar0++;
	}
	Local_289.f_4 = unk_0x68C2E3309DCAD71E("DEFAULT_SPLINE_CAMERA", 0);
	unk_0x7D871998E68E375E(Local_289.f_4, Var1[0 /*3*/], Var14[0 /*3*/], 6000, 3, 2);
	unk_0x7D871998E68E375E(Local_289.f_4, Var1[1 /*3*/], Var14[1 /*3*/], 6000, 3, 2);
	unk_0xD64C2E5B5BA2D347(Local_289.f_4, uVar27[0]);
}

void func_202(var uParam0, var uParam1, var uParam2)
{
	switch (uLocal_76[0])
	{
		case 1:
			*(uParam0[0 /*3*/]) = { 140.9085f, -1885.527f, 25.6959f };
			*(uParam1[0 /*3*/]) = { -9.0308f, 0f, 126.3829f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 141.712f, -1884.935f, 30.7241f };
			*(uParam1[1 /*3*/]) = { 4.7025f, 0f, 129.5531f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 139.1899f, -1885.865f, 24.96737f };
			*(uParam1[2 /*3*/]) = { -3.535496f, 0.081819f, 135.1308f };
			(*uParam2)[2] = 50f;
			*(uParam0[3 /*3*/]) = { 133.9669f, -1893.292f, 23.9573f };
			*(uParam1[3 /*3*/]) = { -1.8669f, -0.0329f, -5.5828f };
			(*uParam2)[3] = 50f;
			break;
		
		case 0:
			*(uParam0[0 /*3*/]) = { -186.5408f, -1629.328f, 35.8275f };
			*(uParam1[0 /*3*/]) = { -1.5588f, 0f, -118.8025f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -186.1923f, -1629.505f, 48.7132f };
			*(uParam1[1 /*3*/]) = { -1.2745f, 0f, -116.9616f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -184.9595f, -1632.193f, 36.32303f };
			*(uParam1[2 /*3*/]) = { -3.262451f, 0.073971f, -100.6756f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -164.7078f, -1632.25f, 34.0944f };
			*(uParam1[3 /*3*/]) = { -3.7303f, 0.0222f, 108.1824f };
			(*uParam2)[3] = 40f;
			break;
		
		case 4:
			*(uParam0[0 /*3*/]) = { -208.6886f, 112.8581f, 73.0855f };
			*(uParam1[0 /*3*/]) = { -0.1055f, 0f, -156.0082f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -208.9068f, 113.3747f, 85.2889f };
			*(uParam1[1 /*3*/]) = { 3.8438f, 0f, -157.0767f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -206.2357f, 106.941f, 72.07555f };
			*(uParam1[2 /*3*/]) = { -11.58381f, 0.084975f, -158.9702f };
			(*uParam2)[2] = 45f;
			*(uParam0[3 /*3*/]) = { -197.6886f, 94.7063f, 69.814f };
			*(uParam1[3 /*3*/]) = { 0.5155f, -0.0266f, 48.8652f };
			(*uParam2)[3] = 45f;
			break;
		
		case 5:
			*(uParam0[0 /*3*/]) = { -871.6285f, 520.8466f, 93.1945f };
			*(uParam1[0 /*3*/]) = { -0.1377f, -1.3933f, -105.9309f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -871.5255f, 521.1066f, 104.6356f };
			*(uParam1[1 /*3*/]) = { 3.1118f, -1.3933f, -105.9309f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -866.6436f, 514.6121f, 92.90275f };
			*(uParam1[2 /*3*/]) = { -5.957637f, -1.324997f, -101.9062f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -849.5522f, 514.2322f, 91.0095f };
			*(uParam1[3 /*3*/]) = { -1.626f, -1.3198f, 92.3739f };
			(*uParam2)[3] = 40f;
			break;
		
		case 8:
			*(uParam0[0 /*3*/]) = { -27.698f, -1584.646f, 31.1034f };
			*(uParam1[0 /*3*/]) = { 0.0044f, 0f, -1.9117f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -27.698f, -1584.646f, 40.4849f };
			*(uParam1[1 /*3*/]) = { 7.981f, 0f, -1.9117f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -28.63904f, -1579.74f, 30.82423f };
			*(uParam1[2 /*3*/]) = { -7.527712f, 0.030218f, -14.33051f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -28.6719f, -1568.09f, 29.7492f };
			*(uParam1[3 /*3*/]) = { -1.5414f, 0f, -168.6005f };
			(*uParam2)[3] = 40f;
			break;
		
		case 9:
			*(uParam0[0 /*3*/]) = { 3323.631f, 5148.861f, 20.9592f };
			*(uParam1[0 /*3*/]) = { 1.1547f, 1.0064f, 21.8733f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 3323.844f, 5148.672f, 28.2303f };
			*(uParam1[1 /*3*/]) = { 11.4168f, 1.0064f, 22.8025f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 3328.904f, 5157.818f, 20.5799f };
			*(uParam1[2 /*3*/]) = { -3.634001f, 1.039937f, 30.44809f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { 3315.368f, 5171.771f, 18.9066f };
			*(uParam1[3 /*3*/]) = { -2.8773f, 1.0064f, -103.0585f };
			(*uParam2)[3] = 40f;
			break;
	}
}

void func_203(int iParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		unk_0x699F8132499577BD(iParam0, 1);
		if (unk_0x16BC17A8EDC701A2(iParam0, 242628503) != 1)
		{
			unk_0x4F83FEE4454169D4(&uLocal_339);
			unk_0x9DC06E2A59C5AEBB(&uLocal_339);
			if (unk_0x47DBF174A0CB9D55(iParam0, 0))
			{
				unk_0x0AB756271BADC8DF(0, 0, 16777216);
			}
			if (iParam0 == unk_0x9B0761B4C3EB8BC7())
			{
				fVar0 = SYSTEM::VDIST(unk_0x3E4D3CCC220BDFB1(iParam0, 1), Local_302);
				fVar1 = SYSTEM::VDIST(unk_0x3E4D3CCC220BDFB1(iParam0, 1), Local_305);
				if (fVar1 < fVar0)
				{
					unk_0xD08E9EAF091A1AAB(0, uLocal_274[0], 0);
				}
				else if (!unk_0x7BCC91F3C1CF24E8(func_204()))
				{
					unk_0xCFF8B016586CE0B7(0, func_204(), 0, 552, -1);
				}
				else
				{
					unk_0x3C1B180EE30D36EF(0, Local_302, 1f, -1, 0.25f, 64, 1193033728);
				}
			}
			if (iParam0 != unk_0x9B0761B4C3EB8BC7())
			{
				if (!unk_0x7BCC91F3C1CF24E8(func_204()))
				{
					unk_0xCFF8B016586CE0B7(0, func_204(), 0, 546, -1);
				}
				else
				{
					unk_0x3C1B180EE30D36EF(0, Param1, 1f, -1, 0.25f, 1, 1193033728);
				}
				if (func_25(iParam0, Param1, 1) > 5f)
				{
					unk_0xD08E9EAF091A1AAB(0, unk_0x9B0761B4C3EB8BC7(), 0);
					unk_0x756D74A3EF0AB788(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0xC1C7DE768F7675E5(0, unk_0x344C570D6F8700DF(3000, 6000));
					unk_0xD08E9EAF091A1AAB(0, unk_0x9B0761B4C3EB8BC7(), 0);
					unk_0x756D74A3EF0AB788(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0xC1C7DE768F7675E5(0, unk_0x344C570D6F8700DF(3000, 6000));
					unk_0xD08E9EAF091A1AAB(0, unk_0x9B0761B4C3EB8BC7(), 0);
					unk_0x756D74A3EF0AB788(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x756D74A3EF0AB788(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, -1, 0, 0, 0, 0, 0);
				}
			}
			unk_0x19F29730874AD6F1(uLocal_339);
			unk_0x9B6EC2CECE1010EF(iParam0, uLocal_339);
		}
	}
}

char* func_204()
{
	char* sVar0;
	
	if (uLocal_76[0] == 1)
	{
		sVar0 = "BC_NIKKI_H_F";
	}
	return sVar0;
}

void func_205(int iParam0, int iParam1)
{
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0) && !unk_0xA59F96B50B97E63C(iParam1, 0))
	{
		unk_0x2976DB62CAE67C30(iParam0, iParam1, Local_308, fLocal_327, 3, 1092616192, 0);
	}
}

char* func_206()
{
	return "mini@strip_club@idles@bouncer@base";
}

char* func_207()
{
	if (func_77() == 0)
	{
		return "facials@p_m_zero@variations@happy";
	}
	else if (func_77() == 1)
	{
		return "facials@p_m_one@variations@happy";
	}
	else if (func_77() == 2)
	{
		return "facials@p_m_two@variations@happy";
	}
	return "facials@p_m_zero@variations@happy";
}

void func_208()
{
	sLocal_276 = "move_p_m_one_idles@generic";
	unk_0x131ED02492676000(sLocal_276);
}

int func_209(int iParam0)
{
	if (unk_0x68AEFA37A65085FD(iParam0, joaat("blimp")))
	{
		return 1;
	}
	else if (unk_0x68AEFA37A65085FD(iParam0, joaat("cargobob")))
	{
		return 1;
	}
	else if (unk_0x68AEFA37A65085FD(iParam0, joaat("cargobob2")))
	{
		return 1;
	}
	else if (unk_0x68AEFA37A65085FD(iParam0, joaat("cargobob3")))
	{
		return 1;
	}
	else if (unk_0x68AEFA37A65085FD(iParam0, joaat("buzzard")))
	{
		return 1;
	}
	else if (unk_0x68AEFA37A65085FD(iParam0, joaat("buzzard2")))
	{
		return 1;
	}
	else if (unk_0x68AEFA37A65085FD(iParam0, joaat("maverick")))
	{
		return 1;
	}
	else if (unk_0x68AEFA37A65085FD(iParam0, joaat("polmav")))
	{
		return 1;
	}
	else if (unk_0x68AEFA37A65085FD(iParam0, joaat("annihilator")))
	{
		return 1;
	}
	else if (unk_0x68AEFA37A65085FD(iParam0, joaat("frogger")))
	{
		return 1;
	}
	else if (unk_0x68AEFA37A65085FD(iParam0, joaat("frogger2")))
	{
		return 1;
	}
	return 0;
}

int func_210(var uParam0, struct<3> Param1, bool bParam4, float fParam5)
{
	if (func_212(uParam0))
	{
		unk_0x50BED1B1922FF68E(*uParam0);
		if (!func_211(Param1))
		{
			unk_0x03D382CB0B44E2FC(*uParam0, Param1, 1, 0, 0, 1);
			if (bParam4)
			{
				unk_0xE922BAA80E8F9324(*uParam0, fParam5);
			}
			unk_0xB11D151E210D4FAC(*uParam0, 1084227584);
		}
		return 1;
	}
	return 0;
}

int func_211(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_212(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0xA5D3CD332CD10EE9();
	if (unk_0xAE06B9E39EBDE049(iVar0))
	{
		if (!func_144(iVar0))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && unk_0x910DFF8E55ABB8EC(iVar0, unk_0x9B0761B4C3EB8BC7(), Local_63, 0, 1, 0))
			{
				unk_0x50BED1B1922FF68E(iVar0);
				unk_0x58ADF88C51AAFDC5(iVar0, 0, 0);
				unk_0x80250B8368A4E611(iVar0, 0, 0);
				unk_0x6A8F948698B360B4(iVar0, 1);
				unk_0x4F3C4F457D44BB0F(iVar0, 1, 1);
				*uParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

int func_213(int iParam0)
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
			if (func_214())
			{
				Global_27 = unk_0x578C4EF320340AF7();
				return 1;
			}
		}
	}
	return 0;
}

int func_214()
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

void func_215(bool bParam0)
{
	struct<4> Var0;
	float fVar4;
	
	func_65();
	if (unk_0xA59F96B50B97E63C(uLocal_274[0], 0))
	{
		return;
	}
	unk_0xAF7D4BF357E8B79E(Local_308 + Vector(0f, 1f, 1f) * Vector(10f, 10f, 10f), Local_308 + Vector(0f, -1f, -1f) * Vector(10f, 10f, 10f), 0, 1);
	fVar4 = SYSTEM::VDIST(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), unk_0x3E4D3CCC220BDFB1(uLocal_274[0], 1));
	if (iLocal_78 != 9)
	{
		if (((fVar4 >= (200f / 2f) && func_192()) && !func_267(uLocal_333, 2)) || func_254(uLocal_274[0], 0))
		{
			if (unk_0x8F678487EEBD8CE4(uLocal_281))
			{
				unk_0x93370FA10F15BE44(&uLocal_281);
			}
			if (unk_0x8F678487EEBD8CE4(uLocal_280))
			{
				unk_0x93370FA10F15BE44(&uLocal_280);
			}
			func_251(0);
			func_84("SCLUB_HOME_R", uLocal_76[0]);
			iLocal_78 = 9;
		}
	}
	if (unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0))
	{
		if (iLocal_78 != 8)
		{
			if (unk_0x8F678487EEBD8CE4(uLocal_281))
			{
				unk_0x93370FA10F15BE44(&uLocal_281);
			}
			if (unk_0x8F678487EEBD8CE4(uLocal_280))
			{
				unk_0x93370FA10F15BE44(&uLocal_280);
			}
			iLocal_78 = 8;
		}
	}
	if (func_240(uLocal_274[0], &uLocal_267, &uLocal_264))
	{
		func_66(4);
	}
	if (iLocal_78 <= 1)
	{
		func_259(1);
	}
	switch (iLocal_78)
	{
		case 0:
			iLocal_79 = 0;
			if (func_192())
			{
				if (!func_267(uLocal_333, 1))
				{
					unk_0x6A8F948698B360B4(uLocal_274[0], 1);
					func_84("SCLUB_HOME_MEET", uLocal_76[0]);
					func_251(0);
					func_27(&uLocal_333, 1);
				}
				iLocal_78 = 1;
			}
			break;
		
		case 1:
			iLocal_79 = 1;
			Var0 = { func_71(uLocal_76[0]) };
			if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				iLocal_340 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
				uLocal_334 = unk_0x4F5F2FB7AE0EB7AB(iLocal_340);
			}
			if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), unk_0x3E4D3CCC220BDFB1(uLocal_274[0], 1), 3f, 3f, 3f, 0, 1, 0) || (unk_0x80FF6C016CDB0FAF(iLocal_340, 0) && func_239(iLocal_340, uLocal_274[0], 1) <= 10f))
			{
				unk_0x6A8F948698B360B4(uLocal_274[0], 0);
				if (unk_0xAE06B9E39EBDE049(iLocal_340) && (unk_0x99E61B3887CC8E71(iLocal_340) < 1 || (!bParam0 && !unk_0xB86B8E85030B1552(unk_0x36FE6D3220816ADA(iLocal_340)))))
				{
					if (!func_70("SCLUB_SMALL_CAR", &Var0))
					{
						func_67("SCLUB_SMALL_CAR", uLocal_76[0], 0);
						func_173(uLocal_274[0], "NEED_A_VEHICLE", 10);
					}
				}
				else
				{
					unk_0xD289B55B6AADBA10(1);
					unk_0x9B94F6169B0DAEFD(uLocal_274[0]);
					func_237();
					if (!func_267(uLocal_333, 2))
					{
						func_27(&uLocal_333, 2);
					}
					func_236();
					func_86();
					func_229(39, 1);
					func_229(40, 1);
					func_229(41, 1);
					func_229(42, 1);
					func_229(43, 1);
					func_229(44, 1);
					iLocal_78 = 2;
				}
			}
			else if (func_70("SCLUB_SMALL_CAR", &Var0))
			{
				unk_0xD289B55B6AADBA10(1);
			}
			break;
		
		case 2:
			iLocal_79 = 2;
			if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				if (unk_0x47DBF174A0CB9D55(uLocal_274[0], 0))
				{
					iLocal_78 = 3;
				}
			}
			else
			{
				func_173(uLocal_274[0], "NEED_A_VEHICLE", 10);
				iLocal_78 = 3;
			}
			break;
		
		case 3:
			iLocal_79 = 3;
			func_226();
			if (!func_171())
			{
				if (func_192())
				{
					unk_0x27E543EDE9AEA8F2(Local_308 - Vector(3f, 3f, 3f), Local_308 + Vector(3f, 3f, 3f), 0, 1);
					unk_0xAF7D4BF357E8B79E(Local_308 - Vector(3f, 3f, 3f), Local_308 + Vector(3f, 3f, 3f), 0, 1);
					unk_0xF27E737981AFB47D(Local_308, 10f, 0, 0, 0, 0, 0, 0);
					unk_0x773B9DEB93E81B2F(Local_308, 10f, 0);
					uLocal_301 = unk_0xC08A186299DFDA0A(Local_308 - Vector(35f, 35f, 35f), Local_308 + Vector(35f, 35f, 35f), 0, 1, 1, 1);
					func_8(&uLocal_246);
					if (bParam0)
					{
						func_91(1);
						func_225();
					}
					else
					{
						iLocal_74 = 3;
					}
				}
			}
			break;
		
		case 4:
			iLocal_79 = 4;
			func_222(fVar4, Local_311);
			func_216();
			if ((func_4(&uLocal_258) > 45f || SYSTEM::VDIST2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), Local_320) > (100f * 100f)) && func_25(unk_0x9B0761B4C3EB8BC7(), Local_311, 1) > 100f)
			{
				if (uLocal_76[0] == 8)
				{
					func_175("SC_WALK", 0, 0, 0);
				}
				else
				{
					func_173(uLocal_274[0], "GENERIC_FUCK_YOU", 10);
				}
				func_66(3);
			}
			else if (func_254(uLocal_274[0], 1))
			{
				if (unk_0x8F678487EEBD8CE4(uLocal_281))
				{
					unk_0x93370FA10F15BE44(&uLocal_281);
				}
				if (unk_0x8F678487EEBD8CE4(uLocal_280))
				{
					unk_0x93370FA10F15BE44(&uLocal_280);
				}
				func_251(0);
				func_84("SCLUB_HOME_R", uLocal_76[0]);
				iLocal_78 = 9;
			}
			else if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_308, 3f, 3f, 2f, 1, 1, 2) || unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_305, 5f, 5f, 2f, 1, 1, 1))
			{
				if (func_36(1, 0, 1))
				{
					iLocal_74 = 1;
				}
			}
			else if (!unk_0xEEB37DB9533AA764(unk_0x9B0761B4C3EB8BC7()))
			{
				func_225();
			}
			break;
		
		case 5:
			iLocal_79 = 5;
			func_222(fVar4, Local_308);
			func_216();
			func_237();
			if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_308, 1f, 1f, 2f, 1, 1, 2))
			{
				iLocal_78 = 6;
			}
			else
			{
				if (unk_0xEEB37DB9533AA764(unk_0x9B0761B4C3EB8BC7()))
				{
					func_225();
				}
				else
				{
					func_61(Local_308);
				}
				if (func_107("SCLUB_HOME_WALK"))
				{
					unk_0xD289B55B6AADBA10(1);
				}
			}
			break;
		
		case 6:
			if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				if (unk_0xAE06B9E39EBDE049(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0)))
				{
					if (func_59(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), 3f, 2, 0.5f, 0, 1, 0))
					{
						func_58();
						func_203(uLocal_274[0], Local_305);
						if (uLocal_76[0] == 9 || uLocal_76[0] == 8)
						{
							func_175("SC_GO_DOOR", 0, 0, 0);
						}
						else
						{
							func_175("SC_FOLLOWD", 0, 0, 1);
						}
						iLocal_78 = 7;
					}
				}
			}
			else if (unk_0xEEB37DB9533AA764(unk_0x9B0761B4C3EB8BC7()))
			{
				unk_0x2BB0EF9DE445EA13(uLocal_274[0]);
				func_225();
				unk_0xD289B55B6AADBA10(1);
			}
			break;
		
		case 7:
			iLocal_79 = 7;
			if ((!func_171() && !unk_0x2F80DB5A41D045E6()) && !func_267(uLocal_333, 2048))
			{
				Var0 = { func_71(uLocal_76[0]) };
				func_85("SCLUB_FOLLOW_H", &Var0, 7500, 1);
				func_86();
				func_251(0);
				func_27(&uLocal_333, 2048);
			}
			if ((unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_311, 5f, 5f, 2f, 0, 1, 1) || unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_305, 5f, 5f, 2f, 0, 1, 1)) && unk_0xEEB37DB9533AA764(unk_0x9B0761B4C3EB8BC7()))
			{
				if (func_36(1, 0, 1))
				{
					iLocal_74 = 1;
				}
			}
			break;
		
		case 8:
			if ((!func_267(uLocal_331, 4096) && !func_171()) && !unk_0x6F683C1C0BB1BA8D(uLocal_274[0]))
			{
				if (iLocal_79 > 1 || SYSTEM::VDIST2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), unk_0x3E4D3CCC220BDFB1(uLocal_274[0], 1)) < (3f * 3f))
				{
					func_173(uLocal_274[0], "GENERIC_FRIGHTENED_MED", 10);
					func_27(&uLocal_331, 4096);
				}
			}
			if (!unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0))
			{
				iLocal_78 = iLocal_79;
			}
			break;
		
		case 9:
			if (fVar4 > 200f)
			{
				func_66(1);
			}
			else if (fVar4 <= (200f / 2f) && !func_254(uLocal_274[0], 1))
			{
				unk_0xB80B2936A29B2666();
				iLocal_78 = iLocal_79;
				if (unk_0xEEB37DB9533AA764(unk_0x9B0761B4C3EB8BC7()))
				{
					func_225();
				}
			}
			break;
	}
}

void func_216()
{
	char* sVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (!func_267(uLocal_333, 16))
	{
		if (func_217())
		{
			func_27(&uLocal_333, 16);
		}
		else
		{
			return;
		}
	}
	sVar0 = func_100(uLocal_274[0], 0, 0);
	if (!func_267(uLocal_333, 8))
	{
		if (!func_267(uLocal_333, 4))
		{
			if (!func_267(uLocal_331, 256))
			{
				if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
				{
					func_175("SC_BJ", 0, 0, 0);
				}
				func_27(&uLocal_331, 256);
			}
			else
			{
				unk_0x131ED02492676000(sVar0);
				func_27(&uLocal_333, 4);
			}
		}
		else if (unk_0xC614DDE265D18415(sVar0))
		{
			func_94(uLocal_274[0], 1, 1, -1, 1);
			unk_0xCBA6B2B569DCAFD8(uLocal_274[0], 1);
			func_7(&uLocal_255);
			func_27(&uLocal_333, 8);
		}
	}
	else if (func_267(uLocal_333, 4))
	{
		iVar1 = 0;
		bVar2 = unk_0x9934470AA0A08B57(uLocal_274[0], sVar0, func_95(4, 1, 1, func_98(iLocal_340)), 3);
		bVar3 = unk_0x7922FF28ED63354A(unk_0x9B0761B4C3EB8BC7());
		bVar4 = unk_0x16BC17A8EDC701A2(uLocal_274[0], 242628503) == 7;
		bVar5 = unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0);
		bVar6 = false;
		if (bVar5)
		{
			if (unk_0xAE06B9E39EBDE049(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0)) && !unk_0xA59F96B50B97E63C(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), 0))
			{
				bVar6 = (unk_0x4162501391EDB9BF(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0)) && unk_0xF3A639BEE7AADF55(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0)) > 5f);
			}
		}
		if ((((!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) || func_4(&uLocal_255) > 35f) || SYSTEM::VDIST(Local_308, unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1)) < 75f) || bVar3) || bVar6)
		{
			if (!bVar4 && !bVar2)
			{
				unk_0x756D74A3EF0AB788(uLocal_274[0], sVar0, func_95(4, 1, 1, func_98(iLocal_340)), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			if (bVar3)
			{
				iLocal_335 = 2000;
			}
			iVar1 = 1;
		}
		else if (bVar4)
		{
			iVar1 = 1;
		}
		if (bVar2)
		{
			func_256();
		}
		if ((iVar1 && bVar4) && !bVar2)
		{
			if (!bVar3 && bVar5)
			{
				if (bVar6)
				{
					unk_0x697DA7132EE43ABC(unk_0x9B0761B4C3EB8BC7(), (unk_0x4F5F2FB7AE0EB7AB(unk_0x9B0761B4C3EB8BC7()) - SYSTEM::CEIL((IntToFloat(unk_0xB4BD22A5188A2545(unk_0x9B0761B4C3EB8BC7())) * 0.1f))), 0);
					func_173(unk_0x9B0761B4C3EB8BC7(), "GENERIC_CURSE_HIGH", 10);
				}
				else
				{
					func_173(unk_0x9B0761B4C3EB8BC7(), "SEX_CLIMAX", 10);
				}
				func_27(&uLocal_331, 128);
			}
			unk_0x1082C25039B168F8(sVar0);
			func_73(&uLocal_333, 4);
		}
		if (!func_267(uLocal_331, 64))
		{
			if (func_4(&uLocal_255) > 10f)
			{
				func_173(unk_0x9B0761B4C3EB8BC7(), "SEX_GENERIC", 10);
				func_173(uLocal_274[0], "SEX_ORAL", 10);
				func_27(&uLocal_331, 64);
			}
		}
		unk_0x8CFE3E356110EB39();
		func_256();
	}
}

int func_217()
{
	struct<3> Var0;
	var uVar3;
	
	if (!func_192())
	{
		return 0;
	}
	func_64(&Var0, &uVar3, 0);
	if (((SYSTEM::VDIST(Local_308, unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1)) > (75f * 2f) && SYSTEM::VDIST(Var0, unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1)) > (75f / 2f)) && func_116(uLocal_76[0]) > 1) && func_218())
	{
		return 1;
	}
	return 0;
}

int func_218()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		return 0;
	}
	iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
	if (unk_0x80FF6C016CDB0FAF(iVar0, 0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iVar0);
		if (func_220(iVar1, 0) && func_219(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_219(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		if (unk_0xC71761E30ACCF098(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (unk_0x7F8B14CBFB9813E5(iParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, unk_0x214B1F24249CD428(iParam0, iVar1, unk_0x7F8B14CBFB9813E5(iParam0, iVar1)), 16);
						iVar2 = unk_0x856D5567211886A2(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == unk_0x856D5567211886A2("SABRE_CAG"))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (unk_0x36FE6D3220816ADA(iParam0))
		{
			case joaat("peyote2"):
				if ((!unk_0xAACD889100BCBCFA(iParam0, 2) && !unk_0xAACD889100BCBCFA(iParam0, 3)) && !unk_0xAACD889100BCBCFA(iParam0, 4))
				{
					return 0;
				}
				break;
			
			case joaat("peyote3"):
				if (((!unk_0xAACD889100BCBCFA(iParam0, 2) && !unk_0xAACD889100BCBCFA(iParam0, 3)) && !unk_0xAACD889100BCBCFA(iParam0, 4)) && !unk_0xAACD889100BCBCFA(iParam0, 1))
				{
					return 0;
				}
				break;
			
			case joaat("coquette4"):
				if (!unk_0xAACD889100BCBCFA(iParam0, 1))
				{
					return 0;
				}
				break;
			
			case joaat("zorrusso"):
				if (unk_0x7F8B14CBFB9813E5(iParam0, 10) == -1)
				{
					return 0;
				}
				break;
			
			case joaat("manana2"):
				if (unk_0xAACD889100BCBCFA(iParam0, 1))
				{
					return 0;
				}
				break;
		}
		switch (unk_0xEBDF12807547303A(iParam0))
		{
			case -2066252141:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case 1486715695:
			case -1917671975:
			case -1405350320:
			case -157990217:
			case -280076747:
			case 1710903184:
			case 1663892749:
			case 434478421:
			case 1816176348:
			case 919485892:
			case 945079693:
			case 85100643:
			case 1939145032:
			case 1869774540:
			case -28233912:
			case -1150063973:
			case -463340997:
			case -703649403:
			case 197952738:
			case -208246612:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1910741341:
			case -1158091941:
			case -1834221859:
			case -1453479140:
			case -1954624455:
			case 1837596901:
			case 2013836096:
			case 1374303184:
			case 1419869906:
			case -526725184:
			case 1610027666:
			case -970031572:
			case 2071837743:
			case 1482989244:
			case 2130662788:
			case -1546132012:
			case 1410462333:
			case 1192783831:
			case -1304848574:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
			case 510359473:
			case -988377294:
			case 954521785:
			case 584837381:
			case -2123959937:
			case 1074598648:
			case 1818992907:
			case -370341013:
			case 1240573865:
			case -627376728:
			case 986556497:
			case -1852541008:
			case -605059493:
			case 1751095603:
			case -991881300:
				return 1;
				break;
		}
		if (unk_0xEBDF12807547303A(iParam0) == 931866387 && unk_0x36FE6D3220816ADA(iParam0) == joaat("slamvan"))
		{
			return 1;
		}
		if ((unk_0xEBDF12807547303A(iParam0) == 1480261038 && unk_0x36FE6D3220816ADA(iParam0) == joaat("weevil")) || unk_0x36FE6D3220816ADA(iParam0) == joaat("brioso2"))
		{
			return 1;
		}
	}
	return 0;
}

int func_220(int iParam0, bool bParam1)
{
	if ((((unk_0x5874D60325749F00(iParam0) || unk_0xF9C3E2B9AA9E2294(iParam0)) || unk_0x442D6659150AF4B3(iParam0)) || unk_0xCA6AF782C906AC86(iParam0)) || unk_0x97AFEF6099069369(iParam0))
	{
		return 0;
	}
	if (func_221(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("caddy")) || iParam0 == joaat("caddy2"))
		{
			return 0;
		}
	}
	if (((((((((((((((iParam0 == joaat("issi2") || iParam0 == joaat("hotknife")) || iParam0 == joaat("jb700")) || iParam0 == joaat("jester")) || iParam0 == joaat("jester2")) || iParam0 == joaat("stromberg")) || iParam0 == joaat("barrage")) || iParam0 == joaat("kamacho")) || iParam0 == joaat("gb200")) || iParam0 == joaat("fagaloa")) || iParam0 == joaat("tezeract")) || iParam0 == joaat("swinger")) || iParam0 == joaat("imperator")) || iParam0 == joaat("locust")) || iParam0 == joaat("schlagen")) || iParam0 == joaat("outlaw"))
	{
		return 0;
	}
	return 1;
}

int func_221(int iParam0)
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 1;
			break;
	}
	return 0;
}

void func_222(float fParam0, struct<3> Param1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (!func_267(uLocal_331, 262144))
	{
		if (func_224(uLocal_274[0]))
		{
			if (uLocal_76[0] == 8)
			{
				func_175("SC_STEALC", 0, 0, 0);
			}
			else
			{
				func_173(uLocal_274[0], "GENERIC_SHOCKED_MED", 10);
			}
			func_8(&uLocal_249);
			func_27(&uLocal_331, 262144);
		}
	}
	else if (func_4(&uLocal_249) > 10f)
	{
		func_73(&uLocal_331, 262144);
		func_8(&uLocal_249);
	}
	if ((fParam0 > 5f || !func_192()) || func_267(uLocal_333, 4))
	{
		return;
	}
	if (!func_267(uLocal_331, 1) && !func_267(uLocal_331, 128))
	{
		if (SYSTEM::VDIST(Param1, unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1)) < 75f)
		{
			if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
			{
				if (func_175("SC_NEAR", 0, 0, 0))
				{
					func_27(&uLocal_331, 1);
				}
			}
			else
			{
				func_27(&uLocal_331, 1);
			}
			unk_0xF27E737981AFB47D(Local_308, 5f, 0, 0, 0, 0, 0, 0);
		}
	}
	if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		return;
	}
	iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
	if (!unk_0x80FF6C016CDB0FAF(iVar0, 0))
	{
		if (!func_267(uLocal_331, 16))
		{
			func_173(uLocal_274[0], "NEED_A_VEHICLE", 10);
			func_27(&uLocal_331, 16);
			func_8(&uLocal_246);
		}
		if (!func_267(uLocal_331, 4))
		{
			func_73(&uLocal_331, 4);
		}
		if (!func_267(uLocal_331, 8))
		{
			func_73(&uLocal_331, 8);
		}
	}
	else
	{
		fVar1 = unk_0xF3A639BEE7AADF55(iVar0);
		fVar2 = unk_0x0A68E34D0BB50B1C(iVar0);
		if (fVar1 < (fVar2 * 0.9f) || fVar1 > (fVar2 * 0.1f))
		{
			func_8(&uLocal_252);
		}
		if (!func_267(uLocal_331, 4))
		{
			if (func_4(&uLocal_246) > 15f && func_4(&uLocal_252) > 5f)
			{
				func_173(uLocal_274[0], "DRIVEN_FAST", 10);
				func_27(&uLocal_331, 4);
				func_8(&uLocal_246);
			}
		}
		else if (func_4(&uLocal_246) < 5f)
		{
			func_73(&uLocal_331, 4);
			func_8(&uLocal_246);
		}
		if (!func_267(uLocal_331, 8))
		{
			if (func_4(&uLocal_246) > 15f && func_4(&uLocal_252) > 5f)
			{
				func_173(uLocal_274[0], "DRIVEN_SLOW", 10);
				func_27(&uLocal_331, 4);
				func_8(&uLocal_246);
			}
		}
		else if (func_4(&uLocal_246) < 5f)
		{
			func_73(&uLocal_331, 8);
			func_8(&uLocal_246);
		}
		if (!func_267(uLocal_331, 131072))
		{
			if (func_223(uLocal_274[0], &uLocal_334))
			{
				if (func_4(&uLocal_249) > 5f)
				{
					func_173(uLocal_274[0], "CRASH_GENERIC_DRIVEN", 10);
					func_27(&uLocal_331, 131072);
					func_8(&uLocal_246);
				}
			}
		}
		else if (func_4(&uLocal_249) > 5f)
		{
			func_73(&uLocal_331, 131072);
			func_8(&uLocal_249);
		}
		if (!func_267(uLocal_331, 65536))
		{
			if (func_4(&uLocal_246) > 30f || (func_4(&uLocal_246) > 10f && !func_267(uLocal_331, 32)))
			{
				func_173(uLocal_274[0], "BOOTY_FLIRT", 10);
				func_27(&uLocal_331, 32);
				func_27(&uLocal_331, 524288);
				func_8(&uLocal_246);
			}
			else if (func_267(uLocal_331, 524288))
			{
				if (!unk_0x6F683C1C0BB1BA8D(uLocal_274[0]) && func_4(&uLocal_246) > 4f)
				{
					func_173(unk_0x9B0761B4C3EB8BC7(), "BOOTY_FLIRT_RESP", 10);
					func_73(&uLocal_331, 524288);
				}
			}
		}
	}
}

int func_223(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
	if (unk_0x80FF6C016CDB0FAF(iVar0, 0))
	{
		if (unk_0xACBCFA3095C5A434(uParam0, iVar0))
		{
			if (unk_0x4162501391EDB9BF(iVar0))
			{
				iVar1 = unk_0x4F5F2FB7AE0EB7AB(iVar0);
				iVar2 = (*uParam1 - iVar1);
				*uParam1 = iVar1;
				unk_0xBB7976F6FB9C9DD2(iVar0);
				if (iVar2 > 10)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_224(int iParam0)
{
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		if (unk_0xCA6B45BED95917BD(110, unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), 10f) && unk_0x67E2125E6EC33DB7(iParam0, unk_0x9B0761B4C3EB8BC7()))
		{
			return 1;
		}
	}
	return 0;
}

void func_225()
{
	func_87();
	func_8(&uLocal_246);
	if (unk_0xEEB37DB9533AA764(unk_0x9B0761B4C3EB8BC7()))
	{
		if (unk_0x8F678487EEBD8CE4(uLocal_280))
		{
			unk_0x93370FA10F15BE44(&uLocal_280);
		}
		if (!unk_0x8F678487EEBD8CE4(uLocal_281))
		{
			uLocal_281 = func_62(Local_311, 0);
		}
		func_8(&uLocal_258);
		Local_320 = { unk_0x3E4D3CCC220BDFB1(uLocal_274[0], 1) };
		iLocal_78 = 4;
	}
	else
	{
		func_8(&uLocal_249);
		func_61(Local_308);
		iLocal_78 = 5;
	}
}

void func_226()
{
	if (!func_267(uLocal_331, 1024))
	{
		if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0) && unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (func_227(uLocal_76[0]))
			{
				if (!func_171())
				{
					func_173(uLocal_274[0], "NICE_CAR", 10);
					func_27(&uLocal_331, 1024);
				}
			}
		}
	}
}

int func_227(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
	if (unk_0x80FF6C016CDB0FAF(iVar0, 0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iVar0);
		if (func_228(iParam0, iVar1))
		{
			return 1;
		}
	}
	return 0;
}

int func_228(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("manana"):
		case joaat("tornado"):
		case joaat("tornado3"):
		case joaat("tornado4"):
		case joaat("ztype"):
		case joaat("regina"):
			if (iParam0 == 0)
			{
				return 1;
			}
			break;
		
		case joaat("blista"):
		case joaat("surge"):
		case joaat("dilettante"):
		case joaat("penumbra"):
		case joaat("asterope"):
			if (iParam0 == 1)
			{
				return 1;
			}
			break;
		
		case joaat("dominator"):
		case joaat("gauntlet"):
		case joaat("phoenix"):
		case joaat("sabregt"):
		case joaat("bullet"):
		case joaat("banshee"):
		case joaat("peyote"):
		case joaat("buffalo"):
		case joaat("buffalo2"):
			if (iParam0 == 2)
			{
				return 1;
			}
			break;
		
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("jb700"):
		case joaat("stingergt"):
		case joaat("monroe"):
		case joaat("comet2"):
		case joaat("oracle"):
		case joaat("oracle2"):
		case joaat("intruder"):
		case joaat("jackal"):
		case joaat("exemplar"):
		case joaat("felon"):
		case joaat("superd"):
		case joaat("infernus"):
		case joaat("entityxf"):
		case joaat("adder"):
		case joaat("vacca"):
			if (iParam0 == 3 || iParam0 == 5)
			{
				return 1;
			}
			break;
		
		case joaat("baller"):
		case joaat("bison"):
		case joaat("dubsta"):
		case joaat("granger"):
		case joaat("patriot"):
		case joaat("baller2"):
		case joaat("bjxl"):
		case joaat("cavalcade"):
		case joaat("cavalcade2"):
		case joaat("gresley"):
		case joaat("landstalker"):
		case joaat("mesa"):
		case joaat("rancherxl"):
		case joaat("sandking"):
		case joaat("rebel"):
		case joaat("stretch"):
		case joaat("romero"):
		case joaat("coach"):
		case joaat("bus"):
			if (iParam0 == 4 || iParam0 == 7)
			{
				return 1;
			}
			break;
		
		case joaat("surano"):
		case joaat("rapidgt2"):
		case joaat("ninef2"):
		case joaat("zion2"):
		case joaat("tornado2"):
		case joaat("sentinel2"):
		case joaat("issi2"):
		case joaat("felon2"):
			if (iParam0 == 6 || iParam0 == 1)
			{
				return 1;
			}
			break;
		
		case joaat("vader"):
		case joaat("akuma"):
		case joaat("bagger"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("double"):
		case joaat("hexer"):
		case joaat("nemesis"):
		case joaat("ruffian"):
			if (iParam0 == 8)
			{
				return 1;
			}
			break;
		
		case joaat("fbi"):
		case joaat("taxi"):
		case joaat("pranger"):
		case joaat("ambulance"):
		case joaat("police3"):
			if (iParam0 == 9)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_229(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_235(iParam0, 2, 1))
		{
			func_234(iParam0, 2, 1);
		}
	}
	else if (func_235(iParam0, 2, 1))
	{
		func_230(iParam0, 2, 1);
	}
}

void func_230(int iParam0, int iParam1, bool bParam2)
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
		if (func_54() == 0)
		{
			uVar0 = func_232(func_233(iParam0), -1, 0);
			unk_0xD2459066EA58CE43(&uVar0, iParam1);
			func_231(func_233(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_111858.f_668[iParam0]), iParam1);
	}
}

void func_231(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_76(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, uParam1, iParam3);
	}
}

int func_232(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2551832[iParam0 /*3*/][func_76(iParam1)];
		if (unk_0xD2F202166691EDB2(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_233(int iParam0)
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

void func_234(int iParam0, int iParam1, bool bParam2)
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
		if (func_54() == 0)
		{
			uVar0 = func_232(func_233(iParam0), -1, 0);
			unk_0xBE20AB8238688965(&uVar0, iParam1);
			func_231(func_233(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xBE20AB8238688965(&(Global_111858.f_668[iParam0]), iParam1);
	}
}

int func_235(int iParam0, int iParam1, bool bParam2)
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
		if (func_54() == 0)
		{
			return unk_0xCE990E643CD9D0E5(func_232(func_233(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xCE990E643CD9D0E5(Global_111858.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_236()
{
	if (uLocal_76[0] == 8)
	{
		func_175("SC_GREET", 0, 0, 0);
	}
	else
	{
		func_173(uLocal_274[0], "GENERIC_HI_FLIRTY", 10);
	}
}

void func_237()
{
	if (!unk_0x7DA97DBB7F7D2DE5(uLocal_274[0]) && SYSTEM::VDIST(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), unk_0x3E4D3CCC220BDFB1(uLocal_274[0], 1)) < 10f)
	{
		unk_0xE19B69814D61BBA5(uLocal_274[0], func_238());
		unk_0xF5230D38AD1D873D(uLocal_274[0], 0);
	}
}

int func_238()
{
	return unk_0x14A1FF4316FA17CB(unk_0x2639A2323BEA8CC6());
}

float func_239(int iParam0, int iParam1, int iParam2)
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

int func_240(int iParam0, var uParam1, var uParam2)
{
	var uVar0;
	int iVar1;
	
	if (!func_10(uParam2))
	{
		func_7(uParam2);
	}
	if (func_4(uParam2) > 3f)
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			iVar1 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
		}
		if (func_243(iParam0, iVar1, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_241(&uVar0);
			if (unk_0xAE06B9E39EBDE049(iParam0))
			{
				if (!unk_0xA59F96B50B97E63C(iParam0, 0))
				{
					if (!unk_0xD9FAB638FEAD2E31(iLocal_72))
					{
						unk_0xDE8F8016287F771F("BootyCall", &iLocal_72);
					}
					unk_0xEFBCE8F8316F89EA(2, iLocal_72, 1862763509);
					unk_0xEFBCE8F8316F89EA(2, 1862763509, iLocal_72);
					unk_0xD3D9D7C84656DAE5(iParam0, iLocal_72);
					unk_0x8B18A80E8EB15510(iParam0, unk_0x9B0761B4C3EB8BC7(), 500f, -1, 0, 0);
				}
			}
			func_8(uParam2);
			return 1;
		}
	}
	return 0;
}

void func_241(var uParam0)
{
	switch (*uParam0)
	{
		case 1:
		case 4:
		case 16:
			func_242(1);
			break;
		
		case 2:
			break;
	}
}

void func_242(bool bParam0)
{
	Global_110852 = 0;
	Global_110852.f_1 = -1;
	Global_110852.f_2 = -1;
	if (bParam0)
	{
		func_124(-1);
	}
}

int func_243(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x9B0761B4C3EB8BC7();
	if (!unk_0xA59F96B50B97E63C(iVar0, 0) && !unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		if (!func_267(*uParam2, 1))
		{
			if (func_250(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_267(*uParam2, 2))
		{
			if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_267(*uParam2, 4))
		{
			if (func_248(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_267(*uParam2, 8))
		{
			if (func_247(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_267(*uParam2, 128);
		if (bParam4)
		{
			if (func_244(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_267(*uParam2, 16))
		{
			if (func_244(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (iParam7 && unk_0xCDF860E56BBCC6B4(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_244(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_59)
		{
			iLocal_60 = unk_0x4F5F2FB7AE0EB7AB(iParam0);
			bLocal_59 = true;
		}
		iLocal_61 = unk_0x4F5F2FB7AE0EB7AB(iParam0);
		iLocal_62 = (iLocal_60 - iLocal_61);
		iVar0 = unk_0xA5D3CD332CD10EE9();
		if (!unk_0xA59F96B50B97E63C(iVar0, 0))
		{
			if (unk_0xCDF860E56BBCC6B4(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_62) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_59)
		{
			if (unk_0xCDF860E56BBCC6B4(iParam0, unk_0x9B0761B4C3EB8BC7(), 1))
			{
				if (IntToFloat(iLocal_62) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xCDF860E56BBCC6B4(iParam0, unk_0x9B0761B4C3EB8BC7(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0xA5D3CD332CD10EE9();
		if (!unk_0xA59F96B50B97E63C(iVar1, 0))
		{
			if (unk_0xCDF860E56BBCC6B4(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0xA59F96B50B97E63C(iParam0, 0))
		{
			if (unk_0xC0736D5851285045(iParam0))
			{
				if (unk_0x754A4975FB27D0BA(iParam0) == unk_0x9B0761B4C3EB8BC7())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x42A04E707DE50816(unk_0x9B0761B4C3EB8BC7()))
		{
			if (unk_0xC2169C00B643278B(iParam0, unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (unk_0xECCAA5F5CD452617(unk_0x460153A63B9477BC()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x050DC9AD2DB177D0(unk_0x9B0761B4C3EB8BC7()))
	{
		if (unk_0x9F2D0A782C34E6FD(iParam0))
		{
			return 1;
		}
	}
	if (func_246(unk_0x9B0761B4C3EB8BC7(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0xCED6B5226244381C(iParam0) && func_245(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x47DBF174A0CB9D55(iParam0, 0))
		{
			if (unk_0xA65352E7FEA59881(unk_0x9B0761B4C3EB8BC7(), unk_0xA5D5B1042E8F47BD(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0xA65352E7FEA59881(unk_0x9B0761B4C3EB8BC7(), iParam0))
		{
			return 1;
		}
		if (!unk_0xA59F96B50B97E63C(iParam1, 0))
		{
			if (unk_0xCDF860E56BBCC6B4(iParam1, unk_0x9B0761B4C3EB8BC7(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_245(int iParam0, int iParam1)
{
	return func_239(unk_0x1FA7B77001D60F9D(unk_0x2639A2323BEA8CC6()), iParam0, iParam1);
}

int func_246(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x1386E5E658CE3032(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x7922FF28ED63354A(iParam0))
		{
			if (SYSTEM::VDIST(unk_0x3E4D3CCC220BDFB1(iParam0, 1), unk_0x3E4D3CCC220BDFB1(iParam1, 1)) < 2.5f)
			{
				if (unk_0x04055E36623F131B(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_247(int iParam0, int iParam1, var uParam2)
{
	if (unk_0xC0A3F78AF5448915(iParam0, 4))
	{
		if (unk_0x7922FF28ED63354A(iParam0) && !unk_0xEBFC112B3EEB18E5(iParam0))
		{
			if (unk_0xC2169C00B643278B(iParam1, unk_0x3E4D3CCC220BDFB1(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_248(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0xA59F96B50B97E63C(iParam1, 0))
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam1, 1) };
	}
	if (unk_0xC7EB33BFDB436C87(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x6F51C53F49CF1153(Var0, SYSTEM::TO_FLOAT(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0xC0A3F78AF5448915(iParam0, 2))
	{
		if (unk_0x7922FF28ED63354A(iParam0))
		{
			if (unk_0xC2169C00B643278B(iParam1, unk_0x3E4D3CCC220BDFB1(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
			{
				if (unk_0x04055E36623F131B(unk_0x9048E8838E822F21(iParam1), iParam0, 120f) && unk_0xD44D03437956A1ED(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x47DBF174A0CB9D55(unk_0x9048E8838E822F21(iParam1), 0))
			{
				iVar3 = unk_0xA5D5B1042E8F47BD(unk_0x9048E8838E822F21(iParam1), 0);
			}
			if (unk_0x887D491E579FA61E(iParam0) || func_249(iVar3))
			{
				if (unk_0xC2169C00B643278B(iParam1, unk_0x3E4D3CCC220BDFB1(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
				{
					if (unk_0x04055E36623F131B(unk_0x9048E8838E822F21(iParam1), iParam0, 120f) && unk_0xD44D03437956A1ED(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x5AC0C31BB5BC0343((Var0.x - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.x + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_249(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
		{
			if (unk_0x10D3F7E169A49C44(iParam0, -1, 0) != 0)
			{
				if (unk_0x1386E5E658CE3032(unk_0x9B0761B4C3EB8BC7(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_239(unk_0x9B0761B4C3EB8BC7(), iParam0, 1) < 40f)
						{
							if (unk_0x6FC5840B397E185A(unk_0x460153A63B9477BC(), &iVar1))
							{
								if ((unk_0x20F7576FDB52E2B0(iVar1) && unk_0xEA90A5DC55A2F652(iVar1) == iParam0) || (unk_0xA1914E72A0EB31D0(iVar1) && unk_0x9048E8838E822F21(iVar1) == unk_0x10D3F7E169A49C44(iParam0, -1, 0)))
								{
									if ((unk_0xEEB37DB9533AA764(unk_0x9B0761B4C3EB8BC7()) && unk_0x22D6FB6153F774D3(0, 24)) || (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) && unk_0x22D6FB6153F774D3(0, 69)))
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

int func_250(int iParam0, var uParam1)
{
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		if (unk_0xC0A3F78AF5448915(unk_0x9B0761B4C3EB8BC7(), 6))
		{
			if (unk_0x2311EB213A0CB707(unk_0x460153A63B9477BC(), iParam0) || unk_0x5E5402F6D3B26AFB(unk_0x460153A63B9477BC(), iParam0))
			{
				if (unk_0x04055E36623F131B(iParam0, unk_0x9B0761B4C3EB8BC7(), 90f))
				{
					if (func_245(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x578C4EF320340AF7();
						}
						else if ((unk_0x578C4EF320340AF7() - uParam1->f_1) > uParam1->f_3)
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

void func_251(int iParam0)
{
	struct<4> Var0;
	
	if (unk_0x8F678487EEBD8CE4(uLocal_282[iParam0]))
	{
		unk_0x93370FA10F15BE44(&(uLocal_282[iParam0]));
	}
	uLocal_282[iParam0] = func_252(uLocal_274[iParam0], 0, 145);
	Var0 = { func_71(uLocal_76[iParam0]) };
	unk_0xB023F5C66F5716C7(uLocal_282[iParam0], &Var0);
}

var func_252(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_253(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x8F678487EEBD8CE4(uVar0)) && unk_0x3030AE9FCF1BC243(&(Global_1848[iParam2 /*29*/].f_3)))
	{
		unk_0xB023F5C66F5716C7(uVar0, &(Global_1848[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_253(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xAE06B9E39EBDE049(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x2BE000892D65EA2A(iParam0);
	if (unk_0x20F7576FDB52E2B0(iParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(uVar0, func_63(unk_0x25DDB354A40FFCDB(), 1f, 1f));
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
		unk_0xFA81E0FBD7F5ACA0(uVar0, func_63(unk_0x25DDB354A40FFCDB(), 0.7f, 0.7f));
		unk_0x3060C53EAE54BBE7(uVar0, bParam1);
	}
	else if (unk_0x49116E591C7E1412(iParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(uVar0, func_63(unk_0x25DDB354A40FFCDB(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_254(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	float fVar7;
	
	Var0 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1) };
	Var3 = { unk_0x3E4D3CCC220BDFB1(iParam0, 1) };
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		uVar6 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
		if (unk_0x0BA10F0682201F00(iParam0) == func_238())
		{
			if (unk_0x80FF6C016CDB0FAF(uVar6, 0))
			{
				if (!unk_0xE0B3BC41DDA88DF0(iParam0, iVar6, 0) && SYSTEM::VDIST(Var0, Var3) > 10f)
				{
					return 1;
				}
			}
		}
	}
	if (iParam1 && func_267(uLocal_333, 2))
	{
		fVar7 = unk_0x0D77CDCF403AEBD2((Var0.f_2 - Var3.f_2));
		if (fVar7 > 8f)
		{
			return 1;
		}
	}
	return 0;
}

void func_255()
{
	if (!unk_0xA59F96B50B97E63C(uLocal_274[0], 0))
	{
		if (!unk_0xE9159DB182CF0841())
		{
			func_196(uLocal_274[0], unk_0x1BAE5C94E38E44FE(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), unk_0xEF7858F25585F853(unk_0x9B0761B4C3EB8BC7()), 0f, 2f, 0f));
			iLocal_74 = 1;
			iLocal_75 = 0;
		}
	}
}

void func_256()
{
	unk_0x0037AEC7A79CCCB4();
	func_257();
}

void func_257()
{
	Global_22411.f_134 = 1;
}

int func_258(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		if (bParam1)
		{
			return joaat("csb_stripper_01");
		}
		else
		{
			return joaat("s_f_y_stripper_01");
		}
	}
	else if (iParam0 == 1)
	{
		if (bParam1)
		{
			return joaat("csb_stripper_02");
		}
		else
		{
			return joaat("s_f_y_stripper_02");
		}
	}
	return 0;
}

void func_259(bool bParam0)
{
	struct<8> Var0;
	
	if (!func_165(iLocal_73))
	{
		iLocal_73 = func_169();
		func_159(&iLocal_73, 0, 0, unk_0x344C570D6F8700DF(5, 7), 0, 0, 0);
	}
	else if (bParam0)
	{
		if (!func_267(uLocal_333, 512))
		{
			if (func_266(iLocal_73) && unk_0x1D88F87079AF2FA7(uLocal_274[0]))
			{
				if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
				{
					StringCopy(&Var0, "SC_CANCEL_", 64);
					StringIntConCat(&Var0, uLocal_76[0], 64);
					func_193(&uLocal_81, 1, 0, func_194(uLocal_76[0]), 0, 1);
					func_265(&uLocal_81, func_112(uLocal_76[0]), "SHAUD", &Var0, 7, 0, 0, 1);
				}
				else
				{
					func_263();
				}
				func_262(uLocal_274[0]);
				func_27(&uLocal_333, 512);
			}
		}
		else if (func_261())
		{
			func_73(&uLocal_333, 512);
		}
		else if ((!func_171() && func_260()) && !func_261())
		{
			func_242(1);
			func_66(2);
		}
	}
}

int func_260()
{
	if (Global_21005 == 0)
	{
		return 1;
	}
	return 0;
}

int func_261()
{
	if (Global_21054 == 1 || Global_22021 == 1)
	{
		return 1;
	}
	return 0;
}

void func_262(int iParam0)
{
	if (!unk_0x5AEB5DDFFAD43CA5(uParam0))
	{
		unk_0x699F8132499577BD(iParam0, 1);
		if (unk_0x16BC17A8EDC701A2(iParam0, 242628503) != 1)
		{
			unk_0x4F83FEE4454169D4(&uLocal_339);
			unk_0x9DC06E2A59C5AEBB(&uLocal_339);
			unk_0xC02F1FF16ABCEA26(0, 8000);
			unk_0x3C1B180EE30D36EF(0, Local_305, 1.5f, -1, 0.25f, 0, 1193033728);
			unk_0x19F29730874AD6F1(uLocal_339);
			unk_0x9B6EC2CECE1010EF(iParam0, uLocal_339);
		}
	}
}

void func_263()
{
	int iVar0;
	
	if (func_264())
	{
		return;
	}
	iVar0 = func_115(uLocal_76[0]);
	func_109(-384575792, iVar0, 6, 3, func_113(), func_112(uLocal_76[0]), 0, 10000, -1, 0, -1, 0, 1);
}

int func_264()
{
	if (func_54() == 0)
	{
		return 1;
	}
	return 0;
}

int func_265(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_189(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21053 = 1;
	Global_21012 = 1;
	Global_21019 = 0;
	Global_21014 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 0;
	Global_21010 = 0;
	Global_21057 = 0;
	Global_21059 = 0;
	Global_2621441 = 0;
	return func_177(sParam3, iParam4, bParam7);
}

bool func_266(int iParam0)
{
	return func_164(func_169(), iParam0);
}

bool func_267(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_268(var uParam0, bool bParam1)
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	char cVar5[64];
	struct<16> Var21;
	struct<8> Var37;
	
	func_296();
	func_64(&Var0, &uVar3, bParam1);
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (fLocal_329 == -1f)
		{
			fLocal_329 = SYSTEM::VDIST(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), Var0);
		}
		if (iLocal_332 == -1)
		{
			iLocal_332 = uParam0->f_3;
		}
		if (!func_267(uLocal_333, 32))
		{
			func_292(&uLocal_278, func_294((*uParam0)[0], 0));
			func_291(&uLocal_278);
			func_27(&uLocal_333, 32);
			unk_0x131ED02492676000("mini@strip_club@idles@stripper");
			unk_0x131ED02492676000("gestures@f@standing@casual");
			func_290();
			return 0;
		}
		else if ((!func_289(&uLocal_278) || !unk_0xC614DDE265D18415("mini@strip_club@idles@stripper")) || !func_288())
		{
			return 0;
		}
		if (bLocal_337)
		{
			if (!unk_0xCFED0F4D63A92A70(1))
			{
				return 0;
			}
		}
		if (!func_267(uLocal_333, 1024))
		{
			uLocal_76[0] = (*uParam0)[0];
			uLocal_274[0] = unk_0xB3116B49FE00E2F1(26, func_294((*uParam0)[0], 0), Var0, uVar3, 1, 1);
			func_282(uLocal_274[0], uLocal_76[0], 0);
			unk_0x4E65320BC9AD521C(uLocal_274[iVar4], 1);
			unk_0xCBA6B2B569DCAFD8(uLocal_274[0], 1);
			unk_0x44EEDB6E2FB6904F(uLocal_274[0], 1);
			func_278(uLocal_274[0]);
			unk_0x756D74A3EF0AB788(uLocal_274[0], "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -1.5f, -1, 1, 0, 0, 0, 0);
			unk_0xA785552633ED203B(uLocal_274[iVar4], unk_0x9B0761B4C3EB8BC7(), -1, 2048, 4);
			unk_0xF5230D38AD1D873D(uLocal_274[0], 0);
			unk_0x3A2AAE59B4681DAF(uLocal_274[0], func_194((*uParam0)[0]));
			func_193(&uLocal_81, 1, uLocal_274[0], func_194((*uParam0)[0]), 0, 1);
			func_27(&uLocal_333, 1024);
		}
		if (SYSTEM::VDIST(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), Var0) > 100f)
		{
			if (func_192())
			{
				if (!func_267(uLocal_333, 1))
				{
					func_277(bParam1);
					func_251(0);
					func_27(&uLocal_333, 1);
				}
			}
			if (!func_267(uLocal_333, 64) && !func_267(uLocal_333, 512))
			{
				if (func_276(func_112((*uParam0)[0])))
				{
					StringCopy(&cVar5, "BC_PLYRC_", 64);
					if (func_77() == 2)
					{
						func_193(&uLocal_81, 0, unk_0x9B0761B4C3EB8BC7(), "TREVOR", 0, 1);
						StringConCat(&cVar5, "T", 64);
					}
					else if (func_77() == 0)
					{
						func_193(&uLocal_81, 0, unk_0x9B0761B4C3EB8BC7(), "MICHAEL", 0, 1);
						StringConCat(&cVar5, "M", 64);
					}
					else if (func_77() == 1)
					{
						func_193(&uLocal_81, 0, unk_0x9B0761B4C3EB8BC7(), "FRANKLIN", 0, 1);
						StringConCat(&cVar5, "F", 64);
					}
					func_193(&uLocal_81, 3, 0, func_194((*uParam0)[0]), 0, 1);
					Var21 = { func_275() };
					func_270(&uLocal_81, func_112((*uParam0)[0]), "BCAUD", &cVar5, &cVar5, &Var21, &Var21, 12, 1, 0, 0, 0);
					func_27(&uLocal_333, 64);
				}
				if (func_165(iLocal_73))
				{
					if (func_266(iLocal_73))
					{
						if ((*uParam0)[0] == 8 || (*uParam0)[0] == 9)
						{
							StringCopy(&Var37, "SC_CANCEL_", 64);
							StringIntConCat(&Var37, (*uParam0)[0], 64);
							func_193(&uLocal_81, 1, 0, func_194((*uParam0)[0]), 0, 1);
							func_265(&uLocal_81, func_112((*uParam0)[0]), "SHAUD", &Var37, 12, 0, 0, 1);
						}
						else
						{
							func_263();
						}
						func_27(&uLocal_333, 512);
					}
				}
			}
			else if (func_261())
			{
				func_73(&uLocal_333, 64);
				func_73(&uLocal_333, 512);
			}
			else if ((!func_171() && func_260()) && !func_261())
			{
				func_269((*uParam0)[0]);
				func_242(1);
				func_66(2);
			}
			if (!func_267(uLocal_333, 128))
			{
				if (!func_33(0))
				{
					func_67("SCLUB_HOME_C_H", uLocal_76[0], 0);
					func_27(&uLocal_333, 128);
				}
			}
			if (SYSTEM::VDIST(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), Var0) > (fLocal_329 + (200f * 3f)))
			{
				func_66(1);
			}
			else if (SYSTEM::VDIST(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), Var0) < fLocal_329)
			{
				fLocal_329 = SYSTEM::VDIST(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), Var0);
			}
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (func_77() == 2)
	{
		func_193(&uLocal_81, 0, unk_0x9B0761B4C3EB8BC7(), "TREVOR", 0, 1);
	}
	else if (func_77() == 0)
	{
		func_193(&uLocal_81, 0, unk_0x9B0761B4C3EB8BC7(), "MICHAEL", 0, 1);
	}
	else if (func_77() == 1)
	{
		func_193(&uLocal_81, 0, unk_0x9B0761B4C3EB8BC7(), "FRANKLIN", 0, 1);
	}
	return 1;
}

void func_269(int iParam0)
{
	if (Global_111858.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_1 < 0)
	{
		Global_111858.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_1 = 0;
	}
	Global_111858.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_1++;
}

int func_270(var uParam0, int iParam1, char* sParam2, char[4] cParam3, char[4] cParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar11;
	
	func_189(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_274();
	if (iParam8 == 1)
	{
		Global_21017 = 1;
	}
	else
	{
		Global_21017 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_272(2, &uVar0, &uVar11, cParam3, cParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_271(&uVar0, &uVar11, iParam7, bParam11);
}

int func_271(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_21006 = 0;
	if (Global_21005 == 0 || Global_21007 == 2)
	{
		if (Global_21005 != 0)
		{
			if (iParam2 > Global_21007)
			{
				if (bParam3 == 0)
				{
					unk_0xBE4122AC23440E7D(0);
					Global_19681.f_1 = 3;
					Global_21005 = 0;
					Global_21006 = 1;
					Global_21058 = 0;
					Global_21001 = 0;
					Global_21002 = 0;
				}
				else
				{
					func_188();
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
		if (func_187(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_186();
		Global_20294 = { Global_20459 };
		Global_21011 = Global_21012;
		Global_21018 = Global_21019;
		Global_2621442 = Global_2621441;
		Global_21020 = { Global_21036 };
		Global_21013 = Global_21014;
		Global_21995 = Global_21996;
		Global_22003 = { Global_22009 };
		Global_22001 = Global_22002;
		Global_21997 = Global_21998;
		Global_21999 = Global_22000;
		Global_20624.f_368 = Global_21992;
		Global_20624.f_369 = Global_21993;
		Global_20624.f_370 = Global_21994;
		Global_21001 = Global_21002;
		Global_21003 = Global_21004;
		if (Global_21263 == 0)
		{
			Global_21159[0 /*6*/] = { Global_21185[0 /*6*/] };
			Global_21159[1 /*6*/] = { Global_21185[1 /*6*/] };
			Global_21211[0 /*6*/] = { Global_21237[0 /*6*/] };
			Global_21211[1 /*6*/] = { Global_21237[1 /*6*/] };
			Global_21172[0 /*6*/] = { Global_21198[0 /*6*/] };
			Global_21172[1 /*6*/] = { Global_21198[1 /*6*/] };
			Global_21224[0 /*6*/] = { Global_21250[0 /*6*/] };
			Global_21224[1 /*6*/] = { Global_21250[1 /*6*/] };
		}
		if (Global_21011)
		{
			unk_0xD2459066EA58CE43(&Global_7551, 20);
			unk_0xD2459066EA58CE43(&Global_7552, 17);
			unk_0xD2459066EA58CE43(&Global_7553, 0);
			if (bParam3)
			{
				func_134();
				if (Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
				if (func_185())
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
					if (Global_21263 == 0)
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
			}
			if (func_23())
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
			}
			func_184();
			Global_21015 = bParam3;
		}
		Global_21007 = iParam2;
		if (Global_21001 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_21001)
			{
				StringCopy(&(Global_20624.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_20624.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_19871 = 0;
		func_183();
		return 1;
	}
	if (Global_21005 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_21007 || iParam2 == Global_21007)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_188();
	}
	return 0;
}

void func_272(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_273(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_273(var uParam0)
{
	Global_21002 = uParam0;
	Global_21012 = 1;
	Global_21019 = 0;
	Global_21014 = 0;
	Global_21996 = 0;
	Global_22002 = 0;
	Global_2621441 = 0;
}

void func_274()
{
	Global_21053 = 0;
	Global_21012 = 1;
	Global_21019 = 0;
	Global_21014 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_21019 = 0;
	Global_22002 = 0;
	Global_21010 = 0;
	Global_21057 = 0;
	Global_21059 = 0;
	Global_2621441 = 0;
}

struct<16> func_275()
{
	struct<16> Var0;
	
	StringCopy(&Var0, "BC_DECR_", 64);
	StringIntConCat(&Var0, uLocal_76[0], 64);
	return Var0;
}

int func_276(int iParam0)
{
	if ((Global_22119 || Global_22118) || Global_22120)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 154)
	{
		if (Global_19681.f_1 == 10)
		{
			if (Global_6866 == iParam0)
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
	return 0;
}

void func_277(bool bParam0)
{
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_84("SCLUB_HOME_MEE4", uLocal_76[0]);
			}
			else
			{
				func_84("SCLUB_HOME_MEET", uLocal_76[0]);
			}
			break;
		
		case 8:
			func_84("SCLUB_HOME_LIZ", uLocal_76[0]);
			break;
		
		case 9:
			func_84("SCLUB_HOME_HITCH", uLocal_76[0]);
			break;
	}
}

void func_278(int iParam0)
{
	if (unk_0x36FE6D3220816ADA(uParam0) == joaat("s_f_y_stripper_02"))
	{
		func_281(iParam0, 2, unk_0x344C570D6F8700DF(0, 3));
		func_280(iParam0, 2, unk_0x344C570D6F8700DF(0, 3));
		func_279(iParam0, 0, 0);
	}
}

void func_279(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x0151EA0F2AF75F2A(uParam0, 6, iParam1, iParam2))
	{
		unk_0x45F588C0DD767737(uParam0, 6, iParam1, iParam2, 0);
	}
}

void func_280(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x0151EA0F2AF75F2A(uParam0, 3, iParam1, iParam2))
	{
		unk_0x45F588C0DD767737(uParam0, 3, iParam1, iParam2, 0);
	}
}

void func_281(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x0151EA0F2AF75F2A(uParam0, 8, iParam1, iParam2))
	{
		unk_0x45F588C0DD767737(uParam0, 8, iParam1, iParam2, 0);
	}
}

void func_282(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	
	if (!unk_0x5AEB5DDFFAD43CA5(uParam0))
	{
		unk_0x6D2F52D05ED0E1F6(iParam0);
		bVar0 = false;
		if (unk_0x36FE6D3220816ADA(iParam0) == joaat("mp_f_stripperlite"))
		{
			bVar0 = true;
		}
		switch (iParam1)
		{
			case 0:
				if (bVar0)
				{
					func_287(iParam0, 1, 0);
					func_286(iParam0, 1, 0);
					func_280(iParam0, 1, 0);
					func_285(iParam0, 1, 0);
					func_284(iParam0, 1, -1, -1);
				}
				else
				{
					func_287(iParam0, 1, 1);
					func_286(iParam0, 2, 0);
					func_280(iParam0, 0, 0);
					func_285(iParam0, 0, 0);
					func_281(iParam0, 1, 0);
					func_283(iParam0, 0, 0);
					func_284(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 1:
				if (bVar0)
				{
					func_287(iParam0, 0, 0);
					func_286(iParam0, 0, 0);
					func_280(iParam0, 0, 0);
					func_285(iParam0, 0, 0);
					func_281(iParam0, 0, 0);
					func_284(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_287(iParam0, 0, 0);
					func_286(iParam0, 0, 0);
					func_280(iParam0, 0, 0);
					func_285(iParam0, 0, 0);
					func_279(iParam0, 4, 0);
					func_281(iParam0, 0, 0);
					func_284(iParam0, bParam2, 0, 4);
				}
				break;
			
			case 2:
				if (bVar0)
				{
					func_287(iParam0, 1, 0);
					func_286(iParam0, 1, 1);
					func_280(iParam0, 1, 0);
					func_285(iParam0, 1, 0);
					func_284(iParam0, 1, -1, -1);
				}
				else
				{
					func_287(iParam0, 0, 1);
					func_286(iParam0, 1, 1);
					func_280(iParam0, 1, 0);
					func_285(iParam0, 1, 1);
					func_281(iParam0, 1, 0);
					func_283(iParam0, 1, 0);
					func_284(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 3:
				if (bVar0)
				{
					func_287(iParam0, 0, 0);
					func_286(iParam0, 0, 1);
					func_280(iParam0, 0, 1);
					func_285(iParam0, 0, 1);
					func_281(iParam0, 0, 0);
					func_284(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_287(iParam0, 0, 0);
					func_286(iParam0, 2, 0);
					func_280(iParam0, 0, 2);
					func_285(iParam0, 1, 1);
					func_279(iParam0, 0, 0);
					func_281(iParam0, 0, 0);
					func_284(iParam0, bParam2, 2, 0);
				}
				break;
			
			case 4:
				if (bVar0)
				{
					func_287(iParam0, 1, 0);
					func_286(iParam0, 1, 0);
					func_280(iParam0, 1, 0);
					func_285(iParam0, 1, 0);
					func_284(iParam0, 1, -1, -1);
				}
				else
				{
					func_287(iParam0, 1, 0);
					func_286(iParam0, 2, 1);
					func_280(iParam0, 1, 2);
					func_285(iParam0, 0, 2);
					func_281(iParam0, 1, 0);
					func_283(iParam0, 1, 2);
					func_284(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 5:
				if (bVar0)
				{
					func_287(iParam0, 0, 0);
					func_286(iParam0, 0, 0);
					func_280(iParam0, 0, 0);
					func_285(iParam0, 0, 0);
					func_281(iParam0, 0, 0);
					func_284(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_287(iParam0, 1, 1);
					func_286(iParam0, 1, 0);
					func_280(iParam0, 0, 1);
					func_285(iParam0, 0, 2);
					func_279(iParam0, 2, 0);
					func_281(iParam0, 0, 0);
					func_284(iParam0, bParam2, 1, 2);
				}
				break;
			
			case 6:
				if (bVar0)
				{
					func_287(iParam0, 1, 0);
					func_286(iParam0, 1, 0);
					func_280(iParam0, 1, 0);
					func_285(iParam0, 1, 0);
					func_284(iParam0, 1, -1, -1);
				}
				else
				{
					func_287(iParam0, 0, 0);
					func_286(iParam0, 1, 0);
					func_280(iParam0, 0, 1);
					func_285(iParam0, 0, 1);
					func_281(iParam0, 1, 0);
					func_283(iParam0, 0, 1);
					func_284(iParam0, bParam2, 0, 1);
				}
				break;
			
			case 7:
				if (bVar0)
				{
					func_287(iParam0, 0, 0);
					func_286(iParam0, 0, 1);
					func_280(iParam0, 0, 0);
					func_285(iParam0, 0, 0);
					func_281(iParam0, 0, 0);
					func_284(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_287(iParam0, 1, 0);
					func_286(iParam0, 0, 2);
					func_280(iParam0, 1, 1);
					func_285(iParam0, 0, 1);
					func_279(iParam0, 0, 0);
					func_281(iParam0, 1, 0);
					func_284(iParam0, bParam2, 0, 0);
				}
				break;
			
			case 8:
				unk_0x45F588C0DD767737(iParam0, 3, 2, 0, 0);
				unk_0x45F588C0DD767737(iParam0, 4, 0, 1, 0);
				break;
			
			case 9:
				unk_0x45F588C0DD767737(iParam0, 0, 0, 1, 0);
				unk_0x45F588C0DD767737(iParam0, 2, 0, 1, 0);
				unk_0x45F588C0DD767737(iParam0, 3, 0, 0, 0);
				unk_0x45F588C0DD767737(iParam0, 4, 0, 1, 0);
				unk_0x45F588C0DD767737(iParam0, 8, 1, 0, 0);
				unk_0x45F588C0DD767737(iParam0, 10, 0, 0, 0);
				break;
			}
	}
}

void func_283(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x0151EA0F2AF75F2A(uParam0, 11, iParam1, iParam2))
	{
		unk_0x45F588C0DD767737(uParam0, 11, iParam1, iParam2, 0);
	}
}

void func_284(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (unk_0xA59F96B50B97E63C(uParam0, 0))
	{
		return;
	}
	iVar0 = unk_0x36FE6D3220816ADA(iParam0);
	if (iVar0 == func_258(0, 0) || iVar0 == func_258(0, 1))
	{
		if (bParam1)
		{
			func_280(iParam0, 2, 0);
			func_281(iParam0, 1, 0);
		}
	}
	else if (iVar0 == func_258(1, 0) || iVar0 == func_258(1, 1))
	{
		if (bParam1)
		{
			func_280(iParam0, 0, iParam2);
			func_279(iParam0, iParam3, 0);
			func_281(iParam0, 1, 0);
		}
	}
	else if (iVar0 == joaat("mp_f_stripperlite"))
	{
		if (bParam1)
		{
			func_281(iParam0, 1, 0);
		}
	}
}

void func_285(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x0151EA0F2AF75F2A(uParam0, 4, iParam1, iParam2))
	{
		unk_0x45F588C0DD767737(uParam0, 4, iParam1, iParam2, 0);
	}
}

void func_286(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x0151EA0F2AF75F2A(uParam0, 2, iParam1, iParam2))
	{
		unk_0x45F588C0DD767737(uParam0, 2, iParam1, iParam2, 0);
	}
}

void func_287(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x0151EA0F2AF75F2A(uParam0, 0, iParam1, iParam2))
	{
		unk_0x45F588C0DD767737(uParam0, 0, iParam1, iParam2, 0);
	}
}

int func_288()
{
	if (unk_0x7BCC91F3C1CF24E8(func_204()))
	{
		return 1;
	}
	else if (unk_0x338C0BA03A21B0DB(func_204()))
	{
		return 1;
	}
	return 0;
}

int func_289(var uParam0)
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

void func_290()
{
	if (!unk_0x7BCC91F3C1CF24E8(func_204()))
	{
		unk_0xBBF766AC368C3EB1(func_204());
	}
}

void func_291(var uParam0)
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

int func_292(var uParam0, int iParam1)
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
	iVar1 = func_293(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_293(var uParam0)
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

int func_294(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		return joaat("mp_f_stripperlite");
	}
	iVar0 = func_112(iParam0);
	if (iVar0 != 145)
	{
		return func_295(iVar0);
	}
	return func_258(0, 0);
}

int func_295(int iParam0)
{
	if (!func_80(iParam0))
	{
		return func_83(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_296()
{
	switch (uLocal_76[0])
	{
		case 1:
			Local_302 = { 128.1002f, -1895.001f, 22.4811f };
			Local_305 = { 128.1059f, -1896.819f, 22.6792f };
			Local_308 = { 133.9411f, -1881.89f, 22.5257f };
			Local_311 = { 130.1663f, -1893.057f, 22.3748f };
			Local_314 = { 133.4958f, -1891.641f, 22.4252f };
			fLocal_326 = 330.5705f;
			fLocal_327 = 244f;
			Local_323 = { 146.293f, -1888.049f, 22.2193f };
			fLocal_328 = fLocal_327;
			break;
		
		case 0:
			Local_302 = { -161.9628f, -1636.501f, 33.0339f };
			Local_305 = { -159.9415f, -1637.307f, 33.0339f };
			Local_308 = { -178.6316f, -1629.522f, 32.1789f };
			Local_311 = { -166.1453f, -1633.102f, 32.6574f };
			Local_314 = { -166.6636f, -1633.229f, 32.6567f };
			fLocal_326 = 108.072f;
			fLocal_327 = 180.9811f;
			Local_323 = { Local_308 };
			fLocal_328 = fLocal_327;
			break;
		
		case 4:
			Local_302 = { -198.3824f, 87.8785f, 68.7436f };
			Local_305 = { -197.2292f, 86.3497f, 68.7561f };
			Local_308 = { -200.9078f, 113.537f, 68.5518f };
			Local_311 = { -200.1384f, 96.9809f, 68.5203f };
			Local_314 = { -199.5068f, 95.7042f, 68.5193f };
			fLocal_326 = 48.99f;
			fLocal_327 = 64.3f;
			Local_323 = { Local_308 };
			fLocal_328 = fLocal_327;
			break;
		
		case 5:
			Local_302 = { -849.0348f, 510.6906f, 89.8218f };
			Local_305 = { -849.0408f, 508.5767f, 89.8218f };
			Local_308 = { -846.1005f, 520.2202f, 89.6217f };
			Local_311 = { -851.8972f, 512.73f, 89.6217f };
			Local_314 = { -851.8746f, 513.6746f, 89.6217f };
			fLocal_326 = 92.365f;
			fLocal_327 = 293f;
			Local_323 = { -860.4819f, 514.2496f, 88.1473f };
			fLocal_328 = fLocal_327;
			break;
		
		case 8:
			Local_302 = { -28.2427f, -1555.892f, 29.6918f };
			Local_305 = { -24.8589f, -1556.846f, 29.6819f };
			Local_308 = { -41.8174f, -1575.609f, 28.2831f };
			Local_311 = { -25.3404f, -1556.341f, 29.6919f };
			Local_314 = { -27.7382f, -1570.572f, 29.3f };
			fLocal_326 = 181.352f;
			fLocal_327 = 47.9206f;
			Local_323 = { Local_308 };
			fLocal_328 = fLocal_327;
			break;
		
		case 9:
			Local_302 = { 3313.487f, 5175.831f, 18.619f };
			Local_305 = { 3310.816f, 5176.331f, 18.619f };
			Local_308 = { 3334.321f, 5161.122f, 17.2996f };
			Local_311 = { 3317.788f, 5171.707f, 17.4471f };
			Local_314 = { 3318.076f, 5171.805f, 17.4385f };
			fLocal_326 = 236.4579f;
			Local_323 = { 3322.927f, 5148.607f, 17.3141f };
			fLocal_328 = 310.8648f;
			break;
	}
}

int func_297()
{
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bLocal_337)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_298(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x361B374A50D875B4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_302();
			}
			else
			{
				return 0;
			}
		}
		if (!func_301())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x25DDB354A40FFCDB())
				{
					if (!bParam2)
					{
						func_302();
					}
					else
					{
						return 0;
					}
				}
				if (func_300())
				{
					if (!bParam2)
					{
						func_302();
					}
					else
					{
						return 0;
					}
				}
				if (func_299(157))
				{
					if (!bParam2)
					{
						func_302();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x3BF0BB5923982C0D())
			{
				if (!bParam2)
				{
					func_302();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = unk_0x361B374A50D875B4();
	}
	if (iParam1 > -1)
	{
		Global_1312519 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			if (!bParam2)
			{
				func_302();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x3BF0BB5923982C0D())
	{
		if (!bParam2)
		{
			func_302();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_299(int iParam0)
{
	if (unk_0x16F1FCCC54559709(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_300()
{
	return Global_2451787.f_691;
}

bool func_301()
{
	return Global_1312872;
}

void func_302()
{
	unk_0xD39E529EBE5DB04F();
}

void func_303()
{
	unk_0x3C500CDAA21B50DA(0);
	unk_0xB904BE2F7DB70DDE();
	func_86();
	unk_0xB80B2936A29B2666();
	unk_0x1E337EE68290597A(uLocal_301, 0);
	unk_0xAF7D4BF357E8B79E(Local_308 - Vector(3f, 3f, 3f), Local_308 + Vector(3f, 3f, 3f), 1, 1);
	unk_0x6F9222C1283B5094(Local_308 - Vector(3f, 3f, 3f), Local_308 + Vector(3f, 3f, 3f), 15f, 1);
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), true, 0);
	}
	unk_0x3ED9330214992278(false, 0, 3000, 1, 0, 0);
	if (unk_0xAE06B9E39EBDE049(uLocal_274[0]))
	{
		if (!unk_0xA59F96B50B97E63C(uLocal_274[0], 0))
		{
			if (!func_267(uLocal_333, 8192))
			{
				unk_0x30291E2E564E9B47(uLocal_274[0], 1193033728, 0);
			}
			unk_0xCBA6B2B569DCAFD8(uLocal_274[0], 1);
			if (!unk_0xD9FAB638FEAD2E31(iLocal_72))
			{
				unk_0xDE8F8016287F771F("BootyCall", &iLocal_72);
			}
			unk_0xEFBCE8F8316F89EA(2, iLocal_72, 1862763509);
			unk_0xEFBCE8F8316F89EA(2, 1862763509, iLocal_72);
			unk_0xD3D9D7C84656DAE5(uLocal_274[0], iLocal_72);
		}
		unk_0x2481907DEE6B85EA(&(uLocal_274[0]));
	}
	if (iLocal_332 != -1)
	{
		func_305(&iLocal_332);
	}
	if (bLocal_71)
	{
		func_143(&uLocal_70);
	}
	unk_0x793B849DD1F47DB8(unk_0x460153A63B9477BC(), 0);
	func_123(uLocal_76[0], -1);
	Global_110852 = 0;
	func_304(0);
	unk_0xD39E529EBE5DB04F();
}

void func_304(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 54)
	{
		func_229(iVar0, bParam0);
		iVar0++;
	}
}

void func_305(int iParam0)
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

