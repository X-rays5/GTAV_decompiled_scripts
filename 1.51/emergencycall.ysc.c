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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0,0375f;
	fLocal_26 = 0,17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (unk_0x2EBF608FFE6CA406(11))
	{
		iLocal_43 = 5;
	}
	while (true)
	{
		wait(0);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			switch (iLocal_43)
			{
				case 0:
					func_9();
					break;
				
				case 1:
					break;
				
				case 2:
					func_8();
					if (unk_0x8CD06866876216F2())
					{
						if (unk_0x67FCD2DB807B4E58(7, unk_0x16F2683693E537C9(), 2, 3f, &uLocal_49, 0, 0))
						{
							iLocal_48 = unk_0x1C0640BA9A7327B3();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x58C79C59A23B279F(7, vLocal_45, 2, 3f, &uLocal_49, 0, 0))
					{
						iLocal_48 = unk_0x1C0640BA9A7327B3();
						iLocal_43 = 5;
					}
					break;
				
				case 3:
					func_8();
					if (unk_0x8CD06866876216F2())
					{
						if ((func_7(unk_0xD803B885F5E47A62(), 0) && func_4(unk_0xD803B885F5E47A62()) == 5) && Global_1694085)
						{
							if (Global_1694086 == 0)
							{
								Global_1694086 = 1;
							}
							iLocal_43 = 5;
						}
						else if (unk_0x67FCD2DB807B4E58(5, unk_0x16F2683693E537C9(), 2, 3f, &uLocal_49, 0, 0))
						{
							iLocal_48 = unk_0x1C0640BA9A7327B3();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x58C79C59A23B279F(5, vLocal_45, 2, 3f, &uLocal_49, 0, 0))
					{
						iLocal_48 = unk_0x1C0640BA9A7327B3();
						iLocal_43 = 5;
					}
					break;
				
				case 4:
					func_8();
					if (unk_0x8CD06866876216F2())
					{
						if (unk_0x67FCD2DB807B4E58(3, unk_0x16F2683693E537C9(), 4, 3f, &uLocal_49, 0, 0))
						{
							iLocal_48 = unk_0x1C0640BA9A7327B3();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x58C79C59A23B279F(3, vLocal_45, 4, 3f, &uLocal_49, 0, 0))
					{
						if (Global_95241.f_358 == unk_0x12AB0310C2281427("AGENCY_PREP_1") || (unk_0x8A22C4C08282BF26(unk_0x12AB0310C2281427("agency_prep1")) > 0 && func_3(0)))
						{
							Global_95241.f_358 = unk_0x12AB0310C2281427("AHP1_TRUCKCALLED");
						}
						else if (func_2(67) && !func_2(68))
						{
							Global_95171 = 1;
						}
						iLocal_48 = unk_0x1C0640BA9A7327B3();
						iLocal_43 = 5;
					}
					break;
				
				case 5:
					if (unk_0x1C0640BA9A7327B3() > (iLocal_48 + 60000) || !unk_0xC77B2658E98CC4E5(uLocal_49))
					{
						func_1();
					}
					else if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
					{
						if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
						{
							if (unk_0xC77B2658E98CC4E5(uLocal_49))
							{
								unk_0x201044F0E8495AF6(uLocal_49);
							}
						}
					}
					break;
				}
		}
	}
}

void func_1()
{
	iLocal_43 = 0;
	iLocal_44 = 0;
	unk_0x10FAF14A60A0DBE1();
}

int func_2(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_330[iParam0];
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

int func_4(int iParam0)
{
	if (func_6(iParam0) == 233)
	{
		return func_5(iParam0);
	}
	return -1;
}

int func_5(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_181;
	}
	return -1;
}

int func_6(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_7(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	if (unk_0x1C0640BA9A7327B3() > iLocal_48 + 30000)
	{
		iLocal_43 = 5;
	}
}

void func_9()
{
	switch (iLocal_44)
	{
		case 0:
			iLocal_44 = 1;
			iLocal_48 = unk_0x1C0640BA9A7327B3();
			break;
		
		case 1:
			while (!func_19())
			{
				wait(0);
				if (func_18() == 3)
				{
					iLocal_43 = 3;
				}
				if (func_18() == 4)
				{
					iLocal_43 = 4;
				}
				if (func_18() == 5)
				{
					iLocal_43 = 2;
				}
				if (unk_0x1C0640BA9A7327B3() > iLocal_48 + 30000)
				{
					iLocal_48 = unk_0x1C0640BA9A7327B3();
					func_12(0);
				}
			}
			if (iLocal_43 == 0)
			{
				iLocal_43 = 5;
			}
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				func_10(unk_0x16F2683693E537C9(), &vLocal_45, &uVar0);
			}
			iLocal_48 = unk_0x1C0640BA9A7327B3();
			break;
	}
}

void func_10(int iParam0, var uParam1, var uParam2)
{
	fVar18 = 5f;
	iVar0 = 1;
	iVar19 = 0;
	while (iVar19 < 2)
	{
		switch (iVar19)
		{
			case 0:
				unk_0x4A13F7D4B1E239A0(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), iVar0, uParam1, &fVar16, &iVar1, 5, 1077936128, 0);
				unk_0xC05DA9D35DAF88FD(*uParam1, 1f, 1, &uVar4, &uVar7, &uVar2, &uVar3, &fVar13, 0);
				if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), -3044,66f, 596,43f, 6,58f, 1) < 25f)
				{
					*uParam1 = { -3031,38f, 605,32f, 6,86f };
				}
				vVar10 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) - unk_0x68F4C0EC296D3901(iParam0, 1) };
				fVar14 = unk_0xE7D606C557C86100(vVar10.x, vVar10.y);
				fVar15 = (fVar16 + 180f);
				if (fVar15 > 360f)
				{
					fVar15 = (fVar15 - 360f);
				}
				if (func_11(fVar14, fVar16, 90f))
				{
					*uParam2 = fVar16;
				}
				else
				{
					*uParam2 = fVar15;
				}
				if (fVar13 < 0f)
				{
					fVar17 = 0f;
				}
				else if (unk_0x5B33870CBB8B6AC1(unk_0xDEC4A70C9F250662(*uParam1, 1, 1, 1077936128, 0)))
				{
					fVar17 = 0f;
				}
				else
				{
					fVar17 = (fVar18 * to_float((iVar1 / 2)));
					if (fVar17 == 0f)
					{
						fVar17 = (fVar17 + fVar18);
					}
					if (iVar1 == 5)
					{
						fVar17 = (fVar17 + fVar18);
					}
					if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), 294f, -895f, 28f, 1) < 25f || unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), -713,01f, -819,64f, 22,63f, 1) < 25f)
					{
						fVar17 = (fVar17 + 5f);
					}
					else
					{
						fVar17 = (fVar17 + 3,75f);
					}
					fVar17 = (fVar17 + (fVar13 / 2f));
				}
				if (vdist(unk_0x8A5E176FF719A014(*uParam1, *uParam2, fVar17, 0f, 0f), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1)) > vdist(unk_0x8A5E176FF719A014(*uParam1, *uParam2, -fVar17, 0f, 0f), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1)))
				{
					fVar17 = -fVar17;
				}
				*uParam1 = { unk_0x8A5E176FF719A014(*uParam1, *uParam2, fVar17, 0f, 0f) };
				uVar20 = unk_0x6D4C9F7CF124AE37(*uParam1 + FtoV((uParam1->f_2 + 4,5f)), *uParam1 + Vector(4,5f, 0,5f, 0,5f), 2,5f, 1, 0, 4);
				iVar19++;
				break;
			
			case 1:
				if (iVar0 <= 2)
				{
					if (unk_0x1EC301670B54C6DE(uVar20, &iVar21, &vVar25, &uVar22, &uVar28) == 2)
					{
						if (iVar21 != 0)
						{
							if (vVar25.z > (uParam1->f_2 + 8,5f))
							{
								iVar19++;
							}
							else
							{
								iVar0++;
								iVar19 = 0;
							}
						}
						else
						{
							iVar19++;
						}
					}
				}
				else
				{
					iVar19++;
				}
				break;
			
			case 2:
				break;
		}
	}
}

int func_11(float fParam0, float fParam1, float fParam2)
{
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

void func_12(int iParam0)
{
	if (func_17())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_16())
		{
			func_14(1, 1);
		}
		else
		{
			func_14(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		unk_0x5D96D8530B3D0904(&Global_7357, 16);
	}
	if (unk_0x1EE04CEA36EF313B())
	{
		unk_0x5CEB4DB888A62073(0);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		unk_0x5D96D8530B3D0904(&Global_7356, 30);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_7356, 30);
	}
	if (!func_13())
	{
		Global_19486.f_1 = 3;
	}
}

int func_13()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_15(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				unk_0x1CFAC524932A967E(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431] };
			unk_0x39F06A2B18483C68(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431] };
		if (bParam1)
		{
			unk_0x39F06A2B18483C68(Global_19423);
		}
		else
		{
			unk_0x39F06A2B18483C68(Global_19414);
		}
	}
}

int func_15(int iParam0)
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

bool func_16()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_17()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

int func_18()
{
	return Global_21822;
}

int func_19()
{
	if (Global_20805 == 0)
	{
		return 1;
	}
	return 0;
}

