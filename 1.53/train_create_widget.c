#region Local Var
	var uLocal_0 = 0;
	struct<3> Local_1 = { 0, 0, 0 } ;
	var uLocal_4 = 0;
	float fLocal_5 = 0f;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	bool bLocal_8 = 0;
	int iLocal_9 = 0;
#endregion

void __EntryFunction__()
{
	Local_1 = { 613f, 6438f, 31f };
	fLocal_5 = 5f;
	iLocal_6 = 1;
	unk_0x227BB9ED71ECB6E8(1);
	if (unk_0xED06FD5709A59F02(3))
	{
		func_1();
	}
	unk_0xD77467CC38DD0DE2(0);
	unk_0x6998E485C8721559();
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), 626.68f, 6442.31f, 30.88f, 1, 0, 0, 1);
		unk_0xE922BAA80E8F9324(unk_0x9B0761B4C3EB8BC7(), -177f);
		unk_0x4C4FC7841A5FB983(0);
	}
	unk_0x78FCB2E22C41B9D5(joaat("freight"));
	unk_0x78FCB2E22C41B9D5(joaat("freightcar"));
	unk_0x78FCB2E22C41B9D5(joaat("freightgrain"));
	unk_0x78FCB2E22C41B9D5(joaat("freightcont1"));
	unk_0x78FCB2E22C41B9D5(joaat("freightcont2"));
	unk_0x78FCB2E22C41B9D5(joaat("tankercar"));
	unk_0x78FCB2E22C41B9D5(joaat("metrotrain"));
	while ((((((!unk_0x7D167B9A0CCDA347(joaat("freight")) || !unk_0x7D167B9A0CCDA347(joaat("freightcar"))) || !unk_0x7D167B9A0CCDA347(joaat("freightgrain"))) || !unk_0x7D167B9A0CCDA347(joaat("freightcont1"))) || !unk_0x7D167B9A0CCDA347(joaat("freightcont2"))) || !unk_0x7D167B9A0CCDA347(joaat("tankercar"))) || !unk_0x7D167B9A0CCDA347(joaat("metrotrain")))
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			if (iLocal_7)
			{
				if (unk_0xAE06B9E39EBDE049(uLocal_0))
				{
					unk_0x456CF97E8766439B(&uLocal_0);
				}
				uLocal_0 = unk_0x02B6C3064645FBE8(uLocal_4, Local_1, iLocal_6);
				iLocal_7 = 0;
			}
			if (iLocal_9)
			{
				Local_1 = { unk_0xA28D6B5DB2149368() };
				iLocal_9 = 0;
			}
			if (unk_0x80FF6C016CDB0FAF(uLocal_0, 0) && !unk_0xA59F96B50B97E63C(uLocal_0, 0))
			{
				unk_0x57EF31B180129B5C(uLocal_0, fLocal_5);
				unk_0x0E344F8043829267(uLocal_0, fLocal_5);
			}
			if (bLocal_8)
			{
				func_1();
			}
		}
	}
}

void func_1()
{
	unk_0xD77467CC38DD0DE2(1);
	unk_0xD39E529EBE5DB04F();
}

