#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	struct<3> Local_2 = { 0, 0, 0 } ;
	var uLocal_5 = 0;
	char* sLocal_6 = NULL;
	int iLocal_7 = 0;
	char* sLocal_8 = NULL;
	int iLocal_9 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	sLocal_6 = "Poledance_01";
	iLocal_7 = joaat("a_f_y_beach_01");
	sLocal_8 = "MISSSTRIP_CLUB";
	if (unk_0xAE06B9E39EBDE049(uScriptParam_0))
	{
		unk_0x6A8F948698B360B4(uScriptParam_0, 1);
		Local_2 = { unk_0x7EC595B99EA7C4B1(uScriptParam_0, 0f, 0f, 0f) };
		uLocal_5 = unk_0xEF7858F25585F853(uScriptParam_0);
		unk_0x58ADF88C51AAFDC5(uScriptParam_0, 0, 0);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (unk_0xAE06B9E39EBDE049(uScriptParam_0))
		{
			if (unk_0xED07D558B3EDDF8A(uScriptParam_0))
			{
				switch (iLocal_0)
				{
					case 0:
						if (func_5())
						{
							func_4();
							iLocal_0 = 2;
						}
						break;
					
					case 2:
						func_3();
						if (func_2())
						{
							unk_0x58ADF88C51AAFDC5(uScriptParam_0, 1, 0);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!unk_0x5AEB5DDFFAD43CA5(uLocal_1))
						{
							unk_0xAEC92B0DA8075AC9(uLocal_1, -1);
							unk_0xAF3D0236D181BE08(unk_0x460153A63B9477BC(), 1);
							unk_0xCBA6B2B569DCAFD8(uLocal_1, 1);
							unk_0xD39E529EBE5DB04F();
						}
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	if (!unk_0xA59F96B50B97E63C(uLocal_1, 0))
	{
		if (!unk_0xA38BFCB05DBE439D(uLocal_1))
		{
			unk_0x586DDC617E714637(&uLocal_1);
		}
		else
		{
			unk_0xCBA6B2B569DCAFD8(uLocal_1, 1);
		}
	}
	unk_0xD39E529EBE5DB04F();
}

int func_2()
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(uLocal_1))
		{
			if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), uLocal_1, Var0, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0xCDF860E56BBCC6B4(uLocal_1, unk_0x9B0761B4C3EB8BC7(), 1))
			{
				return 1;
			}
			if (unk_0xA65352E7FEA59881(unk_0x9B0761B4C3EB8BC7(), uLocal_1))
			{
				return 1;
			}
		}
		if (unk_0x7922FF28ED63354A(unk_0x9B0761B4C3EB8BC7()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	if (!unk_0x5AEB5DDFFAD43CA5(uLocal_1))
	{
		if (unk_0x16BC17A8EDC701A2(uLocal_1, -2017877118) == 7)
		{
			unk_0x756D74A3EF0AB788(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (unk_0xD8E0ED6453B9EACD(uLocal_1, sLocal_8, sLocal_6, 3))
		{
			unk_0x756D74A3EF0AB788(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_9)
		{
			if (unk_0x9934470AA0A08B57(uLocal_1, sLocal_8, sLocal_6, 3))
			{
				unk_0xFC4EDD7B55A807F1(uLocal_1, sLocal_8, sLocal_6, unk_0x658086F2B3C5E4E4(0, 1065353216));
				iLocal_9 = 1;
			}
		}
	}
}

void func_4()
{
	if (unk_0xA59F96B50B97E63C(uLocal_1, 0))
	{
		uLocal_1 = unk_0xB3116B49FE00E2F1(5, iLocal_7, Local_2.x, Local_2.f_1, Local_2.f_2, uLocal_5, 1, 1);
		unk_0xD93D982926D0D8B3(uLocal_1, 0);
		unk_0x0DC39BE87E4C5599(uLocal_1, 0);
		unk_0x4E65320BC9AD521C(uLocal_1, 1);
	}
}

int func_5()
{
	unk_0x78FCB2E22C41B9D5(iLocal_7);
	unk_0x131ED02492676000(sLocal_8);
	if (unk_0x7D167B9A0CCDA347(iLocal_7) && unk_0xC614DDE265D18415(sLocal_8))
	{
		return 1;
	}
	else
	{
		unk_0x78FCB2E22C41B9D5(iLocal_7);
		unk_0x131ED02492676000(sLocal_8);
	}
	return 0;
}

