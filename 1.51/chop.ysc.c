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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0,0375f;
	fLocal_29 = 0,17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	iLocal_43 = 1;
	iLocal_44 = 65;
	iLocal_45 = 49;
	iLocal_46 = 64;
	iLocal_54 = -1;
	sLocal_86 = "null";
	iLocal_87 = -1;
	iLocal_88 = -1;
	iLocal_118 = 1;
	fLocal_392 = 200f;
	iLocal_413 = unk_0x1C0640BA9A7327B3();
	iLocal_414 = 10000;
	iLocal_466 = -1;
	iLocal_475 = 1486715695;
	sLocal_476 = "std_ds_open_door_for_chop";
	sLocal_477 = "creatures@rottweiler@in_vehicle@std_car";
	iLocal_485 = unk_0x1C0640BA9A7327B3();
	iLocal_488 = unk_0x1C0640BA9A7327B3();
	iLocal_490 = unk_0xD68EA767274B7444();
	if (unk_0x2EBF608FFE6CA406(3))
	{
		func_180();
	}
	while (!unk_0x0F1CCD77290EE12F())
	{
		wait(0);
	}
	iLocal_492 = unk_0x8C74DE122769E1BF();
	vLocal_415 = { ScriptParam_0.f_1[0] };
	if (unk_0x8A22C4C08282BF26(unk_0x7CF4675EC2B8ED0B()) > 1)
	{
		func_180();
	}
	if (!func_179(63))
	{
		func_180();
	}
	if (!func_178(5) && !func_178(6))
	{
		func_180();
	}
	if (func_178(6) && func_177(vLocal_415, 1, 0) == 5)
	{
		func_180();
	}
	if (!func_170(1))
	{
		func_180();
	}
	if (Global_30915 == 1)
	{
		func_180();
	}
	if (Global_95664 == 1)
	{
		func_180();
	}
	if (func_167(0))
	{
		if (unk_0x8A22C4C08282BF26(-113867946) == 0 && unk_0x8A22C4C08282BF26(226983637) == 0)
		{
			func_180();
		}
	}
	if ((((func_166() == 206 || func_166() == 207) || func_166() == 204) || func_166() == 205) || func_166() == 203)
	{
		iLocal_393 = 1;
	}
	else if (func_166() == 47)
	{
		iLocal_394 = 1;
	}
	else
	{
		if ((unk_0x0EB28750412C3A5A(vLocal_415, 154,0731f, 765,5721f, 209,6901f, 1) <= 50f || unk_0x0EB28750412C3A5A(vLocal_415, -268,139f, 415,2881f, 109,7258f, 1) <= 50f) || unk_0x0EB28750412C3A5A(vLocal_415, 314,4171f, 965,207f, 208,4024f, 1) <= 50f)
		{
			func_180();
		}
		iLocal_393 = 0;
		iLocal_394 = 0;
		if (Global_76620 == 1)
		{
			func_180();
		}
	}
	while (true)
	{
		if (!func_163())
		{
			switch (iLocal_50)
			{
				case 0:
					func_154();
					break;
				
				case 1:
					func_1();
					break;
			}
		}
		else
		{
			func_180();
		}
		wait(0);
	}
}

void func_1()
{
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return;
	}
	if (unk_0xEB6A8945D1AC98A1(iLocal_69))
	{
		return;
	}
	func_152();
	func_151();
	if (iLocal_51 != 11)
	{
		func_150();
		func_149();
		func_129();
		func_128();
		func_126();
	}
	func_2();
}

void func_2()
{
	switch (iLocal_51)
	{
		case 11:
			if (iLocal_52 == 0)
			{
				unk_0x3F423BF5B8125A50("creatures@rottweiler@amb@sleep_in_kennel@");
				if (unk_0xB4AE0788C1587752("creatures@rottweiler@amb@sleep_in_kennel@"))
				{
					if (func_125(iLocal_69))
					{
						unk_0xC6EB89C59F2AF6B8(iLocal_69, "creatures@rottweiler@amb@sleep_in_kennel@", "sleep_in_kennel", 1000f, -8f, -1, 1, 0, 0, 0, 0);
						func_124(iLocal_69, vLocal_397.f_5, vLocal_397.f_8, 0, 1);
					}
					iLocal_406 = unk_0x1C0640BA9A7327B3();
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (func_123())
				{
					unk_0x3F423BF5B8125A50("creatures@rottweiler@amb@sleep_in_kennel@");
					if (unk_0xB4AE0788C1587752("creatures@rottweiler@amb@sleep_in_kennel@") && func_125(iLocal_69))
					{
						unk_0xC6EB89C59F2AF6B8(iLocal_69, "creatures@rottweiler@amb@sleep_in_kennel@", "exit_kennel", 8f, -8f, -1, 0, 0, 0, 0, 0);
						func_122("WHINE");
						iLocal_52++;
					}
				}
			}
			else if (iLocal_52 == 2)
			{
				if (unk_0xD1960163A3042274(iLocal_69, -2017877118) == 7)
				{
					unk_0x8D17794CE3273D70("creatures@rottweiler@amb@sleep_in_kennel@");
					func_122("PLAYFUL");
					func_121(1, 1);
				}
			}
			break;
		
		case 1:
			if (iLocal_408 == 0 && func_118(unk_0x16F2683693E537C9(), 1))
			{
				func_121(18, 1);
			}
			else
			{
				func_117();
				func_116();
				func_115();
			}
			break;
		
		case 17:
			func_117();
			func_116();
			if (iLocal_52 == 0)
			{
				unk_0x3F423BF5B8125A50(sLocal_82[0]);
				unk_0x3F423BF5B8125A50(sLocal_82[1]);
				unk_0x3F423BF5B8125A50(sLocal_82[2]);
				if ((unk_0xB4AE0788C1587752(sLocal_82[0]) && unk_0xB4AE0788C1587752(sLocal_82[1])) && unk_0xB4AE0788C1587752(sLocal_82[2]))
				{
					unk_0xC6EB89C59F2AF6B8(iLocal_69, sLocal_82[0], "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if ((!func_113(iLocal_69, -2017877118) || (unk_0xB4ECF989E2C1DAC8(iLocal_69, sLocal_82[0], "enter", 3) && unk_0x8CA9406E01C7EE58(iLocal_69, sLocal_82[0], "enter") > 0,98f)) || (unk_0xB4ECF989E2C1DAC8(iLocal_69, sLocal_82[1], sLocal_86, 3) && unk_0x8CA9406E01C7EE58(iLocal_69, sLocal_82[1], sLocal_86) > 0,98f))
				{
					if (iLocal_53 == 0)
					{
						if (iLocal_81 == 1)
						{
							unk_0xC6EB89C59F2AF6B8(iLocal_69, sLocal_82[1], "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
							sLocal_86 = "base";
							iLocal_52++;
						}
						else
						{
							func_112();
							if (unk_0x09AC81E49EA267F7(0, 4) == 0)
							{
								iLocal_52++;
							}
						}
					}
					else
					{
						if (iLocal_53 != 5)
						{
							func_108("CHOP_WAIT", 0);
						}
						unk_0xC6EB89C59F2AF6B8(iLocal_69, sLocal_82[2], "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
						iLocal_52 = 3;
					}
				}
			}
			else if (iLocal_52 == 2)
			{
				if (!func_113(iLocal_69, -2017877118) || (unk_0xB4ECF989E2C1DAC8(iLocal_69, sLocal_82[1], sLocal_86, 3) && unk_0x8CA9406E01C7EE58(iLocal_69, sLocal_82[1], sLocal_86) > 0,98f))
				{
					unk_0xC6EB89C59F2AF6B8(iLocal_69, sLocal_82[2], "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 3)
			{
				if (!func_113(iLocal_69, -2017877118))
				{
					iLocal_422 = 0;
					if (iLocal_53 == 0)
					{
						func_121(1, 1);
					}
					else
					{
						func_121(iLocal_53, 1);
					}
				}
			}
			break;
		
		case 18:
			func_116();
			if (iLocal_52 == 0)
			{
				unk_0x3F423BF5B8125A50("creatures@rottweiler@amb@world_dog_barking@enter");
				unk_0x3F423BF5B8125A50("creatures@rottweiler@amb@world_dog_barking@idle_a");
				unk_0x3F423BF5B8125A50("creatures@rottweiler@amb@world_dog_barking@exit");
				unk_0xE185F110925D87DB(iLocal_69, unk_0x16F2683693E537C9(), 20000, 3f, 1f, 1073741824, 0);
				iLocal_52++;
			}
			else if (iLocal_52 == 1)
			{
				if (iLocal_53 == 0)
				{
					if (!func_113(iLocal_69, 1227113341))
					{
						if ((unk_0xB4AE0788C1587752("creatures@rottweiler@amb@world_dog_barking@enter") && unk_0xB4AE0788C1587752("creatures@rottweiler@amb@world_dog_barking@idle_a")) && unk_0xB4AE0788C1587752("creatures@rottweiler@amb@world_dog_barking@exit"))
						{
							unk_0xDD353D0E9C789D0E(&uLocal_119);
							unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
							unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@amb@world_dog_barking@enter", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@amb@world_dog_barking@idle_a", "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@amb@world_dog_barking@exit", "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x75ABDC5F81978924(uLocal_119);
							unk_0x78ADC381772E3D54(iLocal_69, uLocal_119);
							unk_0xF82EA857DA10E0CD(&uLocal_119);
							iLocal_52++;
						}
					}
				}
				else
				{
					func_121(iLocal_53, 1);
				}
			}
			else if (iLocal_52 == 2)
			{
				if (func_107())
				{
					iLocal_408 = 1;
					if (iLocal_53 == 0)
					{
						func_121(1, 1);
					}
					else
					{
						func_121(iLocal_53, 1);
					}
				}
			}
			break;
		
		case 2:
			func_102();
			if (iLocal_52 == 0)
			{
				if ((func_125(iLocal_69) && !unk_0x405E212DDE472467(iLocal_69, 0)) && !unk_0x16102BEDC7435774(iLocal_69))
				{
					unk_0xA3BF0AA5A2608191(iLocal_69);
				}
				func_100();
				func_99(0, 0, 0);
				func_98(1);
				iLocal_60 = -1;
				iLocal_340 = unk_0x1C0640BA9A7327B3();
				iLocal_62 = unk_0x1C0640BA9A7327B3();
				iLocal_63 = (unk_0x1C0640BA9A7327B3() - 10000);
				vLocal_76 = { unk_0x68F4C0EC296D3901(iLocal_69, 1) };
				unk_0x3F423BF5B8125A50("creatures@rottweiler@melee@streamed_taunts@");
				iLocal_52++;
			}
			else if (iLocal_52 == 1)
			{
				func_83();
				func_54();
				func_53();
				func_45();
				func_44();
				func_41();
				func_117();
			}
			break;
		
		case 3:
			if (iLocal_52 == 0)
			{
				func_122("WHINE");
				func_108("CHOP_GOHOME", 0);
				func_40(0);
				unk_0x8D17794CE3273D70("creatures@rottweiler@melee@streamed_taunts@");
				if (func_125(unk_0x16F2683693E537C9()) && unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), 600439132, 0))
				{
					unk_0x650567883F5E3136(unk_0x16F2683693E537C9(), 600439132);
				}
				if (unk_0x16102BEDC7435774(iLocal_69))
				{
					unk_0x0A94A109271BE75A(iLocal_69);
				}
				if (func_118(iLocal_69, 1))
				{
					func_121(1, 1);
				}
				else if (func_39(iLocal_69, vLocal_397, 1) < 100f)
				{
					unk_0xA3BF0AA5A2608191(iLocal_69);
					if (func_39(iLocal_69, vLocal_397, 1) < 20f)
					{
						unk_0x96167B03C5A77156(iLocal_69, vLocal_397, 1f, 20000, 0,25f, 32, vLocal_397.f_3);
					}
					else
					{
						unk_0x96167B03C5A77156(iLocal_69, vLocal_397, 3f, 60000, 0,25f, 32, vLocal_397.f_3);
					}
					iLocal_52++;
				}
				else
				{
					func_121(4, 1);
				}
			}
			else if (iLocal_52 == 1)
			{
				if (unk_0xD1960163A3042274(iLocal_69, 713668775) == 7)
				{
					if (unk_0x5A91F08DF773C39D(iLocal_69, vLocal_397, 2,5f, 2,5f, 4f, 0, 1, 0))
					{
						func_121(1, 1);
					}
					else
					{
						func_121(3, 1);
					}
				}
			}
			break;
		
		case 4:
			if (!func_113(iLocal_69, 1805844857))
			{
				unk_0xF3268524E9BE6D6E(iLocal_69, unk_0x16F2683693E537C9(), 100f, -1, 0, 0);
			}
			break;
		
		case 5:
			if (iLocal_52 == 0)
			{
				if (func_38())
				{
					if (func_35())
					{
						if (unk_0x16102BEDC7435774(iLocal_69))
						{
							unk_0x0A94A109271BE75A(iLocal_69);
						}
						unk_0xA3BF0AA5A2608191(iLocal_69);
						iLocal_56 = unk_0x1C0640BA9A7327B3();
						iLocal_58 = 1000;
						iLocal_409 = 0;
						iLocal_67 = -1;
						func_34();
						iLocal_52++;
					}
					else
					{
						func_32();
					}
				}
			}
			else if (iLocal_52 == 1)
			{
				if (((!func_24() || (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && !func_22())) || (iLocal_67 > -1 && (unk_0x1C0640BA9A7327B3() - iLocal_67) > 30000)) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_386, 1f, 1f, 1f, 0, 1, 0))
				{
					iLocal_52++;
				}
				else if (unk_0x5A91F08DF773C39D(iLocal_69, vLocal_389, 3f, 3f, 4f, 0, 1, 0))
				{
					func_20();
					if (iLocal_67 == -1)
					{
						iLocal_67 = unk_0x1C0640BA9A7327B3();
					}
				}
				else
				{
					func_18();
					if (func_113(iLocal_69, 713668775))
					{
						iVar0 = unk_0xCC2A4E7AEDA758DE(iLocal_69, &uVar2, &uVar1);
						if (iVar0 == 2)
						{
							iLocal_409++;
						}
						else if (iVar0 == 3)
						{
							if (iLocal_409 != 0)
							{
								iLocal_409 = 0;
							}
						}
						if (iLocal_409 > 9)
						{
							func_32();
						}
					}
					else
					{
						unk_0x96167B03C5A77156(iLocal_69, vLocal_389, 3f, -1, 3f, 36, 1193033728);
					}
				}
			}
			else if (iLocal_52 == 2)
			{
				unk_0xA3BF0AA5A2608191(iLocal_69);
				unk_0x8D17794CE3273D70("creatures@rottweiler@indication@");
				func_121(2, 1);
			}
			func_102();
			break;
		
		case 6:
			if (iLocal_52 == 0)
			{
				if (unk_0x16102BEDC7435774(iLocal_69))
				{
					unk_0x0A94A109271BE75A(iLocal_69);
				}
				unk_0x11AD11297DC58CC7(iLocal_69, 0);
				iLocal_52++;
			}
			else if (iLocal_52 == 1)
			{
				if (func_125(unk_0x16F2683693E537C9()))
				{
					if ((!func_113(iLocal_69, 780511057) && !unk_0x4734A6196B611C3B(iLocal_69, 0)) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
					{
						iLocal_62 = unk_0x1C0640BA9A7327B3();
						func_121(2, 1);
					}
				}
			}
			func_102();
			break;
		
		case 7:
			if (iLocal_52 == 0)
			{
				unk_0x3F423BF5B8125A50("creatures@rottweiler@tricks@");
				if (unk_0xB4AE0788C1587752("creatures@rottweiler@tricks@"))
				{
					unk_0xA3BF0AA5A2608191(iLocal_69);
					unk_0xDD353D0E9C789D0E(&uLocal_119);
					if (!unk_0x7069CC4DE1EA3FAA(iLocal_69, unk_0x16F2683693E537C9(), 10f))
					{
						unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
					}
					unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@tricks@", "beg_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@tricks@", "beg_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@tricks@", "beg_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@tricks@", "beg_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x75ABDC5F81978924(uLocal_119);
					unk_0x78ADC381772E3D54(iLocal_69, uLocal_119);
					unk_0xF82EA857DA10E0CD(&uLocal_119);
					func_122("PLAYFUL");
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (func_107())
				{
					func_108("CHOP_RETURN1", 0);
					unk_0x8D17794CE3273D70("creatures@rottweiler@tricks@");
					func_17();
				}
			}
			break;
		
		case 8:
			if (iLocal_52 == 0)
			{
				unk_0x3F423BF5B8125A50("creatures@rottweiler@tricks@");
				if (unk_0xB4AE0788C1587752("creatures@rottweiler@tricks@"))
				{
					unk_0xA3BF0AA5A2608191(iLocal_69);
					unk_0xDD353D0E9C789D0E(&uLocal_119);
					if (!unk_0x7069CC4DE1EA3FAA(iLocal_69, unk_0x16F2683693E537C9(), 10f))
					{
						unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
					}
					unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x75ABDC5F81978924(uLocal_119);
					unk_0x78ADC381772E3D54(iLocal_69, uLocal_119);
					unk_0xF82EA857DA10E0CD(&uLocal_119);
					func_122("PLAYFUL");
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (func_107())
				{
					func_108("CHOP_RETURN1", 0);
					unk_0x8D17794CE3273D70("creatures@rottweiler@tricks@");
					func_17();
				}
			}
			break;
		
		case 9:
			if (iLocal_52 == 0)
			{
				unk_0x3F423BF5B8125A50("creatures@rottweiler@tricks@");
				if (unk_0xB4AE0788C1587752("creatures@rottweiler@tricks@"))
				{
					unk_0xA3BF0AA5A2608191(iLocal_69);
					unk_0xDD353D0E9C789D0E(&uLocal_119);
					if (!unk_0x7069CC4DE1EA3FAA(iLocal_69, unk_0x16F2683693E537C9(), 10f))
					{
						unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
					}
					unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@tricks@", "paw_right_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@tricks@", "paw_right_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@tricks@", "paw_right_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@tricks@", "paw_right_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x75ABDC5F81978924(uLocal_119);
					unk_0x78ADC381772E3D54(iLocal_69, uLocal_119);
					unk_0xF82EA857DA10E0CD(&uLocal_119);
					func_122("PLAYFUL");
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (func_107())
				{
					func_108("CHOP_RETURN1", 0);
					unk_0x8D17794CE3273D70("creatures@rottweiler@tricks@");
					func_17();
				}
			}
			break;
		
		case 10:
			unk_0x38C3A68D7861DCFD(0, 32, 1);
			unk_0x38C3A68D7861DCFD(0, 34, 1);
			unk_0x38C3A68D7861DCFD(0, 35, 1);
			unk_0x38C3A68D7861DCFD(0, 33, 1);
			unk_0x38C3A68D7861DCFD(0, 31, 1);
			unk_0x38C3A68D7861DCFD(0, 30, 1);
			unk_0x38C3A68D7861DCFD(0, 22, 1);
			unk_0x38C3A68D7861DCFD(0, 36, 1);
			unk_0x38C3A68D7861DCFD(0, 44, 1);
			unk_0x38C3A68D7861DCFD(0, 141, 1);
			unk_0x38C3A68D7861DCFD(0, 140, 1);
			unk_0x38C3A68D7861DCFD(0, 263, 1);
			unk_0x38C3A68D7861DCFD(0, 264, 1);
			unk_0x38C3A68D7861DCFD(0, 143, 1);
			unk_0x38C3A68D7861DCFD(0, 24, 1);
			unk_0x38C3A68D7861DCFD(0, 257, 1);
			unk_0x38C3A68D7861DCFD(0, 262, 1);
			unk_0x38C3A68D7861DCFD(0, 261, 1);
			unk_0x38C3A68D7861DCFD(0, 37, 1);
			unk_0x38C3A68D7861DCFD(0, 21, 1);
			if (iLocal_52 == 0)
			{
				unk_0x3F423BF5B8125A50("creatures@rottweiler@tricks@");
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
				unk_0xF96A174EE26D7588(unk_0x16F2683693E537C9(), iLocal_69, 0);
				iLocal_52++;
			}
			else if (iLocal_52 == 1)
			{
				if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), -875674219) == 7)
				{
					unk_0xA3BF0AA5A2608191(iLocal_69);
					vVar3 = { unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), 0f, 1f, 1f) };
					unk_0xE82754C349C7B581(vVar3, &(vVar3.f_2), 0, 0);
					if (func_39(iLocal_69, vVar3, 0) > 0,3f)
					{
						unk_0x96167B03C5A77156(iLocal_69, vVar3, 1f, 5000, 1048576000, 0, 1193033728);
					}
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 2)
			{
				if (unk_0xD1960163A3042274(iLocal_69, 713668775) == 7 || func_39(iLocal_69, vVar3, 0) < 0,3f)
				{
					if (!unk_0x7069CC4DE1EA3FAA(iLocal_69, unk_0x16F2683693E537C9(), 15f))
					{
						unk_0xF96A174EE26D7588(iLocal_69, unk_0x16F2683693E537C9(), 0);
						iLocal_482 = 0;
					}
					else
					{
						iLocal_482 = 1;
					}
					if (!unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_69, 15f))
					{
						unk_0xF96A174EE26D7588(unk_0x16F2683693E537C9(), iLocal_69, 0);
						iLocal_483 = 0;
					}
					else
					{
						iLocal_483 = 1;
					}
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 3)
			{
				unk_0x3F423BF5B8125A50("creatures@rottweiler@tricks@");
				if (((iLocal_482 == 1 || unk_0xD1960163A3042274(iLocal_69, -875674219) == 7) && (iLocal_483 == 1 || unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), -875674219) == 7)) && unk_0xB4AE0788C1587752("creatures@rottweiler@tricks@"))
				{
					unk_0xC6EB89C59F2AF6B8(iLocal_69, "creatures@rottweiler@tricks@", "petting_chop", 8f, -8f, -1, 8, 0, 0, 0, 0);
					unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "creatures@rottweiler@tricks@", "petting_franklin", 8f, -8f, -1, 8, 0, 0, 0, 0);
					func_122("PLAYFUL");
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 4)
			{
				if (unk_0xD1960163A3042274(iLocal_69, -2017877118) == 7)
				{
					func_108("CHOP_RETURN1", 0);
					unk_0x8D17794CE3273D70("creatures@rottweiler@tricks@");
					func_17();
				}
			}
			break;
		
		case 12:
			if (iLocal_52 == 0)
			{
				if (unk_0x16102BEDC7435774(iLocal_69))
				{
					unk_0x0A94A109271BE75A(iLocal_69);
				}
				unk_0x3F423BF5B8125A50("creatures@rottweiler@tricks@");
				if (unk_0xB4AE0788C1587752("creatures@rottweiler@tricks@"))
				{
					unk_0xA3BF0AA5A2608191(iLocal_69);
					unk_0xDD353D0E9C789D0E(&uLocal_119);
					unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
					unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, -1, 4097, 0, 0, 0, 0);
					unk_0x75ABDC5F81978924(uLocal_119);
					unk_0x78ADC381772E3D54(iLocal_69, uLocal_119);
					unk_0xF82EA857DA10E0CD(&uLocal_119);
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (!func_16())
				{
					unk_0x3F423BF5B8125A50("creatures@rottweiler@tricks@");
					if (unk_0xB4AE0788C1587752("creatures@rottweiler@tricks@"))
					{
						unk_0xA3BF0AA5A2608191(iLocal_69);
						unk_0xC6EB89C59F2AF6B8(iLocal_69, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
						func_108("CHOP_WALK", 0);
						iLocal_52++;
					}
				}
			}
			else if (iLocal_52 == 2)
			{
				if (unk_0xD1960163A3042274(iLocal_69, -2017877118) == 7)
				{
					unk_0x8D17794CE3273D70("creatures@rottweiler@tricks@");
					iLocal_62 = unk_0x1C0640BA9A7327B3();
					func_121(2, 1);
				}
			}
			break;
		
		case 13:
			if (iLocal_52 == 0)
			{
				if (unk_0x16102BEDC7435774(iLocal_69))
				{
					unk_0x0A94A109271BE75A(iLocal_69);
				}
				unk_0x3F423BF5B8125A50("creatures@rottweiler@move");
				unk_0x9E5E60D8C63FD9D1();
				if (unk_0xB4AE0788C1587752("creatures@rottweiler@move") && unk_0x25F7A4D42AF2AB93())
				{
					unk_0xA3BF0AA5A2608191(iLocal_69);
					unk_0xDD353D0E9C789D0E(&uLocal_119);
					unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@move", "dump_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@move", "dump_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@move", "dump_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x75ABDC5F81978924(uLocal_119);
					unk_0x78ADC381772E3D54(iLocal_69, uLocal_119);
					unk_0xF82EA857DA10E0CD(&uLocal_119);
					func_122("AGITATED");
					iLocal_64 = unk_0x1C0640BA9A7327B3();
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (func_107())
				{
					if (unk_0x83A8177D302E1A7E(uLocal_79))
					{
						unk_0xF7E25143642732EA(uLocal_79, 0);
					}
					if (func_118(iLocal_69, 0))
					{
						func_121(1, 1);
					}
					else
					{
						func_121(2, 1);
					}
				}
				else if (!unk_0x83A8177D302E1A7E(uLocal_79))
				{
					if (iLocal_64 > -1 && (unk_0x1C0640BA9A7327B3() - iLocal_64) > 4000)
					{
						uLocal_79 = unk_0xC1879030EB463216("ent_anim_dog_poo", iLocal_69, 0f, -0,15f, -0,2f, 0f, 0f, 0f, 1f, 0, 0, 0);
					}
				}
				else if ((unk_0x1C0640BA9A7327B3() - iLocal_64) > 10000)
				{
					unk_0xF7E25143642732EA(uLocal_79, 0);
					iLocal_64 = -1;
				}
			}
			break;
		
		case 14:
			if (iLocal_52 == 0)
			{
				unk_0x9E5E60D8C63FD9D1();
				if (unk_0x25F7A4D42AF2AB93())
				{
					if (unk_0x16102BEDC7435774(iLocal_69))
					{
						unk_0x0A94A109271BE75A(iLocal_69);
					}
					func_122("AGITATED");
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				unk_0x3F423BF5B8125A50("creatures@rottweiler@move");
				if (!func_113(iLocal_69, 713668775))
				{
					unk_0x96167B03C5A77156(iLocal_69, unk_0x68F4C0EC296D3901(iLocal_423, 1), 2f, 20000, 0,25f, 36, 1193033728);
				}
				if (func_39(iLocal_69, unk_0x68F4C0EC296D3901(iLocal_423, 1), 1) < 2f)
				{
					if ((!unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_94, 10) && !unk_0xFEBC1E4EC9E001F0()) && !unk_0x991B1F0980C62628())
					{
						unk_0x5D96D8530B3D0904(&(Global_111638.f_10044.f_94), 10);
						if (bLocal_395 == 0)
						{
							func_15("CHOP_H_BEHAVE", -1);
						}
						else
						{
							func_15("CHOP_H_BEHAVA", -1);
						}
					}
					unk_0xA3BF0AA5A2608191(iLocal_69);
					if (unk_0xB4AE0788C1587752("creatures@rottweiler@move") && unk_0x9C66D99E63E8E24C(iLocal_69) < 1f)
					{
						vLocal_425 = { unk_0x68F4C0EC296D3901(iLocal_69, 1) };
						iLocal_424 = unk_0x09AC81E49EA267F7(0, 2);
						fLocal_431 = func_14(vLocal_425, unk_0x68F4C0EC296D3901(iLocal_423, 1));
						if (iLocal_424 == 0)
						{
							vLocal_428 = { unk_0x8A5E176FF719A014(vLocal_425, fLocal_431, -0,5f, 1f, 0f) };
						}
						else
						{
							vLocal_428 = { unk_0x8A5E176FF719A014(vLocal_425, fLocal_431, 0,5f, 1f, 0f) };
						}
						unk_0xDD353D0E9C789D0E(&uLocal_119);
						unk_0x796BDF31572BB055(0, vLocal_428, 0);
						if (iLocal_424 == 0)
						{
							unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@move", "pee_right_enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@move", "pee_right_idle", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@move", "pee_right_exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						else
						{
							unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@move", "pee_left_enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@move", "pee_left_idle", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@move", "pee_left_exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						unk_0x75ABDC5F81978924(uLocal_119);
						unk_0x78ADC381772E3D54(iLocal_69, uLocal_119);
						unk_0xF82EA857DA10E0CD(&uLocal_119);
						iLocal_64 = unk_0x1C0640BA9A7327B3();
						iLocal_52++;
					}
				}
			}
			else if (iLocal_52 == 2)
			{
				if (func_107())
				{
					if (unk_0x83A8177D302E1A7E(uLocal_79))
					{
						unk_0xF7E25143642732EA(uLocal_79, 0);
					}
					func_122("BARK");
					func_121(2, 1);
				}
				else if (!unk_0x83A8177D302E1A7E(uLocal_79))
				{
					if (iLocal_64 > -1 && (unk_0x1C0640BA9A7327B3() - iLocal_64) > 7000)
					{
						if (iLocal_424 == 0)
						{
							uLocal_79 = unk_0xC1879030EB463216("ent_anim_dog_peeing", iLocal_69, 0,1f, -0,32f, -0,04f, 0f, 0f, 30f, 1f, 0, 0, 0);
						}
						else
						{
							uLocal_79 = unk_0xC1879030EB463216("ent_anim_dog_peeing", iLocal_69, -0,1f, -0,32f, -0,04f, 0f, 0f, 150f, 1f, 0, 0, 0);
						}
					}
				}
				else if ((unk_0x1C0640BA9A7327B3() - iLocal_64) > 16000)
				{
					unk_0xF7E25143642732EA(uLocal_79, 0);
					iLocal_64 = -1;
				}
			}
			break;
		
		case 15:
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
			{
				func_40(0);
				iLocal_62 = unk_0x1C0640BA9A7327B3();
				func_121(2, 1);
			}
			else
			{
				if (iLocal_52 == 0)
				{
					func_40(1);
					if (unk_0x68E45B0EC23881A7(unk_0x16F2683693E537C9(), iLocal_473, 50f, &uLocal_468, &iLocal_467, 0))
					{
						func_6(294, 0, 0);
						unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), -1569615261, 1);
						iLocal_471 = 0;
						iLocal_472 = 0;
						iLocal_410 = 0;
						if (unk_0x16102BEDC7435774(iLocal_69))
						{
							unk_0x0A94A109271BE75A(iLocal_69);
						}
						iLocal_474 = unk_0x1C0640BA9A7327B3();
						iLocal_52++;
					}
				}
				else if (iLocal_52 == 1)
				{
					if (unk_0xC844350D5D58C99A(iLocal_467))
					{
						if (!unk_0x70EED0761B82965E(iLocal_467))
						{
							if ((unk_0x1C0640BA9A7327B3() - iLocal_474) > 500)
							{
								if (func_5())
								{
									unk_0x3F423BF5B8125A50("creatures@rottweiler@move");
									if (unk_0xB4AE0788C1587752("creatures@rottweiler@move"))
									{
										unk_0xDD353D0E9C789D0E(&uLocal_119);
										if (iLocal_473 == 600439132)
										{
											unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@move", "fetch_pickup", 8f, -8f, -1, 49152, 0, 0, 0, 0);
										}
										unk_0xE185F110925D87DB(0, unk_0x16F2683693E537C9(), 20000, 4f, 3f, 1073741824, 0);
										unk_0x75ABDC5F81978924(uLocal_119);
										unk_0x78ADC381772E3D54(iLocal_69, uLocal_119);
										unk_0xF82EA857DA10E0CD(&uLocal_119);
										if (iLocal_473 == 600439132)
										{
											iLocal_471 = 1;
										}
										iLocal_52++;
									}
								}
								else if (!func_113(iLocal_69, 1227113341))
								{
									unk_0xE185F110925D87DB(iLocal_69, iLocal_467, 30000, 0,5f, 3f, 1073741824, 0);
									iLocal_410++;
									iLocal_409 = 0;
									if (iLocal_410 > 3)
									{
										unk_0xE185F110925D87DB(iLocal_69, unk_0x16F2683693E537C9(), 20000, 5f, 3f, 1073741824, 0);
										func_40(1);
										iLocal_52++;
									}
								}
								else
								{
									iVar0 = unk_0xCC2A4E7AEDA758DE(iLocal_69, &uVar2, &uVar1);
									if (iVar0 == 2)
									{
										fLocal_411 = unk_0xEE9925602B29903C(iLocal_467);
										if (fLocal_411 < 1f)
										{
											iLocal_409++;
										}
									}
									else if (iVar0 == 3)
									{
										if (iLocal_472 == 0)
										{
											func_122("BARK");
											if (iLocal_473 == 600439132)
											{
												func_108("CHOP_FETCH", 0);
											}
											iLocal_472 = 1;
										}
									}
									if (iLocal_409 > 9)
									{
										unk_0xE185F110925D87DB(iLocal_69, unk_0x16F2683693E537C9(), 20000, 5f, 3f, 1073741824, 0);
										func_40(1);
										iLocal_52++;
									}
								}
							}
						}
						else
						{
							unk_0xE185F110925D87DB(iLocal_69, unk_0x16F2683693E537C9(), 20000, 5f, 3f, 1073741824, 0);
							iLocal_52++;
						}
					}
					else
					{
						unk_0xE185F110925D87DB(iLocal_69, unk_0x16F2683693E537C9(), 20000, 5f, 3f, 1073741824, 0);
						iLocal_52++;
					}
				}
				else if (iLocal_52 == 2)
				{
					if (iLocal_471 == 1)
					{
						if ((unk_0xC844350D5D58C99A(iLocal_467) && unk_0xB4ECF989E2C1DAC8(iLocal_69, "creatures@rottweiler@move", "fetch_pickup", 3)) && unk_0x8CA9406E01C7EE58(iLocal_69, "creatures@rottweiler@move", "fetch_pickup") > 0,25f)
						{
							unk_0x9F528B1B53FBC5D9(iLocal_467, iLocal_69, 28, 0,2042f, 0f, -0,0608f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							unk_0x7352ACF3368DF65F("DisableBarks", 1);
							iLocal_52++;
						}
					}
					else
					{
						iLocal_52++;
					}
				}
				else if (iLocal_52 == 3)
				{
					if (func_4(unk_0x16F2683693E537C9(), iLocal_69, 1) < 5f)
					{
						if (iLocal_473 == 600439132)
						{
							if (iLocal_471 == 1)
							{
								unk_0x3F423BF5B8125A50("creatures@rottweiler@move");
								if (unk_0xB4AE0788C1587752("creatures@rottweiler@move"))
								{
									unk_0xDD353D0E9C789D0E(&uLocal_119);
									unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
									unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@move", "fetch_drop", 8f, -8f, -1, 16384, 0, 0, 0, 0);
									unk_0x75ABDC5F81978924(uLocal_119);
									unk_0x78ADC381772E3D54(iLocal_69, uLocal_119);
									unk_0xF82EA857DA10E0CD(&uLocal_119);
									func_108("CHOP_RETURN1", 0);
									unk_0x7352ACF3368DF65F("DisableBarks", 0);
									iLocal_52++;
								}
							}
							else
							{
								func_122("BREATH_AGITATED");
								func_108("CHOP_RETURN2", 0);
								func_121(2, 1);
							}
						}
						else
						{
							func_122("BARK_WHINE");
							func_40(1);
							func_121(2, 1);
						}
					}
				}
				else if (iLocal_52 == 4)
				{
					if (!func_113(iLocal_69, 242628503) && !unk_0xC844350D5D58C99A(iLocal_467))
					{
						if (func_3(0))
						{
							func_99(0, 1, 0);
						}
						else if (unk_0x6C3F127AAF415E69() == 4)
						{
							func_99(0, 1, 1);
						}
						else
						{
							func_99(1, 1, 1);
						}
						iLocal_62 = unk_0x1C0640BA9A7327B3();
						func_121(2, 1);
					}
					else if (unk_0xC844350D5D58C99A(iLocal_467))
					{
						if (unk_0xD59B17D2DFF98E26(iLocal_467))
						{
							if (unk_0xB4ECF989E2C1DAC8(iLocal_69, "creatures@rottweiler@move", "fetch_drop", 3) && unk_0x8CA9406E01C7EE58(iLocal_69, "creatures@rottweiler@move", "fetch_drop") > 0,4f)
							{
								unk_0x15AFB6CBDE990FB6(iLocal_467, 1, 1);
							}
						}
						else
						{
							if ((func_4(unk_0x16F2683693E537C9(), iLocal_467, 1) < 1,5f || func_4(unk_0x16F2683693E537C9(), iLocal_467, 1) > 20f) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
							{
								func_40(1);
							}
							if (!func_113(iLocal_69, 242628503))
							{
								func_100();
							}
						}
					}
				}
				func_102();
			}
			break;
		
		case 16:
			if (iLocal_52 == 0)
			{
				unk_0x3F423BF5B8125A50("creatures@rottweiler@in_vehicle@std_car");
				if (unk_0xB4AE0788C1587752("creatures@rottweiler@in_vehicle@std_car"))
				{
					if (unk_0x16102BEDC7435774(iLocal_69))
					{
						unk_0x0A94A109271BE75A(iLocal_69);
					}
					unk_0x9F528B1B53FBC5D9(iLocal_69, unk_0x0FF5573D0492BF97(unk_0x16F2683693E537C9()), 0, 0f, 0f, -6,1f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
					unk_0xC6EB89C59F2AF6B8(iLocal_69, "creatures@rottweiler@in_vehicle@std_car", "sit", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (!unk_0xD59B17D2DFF98E26(unk_0x16F2683693E537C9()))
				{
					fVar6 = 99999f;
					iVar8 = 0;
					while (iVar8 < 4)
					{
						fVar7 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), vLocal_89[iVar8], 1);
						if (fVar7 < fVar6)
						{
							fVar6 = fVar7;
							iVar9 = iVar8;
						}
						iVar8++;
					}
					if (unk_0xD59B17D2DFF98E26(iLocal_69))
					{
						unk_0x15AFB6CBDE990FB6(iLocal_69, 1, 1);
					}
					func_124(iLocal_69, vLocal_89[iVar9], fLocal_102[iVar9], 0, 1);
					unk_0xF895E10BF4C72645(iLocal_69, 0, 0);
					iLocal_62 = unk_0x1C0640BA9A7327B3();
					func_121(2, 1);
				}
			}
			break;
	}
}

int func_3(int iParam0)
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

float func_4(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 1) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0) };
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		vVar3 = { unk_0x68F4C0EC296D3901(iParam1, 1) };
	}
	else
	{
		vVar3 = { unk_0x68F4C0EC296D3901(iParam1, 0) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vVar3, iParam2);
}

int func_5()
{
	if (func_4(iLocal_69, iLocal_467, 1) < (0,5f + 0,25f))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iLocal_467, 1) };
		if (unk_0xE82754C349C7B581(vVar0.x, vVar0.y, (vVar0.z + 1f), &fVar3, 0, 0))
		{
			if (unk_0x755FF954DAE327E1((vVar0.z - fVar3)) < 0,1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_6(int iParam0, int iParam1, int iParam2)
{
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
	if (Global_111638.f_10189[iParam0].f_5 == 1)
	{
		if (Global_111638.f_10189[iParam0].f_6 == 11 || Global_111638.f_10189[iParam0].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111638.f_10189[iParam0].f_5 = 1;
		Global_111638.f_10189[iParam0].f_10 = iParam1;
		Global_111638.f_10189[iParam0].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0xE7B2B6A56C007908(-2044299740, 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xE7B2B6A56C007908(86701099, 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xE7B2B6A56C007908(-375571184, 50, 0);
		}
	}
	if (bVar0)
	{
		func_7();
	}
}

void func_7()
{
	iVar0 = 0;
	Global_111374 = 0;
	Global_111375 = 0;
	Global_111376 = 0;
	Global_111377 = 0;
	Global_111378 = 0;
	Global_111379 = 0;
	Global_111380 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_111638.f_10189.f_3853;
	Global_111638.f_10189.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_111638.f_10189[iVar0].f_5 == 1)
		{
			switch (Global_111638.f_10189[iVar0].f_6)
			{
				case 1:
					Global_111374++;
					fVar1 = (fVar1 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 3:
					Global_111375++;
					fVar2 = (fVar2 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 5:
					Global_111376++;
					fVar3 = (fVar3 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 7:
					Global_111377++;
					fVar4 = (fVar4 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 9:
					Global_111378++;
					fVar5 = (fVar5 + (Global_111638.f_10189[iVar0].f_4 * 4f));
					break;
				
				case 11:
					Global_111379++;
					fVar6 = (fVar6 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 13:
					Global_111380++;
					fVar7 = (fVar7 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_111357 > 0)
	{
		if (Global_111374 == Global_111357)
		{
			fVar1 = 55f;
		}
	}
	if (Global_111358 > 0)
	{
		if (Global_111375 == Global_111358)
		{
			fVar2 = 10f;
		}
	}
	if (Global_111359 > 0)
	{
		if (Global_111376 == Global_111359)
		{
			fVar3 = 0f;
		}
	}
	if (Global_111360 > 0)
	{
		if (Global_111377 == Global_111360)
		{
			fVar4 = 10f;
		}
	}
	if (Global_111361 > 0)
	{
		if (((Global_111378 == Global_111361 || (Global_111361 * 10 / Global_111378) < 41) || Global_111378 > Global_111364) || Global_111378 == Global_111364)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_111638.f_10189.f_3856, 14))
			{
				if (Global_111378 == Global_111361)
				{
					unk_0xE7B2B6A56C007908(-2122623864, Global_111361, 0);
					unk_0x5D96D8530B3D0904(&(Global_111638.f_10189.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_111362 > 0)
	{
		if (Global_111379 == Global_111362)
		{
			fVar6 = 15f;
		}
	}
	if (Global_111363 > 0)
	{
		if (Global_111380 == Global_111363)
		{
			fVar7 = 5f;
		}
	}
	Global_111638.f_10189.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_111378 > Global_111364 || Global_111378 == Global_111364)
	{
		iVar9 = Global_111364;
	}
	else
	{
		iVar9 = Global_111378;
	}
	unk_0xCDC520E5E48E63D9(-1055525200, Global_111374, 1);
	unk_0xCDC520E5E48E63D9(-419750212, Global_111357, 1);
	unk_0xCDC520E5E48E63D9(1331385274, Global_111375, 1);
	unk_0xCDC520E5E48E63D9(542355616, Global_111358, 1);
	unk_0xCDC520E5E48E63D9(1561233577, Global_111376, 1);
	unk_0xCDC520E5E48E63D9(558499468, Global_111359, 1);
	unk_0xCDC520E5E48E63D9(-852659719, Global_111377, 1);
	unk_0xCDC520E5E48E63D9(-20401960, Global_111360, 1);
	unk_0xCDC520E5E48E63D9(-2122623864, iVar9, 1);
	unk_0xCDC520E5E48E63D9(-215705366, Global_111364, 1);
	unk_0xCDC520E5E48E63D9(-131898641, (Global_111380 + Global_111379), 1);
	unk_0xCDC520E5E48E63D9(-2086369560, (Global_111363 + Global_111362), 1);
	Global_111381 = (Global_111374 * 100 / Global_111357);
	Global_111383 = ((Global_111376 + Global_111375) * 100 / (Global_111359 + Global_111358));
	Global_111382 = ((Global_111377 + iVar9) * 100 / (Global_111360 + Global_111364));
	Global_111384 = ((Global_111379 + Global_111380) * 100 / (Global_111362 + Global_111363));
	unk_0x11F69E56D7B5F3C7(1215094015, Global_111638.f_10189.f_3853, 1);
	unk_0xCDC520E5E48E63D9(1813094653, Global_111381, 1);
	unk_0xCDC520E5E48E63D9(-1205712980, Global_111382, 1);
	unk_0xCDC520E5E48E63D9(480408826, Global_111383, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_111638.f_10189.f_3853))
	{
		func_11(13, floor(Global_111638.f_10189.f_3853));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_10() == 2 == 0 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_8();
				}
			}
		}
	}
}

int func_8()
{
	if (func_9(0))
	{
		return 0;
	}
	if (Global_98783.f_8)
	{
		if (Global_98783.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98783.f_10 > 1)
	{
		return 0;
	}
	Global_98783.f_10++;
	return 1;
}

bool func_9(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

int func_10()
{
	return Global_30768;
}

int func_11(int iParam0, int iParam1)
{
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
	iVar0 = unk_0xBD47F720AB99D749(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x12ABC45272B87562(iParam0, iParam1);
	}
	return 0;
}

int func_12(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_13();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x04D746E8DA20611E((iParam0 - 0)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x04D746E8DA20611E((iParam0 - 192)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x04D746E8DA20611E((iParam0 - 513)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x04D746E8DA20611E((iParam0 - 705)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = unk_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = unk_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar24, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_13()
{
	return Global_1312745;
}

float func_14(struct<2> Param0, var uParam2, struct<2> Param3, float fParam5)
{
	return unk_0xE7D606C557C86100((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_15(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, 1, iParam1);
}

bool func_16()
{
	return Global_98796.f_345 > 0;
}

void func_17()
{
	iLocal_62 = unk_0x1C0640BA9A7327B3();
	if (iLocal_75 == 0)
	{
		func_121(1, 1);
	}
	else
	{
		func_121(2, 1);
	}
}

void func_18()
{
	if ((unk_0x1C0640BA9A7327B3() - iLocal_56) > iLocal_58)
	{
		fVar0 = func_39(iLocal_69, vLocal_389, 1);
		if (fVar0 < 10f)
		{
			func_122("BARK_SEQ");
		}
		else
		{
			func_122("BARK");
		}
		iLocal_56 = unk_0x1C0640BA9A7327B3();
		if (fVar0 < 20f)
		{
			iLocal_58 = unk_0x09AC81E49EA267F7(4000, 5000);
		}
		else if (fVar0 < 50f)
		{
			iLocal_58 = unk_0x09AC81E49EA267F7(5000, 6000);
		}
		else
		{
			iLocal_58 = unk_0x09AC81E49EA267F7(8000, 12000);
		}
		if (((!unk_0xFEBC1E4EC9E001F0() && !unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_94, 1)) && !func_19()) && !unk_0x991B1F0980C62628())
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_10044.f_94), 1);
			func_15("CHOP_H_HUNT", -1);
		}
	}
}

int func_19()
{
	if (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_69) || (iLocal_51 == 10 && unk_0x06F8112AA79C53D9(2, 25)))
	{
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 1);
		if (iVar0 == -1569615261)
		{
			return 1;
		}
	}
	return 0;
}

void func_20()
{
	if (!func_113(iLocal_69, 242628503))
	{
		unk_0x3F423BF5B8125A50("creatures@rottweiler@indication@");
		if (unk_0xB4AE0788C1587752("creatures@rottweiler@indication@"))
		{
			unk_0xA3BF0AA5A2608191(iLocal_69);
			unk_0xDD353D0E9C789D0E(&uLocal_119);
			unk_0x796BDF31572BB055(0, vLocal_386, 0);
			unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@indication@", func_21(), 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x75ABDC5F81978924(uLocal_119);
			unk_0x78ADC381772E3D54(iLocal_69, uLocal_119);
			unk_0xF82EA857DA10E0CD(&uLocal_119);
		}
	}
}

char* func_21()
{
	if (func_125(iLocal_69))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iLocal_69, 1) };
		if ((vVar1.z + 1f) < vLocal_386.z)
		{
			sVar0 = "indicate_high";
		}
		else if ((vVar1.z - 1f) > vLocal_386.z)
		{
			sVar0 = "indicate_low";
		}
		else
		{
			sVar0 = "indicate_ahead";
		}
	}
	return sVar0;
}

int func_22()
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0))
	{
		if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()) || func_23())
		{
			return 1;
		}
	}
	return 0;
}

int func_23()
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
	{
		iVar0 = unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 1));
		if ((((((((((((((((((iVar0 == 1147287684 || iVar0 == -537896628) || iVar0 == -1661854193) || iVar0 == 1560980623) || iVar0 == -2128233223) || iVar0 == -48031959) || iVar0 == 1886712733) || iVar0 == -1006919392) || iVar0 == -2130482718) || iVar0 == 1491375716) || iVar0 == 444583674) || iVar0 == 1783355638) || iVar0 == 782665360) || iVar0 == 1641462412) || iVar0 == -2076478498) || iVar0 == 1445631933) || iVar0 == unk_0x12AB0310C2281427("bifta")) || iVar0 == -1269889662) || iVar0 == 534258863)
		{
			return 1;
		}
	}
	return 0;
}

int func_24()
{
	switch (iLocal_338)
	{
		case 2:
			if (!func_27(2))
			{
				func_108("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		
		case 1:
			if (!func_27(1))
			{
				func_108("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		
		case 0:
			if (!func_27(0))
			{
				func_108("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		
		case 3:
			if (func_26(iLocal_385))
			{
				func_108("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		
		case 4:
			if (func_25(iLocal_385))
			{
				func_108("CHOP_RETURN1", 1);
				return 0;
			}
			break;
	}
	return 1;
}

bool func_25(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 50)
	{
		return 0;
	}
	if (iParam0 <= 31)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_125, iParam0);
	}
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_125.f_1, (iParam0 - 32));
}

bool func_26(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 50)
	{
		return 0;
	}
	if (iParam0 <= 31)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_122, iParam0);
	}
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_122.f_1, (iParam0 - 32));
}

int func_27(int iParam0)
{
	if (func_31())
	{
		func_30(iParam0, iLocal_385);
	}
	if (func_29())
	{
		if (func_28())
		{
			func_34();
			return 0;
		}
		func_34();
	}
	return 1;
}

bool func_28()
{
	return Global_31014;
}

int func_29()
{
	if (Global_31011 == 2)
	{
		return 1;
	}
	return 0;
}

void func_30(int iParam0, int iParam1)
{
	if (Global_31011 == 0)
	{
		Global_31011 = 1;
		Global_31012 = iParam0;
		Global_31013 = iParam1;
	}
}

int func_31()
{
	if (Global_31011 == 0)
	{
		return 1;
	}
	return 0;
}

void func_32()
{
	vVar0 = { unk_0x68F4C0EC296D3901(iLocal_69, 1) };
	func_33(vVar0);
	func_122("WHINE");
	func_108("CHOP_NONEAR", 0);
	func_17();
}

void func_33(vector3 vParam0)
{
	if (vdist(vParam0, vParam0) > 1f)
	{
	}
}

void func_34()
{
	Global_31011 = 3;
}

int func_35()
{
	iLocal_385 = -1;
	vLocal_386 = { 0f, 0f, 0f };
	vLocal_389 = { 0f, 0f, 0f };
	func_36(0);
	if (iLocal_385 == -1)
	{
		func_36(1);
	}
	if (iLocal_385 > -1)
	{
		return 1;
	}
	return 0;
}

void func_36(int iParam0)
{
	fVar0 = 9999f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if ((iLocal_341[iVar1] > -1 && fLocal_347[iVar1] < fVar0) && func_37(iParam0, iVar1))
		{
			fVar0 = fLocal_347[iVar1];
			iLocal_385 = iLocal_341[iVar1];
			iLocal_338 = iVar1;
			vLocal_386 = { vLocal_353[iVar1] };
			vLocal_389 = { vLocal_369[iVar1] };
		}
		iVar1++;
	}
}

int func_37(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		return 1;
	}
	if (iParam1 == 1 && unk_0x7F6DC62EA9922664(unk_0x16F2683693E537C9()) >= 200)
	{
		return 0;
	}
	if (iParam1 == 0 && unk_0x34460709B9A5160B(unk_0x16F2683693E537C9()) >= 100)
	{
		return 0;
	}
	return 1;
}

int func_38()
{
	if (iLocal_339 == 5)
	{
		iLocal_339 = 0;
	}
	switch (iLocal_339)
	{
		case 0:
			if (iLocal_341[0] > -1)
			{
				if (func_31())
				{
					func_30(0, iLocal_341[0]);
				}
				if (func_29())
				{
					if (func_28())
					{
						iLocal_341[0] = -1;
					}
					func_34();
					iLocal_339 = 1;
				}
			}
			else
			{
				iLocal_339 = 1;
			}
			break;
		
		case 1:
			if (iLocal_341[1] > -1)
			{
				if (func_31())
				{
					func_30(1, iLocal_341[1]);
				}
				if (func_29())
				{
					if (func_28())
					{
						iLocal_341[1] = -1;
					}
					func_34();
					iLocal_339 = 2;
				}
			}
			else
			{
				iLocal_339 = 2;
			}
			break;
		
		case 2:
			if (iLocal_341[2] > -1)
			{
				if (func_31())
				{
					func_30(2, iLocal_341[2]);
				}
				if (func_29())
				{
					if (func_28())
					{
						iLocal_341[2] = -1;
					}
					func_34();
					iLocal_339 = 3;
				}
			}
			else
			{
				iLocal_339 = 3;
			}
			break;
		
		case 3:
			if (iLocal_341[3] > -1)
			{
				if (func_26(iLocal_341[3]))
				{
					iLocal_341[3] = -1;
				}
			}
			if (iLocal_341[4] > -1)
			{
				if (func_25(iLocal_341[4]))
				{
					iLocal_341[4] = -1;
				}
			}
			iLocal_339 = 5;
			return 1;
			break;
	}
	return 0;
}

float func_39(int iParam0, vector3 vParam1, int iParam4)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 1) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vParam1, iParam4);
}

void func_40(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iLocal_467))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iLocal_467, 1) };
		if (unk_0xBDEB2DEEF1D23A18(iLocal_467))
		{
			unk_0x15AFB6CBDE990FB6(iLocal_467, 1, 1);
		}
		unk_0x82692E8F6A0D7A22(&iLocal_467);
		if (iParam0 == 1 && iLocal_473 == 600439132)
		{
			unk_0x679C321F8CAA2CFA(vVar0, 0,1f, 0);
		}
	}
}

void func_41()
{
	if ((((((func_43() != 1 && (unk_0x1C0640BA9A7327B3() - iLocal_62) > 10000) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0)) && iLocal_107 == 0) && iLocal_473 != 600439132) && unk_0xFCF127F1F950630C(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), 100f) == 0) && unk_0xFCF127F1F950630C(iLocal_69, unk_0x68F4C0EC296D3901(iLocal_69, 1), 100f) == 0)
	{
		unk_0x9E5E60D8C63FD9D1();
		if (unk_0x25F7A4D42AF2AB93())
		{
			vVar0 = { unk_0x68F4C0EC296D3901(iLocal_69, 1) };
			if (unk_0x0EB28750412C3A5A(vVar0, vLocal_76, 0) < 1f)
			{
				if (unk_0x0EB28750412C3A5A(vVar0, vLocal_435, 0) > 20f)
				{
					func_42(&iLocal_423, 0);
					iLocal_423 = unk_0x4B72871A3BE7B474(vVar0, 10f, -1063472968, 1, 0, 1);
					if (unk_0xC844350D5D58C99A(iLocal_423))
					{
						vLocal_435 = { unk_0x68F4C0EC296D3901(iLocal_423, 1) };
						func_121(14, 1);
					}
				}
				else if (unk_0x0EB28750412C3A5A(vVar0, vLocal_432, 0) > 20f)
				{
					vLocal_432 = { vVar0 };
					func_121(13, 1);
				}
			}
			vLocal_76 = { unk_0x68F4C0EC296D3901(iLocal_69, 1) };
			iLocal_62 = unk_0x1C0640BA9A7327B3();
		}
	}
}

void func_42(var uParam0, bool bParam1)
{
	if (unk_0xC844350D5D58C99A(*uParam0))
	{
		if (unk_0xBDEB2DEEF1D23A18(*uParam0))
		{
			unk_0x15AFB6CBDE990FB6(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0xEEEE2E5FA6F78DF0(uParam0);
		}
		else
		{
			unk_0xAA2AE6161CB0D2DC(*uParam0);
		}
	}
}

int func_43()
{
	if (Global_111638.f_20113.f_254.f_5)
	{
		if (Global_111638.f_20113.f_254 > 66f)
		{
			return 1;
		}
		else if (Global_111638.f_20113.f_254 > 33f)
		{
			return 0;
		}
		else
		{
			return 2;
		}
	}
	return 2;
}

void func_44()
{
	if (((!unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_94, 7) && !unk_0xFEBC1E4EC9E001F0()) && !func_19()) && !unk_0x991B1F0980C62628())
	{
		unk_0x5D96D8530B3D0904(&(Global_111638.f_10044.f_94), 7);
		func_15("CHOP_H_BALL", -1);
	}
	if (((func_125(unk_0x16F2683693E537C9()) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1)) && func_125(iLocal_69)) && !unk_0x405E212DDE472467(iLocal_69, 1))
	{
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iLocal_473, 1);
		if (((((iLocal_473 == 600439132 || iLocal_473 == -1813897027) || iLocal_473 == -37975472) || iLocal_473 == 741814745) || iLocal_473 == 615608432) || iLocal_473 == 1233104067)
		{
			if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
			{
				func_121(15, 1);
			}
			else if (((unk_0x1C0640BA9A7327B3() - iLocal_63) > 10000 && unk_0x9C66D99E63E8E24C(iLocal_69) < 1f) && func_4(unk_0x16F2683693E537C9(), iLocal_69, 1) < 5f)
			{
				unk_0x3F423BF5B8125A50("creatures@rottweiler@amb@world_dog_barking@enter");
				unk_0x3F423BF5B8125A50("creatures@rottweiler@amb@world_dog_barking@idle_a");
				unk_0x3F423BF5B8125A50("creatures@rottweiler@amb@world_dog_barking@exit");
				if ((unk_0xB4AE0788C1587752("creatures@rottweiler@amb@world_dog_barking@enter") && unk_0xB4AE0788C1587752("creatures@rottweiler@amb@world_dog_barking@idle_a")) && unk_0xB4AE0788C1587752("creatures@rottweiler@amb@world_dog_barking@exit"))
				{
					unk_0xA3BF0AA5A2608191(iLocal_69);
					unk_0xDD353D0E9C789D0E(&uLocal_119);
					unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
					unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@amb@world_dog_barking@enter", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@amb@world_dog_barking@idle_a", "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0xC6EB89C59F2AF6B8(0, "creatures@rottweiler@amb@world_dog_barking@exit", "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x75ABDC5F81978924(uLocal_119);
					unk_0x78ADC381772E3D54(iLocal_69, uLocal_119);
					unk_0xF82EA857DA10E0CD(&uLocal_119);
					iLocal_63 = unk_0x1C0640BA9A7327B3();
				}
			}
		}
	}
}

void func_45()
{
	if (func_16() && !func_46(4))
	{
		if ((func_125(iLocal_69) && iLocal_107 == 0) && unk_0x16102BEDC7435774(iLocal_69))
		{
			unk_0x0A94A109271BE75A(iLocal_69);
		}
		func_121(12, 1);
	}
}

int func_46(int iParam0)
{
	if (func_16())
	{
		iVar0 = 0;
		while (iVar0 < 53)
		{
			if (func_52(iVar0) == iParam0)
			{
				if (func_47(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_47(int iParam0)
{
	return func_48(iParam0, 5, 1);
}

int func_48(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_98796.f_1357[iParam0], iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_10() == 0)
		{
			return unk_0xEAE0D21A50E6C7F4(func_49(func_51(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_50(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_50(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_13();
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

int func_51(int iParam0)
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
			return 9977;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		case 52:
			return 8912;
			break;
		
		case 50:
			return 8265;
			break;
		
		case 51:
			return 8267;
			break;
		
		default:
			break;
	}
	return 11511;
}

int func_52(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
	}
	return 6;
}

void func_53()
{
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
	{
		if (iLocal_60 == -1)
		{
			iLocal_60 = unk_0x1C0640BA9A7327B3();
			iLocal_61 = unk_0x09AC81E49EA267F7(4000, 6000);
		}
		if ((unk_0x1C0640BA9A7327B3() - iLocal_60) > iLocal_61)
		{
			func_122("SNARL");
			iLocal_60 = -1;
		}
	}
}

void func_54()
{
	if (func_125(unk_0x16F2683693E537C9()))
	{
		if (iLocal_107 > 1 && iLocal_107 < 8)
		{
			unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 309, true);
		}
		if (iLocal_117 == 1 && iLocal_107 == 1)
		{
			unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 313, true);
		}
	}
	switch (iLocal_107)
	{
		case 0:
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
			{
				iLocal_478 = unk_0x1C0640BA9A7327B3();
				iLocal_65 = -1;
				iLocal_66 = -1;
				iLocal_57 = unk_0x1C0640BA9A7327B3();
				func_82();
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 32, 0);
				iLocal_491 = 1;
				iLocal_107 = 1;
			}
			else
			{
				if (iLocal_475 != 0)
				{
					iLocal_475 = 0;
				}
				iLocal_337 = 0;
				iLocal_59 = -1;
				if (func_81())
				{
					func_121(3, 1);
				}
			}
			break;
		
		case 1:
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
			{
				iLocal_107 = 15;
			}
			else if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
			{
				if (func_80())
				{
					if (unk_0xA30B8362589C124A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), -1, 0) != unk_0x16F2683693E537C9())
					{
						func_121(3, 1);
					}
					else
					{
						if (!func_125(iLocal_80))
						{
							iLocal_80 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
							func_79();
							func_78();
						}
						unk_0x3F423BF5B8125A50(sLocal_477);
						if (unk_0xB4AE0788C1587752(sLocal_477) && func_125(iLocal_80))
						{
							if (unk_0x16102BEDC7435774(iLocal_69))
							{
								unk_0x0A94A109271BE75A(iLocal_69);
							}
							if (func_77())
							{
								if (iLocal_65 == -1)
								{
									iLocal_65 = unk_0x1C0640BA9A7327B3();
								}
								if (func_76())
								{
									func_75(1);
									iLocal_107 = 6;
								}
								else
								{
									func_74();
								}
							}
							else if (unk_0x3CAA763EEC01ADF7(unk_0x16F2683693E537C9(), iLocal_80, 0, 0, 0))
							{
								if (unk_0x1150BCE24B1630AC(iLocal_80, iLocal_118) || unk_0xF409BCB95E61D4DB(iLocal_80, 1) > 0,9f)
								{
									iLocal_107 = 4;
								}
								else
								{
									iLocal_107 = 2;
								}
							}
							else
							{
								func_75(1);
								iLocal_107 = 6;
							}
						}
					}
				}
				else if (func_22())
				{
					iLocal_107 = 14;
				}
				else
				{
					if (((!unk_0xFEBC1E4EC9E001F0() && !unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_94, 3)) && !func_19()) && !unk_0x991B1F0980C62628())
					{
						unk_0x5D96D8530B3D0904(&(Global_111638.f_10044.f_94), 3);
						func_15("CHOP_H_NOVEH", -1);
					}
					func_121(3, 1);
				}
			}
			else
			{
				if (func_80())
				{
					unk_0x3F423BF5B8125A50("misschop_vehicleenter_exit");
					func_74();
				}
				if (iLocal_337 == 0 && unk_0xDF1306B443CD3D15(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9()), 0))
				{
					unk_0x4E885A246A9D983A(iLocal_69, 185, 0);
					if (unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9()))) && !func_23())
					{
						if (unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9())) == -956048545)
						{
						}
						else if (unk_0xD6DF381716822EFE(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9())) >= 1 && unk_0xBBA8A868118C90ED(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9()), 0, 0))
						{
							if (!func_73())
							{
								func_108("CHOP_RIDE", 0);
							}
						}
					}
					else if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9()))) || func_23())
					{
						func_108("CHOP_FOLLOW", 0);
					}
					iLocal_337 = 1;
				}
			}
			break;
		
		case 2:
			func_72();
			if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
			{
				iLocal_107 = 15;
			}
			else
			{
				unk_0x3F423BF5B8125A50("misschop_vehicleenter_exit");
				if (unk_0xB4AE0788C1587752("misschop_vehicleenter_exit"))
				{
					func_71();
					iLocal_107 = 3;
				}
			}
			break;
		
		case 3:
			func_72();
			if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
			{
				iLocal_107 = 15;
			}
			else if (func_125(iLocal_80) && func_70())
			{
				if (!unk_0x1150BCE24B1630AC(iLocal_80, iLocal_118))
				{
					unk_0x611DFA9294B339CA(iLocal_80, iLocal_118, 0, 0);
				}
				iLocal_489 = unk_0x1C0640BA9A7327B3();
				iLocal_65 = unk_0x1C0640BA9A7327B3();
				iLocal_107 = 4;
			}
			break;
		
		case 4:
			if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
			{
				iLocal_107 = 15;
			}
			else
			{
				unk_0x3F423BF5B8125A50(sLocal_477);
				if (func_125(iLocal_80))
				{
					if (!unk_0x1150BCE24B1630AC(iLocal_80, iLocal_118) && unk_0xF409BCB95E61D4DB(iLocal_80, iLocal_118) < 0,95f)
					{
						unk_0x611DFA9294B339CA(iLocal_80, iLocal_118, 0, 0);
						iLocal_489 = unk_0x1C0640BA9A7327B3();
					}
					if (func_76() && unk_0x1C0640BA9A7327B3() >= iLocal_489 + 300)
					{
						if (!func_113(unk_0x16F2683693E537C9(), -2017877118) && unk_0xB4AE0788C1587752(sLocal_477))
						{
							func_72();
							func_69(1, 1);
							unk_0x327AAEE25F323797(iLocal_69);
							iLocal_108 = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x6BE2EAE992FD7C26(iLocal_108, iLocal_80, unk_0xF653B9B22DA806A9(iLocal_80, "seat_pside_f"));
							unk_0x915804B434753CBD(iLocal_69, iLocal_108, sLocal_477, "get_in", 1000f, -8f, 4, 0, 1148846080, 0);
							unk_0xF895E10BF4C72645(iLocal_69, 0, 0);
							iLocal_107 = 5;
						}
					}
					else
					{
						func_74();
					}
				}
			}
			break;
		
		case 5:
			func_72();
			if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else
			{
				if (unk_0x9F4FE516EAACCFC5(iLocal_486))
				{
					unk_0xB44EF5F9FEAB831B();
				}
				unk_0x3F423BF5B8125A50(sLocal_477);
				if (((unk_0xB4AE0788C1587752(sLocal_477) && unk_0x69DF961355195C3C(iLocal_108)) && unk_0xA45992A6CE82FB43(iLocal_108) > 0,99f) && func_125(iLocal_80))
				{
					func_69(0, 1);
					func_75(0);
					iLocal_107 = 6;
				}
			}
			break;
		
		case 6:
			func_72();
			if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else
			{
				unk_0x3F423BF5B8125A50("misschop_vehicleenter_exit");
				if (unk_0xB4AE0788C1587752("misschop_vehicleenter_exit") && func_125(iLocal_80))
				{
					if ((!unk_0x1150BCE24B1630AC(iLocal_80, iLocal_118) && unk_0xF409BCB95E61D4DB(iLocal_80, 1) > 0,1f) && !func_77())
					{
						func_71();
					}
					iLocal_107 = 7;
				}
			}
			break;
		
		case 7:
			func_72();
			if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else if (func_125(iLocal_80) && func_70())
			{
				if (!unk_0x1150BCE24B1630AC(iLocal_80, iLocal_118))
				{
					unk_0x152BCACCF710B36E(iLocal_80, iLocal_118, 0);
				}
				iLocal_107 = 8;
			}
			break;
		
		case 8:
			func_72();
			func_67(&iLocal_70);
			func_40(1);
			if (iLocal_54 == -1)
			{
				iLocal_54 = unk_0x1C0640BA9A7327B3();
				iLocal_55 = 7000;
			}
			if (func_125(iLocal_80))
			{
				if (func_66())
				{
					func_68(2f, 0f, 0f, 1);
				}
				else if (unk_0x4E861BC5B1EDA7BD(iLocal_80))
				{
					func_68(2f, 0f, 0f, 1);
				}
				else if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
				{
					if (unk_0x9C66D99E63E8E24C(iLocal_80) < 5f)
					{
						if (!unk_0x1150BCE24B1630AC(iLocal_80, iLocal_118))
						{
							unk_0x611DFA9294B339CA(iLocal_80, iLocal_118, 0, 0);
						}
						iLocal_107 = 12;
					}
				}
				else if (unk_0xD245978525608929(2, 75))
				{
					if (unk_0x377BE9A1BF38C7CE(iLocal_80))
					{
						func_68(2f, 0f, 0f, 1);
					}
					else if (func_77())
					{
						iLocal_107 = 9;
					}
					else if (unk_0x3CAA763EEC01ADF7(unk_0x16F2683693E537C9(), iLocal_80, 0, 0, 0))
					{
						unk_0xE0C0351D5B931E37(iLocal_80, 10f, 1, 0);
						if (unk_0x1150BCE24B1630AC(iLocal_80, iLocal_118))
						{
							iLocal_107 = 12;
						}
						else
						{
							iLocal_107 = 10;
						}
					}
					else if (unk_0x3CAA763EEC01ADF7(unk_0x16F2683693E537C9(), iLocal_80, -1, 0, 0))
					{
						unk_0xE0C0351D5B931E37(iLocal_80, 10f, 1, 0);
						func_68(-2f, 0f, 0f, 0);
					}
					else
					{
						unk_0xE0C0351D5B931E37(iLocal_80, 10f, 1, 0);
						func_68(0f, -4f, 0f, 0);
					}
				}
				else
				{
					func_65();
					func_63();
					func_62();
					if (((!unk_0xFEBC1E4EC9E001F0() && !unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_94, 2)) && !func_19()) && !unk_0x991B1F0980C62628())
					{
						unk_0x5D96D8530B3D0904(&(Global_111638.f_10044.f_94), 2);
						func_15("CHOP_H_CAR", -1);
					}
				}
			}
			else
			{
				func_68(2f, 0f, 0f, 1);
			}
			break;
		
		case 9:
			func_72();
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && !func_113(unk_0x16F2683693E537C9(), -828834893))
			{
				unk_0x75CDA8644CD3B5F5(unk_0x16F2683693E537C9(), 0, 0);
			}
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
			{
				func_68(2f, 0f, 0f, 1);
			}
			break;
		
		case 10:
			func_72();
			if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else
			{
				unk_0x3F423BF5B8125A50("misschop_vehicleenter_exit");
				if (unk_0xB4AE0788C1587752("misschop_vehicleenter_exit"))
				{
					func_71();
					iLocal_107 = 11;
				}
			}
			break;
		
		case 11:
			func_72();
			if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else if (func_125(iLocal_80) && func_70())
			{
				if (!unk_0x1150BCE24B1630AC(iLocal_80, iLocal_118))
				{
					unk_0x611DFA9294B339CA(iLocal_80, iLocal_118, 0, 0);
				}
				iLocal_107 = 12;
			}
			break;
		
		case 12:
			func_72();
			unk_0x3F423BF5B8125A50(sLocal_477);
			if ((!func_113(unk_0x16F2683693E537C9(), -2017877118) && unk_0xB4AE0788C1587752(sLocal_477)) && func_125(iLocal_80))
			{
				unk_0x327AAEE25F323797(iLocal_69);
				iLocal_108 = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
				unk_0x6BE2EAE992FD7C26(iLocal_108, iLocal_80, unk_0xF653B9B22DA806A9(iLocal_80, "seat_pside_f"));
				unk_0x915804B434753CBD(iLocal_69, iLocal_108, sLocal_477, "get_out", 1000f, -8f, 10, 0, 1148846080, 0);
				unk_0xF895E10BF4C72645(iLocal_69, 0, 0);
				iLocal_107 = 13;
			}
			break;
		
		case 13:
			func_72();
			if ((unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && (unk_0x1C0640BA9A7327B3() - iLocal_479) > 1500) && !func_113(unk_0x16F2683693E537C9(), -828834893))
			{
				unk_0x75CDA8644CD3B5F5(unk_0x16F2683693E537C9(), 0, 0);
			}
			if (!unk_0x69DF961355195C3C(iLocal_108) || (unk_0x69DF961355195C3C(iLocal_108) && unk_0xA45992A6CE82FB43(iLocal_108) > 0,99f))
			{
				unk_0x585D22FE28143EAA(iLocal_69, iLocal_69, 0f, 5f, 0f, 1f, 20000);
				iLocal_107 = 15;
			}
			break;
		
		case 14:
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				iLocal_107 = 15;
			}
			else
			{
				func_65();
				if (((!unk_0xFEBC1E4EC9E001F0() && !unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_94, 5)) && !func_19()) && !unk_0x991B1F0980C62628())
				{
					unk_0x5D96D8530B3D0904(&(Global_111638.f_10044.f_94), 5);
					func_15("CHOP_H_BIKE", -1);
				}
			}
			break;
		
		case 15:
			func_72();
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				func_57();
				func_99(0, 0, 0);
				unk_0x8D17794CE3273D70("misschop_vehicleenter_exit");
				unk_0x8D17794CE3273D70(sLocal_477);
				iLocal_62 = unk_0x1C0640BA9A7327B3();
				func_56();
				func_55(&iLocal_80);
				iLocal_80 = 0;
				iLocal_54 = -1;
				unk_0xA3BF0AA5A2608191(iLocal_69);
				unk_0xE121AE1BBF90E186(iLocal_69, 0);
				unk_0x4E885A246A9D983A(iLocal_69, 185, 1);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 32, 1);
				func_121(2, 1);
			}
			else if (!func_113(unk_0x16F2683693E537C9(), -828834893))
			{
				unk_0x75CDA8644CD3B5F5(unk_0x16F2683693E537C9(), 0, 0);
			}
			break;
	}
}

void func_55(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		unk_0x437347B10A200C4B(*iParam0, 0);
		if (unk_0xAF6690C489CC6203(*iParam0) && unk_0x9C77D2D0559097F0(*iParam0, 1))
		{
			unk_0x046C362CF15F1935(iParam0);
		}
	}
}

void func_56()
{
	if (((iLocal_491 == 1 && func_125(unk_0x4EF27AB24893425F())) && unk_0xD6DF381716822EFE(unk_0x4EF27AB24893425F()) > 1) && !unk_0x1150BCE24B1630AC(unk_0x4EF27AB24893425F(), iLocal_118))
	{
		unk_0x2EA10555AEBEA739(unk_0x4EF27AB24893425F(), iLocal_118, 0, 1, 0);
	}
}

void func_57()
{
	if ((!unk_0xE4EDC4B0E92C078B(iLocal_70) && func_125(iLocal_69)) && !unk_0x405E212DDE472467(iLocal_69, 1))
	{
		if (func_179(126))
		{
			func_61(139, 0, 0);
		}
		else
		{
			func_61(138, 0, 0);
		}
		iLocal_70 = func_58(iLocal_69, 0, 145);
		unk_0xBC8E0A7390523199(iLocal_70, 273);
	}
}

int func_58(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_59(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_1798[iParam2].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2].f_3));
	}
	return iVar0;
}

int func_59(int iParam0, bool bParam1, bool bParam2)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_60(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_60(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_60(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
	}
	return iVar0;
}

float func_60(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_61(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0].f_11, 0))
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 18);
		if (Global_31143 == 1)
		{
			Global_31144 = 1;
		}
		Global_31143 = 1;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 0);
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 15);
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 3);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_31146[iVar0].f_11), 0);
		unk_0x0674E58A79778E99(&(Global_31146[iVar0].f_11), 15);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0].f_11, 0))
	{
		if (unk_0xE4EDC4B0E92C078B(Global_31146[iVar0].f_19))
		{
			unk_0xCD816869CA451988(1);
			unk_0x142CC44DB769B57E(&(Global_31146[iVar0].f_19));
			unk_0xCD816869CA451988(0);
		}
	}
}

void func_62()
{
	if (func_125(iLocal_69) && func_125(iLocal_80))
	{
		if (iLocal_478 > -1)
		{
			if (((unk_0x1C0640BA9A7327B3() - iLocal_478) > 500 && unk_0x9C66D99E63E8E24C(iLocal_80) > 5f) && unk_0xE608C809F9416F00(iLocal_80))
			{
				unk_0xC6EB89C59F2AF6B8(iLocal_69, sLocal_477, "shunt_from_back", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xF895E10BF4C72645(iLocal_69, 0, 0);
				func_122("GROWL");
				iLocal_478 = -1;
				iLocal_57 = unk_0x1C0640BA9A7327B3();
			}
		}
		else if (!unk_0xB4ECF989E2C1DAC8(iLocal_69, sLocal_477, "shunt_from_back", 3) || (unk_0xB4ECF989E2C1DAC8(iLocal_69, sLocal_477, "shunt_from_back", 3) && unk_0x8CA9406E01C7EE58(iLocal_69, sLocal_477, "shunt_from_back") > 0,98f))
		{
			unk_0xC6EB89C59F2AF6B8(iLocal_69, sLocal_477, "sit", 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0xF895E10BF4C72645(iLocal_69, 0, 0);
			iLocal_478 = unk_0x1C0640BA9A7327B3();
			iLocal_57 = unk_0x1C0640BA9A7327B3();
		}
	}
}

void func_63()
{
	if (iLocal_478 > -1 && (unk_0x1C0640BA9A7327B3() - iLocal_54) > iLocal_55)
	{
		if (((unk_0x0931E02856C8B6A4() == 7 || unk_0x0931E02856C8B6A4() == 8) || unk_0x0931E02856C8B6A4() == 9) || unk_0x0931E02856C8B6A4() == 13)
		{
			func_64();
			iLocal_54 = unk_0x1C0640BA9A7327B3();
			iLocal_55 = unk_0x09AC81E49EA267F7(6000, 8000);
		}
	}
}

void func_64()
{
	if ((unk_0x1C0640BA9A7327B3() - iLocal_57) > 500)
	{
		iLocal_57 = unk_0x1C0640BA9A7327B3();
		if (func_125(iLocal_69) && unk_0x405E212DDE472467(iLocal_69, 0))
		{
			unk_0xDD353D0E9C789D0E(&uLocal_119);
			unk_0xC6EB89C59F2AF6B8(0, sLocal_477, "bark", 4f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xC6EB89C59F2AF6B8(0, sLocal_477, "sit", 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0x75ABDC5F81978924(uLocal_119);
			unk_0x78ADC381772E3D54(iLocal_69, uLocal_119);
			unk_0xF82EA857DA10E0CD(&uLocal_119);
			unk_0xF895E10BF4C72645(iLocal_69, 0, 0);
		}
	}
}

void func_65()
{
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0 && bLocal_395 == 1)
	{
		if (iLocal_59 == -1)
		{
			iLocal_59 = unk_0x1C0640BA9A7327B3();
		}
		if (((unk_0x1C0640BA9A7327B3() - iLocal_59) > 10000 && iLocal_478 > -1) && func_38())
		{
			if (func_35())
			{
				if (func_125(iLocal_69))
				{
					if (unk_0x405E212DDE472467(iLocal_69, 0))
					{
						func_64();
					}
					else
					{
						func_122("BARK");
					}
				}
			}
			iLocal_59 = unk_0x1C0640BA9A7327B3();
		}
	}
}

int func_66()
{
	if (func_125(iLocal_80))
	{
		if (unk_0x70EED0761B82965E(iLocal_80))
		{
			vVar1 = { unk_0x68F4C0EC296D3901(iLocal_80, 1) };
			if (iLocal_68 == -1)
			{
				iLocal_68 = unk_0x1C0640BA9A7327B3();
			}
			if (unk_0x0A829A23AC042EDE(vVar1, &fVar0))
			{
				if ((fVar0 - vVar1.z) > 1f)
				{
					return 1;
				}
				else if ((unk_0x1C0640BA9A7327B3() - iLocal_68) > 3000)
				{
					func_122("AGITATED");
					iLocal_68 = unk_0x1C0640BA9A7327B3();
				}
			}
		}
		else
		{
			iLocal_68 = -1;
		}
	}
	return 0;
}

void func_67(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x661342B9651D16E2(*iParam0, 0);
		unk_0x142CC44DB769B57E(iParam0);
	}
}

void func_68(vector3 vParam0, int iParam3)
{
	if (func_125(unk_0x16F2683693E537C9()) && func_125(iLocal_69))
	{
		if (func_125(iLocal_80))
		{
			if ((iParam3 == 1 && !unk_0x1150BCE24B1630AC(iLocal_80, iLocal_118)) && unk_0xF409BCB95E61D4DB(iLocal_80, 1) < 0,9f)
			{
				unk_0x611DFA9294B339CA(iLocal_80, iLocal_118, 0, 0);
			}
			if (unk_0x69DF961355195C3C(iLocal_108))
			{
				unk_0xB46854F2D1C7DFA9(iLocal_108);
			}
			unk_0x327AAEE25F323797(iLocal_69);
			func_124(iLocal_69, unk_0x68E4ADDDDCD7BDDE(iLocal_80, vParam0), unk_0xD9522BA9E27E1349(iLocal_69), 1, 0);
			unk_0xF895E10BF4C72645(iLocal_69, 0, 0);
			func_69(0, 0);
			iLocal_107 = 15;
		}
		else
		{
			if (unk_0x69DF961355195C3C(iLocal_108))
			{
				unk_0xB46854F2D1C7DFA9(iLocal_108);
			}
			unk_0x327AAEE25F323797(iLocal_69);
			func_124(iLocal_69, unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), (vParam0.x + 1f), vParam0.y, vParam0.z), unk_0xD9522BA9E27E1349(iLocal_69), 1, 0);
			unk_0xF895E10BF4C72645(iLocal_69, 0, 0);
			func_69(0, 0);
			iLocal_107 = 15;
		}
	}
}

void func_69(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		if (!unk_0x9F4FE516EAACCFC5(iLocal_486) && func_125(iLocal_80))
		{
			iVar6 = unk_0x09AC81E49EA267F7(0, 4);
			if (iVar6 == 0)
			{
				vVar0 = { 1,11573f, -1,40338f, 0,555789f };
				vVar3 = { 0,5f, 0f, 0,3f };
			}
			else if (iVar6 == 1)
			{
				vVar0 = { -1,15872f, 1,75252f, 0,761228f };
				vVar3 = { 0f, 0f, 0,3f };
			}
			else if (iVar6 == 2)
			{
				vVar0 = { -1,89975f, 0,339287f, 0,661881f };
				vVar3 = { 0f, 0f, 0,3f };
			}
			else
			{
				vVar0 = { 1,38134f, -0,1248f, 0,580783f };
				vVar3 = { 0f, 0f, 0,3f };
			}
			iLocal_486 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", 1);
			vVar7 = { unk_0xBF584557291FDD31(iLocal_80, unk_0xF653B9B22DA806A9(iLocal_80, "seat_pside_f")) };
			vVar10 = { unk_0x5293C88BD2F4DE13(iLocal_80, vVar7) };
			vVar13 = { vVar0 + vVar10 };
			unk_0xC5940439E4EB9A33(iLocal_486, iLocal_80, vVar13, 1);
			unk_0x1305278186D1C53E(iLocal_486, iLocal_80, vVar10 + vVar3, 1);
			unk_0x5818C8D5303DCCF8(iLocal_486, 50f);
			unk_0x91F5B0244AAE6222(iLocal_486, "HAND_SHAKE", 0,3f);
			unk_0xCDF7F7CB6C57CEDE(iLocal_486, 0f, 0f, 100000f, 100000f);
			unk_0xB3A1B75CB59FEB56(1, 0, 3000, 1, 0, 0);
		}
	}
	else if (unk_0x9F4FE516EAACCFC5(iLocal_486))
	{
		if (iParam1 == 1)
		{
			unk_0xEF6276132B396452(0f, 1065353216);
			unk_0x2FB9A57162E54BAB(0f);
		}
		unk_0xB3A1B75CB59FEB56(0, 0, 3000, 1, 0, 0);
		unk_0x5CAFA5DD13658DFE(0);
	}
}

int func_70()
{
	if (func_125(iLocal_80))
	{
		if (((unk_0x1C0640BA9A7327B3() - iLocal_479) > 500 || unk_0x1150BCE24B1630AC(iLocal_80, iLocal_118)) || func_77())
		{
			return 1;
		}
	}
	return 0;
}

void func_71()
{
	unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "misschop_vehicleenter_exit", sLocal_476, 8f, -8f, -1, 40, 0, 0, 0, 0);
	iLocal_479 = unk_0x1C0640BA9A7327B3();
}

void func_72()
{
	unk_0x38C3A68D7861DCFD(0, 75, 1);
	unk_0x38C3A68D7861DCFD(0, 23, 1);
}

int func_73()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

void func_74()
{
	if (!func_113(iLocal_69, 713668775) && func_4(unk_0x16F2683693E537C9(), iLocal_69, 1) > 1f)
	{
		unk_0x96167B03C5A77156(iLocal_69, unk_0x68E4ADDDDCD7BDDE(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 1), 2f, 0f, 0f), 2f, 20000, 1048576000, 0, 1193033728);
	}
}

void func_75(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEF6276132B396452(0f, 1065353216);
		unk_0x2FB9A57162E54BAB(0f);
	}
	func_67(&iLocal_70);
	unk_0xE121AE1BBF90E186(iLocal_69, 1);
	unk_0xF821F915BC24D246(iLocal_69, iLocal_80, 0);
	unk_0xC6EB89C59F2AF6B8(iLocal_69, sLocal_477, "sit", 8f, -8f, -1, 1, 0, 0, 0, 0);
	unk_0xF895E10BF4C72645(iLocal_69, 0, 0);
}

int func_76()
{
	if (func_125(iLocal_80) && func_125(iLocal_69))
	{
		if (iLocal_66 == -1)
		{
			fVar0 = func_4(iLocal_80, iLocal_69, 1);
			iLocal_66 = floor((fVar0 * 1000f));
			if (iLocal_66 < 5000)
			{
				iLocal_66 = 5000;
			}
		}
		if (((func_39(iLocal_69, unk_0x68E4ADDDDCD7BDDE(iLocal_80, 2f, 0f, 0f), 0) < 1f || unk_0x06F8112AA79C53D9(0, 71)) || unk_0x06F8112AA79C53D9(0, 72)) || (iLocal_65 > -1 && (unk_0x1C0640BA9A7327B3() - iLocal_65) > iLocal_66))
		{
			return 1;
		}
	}
	return 0;
}

int func_77()
{
	if (func_125(iLocal_80))
	{
		iVar0 = unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 1));
		if (((((((((((((((((((((((iVar0 == 1283517198 || iVar0 == -823509173) || iVar0 == 1074326203) || iVar0 == 850991848) || iVar0 == -713569950) || iVar0 == -2072933068) || iVar0 == 1518533038) || iVar0 == -784816453) || iVar0 == 475220373) || iVar0 == 569305213) || iVar0 == -2007026063) || iVar0 == -2137348917) || iVar0 == 2112052861) || iVar0 == -1205689942) || iVar0 == -1705304628) || iVar0 == -1700801569) || iVar0 == 1747439474) || iVar0 == -214455498) || iVar0 == 48339065) || iVar0 == -947761570) || iVar0 == -1323100960) || iVar0 == -442313018) || iVar0 == unk_0x12AB0310C2281427("monster")) || iVar0 == unk_0x12AB0310C2281427("marshall"))
		{
			return 1;
		}
	}
	return 0;
}

void func_78()
{
	if (func_125(iLocal_80))
	{
		iVar0 = unk_0x134B62B726CEC8E6(iLocal_80);
		if (iVar0 == -2072933068)
		{
			iLocal_118 = 0;
		}
		else
		{
			iLocal_118 = 1;
		}
	}
}

void func_79()
{
	if (func_125(iLocal_80))
	{
		iLocal_475 = unk_0x1F099C9E2AE4874D(iLocal_80);
		switch (iLocal_475)
		{
			case -1965057835:
			case 919485892:
			case -1838563680:
			case 1768419516:
			case 1576485197:
			case 929009548:
			case -497732145:
			case -1659990386:
			case -662028469:
			case 1939145032:
				sLocal_477 = "creatures@rottweiler@in_vehicle@van";
				sLocal_476 = "van_ds_open_door_for_chop";
				break;
			
			case -2066252141:
			case 1105669833:
			case 542797648:
			case 68566729:
			case -1887744178:
			case -782720499:
			case -1150063973:
			case 1630950849:
			case -463340997:
			case 2033852426:
				sLocal_477 = "creatures@rottweiler@in_vehicle@low_car";
				sLocal_476 = "low_ds_open_door_for_chop";
				break;
			
			case 434478421:
			case 1816176348:
			case 1710903184:
			case 1663892749:
				sLocal_477 = "creatures@rottweiler@in_vehicle@4x4";
				sLocal_476 = "std_ds_open_door_for_chop";
				break;
			
			default:
				sLocal_477 = "creatures@rottweiler@in_vehicle@std_car";
				sLocal_476 = "std_ds_open_door_for_chop";
				break;
		}
		if (unk_0x134B62B726CEC8E6(iLocal_80) == -1479664699)
		{
			sLocal_477 = "creatures@rottweiler@in_vehicle@4x4";
			sLocal_476 = "std_ds_open_door_for_chop";
		}
	}
}

int func_80()
{
	if ((((((((unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0)) && !unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9())) && !unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9())) && !unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9())) && !unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9())) && unk_0xD6DF381716822EFE(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)) >= 1) && unk_0xBBA8A868118C90ED(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0, 0)) && !func_23())
	{
		return 1;
	}
	return 0;
}

int func_81()
{
	if (unk_0x31609A585163CBAC(unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9())))
	{
		if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0xFBD08BECC9B87937(-14,5f, -1437,2f, 31,1f))
		{
			return 1;
		}
		if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0xFBD08BECC9B87937(7,6f, 537,3f, 176f))
		{
			return 1;
		}
		if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0xFBD08BECC9B87937(130,2632f, -1295,035f, 28,2695f))
		{
			return 1;
		}
	}
	return 0;
}

void func_82()
{
	vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
	vVar3 = { unk_0x68E4ADDDDCD7BDDE(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 1), 2f, 0f, 0f) };
	vVar9 = { vVar3 - vVar0 };
	vVar6 = { unk_0x68E4ADDDDCD7BDDE(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 1), -2f, 0f, 0f) };
	vVar12 = { vVar6 - vVar0 };
	if (vmag(vVar9) < vmag(vVar12))
	{
		iLocal_117 = 1;
	}
	else
	{
		iLocal_117 = 0;
	}
}

void func_83()
{
	if ((iLocal_339 != 5 || (unk_0x1C0640BA9A7327B3() - iLocal_340) < 1000) || bLocal_395 == 0)
	{
		return;
	}
	func_97();
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < 102)
	{
		if (func_96(iVar4))
		{
			vVar0 = { func_95(iVar4, 1) };
			if (!func_94(vVar0))
			{
				fVar3 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iLocal_69, 1), vVar0, 1);
				if (fVar3 < fLocal_347[2] && fVar3 < fLocal_392)
				{
					iLocal_341[2] = iVar4;
					fLocal_347[2] = fVar3;
					vLocal_353[2] = { func_95(iVar4, 0) };
					vLocal_369[2] = { vVar0 };
				}
			}
		}
		iVar4++;
	}
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < 76)
	{
		if (func_93(iVar4))
		{
			vVar0 = { func_92(iVar4, 1) };
			if (!func_94(vVar0))
			{
				fVar3 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iLocal_69, 1), vVar0, 1);
				if (fVar3 < fLocal_347[1] && fVar3 < fLocal_392)
				{
					iLocal_341[1] = iVar4;
					fLocal_347[1] = fVar3;
					vLocal_353[1] = { func_92(iVar4, 0) };
					vLocal_369[1] = { vVar0 };
				}
			}
		}
		iVar4++;
	}
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < 45)
	{
		if (func_91(iVar4))
		{
			vVar0 = { func_90(iVar4, 1) };
			if (!func_94(vVar0))
			{
				fVar3 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iLocal_69, 1), vVar0, 1);
				if (fVar3 < fLocal_347[0] && fVar3 < fLocal_392)
				{
					iLocal_341[0] = iVar4;
					fLocal_347[0] = fVar3;
					vLocal_353[0] = { func_90(iVar4, 0) };
					vLocal_369[0] = { vVar0 };
				}
			}
		}
		iVar4++;
	}
	if (func_89())
	{
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 50)
		{
			if (!func_26(iVar4) && func_88(iVar4))
			{
				vVar0 = { func_87(iVar4, 1) };
				if (!func_94(vVar0))
				{
					fVar3 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iLocal_69, 1), vVar0, 1);
					if (fVar3 < fLocal_347[3] && fVar3 < fLocal_392)
					{
						iLocal_341[3] = iVar4;
						fLocal_347[3] = fVar3;
						vLocal_353[3] = { func_87(iVar4, 0) };
						vLocal_369[3] = { vVar0 };
					}
				}
			}
			iVar4++;
		}
	}
	if (func_86())
	{
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 50)
		{
			if (!func_25(iVar4) && func_85(iVar4))
			{
				vVar0 = { func_84(iVar4, 1) };
				if (!func_94(vVar0))
				{
					fVar3 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iLocal_69, 1), vVar0, 1);
					if (fVar3 < fLocal_347[4] && fVar3 < fLocal_392)
					{
						iLocal_341[4] = iVar4;
						fLocal_347[4] = fVar3;
						vLocal_353[4] = { func_84(iVar4, 0) };
						vLocal_369[4] = { vVar0 };
					}
				}
			}
			iVar4++;
		}
	}
	iLocal_340 = unk_0x1C0640BA9A7327B3();
}

Vector3 func_84(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1219f, -3495,9f, 12,9448f;
			break;
		
		case 1:
			if (iParam1 == 1)
			{
				return 606,8925f, -3250,188f, 5,06951f;
			}
			else
			{
				return 634,5865f, -3232,79f, -16,5774f;
			}
			break;
		
		case 2:
			return 1590,6f, -2810,174f, 3,4494f;
			break;
		
		case 3:
			if (iParam1 == 1)
			{
				return 327,99f, -2757,61f, 4,99f;
			}
			else
			{
				return 338,4039f, -2762,106f, 42,6543f;
			}
			break;
		
		case 4:
			if (iParam1 == 1)
			{
				return 1134,422f, -2607,024f, 14,77071f;
			}
			else
			{
				return 1133,688f, -2605,073f, 14,9729f;
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 368,9316f, -2118,533f, 15,40341f;
			}
			else
			{
				return 369,945f, -2116,756f, 16,1688f;
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				return 1741,82f, -1623,85f, 111,41f;
			}
			else
			{
				return 1742,024f, -1618,777f, 111,8313f;
			}
			break;
		
		case 7:
			return 287,7294f, -1444,4f, 45,5095f;
			break;
		
		case 8:
			return 17,5926f, -1213,207f, 28,3678f;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return -910,0172f, -1147,44f, 1,06785f;
			}
			else
			{
				return -900,3597f, -1165,551f, 31,8047f;
			}
			break;
		
		case 10:
			if (iParam1 == 1)
			{
				return 1237,728f, -1099,15f, 37,52579f;
			}
			else
			{
				return 1231,973f, -1102,308f, 34,4289f;
			}
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 87,69075f, 810,3736f, 210,1258f;
			}
			else
			{
				return 81,2213f, 814,0283f, 213,2917f;
			}
			break;
		
		case 12:
			if (iParam1 == 1)
			{
				return -1900,951f, 1389,582f, 218,1509f;
			}
			else
			{
				return -1907,515f, 1388,69f, 217,9728f;
			}
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 467,369f, -730,7552f, 26,36373f;
			}
			else
			{
				return 469,8529f, -730,8f, 26,3985f;
			}
			break;
		
		case 14:
			return 202,1081f, -569,7198f, 128,18f;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 163,0531f, -566,3394f, 21,029f;
			}
			else
			{
				return 159,39f, -563,82f, 21f;
			}
			break;
		
		case 16:
			if (iParam1 == 1)
			{
				return -1183,152f, -518,5386f, 38,53018f;
			}
			else
			{
				return -1182,538f, -525,5859f, 39,9114f;
			}
			break;
		
		case 17:
			return -228,0476f, -236,4184f, 49,1361f;
			break;
		
		case 18:
			return -407,7026f, -151,7918f, 63,5505f;
			break;
		
		case 19:
			if (iParam1 == 1)
			{
				return -1169,397f, -56,76701f, 44,45705f;
			}
			else
			{
				return -1175,488f, -65,4649f, 44,6563f;
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
				return 1679,056f, 39,44059f, 160,7736f;
			}
			else
			{
				return 1684,664f, 40,7142f, 153,4074f;
			}
			break;
		
		case 21:
			if (iParam1 == 1)
			{
				return 1964,25f, 553,68f, 160,72f;
			}
			else
			{
				return 1965,58f, 555,99f, 160,79f;
			}
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 24,21706f, 637,1212f, 206,3897f;
			}
			else
			{
				return 22,4492f, 638,8155f, 189,6085f;
			}
			break;
		
		case 23:
			return 2901,204f, 796,1192f, 3,3556f;
			break;
		
		case 24:
			if (iParam1 == 1)
			{
				return -1531,895f, 870,3203f, 180,6775f;
			}
			else
			{
				return -1529,722f, 871,4257f, 180,6421f;
			}
			break;
		
		case 25:
			return -404,3191f, 1100,889f, 331,535f;
			break;
		
		case 26:
			return -2809,354f, 1449,643f, 99,928f;
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 3144,045f, 2184,413f, -5,2961f;
			}
			else
			{
				return 3144,045f, 2184,413f, -5,2961f;
			}
			break;
		
		case 28:
			return 815,7574f, 1850,879f, 120,1796f;
			break;
		
		case 29:
			return -1944,24f, 1941,07f, 162,8f;
			break;
		
		case 30:
			if (iParam1 == 1)
			{
				return -1452,23f, 2127,41f, 42,84f;
			}
			else
			{
				return -1436,87f, 2130,22f, 26,78f;
			}
			break;
		
		case 31:
			return 1367,413f, 2180,632f, 96,6914f;
			break;
		
		case 32:
			if (iParam1 == 1)
			{
				return 170,1652f, 2217,637f, 89,30811f;
			}
			else
			{
				return 172,1426f, 2220,131f, 89,7842f;
			}
			break;
		
		case 33:
			return 889,3209f, 2870,052f, 55,2834f;
			break;
		
		case 34:
			if (iParam1 == 1)
			{
				return 1980,2f, 2914,79f, 45,48f;
			}
			else
			{
				return 1963,55f, 2922,81f, 57,76f;
			}
			break;
		
		case 35:
			return -390,384f, 2963,26f, 18,2713f;
			break;
		
		case 36:
			return 71,6642f, 3279,368f, 30,3918f;
			break;
		
		case 37:
			return 1924,186f, 3471,256f, 50,3238f;
			break;
		
		case 38:
			return -583,1569f, 3580,375f, 266,2471f;
			break;
		
		case 39:
			if (iParam1 == 1)
			{
				return 2514,302f, 3789,519f, 52,077f;
			}
			else
			{
				return 2516,98f, 3789,35f, 53,79f;
			}
			break;
		
		case 40:
			if (iParam1 == 1)
			{
				return 1517,613f, 3803,926f, 30,95605f;
			}
			else
			{
				return 1486,047f, 3857,217f, 22,2905f;
			}
			break;
		
		case 41:
			if (iParam1 == 1)
			{
				return -530,2739f, 4474,358f, 59,45993f;
			}
			else
			{
				return -528,8246f, 4440,644f, 31,7384f;
			}
			break;
		
		case 42:
			if (iParam1 == 1)
			{
				return 3815,055f, 4447,343f, 2,06631f;
			}
			else
			{
				return 3820,813f, 4441,683f, 1,8007f;
			}
			break;
		
		case 43:
			if (iParam1 == 1)
			{
				return -1946,95f, 4584,36f, 56,06f;
			}
			else
			{
				return -1943,055f, 4585,194f, 46,6362f;
			}
			break;
		
		case 44:
			return 2437,545f, 4779,959f, 33,5101f;
			break;
		
		case 45:
			return -1441,495f, 5414,888f, 23,3f;
			break;
		
		case 46:
			return 2196,251f, 5599,034f, 52,7129f;
			break;
		
		case 47:
			if (iParam1 == 1)
			{
				return -503,95f, 5673,55f, 51,24f;
			}
			else
			{
				return -503,2193f, 5665,61f, 48,8487f;
			}
			break;
		
		case 48:
			if (iParam1 == 1)
			{
				return -378,4192f, 6080,782f, 30,44296f;
			}
			else
			{
				return -381,291f, 6086,949f, 38,6147f;
			}
			break;
		
		case 49:
			return 440,9546f, 6459,642f, 27,7432f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_85(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 14:
		case 18:
		case 25:
			return 0;
			break;
		
		case 16:
			if (unk_0xEAE0D21A50E6C7F4(Global_30926, 7))
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_86()
{
	return Global_111638.f_10044.f_125.f_2;
}

Vector3 func_87(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 1)
			{
				return 1034,274f, -3026,275f, 4,90197f;
			}
			else
			{
				return 1026,705f, -3026,052f, 13,3323f;
			}
			break;
		
		case 1:
			if (iParam1 == 1)
			{
				return -1040,979f, -2743,509f, 12,94983f;
			}
			else
			{
				return -1048,604f, -2734,218f, 12,8895f;
			}
			break;
		
		case 2:
			if (iParam1 == 1)
			{
				return -93,9012f, -2711,314f, 5,01752f;
			}
			else
			{
				return -81,1199f, -2726,511f, 7,74f;
			}
			break;
		
		case 3:
			return -917,6909f, -2527,384f, 22,3218f;
			break;
		
		case 4:
			if (iParam1 == 1)
			{
				return 746,45f, -2310,32f, 26,03f;
			}
			else
			{
				return 748,922f, -2298,114f, 19,624f;
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 1509,742f, -2126,038f, 75,21973f;
			}
			else
			{
				return 1509,099f, -2120,551f, 75,61f;
			}
			break;
		
		case 6:
			return 76,0032f, -1970,475f, 20,1302f;
			break;
		
		case 7:
			if (iParam1 == 1)
			{
				return -1,82327f, -1732,614f, 28,29367f;
			}
			else
			{
				return 0,067f, -1734,027f, 30,606f;
			}
			break;
		
		case 8:
			if (iParam1 == 1)
			{
				return -1377,766f, -1409,837f, 4,63205f;
			}
			else
			{
				return -1380,491f, -1404,374f, 1,7273f;
			}
			break;
		
		case 9:
			return 2864,808f, -1372,84f, 1,3151f;
			break;
		
		case 10:
			return -1035,812f, -1273,077f, 0,8919f;
			break;
		
		case 11:
			return -1821,136f, -1201,36f, 18,1698f;
			break;
		
		case 12:
			return 643,0116f, -1035,65f, 35,8891f;
			break;
		
		case 13:
			return -119,0616f, -977,2228f, 303,23f;
			break;
		
		case 14:
			if (iParam1 == 1)
			{
				return -1243,104f, -507,8057f, 30,10775f;
			}
			else
			{
				return -1238,766f, -506,7138f, 37,6019f;
			}
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 83,79993f, -431,9302f, 36,55315f;
			}
			else
			{
				return 86,4f, -433,9f, 36f;
			}
			break;
		
		case 16:
			return 1095,953f, -210,4642f, 54,9477f;
			break;
		
		case 17:
			return -1724,522f, -196f, 57,2387f;
			break;
		
		case 18:
			return 265,374f, -199,546f, 60,795f;
			break;
		
		case 19:
			if (iParam1 == 1)
			{
				return -3020,475f, 36,55431f, 9,11777f;
			}
			else
			{
				return -3021,4f, 38f, 10,2945f;
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
				return -347,5277f, 53,37161f, 52,97814f;
			}
			else
			{
				return -347,3f, 54,865f, 53,921f;
			}
			break;
		
		case 21:
			return 1052,248f, 167,611f, 87,7406f;
			break;
		
		case 22:
			return -2303,798f, 217,4301f, 166,6017f;
			break;
		
		case 23:
			return -138,9423f, 868,3885f, 231,6956f;
			break;
		
		case 24:
			if (iParam1 == 1)
			{
				return 688,1073f, 1204,671f, 323,3438f;
			}
			else
			{
				return 682,4505f, 1204,928f, 344,3322f;
			}
			break;
		
		case 25:
			return -1548,763f, 1380,173f, 125,3728f;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return -432,14f, 1598,46f, 355,73f;
			}
			else
			{
				return -432,0034f, 1597,129f, 356,613f;
			}
			break;
		
		case 27:
			return 3081,93f, 1648,29f, 2,42f;
			break;
		
		case 28:
			return -594,38f, 2092f, 130,57f;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 3069,213f, 2160,988f, 1,1327f;
			}
			else
			{
				return 3063,583f, 2212,63f, 2,5863f;
			}
			break;
		
		case 30:
			return 180,21f, 2263,83f, 91,87f;
			break;
		
		case 31:
			if (iParam1 == 1)
			{
				return 926,96f, 2445,36f, 49,09f;
			}
			else
			{
				return 929,6946f, 2444,115f, 48,43f;
			}
			break;
		
		case 32:
			if (iParam1 == 1)
			{
				return -2380,212f, 2655,176f, 0,832f;
			}
			else
			{
				return -2379,948f, 2656,953f, 1,4906f;
			}
			break;
		
		case 33:
			return -861,38f, 2753,3f, 12,867f;
			break;
		
		case 34:
			return -289,0195f, 2848,853f, 53,331f;
			break;
		
		case 35:
			if (iParam1 == 1)
			{
				return 288,8409f, 2871,912f, 42,6422f;
			}
			else
			{
				return 265,7415f, 2866,416f, 73,19f;
			}
			break;
		
		case 36:
			if (iParam1 == 1)
			{
				return 1297,378f, 2988,71f, 40,11787f;
			}
			else
			{
				return 1294,2f, 3001,9f, 57,7f;
			}
			break;
		
		case 37:
			return 1568,65f, 3572,8f, 32,294f;
			break;
		
		case 38:
			return -1608,62f, 4274,25f, 102,95f;
			break;
		
		case 39:
			if (iParam1 == 1)
			{
				return -3,51812f, 4332,451f, 31,21602f;
			}
			else
			{
				return -1,9585f, 4334,787f, 32,3702f;
			}
			break;
		
		case 40:
			return 1336,737f, 4307,2f, 37,1325f;
			break;
		
		case 41:
			if (iParam1 == 1)
			{
				return -1007,103f, 4836,936f, 268,5488f;
			}
			else
			{
				return -1001,48f, 4851,322f, 273,6112f;
			}
			break;
		
		case 42:
			return 1877,09f, 5078,98f, 50,49f;
			break;
		
		case 43:
			if (iParam1 == 1)
			{
				return 3366,099f, 5182,461f, 0,68317f;
			}
			else
			{
				return 3436,453f, 5176,911f, 6,386f;
			}
			break;
		
		case 44:
			if (iParam1 == 1)
			{
				return -576,12f, 5472,24f, 59,28f;
			}
			else
			{
				return -578,8057f, 5470,164f, 59,0295f;
			}
			break;
		
		case 45:
			return 444,6518f, 5571,781f, 780,1888f;
			break;
		
		case 46:
			return -402,9948f, 6319,279f, 31,2256f;
			break;
		
		case 47:
			return 1439,599f, 6335,208f, 22,9485f;
			break;
		
		case 48:
			if (iParam1 == 1)
			{
				return 1466,109f, 6552,266f, 12,95773f;
			}
			else
			{
				return 1469,632f, 6552,174f, 13,6854f;
			}
			break;
		
		case 49:
			if (iParam1 == 1)
			{
				return 66,19278f, 6668,888f, 30,80633f;
			}
			else
			{
				return 66,7136f, 6663,198f, 30,7821f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_88(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 9:
		case 10:
		case 13:
		case 27:
		case 38:
			return 0;
			break;
		
		case 14:
			if (unk_0xEAE0D21A50E6C7F4(Global_30926, 7))
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_89()
{
	return Global_111638.f_10044.f_122.f_2;
}

Vector3 func_90(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return 473,1829f, -2643,184f, 4,7209f;
			break;
		
		case 1:
			if (bParam1 == 1)
			{
				return 291,41f, -2090,78f, 16,29f;
			}
			else
			{
				return 289,2062f, -2091,221f, 16,0234f;
			}
			break;
		
		case 2:
			if (bParam1 == 1)
			{
				return 1173,839f, -1499,781f, 33,84875f;
			}
			else
			{
				return 1173,566f, -1495,763f, 34,1121f;
			}
			break;
		
		case 3:
			if (bParam1 == 1)
			{
				return -461,7139f, -1699,202f, 17,85122f;
			}
			else
			{
				return -462f, -1701f, 18,8f;
			}
			break;
		
		case 4:
			return -1384,628f, -521,0416f, 30,084f;
			break;
		
		case 5:
			return -521,5692f, -601,7532f, 29,4482f;
			break;
		
		case 6:
			return -664,5f, 165,4552f, 58,3821f;
			break;
		
		case 7:
			return 329,3609f, -190,5986f, 53,2262f;
			break;
		
		case 8:
			if (bParam1 == 1)
			{
				return -477,44f, -1052,99f, 39,81f;
			}
			else
			{
				return -478,7744f, -1051,079f, 40,93f;
			}
			break;
		
		case 9:
			return -1268,071f, -1917,408f, 4,8583f;
			break;
		
		case 10:
			return -1221,908f, -2771,762f, 13,0545f;
			break;
		
		case 11:
			return -3088,668f, 652,9629f, 0,989f;
			break;
		
		case 12:
			if (bParam1 == 1)
			{
				return -629,3048f, 2036,067f, 157,3307f;
			}
			else
			{
				return -627,2166f, 2035,032f, 157,5585f;
			}
			break;
		
		case 13:
			if (bParam1 == 1)
			{
				return -2071,903f, 3411,504f, 30,36414f;
			}
			else
			{
				return -2048,483f, 3406,162f, 31,1504f;
			}
			break;
		
		case 14:
			return -424,0321f, 4012,767f, 80,4744f;
			break;
		
		case 15:
			return 1983,1f, 5174,5f, 47,6f;
			break;
		
		case 16:
			if (bParam1 == 1)
			{
				return 2341,1f, 2576f, 45,7f;
			}
			else
			{
				return 2340,17f, 2573,89f, 45,77f;
			}
			break;
		
		case 17:
			if (bParam1 == 1)
			{
				return 1663,9f, -25,91945f, 172,7747f;
			}
			else
			{
				return 1663,96f, -24,1101f, 172,7747f;
			}
			break;
		
		case 18:
			if (bParam1 == 1)
			{
				return 2614,451f, 1695,127f, 26,59907f;
			}
			else
			{
				return 2617,729f, 1693,417f, 30,8743f;
			}
			break;
		
		case 19:
			if (bParam1 == 1)
			{
				return -187,31f, 1545,16f, 314,07f;
			}
			else
			{
				return -187,0338f, 1555,677f, 321,2431f;
			}
			break;
		
		case 20:
			if (bParam1 == 1)
			{
				return 859,5025f, 2426,04f, 53,18517f;
			}
			else
			{
				return 868,7573f, 2423,536f, 60,8942f;
			}
			break;
		
		case 21:
			if (bParam1 == 1)
			{
				return -1822,075f, 805,7814f, 137,7265f;
			}
			else
			{
				return -1822,967f, 803,8147f, 138,2005f;
			}
			break;
		
		case 22:
			if (bParam1 == 1)
			{
				return -1852,922f, 2054,42f, 139,9841f;
			}
			else
			{
				return -1851,628f, 2053,836f, 139,9841f;
			}
			break;
		
		case 23:
			if (bParam1 == 1)
			{
				return -1075,515f, 4898,497f, 213,2767f;
			}
			else
			{
				return -1070,651f, 4898,934f, 213,2752f;
			}
			break;
		
		case 24:
			if (bParam1 == 1)
			{
				return 1301,56f, 4306,6f, 36,39f;
			}
			else
			{
				return 1300,1f, 4308,1f, 37,3f;
			}
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return -436,44f, 5983,5f, 30,49f;
			}
			else
			{
				return -437,94f, 5985,04f, 31,29f;
			}
			break;
		
		case 26:
			if (bParam1 == 1)
			{
				return 1840,569f, 3693,77f, 33,2668f;
			}
			else
			{
				return 1838,577f, 3692,028f, 33,6172f;
			}
			break;
		
		case 27:
			return 533,1f, -23,8f, 70,6f;
			break;
		
		case 28:
			if (bParam1 == 1)
			{
				return 445,83f, -986,48f, 29,69f;
			}
			else
			{
				return 446,4f, -988,5f, 29,77f;
			}
			break;
		
		case 29:
			return -1119,498f, -847,3371f, 18,6886f;
			break;
		
		case 30:
			return 391,2f, -1603,9f, 28,38f;
			break;
		
		case 31:
			return -890,8f, -2386,2f, 13,4f;
			break;
		
		case 32:
			if (bParam1 == 1)
			{
				return 282,75f, 953,05f, 209,95f;
			}
			else
			{
				return 284,7f, 954,2f, 210,1514f;
			}
			break;
		
		case 33:
			return -2003,115f, 544,7549f, 114,5077f;
			break;
		
		case 34:
			if (bParam1 == 1)
			{
				return -397,5786f, 1127,353f, 321,7291f;
			}
			else
			{
				return -386,8739f, 1142,42f, 321,5892f;
			}
			break;
		
		case 35:
			return -1521,811f, 1560,201f, 106,9392f;
			break;
		
		case 36:
			return 1391,945f, 3616,655f, 37,9259f;
			break;
		
		case 37:
			if (bParam1 == 1)
			{
				return 45,37f, -1911,45f, 20,79f;
			}
			else
			{
				return 40,5177f, -1910,727f, 20,9706f;
			}
			break;
		
		case 38:
			if (bParam1 == 1)
			{
				return 68,14f, 3749,36f, 38,73f;
			}
			else
			{
				return 70,3786f, 3755,605f, 38,7487f;
			}
			break;
		
		case 39:
			return 119,45f, -755,29f, 258,15f;
			break;
		
		case 40:
			if (bParam1 == 1)
			{
				return 156,35f, -1192,1f, 28,37f;
			}
			else
			{
				return 160,4134f, -1191,7f, 28,87f;
			}
			break;
		
		case 41:
			return 23,9296f, -633,9206f, 6,5084f;
			break;
		
		case 42:
			if (bParam1 == 1)
			{
				return 31,67f, 6542,78f, 30,44f;
			}
			else
			{
				return 30,9162f, 6546,791f, 30,4058f;
			}
			break;
		
		case 43:
			if (bParam1)
			{
				return 1333,057f, 4381,278f, 43,3703f;
			}
			else
			{
				return 1331,355f, 4392,887f, 44,012f;
			}
			break;
		
		case 44:
			if (bParam1 == 1)
			{
				return -1147,31f, 4939,27f, 221,27f;
			}
			else
			{
				return -1149,392f, 4938,771f, 221,3682f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 39:
		case 41:
			return 0;
			break;
	}
	return 1;
}

Vector3 func_92(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return 131,2f, 6920,1f, 20,8f;
			break;
		
		case 1:
			if (bParam1 == 1)
			{
				return -1048,569f, 4917,414f, 208,4216f;
			}
			else
			{
				return -1046,277f, 4918,739f, 211,5379f;
			}
			break;
		
		case 2:
			return -2358,46f, 3251,397f, 100,5504f;
			break;
		
		case 3:
			if (bParam1 == 1)
			{
				return -247,6219f, 6331,341f, 31,42602f;
			}
			else
			{
				return -249,9504f, 6331,219f, 32,7262f;
			}
			break;
		
		case 4:
			if (bParam1 == 1)
			{
				return -140,9f, -2491,45f, 43,45f;
			}
			else
			{
				return -141,0976f, -2498,239f, 40,0124f;
			}
			break;
		
		case 5:
			if (bParam1 == 1)
			{
				return -2924,697f, 46,50282f, 10,60369f;
			}
			else
			{
				return -2925,7f, 47,4f, 11,6f;
			}
			break;
		
		case 6:
			return -793,1981f, -726,4421f, 26,28f;
			break;
		
		case 7:
			if (bParam1 == 1)
			{
				return 124,0092f, -673,0096f, 41,02729f;
			}
			else
			{
				return 123,5196f, -674,2917f, 41,4945f;
			}
			break;
		
		case 8:
			if (bParam1 == 1)
			{
				return 1195,737f, -1481,694f, 33,8595f;
			}
			else
			{
				return 1194,709f, -1482,472f, 33,9594f;
			}
			break;
		
		case 9:
			if (bParam1 == 1)
			{
				return -35,88743f, 1945,738f, 189,1868f;
			}
			else
			{
				return -35,5254f, 1947,289f, 189,186f;
			}
			break;
		
		case 10:
			if (bParam1)
			{
				return 753,4579f, 4174,996f, 39,8011f;
			}
			else
			{
				return 751,72f, 4175,14f, 40,95f;
			}
			break;
		
		case 11:
			if (bParam1 == 1)
			{
				return 1791,256f, 4592,383f, 36,68283f;
			}
			else
			{
				return 1789,8f, 4592,4f, 36,78f;
			}
			break;
		
		case 12:
			return 341,311f, 2618,918f, 43,5124f;
			break;
		
		case 13:
			return 442,3755f, -223,602f, 55,0215f;
			break;
		
		case 14:
			if (bParam1 == 1)
			{
				return 1291,02f, -1760,94f, 51,05f;
			}
			else
			{
				return 1286,5f, -1754,4f, 52f;
			}
			break;
		
		case 15:
			if (bParam1 == 1)
			{
				return 1659,438f, 5,4271f, 165,1176f;
			}
			else
			{
				return 1658,621f, 6,7752f, 166,1676f;
			}
			break;
		
		case 16:
			if (bParam1 == 1)
			{
				return 1645,91f, 4866,72f, 40,98f;
			}
			else
			{
				return 1647,399f, 4865,839f, 41f;
			}
			break;
		
		case 17:
			return -1144,589f, -2004,452f, 12,3803f;
			break;
		
		case 18:
			if (bParam1 == 1)
			{
				return -1047,3f, -520,6f, 35f;
			}
			else
			{
				return -1048,32f, -521,2f, 35,14f;
			}
			break;
		
		case 19:
			if (bParam1 == 1)
			{
				return -1576,046f, -587,8257f, 33,97909f;
			}
			else
			{
				return -1576,817f, -586,3887f, 34,8528f;
			}
			break;
		
		case 20:
			if (bParam1 == 1)
			{
				return 953,44f, -123,42f, 73,35f;
			}
			else
			{
				return 954,5f, -121,34f, 74,18f;
			}
			break;
		
		case 21:
			if (bParam1 == 1)
			{
				return 1134,201f, -665,9413f, 56,08261f;
			}
			else
			{
				return 1135,401f, -663,7875f, 56,088f;
			}
			break;
		
		case 22:
			if (bParam1 == 1)
			{
				return -2196,198f, 248,9123f, 173,612f;
			}
			else
			{
				return -2195,029f, 250,4256f, 173,6017f;
			}
			break;
		
		case 23:
			return 29,2f, 3635,4f, 39,8f;
			break;
		
		case 24:
			if (bParam1 == 1)
			{
				return 1724,429f, 3299,023f, 40,2235f;
			}
			else
			{
				return 1721,96f, 3300,464f, 40,3835f;
			}
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return 2617,321f, 3659,452f, 100,3867f;
			}
			else
			{
				return 2612,712f, 3662,564f, 101,1074f;
			}
			break;
		
		case 26:
			return -459,9625f, 1101,076f, 328,0211f;
			break;
		
		case 27:
			if (bParam1 == 1)
			{
				return 2432,607f, 4994,333f, 45,25828f;
			}
			else
			{
				return 2430,906f, 4995,561f, 45,2685f;
			}
			break;
		
		case 28:
			if (bParam1 == 1)
			{
				return 3722,456f, 4521,837f, 20,39456f;
			}
			else
			{
				return 3724,5f, 4524,5f, 21,6f;
			}
			break;
		
		case 29:
			if (bParam1 == 1)
			{
				return -446,9024f, 5997,598f, 30,3407f;
			}
			else
			{
				return -446,045f, 6000,882f, 31,9163f;
			}
			break;
		
		case 30:
			return 3291,4f, 5192,5f, 18,4f;
			break;
		
		case 31:
			if (bParam1 == 1)
			{
				return 390,81f, -1436,07f, 28,45f;
			}
			else
			{
				return 388,7f, -1434,3f, 29,8f;
			}
			break;
		
		case 32:
			return -445,26f, -442,49f, 32,26f;
			break;
		
		case 33:
			if (bParam1)
			{
				return -1501,46f, 858,17f, 180,59f;
			}
			else
			{
				return -1500,08f, 857,59f, 180,59f;
			}
			break;
		
		case 34:
			return 2822,2f, -741,4f, 1,8f;
			break;
		
		case 35:
			if (bParam1 == 1)
			{
				return -3166,978f, 1102,622f, 19,80827f;
			}
			else
			{
				return -3165,613f, 1102,24f, 19,8928f;
			}
			break;
		
		case 36:
			if (bParam1 == 1)
			{
				return 1842,882f, 3670,457f, 32,68f;
			}
			else
			{
				return 1841,114f, 3675,253f, 34,086f;
			}
			break;
		
		case 37:
			if (bParam1 == 1)
			{
				return 1828,794f, 2605,504f, 44,61582f;
			}
			else
			{
				return 1830,535f, 2603,828f, 45,7491f;
			}
			break;
		
		case 38:
			if (bParam1 == 1)
			{
				return -32,61f, -1089,67f, 25,42f;
			}
			else
			{
				return -40,0528f, -1084,016f, 26,6224f;
			}
			break;
		
		case 39:
			if (bParam1 == 1)
			{
				return 1439,012f, 6336,812f, 22,96477f;
			}
			else
			{
				return 1445,544f, 6334,057f, 23,975f;
			}
			break;
		
		case 40:
			if (bParam1 == 1)
			{
				return -782,5126f, -1352,245f, 8,0001f;
			}
			else
			{
				return -784,4851f, -1351,364f, 8,1001f;
			}
			break;
		
		case 41:
			if (bParam1 == 1)
			{
				return 962,8806f, -1826,419f, 30,07195f;
			}
			else
			{
				return 963,1673f, -1831,149f, 36,2055f;
			}
			break;
		
		case 42:
			if (bParam1 == 1)
			{
				return -1246,155f, -1531,647f, 3,2962f;
			}
			else
			{
				return -1246,494f, -1533,677f, 4,5262f;
			}
			break;
		
		case 43:
			if (bParam1 == 1)
			{
				return -765,5466f, 698,8101f, 143,3693f;
			}
			else
			{
				return -761,1058f, 701,9452f, 145,05f;
			}
			break;
		
		case 44:
			if (bParam1 == 1)
			{
				return -512,1094f, 28,86313f, 43,6153f;
			}
			else
			{
				return -513,4391f, 30,9069f, 43,9018f;
			}
			break;
		
		case 45:
			if (bParam1 == 1)
			{
				return 781,3839f, 1292,073f, 359,2997f;
			}
			else
			{
				return 780,3879f, 1295,705f, 361,6941f;
			}
			break;
		
		case 46:
			return 208,69f, 337,76f, 104,64f;
			break;
		
		case 47:
			if (bParam1 == 1)
			{
				return -1889,99f, 2078,38f, 140f;
			}
			else
			{
				return -1890,24f, 2073,26f, 140,11f;
			}
			break;
		
		case 48:
			return 153,6156f, -3073,998f, 4,8962f;
			break;
		
		case 49:
			if (bParam1)
			{
				return -306,2449f, -1180,538f, 22,711f;
			}
			else
			{
				return -304,0894f, -1180,886f, 23,9493f;
			}
			break;
		
		case 50:
			return -2006,987f, -556,4998f, 11,8813f;
			break;
		
		case 51:
			if (bParam1 == 1)
			{
				return -590,2079f, -289,8196f, 40,68631f;
			}
			else
			{
				return -588,1934f, -290,4782f, 43,7101f;
			}
			break;
		
		case 52:
			return -1795,826f, -855,7111f, 8,2048f;
			break;
		
		case 53:
			return -1557,108f, -1155,246f, 2,9158f;
			break;
		
		case 54:
			if (bParam1 == 1)
			{
				return -1470,71f, -1389,33f, 1,58f;
			}
			else
			{
				return -1467,483f, -1387,507f, 3,1432f;
			}
			break;
		
		case 55:
			return -684,8126f, -180,648f, 48,02f;
			break;
		
		case 56:
			if (bParam1 == 1)
			{
				return -1311,413f, 640,1154f, 136,9244f;
			}
			else
			{
				return -1307,062f, 641,4211f, 138,0582f;
			}
			break;
		
		case 57:
			return 2493,686f, 4963,541f, 43,7358f;
			break;
		
		case 58:
			if (bParam1 == 1)
			{
				return 1392,76f, 3602,94f, 33,98f;
			}
			else
			{
				return 1392,609f, 3605,799f, 34,9939f;
			}
			break;
		
		case 59:
			if (bParam1 == 1)
			{
				return -527,33f, 5295,7f, 73,17f;
			}
			else
			{
				return -535,4436f, 5297,496f, 76,3891f;
			}
			break;
		
		case 60:
			if (bParam1 == 1)
			{
				return -564,26f, 5353,13f, 69,23f;
			}
			else
			{
				return -551,5837f, 5349,404f, 75,253f;
			}
			break;
		
		case 61:
			if (bParam1 == 1)
			{
				return 3,18f, -1827,1f, 24,22f;
			}
			else
			{
				return 0,1911f, -1825,905f, 24,3295f;
			}
			break;
		
		case 62:
			if (bParam1 == 1)
			{
				return 62,25f, 3681,06f, 38,84f;
			}
			else
			{
				return 63,8867f, 3683,49f, 39,1543f;
			}
			break;
		
		case 63:
			return 155,384f, -741,179f, 258,6519f;
			break;
		
		case 64:
			if (bParam1 == 1)
			{
				return 126,61f, -1206,29f, 28,3f;
			}
			else
			{
				return 124,265f, -1205,882f, 28,2951f;
			}
			break;
		
		case 65:
			return 27,449f, -625,31f, 15,462f;
			break;
		
		case 66:
			if (bParam1 == 1)
			{
				return -129,04f, -662,04f, 39,51f;
			}
			else
			{
				return -129,0374f, -659,2689f, 41,0016f;
			}
			break;
		
		case 67:
			if (bParam1)
			{
				return 1138,62f, -1598,56f, 33,69f;
			}
			else
			{
				return 1138,63f, -1596,61f, 35,07f;
			}
			break;
		
		case 68:
			if (bParam1)
			{
				return 1149,68f, -1525,56f, 33,84f;
			}
			else
			{
				return 1147,55f, -1527,83f, 36,01f;
			}
			break;
		
		case 69:
			if (bParam1)
			{
				return 297,48f, -1448,79f, 28,97f;
			}
			else
			{
				return 296,44f, -1450,75f, 30,4f;
			}
			break;
		
		case 70:
			if (bParam1)
			{
				return 324,21f, -1392,68f, 31,51f;
			}
			else
			{
				return 322,27f, -1393,75f, 32,79f;
			}
			break;
		
		case 71:
			if (bParam1)
			{
				return 293,2f, -597,92f, 42,28f;
			}
			else
			{
				return 294,3f, -598,1f, 43,73f;
			}
			break;
		
		case 72:
			if (bParam1)
			{
				return 358f, -592,66f, 27,79f;
			}
			else
			{
				return 357,07f, -590,63f, 29,08f;
			}
			break;
		
		case 73:
			if (bParam1)
			{
				return -495,45f, -326,18f, 33,5f;
			}
			else
			{
				return -496,4f, -324,7f, 34,75f;
			}
			break;
		
		case 74:
			if (bParam1)
			{
				return -450,91f, -351,93f, 33,5f;
			}
			else
			{
				return -449,82f, -353,49f, 34,75f;
			}
			break;
		
		case 75:
			return -2258,833f, 323,9413f, 184,9015f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 17:
		case 55:
		case 63:
		case 65:
			return 0;
			break;
	}
	return 1;
}

int func_94(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_95(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1 == 1)
			{
				return -1760,36f, 428,6f, 126,31f;
			}
			else
			{
				return -1756,974f, 427,531f, 126,7f;
			}
			break;
		
		case 1:
			return -1595,742f, 2799,371f, 16,0205f;
			break;
		
		case 2:
			if (bParam1 == 1)
			{
				return -197,1486f, 1482,685f, 288,253f;
			}
			else
			{
				return -200,0114f, 1481,697f, 289,4303f;
			}
			break;
		
		case 3:
			return 256,77f, 2841,047f, 42,6599f;
			break;
		
		case 4:
			return -1360,223f, 4435,751f, 27,7754f;
			break;
		
		case 5:
			return 64,63f, 7051,253f, 15,8272f;
			break;
		
		case 6:
			return -456,2838f, 1593,799f, 358,0119f;
			break;
		
		case 7:
			if (bParam1 == 1)
			{
				return -3114,617f, 749,8445f, 11,59352f;
			}
			else
			{
				return -3111,614f, 749,2816f, 12,6285f;
			}
			break;
		
		case 8:
			return 713,6797f, 4095,969f, 33,765f;
			break;
		
		case 9:
			return 255,2671f, 2586,281f, 43,9619f;
			break;
		
		case 10:
			return -1292,64f, -3345,82f, 23,27f;
			break;
		
		case 11:
			return 3111,531f, 2214,848f, -8,6457f;
			break;
		
		case 12:
			if (bParam1 == 1)
			{
				return 555,82f, -839,05f, 39,84f;
			}
			else
			{
				return 555f, -837,81f, 55,08f;
			}
			break;
		
		case 13:
			return -2360f, 3245f, 91,9f;
			break;
		
		case 14:
			return 1691,152f, 2640,859f, 54,0693f;
			break;
		
		case 15:
			return 1982,37f, 6203,64f, 41,15f;
			break;
		
		case 16:
			return -2979f, 1588f, 23,3f;
			break;
		
		case 17:
			return 963,5308f, -1824,04f, 30,0708f;
			break;
		
		case 18:
			return -295,4187f, 6188,786f, 30,48932f;
			break;
		
		case 19:
			return -1778f, 124f, 67,9f;
			break;
		
		case 20:
			if (bParam1 == 1)
			{
				return 157,5759f, 3133,994f, 42,45733f;
			}
			else
			{
				return 161,2925f, 3131,854f, 42,5892f;
			}
			break;
		
		case 21:
			return -888f, 5406f, 30,5f;
			break;
		
		case 22:
			return -1840f, 793f, 138,7f;
			break;
		
		case 23:
			if (bParam1 == 1)
			{
				return -495,8039f, -1750,207f, 17,42509f;
			}
			else
			{
				return -495,9968f, -1747,231f, 18,5194f;
			}
			break;
		
		case 24:
			if (bParam1 == 1)
			{
				return -1764,695f, -265,5809f, 47,6187f;
			}
			else
			{
				return -1763,359f, -263,2062f, 47,1481f;
			}
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return 548,0715f, -1642,451f, 27,2033f;
			}
			else
			{
				return 548,5943f, -1642,603f, 27,4425f;
			}
			break;
		
		case 26:
			return 736,0563f, 2595,556f, 72,9165f;
			break;
		
		case 27:
			if (bParam1 == 1)
			{
				return 701,0009f, -1179,702f, 23,28737f;
			}
			else
			{
				return 699,2748f, -1181,671f, 33,2608f;
			}
			break;
		
		case 28:
			if (bParam1 == 1)
			{
				return -1146,74f, 4938,93f, 221,27f;
			}
			else
			{
				return -1149,437f, 4940,362f, 221,3282f;
			}
			break;
		
		case 29:
			if (bParam1 == 1)
			{
				return 2543,91f, -432,76f, 93,12f;
			}
			else
			{
				return 2513,535f, -442,8484f, 113,0888f;
			}
			break;
		
		case 30:
			return -553,1764f, -2239,877f, 121,3704f;
			break;
		
		case 31:
			if (bParam1 == 1)
			{
				return 987,16f, -108,02f, 73,3f;
			}
			else
			{
				return 987,15f, -105,88f, 74,13f;
			}
			break;
		
		case 32:
			return -1048f, -836f, 10,5f;
			break;
		
		case 33:
			return 312,6026f, 6606,896f, 27,8835f;
			break;
		
		case 34:
			return -37,21f, 2871,26f, 58,61f;
			break;
		
		case 35:
			if (bParam1 == 1)
			{
				return 61,91f, 3690,51f, 38,83f;
			}
			else
			{
				return 59f, 3692f, 38,92f;
			}
			break;
		
		case 36:
			if (bParam1 == 1)
			{
				return 2933,33f, 4617,07f, 47,72f;
			}
			else
			{
				return 2934,499f, 4617,067f, 47,736f;
			}
			break;
		
		case 37:
			return 57,8219f, -1932,121f, 20,4939f;
			break;
		
		case 38:
			return 378,26f, -334,3f, 45,63f;
			break;
		
		case 39:
			if (bParam1 == 1)
			{
				return 2673,662f, 2793,702f, 31,8124f;
			}
			else
			{
				return 2676,045f, 2793,249f, 39,5934f;
			}
			break;
		
		case 40:
			return -1582,278f, 770,3486f, 188,1942f;
			break;
		
		case 41:
			if (bParam1 == 1)
			{
				return -1641,139f, -1032,815f, 4,63165f;
			}
			else
			{
				return -1640,546f, -1034,129f, 4,6074f;
			}
			break;
		
		case 42:
			if (bParam1 == 1)
			{
				return -151,09f, -214,36f, 44,73f;
			}
			else
			{
				return -159,7137f, -209,1721f, 48,938f;
			}
			break;
		
		case 43:
			return -1276,986f, -2451,886f, 72,0481f;
			break;
		
		case 44:
			if (bParam1 == 1)
			{
				return -403,5827f, 1056,212f, 322,8414f;
			}
			else
			{
				return -402f, 1053f, 323f;
			}
			break;
		
		case 45:
			return 2728,987f, 1576,382f, 65,5818f;
			break;
		
		case 46:
			if (bParam1 == 1)
			{
				return -221,27f, 6133,62f, 30,48f;
			}
			else
			{
				return -215,9002f, 6125,27f, 56,278f;
			}
			break;
		
		case 47:
			return 2092,225f, 2492,302f, 89,4046f;
			break;
		
		case 48:
			return -1124,666f, -967,1614f, 5,6319f;
			break;
		
		case 49:
			if (bParam1 == 1)
			{
				return -405,5299f, 323,4063f, 107,7227f;
			}
			else
			{
				return -405f, 325f, 108,7f;
			}
			break;
		
		case 50:
			return -1087,31f, -2429,3f, 13f;
			break;
		
		case 51:
			return -1042,645f, 879,7763f, 160,2144f;
			break;
		
		case 52:
			if (bParam1 == 1)
			{
				return -1081,229f, 678,9454f, 141,8056f;
			}
			else
			{
				return -1078,35f, 682,2944f, 144,904f;
			}
			break;
		
		case 53:
			return -402,0679f, 1355,062f, 329,8384f;
			break;
		
		case 54:
			return 153,3876f, 713,6584f, 207,2551f;
			break;
		
		case 55:
			return 186,9f, 243,0269f, 140,55f;
			break;
		
		case 56:
			if (bParam1 == 1)
			{
				return 302,01f, -3254,45f, 4,8f;
			}
			else
			{
				return 304f, -3259f, 5f;
			}
			break;
		
		case 57:
			if (bParam1 == 1)
			{
				return -398,57f, -1883,96f, 20,54f;
			}
			else
			{
				return -397f, -1885f, 21,5f;
			}
			break;
		
		case 58:
			return 780,7208f, -211,0616f, 65,1143f;
			break;
		
		case 59:
			return -1755,011f, 184,3929f, 63,3711f;
			break;
		
		case 60:
			if (bParam1 == 1)
			{
				return 788,84f, 2164,06f, 52,1f;
			}
			else
			{
				return 786,0139f, 2164,951f, 52,0981f;
			}
			break;
		
		case 61:
			return 1707,228f, 4920,156f, 41,0637f;
			break;
		
		case 62:
			return -684,9417f, 5793,045f, 16,331f;
			break;
		
		case 63:
			return -2188f, 4251f, 48f;
			break;
		
		case 64:
			if (bParam1 == 1)
			{
				return -1099,08f, 2711,35f, 18,11f;
			}
			else
			{
				return -1103f, 2715f, 19f;
			}
			break;
		
		case 65:
			return 581f, -2805f, 5,5f;
			break;
		
		case 66:
			if (bParam1 == 1)
			{
				return -663,95f, -1998,85f, 6,1f;
			}
			else
			{
				return -665,4316f, -2002,04f, 7,5968f;
			}
			break;
		
		case 67:
			return 1442,905f, -1479,759f, 62,2245f;
			break;
		
		case 68:
			if (bParam1 == 1)
			{
				return -361,92f, -141,76f, 37,58f;
			}
			else
			{
				return -356,5324f, -145,0359f, 41,7413f;
			}
			break;
		
		case 69:
			return 624,0116f, 558,6531f, 129,2455f;
			break;
		
		case 70:
			return 2833f, 2807f, 56,3785f;
			break;
		
		case 71:
			if (bParam1 == 1)
			{
				return 92,14449f, 6360,182f, 30,37612f;
			}
			else
			{
				return 94,0769f, 6356,961f, 30,3761f;
			}
			break;
		
		case 72:
			return -2231,514f, 3477,792f, 29,3291f;
			break;
		
		case 73:
			return 377f, 3582f, 32,5f;
			break;
		
		case 74:
			if (bParam1 == 1)
			{
				return -2947,47f, 445,6f, 14,29f;
			}
			else
			{
				return -2948f, 441f, 15f;
			}
			break;
		
		case 75:
			if (bParam1 == 1)
			{
				return 1292,88f, -3341,78f, 4,9f;
			}
			else
			{
				return 1296f, -3348f, 5,2f;
			}
			break;
		
		case 76:
			if (bParam1 == 1)
			{
				return -1165,46f, -2054,09f, 13,2f;
			}
			else
			{
				return -1165,883f, -2051,026f, 13,2268f;
			}
			break;
		
		case 77:
			if (bParam1 == 1)
			{
				return 1235,57f, -452,01f, 65,7f;
			}
			else
			{
				return 1235f, -450f, 66,5f;
			}
			break;
		
		case 78:
			return -467,0458f, -934,8019f, 46,9844f;
			break;
		
		case 79:
			return 226,7f, -1761f, 28,5f;
			break;
		
		case 80:
			if (bParam1 == 1)
			{
				return 1218,07f, 1898,69f, 76,87f;
			}
			else
			{
				return 1221f, 1898f, 77,4f;
			}
			break;
		
		case 81:
			if (bParam1 == 1)
			{
				return 1545,99f, 3802,7f, 32,42f;
			}
			else
			{
				return 1535,829f, 3798,217f, 33,4563f;
			}
			break;
		
		case 82:
			return 756,8601f, 6462,329f, 30,4229f;
			break;
		
		case 83:
			return -2319f, 4124f, 26f;
			break;
		
		case 84:
			return -3185f, 1053f, 20,2f;
			break;
		
		case 85:
			return 818,9215f, -3188,167f, 4,9007f;
			break;
		
		case 86:
			if (bParam1 == 1)
			{
				return -451,05f, -2264,24f, 6,61f;
			}
			else
			{
				return -457,3656f, -2262,646f, 7,5212f;
			}
			break;
		
		case 87:
			if (bParam1 == 1)
			{
				return 1409,86f, -757,22f, 65,8f;
			}
			else
			{
				return 1410,091f, -752,1061f, 66,2362f;
			}
			break;
		
		case 88:
			return 8,4875f, -441,2103f, 44,5639f;
			break;
		
		case 89:
			if (bParam1 == 1)
			{
				return -935,04f, 387,39f, 76,62f;
			}
			else
			{
				return -937,0176f, 391,544f, 80,2377f;
			}
			break;
		
		case 90:
			if (bParam1 == 1)
			{
				return 2748,49f, 3463,02f, 54,77f;
			}
			else
			{
				return 2746,554f, 3463,525f, 54,7144f;
			}
			break;
		
		case 91:
			return 1898,896f, 4921,975f, 47,8088f;
			break;
		
		case 92:
			if (bParam1 == 1)
			{
				return -315,51f, 6310,89f, 31,37f;
			}
			else
			{
				return -315,9772f, 6307,385f, 31,4906f;
			}
			break;
		
		case 93:
			return -1171f, 4927f, 224f;
			break;
		
		case 94:
			return -281,1712f, 2528,012f, 73,6376f;
			break;
		
		case 95:
			if (bParam1 == 1)
			{
				return 68,45f, 3756,27f, 38,74f;
			}
			else
			{
				return 68,453f, 3758,967f, 38,7395f;
			}
			break;
		
		case 96:
			return 25,2888f, -634,2637f, 6,5084f;
			break;
		
		case 97:
			if (bParam1 == 1)
			{
				return -1146,67f, 4939,11f, 221,27f;
			}
			else
			{
				return -1145,283f, 4940,286f, 221,3038f;
			}
			break;
		
		case 98:
			return 441,64f, 5570,38f, 780,45f;
			break;
		
		case 99:
			if (bParam1)
			{
				return 1353,152f, 4377,223f, 43,3416f;
			}
			else
			{
				return 1357,209f, 4388,445f, 43,872f;
			}
			break;
		
		case 100:
			return -102,0671f, -968,1538f, 295,5635f;
			break;
		
		case 101:
			return 2492,69f, 4963,014f, 43,6478f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 11:
		case 13:
		case 14:
		case 30:
		case 34:
		case 43:
		case 45:
		case 50:
		case 55:
		case 88:
		case 96:
		case 98:
		case 100:
			return 0;
			break;
	}
	return 1;
}

void func_97()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iLocal_341[iVar0] = -1;
		fLocal_347[iVar0] = 999999f;
		vLocal_353[iVar0] = { 0f, 0f, 0f };
		vLocal_369[iVar0] = { 0f, 0f, 0f };
		iVar0++;
	}
}

void func_98(int iParam0)
{
	unk_0xC05DBA7D4F88D5E5(882848737, iParam0);
	unk_0xC05DBA7D4F88D5E5(-1788665315, iParam0);
	unk_0xC05DBA7D4F88D5E5(-832573324, iParam0);
	unk_0xC05DBA7D4F88D5E5(1682622302, iParam0);
	unk_0xC05DBA7D4F88D5E5(-664053099, iParam0);
	unk_0xC05DBA7D4F88D5E5(307287994, iParam0);
	unk_0xC05DBA7D4F88D5E5(-1323586730, iParam0);
}

void func_99(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), 600439132, 0) || unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), 600439132) == 0)
	{
		unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), 600439132, 1, iParam0, iParam2);
		unk_0xB875234DD8BEBA66(600439132);
		if (iParam1 == 1)
		{
			unk_0x4D7F4CC43D4D0DE3(iLocal_490, "PICKUP_WEAPON_BALL", "HUD_FRONTEND_WEAPONS_PICKUPS_SOUNDSET", 1);
		}
	}
}

void func_100()
{
	if (!unk_0x16102BEDC7435774(iLocal_69))
	{
		unk_0xE25C96A9C36BE5D2(iLocal_69, unk_0x047216F1869A66EC(unk_0x16F2683693E537C9()));
	}
	if (unk_0x16102BEDC7435774(iLocal_69))
	{
		unk_0x7BECA8F360B1686D(iLocal_69, 1);
		unk_0x18E279963C2FCEF4(func_101(), 1f, 0,9f, 3f);
		unk_0x2A82338A0A086F1E(iLocal_69, unk_0x047216F1869A66EC(unk_0x16F2683693E537C9()), 1);
	}
}

var func_101()
{
	return unk_0x5D08BBCCCC2F43A4(unk_0xA30EC016B12C03E4());
}

void func_102()
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && !unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
	{
		if (func_106(unk_0x16F2683693E537C9(), iLocal_69) > 10f || func_105("CHOP_H_WHIS"))
		{
			if ((unk_0x1C0640BA9A7327B3() - iLocal_412) > 4000 && unk_0xBFC0798A6E3417F9(2, 47))
			{
				iLocal_412 = unk_0x1C0640BA9A7327B3();
				func_103(unk_0x16F2683693E537C9(), "CALL_CHOP", 3);
				if (func_105("CHOP_H_WHIS"))
				{
					unk_0xA37A90C62806D848(1);
				}
				if (iLocal_51 == 15 && iLocal_52 > 1)
				{
				}
				else
				{
					func_40(0);
					if (iLocal_51 == 2)
					{
						func_121(2, 0);
					}
					else
					{
						func_121(2, 1);
					}
				}
			}
			if (((!unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_94, 8) && !unk_0xFEBC1E4EC9E001F0()) && !func_19()) && !unk_0x991B1F0980C62628())
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_10044.f_94), 8);
				func_15("CHOP_H_WHIS", -1);
			}
		}
	}
}

void func_103(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_104(iParam2), 1);
}

int func_104(int iParam0)
{
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

int func_105(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

float func_106(int iParam0, int iParam1)
{
	return func_4(iParam0, iParam1, 1);
}

int func_107()
{
	if ((unk_0xD1960163A3042274(iLocal_69, 242628503) == 7 || unk_0x869EFD0BC0868856(iLocal_69)) || unk_0x688A90832774AB83(iLocal_69))
	{
		unk_0xD0E45B74EA5CF129(iLocal_69);
		return 1;
	}
	return 0;
}

void func_108(char* sParam0, int iParam1)
{
	func_111(&uLocal_172, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
	func_109(&uLocal_172, "CHOP_AU", sParam0, 3, iParam1, 0);
}

void func_109(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_110(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0x5D96D8530B3D0904(&Global_19671, 0);
	Global_20808 = iParam3;
	StringCopy(&Global_20795, sParam2, 24);
}

void func_110(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_111(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_112()
{
	iVar0 = unk_0x09AC81E49EA267F7(0, 6);
	if (iVar0 == 0)
	{
		unk_0xC6EB89C59F2AF6B8(iLocal_69, sLocal_82[1], "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
		sLocal_86 = "idle_a";
	}
	else if (iVar0 == 1)
	{
		unk_0xC6EB89C59F2AF6B8(iLocal_69, sLocal_82[1], "idle_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
		sLocal_86 = "idle_c";
	}
	else
	{
		unk_0xC6EB89C59F2AF6B8(iLocal_69, sLocal_82[1], "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
		sLocal_86 = "idle_b";
	}
}

int func_113(int iParam0, int iParam1)
{
	if (func_114(iParam0))
	{
		if (unk_0xD1960163A3042274(iParam0, iParam1) == 1 || unk_0xD1960163A3042274(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_114(int iParam0)
{
	if (func_125(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_115()
{
	if (iLocal_465 == 0)
	{
		iVar0 = unk_0x09AC81E49EA267F7(0, 8);
		if (!unk_0x5A91F08DF773C39D(iLocal_69, vLocal_440[iVar0], 2f, 2f, 4f, 0, 1, 0) && !unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_440[iVar0], 2f, 2f, 4f, 0, 1, 0))
		{
			unk_0x96167B03C5A77156(iLocal_69, vLocal_440[iVar0], 1f, 20000, 0,25f, 8192, 1193033728);
			iLocal_465 = 1;
		}
	}
	else if (!func_113(iLocal_69, 713668775))
	{
		if (func_43() == 2)
		{
			iVar1 = 15;
		}
		else if (func_43() == 0)
		{
			iVar1 = 10;
		}
		else
		{
			iVar1 = -1;
		}
		iVar2 = unk_0x09AC81E49EA267F7(0, 100);
		if (iVar2 < iVar1 && iLocal_422 == 0)
		{
			iLocal_422 = 1;
			func_121(13, 1);
		}
		else if (iVar2 < 50)
		{
			iLocal_81 = 1;
			sLocal_82[0] = "creatures@rottweiler@amb@world_dog_barking@enter";
			sLocal_82[1] = "creatures@rottweiler@amb@world_dog_barking@base";
			sLocal_82[2] = "creatures@rottweiler@amb@world_dog_barking@exit";
			func_121(17, 1);
		}
		else
		{
			iLocal_81 = 0;
			sLocal_82[0] = "creatures@rottweiler@amb@world_dog_sitting@enter";
			sLocal_82[1] = "creatures@rottweiler@amb@world_dog_sitting@idle_a";
			sLocal_82[2] = "creatures@rottweiler@amb@world_dog_sitting@exit";
			func_121(17, 1);
		}
	}
}

void func_116()
{
	if (((unk_0x1C0640BA9A7327B3() - iLocal_484) > 2000 && func_125(iLocal_69)) && unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(iLocal_69, 1), 5f, 1))
	{
		func_122("WHINE");
		iLocal_484 = unk_0x1C0640BA9A7327B3();
	}
}

void func_117()
{
	if (func_43() == 2 && (unk_0x1C0640BA9A7327B3() - iLocal_413) > iLocal_414)
	{
		iLocal_413 = unk_0x1C0640BA9A7327B3();
		iLocal_414 = unk_0x09AC81E49EA267F7(10000, 15000);
		func_122("WHINE");
	}
}

int func_118(int iParam0, int iParam1)
{
	if ((func_125(iLocal_69) && func_125(unk_0x16F2683693E537C9())) && func_120(iParam0, vLocal_397, 30f))
	{
		if (iParam1 == 1)
		{
			if (func_119(&uLocal_120, unk_0x68F4C0EC296D3901(iParam0, 1)))
			{
				vVar0 = { unk_0x68F4C0EC296D3901(iLocal_69, 1) };
				vVar3 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
				if (unk_0x755FF954DAE327E1((vVar0.z - vVar3.z)) < 2,5f)
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

bool func_119(var uParam0, struct<2> Param1, float fParam3)
{
	if (uParam0->f_46 < 3)
	{
	}
	bVar0 = false;
	iVar1 = 0;
	iVar2 = (uParam0->f_46 - 1);
	while (iVar1 < uParam0->f_46)
	{
		if ((uParam0[iVar1]->f_1 < Param1.f_1 && uParam0[iVar2]->f_1 >= Param1.f_1) || (uParam0[iVar2]->f_1 < Param1.f_1 && uParam0[iVar1]->f_1 >= Param1.f_1))
		{
			if (((*uParam0)[iVar1] + (((Param1.f_1 - uParam0[iVar1]->f_1) / (uParam0[iVar2]->f_1 - uParam0[iVar1]->f_1)) * ((*uParam0)[iVar2] - (*uParam0)[iVar1]))) < Param1)
			{
				bVar0 = !bVar0;
			}
		}
		iVar2 = iVar1;
		iVar1++;
	}
	return bVar0;
}

bool func_120(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 1) };
	vVar3 = { vParam1 - vVar0 };
	return ((vVar3.x * vVar3.x) + (vVar3.y * vVar3.y)) <= (fParam4 * fParam4);
}

void func_121(int iParam0, int iParam1)
{
	iLocal_107 = 0;
	if (func_125(iLocal_69))
	{
		unk_0x11AD11297DC58CC7(iLocal_69, 1);
		unk_0xD0E45B74EA5CF129(iLocal_69);
		if (!unk_0x405E212DDE472467(iLocal_69, 0))
		{
			if (iParam1 == 1)
			{
				unk_0xA3BF0AA5A2608191(iLocal_69);
			}
			unk_0xE121AE1BBF90E186(iLocal_69, 0);
		}
	}
	iLocal_51 = iParam0;
	iLocal_53 = 0;
	iLocal_52 = 0;
	iLocal_385 = -1;
	vLocal_386 = { 0f, 0f, 0f };
	vLocal_389 = { 0f, 0f, 0f };
	iLocal_339 = 5;
	func_34();
	iLocal_465 = 0;
	iLocal_439 = 0;
	iLocal_484 = unk_0x1C0640BA9A7327B3();
	unk_0x7352ACF3368DF65F("DisableBarks", 0);
}

void func_122(char* sParam0)
{
	unk_0x39590DF49057F935(iLocal_69, 3, sParam0);
}

int func_123()
{
	if (func_118(unk_0x16F2683693E537C9(), 1))
	{
		if ((unk_0x1C0640BA9A7327B3() - iLocal_406) > iLocal_407)
		{
			return 1;
		}
		if (func_39(unk_0x16F2683693E537C9(), vLocal_397.f_5, 1) < 8f)
		{
			func_108("CHOP_KENNEL", 0);
			return 1;
		}
	}
	return 0;
}

int func_124(int iParam0, vector3 vParam1, float fParam4, bool bParam5, int iParam6)
{
	bVar0 = false;
	if (func_125(iParam0))
	{
		if (bParam5 == 1)
		{
			fVar1 = 0f;
			bVar0 = unk_0xE82754C349C7B581(vParam1, &fVar1, 0, 0);
			if (bVar0)
			{
				vParam1.z = fVar1;
			}
		}
		unk_0xA47B46945FF6DE74(iParam0, vParam1, 1, 0, 0, iParam6);
		unk_0xD8F6A53F4799FAFE(iParam0, fParam4);
		if (bParam5)
		{
			return bVar0;
		}
		return 1;
	}
	return 0;
}

int func_125(int iParam0)
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

void func_126()
{
	if ((unk_0x1C0640BA9A7327B3() - iLocal_488) > 60000)
	{
		iLocal_488 = unk_0x1C0640BA9A7327B3();
		if ((iLocal_51 == 2 || iLocal_51 == 5) || iLocal_51 == 15)
		{
			if (func_43() == 1)
			{
				func_127(115, 1);
			}
			else
			{
				func_127(116, 1);
			}
		}
	}
}

void func_127(int iParam0, int iParam1)
{
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57254[iParam0].f_2)
	{
		return;
	}
	if (unk_0x8CD06866876216F2())
	{
		return;
	}
	if (Global_57254[iParam0])
	{
		unk_0x6FB46C25CCB7E6D5(Global_57254[iParam0].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xCDC520E5E48E63D9(Global_57254[iParam0].f_1, iVar0, 1);
	}
}

void func_128()
{
	if ((unk_0x1C0640BA9A7327B3() - iLocal_485) > 500)
	{
		iLocal_485 = unk_0x1C0640BA9A7327B3();
		if (iLocal_51 != 15 && unk_0x68E45B0EC23881A7(unk_0x16F2683693E537C9(), 600439132, 1,5f, &uLocal_468, &iLocal_467, 0))
		{
			func_40(1);
		}
	}
}

void func_129()
{
	if (((((((((((func_144() && func_143()) && !func_142()) && iLocal_53 == 0) && iLocal_51 != 6) && func_19()) && !unk_0x991B1F0980C62628()) && !unk_0x4734A6196B611C3B(iLocal_69, 0)) && !func_81()) && !func_16()) && !func_3(0)) && !func_141())
	{
		unk_0x38C3A68D7861DCFD(0, 19, 1);
		unk_0x38C3A68D7861DCFD(0, 44, 1);
		unk_0x38C3A68D7861DCFD(0, 262, 1);
		unk_0x38C3A68D7861DCFD(0, 261, 1);
		unk_0x38C3A68D7861DCFD(0, 37, 1);
		if (iLocal_396 == 0)
		{
			func_138(floor(Global_111638.f_20113.f_254), 100, "CHOP_H_HAPPY", 1, -1, 2, -1f, -1f, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1);
		}
		else
		{
			func_138(100, 100, "CHOP_H_HAPPY", 1, -1, 2, -1f, -1f, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1);
		}
		if (func_137())
		{
			if (Global_30914 == 0)
			{
				Global_30914 = 1;
			}
			if (unk_0x8C74DE122769E1BF())
			{
				unk_0x308C55E6C40CF474(1);
			}
			else
			{
				unk_0xC0B0B9E466C0ED17(iLocal_69, 0f, 0f, 0f, 1, -1, 1000, 1000, 193150208);
				iLocal_492 = 0;
			}
			unk_0x558EC149EB2BC0A2(func_136(), func_135(0));
			unk_0x558EC149EB2BC0A2(func_136(), func_135(1));
			unk_0x558EC149EB2BC0A2(func_136(), func_135(2));
			unk_0x558EC149EB2BC0A2(func_136(), func_135(3));
			unk_0x558EC149EB2BC0A2(func_136(), func_135(4));
			unk_0x558EC149EB2BC0A2(func_136(), func_135(5));
			if (unk_0x91E3F625EF57450D(0))
			{
				unk_0x38C3A68D7861DCFD(func_136(), func_135(0), 1);
				unk_0x38C3A68D7861DCFD(func_136(), func_135(1), 1);
				unk_0x38C3A68D7861DCFD(func_136(), func_135(2), 1);
				unk_0x38C3A68D7861DCFD(func_136(), func_135(3), 1);
				unk_0x38C3A68D7861DCFD(func_136(), func_135(4), 1);
				unk_0x38C3A68D7861DCFD(func_136(), func_135(5), 1);
			}
			unk_0xEAB026E686C0D991(0, 25, 1);
			if (unk_0x9A01369A10646AFE(func_136(), func_135(0)) && func_134())
			{
				switch (iLocal_51)
				{
					case 1:
					case 3:
					case 4:
						iLocal_75 = 1;
						func_133(0);
						func_122("PLAYFUL");
						func_108("CHOP_WALK", 0);
						func_121(2, 1);
						break;
					
					case 2:
					case 5:
					case 15:
						iLocal_75 = 0;
						func_133(0);
						func_121(3, 1);
						break;
					
					case 17:
					case 18:
						iLocal_75 = 1;
						func_133(0);
						func_108("CHOP_WALK", 0);
						iLocal_53 = 2;
						break;
				}
				if (iLocal_75 == 1 && unk_0x6FB46C25CCB7E6D5(1438703432, &iLocal_487, -1))
				{
					iLocal_487++;
					unk_0xCDC520E5E48E63D9(1438703432, iLocal_487, 1);
				}
			}
			if (bLocal_395 == 1)
			{
				if (unk_0xD245978525608929(func_136(), func_135(1)) && func_134())
				{
					if (iLocal_51 == 17 || iLocal_51 == 18)
					{
						iLocal_53 = 5;
					}
					else
					{
						func_121(5, 1);
					}
				}
				if (func_43() == 2 && iLocal_396 == 0)
				{
					if (func_132() >= 1)
					{
						if (unk_0xD245978525608929(func_136(), func_135(2)))
						{
							func_108("CHOP_CANT", 0);
						}
					}
					if (func_132() >= 2)
					{
						if (unk_0xD245978525608929(func_136(), func_135(3)))
						{
							func_108("CHOP_CANT", 0);
						}
					}
					if (func_132() >= 3)
					{
						if (unk_0xD245978525608929(func_136(), func_135(4)))
						{
							func_108("CHOP_CANT", 0);
						}
					}
					if (func_132() >= 4)
					{
						if (unk_0xD245978525608929(func_136(), func_135(5)))
						{
							func_108("CHOP_CANT", 0);
						}
					}
				}
				else
				{
					if (func_132() >= 1)
					{
						if (unk_0xD245978525608929(func_136(), func_135(2)) && func_134())
						{
							func_108("CHOP_SIT", 0);
							if (iLocal_51 == 17 || iLocal_51 == 18)
							{
								iLocal_53 = 8;
							}
							else
							{
								func_121(8, 1);
							}
						}
					}
					if (func_132() >= 2)
					{
						if (unk_0xD245978525608929(func_136(), func_135(3)) && func_134())
						{
							func_108("CHOP_PAW", 0);
							if (iLocal_51 == 17 || iLocal_51 == 18)
							{
								iLocal_53 = 9;
							}
							else
							{
								func_121(9, 1);
							}
						}
					}
					if (func_132() >= 3)
					{
						if (unk_0xD245978525608929(func_136(), func_135(4)) && func_134())
						{
							func_108("CHOP_BEG", 0);
							if (iLocal_51 == 17 || iLocal_51 == 18)
							{
								iLocal_53 = 7;
							}
							else
							{
								func_121(7, 1);
							}
						}
					}
					if (func_132() >= 4)
					{
						if (unk_0xD245978525608929(func_136(), func_135(5)) && func_134())
						{
							func_108("CHOP_PET", 0);
							if (iLocal_51 == 17 || iLocal_51 == 18)
							{
								iLocal_53 = 10;
							}
							else
							{
								func_121(10, 1);
							}
						}
					}
				}
			}
		}
		else
		{
			unk_0xA37A90C62806D848(1);
			if (!unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_94, 0))
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_10044.f_94), 0);
			}
			if (bLocal_395 == 0)
			{
				bLocal_395 = func_131();
			}
			if (bLocal_395 == 1)
			{
				iVar0 = func_132();
				if (iVar0 > 4)
				{
					iVar0 = 4;
				}
				if ((((iLocal_51 == 1 || iLocal_51 == 17) || iLocal_51 == 18) || iLocal_51 == 3) || iLocal_51 == 4)
				{
					if ((func_43() == 2 && iLocal_396 == 0) && iVar0 > 0)
					{
						StringCopy(&Local_109, "CHOP_H_WAIT_H", 32);
					}
					else
					{
						StringCopy(&Local_109, "CHOP_H_WAIT_", 32);
					}
					StringIntConCat(&Local_109, iVar0, 32);
					if (unk_0x91E3F625EF57450D(0))
					{
						StringConCat(&Local_109, "_KM", 32);
					}
				}
				else if (iLocal_51 == 2 || iLocal_51 == 15)
				{
					if ((func_43() == 2 && iLocal_396 == 0) && iVar0 > 0)
					{
						StringCopy(&Local_109, "CHOP_H_WALK_H", 32);
					}
					else
					{
						StringCopy(&Local_109, "CHOP_H_WALK_", 32);
					}
					StringIntConCat(&Local_109, iVar0, 32);
					if (unk_0x91E3F625EF57450D(0))
					{
						StringConCat(&Local_109, "_KM", 32);
					}
				}
				func_130(&Local_109);
			}
			else if (iLocal_51 == 2 || iLocal_51 == 15)
			{
				if (unk_0x91E3F625EF57450D(0))
				{
					func_130("CHOP_H_HOME_KM");
				}
				else
				{
					func_130("CHOP_H_HOME");
				}
			}
			else if (unk_0x91E3F625EF57450D(0))
			{
				func_130("CHOP_H_NOAPP_KM");
			}
			else
			{
				func_130("CHOP_H_NOAPP");
			}
		}
	}
	else
	{
		func_133(1);
	}
}

void func_130(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 1, 1, -1);
}

int func_131()
{
	if (Global_111638.f_20113.f_263)
	{
		return 1;
	}
	return 0;
}

int func_132()
{
	return Global_111638.f_20113.f_254.f_3;
}

void func_133(int iParam0)
{
	if (func_137())
	{
		unk_0xA37A90C62806D848(1);
	}
	if (iParam0 == 1 && unk_0x8C74DE122769E1BF())
	{
		unk_0x29D5132FBDCF2B1E(0);
	}
}

int func_134()
{
	if (((iLocal_51 == 8 || iLocal_51 == 7) || iLocal_51 == 9) || iLocal_51 == 10)
	{
		return 0;
	}
	return 1;
}

int func_135(int iParam0)
{
	if (unk_0x91E3F625EF57450D(0))
	{
		switch (iParam0)
		{
			case 0:
				return 24;
			
			case 1:
				return 22;
			
			case 2:
				return 44;
			
			case 3:
				return 45;
			
			case 4:
				return 51;
			
			case 5:
				return 23;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 227;
			
			case 1:
				return 229;
			
			case 2:
				return 224;
			
			case 3:
				return 225;
			
			case 4:
				return 223;
			
			case 5:
				return 222;
			}
		
		default:
	}
	return 0;
}

int func_136()
{
	if (unk_0x91E3F625EF57450D(0))
	{
		return 0;
	}
	return 2;
}

int func_137()
{
	if (unk_0xFEBC1E4EC9E001F0())
	{
		if (((((((((((((((((((func_105("CHOP_H_WAIT_0") || func_105("CHOP_H_WAIT_1")) || func_105("CHOP_H_WAIT_2")) || func_105("CHOP_H_WAIT_3")) || func_105("CHOP_H_WAIT_4")) || func_105("CHOP_H_WAIT_H1")) || func_105("CHOP_H_WAIT_H2")) || func_105("CHOP_H_WAIT_H3")) || func_105("CHOP_H_WAIT_H4")) || func_105("CHOP_H_HOME")) || func_105("CHOP_H_WALK_0")) || func_105("CHOP_H_WALK_1")) || func_105("CHOP_H_WALK_2")) || func_105("CHOP_H_WALK_3")) || func_105("CHOP_H_WALK_4")) || func_105("CHOP_H_WALK_H1")) || func_105("CHOP_H_WALK_H2")) || func_105("CHOP_H_WALK_H3")) || func_105("CHOP_H_WALK_H4")) || func_105("CHOP_H_NOAPP"))
		{
			return 1;
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xFEBC1E4EC9E001F0())
		{
			if (((((((((((((((((((func_105("CHOP_H_WAIT_0_KM") || func_105("CHOP_H_WAIT_1_KM")) || func_105("CHOP_H_WAIT_2_KM")) || func_105("CHOP_H_WAIT_3_KM")) || func_105("CHOP_H_WAIT_4_KM")) || func_105("CHOP_H_WAIT_H1_KM")) || func_105("CHOP_H_WAIT_H2_KM")) || func_105("CHOP_H_WAIT_H3_KM")) || func_105("CHOP_H_WAIT_H4_KM")) || func_105("CHOP_H_HOME_KM")) || func_105("CHOP_H_WALK_0_KM")) || func_105("CHOP_H_WALK_1_KM")) || func_105("CHOP_H_WALK_2_KM")) || func_105("CHOP_H_WALK_3_KM")) || func_105("CHOP_H_WALK_4_KM")) || func_105("CHOP_H_WALK_H1_KM")) || func_105("CHOP_H_WALK_H2_KM")) || func_105("CHOP_H_WALK_H3_KM")) || func_105("CHOP_H_WALK_H4_KM")) || func_105("CHOP_H_NOAPP_KM"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_138(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_140(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_139(0, iVar0);
		Global_1378678.f_1135[iVar0] = iParam0;
		Global_1378678.f_1135.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1378678.f_1135.f_22[iVar0]), sParam2, 64);
		Global_1378678.f_1135.f_194[iVar0] = iParam3;
		Global_1378678.f_1135.f_183[iVar0] = iParam4;
		Global_1378678.f_1135.f_216[iVar0] = iParam5;
		Global_1378678.f_1135.f_227[iVar0] = fParam6;
		Global_1378678.f_1135.f_227[iVar0].f_1 = fParam7;
		Global_1378678.f_1135.f_258[iVar0] = iParam8;
		Global_1378678.f_1135.f_269[iVar0] = iParam9;
		Global_1378678.f_1135.f_312[iVar0] = iParam10;
		Global_1378678.f_1135.f_323[iVar0] = iParam11;
		Global_1378678.f_1135.f_334[iVar0] = iParam12;
		Global_1378678.f_1135.f_345[iVar0] = iParam13;
		Global_1378678.f_1130 = 1;
		Global_1378678.f_1135.f_356[iVar0] = iParam14;
		Global_1378678.f_1135.f_367[iVar0] = iParam15;
		Global_1378678.f_1135.f_378[iVar0] = iParam16;
		Global_1378678.f_1135.f_389[iVar0] = iParam17;
		Global_1378678.f_1135.f_400[iVar0] = iParam18;
		Global_1378678.f_1135.f_411[iVar0] = iParam19;
		Global_1378678.f_1135.f_422[iVar0] = iParam20;
		Global_1378678.f_1135.f_433[iVar0] = iParam21;
		Global_1378678.f_1135.f_444[iVar0] = iParam22;
		Global_1378678.f_1135.f_455[iVar0] = iParam23;
		Global_1378678.f_1135.f_466[iVar0] = iParam24;
		Global_1378678.f_1135.f_205[iVar0] = iParam25;
		Global_1378678.f_1135.f_477[iVar0] = iParam26;
		Global_1378678.f_1135.f_488[iVar0] = iParam27;
		Global_1378678.f_1135.f_499[iVar0] = iParam28;
		Global_1378678.f_1135.f_510[iVar0] = iParam29;
		Global_1378678.f_1135.f_521[iVar0] = iParam30;
		Global_1378678.f_1135.f_532[iVar0] = iParam31;
		Global_1378678.f_1135.f_543[iVar0] = iParam32;
		Global_1378678.f_1135.f_554[iVar0] = iParam33;
	}
}

void func_139(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_140(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1378678.f_6293[iParam0], iParam1);
}

bool func_141()
{
	return Global_73825;
}

bool func_142()
{
	return unk_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

int func_143()
{
	if (iLocal_51 == 12)
	{
		return 0;
	}
	if (iLocal_51 == 13 || (iLocal_51 == 14 && func_113(iLocal_69, 242628503)))
	{
		if (iLocal_439 == 0 && unk_0x06F8112AA79C53D9(2, 228))
		{
			func_108("CHOP_BUSY", 0);
			iLocal_439 = 1;
		}
		return 0;
	}
	return 1;
}

int func_144()
{
	if (func_106(unk_0x16F2683693E537C9(), iLocal_69) < 10f)
	{
		if (iLocal_51 == 15 && iLocal_52 < 4)
		{
		}
		else if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
		{
			func_148(0);
			func_147(0);
			return 0;
		}
		else
		{
			func_145();
			func_148(1);
			func_147(1);
			return 1;
		}
	}
	func_148(0);
	func_147(0);
	if (func_105("CHOP_H_INTRO") || (unk_0x0EFF6B4415DAF4A1() && func_105("CHOP_H_INTRO_KM")))
	{
		unk_0xA37A90C62806D848(1);
	}
	return 0;
}

void func_145()
{
	if ((((((((!unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_94, 0) && !(func_105("CHOP_H_INTRO") || (unk_0x0EFF6B4415DAF4A1() && func_105("CHOP_H_INTRO_KM")))) && !func_105("PW_HELP_1")) && !func_105("PW_HELP_2")) && !func_146()) && !unk_0x991B1F0980C62628()) && !func_3(0)) && !func_142()) && !func_141())
	{
		if ((iLocal_51 == 1 || iLocal_51 == 17) || iLocal_51 == 18)
		{
			if (func_118(unk_0x16F2683693E537C9(), 1))
			{
				unk_0xA37A90C62806D848(1);
				if (unk_0x91E3F625EF57450D(0))
				{
					func_130("CHOP_H_INTRO_KM");
				}
				else
				{
					func_130("CHOP_H_INTRO");
				}
			}
		}
	}
	if ((unk_0x0EFF6B4415DAF4A1() && func_105("CHOP_H_INTRO_KM")) || func_105("CHOP_H_INTRO"))
	{
		if ((((func_146() || unk_0x991B1F0980C62628()) || func_3(0)) || func_142()) || func_141())
		{
			unk_0xA37A90C62806D848(1);
		}
	}
}

int func_146()
{
	if (unk_0x8A22C4C08282BF26(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

void func_147(int iParam0)
{
	if (iParam0 == 1)
	{
		if (func_125(iLocal_69))
		{
			unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_69, -1, 48, 2);
			iLocal_73 = 1;
		}
	}
	else if (iLocal_73 == 1 && func_125(unk_0x16F2683693E537C9()))
	{
		unk_0xBC43ED9FE28DB191(unk_0x16F2683693E537C9());
		iLocal_73 = 0;
	}
}

void func_148(int iParam0)
{
	unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 1);
	if (iLocal_74 == 1 && iVar0 != -1569615261)
	{
		iParam0 = 0;
	}
	if (iParam0 == 1)
	{
		if (iLocal_74 == 0 && iVar0 == -1569615261)
		{
			unk_0x25C5402CC10F76CD(iLocal_69, true);
			unk_0xE2F0767314863BD8(iLocal_69, 1, 0);
			unk_0x9EF94AF4D2306535(iLocal_69, 1);
			unk_0x072E4FEB1DF47301(iLocal_69, 1);
			iLocal_74 = 1;
		}
	}
	else if (iLocal_74 == 1)
	{
		unk_0x25C5402CC10F76CD(iLocal_69, false);
		unk_0xE2F0767314863BD8(iLocal_69, 0, 0);
		unk_0x9EF94AF4D2306535(iLocal_69, 0);
		iLocal_74 = 0;
	}
}

void func_149()
{
	if ((iLocal_51 != 6 && iLocal_107 == 0) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
	{
		if (((iLocal_51 == 2 || iLocal_51 == 5) || iLocal_51 == 15) || (iLocal_51 == 14 && !func_113(iLocal_69, 242628503)))
		{
			if (unk_0xFCF127F1F950630C(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), 100f) > 0 || unk_0xFCF127F1F950630C(iLocal_69, unk_0x68F4C0EC296D3901(iLocal_69, 1), 100f) > 0)
			{
				unk_0x3F423BF5B8125A50("creatures@rottweiler@melee@streamed_taunts@");
				iVar0 = 0;
				while (iVar0 < unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar1, -1))
				{
					if ((((!func_125(iVar7) && func_125(uVar1[iVar0])) && (unk_0x4734A6196B611C3B(uVar1[iVar0], unk_0x16F2683693E537C9()) || unk_0x4734A6196B611C3B(uVar1[iVar0], iLocal_69))) && !unk_0x405E212DDE472467(uVar1[iVar0], 0)) && uVar1[iVar0] != iLocal_69)
					{
						iVar7 = uVar1[iVar0];
					}
					iVar0++;
				}
				if (func_125(iVar7))
				{
					unk_0x6C3AE6E278DB3D0E(iLocal_69, iVar7, 0, 16);
					func_108("CHOP_ATTACK2", 0);
					if (((!unk_0xFEBC1E4EC9E001F0() && !unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_94, 6)) && !func_19()) && !unk_0x991B1F0980C62628())
					{
						unk_0x5D96D8530B3D0904(&(Global_111638.f_10044.f_94), 6);
						func_15("CHOP_H_ATTACK", -1);
					}
					func_40(0);
					func_121(6, 0);
				}
			}
			else
			{
				unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar8, 1);
				if (iVar8 != 600439132 && !(iLocal_51 == 15 && iLocal_52 == 1))
				{
					if (unk_0xE632DC0701489D5A(unk_0xD803B885F5E47A62(), &iVar9) || unk_0x38AF5DD0BDDE9545(unk_0xD803B885F5E47A62(), &iVar9))
					{
						if (unk_0xEC560E589DF8370E(iVar9))
						{
							iVar10 = unk_0x940C1429253D3B1B(iVar9);
							if (((!unk_0xEB6A8945D1AC98A1(iVar10) && iVar10 != iLocal_69) && !unk_0x405E212DDE472467(iVar10, 0)) && func_4(unk_0x16F2683693E537C9(), iVar10, 1) < 50f)
							{
								unk_0x6C3AE6E278DB3D0E(iLocal_69, iVar10, 0, 16);
								iLocal_480++;
								if (iLocal_480 >= 3)
								{
									unk_0x0F52891B1CED828B(unk_0xD803B885F5E47A62(), 0f);
									unk_0xCB9603FE12CFDEF4(unk_0xD803B885F5E47A62(), 2, 0);
								}
								func_108("CHOP_ATTACK1", 0);
								if (((!unk_0xFEBC1E4EC9E001F0() && !unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_94, 11)) && !func_19()) && !unk_0x991B1F0980C62628())
								{
									unk_0x5D96D8530B3D0904(&(Global_111638.f_10044.f_94), 11);
									func_15("CHOP_H_AIM", -1);
								}
								func_40(0);
								func_121(6, 0);
							}
						}
					}
				}
			}
		}
	}
	if ((unk_0x1C0640BA9A7327B3() - iLocal_481) > 60000)
	{
		iLocal_481 = unk_0x1C0640BA9A7327B3();
		if (iLocal_480 > 0)
		{
			iLocal_480 = (iLocal_480 - 1);
		}
	}
}

void func_150()
{
	if ((iLocal_51 != 16 && Global_30773 == 1) && unk_0x3A0342D9BFBD378D(unk_0x16F2683693E537C9()))
	{
		func_121(16, 1);
	}
}

void func_151()
{
	if (iLocal_438 == 0)
	{
		if (func_118(unk_0x16F2683693E537C9(), 1))
		{
			func_108("CHOP_DUMP", 0);
			iLocal_438 = 1;
		}
	}
}

void func_152()
{
	if (iLocal_466 != func_153() && func_125(iLocal_69))
	{
		if (func_131())
		{
			iLocal_466 = func_153();
			unk_0x64F9F278AB9DCA2C(iLocal_69, 3, 0, iLocal_466, 0);
		}
		else if (iLocal_466 != 4)
		{
			iLocal_466 = 4;
			unk_0x64F9F278AB9DCA2C(iLocal_69, 3, 0, iLocal_466, 0);
		}
	}
}

int func_153()
{
	return Global_111638.f_20113.f_254.f_4;
}

void func_154()
{
	Global_30914 = 0;
	unk_0x523BCC9DC80CD82F(func_162());
	if (!unk_0xB87F6CF6E5628C67(func_162()))
	{
		return;
	}
	if (func_178(6))
	{
		vLocal_397.f_4 = 6;
		vLocal_397 = { 18,1531f, 535,2469f, 169,6324f };
		vLocal_397.f_3 = 204,8112f;
		vLocal_397.f_5 = { 19,52771f, 537,436f, 170,143f };
		vLocal_397.f_8 = 151,3064f;
		vLocal_419 = { 19,45963f, 535,7817f, 169,6277f };
		vLocal_440[0] = { 17,36033f, 528,8973f, 169,6277f };
		vLocal_440[1] = { 19,46877f, 529,1785f, 169,6277f };
		vLocal_440[2] = { 20,82979f, 531,5168f, 169,6277f };
		vLocal_440[3] = { 22,83555f, 532,3281f, 169,6277f };
		vLocal_440[4] = { 20,79285f, 535,001f, 169,6277f };
		vLocal_440[5] = { 18,05178f, 535,6321f, 169,6277f };
		vLocal_440[6] = { 18,92047f, 534,0938f, 169,6277f };
		vLocal_440[7] = { 17,51333f, 533,4775f, 169,6277f };
		func_161(&uLocal_120);
		func_160(&uLocal_120, 12,41124f, 535,5469f, 169,6277f);
		func_160(&uLocal_120, 19,04497f, 538,5729f, 169,6277f);
		func_160(&uLocal_120, 25,00015f, 534,4414f, 169,6277f);
		func_160(&uLocal_120, 28,0998f, 527,7639f, 169,4277f);
		func_160(&uLocal_120, 17,75896f, 523,3129f, 169,2277f);
		func_159(&uLocal_120);
	}
	else
	{
		vLocal_397.f_4 = 5;
		vLocal_397 = { -10,25168f, -1422,907f, 29,67775f };
		vLocal_397.f_3 = 157,9037f;
		vLocal_397.f_5 = { -9,73f, -1421,55f, 30,1f };
		vLocal_397.f_8 = 148,26f;
		vLocal_419 = { -10,6379f, -1424,561f, 29,67365f };
		vLocal_440[0] = { -10,03643f, -1423,529f, 29,67602f };
		vLocal_440[1] = { -10,78779f, -1425,306f, 29,70937f };
		vLocal_440[2] = { -12,7048f, -1424,748f, 29,72222f };
		vLocal_440[3] = { -12,47465f, -1422,485f, 29,74699f };
		vLocal_440[4] = { -14,26666f, -1424,855f, 29,71964f };
		vLocal_440[5] = { -14,55816f, -1423,048f, 29,78372f };
		vLocal_440[6] = { -16,13293f, -1424,489f, 29,76139f };
		vLocal_440[7] = { -16,25662f, -1423,325f, 29,81294f };
		func_161(&uLocal_120);
		func_160(&uLocal_120, -7,26821f, -1427,065f, 29,67468f);
		func_160(&uLocal_120, -7,39631f, -1418,851f, 29,5858f);
		func_160(&uLocal_120, -14,27201f, -1421,59f, 29,76819f);
		func_160(&uLocal_120, -22,85347f, -1423,173f, 29,74042f);
		func_160(&uLocal_120, -22,77974f, -1427,168f, 29,65953f);
		func_159(&uLocal_120);
	}
	bLocal_395 = func_131();
	func_156();
	if (func_43() == 2)
	{
		unk_0x75CFD6AD66ADFDD1(vLocal_419, 2f, 2);
		unk_0x523BCC9DC80CD82F(-2071359746);
		while (!unk_0xB87F6CF6E5628C67(-2071359746))
		{
			wait(0);
		}
		iLocal_418 = unk_0x7707E48765093646(-2071359746, vLocal_419, 1, true, 0);
		unk_0x71199B01895C6202(-2071359746);
		iLocal_438 = 0;
	}
	else
	{
		iLocal_438 = 1;
	}
	iLocal_422 = 0;
	if (unk_0x09AC81E49EA267F7(0, 2) == 0)
	{
		iLocal_407 = -1;
	}
	else
	{
		iLocal_407 = unk_0x09AC81E49EA267F7(20000, 30000);
	}
	if (iLocal_393 == 1)
	{
		iLocal_51 = 7;
		iLocal_75 = 1;
	}
	else if (iLocal_394 == 1)
	{
		iLocal_51 = 2;
	}
	else if (iLocal_407 > -1)
	{
		iLocal_51 = 11;
		iLocal_75 = 0;
	}
	else
	{
		iLocal_51 = 1;
		iLocal_75 = 0;
	}
	iLocal_87 = unk_0x544B74C043CE9948(11,23f, 515,4f, 168f, 9f, 21f, 4f, func_155(113f), 0, 7);
	iLocal_88 = unk_0x544B74C043CE9948(24f, 528f, 168f, 5f, 5f, 4f, func_155(113f), 0, 7);
	vLocal_89[0] = { 444,1685f, 5569,016f, 780,1895f };
	vLocal_89[1] = { 443,8968f, 5574,931f, 780,1895f };
	vLocal_89[2] = { -739,1624f, 5596,784f, 40,6594f };
	vLocal_89[3] = { -738,8002f, 5593,269f, 40,6594f };
	fLocal_102[0] = 270f;
	fLocal_102[1] = 270f;
	fLocal_102[2] = 95f;
	fLocal_102[3] = 95f;
	func_97();
	iLocal_73 = 0;
	iLocal_408 = 0;
	iLocal_412 = unk_0x1C0640BA9A7327B3();
	iVar0 = func_132();
	if (iVar0 > 4)
	{
		iVar0 = 4;
	}
	StringCopy(&Local_109, "CHOP_H_WAIT_", 32);
	StringIntConCat(&Local_109, iVar0, 32);
	if (unk_0x91E3F625EF57450D(0))
	{
		StringConCat(&Local_109, "_KM", 32);
	}
	Global_30916 = 0;
	iLocal_50 = 1;
}

float func_155(float fParam0)
{
	return (fParam0 * 0,01745329f);
}

void func_156()
{
	if (iLocal_393 == 1)
	{
		if (func_158())
		{
			unk_0x73270B3C9CC833FD(iLocal_69, true, 1);
			unk_0xA3BF0AA5A2608191(iLocal_69);
			func_152();
			while (func_146())
			{
				wait(0);
			}
		}
	}
	else if (iLocal_394 == 1)
	{
		if (func_125(unk_0x16F2683693E537C9()))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				iLocal_80 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
				func_79();
				func_78();
				func_157(&iLocal_69, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), 0, 1);
				if (func_125(iLocal_69))
				{
					unk_0x11AD11297DC58CC7(iLocal_69, 1);
					unk_0x5D634F03BA026EC8(iLocal_69, 1);
					unk_0xA245D14CC59CDD36(iLocal_69, 0);
					unk_0x7D732AB707BE9152(iLocal_69, 0);
					func_100();
					unk_0xE121AE1BBF90E186(iLocal_69, 1);
					unk_0xF821F915BC24D246(iLocal_69, iLocal_80, 0);
					iLocal_107 = 8;
					func_152();
					unk_0xF895E10BF4C72645(iLocal_69, 0, 0);
				}
				while (func_146())
				{
					if (func_125(iLocal_69) && !func_113(iLocal_69, -2017877118))
					{
						unk_0x3F423BF5B8125A50(sLocal_477);
						if (unk_0xB4AE0788C1587752(sLocal_477))
						{
							unk_0xC6EB89C59F2AF6B8(iLocal_69, sLocal_477, "sit", 8f, -8f, -1, 1, 0, 0, 0, 0);
						}
					}
					wait(0);
				}
			}
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_69))
	{
		func_157(&iLocal_69, vLocal_397, vLocal_397.f_3, 1);
	}
	if (func_125(iLocal_69))
	{
		unk_0xF63400DBE3303D26("rel_group_chop", &iLocal_71);
		iLocal_72 = 1;
		unk_0x0E2400AB9174FA81(1, 1862763509, iLocal_71);
		unk_0x0E2400AB9174FA81(1, iLocal_71, 1862763509);
		unk_0x0E2400AB9174FA81(3, 1157867945, iLocal_71);
		unk_0x0E2400AB9174FA81(3, iLocal_71, 1157867945);
		unk_0x6DF7BF67E86AAE86(iLocal_69, iLocal_71);
		unk_0x11AD11297DC58CC7(iLocal_69, 1);
		unk_0x5D634F03BA026EC8(iLocal_69, 1);
		unk_0x4E885A246A9D983A(iLocal_69, 185, 1);
		unk_0x4E885A246A9D983A(iLocal_69, 26, 1);
		unk_0x4E885A246A9D983A(iLocal_69, 32, 0);
		unk_0x4E885A246A9D983A(iLocal_69, 29, 0);
		unk_0x4E885A246A9D983A(iLocal_69, 116, 0);
		unk_0x4E885A246A9D983A(iLocal_69, 118, 1);
		unk_0x4E885A246A9D983A(iLocal_69, 132, 1);
		unk_0x4E885A246A9D983A(iLocal_69, 268, 0);
		unk_0x4E885A246A9D983A(iLocal_69, 107, 1);
		unk_0x4E885A246A9D983A(iLocal_69, 281, 1);
		unk_0x4E885A246A9D983A(iLocal_69, 137, 1);
		unk_0x4E885A246A9D983A(iLocal_69, 146, 1);
		unk_0x4E885A246A9D983A(iLocal_69, 157, 0);
		unk_0x4E885A246A9D983A(iLocal_69, 45, 1);
		unk_0x4E885A246A9D983A(iLocal_69, 167, 1);
		unk_0xA245D14CC59CDD36(iLocal_69, 0);
		unk_0x7D732AB707BE9152(iLocal_69, 0);
		unk_0x262EF6C6306BEA6C(iLocal_69, -100946242, 1, 1, 1);
		unk_0xAFF39FB306F8E232(iLocal_69, 5, 1);
		unk_0xAFF39FB306F8E232(iLocal_69, 0, 0);
		unk_0xAFF39FB306F8E232(iLocal_69, 46, 1);
		unk_0x967762C930C0C5FD(iLocal_69, 100f);
		unk_0x9FA191B317572861(iLocal_69, 100f);
		unk_0xBAFED2F6486F771A(iLocal_69, 512, 1);
		unk_0x00A6D36F507FD6EA(iLocal_69, 0);
		unk_0x093A734E5AEA758F(iLocal_69, 800);
		unk_0xD458AC1C1D29C3B4(iLocal_69, 800, 0);
		unk_0x25BD67336EA4AECE(iLocal_69, 200);
		if (!unk_0x405E212DDE472467(iLocal_69, 0))
		{
			func_57();
		}
		func_111(&uLocal_172, 3, iLocal_69, "CHOP", 0, 1);
		unk_0x25C5402CC10F76CD(iLocal_69, false);
		unk_0xE2F0767314863BD8(iLocal_69, 0, 0);
		unk_0x9EF94AF4D2306535(iLocal_69, 0);
		iLocal_74 = 0;
		Global_30913 = 0;
		iLocal_480 = 0;
		iLocal_481 = unk_0x1C0640BA9A7327B3();
	}
}

int func_157(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	iVar0 = func_162();
	unk_0x523BCC9DC80CD82F(iVar0);
	if (unk_0xB87F6CF6E5628C67(iVar0))
	{
		if (unk_0xC844350D5D58C99A(*iParam0))
		{
			unk_0xEBA53F35D0085654(iParam0);
		}
		*iParam0 = unk_0x36F2404464202779(26, iVar0, vParam1, fParam4, 0, false);
		unk_0x64F9F278AB9DCA2C(*iParam0, 0, 0, 0, 0);
		unk_0x64F9F278AB9DCA2C(*iParam0, 1, 0, 0, 0);
		unk_0x64F9F278AB9DCA2C(*iParam0, 2, 0, 0, 0);
		if (Global_111638.f_20113.f_263)
		{
			unk_0x64F9F278AB9DCA2C(*iParam0, 3, 0, Global_111638.f_20113.f_254.f_4, 0);
		}
		else
		{
			unk_0x64F9F278AB9DCA2C(*iParam0, 3, 0, 4, 0);
		}
		unk_0x64F9F278AB9DCA2C(*iParam0, 4, 0, 0, 0);
		unk_0x64F9F278AB9DCA2C(*iParam0, 5, 0, 0, 0);
		unk_0x64F9F278AB9DCA2C(*iParam0, 6, 0, 0, 0);
		unk_0x64F9F278AB9DCA2C(*iParam0, 7, 0, 0, 0);
		unk_0x64F9F278AB9DCA2C(*iParam0, 8, 0, 0, 0);
		unk_0x64F9F278AB9DCA2C(*iParam0, 9, 0, 0, 0);
		unk_0x64F9F278AB9DCA2C(*iParam0, 10, 0, 0, 0);
		unk_0x64F9F278AB9DCA2C(*iParam0, 11, 0, 0, 0);
		unk_0xFFE16595F5CF81E9(*iParam0);
		if (bParam5)
		{
			unk_0x71199B01895C6202(iVar0);
		}
		return 1;
	}
	return 0;
}

int func_158()
{
	if (func_125(Global_98465) && unk_0x61C907EA8258B04D(Global_98465, func_162()))
	{
		iLocal_69 = Global_98465;
		return 1;
	}
	iVar11 = unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar0, -1);
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		if ((uVar0[iVar12] != 0 && func_125(uVar0[iVar12])) && unk_0x134B62B726CEC8E6(uVar0[iVar12]) == func_162())
		{
			iLocal_69 = uVar0[iVar12];
			return 1;
		}
		iVar12++;
	}
	return 0;
}

void func_159(var uParam0)
{
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 < 3)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		uParam0->f_47 = { uParam0->f_47 + *uParam0[iVar0] };
		iVar0++;
	}
	uParam0->f_47 = { uParam0->f_47 / FtoV(to_float(iVar0)) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		fVar1 = vdist2(uParam0->f_47, *uParam0[iVar0]);
		if (fVar1 > uParam0->f_50)
		{
			uParam0->f_50 = fVar1;
		}
		iVar0++;
	}
	uParam0->f_50 = sqrt(uParam0->f_50);
	uParam0->f_51 = 0;
}

void func_160(var uParam0, vector3 vParam1)
{
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 >= 15)
	{
	}
	*uParam0[uParam0->f_46] = { vParam1 };
	uParam0->f_46++;
}

void func_161(var uParam0)
{
	if (uParam0->f_51)
	{
	}
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
}

int func_162()
{
	return 351016938;
}

int func_163()
{
	if (iLocal_50 > 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_69))
		{
			if (func_167(0) && Global_30773 == 0)
			{
				return 1;
			}
			if (!func_170(1))
			{
				return 1;
			}
			if (Global_111628 == 1)
			{
				return 1;
			}
			if (((((((((((Global_76620 == 1 && Global_30773 == 0) && Global_7360 == 0) && Global_31022 == 0) && Global_31023 == 0) && Global_31024 == 0) && Global_58693 == 0) && !func_146()) && !func_16()) && Global_100832 == 0) && func_125(unk_0x16F2683693E537C9())) && !func_165())
			{
				return 1;
			}
			if (Global_95664 == 1)
			{
				return 1;
			}
			if (unk_0x437347B10A200C4B(iLocal_69, 0))
			{
				if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && unk_0xB87D13D0C064E9D1(iLocal_69, unk_0x16F2683693E537C9(), 1))
				{
					Global_30913 = 1;
					if (!unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_94, 9) && !unk_0x991B1F0980C62628())
					{
						unk_0x5D96D8530B3D0904(&(Global_111638.f_10044.f_94), 9);
						func_15("CHOP_H_DEAD", -1);
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_94, 12) && !unk_0x991B1F0980C62628())
				{
					unk_0x5D96D8530B3D0904(&(Global_111638.f_10044.f_94), 12);
					func_15("CHOP_H_DEAD2", -1);
				}
				return 1;
			}
			else
			{
				if (unk_0x991B1F0980C62628())
				{
					func_164();
				}
				else
				{
					if ((iLocal_51 == 2 || iLocal_51 == 5) || iLocal_51 == 15)
					{
						fVar0 = 200f;
					}
					else
					{
						fVar0 = 100f;
					}
					if (func_4(unk_0x16F2683693E537C9(), iLocal_69, 1) > fVar0)
					{
						if ((!unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_94, 4) && unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62())) && !unk_0x991B1F0980C62628())
						{
							if (((((iLocal_51 == 1 || iLocal_51 == 17) || iLocal_51 == 11) || iLocal_51 == 4) || iLocal_51 == 3) || iLocal_51 == 13)
							{
							}
							else
							{
								unk_0x5D96D8530B3D0904(&(Global_111638.f_10044.f_94), 4);
								func_15("CHOP_H_RANGE", -1);
							}
						}
						return 1;
					}
				}
				if (!unk_0x405E212DDE472467(iLocal_69, 0) && unk_0x7F6DC62EA9922664(iLocal_69) > 0)
				{
					if (unk_0x70EED0761B82965E(iLocal_69))
					{
						vVar1 = { unk_0x68F4C0EC296D3901(iLocal_69, 1) };
						if (unk_0x0A829A23AC042EDE(vVar1, &fVar4))
						{
							if ((fVar4 - vVar1.z) > 0,1f)
							{
								unk_0xD458AC1C1D29C3B4(iLocal_69, 0, 0);
							}
						}
					}
					if (unk_0x4E861BC5B1EDA7BD(iLocal_69))
					{
						unk_0xD458AC1C1D29C3B4(iLocal_69, 0, 0);
					}
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

void func_164()
{
	if (unk_0xFEBC1E4EC9E001F0())
	{
		if ((((((((((((((((((((((((((((((func_105("CHOP_H_INTRO") || func_105("CHOP_H_WAIT_0")) || func_105("CHOP_H_WAIT_1")) || func_105("CHOP_H_WAIT_2")) || func_105("CHOP_H_WAIT_3")) || func_105("CHOP_H_WAIT_4")) || func_105("CHOP_H_WAIT_H1")) || func_105("CHOP_H_WAIT_H2")) || func_105("CHOP_H_WAIT_H3")) || func_105("CHOP_H_WAIT_H4")) || func_105("CHOP_H_HOME")) || func_105("CHOP_H_WALK_0")) || func_105("CHOP_H_WALK_1")) || func_105("CHOP_H_WALK_2")) || func_105("CHOP_H_WALK_3")) || func_105("CHOP_H_WALK_4")) || func_105("CHOP_H_WALK_H1")) || func_105("CHOP_H_WALK_H2")) || func_105("CHOP_H_WALK_H3")) || func_105("CHOP_H_WALK_H4")) || func_105("CHOP_H_HUNT")) || func_105("CHOP_H_NOVEH")) || func_105("CHOP_H_CAR")) || func_105("CHOP_H_BIKE")) || func_105("CHOP_H_ATTACK")) || func_105("CHOP_H_BALL")) || func_105("CHOP_H_WHIS")) || func_105("CHOP_H_NOAPP")) || func_105("CHOP_H_BEHAVE")) || func_105("CHOP_H_BEHAVA")) || func_105("CHOP_H_AIM"))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xFEBC1E4EC9E001F0())
		{
			if ((((((((((((((((((((func_105("CHOP_H_INTRO_KM") || func_105("CHOP_H_WAIT_0_KM")) || func_105("CHOP_H_WAIT_1_KM")) || func_105("CHOP_H_WAIT_2_KM")) || func_105("CHOP_H_WAIT_3_KM")) || func_105("CHOP_H_WAIT_4_KM")) || func_105("CHOP_H_WAIT_H1_KM")) || func_105("CHOP_H_WAIT_H2_KM")) || func_105("CHOP_H_WAIT_H3_KM")) || func_105("CHOP_H_WAIT_H4_KM")) || func_105("CHOP_H_HOME_KM")) || func_105("CHOP_H_WALK_0_KM")) || func_105("CHOP_H_WALK_1_KM")) || func_105("CHOP_H_WALK_2_KM")) || func_105("CHOP_H_WALK_3_KM")) || func_105("CHOP_H_WALK_4_KM")) || func_105("CHOP_H_WALK_H1_KM")) || func_105("CHOP_H_WALK_H2_KM")) || func_105("CHOP_H_WALK_H3_KM")) || func_105("CHOP_H_WALK_H4_KM")) || func_105("CHOP_H_NOAPP_KM"))
			{
				unk_0xA37A90C62806D848(1);
			}
		}
	}
}

bool func_165()
{
	return Global_96053;
}

int func_166()
{
	if (unk_0x991B1F0980C62628())
	{
		return Global_96854;
	}
	if (func_146())
	{
		return Global_96854;
	}
	return 318;
}

int func_167(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_168(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_168(int iParam0)
{
	return func_169(iParam0, Global_41431);
}

int func_169(int iParam0, int iParam1)
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

bool func_170(int iParam0)
{
	func_171();
	return iParam0 == Global_111638.f_2358.f_539.f_4321;
}

void func_171()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_175(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_174(unk_0x16F2683693E537C9());
			if (func_173(iVar0) && (!func_172(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_173(Global_111638.f_2358.f_539.f_4321))
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

bool func_172(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_173(int iParam0)
{
	return iParam0 < 3;
}

int func_174(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_175(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_175(int iParam0)
{
	if (func_173(iParam0))
	{
		return func_176(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_176(int iParam0)
{
	return Global_1798[iParam0];
}

int func_177(vector3 vParam0, int iParam3, int iParam4)
{
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_93782[iVar0].f_7 != 263)
		{
			if (Global_93782[iVar0].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_178(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0x0EB28750412C3A5A(vParam0, Global_93782[iVar0].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_178(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[iParam0], 0);
}

int func_179(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

void func_180()
{
	if (unk_0x8A22C4C08282BF26(unk_0x7CF4675EC2B8ED0B()) > 1)
	{
	}
	else
	{
		Global_30914 = 0;
		func_147(0);
		if (unk_0x8C74DE122769E1BF() && !iLocal_492)
		{
			unk_0x29D5132FBDCF2B1E(0);
		}
		func_67(&iLocal_70);
		if (func_179(63))
		{
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (func_179(126))
				{
					if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), 19,3f, 528,24f, 169,63f, 1) > 50f)
					{
						func_61(139, 1, 0);
					}
				}
				else if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), -11,15f, -1425,56f, 29,67f, 1) > 50f)
				{
					func_61(138, 1, 0);
				}
			}
		}
		func_40(1);
		func_42(&iLocal_418, 0);
		func_42(&iLocal_423, 0);
		if (unk_0x83A8177D302E1A7E(uLocal_79))
		{
			unk_0xF7E25143642732EA(uLocal_79, 0);
		}
		unk_0x29D7581AEF4440C2();
		if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), 600439132, 0))
		{
			unk_0x650567883F5E3136(unk_0x16F2683693E537C9(), 600439132);
		}
		if (func_125(unk_0x16F2683693E537C9()) && !func_172(0))
		{
			unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 32, 1);
		}
		if (unk_0xC844350D5D58C99A(iLocal_69))
		{
			if (func_188())
			{
				func_187(&iLocal_69);
			}
			else
			{
				if (!unk_0x437347B10A200C4B(iLocal_69, 0) && func_125(unk_0x16F2683693E537C9()))
				{
					if (unk_0x16102BEDC7435774(iLocal_69))
					{
						unk_0x0A94A109271BE75A(iLocal_69);
					}
					if (unk_0x69DF961355195C3C(iLocal_108) || unk_0x405E212DDE472467(iLocal_69, 0))
					{
						if (func_125(iLocal_80))
						{
							bVar0 = false;
							while (!bVar0)
							{
								wait(0);
								if (!func_186() || func_184(iLocal_80, 1093140480, 1, 1056964608, 0, 1, 0))
								{
									bVar0 = true;
								}
							}
							if (func_186())
							{
								if (!unk_0x1150BCE24B1630AC(iLocal_80, iLocal_118))
								{
									unk_0x611DFA9294B339CA(iLocal_80, iLocal_118, 0, 0);
								}
								unk_0x3F423BF5B8125A50(sLocal_477);
								while (!unk_0xB4AE0788C1587752(sLocal_477))
								{
									wait(0);
								}
							}
							if (func_186())
							{
								iLocal_108 = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
								unk_0x6BE2EAE992FD7C26(iLocal_108, iLocal_80, unk_0xF653B9B22DA806A9(iLocal_80, "seat_pside_f"));
								unk_0x327AAEE25F323797(iLocal_69);
								unk_0x915804B434753CBD(iLocal_69, iLocal_108, sLocal_477, "get_out", 1000f, -8f, 10, 0, 1148846080, 0);
								unk_0xF895E10BF4C72645(iLocal_69, 0, 0);
								bVar1 = false;
								while (!bVar1)
								{
									wait(0);
									if (!func_186() || (unk_0x69DF961355195C3C(iLocal_108) && unk_0xA45992A6CE82FB43(iLocal_108) > 0,99f))
									{
										bVar1 = true;
									}
								}
								wait(0);
								if (func_186() && !unk_0x1150BCE24B1630AC(iLocal_80, iLocal_118))
								{
									unk_0x152BCACCF710B36E(iLocal_80, iLocal_118, 0);
								}
							}
						}
						else if (func_183() == 1)
						{
							if (iLocal_51 == 2 || iLocal_51 == 15)
							{
								unk_0x327AAEE25F323797(iLocal_69);
								func_124(iLocal_69, unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), 1,75f, 0f, 0f), unk_0xD9522BA9E27E1349(iLocal_69), 1, 1);
								unk_0xF895E10BF4C72645(iLocal_69, 0, 0);
							}
						}
					}
					if (func_125(iLocal_69))
					{
						unk_0xFADC0A217229F6B5(iLocal_69, 1);
						unk_0xF3268524E9BE6D6E(iLocal_69, unk_0x16F2683693E537C9(), 100f, -1, 0, 0);
					}
				}
				func_182(&iLocal_69, 1, 0, 1);
			}
		}
		func_56();
		func_55(&iLocal_80);
		func_98(0);
		unk_0x8D17794CE3273D70("creatures@rottweiler@move");
		unk_0x8D17794CE3273D70("creatures@rottweiler@amb@world_dog_barking@enter");
		unk_0x8D17794CE3273D70("creatures@rottweiler@amb@world_dog_barking@base");
		unk_0x8D17794CE3273D70("creatures@rottweiler@amb@world_dog_barking@idle_a");
		unk_0x8D17794CE3273D70("creatures@rottweiler@amb@world_dog_barking@exit");
		unk_0x8D17794CE3273D70("creatures@rottweiler@in_vehicle@4x4");
		unk_0x8D17794CE3273D70("creatures@rottweiler@in_vehicle@low_car");
		unk_0x8D17794CE3273D70("creatures@rottweiler@in_vehicle@std_car");
		unk_0x8D17794CE3273D70("creatures@rottweiler@in_vehicle@van");
		unk_0x8D17794CE3273D70("creatures@rottweiler@amb@world_dog_sitting@enter");
		unk_0x8D17794CE3273D70("creatures@rottweiler@amb@world_dog_sitting@idle_a");
		unk_0x8D17794CE3273D70("creatures@rottweiler@amb@world_dog_sitting@exit");
		unk_0x8D17794CE3273D70("creatures@rottweiler@tricks@");
		unk_0x8D17794CE3273D70("creatures@rottweiler@amb@sleep_in_kennel@");
		unk_0x8D17794CE3273D70("creatures@rottweiler@indication@");
		unk_0x8D17794CE3273D70("misschop_vehicleenter_exit");
		unk_0x8D17794CE3273D70("creatures@rottweiler@melee@streamed_taunts@");
		func_181(&uLocal_172, 1);
		func_181(&uLocal_172, 3);
		func_164();
		unk_0x5CAFA5DD13658DFE(0);
		if (iLocal_87 > -1)
		{
			unk_0xDDABC98CFF1A4C60(iLocal_87);
		}
		if (iLocal_88 > -1)
		{
			unk_0xDDABC98CFF1A4C60(iLocal_88);
		}
		if (iLocal_72 == 1)
		{
			unk_0x51732B934211201A(iLocal_71);
		}
		unk_0x55D0A2DB35045A35(iLocal_490);
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_181(var uParam0, int iParam1)
{
	if (uParam0[iParam1]->f_7 == 1)
	{
		uParam0[iParam1]->f_7 = 0;
	}
}

void func_182(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(*iParam0))
		{
			unk_0xE8832A9E16A57A1F(*iParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0x8FB4E06C94958F84(*iParam0);
			}
			unk_0xFADC0A217229F6B5(*iParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x11AD11297DC58CC7(*iParam0, 0);
			}
		}
		unk_0x6DAD7906B73F064D(iParam0);
	}
}

int func_183()
{
	func_171();
	return Global_111638.f_2358.f_539.f_4321;
}

int func_184(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_185(iParam0);
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

void func_185(int iParam0)
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

int func_186()
{
	if ((func_125(unk_0x16F2683693E537C9()) && func_125(iLocal_80)) && func_125(iLocal_69))
	{
		return 1;
	}
	return 0;
}

void func_187(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0x437347B10A200C4B(*iParam0, 0))
		{
			unk_0xE8832A9E16A57A1F(*iParam0, 0, 1);
		}
		if (!unk_0xAF6690C489CC6203(*iParam0))
		{
			unk_0x73270B3C9CC833FD(*iParam0, true, 0);
		}
		unk_0xEBA53F35D0085654(iParam0);
	}
}

int func_188()
{
	if (unk_0x991B1F0980C62628() && func_125(iLocal_69))
	{
		if (unk_0x69DF961355195C3C(iLocal_108) || unk_0x405E212DDE472467(iLocal_69, 0))
		{
			return 1;
		}
	}
	if (Global_30915 == 1)
	{
		return 1;
	}
	if (Global_30916 == 1)
	{
		Global_30916 = 0;
		return 1;
	}
	if (func_125(iLocal_69))
	{
		if (iLocal_51 == 11 && unk_0x03068588A1FCED1A(iLocal_69))
		{
			return 1;
		}
		if (func_189(unk_0x68F4C0EC296D3901(iLocal_69, 0), 1f, 1120403456))
		{
			return 0;
		}
	}
	if (!func_167(0))
	{
		return 0;
	}
	if (func_172(6) || func_172(2))
	{
		return 0;
	}
	return 1;
}

int func_189(vector3 vParam0, float fParam3, float fParam4)
{
	if (unk_0x8E28E832BEAC3DCE(vParam0, fParam3))
	{
		if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vParam0, fParam4, fParam4, fParam4, 0, 0, 0))
		{
			return 0;
		}
		else if (unk_0x757EF87A33649210())
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

