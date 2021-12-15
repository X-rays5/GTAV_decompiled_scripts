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
	if (unk_0x2EBF608FFE6CA406(3))
	{
		unk_0x10FAF14A60A0DBE1();
	}
	while (true)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			Global_111638.f_19958++;
			func_1();
			unk_0x10FAF14A60A0DBE1();
		}
		wait(0);
	}
}

void func_1()
{
	func_2(&(Global_111638.f_19958.f_1), 2048);
}

void func_2(var uParam0, int iParam1)
{
	func_3(uParam0, iParam1);
}

void func_3(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

