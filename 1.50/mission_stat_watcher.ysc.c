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
    var uLocal_18 = 0;
    var uLocal_19 = 0;
    char* sLocal_20 = NULL;
    float fLocal_21 = 0f;
    var uLocal_22 = 0;
    var uLocal_23 = 0;
    var uLocal_24 = 0;
    float fLocal_25 = 0f;
    float fLocal_26 = 0f;
    var uLocal_27 = 0;
    int iLocal_28 = 0;
    var uLocal_29 = 0;
    var uLocal_30 = 0;
    float fLocal_31 = 0f;
    float fLocal_32 = 0f;
    float fLocal_33 = 0f;
    var uLocal_34 = 0;
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
    struct<563> Local_45 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
    var uLocal_46 = 0;
    var uLocal_47 = 0;
    var uLocal_48 = 0;
    var uLocal_49 = 0;
    var uLocal_50 = 0;
    var uLocal_51 = 0;
    var uLocal_52 = 0;
    var uLocal_53 = 0;
    var uLocal_54 = 0;
    var uLocal_55 = 0;
    var uLocal_56 = 0;
    var uLocal_57 = 0;
    var uLocal_58 = 0;
    var uLocal_59 = 0;
    int iLocal_60 = 0;
    int iLocal_61 = 0;
    int iLocal_62 = 0;
    int iLocal_63 = 0;
    int iLocal_64 = 0;
    int iLocal_65 = 0;
    int iLocal_66 = 0;
    int iLocal_67 = 0;
    float fLocal_68 = 0f;
    int iLocal_69 = 0;
    int iLocal_70 = 0;
    bool bLocal_71 = 0;
    int iLocal_72 = 0;
    bool bLocal_73 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
    int iVar0;
    int iVar1;
    bool bVar2;
    int iVar3;
    bool bVar4;
    bool bVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    bool bVar11;
    
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
    sLocal_20 = "NULL";
    fLocal_21 = 0f;
    fLocal_25 = -0.0375f;
    fLocal_26 = 0.17f;
    iLocal_28 = 3;
    fLocal_31 = 80f;
    fLocal_32 = 140f;
    fLocal_33 = 180f;
    iLocal_39 = 1;
    iLocal_40 = 65;
    iLocal_41 = 49;
    iLocal_42 = 64;
    iLocal_62 = iLocal_61;
    iLocal_63 = iLocal_62;
    fLocal_68 = 100f;
    if (unk_0x222F76006659B0EB(joaat("mission_stat_watcher")) > 1)
    {
        unk_0x9C9E32388A7886A2();
    }
    Global_F019 = 0;
    Global_F020 = 0;
    iVar0 = 1;
    if (unk_0xD4BE58A7E3E102AC(18))
    {
        func_112();
        Global_11F5E = 0;
        Global_F01A = 0;
        Global_F034 = 0;
        unk_0x9C9E32388A7886A2();
    }
    iVar1 = 0;
    SYSTEM::WAIT(0);
    func_110();
    while (!Global_F018)
    {
        SYSTEM::WAIT(200);
        if (Global_F020)
        {
            func_112();
            unk_0x9C9E32388A7886A2();
        }
    }
    Global_F027 = 0;
    Global_F01A = 1;
    while (!Global_F019)
    {
        if (Global_11F5E > 0)
        {
            func_104();
            if (Global_F03B == -1)
            {
                Global_F03B = unk_0x9B35D07DCD0F0B43();
            }
            else if ((unk_0x9B35D07DCD0F0B43() - Global_F03B) > 1000)
            {
                func_103();
            }
        }
        if (Global_F020)
        {
            func_112();
            Global_F01A = 0;
            unk_0x9C9E32388A7886A2();
        }
        SYSTEM::WAIT(0);
    }
    Global_F01A = 0;
    if (func_102())
    {
        while (func_102())
        {
            SYSTEM::WAIT(0);
        }
    }
    bVar2 = false;
    while (!bVar2)
    {
        if (!Global_F01B == iLocal_70)
        {
            if (Global_F01B)
            {
                SYSTEM::SETTIMERB(0);
                iLocal_60 = 0;
                Global_F02A = 0;
            }
            iLocal_70 = Global_F01B;
        }
        while (Global_F01F)
        {
            SYSTEM::WAIT(1000);
        }
        if (Global_F019 && !Global_F020)
        {
            if (Global_F018 || iLocal_72)
            {
                Global_F01D = 0;
                if (bLocal_71)
                {
                }
                if (Global_F019)
                {
                }
                if (!bLocal_71 == Global_F019)
                {
                    func_101(&Local_45);
                    Local_45.f_232 = 1;
                    func_100();
                    func_99();
                    iVar3 = 0;
                    iVar3 = 0;
                    while (iVar3 < Global_11F5E)
                    {
                        if (Global_11F5F[iVar3 /*9*/] > 0)
                        {
                            if (Global_F100[Global_11F5F[iVar3 /*9*/] /*13*/] == 4)
                            {
                                if (!Global_F100[Global_11F5F[iVar3 /*9*/] /*13*/].f_7)
                                {
                                    if (Global_F100[Global_11F5F[iVar3 /*9*/] /*13*/].f_3)
                                    {
                                        if (Global_11F5F[iVar3 /*9*/].f_1 == 0)
                                        {
                                            Global_11F5F[iVar3 /*9*/].f_3 = 5;
                                        }
                                    }
                                }
                            }
                        }
                        iVar3++;
                    }
                    bVar4 = false;
                    if ((Global_12C25 && !Global_F015) || Global_F021)
                    {
                        bVar4 = true;
                    }
                    bVar5 = false;
                    if (unk_0xBF28CCACDDFF5346() || unk_0xC862E94A8ABC89B8())
                    {
                        bVar5 = true;
                    }
                    else
                    {
                        if (Global_18194.f_8)
                        {
                            bVar5 = true;
                        }
                        if (Global_F033)
                        {
                            bVar5 = true;
                        }
                    }
                    if (func_98(0))
                    {
                        bVar5 = true;
                        Global_F033 = 1;
                    }
                    iVar6 = Global_11FF5;
                    if (Global_F022)
                    {
                        func_95(Global_F023);
                        iVar0 = 2;
                        func_94(&Local_45, "HISHPA", &Global_F02E, 0);
                        if (iVar6 == 69 || iVar6 == 70)
                        {
                            func_93(&Local_45, 3, "ACTATAKE_AG", "", Global_1B3C8.f_1.f_7E[Global_F023 /*23*/], 0, 0, 0);
                        }
                        else
                        {
                            func_93(&Local_45, 3, "POTATAKE", "", Global_1B3C8.f_1.f_7E[Global_F023 /*23*/], 0, 0, 0);
                        }
                        iVar7 = 0;
                        iVar7 = 0;
                        while (iVar7 < Global_172D1[Global_F023 /*38*/].f_25)
                        {
                            if (Global_172D1[Global_F023 /*38*/].f_1F[iVar7] > 0)
                            {
                                func_93(&Local_45, 3, func_92(Global_172D1[Global_F023 /*38*/].f_19[iVar7]), "", (-1 * Global_172D1[Global_F023 /*38*/].f_1F[iVar7]), 0, 0, 0);
                            }
                            iVar7++;
                        }
                        if ((((Global_1B3C8.f_1.f_7E[Global_F023 /*23*/].f_2[0] > 0 || iVar6 == 74) || iVar6 == 75) || iVar6 == 69) || iVar6 == 70)
                        {
                            func_93(&Local_45, 3, "ACTATAKE_M", "", Global_1B3C8.f_1.f_7E[Global_F023 /*23*/].f_2[0], 0, 0, 0);
                        }
                        if ((Global_1B3C8.f_1.f_7E[Global_F023 /*23*/].f_2[1] > 0 || iVar6 == 74) || iVar6 == 75)
                        {
                            func_93(&Local_45, 3, "ACTATAKE_F", "", Global_1B3C8.f_1.f_7E[Global_F023 /*23*/].f_2[1], 0, 0, 0);
                        }
                        if ((Global_1B3C8.f_1.f_7E[Global_F023 /*23*/].f_2[2] > 0 || iVar6 == 74) || iVar6 == 75)
                        {
                            func_93(&Local_45, 3, "ACTATAKE_T", "", Global_1B3C8.f_1.f_7E[Global_F023 /*23*/].f_2[2], 0, 0, 0);
                        }
                        if (Global_172C7.f_7 > 0)
                        {
                            func_93(&Local_45, 3, "ACTATAKE_L", "", Global_172C7.f_7, 0, 0, 0);
                        }
                        iVar8 = func_90(func_91(Global_F023));
                        iVar9 = 0;
                        iVar10 = 0;
                        iVar7 = 0;
                        while (iVar7 < Global_17208[iVar8 /*19*/])
                        {
                            if (!func_89(Global_1B3C8.f_1.f_C[iVar8 /*6*/][iVar7]))
                            {
                                iVar9 = (iVar9 + Global_1B3C8.f_1.f_7E[Global_F023 /*23*/].f_11[iVar7]);
                            }
                            else
                            {
                                iVar10 = (iVar10 + Global_1B3C8.f_1.f_7E[Global_F023 /*23*/].f_11[iVar7]);
                            }
                            iVar7++;
                        }
                        if (iVar6 == 74 || iVar6 == 75)
                        {
                            func_93(&Local_45, 3, "LACKTAKE", "", iVar9, 0, 0, 0);
                        }
                        else
                        {
                            func_93(&Local_45, 3, "CREWTAKE", "", iVar9, 0, 0, 0);
                        }
                        if (iVar10 > 0)
                        {
                            if (!func_98(0))
                            {
                                switch (iVar6)
                                {
                                    case 90:
                                        unk_0x41410A69AD49AFCD(joaat("hcs_penalty_jewel_funeral"), iVar10, 1);
                                        break;
                                    
                                    case 93:
                                        unk_0x41410A69AD49AFCD(joaat("hcs_penalty_paleto_funeral"), iVar10, 1);
                                        break;
                                    
                                    case 69:
                                    case 70:
                                        unk_0x41410A69AD49AFCD(joaat("hcs_penalty_bureau_funeral"), iVar10, 1);
                                        break;
                                    
                                    case 84:
                                    case 85:
                                        unk_0x41410A69AD49AFCD(joaat("hcs_penalty_bigs_funeral"), iVar10, 1);
                                        break;
                                    }
                            }
                            func_93(&Local_45, 3, "HSTENDPFUN", "", iVar10, 0, 0, 0);
                        }
                    }
                    else
                    {
                        func_94(&Local_45, "MISHPA", &Global_F02E, 0);
                    }
                    if (Global_11F5E > 0)
                    {
                        func_74(&Local_45);
                    }
                    if (!Global_F015)
                    {
                        func_68();
                    }
                    while (!bVar5)
                    {
                        if (unk_0xBF28CCACDDFF5346() || unk_0xC862E94A8ABC89B8())
                        {
                            bVar5 = true;
                        }
                        SYSTEM::WAIT(0);
                    }
                    if ((bVar5 || Global_F033) && !bVar4)
                    {
                        if (!Global_F021)
                        {
                            func_64(&Local_45, 0, 0);
                        }
                        bVar11 = false;
                        if (!Global_11FF4)
                        {
                            switch (Global_11FF5)
                            {
                                case 50:
                                case 51:
                                case 52:
                                    unk_0x70431C02FF392D24("HoldMissionCompleteWhenPrepared", 1);
                                    func_60(1);
                                    bVar11 = true;
                                    break;
                                
                                default:
                                    unk_0x70431C02FF392D24("HoldMissionCompleteWhenPrepared", 1);
                                    func_60(0);
                                    bVar11 = true;
                                    break;
                            }
                        }
                        else
                        {
                            unk_0x70431C02FF392D24("HoldMissionCompleteWhenPrepared", 1);
                            func_60(1);
                            bVar11 = true;
                        }
                        iVar1 = func_59();
                        unk_0x9F815D4FA0C47F97("MISHSTA", 3);
                        while (!unk_0xA3D567B14856EDE1(3))
                        {
                            SYSTEM::WAIT(0);
                        }
                        bLocal_73 = true;
                        while (unk_0x33D7ABC47E81DCF9())
                        {
                            SYSTEM::WAIT(0);
                        }
                        while (unk_0x87407D4AFED33A53(unk_0x7A8732CFB5113E77()))
                        {
                            SYSTEM::WAIT(0);
                        }
                        func_64(&Local_45, 1, 0);
                        unk_0x70431C02FF392D24("HoldMissionCompleteWhenPrepared", 0);
                        if (bVar11)
                        {
                            while (!unk_0x1833CACA51B09D34())
                            {
                                SYSTEM::WAIT(0);
                            }
                        }
                        unk_0x3C151C2FD47DC781();
                    }
                    if (Global_F018)
                    {
                        iLocal_72 = 1;
                        Global_F018 = 0;
                    }
                    SYSTEM::SETTIMERA(0);
                }
                if (bLocal_73 && !Global_F020)
                {
                    if (unk_0x222F76006659B0EB(joaat("appcamera")) > 0)
                    {
                        func_55(0);
                    }
                    if (Global_11F5E > 0 || Global_F015)
                    {
                        if (Global_F033)
                        {
                            unk_0xF314976CA3E17AC7(7);
                        }
                        if (iVar1 && !Global_F015)
                        {
                            Global_A54C = 1;
                        }
                        if (!Global_F021)
                        {
                            if (func_21(&Local_45, 0, SYSTEM::TO_FLOAT(iVar0), 0, 0, 0))
                            {
                                Global_F020 = 1;
                            }
                            func_20();
                        }
                        if (Global_F033)
                        {
                            unk_0xF314976CA3E17AC7(7);
                        }
                    }
                    func_19(1);
                    if (!unk_0xBF28CCACDDFF5346())
                    {
                        func_17();
                    }
                    if (!func_16(0))
                    {
                        switch (func_14("AM_H_PASS"))
                        {
                            case 2:
                                func_11("AM_H_PASS", 3, 2000, 2500, 10000, 7, 0, 0, 0);
                                break;
                            
                            case 1:
                                func_10(0);
                                break;
                            }
                        }
                }
                bLocal_71 = Global_F019;
                if (Global_F016)
                {
                }
                else
                {
                    unk_0x87407D4AFED33A53(unk_0x7A8732CFB5113E77());
                    if (unk_0x35D31BEBAFD53DE6(unk_0x23625FE58BACEBFD(unk_0x7A8732CFB5113E77())) < 1)
                    {
                        Global_F021 = 1;
                    }
                    if (((((func_102() || func_9()) || Global_F020) || Global_12C2E) || Global_F021) || !bLocal_73)
                    {
                        Global_F015 = 0;
                        Global_F019 = 0;
                        iLocal_72 = 0;
                        Global_F01C = 0;
                        Global_F01D = 0;
                        Global_F027 = 0;
                        Global_F02A = 0;
                        func_19(0);
                        func_2();
                        Global_F020 = 0;
                        bVar2 = true;
                    }
                }
            }
        }
        SYSTEM::WAIT(0);
    }
    func_1(&Local_45);
    Global_790A = 0;
    Global_F024 = 0;
    unk_0x9C9E32388A7886A2();
}

void func_1(var uParam0)//Position - 0x8BD
{
    if (uParam0->f_1 != 0)
    {
        unk_0x749CA887CB0AFEC9(&(uParam0->f_1));
        uParam0->f_1 = 0;
    }
    if (uParam0->f_232 && uParam0->f_4 != 0)
    {
        if (unk_0xE434AB6E3DE89861())
        {
            unk_0xF1BC72CEC2746995(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
            unk_0x282C78036676E0C2(false);
            unk_0xAC7C2DE2DDC7AF03();
        }
        unk_0x749CA887CB0AFEC9(&(uParam0->f_4));
        uParam0->f_4 = 0;
    }
    if (uParam0->f_234)
    {
        unk_0x81394B4515AF31C3(false);
        uParam0->f_234 = 0;
    }
    if (!Global_12C2D)
    {
        if (!unk_0x87407D4AFED33A53(unk_0x7A8732CFB5113E77()))
        {
            if (!Global_12C2E)
            {
                if (unk_0x260395BA7F0C83CB() && !func_98(0))
                {
                    unk_0xCF33E56642B34516(800);
                }
            }
        }
    }
    func_19(0);
}

void func_2()//Position - 0x963
{
    if (Global_F01F)
    {
        return;
    }
    Global_F028 = 0;
    Global_11F5E = 0;
    Global_F02A = 0;
    if (Global_F027)
    {
    }
    Global_F027 = 0;
    func_19(0);
    func_8();
    Global_11FF6 = 0;
    Global_F01E = 1;
    func_6();
    func_5();
    func_4();
    func_3();
    Global_F015 = 0;
    Global_F033 = 0;
    Global_F03B = -1;
}

void func_3()//Position - 0x9B9
{
    int iVar0;
    
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < 4)
    {
        Global_12019[iVar0 /*2*/].f_1 = -1;
        iVar0++;
    }
    Global_12022 = 0;
}

void func_4()//Position - 0x9E6
{
    int iVar0;
    
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < 16)
    {
        Global_11FF7[iVar0 /*2*/] = 0;
        Global_11FF7[iVar0 /*2*/].f_1 = -1;
        iVar0++;
    }
    Global_12018 = 0;
}

void func_5()//Position - 0xA1D
{
    Global_F0BE = 0;
}

void func_6()//Position - 0xA29
{
    Global_F032 = 0;
    Global_F036 = func_7(joaat("sp0_shots"));
    Global_F035 = func_7(joaat("sp0_hits"));
    Global_F038 = func_7(joaat("sp1_shots"));
    Global_F037 = func_7(joaat("sp1_hits"));
    Global_F03A = func_7(joaat("sp2_shots"));
    Global_F039 = func_7(joaat("sp2_hits"));
}

int func_7(int iParam0)//Position - 0xA7D
{
    var uVar0;
    
    unk_0x367DA79FE620711B(iParam0, &uVar0, -1);
    return uVar0;
}

void func_8()//Position - 0xA91
{
    int iVar0;
    
    Global_F03C = 0;
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < 64)
    {
        Global_F03D[iVar0 /*2*/] = 0;
        iVar0++;
    }
}

var func_9()//Position - 0xABB
{
    return Global_140869;
}

void func_10(int iParam0)//Position - 0xAC7
{
    int iVar0;
    int iVar1;
    
    iVar0 = iParam0;
    iVar1 = 0;
    while (iVar0 > 31)
    {
        iVar0 = (iVar0 - 32);
        iVar1++;
    }
    if (iVar1 < 3)
    {
        unk_0xA1E7A40E1F56E511(&(Global_1B3C8.f_4FB5.f_96[iVar1]), iVar0);
    }
}

void func_11(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xB09
{
    func_12(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_12(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0xB2A
{
    int iVar0;
    
    if (unk_0x2553916E420E8EF0(sParam0, ""))
    {
        return;
    }
    if (iParam3 < 0)
    {
        return;
    }
    if (iParam5 < 500 && iParam5 != -1)
    {
        return;
    }
    if (iParam4 < 0 && iParam4 != -1)
    {
        return;
    }
    if (iParam6 < 1 || iParam6 > 7)
    {
        return;
    }
    if (iParam7 == 235)
    {
        return;
    }
    if (iParam8 == 235)
    {
        return;
    }
    iVar0 = 0;
    while (iVar0 < Global_1B3C8.f_4FB5.f_91)
    {
        if (unk_0x2553916E420E8EF0(&(Global_1B3C8.f_4FB5[iVar0 /*16*/]), sParam0))
        {
            return;
        }
        iVar0++;
    }
    if (Global_1B3C8.f_4FB5.f_91 < 9)
    {
        StringCopy(&(Global_1B3C8.f_4FB5[Global_1B3C8.f_4FB5.f_91 /*16*/]), sParam0, 16);
        StringCopy(&(Global_1B3C8.f_4FB5[Global_1B3C8.f_4FB5.f_91 /*16*/].f_4), sParam1, 16);
        Global_1B3C8.f_4FB5[Global_1B3C8.f_4FB5.f_91 /*16*/].f_8 = (unk_0x9B35D07DCD0F0B43() + iParam3);
        Global_1B3C8.f_4FB5[Global_1B3C8.f_4FB5.f_91 /*16*/].f_9 = iParam5;
        Global_1B3C8.f_4FB5[Global_1B3C8.f_4FB5.f_91 /*16*/].f_B = iParam6;
        Global_1B3C8.f_4FB5[Global_1B3C8.f_4FB5.f_91 /*16*/].f_C = uParam2;
        Global_1B3C8.f_4FB5[Global_1B3C8.f_4FB5.f_91 /*16*/].f_D = iParam7;
        Global_1B3C8.f_4FB5[Global_1B3C8.f_4FB5.f_91 /*16*/].f_E = iParam8;
        Global_1B3C8.f_4FB5[Global_1B3C8.f_4FB5.f_91 /*16*/].f_F = uParam9;
        if (iParam4 != -1)
        {
            Global_1B3C8.f_4FB5[Global_1B3C8.f_4FB5.f_91 /*16*/].f_A = ((unk_0x9B35D07DCD0F0B43() + iParam3) + iParam4);
        }
        else
        {
            Global_1B3C8.f_4FB5[Global_1B3C8.f_4FB5.f_91 /*16*/].f_A = -1;
        }
        Global_1B3C8.f_4FB5.f_91++;
        func_13();
    }
}

void func_13()//Position - 0xCFD
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < 3)
    {
        Global_1B3C8.f_4FB5.f_92[iVar0] = 0;
        iVar0++;
    }
    iVar0 = 0;
    while (iVar0 < Global_1B3C8.f_4FB5.f_91)
    {
        if (unk_0xA2BC31158C8CEFD2(Global_1B3C8.f_4FB5[iVar0 /*16*/].f_B, 0))
        {
            if (Global_1B3C8.f_4FB5[iVar0 /*16*/].f_C > Global_1B3C8.f_4FB5.f_92[0])
            {
                Global_1B3C8.f_4FB5.f_92[0] = Global_1B3C8.f_4FB5[iVar0 /*16*/].f_C;
            }
        }
        if (unk_0xA2BC31158C8CEFD2(Global_1B3C8.f_4FB5[iVar0 /*16*/].f_B, 1))
        {
            if (Global_1B3C8.f_4FB5[iVar0 /*16*/].f_C > Global_1B3C8.f_4FB5.f_92[1])
            {
                Global_1B3C8.f_4FB5.f_92[1] = Global_1B3C8.f_4FB5[iVar0 /*16*/].f_C;
            }
        }
        if (unk_0xA2BC31158C8CEFD2(Global_1B3C8.f_4FB5[iVar0 /*16*/].f_B, 2))
        {
            if (Global_1B3C8.f_4FB5[iVar0 /*16*/].f_C > Global_1B3C8.f_4FB5.f_92[2])
            {
                Global_1B3C8.f_4FB5.f_92[2] = Global_1B3C8.f_4FB5[iVar0 /*16*/].f_C;
            }
        }
        iVar0++;
    }
}

int func_14(char* sParam0)//Position - 0xE1D
{
    if (unk_0x2553916E420E8EF0(sParam0, &Global_1AE7B))
    {
        return 1;
    }
    if (func_15(sParam0))
    {
        return 0;
    }
    return 2;
}

int func_15(char* sParam0)//Position - 0xE44
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < Global_1B3C8.f_4FB5.f_91)
    {
        if (unk_0x2553916E420E8EF0(sParam0, &(Global_1B3C8.f_4FB5[iVar0 /*16*/])))
        {
            return 1;
        }
        iVar0++;
    }
    return 0;
}

int func_16(int iParam0)//Position - 0xE7F
{
    int iVar0;
    int iVar1;
    
    iVar0 = iParam0;
    iVar1 = 0;
    while (iVar0 > 31)
    {
        iVar0 = (iVar0 - 32);
        iVar1++;
    }
    if (iVar1 < 3)
    {
        return unk_0xA2BC31158C8CEFD2(Global_1B3C8.f_4FB5.f_96[iVar1], iVar0);
    }
    return 0;
}

void func_17()//Position - 0xEC2
{
    unk_0xA42289DB8250C2C0();
    func_18();
}

void func_18()//Position - 0xED2
{
    Global_56C3.f_86 = 1;
}

void func_19(int iParam0)//Position - 0xEE0
{
    Global_12C25 = iParam0;
    Global_12C26 = iParam0;
}

void func_20()//Position - 0xEF4
{
    Global_56C3.f_6 = 1;
}

int func_21(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0xF02
{
    bool bVar0;
    
    if (unk_0xB3EE417AD9F0CAA2() == uParam0->f_23E)
    {
        return uParam0->f_23F;
    }
    uParam0->f_23E = unk_0xB3EE417AD9F0CAA2();
    if (!unk_0x393E9918BC37548A())
    {
        if (unk_0xFBEFCFA19C9FF74E(unk_0x23625FE58BACEBFD(unk_0x7A8732CFB5113E77()), 1))
        {
            uParam0->f_23F = 1;
            return 1;
        }
        if (unk_0x750E7E4E354267D8(unk_0x23625FE58BACEBFD(unk_0x7A8732CFB5113E77())))
        {
            uParam0->f_23F = 1;
            return 1;
        }
    }
    if (!uParam0->f_234)
    {
        if (unk_0x260395BA7F0C83CB() || unk_0xA710300CD13D2877())
        {
            unk_0x81394B4515AF31C3(true);
            uParam0->f_234 = 1;
        }
    }
    if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
    {
        if (!unk_0x393E9918BC37548A())
        {
            if (unk_0xD2E3AF497D091872(unk_0x7C7787D2D7139A85()))
            {
                unk_0x341977E77C118EB1(unk_0x7C7787D2D7139A85());
            }
        }
    }
    unk_0x0AF55029F939BA65(7);
    unk_0x0AF55029F939BA65(8);
    unk_0x0AF55029F939BA65(9);
    unk_0x0AF55029F939BA65(6);
    unk_0x0AF55029F939BA65(19);
    unk_0x572062A62138FBA2(2, 19, 1);
    unk_0x572062A62138FBA2(0, 37, 1);
    unk_0x572062A62138FBA2(0, 21, 1);
    unk_0x572062A62138FBA2(0, 28, 1);
    unk_0x572062A62138FBA2(0, 29, 1);
    unk_0x572062A62138FBA2(0, 171, 1);
    func_52(0);
    if (unk_0x59415A8719336539(2))
    {
        if (unk_0x5A3625C3399B9A37() || (unk_0x260395BA7F0C83CB() && !unk_0xC862E94A8ABC89B8()))
        {
            unk_0xC0630C11FB08340A();
        }
    }
    Global_A3DA = 1;
    if (!uParam0->f_233)
    {
        switch (func_48(unk_0x23625FE58BACEBFD(unk_0x7A8732CFB5113E77())))
        {
            case 1:
                unk_0x3E5A3FD805488EB9("SuccessFranklin", 1000, 0);
                break;
            
            case 2:
                unk_0x3E5A3FD805488EB9("SuccessTrevor", 1000, 0);
                break;
            
            default:
                unk_0x3E5A3FD805488EB9("SuccessMichael", 1000, 0);
                break;
        }
        uParam0->f_233 = 1;
    }
    if (uParam0->f_22E == 0)
    {
        uParam0->f_22E = (uParam0->f_23C + SYSTEM::FLOOR((15000f * fParam2)));
    }
    if (iParam4 && uParam0->f_23C >= (uParam0->f_22E - 1500))
    {
        uParam0->f_22E = uParam0->f_23C + 3000;
    }
    if (uParam0->f_230 == 0f)
    {
        uParam0->f_230 = (uParam0->f_230 + func_47(30f));
        uParam0->f_230 = (uParam0->f_230 + (IntToFloat(uParam0->f_38) * func_47(25f)));
        if (uParam0->f_38 > 0)
        {
            uParam0->f_230 = (uParam0->f_230 + func_47((25f * 0.5f)));
        }
        if (uParam0->f_225)
        {
            uParam0->f_230 = (uParam0->f_230 + (func_47(30f) - func_47(2f)));
        }
    }
    bVar0 = true;
    while (bVar0)
    {
        func_19(1);
        uParam0->f_23C = (uParam0->f_23C + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
        func_26(uParam0, fParam2, bParam3);
        if (IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 666) - (15000f * fParam2)))
        {
            if (uParam0->f_1E < 1f)
            {
                uParam0->f_1E = (uParam0->f_1E + (0f + ((1f / 0.225f) * SYSTEM::TIMESTEP())));
            }
        }
        uParam0->f_1E = func_25(uParam0->f_1E, 0f, 1f);
        if (uParam0->f_23C > (uParam0->f_22E - 333))
        {
            if (!uParam0->f_231)
            {
                if (uParam0->f_235)
                {
                    uParam0->f_235 = 0;
                    uParam0->f_236 = 0;
                    uParam0->f_23D = 0.75f;
                    unk_0xF1BC72CEC2746995(uParam0->f_1, "ROLL_UP_BACKGROUND");
                    unk_0xAC7C2DE2DDC7AF03();
                }
                uParam0->f_223 = (uParam0->f_223 - (0f + ((1f / 1.215f) * SYSTEM::TIMESTEP())));
            }
        }
        uParam0->f_223 = func_25(uParam0->f_223, 0f, 1f);
        if ((uParam0->f_223 <= 0.7f && !uParam0->f_221) && uParam0->f_1 != 0)
        {
            unk_0xF1BC72CEC2746995(uParam0->f_1, "TRANSITION_OUT");
            unk_0xAC7C2DE2DDC7AF03();
            uParam0->f_222 = uParam0->f_23C;
            uParam0->f_221 = 1;
        }
        if (uParam0->f_23C > (uParam0->f_22E - 333))
        {
            if (!uParam0->f_231)
            {
                if (uParam0->f_224 < 1f)
                {
                    uParam0->f_224 = (uParam0->f_224 + (0f + ((1f / 0.3f) * SYSTEM::TIMESTEP())));
                }
            }
        }
        uParam0->f_224 = func_25(uParam0->f_224, 0f, 1f);
        if (uParam0->f_232)
        {
            if (unk_0x6BFFC38B3F0D92C2(2))
            {
                if (unk_0x08EA887200715AD9(uParam0->f_4))
                {
                    if (!uParam0->f_237)
                    {
                        func_22(uParam0, (!uParam0->f_235 && uParam0->f_38 > 0));
                    }
                }
            }
        }
        if (unk_0x26BB91778477F482(2, 216) && uParam0->f_22E > uParam0->f_23C + 333)
        {
            if (((!uParam0->f_236 && uParam0->f_38 != 0) && unk_0x08EA887200715AD9(uParam0->f_4)) && IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 1165) - (15000f * fParam2)))
            {
                if (!uParam0->f_235)
                {
                    unk_0xF1BC72CEC2746995(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
                    unk_0xAC7C2DE2DDC7AF03();
                    uParam0->f_235 = 1;
                    uParam0->f_23D = 0.75f;
                    if (uParam0->f_23C > (uParam0->f_22E - 5000))
                    {
                        uParam0->f_22E = uParam0->f_23C + 5000;
                    }
                }
                else if (bParam5)
                {
                    unk_0xF1BC72CEC2746995(uParam0->f_1, "ROLL_UP_BACKGROUND");
                    unk_0xAC7C2DE2DDC7AF03();
                    uParam0->f_235 = 0;
                    uParam0->f_23D = 0.75f;
                }
                func_22(uParam0, (!uParam0->f_235 && uParam0->f_38 > 0));
            }
        }
        if ((uParam0->f_235 || uParam0->f_236) && uParam0->f_38 != 0)
        {
            if (IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 1165) - (15000f * fParam2)))
            {
                if (uParam0->f_236 && !uParam0->f_235)
                {
                    uParam0->f_235 = 1;
                    uParam0->f_23D = 0.75f;
                    unk_0xF1BC72CEC2746995(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
                    unk_0xAC7C2DE2DDC7AF03();
                }
                uParam0->f_22F = func_25((uParam0->f_22F + (((1f / 0.3f) * uParam0->f_23D) * SYSTEM::TIMESTEP())), 0f, 1f);
                uParam0->f_23D = func_25((uParam0->f_23D + 0.07f), 0.75f, 1.15f);
            }
        }
        else
        {
            uParam0->f_22F = func_25((uParam0->f_22F - ((((1f / 0.3f) * uParam0->f_23D) * 0.01f) * SYSTEM::TIMESTEP())), 0f, 1f);
            uParam0->f_23D = func_25((uParam0->f_23D + 0.07f), 0.75f, 1.15f);
        }
        if (uParam0->f_23C > uParam0->f_22E)
        {
            if (uParam0->f_231)
            {
                if (!uParam0->f_237)
                {
                    if (unk_0x26BB91778477F482(2, 215))
                    {
                        uParam0->f_231 = 0;
                    }
                }
            }
            else if ((uParam0->f_23C - uParam0->f_222) > 1000 && uParam0->f_221)
            {
                bVar0 = false;
            }
        }
        uParam0->f_23F = !bVar0;
        if (bParam1)
        {
            SYSTEM::WAIT(0);
        }
        else
        {
            if (!bVar0)
            {
                func_19(0);
            }
            return !bVar0;
        }
    }
    func_19(0);
    return 1;
}

void func_22(var uParam0, bool bParam1)//Position - 0x1555
{
    unk_0xF1BC72CEC2746995(uParam0->f_4, "CLEAR_ALL");
    unk_0xAC7C2DE2DDC7AF03();
    if (unk_0xE434AB6E3DE89861())
    {
        unk_0xF1BC72CEC2746995(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
        unk_0x282C78036676E0C2(true);
        unk_0xAC7C2DE2DDC7AF03();
    }
    unk_0xF1BC72CEC2746995(uParam0->f_4, "SET_DATA_SLOT");
    unk_0xD02F24F3E2DB263A(0);
    func_24(unk_0x357127A2E350E9F6(2, 215, 1));
    func_23("ES_HELP");
    if (unk_0xE434AB6E3DE89861())
    {
        unk_0x282C78036676E0C2(true);
        unk_0xD02F24F3E2DB263A(215);
    }
    unk_0xAC7C2DE2DDC7AF03();
    if (bParam1)
    {
        unk_0xF1BC72CEC2746995(uParam0->f_4, "SET_DATA_SLOT");
        unk_0xD02F24F3E2DB263A(1);
        func_24(unk_0x357127A2E350E9F6(2, 216, 1));
        func_23("ES_XPAND");
        if (unk_0xE434AB6E3DE89861())
        {
            unk_0x282C78036676E0C2(true);
            unk_0xD02F24F3E2DB263A(216);
        }
        unk_0xAC7C2DE2DDC7AF03();
    }
    unk_0xF1BC72CEC2746995(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
    unk_0xAC7C2DE2DDC7AF03();
}

void func_23(char* sParam0)//Position - 0x1618
{
    unk_0x759AC38FBC6CCA9E(sParam0);
    unk_0x81019766FF500CCA();
}

void func_24(char* sParam0)//Position - 0x162A
{
    unk_0x7151302E2AA285DC(sParam0);
}

float func_25(float fParam0, float fParam1, float fParam2)//Position - 0x1638
{
    if (fParam0 > fParam2)
    {
        return fParam2;
    }
    else if (fParam0 < fParam1)
    {
        return fParam1;
    }
    return fParam0;
}

void func_26(var uParam0, float fParam1, bool bParam2)//Position - 0x165F
{
    int iVar0;
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    int iVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    char cVar23[16];
    char cVar24[32];
    int iVar25;
    int iVar26;
    int iVar27;
    int iVar28;
    float fVar29;
    float fVar30;
    float fVar31;
    float fVar32;
    float fVar33;
    
    iVar0 = SYSTEM::ROUND((uParam0->f_223 * 255f));
    fVar1 = (func_46() * 0.25f);
    if (unk_0x08EA887200715AD9(uParam0->f_1))
    {
        if (uParam0->f_1E >= 0f)
        {
            if (!uParam0->f_2)
            {
                unk_0xF1BC72CEC2746995(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
                func_23(&(uParam0->f_5));
                if (uParam0->f_22C == 4)
                {
                    func_45(&(uParam0->f_D));
                }
                else
                {
                    func_23(&(uParam0->f_D));
                }
                if (unk_0x393E9918BC37548A())
                {
                    unk_0xD02F24F3E2DB263A(150);
                }
                else
                {
                    unk_0xD02F24F3E2DB263A(100);
                }
                unk_0x282C78036676E0C2(true);
                if (uParam0->f_22C == 4)
                {
                    unk_0xD02F24F3E2DB263A((uParam0->f_38 - 1));
                }
                else
                {
                    unk_0xD02F24F3E2DB263A(uParam0->f_38);
                }
                unk_0x282C78036676E0C2(bParam2);
                if (uParam0->f_22C == 4 || uParam0->f_22C == 3)
                {
                    unk_0xD02F24F3E2DB263A(2);
                }
                else
                {
                    unk_0xD02F24F3E2DB263A(69);
                }
                unk_0xAC7C2DE2DDC7AF03();
                uParam0->f_2 = 1;
            }
            if ((uParam0->f_38 > 0 && !uParam0->f_3) && uParam0->f_23C > 600)
            {
                unk_0xF1BC72CEC2746995(uParam0->f_1, "TRANSITION_UP");
                unk_0xD435957F6275B434(0.15f);
                unk_0x282C78036676E0C2(true);
                unk_0xAC7C2DE2DDC7AF03();
                uParam0->f_3 = 1;
            }
        }
        func_44();
        unk_0x53F520B89860756C(uParam0->f_1, 255, 255, 255, 255, 0);
    }
    fVar2 = ((uParam0->f_230 * uParam0->f_22F) * (1f - uParam0->f_224));
    fVar3 = 0f;
    if (uParam0->f_237)
    {
        fVar3 = (((0.1388889f + func_47((2f * 2f))) * uParam0->f_238) * (1f - uParam0->f_224));
        fVar2 = (fVar2 + (3f * fVar3));
    }
    if (uParam0->f_224 != 0f)
    {
        fVar4 = 0f;
        if (fVar2 < fVar4)
        {
            fVar2 = fVar4;
        }
    }
    else
    {
        fVar5 = 0f;
        if (uParam0->f_1E >= 0.975f)
        {
            if (fVar2 < fVar5)
            {
                fVar2 = fVar5;
            }
        }
    }
    fVar1 = (0.3f * func_46());
    if (uParam0->f_C)
    {
        fVar1 = 0.5f;
    }
    fVar6 = (*uParam0 * 2f);
    if (uParam0->f_22C != 4)
    {
        fVar7 = func_43(&(uParam0->f_D));
        if (fVar6 < fVar7)
        {
            fVar6 = (fVar7 + (3f * 0.006f));
        }
        if (unk_0x6321488E002E4CEF(0) < 1.4f)
        {
            fVar6 = (fVar6 * 1.3f);
        }
        fVar7 = func_43(&(uParam0->f_226));
        fVar8 = (((0.119f + 0.05f) / func_46()) / 2.5f);
        if ((uParam0->f_22C == 1 || uParam0->f_22C == 0) && uParam0->f_22D != 0)
        {
            if (fVar6 < (fVar7 + (2.6f * fVar8)))
            {
                fVar6 = (fVar7 + (2.6f * fVar8));
            }
        }
        else if (uParam0->f_22C == 5)
        {
            if (fVar6 < (fVar7 + (2.6f * fVar8)))
            {
                fVar6 = (fVar7 + (2.6f * fVar8));
            }
        }
        else if (fVar6 < (fVar7 + (1.9f * fVar8)))
        {
            fVar6 = (fVar7 + (2f * fVar8));
        }
    }
    fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
    fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
    unk_0x1F4FA01F906F33E5(2, 215);
    unk_0x1F4FA01F906F33E5(2, 216);
    unk_0x1F4FA01F906F33E5(2, 200);
    unk_0x572062A62138FBA2(2, 200, 1);
    if (uParam0->f_232 || uParam0->f_237)
    {
        if ((IntToFloat(uParam0->f_22E) - (14000f * fParam1)) < IntToFloat(uParam0->f_23C) || ((uParam0->f_237 && uParam0->f_22F > 0.95f) && (uParam0->f_22E - 10000) < uParam0->f_23C))
        {
            if (uParam0->f_237)
            {
                if (uParam0->f_23A < 0)
                {
                    uParam0->f_23A = (uParam0->f_23A * -1);
                    uParam0->f_23A = (uParam0->f_23C + uParam0->f_23A);
                }
                if (uParam0->f_23A > 0)
                {
                    if ((uParam0->f_23A - uParam0->f_23C) > 0)
                    {
                        func_40((uParam0->f_23A - uParam0->f_23C), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
                    }
                    else
                    {
                        uParam0->f_23A = 0;
                        uParam0->f_239 = 1;
                        uParam0->f_237 = 0;
                        uParam0->f_231 = 0;
                        uParam0->f_232 = 0;
                        uParam0->f_22E = uParam0->f_23C + 500;
                        uParam0->f_23A = 0;
                    }
                }
                if (uParam0->f_238 < 1f)
                {
                    uParam0->f_238 = (uParam0->f_238 + (0f + ((1f / 0.166f) * SYSTEM::TIMESTEP())));
                    if (uParam0->f_238 > 1f)
                    {
                        uParam0->f_238 = 1f;
                    }
                }
            }
            if (unk_0x260395BA7F0C83CB())
            {
                unk_0xB8C54F738FBF3E56();
            }
            if ((uParam0->f_4 != 0 && uParam0->f_224 < 0.1f) && uParam0->f_23C <= uParam0->f_22E)
            {
                unk_0x0AF55029F939BA65(7);
                unk_0x0AF55029F939BA65(8);
                unk_0x0AF55029F939BA65(9);
                unk_0x0AF55029F939BA65(6);
                unk_0x53F520B89860756C(uParam0->f_4, 255, 255, 255, iVar0, 0);
            }
            if (uParam0->f_237)
            {
                unk_0x572062A62138FBA2(0, 140, 1);
                unk_0x572062A62138FBA2(0, 141, 1);
                unk_0x572062A62138FBA2(0, 142, 1);
                unk_0x572062A62138FBA2(2, 188, 1);
                if (unk_0x80E2BA2BD5AB1A3F(2, 188))
                {
                    unk_0x9964F5BBD9415AB7(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
                    uParam0->f_237 = 0;
                    uParam0->f_231 = 0;
                    uParam0->f_232 = 0;
                    uParam0->f_22E = uParam0->f_23C + 500;
                    uParam0->f_239 = 3;
                    uParam0->f_23A = 0;
                    unk_0x9964F5BBD9415AB7(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
                }
                unk_0x572062A62138FBA2(2, 187, 1);
                if (unk_0x80E2BA2BD5AB1A3F(2, 187))
                {
                    unk_0x9964F5BBD9415AB7(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
                    uParam0->f_237 = 0;
                    uParam0->f_231 = 0;
                    uParam0->f_232 = 0;
                    uParam0->f_22E = uParam0->f_23C + 500;
                    uParam0->f_239 = 4;
                    uParam0->f_23A = 0;
                    unk_0x9964F5BBD9415AB7(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
                }
                unk_0x572062A62138FBA2(2, 202, 1);
                if (unk_0x80E2BA2BD5AB1A3F(2, 202))
                {
                    unk_0x9964F5BBD9415AB7(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
                    uParam0->f_237 = 0;
                    uParam0->f_231 = 0;
                    uParam0->f_232 = 0;
                    uParam0->f_22E = uParam0->f_23C + 500;
                    uParam0->f_239 = 2;
                    uParam0->f_23A = 0;
                    unk_0x9964F5BBD9415AB7(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
                }
            }
            else if (uParam0->f_232)
            {
                unk_0x0AF55029F939BA65(7);
                unk_0x0AF55029F939BA65(8);
                unk_0x0AF55029F939BA65(9);
                unk_0x0AF55029F939BA65(6);
                unk_0x572062A62138FBA2(0, 140, 1);
                unk_0x572062A62138FBA2(0, 141, 1);
                unk_0x572062A62138FBA2(0, 142, 1);
                if (unk_0x26BB91778477F482(2, 215) || unk_0x80E2BA2BD5AB1A3F(2, 200))
                {
                    unk_0x9964F5BBD9415AB7(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
                    uParam0->f_232 = 0;
                    uParam0->f_231 = 0;
                    uParam0->f_22E = uParam0->f_23C + 500;
                    unk_0x9964F5BBD9415AB7(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
                }
            }
        }
    }
    unk_0xE0A2E1F5E75D9DF8(1, &iVar13, &iVar14, &iVar15, &iVar16);
    unk_0x7DCBD85F58FA8F39(iVar13, iVar14, iVar15, iVar0);
    unk_0xF3AAD5EF5E952D4E(fVar9, fVar10);
    unk_0xC81BF7585F33A61A(0);
    unk_0x8E0F19C19C409DDB(1f, 0.4f);
    fVar1 = (fVar1 - func_47(6f));
    fVar1 = (fVar1 + (func_47(30f) - func_47((2f * 2f))));
    fVar11 = (fVar2 - func_47((2f * 14f)));
    if (fVar11 >= 0f)
    {
        fVar12 = func_25((fVar11 / (0.6f * func_47(25f))), 0f, 1f);
        func_44();
        unk_0x6276EB2A4CC7B039(0.5f, (fVar1 - (func_47((2f - 0.5f)) - 0.001388889f)), fVar6, func_39(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
    }
    else
    {
        return;
    }
    fVar1 = (fVar1 + func_47((2f * 0.3f)));
    if (uParam0->f_38 > 0)
    {
        fVar1 = (fVar1 + func_47((25f * 0.2f)));
    }
    iVar17 = 0;
    iVar17 = 0;
    while (iVar17 < uParam0->f_38)
    {
        fVar11 = (fVar2 - (fVar1 - (0.3f * func_46())));
        if (fVar11 >= 0f)
        {
            fVar12 = func_25((fVar11 / (0.8f * func_47(25f))), 0f, 1f);
            func_36(uParam0, iVar17, (fVar1 + func_47(2f)), fVar9, fVar10, SYSTEM::ROUND((IntToFloat(iVar0) * fVar12)));
        }
        else
        {
            return;
        }
        fVar1 = (fVar1 + func_47(25f));
        if (uParam0->f_22C == 4)
        {
            if (iVar17 == (uParam0->f_240 - 1))
            {
                fVar1 = (fVar1 + func_47((25f * 0.2f)));
                fVar11 = (fVar2 - (fVar1 - (0.3f * func_46())));
                if (fVar11 >= 0f)
                {
                    fVar1 = (fVar1 + func_47(2f));
                    fVar12 = func_25((fVar11 / (0.6f * func_47(25f))), 0f, 1f);
                    func_44();
                    unk_0x6276EB2A4CC7B039(0.5f, (fVar1 + func_47((2f * 0.5f))), fVar6, func_39(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
                    fVar1 = (fVar1 + func_47((2f * 0.3f)));
                    if (uParam0->f_38 > 0)
                    {
                        fVar1 = (fVar1 + func_47((25f * 0.2f)));
                    }
                }
            }
        }
        iVar17++;
    }
    if (uParam0->f_22C == 4)
    {
        return;
    }
    if (uParam0->f_38 > 0)
    {
        fVar1 = (fVar1 + func_47((25f * 0.2f)));
        fVar11 = (fVar2 - (fVar1 - (0.3f * func_46())));
        if (fVar11 >= 0f)
        {
            fVar1 = (fVar1 + func_47(2f));
            fVar12 = func_25((fVar11 / (0.6f * func_47(25f))), 0f, 1f);
            func_44();
            unk_0x6276EB2A4CC7B039(0.5f, (fVar1 + func_47((2f * 0.5f))), fVar6, func_39(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
        }
    }
    if (uParam0->f_225)
    {
        fVar1 = (fVar1 + func_47((25f * 0.2f)));
        fVar11 = (fVar2 - (fVar1 - (0.3f * func_46())));
        if (fVar11 >= 0f)
        {
            fVar12 = func_25((fVar11 / (0.8f * func_47(25f))), 0f, 1f);
            unk_0x7DCBD85F58FA8F39(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
            func_29(7, 0, 1, &fVar18, &fVar19, 0);
            fVar20 = fVar9;
            fVar21 = fVar10;
            if (unk_0xB859EDA9E476E45A() == 0)
            {
                fVar20 = (fVar9 + ((0.119f / func_46()) / 2.5f));
                fVar21 = (fVar10 - ((0.119f / func_46()) / 2.5f));
                if (uParam0->f_22C == 1)
                {
                    fVar20 = (fVar9 + (((0.119f + 0.05f) / func_46()) / 2.5f));
                    fVar21 = (fVar10 - (((0.119f + 0.05f) / func_46()) / 2.5f));
                }
            }
            if (uParam0->f_22D == 0)
            {
                fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
                fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
            }
            if (uParam0->f_22C != 3)
            {
                unk_0xF3AAD5EF5E952D4E(fVar20, fVar21);
                unk_0xC81BF7585F33A61A(1);
            }
            else
            {
                fVar20 = 0.5f;
                unk_0xC81BF7585F33A61A(0);
            }
            unk_0x8E0F19C19C409DDB(1f, 0.4f);
            func_28(&(uParam0->f_226), fVar20, (fVar1 + func_47((2f * 2f))), 0, 0, 0);
            unk_0xF3AAD5EF5E952D4E(fVar20, fVar21);
            unk_0xC81BF7585F33A61A(2);
            unk_0x8E0F19C19C409DDB(1f, 0.4f);
            unk_0xA0147851A8831777(0);
            func_44();
            fVar22 = fVar21;
            StringCopy(&cVar23, "MPHud", 16);
            StringCopy(&cVar24, "MissionPassedMedal", 32);
            fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
            unk_0xF3AAD5EF5E952D4E(fVar20, fVar22);
            unk_0x7DCBD85F58FA8F39(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
            switch (uParam0->f_22C)
            {
                case 0:
                    unk_0x6EF0D5178A3B92EF("PERCENTAGE");
                    unk_0x6A8B3CC08A759F44(uParam0->f_22A);
                    unk_0xBD217E52410D1B67(fVar20, (fVar1 + func_47((2f * 2f))), 0);
                    break;
                
                case 1:
                    unk_0x6EF0D5178A3B92EF("FO_TWO_NUM");
                    unk_0x6A8B3CC08A759F44(uParam0->f_22A);
                    unk_0x6A8B3CC08A759F44(uParam0->f_22B);
                    unk_0xBD217E52410D1B67(fVar20, (fVar1 + func_47((2f * 2f))), 0);
                    break;
                
                case 2:
                    unk_0x6EF0D5178A3B92EF("MTPHPER_XPNO");
                    unk_0x6A8B3CC08A759F44(uParam0->f_22A);
                    unk_0xBD217E52410D1B67(fVar20, (fVar1 + func_47((2f * 2f))), 0);
                    break;
                
                case 5:
                    unk_0x6EF0D5178A3B92EF("ESDOLLA");
                    unk_0x4BDF2F68AA4EAA77(uParam0->f_22A, 1);
                    unk_0xBD217E52410D1B67(fVar20, (fVar1 + func_47((2f * 2f))), 0);
                    break;
            }
            if (uParam0->f_22D != 0)
            {
                iVar25 = 255;
                iVar26 = 255;
                iVar27 = 255;
                iVar28 = iVar0;
                switch (uParam0->f_22D)
                {
                    case 1:
                        unk_0xE0A2E1F5E75D9DF8(107, &iVar25, &iVar26, &iVar27, &iVar28);
                        break;
                    
                    case 3:
                        unk_0xE0A2E1F5E75D9DF8(109, &iVar25, &iVar26, &iVar27, &iVar28);
                        break;
                    
                    case 2:
                        unk_0xE0A2E1F5E75D9DF8(108, &iVar25, &iVar26, &iVar27, &iVar28);
                        break;
                }
                fVar29 = (0.001388889f * 5f);
                fVar30 = ((0.00078125f * 16f) * 2f);
                fVar31 = ((0.001388889f * 16f) * 2f);
                fVar32 = ((fVar21 + func_27(4f)) - 0.006f);
                fVar33 = ((fVar1 + func_47(10f)) + fVar29);
                if (uParam0->f_22C == -1)
                {
                    fVar32 = (fVar32 - (0.006f * 6f));
                }
                fVar30 = (fVar30 * 0.65f);
                fVar31 = (fVar31 * 0.65f);
                unk_0x53017FFA0ED0CAF8(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, iVar25, iVar26, iVar27, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))), 0);
            }
            fVar1 = (fVar1 + (func_47(30f) - 2f));
        }
    }
}

float func_27(float fParam0)//Position - 0x22F0
{
    return (fParam0 * 0.00078125f);
}

void func_28(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x2300
{
    unk_0xA0147851A8831777(iParam3);
    unk_0xDBA848DABDEF9021(iParam5);
    func_44();
    if (bParam4)
    {
        unk_0x6EF0D5178A3B92EF("STRING");
        unk_0xA89C789CC9FEF523(sParam0);
    }
    else
    {
        unk_0x6EF0D5178A3B92EF(sParam0);
    }
    unk_0xBD217E52410D1B67(fParam1, fParam2, 0);
}

int func_29(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x233D
{
    char cVar0[64];
    char cVar1[64];
    int iVar2;
    int iVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    vector3 vVar7;
    
    StringCopy(&cVar0, func_35(iParam0), 64);
    StringCopy(&cVar1, func_32(iParam0, bParam1), 64);
    if (unk_0xA8C462EF7D9DC564(&cVar1) != 0)
    {
        fVar4 = 1f;
        if (bParam5)
        {
            unk_0x419479F67BC2C70F(&iVar2, &iVar3);
            fVar5 = unk_0x6321488E002E4CEF(0);
            if (func_31())
            {
                iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
            }
            fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
            fVar4 = (fVar6 / fVar5);
            if (func_31())
            {
                fVar4 = 1f;
            }
            if (unk_0x222F76006659B0EB(joaat("director_mode")) > 0)
            {
                unk_0xFE8958342D00D068(&iVar2, &iVar3);
            }
            iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) / fVar4));
            iVar3 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) / fVar4));
        }
        else
        {
            unk_0xFE8958342D00D068(&iVar2, &iVar3);
        }
        vVar7 = { unk_0x2183E832860E57E6(&cVar0, &cVar1) };
        vVar7.x = (vVar7.x * (func_30(iParam0) / fVar4));
        vVar7.y = (vVar7.y * (func_30(iParam0) / fVar4));
        if (!bParam2)
        {
            vVar7.x = (vVar7.x - 2f);
            vVar7.y = (vVar7.y - 2f);
        }
        if (iParam0 == 30)
        {
            vVar7.x = 288f;
            vVar7.y = 106f;
        }
        if (iParam0 == 29 && unk_0xA8C462EF7D9DC564(&(Global_574E.f_1B65[29 /*16*/])) == -1487683087)
        {
            vVar7.x = 106f;
            vVar7.y = 106f;
        }
        *fParam3 = ((vVar7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
        *fParam4 = (((vVar7.y / IntToFloat(iVar3)) / (vVar7.x / IntToFloat(iVar2))) * *fParam3);
        if (!bParam5)
        {
            if (!unk_0x7B405CE05271A492() && iParam0 != 30)
            {
                *fParam3 = (*fParam3 * 1.33f);
            }
        }
        if (iParam0 == 29)
        {
            if (*fParam3 > Global_574D)
            {
                *fParam4 = (*fParam4 * (Global_574D / *fParam3));
                *fParam3 = Global_574D;
            }
        }
        return 1;
    }
    return 0;
}

float func_30(int iParam0)//Position - 0x24EE
{
    switch (iParam0)
    {
        case 33:
        case 4:
        case 11:
        case 31:
        case 20:
        case 15:
        case 10:
        case 12:
        case 13:
        case 32:
        case 9:
        case 5:
        case 6:
        case 7:
        case 14:
        case 18:
        case 19:
        case 17:
        case 28:
        case 26:
        case 27:
        case 51:
        case 55:
        case 56:
        case 57:
        case 58:
        case 59:
        case 61:
            return 0.5f;
            break;
        
        case 60:
            return 0.8f;
            break;
    }
    return 1f;
}

int func_31()//Position - 0x25C2
{
    int iVar0;
    int iVar1;
    float fVar2;
    
    unk_0x419479F67BC2C70F(&iVar0, &iVar1);
    fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
    if (fVar2 > 3.5f)
    {
        return 1;
    }
    return 0;
}

var func_32(int iParam0, bool bParam1)//Position - 0x25F4
{
    char* sVar0[2];
    var uVar1;
    struct<13> Var2;
    
    if (!unk_0x9591DE0F00127F2A(&(Global_574E.f_1B65[iParam0 /*16*/])))
    {
        if (unk_0xA8C462EF7D9DC564(&(Global_574E.f_1B65[iParam0 /*16*/])) == -1487683087)
        {
            Var2 = { func_34(unk_0x7C7787D2D7139A85()) };
            if (unk_0x0DFEAFECE4B808CA(&Var2, &uVar1))
            {
                return func_33(&uVar1);
            }
        }
        else
        {
            return func_33(&(Global_574E.f_1B65[iParam0 /*16*/]));
        }
    }
    switch (iParam0)
    {
        case 3:
            sVar0[0] = "MP_hostCrown";
            sVar0[1] = "MP_hostCrown";
            break;
        
        case 21:
            sVar0[0] = "MP_SpecItem_Coke";
            sVar0[1] = "MP_SpecItem_Coke";
            break;
        
        case 22:
            sVar0[0] = "MP_SpecItem_Heroin";
            sVar0[1] = "MP_SpecItem_Heroin";
            break;
        
        case 23:
            sVar0[0] = "MP_SpecItem_Weed";
            sVar0[1] = "MP_SpecItem_Weed";
            break;
        
        case 24:
            sVar0[0] = "MP_SpecItem_Meth";
            sVar0[1] = "MP_SpecItem_Meth";
            break;
        
        case 25:
            sVar0[0] = "MP_SpecItem_Cash";
            sVar0[1] = "MP_SpecItem_Cash";
            break;
        
        case 1:
            sVar0[0] = "shop_NEW_Star";
            sVar0[1] = "shop_NEW_Star";
            break;
        
        case 2:
            sVar0[0] = "shop_NEW_Star";
            sVar0[1] = "shop_NEW_Star";
            break;
        
        case 4:
            sVar0[0] = "Shop_Tick_Icon";
            sVar0[1] = "Shop_Tick_Icon";
            break;
        
        case 6:
            sVar0[0] = "Shop_Box_CrossB";
            sVar0[1] = "Shop_Box_Cross";
            break;
        
        case 7:
            sVar0[0] = "Shop_Box_BlankB";
            sVar0[1] = "Shop_Box_Blank";
            break;
        
        case 5:
            sVar0[0] = "Shop_Box_TickB";
            sVar0[1] = "Shop_Box_Tick";
            break;
        
        case 8:
            sVar0[0] = "shop_NEW_Star";
            sVar0[1] = "shop_NEW_Star";
            break;
        
        case 9:
            sVar0[0] = "Shop_Clothing_Icon_B";
            sVar0[1] = "Shop_Clothing_Icon_A";
            break;
        
        case 10:
            sVar0[0] = "Shop_GunClub_Icon_B";
            sVar0[1] = "Shop_GunClub_Icon_A";
            break;
        
        case 17:
            sVar0[0] = "Shop_Ammo_Icon_B";
            sVar0[1] = "Shop_Ammo_Icon_A";
            break;
        
        case 18:
            sVar0[0] = "Shop_Armour_Icon_B";
            sVar0[1] = "Shop_Armour_Icon_A";
            break;
        
        case 19:
            sVar0[0] = "Shop_Health_Icon_B";
            sVar0[1] = "Shop_Health_Icon_A";
            break;
        
        case 20:
            sVar0[0] = "Shop_MakeUp_Icon_B";
            sVar0[1] = "Shop_MakeUp_Icon_A";
            break;
        
        case 11:
            sVar0[0] = "Shop_Tattoos_Icon_B";
            sVar0[1] = "Shop_Tattoos_Icon_A";
            break;
        
        case 12:
            sVar0[0] = "Shop_Garage_Icon_B";
            sVar0[1] = "Shop_Garage_Icon_A";
            break;
        
        case 13:
            sVar0[0] = "Shop_Garage_Bike_Icon_B";
            sVar0[1] = "Shop_Garage_Bike_Icon_A";
            break;
        
        case 14:
            sVar0[0] = "Shop_Barber_Icon_B";
            sVar0[1] = "Shop_Barber_Icon_A";
            break;
        
        case 15:
            sVar0[0] = "shop_Lock";
            sVar0[1] = "shop_Lock";
            break;
        
        case 16:
            sVar0[0] = "Shop_Tick_Icon";
            sVar0[1] = "Shop_Tick_Icon";
            break;
        
        case 26:
            sVar0[0] = "arrowleft";
            sVar0[1] = "arrowleft";
            break;
        
        case 27:
            sVar0[0] = "arrowright";
            sVar0[1] = "arrowright";
            break;
        
        case 28:
            sVar0[0] = "MP_AlertTriangle";
            sVar0[1] = "MP_AlertTriangle";
            break;
        
        case 29:
            sVar0[0] = "shop_NEW_Star";
            sVar0[1] = "shop_NEW_Star";
            break;
        
        case 31:
            sVar0[0] = "Shop_Michael_Icon_B";
            sVar0[1] = "Shop_Michael_Icon_A";
            break;
        
        case 32:
            sVar0[0] = "Shop_Franklin_Icon_B";
            sVar0[1] = "Shop_Franklin_Icon_A";
            break;
        
        case 33:
            sVar0[0] = "Shop_Trevor_Icon_B";
            sVar0[1] = "Shop_Trevor_Icon_A";
            break;
        
        case 50:
            sVar0[0] = "SaleIcon";
            sVar0[1] = "SaleIcon";
            break;
        
        case 51:
            sVar0[0] = "Shop_Tick_Icon";
            sVar0[1] = "Shop_Tick_Icon";
            break;
        
        case 53:
            sVar0[0] = "shop_NEW_Star";
            sVar0[1] = "shop_NEW_Star";
            break;
        
        case 54:
            sVar0[0] = "Shop_Lock_Arena";
            sVar0[1] = "Shop_Lock_Arena";
            break;
        
        case 55:
            sVar0[0] = "Card_Suit_Clubs";
            sVar0[1] = "Card_Suit_Clubs";
            break;
        
        case 56:
            sVar0[0] = "Card_Suit_Hearts";
            sVar0[1] = "Card_Suit_Hearts";
            break;
        
        case 57:
            sVar0[0] = "Card_Suit_Spades";
            sVar0[1] = "Card_Suit_Spades";
            break;
        
        case 58:
            sVar0[0] = "Card_Suit_Diamonds";
            sVar0[1] = "Card_Suit_Diamonds";
            break;
        
        case 59:
            sVar0[0] = "Shop_Art_Icon_B";
            sVar0[1] = "Shop_Art_Icon_A";
            break;
        
        case 61:
            sVar0[0] = "Shop_Art_Icon_B";
            sVar0[1] = "Shop_Art_Icon_A";
            break;
        
        case 60:
            sVar0[0] = "Shop_Chips_A";
            sVar0[1] = "Shop_Chips_B";
            break;
        
        case 0:
            sVar0[0] = "";
            sVar0[1] = "";
            break;
    }
    if (bParam1)
    {
        return sVar0[0];
    }
    return sVar0[1];
}

var func_33(var uParam0)//Position - 0x2B1C
{
    return uParam0;
}

struct<13> func_34(int iParam0)//Position - 0x2B26
{
    struct<13> Var0;
    
    unk_0x229B5E28267D1B1F(iParam0, &Var0, 13);
    return Var0;
}

char* func_35(int iParam0)//Position - 0x2B3D
{
    var uVar0;
    struct<13> Var1;
    
    if (!unk_0x9591DE0F00127F2A(&(Global_574E.f_1784[iParam0 /*16*/])))
    {
        if (unk_0xA8C462EF7D9DC564(&(Global_574E.f_1784[iParam0 /*16*/])) == -1487683087)
        {
            Var1 = { func_34(unk_0x7C7787D2D7139A85()) };
            unk_0x0DFEAFECE4B808CA(&Var1, &uVar0);
            return func_33(&uVar0);
        }
        else
        {
            return func_33(&(Global_574E.f_1784[iParam0 /*16*/]));
        }
    }
    if (iParam0 == 50)
    {
        return "MPShopSale";
    }
    return "CommonMenu";
}

void func_36(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)//Position - 0x2BB2
{
    int iVar0;
    int iVar1;
    int iVar2;
    var uVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    
    unk_0xE0A2E1F5E75D9DF8(1, &iVar0, &iVar1, &iVar2, &uVar3);
    unk_0x7DCBD85F58FA8F39(iVar0, iVar1, iVar2, iParam5);
    unk_0xF3AAD5EF5E952D4E(fParam3, fParam4);
    unk_0xC81BF7585F33A61A(1);
    unk_0x8E0F19C19C409DDB(1f, func_38(14f));
    unk_0xA0147851A8831777(0);
    unk_0xDBA848DABDEF9021(0);
    func_44();
    if (uParam0->f_213[iParam1])
    {
        unk_0x6EF0D5178A3B92EF("STRING");
        unk_0xA89C789CC9FEF523(&(uParam0->f_47[iParam1 /*16*/]));
    }
    else
    {
        unk_0x6EF0D5178A3B92EF(&(uParam0->f_47[iParam1 /*16*/]));
        if (uParam0->f_39[iParam1] == 16 || uParam0->f_39[iParam1] == 17)
        {
            unk_0x6A8B3CC08A759F44(uParam0->f_1E9[iParam1]);
        }
    }
    unk_0xBD217E52410D1B67(fParam3, fParam2, 0);
    fVar4 = fParam4;
    switch (uParam0->f_205[iParam1])
    {
        case 0:
            break;
        
        case 1:
            func_29(7, 0, 1, &fVar5, &fVar6, 0);
            unk_0x53017FFA0ED0CAF8("CommonMenu", func_32(7, 0), (fParam4 - 0.006f), ((fParam2 + func_47(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
            fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
            break;
        
        case 2:
            func_29(5, 0, 1, &fVar5, &fVar6, 0);
            unk_0x53017FFA0ED0CAF8("CommonMenu", func_32(5, 0), (fParam4 - 0.006f), ((fParam2 + func_47(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
            fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
            break;
        
        case 3:
            func_29(6, 0, 1, &fVar5, &fVar6, 0);
            unk_0x53017FFA0ED0CAF8("CommonMenu", func_32(6, 0), (fParam4 - 0.006f), ((fParam2 + func_47(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
            fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
            break;
    }
    if (uParam0->f_39[iParam1] == 0)
    {
        return;
    }
    if (uParam0->f_39[iParam1] == 15)
    {
        unk_0xC81BF7585F33A61A(1);
    }
    else
    {
        unk_0xC81BF7585F33A61A(2);
    }
    unk_0x8E0F19C19C409DDB(1f, func_38(14f));
    if (uParam0->f_39[iParam1] == 5 || uParam0->f_39[iParam1] == 4)
    {
        unk_0xF3AAD5EF5E952D4E(fParam3, (fVar4 - (0.00078125f * 3f)));
    }
    else
    {
        unk_0xF3AAD5EF5E952D4E(fParam3, (fVar4 + (0.00078125f * 2f)));
    }
    unk_0x7DCBD85F58FA8F39(iVar0, iVar1, iVar2, iParam5);
    func_37(uParam0->f_1E9[iParam1], uParam0->f_1F7[iParam1], fParam4, fParam2, &(uParam0->f_118[iParam1 /*16*/]), uParam0->f_39[iParam1]);
}

void func_37(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)//Position - 0x2E3D
{
    int iVar0;
    float fVar1;
    float fVar2;
    float fVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    
    iVar0 = 1;
    unk_0xA0147851A8831777(0);
    unk_0xDBA848DABDEF9021(0);
    func_44();
    fVar1 = 0f;
    fVar2 = (8f * 0.00078125f);
    fVar3 = (16f * 0.001388889f);
    iVar4 = 93;
    iVar5 = 182;
    iVar6 = 229;
    if (iParam5 == 4)
    {
        iVar4 = 194;
        iVar5 = 80;
        iVar6 = 80;
    }
    switch (iParam5)
    {
        case 4:
        case 5:
            unk_0x8E0F19C19C409DDB(1f, func_38(18f));
            unk_0xDBA848DABDEF9021(4);
            if (iParam0 < 0)
            {
                unk_0xD4445EEB71902566("ESMINDOLLA");
                unk_0x4BDF2F68AA4EAA77((-1 * iParam0), 1);
                fVar1 = unk_0x90203BB77E2FECC8(0);
            }
            else
            {
                unk_0xD4445EEB71902566("ESDOLLA");
                unk_0x4BDF2F68AA4EAA77(iParam0, 1);
                fVar1 = unk_0x90203BB77E2FECC8(0);
            }
            fVar1 = (fVar1 - (fVar1 % 0.00078125f));
            unk_0x53017FFA0ED0CAF8("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
            unk_0x53017FFA0ED0CAF8("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
            unk_0x53017FFA0ED0CAF8("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
            unk_0x8E0F19C19C409DDB(1f, func_38(14f));
            break;
    }
    unk_0xEB6F6B8EBD6B6648(iVar0);
    switch (iParam5)
    {
        case 11:
            unk_0x6EF0D5178A3B92EF("PERCENTAGE");
            unk_0x6A8B3CC08A759F44(iParam0);
            break;
        
        case 1:
            unk_0xDBA848DABDEF9021(5);
            unk_0x6EF0D5178A3B92EF("FO_NUM");
            unk_0x6A8B3CC08A759F44(iParam0);
            break;
        
        case 2:
            unk_0xDBA848DABDEF9021(5);
            unk_0x6EF0D5178A3B92EF("FO_TWO_NUM");
            unk_0x6A8B3CC08A759F44(iParam0);
            unk_0x6A8B3CC08A759F44(iParam1);
            break;
        
        case 4:
        case 5:
            unk_0x8E0F19C19C409DDB(1f, func_38(18f));
        
        case 3:
            if (iParam0 < 0)
            {
                unk_0x6EF0D5178A3B92EF("ESMINDOLLA");
                unk_0x4BDF2F68AA4EAA77((-1 * iParam0), 1);
            }
            else
            {
                unk_0x6EF0D5178A3B92EF("ESDOLLA");
                unk_0x4BDF2F68AA4EAA77(iParam0, 1);
            }
            break;
        
        case 6:
            unk_0x6EF0D5178A3B92EF(sParam4);
            break;
        
        case 7:
            unk_0x6EF0D5178A3B92EF("STRING");
            unk_0xA89C789CC9FEF523(sParam4);
            break;
        
        case 8:
            unk_0xDBA848DABDEF9021(5);
            unk_0x6EF0D5178A3B92EF("STRING");
            unk_0xC5B1209EEC9E6603(iParam0, 14);
            break;
        
        case 9:
            unk_0xDBA848DABDEF9021(5);
            unk_0x6EF0D5178A3B92EF("STRING");
            unk_0xC5B1209EEC9E6603(iParam0, 6);
            break;
        
        case 10:
            unk_0xDBA848DABDEF9021(5);
            unk_0x6EF0D5178A3B92EF("STRING");
            unk_0xC5B1209EEC9E6603(iParam0, 2055);
            break;
        
        case 18:
            unk_0xDBA848DABDEF9021(5);
            unk_0x6EF0D5178A3B92EF("STRING");
            unk_0xC5B1209EEC9E6603(iParam0, 2055);
            break;
        
        case 12:
            unk_0x6EF0D5178A3B92EF("AHD_DIST");
            unk_0x6A8B3CC08A759F44(iParam0);
            break;
        
        case 13:
            unk_0x6EF0D5178A3B92EF(sParam4);
            unk_0x6A8B3CC08A759F44(iParam0);
            unk_0x6A8B3CC08A759F44(iParam1);
            break;
        
        case 15:
        case 14:
            unk_0x6EF0D5178A3B92EF(sParam4);
            unk_0x6A8B3CC08A759F44(iParam0);
            unk_0x6A8B3CC08A759F44(iParam1);
            break;
        
        case 16:
            unk_0x6EF0D5178A3B92EF(sParam4);
            unk_0x6A8B3CC08A759F44(iParam1);
            break;
        
        case 20:
            unk_0x6EF0D5178A3B92EF(sParam4);
            break;
    }
    if (iParam5 != 17)
    {
        if (iParam5 == 4 || iParam5 == 5)
        {
            unk_0xBD217E52410D1B67((fParam2 - (0.00078125f * 4f)), fParam3, 0);
            unk_0x8E0F19C19C409DDB(1f, func_38(14f));
        }
        else
        {
            unk_0xBD217E52410D1B67(fParam2, fParam3, 0);
        }
    }
}

float func_38(float fParam0)//Position - 0x31C5
{
    return (fParam0 * 0.025f);
}

float func_39(float fParam0)//Position - 0x31D5
{
    return (fParam0 * 0.0009259259f);
}

void func_40(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x31E5
{
    int iVar0;
    int iVar1;
    
    iVar0 = -1;
    iVar1 = 0;
    while (iVar1 <= 9)
    {
        if (iVar0 == -1)
        {
            if (func_42(7, iVar1) == 0)
            {
                iVar0 = iVar1;
            }
        }
        iVar1++;
    }
    if (iVar0 > -1)
    {
        Global_14FB1E.f_1 = 1;
        func_41(7, iVar0);
        Global_14FB1E.f_1165[iVar0] = iParam0;
        StringCopy(&(Global_14FB1E.f_1165.f_B[iVar0 /*16*/]), sParam1, 64);
        Global_14FB1E.f_1165.f_AC[iVar0] = iParam2;
        Global_14FB1E.f_1165.f_D8[iVar0] = iParam3;
        Global_14FB1E.f_1165.f_B7[iVar0] = iParam4;
        Global_14FB1E.f_1165.f_C2[iVar0] = iParam5;
        Global_14FB1E.f_1165.f_F9[iVar0] = iParam6;
        Global_14FB1E.f_1165.f_104[iVar0] = iParam7;
        Global_14FB1E.f_1165.f_CD[iVar0] = iParam8;
        Global_14FB1E.f_1165.f_13A[iVar0] = iParam9;
        Global_14FB1E.f_1165.f_145[iVar0] = iParam10;
        Global_14FB1E.f_1165.f_165[iVar0] = iParam11;
        Global_14FB1E.f_1165.f_EE[iVar0] = iParam12;
        Global_14FB1E.f_1165.f_10F[iVar0] = iParam13;
        Global_14FB1E.f_1165.f_170[iVar0] = iParam14;
        Global_14FB1E.f_1165.f_17B[iVar0] = iParam15;
        Global_14FB1E.f_1165.f_186[iVar0] = iParam16;
        Global_14FB1E.f_1165.f_E3[iVar0] = iParam17;
    }
}

void func_41(int iParam0, int iParam1)//Position - 0x3342
{
    unk_0xA1E7A40E1F56E511(&(Global_14FB1E.f_1828[iParam0]), iParam1);
}

bool func_42(int iParam0, int iParam1)//Position - 0x335B
{
    return unk_0xA2BC31158C8CEFD2(Global_14FB1E.f_1828[iParam0], iParam1);
}

float func_43(char* sParam0)//Position - 0x3374
{
    unk_0xD4445EEB71902566(sParam0);
    return (unk_0x90203BB77E2FECC8(1) / 2f);
}

void func_44()//Position - 0x3389
{
    unk_0xF314976CA3E17AC7(1);
    if (unk_0xA710300CD13D2877() || unk_0x260395BA7F0C83CB())
    {
        unk_0xF314976CA3E17AC7(7);
    }
    unk_0x42713436F16E83BB(0);
}

void func_45(char* sParam0)//Position - 0x33B1
{
    unk_0x7151302E2AA285DC(sParam0);
}

float func_46()//Position - 0x33BF
{
    float fVar0;
    
    fVar0 = 1f;
    if (unk_0xE434AB6E3DE89861())
    {
    }
    return fVar0;
}

float func_47(float fParam0)//Position - 0x33D3
{
    return (fParam0 * 0.001388889f);
}

int func_48(int iParam0)//Position - 0x33E3
{
    int iVar0;
    int iVar1;
    
    if (unk_0xD4B321D9096B01FC(iParam0))
    {
        iVar1 = unk_0x7F375072508F738F(iParam0);
        iVar0 = 0;
        while (iVar0 <= 2)
        {
            if (func_49(iVar0) == iVar1)
            {
                return iVar0;
            }
            iVar0++;
        }
    }
    return 145;
}

int func_49(int iParam0)//Position - 0x3420
{
    if (func_51(iParam0))
    {
        return func_50(iParam0);
    }
    else if (iParam0 != 145)
    {
    }
    return 0;
}

var func_50(int iParam0)//Position - 0x3445
{
    return Global_706[iParam0 /*29*/];
}

bool func_51(int iParam0)//Position - 0x3454
{
    return iParam0 < 3;
}

void func_52(int iParam0)//Position - 0x3460
{
    if (func_54())
    {
        return;
    }
    if (!Global_4C1E.f_1 == 1)
    {
        if (func_53(0))
        {
            func_55(iParam0);
        }
        unk_0xA1E7A40E1F56E511(&Global_1CBD, 2);
    }
}

int func_53(int iParam0)//Position - 0x3493
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

bool func_54()//Position - 0x34ED
{
    return unk_0xA2BC31158C8CEFD2(Global_19C148, 19);
}

void func_55(int iParam0)//Position - 0x34FF
{
    if (func_54())
    {
        return;
    }
    if (Global_4CD0)
    {
        if (func_58())
        {
            func_57(1, 1);
        }
        else
        {
            func_57(0, 0);
        }
    }
    if (Global_4C1E.f_1 == 10 || Global_4C1E.f_1 == 9)
    {
        unk_0xA1E7A40E1F56E511(&Global_1CBD, 16);
    }
    if (unk_0x31634D65216B86B6())
    {
        unk_0x623942A4F366F9BB(0);
    }
    Global_5145 = 5;
    if (iParam0 == 1)
    {
        unk_0xA1E7A40E1F56E511(&Global_1CBC, 30);
    }
    else
    {
        unk_0x3B76114EC84D5812(&Global_1CBC, 30);
    }
    if (!func_56())
    {
        Global_4C1E.f_1 = 3;
    }
}

int func_56()//Position - 0x3589
{
    if (Global_4C1E.f_1 == 1 || Global_4C1E.f_1 == 0)
    {
        return 1;
    }
    return 0;
}

void func_57(bool bParam0, bool bParam1)//Position - 0x35B0
{
    if (bParam0)
    {
        if (func_53(0))
        {
            Global_4CD0 = 1;
            if (bParam1)
            {
                unk_0xB1B52CCC3333E09F(&Global_4BDF);
            }
            Global_4BD6 = { Global_4BE8[Global_4BE7 /*3*/] };
            unk_0x4577629BF7B43F7F(Global_4BD6);
        }
    }
    else if (Global_4CD0 == 1)
    {
        Global_4CD0 = 0;
        Global_4BD6 = { Global_4BEF[Global_4BE7 /*3*/] };
        if (bParam1)
        {
            unk_0x4577629BF7B43F7F(Global_4BDF);
        }
        else
        {
            unk_0x4577629BF7B43F7F(Global_4BD6);
        }
    }
}

bool func_58()//Position - 0x3624
{
    return unk_0xA2BC31158C8CEFD2(Global_19C148, 5);
}

int func_59()//Position - 0x3635
{
    int iVar0;
    
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < Global_11F5E)
    {
        if (Global_11F5F[iVar0 /*9*/] > 0)
        {
            if (Global_F100[Global_11F5F[iVar0 /*9*/] /*13*/].f_7 == 0)
            {
                return 1;
            }
        }
        iVar0++;
    }
    return 0;
}

void func_60(bool bParam0)//Position - 0x3679
{
    char* sVar0;
    
    unk_0x42E1D2373042F69A(0);
    switch (func_61())
    {
        case 0:
            if (bParam0)
            {
                sVar0 = "MICHAEL_SMALL_01";
            }
            else
            {
                sVar0 = "MICHAEL_BIG_01";
            }
            break;
        
        case 1:
            if (bParam0)
            {
                sVar0 = "FRANKLIN_SMALL_01";
            }
            else
            {
                sVar0 = "FRANKLIN_BIG_01";
            }
            break;
        
        case 2:
            if (bParam0)
            {
                sVar0 = "TREVOR_SMALL_01";
            }
            else
            {
                sVar0 = "TREVOR_BIG_01";
            }
            break;
    }
    unk_0xEFC7B89E4BAC8CA7(sVar0);
}

int func_61()//Position - 0x36EC
{
    func_62();
    return Global_1B3C8.f_936.f_21B.f_10E1;
}

void func_62()//Position - 0x3705
{
    int iVar0;
    
    if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
    {
        if (func_49(Global_1B3C8.f_936.f_21B.f_10E1) != unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()))
        {
            iVar0 = func_48(unk_0x0FA8183DAD2B3203());
            if (func_51(iVar0) && (!func_63(14) || Global_1AFAF))
            {
                if (Global_1B3C8.f_936.f_21B.f_10E1 != iVar0 && func_51(Global_1B3C8.f_936.f_21B.f_10E1))
                {
                    Global_1B3C8.f_936.f_21B.f_10E2 = Global_1B3C8.f_936.f_21B.f_10E1;
                }
                Global_1B3C8.f_936.f_21B.f_10E3 = iVar0;
                Global_1B3C8.f_936.f_21B.f_10E1 = iVar0;
                return;
            }
        }
        else
        {
            if (Global_1B3C8.f_936.f_21B.f_10E1 != 145)
            {
                Global_1B3C8.f_936.f_21B.f_10E3 = Global_1B3C8.f_936.f_21B.f_10E1;
            }
            return;
        }
    }
    Global_1B3C8.f_936.f_21B.f_10E1 = 145;
}

bool func_63(int iParam0)//Position - 0x3802
{
    return Global_A1B4 == iParam0;
}

int func_64(var uParam0, bool bParam1, int iParam2)//Position - 0x3810
{
    uParam0->f_C = iParam2;
    func_67(uParam0);
    func_66(uParam0);
    if (unk_0x2553916E420E8EF0(&(uParam0->f_226), "SPR_RESULT") || (unk_0x2553916E420E8EF0(&(uParam0->f_226), "") && uParam0->f_38 > 0))
    {
        uParam0->f_236 = 1;
    }
    if (unk_0x393E9918BC37548A())
    {
        unk_0x4F7B74CE562E3EC6("MPHud", false);
    }
    if (uParam0->f_1 == 0)
    {
        unk_0x4F7B74CE562E3EC6("CommonMenu", false);
        unk_0x4F7B74CE562E3EC6("MPLeaderboard", false);
        unk_0x4F7B74CE562E3EC6("MPHud", false);
        uParam0->f_1 = unk_0x1FAFE9BB9D8960C1("MP_BIG_MESSAGE_FREEMODE");
        uParam0->f_2 = 0;
        uParam0->f_3 = 0;
    }
    uParam0->f_4 = unk_0xB46BBCF1DD07D1F9("INSTRUCTIONAL_BUTTONS");
    if (bParam1)
    {
        while (((!unk_0x08EA887200715AD9(uParam0->f_1) || !unk_0xF409FD92D37CDEEE("CommonMenu")) || !unk_0xF409FD92D37CDEEE("MPLeaderboard")) || !unk_0xF409FD92D37CDEEE("MPHud"))
        {
            SYSTEM::WAIT(0);
        }
        if (uParam0->f_232 || uParam0->f_237)
        {
            while (!unk_0x08EA887200715AD9(uParam0->f_4))
            {
                SYSTEM::WAIT(0);
            }
        }
    }
    else
    {
        if (((!unk_0x08EA887200715AD9(uParam0->f_1) || !unk_0xF409FD92D37CDEEE("CommonMenu")) || !unk_0xF409FD92D37CDEEE("MPLeaderboard")) || !unk_0xF409FD92D37CDEEE("MPHud"))
        {
            return 0;
        }
        if (uParam0->f_232)
        {
            if (!unk_0x08EA887200715AD9(uParam0->f_4))
            {
                return 0;
            }
        }
    }
    if (uParam0->f_232)
    {
        if (uParam0->f_237)
        {
            func_65(uParam0);
        }
        else if (uParam0->f_38 != 0)
        {
            func_22(uParam0, 1);
        }
        else
        {
            func_22(uParam0, 0);
        }
    }
    Global_12C26 = 1;
    return 1;
}

void func_65(var uParam0)//Position - 0x39AF
{
    unk_0xF1BC72CEC2746995(uParam0->f_4, "CLEAR_ALL");
    unk_0xAC7C2DE2DDC7AF03();
    if (unk_0xE434AB6E3DE89861())
    {
        unk_0xF1BC72CEC2746995(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
        unk_0x282C78036676E0C2(true);
        unk_0xAC7C2DE2DDC7AF03();
    }
    unk_0xF1BC72CEC2746995(uParam0->f_4, "SET_DATA_SLOT");
    unk_0xD02F24F3E2DB263A(2);
    func_24(unk_0x357127A2E350E9F6(2, 188, 1));
    func_23("ES_HELP_TU");
    unk_0xAC7C2DE2DDC7AF03();
    unk_0xF1BC72CEC2746995(uParam0->f_4, "SET_DATA_SLOT");
    unk_0xD02F24F3E2DB263A(1);
    func_24(unk_0x357127A2E350E9F6(2, 187, 1));
    func_23("ES_HELP_TD");
    unk_0xAC7C2DE2DDC7AF03();
    unk_0xF1BC72CEC2746995(uParam0->f_4, "SET_DATA_SLOT");
    unk_0xD02F24F3E2DB263A(0);
    func_24(unk_0x357127A2E350E9F6(2, 202, 1));
    func_23("ES_HELP_AB");
    unk_0xAC7C2DE2DDC7AF03();
    unk_0xF1BC72CEC2746995(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
    unk_0xAC7C2DE2DDC7AF03();
}

void func_66(var uParam0)//Position - 0x3A73
{
    float fVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    
    fVar0 = 0f;
    unk_0xC81BF7585F33A61A(0);
    unk_0x8E0F19C19C409DDB(1f, func_38(16f));
    if (uParam0->f_1F == 0)
    {
        if (uParam0->f_1D)
        {
            unk_0xD4445EEB71902566("STRING");
            unk_0xA89C789CC9FEF523(&(uParam0->f_D));
            fVar0 = unk_0x90203BB77E2FECC8(1);
        }
        else
        {
            unk_0xD4445EEB71902566(&(uParam0->f_D));
            fVar0 = unk_0x90203BB77E2FECC8(1);
        }
    }
    else
    {
        unk_0xD4445EEB71902566("STRING");
        iVar1 = 0;
        iVar2 = 0;
        iVar3 = 0;
        iVar3 = 0;
        while (iVar3 < uParam0->f_1F)
        {
            switch (uParam0->f_20[iVar3])
            {
                case 0:
                    unk_0x6A8B3CC08A759F44(uParam0->f_35[iVar1]);
                    iVar1++;
                    break;
                
                case 1:
                    unk_0x0AC9F8E1AFCEC860(&(uParam0->f_24[iVar2 /*16*/]));
                    iVar2++;
                    break;
                
                case 2:
                    unk_0xA89C789CC9FEF523(&(uParam0->f_24[iVar2 /*16*/]));
                    iVar2++;
                    break;
            }
            iVar3++;
        }
        fVar0 = unk_0x90203BB77E2FECC8(1);
    }
    if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
    {
        *uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
    }
}

void func_67(var uParam0)//Position - 0x3B7B
{
    uParam0->f_223 = 1f;
    uParam0->f_222 = 0;
    uParam0->f_238 = 0f;
    uParam0->f_22E = 0;
    uParam0->f_1E = 0f;
    uParam0->f_224 = 0f;
    uParam0->f_22F = 0f;
    uParam0->f_230 = 0f;
    uParam0->f_221 = 0;
    uParam0->f_233 = 0;
    uParam0->f_23C = 0;
    uParam0->f_234 = 0;
    uParam0->f_235 = 0;
    uParam0->f_236 = 0;
    *uParam0 = 0.1125f;
    uParam0->f_2 = 0;
    uParam0->f_3 = 0;
    uParam0->f_23E = 0;
    uParam0->f_23F = 0;
    uParam0->f_23D = 1f;
}

void func_68()//Position - 0x3BFA
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    bool bVar4;
    bool bVar5;
    var uVar6;
    float fVar7;
    bool bVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    vector3 vVar12;
    vector3 vVar13;
    
    if (Global_11F5E == 0)
    {
        return;
    }
    if (Global_11FF5 == -1)
    {
        return;
    }
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < Global_11F5E)
    {
        if (Global_11F5F[iVar0 /*9*/].f_3 != 0)
        {
            return;
        }
        iVar0++;
    }
    iVar1 = 0;
    iVar0 = 0;
    iVar2 = 0;
    iVar0 = 0;
    while (iVar0 < Global_11F5E)
    {
        iVar3 = Global_11F5F[iVar0 /*9*/];
        bVar4 = !Global_F100[iVar3 /*13*/].f_7;
        bVar5 = Global_F100[iVar3 /*13*/].f_8;
        uVar6 = Global_F100[iVar3 /*13*/].f_C;
        fVar7 = Global_F100[iVar3 /*13*/].f_9;
        bVar8 = false;
        bVar8 = false;
        if (func_73(iVar3, Global_11F5F[iVar0 /*9*/].f_1))
        {
            bVar8 = true;
        }
        if (bVar4)
        {
            if (bVar8)
            {
                iVar1 = (iVar1 + 100000000);
            }
        }
        if (bVar5)
        {
            iVar9 = Global_11F5F[iVar0 /*9*/].f_1;
            iVar10 = SYSTEM::FLOOR((IntToFloat(iVar9) * fVar7));
            iVar2 = (iVar2 + iVar10);
            iVar1 = (iVar1 + iVar10);
        }
        iVar0++;
    }
    Global_11FF0 = iVar1;
    Global_11FF1 = iVar2;
    if (unk_0x2A983C9CF4EE0D5E())
    {
        if (Global_11FF4 == 0)
        {
            iVar11 = Global_11FF5;
            if (iVar11 == 90)
            {
                if (Global_1B3C8.f_2378.f_63.f_CD[func_72(0)] == 2)
                {
                    vVar12.f_2.f_1 = 4;
                    vVar12.x = 716;
                    unk_0x5489D94EE787E876(&vVar12);
                    unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
                    unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
                    unk_0x0051B55AE7A779DF(126, 1, 0f);
                    unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
                    unk_0x0051B55AE7A779DF(135, func_71(810), 0f);
                    unk_0x0051B55AE7A779DF(136, func_71(811), 0f);
                    unk_0x0051B55AE7A779DF(132, func_71(812), 0f);
                    unk_0x0051B55AE7A779DF(2, func_71(813), 0f);
                    unk_0x0051B55AE7A779DF(141, func_71(814), 0f);
                    unk_0x0051B55AE7A779DF(127, func_71(815), 0f);
                    unk_0x0051B55AE7A779DF(137, func_71(816), 0f);
                    unk_0x0051B55AE7A779DF(7, func_71(817), 0f);
                    unk_0x0051B55AE7A779DF(133, func_71(818), 0f);
                    unk_0x0051B55AE7A779DF(90, func_71(819), 0f);
                    vVar12.x = 717;
                    unk_0x5489D94EE787E876(&vVar12);
                    unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
                    unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
                    unk_0x0051B55AE7A779DF(126, 1, 0f);
                    unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
                    unk_0x0051B55AE7A779DF(135, func_71(810), 0f);
                    unk_0x0051B55AE7A779DF(136, func_71(811), 0f);
                    unk_0x0051B55AE7A779DF(132, func_71(812), 0f);
                    unk_0x0051B55AE7A779DF(2, func_71(813), 0f);
                    unk_0x0051B55AE7A779DF(141, func_71(814), 0f);
                    unk_0x0051B55AE7A779DF(127, func_71(815), 0f);
                    unk_0x0051B55AE7A779DF(137, func_71(816), 0f);
                    unk_0x0051B55AE7A779DF(7, func_71(817), 0f);
                    unk_0x0051B55AE7A779DF(133, func_71(818), 0f);
                    unk_0x0051B55AE7A779DF(90, func_71(819), 0f);
                }
                else
                {
                    func_70(iVar11);
                }
            }
            else if (iVar11 == 47)
            {
                vVar13.f_2.f_1 = 4;
                vVar13.x = 673;
                unk_0x5489D94EE787E876(&vVar13);
                unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
                unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
                unk_0x0051B55AE7A779DF(126, 1, 0f);
                unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
                unk_0x0051B55AE7A779DF(142, func_71(413), 0f);
                unk_0x0051B55AE7A779DF(1, func_71(414), 0f);
                unk_0x0051B55AE7A779DF(87, func_71(415), 0f);
                unk_0x0051B55AE7A779DF(138, func_71(416), 0f);
                unk_0x0051B55AE7A779DF(133, func_71(417), 0f);
                unk_0x0051B55AE7A779DF(7, func_71(418), 0f);
                unk_0x0051B55AE7A779DF(90, func_71(419), 0f);
                unk_0x0051B55AE7A779DF(92, func_71(420), 0f);
                unk_0x0051B55AE7A779DF(5, func_71(421), 0f);
                unk_0x0051B55AE7A779DF(127, func_71(422), 0f);
                unk_0x0051B55AE7A779DF(139, func_71(423), 0f);
                unk_0x0051B55AE7A779DF(134, func_71(424), 0f);
                unk_0x0051B55AE7A779DF(141, func_71(425), 0f);
                unk_0x0051B55AE7A779DF(137, func_71(426), 0f);
                unk_0x0051B55AE7A779DF(132, func_71(427), 0f);
                unk_0x0051B55AE7A779DF(2, func_71(428), 0f);
                unk_0x0051B55AE7A779DF(140, 0, 0f);
                vVar13.x = 672;
                unk_0x5489D94EE787E876(&vVar13);
                unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
                unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
                unk_0x0051B55AE7A779DF(126, 1, 0f);
                unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
                unk_0x0051B55AE7A779DF(142, func_71(413), 0f);
                unk_0x0051B55AE7A779DF(1, func_71(414), 0f);
                unk_0x0051B55AE7A779DF(87, func_71(415), 0f);
                unk_0x0051B55AE7A779DF(138, func_71(416), 0f);
                unk_0x0051B55AE7A779DF(133, func_71(417), 0f);
                unk_0x0051B55AE7A779DF(7, func_71(418), 0f);
                unk_0x0051B55AE7A779DF(90, func_71(419), 0f);
                unk_0x0051B55AE7A779DF(92, func_71(420), 0f);
                unk_0x0051B55AE7A779DF(5, func_71(421), 0f);
                unk_0x0051B55AE7A779DF(127, func_71(422), 0f);
                unk_0x0051B55AE7A779DF(139, func_71(423), 0f);
                unk_0x0051B55AE7A779DF(134, func_71(424), 0f);
                unk_0x0051B55AE7A779DF(141, func_71(425), 0f);
                unk_0x0051B55AE7A779DF(135, func_71(426), 0f);
                unk_0x0051B55AE7A779DF(132, func_71(427), 0f);
                unk_0x0051B55AE7A779DF(2, func_71(428), 0f);
                unk_0x0051B55AE7A779DF(140, 0, 0f);
            }
            else
            {
                func_70(iVar11);
            }
            Global_1B3C8.f_2378.f_14A[iVar11 /*6*/].f_4 = Global_11FF0;
        }
        else
        {
            func_69(Global_11FF5);
        }
    }
}

void func_69(var uParam0)//Position - 0x4136
{
    var uVar0;
    
    uVar0 = uParam0;
    uVar0 = uVar0;
}

void func_70(int iParam0)//Position - 0x4146
{
    vector3 vVar0;
    struct<13> Var1;
    var uVar2;
    
    vVar0.f_2.f_1 = 4;
    if (!unk_0x2A983C9CF4EE0D5E())
    {
        return;
    }
    if (unk_0xFF6895C150414C31())
    {
        Var1 = { func_34(unk_0x7C7787D2D7139A85()) };
        if (unk_0xF10E9BDC0C546560(&Var1))
        {
            if (unk_0x4065D3D900AB253F(&uVar2, 35, &Var1))
            {
                vVar0.y = uVar2;
            }
        }
    }
    switch (iParam0)
    {
        case 0:
            vVar0.x = 577;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(7, func_71(0), 0f);
            unk_0x0051B55AE7A779DF(148, func_71(1), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(2), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(3), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(4), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(5), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(6), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(7), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(8), 0f);
            vVar0.x = 913;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(7, func_71(0), 0f);
            unk_0x0051B55AE7A779DF(148, func_71(1), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(2), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(3), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(4), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(5), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(6), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(7), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(8), 0f);
            return;
        
        case 1:
            vVar0.x = 576;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(9), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(10), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(11), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(12), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(13), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(14), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(15), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(16), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(17), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(18), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(19), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(20), 0f);
            vVar0.x = 575;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(9), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(10), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(11), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(12), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(13), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(14), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(15), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(16), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(17), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(18), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(19), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(20), 0f);
            return;
        
        case 2:
            vVar0.x = 579;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(21), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(22), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(23), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(24), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(25), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(26), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(27), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(28), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(29), 0f);
            vVar0.x = 578;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(21), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(22), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(23), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(24), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(25), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(26), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(27), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(28), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(29), 0f);
            return;
        
        case 3:
            vVar0.x = 797;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(30), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(31), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(32), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(33), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(34), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(35), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(36), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(37), 0f);
            vVar0.x = 796;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(30), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(31), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(32), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(33), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(34), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(35), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(36), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(37), 0f);
            return;
        
        case 4:
            vVar0.x = 799;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(43), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(44), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(45), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(46), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(47), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(48), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(49), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(50), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(51), 0f);
            vVar0.x = 798;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(43), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(44), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(45), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(46), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(47), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(48), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(49), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(50), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(51), 0f);
            return;
        
        case 5:
            vVar0.x = 801;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(57), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(58), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(59), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(60), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(61), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(62), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(63), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(64), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(65), 0f);
            vVar0.x = 800;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(57), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(58), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(59), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(60), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(61), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(62), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(63), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(64), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(65), 0f);
            return;
        
        case 6:
            vVar0.x = 803;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(71), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(72), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(73), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(74), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(75), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(76), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(77), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(78), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(79), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(80), 0f);
            vVar0.x = 802;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(71), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(72), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(73), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(74), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(75), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(76), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(77), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(78), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(79), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(80), 0f);
            return;
        
        case 7:
            vVar0.x = 805;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(86), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(87), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(88), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(89), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(90), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(91), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(92), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(93), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(94), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(95), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(96), 0f);
            vVar0.x = 804;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(86), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(87), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(88), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(89), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(90), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(91), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(92), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(93), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(94), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(95), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(96), 0f);
            return;
        
        case 9:
            vVar0.x = 639;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(7, func_71(102), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(103), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(104), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(105), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(106), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(107), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(108), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(109), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(110), 0f);
            vVar0.x = 638;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(7, func_71(102), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(103), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(104), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(105), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(106), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(107), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(108), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(109), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(110), 0f);
            return;
        
        case 8:
            vVar0.x = 641;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(134, func_71(111), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(112), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(113), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(114), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(115), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(116), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(117), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(118), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(119), 0f);
            vVar0.x = 640;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(134, func_71(111), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(112), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(113), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(114), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(115), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(116), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(117), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(118), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(119), 0f);
            return;
        
        case 10:
            vVar0.x = 646;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(7, func_71(120), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(121), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(122), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(123), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(124), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(125), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(126), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(127), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(128), 0f);
            vVar0.x = 645;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(7, func_71(120), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(121), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(122), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(123), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(124), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(125), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(126), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(127), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(128), 0f);
            return;
        
        case 11:
            vVar0.x = 671;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(129), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(130), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(131), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(132), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(133), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(134), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(135), 0f);
            vVar0.x = 670;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(129), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(130), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(131), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(132), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(133), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(134), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(135), 0f);
            return;
        
        case 12:
            vVar0.x = 603;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(92, func_71(136), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(137), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(138), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(139), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(140), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(141), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(142), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(143), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(144), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(145), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(146), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(147), 0f);
            vVar0.x = 602;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(92, func_71(136), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(137), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(138), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(139), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(140), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(141), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(142), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(143), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(144), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(145), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(146), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(147), 0f);
            return;
        
        case 13:
            vVar0.x = 605;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(87, func_71(148), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(149), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(150), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(151), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(152), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(153), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(154), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(155), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(156), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(157), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(158), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(159), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(160), 0f);
            vVar0.x = 604;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(87, func_71(148), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(149), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(150), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(151), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(152), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(153), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(154), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(155), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(156), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(157), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(158), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(159), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(160), 0f);
            return;
        
        case 14:
            vVar0.x = 648;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(1, func_71(161), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(162), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(163), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(164), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(165), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(166), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(167), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(168), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(169), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(170), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(171), 0f);
            vVar0.x = 647;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(1, func_71(161), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(162), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(163), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(164), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(165), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(166), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(167), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(168), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(169), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(170), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(171), 0f);
            return;
        
        case 15:
            vVar0.x = 650;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(1, func_71(172), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(173), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(174), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(175), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(176), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(177), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(178), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(179), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(180), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(181), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(182), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(183), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(184), 0f);
            vVar0.x = 649;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(1, func_71(172), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(173), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(174), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(175), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(176), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(177), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(178), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(179), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(180), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(181), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(182), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(183), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(184), 0f);
            return;
        
        case 16:
            vVar0.x = 656;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(185), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(186), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(187), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(188), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(189), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(190), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(191), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(192), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(193), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(194), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(195), 0f);
            vVar0.x = 655;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(185), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(186), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(187), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(188), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(189), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(190), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(191), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(192), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(193), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(194), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(195), 0f);
            return;
        
        case 17:
            vVar0.x = 583;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(138, func_71(196), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(197), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(198), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(199), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(200), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(201), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(202), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(203), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(204), 0f);
            vVar0.x = 582;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(138, func_71(196), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(197), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(198), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(199), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(200), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(201), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(202), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(203), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(204), 0f);
            return;
        
        case 18:
            vVar0.x = 585;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(133, func_71(205), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(206), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(207), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(208), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(209), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(210), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(211), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(212), 0f);
            unk_0x0051B55AE7A779DF(140, func_71(213), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(214), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(215), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(216), 0f);
            vVar0.x = 584;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(133, func_71(205), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(206), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(207), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(208), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(209), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(210), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(211), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(212), 0f);
            unk_0x0051B55AE7A779DF(140, func_71(213), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(214), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(215), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(216), 0f);
            return;
        
        case 19:
            vVar0.x = 587;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(7, func_71(217), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(218), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(219), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(220), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(221), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(222), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(223), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(224), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(225), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(226), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(227), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(228), 0f);
            vVar0.x = 586;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(7, func_71(217), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(218), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(219), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(220), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(221), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(222), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(223), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(224), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(225), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(226), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(227), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(228), 0f);
            return;
        
        case 20:
            vVar0.x = 609;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(95, func_71(229), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(230), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(231), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(232), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(233), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(234), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(235), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(236), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(237), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(238), 0f);
            vVar0.x = 608;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(95, func_71(229), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(230), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(231), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(232), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(233), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(234), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(235), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(236), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(237), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(238), 0f);
            return;
        
        case 21:
            vVar0.x = 621;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(239), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(240), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(241), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(242), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(243), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(244), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(245), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(246), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(247), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(248), 0f);
            vVar0.x = 620;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(239), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(240), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(241), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(242), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(243), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(244), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(245), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(246), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(247), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(248), 0f);
            return;
        
        case 22:
            vVar0.x = 675;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(249), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(250), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(251), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(252), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(253), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(254), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(255), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(256), 0f);
            vVar0.x = 674;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(249), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(250), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(251), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(252), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(253), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(254), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(255), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(256), 0f);
            return;
        
        case 26:
            vVar0.x = 712;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(257), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(258), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(259), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(260), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(261), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(262), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(263), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(264), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(265), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(266), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(267), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(268), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(269), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(270), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(271), 0f);
            unk_0x0051B55AE7A779DF(103, func_71(272), 0f);
            vVar0.x = 711;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(257), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(258), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(259), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(260), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(261), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(262), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(263), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(264), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(265), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(266), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(267), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(268), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(269), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(270), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(271), 0f);
            unk_0x0051B55AE7A779DF(103, func_71(272), 0f);
            return;
        
        case 29:
            vVar0.x = 611;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(1, func_71(273), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(274), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(275), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(276), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(277), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(278), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(279), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(280), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(281), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(282), 0f);
            vVar0.x = 610;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(1, func_71(273), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(274), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(275), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(276), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(277), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(278), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(279), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(280), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(281), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(282), 0f);
            return;
        
        default:
    }
    switch (iParam0)
    {
        case 30:
            vVar0.x = 615;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(283), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(284), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(285), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(286), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(287), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(288), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(289), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(290), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(291), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(292), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(293), 0f);
            vVar0.x = 614;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(283), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(284), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(285), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(286), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(287), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(288), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(289), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(290), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(291), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(292), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(293), 0f);
            return;
        
        case 31:
            vVar0.x = 623;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(133, func_71(294), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(295), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(296), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(297), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(298), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(299), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(300), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(301), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(302), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(303), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(304), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(305), 0f);
            vVar0.x = 622;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(133, func_71(294), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(295), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(296), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(297), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(298), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(299), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(300), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(301), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(302), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(303), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(304), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(305), 0f);
            return;
        
        case 38:
            vVar0.x = 627;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(127, func_71(306), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(307), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(308), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(309), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(310), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(311), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(312), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(313), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(314), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(315), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(316), 0f);
            vVar0.x = 626;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(127, func_71(306), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(307), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(308), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(309), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(310), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(311), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(312), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(313), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(314), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(315), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(316), 0f);
            return;
        
        case 33:
            vVar0.x = 741;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(317), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(318), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(319), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(320), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(321), 0f);
            vVar0.x = 740;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(317), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(318), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(319), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(320), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(321), 0f);
            return;
        
        case 34:
            vVar0.x = 745;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(322), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(323), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(324), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(325), 0f);
            vVar0.x = 742;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(322), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(323), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(324), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(325), 0f);
            return;
        
        case 39:
            vVar0.x = 658;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(133, func_71(326), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(327), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(328), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(329), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(330), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(331), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(332), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(333), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(334), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(335), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(336), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(337), 0f);
            vVar0.x = 657;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(133, func_71(326), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(327), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(328), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(329), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(330), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(331), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(332), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(333), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(334), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(335), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(336), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(337), 0f);
            return;
        
        case 40:
            vVar0.x = 581;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(7, func_71(338), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(339), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(340), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(341), 0f);
            unk_0x0051B55AE7A779DF(140, func_71(342), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(343), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(344), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(345), 0f);
            vVar0.x = 580;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(7, func_71(338), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(339), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(340), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(341), 0f);
            unk_0x0051B55AE7A779DF(140, func_71(342), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(343), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(344), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(345), 0f);
            return;
        
        case 41:
            vVar0.x = 619;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(346), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(347), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(348), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(349), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(350), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(351), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(352), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(353), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(354), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(355), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(356), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(357), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(358), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(359), 0f);
            vVar0.x = 618;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(346), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(347), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(348), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(349), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(350), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(351), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(352), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(353), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(354), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(355), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(356), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(357), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(358), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(359), 0f);
            return;
        
        case 42:
            vVar0.x = 704;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(127, func_71(360), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(361), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(362), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(363), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(364), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(365), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(366), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(367), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(368), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(369), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(370), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(371), 0f);
            vVar0.x = 703;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(127, func_71(360), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(361), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(362), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(363), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(364), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(365), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(366), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(367), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(368), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(369), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(370), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(371), 0f);
            return;
        
        case 43:
            vVar0.x = 593;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(1, func_71(372), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(373), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(374), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(375), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(376), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(377), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(378), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(379), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(380), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(381), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(382), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(383), 0f);
            vVar0.x = 592;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(1, func_71(372), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(373), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(374), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(375), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(376), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(377), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(378), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(379), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(380), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(381), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(382), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(383), 0f);
            return;
        
        case 44:
            vVar0.x = 589;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(384), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(385), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(386), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(387), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(388), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(389), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(390), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(391), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(392), 0f);
            vVar0.x = 588;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(384), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(385), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(386), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(387), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(388), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(389), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(390), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(391), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(392), 0f);
            return;
        
        case 45:
            vVar0.x = 635;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(133, func_71(393), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(394), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(395), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(396), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(397), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(398), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(399), 0f);
            vVar0.x = 634;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(133, func_71(393), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(394), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(395), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(396), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(397), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(398), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(399), 0f);
            return;
        
        case 46:
            vVar0.x = 669;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(400), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(401), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(402), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(403), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(404), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(405), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(406), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(407), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(408), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(409), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(410), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(411), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(412), 0f);
            vVar0.x = 668;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(400), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(401), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(402), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(403), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(404), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(405), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(406), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(407), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(408), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(409), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(410), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(411), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(412), 0f);
            return;
        
        case 47:
            vVar0.x = 673;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(142, func_71(413), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(414), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(415), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(416), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(417), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(418), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(419), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(420), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(421), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(422), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(423), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(424), 0f);
            unk_0x0051B55AE7A779DF(141, func_71(425), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(426), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(427), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(428), 0f);
            vVar0.x = 672;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(142, func_71(413), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(414), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(415), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(416), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(417), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(418), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(419), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(420), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(421), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(422), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(423), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(424), 0f);
            unk_0x0051B55AE7A779DF(141, func_71(425), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(426), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(427), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(428), 0f);
            return;
        
        case 48:
            vVar0.x = 694;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(429), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(430), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(431), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(432), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(433), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(434), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(435), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(436), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(437), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(438), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(439), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(440), 0f);
            vVar0.x = 693;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(429), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(430), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(431), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(432), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(433), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(434), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(435), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(436), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(437), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(438), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(439), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(440), 0f);
            return;
        
        case 49:
            vVar0.x = 702;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(441), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(442), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(443), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(444), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(445), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(446), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(447), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(448), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(449), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(450), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(451), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(452), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(453), 0f);
            vVar0.x = 701;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(441), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(442), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(443), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(444), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(445), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(446), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(447), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(448), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(449), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(450), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(451), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(452), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(453), 0f);
            return;
        
        case 53:
            vVar0.x = 714;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(95, func_71(454), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(455), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(456), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(457), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(458), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(459), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(460), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(461), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(462), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(463), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(464), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(465), 0f);
            vVar0.x = 713;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(95, func_71(454), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(455), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(456), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(457), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(458), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(459), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(460), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(461), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(462), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(463), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(464), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(465), 0f);
            return;
        
        case 60:
            vVar0.x = 809;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(466), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(467), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(468), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(469), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(470), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(471), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(472), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(473), 0f);
            vVar0.x = 808;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(466), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(467), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(468), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(469), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(470), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(471), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(472), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(473), 0f);
            return;
        
        case 61:
            vVar0.x = 637;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(474), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(475), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(476), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(477), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(478), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(479), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(480), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(481), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(482), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(483), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(484), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(485), 0f);
            vVar0.x = 636;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(474), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(475), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(476), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(477), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(478), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(479), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(480), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(481), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(482), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(483), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(484), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(485), 0f);
            return;
        
        case 62:
            vVar0.x = 599;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(136, func_71(486), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(487), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(488), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(489), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(490), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(491), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(492), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(493), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(494), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(495), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(496), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(497), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(498), 0f);
            vVar0.x = 598;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(136, func_71(486), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(487), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(488), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(489), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(490), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(491), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(492), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(493), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(494), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(495), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(496), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(497), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(498), 0f);
            return;
        
        case 63:
            vVar0.x = 601;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(87, func_71(499), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(500), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(501), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(502), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(503), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(504), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(505), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(506), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(507), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(508), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(509), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(510), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(511), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(512), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(513), 0f);
            unk_0x0051B55AE7A779DF(9, func_71(514), 0f);
            vVar0.x = 600;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(87, func_71(499), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(500), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(501), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(502), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(503), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(504), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(505), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(506), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(507), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(508), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(509), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(510), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(511), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(512), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(513), 0f);
            unk_0x0051B55AE7A779DF(9, func_71(514), 0f);
            return;
        
        case 64:
            vVar0.x = 607;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(87, func_71(515), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(516), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(517), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(518), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(519), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(520), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(521), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(522), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(523), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(524), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(525), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(526), 0f);
            vVar0.x = 606;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(87, func_71(515), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(516), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(517), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(518), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(519), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(520), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(521), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(522), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(523), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(524), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(525), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(526), 0f);
            return;
        
        case 66:
            vVar0.x = 680;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(133, func_71(527), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(528), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(529), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(530), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(531), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(532), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(533), 0f);
            vVar0.x = 676;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(133, func_71(527), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(528), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(529), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(530), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(531), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(532), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(533), 0f);
            return;
        
        case 67:
            vVar0.x = 679;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(139, func_71(534), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(535), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(536), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(537), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(538), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(539), 0f);
            vVar0.x = 678;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(139, func_71(534), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(535), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(536), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(537), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(538), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(539), 0f);
            return;
        
        case 68:
            vVar0.x = 725;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(95, func_71(540), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(541), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(542), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(543), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(544), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(545), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(546), 0f);
            vVar0.x = 724;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(95, func_71(540), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(541), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(542), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(543), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(544), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(545), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(546), 0f);
            return;
        
        default:
    }
    switch (iParam0)
    {
        case 69:
            vVar0.x = 686;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(92, func_71(547), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(548), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(549), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(550), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(551), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(552), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(553), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(554), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(555), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(556), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(557), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(558), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(559), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(560), 0f);
            vVar0.x = 681;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(92, func_71(547), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(548), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(549), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(550), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(551), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(552), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(553), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(554), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(555), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(556), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(557), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(558), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(559), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(560), 0f);
            return;
        
        case 70:
            vVar0.x = 721;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(142, func_71(561), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(562), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(563), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(564), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(565), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(566), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(567), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(568), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(569), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(570), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(571), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(572), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(573), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(574), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(575), 0f);
            vVar0.x = 720;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(142, func_71(561), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(562), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(563), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(564), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(565), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(566), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(567), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(568), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(569), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(570), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(571), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(572), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(573), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(574), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(575), 0f);
            return;
        
        case 71:
            vVar0.x = 617;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(576), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(577), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(578), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(579), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(580), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(581), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(582), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(583), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(584), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(585), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(586), 0f);
            vVar0.x = 616;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(576), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(577), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(578), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(579), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(580), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(581), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(582), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(583), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(584), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(585), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(586), 0f);
            return;
        
        case 72:
            vVar0.x = 727;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(138, func_71(587), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(588), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(589), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(590), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(591), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(592), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(593), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(594), 0f);
            vVar0.x = 726;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(138, func_71(587), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(588), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(589), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(590), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(591), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(592), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(593), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(594), 0f);
            return;
        
        case 73:
            vVar0.x = 729;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(92, func_71(595), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(596), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(597), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(598), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(599), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(600), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(601), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(602), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(603), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(604), 0f);
            vVar0.x = 728;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(92, func_71(595), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(596), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(597), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(598), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(599), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(600), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(601), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(602), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(603), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(604), 0f);
            return;
        
        case 74:
            vVar0.x = 625;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(87, func_71(605), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(606), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(607), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(608), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(609), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(610), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(611), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(612), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(613), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(614), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(615), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(616), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(617), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(618), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(619), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(620), 0f);
            vVar0.x = 624;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(87, func_71(605), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(606), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(607), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(608), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(609), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(610), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(611), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(612), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(613), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(614), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(615), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(616), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(617), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(618), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(619), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(620), 0f);
            return;
        
        case 75:
            vVar0.x = 719;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(127, func_71(621), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(622), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(623), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(624), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(625), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(626), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(627), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(628), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(629), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(630), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(631), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(632), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(633), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(634), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(635), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(636), 0f);
            vVar0.x = 718;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(127, func_71(621), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(622), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(623), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(624), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(625), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(626), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(627), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(628), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(629), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(630), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(631), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(632), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(633), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(634), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(635), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(636), 0f);
            return;
        
        case 76:
            vVar0.x = 667;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(7, func_71(637), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(638), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(639), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(640), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(641), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(642), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(643), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(644), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(645), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(646), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(647), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(648), 0f);
            vVar0.x = 666;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(7, func_71(637), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(638), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(639), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(640), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(641), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(642), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(643), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(644), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(645), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(646), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(647), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(648), 0f);
            return;
        
        case 78:
            vVar0.x = 735;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(138, func_71(649), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(650), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(651), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(652), 0f);
            vVar0.x = 734;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(138, func_71(649), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(650), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(651), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(652), 0f);
            return;
        
        case 79:
            vVar0.x = 737;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(7, func_71(653), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(654), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(655), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(656), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(657), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(658), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(659), 0f);
            vVar0.x = 736;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(7, func_71(653), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(654), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(655), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(656), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(657), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(658), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(659), 0f);
            return;
        
        case 84:
            vVar0.x = 706;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(7, func_71(660), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(661), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(662), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(663), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(664), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(665), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(666), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(667), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(668), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(669), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(670), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(671), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(672), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(673), 0f);
            vVar0.x = 705;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(7, func_71(660), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(661), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(662), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(663), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(664), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(665), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(666), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(667), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(668), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(669), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(670), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(671), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(672), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(673), 0f);
            return;
        
        case 85:
            vVar0.x = 723;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(133, func_71(674), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(675), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(676), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(677), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(678), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(679), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(680), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(681), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(682), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(683), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(684), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(685), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(686), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(687), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(688), 0f);
            vVar0.x = 722;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(133, func_71(674), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(675), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(676), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(677), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(678), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(679), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(680), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(681), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(682), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(683), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(684), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(685), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(686), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(687), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(688), 0f);
            return;
        
        case 86:
            vVar0.x = 595;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(7, func_71(689), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(690), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(691), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(692), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(693), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(694), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(695), 0f);
            vVar0.x = 594;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(7, func_71(689), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(690), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(691), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(692), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(693), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(694), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(695), 0f);
            return;
        
        case 87:
            vVar0.x = 731;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(90, func_71(696), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(697), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(698), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(699), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(700), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(701), 0f);
            vVar0.x = 730;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(90, func_71(696), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(697), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(698), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(699), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(700), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(701), 0f);
            return;
        
        case 88:
            vVar0.x = 733;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(95, func_71(702), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(703), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(704), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(705), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(706), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(707), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(708), 0f);
            vVar0.x = 732;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(95, func_71(702), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(703), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(704), 0f);
            unk_0x0051B55AE7A779DF(139, func_71(705), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(706), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(707), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(708), 0f);
            return;
        
        case 91:
            vVar0.x = 652;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(138, func_71(709), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(710), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(711), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(712), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(713), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(714), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(715), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(716), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(717), 0f);
            vVar0.x = 651;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(138, func_71(709), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(710), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(711), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(712), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(713), 0f);
            unk_0x0051B55AE7A779DF(142, func_71(714), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(715), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(716), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(717), 0f);
            return;
        
        case 92:
            vVar0.x = 739;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(95, func_71(718), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(719), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(720), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(721), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(722), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(723), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(724), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(725), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(726), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(727), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(728), 0f);
            vVar0.x = 738;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(95, func_71(718), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(719), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(720), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(721), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(722), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(723), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(724), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(725), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(726), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(727), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(728), 0f);
            return;
        
        case 93:
            vVar0.x = 654;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(7, func_71(729), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(730), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(731), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(732), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(733), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(734), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(735), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(736), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(737), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(738), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(739), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(740), 0f);
            vVar0.x = 653;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(7, func_71(729), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(730), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(731), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(732), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(733), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(734), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(735), 0f);
            unk_0x0051B55AE7A779DF(87, func_71(736), 0f);
            unk_0x0051B55AE7A779DF(1, func_71(737), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(738), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(739), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(740), 0f);
            return;
        
        case 90:
            vVar0.x = 597;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(135, func_71(810), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(811), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(812), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(813), 0f);
            unk_0x0051B55AE7A779DF(141, func_71(814), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(815), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(816), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(817), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(818), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(819), 0f);
            vVar0.x = 596;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(135, func_71(810), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(811), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(812), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(813), 0f);
            unk_0x0051B55AE7A779DF(141, func_71(814), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(815), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(816), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(817), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(818), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(819), 0f);
            return;
        
        case 36:
            vVar0.x = 831;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(138, func_71(820), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(821), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(822), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(823), 0f);
            vVar0.x = 832;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(138, func_71(820), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(821), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(822), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(823), 0f);
            return;
        
        case 37:
            vVar0.x = 833;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(138, func_71(824), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(825), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(826), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(827), 0f);
            vVar0.x = 834;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(138, func_71(824), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(825), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(826), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(827), 0f);
            return;
        
        case 24:
            vVar0.x = 848;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(133, func_71(846), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(847), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(848), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(849), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(850), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(851), 0f);
            vVar0.x = 847;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(133, func_71(846), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(847), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(848), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(849), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(850), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(851), 0f);
            return;
        
        case 25:
            vVar0.x = 846;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(133, func_71(852), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(853), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(854), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(855), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(856), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(857), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(858), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(859), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(860), 0f);
            vVar0.x = 845;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(133, func_71(852), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(853), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(854), 0f);
            unk_0x0051B55AE7A779DF(5, func_71(855), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(856), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(857), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(858), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(859), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(860), 0f);
            return;
        
        case 59:
            vVar0.x = 807;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(861), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(862), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(863), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(864), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(865), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(866), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(867), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(868), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(869), 0f);
            vVar0.x = 806;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(861), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(862), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(863), 0f);
            unk_0x0051B55AE7A779DF(135, func_71(864), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(865), 0f);
            unk_0x0051B55AE7A779DF(136, func_71(866), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(867), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(868), 0f);
            unk_0x0051B55AE7A779DF(137, func_71(869), 0f);
            return;
        
        case 65:
            vVar0.x = 838;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(870), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(871), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(872), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(873), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(874), 0f);
            vVar0.x = 837;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(870), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(871), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(872), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(873), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(874), 0f);
            return;
        
        default:
    }
    switch (iParam0)
    {
        case 80:
            vVar0.x = 917;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(133, func_71(875), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(876), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(877), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(878), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(879), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(880), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(881), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(882), 0f);
            vVar0.x = 916;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(133, func_71(875), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(876), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(877), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(878), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(879), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(880), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(881), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(882), 0f);
            return;
        
        case 81:
            vVar0.x = 919;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(133, func_71(883), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(884), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(885), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(886), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(887), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(888), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(889), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(890), 0f);
            vVar0.x = 918;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(133, func_71(883), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(884), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(885), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(886), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(887), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(888), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(889), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(890), 0f);
            return;
        
        case 82:
            vVar0.x = 921;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(133, func_71(891), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(892), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(893), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(894), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(895), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(896), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(897), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(898), 0f);
            vVar0.x = 920;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(133, func_71(891), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(892), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(893), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(894), 0f);
            unk_0x0051B55AE7A779DF(138, func_71(895), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(896), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(897), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(898), 0f);
            return;
        
        case 83:
            vVar0.x = 923;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(899), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(900), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(901), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(902), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(903), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(904), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(905), 0f);
            vVar0.x = 922;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(2, func_71(899), 0f);
            unk_0x0051B55AE7A779DF(134, func_71(900), 0f);
            unk_0x0051B55AE7A779DF(92, func_71(901), 0f);
            unk_0x0051B55AE7A779DF(133, func_71(902), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(903), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(904), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(905), 0f);
            return;
        
        case 89:
            vVar0.x = 925;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(138, func_71(906), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(907), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(908), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(909), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(910), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(911), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(912), 0f);
            vVar0.x = 924;
            unk_0x5489D94EE787E876(&vVar0);
            unk_0x0051B55AE7A779DF(131, Global_11FF0, 0f);
            unk_0x0051B55AE7A779DF(162, Global_11FF1, 0f);
            unk_0x0051B55AE7A779DF(126, 1, 0f);
            unk_0x0051B55AE7A779DF(161, Global_11FF3, 0f);
            unk_0x0051B55AE7A779DF(138, func_71(906), 0f);
            unk_0x0051B55AE7A779DF(2, func_71(907), 0f);
            unk_0x0051B55AE7A779DF(7, func_71(908), 0f);
            unk_0x0051B55AE7A779DF(127, func_71(909), 0f);
            unk_0x0051B55AE7A779DF(95, func_71(910), 0f);
            unk_0x0051B55AE7A779DF(90, func_71(911), 0f);
            unk_0x0051B55AE7A779DF(132, func_71(912), 0f);
            return;
        
        default:
    }
}

int func_71(int iParam0)//Position - 0xB85D
{
    int iVar0;
    int iVar1;
    
    iVar0 = 0;
    iVar1 = 0;
    switch (iParam0)
    {
        case 665:
        case 676:
            iVar0 = 0;
            while (iVar0 < 5)
            {
                if (Global_1B3C8.f_1.f_7E[Global_F023 /*23*/].f_B[iVar0] == 1)
                {
                    iVar1 = (iVar1 + Global_1B3C8.f_1.f_7E[Global_F023 /*23*/].f_11[iVar0]);
                }
                iVar0++;
            }
            return iVar1;
        
        default:
    }
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < Global_11F5E)
    {
        if (Global_11F5F[iVar0 /*9*/] == iParam0)
        {
            return Global_11F5F[iVar0 /*9*/].f_1;
        }
        iVar0++;
    }
    return 0;
}

int func_72(int iParam0)//Position - 0xB8F7
{
    switch (iParam0)
    {
        case 0:
            return 7;
            break;
        
        case 1:
            return 8;
            break;
        
        case 2:
            return 9;
            break;
        
        case 3:
            return 10;
            break;
        
        case 4:
            return 11;
            break;
    }
    return -1;
}

int func_73(int iParam0, int iParam1)//Position - 0xB94C
{
    if (iParam1 < 0)
    {
        return 0;
    }
    switch (Global_F100[iParam0 /*13*/])
    {
        case 1:
        case 2:
        case 4:
        case 5:
        case 17:
            if (iParam1 < 1)
            {
                return 0;
            }
            break;
    }
    if (iParam1 == 2147483647)
    {
        return 0;
    }
    if (((iParam0 == 881 || iParam0 == 889) || iParam0 == 897) && Global_1B3C8.f_6143[4 /*4*/] == func_61())
    {
        Global_F100[iParam0 /*13*/].f_2 = 0;
    }
    if (Global_F100[iParam0 /*13*/].f_3)
    {
        if (iParam1 < Global_F100[iParam0 /*13*/].f_2)
        {
            return 1;
        }
    }
    else if (iParam1 >= Global_F100[iParam0 /*13*/].f_2)
    {
        return 1;
    }
    return 0;
}

void func_74(var uParam0)//Position - 0xBA16
{
    int iVar0;
    int iVar1;
    bool bVar2;
    float fVar3;
    
    if (Global_F015)
    {
        Global_F024 = 0;
        return;
    }
    iLocal_61 = 0;
    iLocal_62 = 0;
    iVar0 = 0;
    if (func_98(0))
    {
        unk_0x98A694BACB9FF216();
        Global_F017 = 1;
        unk_0xA5073A137CBE2F8E(33, 33);
    }
    iVar1 = -1;
    iLocal_66 = 0;
    bVar2 = false;
    iVar0 = 0;
    while (iVar0 < Global_11F5E)
    {
        switch (Global_11F5F[iVar0 /*9*/])
        {
            case 852:
            case 846:
                Global_11F5F[iVar0 /*9*/].f_1 = 1;
                break;
        }
        if (func_85(uParam0, iVar0))
        {
        }
        if (Global_11F5F[iVar0 /*9*/] >= 0)
        {
            if (!Global_F100[Global_11F5F[iVar0 /*9*/] /*13*/].f_7)
            {
                iLocal_62++;
                if (Global_11F5F[iVar0 /*9*/].f_3 == 2)
                {
                    bVar2 = true;
                }
            }
        }
        switch (Global_11F5F[iVar0 /*9*/])
        {
            case 84:
            case 100:
            case 69:
            case 41:
            case 54:
                iVar1 = Global_11F5F[iVar0 /*9*/].f_1;
                break;
        }
        iVar0++;
    }
    Global_11FF3 = iLocal_61;
    fVar3 = func_80(uParam0, iLocal_61, iLocal_62, bVar2);
    if (func_98(0))
    {
        unk_0x57D7CB389C4B4D2A(Global_11FF5);
        unk_0x57D7CB389C4B4D2A(SYSTEM::ROUND(fVar3));
        if (bVar2)
        {
            unk_0x57D7CB389C4B4D2A(1);
        }
        else
        {
            unk_0x57D7CB389C4B4D2A(0);
        }
        if (Global_11FF4)
        {
            unk_0x57D7CB389C4B4D2A(1);
        }
        else
        {
            unk_0x57D7CB389C4B4D2A(0);
        }
        unk_0xC4CDA96512FA4CD4();
        Global_F017 = 0;
    }
    Global_F024 = 0;
    if (iVar1 > -1)
    {
        fVar3 = SYSTEM::TO_FLOAT(iVar1);
    }
    func_75(fVar3, bVar2);
}

void func_75(float fParam0, bool bParam1)//Position - 0xBB89
{
    float fVar0;
    int iVar1;
    int iVar2;
    
    if (Global_11FF4)
    {
        iVar1 = Global_11FF5;
        fVar0 = func_79(iVar1);
        if (fVar0 < 100f)
        {
            if (fParam0 >= 100f)
            {
                Global_1B3C8.f_271B.f_16++;
            }
        }
        if (fParam0 >= fVar0)
        {
            func_78(iVar1, fParam0, bParam1);
        }
    }
    else if (Global_11FF5 == -1)
    {
    }
    else
    {
        iVar2 = Global_11FF5;
        fVar0 = func_77(iVar2);
        if (fVar0 < 100f)
        {
            if (fParam0 >= 100f)
            {
                Global_1B3C8.f_271B.f_16++;
            }
        }
        if (fParam0 >= fVar0)
        {
            func_76(iVar2, fParam0, bParam1);
        }
    }
}

void func_76(int iParam0, float fParam1, bool bParam2)//Position - 0xBC3A
{
    if (bParam2)
    {
        Global_1B3C8.f_2378.f_14A[iParam0 /*6*/].f_5 = 50f;
    }
    else
    {
        Global_1B3C8.f_2378.f_14A[iParam0 /*6*/].f_5 = fParam1;
    }
    Global_7819 = 1;
}

float func_77(int iParam0)//Position - 0xBC75
{
    return Global_1B3C8.f_2378.f_14A[iParam0 /*6*/].f_5;
}

void func_78(int iParam0, float fParam1, bool bParam2)//Position - 0xBC8D
{
    if (bParam2)
    {
        Global_1B3C8.f_4889[iParam0 /*6*/].f_5 = 50f;
    }
    else
    {
        Global_1B3C8.f_4889[iParam0 /*6*/].f_5 = fParam1;
    }
    Global_7819 = 1;
}

var func_79(int iParam0)//Position - 0xBCC2
{
    return Global_1B3C8.f_4889[iParam0 /*6*/].f_5;
}

float func_80(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xBCD7
{
    float fVar0;
    int iVar1;
    int iVar2;
    
    fVar0 = func_84(iParam1, iParam2, 0);
    iVar1 = func_83(fVar0);
    if (bParam3)
    {
        fVar0 = 50f;
        iVar1 = 1;
    }
    if (fVar0 == 0f)
    {
        func_82(uParam0, 1, "MTPHPER", 0, 0, 0, 0, 0);
        return fVar0;
    }
    iVar2 = 0;
    switch (func_81(iVar1))
    {
        case 109:
            iVar2 = 3;
            break;
        
        case 108:
            iVar2 = 2;
            break;
        
        case 107:
            iVar2 = 1;
            break;
    }
    switch (func_81(iVar1))
    {
        case 109:
            func_82(uParam0, 1, "MTPHPER", SYSTEM::ROUND(fVar0), 0, 0, iVar2, 0);
            break;
        
        case 108:
            func_82(uParam0, 1, "MTPHPER", SYSTEM::ROUND(fVar0), 0, 0, iVar2, 0);
            break;
        
        case 107:
            func_82(uParam0, 1, "MTPHPER", SYSTEM::ROUND(fVar0), 0, 0, iVar2, 0);
            break;
    }
    return fVar0;
}

int func_81(int iParam0)//Position - 0xBDB9
{
    int iVar0;
    
    iVar0 = 107;
    switch (iParam0)
    {
        case 3:
            iVar0 = 109;
            break;
        
        case 2:
            iVar0 = 108;
            break;
        
        case 1:
            iVar0 = 107;
            break;
    }
    return iVar0;
}

void func_82(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xBDF5
{
    uParam0->f_225 = iParam1;
    StringCopy(&(uParam0->f_226), sParam2, 16);
    uParam0->f_22A = iParam3;
    uParam0->f_22B = iParam4;
    uParam0->f_22C = iParam5;
    uParam0->f_22D = iParam6;
    uParam0->f_240 = iParam7;
}

int func_83(float fParam0)//Position - 0xBE30
{
    if (fParam0 == 0f)
    {
        return 0;
    }
    if (fParam0 == 100f)
    {
        return 3;
    }
    else if (fParam0 > 50f)
    {
        return 2;
    }
    return 1;
}

float func_84(int iParam0, int iParam1, bool bParam2)//Position - 0xBE65
{
    float fVar0;
    float fVar1;
    
    if (bParam2)
    {
        return 0f;
    }
    if (iParam0 == iParam1)
    {
        return 100f;
    }
    fVar0 = (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1));
    fVar1 = ((50f * fVar0) + 50f);
    fVar1 = SYSTEM::TO_FLOAT(SYSTEM::CEIL(fVar1));
    if (fVar1 > 100f)
    {
        fVar1 = 100f;
    }
    return fVar1;
}

int func_85(var uParam0, int iParam1)//Position - 0xBEC4
{
    float fVar0;
    float fVar1;
    struct<13> Var2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    char* sVar7;
    char* sVar8;
    int iVar9;
    
    fVar0 = 0f;
    fVar1 = 0f;
    if (Global_11F5F[iParam1 /*9*/] >= 0)
    {
    }
    else
    {
        return 0;
    }
    Var2 = { Global_F100[Global_11F5F[iParam1 /*9*/] /*13*/] };
    if (Var2 == 15)
    {
        Global_11F5F[iParam1 /*9*/].f_1 = iLocal_69;
    }
    if (Var2 == 9)
    {
        Global_11F5F[iParam1 /*9*/].f_2 = fLocal_68;
    }
    if (Var2 == 14)
    {
        Global_11F5F[iParam1 /*9*/].f_1 = SYSTEM::FLOOR(Global_11F5F[iParam1 /*9*/].f_2);
    }
    if (func_73(Global_11F5F[iParam1 /*9*/], Global_11F5F[iParam1 /*9*/].f_1))
    {
        fVar0 = 1f;
    }
    if (Global_11F5F[iParam1 /*9*/].f_3 != 0)
    {
        fVar0 = 0f;
    }
    if (!Var2.f_2 == 0)
    {
        fVar1 = SYSTEM::TO_FLOAT(SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_11F5F[iParam1 /*9*/].f_1) / SYSTEM::TO_FLOAT(Var2.f_2)) * 100f)));
        if (fVar1 > 100f)
        {
            fVar1 = 100f;
        }
    }
    iVar3 = func_88(Var2.f_4);
    iVar4 = 0;
    switch (Global_11F5F[iParam1 /*9*/])
    {
        case 42:
        case 55:
        case 85:
        case 70:
        case 101:
            iVar4 = 1;
            break;
        
        case 84:
        case 100:
        case 69:
        case 41:
        case 54:
            iVar4 = 1;
            break;
    }
    if (Global_11F5F[iParam1 /*9*/].f_3 == 0 || iVar4)
    {
        if (Var2.f_3)
        {
            if ((iVar3 > Global_11F5F[iParam1 /*9*/].f_1 || iVar3 < 0) || iVar3 == -1)
            {
                func_87(Global_11F5F[iParam1 /*9*/].f_1, Global_11F5F[iParam1 /*9*/]);
            }
        }
        else if ((Global_11F5F[iParam1 /*9*/].f_1 > iVar3 || iVar3 < 0) || iVar3 == -1)
        {
            func_87(Global_11F5F[iParam1 /*9*/].f_1, Global_11F5F[iParam1 /*9*/]);
        }
    }
    iVar5 = Global_11F5F[iParam1 /*9*/].f_1;
    if (Var2.f_7)
    {
        return 1;
    }
    iVar6 = 1;
    if (fVar0 == 1f)
    {
        iLocal_61++;
        iVar6 = 2;
    }
    sVar7 = func_86(Global_11F5F[iParam1 /*9*/]);
    if (Global_11F5F[iParam1 /*9*/].f_3 != 0)
    {
        if (!func_98(0))
        {
            func_87(-1, Global_11F5F[iParam1 /*9*/]);
        }
        sVar8 = "MTPHPERRET";
        switch (Global_11F5F[iParam1 /*9*/].f_3)
        {
            case 4:
                sVar8 = "MTPHPERCHE";
                break;
            
            case 2:
                sVar8 = "MTPHPERSKI";
                break;
            
            case 3:
                sVar8 = "MTPHPERTAX";
                break;
            
            case 5:
                sVar8 = "MTPHPERNOREC";
                break;
        }
        if (iLocal_66 == Global_11F5F[iParam1 /*9*/].f_3)
        {
            sVar8 = "";
        }
        iLocal_66 = Global_11F5F[iParam1 /*9*/].f_3;
        func_93(uParam0, 6, sVar7, sVar8, Global_11F5F[iParam1 /*9*/].f_1, 0, 3, 0);
    }
    else
    {
        iLocal_66 = 0;
        switch (Var2)
        {
            case 1:
                func_93(uParam0, 8, sVar7, "", Global_11F5F[iParam1 /*9*/].f_1, 0, iVar6, 0);
                break;
            
            case 2:
                func_93(uParam0, 9, sVar7, "", Global_11F5F[iParam1 /*9*/].f_1, 0, iVar6, 0);
                break;
            
            case 3:
                func_93(uParam0, 0, sVar7, "", Global_11F5F[iParam1 /*9*/].f_1, 0, iVar6, 0);
                break;
            
            case 4:
            case 17:
                func_93(uParam0, 9, sVar7, "", Global_11F5F[iParam1 /*9*/].f_1, 0, iVar6, 0);
                break;
            
            case 5:
                func_93(uParam0, 11, sVar7, "", SYSTEM::CEIL(((SYSTEM::TO_FLOAT(Global_11F5F[iParam1 /*9*/].f_1) / SYSTEM::TO_FLOAT(Var2.f_2)) * 100f)), 0, iVar6, 0);
                break;
            
            case 6:
                func_93(uParam0, 0, sVar7, "", Global_11F5F[iParam1 /*9*/].f_1, 0, iVar6, 0);
                break;
            
            case 7:
                if (iVar5 > Var2.f_2)
                {
                    iVar5 = Var2.f_2;
                }
                func_93(uParam0, 2, sVar7, "", iVar5, Var2.f_2, iVar6, 0);
                break;
            
            case 8:
                iVar9 = Global_11F5F[iParam1 /*9*/].f_1;
                if (iVar9 > Var2.f_2)
                {
                    iVar9 = Var2.f_2;
                }
                func_93(uParam0, 2, sVar7, "", iVar9, Var2.f_2, iVar6, 0);
                break;
            
            case 9:
                func_93(uParam0, 11, sVar7, "", SYSTEM::ROUND(Global_11F5F[iParam1 /*9*/].f_2), 0, iVar6, 0);
                break;
            
            case 10:
            case 15:
            case 16:
                func_93(uParam0, 1, sVar7, "", Global_11F5F[iParam1 /*9*/].f_1, 0, iVar6, 0);
                break;
            
            case 11:
                func_93(uParam0, 11, sVar7, "", Global_11F5F[iParam1 /*9*/].f_1, 0, iVar6, 0);
                break;
            
            case 14:
                func_93(uParam0, 12, sVar7, "", Global_11F5F[iParam1 /*9*/].f_1, 0, iVar6, 0);
                break;
            
            case 12:
            case 13:
                func_93(uParam0, 3, sVar7, "", Global_11F5F[iParam1 /*9*/].f_1, 0, iVar6, 0);
                break;
            
            default:
                break;
            }
    }
    return 0;
}

char* func_86(int iParam0)//Position - 0xC401
{
    switch (iParam0)
    {
        case 0:
            return "MISHSTA_0";
        
        case 9:
            return "MISHSTA_1";
        
        case 10:
            return "MISHSTA_2";
        
        case 21:
            return "MISHSTA_1";
        
        case 22:
            return "MISHSTA_3";
        
        case 338:
            return "MISHSTA_0";
        
        case 339:
            return "MISHSTA_4";
        
        case 196:
            return "MISHSTA_5";
        
        case 197:
            return "MISHSTA_0";
        
        case 205:
            return "MISHSTA_6";
        
        case 206:
            return "MISHSTA_7";
        
        case 207:
            return "MISHSTA_8";
        
        case 218:
            return "MISHSTA_1";
        
        case 217:
            return "MISHSTA_0";
        
        case 384:
            return "MISHSTA_1";
        
        case 385:
            return "MISHSTA_9";
        
        case 372:
            return "MISHSTA_10";
        
        case 373:
            return "MISHSTA_11";
        
        case 375:
            return "MISHSTA_1";
        
        case 374:
            return "MISHSTA_12";
        
        case 486:
            return "MISHSTA_13";
        
        case 487:
            return "MISHSTA_11";
        
        case 488:
            return "MISHSTA_1";
        
        case 489:
            return "MISHSTA_14";
        
        case 490:
            return "MISHSTA_15";
        
        case 499:
            return "MISHSTA_11";
        
        case 500:
            return "MISHSTA_1";
        
        case 501:
            return "MISHSTA_16";
        
        case 502:
            return "MISHSTA_17";
        
        case 515:
            return "MISHSTA_11";
        
        default:
    }
    switch (iParam0)
    {
        case 516:
            return "MISHSTA_18";
        
        case 517:
            return "MISHSTA_12";
        
        case 518:
            return "MISHSTA_19";
        
        case 137:
            return "MISHSTA_12";
        
        case 136:
            return "MISHSTA_20";
        
        case 148:
            return "MISHSTA_11";
        
        case 149:
            return "MISHSTA_12";
        
        case 150:
            return "MISHSTA_21";
        
        case 229:
            return "MISHSTA_6";
        
        case 230:
            return "MISHSTA_22";
        
        case 273:
            return "MISHSTA_10";
        
        case 274:
            return "MISHSTA_11";
        
        case 275:
            return "MISHSTA_1";
        
        case 276:
            return "MISHSTA_23";
        
        case 277:
            return "MISHSTA_12";
        
        case 283:
            return "MISHSTA_1";
        
        case 284:
            return "MISHSTA_10";
        
        case 285:
            return "MISHSTA_11";
        
        case 346:
            return "MISHSTA_1";
        
        case 239:
            return "MISHSTA_1";
        
        case 240:
            return "MISHSTA_24";
        
        case 241:
            return "MISHSTA_25";
        
        case 242:
            return "MISHSTA_26";
        
        case 294:
            return "MISHSTA_27";
        
        case 295:
            return "MISHSTA_28";
        
        case 296:
            return "MISHSTA_29";
        
        case 297:
            return "MISHSTA_30";
        
        case 298:
            return "MISHSTA_31";
        
        case 308:
            return "MISHSTA_32";
        
        case 102:
            return "MISHSTA_0";
        
        case 115:
            return "MISHSTA_33";
        
        default:
    }
    switch (iParam0)
    {
        case 114:
            return "MISHSTA_1";
        
        case 111:
            return "MISHSTA_34";
        
        case 112:
            return "MISHSTA_35";
        
        case 113:
            return "MISHSTA_36";
        
        case 396:
            return "MISHSTA_1";
        
        case 393:
            return "MISHSTA_37";
        
        case 394:
            return "MISHSTA_38";
        
        case 395:
            return "MISHSTA_39";
        
        case 120:
            return "MISHSTA_0";
        
        case 121:
            return "MISHSTA_6";
        
        case 122:
            return "MISHSTA_40";
        
        case 123:
            return "MISHSTA_41";
        
        case 124:
            return "MISHSTA_42";
        
        case 161:
            return "MISHSTA_43";
        
        case 172:
            return "MISHSTA_43";
        
        case 173:
            return "MISHSTA_1";
        
        case 174:
            return "MISHSTA_11";
        
        case 175:
            return "MISHSTA_44";
        
        case 185:
            return "MISHSTA_1";
        
        case 186:
            return "MISHSTA_6";
        
        case 187:
            return "MISHSTA_45";
        
        case 326:
            return "MISHSTA_46";
        
        case 129:
            return "MISHSTA_1";
        
        case 130:
            return "MISHSTA_0";
        
        case 466:
            return "MISHSTA_1";
        
        case 400:
            return "MISHSTA_1";
        
        case 401:
            return "MISHSTA_47";
        
        case 413:
            return "MISHSTA_48";
        
        case 414:
            return "MISHSTA_10";
        
        case 415:
            return "MISHSTA_11";
        
        case 416:
            return "MISHSTA_49";
        
        default:
    }
    switch (iParam0)
    {
        case 417:
            return "MISHSTA_50";
        
        case 249:
            return "MISHSTA_1";
        
        case 474:
            return "MISHSTA_1";
        
        case 257:
            return "MISHSTA_1";
        
        case 527:
            return "MISHSTA_51";
        
        case 528:
            return "MISHSTA_52";
        
        case 529:
            return "MISHSTA_53";
        
        case 534:
            return "MISHSTA_54";
        
        case 709:
            return "MISHSTA_55";
        
        case 576:
            return "MISHSTA_1";
        
        case 577:
            return "MISHSTA_56";
        
        case 578:
            return "MISHSTA_57";
        
        case 579:
            return "MISHSTA_58";
        
        case 742:
            return "MISHSTA_59";
        
        case 741:
            return "MISHSTA_60";
        
        case 743:
            return "MISHSTA_61";
        
        case 745:
            return "MISHSTA_62";
        
        case 748:
            return "MISHSTA_62";
        
        case 747:
            return "MISHSTA_63";
        
        case 749:
            return "MISHSTA_64";
        
        case 750:
            return "MISHSTA_65";
        
        case 751:
            return "MISHSTA_66";
        
        case 754:
            return "MISHSTA_67";
        
        case 753:
            return "MISHSTA_68";
        
        case 757:
            return "MISHSTA_69";
        
        case 756:
            return "MISHSTA_70";
        
        case 755:
            return "MISHSTA_71";
        
        case 759:
            return "MISHSTA_72";
        
        case 758:
            return "MISHSTA_73";
        
        case 761:
            return "MISHSTA_74";
        
        case 760:
            return "MISHSTA_75";
        
        default:
    }
    switch (iParam0)
    {
        case 762:
            return "MISHSTA_76";
        
        case 763:
            return "MISHSTA_77";
        
        case 766:
            return "MISHSTA_78";
        
        case 769:
            return "MISHSTA_79";
        
        case 768:
            return "MISHSTA_80";
        
        case 767:
            return "MISHSTA_81";
        
        case 771:
            return "MISHSTA_82";
        
        case 770:
            return "MISHSTA_83";
        
        case 773:
            return "MISHSTA_84";
        
        case 772:
            return "MISHSTA_85";
        
        case 775:
            return "MISHSTA_86";
        
        case 774:
            return "MISHSTA_87";
        
        case 777:
            return "MISHSTA_88";
        
        case 776:
            return "MISHSTA_89";
        
        case 779:
            return "MISHSTA_90";
        
        case 778:
            return "MISHSTA_91";
        
        case 782:
            return "MISHSTA_92";
        
        case 780:
            return "MISHSTA_93";
        
        case 781:
            return "MISHSTA_94";
        
        case 784:
            return "MISHSTA_95";
        
        case 783:
            return "MISHSTA_96";
        
        case 786:
            return "MISHSTA_97";
        
        case 785:
            return "MISHSTA_98";
        
        case 788:
            return "MISHSTA_99";
        
        case 787:
            return "MISHSTA_100";
        
        case 789:
            return "MISHSTA_101";
        
        case 792:
            return "MISHSTA_102";
        
        case 791:
            return "MISHSTA_103";
        
        case 790:
            return "MISHSTA_104";
        
        case 793:
            return "MISHSTA_105";
        
        case 794:
            return "MISHSTA_106";
        
        default:
    }
    switch (iParam0)
    {
        case 795:
            return "MISHSTA_0";
        
        case 796:
            return "MISHSTA_107";
        
        case 797:
            return "MISHSTA_108";
        
        case 798:
            return "MISHSTA_109";
        
        case 799:
            return "MISHSTA_110";
        
        case 800:
            return "MISHSTA_111";
        
        case 801:
            return "MISHSTA_112";
        
        case 802:
            return "MISHSTA_113";
        
        case 803:
            return "MISHSTA_114";
        
        case 804:
            return "MISHSTA_115";
        
        case 805:
            return "MISHSTA_116";
        
        case 806:
            return "MISHSTA_117";
        
        case 807:
            return "MISHSTA_118";
        
        case 808:
            return "MISHSTA_119";
        
        case 809:
            return "MISHSTA_120";
        
        case 429:
            return "MISHSTA_1";
        
        case 441:
            return "MISHSTA_1";
        
        case 4:
            return "MISHSTA_121";
        
        case 13:
            return "MISHSTA_11";
        
        case 341:
            return "MISHSTA_122";
        
        case 5:
            return "MISHSTA_123";
        
        case 6:
            return "MISHSTA_124";
        
        case 20:
            return "MISHSTA_10";
        
        case 169:
            return "MISHSTA_125";
        
        case 731:
            return "MISHSTA_126";
        
        case 737:
            return "MISHSTA_10";
        
        case 145:
            return "MISHSTA_127";
        
        case 159:
            return "MISHSTA_10";
        
        case 353:
            return "MISHSTA_10";
        
        case 357:
            return "MISHSTA_11";
        
        case 605:
            return "MISHSTA_11";
        
        default:
    }
    switch (iParam0)
    {
        case 606:
            return "MISHSTA_10";
        
        case 613:
            return "MISHSTA_128";
        
        case 616:
            return "MISHSTA_129";
        
        case 628:
            return "MISHSTA_130";
        
        case 309:
            return "MISHSTA_11";
        
        case 310:
            return "MISHSTA_10";
        
        case 313:
            return "MISHSTA_131";
        
        case 477:
            return "MISHSTA_37";
        
        case 482:
            return "MISHSTA_132";
        
        case 484:
            return "MISHSTA_133";
        
        case 715:
            return "MISHSTA_123";
        
        case 570:
            return "MISHSTA_10";
        
        case 566:
            return "MISHSTA_11";
        
        case 565:
            return "MISHSTA_134";
        
        case 572:
            return "MISHSTA_135";
        
        case 574:
            return "MISHSTA_136";
        
        case 431:
            return "MISHSTA_11";
        
        case 443:
            return "MISHSTA_137";
        
        case 446:
            return "MISHSTA_138";
        
        case 452:
            return "MISHSTA_139";
        
        case 364:
            return "MISHSTA_11";
        
        case 365:
            return "MISHSTA_10";
        
        case 369:
            return "MISHSTA_140";
        
        case 668:
            return "MISHSTA_11";
        
        case 670:
            return "MISHSTA_141";
        
        case 678:
            return "MISHSTA_11";
        
        case 265:
            return "MISHSTA_11";
        
        case 266:
            return "MISHSTA_10";
        
        case 270:
            return "MISHSTA_142";
        
        case 271:
            return "MISHSTA_143";
        
        case 272:
            return "MISHSTA_144";
        
        default:
    }
    switch (iParam0)
    {
        case 765:
            return "MISHSTA_145";
        
        case 764:
            return "MISHSTA_146";
        
        case 330:
            return "MISHSTA_11";
        
        case 331:
            return "MISHSTA_10";
        
        case 643:
            return "MISHSTA_147";
        
        case 644:
            return "MISHSTA_148";
        
        case 645:
            return "MISHSTA_149";
        
        case 646:
            return "MISHSTA_150";
        
        case 404:
            return "MISHSTA_10";
        
        case 721:
            return "MISHSTA_151";
        
        case 752:
            return "MISHSTA_152";
        
        case 147:
            return "MISHSTA_1";
        
        case 336:
            return "MISHSTA_1";
        
        case 371:
            return "MISHSTA_1";
        
        case 557:
            return "MISHSTA_1";
        
        case 575:
            return "MISHSTA_1";
        
        case 629:
            return "MISHSTA_1";
        
        case 647:
            return "MISHSTA_1";
        
        case 685:
            return "MISHSTA_1";
        
        case 693:
            return "MISHSTA_1";
        
        case 738:
            return "MISHSTA_1";
        
        case 650:
            return "MISHSTA_0";
        
        case 649:
            return "MISHSTA_153";
        
        case 825:
            return "MISHSTA_154";
        
        case 824:
            return "MISHSTA_155";
        
        case 821:
            return "MISHSTA_156";
        
        case 820:
            return "MISHSTA_157";
        
        case 319:
            return "MISHSTA_158";
        
        case 318:
            return "MISHSTA_159";
        
        case 317:
            return "MISHSTA_1";
        
        case 322:
            return "MISHSTA_1";
        
        default:
    }
    switch (iParam0)
    {
        case 323:
            return "MISHSTA_0";
        
        case 324:
            return "MISHSTA_160";
        
        case 816:
            return "MISHSTA_161";
        
        case 815:
            return "MISHSTA_162";
        
        case 814:
            return "MISHSTA_163";
        
        case 746:
            return "MISHSTA_164";
        
        case 514:
            return "MISHSTA_165";
        
        case 744:
            return "MISHSTA_166";
        
        case 841:
            return "MISHSTA_167";
        
        case 840:
            return "MISHSTA_1";
        
        case 838:
            return "MISHSTA_167";
        
        case 828:
            return "MISHSTA_1";
        
        case 829:
            return "MISHSTA_167";
        
        case 831:
            return "MISHSTA_1";
        
        case 832:
            return "MISHSTA_167";
        
        case 834:
            return "MISHSTA_1";
        
        case 835:
            return "MISHSTA_167";
        
        case 837:
            return "MISHSTA_1";
        
        case 739:
            return "MISHSTA_168";
        
        case 619:
            return "MISHSTA_169";
        
        case 560:
            return "MISHSTA_170";
        
        case 559:
            return "MISHSTA_171";
        
        case 558:
            return "MISHSTA_172";
        
        case 673:
            return "MISHSTA_10";
        
        case 688:
            return "MISHSTA_10";
        
        case 687:
            return "MISHSTA_173";
        
        case 844:
            return "MISHSTA_174";
        
        case 845:
            return "MISHSTA_175";
        
        case 843:
            return "MISHSTA_176";
        
        case 236:
            return "MISHSTA_177";
        
        case 29:
            return "MISHSTA_178";
        
        default:
    }
    switch (iParam0)
    {
        case 109:
            return "MISHSTA_179";
        
        case 108:
            return "MISHSTA_180";
        
        case 135:
            return "MISHSTA_181";
        
        case 227:
            return "MISHSTA_182";
        
        case 852:
            return "MISHSTA_183";
        
        case 846:
            return "MISHSTA_184";
        
        case 440:
            return "MISHSTA_185";
        
        case 864:
            return "MISHSTA_186";
        
        case 863:
            return "MISHSTA_187";
        
        case 861:
            return "MISHSTA_1";
        
        case 862:
            return "MISHSTA_188";
        
        case 870:
            return "MISHSTA_1";
        
        case 544:
            return "MISHSTA_0";
        
        case 543:
            return "MISHSTA_189";
        
        case 593:
            return "MISHSTA_190";
        
        case 592:
            return "MISHSTA_1";
        
        case 603:
            return "MISHSTA_1";
        
        case 899:
            return "MISHSTA_1";
        
        case 900:
            return "MISHSTA_191";
        
        case 883:
            return "MISHSTA_192";
        
        case 891:
            return "MISHSTA_192";
        
        case 657:
            return "MISHSTA_193";
        
        case 875:
            return "MISHSTA_192";
        
        case 906:
            return "MISHSTA_194";
        
        case 706:
            return "MISHSTA_195";
        
        case 699:
            return "MISHSTA_196";
        
        case 726:
            return "MISHSTA_197";
        
        case 237:
            return "MISHSTA_198";
        
        case 658:
            return "MISHSTA_1";
        
        case 877:
            return "MISHSTA_0";
        
        case 885:
            return "MISHSTA_0";
        
        default:
    }
    switch (iParam0)
    {
        case 893:
            return "MISHSTA_0";
        
        case 694:
            return "MISHSTA_110";
        
        case 881:
            return "MISHSTA_199";
        
        case 889:
            return "MISHSTA_199";
        
        case 897:
            return "MISHSTA_199";
        
        case 633:
            return "MISHSTA_200";
        
        case 632:
            return "MISHSTA_201";
        
        case 38:
            return "MISHSTA_202";
        
        case 41:
            return "MISHSTA_203";
        
        case 39:
            return "MISHSTA_204";
        
        case 40:
            return "MISHSTA_205";
        
        case 42:
            return "MISHSTA_206";
        
        case 56:
            return "MISHSTA_205";
        
        case 52:
            return "MISHSTA_202";
        
        case 53:
            return "MISHSTA_207";
        
        case 54:
            return "MISHSTA_203";
        
        case 55:
            return "MISHSTA_206";
        
        case 70:
            return "MISHSTA_206";
        
        case 69:
            return "MISHSTA_203";
        
        case 67:
            return "MISHSTA_132";
        
        case 68:
            return "MISHSTA_205";
        
        case 66:
            return "MISHSTA_202";
        
        case 81:
            return "MISHSTA_202";
        
        case 82:
            return "MISHSTA_208";
        
        case 84:
            return "MISHSTA_203";
        
        case 83:
            return "MISHSTA_205";
        
        case 85:
            return "MISHSTA_206";
        
        case 97:
            return "MISHSTA_202";
        
        case 98:
            return "MISHSTA_209";
        
        case 100:
            return "MISHSTA_203";
        
        case 99:
            return "MISHSTA_205";
        
        default:
    }
    switch (iParam0)
    {
        case 101:
            return "MISHSTA_206";
        
        default:
    }
    return "MISSING_MISSION_STAT_STRING";
}

void func_87(int iParam0, int iParam1)//Position - 0xD5B2
{
    int iVar0;
    int iVar1;
    
    iVar0 = Global_F100[iParam1 /*13*/].f_4;
    if (iVar0 == 0)
    {
        return;
    }
    Global_F100[iParam1 /*13*/].f_1 = iParam0;
    iVar1 = iParam0 + 1;
    unk_0x41410A69AD49AFCD(iVar0, iVar1, 1);
    if (func_98(0) && Global_F017)
    {
        unk_0x57D7CB389C4B4D2A(iVar0);
        unk_0x57D7CB389C4B4D2A(iParam0);
        unk_0x57D7CB389C4B4D2A(iParam1);
    }
}

int func_88(int iParam0)//Position - 0xD60B
{
    int iVar0;
    
    if (iParam0 == 0)
    {
        return -1;
    }
    if (unk_0x367DA79FE620711B(iParam0, &iVar0, -1))
    {
        return (iVar0 - 1);
    }
    return -1;
}

bool func_89(int iParam0)//Position - 0xD634
{
    return unk_0xA2BC31158C8CEFD2(Global_1B3C8.f_1.f_76, iParam0);
}

int func_90(int iParam0)//Position - 0xD64A
{
    if (iParam0 == 13 || iParam0 == -1)
    {
        return 0;
    }
    return Global_1B3C8.f_2378.f_63.f_CD[iParam0];
}

int func_91(int iParam0)//Position - 0xD677
{
    int iVar0;
    
    switch (iParam0)
    {
        case 0:
            iVar0 = 7;
            break;
        
        case 1:
            iVar0 = 8;
            break;
        
        case 2:
            iVar0 = 9;
            break;
        
        case 3:
            iVar0 = 10;
            break;
        
        case 4:
            iVar0 = 11;
            break;
    }
    return iVar0;
}

char* func_92(int iParam0)//Position - 0xD6C8
{
    switch (iParam0)
    {
        case 1:
            return "JCSLMVANR";
        
        case 2:
            return "JCHMDRAZ";
        
        case 3:
            return "HSTAGNCUT";
        
        case 4:
            return "UNSELLWEAP";
        
        case 0:
            return "HSTECUT";
        
        case 5:
            return "HSTSLWLD";
        
        case 6:
            return "HSTCASECUT";
        
        default:
    }
    return "UNSET_HEISTPENALTY";
}

void func_93(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xD736
{
    int iVar0;
    
    if (uParam0->f_38 == 13)
    {
        return;
    }
    iVar0 = uParam0->f_38;
    uParam0->f_39[iVar0] = iParam1;
    StringCopy(&(uParam0->f_47[iVar0 /*16*/]), sParam2, 64);
    StringCopy(&(uParam0->f_118[iVar0 /*16*/]), sParam3, 64);
    uParam0->f_1E9[iVar0] = iParam4;
    uParam0->f_1F7[iVar0] = iParam5;
    uParam0->f_205[iVar0] = iParam6;
    uParam0->f_213[iVar0] = iParam7;
    uParam0->f_38++;
}

void func_94(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0xD7A9
{
    StringCopy(&(uParam0->f_5), sParam1, 16);
    StringCopy(&(uParam0->f_D), sParam2, 64);
    uParam0->f_1D = iParam3;
    uParam0->f_B = 0;
}

void func_95(int iParam0)//Position - 0xD7CC
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    
    if (Global_172C7.f_3)
    {
        return;
    }
    switch (iParam0)
    {
        case 4:
            Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_1 = 201600000;
            Global_1B3C8.f_1.f_7E[iParam0 /*23*/] = 201600000;
            break;
        
        case 3:
            Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_1 = 331985;
            Global_1B3C8.f_1.f_7E[iParam0 /*23*/] = 331985;
            break;
        
        case 1:
            Global_1B3C8.f_1.f_7E[iParam0 /*23*/] = 20000000;
            Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_1 = 20000000;
            break;
    }
    iVar0 = func_90(func_72(iParam0));
    iVar1 = Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_1;
    switch (iParam0)
    {
        case 0:
            func_97(iParam0, 2, 2500000);
            break;
        
        case 1:
            func_97(iParam0, 4, 20000000);
            break;
    }
    iVar2 = 0;
    iVar2 = 0;
    while (iVar2 < 5)
    {
        Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_11[iVar2] = 0;
        iVar2++;
    }
    iVar2 = 0;
    iVar3 = 0;
    iVar2 = 0;
    while (iVar2 < Global_172D1[iParam0 /*38*/].f_25)
    {
        if (Global_172D1[iParam0 /*38*/].f_1F[iVar2] > 0)
        {
            iVar3 = (iVar3 + Global_172D1[iParam0 /*38*/].f_1F[iVar2]);
            Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_1 = (Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_1 - Global_172D1[iParam0 /*38*/].f_1F[iVar2]);
        }
        iVar2++;
    }
    iVar1 = (iVar1 - iVar3);
    if (iParam0 == 2)
    {
        iVar4 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_1) * 0.78f));
        func_97(iParam0, 3, iVar4);
        Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_1 = (Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_1 - iVar4);
        iVar1 = (iVar1 - iVar4);
    }
    iVar2 = 0;
    while (iVar2 < 5)
    {
        iVar5 = Global_1B3C8.f_1.f_C[iVar0 /*6*/][iVar2];
        switch (Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_B[iVar2])
        {
            case 1:
            case 2:
            case 0:
                Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_11[iVar2] = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(Global_1716E[iVar5 /*5*/].f_1) * 0.01f) * IntToFloat(Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_1)));
                break;
            
            case 3:
                Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_11[iVar2] = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(Global_1716E[iVar5 /*5*/].f_1) * 0.015f) * IntToFloat(Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_1)));
                break;
        }
        iVar2++;
    }
    iVar2 = 0;
    iVar2 = 0;
    while (iVar2 < Global_17208[iVar0 /*19*/])
    {
        iVar1 = (iVar1 - Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_11[iVar2]);
        iVar2++;
    }
    Global_1B3C8.f_1.f_7E[0 /*23*/].f_2[0] = 0;
    Global_1B3C8.f_1.f_7E[0 /*23*/].f_2[1] = 0;
    Global_1B3C8.f_1.f_7E[0 /*23*/].f_2[2] = 0;
    Global_172C7.f_7 = 0;
    switch (iParam0)
    {
        case 0:
            Global_1B3C8.f_1.f_7E[0 /*23*/].f_6[0] = 0f;
            Global_1B3C8.f_1.f_7E[0 /*23*/].f_6[1] = 0f;
            Global_1B3C8.f_1.f_7E[0 /*23*/].f_6[2] = -1f;
            Global_1B3C8.f_1.f_7E[0 /*23*/].f_2[1] = SYSTEM::CEIL((0.12f * IntToFloat(Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_1)));
            iVar1 = (iVar1 - Global_1B3C8.f_1.f_7E[0 /*23*/].f_2[1]);
            Global_172C7.f_7 = SYSTEM::CEIL((0.14f * IntToFloat(Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_1)));
            iVar1 = (iVar1 - Global_172C7.f_7);
            Global_172C7.f_6 = 14f;
            Global_1B3C8.f_1.f_7E[0 /*23*/].f_2[0] = iVar1;
            break;
        
        case 1:
            Global_1B3C8.f_1.f_7E[1 /*23*/].f_6[0] = 0f;
            Global_1B3C8.f_1.f_7E[1 /*23*/].f_6[1] = 0f;
            Global_1B3C8.f_1.f_7E[1 /*23*/].f_6[2] = 0f;
            Global_1B3C8.f_1.f_7E[1 /*23*/].f_2[0] = 0;
            Global_1B3C8.f_1.f_7E[1 /*23*/].f_2[1] = 0;
            Global_1B3C8.f_1.f_7E[1 /*23*/].f_2[2] = 0;
            Global_172C7.f_6 = -1f;
            break;
        
        case 2:
            Global_1B3C8.f_1.f_7E[2 /*23*/].f_6[0] = 0f;
            Global_1B3C8.f_1.f_7E[2 /*23*/].f_6[1] = 0f;
            Global_1B3C8.f_1.f_7E[2 /*23*/].f_6[2] = 0f;
            Global_172C7.f_7 = SYSTEM::CEIL((0.12f * IntToFloat(Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_1)));
            iVar1 = (iVar1 - Global_172C7.f_7);
            Global_172C7.f_6 = 12f;
            Global_1B3C8.f_1.f_7E[2 /*23*/].f_2[0] = (iVar1 / 3);
            Global_1B3C8.f_1.f_7E[2 /*23*/].f_2[1] = (iVar1 / 3);
            Global_1B3C8.f_1.f_7E[2 /*23*/].f_2[2] = (iVar1 / 3);
            Global_172C7.f_6 = 0f;
            break;
        
        case 3:
            Global_1B3C8.f_1.f_7E[3 /*23*/].f_6[0] = -1f;
            Global_1B3C8.f_1.f_7E[3 /*23*/].f_6[1] = 0f;
            Global_1B3C8.f_1.f_7E[3 /*23*/].f_6[2] = 0f;
            Global_172C7.f_7 = SYSTEM::CEIL((0.12f * IntToFloat(Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_1)));
            iVar1 = (iVar1 - Global_172C7.f_7);
            Global_172C7.f_6 = 12f;
            Global_1B3C8.f_1.f_7E[3 /*23*/].f_2[1] = iVar1;
            break;
        
        case 4:
            Global_1B3C8.f_1.f_7E[4 /*23*/].f_6[0] = 0f;
            Global_1B3C8.f_1.f_7E[4 /*23*/].f_6[1] = 0f;
            Global_1B3C8.f_1.f_7E[4 /*23*/].f_6[2] = 0f;
            Global_172C7.f_7 = SYSTEM::CEIL((0.12f * IntToFloat(Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_1)));
            iVar1 = (iVar1 - Global_172C7.f_7);
            Global_172C7.f_6 = 12f;
            Global_1B3C8.f_1.f_7E[4 /*23*/].f_2[0] = (iVar1 / 3);
            Global_1B3C8.f_1.f_7E[4 /*23*/].f_2[1] = (iVar1 / 3);
            Global_1B3C8.f_1.f_7E[4 /*23*/].f_2[2] = (iVar1 / 3);
            Global_172C7.f_6 = 0f;
            break;
    }
    iVar6 = Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_1;
    if (Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_6[0] != -1f)
    {
        Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_6[0] = ((SYSTEM::TO_FLOAT(Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_2[0]) / SYSTEM::TO_FLOAT(iVar6)) * 100f);
    }
    if (Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_6[1] != -1f)
    {
        Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_6[1] = ((SYSTEM::TO_FLOAT(Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_2[1]) / SYSTEM::TO_FLOAT(iVar6)) * 100f);
    }
    if (Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_6[2] != -1f)
    {
        Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_6[2] = ((SYSTEM::TO_FLOAT(Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_2[2]) / SYSTEM::TO_FLOAT(iVar6)) * 100f);
    }
    if (Global_172C7.f_6 != -1f)
    {
        Global_172C7.f_6 = ((SYSTEM::TO_FLOAT(Global_172C7.f_7) / SYSTEM::TO_FLOAT(iVar6)) * 100f);
    }
    switch (iParam0)
    {
        case 0:
            unk_0x41410A69AD49AFCD(joaat("jewel_heist_raw_take"), Global_1B3C8.f_1.f_7E[iParam0 /*23*/], 1);
            break;
    }
    iVar7 = 0;
    iVar8 = 0;
    iVar8 = 0;
    while (iVar8 < 3)
    {
        iVar7 = (iVar7 + Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_2[iVar8]);
        iVar8++;
    }
    switch (iParam0)
    {
        case 0:
            func_96(810, Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_1, 1);
            func_96(811, iVar7, 1);
            break;
        
        case 1:
            switch (func_90(8))
            {
                case 3:
                    func_96(610, Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_1, 1);
                    func_96(611, iVar7, 1);
                    break;
                
                case 4:
                    func_96(622, Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_1, 1);
                    func_96(623, iVar7, 1);
                    break;
            }
            break;
        
        case 2:
            func_96(734, Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_1, 1);
            func_96(735, iVar7, 1);
            break;
        
        case 3:
            switch (func_90(10))
            {
                case 6:
                    break;
                
                case 7:
                    break;
            }
            break;
        
        case 4:
            switch (func_90(11))
            {
                case 8:
                    func_96(664, Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_1, 1);
                    func_96(671, iVar7, 1);
                    break;
                
                case 9:
                    func_96(674, Global_1B3C8.f_1.f_7E[iParam0 /*23*/].f_1, 1);
                    func_96(682, iVar7, 1);
                    break;
            }
            break;
    }
    Global_172C7.f_3 = 1;
    Global_F01F = 0;
}

void func_96(int iParam0, int iParam1, bool bParam2)//Position - 0xE0CD
{
    int iVar0;
    
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < Global_11F5E)
    {
        if (Global_11F5F[iVar0 /*9*/] == iParam0)
        {
            if (bParam2)
            {
                Global_11F5F[iVar0 /*9*/].f_1 = iParam1;
            }
            else
            {
                Global_11F5F[iVar0 /*9*/].f_1 = (Global_11F5F[iVar0 /*9*/].f_1 + iParam1);
            }
            return;
        }
        iVar0++;
    }
    if (Global_11F5F[iVar0 /*9*/] != -1)
    {
        if (Global_F100[Global_11F5F[iVar0 /*9*/] /*13*/] == 3)
        {
            if (Global_11F5F[iVar0 /*9*/].f_1 > 1)
            {
                Global_11F5F[iVar0 /*9*/].f_1 = 1;
            }
            if (Global_11F5F[iVar0 /*9*/].f_1 < 0)
            {
                Global_11F5F[iVar0 /*9*/].f_1 = 0;
            }
        }
    }
}

void func_97(int iParam0, int iParam1, int iParam2)//Position - 0xE177
{
    int iVar0;
    bool bVar1;
    int iVar2;
    int iVar3;
    
    if (iParam2 == 0)
    {
        return;
    }
    iVar0 = iParam2;
    if (iVar0 < 0)
    {
        iVar0 = (iVar0 * -1);
    }
    bVar1 = false;
    if (Global_172D1[iParam0 /*38*/].f_25 == 5)
    {
        bVar1 = true;
    }
    iVar2 = Global_172D1[iParam0 /*38*/].f_25;
    iVar3 = 0;
    iVar3 = 0;
    while (iVar3 < iVar2)
    {
        if (Global_172D1[iParam0 /*38*/].f_19[iVar3] == iParam1)
        {
            Global_172D1[iParam0 /*38*/].f_19[iVar3] = iParam1;
            Global_172D1[iParam0 /*38*/].f_1F[iVar3] = iVar0;
            return;
        }
        iVar3++;
    }
    if (bVar1)
    {
        return;
    }
    switch (iParam1)
    {
        case 0:
            switch (iParam0)
            {
                case 0:
                    unk_0x41410A69AD49AFCD(joaat("hcs_penalty_jewel_drop_money"), iParam2, 1);
                    break;
                
                case 2:
                    unk_0x41410A69AD49AFCD(joaat("hcs_penalty_paleto_drop_money"), iParam2, 1);
                    break;
                
                case 4:
                    unk_0x41410A69AD49AFCD(joaat("hcs_penalty_bigs_drop_money"), iParam2, 1);
                    break;
            }
            break;
        
        case 1:
            unk_0x41410A69AD49AFCD(joaat("hcs_penalty_jewel_drop_money"), iParam2, 1);
            break;
        
        case 2:
            unk_0x41410A69AD49AFCD(joaat("hcs_penalty_jewel_madr_house"), iParam2, 1);
            break;
        
        case 4:
            unk_0x41410A69AD49AFCD(joaat("hcs_penalty_docks_unsell_wpn"), iParam2, 1);
            break;
        
        case 3:
            unk_0x41410A69AD49AFCD(joaat("hcs_penalty_paleto_agent_cut"), iParam2, 1);
            break;
        
        case 5:
            unk_0x41410A69AD49AFCD(joaat("hcs_penalty_bigs_slow_loading"), iParam2, 1);
            break;
        
        case 6:
            unk_0x41410A69AD49AFCD(joaat("hcs_penalty_bigs_hostage_gift"), iParam2, 1);
            break;
    }
    Global_172D1[iParam0 /*38*/].f_19[Global_172D1[iParam0 /*38*/].f_25] = iParam1;
    Global_172D1[iParam0 /*38*/].f_1F[Global_172D1[iParam0 /*38*/].f_25] = iVar0;
    Global_172D1[iParam0 /*38*/].f_25++;
}

bool func_98(bool bParam0)//Position - 0xE32F
{
    if (!bParam0 && unk_0x222F76006659B0EB(joaat("benchmark")) > 0)
    {
        return 1;
    }
    return unk_0xA2BC31158C8CEFD2(Global_12C19, 0);
}

void func_99()//Position - 0xE35A
{
    int iVar0;
    int iVar1;
    
    if (Global_11F5E > 16)
    {
        return;
    }
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < Global_11F5E)
    {
        if (Global_11F5F[iVar0 /*9*/].f_1 == 0)
        {
            if (Global_11F5F[iVar0 /*9*/].f_2 != 0f)
            {
                Global_11F5F[iVar0 /*9*/].f_1 = SYSTEM::FLOOR(Global_11F5F[iVar0 /*9*/].f_2);
            }
        }
        iVar1 = Global_11F5F[iVar0 /*9*/];
        if (iVar1 > 0)
        {
            if (Global_F100[iVar1 /*13*/] == 9)
            {
                Global_11F5F[iVar0 /*9*/].f_1 = SYSTEM::ROUND(fLocal_68);
            }
            if (Global_F100[iVar1 /*13*/] == 15)
            {
                Global_11F5F[iVar0 /*9*/].f_1 = iLocal_69;
            }
        }
        iVar0++;
    }
}

void func_100()//Position - 0xE401
{
    int iVar0;
    int iVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    
    if (Global_F032)
    {
        return;
    }
    Global_F032 = 1;
    iVar0 = 0;
    iVar1 = 0;
    iVar0 = (func_7(joaat("sp0_shots")) - Global_F036);
    iVar1 = (func_7(joaat("sp0_hits")) - Global_F035);
    iVar0 = (iVar0 + (func_7(joaat("sp1_shots")) - Global_F038));
    iVar1 = (iVar1 + (func_7(joaat("sp1_hits")) - Global_F037));
    iVar0 = (iVar0 + (func_7(joaat("sp2_shots")) - Global_F03A));
    iVar1 = (iVar1 + (func_7(joaat("sp2_hits")) - Global_F039));
    SYSTEM::WAIT(0);
    fVar2 = 100f;
    if (!iVar0 == 0)
    {
        fVar3 = SYSTEM::TO_FLOAT(iVar0);
        fVar4 = SYSTEM::TO_FLOAT(iVar1);
        fVar2 = SYSTEM::TO_FLOAT(SYSTEM::FLOOR(((fVar4 / fVar3) * 100f)));
        if (fVar2 > 100f)
        {
            fVar2 = 100f;
        }
    }
    fLocal_68 = fVar2;
    iLocal_69 = iVar0;
}

void func_101(var uParam0)//Position - 0xE4D7
{
    func_67(uParam0);
    uParam0->f_23A = 0;
    uParam0->f_1F = 0;
    uParam0->f_38 = 0;
    uParam0->f_237 = 0;
    uParam0->f_239 = 0;
}

int func_102()//Position - 0xE501
{
    if (!unk_0x393E9918BC37548A())
    {
        return Global_177B1.f_2C == 1;
    }
    return 0;
}

void func_103()//Position - 0xE51D
{
    int iVar0;
    
    if (Global_7906 == 0 && !Global_790A)
    {
        return;
    }
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < Global_11F5E)
    {
        Global_11F5F[iVar0 /*9*/].f_3 = 4;
        iVar0++;
    }
}

void func_104()//Position - 0xE55C
{
    bool bVar0;
    bool bVar1;
    int iVar2;
    float fVar3;
    int iVar4;
    
    func_105();
    if (((Global_F025 && unk_0xD699DB8EAB756F25(unk_0x7A8732CFB5113E77())) && !unk_0x9C472738425216B8()) && !unk_0xCD97B9861557C025())
    {
        Global_F025 = 0;
    }
    if (Global_F01E)
    {
        Global_F01E = 0;
        iLocal_60 = 0;
    }
    bVar0 = true;
    bVar1 = true;
    if (unk_0xCD97B9861557C025())
    {
        bVar0 = false;
    }
    if (!unk_0x5E05FB12444196F6())
    {
        bVar0 = false;
        bVar1 = false;
    }
    if (Global_F025)
    {
        bVar0 = false;
        bVar1 = false;
    }
    if (!unk_0xB3E4EBF4EFCF92BD(unk_0x7A8732CFB5113E77()))
    {
        bVar0 = false;
        bVar1 = false;
    }
    if (bVar0)
    {
        iLocal_60 = SYSTEM::ROUND((unk_0x9927BD5F023FA79D() * 1000f));
    }
    iVar2 = 0;
    fVar3 = 0f;
    iVar2 = 0;
    while (iVar2 < Global_11F5E)
    {
        if (Global_11F5F[iVar2 /*9*/] >= 0)
        {
            iVar4 = Global_F100[Global_11F5F[iVar2 /*9*/] /*13*/];
            switch (iVar4)
            {
                case 6:
                    if (Global_11F5F[iVar2 /*9*/].f_6 != 0)
                    {
                        if (Global_11F5F[iVar2 /*9*/].f_7 == 1)
                        {
                            Global_11F5F[iVar2 /*9*/].f_8 = 0;
                            Global_11F5F[iVar2 /*9*/].f_1 = 0;
                            Global_11F5F[iVar2 /*9*/].f_7 = 0;
                        }
                        else if (unk_0xD4B321D9096B01FC(Global_11F5F[iVar2 /*9*/].f_6))
                        {
                            if (!unk_0xF4B969E0807E76C7(Global_11F5F[iVar2 /*9*/].f_6, 0))
                            {
                                iLocal_64 = Global_11F5F[iVar2 /*9*/].f_8;
                                iLocal_63 = unk_0x35D31BEBAFD53DE6(Global_11F5F[iVar2 /*9*/].f_6);
                                iLocal_65 = (iLocal_64 - iLocal_63);
                                if (iLocal_65 > 0)
                                {
                                    Global_11F5F[iVar2 /*9*/].f_1 = (Global_11F5F[iVar2 /*9*/].f_1 + iLocal_65);
                                    if (Global_11F5F[iVar2 /*9*/].f_1 < 0)
                                    {
                                        Global_11F5F[iVar2 /*9*/].f_1 = (Global_11F5F[iVar2 /*9*/].f_1 * -1);
                                    }
                                }
                                Global_11F5F[iVar2 /*9*/].f_8 = iLocal_63;
                            }
                        }
                        else
                        {
                            Global_11F5F[iVar2 /*9*/].f_6 = 0;
                        }
                    }
                    break;
                
                case 1:
                    Global_11F5F[iVar2 /*9*/].f_1 = (Global_11F5F[iVar2 /*9*/].f_1 + iLocal_60);
                    break;
                
                case 2:
                    if (Global_F026)
                    {
                        Global_11F5F[iVar2 /*9*/].f_1 = (Global_11F5F[iVar2 /*9*/].f_1 + iLocal_60);
                    }
                    break;
                
                case 3:
                    break;
                
                case 4:
                    if (Global_F027)
                    {
                        if (Global_F029 == -1 || Global_11F5F[iVar2 /*9*/] == Global_F029)
                        {
                            if (((Global_11F5F[iVar2 /*9*/] == 339 || Global_11F5F[iVar2 /*9*/] == 179) || Global_11F5F[iVar2 /*9*/] == 342) || Global_11F5F[iVar2 /*9*/] == 234)
                            {
                                Global_11F5F[iVar2 /*9*/].f_1 = (Global_11F5F[iVar2 /*9*/].f_1 + SYSTEM::ROUND((unk_0x9927BD5F023FA79D() * 1000f)));
                            }
                            else
                            {
                                Global_11F5F[iVar2 /*9*/].f_1 = (Global_11F5F[iVar2 /*9*/].f_1 + iLocal_60);
                            }
                        }
                    }
                    break;
                
                case 5:
                    if (bVar1)
                    {
                        if (Global_F02B == -1 || Global_F02B == Global_11F5F[iVar2 /*9*/])
                        {
                            if (!Global_F02A == 0)
                            {
                                if (unk_0xD4B321D9096B01FC(Global_F02A))
                                {
                                    if (!unk_0xF4B969E0807E76C7(Global_F02A, 0))
                                    {
                                        if (unk_0x905FBA24E7FA8D23(Global_F02A))
                                        {
                                            fVar3 = unk_0xB8D4A2BAA78AB950(Global_F02A);
                                            if (fVar3 > Global_11F5F[iVar2 /*9*/].f_2)
                                            {
                                                Global_11F5F[iVar2 /*9*/].f_2 = fVar3;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    break;
                
                case 7:
                    break;
                
                case 8:
                    break;
                
                case 9:
                    break;
                
                case 13:
                    break;
                
                case 12:
                    break;
                
                case 10:
                case 11:
                case 14:
                    break;
                
                case 16:
                    break;
                
                case 17:
                    if (func_51(func_61()))
                    {
                        if (unk_0xD2E3AF497D091872(unk_0x7A8732CFB5113E77()) && unk_0x4E8D470805D9D5E5(unk_0x7A8732CFB5113E77()))
                        {
                            Global_11F5F[iVar2 /*9*/].f_1 = (Global_11F5F[iVar2 /*9*/].f_1 + iLocal_60);
                        }
                    }
                    break;
                
                case 15:
                    break;
                
                default:
                    break;
                }
        }
        iVar2++;
    }
}

void func_105()//Position - 0xE935
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    bool bVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    
    if ((((Global_12022 == 0 && Global_12018 == 0) && Global_F0BE == 0) && Global_F03C == 0) && !Global_11FF6)
    {
        return;
    }
    iVar10 = 0;
    if (Global_F03C > 0)
    {
        iVar0 = 0;
        iVar0 = 0;
        while (iVar0 < 64)
        {
            if (Global_F03D[iVar0 /*2*/] != 0)
            {
                if (!unk_0xD4B321D9096B01FC(Global_F03D[iVar0 /*2*/]))
                {
                    Global_F03D[iVar0 /*2*/] = 0;
                    Global_F03C = (Global_F03C - 1);
                }
            }
            iVar0++;
        }
    }
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < unk_0xEC6B468B6F580489(0))
    {
        iVar3 = unk_0x87C4D2EB1080B8EA(0, iVar0);
        switch (iVar3)
        {
            case 142:
                unk_0x3C1EC42A2CC175C5(0, iVar0, &iVar4, 1);
                if (unk_0xD4B321D9096B01FC(iVar4))
                {
                    unk_0xF4B969E0807E76C7(iVar4, 0);
                    if (Global_F0BE > 0)
                    {
                        iVar7 = unk_0x7F375072508F738F(iVar4);
                        iVar1 = 0;
                        iVar1 = 0;
                        while (iVar1 < Global_F0BE)
                        {
                            if (Global_F0BF[iVar1 /*2*/] == iVar7)
                            {
                                iVar10 = (iVar10 + Global_F0BF[iVar1 /*2*/].f_1);
                            }
                            iVar1++;
                        }
                    }
                    if (unk_0x4625051E51BA911B(iVar4) && unk_0x3D464779B732760F(iVar4) != unk_0x0FA8183DAD2B3203())
                    {
                        iVar5 = unk_0x940C28AC395C07F4(unk_0x3D464779B732760F(iVar4));
                        iVar14 = 0;
                        if (unk_0xD4B321D9096B01FC(iVar5))
                        {
                            if (unk_0x905FBA24E7FA8D23(iVar5))
                            {
                                if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
                                {
                                    iVar15 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
                                }
                                else
                                {
                                    iVar15 = unk_0x9B79A29933E4A8FA();
                                }
                                if (unk_0xD4B321D9096B01FC(iVar15) && unk_0xD05B0DA3866791D0(iVar5) == iVar15)
                                {
                                    iVar14 = 1;
                                }
                            }
                        }
                        if ((unk_0x4625051E51BA911B(iVar5) && unk_0x23625FE58BACEBFD(unk_0x7A8732CFB5113E77()) == unk_0x3D464779B732760F(iVar5)) || iVar14)
                        {
                            if (unk_0x4625051E51BA911B(iVar5))
                            {
                                iVar6 = unk_0x53DE6FC9ABF25A84(unk_0x3D464779B732760F(iVar4));
                                if (Global_F03C > 0)
                                {
                                    iVar11 = func_109(iVar4);
                                    if (iVar11 != -1)
                                    {
                                        unk_0x780F6A9A674A5ECD(unk_0x3D464779B732760F(Global_F03D[iVar11 /*2*/]), &iLocal_67);
                                        if (iLocal_67 == 31086 || iLocal_67 == 39317)
                                        {
                                            if (iVar6 != 0 && iVar6 != joaat("weapon_unarmed"))
                                            {
                                                func_108();
                                                Global_F03D[iVar11 /*2*/] = 0;
                                                Global_F03C = (Global_F03C - 1);
                                            }
                                        }
                                    }
                                }
                                if (Global_12022 > 0)
                                {
                                    iVar1 = 0;
                                    iVar1 = 0;
                                    while (iVar1 < Global_12022)
                                    {
                                        if (Global_12019[iVar1 /*2*/] == iVar6)
                                        {
                                            func_96(Global_12019[iVar1 /*2*/].f_1, 1, 0);
                                        }
                                        iVar1++;
                                    }
                                }
                            }
                            if (Global_11FF6)
                            {
                                iVar12 = unk_0x3D464779B732760F(iVar4);
                                iVar13 = unk_0x2E654F8AB5C1A8F9(iVar12);
                                if (!unk_0x00123AB82C5FAC28(iVar4) && ((((((!iVar13 == 22 && !iVar13 == 19) && !iVar13 == 17) && !iVar13 == 18) && !iVar13 == 27) && !iVar13 == 29) && !iVar13 == 28))
                                {
                                    iVar9 = unk_0xE75136B5F2DB982B(unk_0x23625FE58BACEBFD(unk_0x7A8732CFB5113E77()), unk_0x3D464779B732760F(iVar4));
                                    switch (iVar9)
                                    {
                                        case 255:
                                        case 0:
                                        case 1:
                                        case 2:
                                            if (unk_0x4628FE1FA97908B0(unk_0x3D464779B732760F(iVar4)))
                                            {
                                                func_107();
                                            }
                                            break;
                                        
                                        default:
                                            break;
                                        }
                                    }
                            }
                            if (Global_12018 > 0)
                            {
                                iVar1 = 0;
                                iVar2 = Global_12018;
                                bVar8 = false;
                                while (!bVar8)
                                {
                                    if (Global_11FF7[iVar1 /*2*/] != 0)
                                    {
                                        if (unk_0xD4B321D9096B01FC(Global_11FF7[iVar1 /*2*/]))
                                        {
                                            if (unk_0xF4B969E0807E76C7(Global_11FF7[iVar1 /*2*/], 0))
                                            {
                                                if (Global_11FF7[iVar1 /*2*/] == iVar4)
                                                {
                                                    func_96(Global_11FF7[iVar1 /*2*/].f_1, 1, 0);
                                                    Global_11FF7[iVar1 /*2*/] = 0;
                                                }
                                            }
                                        }
                                        else
                                        {
                                            Global_11FF7[iVar1 /*2*/] = 0;
                                        }
                                        iVar2 = (iVar2 - 1);
                                    }
                                    iVar1++;
                                    if (iVar1 == 16 || iVar2 == 0)
                                    {
                                        bVar8 = true;
                                    }
                                }
                                if (Global_12018 > 0)
                                {
                                    while (Global_11FF7[(Global_12018 - 1) /*2*/] == 0 && Global_12018 > 1)
                                    {
                                        if (Global_12018 > 1)
                                        {
                                            Global_12018 = (Global_12018 - 1);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                break;
        }
        iVar0++;
    }
    if (iVar10 > 0)
    {
        func_106(iVar10);
    }
}

void func_106(int iParam0)//Position - 0xED3E
{
    int iVar0;
    int iVar1;
    
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < Global_11F5E)
    {
        iVar1 = Global_11F5F[iVar0 /*9*/];
        if (Global_F100[iVar1 /*13*/] == 13)
        {
            Global_11F5F[iVar0 /*9*/].f_1 = (Global_11F5F[iVar0 /*9*/].f_1 + iParam0);
        }
        iVar0++;
    }
}

void func_107()//Position - 0xED8B
{
    int iVar0;
    int iVar1;
    
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < Global_11F5E)
    {
        iVar1 = Global_11F5F[iVar0 /*9*/];
        if (Global_F100[iVar1 /*13*/] == 16)
        {
            Global_11F5F[iVar0 /*9*/].f_1++;
        }
        iVar0++;
    }
}

void func_108()//Position - 0xEDD7
{
    bool bVar0;
    int iVar1;
    int iVar2;
    
    if (Global_F03C == 0)
    {
        return;
    }
    bVar0 = false;
    iVar1 = 0;
    while (iVar1 < Global_11F5E)
    {
        iVar2 = Global_11F5F[iVar1 /*9*/];
        if (Global_F100[iVar2 /*13*/] == 7)
        {
            Global_11F5F[iVar1 /*9*/].f_1++;
            bVar0 = true;
        }
        iVar1++;
    }
    if (!bVar0)
    {
    }
}

int func_109(int iParam0)//Position - 0xEE35
{
    int iVar0;
    
    if (Global_F03C == 0)
    {
        return -1;
    }
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < 64)
    {
        if (Global_F03D[iVar0 /*2*/] == iParam0)
        {
            return iVar0;
        }
        iVar0++;
    }
    return -1;
}

void func_110()//Position - 0xEE70
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    var uVar6;
    int iVar7;
    bool bVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    
    if (unk_0x077ED6513DF9A182())
    {
        if (unk_0x8AC95B65F0AE0DBB() == 33)
        {
            if (unk_0xF93957CF27C6231B() == 33)
            {
                iVar0 = unk_0x1376688E851E6C06();
                iVar1 = -1;
                iVar2 = (iVar0 - 4);
                if (((iVar0 - 4) % 3) == 0)
                {
                    iVar0 = ((iVar0 - 4) / 3);
                    iVar3 = 0;
                    iVar3 = 0;
                    while (iVar3 < iVar0)
                    {
                        iVar4 = unk_0x0195D6515C9299B5(iVar3 * 3 + 1);
                        iVar5 = unk_0x0195D6515C9299B5(iVar3 * 3 + 2);
                        switch (iVar5)
                        {
                            case 84:
                            case 100:
                            case 69:
                            case 41:
                            case 54:
                                iVar1 = iVar4;
                                break;
                        }
                        func_87(iVar4, iVar5);
                        iVar3++;
                    }
                    uVar6 = unk_0x0195D6515C9299B5(iVar2);
                    iVar7 = unk_0x0195D6515C9299B5(iVar2 + 1);
                    bVar8 = false;
                    if (unk_0x0195D6515C9299B5(iVar2 + 2) > 0)
                    {
                        bVar8 = true;
                    }
                    iVar9 = 0;
                    if (unk_0x0195D6515C9299B5(iVar2 + 3) > 0)
                    {
                        iVar9 = 1;
                    }
                    Global_11FF4 = iVar9;
                    Global_11FF5 = uVar6;
                    if (iVar1 == -1)
                    {
                        func_75(SYSTEM::TO_FLOAT(iVar7), bVar8);
                    }
                    else
                    {
                        func_75(SYSTEM::TO_FLOAT(iVar1), bVar8);
                    }
                }
                func_111();
            }
        }
        if (unk_0x8AC95B65F0AE0DBB() == 13)
        {
            if (unk_0xF93957CF27C6231B() == 37)
            {
                iVar10 = unk_0x1376688E851E6C06();
                if (iVar10 == 3)
                {
                    iVar11 = unk_0x0195D6515C9299B5(0);
                    iVar12 = unk_0x0195D6515C9299B5(1);
                    iVar13 = unk_0x0195D6515C9299B5(2);
                    Global_1B3C8.f_92B[iVar11 /*2*/] = iVar12;
                    Global_1B3C8.f_92B[iVar11 /*2*/].f_1 = iVar13;
                    func_111();
                }
            }
        }
    }
}

int func_111()//Position - 0xEFD0
{
    if (func_98(0))
    {
        return 0;
    }
    if (Global_18194.f_8)
    {
        if (Global_18194.f_A > 0)
        {
            return 0;
        }
    }
    else if (Global_18194.f_A > 1)
    {
        return 0;
    }
    Global_18194.f_A++;
    return 1;
}

void func_112()//Position - 0xF01B
{
    Global_12C25 = 0;
    Global_12C26 = 0;
    Global_F01F = 0;
    SYSTEM::SETTIMERA(0);
    SYSTEM::SETTIMERB(0);
    unk_0x418A0C9B89A8D0B1();
    iLocal_60 = 0;
    Global_F01B = 0;
    Global_F029 = -1;
    iLocal_70 = 0;
    Global_F019 = 0;
    Global_F018 = 0;
    iLocal_72 = 0;
    Global_F02A = 0;
    Global_F028 = 0;
    Global_F015 = 0;
    Global_12022 = 0;
    Global_12018 = 0;
    func_4();
    func_3();
    if (bLocal_73)
    {
        func_1(&Local_45);
        bLocal_73 = false;
    }
    if (Global_3)
    {
        unk_0x9C9E32388A7886A2();
    }
    Global_F024 = 0;
    Global_F020 = 0;
}

