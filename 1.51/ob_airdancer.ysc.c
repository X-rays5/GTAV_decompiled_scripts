void __EntryFunction__()
{
	if (unk_0x2EBF608FFE6CA406(2))
	{
		func_1();
	}
	if (unk_0xC844350D5D58C99A(iScriptParam_0))
	{
		unk_0x1E9649458B15960F(iScriptParam_0, true);
	}
	while (true)
	{
		wait(0);
		if (unk_0xC844350D5D58C99A(iScriptParam_0))
		{
			if (unk_0x63D2C15453688621(iScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x1A5AE8A9B1D42A10(iScriptParam_0))
						{
							unk_0x3F423BF5B8125A50("map_objects");
							if (unk_0xB4AE0788C1587752("map_objects"))
							{
								unk_0xD65E6E13E145467B(iScriptParam_0, "airdancer_test", "map_objects", 1f, true, 0, 0, 0f, 0);
								iLocal_2 = 1;
							}
						}
						break;
					
					case 1:
						break;
					
					case 2:
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
	func_2("ob_airdancer Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x10FAF14A60A0DBE1();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE(sParam0, sParam0))
	{
	}
}

