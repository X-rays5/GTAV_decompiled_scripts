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
    char* sLocal_18 = NULL;
    var uLocal_19 = 0;
    var uLocal_20 = 0;
    var uLocal_21 = 0;
    var uLocal_22 = 0;
    float fLocal_23 = 0f;
    float fLocal_24 = 0f;
    float fLocal_25 = 0f;
    var uLocal_26 = 0;
    var uLocal_27 = 0;
    int iLocal_28 = 0;
    float fLocal_29 = 0f;
    var uLocal_30 = 0;
    var uLocal_31 = 0;
    var uLocal_32 = 0;
    float fLocal_33 = 0f;
    float fLocal_34 = 0f;
    var uLocal_35 = 0;
    var uLocal_36 = 0;
    var uLocal_37 = 0;
    var uLocal_38 = 0;
    int iLocal_39 = 0;
    int iLocal_40 = 0;
    int iLocal_41 = 0;
    int iLocal_42 = 0;
    var uLocal_43 = 0;
    var uLocal_44 = 0;
    var uLocal_45 = 0;
    int iLocal_46 = 0;
    var uLocal_47 = 0;
    var uLocal_48 = 0;
    var uLocal_49 = 0;
    var uLocal_50 = 0;
    var uLocal_51 = 0;
    var uLocal_52 = 0;
    var uLocal_53 = 0;
    var uLocal_54 = 0;
    var uLocal_55 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
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
    fLocal_14 = 0.001f;
    iLocal_17 = -1;
    sLocal_18 = "NULL";
    fLocal_23 = 80f;
    fLocal_24 = 140f;
    fLocal_25 = 180f;
    iLocal_28 = 3;
    fLocal_29 = 0f;
    fLocal_33 = -0.0375f;
    fLocal_34 = 0.17f;
    iLocal_39 = 1;
    iLocal_40 = 65;
    iLocal_41 = 49;
    iLocal_42 = 64;
    if (func_88(&iLocal_46))
    {
        while (!func_76())
        {
            func_64(&iLocal_46);
            if (func_54(&iLocal_46))
            {
            }
            else
            {
                func_14(&iLocal_46);
                SYSTEM::WAIT(0);
            }
        }
    }
    func_1();
}

void func_1()//Position - 0xA6
{
    func_13();
    if (func_10())
    {
        unk_0x0D23E3918F7AF11B(1);
    }
    if (func_8(&iLocal_46))
    {
        func_4(&iLocal_46);
    }
    unk_0x60F310C72311BCA8(5);
    func_3();
    unk_0x2C3DC827CA1B9E3A(unk_0x7C7787D2D7139A85(), 0);
    func_2();
}

void func_2()//Position - 0xE3
{
    unk_0x9C9E32388A7886A2();
}

void func_3()//Position - 0xEF
{
    unk_0x3B76114EC84D5812(&(Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_34F), 3);
}

void func_4(int iParam0)//Position - 0x10A
{
    func_7(0, 1);
    func_6(0, -1, 1);
    func_5(&(iParam0->f_6), 5);
}

void func_5(int iParam0, int iParam1)//Position - 0x128
{
    unk_0x3B76114EC84D5812(iParam0, iParam1);
}

void func_6(bool bParam0, int iParam1, bool bParam2)//Position - 0x138
{
    if ((!unk_0xAB2A82A2838B61B7(Global_24DDCA.f_5C8) || Global_24DDCA.f_5C8 == unk_0x429EE9FF15BB9033()) || bParam2)
    {
        if (bParam0)
        {
            Global_24DDCA.f_5C8 = unk_0x429EE9FF15BB9033();
            Global_24DDCA.f_5C9 = unk_0x169A8AC9F93C2727();
        }
        else
        {
            Global_24DDCA.f_5C8 = -1;
        }
        Global_24DDCA.f_5CB = iParam1;
        Global_24DDCA.f_5CD = bParam0;
    }
    else if (!bParam2)
    {
    }
}

void func_7(bool bParam0, bool bParam1)//Position - 0x1AA
{
    if ((!unk_0xAB2A82A2838B61B7(Global_24DDCA.f_5D8) || Global_24DDCA.f_5D8 == unk_0x429EE9FF15BB9033()) || bParam1)
    {
        if (bParam0)
        {
            Global_24DDCA.f_5D8 = unk_0x429EE9FF15BB9033();
            unk_0xA1E7A40E1F56E511(&(Global_24FD09[unk_0x7C7787D2D7139A85() /*421*/].f_44.f_2), 23);
        }
        else
        {
            Global_24DDCA.f_5D8 = -1;
            unk_0x3B76114EC84D5812(&(Global_24FD09[unk_0x7C7787D2D7139A85() /*421*/].f_44.f_2), 23);
        }
    }
    else if (!bParam1)
    {
    }
}

bool func_8(int iParam0)//Position - 0x229
{
    return func_9(&(iParam0->f_6), 5);
}

bool func_9(int iParam0, int iParam1)//Position - 0x23A
{
    return unk_0xA2BC31158C8CEFD2(*iParam0, iParam1);
}

bool func_10()//Position - 0x24B
{
    return ((((func_12("STEALTH_ON") || func_12("STEALTH_OFF")) || func_12(func_11())) || func_12("STEALTH_ON_P")) || func_12("STEALTH_OFF_P"));
}

char* func_11()//Position - 0x28E
{
    return "STEALTH_WARN";
}

int func_12(char* sParam0)//Position - 0x299
{
    unk_0x1EF54B101C71E009(sParam0);
    return unk_0xFA637652FFB4E2E5(0);
}

void func_13()//Position - 0x2AC
{
    unk_0x3B76114EC84D5812(&(Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_34F), 1);
}

void func_14(int iParam0)//Position - 0x2C7
{
    func_51(iParam0);
    func_50(iParam0);
    if (func_49(iParam0))
    {
        if (((func_48(iParam0) && !func_47(iParam0)) && unk_0x77FF1FAF6F41CA71(iParam0->f_1)) && !func_46())
        {
            func_45(iParam0, 1, 0);
            func_44(iParam0);
        }
        else if (func_9(&(iParam0->f_6), 6) && func_47(iParam0))
        {
            if (unk_0x77FF1FAF6F41CA71(iParam0->f_1) && !func_46())
            {
                func_45(iParam0, 0, 0);
                func_5(&(iParam0->f_6), 6);
                func_5(&(iParam0->f_6), 2);
            }
        }
    }
    if (func_43(iParam0))
    {
        unk_0x2C3DC827CA1B9E3A(unk_0x7C7787D2D7139A85(), 1);
        func_42();
        func_41(iParam0);
    }
    else if (func_40(iParam0))
    {
        unk_0x2C3DC827CA1B9E3A(unk_0x7C7787D2D7139A85(), 0);
        func_13();
        func_41(iParam0);
        func_39(iParam0, 5);
    }
    if (func_47(iParam0) && !func_48(iParam0))
    {
        func_37(iParam0);
        func_36();
        func_39(iParam0, 2);
        if (func_33(iParam0))
        {
            func_32();
        }
    }
    else
    {
        func_15(iParam0);
    }
    func_3();
    unk_0x3B76114EC84D5812(&(Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_34F), 4);
}

void func_15(int iParam0)//Position - 0x3FC
{
    int iVar0;
    
    if (((((((!func_9(&(iParam0->f_6), 0) && !func_9(&(iParam0->f_6), 2)) && !unk_0x0945988C02AF3025()) && func_31(iParam0)) && !func_30(0)) && !func_29()) && func_27()) && unk_0xD4B321D9096B01FC(unk_0x300C62F79A4441EB(iParam0->f_1, -1, 0)))
    {
        func_21(iParam0, 1);
        func_20(&(iParam0->f_6), 3);
        iVar0 = func_19(iParam0->f_6.f_2, 3333, 10000);
        iParam0->f_6.f_2 = 0;
        func_17(func_18(iParam0), iVar0);
        func_16(iParam0);
        func_20(&(iParam0->f_6), 0);
    }
}

void func_16(int iParam0)//Position - 0x4AA
{
    func_20(&(iParam0->f_6), 2);
}

void func_17(char* sParam0, int iParam1)//Position - 0x4BB
{
    unk_0xD95C12E1062B7D5E(sParam0);
    unk_0x40DC0B0D5BD91E06(0, 0, 1, iParam1);
}

char* func_18(int iParam0)//Position - 0x4D2
{
    if (func_49(iParam0))
    {
        return "STEALTH_OFF";
    }
    return "STEALTH_OFF_P";
}

int func_19(bool bParam0, int iParam1, int iParam2)//Position - 0x4EF
{
    if (bParam0)
    {
        return iParam1;
    }
    return iParam2;
}

void func_20(int iParam0, int iParam1)//Position - 0x506
{
    unk_0xA1E7A40E1F56E511(iParam0, iParam1);
}

void func_21(int iParam0, int iParam1)//Position - 0x516
{
    int iVar0;
    
    if (func_49(iParam0))
    {
        switch (iParam0->f_2)
        {
            case 1181327175:
                iVar0 = (func_24(19004, -1, -1) + iParam1);
                if (iVar0 >= 0)
                {
                    func_22(19004, iVar0, -1, 1);
                }
                break;
            }
    }
}

var func_22(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x559
{
    int iVar0;
    int iVar1;
    var uVar2;
    
    if (iParam2 == -1)
    {
        iParam2 = func_23();
    }
    if (iParam1 < 0)
    {
        iParam1 = 255;
    }
    iVar0 = 0;
    iVar1 = 0;
    if (iParam0 >= 384 && iParam0 < 457)
    {
        iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 384), 0, 1, iParam2);
        iVar1 = ((iParam0 - 384) - unk_0xB07659B9AFDF0087((iParam0 - 384)) * 8) * 8;
    }
    else if (iParam0 >= 457 && iParam0 < 513)
    {
        iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 457), 1, 1, iParam2);
        iVar1 = ((iParam0 - 457) - unk_0xB07659B9AFDF0087((iParam0 - 457)) * 8) * 8;
    }
    else if (iParam0 >= 1281 && iParam0 < 1305)
    {
        iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 1281), 0, 0, 0);
        iVar1 = ((iParam0 - 1281) - unk_0xB07659B9AFDF0087((iParam0 - 1281)) * 8) * 8;
    }
    else if (iParam0 >= 1305 && iParam0 < 1361)
    {
        iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 1305), 1, 0, 0);
        iVar1 = ((iParam0 - 1305) - unk_0xB07659B9AFDF0087((iParam0 - 1305)) * 8) * 8;
    }
    else if (iParam0 >= 1393 && iParam0 < 2919)
    {
        iVar0 = unk_0x752DE25BC350DD79((iParam0 - 1393), 0, 1, iParam2);
        iVar1 = ((iParam0 - 1393) - unk_0xB07659B9AFDF0087((iParam0 - 1393)) * 8) * 8;
    }
    else if (iParam0 >= 1361 && iParam0 < 1393)
    {
        iVar0 = unk_0x752DE25BC350DD79((iParam0 - 1361), 0, 0, 0);
        iVar1 = ((iParam0 - 1361) - unk_0xB07659B9AFDF0087((iParam0 - 1361)) * 8) * 8;
    }
    else if (iParam0 >= 3879 && iParam0 < 4143)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
        iVar1 = ((iParam0 - 3879) - unk_0xB07659B9AFDF0087((iParam0 - 3879)) * 8) * 8;
    }
    else if (iParam0 >= 4143 && iParam0 < 4207)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
        iVar1 = ((iParam0 - 4143) - unk_0xB07659B9AFDF0087((iParam0 - 4143)) * 8) * 8;
    }
    else if (iParam0 >= 4399 && iParam0 < 6028)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
        iVar1 = ((iParam0 - 4399) - unk_0xB07659B9AFDF0087((iParam0 - 4399)) * 8) * 8;
    }
    else if (iParam0 >= 6413 && iParam0 < 7262)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
        iVar1 = ((iParam0 - 6413) - unk_0xB07659B9AFDF0087((iParam0 - 6413)) * 8) * 8;
    }
    else if (iParam0 >= 7262 && iParam0 < 7313)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
        iVar1 = ((iParam0 - 7262) - unk_0xB07659B9AFDF0087((iParam0 - 7262)) * 8) * 8;
    }
    else if (iParam0 >= 7681 && iParam0 < 9361)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
        iVar1 = ((iParam0 - 7681) - unk_0xB07659B9AFDF0087((iParam0 - 7681)) * 8) * 8;
    }
    else if (iParam0 >= 9553 && iParam0 < 15265)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
        iVar1 = ((iParam0 - 9553) - unk_0xB07659B9AFDF0087((iParam0 - 9553)) * 8) * 8;
    }
    else if (iParam0 >= 15265 && iParam0 < 15369)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
        iVar1 = ((iParam0 - 15265) - unk_0xB07659B9AFDF0087((iParam0 - 15265)) * 8) * 8;
    }
    else if (iParam0 >= 16010 && iParam0 < 18098)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
        iVar1 = ((iParam0 - 16010) - unk_0xB07659B9AFDF0087((iParam0 - 16010)) * 8) * 8;
    }
    else if (iParam0 >= 18162 && iParam0 < 19018)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
        iVar1 = ((iParam0 - 18162) - unk_0xB07659B9AFDF0087((iParam0 - 18162)) * 8) * 8;
    }
    else if (iParam0 >= 19018 && iParam0 < 22066)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
        iVar1 = ((iParam0 - 19018) - unk_0xB07659B9AFDF0087((iParam0 - 19018)) * 8) * 8;
    }
    else if (iParam0 >= 22194 && iParam0 < 24962)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
        iVar1 = ((iParam0 - 22194) - unk_0xB07659B9AFDF0087((iParam0 - 22194)) * 8) * 8;
    }
    else if (iParam0 >= 25538 && iParam0 < 26810)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
        iVar1 = ((iParam0 - 25538) - unk_0xB07659B9AFDF0087((iParam0 - 25538)) * 8) * 8;
    }
    else if (iParam0 >= 27258 && iParam0 < 28098)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
        iVar1 = ((iParam0 - 27258) - unk_0xB07659B9AFDF0087((iParam0 - 27258)) * 8) * 8;
    }
    else if (iParam0 >= 7641 && iParam0 < 7681)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
        iVar1 = ((iParam0 - 7641) - unk_0xB07659B9AFDF0087((iParam0 - 7641)) * 8) * 8;
    }
    else if (iParam0 >= 7313 && iParam0 < 7321)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
        iVar1 = ((iParam0 - 7313) - unk_0xB07659B9AFDF0087((iParam0 - 7313)) * 8) * 8;
    }
    uVar2 = unk_0x49DD5185FB090323(iVar0, iParam1, iVar1, 8, iParam3);
    return uVar2;
}

int func_23()//Position - 0xB0E
{
    return Global_1407E9;
}

int func_24(int iParam0, int iParam1, int iParam2)//Position - 0xB1A
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    if (iParam1 == -1)
    {
        iParam1 = func_23();
    }
    iVar0 = 0;
    iVar1 = func_26(iParam0, iParam1);
    iVar2 = func_25(iParam0);
    if (0 != iVar1)
    {
        if (!unk_0xDB563F2AD2722869(iVar1, &iVar0, iVar2, 8, iParam2))
        {
            iVar0 = 0;
        }
    }
    return iVar0;
}

int func_25(int iParam0)//Position - 0xB60
{
    int iVar0;
    
    iVar0 = 0;
    if (iParam0 >= 384 && iParam0 < 457)
    {
        iVar0 = ((iParam0 - 384) - unk_0xB07659B9AFDF0087((iParam0 - 384)) * 8) * 8;
    }
    else if (iParam0 >= 457 && iParam0 < 513)
    {
        iVar0 = ((iParam0 - 457) - unk_0xB07659B9AFDF0087((iParam0 - 457)) * 8) * 8;
    }
    else if (iParam0 >= 1281 && iParam0 < 1305)
    {
        iVar0 = ((iParam0 - 1281) - unk_0xB07659B9AFDF0087((iParam0 - 1281)) * 8) * 8;
    }
    else if (iParam0 >= 1305 && iParam0 < 1361)
    {
        iVar0 = ((iParam0 - 1305) - unk_0xB07659B9AFDF0087((iParam0 - 1305)) * 8) * 8;
    }
    else if (iParam0 >= 1361 && iParam0 < 1393)
    {
        iVar0 = ((iParam0 - 1361) - unk_0xB07659B9AFDF0087((iParam0 - 1361)) * 8) * 8;
    }
    else if (iParam0 >= 1393 && iParam0 < 2919)
    {
        iVar0 = ((iParam0 - 1393) - unk_0xB07659B9AFDF0087((iParam0 - 1393)) * 8) * 8;
    }
    else if (iParam0 >= 4143 && iParam0 < 4207)
    {
        iVar0 = ((iParam0 - 4143) - unk_0xB07659B9AFDF0087((iParam0 - 4143)) * 8) * 8;
    }
    else if (iParam0 >= 3879 && iParam0 < 4143)
    {
        iVar0 = ((iParam0 - 3879) - unk_0xB07659B9AFDF0087((iParam0 - 3879)) * 8) * 8;
    }
    else if (iParam0 >= 4399 && iParam0 < 6028)
    {
        iVar0 = ((iParam0 - 4399) - unk_0xB07659B9AFDF0087((iParam0 - 4399)) * 8) * 8;
    }
    else if (iParam0 >= 6413 && iParam0 < 7262)
    {
        iVar0 = ((iParam0 - 6413) - unk_0xB07659B9AFDF0087((iParam0 - 6413)) * 8) * 8;
    }
    else if (iParam0 >= 7262 && iParam0 < 7313)
    {
        iVar0 = ((iParam0 - 7262) - unk_0xB07659B9AFDF0087((iParam0 - 7262)) * 8) * 8;
    }
    else if (iParam0 >= 7681 && iParam0 < 9361)
    {
        iVar0 = ((iParam0 - 7681) - unk_0xB07659B9AFDF0087((iParam0 - 7681)) * 8) * 8;
    }
    else if (iParam0 >= 9553 && iParam0 < 15265)
    {
        iVar0 = ((iParam0 - 9553) - unk_0xB07659B9AFDF0087((iParam0 - 9553)) * 8) * 8;
    }
    else if (iParam0 >= 15265 && iParam0 < 15369)
    {
        iVar0 = ((iParam0 - 15265) - unk_0xB07659B9AFDF0087((iParam0 - 15265)) * 8) * 8;
    }
    else if (iParam0 >= 7313 && iParam0 < 7321)
    {
        iVar0 = ((iParam0 - 7313) - unk_0xB07659B9AFDF0087((iParam0 - 7313)) * 8) * 8;
    }
    else if (iParam0 >= 7641 && iParam0 < 7681)
    {
        iVar0 = ((iParam0 - 7641) - unk_0xB07659B9AFDF0087((iParam0 - 7641)) * 8) * 8;
    }
    else if (iParam0 >= 16010 && iParam0 < 18098)
    {
        iVar0 = ((iParam0 - 16010) - unk_0xB07659B9AFDF0087((iParam0 - 16010)) * 8) * 8;
    }
    else if (iParam0 >= 18162 && iParam0 < 19018)
    {
        iVar0 = ((iParam0 - 18162) - unk_0xB07659B9AFDF0087((iParam0 - 18162)) * 8) * 8;
    }
    else if (iParam0 >= 19018 && iParam0 < 22066)
    {
        iVar0 = ((iParam0 - 19018) - unk_0xB07659B9AFDF0087((iParam0 - 19018)) * 8) * 8;
    }
    else if (iParam0 >= 22194 && iParam0 < 24962)
    {
        iVar0 = ((iParam0 - 22194) - unk_0xB07659B9AFDF0087((iParam0 - 22194)) * 8) * 8;
    }
    else if (iParam0 >= 25538 && iParam0 < 26810)
    {
        iVar0 = ((iParam0 - 25538) - unk_0xB07659B9AFDF0087((iParam0 - 25538)) * 8) * 8;
    }
    else if (iParam0 >= 27258 && iParam0 < 28098)
    {
        iVar0 = ((iParam0 - 27258) - unk_0xB07659B9AFDF0087((iParam0 - 27258)) * 8) * 8;
    }
    return iVar0;
}

int func_26(int iParam0, int iParam1)//Position - 0xF61
{
    int iVar0;
    
    if (iParam1 == -1)
    {
        iParam1 = func_23();
    }
    iVar0 = 0;
    if (iParam0 >= 384 && iParam0 < 457)
    {
        iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 384), 0, 1, iParam1);
    }
    else if (iParam0 >= 457 && iParam0 < 513)
    {
        iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 457), 1, 1, iParam1);
    }
    else if (iParam0 >= 1281 && iParam0 < 1305)
    {
        iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 1281), 0, 0, 0);
    }
    else if (iParam0 >= 1305 && iParam0 < 1361)
    {
        iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 1305), 1, 0, 0);
    }
    else if (iParam0 >= 1361 && iParam0 < 1393)
    {
        iVar0 = unk_0x752DE25BC350DD79((iParam0 - 1361), 0, 0, 0);
    }
    else if (iParam0 >= 1393 && iParam0 < 2919)
    {
        iVar0 = unk_0x752DE25BC350DD79((iParam0 - 1393), 0, 1, iParam1);
    }
    else if (iParam0 >= 4143 && iParam0 < 4207)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
    }
    else if (iParam0 >= 3879 && iParam0 < 4143)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
    }
    else if (iParam0 >= 4399 && iParam0 < 6028)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
    }
    else if (iParam0 >= 6413 && iParam0 < 7262)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
    }
    else if (iParam0 >= 7262 && iParam0 < 7313)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
    }
    else if (iParam0 >= 7681 && iParam0 < 9361)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
    }
    else if (iParam0 >= 9553 && iParam0 < 15265)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
    }
    else if (iParam0 >= 15265 && iParam0 < 15369)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
    }
    else if (iParam0 >= 7313 && iParam0 < 7321)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
    }
    else if (iParam0 >= 7641 && iParam0 < 7681)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
    }
    else if (iParam0 >= 16010 && iParam0 < 18098)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
    }
    else if (iParam0 >= 18162 && iParam0 < 19018)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
    }
    else if (iParam0 >= 19018 && iParam0 < 22066)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
    }
    else if (iParam0 >= 22194 && iParam0 < 24962)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
    }
    else if (iParam0 >= 25538 && iParam0 < 26810)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
    }
    else if (iParam0 >= 27258 && iParam0 < 28098)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
    }
    return iVar0;
}

bool func_27()//Position - 0x1302
{
    return (!unk_0xA2BC31158C8CEFD2(Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_34F, 4) && !func_28());
}

bool func_28()//Position - 0x1328
{
    return ((Global_440000.f_E32A == 6 || Global_440000.f_E32A == 7) && Global_440000.f_2 == 20);
}

bool func_29()//Position - 0x135C
{
    return Global_12038;
}

int func_30(int iParam0)//Position - 0x1368
{
    if (iParam0 == 1)
    {
        if (Global_4C1E.f_1 > 3)
        {
            if (unk_0xA2BC31158C8CEFD2(Global_1CBC, 14))
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
    if (unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) > 0)
    {
        return 1;
    }
    if (Global_4C1E.f_1 > 3)
    {
        return 1;
    }
    return 0;
}

int func_31(int iParam0)//Position - 0x13C2
{
    if (func_49(iParam0))
    {
        switch (iParam0->f_2)
        {
            case 1181327175:
                return func_24(19004, -1, -1) < 3;
            }
        
        default:
    }
    return 1;
}

void func_32()//Position - 0x13F1
{
    if (!unk_0x0945988C02AF3025())
    {
        func_17("STEALTH_WARN", 3000);
    }
}

int func_33(int iParam0)//Position - 0x140B
{
    int iVar0;
    
    if (func_30(0) || func_29())
    {
        return 0;
    }
    iVar0 = func_34(iParam0);
    switch (iVar0)
    {
        case 1:
            if ((unk_0x80E2BA2BD5AB1A3F(0, 114) || unk_0x80E2BA2BD5AB1A3F(0, 99)) || unk_0x80E2BA2BD5AB1A3F(0, 100))
            {
                return 1;
            }
            break;
        
        case 0:
            if (unk_0x80E2BA2BD5AB1A3F(0, 114))
            {
                return 1;
            }
            break;
        
        case 2:
            if (unk_0x80E2BA2BD5AB1A3F(0, 92))
            {
                return 1;
            }
            break;
        
        case 3:
            if (unk_0x80E2BA2BD5AB1A3F(0, 68))
            {
                return 1;
            }
            break;
    }
    return 0;
}

int func_34(int iParam0)//Position - 0x14AF
{
    if (!func_35(iParam0))
    {
        return 4;
    }
    switch (iParam0->f_2)
    {
        case 1181327175:
            switch (iParam0->f_4)
            {
                case -1:
                    return 1;
                
                case 0:
                    return 2;
                
                default:
            }
            return 4;
        
        default:
    }
    return 4;
}

bool func_35(int iParam0)//Position - 0x14F9
{
    return (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()) && !unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0));
}

void func_36()//Position - 0x1518
{
    unk_0x572062A62138FBA2(0, 24, 1);
    unk_0x572062A62138FBA2(0, 66, 1);
    unk_0x572062A62138FBA2(0, 67, 1);
    unk_0x572062A62138FBA2(0, 68, 1);
    unk_0x572062A62138FBA2(0, 114, 1);
    unk_0x572062A62138FBA2(0, 69, 1);
    unk_0x572062A62138FBA2(0, 70, 1);
    unk_0x572062A62138FBA2(0, 91, 1);
    unk_0x572062A62138FBA2(0, 92, 1);
    unk_0x572062A62138FBA2(0, 99, 1);
    unk_0x572062A62138FBA2(0, 100, 1);
    unk_0x572062A62138FBA2(0, 37, 1);
}

void func_37(int iParam0)//Position - 0x1580
{
    int iVar0;
    
    if (((((((!func_9(&(iParam0->f_6), 0) && !func_9(&(iParam0->f_6), 1)) && !unk_0x0945988C02AF3025()) && func_9(&(iParam0->f_6), 3)) && !func_30(0)) && !func_29()) && func_27()) && unk_0xD4B321D9096B01FC(unk_0x300C62F79A4441EB(iParam0->f_1, -1, 0)))
    {
        iVar0 = func_19(iParam0->f_6.f_2, 3333, 10000);
        iParam0->f_6.f_2 = 0;
        func_17(func_38(iParam0), iVar0);
        func_44(iParam0);
        func_20(&(iParam0->f_6), 0);
    }
}

char* func_38(int iParam0)//Position - 0x1621
{
    if (func_49(iParam0))
    {
        return "STEALTH_ON";
    }
    return "STEALTH_ON_P";
}

void func_39(int iParam0, int iParam1)//Position - 0x163D
{
    if (func_48(iParam0))
    {
        return;
    }
    if (unk_0xD13C2E5A700836D1() != iParam1)
    {
        unk_0x60F310C72311BCA8(iParam1);
    }
    if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) > iParam1)
    {
        unk_0x31EBACD75CD1F9EC(unk_0x7C7787D2D7139A85(), iParam1, 0);
    }
}

bool func_40(int iParam0)//Position - 0x1678
{
    return (!func_9(iParam0, 0) && func_9(iParam0, 1));
}

void func_41(int iParam0)//Position - 0x1694
{
    func_5(&(iParam0->f_6), 0);
    if (func_10())
    {
        unk_0x0D23E3918F7AF11B(1);
    }
    if (!func_49(iParam0))
    {
        if (func_47(iParam0))
        {
            func_5(&(iParam0->f_6), 1);
        }
        else
        {
            func_5(&(iParam0->f_6), 2);
        }
    }
}

void func_42()//Position - 0x16D9
{
    unk_0xA1E7A40E1F56E511(&(Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_34F), 1);
}

bool func_43(int iParam0)//Position - 0x16F4
{
    return (func_9(iParam0, 0) && !func_9(iParam0, 1));
}

void func_44(int iParam0)//Position - 0x1710
{
    func_20(&(iParam0->f_6), 1);
}

void func_45(int iParam0, bool bParam1, int iParam2)//Position - 0x1721
{
    switch (iParam0->f_2)
    {
        case 1181327175:
            unk_0xCFBEBAED197EC89A(iParam0->f_1, !bParam1, iParam2);
            break;
    }
}

bool func_46()//Position - 0x1748
{
    return unk_0xA2BC31158C8CEFD2(Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_34F, 3);
}

bool func_47(int iParam0)//Position - 0x1763
{
    return func_9(iParam0, 0);
}

bool func_48(int iParam0)//Position - 0x1772
{
    return func_9(iParam0, 2);
}

bool func_49(int iParam0)//Position - 0x1781
{
    return ((func_35(iParam0) && iParam0->f_3 == unk_0x0FA8183DAD2B3203()) || unk_0x300C62F79A4441EB(iParam0->f_1, -1, 0) == unk_0x0FA8183DAD2B3203());
}

void func_50(int iParam0)//Position - 0x17B2
{
    if (func_10() && (func_30(0) || func_29()))
    {
        iParam0->f_6.f_2 = 1;
        unk_0x0D23E3918F7AF11B(1);
        func_5(&(iParam0->f_6), 0);
        if (func_47(iParam0))
        {
            func_5(&(iParam0->f_6), 1);
        }
        else
        {
            func_5(&(iParam0->f_6), 2);
            if (func_49(iParam0))
            {
                func_21(iParam0, -1);
            }
        }
    }
}

void func_51(int iParam0)//Position - 0x1818
{
    if (func_47(iParam0))
    {
        if (func_8(iParam0))
        {
            if (func_53())
            {
                func_4(iParam0);
            }
        }
        else if (!func_53())
        {
            func_52(iParam0);
        }
    }
    else if (func_8(iParam0))
    {
        func_4(iParam0);
    }
    unk_0x3B76114EC84D5812(&(Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_34F), 2);
}

void func_52(int iParam0)//Position - 0x1875
{
    func_7(1, 1);
    func_6(1, -1, 1);
    func_20(&(iParam0->f_6), 5);
}

bool func_53()//Position - 0x1893
{
    return unk_0xA2BC31158C8CEFD2(Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_34F, 2);
}

int func_54(int iParam0)//Position - 0x18AE
{
    if (!func_35(iParam0))
    {
        return 1;
    }
    if (!func_63(iParam0))
    {
        return 1;
    }
    if (!func_62(iParam0->f_2))
    {
        return 1;
    }
    if (func_61(unk_0x7C7787D2D7139A85(), 1, 1))
    {
        return 1;
    }
    if (func_60(unk_0x7C7787D2D7139A85()))
    {
        return 1;
    }
    if (func_57(unk_0x7C7787D2D7139A85()))
    {
        return 1;
    }
    if (func_55(unk_0x7C7787D2D7139A85()))
    {
        return 1;
    }
    return 0;
}

int func_55(int iParam0)//Position - 0x1921
{
    if (iParam0 > -1)
    {
        if (Global_24FD09[iParam0 /*421*/].f_EC > -1)
        {
            if (func_56(Global_24FD09[iParam0 /*421*/].f_EC) == 4)
            {
                return 1;
            }
        }
        if (unk_0xA2BC31158C8CEFD2(Global_24FD09[iParam0 /*421*/].f_C3, 4))
        {
            return 1;
        }
    }
    return 0;
}

int func_56(int iParam0)//Position - 0x196D
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

int func_57(int iParam0)//Position - 0x1C3B
{
    if (iParam0 != func_59() && func_58(iParam0, 1, 1))
    {
        return unk_0xA2BC31158C8CEFD2(Global_24FD09[iParam0 /*421*/].f_135, 3);
    }
    return 0;
}

int func_58(int iParam0, bool bParam1, bool bParam2)//Position - 0x1C6F
{
    int iVar0;
    
    iVar0 = iParam0;
    if (iVar0 != -1)
    {
        if (unk_0xD56C8C2B75BF9665(iParam0))
        {
            if (bParam1)
            {
                if (!unk_0xD699DB8EAB756F25(iParam0))
                {
                    return 0;
                }
            }
            if (bParam2)
            {
                if (!Global_2531AD.f_3[iVar0])
                {
                    return 0;
                }
            }
            return 1;
        }
    }
    return 0;
}

int func_59()//Position - 0x1CB9
{
    return -1;
}

int func_60(int iParam0)//Position - 0x1CC2
{
    if (unk_0xA2BC31158C8CEFD2(Global_1844AE[iParam0 /*871*/].f_111.f_18, 14))
    {
        return 1;
    }
    if (unk_0xA2BC31158C8CEFD2(Global_1844AE[iParam0 /*871*/].f_111.f_18, 11))
    {
        return 1;
    }
    return 0;
}

int func_61(int iParam0, bool bParam1, bool bParam2)//Position - 0x1D01
{
    if (iParam0 == func_59())
    {
        return 0;
    }
    if (unk_0xA2BC31158C8CEFD2(Global_1844AE[iParam0 /*871*/].f_111.f_18, 0))
    {
        return 1;
    }
    if (bParam1)
    {
        if (unk_0xA2BC31158C8CEFD2(Global_1844AE[iParam0 /*871*/].f_111.f_18, 1))
        {
            return 1;
        }
    }
    if (bParam2)
    {
        if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
        {
            return 1;
        }
    }
    return 0;
}

int func_62(int iParam0)//Position - 0x1D6B
{
    switch (iParam0)
    {
        case 1181327175:
            return 1;
        
        default:
    }
    return 0;
}

bool func_63(int iParam0)//Position - 0x1D85
{
    return (unk_0xD4B321D9096B01FC(iParam0->f_1) && unk_0xD960230552BC4165(iParam0->f_1, 0));
}

void func_64(int iParam0)//Position - 0x1DA3
{
    bool bVar0;
    bool bVar1;
    int iVar2;
    
    bVar0 = func_9(iParam0, 4);
    bVar1 = func_9(iParam0, 0);
    func_75(iParam0);
    if (bVar0)
    {
        func_20(iParam0, 3);
    }
    else
    {
        func_5(iParam0, 3);
    }
    if (bVar1)
    {
        func_20(iParam0, 1);
    }
    else
    {
        func_5(iParam0, 1);
    }
    if (func_35(iParam0))
    {
        if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
        {
            iParam0->f_1 = unk_0xA4BF70099C074BA0(unk_0x0FA8183DAD2B3203());
            if (func_63(iParam0))
            {
                iParam0->f_2 = unk_0x7F375072508F738F(iParam0->f_1);
                if (unk_0x5AFC77A2CEA0DE1E(unk_0x0FA8183DAD2B3203(), 2))
                {
                    func_20(iParam0, 2);
                }
            }
        }
    }
    if (func_63(iParam0))
    {
        if (!unk_0xBAA38708D7439CA7(iParam0->f_1, -1, 0))
        {
            iVar2 = unk_0x300C62F79A4441EB(iParam0->f_1, -1, 0);
            if ((unk_0xD4B321D9096B01FC(iVar2) && !unk_0xF4B969E0807E76C7(iVar2, 0)) && unk_0x7FA2061748BA645E(iVar2))
            {
                iParam0->f_3 = iVar2;
                if (iVar2 == unk_0x0FA8183DAD2B3203())
                {
                    func_20(iParam0, 4);
                    if (!func_9(iParam0, 3))
                    {
                        func_20(&(iParam0->f_6), 6);
                    }
                }
            }
        }
        if (func_35(iParam0))
        {
            iParam0->f_4 = func_74(unk_0x0FA8183DAD2B3203(), 0);
        }
        if (func_49(iParam0))
        {
            if (func_73() && func_67(iParam0))
            {
                func_20(iParam0, 0);
            }
        }
        else
        {
            func_65(iParam0);
        }
    }
    if (func_43(iParam0))
    {
        iParam0->f_6.f_3 = unk_0x169A8AC9F93C2727();
    }
}

void func_65(int iParam0)//Position - 0x1EFA
{
    if (unk_0xD4B321D9096B01FC(iParam0->f_3) && func_66(unk_0x74D4E16E179B8F53(iParam0->f_3)))
    {
        func_20(iParam0, 0);
    }
    else
    {
        func_5(iParam0, 0);
    }
}

bool func_66(int iParam0)//Position - 0x1F2F
{
    return (iParam0 != -1 && unk_0xA2BC31158C8CEFD2(Global_1844AE[iParam0 /*871*/].f_34F, 1));
}

bool func_67(int iParam0)//Position - 0x1F51
{
    bool bVar0;
    
    bVar0 = func_72();
    if (unk_0x77FF1FAF6F41CA71(iParam0->f_1))
    {
        func_71(iParam0);
        switch (iParam0->f_2)
        {
            case 1181327175:
                bVar0 = !unk_0xC3E4703744A50B4C(iParam0->f_1);
                break;
        }
    }
    else if (func_70(iParam0))
    {
        if (func_69(iParam0))
        {
            unk_0x7252D7992DA58CA9(iParam0->f_1);
        }
    }
    else
    {
        func_68(iParam0);
    }
    return bVar0;
}

void func_68(var uParam0)//Position - 0x1FB6
{
    func_20(&(uParam0->f_6), 4);
    uParam0->f_6.f_1 = unk_0x9B35D07DCD0F0B43();
}

bool func_69(var uParam0)//Position - 0x1FD1
{
    return (unk_0x9B35D07DCD0F0B43() - uParam0->f_6.f_1) >= 200;
}

bool func_70(var uParam0)//Position - 0x1FE7
{
    return func_9(&(uParam0->f_6), 4);
}

void func_71(var uParam0)//Position - 0x1FF8
{
    func_5(&(uParam0->f_6), 4);
}

bool func_72()//Position - 0x2009
{
    return unk_0xA2BC31158C8CEFD2(Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_34F, 1);
}

bool func_73()//Position - 0x2024
{
    return !func_28();
}

int func_74(int iParam0, int iParam1)//Position - 0x2031
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    
    if (!unk_0x2BF5E63466422C38(iParam0))
    {
        if (unk_0x5294582CE404D3F4(iParam0, iParam1))
        {
            iVar0 = unk_0x4D57D3E5ECE15A41(iParam0, iParam1);
            if (unk_0xD4B321D9096B01FC(iVar0))
            {
                iVar1 = unk_0x26BC048DC7E3F551(unk_0x7F375072508F738F(iVar0));
                if (iVar1 == 1)
                {
                    iVar3 = -1;
                    return iVar3;
                }
                iVar2 = 0;
                while (iVar2 < iVar1)
                {
                    iVar3 = (iVar2 - 1);
                    if (!unk_0xBAA38708D7439CA7(iVar0, iVar3, 0))
                    {
                        if (unk_0x300C62F79A4441EB(iVar0, iVar3, 0) == iParam0)
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

void func_75(var uParam0)//Position - 0x20B6
{
    *uParam0 = 0;
    uParam0->f_1 = 0;
    uParam0->f_3 = 0;
    uParam0->f_2 = 0;
    uParam0->f_4 = -1;
}

int func_76()//Position - 0x20D6
{
    if (func_77())
    {
        return 1;
    }
    return 0;
}

int func_77()//Position - 0x20EA
{
    var uVar0;
    
    func_85(&uVar0);
    if (Global_140852 == 0)
    {
        if (!unk_0x393E9918BC37548A())
        {
            return 1;
        }
    }
    if (func_84())
    {
        return 1;
    }
    if (Global_258E39)
    {
        return 1;
    }
    if (func_83())
    {
        return 1;
    }
    if (func_82(159))
    {
        if (!func_81())
        {
            return 1;
        }
    }
    if (func_82(157))
    {
        return 1;
    }
    if (!unk_0x2A983C9CF4EE0D5E())
    {
        return 1;
    }
    if (func_78() != 0)
    {
        if (unk_0x222F76006659B0EB(func_78()) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int func_78()//Position - 0x2174
{
    switch (func_80())
    {
        case 0:
            return func_79();
            break;
        
        case 2:
            return joaat("creator");
            break;
    }
    return 0;
}

int func_79()//Position - 0x21A7
{
    switch (Global_258E9F)
    {
        case 0:
            return joaat("freemode");
        
        default:
    }
    return joaat("freemode");
}

int func_80()//Position - 0x21CB
{
    return Global_7810;
}

bool func_81()//Position - 0x21D6
{
    return Global_255E41.f_256;
}

int func_82(int iParam0)//Position - 0x21E5
{
    if (unk_0xD076BFB919B20653(1, iParam0))
    {
        return 1;
    }
    return 0;
}

bool func_83()//Position - 0x21FC
{
    return Global_258577;
}

bool func_84()//Position - 0x2208
{
    return Global_255E41.f_251;
}

void func_85(var uParam0)//Position - 0x2217
{
    int iVar0;
    int iVar1;
    int iVar2;
    vector3 vVar3;
    
    iVar0 = 0;
    while (iVar0 < unk_0xEC6B468B6F580489(1))
    {
        iVar1 = unk_0x87C4D2EB1080B8EA(1, iVar0);
        if (iVar1 == 174)
        {
            unk_0x3C1EC42A2CC175C5(1, iVar0, &iVar2, 2);
            switch (iVar2)
            {
                case -1773456834:
                    func_86(iVar0);
                    break;
                
                case -498955166:
                    unk_0x3C1EC42A2CC175C5(1, iVar0, &vVar3, 4);
                    if (vVar3.z == 1934809180)
                    {
                        *uParam0 = 1;
                    }
                    break;
                }
        }
        iVar0++;
    }
}

void func_86(int iParam0)//Position - 0x228A
{
    vector3 vVar0;
    int iVar1;
    int iVar2;
    bool bVar3;
    
    if (unk_0x3C1EC42A2CC175C5(1, iParam0, &vVar0, 3))
    {
        if (func_58(vVar0.y, 1, 1))
        {
            iVar1 = unk_0x23625FE58BACEBFD(vVar0.y);
            if (unk_0xD4B321D9096B01FC(iVar1))
            {
                if (unk_0x5294582CE404D3F4(iVar1, 0))
                {
                    iVar2 = unk_0x4D57D3E5ECE15A41(iVar1, 0);
                    if (unk_0x3D65AB2C3D476E32(iVar2, vVar0.z) && unk_0xF77CF4BC35906B30())
                    {
                        if (func_87(iVar2, &bVar3))
                        {
                            unk_0x302E0AC3BB715211(iVar2, vVar0.z);
                        }
                        if (bVar3)
                        {
                            unk_0xF25956700ADFD77F(&iVar2);
                        }
                    }
                }
            }
        }
    }
}

int func_87(int iParam0, var uParam1)//Position - 0x230B
{
    if (unk_0xD4B321D9096B01FC(iParam0))
    {
        if (!unk_0x00123AB82C5FAC28(iParam0))
        {
            if (unk_0xDCDE4069CE0EA4A6(iParam0))
            {
                if (!unk_0x89771D1B3DD40E7A(unk_0x7F375072508F738F(iParam0)))
                {
                    unk_0xE5C667CF3B4642D2(iParam0, 0, 1);
                    *uParam1 = 1;
                }
            }
        }
        if (unk_0x532AFD85DAA91F63(iParam0, 0))
        {
            if (unk_0x77FF1FAF6F41CA71(iParam0))
            {
                return 1;
            }
        }
    }
    return 0;
}

int func_88(int iParam0)//Position - 0x236A
{
    func_64(iParam0);
    if (func_63(iParam0))
    {
        if (func_49(iParam0))
        {
            if (unk_0x77FF1FAF6F41CA71(iParam0->f_1))
            {
                if (!func_46())
                {
                    func_45(iParam0, 0, 0);
                }
                else
                {
                    func_20(&(iParam0->f_6), 3);
                }
            }
        }
        else
        {
            func_20(&(iParam0->f_6), 3);
        }
    }
    return 1;
}

