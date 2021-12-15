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
	char* sLocal_19[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_33[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_47 = 0;
	char* sLocal_48[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	bool bLocal_62 = 0;
	bool bLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_70 = { 0, 0, 0 } ;
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	struct<3> Local_78 = { 0, 0, 0 } ;
	struct<3> Local_81 = { 0, 0, 0 } ;
	struct<3> Local_84 = { 0, 0, 0 } ;
	struct<3> Local_87 = { 0, 0, 0 } ;
	struct<3> Local_90 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	float fLocal_114 = 0f;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	char cLocal_145[16] = "";
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	float fLocal_157 = 0f;
	float fLocal_158 = 0f;
	float fLocal_159 = 0f;
	float fLocal_160 = 0f;
	float fLocal_161 = 0f;
	float fLocal_162 = 0f;
	float fLocal_163 = 0f;
	float fLocal_164 = 0f;
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
	iLocal_59 = 1;
	bLocal_62 = true;
	bLocal_63 = true;
	fLocal_73 = 0f;
	fLocal_74 = 172f;
	fLocal_77 = 0.7f;
	iLocal_137 = 1200;
	iLocal_138 = 1200;
	iLocal_139 = 166;
	fLocal_157 = 0.5f;
	fLocal_158 = 0.85f;
	fLocal_159 = 0.5f;
	fLocal_160 = -0.25f;
	fLocal_161 = 0.25f;
	fLocal_162 = 0.3f;
	fLocal_163 = 0.3f;
	fLocal_164 = 0.075f;
	NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (unk_0xA2C6E70C9BCA9C34() == 0)
	{
		fLocal_77 = 1f;
	}
	else
	{
		fLocal_77 = 0.7f;
	}
	if (!func_167())
	{
		Global_4269748 = 99;
		Global_4269749 = 99;
		iLocal_57 = 99;
	}
	else
	{
		Global_4269748 = 0;
		Global_4269749 = 0;
	}
	sLocal_19[0] = "No_Filter";
	sLocal_19[1] = "phone_cam1";
	sLocal_19[2] = "phone_cam2";
	sLocal_19[3] = "phone_cam3";
	sLocal_19[4] = "phone_cam4";
	sLocal_19[5] = "phone_cam5";
	sLocal_19[6] = "phone_cam6";
	sLocal_19[7] = "phone_cam7";
	sLocal_19[8] = "phone_cam8";
	sLocal_19[9] = "phone_cam9";
	sLocal_19[10] = "phone_cam10";
	sLocal_19[11] = "phone_cam11";
	sLocal_19[12] = "phone_cam12";
	sLocal_33[0] = "No_Border";
	sLocal_33[1] = "frame1";
	sLocal_33[2] = "frame2";
	sLocal_33[3] = "frame3";
	sLocal_33[4] = "frame4";
	sLocal_33[5] = "frame5";
	sLocal_33[6] = "frame6";
	sLocal_33[7] = "frame7";
	sLocal_33[8] = "frame8";
	sLocal_33[9] = "frame9";
	sLocal_33[10] = "frame10";
	sLocal_33[11] = "frame11";
	sLocal_33[12] = "frame12";
	sLocal_48[0] = "No_Expression";
	sLocal_48[1] = "mood_Aiming_1";
	sLocal_48[2] = "mood_Happy_1";
	sLocal_48[3] = "mood_smug_1";
	sLocal_48[4] = "mood_Injured_1";
	sLocal_48[5] = "mood_sulk_1";
	sLocal_48[6] = "mood_Angry_1";
	func_166();
	if (func_165(1, 1, !iLocal_64, 1))
	{
		iLocal_64 = 1;
	}
	func_164();
	iLocal_112 = unk_0x5E54B0823F46079E();
	if (Global_19626 == 0)
	{
		fLocal_96 = 0.207f;
		fLocal_97 = 0.158f;
		fLocal_98 = 0.207f;
		fLocal_99 = 0.335f;
	}
	else
	{
		fLocal_96 = 0.24f;
		fLocal_97 = 0.258f;
		fLocal_98 = 0.24f;
		fLocal_99 = 0.435f;
	}
	Global_22038 = 0;
	Global_22039 = 0;
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (unk_0xBBF3AF831D757E89(unk_0x9B0761B4C3EB8BC7()))
		{
			Global_22038 = 1;
		}
		if (unk_0x73CD2BA666A5DC40())
		{
			Global_22038 = 1;
		}
		if (unk_0x80FF6C016CDB0FAF(unk_0xCE078AEFF5C495DE(unk_0x9B0761B4C3EB8BC7()), 0))
		{
			Global_22038 = 1;
		}
		if (unk_0xD15202C6B03220B8(unk_0x9B0761B4C3EB8BC7(), 78, 1))
		{
			Global_22038 = 1;
		}
		if (unk_0x167A1D90CE844D68(unk_0x9B0761B4C3EB8BC7()))
		{
			Global_22038 = 1;
		}
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (iLocal_131 == 1)
			{
				Global_22038 = 1;
			}
			uLocal_149 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
			if ((((unk_0x36FE6D3220816ADA(uLocal_149) == joaat("rhino") || unk_0x36FE6D3220816ADA(iLocal_149) == joaat("cutter")) || unk_0x36FE6D3220816ADA(iLocal_149) == joaat("submersible")) || unk_0x36FE6D3220816ADA(iLocal_149) == joaat("khanjali")) || (unk_0x36FE6D3220816ADA(iLocal_149) == joaat("barrage") && unk_0x09F8284D2E03269D(iLocal_149, func_163(unk_0x9B0761B4C3EB8BC7(), 1))))
			{
				Global_22038 = 1;
			}
			else if (unk_0x10D3F7E169A49C44(iLocal_149, -1, 0) == unk_0x9B0761B4C3EB8BC7())
			{
				if (unk_0x59046338C72D0346(iLocal_149) > 0f)
				{
					if (!Global_76833)
					{
						if (!func_162())
						{
							unk_0xDC3073F7CC12181D(unk_0x9B0761B4C3EB8BC7(), iLocal_149, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_76833)
	{
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
		{
			unk_0xE8775836E165BF34(unk_0x460153A63B9477BC(), 0);
		}
	}
	unk_0xD2459066EA58CE43(&Global_7551, 21);
	func_161(0);
	unk_0xBE20AB8238688965(&Global_7551, 17);
	if (Global_19623 == 0)
	{
		func_160();
	}
	else
	{
		uLocal_140 = unk_0x5DEA4192B46CB99B("camera_gallery");
		uLocal_141 = unk_0x5DEA4192B46CB99B("instructional_buttons");
		while (!unk_0x95EF219D38B20CFF(uLocal_140) || !unk_0x95EF219D38B20CFF(uLocal_141))
		{
			SYSTEM::WAIT(0);
			unk_0x0037AEC7A79CCCB4();
			unk_0x779660A9E5364C4D(0, 25, 1);
		}
		if (Global_76833)
		{
			iLocal_144 = 2;
		}
		else
		{
			switch (func_159())
			{
				case 0:
					iLocal_144 = 2;
					break;
				
				case 2:
					iLocal_144 = 2;
					break;
				
				case 3:
					iLocal_144 = 2;
					break;
				}
		}
		func_158(uLocal_140, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_144), -1082130432, -1082130432, -1082130432, -1082130432);
		func_157(uLocal_140, "CLOSE_SHUTTER");
		unk_0x830F007E19C63E14(Global_19662, "DISPLAY_VIEW");
		unk_0xAD291B8F75D737AD(16);
		unk_0xE1FDD153F5858534();
	}
	Local_78 = { Global_19641 };
	Local_81 = { Global_19634[Global_19626 /*3*/] };
	Global_22039 = 1;
	iLocal_118 = 1;
	iLocal_119 = 1;
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 0;
	iLocal_125 = 0;
	if (Global_19681.f_1 > 3)
	{
		Global_19681.f_1 = 8;
	}
	if (iLocal_131 == 0)
	{
		unk_0xD2459066EA58CE43(&Global_7553, 3);
	}
	func_155();
	unk_0x9D15035C6653D1B1(4);
	if (unk_0x584E16598C4BAF97())
	{
	}
	if (Global_4456448.f_123773)
	{
	}
	if (Global_4456448.f_123775 == 1)
	{
		iLocal_156 = 1;
	}
	if (iLocal_156 == 1)
	{
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		unk_0x26A60F42A1132477(0, Global_19650);
		unk_0x26A60F42A1132477(0, 186);
		unk_0x0037AEC7A79CCCB4();
		unk_0x779660A9E5364C4D(0, 25, 1);
		unk_0x779660A9E5364C4D(0, 0, 1);
		if (func_154())
		{
			if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
			{
				unk_0xBE20AB8238688965(&Global_4271024, 2);
				func_158(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (!Global_111858.f_14047.f_81)
		{
			if (!unk_0xCE990E643CD9D0E5(Global_4271024, 13))
			{
				if (!unk_0xDABD547F0DF2906C())
				{
					if (!unk_0xCE990E643CD9D0E5(Global_7552, 28))
					{
						if ((iLocal_128 && iLocal_131 == 0) && !func_154())
						{
							unk_0xBE20AB8238688965(&Global_4271024, 13);
							Global_111858.f_14047.f_81 = 1;
							func_153("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!unk_0xF0C12886E5C1B20E())
		{
			if (Global_4456448.f_123772 == 0 && Global_4456448.f_123773 == 0)
			{
				unk_0x36FA9C099416853E(15, 0f, -0.0375f);
			}
			unk_0x4CB4237D8858ADA6(7);
			func_152();
			if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				unk_0x8342E6CB98CD545C(unk_0x9B0761B4C3EB8BC7(), 200, 1);
			}
			unk_0x779660A9E5364C4D(0, 44, 1);
			unk_0x779660A9E5364C4D(0, 47, 1);
			unk_0x779660A9E5364C4D(0, 91, 1);
			unk_0x779660A9E5364C4D(0, 92, 1);
			unk_0x779660A9E5364C4D(0, 68, 1);
			if (iLocal_150 == 0)
			{
				unk_0x26A60F42A1132477(0, Global_19654);
			}
			unk_0x26A60F42A1132477(0, Global_19651);
			if ((unk_0x03DB5C6AABF8DA46() || unk_0x5DA78AD6801A0523()) && !func_154())
			{
				iLocal_130 = 1;
				Global_19681.f_1 = 3;
				unk_0x73D73FA241EA4AB7(0);
			}
			if (unk_0xB330C2EF9E4B0D6E())
			{
				Global_19681.f_1 = 3;
				unk_0x73D73FA241EA4AB7(0);
			}
			if (unk_0xCE990E643CD9D0E5(Global_7552, 3))
			{
				Global_19681.f_1 = 3;
				unk_0x73D73FA241EA4AB7(0);
			}
			if (unk_0x25DDB354A40FFCDB())
			{
				if (func_141())
				{
					Global_19681.f_1 = 3;
					unk_0x73D73FA241EA4AB7(0);
				}
			}
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0xB8DB6610D5815003(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					Global_19681.f_1 = 3;
					unk_0x73D73FA241EA4AB7(0);
				}
				if ((unk_0xD15202C6B03220B8(unk_0x9B0761B4C3EB8BC7(), 78, 1) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || unk_0xF283063436CFEA72(unk_0x460153A63B9477BC()))
				{
					if (func_140())
					{
					}
					else
					{
						Global_19681.f_1 = 3;
						unk_0x73D73FA241EA4AB7(0);
					}
				}
				if (unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7()) || unk_0xAACBFCE60AF94F2D(unk_0x9B0761B4C3EB8BC7()))
				{
					if (Global_76833 == 1)
					{
						Global_19681.f_1 = 3;
					}
				}
				if (unk_0xE72C9284B5143451(unk_0x9B0761B4C3EB8BC7()))
				{
					if (unk_0x3E401BCAB0197B54(unk_0x9B0761B4C3EB8BC7()) > 0.3f)
					{
						Global_19681.f_1 = 3;
					}
				}
				if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					func_139();
					iLocal_149 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
					if (unk_0x59046338C72D0346(iLocal_149) < 0f)
					{
						func_136(0);
					}
					if (iLocal_115 == 1)
					{
						if (iLocal_116 == 1)
						{
							if (!unk_0xA0F684CE511CFACB())
							{
								func_136(0);
							}
						}
						else if (!unk_0xA0F684CE511CFACB())
						{
							iLocal_116 = 1;
							SYSTEM::WAIT(0);
							unk_0x0037AEC7A79CCCB4();
						}
					}
				}
				else if (Global_76833 == 0)
				{
					if (unk_0xCE990E643CD9D0E5(Global_7551, 18))
					{
						func_135();
						if ((Global_19681 == 0 || Global_19681 == 1) || Global_19681 == 2)
						{
							if (!unk_0xCC8A9D2D16D94DA3(unk_0x9B0761B4C3EB8BC7()))
							{
								if (unk_0x5B5B4E37C1CCA675(unk_0x9B0761B4C3EB8BC7()) == 2)
								{
								}
								else
								{
									Global_19681.f_1 = 3;
									unk_0x73D73FA241EA4AB7(0);
								}
							}
						}
					}
				}
			}
			if (iLocal_142)
			{
				func_134();
			}
			if (Global_19681.f_1 < 4)
			{
			}
			if (iLocal_153 == 0)
			{
				if (iLocal_103 == 0)
				{
					if (iLocal_104 == 0)
					{
						if (iLocal_111 == 0)
						{
							if (Global_19681.f_1 > 3)
							{
								if (iLocal_150)
								{
									func_132();
									if (Global_22043 == 0 && Global_22040 == 6)
									{
										unk_0x411C0BFEF1468390(0, 1);
										unk_0xEE377857147BD117();
										iLocal_150 = 0;
										func_131();
										if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
										{
											Local_67 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1) };
										}
										func_130();
										iLocal_109++;
										if (func_167())
										{
											func_158(uLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_158(uLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
										}
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_134 = 0;
										iLocal_127 = 0;
										func_123();
									}
									if (Global_22040 == 0)
									{
										iLocal_150 = 0;
										unk_0xEE377857147BD117();
										if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
										{
											Local_67 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1) };
										}
										func_122();
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_134 = 0;
										iLocal_127 = 0;
										func_123();
										if (func_167())
										{
											if (Global_4269749 == 0)
											{
												if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
												{
													func_158(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
										{
											func_158(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_121();
										func_120(1);
									}
								}
								else if (Global_19681.f_1 != 9)
								{
									if (Global_22039 == 1)
									{
										if (Global_22038 == 0)
										{
											func_119();
										}
									}
									else if ((Global_8159 - Global_8158) > Global_8160)
									{
										if (unk_0x03DB5C6AABF8DA46() && func_118())
										{
											if (func_117() && iLocal_127)
											{
											}
											else if (iLocal_127 == 0)
											{
												unk_0x73D73FA241EA4AB7(0);
												unk_0xC5E5600D1CF5CEF9(iLocal_112);
												iLocal_143 = 0;
												if (Global_22038 == 0)
												{
													func_130();
													Global_22038 = 1;
													unk_0x411C0BFEF1468390(0, 1);
													iLocal_128 = 0;
													iLocal_118 = 1;
													iLocal_119 = 1;
													iLocal_120 = 1;
													iLocal_121 = 1;
													iLocal_122 = 1;
													iLocal_123 = 1;
													func_116(0, 0);
													func_120(0);
													iLocal_115 = 0;
													func_111(1);
													iLocal_142 = 0;
													func_109(0, 1);
													func_158(Global_19662, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
													func_107(1);
												}
											}
										}
										if (func_106(2, Global_19649, 0))
										{
											if (func_154())
											{
												if (((Global_1663771 || Global_1312809) || Global_22041) || unk_0xCE990E643CD9D0E5(Global_7551, 21))
												{
												}
												else if (func_117() && iLocal_127)
												{
												}
												else if (!func_118())
												{
													if (iLocal_127 == 0)
													{
														unk_0x1D40553EDD51A1B8(500);
														iLocal_143 = 0;
														func_109(1, 1);
														func_105(1);
													}
												}
											}
											else if (func_117() && iLocal_127)
											{
											}
											else if (iLocal_127 == 0)
											{
												unk_0x73D73FA241EA4AB7(0);
												unk_0xC5E5600D1CF5CEF9(iLocal_112);
												iLocal_143 = 0;
												if (Global_22038 == 0)
												{
													func_130();
													Global_22038 = 1;
													unk_0x411C0BFEF1468390(0, 1);
													iLocal_128 = 0;
													iLocal_118 = 1;
													iLocal_119 = 1;
													iLocal_120 = 1;
													iLocal_121 = 1;
													iLocal_122 = 1;
													iLocal_123 = 1;
													func_116(0, 0);
													func_120(0);
													iLocal_115 = 0;
													func_111(1);
													iLocal_142 = 0;
													func_109(0, 1);
													func_158(Global_19662, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_101 == 0)
									{
										if (unk_0xDABD547F0DF2906C())
										{
											func_104();
											iLocal_101 = 1;
										}
									}
									else if (!unk_0xDABD547F0DF2906C())
									{
										func_104();
										iLocal_101 = 0;
									}
									if (iLocal_102 == 0)
									{
										if (unk_0xCE990E643CD9D0E5(Global_7551, 28))
										{
											func_104();
											iLocal_102 = 1;
										}
									}
									else if (!unk_0xCE990E643CD9D0E5(Global_7551, 28))
									{
										func_104();
										iLocal_102 = 0;
									}
									if (Global_22038 == 1)
									{
										func_93();
									}
									else if (Global_19681.f_1 > 4)
									{
										if (iLocal_124 == 1 && iLocal_125 == 0)
										{
											func_89();
										}
										if (iLocal_124 == 0 && iLocal_125 == 1)
										{
											func_122();
											if (iLocal_136 == 1 || iLocal_136 == 0)
											{
												if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
												{
													if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
													{
														func_157(uLocal_140, "CLOSE_SHUTTER");
														iLocal_135 = unk_0x578C4EF320340AF7();
														while (unk_0x578C4EF320340AF7() < (iLocal_135 + iLocal_137) && Global_19681.f_1 > 3)
														{
															func_152();
															func_134();
															func_88();
															unk_0x0037AEC7A79CCCB4();
															SYSTEM::WAIT(0);
														}
													}
												}
												if (func_167())
												{
													if (Global_4269749 == 0)
													{
														if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
														{
															func_158(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
												{
													func_158(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_134();
												func_152();
												iLocal_132 = 0;
												iLocal_133 = 0;
												iLocal_134 = 0;
												iLocal_127 = 0;
												func_123();
												iLocal_136 = 0;
												func_157(uLocal_140, "OPEN_SHUTTER");
											}
											func_121();
											func_120(1);
											func_87();
										}
									}
									if (iLocal_143 == 1)
									{
										func_84();
									}
									if (iLocal_129)
									{
										if (SYSTEM::TIMERB() > 500)
										{
											iLocal_128 = 1;
											iLocal_129 = 0;
											unk_0xBE20AB8238688965(&Global_7551, 18);
											if (Global_22038 == 0)
											{
												func_109(1, 1);
											}
										}
									}
									if (iLocal_127 == 0)
									{
										if (iLocal_128 && Global_22038 == 0)
										{
											if ((iLocal_130 == 0 && iLocal_125 == 0) && Global_22041 == 0)
											{
												func_10();
											}
										}
										else
										{
											func_88();
										}
									}
									else if (iLocal_124 == 0)
									{
										func_5();
									}
								}
							}
						}
					}
				}
				else
				{
					if (Global_19681.f_1 > 3)
					{
						if (Global_22039 == 1)
						{
							if (Global_22038 == 0)
							{
								func_119();
							}
						}
					}
					func_4();
				}
			}
			else
			{
				if (iLocal_155 == 1)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_FW_1", iLocal_152, "CELL_CAM_FW_2", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 2)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "ERROR_NO_SC_CAMERAPHONE", iLocal_152, "", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 6)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "SC_ERROR_BANNED", iLocal_152, "", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 3)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "ERROR_UPDATE_SC_CAMERAPHONE", iLocal_152, "", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 7)
				{
					if (unk_0x11E5DE894D6A8A5F() || unk_0xC6C08C02733D02C8())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_152, "", false, -1, "", "", true, 0);
					}
					if (unk_0x59ED414969A48197() || unk_0xDCA0815D900F27F8())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_152, "", false, -1, "", "", true, 0);
					}
					if (unk_0xF8EDFF98A9C94C74())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_TEMP_30", iLocal_152, "", false, -1, "", "", true, 0);
					}
				}
				if (iLocal_155 == 4)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_CCW_1", iLocal_152, "CELL_CAM_CCW_2", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 5)
				{
					iVar0 = unk_0xE23866E59EFDFAEC();
					switch (iVar0)
					{
						case -1:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_I", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						
						case 0:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						
						case 1:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_C", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						
						case 2:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_T", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						
						default:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						}
				}
				if (iLocal_155 == 0)
				{
				}
				if (iLocal_155 == 2 || iLocal_155 == 3)
				{
					if (unk_0x1BD7199394D7F19A(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_109(0, 1);
					}
					if (unk_0x1BD7199394D7F19A(2, 201))
					{
						iLocal_154 = 1;
					}
					if (iLocal_154 == 1)
					{
						if (unk_0xC27AEE8B64EE0F8D(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_109(0, 1);
							iLocal_154 = 0;
							unk_0x6756B40970CEC619("Gallery");
							unk_0x6D39D3E5BF237B13();
						}
					}
				}
				else if (iLocal_155 == 7)
				{
					if (unk_0xDCA0815D900F27F8())
					{
						if (unk_0x1BD7199394D7F19A(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_109(0, 1);
							iLocal_111 = 0;
						}
					}
					else if (unk_0x1BD7199394D7F19A(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_109(0, 1);
						iLocal_111 = 0;
					}
					if (!unk_0xDCA0815D900F27F8())
					{
						if (unk_0x1BD7199394D7F19A(2, Global_19653))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_109(0, 1);
							if (unk_0xCE990E643CD9D0E5(Global_7552, 28))
							{
								iLocal_111 = 0;
							}
							else
							{
								iLocal_111 = 2;
							}
							iLocal_107 = unk_0x578C4EF320340AF7();
							unk_0x6F60936103CA52CD(1);
						}
					}
				}
				else if (unk_0x1BD7199394D7F19A(2, 201))
				{
					iLocal_153 = 0;
					iLocal_155 = 0;
					func_109(0, 1);
				}
			}
		}
		iLocal_108 = unk_0x578C4EF320340AF7();
		if (func_154())
		{
			if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
			{
				unk_0xBE20AB8238688965(&Global_4271024, 2);
				func_158(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (func_3() || iLocal_130)
		{
			func_1(0);
			func_116(0, 0);
			func_120(0);
			iLocal_115 = 0;
			func_111(1);
			Global_22038 = 0;
			Global_22039 = 0;
			Global_22041 = 0;
			unk_0x2E352DDBBF674246(&uLocal_140);
			unk_0x2E352DDBBF674246(&uLocal_141);
			unk_0x73D73FA241EA4AB7(0);
			if (Global_19866 == 1)
			{
				unk_0xBE20AB8238688965(&Global_7551, 17);
			}
			else
			{
				unk_0xD2459066EA58CE43(&Global_7551, 17);
			}
			unk_0x411C0BFEF1468390(0, 1);
			unk_0xE8775836E165BF34(unk_0x460153A63B9477BC(), 1);
			unk_0xD2459066EA58CE43(&Global_7553, 3);
			unk_0xD2459066EA58CE43(&Global_4271024, 3);
			unk_0x610B4083B1F95914(15);
			Global_22042 = 1;
			unk_0xC5E5600D1CF5CEF9(iLocal_112);
			unk_0xADB6EEE689FE86DE(iLocal_112);
			unk_0xEE377857147BD117();
			func_111(1);
			unk_0xCB6B7239AA9DA52F(0);
			unk_0x69FC1AD2B320BC60(0);
			unk_0x764721E50928FD5D(1f);
			if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				unk_0x68A762F748822351(unk_0x9B0761B4C3EB8BC7(), "Mood_Normal_1", 0);
				unk_0x37ACBA9BE0A0EC05(unk_0x9B0761B4C3EB8BC7());
			}
			if (Global_4269749 > 0 && Global_4269749 < 13)
			{
				unk_0x2DDA2C702A92866E(sLocal_33[Global_4269749]);
			}
			unk_0xD2459066EA58CE43(&Global_7551, 18);
			if (func_154())
			{
				func_109(1, 1);
			}
			else
			{
				func_109(0, 1);
			}
			if (func_165(0, 1, iLocal_64, 1))
			{
				iLocal_64 = 0;
			}
			unk_0xD39E529EBE5DB04F();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			unk_0x08420D55C0C88119(1);
		}
		else if (Global_19681.f_1 > 3)
		{
			unk_0x08420D55C0C88119(0);
		}
	}
}

int func_2()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76833)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0xFA3A11B011BBD7F6();
	iVar1 = unk_0xF7B3A1430308F92B(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4271302 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_3()
{
	if (((Global_19681.f_1 == 1 || Global_19681.f_1 == 3) || Global_19681.f_1 == 0) || Global_19625 == 1)
	{
		Global_19668 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	iLocal_106 = unk_0xD5A1646FC2F0ED37(0);
	switch (iLocal_106)
	{
		case 0:
			iLocal_103 = 0;
			iLocal_109 = unk_0x9DAE757174B286A0();
			iLocal_110 = unk_0xF03BB02878FDD7A4();
			if (iLocal_104 == 1)
			{
				if (iLocal_127 == 0)
				{
					if (unk_0x95EF219D38B20CFF(uLocal_140))
					{
						if (func_167())
						{
							if (Global_4269749 == 0)
							{
								if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
								{
									func_158(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_158(uLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
							{
								func_158(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_158(uLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (unk_0x95EF219D38B20CFF(uLocal_140))
				{
					func_158(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_158(uLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
				}
				iLocal_104 = 0;
			}
			unk_0xEE377857147BD117();
			break;
		
		case 1:
			if (!unk_0x92308350672891C2())
			{
				unk_0x1F096ADCD1F99FB1("CELL_SPINNER2");
				unk_0xA7C9EA826799BF5D(1);
			}
			break;
		
		case 2:
			if (unk_0xCE990E643CD9D0E5(Global_7552, 28))
			{
				iLocal_103 = 0;
				iLocal_109 = 0;
				iLocal_110 = 0;
			}
			else
			{
				Global_19681.f_1 = 3;
				Global_22042 = 1;
			}
			unk_0xEE377857147BD117();
			break;
	}
}

void func_5()
{
	if (func_106(2, Global_19650, 0))
	{
		func_1(0);
		if (unk_0xCE990E643CD9D0E5(Global_7552, 28))
		{
			unk_0x73D73FA241EA4AB7(0);
			SYSTEM::SETTIMERB(0);
			func_131();
			iLocal_127 = 0;
			if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				Local_67 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1) };
			}
			func_130();
			iLocal_136 = 1;
		}
		else if (func_9())
		{
			if (unk_0xCE990E643CD9D0E5(Global_7552, 14))
			{
				func_153("CELL_299", -1);
			}
			else
			{
				func_130();
				func_8();
			}
		}
		else
		{
			iLocal_153 = 1;
			func_109(1, 1);
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_7551, 22))
	{
		func_1(0);
		while (SYSTEM::TIMERA() < 2000)
		{
			SYSTEM::WAIT(0);
			func_152();
			unk_0x0037AEC7A79CCCB4();
			func_88();
			func_139();
			func_134();
		}
		unk_0x73D73FA241EA4AB7(0);
		func_131();
		SYSTEM::SETTIMERB(0);
		iLocal_127 = 0;
		if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			Local_67 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1) };
		}
		func_123();
		func_130();
	}
	if (func_106(2, Global_19654, 0))
	{
		func_1(0);
		if (func_117() || unk_0xCE990E643CD9D0E5(Global_7552, 28))
		{
		}
		else
		{
			unk_0x73D73FA241EA4AB7(0);
			SYSTEM::SETTIMERB(0);
			iLocal_136 = 1;
			func_131();
			iLocal_127 = 0;
			if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				Local_67 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1) };
			}
			func_130();
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_7551, 28))
	{
		if (func_106(2, Global_19653, 0))
		{
			func_1(0);
			unk_0x73D73FA241EA4AB7(0);
			unk_0x42D13FF9E8D73B13(0, 0);
			SYSTEM::WAIT(0);
			unk_0x0037AEC7A79CCCB4();
			func_152();
			SYSTEM::WAIT(0);
			unk_0x0037AEC7A79CCCB4();
			func_152();
			unk_0x54D93C58D91752B6();
			unk_0x042EC7EFE200D926();
			Global_22042 = 1;
			iLocal_143 = 0;
			iLocal_126 = 0;
			func_109(0, 1);
			Global_22038 = 1;
			unk_0x411C0BFEF1468390(0, 1);
			iLocal_128 = 0;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			iLocal_123 = 1;
			func_6();
			iLocal_127 = 0;
			if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				Local_67 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1) };
			}
			func_116(0, 0);
			func_120(0);
			iLocal_115 = 0;
			func_111(1);
			if (!Global_2540384.f_6593)
			{
				unk_0xBE20AB8238688965(&Global_7551, 9);
			}
			iLocal_142 = 0;
			func_158(Global_19662, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_6()
{
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		unk_0xC4CC25B68A91D144(-1, "Menu_Accept", &Global_19670, 1);
		func_7();
	}
}

void func_7()
{
	if (func_2())
	{
		unk_0x12C8655E426FEBB8(5);
	}
}

void func_8()
{
	iLocal_150 = 1;
	Global_22043 = 1;
	unk_0x411C0BFEF1468390(0, 1);
}

int func_9()
{
	if (iLocal_107 == iLocal_108)
	{
		if (iLocal_105)
		{
			iLocal_105 = 1;
		}
	}
	if (Global_19681.f_1 < 4)
	{
		return 0;
	}
	if (iLocal_109 == iLocal_110 || iLocal_109 > iLocal_110)
	{
		iLocal_155 = 1;
		iLocal_152 = 2;
		return 0;
	}
	return 1;
}

void func_10()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xC1F43F8D0D5EB664(2))
	{
		iVar0 = 179;
		iVar1 = 21;
	}
	else
	{
		iVar0 = 228;
		iVar1 = 229;
	}
	if (iLocal_131)
	{
		func_79();
		func_75();
		func_74();
		fLocal_73 = unk_0x9394C7A1C8F8FF02();
		fLocal_74 = unk_0x1A63A58703BD9306();
		if (iLocal_133 == 0)
		{
			if (unk_0x22D6FB6153F774D3(2, iVar0) && !unk_0x22D6FB6153F774D3(2, iVar1))
			{
				iLocal_133 = 1;
				func_158(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_158(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0xCE990E643CD9D0E5(Global_7551, 28))
				{
					func_72(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xED026A379B794F61(0, 177, 1), "CELL_281");
					func_72(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xED026A379B794F61(2, 179, 1), func_65());
					func_72(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xED026A379B794F61(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_72(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xED026A379B794F61(0, 176, 1), "CELL_280");
					func_72(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xED026A379B794F61(0, 177, 1), "CELL_281");
					func_72(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xED026A379B794F61(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				func_64();
				unk_0x830F007E19C63E14(uLocal_141, "SET_MAX_WIDTH");
				unk_0x49B9B8101B158AEE(fLocal_77);
				unk_0xE1FDD153F5858534();
				func_158(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x22D6FB6153F774D3(2, iVar0) || unk_0x22D6FB6153F774D3(2, iVar1))
		{
			iLocal_133 = 0;
			func_123();
		}
		if (iLocal_134 == 0)
		{
			if (unk_0x22D6FB6153F774D3(2, iVar1) && !unk_0x22D6FB6153F774D3(2, iVar0))
			{
				iLocal_134 = 1;
				func_158(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_158(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0xCE990E643CD9D0E5(Global_7551, 28))
				{
					func_72(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xED026A379B794F61(0, 177, 1), "CELL_281");
					func_72(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xED026A379B794F61(2, 179, 1), func_65());
				}
				else if (!func_154())
				{
					func_72(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xED026A379B794F61(0, 176, 1), "CELL_280");
					func_72(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xED026A379B794F61(0, 177, 1), "CELL_281");
				}
				else
				{
					func_72(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xED026A379B794F61(0, 176, 1), "CELL_280");
					func_72(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xED026A379B794F61(0, 177, 1), "CELL_281");
				}
				func_63();
				unk_0x830F007E19C63E14(uLocal_141, "SET_MAX_WIDTH");
				unk_0x49B9B8101B158AEE(fLocal_77);
				unk_0xE1FDD153F5858534();
				func_158(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x22D6FB6153F774D3(2, iVar1) || unk_0x22D6FB6153F774D3(2, iVar0))
		{
			iLocal_134 = 0;
			func_123();
		}
	}
	else
	{
		unk_0x047901495C0572C0(0, 2, 1);
		unk_0x047901495C0572C0(0, 1, 1);
	}
	if (unk_0x628AF533B14EF310(2))
	{
		func_123();
	}
	func_139();
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		unk_0x8342E6CB98CD545C(unk_0x9B0761B4C3EB8BC7(), 200, 1);
	}
	if (func_154())
	{
		if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
		{
			unk_0xBE20AB8238688965(&Global_4271024, 2);
			func_158(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	if ((unk_0x1BD7199394D7F19A(2, 183) && iLocal_156 == 0) && !func_154())
	{
		unk_0xC4CC25B68A91D144(-1, "Menu_Navigate", &Global_19670, 1);
		if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (!unk_0x5B5B4E37C1CCA675(unk_0x9B0761B4C3EB8BC7()) == 2)
			{
				if (unk_0xCE990E643CD9D0E5(Global_4271024, 2))
				{
					unk_0xD2459066EA58CE43(&Global_4271024, 2);
					if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
					{
						func_158(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0xBE20AB8238688965(&Global_4271024, 2);
					func_158(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_131)
	{
		if (iLocal_132 == 1)
		{
			iLocal_132 = 0;
			unk_0x830F007E19C63E14(uLocal_140, "SET_FOCUS_LOCK");
			unk_0xF1B28F753235CE2A(0);
			func_62("CELL_FOCUS");
			unk_0xF1B28F753235CE2A(1);
			unk_0xE1FDD153F5858534();
		}
		if (!func_61(14))
		{
			if (unk_0xCE990E643CD9D0E5(Global_4271024, 10))
			{
				if ((Global_76833 == 0 && unk_0x7B70881748D166CD(joaat("pi_menu")) > 0) && func_60())
				{
					unk_0x830F007E19C63E14(uLocal_140, "SET_FOCUS_LOCK");
					unk_0xF1B28F753235CE2A(1);
					unk_0xB23270F3D5E62FDE("CELL_ACTTL");
					unk_0x9EFD301E3BE8324E(unk_0x7C774D8CB8DC6FE3(&Global_4272009));
					unk_0x2042E9CA4306F725();
					unk_0xF1B28F753235CE2A(0);
					unk_0xE1FDD153F5858534();
					unk_0xD2459066EA58CE43(&Global_4271024, 10);
				}
			}
		}
		else if (unk_0xCE990E643CD9D0E5(Global_4271024, 10))
		{
			unk_0xD2459066EA58CE43(&Global_4271024, 10);
		}
		iLocal_66 = unk_0x578C4EF320340AF7();
		if ((iLocal_66 - iLocal_65) > 1500)
		{
			if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				Local_70 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1) };
				if (unk_0x272784C60C397DB6(Local_70, Local_67, 1) > 5f)
				{
					Global_19681.f_1 = 3;
					unk_0x73D73FA241EA4AB7(0);
				}
				iLocal_65 = unk_0x578C4EF320340AF7();
			}
		}
	}
	else if (iLocal_132)
	{
		if (!unk_0x22D6FB6153F774D3(0, 182) && !func_154())
		{
			unk_0xC4CC25B68A91D144(-1, "Menu_Navigate", &Global_19670, 1);
			iLocal_132 = 0;
			unk_0x830F007E19C63E14(uLocal_140, "SET_FOCUS_LOCK");
			unk_0xF1B28F753235CE2A(0);
			func_62("CELL_FOCUS");
			unk_0xF1B28F753235CE2A(1);
			unk_0xE1FDD153F5858534();
		}
	}
	else if (unk_0x22D6FB6153F774D3(0, 182) && !func_154())
	{
		unk_0xC4CC25B68A91D144(-1, "Menu_Navigate", &Global_19670, 1);
		iLocal_132 = 1;
		if (!func_61(14))
		{
			unk_0x830F007E19C63E14(uLocal_140, "SET_FOCUS_LOCK");
			unk_0xF1B28F753235CE2A(1);
			func_62("CELL_FOCUS");
			unk_0xF1B28F753235CE2A(1);
			unk_0xE1FDD153F5858534();
		}
	}
	if (func_167())
	{
		if ((unk_0x1BD7199394D7F19A(2, 186) && iLocal_156 == 0) && !func_154())
		{
			if (iLocal_131)
			{
				iLocal_57++;
				if (iLocal_57 > 0 && iLocal_57 < 7)
				{
					if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
					{
						unk_0xC4CC25B68A91D144(-1, "Menu_Navigate", &Global_19670, 1);
						unk_0x68A762F748822351(unk_0x9B0761B4C3EB8BC7(), "Mood_Normal_1", 0);
						unk_0x37ACBA9BE0A0EC05(unk_0x9B0761B4C3EB8BC7());
						if (Global_19681 == 0)
						{
							iVar4 = 0;
							iVar2 = unk_0xA98E0435012EAF07(unk_0x9B0761B4C3EB8BC7(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = unk_0xA98E0435012EAF07(unk_0x9B0761B4C3EB8BC7(), 1);
							if (iVar3 != -1)
							{
								iVar4 = 1;
							}
							if (iVar4 == 1)
							{
								if ((((iLocal_57 == 2 || iLocal_57 == 3) || iLocal_57 == 4) || iLocal_57 == 8) || iLocal_57 == 9)
								{
									if (iVar2 == -1 && iVar3 > -1)
									{
										if (iLocal_57 == 3)
										{
											unk_0x68A762F748822351(unk_0x9B0761B4C3EB8BC7(), sLocal_48[iLocal_57], 0);
										}
									}
								}
								else
								{
									unk_0x68A762F748822351(unk_0x9B0761B4C3EB8BC7(), sLocal_48[iLocal_57], 0);
								}
							}
							else
							{
								unk_0x68A762F748822351(unk_0x9B0761B4C3EB8BC7(), sLocal_48[iLocal_57], 0);
							}
						}
						else
						{
							unk_0x68A762F748822351(unk_0x9B0761B4C3EB8BC7(), sLocal_48[iLocal_57], 0);
						}
					}
				}
				if (iLocal_57 == 7 || iLocal_57 > 7)
				{
					iLocal_57 = 0;
				}
				if (iLocal_57 == 0)
				{
					if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
					{
						unk_0x68A762F748822351(unk_0x9B0761B4C3EB8BC7(), "Mood_Normal_1", 0);
						unk_0x37ACBA9BE0A0EC05(unk_0x9B0761B4C3EB8BC7());
						unk_0xC4CC25B68A91D144(-1, "Menu_Navigate", &Global_19670, 1);
					}
				}
			}
		}
		if ((unk_0x1BD7199394D7F19A(2, 185) && iLocal_156 == 0) && !func_154())
		{
			if (iLocal_131)
			{
				if (bLocal_62 == 1)
				{
					unk_0xC4CC25B68A91D144(-1, "Menu_Navigate", &Global_19670, 1);
					if (iLocal_61 == 0)
					{
						iLocal_61 = 1;
						iLocal_60 = 1;
						if (unk_0xF005CCA4263DF67F(sLocal_19[Global_4269748], "phone_cam12DUMMY"))
						{
						}
						else
						{
							unk_0xCB6B7239AA9DA52F(1);
							unk_0x69FC1AD2B320BC60(1);
						}
					}
					else
					{
						iLocal_61 = 0;
						iLocal_60 = 0;
						unk_0xCB6B7239AA9DA52F(0);
						unk_0x69FC1AD2B320BC60(0);
					}
				}
			}
			else if (bLocal_63 == 1)
			{
				if (iLocal_60 == 0)
				{
					iLocal_60 = 1;
					iLocal_61 = 1;
					unk_0xCB6B7239AA9DA52F(1);
					unk_0x69FC1AD2B320BC60(1);
				}
				else
				{
					iLocal_60 = 0;
					iLocal_61 = 0;
					unk_0xCB6B7239AA9DA52F(0);
					unk_0x69FC1AD2B320BC60(0);
				}
			}
		}
	}
	if (iLocal_59 == 1 && !func_154())
	{
		if (unk_0x1BD7199394D7F19A(0, 172) && iLocal_156 == 0)
		{
			if (func_167())
			{
				Global_4269749++;
				unk_0xC4CC25B68A91D144(-1, "Menu_Navigate", &Global_19670, 1);
			}
			if (Global_4269749 == 13)
			{
				func_120(0);
				unk_0x764721E50928FD5D(1f);
				unk_0x2DDA2C702A92866E(sLocal_33[(Global_4269749 - 1)]);
				Global_4269749 = 0;
				func_59();
				if (iLocal_47 == 1)
				{
					unk_0xD2459066EA58CE43(&Global_4271024, 2);
					iLocal_47 = 0;
					func_158(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_4269749 > 0 && Global_4269749 < 13)
			{
				iLocal_59 = 0;
				iLocal_58 = 0;
				unk_0x494D5FF88119CDC0(sLocal_33[Global_4269749], 0);
			}
		}
	}
	if (Global_4269749 > 0)
	{
		if (iLocal_59 == 0)
		{
			if (unk_0xC7F5A2E99D75A65C(sLocal_33[Global_4269749]))
			{
				iLocal_58 = 1;
				iLocal_59 = 1;
				if (!unk_0x93E72561EAE8CA3A())
				{
					func_120(1);
				}
				if (iLocal_47 == 0)
				{
					if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
					{
						iLocal_47 = 1;
					}
				}
				unk_0xBE20AB8238688965(&Global_4271024, 2);
				func_158(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x764721E50928FD5D(0.25f);
				unk_0x8B4A50A1E24CAAEC(sLocal_33[Global_4269749], 0);
			}
		}
		if (iLocal_58 == 1)
		{
			if (Global_4269749 == 1 || Global_4269749 == 3)
			{
			}
			if (Global_4269749 == 2 || Global_4269749 == 4)
			{
			}
		}
	}
	if ((unk_0x1BD7199394D7F19A(0, 173) && iLocal_156 == 0) && !func_154())
	{
		if (func_167())
		{
			func_111(0);
			Global_4269748++;
			unk_0xC4CC25B68A91D144(-1, "Menu_Navigate", &Global_19670, 1);
		}
		if (Global_4269748 == 13)
		{
			Global_4269748 = 0;
		}
		if (Global_4269748 == 0)
		{
			if (func_167())
			{
				func_111(0);
			}
		}
		else
		{
			func_121();
		}
		func_58();
	}
	if ((unk_0x79800E51B3B6D197(0, 184) && iLocal_156 == 0) && !func_154())
	{
		if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) && !unk_0x5B5B4E37C1CCA675(unk_0x9B0761B4C3EB8BC7()) == 2)
			{
				Local_67 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1) };
				unk_0xC4CC25B68A91D144(-1, "Menu_Navigate", &Global_19670, 1);
				func_158(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_157(uLocal_140, "CLOSE_SHUTTER");
				iLocal_135 = unk_0x578C4EF320340AF7();
				while (unk_0x578C4EF320340AF7() < (iLocal_135 + iLocal_139) && Global_19681.f_1 > 3)
				{
					func_152();
					func_134();
					func_88();
					unk_0x0037AEC7A79CCCB4();
					SYSTEM::WAIT(0);
				}
				if (iLocal_131 == 0)
				{
					unk_0xC5E5600D1CF5CEF9(iLocal_112);
					iLocal_131 = 1;
					func_57(1);
					func_56();
					unk_0xBE20AB8238688965(&Global_7553, 3);
					iLocal_65 = unk_0x578C4EF320340AF7();
				}
				else
				{
					iLocal_133 = 0;
					iLocal_134 = 0;
					func_57(0);
					iLocal_131 = 0;
					unk_0xD2459066EA58CE43(&Global_7553, 3);
				}
				iLocal_135 = unk_0x578C4EF320340AF7();
				while (unk_0x578C4EF320340AF7() < (iLocal_135 + iLocal_137) && Global_19681.f_1 > 3)
				{
					func_152();
					func_134();
					func_88();
					unk_0x0037AEC7A79CCCB4();
					SYSTEM::WAIT(0);
				}
				func_157(uLocal_140, "OPEN_SHUTTER");
				if (func_167())
				{
					if (Global_4269749 == 0)
					{
						if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
						{
							func_158(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
				{
					func_158(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_134();
				func_152();
				if (unk_0xCE990E643CD9D0E5(Global_7551, 28))
				{
					StringCopy(&cLocal_145, "CELL_296", 16);
					func_54();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_295", 16);
					func_28();
				}
			}
		}
	}
	if (iLocal_131 == 0)
	{
		if (iLocal_113 == 0)
		{
			if (unk_0x1BD7199394D7F19A(0, 40) || unk_0x1BD7199394D7F19A(0, 41))
			{
				fLocal_114 = unk_0xB82447E90D1C00A2();
				if (fLocal_114 > 1f && fLocal_114 < 4.5f)
				{
					if (unk_0x046706CBB367B768(iLocal_112))
					{
						unk_0xC4CC25B68A91D144(iLocal_112, "Camera_Zoom", &Global_19670, 1);
					}
				}
				else
				{
					unk_0xC5E5600D1CF5CEF9(iLocal_112);
				}
				iLocal_113 = 1;
			}
		}
		else if (unk_0x22D6FB6153F774D3(0, 40) || unk_0x22D6FB6153F774D3(0, 41))
		{
			fLocal_114 = unk_0xB82447E90D1C00A2();
			if (fLocal_114 > 1f && fLocal_114 < 4.5f)
			{
				if (unk_0x046706CBB367B768(iLocal_112))
				{
					unk_0xC4CC25B68A91D144(iLocal_112, "Camera_Zoom", &Global_19670, 1);
				}
			}
			else
			{
				unk_0xC5E5600D1CF5CEF9(iLocal_112);
			}
		}
		else
		{
			unk_0xC5E5600D1CF5CEF9(iLocal_112);
		}
	}
	if ((func_106(2, Global_19650, 0) && !func_118()) && !func_106(2, Global_19649, 0))
	{
		fLocal_75 = unk_0x9394C7A1C8F8FF02();
		fLocal_76 = unk_0x1A63A58703BD9306();
		unk_0x42D13FF9E8D73B13(0, 0);
		unk_0xBE20AB8238688965(&Global_7551, 21);
		unk_0xC5E5600D1CF5CEF9(iLocal_112);
		iLocal_127 = 1;
		func_158(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_158(uLocal_140, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0xC4CC25B68A91D144(-1, "Camera_Shoot", &Global_19670, 1);
		func_157(uLocal_140, "CLOSE_SHUTTER");
		Local_84 = { -90.3f, 0f, 90f };
		unk_0xC6EAF6E2A0CACFED(Local_84, 0);
		if (!func_167())
		{
			func_111(1);
		}
		Global_22041 = 1;
		unk_0x411C0BFEF1468390(0, 1);
		while (Global_22040 < 6 && Global_19681.f_1 > 3)
		{
			func_152();
			func_134();
			func_88();
			func_139();
			unk_0x0037AEC7A79CCCB4();
			SYSTEM::WAIT(0);
		}
		unk_0xE616BD4C9E3D197E(0, 0);
		if (Global_19623)
		{
			func_1(1);
		}
		iLocal_135 = unk_0x578C4EF320340AF7();
		while (unk_0x578C4EF320340AF7() < (iLocal_135 + iLocal_138) && Global_19681.f_1 > 3)
		{
			func_152();
			func_134();
			func_88();
			unk_0x0037AEC7A79CCCB4();
			SYSTEM::WAIT(0);
		}
		SYSTEM::SETTIMERA(0);
		func_157(uLocal_140, "OPEN_SHUTTER");
		unk_0xD2459066EA58CE43(&Global_7551, 21);
		func_123();
		if (Global_19681.f_1 > 3)
		{
			if (Global_76833)
			{
				func_21(1086, 1, -1);
				func_20();
				func_17(-1492367786, 23, 0);
			}
			else
			{
				switch (func_11())
				{
					case 0:
						unk_0x1C7D71D8BB1A7035(joaat("SP0_NO_PHOTOS_TAKEN"), 1f);
						break;
					
					case 1:
						unk_0x1C7D71D8BB1A7035(joaat("SP1_NO_PHOTOS_TAKEN"), 1f);
						break;
					
					case 2:
						unk_0x1C7D71D8BB1A7035(joaat("SP2_NO_PHOTOS_TAKEN"), 1f);
						break;
				}
				func_20();
			}
			func_120(0);
		}
		func_134();
	}
	if (unk_0xCE990E643CD9D0E5(Global_7551, 28))
	{
		if (func_106(2, Global_19653, 0))
		{
			unk_0x42D13FF9E8D73B13(0, 0);
			SYSTEM::WAIT(0);
			unk_0x0037AEC7A79CCCB4();
			func_152();
			SYSTEM::WAIT(0);
			unk_0x0037AEC7A79CCCB4();
			func_152();
			unk_0x54D93C58D91752B6();
			unk_0x042EC7EFE200D926();
			Global_22042 = 1;
			iLocal_143 = 0;
			iLocal_126 = 1;
			Global_22038 = 1;
			unk_0x411C0BFEF1468390(0, 1);
			iLocal_128 = 0;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			iLocal_123 = 1;
			func_6();
			iLocal_127 = 0;
			if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				Local_67 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1) };
			}
			func_116(0, 0);
			func_120(0);
			iLocal_115 = 0;
			func_111(1);
			if (!Global_2540384.f_6593)
			{
				unk_0xBE20AB8238688965(&Global_7551, 9);
			}
			unk_0x73D73FA241EA4AB7(0);
			iLocal_142 = 0;
			func_158(Global_19662, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_11()
{
	func_12();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_12()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_15(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_14(unk_0x9B0761B4C3EB8BC7());
			if (func_13(iVar0) && (!func_61(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_13(Global_111858.f_2359.f_539.f_4321))
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

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return func_16(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_16(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

void func_17(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_19(iParam1, iParam2))
	{
		iVar0 = func_18();
		Global_2462127[iVar0] = iParam1;
		Global_2462138[iVar0] = iParam0;
	}
}

int func_18()
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

int func_19(int iParam0, var uParam1)
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

void func_20()
{
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 1;
	iLocal_125 = 0;
	Global_19618 = { Global_19634[Global_19626 /*3*/] };
	func_109(0, 1);
	func_116(0, 0);
	func_120(0);
	iLocal_115 = 0;
	func_111(1);
	if (!unk_0xCE990E643CD9D0E5(Global_7552, 28))
	{
		if (unk_0x584E16598C4BAF97() == 0)
		{
			if (unk_0x11E5DE894D6A8A5F())
			{
				if (iLocal_117 == 0)
				{
					iLocal_117 = 1;
				}
			}
		}
	}
}

void func_21(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_25(iParam0, func_26(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_24(iParam0))
	{
		func_23(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_22(iParam0, iVar0, iParam2, 1);
	}
}

void func_22(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2551832[iParam0 /*3*/][func_26(uParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1388125[func_26(uParam2)] = iParam1;
			break;
		
		case 788:
			Global_1388131[func_26(uParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388137[func_26(uParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388143[func_26(uParam2)] = iParam1;
			break;
		
		case 8727:
			Global_1388149[func_26(uParam2)] = iParam1;
			break;
		
		case 777:
			Global_1388095[func_26(uParam2)] = iParam1;
			break;
		
		case 778:
			Global_1388101[func_26(uParam2)] = iParam1;
			break;
		
		case 779:
			Global_1388107[func_26(uParam2)] = iParam1;
			break;
		
		case 780:
			Global_1388113[func_26(uParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1388119[func_26(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1388065[func_26(uParam2)] = iParam1;
			break;
		
		case 768:
			Global_1388071[func_26(uParam2)] = iParam1;
			break;
		
		case 769:
			Global_1388077[func_26(uParam2)] = iParam1;
			break;
		
		case 770:
			Global_1388083[func_26(uParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388089[func_26(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388155[func_26(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388161[func_26(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388167[func_26(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388173[func_26(uParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1388179[func_26(uParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388185[func_26(uParam2)] = iParam1;
			break;
		
		case 7234:
			Global_1388191[func_26(uParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388197[func_26(uParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388203[func_26(uParam2)] = iParam1;
			break;
		
		case 1877:
			Global_2590417[0 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 2268:
			Global_2590417[1 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 2930:
			Global_2590417[2 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2590417[3 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 10138:
			Global_2590566[func_26(uParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388209[func_26(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388215[func_26(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388221[func_26(uParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388227[func_26(uParam2)] = iParam1;
			break;
		
		case 9534:
			Global_1388233[func_26(uParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388239[func_26(uParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2590490[0 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2590490[1 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2590490[2 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2590490[3 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2590490[4 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2590569[0 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2590569[1 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2590569[2 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2590569[3 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2590569[4 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2590585[0 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2590585[1 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2590585[2 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2590585[3 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2590585[4 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2590490[5 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3228:
			Global_2590417[4 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2590601[func_26(uParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2590610[func_26(uParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2590604[func_26(uParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2590613[func_26(uParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2590607[func_26(uParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2590616[func_26(uParam2)] = iParam1;
			break;
		
		case 3690:
			Global_2590619[func_26(uParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2590490[6 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2590417[5 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2590490[7 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2590417[6 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2590490[8 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2590417[7 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2590490[9 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2590417[8 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2590490[10 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2590417[9 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2590490[11 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2590417[10 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2590490[12 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2590417[11 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2590490[13 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2590417[12 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2590490[14 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2590417[13 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2590490[15 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2590417[14 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2590490[16 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2590417[15 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2590490[17 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2590417[16 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 7284:
			Global_2590417[17 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2590417[18 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2590417[19 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8011:
			Global_2590417[20 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2590622[func_26(uParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2590625[func_26(uParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2590628[func_26(uParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2590631[func_26(uParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2590634[func_26(uParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2590637[func_26(uParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2590640[func_26(uParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2590643[func_26(uParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2590646[func_26(uParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2590649[func_26(uParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2590652[func_26(uParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2590655[func_26(uParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2590658[func_26(uParam2)] = iParam1;
			break;
		
		case 8901:
			Global_2590661[func_26(uParam2)] = iParam1;
			break;
		
		case 8535:
			Global_2590417[21 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2590490[23 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8976:
			Global_2590417[22 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2590490[24 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2590417[23 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_23(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_26(uParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_24(int iParam0)
{
	if (Global_1388046)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8727:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8729:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8731:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8733:
			case 1303:
			case 7234:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8732:
			case 9534:
			case 1236:
			case 1877:
			case 2268:
			case 2930:
			case 3059:
			case 10138:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3058:
			case 3233:
			case 3235:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3228:
			case 3222:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3690:
			case 3231:
			case 3230:
			case 4021:
			case 4020:
			case 4024:
			case 4023:
			case 4027:
			case 4026:
			case 4030:
			case 4029:
			case 6111:
			case 6110:
			case 6169:
			case 6168:
			case 6534:
			case 6533:
			case 6547:
			case 6546:
			case 6560:
			case 6559:
			case 6563:
			case 6562:
			case 6566:
			case 6565:
			case 7284:
			case 7286:
			case 7288:
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
			case 8295:
			case 8011:
			case 8535:
			case 8976:
			case 8978:
			case 8979:
			case 8981:
				return 1;
				break;
			}
	}
	return 0;
}

int func_25(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2551832[iParam0 /*3*/][func_26(uParam1)];
		if (unk_0xD2F202166691EDB2(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_26(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

var func_27()
{
	return Global_1312763;
}

void func_28()
{
	if (iLocal_156 == 1)
	{
		func_53();
		return;
	}
	if (iLocal_133 == 0 && iLocal_134 == 0)
	{
		func_158(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_158(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		if (!func_154())
		{
			func_72(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xED026A379B794F61(0, 177, 1), "CELL_281");
			func_72(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xED026A379B794F61(0, 176, 1), "CELL_280");
		}
		else
		{
			func_72(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xED026A379B794F61(0, 177, 1), "CELL_281");
			func_72(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xED026A379B794F61(0, 176, 1), "CELL_280");
		}
		if (iLocal_131)
		{
			if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) || unk_0x5B5B4E37C1CCA675(unk_0x9B0761B4C3EB8BC7()) == 2)
				{
					if (unk_0xC1F43F8D0D5EB664(2) || unk_0xDCA0815D900F27F8())
					{
						func_72(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xED026A379B794F61(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_72(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xED026A379B794F61(0, 184, 1), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_76833 == 0 && unk_0x7B70881748D166CD(joaat("pi_menu")) > 0) && func_60())
				{
					func_51();
				}
				else
				{
					if (unk_0xC1F43F8D0D5EB664(2) || unk_0xDCA0815D900F27F8())
					{
						func_72(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xED026A379B794F61(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_72(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xED026A379B794F61(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_72(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xED026A379B794F61(2, 183, 1), "CELL_GRID");
					func_72(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x32F8D6499042A233(0, 1, 1), "CELL_285");
					if (func_167())
					{
						func_50(5f);
						func_49(6f);
						if (func_30(1))
						{
							func_29(7f);
							if (bLocal_62)
							{
								func_72(uLocal_141, "SET_DATA_SLOT", 8f, unk_0xED026A379B794F61(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_62)
						{
							func_72(uLocal_141, "SET_DATA_SLOT", 7f, unk_0xED026A379B794F61(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) || unk_0x5B5B4E37C1CCA675(unk_0x9B0761B4C3EB8BC7()) == 2)
			{
				if (!unk_0x5B5B4E37C1CCA675(unk_0x9B0761B4C3EB8BC7()) == 2)
				{
					if (!func_154())
					{
						func_72(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x32F8D6499042A233(0, 1, 1), "CELL_285");
						func_72(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xED026A379B794F61(2, 183, 1), "CELL_GRID");
						func_72(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xED026A379B794F61(0, 39, 1), "CELL_284");
					}
					else
					{
						func_72(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x32F8D6499042A233(0, 1, 1), "CELL_285");
						if (!unk_0xC1F43F8D0D5EB664(0))
						{
							func_72(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xED026A379B794F61(0, 210, 1), "CELL_284");
						}
						else
						{
							func_72(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x32F8D6499042A233(0, 29, 1), "CELL_284");
						}
					}
					if (!func_154())
					{
						if (func_167())
						{
							func_50(6f);
							func_49(7f);
							if (bLocal_63)
							{
								func_72(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xED026A379B794F61(0, 182, 1), "CELL_FOCUS");
							}
							func_72(uLocal_141, "SET_DATA_SLOT", 8f, unk_0xED026A379B794F61(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_72(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x32F8D6499042A233(0, 1, 1), "CELL_285");
					if (func_167())
					{
						func_50(3f);
						func_49(4f);
						func_72(uLocal_141, "SET_DATA_SLOT", 8f, unk_0xED026A379B794F61(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (!func_154())
				{
					if (unk_0xC1F43F8D0D5EB664(2) || unk_0xDCA0815D900F27F8())
					{
						func_72(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xED026A379B794F61(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_72(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xED026A379B794F61(0, 184, 1), "CELL_SP_1NP_XB");
					}
				}
				if (!unk_0x5B5B4E37C1CCA675(unk_0x9B0761B4C3EB8BC7()) == 2)
				{
					if (!func_154())
					{
						func_72(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xED026A379B794F61(2, 183, 1), "CELL_GRID");
						func_72(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x32F8D6499042A233(0, 1, 1), "CELL_285");
					}
					else
					{
						func_72(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x32F8D6499042A233(0, 1, 1), "CELL_285");
						if (!unk_0xC1F43F8D0D5EB664(0))
						{
							func_72(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xED026A379B794F61(0, 210, 1), "CELL_284");
						}
						else
						{
							func_72(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x32F8D6499042A233(0, 29, 1), "CELL_284");
						}
					}
					if (!func_154())
					{
						func_72(uLocal_141, "SET_DATA_SLOT", 6f, unk_0xED026A379B794F61(0, 39, 1), "CELL_284");
					}
					if (!func_154())
					{
						if (func_167())
						{
							func_50(7f);
							func_49(8f);
							if (bLocal_63)
							{
								func_72(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xED026A379B794F61(0, 182, 1), "CELL_FOCUS");
							}
							func_72(uLocal_141, "SET_DATA_SLOT", 9f, unk_0xED026A379B794F61(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_72(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x32F8D6499042A233(0, 1, 1), "CELL_285");
					if (func_167())
					{
						func_50(3f);
						func_49(4f);
						func_72(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xED026A379B794F61(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0x830F007E19C63E14(uLocal_141, "SET_MAX_WIDTH");
		unk_0x49B9B8101B158AEE(fLocal_77);
		unk_0xE1FDD153F5858534();
		func_158(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_29(float fParam0)
{
	func_72(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0xED026A379B794F61(0, 174, 1), "CELL_ACTION");
}

int func_30(int iParam0)
{
	if (unk_0x25DDB354A40FFCDB())
	{
		if (func_48(Global_4194378, Global_4194379))
		{
			if (iParam0 == 0 || !func_31(Global_4194378, Global_4194379, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_31(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_32(unk_0x9B0761B4C3EB8BC7(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_32(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar6;
	var uVar12;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	if (func_47())
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
	func_40(iParam1, iParam2, &uVar0, &uVar6, &uVar12, iVar22, bParam5);
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		if (unk_0x36FE6D3220816ADA(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar19 = func_39(iParam0);
			if (!iVar19 == -1)
			{
				if (func_38(&uVar0, iVar19))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar20 = func_37(iParam0);
			if (!iVar20 == -1)
			{
				if (func_35(&uVar6, iVar20))
				{
					return 1;
				}
			}
		}
		if (unk_0x25DDB354A40FFCDB())
		{
			iVar21 = func_34(iParam0);
			if (!iVar21 == 0)
			{
				if (func_33(&uVar12, iVar21))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_33(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_34(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x3FB4D40A857CEA77(iParam0, 1);
	return uVar0;
}

bool func_35(var uParam0, int iParam1)
{
	return func_36(uParam0, iParam1);
}

int func_36(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_37(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xA98E0435012EAF07(iParam0, 0);
	return uVar0;
}

bool func_38(var uParam0, int iParam1)
{
	return func_36(uParam0, iParam1);
}

var func_39(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xA98E0435012EAF07(iParam0, 0);
	return uVar0;
}

void func_40(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_46(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
		case 0:
			func_45(iParam0, iParam1, uParam2, uParam3, uParam4, iParam5, bParam6);
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 1:
							func_44(uParam3, 4, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 2:
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 39, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 38, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				
				case 5:
				case 24:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 62, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_46(uParam4, 136, 1);
							func_46(uParam4, 138, 1);
							func_46(uParam4, 139, 1);
							func_46(uParam4, 143, 1);
							func_46(uParam4, 144, 1);
							func_46(uParam4, 145, 1);
							func_46(uParam4, 147, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 1:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 2:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_46(uParam4, 136, 1);
							func_46(uParam4, 138, 1);
							func_46(uParam4, 139, 1);
							func_46(uParam4, 143, 1);
							func_46(uParam4, 144, 1);
							func_46(uParam4, 145, 1);
							func_46(uParam4, 147, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				
				case 58:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 66, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 77, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 59:
					func_44(uParam3, 67, 1);
					func_44(uParam3, 68, 1);
					func_44(uParam3, 69, 1);
					func_44(uParam3, 70, 1);
					func_44(uParam3, 71, 1);
					func_44(uParam3, 72, 1);
					func_44(uParam3, 73, 1);
					func_44(uParam3, 74, 1);
					func_44(uParam3, 78, 1);
					func_44(uParam3, 79, 1);
					func_44(uParam3, 80, 1);
					func_44(uParam3, 81, 1);
					func_44(uParam3, 82, 1);
					func_44(uParam3, 91, 1);
					func_44(uParam3, 92, 1);
					func_42(uParam2, 66, 1);
					func_42(uParam2, 67, 1);
					func_42(uParam2, 68, 1);
					func_42(uParam2, 69, 1);
					func_42(uParam2, 70, 1);
					func_42(uParam2, 71, 1);
					func_42(uParam2, 72, 1);
					func_42(uParam2, 73, 1);
					func_42(uParam2, 77, 1);
					func_42(uParam2, 78, 1);
					func_42(uParam2, 79, 1);
					func_42(uParam2, 80, 1);
					func_42(uParam2, 81, 1);
					func_42(uParam2, 90, 1);
					func_42(uParam2, 91, 1);
					func_44(uParam3, 38, 1);
					func_44(uParam3, 47, 1);
					func_44(uParam3, 111, 1);
					func_42(uParam2, 37, 1);
					func_42(uParam2, 46, 1);
					func_42(uParam2, 110, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_41(uParam2, uParam3, uParam4);
					break;
				
				case 60:
					func_44(uParam3, 67, 1);
					func_44(uParam3, 68, 1);
					func_44(uParam3, 69, 1);
					func_44(uParam3, 70, 1);
					func_44(uParam3, 71, 1);
					func_44(uParam3, 72, 1);
					func_44(uParam3, 73, 1);
					func_44(uParam3, 74, 1);
					func_44(uParam3, 78, 1);
					func_44(uParam3, 79, 1);
					func_44(uParam3, 80, 1);
					func_44(uParam3, 81, 1);
					func_44(uParam3, 82, 1);
					func_44(uParam3, 91, 1);
					func_44(uParam3, 92, 1);
					func_42(uParam2, 66, 1);
					func_42(uParam2, 67, 1);
					func_42(uParam2, 68, 1);
					func_42(uParam2, 69, 1);
					func_42(uParam2, 70, 1);
					func_42(uParam2, 71, 1);
					func_42(uParam2, 72, 1);
					func_42(uParam2, 73, 1);
					func_42(uParam2, 77, 1);
					func_42(uParam2, 78, 1);
					func_42(uParam2, 79, 1);
					func_42(uParam2, 80, 1);
					func_42(uParam2, 81, 1);
					func_42(uParam2, 90, 1);
					func_42(uParam2, 91, 1);
					func_44(uParam3, 38, 1);
					func_44(uParam3, 47, 1);
					func_44(uParam3, 111, 1);
					func_42(uParam2, 37, 1);
					func_42(uParam2, 46, 1);
					func_42(uParam2, 110, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_41(uParam2, uParam3, uParam4);
					break;
				
				case 61:
					func_44(uParam3, 67, 1);
					func_44(uParam3, 68, 1);
					func_44(uParam3, 69, 1);
					func_44(uParam3, 70, 1);
					func_44(uParam3, 71, 1);
					func_44(uParam3, 72, 1);
					func_44(uParam3, 73, 1);
					func_44(uParam3, 74, 1);
					func_44(uParam3, 78, 1);
					func_44(uParam3, 79, 1);
					func_44(uParam3, 80, 1);
					func_44(uParam3, 81, 1);
					func_44(uParam3, 82, 1);
					func_44(uParam3, 91, 1);
					func_44(uParam3, 92, 1);
					func_42(uParam2, 66, 1);
					func_42(uParam2, 67, 1);
					func_42(uParam2, 68, 1);
					func_42(uParam2, 69, 1);
					func_42(uParam2, 70, 1);
					func_42(uParam2, 71, 1);
					func_42(uParam2, 72, 1);
					func_42(uParam2, 73, 1);
					func_42(uParam2, 77, 1);
					func_42(uParam2, 78, 1);
					func_42(uParam2, 79, 1);
					func_42(uParam2, 80, 1);
					func_42(uParam2, 81, 1);
					func_42(uParam2, 90, 1);
					func_42(uParam2, 91, 1);
					func_44(uParam3, 38, 1);
					func_44(uParam3, 47, 1);
					func_44(uParam3, 111, 1);
					func_42(uParam2, 37, 1);
					func_42(uParam2, 46, 1);
					func_42(uParam2, 110, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_41(uParam2, uParam3, uParam4);
					break;
				
				case 62:
				case 63:
				case 64:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 10:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 3, 1);
							func_44(uParam3, 4, 1);
							func_44(uParam3, 6, 1);
							func_44(uParam3, 10, 1);
							func_44(uParam3, 54, 1);
							func_44(uParam3, 55, 1);
							func_44(uParam3, 56, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 37, 1);
							func_44(uParam3, 39, 1);
							func_44(uParam3, 55, 1);
							func_44(uParam3, 106, 1);
							func_44(uParam3, 114, 1);
							func_44(uParam3, 116, 1);
							func_44(uParam3, 117, 1);
							func_44(uParam3, 118, 1);
							func_44(uParam3, 119, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 8, 1);
							func_42(uParam2, 9, 1);
							func_42(uParam2, 10, 1);
							func_42(uParam2, 53, 1);
							func_42(uParam2, 56, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 26, 1);
							func_42(uParam2, 27, 1);
							func_42(uParam2, 28, 1);
							func_42(uParam2, 32, 1);
							func_42(uParam2, 36, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 14, 1);
							func_42(uParam2, 105, 1);
							func_42(uParam2, 113, 1);
							func_42(uParam2, 114, 1);
							func_42(uParam2, 115, 1);
							func_42(uParam2, 116, 1);
							func_42(uParam2, 117, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_44(uParam3, 3, 1);
							func_44(uParam3, 4, 1);
							func_44(uParam3, 6, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 19, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 37, 1);
							func_44(uParam3, 39, 1);
							func_44(uParam3, 55, 1);
							func_44(uParam3, 106, 1);
							func_44(uParam3, 114, 1);
							func_44(uParam3, 116, 1);
							func_44(uParam3, 117, 1);
							func_44(uParam3, 118, 1);
							func_44(uParam3, 119, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 8, 1);
							func_42(uParam2, 9, 1);
							func_42(uParam2, 10, 1);
							func_42(uParam2, 53, 1);
							func_42(uParam2, 56, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 11, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 22, 1);
							func_42(uParam2, 54, 1);
							func_42(uParam2, 26, 1);
							func_42(uParam2, 27, 1);
							func_42(uParam2, 28, 1);
							func_42(uParam2, 30, 1);
							func_42(uParam2, 31, 1);
							func_42(uParam2, 32, 1);
							func_42(uParam2, 36, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 14, 1);
							func_42(uParam2, 105, 1);
							func_42(uParam2, 113, 1);
							func_42(uParam2, 114, 1);
							func_42(uParam2, 115, 1);
							func_42(uParam2, 116, 1);
							func_42(uParam2, 117, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 39, 1);
							func_44(uParam3, 106, 1);
							func_44(uParam3, 114, 1);
							func_44(uParam3, 116, 1);
							func_44(uParam3, 117, 1);
							func_44(uParam3, 118, 1);
							func_44(uParam3, 119, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 14, 1);
							func_42(uParam2, 105, 1);
							func_42(uParam2, 113, 1);
							func_42(uParam2, 114, 1);
							func_42(uParam2, 115, 1);
							func_42(uParam2, 116, 1);
							func_42(uParam2, 117, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 13:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 19, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_41(uParam2, uParam3, uParam4);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 2:
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_41(uParam2, uParam3, uParam4);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				
				case 16:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 4, 1);
							break;
						
						case 1:
							func_46(uParam4, 43, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 23:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 17:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 6, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 1:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 6, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 2:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 6, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				
				case 19:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 3, 1);
							func_44(uParam3, 7, 1);
							func_44(uParam3, 0, 1);
							func_44(uParam3, 12, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 15, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 17, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 21, 1);
							func_44(uParam3, 25, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 30, 1);
							func_44(uParam3, 31, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 39, 1);
							func_44(uParam3, 37, 1);
							func_42(uParam2, 0, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 7, 1);
							func_42(uParam2, 8, 1);
							func_42(uParam2, 11, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 15, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 17, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 19, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 22, 1);
							func_42(uParam2, 54, 1);
							func_42(uParam2, 24, 1);
							func_42(uParam2, 26, 1);
							func_42(uParam2, 27, 1);
							func_42(uParam2, 28, 1);
							func_42(uParam2, 30, 1);
							func_42(uParam2, 31, 1);
							func_42(uParam2, 32, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 36, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 77, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 1:
							func_44(uParam3, 3, 1);
							func_44(uParam3, 7, 1);
							func_44(uParam3, 0, 1);
							func_44(uParam3, 12, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 15, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 17, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 21, 1);
							func_44(uParam3, 25, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 30, 1);
							func_44(uParam3, 31, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 39, 1);
							func_42(uParam2, 0, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 7, 1);
							func_42(uParam2, 11, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 15, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 17, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 19, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 22, 1);
							func_42(uParam2, 54, 1);
							func_42(uParam2, 24, 1);
							func_42(uParam2, 38, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 6, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 77, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 2:
							func_44(uParam3, 1, 1);
							func_44(uParam3, 3, 1);
							func_44(uParam3, 4, 1);
							func_44(uParam3, 5, 1);
							func_44(uParam3, 7, 1);
							func_44(uParam3, 10, 1);
							func_44(uParam3, 54, 1);
							func_44(uParam3, 55, 1);
							func_44(uParam3, 56, 1);
							func_44(uParam3, 0, 1);
							func_44(uParam3, 12, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 15, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 17, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 21, 1);
							func_44(uParam3, 25, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 30, 1);
							func_44(uParam3, 31, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 37, 1);
							func_44(uParam3, 39, 1);
							func_42(uParam2, 0, 1);
							func_42(uParam2, 1, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 5, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 7, 1);
							func_42(uParam2, 8, 1);
							func_42(uParam2, 9, 1);
							func_42(uParam2, 10, 1);
							func_42(uParam2, 53, 1);
							func_42(uParam2, 56, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 11, 1);
							func_42(uParam2, 12, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 14, 1);
							func_42(uParam2, 15, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 17, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 19, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 22, 1);
							func_42(uParam2, 54, 1);
							func_42(uParam2, 23, 1);
							func_42(uParam2, 24, 1);
							func_42(uParam2, 26, 1);
							func_42(uParam2, 27, 1);
							func_42(uParam2, 28, 1);
							func_42(uParam2, 29, 1);
							func_42(uParam2, 30, 1);
							func_42(uParam2, 31, 1);
							func_42(uParam2, 32, 1);
							func_42(uParam2, 33, 1);
							func_42(uParam2, 36, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 55, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 6, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 77, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				
				case 18:
					switch (iParam5)
					{
						case 0:
							break;
						
						case 1:
							func_42(uParam2, 2, 1);
							func_42(uParam2, 20, 1);
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
					func_40(2, 58, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 32:
					func_40(2, 59, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 17:
				case 27:
				case 31:
					break;
			}
			break;
	}
}

void func_41(var uParam0, var uParam1, var uParam2)
{
	if ((*uParam0)[0] == 0 || (*uParam1)[0] == 0)
	{
	}
	func_46(uParam2, 124, 1);
	func_46(uParam2, 125, 1);
	func_46(uParam2, 126, 1);
	func_46(uParam2, 127, 1);
	func_46(uParam2, 128, 1);
	func_46(uParam2, 129, 1);
	func_46(uParam2, 130, 1);
	func_46(uParam2, 131, 1);
	func_46(uParam2, 132, 1);
	func_46(uParam2, 133, 1);
	func_46(uParam2, 136, 1);
	func_46(uParam2, 138, 1);
	func_46(uParam2, 139, 1);
	func_46(uParam2, 143, 1);
	func_46(uParam2, 144, 1);
	func_46(uParam2, 145, 1);
	func_46(uParam2, 147, 1);
}

void func_42(var uParam0, int iParam1, bool bParam2)
{
	func_43(uParam0, iParam1, bParam2);
}

void func_43(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xBE20AB8238688965(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		unk_0xD2459066EA58CE43(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_44(var uParam0, int iParam1, bool bParam2)
{
	func_43(uParam0, iParam1, bParam2);
}

void func_45(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_46(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							break;
						
						case 1:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							break;
						
						case 2:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
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
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 16, 1);
						func_42(uParam2, 47, 1);
						func_42(uParam2, 48, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
					}
					func_46(uParam4, 3, 1);
					func_46(uParam4, 4, 1);
					func_46(uParam4, 5, 1);
					func_46(uParam4, 6, 1);
					func_46(uParam4, 7, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 14, 1);
					func_46(uParam4, 15, 1);
					func_46(uParam4, 16, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_46(uParam4, 110, 1);
					func_46(uParam4, 112, 1);
					func_46(uParam4, 115, 1);
					func_46(uParam4, 116, 1);
					break;
				
				case 1:
					if (bParam6)
					{
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
					}
					func_46(uParam4, 9, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					break;
				
				case 10:
					func_46(uParam4, 28, 1);
					break;
				
				case 12:
					if (bParam6)
					{
						func_44(uParam3, 3, 1);
						func_44(uParam3, 4, 1);
						func_44(uParam3, 6, 1);
						func_44(uParam3, 10, 1);
						func_44(uParam3, 54, 1);
						func_44(uParam3, 55, 1);
						func_44(uParam3, 56, 1);
						func_44(uParam3, 13, 1);
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_44(uParam3, 20, 1);
						func_44(uParam3, 26, 1);
						func_44(uParam3, 27, 1);
						func_44(uParam3, 32, 1);
						func_44(uParam3, 33, 1);
						func_44(uParam3, 37, 1);
						func_44(uParam3, 39, 1);
						func_44(uParam3, 106, 1);
						func_44(uParam3, 114, 1);
						func_44(uParam3, 116, 1);
						func_44(uParam3, 117, 1);
						func_44(uParam3, 118, 1);
						func_44(uParam3, 119, 1);
						func_42(uParam2, 3, 1);
						func_42(uParam2, 4, 1);
						func_42(uParam2, 6, 1);
						func_42(uParam2, 8, 1);
						func_42(uParam2, 9, 1);
						func_42(uParam2, 10, 1);
						func_42(uParam2, 53, 1);
						func_42(uParam2, 56, 1);
						func_42(uParam2, 55, 1);
						func_42(uParam2, 13, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
						func_42(uParam2, 21, 1);
						func_42(uParam2, 26, 1);
						func_42(uParam2, 27, 1);
						func_42(uParam2, 28, 1);
						func_42(uParam2, 32, 1);
						func_42(uParam2, 36, 1);
						func_42(uParam2, 38, 1);
						func_42(uParam2, 55, 1);
						func_42(uParam2, 14, 1);
						func_42(uParam2, 105, 1);
						func_42(uParam2, 113, 1);
						func_42(uParam2, 114, 1);
						func_42(uParam2, 115, 1);
						func_42(uParam2, 116, 1);
						func_42(uParam2, 117, 1);
					}
					func_46(uParam4, 2, 1);
					func_46(uParam4, 3, 1);
					func_46(uParam4, 4, 1);
					func_46(uParam4, 14, 1);
					func_46(uParam4, 15, 1);
					func_46(uParam4, 16, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 32, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_46(uParam4, 110, 1);
					func_46(uParam4, 112, 1);
					break;
				
				case 15:
					if (bParam6)
					{
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
						func_42(uParam2, 19, 1);
					}
					func_46(uParam4, 3, 1);
					func_46(uParam4, 6, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 32, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_46(uParam4, 110, 1);
					func_46(uParam4, 112, 1);
					func_46(uParam4, 115, 1);
					func_46(uParam4, 116, 1);
					break;
				
				case 18:
					if (bParam6)
					{
						func_44(uParam3, 4, 1);
					}
					break;
				
				case 17:
					func_46(uParam4, 9, 1);
					break;
				
				case 19:
					if (bParam6)
					{
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 16, 1);
						func_42(uParam2, 47, 1);
						func_42(uParam2, 48, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
					}
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					break;
				
				case 21:
					if (bParam6)
					{
						func_44(uParam3, 3, 1);
						func_44(uParam3, 7, 1);
						func_44(uParam3, 0, 1);
						func_44(uParam3, 12, 1);
						func_44(uParam3, 13, 1);
						func_44(uParam3, 15, 1);
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 17, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_44(uParam3, 20, 1);
						func_44(uParam3, 21, 1);
						func_44(uParam3, 25, 1);
						func_44(uParam3, 26, 1);
						func_44(uParam3, 27, 1);
						func_44(uParam3, 30, 1);
						func_44(uParam3, 31, 1);
						func_44(uParam3, 32, 1);
						func_44(uParam3, 33, 1);
						func_44(uParam3, 39, 1);
						func_44(uParam3, 37, 1);
						func_44(uParam3, 55, 1);
						func_42(uParam2, 0, 1);
						func_42(uParam2, 2, 1);
						func_42(uParam2, 3, 1);
						func_42(uParam2, 4, 1);
						func_42(uParam2, 6, 1);
						func_42(uParam2, 7, 1);
						func_42(uParam2, 8, 1);
						func_42(uParam2, 11, 1);
						func_42(uParam2, 13, 1);
						func_42(uParam2, 15, 1);
						func_42(uParam2, 16, 1);
						func_42(uParam2, 47, 1);
						func_42(uParam2, 48, 1);
						func_42(uParam2, 17, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
						func_42(uParam2, 19, 1);
						func_42(uParam2, 20, 1);
						func_42(uParam2, 21, 1);
						func_42(uParam2, 22, 1);
						func_42(uParam2, 54, 1);
						func_42(uParam2, 24, 1);
						func_42(uParam2, 26, 1);
						func_42(uParam2, 27, 1);
						func_42(uParam2, 28, 1);
						func_42(uParam2, 30, 1);
						func_42(uParam2, 31, 1);
						func_42(uParam2, 32, 1);
						func_42(uParam2, 38, 1);
						func_42(uParam2, 36, 1);
					}
					func_46(uParam4, 3, 1);
					func_46(uParam4, 3, 1);
					func_46(uParam4, 4, 1);
					func_46(uParam4, 14, 1);
					func_46(uParam4, 15, 1);
					func_46(uParam4, 16, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					break;
			}
			break;
	}
}

void func_46(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xBE20AB8238688965(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		unk_0xD2459066EA58CE43(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

int func_47()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 7:
				case 5:
				case 10:
				case 11:
				case 12:
				case 13:
				case 15:
				case 14:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 26:
				case 25:
				case 24:
				case 30:
				case 34:
				case 40:
				case 41:
				case 42:
				case 43:
				case 44:
				case 45:
				case 46:
				case 47:
				case 48:
				case 49:
				case 50:
				case 51:
					return 1;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_49(float fParam0)
{
	func_72(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0xED026A379B794F61(0, 172, 1), "CELL_BORDER");
}

void func_50(float fParam0)
{
	if (Global_1673793)
	{
		fParam0 = -1f;
	}
	func_72(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0xED026A379B794F61(0, 173, 1), "CELL_FILTER");
}

void func_51()
{
	if (unk_0xC1F43F8D0D5EB664(2) || unk_0xDCA0815D900F27F8())
	{
		func_72(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xED026A379B794F61(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_72(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xED026A379B794F61(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_72(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xED026A379B794F61(0, 183, 1), "CELL_GRID");
	func_72(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x32F8D6499042A233(0, 1, 1), "CELL_285");
	func_50(5f);
	func_49(6f);
	func_52(7f);
	func_29(8f);
	if (bLocal_62)
	{
		func_72(uLocal_141, "SET_DATA_SLOT", 9f, unk_0xED026A379B794F61(2, 185, 1), "CELL_DEPTH");
	}
	if (!func_61(14))
	{
		if ((Global_76833 == 0 && unk_0x7B70881748D166CD(joaat("pi_menu")) > 0) && func_60())
		{
			unk_0x830F007E19C63E14(uLocal_140, "SET_FOCUS_LOCK");
			unk_0xF1B28F753235CE2A(1);
			unk_0xB23270F3D5E62FDE("CELL_ACTTL");
			unk_0x9EFD301E3BE8324E(unk_0x7C774D8CB8DC6FE3(&Global_4272009));
			unk_0x2042E9CA4306F725();
			unk_0xF1B28F753235CE2A(0);
			unk_0xE1FDD153F5858534();
		}
	}
}

void func_52(float fParam0)
{
	func_72(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0xED026A379B794F61(0, 175, 1), "CELL_ACCYC");
}

void func_53()
{
	func_158(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_158(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_72(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xED026A379B794F61(0, 39, 1), "CELL_284");
	func_72(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x32F8D6499042A233(0, 1, 1), "CELL_285");
	func_72(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xED026A379B794F61(0, 177, 1), "CELL_281");
	func_72(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xED026A379B794F61(0, 176, 1), "CELL_280");
	unk_0x830F007E19C63E14(uLocal_141, "SET_MAX_WIDTH");
	unk_0x49B9B8101B158AEE(fLocal_77);
	unk_0xE1FDD153F5858534();
	func_158(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_54()
{
	if (iLocal_156 == 1)
	{
		func_55();
		return;
	}
	if (iLocal_133 == 0 && iLocal_134 == 0)
	{
		func_158(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_158(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_72(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xED026A379B794F61(0, 177, 1), "CELL_281");
		func_72(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xED026A379B794F61(2, 179, 1), func_65());
		if (iLocal_131)
		{
			if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) || unk_0x5B5B4E37C1CCA675(unk_0x9B0761B4C3EB8BC7()) == 2)
				{
					if (unk_0xC1F43F8D0D5EB664(2) || unk_0xDCA0815D900F27F8())
					{
						func_72(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xED026A379B794F61(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_72(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xED026A379B794F61(0, 184, 1), "CELL_SP_2NP_XB");
					}
					if (func_167())
					{
						func_50(3f);
						func_49(4f);
					}
				}
				else if ((Global_76833 == 0 && unk_0x7B70881748D166CD(joaat("pi_menu")) > 0) && func_60())
				{
					func_51();
				}
				else
				{
					if (unk_0xC1F43F8D0D5EB664(2) || unk_0xDCA0815D900F27F8())
					{
						func_72(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xED026A379B794F61(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_72(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xED026A379B794F61(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_72(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xED026A379B794F61(2, 183, 1), "CELL_GRID");
					func_72(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x32F8D6499042A233(0, 1, 1), "CELL_285");
					if (func_167())
					{
						func_50(5f);
						func_49(6f);
						if (func_30(1))
						{
							func_29(7f);
							if (bLocal_62)
							{
								func_72(uLocal_141, "SET_DATA_SLOT", 8f, unk_0xED026A379B794F61(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_62)
						{
							func_72(uLocal_141, "SET_DATA_SLOT", 7f, unk_0xED026A379B794F61(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) || unk_0x5B5B4E37C1CCA675(unk_0x9B0761B4C3EB8BC7()) == 2)
			{
				if (!unk_0x5B5B4E37C1CCA675(unk_0x9B0761B4C3EB8BC7()) == 2)
				{
					func_72(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xED026A379B794F61(2, 183, 1), "CELL_GRID");
					func_72(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x32F8D6499042A233(0, 1, 1), "CELL_285");
					func_72(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xED026A379B794F61(0, 39, 1), "CELL_284");
					if (func_167())
					{
						func_50(6f);
						func_49(7f);
						func_72(uLocal_141, "SET_DATA_SLOT", 8f, unk_0xED026A379B794F61(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_72(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x32F8D6499042A233(0, 1, 1), "CELL_285");
					if (func_167())
					{
						func_50(3f);
						func_49(4f);
						func_72(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xED026A379B794F61(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else if (!unk_0x5B5B4E37C1CCA675(unk_0x9B0761B4C3EB8BC7()) == 2)
			{
				if (!func_154())
				{
					if (unk_0xC1F43F8D0D5EB664(2) || unk_0xDCA0815D900F27F8())
					{
						func_72(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xED026A379B794F61(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_72(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xED026A379B794F61(0, 184, 1), "CELL_SP_1NP_XB");
					}
				}
				func_72(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xED026A379B794F61(2, 183, 1), "CELL_GRID");
				func_72(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x32F8D6499042A233(0, 1, 1), "CELL_285");
				func_72(uLocal_141, "SET_DATA_SLOT", 6f, unk_0xED026A379B794F61(0, 39, 1), "CELL_284");
				if (func_167())
				{
					if (!func_154())
					{
						func_50(7f);
						func_49(8f);
						if (bLocal_63)
						{
							func_72(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xED026A379B794F61(0, 182, 1), "CELL_FOCUS");
						}
						func_72(uLocal_141, "SET_DATA_SLOT", 9f, unk_0xED026A379B794F61(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					if (!func_154())
					{
						if (unk_0xC1F43F8D0D5EB664(2) || unk_0xDCA0815D900F27F8())
						{
							func_72(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xED026A379B794F61(0, 184, 1), "CELL_SP_1NP_XB");
						}
						else
						{
							func_72(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xED026A379B794F61(0, 184, 1), "CELL_SP_1NP_XB");
						}
					}
					func_72(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x32F8D6499042A233(0, 1, 1), "CELL_285");
					if (func_167())
					{
						if (!func_154())
						{
							func_50(4f);
							func_49(5f);
							func_72(uLocal_141, "SET_DATA_SLOT", 6f, unk_0xED026A379B794F61(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		unk_0x830F007E19C63E14(uLocal_141, "SET_MAX_WIDTH");
		unk_0x49B9B8101B158AEE(fLocal_77);
		unk_0xE1FDD153F5858534();
		func_158(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_55()
{
	func_158(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_158(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_72(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xED026A379B794F61(0, 39, 1), "CELL_284");
	func_72(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x32F8D6499042A233(0, 1, 1), "CELL_285");
	func_72(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xED026A379B794F61(2, 179, 1), func_65());
	func_72(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xED026A379B794F61(0, 177, 1), "CELL_281");
	unk_0x830F007E19C63E14(uLocal_141, "SET_MAX_WIDTH");
	unk_0x49B9B8101B158AEE(fLocal_77);
	unk_0xE1FDD153F5858534();
	func_158(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_56()
{
	if (iLocal_131)
	{
		unk_0x7965943E39128B42(fLocal_73, 1065353216);
		unk_0x4C4FC7841A5FB983(fLocal_74);
	}
}

void func_57(int iParam0)
{
	if (iLocal_156 == 1)
	{
		return;
	}
	if (Global_4456448.f_123772 == 1)
	{
	}
	else if (Global_4456448.f_123773 == 1)
	{
	}
	else
	{
		unk_0x59C853151ABA2A62(iParam0);
	}
}

void func_58()
{
	if (iLocal_61 == 1)
	{
		if (unk_0xF005CCA4263DF67F(sLocal_19[Global_4269748], "phone_cam12DUMMY"))
		{
			unk_0xCB6B7239AA9DA52F(0);
			unk_0x69FC1AD2B320BC60(0);
		}
		else
		{
			unk_0xCB6B7239AA9DA52F(1);
			unk_0x69FC1AD2B320BC60(1);
		}
	}
}

void func_59()
{
	func_158(uLocal_140, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_167())
	{
		if (!Global_1673793)
		{
			unk_0x4642314BBB9B3525("phone_cam");
		}
	}
}

int func_60()
{
	if (func_61(14))
	{
		if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if ((unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[0 /*29*/] || unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[1 /*29*/]) || unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[2 /*29*/])
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
	return 1;
}

bool func_61(int iParam0)
{
	return Global_41631 == iParam0;
}

void func_62(char* sParam0)
{
	unk_0xB23270F3D5E62FDE(sParam0);
	unk_0x2042E9CA4306F725();
}

void func_63()
{
	if (unk_0xC1F43F8D0D5EB664(2) || unk_0xDCA0815D900F27F8())
	{
		func_72(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xED026A379B794F61(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_72(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xED026A379B794F61(0, 184, 1), "CELL_SP_2NP_XB");
	}
	if (unk_0xC1F43F8D0D5EB664(2))
	{
		func_72(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xED026A379B794F61(0, 30, 1), "CELL_RT_RSTICK");
		func_72(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x32F8D6499042A233(2, 1, 1), "CELL_RT_LSTICK");
	}
	else
	{
		func_72(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xED026A379B794F61(0, 1, 1), "CELL_RT_RSTICK");
		func_72(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x32F8D6499042A233(2, 0, 1), "CELL_RT_LSTICK");
	}
}

void func_64()
{
	if (unk_0xC1F43F8D0D5EB664(2) || unk_0xDCA0815D900F27F8())
	{
		func_72(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xED026A379B794F61(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_72(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xED026A379B794F61(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_72(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x32F8D6499042A233(0, 1, 1), "CELL_LT_RSTICK");
	if (func_61(14))
	{
		func_72(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xED026A379B794F61(2, 30, 1), "CELL_LT_LSTICK");
	}
	else
	{
		func_72(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xED026A379B794F61(0, 39, 1), "CELL_LT_LSTICKZ");
		func_72(uLocal_141, "SET_DATA_SLOT", 6f, unk_0xED026A379B794F61(2, 30, 1), "CELL_LT_LSTICK");
	}
}

char* func_65()
{
	if (func_71())
	{
		return "FHHUD_SENDLES";
	}
	if (func_66())
	{
		return "CSH_PHONEC";
	}
	return "CELL_287";
}

int func_66()
{
	switch (func_67(unk_0x460153A63B9477BC()))
	{
		case 16:
			return 1;
		
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_67(int iParam0)
{
	if (func_70(iParam0) == 256)
	{
		return func_68(iParam0);
	}
	return -1;
}

int func_68(int iParam0)
{
	if (func_69(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_181;
	}
	return -1;
}

int func_69(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_70(int iParam0)
{
	if (func_69(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_33;
	}
	return -1;
}

int func_71()
{
	switch (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33)
	{
		case 233:
			switch (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_181)
			{
				case 9:
					return 1;
				
				default:
			}
			break;
		
		case 158:
			switch (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_181)
			{
				case 3:
				case 1:
				case 41:
					return 1;
				
				default:
			}
			break;
	}
	if (Global_1703844)
	{
		return 1;
	}
	return 0;
}

void func_72(var uParam0, char* sParam1, float fParam2, var uParam3, char* sParam4)
{
	unk_0x830F007E19C63E14(uParam0, sParam1);
	unk_0xAD291B8F75D737AD(SYSTEM::ROUND(fParam2));
	if (!unk_0x7BCC91F3C1CF24E8(uParam3))
	{
		func_73(uParam3);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam4))
	{
		func_62(sParam4);
	}
	unk_0xE1FDD153F5858534();
}

void func_73(var uParam0)
{
	unk_0x54AED56A452DCB4F(uParam0);
}

void func_74()
{
	if (Global_76833)
	{
		switch (Global_22122)
		{
			case 0:
				if (unk_0xC1F43F8D0D5EB664(2))
				{
					func_153("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_153("CELL_CAM_SELFIE_0", -1);
				}
				Global_22122++;
				break;
			
			case 1:
				if (!unk_0xDABD547F0DF2906C())
				{
					if (unk_0xC1F43F8D0D5EB664(2))
					{
						func_153("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_153("CELL_CAM_SELFIE_1", -1);
					}
					Global_22122++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_22121)
		{
			case 0:
				if (unk_0xC1F43F8D0D5EB664(2))
				{
					func_153("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_153("CELL_CAM_SELFIE_0", -1);
				}
				Global_22121++;
				break;
			
			case 1:
				if (!unk_0xDABD547F0DF2906C())
				{
					if (unk_0xC1F43F8D0D5EB664(2))
					{
						func_153("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_153("CELL_CAM_SELFIE_1", -1);
					}
					Global_22121++;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_75()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (unk_0xC1F43F8D0D5EB664(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (unk_0x22D6FB6153F774D3(2, iVar10) && !unk_0x22D6FB6153F774D3(2, iVar9))
	{
		unk_0x779660A9E5364C4D(0, 2, 1);
		unk_0x779660A9E5364C4D(0, 1, 1);
		iVar0 = SYSTEM::FLOOR(unk_0xAA5DA46D3DBFD541(0, 30)) * 127;
		iVar1 = SYSTEM::FLOOR(unk_0xAA5DA46D3DBFD541(0, 31)) * 127;
		iVar2 = SYSTEM::FLOOR(unk_0xAA5DA46D3DBFD541(0, 1)) * 127;
		iVar3 = SYSTEM::FLOOR(unk_0xAA5DA46D3DBFD541(0, 2)) * 127;
		if (unk_0xC1F43F8D0D5EB664(2))
		{
			if (unk_0x44F29CF6A0675F4F(iVar0) > 28 || unk_0x44F29CF6A0675F4F(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			}
		}
		else if (unk_0x44F29CF6A0675F4F(iVar2) > 28 || unk_0x44F29CF6A0675F4F(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
		}
		if (unk_0xC1F43F8D0D5EB664(2))
		{
			fVar7 = unk_0xAA5DA46D3DBFD541(0, 290);
			fVar8 = unk_0xAA5DA46D3DBFD541(0, 291);
			if (unk_0x4940106A0CAC814B())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (unk_0x44F29CF6A0675F4F(iVar0) > 28 || unk_0x44F29CF6A0675F4F(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_164);
		}
		func_78(fVar5);
		func_77(fVar6);
		func_76(fVar4);
	}
	else if (!unk_0x22D6FB6153F774D3(2, iVar9))
	{
		unk_0x047901495C0572C0(0, 2, 1);
		unk_0x047901495C0572C0(0, 1, 1);
	}
}

void func_76(float fParam0)
{
	fLocal_161 = (fLocal_161 + fParam0);
	if (fLocal_161 > 1f)
	{
		fLocal_161 = 1f;
	}
	else if (fLocal_161 < -1f)
	{
		fLocal_161 = -1f;
	}
	unk_0x8EBC38836D4FB282(fLocal_161);
}

void func_77(float fParam0)
{
	fLocal_162 = (fLocal_162 + fParam0);
	if (fLocal_162 > 1f)
	{
		fLocal_162 = 1f;
	}
	else if (fLocal_162 < -1f)
	{
		fLocal_162 = -1f;
	}
	unk_0x9C94791279937960(fLocal_162);
}

void func_78(float fParam0)
{
	fLocal_163 = (fLocal_163 + fParam0);
	if (fLocal_163 > 1f)
	{
		fLocal_163 = 1f;
	}
	else if (fLocal_163 < -1f)
	{
		fLocal_163 = -1f;
	}
	unk_0x2C25F68FE1625FE6(fLocal_163);
}

void func_79()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	if (unk_0xC1F43F8D0D5EB664(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (unk_0x22D6FB6153F774D3(2, iVar10))
		{
			if (unk_0x1BD7199394D7F19A(2, 178) && !func_154())
			{
				unk_0x458C1C943DBDA048(0.5f);
				unk_0x2B91CAFA8258BC2E(0.85f);
				unk_0x089E3A18DC994824(0.5f);
				unk_0xFC3FA536C926A9A9(-0.25f);
				fLocal_157 = 0.5f;
				fLocal_158 = 0.85f;
				fLocal_159 = 0.5f;
				fLocal_160 = -0.25f;
			}
		}
	}
	else
	{
		iVar10 = 228;
		iVar11 = 229;
	}
	if (unk_0x22D6FB6153F774D3(2, iVar10) && !unk_0x22D6FB6153F774D3(2, iVar11))
	{
		if (unk_0x1BD7199394D7F19A(2, 178) && !func_154())
		{
			unk_0x458C1C943DBDA048(0.5f);
			unk_0x2B91CAFA8258BC2E(0.85f);
			unk_0x089E3A18DC994824(0.5f);
			unk_0xFC3FA536C926A9A9(-0.25f);
			fLocal_157 = 0.5f;
			fLocal_158 = 0.85f;
			fLocal_159 = 0.5f;
			fLocal_160 = -0.25f;
		}
		unk_0x779660A9E5364C4D(0, 2, 1);
		unk_0x779660A9E5364C4D(0, 1, 1);
		iVar0 = SYSTEM::FLOOR(unk_0xAA5DA46D3DBFD541(0, 30)) * 127;
		iVar1 = SYSTEM::FLOOR(unk_0xAA5DA46D3DBFD541(0, 31)) * 127;
		iVar2 = SYSTEM::FLOOR(unk_0xAA5DA46D3DBFD541(0, 1)) * 127;
		iVar3 = SYSTEM::FLOOR(unk_0xAA5DA46D3DBFD541(0, 2)) * 127;
		if (unk_0xC1F43F8D0D5EB664(2))
		{
			iVar1 = SYSTEM::FLOOR(unk_0xAA5DA46D3DBFD541(0, 39)) * 127;
			fVar8 = unk_0xAA5DA46D3DBFD541(0, 290);
			fVar9 = unk_0xAA5DA46D3DBFD541(0, 291);
			if (unk_0x4940106A0CAC814B())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (unk_0x44F29CF6A0675F4F(iVar2) > 15 || unk_0x44F29CF6A0675F4F(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_164);
		}
		if (unk_0x44F29CF6A0675F4F(iVar0) > 28 || unk_0x44F29CF6A0675F4F(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_164);
		}
		func_83(fVar6);
		func_82(fVar7);
		func_81(fVar4);
		if (!func_61(14))
		{
			func_80(fVar5);
		}
	}
	else if (!unk_0xB9C0D9B37277621D(2, iVar11))
	{
		unk_0x047901495C0572C0(0, 2, 1);
		unk_0x047901495C0572C0(0, 1, 1);
	}
	if (!unk_0xB9C0D9B37277621D(2, iVar10) && !unk_0xB9C0D9B37277621D(2, iVar11))
	{
		iVar0 = SYSTEM::FLOOR(unk_0xAA5DA46D3DBFD541(0, 30)) * 127;
		iVar1 = SYSTEM::FLOOR(unk_0xAA5DA46D3DBFD541(0, 31)) * 127;
		iVar2 = SYSTEM::FLOOR(unk_0xAA5DA46D3DBFD541(0, 290)) * 127;
		iVar3 = SYSTEM::FLOOR(unk_0xAA5DA46D3DBFD541(0, 291)) * 127;
		iVar2 = SYSTEM::FLOOR(unk_0xAA5DA46D3DBFD541(0, 294)) * 127;
		iVar2 = SYSTEM::FLOOR(unk_0xAA5DA46D3DBFD541(0, 295)) * 127;
		iVar3 = SYSTEM::FLOOR(unk_0xAA5DA46D3DBFD541(0, 292)) * 127;
		iVar3 = SYSTEM::FLOOR(unk_0xAA5DA46D3DBFD541(0, 293)) * 127;
		if (unk_0x44F29CF6A0675F4F(iVar2) > 28 || unk_0x44F29CF6A0675F4F(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_164);
		}
		if (unk_0x44F29CF6A0675F4F(iVar0) > 28 || unk_0x44F29CF6A0675F4F(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_164);
		}
		if (!func_61(14))
		{
			func_80(fVar5);
		}
	}
}

void func_80(float fParam0)
{
	fLocal_159 = (fLocal_159 + fParam0);
	if (fLocal_159 > 1f)
	{
		fLocal_159 = 1f;
	}
	else if (fLocal_159 < 0f)
	{
		fLocal_159 = 0f;
	}
	unk_0x089E3A18DC994824(fLocal_159);
}

void func_81(float fParam0)
{
	fLocal_160 = (fLocal_160 + fParam0);
	if (fLocal_160 > 1f)
	{
		fLocal_160 = 1f;
	}
	else if (fLocal_160 < -1f)
	{
		fLocal_160 = -1f;
	}
	unk_0xFC3FA536C926A9A9(fLocal_160);
}

void func_82(float fParam0)
{
	fLocal_158 = (fLocal_158 + fParam0);
	if (fLocal_158 > 1.5f)
	{
		fLocal_158 = 1.5f;
	}
	else if (fLocal_158 < 0.5f)
	{
		fLocal_158 = 0.5f;
	}
	unk_0x2B91CAFA8258BC2E(fLocal_158);
}

void func_83(float fParam0)
{
	fLocal_157 = (fLocal_157 + fParam0);
	if (fLocal_157 > 2f)
	{
		fLocal_157 = 2f;
	}
	else if (fLocal_157 < -1.7f)
	{
		fLocal_157 = -1.7f;
	}
	unk_0x458C1C943DBDA048(fLocal_157);
}

void func_84()
{
	if (Global_77093 || Global_77094)
	{
		return;
	}
	if (iLocal_124 == 0)
	{
		if (!iLocal_150)
		{
			if (Global_4456448.f_123772 == 0 && Global_4456448.f_123773 == 0)
			{
				unk_0x37FC7E88C7659D33(uLocal_141, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_127 == 0)
	{
		if (Global_19623)
		{
			if (Global_19864)
			{
				if (iLocal_150 == 0)
				{
					if (Global_19681.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_86(255, 255, 255, 255);
			func_85(0.059f, 0.644f, "CELL_284", 0);
			func_86(255, 255, 255, 255);
			func_85(0.165f, 0.644f, "CELL_285", 0);
			func_86(255, 255, 255, 255);
			func_85(0.275f, 0.75f, "CELL_280", 0);
			func_86(255, 255, 255, 255);
			func_85(0.275f, 0.83f, "CELL_281", 0);
		}
	}
	else if (Global_19623)
	{
	}
	else
	{
		func_86(255, 255, 255, 255);
		func_85(0.275f, 0.75f, func_65(), 0);
		func_86(255, 255, 255, 255);
		func_85(0.275f, 0.79f, "CELL_286", 0);
		func_86(255, 255, 255, 255);
		func_85(0.275f, 0.83f, "CELL_281", 0);
	}
}

void func_85(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x40A75E32D30C605F(sParam2);
	unk_0xA434CC17B5517E4E(fParam0, fParam1, iParam3);
}

void func_86(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x151E2F6EE4A34CFE(0.4f, 0.4f);
	unk_0xACADD4647896AEBE(0, 0, 0, 0, 0);
	unk_0xA5C56390CC2323FE(1, 0, 0, 0, 205);
	unk_0x5F9CF0645392C033(1);
	unk_0xE9FEE5ECCAD48813(0);
	unk_0xA11D279671F2289C(iParam0, iParam1, iParam2, iParam3);
}

void func_87()
{
	unk_0x7965943E39128B42(fLocal_75, 1065353216);
	unk_0x4C4FC7841A5FB983(fLocal_76);
}

void func_88()
{
	unk_0x779660A9E5364C4D(0, 25, 1);
	unk_0x779660A9E5364C4D(0, 44, 1);
	unk_0x779660A9E5364C4D(0, 3, 1);
	unk_0x779660A9E5364C4D(0, 4, 1);
	unk_0x779660A9E5364C4D(0, 5, 1);
	unk_0x779660A9E5364C4D(0, 6, 1);
	unk_0x779660A9E5364C4D(0, 1, 1);
	unk_0x779660A9E5364C4D(0, 2, 1);
	unk_0x779660A9E5364C4D(0, 39, 1);
	unk_0x779660A9E5364C4D(0, 47, 1);
	unk_0x779660A9E5364C4D(0, 56, 1);
}

void func_89()
{
	Local_87 = { Global_19634[Global_19626 /*3*/] };
	if (Global_19623)
	{
		if (func_92())
		{
			unk_0x1F1B1269BB6217F7(&Local_93);
			Local_87 = { Local_93 };
			iLocal_121 = 0;
			iLocal_122 = 0;
			iLocal_123 = 0;
		}
		func_1(1);
		if (iLocal_121)
		{
			Local_81.x = (Local_81.x + 12f);
		}
		if (Local_81.x > Local_87.x || Local_81.x == Local_87.x)
		{
			Local_81.x = Local_87.x;
			iLocal_121 = 0;
		}
		if (iLocal_122)
		{
			Local_81.f_1 = (Local_81.f_1 - 6f);
		}
		if (unk_0xCE990E643CD9D0E5(Global_7553, 4))
		{
			if (Local_81.f_1 < (Local_87.f_1 + 15f) || Local_81.f_1 == (Local_87.f_1 + 15f))
			{
				Local_81.f_1 = (Local_87.f_1 + 15f);
				iLocal_122 = 0;
			}
		}
		else if (Local_81.f_1 < (Local_87.f_1 + 10f) || Local_81.f_1 == (Local_87.f_1 + 10f))
		{
			Local_81.f_1 = (Local_87.f_1 + 10f);
			iLocal_122 = 0;
		}
		if (iLocal_123)
		{
			Local_81.f_2 = (Local_81.f_2 - 10f);
		}
		if (Local_81.f_2 < Local_87.f_2 || Local_81.f_2 == Local_87.f_2)
		{
			Local_81.f_2 = Local_87.f_2;
			iLocal_123 = 0;
		}
		if (func_92() == 0)
		{
			if (unk_0xCE990E643CD9D0E5(Global_7553, 4))
			{
				Local_87.f_1 = (Local_87.f_1 + 15f);
			}
			else
			{
				Local_87.f_1 = (Local_87.f_1 + 10f);
			}
			Local_87.x = (Local_87.x - 14f);
		}
		else
		{
			Local_87 = { Global_19627[Global_19626 /*3*/] };
		}
		Local_81 = { Local_87 };
		iLocal_123 = 0;
		iLocal_122 = 0;
		iLocal_121 = 0;
		unk_0x241AFEE3D5B4FF70(Local_81);
		if ((iLocal_121 == 0 && iLocal_122 == 0) && iLocal_123 == 0)
		{
			iLocal_124 = 0;
			Local_84 = { -90.3f, 0f, 90f };
			unk_0xC6EAF6E2A0CACFED(Local_84, 0);
			if (!unk_0xCE990E643CD9D0E5(Global_7551, 22))
			{
				if (unk_0xCE990E643CD9D0E5(Global_7551, 28))
				{
					StringCopy(&cLocal_145, "CELL_294", 16);
					func_91();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_293", 16);
					func_90();
				}
				iLocal_100 = 2;
			}
		}
	}
}

void func_90()
{
	func_158(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_158(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0xCE990E643CD9D0E5(Global_7552, 28))
	{
		func_72(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xED026A379B794F61(0, 176, 1), "CELL_286");
	}
	else
	{
		func_72(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xED026A379B794F61(2, 178, 1), "CELL_277");
		func_72(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xED026A379B794F61(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0x830F007E19C63E14(uLocal_141, "SET_MAX_WIDTH");
	unk_0x49B9B8101B158AEE(fLocal_77);
	unk_0xE1FDD153F5858534();
	func_158(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_91()
{
	func_158(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_158(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0xCE990E643CD9D0E5(Global_7552, 28))
	{
		func_72(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xED026A379B794F61(2, 179, 1), func_65());
		func_72(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xED026A379B794F61(0, 176, 1), "CELL_286");
	}
	else
	{
		func_72(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xED026A379B794F61(2, 179, 1), func_65());
		func_72(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xED026A379B794F61(2, 178, 1), "CELL_277");
		func_72(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xED026A379B794F61(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0x830F007E19C63E14(uLocal_141, "SET_MAX_WIDTH");
	unk_0x49B9B8101B158AEE(fLocal_77);
	unk_0xE1FDD153F5858534();
	func_158(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_92()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
		{
			if (Global_19624 == 0)
			{
				if (Global_6866 != 128)
				{
					if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
					{
						if (Global_21005 != 2)
						{
						}
					}
				}
			}
		}
		if (func_61(14))
		{
			return 0;
		}
		if (unk_0xB8DB6610D5815003(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			return 0;
		}
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (!unk_0xDA4C30E92D56CC0A())
			{
				if (unk_0xE72C9284B5143451(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x9D7D76BBBFE285E0(unk_0x9B0761B4C3EB8BC7()) || unk_0xE43E3F96A5D750CE(unk_0x9B0761B4C3EB8BC7())) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || (unk_0xEEFD6B1BEB00F02E(unk_0x9B0761B4C3EB8BC7()) && !(unk_0xCE990E643CD9D0E5(Global_4456448.f_37, 17) && (unk_0xFC559366953F62B3() || Global_1655232))))
		{
			return 0;
		}
		if (Global_110906)
		{
			return 0;
		}
	}
	if (Global_76833)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xFA3A11B011BBD7F6();
	iVar1 = unk_0xF7B3A1430308F92B(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xDA4C30E92D56CC0A()))
	{
		iVar2 = 1;
		if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				iVar3 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
				if ((((((((unk_0x97AFEF6099069369(unk_0x36FE6D3220816ADA(iVar3)) || unk_0x72B9CC2155AEDF58(unk_0x36FE6D3220816ADA(iVar3))) || unk_0x0CE6C9C2E6F95026(unk_0x36FE6D3220816ADA(iVar3))) || unk_0x36FE6D3220816ADA(iVar3) == joaat("seashark")) || unk_0x36FE6D3220816ADA(iVar3) == joaat("seashark2")) || unk_0x36FE6D3220816ADA(iVar3) == joaat("rhino")) || unk_0x36FE6D3220816ADA(iVar3) == joaat("submersible")) || unk_0x36FE6D3220816ADA(iVar3) == joaat("submersible2")) || unk_0x36FE6D3220816ADA(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4271302 || iVar2 == 1)
	{
		if (unk_0x7B70881748D166CD(joaat("apptrackify")) > 0 || Global_111858.f_14047.f_89)
		{
			if (unk_0x7B70881748D166CD(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

void func_93()
{
	unk_0x779660A9E5364C4D(0, 47, 1);
	unk_0x26A60F42A1132477(0, Global_19651);
	Local_84 = { Global_19641 };
	Local_87 = { Global_19634[Global_19626 /*3*/] };
	if (func_92())
	{
		unk_0x37EA7872CB2E67FE(&Local_90, 0);
		Local_84 = { Local_90 };
		unk_0x1F1B1269BB6217F7(&Local_93);
		Local_87 = { Local_93 };
		iLocal_118 = 0;
		iLocal_119 = 0;
		iLocal_120 = 0;
		iLocal_121 = 0;
		iLocal_122 = 0;
		iLocal_123 = 0;
	}
	if (Global_19623)
	{
		func_158(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_57(0);
		iLocal_131 = 0;
		if (unk_0xCE990E643CD9D0E5(Global_7551, 30))
		{
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			func_94();
		}
		if (iLocal_121)
		{
			if (unk_0xCE990E643CD9D0E5(Global_7551, 9))
			{
				Local_81.x = (Local_81.x + 2f);
			}
			else
			{
				Local_81.x = (Local_81.x + 12f);
			}
		}
		if (Local_81.x > Local_87.x || Local_81.x == Local_87.x)
		{
			Local_81.x = Local_87.x;
			iLocal_121 = 0;
		}
		if (iLocal_122)
		{
			Local_81.f_1 = (Local_81.f_1 - 6f);
		}
		if (Local_81.f_1 < Local_87.f_1 || Local_81.f_1 == Local_87.f_1)
		{
			Local_81.f_1 = Local_87.f_1;
			iLocal_122 = 0;
		}
		if (iLocal_123)
		{
			Local_81.f_2 = (Local_81.f_2 - 10f);
		}
		if (Local_81.f_2 < Local_87.f_2 || Local_81.f_2 == Local_87.f_2)
		{
			Local_81.f_2 = Local_87.f_2;
			iLocal_123 = 0;
		}
		if (iLocal_123 == 0)
		{
			if (iLocal_118)
			{
				Local_78.x = (Local_78.x + 1f);
			}
			if (Local_78.x > Local_84.x || Local_78.x == Local_84.x)
			{
				Local_78.x = Local_84.x;
				iLocal_118 = 0;
			}
			if (iLocal_119)
			{
				Local_78.f_1 = (Local_78.f_1 - 2f);
			}
			if (Local_78.f_1 < Local_84.f_1 || Local_78.f_1 == Local_84.f_1)
			{
				Local_78.f_1 = Local_84.f_1;
				iLocal_119 = 0;
			}
			if (iLocal_120)
			{
				Local_78.f_2 = (Local_78.f_2 - 14f);
			}
			if (Local_78.f_2 < Local_84.f_2 || Local_78.f_2 == Local_84.f_2)
			{
				Local_78.f_2 = Local_84.f_2;
				iLocal_120 = 0;
			}
		}
		if (iLocal_126)
		{
			Local_78 = { Local_84 };
			Local_81 = { Local_87 };
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			if (func_92() == 0)
			{
				unk_0xC6EAF6E2A0CACFED(Local_78, 0);
				unk_0x241AFEE3D5B4FF70(Local_81);
			}
			func_109(0, 1);
		}
		else if (func_92() == 0)
		{
			unk_0xC6EAF6E2A0CACFED(Local_78, 0);
			unk_0x241AFEE3D5B4FF70(Local_81);
		}
		if ((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0)
		{
			func_94();
		}
	}
	else
	{
		if (iLocal_118)
		{
			Local_78.x = (Local_78.x + 1f);
		}
		if (Local_78.x > Local_84.x || Local_78.x == Local_84.x)
		{
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			Local_78.f_1 = (Local_78.f_1 - 2f);
		}
		if (Local_78.f_1 < Local_84.f_1 || Local_78.f_1 == Local_84.f_1)
		{
			iLocal_119 = 0;
		}
		if (iLocal_120)
		{
			Local_78.f_2 = (Local_78.f_2 - 7f);
		}
		if (Local_78.f_2 < Local_84.f_2 || Local_78.f_2 == Local_84.f_2)
		{
			iLocal_120 = 0;
		}
		if ((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0)
		{
			func_94();
		}
	}
	unk_0xC6EAF6E2A0CACFED(Local_78, 0);
}

void func_94()
{
	func_1(0);
	if (func_92() == 0)
	{
		if (unk_0xCE990E643CD9D0E5(Global_7551, 30))
		{
			unk_0x241AFEE3D5B4FF70(Global_19627[Global_19626 /*3*/]);
		}
		else
		{
			unk_0x241AFEE3D5B4FF70(Global_19634[Global_19626 /*3*/]);
		}
		Local_78 = { Local_84 };
		unk_0xC6EAF6E2A0CACFED(Local_78, 0);
	}
	Global_22038 = 0;
	func_116(0, 0);
	func_120(0);
	iLocal_115 = 0;
	func_111(1);
	Global_19668 = 1;
	Global_22041 = 0;
	if (Global_19681.f_1 > 4)
	{
		Global_19681.f_1 = 6;
		Global_19659 = 1;
		func_95();
	}
	if (unk_0x95EF219D38B20CFF(uLocal_140))
	{
		func_157(uLocal_140, "SHUTDOWN_MOVIE");
	}
	SYSTEM::WAIT(0);
	unk_0x0037AEC7A79CCCB4();
	unk_0x2E352DDBBF674246(&uLocal_141);
	unk_0x2E352DDBBF674246(&uLocal_140);
	if (Global_19866 == 1)
	{
		unk_0xBE20AB8238688965(&Global_7551, 17);
	}
	else
	{
		unk_0xD2459066EA58CE43(&Global_7551, 17);
	}
	unk_0xD2459066EA58CE43(&Global_7551, 18);
	unk_0xD2459066EA58CE43(&Global_7551, 21);
	unk_0x411C0BFEF1468390(0, 1);
	unk_0xD2459066EA58CE43(&Global_7553, 3);
	unk_0xD2459066EA58CE43(&Global_4271024, 3);
	unk_0x73D73FA241EA4AB7(0);
	unk_0xE8775836E165BF34(unk_0x460153A63B9477BC(), 1);
	unk_0x610B4083B1F95914(15);
	Global_22042 = 1;
	unk_0xC5E5600D1CF5CEF9(iLocal_112);
	unk_0xADB6EEE689FE86DE(iLocal_112);
	unk_0xEE377857147BD117();
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		unk_0x68A762F748822351(unk_0x9B0761B4C3EB8BC7(), "Mood_Normal_1", 0);
		unk_0x37ACBA9BE0A0EC05(unk_0x9B0761B4C3EB8BC7());
	}
	func_111(1);
	unk_0xCB6B7239AA9DA52F(0);
	unk_0x69FC1AD2B320BC60(0);
	unk_0x764721E50928FD5D(1f);
	if (Global_4269749 > 0 && Global_4269749 < 13)
	{
		unk_0x2DDA2C702A92866E(sLocal_33[Global_4269749]);
	}
	func_109(0, 1);
	if (func_165(0, 1, iLocal_64, 1))
	{
		iLocal_64 = 0;
	}
	unk_0xD39E529EBE5DB04F();
}

void func_95()
{
	struct<3> Var0;
	
	if (Global_19664 == 1)
	{
		return;
	}
	if (Global_19681.f_1 < 4)
	{
		return;
	}
	while (!unk_0x95EF219D38B20CFF(Global_19662))
	{
		if (Global_76833)
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	switch (Global_19681.f_1)
	{
		case 6:
			func_158(Global_19662, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_103(Global_8156);
			if (Global_8156 == 1)
			{
				func_158(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19685), -1082130432, -1082130432, -1082130432);
				Global_19661 = Global_19685;
			}
			else
			{
				func_158(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19686), -1082130432, -1082130432, -1082130432);
				Global_19661 = Global_19686;
			}
			if (Global_19669)
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_102(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_102(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_19866 == 0)
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xD2459066EA58CE43(&Global_7551, 17);
			}
			else if (Global_76833)
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xD2459066EA58CE43(&Global_7551, 17);
			}
			else
			{
				if (Global_19865 == 1)
				{
					if (Global_19669)
					{
						func_102(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_102(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19669)
				{
					func_102(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_102(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xBE20AB8238688965(&Global_7551, 17);
			}
			if (Global_76833)
			{
				func_100();
				unk_0xD2459066EA58CE43(&Global_7553, 9);
				func_158(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19685), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_158(Global_19662, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_102(Global_19662, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_102(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xD2459066EA58CE43(&Global_7551, 17);
			if (unk_0xCE990E643CD9D0E5(Global_7551, 20))
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19669)
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19624)
				{
					func_102(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_19680 == 1)
			{
				func_99();
				func_158(Global_19662, "SET_THEME", SYSTEM::TO_FLOAT(Global_111858.f_14047[Global_19681 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_21018)
				{
					unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
					unk_0xAD291B8F75D737AD(4);
					unk_0xAD291B8F75D737AD(0);
					unk_0xAD291B8F75D737AD(2);
					unk_0xB23270F3D5E62FDE("CELL_CONDFON");
					unk_0x9EFD301E3BE8324E(&Global_21020);
					unk_0x2042E9CA4306F725();
					func_62("CELL_300");
					func_62("CELL_217");
					func_62("CELL_217");
					unk_0xE1FDD153F5858534();
				}
				else if (func_98(Global_6866, Global_19681) == 0)
				{
					func_102(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_6866 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_102(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_1848[Global_6866 /*29*/].f_3), &(Global_1848[Global_6866 /*29*/].f_7), "CELL_217", &(Global_1848[Global_6866 /*29*/].f_3), 0);
				}
				func_158(Global_19662, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21005 == 4 || Global_21005 == 3)
			{
				func_158(Global_19662, "SET_THEME", SYSTEM::TO_FLOAT(Global_111858.f_14047[Global_19681 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_99();
				if (Global_21018)
				{
					unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
					unk_0xAD291B8F75D737AD(4);
					unk_0xAD291B8F75D737AD(0);
					unk_0xAD291B8F75D737AD(2);
					unk_0xB23270F3D5E62FDE("CELL_CONDFON");
					unk_0x9EFD301E3BE8324E(&Global_21020);
					unk_0x2042E9CA4306F725();
					func_62("CELL_300");
					func_62("CELL_219");
					func_62("CELL_219");
					unk_0xE1FDD153F5858534();
				}
				else
				{
					if (Global_21263)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (func_98(Global_6866, Global_19681) == 0)
					{
						func_158(Global_19662, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_102(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_6866 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_158(Global_19662, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_102(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1848[Global_6866 /*29*/].f_3), &(Global_1848[Global_6866 /*29*/].f_7), &Var0, &(Global_1848[Global_6866 /*29*/].f_3), 0);
					}
				}
				func_158(Global_19662, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_96();
			break;
		
		default:
			break;
	}
}

void func_96()
{
	if (unk_0x95EF219D38B20CFF(Global_19662))
	{
		func_97();
		if (Global_19680 == 1)
		{
			if (Global_19669)
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21052)
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xCE990E643CD9D0E5(Global_7551, 20))
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19669)
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_102(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xD2459066EA58CE43(&Global_7551, 17);
		}
		else
		{
			func_102(Global_19662, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_102(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xD2459066EA58CE43(&Global_7551, 17);
			if (unk_0xCE990E643CD9D0E5(Global_7551, 20))
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19669)
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19624)
				{
					func_102(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_102(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_97()
{
	if (Global_76833)
	{
		func_102(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xD2459066EA58CE43(&Global_7551, 17);
	}
}

int func_98(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1848[iParam0 /*29*/].f_24[iParam1];
}

void func_99()
{
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (Global_19681 == 0)
		{
			switch (Global_111858.f_14047[Global_19681 /*20*/].f_6)
			{
				case 1:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 0);
					break;
				
				case 2:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 1);
					break;
				
				case 3:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 2);
					break;
				
				case 4:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 3);
					break;
				
				case 5:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 4);
					break;
				
				case 6:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 5);
					break;
				
				case 7:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_19681 == 1)
		{
			switch (Global_111858.f_14047[Global_19681 /*20*/].f_6)
			{
				case 1:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 6);
					break;
				
				case 2:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 0);
					break;
				
				case 3:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 1);
					break;
				
				case 4:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 2);
					break;
				
				case 5:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 3);
					break;
				
				case 6:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 4);
					break;
				
				case 7:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_19681 == 2)
		{
			switch (Global_111858.f_14047[Global_19681 /*20*/].f_6)
			{
				case 1:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 5);
					break;
				
				case 2:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 6);
					break;
				
				case 3:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 1);
					break;
				
				case 4:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 0);
					break;
				
				case 5:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 2);
					break;
				
				case 6:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 3);
					break;
				
				case 7:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_19681 == 3)
		{
			switch (Global_4271300)
			{
				case 1:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 0);
					break;
				
				case 2:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 1);
					break;
				
				case 3:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 2);
					break;
				
				case 4:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 3);
					break;
				
				case 5:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 4);
					break;
				
				case 6:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 5);
					break;
				
				case 7:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_100()
{
	if (Global_76833)
	{
		if (func_101() == 0)
		{
			return;
		}
		func_102(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xBE20AB8238688965(&Global_7551, 17);
	}
}

int func_101()
{
	return 0;
}

void func_102(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x830F007E19C63E14(uParam0, sParam1);
	unk_0xAD291B8F75D737AD(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xAD291B8F75D737AD(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xAD291B8F75D737AD(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xAD291B8F75D737AD(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xAD291B8F75D737AD(SYSTEM::ROUND(fParam6));
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam7))
	{
		func_62(sParam7);
	}
	if (!unk_0x7BCC91F3C1CF24E8(iParam8))
	{
		func_62(iParam8);
	}
	if (!unk_0x7BCC91F3C1CF24E8(iParam9))
	{
		func_62(iParam9);
	}
	if (!unk_0x7BCC91F3C1CF24E8(iParam10))
	{
		func_62(iParam10);
	}
	if (!unk_0x7BCC91F3C1CF24E8(iParam11))
	{
		func_62(iParam11);
	}
	unk_0xE1FDD153F5858534();
}

void func_103(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_22073 = 0;
	Global_8156 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8120[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_61(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7558[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7558[iVar1 /*15*/].f_4)
					{
						if (Global_8120[iVar0] == 0)
						{
							Global_8084[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xCE990E643CD9D0E5(Global_7552, 3))
								{
									iVar2 = 42;
									Global_19868 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19868 = 0;
								}
								unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
								unk_0xAD291B8F75D737AD(1);
								unk_0xAD291B8F75D737AD(iVar0);
								unk_0xAD291B8F75D737AD(Global_7558[iVar1 /*15*/].f_10);
								unk_0xAD291B8F75D737AD(0);
								func_62(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(iVar2);
								unk_0xE1FDD153F5858534();
							}
							if (Global_2462245)
							{
								if (iVar1 == 14)
								{
									func_102(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8120[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7558[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7558[iVar1 /*15*/].f_4)
					{
						if (Global_8120[iVar0] == 0)
						{
							Global_8084[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111858.f_14137[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_111858.f_14137[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_111858.f_14137[iVar3 /*104*/].f_99[Global_19681] == 1)
											{
												Global_22073++;
											}
										}
									}
									iVar3++;
								}
								func_102(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22073), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76833)
								{
									iVar4 = 0;
									iVar4 = Global_4269758;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4269759[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4269759[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4269759[iVar5 /*104*/].f_99[Global_19681] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_102(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19681)
									{
										case 0:
											iVar6 = Global_42812;
											break;
										
										case 1:
											iVar6 = Global_42813;
											break;
										
										case 2:
											iVar6 = Global_42814;
											break;
										
										default:
											break;
									}
									func_102(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_102(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
								unk_0xAD291B8F75D737AD(1);
								unk_0xAD291B8F75D737AD(iVar0);
								unk_0xAD291B8F75D737AD(Global_7558[iVar1 /*15*/].f_10);
								unk_0xAD291B8F75D737AD(0);
								func_62(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(Global_7557);
								unk_0xE1FDD153F5858534();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xCE990E643CD9D0E5(Global_7552, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
								unk_0xAD291B8F75D737AD(1);
								unk_0xAD291B8F75D737AD(iVar0);
								unk_0xAD291B8F75D737AD(Global_7558[iVar1 /*15*/].f_10);
								unk_0xAD291B8F75D737AD(0);
								func_62(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(iVar7);
								unk_0xE1FDD153F5858534();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xCE990E643CD9D0E5(Global_7552, 3))
								{
									iVar8 = 42;
									Global_19868 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19868 = 0;
								}
								unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
								unk_0xAD291B8F75D737AD(1);
								unk_0xAD291B8F75D737AD(iVar0);
								unk_0xAD291B8F75D737AD(Global_7558[iVar1 /*15*/].f_10);
								unk_0xAD291B8F75D737AD(0);
								func_62(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(iVar8);
								unk_0xE1FDD153F5858534();
							}
							else if (iVar1 == 8)
							{
								unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
								unk_0xAD291B8F75D737AD(1);
								unk_0xAD291B8F75D737AD(iVar0);
								unk_0xAD291B8F75D737AD(Global_7558[iVar1 /*15*/].f_10);
								unk_0xAD291B8F75D737AD(0);
								func_62(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(42);
								unk_0xE1FDD153F5858534();
							}
							else if ((iVar1 == 23 && unk_0xF005CCA4263DF67F(&(Global_7558[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xCE990E643CD9D0E5(Global_7552, 6))
							{
								unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
								unk_0xAD291B8F75D737AD(1);
								unk_0xAD291B8F75D737AD(iVar0);
								unk_0xAD291B8F75D737AD(Global_7558[iVar1 /*15*/].f_10);
								unk_0xAD291B8F75D737AD(0);
								func_62(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(42);
								unk_0xE1FDD153F5858534();
							}
							else if (Global_7558[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627252.f_1;
								func_102(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_102(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8120[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_104()
{
	switch (iLocal_100)
	{
		case 1:
			unk_0x411C0BFEF1468390(0, 1);
			if (unk_0xCE990E643CD9D0E5(Global_7551, 28))
			{
				StringCopy(&cLocal_145, "CELL_296", 16);
				func_54();
			}
			else
			{
				StringCopy(&cLocal_145, "CELL_295", 16);
				func_28();
			}
			break;
		
		case 2:
			if (!unk_0xCE990E643CD9D0E5(Global_7551, 22))
			{
				unk_0x411C0BFEF1468390(0, 1);
				if (unk_0xCE990E643CD9D0E5(Global_7551, 28))
				{
					StringCopy(&cLocal_145, "CELL_294", 16);
					func_91();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_293", 16);
					func_90();
				}
				iLocal_100 = 2;
			}
			break;
		
		default:
			break;
	}
}

void func_105(bool bParam0)
{
	if (bParam0)
	{
		if (!func_118())
		{
			unk_0xBE20AB8238688965(&Global_1689730, 17);
		}
	}
	else if (func_118())
	{
		unk_0xD2459066EA58CE43(&Global_1689730, 17);
	}
}

int func_106(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x1BD7199394D7F19A(iParam0, uParam1) || (iParam2 == 1 && unk_0x79800E51B3B6D197(iParam0, iParam1)))
	{
		if (unk_0xF8EDFF98A9C94C74())
		{
			if (unk_0x913D69ADE739309E() == 0 || (unk_0xDFAB5E5CBE16E8B1() && unk_0xC1F43F8D0D5EB664(2)))
			{
				return 0;
			}
		}
		if (unk_0xF0C12886E5C1B20E() || unk_0x06EBE4F22EC30D45())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_107(bool bParam0)
{
	if (bParam0)
	{
		if (!func_108())
		{
			unk_0xBE20AB8238688965(&Global_1689730, 18);
		}
	}
	else if (func_108())
	{
		unk_0xD2459066EA58CE43(&Global_1689730, 18);
	}
}

bool func_108()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 18);
}

void func_109(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_110(0))
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

int func_110(int iParam0)
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

void func_111(int iParam0)
{
	if ((Global_4456448.f_123772 == 0 && Global_4456448.f_123773 == 0) && !Global_1673793)
	{
		if (func_112(unk_0x460153A63B9477BC()) && iParam0)
		{
			Global_1703977 = 1;
		}
		else
		{
			unk_0x8F2EB8BCB5CCE8D8();
		}
	}
}

int func_112(int iParam0)
{
	if (iParam0 != func_115())
	{
		if (func_114(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_113(Global_2425869[iParam0 /*443*/].f_314.f_6) == 17;
			}
		}
	}
	return 0;
}

int func_113(int iParam0)
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
		case joaat("MPSV_LP0_31"):
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
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
	}
	return -1;
}

int func_114(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x166E920FB00B2DBB(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x5A228A6A51E757C8(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2440049.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_115()
{
	return -1;
}

void func_116(int iParam0, int iParam1)
{
	if (Global_4456448.f_123772 == 1)
	{
	}
	else if (Global_4456448.f_123773 == 1)
	{
	}
	else
	{
		unk_0xE616BD4C9E3D197E(iParam0, iParam1);
	}
}

int func_117()
{
	if (unk_0xCE990E643CD9D0E5(Global_7551, 15))
	{
		return 1;
	}
	return 0;
}

bool func_118()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 17);
}

void func_119()
{
	if (Global_19623)
	{
		Local_84 = { -90.3f, 0f, 90f };
		Local_87 = { 1.5f, 0f, -17f };
		if (func_92())
		{
			unk_0x37EA7872CB2E67FE(&Local_90, 0);
			Local_84 = { Local_90 };
			unk_0x1F1B1269BB6217F7(&Local_93);
			Local_87 = { Local_93 };
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			iLocal_121 = 0;
			iLocal_122 = 0;
			iLocal_123 = 0;
		}
		if (iLocal_120 == 0)
		{
			if (iLocal_121)
			{
				Local_81.x = (Local_81.x - 14f);
			}
			if (Local_81.x < Local_87.x || Local_81.x == Local_87.x)
			{
				iLocal_121 = 0;
			}
			if (iLocal_122)
			{
				Local_81.f_1 = (Local_81.f_1 + 7f);
			}
			if (Local_81.f_1 > Local_87.f_1 || Local_81.f_1 == Local_87.f_1)
			{
				iLocal_122 = 0;
			}
			if (iLocal_123)
			{
				Local_81.f_2 = (Local_81.f_2 + 12f);
			}
			if (Local_81.f_2 > Local_87.f_2 || Local_81.f_2 == Local_87.f_2)
			{
				iLocal_123 = 0;
			}
		}
		if (iLocal_118)
		{
			Local_78.x = (Local_78.x - 1f);
		}
		if (Local_78.x < Local_84.x || Local_78.x == Local_84.x)
		{
			Local_78.x = Local_84.x;
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			Local_78.f_1 = (Local_78.f_1 - 0.5f);
		}
		if (Local_78.f_1 < Local_84.f_1 || Local_78.f_1 == Local_84.f_1)
		{
			Local_78.f_1 = Local_84.f_1;
			iLocal_119 = 0;
		}
		if (iLocal_120)
		{
			Local_78.f_2 = (Local_78.f_2 + 11f);
		}
		if (Local_78.f_2 > Local_84.f_2 || Local_78.f_2 == Local_84.f_2)
		{
			Local_78.f_2 = Local_84.f_2;
			iLocal_120 = 0;
		}
		if (func_92() == 0)
		{
			unk_0xC6EAF6E2A0CACFED(Local_78, 0);
			unk_0x241AFEE3D5B4FF70(Local_81);
		}
	}
	else
	{
		Local_84 = { -93.9f, 4.9f, 90.7f };
		if (iLocal_118)
		{
			Local_78.x = (Local_78.x - 1f);
		}
		if (Local_78.x < Local_84.x || Local_78.x == Local_84.x)
		{
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			Local_78.f_1 = (Local_78.f_1 + 2f);
		}
		if (Local_78.f_1 > Local_84.f_1 || Local_78.f_1 == Local_84.f_1)
		{
			iLocal_119 = 0;
		}
		if (iLocal_120)
		{
			Local_78.f_2 = (Local_78.f_2 + 7f);
		}
		if (Local_78.f_2 > Local_84.f_2 || Local_78.f_2 == Local_84.f_2)
		{
			iLocal_120 = 0;
		}
		unk_0xC6EAF6E2A0CACFED(Local_78, 0);
	}
	if (Global_19623)
	{
		if (((((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0) && iLocal_121 == 0) && iLocal_122 == 0) && iLocal_123 == 0)
		{
			if (func_92())
			{
			}
			else
			{
				Local_78 = { Local_84 };
				unk_0xC6EAF6E2A0CACFED(Local_78, 0);
				Local_81 = { Local_87 };
				unk_0x241AFEE3D5B4FF70(Local_81);
			}
			if (iLocal_103 == 0)
			{
				Global_22039 = 0;
				func_116(1, 1);
				iLocal_115 = 1;
				func_120(1);
				func_59();
				func_121();
				func_57(0);
				SYSTEM::SETTIMERA(0);
				iLocal_142 = 1;
				iLocal_143 = 1;
				func_134();
				func_158(uLocal_140, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_144), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
				{
					func_158(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_158(uLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
				func_160();
			}
		}
	}
	else if ((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0)
	{
		Local_78 = { Local_84 };
		unk_0xC6EAF6E2A0CACFED(Local_78, 0);
		Global_22039 = 0;
	}
}

void func_120(bool bParam0)
{
	if (func_167())
	{
		if (bParam0)
		{
			if (!unk_0x93E72561EAE8CA3A())
			{
				unk_0x7A675DAD6CAB5B1E(1);
				if (Global_4269749 > 0 && Global_4269749 < 99)
				{
					unk_0x8B4A50A1E24CAAEC(sLocal_33[Global_4269749], 0);
					unk_0x764721E50928FD5D(0.25f);
				}
			}
		}
		else if (unk_0x93E72561EAE8CA3A())
		{
			unk_0x7A675DAD6CAB5B1E(0);
		}
	}
}

void func_121()
{
	if (Global_4269748 > 0 && Global_4269748 < 99)
	{
		if (!Global_1673793)
		{
			unk_0x4642314BBB9B3525(sLocal_19[Global_4269748]);
		}
	}
}

void func_122()
{
	if (Global_19623)
	{
		iLocal_125 = 0;
		func_59();
		func_109(1, 1);
		func_116(1, 1);
		iLocal_115 = 1;
		Global_22042 = 1;
	}
}

void func_123()
{
	if (Global_4456448.f_123772 == 1 && func_124())
	{
		return;
	}
	if (iLocal_127 == 0)
	{
		if (unk_0xCE990E643CD9D0E5(Global_7551, 28))
		{
			StringCopy(&cLocal_145, "CELL_296", 16);
			func_54();
		}
		else
		{
			StringCopy(&cLocal_145, "CELL_295", 16);
			func_28();
		}
		if (unk_0xF005CCA4263DF67F(&cLocal_145, "DUMMYCOMPARISON"))
		{
			fLocal_98 = fLocal_99;
			fLocal_96 = fLocal_97;
			fLocal_99 = fLocal_98;
			fLocal_97 = fLocal_96;
		}
		iLocal_100 = 1;
	}
}

int func_124()
{
	if ((((func_129() || func_128()) || func_127()) || func_126()) || func_125())
	{
		return 1;
	}
	if (unk_0xFC559366953F62B3() && unk_0xCE990E643CD9D0E5(Global_4456448.f_36, 1))
	{
		return 1;
	}
	return 0;
}

var func_125()
{
	return Global_2451787.f_23;
}

var func_126()
{
	return Global_2451787.f_20;
}

var func_127()
{
	return Global_2451787.f_18;
}

var func_128()
{
	return Global_2451787.f_17;
}

var func_129()
{
	return Global_2451787.f_16;
}

void func_130()
{
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		unk_0xC4CC25B68A91D144(-1, "Menu_Back", &Global_19670, 1);
	}
}

void func_131()
{
	unk_0x42D13FF9E8D73B13(0, 0);
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 0;
	iLocal_125 = 1;
}

void func_132()
{
	func_133();
}

void func_133()
{
	if (iLocal_151)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_151 = 0;
		}
	}
	if (iLocal_151 == 0)
	{
	}
}

void func_134()
{
	if (Global_19681.f_1 > 3)
	{
		if (!unk_0xF0C12886E5C1B20E())
		{
			unk_0xE6A03BA84586E67B(uLocal_140, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_135()
{
	if (func_61(14))
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
		Global_19681 = func_11();
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

void func_136(int iParam0)
{
	if (func_138())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_154())
		{
			func_109(1, 1);
		}
		else
		{
			func_109(0, 0);
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
	if (!func_137())
	{
		Global_19681.f_1 = 3;
	}
}

int func_137()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_138()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 19);
}

void func_139()
{
	unk_0x779660A9E5364C4D(0, 0, 1);
	unk_0x779660A9E5364C4D(0, 56, 1);
	if (iLocal_150 == 0)
	{
		unk_0x26A60F42A1132477(0, Global_19654);
		unk_0x26A60F42A1132477(0, Global_19651);
		unk_0x779660A9E5364C4D(0, 278, 1);
		unk_0x779660A9E5364C4D(0, 279, 1);
		unk_0x779660A9E5364C4D(0, 280, 1);
		unk_0x779660A9E5364C4D(0, 281, 1);
		unk_0x779660A9E5364C4D(0, 282, 1);
		unk_0x779660A9E5364C4D(0, 282, 1);
		unk_0x779660A9E5364C4D(0, 284, 1);
		unk_0x779660A9E5364C4D(0, 285, 1);
		unk_0x779660A9E5364C4D(0, 69, 1);
		unk_0x779660A9E5364C4D(0, 70, 1);
		unk_0x779660A9E5364C4D(0, 114, 1);
		unk_0x779660A9E5364C4D(0, 71, 1);
		unk_0x779660A9E5364C4D(0, 72, 1);
		unk_0x779660A9E5364C4D(0, 74, 1);
		unk_0x779660A9E5364C4D(0, 75, 1);
		unk_0x779660A9E5364C4D(0, 76, 1);
		unk_0x779660A9E5364C4D(0, 73, 1);
		unk_0x779660A9E5364C4D(0, 77, 1);
		unk_0x779660A9E5364C4D(0, 78, 1);
		unk_0x779660A9E5364C4D(0, 286, 1);
		unk_0x779660A9E5364C4D(0, 287, 1);
		unk_0x779660A9E5364C4D(0, 79, 1);
		unk_0x779660A9E5364C4D(0, 80, 1);
		unk_0x779660A9E5364C4D(0, 81, 1);
		unk_0x779660A9E5364C4D(0, 82, 1);
		unk_0x779660A9E5364C4D(0, 86, 1);
		unk_0x779660A9E5364C4D(0, 59, 1);
		unk_0x779660A9E5364C4D(0, 60, 1);
		unk_0x779660A9E5364C4D(0, 61, 1);
		unk_0x779660A9E5364C4D(0, 62, 1);
		unk_0x779660A9E5364C4D(0, 63, 1);
		unk_0x779660A9E5364C4D(0, 64, 1);
		unk_0x779660A9E5364C4D(0, 87, 1);
		unk_0x779660A9E5364C4D(0, 88, 1);
		unk_0x779660A9E5364C4D(0, 89, 1);
		unk_0x779660A9E5364C4D(0, 90, 1);
		unk_0x779660A9E5364C4D(0, 107, 1);
		unk_0x779660A9E5364C4D(0, 108, 1);
		unk_0x779660A9E5364C4D(0, 109, 1);
		unk_0x779660A9E5364C4D(0, 110, 1);
		unk_0x779660A9E5364C4D(0, 111, 1);
		unk_0x779660A9E5364C4D(0, 112, 1);
		unk_0x779660A9E5364C4D(0, 113, 1);
		unk_0x779660A9E5364C4D(0, 114, 1);
		unk_0x779660A9E5364C4D(0, 91, 1);
		unk_0x779660A9E5364C4D(0, 92, 1);
		unk_0x779660A9E5364C4D(0, 68, 1);
		unk_0x779660A9E5364C4D(0, 102, 1);
		unk_0x779660A9E5364C4D(0, 136, 1);
		unk_0x779660A9E5364C4D(0, 137, 1);
		unk_0x779660A9E5364C4D(0, 138, 1);
		unk_0x779660A9E5364C4D(0, 139, 1);
		unk_0x779660A9E5364C4D(0, 102, 1);
	}
}

int func_140()
{
	var uVar0;
	
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			uVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
			if (unk_0xB064AF9925F5537B(uVar0, -1, 0))
			{
				return 1;
			}
			else if (!unk_0x10D3F7E169A49C44(uVar0, -1, 0) == unk_0x9B0761B4C3EB8BC7())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_141()
{
	var uVar0;
	
	func_149(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			return 1;
		}
	}
	if (func_148())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_147())
	{
		return 1;
	}
	if (func_146(159))
	{
		if (!func_145())
		{
			return 1;
		}
	}
	if (func_146(157))
	{
		return 1;
	}
	if (!unk_0x0EB6C63A09FD9DF1())
	{
		return 1;
	}
	if (func_142() != 0)
	{
		if (unk_0x7B70881748D166CD(func_142()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_142()
{
	switch (func_144())
	{
		case 0:
			return func_143();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_143()
{
	switch (Global_2464595)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_144()
{
	return Global_30968;
}

bool func_145()
{
	return Global_2451787.f_696;
}

int func_146(int iParam0)
{
	if (unk_0x16F1FCCC54559709(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_147()
{
	return Global_2462250;
}

bool func_148()
{
	return Global_2451787.f_691;
}

void func_149(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2AC1C68C7CCA90E5(1))
	{
		iVar1 = unk_0x39BE1B4CEB4DAEC8(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x477FAFFE21935947(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1035596089:
					func_150(iVar0);
					break;
				
				case 1120313136:
					unk_0x477FAFFE21935947(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 397890833)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_150(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		if (func_114(Var0.f_1, 1, 1))
		{
			iVar3 = unk_0x1FA7B77001D60F9D(Var0.f_1);
			if (unk_0xAE06B9E39EBDE049(iVar3))
			{
				if (unk_0x47DBF174A0CB9D55(iVar3, 0))
				{
					iVar4 = unk_0xA5D5B1042E8F47BD(iVar3, 0);
					if (unk_0x292280AF1BBBD6AC(iVar4, Var0.f_2) && unk_0x82CC259B7B4F4AD9())
					{
						if (func_151(iVar4, &bVar5))
						{
							unk_0xADCDA8AF77C0D19D(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xE730EAF558C97567(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_151(int iParam0, var uParam1)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (!unk_0x1758275D343D5BA3(iParam0))
		{
			if (unk_0x38CC98C4A0688263(iParam0))
			{
				if (!unk_0xCA6AF782C906AC86(unk_0x36FE6D3220816ADA(iParam0)))
				{
					unk_0x4F3C4F457D44BB0F(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x1D2A3118784C0272(iParam0, 0))
		{
			if (unk_0xAA5B806352173DEA(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_152()
{
	if (iLocal_156 == 1)
	{
		unk_0x4CB4237D8858ADA6(7);
		unk_0x4CB4237D8858ADA6(1);
		unk_0x4CB4237D8858ADA6(3);
		unk_0x4CB4237D8858ADA6(4);
		unk_0x4CB4237D8858ADA6(6);
		unk_0x4CB4237D8858ADA6(8);
		unk_0x4CB4237D8858ADA6(9);
		unk_0x4CB4237D8858ADA6(2);
	}
	else
	{
		unk_0xA86915034F55A3BF();
	}
}

void func_153(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 0, 1, iParam1);
}

bool func_154()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

void func_155()
{
	if (func_156())
	{
		unk_0x15D261B581BF46C1();
		if (unk_0xF53706D3FE9A61CE(0))
		{
			iLocal_103 = 1;
			iLocal_111 = 0;
		}
		else
		{
			Global_22042 = 1;
			Global_19681.f_1 = 3;
			unk_0xEE377857147BD117();
		}
	}
	else
	{
		iLocal_109 = 0;
		iLocal_110 = 0;
		if (iLocal_104 == 1)
		{
			if (iLocal_127 == 0)
			{
				if (unk_0x95EF219D38B20CFF(uLocal_140))
				{
					if (func_167())
					{
						if (Global_4269749 == 0)
						{
							if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
							{
								func_158(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_158(uLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!unk_0xCE990E643CD9D0E5(Global_4271024, 2))
						{
							func_158(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_158(uLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (unk_0x95EF219D38B20CFF(uLocal_140))
			{
				func_158(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_158(uLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
			}
			iLocal_104 = 0;
		}
		iLocal_111 = 0;
		unk_0xEE377857147BD117();
	}
}

int func_156()
{
	if (Global_4456448.f_123772 == 1)
	{
		if (Global_76833)
		{
			return 0;
		}
	}
	if (Global_4456448.f_123773 == 1)
	{
		if (Global_76833)
		{
			return 0;
		}
	}
	if (unk_0x11E5DE894D6A8A5F() || unk_0x59ED414969A48197())
	{
		if (unk_0xCE990E643CD9D0E5(Global_7552, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_157(var uParam0, char* sParam1)
{
	unk_0x830F007E19C63E14(uParam0, sParam1);
	unk_0xE1FDD153F5858534();
}

void func_158(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x830F007E19C63E14(uParam0, sParam1);
	unk_0xAD291B8F75D737AD(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xAD291B8F75D737AD(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xAD291B8F75D737AD(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xAD291B8F75D737AD(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xAD291B8F75D737AD(SYSTEM::ROUND(fParam6));
	}
	unk_0xE1FDD153F5858534();
}

int func_159()
{
	if (Global_76833)
	{
		Global_19681 = 3;
	}
	else
	{
		Global_19681 = func_11();
	}
	if (Global_19681 > 3)
	{
		Global_19681 = 3;
	}
	return Global_111858.f_14047[Global_19681 /*20*/].f_7;
}

void func_160()
{
	if (Global_19681.f_1 > 3)
	{
		Global_19681.f_1 = 8;
	}
	Global_22041 = 0;
	iLocal_127 = 0;
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		Local_67 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1) };
	}
	if (Global_19623)
	{
		while (SYSTEM::TIMERA() < iLocal_137)
		{
			SYSTEM::WAIT(0);
			func_134();
			func_88();
			unk_0x0037AEC7A79CCCB4();
		}
		func_157(uLocal_140, "OPEN_SHUTTER");
		func_152();
		func_123();
		iLocal_129 = 1;
		SYSTEM::SETTIMERB(0);
	}
	else
	{
		func_116(1, 1);
		func_120(1);
		func_59();
		func_121();
		func_57(0);
		iLocal_115 = 1;
	}
}

void func_161(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xBE20AB8238688965(&Global_7551, 15);
	}
	else
	{
		unk_0xD2459066EA58CE43(&Global_7551, 15);
	}
}

bool func_162()
{
	return Global_1312872;
}

int func_163(int iParam0, int iParam1)
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
				iVar1 = unk_0x112A81273D7187A5(unk_0x36FE6D3220816ADA(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xB064AF9925F5537B(iVar0, iVar3, 0))
					{
						if (unk_0x10D3F7E169A49C44(iVar0, iVar3, 0) == iParam0)
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

void func_164()
{
}

int func_165(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xF8EDFF98A9C94C74())
	{
		if (unk_0x93914DE00496FC78() != iParam0 && bParam2)
		{
			unk_0x6D883C27212BF370(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_166()
{
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (unk_0x48238AD298F1A5F0(unk_0x9B0761B4C3EB8BC7()))
		{
			unk_0x912105796D275F9C(unk_0x9B0761B4C3EB8BC7(), 0, 0);
			unk_0x458C1C943DBDA048(fLocal_157);
			unk_0x2B91CAFA8258BC2E(fLocal_158);
			unk_0x089E3A18DC994824(fLocal_159);
		}
		else
		{
			unk_0x458C1C943DBDA048(fLocal_157);
			unk_0x2B91CAFA8258BC2E(fLocal_158);
			unk_0x089E3A18DC994824(fLocal_159);
		}
	}
	unk_0xFC3FA536C926A9A9(fLocal_160);
	unk_0x8EBC38836D4FB282(fLocal_161);
	unk_0x9C94791279937960(fLocal_162);
	unk_0x2C25F68FE1625FE6(fLocal_163);
	func_56();
}

int func_167()
{
	if (iLocal_56 == 0)
	{
		iLocal_56 = 1;
	}
	return 1;
}

