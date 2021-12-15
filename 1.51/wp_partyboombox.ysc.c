void __EntryFunction__()
{
	if (unk_0x8A22C4C08282BF26(-1821484484) > 1)
	{
		unk_0x10FAF14A60A0DBE1();
	}
	if (unk_0x2EBF608FFE6CA406(18))
	{
		func_1();
	}
	while (true)
	{
		wait(0);
		if (!unk_0x338D6FF72D84D90F())
		{
			iLocal_0 = 3;
		}
		switch (iLocal_0)
		{
			case 0:
				if (unk_0xD8A54335F18763BA() >= 22 || unk_0xD8A54335F18763BA() <= 4)
				{
					iLocal_0 = 1;
				}
				else
				{
					func_1();
				}
				break;
			
			case 1:
				if (!unk_0xBCFF5481C5F58C19("ID2_21_G_Night"))
				{
					unk_0x2404539258C5376B("ID2_21_G_Night");
					iLocal_0 = 2;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				if (!unk_0xEB880D98B5988D0C() && !unk_0x991B1F0980C62628())
				{
					func_1();
				}
				break;
		}
	}
}

void func_1()
{
	if (unk_0xBCFF5481C5F58C19("ID2_21_G_Night"))
	{
		unk_0x81CF20E10AAD5FD5("ID2_21_G_Night");
	}
	unk_0x10FAF14A60A0DBE1();
}

