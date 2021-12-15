void __EntryFunction__()
{
	if (unk_0x2EBF608FFE6CA406(2))
	{
		func_4();
	}
	if (unk_0xC844350D5D58C99A(iScriptParam_0))
	{
		unk_0x1E9649458B15960F(iScriptParam_0, true);
		vLocal_4 = { unk_0x68F4C0EC296D3901(iScriptParam_0, true) };
		vLocal_7 = { unk_0x835730A2D89F6093(iScriptParam_0, 2) };
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
							unk_0x523BCC9DC80CD82F(1922550796);
							if (unk_0xB87F6CF6E5628C67(1922550796))
							{
								if (!func_3(vLocal_4, 0f, 0f, 0f, 0))
								{
									iLocal_3 = unk_0x7707E48765093646(1922550796, vLocal_4, 1, true, false);
									unk_0xC023D1C4BF532815(iLocal_3, vLocal_7, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x1A5AE8A9B1D42A10(iScriptParam_0))
						{
							if (unk_0x8A22C4C08282BF26(-622120100) > 0)
							{
								unk_0x3F423BF5B8125A50("map_objects");
								if (unk_0xB4AE0788C1587752("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x1A5AE8A9B1D42A10(iScriptParam_0))
						{
							if (unk_0x8A22C4C08282BF26(-622120100) > 0)
							{
								if (Global_95175)
								{
									if (unk_0xB4AE0788C1587752("map_objects"))
									{
										unk_0xD65E6E13E145467B(iScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, false, 1, 0, 0f, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar9 = 0,35f;
						vVar0 = { vLocal_4 + Vector(3,45f, 0f, 0f) };
						if (unk_0xC844350D5D58C99A(iLocal_3))
						{
							vVar3 = { unk_0x68F4C0EC296D3901(iLocal_3, true) };
							if (!func_2(vVar3, vVar0, 0,1f, 0))
							{
								vVar6 = { vVar0 - vVar3 };
								unk_0xA47B46945FF6DE74(iLocal_3, vVar3 + func_1(vVar6) * FtoV(unk_0x6117725E0134737F()) * Vector(fVar9, fVar9, fVar9), 1, false, 0, 1);
							}
							else
							{
								Global_95176 = 1;
								iLocal_2 = 4;
							}
						}
						break;
					
					case 4:
						break;
				}
			}
			else
			{
				func_4();
			}
		}
		else
		{
			func_4();
		}
	}
}

Vector3 func_1(vector3 vParam0)
{
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

int func_2(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x755FF954DAE327E1((vParam0.x - vParam3.x)) <= fParam6)
		{
			if (unk_0x755FF954DAE327E1((vParam0.y - vParam3.y)) <= fParam6)
			{
				if (unk_0x755FF954DAE327E1((vParam0.z - vParam3.z)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x755FF954DAE327E1((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (unk_0x755FF954DAE327E1((vParam0.y - vParam3.y)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_3(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_4()
{
	if (unk_0xC844350D5D58C99A(iLocal_3))
	{
		unk_0xF690C84DADBB3551(&iLocal_3);
	}
	unk_0x71199B01895C6202(1922550796);
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x10FAF14A60A0DBE1();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE(sParam0, sParam0))
	{
	}
}

