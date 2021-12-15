#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	struct<3> Local_4 = { 0, 0, 0 } ;
	struct<3> Local_7 = { 0, 0, 0 } ;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (unk_0xED06FD5709A59F02(2))
	{
		func_4();
	}
	if (unk_0xAE06B9E39EBDE049(uScriptParam_0))
	{
		unk_0x6A8F948698B360B4(uScriptParam_0, 1);
		Local_4 = { unk_0x3E4D3CCC220BDFB1(uScriptParam_0, 1) };
		Local_7 = { unk_0x090239DEAF625B17(uScriptParam_0, 2) };
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (unk_0xAE06B9E39EBDE049(uScriptParam_0))
		{
			if (unk_0xED07D558B3EDDF8A(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0xEE37CF67E6E839EA(uScriptParam_0))
						{
							unk_0x78FCB2E22C41B9D5(joaat("p_abat_roller_1_col"));
							if (unk_0x7D167B9A0CCDA347(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(Local_4, 0f, 0f, 0f, 0))
								{
									uLocal_3 = unk_0x79CC07752E7432A1(joaat("p_abat_roller_1_col"), Local_4, 1, 1, 0);
									unk_0xC82085403E46A869(uLocal_3, Local_7, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0xEE37CF67E6E839EA(uScriptParam_0))
						{
							if (unk_0x7B70881748D166CD(joaat("michael2")) > 0)
							{
								unk_0x131ED02492676000("map_objects");
								if (unk_0xC614DDE265D18415("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0xEE37CF67E6E839EA(uScriptParam_0))
						{
							if (unk_0x7B70881748D166CD(joaat("michael2")) > 0)
							{
								if (Global_95386)
								{
									if (unk_0xC614DDE265D18415("map_objects"))
									{
										unk_0x97B8FF2D794A65A7(uScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar9 = 0.35f;
						Var0 = { Local_4 + Vector(3.45f, 0f, 0f) };
						if (unk_0xAE06B9E39EBDE049(uLocal_3))
						{
							Var3 = { unk_0x3E4D3CCC220BDFB1(uLocal_3, 1) };
							if (!func_2(Var3, Var0, 0.1f, 0))
							{
								Var6 = { Var0 - Var3 };
								unk_0x03D382CB0B44E2FC(uLocal_3, Var3 + func_1(Var6) * FtoV(unk_0x9E3DAF75EFC49F5B()) * Vector(fVar9, fVar9, fVar9), 1, 0, 0, 1);
							}
							else
							{
								Global_95387 = 1;
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

Vector3 func_1(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_2(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x0D77CDCF403AEBD2((Param0.x - Param3.x)) <= fParam6)
		{
			if (unk_0x0D77CDCF403AEBD2((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x0D77CDCF403AEBD2((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x0D77CDCF403AEBD2((Param0.x - Param3.x)) <= fParam6)
	{
		if (unk_0x0D77CDCF403AEBD2((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_3(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_4()
{
	if (unk_0xAE06B9E39EBDE049(uLocal_3))
	{
		unk_0x315F7D8C33F0AB37(&uLocal_3);
	}
	unk_0x74528AC0906CBABE(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0xD39E529EBE5DB04F();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(var uParam0)
{
	if (unk_0xF005CCA4263DF67F(uParam0, uParam0))
	{
	}
}

